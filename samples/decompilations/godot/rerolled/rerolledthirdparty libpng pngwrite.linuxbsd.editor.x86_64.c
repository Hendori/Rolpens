void image_memory_flush(void) {
   return;
}
void image_memory_write(long param_1, void *param_2, ulong param_3) {
   long lVar1;
   ulong uVar2;
   lVar1 = *(long*)( param_1 + 0x108 );
   uVar2 = *(ulong*)( lVar1 + 0x50 );
   if (!CARRY8(uVar2,param_3)) {
      if (param_3 != 0) {
         if (uVar2 + param_3 <= *(ulong*)( lVar1 + 0x48 )) {
            memcpy((void*)( uVar2 + *(long*)( lVar1 + 0x40 ) ), param_2, param_3);
         }

         *(ulong*)( lVar1 + 0x50 ) = uVar2 + param_3;
      }

      return;
   }

   /* WARNING: Subroutine does not return */
   png_error(param_1, "png_image_write_to_memory: PNG too big");
}
uint png_unpremultiply(uint param_1, uint param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   uVar1 = 0x7f;
   if (0x7e < param_1) {
      uVar1 = param_1;
   }

   uVar2 = 0xffffffff;
   if (( uVar1 < param_2 ) && ( uVar2 = param_1 != 0 )) {
      if (param_2 < 0xff7f) {
         param_1 = param_1 * param_3 + 0x40 >> 7;
      }
 else {
         param_1 = param_1 * 0xff;
      }

      uVar2 = ( ( param_1 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[param_1 >> 0xf] >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + ( ulong )(param_1 >> 0xf) * 2 ) >> 8 & 0xff;
   }

   return uVar2;
}
void write_unknown_chunks_part_0(long param_1, long param_2, byte param_3) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   uVar2 = ( ulong ) * (int*)( param_2 + 0x140 );
   uVar4 = *(ulong*)( param_2 + 0x138 );
   uVar5 = uVar4;
   if (uVar4 < uVar2 * 0x20 + uVar4) {
      do {
         if (( *(byte*)( uVar5 + 0x18 ) & param_3 ) != 0) {
            iVar1 = png_handle_as_unknown(param_1, uVar5);
            if (( iVar1 == 1 ) || ( ( ( ( *(byte*)( uVar5 + 3 ) & 0x20 ) == 0 && ( iVar1 != 3 ) ) && ( ( iVar1 != 0 || ( *(int*)( param_1 + 0x3c0 ) != 3 ) ) ) ) )) {
               uVar4 = *(ulong*)( param_2 + 0x138 );
               uVar2 = ( ulong ) * (uint*)( param_2 + 0x140 );
            }
 else {
               lVar3 = *(long*)( uVar5 + 0x10 );
               if (lVar3 == 0) {
                  png_warning(param_1, "Writing zero-length unknown chunk");
                  lVar3 = *(long*)( uVar5 + 0x10 );
               }

               png_write_chunk(param_1, uVar5, *(undefined8*)( uVar5 + 8 ), lVar3);
               uVar4 = *(ulong*)( param_2 + 0x138 );
               uVar2 = ( ulong ) * (uint*)( param_2 + 0x140 );
            }

         }

         uVar5 = uVar5 + 0x20;
      }
 while ( uVar5 < (long)(int)uVar2 * 0x20 + uVar4 );
   }

   return;
}
void png_write_info_before_PLTE_part_0(long param_1, undefined4 *param_2) {
   ushort uVar1;
   uint uVar2;
   png_write_sig();
   if (( ( *(byte*)( param_1 + 0x12d ) & 0x10 ) != 0 ) && ( *(int*)( param_1 + 0x3e0 ) != 0 )) {
      png_warning(param_1, "MNG features are not allowed in a PNG datastream");
      *(undefined4*)( param_1 + 0x3e0 ) = 0;
   }

   png_write_IHDR(param_1, *param_2, param_2[1], *(undefined1*)( param_2 + 9 ), *(undefined1*)( (long)param_2 + 0x25 ), *(undefined1*)( (long)param_2 + 0x26 ), *(undefined1*)( (long)param_2 + 0x27 ), *(undefined1*)( param_2 + 10 ));
   if (param_2[0x50] != 0) {
      write_unknown_chunks_part_0(param_1, param_2, 1);
   }

   uVar2 = param_2[2];
   if (( uVar2 & 2 ) != 0) {
      png_write_sBIT(param_1, param_2 + 0x2e, *(undefined1*)( (long)param_2 + 0x25 ));
      uVar2 = param_2[2];
   }

   if (( uVar2 & 0x20000 ) != 0) {
      png_write_cICP(param_1, *(undefined1*)( param_2 + 0x20 ), *(undefined1*)( (long)param_2 + 0x81 ), *(undefined1*)( (long)param_2 + 0x82 ), *(undefined1*)( (long)param_2 + 0x83 ));
   }

   uVar1 = *(ushort*)( (long)param_2 + 0x7e );
   if ((short)uVar1 < 0) goto LAB_00100295;
   if (( param_2[2] & 0x1000 ) == 0) {
      if (( param_2[2] & 0x800 ) != 0) {
         png_write_sRGB(param_1, *(undefined2*)( param_2 + 0x1f ));
         goto LAB_00100316;
      }

   }
 else {
      png_write_iCCP(param_1, *(undefined8*)( param_2 + 0x22 ), *(undefined8*)( param_2 + 0x24 ));
      LAB_00100316:uVar1 = *(ushort*)( (long)param_2 + 0x7e );
      if ((short)uVar1 < 0) goto LAB_00100295;
   }

   if (( ( uVar1 & 8 ) != 0 ) && ( ( *(byte*)( param_2 + 2 ) & 1 ) != 0 )) {
      png_write_gAMA_fixed(param_1, param_2[0xd]);
      uVar1 = *(ushort*)( (long)param_2 + 0x7e );
      if ((short)uVar1 < 0) goto LAB_00100295;
   }

   if (( ( uVar1 & 0x10 ) != 0 ) && ( ( *(byte*)( param_2 + 2 ) & 4 ) != 0 )) {
      png_write_cHRM_fixed(param_1, param_2 + 0xe);
   }

   LAB_00100295:*(uint*)( param_1 + 300 ) = *(uint*)( param_1 + 300 ) | 0x400;
   return;
}
void png_image_set_PLTE_isra_0(long *param_1, long param_2) {
   ushort *puVar1;
   char cVar2;
   ushort uVar3;
   uint uVar4;
   undefined1 uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   long lVar10;
   uint uVar11;
   long lVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   int iVar17;
   ulong uVar18;
   undefined8 *puVar19;
   int iVar20;
   ulong uVar21;
   uint uVar22;
   ulong uVar24;
   long in_FS_OFFSET;
   bool bVar25;
   int local_458;
   undefined8 local_448[95];
   char local_149;
   undefined4 local_148;
   undefined4 uStack_144;
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined4 local_138;
   undefined4 uStack_134;
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined4 local_128;
   undefined4 uStack_124;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   undefined4 local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined4 local_108;
   undefined4 uStack_104;
   undefined4 uStack_100;
   undefined4 uStack_fc;
   undefined4 local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined4 local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined4 local_d8;
   undefined4 uStack_d4;
   undefined4 uStack_d0;
   undefined4 uStack_cc;
   undefined4 local_c8;
   undefined4 uStack_c4;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined4 local_a8;
   undefined4 uStack_a4;
   undefined4 uStack_a0;
   undefined4 uStack_9c;
   undefined4 local_98;
   undefined4 uStack_94;
   undefined4 uStack_90;
   undefined4 uStack_8c;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   ulong uVar23;
   lVar12 = 0x60;
   uVar4 = *(uint*)( (long)param_1 + 0x14 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_148 = 0xffffffff;
   uStack_144 = 0xffffffff;
   uStack_140 = 0xffffffff;
   uStack_13c = 0xffffffff;
   local_138 = 0xffffffff;
   uStack_134 = 0xffffffff;
   uStack_130 = 0xffffffff;
   uStack_12c = 0xffffffff;
   uVar6 = 0x100;
   if (*(uint*)( (long)param_1 + 0x1c ) < 0x101) {
      uVar6 = *(uint*)( (long)param_1 + 0x1c );
   }

   local_128 = 0xffffffff;
   uStack_124 = 0xffffffff;
   uStack_120 = 0xffffffff;
   uStack_11c = 0xffffffff;
   uVar13 = uVar4 & 0x21;
   local_118 = 0xffffffff;
   uStack_114 = 0xffffffff;
   uStack_110 = 0xffffffff;
   uStack_10c = 0xffffffff;
   bVar25 = uVar13 == 0x21;
   local_108 = 0xffffffff;
   uStack_104 = 0xffffffff;
   uStack_100 = 0xffffffff;
   uStack_fc = 0xffffffff;
   local_f8 = 0xffffffff;
   uStack_f4 = 0xffffffff;
   uStack_f0 = 0xffffffff;
   uStack_ec = 0xffffffff;
   local_e8 = 0xffffffff;
   uStack_e4 = 0xffffffff;
   uStack_e0 = 0xffffffff;
   uStack_dc = 0xffffffff;
   uVar16 = uVar4 >> 3 & 2;
   local_d8 = 0xffffffff;
   uStack_d4 = 0xffffffff;
   uStack_d0 = 0xffffffff;
   uStack_cc = 0xffffffff;
   local_c8 = 0xffffffff;
   uStack_c4 = 0xffffffff;
   uStack_c0 = 0xffffffff;
   uStack_bc = 0xffffffff;
   local_b8 = 0xffffffff;
   uStack_b4 = 0xffffffff;
   uStack_b0 = 0xffffffff;
   uStack_ac = 0xffffffff;
   local_a8 = 0xffffffff;
   uStack_a4 = 0xffffffff;
   uStack_a0 = 0xffffffff;
   uStack_9c = 0xffffffff;
   local_98 = 0xffffffff;
   uStack_94 = 0xffffffff;
   uStack_90 = 0xffffffff;
   uStack_8c = 0xffffffff;
   local_88 = 0xffffffff;
   uStack_84 = 0xffffffff;
   uStack_80 = 0xffffffff;
   uStack_7c = 0xffffffff;
   local_78 = 0xffffffff;
   uStack_74 = 0xffffffff;
   uStack_70 = 0xffffffff;
   uStack_6c = 0xffffffff;
   local_68 = 0xffffffff;
   uStack_64 = 0xffffffff;
   uStack_60 = 0xffffffff;
   uStack_5c = 0xffffffff;
   puVar19 = local_448;
   for (; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
   }

   local_58 = 0xffffffff;
   uStack_54 = 0xffffffff;
   uStack_50 = 0xffffffff;
   uStack_4c = 0xffffffff;
   if (uVar6 == 0) {
      png_set_PLTE(*(undefined8*)*param_1, ( (undefined8*)*param_1 )[1], local_448, 0);
   }
 else {
      uVar22 = ( uVar4 & 3 ) + 1;
      uVar23 = (ulong)uVar22;
      uVar24 = (ulong)bVar25;
      uVar15 = uVar16 + bVar25;
      local_458 = 0;
      lVar12 = 0;
      if (uVar13 != 0x21) {
         lVar12 = ( ulong )(uVar4 & 3) * 2;
      }

      uVar14 = ~(uVar4 >> 3) & 2;
      uVar21 = 0;
      uVar7 = uVar14 + bVar25;
      uVar18 = 1;
      puVar19 = local_448;
      do {
         while (true) {
            iVar20 = (int)uVar21;
            iVar17 = (int)uVar18;
            uVar8 = (uint)uVar23;
            if (( uVar4 & 4 ) == 0) break;
            puVar1 = (ushort*)( param_2 + uVar21 * 2 );
            if (( uVar22 & 1 ) == 0) {
               uVar3 = *(ushort*)( (long)puVar1 + lVar12 );
               uVar11 = ( (uint)uVar3 * 0x100 - (uint)uVar3 ) + 0x807f;
               cVar2 = (char)( uVar11 >> 0x10 );
               if (( byte )(cVar2 - 1U) < 0xfe) {
                  iVar9 = (int)( ( uVar3 >> 1 ) + 0x7f7f8080 ) / (int)(uint)uVar3;
                  ( &local_149 )[uVar18] = cVar2;
                  LAB_001007d9:local_458 = iVar17;
               }
 else {
                  ( &local_149 )[uVar18] = cVar2;
                  iVar9 = 0;
                  if (uVar11 >> 0x10 != 0xff) goto LAB_001007d9;
               }

               if (uVar8 < 3) {
                  uVar5 = png_unpremultiply(puVar1[uVar24], uVar3, iVar9);
                  goto LAB_001006b9;
               }

               uVar5 = png_unpremultiply(puVar1[uVar7], uVar3, iVar9);
               *(undefined1*)( (long)puVar19 + 2 ) = uVar5;
               uVar5 = png_unpremultiply(puVar1[uVar24 + 1]);
               *(undefined1*)( (long)puVar19 + 1 ) = uVar5;
               uVar5 = png_unpremultiply(puVar1[uVar15]);
               *(undefined1*)puVar19 = uVar5;
            }
 else {
               if (uVar8 < 3) {
                  uVar8 = ( uint ) * puVar1 * 0x100 - ( uint ) * puVar1;
                  lVar10 = (long)( (int)uVar8 >> 0xf );
                  uVar5 = ( undefined1 )(( (int)( ( uVar8 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[lVar10] ) >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + lVar10 * 2 ) >> 8);
                  goto LAB_001006b9;
               }

               uVar8 = (uint)puVar1[uVar14] * 0x100 - (uint)puVar1[uVar14];
               lVar10 = (long)( (int)uVar8 >> 0xf );
               *(char*)( (long)puVar19 + 2 ) = (char)( ( (int)( ( uVar8 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[lVar10] ) >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + lVar10 * 2 ) >> 8 );
               uVar8 = (uint)puVar1[1] * 0x100 - (uint)puVar1[1];
               lVar10 = (long)( (int)uVar8 >> 0xf );
               *(char*)( (long)puVar19 + 1 ) = (char)( ( (int)( ( uVar8 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[lVar10] ) >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + lVar10 * 2 ) >> 8 );
               uVar8 = (uint)puVar1[uVar16] * 0x100 - (uint)puVar1[uVar16];
               lVar10 = (long)( (int)uVar8 >> 0xf );
               *(char*)puVar19 = (char)( ( (int)( ( uVar8 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[lVar10] ) >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + lVar10 * 2 ) >> 8 );
            }

            LAB_0010064e:uVar18 = uVar18 + 1;
            uVar21 = ( ulong )(uint)(iVar20 + (int)uVar23);
            puVar19 = (undefined8*)( (long)puVar19 + 3 );
            if (uVar6 + 1 == uVar18) goto LAB_001006d7;
         }
;
         lVar10 = uVar21 + param_2;
         if (uVar8 == 3) {
            LAB_00100767:*(undefined1*)( (long)puVar19 + 2 ) = *(undefined1*)( lVar10 + (int)uVar7 );
            *(undefined1*)( (long)puVar19 + 1 ) = *(undefined1*)( lVar10 + uVar24 + 1 );
            *(undefined1*)puVar19 = *(undefined1*)( lVar10 + (int)uVar15 );
            goto LAB_0010064e;
         }

         if (uVar8 == 4) {
            cVar2 = *(char*)( lVar10 + ( ulong )(-(uint)!bVar25 & 3) );
            ( &local_149 )[uVar18] = cVar2;
            if (cVar2 != -1) {
               local_458 = iVar17;
            }

            goto LAB_00100767;
         }

         if (( uVar8 == 2 ) && ( cVar2 = *(char*)( lVar10 + ( ulong )(uVar13 != 0x21) ) ),( &local_149 )[uVar18] = cVar2,cVar2 != -1) {
            local_458 = iVar17;
         }

         uVar5 = *(undefined1*)( lVar10 + uVar24 );
         LAB_001006b9:uVar18 = uVar18 + 1;
         *(undefined1*)( (long)puVar19 + 2 ) = uVar5;
         uVar21 = ( ulong )(uint)(iVar20 + (int)uVar23);
         *(ushort*)puVar19 = CONCAT11(uVar5, uVar5);
         puVar19 = (undefined8*)( (long)puVar19 + 3 );
      }
 while ( uVar6 + 1 != uVar18 );
      LAB_001006d7:png_set_PLTE(*(undefined8*)*param_1, ( (undefined8*)*param_1 )[1], local_448, uVar6);
      if (0 < local_458) {
         png_set_tRNS(*(undefined8*)*param_1, ( (undefined8*)*param_1 )[1], &local_148, local_458, 0);
      }

   }

   *(uint*)( (long)param_1 + 0x1c ) = uVar6;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void png_write_info_part_0(long param_1, long param_2) {
   int *piVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   ushort uVar5;
   byte *pbVar6;
   long lVar7;
   char cVar8;
   int iVar9;
   if (( ( param_1 == 0 ) || ( param_2 == 0 ) ) || ( ( *(byte*)( param_1 + 0x12d ) & 4 ) != 0 )) {
      uVar3 = *(uint*)( param_2 + 8 );
   }
 else {
      png_write_info_before_PLTE_part_0();
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 8 ) == 0) {
      if (*(char*)( param_2 + 0x25 ) == '\x03') {
         /* WARNING: Subroutine does not return */
         png_error(param_1, "Valid palette required for paletted images");
      }

   }
 else {
      png_write_PLTE(param_1, *(undefined8*)( param_2 + 0x18 ), *(undefined2*)( param_2 + 0x20 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x10 ) != 0) {
      uVar5 = *(ushort*)( param_2 + 0x22 );
      uVar3 = (uint)uVar5;
      cVar8 = *(char*)( param_2 + 0x25 );
      if (( ( *(byte*)( param_1 + 0x136 ) & 8 ) != 0 ) && ( cVar8 == '\x03' )) {
         if (0x100 < uVar5) {
            uVar3 = 0x100;
         }

         if (uVar5 == 0) {
            uVar5 = 0;
         }
 else {
            lVar4 = 0;
            do {
               pbVar6 = (byte*)( *(long*)( param_2 + 0xc0 ) + lVar4 );
               lVar4 = lVar4 + 1;
               *pbVar6 = ~*pbVar6;
            }
 while ( (int)lVar4 < (int)uVar3 );
            cVar8 = *(char*)( param_2 + 0x25 );
            uVar5 = *(ushort*)( param_2 + 0x22 );
         }

      }

      png_write_tRNS(param_1, *(undefined8*)( param_2 + 0xc0 ), param_2 + 200, uVar5, cVar8);
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x20 ) != 0) {
      png_write_bKGD(param_1, param_2 + 0xd2, *(undefined1*)( param_2 + 0x25 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x10000 ) != 0) {
      png_write_eXIf(param_1, *(undefined8*)( param_2 + 0xf8 ), *(undefined4*)( param_2 + 0xf4 ));
      uVar3 = *(uint*)( param_2 + 8 );
      *(uint*)( param_1 + 300 ) = *(uint*)( param_1 + 300 ) | 0x4000;
   }

   if (( uVar3 & 0x40 ) != 0) {
      png_write_hIST(param_1, *(undefined8*)( param_2 + 0x108 ), *(undefined2*)( param_2 + 0x20 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x100 ) != 0) {
      png_write_oFFs(param_1, *(undefined4*)( param_2 + 0xdc ), *(undefined4*)( param_2 + 0xe0 ), *(undefined1*)( param_2 + 0xe4 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x400 ) != 0) {
      png_write_pCAL(param_1, *(undefined8*)( param_2 + 0x110 ), *(undefined4*)( param_2 + 0x118 ), *(undefined4*)( param_2 + 0x11c ), *(undefined1*)( param_2 + 0x130 ), *(undefined1*)( param_2 + 0x131 ), *(undefined8*)( param_2 + 0x120 ), *(undefined8*)( param_2 + 0x128 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x4000 ) != 0) {
      png_write_sCAL_s(param_1, *(undefined1*)( param_2 + 0x154 ), *(undefined8*)( param_2 + 0x158 ), *(undefined8*)( param_2 + 0x160 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x80 ) != 0) {
      png_write_pHYs(param_1, *(undefined4*)( param_2 + 0xe8 ), *(undefined4*)( param_2 + 0xec ), *(undefined1*)( param_2 + 0xf0 ));
      uVar3 = *(uint*)( param_2 + 8 );
   }

   if (( uVar3 & 0x200 ) != 0) {
      png_write_tIME(param_1, param_2 + 0xb0);
      uVar3 = *(uint*)( param_2 + 8 );
      *(uint*)( param_1 + 300 ) = *(uint*)( param_1 + 300 ) | 0x200;
   }

   if (( ( uVar3 & 0x2000 ) != 0 ) && ( 0 < *(int*)( param_2 + 0x150 ) )) {
      lVar4 = 0;
      do {
         lVar7 = lVar4 + 1;
         png_write_sPLT(param_1, lVar4 * 0x20 + *(long*)( param_2 + 0x148 ));
         lVar4 = lVar7;
      }
 while ( (int)lVar7 < *(int*)( param_2 + 0x150 ) );
   }

   if (0 < *(int*)( param_2 + 0x9c )) {
      lVar4 = *(long*)( param_2 + 0xa8 );
      lVar7 = 0;
      iVar9 = 0;
      do {
         piVar1 = (int*)( lVar4 + lVar7 );
         iVar2 = *piVar1;
         if (iVar2 < 1) {
            if (iVar2 == 0) {
               png_write_zTXt(param_1, *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 4 ), 0);
               lVar4 = *(long*)( param_2 + 0xa8 );
               *(undefined4*)( lVar4 + lVar7 ) = 0xfffffffe;
            }
 else if (iVar2 == -1) {
               png_write_tEXt(param_1, *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 4 ));
               lVar4 = *(long*)( param_2 + 0xa8 );
               *(undefined4*)( lVar4 + lVar7 ) = 0xfffffffd;
            }

         }
 else {
            png_write_iTXt(param_1, iVar2, *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 10 ), *(undefined8*)( piVar1 + 0xc ), *(undefined8*)( piVar1 + 4 ));
            lVar4 = *(long*)( param_2 + 0xa8 );
            *(int*)( lVar4 + lVar7 ) = ( *(int*)( lVar4 + lVar7 ) != -1 ) - 3;
         }

         iVar9 = iVar9 + 1;
         lVar7 = lVar7 + 0x38;
      }
 while ( iVar9 < *(int*)( param_2 + 0x9c ) );
   }

   if (*(int*)( param_2 + 0x140 ) != 0) {
      write_unknown_chunks_part_0(param_1, param_2, 2);
      return;
   }

   return;
}
void png_write_info_before_PLTE(long param_1, long param_2) {
   if (( ( param_1 != 0 ) && ( param_2 != 0 ) ) && ( ( *(byte*)( param_1 + 0x12d ) & 4 ) == 0 )) {
      png_write_info_before_PLTE_part_0();
      return;
   }

   return;
}
void png_write_info(long param_1, long param_2) {
   if (( param_1 != 0 ) && ( param_2 != 0 )) {
      png_write_info_part_0();
      return;
   }

   return;
}
void png_write_end(long param_1, long param_2) {
   int *piVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   if (param_1 == 0) {
      return;
   }

   if (( *(byte*)( param_1 + 300 ) & 4 ) != 0) {
      if (( *(char*)( param_1 + 0x267 ) == '\x03' ) && ( (int)( uint ) * (ushort*)( param_1 + 600 ) <= *(int*)( param_1 + 0x25c ) )) {
         png_benign_error(param_1, "Wrote palette index exceeding num_palette");
      }

      if (param_2 != 0) {
         if (( ( *(byte*)( param_2 + 9 ) & 2 ) != 0 ) && ( ( *(byte*)( param_1 + 0x12d ) & 2 ) == 0 )) {
            png_write_tIME(param_1, param_2 + 0xb0);
         }

         if (0 < *(int*)( param_2 + 0x9c )) {
            lVar3 = *(long*)( param_2 + 0xa8 );
            lVar4 = 0;
            iVar5 = 0;
            do {
               piVar1 = (int*)( lVar3 + lVar4 );
               iVar2 = *piVar1;
               if (iVar2 < 1) {
                  if (iVar2 == 0) {
                     png_write_zTXt(param_1, *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 4 ), 0);
                     lVar3 = *(long*)( param_2 + 0xa8 );
                     *(undefined4*)( lVar3 + lVar4 ) = 0xfffffffe;
                  }
 else if (iVar2 == -1) {
                     png_write_tEXt(param_1, *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 4 ));
                     lVar3 = *(long*)( param_2 + 0xa8 );
                     *(undefined4*)( lVar3 + lVar4 ) = 0xfffffffd;
                  }

               }
 else {
                  png_write_iTXt(param_1, iVar2, *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 10 ), *(undefined8*)( piVar1 + 0xc ), *(undefined8*)( piVar1 + 4 ));
                  lVar3 = *(long*)( param_2 + 0xa8 );
                  *(int*)( lVar3 + lVar4 ) = ( *(int*)( lVar3 + lVar4 ) != -1 ) - 3;
               }

               iVar5 = iVar5 + 1;
               lVar4 = lVar4 + 0x38;
            }
 while ( iVar5 < *(int*)( param_2 + 0x9c ) );
         }

         if (( ( *(byte*)( param_2 + 10 ) & 1 ) != 0 ) && ( ( *(byte*)( param_1 + 0x12d ) & 0x40 ) == 0 )) {
            png_write_eXIf(param_1, *(undefined8*)( param_2 + 0xf8 ), *(undefined4*)( param_2 + 0xf4 ));
         }

         if (*(int*)( param_2 + 0x140 ) != 0) {
            write_unknown_chunks_part_0(param_1, param_2, 8);
         }

      }

      *(uint*)( param_1 + 300 ) = *(uint*)( param_1 + 300 ) | 8;
      png_write_IEND(param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   png_error(param_1, "No IDATs written into file");
}
void png_convert_from_struct_tm(short *param_1, undefined4 *param_2) {
   *param_1 = *(short*)( param_2 + 5 ) + 0x76c;
   *(uint*)( param_1 + 1 ) = CONCAT31(CONCAT21(CONCAT11(*(undefined1*)( param_2 + 1 ), *(undefined1*)( param_2 + 2 )), *(undefined1*)( param_2 + 3 )), *(char*)( param_2 + 4 ) + '\x01');
   *(char*)( param_1 + 3 ) = (char)*param_2;
   return;
}
void png_convert_from_time_t(short *param_1, time_t param_2) {
   int iVar1;
   int iVar2;
   tm *ptVar3;
   time_t local_10;
   local_10 = param_2;
   ptVar3 = gmtime(&local_10);
   if (ptVar3 == (tm*)0x0) {
      for (int i = 0; i < 4; i++) {
         param_1[i] = 0;
      }

   }
 else {
      iVar1 = ptVar3.tm_mon;
      iVar2 = ptVar3.tm_hour;
      *param_1 = (short)ptVar3.tm_year + 0x76c;
      *(uint*)( param_1 + 1 ) = CONCAT31(CONCAT21(CONCAT11((char)ptVar3.tm_min, (char)iVar2), (char)ptVar3.tm_mday), (char)iVar1 + '\x01');
      *(char*)( param_1 + 3 ) = (char)ptVar3.tm_sec;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long png_create_write_struct_2(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   lVar3 = png_create_png_struct();
   uVar2 = _UNK_001031a8;
   uVar1 = __LC7;
   if (lVar3 != 0) {
      *(uint*)( lVar3 + 0x130 ) = *(uint*)( lVar3 + 0x130 ) | 0x200000;
      *(undefined8*)( lVar3 + 0x1bc ) = uVar1;
      *(undefined8*)( lVar3 + 0x1c4 ) = uVar2;
      uVar2 = _UNK_001031b8;
      uVar1 = __LC8;
      *(undefined4*)( lVar3 + 0x1b8 ) = 0x2000;
      *(undefined8*)( lVar3 + 0x1dc ) = 8;
      *(undefined8*)( lVar3 + 0x1cc ) = uVar1;
      *(undefined8*)( lVar3 + 0x1d4 ) = uVar2;
      png_set_write_fn(lVar3, 0, 0, 0);
   }

   return lVar3;
}
void png_create_write_struct(void) {
   png_create_write_struct_2();
   return;
}
void png_write_row(long param_1, void *param_2) {
   byte bVar1;
   uint uVar2;
   ushort *puVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   long lVar7;
   long in_FS_OFFSET;
   uint local_38[2];
   size_t local_30;
   undefined4 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) goto LAB_00101201;
   if (( *(int*)( param_1 + 0x214 ) == 0 ) && ( *(char*)( param_1 + 0x265 ) == '\0' )) {
      if (( *(byte*)( param_1 + 0x12d ) & 4 ) == 0) {
         /* WARNING: Subroutine does not return */
         png_error(param_1, "png_write_info was never called before png_write_row");
      }

      png_write_start_row();
   }

   if (( *(char*)( param_1 + 0x264 ) == '\0' ) || ( ( *(byte*)( param_1 + 0x134 ) & 2 ) == 0 )) goto switchD_001010de_default;
   switch (*(undefined1*)( param_1 + 0x265 )) {
      case 0:
    bVar1 = *(byte *)(param_1 + 0x214) & 7;
    goto joined_r0x001010ef;
      case 1:
    if (((*(byte *)(param_1 + 0x214) & 7) == 0) && (4 < *(uint *)(param_1 + 0x1f8))) break;
    goto LAB_001012b8;
      case 2:
    if ((*(uint *)(param_1 + 0x214) & 7) != 4) goto LAB_001012b8;
    break;
      case 3:
    if (((*(byte *)(param_1 + 0x214) & 3) != 0) || (*(uint *)(param_1 + 0x1f8) < 3))
    goto LAB_001012b8;
    break;
      case 4:
    if ((*(uint *)(param_1 + 0x214) & 3) != 2) goto LAB_001012b8;
    break;
      case 5:
    if (((*(byte *)(param_1 + 0x214) & 1) != 0) || (*(uint *)(param_1 + 0x1f8) < 2))
    goto LAB_001012b8;
    break;
      case 6:
    bVar1 = *(byte *)(param_1 + 0x214) & 1;
joined_r0x001010ef:
    if (bVar1 != 0) break;
    goto LAB_001012b8;
   }

   switchD_001010de_default:local_38[0] = *(uint*)( param_1 + 0x204 );
   uVar2 = ( uint ) * (byte*)( param_1 + 0x26c ) * ( uint ) * (byte*)( param_1 + 0x269 );
   local_28 = ( ( ( uVar2 & 0xff ) << 8 | ( uint ) * (byte*)( param_1 + 0x26c ) ) << 8 | ( uint ) * (byte*)( param_1 + 0x269 ) ) << 8 | ( uint ) * (byte*)( param_1 + 0x267 );
   if ((byte)uVar2 < 8) {
      local_30 = ( ulong )(uVar2 & 0xff) * (ulong)local_38[0] + 7 >> 3;
   }
 else {
      local_30 = ( ulong )(byte)((byte)uVar2 >> 3) * (ulong)local_38[0];
   }

   memcpy((void*)( *(long*)( param_1 + 0x228 ) + 1 ), param_2, local_30);
   if (*(char*)( param_1 + 0x264 ) == '\0') {
      LAB_00101260:uVar2 = *(uint*)( param_1 + 0x134 );
   }
 else {
      uVar2 = *(uint*)( param_1 + 0x134 );
      if (( *(byte*)( param_1 + 0x265 ) < 6 ) && ( ( uVar2 & 2 ) != 0 )) {
         png_do_write_interlace(local_38, *(long*)( param_1 + 0x228 ) + 1);
         if (local_38[0] == 0) {
            LAB_001012b8:png_write_finish_row(param_1);
            goto LAB_00101201;
         }

         goto LAB_00101260;
      }

   }

   if (uVar2 != 0) {
      png_do_write_transformations(param_1, local_38);
   }

   if (( local_28._3_1_ != *(char*)( param_1 + 0x26a ) ) || ( local_28._3_1_ != *(char*)( param_1 + 0x26f ) )) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "internal write transform logic error");
   }

   if (( ( *(ulong*)( param_1 + 0x3e0 ) & 0xff00000004 ) == 0x4000000004 ) && ( ( local_28 & 2 ) != 0 )) {
      puVar3 = (ushort*)( *(long*)( param_1 + 0x228 ) + 1 );
      if (local_28._1_1_ != '\b') {
         if (local_28._1_1_ == '\x10') {
            if ((char)local_28 == '\x02') {
               lVar7 = 6;
            }
 else {
               lVar7 = 8;
               if ((char)local_28 != '\x06') goto LAB_001011cc;
            }

            uVar2 = 0;
            if (local_38[0] == 0) goto LAB_001011d8;
            do {
               uVar2 = uVar2 + 1;
               uVar6 = ( uint )(ushort)(puVar3[1] << 8 | puVar3[1] >> 8);
               iVar4 = ( ushort )(*puVar3 << 8 | *puVar3 >> 8) - uVar6;
               iVar5 = ( ushort )(puVar3[2] << 8 | puVar3[2] >> 8) - uVar6;
               *(char*)puVar3 = (char)( (uint)iVar4 >> 8 );
               *(char*)( (long)puVar3 + 1 ) = (char)iVar4;
               *(char*)( puVar3 + 2 ) = (char)( (uint)iVar5 >> 8 );
               *(char*)( (long)puVar3 + 5 ) = (char)iVar5;
               puVar3 = (ushort*)( (long)puVar3 + lVar7 );
            }
 while ( local_38[0] != uVar2 );
         }

         goto LAB_001011cc;
      }

      if ((char)local_28 == '\x02') {
         lVar7 = 3;
      }
 else {
         lVar7 = 4;
         if ((char)local_28 != '\x06') goto LAB_001011cc;
      }

      uVar2 = 0;
      if (local_38[0] != 0) {
         do {
            uVar2 = uVar2 + 1;
            *(char*)puVar3 = (char)*puVar3 - *(char*)( (long)puVar3 + 1 );
            *(char*)( puVar3 + 1 ) = (char)puVar3[1] - *(char*)( (long)puVar3 + 1 );
            puVar3 = (ushort*)( (long)puVar3 + lVar7 );
         }
 while ( local_38[0] != uVar2 );
         goto LAB_001011cc;
      }

   }
 else {
      LAB_001011cc:if (( (char)local_28 == '\x03' ) && ( -1 < *(int*)( param_1 + 0x25c ) )) {
         png_do_check_palette_indexes(param_1, local_38);
      }

   }

   LAB_001011d8:png_write_find_filter(param_1, local_38);
   if (*(code**)( param_1 + 0x308 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x308 ) )(param_1, *(undefined4*)( param_1 + 0x214 ), *(undefined1*)( param_1 + 0x265 ));
   }

   LAB_00101201:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void png_write_rows(long param_1, undefined8 *param_2, uint param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   if (( param_1 != 0 ) && ( param_3 != 0 )) {
      puVar1 = param_2 + param_3;
      do {
         uVar2 = *param_2;
         param_2 = param_2 + 1;
         png_write_row(param_1, uVar2);
      }
 while ( puVar1 != param_2 );
      return;
   }

   return;
}
undefined8 png_write_image_8bit(long *param_1) {
   ushort uVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined1 uVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   char cVar11;
   ulong uVar12;
   uint uVar13;
   ulong uVar14;
   long lVar15;
   ulong uVar16;
   long local_68;
   int local_48;
   puVar2 = (undefined8*)*param_1;
   uVar16 = param_1[7];
   local_68 = param_1[5];
   uVar9 = *(uint*)( (long)puVar2 + 0x14 );
   uVar3 = *(undefined8*)*puVar2;
   local_48 = *(int*)( puVar2 + 2 );
   uVar5 = -(uint)((uVar9 & 2) == 0) & 0xfffffffe;
   uVar6 = uVar5 + 3;
   if (( uVar9 & 1 ) == 0) {
      uVar12 = ( ulong )(*(int*)( (long)puVar2 + 0xc ) * uVar6);
      for (; local_48 != 0; local_48 = local_48 + -1) {
         uVar14 = 0;
         if (uVar16 < uVar16 + uVar12) {
            do {
               uVar1 = *(ushort*)( local_68 + uVar14 * 2 );
               uVar9 = (uint)uVar1 * 0x100 - (uint)uVar1;
               uVar10 = ( ulong )(uVar9 >> 0xf);
               *(char*)( uVar16 + uVar14 ) = (char)( ( ( uVar9 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[uVar10] >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + uVar10 * 2 ) >> 8 );
               uVar14 = uVar14 + 1;
            }
 while ( uVar12 != uVar14 );
         }

         png_write_row(uVar3, uVar16);
         local_68 = local_68 + ( param_1[6] & 0xfffeU );
      }

   }
 else {
      uVar13 = uVar6;
      if (( uVar9 & 0x20 ) != 0) {
         local_68 = local_68 + 2;
         uVar16 = uVar16 + 1;
         uVar13 = 0xffffffff;
      }

      uVar12 = uVar16 + ( uVar5 + 4 ) * *(int*)( (long)puVar2 + 0xc );
      if (local_48 != 0) {
         do {
            if (uVar16 < uVar12) {
               uVar14 = uVar16;
               lVar15 = local_68;
               do {
                  uVar1 = *(ushort*)( lVar15 + (long)(int)uVar13 * 2 );
                  uVar9 = (uint)uVar1;
                  iVar7 = 0;
                  cVar11 = (char)( uVar9 * 0xff + 0x807f >> 0x10 );
                  *(char*)( uVar14 + (long)(int)uVar13 ) = cVar11;
                  if (( byte )(cVar11 - 1U) < 0xfe) {
                     iVar7 = (int)( ( uVar1 >> 1 ) + 0x7f7f8080 ) / (int)uVar9;
                  }

                  uVar10 = 0;
                  do {
                     uVar1 = *(ushort*)( lVar15 + uVar10 * 2 );
                     uVar4 = 0xff;
                     uVar8 = 0x7f;
                     if (0x7e < uVar1) {
                        uVar8 = (uint)uVar1;
                     }

                     if (uVar8 < uVar9) {
                        uVar4 = 0;
                        if (uVar1 != 0) {
                           if (uVar9 < 0xff7f) {
                              uVar8 = iVar7 * (uint)uVar1 + 0x40 >> 7;
                           }
 else {
                              uVar8 = (uint)uVar1 * 0xff;
                           }

                           uVar4 = ( undefined1 )(( ( uVar8 & 0x7fff ) * ( uint )(byte)(&png_sRGB_delta)[uVar8 >> 0xf] >> 0xc ) + ( uint ) * (ushort*)( &png_sRGB_base + ( ulong )(uVar8 >> 0xf) * 2 ) >> 8);
                        }

                     }

                     *(undefined1*)( uVar14 + uVar10 ) = uVar4;
                     uVar10 = uVar10 + 1;
                  }
 while ( uVar6 != uVar10 );
                  uVar14 = uVar14 + ( ulong )(uVar5 + 2) + 2;
                  lVar15 = lVar15 + ( ulong )(uVar5 + 2) * 2 + 4;
               }
 while ( uVar14 < uVar12 );
            }

            png_write_row(uVar3, param_1[7]);
            local_68 = local_68 + ( param_1[6] & 0xfffeU );
            local_48 = local_48 + -1;
         }
 while ( local_48 != 0 );
      }

   }

   return 1;
}
undefined8 png_write_image_16bit(long *param_1) {
   long lVar1;
   ulong uVar2;
   ushort uVar3;
   uint uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   int iVar7;
   ushort uVar8;
   uint uVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   ulong uVar14;
   long lVar15;
   int iVar16;
   ulong uVar17;
   puVar5 = (undefined8*)*param_1;
   lVar15 = param_1[5];
   uVar11 = param_1[7];
   uVar4 = *(uint*)( (long)puVar5 + 0x14 );
   iVar16 = *(int*)( puVar5 + 2 );
   uVar6 = *(undefined8*)*puVar5;
   uVar9 = -(uint)((uVar4 & 2) == 0) & 0xfffffffe;
   if (( uVar4 & 1 ) != 0) {
      if (( uVar4 & 0x20 ) == 0) {
         lVar10 = (long)(int)( uVar9 + 3 );
         uVar17 = uVar11;
      }
 else {
         lVar15 = lVar15 + 2;
         uVar17 = uVar11 + 2;
         lVar10 = -1;
      }

      uVar2 = uVar17 + ( ulong )(( uVar9 + 4 ) * *(int*)( (long)puVar5 + 0xc )) * 2;
      if (iVar16 != 0) {
         while (true) {
            if (uVar17 < uVar2) {
               lVar1 = ( ulong )(uVar9 + 2) * 2 + 4;
               uVar12 = uVar17;
               lVar13 = lVar15;
               do {
                  uVar3 = *(ushort*)( lVar13 + lVar10 * 2 );
                  iVar7 = 0;
                  *(ushort*)( uVar12 + lVar10 * 2 ) = uVar3;
                  if (( ushort )(uVar3 - 1) < 0xfffe) {
                     iVar7 = (int)( ( uVar3 >> 1 ) + 0x7fff8000 ) / (int)(uint)uVar3;
                  }

                  uVar14 = 0;
                  do {
                     uVar8 = *(ushort*)( lVar13 + uVar14 * 2 );
                     if (uVar8 < uVar3) {
                        if (( uVar8 != 0 ) && ( uVar3 != 0xffff )) {
                           uVar8 = ( ushort )((uint)uVar8 * iVar7 * 2 + 0x8000 >> 0x10);
                        }

                     }
 else {
                        uVar8 = 0xffff;
                     }

                     *(ushort*)( uVar12 + uVar14 * 2 ) = uVar8;
                     uVar14 = uVar14 + 1;
                  }
 while ( uVar9 + 3 != uVar14 );
                  uVar12 = uVar12 + lVar1;
                  lVar13 = lVar13 + lVar1;
               }
 while ( uVar12 < uVar2 );
            }

            png_write_row(uVar6, uVar11);
            lVar15 = lVar15 + ( param_1[6] & 0xfffeU );
            iVar16 = iVar16 + -1;
            if (iVar16 == 0) break;
            uVar11 = param_1[7];
         }
;
      }

      return 1;
   }

   /* WARNING: Subroutine does not return */
   png_error(uVar6, "png_write_image: internal call error");
}
void png_write_image(long param_1, long param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   if (param_1 == 0) {
      return;
   }

   iVar4 = 0;
   iVar2 = png_set_interlace_handling();
   if (0 < iVar2) {
      do {
         lVar3 = 0;
         if (*(int*)( param_1 + 0x1fc ) != 0) {
            do {
               lVar1 = lVar3 * 8;
               lVar3 = lVar3 + 1;
               png_write_row(param_1, *(undefined8*)( param_2 + lVar1 ));
            }
 while ( (uint)lVar3 < *(uint*)( param_1 + 0x1fc ) );
         }

         iVar4 = iVar4 + 1;
      }
 while ( iVar2 != iVar4 );
   }

   return;
}
void png_set_flush(long param_1, int param_2) {
   if (param_1 != 0) {
      if (param_2 < 0) {
         param_2 = 0;
      }

      *(int*)( param_1 + 0x298 ) = param_2;
   }

   return;
}
void png_write_flush(long param_1) {
   if (param_1 == 0) {
      return;
   }

   if (*(uint*)( param_1 + 0x200 ) <= *(uint*)( param_1 + 0x214 )) {
      return;
   }

   png_compress_IDAT(param_1, 0, 0, 2);
   *(undefined4*)( param_1 + 0x29c ) = 0;
   png_flush(param_1);
   return;
}
void png_destroy_write_struct(long *param_1) {
   long lVar1;
   if (param_1 == (long*)0x0) {
      return;
   }

   lVar1 = *param_1;
   if (lVar1 != 0) {
      png_destroy_info_struct(lVar1);
      *param_1 = 0;
      if (( *(byte*)( lVar1 + 0x130 ) & 2 ) != 0) {
         deflateEnd(lVar1 + 0x140);
      }

      png_free_buffer_list(lVar1, lVar1 + 0x1b0);
      png_free(lVar1, *(undefined8*)( lVar1 + 0x228 ));
      *(undefined8*)( lVar1 + 0x228 ) = 0;
      png_free(lVar1, *(undefined8*)( lVar1 + 0x220 ));
      png_free(lVar1, *(undefined8*)( lVar1 + 0x230 ));
      png_free(lVar1, *(undefined8*)( lVar1 + 0x238 ));
      *(undefined8*)( lVar1 + 0x220 ) = 0;
      *(undefined1(*) [16])( lVar1 + 0x230 ) = (undefined1[16])0x0;
      png_free(lVar1, *(undefined8*)( lVar1 + 0x3c8 ));
      *(undefined8*)( lVar1 + 0x3c8 ) = 0;
      png_destroy_png_struct(lVar1);
      return;
   }

   return;
}
undefined8 png_image_write_init(undefined8 *param_1) {
   long lVar1;
   long *plVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = png_create_write_struct_2("1.6.45", param_1, &png_safe_error, &png_safe_warning, 0, 0);
   local_30 = lVar1;
   if (lVar1 != 0) {
      local_28 = png_create_info_struct(lVar1);
      if (local_28 != 0) {
         plVar2 = (long*)png_malloc_warn(lVar1, 0x30);
         if (plVar2 != (long*)0x0) {
            *param_1 = plVar2;
            *(undefined1(*) [16])( plVar2 + 4 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
            *(undefined1*)( plVar2 + 5 ) = 1;
            *plVar2 = lVar1;
            plVar2[1] = local_28;
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return 1;
            }

            goto LAB_00101bbc;
         }

         png_destroy_info_struct(lVar1, &local_28);
      }

      png_destroy_write_struct(&local_30, 0);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar3 = png_image_error(param_1, "png_image_write_: out of memory");
      return uVar3;
   }

   LAB_00101bbc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void png_set_filter(long param_1, int param_2, ulong param_3) {
   undefined1 uVar1;
   undefined8 uVar2;
   uint uVar3;
   byte bVar4;
   ulong uVar5;
   ulong uVar6;
   uint uVar7;
   if (param_1 == 0) {
      return;
   }

   uVar5 = param_3 & 0xffffffff;
   bVar4 = (byte)uVar5;
   if (( ( ( *(byte*)( param_1 + 0x3e0 ) & 4 ) == 0 ) || ( param_2 != 0x40 ) ) && ( param_2 != 0 )) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "Unknown custom filter method");
   }

   if (bVar4 < 8) {
      /* WARNING: Could not find normalized switch variable to match jumptable */
      switch (param_3 & 0xff) {
         case 1:
      uVar1 = 0x10;
      break;
         case 2:
      uVar1 = 0x20;
      break;
         case 3:
      uVar1 = 0x40;
      break;
         case 4:
      uVar1 = 0x80;
      break;
         default:
      png_app_error(param_1,"Unknown row filter for method 0");
         case 0:
      uVar1 = 8;
      }

   }
 else {
      uVar1 = (undefined1)param_3;
   }

   *(undefined1*)( param_1 + 0x266 ) = uVar1;
   if (*(long*)( param_1 + 0x228 ) != 0) {
      uVar7 = *(uint*)( param_1 + 0x1f8 );
      uVar6 = (ulong)uVar7;
      if (*(int*)( param_1 + 0x1fc ) == 1) {
         if (uVar7 == 1) {
            bVar4 = bVar4 & 0xf;
            uVar7 = 0;
         }
 else {
            bVar4 = bVar4 & 0x1f;
            uVar7 = ( uint )(param_3 >> 4) & 1;
         }

      }
 else {
         if (uVar7 == 1) {
            uVar5 = ( ulong )(bVar4 & 0x2f);
            uVar7 = 0;
         }
 else {
            uVar7 = ( uint )(param_3 >> 4) & 1;
         }

         bVar4 = (byte)uVar5;
         if (( uVar5 & 0xe0 ) != 0) {
            if (*(long*)( param_1 + 0x220 ) == 0) {
               bVar4 = bVar4 & 0x1f;
               png_app_warning(param_1, "png_set_filter: UP/AVG/PAETH cannot be added after start");
               uVar6 = ( ulong ) * (uint*)( param_1 + 0x1f8 );
            }
 else {
               uVar7 = ( ( ( uVar7 - ( ( uVar5 & 0x20 ) == 0 ) ) - ( uint )(( uVar5 & 0x40 ) == 0) ) + 3 ) - ( uint )(( uVar5 & 0x80 ) == 0);
            }

         }

      }

      uVar3 = ( uint ) * (byte*)( param_1 + 0x26c ) * ( uint ) * (byte*)( param_1 + 0x269 );
      if (uVar3 < 8) {
         uVar6 = (long)(int)uVar3 * uVar6 + 7 >> 3;
      }
 else {
         uVar6 = ( (ulong)(long)(int)uVar3 >> 3 ) * uVar6;
      }

      if (*(long*)( param_1 + 0x230 ) == 0) {
         uVar2 = png_malloc(param_1, uVar6 + 1);
         *(undefined8*)( param_1 + 0x230 ) = uVar2;
      }

      if (( 1 < (int)uVar7 ) && ( *(long*)( param_1 + 0x238 ) == 0 )) {
         uVar2 = png_malloc(param_1, uVar6 + 1);
         *(undefined8*)( param_1 + 0x238 ) = uVar2;
      }

   }

   *(byte*)( param_1 + 0x266 ) = bVar4;
   return;
}
undefined4 png_image_write_main(long *param_1) {
   uint uVar1;
   uint uVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   int iVar7;
   long lVar8;
   undefined8 uVar9;
   uint uVar10;
   ulong uVar11;
   long lVar12;
   char cVar13;
   uint uVar14;
   bool bVar15;
   uint local_48;
   uint local_40;
   plVar3 = (long*)*param_1;
   uVar1 = *(uint*)( (long)plVar3 + 0x14 );
   lVar4 = *(long*)*plVar3;
   lVar5 = ( (long*)*plVar3 )[1];
   uVar14 = uVar1 & 8;
   if (uVar14 == 0) {
      local_40 = uVar1 & 1;
      if (( uVar1 & 4 ) == 0) {
         local_48 = 0;
         bVar15 = false;
      }
 else {
         local_48 = 1;
         bVar15 = (int)param_1[4] == 0;
      }

   }
 else {
      local_48 = 0;
      local_40 = 0;
      bVar15 = false;
   }

   png_set_benign_errors(lVar4, 0);
   uVar10 = *(uint*)( (long)plVar3 + 0x14 );
   uVar11 = (ulong)uVar10;
   if (( uVar10 & 8 ) == 0) {
      uVar10 = ( uVar10 & 3 ) + 1;
      uVar6 = ( uint )(0x7fffffff / (ulong)uVar10);
      uVar11 = 0x7fffffff % (ulong)uVar10;
   }
 else {
      uVar6 = 0x7fffffff;
      uVar10 = 1;
   }

   uVar2 = *(uint*)( (long)plVar3 + 0xc );
   if (uVar6 < uVar2) {
      /* WARNING: Subroutine does not return */
      png_error(*(undefined8*)*plVar3, "image row stride too large", uVar11);
   }

   uVar10 = uVar10 * uVar2;
   uVar6 = *(uint*)( param_1 + 2 );
   if (*(uint*)( param_1 + 2 ) == 0) {
      *(uint*)( param_1 + 2 ) = uVar10;
      uVar6 = uVar10;
   }

   if ((int)uVar6 < 1) {
      uVar6 = -uVar6;
   }

   if (uVar6 < uVar10) {
      /* WARNING: Subroutine does not return */
      png_error(*(undefined8*)*plVar3, "supplied row stride too small");
   }

   uVar11 = ( ulong ) * (uint*)( plVar3 + 2 );
   if ((int)( uVar10 * uVar11 >> 0x20 ) != 0) {
      /* WARNING: Subroutine does not return */
      png_error(*(undefined8*)*plVar3, "memory image too large");
   }

   if (uVar14 == 0) {
      png_set_IHDR(lVar4, lVar5, uVar2, uVar11, ( -(uint)!bVar15 & 0xfffffff8 ) + 0x10, uVar1 * 4 & 4 | uVar1 & 2, 0, 0, 0);
   }
 else {
      if (( param_1[3] == 0 ) || ( uVar10 = uVar10 == 0 )) {
         /* WARNING: Subroutine does not return */
         png_error(*(undefined8*)*plVar3, "no color-map for color-mapped image");
      }

      cVar13 = '\b';
      if (( uVar10 < 0x11 ) && ( cVar13 = uVar10 < 5 )) {
         cVar13 = ( 2 < uVar10 ) + '\x01';
      }

      png_set_IHDR(lVar4, lVar5, uVar2, uVar11, cVar13, 3, 0, 0, 0);
      png_image_set_PLTE_isra_0(*param_1, param_1[3]);
   }

   if (bVar15) {
      png_set_gAMA_fixed(lVar4, lVar5, 100000);
      if (( *(byte*)( plVar3 + 3 ) & 1 ) == 0) {
         png_set_cHRM_fixed(lVar4, lVar5, 0x7a26, 0x8084, 64000, 33000, 30000, 60000, 15000, 6000);
      }

      if (lVar4 == 0 || lVar5 == 0) {
         png_set_swap(lVar4);
      }
 else {
         png_write_info_part_0(lVar4, lVar5);
         png_set_swap(lVar4);
      }

      LAB_00102016:if (( uVar1 & 0x10 ) == 0) goto LAB_0010209d;
      LAB_00102021:uVar10 = uVar1 & 0xffffffef;
      if (uVar14 == 0) {
         if (( uVar1 & 2 ) != 0) {
            png_set_bgr(lVar4);
         }

         if (( uVar1 & 0x20 ) == 0) goto LAB_001020fd;
         goto LAB_00102042;
      }

      if (( uVar1 & 0x20 ) != 0) {
         uVar10 = uVar1 & 0xffffffcf;
      }

   }
 else {
      if (( *(byte*)( plVar3 + 3 ) & 1 ) == 0) {
         png_set_sRGB(lVar4, lVar5, 0);
      }
 else {
         png_set_gAMA_fixed(lVar4, lVar5, 0xb18f);
      }

      if (lVar4 == 0 || lVar5 == 0) goto LAB_00102016;
      png_write_info_part_0(lVar4, lVar5);
      if (( uVar1 & 0x10 ) != 0) goto LAB_00102021;
      LAB_0010209d:uVar10 = uVar1;
      if (( uVar1 & 0x20 ) == 0) {
         if (uVar14 == 0) goto LAB_001020fd;
      }
 else {
         if (uVar14 == 0) {
            LAB_00102042:if (( uVar10 & 1 ) != 0) {
               png_set_swap_alpha(lVar4);
            }

            uVar10 = uVar10 & 0xffffffdf;
            goto LAB_001020fd;
         }

         uVar10 = uVar1 & 0xffffffdf;
      }

   }

   if (*(uint*)( (long)plVar3 + 0x1c ) < 0x11) {
      png_set_packing(lVar4);
   }

   LAB_001020fd:if (0xf < uVar10) {
      /* WARNING: Subroutine does not return */
      png_error(lVar4, "png_write_image: unsupported transformation");
   }

   lVar12 = param_1[1];
   lVar8 = (long)(int)param_1[2] * 2;
   if (local_48 == 0) {
      lVar8 = (long)(int)param_1[2];
   }

   if (lVar8 < 0) {
      lVar12 = lVar12 - ( ulong )((int)plVar3[2] - 1) * lVar8;
   }

   param_1[5] = lVar12;
   param_1[6] = lVar8;
   if (( ( *(byte*)( plVar3 + 3 ) & 2 ) != 0 ) && ( png_set_filter(lVar4, 0, 0),lVar4 != 0 )) {
      *(undefined4*)( lVar4 + 0x1bc ) = 3;
   }

   if (( ( local_40 & local_48 ) == 0 ) && ( ( uVar14 != 0 || ( (int)param_1[4] == 0 ) ) )) {
      lVar12 = param_1[6];
      lVar8 = param_1[5];
      for (iVar7 = (int)plVar3[2]; iVar7 != 0; iVar7 = iVar7 + -1) {
         png_write_row(lVar4, lVar8);
         lVar8 = lVar8 + lVar12;
      }

   }
 else {
      uVar9 = png_get_rowbytes(lVar4, lVar5);
      lVar12 = png_malloc(lVar4, uVar9);
      param_1[7] = lVar12;
      if (bVar15) {
         iVar7 = png_safe_execute(plVar3, png_write_image_16bit, param_1);
      }
 else {
         iVar7 = png_safe_execute(plVar3, png_write_image_8bit, param_1);
      }

      param_1[7] = 0;
      png_free(lVar4, lVar12);
      if (iVar7 == 0) {
         return 0;
      }

   }

   png_write_end(lVar4, lVar5);
   return 1;
}
void png_image_write_memory(undefined8 *param_1) {
   png_set_write_fn(**(undefined8**)*param_1, param_1, image_memory_write, 0x100000);
   png_image_write_main(param_1);
   return;
}
void png_set_filter_heuristics(void) {
   return;
}
void png_set_filter_heuristics_fixed(void) {
   return;
}
void png_set_compression_level(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1bc ) = param_2;
   }

   return;
}
void png_set_compression_mem_level(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1c8 ) = param_2;
   }

   return;
}
void png_set_compression_strategy(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 1;
      *(undefined4*)( param_1 + 0x1cc ) = param_2;
   }

   return;
}
void png_set_compression_window_bits(long param_1, int param_2) {
   if (param_1 == 0) {
      return;
   }

   if (param_2 < 0x10) {
      if (7 < param_2) {
         *(int*)( param_1 + 0x1c4 ) = param_2;
         return;
      }

      png_warning(param_1, "Only compression windows >= 256 supported by PNG");
      *(undefined4*)( param_1 + 0x1c4 ) = 8;
      return;
   }

   png_warning(param_1, "Only compression windows <= 32k supported by PNG");
   *(undefined4*)( param_1 + 0x1c4 ) = 0xf;
   return;
}
void png_set_compression_method(long param_1, int param_2) {
   if (param_1 == 0) {
      return;
   }

   if (param_2 == 8) {
      *(undefined4*)( param_1 + 0x1c0 ) = 8;
      return;
   }

   png_warning(param_1, "Only compression method 8 is supported by PNG");
   *(int*)( param_1 + 0x1c0 ) = param_2;
   return;
}
void png_set_text_compression_level(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1d0 ) = param_2;
   }

   return;
}
void png_set_text_compression_mem_level(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1dc ) = param_2;
   }

   return;
}
void png_set_text_compression_strategy(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1e0 ) = param_2;
   }

   return;
}
void png_set_text_compression_window_bits(long param_1, int param_2) {
   if (param_1 == 0) {
      return;
   }

   if (param_2 < 0x10) {
      if (7 < param_2) {
         *(int*)( param_1 + 0x1d8 ) = param_2;
         return;
      }

      png_warning(param_1, "Only compression windows >= 256 supported by PNG");
      *(undefined4*)( param_1 + 0x1d8 ) = 8;
      return;
   }

   png_warning(param_1, "Only compression windows <= 32k supported by PNG");
   *(undefined4*)( param_1 + 0x1d8 ) = 0xf;
   return;
}
void png_set_text_compression_method(long param_1, int param_2) {
   if (param_1 == 0) {
      return;
   }

   if (param_2 == 8) {
      *(undefined4*)( param_1 + 0x1d4 ) = 8;
      return;
   }

   png_warning(param_1, "Only compression method 8 is supported by PNG");
   *(int*)( param_1 + 0x1d4 ) = param_2;
   return;
}
void png_set_write_status_fn(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x308 ) = param_2;
   }

   return;
}
void png_set_write_user_transform_fn(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) | 0x100000;
      *(undefined8*)( param_1 + 0x118 ) = param_2;
   }

   return;
}
void png_write_png(long param_1, long param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   if (param_1 == 0) {
      return;
   }

   if (param_2 != 0) {
      if (( *(byte*)( param_2 + 9 ) & 0x80 ) != 0) {
         png_write_info_part_0();
         if (( param_3 & 0x20 ) != 0) {
            png_set_invert_mono(param_1);
         }

         if (( ( param_3 & 0x40 ) != 0 ) && ( ( *(byte*)( param_2 + 8 ) & 2 ) != 0 )) {
            png_set_shift(param_1, param_2 + 0xb8);
         }

         if (( param_3 & 4 ) != 0) {
            png_set_packing(param_1);
         }

         if (( param_3 & 0x100 ) != 0) {
            png_set_swap_alpha(param_1);
         }

         if (( param_3 & 0x1800 ) != 0) {
            if (( param_3 & 0x1000 ) == 0) {
               if (( param_3 & 0x800 ) != 0) {
                  png_set_filler(param_1, 0, 0);
               }

            }
 else {
               if (( param_3 & 0x800 ) != 0) {
                  png_app_error(param_1, "PNG_TRANSFORM_STRIP_FILLER: BEFORE+AFTER not supported");
               }

               png_set_filler(param_1, 0, 1);
            }

         }

         if (( param_3 & 0x80 ) != 0) {
            png_set_bgr(param_1);
         }

         if (( param_3 & 0x200 ) != 0) {
            png_set_swap(param_1);
         }

         if (( param_3 & 8 ) != 0) {
            png_set_packswap(param_1);
         }

         if (( param_3 & 0x400 ) != 0) {
            png_set_invert_alpha(param_1);
         }

         lVar2 = *(long*)( param_2 + 0x168 );
         iVar5 = 0;
         iVar3 = png_set_interlace_handling(param_1);
         if (0 < iVar3) {
            do {
               lVar4 = 0;
               if (*(int*)( param_1 + 0x1fc ) != 0) {
                  do {
                     lVar1 = lVar4 * 8;
                     lVar4 = lVar4 + 1;
                     png_write_row(param_1, *(undefined8*)( lVar2 + lVar1 ));
                  }
 while ( (uint)lVar4 < *(uint*)( param_1 + 0x1fc ) );
               }

               iVar5 = iVar5 + 1;
            }
 while ( iVar3 != iVar5 );
         }

         png_write_end(param_1, param_2);
         return;
      }

      png_app_error(param_1, "no rows for png_write_image to write");
      return;
   }

   return;
}
ulong png_image_write_to_memory(long param_1, long param_2, ulong *param_3, undefined4 param_4, long param_5, undefined4 param_6, undefined8 param_7) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   undefined4 local_88;
   undefined1 local_84[16];
   undefined1 local_74[16];
   undefined1 local_64[12];
   undefined4 uStack_58;
   undefined4 uStack_54;
   ulong uStack_50;
   undefined4 uStack_48;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_00102848:uVar3 = 0;
   }
 else {
      if (*(int*)( param_1 + 8 ) != 1) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            pcVar4 = "png_image_write_to_memory: incorrect PNG_IMAGE_VERSION";
            LAB_0010288b:uVar3 = png_image_error(param_1, pcVar4);
            return uVar3;
         }

         goto LAB_0010296d;
      }

      if (( param_3 == (ulong*)0x0 ) || ( param_5 == 0 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            pcVar4 = "png_image_write_to_memory: invalid argument";
            goto LAB_0010288b;
         }

         goto LAB_0010296d;
      }

      if (param_2 == 0) {
         *param_3 = 0;
      }

      iVar1 = png_image_write_init(param_1);
      if (iVar1 == 0) goto LAB_00102848;
      uStack_50 = *param_3;
      uStack_48 = 0;
      local_64 = SUB1612((undefined1[16])0x0, 0);
      local_74 = (undefined1[16])0x0;
      local_44 = 0;
      local_84._8_4_ = param_4;
      local_84._0_8_ = param_7;
      local_84._12_4_ = 0;
      local_84 = local_84 << 0x20;
      uStack_58 = (undefined4)param_2;
      uStack_54 = ( undefined4 )((ulong)param_2 >> 0x20);
      local_98 = param_1;
      local_90 = param_5;
      local_88 = param_6;
      uVar2 = png_safe_execute(param_1, png_image_write_memory, &local_98);
      png_image_free(param_1);
      uVar3 = (ulong)uVar2;
      if (uVar2 != 0) {
         if (( param_2 != 0 ) && ( *param_3 < CONCAT44(local_44, uStack_48) )) {
            uVar3 = 0;
         }

         *param_3 = CONCAT44(local_44, uStack_48);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   LAB_0010296d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
ulong png_image_write_to_stdio(undefined8 *param_1, long param_2, undefined4 param_3, long param_4, undefined4 param_5, undefined8 param_6) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   undefined8 *local_98;
   long local_90;
   undefined4 local_88;
   undefined1 local_84[16];
   undefined1 local_74[16];
   undefined1 local_64[16];
   undefined1 local_54[16];
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (undefined8*)0x0) {
      LAB_001029da:uVar3 = 0;
   }
 else {
      if (*(int*)( param_1 + 1 ) != 1) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            pcVar4 = "png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION";
            LAB_00102a1b:uVar3 = png_image_error(param_1, pcVar4);
            return uVar3;
         }

         goto LAB_00102acc;
      }

      if (( param_2 == 0 ) || ( param_4 == 0 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            pcVar4 = "png_image_write_to_stdio: invalid argument";
            goto LAB_00102a1b;
         }

         goto LAB_00102acc;
      }

      iVar1 = png_image_write_init();
      if (iVar1 == 0) goto LAB_001029da;
      local_74 = (undefined1[16])0x0;
      *(long*)( *(long*)*param_1 + 0x108 ) = param_2;
      local_64 = (undefined1[16])0x0;
      local_54 = (undefined1[16])0x0;
      local_44 = 0;
      local_84._8_4_ = param_3;
      local_84._0_8_ = param_6;
      local_84._12_4_ = 0;
      local_84 = local_84 << 0x20;
      local_98 = param_1;
      local_90 = param_4;
      local_88 = param_5;
      uVar2 = png_safe_execute(param_1, png_image_write_main, &local_98);
      png_image_free(param_1);
      uVar3 = (ulong)uVar2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   LAB_00102acc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 png_image_write_to_file(long param_1, char *param_2, undefined4 param_3, long param_4, undefined4 param_5, undefined8 param_6) {
   int iVar1;
   FILE *__stream;
   undefined8 uVar2;
   char *pcVar3;
   int *piVar4;
   if (param_1 == 0) {
      return 0;
   }

   if (*(int*)( param_1 + 8 ) == 1) {
      if (( param_2 == (char*)0x0 ) || ( param_4 == 0 )) {
         pcVar3 = "png_image_write_to_file: invalid argument";
      }
 else {
         __stream = fopen64(param_2, "wb");
         if (__stream == (FILE*)0x0) {
            piVar4 = __errno_location();
            pcVar3 = strerror(*piVar4);
         }
 else {
            iVar1 = png_image_write_to_stdio(param_1, __stream, param_3, param_4, param_5, param_6);
            if (iVar1 == 0) {
               fclose(__stream);
               remove(param_2);
               return 0;
            }

            iVar1 = fflush(__stream);
            if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
               iVar1 = fclose(__stream);
               if (iVar1 == 0) {
                  return 1;
               }

               piVar4 = __errno_location();
               iVar1 = *piVar4;
            }
 else {
               piVar4 = __errno_location();
               iVar1 = *piVar4;
               fclose(__stream);
            }

            remove(param_2);
            pcVar3 = strerror(iVar1);
         }

      }

   }
 else {
      pcVar3 = "png_image_write_to_file: incorrect PNG_IMAGE_VERSION";
   }

   uVar2 = png_image_error(param_1, pcVar3);
   return uVar2;
}

