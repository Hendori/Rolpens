/* OT::cff1::lookup_standard_encoding_for_code(unsigned int) */undefined1 OT::cff1::lookup_standard_encoding_for_code(uint param_1) {
   undefined1 uVar1;
   uVar1 = 0;
   if (param_1 < 0x96) {
      uVar1 = standard_encoding_to_code[param_1];
   }

   return uVar1;
}
/* OT::cff1::lookup_expert_encoding_for_code(unsigned int) */undefined1 OT::cff1::lookup_expert_encoding_for_code(uint param_1) {
   undefined1 uVar1;
   uVar1 = 0;
   if (param_1 < 0x17b) {
      uVar1 = expert_encoding_to_code[param_1];
   }

   return uVar1;
}
/* OT::cff1::lookup_expert_charset_for_sid(unsigned int) */undefined2 OT::cff1::lookup_expert_charset_for_sid(uint param_1) {
   undefined2 uVar1;
   uVar1 = 0;
   if (param_1 < 0xa6) {
      uVar1 = *(undefined2*)( expert_charset_to_sid + (ulong)param_1 * 2 );
   }

   return uVar1;
}
/* OT::cff1::lookup_expert_subset_charset_for_sid(unsigned int) */undefined2 OT::cff1::lookup_expert_subset_charset_for_sid(uint param_1) {
   undefined2 uVar1;
   uVar1 = 0;
   if (param_1 < 0x57) {
      uVar1 = *(undefined2*)( expert_subset_charset_to_sid + (ulong)param_1 * 2 );
   }

   return uVar1;
}
/* OT::cff1::lookup_expert_charset_for_glyph(unsigned int) */undefined1 OT::cff1::lookup_expert_charset_for_glyph(uint param_1) {
   uint uVar1;
   int iVar2;
   int iVar3;
   iVar2 = 0xa4;
   iVar3 = 0;
   do {
      while (true) {
         uVar1 = ( uint )(iVar3 + iVar2) >> 1;
         if ((ushort)param_1 == *(ushort*)( expert_charset_sid_to_gid + (ulong)uVar1 * 4 )) {
            return expert_charset_sid_to_gid[(ulong)uVar1 * 4 + 2];
         }

         if (*(ushort*)( expert_charset_sid_to_gid + (ulong)uVar1 * 4 ) <= (ushort)param_1) break;
         iVar2 = uVar1 - 1;
         if (iVar2 < iVar3) {
            return 0;
         }

      }
;
      iVar3 = uVar1 + 1;
   }
 while ( iVar3 <= iVar2 );
   return 0;
}
/* OT::cff1::lookup_expert_subset_charset_for_glyph(unsigned int) */undefined1 OT::cff1::lookup_expert_subset_charset_for_glyph(uint param_1) {
   uint uVar1;
   int iVar2;
   int iVar3;
   iVar2 = 0x55;
   iVar3 = 0;
   do {
      while (true) {
         uVar1 = ( uint )(iVar3 + iVar2) >> 1;
         if ((ushort)param_1 == *(ushort*)( expert_subset_charset_sid_to_gid + (ulong)uVar1 * 4 )) {
            return expert_subset_charset_sid_to_gid[(ulong)uVar1 * 4 + 2];
         }

         if (*(ushort*)( expert_subset_charset_sid_to_gid + (ulong)uVar1 * 4 ) <= (ushort)param_1) break;
         iVar2 = uVar1 - 1;
         if (iVar2 < iVar3) {
            return 0;
         }

      }
;
      iVar3 = uVar1 + 1;
   }
 while ( iVar3 <= iVar2 );
   return 0;
}
/* OT::cff1::lookup_standard_encoding_for_sid(unsigned int) */ulong OT::cff1::lookup_standard_encoding_for_sid(uint param_1) {
   ulong uVar1;
   uVar1 = 0xffffffff;
   if (param_1 < 0x100) {
      uVar1 = ( ulong )(byte)(&standard_encoding_to_sid)[param_1];
   }

   return uVar1;
}
/* OT::cff1::accelerator_t::paint_glyph(hb_font_t*, unsigned int, hb_paint_funcs_t*, void*, unsigned
   int) const */undefined8 OT::cff1::accelerator_t::paint_glyph(accelerator_t *this, hb_font_t *param_1, uint param_2, hb_paint_funcs_t *param_3, void *param_4, uint param_5) {
   undefined4 in_register_00000014;
   long lVar1;
   lVar1 = *(long*)( param_3 + 0x80 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x18 );
   }

   ( **(code**)( param_3 + 0x28 ) )(param_3, param_4, CONCAT44(in_register_00000014, param_2), param_1, lVar1);
   lVar1 = *(long*)( param_3 + 0x80 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x30 );
   }

   ( **(code**)( param_3 + 0x40 ) )(param_3, param_4, 1, param_5, lVar1);
   lVar1 = *(long*)( param_3 + 0x80 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x28 );
   }

   ( **(code**)( param_3 + 0x38 ) )(param_3, param_4, lVar1);
   return 1;
}
/* WARNING: Switch with 1 destination removed at 0x00100911 : 4 cases all go to same destination *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1::accelerator_subset_t::get_seac_components(unsigned int, unsigned int*, unsigned int*)
   const */char OT::cff1::accelerator_subset_t::get_seac_components(accelerator_subset_t *this, uint param_1, uint *param_2, uint *param_3) {
   char *pcVar1;
   undefined1 auVar2[12];
   undefined4 uVar3;
   uint uVar4;
   CFFIndex<OT::IntType<unsigned_short,2u>> *this_00;
   CFFIndex<OT::IntType<unsigned_short,2u>> *this_01;
   char cVar5;
   undefined *puVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   ulong uVar9;
   undefined1(*pauVar10)[12];
   uint uVar11;
   long lVar12;
   ulong uVar13;
   ushort uVar14;
   uint uVar15;
   ushort *puVar16;
   double *pdVar17;
   ushort uVar18;
   uint uVar19;
   ulong uVar20;
   int iVar21;
   uint uVar22;
   uint uVar23;
   char *pcVar24;
   uint *puVar25;
   int iVar26;
   long in_FS_OFFSET;
   bool bVar27;
   byte bVar28;
   undefined1 auVar29[16];
   ulong local_11c8;
   undefined8 uStack_11c0;
   undefined8 local_11b8;
   double local_11b0[513];
   undefined1 local_1a8[12];
   uint uStack_19c;
   undefined4 uStack_198;
   uint uStack_194;
   char local_190;
   undefined2 local_18f;
   undefined8 local_18c;
   uint local_184;
   char local_180;
   uint local_17c;
   ulong local_178[30];
   int local_88[2];
   CFFIndex<OT::IntType<unsigned_short,2u>> *local_80;
   int local_78;
   CFFIndex<OT::IntType<unsigned_short,2u>> *local_70;
   undefined1 local_68[16];
   undefined2 local_58;
   undefined4 local_54;
   double local_50;
   undefined1 local_48;
   long local_40;
   auVar2._8_4_ = local_1a8._8_4_;
   auVar2._0_8_ = local_1a8._0_8_;
   bVar28 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x40 ) != 0 ) && ( local_1a8 = auVar2 ),param_1 < *(uint*)( this + 0x128 )) {
      pcVar1 = *(char**)( this + 0x88 );
      if (pcVar1 != &_hb_NullPool) {
         if (*pcVar1 == '\0') {
            uVar13 = (ulong)(byte)pcVar1[(ulong)param_1 + 1];
            goto LAB_001002f0;
         }

         if (*pcVar1 == '\x03') {
            pcVar24 = &_hb_NullPool;
            if (*(short*)( pcVar1 + 1 ) != 0) {
               pcVar24 = pcVar1 + 3;
            }

            iVar21 = ( ushort )(*(ushort*)( pcVar1 + 1 ) << 8 | *(ushort*)( pcVar1 + 1 ) >> 8) - 2;
            if (-1 < iVar21) {
               iVar26 = 0;
               do {
                  while (true) {
                     uVar11 = ( uint )(iVar26 + iVar21) >> 1;
                     puVar16 = (ushort*)( pcVar24 + (ulong)uVar11 * 3 );
                     if (( ushort )(*puVar16 << 8 | *puVar16 >> 8) <= param_1) break;
                     iVar21 = uVar11 - 1;
                     if (iVar21 < iVar26) goto LAB_001002a5;
                  }
;
                  if (param_1 < ( ushort )(*(ushort*)( (long)puVar16 + 3 ) << 8 | *(ushort*)( (long)puVar16 + 3 ) >> 8)) goto LAB_001002d8;
                  iVar26 = uVar11 + 1;
               }
 while ( iVar26 <= iVar21 );
            }

            LAB_001002a5:puVar16 = (ushort*)&_hb_NullPool;
            uVar11 = ( ushort )(*(ushort*)( pcVar1 + 1 ) << 8 | *(ushort*)( pcVar1 + 1 ) >> 8) - 1;
            if (uVar11 < ( ushort )(*(ushort*)( pcVar1 + 1 ) << 8 | *(ushort*)( pcVar1 + 1 ) >> 8)) {
               puVar16 = (ushort*)( pcVar1 + (ulong)uVar11 * 3 + 3 );
            }

            LAB_001002d8:uVar13 = (ulong)(byte)puVar16[1];
            goto LAB_001002f0;
         }

      }

      uVar13 = 0;
      LAB_001002f0:auVar29 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](*(CFFIndex<OT::IntType<unsigned_short,2u>>**)( this + 0x78 ), param_1);
      local_11c8 = auVar29._0_8_;
      puVar6 = &_hb_NullPool;
      if ((uint)uVar13 < *(uint*)( this + 0x11c )) {
         puVar6 = (undefined*)( *(long*)( this + 0x120 ) + uVar13 * 0x28 );
      }

      local_70 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( puVar6 + 0x20 );
      local_80 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( this + 0x70 );
      local_11b8 = 0;
      pdVar17 = local_11b0;
      for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
         *pdVar17 = 0.0;
         pdVar17 = pdVar17 + (ulong)bVar28 * -2 + 1;
      }

      uStack_11c0 = auVar29._8_8_ & 0xffffffff;
      local_180 = '\0';
      local_17c = 0;
      pauVar7 = (undefined1(*) [16])local_178;
      do {
         pauVar8 = pauVar7 + 3;
         *pauVar7 = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar7[1] + 8 ) = (undefined1[16])0x0;
         pauVar7 = pauVar8;
      }
 while ( pauVar8 != (undefined1(*) [16])local_88 );
      local_88[0] = 0x6b;
      local_1a8 = auVar29._0_12_;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      local_18f = 1;
      local_18c = 0;
      local_184 = 0;
      local_68 = (undefined1[16])0x0;
      if (( local_80 != (CFFIndex<OT::IntType<unsigned_short,2u>>*)0x0 ) && ( uVar14 = *(ushort*)local_80 << 8 | *(ushort*)local_80 >> 8 ),0x4d7 < uVar14) {
         local_88[0] = ( -(uint)(uVar14 < 0x846c) & 0xffff846b ) + 0x8000;
      }

      local_78 = 0x6b;
      if (( local_70 != (CFFIndex<OT::IntType<unsigned_short,2u>>*)0x0 ) && ( uVar14 = *(ushort*)local_70 << 8 | *(ushort*)local_70 >> 8 ),0x4d7 < uVar14) {
         local_78 = ( -(uint)(uVar14 < 0x846c) & 0xffff846b ) + 0x8000;
      }

      uVar13 = 0;
      uVar11 = 0;
      local_58 = 0;
      iVar21 = 200000;
      local_50 = 0.0;
      local_54 = 0;
      local_48 = 0;
      local_190 = '\0';
      LAB_001004a5:this_01 = local_70;
      this_00 = local_80;
      uVar9 = uStack_11c0;
      uVar19 = uStack_11c0._4_4_;
      uVar23 = (uint)uStack_11c0;
      uVar15 = uStack_11c0._4_4_ + 1;
      if ((uint)uStack_11c0 < uVar15) {
         LAB_001006e0:uVar22 = 0xffff;
         switchD_00100649_caseD_2:CFF::opset_t<CFF::number_t>::process_op(uVar22, (interp_env_t*)&local_11c8);
         goto LAB_00100549;
      }

      uVar20 = (ulong)uStack_11c0._4_4_;
      uStack_11c0 = CONCAT44(uVar15, (uint)uStack_11c0);
      bVar28 = *(byte*)( local_11c8 + uVar20 );
      uVar22 = (uint)bVar28;
      uVar3 = (undefined4)local_11b8;
      if (bVar28 != 0xc) {
         uVar4 = local_11b8._4_4_;
         if (bVar28 == 0xe) {
            if ((char)local_58 == '\0') {
               if (( local_11b8._4_4_ != 0 ) && ( ( local_11b8 & 0x100000000 ) != 0 )) {
                  local_58 = 0x100;
                  local_54 = 1;
                  local_50 = local_11b0[0];
               }

               local_58 = CONCAT11(local_58._1_1_, 1);
            }

            if (3 < local_11b8._4_4_) {
               uVar15 = (uint)local_11b0[local_11b8._4_4_ - 2];
               uVar19 = (uint)local_11b0[local_11b8._4_4_ - 1];
               if (0xff < uVar15) {
                  LAB_001007f8:uVar11 = 0;
                  goto LAB_001007fb;
               }

               bVar28 = ( &standard_encoding_to_sid )[uVar15];
               uVar11 = (uint)bVar28;
               pcVar1 = *(char**)( this + 0x50 );
               if (pcVar1 != &_hb_NullPool) {
                  cVar5 = *pcVar1;
                  uVar15 = *(uint*)( this + 0x128 );
                  if (cVar5 == '\x01') {
                     if (( bVar28 != 0 ) && ( 1 < uVar15 )) {
                        uVar13 = 0;
                        uVar23 = 1;
                        do {
                           uVar14 = *(ushort*)( pcVar1 + uVar13 * 3 + 1 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 3 + 1 ) >> 8;
                           if (( uVar14 <= uVar11 ) && ( uVar11 <= (uint)uVar14 + (uint)(byte)pcVar1[uVar13 * 3 + 3] )) {
                              uVar13 = ( ulong )(( uVar23 + uVar11 ) - (uint)uVar14);
                              goto LAB_0010079a;
                           }

                           uVar23 = uVar23 + 1 + (uint)(byte)pcVar1[uVar13 * 3 + 3];
                           uVar13 = ( ulong )((int)uVar13 + 1);
                        }
 while ( uVar23 < uVar15 );
                     }

                  }
 else if (cVar5 == '\x02') {
                     if (( bVar28 != 0 ) && ( 1 < uVar15 )) {
                        uVar13 = 0;
                        uVar23 = 1;
                        do {
                           uVar14 = *(ushort*)( pcVar1 + uVar13 * 4 + 1 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 4 + 1 ) >> 8;
                           uVar18 = *(ushort*)( pcVar1 + uVar13 * 4 + 3 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 4 + 3 ) >> 8;
                           if (( uVar14 <= uVar11 ) && ( uVar11 <= (uint)uVar14 + (uint)uVar18 )) {
                              uVar11 = ( uVar23 + uVar11 ) - (uint)uVar14;
                              goto LAB_001007fb;
                           }

                           uVar23 = uVar23 + 1 + (uint)uVar18;
                           uVar13 = ( ulong )((int)uVar13 + 1);
                        }
 while ( uVar23 < uVar15 );
                     }

                  }
 else if (( ( cVar5 == '\0' ) && ( bVar28 != 0 ) ) && ( 1 < uVar15 )) {
                     uVar13 = 1;
                     do {
                        if (uVar11 == ( ushort )(*(ushort*)( pcVar1 + uVar13 * 2 + -1 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 2 + -1 ) >> 8)) goto LAB_0010079a;
                        uVar13 = uVar13 + 1;
                     }
 while ( uVar13 != uVar15 );
                  }

                  goto LAB_001007f8;
               }

               bVar27 = *(int*)( this + 0xf4 ) == 0;
               if (( 0xe4 < uVar15 ) || ( !bVar27 )) {
                  uVar11 = 0;
               }

               if (uVar19 < 0x100) {
                  bVar28 = ( &standard_encoding_to_sid )[uVar19];
                  goto LAB_001008aa;
               }

               goto LAB_001008c0;
            }

            goto LAB_00100526;
         }

         if (0x1f < bVar28) {
            if (0x26 < bVar28 - 0xff) goto switchD_00100649_caseD_2;
            uVar19 = uVar19 + 5;
            if (uVar19 <= (uint)uStack_11c0) {
               puVar25 = (uint*)( local_11c8 + uVar15 );
               if ((uint)uStack_11c0 <= uVar15) {
                  puVar25 = (uint*)&_hb_NullPool;
                  uStack_11c0 = uVar9 & 0xffffffff;
                  uVar19 = uVar23 + 5;
               }

               uVar15 = *puVar25;
               if (uVar4 < 0x201) {
                  pdVar17 = local_11b0 + uVar4;
                  local_11b8 = CONCAT44(uVar4 + 1, uVar3);
               }
 else {
                  __hb_CrapPool = __hb_NullPool;
                  local_11b8 = CONCAT71(local_11b8._1_7_, 1);
                  pdVar17 = (double*)&_hb_CrapPool;
               }

               *pdVar17 = (double)(int)( uVar15 >> 0x18 | ( uVar15 & 0xff0000 ) >> 8 | ( uVar15 & 0xff00 ) << 8 | uVar15 << 0x18 ) * __LC7;
               uStack_11c0 = CONCAT44(uVar19, (uint)uStack_11c0);
            }

            goto LAB_00100549;
         }

         switch (bVar28) {
            case 1:
            case 0x12:
        if ((char)local_58 == '\0') {
          if ((uVar4 != 0) && ((local_11b8 & 0x100000000) != 0)) {
            local_58 = 0x100;
            local_50 = local_11b0[0];
          }
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_11b8 = local_11b8 & 0xffffffff;
        local_18c = CONCAT44(local_18c._4_4_,(int)local_18c + (uVar4 >> 1));
        local_54 = 0;
        break;
            default:
        goto switchD_00100649_caseD_2;
            case 3:
            case 0x17:
        if ((char)local_58 == '\0') {
          if ((uVar4 != 0) && ((local_11b8 & 0x100000000) != 0)) {
            local_58 = 0x100;
            local_50 = local_11b0[0];
          }
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_11b8 = local_11b8 & 0xffffffff;
        local_18c = CONCAT44(local_18c._4_4_ + (uVar4 >> 1),(int)local_18c);
        local_54 = 0;
        break;
            case 4:
            case 0x16:
        if ((char)local_58 == '\0') {
          if (1 < uVar4) {
LAB_00100e18:
            local_58 = 0x100;
            local_50 = local_11b0[0];
          }
LAB_00100661:
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        goto LAB_00100669;
            case 5:
            case 6:
            case 7:
            case 8:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1e:
            case 0x1f:
        goto switchD_00100649_caseD_5;
            case 10:
        if (uVar4 == 0) {
          __hb_CrapPool = __hb_NullPool;
          local_11b8 = CONCAT71(local_11b8._1_7_,1);
          pdVar17 = (double *)&_hb_CrapPool;
        }
        else {
          local_11b8 = CONCAT44(uVar4 - 1,uVar3);
          pdVar17 = local_11b0 + (uVar4 - 1);
        }
        uVar19 = (int)*pdVar17 + local_78;
        if (((((int)uVar19 < 0) || (local_70 == (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0)) ||
            ((ushort)(*(ushort *)local_70 << 8 | *(ushort *)local_70 >> 8) <= uVar19)) ||
           (uVar9 = (ulong)local_17c, 9 < local_17c)) {
LAB_00100ed1:
          uStack_11c0 = CONCAT44((uint)uStack_11c0 + 1,(uint)uStack_11c0);
        }
        else {
          local_17c = local_17c + 1;
          local_1a8._0_8_ = local_11c8;
          local_1a8._8_4_ = (uint)uStack_11c0;
          local_178[uVar9 * 3 + 2] = CONCAT44(uStack_194,uStack_198);
          local_178[uVar9 * 3] = local_11c8;
          local_178[uVar9 * 3 + 1] = uStack_11c0;
          if (this_01 == (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0) {
            local_1a8 = ZEXT812(0);
          }
          else if (uVar19 < (ushort)(*(ushort *)this_01 << 8 | *(ushort *)this_01 >> 8)) {
            uStack_19c = uVar15;
            local_1a8 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](this_01,uVar19);
          }
          else {
            local_1a8 = ZEXT812(0);
          }
          local_11c8 = local_1a8._0_8_;
          uStack_19c = 0;
          uStack_198 = 2;
          uStack_11c0 = (ulong)local_1a8._8_4_;
          uStack_194 = uVar19;
        }
        break;
            case 0xb:
        if (local_17c == 0) {
          _DAT_0010c018 = ___stack_chk_fail;
          ___stack_chk_fail = __hb_CrapPool;
          local_180 = '\x01';
          pauVar10 = (undefined1 (*) [12])&_hb_CrapPool;
          __hb_CrapPool = __hb_NullPool;
        }
        else {
          local_17c = local_17c - 1;
          pauVar10 = (undefined1 (*) [12])(local_178 + (ulong)local_17c * 3);
        }
        local_11c8 = *(ulong *)*pauVar10;
        uStack_11c0 = *(ulong *)(*pauVar10 + 8);
        local_1a8 = *pauVar10;
        uStack_19c = (uint)(uStack_11c0 >> 0x20);
        uStack_198 = (undefined4)*(undefined8 *)(pauVar10[1] + 4);
        uStack_194 = (uint)((ulong)*(undefined8 *)(pauVar10[1] + 4) >> 0x20);
        break;
            case 0xe:
        if ((char)local_58 == '\0') {
          if ((uVar4 != 0) && ((local_11b8 & 0x100000000) != 0)) {
            local_58 = 0x100;
            local_50 = local_11b0[0];
          }
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_190 = '\x01';
        local_11b8 = local_11b8 & 0xffffffff;
        local_54 = 0;
        break;
            case 0x13:
            case 0x14:
        if ((char)local_58 == '\0') {
          if ((uVar4 != 0) && ((local_11b8 & 0x100000000) != 0)) {
            local_58 = 0x100;
            local_54 = 1;
            local_50 = local_11b0[0];
          }
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        if (local_18f._1_1_ == '\0') {
          local_18f = CONCAT11(1,(char)local_18f);
          local_18c._4_4_ = (uVar4 >> 1) + local_18c._4_4_;
          local_184 = (uint)(local_18c._4_4_ + 7 + (int)local_18c) >> 3;
        }
        if (local_184 + uVar15 <= (uint)uStack_11c0) {
          local_54 = 0;
          uStack_11c0 = CONCAT44(local_184 + uVar15,(uint)uStack_11c0);
          goto joined_r0x001005d2;
        }
        break;
            case 0x15:
        if ((char)local_58 == '\0') {
          if (2 < uVar4) goto LAB_00100e18;
          goto LAB_00100661;
        }
LAB_00100669:
        if ((char)local_18f == '\0') {
          if (local_18f._1_1_ == '\0') {
            local_18f = 0x100;
            local_18c._4_4_ = (uVar4 >> 1) + local_18c._4_4_;
            local_184 = (uint)(local_18c._4_4_ + 7 + (int)local_18c) >> 3;
          }
          local_18f = CONCAT11(local_18f._1_1_,1);
        }
switchD_00100649_caseD_5:
        local_11b8 = local_11b8 & 0xffffffff;
        local_54 = 0;
        break;
            case 0x1d:
        if (uVar4 == 0) {
          __hb_CrapPool = __hb_NullPool;
          local_11b8 = CONCAT71(local_11b8._1_7_,1);
          pdVar17 = (double *)&_hb_CrapPool;
        }
        else {
          local_11b8 = CONCAT44(uVar4 - 1,uVar3);
          pdVar17 = local_11b0 + (uVar4 - 1);
        }
        uVar19 = (int)*pdVar17 + local_88[0];
        if (((((int)uVar19 < 0) || (local_80 == (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0)) ||
            ((ushort)(*(ushort *)local_80 << 8 | *(ushort *)local_80 >> 8) <= uVar19)) ||
           (uVar9 = (ulong)local_17c, 9 < local_17c)) goto LAB_00100ed1;
        local_17c = local_17c + 1;
        local_1a8._0_8_ = local_11c8;
        local_1a8._8_4_ = (uint)uStack_11c0;
        local_178[uVar9 * 3 + 2] = CONCAT44(uStack_194,uStack_198);
        local_178[uVar9 * 3] = local_11c8;
        local_178[uVar9 * 3 + 1] = uStack_11c0;
        if (this_00 == (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0) {
          local_1a8 = ZEXT812(0);
        }
        else if (uVar19 < (ushort)(*(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8)) {
          uStack_19c = uVar15;
          local_1a8 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](this_00,uVar19);
        }
        else {
          local_1a8 = ZEXT812(0);
        }
        local_11c8 = local_1a8._0_8_;
        uStack_19c = 0;
        uStack_198 = 1;
        uStack_11c0 = (ulong)local_1a8._8_4_;
        uStack_194 = uVar19;
         }

         goto LAB_00100549;
      }

      uVar19 = uVar19 + 2;
      if ((uint)uStack_11c0 < uVar19) goto LAB_001006e0;
      bVar28 = *(byte*)( local_11c8 + uVar15 );
      uStack_11c0 = CONCAT44(uVar19, (uint)uStack_11c0);
      uVar22 = bVar28 + 0x100;
      if (uVar22 != 0x100) {
         if (( 0x26 < bVar28 + 1 ) || ( 3 < bVar28 - 0x22 )) goto switchD_00100649_caseD_2;
         local_11b8 = local_11b8 & 0xffffffff;
         local_54 = 0;
         goto LAB_00100549;
      }

      local_54 = 0;
      joined_r0x001005d2:local_11b8 = local_11b8 & 0xffffffff;
      local_54 = 0;
      if (local_180 == '\0') goto LAB_001005d4;
   }

   goto LAB_00100560;
   LAB_0010079a:uVar11 = (uint)uVar13;
   LAB_001007fb:if (uVar19 < 0x100) {
      bVar28 = ( &standard_encoding_to_sid )[uVar19];
      pcVar1 = *(char**)( this + 0x50 );
      if (pcVar1 == &_hb_NullPool) {
         bVar27 = *(int*)( this + 0xf4 ) == 0;
         LAB_001008aa:uVar13 = (ulong)bVar28;
         if (( uVar19 < 0xe5 ) && ( bVar27 )) goto LAB_00100526;
      }
 else {
         cVar5 = *pcVar1;
         uVar15 = *(uint*)( this + 0x128 );
         uVar19 = (uint)bVar28;
         if (cVar5 == '\x01') {
            if (( uVar19 != 0 ) && ( 1 < uVar15 )) {
               uVar13 = 0;
               uVar23 = 1;
               do {
                  uVar14 = *(ushort*)( pcVar1 + uVar13 * 3 + 1 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 3 + 1 ) >> 8;
                  if (( uVar14 <= uVar19 ) && ( uVar19 <= (uint)uVar14 + (uint)(byte)pcVar1[uVar13 * 3 + 3] )) {
                     uVar13 = ( ulong )(( uVar23 + uVar19 ) - (uint)uVar14);
                     goto LAB_00100526;
                  }

                  uVar23 = uVar23 + 1 + (uint)(byte)pcVar1[uVar13 * 3 + 3];
                  uVar13 = ( ulong )((int)uVar13 + 1);
               }
 while ( uVar23 < uVar15 );
               uVar13 = 0;
               goto LAB_00100526;
            }

         }
 else if (cVar5 == '\x02') {
            if (( uVar19 != 0 ) && ( 1 < uVar15 )) {
               uVar13 = 0;
               uVar23 = 1;
               do {
                  uVar14 = *(ushort*)( pcVar1 + uVar13 * 4 + 1 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 4 + 1 ) >> 8;
                  uVar18 = *(ushort*)( pcVar1 + uVar13 * 4 + 3 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 4 + 3 ) >> 8;
                  if (( uVar14 <= uVar19 ) && ( uVar19 <= (uint)uVar14 + (uint)uVar18 )) {
                     uVar13 = ( ulong )(( uVar23 + uVar19 ) - (uint)uVar14);
                     goto LAB_00100526;
                  }

                  uVar23 = uVar23 + 1 + (uint)uVar18;
                  uVar13 = ( ulong )((int)uVar13 + 1);
               }
 while ( uVar23 < uVar15 );
               uVar13 = 0;
               goto LAB_00100526;
            }

         }
 else if (( ( cVar5 == '\0' ) && ( bVar28 != 0 ) ) && ( 1 < uVar15 )) {
            uVar13 = 1;
            do {
               if (uVar19 == ( ushort )(*(ushort*)( pcVar1 + uVar13 * 2 + -1 ) << 8 | *(ushort*)( pcVar1 + uVar13 * 2 + -1 ) >> 8)) {
                  uVar13 = uVar13 & 0xffffffff;
                  goto LAB_00100526;
               }

               uVar13 = uVar13 + 1;
            }
 while ( uVar13 != uVar15 );
         }

      }

   }

   LAB_001008c0:uVar13 = 0;
   LAB_00100526:local_11b8 = local_11b8 & 0xffffffff;
   local_54 = 0;
   local_190 = '\x01';
   LAB_00100549:if (local_180 != '\0') goto LAB_00100560;
   if ((uint)uStack_11c0 < uStack_11c0._4_4_) goto LAB_00100560;
   LAB_001005d4:if (( (char)local_11b8 != '\0' ) || ( iVar21 = iVar21 == 0 )) goto LAB_00100560;
   if (local_190 != '\0') goto code_r0x001005f5;
   goto LAB_001004a5;
   code_r0x001005f5:if (( uVar11 != 0 ) && ( (uint)uVar13 != 0 )) {
      *param_2 = uVar11;
      *param_3 = (uint)uVar13;
      cVar5 = local_190;
      goto LAB_00100562;
   }

   LAB_00100560:cVar5 = '\0';
   LAB_00100562:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OT::cff1::accelerator_t::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*) const */undefined4 OT::cff1::accelerator_t::get_extents(accelerator_t *this, hb_font_t *param_1, uint param_2, hb_glyph_extents_t *param_3) {
   undefined4 uVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   double dVar4;
   double local_48;
   double local_40;
   double local_38;
   double local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = _get_bounds(this, param_2, (bounds_t*)&local_48, false);
   if ((char)uVar1 != '\0') {
      if (local_48 < local_38) {
         local_48 = local_48 + _LC15;
         if ((double)( (ulong)local_48 & _LC10 ) < _LC16) {
            local_48 = (double)( ( ulong )((double)(long)local_48 - (double)( -(ulong)(local_48 < (double)(long)local_48) & _LC17 )) | ~_LC10 & (ulong)local_48 );
         }

         iVar2 = (int)local_48;
         dVar4 = ( local_38 - (double)iVar2 ) + _LC15;
         if ((double)( (ulong)dVar4 & _LC10 ) < _LC16) {
            iVar3 = (int)(double)( ( ulong )((double)(long)dVar4 - (double)( -(ulong)(dVar4 < (double)(long)dVar4) & _LC17 )) | ~_LC10 & (ulong)dVar4 );
         }
 else {
            iVar3 = (int)dVar4;
         }

      }
 else {
         iVar2 = 0;
         iVar3 = 0;
      }

      *(int*)param_3 = iVar2;
      *(int*)( param_3 + 8 ) = iVar3;
      if (local_30 <= local_40) {
         iVar2 = 0;
         iVar3 = 0;
      }
 else {
         local_30 = local_30 + _LC15;
         if ((double)( (ulong)local_30 & _LC10 ) < _LC16) {
            local_30 = (double)( ( ulong )((double)(long)local_30 - (double)( -(ulong)(local_30 < (double)(long)local_30) & _LC17 )) | ~_LC10 & (ulong)local_30 );
         }

         iVar2 = (int)local_30;
         dVar4 = ( local_40 - (double)iVar2 ) + _LC15;
         if ((double)( (ulong)dVar4 & _LC10 ) < _LC16) {
            dVar4 = (double)( ( ulong )((double)(long)dVar4 - (double)( -(ulong)(dVar4 < (double)(long)dVar4) & _LC17 )) | ~_LC10 & (ulong)dVar4 );
         }

         iVar3 = (int)dVar4;
      }

      *(int*)( param_3 + 4 ) = iVar2;
      *(int*)( param_3 + 0xc ) = iVar3;
      hb_font_t::scale_glyph_extents(param_1, param_3);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OT::cff1::accelerator_t::get_path(hb_font_t*, unsigned int, hb_draw_session_t&) const */void OT::cff1::accelerator_t::get_path(accelerator_t *this, hb_font_t *param_1, uint param_2, hb_draw_session_t *param_3) {
   _get_path(this, param_1, param_2, param_3, false, (point_t*)0x0);
   return;
}
/* CFF::FDSelect3_4<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned char, 1u>
   >::_cmp_range(void const*, void const*) */ulong CFF::FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::_cmp_range(void *param_1, void *param_2) {
   ulong uVar1;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uVar1 = 0xffffffff;
   if (( uint )(ushort)(*param_2 << 8 | *param_2 >> 8) <= *param_1) {
      uVar1 = ( ulong )(( uint )(ushort)(*(ushort*)( (long)param_2 + 3 ) << 8 | *(ushort*)( (long)param_2 + 3 ) >> 8) <= *param_1);
   }

   return uVar1;
}
/* hb_font_t::scale_glyph_extents(hb_glyph_extents_t*) */void hb_font_t::scale_glyph_extents(hb_font_t *this, hb_glyph_extents_t *param_1) {
   hb_font_t hVar1;
   int iVar2;
   int iVar3;
   float fVar4;
   int iVar5;
   int iVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   fVar4 = (float)(int)(short)*(undefined4*)param_1 * *(float*)( this + 0x4c );
   fVar7 = (float)(int)(short)( (short)*(undefined4*)param_1 + *(short*)( param_1 + 8 ) ) * *(float*)( this + 0x4c );
   fVar10 = (float)(int)(short)*(undefined4*)( param_1 + 4 ) * *(float*)( this + 0x50 );
   fVar8 = (float)(int)(short)( (short)*(undefined4*)( param_1 + 4 ) + *(short*)( param_1 + 0xc ) ) * *(float*)( this + 0x50 );
   fVar11 = *(float*)( this + 0x48 );
   if (fVar11 != 0.0) {
      fVar9 = fVar11 * fVar10;
      fVar11 = fVar11 * fVar8;
      fVar4 = fVar4 + (float)( ~-(uint)(fVar9 <= fVar11) & (uint)fVar11 | (uint)fVar9 & -(uint)(fVar9 <= fVar11) );
      fVar7 = fVar7 + (float)( (uint)fVar9 & -(uint)(fVar11 <= fVar9) | ~-(uint)(fVar11 <= fVar9) & (uint)fVar11 );
   }

   if ((float)( (uint)fVar4 & _LC2 ) < _LC1) {
      fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC3 )) | ~_LC2 & (uint)fVar4 );
   }

   if ((float)( (uint)fVar10 & _LC2 ) < _LC1) {
      fVar10 = (float)( ( uint )((float)(int)fVar10 - (float)( -(uint)(fVar10 < (float)(int)fVar10) & _LC3 )) | ~_LC2 & (uint)fVar10 );
   }

   if ((float)( (uint)fVar7 & _LC2 ) < _LC1) {
      fVar7 = (float)( ( uint )((float)(int)fVar7 + (float)( -(uint)((float)(int)fVar7 < fVar7) & _LC3 )) | ~_LC2 & (uint)fVar7 );
   }

   if ((float)( (uint)fVar8 & _LC2 ) < _LC1) {
      fVar8 = (float)( ( uint )((float)(int)fVar8 + (float)( -(uint)((float)(int)fVar8 < fVar8) & _LC3 )) | ~_LC2 & (uint)fVar8 );
   }

   iVar5 = (int)( fVar7 - (float)(int)fVar4 );
   iVar6 = (int)( fVar8 - (float)(int)fVar10 );
   *(int*)param_1 = (int)fVar4;
   *(int*)( param_1 + 4 ) = (int)fVar10;
   *(int*)( param_1 + 8 ) = iVar5;
   *(int*)( param_1 + 0xc ) = iVar6;
   iVar2 = *(int*)( this + 0x3c );
   iVar3 = *(int*)( this + 0x40 );
   if (iVar2 != 0 || iVar3 != 0) {
      if (*(int*)( this + 0x2c ) < 0) {
         iVar3 = -iVar3;
      }

      *(int*)( param_1 + 0xc ) = iVar6 - iVar3;
      iVar6 = *(int*)( this + 0x28 );
      *(int*)( param_1 + 4 ) = (int)fVar10 + iVar3;
      if (iVar6 < 0) {
         iVar2 = -iVar2;
         hVar1 = this[0x38];
      }
 else {
         hVar1 = this[0x38];
      }

      if (hVar1 != (hb_font_t)0x0) {
         *(int*)param_1 = (int)fVar4 - iVar2 / 2;
      }

      *(int*)( param_1 + 8 ) = iVar2 + iVar5;
   }

   return;
}
/* cff1_path_param_t::move_to(CFF::point_t const&) */void cff1_path_param_t::move_to(cff1_path_param_t *this, point_t *param_1) {
   double *pdVar1;
   float *pfVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   float fVar6;
   double dVar7;
   float fVar8;
   double dVar9;
   pdVar1 = *(double**)( this + 0x10 );
   dVar7 = *(double*)param_1;
   dVar9 = *(double*)( param_1 + 8 );
   if (pdVar1 != (double*)0x0) {
      dVar7 = dVar7 + *pdVar1;
      dVar9 = dVar9 + pdVar1[1];
   }

   pfVar2 = *(float**)( this + 8 );
   lVar3 = *(long*)( pfVar2 + 2 );
   fVar8 = (float)dVar9 * *(float*)( *(long*)this + 0x50 );
   uVar4 = *(undefined8*)( pfVar2 + 4 );
   fVar6 = (float)dVar7 * *(float*)( *(long*)this + 0x4c );
   if (*(char*)( pfVar2 + 1 ) == '\0') {
      fVar6 = fVar6 + *pfVar2 * fVar8;
      if (pfVar2[6] != 0.0) {
         if (( pfVar2[7] != pfVar2[9] ) || ( pfVar2[8] != pfVar2[10] )) {
            lVar5 = *(long*)( lVar3 + 0x38 );
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 8 );
            }

            ( **(code**)( lVar3 + 0x18 ) )(lVar3, uVar4, pfVar2 + 6, lVar5);
         }

         lVar5 = *(long*)( lVar3 + 0x38 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x20 );
         }

         ( **(code**)( lVar3 + 0x30 ) )(lVar3, uVar4, pfVar2 + 6, lVar5);
         for (int i = 0; i < 3; i++) {
            pfVar2[( i + 6 )] = 0;
         }

      }

   }
 else if (pfVar2[6] != 0.0) {
      if (( pfVar2[7] != pfVar2[9] ) || ( pfVar2[8] != pfVar2[10] )) {
         lVar5 = *(long*)( lVar3 + 0x38 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 8 );
         }

         ( **(code**)( lVar3 + 0x18 ) )(lVar3, uVar4, pfVar2 + 6, lVar5);
      }

      lVar5 = *(long*)( lVar3 + 0x38 );
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x20 );
      }

      ( **(code**)( lVar3 + 0x30 ) )(lVar3, uVar4, pfVar2 + 6, lVar5);
      for (int i = 0; i < 3; i++) {
         pfVar2[( i + 6 )] = 0;
      }

   }

   *(ulong*)( pfVar2 + 9 ) = CONCAT44(fVar8, fVar6);
   return;
}
/* cff1_path_param_t::line_to(CFF::point_t const&) */void cff1_path_param_t::line_to(cff1_path_param_t *this, point_t *param_1) {
   double *pdVar1;
   float *pfVar2;
   long lVar3;
   undefined8 uVar4;
   long *plVar5;
   float fVar6;
   double dVar7;
   float fVar8;
   double dVar9;
   pdVar1 = *(double**)( this + 0x10 );
   dVar7 = *(double*)param_1;
   dVar9 = *(double*)( param_1 + 8 );
   if (pdVar1 != (double*)0x0) {
      dVar7 = dVar7 + *pdVar1;
      dVar9 = dVar9 + pdVar1[1];
   }

   pfVar2 = *(float**)( this + 8 );
   lVar3 = *(long*)( pfVar2 + 2 );
   fVar8 = (float)dVar9 * *(float*)( *(long*)this + 0x50 );
   fVar6 = (float)dVar7 * *(float*)( *(long*)this + 0x4c );
   plVar5 = *(long**)( lVar3 + 0x38 );
   uVar4 = *(undefined8*)( pfVar2 + 4 );
   if (*(char*)( pfVar2 + 1 ) != '\0') {
      if (pfVar2[6] == 0.0) {
         if (plVar5 != (long*)0x0) {
            plVar5 = (long*)*plVar5;
         }

         ( **(code**)( lVar3 + 0x10 ) )(pfVar2[9], pfVar2[10], lVar3, uVar4, pfVar2 + 6, plVar5);
         pfVar2[6] = 1.4013e-45;
         plVar5 = *(long**)( lVar3 + 0x38 );
         *(undefined8*)( pfVar2 + 7 ) = *(undefined8*)( pfVar2 + 9 );
      }

      if (plVar5 != (long*)0x0) {
         plVar5 = *(long**)( (long)plVar5 + 8 );
      }

      ( **(code**)( lVar3 + 0x18 ) )(fVar6, fVar8, lVar3, uVar4, pfVar2 + 6, plVar5);
      *(ulong*)( pfVar2 + 9 ) = CONCAT44(fVar8, fVar6);
      return;
   }

   fVar6 = fVar6 + *pfVar2 * fVar8;
   if (pfVar2[6] == 0.0) {
      if (plVar5 != (long*)0x0) {
         plVar5 = (long*)*plVar5;
      }

      ( **(code**)( lVar3 + 0x10 ) )(pfVar2[9], pfVar2[10], lVar3, uVar4, pfVar2 + 6, plVar5);
      pfVar2[6] = 1.4013e-45;
      plVar5 = *(long**)( lVar3 + 0x38 );
      *(undefined8*)( pfVar2 + 7 ) = *(undefined8*)( pfVar2 + 9 );
   }

   if (plVar5 != (long*)0x0) {
      plVar5 = *(long**)( (long)plVar5 + 8 );
   }

   ( **(code**)( lVar3 + 0x18 ) )(fVar6, fVar8, lVar3, uVar4, pfVar2 + 6, plVar5);
   *(ulong*)( pfVar2 + 9 ) = CONCAT44(fVar8, fVar6);
   return;
}
/* cff1_path_param_t::cubic_to(CFF::point_t const&, CFF::point_t const&, CFF::point_t const&) */void cff1_path_param_t::cubic_to(cff1_path_param_t *this, point_t *param_1, point_t *param_2, point_t *param_3) {
   float fVar1;
   float fVar2;
   double dVar3;
   double dVar4;
   double *pdVar5;
   float *pfVar6;
   long lVar7;
   undefined8 uVar8;
   long *plVar9;
   double dVar10;
   float fVar11;
   double dVar12;
   undefined4 uVar14;
   float fVar15;
   double dVar16;
   double dVar18;
   float fVar19;
   double dVar20;
   double dVar21;
   float fVar22;
   ulong uVar13;
   ulong uVar17;
   dVar12 = *(double*)param_2;
   dVar16 = *(double*)( param_2 + 8 );
   pdVar5 = *(double**)( this + 0x10 );
   dVar10 = *(double*)param_1;
   dVar21 = *(double*)( param_1 + 8 );
   dVar18 = *(double*)param_3;
   dVar20 = *(double*)( param_3 + 8 );
   if (pdVar5 != (double*)0x0) {
      dVar3 = *pdVar5;
      dVar4 = pdVar5[1];
      dVar10 = dVar10 + dVar3;
      dVar21 = dVar21 + dVar4;
      dVar12 = dVar12 + dVar3;
      dVar16 = dVar16 + dVar4;
      dVar18 = dVar18 + dVar3;
      dVar20 = dVar20 + dVar4;
   }

   pfVar6 = *(float**)( this + 8 );
   lVar7 = *(long*)( pfVar6 + 2 );
   uVar14 = ( undefined4 )((ulong)dVar12 >> 0x20);
   fVar22 = *(float*)( *(long*)this + 0x50 );
   fVar1 = *(float*)( *(long*)this + 0x4c );
   plVar9 = *(long**)( lVar7 + 0x38 );
   uVar8 = *(undefined8*)( pfVar6 + 4 );
   fVar19 = (float)dVar20 * fVar22;
   fVar15 = (float)dVar16 * fVar22;
   uVar17 = CONCAT44((int)( (ulong)dVar16 >> 0x20 ), fVar15);
   fVar11 = (float)dVar12 * fVar1;
   uVar13 = CONCAT44(uVar14, fVar11);
   fVar22 = (float)dVar21 * fVar22;
   if (*(char*)( pfVar6 + 1 ) != '\0') {
      if (pfVar6[6] == 0.0) {
         if (plVar9 != (long*)0x0) {
            plVar9 = (long*)*plVar9;
         }

         ( **(code**)( lVar7 + 0x10 ) )(pfVar6[9], pfVar6[10], lVar7, uVar8, pfVar6 + 6, plVar9);
         pfVar6[6] = 1.4013e-45;
         plVar9 = *(long**)( lVar7 + 0x38 );
         uVar17 = (ulong)(uint)fVar15;
         *(undefined8*)( pfVar6 + 7 ) = *(undefined8*)( pfVar6 + 9 );
         uVar13 = (ulong)(uint)fVar11;
      }

      if (plVar9 != (long*)0x0) {
         plVar9 = *(long**)( (long)plVar9 + 0x18 );
      }

      ( **(code**)( lVar7 + 0x28 ) )((float)dVar10 * fVar1, fVar22, uVar13, uVar17, lVar7, uVar8, pfVar6 + 6, plVar9);
      *(ulong*)( pfVar6 + 9 ) = CONCAT44(fVar19, (float)dVar18 * fVar1);
      return;
   }

   fVar2 = *pfVar6;
   fVar11 = fVar11 + fVar2 * fVar15;
   uVar13 = CONCAT44(uVar14, fVar11);
   if (pfVar6[6] == 0.0) {
      if (plVar9 != (long*)0x0) {
         plVar9 = (long*)*plVar9;
      }

      ( **(code**)( lVar7 + 0x10 ) )(pfVar6[9], pfVar6[10], lVar7, uVar8, pfVar6 + 6, plVar9);
      pfVar6[6] = 1.4013e-45;
      plVar9 = *(long**)( lVar7 + 0x38 );
      uVar17 = (ulong)(uint)fVar15;
      *(undefined8*)( pfVar6 + 7 ) = *(undefined8*)( pfVar6 + 9 );
      uVar13 = (ulong)(uint)fVar11;
   }

   if (plVar9 != (long*)0x0) {
      plVar9 = *(long**)( (long)plVar9 + 0x18 );
   }

   ( **(code**)( lVar7 + 0x28 ) )((float)dVar10 * fVar1 + fVar2 * fVar22, fVar22, uVar13, uVar17, lVar7, uVar8, pfVar6 + 6, plVar9);
   *(ulong*)( pfVar6 + 9 ) = CONCAT44(fVar19, (float)dVar18 * fVar1 + fVar2 * fVar19);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::opset_t<CFF::number_t>::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */void CFF::opset_t<CFF::number_t>::process_op(uint param_1, interp_env_t *param_2) {
   undefined1 uVar1;
   undefined1 uVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   byte *pbVar6;
   undefined *puVar7;
   interp_env_t *piVar8;
   if (param_1 < 0xfb) {
      if (0xf6 < param_1) {
         uVar5 = *(uint*)( param_2 + 0xc );
         if (uVar5 < *(uint*)( param_2 + 8 )) {
            pbVar6 = (byte*)( (ulong)uVar5 + *(long*)param_2 );
         }
 else {
            uVar5 = *(uint*)( param_2 + 8 ) + 1;
            pbVar6 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         bVar3 = *pbVar6;
         uVar4 = *(uint*)( param_2 + 0x14 );
         if (uVar4 < 0x201) {
            piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)(short)( ( (short)param_1 + -0xf7 ) * 0x100 + 0x6c + (ushort)bVar3 );
         *(uint*)( param_2 + 0xc ) = uVar5 + 1;
         return;
      }

      if (param_1 == 0x1c) {
         uVar5 = *(uint*)( param_2 + 0xc );
         uVar4 = *(uint*)( param_2 + 8 );
         if (uVar5 < uVar4) {
            puVar7 = (undefined*)( (ulong)uVar5 + *(long*)param_2 );
         }
 else {
            uVar5 = uVar4 + 1;
            puVar7 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         uVar1 = *puVar7;
         if (uVar5 + 1 < uVar4) {
            puVar7 = (undefined*)( ( ulong )(uVar5 + 1) + *(long*)param_2 );
         }
 else {
            uVar5 = uVar4 + 1;
            puVar7 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         uVar2 = *puVar7;
         uVar4 = *(uint*)( param_2 + 0x14 );
         if (uVar4 < 0x201) {
            piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)CONCAT11(uVar1, uVar2);
         *(uint*)( param_2 + 0xc ) = uVar5 + 2;
         return;
      }

      if (param_1 - 0x20 < 0xd7) {
         uVar5 = *(uint*)( param_2 + 0x14 );
         if (uVar5 < 0x201) {
            piVar8 = param_2 + (ulong)uVar5 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar5 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)( param_1 - 0x8b );
         return;
      }

   }
 else if (param_1 - 0xfb < 4) {
      uVar5 = *(uint*)( param_2 + 0xc );
      if (uVar5 < *(uint*)( param_2 + 8 )) {
         pbVar6 = (byte*)( (ulong)uVar5 + *(long*)param_2 );
      }
 else {
         uVar5 = *(uint*)( param_2 + 8 ) + 1;
         pbVar6 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar5;
      }

      bVar3 = *pbVar6;
      uVar4 = *(uint*)( param_2 + 0x14 );
      if (uVar4 < 0x201) {
         piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
         *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
      }
 else {
         __hb_CrapPool = __hb_NullPool;
         param_2[0x10] = (interp_env_t)0x1;
         piVar8 = (interp_env_t*)&_hb_CrapPool;
      }

      *(double*)piVar8 = (double)(int)( ( ( param_1 - 0xfb & 0xffff ) * -0x100 - (uint)bVar3 ) + -0x6c );
      *(uint*)( param_2 + 0xc ) = uVar5 + 1;
      return;
   }

   *(undefined4*)( param_2 + 0x14 ) = 0;
   return;
}
/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::operator[](unsigned int) const */undefined1[16];OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator (CFFIndex<OT::IntType<unsigned_short,2u>> *this,uint param_1) {
   CFFIndex<OT::IntType<unsigned_short,2u>> CVar1;
   uint uVar2;
   ushort uVar3;
   uint uVar4;
   CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar5;
   ushort uVar6;
   uint uVar7;
   uint uVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   if (param_1 < ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8)) {
      CVar1 = this[2];
      if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3) {
         pCVar5 = this + (ulong)param_1 * 3 + 3;
         uVar7 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
         pCVar5 = this + ( ulong )(param_1 + 1) * 3 + 3;
         uVar4 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
         if (uVar4 < uVar7) goto LAB_001028b8;
         uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         uVar2 = (uint)uVar3;
         pCVar5 = this + (ulong)uVar3 * 3 + 3;
         uVar8 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
      }
 else if ((byte)CVar1 < 4) {
         if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1) {
            uVar7 = (uint)(byte)this[(ulong)param_1 + 3];
            uVar4 = (uint)(byte)this[( ulong )(param_1 + 1) + 3];
            if (uVar4 < uVar7) goto LAB_001028b8;
            uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
            uVar2 = (uint)uVar3;
            uVar8 = (uint)(byte)this[(ulong)uVar3 + 3];
         }
 else {
            if (CVar1 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2) goto LAB_001028c0;
            uVar6 = *(ushort*)( this + (ulong)param_1 * 2 + 3 ) << 8 | *(ushort*)( this + (ulong)param_1 * 2 + 3 ) >> 8;
            uVar3 = *(ushort*)( this + ( ulong )(param_1 + 1) * 2 + 3 ) << 8 | *(ushort*)( this + ( ulong )(param_1 + 1) * 2 + 3 ) >> 8;
            uVar7 = (uint)uVar6;
            uVar4 = (uint)uVar3;
            if (uVar3 < uVar6) goto LAB_001028b8;
            uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
            uVar2 = (uint)uVar3;
            uVar8 = ( uint )(ushort)(*(ushort*)( this + (ulong)uVar3 * 2 + 3 ) << 8 | *(ushort*)( this + (ulong)uVar3 * 2 + 3 ) >> 8);
         }

      }
 else {
         if (CVar1 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4) {
            LAB_001028c0:auVar11._0_8_ = this + ( ( ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8) + 1 ) * (uint)(byte)CVar1 + 2 );
            auVar11._8_8_ = 0;
            return auVar11;
         }

         uVar4 = *(uint*)( this + (ulong)param_1 * 4 + 3 );
         uVar2 = *(uint*)( this + ( ulong )(param_1 + 1) * 4 + 3 );
         uVar7 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18;
         uVar4 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
         if (uVar4 < uVar7) goto LAB_001028b8;
         uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         uVar2 = (uint)uVar3;
         uVar8 = *(uint*)( this + (ulong)uVar3 * 4 + 3 );
         uVar8 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
      }

      if (uVar4 <= uVar8) {
         auVar9._8_4_ = uVar4 - uVar7;
         auVar9._0_8_ = this + ( ulong )(( uVar2 + 1 ) * (uint)(byte)CVar1 + 2) + (ulong)uVar7;
         auVar9._12_4_ = 0;
         return auVar9;
      }

   }

   LAB_001028b8:auVar10._12_4_ = 0;
   auVar10._0_12_ = ZEXT812(0);
   return auVar10;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::hlineto(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::hlineto(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   undefined8 uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   cff1_cs_interp_env_t *pcVar6;
   ulong uVar7;
   double dVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   uVar2 = *(uint*)( param_1 + 0x14 );
   if (uVar2 < 2) {
      uVar7 = 0;
   }
 else {
      uVar4 = 1;
      uVar3 = 0;
      uVar7 = 2;
      while (true) {
         dVar8 = *(double*)( param_1 + 0x1160 );
         dVar10 = *(double*)( param_1 + 0x1168 );
         pcVar6 = param_1 + (ulong)uVar3 * 8 + 0x18;
         if (uVar2 <= uVar3) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         dVar9 = *(double*)pcVar6 + dVar8;
         if (*param_2 == (cff1_extents_param_t)0x0) {
            *param_2 = (cff1_extents_param_t)0x1;
            if (dVar8 < *(double*)( param_2 + 8 )) {
               *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
               dVar8 = *(double*)( param_1 + 0x1160 );
            }

            if (*(double*)( param_2 + 0x18 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x18 )) {
               *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
            }

            dVar8 = *(double*)( param_1 + 0x1168 );
            if (dVar8 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar8;
               dVar8 = *(double*)( param_1 + 0x1168 );
            }

            if (*(double*)( param_2 + 0x20 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x20 )) {
               *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            }

         }

         *(double*)( param_1 + 0x1160 ) = dVar9;
         *(double*)( param_1 + 0x1168 ) = dVar10;
         dVar8 = dVar9;
         if (dVar9 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar8 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar8 = *(double*)( param_1 + 0x1168 );
         if (dVar8 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar8;
            dVar8 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

         pcVar6 = param_1 + (ulong)uVar4 * 8 + 0x18;
         if (uVar2 <= uVar4) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         dVar8 = *(double*)pcVar6;
         if (*param_2 == (cff1_extents_param_t)0x0) {
            dVar11 = *(double*)( param_1 + 0x1160 );
            *param_2 = (cff1_extents_param_t)0x1;
            if (dVar11 < *(double*)( param_2 + 8 )) {
               *(double*)( param_2 + 8 ) = dVar11;
               dVar11 = *(double*)( param_1 + 0x1160 );
            }

            if (*(double*)( param_2 + 0x18 ) <= dVar11 && dVar11 != *(double*)( param_2 + 0x18 )) {
               *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
            }

            dVar11 = *(double*)( param_1 + 0x1168 );
            if (dVar11 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar11;
               dVar11 = *(double*)( param_1 + 0x1168 );
            }

            if (*(double*)( param_2 + 0x20 ) <= dVar11 && dVar11 != *(double*)( param_2 + 0x20 )) {
               *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            }

         }

         *(double*)( param_1 + 0x1160 ) = dVar9;
         *(double*)( param_1 + 0x1168 ) = dVar10 + dVar8;
         if (dVar9 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar9 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar9 && dVar9 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar8 = *(double*)( param_1 + 0x1168 );
         if (dVar8 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar8;
            dVar8 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

         uVar5 = (int)uVar7 + 2;
         uVar3 = uVar3 + 2;
         uVar4 = uVar4 + 2;
         if (uVar2 < uVar5) break;
         uVar7 = (ulong)uVar5;
      }
;
   }

   if ((uint)uVar7 < uVar2) {
      dVar8 = *(double*)( param_1 + 0x1160 );
      dVar10 = *(double*)( param_1 + uVar7 * 8 + 0x18 ) + dVar8;
      uVar1 = *(undefined8*)( param_1 + 0x1168 );
      if (*param_2 == (cff1_extents_param_t)0x0) {
         *param_2 = (cff1_extents_param_t)0x1;
         if (dVar8 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar8 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar8 = *(double*)( param_1 + 0x1168 );
         if (dVar8 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar8;
            dVar8 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

      }

      *(double*)( param_1 + 0x1160 ) = dVar10;
      *(undefined8*)( param_1 + 0x1168 ) = uVar1;
      if (dVar10 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar10 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar8 = *(double*)( param_1 + 0x1168 );
      if (dVar8 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar8;
         dVar8 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar8 && dVar8 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::vlineto(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::vlineto(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   double dVar1;
   double dVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   cff1_cs_interp_env_t *pcVar7;
   ulong uVar8;
   double dVar9;
   double dVar10;
   uVar3 = *(uint*)( param_1 + 0x14 );
   if (uVar3 < 2) {
      uVar8 = 0;
   }
 else {
      uVar5 = 1;
      uVar4 = 0;
      uVar8 = 2;
      while (true) {
         dVar9 = *(double*)( param_1 + 0x1160 );
         dVar1 = *(double*)( param_1 + 0x1168 );
         pcVar7 = param_1 + (ulong)uVar4 * 8 + 0x18;
         if (uVar3 <= uVar4) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar7 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         dVar2 = *(double*)pcVar7;
         if (*param_2 == (cff1_extents_param_t)0x0) {
            *param_2 = (cff1_extents_param_t)0x1;
            dVar10 = dVar9;
            if (dVar9 < *(double*)( param_2 + 8 )) {
               *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
               dVar10 = *(double*)( param_1 + 0x1160 );
            }

            if (*(double*)( param_2 + 0x18 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x18 )) {
               *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
            }

            dVar10 = *(double*)( param_1 + 0x1168 );
            if (dVar10 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar10;
               dVar10 = *(double*)( param_1 + 0x1168 );
            }

            if (*(double*)( param_2 + 0x20 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x20 )) {
               *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            }

         }

         *(double*)( param_1 + 0x1160 ) = dVar9;
         *(double*)( param_1 + 0x1168 ) = dVar1 + dVar2;
         dVar10 = dVar9;
         if (dVar9 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar10 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar10 = *(double*)( param_1 + 0x1168 );
         if (dVar10 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar10;
            dVar10 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

         pcVar7 = param_1 + (ulong)uVar5 * 8 + 0x18;
         if (uVar3 <= uVar5) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar7 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         dVar9 = dVar9 + *(double*)pcVar7;
         if (*param_2 == (cff1_extents_param_t)0x0) {
            dVar10 = *(double*)( param_1 + 0x1160 );
            *param_2 = (cff1_extents_param_t)0x1;
            if (dVar10 < *(double*)( param_2 + 8 )) {
               *(double*)( param_2 + 8 ) = dVar10;
               dVar10 = *(double*)( param_1 + 0x1160 );
            }

            if (*(double*)( param_2 + 0x18 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x18 )) {
               *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
            }

            dVar10 = *(double*)( param_1 + 0x1168 );
            if (dVar10 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar10;
               dVar10 = *(double*)( param_1 + 0x1168 );
            }

            if (*(double*)( param_2 + 0x20 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x20 )) {
               *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            }

         }

         *(double*)( param_1 + 0x1160 ) = dVar9;
         *(double*)( param_1 + 0x1168 ) = dVar1 + dVar2;
         if (dVar9 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar9 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar9 && dVar9 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar9 = *(double*)( param_1 + 0x1168 );
         if (dVar9 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar9;
            dVar9 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar9 && dVar9 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

         uVar6 = (int)uVar8 + 2;
         uVar4 = uVar4 + 2;
         uVar5 = uVar5 + 2;
         if (uVar3 < uVar6) break;
         uVar8 = (ulong)uVar6;
      }
;
   }

   if ((uint)uVar8 < uVar3) {
      dVar9 = *(double*)( param_1 + 0x1160 );
      dVar1 = *(double*)( param_1 + 0x1168 );
      dVar2 = *(double*)( param_1 + uVar8 * 8 + 0x18 );
      if (*param_2 == (cff1_extents_param_t)0x0) {
         *param_2 = (cff1_extents_param_t)0x1;
         dVar10 = dVar9;
         if (dVar9 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar10 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar10 = *(double*)( param_1 + 0x1168 );
         if (dVar10 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar10;
            dVar10 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

      }

      *(double*)( param_1 + 0x1160 ) = dVar9;
      *(double*)( param_1 + 0x1168 ) = dVar1 + dVar2;
      if (dVar9 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar9 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar9 && dVar9 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar9 = *(double*)( param_1 + 0x1168 );
      if (dVar9 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar9;
         dVar9 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar9 && dVar9 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::rrcurveto(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::rrcurveto(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   double dVar1;
   uint uVar2;
   cff1_cs_interp_env_t *pcVar3;
   cff1_cs_interp_env_t *pcVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   uVar2 = *(uint*)( param_1 + 0x14 );
   if (uVar2 < 6) {
      return;
   }

   uVar11 = 3;
   uVar10 = 2;
   uVar9 = 5;
   uVar8 = 4;
   uVar7 = 1;
   uVar6 = 0;
   do {
      dVar12 = *(double*)( param_1 + 0x1160 );
      pcVar3 = param_1 + (ulong)uVar7 * 8 + 0x18;
      if (uVar2 <= uVar7) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      pcVar4 = param_1 + (ulong)uVar6 * 8 + 0x18;
      if (uVar2 <= uVar6) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      dVar17 = *(double*)pcVar4 + dVar12;
      dVar18 = *(double*)pcVar3 + *(double*)( param_1 + 0x1168 );
      pcVar3 = param_1 + (ulong)uVar11 * 8 + 0x18;
      if (uVar2 <= uVar11) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      pcVar4 = param_1 + (ulong)uVar10 * 8 + 0x18;
      if (uVar2 <= uVar10) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      dVar13 = *(double*)pcVar4 + dVar17;
      dVar15 = *(double*)pcVar3 + dVar18;
      pcVar3 = param_1 + (ulong)uVar9 * 8 + 0x18;
      if (uVar2 <= uVar9) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      pcVar4 = param_1 + (ulong)uVar8 * 8 + 0x18;
      if (uVar2 <= uVar8) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      dVar21 = *(double*)( param_2 + 8 );
      dVar20 = *(double*)( param_2 + 0x18 );
      dVar1 = *(double*)pcVar3;
      dVar19 = *(double*)( param_2 + 0x10 );
      dVar14 = dVar13 + *(double*)pcVar4;
      dVar16 = *(double*)( param_2 + 0x20 );
      if (*param_2 == (cff1_extents_param_t)0x0) {
         *param_2 = (cff1_extents_param_t)0x1;
         if (dVar12 < dVar21) {
            dVar21 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 8 ) = dVar21;
            dVar12 = *(double*)( param_1 + 0x1160 );
         }

         if (dVar20 < dVar12) {
            dVar20 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 0x18 ) = dVar20;
         }

         dVar12 = *(double*)( param_1 + 0x1168 );
         dVar22 = dVar12;
         if (dVar12 < dVar19) {
            *(double*)( param_2 + 0x10 ) = dVar12;
            dVar22 = *(double*)( param_1 + 0x1168 );
            dVar19 = dVar12;
         }

         if (dVar16 < dVar22) {
            dVar16 = *(double*)( param_1 + 0x1168 );
            *(double*)( param_2 + 0x20 ) = dVar16;
         }

      }

      if (dVar17 < dVar21) {
         *(double*)( param_2 + 8 ) = dVar17;
         dVar21 = dVar17;
      }

      if (dVar20 < dVar17) {
         *(double*)( param_2 + 0x18 ) = dVar17;
         dVar20 = dVar17;
      }

      if (dVar18 < dVar19) {
         *(double*)( param_2 + 0x10 ) = dVar18;
         dVar19 = dVar18;
      }

      if (dVar16 < dVar18) {
         *(double*)( param_2 + 0x20 ) = dVar18;
         dVar16 = dVar18;
      }

      if (dVar13 < dVar21) {
         *(double*)( param_2 + 8 ) = dVar13;
      }

      if (dVar20 < dVar13) {
         *(double*)( param_2 + 0x18 ) = dVar13;
      }

      if (dVar15 < dVar19) {
         *(double*)( param_2 + 0x10 ) = dVar15;
      }

      if (dVar16 < dVar15) {
         *(double*)( param_2 + 0x20 ) = dVar15;
      }

      *(double*)( param_1 + 0x1160 ) = dVar14;
      *(double*)( param_1 + 0x1168 ) = dVar15 + dVar1;
      if (dVar14 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar14 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar14 && dVar14 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar12 = *(double*)( param_1 + 0x1168 );
      if (dVar12 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar12;
         dVar12 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar12 && dVar12 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
      }

      uVar5 = uVar6 + 0xc;
      uVar7 = uVar7 + 6;
      uVar8 = uVar8 + 6;
      uVar9 = uVar9 + 6;
      uVar10 = uVar10 + 6;
      uVar11 = uVar11 + 6;
      uVar6 = uVar6 + 6;
   }
 while ( uVar5 <= uVar2 );
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::rcurveline(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::rcurveline(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   double dVar1;
   uint uVar2;
   uint uVar3;
   cff1_cs_interp_env_t *pcVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   cff1_cs_interp_env_t *pcVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   cff1_cs_interp_env_t *pcVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   uVar2 = *(uint*)( param_1 + 0x14 );
   if (uVar2 < 8) {
      return;
   }

   uVar10 = 3;
   uVar9 = 2;
   uVar6 = 4;
   uVar12 = 0;
   uVar11 = 1;
   dVar14 = *(double*)( param_1 + 0x1168 );
   uVar7 = 5;
   uVar3 = 6;
   do {
      uVar5 = uVar3;
      dVar15 = *(double*)( param_1 + 0x1160 );
      if (uVar11 < uVar2) {
         pcVar8 = param_1 + ( ulong )(uVar11 + 1) * 8 + 0x10;
         LAB_00104077:pcVar4 = param_1 + ( ulong )(uVar12 + 1) * 8 + 0x10;
      }
 else {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         if (uVar12 < uVar2) goto LAB_00104077;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      dVar14 = dVar14 + *(double*)pcVar8;
      pcVar8 = param_1 + (ulong)uVar10 * 8 + 0x18;
      dVar16 = *(double*)pcVar4 + dVar15;
      if (uVar2 <= uVar10) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      pcVar4 = param_1 + (ulong)uVar9 * 8 + 0x18;
      if (uVar2 <= uVar9) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      pcVar13 = param_1 + (ulong)uVar7 * 8 + 0x18;
      dVar18 = *(double*)pcVar4 + dVar16;
      dVar17 = *(double*)pcVar8 + dVar14;
      if (uVar2 <= uVar7) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      pcVar8 = param_1 + (ulong)uVar6 * 8 + 0x18;
      if (uVar2 <= uVar6) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      }

      dVar1 = *(double*)pcVar13;
      dVar23 = *(double*)( param_2 + 8 );
      dVar19 = *(double*)pcVar8 + dVar18;
      dVar22 = *(double*)( param_2 + 0x18 );
      dVar21 = *(double*)( param_2 + 0x10 );
      dVar20 = *(double*)( param_2 + 0x20 );
      if (*param_2 == (cff1_extents_param_t)0x0) {
         *param_2 = (cff1_extents_param_t)0x1;
         if (dVar15 < dVar23) {
            dVar23 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 8 ) = dVar23;
            dVar15 = *(double*)( param_1 + 0x1160 );
         }

         if (dVar22 < dVar15) {
            dVar22 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 0x18 ) = dVar22;
         }

         dVar15 = *(double*)( param_1 + 0x1168 );
         dVar24 = dVar15;
         if (dVar15 < dVar21) {
            *(double*)( param_2 + 0x10 ) = dVar15;
            dVar24 = *(double*)( param_1 + 0x1168 );
            dVar21 = dVar15;
         }

         if (dVar20 < dVar24) {
            dVar20 = *(double*)( param_1 + 0x1168 );
            *(double*)( param_2 + 0x20 ) = dVar20;
         }

      }

      if (dVar16 < dVar23) {
         *(double*)( param_2 + 8 ) = dVar16;
         dVar23 = dVar16;
      }

      if (dVar22 < dVar16) {
         *(double*)( param_2 + 0x18 ) = dVar16;
         dVar22 = dVar16;
      }

      if (dVar14 < dVar21) {
         *(double*)( param_2 + 0x10 ) = dVar14;
         dVar21 = dVar14;
      }

      if (dVar20 < dVar14) {
         *(double*)( param_2 + 0x20 ) = dVar14;
         dVar20 = dVar14;
      }

      if (dVar18 < dVar23) {
         *(double*)( param_2 + 8 ) = dVar18;
      }

      if (dVar22 < dVar18) {
         *(double*)( param_2 + 0x18 ) = dVar18;
      }

      if (dVar17 < dVar21) {
         *(double*)( param_2 + 0x10 ) = dVar17;
      }

      if (dVar20 < dVar17) {
         *(double*)( param_2 + 0x20 ) = dVar17;
      }

      *(double*)( param_1 + 0x1160 ) = dVar19;
      *(double*)( param_1 + 0x1168 ) = dVar1 + dVar17;
      if (dVar19 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar19 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar19 && dVar19 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar14 = *(double*)( param_1 + 0x1168 );
      if (dVar14 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar14;
         dVar14 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar14 && dVar14 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         dVar14 = *(double*)( param_1 + 0x1168 );
      }

      uVar12 = uVar12 + 6;
      uVar11 = uVar11 + 6;
      uVar6 = uVar6 + 6;
      uVar7 = uVar7 + 6;
      uVar9 = uVar9 + 6;
      uVar10 = uVar10 + 6;
      uVar3 = uVar5 + 6;
   }
 while ( uVar5 + 6 <= uVar2 - 2 );
   dVar15 = *(double*)( param_1 + 0x1160 );
   if (uVar5 + 1 < uVar2) {
      pcVar8 = param_1 + ( ulong )(uVar5 + 2) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      if (uVar2 <= uVar5) {
         pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         goto LAB_001041c2;
      }

      pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   pcVar4 = param_1 + ( ulong )(uVar5 + 1) * 8 + 0x10;
   LAB_001041c2:dVar16 = *(double*)pcVar8;
   dVar17 = *(double*)pcVar4 + dVar15;
   if (*param_2 == (cff1_extents_param_t)0x0) {
      *param_2 = (cff1_extents_param_t)0x1;
      if (dVar15 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar15 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar15 && dVar15 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar15 = *(double*)( param_1 + 0x1168 );
      if (dVar15 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar15;
         dVar15 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar15 && dVar15 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
      }

   }

   *(double*)( param_1 + 0x1160 ) = dVar17;
   *(double*)( param_1 + 0x1168 ) = dVar14 + dVar16;
   if (dVar17 < *(double*)( param_2 + 8 )) {
      *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
      dVar17 = *(double*)( param_1 + 0x1160 );
   }

   if (*(double*)( param_2 + 0x18 ) <= dVar17 && dVar17 != *(double*)( param_2 + 0x18 )) {
      *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
   }

   dVar14 = *(double*)( param_1 + 0x1168 );
   if (dVar14 < *(double*)( param_2 + 0x10 )) {
      *(double*)( param_2 + 0x10 ) = dVar14;
      dVar14 = *(double*)( param_1 + 0x1168 );
   }

   if (*(double*)( param_2 + 0x20 ) <= dVar14 && dVar14 != *(double*)( param_2 + 0x20 )) {
      *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::rlinecurve(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::rlinecurve(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   double dVar1;
   uint uVar2;
   uint uVar3;
   cff1_cs_interp_env_t *pcVar4;
   cff1_cs_interp_env_t *pcVar5;
   uint uVar6;
   uint uVar7;
   cff1_cs_interp_env_t *pcVar8;
   bool bVar9;
   double dVar10;
   double dVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   uVar2 = *(uint*)( param_1 + 0x14 );
   if (uVar2 < 8) {
      return;
   }

   dVar11 = *(double*)( param_1 + 0x1168 );
   pcVar5 = param_1 + 0x18;
   uVar6 = uVar2 - 8 & 0xfffffffe;
   uVar3 = 0;
   do {
      dVar10 = *(double*)( param_1 + 0x1160 );
      pcVar4 = pcVar5 + 8;
      pcVar8 = pcVar5;
      if (uVar2 <= uVar3 + 1) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         if (uVar2 <= uVar3) {
            pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

      }

      dVar13 = *(double*)pcVar4;
      dVar12 = *(double*)pcVar8 + dVar10;
      if (*param_2 == (cff1_extents_param_t)0x0) {
         *param_2 = (cff1_extents_param_t)0x1;
         if (dVar10 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar10 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar10 = *(double*)( param_1 + 0x1168 );
         if (dVar10 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar10;
            dVar10 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar10 && dVar10 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         }

      }

      *(double*)( param_1 + 0x1160 ) = dVar12;
      *(double*)( param_1 + 0x1168 ) = dVar11 + dVar13;
      if (dVar12 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar12 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar12 && dVar12 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar11 = *(double*)( param_1 + 0x1168 );
      if (dVar11 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar11;
         dVar11 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar11 && dVar11 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         dVar11 = *(double*)( param_1 + 0x1168 );
      }

      uVar7 = uVar3 + 2;
      pcVar5 = pcVar5 + 0x10;
      bVar9 = uVar6 != uVar3;
      uVar3 = uVar7;
   }
 while ( bVar9 );
   dVar10 = *(double*)( param_1 + 0x1160 );
   if (uVar6 + 3 < uVar2) {
      pcVar5 = param_1 + ( ulong )(uVar6 + 4) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      if (uVar2 <= uVar7) {
         pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         goto LAB_00104570;
      }

      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   pcVar4 = param_1 + ( ulong )(uVar6 + 3) * 8 + 0x10;
   LAB_00104570:dVar11 = dVar11 + *(double*)pcVar5;
   dVar12 = *(double*)pcVar4 + dVar10;
   if (uVar6 + 5 < uVar2) {
      pcVar5 = param_1 + ( ulong )(uVar6 + 6) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   pcVar4 = param_1 + ( ulong )(uVar6 + 5) * 8 + 0x10;
   if (uVar2 <= uVar6 + 4) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   dVar14 = *(double*)pcVar4 + dVar12;
   dVar13 = *(double*)pcVar5 + dVar11;
   if (uVar6 + 7 < uVar2) {
      pcVar5 = param_1 + ( ulong )(uVar6 + 8) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   pcVar4 = param_1 + ( ulong )(uVar6 + 7) * 8 + 0x10;
   if (uVar2 <= uVar6 + 6) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   dVar1 = *(double*)pcVar5;
   dVar19 = *(double*)( param_2 + 8 );
   dVar15 = *(double*)pcVar4 + dVar14;
   dVar18 = *(double*)( param_2 + 0x18 );
   dVar17 = *(double*)( param_2 + 0x10 );
   dVar16 = *(double*)( param_2 + 0x20 );
   if (*param_2 == (cff1_extents_param_t)0x0) {
      *param_2 = (cff1_extents_param_t)0x1;
      if (dVar10 < dVar19) {
         dVar19 = *(double*)( param_1 + 0x1160 );
         *(double*)( param_2 + 8 ) = dVar19;
         dVar10 = *(double*)( param_1 + 0x1160 );
      }

      if (dVar18 < dVar10) {
         dVar18 = *(double*)( param_1 + 0x1160 );
         *(double*)( param_2 + 0x18 ) = dVar18;
      }

      dVar10 = *(double*)( param_1 + 0x1168 );
      dVar20 = dVar10;
      if (dVar10 < dVar17) {
         *(double*)( param_2 + 0x10 ) = dVar10;
         dVar20 = *(double*)( param_1 + 0x1168 );
         dVar17 = dVar10;
      }

      if (dVar16 < dVar20) {
         dVar16 = *(double*)( param_1 + 0x1168 );
         *(double*)( param_2 + 0x20 ) = dVar16;
      }

   }

   if (dVar12 < dVar19) {
      *(double*)( param_2 + 8 ) = dVar12;
      dVar19 = dVar12;
   }

   if (dVar18 < dVar12) {
      *(double*)( param_2 + 0x18 ) = dVar12;
      dVar18 = dVar12;
   }

   if (dVar11 < dVar17) {
      *(double*)( param_2 + 0x10 ) = dVar11;
      dVar17 = dVar11;
   }

   if (dVar16 < dVar11) {
      *(double*)( param_2 + 0x20 ) = dVar11;
      dVar16 = dVar11;
   }

   if (dVar14 < dVar19) {
      *(double*)( param_2 + 8 ) = dVar14;
   }

   if (dVar18 < dVar14) {
      *(double*)( param_2 + 0x18 ) = dVar14;
   }

   if (dVar13 < dVar17) {
      *(double*)( param_2 + 0x10 ) = dVar13;
   }

   if (dVar16 < dVar13) {
      *(double*)( param_2 + 0x20 ) = dVar13;
   }

   *(double*)( param_1 + 0x1160 ) = dVar15;
   *(double*)( param_1 + 0x1168 ) = dVar1 + dVar13;
   if (dVar15 < *(double*)( param_2 + 8 )) {
      *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
      dVar15 = *(double*)( param_1 + 0x1160 );
   }

   if (*(double*)( param_2 + 0x18 ) <= dVar15 && dVar15 != *(double*)( param_2 + 0x18 )) {
      *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
   }

   dVar11 = *(double*)( param_1 + 0x1168 );
   if (dVar11 < *(double*)( param_2 + 0x10 )) {
      *(double*)( param_2 + 0x10 ) = dVar11;
      dVar11 = *(double*)( param_1 + 0x1168 );
   }

   if (*(double*)( param_2 + 0x20 ) <= dVar11 && dVar11 != *(double*)( param_2 + 0x20 )) {
      *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::hhcurveto(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::hhcurveto(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   uint uVar1;
   double dVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   cff1_cs_interp_env_t *pcVar6;
   cff1_cs_interp_env_t *pcVar7;
   cff1_cs_interp_env_t *pcVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   uVar3 = *(uint*)( param_1 + 0x14 );
   dVar10 = *(double*)( param_1 + 0x1160 );
   dVar9 = *(double*)( param_1 + 0x1168 );
   uVar5 = 4;
   if (( uVar3 & 1 ) != 0) {
      dVar9 = dVar9 + *(double*)( param_1 + 0x18 );
      uVar5 = 5;
   }

   uVar4 = uVar3 & 1;
   if (uVar5 <= uVar3) {
      do {
         pcVar7 = param_1 + (ulong)uVar4 * 8 + 0x18;
         if (uVar3 <= uVar4) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar7 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         dVar10 = dVar10 + *(double*)pcVar7;
         pcVar7 = param_1 + ( ulong )(uVar4 + 2) * 8 + 0x18;
         if (uVar3 <= uVar4 + 2) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar7 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         pcVar8 = param_1 + ( ulong )(uVar4 + 1) * 8 + 0x18;
         if (uVar3 <= uVar4 + 1) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar8 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         pcVar6 = param_1 + ( ulong )(uVar4 + 3) * 8 + 0x18;
         dVar12 = *(double*)pcVar8 + dVar10;
         dVar11 = *(double*)pcVar7 + dVar9;
         if (uVar3 <= uVar4 + 3) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         dVar16 = *(double*)( param_2 + 8 );
         dVar15 = *(double*)( param_2 + 0x18 );
         dVar17 = *(double*)pcVar6 + dVar12;
         dVar14 = *(double*)( param_2 + 0x10 );
         dVar13 = *(double*)( param_2 + 0x20 );
         if (*param_2 == (cff1_extents_param_t)0x0) {
            dVar2 = *(double*)( param_1 + 0x1160 );
            *param_2 = (cff1_extents_param_t)0x1;
            dVar18 = dVar2;
            if (dVar2 < dVar16) {
               *(double*)( param_2 + 8 ) = dVar2;
               dVar18 = *(double*)( param_1 + 0x1160 );
               dVar16 = dVar2;
            }

            if (dVar15 < dVar18) {
               dVar15 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar15;
            }

            dVar2 = *(double*)( param_1 + 0x1168 );
            dVar18 = dVar2;
            if (dVar2 < dVar14) {
               *(double*)( param_2 + 0x10 ) = dVar2;
               dVar18 = *(double*)( param_1 + 0x1168 );
               dVar14 = dVar2;
            }

            if (dVar13 < dVar18) {
               dVar13 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar13;
            }

         }

         if (dVar10 < dVar16) {
            *(double*)( param_2 + 8 ) = dVar10;
            dVar16 = dVar10;
         }

         if (dVar15 < dVar10) {
            *(double*)( param_2 + 0x18 ) = dVar10;
            dVar15 = dVar10;
         }

         if (dVar9 < dVar14) {
            *(double*)( param_2 + 0x10 ) = dVar9;
            dVar14 = dVar9;
         }

         if (dVar13 < dVar9) {
            *(double*)( param_2 + 0x20 ) = dVar9;
            dVar13 = dVar9;
         }

         if (dVar12 < dVar16) {
            *(double*)( param_2 + 8 ) = dVar12;
         }

         if (dVar15 < dVar12) {
            *(double*)( param_2 + 0x18 ) = dVar12;
         }

         if (dVar11 < dVar14) {
            *(double*)( param_2 + 0x10 ) = dVar11;
         }

         if (dVar13 < dVar11) {
            *(double*)( param_2 + 0x20 ) = dVar11;
         }

         *(double*)( param_1 + 0x1160 ) = dVar17;
         *(double*)( param_1 + 0x1168 ) = dVar11;
         if (dVar17 < *(double*)( param_2 + 8 )) {
            *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
            dVar17 = *(double*)( param_1 + 0x1160 );
         }

         if (*(double*)( param_2 + 0x18 ) <= dVar17 && dVar17 != *(double*)( param_2 + 0x18 )) {
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
         }

         dVar9 = *(double*)( param_1 + 0x1168 );
         if (dVar9 < *(double*)( param_2 + 0x10 )) {
            *(double*)( param_2 + 0x10 ) = dVar9;
            dVar9 = *(double*)( param_1 + 0x1168 );
         }

         if (*(double*)( param_2 + 0x20 ) <= dVar9 && dVar9 != *(double*)( param_2 + 0x20 )) {
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            dVar9 = *(double*)( param_1 + 0x1168 );
         }

         uVar1 = uVar5 + 4;
         dVar10 = *(double*)( param_1 + 0x1160 );
         uVar4 = uVar5;
         uVar5 = uVar1;
      }
 while ( uVar1 <= uVar3 );
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::vhcurveto(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::vhcurveto(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   cff1_cs_interp_env_t *pcVar11;
   cff1_cs_interp_env_t *pcVar12;
   cff1_cs_interp_env_t *pcVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   double dVar25;
   uVar1 = *(uint*)( param_1 + 0x14 );
   if (( uVar1 & 4 ) == 0) {
      if (7 < uVar1) {
         uVar3 = 1;
         uVar2 = 3;
         uVar10 = 4;
         uVar9 = 6;
         uVar8 = 5;
         uVar7 = 7;
         uVar6 = 8;
         uVar5 = 0;
         do {
            dVar15 = *(double*)( param_1 + 0x1160 );
            pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
            if (uVar1 <= uVar5) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar17 = *(double*)( param_1 + 0x1168 ) + *(double*)pcVar12;
            pcVar12 = param_1 + ( ulong )(uVar6 - 6) * 8 + 0x18;
            if (uVar1 <= uVar6 - 6) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar3 * 8 + 0x18;
            if (uVar1 <= uVar3) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
            dVar20 = *(double*)pcVar13 + dVar15;
            dVar16 = *(double*)pcVar12 + dVar17;
            if (uVar1 <= uVar2) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar23 = *(double*)( param_2 + 8 );
            dVar21 = *(double*)( param_2 + 0x18 );
            dVar14 = *(double*)pcVar11 + dVar20;
            dVar24 = *(double*)( param_2 + 0x10 );
            dVar18 = *(double*)( param_2 + 0x20 );
            if (*param_2 == (cff1_extents_param_t)0x0) {
               *param_2 = (cff1_extents_param_t)0x1;
               dVar25 = dVar15;
               if (dVar15 < dVar23) {
                  dVar23 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 8 ) = dVar23;
                  dVar25 = *(double*)( param_1 + 0x1160 );
               }

               if (dVar21 < dVar25) {
                  dVar21 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar21;
               }

               dVar25 = *(double*)( param_1 + 0x1168 );
               dVar22 = dVar25;
               if (dVar25 < dVar24) {
                  *(double*)( param_2 + 0x10 ) = dVar25;
                  dVar22 = *(double*)( param_1 + 0x1168 );
                  dVar24 = dVar25;
               }

               if (dVar18 < dVar22) {
                  dVar18 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar18;
               }

            }

            if (dVar15 < dVar23) {
               *(double*)( param_2 + 8 ) = dVar15;
               dVar23 = dVar15;
            }

            if (dVar21 < dVar15) {
               *(double*)( param_2 + 0x18 ) = dVar15;
               dVar21 = dVar15;
            }

            if (dVar17 < dVar24) {
               *(double*)( param_2 + 0x10 ) = dVar17;
               dVar24 = dVar17;
            }

            if (dVar18 < dVar17) {
               *(double*)( param_2 + 0x20 ) = dVar17;
               dVar18 = dVar17;
            }

            if (dVar20 < dVar23) {
               *(double*)( param_2 + 8 ) = dVar20;
            }

            if (dVar21 < dVar20) {
               *(double*)( param_2 + 0x18 ) = dVar20;
            }

            if (dVar16 < dVar24) {
               *(double*)( param_2 + 0x10 ) = dVar16;
            }

            if (dVar18 < dVar16) {
               *(double*)( param_2 + 0x20 ) = dVar16;
            }

            *(double*)( param_1 + 0x1160 ) = dVar14;
            *(double*)( param_1 + 0x1168 ) = dVar16;
            dVar15 = *(double*)( param_2 + 8 );
            dVar17 = dVar14;
            if (dVar14 < dVar15) {
               dVar15 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 8 ) = dVar15;
               dVar17 = *(double*)( param_1 + 0x1160 );
            }

            dVar20 = *(double*)( param_2 + 0x18 );
            if (dVar20 < dVar17) {
               dVar20 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar20;
            }

            dVar17 = *(double*)( param_1 + 0x1168 );
            dVar23 = dVar17;
            dVar21 = *(double*)( param_2 + 0x10 );
            if (dVar17 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar17;
               dVar23 = *(double*)( param_1 + 0x1168 );
               dVar21 = dVar17;
            }

            dVar17 = *(double*)( param_2 + 0x20 );
            if (dVar17 < dVar23) {
               dVar17 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar17;
            }

            pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
            if (uVar1 <= uVar10) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar14 = dVar14 + *(double*)pcVar12;
            pcVar12 = param_1 + (ulong)uVar9 * 8 + 0x18;
            if (uVar1 <= uVar9) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar8 * 8 + 0x18;
            if (uVar1 <= uVar8) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar7 * 8 + 0x18;
            dVar23 = *(double*)pcVar13 + dVar14;
            dVar24 = *(double*)pcVar12 + dVar16;
            if (uVar1 <= uVar7) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar18 = *(double*)pcVar11;
            dVar25 = dVar23;
            if (( uVar1 - uVar5 < 0x10 ) && ( ( uVar1 & 1 ) != 0 )) {
               pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
               if (uVar1 <= uVar6) {
                  __hb_CrapPool = __hb_NullPool;
                  param_1[0x10] = (cff1_cs_interp_env_t)0x1;
                  pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
               }

               dVar25 = *(double*)pcVar12 + dVar23;
            }

            if (*param_2 == (cff1_extents_param_t)0x0) {
               dVar22 = *(double*)( param_1 + 0x1160 );
               *param_2 = (cff1_extents_param_t)0x1;
               dVar19 = dVar22;
               if (dVar22 < dVar15) {
                  *(double*)( param_2 + 8 ) = dVar22;
                  dVar19 = *(double*)( param_1 + 0x1160 );
                  dVar15 = dVar22;
               }

               if (dVar20 < dVar19) {
                  dVar20 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar20;
               }

               dVar22 = *(double*)( param_1 + 0x1168 );
               dVar19 = dVar22;
               if (dVar22 < dVar21) {
                  *(double*)( param_2 + 0x10 ) = dVar22;
                  dVar19 = *(double*)( param_1 + 0x1168 );
                  dVar21 = dVar22;
               }

               if (dVar17 < dVar19) {
                  dVar17 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar17;
               }

            }

            if (dVar14 < dVar15) {
               *(double*)( param_2 + 8 ) = dVar14;
               dVar15 = dVar14;
            }

            if (dVar20 < dVar14) {
               *(double*)( param_2 + 0x18 ) = dVar14;
               dVar20 = dVar14;
            }

            if (dVar16 < dVar21) {
               *(double*)( param_2 + 0x10 ) = dVar16;
               dVar21 = dVar16;
            }

            if (dVar17 < dVar16) {
               *(double*)( param_2 + 0x20 ) = dVar16;
               dVar17 = dVar16;
            }

            if (dVar23 < dVar15) {
               *(double*)( param_2 + 8 ) = dVar23;
            }

            if (dVar20 < dVar23) {
               *(double*)( param_2 + 0x18 ) = dVar23;
            }

            if (dVar24 < dVar21) {
               *(double*)( param_2 + 0x10 ) = dVar24;
            }

            if (dVar17 < dVar24) {
               *(double*)( param_2 + 0x20 ) = dVar24;
            }

            *(double*)( param_1 + 0x1160 ) = dVar25;
            *(double*)( param_1 + 0x1168 ) = dVar18 + dVar24;
            if (dVar25 < *(double*)( param_2 + 8 )) {
               *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
               dVar25 = *(double*)( param_1 + 0x1160 );
            }

            if (*(double*)( param_2 + 0x18 ) <= dVar25 && dVar25 != *(double*)( param_2 + 0x18 )) {
               *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
            }

            dVar15 = *(double*)( param_1 + 0x1168 );
            if (dVar15 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar15;
               dVar15 = *(double*)( param_1 + 0x1168 );
            }

            if (*(double*)( param_2 + 0x20 ) <= dVar15 && dVar15 != *(double*)( param_2 + 0x20 )) {
               *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            }

            uVar6 = uVar6 + 8;
            uVar5 = uVar5 + 8;
            uVar7 = uVar7 + 8;
            uVar8 = uVar8 + 8;
            uVar9 = uVar9 + 8;
            uVar10 = uVar10 + 8;
            uVar2 = uVar2 + 8;
            uVar3 = uVar3 + 8;
         }
 while ( uVar6 <= uVar1 );
      }

   }
 else {
      dVar15 = *(double*)( param_1 + 0x1160 );
      dVar18 = *(double*)( param_1 + 0x20 ) + *(double*)( param_1 + 0x1160 );
      dVar24 = *(double*)( param_1 + 0x18 ) + *(double*)( param_1 + 0x1168 );
      dVar17 = *(double*)( param_2 + 0x10 );
      dVar16 = *(double*)( param_2 + 8 );
      dVar21 = *(double*)( param_1 + 0x30 ) + dVar18;
      dVar14 = *(double*)( param_1 + 0x28 ) + dVar24;
      dVar20 = *(double*)( param_2 + 0x20 );
      dVar23 = *(double*)( param_2 + 0x18 );
      if (uVar1 < 0xc) {
         uVar4 = 4;
      }
 else {
         uVar5 = 6;
         uVar9 = 5;
         uVar8 = 7;
         uVar7 = 8;
         uVar6 = 10;
         uVar3 = 9;
         uVar2 = 0xb;
         uVar4 = 0xc;
         while (true) {
            uVar10 = (int)uVar4 - 8;
            if (*param_2 == (cff1_extents_param_t)0x0) {
               dVar25 = *(double*)( param_1 + 0x1160 );
               *param_2 = (cff1_extents_param_t)0x1;
               dVar22 = dVar25;
               if (dVar25 < dVar16) {
                  *(double*)( param_2 + 8 ) = dVar25;
                  dVar22 = *(double*)( param_1 + 0x1160 );
                  dVar16 = dVar25;
               }

               if (dVar23 < dVar22) {
                  dVar23 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar23;
               }

               dVar25 = *(double*)( param_1 + 0x1168 );
               dVar22 = dVar25;
               if (dVar25 < dVar17) {
                  *(double*)( param_2 + 0x10 ) = dVar25;
                  dVar22 = *(double*)( param_1 + 0x1168 );
                  dVar17 = dVar25;
               }

               if (dVar20 < dVar22) {
                  dVar20 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar20;
               }

            }

            if (dVar15 < dVar16) {
               *(double*)( param_2 + 8 ) = dVar15;
               dVar16 = dVar15;
            }

            if (dVar23 < dVar15) {
               *(double*)( param_2 + 0x18 ) = dVar15;
               dVar23 = dVar15;
            }

            if (dVar24 < dVar17) {
               *(double*)( param_2 + 0x10 ) = dVar24;
               dVar17 = dVar24;
            }

            if (dVar20 < dVar24) {
               *(double*)( param_2 + 0x20 ) = dVar24;
               dVar20 = dVar24;
            }

            if (dVar18 < dVar16) {
               *(double*)( param_2 + 8 ) = dVar18;
            }

            if (dVar23 < dVar18) {
               *(double*)( param_2 + 0x18 ) = dVar18;
            }

            if (dVar14 < dVar17) {
               *(double*)( param_2 + 0x10 ) = dVar14;
            }

            if (dVar20 < dVar14) {
               *(double*)( param_2 + 0x20 ) = dVar14;
            }

            *(double*)( param_1 + 0x1160 ) = dVar21;
            *(double*)( param_1 + 0x1168 ) = dVar14;
            dVar17 = *(double*)( param_2 + 8 );
            if (dVar21 < dVar17) {
               dVar17 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 8 ) = dVar17;
               dVar21 = *(double*)( param_1 + 0x1160 );
            }

            dVar16 = *(double*)( param_2 + 0x18 );
            if (dVar16 < dVar21) {
               dVar16 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar16;
            }

            dVar15 = *(double*)( param_1 + 0x1168 );
            dVar20 = dVar15;
            dVar23 = *(double*)( param_2 + 0x10 );
            if (dVar15 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar15;
               dVar20 = *(double*)( param_1 + 0x1168 );
               dVar23 = dVar15;
            }

            dVar21 = *(double*)( param_2 + 0x20 );
            if (dVar21 < dVar20) {
               dVar21 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar21;
               dVar20 = *(double*)( param_1 + 0x1168 );
            }

            dVar24 = *(double*)( param_1 + 0x1160 );
            pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
            if (uVar1 <= uVar10) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar5 * 8 + 0x18;
            dVar18 = *(double*)pcVar12 + dVar24;
            if (uVar1 <= uVar5) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar12 = param_1 + (ulong)uVar9 * 8 + 0x18;
            if (uVar1 <= uVar9) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar8 * 8 + 0x18;
            dVar15 = *(double*)pcVar12 + dVar18;
            dVar14 = *(double*)pcVar13 + dVar20;
            if (uVar1 <= uVar8) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar25 = *(double*)pcVar11;
            if (*param_2 == (cff1_extents_param_t)0x0) {
               *param_2 = (cff1_extents_param_t)0x1;
               if (dVar24 < dVar17) {
                  dVar17 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 8 ) = dVar17;
                  dVar24 = *(double*)( param_1 + 0x1160 );
               }

               if (dVar16 < dVar24) {
                  dVar16 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar16;
               }

               dVar24 = *(double*)( param_1 + 0x1168 );
               dVar22 = dVar24;
               if (dVar24 < dVar23) {
                  *(double*)( param_2 + 0x10 ) = dVar24;
                  dVar22 = *(double*)( param_1 + 0x1168 );
                  dVar23 = dVar24;
               }

               if (dVar21 < dVar22) {
                  dVar21 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar21;
               }

            }

            if (dVar18 < dVar17) {
               *(double*)( param_2 + 8 ) = dVar18;
               dVar17 = dVar18;
            }

            if (dVar16 < dVar18) {
               *(double*)( param_2 + 0x18 ) = dVar18;
               dVar16 = dVar18;
            }

            if (dVar20 < dVar23) {
               *(double*)( param_2 + 0x10 ) = dVar20;
               dVar23 = dVar20;
            }

            if (dVar21 < dVar20) {
               *(double*)( param_2 + 0x20 ) = dVar20;
               dVar21 = dVar20;
            }

            if (dVar15 < dVar17) {
               *(double*)( param_2 + 8 ) = dVar15;
            }

            if (dVar16 < dVar15) {
               *(double*)( param_2 + 0x18 ) = dVar15;
            }

            if (dVar14 < dVar23) {
               *(double*)( param_2 + 0x10 ) = dVar14;
            }

            if (dVar21 < dVar14) {
               *(double*)( param_2 + 0x20 ) = dVar14;
            }

            *(double*)( param_1 + 0x1160 ) = dVar15;
            *(double*)( param_1 + 0x1168 ) = dVar25 + dVar14;
            dVar16 = *(double*)( param_2 + 8 );
            dVar17 = dVar15;
            if (dVar15 < dVar16) {
               dVar16 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 8 ) = dVar16;
               dVar17 = *(double*)( param_1 + 0x1160 );
            }

            dVar23 = *(double*)( param_2 + 0x18 );
            if (dVar23 < dVar17) {
               dVar23 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar23;
            }

            dVar20 = *(double*)( param_1 + 0x1168 );
            dVar21 = dVar20;
            dVar17 = *(double*)( param_2 + 0x10 );
            if (dVar20 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar20;
               dVar21 = *(double*)( param_1 + 0x1168 );
               dVar17 = dVar20;
            }

            dVar20 = *(double*)( param_2 + 0x20 );
            if (dVar20 < dVar21) {
               dVar20 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar20;
            }

            pcVar12 = param_1 + (ulong)uVar7 * 8 + 0x18;
            if (uVar1 <= uVar7) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar24 = dVar25 + dVar14 + *(double*)pcVar12;
            pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
            if (uVar1 <= uVar6) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar3 * 8 + 0x18;
            if (uVar1 <= uVar3) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
            dVar18 = *(double*)pcVar13 + dVar15;
            dVar14 = *(double*)pcVar12 + dVar24;
            if (uVar1 <= uVar2) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            uVar10 = (int)uVar4 + 8;
            uVar2 = uVar2 + 8;
            uVar3 = uVar3 + 8;
            uVar6 = uVar6 + 8;
            uVar7 = uVar7 + 8;
            uVar8 = uVar8 + 8;
            uVar9 = uVar9 + 8;
            dVar21 = *(double*)pcVar11 + dVar18;
            uVar5 = uVar5 + 8;
            if (uVar1 < uVar10) break;
            uVar4 = (ulong)uVar10;
         }
;
      }

      dVar25 = dVar14;
      if ((uint)uVar4 < uVar1) {
         dVar25 = dVar14 + *(double*)( param_1 + uVar4 * 8 + 0x18 );
      }

      if (*param_2 == (cff1_extents_param_t)0x0) {
         dVar22 = *(double*)( param_1 + 0x1160 );
         *param_2 = (cff1_extents_param_t)0x1;
         dVar19 = dVar22;
         if (dVar22 < dVar16) {
            *(double*)( param_2 + 8 ) = dVar22;
            dVar19 = *(double*)( param_1 + 0x1160 );
            dVar16 = dVar22;
         }

         if (dVar23 < dVar19) {
            dVar23 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 0x18 ) = dVar23;
         }

         dVar22 = *(double*)( param_1 + 0x1168 );
         dVar19 = dVar22;
         if (dVar22 < dVar17) {
            *(double*)( param_2 + 0x10 ) = dVar22;
            dVar19 = *(double*)( param_1 + 0x1168 );
            dVar17 = dVar22;
         }

         if (dVar20 < dVar19) {
            dVar20 = *(double*)( param_1 + 0x1168 );
            *(double*)( param_2 + 0x20 ) = dVar20;
         }

      }

      if (dVar15 < dVar16) {
         *(double*)( param_2 + 8 ) = dVar15;
         dVar16 = dVar15;
      }

      if (dVar23 < dVar15) {
         *(double*)( param_2 + 0x18 ) = dVar15;
         dVar23 = dVar15;
      }

      if (dVar24 < dVar17) {
         *(double*)( param_2 + 0x10 ) = dVar24;
         dVar17 = dVar24;
      }

      if (dVar20 < dVar24) {
         *(double*)( param_2 + 0x20 ) = dVar24;
         dVar20 = dVar24;
      }

      if (dVar18 < dVar16) {
         *(double*)( param_2 + 8 ) = dVar18;
      }

      if (dVar23 < dVar18) {
         *(double*)( param_2 + 0x18 ) = dVar18;
      }

      if (dVar14 < dVar17) {
         *(double*)( param_2 + 0x10 ) = dVar14;
      }

      if (dVar20 < dVar14) {
         *(double*)( param_2 + 0x20 ) = dVar14;
      }

      *(double*)( param_1 + 0x1160 ) = dVar21;
      *(double*)( param_1 + 0x1168 ) = dVar25;
      if (dVar21 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar21 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar21 && dVar21 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar15 = *(double*)( param_1 + 0x1168 );
      if (dVar15 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar15;
         dVar15 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar15 && dVar15 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::hvcurveto(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::hvcurveto(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   cff1_cs_interp_env_t *pcVar11;
   cff1_cs_interp_env_t *pcVar12;
   cff1_cs_interp_env_t *pcVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   double dVar25;
   uVar1 = *(uint*)( param_1 + 0x14 );
   if (( uVar1 & 4 ) == 0) {
      if (7 < uVar1) {
         uVar3 = 1;
         uVar2 = 3;
         uVar10 = 4;
         uVar9 = 6;
         uVar8 = 5;
         uVar7 = 7;
         uVar6 = 8;
         uVar5 = 0;
         do {
            dVar17 = *(double*)( param_1 + 0x1168 );
            dVar15 = *(double*)( param_1 + 0x1160 );
            pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
            if (uVar1 <= uVar5) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + ( ulong )(uVar6 - 6) * 8 + 0x18;
            dVar20 = *(double*)pcVar12 + dVar15;
            if (uVar1 <= uVar6 - 6) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar12 = param_1 + (ulong)uVar3 * 8 + 0x18;
            if (uVar1 <= uVar3) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
            dVar14 = *(double*)pcVar12 + dVar20;
            dVar21 = *(double*)pcVar13 + dVar17;
            if (uVar1 <= uVar2) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar23 = *(double*)pcVar11;
            dVar24 = *(double*)( param_2 + 8 );
            dVar16 = *(double*)( param_2 + 0x18 );
            dVar25 = *(double*)( param_2 + 0x10 );
            dVar18 = *(double*)( param_2 + 0x20 );
            if (*param_2 == (cff1_extents_param_t)0x0) {
               *param_2 = (cff1_extents_param_t)0x1;
               if (dVar15 < dVar24) {
                  dVar24 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 8 ) = dVar24;
                  dVar15 = *(double*)( param_1 + 0x1160 );
               }

               if (dVar16 < dVar15) {
                  dVar16 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar16;
               }

               dVar15 = *(double*)( param_1 + 0x1168 );
               dVar22 = dVar15;
               if (dVar15 < dVar25) {
                  *(double*)( param_2 + 0x10 ) = dVar15;
                  dVar22 = *(double*)( param_1 + 0x1168 );
                  dVar25 = dVar15;
               }

               if (dVar18 < dVar22) {
                  dVar18 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar18;
               }

            }

            if (dVar20 < dVar24) {
               *(double*)( param_2 + 8 ) = dVar20;
               dVar24 = dVar20;
            }

            if (dVar16 < dVar20) {
               *(double*)( param_2 + 0x18 ) = dVar20;
               dVar16 = dVar20;
            }

            if (dVar17 < dVar25) {
               *(double*)( param_2 + 0x10 ) = dVar17;
               dVar25 = dVar17;
            }

            if (dVar18 < dVar17) {
               *(double*)( param_2 + 0x20 ) = dVar17;
               dVar18 = dVar17;
            }

            if (dVar14 < dVar24) {
               *(double*)( param_2 + 8 ) = dVar14;
            }

            if (dVar16 < dVar14) {
               *(double*)( param_2 + 0x18 ) = dVar14;
            }

            if (dVar21 < dVar25) {
               *(double*)( param_2 + 0x10 ) = dVar21;
            }

            if (dVar18 < dVar21) {
               *(double*)( param_2 + 0x20 ) = dVar21;
            }

            *(double*)( param_1 + 0x1160 ) = dVar14;
            *(double*)( param_1 + 0x1168 ) = dVar23 + dVar21;
            dVar17 = *(double*)( param_2 + 8 );
            dVar15 = dVar14;
            if (dVar14 < dVar17) {
               dVar17 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 8 ) = dVar17;
               dVar15 = *(double*)( param_1 + 0x1160 );
            }

            dVar20 = *(double*)( param_2 + 0x18 );
            if (dVar20 < dVar15) {
               dVar20 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar20;
            }

            dVar15 = *(double*)( param_1 + 0x1168 );
            dVar24 = dVar15;
            dVar16 = *(double*)( param_2 + 0x10 );
            if (dVar15 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar15;
               dVar24 = *(double*)( param_1 + 0x1168 );
               dVar16 = dVar15;
            }

            dVar15 = *(double*)( param_2 + 0x20 );
            if (dVar15 < dVar24) {
               dVar15 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar15;
            }

            pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
            if (uVar1 <= uVar10) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar21 = dVar23 + dVar21 + *(double*)pcVar12;
            pcVar12 = param_1 + (ulong)uVar9 * 8 + 0x18;
            if (uVar1 <= uVar9) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar8 * 8 + 0x18;
            if (uVar1 <= uVar8) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar7 * 8 + 0x18;
            dVar24 = *(double*)pcVar13 + dVar14;
            dVar23 = *(double*)pcVar12 + dVar21;
            if (uVar1 <= uVar7) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar25 = *(double*)pcVar11 + dVar24;
            dVar18 = dVar23;
            if (( uVar1 - uVar5 < 0x10 ) && ( ( uVar1 & 1 ) != 0 )) {
               pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
               if (uVar1 <= uVar6) {
                  __hb_CrapPool = __hb_NullPool;
                  param_1[0x10] = (cff1_cs_interp_env_t)0x1;
                  pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
               }

               dVar18 = *(double*)pcVar12 + dVar23;
            }

            if (*param_2 == (cff1_extents_param_t)0x0) {
               dVar22 = *(double*)( param_1 + 0x1160 );
               *param_2 = (cff1_extents_param_t)0x1;
               dVar19 = dVar22;
               if (dVar22 < dVar17) {
                  *(double*)( param_2 + 8 ) = dVar22;
                  dVar19 = *(double*)( param_1 + 0x1160 );
                  dVar17 = dVar22;
               }

               if (dVar20 < dVar19) {
                  dVar20 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar20;
               }

               dVar22 = *(double*)( param_1 + 0x1168 );
               dVar19 = dVar22;
               if (dVar22 < dVar16) {
                  *(double*)( param_2 + 0x10 ) = dVar22;
                  dVar19 = *(double*)( param_1 + 0x1168 );
                  dVar16 = dVar22;
               }

               if (dVar15 < dVar19) {
                  dVar15 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar15;
               }

            }

            if (dVar14 < dVar17) {
               *(double*)( param_2 + 8 ) = dVar14;
               dVar17 = dVar14;
            }

            if (dVar20 < dVar14) {
               *(double*)( param_2 + 0x18 ) = dVar14;
               dVar20 = dVar14;
            }

            if (dVar21 < dVar16) {
               *(double*)( param_2 + 0x10 ) = dVar21;
               dVar16 = dVar21;
            }

            if (dVar15 < dVar21) {
               *(double*)( param_2 + 0x20 ) = dVar21;
               dVar15 = dVar21;
            }

            if (dVar24 < dVar17) {
               *(double*)( param_2 + 8 ) = dVar24;
            }

            if (dVar20 < dVar24) {
               *(double*)( param_2 + 0x18 ) = dVar24;
            }

            if (dVar23 < dVar16) {
               *(double*)( param_2 + 0x10 ) = dVar23;
            }

            if (dVar15 < dVar23) {
               *(double*)( param_2 + 0x20 ) = dVar23;
            }

            *(double*)( param_1 + 0x1160 ) = dVar25;
            *(double*)( param_1 + 0x1168 ) = dVar18;
            if (dVar25 < *(double*)( param_2 + 8 )) {
               *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
               dVar25 = *(double*)( param_1 + 0x1160 );
            }

            if (*(double*)( param_2 + 0x18 ) <= dVar25 && dVar25 != *(double*)( param_2 + 0x18 )) {
               *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
            }

            dVar17 = *(double*)( param_1 + 0x1168 );
            if (dVar17 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar17;
               dVar17 = *(double*)( param_1 + 0x1168 );
            }

            if (*(double*)( param_2 + 0x20 ) <= dVar17 && dVar17 != *(double*)( param_2 + 0x20 )) {
               *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
            }

            uVar6 = uVar6 + 8;
            uVar5 = uVar5 + 8;
            uVar7 = uVar7 + 8;
            uVar8 = uVar8 + 8;
            uVar9 = uVar9 + 8;
            uVar10 = uVar10 + 8;
            uVar2 = uVar2 + 8;
            uVar3 = uVar3 + 8;
         }
 while ( uVar6 <= uVar1 );
      }

   }
 else {
      dVar17 = *(double*)( param_1 + 0x1168 );
      dVar15 = *(double*)( param_2 + 0x10 );
      dVar24 = *(double*)( param_1 + 0x18 ) + *(double*)( param_1 + 0x1160 );
      dVar16 = *(double*)( param_1 + 0x28 ) + *(double*)( param_1 + 0x1168 );
      dVar20 = *(double*)( param_2 + 0x18 );
      dVar14 = *(double*)( param_2 + 8 );
      dVar23 = *(double*)( param_1 + 0x20 ) + dVar24;
      dVar25 = *(double*)( param_1 + 0x30 ) + dVar16;
      dVar21 = *(double*)( param_2 + 0x20 );
      if (uVar1 < 0xc) {
         uVar4 = 4;
      }
 else {
         uVar5 = 6;
         uVar9 = 5;
         uVar8 = 7;
         uVar7 = 8;
         uVar6 = 10;
         uVar3 = 9;
         uVar2 = 0xb;
         uVar4 = 0xc;
         while (true) {
            uVar10 = (int)uVar4 - 8;
            if (*param_2 == (cff1_extents_param_t)0x0) {
               dVar18 = *(double*)( param_1 + 0x1160 );
               *param_2 = (cff1_extents_param_t)0x1;
               dVar22 = dVar18;
               if (dVar18 < dVar14) {
                  *(double*)( param_2 + 8 ) = dVar18;
                  dVar22 = *(double*)( param_1 + 0x1160 );
                  dVar14 = dVar18;
               }

               if (dVar20 < dVar22) {
                  dVar20 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar20;
               }

               dVar18 = *(double*)( param_1 + 0x1168 );
               dVar22 = dVar18;
               if (dVar18 < dVar15) {
                  *(double*)( param_2 + 0x10 ) = dVar18;
                  dVar22 = *(double*)( param_1 + 0x1168 );
                  dVar15 = dVar18;
               }

               if (dVar21 < dVar22) {
                  dVar21 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar21;
               }

            }

            if (dVar24 < dVar14) {
               *(double*)( param_2 + 8 ) = dVar24;
               dVar14 = dVar24;
            }

            if (dVar20 < dVar24) {
               *(double*)( param_2 + 0x18 ) = dVar24;
               dVar20 = dVar24;
            }

            if (dVar17 < dVar15) {
               *(double*)( param_2 + 0x10 ) = dVar17;
               dVar15 = dVar17;
            }

            if (dVar21 < dVar17) {
               *(double*)( param_2 + 0x20 ) = dVar17;
               dVar21 = dVar17;
            }

            if (dVar23 < dVar14) {
               *(double*)( param_2 + 8 ) = dVar23;
            }

            if (dVar20 < dVar23) {
               *(double*)( param_2 + 0x18 ) = dVar23;
            }

            if (dVar16 < dVar15) {
               *(double*)( param_2 + 0x10 ) = dVar16;
            }

            if (dVar21 < dVar16) {
               *(double*)( param_2 + 0x20 ) = dVar16;
            }

            *(double*)( param_1 + 0x1160 ) = dVar23;
            *(double*)( param_1 + 0x1168 ) = dVar25;
            dVar15 = *(double*)( param_2 + 8 );
            if (dVar23 < dVar15) {
               dVar15 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 8 ) = dVar15;
               dVar23 = *(double*)( param_1 + 0x1160 );
            }

            dVar20 = *(double*)( param_2 + 0x18 );
            if (dVar20 < dVar23) {
               dVar20 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar20;
            }

            dVar17 = *(double*)( param_1 + 0x1168 );
            dVar14 = dVar17;
            dVar21 = *(double*)( param_2 + 0x10 );
            if (dVar17 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar17;
               dVar14 = *(double*)( param_1 + 0x1168 );
               dVar21 = dVar17;
            }

            dVar23 = *(double*)( param_2 + 0x20 );
            if (dVar23 < dVar14) {
               dVar23 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar23;
               dVar14 = *(double*)( param_1 + 0x1168 );
            }

            dVar16 = *(double*)( param_1 + 0x1160 );
            pcVar12 = param_1 + (ulong)uVar10 * 8 + 0x18;
            if (uVar1 <= uVar10) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar14 = dVar14 + *(double*)pcVar12;
            pcVar12 = param_1 + (ulong)uVar5 * 8 + 0x18;
            if (uVar1 <= uVar5) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar9 * 8 + 0x18;
            if (uVar1 <= uVar9) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar8 * 8 + 0x18;
            dVar25 = *(double*)pcVar13 + dVar16;
            dVar17 = *(double*)pcVar12 + dVar14;
            if (uVar1 <= uVar8) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar24 = *(double*)pcVar11 + dVar25;
            if (*param_2 == (cff1_extents_param_t)0x0) {
               *param_2 = (cff1_extents_param_t)0x1;
               dVar18 = dVar16;
               if (dVar16 < dVar15) {
                  dVar15 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 8 ) = dVar15;
                  dVar18 = *(double*)( param_1 + 0x1160 );
               }

               if (dVar20 < dVar18) {
                  dVar20 = *(double*)( param_1 + 0x1160 );
                  *(double*)( param_2 + 0x18 ) = dVar20;
               }

               dVar18 = *(double*)( param_1 + 0x1168 );
               dVar22 = dVar18;
               if (dVar18 < dVar21) {
                  *(double*)( param_2 + 0x10 ) = dVar18;
                  dVar22 = *(double*)( param_1 + 0x1168 );
                  dVar21 = dVar18;
               }

               if (dVar23 < dVar22) {
                  dVar23 = *(double*)( param_1 + 0x1168 );
                  *(double*)( param_2 + 0x20 ) = dVar23;
               }

            }

            if (dVar16 < dVar15) {
               *(double*)( param_2 + 8 ) = dVar16;
               dVar15 = dVar16;
            }

            if (dVar20 < dVar16) {
               *(double*)( param_2 + 0x18 ) = dVar16;
               dVar20 = dVar16;
            }

            if (dVar14 < dVar21) {
               *(double*)( param_2 + 0x10 ) = dVar14;
               dVar21 = dVar14;
            }

            if (dVar23 < dVar14) {
               *(double*)( param_2 + 0x20 ) = dVar14;
               dVar23 = dVar14;
            }

            if (dVar25 < dVar15) {
               *(double*)( param_2 + 8 ) = dVar25;
            }

            if (dVar20 < dVar25) {
               *(double*)( param_2 + 0x18 ) = dVar25;
            }

            if (dVar17 < dVar21) {
               *(double*)( param_2 + 0x10 ) = dVar17;
            }

            if (dVar23 < dVar17) {
               *(double*)( param_2 + 0x20 ) = dVar17;
            }

            *(double*)( param_1 + 0x1160 ) = dVar24;
            *(double*)( param_1 + 0x1168 ) = dVar17;
            dVar14 = *(double*)( param_2 + 8 );
            dVar15 = dVar24;
            if (dVar24 < dVar14) {
               dVar14 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 8 ) = dVar14;
               dVar15 = *(double*)( param_1 + 0x1160 );
            }

            dVar20 = *(double*)( param_2 + 0x18 );
            if (dVar20 < dVar15) {
               dVar20 = *(double*)( param_1 + 0x1160 );
               *(double*)( param_2 + 0x18 ) = dVar20;
            }

            dVar21 = *(double*)( param_1 + 0x1168 );
            dVar23 = dVar21;
            dVar15 = *(double*)( param_2 + 0x10 );
            if (dVar21 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dVar21;
               dVar23 = *(double*)( param_1 + 0x1168 );
               dVar15 = dVar21;
            }

            dVar21 = *(double*)( param_2 + 0x20 );
            if (dVar21 < dVar23) {
               dVar21 = *(double*)( param_1 + 0x1168 );
               *(double*)( param_2 + 0x20 ) = dVar21;
            }

            pcVar12 = param_1 + (ulong)uVar7 * 8 + 0x18;
            if (uVar1 <= uVar7) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar24 = dVar24 + *(double*)pcVar12;
            pcVar12 = param_1 + (ulong)uVar6 * 8 + 0x18;
            if (uVar1 <= uVar6) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar12 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar13 = param_1 + (ulong)uVar3 * 8 + 0x18;
            if (uVar1 <= uVar3) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar13 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar11 = param_1 + (ulong)uVar2 * 8 + 0x18;
            dVar23 = *(double*)pcVar13 + dVar24;
            dVar16 = *(double*)pcVar12 + dVar17;
            if (uVar1 <= uVar2) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar11 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            uVar2 = uVar2 + 8;
            uVar3 = uVar3 + 8;
            uVar10 = (int)uVar4 + 8;
            uVar6 = uVar6 + 8;
            uVar7 = uVar7 + 8;
            uVar8 = uVar8 + 8;
            dVar25 = *(double*)pcVar11 + dVar16;
            uVar9 = uVar9 + 8;
            uVar5 = uVar5 + 8;
            if (uVar1 < uVar10) break;
            uVar4 = (ulong)uVar10;
         }
;
      }

      dVar18 = dVar23;
      if ((uint)uVar4 < uVar1) {
         dVar18 = dVar23 + *(double*)( param_1 + uVar4 * 8 + 0x18 );
      }

      if (*param_2 == (cff1_extents_param_t)0x0) {
         dVar22 = *(double*)( param_1 + 0x1160 );
         *param_2 = (cff1_extents_param_t)0x1;
         dVar19 = dVar22;
         if (dVar22 < dVar14) {
            *(double*)( param_2 + 8 ) = dVar22;
            dVar19 = *(double*)( param_1 + 0x1160 );
            dVar14 = dVar22;
         }

         if (dVar20 < dVar19) {
            dVar20 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 0x18 ) = dVar20;
         }

         dVar22 = *(double*)( param_1 + 0x1168 );
         dVar19 = dVar22;
         if (dVar22 < dVar15) {
            *(double*)( param_2 + 0x10 ) = dVar22;
            dVar19 = *(double*)( param_1 + 0x1168 );
            dVar15 = dVar22;
         }

         if (dVar21 < dVar19) {
            dVar21 = *(double*)( param_1 + 0x1168 );
            *(double*)( param_2 + 0x20 ) = dVar21;
         }

      }

      if (dVar24 < dVar14) {
         *(double*)( param_2 + 8 ) = dVar24;
         dVar14 = dVar24;
      }

      if (dVar20 < dVar24) {
         *(double*)( param_2 + 0x18 ) = dVar24;
         dVar20 = dVar24;
      }

      if (dVar17 < dVar15) {
         *(double*)( param_2 + 0x10 ) = dVar17;
         dVar15 = dVar17;
      }

      if (dVar21 < dVar17) {
         *(double*)( param_2 + 0x20 ) = dVar17;
         dVar21 = dVar17;
      }

      if (dVar23 < dVar14) {
         *(double*)( param_2 + 8 ) = dVar23;
      }

      if (dVar20 < dVar23) {
         *(double*)( param_2 + 0x18 ) = dVar23;
      }

      if (dVar16 < dVar15) {
         *(double*)( param_2 + 0x10 ) = dVar16;
      }

      if (dVar21 < dVar16) {
         *(double*)( param_2 + 0x20 ) = dVar16;
      }

      *(double*)( param_1 + 0x1160 ) = dVar18;
      *(double*)( param_1 + 0x1168 ) = dVar25;
      if (dVar18 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar18 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar18 && dVar18 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar17 = *(double*)( param_1 + 0x1168 );
      if (dVar17 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar17;
         dVar17 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar17 && dVar17 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
      }

   }

   return;
}
/* CFF::path_procs_t<cff1_path_procs_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t>::flex1(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::flex1(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   cff1_cs_interp_env_t *pcVar1;
   cff1_cs_interp_env_t *pcVar2;
   double dVar3;
   double dVar4;
   double dVar5;
   double dVar6;
   double dVar7;
   double dVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   if (*(int*)( param_1 + 0x14 ) == 0xb) {
      pcVar2 = param_1 + 0x18;
      dVar3 = 0.0;
      dVar4 = 0.0;
      do {
         dVar10 = *(double*)pcVar2;
         pcVar1 = pcVar2 + 8;
         pcVar2 = pcVar2 + 0x10;
         dVar3 = dVar3 + dVar10;
         dVar4 = dVar4 + *(double*)pcVar1;
      }
 while ( pcVar2 != param_1 + 0x68 );
      dVar11 = *(double*)( param_1 + 0x1160 );
      dVar15 = *(double*)( param_1 + 0x1168 );
      dVar17 = *(double*)( param_1 + 0x40 );
      dVar5 = *(double*)( param_1 + 0x18 ) + dVar11;
      dVar8 = *(double*)( param_1 + 0x20 ) + dVar15;
      dVar6 = dVar5 + *(double*)( param_1 + 0x28 );
      dVar9 = dVar8 + *(double*)( param_1 + 0x30 );
      dVar10 = *(double*)( param_1 + 0x38 ) + dVar6;
      dVar12 = *(double*)( param_1 + 0x48 ) + dVar10;
      dVar7 = *(double*)( param_1 + 0x50 ) + dVar17 + dVar9;
      dVar14 = *(double*)( param_1 + 0x58 ) + dVar12;
      dVar13 = *(double*)( param_1 + 0x60 ) + dVar7;
      if ((double)( (ulong)dVar4 & _LC10 ) < (double)( (ulong)dVar3 & _LC10 )) {
         dVar3 = *(double*)( param_1 + 0x68 ) + dVar14;
      }
 else {
         dVar15 = *(double*)( param_1 + 0x68 ) + dVar13;
         dVar3 = dVar11;
      }

      dVar4 = *(double*)( param_2 + 0x10 );
      dVar19 = *(double*)( param_2 + 0x20 );
      dVar16 = *(double*)( param_2 + 8 );
      dVar20 = *(double*)( param_2 + 0x18 );
      if (*param_2 == (cff1_extents_param_t)0x0) {
         *param_2 = (cff1_extents_param_t)0x1;
         if (dVar11 < dVar16) {
            dVar16 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 8 ) = dVar16;
            dVar11 = *(double*)( param_1 + 0x1160 );
         }

         if (dVar20 < dVar11) {
            dVar20 = *(double*)( param_1 + 0x1160 );
            *(double*)( param_2 + 0x18 ) = dVar20;
         }

         dVar11 = *(double*)( param_1 + 0x1168 );
         dVar18 = dVar11;
         if (dVar11 < dVar4) {
            *(double*)( param_2 + 0x10 ) = dVar11;
            dVar18 = *(double*)( param_1 + 0x1168 );
            dVar4 = dVar11;
         }

         if (dVar19 < dVar18) {
            dVar19 = *(double*)( param_1 + 0x1168 );
            *(double*)( param_2 + 0x20 ) = dVar19;
         }

      }

      if (dVar5 < dVar16) {
         *(double*)( param_2 + 8 ) = dVar5;
         dVar16 = dVar5;
      }

      if (dVar20 < dVar5) {
         *(double*)( param_2 + 0x18 ) = dVar5;
         dVar20 = dVar5;
      }

      if (dVar8 < dVar4) {
         *(double*)( param_2 + 0x10 ) = dVar8;
         dVar4 = dVar8;
      }

      if (dVar19 < dVar8) {
         *(double*)( param_2 + 0x20 ) = dVar8;
         dVar19 = dVar8;
      }

      if (dVar6 < dVar16) {
         *(double*)( param_2 + 8 ) = dVar6;
      }

      if (dVar20 < dVar6) {
         *(double*)( param_2 + 0x18 ) = dVar6;
      }

      if (dVar9 < dVar4) {
         *(double*)( param_2 + 0x10 ) = dVar9;
      }

      if (dVar19 < dVar9) {
         *(double*)( param_2 + 0x20 ) = dVar9;
      }

      *(double*)( param_1 + 0x1160 ) = dVar10;
      *(double*)( param_1 + 0x1168 ) = dVar17 + dVar9;
      dVar4 = *(double*)( param_2 + 8 );
      if (dVar10 < dVar4) {
         dVar4 = *(double*)( param_1 + 0x1160 );
         *(double*)( param_2 + 8 ) = dVar4;
         dVar10 = *(double*)( param_1 + 0x1160 );
      }

      dVar11 = *(double*)( param_2 + 0x18 );
      if (dVar11 < dVar10) {
         dVar11 = *(double*)( param_1 + 0x1160 );
         *(double*)( param_2 + 0x18 ) = dVar11;
      }

      dVar10 = *(double*)( param_1 + 0x1168 );
      dVar5 = *(double*)( param_2 + 0x10 );
      dVar17 = dVar10;
      if (dVar10 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar10;
         dVar17 = *(double*)( param_1 + 0x1168 );
         dVar5 = dVar10;
      }

      dVar10 = *(double*)( param_2 + 0x20 );
      if (dVar10 < dVar17) {
         dVar10 = *(double*)( param_1 + 0x1168 );
         *(double*)( param_2 + 0x20 ) = dVar10;
      }

      if (dVar12 < dVar4) {
         *(double*)( param_2 + 8 ) = dVar12;
         dVar4 = dVar12;
      }

      if (dVar11 < dVar12) {
         *(double*)( param_2 + 0x18 ) = dVar12;
         dVar11 = dVar12;
      }

      if (dVar7 < dVar5) {
         *(double*)( param_2 + 0x10 ) = dVar7;
         dVar5 = dVar7;
      }

      if (dVar10 < dVar7) {
         *(double*)( param_2 + 0x20 ) = dVar7;
         dVar10 = dVar7;
      }

      if (dVar14 < dVar4) {
         *(double*)( param_2 + 8 ) = dVar14;
      }

      if (dVar11 < dVar14) {
         *(double*)( param_2 + 0x18 ) = dVar14;
      }

      if (dVar13 < dVar5) {
         *(double*)( param_2 + 0x10 ) = dVar13;
      }

      if (dVar10 < dVar13) {
         *(double*)( param_2 + 0x20 ) = dVar13;
      }

      *(double*)( param_1 + 0x1160 ) = dVar3;
      *(double*)( param_1 + 0x1168 ) = dVar15;
      if (dVar3 < *(double*)( param_2 + 8 )) {
         *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x1160 );
         dVar3 = *(double*)( param_1 + 0x1160 );
      }

      if (*(double*)( param_2 + 0x18 ) <= dVar3 && dVar3 != *(double*)( param_2 + 0x18 )) {
         *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( param_1 + 0x1160 );
      }

      dVar3 = *(double*)( param_1 + 0x1168 );
      if (dVar3 < *(double*)( param_2 + 0x10 )) {
         *(double*)( param_2 + 0x10 ) = dVar3;
         dVar3 = *(double*)( param_1 + 0x1168 );
      }

      if (*(double*)( param_2 + 0x20 ) <= dVar3 && dVar3 != *(double*)( param_2 + 0x20 )) {
         *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( param_1 + 0x1168 );
         return;
      }

   }
 else {
      *(int*)( param_1 + 0xc ) = *(int*)( param_1 + 8 ) + 1;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::cs_opset_t<CFF::number_t, cff1_cs_opset_extents_t, CFF::cff1_cs_interp_env_t,
   cff1_extents_param_t, cff1_path_procs_extents_t>::process_op(unsigned int,
   CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void CFF::cs_opset_t<CFF::number_t,cff1_cs_opset_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t,cff1_path_procs_extents_t>::process_op(uint param_1, cff1_cs_interp_env_t *param_2, cff1_extents_param_t *param_3) {
   long lVar1;
   cff1_cs_interp_env_t cVar2;
   CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   uint *puVar9;
   cff1_cs_interp_env_t *pcVar10;
   uint uVar11;
   uint uVar12;
   cff1_cs_interp_env_t *pcVar13;
   cff1_cs_interp_env_t *pcVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   double dVar25;
   double dVar26;
   undefined8 uVar27;
   double dVar28;
   double dVar29;
   double dVar30;
   double dVar31;
   double dVar32;
   double dVar33;
   undefined1 auVar34[12];
   if (0x1f < param_1) {
      switch (param_1) {
         case 0xff:
      uVar8 = *(uint *)(param_2 + 0xc);
      uVar11 = *(uint *)(param_2 + 8);
      uVar12 = uVar8 + 4;
      if (uVar11 < uVar12) {
        return;
      }
      if (uVar8 < uVar11) {
        puVar9 = (uint *)((ulong)uVar8 + *(long *)param_2);
      }
      else {
        uVar12 = uVar11 + 5;
        *(uint *)(param_2 + 0xc) = uVar11 + 1;
        puVar9 = (uint *)&_hb_NullPool;
      }
      uVar8 = *puVar9;
      uVar11 = *(uint *)(param_2 + 0x14);
      if (uVar11 < 0x201) {
        pcVar10 = param_2 + (ulong)uVar11 * 8 + 0x18;
        *(uint *)(param_2 + 0x14) = uVar11 + 1;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_cs_interp_env_t)0x1;
        pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      }
      *(double *)pcVar10 =
           (double)(int)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                        uVar8 << 0x18) * __LC7;
      *(uint *)(param_2 + 0xc) = uVar12;
      return;
         default:
      goto switchD_0010693e_caseD_2;
         case 0x122:
      if (*(int *)(param_2 + 0x14) != 7) {
LAB_00107b90:
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
        goto LAB_00106c85;
      }
      dVar15 = *(double *)(param_2 + 0x1160);
      dVar30 = *(double *)(param_2 + 0x1168);
      dVar24 = *(double *)(param_2 + 0x18) + dVar15;
      dVar28 = *(double *)(param_3 + 8);
      dVar19 = *(double *)(param_3 + 0x10);
      dVar29 = *(double *)(param_2 + 0x20) + dVar24;
      dVar16 = *(double *)(param_3 + 0x18);
      dVar21 = *(double *)(param_3 + 0x20);
      dVar31 = dVar29 + *(double *)(param_2 + 0x30);
      dVar18 = *(double *)(param_2 + 0x28) + dVar30;
      dVar25 = *(double *)(param_2 + 0x38) + dVar31;
      dVar26 = *(double *)(param_2 + 0x40) + dVar25;
      dVar17 = *(double *)(param_2 + 0x48) + dVar26;
      if (*param_3 == (cff1_extents_param_t)0x0) {
        *param_3 = (cff1_extents_param_t)0x1;
        if (dVar15 < dVar28) {
          dVar28 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 8) = dVar28;
          dVar15 = *(double *)(param_2 + 0x1160);
        }
        if (dVar16 < dVar15) {
          dVar16 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar16;
        }
        dVar15 = *(double *)(param_2 + 0x1168);
        dVar32 = dVar15;
        if (dVar15 < dVar19) {
          *(double *)(param_3 + 0x10) = dVar15;
          dVar32 = *(double *)(param_2 + 0x1168);
          dVar19 = dVar15;
        }
        if (dVar21 < dVar32) {
          dVar21 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar21;
        }
      }
      if (dVar24 < dVar28) {
        *(double *)(param_3 + 8) = dVar24;
        dVar28 = dVar24;
      }
      if (dVar16 < dVar24) {
        *(double *)(param_3 + 0x18) = dVar24;
        dVar16 = dVar24;
      }
      if (dVar30 < dVar19) {
        *(double *)(param_3 + 0x10) = dVar30;
        dVar19 = dVar30;
      }
      if (dVar21 < dVar30) {
        *(double *)(param_3 + 0x20) = dVar30;
        dVar21 = dVar30;
      }
      if (dVar29 < dVar28) {
        *(double *)(param_3 + 8) = dVar29;
      }
      if (dVar16 < dVar29) {
        *(double *)(param_3 + 0x18) = dVar29;
      }
      if (dVar18 < dVar19) {
        *(double *)(param_3 + 0x10) = dVar18;
      }
      if (dVar21 < dVar18) {
        *(double *)(param_3 + 0x20) = dVar18;
      }
      *(double *)(param_2 + 0x1160) = dVar31;
      *(double *)(param_2 + 0x1168) = dVar18;
      dVar15 = *(double *)(param_3 + 8);
      if (dVar31 < dVar15) {
        dVar15 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 8) = dVar15;
        dVar31 = *(double *)(param_2 + 0x1160);
      }
      dVar28 = *(double *)(param_3 + 0x18);
      if (dVar28 < dVar31) {
        dVar28 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 0x18) = dVar28;
      }
      dVar19 = *(double *)(param_2 + 0x1168);
      dVar21 = *(double *)(param_3 + 0x10);
      dVar16 = dVar19;
      if (dVar19 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar19;
        dVar16 = *(double *)(param_2 + 0x1168);
        dVar21 = dVar19;
      }
      dVar19 = *(double *)(param_3 + 0x20);
      if (dVar19 < dVar16) {
        dVar19 = *(double *)(param_2 + 0x1168);
        *(double *)(param_3 + 0x20) = dVar19;
      }
      if (dVar25 < dVar15) {
        *(double *)(param_3 + 8) = dVar25;
        dVar15 = dVar25;
      }
      if (dVar28 < dVar25) {
        *(double *)(param_3 + 0x18) = dVar25;
        dVar28 = dVar25;
      }
      if (dVar18 < dVar21) {
        *(double *)(param_3 + 0x10) = dVar18;
        dVar21 = dVar18;
      }
      if (dVar19 < dVar18) {
        *(double *)(param_3 + 0x20) = dVar18;
        dVar19 = dVar18;
      }
      if (dVar26 < dVar15) {
        *(double *)(param_3 + 8) = dVar26;
      }
      if (dVar28 < dVar26) {
        *(double *)(param_3 + 0x18) = dVar26;
      }
      if (dVar30 < dVar21) {
        *(double *)(param_3 + 0x10) = dVar30;
      }
      if (dVar19 < dVar30) {
        *(double *)(param_3 + 0x20) = dVar30;
      }
      *(double *)(param_2 + 0x1160) = dVar17;
      *(double *)(param_2 + 0x1168) = dVar30;
      if (dVar17 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar17 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar17 && dVar17 != *(double *)(param_3 + 0x18)) {
LAB_0010756f:
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
      }
      break;
         case 0x123:
      if (*(int *)(param_2 + 0x14) != 0xd) goto LAB_00107b90;
      dVar31 = *(double *)(param_2 + 0x1160);
      dVar24 = *(double *)(param_2 + 0x18) + dVar31;
      dVar26 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
      dVar15 = *(double *)(param_3 + 0x18);
      dVar30 = *(double *)(param_3 + 0x10);
      dVar25 = dVar24 + *(double *)(param_2 + 0x28);
      dVar29 = dVar26 + *(double *)(param_2 + 0x30);
      dVar17 = *(double *)(param_2 + 0x40);
      dVar16 = dVar25 + *(double *)(param_2 + 0x38);
      dVar32 = *(double *)(param_2 + 0x48) + dVar16;
      dVar22 = *(double *)(param_2 + 0x50) + dVar29 + dVar17;
      dVar20 = dVar32 + *(double *)(param_2 + 0x58);
      dVar23 = dVar22 + *(double *)(param_2 + 0x60);
      dVar18 = *(double *)(param_2 + 0x70);
      dVar21 = dVar20 + *(double *)(param_2 + 0x68);
      dVar28 = *(double *)(param_3 + 8);
      dVar19 = *(double *)(param_3 + 0x20);
      if (*param_3 == (cff1_extents_param_t)0x0) {
        *param_3 = (cff1_extents_param_t)0x1;
        if (dVar31 < dVar28) {
          dVar28 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 8) = dVar28;
          dVar31 = *(double *)(param_2 + 0x1160);
        }
        if (dVar15 < dVar31) {
          dVar15 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar15;
        }
        dVar31 = *(double *)(param_2 + 0x1168);
        dVar33 = dVar31;
        if (dVar31 < dVar30) {
          *(double *)(param_3 + 0x10) = dVar31;
          dVar33 = *(double *)(param_2 + 0x1168);
          dVar30 = dVar31;
        }
        if (dVar19 < dVar33) {
          dVar19 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar19;
        }
      }
      if (dVar24 < dVar28) {
        *(double *)(param_3 + 8) = dVar24;
        dVar28 = dVar24;
      }
      if (dVar15 < dVar24) {
        *(double *)(param_3 + 0x18) = dVar24;
        dVar15 = dVar24;
      }
      if (dVar26 < dVar30) {
        *(double *)(param_3 + 0x10) = dVar26;
        dVar30 = dVar26;
      }
      if (dVar19 < dVar26) {
        *(double *)(param_3 + 0x20) = dVar26;
        dVar19 = dVar26;
      }
      if (dVar25 < dVar28) {
        *(double *)(param_3 + 8) = dVar25;
      }
      if (dVar15 < dVar25) {
        *(double *)(param_3 + 0x18) = dVar25;
      }
      if (dVar29 < dVar30) {
        *(double *)(param_3 + 0x10) = dVar29;
      }
      if (dVar19 < dVar29) {
        *(double *)(param_3 + 0x20) = dVar29;
      }
      *(double *)(param_2 + 0x1160) = dVar16;
      *(double *)(param_2 + 0x1168) = dVar29 + dVar17;
      dVar15 = *(double *)(param_3 + 8);
      if (dVar16 < dVar15) {
        dVar15 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 8) = dVar15;
        dVar16 = *(double *)(param_2 + 0x1160);
      }
      dVar30 = *(double *)(param_3 + 0x18);
      if (dVar30 < dVar16) {
        dVar30 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 0x18) = dVar30;
      }
      dVar28 = *(double *)(param_2 + 0x1168);
      dVar16 = *(double *)(param_3 + 0x10);
      dVar19 = dVar28;
      if (dVar28 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar28;
        dVar19 = *(double *)(param_2 + 0x1168);
        dVar16 = dVar28;
      }
      dVar28 = *(double *)(param_3 + 0x20);
      if (dVar28 < dVar19) {
        dVar28 = *(double *)(param_2 + 0x1168);
        *(double *)(param_3 + 0x20) = dVar28;
      }
      if (dVar32 < dVar15) {
        *(double *)(param_3 + 8) = dVar32;
        dVar15 = dVar32;
      }
      if (dVar30 < dVar32) {
        *(double *)(param_3 + 0x18) = dVar32;
        dVar30 = dVar32;
      }
      if (dVar22 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar22;
        dVar16 = dVar22;
      }
      if (dVar28 < dVar22) {
        *(double *)(param_3 + 0x20) = dVar22;
        dVar28 = dVar22;
      }
      if (dVar20 < dVar15) {
        *(double *)(param_3 + 8) = dVar20;
      }
      if (dVar30 < dVar20) {
        *(double *)(param_3 + 0x18) = dVar20;
      }
      if (dVar23 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar23;
      }
      if (dVar28 < dVar23) {
        *(double *)(param_3 + 0x20) = dVar23;
      }
      *(double *)(param_2 + 0x1160) = dVar21;
      *(double *)(param_2 + 0x1168) = dVar23 + dVar18;
      if (dVar21 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar21 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar21 && dVar21 != *(double *)(param_3 + 0x18))
      goto LAB_0010756f;
      break;
         case 0x124:
      if (*(int *)(param_2 + 0x14) != 9) goto LAB_00107b90;
      dVar15 = *(double *)(param_2 + 0x1160);
      dVar25 = *(double *)(param_2 + 0x18) + dVar15;
      dVar30 = *(double *)(param_3 + 8);
      dVar28 = *(double *)(param_3 + 0x20);
      dVar19 = *(double *)(param_3 + 0x18);
      dVar16 = *(double *)(param_3 + 0x10);
      dVar17 = *(double *)(param_2 + 0x28) + dVar25;
      dVar18 = *(double *)(param_2 + 0x1168) + *(double *)(param_2 + 0x20);
      dVar21 = *(double *)(param_2 + 0x38) + dVar17;
      dVar24 = *(double *)(param_2 + 0x30) + dVar18;
      dVar32 = *(double *)(param_2 + 0x50) + dVar24;
      dVar26 = *(double *)(param_2 + 0x40) + dVar21;
      dVar29 = *(double *)(param_2 + 0x48) + dVar26;
      dVar31 = *(double *)(param_2 + 0x58) + dVar29;
      uVar27 = *(undefined8 *)(param_2 + 0x1168);
      if (*param_3 == (cff1_extents_param_t)0x0) {
        *param_3 = (cff1_extents_param_t)0x1;
        if (dVar15 < dVar30) {
          dVar30 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 8) = dVar30;
          dVar15 = *(double *)(param_2 + 0x1160);
        }
        if (dVar19 < dVar15) {
          dVar19 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar19;
        }
        dVar15 = *(double *)(param_2 + 0x1168);
        dVar20 = dVar15;
        if (dVar15 < dVar16) {
          *(double *)(param_3 + 0x10) = dVar15;
          dVar20 = *(double *)(param_2 + 0x1168);
          dVar16 = dVar15;
        }
        if (dVar28 < dVar20) {
          dVar28 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar28;
        }
      }
      if (dVar25 < dVar30) {
        *(double *)(param_3 + 8) = dVar25;
        dVar30 = dVar25;
      }
      if (dVar19 < dVar25) {
        *(double *)(param_3 + 0x18) = dVar25;
        dVar19 = dVar25;
      }
      if (dVar18 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar18;
        dVar16 = dVar18;
      }
      if (dVar28 < dVar18) {
        *(double *)(param_3 + 0x20) = dVar18;
        dVar28 = dVar18;
      }
      if (dVar17 < dVar30) {
        *(double *)(param_3 + 8) = dVar17;
      }
      if (dVar19 < dVar17) {
        *(double *)(param_3 + 0x18) = dVar17;
      }
      if (dVar24 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar24;
      }
      if (dVar28 < dVar24) {
        *(double *)(param_3 + 0x20) = dVar24;
      }
      *(double *)(param_2 + 0x1160) = dVar21;
      *(double *)(param_2 + 0x1168) = dVar24;
      dVar15 = *(double *)(param_3 + 8);
      if (dVar21 < dVar15) {
        dVar15 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 8) = dVar15;
        dVar21 = *(double *)(param_2 + 0x1160);
      }
      dVar30 = *(double *)(param_3 + 0x18);
      if (dVar30 < dVar21) {
        dVar30 = *(double *)(param_2 + 0x1160);
        *(double *)(param_3 + 0x18) = dVar30;
      }
      dVar28 = *(double *)(param_2 + 0x1168);
      dVar16 = *(double *)(param_3 + 0x10);
      dVar19 = dVar28;
      if (dVar28 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar28;
        dVar19 = *(double *)(param_2 + 0x1168);
        dVar16 = dVar28;
      }
      dVar28 = *(double *)(param_3 + 0x20);
      if (dVar28 < dVar19) {
        dVar28 = *(double *)(param_2 + 0x1168);
        *(double *)(param_3 + 0x20) = dVar28;
      }
      if (dVar26 < dVar15) {
        *(double *)(param_3 + 8) = dVar26;
        dVar15 = dVar26;
      }
      if (dVar30 < dVar26) {
        *(double *)(param_3 + 0x18) = dVar26;
        dVar30 = dVar26;
      }
      if (dVar24 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar24;
        dVar16 = dVar24;
      }
      if (dVar28 < dVar24) {
        *(double *)(param_3 + 0x20) = dVar24;
        dVar28 = dVar24;
      }
      if (dVar29 < dVar15) {
        *(double *)(param_3 + 8) = dVar29;
      }
      if (dVar30 < dVar29) {
        *(double *)(param_3 + 0x18) = dVar29;
      }
      if (dVar32 < dVar16) {
        *(double *)(param_3 + 0x10) = dVar32;
      }
      if (dVar28 < dVar32) {
        *(double *)(param_3 + 0x20) = dVar32;
      }
      *(double *)(param_2 + 0x1160) = dVar31;
      *(undefined8 *)(param_2 + 0x1168) = uVar27;
      if (dVar31 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar31 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar31 && dVar31 != *(double *)(param_3 + 0x18))
      goto LAB_0010756f;
      break;
         case 0x125:
      path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::flex1
                (param_2,param_3);
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x1174) = 0;
      return;
      }

      dVar15 = *(double*)( param_2 + 0x1168 );
      if (dVar15 < *(double*)( param_3 + 0x10 )) {
         *(double*)( param_3 + 0x10 ) = dVar15;
         dVar15 = *(double*)( param_2 + 0x1168 );
      }

      if (*(double*)( param_3 + 0x20 ) <= dVar15 && dVar15 != *(double*)( param_3 + 0x20 )) {
         *(undefined8*)( param_3 + 0x20 ) = *(undefined8*)( param_2 + 0x1168 );
      }

      goto LAB_00106c85;
   }

   switch (param_1) {
      case 1:
      case 0x12:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((uVar12 != 0) && ((uVar12 & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    *(uint *)(param_2 + 0x103c) = *(int *)(param_2 + 0x103c) + (uVar12 >> 1);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      default:
switchD_0010693e_caseD_2:
    opset_t<CFF::number_t>::process_op(param_1,(interp_env_t *)param_2);
    return;
      case 3:
      case 0x17:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((uVar12 != 0) && ((uVar12 & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    *(uint *)(param_2 + 0x1040) = *(int *)(param_2 + 0x1040) + (uVar12 >> 1);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 4:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (uVar12 < 2) {
        param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
        goto LAB_00106c0c;
      }
      *(undefined4 *)(param_2 + 0x1174) = 1;
      *(undefined2 *)(param_2 + 0x1170) = 0x101;
      dVar30 = *(double *)(param_2 + 0x1168);
      *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      dVar15 = *(double *)(param_2 + 0x1160);
LAB_00106c24:
      pcVar10 = param_2 + (ulong)uVar12 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar12 - 1;
    }
    else {
LAB_00106c0c:
      dVar15 = *(double *)(param_2 + 0x1160);
      dVar30 = *(double *)(param_2 + 0x1168);
      if (uVar12 != 0) goto LAB_00106c24;
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar30 = dVar30 + *(double *)pcVar10;
    goto LAB_00106c33;
      case 5:
    uVar12 = *(uint *)(param_2 + 0x14);
    uVar11 = 1;
    uVar8 = 0;
    if (1 < uVar12) {
      do {
        dVar15 = *(double *)(param_2 + 0x1160);
        dVar30 = *(double *)(param_2 + 0x1168);
        pcVar10 = param_2 + (ulong)uVar11 * 8 + 0x18;
        if (uVar12 <= uVar11) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar14 = param_2 + (ulong)uVar8 * 8 + 0x18;
        if (uVar12 <= uVar8) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar14 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        dVar19 = *(double *)pcVar10;
        dVar28 = *(double *)pcVar14 + dVar15;
        if (*param_3 == (cff1_extents_param_t)0x0) {
          *param_3 = (cff1_extents_param_t)0x1;
          if (dVar15 < *(double *)(param_3 + 8)) {
            *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
            dVar15 = *(double *)(param_2 + 0x1160);
          }
          if (*(double *)(param_3 + 0x18) <= dVar15 && dVar15 != *(double *)(param_3 + 0x18)) {
            *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
          }
          dVar15 = *(double *)(param_2 + 0x1168);
          if (dVar15 < *(double *)(param_3 + 0x10)) {
            *(double *)(param_3 + 0x10) = dVar15;
            dVar15 = *(double *)(param_2 + 0x1168);
          }
          if (*(double *)(param_3 + 0x20) <= dVar15 && dVar15 != *(double *)(param_3 + 0x20)) {
            *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
          }
        }
        *(double *)(param_2 + 0x1160) = dVar28;
        *(double *)(param_2 + 0x1168) = dVar19 + dVar30;
        if (dVar28 < *(double *)(param_3 + 8)) {
          *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
          dVar28 = *(double *)(param_2 + 0x1160);
        }
        if (*(double *)(param_3 + 0x18) <= dVar28 && dVar28 != *(double *)(param_3 + 0x18)) {
          *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
        }
        dVar15 = *(double *)(param_2 + 0x1168);
        if (dVar15 < *(double *)(param_3 + 0x10)) {
          *(double *)(param_3 + 0x10) = dVar15;
          dVar15 = *(double *)(param_2 + 0x1168);
        }
        if (*(double *)(param_3 + 0x20) <= dVar15 && dVar15 != *(double *)(param_3 + 0x20)) {
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
        }
        uVar6 = uVar8 + 4;
        uVar11 = uVar11 + 2;
        uVar8 = uVar8 + 2;
      } while (uVar6 <= uVar12);
    }
    goto LAB_00106c85;
      case 6:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::hlineto
              (param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 7:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::vlineto
              (param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 8:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::
    rrcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 10:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (uVar12 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar10 = param_2 + (ulong)uVar12 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar12 - 1;
    }
    uVar12 = (int)*(double *)pcVar10 + *(int *)(param_2 + 0x1150);
    if (((-1 < (int)uVar12) &&
        (pCVar3 = *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(param_2 + 0x1158),
        pCVar3 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0)) &&
       (uVar12 < (ushort)(*(ushort *)pCVar3 << 8 | *(ushort *)pCVar3 >> 8))) {
      uVar8 = *(uint *)(param_2 + 0x104c);
      if (uVar8 < 10) {
        uVar27 = *(undefined8 *)(param_2 + 8);
        lVar1 = (ulong)uVar8 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar8 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar27;
        *(undefined8 *)(param_2 + lVar1 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar1 + 0x1058) = uVar27;
        *(undefined8 *)(param_2 + lVar1 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar34 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](pCVar3,uVar12);
        *(uint *)(param_2 + 0x1034) = uVar12;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar34;
        *(undefined8 *)(param_2 + 0x102c) = 0x200000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        return;
      }
    }
    goto LAB_00107b80;
      case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x104c) == 0) {
      _DAT_0010c018 = ___stack_chk_fail;
      uVar27 = __hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
      param_2[0x1048] = (cff1_cs_interp_env_t)0x1;
      pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar27;
    }
    else {
      uVar12 = *(int *)(param_2 + 0x104c) - 1;
      *(uint *)(param_2 + 0x104c) = uVar12;
      pcVar10 = param_2 + (ulong)uVar12 * 0x18 + 0x1050;
    }
    uVar4 = *(undefined8 *)pcVar10;
    uVar5 = *(undefined8 *)(pcVar10 + 8);
    *(undefined8 *)(param_2 + 0x1020) = uVar4;
    *(undefined8 *)(param_2 + 0x1028) = uVar5;
    uVar27 = *(undefined8 *)(pcVar10 + 0x10);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0x1030) = uVar27;
    break;
      case 0xe:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((*(uint *)(param_2 + 0x14) != 0) && ((*(uint *)(param_2 + 0x14) & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    param_2[0x1038] = (cff1_cs_interp_env_t)0x1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x13:
      case 0x14:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((*(uint *)(param_2 + 0x14) != 0) && ((*(uint *)(param_2 + 0x14) & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined4 *)(param_2 + 0x1174) = 1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
      param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
      iVar7 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
      *(int *)(param_2 + 0x1040) = iVar7;
      uVar12 = (uint)(iVar7 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      *(uint *)(param_2 + 0x1044) = uVar12;
    }
    else {
      uVar12 = *(uint *)(param_2 + 0x1044);
    }
    if (uVar12 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x1174) = 0;
      *(uint *)(param_2 + 0xc) = uVar12 + *(int *)(param_2 + 0xc);
    }
    break;
      case 0x15:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (uVar12 < 3) {
        param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
        goto LAB_0010723c;
      }
      *(undefined4 *)(param_2 + 0x1174) = 1;
      *(undefined2 *)(param_2 + 0x1170) = 0x101;
      dVar15 = *(double *)(param_2 + 0x1160);
      dVar30 = *(double *)(param_2 + 0x1168);
      *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
LAB_00107253:
      *(uint *)(param_2 + 0x14) = uVar12 - 1;
      pcVar10 = param_2 + (ulong)uVar12 * 8 + 0x10;
      if (uVar12 - 1 == 0) goto LAB_00107e7f;
      *(uint *)(param_2 + 0x14) = uVar12 - 2;
      pcVar14 = param_2 + (ulong)uVar12 * 8 + 8;
    }
    else {
LAB_0010723c:
      dVar15 = *(double *)(param_2 + 0x1160);
      dVar30 = *(double *)(param_2 + 0x1168);
      if (uVar12 != 0) goto LAB_00107253;
      pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
LAB_00107e7f:
      __hb_CrapPool = __hb_NullPool;
      pcVar14 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
    }
    dVar28 = *(double *)pcVar14;
    dVar19 = *(double *)pcVar10;
    *param_3 = (cff1_extents_param_t)0x0;
    *(double *)(param_2 + 0x1160) = dVar28 + dVar15;
    *(double *)(param_2 + 0x1168) = dVar19 + dVar30;
    if (param_2[0x1039] != (cff1_cs_interp_env_t)0x0) goto LAB_00106c85;
    goto LAB_00106c4a;
      case 0x16:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (uVar12 < 2) {
        param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
        goto LAB_0010719c;
      }
      *(undefined4 *)(param_2 + 0x1174) = 1;
      *(undefined2 *)(param_2 + 0x1170) = 0x101;
      dVar30 = *(double *)(param_2 + 0x1168);
      *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      dVar15 = *(double *)(param_2 + 0x1160);
LAB_001071b4:
      pcVar10 = param_2 + (ulong)uVar12 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar12 - 1;
    }
    else {
LAB_0010719c:
      dVar15 = *(double *)(param_2 + 0x1160);
      dVar30 = *(double *)(param_2 + 0x1168);
      if (uVar12 != 0) goto LAB_001071b4;
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    dVar15 = dVar15 + *(double *)pcVar10;
LAB_00106c33:
    cVar2 = param_2[0x1039];
    *param_3 = (cff1_extents_param_t)0x0;
    *(double *)(param_2 + 0x1160) = dVar15;
    *(double *)(param_2 + 0x1168) = dVar30;
    if (cVar2 == (cff1_cs_interp_env_t)0x0) {
LAB_00106c4a:
      if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
        iVar7 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar7;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar7 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff1_cs_interp_env_t)0x1;
    }
    goto LAB_00106c85;
      case 0x18:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::
    rcurveline(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x19:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::
    rlinecurve(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x1a:
    uVar12 = *(uint *)(param_2 + 0x14);
    dVar30 = *(double *)(param_2 + 0x1160);
    uVar11 = 4;
    dVar15 = *(double *)(param_2 + 0x1168);
    uVar8 = uVar12 & 1;
    uVar27 = __hb_NullPool;
    if (uVar8 != 0) {
      dVar30 = dVar30 + *(double *)(param_2 + 0x18);
      uVar11 = 5;
    }
    for (; __hb_NullPool = uVar27, uVar11 <= uVar12; uVar11 = uVar11 + 4) {
      pcVar10 = param_2 + (ulong)uVar8 * 8 + 0x18;
      if (uVar12 <= uVar8) {
        param_2[0x10] = (cff1_cs_interp_env_t)0x1;
        pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        __hb_CrapPool = uVar27;
      }
      dVar15 = dVar15 + *(double *)pcVar10;
      pcVar10 = param_2 + (ulong)(uVar8 + 2) * 8 + 0x18;
      if (uVar12 <= uVar8 + 2) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_cs_interp_env_t)0x1;
        pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar14 = param_2 + (ulong)(uVar8 + 1) * 8 + 0x18;
      if (uVar12 <= uVar8 + 1) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_cs_interp_env_t)0x1;
        pcVar14 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      }
      pcVar13 = param_2 + (ulong)(uVar8 + 3) * 8 + 0x18;
      dVar28 = *(double *)pcVar14 + dVar30;
      dVar19 = *(double *)pcVar10 + dVar15;
      if (uVar12 <= uVar8 + 3) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_cs_interp_env_t)0x1;
        pcVar13 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      }
      dVar16 = *(double *)pcVar13;
      dVar21 = *(double *)(param_3 + 8);
      dVar31 = *(double *)(param_3 + 0x18);
      dVar17 = *(double *)(param_3 + 0x10);
      dVar18 = *(double *)(param_3 + 0x20);
      if (*param_3 == (cff1_extents_param_t)0x0) {
        dVar24 = *(double *)(param_2 + 0x1160);
        *param_3 = (cff1_extents_param_t)0x1;
        dVar25 = dVar24;
        if (dVar24 < dVar21) {
          *(double *)(param_3 + 8) = dVar24;
          dVar25 = *(double *)(param_2 + 0x1160);
          dVar21 = dVar24;
        }
        if (dVar31 < dVar25) {
          dVar31 = *(double *)(param_2 + 0x1160);
          *(double *)(param_3 + 0x18) = dVar31;
        }
        dVar24 = *(double *)(param_2 + 0x1168);
        dVar25 = dVar24;
        if (dVar24 < dVar17) {
          *(double *)(param_3 + 0x10) = dVar24;
          dVar25 = *(double *)(param_2 + 0x1168);
          dVar17 = dVar24;
        }
        if (dVar18 < dVar25) {
          dVar18 = *(double *)(param_2 + 0x1168);
          *(double *)(param_3 + 0x20) = dVar18;
        }
      }
      if (dVar30 < dVar21) {
        *(double *)(param_3 + 8) = dVar30;
        dVar21 = dVar30;
      }
      if (dVar31 < dVar30) {
        *(double *)(param_3 + 0x18) = dVar30;
        dVar31 = dVar30;
      }
      if (dVar15 < dVar17) {
        *(double *)(param_3 + 0x10) = dVar15;
        dVar17 = dVar15;
      }
      if (dVar18 < dVar15) {
        *(double *)(param_3 + 0x20) = dVar15;
        dVar18 = dVar15;
      }
      if (dVar28 < dVar21) {
        *(double *)(param_3 + 8) = dVar28;
      }
      if (dVar31 < dVar28) {
        *(double *)(param_3 + 0x18) = dVar28;
      }
      if (dVar19 < dVar17) {
        *(double *)(param_3 + 0x10) = dVar19;
      }
      if (dVar18 < dVar19) {
        *(double *)(param_3 + 0x20) = dVar19;
      }
      *(double *)(param_2 + 0x1160) = dVar28;
      *(double *)(param_2 + 0x1168) = dVar16 + dVar19;
      if (dVar28 < *(double *)(param_3 + 8)) {
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 0x1160);
        dVar28 = *(double *)(param_2 + 0x1160);
      }
      if (*(double *)(param_3 + 0x18) <= dVar28 && dVar28 != *(double *)(param_3 + 0x18)) {
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x1160);
      }
      dVar15 = *(double *)(param_2 + 0x1168);
      if (dVar15 < *(double *)(param_3 + 0x10)) {
        *(double *)(param_3 + 0x10) = dVar15;
        dVar15 = *(double *)(param_2 + 0x1168);
      }
      if (*(double *)(param_3 + 0x20) <= dVar15 && dVar15 != *(double *)(param_3 + 0x20)) {
        *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x1168);
        dVar15 = *(double *)(param_2 + 0x1168);
      }
      dVar30 = *(double *)(param_2 + 0x1160);
      uVar8 = uVar11;
      uVar27 = __hb_NullPool;
    }
    goto LAB_00106c85;
      case 0x1b:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::
    hhcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x1d:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (uVar12 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar10 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar10 = param_2 + (ulong)uVar12 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar12 - 1;
    }
    uVar12 = (int)*(double *)pcVar10 + *(int *)(param_2 + 0x1140);
    if (((-1 < (int)uVar12) &&
        (pCVar3 = *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(param_2 + 0x1148),
        pCVar3 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0)) &&
       (uVar12 < (ushort)(*(ushort *)pCVar3 << 8 | *(ushort *)pCVar3 >> 8))) {
      uVar8 = *(uint *)(param_2 + 0x104c);
      if (uVar8 < 10) {
        uVar27 = *(undefined8 *)(param_2 + 8);
        lVar1 = (ulong)uVar8 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar8 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar27;
        *(undefined8 *)(param_2 + lVar1 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar1 + 0x1058) = uVar27;
        *(undefined8 *)(param_2 + lVar1 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar34 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](pCVar3,uVar12);
        *(uint *)(param_2 + 0x1034) = uVar12;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar34;
        *(undefined8 *)(param_2 + 0x102c) = 0x100000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        return;
      }
    }
LAB_00107b80:
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
    break;
      case 0x1e:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::
    vhcurveto(param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x1f:
    path_procs_t<cff1_path_procs_extents_t,CFF::cff1_cs_interp_env_t,cff1_extents_param_t>::
    hvcurveto(param_2,param_3);
LAB_00106c85:
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* cff1_cs_opset_extents_t::process_seac(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&) */void cff1_cs_opset_extents_t::process_seac(cff1_cs_interp_env_t *param_1, cff1_extents_param_t *param_2) {
   byte bVar1;
   char *pcVar2;
   char cVar3;
   cff1_cs_interp_env_t *pcVar4;
   ushort uVar5;
   uint uVar6;
   ulong uVar7;
   long lVar8;
   ushort uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   long in_FS_OFFSET;
   double dVar16;
   double dVar17;
   double local_88;
   double dStack_80;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   undefined1 local_58[16];
   undefined1 local_48[24];
   long local_30;
   local_88 = __hb_NullPool;
   lVar13 = *(long*)( param_2 + 0x28 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = *(uint*)( param_1 + 0x14 );
   uVar7 = ( ulong )(uVar10 - 2);
   uVar15 = ( uint )(3 < uVar10);
   uVar12 = uVar10;
   if (3 < uVar10) {
      local_88 = *(double*)( param_1 + ( ulong )(uVar10 - 4) * 8 + 0x18 );
      lVar8 = ( ulong )(uVar10 - 3) * 8 + 8;
      LAB_00108042:dStack_80 = *(double*)( param_1 + lVar8 + 0x10 );
      LAB_00108050:uVar6 = ( uint ) * (double*)( param_1 + uVar7 * 8 + 0x18 );
      if (0xff < uVar6) {
         uVar7 = ( ulong )(uVar10 - 1);
         uVar15 = 0;
         goto LAB_001080b8;
      }

      LAB_00108062:bVar1 = ( &standard_encoding_to_sid )[uVar6];
      uVar15 = (uint)bVar1;
      pcVar2 = *(char**)( lVar13 + 0x50 );
      if (pcVar2 == &_hb_NullPool) {
         if (( *(int*)( lVar13 + 0xf4 ) != 0 ) || ( 0xe4 < uVar6 )) {
            LAB_001080a7:uVar15 = 0;
         }

         goto LAB_001080ac;
      }

      cVar3 = *pcVar2;
      uVar6 = *(uint*)( lVar13 + 0x128 );
      uVar14 = (uint)bVar1;
      if (cVar3 == '\x01') {
         lVar13 = *(long*)( param_2 + 0x28 );
         uVar12 = *(uint*)( param_1 + 0x14 );
         if (uVar14 == 0) goto LAB_001080ac;
         if (1 < uVar6) {
            uVar7 = 0;
            uVar15 = 1;
            do {
               uVar5 = *(ushort*)( pcVar2 + uVar7 * 3 + 1 ) << 8 | *(ushort*)( pcVar2 + uVar7 * 3 + 1 ) >> 8;
               if (( uVar5 <= uVar14 ) && ( uVar14 <= (uint)uVar5 + (uint)(byte)pcVar2[uVar7 * 3 + 3] )) {
                  uVar15 = ( uVar15 + uVar14 ) - (uint)uVar5;
                  goto LAB_001080ac;
               }

               uVar15 = uVar15 + 1 + (uint)(byte)pcVar2[uVar7 * 3 + 3];
               uVar7 = ( ulong )((int)uVar7 + 1);
            }
 while ( uVar15 < uVar6 );
         }

      }
 else {
         uVar15 = (uint)bVar1;
         if (cVar3 == '\x02') {
            lVar13 = *(long*)( param_2 + 0x28 );
            uVar12 = *(uint*)( param_1 + 0x14 );
            uVar11 = (uint)bVar1;
            if (uVar14 == 0) goto LAB_001080ac;
            if (1 < uVar6) {
               uVar7 = 0;
               uVar15 = 1;
               do {
                  uVar5 = *(ushort*)( pcVar2 + uVar7 * 4 + 1 ) << 8 | *(ushort*)( pcVar2 + uVar7 * 4 + 1 ) >> 8;
                  uVar9 = *(ushort*)( pcVar2 + uVar7 * 4 + 3 ) << 8 | *(ushort*)( pcVar2 + uVar7 * 4 + 3 ) >> 8;
                  if (( uVar5 <= uVar11 ) && ( uVar11 <= (uint)uVar5 + (uint)uVar9 )) {
                     uVar15 = ( uVar15 + uVar11 ) - (uint)uVar5;
                     goto LAB_001080ac;
                  }

                  uVar15 = uVar15 + 1 + (uint)uVar9;
                  uVar7 = ( ulong )((int)uVar7 + 1);
               }
 while ( uVar15 < uVar6 );
            }

         }
 else {
            if (cVar3 != '\0') goto LAB_001080a7;
            lVar13 = *(long*)( param_2 + 0x28 );
            uVar12 = *(uint*)( param_1 + 0x14 );
            if (bVar1 == 0) goto LAB_001080ac;
            if (1 < uVar6) {
               uVar7 = 1;
               do {
                  if (uVar14 == ( ushort )(*(ushort*)( pcVar2 + uVar7 * 2 + -1 ) << 8 | *(ushort*)( pcVar2 + uVar7 * 2 + -1 ) >> 8)) {
                     uVar15 = (uint)uVar7;
                     goto LAB_001080ac;
                  }

                  uVar7 = uVar7 + 1;
               }
 while ( uVar7 != uVar6 );
            }

         }

      }

      uVar15 = 0;
      uVar7 = ( ulong )(uVar10 - 1);
      if (uVar10 - 1 < uVar12) goto LAB_001080b8;
      LAB_001084c8:__hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      lVar8 = 8;
      dStack_80 = local_88;
      if (uVar10 == 3) goto LAB_00108042;
      uVar7 = 0;
      if (uVar10 == 2) goto LAB_00108050;
      uVar6 = (uint)local_88;
      local_88 = __hb_CrapPool;
      dStack_80 = __hb_CrapPool;
      if (uVar6 < 0x100) goto LAB_00108062;
      LAB_001080ac:uVar7 = ( ulong )(uVar10 - 1);
      if (uVar12 <= uVar10 - 1) goto LAB_001084c8;
      LAB_001080b8:pcVar4 = param_1 + uVar7 * 8 + 0x18;
   }

   uVar10 = ( uint ) * (double*)pcVar4;
   if (uVar10 < 0x100) {
      uVar12 = ( uint )(byte)(&standard_encoding_to_sid)[uVar10];
      pcVar2 = *(char**)( lVar13 + 0x50 );
      if (pcVar2 == &_hb_NullPool) {
         if (( *(int*)( lVar13 + 0xf4 ) == 0 ) && ( uVar10 < 0xe5 )) goto LAB_00108151;
      }
 else {
         cVar3 = *pcVar2;
         uVar6 = *(uint*)( lVar13 + 0x128 );
         if (cVar3 == '\x01') {
            if (( uVar12 != 0 ) && ( 1 < uVar6 )) {
               uVar7 = 0;
               uVar10 = 1;
               do {
                  uVar5 = *(ushort*)( pcVar2 + uVar7 * 3 + 1 ) << 8 | *(ushort*)( pcVar2 + uVar7 * 3 + 1 ) >> 8;
                  if (( uVar5 <= uVar12 ) && ( uVar12 <= (uint)uVar5 + (uint)(byte)pcVar2[uVar7 * 3 + 3] )) {
                     uVar7 = ( ulong )(( uVar10 + uVar12 ) - (uint)uVar5);
                     goto LAB_0010814e;
                  }

                  uVar10 = uVar10 + 1 + (uint)(byte)pcVar2[uVar7 * 3 + 3];
                  uVar7 = ( ulong )((int)uVar7 + 1);
               }
 while ( uVar10 < uVar6 );
            }

         }
 else if (cVar3 == '\x02') {
            if (( uVar12 != 0 ) && ( 1 < uVar6 )) {
               uVar14 = 0;
               uVar10 = 1;
               do {
                  uVar9 = *(ushort*)( pcVar2 + (ulong)uVar14 * 4 + 1 ) << 8 | *(ushort*)( pcVar2 + (ulong)uVar14 * 4 + 1 ) >> 8;
                  uVar5 = *(ushort*)( pcVar2 + (ulong)uVar14 * 4 + 3 ) << 8 | *(ushort*)( pcVar2 + (ulong)uVar14 * 4 + 3 ) >> 8;
                  if (( uVar9 <= uVar12 ) && ( uVar12 <= (uint)uVar9 + (uint)uVar5 )) {
                     uVar12 = ( uVar10 + uVar12 ) - (uint)uVar9;
                     goto LAB_00108151;
                  }

                  uVar10 = uVar10 + 1 + (uint)uVar5;
                  uVar14 = uVar14 + 1;
               }
 while ( uVar10 < uVar6 );
            }

         }
 else if (( ( cVar3 == '\0' ) && ( ( &standard_encoding_to_sid )[uVar10] != 0 ) ) && ( 1 < uVar6 )) {
            uVar7 = 1;
            do {
               if (uVar12 == ( ushort )(*(ushort*)( pcVar2 + uVar7 * 2 + -1 ) << 8 | *(ushort*)( pcVar2 + uVar7 * 2 + -1 ) >> 8)) goto LAB_0010814e;
               uVar7 = uVar7 + 1;
            }
 while ( uVar7 != uVar6 );
         }

      }

   }

   goto LAB_001082a0;
   LAB_0010814e:uVar12 = (uint)uVar7;
   LAB_00108151:local_58 = (undefined1[16])0x0;
   local_48._0_16_ = (undefined1[16])0x0;
   if (( ( param_1[0x1180] == (cff1_cs_interp_env_t)0x0 ) && ( uVar15 != 0 ) ) && ( ( uVar12 != 0 && ( ( cVar3 = _get_bounds(*(accelerator_t**)( param_2 + 0x28 ), uVar15, (bounds_t*)&local_78, true) ),cVar3 != '\0' && ( cVar3 = _get_bounds(*(accelerator_t**)( param_2 + 0x28 ), uVar12, (bounds_t*)local_58, true) ),cVar3 != '\0' ) ) )) {
      dVar17 = *(double*)( param_2 + 0x18 );
      dVar16 = *(double*)( param_2 + 8 );
      if (dVar17 <= dVar16) {
         LAB_001083a0:*(double*)( param_2 + 8 ) = local_78;
         *(double*)( param_2 + 0x10 ) = dStack_70;
         dVar16 = *(double*)( param_2 + 8 );
         *(double*)( param_2 + 0x18 ) = local_68;
         *(double*)( param_2 + 0x20 ) = dStack_60;
         dVar17 = *(double*)( param_2 + 0x18 );
         LAB_001083be:if ((double)local_58._0_8_ < (double)local_48._0_8_) goto LAB_00108350;
         if (dVar16 < dVar17) goto LAB_001083d6;
      }
 else {
         if (*(double*)( param_2 + 0x20 ) <= *(double*)( param_2 + 0x10 )) goto LAB_001083a0;
         if (( local_78 < local_68 ) && ( dStack_70 < dStack_60 )) {
            if (local_78 < dVar16) {
               *(double*)( param_2 + 8 ) = local_78;
               dVar16 = local_78;
            }

            if (dVar17 < local_68) {
               *(double*)( param_2 + 0x18 ) = local_68;
               dVar17 = local_68;
            }

            if (dStack_70 < *(double*)( param_2 + 0x10 )) {
               *(double*)( param_2 + 0x10 ) = dStack_70;
            }

            if (*(double*)( param_2 + 0x20 ) < dStack_60) {
               *(double*)( param_2 + 0x20 ) = dStack_60;
            }

            goto LAB_001083be;
         }

         if ((double)local_48._0_8_ <= (double)local_58._0_8_) goto LAB_001082a9;
         LAB_00108350:if ((double)local_58._8_8_ < (double)local_48._8_8_) {
            local_58._8_8_ = (double)local_58._8_8_ + dStack_80;
            local_58._0_8_ = (double)local_58._0_8_ + local_88;
            local_48._8_8_ = (double)local_48._8_8_ + dStack_80;
            local_48._0_8_ = (double)local_48._0_8_ + local_88;
         }

         if (dVar16 < dVar17) {
            LAB_001083d6:if (*(double*)( param_2 + 0x10 ) < *(double*)( param_2 + 0x20 )) {
               if ((double)local_58._0_8_ < (double)local_48._0_8_) {
                  if ((double)local_58._8_8_ < (double)local_48._8_8_) {
                     if ((double)local_58._0_8_ < dVar16) {
                        *(undefined8*)( param_2 + 8 ) = local_58._0_8_;
                     }

                     if (dVar17 < (double)local_48._0_8_) {
                        *(undefined8*)( param_2 + 0x18 ) = local_48._0_8_;
                     }

                     if ((double)local_58._8_8_ < *(double*)( param_2 + 0x10 )) {
                        *(undefined8*)( param_2 + 0x10 ) = local_58._8_8_;
                     }

                     if (*(double*)( param_2 + 0x20 ) < (double)local_48._8_8_) {
                        *(undefined8*)( param_2 + 0x20 ) = local_48._8_8_;
                     }

                  }

               }

               goto LAB_001082a9;
            }

         }

      }

      *(undefined8*)( param_2 + 8 ) = local_58._0_8_;
      *(undefined8*)( param_2 + 0x10 ) = local_58._8_8_;
      *(undefined8*)( param_2 + 0x18 ) = local_48._0_8_;
      *(undefined8*)( param_2 + 0x20 ) = local_48._8_8_;
      goto LAB_001082a9;
   }

   LAB_001082a0:*(int*)( param_1 + 0xc ) = *(int*)( param_1 + 8 ) + 1;
   LAB_001082a9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t>::rcurveline(CFF::cff1_cs_interp_env_t&, cff1_path_param_t&) */void CFF::path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::rcurveline(cff1_cs_interp_env_t *param_1, cff1_path_param_t *param_2) {
   uint uVar1;
   cff1_cs_interp_env_t *pcVar2;
   ulong uVar3;
   cff1_cs_interp_env_t *pcVar4;
   cff1_cs_interp_env_t *pcVar5;
   uint uVar6;
   uint uVar7;
   long in_FS_OFFSET;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( param_1 + 0x14 );
   if (7 < uVar1) {
      uVar7 = uVar1 - 2;
      uVar6 = 6;
      do {
         if (uVar6 - 5 < uVar1) {
            uVar3 = ( ulong )(uVar6 - 4);
            pcVar5 = param_1 + uVar3 * 8 + 0x10;
            LAB_0010873f:pcVar2 = param_1 + ( ulong )(uVar6 - 5) * 8 + 0x10;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            if (uVar6 - 6 < uVar1) {
               uVar3 = ( ulong )(uVar6 - 4);
               goto LAB_0010873f;
            }

            pcVar2 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            uVar3 = ( ulong )(uVar6 - 4);
         }

         local_78 = *(double*)pcVar2 + *(double*)( param_1 + 0x1160 );
         dStack_70 = *(double*)pcVar5 + *(double*)( param_1 + 0x1168 );
         pcVar5 = param_1 + ( ulong )(uVar6 - 3) * 8 + 0x18;
         if (uVar1 <= uVar6 - 3) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         pcVar2 = param_1 + uVar3 * 8 + 0x18;
         if (uVar1 <= (uint)uVar3) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar2 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         pcVar4 = param_1 + ( ulong )(uVar6 - 1) * 8 + 0x18;
         local_68 = *(double*)pcVar2 + local_78;
         dStack_60 = *(double*)pcVar5 + dStack_70;
         if (uVar1 <= uVar6 - 1) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar4 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         pcVar5 = param_1 + ( ulong )(uVar6 - 2) * 8 + 0x18;
         if (uVar1 <= uVar6 - 2) {
            __hb_CrapPool = __hb_NullPool;
            param_1[0x10] = (cff1_cs_interp_env_t)0x1;
            pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

         local_58 = local_68 + *(double*)pcVar5;
         dStack_50 = dStack_60 + *(double*)pcVar4;
         cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
         *(double*)( param_1 + 0x1160 ) = local_58;
         *(double*)( param_1 + 0x1168 ) = dStack_50;
         if (uVar7 < uVar6 + 6) goto code_r0x001087fc;
         uVar1 = *(uint*)( param_1 + 0x14 );
         uVar6 = uVar6 + 6;
      }
 while ( true );
   }

   goto LAB_00108848;
   code_r0x001087fc:if (uVar6 + 1 < *(uint*)( param_1 + 0x14 )) {
      pcVar5 = param_1 + ( ulong )(uVar6 + 2) * 8 + 0x10;
      LAB_00108818:pcVar2 = param_1 + ( ulong )(uVar6 + 1) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      if (uVar6 < *(uint*)( param_1 + 0x14 )) {
         pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         goto LAB_00108818;
      }

      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      pcVar2 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   local_58 = *(double*)pcVar2 + local_58;
   dStack_50 = *(double*)pcVar5 + dStack_50;
   cff1_path_param_t::line_to(param_2, (point_t*)&local_58);
   *(double*)( param_1 + 0x1160 ) = local_58;
   *(double*)( param_1 + 0x1168 ) = dStack_50;
   LAB_00108848:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t>::rlinecurve(CFF::cff1_cs_interp_env_t&, cff1_path_param_t&) */void CFF::path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::rlinecurve(cff1_cs_interp_env_t *param_1, cff1_path_param_t *param_2) {
   uint uVar1;
   cff1_cs_interp_env_t *pcVar2;
   cff1_cs_interp_env_t *pcVar3;
   uint uVar4;
   cff1_cs_interp_env_t *pcVar5;
   uint uVar6;
   long in_FS_OFFSET;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   long local_40;
   uVar1 = *(uint*)( param_1 + 0x14 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar1 < 8) goto LAB_00108af8;
   uVar6 = 0;
   pcVar5 = param_1 + 0x18;
   uVar4 = uVar1 - 8 & 0xfffffffe;
   while (true) {
      pcVar3 = pcVar5 + 8;
      pcVar2 = pcVar5;
      if (uVar1 <= uVar6 + 1) {
         __hb_CrapPool = __hb_NullPool;
         param_1[0x10] = (cff1_cs_interp_env_t)0x1;
         pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         if (uVar1 <= uVar6) {
            pcVar2 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         }

      }

      local_58 = *(double*)pcVar2 + *(double*)( param_1 + 0x1160 );
      dStack_50 = *(double*)( param_1 + 0x1168 ) + *(double*)pcVar3;
      pcVar5 = pcVar5 + 0x10;
      cff1_path_param_t::line_to(param_2, (point_t*)&local_58);
      *(double*)( param_1 + 0x1160 ) = local_58;
      *(double*)( param_1 + 0x1168 ) = dStack_50;
      if (uVar6 == uVar4) break;
      uVar1 = *(uint*)( param_1 + 0x14 );
      uVar6 = uVar6 + 2;
   }
;
   uVar1 = *(uint*)( param_1 + 0x14 );
   if (uVar4 + 3 < uVar1) {
      pcVar5 = param_1 + ( ulong )(uVar4 + 4) * 8 + 0x10;
      LAB_00108a54:pcVar3 = param_1 + ( ulong )(uVar4 + 3) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      if (uVar4 + 2 < uVar1) {
         pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
         goto LAB_00108a54;
      }

      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
      pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   local_78 = *(double*)pcVar3 + local_58;
   dStack_70 = *(double*)pcVar5 + dStack_50;
   if (uVar4 + 5 < uVar1) {
      pcVar5 = param_1 + ( ulong )(uVar4 + 6) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   pcVar3 = param_1 + ( ulong )(uVar4 + 5) * 8 + 0x10;
   if (uVar1 <= uVar4 + 4) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   local_68 = *(double*)pcVar3 + local_78;
   dStack_60 = *(double*)pcVar5 + dStack_70;
   if (uVar4 + 7 < uVar1) {
      pcVar5 = param_1 + ( ulong )(uVar4 + 8) * 8 + 0x10;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar5 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   pcVar3 = param_1 + ( ulong )(uVar4 + 7) * 8 + 0x10;
   if (uVar1 <= uVar4 + 6) {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }

   local_58 = local_68 + *(double*)pcVar3;
   dStack_50 = dStack_60 + *(double*)pcVar5;
   cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
   *(double*)( param_1 + 0x1160 ) = local_58;
   *(double*)( param_1 + 0x1168 ) = dStack_50;
   LAB_00108af8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t>::vhcurveto(CFF::cff1_cs_interp_env_t&, cff1_path_param_t&) */void CFF::path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::vhcurveto(cff1_cs_interp_env_t *param_1, cff1_path_param_t *param_2) {
   int iVar1;
   ulong uVar2;
   cff1_cs_interp_env_t *pcVar3;
   uint uVar4;
   uint uVar5;
   cff1_cs_interp_env_t *pcVar6;
   uint uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   double dVar9;
   double dVar10;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   double local_88;
   double dStack_80;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   long local_40;
   uVar5 = *(uint*)( param_1 + 0x14 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   local_88 = 0.0;
   dStack_80 = 0.0;
   if (( uVar5 & 4 ) == 0) {
      if (7 < uVar5) {
         uVar7 = 8;
         do {
            uVar4 = uVar7 - 8;
            local_a8._0_8_ = *(undefined8*)( param_1 + 0x1160 );
            pcVar3 = param_1 + (ulong)uVar4 * 8 + 0x18;
            if (uVar5 <= uVar4) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_a8._8_8_ = *(double*)( param_1 + 0x1168 ) + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 6) * 8 + 0x18;
            if (uVar5 <= uVar7 - 6) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(uVar7 - 7) * 8 + 0x18;
            if (uVar5 <= uVar7 - 7) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_98._0_8_ = (double)local_a8._0_8_ + *(double*)pcVar6;
            dVar10 = (double)local_a8._8_8_ + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 5) * 8 + 0x18;
            if (uVar5 <= uVar7 - 5) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar9 = (double)local_98._0_8_ + *(double*)pcVar3;
            local_88 = dVar9;
            dStack_80 = dVar10;
            local_98._8_8_ = dVar10;
            cff1_path_param_t::cubic_to(param_2, (point_t*)local_a8, (point_t*)local_98, (point_t*)&local_88);
            uVar5 = *(uint*)( param_1 + 0x14 );
            pcVar3 = param_1 + ( ulong )(uVar7 - 4) * 8 + 0x18;
            *(double*)( param_1 + 0x1160 ) = local_88;
            *(double*)( param_1 + 0x1168 ) = dStack_80;
            if (uVar5 <= uVar7 - 4) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_a8._0_8_ = dVar9 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 2) * 8 + 0x18;
            local_a8._8_8_ = dStack_80;
            if (uVar5 <= uVar7 - 2) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(uVar7 - 3) * 8 + 0x18;
            if (uVar5 <= uVar7 - 3) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_88 = (double)local_a8._0_8_ + *(double*)pcVar6;
            dVar9 = *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 1) * 8 + 0x18;
            local_98._8_8_ = dVar10 + dVar9;
            local_98._0_8_ = local_88;
            if (uVar5 <= uVar7 - 1) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dStack_80 = dVar10 + dVar9 + *(double*)pcVar3;
            if (( uVar5 - uVar4 < 0x10 ) && ( ( uVar5 & 1 ) != 0 )) {
               pcVar3 = param_1 + (ulong)uVar7 * 8 + 0x18;
               if (uVar5 <= uVar7) {
                  __hb_CrapPool = __hb_NullPool;
                  param_1[0x10] = (cff1_cs_interp_env_t)0x1;
                  pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
               }

               local_88 = local_88 + *(double*)pcVar3;
            }

            uVar7 = uVar7 + 8;
            cff1_path_param_t::cubic_to(param_2, (point_t*)local_a8, (point_t*)local_98, (point_t*)&local_88);
            uVar5 = *(uint*)( param_1 + 0x14 );
            *(double*)( param_1 + 0x1160 ) = local_88;
            *(double*)( param_1 + 0x1168 ) = dStack_80;
         }
 while ( uVar7 <= uVar5 );
      }

   }
 else {
      local_78 = *(double*)( param_1 + 0x1160 );
      dStack_70 = *(double*)( param_1 + 0x1168 ) + *(double*)( param_1 + 0x18 );
      dStack_50 = dStack_70 + *(double*)( param_1 + 0x28 );
      local_68 = local_78 + *(double*)( param_1 + 0x20 );
      local_58 = local_68 + *(double*)( param_1 + 0x30 );
      if (uVar5 < 0xc) {
         uVar8 = 4;
      }
 else {
         uVar2 = 0xc;
         do {
            uVar8 = uVar2;
            iVar1 = (int)uVar8;
            dStack_60 = dStack_50;
            cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
            uVar5 = *(uint*)( param_1 + 0x14 );
            dStack_70 = dStack_50;
            pcVar3 = param_1 + ( ulong )(iVar1 - 8U) * 8 + 0x18;
            *(double*)( param_1 + 0x1160 ) = local_58;
            *(double*)( param_1 + 0x1168 ) = dStack_50;
            if (uVar5 <= iVar1 - 8U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_78 = local_58 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 6U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 6U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(iVar1 - 7U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 7U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar10 = local_78 + *(double*)pcVar6;
            dStack_60 = dStack_50 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 5U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 5U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar9 = dStack_60 + *(double*)pcVar3;
            local_68 = dVar10;
            local_58 = dVar10;
            dStack_50 = dVar9;
            cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
            uVar5 = *(uint*)( param_1 + 0x14 );
            pcVar3 = param_1 + ( ulong )(iVar1 - 4U) * 8 + 0x18;
            *(double*)( param_1 + 0x1160 ) = local_58;
            *(double*)( param_1 + 0x1168 ) = dStack_50;
            local_78 = local_58;
            if (uVar5 <= iVar1 - 4U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dStack_70 = dVar9 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 2U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 2U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(iVar1 - 3U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 3U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_68 = dVar10 + *(double*)pcVar6;
            dStack_50 = dStack_70 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 1U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 1U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_58 = local_68 + *(double*)pcVar3;
            uVar2 = ( ulong )(iVar1 + 8U);
         }
 while ( iVar1 + 8U <= uVar5 );
      }

      dStack_60 = dStack_50;
      if ((uint)uVar8 < uVar5) {
         dStack_50 = dStack_50 + *(double*)( param_1 + uVar8 * 8 + 0x18 );
      }

      cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
      *(double*)( param_1 + 0x1160 ) = local_58;
      *(double*)( param_1 + 0x1168 ) = dStack_50;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::path_procs_t<cff1_path_procs_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t>::hvcurveto(CFF::cff1_cs_interp_env_t&, cff1_path_param_t&) */void CFF::path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::hvcurveto(cff1_cs_interp_env_t *param_1, cff1_path_param_t *param_2) {
   int iVar1;
   ulong uVar2;
   cff1_cs_interp_env_t *pcVar3;
   uint uVar4;
   uint uVar5;
   cff1_cs_interp_env_t *pcVar6;
   uint uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   double dVar9;
   double dVar10;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   double local_88;
   double dStack_80;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   long local_40;
   uVar5 = *(uint*)( param_1 + 0x14 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   local_88 = 0.0;
   dStack_80 = 0.0;
   if (( uVar5 & 4 ) == 0) {
      if (7 < uVar5) {
         uVar7 = 8;
         do {
            uVar4 = uVar7 - 8;
            local_a8._8_8_ = *(undefined8*)( param_1 + 0x1168 );
            pcVar3 = param_1 + (ulong)uVar4 * 8 + 0x18;
            if (uVar5 <= uVar4) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_a8._0_8_ = *(double*)( param_1 + 0x1160 ) + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 6) * 8 + 0x18;
            if (uVar5 <= uVar7 - 6) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(uVar7 - 7) * 8 + 0x18;
            if (uVar5 <= uVar7 - 7) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar10 = (double)local_a8._0_8_ + *(double*)pcVar6;
            local_98._8_8_ = (double)local_a8._8_8_ + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 5) * 8 + 0x18;
            if (uVar5 <= uVar7 - 5) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar9 = (double)local_98._8_8_ + *(double*)pcVar3;
            local_88 = dVar10;
            dStack_80 = dVar9;
            local_98._0_8_ = dVar10;
            cff1_path_param_t::cubic_to(param_2, (point_t*)local_a8, (point_t*)local_98, (point_t*)&local_88);
            uVar5 = *(uint*)( param_1 + 0x14 );
            pcVar3 = param_1 + ( ulong )(uVar7 - 4) * 8 + 0x18;
            *(double*)( param_1 + 0x1160 ) = local_88;
            *(double*)( param_1 + 0x1168 ) = dStack_80;
            if (uVar5 <= uVar7 - 4) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_a8._8_8_ = dVar9 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 2) * 8 + 0x18;
            local_a8._0_8_ = local_88;
            if (uVar5 <= uVar7 - 2) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(uVar7 - 3) * 8 + 0x18;
            if (uVar5 <= uVar7 - 3) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar9 = *(double*)pcVar6;
            dStack_80 = (double)local_a8._8_8_ + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(uVar7 - 1) * 8 + 0x18;
            local_98._8_8_ = dStack_80;
            local_98._0_8_ = dVar10 + dVar9;
            if (uVar5 <= uVar7 - 1) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_88 = dVar10 + dVar9 + *(double*)pcVar3;
            if (( uVar5 - uVar4 < 0x10 ) && ( ( uVar5 & 1 ) != 0 )) {
               pcVar3 = param_1 + (ulong)uVar7 * 8 + 0x18;
               if (uVar5 <= uVar7) {
                  __hb_CrapPool = __hb_NullPool;
                  param_1[0x10] = (cff1_cs_interp_env_t)0x1;
                  pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
               }

               dStack_80 = dStack_80 + *(double*)pcVar3;
            }

            uVar7 = uVar7 + 8;
            cff1_path_param_t::cubic_to(param_2, (point_t*)local_a8, (point_t*)local_98, (point_t*)&local_88);
            uVar5 = *(uint*)( param_1 + 0x14 );
            *(double*)( param_1 + 0x1160 ) = local_88;
            *(double*)( param_1 + 0x1168 ) = dStack_80;
         }
 while ( uVar7 <= uVar5 );
      }

   }
 else {
      dStack_70 = *(double*)( param_1 + 0x1168 );
      local_78 = *(double*)( param_1 + 0x1160 ) + *(double*)( param_1 + 0x18 );
      local_58 = local_78 + *(double*)( param_1 + 0x20 );
      dStack_60 = dStack_70 + *(double*)( param_1 + 0x28 );
      dStack_50 = dStack_60 + *(double*)( param_1 + 0x30 );
      if (uVar5 < 0xc) {
         uVar8 = 4;
      }
 else {
         uVar2 = 0xc;
         do {
            uVar8 = uVar2;
            iVar1 = (int)uVar8;
            local_68 = local_58;
            cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
            uVar5 = *(uint*)( param_1 + 0x14 );
            local_78 = local_58;
            pcVar3 = param_1 + ( ulong )(iVar1 - 8U) * 8 + 0x18;
            *(double*)( param_1 + 0x1160 ) = local_58;
            *(double*)( param_1 + 0x1168 ) = dStack_50;
            if (uVar5 <= iVar1 - 8U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dStack_70 = dStack_50 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 6U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 6U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(iVar1 - 7U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 7U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_68 = local_58 + *(double*)pcVar6;
            dVar10 = dStack_70 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 5U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 5U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dVar9 = local_68 + *(double*)pcVar3;
            dStack_60 = dVar10;
            local_58 = dVar9;
            dStack_50 = dVar10;
            cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
            uVar5 = *(uint*)( param_1 + 0x14 );
            pcVar3 = param_1 + ( ulong )(iVar1 - 4U) * 8 + 0x18;
            *(double*)( param_1 + 0x1160 ) = local_58;
            *(double*)( param_1 + 0x1168 ) = dStack_50;
            dStack_70 = dStack_50;
            if (uVar5 <= iVar1 - 4U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_78 = dVar9 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 2U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 2U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            pcVar6 = param_1 + ( ulong )(iVar1 - 3U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 3U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            local_58 = local_78 + *(double*)pcVar6;
            dStack_60 = dVar10 + *(double*)pcVar3;
            pcVar3 = param_1 + ( ulong )(iVar1 - 1U) * 8 + 0x18;
            if (uVar5 <= iVar1 - 1U) {
               __hb_CrapPool = __hb_NullPool;
               param_1[0x10] = (cff1_cs_interp_env_t)0x1;
               pcVar3 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }

            dStack_50 = dStack_60 + *(double*)pcVar3;
            uVar2 = ( ulong )(iVar1 + 8U);
         }
 while ( iVar1 + 8U <= uVar5 );
      }

      local_68 = local_58;
      if ((uint)uVar8 < uVar5) {
         local_58 = local_58 + *(double*)( param_1 + uVar8 * 8 + 0x18 );
      }

      cff1_path_param_t::cubic_to(param_2, (point_t*)&local_78, (point_t*)&local_68, (point_t*)&local_58);
      *(double*)( param_1 + 0x1160 ) = local_58;
      *(double*)( param_1 + 0x1168 ) = dStack_50;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CFF::path_procs_t<cff1_path_procs_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t>::flex1(CFF::cff1_cs_interp_env_t&, cff1_path_param_t&) */void CFF::path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::flex1(cff1_cs_interp_env_t *param_1, cff1_path_param_t *param_2) {
   double dVar1;
   cff1_cs_interp_env_t *pcVar2;
   cff1_cs_interp_env_t *pcVar3;
   long in_FS_OFFSET;
   double dVar4;
   double dVar5;
   double local_88;
   double dStack_80;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   double local_48;
   double dStack_40;
   double local_38;
   double dStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x14 ) == 0xb) {
      pcVar3 = param_1 + 0x18;
      dVar4 = 0.0;
      dVar5 = 0.0;
      do {
         dVar1 = *(double*)pcVar3;
         pcVar2 = pcVar3 + 8;
         pcVar3 = pcVar3 + 0x10;
         dVar4 = dVar4 + dVar1;
         dVar5 = dVar5 + *(double*)pcVar2;
      }
 while ( param_1 + 0x68 != pcVar3 );
      local_88 = *(double*)( param_1 + 0x18 ) + *(double*)( param_1 + 0x1160 );
      dStack_80 = *(double*)( param_1 + 0x20 ) + *(double*)( param_1 + 0x1168 );
      local_78 = local_88 + *(double*)( param_1 + 0x28 );
      dStack_70 = dStack_80 + *(double*)( param_1 + 0x30 );
      local_68 = local_78 + *(double*)( param_1 + 0x38 );
      dStack_60 = dStack_70 + *(double*)( param_1 + 0x40 );
      local_58 = local_68 + *(double*)( param_1 + 0x48 );
      dStack_50 = dStack_60 + *(double*)( param_1 + 0x50 );
      local_48 = local_58 + *(double*)( param_1 + 0x58 );
      dStack_40 = dStack_50 + *(double*)( param_1 + 0x60 );
      if ((double)( (ulong)dVar5 & _LC10 ) < (double)( (ulong)dVar4 & _LC10 )) {
         local_38 = local_48 + *(double*)( param_1 + 0x68 );
         dStack_30 = *(double*)( param_1 + 0x1168 );
      }
 else {
         local_38 = *(double*)( param_1 + 0x1160 );
         dStack_30 = dStack_40 + *(double*)( param_1 + 0x68 );
      }

      cff1_path_param_t::cubic_to(param_2, (point_t*)&local_88, (point_t*)&local_78, (point_t*)&local_68);
      *(double*)( param_1 + 0x1160 ) = local_68;
      *(double*)( param_1 + 0x1168 ) = dStack_60;
      cff1_path_param_t::cubic_to(param_2, (point_t*)&local_58, (point_t*)&local_48, (point_t*)&local_38);
      *(double*)( param_1 + 0x1160 ) = local_38;
      *(double*)( param_1 + 0x1168 ) = dStack_30;
   }
 else {
      *(int*)( param_1 + 0xc ) = *(int*)( param_1 + 8 ) + 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::cs_opset_t<CFF::number_t, cff1_cs_opset_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t, cff1_path_procs_path_t>::process_op(unsigned int, CFF::cff1_cs_interp_env_t&,
   cff1_path_param_t&) */void CFF::cs_opset_t<CFF::number_t,cff1_cs_opset_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t,cff1_path_procs_path_t>::process_op(uint param_1, cff1_cs_interp_env_t *param_2, cff1_path_param_t *param_3) {
   uint uVar1;
   cff1_cs_interp_env_t cVar2;
   CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   ulong uVar6;
   int iVar7;
   uint *puVar8;
   cff1_cs_interp_env_t *pcVar9;
   long lVar10;
   uint uVar11;
   cff1_cs_interp_env_t *pcVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   long in_FS_OFFSET;
   undefined8 uVar16;
   undefined1 auVar17[12];
   double local_a8;
   double dStack_a0;
   double local_98;
   double dStack_90;
   double local_88;
   double dStack_80;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x1f < param_1) {
      switch (param_1) {
         case 0xff:
      uVar11 = *(uint *)(param_2 + 0xc);
      uVar14 = *(uint *)(param_2 + 8);
      uVar15 = uVar11 + 4;
      if (uVar15 <= uVar14) {
        if (uVar11 < uVar14) {
          puVar8 = (uint *)((ulong)uVar11 + *(long *)param_2);
        }
        else {
          uVar15 = uVar14 + 5;
          *(uint *)(param_2 + 0xc) = uVar14 + 1;
          puVar8 = (uint *)&_hb_NullPool;
        }
        uVar11 = *puVar8;
        uVar14 = *(uint *)(param_2 + 0x14);
        if (uVar14 < 0x201) {
          pcVar9 = param_2 + (ulong)uVar14 * 8 + 0x18;
          *(uint *)(param_2 + 0x14) = uVar14 + 1;
        }
        else {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        *(double *)pcVar9 =
             (double)(int)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18) * __LC7;
        *(uint *)(param_2 + 0xc) = uVar15;
      }
      goto LAB_00109cb0;
         default:
      goto switchD_00109be6_caseD_2;
         case 0x122:
      if (*(int *)(param_2 + 0x14) == 7) {
        dStack_a0 = *(double *)(param_2 + 0x1168);
        local_a8 = *(double *)(param_2 + 0x1160) + *(double *)(param_2 + 0x18);
        local_98 = local_a8 + *(double *)(param_2 + 0x20);
        dStack_90 = dStack_a0 + *(double *)(param_2 + 0x28);
        local_88 = local_98 + *(double *)(param_2 + 0x30);
        local_78 = local_88 + *(double *)(param_2 + 0x38);
        local_68 = local_78 + *(double *)(param_2 + 0x40);
        local_58 = local_68 + *(double *)(param_2 + 0x48);
        dStack_80 = dStack_90;
        dStack_70 = dStack_90;
        dStack_60 = dStack_a0;
        dStack_50 = dStack_a0;
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_a8,(point_t *)&local_98,(point_t *)&local_88);
        *(double *)(param_2 + 0x1160) = local_88;
        *(double *)(param_2 + 0x1168) = dStack_80;
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_78,(point_t *)&local_68,(point_t *)&local_58);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        goto LAB_00109e90;
      }
      break;
         case 0x123:
      if (*(int *)(param_2 + 0x14) == 0xd) {
        local_a8 = *(double *)(param_2 + 0x18) + *(double *)(param_2 + 0x1160);
        dStack_a0 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
        local_98 = local_a8 + *(double *)(param_2 + 0x28);
        dStack_90 = dStack_a0 + *(double *)(param_2 + 0x30);
        local_88 = local_98 + *(double *)(param_2 + 0x38);
        dStack_80 = dStack_90 + *(double *)(param_2 + 0x40);
        local_78 = local_88 + *(double *)(param_2 + 0x48);
        dStack_70 = dStack_80 + *(double *)(param_2 + 0x50);
        local_68 = local_78 + *(double *)(param_2 + 0x58);
        dStack_60 = dStack_70 + *(double *)(param_2 + 0x60);
        local_58 = local_68 + *(double *)(param_2 + 0x68);
        dStack_50 = dStack_60 + *(double *)(param_2 + 0x70);
LAB_0010a9a4:
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_a8,(point_t *)&local_98,(point_t *)&local_88);
        *(double *)(param_2 + 0x1160) = local_88;
        *(double *)(param_2 + 0x1168) = dStack_80;
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_78,(point_t *)&local_68,(point_t *)&local_58);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        goto LAB_00109e90;
      }
      break;
         case 0x124:
      if (*(int *)(param_2 + 0x14) == 9) {
        local_a8 = *(double *)(param_2 + 0x18) + *(double *)(param_2 + 0x1160);
        dStack_a0 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168);
        local_98 = *(double *)(param_2 + 0x28) + local_a8;
        dStack_90 = *(double *)(param_2 + 0x30) + dStack_a0;
        local_88 = local_98 + *(double *)(param_2 + 0x38);
        local_78 = local_88 + *(double *)(param_2 + 0x40);
        local_68 = local_78 + *(double *)(param_2 + 0x48);
        dStack_60 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x1168) +
                    *(double *)(param_2 + 0x30) + *(double *)(param_2 + 0x50);
        local_58 = local_68 + *(double *)(param_2 + 0x58);
        dStack_50 = *(double *)(param_2 + 0x1168);
        dStack_80 = dStack_90;
        dStack_70 = dStack_90;
        goto LAB_0010a9a4;
      }
      break;
         case 0x125:
      path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::flex1
                (param_2,param_3);
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x1174) = 0;
      goto LAB_00109cb0;
      }

      *(int*)( param_2 + 0xc ) = *(int*)( param_2 + 8 ) + 1;
      goto LAB_00109e90;
   }

   switch (param_1) {
      case 1:
      case 0x12:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((uVar11 != 0) && ((uVar11 & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    *(uint *)(param_2 + 0x103c) = *(int *)(param_2 + 0x103c) + (uVar11 >> 1);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      default:
switchD_00109be6_caseD_2:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      opset_t<CFF::number_t>::process_op(param_1,(interp_env_t *)param_2);
      return;
    }
    goto LAB_0010af56;
      case 3:
      case 0x17:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((uVar11 != 0) && ((uVar11 & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    *(uint *)(param_2 + 0x1040) = *(int *)(param_2 + 0x1040) + (uVar11 >> 1);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 4:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (uVar11 < 2) {
        param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
        goto LAB_0010a24c;
      }
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168);
      *(undefined4 *)(param_2 + 0x1174) = 1;
      *(undefined2 *)(param_2 + 0x1170) = 0x101;
      *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
LAB_0010a261:
      pcVar9 = param_2 + (ulong)uVar11 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar11 - 1;
    }
    else {
LAB_0010a24c:
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168);
      if (uVar11 != 0) goto LAB_0010a261;
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    dStack_50 = dStack_50 + *(double *)pcVar9;
    cff1_path_param_t::move_to(param_3,(point_t *)&local_58);
    cVar2 = param_2[0x1039];
    *(double *)(param_2 + 0x1160) = local_58;
    *(double *)(param_2 + 0x1168) = dStack_50;
    goto joined_r0x0010a7f5;
      case 5:
    uVar11 = *(uint *)(param_2 + 0x14);
    uVar14 = 0;
    if (1 < uVar11) {
      do {
        pcVar9 = param_2 + (ulong)(uVar14 + 1) * 8 + 0x18;
        if (uVar11 <= uVar14 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_2 + (ulong)uVar14 * 8 + 0x18;
        if (uVar11 <= uVar14) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = *(double *)pcVar12 + *(double *)(param_2 + 0x1160);
        dStack_50 = *(double *)pcVar9 + *(double *)(param_2 + 0x1168);
        cff1_path_param_t::line_to(param_3,(point_t *)&local_58);
        uVar11 = *(uint *)(param_2 + 0x14);
        uVar15 = uVar14 + 4;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar14 = uVar14 + 2;
      } while (uVar15 <= uVar11);
    }
    goto LAB_00109e90;
      case 6:
    uVar11 = *(uint *)(param_2 + 0x14);
    uVar6 = 2;
    if (uVar11 < 2) {
      uVar13 = 0;
    }
    else {
      do {
        uVar13 = uVar6;
        iVar7 = (int)uVar13;
        dStack_50 = *(double *)(param_2 + 0x1168);
        pcVar9 = param_2 + (ulong)(iVar7 - 2U) * 8 + 0x18;
        if (uVar11 <= iVar7 - 2U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = *(double *)(param_2 + 0x1160) + *(double *)pcVar9;
        cff1_path_param_t::line_to(param_3,(point_t *)&local_58);
        pcVar9 = param_2 + (ulong)(iVar7 - 1U) * 8 + 0x18;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        if (*(uint *)(param_2 + 0x14) <= iVar7 - 1U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = dStack_50 + *(double *)pcVar9;
        cff1_path_param_t::line_to(param_3,(point_t *)&local_58);
        uVar11 = *(uint *)(param_2 + 0x14);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar6 = (ulong)(iVar7 + 2U);
      } while (iVar7 + 2U <= uVar11);
    }
    if ((uint)uVar13 < uVar11) {
      dStack_50 = *(double *)(param_2 + 0x1168);
      local_58 = *(double *)(param_2 + 0x1160) + *(double *)(param_2 + uVar13 * 8 + 0x18);
LAB_0010a181:
      cff1_path_param_t::line_to(param_3,(point_t *)&local_58);
      *(double *)(param_2 + 0x1160) = local_58;
      *(double *)(param_2 + 0x1168) = dStack_50;
    }
    goto LAB_00109e90;
      case 7:
    uVar11 = *(uint *)(param_2 + 0x14);
    uVar6 = 2;
    if (uVar11 < 2) {
      uVar13 = 0;
    }
    else {
      do {
        uVar13 = uVar6;
        iVar7 = (int)uVar13;
        local_58 = *(double *)(param_2 + 0x1160);
        pcVar9 = param_2 + (ulong)(iVar7 - 2U) * 8 + 0x18;
        if (uVar11 <= iVar7 - 2U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = *(double *)(param_2 + 0x1168) + *(double *)pcVar9;
        cff1_path_param_t::line_to(param_3,(point_t *)&local_58);
        pcVar9 = param_2 + (ulong)(iVar7 - 1U) * 8 + 0x18;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        if (*(uint *)(param_2 + 0x14) <= iVar7 - 1U) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_58 + *(double *)pcVar9;
        cff1_path_param_t::line_to(param_3,(point_t *)&local_58);
        uVar11 = *(uint *)(param_2 + 0x14);
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar6 = (ulong)(iVar7 + 2U);
      } while (iVar7 + 2U <= uVar11);
    }
    if ((uint)uVar13 < uVar11) {
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168) + *(double *)(param_2 + uVar13 * 8 + 0x18);
      goto LAB_0010a181;
    }
    goto LAB_00109e90;
      case 8:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (5 < uVar11) {
      uVar14 = 0;
      do {
        pcVar9 = param_2 + (ulong)(uVar14 + 1) * 8 + 0x18;
        if (uVar11 <= uVar14 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_2 + (ulong)uVar14 * 8 + 0x18;
        if (uVar11 <= uVar14) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_78 = *(double *)pcVar12 + *(double *)(param_2 + 0x1160);
        dStack_70 = *(double *)pcVar9 + *(double *)(param_2 + 0x1168);
        pcVar9 = param_2 + (ulong)(uVar14 + 3) * 8 + 0x18;
        if (uVar11 <= uVar14 + 3) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_2 + (ulong)(uVar14 + 2) * 8 + 0x18;
        if (uVar11 <= uVar14 + 2) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_68 = *(double *)pcVar12 + local_78;
        dStack_60 = *(double *)pcVar9 + dStack_70;
        pcVar9 = param_2 + (ulong)(uVar14 + 5) * 8 + 0x18;
        if (uVar11 <= uVar14 + 5) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_2 + (ulong)(uVar14 + 4) * 8 + 0x18;
        if (uVar11 <= uVar14 + 4) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_68 + *(double *)pcVar12;
        dStack_50 = dStack_60 + *(double *)pcVar9;
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_78,(point_t *)&local_68,(point_t *)&local_58);
        uVar11 = *(uint *)(param_2 + 0x14);
        uVar15 = uVar14 + 0xc;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        uVar14 = uVar14 + 6;
      } while (uVar15 <= uVar11);
    }
    goto LAB_00109e90;
      case 10:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (uVar11 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar9 = param_2 + (ulong)uVar11 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar11 - 1;
    }
    uVar11 = (int)*(double *)pcVar9 + *(int *)(param_2 + 0x1150);
    if (((-1 < (int)uVar11) &&
        (pCVar3 = *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(param_2 + 0x1158),
        pCVar3 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0)) &&
       (uVar11 < (ushort)(*(ushort *)pCVar3 << 8 | *(ushort *)pCVar3 >> 8))) {
      uVar14 = *(uint *)(param_2 + 0x104c);
      if (uVar14 < 10) {
        uVar16 = *(undefined8 *)(param_2 + 8);
        lVar10 = (ulong)uVar14 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar14 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar16;
        *(undefined8 *)(param_2 + lVar10 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar10 + 0x1058) = uVar16;
        *(undefined8 *)(param_2 + lVar10 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar17 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](pCVar3,uVar11);
        *(uint *)(param_2 + 0x1034) = uVar11;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar17;
        *(undefined8 *)(param_2 + 0x102c) = 0x200000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        break;
      }
    }
    goto LAB_0010ad70;
      case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x104c) == 0) {
      _DAT_0010c018 = ___stack_chk_fail;
      uVar16 = __hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
      param_2[0x1048] = (cff1_cs_interp_env_t)0x1;
      pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar16;
    }
    else {
      uVar11 = *(int *)(param_2 + 0x104c) - 1;
      *(uint *)(param_2 + 0x104c) = uVar11;
      pcVar9 = param_2 + (ulong)uVar11 * 0x18 + 0x1050;
    }
    uVar4 = *(undefined8 *)pcVar9;
    uVar5 = *(undefined8 *)(pcVar9 + 8);
    *(undefined8 *)(param_2 + 0x1020) = uVar4;
    *(undefined8 *)(param_2 + 0x1028) = uVar5;
    uVar16 = *(undefined8 *)(pcVar9 + 0x10);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0x1030) = uVar16;
    break;
      case 0xe:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((*(uint *)(param_2 + 0x14) != 0) && ((*(uint *)(param_2 + 0x14) & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    param_2[0x1038] = (cff1_cs_interp_env_t)0x1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x13:
      case 0x14:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((*(uint *)(param_2 + 0x14) != 0) && ((*(uint *)(param_2 + 0x14) & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined4 *)(param_2 + 0x1174) = 1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
      param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
      iVar7 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
      *(int *)(param_2 + 0x1040) = iVar7;
      uVar11 = (uint)(iVar7 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      *(uint *)(param_2 + 0x1044) = uVar11;
    }
    else {
      uVar11 = *(uint *)(param_2 + 0x1044);
    }
    if (uVar11 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x1174) = 0;
      *(uint *)(param_2 + 0xc) = uVar11 + *(int *)(param_2 + 0xc);
    }
    break;
      case 0x15:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (uVar11 < 3) {
        param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
        goto LAB_0010a40c;
      }
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168);
      *(undefined4 *)(param_2 + 0x1174) = 1;
      lVar10 = (ulong)uVar11 * 8;
      *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      pcVar9 = param_2 + lVar10 + 0x10;
      *(undefined2 *)(param_2 + 0x1170) = 0x101;
LAB_0010a43d:
      *(uint *)(param_2 + 0x14) = uVar11 - 2;
      pcVar12 = param_2 + lVar10 + 8;
    }
    else {
LAB_0010a40c:
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168);
      if (uVar11 == 0) {
        pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      }
      else {
        lVar10 = (ulong)uVar11 * 8;
        *(uint *)(param_2 + 0x14) = uVar11 - 1;
        pcVar9 = param_2 + lVar10 + 0x10;
        if (uVar11 - 1 != 0) goto LAB_0010a43d;
      }
      __hb_CrapPool = __hb_NullPool;
      pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
    }
    local_58 = *(double *)pcVar12 + local_58;
    dStack_50 = *(double *)pcVar9 + dStack_50;
    cff1_path_param_t::move_to(param_3,(point_t *)&local_58);
    *(double *)(param_2 + 0x1160) = local_58;
    *(double *)(param_2 + 0x1168) = dStack_50;
    if (param_2[0x1039] != (cff1_cs_interp_env_t)0x0) goto LAB_00109e90;
    goto LAB_0010a2a3;
      case 0x16:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (uVar11 < 2) {
        param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
        goto LAB_0010a7a4;
      }
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168);
      *(undefined4 *)(param_2 + 0x1174) = 1;
      *(undefined2 *)(param_2 + 0x1170) = 0x101;
      *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
LAB_0010a7b9:
      pcVar9 = param_2 + (ulong)uVar11 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar11 - 1;
    }
    else {
LAB_0010a7a4:
      local_58 = *(double *)(param_2 + 0x1160);
      dStack_50 = *(double *)(param_2 + 0x1168);
      if (uVar11 != 0) goto LAB_0010a7b9;
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    local_58 = local_58 + *(double *)pcVar9;
    cff1_path_param_t::move_to(param_3,(point_t *)&local_58);
    cVar2 = param_2[0x1039];
    *(double *)(param_2 + 0x1160) = local_58;
    *(double *)(param_2 + 0x1168) = dStack_50;
joined_r0x0010a7f5:
    if (cVar2 == (cff1_cs_interp_env_t)0x0) {
LAB_0010a2a3:
      if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
        iVar7 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar7;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar7 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff1_cs_interp_env_t)0x1;
    }
    goto LAB_00109e90;
      case 0x18:
    path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::rcurveline
              (param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x19:
    path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::rlinecurve
              (param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x1a:
    uVar11 = *(uint *)(param_2 + 0x14);
    local_78 = *(double *)(param_2 + 0x1160);
    dStack_70 = *(double *)(param_2 + 0x1168);
    uVar14 = 4;
    if ((uVar11 & 1) != 0) {
      local_78 = local_78 + *(double *)(param_2 + 0x18);
      uVar14 = 5;
    }
    uVar15 = uVar11 & 1;
    if (uVar14 <= uVar11) {
      do {
        pcVar9 = param_2 + (ulong)uVar15 * 8 + 0x18;
        if (uVar11 <= uVar15) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_70 = dStack_70 + *(double *)pcVar9;
        pcVar9 = param_2 + (ulong)(uVar15 + 2) * 8 + 0x18;
        if (uVar11 <= uVar15 + 2) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_2 + (ulong)(uVar15 + 1) * 8 + 0x18;
        if (uVar11 <= uVar15 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_60 = dStack_70 + *(double *)pcVar9;
        local_68 = local_78 + *(double *)pcVar12;
        pcVar9 = param_2 + (ulong)(uVar15 + 3) * 8 + 0x18;
        if (uVar11 <= uVar15 + 3) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        dStack_50 = dStack_60 + *(double *)pcVar9;
        local_58 = local_68;
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_78,(point_t *)&local_68,(point_t *)&local_58);
        uVar11 = *(uint *)(param_2 + 0x14);
        uVar1 = uVar14 + 4;
        local_78 = local_58;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        dStack_70 = dStack_50;
        uVar15 = uVar14;
        uVar14 = uVar1;
      } while (uVar1 <= uVar11);
    }
    goto LAB_00109e90;
      case 0x1b:
    uVar11 = *(uint *)(param_2 + 0x14);
    local_78 = *(double *)(param_2 + 0x1160);
    dStack_70 = *(double *)(param_2 + 0x1168);
    uVar14 = 4;
    if ((uVar11 & 1) != 0) {
      dStack_70 = dStack_70 + *(double *)(param_2 + 0x18);
      uVar14 = 5;
    }
    uVar15 = uVar11 & 1;
    if (uVar14 <= uVar11) {
      do {
        pcVar9 = param_2 + (ulong)uVar15 * 8 + 0x18;
        if (uVar11 <= uVar15) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_78 = local_78 + *(double *)pcVar9;
        pcVar9 = param_2 + (ulong)(uVar15 + 2) * 8 + 0x18;
        if (uVar11 <= uVar15 + 2) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        pcVar12 = param_2 + (ulong)(uVar15 + 1) * 8 + 0x18;
        if (uVar11 <= uVar15 + 1) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar12 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_68 = local_78 + *(double *)pcVar12;
        dStack_60 = dStack_70 + *(double *)pcVar9;
        pcVar9 = param_2 + (ulong)(uVar15 + 3) * 8 + 0x18;
        if (uVar11 <= uVar15 + 3) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_cs_interp_env_t)0x1;
          pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
        }
        local_58 = local_68 + *(double *)pcVar9;
        dStack_50 = dStack_60;
        cff1_path_param_t::cubic_to
                  (param_3,(point_t *)&local_78,(point_t *)&local_68,(point_t *)&local_58);
        uVar11 = *(uint *)(param_2 + 0x14);
        uVar1 = uVar14 + 4;
        dStack_70 = dStack_50;
        *(double *)(param_2 + 0x1160) = local_58;
        *(double *)(param_2 + 0x1168) = dStack_50;
        local_78 = local_58;
        uVar15 = uVar14;
        uVar14 = uVar1;
      } while (uVar1 <= uVar11);
    }
    goto LAB_00109e90;
      case 0x1d:
    uVar11 = *(uint *)(param_2 + 0x14);
    if (uVar11 == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar9 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar9 = param_2 + (ulong)uVar11 * 8 + 0x10;
      *(uint *)(param_2 + 0x14) = uVar11 - 1;
    }
    uVar11 = (int)*(double *)pcVar9 + *(int *)(param_2 + 0x1140);
    if (((-1 < (int)uVar11) &&
        (pCVar3 = *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(param_2 + 0x1148),
        pCVar3 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0)) &&
       (uVar11 < (ushort)(*(ushort *)pCVar3 << 8 | *(ushort *)pCVar3 >> 8))) {
      uVar14 = *(uint *)(param_2 + 0x104c);
      if (uVar14 < 10) {
        uVar16 = *(undefined8 *)(param_2 + 8);
        lVar10 = (ulong)uVar14 * 0x18;
        *(uint *)(param_2 + 0x104c) = uVar14 + 1;
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + 0x1028) = uVar16;
        *(undefined8 *)(param_2 + lVar10 + 0x1050) = *(undefined8 *)param_2;
        *(undefined8 *)(param_2 + lVar10 + 0x1058) = uVar16;
        *(undefined8 *)(param_2 + lVar10 + 0x1060) = *(undefined8 *)(param_2 + 0x1030);
        auVar17 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](pCVar3,uVar11);
        *(uint *)(param_2 + 0x1034) = uVar11;
        *(undefined1 (*) [12])(param_2 + 0x1020) = auVar17;
        *(undefined8 *)(param_2 + 0x102c) = 0x100000000;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0x1020);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x1028);
        break;
      }
    }
LAB_0010ad70:
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
    break;
      case 0x1e:
    path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::vhcurveto
              (param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
    break;
      case 0x1f:
    path_procs_t<cff1_path_procs_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t>::hvcurveto
              (param_2,param_3);
LAB_00109e90:
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1174) = 0;
   }

   LAB_00109cb0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010af56:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* cff1_cs_opset_path_t::process_seac(CFF::cff1_cs_interp_env_t&, cff1_path_param_t&) */void cff1_cs_opset_path_t::process_seac(cff1_cs_interp_env_t *param_1, cff1_path_param_t *param_2) {
   byte bVar1;
   long lVar2;
   undefined8 uVar3;
   char *pcVar4;
   char cVar5;
   cff1_cs_interp_env_t *pcVar6;
   ushort uVar7;
   uint uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   ushort uVar12;
   uint uVar13;
   ulong uVar14;
   uint uVar15;
   long lVar16;
   uint uVar17;
   long in_FS_OFFSET;
   double local_58;
   double local_50;
   long local_40;
   lVar2 = *(long*)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar16 = *(long*)( lVar2 + 8 );
   uVar3 = *(undefined8*)( lVar2 + 0x10 );
   if (*(int*)( lVar2 + 0x18 ) != 0) {
      if (( *(float*)( lVar2 + 0x1c ) != *(float*)( lVar2 + 0x24 ) ) || ( *(float*)( lVar2 + 0x20 ) != *(float*)( lVar2 + 0x28 ) )) {
         lVar9 = *(long*)( lVar16 + 0x38 );
         if (lVar9 != 0) {
            lVar9 = *(long*)( lVar9 + 8 );
         }

         ( **(code**)( lVar16 + 0x18 ) )(lVar16, uVar3, lVar2 + 0x18, lVar9);
      }

      lVar9 = *(long*)( lVar16 + 0x38 );
      if (lVar9 != 0) {
         lVar9 = *(long*)( lVar9 + 0x20 );
      }

      ( **(code**)( lVar16 + 0x30 ) )(lVar16, uVar3, lVar2 + 0x18, lVar9);
   }

   *(undefined4*)( lVar2 + 0x18 ) = 0;
   uVar8 = *(uint*)( param_1 + 0x14 );
   lVar16 = *(long*)( param_2 + 0x18 );
   *(undefined1(*) [16])( lVar2 + 0x1c ) = (undefined1[16])0x0;
   local_58 = __hb_NullPool;
   uVar14 = ( ulong )(3 < uVar8);
   uVar11 = uVar8;
   if (3 < uVar8) {
      uVar14 = ( ulong )(uVar8 - 3);
      local_58 = *(double*)( param_1 + ( ulong )(uVar8 - 4) * 8 + 0x18 );
      LAB_0010b159:local_50 = *(double*)( param_1 + uVar14 * 8 + 0x18 );
      uVar14 = ( ulong )(uVar8 - 2);
      LAB_0010b169:uVar13 = ( uint ) * (double*)( param_1 + uVar14 * 8 + 0x18 );
      if (0xff < uVar13) {
         uVar13 = 0;
         goto LAB_0010b1d5;
      }

      LAB_0010b17c:bVar1 = ( &standard_encoding_to_sid )[uVar13];
      uVar14 = (ulong)bVar1;
      pcVar4 = *(char**)( lVar16 + 0x50 );
      if (pcVar4 == &_hb_NullPool) {
         if (( *(int*)( lVar16 + 0xf4 ) != 0 ) || ( 0xe4 < uVar13 )) {
            LAB_0010b1c4:uVar14 = 0;
         }

         goto LAB_0010b1c9;
      }

      cVar5 = *pcVar4;
      uVar13 = *(uint*)( lVar16 + 0x128 );
      uVar10 = (uint)bVar1;
      if (cVar5 == '\x01') {
         lVar16 = *(long*)( param_2 + 0x18 );
         uVar11 = *(uint*)( param_1 + 0x14 );
         if (uVar10 == 0) goto LAB_0010b1c9;
         if (1 < uVar13) {
            uVar14 = 0;
            uVar15 = 1;
            do {
               uVar7 = *(ushort*)( pcVar4 + uVar14 * 3 + 1 ) << 8 | *(ushort*)( pcVar4 + uVar14 * 3 + 1 ) >> 8;
               if (( uVar7 <= uVar10 ) && ( uVar10 <= (uint)uVar7 + (uint)(byte)pcVar4[uVar14 * 3 + 3] )) {
                  uVar14 = ( ulong )(( uVar15 + uVar10 ) - (uint)uVar7);
                  goto LAB_0010b1c9;
               }

               uVar15 = uVar15 + 1 + (uint)(byte)pcVar4[uVar14 * 3 + 3];
               uVar14 = ( ulong )((int)uVar14 + 1);
            }
 while ( uVar15 < uVar13 );
         }

      }
 else if (cVar5 == '\x02') {
         lVar16 = *(long*)( param_2 + 0x18 );
         uVar11 = *(uint*)( param_1 + 0x14 );
         uVar15 = (uint)bVar1;
         if (uVar10 == 0) goto LAB_0010b1c9;
         if (1 < uVar13) {
            uVar10 = 0;
            uVar17 = 1;
            do {
               uVar7 = *(ushort*)( pcVar4 + (ulong)uVar10 * 4 + 1 ) << 8 | *(ushort*)( pcVar4 + (ulong)uVar10 * 4 + 1 ) >> 8;
               uVar12 = *(ushort*)( pcVar4 + (ulong)uVar10 * 4 + 3 ) << 8 | *(ushort*)( pcVar4 + (ulong)uVar10 * 4 + 3 ) >> 8;
               if (( uVar7 <= uVar15 ) && ( uVar15 <= (uint)uVar7 + (uint)uVar12 )) {
                  uVar14 = ( ulong )(( uVar17 + uVar15 ) - (uint)uVar7);
                  goto LAB_0010b1c9;
               }

               uVar17 = uVar17 + 1 + (uint)uVar12;
               uVar10 = uVar10 + 1;
            }
 while ( uVar17 < uVar13 );
         }

      }
 else {
         if (cVar5 != '\0') goto LAB_0010b1c4;
         lVar16 = *(long*)( param_2 + 0x18 );
         uVar11 = *(uint*)( param_1 + 0x14 );
         if (bVar1 == 0) goto LAB_0010b1c9;
         if (1 < uVar13) {
            uVar14 = 1;
            do {
               if (uVar10 == ( ushort )(*(ushort*)( pcVar4 + uVar14 * 2 + -1 ) << 8 | *(ushort*)( pcVar4 + uVar14 * 2 + -1 ) >> 8)) {
                  uVar14 = uVar14 & 0xffffffff;
                  goto LAB_0010b1c9;
               }

               uVar14 = uVar14 + 1;
            }
 while ( uVar14 != uVar13 );
         }

      }

      uVar13 = 0;
      if (uVar8 - 1 < uVar11) goto LAB_0010b1d5;
      LAB_0010b426:__hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      pcVar6 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
   }
 else {
      __hb_CrapPool = __hb_NullPool;
      param_1[0x10] = (cff1_cs_interp_env_t)0x1;
      if (uVar8 == 3) goto LAB_0010b159;
      local_50 = local_58;
      if (uVar8 == 2) goto LAB_0010b169;
      uVar13 = (uint)__hb_NullPool;
      local_50 = local_58;
      if (uVar13 < 0x100) goto LAB_0010b17c;
      LAB_0010b1c9:uVar13 = (uint)uVar14;
      if (uVar11 <= uVar8 - 1) goto LAB_0010b426;
      LAB_0010b1d5:pcVar6 = param_1 + (ulong)uVar8 * 8 + 0x10;
   }

   uVar8 = ( uint ) * (double*)pcVar6;
   if (uVar8 < 0x100) {
      uVar11 = ( uint )(byte)(&standard_encoding_to_sid)[uVar8];
      pcVar4 = *(char**)( lVar16 + 0x50 );
      if (pcVar4 == &_hb_NullPool) {
         if (( *(int*)( lVar16 + 0xf4 ) == 0 ) && ( uVar8 < 0xe5 )) {
            LAB_0010b26b:if (( ( param_1[0x1180] == (cff1_cs_interp_env_t)0x0 ) && ( uVar13 != 0 ) ) && ( ( uVar11 != 0 && ( ( cVar5 = _get_path(*(accelerator_t**)( param_2 + 0x18 ), *(hb_font_t**)param_2, uVar13, *(hb_draw_session_t**)( param_2 + 8 ), true, (point_t*)0x0) ),cVar5 != '\0' && ( cVar5 = _get_path(*(accelerator_t**)( param_2 + 0x18 ), *(hb_font_t**)param_2, uVar11, *(hb_draw_session_t**)( param_2 + 8 ), true, (point_t*)&local_58) ),cVar5 != '\0' ) ) )) goto LAB_0010b2cd;
         }

      }
 else {
         cVar5 = *pcVar4;
         uVar10 = *(uint*)( lVar16 + 0x128 );
         if (cVar5 == '\x01') {
            if (( uVar11 != 0 ) && ( 1 < uVar10 )) {
               uVar14 = 0;
               uVar8 = 1;
               do {
                  uVar7 = *(ushort*)( pcVar4 + uVar14 * 3 + 1 ) << 8 | *(ushort*)( pcVar4 + uVar14 * 3 + 1 ) >> 8;
                  if (( uVar7 <= uVar11 ) && ( uVar11 <= (uint)uVar7 + (uint)(byte)pcVar4[uVar14 * 3 + 3] )) {
                     uVar11 = ( uVar8 + uVar11 ) - (uint)uVar7;
                     goto LAB_0010b26b;
                  }

                  uVar8 = uVar8 + 1 + (uint)(byte)pcVar4[uVar14 * 3 + 3];
                  uVar14 = ( ulong )((int)uVar14 + 1);
               }
 while ( uVar8 < uVar10 );
            }

         }
 else if (cVar5 == '\x02') {
            if (( uVar11 != 0 ) && ( 1 < uVar10 )) {
               uVar14 = 0;
               uVar8 = 1;
               do {
                  uVar7 = *(ushort*)( pcVar4 + uVar14 * 4 + 1 ) << 8 | *(ushort*)( pcVar4 + uVar14 * 4 + 1 ) >> 8;
                  uVar12 = *(ushort*)( pcVar4 + uVar14 * 4 + 3 ) << 8 | *(ushort*)( pcVar4 + uVar14 * 4 + 3 ) >> 8;
                  if (( uVar7 <= uVar11 ) && ( uVar11 <= (uint)uVar7 + (uint)uVar12 )) {
                     uVar11 = ( uVar8 + uVar11 ) - (uint)uVar7;
                     goto LAB_0010b26b;
                  }

                  uVar8 = uVar8 + 1 + (uint)uVar12;
                  uVar14 = ( ulong )((int)uVar14 + 1);
               }
 while ( uVar8 < uVar10 );
            }

         }
 else if (( ( cVar5 == '\0' ) && ( ( &standard_encoding_to_sid )[uVar8] != 0 ) ) && ( 1 < uVar10 )) {
            uVar14 = 1;
            do {
               if (uVar11 == ( ushort )(*(ushort*)( pcVar4 + uVar14 * 2 + -1 ) << 8 | *(ushort*)( pcVar4 + uVar14 * 2 + -1 ) >> 8)) {
                  uVar11 = (uint)uVar14;
                  goto LAB_0010b26b;
               }

               uVar14 = uVar14 + 1;
            }
 while ( uVar14 != uVar10 );
         }

      }

   }

   *(int*)( param_1 + 0xc ) = *(int*)( param_1 + 8 ) + 1;
   LAB_0010b2cd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

