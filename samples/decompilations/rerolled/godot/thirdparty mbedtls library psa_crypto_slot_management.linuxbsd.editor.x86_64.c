undefined8 psa_get_and_lock_key_slot_in_memory(uint param_1, long *param_2) {
   long lVar1;
   uint uVar2;
   long lVar3;
   if (param_1 + 0xc0000000 < 0x3fff0000) {
      uVar2 = param_1 >> 0x19 & 0x1f;
      if (( ( ( uVar2 < 0x16 ) && ( ( ulong )(param_1 & 0x1ffffff) < ( ulong )(uint)(0x10 << (sbyte)uVar2) ) ) && ( ( &global_data )[uVar2] != 0 ) ) && ( ( lVar1 = ( &global_data )[uVar2] + ( ulong )(param_1 & 0x1ffffff) * 0x38 * (int*)( lVar1 + 0x18 ) == 2 && ( *(uint*)( lVar1 + 0x14 ) == param_1 ) ) )) {
         LAB_00100058:if (*(long*)( lVar1 + 0x20 ) == -1) {
            return 0xffffff69;
         }

         *(long*)( lVar1 + 0x20 ) = *(long*)( lVar1 + 0x20 ) + 1;
         *param_2 = lVar1;
         return 0;
      }

   }
 else {
      if ((int)param_1 < 1) {
         return 0xffffff78;
      }

      lVar3 = 0;
      lVar1 = DAT_00100af0;
      do {
         if (( *(int*)( lVar1 + 0x18 ) == 2 ) && ( *(uint*)( lVar1 + 0x14 ) == param_1 )) goto LAB_00100058;
         lVar3 = lVar3 + 1;
         lVar1 = lVar1 + 0x38;
      }
 while ( lVar3 != 0x20 );
   }

   return 0xffffff74;
}
bool psa_is_valid_key_id(int param_1, int param_2) {
   return param_1 - 1U < 0x3fffffff || param_2 != 0 && param_1 + 0xc0000000U < 0x40000000;
}
undefined8 psa_initialize_key_slots(void) {
   undefined8 uVar1;
   DAT_00100af0 = calloc(0x20, 0x38);
   if (DAT_00100af0 == (void*)0x0) {
      uVar1 = 0xffffff73;
   }
 else {
      DAT_00100ba8 = 1;
      uVar1 = 0;
   }

   return uVar1;
}
void psa_wipe_all_key_slots(void) {
   void *__ptr;
   ulong uVar1;
   long lVar2;
   undefined8 *puVar3;
   long *plVar4;
   long lVar5;
   byte bVar6;
   bVar6 = 0;
   lVar5 = 0;
   plVar4 = &global_data;
   do {
      __ptr = (void*)*plVar4;
      if (__ptr != (void*)0x0) {
         uVar1 = ( ulong )(uint)(0x10 << ( (byte)lVar5 & 0x1f ));
         if (lVar5 == 0x16) {
            uVar1 = 0x20;
         }

         lVar2 = 0;
         do {
            if (*(int*)( (long)__ptr + lVar2 + 0x18 ) != 0) {
               *(undefined8*)( (long)__ptr + lVar2 + 0x20 ) = 1;
               *(undefined4*)( (long)__ptr + lVar2 + 0x18 ) = 3;
               psa_wipe_key_slot();
               __ptr = (void*)*plVar4;
            }

            lVar2 = lVar2 + 0x38;
         }
 while ( uVar1 * 0x38 != lVar2 );
         free(__ptr);
         *plVar4 = 0;
      }

      lVar5 = lVar5 + 1;
      plVar4 = plVar4 + 1;
   }
 while ( lVar5 != 0x17 );
   DAT_00100ba8 = 0;
   puVar3 = &DAT_00100af8;
   for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar6 * -2 + 1;
   }

   return;
}
undefined8 psa_free_key_slot(ulong param_1, ulong param_2) {
   ulong uVar1;
   uint uVar2;
   long lVar3;
   if (param_1 == 0x16) {
      return 0;
   }

   if (param_1 < 0x16) {
      uVar2 = 0x10 << ( (byte)param_1 & 0x1f );
      uVar1 = ( &global_data )[param_1];
      if (( param_2 < uVar1 + (ulong)uVar2 * 0x38 ) && ( uVar1 <= param_2 )) {
         lVar3 = ( (long)( param_2 - uVar1 ) >> 3 ) * 0x6db6db6db6db6db7;
         if (( ulong )(&DAT_00100af8)[param_1] < (ulong)uVar2) {
            uVar2 = ( uint )(&DAT_00100af8)[param_1];
         }

         ( &DAT_00100af8 )[param_1] = lVar3;
         *(uint*)( param_2 + 0x20 ) = ( uVar2 - (int)lVar3 ) + -1;
         return 0;
      }

   }

   return 0xffffff69;
}
undefined8 psa_reserve_free_key_slot(uint *param_1, long *param_2) {
   int *piVar1;
   int iVar2;
   long lVar3;
   void *pvVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   ulong __nmemb;
   long lVar4;
   if (DAT_00100ba8 == '\0') {
      uVar6 = 0xffffff77;
      goto LAB_0010041d;
   }

   if (param_1 != (uint*)0x0) {
      lVar7 = 0;
      while (( &DAT_00100af8 )[lVar7] == -1) {
         lVar7 = lVar7 + 1;
         if (lVar7 == 0x16) {
            return 0xffffff73;
         }

      }
;
      pvVar5 = (void*)( &global_data )[lVar7];
      __nmemb = ( ulong )(uint)(0x10 << ( (byte)lVar7 & 0x1f ));
      if (pvVar5 == (void*)0x0) {
         pvVar5 = calloc(__nmemb, 0x38);
         ( &global_data )[lVar7] = pvVar5;
         if (pvVar5 == (void*)0x0) {
            return 0xffffff73;
         }

      }

      lVar3 = ( &DAT_00100a48 )[lVar7 + 0x16];
      pvVar5 = (void*)( (long)pvVar5 + lVar3 * 0x38 );
      *param_1 = (int)lVar7 << 0x19 | (uint)lVar3 | 0x40000000;
      uVar8 = lVar3 + 1 + (long)*(int*)( (long)pvVar5 + 0x20 );
      if (__nmemb <= uVar8) {
         uVar8 = 0xffffffffffffffff;
      }

      iVar2 = *(int*)( (long)pvVar5 + 0x18 );
      ( &DAT_00100a48 )[lVar7 + 0x16] = uVar8;
      *(undefined4*)( (long)pvVar5 + 0x20 ) = 0;
      if (iVar2 == 0) {
         *(undefined4*)( (long)pvVar5 + 0x18 ) = 1;
         *param_2 = (long)pvVar5;
         *(byte*)( (long)pvVar5 + 0x1c ) = (byte)lVar7;
         return 0;
      }

      return 0xffffff69;
   }

   iVar2 = *(int*)( DAT_00100af0 + 0x18 );
   lVar7 = DAT_00100af0;
   while (lVar3 = lVar7,iVar2 != 0) {
      if (( ( iVar2 == 2 ) && ( *(long*)( lVar7 + 0x20 ) == 0 ) ) && ( lVar4 = lVar7 * (char*)( lVar7 + 4 ) != '\0' )) goto LAB_001003f8;
      if (DAT_00100af0 + 0x700 == lVar7 + 0x38) {
         uVar6 = 0xffffff73;
         goto LAB_0010041d;
      }

      iVar2 = *(int*)( lVar7 + 0x50 );
      lVar7 = lVar7 + 0x38;
   }
;
   goto LAB_001002f8;
   while (piVar1 = (int*)( lVar4 + 0x50 ),lVar4 = lVar3,*piVar1 != 0) {
      LAB_001003f8:lVar3 = lVar4 + 0x38;
      if (lVar3 == DAT_00100af0 + 0x700) {
         if (( *(int*)( lVar7 + 0x18 ) == 2 ) && ( *(long*)( lVar7 + 0x20 ) != -1 )) {
            *(long*)( lVar7 + 0x20 ) = *(long*)( lVar7 + 0x20 ) + 1;
         }

         uVar6 = psa_wipe_key_slot(lVar7);
         lVar3 = lVar7;
         if ((int)uVar6 != 0) goto LAB_0010041d;
         break;
      }

   }
;
   LAB_001002f8:if (*(int*)( lVar3 + 0x18 ) == 0) {
      *(undefined4*)( lVar3 + 0x18 ) = 1;
      *(undefined1*)( lVar3 + 0x1c ) = 0x16;
      *param_2 = lVar3;
      return 0;
   }

   uVar6 = 0xffffff69;
   LAB_0010041d:*param_2 = 0;
   return uVar6;
}
int psa_get_and_lock_key_slot(undefined4 param_1, long *param_2) {
   long lVar1;
   int iVar2;
   uint uVar3;
   long in_FS_OFFSET;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   if (DAT_00100ba8 == '\0') {
      iVar2 = -0x89;
      goto LAB_00100516;
   }

   iVar2 = psa_get_and_lock_key_slot_in_memory();
   if (iVar2 != -0x8c) goto LAB_00100516;
   iVar2 = psa_reserve_free_key_slot(0);
   if (iVar2 != 0) goto LAB_00100516;
   lVar1 = *param_2;
   *(undefined4*)( lVar1 + 4 ) = 1;
   *(undefined4*)( lVar1 + 0x14 ) = param_1;
   local_40 = 0;
   local_38 = 0;
   iVar2 = psa_load_persistent_key(lVar1, &local_40, &local_38);
   if (iVar2 == 0) {
      iVar2 = psa_copy_key_material_into_slot(lVar1, local_40, local_38);
      psa_free_persistent_key_data(local_40, local_38);
      if (iVar2 != 0) goto LAB_00100596;
      lVar1 = *param_2;
      uVar3 = *(uint*)( lVar1 + 8 );
      if (( uVar3 & 0x1000 ) != 0) {
         uVar3 = uVar3 | 0x400;
         *(uint*)( lVar1 + 8 ) = uVar3;
      }

      if (( uVar3 & 0x2000 ) != 0) {
         *(uint*)( lVar1 + 8 ) = uVar3 | 0x800;
      }

      if (*(int*)( lVar1 + 0x18 ) == 1) {
         *(undefined4*)( lVar1 + 0x18 ) = 2;
         LAB_0010060d:if (*(long*)( lVar1 + 0x20 ) != -1) {
            *(long*)( lVar1 + 0x20 ) = *(long*)( lVar1 + 0x20 ) + 1;
            goto LAB_00100516;
         }

      }
 else if (*(int*)( lVar1 + 0x18 ) == 2) goto LAB_0010060d;
      iVar2 = -0x97;
   }
 else {
      psa_free_persistent_key_data(local_40, local_38);
      LAB_00100596:psa_wipe_key_slot(*param_2);
      if (iVar2 == -0x8c) {
         iVar2 = -0x88;
      }

   }

   *param_2 = 0;
   LAB_00100516:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 psa_unregister_read(long param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   if (*(int*)( param_1 + 0x18 ) - 2U < 2) {
      lVar1 = *(long*)( param_1 + 0x20 );
      if (( *(int*)( param_1 + 0x18 ) == 3 ) && ( lVar1 == 1 )) {
         uVar2 = psa_wipe_key_slot();
         return uVar2;
      }

      if (lVar1 != 0) {
         *(long*)( param_1 + 0x20 ) = lVar1 + -1;
         return 0;
      }

   }

   return 0xffffff69;
}
undefined8 psa_unregister_read_under_mutex(long param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   if (*(int*)( param_1 + 0x18 ) - 2U < 2) {
      lVar1 = *(long*)( param_1 + 0x20 );
      if (( *(int*)( param_1 + 0x18 ) == 3 ) && ( lVar1 == 1 )) {
         uVar2 = psa_wipe_key_slot();
         return uVar2;
      }

      if (lVar1 != 0) {
         *(long*)( param_1 + 0x20 ) = lVar1 + -1;
         return 0;
      }

   }

   return 0xffffff69;
}
undefined8 psa_validate_key_location(void) {
   return 0;
}
undefined8 psa_validate_key_persistence(char param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 == -1) {
      uVar1 = 0xffffff79;
   }

   return uVar1;
}
ulong psa_open_key(undefined8 param_1, undefined4 *param_2) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = psa_get_and_lock_key_slot(param_1, &local_28);
   iVar2 = (int)uVar3;
   if (iVar2 == 0) {
      *param_2 = (int)param_1;
      if (local_28 != 0) {
         if (*(int*)( local_28 + 0x18 ) - 2U < 2) {
            lVar1 = *(long*)( local_28 + 0x20 );
            if (( *(int*)( local_28 + 0x18 ) == 3 ) && ( lVar1 == 1 )) {
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar3 = psa_wipe_key_slot();
                  return uVar3;
               }

               goto LAB_001007df;
            }

            if (lVar1 != 0) {
               *(long*)( local_28 + 0x20 ) = lVar1 + -1;
               goto LAB_0010075f;
            }

         }

         uVar3 = 0xffffff69;
      }

   }
 else {
      *param_2 = 0;
      uVar3 = uVar3 & 0xffffffff;
      if (iVar2 == -0x88) {
         uVar3 = 0xffffff74;
      }

   }

   LAB_0010075f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   LAB_001007df:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
ulong psa_close_key(undefined8 param_1) {
   long lVar1;
   uint uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)param_1 == 0) {
      LAB_0010080c:uVar3 = 0;
   }
 else {
      uVar2 = psa_get_and_lock_key_slot_in_memory(param_1, &local_18);
      if (uVar2 == 0) {
         lVar1 = *(long*)( local_18 + 0x20 );
         if (lVar1 == 1) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar3 = psa_wipe_key_slot();
               return uVar3;
            }

            goto LAB_00100893;
         }

         if (( *(int*)( local_18 + 0x18 ) - 2U < 2 ) && ( lVar1 != 0 )) {
            *(long*)( local_18 + 0x20 ) = lVar1 + -1;
            goto LAB_0010080c;
         }

         uVar3 = 0xffffff69;
      }
 else {
         uVar3 = (ulong)uVar2;
         if (uVar2 == 0xffffff74) {
            uVar3 = 0xffffff78;
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   LAB_00100893:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 psa_purge_key(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = psa_get_and_lock_key_slot_in_memory(param_1, &local_18);
   if ((int)uVar2 == 0) {
      if (( *(char*)( local_18 + 4 ) != '\0' ) && ( *(long*)( local_18 + 0x20 ) == 1 )) {
         LAB_00100920:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar2 = psa_wipe_key_slot();
            return uVar2;
         }

         goto LAB_00100947;
      }

      if (*(int*)( local_18 + 0x18 ) - 2U < 2) {
         lVar1 = *(long*)( local_18 + 0x20 );
         if (( *(int*)( local_18 + 0x18 ) == 3 ) && ( lVar1 == 1 )) goto LAB_00100920;
         if (lVar1 != 0) {
            *(long*)( local_18 + 0x20 ) = lVar1 + -1;
            goto LAB_001008f6;
         }

      }

      uVar2 = 0xffffff69;
   }

   LAB_001008f6:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   LAB_00100947:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void mbedtls_psa_get_stats(undefined1 (*param_1)[16]) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   lVar5 = 0;
   *param_1 = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      param_1[( i + 1 )] = (undefined1[16])0;
   }

   do {
      lVar4 = ( &global_data )[lVar5];
      if (lVar4 != 0) {
         uVar6 = ( ulong )(uint)(0x10 << ( (byte)lVar5 & 0x1f ));
         if (lVar5 == 0x16) {
            uVar6 = 0x20;
         }

         lVar1 = lVar4 + uVar6 * 0x38;
         do {
            while (*(int*)( lVar4 + 0x18 ) != 0) {
               if (*(long*)( lVar4 + 0x20 ) != 0) {
                  *(long*)param_1[3] = *(long*)param_1[3] + 1;
               }

               uVar2 = *(uint*)( lVar4 + 4 );
               if ((char)uVar2 == '\0') {
                  *(long*)*param_1 = *(long*)*param_1 + 1;
               }
 else {
                  uVar3 = *(uint*)( lVar4 + 0x14 );
                  *(long*)( *param_1 + 8 ) = *(long*)( *param_1 + 8 ) + 1;
                  if (*(uint*)( param_1[3] + 8 ) < uVar3) {
                     *(uint*)( param_1[3] + 8 ) = uVar3;
                  }

               }

               if (uVar2 >> 8 != 0) {
                  uVar2 = *(uint*)( lVar4 + 0x14 );
                  *(long*)param_1[1] = *(long*)param_1[1] + 1;
                  if (*(uint*)( param_1[3] + 0xc ) < uVar2) {
                     *(uint*)( param_1[3] + 0xc ) = uVar2;
                  }

               }

               lVar4 = lVar4 + 0x38;
               if (lVar1 == lVar4) goto LAB_00100a16;
            }
;
            lVar4 = lVar4 + 0x38;
            *(long*)( param_1[2] + 8 ) = *(long*)( param_1[2] + 8 ) + 1;
         }
 while ( lVar1 != lVar4 );
      }

      LAB_00100a16:lVar5 = lVar5 + 1;
      if (lVar5 == 0x17) {
         return;
      }

   }
 while ( true );
}

