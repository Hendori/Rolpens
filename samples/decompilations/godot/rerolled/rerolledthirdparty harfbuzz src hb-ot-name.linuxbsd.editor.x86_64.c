/* OT::_hb_ot_name_entry_cmp_key(void const*, void const*, bool) [clone .part.0] */int OT::_hb_ot_name_entry_cmp_key(void *param_1, void *param_2, bool param_3) {
   int iVar1;
   int iVar2;
   char *__s1;
   char *__s2;
   if (*(long*)( (long)param_1 + 8 ) == *(long*)( (long)param_2 + 8 )) {
      return 0;
   }

   if (*(long*)( (long)param_1 + 8 ) == 0) {
      iVar1 = -1;
   }
 else {
      iVar1 = 1;
      if (*(long*)( (long)param_2 + 8 ) != 0) {
         __s1 = (char*)hb_language_to_string();
         __s2 = (char*)hb_language_to_string(*(undefined8*)( (long)param_2 + 8 ));
         iVar1 = strcmp(__s1, __s2);
         if (( ( !param_3 ) && ( iVar1 != 0 ) ) && ( iVar2 = hb_language_matches(*(undefined8*)( (long)param_2 + 8 ), *(undefined8*)( (long)param_1 + 8 )) ),iVar2 != 0) {
            return 0;
         }

      }

   }

   return iVar1;
}
ulong hb_ot_name_get_utf16(long param_1, int param_2, long param_3, uint *param_4, ushort *param_5) {
   long *plVar1;
   long lVar2;
   hb_face_t *phVar3;
   int iVar4;
   undefined *puVar5;
   ushort *puVar6;
   ushort *puVar7;
   ulong uVar8;
   ushort *puVar9;
   ushort uVar10;
   uint uVar11;
   undefined *puVar12;
   int *piVar13;
   ulong uVar14;
   ushort uVar15;
   undefined *puVar16;
   ushort *puVar17;
   ushort *puVar18;
   int iVar19;
   int iVar20;
   uint uVar21;
   long in_FS_OFFSET;
   accelerator_t *local_70;
   int local_58[2];
   long local_50;
   long local_40;
   plVar1 = (long*)( param_1 + 0xb0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      while (true) {
         local_70 = (accelerator_t*)*plVar1;
         if (local_70 != (accelerator_t*)0x0) goto LAB_001000ee;
         phVar3 = *(hb_face_t**)( param_1 + 0x70 );
         if (phVar3 == (hb_face_t*)0x0) goto LAB_001005e4;
         local_70 = (accelerator_t*)calloc(1, 0x28);
         if (local_70 == (accelerator_t*)0x0) break;
         OT::name::accelerator_t::accelerator_t(local_70, phVar3);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)local_70;
         }

         UNLOCK();
         if (lVar2 == 0) goto LAB_001000ee;
         if (local_70 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( local_70 + 0x10 ));
            if (*(int*)( local_70 + 0x18 ) != 0) {
               free(*(void**)( local_70 + 0x20 ));
            }

            free(local_70);
         }

      }
;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar2 != 0 );
   LAB_001005e4:local_70 = (accelerator_t*)&_hb_NullPool;
   LAB_001000ee:if (param_3 == 0) {
      param_3 = hb_language_from_string(&_LC0, 2);
   }

   local_58[1] = 0;
   lVar2 = *(long*)( local_70 + 0x20 );
   iVar19 = *(int*)( local_70 + 0x1c ) + -1;
   local_58[0] = param_2;
   local_50 = param_3;
   if (-1 < iVar19) {
      iVar20 = 0;
      do {
         while (true) {
            uVar21 = ( uint )(iVar20 + iVar19) >> 1;
            piVar13 = (int*)( (ulong)uVar21 * 0x10 + lVar2 );
            if (param_2 != *piVar13) break;
            iVar4 = OT::_hb_ot_name_entry_cmp_key(local_58, piVar13, true);
            if (iVar4 < 0) goto LAB_001002a8;
            if (iVar4 == 0) goto LAB_00100182;
            LAB_00100141:iVar20 = uVar21 + 1;
            if (iVar19 < iVar20) goto LAB_001002b5;
         }
;
         if (-1 < param_2 - *piVar13) goto LAB_00100141;
         LAB_001002a8:iVar19 = uVar21 - 1;
      }
 while ( iVar20 <= iVar19 );
      LAB_001002b5:lVar2 = *(long*)( local_70 + 0x20 );
      iVar19 = *(int*)( local_70 + 0x1c ) + -1;
      if (-1 < iVar19) {
         iVar20 = 0;
         LAB_001002e9:uVar21 = ( uint )(iVar20 + iVar19) >> 1;
         piVar13 = (int*)( (ulong)uVar21 * 0x10 + lVar2 );
         if (param_2 != *piVar13) {
            if (param_2 - *piVar13 < 0) goto LAB_00100390;
            LAB_001002e1:iVar20 = uVar21 + 1;
            LAB_001002e5:if (iVar19 < iVar20) goto LAB_00100320;
            goto LAB_001002e9;
         }

         iVar4 = OT::_hb_ot_name_entry_cmp_key(local_58, piVar13, false);
         if (iVar4 < 0) {
            LAB_00100390:iVar19 = uVar21 - 1;
            goto LAB_001002e5;
         }

         if (iVar4 != 0) goto LAB_001002e1;
         LAB_00100182:puVar12 = *(undefined**)( local_70 + 0x10 );
         puVar5 = &_hb_NullPool;
         if (puVar12 == (undefined*)0x0) {
            puVar12 = &_hb_NullPool;
         }

         puVar16 = &_hb_NullPool;
         if (5 < *(uint*)( puVar12 + 0x18 )) {
            puVar16 = *(undefined**)( puVar12 + 0x10 );
         }

         if (*(ushort*)( (long)piVar13 + 6 ) < ( ushort )(*(ushort*)( puVar16 + 2 ) << 8 | *(ushort*)( puVar16 + 2 ) >> 8)) {
            puVar5 = puVar16 + ( ulong ) * (ushort*)( (long)piVar13 + 6 ) * 0xc + 6;
         }

         uVar10 = *(ushort*)( puVar5 + 10 ) << 8 | *(ushort*)( puVar5 + 10 ) >> 8;
         if (*(uint*)( local_70 + 8 ) < (uint)uVar10) {
            uVar14 = 0;
         }
 else {
            uVar15 = *(ushort*)( puVar5 + 8 ) << 8 | *(ushort*)( puVar5 + 8 ) >> 8;
            uVar21 = *(uint*)( local_70 + 8 ) - (uint)uVar10;
            uVar14 = (ulong)uVar21;
            if (uVar15 < uVar21) {
               uVar14 = (ulong)uVar15;
            }

         }

         puVar6 = (ushort*)( *(long*)local_70 + (ulong)uVar10 );
         if (*(ushort*)( piVar13 + 1 ) < 10) {
            uVar8 = 0;
            puVar18 = (ushort*)( ( ulong )(uint)((int)( uVar14 >> 1 ) * 2) + (long)puVar6 );
            if (param_4 != (uint*)0x0) {
               uVar21 = *param_4;
               uVar8 = (ulong)uVar21;
               if (uVar21 != 0) {
                  *param_4 = uVar21 - 1;
                  puVar7 = param_5;
                  if (puVar6 < puVar18) {
                     while (puVar7 < param_5 + ( uVar21 - 1 )) {
                        puVar17 = puVar6 + 1;
                        uVar10 = *puVar6 << 8 | *puVar6 >> 8;
                        if (uVar10 - 0xd800 < 0x800) {
                           if (( ( 0xdbff < uVar10 ) || ( puVar18 <= puVar17 ) ) || ( uVar15 = puVar6[1] << 8 | puVar6[1] >> 8 ),0x3ff < uVar15 - 0xdc00) {
                              uVar10 = 0xfffd;
                              goto LAB_00100421;
                           }

                           if ((long)( param_5 + ( uVar21 - 1 ) ) - (long)puVar7 < 3) break;
                           puVar17 = puVar6 + 2;
                           uVar11 = uVar15 + 0xfc9f2400 + (uint)uVar10 * 0x400;
                           puVar7[1] = ( (ushort)uVar11 & 0x3ff ) + 0xdc00;
                           *puVar7 = (short)( uVar11 >> 10 ) + 0xd800;
                           puVar9 = puVar7 + 2;
                        }
 else {
                           if (( 0x101fff < uVar10 - 0xe000 ) && ( 0xd7ff < uVar10 )) {
                              uVar10 = 0xfffd;
                           }

                           LAB_00100421:*puVar7 = uVar10;
                           puVar9 = puVar7 + 1;
                        }

                        if (( puVar7 == puVar9 ) || ( puVar6= puVar17,puVar7 = puVar9,puVar18 <= puVar17 )) break;
                     }
;
                  }

                  uVar8 = (long)puVar7 - (long)param_5 >> 1;
                  *param_4 = (uint)uVar8;
                  uVar8 = uVar8 & 0xffffffff;
                  *puVar7 = 0;
               }

            }

            while (puVar7 = puVar6,puVar6 < puVar18) {
               while (true) {
                  puVar6 = puVar7 + 1;
                  iVar20 = 1;
                  iVar19 = (int)uVar8;
                  if (0x3ff < ( ushort )(( *puVar7 << 8 | *puVar7 >> 8 ) + 0x2800)) break;
                  if (puVar18 <= puVar6) {
                     uVar8 = ( ulong )(iVar19 + 1);
                     goto LAB_0010034a;
                  }

                  if (( ushort )(puVar7[1] << 8 | puVar7[1] >> 8) - 0xdc00 < 0x400) {
                     puVar6 = puVar7 + 2;
                     iVar20 = 2;
                     break;
                  }

                  uVar8 = ( ulong )(iVar19 + 1);
                  puVar7 = puVar6;
               }
;
               uVar8 = ( ulong )(uint)(iVar19 + iVar20);
            }
;
         }
 else {
            puVar18 = (ushort*)( (long)puVar6 + uVar14 );
            uVar21 = 0;
            if (( param_4 != (uint*)0x0 ) && ( uVar21 = uVar21 != 0 )) {
               *param_4 = uVar21 - 1;
               if (( param_5 < param_5 + ( uVar21 - 1 ) ) && ( puVar7 = puVar6 < puVar18 )) {
                  do {
                     uVar10 = *puVar6;
                     uVar15 = (ushort)(byte)uVar10;
                     puVar6 = (ushort*)( (long)puVar6 + 1 );
                     if ((char)(byte)uVar10 < '\0') {
                        uVar15 = 0xfffd;
                     }

                     puVar17 = puVar7 + 1;
                     *puVar7 = uVar15;
                  }
 while ( ( puVar17 < param_5 + ( uVar21 - 1 ) ) && ( puVar7 = puVar6 < puVar18 ) );
                  uVar21 = ( uint )((long)puVar17 - (long)param_5 >> 1);
                  param_5 = puVar17;
               }
 else {
                  uVar21 = 0;
               }

               *param_4 = uVar21;
               *param_5 = 0;
            }

            uVar11 = ( uVar21 + (int)puVar18 ) - (int)puVar6;
            if (puVar18 <= puVar6) {
               uVar11 = uVar21;
            }

            uVar8 = (ulong)uVar11;
         }

         goto LAB_0010034a;
      }

   }

   LAB_00100320:if (param_4 != (uint*)0x0) {
      if (*param_4 != 0) {
         *param_5 = 0;
      }

      *param_4 = 0;
   }

   uVar8 = 0;
   LAB_0010034a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
undefined8 hb_ot_name_list_names(long param_1, undefined4 *param_2) {
   long *plVar1;
   long lVar2;
   hb_face_t *phVar3;
   accelerator_t *this;
   plVar1 = (long*)( param_1 + 0xb0 );
   do {
      while (true) {
         this(accelerator_t * ) * plVar1;
         if (this != (accelerator_t*)0x0) goto LAB_0010066a;
         phVar3 = *(hb_face_t**)( param_1 + 0x70 );
         if (phVar3 == (hb_face_t*)0x0) goto LAB_00100703;
         this(accelerator_t * calloc(1, 0x28));
         if (this == (accelerator_t*)0x0) break;
         OT::name::accelerator_t::accelerator_t(this, phVar3);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar2 == 0) goto LAB_0010066a;
         if (this != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x10 ));
            if (*(int*)( this + 0x18 ) != 0) {
               free(*(void**)( this + 0x20 ));
            }

            free(this);
         }

      }
;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar2 != 0 );
   LAB_00100703 = (accelerator_t*)&_hb_NullPool;
   LAB_0010066a:if (param_2 != (undefined4*)0x0) {
      *param_2 = *(undefined4*)( this + 0x1c );
   }

   return *(undefined8*)( this + 0x20 );
}
ulong hb_ot_name_get_utf32(long param_1, int param_2, long param_3, uint *param_4, uint *param_5) {
   long *plVar1;
   long lVar2;
   hb_face_t *phVar3;
   int iVar4;
   undefined *puVar5;
   ushort *puVar6;
   ushort *puVar7;
   ulong uVar8;
   ushort uVar9;
   uint uVar10;
   undefined *puVar11;
   int *piVar12;
   uint *puVar13;
   uint *puVar14;
   ulong uVar15;
   ushort uVar16;
   undefined *puVar17;
   ushort *puVar18;
   int iVar19;
   int iVar20;
   uint uVar21;
   long in_FS_OFFSET;
   bool bVar22;
   accelerator_t *local_70;
   int local_58[2];
   long local_50;
   long local_40;
   plVar1 = (long*)( param_1 + 0xb0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      while (true) {
         local_70 = (accelerator_t*)*plVar1;
         if (local_70 != (accelerator_t*)0x0) goto LAB_0010076e;
         phVar3 = *(hb_face_t**)( param_1 + 0x70 );
         if (phVar3 == (hb_face_t*)0x0) goto LAB_00100c3f;
         local_70 = (accelerator_t*)calloc(1, 0x28);
         if (local_70 == (accelerator_t*)0x0) break;
         OT::name::accelerator_t::accelerator_t(local_70, phVar3);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)local_70;
         }

         UNLOCK();
         if (lVar2 == 0) goto LAB_0010076e;
         if (local_70 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( local_70 + 0x10 ));
            if (*(int*)( local_70 + 0x18 ) != 0) {
               free(*(void**)( local_70 + 0x20 ));
            }

            free(local_70);
         }

      }
;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar2 != 0 );
   LAB_00100c3f:local_70 = (accelerator_t*)&_hb_NullPool;
   LAB_0010076e:if (param_3 == 0) {
      param_3 = hb_language_from_string(&_LC0, 2);
   }

   local_58[1] = 0;
   lVar2 = *(long*)( local_70 + 0x20 );
   iVar19 = *(int*)( local_70 + 0x1c ) + -1;
   local_58[0] = param_2;
   local_50 = param_3;
   if (-1 < iVar19) {
      iVar20 = 0;
      do {
         while (true) {
            uVar21 = ( uint )(iVar20 + iVar19) >> 1;
            piVar12 = (int*)( (ulong)uVar21 * 0x10 + lVar2 );
            if (param_2 != *piVar12) break;
            iVar4 = OT::_hb_ot_name_entry_cmp_key(local_58, piVar12, true);
            if (iVar4 < 0) goto LAB_00100930;
            if (iVar4 == 0) goto LAB_00100802;
            LAB_001007c1:iVar20 = uVar21 + 1;
            if (iVar19 < iVar20) goto LAB_0010093d;
         }
;
         if (-1 < param_2 - *piVar12) goto LAB_001007c1;
         LAB_00100930:iVar19 = uVar21 - 1;
      }
 while ( iVar20 <= iVar19 );
      LAB_0010093d:lVar2 = *(long*)( local_70 + 0x20 );
      iVar19 = *(int*)( local_70 + 0x1c ) + -1;
      if (-1 < iVar19) {
         iVar20 = 0;
         LAB_00100971:uVar21 = ( uint )(iVar20 + iVar19) >> 1;
         piVar12 = (int*)( (ulong)uVar21 * 0x10 + lVar2 );
         if (param_2 != *piVar12) {
            if (param_2 - *piVar12 < 0) goto LAB_00100a20;
            LAB_00100969:iVar20 = uVar21 + 1;
            LAB_0010096d:if (iVar19 < iVar20) goto LAB_001009b0;
            goto LAB_00100971;
         }

         iVar4 = OT::_hb_ot_name_entry_cmp_key(local_58, piVar12, false);
         if (iVar4 < 0) {
            LAB_00100a20:iVar19 = uVar21 - 1;
            goto LAB_0010096d;
         }

         if (iVar4 != 0) goto LAB_00100969;
         LAB_00100802:puVar11 = *(undefined**)( local_70 + 0x10 );
         puVar5 = &_hb_NullPool;
         if (puVar11 == (undefined*)0x0) {
            puVar11 = &_hb_NullPool;
         }

         puVar17 = &_hb_NullPool;
         if (5 < *(uint*)( puVar11 + 0x18 )) {
            puVar17 = *(undefined**)( puVar11 + 0x10 );
         }

         if (*(ushort*)( (long)piVar12 + 6 ) < ( ushort )(*(ushort*)( puVar17 + 2 ) << 8 | *(ushort*)( puVar17 + 2 ) >> 8)) {
            puVar5 = puVar17 + ( ulong ) * (ushort*)( (long)piVar12 + 6 ) * 0xc + 6;
         }

         uVar9 = *(ushort*)( puVar5 + 10 ) << 8 | *(ushort*)( puVar5 + 10 ) >> 8;
         if (*(uint*)( local_70 + 8 ) < (uint)uVar9) {
            uVar15 = 0;
         }
 else {
            uVar16 = *(ushort*)( puVar5 + 8 ) << 8 | *(ushort*)( puVar5 + 8 ) >> 8;
            uVar21 = *(uint*)( local_70 + 8 ) - (uint)uVar9;
            uVar15 = (ulong)uVar21;
            if (uVar16 < uVar21) {
               uVar15 = (ulong)uVar16;
            }

         }

         puVar6 = (ushort*)( *(long*)local_70 + (ulong)uVar9 );
         if (*(ushort*)( piVar12 + 1 ) < 10) {
            uVar8 = 0;
            puVar18 = (ushort*)( ( ulong )(uint)((int)( uVar15 >> 1 ) * 2) + (long)puVar6 );
            if (param_4 != (uint*)0x0) {
               uVar21 = *param_4;
               uVar8 = (ulong)uVar21;
               if (uVar21 != 0) {
                  *param_4 = uVar21 - 1;
                  if (( param_5 < param_5 + ( uVar21 - 1 ) ) && ( puVar7= puVar6,puVar13 = param_5,puVar6 < puVar18 )) {
                     do {
                        puVar6 = puVar7 + 1;
                        uVar9 = *puVar7 << 8 | *puVar7 >> 8;
                        bVar22 = puVar6 < puVar18;
                        uVar10 = (uint)uVar9;
                        if (uVar9 - 0xd800 < 0x800) {
                           if (( uVar9 < 0xdc00 && bVar22 ) && ( uVar16 = puVar7[1] << 8 | puVar7[1] >> 8 ),bVar22 = uVar9 < 0xdc00 && bVar22,uVar16 - 0xdc00 < 0x400) {
                              puVar6 = puVar7 + 2;
                              bVar22 = puVar6 < puVar18;
                              uVar10 = uVar16 + 0xfca02400 + (uint)uVar9 * 0x400;
                           }
 else {
                              uVar10 = 0xfffd;
                           }

                        }
 else if (( 0x101fff < uVar9 - 0xe000 ) && ( 0xd7ff < uVar10 )) {
                           uVar10 = 0xfffd;
                        }

                        puVar14 = puVar13 + 1;
                        *puVar13 = uVar10;
                     }
 while ( ( puVar14 < param_5 + ( uVar21 - 1 ) ) && ( puVar7= puVar6,puVar13 = puVar14,bVar22 ) );
                     uVar8 = (long)puVar14 - (long)param_5 >> 2;
                  }
 else {
                     uVar8 = 0;
                     puVar14 = param_5;
                  }

                  *param_4 = (uint)uVar8;
                  *puVar14 = 0;
               }

            }

            while (puVar7 = puVar6,puVar6 < puVar18) {
               while (true) {
                  puVar6 = puVar7 + 1;
                  iVar19 = (int)uVar8;
                  if (0x3ff < ( ushort )(( *puVar7 << 8 | *puVar7 >> 8 ) + 0x2800)) break;
                  if (puVar18 <= puVar6) {
                     uVar8 = ( ulong )(iVar19 + 1);
                     goto LAB_001009db;
                  }

                  if (( ushort )(puVar7[1] << 8 | puVar7[1] >> 8) - 0xdc00 < 0x400) {
                     puVar6 = puVar7 + 2;
                     break;
                  }

                  uVar8 = ( ulong )(iVar19 + 1);
                  puVar7 = puVar6;
               }
;
               uVar8 = ( ulong )(iVar19 + 1);
            }
;
         }
 else {
            puVar18 = (ushort*)( (long)puVar6 + uVar15 );
            uVar21 = 0;
            if (( param_4 != (uint*)0x0 ) && ( uVar21 = uVar21 != 0 )) {
               *param_4 = uVar21 - 1;
               if (( puVar6 < puVar18 ) && ( puVar13 = param_5 ),param_5 < param_5 + ( uVar21 - 1 )) {
                  do {
                     uVar9 = *puVar6;
                     puVar6 = (ushort*)( (long)puVar6 + 1 );
                     uVar10 = (uint)(byte)uVar9;
                     if (0x7f < uVar10) {
                        uVar10 = 0xfffd;
                     }

                     puVar14 = puVar13 + 1;
                     *puVar13 = uVar10;
                  }
 while ( ( puVar14 < param_5 + ( uVar21 - 1 ) ) && ( puVar13 = puVar6 < puVar18 ) );
                  uVar21 = ( uint )((long)puVar14 - (long)param_5 >> 2);
                  param_5 = puVar14;
               }
 else {
                  uVar21 = 0;
               }

               *param_4 = uVar21;
               *param_5 = 0;
            }

            uVar10 = ( uVar21 + (int)puVar18 ) - (int)puVar6;
            if (puVar18 <= puVar6) {
               uVar10 = uVar21;
            }

            uVar8 = (ulong)uVar10;
         }

         goto LAB_001009db;
      }

   }

   LAB_001009b0:if (param_4 != (uint*)0x0) {
      if (*param_4 != 0) {
         *param_5 = 0;
      }

      *param_4 = 0;
   }

   uVar8 = 0;
   LAB_001009db:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8 & 0xffffffff;
}
uint hb_ot_name_get_utf8(long param_1, int param_2, long param_3, uint *param_4, byte *param_5) {
   long *plVar1;
   long lVar2;
   hb_face_t *phVar3;
   int iVar4;
   undefined *puVar5;
   ushort *puVar6;
   ushort *puVar7;
   byte bVar8;
   ushort uVar9;
   uint uVar10;
   undefined *puVar11;
   byte *pbVar12;
   int *piVar13;
   ushort *puVar14;
   ulong uVar15;
   ushort uVar16;
   undefined *puVar17;
   byte *pbVar18;
   int iVar19;
   int iVar20;
   uint uVar21;
   long in_FS_OFFSET;
   accelerator_t *local_70;
   int local_58[2];
   long local_50;
   long local_40;
   plVar1 = (long*)( param_1 + 0xb0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      while (true) {
         local_70 = (accelerator_t*)*plVar1;
         if (local_70 != (accelerator_t*)0x0) goto LAB_00100cee;
         phVar3 = *(hb_face_t**)( param_1 + 0x70 );
         if (phVar3 == (hb_face_t*)0x0) goto LAB_001012db;
         local_70 = (accelerator_t*)calloc(1, 0x28);
         if (local_70 == (accelerator_t*)0x0) break;
         OT::name::accelerator_t::accelerator_t(local_70, phVar3);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)local_70;
         }

         UNLOCK();
         if (lVar2 == 0) goto LAB_00100cee;
         if (local_70 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( local_70 + 0x10 ));
            if (*(int*)( local_70 + 0x18 ) != 0) {
               free(*(void**)( local_70 + 0x20 ));
            }

            free(local_70);
         }

      }
;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar2 != 0 );
   LAB_001012db:local_70 = (accelerator_t*)&_hb_NullPool;
   LAB_00100cee:if (param_3 == 0) {
      param_3 = hb_language_from_string(&_LC0, 2);
   }

   local_58[1] = 0;
   lVar2 = *(long*)( local_70 + 0x20 );
   iVar19 = *(int*)( local_70 + 0x1c ) + -1;
   local_58[0] = param_2;
   local_50 = param_3;
   if (-1 < iVar19) {
      iVar20 = 0;
      do {
         while (true) {
            uVar21 = ( uint )(iVar20 + iVar19) >> 1;
            piVar13 = (int*)( (ulong)uVar21 * 0x10 + lVar2 );
            if (param_2 != *piVar13) break;
            iVar4 = OT::_hb_ot_name_entry_cmp_key(local_58, piVar13, true);
            if (iVar4 < 0) goto LAB_00100ed0;
            if (iVar4 == 0) goto LAB_00100d82;
            LAB_00100d41:iVar20 = uVar21 + 1;
            if (iVar19 < iVar20) goto LAB_00100edd;
         }
;
         if (-1 < param_2 - *piVar13) goto LAB_00100d41;
         LAB_00100ed0:iVar19 = uVar21 - 1;
      }
 while ( iVar20 <= iVar19 );
      LAB_00100edd:lVar2 = *(long*)( local_70 + 0x20 );
      iVar19 = *(int*)( local_70 + 0x1c ) + -1;
      if (-1 < iVar19) {
         iVar20 = 0;
         LAB_00100f11:uVar21 = ( uint )(iVar20 + iVar19) >> 1;
         piVar13 = (int*)( (ulong)uVar21 * 0x10 + lVar2 );
         if (param_2 != *piVar13) {
            if (param_2 - *piVar13 < 0) goto LAB_00100fc0;
            LAB_00100f09:iVar20 = uVar21 + 1;
            LAB_00100f0d:if (iVar19 < iVar20) goto LAB_00100f50;
            goto LAB_00100f11;
         }

         iVar4 = OT::_hb_ot_name_entry_cmp_key(local_58, piVar13, false);
         if (iVar4 < 0) {
            LAB_00100fc0:iVar19 = uVar21 - 1;
            goto LAB_00100f0d;
         }

         if (iVar4 != 0) goto LAB_00100f09;
         LAB_00100d82:puVar11 = *(undefined**)( local_70 + 0x10 );
         puVar5 = &_hb_NullPool;
         if (puVar11 == (undefined*)0x0) {
            puVar11 = &_hb_NullPool;
         }

         puVar17 = &_hb_NullPool;
         if (5 < *(uint*)( puVar11 + 0x18 )) {
            puVar17 = *(undefined**)( puVar11 + 0x10 );
         }

         if (*(ushort*)( (long)piVar13 + 6 ) < ( ushort )(*(ushort*)( puVar17 + 2 ) << 8 | *(ushort*)( puVar17 + 2 ) >> 8)) {
            puVar5 = puVar17 + ( ulong ) * (ushort*)( (long)piVar13 + 6 ) * 0xc + 6;
         }

         uVar9 = *(ushort*)( puVar5 + 10 ) << 8 | *(ushort*)( puVar5 + 10 ) >> 8;
         if (*(uint*)( local_70 + 8 ) < (uint)uVar9) {
            uVar15 = 0;
         }
 else {
            uVar16 = *(ushort*)( puVar5 + 8 ) << 8 | *(ushort*)( puVar5 + 8 ) >> 8;
            uVar21 = *(uint*)( local_70 + 8 ) - (uint)uVar9;
            uVar15 = (ulong)uVar21;
            if (uVar16 < uVar21) {
               uVar15 = (ulong)uVar16;
            }

         }

         puVar6 = (ushort*)( *(long*)local_70 + (ulong)uVar9 );
         iVar19 = (int)param_5;
         if (*(ushort*)( piVar13 + 1 ) < 10) {
            uVar21 = 0;
            puVar14 = (ushort*)( ( ulong )(uint)((int)( uVar15 >> 1 ) * 2) + (long)puVar6 );
            if (( param_4 != (uint*)0x0 ) && ( uVar21 = uVar21 != 0 )) {
               *param_4 = uVar21 - 1;
               pbVar12 = param_5 + ( uVar21 - 1 );
               if (puVar6 < puVar14) {
                  while (param_5 < pbVar12) {
                     uVar9 = *puVar6;
                     puVar7 = puVar6 + 1;
                     uVar16 = uVar9 << 8 | uVar9 >> 8;
                     uVar21 = (uint)uVar16;
                     if (uVar16 - 0xd800 < 0x800) {
                        if (( ( uVar21 < 0xdc00 ) && ( puVar7 < puVar14 ) ) && ( uVar9 = puVar6[1] << 8 | puVar6[1] >> 8 ),uVar9 - 0xdc00 < 0x400) {
                           if (3 < (long)pbVar12 - (long)param_5) {
                              puVar7 = puVar6 + 2;
                              pbVar18 = param_5 + 4;
                              uVar21 = uVar9 + 0xfca02400 + uVar21 * 0x400;
                              *(uint*)param_5 = CONCAT13(( (byte)uVar21 & 0x3f ) + _LC1._3_1_, CONCAT12(( ( byte )(uVar21 >> 6) & 0x3f ) + _LC1._2_1_, CONCAT11(( ( byte )(uVar21 >> 0xc) & 0x3f ) + _LC1._1_1_, (char)( uVar21 >> 0x12 ) + (char)_LC1)));
                              goto LAB_00101065;
                           }

                           break;
                        }

                        LAB_0010122f:uVar21 = 0xfffd;
                        LAB_001011ce:if ((long)pbVar12 - (long)param_5 < 3) break;
                        pbVar18 = param_5 + 3;
                        *param_5 = (char)( uVar21 >> 0xc ) - 0x20;
                        param_5[2] = ( (byte)uVar21 & 0x3f ) + 0x80;
                        param_5[1] = ( ( byte )(uVar21 >> 6) & 0x3f ) + 0x80;
                     }
 else {
                        if (( 0x101fff < uVar16 - 0xe000 ) && ( 0xd7ff < uVar21 )) goto LAB_0010122f;
                        bVar8 = ( byte )(uVar9 >> 8);
                        if (0x7f < uVar21) {
                           if (0x7ff < uVar21) goto LAB_001011ce;
                           if ((long)pbVar12 - (long)param_5 != 1) {
                              pbVar18 = param_5 + 2;
                              *param_5 = (char)( uVar16 >> 6 ) - 0x40;
                              param_5[1] = ( bVar8 & 0x3f ) + 0x80;
                              goto LAB_00101065;
                           }

                           break;
                        }

                        *param_5 = bVar8;
                        pbVar18 = param_5 + 1;
                     }

                     LAB_00101065:if (( param_5 == pbVar18 ) || ( puVar6= puVar7,param_5 = pbVar18,puVar14 <= puVar7 )) break;
                  }
;
               }

               uVar21 = (int)param_5 - iVar19;
               *param_4 = uVar21;
               *param_5 = 0;
            }

            while (puVar7 = puVar6,puVar6 < puVar14) {
               while (true) {
                  puVar6 = puVar7 + 1;
                  uVar10 = ( uint )(ushort)(*puVar7 << 8 | *puVar7 >> 8);
                  if (0x7ff < uVar10 - 0xd800) break;
                  if (( 0xdbff < uVar10 ) || ( puVar14 <= puVar6 )) {
                     iVar19 = 3;
                     goto LAB_001010b8;
                  }

                  if (( ushort )(puVar7[1] << 8 | puVar7[1] >> 8) - 0xdc00 < 0x400) {
                     puVar6 = puVar7 + 2;
                     iVar19 = 4;
                     goto LAB_001010b8;
                  }

                  uVar21 = uVar21 + 3;
                  puVar7 = puVar6;
               }
;
               iVar19 = 1;
               if (0x7f < uVar10) {
                  iVar19 = ( 0x7ff < uVar10 ) + 2;
               }

               LAB_001010b8:uVar21 = uVar21 + iVar19;
            }
;
         }
 else {
            puVar14 = (ushort*)( uVar15 + (long)puVar6 );
            uVar21 = 0;
            if (( param_4 != (uint*)0x0 ) && ( uVar21 = uVar21 != 0 )) {
               *param_4 = uVar21 - 1;
               pbVar12 = param_5;
               if (puVar6 < puVar14) {
                  while (pbVar12 < param_5 + ( uVar21 - 1 )) {
                     puVar7 = (ushort*)( (long)puVar6 + 1 );
                     if ((char)( byte ) * puVar6 < '\0') {
                        if ((long)( param_5 + ( uVar21 - 1 ) ) - (long)pbVar12 < 3) break;
                        pbVar12[2] = 0xbd;
                        pbVar18 = pbVar12 + 3;
                        pbVar12[0] = 0xef;
                        pbVar12[1] = 0xbf;
                     }
 else {
                        *pbVar12 = ( byte ) * puVar6;
                        pbVar18 = pbVar12 + 1;
                     }

                     if (( pbVar12 == pbVar18 ) || ( puVar6= puVar7,pbVar12 = pbVar18,puVar14 <= puVar7 )) break;
                  }
;
               }

               uVar21 = (int)pbVar12 - iVar19;
               *param_4 = uVar21;
               *pbVar12 = 0;
            }

            if (puVar6 < puVar14) {
               do {
                  uVar9 = *puVar6;
                  puVar6 = (ushort*)( (long)puVar6 + 1 );
                  uVar21 = ( (int)(char)uVar9 >> 0x1f & 2U ) + 1 + uVar21;
               }
 while ( puVar6 != puVar14 );
            }

         }

         goto LAB_00100f78;
      }

   }

   LAB_00100f50:if (param_4 != (uint*)0x0) {
      if (*param_4 != 0) {
         *param_5 = 0;
      }

      *param_4 = 0;
   }

   uVar21 = 0;
   LAB_00100f78:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar21;
}
/* OT::_hb_ot_name_entry_cmp(void const*, void const*) */ulong OT::_hb_ot_name_entry_cmp(void *param_1, void *param_2) {
   ulong uVar1;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   if (*param_1 != *param_2) {
      return ( ulong )(uint)(*param_1 - *param_2);
   }

   uVar1 = _hb_ot_name_entry_cmp_key(param_1, param_2, true);
   if ((int)uVar1 == 0) {
      if (*(ushort*)( (long)param_1 + 4 ) == *(ushort*)( (long)param_2 + 4 )) {
         if (*(ushort*)( (long)param_1 + 6 ) != *(ushort*)( (long)param_2 + 6 )) {
            uVar1 = ( ulong )(( uint ) * (ushort*)( (long)param_1 + 6 ) - ( uint ) * (ushort*)( (long)param_2 + 6 ));
         }

      }
 else {
         uVar1 = ( ulong )(( uint ) * (ushort*)( (long)param_1 + 4 ) - ( uint ) * (ushort*)( (long)param_2 + 4 ));
      }

   }

   return uVar1;
}
/* WARNING: Type propagation algorithm not settling *//* void sort_r_simple<>(void*, unsigned long, unsigned long, int (*)(void const*, void const*))
   [clone .constprop.0] */void sort_r_simple<>(void *param_1, ulong param_2, ulong param_3, _func_int_void_ptr_void_ptr *param_4) {
   byte bVar1;
   code cVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   _func_int_void_ptr_void_ptr *p_Var6;
   int iVar7;
   _func_int_void_ptr_void_ptr *p_Var8;
   ulong uVar9;
   _func_int_void_ptr_void_ptr *p_Var10;
   ulong uVar11;
   _func_int_void_ptr_void_ptr *p_Var12;
   _func_int_void_ptr_void_ptr *p_Var13;
   _func_int_void_ptr_void_ptr *p_Var14;
   _func_int_void_ptr_void_ptr *p_Var15;
   _func_int_void_ptr_void_ptr *local_50;
   _func_int_void_ptr_void_ptr *local_48;
   local_48 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + param_2 * 0x10 );
   local_50 = (_func_int_void_ptr_void_ptr*)param_1;
   p_Var13 = (_func_int_void_ptr_void_ptr*)param_1;
   if (9 < param_2) {
      do {
         p_Var10 = (_func_int_void_ptr_void_ptr*)( ( param_2 - 1 ) * 0x10 );
         p_Var13 = local_50 + 0x10;
         p_Var15 = local_50 + (long)p_Var10;
         p_Var12 = local_50 + ( param_2 >> 1 ) * 0x10;
         p_Var8 = p_Var15 + -0x10;
         iVar7 = ( *(code*)param_3 )(p_Var13, p_Var12);
         p_Var14 = p_Var12;
         if (iVar7 < 1) {
            p_Var14 = p_Var13;
            p_Var13 = p_Var12;
         }

         iVar7 = ( *(code*)param_3 )(p_Var13, p_Var8);
         if (( 0 < iVar7 ) && ( iVar7 = ( *(code*)param_3 )(p_Var14, p_Var8) ),p_Var13 = p_Var8,0 < iVar7) {
            p_Var13 = p_Var14;
         }

         if (p_Var15 != p_Var13) {
            uVar3 = *(undefined8*)( p_Var13 + 8 );
            p_Var8 = local_50 + param_2 * 0x10 + -0x10;
            uVar4 = *(undefined8*)p_Var8;
            uVar5 = *(undefined8*)( p_Var8 + 8 );
            *(undefined8*)p_Var8 = *(undefined8*)p_Var13;
            *(undefined8*)( p_Var8 + 8 ) = uVar3;
            *(undefined8*)p_Var13 = uVar4;
            *(undefined8*)( p_Var13 + 8 ) = uVar5;
         }

         p_Var8 = local_50;
         p_Var13 = p_Var15;
         p_Var14 = p_Var15;
         p_Var12 = local_50;
         if (local_50 < p_Var15) {
            do {
               while (true) {
                  iVar7 = ( *(code*)param_3 )(p_Var12, p_Var15);
                  p_Var10 = p_Var13;
                  if (iVar7 < 1) break;
                  do {
                     while (true) {
                        p_Var6 = p_Var14;
                        p_Var13 = p_Var10;
                        p_Var14 = p_Var6;
                        if (p_Var6 <= p_Var12) goto LAB_001014e0;
                        p_Var14 = p_Var6 + -0x10;
                        iVar7 = ( *(code*)param_3 )(p_Var14, p_Var15);
                        if (iVar7 != 0) break;
                        p_Var10 = p_Var13 + -0x10;
                        if (p_Var14 < p_Var10) {
                           uVar3 = *(undefined8*)( p_Var6 + -8 );
                           uVar4 = *(undefined8*)( p_Var13 + -0x10 );
                           uVar5 = *(undefined8*)( p_Var13 + -8 );
                           *(undefined8*)( p_Var13 + -0x10 ) = *(undefined8*)p_Var14;
                           *(undefined8*)( p_Var13 + -8 ) = uVar3;
                           *(undefined8*)p_Var14 = uVar4;
                           *(undefined8*)( p_Var6 + -8 ) = uVar5;
                        }

                     }
;
                     p_Var10 = p_Var13;
                  }
 while ( -1 < iVar7 );
                  p_Var10 = p_Var12 + 0x10;
                  if (p_Var12 < p_Var14) {
                     uVar3 = *(undefined8*)( p_Var12 + 8 );
                     uVar4 = *(undefined8*)p_Var14;
                     uVar5 = *(undefined8*)( p_Var6 + -8 );
                     *(undefined8*)p_Var14 = *(undefined8*)p_Var12;
                     *(undefined8*)( p_Var6 + -8 ) = uVar3;
                     *(undefined8*)p_Var12 = uVar4;
                     *(undefined8*)( p_Var12 + 8 ) = uVar5;
                  }

                  p_Var12 = p_Var10;
                  if (p_Var14 <= p_Var10) goto LAB_001014e0;
               }
;
               p_Var10 = p_Var8;
               if (( iVar7 == 0 ) && ( p_Var10 = p_Var8 < p_Var12 )) {
                  uVar3 = *(undefined8*)( p_Var8 + 8 );
                  uVar4 = *(undefined8*)p_Var12;
                  uVar5 = *(undefined8*)( p_Var12 + 8 );
                  *(undefined8*)p_Var12 = *(undefined8*)p_Var8;
                  *(undefined8*)( p_Var12 + 8 ) = uVar3;
                  *(undefined8*)p_Var8 = uVar4;
                  *(undefined8*)( p_Var8 + 8 ) = uVar5;
               }

               p_Var12 = p_Var12 + 0x10;
               p_Var8 = p_Var10;
            }
 while ( p_Var12 < p_Var14 );
            LAB_001014e0:p_Var10 = p_Var14 + -(long)p_Var8;
            uVar9 = (long)p_Var13 - (long)p_Var14;
            uVar11 = (long)local_48 - (long)p_Var13;
            param_1 = local_48 + -uVar9;
            param_2 = uVar9 >> 4;
            local_48 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + ( uVar9 & 0xfffffffffffffff0 ) );
            param_4 = p_Var8 + -(long)local_50;
            if (( param_4 != (_func_int_void_ptr_void_ptr*)0x0 ) && ( p_Var10 != (_func_int_void_ptr_void_ptr*)0x0 )) {
               p_Var15 = local_50 + (long)p_Var10;
               if (p_Var10 < param_4) {
                  param_4 = local_50;
                  p_Var12 = local_50;
                  if (local_50 < p_Var15) {
                     do {
                        bVar1 = ( byte ) * p_Var12;
                        param_4 = p_Var12 + 1;
                        *p_Var12 = *p_Var8;
                        *p_Var8 = (_func_int_void_ptr_void_ptr)bVar1;
                        p_Var12 = param_4;
                        p_Var8 = p_Var8 + 1;
                     }
 while ( param_4 != p_Var15 );
                  }

               }
 else {
                  p_Var12 = local_50;
                  if (local_50 < p_Var8) {
                     do {
                        bVar1 = ( byte ) * p_Var12;
                        param_4 = p_Var12 + 1;
                        *p_Var12 = *p_Var15;
                        *p_Var15 = (_func_int_void_ptr_void_ptr)bVar1;
                        p_Var15 = p_Var15 + 1;
                        p_Var12 = param_4;
                     }
 while ( p_Var8 != param_4 );
                  }

               }

            }

            if (uVar9 != 0 && uVar11 != 0) {
               p_Var8 = p_Var14 + uVar11;
               if (uVar11 < uVar9) {
                  if (p_Var14 < p_Var8) {
                     do {
                        param_4 = (_func_int_void_ptr_void_ptr*)( ulong )(byte) * p_Var13;
                        cVar2 = *p_Var14;
                        p_Var15 = p_Var14 + 1;
                        *p_Var14 = *p_Var13;
                        *p_Var13 = cVar2;
                        p_Var13 = p_Var13 + 1;
                        p_Var14 = p_Var15;
                     }
 while ( p_Var15 != p_Var8 );
                  }

               }
 else if (p_Var14 < p_Var13) {
                  do {
                     param_4 = (_func_int_void_ptr_void_ptr*)( ulong )(byte) * p_Var8;
                     cVar2 = *p_Var14;
                     p_Var15 = p_Var14 + 1;
                     *p_Var14 = *p_Var8;
                     *p_Var8 = cVar2;
                     p_Var8 = p_Var8 + 1;
                     p_Var14 = p_Var15;
                  }
 while ( p_Var15 != p_Var13 );
               }

            }

         }
 else {
            param_2 = 0;
            param_1 = local_48;
         }

         sort_r_simple<>(local_50, (ulong)p_Var10 >> 4, param_3, param_4);
         local_50 = (_func_int_void_ptr_void_ptr*)param_1;
         p_Var13 = (_func_int_void_ptr_void_ptr*)param_1;
      }
 while ( 9 < param_2 );
   }

   joined_r0x00101624:do {
      param_1 = (void*)( (long)param_1 + 0x10 );
      while (true) {
         if (local_48 <= param_1) {
            return;
         }

         p_Var8 = (_func_int_void_ptr_void_ptr*)param_1;
         if (param_1 <= p_Var13) break;
         do {
            p_Var15 = p_Var8 + -0x10;
            iVar7 = ( *(code*)param_3 )(p_Var15, p_Var8);
            if (iVar7 < 1) goto joined_r0x00101624;
            uVar3 = *(undefined8*)p_Var8;
            uVar4 = *(undefined8*)( p_Var8 + 8 );
            *(undefined8*)p_Var8 = *(undefined8*)p_Var15;
            *(undefined8*)( p_Var8 + 8 ) = *(undefined8*)( p_Var8 + -8 );
            *(undefined8*)p_Var15 = uVar3;
            *(undefined8*)( p_Var8 + -8 ) = uVar4;
            p_Var8 = p_Var15;
         }
 while ( p_Var13 < p_Var15 );
         param_1 = (void*)( (long)param_1 + 0x10 );
      }
;
   }
 while ( true );
}
/* AAT::ltag::sanitize(hb_sanitize_context_t*) const */undefined8 AAT::ltag::sanitize(ltag *this, hb_sanitize_context_t *param_1) {
   bool bVar1;
   uint uVar2;
   int iVar3;
   ltag *plVar4;
   uint uVar5;
   uint uVar6;
   plVar4 = this + 0xc;
   if (( ( ( ulong )((long)plVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( *(int*)this != 0 ) ) && ( ( ulong )((long)plVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) )) {
      uVar5 = *(uint*)( this + 8 );
      uVar2 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
      bVar1 = ( uVar5 << 0x18 ) >> 0x1e != 0;
      uVar5 = (uint)bVar1;
      if (( ( !bVar1 ) && ( ( ulong )((long)plVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar2 * 4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)plVar4) && ( iVar3 = *(int*)( param_1 + 0x1c ) + uVar2 * -4 ),*(int*)( param_1 + 0x1c ) = iVar3,0 < iVar3 ) )) {
         uVar2 = *(uint*)( this + 8 );
         if (uVar2 == 0) {
            return 1;
         }

         plVar4 = this + 0x10;
         if (( ulong )((long)plVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
            while (true) {
               if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)( this + ( ushort )(*(ushort*)( plVar4 + -4 ) << 8 | *(ushort*)( plVar4 + -4 ) >> 8) ) - *(long*)( param_1 + 8 ))) {
                  return 0;
               }

               uVar6 = ( uint )(ushort)(*(ushort*)( plVar4 + -2 ) << 8 | *(ushort*)( plVar4 + -2 ) >> 8);
               if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( this + ( ushort )(*(ushort*)( plVar4 + -4 ) << 8 | *(ushort*)( plVar4 + -4 ) >> 8) )) < uVar6) {
                  return 0;
               }

               iVar3 = *(int*)( param_1 + 0x1c ) - uVar6;
               *(int*)( param_1 + 0x1c ) = iVar3;
               if (iVar3 < 1) {
                  return 0;
               }

               uVar5 = uVar5 + 1;
               plVar4 = plVar4 + 4;
               if (( uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18 ) <= uVar5) break;
               if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)plVar4 - *(long*)( param_1 + 8 ))) {
                  return 0;
               }

            }
;
            return 1;
         }

      }

   }

   return 0;
}
/* OT::name::sanitize_records(hb_sanitize_context_t*) const */undefined8 OT::name::sanitize_records(name *this, hb_sanitize_context_t *param_1) {
   ushort uVar1;
   name *pnVar2;
   ushort uVar3;
   ulong uVar4;
   int iVar5;
   long lVar6;
   uint uVar7;
   uVar1 = *(ushort*)( this + 4 );
   if (( ulong )((long)( this + 6 ) - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
      uVar3 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
      iVar5 = (uint)uVar3 + (uint)uVar3 * 2;
      if (( ( uint )(iVar5 * 4) <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( this + 6 )) ) && ( iVar5 = *(int*)( param_1 + 0x1c ) + iVar5 * -4 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5) {
         if (uVar3 != 0) {
            lVar6 = *(long*)( param_1 + 8 );
            pnVar2 = this + 0x12;
            uVar4 = ( ulong ) * (uint*)( param_1 + 0x18 );
            do {
               if (uVar4 < ( ulong )((long)pnVar2 - lVar6)) {
                  return 0;
               }

               if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pnVar2 - *(long*)( param_1 + 8 ))) {
                  return 0;
               }

               lVar6 = *(long*)( param_1 + 8 );
               uVar4 = ( ulong ) * (uint*)( param_1 + 0x18 );
               if (uVar4 < ( ulong )((long)( this + ( ulong )(ushort)(*(ushort*)( pnVar2 + -2 ) << 8 | *(ushort*)( pnVar2 + -2 ) >> 8) + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) ) - lVar6)) {
                  return 0;
               }

               uVar7 = ( uint )(ushort)(*(ushort*)( pnVar2 + -4 ) << 8 | *(ushort*)( pnVar2 + -4 ) >> 8);
               if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( this + ( ulong )(ushort)(*(ushort*)( pnVar2 + -2 ) << 8 | *(ushort*)( pnVar2 + -2 ) >> 8) + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) )) < uVar7) {
                  return 0;
               }

               iVar5 = *(int*)( param_1 + 0x1c ) - uVar7;
               *(int*)( param_1 + 0x1c ) = iVar5;
               if (iVar5 < 1) {
                  return 0;
               }

               pnVar2 = pnVar2 + 0xc;
            }
 while ( pnVar2 != this + ( ulong )(uVar3 - 1) * 0xc + 0x1e );
         }

         return 1;
      }

   }

   return 0;
}
/* hb_table_lazy_loader_t<AAT::ltag, 33u, false>::create(hb_face_t*) */long hb_table_lazy_loader_t<AAT::ltag,33u,false>::create(hb_face_t *param_1) {
   ltag *this;
   char cVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined4 local_78[2];
   undefined1 local_70[16];
   uint local_60;
   uint local_5c;
   undefined4 local_58;
   undefined4 local_54;
   char local_50;
   int local_4c;
   long local_48;
   undefined4 local_40;
   undefined1 local_3c;
   undefined1 local_3b;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_50 = '\0';
   local_3b = 0;
   local_40 = hb_face_get_glyph_count();
   local_3c = 1;
   lVar2 = hb_face_reference_table(param_1, 0x6c746167);
   lVar3 = hb_blob_reference(lVar2);
   local_48 = lVar3;
   do {
      local_60 = *(uint*)( lVar3 + 0x18 );
      this * (ltag**)( lVar3 + 0x10 );
      local_5c = local_60 * 0x40;
      if (local_60 >> 0x1a == 0) {
         if (0x3fffffff < local_5c) {
            local_5c = 0x3fffffff;
         }

         if (local_5c < 0x4000) {
            local_5c = 0x4000;
         }

      }
 else {
         local_5c = 0x3fffffff;
      }

      local_70._8_8_ = this + local_60;
      local_70._0_8_ = this;
      local_4c = 0;
      local_78[0] = 0;
      local_54 = 0;
      if (this == (ltag*)0x0) {
         hb_blob_destroy(lVar3);
         LAB_00101a83:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return lVar2;
         }

         goto LAB_00101b5e;
      }

      cVar1 = AAT::ltag::sanitize(this, (hb_sanitize_context_t*)local_78);
      lVar3 = local_48;
      if (cVar1 != '\0') {
         if (local_4c == 0) {
            hb_blob_destroy(local_48);
         }
 else {
            local_4c = 0;
            cVar1 = AAT::ltag::sanitize(this, (hb_sanitize_context_t*)local_78);
            if (local_4c != 0) {
               hb_blob_destroy(local_48);
               goto LAB_00101ab0;
            }

            hb_blob_destroy(local_48);
            local_48 = 0;
            local_60 = 0;
            local_70 = (undefined1[16])0x0;
            if (cVar1 == '\0') goto LAB_00101ab0;
         }

         hb_blob_make_immutable(lVar2);
         goto LAB_00101a83;
      }

      if (( local_4c == 0 ) || ( local_50 != '\0' )) {
         LAB_00101aa8:hb_blob_destroy(lVar3);
         LAB_00101ab0:hb_blob_destroy(lVar2);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            lVar3 = hb_blob_get_empty();
            return lVar3;
         }

         LAB_00101b5e:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      local_70._0_8_ = hb_blob_get_data_writable(lVar2, 0);
      local_70._8_8_ = ( ulong ) * (uint*)( lVar2 + 0x18 ) + local_70._0_8_;
      if (local_70._0_8_ == 0) goto LAB_00101aa8;
      local_50 = '\x01';
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::name::accelerator_t::accelerator_t(hb_face_t*) */void OT::name::accelerator_t::accelerator_t(accelerator_t *this, hb_face_t *param_1) {
   name *pnVar1;
   hb_face_t *phVar2;
   name *this_00;
   int *__ptr;
   char cVar3;
   undefined *puVar4;
   long lVar5;
   ulong uVar6;
   void *pvVar7;
   _func_int_void_ptr_void_ptr *p_Var8;
   undefined8 uVar9;
   int *piVar10;
   long lVar11;
   _func_int_void_ptr_void_ptr *p_Var12;
   uint uVar13;
   uint uVar14;
   int iVar15;
   uint *puVar16;
   undefined *puVar17;
   ushort *puVar18;
   ushort uVar19;
   int iVar20;
   int *piVar21;
   undefined2 uVar22;
   uint uVar23;
   ulong uVar24;
   ushort uVar25;
   uint uVar26;
   uint uVar27;
   long in_FS_OFFSET;
   bool bVar28;
   bool bVar29;
   undefined4 local_88[2];
   undefined1 local_80[16];
   uint local_70;
   uint local_6c;
   undefined4 local_68;
   undefined4 local_64;
   char local_60;
   uint local_5c;
   long local_58;
   undefined4 local_50;
   undefined1 local_4c;
   undefined1 local_4b;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 16 ) ) = 0;
   }

   local_68 = 0;
   local_60 = '\0';
   local_4b = 0;
   local_50 = hb_face_get_glyph_count(param_1);
   local_4c = 1;
   puVar4 = (undefined*)hb_face_reference_table(param_1, 0x6e616d65);
   lVar5 = hb_blob_reference(puVar4);
   local_58 = lVar5;
   do {
      local_70 = *(uint*)( lVar5 + 0x18 );
      this_00 = *(name**)( lVar5 + 0x10 );
      local_6c = local_70 * 0x40;
      p_Var12 = (_func_int_void_ptr_void_ptr*)( ulong )(local_70 >> 0x1a);
      if (local_70 >> 0x1a == 0) {
         if (0x3fffffff < local_6c) {
            local_6c = 0x3fffffff;
         }

         if (local_6c < 0x4000) {
            local_6c = 0x4000;
         }

      }
 else {
         local_6c = 0x3fffffff;
      }

      local_80._8_8_ = this_00 + local_70;
      local_80._0_8_ = this_00;
      local_5c = 0;
      local_88[0] = 0;
      local_64 = 0;
      if (this_00 == (name*)0x0) {
         hb_blob_destroy(lVar5);
         goto LAB_00101d68;
      }

      pnVar1 = this_00 + 6;
      if ((ulong)local_70 < 6) goto LAB_00102343;
      if (( ( ushort )(*(ushort*)this_00 << 8 | *(ushort*)this_00 >> 8) < 2 ) && ( ( ulong )((long)pnVar1 - (long)this_00) <= (ulong)local_70 )) {
         uVar19 = *(ushort*)( this_00 + 2 ) << 8 | *(ushort*)( this_00 + 2 ) >> 8;
         iVar20 = (uint)uVar19 + (uint)uVar19 * 2;
         iVar15 = (int)( this_00 + local_70 );
         if (( ( uint )(iVar20 * 4) <= ( uint )(iVar15 - (int)pnVar1) ) && ( local_6c = local_6c + iVar20 * -4 ),0 < (int)local_6c) {
            uVar26 = ( uint )(ushort)(*(ushort*)( this_00 + 4 ) << 8 | *(ushort*)( this_00 + 4 ) >> 8);
            if (( uVar26 <= ( uint )(iVar15 - (int)this_00) ) && ( local_6c = local_6c - uVar26 ),0 < (int)local_6c) {
               cVar3 = sanitize_records(this_00, (hb_sanitize_context_t*)local_88);
               if (cVar3 != '\0') {
                  p_Var12 = (_func_int_void_ptr_void_ptr*)(ulong)local_5c;
                  if (local_5c == 0) {
                     hb_blob_destroy(local_58);
                  }
 else {
                     local_5c = 0;
                     if ((ulong)local_70 < ( ulong )((long)pnVar1 - local_80._0_8_)) {
                        hb_blob_destroy(local_58);
                        goto LAB_00102348;
                     }

                     lVar5 = local_58;
                     if (1 < ( ushort )(*(ushort*)this_00 << 8 | *(ushort*)this_00 >> 8)) goto LAB_00102343;
                     if ((ulong)local_70 < ( ulong )((long)pnVar1 - local_80._0_8_)) goto LAB_00102343;
                     uVar19 = *(ushort*)( this_00 + 2 ) << 8 | *(ushort*)( this_00 + 2 ) >> 8;
                     iVar15 = (uint)uVar19 + (uint)uVar19 * 2;
                     if (( ( ( ( ( uint )(local_80._8_4_ - (int)pnVar1) < ( uint )(iVar15 * 4) ) || ( local_6c = local_6c + iVar15 * -4 ),(int)local_6c < 1 ) ) || ( (ulong)local_70 < ( ulong )((long)this_00 - local_80._0_8_) ) ) || ( ( uVar26 = ( uint )(ushort)(*(ushort*)( this_00 + 4 ) << 8 | *(ushort*)( this_00 + 4 ) >> 8)(uint)(local_80._8_4_ - (int)this_00) < uVar26 || ( local_6c= local_6c - uVar26,(int)local_6c < 1 ) ) )) goto LAB_00102343;
                     hb_blob_destroy(local_58);
                     local_58 = 0;
                     local_70 = 0;
                     local_80 = (undefined1[16])0x0;
                     if (cVar3 == '\0') goto LAB_00102348;
                  }

                  hb_blob_make_immutable(puVar4);
                  goto LAB_00101d68;
               }

            }

         }

      }

      lVar5 = local_58;
      if (( local_5c == 0 ) || ( local_60 != '\0' )) goto LAB_00102343;
      local_80._0_8_ = hb_blob_get_data_writable(puVar4, 0);
      local_80._8_8_ = ( ulong ) * (uint*)( puVar4 + 0x18 ) + local_80._0_8_;
      if (local_80._0_8_ == 0) goto LAB_00102343;
      local_60 = '\x01';
   }
 while ( true );
   code_r0x00102536:if (lVar5 != 0) {
      LAB_001022f5:lVar11 = hb_blob_get_empty();
      if (lVar5 != lVar11) {
         hb_blob_destroy();
      }

   }

   goto LAB_00101e2c;
   LAB_00102343:hb_blob_destroy(lVar5);
   LAB_00102348:hb_blob_destroy(puVar4);
   puVar4 = (undefined*)hb_blob_get_empty();
   LAB_00101d68:*(undefined**)( this + 0x10 ) = puVar4;
   if (puVar4 == (undefined*)0x0) {
      puVar4 = &_hb_NullPool;
   }

   puVar17 = &_hb_NullPool;
   if (5 < *(uint*)( puVar4 + 0x18 )) {
      puVar17 = *(undefined**)( puVar4 + 0x10 );
   }

   uVar19 = *(ushort*)( puVar17 + 4 ) << 8 | *(ushort*)( puVar17 + 4 ) >> 8;
   uVar25 = *(ushort*)( puVar17 + 2 ) << 8 | *(ushort*)( puVar17 + 2 ) >> 8;
   uVar26 = *(uint*)( this + 0x1c );
   uVar6 = (ulong)uVar26;
   *(uint*)( this + 8 ) = *(uint*)( puVar4 + 0x18 ) - (uint)uVar19;
   uVar13 = *(uint*)( this + 0x18 );
   *(undefined**)this = puVar17 + uVar19;
   uVar14 = (uint)uVar25;
   if ((int)uVar13 < 0) {
      LAB_00101dfe:if (uVar14 != 0) {
         uVar13 = *(uint*)( this + 0x18 );
         goto LAB_00101e0b;
      }

      LAB_00102130:pvVar7 = *(void**)( this + 0x20 );
      if ((int)uVar6 != 0) goto LAB_0010213c;
      uVar26 = *(uint*)( this + 0x18 );
      LAB_0010238c:uVar14 = 0;
      if ((int)uVar26 < 0) goto LAB_0010220d;
   }
 else {
      if (uVar26 <= uVar25) {
         uVar26 = (uint)uVar25;
      }

      if (uVar13 < uVar26) {
         if (uVar26 < 0x10000000) {
            pvVar7 = *(void**)( this + 0x20 );
            LAB_00101dde:pvVar7 = realloc(pvVar7, (ulong)uVar26 << 4);
            if (pvVar7 == (void*)0x0) {
               uVar6 = ( ulong ) * (uint*)( this + 0x1c );
               if (*(uint*)( this + 0x18 ) < uVar26) {
                  *(uint*)( this + 0x18 ) = ~*(uint *)(this + 0x18);
               }

            }
 else {
               LAB_00101df2:*(uint*)( this + 0x18 ) = uVar26;
               *(void**)( this + 0x20 ) = pvVar7;
               uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            }

            goto LAB_00101dfe;
         }

      }
 else {
         if (uVar13 >> 2 <= uVar26) goto LAB_00101dfe;
         if (uVar26 < 0x10000000) {
            pvVar7 = *(void**)( this + 0x20 );
            if (uVar26 != 0) goto LAB_00101dde;
            free(pvVar7);
            pvVar7 = (void*)0x0;
            goto LAB_00101df2;
         }

      }

      uVar13 = ~uVar13;
      *(uint*)( this + 0x18 ) = uVar13;
      if (uVar14 != 0) {
         LAB_00101e0b:puVar18 = (ushort*)( puVar17 + 6 );
         uVar26 = 0;
         do {
            if ((int)uVar13 < 0) {
               LAB_001020d6:__hb_CrapPool = __hb_NullPool;
               __hb_ot_name_language_for_ms_code = _realloc;
               puVar16 = (uint*)&_hb_CrapPool;
            }
 else {
               uVar27 = (int)uVar6 + 1;
               uVar24 = (ulong)uVar13;
               if ((int)uVar27 < 0) {
                  uVar27 = 0;
               }

               if (uVar13 < uVar27) {
                  do {
                     uVar23 = (int)uVar24 + 8 + (int)( uVar24 >> 1 );
                     uVar24 = (ulong)uVar23;
                  }
 while ( uVar23 < uVar27 );
                  if (uVar23 < 0x10000000) {
                     pvVar7 = realloc(*(void**)( this + 0x20 ), uVar24 << 4);
                     if (pvVar7 != (void*)0x0) {
                        *(void**)( this + 0x20 ) = pvVar7;
                        uVar6 = ( ulong ) * (uint*)( this + 0x1c );
                        *(uint*)( this + 0x18 ) = uVar23;
                        goto LAB_00101eff;
                     }

                     if (uVar23 <= *(uint*)( this + 0x18 )) {
                        uVar6 = ( ulong ) * (uint*)( this + 0x1c );
                        goto LAB_00101efb;
                     }

                     *(uint*)( this + 0x18 ) = ~*(uint *)(this + 0x18);
                  }
 else {
                     *(uint*)( this + 0x18 ) = ~uVar13;
                  }

                  goto LAB_001020d6;
               }

               LAB_00101efb:pvVar7 = *(void**)( this + 0x20 );
               LAB_00101eff:if ((uint)uVar6 < uVar27) {
                  uVar13 = ( uVar27 - (uint)uVar6 ) * 0x10;
                  if (uVar13 != 0) {
                     memset((void*)( (long)pvVar7 + uVar6 * 0x10 ), 0, (ulong)uVar13);
                     pvVar7 = *(void**)( this + 0x20 );
                  }

               }

               *(uint*)( this + 0x1c ) = uVar27;
               puVar16 = (uint*)( (long)pvVar7 + ( ulong )(uVar27 - 1) * 0x10 );
            }

            uVar19 = puVar18[2];
            uVar25 = *puVar18 << 8 | *puVar18 >> 8;
            *puVar16 = ( uint )(ushort)(puVar18[3] << 8 | puVar18[3] >> 8);
            uVar13 = ( uint )(ushort)(uVar19 << 8 | uVar19 >> 8);
            if (uVar25 == 3) {
               uVar9 = _hb_ot_name_language_for_ms_code(uVar13);
               uVar25 = *puVar18 << 8 | *puVar18 >> 8;
               LAB_00101e8c:*(undefined8*)( puVar16 + 2 ) = uVar9;
               uVar19 = puVar18[1] << 8 | puVar18[1] >> 8;
               bVar28 = uVar25 == 3;
               if (( uVar19 != 10 ) || ( uVar22 = !bVar28 )) goto LAB_00101f8a;
            }
 else {
               if (uVar25 == 1) {
                  uVar9 = _hb_ot_name_language_for_mac_code(uVar13);
                  uVar25 = *puVar18 << 8 | *puVar18 >> 8;
                  goto LAB_00101e8c;
               }

               if (uVar25 == 0) {
                  phVar2 = param_1 + 0x178;
                  LAB_00101e2c:lVar5 = *(long*)phVar2;
                  if (lVar5 == 0) {
                     if (*(hb_face_t**)( param_1 + 0x70 ) == (hb_face_t*)0x0) {
                        lVar5 = hb_blob_get_empty();
                     }
 else {
                        lVar5 = hb_table_lazy_loader_t<AAT::ltag,33u,false>::create(*(hb_face_t**)( param_1 + 0x70 ));
                        if (lVar5 == 0) {
                           lVar5 = hb_blob_get_empty();
                           LOCK();
                           lVar11 = *(long*)phVar2;
                           if (lVar11 == 0) {
                              *(long*)phVar2 = lVar5;
                           }

                           UNLOCK();
                           if (lVar11 != 0) goto code_r0x00102536;
                        }
 else {
                           LOCK();
                           lVar11 = *(long*)phVar2;
                           if (lVar11 == 0) {
                              *(long*)phVar2 = lVar5;
                           }

                           UNLOCK();
                           if (lVar11 != 0) goto LAB_001022f5;
                        }

                     }

                  }

                  p_Var8 = (_func_int_void_ptr_void_ptr*)&_hb_NullPool;
                  p_Var12 = (_func_int_void_ptr_void_ptr*)&_hb_NullPool;
                  if (0xb < *(uint*)( lVar5 + 0x18 )) {
                     p_Var12 = *(_func_int_void_ptr_void_ptr**)( lVar5 + 0x10 );
                  }

                  uVar27 = *(uint*)( p_Var12 + 8 );
                  if (uVar13 < ( uVar27 >> 0x18 | ( uVar27 & 0xff0000 ) >> 8 | ( uVar27 & 0xff00 ) << 8 | uVar27 << 0x18 )) {
                     p_Var8 = p_Var12 + ( ulong )(uVar13 + 1) * 4 + 8;
                  }

                  uVar9 = hb_language_from_string(p_Var12 + ( ushort )(*(ushort*)p_Var8 << 8 | *(ushort*)p_Var8 >> 8), *(ushort*)( p_Var8 + 2 ) << 8 | *(ushort*)( p_Var8 + 2 ) >> 8);
                  uVar25 = *puVar18 << 8 | *puVar18 >> 8;
                  goto LAB_00101e8c;
               }

               uVar19 = puVar18[1];
               puVar16[2] = 0;
               puVar16[3] = 0;
               bVar28 = false;
               uVar19 = uVar19 << 8 | uVar19 >> 8;
               LAB_00101f8a:bVar29 = uVar25 != 0;
               if (( ( ( ( uVar19 != 6 ) || ( uVar22 = 1 ),bVar29 ) ) && ( ( uVar19 != 4 || ( uVar22 = 2 ),bVar29 ) ) )) {
                  if (uVar19 == 2) {
                     uVar22 = 5;
                     if (bVar29) {
                        LAB_00101fff:uVar22 = 7;
                        if (( ( uVar19 != 0 || uVar25 != 0 ) && ( ( !bVar28 || ( uVar22 = 8 ),uVar19 != 0 ) ) )) {
                           uVar22 = 0x2a;
                        }

                     }

                  }
 else if (( bVar29 ) || ( uVar22 = uVar19 != 1 )) goto LAB_00101fff;
               }

            }

            *(short*)( (long)puVar16 + 6 ) = (short)uVar26;
            uVar26 = uVar26 + 1;
            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            puVar18 = puVar18 + 6;
            *(undefined2*)( puVar16 + 1 ) = uVar22;
            if (uVar14 <= uVar26) goto LAB_00102130;
            uVar13 = *(uint*)( this + 0x18 );
         }
 while ( true );
      }

      pvVar7 = *(void**)( this + 0x20 );
      LAB_0010213c:sort_r_simple<>(pvVar7, uVar6, 0x101320, p_Var12);
      uVar13 = *(uint*)( this + 0x1c );
      uVar26 = *(uint*)( this + 0x18 );
      if (uVar13 == 0) goto LAB_0010238c;
      __ptr = *(int**)( this + 0x20 );
      uVar14 = 0;
      uVar6 = 0;
      piVar10 = __ptr;
      do {
         if (( ( (short)piVar10[1] != 0x2a ) && ( *(long*)( piVar10 + 2 ) != 0 ) ) && ( ( uVar14 == 0 || ( ( __ptr[( ulong )(uVar14 - 1) * 4] != *piVar10 || ( *(long*)( piVar10 + 2 ) != *(long*)( __ptr + ( ulong )(uVar14 - 1) * 4 + 2 ) ) ) ) ) )) {
            piVar21 = __ptr + uVar6 * 4;
            if (uVar13 <= (uint)uVar6) {
               __hb_CrapPool = __hb_NullPool;
               __hb_ot_name_language_for_ms_code = _realloc;
               piVar21 = (int*)&_hb_CrapPool;
            }

            uVar9 = *(undefined8*)( piVar10 + 2 );
            uVar6 = ( ulong )((uint)uVar6 + 1);
            *(undefined8*)piVar21 = *(undefined8*)piVar10;
            *(undefined8*)( piVar21 + 2 ) = uVar9;
         }

         uVar14 = uVar14 + 1;
         piVar10 = piVar10 + 4;
      }
 while ( uVar14 != uVar13 );
      if ((int)uVar26 < 0) goto LAB_0010220d;
      uVar14 = 0;
      if (-1 < (int)(uint)uVar6) {
         uVar14 = (uint)uVar6;
      }

      uVar27 = uVar26;
      if (uVar26 < uVar14) {
         do {
            uVar27 = ( uVar27 >> 1 ) + 8 + uVar27;
         }
 while ( uVar27 < uVar14 );
         if (0xfffffff < uVar27) {
            *(uint*)( this + 0x18 ) = ~uVar26;
            goto LAB_0010220d;
         }

         pvVar7 = realloc(__ptr, (ulong)uVar27 << 4);
         if (pvVar7 == (void*)0x0) {
            if (*(uint*)( this + 0x18 ) < uVar27) {
               *(uint*)( this + 0x18 ) = ~*(uint *)(this + 0x18);
               goto LAB_0010220d;
            }

         }
 else {
            *(void**)( this + 0x20 ) = pvVar7;
            *(uint*)( this + 0x18 ) = uVar27;
         }

         uVar13 = *(uint*)( this + 0x1c );
      }

      if (uVar13 < uVar14) {
         uVar26 = ( uVar14 - uVar13 ) * 0x10;
         if (uVar26 != 0) {
            memset((void*)( (ulong)uVar13 * 0x10 + *(long*)( this + 0x20 ) ), 0, (ulong)uVar26);
         }

      }

   }

   *(uint*)( this + 0x1c ) = uVar14;
   LAB_0010220d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* OT::name::accelerator_t::accelerator_t(hb_face_t*) */void OT::name::accelerator_t::accelerator_t(accelerator_t *this, hb_face_t *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

