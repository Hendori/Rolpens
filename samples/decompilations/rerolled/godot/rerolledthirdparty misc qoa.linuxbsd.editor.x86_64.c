void qoa_lms_update(int *param_1, undefined4 param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   uVar2 = param_3 >> 4;
   uVar1 = -uVar2;
   param_1[4] = ( ~-(uint)(*param_1 < 0) & uVar2 | uVar1 & -(uint)(*param_1 < 0) ) + param_1[4];
   for (int i = 0; i < 3; i++) {
      param_1[( i + 5 )] = ( ~-(uint)(param_1[1] < 0) & uVar2 | uVar1 & -(uint)(param_1[1] < 0) ) + param_1[( i + 5 )];
   }

   *(ulong*)param_1 = CONCAT44(param_1[2], param_1[1]);
   *(ulong*)( param_1 + 2 ) = CONCAT44(param_2, param_1[3]);
   return;
}
undefined8 qoa_encode_header(long param_1, undefined4 *param_2) {
   uint uVar1;
   uVar1 = *(uint*)( param_1 + 8 );
   *param_2 = 0x66616f71;
   param_2[1] = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   return 8;
}
uint qoa_encode_frame(long param_1, uint *param_2, uint param_3, ulong *param_4) {
   int iVar1;
   uint uVar2;
   int iVar3;
   uint *puVar4;
   int iVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   int iVar9;
   int iVar10;
   uint *puVar11;
   int iVar12;
   ulong uVar13;
   ulong uVar14;
   long lVar15;
   int *piVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   uint uVar20;
   uint *puVar21;
   ulong *puVar22;
   ulong uVar23;
   int iVar24;
   uint uVar25;
   int iVar26;
   uint *puVar27;
   long lVar28;
   undefined1 *puVar29;
   uint uVar30;
   int iVar31;
   ulong uVar32;
   long in_FS_OFFSET;
   ulong uVar33;
   ulong uVar34;
   ulong uVar35;
   ulong uVar36;
   ulong local_f8;
   int local_d4;
   ulong local_d0;
   int local_c4;
   byte local_b8;
   undefined1 local_88[16];
   undefined1 local_78[16];
   ulong local_68;
   ulong uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   uVar33 = 0;
   uVar34 = 0;
   uVar35 = 0;
   uVar36 = 0;
   uVar2 = *param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   uVar6 = (ulong)param_2[1] << 0x20 | (ulong)uVar2 << 0x38;
   uVar7 = uVar6 | (ulong)param_3 << 0x10;
   uVar14 = ( ulong )(( ( param_3 + 0x13 ) / 0x14 + 2 ) * uVar2 * 8 + 8);
   *param_4 = uVar6 >> 0x38 | ( (ulong)param_2[1] << 0x20 & 0xff000000000000 ) >> 0x28 | ( uVar7 & 0xff0000000000 ) >> 0x18 | ( uVar7 & 0xff00000000 ) >> 8 | ( ( uVar7 | uVar14 ) & 0xff000000 ) << 8 | ( ( uVar7 | uVar14 ) & 0xff0000 ) << 0x18 | ( uVar14 & 0xff00 ) << 0x28 | uVar14 << 0x38;
   if (uVar2 == 0) {
      uVar30 = 8;
   }
 else {
      puVar27 = param_2 + 4;
      uVar6 = 8;
      puVar11 = puVar27 + (ulong)uVar2 * 8;
      do {
         uVar14 = 0;
         uVar7 = 0;
         puVar4 = puVar27 + -4;
         do {
            puVar21 = puVar4;
            uVar32 = (ulong)(ushort)puVar21[3];
            uVar13 = uVar14 << 0x10;
            uVar8 = uVar7 << 0x10;
            uVar14 = uVar13 | uVar32;
            uVar23 = (ulong)(ushort)puVar21[7];
            uVar7 = uVar8 | uVar23;
            puVar4 = puVar21 + 1;
         }
 while ( puVar21 + 1 != puVar27 );
         iVar26 = (int)uVar6;
         *(ulong*)( (long)param_4 + uVar6 ) = uVar13 >> 0x38 | ( uVar13 & 0xff000000000000 ) >> 0x28 | ( uVar13 & 0xff0000000000 ) >> 0x18 | ( uVar13 & 0xff00000000 ) >> 8 | ( uVar13 & 0xff000000 ) << 8 | ( uVar13 & 0xff0000 ) << 0x18 | ( uVar32 & 0xff00 ) << 0x28 | uVar32 << 0x38;
         puVar27 = puVar21 + 9;
         uVar6 = ( ulong )(iVar26 + 0x10);
         *(ulong*)( (long)param_4 + ( ulong )(iVar26 + 8) ) = uVar8 >> 0x38 | ( uVar8 & 0xff000000000000 ) >> 0x28 | ( uVar8 & 0xff0000000000 ) >> 0x18 | ( uVar8 & 0xff00000000 ) >> 8 | ( uVar8 & 0xff000000 ) << 8 | ( uVar8 & 0xff0000 ) << 0x18 | ( uVar23 & 0xff00 ) << 0x28 | uVar23 << 0x38;
      }
 while ( puVar27 != puVar11 );
      uVar30 = uVar2 * 0x10 + 8;
   }

   if (param_3 != 0) {
      iVar26 = 0;
      uVar20 = 0;
      do {
         if (uVar2 != 0) {
            iVar5 = param_3 - uVar20;
            piVar16 = (int*)local_88;
            puVar29 = qoa_dequant_tab;
            if (0x14 < iVar5) {
               iVar5 = 0x14;
            }

            iVar31 = uVar2 * ( iVar5 + uVar20 );
            local_b8 = ( '\x14' - (char)iVar5 ) * '\x03';
            puVar22 = (ulong*)( param_2 + 3 );
            iVar5 = iVar31 + uVar2;
            uVar6 = uVar33;
            uVar7 = uVar34;
            uVar14 = uVar35;
            uVar8 = uVar36;
            local_d4 = iVar26;
            uVar25 = uVar30;
            do {
               iVar19 = *piVar16;
               local_d0 = 0;
               iVar1 = iVar19 + 0x10;
               local_f8 = 0xffffffffffffffff;
               local_c4 = 0;
               uVar33 = uVar6;
               uVar34 = uVar7;
               uVar35 = uVar14;
               uVar36 = uVar8;
               do {
                  local_68 = *puVar22;
                  uStack_60 = puVar22[1];
                  local_58 = puVar22[2];
                  uStack_50 = puVar22[3];
                  uVar13 = ( ulong )(iVar19 % 0x10);
                  if (local_d4 < iVar31) {
                     uVar32 = 0;
                     lVar28 = uVar13 * 8;
                     iVar3 = *(int*)( qoa_reciprocal_tab + uVar13 * 4 );
                     iVar24 = local_d4;
                     do {
                        iVar12 = (int)*(short*)( param_1 + (long)iVar24 * 2 );
                        iVar17 = (int)( ( local_68 & 0xffffffff ) * ( local_58 & 0xffffffff ) ) + (int)( ( uStack_60 & 0xffffffff ) * ( uStack_50 & 0xffffffff ) ) + (int)( ( local_68 >> 0x20 ) * ( local_58 >> 0x20 ) ) + (int)( ( uStack_60 >> 0x20 ) * ( uStack_50 >> 0x20 ) ) >> 0xd;
                        iVar18 = iVar12 - iVar17;
                        iVar9 = iVar18 * iVar3 + 0x8000;
                        iVar10 = iVar9 >> 0x10;
                        iVar9 = ( ( uint )(0 < iVar18) + ( iVar18 >> 0x1f ) + iVar10 ) - ( ( uint )(0 < iVar10) + ( iVar9 >> 0x1f ) );
                        if (8 < iVar9) {
                           iVar9 = 8;
                        }

                        if (iVar9 < -8) {
                           iVar9 = -8;
                        }

                        uVar23 = ( ulong ) * (int*)( qoa_quant_tab + (long)( iVar9 + 8 ) * 4 );
                        iVar17 = iVar17 + *(int*)( puVar29 + ( lVar28 + uVar23 ) * 4 );
                        iVar9 = iVar17;
                        if (( 0xffff < iVar17 + 0x8000U ) && ( iVar9 = iVar17 < -0x8000 )) {
                           iVar9 = -0x8000;
                        }

                        iVar10 = ( (int)uStack_50 * (int)uStack_50 + local_58._4_4_ * local_58._4_4_ + (int)local_58 * (int)local_58 + uStack_50._4_4_ * uStack_50._4_4_ >> 0x12 ) + -0x8ff;
                        if (iVar10 < 0) {
                           iVar10 = 0;
                        }

                        lVar15 = (long)( iVar12 - iVar9 );
                        uVar32 = uVar32 + (long)( iVar10 * iVar10 ) + lVar15 * lVar15;
                        if (local_f8 < uVar32) goto LAB_00100478;
                        qoa_lms_update(&local_68, iVar9, *(int*)( puVar29 + ( lVar28 + uVar23 ) * 4 ));
                        uVar13 = uVar13 << 3 | uVar23;
                        iVar24 = iVar24 + uVar2;
                     }
 while ( iVar24 < iVar31 );
                  }
 else {
                     uVar32 = 0;
                  }

                  if (uVar32 < local_f8) {
                     uVar6 = local_68;
                     uVar7 = uStack_60;
                     uVar14 = local_58;
                     uVar8 = uStack_50;
                     local_f8 = uVar32;
                     local_d0 = uVar13;
                     local_c4 = iVar19 % 0x10;
                  }

                  LAB_00100478:iVar19 = iVar19 + 1;
               }
 while ( iVar19 != iVar1 );
               *puVar22 = uVar6;
               puVar22[1] = uVar7;
               puVar22[2] = uVar14;
               puVar22[3] = uVar8;
               iVar31 = iVar31 + 1;
               puVar22 = puVar22 + 4;
               local_d0 = local_d0 << ( local_b8 & 0x3f );
               local_d4 = local_d4 + 1;
               *piVar16 = local_c4;
               uVar6 = (ulong)uVar25;
               uVar25 = uVar25 + 8;
               *(ulong*)( (long)param_4 + uVar6 ) = local_d0 >> 0x38 | ( local_d0 & 0xff000000000000 ) >> 0x28 | ( local_d0 & 0xff0000000000 ) >> 0x18 | ( local_d0 & 0xff00000000 ) >> 8 | ( local_d0 & 0xff000000 ) << 8 | ( local_d0 & 0xff0000 ) << 0x18 | ( local_d0 & 0xff00 ) << 0x28 | local_d0 << 0x38;
               piVar16 = piVar16 + 1;
               uVar6 = uVar33;
               uVar7 = uVar34;
               uVar14 = uVar35;
               uVar8 = uVar36;
            }
 while ( iVar31 != iVar5 );
            uVar30 = uVar30 + uVar2 * 8;
         }

         uVar20 = uVar20 + 0x14;
         iVar26 = iVar26 + uVar2 * 0x14;
      }
 while ( uVar20 < param_3 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar30;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 *qoa_encode(long param_1, uint *param_2, uint *param_3) {
   uint uVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uint uVar5;
   int iVar6;
   undefined4 *puVar7;
   undefined1(*pauVar8)[16];
   undefined1(*pauVar9)[16];
   ulong uVar10;
   uint uVar11;
   uVar1 = param_2[2];
   if (uVar1 == 0) {
      puVar7 = (undefined4*)0x0;
   }
 else {
      puVar7 = (undefined4*)0x0;
      if (param_2[1] - 1 < 0xffffff) {
         uVar2 = *param_2;
         if (uVar2 - 1 < 8) {
            puVar7 = (undefined4*)malloc(( ulong )(( ( uVar1 + 0x13ff ) / 0x1400 + 1 + ( ( uVar1 + 0x13 ) / 0x14 + ( ( uVar1 + 0x13ff ) / 0x1400 ) * 2 ) * uVar2 ) * 8));
            uVar4 = _UNK_00100db8;
            uVar3 = __LC1;
            pauVar8 = (undefined1(*) [16])( param_2 + 3 );
            do {
               *pauVar8 = (undefined1[16])0x0;
               pauVar9 = pauVar8 + 2;
               *(undefined8*)pauVar8[1] = uVar3;
               *(undefined8*)( pauVar8[1] + 8 ) = uVar4;
               pauVar8 = pauVar9;
            }
 while ( pauVar9 != (undefined1(*) [16])( param_2 + 3 ) + (ulong)uVar2 * 2 );
            *puVar7 = 0x66616f71;
            uVar11 = 0;
            uVar10 = 8;
            puVar7[1] = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
            do {
               iVar6 = uVar1 - uVar11;
               if (0x1400 < (int)( uVar1 - uVar11 )) {
                  iVar6 = 0x1400;
               }

               uVar5 = uVar2 * uVar11;
               uVar11 = uVar11 + iVar6;
               iVar6 = qoa_encode_frame(param_1 + (ulong)uVar5 * 2, param_2, iVar6, uVar10 + (long)puVar7);
               uVar5 = (int)uVar10 + iVar6;
               uVar10 = (ulong)uVar5;
            }
 while ( uVar11 < uVar1 );
            *param_3 = uVar5;
         }

      }

   }

   return puVar7;
}
int qoa_max_frame_size(int *param_1) {
   return *param_1 * 0x810 + 8;
}
long qoa_decode_header(ulong *param_1, int param_2, undefined4 *param_3) {
   ulong uVar1;
   uint uVar2;
   if (0xf < param_2) {
      uVar1 = *param_1;
      uVar2 = ( uint )(byte)(uVar1 >> 0x38) | ( ( uint )(uVar1 >> 0x20) & 0xff0000 ) >> 8 | ( uint )(uVar1 >> 0x18) & 0xff0000 | ( uint )(uVar1 >> 8) & 0xff000000;
      if (( ( ( uVar1 & 0xff000000 ) << 8 | ( uVar1 & 0xff0000 ) << 0x18 | ( uVar1 & 0xff00 ) << 0x28 | uVar1 << 0x38 ) == 0x716f616600000000 ) && ( param_3[2] = uVar2 != 0 )) {
         uVar1 = param_1[1];
         uVar2 = ( uint )(uVar1 >> 0x18) & 0xff | ( uint )(uVar1 >> 8) & 0xff00 | ( uint )(( ( uVar1 & 0xff00 ) << 0x28 ) >> 0x20);
         *param_3 = (int)( uVar1 & 0xff );
         param_3[1] = uVar2;
         return ( ulong )(( uVar1 & 0xff ) != 0 && uVar2 != 0) << 3;
      }

   }

   return 0;
}
ulong qoa_decode_frame(ulong *param_1, uint param_2, int *param_3, long param_4, uint *param_5) {
   int *piVar1;
   int *piVar2;
   ulong uVar3;
   int iVar4;
   int iVar5;
   ulong uVar6;
   ulong uVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   uint uVar11;
   ulong uVar12;
   ulong *puVar13;
   ulong uVar14;
   ulong uVar15;
   uint uVar16;
   uint uVar17;
   long lVar18;
   undefined2 uVar19;
   int *piVar20;
   uVar7 = 0;
   *param_5 = 0;
   iVar5 = *param_3;
   uVar16 = iVar5 * 0x10 + 8;
   if (uVar16 <= param_2) {
      uVar14 = *param_1;
      uVar6 = uVar14 & 0xff;
      iVar4 = (int)uVar6;
      if (iVar5 == iVar4) {
         uVar9 = ( uint )(uVar14 >> 0x20);
         uVar11 = ( uint )(byte)(uVar14 >> 0x38) | ( uVar9 & 0xff0000 ) >> 8;
         uVar17 = ( uint )(uVar14 >> 0x18);
         if (( ( uVar17 & 0xff | ( uint )(uVar14 >> 8) & 0xff00 | ( uint )(( ( uVar14 & 0xff00 ) << 0x28 ) >> 0x20) ) == param_3[1] ) && ( uVar11 <= param_2 )) {
            uVar9 = ( uVar9 & 0xff00 ) >> 8 | uVar17 & 0xff00;
            if (uVar9 * iVar4 <= ( ( uVar11 + iVar5 * -0x10 ) - 8 >> 3 ) * 0x14) {
               if (uVar6 == 0) {
                  uVar7 = 8;
               }
 else {
                  piVar20 = param_3 + 4;
                  uVar7 = 8;
                  do {
                     iVar5 = (int)uVar7;
                     uVar14 = *(ulong*)( (long)param_1 + uVar7 );
                     uVar7 = ( ulong )(iVar5 + 0x10);
                     uVar12 = *(ulong*)( (long)param_1 + ( ulong )(iVar5 + 8) );
                     piVar1 = piVar20 + -4;
                     uVar12 = uVar12 >> 0x38 | ( uVar12 & 0xff000000000000 ) >> 0x28 | ( uVar12 & 0xff0000000000 ) >> 0x18 | ( uVar12 & 0xff00000000 ) >> 8 | ( uVar12 & 0xff000000 ) << 8 | ( uVar12 & 0xff0000 ) << 0x18 | ( uVar12 & 0xff00 ) << 0x28 | uVar12 << 0x38;
                     uVar14 = uVar14 >> 0x38 | ( uVar14 & 0xff000000000000 ) >> 0x28 | ( uVar14 & 0xff0000000000 ) >> 0x18 | ( uVar14 & 0xff00000000 ) >> 8 | ( uVar14 & 0xff000000 ) << 8 | ( uVar14 & 0xff0000 ) << 0x18 | ( uVar14 & 0xff00 ) << 0x28 | uVar14 << 0x38;
                     do {
                        piVar2 = piVar1;
                        piVar2[3] = (int)(short)( uVar14 >> 0x30 );
                        piVar2[7] = (int)(short)( uVar12 >> 0x30 );
                        piVar1 = piVar2 + 1;
                        uVar12 = uVar12 << 0x10;
                        uVar14 = uVar14 << 0x10;
                     }
 while ( piVar2 + 1 != piVar20 );
                     piVar20 = piVar2 + 9;
                  }
 while ( piVar20 != param_3 + ( ulong )(iVar4 - 1) * 8 + 0xc );
                  uVar7 = (ulong)uVar16;
               }

               if (uVar9 != 0) {
                  uVar17 = 0;
                  uVar16 = 0;
                  do {
                     uVar16 = uVar16 + 0x14;
                     if (uVar6 != 0) {
                        uVar11 = uVar16;
                        if ((int)uVar9 <= (int)uVar16) {
                           uVar11 = uVar9;
                        }

                        puVar13 = (ulong*)( param_3 + 3 );
                        iVar8 = uVar11 * iVar4;
                        iVar5 = iVar8 + iVar4;
                        uVar14 = uVar7;
                        uVar11 = uVar17;
                        do {
                           uVar3 = (ulong)uVar11;
                           uVar12 = *(ulong*)( (long)param_1 + uVar14 );
                           uVar15 = ( uVar12 >> 0x38 | ( uVar12 & 0xff000000000000 ) >> 0x28 | ( uVar12 & 0xff0000000000 ) >> 0x18 | ( uVar12 & 0xff00000000 ) >> 8 | ( uVar12 & 0xff000000 ) << 8 | ( uVar12 & 0xff0000 ) << 0x18 | ( uVar12 & 0xff00 ) << 0x28 | uVar12 << 0x38 ) << 4;
                           if ((int)uVar11 < iVar8) {
                              lVar18 = ( ulong )(( byte )(uVar12 >> 4) & 0xf) << 3;
                              do {
                                 iVar10 = ( (int)( ( *puVar13 & 0xffffffff ) * ( puVar13[2] & 0xffffffff ) ) + (int)( ( puVar13[1] & 0xffffffff ) * ( puVar13[3] & 0xffffffff ) ) + (int)( ( *puVar13 >> 0x20 ) * ( puVar13[2] >> 0x20 ) ) + (int)( ( puVar13[1] >> 0x20 ) * ( puVar13[3] >> 0x20 ) ) >> 0xd ) + *(int*)( qoa_dequant_tab + ( ( uVar15 >> 0x3d ) + lVar18 ) * 4 );
                                 if (iVar10 + 0x8000U < 0x10000) {
                                    uVar19 = (undefined2)iVar10;
                                 }
 else if (iVar10 < -0x8000) {
                                    uVar19 = 0x8000;
                                 }
 else {
                                    uVar19 = 0x7fff;
                                 }

                                 iVar10 = (int)uVar3;
                                 uVar3 = ( ulong )(uint)(iVar10 + iVar4);
                                 uVar15 = uVar15 << 3;
                                 *(undefined2*)( param_4 + (long)iVar10 * 2 ) = uVar19;
                                 qoa_lms_update();
                              }
 while ( (int)uVar3 < iVar8 );
                           }

                           uVar11 = uVar11 + 1;
                           iVar8 = iVar8 + 1;
                           puVar13 = puVar13 + 4;
                           uVar14 = ( ulong )((int)uVar14 + 8);
                        }
 while ( iVar5 != iVar8 );
                        uVar7 = ( ulong )(uint)((int)uVar7 + iVar4 * 8);
                     }

                     uVar17 = uVar17 + iVar4 * 0x14;
                  }
 while ( uVar16 < uVar9 );
               }

               *param_5 = uVar9;
            }

         }
 else {
            uVar7 = 0;
         }

      }

   }

   return uVar7;
}
void *qoa_decode(long param_1, int param_2, int *param_3) {
   uint uVar1;
   int iVar2;
   void *pvVar3;
   uint uVar4;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   pvVar3 = (void*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = qoa_decode_header();
   if (uVar1 != 0) {
      iVar2 = *param_3;
      uVar4 = 0;
      pvVar3 = malloc((long)( param_3[2] * iVar2 ) * 2);
      while (true) {
         iVar2 = qoa_decode_frame((ulong)uVar1 + param_1, param_2 - uVar1, param_3, (void*)( (long)pvVar3 + ( ulong )(iVar2 * uVar4) * 2 ), &local_44);
         uVar1 = uVar1 + iVar2;
         uVar4 = local_44 + uVar4;
         if (( iVar2 == 0 ) || ( (uint)param_3[2] <= uVar4 )) break;
         iVar2 = *param_3;
      }
;
      param_3[2] = uVar4;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pvVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

