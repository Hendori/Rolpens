void parse_expansion_factor(long param_1, long param_2) {
   undefined8 uVar1;
   long lVar2;
   if (*(uint*)( param_2 + 0xc0 ) < *(uint*)( param_1 + 0x238 )) {
      lVar2 = ( ulong ) * (uint*)( param_2 + 0xc0 ) * 0x150 + *(long*)( param_1 + 0x240 );
      uVar1 = ( **(code**)( param_2 + 0x50 ) )(param_2, 0);
      *(undefined8*)( lVar2 + 0xf8 ) = uVar1;
      *(undefined8*)( lVar2 + 0xc0 ) = uVar1;
      return;
   }

   return;
}
void parse_font_name(void) {
   return;
}
void cid_slot_done(long param_1) {
   if (*(long*)( param_1 + 0x128 ) != 0) {
      *(undefined8*)( *(long*)( param_1 + 0x128 ) + 0x40 ) = 0;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 cid_driver_init(long param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   uint uVar3;
   long in_FS_OFFSET;
   long local_20;
   undefined1 local_14[4];
   long local_10;
   uVar1 = _UNK_00103628;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 0x40 ) = __LC0;
   *(undefined8*)( param_1 + 0x48 ) = uVar1;
   uVar2 = _UNK_00103638;
   uVar1 = __LC1;
   uVar3 = (uint)local_14 ^ ( uint ) & local_20 ^ *(uint*)( param_1 + 0x10 );
   *(undefined4*)( param_1 + 0x38 ) = 1;
   *(undefined1*)( param_1 + 0x3c ) = 1;
   *(undefined8*)( param_1 + 0x50 ) = uVar1;
   *(undefined8*)( param_1 + 0x58 ) = uVar2;
   uVar3 = uVar3 >> 10 ^ uVar3 >> 0x14 ^ uVar3;
   if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
   }
 else if (uVar3 == 0) {
      uVar3 = 0x75bcd15;
   }

   *(uint*)( param_1 + 0x60 ) = uVar3;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   local_20 = param_1;
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cid_driver_done(void) {
   return;
}
char *cid_get_postscript_name(long param_1) {
   char *pcVar1;
   pcVar1 = *(char**)( param_1 + 0x108 );
   if (pcVar1 != (char*)0x0) {
      pcVar1 = pcVar1 + ( *pcVar1 == '/' );
   }

   return pcVar1;
}
undefined8 cid_ps_get_font_info(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x140 );
   *param_2 = *(undefined8*)( param_1 + 0x138 );
   param_2[1] = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x150 );
   param_2[2] = *(undefined8*)( param_1 + 0x148 );
   param_2[3] = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x160 );
   param_2[4] = *(undefined8*)( param_1 + 0x158 );
   param_2[5] = uVar1;
   param_2[6] = *(undefined8*)( param_1 + 0x168 );
   return 0;
}
undefined8 cid_ps_get_font_extra(long param_1, undefined2 *param_2) {
   *param_2 = *(undefined2*)( param_1 + 0x250 );
   return 0;
}
undefined8 cid_get_ros(long param_1, undefined8 *param_2, undefined8 *param_3, undefined4 *param_4) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x120 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x128 );
   }

   if (param_4 != (undefined4*)0x0) {
      *param_4 = *(undefined4*)( param_1 + 0x130 );
   }

   return 0;
}
undefined8 cid_get_is_cid(undefined8 param_1, undefined1 *param_2) {
   if (param_2 != (undefined1*)0x0) {
      *param_2 = 1;
   }

   return 0;
}
undefined8 cid_slot_init(undefined8 *param_1) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1[1] + 0x260 );
   if (lVar1 != 0) {
      lVar2 = FT_Get_Module(*param_1, "pshinter");
      if (lVar2 != 0) {
         uVar3 = ( **(code**)( lVar1 + 8 ) )(lVar2);
         *(undefined8*)( param_1[0x25] + 0x40 ) = uVar3;
      }

   }

   return 0;
}
void cid_face_done(long param_1) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (param_1 != 0) {
      lVar3 = *(long*)( param_1 + 600 );
      uVar1 = *(undefined8*)( param_1 + 0xb8 );
      if (lVar3 != 0) {
         if (*(int*)( param_1 + 0x238 ) != 0) {
            lVar4 = 0;
            do {
               lVar2 = lVar4 * 0x10 + lVar3;
               if (*(undefined8**)( lVar2 + 8 ) != (undefined8*)0x0) {
                  ft_mem_free(uVar1, **(undefined8**)( lVar2 + 8 ));
                  **(undefined8**)( lVar2 + 8 ) = 0;
                  ft_mem_free(uVar1);
                  *(undefined8*)( lVar2 + 8 ) = 0;
                  lVar3 = *(long*)( param_1 + 600 );
               }

               lVar4 = lVar4 + 1;
            }
 while ( (uint)lVar4 < *(uint*)( param_1 + 0x238 ) );
         }

         ft_mem_free(uVar1);
         *(undefined8*)( param_1 + 600 ) = 0;
      }

      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x138 ));
      *(undefined8*)( param_1 + 0x138 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x140 ));
      *(undefined8*)( param_1 + 0x140 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x148 ));
      *(undefined8*)( param_1 + 0x148 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x150 ));
      *(undefined8*)( param_1 + 0x150 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x158 ));
      *(undefined8*)( param_1 + 0x158 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x240 ));
      *(undefined8*)( param_1 + 0x240 ) = 0;
      *(undefined4*)( param_1 + 0x238 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x108 ));
      *(undefined8*)( param_1 + 0x108 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x120 ));
      *(undefined8*)( param_1 + 0x120 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x128 ));
      *(undefined8*)( param_1 + 0x128 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x28 ) = (undefined1[16])0x0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x268 ));
      *(undefined8*)( param_1 + 0x268 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x270 ));
      *(undefined8*)( param_1 + 0x270 ) = 0;
      return;
   }

   return;
}
int cid_compute_fd_and_offsets(long param_1, int param_2, ulong *param_3, ulong *param_4, ulong *param_5) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   int iVar5;
   byte *pbVar6;
   byte *pbVar7;
   ulong uVar8;
   byte *pbVar9;
   ulong uVar10;
   ulong uVar11;
   lVar4 = *(long*)( param_1 + 0x270 );
   iVar5 = FT_Stream_Seek(lVar4, *(long*)( param_1 + 0x220 ) + *(long*)( param_1 + 0x248 ) + ( ulong )(uint)(param_2 * ( *(int*)( param_1 + 0x22c ) + *(int*)( param_1 + 0x228 ) )));
   if (iVar5 == 0) {
      iVar5 = FT_Stream_EnterFrame(lVar4);
      if (iVar5 == 0) {
         uVar2 = *(uint*)( param_1 + 0x228 );
         pbVar7 = *(byte**)( lVar4 + 0x40 );
         if (uVar2 == 0) {
            uVar8 = 0;
         }
 else {
            uVar8 = 0;
            pbVar6 = pbVar7 + uVar2;
            pbVar9 = pbVar7;
            do {
               bVar1 = *pbVar9;
               pbVar9 = pbVar9 + 1;
               uVar8 = uVar8 << 8 | (ulong)bVar1;
               pbVar7 = pbVar6;
            }
 while ( pbVar6 != pbVar9 );
         }

         uVar3 = *(uint*)( param_1 + 0x22c );
         if (uVar3 == 0) {
            uVar11 = 0;
            uVar10 = 0;
         }
 else {
            pbVar9 = pbVar7 + uVar3;
            uVar11 = 0;
            do {
               bVar1 = *pbVar7;
               pbVar7 = pbVar7 + 1;
               uVar11 = uVar11 << 8 | (ulong)bVar1;
            }
 while ( pbVar9 != pbVar7 );
            pbVar9 = pbVar9 + uVar2;
            uVar10 = 0;
            pbVar7 = pbVar9 + uVar3;
            do {
               bVar1 = *pbVar9;
               pbVar9 = pbVar9 + 1;
               uVar10 = uVar10 << 8 | (ulong)bVar1;
            }
 while ( pbVar9 != pbVar7 );
         }

         if (param_3 != (ulong*)0x0) {
            *param_3 = uVar8;
         }

         if (param_4 != (ulong*)0x0) {
            *param_4 = uVar11;
         }

         if (param_5 != (ulong*)0x0) {
            *param_5 = uVar10;
         }

         if (( ( *(uint*)( param_1 + 0x238 ) <= uVar8 ) || ( *(ulong*)( lVar4 + 8 ) < uVar10 ) ) || ( uVar10 < uVar11 )) {
            iVar5 = 9;
         }

         FT_Stream_ExitFrame(lVar4);
      }

   }

   return iVar5;
}
int cid_load_glyph(long param_1, ulong param_2) {
   long lVar1;
   byte bVar2;
   uint uVar3;
   undefined4 uVar4;
   int iVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   long *plVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   byte *pbVar15;
   void *__dest;
   undefined4 *puVar16;
   long lVar17;
   long lVar18;
   int iVar19;
   ulong uVar20;
   undefined1 uVar21;
   long in_FS_OFFSET;
   ulong local_a78;
   int local_a3c;
   ulong local_a38;
   long local_a30;
   byte *local_a28;
   undefined8 local_a20;
   long local_a18;
   long local_a10;
   undefined1 local_a08[1232];
   undefined1 local_538[1056];
   undefined1 *local_118;
   long local_40;
   lVar18 = *(long*)( param_1 + 8 );
   uVar6 = *(undefined8*)( lVar18 + 0x270 );
   uVar7 = *(undefined8*)( lVar18 + 0xb8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = *(long*)( lVar18 + 0x100 );
   local_a3c = 0;
   plVar9 = *(long**)( *(long*)( lVar18 + 0xf0 ) + 0x68 );
   if (plVar9 == (long*)0x0) {
      local_a3c = cid_compute_fd_and_offsets(lVar18, param_2 & 0xffffffff, &local_a38, &local_a30, &local_a28);
      __dest = (void*)0x0;
      if (( ( ( local_a3c == 0 ) && ( local_a78 = (long)local_a28 - local_a30 ),local_a78 != 0 ) ) && ( __dest = (void*)ft_mem_qalloc(uVar7, local_a78, &local_a3c) ),local_a3c == 0) {
         local_a3c = 0;
         uVar20 = local_a38;
         LAB_001006d9:puVar16 = (undefined4*)( uVar20 * 0x10 + *(long*)( lVar18 + 600 ) );
         uVar4 = *puVar16;
         uVar6 = *(undefined8*)( puVar16 + 2 );
         *(undefined8*)( param_1 + 0xaa8 ) = 0;
         *(undefined8*)( param_1 + 0xab0 ) = 0;
         *(undefined8*)( param_1 + 0xaa0 ) = uVar6;
         *(undefined4*)( param_1 + 0xa9c ) = uVar4;
         lVar17 = uVar20 * 0x150 + *(long*)( lVar18 + 0x240 );
         iVar5 = *(int*)( lVar17 + 4 );
         uVar6 = *(undefined8*)( lVar17 + 0x108 );
         uVar10 = *(undefined8*)( lVar17 + 0x110 );
         uVar11 = *(undefined8*)( lVar17 + 0x118 );
         uVar12 = *(undefined8*)( lVar17 + 0x120 );
         uVar13 = *(undefined8*)( lVar17 + 0x128 );
         uVar14 = *(undefined8*)( lVar17 + 0x130 );
         *(int*)( param_1 + 0xa98 ) = iVar5;
         iVar19 = 0;
         if (-1 < iVar5) {
            iVar19 = iVar5;
         }

         *(undefined8*)( param_1 + 0xab8 ) = uVar6;
         *(undefined8*)( param_1 + 0xac0 ) = uVar10;
         *(undefined8*)( param_1 + 0xac8 ) = uVar11;
         *(undefined8*)( param_1 + 0xad0 ) = uVar12;
         *(undefined8*)( param_1 + 0xad8 ) = uVar13;
         *(undefined8*)( param_1 + 0xae0 ) = uVar14;
         uVar20 = (ulong)iVar19;
         if (local_a78 < uVar20) {
            local_a3c = 9;
            uVar21 = 0;
         }
 else {
            if (-1 < iVar5) {
               ( **(code**)( lVar8 + 0x20 ) )(__dest, local_a78, 0x10ea);
            }

            lVar1 = (long)__dest + uVar20;
            if (*(char*)( param_1 + 0x86 ) == '\0') {
               ( **(code**)( lVar8 + 0x30 ) )(local_538, param_1, 1);
               ( **(code**)( lVar8 + 0x38 ) )(lVar18, lVar17);
               local_118 = local_a08;
               local_a3c = ( **(code**)( *(long*)( lVar8 + 0x18 ) + 0x18 ) )(local_538, lVar1, local_a78 - uVar20);
               uVar21 = 0;
               if ((char)local_a3c == -0x5c) {
                  uVar21 = 1;
                  *(undefined1*)( *(long*)( param_1 + 0x10 ) + 0x130 ) = 0;
                  local_a3c = ( **(code**)( *(long*)( lVar8 + 0x18 ) + 0x18 ) )(local_538, lVar1, local_a78 - uVar20);
               }

            }
 else {
               uVar21 = 0;
               local_a3c = ( **(code**)( *(long*)( lVar8 + 0x18 ) + 0x10 ) )(param_1, lVar1, (int)local_a78 - iVar19);
            }

            if (( ( plVar9 != (long*)0x0 ) && ( local_a3c == 0 ) ) && ( *(long*)( *plVar9 + 0x10 ) != 0 )) {
               lVar18 = FT_RoundFix(*(undefined8*)( param_1 + 0x40 ));
               local_a20 = 0;
               local_a28 = (byte*)( lVar18 >> 0x10 );
               local_a18 = FT_RoundFix(*(undefined8*)( param_1 + 0x50 ));
               local_a18 = local_a18 >> 0x10;
               local_a10 = FT_RoundFix(*(undefined8*)( param_1 + 0x58 ));
               local_a10 = local_a10 >> 0x10;
               local_a3c = ( **(code**)( *plVar9 + 0x10 ) )(plVar9[1], (int)param_2, 0, &local_a28);
               *(long*)( param_1 + 0x40 ) = (long)local_a28 << 0x10;
               *(long*)( param_1 + 0x50 ) = local_a18 << 0x10;
               *(long*)( param_1 + 0x58 ) = local_a10 << 0x10;
            }

         }

         goto LAB_00100896;
      }

   }
 else {
      local_a3c = ( **(code**)*plVar9 )(plVar9[1], param_2, &local_a28);
      if (local_a3c == 0) {
         uVar3 = *(uint*)( lVar18 + 0x228 );
         if (uVar3 <= (uint)local_a20) {
            if (uVar3 == 0) {
               uVar20 = 0;
            }
 else {
               uVar20 = 0;
               pbVar15 = local_a28;
               do {
                  bVar2 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                  uVar20 = uVar20 << 8 | (ulong)bVar2;
               }
 while ( pbVar15 != local_a28 + uVar3 );
            }

            local_a78 = ( ulong )((uint)local_a20 - uVar3);
            local_a38 = uVar20;
            __dest = (void*)ft_mem_qalloc(uVar7, local_a78, &local_a3c);
            if (local_a3c == 0) {
               memcpy(__dest, local_a28 + *(uint*)( lVar18 + 0x228 ), local_a78);
            }

            ( **(code**)( *plVar9 + 8 ) )(plVar9[1], &local_a28);
            if (local_a3c == 0) goto LAB_001006d9;
            goto LAB_00100893;
         }

      }

      __dest = (void*)0x0;
   }

   LAB_00100893:uVar21 = 0;
   LAB_00100896:ft_mem_free(uVar7, __dest);
   *(undefined1*)( *(long*)( param_1 + 0x10 ) + 0x131 ) = uVar21;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_a3c;
}
int cid_slot_load_glyph(long param_1, long param_2, uint param_3, uint param_4) {
   char cVar1;
   char cVar2;
   ushort uVar3;
   short sVar4;
   int iVar5;
   int iVar6;
   long *plVar7;
   undefined8 uVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   long *plVar12;
   long *plVar13;
   undefined8 uVar14;
   undefined1 uVar15;
   long in_FS_OFFSET;
   bool bVar16;
   long local_c70;
   long local_c60;
   uint local_c44;
   long local_c38;
   long lStack_c30;
   long local_c28;
   long lStack_c20;
   long local_c18;
   long lStack_c10;
   long local_c08;
   long lStack_c00;
   undefined1 local_bf8[32];
   long local_bd8;
   undefined8 local_bb8;
   undefined8 local_ba8;
   undefined1 local_b73;
   long local_b70;
   long local_140;
   long lStack_138;
   long local_130;
   long lStack_128;
   long local_120;
   long lStack_118;
   long local_40;
   iVar9 = 6;
   lVar11 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( lVar11 + 0x20 ) <= param_3) goto LAB_00100e40;
   if (( param_4 & 0x400 ) == 0) {
      local_c70 = *(long*)( lVar11 + 0x100 );
      uVar14 = *(undefined8*)( param_2 + 0x20 );
      uVar8 = *(undefined8*)( param_2 + 0x28 );
      *(undefined4*)( param_1 + 200 ) = 0;
      *(undefined8*)( param_1 + 0x138 ) = uVar14;
      *(undefined8*)( param_1 + 0x140 ) = uVar8;
      if (( param_4 & 3 ) != 0) goto LAB_00100ea1;
      uVar14 = 1;
      uVar15 = 1;
      bVar16 = true;
      local_c44 = 0;
   }
 else {
      local_c70 = *(long*)( lVar11 + 0x100 );
      uVar14 = *(undefined8*)( param_2 + 0x20 );
      uVar8 = *(undefined8*)( param_2 + 0x28 );
      param_4 = param_4 | 3;
      *(undefined4*)( param_1 + 200 ) = 0;
      *(undefined8*)( param_1 + 0x138 ) = uVar14;
      *(undefined8*)( param_1 + 0x140 ) = uVar8;
      LAB_00100ea1:uVar14 = 0;
      uVar15 = 0;
      local_c44 = param_4 & 1;
      bVar16 = ( param_4 & 1 ) == 0;
   }

   local_c60 = param_1 + 200;
   *(undefined1*)( param_1 + 0x130 ) = uVar15;
   *(bool*)( param_1 + 0x131 ) = bVar16;
   *(undefined4*)( param_1 + 0x90 ) = 0x6f75746c;
   iVar9 = ( *(code*)**(undefined8**)( local_c70 + 0x18 ) )(local_bf8, lVar11, param_2, param_1, 0, 0, uVar14, (int)param_4 >> 0x10 & 0xf, cid_load_glyph);
   if (iVar9 == 0) {
      local_b73 = ( param_4 & 0x400 ) != 0;
      iVar9 = cid_load_glyph(local_bf8, param_3);
      if (iVar9 == 0) {
         cVar1 = *(char*)( param_1 + 0x130 );
         cVar2 = *(char*)( param_1 + 0x131 );
         local_c38 = local_140;
         lStack_c30 = lStack_138;
         local_c28 = local_130;
         lStack_c20 = lStack_128;
         ( **(code**)( *(long*)( local_c70 + 0x18 ) + 8 ) )(local_bf8);
         *(uint*)( param_1 + 0xe8 ) = *(uint*)( param_1 + 0xe8 ) & 1 | 4;
         if (( param_4 & 0x400 ) == 0) {
            lVar10 = FT_RoundFix(local_ba8);
            *(long*)( param_1 + 0x50 ) = lVar10 >> 0x10;
            lVar10 = FT_RoundFix(local_ba8);
            *(long*)( param_1 + 0x70 ) = lVar10 >> 0x10;
            *(undefined1*)( *(long*)( param_1 + 0x128 ) + 0xc ) = 0;
            lVar10 = *(long*)( lVar11 + 0x188 );
            lVar11 = *(long*)( lVar11 + 0x178 );
            *(undefined4*)( param_1 + 0x90 ) = 0x6f75746c;
            lVar11 = lVar10 - lVar11 >> 0x10;
            uVar3 = *(ushort*)( param_2 + 0x1a );
            *(long*)( param_1 + 0x68 ) = lVar11;
            *(long*)( param_1 + 0x78 ) = lVar11;
            if (uVar3 < 0x18) {
               *(uint*)( param_1 + 0xe8 ) = *(uint*)( param_1 + 0xe8 ) | 0x100;
            }

            if (( ( local_c38 != 0x10000 ) || ( lStack_c20 != 0x10000 ) ) || ( lStack_c30 != 0 || local_c28 != 0 )) {
               FT_Outline_Transform(local_c60, &local_c38);
               lVar11 = (long)*(int*)( param_1 + 0x50 ) * (long)(int)local_c38;
               *(long*)( param_1 + 0x50 ) = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 );
               lVar11 = (long)(int)lStack_c20 * (long)*(int*)( param_1 + 0x68 );
               *(long*)( param_1 + 0x68 ) = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 );
            }

            if (lStack_118 != 0 || local_120 != 0) {
               FT_Outline_Translate(local_c60, local_120, lStack_118);
               *(long*)( param_1 + 0x50 ) = *(long*)( param_1 + 0x50 ) + local_120;
               *(long*)( param_1 + 0x68 ) = *(long*)( param_1 + 0x68 ) + lStack_118;
            }

            if (( cVar2 != '\0' ) || ( local_c44 == 0 )) {
               iVar5 = *(int*)( param_1 + 0x140 );
               iVar6 = *(int*)( param_1 + 0x138 );
               if (( ( cVar1 == '\0' ) || ( local_b70 == 0 ) ) && ( sVar4= *(short *)(local_bd8 + 2),0 < sVar4 )) {
                  plVar7 = *(long**)( local_bd8 + 8 );
                  plVar12 = plVar7;
                  do {
                     plVar13 = plVar12 + 2;
                     lVar11 = (long)(int)*plVar12 * (long)iVar6;
                     *plVar12 = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 );
                     lVar11 = (long)(int)plVar12[1] * (long)iVar5;
                     plVar12[1] = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 );
                     plVar12 = plVar13;
                  }
 while ( plVar13 != plVar7 + (ulong)(uint)(int)sVar4 * 2 );
               }

               lVar11 = (long)*(int*)( param_1 + 0x50 ) * (long)iVar6;
               *(long*)( param_1 + 0x50 ) = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 );
               lVar11 = (long)*(int*)( param_1 + 0x68 ) * (long)iVar5;
               *(long*)( param_1 + 0x68 ) = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 );
            }

            FT_Outline_Get_CBox(local_c60, &local_c18);
            *(long*)( param_1 + 0x30 ) = local_c08 - local_c18;
            *(long*)( param_1 + 0x38 ) = lStack_c00 - lStack_c10;
            *(long*)( param_1 + 0x40 ) = local_c18;
            *(long*)( param_1 + 0x48 ) = lStack_c00;
            if (( param_4 & 0x10 ) != 0) {
               ft_synthesize_vertical_metrics(param_1 + 0x30, *(undefined8*)( param_1 + 0x68 ));
            }

         }
 else {
            lVar11 = *(long*)( param_1 + 0x128 );
            lVar10 = FT_RoundFix(local_bb8);
            *(long*)( param_1 + 0x40 ) = lVar10 >> 0x10;
            lVar10 = FT_RoundFix(local_ba8);
            *(long*)( param_1 + 0x50 ) = lVar10 >> 0x10;
            *(undefined1*)( lVar11 + 0xc ) = 1;
            *(long*)( lVar11 + 0x10 ) = local_c38;
            *(long*)( lVar11 + 0x18 ) = lStack_c30;
            *(long*)( lVar11 + 0x20 ) = local_c28;
            *(long*)( lVar11 + 0x28 ) = lStack_c20;
            *(long*)( lVar11 + 0x30 ) = local_120;
            *(long*)( lVar11 + 0x38 ) = lStack_118;
         }

      }
 else {
         ( **(code**)( *(long*)( local_c70 + 0x18 ) + 8 ) )(local_bf8);
      }

   }

   LAB_00100e40:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar9;
}
void cid_get_cid_from_glyph_index(undefined8 param_1, undefined4 param_2, undefined4 *param_3) {
   int iVar1;
   iVar1 = cid_compute_fd_and_offsets(param_1, param_2, 0, 0, 0);
   if (iVar1 != 0) {
      param_2 = 0;
   }

   *param_3 = param_2;
   return;
}
void cid_parse_font_matrix(long param_1, long param_2) {
   uint uVar1;
   char cVar2;
   undefined2 uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   uVar1 = *(uint*)( param_2 + 0xc0 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar1 < *(uint*)( param_1 + 0x238 )) {
      lVar5 = *(long*)( param_1 + 0x240 );
      iVar4 = ( **(code**)( param_2 + 0x68 ) )(param_2, 6, &local_68, 3);
      if (( 5 < iVar4 ) && ( local_50 != 0 )) {
         lVar6 = -local_50;
         if (0 < local_50) {
            lVar6 = local_50;
         }

         if (lVar6 != 0x10000) {
            uVar3 = FT_DivFix(1000, lVar6);
            *(undefined2*)( param_1 + 0x88 ) = uVar3;
            local_68 = FT_DivFix(local_68, lVar6);
            local_60 = FT_DivFix(local_60, lVar6);
            local_58 = FT_DivFix(local_58, lVar6);
            local_48 = FT_DivFix(local_48, lVar6);
            uStack_40 = FT_DivFix(uStack_40, lVar6);
            local_50 = ( local_50 >> 0x3f & 0xfffffffffffe0000U ) + 0x10000;
         }

         lVar5 = lVar5 + (ulong)uVar1 * 0x150;
         *(long*)( lVar5 + 0x120 ) = local_50;
         *(undefined8*)( lVar5 + 0x118 ) = local_60;
         *(undefined8*)( lVar5 + 0x108 ) = local_68;
         *(undefined8*)( lVar5 + 0x110 ) = local_58;
         cVar2 = FT_Matrix_Check(lVar5 + 0x108);
         if (cVar2 == '\0') {
            *(undefined4*)( param_2 + 0x18 ) = 3;
         }
 else {
            *(int*)( lVar5 + 0x128 ) = (int)( (ulong)local_48 >> 0x10 );
            *(int*)( lVar5 + 300 ) = (int)( (long)local_48 >> 0x30 );
            *(int*)( lVar5 + 0x130 ) = (int)( (ulong)uStack_40 >> 0x10 );
            *(int*)( lVar5 + 0x134 ) = (int)( (long)uStack_40 >> 0x30 );
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void parse_fd_array(long param_1, long param_2) {
   undefined8 uVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   uVar1 = *(undefined8*)( param_1 + 0xb8 );
   lVar3 = *(long*)( param_2 + 0x90 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   uVar2 = ( **(code**)( param_2 + 0x48 ) )(param_2);
   if (( uVar2 < 0x80000000 ) && ( *(long*)( param_1 + 0x240 ) == 0 )) {
      uVar4 = *(ulong*)( lVar3 + 8 ) / 100;
      if ((long)uVar4 <= (long)uVar2) {
         uVar2 = uVar4;
      }

      lVar3 = ft_mem_realloc(uVar1, 0x150, 0, uVar2, 0, &local_24);
      *(long*)( param_1 + 0x240 ) = lVar3;
      if (local_24 == 0) {
         *(int*)( param_1 + 0x238 ) = (int)uVar2;
         uVar1 = _LC3;
         if (uVar2 != 0) {
            puVar5 = (undefined4*)( lVar3 + 4 );
            do {
               *(undefined8*)( puVar5 + 0x1d ) = uVar1;
               puVar6 = puVar5 + 0x54;
               *puVar5 = 4;
               *(undefined8*)( puVar5 + 0x2f ) = 0xf5c;
               *(undefined8*)( puVar5 + 0x1b ) = 0x27a000;
               puVar5 = puVar6;
            }
 while ( puVar6 != (undefined4*)( lVar3 + 0x154 + ( ulong )((int)uVar2 - 1) * 0x150 ) );
         }

      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void cid_get_interface(void) {
   ft_service_list_lookup(cid_services);
   return;
}
undefined8 cid_size_get_globals_funcs_isra_0(long param_1) {
   undefined8 *puVar1;
   code *UNRECOVERED_JUMPTABLE;
   long lVar2;
   undefined8 uVar3;
   puVar1 = *(undefined8**)( param_1 + 0x260 );
   lVar2 = FT_Get_Module(*(undefined8*)( *(long*)( param_1 + 0xb0 ) + 8 ), "pshinter");
   if (( ( lVar2 != 0 ) && ( puVar1 != (undefined8*)0x0 ) ) && ( UNRECOVERED_JUMPTABLE = (code*)*puVar1 ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001012f5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( *UNRECOVERED_JUMPTABLE )(lVar2);
      return uVar3;
   }

   return 0;
}
undefined8 cid_size_init(long *param_1) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = (undefined8*)cid_size_get_globals_funcs_isra_0(*param_1);
   uVar3 = 0;
   if (puVar2 != (undefined8*)0x0) {
      lVar1 = *param_1;
      uVar3 = ( *(code*)*puVar2 )(*(undefined8*)( lVar1 + 0xb8 ), *(long*)( lVar1 + 8 ) * 0x150 + *(long*)( lVar1 + 0x240 ), &local_18);
      if ((int)uVar3 == 0) {
         *(undefined8*)param_1[10] = local_18;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cid_size_done(undefined8 *param_1) {
   long lVar1;
   if (*(long*)param_1[10] != 0) {
      lVar1 = cid_size_get_globals_funcs_isra_0(*param_1);
      if (lVar1 != 0) {
         ( **(code**)( lVar1 + 0x10 ) )(*(undefined8*)param_1[10]);
      }

      *(undefined8*)param_1[10] = 0;
      return;
   }

   return;
}
int cid_size_request(undefined8 *param_1) {
   int iVar1;
   long lVar2;
   iVar1 = FT_Request_Metrics(*param_1);
   if (iVar1 == 0) {
      lVar2 = cid_size_get_globals_funcs_isra_0(*param_1);
      if (lVar2 != 0) {
         ( **(code**)( lVar2 + 8 ) )(*(undefined8*)param_1[10], param_1[4], param_1[5], 0, 0);
         return 0;
      }

   }

   return iVar1;
}
int cid_face_open(long param_1, int param_2) {
   uint uVar1;
   byte bVar2;
   uint uVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   bool bVar6;
   uint uVar7;
   char *pcVar8;
   char cVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   char *pcVar13;
   size_t sVar14;
   int *piVar15;
   undefined8 *puVar16;
   char *pcVar17;
   byte *pbVar18;
   uint *puVar19;
   ulong *puVar20;
   ulong *puVar21;
   undefined8 uVar22;
   char cVar23;
   uint uVar24;
   long lVar25;
   long *plVar26;
   byte *pbVar27;
   ulong uVar28;
   long lVar29;
   char *pcVar30;
   ulong uVar31;
   char *pcVar32;
   long lVar33;
   char **ppcVar34;
   uint uVar35;
   ulong uVar36;
   char *pcVar37;
   undefined1 *puVar38;
   long in_FS_OFFSET;
   long local_298;
   byte *local_290;
   int local_24c;
   int *local_248;
   long local_240;
   char *local_228[3];
   int local_210;
   code *local_1f8;
   code *local_1f0;
   code *local_1e8;
   code *local_1e0;
   code *local_1b8;
   code *local_1a8;
   code *local_1a0;
   long local_198;
   char *local_190;
   long local_188;
   byte *local_180;
   ulong local_178;
   uint local_168;
   undefined1 auStack_161[9];
   byte local_158[9];
   byte local_14f[271];
   long local_40;
   uVar4 = *(undefined8*)( param_1 + 0xb8 );
   lVar33 = *(long*)( param_1 + 0xc0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ppcVar34 = local_228;
   for (lVar25 = 0x1a; lVar25 != 0; lVar25 = lVar25 + -1) {
      *ppcVar34 = (char*)0x0;
      ppcVar34 = ppcVar34 + 1;
   }

   ( *(code*)**(undefined8**)( *(long*)( param_1 + 0x100 ) + 8 ) )(local_228, 0, 0, uVar4);
   local_198 = lVar33;
   lVar25 = FT_Stream_Pos(lVar33);
   iVar10 = FT_Stream_EnterFrame(lVar33, 0x1f);
   if (iVar10 == 0) {
      iVar10 = strncmp(*(char**)( lVar33 + 0x40 ), "%!PS-Adobe-3.0 Resource-CIDFont", 0x1f);
      if (iVar10 == 0) {
         FT_Stream_ExitFrame(lVar33);
         LAB_00101532:local_290 = (byte*)FT_Stream_Pos(lVar33);
         uVar36 = 0x109;
         local_298 = 0;
         pbVar18 = local_158;
         do {
            lVar29 = *(long*)( lVar33 + 8 );
            lVar12 = FT_Stream_Pos(lVar33);
            uVar28 = lVar29 - lVar12;
            uVar31 = uVar36;
            if (uVar28 <= uVar36) {
               uVar31 = uVar28;
            }

            iVar10 = FT_Stream_Read(lVar33, pbVar18, uVar31);
            if (iVar10 != 0) goto LAB_001019f5;
            pbVar18[uVar31] = 0;
            pbVar27 = local_158;
            if (local_158 < pbVar18 + ( uVar31 - 6 )) {
               do {
                  if (( *pbVar27 == 0x53 ) && ( iVar10 = iVar10 == 0 )) {
                     lVar29 = ( (long)local_290 + 10 ) - (long)local_158;
                     LAB_00101601:local_290 = pbVar27 + lVar29;
                     lVar29 = (long)local_290 - lVar25;
                     iVar10 = FT_Stream_Seek(lVar33);
                     if (iVar10 != 0) goto LAB_001019f5;
                     iVar10 = FT_Stream_ExtractFrame(lVar33, lVar29, &local_190);
                     pcVar17 = local_190;
                     if (iVar10 != 0) goto LAB_001019f5;
                     local_180 = local_290;
                     local_228[2] = local_190 + lVar29;
                     local_228[0] = local_190;
                     local_228[1] = local_190;
                     local_168 = 0xffffffff;
                     local_188 = lVar29;
                     ( *local_1e8 )(local_228);
                     ( *local_1f0 )(local_228);
                     pcVar37 = local_228[0];
                     ( *local_1e8 )(local_228);
                     ( *local_1f0 )(local_228);
                     pcVar30 = local_228[2] + -6;
                     pcVar13 = local_228[2] + -9;
                     pcVar32 = local_228[0];
                     goto joined_r0x001016dd;
                  }

                  if (( pbVar27[1] == 0x73 ) && ( iVar10 = iVar10 == 0 )) {
                     lVar29 = ( (long)local_290 + 7 ) - (long)local_158;
                     goto LAB_00101601;
                  }

                  pbVar27 = pbVar27 + 1;
               }
 while ( pbVar18 + ( uVar31 - 6 ) != pbVar27 );
            }

            if (local_298 + uVar31 < 9) {
               iVar10 = 3;
               goto LAB_001019f5;
            }

            uVar36 = 0x100;
            memmove(local_158, auStack_161 + local_298 + uVar31, 9);
            pbVar18 = local_14f;
            local_290 = (byte*)( (long)local_290 + 0x100 );
            local_298 = 9;
         }
 while ( true );
      }

      FT_Stream_ExitFrame(lVar33);
      local_24c = 2;
      iVar10 = local_24c;
   }
 else {
      local_24c = 2;
      iVar10 = local_24c;
   }

   goto LAB_001019f5;
   joined_r0x001016dd:pcVar8 = pcVar37;
   local_228[0] = pcVar32;
   if (pcVar30 < pcVar32) goto LAB_00101b0e;
   iVar10 = local_210;
   if (local_210 != 0) goto LAB_001019f5;
   if (( ( *pcVar32 == 'S' ) && ( pcVar32 <= pcVar13 ) ) && ( iVar10 = iVar10 == 0 )) {
      local_228[0] = pcVar17;
      ( *local_1b8 )(local_228, &local_248);
      uVar36 = local_178;
      if (( ( local_240 - (long)local_248 == 5 ) && ( *local_248 == 0x78654828 ) ) && ( ( (char)local_248[1] == ')' && ( local_228[0] = pcVar8 ),uVar36 = ( *local_1e0 )(local_228),(long)uVar36 < 0 ) )) goto LAB_00101d40;
      local_178 = uVar36;
      local_24c = 0;
      local_210 = 0;
      pcVar30 = local_190 + local_188;
      pcVar17 = local_190;
      local_228[2] = pcVar30;
      goto LAB_001017e0;
   }

   if (( pcVar32[1] == 's' ) && ( iVar10 = iVar10 == 0 )) {
      iVar10 = 2;
      goto LAB_001019f5;
   }

   ( *local_1e8 )(local_228);
   ( *local_1f0 )(local_228);
   pcVar37 = pcVar32;
   pcVar32 = local_228[0];
   pcVar17 = pcVar8;
   goto joined_r0x001016dd;
   LAB_00101b0e:FT_Stream_ReleaseFrame(lVar33, &local_190);
   iVar10 = FT_Stream_Seek(lVar33, local_290);
   if (iVar10 != 0) goto LAB_001019f5;
   goto LAB_00101532;
   LAB_001017e0:local_228[0] = pcVar17;
   ( *local_1f0 )(local_228);
   pcVar32 = local_228[0];
   if (pcVar30 <= local_228[0]) {
      pcVar37 = pcVar30 + -0x12;
      if (pcVar17 < pcVar37) goto LAB_00101821;
      LAB_00101b5a:if (*(int*)( param_1 + 0x238 ) == 0) goto LAB_00101d40;
      local_24c = local_210;
      iVar10 = local_210;
      if (( local_210 == 0 ) && ( iVar10 = -1 < param_2 )) {
         puVar16 = (undefined8*)ft_mem_alloc(uVar4, 0x50, &local_24c);
         *(undefined8**)( param_1 + 0x270 ) = puVar16;
         iVar10 = local_24c;
         if (local_24c == 0) {
            puVar5 = *(undefined8**)( param_1 + 0xc0 );
            if (local_178 == 0) {
               uVar4 = puVar5[1];
               *puVar16 = *puVar5;
               puVar16[1] = uVar4;
               for (int i = 0; i < 4; i++) {
                  uVar4 = puVar5[( 2*i + 3 )];
                  puVar16[( 2*i + 2 )] = puVar5[( 2*i + 2 )];
                  puVar16[( 2*i + 3 )] = uVar4;
               }

               pbVar18 = local_180;
               goto LAB_00101d1f;
            }

            if (( ulong )(puVar5[1] - (long)local_180) < local_178) {
               local_178 = puVar5[1] - (long)local_180;
            }

            pcVar17 = (char*)ft_mem_qalloc(uVar4, local_178, &local_24c);
            uVar36 = local_178;
            *(char**)( param_1 + 0x268 ) = pcVar17;
            iVar10 = local_24c;
            if (local_24c == 0) {
               lVar33 = *(long*)( param_1 + 0xc0 );
               iVar10 = FT_Stream_Seek(lVar33, local_180);
               if (iVar10 == 0) {
                  if (pcVar17 < pcVar17 + uVar36) {
                     bVar6 = true;
                     pbVar18 = local_158;
                     pbVar27 = local_158;
                     pcVar30 = pcVar17;
                     goto LAB_00101c72;
                  }

                  pcVar30 = (char*)0x0;
                  goto LAB_00101f90;
               }

            }

         }

      }

      goto LAB_001019f5;
   }

   pcVar37 = local_228[0] + -0x11;
   if (pcVar17 < pcVar37) {
      LAB_00101821:do {
         while (( ( *pcVar17 != '%' || ( iVar10 = strncmp(pcVar17, "%ADOBeginFontDict", 0x11) ),iVar10 != 0 ) ) || ( *(int*)( param_1 + 0x238 ) == 0 )) {
            pcVar17 = pcVar17 + 1;
            if (pcVar37 <= pcVar17) goto LAB_00101860;
         }
;
         pcVar17 = pcVar17 + 1;
         local_168 = local_168 + 1;
      }
 while ( pcVar17 < pcVar37 );
      LAB_00101860:if (pcVar30 <= pcVar32) goto LAB_00101b5a;
   }

   ( *local_1e8 )(local_228);
   pcVar17 = local_228[0];
   if (( pcVar30 <= local_228[0] ) || ( local_210 != 0 )) goto LAB_00101b5a;
   if (( *pcVar32 == '/' ) && ( pcVar32 + 2 < pcVar30 )) {
      uVar36 = (long)local_228[0] - (long)( pcVar32 + 1 );
      iVar10 = (int)uVar36;
      if (iVar10 - 1U < 0x15) {
         cVar23 = pcVar32[1];
         cVar9 = 'C';
         pcVar37 = "CIDFontName";
         puVar38 = cid_field_records;
         do {
            if (( cVar23 == cVar9 ) && ( sVar14 = strlen(pcVar37)(uVar36 & 0xffffffff) == sVar14 )) {
               if (iVar10 == 1) {
                  LAB_00101954:if (*(int*)( puVar38 + 0xc ) == 0xb) {
                     ( **(code**)( puVar38 + 0x10 ) )(param_1, local_228);
                  }
 else {
                     uVar24 = *(uint*)( puVar38 + 8 );
                     if (uVar24 == 3) {
                        piVar15 = (int*)( param_1 + 0x138 );
                     }
 else if (uVar24 < 4) {
                        if (uVar24 == 0) {
                           piVar15 = (int*)( param_1 + 0x108 );
                        }
 else {
                           piVar15 = (int*)( param_1 + 0x250 );
                           if (uVar24 != 2) goto LAB_00101fe3;
                        }

                     }
 else {
                        piVar15 = (int*)( param_1 + 0x170 );
                        if (uVar24 != 5) {
                           LAB_00101fe3:if (*(uint*)( param_1 + 0x238 ) <= local_168) {
                              local_210 = 0xa0;
                              local_24c = 0xa0;
                              iVar10 = local_24c;
                              goto LAB_001019f5;
                           }

                           piVar15 = (int*)( (ulong)local_168 * 0x150 + *(long*)( param_1 + 0x240 ) );
                        }

                     }

                     local_248 = piVar15;
                     if (*(int*)( puVar38 + 0xc ) - 9U < 2) {
                        local_210 = ( *local_1a0 )(local_228, puVar38, &local_248, 0, 0);
                     }
 else {
                        local_210 = ( *local_1a8 )();
                     }

                  }

                  pcVar17 = local_228[0];
                  iVar10 = local_210;
                  if (local_210 != 0) goto LAB_001019f5;
                  break;
               }

               uVar31 = 2;
               while (pcVar32[uVar31] == pcVar37[uVar31 - 1]) {
                  uVar31 = uVar31 + 1;
                  if (iVar10 + 1 == uVar31) goto LAB_00101954;
               }
;
            }

            pcVar37 = *(char**)( puVar38 + 0x30 );
            puVar38 = puVar38 + 0x30;
            if (pcVar37 == (char*)0x0) break;
            cVar9 = *pcVar37;
         }
 while ( true );
      }

   }

   goto LAB_001017e0;
   LAB_00101c72:do {
      if (pbVar27 <= pbVar18) {
         lVar25 = FT_Stream_Pos(lVar33);
         uVar31 = *(long*)( lVar33 + 8 ) - lVar25;
         if (uVar31 == 0) goto LAB_0010200f;
         uVar28 = 0x100;
         if (uVar31 < 0x101) {
            uVar28 = uVar31;
         }

         iVar10 = FT_Stream_Read(lVar33, local_158, uVar28);
         if (iVar10 == 0) {
            lVar29 = FT_Stream_Pos(lVar33);
            pbVar27 = local_158 + ( lVar29 - lVar25 );
            pbVar18 = local_158;
            goto LAB_00101c7b;
         }

         goto LAB_001019f5;
      }

      LAB_00101c7b:bVar2 = *pbVar18;
      if (bVar2 == 0x3e) {
         if (bVar6) {
            *pcVar30 = '\0';
            pcVar30 = pcVar30 + -(long)pcVar17;
         }
 else {
            pcVar30 = pcVar30 + ( 1 - (long)pcVar17 );
         }

         goto LAB_00101f90;
      }

      uVar24 = (uint)bVar2;
      if (0x3e < bVar2) {
         if (bVar2 < 0x47) {
            if (0x40 < bVar2) {
               iVar10 = uVar24 - 0x37;
               cVar23 = (char)iVar10;
               if (!bVar6) goto LAB_00101f66;
               LAB_00101ecd:cVar23 = (char)( iVar10 << 4 );
               bVar6 = false;
               pcVar32 = pcVar30;
               goto LAB_00101ed6;
            }

         }
 else if (( byte )(bVar2 + 0x9f) < 6) {
            iVar10 = uVar24 - 0x57;
            cVar23 = (char)iVar10;
            goto joined_r0x00101f60;
         }

         LAB_0010200f:iVar10 = 0xa0;
         goto LAB_001019f5;
      }

      if (0x39 < bVar2) goto LAB_0010200f;
      uVar31 = 1L << ( bVar2 & 0x3f );
      if (( uVar31 & 0x3ff000000000000 ) == 0) {
         if (( uVar31 & 0x100003601 ) == 0) goto LAB_0010200f;
      }
 else {
         iVar10 = uVar24 - 0x30;
         cVar23 = (char)iVar10;
         joined_r0x00101f60:if (bVar6) goto LAB_00101ecd;
         LAB_00101f66:cVar23 = cVar23 + *pcVar30;
         bVar6 = true;
         pcVar32 = pcVar30 + 1;
         LAB_00101ed6:*pcVar30 = cVar23;
         pcVar30 = pcVar32;
      }

      pbVar18 = pbVar18 + 1;
   }
 while ( pcVar30 < pcVar17 + uVar36 );
   pcVar30 = pcVar30 + -(long)pcVar17;
   LAB_00101f90:local_24c = 0;
   FT_Stream_OpenMemory(*(undefined8*)( param_1 + 0x270 ), *(undefined8*)( param_1 + 0x268 ), pcVar30);
   pbVar18 = (byte*)0x0;
   LAB_00101d1f:uVar24 = *(uint*)( param_1 + 0x22c );
   *(byte**)( param_1 + 0x248 ) = pbVar18;
   if (( ( uVar24 != 0 ) && ( *(uint*)( param_1 + 0x228 ) < 5 ) ) && ( uVar24 < 5 )) {
      lVar33 = *(long*)( param_1 + 0x270 );
      uVar36 = *(long*)( lVar33 + 8 ) - (long)pbVar18;
      if (( ( *(ulong*)( param_1 + 0x220 ) <= uVar36 ) && ( *(ulong*)( param_1 + 0x230 ) >> 0x3d == 0 ) ) && ( ( ulong )(uVar24 + *(uint*)( param_1 + 0x228 )) * *(ulong*)( param_1 + 0x230 ) <= uVar36 - *(ulong*)( param_1 + 0x220 ) )) {
         uVar31 = ( ulong ) * (uint*)( param_1 + 0x238 );
         if (*(uint*)( param_1 + 0x238 ) == 0) {
            uVar31 = 0;
         }
 else {
            lVar25 = *(long*)( param_1 + 0x240 );
            lVar29 = uVar31 * 0x150 + lVar25;
            do {
               if (1000 < *(uint*)( lVar25 + 0x78 )) {
                  *(undefined4*)( lVar25 + 0x78 ) = 7;
               }

               if (1000 < *(uint*)( lVar25 + 0x7c )) {
                  *(undefined4*)( lVar25 + 0x7c ) = 1;
               }

               uVar24 = *(uint*)( lVar25 + 0x138 );
               uVar3 = *(uint*)( lVar25 + 0x148 );
               if (uVar24 == 0) {
                  if (( 4 < uVar3 ) || ( uVar36 < *(ulong*)( lVar25 + 0x140 ) )) goto LAB_00101d40;
               }
 else if (( ( uVar3 == 0 ) || ( 4 < uVar3 ) ) || ( ( uVar36 < *(ulong*)( lVar25 + 0x140 ) || ( ( 0x3fffffff < uVar24 || ( uVar36 - *(ulong*)( lVar25 + 0x140 ) < ( ulong )(uVar24 * uVar3) ) ) ) ) )) goto LAB_00101d40;
               lVar25 = lVar25 + 0x150;
            }
 while ( lVar29 != lVar25 );
         }

         puVar20 = (ulong*)0x0;
         uVar4 = *(undefined8*)( param_1 + 0xb8 );
         lVar25 = *(long*)( param_1 + 0x100 );
         puVar19 = (uint*)ft_mem_realloc(uVar4, 0x10, 0, uVar31, 0, &local_248);
         *(uint**)( param_1 + 600 ) = puVar19;
         if (( (int)local_248 == 0 ) && ( *(int*)( param_1 + 0x238 ) != 0 )) {
            local_290 = (byte*)0x0;
            uVar24 = 0;
            do {
               lVar29 = (long)local_290 * 0x150 + *(long*)( param_1 + 0x240 );
               iVar10 = *(int*)( lVar29 + 4 );
               uVar3 = *(uint*)( lVar29 + 0x138 );
               if (uVar3 != 0) {
                  uVar1 = uVar3 + 1;
                  uVar7 = uVar24;
                  if (uVar24 < uVar1) {
                     uVar35 = uVar3 + 4 & 0xfffffffc;
                     if (uVar24 < uVar35) {
                        uVar7 = uVar3 + 4 & 0xfffffffc;
                        puVar20 = (ulong*)ft_mem_qrealloc(uVar4, 8, uVar24, uVar35, puVar20, &local_248);
                        if ((int)local_248 == 0) goto LAB_00102150;
                     }
 else {
                        local_248 = (int*)CONCAT44(local_248._4_4_, 0xa0);
                     }

                  }
 else {
                     LAB_00102150:iVar11 = FT_Stream_Seek(lVar33, *(long*)( lVar29 + 0x140 ) + *(long*)( param_1 + 0x248 ));
                     local_248 = (int*)CONCAT44(local_248._4_4_, iVar11);
                     if (iVar11 == 0) {
                        iVar11 = FT_Stream_EnterFrame(lVar33, uVar1 * *(int*)( lVar29 + 0x148 ));
                        local_248 = (int*)CONCAT44(local_248._4_4_, iVar11);
                        if (iVar11 == 0) {
                           uVar24 = *(uint*)( lVar29 + 0x148 );
                           pbVar18 = *(byte**)( lVar33 + 0x40 );
                           uVar36 = 0;
                           do {
                              puVar21 = puVar20 + uVar36;
                              if (uVar24 == 0) {
                                 uVar31 = 0;
                              }
 else {
                                 pbVar27 = pbVar18 + uVar24;
                                 uVar31 = 0;
                                 do {
                                    bVar2 = *pbVar18;
                                    pbVar18 = pbVar18 + 1;
                                    uVar31 = uVar31 << 8 | (ulong)bVar2;
                                 }
 while ( pbVar18 != pbVar27 );
                              }

                              uVar35 = (int)uVar36 + 1;
                              uVar36 = (ulong)uVar35;
                              *puVar21 = uVar31;
                           }
 while ( uVar35 <= uVar3 );
                           FT_Stream_ExitFrame(lVar33);
                           puVar21 = puVar20 + 1;
                           uVar36 = *puVar20;
                           do {
                              uVar31 = *puVar21;
                              if (uVar31 < uVar36) goto LAB_0010220b;
                              puVar21 = puVar21 + 1;
                              uVar36 = uVar31;
                           }
 while ( puVar20 + ( ulong )(uVar3 - 1) + 2 != puVar21 );
                           if (( ulong )(*(long*)( lVar33 + 8 ) - *(long*)( param_1 + 0x248 )) < puVar20[uVar3]) {
                              LAB_0010220b:local_248 = (int*)CONCAT44(local_248._4_4_, 3);
                           }
 else {
                              lVar29 = puVar20[uVar3] - *puVar20;
                              puVar16 = (undefined8*)ft_mem_qrealloc(uVar4, 8, 0, uVar1, 0, &local_248);
                              *(undefined8**)( puVar19 + 2 ) = puVar16;
                              if ((int)local_248 == 0) {
                                 uVar22 = ft_mem_qalloc(uVar4, lVar29, &local_248);
                                 *puVar16 = uVar22;
                                 if ((int)local_248 == 0) {
                                    iVar11 = FT_Stream_Seek(lVar33, *puVar20 + *(long*)( param_1 + 0x248 ));
                                    local_248 = (int*)CONCAT44(local_248._4_4_, iVar11);
                                    if (iVar11 == 0) {
                                       iVar11 = FT_Stream_Read(lVar33, **(undefined8**)( puVar19 + 2 ), lVar29);
                                       local_248 = (int*)CONCAT44(local_248._4_4_, iVar11);
                                       if (iVar11 == 0) {
                                          plVar26 = *(long**)( puVar19 + 2 );
                                          lVar29 = *plVar26;
                                          lVar12 = 0;
                                          do {
                                             lVar29 = ( lVar29 + puVar20[lVar12 + 1] ) - puVar20[lVar12];
                                             plVar26[lVar12 + 1] = lVar29;
                                             iVar11 = (int)lVar12;
                                             lVar12 = lVar12 + 1;
                                          }
 while ( iVar11 + 2U <= uVar3 );
                                          if (-1 < iVar10) {
                                             lVar29 = 0;
                                             while (true) {
                                                lVar12 = lVar29 + 1;
                                                plVar26 = plVar26 + lVar29;
                                                puVar21 = puVar20 + lVar29;
                                                lVar29 = lVar29 + 1;
                                                ( **(code**)( lVar25 + 0x20 ) )(*plVar26, puVar20[lVar12] - *puVar21, 0x10ea);
                                                if (uVar3 <= (uint)lVar29) break;
                                                plVar26 = *(long**)( puVar19 + 2 );
                                             }
;
                                          }

                                          *puVar19 = uVar3;
                                          uVar24 = uVar7;
                                          goto LAB_00102392;
                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

                  lVar33 = *(long*)( param_1 + 600 );
                  if (lVar33 != 0) {
                     lVar25 = 0;
                     if (*(int*)( param_1 + 0x238 ) != 0) {
                        do {
                           lVar29 = lVar25 * 0x10;
                           puVar16 = *(undefined8**)( lVar33 + 8 + lVar29 );
                           if (puVar16 != (undefined8*)0x0) {
                              ft_mem_free(uVar4, *puVar16);
                              **(undefined8**)( *(long*)( param_1 + 600 ) + 8 + lVar29 ) = 0;
                           }

                           lVar25 = lVar25 + 1;
                           ft_mem_free(uVar4);
                           lVar33 = *(long*)( param_1 + 600 );
                           *(undefined8*)( lVar33 + 8 + lVar29 ) = 0;
                        }
 while ( (uint)lVar25 < *(uint*)( param_1 + 0x238 ) );
                     }

                     ft_mem_free(uVar4);
                     *(undefined8*)( param_1 + 600 ) = 0;
                  }

                  break;
               }

               LAB_00102392:local_290 = (byte*)( (long)local_290 + 1 );
               puVar19 = puVar19 + 4;
            }
 while ( (uint)local_290 < *(uint*)( param_1 + 0x238 ) );
         }

         ft_mem_free(uVar4, puVar20);
         local_24c = (int)local_248;
         iVar10 = local_24c;
         goto LAB_001019f5;
      }

   }

   LAB_00101d40:local_24c = 3;
   iVar10 = local_24c;
   LAB_001019f5:local_24c = iVar10;
   if (local_190 != (char*)0x0) {
      FT_Stream_ReleaseFrame(local_198, &local_190);
   }

   ( *local_1f8 )(local_228);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_24c;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int cid_face_init(undefined8 param_1, undefined8 *param_2, int param_3) {
   undefined1 auVar1[16];
   char cVar2;
   ushort uVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   undefined8 uVar8;
   char *pcVar9;
   short sVar10;
   char *pcVar11;
   short sVar12;
   short sVar13;
   long lVar14;
   long lVar15;
   *param_2 = 1;
   if (param_2[0x20] == 0) {
      lVar14 = FT_Get_Module_Interface(*(undefined8*)( param_2[0x16] + 8 ), "psaux");
      if (lVar14 == 0) {
         return 0xb;
      }

      lVar15 = param_2[0x4c];
      param_2[0x20] = lVar14;
   }
 else {
      lVar15 = param_2[0x4c];
   }

   if (lVar15 == 0) {
      uVar8 = FT_Get_Module_Interface(*(undefined8*)( param_2[0x16] + 8 ), "pshinter");
      param_2[0x4c] = uVar8;
   }

   iVar5 = FT_Stream_Seek(param_1, 0);
   if (( ( iVar5 == 0 ) && ( iVar5 = cid_face_open(param_2, param_3) ),iVar5 == 0 )) {
      if ((short)param_3 == 0) {
         *(undefined4*)( param_2 + 9 ) = 0;
         param_2[1] = 0;
         param_2[4] = param_2[0x46];
         uVar7 = param_2[2] | 0x815;
         if (*(char*)( param_2 + 0x2d ) == '\0') {
            uVar7 = param_2[2] | 0x811;
         }

         pcVar11 = (char*)param_2[0x2a];
         param_2[2] = uVar7 | 0x1000;
         param_2[5] = pcVar11;
         param_2[6] = "Regular";
         if (pcVar11 == (char*)0x0) {
            if (param_2[0x21] != 0) {
               param_2[5] = param_2[0x21];
            }

         }
 else {
            pcVar9 = (char*)param_2[0x29];
            if (pcVar9 != (char*)0x0) {
               LAB_00102530:cVar4 = *pcVar9;
               if (cVar4 != '\0') {
                  while (cVar2 = *pcVar11,cVar2 != cVar4) {
                     if (( cVar4 == ' ' ) || ( cVar4 == '-' )) {
                        pcVar9 = pcVar9 + 1;
                        goto LAB_00102530;
                     }

                     if (( cVar2 != ' ' ) && ( cVar2 != '-' )) {
                        if (cVar2 == '\0') {
                           param_2[6] = pcVar9;
                        }

                        goto LAB_00102570;
                     }

                     cVar4 = *pcVar9;
                     pcVar11 = pcVar11 + 1;
                     if (cVar4 == '\0') goto LAB_00102570;
                  }
;
                  pcVar11 = pcVar11 + 1;
                  pcVar9 = pcVar9 + 1;
                  goto LAB_00102530;
               }

            }

         }

         LAB_00102570:pcVar11 = (char*)param_2[0x2b];
         lVar14 = param_2[0x2c];
         param_2[3] = ( ulong )(lVar14 != 0);
         if (( pcVar11 != (char*)0x0 ) && ( ( iVar5 = strcmp(pcVar11, "Bold") ),iVar5 == 0 || ( iVar5 = strcmp(pcVar11, "Black") ),iVar5 == 0 )) {
            param_2[3] = ( ulong )(lVar14 != 0) | 2;
         }

         auVar1 = *(undefined1(*) [16])( param_2 + 0x2e );
         *(undefined4*)( param_2 + 7 ) = 0;
         param_2[8] = 0;
         uVar3 = *(ushort*)( param_2 + 0x11 );
         lVar14 = param_2[0x30] + __LC14;
         lVar15 = param_2[0x31] + _UNK_00103648;
         *(int*)( param_2 + 0xd ) = auVar1._2_4_;
         *(int*)( (long)param_2 + 0x6c ) = auVar1._4_4_ >> 0x10;
         *(int*)( param_2 + 0xe ) = auVar1._10_4_;
         *(int*)( (long)param_2 + 0x74 ) = auVar1._12_4_ >> 0x10;
         *(int*)( param_2 + 0xf ) = (int)( (ulong)lVar14 >> 0x10 );
         *(int*)( (long)param_2 + 0x7c ) = (int)( lVar14 >> 0x30 );
         *(int*)( param_2 + 0x10 ) = (int)( (ulong)lVar15 >> 0x10 );
         *(int*)( (long)param_2 + 0x84 ) = (int)( lVar15 >> 0x30 );
         if (uVar3 == 0) {
            sVar13 = 0x4b0;
            *(undefined2*)( param_2 + 0x11 ) = 1000;
            iVar5 = 0x4b0;
         }
 else {
            uVar6 = ( (uint)uVar3 + (uint)uVar3 * 2 ) * 4;
            sVar13 = (short)( uVar6 / 10 );
            iVar5 = (int)(short)( uVar6 / 10 );
         }

         sVar10 = (short)( ( ulong )(param_2[0x31] + 0xffff) >> 0x10 );
         sVar12 = (short)( (ulong)param_2[0x2f] >> 0x10 );
         if (iVar5 < (int)sVar10 - (int)sVar12) {
            sVar13 = (short)( (ulong)lVar15 >> 0x10 ) - auVar1._10_2_;
         }

         *(short*)( (long)param_2 + 0x8a ) = sVar10;
         *(short*)( (long)param_2 + 0x8c ) = sVar12;
         *(undefined4*)( (long)param_2 + 0x94 ) = *(undefined4*)( (long)param_2 + 0x16a );
         *(short*)( (long)param_2 + 0x8e ) = sVar13;
         return 0;
      }

      iVar5 = 6;
   }

   return iVar5;
}

