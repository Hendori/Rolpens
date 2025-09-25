undefined8 ft_sdf_init(long param_1) {
   *(undefined1*)( param_1 + 0x86 ) = 0;
   *(undefined2*)( param_1 + 0x84 ) = 0;
   *(undefined4*)( param_1 + 0x80 ) = 8;
   return 0;
}
void ft_sdf_done(void) {
   return;
}
void ft_sdf_set_mode(long param_1) {
   /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( *(long*)( param_1 + 0x18 ) + 0x70 ) + 0x18 ) )(*(undefined8*)( param_1 + 0x68 ));
   return;
}
void bsdf_raster_reset(void) {
   return;
}
undefined8 bsdf_raster_set_mode(void) {
   return 0;
}
void split_cubic(int *param_1) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   *(undefined8*)( param_1 + 0x18 ) = *(undefined8*)( param_1 + 0xc );
   *(undefined8*)( param_1 + 0x1a ) = *(undefined8*)( param_1 + 0xe );
   iVar1 = *param_1 + (int)*(undefined8*)( param_1 + 4 );
   iVar4 = (int)*(undefined8*)( param_1 + 4 ) + (int)*(undefined8*)( param_1 + 8 );
   iVar2 = (int)*(undefined8*)( param_1 + 8 ) + param_1[0xc];
   iVar3 = iVar2 + iVar4;
   *(long*)( param_1 + 0x14 ) = (long)( iVar2 / 2 );
   iVar2 = iVar3 + 3;
   if (-1 < iVar3) {
      iVar2 = iVar3;
   }

   *(long*)( param_1 + 0x10 ) = (long)( iVar2 >> 2 );
   iVar4 = iVar1 + iVar4;
   *(long*)( param_1 + 4 ) = (long)( iVar1 / 2 );
   iVar2 = iVar4 + 3;
   if (-1 < iVar4) {
      iVar2 = iVar4;
   }

   iVar3 = iVar3 + iVar4;
   if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
   }

   *(long*)( param_1 + 8 ) = (long)( iVar2 >> 2 );
   iVar1 = param_1[2] + (int)*(undefined8*)( param_1 + 6 );
   *(long*)( param_1 + 0xc ) = (long)( iVar3 >> 3 );
   iVar4 = (int)*(undefined8*)( param_1 + 6 ) + (int)*(undefined8*)( param_1 + 10 );
   iVar2 = (int)*(undefined8*)( param_1 + 10 ) + param_1[0xe];
   iVar3 = iVar2 + iVar4;
   *(long*)( param_1 + 0x16 ) = (long)( iVar2 / 2 );
   iVar2 = iVar3 + 3;
   if (-1 < iVar3) {
      iVar2 = iVar3;
   }

   *(long*)( param_1 + 0x12 ) = (long)( iVar2 >> 2 );
   iVar4 = iVar1 + iVar4;
   *(long*)( param_1 + 6 ) = (long)( iVar1 / 2 );
   iVar2 = iVar4 + 3;
   if (-1 < iVar4) {
      iVar2 = iVar4;
   }

   iVar3 = iVar3 + iVar4;
   if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
   }

   *(long*)( param_1 + 10 ) = (long)( iVar2 >> 2 );
   *(long*)( param_1 + 0xe ) = (long)( iVar3 >> 3 );
   return;
}
void ft_sdf_get_cbox(long param_1, long param_2, undefined1 (*param_3)[16]) {
   *param_3 = (undefined1[16])0x0;
   param_3[1] = (undefined1[16])0x0;
   if (*(int*)( param_2 + 0x90 ) != *(int*)( param_1 + 0x20 )) {
      return;
   }

   FT_Outline_Get_CBox(param_2 + 200, param_3);
   return;
}
void bsdf_raster_done(undefined8 *param_1) {
   ft_mem_free(*param_1, param_1);
   return;
}
void sdf_raster_done(undefined8 *param_1) {
   ft_mem_free(*param_1, param_1);
   return;
}
ulong ft_sdf_render(long param_1, long param_2, int param_3, long *param_4) {
   uint *puVar1;
   long lVar2;
   byte bVar3;
   int iVar4;
   undefined8 uVar5;
   char cVar6;
   undefined8 uVar7;
   ulong uVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   int iVar12;
   uint local_ac;
   long local_a8;
   long local_a0;
   undefined4 local_98;
   undefined4 local_48;
   undefined2 local_44;
   undefined1 local_42;
   long local_40;
   uVar5 = *(undefined8*)( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar10 = *(long*)( param_2 + 0x128 );
   local_ac = 0;
   if (*(int*)( param_2 + 0x90 ) == *(int*)( param_1 + 0x20 )) {
      if (param_3 == 5) {
         if (( *(uint*)( lVar10 + 8 ) & 1 ) != 0) {
            ft_mem_free(uVar5, *(undefined8*)( param_2 + 0xa8 ));
            *(undefined8*)( param_2 + 0xa8 ) = 0;
            puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
            *puVar1 = *puVar1 & 0xfffffffe;
         }

         cVar6 = ft_glyphslot_preset_bitmap(param_2, 0, param_4);
         if (cVar6 != '\0') {
            local_ac = 0x62;
            lVar10 = *(long*)( param_2 + 0x128 );
            goto LAB_0010020a;
         }

         if (( *(int*)( param_2 + 0x98 ) == 0 ) || ( *(int*)( param_2 + 0xa0 ) == 0 )) {
            LAB_001004c0:uVar8 = (ulong)local_ac;
            LAB_001004c4:if ((int)uVar8 == 0) {
               *(undefined4*)( param_2 + 0x90 ) = 0x62697473;
               goto LAB_00100214;
            }

         }
 else {
            iVar12 = *(int*)( param_1 + 0x80 );
            *(undefined1*)( param_2 + 0xb2 ) = 2;
            iVar4 = *(int*)( param_2 + 0x98 ) + iVar12 * 2;
            iVar9 = iVar12 * 2 + *(int*)( param_2 + 0x9c );
            *(int*)( param_2 + 0x9c ) = iVar9;
            *(int*)( param_2 + 0xa0 ) = iVar9;
            *(int*)( param_2 + 0x98 ) = iVar4;
            *(undefined2*)( param_2 + 0xb0 ) = 0xff;
            uVar7 = ft_mem_realloc(uVar5, (long)iVar9, 0, iVar4, 0, &local_ac);
            *(undefined8*)( param_2 + 0xa8 ) = uVar7;
            if (local_ac == 0) {
               iVar4 = *(int*)( param_2 + 0x98 );
               puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
               *puVar1 = *puVar1 | 1;
               iVar9 = iVar12 + (int)( ( ulong ) * (undefined8*)( param_2 + 0xc0 ) >> 0x20 );
               iVar12 = (int)*(undefined8*)( param_2 + 0xc0 ) - iVar12;
               *(ulong*)( param_2 + 0xc0 ) = CONCAT44(iVar9, iVar12);
               lVar10 = (long)( iVar12 * -0x40 );
               lVar11 = (long)( iVar4 << 6 ) + (long)( iVar9 * -0x40 );
               if (param_4 != (long*)0x0) {
                  lVar10 = lVar10 + *param_4;
                  lVar11 = lVar11 + param_4[1];
               }

               lVar2 = param_2 + 200;
               local_a8 = param_2 + 0x98;
               local_a0 = lVar2;
               if (lVar10 != 0 || lVar11 != 0) {
                  FT_Outline_Translate(lVar2, lVar10, lVar11);
                  local_48 = *(undefined4*)( param_1 + 0x80 );
                  local_98 = 8;
                  local_44 = *(undefined2*)( param_1 + 0x84 );
                  local_42 = *(undefined1*)( param_1 + 0x86 );
                  local_ac = ( **(code**)( param_1 + 0x70 ) )(*(undefined8*)( param_1 + 0x68 ), &local_a8);
                  FT_Outline_Translate(lVar2, -lVar10, -lVar11);
                  goto LAB_001004c0;
               }

               local_48 = *(undefined4*)( param_1 + 0x80 );
               local_44 = *(undefined2*)( param_1 + 0x84 );
               local_98 = 8;
               local_42 = *(undefined1*)( param_1 + 0x86 );
               uVar8 = ( **(code**)( param_1 + 0x70 ) )(*(undefined8*)( param_1 + 0x68 ), &local_a8);
               local_ac = (uint)uVar8;
               goto LAB_001004c4;
            }

         }

         lVar10 = *(long*)( param_2 + 0x128 );
         goto LAB_0010020a;
      }

      local_ac = 0x13;
      bVar3 = *(byte*)( lVar10 + 8 );
   }
 else {
      local_ac = 0x12;
      LAB_0010020a:bVar3 = *(byte*)( lVar10 + 8 );
   }

   if (( bVar3 & 1 ) != 0) {
      ft_mem_free(uVar5, *(undefined8*)( param_2 + 0xa8 ));
      *(undefined8*)( param_2 + 0xa8 ) = 0;
      puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
      *puVar1 = *puVar1 & 0xfffffffe;
   }

   uVar8 = (ulong)local_ac;
   LAB_00100214:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
void ft_sdf_requester(void) {
   ft_service_list_lookup(sdf_services);
   return;
}
undefined8 sdf_property_get(long param_1, char *param_2, uint *param_3) {
   int iVar1;
   iVar1 = strcmp(param_2, "spread");
   if (iVar1 == 0) {
      *param_3 = *(uint*)( param_1 + 0x80 );
   }
 else {
      iVar1 = strcmp(param_2, "flip_sign");
      if (iVar1 == 0) {
         *param_3 = ( uint ) * (byte*)( param_1 + 0x84 );
      }
 else {
         iVar1 = strcmp(param_2, "flip_y");
         if (iVar1 == 0) {
            *param_3 = ( uint ) * (byte*)( param_1 + 0x85 );
         }
 else {
            iVar1 = strcmp(param_2, "overlaps");
            if (iVar1 != 0) {
               return 0xc;
            }

            *param_3 = ( uint ) * (byte*)( param_1 + 0x86 );
         }

      }

   }

   return 0;
}
undefined8 sdf_property_set(long param_1, char *param_2, int *param_3) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = strcmp(param_2, "spread");
   if (iVar1 == 0) {
      uVar2 = 6;
      if (*param_3 - 2U < 0x1f) {
         *(int*)( param_1 + 0x80 ) = *param_3;
         uVar2 = 0;
      }

   }
 else {
      iVar1 = strcmp(param_2, "flip_sign");
      if (iVar1 == 0) {
         *(bool*)( param_1 + 0x84 ) = *param_3 != 0;
         uVar2 = 0;
      }
 else {
         iVar1 = strcmp(param_2, "flip_y");
         if (iVar1 == 0) {
            *(bool*)( param_1 + 0x85 ) = *param_3 != 0;
            uVar2 = 0;
         }
 else {
            iVar1 = strcmp(param_2, "overlaps");
            uVar2 = 0xc;
            if (iVar1 == 0) {
               *(char*)( param_1 + 0x86 ) = (char)*param_3;
               uVar2 = 0;
            }

         }

      }

   }

   return uVar2;
}
ulong ft_bsdf_render(long param_1, long param_2, int param_3, long param_4) {
   uint *puVar1;
   uint uVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   int iVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   uint local_dc;
   undefined8 local_d8;
   int iStack_d0;
   undefined4 uStack_cc;
   long local_c8;
   undefined2 uStack_c0;
   undefined1 uStack_be;
   undefined5 uStack_bd;
   undefined8 local_b8;
   undefined8 *local_a8;
   long local_a0;
   undefined4 local_98;
   undefined4 local_48;
   undefined2 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_dc = 0;
   FT_Bitmap_Init(&local_d8);
   uVar3 = *(undefined8*)( param_1 + 0x10 );
   if (*(int*)( param_2 + 0x90 ) == *(int*)( param_1 + 0x20 )) {
      if (param_3 == 5) {
         if (param_4 == 0) {
            if (( *(int*)( param_2 + 0x98 ) == 0 ) || ( *(int*)( param_2 + 0xa0 ) == 0 )) {
               uVar4 = (ulong)local_dc;
               auVar7 = (undefined1[16])0x0;
               LAB_001007b8:if ((int)uVar4 == 0) {
                  if (( *(byte*)( *(long*)( param_2 + 0x128 ) + 8 ) & 1 ) != 0) {
                     ft_mem_free(uVar3, *(undefined8*)( param_2 + 0xa8 ));
                     uVar4 = (ulong)local_dc;
                     auVar7._8_8_ = 0;
                  }

                  auVar6._4_4_ = (int)( ( ulong ) * (undefined8*)( param_2 + 0xc0 ) >> 0x20 ) + auVar7._0_4_;
                  auVar6._8_4_ = auVar7._8_4_;
                  auVar6._12_4_ = auVar7._12_4_;
                  *(undefined8*)( param_2 + 0x98 ) = local_d8;
                  *(ulong*)( param_2 + 0xa0 ) = CONCAT44(uStack_cc, iStack_d0);
                  *(undefined8*)( param_2 + 0xb8 ) = local_b8;
                  *(long*)( param_2 + 0xa8 ) = local_c8;
                  *(ulong*)( param_2 + 0xb0 ) = CONCAT53(uStack_bd, CONCAT12(uStack_be, uStack_c0));
                  auVar6._0_4_ = (int)*(undefined8*)( param_2 + 0xc0 ) - auVar7._0_4_;
                  *(long*)( param_2 + 0xc0 ) = auVar6._0_8_;
                  if (local_c8 != 0) {
                     puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
                     *puVar1 = *puVar1 | 1;
                  }

                  goto LAB_00100716;
               }

            }
 else if (( *(byte*)( *(long*)( param_2 + 0x128 ) + 8 ) & 1 ) == 0) {
               local_dc = 6;
            }
 else {
               FT_Bitmap_New(&local_d8);
               uVar2 = *(uint*)( param_1 + 0x80 );
               uStack_be = 2;
               iStack_d0 = uVar2 * 2;
               uStack_c0 = 0xff;
               iVar5 = iStack_d0 + (int)*(undefined8*)( param_2 + 0x98 );
               iStack_d0 = iStack_d0 + (int)( ( ulong ) * (undefined8*)( param_2 + 0x98 ) >> 0x20 );
               local_d8 = CONCAT44(iStack_d0, iVar5);
               local_c8 = ft_mem_realloc(uVar3, (long)iStack_d0, 0, iVar5, 0, &local_dc);
               if (local_dc == 0) {
                  local_a0 = param_2 + 0x98;
                  local_48 = *(undefined4*)( param_1 + 0x80 );
                  local_44 = *(undefined2*)( param_1 + 0x84 );
                  local_98 = 8;
                  local_a8 = &local_d8;
                  uVar4 = ( **(code**)( param_1 + 0x70 ) )(*(undefined8*)( param_1 + 0x68 ), &local_a8);
                  auVar7 = ZEXT416(uVar2);
                  local_dc = (uint)uVar4;
                  goto LAB_001007b8;
               }

            }

         }
 else {
            local_dc = 7;
         }

      }
 else {
         local_dc = 0x13;
      }

   }
 else {
      local_dc = 0x12;
   }

   if (local_c8 != 0) {
      ft_mem_free(uVar3);
   }

   uVar4 = (ulong)local_dc;
   LAB_00100716:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
void compare_neighbor(int *param_1, int param_2, int param_3, int param_4) {
   int iVar1;
   int *piVar2;
   long in_FS_OFFSET;
   long local_28;
   long lStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar2 = param_1 + ( (long)( param_4 * param_3 ) + (long)param_2 ) * 8;
   if (*piVar2 + -0x10000 < *param_1) {
      local_28 = (long)( param_2 << 0x10 ) + *(long*)( piVar2 + 2 );
      lStack_20 = (long)( param_3 << 0x10 ) + *(long*)( piVar2 + 4 );
      iVar1 = FT_Vector_Length(&local_28);
      if (iVar1 < *param_1) {
         *param_1 = iVar1;
         *(long*)( param_1 + 2 ) = local_28;
         *(long*)( param_1 + 4 ) = lStack_20;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int map_fixed_to_sdf(int param_1, int param_2) {
   int iVar1;
   int iVar2;
   iVar1 = FT_DivFix((long)param_1, (long)param_2);
   iVar2 = -iVar1;
   if (0 < iVar1) {
      iVar2 = iVar1;
   }

   iVar2 = iVar2 >> 9;
   if (( 0 < iVar1 ) && ( 0x7f < iVar2 )) {
      return -1;
   }

   if (iVar1 < 0) {
      if (0x80 < iVar2) {
         return 0;
      }

      if (iVar1 < 0) {
         return -0x80 - iVar2;
      }

   }

   return iVar2 + -0x80;
}
int bsdf_raster_new(undefined8 param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)ft_mem_alloc(param_1, 8, &local_24);
   if (local_24 == 0) {
      *puVar1 = param_1;
   }

   *param_2 = puVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int sdf_raster_new(undefined8 param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)ft_mem_alloc(param_1, 8, &local_24);
   if (local_24 == 0) {
      *puVar1 = param_1;
   }

   *param_2 = puVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int sdf_edge_new(long param_1, undefined8 *param_2) {
   int iVar1;
   undefined1(*pauVar2)[16];
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = 0;
   iVar1 = 6;
   if (param_1 != 0) {
      pauVar2 = (undefined1(*) [16])ft_mem_qalloc(param_1, 0x50, &local_14);
      iVar1 = local_14;
      if (local_14 == 0) {
         *pauVar2 = (undefined1[16])0x0;
         for (int i = 0; i < 4; i++) {
            pauVar2[( i + 1 )] = (undefined1[16])0;
         }

         *param_2 = pauVar2;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 sdf_cubic_to(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined8*)0x0;
   if (( param_1 == (undefined8*)0x0 || param_3 == (undefined8*)0x0 ) || ( param_2 == (undefined8*)0x0 )) {
      uVar5 = 6;
   }
 else {
      puVar1 = (undefined8*)param_4[1];
      uVar5 = sdf_edge_new(*param_4, &local_38);
      if ((int)uVar5 == 0) {
         uVar3 = puVar1[1];
         uVar2 = puVar1[2];
         *local_38 = *puVar1;
         local_38[1] = uVar3;
         uVar3 = *param_1;
         uVar4 = param_1[1];
         *(undefined4*)( local_38 + 8 ) = 3;
         local_38[4] = uVar3;
         local_38[5] = uVar4;
         uVar3 = param_2[1];
         local_38[6] = *param_2;
         local_38[7] = uVar3;
         uVar3 = *param_3;
         uVar4 = param_3[1];
         local_38[9] = uVar2;
         local_38[2] = uVar3;
         local_38[3] = uVar4;
         uVar2 = *param_3;
         uVar3 = param_3[1];
         puVar1[2] = local_38;
         *puVar1 = uVar2;
         puVar1[1] = uVar3;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 sdf_line_to(long *param_1, undefined8 *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (long*)0x0;
   uVar5 = 6;
   if (param_1 != (long*)0x0) {
      plVar1 = (long*)param_2[1];
      if (*plVar1 == *param_1) {
         uVar5 = 0;
         if (plVar1[1] == param_1[1]) goto LAB_00100cd9;
      }

      uVar5 = sdf_edge_new(*param_2, &local_28);
      if ((int)uVar5 == 0) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *local_28 = *plVar1;
         local_28[1] = lVar3;
         lVar3 = *param_1;
         lVar4 = param_1[1];
         *(undefined4*)( local_28 + 8 ) = 1;
         local_28[2] = lVar3;
         local_28[3] = lVar4;
         lVar3 = *param_1;
         lVar4 = param_1[1];
         local_28[9] = lVar2;
         plVar1[2] = (long)local_28;
         *plVar1 = lVar3;
         plVar1[1] = lVar4;
      }

   }

   LAB_00100cd9:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 sdf_conic_to(long *param_1, long *param_2, undefined8 *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (long*)0x0;
   if (( param_1 == (long*)0x0 ) || ( param_2 == (long*)0x0 )) {
      uVar5 = 6;
   }
 else {
      plVar1 = (long*)param_3[1];
      if (( ( *plVar1 == *param_1 ) && ( plVar1[1] == param_1[1] ) ) || ( ( *param_1 == *param_2 && ( param_1[1] == param_2[1] ) ) )) {
         sdf_line_to(param_2, param_3);
         uVar5 = 0;
      }
 else {
         uVar5 = sdf_edge_new(*param_3, &local_28);
         if ((int)uVar5 == 0) {
            lVar3 = plVar1[1];
            lVar2 = plVar1[2];
            *local_28 = *plVar1;
            local_28[1] = lVar3;
            lVar3 = *param_1;
            lVar4 = param_1[1];
            *(undefined4*)( local_28 + 8 ) = 2;
            local_28[4] = lVar3;
            local_28[5] = lVar4;
            lVar3 = *param_2;
            lVar4 = param_2[1];
            local_28[9] = lVar2;
            local_28[2] = lVar3;
            local_28[3] = lVar4;
            lVar2 = *param_2;
            lVar3 = param_2[1];
            plVar1[2] = (long)local_28;
            *plVar1 = lVar2;
            plVar1[1] = lVar3;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 split_sdf_conic(long param_1, undefined8 *param_2, uint param_3, long *param_4) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 *local_88;
   long *local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   long local_68;
   long lStack_60;
   long local_58;
   long lStack_50;
   long local_48;
   long local_40;
   long local_38;
   long lStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = 6;
   if (param_1 != 0) {
      local_38 = param_2[4];
      lStack_30 = param_2[5];
      local_78 = *param_2;
      uStack_70 = param_2[1];
      iVar4 = (int)param_2[2] + (int)*param_2;
      iVar1 = (int)param_2[2] + (int)local_38;
      iVar2 = iVar1 + iVar4;
      local_48 = (long)( iVar1 / 2 );
      if (iVar2 < 0) {
         iVar2 = iVar2 + 3;
      }

      local_58 = (long)( iVar2 >> 2 );
      local_68 = (long)( iVar4 / 2 );
      iVar1 = (int)uStack_70 + (int)param_2[3];
      lStack_50._0_4_ = (int)lStack_30;
      lStack_50._0_4_ = (int)param_2[3] + (int)lStack_50;
      iVar2 = (int)lStack_50 + iVar1;
      local_40 = (long)( (int)lStack_50 / 2 );
      if (iVar2 < 0) {
         iVar2 = iVar2 + 3;
      }

      lStack_50 = (long)( iVar2 >> 2 );
      lStack_60 = (long)( iVar1 / 2 );
      if (param_3 < 3) {
         uVar3 = sdf_edge_new(param_1, &local_88);
         if ((int)uVar3 == 0) {
            uVar3 = sdf_edge_new(param_1, &local_80);
            if ((int)uVar3 == 0) {
               *(undefined4*)( local_88 + 8 ) = 1;
               *local_88 = local_78;
               local_88[1] = uStack_70;
               local_88[2] = local_58;
               local_88[3] = lStack_50;
               *(undefined4*)( local_80 + 8 ) = 1;
               *local_80 = local_58;
               local_80[1] = lStack_50;
               local_80[2] = local_38;
               local_80[3] = lStack_30;
               local_88[9] = local_80;
               local_80[9] = *param_4;
               *param_4 = (long)local_88;
            }

         }

      }
 else {
         uVar3 = split_sdf_conic(param_1, &local_78, param_3 >> 1, param_4);
         if ((int)uVar3 == 0) {
            uVar3 = split_sdf_conic(param_1, &local_58, param_3 >> 1, param_4);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 split_sdf_cubic(long param_1, long *param_2, uint param_3, long *param_4) {
   undefined8 uVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long *local_a8;
   long *local_a0;
   long local_98;
   long lStack_90;
   long local_88;
   long lStack_80;
   long local_78;
   long lStack_70;
   long local_68;
   long lStack_60;
   long local_38;
   long lStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 6;
   if (param_1 == 0) goto LAB_001010f0;
   local_68 = param_2[6];
   lStack_60 = param_2[7];
   local_98 = *param_2;
   lStack_90 = param_2[1];
   local_88 = param_2[2];
   lStack_80 = param_2[3];
   local_78 = param_2[4];
   lStack_70 = param_2[5];
   if (( ulong )(param_2[2] * -3 + *param_2 * 2 + 0xf + local_68) < 0x1f) {
      if (( ( 0x1e < ( ulong )(lStack_60 + 0xf + lStack_80 * -3 + lStack_90 * 2) ) || ( 0x1e < ( ulong )(local_78 * -3 + *param_2 + 0xf + local_68 * 2) ) ) || ( 0x1e < ( ulong )(lStack_70 * -3 + lStack_90 + 0xf + lStack_60 * 2) )) goto LAB_00101070;
      split_cubic(&local_98);
   }
 else {
      LAB_00101070:plVar2 = &local_98;
      split_cubic(plVar2);
      if (2 < param_3) {
         uVar1 = split_sdf_cubic(param_1, plVar2, param_3 >> 1, param_4);
         if ((int)uVar1 == 0) {
            uVar1 = split_sdf_cubic(param_1, &local_68, param_3 >> 1, param_4);
         }

         goto LAB_001010f0;
      }

   }

   uVar1 = sdf_edge_new(param_1, &local_a8);
   if ((int)uVar1 == 0) {
      uVar1 = sdf_edge_new(param_1, &local_a0);
      if ((int)uVar1 == 0) {
         *(undefined4*)( local_a8 + 8 ) = 1;
         *local_a8 = local_98;
         local_a8[1] = lStack_90;
         local_a8[2] = local_68;
         local_a8[3] = lStack_60;
         *(undefined4*)( local_a0 + 8 ) = 1;
         *local_a0 = local_68;
         local_a0[1] = lStack_60;
         local_a0[2] = local_38;
         local_a0[3] = lStack_30;
         local_a8[9] = (long)local_a0;
         local_a0[9] = *param_4;
         *param_4 = (long)local_a8;
      }

   }

   LAB_001010f0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ft_sdf_transform(long param_1, long param_2, long param_3, undefined8 *param_4) {
   undefined8 uVar1;
   uVar1 = 6;
   if (*(int*)( param_2 + 0x90 ) == *(int*)( param_1 + 0x20 )) {
      if (param_3 != 0) {
         FT_Outline_Transform(param_2 + 200, param_3);
      }

      if (param_4 != (undefined8*)0x0) {
         FT_Outline_Translate(param_2 + 200, *param_4, param_4[1]);
      }

      uVar1 = 0;
   }

   return uVar1;
}
void sdf_contour_done(long param_1, long *param_2) {
   long lVar1;
   long lVar2;
   if (param_1 != 0) {
      lVar2 = *param_2;
      if (lVar2 != 0) {
         lVar1 = *(long*)( lVar2 + 0x10 );
         if (*(long*)( lVar2 + 0x10 ) != 0) {
            do {
               lVar2 = *(long*)( lVar1 + 0x48 );
               ft_mem_free(param_1, lVar1);
               lVar1 = lVar2;
            }
 while ( lVar2 != 0 );
            lVar2 = *param_2;
         }

         ft_mem_free(param_1, lVar2);
         *param_2 = 0;
      }

      return;
   }

   return;
}
ulong split_sdf_shape(long *param_1) {
   long lVar1;
   long *plVar2;
   undefined1(*pauVar3)[16];
   long lVar4;
   uint uVar5;
   ulong uVar6;
   undefined1(*pauVar7)[16];
   int iVar8;
   ulong uVar9;
   undefined1(*pauVar10)[16];
   undefined1(*pauVar11)[16];
   long in_FS_OFFSET;
   undefined1(*local_98)[16];
   undefined1(*local_90)[16];
   long local_88;
   long lStack_80;
   long local_78;
   long lStack_70;
   long local_68;
   long lStack_60;
   long local_58;
   long lStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (long*)0x0 ) || ( lVar1 = lVar1 == 0 )) {
      LAB_00101370:uVar6 = 6;
   }
 else {
      pauVar7 = (undefined1(*) [16])param_1[1];
      if (pauVar7 != (undefined1(*) [16])0x0) {
         pauVar10 = pauVar7;
         pauVar11 = (undefined1(*) [16])0x0;
         do {
            plVar2 = *(long**)pauVar10[1];
            local_98 = (undefined1(*) [16])0x0;
            for (; plVar2 != (long*)0x0; plVar2 = (long*)plVar2[9]) {
               iVar8 = (int)plVar2[8];
               if (iVar8 == 2) {
                  local_78 = plVar2[4];
                  lStack_70 = plVar2[5];
                  local_88 = *plVar2;
                  lStack_80 = plVar2[1];
                  local_68 = plVar2[2];
                  lStack_60 = plVar2[3];
                  uVar9 = plVar2[2] + *plVar2 + plVar2[4] * -2;
                  uVar6 = -uVar9;
                  if (0 < (long)uVar9) {
                     uVar6 = uVar9;
                  }

                  uVar9 = lStack_80 + lStack_60 + lStack_70 * -2;
                  if ((long)uVar9 < 1) {
                     uVar9 = -uVar9;
                  }

                  if ((int)uVar6 < (int)uVar9) {
                     uVar6 = uVar9;
                  }

                  uVar9 = uVar6 & 0xffffffff;
                  iVar8 = 1;
                  uVar5 = (uint)uVar6;
                  while (8 < (int)uVar5) {
                     uVar5 = (int)uVar9 >> 2;
                     uVar9 = (ulong)uVar5;
                     iVar8 = iVar8 * 2;
                  }
;
                  uVar6 = split_sdf_conic(lVar1, &local_88, iVar8, &local_98);
                  LAB_001013e0:if ((int)uVar6 != 0) goto LAB_00101375;
               }
 else {
                  if (iVar8 == 3) {
                     local_88 = *plVar2;
                     lStack_80 = plVar2[1];
                     local_78 = plVar2[4];
                     lStack_70 = plVar2[5];
                     local_68 = plVar2[6];
                     lStack_60 = plVar2[7];
                     local_58 = plVar2[2];
                     lStack_50 = plVar2[3];
                     uVar6 = split_sdf_cubic(lVar1, &local_88, 0x20, &local_98);
                     goto LAB_001013e0;
                  }

                  if (iVar8 != 1) goto LAB_00101370;
                  uVar6 = sdf_edge_new(lVar1, &local_90);
                  pauVar7 = local_98;
                  if ((int)uVar6 != 0) goto LAB_00101375;
                  lVar4 = plVar2[1];
                  *(long*)*local_90 = *plVar2;
                  *(long*)( *local_90 + 8 ) = lVar4;
                  lVar4 = plVar2[3];
                  local_98 = local_90;
                  *(long*)local_90[1] = plVar2[2];
                  *(long*)( local_90[1] + 8 ) = lVar4;
                  for (int i = 0; i < 3; i++) {
                     lVar4 = plVar2[( 2*i + 5 )];
                     *(long*)local_90[( i + 2 )] = plVar2[( 2*i + 4 )];
                     *(long*)( local_90[( i + 2 )] + 8 ) = lVar4;
                  }

                  *(undefined1(**) [16])( local_90[4] + 8 ) = pauVar7;
               }

            }

            local_90 = (undefined1(*) [16])( (ulong)local_90 & 0xffffffff00000000 );
            pauVar7 = (undefined1(*) [16])ft_mem_qalloc(lVar1, 0x20, &local_90);
            pauVar3 = local_98;
            uVar6 = (ulong)local_90 & 0xffffffff;
            if ((int)local_90 != 0) goto LAB_00101375;
            *pauVar7 = (undefined1[16])0x0;
            local_98 = (undefined1(*) [16])0x0;
            *(undefined1(**) [16])pauVar7[1] = pauVar3;
            *(undefined1(**) [16])( pauVar7[1] + 8 ) = pauVar11;
            pauVar3 = *(undefined1(**) [16])( pauVar10[1] + 8 );
            local_90 = pauVar10;
            sdf_contour_done(lVar1, &local_90);
            pauVar10 = pauVar3;
            pauVar11 = pauVar7;
         }
 while ( pauVar3 != (undefined1(*) [16])0x0 );
      }

      param_1[1] = (long)pauVar7;
      uVar6 = 0;
   }

   LAB_00101375:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 sdf_raster_set_mode(void) {
   return 0;
}
void sdf_raster_reset(void) {
   return;
}
int sdf_generate_bounding_box_isra_0(int param_1, char param_2, char param_3, int param_4, long *param_5, uint param_6, int *param_7) {
   char cVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   bool bVar6;
   uint uVar7;
   undefined1 uVar8;
   uint uVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   ulong uVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   int iVar22;
   long lVar23;
   long lVar24;
   char cVar25;
   short sVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   uint uVar30;
   uint uVar31;
   long lVar32;
   long lVar33;
   long lVar34;
   int iVar35;
   long lVar36;
   int iVar37;
   int iVar38;
   long lVar39;
   long lVar40;
   long lVar41;
   uint uVar42;
   long lVar43;
   int *piVar44;
   long lVar45;
   long lVar46;
   ulong uVar47;
   ulong uVar48;
   undefined1 *puVar49;
   undefined1 *puVar50;
   long in_FS_OFFSET;
   long *local_1e0;
   uint local_1bc;
   long local_148;
   int local_124;
   int local_120;
   int local_e0;
   int local_6c;
   undefined1 local_68[16];
   long local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6c = 0;
   if (( ( ( param_5 == (long*)0x0 ) || ( param_7 == (int*)0x0 ) ) || ( 0x1e < param_6 - 2 ) ) || ( lVar41 = lVar41 == 0 )) {
      local_6c = 6;
      lVar41 = 0;
      local_148 = 0;
   }
 else {
      local_148 = ft_mem_alloc(lVar41, ( ulong )(uint)(param_7[1] * *param_7) * 0xc, &local_6c);
      if (local_6c == 0) {
         iVar2 = param_7[1];
         iVar3 = *param_7;
         lVar32 = param_5[1];
         lVar4 = *(long*)( param_7 + 4 );
         if (( iVar2 == 0 ) || ( iVar3 == 0 )) {
            local_6c = 0x13;
         }
 else {
            iVar22 = param_6 << 0x10;
            if (lVar32 != 0) {
               uVar47 = (ulong)param_6;
               do {
                  for (plVar5 = *(long**)( lVar32 + 0x10 ); plVar5 != (long*)0x0; plVar5 = (long*)plVar5[9]) {
                     lVar13 = *plVar5;
                     lVar27 = plVar5[1];
                     lVar14 = plVar5[2];
                     lVar40 = plVar5[3];
                     lVar39 = plVar5[4];
                     lVar43 = plVar5[5];
                     lVar21 = plVar5[6];
                     lVar15 = plVar5[7];
                     iVar11 = (int)plVar5[8];
                     lVar19 = lVar39;
                     lVar20 = lVar43;
                     if (iVar11 == 2) {
                        LAB_00102826:if (lVar19 <= lVar13) {
                           lVar19 = lVar13;
                        }

                        if (lVar43 <= lVar27) {
                           lVar43 = lVar27;
                        }

                        if (lVar20 < lVar27) {
                           lVar27 = lVar20;
                        }

                        if (lVar39 < lVar13) {
                           lVar13 = lVar39;
                        }

                        LAB_00101666:if (lVar14 <= lVar13) {
                           lVar13 = lVar14;
                        }

                        if (-1 < lVar13 + -0x3f) {
                           lVar13 = lVar13 + -0x3f;
                        }

                        if (lVar14 < lVar19) {
                           lVar14 = lVar19;
                        }

                        lVar39 = lVar14 + 0x7e;
                        if (-1 < lVar14 + 0x3f) {
                           lVar39 = lVar14 + 0x3f;
                        }

                        if (lVar40 <= lVar27) {
                           lVar27 = lVar40;
                        }

                        if (-1 < lVar27 + -0x3f) {
                           lVar27 = lVar27 + -0x3f;
                        }

                        local_1bc = (int)( lVar27 >> 6 ) - param_6;
                        if (lVar40 < lVar43) {
                           lVar40 = lVar43;
                        }

                        lVar27 = lVar40 + 0x7e;
                        if (-1 < lVar40 + 0x3f) {
                           lVar27 = lVar40 + 0x3f;
                        }

                        uVar18 = ( lVar27 >> 6 ) + uVar47;
                        uVar48 = ( lVar39 >> 6 ) + uVar47;
                        uVar9 = (int)( lVar13 >> 6 ) - param_6;
                        if ((long)(int)local_1bc < (long)uVar18) goto LAB_001016de;
                     }
 else {
                        if (iVar11 == 3) {
                           lVar19 = lVar21;
                           if (lVar21 <= lVar39) {
                              lVar19 = lVar39;
                           }

                           lVar46 = lVar15;
                           if (lVar15 <= lVar43) {
                              lVar46 = lVar43;
                           }

                           if (lVar15 < lVar43) {
                              lVar20 = lVar15;
                           }

                           lVar43 = lVar46;
                           if (lVar21 < lVar39) {
                              lVar39 = lVar21;
                           }

                           goto LAB_00102826;
                        }

                        lVar43 = lVar27;
                        lVar19 = lVar13;
                        if (iVar11 == 1) goto LAB_00101666;
                        local_1bc = -param_6;
                        uVar18 = uVar47;
                        uVar48 = uVar47;
                        uVar9 = local_1bc;
                        LAB_001016de:local_124 = iVar2 * local_1bc;
                        local_e0 = ( ( iVar3 + -1 ) - local_1bc ) * iVar2;
                        lVar27 = 0;
                        lVar13 = (long)(int)local_1bc;
                        do {
                           if ((long)(int)uVar9 < (long)uVar48) {
                              lVar40 = 0;
                              lVar14 = (long)(int)( local_1bc << 6 ) + 0x20;
                              uVar30 = uVar9;
                              do {
                                 while (( ( (int)( local_1bc | uVar30 ) < 0 || ( iVar2 <= (int)uVar30 ) ) || ( iVar3 <= (int)local_1bc ) )) {
                                    LAB_001017f0:lVar40 = lVar40 + 1;
                                    uVar30 = uVar30 + 1;
                                    if (lVar40 == uVar48 - (long)(int)uVar9) goto LAB_00101a83;
                                 }
;
                                 lVar39 = (long)(int)( uVar30 << 6 ) + 0x20;
                                 iVar11 = (int)plVar5[8];
                                 local_120 = (int)lVar14;
                                 if (iVar11 == 2) {
                                    uVar7 = 0;
                                    local_68 = (undefined1[16])0x0;
                                    lVar43 = *plVar5;
                                    lVar21 = plVar5[1];
                                    lVar15 = ( plVar5[5] - lVar21 ) * 2;
                                    lVar19 = ( plVar5[4] - lVar43 ) * 2;
                                    lVar20 = plVar5[3] + lVar21 + plVar5[5] * -2;
                                    lVar34 = lVar43 + plVar5[4] * -2 + plVar5[2];
                                    lVar45 = (long)(int)lVar34;
                                    iVar11 = 0x7fffffff;
                                    lVar46 = (long)(int)lVar20;
                                    uVar42 = 0;
                                    do {
                                       sVar26 = 4;
                                       uVar31 = uVar42;
                                       do {
                                          local_1e0 = &local_58;
                                          lVar16 = (long)(int)uVar31;
                                          lVar17 = (int)lVar19 * lVar16;
                                          lVar23 = lVar16 * (int)lVar15;
                                          lVar16 = lVar16 * lVar16 + 0x8000 >> 0x10;
                                          lVar36 = lVar16 * lVar46;
                                          lVar16 = lVar16 * lVar45;
                                          lVar36 = ( ( (int)( ( ulong )(lVar36 + 0x8000 + ( lVar36 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar23 + 0x8000 + ( lVar23 >> 0x3f )) >> 0x10 ) ) + lVar21 ) * 0x400;
                                          lVar16 = ( ( (int)( ( ulong )(lVar16 + 0x8000 + ( lVar16 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) ) + lVar43 ) * 0x400;
                                          local_58 = lVar16 + lVar39 * -0x400;
                                          local_50 = lVar36 + lVar14 * -0x400;
                                          iVar12 = FT_Vector_Length(local_1e0);
                                          if (iVar12 < iVar11) {
                                             local_68._8_8_ = lVar36;
                                             local_68._0_8_ = lVar16;
                                             iVar11 = iVar12;
                                             uVar7 = uVar31;
                                          }

                                          lVar16 = (int)( uVar31 * 2 ) * lVar46;
                                          lVar36 = (int)( uVar31 * 2 ) * lVar45;
                                          lVar23 = (int)( ( ulong )(lVar36 + 0x8000 + ( lVar36 >> 0x3f )) >> 0x10 ) + lVar19;
                                          lVar36 = (int)( ( ulong )(lVar16 + 0x8000 + ( lVar16 >> 0x3f )) >> 0x10 ) + lVar15;
                                          lVar16 = local_58 + 0x3ff;
                                          if (-1 < local_58) {
                                             lVar16 = local_58;
                                          }

                                          local_58 = lVar16 >> 10;
                                          lVar16 = local_50 + 0x3ff;
                                          if (-1 < local_50) {
                                             lVar16 = local_50;
                                          }

                                          local_50 = lVar16 >> 10;
                                          lVar16 = lVar34 * local_58 * 2;
                                          lVar17 = lVar16 + 0x3f;
                                          if (-1 < lVar16) {
                                             lVar17 = lVar16;
                                          }

                                          lVar16 = lVar20 * local_50 * 2;
                                          lVar24 = lVar16 + 0x3f;
                                          if (-1 < lVar16) {
                                             lVar24 = lVar16;
                                          }

                                          lVar28 = lVar23 * local_58;
                                          lVar16 = lVar28 + 0x3f;
                                          if (-1 < lVar28) {
                                             lVar16 = lVar28;
                                          }

                                          lVar28 = lVar36 * local_50;
                                          if (lVar28 < 0) {
                                             lVar28 = lVar28 + 0x3f;
                                          }

                                          iVar12 = FT_DivFix((long)( (int)( lVar16 >> 6 ) + (int)( lVar28 >> 6 ) ), (long)( (int)( lVar17 >> 6 ) + (int)( lVar24 >> 6 ) + (int)( lVar23 * lVar23 >> 6 ) + (int)( lVar36 * lVar36 >> 6 ) ));
                                          uVar31 = uVar31 - iVar12;
                                       }
 while ( ( uVar31 < 0x10001 ) && ( sVar26 = sVar26 != 0 ) );
                                       uVar42 = uVar42 + 0x4000;
                                    }
 while ( uVar42 != 0x14000 );
                                    lVar45 = lVar45 * (int)uVar7;
                                    lVar46 = (int)uVar7 * lVar46;
                                    local_58 = (int)( ( ulong )(lVar45 + 0x8000 + ( lVar45 >> 0x3f )) >> 0x10 ) * 2 + lVar19;
                                    local_50 = (int)( ( ulong )(lVar46 + 0x8000 + ( lVar46 >> 0x3f )) >> 0x10 ) * 2 + lVar15;
                                    lVar21 = (long)( local_68._0_4_ + (int)lVar39 * -0x400 ) * (long)(int)local_50;
                                    lVar43 = (long)(int)local_58 * (long)( local_68._8_4_ + local_120 * -0x400 );
                                    bVar6 = (int)( ( ulong )(lVar21 + 0x8000 + ( lVar21 >> 0x3f )) >> 0x10 ) < (int)( ( ulong )(lVar43 + 0x8000 + ( lVar43 >> 0x3f )) >> 0x10 );
                                    joined_r0x00102782:cVar25 = bVar6 * '\x02' + -1;
                                    iVar12 = 0x10000;
                                    if (( uVar7 & 0xfffeffff ) == 0) {
                                       local_1e0 = &local_58;
                                       local_68._8_8_ = local_68._8_8_ + lVar14 * -0x400;
                                       local_68._0_8_ = local_68._0_8_ + lVar39 * -0x400;
                                       FT_Vector_NormLen(local_1e0);
                                       FT_Vector_NormLen(local_68);
                                       lVar39 = (long)(int)local_58 * (long)(int)local_68._8_4_;
                                       iVar10 = local_68._0_4_;
                                       iVar12 = (int)local_50;
                                       LAB_00102341:iVar12 = (int)( ( ulong )(lVar39 + 0x8000 + ( lVar39 >> 0x3f )) >> 0x10 ) - (int)( ( ulong )((long)iVar10 * (long)iVar12 + 0x8000 + ( (long)iVar10 * (long)iVar12 >> 0x3f )) >> 0x10 );
                                    }

                                 }
 else {
                                    if (iVar11 == 3) {
                                       local_68 = (undefined1[16])0x0;
                                       lVar43 = *plVar5;
                                       lVar21 = plVar5[4];
                                       lVar15 = plVar5[1];
                                       lVar19 = plVar5[5];
                                       iVar12 = 0;
                                       lVar20 = ( lVar43 + lVar21 * -2 ) * 3 + plVar5[6] * 3;
                                       lVar46 = ( lVar15 + lVar19 * -2 ) * 3 + plVar5[7] * 3;
                                       lVar34 = ( lVar21 - lVar43 ) * 3;
                                       lVar16 = (long)(int)lVar46;
                                       lVar45 = ( lVar19 - lVar15 ) * 3;
                                       lVar36 = (long)(int)lVar20;
                                       lVar19 = (long)( ( ( (int)lVar19 - (int)plVar5[7] ) * 3 - (int)lVar15 ) + (int)plVar5[3] );
                                       uVar42 = 0;
                                       iVar11 = 0x7fffffff;
                                       lVar21 = (long)( ( ( (int)lVar21 - (int)plVar5[6] ) * 3 - (int)lVar43 ) + (int)plVar5[2] );
                                       uVar7 = 0;
                                       do {
                                          sVar26 = 4;
                                          uVar31 = uVar42;
                                          do {
                                             lVar23 = (long)(int)uVar31;
                                             lVar33 = (int)lVar34 * lVar23;
                                             lVar24 = lVar23 * (int)lVar45;
                                             lVar28 = lVar23 * lVar23 + 0x8000;
                                             lVar29 = lVar28 >> 0x10;
                                             lVar23 = lVar23 * lVar29 + 0x8000 >> 0x10;
                                             lVar17 = lVar23 * lVar19;
                                             lVar23 = lVar23 * lVar21;
                                             lVar23 = ( ( (int)( ( ulong )(lVar23 + 0x8000 + ( lVar23 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar36 * lVar29 + 0x8000 + ( lVar36 * lVar29 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar33 + 0x8000 + ( lVar33 >> 0x3f )) >> 0x10 ) ) + lVar43 ) * 0x400;
                                             lVar17 = ( ( (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar16 * lVar29 + 0x8000 + ( lVar16 * lVar29 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar24 + 0x8000 + ( lVar24 >> 0x3f )) >> 0x10 ) ) + lVar15 ) * 0x400;
                                             local_58 = lVar23 + lVar39 * -0x400;
                                             local_50 = lVar17 + lVar14 * -0x400;
                                             iVar10 = FT_Vector_Length(&local_58);
                                             iVar35 = (int)( (ulong)lVar28 >> 0x10 );
                                             if (iVar10 < iVar11) {
                                                local_68._8_8_ = lVar17;
                                                local_68._0_8_ = lVar23;
                                                iVar11 = iVar10;
                                                iVar12 = iVar35;
                                                uVar7 = uVar31;
                                             }

                                             lVar23 = (long)( iVar35 * 3 );
                                             lVar28 = lVar36 * (int)( uVar31 * 2 );
                                             lVar17 = lVar23 * lVar21;
                                             lVar23 = lVar23 * lVar19;
                                             lVar29 = (int)( uVar31 * 6 ) * lVar21;
                                             lVar24 = (int)( uVar31 * 6 ) * lVar19;
                                             lVar28 = ( (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar28 + 0x8000 + ( lVar28 >> 0x3f )) >> 0x10 ) ) + lVar34;
                                             lVar17 = (int)( uVar31 * 2 ) * lVar16;
                                             lVar17 = ( (int)( ( ulong )(lVar23 + 0x8000 + ( lVar23 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) ) + lVar45;
                                             lVar23 = local_58 + 0x3ff;
                                             if (-1 < local_58) {
                                                lVar23 = local_58;
                                             }

                                             local_58 = lVar23 >> 10;
                                             lVar23 = local_50 + 0x3ff;
                                             if (-1 < local_50) {
                                                lVar23 = local_50;
                                             }

                                             local_50 = lVar23 >> 10;
                                             lVar29 = ( (long)(int)( ( ulong )(lVar29 + 0x8000 + ( lVar29 >> 0x3f )) >> 0x10 ) + lVar20 * 2 ) * local_58;
                                             lVar23 = lVar29 + 0x3f;
                                             if (-1 < lVar29) {
                                                lVar23 = lVar29;
                                             }

                                             lVar24 = ( (long)(int)( ( ulong )(lVar24 + 0x8000 + ( lVar24 >> 0x3f )) >> 0x10 ) + lVar46 * 2 ) * local_50;
                                             if (lVar24 < 0) {
                                                lVar24 = lVar24 + 0x3f;
                                             }

                                             lVar33 = lVar28 * local_58;
                                             lVar29 = lVar33 + 0x3f;
                                             if (-1 < lVar33) {
                                                lVar29 = lVar33;
                                             }

                                             lVar33 = lVar17 * local_50;
                                             if (lVar33 < 0) {
                                                lVar33 = lVar33 + 0x3f;
                                             }

                                             iVar10 = FT_DivFix((long)( (int)( lVar29 >> 6 ) + (int)( lVar33 >> 6 ) ), (long)( (int)( lVar23 >> 6 ) + (int)( lVar24 >> 6 ) + (int)( lVar28 * lVar28 >> 6 ) + (int)( lVar17 * lVar17 >> 6 ) ));
                                             uVar31 = uVar31 - iVar10;
                                          }
 while ( ( uVar31 < 0x10001 ) && ( sVar26 = sVar26 != 0 ) );
                                          uVar42 = uVar42 + 0x4000;
                                       }
 while ( uVar42 != 0x14000 );
                                       lVar21 = lVar21 * ( iVar12 * 3 );
                                       lVar36 = lVar36 * (int)( uVar7 * 2 );
                                       local_58 = ( (int)( ( ulong )(lVar36 + 0x8000 + ( lVar36 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar21 + 0x8000 + ( lVar21 >> 0x3f )) >> 0x10 ) ) + lVar34;
                                       lVar19 = ( iVar12 * 3 ) * lVar19;
                                       lVar16 = (int)( uVar7 * 2 ) * lVar16;
                                       local_50 = ( (int)( ( ulong )(lVar19 + 0x8000 + ( lVar19 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar16 + 0x8000 + ( lVar16 >> 0x3f )) >> 0x10 ) ) + lVar45;
                                       lVar21 = (long)( local_68._0_4_ + (int)lVar39 * -0x400 ) * (long)(int)local_50;
                                       lVar43 = (long)(int)local_58 * (long)( local_68._8_4_ + local_120 * -0x400 );
                                       bVar6 = (int)( ( ulong )(lVar21 + 0x8000 + ( lVar21 >> 0x3f )) >> 0x10 ) < (int)( ( ulong )(lVar43 + 0x8000 + ( lVar43 >> 0x3f )) >> 0x10 );
                                       goto joined_r0x00102782;
                                    }

                                    if (iVar11 != 1) {
                                       local_6c = 6;
                                       goto LAB_00101c42;
                                    }

                                    lVar43 = *plVar5;
                                    lVar21 = plVar5[1];
                                    local_68._0_8_ = plVar5[2] - lVar43;
                                    local_68._8_8_ = plVar5[3] - lVar21;
                                    lVar19 = ( lVar39 - lVar43 ) * local_68._0_8_;
                                    lVar15 = lVar19 + 0x3f;
                                    if (-1 < lVar19) {
                                       lVar15 = lVar19;
                                    }

                                    lVar20 = ( lVar14 - lVar21 ) * local_68._8_8_;
                                    lVar19 = lVar20 + 0x3f;
                                    if (-1 < lVar20) {
                                       lVar19 = lVar20;
                                    }

                                    iVar10 = FT_DivFix((long)( (int)( lVar15 >> 6 ) + (int)( lVar19 >> 6 ) ), (long)( (int)( (long)( local_68._0_8_ * local_68._0_8_ ) >> 6 ) + (int)( (long)( local_68._8_8_ * local_68._8_8_ ) >> 6 ) ));
                                    iVar11 = 0;
                                    if (-1 < iVar10) {
                                       iVar11 = iVar10;
                                    }

                                    if (0x10000 < iVar11) {
                                       iVar11 = 0x10000;
                                    }

                                    lVar19 = (long)( local_68._0_4_ << 10 ) * (long)iVar11;
                                    lVar15 = (long)iVar11 * (long)( local_68._8_4_ << 10 );
                                    local_58 = lVar43 * 0x400 + ( lVar19 + 0x8000 + ( lVar19 >> 0x3f ) >> 0x10 ) + lVar39 * -0x400;
                                    local_50 = lVar21 * 0x400 + ( lVar15 + 0x8000 + ( lVar15 >> 0x3f ) >> 0x10 ) + lVar14 * -0x400;
                                    lVar43 = (long)(int)local_58 * (long)local_68._8_4_;
                                    lVar39 = (long)local_68._0_4_ * (long)(int)local_50;
                                    iVar11 = FT_Vector_Length(&local_58);
                                    cVar25 = ( (int)( ( ulong )(lVar43 + 0x8000 + ( lVar43 >> 0x3f )) >> 0x10 ) < (int)( ( ulong )(lVar39 + 0x8000 + ( lVar39 >> 0x3f )) >> 0x10 ) ) * '\x02' + -1;
                                    iVar12 = 0x10000;
                                    if (0xfffe < iVar10 - 1U) {
                                       FT_Vector_NormLen(local_68);
                                       FT_Vector_NormLen(&local_58);
                                       lVar39 = (long)(int)local_68._0_4_ * (long)(int)local_50;
                                       iVar10 = (int)local_58;
                                       iVar12 = local_68._8_4_;
                                       goto LAB_00102341;
                                    }

                                 }

                                 local_6c = 0;
                                 if (param_1 == 1) {
                                    cVar25 = -cVar25;
                                 }

                                 if (iVar22 < iVar11) goto LAB_001017f0;
                                 iVar10 = local_e0;
                                 if (param_3 != '\0') {
                                    iVar10 = local_124;
                                 }

                                 piVar44 = (int*)( local_148 + ( ulong )(uVar30 + iVar10) * 0xc );
                                 if ((char)piVar44[2] != '\0') {
                                    iVar10 = *piVar44;
                                    iVar37 = iVar10 - iVar11;
                                    iVar35 = -iVar37;
                                    if (0 < iVar37) {
                                       iVar35 = iVar37;
                                    }

                                    if (iVar35 < 0x21) {
                                       iVar35 = piVar44[1];
                                       iVar37 = -iVar35;
                                       if (0 < iVar35) {
                                          iVar37 = iVar35;
                                       }

                                       iVar38 = -iVar12;
                                       if (0 < iVar12) {
                                          iVar38 = iVar12;
                                       }

                                       if (iVar38 < iVar37) {
                                          iVar11 = iVar10;
                                          cVar25 = (char)piVar44[2];
                                          iVar12 = iVar35;
                                       }

                                       piVar44[1] = iVar12;
                                       *piVar44 = iVar11;
                                       *(char*)( piVar44 + 2 ) = cVar25;
                                    }
 else if (iVar11 < iVar10) {
                                       *piVar44 = iVar11;
                                       piVar44[1] = iVar12;
                                       *(char*)( piVar44 + 2 ) = cVar25;
                                       goto LAB_00101a59;
                                    }

                                    goto LAB_001017f0;
                                 }

                                 *piVar44 = iVar11;
                                 piVar44[1] = iVar12;
                                 *(char*)( piVar44 + 2 ) = cVar25;
                                 LAB_00101a59:lVar40 = lVar40 + 1;
                                 uVar30 = uVar30 + 1;
                              }
 while ( lVar40 != uVar48 - (long)(int)uVar9 );
                           }

                           LAB_00101a83:lVar27 = lVar27 + 1;
                           local_1bc = local_1bc + 1;
                           local_124 = local_124 + iVar2;
                           local_e0 = local_e0 - iVar2;
                        }
 while ( lVar27 != uVar18 - lVar13 );
                     }

                  }

                  lVar32 = *(long*)( lVar32 + 0x18 );
               }
 while ( lVar32 != 0 );
            }

            if (0 < iVar3) {
               iVar12 = 0;
               iVar11 = 0;
               do {
                  if (0 < iVar2) {
                     do {
                        lVar32 = (long)iVar12;
                        piVar44 = (int*)( local_148 + lVar32 * 0xc );
                        puVar49 = (undefined1*)( lVar4 + lVar32 );
                        cVar25 = ( 0 < param_4 ) * '\x02' + -1;
                        do {
                           cVar1 = (char)piVar44[2];
                           iVar10 = iVar22;
                           if (( cVar1 != '\0' ) && ( cVar25 = cVar1 ),iVar10 = *piVar44,iVar22 <= *piVar44) {
                              iVar10 = iVar22;
                           }

                           iVar35 = (int)cVar25;
                           if (param_2 != '\0') {
                              iVar35 = -(int)cVar25;
                           }

                           puVar50 = puVar49 + 1;
                           *piVar44 = iVar35 * iVar10;
                           uVar8 = map_fixed_to_sdf(iVar35 * iVar10, iVar22);
                           *puVar49 = uVar8;
                           piVar44 = piVar44 + 3;
                           puVar49 = puVar50;
                        }
 while ( puVar50 != (undefined1*)( lVar32 + lVar4 + 1 + ( ulong )(iVar2 - 1) ) );
                        iVar11 = iVar11 + 1;
                        iVar12 = iVar12 + iVar2;
                     }
 while ( iVar3 != iVar11 );
                     break;
                  }

                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + iVar2;
               }
 while ( iVar3 != iVar11 );
            }

         }

      }

   }

   LAB_00101c42:ft_mem_free(lVar41, local_148);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_6c;
}
int sdf_raster_render(ulong *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   char cVar2;
   undefined1 uVar3;
   byte bVar4;
   undefined4 uVar5;
   uint uVar6;
   short *psVar7;
   ulong uVar8;
   int *piVar9;
   bool bVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   ulong *puVar14;
   ulong uVar15;
   undefined8 *puVar16;
   long *plVar17;
   long *plVar18;
   ulong uVar19;
   int iVar20;
   long *extraout_RDX;
   long *extraout_RDX_00;
   long *extraout_RDX_01;
   long *extraout_RDX_02;
   long *extraout_RDX_03;
   long *extraout_RDX_04;
   long *plVar21;
   int iVar22;
   long *plVar23;
   undefined8 *puVar24;
   undefined8 *puVar25;
   undefined4 uVar26;
   byte bVar27;
   long lVar29;
   byte bVar30;
   long lVar31;
   long lVar32;
   long in_FS_OFFSET;
   undefined1 auVar33[16];
   ulong local_b8;
   long local_78;
   int local_5c;
   ulong local_58;
   ulong local_50;
   long local_40;
   byte bVar28;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (ulong*)0x0 ) || ( param_2 == (undefined8*)0x0 )) {
      LAB_00102e90:iVar13 = 6;
      goto LAB_00102a30;
   }

   psVar7 = (short*)param_2[1];
   if (psVar7 == (short*)0x0) {
      LAB_00102a60:iVar13 = 0x14;
   }
 else {
      if (( 0 < psVar7[1] ) && ( 0 < *psVar7 )) {
         if (( *(long*)( psVar7 + 0xc ) == 0 ) || ( *(long*)( psVar7 + 4 ) == 0 )) goto LAB_00102a60;
         if (0x1e < *(int*)( param_2 + 0xc ) - 2U) goto LAB_00102e90;
         uVar8 = *param_1;
         if (uVar8 == 0) {
            iVar13 = 0x20;
            goto LAB_00102a30;
         }

         iVar12 = FT_Outline_Get_Orientation(psVar7);
         cVar2 = *(char*)( (long)param_2 + 100 );
         local_58 = local_58 & 0xffffffff00000000;
         uVar3 = *(undefined1*)( (long)param_2 + 0x65 );
         puVar14 = (ulong*)ft_mem_qalloc(uVar8, 0x10, &local_58);
         iVar13 = (int)local_58;
         if ((int)local_58 != 0) goto LAB_00102a30;
         *puVar14 = uVar8;
         puVar14[1] = 0;
         iVar13 = FT_Outline_Decompose(psVar7, sdf_decompose_funcs, puVar14);
         if (iVar13 != 0) goto LAB_00102a30;
         uVar5 = *(undefined4*)( param_2 + 0xc );
         piVar9 = (int*)*param_2;
         if (*(char*)( (long)param_2 + 0x66 ) == '\0') {
            iVar13 = split_sdf_shape(puVar14);
            if (iVar13 != 0) goto LAB_00102a30;
            iVar13 = sdf_generate_bounding_box_isra_0(iVar12, cVar2, uVar3, 0, puVar14, uVar5, piVar9);
            plVar21 = (long*)0x1029a5;
         }
 else {
            local_5c = 0;
            if (( piVar9 == (int*)0x0 ) || ( uVar8 = uVar8 == 0 )) goto LAB_00102e90;
            uVar15 = puVar14[1];
            uVar6 = piVar9[1];
            iVar13 = *piVar9;
            if (uVar15 == 0) {
               lVar29 = 0;
               lVar32 = 0;
               iVar22 = 0;
            }
 else {
               iVar22 = 0;
               do {
                  uVar15 = *(ulong*)( uVar15 + 0x18 );
                  iVar22 = iVar22 + 1;
               }
 while ( uVar15 != 0 );
               lVar32 = (long)iVar22;
               lVar29 = lVar32 * 0x28;
            }

            local_58 = uVar8;
            puVar16 = (undefined8*)ft_mem_alloc(uVar8, lVar29, &local_5c);
            if (local_5c == 0) {
               auVar33 = ft_mem_alloc(uVar8, lVar32 * 4, &local_5c);
               plVar21 = auVar33._8_8_;
               plVar17 = auVar33._0_8_;
               if (local_5c == 0) {
                  uVar15 = puVar14[1];
                  if (iVar22 == 0) {
                     uVar19 = 0;
                  }
 else {
                     plVar21 = (long*)( (long)plVar17 + (long)iVar22 * 4 );
                     local_b8 = 0;
                     plVar23 = plVar17;
                     puVar24 = puVar16;
                     do {
                        FT_Bitmap_Init(puVar24);
                        uVar1 = *(undefined8*)piVar9;
                        iVar11 = piVar9[6];
                        *puVar24 = uVar1;
                        iVar20 = piVar9[2];
                        *(short*)( puVar24 + 3 ) = (short)iVar11;
                        *(int*)( puVar24 + 1 ) = iVar20;
                        *(undefined1*)( (long)puVar24 + 0x1a ) = *(undefined1*)( (long)piVar9 + 0x1a );
                        auVar33 = ft_mem_alloc(uVar8, iVar20 * (int)uVar1, &local_5c);
                        plVar18 = auVar33._8_8_;
                        puVar24[2] = auVar33._0_8_;
                        iVar20 = local_5c;
                        if (local_5c != 0) {
                           joined_r0x00102cab:local_5c = iVar20;
                           if (plVar17 != (long*)0x0) {
                              ft_mem_free(uVar8, plVar17);
                              plVar21 = extraout_RDX_01;
                              iVar13 = local_5c;
                              if (puVar16 != (undefined8*)0x0) goto LAB_00102ea2;
                              goto joined_r0x00102cd7;
                           }

                           plVar21 = plVar18;
                           iVar13 = local_5c;
                           if (puVar16 == (undefined8*)0x0) goto joined_r0x00102cd7;
                           goto LAB_00102ea2;
                        }

                        uVar26 = 0;
                        if (uVar15 == 0) {
                           LAB_00102ce8:*(int*)plVar23 = 0;
                        }
 else {
                           plVar18 = *(long**)( uVar15 + 0x10 );
                           iVar20 = 0;
                           if (plVar18 == (long*)0x0) goto LAB_00102ce8;
                           do {
                              iVar11 = (int)plVar18[8];
                              if (iVar11 == 2) {
                                 lVar29 = ( plVar18[4] - *plVar18 ) * ( plVar18[1] + plVar18[5] );
                                 if (lVar29 < 0) {
                                    lVar29 = lVar29 + 0x3f;
                                 }

                                 lVar32 = ( plVar18[2] - plVar18[4] ) * ( plVar18[5] + plVar18[3] );
                                 if (lVar32 < 0) {
                                    lVar32 = lVar32 + 0x3f;
                                 }

                                 iVar20 = iVar20 + (int)( lVar32 >> 6 ) + (int)( lVar29 >> 6 );
                              }
 else if (iVar11 == 3) {
                                 lVar32 = ( plVar18[4] - *plVar18 ) * ( plVar18[1] + plVar18[5] );
                                 lVar29 = lVar32 + 0x3f;
                                 if (-1 < lVar32) {
                                    lVar29 = lVar32;
                                 }

                                 lVar31 = ( plVar18[6] - plVar18[4] ) * ( plVar18[5] + plVar18[7] );
                                 lVar32 = lVar31 + 0x3f;
                                 if (-1 < lVar31) {
                                    lVar32 = lVar31;
                                 }

                                 lVar31 = ( plVar18[2] - plVar18[6] ) * ( plVar18[7] + plVar18[3] );
                                 if (lVar31 < 0) {
                                    lVar31 = lVar31 + 0x3f;
                                 }

                                 iVar20 = (int)( lVar31 >> 6 ) + (int)( lVar29 >> 6 ) + (int)( lVar32 >> 6 ) + iVar20;
                              }
 else {
                                 if (iVar11 != 1) goto LAB_00102ce8;
                                 lVar29 = ( plVar18[2] - *plVar18 ) * ( plVar18[1] + plVar18[3] );
                                 if (lVar29 < 0) {
                                    lVar29 = lVar29 + 0x3f;
                                 }

                                 iVar20 = iVar20 + (int)( lVar29 >> 6 );
                              }

                              plVar18 = (long*)plVar18[9];
                           }
 while ( plVar18 != (long*)0x0 );
                           if (iVar20 < 1) {
                              *(int*)plVar23 = 2;
                              if (iVar12 == 0) goto LAB_00102e51;
                           }
 else {
                              *(int*)plVar23 = 1;
                              if (iVar12 == 1) {
                                 LAB_00102e51:uVar26 = 1;
                              }

                           }

                        }

                        uVar1 = *(undefined8*)( uVar15 + 0x18 );
                        *(undefined8*)( uVar15 + 0x18 ) = 0;
                        local_50 = uVar15;
                        iVar20 = split_sdf_shape(&local_58);
                        plVar18 = extraout_RDX_00;
                        if (( iVar20 != 0 ) || ( local_5c = sdf_generate_bounding_box_isra_0(iVar12, 0, uVar3, uVar26, &local_58, uVar5, puVar24) ),plVar18 = extraout_RDX_02,iVar20 = local_5c,local_5c != 0) goto joined_r0x00102cab;
                        *(undefined8*)( uVar15 + 0x18 ) = uVar1;
                        *(ulong*)( local_50 + 0x18 ) = local_b8;
                        if (iVar12 == 1) {
                           if ((int)*plVar23 == 1) {
                              *(int*)plVar23 = 2;
                           }
 else if ((int)*plVar23 == 2) {
                              *(int*)plVar23 = 1;
                           }

                        }

                        plVar23 = (long*)( (long)plVar23 + 4 );
                        uVar15 = *(ulong*)( uVar15 + 0x18 );
                        puVar24 = puVar24 + 5;
                        uVar19 = local_50;
                        local_b8 = local_50;
                     }
 while ( plVar23 != plVar21 );
                  }

                  lVar29 = *(long*)( piVar9 + 4 );
                  puVar14[1] = uVar19;
                  if (0 < iVar13) {
                     iVar20 = 0;
                     iVar12 = 0;
                     do {
                        if (0 < (int)uVar6) {
                           LAB_00103020:lVar31 = (long)iVar20;
                           lVar32 = (ulong)uVar6 + lVar31;
                           if (iVar22 == 0) {
                              bVar30 = 0;
                              goto LAB_00102f0e;
                           }

                           do {
                              while (true) {
                                 plVar21 = puVar16 + 2;
                                 bVar28 = 0xff;
                                 bVar27 = 0xff;
                                 bVar30 = 0;
                                 plVar23 = plVar17;
                                 do {
                                    bVar4 = *(byte*)( *plVar21 + lVar31 );
                                    if ((int)*plVar23 == 1) {
                                       if (bVar30 < bVar4) {
                                          bVar30 = bVar4;
                                       }

                                    }
 else {
                                       bVar10 = bVar4 < bVar27;
                                       bVar27 = bVar28;
                                       if (bVar10) {
                                          bVar27 = bVar4;
                                          bVar28 = bVar4;
                                       }

                                    }

                                    plVar23 = (long*)( (long)plVar23 + 4 );
                                    plVar21 = plVar21 + 5;
                                 }
 while ( (long*)( (long)plVar17 + (long)iVar22 * 4 ) != plVar23 );
                                 if (bVar27 < bVar30) {
                                    bVar30 = bVar27;
                                 }

                                 LAB_00102f0e:if (cVar2 != '\0') break;
                                 *(byte*)( lVar29 + lVar31 ) = bVar30;
                                 while (true) {
                                    lVar31 = lVar31 + 1;
                                    if (lVar32 == lVar31) goto LAB_00102f3d;
                                    if (iVar22 != 0) break;
                                    *(undefined1*)( lVar29 + lVar31 ) = 0;
                                 }
;
                              }
;
                              do {
                                 *(byte*)( lVar29 + lVar31 ) = ~bVar30;
                                 lVar31 = lVar31 + 1;
                                 if (lVar31 == lVar32) {
                                    iVar12 = iVar12 + 1;
                                    iVar20 = iVar20 + uVar6;
                                    if (iVar13 == iVar12) goto LAB_00102f5d;
                                    goto LAB_00103020;
                                 }

                                 bVar30 = 0;
                              }
 while ( iVar22 == 0 );
                           }
 while ( true );
                        }

                        LAB_00102f3d:iVar12 = iVar12 + 1;
                        iVar20 = iVar20 + uVar6;
                     }
 while ( iVar13 != iVar12 );
                  }

               }

               LAB_00102f5d:if (plVar17 != (long*)0x0) {
                  ft_mem_free(uVar8, plVar17);
                  plVar21 = extraout_RDX_04;
               }

               iVar13 = local_5c;
               if (puVar16 == (undefined8*)0x0) goto joined_r0x00102cd7;
            }
 else {
               iVar13 = local_5c;
               if (puVar16 == (undefined8*)0x0) goto LAB_00102a30;
            }

            if (iVar22 == 0) {
               iVar13 = 0x61;
               goto LAB_00102a30;
            }

            LAB_00102ea2:local_78 = (long)iVar22;
            puVar24 = puVar16 + 2;
            do {
               puVar25 = puVar24 + 5;
               ft_mem_free(uVar8, *puVar24);
               *puVar24 = 0;
               puVar24 = puVar25;
            }
 while ( puVar16 + 2 + local_78 * 5 != puVar25 );
            ft_mem_free(uVar8, puVar16);
            plVar21 = extraout_RDX_03;
            iVar13 = local_5c;
         }

         joined_r0x00102cd7:if (iVar13 != 0) goto LAB_00102a30;
         uVar8 = *puVar14;
         uVar15 = puVar14[1];
         uVar19 = local_58;
         if (uVar8 != 0) {
            while (local_58 = uVar15,local_58 != 0) {
               uVar15 = *(ulong*)( local_58 + 0x18 );
               sdf_contour_done(uVar8, &local_58, plVar21);
               plVar21 = extraout_RDX;
               uVar19 = local_58;
            }
;
            local_58 = uVar19;
            ft_mem_free(uVar8, puVar14);
         }

      }

      iVar13 = 0;
   }

   LAB_00102a30:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar13;
}
int sdf_move_to(undefined8 *param_1, long *param_2) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined1(*pauVar4)[16];
   int iVar5;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = 6;
   if (param_1 != (undefined8*)0x0) {
      local_24 = 0;
      if (*param_2 != 0) {
         pauVar4 = (undefined1(*) [16])ft_mem_qalloc(*param_2, 0x20, &local_24);
         iVar5 = local_24;
         if (local_24 == 0) {
            lVar1 = param_2[1];
            *(undefined8*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
            uVar2 = *param_1;
            uVar3 = param_1[1];
            *(long*)( pauVar4[1] + 8 ) = lVar1;
            *(undefined8*)*pauVar4 = uVar2;
            *(undefined8*)( *pauVar4 + 8 ) = uVar3;
            param_2[1] = (long)pauVar4;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int bsdf_raster_render(long *param_1, undefined8 *param_2) {
   ulong uVar1;
   char cVar2;
   char cVar3;
   uint uVar4;
   int *piVar5;
   long lVar6;
   int iVar7;
   uint uVar8;
   bool bVar9;
   undefined1 uVar10;
   int iVar11;
   undefined4 uVar12;
   long lVar13;
   undefined4 *puVar14;
   long lVar15;
   long lVar16;
   char cVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   int iVar21;
   long *plVar22;
   int iVar23;
   ulong uVar24;
   int *piVar25;
   int iVar26;
   ulong uVar27;
   byte bVar28;
   long lVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   long lVar33;
   undefined1 *puVar34;
   byte *pbVar35;
   int iVar36;
   int iVar37;
   long in_FS_OFFSET;
   int local_5c;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c = 0;
   if (( param_1 == (long*)0x0 ) || ( param_2 == (undefined8*)0x0 )) {
      LAB_00103260:iVar32 = 6;
      goto LAB_0010322a;
   }

   iVar32 = 0x61;
   if (*(int*)( param_2 + 2 ) != 8) goto LAB_0010322a;
   piVar25 = (int*)*param_2;
   piVar5 = (int*)param_2[1];
   if (( piVar5 == (int*)0x0 ) || ( piVar25 == (int*)0x0 )) goto LAB_00103260;
   lVar6 = *param_1;
   if (lVar6 == 0) {
      iVar32 = 0x20;
      goto LAB_0010322a;
   }

   if (0x1e < *(int*)( param_2 + 0xc ) - 2U) goto LAB_00103260;
   lVar13 = ft_mem_qrealloc(lVar6, (ulong)(uint)piVar25[1] << 5, 0, *piVar25, 0, &local_5c);
   if (local_5c == 0) {
      iVar32 = *(int*)( param_2 + 0xc );
      iVar37 = *piVar25;
      uVar4 = piVar25[1];
      iVar31 = piVar5[1];
      cVar2 = *(char*)( (long)param_2 + 100 );
      cVar17 = *(char*)( (long)param_2 + 0x65 );
      if (( ( (int)uVar4 < iVar31 ) || ( iVar36 = iVar37 < iVar36 ) ) || ( cVar3 = *(char*)( (long)piVar5 + 0x1a ) ),cVar3 == '\0') {
         local_5c = 6;
         goto LAB_00103214;
      }

      lVar15 = *(long*)( piVar5 + 4 );
      iVar26 = (int)( uVar4 - iVar31 ) >> 1;
      iVar11 = iVar37 - iVar36 >> 1;
      if (cVar3 == '\x01') {
         if (0 < iVar37) {
            uVar20 = -iVar11;
            iVar21 = 0;
            LAB_00103b9f:if ((int)uVar4 < 1) goto LAB_00103c8f;
            do {
               puVar14 = (undefined4*)( (long)iVar21 * 0x20 + lVar13 );
               uVar18 = -iVar26;
               do {
                  *puVar14 = 0;
                  *(undefined1*)( puVar14 + 6 ) = 0;
                  *(undefined1(*) [16])( puVar14 + 2 ) = (undefined1[16])0x0;
                  if (( ( -1 < (int)( uVar20 | uVar18 ) ) && ( (int)uVar18 < iVar31 ) ) && ( (int)uVar20 < iVar36 )) {
                     uVar8 = ( iVar36 + -1 ) - uVar20;
                     if (cVar17 == '\0') {
                        uVar8 = uVar20;
                     }

                     *(char*)( puVar14 + 6 ) = -((*(byte *)(lVar15 + (int)(((int)uVar18 >> 3) + piVar5[2] * uVar8)) &
                     (byte)(1 << (~(byte)uVar18 & 7))) != 0);
                  }

                  uVar18 = uVar18 + 1;
                  puVar14 = puVar14 + 8;
               }
 while ( uVar4 - iVar26 != uVar18 );
               uVar20 = uVar20 + 1;
               iVar21 = iVar21 + uVar4;
            }
 while ( iVar37 - iVar11 != uVar20 );
            goto LAB_0010339f;
         }

         LAB_00103253:if (lVar13 == 0) goto LAB_00103260;
         LAB_00103e26:local_5c = 0;
      }
 else {
         if (cVar3 != '\x02') {
            local_5c = 7;
            goto LAB_00103214;
         }

         if (iVar37 < 1) goto LAB_00103253;
         uVar20 = -iVar11;
         iVar30 = ( iVar36 + -1 + iVar11 ) * iVar31;
         iVar21 = 0;
         iVar23 = -(iVar31 * iVar11);
         do {
            if (0 < (int)uVar4) {
               puVar14 = (undefined4*)( (long)iVar21 * 0x20 + lVar13 );
               uVar18 = -iVar26;
               do {
                  *puVar14 = 0;
                  *(undefined1*)( puVar14 + 6 ) = 0;
                  *(undefined1(*) [16])( puVar14 + 2 ) = (undefined1[16])0x0;
                  if (( ( -1 < (int)( uVar18 | uVar20 ) ) && ( (int)uVar18 < iVar31 ) ) && ( (int)uVar20 < iVar36 )) {
                     iVar7 = iVar23;
                     if (cVar17 != '\0') {
                        iVar7 = iVar30;
                     }

                     *(undefined1*)( puVar14 + 6 ) = *(undefined1*)( lVar15 + (int)( uVar18 + iVar7 ) );
                  }

                  uVar18 = uVar18 + 1;
                  puVar14 = puVar14 + 8;
               }
 while ( uVar18 != uVar4 - iVar26 );
            }

            uVar20 = uVar20 + 1;
            iVar21 = iVar21 + uVar4;
            iVar30 = iVar30 - iVar31;
            iVar23 = iVar23 + iVar31;
         }
 while ( uVar20 != iVar37 - iVar11 );
         LAB_0010339f:local_5c = 0;
         if (lVar13 == 0) goto LAB_00103260;
         iVar31 = 0;
         iVar11 = 0;
         iVar36 = 0;
         do {
            iVar31 = iVar31 + 1;
            if (0 < (int)uVar4) {
               uVar24 = 0;
               lVar15 = (long)iVar11;
               plVar22 = (long*)( lVar13 + 8 + lVar15 * 0x20 );
               lVar33 = ( (int)-uVar4 + lVar15 ) * 0x20 + lVar13;
               pbVar35 = (byte*)( lVar13 + 0x18 + ( (ulong)uVar4 + lVar15 ) * 0x20 );
               do {
                  lVar16 = _UNK_00104098;
                  lVar15 = __LC4;
                  bVar28 = *(byte*)( plVar22 + 2 );
                  if (bVar28 == 0) {
                     LAB_001034d8:*(undefined4*)( plVar22 + -1 ) = 0x1900000;
                     *plVar22 = lVar15;
                     plVar22[1] = lVar16;
                  }
 else {
                     if (( bVar28 == 0xff ) && ( ( iVar36 == 0 || ( *(char*)( lVar33 + 0x18 ) != '\0' ) ) )) {
                        if (iVar37 <= iVar31) {
                           cVar17 = iVar36 != 0;
                           if (uVar24 != 0) goto LAB_00103480;
                           LAB_00103795:if (( ( uVar4 != 1 ) && ( (char)plVar22[6] != '\0' ) ) && ( iVar36 != 0 )) goto LAB_00103513;
                           goto LAB_001037b0;
                        }

                        if (*pbVar35 == 0) goto LAB_00103513;
                        cVar17 = ( iVar36 != 0 ) + '\x01';
                        if (uVar24 == 0) goto LAB_00103795;
                        LAB_00103480:if ((char)plVar22[-2] != '\0') {
                           iVar26 = (int)uVar24 + 1;
                           if (iVar26 < (int)uVar4) {
                              cVar17 = cVar17 + '\x02';
                              if ((char)plVar22[6] != '\0') {
                                 if (iVar36 != 0) goto LAB_00103ac2;
                                 LAB_001034b0:if (iVar31 < iVar37) {
                                    if (pbVar35[-0x20] == 0) goto LAB_00103528;
                                    if (( pbVar35[0x20] != 0 ) && ( cVar17 == '\x06' )) goto LAB_001034d8;
                                 }

                                 goto LAB_00103513;
                              }

                           }
 else if (iVar36 == 0) {
                              LAB_00103a80:if (( ( iVar31 < iVar37 ) && ( pbVar35[-0x20] != 0 ) ) && ( iVar26 < (int)uVar4 )) goto LAB_00103513;
                           }
 else {
                              cVar17 = cVar17 + '\x01';
                              LAB_00103ac2:if (*(char*)( lVar33 + -8 ) != '\0') {
                                 if ((int)uVar4 <= iVar26) goto LAB_00103a80;
                                 cVar17 = cVar17 + '\x02';
                                 if ((char)plVar22[(long)(int)( 1 - uVar4 ) * 4 + 2] != '\0') goto LAB_001034b0;
                              }

                           }

                        }

                        LAB_00103528:local_58 = (undefined1[16])0x0;
                        local_58._8_8_ = 0;
                        if (( ( (int)uVar24 < (int)( uVar4 - 1 ) ) && ( iVar36 != 0 ) ) && ( iVar36 < iVar37 + -1 )) {
                           uVar20 = (uint)bVar28;
                           iVar26 = uVar20 * 0x100;
                           iVar21 = ( uint ) * (byte*)( lVar33 + -8 ) * -0x100;
                           local_58._8_8_ = (long)(int)( ( iVar21 - (int)( ( ulong )((long)(int)( ( uint ) * (byte*)( lVar33 + 0x18 ) << 8 ) * 0x16a09 + 0x8000) >> 0x10 ) ) + ( uint ) * (byte*)( lVar33 + 0x38 ) * -0x100 + (uint)pbVar35[-0x20] * 0x100 + (int)( ( ulong )((long)(int)( ( uint ) * pbVar35 << 8 ) * 0x16a09 + 0x8000) >> 0x10 ) + (uint)pbVar35[0x20] * 0x100 );
                           local_58._0_8_ = (long)(int)( ( iVar21 - (int)( ( ulong )((long)(int)( ( uint ) * (byte*)( plVar22 + -2 ) << 8 ) * 0x16a09 + 0x8000) >> 0x10 ) ) + (uint)pbVar35[-0x20] * -0x100 + ( uint ) * (byte*)( lVar33 + 0x38 ) * 0x100 + (int)( ( ulong )((long)(int)( ( uint ) * (byte*)( plVar22 + 6 ) << 8 ) * 0x16a09 + 0x8000) >> 0x10 ) + (uint)pbVar35[0x20] * 0x100 );
                           FT_Vector_NormLen(local_58);
                           if (( local_58._0_8_ == 0 ) || ( local_58._8_8_ == 0 )) {
                              iVar26 = uVar20 * -0x100 + 0x8000;
                           }
 else {
                              iVar23 = local_58._0_4_;
                              iVar30 = local_58._8_4_;
                              iVar21 = -iVar23;
                              if (0 < iVar23) {
                                 iVar21 = iVar23;
                              }

                              iVar23 = -iVar30;
                              if (0 < iVar30) {
                                 iVar23 = iVar30;
                              }

                              iVar30 = iVar23;
                              if (iVar23 <= iVar21) {
                                 iVar30 = iVar21;
                                 iVar21 = iVar23;
                              }

                              lVar29 = (long)iVar30;
                              lVar15 = (long)iVar21;
                              lVar16 = FT_DivFix(lVar15, lVar29);
                              iVar23 = (int)( lVar16 / 2 );
                              if (iVar26 < iVar23) {
                                 iVar23 = 0x18;
                                 lVar16 = 0;
                                 uVar27 = 0x40000000;
                                 uVar19 = ( ulong )((int)( ( ulong )(( iVar26 * lVar15 + 0x8000 >> 0x10 ) * lVar29 + 0x8000) >> 0x10 ) * 2);
                                 do {
                                    uVar1 = uVar27 + lVar16;
                                    if (uVar1 <= uVar19) {
                                       uVar19 = uVar19 - uVar1;
                                       lVar16 = uVar1 + uVar27;
                                    }

                                    uVar19 = uVar19 * 2;
                                    uVar27 = uVar27 >> 1;
                                    iVar23 = iVar23 + -1;
                                 }
 while ( iVar23 != 0 );
                                 iVar26 = ( iVar30 + iVar21 >> 1 ) - (int)( (ulong)lVar16 >> 8 );
                              }
 else if (iVar26 < 0x10000 - iVar23) {
                                 lVar29 = (int)( uVar20 * -0x100 + 0x8000 ) * lVar29;
                                 iVar26 = (int)( ( ulong )(lVar29 + 0x8000 + ( lVar29 >> 0x3f )) >> 0x10 );
                              }
 else {
                                 lVar16 = 0;
                                 iVar26 = 0x18;
                                 uVar27 = 0x40000000;
                                 uVar19 = ( ulong )((int)( ( ulong )(( (int)( uVar20 * -0x100 + 0x10000 ) * lVar15 + 0x8000 >> 0x10 ) * lVar29 + 0x8000) >> 0x10 ) * 2);
                                 do {
                                    uVar1 = uVar27 + lVar16;
                                    if (uVar1 <= uVar19) {
                                       uVar19 = uVar19 - uVar1;
                                       lVar16 = uVar1 + uVar27;
                                    }

                                    uVar19 = uVar19 * 2;
                                    uVar27 = uVar27 >> 1;
                                    iVar26 = iVar26 + -1;
                                 }
 while ( iVar26 != 0 );
                                 iVar26 = -(iVar30 + iVar21) / 2 + (int)( (ulong)lVar16 >> 8 );
                              }

                           }

                           lVar15 = (long)(int)local_58._0_8_ * (long)iVar26;
                           lVar16 = (long)(int)local_58._8_8_ * (long)iVar26;
                           lVar15 = (long)(int)( ( ulong )(lVar15 + 0x8000 + ( lVar15 >> 0x3f )) >> 0x10 );
                           lVar16 = (long)(int)( ( ulong )(lVar16 + 0x8000 + ( lVar16 >> 0x3f )) >> 0x10 );
                        }
 else {
                           local_58._0_8_ = 0;
                           lVar15 = local_58._0_8_;
                           lVar16 = local_58._8_8_;
                        }

                     }
 else {
                        LAB_00103513:local_58 = (undefined1[16])0x0;
                        if (uVar24 != 0) goto LAB_00103528;
                        LAB_001037b0:lVar15 = 0;
                        lVar16 = 0;
                     }

                     *plVar22 = lVar15;
                     plVar22[1] = lVar16;
                     uVar12 = FT_Vector_Length(plVar22);
                     *(undefined4*)( plVar22 + -1 ) = uVar12;
                  }

                  uVar24 = uVar24 + 1;
                  plVar22 = plVar22 + 4;
                  pbVar35 = pbVar35 + 0x20;
                  lVar33 = lVar33 + 0x20;
               }
 while ( uVar4 != uVar24 );
            }

            iVar36 = iVar36 + 1;
            iVar11 = iVar11 + uVar4;
         }
 while ( iVar31 < iVar37 );
         local_5c = 0;
         if (iVar37 == 1) {
            iVar31 = *piVar25;
            uVar20 = piVar25[1];
            bVar9 = iVar31 != 1 || uVar4 != uVar20;
         }
 else {
            uVar20 = uVar4 - 2;
            iVar31 = 1;
            uVar18 = uVar4;
            do {
               if ((int)uVar4 < 3) {
                  if (uVar4 != 2) break;
               }
 else {
                  lVar15 = ( (long)(int)uVar18 + 1 ) * 0x20 + lVar13;
                  do {
                     compare_neighbor(lVar15, 0xffffffff, 0xffffffff, uVar4);
                     compare_neighbor(lVar15, 0, 0xffffffff, uVar4);
                     compare_neighbor(lVar15, 1, 0xffffffff, uVar4);
                     lVar33 = lVar15 + 0x20;
                     compare_neighbor(lVar15, 0xffffffff, 0, uVar4);
                     lVar15 = lVar33;
                  }
 while ( lVar33 != lVar13 + 0x40 + ( ( ulong )(uVar4 - 3) + (long)(int)uVar18 ) * 0x20 );
               }

               lVar15 = ( (long)(int)uVar20 + (long)(int)uVar18 ) * 0x20 + lVar13;
               do {
                  compare_neighbor(lVar15, 1, 0, uVar4);
                  lVar15 = lVar15 + -0x20;
               }
 while ( ( (ulong)uVar4 + (long)(int)uVar18 ) * 0x20 + lVar13 + (ulong)uVar20 * -0x20 + -0x60 != lVar15 );
               iVar31 = iVar31 + 1;
               uVar18 = uVar18 + uVar4;
            }
 while ( iVar37 != iVar31 );
            iVar31 = iVar37 + -2;
            iVar36 = iVar31 * uVar4;
            do {
               if ((int)uVar4 < 3) {
                  if (uVar20 != 0) break;
               }
 else {
                  lVar15 = ( (long)iVar36 + 1 ) * 0x20 + lVar13;
                  do {
                     compare_neighbor(lVar15, 0xffffffff, 1, uVar4);
                     compare_neighbor(lVar15, 0, 1, uVar4);
                     compare_neighbor(lVar15, 1, 1, uVar4);
                     lVar33 = lVar15 + 0x20;
                     compare_neighbor(lVar15, 0xffffffff, 0, uVar4);
                     lVar15 = lVar33;
                  }
 while ( lVar13 + 0x40 + ( ( ulong )(uVar4 - 3) + (long)iVar36 ) * 0x20 != lVar33 );
               }

               lVar15 = ( (long)(int)uVar20 + (long)iVar36 ) * 0x20 + lVar13;
               do {
                  compare_neighbor(lVar15, 1, 0, uVar4);
                  lVar15 = lVar15 + -0x20;
               }
 while ( lVar15 != ( (long)(int)uVar4 + (long)iVar36 ) * 0x20 + lVar13 + (ulong)uVar20 * -0x20 + -0x60 );
               iVar31 = iVar31 + -1;
               iVar36 = iVar36 - uVar4;
            }
 while ( iVar31 != -1 );
            uVar20 = piVar25[1];
            iVar31 = *piVar25;
            bVar9 = iVar37 != iVar31 || uVar4 != uVar20;
         }

         local_5c = 0;
         if (bVar9) {
            local_5c = 6;
         }
 else {
            iVar32 = iVar32 * 0x10000;
            if (0 < iVar31) {
               iVar36 = 0;
               lVar15 = *(long*)( piVar25 + 4 );
               iVar37 = 0;
               LAB_00103d5e:if ((int)uVar20 < 1) goto LAB_00103e33;
               do {
                  lVar33 = (long)iVar36;
                  piVar25 = (int*)( lVar13 + lVar33 * 0x20 );
                  puVar34 = (undefined1*)( lVar15 + lVar33 );
                  do {
                     iVar11 = *piVar25;
                     if (( iVar11 < 0 ) || ( iVar32 < iVar11 )) {
                        iVar11 = iVar32;
                     }

                     bVar28 = -(*(byte *)(piVar25 + 6) < 0x7f) | 1;
                     if (cVar2 != '\0') {
                        bVar28 = -bVar28;
                     }

                     piVar25 = piVar25 + 8;
                     uVar10 = map_fixed_to_sdf((char)bVar28 * iVar11, iVar32);
                     *puVar34 = uVar10;
                     puVar34 = puVar34 + 1;
                  }
 while ( piVar25 != (int*)( lVar13 + ( lVar33 + (int)uVar20 ) * 0x20 ) );
                  iVar37 = iVar37 + 1;
                  iVar36 = iVar36 + uVar20;
               }
 while ( iVar37 != iVar31 );
               goto LAB_00103e26;
            }

         }

      }

   }
 else {
      LAB_00103214:iVar32 = local_5c;
      if (lVar13 == 0) goto LAB_0010322a;
   }

   ft_mem_free(lVar6, lVar13);
   iVar32 = local_5c;
   LAB_0010322a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar32;
   LAB_00103c8f:uVar20 = uVar20 + 1;
   iVar21 = iVar21 + uVar4;
   if (iVar37 - iVar11 == uVar20) goto LAB_0010339f;
   goto LAB_00103b9f;
   LAB_00103e33:iVar37 = iVar37 + 1;
   iVar36 = iVar36 + uVar20;
   if (iVar37 == iVar31) goto LAB_00103e26;
   goto LAB_00103d5e;
}

