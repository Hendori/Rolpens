/* SortArray<Variant, _ArrayVariantSort, true>::partitioner(long, long, Variant, Variant*) const
   [clone .isra.0] */long SortArray<Variant,_ArrayVariantSort,true>::partitioner(long param_1, long param_2, Variant_conflict *param_3, long param_4) {
   undefined4 uVar1;
   undefined8 uVar2;
   bool bVar3;
   Variant_conflict *pVVar4;
   long lVar5;
   Variant_conflict *pVVar6;
   long in_FS_OFFSET;
   long local_c0;
   bool local_7d;
   undefined4 local_7c;
   undefined8 local_78;
   undefined1 local_70[16];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   pVVar6 = (Variant_conflict*)( param_4 + param_1 * 0x18 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = param_2;
   local_c0 = param_1;
   do {
      local_7d = false;
      local_78 = 0;
      local_7c = 2;
      local_70 = (undefined1[16])0x0;
      Variant::evaluate((Operator*)&local_7c, pVVar6, param_3, (Variant_conflict*)&local_78, &local_7d);
      if (local_7d == false) {
         Variant::Variant((Variant_conflict*)local_58, false);
         if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }
         local_70._8_8_ = uStack_48;
         local_70._0_8_ = local_50;
         local_78 = CONCAT44(local_78._4_4_, local_58[0]);
      }
      bVar3 = Variant::operator_cast_to_bool((Variant_conflict*)&local_78);
      if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }
      if (bVar3) {
         if (param_2 + -1 == local_c0) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            goto LAB_001000e6;
         }
      } else {
         LAB_001000e6:lVar5 = lVar5 + -1;
         pVVar4 = (Variant_conflict*)( param_4 + lVar5 * 0x18 );
         while (true) {
            local_7d = false;
            local_78 = 0;
            local_7c = 2;
            local_70 = (undefined1[16])0x0;
            Variant::evaluate((Operator*)&local_7c, param_3, pVVar4, (Variant_conflict*)&local_78, &local_7d);
            if (local_7d == false) {
               Variant::Variant((Variant_conflict*)local_58, false);
               if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                  Variant::_clear_internal();
               }
               local_70._8_8_ = uStack_48;
               local_70._0_8_ = local_50;
               local_78 = CONCAT44(local_78._4_4_, local_58[0]);
            }
            bVar3 = Variant::operator_cast_to_bool((Variant_conflict*)&local_78);
            if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
               Variant::_clear_internal();
            }
            if (!bVar3) goto joined_r0x0010021a;
            if (lVar5 == param_1) break;
            lVar5 = lVar5 + -1;
            pVVar4 = pVVar4 + -0x18;
         };
         _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         joined_r0x0010021a:if (lVar5 <= local_c0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return local_c0;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         local_50 = *(undefined8*)( pVVar6 + 8 );
         uStack_48 = *(undefined8*)( pVVar6 + 0x10 );
         uVar1 = *(undefined4*)pVVar6;
         *(undefined4*)pVVar6 = 0;
         if (pVVar6 == pVVar4) {
            if (Variant::needs_deinit != '\0') {
               Variant::_clear_internal();
            }
         } else {
            *(undefined4*)pVVar6 = *(undefined4*)pVVar4;
            uVar2 = *(undefined8*)( pVVar4 + 0x10 );
            *(undefined8*)( pVVar6 + 8 ) = *(undefined8*)( pVVar4 + 8 );
            *(undefined8*)( pVVar6 + 0x10 ) = uVar2;
         }
         *(undefined4*)pVVar4 = uVar1;
         *(undefined8*)( pVVar4 + 8 ) = local_50;
         *(undefined8*)( pVVar4 + 0x10 ) = uStack_48;
      }
      local_c0 = local_c0 + 1;
      pVVar6 = pVVar6 + 0x18;
   } while ( true );
}/* SortArray<Variant, _ArrayVariantSort, true>::adjust_heap(long, long, long, Variant, Variant*)
   const [clone .isra.0] */void SortArray<Variant,_ArrayVariantSort,true>::adjust_heap(long param_1, long param_2, long param_3, Variant_conflict *param_4, long param_5) {
   bool bVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Variant_conflict *pVVar5;
   Variant_conflict *this;
   long in_FS_OFFSET;
   Variant_conflict *local_e0;
   long local_d8;
   bool local_9d;
   undefined4 local_9c;
   int local_98[8];
   int local_78[2];
   undefined1 local_70[16];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar3 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar3 < param_3) {
      local_d8 = param_2;
      do {
         local_9d = false;
         local_9c = 2;
         this(Variant_conflict * )(param_5 + ( lVar3 + -1 + param_1 ) * 0x18);
         local_78[0] = 0;
         local_78[1] = 0;
         local_70 = (undefined1[16])0x0;
         pVVar5 = (Variant_conflict*)( param_5 + ( param_1 + lVar3 ) * 0x18 );
         Variant::evaluate((Operator*)&local_9c, pVVar5, this, (Variant_conflict*)local_78, &local_9d);
         if (local_9d == false) {
            Variant::Variant((Variant_conflict*)local_58, false);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_70._8_8_ = uStack_48;
            local_70._0_8_ = local_50;
            local_78[0] = local_58[0];
         }
         bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         lVar2 = lVar3 + -1;
         lVar4 = lVar3;
         if (!bVar1) {
            lVar4 = lVar3 + 1;
            lVar2 = lVar3;
            this =
            pVVar5;
         }
         lVar3 = lVar4 * 2;
         Variant::operator =((Variant_conflict*)( param_5 + ( local_d8 + param_1 ) * 0x18 ), this);
         local_d8 = lVar2;
      } while ( lVar3 < param_3 );
      pVVar5 = this;
      if (lVar3 == param_3) goto LAB_0010076e;
   } else {
      this(Variant_conflict * )(param_5 + ( param_2 + param_1 ) * 0x18);
      if (lVar3 != param_3) {
         Variant::Variant((Variant_conflict*)local_98, param_4);
         goto LAB_001006a3;
      }
      LAB_0010076e:lVar2 = lVar3 + -1;
      pVVar5 = (Variant_conflict*)( param_5 + ( param_1 + lVar2 ) * 0x18 );
      Variant::operator =(this, pVVar5);
   }
   Variant::Variant((Variant_conflict*)local_98, param_4);
   lVar3 = ( lVar2 + -1 ) - ( lVar2 + -1 >> 0x3f );
   this =
   pVVar5;
   if (param_2 < lVar2) {
      do {
         lVar4 = lVar3 >> 1;
         local_9d = false;
         pVVar5 = (Variant_conflict*)( param_5 + ( param_1 + lVar4 ) * 0x18 );
         local_9c = 2;
         local_70 = (undefined1[16])0x0;
         local_78[0] = 0;
         local_78[1] = 0;
         Variant::evaluate((Operator*)&local_9c, pVVar5, (Variant_conflict*)local_98, (Variant_conflict*)local_78, &local_9d);
         if (local_9d == false) {
            Variant::Variant((Variant_conflict*)local_58, false);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_70._8_8_ = uStack_48;
            local_70._0_8_ = local_50;
            local_78[0] = local_58[0];
         }
         bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         this(Variant_conflict * )(param_5 + ( lVar2 + param_1 ) * 0x18);
         if (!bVar1) break;
         Variant::operator =(this, pVVar5);
         lVar3 = ( lVar4 + -1 ) - ( lVar4 + -1 >> 0x3f );
         lVar2 = lVar4;
         this =
         pVVar5;
      } while ( param_2 < lVar4 );
   }
   LAB_001006a3:local_e0 = (Variant_conflict*)local_98;
   Variant::operator =(this, local_e0);
   if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SortArray<Variant, _ArrayVariantSort, true>::partial_sort(long, long, long, Variant*) const
   [clone .isra.0] */void SortArray<Variant,_ArrayVariantSort,true>::partial_sort(long param_1, long param_2, long param_3, Variant_conflict *param_4) {
   bool bVar1;
   long lVar2;
   Variant_conflict *pVVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool local_7d;
   undefined4 local_7c;
   int local_78[2];
   undefined1 local_70[16];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar2 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar2 < 2) {
      if (param_2 <= param_3) goto LAB_00100b06;
      LAB_001008bf:lVar4 = param_3;
      do {
         while (true) {
            pVVar3 = param_4 + lVar4 * 0x18;
            local_7d = false;
            local_7c = 2;
            local_78[0] = 0;
            local_78[1] = 0;
            local_70 = (undefined1[16])0x0;
            Variant::evaluate((Operator*)&local_7c, pVVar3, param_4 + param_1 * 0x18, (Variant_conflict*)local_78, &local_7d);
            if (local_7d == false) {
               Variant::Variant((Variant_conflict*)local_58, false);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_70._8_8_ = uStack_48;
               local_70._0_8_ = local_50;
               local_78[0] = local_58[0];
            }
            bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            if (bVar1) break;
            LAB_00100930:lVar4 = lVar4 + 1;
            if (lVar4 == param_2) goto LAB_00100a48;
         };
         Variant::Variant((Variant_conflict*)local_78, pVVar3);
         Variant::operator =(pVVar3, param_4 + param_1 * 0x18);
         Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
         adjust_heap(param_1, 0, lVar2, (Variant_conflict*)local_58, param_4);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (( &Variant::needs_deinit )[local_78[0]] == '\0') goto LAB_00100930;
         lVar4 = lVar4 + 1;
         Variant::_clear_internal();
      } while ( lVar4 != param_2 );
      LAB_00100a48:if (lVar2 < 2) goto LAB_00100b06;
   } else {
      lVar4 = lVar2 + -2 >> 1;
      pVVar3 = param_4 + ( param_1 + lVar4 ) * 0x18;
      while (true) {
         Variant::Variant((Variant_conflict*)local_58, pVVar3);
         adjust_heap(param_1, lVar4, lVar2, (Variant_conflict*)local_58, param_4);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         pVVar3 = pVVar3 + -0x18;
         if (lVar4 == 0) break;
         lVar4 = lVar4 + -1;
      };
      if (param_3 < param_2) goto LAB_001008bf;
   }
   pVVar3 = param_4 + param_3 * 0x18 + -0x18;
   lVar2 = ( param_3 + -1 ) - param_1;
   do {
      Variant::Variant((Variant_conflict*)local_78, pVVar3);
      Variant::operator =(pVVar3, param_4 + param_1 * 0x18);
      Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
      adjust_heap(param_1, 0, lVar2, (Variant_conflict*)local_58, param_4);
      if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      pVVar3 = pVVar3 + -0x18;
      bVar1 = 1 < lVar2;
      lVar2 = lVar2 + -1;
   } while ( bVar1 );
   LAB_00100b06:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SortArray<Variant, _ArrayVariantSort, true>::linear_insert(long, long, Variant*) const [clone
   .isra.0] */void SortArray<Variant,_ArrayVariantSort,true>::linear_insert(long param_1, long param_2, Variant_conflict *param_3) {
   bool bVar1;
   Variant_conflict *pVVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool local_bd;
   undefined4 local_bc;
   int local_b8[8];
   int local_98[8];
   int local_78[2];
   undefined1 local_70[16];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pVVar2 = param_3 + param_2 * 0x18;
   Variant::Variant((Variant_conflict*)local_b8, pVVar2);
   local_bd = false;
   local_78[0] = 0;
   local_78[1] = 0;
   local_bc = 2;
   local_70 = (undefined1[16])0x0;
   Variant::evaluate((Operator*)&local_bc, (Variant_conflict*)local_b8, param_3 + param_1 * 0x18, (Variant_conflict*)local_78, &local_bd);
   if (local_bd == false) {
      Variant::Variant((Variant_conflict*)local_58, false);
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      local_70._8_8_ = uStack_48;
      local_70._0_8_ = local_50;
      local_78[0] = local_58[0];
   }
   bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
   if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (bVar1) {
      if (param_1 < param_2) {
         do {
            param_2 = param_2 + -1;
            Variant::operator =(pVVar2, pVVar2 + -0x18);
            pVVar2 = pVVar2 + -0x18;
         } while ( param_1 != param_2 );
      }
      Variant::operator =(param_3 + param_1 * 0x18, (Variant_conflict*)local_b8);
   } else {
      lVar3 = param_2 + -1;
      Variant::Variant((Variant_conflict*)local_98, (Variant_conflict*)local_b8);
      pVVar2 = param_3 + param_2 * 0x18 + -0x18;
      while (true) {
         local_bd = false;
         local_78[0] = 0;
         local_78[1] = 0;
         local_bc = 2;
         local_70 = (undefined1[16])0x0;
         Variant::evaluate((Operator*)&local_bc, (Variant_conflict*)local_98, pVVar2, (Variant_conflict*)local_78, &local_bd);
         if (local_bd == false) {
            Variant::Variant((Variant_conflict*)local_58, false);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_70._8_8_ = uStack_48;
            local_70._0_8_ = local_50;
            local_78[0] = local_58[0];
         }
         bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (!bVar1) goto LAB_00100ead;
         if (lVar3 == 0) break;
         lVar3 = lVar3 + -1;
         Variant::operator =(pVVar2 + 0x18, pVVar2);
         pVVar2 = pVVar2 + -0x18;
      };
      _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
      LAB_00100ead:Variant::operator =(pVVar2 + 0x18, (Variant_conflict*)local_98);
      if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }
   }
   if (( &Variant::needs_deinit )[local_b8[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
}/* SortArray<Variant, _ArrayVariantSort, true>::median_of_3(Variant const&, Variant const&, Variant
   const&) const [clone .isra.0] */Variant_conflict *SortArray<Variant,_ArrayVariantSort,true>::median_of_3(Variant_conflict *param_1, Variant_conflict *param_2, Variant_conflict *param_3) {
   bool bVar1;
   long in_FS_OFFSET;
   bool local_7d;
   undefined4 local_7c;
   int local_78[2];
   undefined1 local_70[16];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7d = false;
   local_78[0] = 0;
   local_78[1] = 0;
   local_7c = 2;
   local_70 = (undefined1[16])0x0;
   Variant::evaluate((Operator*)&local_7c, param_1, param_2, (Variant_conflict*)local_78, &local_7d);
   if (local_7d == false) {
      Variant::Variant((Variant_conflict*)local_58, false);
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      local_70._8_8_ = uStack_48;
      local_70._0_8_ = local_50;
   }
   bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
   if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   local_7d = false;
   local_78[0] = 0;
   local_78[1] = 0;
   local_7c = 2;
   local_70 = (undefined1[16])0x0;
   if (bVar1) {
      Variant::evaluate((Operator*)&local_7c, param_2, param_3, (Variant_conflict*)local_78, &local_7d);
      if (local_7d == false) {
         Variant::Variant((Variant_conflict*)local_58, false);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_78[0] = local_58[0];
         local_70._8_8_ = uStack_48;
         local_70._0_8_ = local_50;
      }
      bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (!bVar1) {
         local_7d = false;
         local_78[0] = 0;
         local_78[1] = 0;
         local_7c = 2;
         local_70 = (undefined1[16])0x0;
         Variant::evaluate((Operator*)&local_7c, param_1, param_3, (Variant_conflict*)local_78, &local_7d);
         if (local_7d == false) {
            Variant::Variant((Variant_conflict*)local_58, false);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70._8_8_ = uStack_48;
            local_70._0_8_ = local_50;
         }
         bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (bVar1) goto LAB_0010110a;
         LAB_00101107:param_3 = param_1;
         goto LAB_0010110a;
      }
   } else {
      Variant::evaluate((Operator*)&local_7c, param_1, param_3, (Variant_conflict*)local_78, &local_7d);
      if (local_7d == false) {
         Variant::Variant((Variant_conflict*)local_58, false);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_78[0] = local_58[0];
         local_70._8_8_ = uStack_48;
         local_70._0_8_ = local_50;
      }
      bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (bVar1) goto LAB_00101107;
      local_7d = false;
      local_78[0] = 0;
      local_78[1] = 0;
      local_7c = 2;
      local_70 = (undefined1[16])0x0;
      Variant::evaluate((Operator*)&local_7c, param_2, param_3, (Variant_conflict*)local_78, &local_7d);
      if (local_7d == false) {
         Variant::Variant((Variant_conflict*)local_58, false);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_78[0] = local_58[0];
         local_70._8_8_ = uStack_48;
         local_70._0_8_ = local_50;
      }
      bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (bVar1) goto LAB_0010110a;
   }
   param_3 = param_2;
   LAB_0010110a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_3;
}/* SortArray<Variant, _ArrayVariantSort, true>::introsort(long, long, Variant*, long) const [clone
   .isra.0] */void SortArray<Variant,_ArrayVariantSort,true>::introsort(long param_1, long param_2, Variant_conflict *param_3, long param_4) {
   long lVar1;
   Variant_conflict *pVVar2;
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
   long in_FS_OFFSET;
   long local_138;
   long local_118;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   long local_e8;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      LAB_00101f3b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      if (param_4 != 0) {
         lVar4 = param_2 * 2;
         lVar3 = param_2;
         LAB_00101462:param_4 = param_4 + -1;
         pVVar2 = (Variant_conflict*)median_of_3(param_3 + param_1 * 0x18, param_3 + ( ( lVar1 >> 1 ) + param_1 ) * 0x18, param_3 + ( lVar4 + lVar3 ) * 8 + -0x18);
         Variant::Variant((Variant_conflict*)local_58, pVVar2);
         param_2 = partitioner(param_1, lVar3, (Variant_conflict*)local_58, param_3);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         lVar1 = lVar3 - param_2;
         if (0x10 < lVar1) {
            if (param_4 != 0) {
               lVar4 = lVar3;
               local_f8 = param_4;
               LAB_00101529:do {
                  local_f8 = local_f8 + -1;
                  pVVar2 = (Variant_conflict*)median_of_3(param_3 + param_2 * 0x18, param_3 + ( ( lVar1 >> 1 ) + param_2 ) * 0x18, param_3 + lVar4 * 0x18 + -0x18);
                  Variant::Variant((Variant_conflict*)local_58, pVVar2);
                  lVar3 = partitioner(param_2, lVar4, (Variant_conflict*)local_58, param_3);
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) {
                     if (local_f8 != 0) {
                        lVar5 = lVar4;
                        local_f0 = local_f8;
                        LAB_001015fd:do {
                           local_f0 = local_f0 + -1;
                           pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar3 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar3 ) * 0x18, param_3 + lVar5 * 0x18 + -0x18);
                           Variant::Variant((Variant_conflict*)local_58, pVVar2);
                           lVar4 = partitioner(lVar3, lVar5, (Variant_conflict*)local_58, param_3);
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           lVar1 = lVar5 - lVar4;
                           if (0x10 < lVar1) {
                              if (local_f0 != 0) {
                                 lVar6 = lVar5;
                                 local_e8 = local_f0;
                                 LAB_001016c7:local_e8 = local_e8 + -1;
                                 pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar4 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar4 ) * 0x18, param_3 + lVar6 * 0x18 + -0x18);
                                 Variant::Variant((Variant_conflict*)local_58, pVVar2);
                                 lVar5 = partitioner(lVar4, lVar6, (Variant_conflict*)local_58, param_3);
                                 if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                    Variant::_clear_internal();
                                 }
                                 lVar1 = lVar6 - lVar5;
                                 if (0x10 < lVar1) goto code_r0x0010174a;
                                 LAB_00101cd6:lVar1 = lVar5 - lVar4;
                                 if (0x10 < lVar1) goto LAB_00101ce6;
                                 goto LAB_00101d8f;
                              }
                              LAB_00101e7b:partial_sort(lVar4, lVar5, lVar5, param_3);
                           }
                           LAB_00101e1b:lVar1 = lVar4 - lVar3;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar3 - param_2;
                              lVar4 = lVar3;
                              if (0x10 < lVar1) goto LAB_00101529;
                              goto LAB_00101f16;
                           }
                           lVar5 = lVar4;
                        } while ( local_f0 != 0 );
                     }
                     partial_sort(lVar3, lVar4, lVar4, param_3);
                  }
                  LAB_00101dc9:lVar1 = lVar3 - param_2;
                  if (lVar1 < 0x11) goto LAB_00101f16;
                  lVar4 = lVar3;
                  if (local_f8 == 0) break;
               } while ( true );
            }
            partial_sort(param_2, lVar3, lVar3, param_3);
         }
         lVar1 = param_2 - param_1;
         if (0x10 < lVar1) {
            if (param_4 != 0) goto LAB_00101ee2;
            goto LAB_00101f6a;
         }
         goto LAB_00101f3b;
      }
      LAB_00101f6a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(param_1, param_2, param_2, param_3);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x0010174a:if (local_e8 != 0) {
      lVar7 = lVar6;
      local_108 = local_e8;
      LAB_00101789:do {
         local_108 = local_108 + -1;
         pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar5 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar5 ) * 0x18, param_3 + lVar7 * 0x18 + -0x18);
         Variant::Variant((Variant_conflict*)local_58, pVVar2);
         lVar6 = partitioner(lVar5, lVar7, (Variant_conflict*)local_58, param_3);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         lVar1 = lVar7 - lVar6;
         if (0x10 < lVar1) {
            if (local_108 != 0) {
               lVar8 = lVar7;
               local_118 = local_108;
               LAB_00101858:do {
                  local_118 = local_118 + -1;
                  pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar6 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar6 ) * 0x18, param_3 + lVar8 * 0x18 + -0x18);
                  Variant::Variant((Variant_conflict*)local_58, pVVar2);
                  lVar7 = partitioner(lVar6, lVar8, (Variant_conflict*)local_58, param_3);
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                     if (local_118 != 0) {
                        lVar9 = lVar8;
                        local_138 = local_118;
                        LAB_00101909:do {
                           local_138 = local_138 + -1;
                           pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar7 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar7 ) * 0x18, param_3 + lVar9 * 0x18 + -0x18);
                           Variant::Variant((Variant_conflict*)local_58, pVVar2);
                           lVar8 = partitioner(lVar7, lVar9, (Variant_conflict*)local_58, param_3);
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           lVar1 = lVar9 - lVar8;
                           if (0x10 < lVar1) {
                              if (local_138 != 0) {
                                 lVar10 = lVar9;
                                 local_100 = local_138;
                                 LAB_001019c5:do {
                                    local_100 = local_100 + -1;
                                    pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar8 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar8 ) * 0x18, param_3 + lVar10 * 0x18 + -0x18);
                                    Variant::Variant((Variant_conflict*)local_58, pVVar2);
                                    lVar9 = partitioner(lVar8, lVar10, (Variant_conflict*)local_58, param_3);
                                    if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                       Variant::_clear_internal();
                                    }
                                    lVar1 = lVar10 - lVar9;
                                    if (0x10 < lVar1) {
                                       if (local_100 != 0) {
                                          lVar11 = local_100;
                                          lVar12 = lVar10;
                                          do {
                                             lVar11 = lVar11 + -1;
                                             pVVar2 = (Variant_conflict*)median_of_3(param_3 + lVar9 * 0x18, param_3 + ( ( lVar1 >> 1 ) + lVar9 ) * 0x18, param_3 + lVar12 * 0x18 + -0x18);
                                             Variant::Variant((Variant_conflict*)local_58, pVVar2);
                                             lVar10 = partitioner(lVar9, lVar12, (Variant_conflict*)local_58, param_3);
                                             if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                                Variant::_clear_internal();
                                             }
                                             introsort(lVar10, lVar12, param_3, lVar11);
                                             lVar1 = lVar10 - lVar9;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar9 - lVar8;
                                                lVar10 = lVar9;
                                                if (lVar1 < 0x11) goto LAB_00101ba6;
                                                goto LAB_001019c5;
                                             }
                                             lVar12 = lVar10;
                                          } while ( lVar11 != 0 );
                                       }
                                       partial_sort(lVar9, lVar10, lVar10, param_3);
                                    }
                                    lVar1 = lVar9 - lVar8;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar8 - lVar7;
                                       lVar9 = lVar8;
                                       if (lVar1 < 0x11) goto LAB_00101bf9;
                                       goto LAB_00101909;
                                    }
                                    lVar10 = lVar9;
                                 } while ( local_100 != 0 );
                              }
                              partial_sort(lVar8, lVar9, lVar9, param_3);
                           }
                           LAB_00101ba6:lVar1 = lVar8 - lVar7;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar7 - lVar6;
                              lVar8 = lVar7;
                              if (lVar1 < 0x11) goto LAB_00101b56;
                              goto LAB_00101858;
                           }
                           lVar9 = lVar8;
                        } while ( local_138 != 0 );
                     }
                     partial_sort(lVar7, lVar8, lVar8, param_3);
                  }
                  LAB_00101bf9:lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                     lVar1 = lVar6 - lVar5;
                     lVar7 = lVar6;
                     if (lVar1 < 0x11) goto LAB_00101cd6;
                     goto LAB_00101789;
                  }
                  lVar8 = lVar7;
               } while ( local_118 != 0 );
            }
            partial_sort(lVar6, lVar7, lVar7, param_3);
         }
         LAB_00101b56:lVar1 = lVar6 - lVar5;
         if (lVar1 < 0x11) {
            lVar1 = lVar5 - lVar4;
            lVar6 = lVar5;
            if (lVar1 < 0x11) goto LAB_00101e1b;
            goto LAB_001016c7;
         }
         lVar7 = lVar6;
      } while ( local_108 != 0 );
   }
   partial_sort(lVar5, lVar6, lVar6, param_3);
   lVar1 = lVar5 - lVar4;
   if (lVar1 < 0x11) {
      LAB_00101d8f:lVar1 = lVar4 - lVar3;
      lVar5 = lVar4;
      if (lVar1 < 0x11) goto LAB_00101dc9;
      goto LAB_001015fd;
   }
   LAB_00101ce6:lVar6 = lVar5;
   if (local_e8 == 0) goto LAB_00101e7b;
   goto LAB_001016c7;
   LAB_00101f16:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) goto LAB_00101f3b;
   LAB_00101ee2:lVar4 = param_2 * 2;
   lVar3 = param_2;
   goto LAB_00101462;
}/* Array::begin() const */void Array::begin(void) {
   undefined8 uVar1;
   long *in_RSI;
   undefined8 *in_RDI;
   uVar1 = *(undefined8*)( *in_RSI + 0x18 );
   *in_RDI = *(undefined8*)( *in_RSI + 0x10 );
   in_RDI[1] = uVar1;
   return;
}/* Array::end() const */void Array::end(void) {
   long lVar1;
   long lVar2;
   long *in_RSI;
   long *in_RDI;
   lVar1 = *(long*)( *in_RSI + 0x18 );
   lVar2 = *(long*)( *in_RSI + 0x10 );
   if (lVar2 != 0) {
      lVar2 = lVar2 + *(long*)( lVar2 + -8 ) * 0x18;
   }
   *in_RDI = lVar2;
   in_RDI[1] = lVar1;
   return;
}/* Array::operator[](int) const */long Array::operator [](Array *this, int param_1) {
   Variant_conflict *this_00;
   long lVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   lVar3 = (long)param_1;
   this_00 = *(Variant_conflict**)( *(long*)this + 0x18 );
   lVar1 = *(long*)( *(long*)this + 0x10 );
   if (this_00 == (Variant_conflict*)0x0) {
      if (param_1 < 0) {
         LAB_001020e0:if (lVar1 != 0) goto LAB_001020e5;
      } else if (lVar1 != 0) {
         lVar4 = *(long*)( lVar1 + -8 );
         if (lVar3 < lVar4) {
            return lVar1 + lVar3 * 0x18;
         }
         goto LAB_001020e9;
      }
      LAB_00102160:lVar4 = 0;
   } else {
      if (lVar3 < 0) goto LAB_001020e0;
      if (lVar1 == 0) goto LAB_00102160;
      if (lVar3 < *(long*)( lVar1 + -8 )) {
         Variant::operator =(this_00, (Variant_conflict*)( lVar1 + lVar3 * 0x18 ));
         return *(long*)( *(long*)this + 0x18 );
      }
      LAB_001020e5:lVar4 = *(long*)( lVar1 + -8 );
   }
   LAB_001020e9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* Array::size() const */undefined4 Array::size(Array *this) {
   if (*(long*)( *(long*)this + 0x10 ) != 0) {
      return *(undefined4*)( *(long*)( *(long*)this + 0x10 ) + -8 );
   }
   return 0;
}/* Array::is_empty() const */undefined8 Array::is_empty(Array *this) {
   return CONCAT71(( int7 )(( ulong ) * (long*)this >> 8), *(long*)( *(long*)this + 0x10 ) == 0);
}/* Array::recursive_equal(Array const&, int) const */undefined8 Array::recursive_equal(Array *this, Array *param_1, int param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   char cVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   lVar1 = *(long*)this;
   lVar2 = *(long*)param_1;
   if (lVar1 == lVar2) {
      return 1;
   }
   lVar3 = *(long*)( lVar1 + 0x10 );
   lVar9 = *(long*)( lVar2 + 0x10 );
   if (lVar3 == 0) {
      lVar10 = 0;
      lVar8 = 0;
      if (lVar9 == 0) {
         if (param_2 < 0x65) {
            return 1;
         }
         goto LAB_001022c0;
      }
      LAB_001021de:lVar9 = *(long*)( lVar9 + -8 );
   } else {
      iVar7 = (int)*(undefined8*)( lVar3 + -8 );
      lVar10 = (long)iVar7;
      lVar8 = (long)iVar7;
      if (lVar9 != 0) goto LAB_001021de;
      lVar9 = 0;
   }
   if (lVar9 != lVar8) {
      return 0;
   }
   if (param_2 < 0x65) {
      if ((int)lVar10 < 1) {
         return 1;
      }
      lVar9 = 0;
      while (lVar3 != 0) {
         lVar8 = *(long*)( lVar3 + -8 );
         if (lVar8 <= lVar9) goto LAB_00102263;
         lVar4 = *(long*)( lVar2 + 0x10 );
         if (lVar4 == 0) break;
         lVar8 = *(long*)( lVar4 + -8 );
         if (lVar8 <= lVar9) goto LAB_00102263;
         cVar6 = Variant::hash_compare((Variant_conflict*)( lVar3 + lVar9 * 0x18 ), (int)lVar4 + (int)( lVar9 * 0x18 ), (bool)( (char)param_2 + '\x01' ));
         if (cVar6 == '\0') {
            return 0;
         }
         lVar9 = lVar9 + 1;
         if (lVar10 == lVar9) {
            return 1;
         }
         lVar3 = *(long*)( lVar1 + 0x10 );
      };
      lVar8 = 0;
      LAB_00102263:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   LAB_001022c0:_err_print_error("recursive_equal", "core/variant/array.cpp", 0x95, "Max recursion reached", 0, 0);
   return 1;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) const */void Array::operator ==(Array *this, Array *param_1) {
   recursive_equal(this, param_1, 0);
   return;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) const */uint Array::operator !=(Array *this, Array *param_1) {
   uint uVar1;
   uVar1 = recursive_equal(this, param_1, 0);
   return uVar1 ^ 1;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) const */ulong Array::operator <(Array *this, Array *param_1) {
   long lVar1;
   char cVar2;
   uint uVar3;
   uint uVar4;
   Variant_conflict *pVVar5;
   Variant_conflict *pVVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   ulong unaff_R15;
   lVar1 = *(long*)( *(long*)param_1 + 0x10 );
   if (*(long*)( *(long*)this + 0x10 ) == 0) {
      unaff_R15 = 0;
      if (lVar1 != 0) {
         unaff_R15 = ( ulong )(0 < *(int*)( lVar1 + -8 ));
      }
   } else {
      uVar3 = ( uint ) * (undefined8*)( *(long*)( *(long*)this + 0x10 ) + -8 );
      if (lVar1 == 0) {
         unaff_R15 = ( ulong )(uVar3 >> 0x1f);
      } else {
         uVar8 = ( uint ) * (undefined8*)( lVar1 + -8 );
         uVar9 = uVar8;
         if ((int)uVar3 <= (int)uVar8) {
            uVar9 = uVar3;
         }
         if (0 < (int)uVar9) {
            uVar7 = 0;
            do {
               pVVar5 = (Variant_conflict*)operator[](param_1, uVar7);
               pVVar6 = (Variant_conflict*)operator[](this, uVar7);
               uVar4 = Variant::operator <(pVVar6, pVVar5);
               unaff_R15 = (ulong)uVar4;
               if ((char)uVar4 != '\0') goto LAB_001023e7;
               pVVar5 = (Variant_conflict*)operator[](this, uVar7);
               pVVar6 = (Variant_conflict*)operator[](param_1, uVar7);
               cVar2 = Variant::operator <(pVVar6, pVVar5);
               if (cVar2 != '\0') goto LAB_001023e7;
               uVar7 = uVar7 + 1;
            } while ( uVar9 != uVar7 );
         }
         unaff_R15 = CONCAT71(( int7 )(unaff_R15 >> 8), (int)uVar3 < (int)uVar8);
      }
   }
   LAB_001023e7:return unaff_R15 & 0xffffffff;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) const */uint Array::operator <=(Array *this, Array *param_1) {
   uint uVar1;
   uVar1 = operator < ( param_1,this );
   return uVar1 ^ 1;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) const */void Array::operator >(Array *this, Array *param_1) {
   operator<(param_1,this)
   ;;
   return;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) const */uint Array::operator >=(Array *this, Array *param_1) {
   uint uVar1;
   uVar1 = operator < ( this,param_1 );
   return uVar1 ^ 1;
}/* Array::recursive_hash(int) const */uint Array::recursive_hash(Array *this, int param_1) {
   int iVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   if (100 < param_1) {
      _err_print_error("recursive_hash", "core/variant/array.cpp", 0xc3, "Max recursion reached", 0, 0);
      return 0;
   }
   lVar3 = *(long*)( *(long*)this + 0x10 );
   if (lVar3 == 0) {
      uVar2 = 0xf4627479;
   } else {
      lVar4 = 0;
      uVar2 = 0x4516f40e;
      do {
         if (*(long*)( lVar3 + -8 ) <= lVar4) break;
         iVar1 = (int)lVar4;
         lVar4 = lVar4 + 1;
         iVar1 = Variant::recursive_hash((int)lVar3 + iVar1 * 0x18);
         uVar2 = ( iVar1 * 0x16a88000 | ( uint )(iVar1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ uVar2;
         uVar2 = ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
         lVar3 = *(long*)( *(long*)this + 0x10 );
      } while ( lVar3 != 0 );
      uVar2 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
      uVar2 = ( uVar2 >> 0xd ^ uVar2 ) * -0x3d4d51cb;
      uVar2 = uVar2 >> 0x10 ^ uVar2;
   }
   return uVar2;
}/* Array::hash() const */void Array::hash(Array *this) {
   recursive_hash(this, 0);
   return;
}/* Array::front() const */void Array::front(void) {
   Variant_conflict *pVVar1;
   Array *in_RSI;
   Variant_conflict *in_RDI;
   if (*(long*)( *(long*)in_RSI + 0x10 ) != 0) {
      pVVar1 = (Variant_conflict*)operator[](in_RSI, 0);
      Variant::Variant(in_RDI, pVVar1);
      return;
   }
   _err_print_error("front", "core/variant/array.cpp", 0x14d, "Condition \"_p->array.is_empty()\" is true. Returning: Variant()", "Can\'t take value from empty array.", 0, 0);
   *(undefined4*)in_RDI = 0;
   *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
   return;
}/* Array::back() const */void Array::back(void) {
   Variant_conflict *pVVar1;
   Array *in_RSI;
   Variant_conflict *in_RDI;
   if (*(long*)( *(long*)in_RSI + 0x10 ) != 0) {
      pVVar1 = (Variant_conflict*)operator[](in_RSI, (int)*(undefined8*)( *(long*)( *(long*)in_RSI + 0x10 ) + -8 ) + -1);
      Variant::Variant(in_RDI, pVVar1);
      return;
   }
   _err_print_error(&_LC16, "core/variant/array.cpp", 0x152, "Condition \"_p->array.is_empty()\" is true. Returning: Variant()", "Can\'t take value from empty array.", 0, 0);
   *(undefined4*)in_RDI = 0;
   *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
   return;
}/* Array::pick_random() const */void Array::pick_random(void) {
   code *pcVar1;
   uint uVar2;
   Variant_conflict *pVVar3;
   Array *in_RSI;
   Variant_conflict *in_RDI;
   if (*(long*)( *(long*)in_RSI + 0x10 ) == 0) {
      _err_print_error("pick_random", "core/variant/array.cpp", 0x157, "Condition \"_p->array.is_empty()\" is true. Returning: Variant()", "Can\'t take value from empty array.", 0, 0);
      *(undefined4*)in_RDI = 0;
      *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
      return;
   }
   uVar2 = Math::rand();
   if (*(long*)( *(long*)in_RSI + 0x10 ) != 0) {
      pVVar3 = (Variant_conflict*)operator[](in_RSI, (int)( (long)(ulong)uVar2 % *(long*)( *(long*)( *(long*)in_RSI + 0x10 ) + -8 ) ));
      Variant::Variant(in_RDI, pVVar3);
      return;
   }
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Array::get(int) const */void Array::get(Array *this, int param_1) {
   operator[](this,param_1)
   ;;
   return;
}/* Array::min() const */void Array::min(void) {
   bool bVar1;
   Variant_conflict *pVVar2;
   long lVar3;
   int iVar4;
   Array *in_RSI;
   undefined4 *in_RDI;
   long in_FS_OFFSET;
   bool local_9d;
   undefined4 local_9c;
   int local_98[2];
   undefined1 local_90[16];
   int local_78[2];
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (undefined1[16])0x0;
   local_98[0] = 0;
   local_98[1] = 0;
   if (*(long*)( *(long*)in_RSI + 0x10 ) == 0) {
      iVar4 = 0;
   } else {
      if (0 < *(int*)( *(long*)( *(long*)in_RSI + 0x10 ) + -8 )) {
         iVar4 = 0;
         pVVar2 = (Variant_conflict*)operator[](in_RSI, 0);
         Variant::operator =((Variant_conflict*)local_98, pVVar2);
         while (lVar3 = *(long*)( *(long*)in_RSI + 0x10 ),lVar3 != 0) {
            while (true) {
               iVar4 = iVar4 + 1;
               if (*(int*)( lVar3 + -8 ) <= iVar4) goto LAB_00102890;
               local_70 = (undefined1[16])0x0;
               local_78[0] = 0;
               local_78[1] = 0;
               pVVar2 = (Variant_conflict*)operator[](in_RSI, iVar4);
               Variant::Variant((Variant_conflict*)local_58, pVVar2);
               local_9c = 2;
               Variant::evaluate((Operator*)&local_9c, (Variant_conflict*)local_58, (Variant_conflict*)local_98, (Variant_conflict*)local_78, &local_9d);
               if (local_9d == false) {
                  *in_RDI = 0;
                  *(undefined1(*) [16])( in_RDI + 2 ) = (undefined1[16])0x0;
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  goto LAB_001028a4;
               }
               bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
               if (bVar1) {
                  Variant::operator =((Variant_conflict*)local_98, (Variant_conflict*)local_58);
               }
               if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (( &Variant::needs_deinit )[local_78[0]] == '\0') break;
               Variant::_clear_internal();
               lVar3 = *(long*)( *(long*)in_RSI + 0x10 );
               if (lVar3 == 0) goto LAB_00102890;
            };
         };
      }
      LAB_00102890:iVar4 = local_98[0];
   }
   *in_RDI = iVar4;
   *(undefined8*)( in_RDI + 2 ) = local_90._0_8_;
   *(undefined8*)( in_RDI + 4 ) = local_90._8_8_;
   LAB_001028a4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::max() const */void Array::max(void) {
   bool bVar1;
   Variant_conflict *pVVar2;
   long lVar3;
   int iVar4;
   Array *in_RSI;
   undefined4 *in_RDI;
   long in_FS_OFFSET;
   bool local_9d;
   undefined4 local_9c;
   int local_98[2];
   undefined1 local_90[16];
   int local_78[2];
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (undefined1[16])0x0;
   local_98[0] = 0;
   local_98[1] = 0;
   if (*(long*)( *(long*)in_RSI + 0x10 ) == 0) {
      iVar4 = 0;
   } else {
      if (0 < *(int*)( *(long*)( *(long*)in_RSI + 0x10 ) + -8 )) {
         iVar4 = 0;
         pVVar2 = (Variant_conflict*)operator[](in_RSI, 0);
         Variant::operator =((Variant_conflict*)local_98, pVVar2);
         while (lVar3 = *(long*)( *(long*)in_RSI + 0x10 ),lVar3 != 0) {
            while (true) {
               iVar4 = iVar4 + 1;
               if (*(int*)( lVar3 + -8 ) <= iVar4) goto LAB_00102ac0;
               local_70 = (undefined1[16])0x0;
               local_78[0] = 0;
               local_78[1] = 0;
               pVVar2 = (Variant_conflict*)operator[](in_RSI, iVar4);
               Variant::Variant((Variant_conflict*)local_58, pVVar2);
               local_9c = 4;
               Variant::evaluate((Operator*)&local_9c, (Variant_conflict*)local_58, (Variant_conflict*)local_98, (Variant_conflict*)local_78, &local_9d);
               if (local_9d == false) {
                  *in_RDI = 0;
                  *(undefined1(*) [16])( in_RDI + 2 ) = (undefined1[16])0x0;
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  goto LAB_00102ad4;
               }
               bVar1 = Variant::operator_cast_to_bool((Variant_conflict*)local_78);
               if (bVar1) {
                  Variant::operator =((Variant_conflict*)local_98, (Variant_conflict*)local_58);
               }
               if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (( &Variant::needs_deinit )[local_78[0]] == '\0') break;
               Variant::_clear_internal();
               lVar3 = *(long*)( *(long*)in_RSI + 0x10 );
               if (lVar3 == 0) goto LAB_00102ac0;
            };
         };
      }
      LAB_00102ac0:iVar4 = local_98[0];
   }
   *in_RDI = iVar4;
   *(undefined8*)( in_RDI + 2 ) = local_90._0_8_;
   *(undefined8*)( in_RDI + 4 ) = local_90._8_8_;
   LAB_00102ad4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::id() const */undefined8 Array::id(Array *this) {
   return *(undefined8*)this;
}/* Array::set_typed(unsigned int, StringName const&, Variant const&) */long Array::set_typed(uint param_1, StringName *param_2, Variant_conflict *param_3) {
   uint *puVar1;
   char cVar2;
   long lVar3;
   Object *pOVar4;
   Object *pOVar5;
   undefined4 in_register_0000003c;
   long *plVar6;
   int iVar7;
   long lStack_30;
   plVar6 = (long*)CONCAT44(in_register_0000003c, param_1);
   puVar1 = (uint*)*plVar6;
   if (*(long*)( puVar1 + 6 ) != 0) {
      _err_print_error("set_typed", "core/variant/array.cpp", 0x351, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      return lStack_30;
   }
   if (( *(long*)( puVar1 + 4 ) != 0 ) && ( 0 < *(long*)( *(long*)( puVar1 + 4 ) + -8 ) )) {
      lVar3 = _err_print_error("set_typed", "core/variant/array.cpp", 0x352, "Condition \"_p->array.size() > 0\" is true.", "Type can only be set when array is empty.", 0, 0);
      return lVar3;
   }
   if (1 < *puVar1) {
      lVar3 = _err_print_error("set_typed", "core/variant/array.cpp", 0x353, "Condition \"_p->refcount.get() > 1\" is true.", "Type can only be set when array has no more than one user.", 0, 0);
      return lVar3;
   }
   if (*(int*)( *plVar6 + 0x20 ) != 0) {
      lVar3 = _err_print_error("set_typed", "core/variant/array.cpp", 0x354, "Condition \"_p->typed.type != Variant::NIL\" is true.", "Type can only be set once.", 0, 0);
      return lVar3;
   }
   iVar7 = (int)param_2;
   if (( *(long*)param_3 != 0 ) && ( iVar7 != 0x18 )) {
      lVar3 = _err_print_error("set_typed", "core/variant/array.cpp", 0x355, "Condition \"p_class_name != StringName() && p_type != Variant::OBJECT\" is true.", "Class names can only be set for type OBJECT", 0, 0);
      return lVar3;
   }
   lVar3 = Variant::get_validated_object();
   if (( ( lVar3 == 0 ) || ( pOVar4 = (Object*)__dynamic_cast(lVar3, &Object::typeinfo, &Script::typeinfo, 0) ),pOVar4 == (Object*)0x0 )) {
      lVar3 = *plVar6;
      *(int*)( lVar3 + 0x20 ) = iVar7;
      StringName::operator =((StringName*)( lVar3 + 0x28 ), (StringName*)param_3);
      lVar3 = *plVar6;
      pOVar5 = *(Object**)( lVar3 + 0x30 );
      if (pOVar5 == (Object*)0x0) {
         LAB_00102d3f:*(char**)( lVar3 + 0x38 ) = "TypedArray";
         return lVar3;
      }
      *(undefined8*)( lVar3 + 0x30 ) = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         lVar3 = *plVar6;
         goto LAB_00102d3f;
      }
      pOVar4 = (Object*)0x0;
      LAB_00102f13:cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }
      lVar3 = *plVar6;
      *(char**)( lVar3 + 0x38 ) = "TypedArray";
      if (pOVar4 == (Object*)0x0) {
         return lVar3;
      }
   } else {
      if (*(long*)param_3 == 0) {
         _err_print_error("set_typed", "core/variant/array.cpp", 0x357, "Condition \"script.is_valid() && p_class_name == StringName()\" is true.", "Script class can only be set together with base class name", 0, 0);
         lVar3 = RefCounted::unreference();
         cVar2 = (char)lVar3;
         goto joined_r0x00102ce4;
      }
      lVar3 = *plVar6;
      *(int*)( lVar3 + 0x20 ) = iVar7;
      StringName::operator =((StringName*)( lVar3 + 0x28 ), (StringName*)param_3);
      lVar3 = *plVar6;
      pOVar5 = *(Object**)( lVar3 + 0x30 );
      if (pOVar5 == pOVar4) {
         *(char**)( lVar3 + 0x38 ) = "TypedArray";
      } else {
         *(Object**)( lVar3 + 0x30 ) = pOVar4;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( lVar3 + 0x30 ) = 0;
         }
         if (( pOVar5 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0') goto LAB_00102f13;
         *(char**)( *plVar6 + 0x38 ) = "TypedArray";
      }
   }
   lVar3 = RefCounted::unreference();
   cVar2 = (char)lVar3;
   joined_r0x00102ce4:if (( cVar2 != '\0' ) && ( lVar3 = predelete_handler(pOVar4) ),(char)lVar3 != '\0') {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      lVar3 = Memory::free_static(pOVar4, false);
      return lVar3;
   }
   return lVar3;
}/* Array::set_typed(ContainerType const&) */void Array::set_typed(Array *this, ContainerType *param_1) {
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_38, *(Object**)( param_1 + 0x10 ));
   set_typed((uint)this, (StringName*)( ulong ) * (uint*)param_1, (Variant_conflict*)( param_1 + 8 ));
   if (( &Variant::needs_deinit )[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::is_typed() const */undefined4 Array::is_typed(Array *this) {
   return CONCAT31(( int3 )(( uint ) * (int*)( *(long*)this + 0x20 ) >> 8), *(int*)( *(long*)this + 0x20 ) != 0);
}/* Array::is_same_typed(Array const&) const */bool Array::is_same_typed(Array *this, Array *param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)param_1;
   lVar2 = *(long*)this;
   if (( *(int*)( lVar2 + 0x20 ) == *(int*)( lVar1 + 0x20 ) ) && ( *(long*)( lVar2 + 0x28 ) == *(long*)( lVar1 + 0x28 ) )) {
      return *(long*)( lVar2 + 0x30 ) == *(long*)( lVar1 + 0x30 );
   }
   return false;
}/* Array::is_same_instance(Array const&) const */undefined8 Array::is_same_instance(Array *this, Array *param_1) {
   return CONCAT71(( int7 )(( ulong ) * (long*)param_1 >> 8), *(long*)this == *(long*)param_1);
}/* Array::get_element_type() const */void Array::get_element_type(void) {
   long lVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   long *in_RSI;
   undefined4 *in_RDI;
   *(undefined1(*) [16])( in_RDI + 2 ) = (undefined1[16])0x0;
   lVar1 = *in_RSI;
   *in_RDI = *(undefined4*)( lVar1 + 0x20 );
   StringName::operator =((StringName*)( in_RDI + 2 ), (StringName*)( lVar1 + 0x28 ));
   pOVar2 = *(Object**)( in_RDI + 4 );
   pOVar3 = *(Object**)( *in_RSI + 0x30 );
   if (pOVar3 != pOVar2) {
      *(Object**)( in_RDI + 4 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( in_RDI + 4 ) = 0;
         }
      }
      if (pOVar2 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar2);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
      }
   }
   return;
}/* Array::get_typed_builtin() const */undefined4 Array::get_typed_builtin(Array *this) {
   return *(undefined4*)( *(long*)this + 0x20 );
}/* Array::get_typed_class_name() const */void Array::get_typed_class_name(void) {
   long *in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, (StringName*)( *in_RSI + 0x28 ));
   return;
}/* Array::get_typed_script() const */void Array::get_typed_script(void) {
   long *in_RSI;
   Variant_conflict *in_RDI;
   Variant::Variant(in_RDI, *(Object**)( *in_RSI + 0x30 ));
   return;
}/* Array::create_read_only() */Array * __thiscall Array::create_read_only(Array *this){
   long lVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)operator_new(0x40, "");
   *puVar2 = 0;
   *(undefined1(*) [16])( puVar2 + 4 ) = (undefined1[16])0x0;
   puVar2[8] = 0;
   *(char**)( puVar2 + 0xe ) = "container";
   *(undefined1(*) [16])( puVar2 + 10 ) = (undefined1[16])0x0;
   *(undefined4**)this = puVar2;
   *puVar2 = 1;
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      return this;
   }
   puVar2 = (undefined4*)operator_new(0x18, "");
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   lVar1 = *(long*)this;
   *puVar2 = 0;
   *(undefined4**)( lVar1 + 0x18 ) = puVar2;
   return this;
}/* Array::make_read_only() */void Array::make_read_only(Array *this) {
   long lVar1;
   undefined4 *puVar2;
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      return;
   }
   puVar2 = (undefined4*)operator_new(0x18, "");
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   lVar1 = *(long*)this;
   *puVar2 = 0;
   *(undefined4**)( lVar1 + 0x18 ) = puVar2;
   return;
}/* Array::is_read_only() const */undefined8 Array::is_read_only(Array *this) {
   return CONCAT71(( int7 )(( ulong ) * (long*)this >> 8), *(long*)( *(long*)this + 0x18 ) != 0);
}/* Array::Array() */void Array::Array(Array *this) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)operator_new(0x40, "");
   *puVar1 = 0;
   puVar1[8] = 0;
   *(char**)( puVar1 + 0xe ) = "container";
   *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 10 ) = (undefined1[16])0x0;
   *(undefined4**)this = puVar1;
   *puVar1 = 1;
   return;
}/* Array::_unref() const */void Array::_unref(Array *this) {
   int *piVar1;
   Object *pOVar2;
   char cVar3;
   void *pvVar4;
   piVar1 = *(int**)this;
   if (piVar1 != (int*)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         pvVar4 = *(void**)this;
         piVar1 = *(int**)( (long)pvVar4 + 0x18 );
         if (piVar1 != (int*)0x0) {
            if (( &Variant::needs_deinit )[*piVar1] != '\0') {
               Variant::_clear_internal();
            }
            Memory::free_static(piVar1, false);
            pvVar4 = *(void**)this;
         }
         if (*(long*)( (long)pvVar4 + 0x30 ) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = *(Object**)( (long)pvVar4 + 0x30 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }
            }
         }
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar4 + 0x28 ) != 0 )) {
            StringName::unref();
         }
         CowData<Variant>::_unref((CowData<Variant>*)( (long)pvVar4 + 0x10 ));
         Memory::free_static(pvVar4, false);
      }
      *(undefined8*)this = 0;
      return;
   }
   return;
}/* Array::_ref(Array const&) const */void Array::_ref(Array *this, Array *param_1) {
   int iVar1;
   int *piVar2;
   int iVar3;
   char *pcVar4;
   undefined8 uVar5;
   bool bVar6;
   piVar2 = *(int**)param_1;
   if (piVar2 == (int*)0x0) {
      uVar5 = 0x35;
      pcVar4 = "Parameter \"_fp\" is null.";
      LAB_001033ca:_err_print_error(&_LC35, "core/variant/array.cpp", uVar5, pcVar4, 0, 0);
      return;
   }
   if (*(int**)this != piVar2) {
      do {
         iVar1 = *piVar2;
         if (iVar1 == 0) goto LAB_001033e8;
         LOCK();
         iVar3 = *piVar2;
         bVar6 = iVar1 == iVar3;
         if (bVar6) {
            *piVar2 = iVar1 + 1;
            iVar3 = iVar1;
         }
         UNLOCK();
      } while ( !bVar6 );
      if (iVar3 == -1) {
         LAB_001033e8:uVar5 = 0x3d;
         pcVar4 = "Condition \"!success\" is true.";
         goto LAB_001033ca;
      }
      _unref(this);
      *(int**)this = piVar2;
   }
   return;
}/* Array::TEMPNAMEPLACEHOLDERVALUE(Array const&) */void Array::operator =(Array *this, Array *param_1) {
   if (this != param_1) {
      _ref(this, param_1);
      return;
   }
   return;
}/* Array::Array(Array const&) */void Array::Array(Array *this, Array *param_1) {
   *(undefined8*)this = 0;
   _ref(this, param_1);
   return;
}/* Array::~Array() */void Array::~Array(Array *this) {
   _unref(this);
   return;
}/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */void CowData<Variant>::_ref(CowData<Variant> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<Variant>::_copy_on_write() [clone .isra.0] */void CowData<Variant>::_copy_on_write(CowData<Variant> *this) {
   Variant_conflict *this_00;
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   Variant_conflict *pVVar5;
   ulong uVar6;
   long lVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }
   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar4 = 0;
   lVar7 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         this_00 = (Variant_conflict*)( (long)( puVar3 + 2 ) + lVar4 );
         lVar7 = lVar7 + 1;
         pVVar5 = (Variant_conflict*)( *(long*)this + lVar4 );
         lVar4 = lVar4 + 0x18;
         Variant::Variant(this_00, pVVar5);
      } while ( lVar1 != lVar7 );
   }
   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}/* Array::sort() */void Array::sort(Array *this) {
   ulong uVar1;
   Variant_conflict *pVVar2;
   bool bVar3;
   Variant_conflict *pVVar4;
   ulong uVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   Variant_conflict *pVVar9;
   Variant_conflict *this_00;
   long in_FS_OFFSET;
   ulong local_c8;
   bool local_9d;
   undefined4 local_9c;
   int local_98[8];
   undefined8 local_78;
   undefined1 local_70[16];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar6 = *(long*)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar6 + 0x18 ) == 0) {
      if (( *(long*)( lVar6 + 0x10 ) != 0 ) && ( uVar1 = uVar1 != 0 )) {
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar6 + 0x10 ));
         pVVar2 = *(Variant_conflict**)( lVar6 + 0x10 );
         if (uVar1 != 1) {
            lVar6 = 0;
            uVar8 = uVar1;
            do {
               uVar8 = (long)uVar8 >> 1;
               lVar6 = lVar6 + 1;
            } while ( uVar8 != 1 );
            lVar6 = lVar6 * 2;
            uVar8 = uVar1;
            if ((long)uVar1 < 0x11) {
               uVar8 = 1;
               do {
                  uVar5 = uVar8 + 1;
                  SortArray<Variant,_ArrayVariantSort,true>::linear_insert(0, uVar8, pVVar2);
                  uVar8 = uVar5;
               } while ( uVar1 != uVar5 );
            } else {
               do {
                  lVar6 = lVar6 + -1;
                  pVVar4 = (Variant_conflict*)SortArray<Variant,_ArrayVariantSort,true>::median_of_3(pVVar2, pVVar2 + ( ( uVar8 & 0xfffffffffffffffe ) + ( (long)uVar8 >> 1 ) ) * 8, pVVar2 + uVar8 * 0x18 + -0x18);
                  Variant::Variant((Variant_conflict*)local_58, pVVar4);
                  uVar5 = SortArray<Variant,_ArrayVariantSort,true>::partitioner(0, uVar8, (Variant_conflict*)local_58, pVVar2);
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  SortArray<Variant,_ArrayVariantSort,true>::introsort(uVar5, uVar8, pVVar2, lVar6);
                  lVar7 = 1;
                  if ((long)uVar5 < 0x11) goto LAB_00103728;
                  uVar8 = uVar5;
               } while ( lVar6 != 0 );
               SortArray<Variant,_ArrayVariantSort,true>::partial_sort(0, uVar5, uVar5, pVVar2);
               LAB_00103728:do {
                  lVar6 = lVar7 + 1;
                  SortArray<Variant,_ArrayVariantSort,true>::linear_insert(0, lVar7, pVVar2);
                  lVar7 = lVar6;
               } while ( lVar6 != 0x10 );
               pVVar4 = pVVar2 + 0x180;
               local_c8 = 0x10;
               do {
                  Variant::Variant((Variant_conflict*)local_98, pVVar4);
                  this_00 = pVVar4;
                  while (true) {
                     pVVar9 = this_00 + -0x18;
                     local_9d = false;
                     local_78 = 0;
                     local_9c = 2;
                     local_70 = (undefined1[16])0x0;
                     Variant::evaluate((Operator*)&local_9c, (Variant_conflict*)local_98, pVVar9, (Variant_conflict*)&local_78, &local_9d);
                     if (local_9d == false) {
                        Variant::Variant((Variant_conflict*)local_58, false);
                        if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                           Variant::_clear_internal();
                        }
                        local_70._8_8_ = uStack_48;
                        local_70._0_8_ = local_50;
                        local_78 = CONCAT44(local_78._4_4_, local_58[0]);
                     }
                     bVar3 = Variant::operator_cast_to_bool((Variant_conflict*)&local_78);
                     if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                        Variant::_clear_internal();
                     }
                     if (!bVar3) goto LAB_001038c4;
                     if (pVVar9 == pVVar2) break;
                     Variant::operator =(this_00, pVVar9);
                     this_00 = pVVar9;
                  };
                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  LAB_001038c4:Variant::operator =(this_00, (Variant_conflict*)local_98);
                  if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  local_c8 = local_c8 + 1;
                  pVVar4 = pVVar4 + 0x18;
               } while ( uVar1 != local_c8 );
            }
         }
      }
   } else {
      _err_print_error(&_LC40, "core/variant/array.cpp", 0x2b4, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Array::operator[](int) */long Array::operator [](Array *this, int param_1) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   lVar4 = (long)param_1;
   lVar3 = *(long*)this;
   lVar2 = *(long*)( lVar3 + 0x10 );
   if (*(Variant_conflict**)( lVar3 + 0x18 ) == (Variant_conflict*)0x0) {
      if (param_1 < 0) {
         if (lVar2 != 0) {
            lVar2 = *(long*)( lVar2 + -8 );
            goto LAB_00103a01;
         }
      } else if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         if (lVar4 < lVar2) {
            CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar3 + 0x10 ));
            return *(long*)( lVar3 + 0x10 ) + lVar4 * 0x18;
         }
         goto LAB_00103a01;
      }
      lVar2 = 0;
      LAB_00103a01:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar4, lVar2, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   if (lVar4 < 0) {
      if (lVar2 == 0) goto LAB_00103acd;
   } else {
      if (lVar2 == 0) {
         LAB_00103acd:lVar3 = 0;
         goto LAB_00103a84;
      }
      if (lVar4 < *(long*)( lVar2 + -8 )) {
         Variant::operator =(*(Variant_conflict**)( lVar3 + 0x18 ), (Variant_conflict*)( lVar2 + lVar4 * 0x18 ));
         return *(long*)( *(long*)this + 0x18 );
      }
   }
   lVar3 = *(long*)( lVar2 + -8 );
   LAB_00103a84:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar3, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Array::reverse() */void Array::reverse(Array *this) {
   int *piVar1;
   int *piVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   lVar3 = *(long*)this;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar3 + 0x18 ) == 0) {
      lVar4 = *(long*)( lVar3 + 0x10 );
      for (lVar7 = 0; ( lVar4 != 0 && ( lVar7 < *(long*)( lVar4 + -8 ) / 2 ) ); lVar7 = lVar7 + 1) {
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar3 + 0x10 ));
         lVar4 = *(long*)( lVar3 + 0x10 );
         if (lVar4 == 0) {
            lVar6 = 0;
         } else {
            lVar6 = *(long*)( lVar4 + -8 );
         }
         piVar2 = (int*)( lVar4 + -0x18 + ( lVar6 - lVar7 ) * 0x18 );
         piVar1 = (int*)( lVar4 + lVar7 * 0x18 );
         local_48[0] = *piVar1;
         local_40 = *(undefined8*)( piVar1 + 2 );
         uStack_38 = *(undefined8*)( piVar1 + 4 );
         *piVar1 = 0;
         if (piVar2 == piVar1) {
            if (piVar2 != local_48) {
               if (Variant::needs_deinit != '\0') {
                  Variant::_clear_internal();
               }
               goto LAB_00103b47;
            }
            LAB_00103c50:if (( &Variant::needs_deinit )[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }
         } else {
            *piVar1 = *piVar2;
            uVar5 = *(undefined8*)( piVar2 + 4 );
            *(undefined8*)( piVar1 + 2 ) = *(undefined8*)( piVar2 + 2 );
            *(undefined8*)( piVar1 + 4 ) = uVar5;
            *piVar2 = 0;
            if (piVar2 == local_48) goto LAB_00103c50;
            LAB_00103b47:*piVar2 = 0;
            *piVar2 = local_48[0];
            *(undefined8*)( piVar2 + 2 ) = local_40;
            *(undefined8*)( piVar2 + 4 ) = uStack_38;
         }
         lVar4 = *(long*)( lVar3 + 0x10 );
      }
   } else {
      _err_print_error("reverse", "core/variant/array.cpp", 0x2db, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::shuffle() */void Array::shuffle(Array *this) {
   Variant_conflict *this_00;
   long lVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   int iVar5;
   Variant_conflict *this_01;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   lVar1 = *(long*)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      if (*(long*)( lVar1 + 0x10 ) != 0) {
         uVar4 = *(ulong*)( *(long*)( lVar1 + 0x10 ) + -8 );
         iVar5 = (int)uVar4;
         if (1 < iVar5) {
            CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar1 + 0x10 ));
            lVar1 = *(long*)( lVar1 + 0x10 );
            uVar4 = uVar4 & 0xffffffff;
            this_01 = (Variant_conflict*)( lVar1 + (long)( iVar5 + -1 ) * 0x18 );
            do {
               uVar2 = Math::rand();
               this_00 = (Variant_conflict*)( lVar1 + ( ( uVar2 & 0xffffffff ) % uVar4 ) * 0x18 );
               Variant::Variant((Variant_conflict*)local_58, this_00);
               Variant::operator =(this_00, this_01);
               Variant::operator =(this_01, (Variant_conflict*)local_58);
               if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               uVar3 = (int)uVar4 - 1;
               uVar4 = (ulong)uVar3;
               this_01 = this_01 + -0x18;
            } while ( uVar3 != 1 );
         }
      }
   } else {
      _err_print_error("shuffle", "core/variant/array.cpp", 0x2be, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::end() */void Array::end(void) {
   long lVar1;
   long lVar2;
   long *in_RSI;
   long *in_RDI;
   lVar2 = *in_RSI;
   lVar1 = *(long*)( lVar2 + 0x18 );
   CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar2 + 0x10 ));
   lVar2 = *(long*)( lVar2 + 0x10 );
   if (*(long*)( *in_RSI + 0x10 ) != 0) {
      lVar2 = lVar2 + *(long*)( *(long*)( *in_RSI + 0x10 ) + -8 ) * 0x18;
   }
   *in_RDI = lVar2;
   in_RDI[1] = lVar1;
   return;
}/* Array::begin() */void Array::begin(void) {
   long lVar1;
   undefined8 uVar2;
   long *in_RSI;
   undefined8 *in_RDI;
   lVar1 = *in_RSI;
   uVar2 = *(undefined8*)( lVar1 + 0x18 );
   CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar1 + 0x10 ));
   *in_RDI = *(undefined8*)( lVar1 + 0x10 );
   in_RDI[1] = uVar2;
   return;
}/* Array::clear() */void Array::clear(Array *this) {
   long lVar1;
   lVar1 = *(long*)this;
   if (*(long*)( lVar1 + 0x18 ) != 0) {
      _err_print_error("clear", "core/variant/array.cpp", 0x7b, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      return;
   }
   if (( *(long*)( lVar1 + 0x10 ) != 0 ) && ( *(long*)( *(long*)( lVar1 + 0x10 ) + -8 ) != 0 )) {
      CowData<Variant>::_unref((CowData<Variant>*)( lVar1 + 0x10 ));
      return;
   }
   return;
}/* Array::pop_back() */void Array::pop_back(void) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   long *in_RSI;
   Variant_conflict *in_RDI;
   long lVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *in_RSI + 0x18 ) == 0) {
      lVar1 = *(long*)( *in_RSI + 0x10 );
      if (lVar1 == 0) {
         *(undefined4*)in_RDI = 0;
         *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
      } else {
         lVar2 = *(long*)( lVar1 + -8 );
         uVar4 = (int)lVar2 - 1;
         lVar5 = (long)(int)uVar4;
         if (( lVar2 <= lVar5 ) || ( lVar5 < 0 )) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         Variant::Variant((Variant_conflict*)local_48, (Variant_conflict*)( lVar1 + (ulong)uVar4 * 0x18 ));
         CowData<Variant>::resize<false>((CowData<Variant>*)( *in_RSI + 0x10 ), lVar5);
         Variant::Variant(in_RDI, (Variant_conflict*)local_48);
         if (( &Variant::needs_deinit )[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }
      }
   } else {
      _err_print_error("pop_back", "core/variant/array.cpp", 0x2e7, "Condition \"_p->read_only\" is true. Returning: Variant()", "Array is in read-only state.", 0, 0);
      *(undefined4*)in_RDI = 0;
      *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::remove_at(int) */undefined8 Array::remove_at(Array *this, int param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   int *piVar6;
   long lVar7;
   lVar2 = *(long*)this;
   if (*(long*)( lVar2 + 0x18 ) != 0) {
      uVar3 = 0;
      _err_print_error("remove_at", "core/variant/array.cpp", 0x1e3, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0);
      return uVar3;
   }
   lVar4 = (long)param_1;
   lVar5 = *(long*)( lVar2 + 0x10 );
   if (lVar4 < 0) {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + -8 );
         goto LAB_0010413d;
      }
   } else if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + -8 );
      if (lVar4 < lVar5) {
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar2 + 0x10 ));
         lVar5 = *(long*)( lVar2 + 0x10 );
         if (lVar5 == 0) {
            lVar7 = -1;
         } else {
            lVar7 = *(long*)( lVar5 + -8 ) + -1;
            if (lVar4 < lVar7) {
               piVar6 = (int*)( lVar5 + lVar4 * 0x18 );
               do {
                  if (( &Variant::needs_deinit )[*piVar6] != '\0') {
                     Variant::_clear_internal();
                  }
                  iVar1 = piVar6[6];
                  lVar4 = lVar4 + 1;
                  piVar6[6] = 0;
                  *piVar6 = iVar1;
                  *(undefined8*)( piVar6 + 2 ) = *(undefined8*)( piVar6 + 8 );
                  *(undefined8*)( piVar6 + 4 ) = *(undefined8*)( piVar6 + 10 );
                  piVar6 = piVar6 + 6;
               } while ( lVar7 != lVar4 );
            }
         }
         uVar3 = CowData<Variant>::resize<false>((CowData<Variant>*)( lVar2 + 0x10 ), lVar7);
         return uVar3;
      }
      goto LAB_0010413d;
   }
   lVar5 = 0;
   LAB_0010413d:uVar3 = _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar4, lVar5, "p_index", "size()", "", false, false);
   return uVar3;
}/* Array::pop_front() */void Array::pop_front(void) {
   int iVar1;
   Variant_conflict *pVVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long *in_RSI;
   long lVar6;
   Variant_conflict *in_RDI;
   long lVar7;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *in_RSI + 0x18 ) != 0) {
      _err_print_error("pop_front", "core/variant/array.cpp", 0x2f2, "Condition \"_p->read_only\" is true. Returning: Variant()", "Array is in read-only state.", 0, 0);
      *(undefined4*)in_RDI = 0;
      *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
      goto LAB_001042f3;
   }
   pVVar2 = *(Variant_conflict**)( *in_RSI + 0x10 );
   if (pVVar2 == (Variant_conflict*)0x0) {
      *(undefined4*)in_RDI = 0;
      *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
      goto LAB_001042f3;
   }
   if (*(long*)( pVVar2 + -8 ) < 1) {
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, *(long*)( pVVar2 + -8 ), "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   Variant::Variant((Variant_conflict*)local_58, pVVar2);
   lVar3 = *in_RSI;
   if (*(long*)( lVar3 + 0x10 ) == 0) {
      lVar6 = 0;
      LAB_00104353:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, 0, lVar6, "p_index", "size()", "", false, false);
   } else {
      lVar6 = *(long*)( *(long*)( lVar3 + 0x10 ) + -8 );
      if (lVar6 < 1) goto LAB_00104353;
      CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar3 + 0x10 ));
      piVar5 = *(int**)( lVar3 + 0x10 );
      if (piVar5 == (int*)0x0) {
         lVar6 = -1;
      } else {
         lVar6 = *(long*)( piVar5 + -2 ) + -1;
         if (0 < lVar6) {
            lVar7 = 0;
            do {
               if (( &Variant::needs_deinit )[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }
               iVar1 = piVar5[6];
               lVar7 = lVar7 + 1;
               piVar5[6] = 0;
               *piVar5 = iVar1;
               *(undefined8*)( piVar5 + 2 ) = *(undefined8*)( piVar5 + 8 );
               *(undefined8*)( piVar5 + 4 ) = *(undefined8*)( piVar5 + 10 );
               piVar5 = piVar5 + 6;
            } while ( lVar6 != lVar7 );
         }
      }
      CowData<Variant>::resize<false>((CowData<Variant>*)( lVar3 + 0x10 ), lVar6);
   }
   Variant::Variant(in_RDI, (Variant_conflict*)local_58);
   if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   LAB_001042f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Array::resize(int) */int Array::resize(Array *this, int param_1) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   undefined8 *puVar10;
   undefined4 *puVar11;
   BucketLarge *this_00;
   BucketMedium *pBVar12;
   BucketSmall *pBVar13;
   int iVar14;
   long lVar15;
   long lVar16;
   int iVar17;
   long in_FS_OFFSET;
   bool bVar18;
   undefined1 auVar19[16];
   long local_50[2];
   long local_40;
   lVar16 = *(long*)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar16 + 0x18 ) != 0) {
      iVar7 = 0x17;
      _err_print_error("resize", "core/variant/array.cpp", 299, "Condition \"_p->read_only\" is true. Returning: ERR_LOCKED", "Array is in read-only state.", 0, 0);
      LAB_001044d0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar7;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   if (*(long*)( lVar16 + 0x10 ) == 0) {
      iVar17 = 0;
   } else {
      iVar17 = *(int*)( *(long*)( lVar16 + 0x10 ) + -8 );
   }
   iVar7 = CowData<Variant>::resize<true>((CowData<Variant>*)( lVar16 + 0x10 ), (long)param_1);
   if (( ( ( iVar7 != 0 ) || ( iVar14 = *(int*)( lVar16 + 0x20 ) ),iVar14 == 0 ) ) || ( iVar14 == 0x18 )) goto LAB_001044d0;
   lVar8 = *(long*)this;
   lVar15 = (long)iVar17;
   lVar9 = *(long*)( lVar8 + 0x10 );
   if (lVar15 < 0) {
      if (lVar9 != 0) {
         LAB_00104689:lVar16 = *(long*)( lVar9 + -8 );
         goto LAB_0010468d;
      }
   } else {
      lVar3 = ( ulong )(uint)(param_1 - iVar17) + lVar15;
      while (lVar9 = *(long*)( lVar8 + 0x10 ),lVar9 != 0) {
         if (*(long*)( lVar9 + -8 ) <= lVar15) goto LAB_00104689;
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar8 + 0x10 ));
         piVar2 = (int*)( *(long*)( lVar8 + 0x10 ) + lVar15 * 0x18 );
         if (( &Variant::needs_deinit )[*piVar2] != '\0') {
            Variant::_clear_internal();
         }
         *piVar2 = iVar14;
         uVar6 = _UNK_00119688;
         uVar5 = __LC58;
         switch (iVar14) {
            case 4:
        piVar2[2] = 0;
        piVar2[3] = 0;
        *piVar2 = 4;
        break;
            case 0xb:
        pBVar13 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                             &Variant::Pools::_bucket_small);
        *(BucketSmall **)(piVar2 + 2) = pBVar13;
        *(undefined8 *)pBVar13 = 0x3f800000;
        *(undefined8 *)(pBVar13 + 8) = 0x3f80000000000000;
        *(undefined8 *)(pBVar13 + 0x10) = 0;
        *piVar2 = 0xb;
        break;
            case 0x10:
        pBVar13 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                             &Variant::Pools::_bucket_small);
        *(BucketSmall **)(piVar2 + 2) = pBVar13;
        *(undefined8 *)pBVar13 = 0;
        *(undefined4 *)(pBVar13 + 8) = 0;
        *(undefined8 *)(pBVar13 + 0xc) = 0;
        *(undefined4 *)(pBVar13 + 0x14) = 0;
        *piVar2 = 0x10;
        break;
            case 0x11:
        pBVar12 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                             &Variant::Pools::_bucket_medium);
        auVar19 = ZEXT416(_LC56);
        *(BucketMedium **)(piVar2 + 2) = pBVar12;
        *(undefined4 *)(pBVar12 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar12 = auVar19;
        *(undefined1 (*) [16])(pBVar12 + 0x10) = auVar19;
        *piVar2 = 0x11;
        break;
            case 0x12:
        pBVar12 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                             &Variant::Pools::_bucket_medium);
        auVar19 = ZEXT416(_LC56);
        *(BucketMedium **)(piVar2 + 2) = pBVar12;
        *(undefined4 *)(pBVar12 + 0x20) = 0x3f800000;
        *(undefined8 *)(pBVar12 + 0x24) = 0;
        *(undefined4 *)(pBVar12 + 0x2c) = 0;
        *(undefined1 (*) [16])pBVar12 = auVar19;
        *(undefined1 (*) [16])(pBVar12 + 0x10) = auVar19;
        *piVar2 = 0x12;
        break;
            case 0x13:
        this_00 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                             &Variant::Pools::_bucket_large);
        *(BucketLarge **)(piVar2 + 2) = this_00;
        Projection::Projection((Projection *)this_00);
        *piVar2 = 0x13;
        break;
            case 0x14:
        *piVar2 = 0x14;
        *(undefined8 *)(piVar2 + 2) = uVar5;
        *(undefined8 *)(piVar2 + 4) = uVar6;
        break;
            case 0x15:
        piVar2[2] = 0;
        piVar2[3] = 0;
        *piVar2 = 0x15;
        break;
            case 0x16:
        piVar2[2] = 0;
        piVar2[3] = 0;
        *piVar2 = 0x16;
        break;
            for (int i = 0; i < 3; i++) {
               case 0x18:
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        *piVar2 = 0x18;
        break;
            }
            case 0x1b:
        Dictionary::Dictionary((Dictionary *)(piVar2 + 2));
        *piVar2 = 0x1b;
        break;
            case 0x1c:
        puVar11 = (undefined4 *)operator_new(0x40,"");
        *puVar11 = 0;
        puVar11[8] = 0;
        *(char **)(puVar11 + 0xe) = "container";
        *(undefined1 (*) [16])(puVar11 + 4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar11 + 10) = (undefined1  [16])0x0;
        *(undefined4 **)(piVar2 + 2) = puVar11;
        *puVar11 = 1;
        *piVar2 = 0x1c;
        break;
            case 0x1d:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119510;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x1d;
        break;
            case 0x1e:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119530;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x1e;
        break;
            case 0x1f:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119550;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x1f;
        break;
            case 0x20:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119570;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x20;
        break;
            case 0x21:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119590;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x21;
        break;
            case 0x22:
        local_50[0] = 0;
        puVar10 = (undefined8 *)operator_new(0x20,"");
        lVar8 = local_50[0];
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_001195b0;
        puVar10[3] = 0;
        if (local_50[0] != 0) {
          CowData<String>::_unref((CowData<String> *)(puVar10 + 3));
          plVar1 = (long *)(lVar8 + -0x10);
          do {
            lVar8 = *plVar1;
            if (lVar8 == 0) goto LAB_0010463a;
            LOCK();
            lVar9 = *plVar1;
            bVar18 = lVar8 == lVar9;
            if (bVar18) {
              *plVar1 = lVar8 + 1;
              lVar9 = lVar8;
            }
            UNLOCK();
          } while (!bVar18);
          if (lVar9 != -1) {
            puVar10[3] = local_50[0];
          }
        }
LAB_0010463a:
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        CowData<String>::_unref((CowData<String> *)local_50);
        *piVar2 = 0x22;
        break;
            case 0x23:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_001195d0;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x23;
        break;
            case 0x24:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_001195f0;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x24;
        break;
            case 0x25:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119610;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x25;
        break;
            case 0x26:
        puVar10 = (undefined8 *)operator_new(0x20,"");
        *puVar10 = &PTR__PackedArrayRefBase_001194f0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__PackedArrayRef_00119630;
        puVar10[3] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined8 **)(piVar2 + 2) = puVar10;
        *piVar2 = 0x26;
         }
         lVar15 = lVar15 + 1;
         if (lVar3 == lVar15) goto LAB_001044d0;
         iVar14 = *(int*)( lVar16 + 0x20 );
         lVar8 = *(long*)this;
      };
   }
   lVar16 = 0;
   LAB_0010468d:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar15, lVar16, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}/* Array::erase(Variant const&) */void Array::erase(Array *this, Variant_conflict *param_1) {
   long *plVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   ulong uVar5;
   char cVar6;
   char cVar7;
   ulong uVar8;
   ulong *puVar9;
   long lVar10;
   Object *pOVar11;
   long *plVar12;
   uint uVar13;
   StringName *pSVar14;
   long lVar15;
   long lVar16;
   int *piVar17;
   long lVar18;
   long in_FS_OFFSET;
   bool bVar19;
   float fVar20;
   CowData<char32_t> *local_e0;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      _err_print_error("erase", "core/variant/array.cpp", 0x146, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      goto LAB_00104feb;
   }
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar16 = *(long*)this;
   iVar2 = *(int*)( lVar16 + 0x20 );
   if (iVar2 == 0) {
      LAB_00104f90:lVar10 = *(long*)( lVar16 + 0x10 );
      if (lVar10 != 0) {
         LAB_00104f9a:lVar15 = *(long*)( lVar10 + -8 );
         if (lVar15 != 0) {
            lVar18 = 0;
            LAB_00104fb4:if (lVar18 < lVar15) {
               cVar6 = Variant::operator ==((Variant_conflict*)( lVar10 + lVar18 * 0x18 ), (Variant_conflict*)local_78);
               if (cVar6 == '\0') {
                  lVar10 = *(long*)( lVar16 + 0x10 );
                  lVar18 = lVar18 + 1;
                  if (lVar10 != 0) goto LAB_00104fb0;
               } else if (*(long*)( lVar16 + 0x10 ) == 0) {
                  lVar10 = 0;
                  LAB_0010551b:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar18, lVar10, "p_index", "size()", "", false, false);
               } else {
                  lVar10 = *(long*)( *(long*)( lVar16 + 0x10 ) + -8 );
                  if (lVar10 <= lVar18) goto LAB_0010551b;
                  CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar16 + 0x10 ));
                  lVar10 = *(long*)( lVar16 + 0x10 );
                  if (lVar10 == 0) {
                     lVar15 = -1;
                  } else {
                     lVar15 = *(long*)( lVar10 + -8 ) + -1;
                     if (lVar18 < lVar15) {
                        piVar17 = (int*)( lVar18 * 0x18 + lVar10 );
                        do {
                           if (( &Variant::needs_deinit )[*piVar17] != '\0') {
                              Variant::_clear_internal();
                           }
                           iVar2 = piVar17[6];
                           lVar18 = lVar18 + 1;
                           piVar17[6] = 0;
                           *piVar17 = iVar2;
                           *(undefined8*)( piVar17 + 2 ) = *(undefined8*)( piVar17 + 8 );
                           *(undefined8*)( piVar17 + 4 ) = *(undefined8*)( piVar17 + 10 );
                           piVar17 = piVar17 + 6;
                        } while ( lVar18 != lVar15 );
                     }
                  }
                  CowData<Variant>::resize<false>((CowData<Variant>*)( lVar16 + 0x10 ), lVar15);
               }
            }
         }
      }
      cVar6 = ( &Variant::needs_deinit )[local_78[0]];
   } else {
      if (iVar2 == local_78[0]) {
         if (iVar2 != 0x18) goto LAB_00104f90;
         uVar8 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar8 == 0) goto LAB_001052d4;
         uVar13 = (uint)uVar8 & 0xffffff;
         if (uVar13 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar5 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar5 << 8 );
               LOCK();
               bVar19 = (char)ObjectDB::spin_lock == '\0';
               if (bVar19) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar19) break;
               local_88 = (char*)( uVar5 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar9 = (ulong*)( (ulong)uVar13 * 0x10 + ObjectDB::object_slots );
            if (( uVar8 >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
               plVar1 = (long*)puVar9[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar16 + 0x28 ) == 0) {
                     LAB_00105014:lVar16 = *(long*)this;
                     goto LAB_00104f90;
                  }
                  if (plVar1[1] == 0) {
                     pSVar14 = (StringName*)plVar1[0x23];
                     if (pSVar14 == (StringName*)0x0) {
                        pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar14);
                  if (local_b0 == *(long*)( lVar16 + 0x28 )) {
                     LAB_001051ee:if (*(long*)( lVar16 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                           LAB_001052d4:lVar16 = *(long*)this;
                           goto LAB_00104f90;
                        }
                        goto LAB_00105014;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar10 = Variant::get_validated_object();
                     if (lVar10 == 0) {
                        LAB_0010561e:cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar11 = (Object*)__dynamic_cast(lVar10, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar11 != (Object*)0x0) {
                           cVar6 = RefCounted::reference();
                           if (cVar6 == '\0') goto LAB_0010561e;
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           cVar6 = ( **(code**)( *(long*)pOVar11 + 0x1e8 ) )(pOVar11);
                           if (cVar6 == '\0') {
                              plVar1 = *(long**)( lVar16 + 0x30 );
                              if (plVar1[1] == 0) {
                                 plVar12 = (long*)plVar1[0x23];
                                 if (plVar12 == (long*)0x0) {
                                    plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                 }
                              } else {
                                 plVar12 = (long*)( plVar1[1] + 0x20 );
                              }
                              lVar10 = *plVar12;
                              if (lVar10 == 0) {
                                 local_a8 = 0;
                              } else {
                                 local_a8 = 0;
                                 if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                                 } else {
                                    String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                                 }
                              }
                              local_e0 = (CowData<char32_t>*)&local_a8;
                              local_a0 = 0;
                              String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar16 + 0x38 ));
                              local_98 = 0;
                              local_88 = "erase";
                              local_80 = 5;
                              String::parse_latin1((StrRange*)&local_98);
                              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                              local_90 = 0;
                              local_80 = 0x45;
                              String::parse_latin1((StrRange*)&local_90);
                              vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                              _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                              CowData<char32_t>::_unref(local_e0);
                           }
                           cVar7 = RefCounted::unreference();
                           if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar11) ),cVar7 != '\0') {
                              ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                              Memory::free_static(pOVar11, false);
                           }
                           if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                              StringName::unref();
                           }
                           if (cVar6 != '\0') goto LAB_001052d4;
                           goto LAB_00104f3d;
                        }
                        cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar6 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar16 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar12 = (long*)plVar1[0x23];
                        if (plVar12 == (long*)0x0) {
                           plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar12 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar10 = *plVar12;
                     if (lVar10 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                        }
                     }
                     local_e0 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar16 + 0x38 ));
                     local_98 = 0;
                     local_88 = "erase";
                     local_80 = 5;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e0);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar14 = (StringName*)plVar1[0x23];
                        if (pSVar14 == (StringName*)0x0) {
                           pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar6 = ClassDB::is_parent_class(pSVar14, (StringName*)( lVar16 + 0x28 ));
                     if (cVar6 != '\0') goto LAB_001051ee;
                     lVar10 = *(long*)( lVar16 + 0x28 );
                     if (lVar10 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                        }
                     }
                     local_e0 = (CowData<char32_t>*)&local_a8;
                     uVar3 = *(undefined8*)( lVar16 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "erase";
                     local_98 = 0;
                     local_80 = 5;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar3, local_e0);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e0);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_00104f3d;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar4 = *(char**)( lVar16 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar4 != (char*)0x0) {
            local_80 = strlen(pcVar4);
         }
         local_88 = pcVar4;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "erase";
         local_98 = 0;
         local_80 = 5;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar2 == 0x18) {
               lVar10 = *(long*)( lVar16 + 0x10 );
               if (lVar10 == 0) goto LAB_00104feb;
               goto LAB_00104f9a;
            }
         } else if (iVar2 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar16 = *(long*)this;
               goto LAB_00104f90;
            }
         } else if (iVar2 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_001052d4;
            }
         } else if (( local_78[0] == 2 ) && ( iVar2 == 3 )) {
            fVar20 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar20);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar16 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_00104f90;
         }
         Variant::get_type_name(&local_90);
         uVar3 = *(undefined8*)( lVar16 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "erase";
         local_a0 = 0;
         local_80 = 5;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar3, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
         lVar16 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
         }
         lVar16 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
         }
         lVar16 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
         }
         lVar16 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
         }
      }
      LAB_00104f3d:_err_print_error("erase", "core/variant/array.cpp", 0x148, "Condition \"!_p->typed.validate(value, \"erase\")\" is true.", 0, 0);
      cVar6 = ( &Variant::needs_deinit )[local_78[0]];
   }
   if (cVar6 != '\0') {
      Variant::_clear_internal();
   }
   LAB_00104feb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
   LAB_00104fb0:lVar15 = *(long*)( lVar10 + -8 );
   goto LAB_00104fb4;
}/* Array::fill(Variant const&) */void Array::fill(Array *this, Variant_conflict *param_1) {
   long *plVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   ulong uVar5;
   char cVar6;
   char cVar7;
   Variant_conflict *pVVar8;
   ulong uVar9;
   ulong *puVar10;
   Object *pOVar11;
   long *plVar12;
   uint uVar13;
   StringName *pSVar14;
   long lVar15;
   long lVar16;
   Variant_conflict *this_00;
   long in_FS_OFFSET;
   bool bVar17;
   float fVar18;
   CowData<char32_t> *local_e8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      _err_print_error(&_LC83, "core/variant/array.cpp", 0x13f, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      goto LAB_00105ed6;
   }
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar15 = *(long*)this;
   iVar2 = *(int*)( lVar15 + 0x20 );
   if (iVar2 == 0) {
      LAB_00105e68:Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
      CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar15 + 0x10 ));
      pVVar8 = *(Variant_conflict**)( lVar15 + 0x10 );
      if (pVVar8 != (Variant_conflict*)0x0) {
         lVar16 = 0;
         this_00 = pVVar8;
         do {
            if (*(long*)( pVVar8 + -8 ) <= lVar16) break;
            lVar16 = lVar16 + 1;
            Variant::operator =(this_00, (Variant_conflict*)local_58);
            pVVar8 = *(Variant_conflict**)( lVar15 + 0x10 );
            this_00 = this_00 + 0x18;
         } while ( pVVar8 != (Variant_conflict*)0x0 );
      }
      if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      cVar6 = ( &Variant::needs_deinit )[local_78[0]];
   } else {
      if (iVar2 == local_78[0]) {
         if (iVar2 != 0x18) goto LAB_00105e68;
         uVar9 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar9 == 0) goto LAB_001060f9;
         uVar13 = (uint)uVar9 & 0xffffff;
         if (uVar13 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar5 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar5 << 8 );
               LOCK();
               bVar17 = (char)ObjectDB::spin_lock == '\0';
               if (bVar17) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar17) break;
               local_88 = (char*)( uVar5 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar10 = (ulong*)( (ulong)uVar13 * 0x10 + ObjectDB::object_slots );
            if (( uVar9 >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
               plVar1 = (long*)puVar10[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar15 + 0x28 ) == 0) {
                     LAB_00106405:lVar15 = *(long*)this;
                     goto LAB_00105e68;
                  }
                  if (plVar1[1] == 0) {
                     pSVar14 = (StringName*)plVar1[0x23];
                     if (pSVar14 == (StringName*)0x0) {
                        pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar14);
                  if (local_b0 == *(long*)( lVar15 + 0x28 )) {
                     LAB_00106016:if (*(long*)( lVar15 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                           LAB_001060f9:lVar15 = *(long*)this;
                           goto LAB_00105e68;
                        }
                        goto LAB_00106405;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar16 = Variant::get_validated_object();
                     if (lVar16 == 0) {
                        LAB_0010642f:cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar11 = (Object*)__dynamic_cast(lVar16, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar11 != (Object*)0x0) {
                           cVar6 = RefCounted::reference();
                           if (cVar6 != '\0') {
                              if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }
                              cVar6 = ( **(code**)( *(long*)pOVar11 + 0x1e8 ) )();
                              if (cVar6 == '\0') {
                                 plVar1 = *(long**)( lVar15 + 0x30 );
                                 if (plVar1[1] == 0) {
                                    plVar12 = (long*)plVar1[0x23];
                                    if (plVar12 == (long*)0x0) {
                                       plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                    }
                                 } else {
                                    plVar12 = (long*)( plVar1[1] + 0x20 );
                                 }
                                 lVar16 = *plVar12;
                                 if (lVar16 == 0) {
                                    local_a8 = 0;
                                 } else {
                                    local_a8 = 0;
                                    if (*(char**)( lVar16 + 8 ) == (char*)0x0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar16 + 0x10 ));
                                    } else {
                                       String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar16 + 8 ));
                                    }
                                 }
                                 local_e8 = (CowData<char32_t>*)&local_a8;
                                 local_a0 = 0;
                                 String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar15 + 0x38 ));
                                 local_98 = 0;
                                 local_88 = "fill";
                                 local_80 = 4;
                                 String::parse_latin1((StrRange*)&local_98);
                                 local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                                 local_90 = 0;
                                 local_80 = 0x45;
                                 String::parse_latin1((StrRange*)&local_90);
                                 vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e8);
                                 _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                                 CowData<char32_t>::_unref(local_e8);
                              }
                              cVar7 = RefCounted::unreference();
                              if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar11) ),cVar7 != '\0') {
                                 ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                                 Memory::free_static(pOVar11, false);
                              }
                              if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                                 StringName::unref();
                              }
                              if (cVar6 == '\0') goto LAB_00105e0b;
                              goto LAB_001060f9;
                           }
                           goto LAB_0010642f;
                        }
                        cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar6 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar15 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar12 = (long*)plVar1[0x23];
                        if (plVar12 == (long*)0x0) {
                           plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar12 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar16 = *plVar12;
                     if (lVar16 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar16 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar16 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar16 + 8 ));
                        }
                     }
                     local_e8 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar15 + 0x38 ));
                     local_88 = "fill";
                     local_98 = 0;
                     local_80 = 4;
                     String::parse_latin1((StrRange*)&local_98);
                     local_90 = 0;
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e8);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar14 = (StringName*)plVar1[0x23];
                        if (pSVar14 == (StringName*)0x0) {
                           pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar6 = ClassDB::is_parent_class(pSVar14, (StringName*)( lVar15 + 0x28 ));
                     if (cVar6 != '\0') goto LAB_00106016;
                     lVar16 = *(long*)( lVar15 + 0x28 );
                     if (lVar16 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar16 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar16 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar16 + 8 ));
                        }
                     }
                     local_e8 = (CowData<char32_t>*)&local_a8;
                     uVar3 = *(undefined8*)( lVar15 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "fill";
                     local_98 = 0;
                     local_80 = 4;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar3, local_e8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e8);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_00105e0b;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar4 = *(char**)( lVar15 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar4 != (char*)0x0) {
            local_80 = strlen(pcVar4);
         }
         local_88 = pcVar4;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "fill";
         local_98 = 0;
         local_80 = 4;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar2 == 0x18) goto LAB_00105e68;
         } else if (iVar2 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar15 = *(long*)this;
               goto LAB_00105e68;
            }
         } else if (iVar2 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_001060f9;
            }
         } else if (( iVar2 == 3 ) && ( local_78[0] == 2 )) {
            fVar18 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar18);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar15 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_00105e68;
         }
         Variant::get_type_name(&local_90);
         uVar3 = *(undefined8*)( lVar15 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "fill";
         local_a0 = 0;
         local_80 = 4;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar3, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
         lVar15 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         lVar15 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         lVar15 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         lVar15 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
      }
      LAB_00105e0b:_err_print_error(&_LC83, "core/variant/array.cpp", 0x141, "Condition \"!_p->typed.validate(value, \"fill\")\" is true.", 0, 0);
      cVar6 = ( &Variant::needs_deinit )[local_78[0]];
   }
   if (cVar6 != '\0') {
      Variant::_clear_internal();
   }
   LAB_00105ed6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Array::bsearch(Variant const&, bool) const */ulong Array::bsearch(Array *this, Variant_conflict *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   char *pcVar5;
   ulong uVar6;
   bool bVar7;
   char cVar8;
   char cVar9;
   ulong uVar10;
   long lVar11;
   Object *pOVar12;
   long *plVar13;
   uint uVar14;
   ulong *puVar15;
   StringName *pSVar16;
   long lVar17;
   long lVar18;
   long in_FS_OFFSET;
   float fVar19;
   bool *local_100;
   Operator *local_f8;
   Variant_conflict *local_f0;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   ulong local_b0;
   char *local_a8;
   size_t local_a0;
   int local_98[2];
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_78;
   undefined1 local_70[16];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_98, param_1);
   lVar17 = *(long*)this;
   iVar3 = *(int*)( lVar17 + 0x20 );
   if (iVar3 == 0) {
      LAB_00106be0:if (*(long*)( lVar17 + 0x10 ) == 0) {
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar17 + 0x10 ));
         LAB_00107461:uVar10 = 0;
      } else {
         lVar11 = *(long*)( *(long*)( lVar17 + 0x10 ) + -8 );
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar17 + 0x10 ));
         lVar17 = *(long*)( lVar17 + 0x10 );
         if (param_2) {
            if (lVar11 < 1) goto LAB_00107461;
            uVar10 = 0;
            do {
               local_f0 = (Variant_conflict*)local_58;
               local_f8 = (Operator*)&local_a8;
               local_100 = (bool*)&local_b0;
               lVar2 = uVar10 + lVar11;
               local_b0 = local_b0 & 0xffffffffffffff00;
               local_a8 = (char*)CONCAT44(local_a8._4_4_, 2);
               local_78 = 0;
               local_70 = (undefined1[16])0x0;
               lVar18 = lVar2 / 2;
               Variant::evaluate(local_f8, (Variant_conflict*)( lVar17 + ( ( lVar2 - ( lVar2 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar18 ) * 8 ), (Variant_conflict*)local_98, (Variant_conflict*)&local_78, local_100);
               if (local_b0._0_1_ == (StrRange)0x0) {
                  Variant::Variant(local_f0, false);
                  if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }
                  local_70._8_8_ = uStack_48;
                  local_70._0_8_ = local_50;
                  local_78 = CONCAT44(local_78._4_4_, local_58[0]);
               }
               bVar7 = Variant::operator_cast_to_bool((Variant_conflict*)&local_78);
               if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                  Variant::_clear_internal();
               }
               if (bVar7) {
                  uVar10 = lVar18 + 1;
                  lVar18 = lVar11;
               }
               lVar11 = lVar18;
            } while ( (long)uVar10 < lVar18 );
         } else {
            if (lVar11 < 1) goto LAB_00107461;
            uVar10 = 0;
            do {
               while (true) {
                  lVar2 = uVar10 + lVar11;
                  local_b0 = local_b0 & 0xffffffffffffff00;
                  local_a8 = (char*)CONCAT44(local_a8._4_4_, 2);
                  local_70 = (undefined1[16])0x0;
                  local_78 = 0;
                  lVar18 = lVar2 / 2;
                  Variant::evaluate((Operator*)&local_a8, (Variant_conflict*)local_98, (Variant_conflict*)( lVar17 + ( ( lVar2 - ( lVar2 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar18 ) * 8 ), (Variant_conflict*)&local_78, (bool*)&local_b0);
                  if (local_b0._0_1_ == (StrRange)0x0) {
                     Variant::Variant((Variant_conflict*)local_58, false);
                     if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                        Variant::_clear_internal();
                     }
                     local_70._8_8_ = uStack_48;
                     local_70._0_8_ = local_50;
                     local_78 = CONCAT44(local_78._4_4_, local_58[0]);
                  }
                  bVar7 = Variant::operator_cast_to_bool((Variant_conflict*)&local_78);
                  if (( &Variant::needs_deinit )[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (!bVar7) break;
                  lVar11 = lVar18;
                  if (lVar18 <= (long)uVar10) goto LAB_00106cf2;
               };
               uVar10 = lVar18 + 1;
            } while ( (long)uVar10 < lVar11 );
         }
         LAB_00106cf2:uVar10 = uVar10 & 0xffffffff;
      }
      uVar14 = (uint)uVar10;
      cVar8 = ( &Variant::needs_deinit )[local_98[0]];
      goto joined_r0x00106cff;
   }
   if (iVar3 == local_98[0]) {
      if (iVar3 != 0x18) goto LAB_00106be0;
      uVar10 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_98);
      if (uVar10 == 0) goto LAB_00106f80;
      uVar14 = (uint)uVar10 & 0xffffff;
      if (uVar14 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar6 = (ulong)local_a8 >> 8;
            local_a8 = (char*)( uVar6 << 8 );
            LOCK();
            bVar7 = (char)ObjectDB::spin_lock == '\0';
            if (bVar7) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar7) break;
            local_a8 = (char*)( uVar6 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar15 = (ulong*)( (ulong)uVar14 * 0x10 + ObjectDB::object_slots );
         if (( uVar10 >> 0x18 & 0x7fffffffff ) == ( *puVar15 & 0x7fffffffff )) {
            plVar1 = (long*)puVar15[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long*)0x0) {
               if (*(long*)( lVar17 + 0x28 ) == 0) {
                  LAB_00106d2e:lVar17 = *(long*)this;
                  goto LAB_00106be0;
               }
               if (plVar1[1] == 0) {
                  pSVar16 = (StringName*)plVar1[0x23];
                  if (pSVar16 == (StringName*)0x0) {
                     pSVar16 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                  }
               } else {
                  pSVar16 = (StringName*)( plVar1[1] + 0x20 );
               }
               StringName::StringName((StringName*)&local_d0, pSVar16);
               if (local_d0 == *(long*)( lVar17 + 0x28 )) {
                  LAB_00107132:if (*(long*)( lVar17 + 0x30 ) == 0) {
                     if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
                        StringName::unref();
                        LAB_00106f80:lVar17 = *(long*)this;
                        goto LAB_00106be0;
                     }
                     goto LAB_00106d2e;
                  }
                  ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                  lVar11 = Variant::get_validated_object();
                  if (lVar11 == 0) {
                     LAB_001074b6:cVar8 = ( &Variant::needs_deinit )[local_58[0]];
                  } else {
                     pOVar12 = (Object*)__dynamic_cast(lVar11, &Object::typeinfo, &Script::typeinfo);
                     if (pOVar12 != (Object*)0x0) {
                        cVar8 = RefCounted::reference();
                        if (cVar8 != '\0') {
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           cVar8 = ( **(code**)( *(long*)pOVar12 + 0x1e8 ) )(pOVar12);
                           if (cVar8 == '\0') {
                              plVar1 = *(long**)( lVar17 + 0x30 );
                              if (plVar1[1] == 0) {
                                 plVar13 = (long*)plVar1[0x23];
                                 if (plVar13 == (long*)0x0) {
                                    plVar13 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                 }
                              } else {
                                 plVar13 = (long*)( plVar1[1] + 0x20 );
                              }
                              lVar11 = *plVar13;
                              if (lVar11 == 0) {
                                 local_c8 = 0;
                              } else {
                                 local_c8 = 0;
                                 if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( lVar11 + 0x10 ));
                                 } else {
                                    String::parse_latin1((String_conflict*)&local_c8, *(char**)( lVar11 + 8 ));
                                 }
                              }
                              local_c0 = 0;
                              String::parse_latin1((String_conflict*)&local_c0, *(char**)( lVar17 + 0x38 ));
                              local_b8 = 0;
                              local_a8 = "binary search";
                              local_a0 = 0xd;
                              String::parse_latin1((StrRange*)&local_b8);
                              local_b0 = 0;
                              local_a8 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                              local_a0 = 0x45;
                              String::parse_latin1((StrRange*)&local_b0);
                              vformat<String,String,String>((CowData<char32_t>*)&local_a8, (StrRange*)&local_b0, (StrRange*)&local_b8, (String_conflict*)&local_c0, (CowData<char32_t>*)&local_c8);
                              _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_a8, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                           }
                           cVar9 = RefCounted::unreference();
                           if (( cVar9 != '\0' ) && ( cVar9 = predelete_handler(pOVar12) ),cVar9 != '\0') {
                              ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                              Memory::free_static(pOVar12, false);
                           }
                           if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
                              StringName::unref();
                           }
                           if (cVar8 == '\0') goto LAB_00106b77;
                           goto LAB_00106f80;
                        }
                        goto LAB_001074b6;
                     }
                     cVar8 = ( &Variant::needs_deinit )[local_58[0]];
                  }
                  if (cVar8 != '\0') {
                     Variant::_clear_internal();
                  }
                  plVar1 = *(long**)( lVar17 + 0x30 );
                  if (plVar1[1] == 0) {
                     plVar13 = (long*)plVar1[0x23];
                     if (plVar13 == (long*)0x0) {
                        plVar13 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                     }
                  } else {
                     plVar13 = (long*)( plVar1[1] + 0x20 );
                  }
                  lVar11 = *plVar13;
                  if (lVar11 == 0) {
                     local_c8 = 0;
                  } else {
                     local_c8 = 0;
                     if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( lVar11 + 0x10 ));
                     } else {
                        String::parse_latin1((String_conflict*)&local_c8, *(char**)( lVar11 + 8 ));
                     }
                  }
                  local_c0 = 0;
                  String::parse_latin1((String_conflict*)&local_c0, *(char**)( lVar17 + 0x38 ));
                  local_a8 = "binary search";
                  local_b8 = 0;
                  local_a0 = 0xd;
                  String::parse_latin1((StrRange*)&local_b8);
                  local_a8 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                  local_b0 = 0;
                  local_a0 = 0x45;
                  String::parse_latin1((StrRange*)&local_b0);
                  vformat<String,String,String>((CowData<char32_t>*)&local_a8, (StrRange*)&local_b0, (StrRange*)&local_b8, (String_conflict*)&local_c0, (CowData<char32_t>*)&local_c8);
                  _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_a8, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               } else {
                  pSVar16 = (StringName*)( plVar1[1] + 0x20 );
                  if (( plVar1[1] == 0 ) && ( pSVar16 = (StringName*)plVar1[0x23] ),pSVar16 == (StringName*)0x0) {
                     pSVar16 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                  }
                  cVar8 = ClassDB::is_parent_class(pSVar16, (StringName*)( lVar17 + 0x28 ));
                  if (cVar8 != '\0') goto LAB_00107132;
                  lVar11 = *(long*)( lVar17 + 0x28 );
                  if (lVar11 == 0) {
                     local_c8 = 0;
                  } else if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                     local_c8 = 0;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( lVar11 + 0x10 ));
                  } else {
                     local_c8 = 0;
                     String::parse_latin1((String_conflict*)&local_c8, *(char**)( lVar11 + 8 ));
                  }
                  uVar4 = *(undefined8*)( lVar17 + 0x38 );
                  ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_c0, plVar1);
                  local_a8 = "binary search";
                  local_b8 = 0;
                  local_a0 = 0xd;
                  String::parse_latin1((StrRange*)&local_b8);
                  local_a8 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                  local_b0 = 0;
                  local_a0 = 0x53;
                  String::parse_latin1((StrRange*)&local_b0);
                  vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_a8, (StrRange*)&local_b0, (StrRange*)&local_b8, (CowData<char32_t>*)&local_c0, uVar4, (CowData<char32_t>*)&local_c8);
                  _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_a8, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               }
               if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
                  StringName::unref();
               }
               goto LAB_00106b77;
            }
         } else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }
      } else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }
      pcVar5 = *(char**)( lVar17 + 0x38 );
      local_a0 = 0;
      local_c0 = 0;
      if (pcVar5 != (char*)0x0) {
         local_a0 = strlen(pcVar5);
      }
      local_a8 = pcVar5;
      String::parse_latin1((StrRange*)&local_c0);
      local_a8 = "binary search";
      local_b8 = 0;
      local_a0 = 0xd;
      String::parse_latin1((StrRange*)&local_b8);
      local_a8 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
      local_b0 = 0;
      local_a0 = 0x4b;
      String::parse_latin1((StrRange*)&local_b0);
      vformat<String,String>((CowData<char32_t>*)&local_a8, (StrRange*)&local_b0, (StrRange*)&local_b8, (StrRange*)&local_c0);
      _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_a8, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   } else {
      if (local_98[0] == 0) {
         if (iVar3 == 0x18) goto LAB_00106be0;
      } else if (iVar3 == 4) {
         if (local_98[0] == 0x15) {
            Variant::operator_cast_to_String((Variant_conflict*)&local_a8);
            Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_a8);
            if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_98[0] = local_58[0];
            local_90 = local_50;
            uStack_88 = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            lVar17 = *(long*)this;
            goto LAB_00106be0;
         }
      } else if (iVar3 == 0x15) {
         if (local_98[0] == 4) {
            Variant::operator_cast_to_StringName((Variant_conflict*)&local_a8);
            Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_a8);
            if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_98[0] = local_58[0];
            local_90 = local_50;
            uStack_88 = uStack_48;
            if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
               StringName::unref();
            }
            goto LAB_00106f80;
         }
      } else if (( iVar3 == 3 ) && ( local_98[0] == 2 )) {
         fVar19 = Variant::operator_cast_to_float((Variant_conflict*)local_98);
         Variant::Variant((Variant_conflict*)local_58, fVar19);
         if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_98[0] = local_58[0];
         lVar17 = *(long*)this;
         local_90 = local_50;
         uStack_88 = uStack_48;
         goto LAB_00106be0;
      }
      Variant::get_type_name(&local_b0);
      uVar4 = *(undefined8*)( lVar17 + 0x38 );
      Variant::get_type_name(&local_b8, local_98[0]);
      local_a8 = "binary search";
      local_c0 = 0;
      local_a0 = 0xd;
      String::parse_latin1((StrRange*)&local_c0);
      local_a8 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_c8 = 0;
      local_a0 = 0x3f;
      String::parse_latin1((StrRange*)&local_c8);
      vformat<String,String,char_const*,String>(&local_a8, (StrRange*)&local_c8, (StrRange*)&local_c0, &local_b8, uVar4, &local_b0);
      _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_a8, 0, 0);
      pcVar5 = local_a8;
      if (local_a8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }
      }
      lVar17 = local_c8;
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
      lVar17 = local_c0;
      if (local_c0 != 0) {
         LOCK();
         plVar1 = (long*)( local_c0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
      lVar17 = local_b8;
      if (local_b8 != 0) {
         LOCK();
         plVar1 = (long*)( local_b8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
      uVar10 = local_b0;
      if (local_b0 != 0) {
         LOCK();
         plVar1 = (long*)( local_b0 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void*)( uVar10 - 0x10 ), false);
         }
      }
   }
   LAB_00106b77:_err_print_error("bsearch", "core/variant/array.cpp", 0x2ce, "Condition \"!_p->typed.validate(value, \"binary search\")\" is true. Returning: -1", 0, 0);
   uVar10 = 0xffffffff;
   uVar14 = 0xffffffff;
   cVar8 = ( &Variant::needs_deinit )[local_98[0]];
   joined_r0x00106cff:if (cVar8 != '\0') {
      Variant::_clear_internal();
      uVar10 = (ulong)uVar14;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar10;
}/* Array::bsearch_custom(Variant const&, Callable const&, bool) const */ulong Array::bsearch_custom(Array *this, Variant_conflict *param_1, Callable *param_2, bool param_3) {
   Callable *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   Callable *pCVar6;
   ulong uVar7;
   char cVar8;
   char cVar9;
   ulong uVar10;
   long lVar11;
   Object *pOVar12;
   long *plVar13;
   uint uVar14;
   ulong *puVar15;
   StringName *pSVar16;
   long lVar17;
   long lVar18;
   long in_FS_OFFSET;
   bool bVar19;
   float fVar20;
   CowData<char32_t> *local_e0;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   Callable *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar17 = *(long*)this;
   iVar4 = *(int*)( lVar17 + 0x20 );
   if (iVar4 == 0) {
      LAB_00107cc4:local_88 = param_2;
      if (*(long*)( lVar17 + 0x10 ) == 0) {
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar17 + 0x10 ));
         LAB_00108339:uVar10 = 0;
      } else {
         lVar11 = *(long*)( *(long*)( lVar17 + 0x10 ) + -8 );
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar17 + 0x10 ));
         lVar17 = *(long*)( lVar17 + 0x10 );
         if (param_3) {
            if (lVar11 < 1) goto LAB_00108339;
            uVar10 = 0;
            do {
               lVar3 = uVar10 + lVar11;
               lVar18 = lVar3 / 2;
               cVar8 = CallableComparator::operator ()((Variant_conflict*)&local_88, (Variant_conflict*)( lVar17 + ( ( lVar3 - ( lVar3 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar18 ) * 8 ));
               if (cVar8 != '\0') {
                  uVar10 = lVar18 + 1;
                  lVar18 = lVar11;
               }
               lVar11 = lVar18;
            } while ( (long)uVar10 < lVar18 );
         } else {
            uVar10 = 0;
            if (lVar11 < 1) goto LAB_00108339;
            do {
               while (true) {
                  lVar17 = (long)( uVar10 + lVar11 ) / 2;
                  cVar8 = CallableComparator::operator ()((Variant_conflict*)&local_88, (Variant_conflict*)local_78);
                  if (cVar8 == '\0') break;
                  lVar11 = lVar17;
                  if (lVar17 <= (long)uVar10) goto LAB_00107d47;
               };
               uVar10 = lVar17 + 1;
            } while ( (long)uVar10 < lVar11 );
         }
         LAB_00107d47:uVar10 = uVar10 & 0xffffffff;
      }
      uVar14 = (uint)uVar10;
      cVar8 = ( &Variant::needs_deinit )[local_78[0]];
      goto joined_r0x00107d57;
   }
   if (iVar4 == local_78[0]) {
      if (iVar4 != 0x18) goto LAB_00107cc4;
      uVar10 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
      if (uVar10 == 0) goto LAB_00107e90;
      uVar14 = (uint)uVar10 & 0xffffff;
      if (uVar14 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar7 = (ulong)local_88 >> 8;
            local_88 = (Callable*)( uVar7 << 8 );
            LOCK();
            bVar19 = (char)ObjectDB::spin_lock == '\0';
            if (bVar19) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar19) break;
            local_88 = (Callable*)( uVar7 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar15 = (ulong*)( (ulong)uVar14 * 0x10 + ObjectDB::object_slots );
         if (( uVar10 >> 0x18 & 0x7fffffffff ) == ( *puVar15 & 0x7fffffffff )) {
            plVar2 = (long*)puVar15[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar2 != (long*)0x0) {
               if (*(long*)( lVar17 + 0x28 ) == 0) {
                  LAB_00107d86:lVar17 = *(long*)this;
                  goto LAB_00107cc4;
               }
               if (plVar2[1] == 0) {
                  pSVar16 = (StringName*)plVar2[0x23];
                  if (pSVar16 == (StringName*)0x0) {
                     pSVar16 = (StringName*)( **(code**)( *plVar2 + 0x40 ) )(plVar2);
                  }
               } else {
                  pSVar16 = (StringName*)( plVar2[1] + 0x20 );
               }
               StringName::StringName((StringName*)&local_b0, pSVar16);
               if (local_b0 == *(long*)( lVar17 + 0x28 )) {
                  LAB_00108026:if (*(long*)( lVar17 + 0x30 ) == 0) {
                     if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                        StringName::unref();
                        LAB_00107e90:lVar17 = *(long*)this;
                        goto LAB_00107cc4;
                     }
                     goto LAB_00107d86;
                  }
                  ( **(code**)( *plVar2 + 0x98 ) )(local_58, plVar2);
                  lVar11 = Variant::get_validated_object();
                  if (lVar11 == 0) {
                     LAB_0010837c:cVar8 = ( &Variant::needs_deinit )[local_58[0]];
                  } else {
                     pOVar12 = (Object*)__dynamic_cast(lVar11, &Object::typeinfo, &Script::typeinfo, 0);
                     if (pOVar12 != (Object*)0x0) {
                        cVar8 = RefCounted::reference();
                        if (cVar8 != '\0') {
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           cVar8 = ( **(code**)( *(long*)pOVar12 + 0x1e8 ) )();
                           if (cVar8 == '\0') {
                              plVar2 = *(long**)( lVar17 + 0x30 );
                              if (plVar2[1] == 0) {
                                 plVar13 = (long*)plVar2[0x23];
                                 if (plVar13 == (long*)0x0) {
                                    plVar13 = (long*)( **(code**)( *plVar2 + 0x40 ) )();
                                 }
                              } else {
                                 plVar13 = (long*)( plVar2[1] + 0x20 );
                              }
                              lVar11 = *plVar13;
                              if (lVar11 == 0) {
                                 local_a8 = 0;
                              } else {
                                 local_a8 = 0;
                                 if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar11 + 0x10 ));
                                 } else {
                                    String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar11 + 8 ));
                                 }
                              }
                              local_e0 = (CowData<char32_t>*)&local_a8;
                              local_a0 = 0;
                              String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar17 + 0x38 ));
                              local_88 = (Callable*)0x115dc2;
                              local_98 = 0;
                              local_80 = 0x14;
                              String::parse_latin1((StrRange*)&local_98);
                              local_90 = 0;
                              local_88 = (Callable*)0x115138;
                              local_80 = 0x45;
                              String::parse_latin1((StrRange*)&local_90);
                              vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                              _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                              CowData<char32_t>::_unref(local_e0);
                           }
                           cVar9 = RefCounted::unreference();
                           if (( cVar9 != '\0' ) && ( cVar9 = predelete_handler(pOVar12) ),cVar9 != '\0') {
                              ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                              Memory::free_static(pOVar12, false);
                           }
                           if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                              StringName::unref();
                           }
                           if (cVar8 == '\0') goto LAB_00107c57;
                           goto LAB_00107e90;
                        }
                        goto LAB_0010837c;
                     }
                     cVar8 = ( &Variant::needs_deinit )[local_58[0]];
                  }
                  if (cVar8 != '\0') {
                     Variant::_clear_internal();
                  }
                  plVar2 = *(long**)( lVar17 + 0x30 );
                  if (plVar2[1] == 0) {
                     plVar13 = (long*)plVar2[0x23];
                     if (plVar13 == (long*)0x0) {
                        plVar13 = (long*)( **(code**)( *plVar2 + 0x40 ) )();
                     }
                  } else {
                     plVar13 = (long*)( plVar2[1] + 0x20 );
                  }
                  lVar11 = *plVar13;
                  if (lVar11 == 0) {
                     local_a8 = 0;
                  } else {
                     local_a8 = 0;
                     if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar11 + 0x10 ));
                     } else {
                        String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar11 + 8 ));
                     }
                  }
                  local_e0 = (CowData<char32_t>*)&local_a8;
                  local_a0 = 0;
                  String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar17 + 0x38 ));
                  local_88 = (Callable*)0x115dc2;
                  local_98 = 0;
                  local_80 = 0x14;
                  String::parse_latin1((StrRange*)&local_98);
                  local_88 = (Callable*)0x115138;
                  local_90 = 0;
                  local_80 = 0x45;
                  String::parse_latin1((StrRange*)&local_90);
                  vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                  _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  CowData<char32_t>::_unref(local_e0);
               } else {
                  pSVar16 = (StringName*)( plVar2[1] + 0x20 );
                  if (( plVar2[1] == 0 ) && ( pSVar16 = (StringName*)plVar2[0x23] ),pSVar16 == (StringName*)0x0) {
                     pSVar16 = (StringName*)( **(code**)( *plVar2 + 0x40 ) )(plVar2);
                  }
                  cVar8 = ClassDB::is_parent_class(pSVar16, (StringName*)( lVar17 + 0x28 ));
                  if (cVar8 != '\0') goto LAB_00108026;
                  lVar11 = *(long*)( lVar17 + 0x28 );
                  if (lVar11 == 0) {
                     local_a8 = 0;
                  } else {
                     local_a8 = 0;
                     if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar11 + 0x10 ));
                     } else {
                        String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar11 + 8 ));
                     }
                  }
                  local_e0 = (CowData<char32_t>*)&local_a8;
                  uVar5 = *(undefined8*)( lVar17 + 0x38 );
                  ( **(code**)( *plVar2 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar2);
                  local_88 = (Callable*)0x115dc2;
                  local_98 = 0;
                  local_80 = 0x14;
                  String::parse_latin1((StrRange*)&local_98);
                  local_88 = (Callable*)0x115078;
                  local_90 = 0;
                  local_80 = 0x53;
                  String::parse_latin1((StrRange*)&local_90);
                  vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar5, local_e0);
                  _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  CowData<char32_t>::_unref(local_e0);
               }
               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }
               goto LAB_00107c57;
            }
         } else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }
      } else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }
      pCVar6 = *(Callable**)( lVar17 + 0x38 );
      local_80 = 0;
      local_a0 = 0;
      if (pCVar6 != (Callable*)0x0) {
         local_80 = strlen((char*)pCVar6);
      }
      local_88 = pCVar6;
      String::parse_latin1((StrRange*)&local_a0);
      local_88 = (Callable*)0x115dc2;
      local_98 = 0;
      local_80 = 0x14;
      String::parse_latin1((StrRange*)&local_98);
      local_88 = (Callable*)0x115028;
      local_90 = 0;
      local_80 = 0x4b;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
      _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   } else {
      if (local_78[0] == 0) {
         if (iVar4 == 0x18) goto LAB_00107cc4;
      } else if (iVar4 == 4) {
         if (local_78[0] == 0x15) {
            Variant::operator_cast_to_String((Variant_conflict*)&local_88);
            Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            lVar17 = *(long*)this;
            goto LAB_00107cc4;
         }
      } else if (iVar4 == 0x15) {
         if (local_78[0] == 4) {
            Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
            Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            if (( StringName::configured != '\0' ) && ( local_88 != (Callable*)0x0 )) {
               StringName::unref();
            }
            goto LAB_00107e90;
         }
      } else if (( iVar4 == 3 ) && ( local_78[0] == 2 )) {
         fVar20 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
         Variant::Variant((Variant_conflict*)local_58, fVar20);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_78[0] = local_58[0];
         lVar17 = *(long*)this;
         local_70 = local_50;
         uStack_68 = uStack_48;
         goto LAB_00107cc4;
      }
      Variant::get_type_name(&local_90);
      uVar5 = *(undefined8*)( lVar17 + 0x38 );
      Variant::get_type_name(&local_98, local_78[0]);
      local_88 = (Callable*)0x115dc2;
      local_a0 = 0;
      local_80 = 0x14;
      String::parse_latin1((StrRange*)&local_a0);
      local_88 = (Callable*)0x114f50;
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange*)&local_a8);
      vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar5, &local_90);
      _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
      pCVar6 = local_88;
      if (local_88 != (Callable*)0x0) {
         LOCK();
         pCVar1 = local_88 + -0x10;
         *(long*)pCVar1 = *(long*)pCVar1 + -1;
         UNLOCK();
         if (*(long*)pCVar1 == 0) {
            local_88 = (Callable*)0x0;
            Memory::free_static(pCVar6 + -0x10, false);
         }
      }
      lVar17 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar2 = (long*)( local_a8 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
      lVar17 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar2 = (long*)( local_a0 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
      lVar17 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar2 = (long*)( local_98 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
      lVar17 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar2 = (long*)( local_90 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }
      }
   }
   LAB_00107c57:_err_print_error("bsearch_custom", "core/variant/array.cpp", 0x2d5, "Condition \"!_p->typed.validate(value, \"custom binary search\")\" is true. Returning: -1", 0, 0);
   uVar10 = 0xffffffff;
   uVar14 = 0xffffffff;
   cVar8 = ( &Variant::needs_deinit )[local_78[0]];
   joined_r0x00107d57:if (cVar8 != '\0') {
      Variant::_clear_internal();
      uVar10 = (ulong)uVar14;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar10;
}/* Array::find(Variant const&, int) const */int Array::find(Array *this, Variant_conflict *param_1, int param_2) {
   long *plVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   code *pcVar5;
   ulong uVar6;
   char cVar7;
   char cVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   Object *pOVar12;
   long *plVar13;
   uint uVar14;
   ulong *puVar15;
   StringName *pSVar16;
   long lVar17;
   long in_FS_OFFSET;
   bool bVar18;
   float fVar19;
   CowData<char32_t> *local_d8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( *(long*)this + 0x10 ) == 0 ) || ( *(long*)( *(long*)( *(long*)this + 0x10 ) + -8 ) == 0 )) {
      LAB_00108ca8:param_2 = -1;
      goto LAB_00108be1;
   }
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar9 = *(long*)this;
   iVar2 = *(int*)( lVar9 + 0x20 );
   if (iVar2 == 0) goto LAB_00108ba9;
   if (iVar2 == local_78[0]) {
      if (( iVar2 != 0x18 ) || ( uVar10 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78) ),uVar10 == 0) goto LAB_00108ba9;
      uVar14 = (uint)uVar10 & 0xffffff;
      if (uVar14 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar6 = (ulong)local_88 >> 8;
            local_88 = (char*)( uVar6 << 8 );
            LOCK();
            bVar18 = (char)ObjectDB::spin_lock == '\0';
            if (bVar18) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar18) break;
            local_88 = (char*)( uVar6 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar15 = (ulong*)( (ulong)uVar14 * 0x10 + ObjectDB::object_slots );
         if (( uVar10 >> 0x18 & 0x7fffffffff ) != ( *puVar15 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_00108eb5;
         }
         plVar1 = (long*)puVar15[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (plVar1 == (long*)0x0) goto LAB_00108eb5;
         if (*(long*)( lVar9 + 0x28 ) == 0) goto LAB_00108ba9;
         if (plVar1[1] == 0) {
            pSVar16 = (StringName*)plVar1[0x23];
            if (pSVar16 == (StringName*)0x0) {
               pSVar16 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
            }
         } else {
            pSVar16 = (StringName*)( plVar1[1] + 0x20 );
         }
         StringName::StringName((StringName*)&local_b0, pSVar16);
         if (local_b0 == *(long*)( lVar9 + 0x28 )) {
            LAB_00108da0:if (*(long*)( lVar9 + 0x30 ) == 0) {
               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }
               LAB_00108ba9:if (-1 < param_2) {
                  lVar9 = *(long*)this;
                  goto LAB_00108bb0;
               }
               goto LAB_00108bcc;
            }
            ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
            lVar11 = Variant::get_validated_object();
            if (lVar11 == 0) {
               LAB_00109163:cVar7 = ( &Variant::needs_deinit )[local_58[0]];
               joined_r0x0010935a:if (cVar7 != '\0') {
                  Variant::_clear_internal();
               }
               plVar1 = *(long**)( lVar9 + 0x30 );
               if (plVar1[1] == 0) {
                  plVar13 = (long*)plVar1[0x23];
                  if (plVar13 == (long*)0x0) {
                     plVar13 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                  }
               } else {
                  plVar13 = (long*)( plVar1[1] + 0x20 );
               }
               lVar11 = *plVar13;
               if (lVar11 == 0) {
                  local_a8 = 0;
               } else {
                  local_a8 = 0;
                  if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar11 + 0x10 ));
                  } else {
                     String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar11 + 8 ));
                  }
               }
               local_d8 = (CowData<char32_t>*)&local_a8;
               local_a0 = 0;
               String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar9 + 0x38 ));
               local_88 = "find";
               local_98 = 0;
               local_80 = 4;
               String::parse_latin1((StrRange*)&local_98);
               local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
               local_90 = 0;
               local_80 = 0x45;
               String::parse_latin1((StrRange*)&local_90);
               vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_d8);
               _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               CowData<char32_t>::_unref(local_d8);
               goto joined_r0x001092b9;
            }
            pOVar12 = (Object*)__dynamic_cast(lVar11, &Object::typeinfo, &Script::typeinfo);
            if (pOVar12 == (Object*)0x0) {
               cVar7 = ( &Variant::needs_deinit )[local_58[0]];
               goto joined_r0x0010935a;
            }
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') goto LAB_00109163;
            if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            cVar7 = ( **(code**)( *(long*)pOVar12 + 0x1e8 ) )();
            if (cVar7 == '\0') {
               plVar1 = *(long**)( lVar9 + 0x30 );
               if (plVar1[1] == 0) {
                  plVar13 = (long*)plVar1[0x23];
                  if (plVar13 == (long*)0x0) {
                     plVar13 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                  }
               } else {
                  plVar13 = (long*)( plVar1[1] + 0x20 );
               }
               lVar11 = *plVar13;
               if (lVar11 == 0) {
                  local_a8 = 0;
               } else {
                  local_a8 = 0;
                  if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar11 + 0x10 ));
                  } else {
                     String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar11 + 8 ));
                  }
               }
               local_d8 = (CowData<char32_t>*)&local_a8;
               local_a0 = 0;
               String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar9 + 0x38 ));
               local_98 = 0;
               local_88 = "find";
               local_80 = 4;
               String::parse_latin1((StrRange*)&local_98);
               local_90 = 0;
               local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
               local_80 = 0x45;
               String::parse_latin1((StrRange*)&local_90);
               vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_d8);
               _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               CowData<char32_t>::_unref(local_d8);
            }
            cVar8 = RefCounted::unreference();
            if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler(pOVar12) ),cVar8 != '\0') {
               ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
               Memory::free_static(pOVar12, false);
            }
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }
            if (cVar7 != '\0') goto LAB_00108ba9;
         } else {
            if (plVar1[1] == 0) {
               pSVar16 = (StringName*)plVar1[0x23];
               if (pSVar16 == (StringName*)0x0) {
                  pSVar16 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
               }
            } else {
               pSVar16 = (StringName*)( plVar1[1] + 0x20 );
            }
            cVar7 = ClassDB::is_parent_class(pSVar16, (StringName*)( lVar9 + 0x28 ));
            if (cVar7 != '\0') goto LAB_00108da0;
            lVar11 = *(long*)( lVar9 + 0x28 );
            if (lVar11 == 0) {
               local_a8 = 0;
            } else {
               local_a8 = 0;
               if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar11 + 0x10 ));
               } else {
                  String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar11 + 8 ));
               }
            }
            local_d8 = (CowData<char32_t>*)&local_a8;
            uVar3 = *(undefined8*)( lVar9 + 0x38 );
            ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
            local_88 = "find";
            local_98 = 0;
            local_80 = 4;
            String::parse_latin1((StrRange*)&local_98);
            local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
            local_90 = 0;
            local_80 = 0x53;
            String::parse_latin1((StrRange*)&local_90);
            vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar3, local_d8);
            _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            CowData<char32_t>::_unref(local_d8);
            joined_r0x001092b9:if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }
         }
      } else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_00108eb5:pcVar4 = *(char**)( lVar9 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar4 != (char*)0x0) {
            local_80 = strlen(pcVar4);
         }
         local_88 = pcVar4;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "find";
         local_98 = 0;
         local_80 = 4;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      }
      LAB_00108b78:_err_print_error(&_LC91, "core/variant/array.cpp", 0x160, "Condition \"!_p->typed.validate(value, \"find\")\" is true. Returning: -1", 0, 0);
   } else {
      if (local_78[0] != 0) {
         if (iVar2 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               goto LAB_00108ba9;
            }
         } else if (iVar2 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_00108ba9;
            }
         } else if (( iVar2 == 3 ) && ( local_78[0] == 2 )) {
            fVar19 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar19);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_70 = local_50;
            uStack_68 = uStack_48;
            local_78[0] = local_58[0];
            goto LAB_00108ba9;
         }
         LAB_001089c1:Variant::get_type_name(&local_90);
         uVar3 = *(undefined8*)( lVar9 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "find";
         local_a0 = 0;
         local_80 = 4;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar3, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
         lVar9 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }
         }
         lVar9 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }
         }
         lVar9 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }
         }
         lVar9 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }
         }
         goto LAB_00108b78;
      }
      if (iVar2 != 0x18) goto LAB_001089c1;
      if (param_2 < 0) goto LAB_00108ca8;
      LAB_00108bb0:lVar9 = *(long*)( lVar9 + 0x10 );
      if (lVar9 != 0) {
         lVar11 = *(long*)( lVar9 + -8 );
         lVar17 = (long)param_2;
         if ((int)lVar11 != 0) {
            while (param_2 < (int)lVar11) {
               if (lVar11 <= lVar17) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar11, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }
               cVar7 = StringLikeVariantComparator::compare((Variant_conflict*)( lVar9 + lVar17 * 0x18 ), (Variant_conflict*)local_78);
               if (cVar7 != '\0') goto LAB_00108bd1;
               param_2 = param_2 + 1;
               lVar17 = lVar17 + 1;
               lVar9 = *(long*)( *(long*)this + 0x10 );
               if (lVar9 == 0) break;
               lVar11 = *(long*)( lVar9 + -8 );
            };
         }
      }
   }
   LAB_00108bcc:param_2 = -1;
   LAB_00108bd1:if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   LAB_00108be1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_2;
}/* Array::has(Variant const&) const */ulong Array::has(Array *this, Variant_conflict *param_1) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   char *pcVar4;
   ulong uVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   Object *pOVar11;
   long *plVar12;
   uint uVar13;
   ulong *puVar14;
   StringName *pSVar15;
   long in_FS_OFFSET;
   bool bVar16;
   float fVar17;
   CowData<char32_t> *local_d8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar2 = *(long*)this;
   iVar8 = *(int*)( lVar2 + 0x20 );
   if (iVar8 == 0) goto LAB_00109920;
   if (iVar8 == local_78[0]) {
      if (( iVar8 != 0x18 ) || ( uVar9 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78) ),uVar9 == 0) goto LAB_00109920;
      uVar13 = (uint)uVar9 & 0xffffff;
      if (uVar13 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar5 = (ulong)local_88 >> 8;
            local_88 = (char*)( uVar5 << 8 );
            LOCK();
            bVar16 = (char)ObjectDB::spin_lock == '\0';
            if (bVar16) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar16) break;
            local_88 = (char*)( uVar5 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar14 = (ulong*)( (ulong)uVar13 * 0x10 + ObjectDB::object_slots );
         if (( uVar9 >> 0x18 & 0x7fffffffff ) == ( *puVar14 & 0x7fffffffff )) {
            plVar1 = (long*)puVar14[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 != (long*)0x0) {
               if (*(long*)( lVar2 + 0x28 ) == 0) goto LAB_00109920;
               if (plVar1[1] == 0) {
                  pSVar15 = (StringName*)plVar1[0x23];
                  if (pSVar15 == (StringName*)0x0) {
                     pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                  }
               } else {
                  pSVar15 = (StringName*)( plVar1[1] + 0x20 );
               }
               StringName::StringName((StringName*)&local_b0, pSVar15);
               if (local_b0 == *(long*)( lVar2 + 0x28 )) {
                  LAB_00109c18:if (*(long*)( lVar2 + 0x30 ) == 0) {
                     if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                        StringName::unref();
                     }
                     LAB_00109920:iVar8 = find(this, (Variant_conflict*)local_78, 0);
                     uVar9 = CONCAT71(( int7 )((ulong)this >> 8), iVar8 != -1);
                     cVar6 = ( &Variant::needs_deinit )[local_78[0]];
                     goto joined_r0x0010993d;
                  }
                  ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                  lVar10 = Variant::get_validated_object();
                  if (lVar10 == 0) {
                     LAB_00109eec:cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                  } else {
                     pOVar11 = (Object*)__dynamic_cast(lVar10, &Object::typeinfo, &Script::typeinfo);
                     if (pOVar11 != (Object*)0x0) {
                        cVar6 = RefCounted::reference();
                        if (cVar6 != '\0') {
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           cVar6 = ( **(code**)( *(long*)pOVar11 + 0x1e8 ) )(pOVar11);
                           if (cVar6 == '\0') {
                              plVar1 = *(long**)( lVar2 + 0x30 );
                              if (plVar1[1] == 0) {
                                 plVar12 = (long*)plVar1[0x23];
                                 if (plVar12 == (long*)0x0) {
                                    plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                 }
                              } else {
                                 plVar12 = (long*)( plVar1[1] + 0x20 );
                              }
                              lVar10 = *plVar12;
                              if (lVar10 == 0) {
                                 local_a8 = 0;
                              } else {
                                 local_a8 = 0;
                                 if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                                 } else {
                                    String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                                 }
                              }
                              local_d8 = (CowData<char32_t>*)&local_a8;
                              local_a0 = 0;
                              String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar2 + 0x38 ));
                              local_98 = 0;
                              local_88 = "use \'has\'";
                              local_80 = 9;
                              String::parse_latin1((StrRange*)&local_98);
                              local_90 = 0;
                              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                              local_80 = 0x45;
                              String::parse_latin1((StrRange*)&local_90);
                              vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_d8);
                              _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                              CowData<char32_t>::_unref(local_d8);
                           }
                           cVar7 = RefCounted::unreference();
                           if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar11) ),cVar7 != '\0') {
                              ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                              Memory::free_static(pOVar11, false);
                           }
                           if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                              StringName::unref();
                           }
                           if (cVar6 == '\0') goto LAB_001098cd;
                           goto LAB_00109920;
                        }
                        goto LAB_00109eec;
                     }
                     cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                  }
                  if (cVar6 != '\0') {
                     Variant::_clear_internal();
                  }
                  plVar1 = *(long**)( lVar2 + 0x30 );
                  if (plVar1[1] == 0) {
                     plVar12 = (long*)plVar1[0x23];
                     if (plVar12 == (long*)0x0) {
                        plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                     }
                  } else {
                     plVar12 = (long*)( plVar1[1] + 0x20 );
                  }
                  lVar10 = *plVar12;
                  if (lVar10 == 0) {
                     local_a8 = 0;
                  } else {
                     local_a8 = 0;
                     if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                     } else {
                        String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                     }
                  }
                  local_d8 = (CowData<char32_t>*)&local_a8;
                  local_a0 = 0;
                  String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar2 + 0x38 ));
                  local_88 = "use \'has\'";
                  local_98 = 0;
                  local_80 = 9;
                  String::parse_latin1((StrRange*)&local_98);
                  local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                  local_90 = 0;
                  local_80 = 0x45;
                  String::parse_latin1((StrRange*)&local_90);
                  vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_d8);
                  _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  CowData<char32_t>::_unref(local_d8);
               } else {
                  if (plVar1[1] == 0) {
                     pSVar15 = (StringName*)plVar1[0x23];
                     if (pSVar15 == (StringName*)0x0) {
                        pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar15 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  cVar6 = ClassDB::is_parent_class(pSVar15, (StringName*)( lVar2 + 0x28 ));
                  if (cVar6 != '\0') goto LAB_00109c18;
                  lVar10 = *(long*)( lVar2 + 0x28 );
                  if (lVar10 == 0) {
                     local_a8 = 0;
                  } else {
                     local_a8 = 0;
                     if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                     } else {
                        String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                     }
                  }
                  local_d8 = (CowData<char32_t>*)&local_a8;
                  uVar3 = *(undefined8*)( lVar2 + 0x38 );
                  ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                  local_88 = "use \'has\'";
                  local_98 = 0;
                  local_80 = 9;
                  String::parse_latin1((StrRange*)&local_98);
                  local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                  local_90 = 0;
                  local_80 = 0x53;
                  String::parse_latin1((StrRange*)&local_90);
                  vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar3, local_d8);
                  _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  CowData<char32_t>::_unref(local_d8);
               }
               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }
               goto LAB_001098cd;
            }
         } else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }
      } else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }
      pcVar4 = *(char**)( lVar2 + 0x38 );
      local_80 = 0;
      local_a0 = 0;
      if (pcVar4 != (char*)0x0) {
         local_80 = strlen(pcVar4);
      }
      local_88 = pcVar4;
      String::parse_latin1((StrRange*)&local_a0);
      local_88 = "use \'has\'";
      local_98 = 0;
      local_80 = 9;
      String::parse_latin1((StrRange*)&local_98);
      local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
      local_90 = 0;
      local_80 = 0x4b;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
      _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   } else {
      if (local_78[0] == 0) {
         if (iVar8 == 0x18) goto LAB_00109920;
      } else if (iVar8 == 4) {
         if (local_78[0] == 0x15) {
            Variant::operator_cast_to_String((Variant_conflict*)&local_88);
            Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            goto LAB_00109920;
         }
      } else if (iVar8 == 0x15) {
         if (local_78[0] == 4) {
            Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
            Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }
            goto LAB_00109920;
         }
      } else if (( iVar8 == 3 ) && ( local_78[0] == 2 )) {
         fVar17 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
         Variant::Variant((Variant_conflict*)local_58, fVar17);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_70 = local_50;
         uStack_68 = uStack_48;
         local_78[0] = local_58[0];
         goto LAB_00109920;
      }
      Variant::get_type_name(&local_90);
      uVar3 = *(undefined8*)( lVar2 + 0x38 );
      Variant::get_type_name(&local_98, local_78[0]);
      local_88 = "use \'has\'";
      local_a0 = 0;
      local_80 = 9;
      String::parse_latin1((StrRange*)&local_a0);
      local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange*)&local_a8);
      vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar3, &local_90);
      _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
      pcVar4 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }
      }
      lVar2 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
   }
   LAB_001098cd:uVar9 = 0;
   _err_print_error(&_LC95, "core/variant/array.cpp", 0x1dd, "Condition \"!_p->typed.validate(value, \"use \'has\'\")\" is true. Returning: false", 0, 0);
   cVar6 = ( &Variant::needs_deinit )[local_78[0]];
   joined_r0x0010993d:if (cVar6 != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar9 & 0xffffffff;
}/* Array::rfind(Variant const&, int) const */int Array::rfind(Array *this, Variant_conflict *param_1, int param_2) {
   long *plVar1;
   undefined8 uVar2;
   char *pcVar3;
   code *pcVar4;
   ulong uVar5;
   char cVar6;
   char cVar7;
   long lVar8;
   ulong uVar9;
   Object *pOVar10;
   long *plVar11;
   int iVar12;
   uint uVar13;
   ulong *puVar14;
   StringName *pSVar15;
   long lVar16;
   long lVar17;
   long in_FS_OFFSET;
   bool bVar18;
   float fVar19;
   CowData<char32_t> *local_e8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( *(long*)this + 0x10 ) == 0 ) || ( *(long*)( *(long*)( *(long*)this + 0x10 ) + -8 ) == 0 )) {
      param_2 = 0xffffffff;
      goto LAB_0010a7ec;
   }
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar8 = *(long*)this;
   iVar12 = *(int*)( lVar8 + 0x20 );
   if (iVar12 == 0) {
      LAB_0010a6e9:lVar8 = *(long*)( lVar8 + 0x10 );
      if (param_2 < 0) {
         if (lVar8 != 0) {
            lVar17 = *(long*)( lVar8 + -8 );
            iVar12 = (int)lVar17;
            param_2 = param_2 + iVar12;
            if (-1 < param_2) {
               if ((long)(ulong)(uint)param_2 < lVar17) goto LAB_0010a70e;
               goto LAB_0010a7ba;
            }
            goto LAB_0010a7bc;
         }
      } else if (lVar8 != 0) {
         lVar17 = *(long*)( lVar8 + -8 );
         if (param_2 < lVar17) goto LAB_0010a70e;
         LAB_0010a7ba:iVar12 = (int)lVar17;
         LAB_0010a7bc:param_2 = iVar12 - 1;
         if (-1 < param_2) {
            LAB_0010a70e:lVar17 = (long)param_2;
            while (lVar8 != 0) {
               lVar16 = *(long*)( lVar8 + -8 );
               if (lVar16 <= lVar17) goto LAB_0010a755;
               cVar6 = StringLikeVariantComparator::compare((Variant_conflict*)( lVar8 + lVar17 * 0x18 ), (Variant_conflict*)local_78);
               if (cVar6 != '\0') goto LAB_0010a7dc;
               bVar18 = param_2 == 0;
               param_2 = param_2 - 1;
               if (bVar18) goto LAB_0010a7d7;
               lVar17 = lVar17 + -1;
               lVar8 = *(long*)( *(long*)this + 0x10 );
            };
            lVar16 = 0;
            LAB_0010a755:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar16, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
      }
   } else {
      if (iVar12 == local_78[0]) {
         if (iVar12 != 0x18) goto LAB_0010a6e9;
         uVar9 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar9 == 0) goto LAB_0010aa78;
         uVar13 = (uint)uVar9 & 0xffffff;
         if (uVar13 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar5 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar5 << 8 );
               LOCK();
               bVar18 = (char)ObjectDB::spin_lock == '\0';
               if (bVar18) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar18) break;
               local_88 = (char*)( uVar5 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar14 = (ulong*)( (ulong)uVar13 * 0x10 + ObjectDB::object_slots );
            if (( uVar9 >> 0x18 & 0x7fffffffff ) == ( *puVar14 & 0x7fffffffff )) {
               plVar1 = (long*)puVar14[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar8 + 0x28 ) == 0) goto LAB_0010aa78;
                  if (plVar1[1] == 0) {
                     pSVar15 = (StringName*)plVar1[0x23];
                     if (pSVar15 == (StringName*)0x0) {
                        pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar15 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar15);
                  if (local_b0 == *(long*)( lVar8 + 0x28 )) {
                     LAB_0010a919:if (*(long*)( lVar8 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                        }
                        LAB_0010aa78:lVar8 = *(long*)this;
                        goto LAB_0010a6e9;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar17 = Variant::get_validated_object();
                     if (lVar17 == 0) {
                        LAB_0010acf0:cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar10 = (Object*)__dynamic_cast(lVar17, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar10 != (Object*)0x0) {
                           cVar6 = RefCounted::reference();
                           if (cVar6 != '\0') {
                              if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }
                              cVar6 = ( **(code**)( *(long*)pOVar10 + 0x1e8 ) )();
                              if (cVar6 == '\0') {
                                 plVar1 = *(long**)( lVar8 + 0x30 );
                                 if (plVar1[1] == 0) {
                                    plVar11 = (long*)plVar1[0x23];
                                    if (plVar11 == (long*)0x0) {
                                       plVar11 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                    }
                                 } else {
                                    plVar11 = (long*)( plVar1[1] + 0x20 );
                                 }
                                 lVar17 = *plVar11;
                                 if (lVar17 == 0) {
                                    local_a8 = 0;
                                 } else {
                                    local_a8 = 0;
                                    if (*(char**)( lVar17 + 8 ) == (char*)0x0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar17 + 0x10 ));
                                    } else {
                                       String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar17 + 8 ));
                                    }
                                 }
                                 local_e8 = (CowData<char32_t>*)&local_a8;
                                 local_a0 = 0;
                                 String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar8 + 0x38 ));
                                 local_98 = 0;
                                 local_88 = "rfind";
                                 local_80 = 5;
                                 String::parse_latin1((StrRange*)&local_98);
                                 local_90 = 0;
                                 local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                                 local_80 = 0x45;
                                 String::parse_latin1((StrRange*)&local_90);
                                 vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e8);
                                 _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                                 CowData<char32_t>::_unref(local_e8);
                              }
                              cVar7 = RefCounted::unreference();
                              if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar10) ),cVar7 != '\0') {
                                 ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                                 Memory::free_static(pOVar10, false);
                              }
                              if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                                 StringName::unref();
                              }
                              if (cVar6 == '\0') goto LAB_0010a6b8;
                              goto LAB_0010aa78;
                           }
                           goto LAB_0010acf0;
                        }
                        cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar6 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar8 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar11 = (long*)plVar1[0x23];
                        if (plVar11 == (long*)0x0) {
                           plVar11 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar11 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar17 = *plVar11;
                     if (lVar17 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar17 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar17 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar17 + 8 ));
                        }
                     }
                     local_e8 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar8 + 0x38 ));
                     local_88 = "rfind";
                     local_98 = 0;
                     local_80 = 5;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e8);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar15 = (StringName*)plVar1[0x23];
                        if (pSVar15 == (StringName*)0x0) {
                           pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar15 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar6 = ClassDB::is_parent_class(pSVar15, (StringName*)( lVar8 + 0x28 ));
                     if (cVar6 != '\0') goto LAB_0010a919;
                     lVar17 = *(long*)( lVar8 + 0x28 );
                     if (lVar17 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar17 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar17 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar17 + 8 ));
                        }
                     }
                     local_e8 = (CowData<char32_t>*)&local_a8;
                     uVar2 = *(undefined8*)( lVar8 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "rfind";
                     local_98 = 0;
                     local_80 = 5;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar2, local_e8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e8);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_0010a6b8;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar3 = *(char**)( lVar8 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar3 != (char*)0x0) {
            local_80 = strlen(pcVar3);
         }
         local_88 = pcVar3;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "rfind";
         local_98 = 0;
         local_80 = 5;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar12 == 0x18) goto LAB_0010a6e9;
         } else if (iVar12 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar8 = *(long*)this;
               goto LAB_0010a6e9;
            }
         } else if (iVar12 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_0010aa78;
            }
         } else if (( iVar12 == 3 ) && ( local_78[0] == 2 )) {
            fVar19 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar19);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar8 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_0010a6e9;
         }
         Variant::get_type_name(&local_90);
         uVar2 = *(undefined8*)( lVar8 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "rfind";
         local_a0 = 0;
         local_80 = 5;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar2, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar3 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar8 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
         lVar8 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
         lVar8 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
         lVar8 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
      }
      LAB_0010a6b8:_err_print_error("rfind", "core/variant/array.cpp", 0x193, "Condition \"!_p->typed.validate(value, \"rfind\")\" is true. Returning: -1", 0, 0);
   }
   LAB_0010a7d7:param_2 = 0xffffffff;
   LAB_0010a7dc:if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   LAB_0010a7ec:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_2;
}/* Array::count(Variant const&) const */int Array::count(Array *this, Variant_conflict *param_1) {
   long *plVar1;
   undefined8 uVar2;
   char *pcVar3;
   ulong uVar4;
   char cVar5;
   char cVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   Object *pOVar10;
   long *plVar11;
   uint uVar12;
   ulong *puVar13;
   StringName *pSVar14;
   long lVar15;
   int iVar16;
   long in_FS_OFFSET;
   bool bVar17;
   float fVar18;
   CowData<char32_t> *local_e0;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar7 = *(long*)this;
   iVar16 = *(int*)( lVar7 + 0x20 );
   if (iVar16 == 0) {
      LAB_0010b4c8:lVar7 = *(long*)( lVar7 + 0x10 );
      if (lVar7 == 0) goto LAB_0010b475;
      LAB_0010b4d1:lVar9 = *(long*)( lVar7 + -8 );
      if (lVar9 == 0) goto LAB_0010b475;
      lVar15 = 0;
      iVar16 = 0;
      while (lVar15 < lVar9) {
         cVar5 = StringLikeVariantComparator::compare((Variant_conflict*)( lVar7 + lVar15 * 0x18 ), (Variant_conflict*)local_78);
         iVar16 = ( iVar16 + 1 ) - ( uint )(cVar5 == '\0');
         lVar15 = lVar15 + 1;
         lVar7 = *(long*)( *(long*)this + 0x10 );
         if (lVar7 == 0) {
            cVar5 = ( &Variant::needs_deinit )[local_78[0]];
            goto joined_r0x0010b521;
         }
         lVar9 = *(long*)( lVar7 + -8 );
      };
   } else {
      if (local_78[0] == iVar16) {
         if (local_78[0] != 0x18) goto LAB_0010b4c8;
         uVar8 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar8 == 0) goto LAB_0010b5d8;
         uVar12 = (uint)uVar8 & 0xffffff;
         if (uVar12 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar4 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar4 << 8 );
               LOCK();
               bVar17 = (char)ObjectDB::spin_lock == '\0';
               if (bVar17) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar17) break;
               local_88 = (char*)( uVar4 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar13 = (ulong*)( (ulong)uVar12 * 0x10 + ObjectDB::object_slots );
            if (( uVar8 >> 0x18 & 0x7fffffffff ) == ( *puVar13 & 0x7fffffffff )) {
               plVar1 = (long*)puVar13[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar7 + 0x28 ) == 0) {
                     LAB_0010b534:lVar7 = *(long*)this;
                     goto LAB_0010b4c8;
                  }
                  if (plVar1[1] == 0) {
                     pSVar14 = (StringName*)plVar1[0x23];
                     if (pSVar14 == (StringName*)0x0) {
                        pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar14);
                  if (local_b0 == *(long*)( lVar7 + 0x28 )) {
                     LAB_0010b767:if (*(long*)( lVar7 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                           LAB_0010b5d8:lVar7 = *(long*)this;
                           goto LAB_0010b4c8;
                        }
                        goto LAB_0010b534;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar9 = Variant::get_validated_object();
                     if (lVar9 == 0) {
                        LAB_0010bada:cVar5 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar10 = (Object*)__dynamic_cast(lVar9, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar10 != (Object*)0x0) {
                           cVar5 = RefCounted::reference();
                           if (cVar5 == '\0') goto LAB_0010bada;
                           if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }
                           cVar5 = ( **(code**)( *(long*)pOVar10 + 0x1e8 ) )(pOVar10);
                           if (cVar5 == '\0') {
                              plVar1 = *(long**)( lVar7 + 0x30 );
                              if (plVar1[1] == 0) {
                                 plVar11 = (long*)plVar1[0x23];
                                 if (plVar11 == (long*)0x0) {
                                    plVar11 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                 }
                              } else {
                                 plVar11 = (long*)( plVar1[1] + 0x20 );
                              }
                              lVar9 = *plVar11;
                              if (lVar9 == 0) {
                                 local_a8 = 0;
                              } else {
                                 local_a8 = 0;
                                 if (*(char**)( lVar9 + 8 ) == (char*)0x0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar9 + 0x10 ));
                                 } else {
                                    String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar9 + 8 ));
                                 }
                              }
                              local_e0 = (CowData<char32_t>*)&local_a8;
                              local_a0 = 0;
                              String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar7 + 0x38 ));
                              local_98 = 0;
                              local_88 = "count";
                              local_80 = 5;
                              String::parse_latin1((StrRange*)&local_98);
                              local_90 = 0;
                              local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                              local_80 = 0x45;
                              String::parse_latin1((StrRange*)&local_90);
                              vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                              _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                              CowData<char32_t>::_unref(local_e0);
                           }
                           cVar6 = RefCounted::unreference();
                           if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar10) ),cVar6 != '\0') {
                              ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                              Memory::free_static(pOVar10, false);
                           }
                           if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                              StringName::unref();
                           }
                           if (cVar5 != '\0') goto LAB_0010b5d8;
                           goto LAB_0010b454;
                        }
                        cVar5 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar5 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar7 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar11 = (long*)plVar1[0x23];
                        if (plVar11 == (long*)0x0) {
                           plVar11 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar11 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar9 = *plVar11;
                     if (lVar9 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar9 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar9 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar9 + 8 ));
                        }
                     }
                     local_e0 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar7 + 0x38 ));
                     local_88 = "count";
                     local_98 = 0;
                     local_80 = 5;
                     String::parse_latin1((StrRange*)&local_98);
                     local_90 = 0;
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e0);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar14 = (StringName*)plVar1[0x23];
                        if (pSVar14 == (StringName*)0x0) {
                           pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar5 = ClassDB::is_parent_class(pSVar14, (StringName*)( lVar7 + 0x28 ));
                     if (cVar5 != '\0') goto LAB_0010b767;
                     lVar9 = *(long*)( lVar7 + 0x28 );
                     if (lVar9 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar9 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar9 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar9 + 8 ));
                        }
                     }
                     local_e0 = (CowData<char32_t>*)&local_a8;
                     uVar2 = *(undefined8*)( lVar7 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "count";
                     local_98 = 0;
                     local_80 = 5;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar2, local_e0);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e0);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_0010b454;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar3 = *(char**)( lVar7 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar3 != (char*)0x0) {
            local_80 = strlen(pcVar3);
         }
         local_88 = pcVar3;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "count";
         local_98 = 0;
         local_80 = 5;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar16 == 0x18) {
               lVar7 = *(long*)( lVar7 + 0x10 );
               if (lVar7 == 0) {
                  iVar16 = 0;
                  goto LAB_0010b488;
               }
               goto LAB_0010b4d1;
            }
         } else if (iVar16 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar7 = *(long*)this;
               goto LAB_0010b4c8;
            }
         } else if (iVar16 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_0010b5d8;
            }
         } else if (( local_78[0] == 2 ) && ( iVar16 == 3 )) {
            fVar18 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar18);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar7 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_0010b4c8;
         }
         Variant::get_type_name(&local_90);
         uVar2 = *(undefined8*)( lVar7 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "count";
         local_a0 = 0;
         local_80 = 5;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar2, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar3 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar7 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
         lVar7 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
         lVar7 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
         lVar7 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
      }
      LAB_0010b454:_err_print_error("count", "core/variant/array.cpp", 0x1cc, "Condition \"!_p->typed.validate(value, \"count\")\" is true. Returning: 0", 0, 0);
      LAB_0010b475:iVar16 = 0;
   }
   cVar5 = ( &Variant::needs_deinit )[local_78[0]];
   joined_r0x0010b521:if (cVar5 != '\0') {
      Variant::_clear_internal();
   }
   LAB_0010b488:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar16;
}/* Array::set(int, Variant const&) */void Array::set(Array *this, int param_1, Variant_conflict *param_2) {
   long *plVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   ulong uVar6;
   char cVar7;
   char cVar8;
   Variant_conflict *this_00;
   ulong uVar9;
   long lVar10;
   Object *pOVar11;
   long *plVar12;
   uint uVar13;
   ulong *puVar14;
   StringName *pSVar15;
   long in_FS_OFFSET;
   bool bVar16;
   float fVar17;
   CowData<char32_t> *local_d8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      _err_print_error(&_LC100, "core/variant/array.cpp", 0x1e8, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      goto LAB_0010c30e;
   }
   Variant::Variant((Variant_conflict*)local_78, param_2);
   lVar3 = *(long*)this;
   iVar2 = *(int*)( lVar3 + 0x20 );
   if (iVar2 == 0) goto LAB_0010c2ec;
   if (iVar2 == local_78[0]) {
      if (( iVar2 != 0x18 ) || ( uVar9 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78) ),uVar9 == 0) goto LAB_0010c2ec;
      uVar13 = (uint)uVar9 & 0xffffff;
      if ((uint)ObjectDB::slot_max <= uVar13) {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_0010c59b:pcVar5 = *(char**)( lVar3 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar5 != (char*)0x0) {
            local_80 = strlen(pcVar5);
         }
         local_88 = pcVar5;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "set";
         local_98 = 0;
         local_80 = 3;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         goto LAB_0010c29e;
      }
      while (true) {
         uVar6 = (ulong)local_88 >> 8;
         local_88 = (char*)( uVar6 << 8 );
         LOCK();
         bVar16 = (char)ObjectDB::spin_lock == '\0';
         if (bVar16) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }
         UNLOCK();
         if (bVar16) break;
         local_88 = (char*)( uVar6 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      };
      puVar14 = (ulong*)( (ulong)uVar13 * 0x10 + ObjectDB::object_slots );
      if (( uVar9 >> 0x18 & 0x7fffffffff ) != ( *puVar14 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c59b;
      }
      plVar1 = (long*)puVar14[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (plVar1 == (long*)0x0) goto LAB_0010c59b;
      if (*(long*)( lVar3 + 0x28 ) == 0) goto LAB_0010c2ec;
      if (plVar1[1] == 0) {
         pSVar15 = (StringName*)plVar1[0x23];
         if (pSVar15 == (StringName*)0x0) {
            pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
         }
      } else {
         pSVar15 = (StringName*)( plVar1[1] + 0x20 );
      }
      StringName::StringName((StringName*)&local_b0, pSVar15);
      if (local_b0 != *(long*)( lVar3 + 0x28 )) {
         if (plVar1[1] == 0) {
            pSVar15 = (StringName*)plVar1[0x23];
            if (pSVar15 == (StringName*)0x0) {
               pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
            }
         } else {
            pSVar15 = (StringName*)( plVar1[1] + 0x20 );
         }
         cVar7 = ClassDB::is_parent_class(pSVar15, (StringName*)( lVar3 + 0x28 ));
         if (cVar7 != '\0') goto LAB_0010c445;
         lVar10 = *(long*)( lVar3 + 0x28 );
         if (lVar10 == 0) {
            local_a8 = 0;
         } else {
            local_a8 = 0;
            if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
            } else {
               String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
            }
         }
         local_d8 = (CowData<char32_t>*)&local_a8;
         uVar4 = *(undefined8*)( lVar3 + 0x38 );
         ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
         local_88 = "set";
         local_98 = 0;
         local_80 = 3;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
         local_90 = 0;
         local_80 = 0x53;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar4, local_d8);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref(local_d8);
         joined_r0x0010cb95:if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c29e;
      }
      LAB_0010c445:if (*(long*)( lVar3 + 0x30 ) != 0) {
         ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
         lVar10 = Variant::get_validated_object();
         if (lVar10 == 0) {
            LAB_0010c823:cVar7 = ( &Variant::needs_deinit )[local_58[0]];
         } else {
            pOVar11 = (Object*)__dynamic_cast(lVar10, &Object::typeinfo, &Script::typeinfo);
            if (pOVar11 != (Object*)0x0) {
               cVar7 = RefCounted::reference();
               if (cVar7 != '\0') {
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  cVar7 = ( **(code**)( *(long*)pOVar11 + 0x1e8 ) )();
                  if (cVar7 == '\0') {
                     plVar1 = *(long**)( lVar3 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar12 = (long*)plVar1[0x23];
                        if (plVar12 == (long*)0x0) {
                           plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar12 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar10 = *plVar12;
                     if (lVar10 == 0) {
                        local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                        }
                     }
                     local_d8 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar3 + 0x38 ));
                     local_98 = 0;
                     local_88 = "set";
                     local_80 = 3;
                     String::parse_latin1((StrRange*)&local_98);
                     local_90 = 0;
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_d8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_d8);
                  }
                  cVar8 = RefCounted::unreference();
                  if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler(pOVar11) ),cVar8 != '\0') {
                     ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                     Memory::free_static(pOVar11, false);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  if (cVar7 == '\0') goto LAB_0010c29e;
                  goto LAB_0010c2ec;
               }
               goto LAB_0010c823;
            }
            cVar7 = ( &Variant::needs_deinit )[local_58[0]];
         }
         if (cVar7 != '\0') {
            Variant::_clear_internal();
         }
         plVar1 = *(long**)( lVar3 + 0x30 );
         if (plVar1[1] == 0) {
            plVar12 = (long*)plVar1[0x23];
            if (plVar12 == (long*)0x0) {
               plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
            }
         } else {
            plVar12 = (long*)( plVar1[1] + 0x20 );
         }
         lVar10 = *plVar12;
         if (lVar10 == 0) {
            local_a8 = 0;
         } else {
            local_a8 = 0;
            if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
            } else {
               String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
            }
         }
         local_d8 = (CowData<char32_t>*)&local_a8;
         local_a0 = 0;
         String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar3 + 0x38 ));
         local_98 = 0;
         local_88 = "set";
         local_80 = 3;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
         local_90 = 0;
         local_80 = 0x45;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_d8);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref(local_d8);
         goto joined_r0x0010cb95;
      }
      if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
         StringName::unref();
      }
      LAB_0010c2ec:this_00 = (Variant_conflict*)operator[](this, param_1);
      Variant::operator =(this_00, (Variant_conflict*)local_78);
      cVar7 = ( &Variant::needs_deinit )[local_78[0]];
   } else {
      if (local_78[0] == 0) {
         if (iVar2 == 0x18) goto LAB_0010c2ec;
      } else if (iVar2 == 4) {
         if (local_78[0] == 0x15) {
            Variant::operator_cast_to_String((Variant_conflict*)&local_88);
            Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            goto LAB_0010c2ec;
         }
      } else if (iVar2 == 0x15) {
         if (local_78[0] == 4) {
            Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
            Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }
            goto LAB_0010c2ec;
         }
      } else if (( iVar2 == 3 ) && ( local_78[0] == 2 )) {
         fVar17 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
         Variant::Variant((Variant_conflict*)local_58, fVar17);
         if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_70 = local_50;
         uStack_68 = uStack_48;
         local_78[0] = local_58[0];
         goto LAB_0010c2ec;
      }
      Variant::get_type_name(&local_90);
      uVar4 = *(undefined8*)( lVar3 + 0x38 );
      Variant::get_type_name(&local_98, local_78[0]);
      local_88 = "set";
      local_a0 = 0;
      local_80 = 3;
      String::parse_latin1((StrRange*)&local_a0);
      local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
      local_a8 = 0;
      local_80 = 0x3f;
      String::parse_latin1((StrRange*)&local_a8);
      vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar4, &local_90);
      _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
      pcVar5 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }
      }
      lVar3 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      lVar3 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      lVar3 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      lVar3 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      LAB_0010c29e:_err_print_error(&_LC100, "core/variant/array.cpp", 0x1ea, "Condition \"!_p->typed.validate(value, \"set\")\" is true.", 0, 0);
      cVar7 = ( &Variant::needs_deinit )[local_78[0]];
   }
   if (cVar7 != '\0') {
      Variant::_clear_internal();
   }
   LAB_0010c30e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Array::push_back(Variant const&) */void Array::push_back(Array *this, Variant_conflict *param_1) {
   long *plVar1;
   undefined8 uVar2;
   char *pcVar3;
   ulong uVar4;
   char cVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   Object *pOVar9;
   long *plVar10;
   uint uVar11;
   long lVar12;
   ulong *puVar13;
   StringName *pSVar14;
   long lVar15;
   long lVar16;
   long in_FS_OFFSET;
   bool bVar17;
   float fVar18;
   CowData<char32_t> *local_e8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      _err_print_error("push_back", "core/variant/array.cpp", 0x119, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      goto LAB_0010d10d;
   }
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar15 = *(long*)this;
   iVar7 = *(int*)( lVar15 + 0x20 );
   if (iVar7 == 0) {
      LAB_0010d078:Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
      if (*(long*)( lVar15 + 0x10 ) == 0) {
         lVar12 = 1;
      } else {
         lVar12 = *(long*)( *(long*)( lVar15 + 0x10 ) + -8 ) + 1;
      }
      iVar7 = CowData<Variant>::resize<false>((CowData<Variant>*)( lVar15 + 0x10 ), lVar12);
      if (iVar7 == 0) {
         if (*(long*)( lVar15 + 0x10 ) == 0) {
            lVar16 = -1;
            lVar12 = 0;
         } else {
            lVar12 = *(long*)( *(long*)( lVar15 + 0x10 ) + -8 );
            lVar16 = lVar12 + -1;
            if (-1 < lVar16) {
               CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar15 + 0x10 ));
               Variant::operator =((Variant_conflict*)( *(long*)( lVar15 + 0x10 ) + lVar16 * 0x18 ), (Variant_conflict*)local_58);
               goto LAB_0010d0ea;
            }
         }
         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar16, lVar12, "p_index", "size()", "", false, false);
      } else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }
      LAB_0010d0ea:if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      cVar5 = ( &Variant::needs_deinit )[local_78[0]];
   } else {
      if (iVar7 == local_78[0]) {
         if (iVar7 != 0x18) goto LAB_0010d078;
         uVar8 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar8 == 0) {
            LAB_0010d3a8:lVar15 = *(long*)this;
            goto LAB_0010d078;
         }
         uVar11 = (uint)uVar8 & 0xffffff;
         if (uVar11 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar4 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar4 << 8 );
               LOCK();
               bVar17 = (char)ObjectDB::spin_lock == '\0';
               if (bVar17) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar17) break;
               local_88 = (char*)( uVar4 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar13 = (ulong*)( (ulong)uVar11 * 0x10 + ObjectDB::object_slots );
            if (( uVar8 >> 0x18 & 0x7fffffffff ) == ( *puVar13 & 0x7fffffffff )) {
               plVar1 = (long*)puVar13[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar15 + 0x28 ) == 0) {
                     LAB_0010d6c4:lVar15 = *(long*)this;
                     goto LAB_0010d078;
                  }
                  if (plVar1[1] == 0) {
                     pSVar14 = (StringName*)plVar1[0x23];
                     if (pSVar14 == (StringName*)0x0) {
                        pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar14);
                  if (local_b0 == *(long*)( lVar15 + 0x28 )) {
                     LAB_0010d251:if (*(long*)( lVar15 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                           goto LAB_0010d3a8;
                        }
                        goto LAB_0010d6c4;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar12 = Variant::get_validated_object();
                     if (lVar12 == 0) {
                        LAB_0010d6f6:cVar5 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar9 = (Object*)__dynamic_cast(lVar12, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar9 != (Object*)0x0) {
                           cVar5 = RefCounted::reference();
                           if (cVar5 != '\0') {
                              if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }
                              cVar5 = ( **(code**)( *(long*)pOVar9 + 0x1e8 ) )();
                              if (cVar5 == '\0') {
                                 plVar1 = *(long**)( lVar15 + 0x30 );
                                 if (plVar1[1] == 0) {
                                    plVar10 = (long*)plVar1[0x23];
                                    if (plVar10 == (long*)0x0) {
                                       plVar10 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                    }
                                 } else {
                                    plVar10 = (long*)( plVar1[1] + 0x20 );
                                 }
                                 lVar12 = *plVar10;
                                 if (lVar12 == 0) {
                                    LAB_0010dbed:local_a8 = 0;
                                 } else {
                                    local_a8 = 0;
                                    if (*(char**)( lVar12 + 8 ) == (char*)0x0) {
                                       if (*(long*)( lVar12 + 0x10 ) == 0) goto LAB_0010dbed;
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar12 + 0x10 ));
                                    } else {
                                       String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar12 + 8 ));
                                    }
                                 }
                                 local_e8 = (CowData<char32_t>*)&local_a8;
                                 local_a0 = 0;
                                 String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar15 + 0x38 ));
                                 local_98 = 0;
                                 local_88 = "push_back";
                                 local_80 = 9;
                                 String::parse_latin1((StrRange*)&local_98);
                                 local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                                 local_90 = 0;
                                 local_80 = 0x45;
                                 String::parse_latin1((StrRange*)&local_90);
                                 vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e8);
                                 _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                                 CowData<char32_t>::_unref(local_e8);
                              }
                              cVar6 = RefCounted::unreference();
                              if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar9) ),cVar6 != '\0') {
                                 ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                                 Memory::free_static(pOVar9, false);
                              }
                              if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                                 StringName::unref();
                              }
                              if (cVar5 == '\0') goto LAB_0010d01b;
                              goto LAB_0010d3a8;
                           }
                           goto LAB_0010d6f6;
                        }
                        cVar5 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar5 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar15 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar10 = (long*)plVar1[0x23];
                        if (plVar10 == (long*)0x0) {
                           plVar10 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar10 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar12 = *plVar10;
                     if (lVar12 == 0) {
                        LAB_0010dc3a:local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar12 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar12 + 0x10 ) == 0) goto LAB_0010dc3a;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar12 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar12 + 8 ));
                        }
                     }
                     local_e8 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar15 + 0x38 ));
                     local_88 = "push_back";
                     local_98 = 0;
                     local_80 = 9;
                     String::parse_latin1((StrRange*)&local_98);
                     local_90 = 0;
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e8);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar14 = (StringName*)plVar1[0x23];
                        if (pSVar14 == (StringName*)0x0) {
                           pSVar14 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar14 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar5 = ClassDB::is_parent_class(pSVar14, (StringName*)( lVar15 + 0x28 ));
                     if (cVar5 != '\0') goto LAB_0010d251;
                     lVar12 = *(long*)( lVar15 + 0x28 );
                     if (lVar12 == 0) {
                        LAB_0010dc24:local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar12 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar12 + 0x10 ) == 0) goto LAB_0010dc24;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar12 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar12 + 8 ));
                        }
                     }
                     local_e8 = (CowData<char32_t>*)&local_a8;
                     uVar2 = *(undefined8*)( lVar15 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "push_back";
                     local_98 = 0;
                     local_80 = 9;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar2, local_e8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e8);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_0010d01b;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar3 = *(char**)( lVar15 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar3 != (char*)0x0) {
            local_80 = strlen(pcVar3);
         }
         local_88 = pcVar3;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "push_back";
         local_98 = 0;
         local_80 = 9;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar7 == 0x18) goto LAB_0010d078;
         } else if (iVar7 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar15 = *(long*)this;
               goto LAB_0010d078;
            }
         } else if (iVar7 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_0010d3a8;
            }
         } else if (( iVar7 == 3 ) && ( local_78[0] == 2 )) {
            fVar18 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar18);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar15 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_0010d078;
         }
         Variant::get_type_name(&local_90);
         uVar2 = *(undefined8*)( lVar15 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "push_back";
         local_a0 = 0;
         local_80 = 9;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar2, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar3 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar15 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         lVar15 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         lVar15 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         lVar15 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
      }
      LAB_0010d01b:_err_print_error("push_back", "core/variant/array.cpp", 0x11b, "Condition \"!_p->typed.validate(value, \"push_back\")\" is true.", 0, 0);
      cVar5 = ( &Variant::needs_deinit )[local_78[0]];
   }
   if (cVar5 != '\0') {
      Variant::_clear_internal();
   }
   LAB_0010d10d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Array::append_array(Array const&) */void Array::append_array(Array *this, Array *param_1) {
   long *plVar1;
   Variant_conflict *this_00;
   int iVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   char cVar6;
   char cVar7;
   ulong uVar8;
   long lVar9;
   Object *pOVar10;
   long *plVar11;
   size_t sVar12;
   char *pcVar13;
   undefined8 uVar14;
   Vector<Variant> *pVVar15;
   uint uVar16;
   ulong *puVar17;
   StringName *pSVar18;
   long lVar19;
   long in_FS_OFFSET;
   bool bVar20;
   float fVar21;
   CowData<char32_t> *local_c8;
   CowData<char32_t> *local_c0;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80[2];
   long local_70;
   char *local_68;
   size_t local_60;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar19 = *(long*)this;
   if (*(long*)( lVar19 + 0x18 ) != 0) {
      _err_print_error("append_array", "core/variant/array.cpp", 0x120, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      goto LAB_0010df46;
   }
   local_70 = 0;
   if (*(long*)( *(long*)param_1 + 0x10 ) == 0) {
      LAB_0010e5b0:local_60 = 0;
      pVVar15 = (Vector<Variant>*)( lVar19 + 8 );
   } else {
      CowData<Variant>::_ref((CowData<Variant>*)&local_70, (CowData*)( *(long*)param_1 + 0x10 ));
      if (local_70 == 0) {
         lVar19 = *(long*)this;
         goto LAB_0010e5b0;
      }
      lVar19 = 0;
      lVar9 = local_70;
      do {
         while (true) {
            lVar4 = *(long*)this;
            if (*(long*)( lVar9 + -8 ) <= lVar19) {
               pVVar15 = (Vector<Variant>*)( lVar4 + 8 );
               local_60 = 0;
               CowData<Variant>::_ref((CowData<Variant>*)&local_60, (CowData*)&local_70);
               goto LAB_0010e38d;
            }
            CowData<Variant>::_copy_on_write((CowData<Variant>*)&local_70);
            lVar9 = local_70;
            iVar2 = *(int*)( lVar4 + 0x20 );
            if (iVar2 == 0) goto joined_r0x0010e0cc;
            this_00 = (Variant_conflict*)( local_70 + lVar19 * 0x18 );
            iVar3 = *(int*)this_00;
            if (iVar2 == iVar3) break;
            if (iVar3 == 0) {
               if (iVar2 != 0x18) goto LAB_0010dd69;
            } else if (iVar2 == 4) {
               if (iVar3 != 0x15) goto LAB_0010dd69;
               Variant::operator_cast_to_String((Variant_conflict*)&local_68);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_68);
               if (this_00 == (Variant_conflict*)local_58) {
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
               } else {
                  if (( &Variant::needs_deinit )[*(int*)this_00] != '\0') {
                     Variant::_clear_internal();
                  }
                  *(undefined4*)this_00 = 0;
                  *(int*)this_00 = local_58[0];
                  *(undefined8*)( this_00 + 8 ) = local_50;
                  *(undefined8*)( this_00 + 0x10 ) = uStack_48;
               }
               pcVar13 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 != 0) goto LAB_0010e358;
                  local_68 = (char*)0x0;
                  Memory::free_static(pcVar13 + -0x10, false);
                  lVar9 = local_70;
               }
            } else {
               if (iVar2 == 0x15) {
                  if (iVar3 == 4) {
                     Variant::operator_cast_to_StringName((Variant_conflict*)&local_68);
                     Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_68);
                     if (this_00 == (Variant_conflict*)local_58) {
                        if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }
                     } else {
                        if (( &Variant::needs_deinit )[*(int*)this_00] != '\0') {
                           Variant::_clear_internal();
                        }
                        *(undefined4*)this_00 = 0;
                        *(int*)this_00 = local_58[0];
                        *(undefined8*)( this_00 + 8 ) = local_50;
                        *(undefined8*)( this_00 + 0x10 ) = uStack_48;
                     }
                     if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                        StringName::unref();
                     }
                     goto joined_r0x0010e0cc;
                  }
                  LAB_0010dd69:Variant::get_type_name(local_80);
                  uVar14 = *(undefined8*)( lVar4 + 0x38 );
                  Variant::get_type_name(&local_88, *(undefined4*)this_00);
                  local_68 = "append_array";
                  local_90 = 0;
                  local_60 = 0xc;
                  String::parse_latin1((StrRange*)&local_90);
                  local_68 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
                  local_98 = 0;
                  local_60 = 0x3f;
                  String::parse_latin1((StrRange*)&local_98);
                  vformat<String,String,char_const*,String>((Variant_conflict*)&local_68, (StrRange*)&local_98, (StrRange*)&local_90, &local_88, uVar14, local_80);
                  _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", (Variant_conflict*)&local_68, 0, 0);
                  pcVar13 = local_68;
                  if (local_68 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = (char*)0x0;
                        Memory::free_static(pcVar13 + -0x10, false);
                     }
                  }
                  lVar19 = local_98;
                  if (local_98 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98 = 0;
                        Memory::free_static((void*)( lVar19 + -0x10 ), false);
                     }
                  }
                  lVar19 = local_90;
                  if (local_90 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_90 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_90 = 0;
                        Memory::free_static((void*)( lVar19 + -0x10 ), false);
                     }
                  }
                  lVar19 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_88 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar19 + -0x10 ), false);
                     }
                  }
                  lVar19 = local_80[0];
                  if (local_80[0] != 0) {
                     LOCK();
                     plVar1 = (long*)( local_80[0] + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_80[0] = 0;
                        Memory::free_static((void*)( lVar19 + -0x10 ), false);
                     }
                  }
                  goto LAB_0010df1d;
               }
               if (( iVar2 != 3 ) || ( iVar3 != 2 )) goto LAB_0010dd69;
               fVar21 = Variant::operator_cast_to_float(this_00);
               Variant::Variant((Variant_conflict*)local_58, fVar21);
               if (this_00 == (Variant_conflict*)local_58) {
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
               } else {
                  if (( &Variant::needs_deinit )[*(int*)this_00] != '\0') {
                     Variant::_clear_internal();
                  }
                  *(undefined4*)this_00 = 0;
                  *(int*)this_00 = local_58[0];
                  *(undefined8*)( this_00 + 8 ) = local_50;
                  *(undefined8*)( this_00 + 0x10 ) = uStack_48;
               }
            }
            joined_r0x0010e0cc:lVar19 = lVar19 + 1;
            if (lVar9 == 0) goto LAB_0010df86;
         };
         if (( iVar2 != 0x18 ) || ( uVar8 = Variant::operator_cast_to_ObjectID(this_00) ),uVar8 == 0) goto joined_r0x0010e0cc;
         uVar16 = (uint)uVar8 & 0xffffff;
         if ((uint)ObjectDB::slot_max <= uVar16) {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            LAB_0010e6d5:pcVar13 = *(char**)( lVar4 + 0x38 );
            sVar12 = 0;
            local_90 = 0;
            if (pcVar13 != (char*)0x0) {
               sVar12 = strlen(pcVar13);
            }
            local_68 = pcVar13;
            local_60 = sVar12;
            String::parse_latin1((StrRange*)&local_90);
            local_68 = "append_array";
            local_88 = 0;
            local_60 = 0xc;
            String::parse_latin1((StrRange*)&local_88);
            local_68 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
            local_80[0] = 0;
            local_60 = 0x4b;
            String::parse_latin1((StrRange*)local_80);
            vformat<String,String>((Variant_conflict*)&local_68, (StrRange*)local_80, (StrRange*)&local_88, (StrRange*)&local_90);
            _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (Variant_conflict*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            LAB_0010df1d:_err_print_error("append_array", "core/variant/array.cpp", 0x124, "Condition \"!_p->typed.validate(validated_array.write[i], \"append_array\")\" is true.", 0, 0);
            CowData<Variant>::_unref((CowData<Variant>*)&local_70);
            goto LAB_0010df46;
         }
         while (true) {
            uVar5 = (ulong)local_68 >> 8;
            local_68 = (char*)( uVar5 << 8 );
            LOCK();
            bVar20 = (char)ObjectDB::spin_lock == '\0';
            if (bVar20) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar20) break;
            local_68 = (char*)( uVar5 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar17 = (ulong*)( (ulong)uVar16 * 0x10 + ObjectDB::object_slots );
         if (( uVar8 >> 0x18 & 0x7fffffffff ) != ( *puVar17 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_0010e6d5;
         }
         plVar1 = (long*)puVar17[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (plVar1 == (long*)0x0) goto LAB_0010e6d5;
         if (*(long*)( lVar4 + 0x28 ) != 0) {
            if (plVar1[1] == 0) {
               pSVar18 = (StringName*)plVar1[0x23];
               if (pSVar18 == (StringName*)0x0) {
                  pSVar18 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
               }
            } else {
               pSVar18 = (StringName*)( plVar1[1] + 0x20 );
            }
            StringName::StringName((StringName*)&local_a0, pSVar18);
            if (local_a0 == *(long*)( lVar4 + 0x28 )) {
               LAB_0010e1be:if (*(long*)( lVar4 + 0x30 ) == 0) {
                  if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_0010e358;
               }
               ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
               lVar9 = Variant::get_validated_object();
               if (lVar9 == 0) {
                  LAB_0010e3ce:cVar6 = ( &Variant::needs_deinit )[local_58[0]];
               } else {
                  pOVar10 = (Object*)__dynamic_cast(lVar9, &Object::typeinfo, &Script::typeinfo, 0);
                  if (pOVar10 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 != '\0') {
                        if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }
                        cVar6 = ( **(code**)( *(long*)pOVar10 + 0x1e8 ) )(pOVar10);
                        if (cVar6 == '\0') {
                           plVar1 = *(long**)( lVar4 + 0x30 );
                           if (plVar1[1] == 0) {
                              plVar11 = (long*)plVar1[0x23];
                              if (plVar11 == (long*)0x0) {
                                 plVar11 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                              }
                           } else {
                              plVar11 = (long*)( plVar1[1] + 0x20 );
                           }
                           lVar9 = *plVar11;
                           if (lVar9 == 0) {
                              local_98 = 0;
                           } else {
                              pcVar13 = *(char**)( lVar9 + 8 );
                              local_98 = 0;
                              if (pcVar13 == (char*)0x0) {
                                 if (*(long*)( lVar9 + 0x10 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar9 + 0x10 ));
                                 }
                              } else {
                                 local_60 = strlen(pcVar13);
                                 local_68 = pcVar13;
                                 String::parse_latin1((StrRange*)&local_98);
                              }
                           }
                           local_c0 = (CowData<char32_t>*)&local_98;
                           pcVar13 = *(char**)( lVar4 + 0x38 );
                           sVar12 = 0;
                           local_90 = 0;
                           if (pcVar13 != (char*)0x0) {
                              sVar12 = strlen(pcVar13);
                           }
                           local_68 = pcVar13;
                           local_60 = sVar12;
                           String::parse_latin1((StrRange*)&local_90);
                           local_88 = 0;
                           local_68 = "append_array";
                           local_60 = 0xc;
                           String::parse_latin1((StrRange*)&local_88);
                           local_68 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                           local_80[0] = 0;
                           local_60 = 0x45;
                           String::parse_latin1((StrRange*)local_80);
                           vformat<String,String,String>((Variant_conflict*)&local_68, (StrRange*)local_80, (StrRange*)&local_88, (StrRange*)&local_90, local_c0);
                           _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (Variant_conflict*)&local_68, 0, 0);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                           CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                           CowData<char32_t>::_unref(local_c0);
                        }
                        cVar7 = RefCounted::unreference();
                        if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar10) ),cVar7 != '\0') {
                           ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                           Memory::free_static(pOVar10, false);
                        }
                        if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                           StringName::unref();
                        }
                        if (cVar6 == '\0') goto LAB_0010df1d;
                        goto LAB_0010e358;
                     }
                     goto LAB_0010e3ce;
                  }
                  cVar6 = ( &Variant::needs_deinit )[local_58[0]];
               }
               if (cVar6 != '\0') {
                  Variant::_clear_internal();
               }
               plVar1 = *(long**)( lVar4 + 0x30 );
               if (plVar1[1] == 0) {
                  plVar11 = (long*)plVar1[0x23];
                  if (plVar11 == (long*)0x0) {
                     plVar11 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                  }
               } else {
                  plVar11 = (long*)( plVar1[1] + 0x20 );
               }
               lVar19 = *plVar11;
               if (lVar19 == 0) {
                  local_98 = 0;
               } else {
                  pcVar13 = *(char**)( lVar19 + 8 );
                  local_98 = 0;
                  if (pcVar13 == (char*)0x0) {
                     if (*(long*)( lVar19 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar19 + 0x10 ));
                     }
                  } else {
                     local_60 = strlen(pcVar13);
                     local_68 = pcVar13;
                     String::parse_latin1((StrRange*)&local_98);
                  }
               }
               pcVar13 = *(char**)( lVar4 + 0x38 );
               sVar12 = 0;
               local_90 = 0;
               if (pcVar13 != (char*)0x0) {
                  sVar12 = strlen(pcVar13);
               }
               local_68 = pcVar13;
               local_60 = sVar12;
               String::parse_latin1((StrRange*)&local_90);
               local_68 = "append_array";
               local_88 = 0;
               local_60 = 0xc;
               String::parse_latin1((StrRange*)&local_88);
               local_68 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
               local_80[0] = 0;
               local_60 = 0x45;
               String::parse_latin1((StrRange*)local_80);
               vformat<String,String,String>((Variant_conflict*)&local_68, (StrRange*)local_80, (StrRange*)&local_88, (StrRange*)&local_90, &local_98);
               pcVar13 = "Condition \"other_script.is_null()\" is true. Returning: false";
               uVar14 = 0x91;
            } else {
               if (plVar1[1] == 0) {
                  pSVar18 = (StringName*)plVar1[0x23];
                  if (pSVar18 == (StringName*)0x0) {
                     pSVar18 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                  }
               } else {
                  pSVar18 = (StringName*)( plVar1[1] + 0x20 );
               }
               cVar6 = ClassDB::is_parent_class(pSVar18, (StringName*)( lVar4 + 0x28 ));
               if (cVar6 != '\0') goto LAB_0010e1be;
               lVar19 = *(long*)( lVar4 + 0x28 );
               if (lVar19 == 0) {
                  local_98 = 0;
               } else {
                  pcVar13 = *(char**)( lVar19 + 8 );
                  local_98 = 0;
                  if (pcVar13 == (char*)0x0) {
                     if (*(long*)( lVar19 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar19 + 0x10 ));
                     }
                  } else {
                     local_60 = strlen(pcVar13);
                     local_68 = pcVar13;
                     String::parse_latin1((StrRange*)&local_98);
                  }
               }
               uVar14 = *(undefined8*)( lVar4 + 0x38 );
               ( **(code**)( *plVar1 + 0x48 ) )(&local_90, plVar1);
               local_68 = "append_array";
               local_88 = 0;
               local_60 = 0xc;
               String::parse_latin1((StrRange*)&local_88);
               local_68 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
               local_80[0] = 0;
               local_60 = 0x53;
               String::parse_latin1((StrRange*)local_80);
               vformat<String,String,char_const*,String>((Variant_conflict*)&local_68, (StrRange*)local_80, (StrRange*)&local_88, &local_90, uVar14, &local_98);
               pcVar13 = "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false";
               uVar14 = 0x87;
            }
            local_c8 = (CowData<char32_t>*)&local_90;
            _err_print_error("validate_object", "core/variant/container_type_validate.h", uVar14, pcVar13, (Variant_conflict*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref(local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010df1d;
         }
         LAB_0010e358:lVar19 = lVar19 + 1;
         lVar9 = local_70;
      } while ( local_70 != 0 );
      LAB_0010df86:local_60 = 0;
      pVVar15 = (Vector<Variant>*)( *(long*)this + 8 );
   }
   LAB_0010e38d:Vector<Variant>::append_array(pVVar15, &local_68);
   CowData<Variant>::_unref((CowData<Variant>*)&local_60);
   CowData<Variant>::_unref((CowData<Variant>*)&local_70);
   LAB_0010df46:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::insert(int, Variant const&) */int Array::insert(Array *this, int param_1, Variant_conflict *param_2) {
   long *plVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   ulong uVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   ulong uVar9;
   ulong *puVar10;
   Object *pOVar11;
   long *plVar12;
   long lVar13;
   int *piVar14;
   uint uVar15;
   StringName *pSVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   long in_FS_OFFSET;
   bool bVar20;
   float fVar21;
   Variant_conflict *local_f0;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      _err_print_error("insert", "core/variant/array.cpp", 0x138, "Condition \"_p->read_only\" is true. Returning: ERR_LOCKED", "Array is in read-only state.", 0, 0);
      iVar8 = 0x17;
      goto LAB_0010ef77;
   }
   Variant::Variant((Variant_conflict*)local_78, param_2);
   lVar18 = *(long*)this;
   iVar8 = *(int*)( lVar18 + 0x20 );
   if (iVar8 == 0) {
      LAB_0010ee7d:local_f0 = (Variant_conflict*)local_58;
      lVar13 = (long)param_1;
      Variant::Variant(local_f0, (Variant_conflict*)local_78);
      if (*(long*)( lVar18 + 0x10 ) == 0) {
         lVar17 = 1;
         lVar19 = 0;
      } else {
         lVar19 = *(long*)( *(long*)( lVar18 + 0x10 ) + -8 );
         lVar17 = lVar19 + 1;
      }
      if (( lVar13 < 0 ) || ( lVar17 <= lVar13 )) {
         iVar8 = 0x1f;
         _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar13, lVar17, "p_pos", "new_size", "", false, false);
      } else {
         iVar8 = CowData<Variant>::resize<false>((CowData<Variant>*)( lVar18 + 0x10 ), lVar17);
         if (iVar8 == 0) {
            CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar18 + 0x10 ));
            lVar18 = *(long*)( lVar18 + 0x10 );
            if (lVar13 < lVar19) {
               piVar14 = (int*)( lVar18 + lVar19 * 0x18 );
               do {
                  if (( &Variant::needs_deinit )[*piVar14] != '\0') {
                     Variant::_clear_internal();
                  }
                  iVar2 = piVar14[-6];
                  lVar19 = lVar19 + -1;
                  piVar14[-6] = 0;
                  *piVar14 = iVar2;
                  *(undefined8*)( piVar14 + 2 ) = *(undefined8*)( piVar14 + -4 );
                  *(undefined8*)( piVar14 + 4 ) = *(undefined8*)( piVar14 + -2 );
                  piVar14 = piVar14 + -6;
               } while ( lVar13 != lVar19 );
            }
            Variant::operator =((Variant_conflict*)( lVar18 + lVar13 * 0x18 ), local_f0);
         } else {
            _err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
         }
      }
      if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
   } else {
      if (iVar8 == local_78[0]) {
         if (iVar8 != 0x18) goto LAB_0010ee7d;
         uVar9 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar9 == 0) {
            LAB_0010f240:lVar18 = *(long*)this;
            goto LAB_0010ee7d;
         }
         uVar15 = (uint)uVar9 & 0xffffff;
         if (uVar15 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar5 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar5 << 8 );
               LOCK();
               bVar20 = (char)ObjectDB::spin_lock == '\0';
               if (bVar20) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar20) break;
               local_88 = (char*)( uVar5 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar10 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
            if (( uVar9 >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
               plVar1 = (long*)puVar10[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar18 + 0x28 ) == 0) {
                     LAB_0010f5ab:lVar18 = *(long*)this;
                     goto LAB_0010ee7d;
                  }
                  if (plVar1[1] == 0) {
                     pSVar16 = (StringName*)plVar1[0x23];
                     if (pSVar16 == (StringName*)0x0) {
                        pSVar16 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar16 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar16);
                  if (local_b0 == *(long*)( lVar18 + 0x28 )) {
                     LAB_0010f0d4:if (*(long*)( lVar18 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                           goto LAB_0010f240;
                        }
                        goto LAB_0010f5ab;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar13 = Variant::get_validated_object();
                     if (lVar13 == 0) {
                        LAB_0010f5d4:cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar11 = (Object*)__dynamic_cast(lVar13, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar11 != (Object*)0x0) {
                           cVar6 = RefCounted::reference();
                           if (cVar6 != '\0') {
                              if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }
                              cVar6 = ( **(code**)( *(long*)pOVar11 + 0x1e8 ) )();
                              if (cVar6 == '\0') {
                                 plVar1 = *(long**)( lVar18 + 0x30 );
                                 if (plVar1[1] == 0) {
                                    plVar12 = (long*)plVar1[0x23];
                                    if (plVar12 == (long*)0x0) {
                                       plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                    }
                                 } else {
                                    plVar12 = (long*)( plVar1[1] + 0x20 );
                                 }
                                 lVar13 = *plVar12;
                                 if (lVar13 == 0) {
                                    LAB_0010fac2:local_a8 = 0;
                                 } else {
                                    local_a8 = 0;
                                    if (*(char**)( lVar13 + 8 ) == (char*)0x0) {
                                       if (*(long*)( lVar13 + 0x10 ) == 0) goto LAB_0010fac2;
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar13 + 0x10 ));
                                    } else {
                                       String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar13 + 8 ));
                                    }
                                 }
                                 local_a0 = 0;
                                 String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar18 + 0x38 ));
                                 local_98 = 0;
                                 local_88 = "insert";
                                 local_80 = 6;
                                 String::parse_latin1((StrRange*)&local_98);
                                 local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                                 local_90 = 0;
                                 local_80 = 0x45;
                                 String::parse_latin1((StrRange*)&local_90);
                                 vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, (CowData<char32_t>*)&local_a8);
                                 _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                              }
                              cVar7 = RefCounted::unreference();
                              if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar11) ),cVar7 != '\0') {
                                 ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                                 Memory::free_static(pOVar11, false);
                              }
                              if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                                 StringName::unref();
                              }
                              if (cVar6 == '\0') goto LAB_0010ee2a;
                              goto LAB_0010f240;
                           }
                           goto LAB_0010f5d4;
                        }
                        cVar6 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar6 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar18 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar12 = (long*)plVar1[0x23];
                        if (plVar12 == (long*)0x0) {
                           plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar12 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar13 = *plVar12;
                     if (lVar13 == 0) {
                        LAB_0010fb40:local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar13 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar13 + 0x10 ) == 0) goto LAB_0010fb40;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar13 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar13 + 8 ));
                        }
                     }
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar18 + 0x38 ));
                     local_98 = 0;
                     local_88 = "insert";
                     local_80 = 6;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, (CowData<char32_t>*)&local_a8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar16 = (StringName*)plVar1[0x23];
                        if (pSVar16 == (StringName*)0x0) {
                           pSVar16 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar16 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar6 = ClassDB::is_parent_class(pSVar16, (StringName*)( lVar18 + 0x28 ));
                     if (cVar6 != '\0') goto LAB_0010f0d4;
                     lVar13 = *(long*)( lVar18 + 0x28 );
                     if (lVar13 == 0) {
                        LAB_0010faf6:local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar13 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar13 + 0x10 ) == 0) goto LAB_0010faf6;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar13 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar13 + 8 ));
                        }
                     }
                     uVar3 = *(undefined8*)( lVar18 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "insert";
                     local_98 = 0;
                     local_80 = 6;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar3, (CowData<char32_t>*)&local_a8);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_0010ee2a;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar4 = *(char**)( lVar18 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar4 != (char*)0x0) {
            local_80 = strlen(pcVar4);
         }
         local_88 = pcVar4;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "insert";
         local_98 = 0;
         local_80 = 6;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar8 == 0x18) goto LAB_0010ee7d;
         } else if (iVar8 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar18 = *(long*)this;
               goto LAB_0010ee7d;
            }
         } else if (iVar8 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_0010f240;
            }
         } else if (( iVar8 == 3 ) && ( local_78[0] == 2 )) {
            fVar21 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar21);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar18 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_0010ee7d;
         }
         Variant::get_type_name(&local_90);
         uVar3 = *(undefined8*)( lVar18 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "insert";
         local_a0 = 0;
         local_80 = 6;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar3, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
         lVar18 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }
         }
         lVar18 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }
         }
         lVar18 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }
         }
         lVar18 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }
         }
      }
      LAB_0010ee2a:iVar8 = 0x1f;
      _err_print_error("insert", "core/variant/array.cpp", 0x13a, "Condition \"!_p->typed.validate(value, \"insert\")\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
   if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   LAB_0010ef77:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar8;
}/* Array::push_front(Variant const&) */void Array::push_front(Array *this, Variant_conflict *param_1) {
   long *plVar1;
   CowData<Variant> *this_00;
   undefined8 uVar2;
   char *pcVar3;
   ulong uVar4;
   char cVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   ulong *puVar9;
   long lVar10;
   Object *pOVar11;
   long *plVar12;
   long lVar13;
   Variant_conflict *this_01;
   uint uVar14;
   StringName *pSVar15;
   long lVar16;
   Variant_conflict *pVVar17;
   long in_FS_OFFSET;
   bool bVar18;
   float fVar19;
   Variant_conflict *local_e8;
   CowData<char32_t> *local_e0;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)this + 0x18 ) != 0) {
      _err_print_error("push_front", "core/variant/array.cpp", 0x2e0, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
      goto LAB_0010febb;
   }
   Variant::Variant((Variant_conflict*)local_78, param_1);
   lVar13 = *(long*)this;
   iVar7 = *(int*)( lVar13 + 0x20 );
   if (iVar7 == 0) {
      LAB_0010fdfc:local_e8 = (Variant_conflict*)local_58;
      this_00 = (CowData<Variant>*)( lVar13 + 0x10 );
      Variant::Variant(local_e8, (Variant_conflict*)local_78);
      if (*(long*)( lVar13 + 0x10 ) == 0) {
         iVar7 = CowData<Variant>::resize<false>(this_00, 1);
         if (iVar7 == 0) {
            CowData<Variant>::_copy_on_write(this_00);
            this_01 = *(Variant_conflict**)( lVar13 + 0x10 );
            goto LAB_0010fe8a;
         }
         LAB_001103a8:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
      } else {
         lVar16 = *(long*)( *(long*)( lVar13 + 0x10 ) + -8 );
         lVar10 = lVar16 + 1;
         if (lVar10 < 1) {
            _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, 0, lVar10, "p_pos", "new_size", "", false, false);
         } else {
            iVar7 = CowData<Variant>::resize<false>(this_00, lVar10);
            if (iVar7 != 0) goto LAB_001103a8;
            CowData<Variant>::_copy_on_write(this_00);
            this_01 = *(Variant_conflict**)( lVar13 + 0x10 );
            if (lVar16 != 0) {
               pVVar17 = this_01 + lVar16 * 0x18;
               do {
                  if (( &Variant::needs_deinit )[*(int*)pVVar17] != '\0') {
                     Variant::_clear_internal();
                  }
                  iVar7 = *(int*)( pVVar17 + -0x18 );
                  *(int*)( pVVar17 + -0x18 ) = 0;
                  *(int*)pVVar17 = iVar7;
                  *(undefined8*)( pVVar17 + 8 ) = *(undefined8*)( pVVar17 + -0x10 );
                  *(undefined8*)( pVVar17 + 0x10 ) = *(undefined8*)( pVVar17 + -8 );
                  lVar16 = lVar16 + -1;
                  pVVar17 = pVVar17 + -0x18;
               } while ( lVar16 != 0 );
            }
            LAB_0010fe8a:Variant::operator =(this_01, local_e8);
         }
      }
      if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      cVar5 = ( &Variant::needs_deinit )[local_78[0]];
   } else {
      if (iVar7 == local_78[0]) {
         if (iVar7 != 0x18) goto LAB_0010fdfc;
         uVar8 = Variant::operator_cast_to_ObjectID((Variant_conflict*)local_78);
         if (uVar8 == 0) {
            LAB_00110171:lVar13 = *(long*)this;
            goto LAB_0010fdfc;
         }
         uVar14 = (uint)uVar8 & 0xffffff;
         if (uVar14 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar4 = (ulong)local_88 >> 8;
               local_88 = (char*)( uVar4 << 8 );
               LOCK();
               bVar18 = (char)ObjectDB::spin_lock == '\0';
               if (bVar18) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }
               UNLOCK();
               if (bVar18) break;
               local_88 = (char*)( uVar4 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            };
            puVar9 = (ulong*)( (ulong)uVar14 * 0x10 + ObjectDB::object_slots );
            if (( uVar8 >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
               plVar1 = (long*)puVar9[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (plVar1 != (long*)0x0) {
                  if (*(long*)( lVar13 + 0x28 ) == 0) {
                     LAB_001104bb:lVar13 = *(long*)this;
                     goto LAB_0010fdfc;
                  }
                  if (plVar1[1] == 0) {
                     pSVar15 = (StringName*)plVar1[0x23];
                     if (pSVar15 == (StringName*)0x0) {
                        pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar15 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_b0, pSVar15);
                  if (local_b0 == *(long*)( lVar13 + 0x28 )) {
                     LAB_0011000c:if (*(long*)( lVar13 + 0x30 ) == 0) {
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                           goto LAB_00110171;
                        }
                        goto LAB_001104bb;
                     }
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar10 = Variant::get_validated_object();
                     if (lVar10 == 0) {
                        LAB_001104e4:cVar5 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar11 = (Object*)__dynamic_cast(lVar10, &Object::typeinfo, &Script::typeinfo);
                        if (pOVar11 != (Object*)0x0) {
                           cVar5 = RefCounted::reference();
                           if (cVar5 != '\0') {
                              if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }
                              cVar5 = ( **(code**)( *(long*)pOVar11 + 0x1e8 ) )(pOVar11);
                              if (cVar5 == '\0') {
                                 plVar1 = *(long**)( lVar13 + 0x30 );
                                 if (plVar1[1] == 0) {
                                    plVar12 = (long*)plVar1[0x23];
                                    if (plVar12 == (long*)0x0) {
                                       plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                    }
                                 } else {
                                    plVar12 = (long*)( plVar1[1] + 0x20 );
                                 }
                                 lVar10 = *plVar12;
                                 if (lVar10 == 0) {
                                    LAB_001109e3:local_a8 = 0;
                                 } else {
                                    local_a8 = 0;
                                    if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                                       if (*(long*)( lVar10 + 0x10 ) == 0) goto LAB_001109e3;
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                                    } else {
                                       String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                                    }
                                 }
                                 local_e0 = (CowData<char32_t>*)&local_a8;
                                 local_a0 = 0;
                                 String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar13 + 0x38 ));
                                 local_98 = 0;
                                 local_88 = "push_front";
                                 local_80 = 10;
                                 String::parse_latin1((StrRange*)&local_98);
                                 local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                                 local_90 = 0;
                                 local_80 = 0x45;
                                 String::parse_latin1((StrRange*)&local_90);
                                 vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                                 _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                                 CowData<char32_t>::_unref(local_e0);
                              }
                              cVar6 = RefCounted::unreference();
                              if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar11) ),cVar6 != '\0') {
                                 ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                                 Memory::free_static(pOVar11, false);
                              }
                              if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                                 StringName::unref();
                              }
                              if (cVar5 == '\0') goto LAB_0010fd98;
                              goto LAB_00110171;
                           }
                           goto LAB_001104e4;
                        }
                        cVar5 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar5 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar13 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar12 = (long*)plVar1[0x23];
                        if (plVar12 == (long*)0x0) {
                           plVar12 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar12 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar10 = *plVar12;
                     if (lVar10 == 0) {
                        LAB_00110a75:local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar10 + 0x10 ) == 0) goto LAB_00110a75;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                        }
                     }
                     local_e0 = (CowData<char32_t>*)&local_a8;
                     local_a0 = 0;
                     String::parse_latin1((String_conflict*)&local_a0, *(char**)( lVar13 + 0x38 ));
                     local_88 = "push_front";
                     local_98 = 0;
                     local_80 = 10;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x45;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (String_conflict*)&local_a0, local_e0);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x91, "Condition \"other_script.is_null()\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e0);
                  } else {
                     if (plVar1[1] == 0) {
                        pSVar15 = (StringName*)plVar1[0x23];
                        if (pSVar15 == (StringName*)0x0) {
                           pSVar15 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar15 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar5 = ClassDB::is_parent_class(pSVar15, (StringName*)( lVar13 + 0x28 ));
                     if (cVar5 != '\0') goto LAB_0011000c;
                     lVar10 = *(long*)( lVar13 + 0x28 );
                     if (lVar10 == 0) {
                        LAB_00110a21:local_a8 = 0;
                     } else {
                        local_a8 = 0;
                        if (*(char**)( lVar10 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar10 + 0x10 ) == 0) goto LAB_00110a21;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( lVar10 + 0x10 ));
                        } else {
                           String::parse_latin1((String_conflict*)&local_a8, *(char**)( lVar10 + 8 ));
                        }
                     }
                     local_e0 = (CowData<char32_t>*)&local_a8;
                     uVar2 = *(undefined8*)( lVar13 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )((CowData<char32_t>*)&local_a0, plVar1);
                     local_88 = "push_front";
                     local_98 = 0;
                     local_80 = 10;
                     String::parse_latin1((StrRange*)&local_98);
                     local_88 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_90 = 0;
                     local_80 = 0x53;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (CowData<char32_t>*)&local_a0, uVar2, local_e0);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x87, "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false", (CowData<char32_t>*)&local_88, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_e0);
                  }
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }
                  goto LAB_0010fd98;
               }
            } else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }
         } else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }
         pcVar3 = *(char**)( lVar13 + 0x38 );
         local_80 = 0;
         local_a0 = 0;
         if (pcVar3 != (char*)0x0) {
            local_80 = strlen(pcVar3);
         }
         local_88 = pcVar3;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "push_front";
         local_98 = 0;
         local_80 = 10;
         String::parse_latin1((StrRange*)&local_98);
         local_88 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
         local_90 = 0;
         local_80 = 0x4b;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String,String>((CowData<char32_t>*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98, (StrRange*)&local_a0);
         _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", (CowData<char32_t>*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      } else {
         if (local_78[0] == 0) {
            if (iVar7 == 0x18) goto LAB_0010fdfc;
         } else if (iVar7 == 4) {
            if (local_78[0] == 0x15) {
               Variant::operator_cast_to_String((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (String_conflict*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               lVar13 = *(long*)this;
               goto LAB_0010fdfc;
            }
         } else if (iVar7 == 0x15) {
            if (local_78[0] == 4) {
               Variant::operator_cast_to_StringName((Variant_conflict*)&local_88);
               Variant::Variant((Variant_conflict*)local_58, (StringName*)&local_88);
               if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               local_78[0] = local_58[0];
               local_70 = local_50;
               uStack_68 = uStack_48;
               if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                  StringName::unref();
               }
               goto LAB_00110171;
            }
         } else if (( iVar7 == 3 ) && ( local_78[0] == 2 )) {
            fVar19 = Variant::operator_cast_to_float((Variant_conflict*)local_78);
            Variant::Variant((Variant_conflict*)local_58, fVar19);
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            lVar13 = *(long*)this;
            local_70 = local_50;
            uStack_68 = uStack_48;
            goto LAB_0010fdfc;
         }
         Variant::get_type_name(&local_90);
         uVar2 = *(undefined8*)( lVar13 + 0x38 );
         Variant::get_type_name(&local_98, local_78[0]);
         local_88 = "push_front";
         local_a0 = 0;
         local_80 = 10;
         String::parse_latin1((StrRange*)&local_a0);
         local_88 = "Attempted to %s a variable of type \'%s\' into a %s of type \'%s\'.";
         local_a8 = 0;
         local_80 = 0x3f;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String,String,char_const*,String>(&local_88, (StrRange*)&local_a8, (StrRange*)&local_a0, &local_98, uVar2, &local_90);
         _err_print_error("validate", "core/variant/container_type_validate.h", 0x67, "Method/function failed. Returning: false", &local_88, 0, 0);
         pcVar3 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar13 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
         lVar13 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
         lVar13 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
         lVar13 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
      }
      LAB_0010fd98:_err_print_error("push_front", "core/variant/array.cpp", 0x2e2, "Condition \"!_p->typed.validate(value, \"push_front\")\" is true.", 0, 0);
      cVar5 = ( &Variant::needs_deinit )[local_78[0]];
   }
   if (cVar5 != '\0') {
      Variant::_clear_internal();
   }
   LAB_0010febb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Array::assign(Array const&) */void Array::assign(Array *this, Array *param_1) {
   long *plVar1;
   ulong uVar2;
   Variant_conflict *pVVar3;
   char cVar4;
   char cVar5;
   long lVar6;
   Object *pOVar7;
   ulong uVar8;
   long *plVar9;
   size_t sVar10;
   uint uVar11;
   long lVar12;
   long lVar13;
   ulong *puVar14;
   char *pcVar15;
   undefined8 uVar16;
   int iVar17;
   Variant_conflict *pVVar18;
   StringName *pSVar19;
   CowData<char32_t> *this_00;
   int iVar20;
   CowData<char32_t> *this_01;
   Variant_conflict *this_02;
   StrRange *this_03;
   long in_FS_OFFSET;
   bool bVar21;
   CowData<char32_t> *local_f0;
   CowData<char32_t> *local_d8;
   Variant_conflict *local_a8;
   long local_a0;
   long local_98;
   long local_90;
   int local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   long local_78;
   Variant_conflict *local_70;
   char *local_68;
   size_t local_60;
   int local_58[6];
   long local_40;
   lVar13 = *(long*)this;
   lVar6 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar20 = *(int*)( lVar13 + 0x20 );
   iVar17 = *(int*)( lVar6 + 0x20 );
   if (( ( ( iVar17 == iVar20 ) && ( *(long*)( lVar6 + 0x28 ) == *(long*)( lVar13 + 0x28 ) ) ) && ( *(long*)( lVar13 + 0x30 ) == *(long*)( lVar6 + 0x30 ) ) ) || ( iVar20 == 0 )) {
      LAB_00110ec8:if (*(long*)( lVar13 + 0x10 ) != *(long*)( lVar6 + 0x10 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_00110ef5:CowData<Variant>::_ref((CowData<Variant>*)( lVar13 + 0x10 ), (CowData*)( lVar6 + 0x10 ));
            return;
         }
         goto LAB_00111f3f;
      }
   } else {
      lVar12 = lVar6;
      if (( iVar20 == 0x18 ) && ( iVar17 == 0x18 )) {
         if (*(long*)( lVar13 + 0x28 ) != 0) {
            if (*(long*)( lVar6 + 0x28 ) == 0) {
               this_02 = *(Variant_conflict**)( lVar6 + 0x10 );
               if (this_02 != (Variant_conflict*)0x0) {
                  local_f0._0_4_ = *(int*)( this_02 + -8 );
                  goto LAB_00110f3e;
               }
               goto LAB_00111980;
            }
            if (( ( *(long*)( lVar13 + 0x28 ) != *(long*)( lVar6 + 0x28 ) ) && ( cVar4 = ClassDB::is_parent_class((StringName*)( lVar6 + 0x28 ), (StringName*)( lVar13 + 0x28 )) ),cVar4 == '\0' )) {
               iVar17 = *(int*)( lVar6 + 0x20 );
               iVar20 = *(int*)( lVar13 + 0x20 );
               lVar12 = *(long*)param_1;
               goto LAB_00110b02;
            }
            lVar6 = *(long*)param_1;
            lVar13 = *(long*)this;
         }
         goto LAB_00110ec8;
      }
      LAB_00110b02:this_02 = *(Variant_conflict**)( lVar12 + 0x10 );
      if (this_02 == (Variant_conflict*)0x0) {
         local_f0._0_4_ = 0;
      } else {
         local_f0._0_4_ = *(int*)( this_02 + -8 );
      }
      if (iVar17 == 0) {
         if (iVar20 == 0x18) {
            LAB_00110f3e:iVar20 = 0;
            if ((int)local_f0 < 1) {
               lVar13 = *(long*)this;
               lVar6 = *(long*)param_1;
            } else {
               do {
                  if (*(int*)this_02 == 0) goto LAB_00111100;
                  if (*(int*)this_02 != 0x18) {
                     LAB_00111853:local_f0 = (CowData<char32_t>*)&local_78;
                     Variant::get_type_name(&local_88, *(undefined4*)( lVar13 + 0x20 ));
                     Variant::get_type_name(&local_90, *(undefined4*)this_02);
                     local_68 = "Unable to convert array index %d from \"%s\" to \"%s\".";
                     local_78 = 0;
                     local_60 = 0x33;
                     String::parse_latin1((StrRange*)local_f0);
                     vformat<int,String,String>(&local_68, local_f0, iVar20, &local_90, &local_88);
                     uVar16 = 0xec;
                     goto LAB_00110d69;
                  }
                  uVar8 = Variant::operator_cast_to_ObjectID(this_02);
                  if (uVar8 == 0) goto LAB_00111100;
                  uVar11 = (uint)uVar8 & 0xffffff;
                  if ((uint)ObjectDB::slot_max <= uVar11) {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     LAB_001116ed:pcVar15 = *(char**)( lVar13 + 0x38 );
                     sVar10 = 0;
                     local_78 = 0;
                     if (pcVar15 != (char*)0x0) {
                        sVar10 = strlen(pcVar15);
                     }
                     local_68 = pcVar15;
                     local_60 = sVar10;
                     String::parse_latin1((StrRange*)&local_78);
                     local_68 = "assign";
                     local_88 = 0;
                     uStack_84 = 0;
                     local_60 = 6;
                     String::parse_latin1((StrRange*)&local_88);
                     local_68 = "Attempted to %s an invalid (previously freed?) object instance into a \'%s\'.";
                     local_90 = 0;
                     local_60 = 0x4b;
                     String::parse_latin1((StrRange*)&local_90);
                     vformat<String,String>(&local_68, (StrRange*)&local_90, (StrRange*)&local_88, (StrRange*)&local_78);
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x7a, "Parameter \"object\" is null.", &local_68, 0, 0);
                     pcVar15 = local_68;
                     if (local_68 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_68 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_68 = (char*)0x0;
                           Memory::free_static(pcVar15 + -0x10, false);
                        }
                     }
                     lVar6 = local_90;
                     if (local_90 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_90 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_90 = 0;
                           Memory::free_static((void*)( lVar6 + -0x10 ), false);
                        }
                     }
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     goto LAB_00111853;
                  }
                  while (true) {
                     uVar2 = (ulong)local_68 >> 8;
                     local_68 = (char*)( uVar2 << 8 );
                     LOCK();
                     bVar21 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar21) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }
                     UNLOCK();
                     if (bVar21) break;
                     local_68 = (char*)( uVar2 << 8 );
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  };
                  puVar14 = (ulong*)( (ulong)uVar11 * 0x10 + ObjectDB::object_slots );
                  if (( uVar8 >> 0x18 & 0x7fffffffff ) != ( *puVar14 & 0x7fffffffff )) {
                     ObjectDB::spin_lock._0_1_ = '\0';
                     goto LAB_001116ed;
                  }
                  plVar1 = (long*)puVar14[1];
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (plVar1 == (long*)0x0) goto LAB_001116ed;
                  if (*(long*)( lVar13 + 0x28 ) == 0) goto LAB_00111100;
                  if (plVar1[1] == 0) {
                     pSVar19 = (StringName*)plVar1[0x23];
                     if (pSVar19 == (StringName*)0x0) {
                        pSVar19 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                     }
                  } else {
                     pSVar19 = (StringName*)( plVar1[1] + 0x20 );
                  }
                  StringName::StringName((StringName*)&local_a0, pSVar19);
                  if (local_a0 != *(long*)( lVar13 + 0x28 )) {
                     if (plVar1[1] == 0) {
                        pSVar19 = (StringName*)plVar1[0x23];
                        if (pSVar19 == (StringName*)0x0) {
                           pSVar19 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
                        }
                     } else {
                        pSVar19 = (StringName*)( plVar1[1] + 0x20 );
                     }
                     cVar4 = ClassDB::is_parent_class(pSVar19, (StringName*)( lVar13 + 0x28 ));
                     if (cVar4 != '\0') goto LAB_0011101b;
                     lVar6 = *(long*)( lVar13 + 0x28 );
                     if (lVar6 == 0) {
                        local_78 = 0;
                     } else {
                        pcVar15 = *(char**)( lVar6 + 8 );
                        local_78 = 0;
                        if (pcVar15 == (char*)0x0) {
                           if (*(long*)( lVar6 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar6 + 0x10 ));
                           }
                        } else {
                           local_60 = strlen(pcVar15);
                           local_68 = pcVar15;
                           String::parse_latin1((StrRange*)&local_78);
                        }
                     }
                     local_f0 = (CowData<char32_t>*)&local_78;
                     uVar16 = *(undefined8*)( lVar13 + 0x38 );
                     ( **(code**)( *plVar1 + 0x48 ) )(&local_88, plVar1);
                     local_68 = "assign";
                     local_90 = 0;
                     local_60 = 6;
                     String::parse_latin1((StrRange*)&local_90);
                     local_98 = 0;
                     local_68 = "Attempted to %s an object of type \'%s\' into a %s, which does not inherit from \'%s\'.";
                     local_60 = 0x53;
                     String::parse_latin1((StrRange*)&local_98);
                     vformat<String,String,char_const*,String>((CowData<char32_t>*)&local_68, (StrRange*)&local_98, (StrRange*)&local_90, &local_88, uVar16, local_f0);
                     pcVar15 = "Condition \"!ClassDB::is_parent_class(object->get_class_name(), class_name)\" is true. Returning: false";
                     uVar16 = 0x87;
                     LAB_00111530:local_f0 = (CowData<char32_t>*)&local_78;
                     local_d8 = (CowData<char32_t>*)&local_98;
                     _err_print_error("validate_object", "core/variant/container_type_validate.h", uVar16, pcVar15, (CowData<char32_t>*)&local_68, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref(local_d8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref(local_f0);
                     if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                        StringName::unref();
                     }
                     goto LAB_00111853;
                  }
                  LAB_0011101b:if (*(long*)( lVar13 + 0x30 ) != 0) {
                     ( **(code**)( *plVar1 + 0x98 ) )(local_58, plVar1);
                     lVar6 = Variant::get_validated_object();
                     if (lVar6 == 0) {
                        LAB_001113cf:cVar4 = ( &Variant::needs_deinit )[local_58[0]];
                     } else {
                        pOVar7 = (Object*)__dynamic_cast(lVar6, &Object::typeinfo, &Script::typeinfo, 0);
                        if (pOVar7 != (Object*)0x0) {
                           cVar4 = RefCounted::reference();
                           if (cVar4 != '\0') {
                              if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }
                              cVar4 = ( **(code**)( *(long*)pOVar7 + 0x1e8 ) )();
                              if (cVar4 == '\0') {
                                 plVar1 = *(long**)( lVar13 + 0x30 );
                                 if (plVar1[1] == 0) {
                                    plVar9 = (long*)plVar1[0x23];
                                    if (plVar9 == (long*)0x0) {
                                       plVar9 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                                    }
                                 } else {
                                    plVar9 = (long*)( plVar1[1] + 0x20 );
                                 }
                                 lVar6 = *plVar9;
                                 if (lVar6 == 0) {
                                    local_78 = 0;
                                 } else {
                                    pcVar15 = *(char**)( lVar6 + 8 );
                                    local_78 = 0;
                                    if (pcVar15 == (char*)0x0) {
                                       if (*(long*)( lVar6 + 0x10 ) != 0) {
                                          CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar6 + 0x10 ));
                                       }
                                    } else {
                                       local_60 = strlen(pcVar15);
                                       local_68 = pcVar15;
                                       String::parse_latin1((StrRange*)&local_78);
                                    }
                                 }
                                 local_d8 = (CowData<char32_t>*)&local_78;
                                 pcVar15 = *(char**)( lVar13 + 0x38 );
                                 sVar10 = 0;
                                 local_88 = 0;
                                 uStack_84 = 0;
                                 if (pcVar15 != (char*)0x0) {
                                    sVar10 = strlen(pcVar15);
                                 }
                                 local_68 = pcVar15;
                                 local_60 = sVar10;
                                 String::parse_latin1((StrRange*)&local_88);
                                 local_90 = 0;
                                 local_68 = "assign";
                                 local_60 = 6;
                                 String::parse_latin1((StrRange*)&local_90);
                                 local_98 = 0;
                                 local_68 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                                 local_60 = 0x45;
                                 String::parse_latin1((StrRange*)&local_98);
                                 vformat<String,String,String>((CowData<char32_t>*)&local_68, (StrRange*)&local_98, (StrRange*)&local_90, (StrRange*)&local_88, local_d8);
                                 _err_print_error("validate_object", "core/variant/container_type_validate.h", 0x92, "Condition \"!other_script->inherits_script(script)\" is true. Returning: false", (CowData<char32_t>*)&local_68, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref(local_d8);
                              }
                              cVar5 = RefCounted::unreference();
                              if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar7) ),cVar5 != '\0') {
                                 ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                                 Memory::free_static(pOVar7, false);
                              }
                              if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                                 StringName::unref();
                              }
                              if (cVar4 == '\0') goto LAB_00111853;
                              goto LAB_00111100;
                           }
                           goto LAB_001113cf;
                        }
                        cVar4 = ( &Variant::needs_deinit )[local_58[0]];
                     }
                     if (cVar4 != '\0') {
                        Variant::_clear_internal();
                     }
                     plVar1 = *(long**)( lVar13 + 0x30 );
                     if (plVar1[1] == 0) {
                        plVar9 = (long*)plVar1[0x23];
                        if (plVar9 == (long*)0x0) {
                           plVar9 = (long*)( **(code**)( *plVar1 + 0x40 ) )();
                        }
                     } else {
                        plVar9 = (long*)( plVar1[1] + 0x20 );
                     }
                     lVar6 = *plVar9;
                     if (lVar6 == 0) {
                        local_78 = 0;
                     } else {
                        pcVar15 = *(char**)( lVar6 + 8 );
                        local_78 = 0;
                        if (pcVar15 == (char*)0x0) {
                           if (*(long*)( lVar6 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar6 + 0x10 ));
                           }
                        } else {
                           local_60 = strlen(pcVar15);
                           local_68 = pcVar15;
                           String::parse_latin1((StrRange*)&local_78);
                        }
                     }
                     local_f0 = (CowData<char32_t>*)&local_78;
                     pcVar15 = *(char**)( lVar13 + 0x38 );
                     sVar10 = 0;
                     local_88 = 0;
                     uStack_84 = 0;
                     if (pcVar15 != (char*)0x0) {
                        sVar10 = strlen(pcVar15);
                     }
                     local_68 = pcVar15;
                     local_60 = sVar10;
                     String::parse_latin1((StrRange*)&local_88);
                     local_68 = "assign";
                     local_90 = 0;
                     local_60 = 6;
                     String::parse_latin1((StrRange*)&local_90);
                     local_98 = 0;
                     local_68 = "Attempted to %s an object into a %s, that does not inherit from \'%s\'.";
                     local_60 = 0x45;
                     String::parse_latin1((StrRange*)&local_98);
                     vformat<String,String,String>((CowData<char32_t>*)&local_68, (StrRange*)&local_98, (StrRange*)&local_90, (StrRange*)&local_88, local_f0);
                     pcVar15 = "Condition \"other_script.is_null()\" is true. Returning: false";
                     uVar16 = 0x91;
                     goto LAB_00111530;
                  }
                  if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                     StringName::unref();
                  }
                  LAB_00111100:iVar20 = iVar20 + 1;
                  this_02 = this_02 + 0x18;
               } while ( iVar20 != (int)local_f0 );
               lVar13 = *(long*)this;
               lVar6 = *(long*)param_1;
            }
            LAB_00111980:if (*(long*)( lVar13 + 0x10 ) != *(long*)( lVar6 + 0x10 )) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00110ef5;
               goto LAB_00111f3f;
            }
         } else {
            LAB_00110b28:local_70 = (Variant_conflict*)0x0;
            CowData<Variant>::resize<false>((CowData<Variant>*)&local_70, (long)(int)local_f0);
            CowData<Variant>::_copy_on_write((CowData<Variant>*)&local_70);
            pVVar3 = local_70;
            iVar20 = *(int*)( lVar13 + 0x20 );
            if (( *(int*)( lVar6 + 0x20 ) == 0 ) && ( iVar20 != 0x18 )) {
               if (0 < (int)local_f0) {
                  iVar17 = 0;
                  pVVar18 = local_70;
                  do {
                     local_a8 = this_02;
                     if (*(int*)this_02 != iVar20) {
                        cVar4 = Variant::can_convert_strict();
                        if (cVar4 == '\0') {
                           this_00 = (CowData<char32_t>*)&local_90;
                           this_01 = (CowData<char32_t>*)&local_98;
                           this_03 = (StrRange*)&local_88;
                           Variant::get_type_name(this_00, *(undefined4*)( lVar13 + 0x20 ));
                           Variant::get_type_name(this_01, *(undefined4*)local_a8);
                           local_68 = "Unable to convert array index %d from \"%s\" to \"%s\".";
                           local_88 = 0;
                           uStack_84 = 0;
                           local_60 = 0x33;
                           String::parse_latin1(this_03);
                           vformat<int,String,String>(&local_68, this_03, iVar17, this_01, this_00);
                           pcVar15 = "Method/function failed.";
                           uVar16 = 0x103;
                        } else {
                           local_88 = 0;
                           uStack_84 = 0;
                           uStack_80 = 0;
                           Variant::construct(*(undefined4*)( lVar13 + 0x20 ), pVVar18, &local_a8, 1, &local_88);
                           if (local_88 == 0) goto LAB_00110bed;
                           this_00 = (CowData<char32_t>*)&local_98;
                           this_01 = (CowData<char32_t>*)&local_a0;
                           this_03 = (StrRange*)&local_90;
                           Variant::get_type_name(this_00, *(undefined4*)( lVar13 + 0x20 ));
                           Variant::get_type_name(this_01, *(undefined4*)local_a8);
                           local_68 = "Unable to convert array index %d from \"%s\" to \"%s\".";
                           local_90 = 0;
                           local_60 = 0x33;
                           String::parse_latin1(this_03);
                           vformat<int,String,String>(&local_68, this_03, iVar17, this_01, this_00);
                           pcVar15 = "Condition \"ce.error\" is true.";
                           uVar16 = 0x107;
                        }
                        _err_print_error("assign", "core/variant/array.cpp", uVar16, pcVar15, (CowData<char32_t>*)&local_68, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)this_03);
                        CowData<char32_t>::_unref(this_01);
                        CowData<char32_t>::_unref(this_00);
                        goto LAB_0011136d;
                     }
                     Variant::operator =(pVVar18, this_02);
                     LAB_00110bed:iVar17 = iVar17 + 1;
                     this_02 = this_02 + 0x18;
                     pVVar18 = pVVar18 + 0x18;
                     if (iVar17 == (int)local_f0) break;
                     iVar20 = *(int*)( lVar13 + 0x20 );
                  } while ( true );
               }
               LAB_001115d3:if (pVVar3 != *(Variant_conflict**)( *(long*)this + 0x10 )) {
                  CowData<Variant>::_ref((CowData<Variant>*)( *(long*)this + 0x10 ), (CowData*)&local_70);
               }
            } else {
               cVar4 = Variant::can_convert_strict();
               if (cVar4 != '\0') {
                  if (0 < (int)local_f0) {
                     iVar20 = 0;
                     pVVar18 = pVVar3;
                     do {
                        local_88 = 0;
                        uStack_84 = 0;
                        uStack_80 = 0;
                        local_a8 = this_02;
                        Variant::construct(*(undefined4*)( lVar13 + 0x20 ), pVVar18, &local_a8, 1, &local_88);
                        if (local_88 != 0) {
                           Variant::get_type_name(&local_98, *(undefined4*)( lVar13 + 0x20 ));
                           Variant::get_type_name(&local_a0, *(undefined4*)local_a8);
                           local_68 = "Unable to convert array index %d from \"%s\" to \"%s\".";
                           local_90 = 0;
                           local_60 = 0x33;
                           String::parse_latin1((StrRange*)&local_90);
                           vformat<int,String,String>(&local_68, (StrRange*)&local_90, iVar20, &local_a0, &local_98);
                           _err_print_error("assign", "core/variant/array.cpp", 0x10f, "Condition \"ce.error\" is true.", &local_68, 0, 0);
                           pcVar15 = local_68;
                           if (local_68 != (char*)0x0) {
                              LOCK();
                              plVar1 = (long*)( local_68 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_68 = (char*)0x0;
                                 Memory::free_static(pcVar15 + -0x10, false);
                              }
                           }
                           lVar13 = local_90;
                           if (local_90 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_90 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_90 = 0;
                                 Memory::free_static((void*)( lVar13 + -0x10 ), false);
                              }
                           }
                           lVar13 = local_a0;
                           if (local_a0 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_a0 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_a0 = 0;
                                 Memory::free_static((void*)( lVar13 + -0x10 ), false);
                              }
                           }
                           lVar13 = local_98;
                           if (local_98 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_98 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_98 = 0;
                                 Memory::free_static((void*)( lVar13 + -0x10 ), false);
                              }
                           }
                           goto LAB_0011136d;
                        }
                        iVar20 = iVar20 + 1;
                        this_02 = this_02 + 0x18;
                        pVVar18 = pVVar18 + 0x18;
                     } while ( iVar20 != (int)local_f0 );
                  }
                  goto LAB_001115d3;
               }
               Variant::get_type_name((CowData<char32_t>*)&local_90, *(undefined4*)( lVar13 + 0x20 ));
               Variant::get_type_name((CowData<char32_t>*)&local_98, *(undefined4*)( lVar6 + 0x20 ));
               local_68 = "Cannot assign contents of \"Array[%s]\" to \"Array[%s]\".";
               local_88 = 0;
               uStack_84 = 0;
               local_60 = 0x35;
               String::parse_latin1((StrRange*)&local_88);
               vformat<String,String>((CowData<char32_t>*)&local_68, (StrRange*)&local_88, (CowData<char32_t>*)&local_98, (CowData<char32_t>*)&local_90);
               _err_print_error("assign", "core/variant/array.cpp", 0x112, "Method/function failed.", (CowData<char32_t>*)&local_68, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            }
            LAB_0011136d:CowData<Variant>::_unref((CowData<Variant>*)&local_70);
         }
      } else {
         if (iVar17 == 0x18) {
            if (iVar20 == 0x18) {
               if (*(long*)( lVar6 + 0x28 ) != 0) {
                  if (*(long*)( lVar13 + 0x28 ) == 0) goto LAB_0011194a;
                  if (( ( *(long*)( lVar13 + 0x28 ) != *(long*)( lVar6 + 0x28 ) ) && ( cVar4 = ClassDB::is_parent_class((StringName*)( lVar13 + 0x28 ), (StringName*)( lVar6 + 0x28 )) ),cVar4 == '\0' )) {
                     iVar20 = *(int*)( lVar13 + 0x20 );
                     goto LAB_00110cc0;
                  }
               }
               goto LAB_00110f3e;
            }
         } else {
            LAB_00110cc0:if (iVar20 == 0x18) {
               LAB_0011194a:iVar20 = 0x18;
            } else if (*(int*)( lVar6 + 0x20 ) != 0x18) goto LAB_00110b28;
         }
         Variant::get_type_name(&local_88, iVar20);
         Variant::get_type_name(&local_90, *(undefined4*)( lVar6 + 0x20 ));
         local_68 = "Cannot assign contents of \"Array[%s]\" to \"Array[%s]\".";
         local_78 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_78);
         vformat<String,String>(&local_68, (StrRange*)&local_78, &local_90, &local_88);
         uVar16 = 0xf3;
         LAB_00110d69:_err_print_error("assign", "core/variant/array.cpp", uVar16, "Method/function failed.", &local_68, 0, 0);
         pcVar15 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }
         }
         lVar13 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
         lVar13 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
         if (CONCAT44(uStack_84, local_88) != 0) {
            LOCK();
            plVar1 = (long*)( CONCAT44(uStack_84, local_88) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar13 = CONCAT44(uStack_84, local_88);
               local_88 = 0;
               uStack_84 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }
         }
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00111f3f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Array::Array(Array const&, unsigned int, StringName const&, Variant const&) */void Array::Array(Array *this, Array *param_1, uint param_2, StringName *param_3, Variant_conflict *param_4) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)operator_new(0x40, "");
   *puVar1 = 0;
   *(char**)( puVar1 + 0xe ) = "container";
   puVar1[8] = 0;
   *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 10 ) = (undefined1[16])0x0;
   *(undefined4**)this = puVar1;
   *puVar1 = 1;
   set_typed((uint)this, (StringName*)(ulong)param_2, (Variant_conflict*)param_3);
   assign(this, param_1);
   return;
}/* Array::find_custom(Callable const&, int) const */int Array::find_custom(Array *this, Callable *param_1, int param_2) {
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   bool bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   int local_88;
   undefined8 local_84;
   char *local_78;
   undefined8 local_70;
   long local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( -1 < param_2 ) && ( lVar5 = lVar5 != 0 )) {
      lVar7 = *(long*)( lVar5 + -8 );
      if (( (int)lVar7 != 0 ) && ( lVar6 = (long)param_2 ),param_2 < (int)lVar7) {
         do {
            if (lVar7 <= lVar6) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            local_50 = (undefined1[16])0x0;
            local_60 = lVar5 + lVar6 * 0x18;
            local_58[0] = 0;
            local_58[1] = 0;
            local_88 = 0;
            local_84 = 0;
            Callable::callp((Variant_conflict**)param_1, (int)&local_60, (Variant_conflict*)0x1, (CallError*)local_58);
            if (local_88 != 0) {
               Variant::get_callable_error_text((Callable*)&local_98, (Variant_conflict**)param_1, (int)&local_60, (CallError*)0x1);
               local_78 = "Error calling method from \'find_custom\': %s.";
               local_90 = 0;
               local_70 = 0x2c;
               String::parse_latin1((StrRange*)&local_90);
               vformat<String>(&local_78, (StrRange*)&local_90, (Callable*)&local_98);
               _err_print_error("find_custom", "core/variant/array.cpp", 0x182, "Method/function failed. Returning: ret", &local_78, 0, 0);
               pcVar3 = local_78;
               if (local_78 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_78 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               lVar5 = local_90;
               if (local_90 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_90 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }
               }
               lVar5 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }
               }
               LAB_00112288:param_2 = -1;
               LAB_0011228d:if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               goto LAB_00112105;
            }
            if (local_58[0] != 1) {
               _err_print_error("find_custom", "core/variant/array.cpp", 0x185, "Condition \"res.get_type() != Variant::Type::BOOL\" is true. Returning: ret", "Error on method from \'find_custom\': Return type of callable must be boolean.", 0, 0);
               goto LAB_00112288;
            }
            bVar4 = Variant::operator_cast_to_bool((Variant_conflict*)local_58);
            if (bVar4) goto LAB_0011228d;
            if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            param_2 = param_2 + 1;
            lVar6 = lVar6 + 1;
            lVar5 = *(long*)( *(long*)this + 0x10 );
         } while ( ( lVar5 != 0 ) && ( lVar7 = *(long*)( lVar5 + -8 ) ),param_2 < (int)lVar7 );
      }
   }
   param_2 = -1;
   LAB_00112105:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_2;
}/* Array::rfind_custom(Callable const&, int) const */int Array::rfind_custom(Array *this, Callable *param_1, int param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   char *pcVar4;
   bool bVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   int local_88;
   undefined8 local_84;
   char *local_78;
   undefined8 local_70;
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( *(long*)this + 0x10 );
   if (( lVar2 != 0 ) && ( lVar7 = lVar7 != 0 )) {
      if (( ( param_2 < 0 ) && ( param_2 = param_2 < 0 ) ) || ( lVar6 = lVar7 <= lVar6 )) {
         param_2 = (int)lVar7 + -1;
         if (param_2 < 0) goto LAB_00112658;
         lVar6 = (long)param_2;
      }
      do {
         if (lVar2 == 0) {
            lVar7 = 0;
            LAB_00112446:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar7 = *(long*)( lVar2 + -8 );
         if (lVar7 <= lVar6) goto LAB_00112446;
         local_50 = (undefined1[16])0x0;
         local_60 = lVar2 + lVar6 * 0x18;
         local_58 = 0;
         local_88 = 0;
         local_84 = 0;
         Callable::callp((Variant_conflict**)param_1, (int)&local_60, (Variant_conflict*)0x1, (CallError*)&local_58);
         if (local_88 != 0) {
            Variant::get_callable_error_text((Callable*)&local_98, (Variant_conflict**)param_1, (int)&local_60, (CallError*)0x1);
            local_78 = "Error calling method from \'rfind_custom\': %s.";
            local_90 = 0;
            local_70 = 0x2d;
            String::parse_latin1((StrRange*)&local_90);
            vformat<String>(&local_78, (StrRange*)&local_90, (Callable*)&local_98);
            _err_print_error("rfind_custom", "core/variant/array.cpp", 0x1be, "Method/function failed. Returning: -1", &local_78, 0, 0);
            pcVar4 = local_78;
            if (local_78 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
            lVar2 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            lVar2 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            LAB_001125c8:param_2 = -1;
            LAB_001125cd:if (( &Variant::needs_deinit )[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }
            goto LAB_001125e3;
         }
         if ((int)local_58 != 1) {
            _err_print_error("rfind_custom", "core/variant/array.cpp", 0x1c1, "Condition \"res.get_type() != Variant::Type::BOOL\" is true. Returning: -1", "Error on method from \'rfind_custom\': Return type of callable must be boolean.", 0, 0);
            goto LAB_001125c8;
         }
         bVar5 = Variant::operator_cast_to_bool((Variant_conflict*)&local_58);
         if (bVar5) goto LAB_001125cd;
         if (( &Variant::needs_deinit )[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }
         bVar5 = param_2 == 0;
         param_2 = param_2 + -1;
         if (bVar5) break;
         lVar6 = lVar6 + -1;
         lVar2 = *(long*)( *(long*)this + 0x10 );
      } while ( true );
   }
   LAB_00112658:param_2 = -1;
   LAB_001125e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::reduce(Callable const&, Variant const&) const */Callable *Array::reduce(Callable *param_1, Variant_conflict *param_2) {
   long *plVar1;
   char *pcVar2;
   char cVar3;
   long lVar4;
   Variant_conflict *in_RCX;
   Variant_conflict **in_RDX;
   int iVar5;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   int local_a8;
   undefined8 local_a4;
   char *local_98;
   undefined8 local_90;
   Variant_conflict *local_88;
   undefined8 local_80;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_78, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   cVar3 = Variant::operator ==((Variant_conflict*)local_78, (Variant_conflict*)&local_58);
   if (( ( cVar3 == '\0' ) || ( *(long*)( *(long*)param_2 + 0x10 ) == 0 ) ) || ( *(int*)( *(long*)( *(long*)param_2 + 0x10 ) + -8 ) < 1 )) {
      if (( &Variant::needs_deinit )[(int)local_58] == '\0') {
         iVar5 = 0;
      } else {
         iVar5 = 0;
         Variant::_clear_internal();
      }
   } else {
      if (( &Variant::needs_deinit )[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }
      front();
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      iVar5 = 1;
      local_78[0] = (int)local_58;
      local_70 = local_50._0_8_;
      uStack_68 = local_50._8_8_;
   }
   lVar4 = *(long*)( *(long*)param_2 + 0x10 );
   while (lVar4 != 0) {
      while (true) {
         if (*(int*)( lVar4 + -8 ) <= iVar5) goto LAB_00112860;
         local_88 = (Variant_conflict*)local_78;
         local_80 = operator[]((Array*)param_2, iVar5);
         local_58 = 0;
         local_a8 = 0;
         local_a4 = 0;
         local_50 = (undefined1[16])0x0;
         Callable::callp(in_RDX, (int)&local_88, (Variant_conflict*)0x2, (CallError*)&local_58);
         if (local_a8 != 0) {
            Variant::get_callable_error_text((Callable*)&local_b8, in_RDX, (int)&local_88, (CallError*)0x2);
            local_98 = "Error calling method from \'reduce\': %s.";
            local_b0 = 0;
            local_90 = 0x27;
            String::parse_latin1((StrRange*)&local_b0);
            vformat<String>(&local_98, (StrRange*)&local_b0, (Callable*)&local_b8);
            _err_print_error("reduce", "core/variant/array.cpp", 0x273, "Method/function failed. Returning: Variant()", &local_98, 0, 0);
            pcVar2 = local_98;
            if (local_98 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar4 = local_b0;
            if (local_b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b0 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }
            }
            lVar4 = local_b8;
            if (local_b8 != 0) {
               LOCK();
               plVar1 = (long*)( local_b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b8 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }
            }
            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            if (( &Variant::needs_deinit )[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }
            if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            goto LAB_00112875;
         }
         Variant::operator =((Variant_conflict*)local_78, (Variant_conflict*)&local_58);
         if (( &Variant::needs_deinit )[(int)local_58] == '\0') break;
         iVar5 = iVar5 + 1;
         Variant::_clear_internal();
         lVar4 = *(long*)( *(long*)param_2 + 0x10 );
         if (lVar4 == 0) goto LAB_00112860;
      };
      iVar5 = iVar5 + 1;
      lVar4 = *(long*)( *(long*)param_2 + 0x10 );
   };
   LAB_00112860:*(int*)param_1 = local_78[0];
   *(undefined8*)( param_1 + 8 ) = local_70;
   *(undefined8*)( param_1 + 0x10 ) = uStack_68;
   LAB_00112875:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::any(Callable const&) const */bool Array::any(Array *this, Callable *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   bool bVar4;
   int iVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   int local_88;
   undefined8 local_84;
   char *local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   iVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( *(long*)this + 0x10 );
   while (( lVar2 != 0 && ( iVar5 < *(int*)( lVar2 + -8 ) ) )) {
      local_60 = operator[](this, iVar5);
      local_58 = 0;
      local_88 = 0;
      local_84 = 0;
      local_50 = (undefined1[16])0x0;
      Callable::callp((Variant_conflict**)param_1, (int)&local_60, (Variant_conflict*)0x1, (CallError*)&local_58);
      if (local_88 != 0) {
         Variant::get_callable_error_text((Callable*)&local_98, (Variant_conflict**)param_1, (int)&local_60, (CallError*)0x1);
         local_78 = "Error calling method from \'any\': %s.";
         local_90 = 0;
         local_70 = 0x24;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String>(&local_78, (StrRange*)&local_90, (Callable*)&local_98);
         _err_print_error(&_LC133, "core/variant/array.cpp", 0x284, "Method/function failed. Returning: false", &local_78, 0, 0);
         pcVar3 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         lVar2 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
               bVar4 = false;
               goto LAB_00112c84;
            }
         }
         bVar4 = false;
         LAB_00112c84:if (( &Variant::needs_deinit )[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }
         goto LAB_00112b92;
      }
      bVar4 = Variant::operator_cast_to_bool((Variant_conflict*)&local_58);
      if (bVar4) goto LAB_00112c84;
      if (( &Variant::needs_deinit )[(int)local_58] == '\0') {
         iVar5 = iVar5 + 1;
         lVar2 = *(long*)( *(long*)this + 0x10 );
      } else {
         iVar5 = iVar5 + 1;
         Variant::_clear_internal();
         lVar2 = *(long*)( *(long*)this + 0x10 );
      }
   };
   bVar4 = false;
   LAB_00112b92:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::all(Callable const&) const */undefined8 Array::all(Array *this, Callable *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   bool bVar4;
   undefined8 uVar5;
   int iVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   int local_88;
   undefined8 local_84;
   char *local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   iVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( *(long*)this + 0x10 );
   while (( lVar2 != 0 && ( iVar6 < *(int*)( lVar2 + -8 ) ) )) {
      local_60 = operator[](this, iVar6);
      local_58 = 0;
      local_88 = 0;
      local_84 = 0;
      local_50 = (undefined1[16])0x0;
      Callable::callp((Variant_conflict**)param_1, (int)&local_60, (Variant_conflict*)0x1, (CallError*)&local_58);
      if (local_88 != 0) {
         Variant::get_callable_error_text((Callable*)&local_98, (Variant_conflict**)param_1, (int)&local_60, (CallError*)0x1);
         local_78 = "Error calling method from \'all\': %s.";
         local_90 = 0;
         local_70 = 0x24;
         String::parse_latin1((StrRange*)&local_90);
         vformat<String>(&local_78, (StrRange*)&local_90, (Callable*)&local_98);
         _err_print_error(&_LC135, "core/variant/array.cpp", 0x29a, "Method/function failed. Returning: false", &local_78, 0, 0);
         pcVar3 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         lVar2 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         LAB_00112f20:if (( &Variant::needs_deinit )[(int)local_58] == '\0') {
            uVar5 = 0;
         } else {
            Variant::_clear_internal();
            uVar5 = 0;
         }
         goto LAB_00112e25;
      }
      bVar4 = Variant::operator_cast_to_bool((Variant_conflict*)&local_58);
      if (!bVar4) goto LAB_00112f20;
      if (( &Variant::needs_deinit )[(int)local_58] == '\0') {
         iVar6 = iVar6 + 1;
         lVar2 = *(long*)( *(long*)this + 0x10 );
      } else {
         iVar6 = iVar6 + 1;
         Variant::_clear_internal();
         lVar2 = *(long*)( *(long*)this + 0x10 );
      }
   };
   uVar5 = 1;
   LAB_00112e25:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::recursive_duplicate(bool, int) const */Array *Array::recursive_duplicate(bool param_1, int param_2) {
   long lVar1;
   long lVar2;
   Object *pOVar3;
   Object *pOVar4;
   char cVar5;
   int iVar6;
   undefined4 *puVar7;
   int *piVar8;
   int in_ECX;
   char in_DL;
   int iVar9;
   int iVar10;
   undefined4 in_register_00000034;
   Array *this;
   undefined7 in_register_00000039;
   Array *this_00;
   long in_FS_OFFSET;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   this_00 = (Array*)CONCAT71(in_register_00000039, param_1);
   this(Array * CONCAT44(in_register_00000034, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar7 = (undefined4*)operator_new(0x40, "");
   *puVar7 = 0;
   *(undefined1(*) [16])( puVar7 + 10 ) = (undefined1[16])0x0;
   puVar7[8] = 0;
   *(char**)( puVar7 + 0xe ) = "container";
   *(undefined1(*) [16])( puVar7 + 4 ) = (undefined1[16])0x0;
   *(undefined4**)this_00 = puVar7;
   *puVar7 = 1;
   lVar1 = *(long*)this;
   lVar2 = *(long*)this_00;
   *(undefined4*)( lVar2 + 0x20 ) = *(undefined4*)( lVar1 + 0x20 );
   StringName::operator =((StringName*)( lVar2 + 0x28 ), (StringName*)( lVar1 + 0x28 ));
   pOVar3 = *(Object**)( lVar1 + 0x30 );
   pOVar4 = *(Object**)( lVar2 + 0x30 );
   if (pOVar3 != pOVar4) {
      *(Object**)( lVar2 + 0x30 ) = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar5 = RefCounted::reference() ),cVar5 == '\0') {
         *(undefined8*)( lVar2 + 0x30 ) = 0;
      }
      if (( ( pOVar4 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
      Memory::free_static(pOVar4, false);
   }
}*(undefined8*)( lVar2 + 0x38 ) = *(undefined8*)( lVar1 + 0x38 );if (in_ECX < 0x65) {
   lVar1 = *(long*)( *(long*)this + 0x10 );
   if (in_DL == '\0') {
      if (*(long*)( *(long*)this_00 + 0x10 ) != lVar1) {
         CowData<Variant>::_ref((CowData<Variant>*)( *(long*)this_00 + 0x10 ), (CowData*)( *(long*)this + 0x10 ));
      }
   } else if (lVar1 == 0) {
      resize(this_00, 0);
   } else {
      iVar10 = 0;
      iVar9 = (int)*(undefined8*)( lVar1 + -8 );
      resize(this_00, iVar9);
      if (0 < iVar9) {
         do {
            iVar6 = operator[](this, iVar10);
            Variant::recursive_duplicate(SUB81(local_58, 0), iVar6);
            piVar8 = (int*)operator[](this_00, iVar10);
            if (piVar8 == local_58) {
               if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
            } else {
               if (( &Variant::needs_deinit )[*piVar8] != '\0') {
                  Variant::_clear_internal();
               }
               *piVar8 = 0;
               *piVar8 = local_58[0];
               *(undefined8*)( piVar8 + 2 ) = local_50;
               *(undefined8*)( piVar8 + 4 ) = uStack_48;
            }
            iVar10 = iVar10 + 1;
         } while ( iVar10 != iVar9 );
      }
   }
} else {
   _err_print_error("recursive_duplicate", "core/variant/array.cpp", 0x1fc, "Max recursion reached", 0, 0);
}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return this_00;}/* Array::duplicate(bool) const */Array * __thiscall Array::duplicate(Array *this,bool param_1){
   long lVar1;
   undefined3 in_register_00000031;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   recursive_duplicate(SUB81(this, 0), CONCAT31(in_register_00000031, param_1));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::slice(int, int, int, bool) const */Array *Array::slice(int param_1, int param_2, int param_3, bool param_4) {
   long lVar1;
   long lVar2;
   Object *pOVar3;
   Object *pOVar4;
   bool bVar5;
   char cVar6;
   uint uVar7;
   int iVar8;
   undefined4 *puVar9;
   Variant_conflict *pVVar10;
   uint uVar11;
   uint uVar12;
   undefined7 in_register_00000009;
   uint uVar13;
   undefined4 in_register_00000034;
   Array *this;
   undefined4 in_register_0000003c;
   Array *this_00;
   int in_R8D;
   char in_R9B;
   int iVar14;
   int iVar15;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   this_00 = (Array*)CONCAT44(in_register_0000003c, param_1);
   this(Array * CONCAT44(in_register_00000034, param_2));
   uVar11 = (uint)CONCAT71(in_register_00000009, param_4);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar9 = (undefined4*)operator_new(0x40, "");
   *puVar9 = 0;
   *(undefined1(*) [16])( puVar9 + 10 ) = (undefined1[16])0x0;
   puVar9[8] = 0;
   *(char**)( puVar9 + 0xe ) = "container";
   *(undefined1(*) [16])( puVar9 + 4 ) = (undefined1[16])0x0;
   *(undefined4**)this_00 = puVar9;
   *puVar9 = 1;
   lVar1 = *(long*)this;
   lVar2 = *(long*)this_00;
   *(undefined4*)( lVar2 + 0x20 ) = *(undefined4*)( lVar1 + 0x20 );
   StringName::operator =((StringName*)( lVar2 + 0x28 ), (StringName*)( lVar1 + 0x28 ));
   pOVar3 = *(Object**)( lVar1 + 0x30 );
   pOVar4 = *(Object**)( lVar2 + 0x30 );
   if (pOVar3 != pOVar4) {
      *(Object**)( lVar2 + 0x30 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            *(undefined8*)( lVar2 + 0x30 ) = 0;
         }
      }
      if (pOVar4 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(pOVar4);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
         }
      }
   }
   *(undefined8*)( lVar2 + 0x38 ) = *(undefined8*)( lVar1 + 0x38 );
   if (in_R8D == 0) {
      _err_print_error("slice", "core/variant/array.cpp", 0x212, "Condition \"p_step == 0\" is true. Returning: result", "Slice step cannot be zero.", 0, 0);
   } else if (*(long*)( *(long*)this + 0x10 ) != 0) {
      uVar13 = ( uint ) * (undefined8*)( *(long*)( *(long*)this + 0x10 ) + -8 );
      if (uVar13 != 0) {
         iVar14 = -uVar13;
         if (param_3 < iVar14) {
            if (( in_R8D < 0 ) || ( (int)uVar13 <= param_3 )) goto LAB_00113374;
            bVar5 = true;
         } else {
            bVar5 = 0 < in_R8D;
            if (( (int)uVar13 <= param_3 ) && ( bVar5 )) goto LAB_00113374;
            iVar14 = uVar13 - 1;
            if (param_3 < (int)( uVar13 - 1 )) {
               iVar14 = param_3;
            }
         }
         if (iVar14 < 0) {
            iVar14 = iVar14 + uVar13;
         }
         uVar12 = uVar13;
         if ((int)uVar11 <= (int)uVar13) {
            uVar12 = uVar11;
         }
         uVar7 = ~uVar13;
         if ((int)~uVar13 <= (int)uVar11) {
            uVar7 = uVar12;
         }
         if ((int)uVar7 < 0) {
            uVar7 = uVar13 + uVar7;
         }
         if (( (int)uVar7 < iVar14 ) && ( bVar5 )) {
            _err_print_error("slice", "core/variant/array.cpp", 0x223, "Condition \"p_step > 0 && begin > end\" is true. Returning: result", "Slice step is positive, but bounds are decreasing.", 0, 0);
         } else if (( in_R8D < 0 ) && ( iVar14 < (int)uVar7 )) {
            _err_print_error("slice", "core/variant/array.cpp", 0x224, "Condition \"p_step < 0 && begin < end\" is true. Returning: result", "Slice step is negative, but bounds are increasing.", 0, 0);
         } else {
            iVar8 = ( (int)( uVar7 - iVar14 ) / in_R8D + 1 ) - ( uint )((int)( uVar7 - iVar14 ) % in_R8D == 0);
            resize(this_00, iVar8);
            if (0 < iVar8) {
               iVar15 = 0;
               do {
                  if (in_R9B == '\0') {
                     pVVar10 = (Variant_conflict*)operator[](this, iVar14);
                     Variant::Variant((Variant_conflict*)local_58, pVVar10);
                  } else {
                     operator[](this,iVar14)
                     ;;
                     Variant::duplicate(SUB81((Variant_conflict*)local_58, 0));
                  }
                  pVVar10 = (Variant_conflict*)operator[](this_00, iVar15);
                  Variant::operator =(pVVar10, (Variant_conflict*)local_58);
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  iVar14 = iVar14 + in_R8D;
                  iVar15 = iVar15 + 1;
               } while ( iVar8 != iVar15 );
            }
         }
      }
   }
   LAB_00113374:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_00;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::filter(Callable const&) const */Callable *Array::filter(Callable *param_1) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   char *pcVar4;
   char cVar5;
   bool bVar6;
   long lVar7;
   Variant_conflict *pVVar8;
   Variant_conflict *this;
   undefined4 *puVar9;
   Variant_conflict **in_RDX;
   int iVar10;
   Array *in_RSI;
   int iVar11;
   long in_FS_OFFSET;
   int local_bc;
   undefined4 *local_a0;
   long local_98;
   long local_90;
   int local_88;
   undefined8 local_84;
   char *local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (undefined4*)operator_new(0x40, "");
   *local_a0 = 0;
   local_a0[8] = 0;
   *(char**)( local_a0 + 0xe ) = "container";
   *(undefined1(*) [16])( local_a0 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_a0 + 10 ) = (undefined1[16])0x0;
   *local_a0 = 1;
   if (*(long*)( *(long*)in_RSI + 0x10 ) == 0) {
      iVar10 = 0;
   } else {
      iVar10 = *(int*)( *(long*)( *(long*)in_RSI + 0x10 ) + -8 );
   }
   resize((Array*)&local_a0, iVar10);
   puVar9 = local_a0;
   lVar7 = *(long*)in_RSI;
   local_a0[8] = *(undefined4*)( lVar7 + 0x20 );
   StringName::operator =((StringName*)( local_a0 + 10 ), (StringName*)( lVar7 + 0x28 ));
   pOVar2 = *(Object**)( lVar7 + 0x30 );
   pOVar3 = *(Object**)( puVar9 + 0xc );
   if (pOVar2 != pOVar3) {
      *(Object**)( puVar9 + 0xc ) = pOVar2;
      if (pOVar2 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( puVar9 + 0xc ) = 0;
         }
      }
      if (pOVar3 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar3);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }
         }
      }
   }
   *(undefined8*)( puVar9 + 0xe ) = *(undefined8*)( lVar7 + 0x38 );
   lVar7 = *(long*)( *(long*)in_RSI + 0x10 );
   if (lVar7 == 0) {
      local_bc = 0;
   } else {
      local_bc = 0;
      iVar10 = 0;
      do {
         while (true) {
            if (*(int*)( lVar7 + -8 ) <= iVar10) goto LAB_00113800;
            local_60 = operator[](in_RSI, iVar10);
            local_58[0] = 0;
            local_58[1] = 0;
            local_88 = 0;
            local_84 = 0;
            local_50 = (undefined1[16])0x0;
            Callable::callp(in_RDX, (int)&local_60, (Variant_conflict*)0x1, (CallError*)local_58);
            if (local_88 != 0) {
               Variant::get_callable_error_text((Callable*)&local_98, in_RDX, (int)&local_60, (CallError*)0x1);
               local_78 = "Error calling method from \'filter\': %s.";
               local_90 = 0;
               local_70 = 0x27;
               String::parse_latin1((StrRange*)&local_90);
               vformat<String>(&local_78, (StrRange*)&local_90, (Callable*)&local_98);
               _err_print_error("filter", "core/variant/array.cpp", 0x23f, "Method/function failed. Returning: Array()", &local_78, 0, 0);
               pcVar4 = local_78;
               if (local_78 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_78 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
               lVar7 = local_90;
               if (local_90 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_90 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }
               }
               lVar7 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }
               }
               puVar9 = (undefined4*)operator_new(0x40, "");
               *puVar9 = 0;
               *(char**)( puVar9 + 0xe ) = "container";
               puVar9[8] = 0;
               *(undefined1(*) [16])( puVar9 + 4 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar9 + 10 ) = (undefined1[16])0x0;
               *(undefined4**)param_1 = puVar9;
               *puVar9 = 1;
               if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               goto LAB_00113828;
            }
            bVar6 = Variant::operator_cast_to_bool((Variant_conflict*)local_58);
            if (bVar6) break;
            if (( &Variant::needs_deinit )[local_58[0]] == '\0') goto LAB_00113710;
            LAB_001137e4:iVar10 = iVar10 + 1;
            Variant::_clear_internal();
            lVar7 = *(long*)( *(long*)in_RSI + 0x10 );
            if (lVar7 == 0) goto LAB_00113800;
         };
         pVVar8 = (Variant_conflict*)operator[](in_RSI, iVar10);
         iVar11 = local_bc + 1;
         this(Variant_conflict * Array * &local_a0, local_bc);
         Variant::operator =(this, pVVar8);
         local_bc = iVar11;
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') goto LAB_001137e4;
         LAB_00113710:iVar10 = iVar10 + 1;
         lVar7 = *(long*)( *(long*)in_RSI + 0x10 );
      } while ( lVar7 != 0 );
   }
   LAB_00113800:resize((Array*)&local_a0, local_bc);
   *(undefined8*)param_1 = 0;
   _ref((Array*)param_1, (Array*)&local_a0);
   LAB_00113828:_unref((Array*)&local_a0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::map(Callable const&) const */Callable *Array::map(Callable *param_1) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   Variant_conflict *this;
   undefined4 *puVar4;
   Variant_conflict **in_RDX;
   int iVar5;
   Array *in_RSI;
   int iVar6;
   long in_FS_OFFSET;
   undefined4 *local_a0;
   long local_98;
   long local_90;
   int local_88;
   undefined8 local_84;
   char *local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (undefined4*)operator_new(0x40, "");
   *local_a0 = 0;
   local_a0[8] = 0;
   *(char**)( local_a0 + 0xe ) = "container";
   *(undefined1(*) [16])( local_a0 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_a0 + 10 ) = (undefined1[16])0x0;
   *local_a0 = 1;
   if (*(long*)( *(long*)in_RSI + 0x10 ) == 0) {
      iVar5 = 0;
   } else {
      iVar5 = *(int*)( *(long*)( *(long*)in_RSI + 0x10 ) + -8 );
   }
   iVar6 = 0;
   resize((Array*)&local_a0, iVar5);
   lVar3 = *(long*)( *(long*)in_RSI + 0x10 );
   if (lVar3 != 0) {
      while (iVar6 < *(int*)( lVar3 + -8 )) {
         local_60 = operator[](in_RSI, iVar6);
         local_58[0] = 0;
         local_58[1] = 0;
         local_88 = 0;
         local_84 = 0;
         local_50 = (undefined1[16])0x0;
         Callable::callp(in_RDX, (int)&local_60, (Variant_conflict*)0x1, (CallError*)local_58);
         if (local_88 != 0) {
            Variant::get_callable_error_text((Callable*)&local_98, in_RDX, (int)&local_60, (CallError*)0x1);
            local_78 = "Error calling method from \'map\': %s.";
            local_90 = 0;
            local_70 = 0x24;
            String::parse_latin1((StrRange*)&local_90);
            vformat<String>(&local_78, (StrRange*)&local_90, (Callable*)&local_98);
            _err_print_error(&_LC148, "core/variant/array.cpp", 0x259, "Method/function failed. Returning: Array()", &local_78, 0, 0);
            pcVar2 = local_78;
            if (local_78 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar3 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }
            }
            lVar3 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }
            }
            puVar4 = (undefined4*)operator_new(0x40, "");
            *puVar4 = 0;
            *(char**)( puVar4 + 0xe ) = "container";
            puVar4[8] = 0;
            *(undefined1(*) [16])( puVar4 + 4 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar4 + 10 ) = (undefined1[16])0x0;
            *(undefined4**)param_1 = puVar4;
            *puVar4 = 1;
            if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            goto LAB_00113bc7;
         }
         this(Variant_conflict * Array * &local_a0, iVar6);
         Variant::operator =(this, (Variant_conflict*)local_58);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         iVar6 = iVar6 + 1;
         lVar3 = *(long*)( *(long*)in_RSI + 0x10 );
         if (lVar3 == 0) break;
      };
   }
   *(undefined8*)param_1 = 0;
   _ref((Array*)param_1, (Array*)&local_a0);
   LAB_00113bc7:_unref((Array*)&local_a0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* Array::pop_at(int) */Variant_conflict *Array::pop_at(int param_1) {
   long *plVar1;
   int iVar2;
   char *pcVar3;
   uint in_EDX;
   long lVar4;
   long *in_RSI;
   long lVar5;
   undefined4 in_register_0000003c;
   Variant_conflict *this;
   long lVar6;
   long lVar7;
   int *piVar8;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   this(Variant_conflict * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *in_RSI + 0x18 ) != 0) {
      _err_print_error("pop_at", "core/variant/array.cpp", 0x2fc, "Condition \"_p->read_only\" is true. Returning: Variant()", "Array is in read-only state.", 0, 0);
      *(undefined4*)this = 0;
      *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
      goto LAB_00113ed7;
   }
   lVar7 = *(long*)( *in_RSI + 0x10 );
   if (lVar7 != 0) {
      if ((int)in_EDX < 0) {
         in_EDX = in_EDX + (int)*(long*)( lVar7 + -8 );
         lVar4 = (long)(int)in_EDX;
         if (-1 < (int)in_EDX) goto LAB_00113dfd;
      } else {
         LAB_00113dfd:lVar4 = (long)(int)in_EDX;
         if (lVar4 < *(long*)( lVar7 + -8 )) {
            Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)( lVar7 + lVar4 * 0x18 ));
            lVar7 = *in_RSI;
            if (*(long*)( lVar7 + 0x10 ) == 0) {
               lVar6 = 0;
               LAB_00114063:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar4, lVar6, "p_index", "size()", "", false, false);
            } else {
               lVar6 = *(long*)( *(long*)( lVar7 + 0x10 ) + -8 );
               if (lVar6 <= lVar4) goto LAB_00114063;
               CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar7 + 0x10 ));
               lVar6 = *(long*)( lVar7 + 0x10 );
               if (lVar6 == 0) {
                  lVar5 = -1;
               } else {
                  lVar5 = *(long*)( lVar6 + -8 ) + -1;
                  if (lVar4 < lVar5) {
                     piVar8 = (int*)( lVar6 + lVar4 * 0x18 );
                     do {
                        if (( &Variant::needs_deinit )[*piVar8] != '\0') {
                           Variant::_clear_internal();
                        }
                        iVar2 = piVar8[6];
                        lVar4 = lVar4 + 1;
                        piVar8[6] = 0;
                        *piVar8 = iVar2;
                        *(undefined8*)( piVar8 + 2 ) = *(undefined8*)( piVar8 + 8 );
                        *(undefined8*)( piVar8 + 4 ) = *(undefined8*)( piVar8 + 10 );
                        piVar8 = piVar8 + 6;
                     } while ( lVar5 != lVar4 );
                  }
               }
               CowData<Variant>::resize<false>((CowData<Variant>*)( lVar7 + 0x10 ), lVar5);
            }
            Variant::Variant(this, (Variant_conflict*)local_58);
            if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            goto LAB_00113ed7;
         }
      }
      local_68 = "The calculated index %s is out of bounds (the array has %s elements). Leaving the array untouched and returning `null`.";
      local_70 = 0;
      local_60 = 0x77;
      String::parse_latin1((StrRange*)&local_70);
      vformat<int,long>((String_conflict*)&local_68, (int)(StrRange*)&local_70, (ulong)in_EDX);
      if (*(long*)( *in_RSI + 0x10 ) == 0) {
         lVar7 = 0;
      } else {
         lVar7 = *(long*)( *(long*)( *in_RSI + 0x10 ) + -8 );
      }
      _err_print_index_error("pop_at", "core/variant/array.cpp", 0x307, lVar4, lVar7, "p_pos", "_p->array.size()", (String_conflict*)&local_68, false, false);
      pcVar3 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }
      }
      lVar7 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
   }
   *(undefined4*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   LAB_00113ed7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Array::sort_custom(Callable const&) */void Array::sort_custom(Array *this, Callable *param_1) {
   long lVar1;
   Variant_conflict *this_00;
   char cVar2;
   long lVar3;
   Variant_conflict *pVVar4;
   long lVar5;
   Variant_conflict *pVVar6;
   Variant_conflict *pVVar7;
   long in_FS_OFFSET;
   long local_a0;
   Callable *local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   lVar5 = *(long*)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar5 + 0x18 ) == 0) {
      if (( *(long*)( lVar5 + 0x10 ) != 0 ) && ( lVar1 = lVar1 != 0 )) {
         CowData<Variant>::_copy_on_write((CowData<Variant>*)( lVar5 + 0x10 ));
         this_00 = *(Variant_conflict**)( lVar5 + 0x10 );
         local_80 = param_1;
         if (lVar1 == 1) {
            SortArray<Variant,CallableComparator,true>::introsort((SortArray<Variant,CallableComparator,true>*)&local_80, 0, 1, this_00, 0);
         } else {
            lVar3 = 0;
            lVar5 = lVar1;
            do {
               lVar5 = lVar5 >> 1;
               lVar3 = lVar3 + 1;
            } while ( lVar5 != 1 );
            SortArray<Variant,CallableComparator,true>::introsort((SortArray<Variant,CallableComparator,true>*)&local_80, 0, lVar1, this_00, lVar3 * 2);
            if (lVar1 < 0x11) {
               lVar5 = 1;
               pVVar7 = this_00;
               do {
                  pVVar7 = pVVar7 + 0x18;
                  Variant::Variant((Variant_conflict*)local_78, pVVar7);
                  cVar2 = CallableComparator::operator ()((Variant_conflict*)&local_80, (Variant_conflict*)local_78);
                  pVVar4 = pVVar7;
                  if (cVar2 == '\0') {
                     Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
                     while (true) {
                        pVVar6 = pVVar4 + -0x18;
                        cVar2 = CallableComparator::operator ()((Variant_conflict*)&local_80, (Variant_conflict*)local_58);
                        if (cVar2 == '\0') break;
                        if (pVVar6 == this_00) {
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           break;
                        }
                        Variant::operator =(pVVar4, pVVar6);
                        pVVar4 = pVVar6;
                     };
                     Variant::operator =(pVVar4, (Variant_conflict*)local_58);
                     if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }
                  } else {
                     do {
                        pVVar6 = pVVar4 + -0x18;
                        Variant::operator =(pVVar4, pVVar6);
                        pVVar4 = pVVar6;
                     } while ( pVVar6 != this_00 );
                     Variant::operator =(this_00, (Variant_conflict*)local_78);
                  }
                  if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  lVar5 = lVar5 + 1;
               } while ( lVar1 != lVar5 );
            } else {
               local_a0 = 1;
               pVVar7 = this_00;
               do {
                  pVVar7 = pVVar7 + 0x18;
                  Variant::Variant((Variant_conflict*)local_78, pVVar7);
                  cVar2 = CallableComparator::operator ()((Variant_conflict*)&local_80, (Variant_conflict*)local_78);
                  pVVar4 = pVVar7;
                  if (cVar2 == '\0') {
                     Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
                     while (true) {
                        pVVar6 = pVVar4 + -0x18;
                        cVar2 = CallableComparator::operator ()((Variant_conflict*)&local_80, (Variant_conflict*)local_58);
                        if (cVar2 == '\0') break;
                        if (pVVar6 == this_00) {
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           break;
                        }
                        Variant::operator =(pVVar4, pVVar6);
                        pVVar4 = pVVar6;
                     };
                     Variant::operator =(pVVar4, (Variant_conflict*)local_58);
                     if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }
                  } else {
                     do {
                        pVVar6 = pVVar4 + -0x18;
                        Variant::operator =(pVVar4, pVVar6);
                        pVVar4 = pVVar6;
                     } while ( this_00 != pVVar6 );
                     Variant::operator =(this_00, (Variant_conflict*)local_78);
                  }
                  if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  local_a0 = local_a0 + 1;
               } while ( local_a0 != 0x10 );
               pVVar7 = this_00 + 0x180;
               lVar5 = 0x10;
               do {
                  Variant::Variant((Variant_conflict*)local_58, pVVar7);
                  pVVar4 = pVVar7;
                  while (true) {
                     pVVar6 = pVVar4 + -0x18;
                     cVar2 = CallableComparator::operator ()((Variant_conflict*)&local_80, (Variant_conflict*)local_58);
                     if (cVar2 == '\0') break;
                     if (this_00 == pVVar6) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        break;
                     }
                     Variant::operator =(pVVar4, pVVar6);
                     pVVar4 = pVVar6;
                  };
                  Variant::operator =(pVVar4, (Variant_conflict*)local_58);
                  if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  lVar5 = lVar5 + 1;
                  pVVar7 = pVVar7 + 0x18;
               } while ( lVar1 != lVar5 );
            }
         }
      }
   } else {
      _err_print_error("sort_custom", "core/variant/array.cpp", 0x2b9, "Condition \"_p->read_only\" is true.", "Array is in read-only state.", 0, 0);
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */void Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this) {
   return;
}/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */void Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this) {
   operator_delete(this, 0x10);
   return;
}/* Variant::PackedArrayRef<long>::~PackedArrayRef() */void Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119550;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<double>::~PackedArrayRef() */void Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119590;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */void Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119510;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_001195d0;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */void Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119610;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<int>::~PackedArrayRef() */void Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119530;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<float>::~PackedArrayRef() */void Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119570;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_001195f0;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119630;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_001195d0;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119630;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_001195f0;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */void Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119510;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<int>::~PackedArrayRef() */void Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119530;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<long>::~PackedArrayRef() */void Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119550;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<float>::~PackedArrayRef() */void Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119570;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */void Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119610;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* Variant::PackedArrayRef<double>::~PackedArrayRef() */void Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__PackedArrayRef_00119590;
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x20);
         return;
      }
   }
   operator_delete(this, 0x20);
   return;
}/* String::parse_latin1(char const*) */void String::parse_latin1(String_conflict *this, char *param_1) {
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
}/* Array::pick_random() const [clone .cold] */void Array::pick_random(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Variant>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }
   return;
}/* Variant::Pools::BucketSmall* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::alloc<>()
    */BucketSmall * __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this){
   PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *pPVar1;
   PagedAllocator<Variant::Pools::BucketSmall,true,4096u> PVar2;
   long lVar3;
   BucketSmall *pBVar4;
   long lVar5;
   long *plVar6;
   uint uVar7;
   int iVar8;
   undefined8 uVar9;
   long lVar10;
   long *plVar11;
   long *plVar12;
   long lVar13;
   long *plVar14;
   long lVar15;
   long in_FS_OFFSET;
   pPVar1 = this + 0x24;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      LOCK();
      PVar2 = *pPVar1;
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) {
         *pPVar1 = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x1;
      }
      UNLOCK();
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) break;
      do {} while ( *pPVar1 != (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0 );
   };
   iVar8 = *(int*)( this + 0x14 );
   if (iVar8 == 0) {
      uVar7 = *(uint*)( this + 0x10 ) + 1;
      lVar13 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
      *(uint*)( this + 0x10 ) = uVar7;
      uVar9 = Memory::realloc_static(*(void**)this, (ulong)uVar7 * 8, false);
      *(undefined8*)this = uVar9;
      uVar9 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
      lVar5 = *(long*)this;
      *(undefined8*)( this + 8 ) = uVar9;
      uVar9 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) * 0x18, false);
      uVar7 = *(uint*)( this + 0x20 );
      *(undefined8*)( lVar5 + lVar13 ) = uVar9;
      lVar5 = *(long*)( this + 8 );
      uVar9 = Memory::alloc_static((ulong)uVar7 << 3, false);
      *(undefined8*)( lVar5 + lVar13 ) = uVar9;
      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == 0) {
         plVar14 = *(long**)( this + 8 );
      } else {
         plVar14 = *(long**)( this + 8 );
         lVar5 = *(long*)this;
         plVar6 = (long*)*plVar14;
         lVar10 = 0;
         plVar11 = plVar6;
         do {
            plVar12 = plVar11 + 1;
            lVar15 = *(long*)( lVar5 + lVar13 ) + lVar10;
            lVar10 = lVar10 + 0x18;
            *plVar11 = lVar15;
            plVar11 = plVar12;
         } while ( plVar6 + uVar7 != plVar12 );
      }
      iVar8 = uVar7 + *(int*)( this + 0x14 );
   } else {
      plVar14 = *(long**)( this + 8 );
   }
   uVar7 = iVar8 - 1;
   *(uint*)( this + 0x14 ) = uVar7;
   pBVar4 = *(BucketSmall**)( plVar14[uVar7 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar7 & *(uint*)( this + 0x1c )) * 8 );
   this[0x24] = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0;
   if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pBVar4;
}/* Variant::Pools::BucketMedium* PagedAllocator<Variant::Pools::BucketMedium, true,
   4096u>::alloc<>() */BucketMedium * __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this){
   PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
   PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar2;
   long lVar3;
   BucketMedium *pBVar4;
   long lVar5;
   long *plVar6;
   uint uVar7;
   int iVar8;
   undefined8 uVar9;
   long lVar10;
   long *plVar11;
   long *plVar12;
   long lVar13;
   long *plVar14;
   long lVar15;
   long in_FS_OFFSET;
   pPVar1 = this + 0x24;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      LOCK();
      PVar2 = *pPVar1;
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
         *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
      }
      UNLOCK();
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
      do {} while ( *pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0 );
   };
   iVar8 = *(int*)( this + 0x14 );
   if (iVar8 == 0) {
      uVar7 = *(uint*)( this + 0x10 ) + 1;
      lVar13 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
      *(uint*)( this + 0x10 ) = uVar7;
      uVar9 = Memory::realloc_static(*(void**)this, (ulong)uVar7 * 8, false);
      *(undefined8*)this = uVar9;
      uVar9 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
      lVar5 = *(long*)this;
      *(undefined8*)( this + 8 ) = uVar9;
      uVar9 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) * 0x30, false);
      uVar7 = *(uint*)( this + 0x20 );
      *(undefined8*)( lVar5 + lVar13 ) = uVar9;
      lVar5 = *(long*)( this + 8 );
      uVar9 = Memory::alloc_static((ulong)uVar7 << 3, false);
      *(undefined8*)( lVar5 + lVar13 ) = uVar9;
      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == 0) {
         plVar14 = *(long**)( this + 8 );
      } else {
         plVar14 = *(long**)( this + 8 );
         lVar5 = *(long*)this;
         plVar6 = (long*)*plVar14;
         lVar10 = 0;
         plVar11 = plVar6;
         do {
            plVar12 = plVar11 + 1;
            lVar15 = *(long*)( lVar5 + lVar13 ) + lVar10;
            lVar10 = lVar10 + 0x30;
            *plVar11 = lVar15;
            plVar11 = plVar12;
         } while ( plVar6 + uVar7 != plVar12 );
      }
      iVar8 = uVar7 + *(int*)( this + 0x14 );
   } else {
      plVar14 = *(long**)( this + 8 );
   }
   uVar7 = iVar8 - 1;
   *(uint*)( this + 0x14 ) = uVar7;
   pBVar4 = *(BucketMedium**)( plVar14[uVar7 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar7 & *(uint*)( this + 0x1c )) * 8 );
   this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
   if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pBVar4;
}/* Variant::Pools::BucketLarge* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::alloc<>()
    */BucketLarge * __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this){
   PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *pPVar1;
   PagedAllocator<Variant::Pools::BucketLarge,true,4096u> PVar2;
   long lVar3;
   BucketLarge *pBVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   int iVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   long *plVar12;
   long in_FS_OFFSET;
   pPVar1 = this + 0x24;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      LOCK();
      PVar2 = *pPVar1;
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) {
         *pPVar1 = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x1;
      }
      UNLOCK();
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) break;
      do {} while ( *pPVar1 != (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0 );
   };
   iVar8 = *(int*)( this + 0x14 );
   if (iVar8 == 0) {
      uVar7 = *(uint*)( this + 0x10 ) + 1;
      lVar11 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
      *(uint*)( this + 0x10 ) = uVar7;
      uVar9 = Memory::realloc_static(*(void**)this, (ulong)uVar7 * 8, false);
      *(undefined8*)this = uVar9;
      uVar9 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
      lVar5 = *(long*)this;
      *(undefined8*)( this + 8 ) = uVar9;
      uVar9 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) << 6, false);
      uVar7 = *(uint*)( this + 0x20 );
      *(undefined8*)( lVar5 + lVar11 ) = uVar9;
      lVar5 = *(long*)( this + 8 );
      uVar9 = Memory::alloc_static((ulong)uVar7 << 3, false);
      *(undefined8*)( lVar5 + lVar11 ) = uVar9;
      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == 0) {
         plVar12 = *(long**)( this + 8 );
      } else {
         plVar12 = *(long**)( this + 8 );
         lVar5 = *(long*)this;
         uVar10 = 0;
         lVar6 = *plVar12;
         do {
            *(ulong*)( lVar6 + uVar10 * 8 ) = uVar10 * 0x40 + *(long*)( lVar5 + lVar11 );
            uVar10 = uVar10 + 1;
         } while ( uVar10 != uVar7 );
      }
      iVar8 = uVar7 + *(int*)( this + 0x14 );
   } else {
      plVar12 = *(long**)( this + 8 );
   }
   uVar7 = iVar8 - 1;
   *(uint*)( this + 0x14 ) = uVar7;
   pBVar4 = *(BucketLarge**)( plVar12[uVar7 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar7 & *(uint*)( this + 0x1c )) * 8 );
   this[0x24] = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0;
   if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pBVar4;
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
}/* CowData<Variant>::_unref() */void CowData<Variant>::_unref(CowData<Variant> *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      piVar2 = *(int**)this;
      if (piVar2 != (int*)0x0) {
         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (( &Variant::needs_deinit )[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }
               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            } while ( lVar3 != lVar6 );
         }
         Memory::free_static(piVar2 + -4, false);
         return;
      }
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   *(undefined8*)this = 0;
   return;
}/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
            } while ( lVar3 != lVar7 );
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
}/* Variant::PackedArrayRef<String>::~PackedArrayRef() */void Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this) {
   *(undefined***)this = &PTR__PackedArrayRef_001195b0;
   CowData<String>::_unref((CowData<String>*)( this + 0x18 ));
   return;
}/* Variant::PackedArrayRef<String>::~PackedArrayRef() */void Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this) {
   *(undefined***)this = &PTR__PackedArrayRef_001195b0;
   CowData<String>::_unref((CowData<String>*)( this + 0x18 ));
   operator_delete(this, 0x20);
   return;
}/* CowData<Variant>::_realloc(long) */undefined8 CowData<Variant>::_realloc(CowData<Variant> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) */undefined8 CowData<Variant>::resize<false>(CowData<Variant> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined4 *puVar6;
   long lVar7;
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
      lVar3 = 0;
      lVar7 = 0;
   } else {
      lVar3 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar3) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar7 = lVar3 * 0x18;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x18 == 0) {
      LAB_00116970:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar8 = param_1 * 0x18 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar9 = uVar8 + 1;
   if (lVar9 == 0) goto LAB_00116970;
   if (param_1 <= lVar3) {
      puVar4 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar4 != (undefined8*)0x0) {
         if ((ulong)puVar4[-1] <= uVar8) {
            if (lVar9 == lVar7) goto LAB_001168c9;
            uVar5 = _realloc(this, lVar9);
            if ((int)uVar5 != 0) {
               return uVar5;
            }
            goto LAB_001168bc;
         }
         if (( &Variant::needs_deinit )[*(int*)( puVar4 + uVar8 * 3 )] != '\0') {
            Variant::_clear_internal();
            puVar4 = *(undefined8**)this;
         }
         uVar8 = uVar8 + 1;
      };
      goto LAB_0011699f;
   }
   if (lVar9 == lVar7) {
      LAB_001168e3:puVar4 = *(undefined8**)this;
      if (puVar4 == (undefined8*)0x0) {
         LAB_0011699f:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }
      lVar3 = puVar4[-1];
      if (param_1 <= lVar3) goto LAB_001168c9;
   } else {
      if (lVar3 != 0) {
         uVar5 = _realloc(this, lVar9);
         if ((int)uVar5 != 0) {
            return uVar5;
         }
         goto LAB_001168e3;
      }
      puVar2 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar4 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar4;
      lVar3 = 0;
   }
   *(undefined4*)( puVar4 + lVar3 * 3 ) = 0;
   *(undefined1(*) [16])( puVar4 + lVar3 * 3 + 1 ) = (undefined1[16])0x0;
   lVar3 = lVar3 + 1;
   if (lVar3 < param_1) {
      lVar7 = lVar3 * 0x18;
      do {
         lVar3 = lVar3 + 1;
         puVar6 = (undefined4*)( *(long*)this + lVar7 );
         lVar7 = lVar7 + 0x18;
         *puVar6 = 0;
         *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      } while ( param_1 != lVar3 );
   }
   LAB_001168bc:puVar4 = *(undefined8**)this;
   if (puVar4 == (undefined8*)0x0) {
      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   LAB_001168c9:puVar4[-1] = param_1;
   return 0;
}/* Vector<Variant>::append_array(Vector<Variant>) */void Vector<Variant>::append_array(Vector<Variant> *this, long param_2) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   Variant_conflict *this_00;
   if (*(long*)( param_2 + 8 ) == 0) {
      return;
   }
   lVar1 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   if (lVar1 != 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar6 = 0;
         lVar5 = lVar1;
      } else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar5 = lVar1 + lVar6;
      }
      CowData<Variant>::resize<false>((CowData<Variant>*)( this + 8 ), lVar5);
      if (0 < lVar1) {
         lVar6 = lVar6 * 0x18;
         lVar5 = 0;
         do {
            lVar2 = *(long*)( param_2 + 8 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_00116a94:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= lVar5) goto LAB_00116a94;
            lVar4 = lVar5 + 1;
            CowData<Variant>::_copy_on_write((CowData<Variant>*)( this + 8 ));
            this_00 = (Variant_conflict*)( *(long*)( this + 8 ) + lVar6 );
            lVar6 = lVar6 + 0x18;
            Variant::operator =(this_00, (Variant_conflict*)( lVar2 + lVar5 * 0x18 ));
            lVar5 = lVar4;
         } while ( lVar4 != lVar1 );
      }
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<true>(long) */undefined8 CowData<Variant>::resize<true>(CowData<Variant> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined4 *puVar6;
   long lVar7;
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
      lVar3 = 0;
      lVar7 = 0;
   } else {
      lVar3 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar3) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar7 = lVar3 * 0x18;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x18 == 0) {
      LAB_00116dc0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar8 = param_1 * 0x18 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar9 = uVar8 + 1;
   if (lVar9 == 0) goto LAB_00116dc0;
   if (param_1 <= lVar3) {
      puVar4 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar4 != (undefined8*)0x0) {
         if ((ulong)puVar4[-1] <= uVar8) {
            if (lVar9 == lVar7) goto LAB_00116d19;
            uVar5 = _realloc(this, lVar9);
            if ((int)uVar5 != 0) {
               return uVar5;
            }
            goto LAB_00116d0c;
         }
         if (( &Variant::needs_deinit )[*(int*)( puVar4 + uVar8 * 3 )] != '\0') {
            Variant::_clear_internal();
            puVar4 = *(undefined8**)this;
         }
         uVar8 = uVar8 + 1;
      };
      goto LAB_00116def;
   }
   if (lVar9 == lVar7) {
      LAB_00116d33:puVar4 = *(undefined8**)this;
      if (puVar4 == (undefined8*)0x0) {
         LAB_00116def:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }
      lVar3 = puVar4[-1];
      if (param_1 <= lVar3) goto LAB_00116d19;
   } else {
      if (lVar3 != 0) {
         uVar5 = _realloc(this, lVar9);
         if ((int)uVar5 != 0) {
            return uVar5;
         }
         goto LAB_00116d33;
      }
      puVar2 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar4 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar4;
      lVar3 = 0;
   }
   *(undefined4*)( puVar4 + lVar3 * 3 ) = 0;
   *(undefined1(*) [16])( puVar4 + lVar3 * 3 + 1 ) = (undefined1[16])0x0;
   lVar3 = lVar3 + 1;
   if (lVar3 < param_1) {
      lVar7 = lVar3 * 0x18;
      do {
         lVar3 = lVar3 + 1;
         puVar6 = (undefined4*)( *(long*)this + lVar7 );
         lVar7 = lVar7 + 0x18;
         *puVar6 = 0;
         *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      } while ( param_1 != lVar3 );
   }
   LAB_00116d0c:puVar4 = *(undefined8**)this;
   if (puVar4 == (undefined8*)0x0) {
      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   LAB_00116d19:puVar4[-1] = param_1;
   return 0;
}/* WARNING: Removing unreachable block (ram,0x001170d0) *//* WARNING: Removing unreachable block (ram,0x00117200) *//* WARNING: Removing unreachable block (ram,0x00117378) *//* WARNING: Removing unreachable block (ram,0x0011720c) *//* WARNING: Removing unreachable block (ram,0x00117216) *//* WARNING: Removing unreachable block (ram,0x0011735a) *//* WARNING: Removing unreachable block (ram,0x00117222) *//* WARNING: Removing unreachable block (ram,0x0011722c) *//* WARNING: Removing unreachable block (ram,0x0011733c) *//* WARNING: Removing unreachable block (ram,0x00117238) *//* WARNING: Removing unreachable block (ram,0x00117242) *//* WARNING: Removing unreachable block (ram,0x0011731e) *//* WARNING: Removing unreachable block (ram,0x0011724e) *//* WARNING: Removing unreachable block (ram,0x00117258) *//* WARNING: Removing unreachable block (ram,0x00117300) *//* WARNING: Removing unreachable block (ram,0x00117264) *//* WARNING: Removing unreachable block (ram,0x0011726e) *//* WARNING: Removing unreachable block (ram,0x001172e2) *//* WARNING: Removing unreachable block (ram,0x00117276) *//* WARNING: Removing unreachable block (ram,0x00117280) *//* WARNING: Removing unreachable block (ram,0x001172c7) *//* WARNING: Removing unreachable block (ram,0x00117288) *//* WARNING: Removing unreachable block (ram,0x0011729d) *//* WARNING: Removing unreachable block (ram,0x001172a9) *//* String vformat<String, String, char const*, String>(String const&, String const, String const,
   char const* const, String const) */undefined8 *vformat<String,String,char_const*,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4, char *param_5, String_conflict *param_6) {
   Variant_conflict *pVVar1;
   int iVar2;
   int iVar3;
   Variant_conflict *pVVar4;
   long in_FS_OFFSET;
   undefined4 *local_108;
   undefined8 local_100[9];
   Variant_conflict local_b8[24];
   Variant_conflict local_a0[24];
   Variant_conflict local_88[24];
   Variant_conflict local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_b8, param_3);
   Variant::Variant(local_a0, param_4);
   Variant::Variant(local_88, param_5);
   Variant::Variant(local_70, param_6);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_108 = (undefined4*)operator_new(0x40, "");
   *local_108 = 0;
   local_108[8] = 0;
   *(char**)( local_108 + 0xe ) = "container";
   *(undefined1(*) [16])( local_108 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_108 + 10 ) = (undefined1[16])0x0;
   *local_108 = 1;
   Array::resize((Array*)&local_108, 4);
   pVVar4 = local_b8;
   iVar2 = 0;
   do {
      iVar3 = iVar2 + 1;
      pVVar1 = (Variant_conflict*)Array::operator []((Array*)&local_108, iVar2);
      Variant::operator =(pVVar1, pVVar4);
      pVVar4 = pVVar4 + 0x18;
      iVar2 = iVar3;
   } while ( iVar3 != 4 );
   String::sprintf((Array*)local_100, param_2);
   *param_1 = local_100[0];
   pVVar4 = (Variant_conflict*)local_40;
   Array::_unref((Array*)&local_108);
   do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar4 != local_b8 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x00117530) *//* WARNING: Removing unreachable block (ram,0x00117660) *//* WARNING: Removing unreachable block (ram,0x001177d8) *//* WARNING: Removing unreachable block (ram,0x0011766c) *//* WARNING: Removing unreachable block (ram,0x00117676) *//* WARNING: Removing unreachable block (ram,0x001177ba) *//* WARNING: Removing unreachable block (ram,0x00117682) *//* WARNING: Removing unreachable block (ram,0x0011768c) *//* WARNING: Removing unreachable block (ram,0x0011779c) *//* WARNING: Removing unreachable block (ram,0x00117698) *//* WARNING: Removing unreachable block (ram,0x001176a2) *//* WARNING: Removing unreachable block (ram,0x0011777e) *//* WARNING: Removing unreachable block (ram,0x001176ae) *//* WARNING: Removing unreachable block (ram,0x001176b8) *//* WARNING: Removing unreachable block (ram,0x00117760) *//* WARNING: Removing unreachable block (ram,0x001176c4) *//* WARNING: Removing unreachable block (ram,0x001176ce) *//* WARNING: Removing unreachable block (ram,0x00117742) *//* WARNING: Removing unreachable block (ram,0x001176d6) *//* WARNING: Removing unreachable block (ram,0x001176e0) *//* WARNING: Removing unreachable block (ram,0x00117727) *//* WARNING: Removing unreachable block (ram,0x001176e8) *//* WARNING: Removing unreachable block (ram,0x001176fd) *//* WARNING: Removing unreachable block (ram,0x00117709) *//* String vformat<String, String, String>(String const&, String const, String const, String const)
    */undefined8 *vformat<String,String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4, String_conflict *param_5) {
   Variant_conflict *pVVar1;
   int iVar2;
   int iVar3;
   Variant_conflict *pVVar4;
   long in_FS_OFFSET;
   undefined4 *local_f8;
   undefined8 local_f0[9];
   Variant_conflict local_a8[24];
   Variant_conflict local_90[24];
   Variant_conflict local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant_conflict local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_f8 = (undefined4*)operator_new(0x40, "");
   *local_f8 = 0;
   local_f8[8] = 0;
   *(char**)( local_f8 + 0xe ) = "container";
   *(undefined1(*) [16])( local_f8 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_f8 + 10 ) = (undefined1[16])0x0;
   *local_f8 = 1;
   Array::resize((Array*)&local_f8, 3);
   pVVar4 = local_a8;
   iVar2 = 0;
   do {
      iVar3 = iVar2 + 1;
      pVVar1 = (Variant_conflict*)Array::operator []((Array*)&local_f8, iVar2);
      Variant::operator =(pVVar1, pVVar4);
      pVVar4 = pVVar4 + 0x18;
      iVar2 = iVar3;
   } while ( iVar3 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar4 = local_48;
   Array::_unref((Array*)&local_f8);
   do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar4 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x00117990) *//* WARNING: Removing unreachable block (ram,0x00117ac0) *//* WARNING: Removing unreachable block (ram,0x00117c38) *//* WARNING: Removing unreachable block (ram,0x00117acc) *//* WARNING: Removing unreachable block (ram,0x00117ad6) *//* WARNING: Removing unreachable block (ram,0x00117c1a) *//* WARNING: Removing unreachable block (ram,0x00117ae2) *//* WARNING: Removing unreachable block (ram,0x00117aec) *//* WARNING: Removing unreachable block (ram,0x00117bfc) *//* WARNING: Removing unreachable block (ram,0x00117af8) *//* WARNING: Removing unreachable block (ram,0x00117b02) *//* WARNING: Removing unreachable block (ram,0x00117bde) *//* WARNING: Removing unreachable block (ram,0x00117b0e) *//* WARNING: Removing unreachable block (ram,0x00117b18) *//* WARNING: Removing unreachable block (ram,0x00117bc0) *//* WARNING: Removing unreachable block (ram,0x00117b24) *//* WARNING: Removing unreachable block (ram,0x00117b2e) *//* WARNING: Removing unreachable block (ram,0x00117ba2) *//* WARNING: Removing unreachable block (ram,0x00117b36) *//* WARNING: Removing unreachable block (ram,0x00117b40) *//* WARNING: Removing unreachable block (ram,0x00117b87) *//* WARNING: Removing unreachable block (ram,0x00117b48) *//* WARNING: Removing unreachable block (ram,0x00117b5d) *//* WARNING: Removing unreachable block (ram,0x00117b69) *//* String vformat<int, String, String>(String const&, int const, String const, String const) */undefined8 *vformat<int,String,String>(undefined8 *param_1, bool *param_2, int param_3, String_conflict *param_4, String_conflict *param_5) {
   Variant_conflict *pVVar1;
   int iVar2;
   int iVar3;
   Variant_conflict *pVVar4;
   long in_FS_OFFSET;
   undefined4 *local_f8;
   undefined8 local_f0[9];
   Variant_conflict local_a8[24];
   Variant_conflict local_90[24];
   Variant_conflict local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant_conflict local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_f8 = (undefined4*)operator_new(0x40, "");
   *local_f8 = 0;
   local_f8[8] = 0;
   *(char**)( local_f8 + 0xe ) = "container";
   *(undefined1(*) [16])( local_f8 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_f8 + 10 ) = (undefined1[16])0x0;
   *local_f8 = 1;
   Array::resize((Array*)&local_f8, 3);
   pVVar4 = local_a8;
   iVar2 = 0;
   do {
      iVar3 = iVar2 + 1;
      pVVar1 = (Variant_conflict*)Array::operator []((Array*)&local_f8, iVar2);
      Variant::operator =(pVVar1, pVVar4);
      pVVar4 = pVVar4 + 0x18;
      iVar2 = iVar3;
   } while ( iVar3 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar4 = local_48;
   Array::_unref((Array*)&local_f8);
   do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar4 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x00117de8) *//* WARNING: Removing unreachable block (ram,0x00117f18) *//* WARNING: Removing unreachable block (ram,0x00118091) *//* WARNING: Removing unreachable block (ram,0x00117f24) *//* WARNING: Removing unreachable block (ram,0x00117f2e) *//* WARNING: Removing unreachable block (ram,0x00118073) *//* WARNING: Removing unreachable block (ram,0x00117f3a) *//* WARNING: Removing unreachable block (ram,0x00117f44) *//* WARNING: Removing unreachable block (ram,0x00118055) *//* WARNING: Removing unreachable block (ram,0x00117f50) *//* WARNING: Removing unreachable block (ram,0x00117f5a) *//* WARNING: Removing unreachable block (ram,0x00118037) *//* WARNING: Removing unreachable block (ram,0x00117f66) *//* WARNING: Removing unreachable block (ram,0x00117f70) *//* WARNING: Removing unreachable block (ram,0x00118019) *//* WARNING: Removing unreachable block (ram,0x00117f7c) *//* WARNING: Removing unreachable block (ram,0x00117f86) *//* WARNING: Removing unreachable block (ram,0x00117ffb) *//* WARNING: Removing unreachable block (ram,0x00117f8e) *//* WARNING: Removing unreachable block (ram,0x00117f98) *//* WARNING: Removing unreachable block (ram,0x00117fe0) *//* WARNING: Removing unreachable block (ram,0x00117fa0) *//* WARNING: Removing unreachable block (ram,0x00117fb6) *//* WARNING: Removing unreachable block (ram,0x00117fc2) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4) {
   Variant_conflict *pVVar1;
   Variant_conflict *pVVar2;
   long in_FS_OFFSET;
   undefined4 *local_d8;
   undefined8 local_d0[9];
   Variant_conflict local_88[24];
   Variant_conflict local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_d8 = (undefined4*)operator_new(0x40, "");
   *local_d8 = 0;
   *(char**)( local_d8 + 0xe ) = "container";
   local_d8[8] = 0;
   *(undefined1(*) [16])( local_d8 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_d8 + 10 ) = (undefined1[16])0x0;
   *local_d8 = 1;
   Array::resize((Array*)&local_d8, 2);
   pVVar2 = (Variant_conflict*)Array::operator []((Array*)&local_d8, 0);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant_conflict*)Array::operator []((Array*)&local_d8, 1);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant_conflict*)local_40;
   Array::_unref((Array*)&local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x00118210) *//* WARNING: Removing unreachable block (ram,0x00118340) *//* WARNING: Removing unreachable block (ram,0x00118500) *//* WARNING: Removing unreachable block (ram,0x0011834c) *//* WARNING: Removing unreachable block (ram,0x00118356) *//* WARNING: Removing unreachable block (ram,0x001184e0) *//* WARNING: Removing unreachable block (ram,0x00118362) *//* WARNING: Removing unreachable block (ram,0x0011836c) *//* WARNING: Removing unreachable block (ram,0x001184c0) *//* WARNING: Removing unreachable block (ram,0x00118378) *//* WARNING: Removing unreachable block (ram,0x00118382) *//* WARNING: Removing unreachable block (ram,0x001184a0) *//* WARNING: Removing unreachable block (ram,0x0011838e) *//* WARNING: Removing unreachable block (ram,0x00118398) *//* WARNING: Removing unreachable block (ram,0x00118480) *//* WARNING: Removing unreachable block (ram,0x001183a4) *//* WARNING: Removing unreachable block (ram,0x001183ae) *//* WARNING: Removing unreachable block (ram,0x00118460) *//* WARNING: Removing unreachable block (ram,0x001183ba) *//* WARNING: Removing unreachable block (ram,0x001183c4) *//* WARNING: Removing unreachable block (ram,0x00118440) *//* WARNING: Removing unreachable block (ram,0x001183cc) *//* WARNING: Removing unreachable block (ram,0x001183e1) *//* WARNING: Removing unreachable block (ram,0x001183ed) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
   char cVar1;
   Variant_conflict *this;
   long in_FS_OFFSET;
   undefined4 *local_c8;
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant_conflict*)local_78, param_3);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_c8 = (undefined4*)operator_new(0x40, "");
   *local_c8 = 0;
   *(char**)( local_c8 + 0xe ) = "container";
   local_c8[8] = 0;
   *(undefined1(*) [16])( local_c8 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_c8 + 10 ) = (undefined1[16])0x0;
   *local_c8 = 1;
   Array::resize((Array*)&local_c8, 1);
   this(Variant_conflict * Array::operator []((Array*)&local_c8, 0));
   Variant::operator =(this, (Variant_conflict*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::_unref((Array*)&local_c8);
   if (( &Variant::needs_deinit )[(int)local_60] == '\0') {
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
   } else {
      Variant::_clear_internal();
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
   }
   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x001186b8) *//* WARNING: Removing unreachable block (ram,0x001187e8) *//* WARNING: Removing unreachable block (ram,0x00118961) *//* WARNING: Removing unreachable block (ram,0x001187f4) *//* WARNING: Removing unreachable block (ram,0x001187fe) *//* WARNING: Removing unreachable block (ram,0x00118943) *//* WARNING: Removing unreachable block (ram,0x0011880a) *//* WARNING: Removing unreachable block (ram,0x00118814) *//* WARNING: Removing unreachable block (ram,0x00118925) *//* WARNING: Removing unreachable block (ram,0x00118820) *//* WARNING: Removing unreachable block (ram,0x0011882a) *//* WARNING: Removing unreachable block (ram,0x00118907) *//* WARNING: Removing unreachable block (ram,0x00118836) *//* WARNING: Removing unreachable block (ram,0x00118840) *//* WARNING: Removing unreachable block (ram,0x001188e9) *//* WARNING: Removing unreachable block (ram,0x0011884c) *//* WARNING: Removing unreachable block (ram,0x00118856) *//* WARNING: Removing unreachable block (ram,0x001188cb) *//* WARNING: Removing unreachable block (ram,0x0011885e) *//* WARNING: Removing unreachable block (ram,0x00118868) *//* WARNING: Removing unreachable block (ram,0x001188b0) *//* WARNING: Removing unreachable block (ram,0x00118870) *//* WARNING: Removing unreachable block (ram,0x00118886) *//* WARNING: Removing unreachable block (ram,0x00118892) *//* String vformat<int, long>(String const&, int const, long const) */String_conflict *vformat<int,long>(String_conflict *param_1, int param_2, long param_3) {
   Variant_conflict *pVVar1;
   Variant_conflict *pVVar2;
   long in_RCX;
   undefined4 in_register_00000034;
   long in_FS_OFFSET;
   undefined4 *local_d8;
   undefined8 local_d0[9];
   Variant_conflict local_88[24];
   Variant_conflict local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, (int)param_3);
   Variant::Variant(local_70, in_RCX);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_d8 = (undefined4*)operator_new(0x40, "");
   *local_d8 = 0;
   *(char**)( local_d8 + 0xe ) = "container";
   local_d8[8] = 0;
   *(undefined1(*) [16])( local_d8 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_d8 + 10 ) = (undefined1[16])0x0;
   *local_d8 = 1;
   Array::resize((Array*)&local_d8, 2);
   pVVar2 = (Variant_conflict*)Array::operator []((Array*)&local_d8, 0);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant_conflict*)Array::operator []((Array*)&local_d8, 1);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant_conflict*)local_40;
   Array::_unref((Array*)&local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* SortArray<Variant, CallableComparator, true>::adjust_heap(long, long, long, Variant, Variant*)
   const */void SortArray<Variant,CallableComparator,true>::adjust_heap(SortArray<Variant,CallableComparator,true> *this, long param_1, long param_2, long param_3, Variant_conflict *param_5, long param_6) {
   char cVar1;
   long lVar2;
   long lVar3;
   Variant_conflict *pVVar4;
   Variant_conflict *this_00;
   long lVar5;
   long in_FS_OFFSET;
   long local_78;
   int local_58[6];
   long local_40;
   lVar2 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = param_2;
   if (lVar2 < param_3) {
      do {
         pVVar4 = (Variant_conflict*)( param_6 + ( param_1 + lVar2 ) * 0x18 );
         cVar1 = CallableComparator::operator ()((Variant_conflict*)this, pVVar4);
         lVar3 = lVar2 + -1;
         this_00 = (Variant_conflict*)( param_6 + ( lVar2 + -1 + param_1 ) * 0x18 );
         lVar5 = lVar2;
         if (cVar1 == '\0') {
            lVar5 = lVar2 + 1;
            lVar3 = lVar2;
            this_00 = pVVar4;
         }
         lVar2 = lVar5 * 2;
         Variant::operator =((Variant_conflict*)( param_6 + ( local_78 + param_1 ) * 0x18 ), this_00);
         local_78 = lVar3;
      } while ( param_3 != lVar2 && SBORROW8(param_3, lVar2) == param_3 + lVar5 * -2 < 0 );
      pVVar4 = this_00;
      if (param_3 == lVar2) goto LAB_00118b40;
   } else {
      this_00 = (Variant_conflict*)( param_6 + ( param_2 + param_1 ) * 0x18 );
      if (lVar2 != param_3) {
         Variant::Variant((Variant_conflict*)local_58, param_5);
         goto LAB_00118ae7;
      }
      LAB_00118b40:lVar3 = lVar2 + -1;
      pVVar4 = (Variant_conflict*)( param_6 + ( lVar3 + param_1 ) * 0x18 );
      Variant::operator =(this_00, pVVar4);
   }
   Variant::Variant((Variant_conflict*)local_58, param_5);
   lVar2 = ( lVar3 + -1 ) - ( lVar3 + -1 >> 0x3f );
   this_00 = pVVar4;
   while (param_2 < lVar3) {
      lVar5 = lVar2 >> 1;
      pVVar4 = (Variant_conflict*)( param_6 + ( param_1 + lVar5 ) * 0x18 );
      cVar1 = CallableComparator::operator ()((Variant_conflict*)this, pVVar4);
      this_00 = (Variant_conflict*)( param_6 + ( param_1 + lVar3 ) * 0x18 );
      if (cVar1 == '\0') break;
      Variant::operator =(this_00, pVVar4);
      lVar2 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
      lVar3 = lVar5;
      this_00 = pVVar4;
   };
   LAB_00118ae7:Variant::operator =(this_00, (Variant_conflict*)local_58);
   if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SortArray<Variant, CallableComparator, true>::partial_sort(long, long, long, Variant*) const */void SortArray<Variant,CallableComparator,true>::partial_sort(SortArray<Variant,CallableComparator,true> *this, long param_1, long param_2, long param_3, Variant_conflict *param_4) {
   bool bVar1;
   char cVar2;
   Variant_conflict *pVVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[6];
   long local_40;
   lVar5 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar5 < 2) {
      if (param_2 <= param_3) goto LAB_00118e39;
      LAB_00118c92:lVar4 = param_3;
      do {
         while (true) {
            pVVar3 = param_4 + lVar4 * 0x18;
            cVar2 = CallableComparator::operator ()((Variant_conflict*)this, pVVar3);
            if (cVar2 != '\0') break;
            LAB_00118cc8:lVar4 = lVar4 + 1;
            if (param_2 <= lVar4) goto LAB_00118d70;
         };
         Variant::Variant((Variant_conflict*)local_78, pVVar3);
         Variant::operator =(pVVar3, param_4 + param_1 * 0x18);
         Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
         adjust_heap(this, param_1, 0, lVar5, (Variant_conflict*)local_58, param_4);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (( &Variant::needs_deinit )[local_78[0]] == '\0') goto LAB_00118cc8;
         lVar4 = lVar4 + 1;
         Variant::_clear_internal();
      } while ( lVar4 < param_2 );
      LAB_00118d70:if (lVar5 < 2) goto LAB_00118e39;
   } else {
      lVar4 = lVar5 + -2 >> 1;
      pVVar3 = param_4 + ( param_1 + lVar4 ) * 0x18;
      while (true) {
         Variant::Variant((Variant_conflict*)local_58, pVVar3);
         adjust_heap(this, param_1, lVar4, lVar5, (Variant_conflict*)local_58, param_4);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         pVVar3 = pVVar3 + -0x18;
         if (lVar4 == 0) break;
         lVar4 = lVar4 + -1;
      };
      if (param_3 < param_2) goto LAB_00118c92;
   }
   pVVar3 = param_4 + param_3 * 0x18 + -0x18;
   lVar5 = ( param_3 + -1 ) - param_1;
   do {
      Variant::Variant((Variant_conflict*)local_78, pVVar3);
      Variant::operator =(pVVar3, param_4 + param_1 * 0x18);
      Variant::Variant((Variant_conflict*)local_58, (Variant_conflict*)local_78);
      adjust_heap(this, param_1, 0, lVar5, (Variant_conflict*)local_58, param_4);
      if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      pVVar3 = pVVar3 + -0x18;
      bVar1 = 1 < lVar5;
      lVar5 = lVar5 + -1;
   } while ( bVar1 );
   LAB_00118e39:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SortArray<Variant, CallableComparator, true>::introsort(long, long, Variant*, long) const */void SortArray<Variant,CallableComparator,true>::introsort(SortArray<Variant,CallableComparator,true> *this, long param_1, long param_2, Variant_conflict *param_3, long param_4) {
   Variant_conflict *pVVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   char cVar4;
   long lVar5;
   Variant_conflict *pVVar6;
   Variant_conflict *pVVar7;
   long in_FS_OFFSET;
   long local_b0;
   long local_90;
   int local_78[10];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = param_2 - param_1;
   if (lVar5 < 0x11) {
      LAB_001191a6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      local_b0 = param_2;
      if (param_4 != 0) {
         pVVar1 = param_3 + param_1 * 0x18;
         local_90 = param_4;
         LAB_00118f28:local_90 = local_90 + -1;
         pVVar7 = param_3 + ( ( lVar5 >> 1 ) + param_1 ) * 0x18;
         cVar4 = CallableComparator::operator ()((Variant_conflict*)this, pVVar1);
         if (cVar4 == '\0') {
            cVar4 = CallableComparator::operator ()((Variant_conflict*)this, pVVar1);
            pVVar6 = pVVar1;
            if (cVar4 != '\0') goto LAB_00118f97;
            cVar4 = CallableComparator::operator ()((Variant_conflict*)this, pVVar7);
         } else {
            cVar4 = CallableComparator::operator ()((Variant_conflict*)this, pVVar7);
            pVVar6 = pVVar7;
            if (cVar4 != '\0') goto LAB_00118f97;
            cVar4 = CallableComparator::operator ()((Variant_conflict*)this, pVVar1);
            pVVar7 = pVVar1;
         }
         pVVar6 = pVVar7;
         if (cVar4 != '\0') {
            pVVar6 = param_3 + param_2 * 0x18 + -0x18;
         }
         LAB_00118f97:Variant::Variant((Variant_conflict*)local_78, pVVar6);
         pVVar7 = pVVar1;
         local_b0 = param_1;
         lVar5 = param_2;
         do {
            cVar4 = CallableComparator::operator ()((Variant_conflict*)this, pVVar7);
            if (cVar4 == '\0') {
               LAB_00118ff2:lVar5 = lVar5 + -1;
               pVVar6 = param_3 + lVar5 * 0x18;
               while (cVar4 = CallableComparator::operator ()((Variant_conflict*)this, (Variant_conflict*)local_78),cVar4 != '\0') {
                  if (param_1 == lVar5) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     break;
                  }
                  lVar5 = lVar5 + -1;
                  pVVar6 = pVVar6 + -0x18;
               };
               if (lVar5 <= local_b0) goto LAB_001190bf;
               local_50 = *(undefined8*)( pVVar7 + 8 );
               uStack_48 = *(undefined8*)( pVVar7 + 0x10 );
               uVar2 = *(undefined4*)pVVar7;
               *(undefined4*)pVVar7 = 0;
               if (pVVar7 == pVVar6) {
                  if (Variant::needs_deinit != '\0') {
                     Variant::_clear_internal();
                  }
               } else {
                  *(undefined4*)pVVar7 = *(undefined4*)pVVar6;
                  uVar3 = *(undefined8*)( pVVar6 + 0x10 );
                  *(undefined8*)( pVVar7 + 8 ) = *(undefined8*)( pVVar6 + 8 );
                  *(undefined8*)( pVVar7 + 0x10 ) = uVar3;
               }
               *(undefined4*)pVVar6 = uVar2;
               *(undefined8*)( pVVar6 + 8 ) = local_50;
               *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
            } else if (param_2 + -1 == local_b0) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_00118ff2;
            }
            pVVar7 = pVVar7 + 0x18;
            local_b0 = local_b0 + 1;
         } while ( true );
      }
      LAB_001191cd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(this, param_1, local_b0, local_b0, param_3);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001190bf:if (( &Variant::needs_deinit )[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   introsort(this, local_b0, param_2, param_3, local_90);
   lVar5 = local_b0 - param_1;
   if (lVar5 < 0x11) goto LAB_001191a6;
   param_2 = local_b0;
   if (local_90 == 0) goto LAB_001191cd;
   goto LAB_00118f28;
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<String>::~PackedArrayRef() */void Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<float>::~PackedArrayRef() */void Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<int>::~PackedArrayRef() */void Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<Color>::~PackedArrayRef() */void Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */void Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */void Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<double>::~PackedArrayRef() */void Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRef<long>::~PackedArrayRef() */void Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* Variant::PackedArrayRefBase::~PackedArrayRefBase() */void Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
