/* WARNING: Type propagation algorithm not settling *//* void sort_r_simple<>(void*, unsigned long, unsigned long, int (*)(void const*, void const*)) */void sort_r_simple<>(void *param_1, ulong param_2, ulong param_3, _func_int_void_ptr_void_ptr *param_4) {
   undefined1 uVar1;
   int iVar2;
   undefined1 *puVar3;
   undefined1 *puVar4;
   ulong uVar5;
   undefined1 *puVar6;
   undefined1 *puVar7;
   ulong uVar8;
   undefined1 *puVar9;
   ulong uVar10;
   undefined1 *puVar11;
   undefined1 *puVar12;
   undefined1 *puVar13;
   undefined1 *local_58;
   undefined1 *local_50;
   undefined1 *local_40;
   local_58 = (undefined1*)( (long)param_1 + param_3 * param_2 );
   local_40 = (undefined1*)param_1;
   puVar9 = (undefined1*)param_1;
   if (param_2 < 10) {
      joined_r0x00100398:do {
         do {
            param_1 = (void*)( (long)param_1 + param_3 );
            if (local_58 <= param_1) {
               return;
            }

            puVar7 = (undefined1*)param_1;
         }
 while ( param_1 <= puVar9 );
         do {
            puVar13 = puVar7 + -param_3;
            iVar2 = ( *param_4 )(puVar13, puVar7);
            if (iVar2 < 1) break;
            puVar12 = puVar13;
            puVar6 = puVar7;
            if (puVar13 < puVar7) {
               do {
                  uVar1 = *puVar12;
                  puVar4 = puVar12 + 1;
                  *puVar12 = *puVar6;
                  *puVar6 = uVar1;
                  puVar12 = puVar4;
                  puVar6 = puVar6 + 1;
               }
 while ( puVar4 != puVar7 );
            }

            puVar7 = puVar13;
         }
 while ( puVar9 < puVar13 );
      }
 while ( true );
   }

   LAB_00100041:uVar5 = ( param_2 - 1 ) * param_3;
   puVar9 = local_40 + param_3;
   puVar7 = local_40 + ( param_2 >> 1 ) * param_3;
   puVar6 = local_40 + uVar5;
   puVar13 = puVar6 + -param_3;
   iVar2 = ( *param_4 )(puVar9, puVar7);
   puVar12 = puVar7;
   if (iVar2 < 1) {
      puVar12 = puVar9;
      puVar9 = puVar7;
   }

   iVar2 = ( *param_4 )(puVar9, puVar13);
   if (( 0 < iVar2 ) && ( iVar2 = ( *param_4 )(puVar12, puVar13) ),puVar9 = puVar13,0 < iVar2) {
      puVar9 = puVar12;
   }

   if (( puVar9 != puVar6 ) && ( puVar7 = puVar9 + param_3 ),puVar13 = puVar6,puVar9 < puVar7) {
      do {
         uVar1 = *puVar9;
         puVar12 = puVar9 + 1;
         *puVar9 = *puVar13;
         *puVar13 = uVar1;
         puVar13 = puVar13 + 1;
         puVar9 = puVar12;
      }
 while ( puVar7 != puVar12 );
   }

   puVar9 = puVar6;
   puVar7 = local_40;
   puVar13 = local_40;
   local_50 = puVar6;
   if (local_40 < puVar6) {
      LAB_001000f3:do {
         iVar2 = ( *param_4 )(puVar13, puVar6);
         if (0 < iVar2) {
            puVar12 = puVar9;
            if (puVar13 < puVar9) {
               do {
                  puVar9 = puVar12 + -param_3;
                  iVar2 = ( *param_4 )(puVar9, puVar6);
                  if (iVar2 == 0) {
                     local_50 = local_50 + -param_3;
                     if (( puVar9 < local_50 ) && ( puVar4 = puVar9 ),puVar11 = local_50,puVar9 < puVar12) {
                        do {
                           uVar1 = *puVar4;
                           puVar3 = puVar4 + 1;
                           *puVar4 = *puVar11;
                           *puVar11 = uVar1;
                           puVar4 = puVar3;
                           puVar11 = puVar11 + 1;
                        }
 while ( puVar3 != puVar12 );
                     }

                  }
 else if (iVar2 < 0) goto code_r0x001002aa;
                  puVar12 = puVar9;
                  if (puVar9 <= puVar13) break;
               }
 while ( true );
            }

            break;
         }

         puVar12 = puVar7;
         if (( ( iVar2 == 0 ) && ( puVar12 = puVar7 + param_3 ),puVar7 < puVar13 )) {
            do {
               uVar1 = *puVar7;
               puVar11 = puVar7 + 1;
               *puVar7 = *puVar4;
               *puVar4 = uVar1;
               puVar4 = puVar4 + 1;
               puVar7 = puVar11;
            }
 while ( puVar11 != puVar12 );
         }

         puVar7 = puVar12;
         puVar13 = puVar13 + param_3;
      }
 while ( puVar13 < puVar9 );
      goto LAB_0010014a;
   }

   sort_r_simple<>(local_40, uVar5 / param_3, param_3, param_4);
   param_1 = local_58;
   puVar9 = local_58;
   goto joined_r0x00100398;
   code_r0x001002aa:puVar12 = puVar13 + param_3;
   if (( puVar13 < puVar9 ) && ( puVar4 = puVar13 < puVar12 )) {
      do {
         uVar1 = *puVar13;
         puVar11 = puVar13 + 1;
         *puVar13 = *puVar4;
         *puVar4 = uVar1;
         puVar4 = puVar4 + 1;
         puVar13 = puVar11;
      }
 while ( puVar11 != puVar12 );
   }

   puVar13 = puVar12;
   if (puVar9 <= puVar12) goto LAB_0010014a;
   goto LAB_001000f3;
   LAB_0010014a:uVar5 = (long)puVar9 - (long)puVar7;
   uVar8 = (long)local_50 - (long)puVar9;
   uVar10 = (long)local_58 - (long)local_50;
   param_1 = local_58 + -uVar8;
   if (( puVar7 != local_40 ) && ( uVar5 != 0 )) {
      puVar13 = local_40 + uVar5;
      if (uVar5 < ( ulong )((long)puVar7 - (long)local_40)) {
         puVar12 = local_40;
         if (local_40 < puVar13) {
            do {
               uVar1 = *puVar12;
               puVar6 = puVar12 + 1;
               *puVar12 = *puVar7;
               *puVar7 = uVar1;
               puVar12 = puVar6;
               puVar7 = puVar7 + 1;
            }
 while ( puVar6 != puVar13 );
         }

      }
 else {
         puVar12 = local_40;
         if (local_40 < puVar7) {
            do {
               uVar1 = *puVar12;
               puVar6 = puVar12 + 1;
               *puVar12 = *puVar13;
               *puVar13 = uVar1;
               puVar13 = puVar13 + 1;
               puVar12 = puVar6;
            }
 while ( puVar7 != puVar6 );
         }

      }

   }

   if (uVar8 != 0 && uVar10 != 0) {
      puVar7 = puVar9 + uVar10;
      if (uVar10 < uVar8) {
         if (puVar9 < puVar7) {
            do {
               uVar1 = *puVar9;
               puVar13 = puVar9 + 1;
               *puVar9 = *local_50;
               *local_50 = uVar1;
               local_50 = local_50 + 1;
               puVar9 = puVar13;
            }
 while ( puVar13 != puVar7 );
         }

      }
 else if (puVar9 < local_50) {
         do {
            uVar1 = *puVar9;
            puVar13 = puVar9 + 1;
            *puVar9 = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            puVar9 = puVar13;
         }
 while ( puVar13 != local_50 );
      }

   }

   sort_r_simple<>(local_40, uVar5 / param_3, param_3, param_4);
   param_2 = uVar8 / param_3;
   local_58 = (undefined1*)( (long)param_1 + param_2 * param_3 );
   local_40 = (undefined1*)param_1;
   puVar9 = (undefined1*)param_1;
   if (param_2 < 10) goto joined_r0x00100398;
   goto LAB_00100041;
}
/* hb_ot_map_t::collect_lookups(unsigned int, hb_set_t*) const */void hb_ot_map_t::collect_lookups(hb_ot_map_t *this, uint param_1, hb_set_t *param_2) {
   ushort uVar1;
   undefined4 *puVar2;
   long lVar3;
   if (*(int*)( this + (ulong)param_1 * 0x10 + 0x24 ) != 0) {
      lVar3 = 0;
      do {
         uVar1 = *(ushort*)( *(long*)( this + (ulong)param_1 * 0x10 + 0x28 ) + lVar3 * 0xc );
         if (param_2[0x40] == (hb_set_t)0x0) {
            if (param_2[0x10] != (hb_set_t)0x0) {
               *(undefined4*)( param_2 + 0x14 ) = 0xffffffff;
               puVar2 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)( param_2 + 0x10 ), (uint)uVar1, true);
               if (puVar2 != (undefined4*)0x0) {
                  *(ulong*)( puVar2 + ( ulong )(uVar1 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar2 + ( ulong )(uVar1 >> 6 & 7) * 2 + 2 ) | 1L << ( (byte)uVar1 & 0x3f );
                  *puVar2 = 0xffffffff;
               }

            }

         }
 else if (param_2[0x10] != (hb_set_t)0x0) {
            puVar2 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)( param_2 + 0x10 ), (uint)uVar1, false);
            if (puVar2 != (undefined4*)0x0) {
               *(undefined4*)( param_2 + 0x14 ) = 0xffffffff;
               *(ulong*)( puVar2 + ( ulong )(uVar1 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar2 + ( ulong )(uVar1 >> 6 & 7) * 2 + 2 ) & ~(1L << ((byte)uVar1 & 0x3f));
               *puVar2 = 0xffffffff;
            }

         }

         lVar3 = lVar3 + 1;
      }
 while ( (uint)lVar3 < *(uint*)( this + (ulong)param_1 * 0x10 + 0x24 ) );
   }

   return;
}
/* hb_ot_map_builder_t::hb_ot_map_builder_t(hb_face_t*, hb_segment_properties_t const&) */void hb_ot_map_builder_t::hb_ot_map_builder_t(hb_ot_map_builder_t *this, hb_face_t *param_1, hb_segment_properties_t *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   undefined4 local_40;
   undefined4 local_3c;
   undefined1 local_38[12];
   undefined1 local_2c[12];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   puVar6 = (undefined8*)( ( ulong )(this + 0x10) & 0xfffffffffffffff8 );
   for (uVar5 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x10) & 0xfffffffffffffff8 ) ) + 0x80U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }

   *(hb_face_t**)this = param_1;
   local_40 = 3;
   uVar1 = *(undefined8*)( param_2 + 8 );
   uVar2 = *(undefined8*)( param_2 + 0x10 );
   uVar3 = *(undefined8*)( param_2 + 0x18 );
   local_3c = 3;
   *(undefined8*)( this + 8 ) = *(undefined8*)param_2;
   *(undefined8*)( this + 0x10 ) = uVar1;
   *(undefined8*)( this + 0x18 ) = uVar2;
   *(undefined8*)( this + 0x20 ) = uVar3;
   hb_ot_tags_from_script_and_language(*(undefined4*)( this + 0xc ), *(undefined8*)( this + 0x10 ), &local_40, local_38, &local_3c, local_2c);
   iVar4 = hb_ot_layout_table_select_script(*(undefined8*)this, 0x47535542, local_40, local_38, this + 0x38, this + 0x2c);
   this[0x34] = ( hb_ot_map_builder_t )(iVar4 != 0);
   hb_ot_layout_script_select_language(*(undefined8*)this, 0x47535542, *(undefined4*)( this + 0x38 ), local_3c, local_2c, this + 0x40);
   iVar4 = hb_ot_layout_table_select_script(*(undefined8*)this, 0x47504f53, local_40, local_38, this + 0x3c, this + 0x30);
   this[0x35] = ( hb_ot_map_builder_t )(iVar4 != 0);
   hb_ot_layout_script_select_language(*(undefined8*)this, 0x47504f53, *(undefined4*)( this + 0x3c ), local_3c, local_2c, this + 0x44);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* hb_ot_map_builder_t::~hb_ot_map_builder_t() */void hb_ot_map_builder_t::~hb_ot_map_builder_t(hb_ot_map_builder_t *this) {
   if (*(int*)( this + 0x50 ) != 0) {
      free(*(void**)( this + 0x58 ));
   }

   *(undefined4*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   if (*(int*)( this + 0x60 ) != 0) {
      free(*(void**)( this + 0x68 ));
   }

   *(undefined4*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   if (*(int*)( this + 0x70 ) != 0) {
      free(*(void**)( this + 0x78 ));
   }

   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   if (*(int*)( this + 0x60 ) != 0) {
      free(*(void**)( this + 0x68 ));
   }

   if (*(int*)( this + 0x50 ) == 0) {
      return;
   }

   free(*(void**)( this + 0x58 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_ot_map_builder_t::add_feature(unsigned int, hb_ot_map_feature_flags_t, unsigned int) */void hb_ot_map_builder_t::add_feature(hb_ot_map_builder_t *this, int param_1, uint param_3, uint param_4) {
   uint uVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined8 *puVar4;
   void *pvVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   if (param_1 == 0) {
      return;
   }

   uVar6 = *(uint*)( this + 0x50 );
   uVar1 = *(uint*)( this + 0x54 );
   if (-1 < (int)uVar6) {
      uVar7 = uVar1 + 1;
      if ((int)( uVar1 + 1 ) < 0) {
         uVar7 = 0;
      }

      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
         LAB_001007bc:pvVar5 = *(void**)( this + 0x58 );
         LAB_001007c0:if (uVar1 < uVar7) {
            uVar6 = ( uVar7 - uVar1 ) * 0x1c;
            if (uVar6 != 0) {
               memset((void*)( (long)pvVar5 + (ulong)uVar1 * 0x1c ), 0, (ulong)uVar6);
               pvVar5 = *(void**)( this + 0x58 );
            }

         }

         *(uint*)( this + 0x54 ) = uVar7;
         puVar4 = (undefined8*)( (long)pvVar5 + ( ulong )(uVar7 - 1) * 0x1c );
         goto LAB_00100802;
      }

      do {
         uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
      }
 while ( uVar8 < uVar7 );
      if (uVar8 < 0x924924a) {
         pvVar5 = realloc(*(void**)( this + 0x58 ), (ulong)uVar8 * 0x1c);
         if (pvVar5 != (void*)0x0) {
            *(void**)( this + 0x58 ) = pvVar5;
            uVar1 = *(uint*)( this + 0x54 );
            *(uint*)( this + 0x50 ) = uVar8;
            goto LAB_001007c0;
         }

         if (uVar8 <= *(uint*)( this + 0x50 )) {
            uVar1 = *(uint*)( this + 0x54 );
            goto LAB_001007bc;
         }

         *(uint*)( this + 0x50 ) = ~*(uint *)(this + 0x50);
      }
 else {
         *(uint*)( this + 0x50 ) = ~uVar6;
      }

   }

   uVar3 = _hb_ot_layout_language_find_feature;
   uVar2 = _DAT_0010304c;
   _hb_ot_layout_language_find_feature = __hb_CrapPool;
   uRam000000000010305c = CONCAT44(_hb_ot_layout_table_get_lookup_count, _DAT_00103054);
   puVar4 = (undefined8*)&_hb_CrapPool;
   uVar7 = *(uint*)( this + 0x54 );
   __hb_CrapPool = (undefined4)__hb_NullPool;
   _DAT_0010304c = ( undefined4 )((ulong)__hb_NullPool >> 0x20);
   _DAT_00103054 = uVar2;
   _hb_ot_layout_table_get_lookup_count = uVar3;
   LAB_00100802:uVar6 = param_3 & 1;
   if (( param_3 & 1 ) != 0) {
      uVar6 = param_4;
   }

   *puVar4 = CONCAT44(uVar7, param_1);
   puVar4[1] = CONCAT44(param_3, param_4);
   puVar4[2] = CONCAT44(*(undefined4*)( this + 0x48 ), uVar6);
   *(undefined4*)( puVar4 + 3 ) = *(undefined4*)( this + 0x4c );
   return;
}
/* hb_ot_map_builder_t::has_feature(unsigned int) */bool hb_ot_map_builder_t::has_feature(hb_ot_map_builder_t *this, uint param_1) {
   int iVar1;
   bool bVar2;
   iVar1 = hb_ot_layout_language_find_feature(*(undefined8*)this, 0x47535542, *(undefined4*)( this + 0x38 ), *(undefined4*)( this + 0x40 ), param_1, 0);
   if (iVar1 == 0) {
      iVar1 = hb_ot_layout_language_find_feature(*(undefined8*)this, 0x47504f53, *(undefined4*)( this + 0x3c ), *(undefined4*)( this + 0x44 ), param_1, 0);
      bVar2 = iVar1 != 0;
   }
 else {
      bVar2 = true;
   }

   return bVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_ot_map_builder_t::add_lookups(hb_ot_map_t&, unsigned int, unsigned int, unsigned int, unsigned
   int, bool, bool, bool, bool, unsigned int) */void hb_ot_map_builder_t::add_lookups(hb_ot_map_builder_t *this, hb_ot_map_t *param_1, uint param_2, uint param_3, uint param_4, uint param_5, bool param_6, bool param_7, bool param_8, bool param_9, uint param_10) {
   undefined4 uVar1;
   uint uVar2;
   uint uVar3;
   void *pvVar4;
   uint uVar5;
   uint uVar6;
   undefined2 *puVar7;
   uint uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   uint uVar12;
   long in_FS_OFFSET;
   int local_104;
   uint local_cc;
   uint local_c8[34];
   long local_40;
   uVar10 = (ulong)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined4*)( (long)&table_tags + uVar10 * 4 );
   uVar3 = hb_ot_layout_table_get_lookup_count(*(undefined8*)this);
   local_104 = 0;
   uVar8 = ( uint )(byte)(param_7 * '\x02' | param_6) | (uint)param_8 << 2;
   do {
      local_cc = 0x20;
      hb_ot_layout_feature_with_variations_get_lookups(*(undefined8*)this, uVar1, param_3, param_4, local_104, &local_cc, local_c8);
      if (local_cc == 0) break;
      lVar9 = 0;
      do {
         if (local_c8[lVar9] < uVar3) {
            uVar5 = *(uint*)( param_1 + uVar10 * 0x10 + 0x20 );
            uVar2 = *(uint*)( param_1 + uVar10 * 0x10 + 0x24 );
            if ((int)uVar5 < 0) {
               LAB_00100c3e:puVar7 = (undefined2*)&_hb_CrapPool;
               __hb_CrapPool = (undefined4)__hb_NullPool;
               _hb_ot_layout_language_find_feature = __hb_CrapPool;
               __hb_CrapPool = __hb_NullPool;
            }
 else {
               uVar12 = uVar2 + 1;
               if ((int)uVar12 < 0) {
                  uVar12 = 0;
               }

               uVar6 = uVar5;
               if (uVar5 < uVar12) {
                  do {
                     uVar6 = ( uVar6 >> 1 ) + 8 + uVar6;
                  }
 while ( uVar6 < uVar12 );
                  if (0x15555555 < uVar6) {
                     *(uint*)( param_1 + uVar10 * 0x10 + 0x20 ) = ~uVar5;
                     goto LAB_00100c3e;
                  }

                  pvVar4 = realloc(*(void**)( param_1 + ( uVar10 + 2 ) * 0x10 + 8 ), (ulong)uVar6 * 0xc);
                  uVar8 = uVar8 & 0xff;
                  if (pvVar4 == (void*)0x0) {
                     if (*(uint*)( param_1 + uVar10 * 0x10 + 0x20 ) < uVar6) {
                        *(uint*)( param_1 + uVar10 * 0x10 + 0x20 ) = ~*(uint *)(param_1 + uVar10 * 0x10 + 0x20);
                        goto LAB_00100c3e;
                     }

                  }
 else {
                     *(void**)( param_1 + uVar10 * 0x10 + 0x28 ) = pvVar4;
                     *(uint*)( param_1 + uVar10 * 0x10 + 0x20 ) = uVar6;
                  }

                  uVar2 = *(uint*)( param_1 + uVar10 * 0x10 + 0x24 );
               }

               lVar11 = *(long*)( param_1 + uVar10 * 0x10 + 0x28 );
               if (uVar2 < uVar12) {
                  uVar5 = ( uVar12 - uVar2 ) * 0xc;
                  if (uVar5 != 0) {
                     memset((void*)( lVar11 + (ulong)uVar2 * 0xc ), 0, (ulong)uVar5);
                     uVar8 = uVar8 & 0xff;
                     lVar11 = *(long*)( param_1 + uVar10 * 0x10 + 0x28 );
                  }

               }

               *(uint*)( param_1 + uVar10 * 0x10 + 0x24 ) = uVar12;
               puVar7 = (undefined2*)( lVar11 + ( ulong )(uVar12 - 1) * 0xc );
            }

            *(uint*)( puVar7 + 2 ) = param_5;
            uVar5 = local_c8[lVar9];
            *(uint*)( puVar7 + 4 ) = param_10;
            *puVar7 = (short)uVar5;
            *(byte*)( puVar7 + 1 ) = ( param_9 << 3 | (byte)uVar8 ) & 0xf | *(byte*)( puVar7 + 1 ) & 0xf0;
         }

         lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < local_cc );
      local_104 = local_104 + local_cc;
   }
 while ( local_cc == 0x20 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* hb_ot_map_builder_t::add_pause(unsigned int, bool (*)(hb_ot_shape_plan_t const*, hb_font_t*,
   hb_buffer_t*)) */void hb_ot_map_builder_t::add_pause(hb_ot_map_builder_t *this, uint param_1, _func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *param_2) {
   int iVar1;
   int *piVar2;
   long lVar3;
   lVar3 = (ulong)param_1 + 0x10;
   piVar2 = (int*)hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push((hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>*)( this + ( (ulong)param_1 + 6 ) * 0x10 ));
   iVar1 = *(int*)( this + lVar3 * 4 + 8 );
   *(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr**)( piVar2 + 2 ) = param_2;
   *piVar2 = iVar1;
   *(int*)( this + lVar3 * 4 + 8 ) = iVar1 + 1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_ot_map_builder_t::compile(hb_ot_map_t&, hb_ot_shape_plan_key_t const&) */void hb_ot_map_builder_t::compile(hb_ot_map_builder_t *this, hb_ot_map_t *param_1, hb_ot_shape_plan_key_t *param_2) {
   uint *puVar1;
   short *psVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   long lVar7;
   pthread_mutex_t *__mutex;
   code *pcVar8;
   char cVar9;
   char cVar10;
   uint uVar11;
   uint uVar12;
   int *piVar13;
   int *piVar14;
   void *pvVar15;
   uint *puVar16;
   undefined8 *puVar17;
   int *piVar18;
   short *psVar19;
   short *psVar20;
   short *psVar21;
   undefined4 *puVar22;
   ulong uVar23;
   long lVar24;
   uint *puVar25;
   byte bVar26;
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   int iVar30;
   uint *puVar31;
   long lVar32;
   uint *puVar33;
   byte bVar34;
   uint uVar35;
   undefined *puVar36;
   long in_FS_OFFSET;
   hb_vector_t<hb_ot_map_t::stage_map_t,false> *phStack_100;
   hb_ot_map_builder_t *local_f8;
   undefined8 local_c8;
   uint local_c0;
   undefined1 local_bc[4];
   uint local_b8;
   undefined1 local_b4[4];
   uint auStack_b0[26];
   uint local_48[2];
   long local_40;
   uVar3 = *(undefined4*)( this + 0x40 );
   uVar4 = *(undefined4*)( this + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *(undefined4*)( this + 0x2c );
   *(undefined4*)( param_1 + 0xc ) = 0x80000000;
   *(undefined4*)param_1 = uVar5;
   uVar6 = *(undefined8*)this;
   param_1[8] = *(hb_ot_map_t*)( this + 0x34 );
   local_c8 = 0;
   hb_ot_layout_language_get_required_feature(uVar6, 0x47535542, uVar4, uVar3);
   uVar3 = *(undefined4*)( this + 0x44 );
   uVar4 = *(undefined4*)( this + 0x3c );
   uVar6 = *(undefined8*)this;
   *(undefined4*)( param_1 + 4 ) = *(undefined4*)( this + 0x30 );
   param_1[9] = *(hb_ot_map_t*)( this + 0x35 );
   hb_ot_layout_language_get_required_feature(uVar6, 0x47504f53, uVar4, uVar3, local_bc, local_b4);
   uVar12 = *(uint*)( this + 0x54 );
   if (uVar12 == 0) goto LAB_00100ec3;
   if (this[0x28] == (hb_ot_map_builder_t)0x0) {
      sort_r_simple<>(*(void**)( this + 0x58 ), (ulong)uVar12, 0x1c, feature_info_t::cmp);
      uVar12 = *(uint*)( this + 0x54 );
      pvVar15 = *(void**)( this + 0x58 );
   }
 else {
      pvVar15 = *(void**)( this + 0x58 );
   }

   if (uVar12 < 2) goto LAB_00100ec3;
   uVar23 = 0;
   piVar18 = (int*)( (long)pvVar15 + ( ulong )(uVar12 - 2) * 0x1c + 0x38 );
   piVar14 = (int*)( (long)pvVar15 + 0x1c );
   uVar29 = 0;
   do {
      while (true) {
         uVar27 = (uint)uVar29;
         piVar13 = (int*)( (long)pvVar15 + uVar23 * 0x1c );
         if (*piVar14 != *piVar13) break;
         uVar35 = piVar14[3];
         uVar11 = piVar13[3];
         if (( uVar35 & 1 ) == 0) {
            if (( uVar11 & 1 ) != 0) {
               uVar11 = uVar11 ^ 1;
               piVar13[3] = uVar11;
               uVar35 = piVar14[3];
            }

            uVar28 = piVar13[2];
            if ((uint)piVar13[2] < (uint)piVar14[2]) {
               uVar28 = piVar14[2];
            }

            piVar13[2] = uVar28;
         }
 else {
            *(ulong*)( piVar13 + 2 ) = CONCAT44(uVar11, piVar14[2]) | 0x100000000;
            piVar13[4] = piVar14[4];
            uVar35 = piVar14[3];
            uVar11 = uVar11 | 1;
         }

         uVar28 = piVar14[5];
         piVar13[3] = uVar35 & 2 | uVar11;
         uVar11 = piVar13[5];
         if (uVar28 < (uint)piVar13[5]) {
            uVar11 = uVar28;
         }

         piVar13[5] = uVar11;
         uVar11 = piVar13[6];
         if ((uint)piVar14[6] < (uint)piVar13[6]) {
            uVar11 = piVar14[6];
         }

         piVar14 = piVar14 + 7;
         piVar13[6] = uVar11;
         if (piVar18 == piVar14) goto LAB_00100e5e;
      }
;
      uVar27 = uVar27 + 1;
      uVar23 = (ulong)uVar27;
      uVar6 = *(undefined8*)( piVar14 + 2 );
      piVar13 = piVar14 + 7;
      puVar17 = (undefined8*)( (long)pvVar15 + uVar23 * 0x1c );
      *puVar17 = *(undefined8*)piVar14;
      puVar17[1] = uVar6;
      uVar6 = *(undefined8*)( piVar14 + 5 );
      *(undefined8*)( (long)puVar17 + 0xc ) = *(undefined8*)( piVar14 + 3 );
      *(undefined8*)( (long)puVar17 + 0x14 ) = uVar6;
      piVar14 = piVar13;
      uVar29 = uVar23;
   }
 while ( piVar18 != piVar13 );
   LAB_00100e5e:uVar27 = uVar27 + 1;
   uVar11 = 0;
   if (-1 < (int)uVar27) {
      uVar11 = uVar27;
   }

   if (uVar12 <= uVar11) goto LAB_00100ec3;
   uVar12 = *(uint*)( this + 0x50 );
   *(uint*)( this + 0x54 ) = uVar11;
   if ((int)uVar12 < 0) goto LAB_00100ec3;
   if (uVar12 < uVar11) {
      if ((int)uVar27 < 0x924924a) {
         LAB_00100e8e:pvVar15 = realloc(pvVar15, (long)(int)uVar11 * 0x1c);
         if (pvVar15 != (void*)0x0) {
            LAB_00100ebb:*(void**)( this + 0x58 ) = pvVar15;
            *(uint*)( this + 0x50 ) = uVar11;
            goto LAB_00100ec3;
         }

         uVar12 = *(uint*)( this + 0x50 );
         if (uVar11 <= uVar12) goto LAB_00100ec3;
      }

   }
 else {
      if (uVar12 >> 2 <= uVar11) goto LAB_00100ec3;
      if ((int)uVar27 < 0x924924a) {
         if (0 < (int)uVar27) goto LAB_00100e8e;
         free(pvVar15);
         pvVar15 = (void*)0x0;
         goto LAB_00100ebb;
      }

   }

   *(uint*)( this + 0x50 ) = ~uVar12;
   LAB_00100ec3:puVar1 = auStack_b0 + 2;
   puVar25 = local_48;
   puVar33 = puVar1;
   do {
      *puVar33 = 1;
      puVar31 = puVar33 + 0xc;
      puVar33[1] = 1;
      puVar33[2] = 0;
      puVar33[3] = 0;
      *(undefined1*)( puVar33 + 4 ) = 1;
      *(undefined2*)( (long)puVar33 + 0x12 ) = 0;
      *(undefined1(*) [16])( puVar33 + 5 ) = (undefined1[16])0x0;
      puVar33[10] = 0;
      puVar33[0xb] = 0;
      puVar33 = puVar31;
   }
 while ( puVar31 != puVar25 );
   hb_ot_layout_collect_features_map(*(undefined8*)this, 0x47535542, *(undefined4*)( this + 0x38 ), *(undefined4*)( this + 0x40 ), puVar1);
   hb_ot_layout_collect_features_map(*(undefined8*)this, 0x47504f53, *(undefined4*)( this + 0x3c ), *(undefined4*)( this + 0x44 ));
   uVar12 = *(uint*)( this + 0x54 );
   if (uVar12 == 0) {
      LAB_001011e2:if (this[0x28] != (hb_ot_map_builder_t)0x0) {
         if (*(uint*)( param_1 + 0x14 ) != 0) {
            sort_r_simple<>(*(void**)( param_1 + 0x18 ), ( ulong ) * (uint*)( param_1 + 0x14 ), 0x24, hb_ot_map_t::feature_map_t::cmp);
         }

      }

      lVar24 = 0;
      piVar18 = (int*)hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push((hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>*)( this + 0x60 ));
      iVar30 = *(int*)( this + 0x48 );
      piVar18[2] = 0;
      piVar18[3] = 0;
      *piVar18 = iVar30;
      *(int*)( this + 0x48 ) = iVar30 + 1;
      piVar18 = (int*)hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push((hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>*)( this + 0x70 ));
      iVar30 = *(int*)( this + 0x4c );
      piVar18[2] = 0;
      piVar18[3] = 0;
      *piVar18 = iVar30;
      local_f8 = this + 100;
      phStack_100 = (hb_vector_t<hb_ot_map_t::stage_map_t,false>*)( param_1 + 0x40 );
      *(int*)( this + 0x4c ) = iVar30 + 1;
      do {
         uVar27 = 0;
         uVar29 = 0;
         uVar12 = 0;
         if (*(int*)( this + lVar24 * 4 + 0x48 ) != 0) {
            do {
               if (( ( &local_c0 )[lVar24] != 0xffff ) && ( *(uint*)( (long)&local_c8 + lVar24 * 4 ) == uVar27 )) {
                  add_lookups(this, param_1, (uint)lVar24, ( &local_c0 )[lVar24], *(uint*)( param_2 + lVar24 * 4 ), 0x80000000, true, true, false, false, 0x20202020);
               }

               puVar31 = *(uint**)( param_1 + 0x18 );
               puVar33 = puVar31 + ( ulong ) * (uint*)( param_1 + 0x14 ) * 9;
               for (; puVar33 != puVar31; puVar31 = puVar31 + 9) {
                  while (puVar31[lVar24 + 3] != uVar27) {
                     puVar31 = puVar31 + 9;
                     if (puVar31 == puVar33) goto LAB_00101330;
                  }
;
                  bVar34 = (byte)puVar31[8];
                  add_lookups(this, param_1, (uint)lVar24, puVar31[lVar24 + 1], *(uint*)( param_2 + lVar24 * 4 ), puVar31[6], (bool)( bVar34 >> 1 & 1 ), (bool)( bVar34 >> 2 & 1 ), (bool)( bVar34 >> 3 & 1 ), (bool)( bVar34 >> 4 & 1 ), *puVar31);
               }

               LAB_00101330:uVar35 = (uint)uVar29;
               uVar28 = uVar35 + 1;
               uVar11 = *(uint*)( phStack_100 + -0x1c );
               if (uVar28 < uVar11) {
                  lVar32 = *(long*)( phStack_100 + -0x18 );
                  if (( uVar11 < uVar35 ) || ( uVar11 - uVar35 == 0 )) {
                     LAB_00101445:psVar2 = (short*)( lVar32 + 0xc + ( ( ulong )(( uVar11 - uVar35 ) - 2) + (ulong)uVar28 ) * 0xc );
                     psVar20 = (short*)( lVar32 + (ulong)uVar28 * 0xc );
                     do {
                        while (psVar19 = (short*)( lVar32 + uVar29 * 0xc ),*psVar20 == *psVar19) {
                           *(uint*)( psVar19 + 2 ) = *(uint*)( psVar19 + 2 ) | *(uint*)( psVar20 + 2 );
                           psVar21 = psVar20 + 6;
                           bVar34 = *(byte*)( psVar19 + 1 );
                           bVar26 = *(byte*)( psVar20 + 1 ) & bVar34 & 1;
                           *(byte*)( psVar19 + 1 ) = bVar34 & 0xfe | bVar26;
                           *(byte*)( psVar19 + 1 ) = bVar34 & 0xfc | bVar26 | ( bVar34 >> 1 & *(byte*)( psVar20 + 1 ) >> 1 & 1 ) * '\x02';
                           psVar20 = psVar21;
                           if (psVar21 == psVar2) goto LAB_001014e6;
                        }
;
                        uVar29 = (ulong)uVar28;
                        psVar19 = psVar20 + 6;
                        uVar28 = uVar28 + 1;
                        puVar17 = (undefined8*)( lVar32 + uVar29 * 0xc );
                        *puVar17 = *(undefined8*)psVar20;
                        *(undefined4*)( puVar17 + 1 ) = *(undefined4*)( psVar20 + 4 );
                        psVar20 = psVar19;
                     }
 while ( psVar19 != psVar2 );
                  }
 else {
                     sort_r_simple<>((void*)( lVar32 + uVar29 * 0xc ), ( ulong )(uVar11 - uVar35), 0xc, hb_ot_map_t::lookup_map_t::cmp);
                     uVar11 = *(uint*)( phStack_100 + -0x1c );
                     if (uVar28 < uVar11) {
                        lVar32 = *(long*)( phStack_100 + -0x18 );
                        goto LAB_00101445;
                     }

                  }

                  LAB_001014e6:uVar29 = 0;
                  if (-1 < (int)uVar28) {
                     uVar29 = (ulong)uVar28;
                  }

                  uVar35 = (uint)uVar29;
                  if (uVar11 <= uVar35) goto LAB_00101345;
                  uVar11 = *(uint*)( phStack_100 + -0x20 );
                  *(uint*)( phStack_100 + -0x1c ) = uVar35;
                  if (-1 < (int)uVar11) {
                     if (uVar11 < uVar35) {
                        if ((int)uVar28 < 0x15555556) {
                           pvVar15 = *(void**)( phStack_100 + -0x18 );
                           LAB_0010170f:pvVar15 = realloc(pvVar15, (long)(int)uVar35 * 0xc);
                           if (pvVar15 == (void*)0x0) {
                              if (*(uint*)( phStack_100 + -0x20 ) < uVar35) {
                                 *(uint*)( phStack_100 + -0x20 ) = ~*(uint *)(phStack_100 + -0x20);
                              }

                              uVar29 = ( ulong ) * (uint*)( phStack_100 + -0x1c );
                           }
 else {
                              LAB_00101728:*(void**)( phStack_100 + -0x18 ) = pvVar15;
                              uVar29 = ( ulong ) * (uint*)( phStack_100 + -0x1c );
                              *(uint*)( phStack_100 + -0x20 ) = uVar35;
                           }

                        }
 else {
                           LAB_00101526:*(uint*)( phStack_100 + -0x20 ) = ~uVar11;
                        }

                     }
 else if (uVar35<uVar11> > 2) {
                        if ((int)uVar28 < 0x15555556) {
                           pvVar15 = *(void**)( phStack_100 + -0x18 );
                           if (0 < (int)uVar28) goto LAB_0010170f;
                           free(pvVar15);
                           pvVar15 = (void*)0x0;
                           goto LAB_00101728;
                        }

                        goto LAB_00101526;
                     }

                  }

               }
 else {
                  LAB_00101345:uVar29 = (ulong)uVar11;
               }

               if (( uVar12 < *(uint*)local_f8 ) && ( *(uint*)( *(long*)( local_f8 + 4 ) + (ulong)uVar12 * 0x10 ) == uVar27 )) {
                  puVar22 = (undefined4*)hb_vector_t<hb_ot_map_t::stage_map_t,false>::push(phStack_100);
                  *puVar22 = (int)uVar29;
                  uVar4 = _DAT_0010304c;
                  uVar3 = __hb_CrapPool;
                  if (uVar12 < *(uint*)local_f8) {
                     puVar36 = (undefined*)( (ulong)uVar12 * 0x10 + *(long*)( local_f8 + 4 ) );
                  }
 else {
                     puVar36 = &_hb_CrapPool;
                     __hb_CrapPool = (undefined4)__hb_NullPool;
                     _DAT_0010304c = ( undefined4 )((ulong)__hb_NullPool >> 0x20);
                     _hb_ot_layout_language_find_feature = uVar3;
                     _DAT_00103054 = uVar4;
                  }

                  uVar12 = uVar12 + 1;
                  *(undefined8*)( puVar22 + 2 ) = *(undefined8*)( puVar36 + 8 );
               }

               uVar27 = uVar27 + 1;
            }
 while ( uVar27 < *(uint*)( this + lVar24 * 4 + 0x48 ) );
         }

         local_f8 = local_f8 + 0x10;
         phStack_100 = phStack_100 + 0x10;
         if (lVar24 != 0) {
            do {
               puVar25[-0xc] = 0xffff2153;
               puVar33 = puVar25 + -0xc;
               __mutex = *(pthread_mutex_t**)( puVar25 + -10 );
               if (__mutex != (pthread_mutex_t*)0x0) {
                  if (*(int*)( (long)__mutex + 0x2c ) != 0) {
                     do {
                        pthread_mutex_lock(__mutex);
                        iVar30 = *(int*)( (long)__mutex + 0x2c );
                        while (true) {
                           if (iVar30 == 0) {
                              if (__mutex[1].__data.__lock != 0) {
                                 free(*(void**)( (long)__mutex + 0x30 ));
                              }

                              __mutex[1].__align = 0;
                              *(undefined8*)( (long)__mutex + 0x30 ) = 0;
                              pthread_mutex_unlock(__mutex);
                              goto LAB_001016ee;
                           }

                           lVar24 = *(long*)( (long)__mutex + 0x30 ) + ( ulong )(iVar30 - 1U) * 0x18;
                           pcVar8 = *(code**)( lVar24 + 0x10 );
                           uVar6 = *(undefined8*)( lVar24 + 8 );
                           *(uint*)( (long)__mutex + 0x2c ) = iVar30 - 1U;
                           pthread_mutex_unlock(__mutex);
                           if (pcVar8 == (code*)0x0) break;
                           ( *pcVar8 )(uVar6);
                           pthread_mutex_lock(__mutex);
                           iVar30 = *(int*)( (long)__mutex + 0x2c );
                        }
;
                     }
 while ( true );
                  }

                  if (__mutex[1].__data.__lock != 0) {
                     free(*(void**)( (long)__mutex + 0x30 ));
                  }

                  __mutex[1].__align = 0;
                  *(undefined8*)( (long)__mutex + 0x30 ) = 0;
                  LAB_001016ee:pthread_mutex_destroy(__mutex);
                  free(__mutex);
                  puVar25[-10] = 0;
                  puVar25[-9] = 0;
               }

               if (*(void**)( puVar25 + -2 ) != (void*)0x0) {
                  free(*(void**)( puVar25 + -2 ));
               }

               puVar25 = puVar33;
               if (puVar33 == puVar1) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

            }
 while ( true );
         }

         lVar24 = 1;
      }
 while ( true );
   }

   uVar29 = (ulong)uVar12;
   lVar24 = 0;
   uVar27 = 4;
   LAB_00100f9b:uVar5 = _hb_ot_layout_language_find_feature;
   uVar4 = _DAT_0010304c;
   uVar3 = __hb_CrapPool;
   if ((uint)lVar24 < uVar12) {
      puVar33 = (uint*)( *(long*)( this + 0x58 ) + lVar24 * 0x1c );
   }
 else {
      uRam000000000010305c = CONCAT44(_hb_ot_layout_table_get_lookup_count, _DAT_00103054);
      puVar33 = (uint*)&_hb_CrapPool;
      __hb_CrapPool = (undefined4)__hb_NullPool;
      _DAT_0010304c = ( undefined4 )((ulong)__hb_NullPool >> 0x20);
      _hb_ot_layout_language_find_feature = uVar3;
      _DAT_00103054 = uVar4;
      _hb_ot_layout_table_get_lookup_count = uVar5;
   }

   uVar12 = puVar33[3];
   uVar11 = puVar33[2];
   if (( ( uVar12 & 1 ) == 0 ) || ( uVar35 = uVar11 != 1 )) {
      if (uVar11 != 0) {
         iVar30 = 0x1f;
         if (uVar11 != 0) {
            for (; uVar11 >> iVar30 == 0; iVar30 = iVar30 + -1) {}
         }

         uVar11 = iVar30 + 1;
         if (8 < uVar11) {
            uVar11 = 8;
         }

         uVar35 = uVar11 + uVar27;
         goto LAB_00100fe5;
      }

   }
 else {
      LAB_00100fe5:if (uVar35 < 0x1f) {
         uVar11 = *puVar33;
         lVar32 = 0;
         bVar34 = 0;
         puVar31 = puVar1;
         do {
            if (*(uint*)( (long)&local_b8 + lVar32 ) == uVar11) {
               *(undefined4*)( (long)&local_c8 + lVar32 ) = *(undefined4*)( (long)puVar33 + lVar32 + 0x14 );
            }

            lVar7 = *(long*)( puVar31 + 10 );
            if (lVar7 != 0) {
               uVar23 = ( ( ulong )(uVar11 * -0x61c8864f) & 0x3fffffff ) % (ulong)puVar31[8];
               puVar16 = (uint*)( lVar7 + uVar23 * 0xc );
               bVar26 = (byte)puVar16[1];
               if (( bVar26 & 2 ) != 0) {
                  iVar30 = 0;
                  do {
                     if (uVar11 == *puVar16) {
                        uVar28 = 0xffff;
                        if (( bVar26 & 1 ) != 0) {
                           bVar34 = bVar26 & 1;
                           uVar28 = puVar16[2];
                        }

                        *(uint*)( (long)auStack_b0 + lVar32 ) = uVar28;
                        goto joined_r0x001010a0;
                     }

                     iVar30 = iVar30 + 1;
                     uVar23 = ( ulong )((int)uVar23 + iVar30 & puVar31[7]);
                     puVar16 = (uint*)( lVar7 + uVar23 * 0xc );
                     bVar26 = (byte)puVar16[1];
                  }
 while ( ( bVar26 & 2 ) != 0 );
               }

            }

            *(undefined4*)( (long)auStack_b0 + lVar32 ) = 0xffff;
            joined_r0x001010a0:if (lVar32 == 4) goto LAB_001010c3;
            puVar31 = puVar31 + 0xc;
            lVar32 = 4;
         }
 while ( true );
      }

   }

   goto joined_r0x00100f91;
   LAB_001010c3:if (bVar34 == 0) {
      if (( uVar12 & 0x10 ) != 0) {
         cVar9 = hb_ot_layout_table_find_feature(*(hb_face_t**)this, 0x47535542, uVar11, auStack_b0);
         cVar10 = hb_ot_layout_table_find_feature(*(hb_face_t**)this, 0x47504f53, *puVar33, auStack_b0 + 1);
         if (( cVar9 != '\0' ) || ( cVar10 != '\0' )) goto LAB_001013e1;
         uVar12 = puVar33[3];
      }

      if (( uVar12 & 2 ) == 0) goto joined_r0x00100f91;
      bVar34 = 1;
   }
 else {
      LAB_001013e1:bVar34 = 0;
   }

   puVar17 = (undefined8*)hb_vector_t<hb_ot_map_t::feature_map_t,true>::push((hb_vector_t<hb_ot_map_t::feature_map_t,true>*)( param_1 + 0x10 ));
   uVar12 = puVar33[3];
   uVar11 = puVar33[5];
   *puVar17 = CONCAT44(auStack_b0[0], *puVar33);
   puVar17[1] = CONCAT44(uVar11, auStack_b0[1]);
   *(uint*)( puVar17 + 2 ) = puVar33[6];
   *(byte*)( puVar17 + 4 ) = ( ( ( byte )(uVar12 >> 2) ^ 1 ) & 1 ) * '\x02' | ( byte )(( ( uVar12 >> 3 ^ 1 ) & 1 ) << 2) | ( byte )(( uVar12 >> 5 & 1 ) << 3) | ( byte )(( uVar12 >> 6 & 1 ) << 4) | *(byte*)( puVar17 + 4 ) & 0xe1;
   if (( ( uVar12 & 1 ) == 0 ) || ( puVar33[2] != 1 )) {
      uVar12 = puVar33[4];
      *(uint*)( (long)puVar17 + 0x14 ) = uVar27;
      uVar28 = 1 << ( (byte)uVar27 & 0x1f );
      uVar11 = ( 1 << ( (byte)uVar35 & 0x1f ) ) - uVar28;
      *(uint*)( puVar17 + 3 ) = uVar11;
      uVar28 = uVar28 & uVar11;
      *(uint*)( param_1 + 0xc ) = *(uint*)( param_1 + 0xc ) | uVar12 << ( (byte)uVar27 & 0x1f ) & uVar11;
      uVar27 = uVar35;
   }
 else {
      uVar28 = 0x80000000;
      *(undefined8*)( (long)puVar17 + 0x14 ) = _LC0;
   }

   *(uint*)( (long)puVar17 + 0x1c ) = uVar28;
   *(byte*)( puVar17 + 4 ) = *(byte*)( puVar17 + 4 ) & 0xfe | bVar34;
   joined_r0x00100f91:if (uVar29 == lVar24 + 1U) goto LAB_001011e2;
   lVar24 = lVar24 + 1;
   uVar12 = *(uint*)( this + 0x54 );
   goto LAB_00100f9b;
}
/* hb_ot_map_t::feature_map_t::cmp(void const*, void const*) */ulong hb_ot_map_t::feature_map_t::cmp(void *param_1, void *param_2) {
   ulong uVar1;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uVar1 = 0xffffffff;
   if (*param_2 <= *param_1) {
      uVar1 = ( ulong )(*param_2 < *param_1);
   }

   return uVar1;
}
/* hb_ot_map_t::lookup_map_t::cmp(void const*, void const*) */ulong hb_ot_map_t::lookup_map_t::cmp(void *param_1, void *param_2) {
   ulong uVar1;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uVar1 = 0xffffffff;
   if (*param_2 <= *param_1) {
      uVar1 = ( ulong )(*param_2 < *param_1);
   }

   return uVar1;
}
/* hb_ot_map_builder_t::feature_info_t::cmp(void const*, void const*) */uint hb_ot_map_builder_t::feature_info_t::cmp(void *param_1, void *param_2) {
   uint uVar1;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   if (*param_1 != *param_2) {
      return -(uint)(*param_1 < *param_2) | 1;
   }

   uVar1 = 0xffffffff;
   if (*(uint*)( (long)param_2 + 4 ) <= *(uint*)( (long)param_1 + 4 )) {
      uVar1 = ( uint )(*(uint*)( (long)param_2 + 4 ) < *(uint*)( (long)param_1 + 4 ));
   }

   return uVar1;
}
/* hb_bit_set_t::resize(unsigned int, bool, bool) */hb_bit_set_t hb_bit_set_t::resize(hb_bit_set_t *this, uint param_1, bool param_2, bool param_3) {
   hb_bit_set_t hVar1;
   void *pvVar2;
   hb_bit_set_t hVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   hVar1 = *this;
   if (hVar1 == (hb_bit_set_t)0x0) {
      return (hb_bit_set_t)0x0;
   }

   uVar4 = *(uint*)( this + 0x24 );
   uVar7 = (ulong)uVar4;
   uVar5 = *(uint*)( this + 0x20 );
   hVar3 = ( hb_bit_set_t )(param_1 == 1 && uVar4 == 0);
   if (param_1 != 1 || uVar4 != 0) {
      if ((int)param_1 < 0) {
         param_1 = 0;
      }

      if ((int)uVar5 < 0) goto LAB_00101a4c;
      hVar3 = (hb_bit_set_t)param_3;
      if (param_3) {
         uVar8 = param_1;
         if (param_1 <= uVar4) {
            uVar8 = uVar4;
         }

         if (uVar5 < uVar8) {
            if (uVar8 < 0x38e38e4) goto LAB_00101bd9;
         }
 else {
            if (uVar5 >> 2 <= uVar8) goto LAB_00101993;
            if (uVar8 < 0x38e38e4) {
               pvVar2 = *(void**)( this + 0x28 );
               if (uVar8 != 0) goto LAB_00101be0;
               free(pvVar2);
               uVar8 = 0;
               pvVar2 = (void*)0x0;
               goto LAB_00101bfc;
            }

         }

      }
 else {
         uVar8 = uVar5;
         if (param_1 <= uVar5) goto LAB_00101993;
         do {
            uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
         }
 while ( uVar8 < param_1 );
         if (uVar8 < 0x38e38e4) {
            pvVar2 = *(void**)( this + 0x28 );
            goto LAB_00101be0;
         }

      }

      LAB_00101a47:*(uint*)( this + 0x20 ) = ~uVar5;
      goto LAB_00101a4c;
   }

   if ((int)uVar5 < 0) goto LAB_00101a4c;
   if (uVar5 == 0) {
      param_1 = 1;
      uVar8 = 1;
      LAB_00101bd9:pvVar2 = *(void**)( this + 0x28 );
      param_3 = (bool)hVar1;
      LAB_00101be0:pvVar2 = realloc(pvVar2, (ulong)uVar8 * 0x48);
      if (pvVar2 == (void*)0x0) {
         uVar5 = *(uint*)( this + 0x20 );
         if (uVar5 < uVar8) goto LAB_00101a47;
      }
 else {
         LAB_00101bfc:*(void**)( this + 0x28 ) = pvVar2;
         *(uint*)( this + 0x20 ) = uVar8;
      }

      uVar7 = ( ulong ) * (uint*)( this + 0x24 );
      hVar3 = (hb_bit_set_t)param_3;
   }
 else {
      if (7 < uVar5) {
         pvVar2 = *(void**)( this + 0x28 );
         uVar8 = 1;
         param_1 = 1;
         param_3 = (bool)hVar3;
         goto LAB_00101be0;
      }

      uVar7 = 0;
      param_1 = 1;
   }

   LAB_00101993:if (( (uint)uVar7 < param_1 ) && ( param_2 )) {
      uVar4 = ( param_1 - (uint)uVar7 ) * 0x48;
      if (uVar4 != 0) {
         memset((void*)( *(long*)( this + 0x28 ) + uVar7 * 0x48 ), 0, (ulong)uVar4);
      }

   }

   uVar4 = *(uint*)( this + 0x10 );
   *(uint*)( this + 0x24 ) = param_1;
   if (-1 < (int)uVar4) {
      if (hVar3 == (hb_bit_set_t)0x0) {
         uVar5 = uVar4;
         if (uVar4 < param_1) {
            do {
               uVar5 = ( uVar5 >> 1 ) + 8 + uVar5;
            }
 while ( uVar5 < param_1 );
            if (uVar5 < 0x20000000) {
               pvVar2 = *(void**)( this + 0x18 );
               uVar7 = (ulong)uVar5;
               goto LAB_00101c44;
            }

            *(uint*)( this + 0x10 ) = ~uVar4;
            uVar5 = *(uint*)( this + 0x20 );
            if ((int)uVar5 < 0) goto LAB_00101a4c;
            uVar7 = (ulong)uVar5;
            uVar4 = 0;
            if (-1 < (int)*(uint*)( this + 0x14 )) {
               uVar4 = *(uint*)( this + 0x14 );
            }

            goto LAB_00101abb;
         }

      }
 else {
         uVar8 = *(uint*)( this + 0x14 );
         uVar6 = (ulong)uVar8;
         uVar5 = param_1;
         if (param_1 <= uVar8) {
            uVar5 = uVar8;
         }

         uVar7 = (ulong)uVar5;
         if (uVar4 < uVar5) {
            if (0x1fffffff < uVar5) {
               *(uint*)( this + 0x10 ) = ~uVar4;
               uVar5 = *(uint*)( this + 0x20 );
               if ((int)uVar5 < 0) goto LAB_00101a4c;
               uVar6 = 0;
               if (-1 < (int)uVar8) {
                  uVar6 = (ulong)uVar8;
               }

               goto LAB_00101b46;
            }

            pvVar2 = *(void**)( this + 0x18 );
            LAB_00101c44:uVar4 = (uint)uVar7;
            pvVar2 = realloc(pvVar2, uVar7 << 3);
            if (pvVar2 == (void*)0x0) {
               uVar5 = *(uint*)( this + 0x14 );
               uVar6 = (ulong)uVar5;
               if (uVar4 <= *(uint*)( this + 0x10 )) goto LAB_00101a5f;
               *(uint*)( this + 0x10 ) = ~*(uint *)(this + 0x10);
               goto LAB_00101ca3;
            }

         }
 else {
            if (uVar4 >> 2 <= uVar5) goto LAB_00101a5f;
            pvVar2 = *(void**)( this + 0x18 );
            if (uVar5 != 0) goto LAB_00101c44;
            free(pvVar2);
            uVar4 = 0;
            pvVar2 = (void*)0x0;
         }

         *(void**)( this + 0x18 ) = pvVar2;
         *(uint*)( this + 0x10 ) = uVar4;
      }

      uVar6 = ( ulong ) * (uint*)( this + 0x14 );
      LAB_00101a5f:if (( (uint)uVar6 < param_1 ) && ( param_2 )) {
         uVar4 = ( param_1 - (uint)uVar6 ) * 8;
         if (uVar4 != 0) {
            memset((void*)( *(long*)( this + 0x18 ) + uVar6 * 8 ), 0, (ulong)uVar4);
         }

      }

      *(uint*)( this + 0x14 ) = param_1;
      return hVar1;
   }

   uVar5 = *(uint*)( this + 0x14 );
   LAB_00101ca3:uVar4 = 0;
   if (-1 < (int)uVar5) {
      uVar4 = uVar5;
   }

   uVar6 = (ulong)uVar4;
   uVar5 = *(uint*)( this + 0x20 );
   if ((int)uVar5 < 0) goto LAB_00101a4c;
   uVar7 = (ulong)uVar5;
   if (hVar3 == (hb_bit_set_t)0x0) {
      LAB_00101abb:uVar6 = uVar7;
      if (uVar5 < uVar4) {
         do {
            uVar8 = (int)uVar6 + 8 + (int)( uVar6 >> 1 );
            uVar6 = (ulong)uVar8;
         }
 while ( uVar8 < uVar4 );
         goto LAB_00101ad0;
      }

      LAB_00101b04:uVar8 = *(uint*)( this + 0x24 );
   }
 else {
      LAB_00101b46:uVar8 = *(uint*)( this + 0x24 );
      uVar4 = (uint)uVar6;
      if (uVar4 <= uVar8) {
         uVar6 = (ulong)uVar8;
      }

      uVar9 = (uint)uVar6;
      if (uVar5 < uVar9) {
         LAB_00101ad0:if (0x38e38e3 < (uint)uVar6) goto LAB_00101a47;
         pvVar2 = *(void**)( this + 0x28 );
         LAB_00101ae1:uVar8 = (uint)uVar6;
         pvVar2 = realloc(pvVar2, uVar6 * 0x48);
         if (pvVar2 == (void*)0x0) {
            uVar5 = *(uint*)( this + 0x20 );
            if (uVar5 < uVar8) goto LAB_00101a47;
         }
 else {
            LAB_00101afd:*(void**)( this + 0x28 ) = pvVar2;
            *(uint*)( this + 0x20 ) = uVar8;
         }

         goto LAB_00101b04;
      }

      if (uVar9<uVar5> > 2) {
         if (0x38e38e3 < uVar9) goto LAB_00101a47;
         pvVar2 = *(void**)( this + 0x28 );
         if (uVar9 != 0) goto LAB_00101ae1;
         free(pvVar2);
         uVar8 = 0;
         pvVar2 = (void*)0x0;
         goto LAB_00101afd;
      }

   }

   if (( uVar8 < uVar4 ) && ( param_2 )) {
      uVar5 = ( uVar4 - uVar8 ) * 0x48;
      if (uVar5 != 0) {
         memset((void*)( *(long*)( this + 0x28 ) + (ulong)uVar8 * 0x48 ), 0, (ulong)uVar5);
      }

   }

   *(uint*)( this + 0x24 ) = uVar4;
   LAB_00101a4c:*this = (hb_bit_set_t)0x0;
   return (hb_bit_set_t)0x0;
}
/* hb_bit_set_t::page_for(unsigned int, bool) */long hb_bit_set_t::page_for(hb_bit_set_t *this, uint param_1, bool param_2) {
   uint *puVar1;
   undefined4 *puVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   char cVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   uVar9 = param_1 >> 9;
   if (( *(uint*)( this + 8 ) < *(uint*)( this + 0x14 ) ) && ( puVar1 = (uint*)( *(long*)( this + 0x18 ) + ( ulong ) * (uint*)( this + 8 ) * 8 ) * puVar1 == uVar9 )) {
      return *(long*)( this + 0x28 ) + (ulong)puVar1[1] * 0x48;
   }

   uVar4 = *(uint*)( this + 0x24 );
   iVar10 = *(uint*)( this + 0x14 ) - 1;
   if (iVar10 < 0) {
      uVar8 = 0;
   }
 else {
      uVar8 = 0;
      do {
         while (true) {
            uVar7 = iVar10 + uVar8 >> 1;
            lVar11 = (ulong)uVar7 * 8;
            uVar3 = *(uint*)( *(long*)( this + 0x18 ) + (ulong)uVar7 * 8 );
            if (-1 < (int)( uVar9 - uVar3 )) break;
            iVar10 = uVar7 - 1;
            if (iVar10 < (int)uVar8) goto LAB_00101ddc;
         }
;
         if (uVar9 == uVar3) goto LAB_00101e75;
         uVar8 = uVar7 + 1;
      }
 while ( (int)uVar8 <= iVar10 );
   }

   LAB_00101ddc:if (param_2) {
      cVar6 = resize(this, uVar4 + 1, true, false);
      if (cVar6 != '\0') {
         lVar11 = (ulong)uVar8 * 8;
         puVar2 = (undefined4*)( *(long*)( this + 0x28 ) + (ulong)uVar4 * 0x48 );
         for (int i = 0; i < 4; i++) {
            *(undefined1(*) [16])( puVar2 + ( 4*i + 2 ) ) = (undefined1[16])0;
         }

         lVar5 = *(long*)( this + 0x18 );
         *puVar2 = 0;
         memmove((void*)( lVar5 + 8 + lVar11 ), (void*)( lVar5 + lVar11 ), ( ulong )(( ~uVar8 + *(int*)( this + 0x14 ) ) * 8));
         *(ulong*)( *(long*)( this + 0x18 ) + (ulong)uVar8 * 8 ) = CONCAT44(uVar4, uVar9);
         uVar7 = uVar8;
         LAB_00101e75:*(uint*)( this + 8 ) = uVar7;
         return *(long*)( this + 0x28 ) + ( ulong ) * (uint*)( *(long*)( this + 0x18 ) + 4 + lVar11 ) * 0x48;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_vector_t<hb_ot_map_builder_t::stage_info_t, false>::push() */undefined * __thiscall
hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push
          (hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> *this){
   uint uVar1;
   undefined8 uVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uVar2 = __hb_CrapPool;
   uVar1 = *(uint*)( this + 4 );
   uVar4 = *(uint*)this;
   if ((int)uVar4 < 0) {
      __hb_CrapPool = __hb_NullPool;
      _hb_ot_layout_language_find_feature = uVar2;
      return &_hb_CrapPool;
   }

   uVar5 = uVar1 + 1;
   if ((int)uVar5 < 0) {
      uVar5 = 0;
   }

   uVar6 = uVar4;
   if (uVar4 < uVar5) {
      do {
         uVar6 = ( uVar6 >> 1 ) + 8 + uVar6;
      }
 while ( uVar6 < uVar5 );
      if (0xfffffff < uVar6) {
         LAB_00101f80:*(uint*)this = ~uVar4;
         _hb_ot_layout_language_find_feature = __hb_CrapPool;
         __hb_CrapPool = __hb_NullPool;
         return &_hb_CrapPool;
      }

      pvVar3 = realloc(*(void**)( this + 8 ), (ulong)uVar6 << 4);
      if (pvVar3 != (void*)0x0) {
         *(void**)( this + 8 ) = pvVar3;
         uVar1 = *(uint*)( this + 4 );
         *(uint*)this = uVar6;
         goto LAB_00101f0d;
      }

      uVar4 = *(uint*)this;
      if (uVar4 < uVar6) goto LAB_00101f80;
      uVar1 = *(uint*)( this + 4 );
   }

   pvVar3 = *(void**)( this + 8 );
   LAB_00101f0d:if (uVar1 < uVar5) {
      uVar4 = ( uVar5 - uVar1 ) * 0x10;
      if (uVar4 != 0) {
         memset((void*)( (ulong)uVar1 * 0x10 + (long)pvVar3 ), 0, (ulong)uVar4);
         pvVar3 = *(void**)( this + 8 );
      }

   }

   *(uint*)( this + 4 ) = uVar5;
   return (undefined*)( (long)pvVar3 + ( ulong )(uVar5 - 1) * 0x10 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_vector_t<hb_ot_map_t::feature_map_t, true>::push() */undefined * __thiscall
hb_vector_t<hb_ot_map_t::feature_map_t,true>::push
          (hb_vector_t<hb_ot_map_t::feature_map_t,true> *this){
   uint uVar1;
   undefined8 uVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uVar4 = *(uint*)this;
   uVar1 = *(uint*)( this + 4 );
   if ((int)uVar4 < 0) goto LAB_0010205c;
   uVar5 = uVar1 + 1;
   if ((int)uVar5 < 0) {
      uVar5 = 0;
   }

   uVar6 = uVar4;
   if (uVar5 <= uVar4) {
      LAB_00101fd9:pvVar3 = *(void**)( this + 8 );
      LAB_00101fdd:if (uVar1 < uVar5) {
         uVar4 = ( uVar5 - uVar1 ) * 0x24;
         if (uVar4 != 0) {
            memset((void*)( (long)pvVar3 + (ulong)uVar1 * 0x24 ), 0, (ulong)uVar4);
            pvVar3 = *(void**)( this + 8 );
         }

      }

      *(uint*)( this + 4 ) = uVar5;
      return (undefined*)( (long)pvVar3 + ( ulong )(uVar5 - 1) * 0x24 );
   }

   do {
      uVar6 = ( uVar6 >> 1 ) + 8 + uVar6;
   }
 while ( uVar6 < uVar5 );
   if (uVar6 < 0x71c71c8) {
      pvVar3 = realloc(*(void**)( this + 8 ), (ulong)uVar6 * 0x24);
      if (pvVar3 != (void*)0x0) {
         *(void**)( this + 8 ) = pvVar3;
         uVar1 = *(uint*)( this + 4 );
         *(uint*)this = uVar6;
         goto LAB_00101fdd;
      }

      uVar4 = *(uint*)this;
      if (uVar6 <= uVar4) {
         uVar1 = *(uint*)( this + 4 );
         goto LAB_00101fd9;
      }

   }

   *(uint*)this = ~uVar4;
   LAB_0010205c:uVar2 = _hb_ot_layout_table_get_lookup_count;
   _hb_ot_layout_table_get_lookup_count = _hb_ot_layout_language_find_feature;
   _hb_ot_layout_language_find_feature = __hb_CrapPool;
   _hb_ot_layout_language_get_required_feature = _hb_ot_layout_feature_with_variations_get_lookups;
   __hb_CrapPool = __hb_NullPool;
   _hb_ot_layout_feature_with_variations_get_lookups = uVar2;
   return &_hb_CrapPool;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_vector_t<hb_ot_map_t::stage_map_t, false>::push() */undefined * __thiscall
hb_vector_t<hb_ot_map_t::stage_map_t,false>::push(hb_vector_t<hb_ot_map_t::stage_map_t,false> *this){
   uint uVar1;
   undefined8 uVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uVar2 = __hb_CrapPool;
   uVar1 = *(uint*)( this + 4 );
   uVar4 = *(uint*)this;
   if ((int)uVar4 < 0) {
      __hb_CrapPool = __hb_NullPool;
      _hb_ot_layout_language_find_feature = uVar2;
      return &_hb_CrapPool;
   }

   uVar5 = uVar1 + 1;
   if ((int)uVar5 < 0) {
      uVar5 = 0;
   }

   uVar6 = uVar4;
   if (uVar4 < uVar5) {
      do {
         uVar6 = ( uVar6 >> 1 ) + 8 + uVar6;
      }
 while ( uVar6 < uVar5 );
      if (0xfffffff < uVar6) {
         LAB_00102150:*(uint*)this = ~uVar4;
         _hb_ot_layout_language_find_feature = __hb_CrapPool;
         __hb_CrapPool = __hb_NullPool;
         return &_hb_CrapPool;
      }

      pvVar3 = realloc(*(void**)( this + 8 ), (ulong)uVar6 << 4);
      if (pvVar3 != (void*)0x0) {
         *(void**)( this + 8 ) = pvVar3;
         uVar1 = *(uint*)( this + 4 );
         *(uint*)this = uVar6;
         goto LAB_001020dd;
      }

      uVar4 = *(uint*)this;
      if (uVar4 < uVar6) goto LAB_00102150;
      uVar1 = *(uint*)( this + 4 );
   }

   pvVar3 = *(void**)( this + 8 );
   LAB_001020dd:if (uVar1 < uVar5) {
      uVar4 = ( uVar5 - uVar1 ) * 0x10;
      if (uVar4 != 0) {
         memset((void*)( (ulong)uVar1 * 0x10 + (long)pvVar3 ), 0, (ulong)uVar4);
         pvVar3 = *(void**)( this + 8 );
      }

   }

   *(uint*)( this + 4 ) = uVar5;
   return (undefined*)( (long)pvVar3 + ( ulong )(uVar5 - 1) * 0x10 );
}

