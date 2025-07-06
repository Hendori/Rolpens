void CRYPTO_ccm128_init(byte *param_1, int param_2, char param_3, undefined8 param_4, undefined8 param_5) {
   *(undefined8*)( param_1 + 0x28 ) = param_5;
   *(undefined8*)( param_1 + 0x30 ) = param_4;
   for (int i_2048 = 0; i_2048 < 8; i_2048++) {
      param_1[( i_2048 + 1 )] = 0;
   }
   for (int i_2047 = 0; i_2047 < 8; i_2047++) {
      param_1[( i_2047 + 8 )] = 0;
   }
   for (int i_2046 = 0; i_2046 < 8; i_2046++) {
      param_1[( i_2046 + 32 )] = 0;
   }
   *param_1 = ( byte )(( param_2 - 2U >> 1 & 7 ) << 3) | param_3 - 1U & 7;
   return;
}undefined8 CRYPTO_ccm128_setiv(byte *param_1, byte *param_2, ulong param_3, undefined8 param_4) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   bVar1 = *param_1;
   uVar3 = 0xe - ( bVar1 & 7 );
   uVar4 = (ulong)uVar3;
   if (param_3 < uVar4) {
      return 0xffffffff;
   }
   if (( bVar1 & 7 ) < 3) {
      for (int i_2049 = 0; i_2049 < 8; i_2049++) {
         param_1[( i_2049 + 8 )] = 0;
      }
   } else {
      uVar2 = ( uint )((ulong)param_4 >> 0x20);
      *(uint*)( param_1 + 8 ) = ( ( ( uVar2 & 0xff ) << 8 | uVar2 >> 8 & 0xff ) << 8 | ( ushort )((ulong)param_4 >> 0x30) & 0xff ) << 8 | ( uint )(byte)((ulong)param_4 >> 0x38);
   }
   uVar2 = (uint)param_4;
   *(uint*)( param_1 + 0xc ) = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
   *param_1 = bVar1 & 0xbf;
   if (uVar3 < 8) {
      if (( uVar3 & 4 ) == 0) {
         if (( uVar3 != 0 ) && ( param_1[1] = *param_2(uVar3 & 2) != 0 )) {
            *(undefined2*)( param_1 + ( uVar4 - 1 ) ) = *(undefined2*)( param_2 + ( uVar4 - 2 ) );
         }
      } else {
         *(undefined4*)( param_1 + 1 ) = *(undefined4*)param_2;
         *(undefined4*)( param_1 + ( uVar4 - 3 ) ) = *(undefined4*)( param_2 + ( uVar4 - 4 ) );
      }
   } else {
      *(undefined8*)( param_1 + 1 ) = *(undefined8*)param_2;
      *(undefined8*)( param_1 + ( uVar4 - 7 ) ) = *(undefined8*)( param_2 + ( uVar4 - 8 ) );
      uVar3 = uVar3 + (int)( param_1 + ( 1 - ( ( ulong )(param_1 + 9) & 0xfffffffffffffff8 ) ) ) & 0xfffffff8;
      if (7 < uVar3) {
         uVar2 = 0;
         do {
            uVar4 = (ulong)uVar2;
            uVar2 = uVar2 + 8;
            *(undefined8*)( ( ( ulong )(param_1 + 9) & 0xfffffffffffffff8 ) + uVar4 ) = *(undefined8*)( param_2 + ( uVar4 - (long)( param_1 + ( 1 - ( ( ulong )(param_1 + 9) & 0xfffffffffffffff8 ) ) ) ) );
         } while ( uVar2 < uVar3 );
         return 0;
      }
   }
   return 0;
}void CRYPTO_ccm128_aad(byte *param_1, byte *param_2, ulong param_3) {
   byte *pbVar1;
   ushort uVar2;
   code *pcVar3;
   ushort uVar4;
   uint uVar5;
   undefined8 uVar6;
   byte local_40;
   if (param_3 == 0) {
      return;
   }
   pbVar1 = param_1 + 0x10;
   *param_1 = *param_1 | 0x40;
   pcVar3 = *(code**)( param_1 + 0x28 );
   ( *pcVar3 )(param_1, pbVar1, *(undefined8*)( param_1 + 0x30 ));
   *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x20 ) + 1;
   uVar4 = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
   if (param_3 < 0xff00) {
      *(ushort*)( param_1 + 0x10 ) = *(ushort*)( param_1 + 0x10 ) ^ uVar4;
      uVar5 = 2;
   } else {
      uVar2 = *(ushort*)( param_1 + 0x14 );
      local_40 = ( byte )(param_3 >> 0x10);
      if (param_3 >> 0x20 == 0) {
         *(ushort*)( param_1 + 0x14 ) = uVar4 ^ uVar2;
         *(uint*)( param_1 + 0x10 ) = ( ( ( uint )(param_1[0x13] ^ local_40) << 8 | ( (uint)param_1[0x12] ^ ( uint )(param_3 >> 0x18) ) & 0xff ) << 8 | ( uint )(param_1[0x11] ^ 0xfe) ) << 8 | (uint)(byte)~param_1[0x10];
         uVar5 = 6;
      } else {
         *(ulong*)( param_1 + 0x10 ) = ( ( ( ( (ulong)CONCAT21(CONCAT11(local_40 ^ param_1[0x17], ( byte )(param_3 >> 0x18) ^ param_1[0x16]), ( byte )(param_3 >> 0x20) ^ ( byte )(uVar2 >> 8)) << 8 | ( ulong )(( ( uint )(param_3 >> 0x28) ^ (uint)uVar2 ) & 0xff) ) << 8 | ( ulong )(( (uint)param_1[0x13] ^ ( uint )(ushort)(param_3 >> 0x30) ) & 0xff) ) << 8 | ( ulong )(byte)(param_1[0x12] ^ ( byte )(param_3 >> 0x38)) ) << 8 | (ulong)(byte)~param_1[0x11] ) << 8 | (ulong)(byte)~param_1[0x10];
         *(ushort*)( param_1 + 0x18 ) = *(ushort*)( param_1 + 0x18 ) ^ uVar4;
         uVar5 = 10;
      }
   }
   uVar6 = *(undefined8*)( param_1 + 0x30 );
   do {
      if (( 0xf < uVar5 ) || ( param_3 == 0 )) {
         ( *pcVar3 )(pbVar1, pbVar1, uVar6);
         *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x20 ) + 1;
         if (param_3 == 0) {
            return;
         }
         uVar6 = *(undefined8*)( param_1 + 0x30 );
         uVar5 = 0;
      }
      param_3 = param_3 - 1;
      param_1[(ulong)uVar5 + 0x10] = param_1[(ulong)uVar5 + 0x10] ^ *param_2;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1;
   } while ( true );
}undefined8 CRYPTO_ccm128_encrypt(byte *param_1, ulong *param_2, ulong *param_3, ulong param_4) {
   byte *pbVar1;
   ulong *puVar2;
   byte bVar3;
   byte bVar4;
   code *pcVar5;
   ushort uVar6;
   uint3 uVar7;
   uint5 uVar8;
   uint6 uVar9;
   byte bVar10;
   ulong uVar11;
   long lVar12;
   undefined8 uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   ulong *puVar18;
   int iVar19;
   uint uVar20;
   byte *pbVar21;
   ulong *puVar22;
   long in_FS_OFFSET;
   undefined4 *local_90;
   undefined4 local_58;
   byte abStack_54[11];
   undefined1 uStack_49;
   long local_40;
   pcVar5 = *(code**)( param_1 + 0x28 );
   uVar13 = *(undefined8*)( param_1 + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar3 = *param_1;
   if (( bVar3 & 0x40 ) == 0) {
      ( *pcVar5 )(param_1, param_1 + 0x10, uVar13);
      *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x20 ) + 1;
   }
   uVar14 = bVar3 & 7;
   uVar20 = 0xf - uVar14;
   *param_1 = bVar3 & 7;
   if (uVar20 == 0xf) {
      uVar11 = 0;
   } else {
      bVar10 = param_1[uVar20];
      param_1[uVar20] = 0;
      uVar15 = 0x10 - uVar14;
      uVar11 = (ulong)bVar10 << 8;
      if (uVar15 != 0xf) {
         bVar4 = param_1[uVar15];
         param_1[uVar15] = 0;
         uVar15 = 0x11 - uVar14;
         uVar6 = CONCAT11(bVar10, bVar4);
         uVar11 = (ulong)uVar6 << 8;
         if (uVar15 != 0xf) {
            bVar10 = param_1[uVar15];
            param_1[uVar15] = 0;
            uVar15 = 0x12 - uVar14;
            uVar7 = CONCAT21(uVar6, bVar10);
            uVar11 = (ulong)uVar7 << 8;
            if (uVar15 != 0xf) {
               bVar10 = param_1[uVar15];
               param_1[uVar15] = 0;
               uVar16 = 0x13 - uVar14;
               uVar15 = CONCAT31(uVar7, bVar10);
               uVar11 = (ulong)uVar15 << 8;
               if (uVar16 != 0xf) {
                  bVar10 = param_1[uVar16];
                  param_1[uVar16] = 0;
                  uVar16 = 0x14 - uVar14;
                  uVar8 = CONCAT41(uVar15, bVar10);
                  uVar11 = (ulong)uVar8 << 8;
                  if (uVar16 != 0xf) {
                     bVar10 = param_1[uVar16];
                     param_1[uVar16] = 0;
                     uVar9 = CONCAT51(uVar8, bVar10);
                     uVar11 = (ulong)uVar9 << 8;
                     if (uVar14 != 6) {
                        bVar10 = param_1[0xe];
                        param_1[0xe] = 0;
                        uVar11 = (ulong)CONCAT61(uVar9, bVar10) << 8;
                     }
                  }
               }
            }
         }
      }
   }
   bVar10 = param_1[0xf];
   param_1[0xf] = 1;
   if (( uVar11 | bVar10 ) != param_4) {
      uVar13 = 0xffffffff;
      goto LAB_001008d7;
   }
   uVar11 = ( param_4 + 0xf >> 3 | 1 ) + *(long*)( param_1 + 0x20 );
   *(ulong*)( param_1 + 0x20 ) = uVar11;
   if (0x2000000000000000 < uVar11) {
      uVar13 = 0xfffffffe;
      goto LAB_001008d7;
   }
   if (0xf < param_4) {
      lVar12 = ( param_4 - 0x10 & 0xfffffffffffffff0 ) + 0x10;
      puVar2 = (ulong*)( (long)param_2 + lVar12 );
      puVar18 = param_3;
      do {
         *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ *param_2;
         *(ulong*)( param_1 + 0x18 ) = *(ulong*)( param_1 + 0x18 ) ^ param_2[1];
         ( *pcVar5 )(param_1 + 0x10, param_1 + 0x10, uVar13);
         ( *pcVar5 )(param_1, &local_58, uVar13);
         pbVar21 = param_1 + 0xf;
         *pbVar21 = *pbVar21 + 1;
         if (*pbVar21 == 0) {
            pbVar21 = param_1 + 0xe;
            *pbVar21 = *pbVar21 + 1;
            if (*pbVar21 == 0) {
               pbVar21 = param_1 + 0xd;
               *pbVar21 = *pbVar21 + 1;
               if (*pbVar21 == 0) {
                  pbVar21 = param_1 + 0xc;
                  *pbVar21 = *pbVar21 + 1;
                  if (*pbVar21 == 0) {
                     pbVar21 = param_1 + 0xb;
                     *pbVar21 = *pbVar21 + 1;
                     if (*pbVar21 == 0) {
                        pbVar21 = param_1 + 10;
                        *pbVar21 = *pbVar21 + 1;
                        if (*pbVar21 == 0) {
                           pbVar21 = param_1 + 9;
                           *pbVar21 = *pbVar21 + 1;
                           if (*pbVar21 == 0) {
                              param_1[8] = param_1[8] + 1;
                           }
                        }
                     }
                  }
               }
            }
         }
         puVar22 = param_2 + 2;
         *puVar18 = CONCAT17(abStack_54[3], CONCAT16(abStack_54[2], CONCAT15(abStack_54[1], CONCAT14(abStack_54[0], CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58))))))) ^ *param_2;
         puVar18[1] = CONCAT17(uStack_49, CONCAT16(abStack_54[10], CONCAT15(abStack_54[9], CONCAT14(abStack_54[8], CONCAT13(abStack_54[7], CONCAT12(abStack_54[6], CONCAT11(abStack_54[5], abStack_54[4]))))))) ^ param_2[1];
         puVar18 = puVar18 + 2;
         param_2 = puVar22;
      } while ( puVar22 != puVar2 );
      param_3 = (ulong*)( (long)param_3 + lVar12 );
      param_4 = ( ulong )((uint)param_4 & 0xf);
      param_2 = puVar2;
   }
   local_90 = &local_58;
   if (param_4 != 0) {
      uVar11 = param_4 - 1;
      if (uVar11 < 3) {
         param_1[0x10] = param_1[0x10] ^ ( byte ) * param_2;
         if (param_4 != 1) {
            param_1[0x11] = param_1[0x11] ^ *(byte*)( (long)param_2 + 1 );
            if (param_4 == 3) goto LAB_0010061d;
            goto LAB_001006d9;
         }
         ( *pcVar5 )(param_1 + 0x10, param_1 + 0x10, uVar13);
         ( *pcVar5 )(param_1, local_90, uVar13);
         *(byte*)param_3 = ( byte ) * param_2 ^ (byte)local_58;
      } else {
         pbVar21 = param_1 + 0x10;
         if (( ulong )((long)pbVar21 - ( (long)param_2 + 1 )) < 7) {
            param_1[0x10] = param_1[0x10] ^ ( byte ) * param_2;
            param_1[0x11] = param_1[0x11] ^ *(byte*)( (long)param_2 + 1 );
            LAB_0010061d:param_1[0x12] = param_1[0x12] ^ *(byte*)( (long)param_2 + 2 );
            if (( ( ( ( ( param_4 != 3 ) && ( param_1[0x13] = param_1[0x13] ^ *(byte*)( (long)param_2 + 3 ) ),param_4 != 4 ) ) && ( param_1[0x14] = param_1[0x14] ^ *(byte*)( (long)param_2 + 4 ) ),param_4 != 5 ) ) && ( ( param_1[0x15] = param_1[0x15] ^ *(byte*)( (long)param_2 + 5 ) ),param_4 != 6 && ( param_1[0x16] = param_1[0x16] ^ *(byte*)( (long)param_2 + 6 ) ),param_4 != 7 )) ( param_1[0x17] = param_4 != 8 ) && ( ( ( param_1[0x18] = param_1[0x18] ^ (byte)param_2[1] ),param_4 != 9 && ( param_1[0x19] = param_1[0x19] ^ *(byte*)( (long)param_2 + 9 ) ),param_4 != 10 ) ) && ( ( param_1[0x1a] = param_1[0x1a] ^ *(byte*)( (long)param_2 + 10 ) ),param_4 != 0xb && ( ( ( param_1[0x1b] = param_1[0x1b] ^ *(byte*)( (long)param_2 + 0xb ) ),param_4 != 0xc && ( param_1[0x1c] = param_1[0x1c] ^ *(byte*)( (long)param_2 + 0xc ) ),param_4 != 0xd ) ) && ( param_1[0x1d] = param_1[0x1d] ^ *(byte*)( (long)param_2 + 0xd ) ),param_4 == 0xf )))))))
           ) {
          param_1[0x1e] = param_1[0x1e] ^ *(byte*)( (long)param_2 + 0xe );
         }
         LAB_001006d9:( *pcVar5 )(param_1 + 0x10, param_1 + 0x10, uVar13);
         ( *pcVar5 )(param_1, local_90, uVar13);
         if (uVar11 < 3) {
            *(byte*)param_3 = ( byte ) * param_2 ^ (byte)local_58;
            *(byte*)( (long)param_3 + 1 ) = local_58._1_1_ ^ *(byte*)( (long)param_2 + 1 );
            if (param_4 != 3) goto LAB_00100860;
         } else {
            if (6 < ( ulong )((long)param_3 - ( (long)param_2 + 1 ))) goto LAB_001009fd;
            LAB_00100739:*(byte*)param_3 = ( byte ) * param_2 ^ (byte)local_58;
            *(byte*)( (long)param_3 + 1 ) = *(byte*)( (long)param_2 + 1 ) ^ local_58._1_1_;
         }
         *(byte*)( (long)param_3 + 2 ) = *(byte*)( (long)param_2 + 2 ) ^ local_58._2_1_;
         if (( ( ( 3 < param_4 ) && ( *(byte*)( (long)param_3 + 3 ) = local_58._3_1_ ^ *(byte*)( (long)param_2 + 3 ) ),param_4 != 4 ) ) && ( ( *(byte*)( (long)param_3 + 4 ) = abStack_54[0] ^ *(byte*)( (long)param_2 + 4 ) ),param_4 != 5 && ( ( *(byte*)( (long)param_3 + 5 ) = abStack_54[1] ^ *(byte*)( (long)param_2 + 5 ) ),param_4 != 6 && ( *(byte*)( (long)param_3 + 6 ) = abStack_54[2] ^ *(byte*)( (long)param_2 + 6 ) ),param_4 != 7 ) )) ( ( ( *(byte*)( (long)param_3 + 7 ) = abStack_54[3] ^ *(byte*)( (long)param_2 + 7 ) ),param_4 != 8 && ( ( ( *(byte*)( param_3 + 1 ) = abStack_54[4] ^ (byte)param_2[1] ),param_4 != 9 && ( *(byte*)( (long)param_3 + 9 ) = abStack_54[5] ^ *(byte*)( (long)param_2 + 9 ) ),param_4 != 10 ) ) && ( *(byte*)( (long)param_3 + 10 ) = abStack_54[6] ^ *(byte*)( (long)param_2 + 10 ) ),param_4 != 0xb ) ) && ( ( ( *(byte*)( (long)param_3 + 0xb ) = abStack_54[7] ^ *(byte*)( (long)param_2 + 0xb ) ),param_4 != 0xc && ( *(byte*)( (long)param_3 + 0xc ) = abStack_54[8] ^ *(byte*)( (long)param_2 + 0xc ) ),param_4 != 0xd ) ) && ( *(byte*)( (long)param_3 + 0xd ) = param_4 == 0xf ) * (byte*)( (long)param_3 + 0xe ) = *(byte*)( (long)param_2 + 0xe ) ^ abStack_54[10];
      }
   } else {
      if (uVar11 < 7) {
         iVar19 = 0;
         lVar12 = 0;
         uVar17 = param_4;
         LAB_00100959:uVar14 = iVar19 + 4;
         *(uint*)( param_1 + lVar12 + 0x10 ) = *(uint*)( param_1 + lVar12 + 0x10 ) ^ *(uint*)( (long)param_2 + lVar12 );
         lVar12 = lVar12 + 4;
         if (uVar17 != 4) {
            LAB_0010097c:param_1[(ulong)uVar14 + 0x10] = param_1[(ulong)uVar14 + 0x10] ^ *(byte*)( (long)param_2 + lVar12 );
            uVar17 = ( ulong )(uVar14 + 1);
            if (uVar17 < param_4) {
               param_1[uVar17 + 0x10] = param_1[uVar17 + 0x10] ^ *(byte*)( (long)param_2 + uVar17 );
               uVar17 = ( ulong )(uVar14 + 2);
               if (uVar17 < param_4) {
                  param_1[uVar17 + 0x10] = param_1[uVar17 + 0x10] ^ *(byte*)( (long)param_2 + uVar17 );
               }
            }
         }
      } else {
         *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ *param_2;
         if (param_4 != 8) {
            uVar14 = 8;
            iVar19 = 8;
            lVar12 = 8;
            uVar17 = param_4 - 8;
            if (2 < param_4 - 9) goto LAB_00100959;
            goto LAB_0010097c;
         }
      }
      ( *pcVar5 )(pbVar21, pbVar21, uVar13);
      ( *pcVar5 )(param_1, local_90, uVar13);
      if (( ulong )((long)param_3 - ( (long)param_2 + 1 )) < 7) goto LAB_00100739;
      LAB_001009fd:if (uVar11 < 7) {
         iVar19 = 0;
         lVar12 = 0;
         uVar11 = param_4;
         LAB_00100a3d:uVar17 = ( ulong )(iVar19 + 4);
         *(uint*)( (long)param_3 + lVar12 ) = *(uint*)( (long)param_2 + lVar12 ) ^ *(uint*)( (long)&local_58 + lVar12 );
         lVar12 = lVar12 + 4;
         if (uVar11 == 4) goto LAB_00100860;
      } else {
         *param_3 = *param_2 ^ CONCAT17(abStack_54[3], CONCAT16(abStack_54[2], CONCAT15(abStack_54[1], CONCAT14(abStack_54[0], CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));
         if (param_4 == 8) goto LAB_00100860;
         uVar17 = 8;
         iVar19 = 8;
         lVar12 = 8;
         uVar11 = param_4 - 8;
         if (2 < param_4 - 9) goto LAB_00100a3d;
      }
      *(byte*)( (long)param_3 + lVar12 ) = *(byte*)( (long)param_2 + lVar12 ) ^ *(byte*)( (long)&local_58 + uVar17 );
      uVar11 = ( ulong )((int)uVar17 + 1);
      if (uVar11 < param_4) {
         *(byte*)( (long)param_3 + uVar11 ) = *(byte*)( (long)param_2 + uVar11 ) ^ *(byte*)( (long)&local_58 + uVar11 );
         uVar11 = ( ulong )((int)uVar17 + 2);
         if (uVar11 < param_4) {
            *(byte*)( (long)param_3 + uVar11 ) = *(byte*)( (long)param_2 + uVar11 ) ^ *(byte*)( (long)&local_58 + uVar11 );
         }
      }
   }
}}LAB_00100860:pbVar21 = param_1 + uVar20;bVar10 = ( bVar3 & 7 ) + 1;if (bVar10 < 8) {
   if (( bVar10 & 4 ) == 0) {
      if (( bVar10 != 0 ) && ( *pbVar21 = 0(bVar10 & 2) != 0 )) {
         ( pbVar21 + ( (ulong)bVar10 - 2 ) )[0] = 0;
         ( pbVar21 + ( (ulong)bVar10 - 2 ) )[1] = 0;
      }
   } else {
      for (int i_2050 = 0; i_2050 < 4; i_2050++) {
         pbVar21[i_2050] = 0;
      }
      pbVar21 = pbVar21 + ( (ulong)bVar10 - 4 );
      for (int i_2051 = 0; i_2051 < 4; i_2051++) {
         pbVar21[i_2051] = 0;
      }
   }
} else {
   for (int i_2052 = 0; i_2052 < 8; i_2052++) {
      pbVar21[i_2052] = 0;
   }
   pbVar1 = pbVar21 + ( (ulong)bVar10 - 8 );
   for (int i_2053 = 0; i_2053 < 8; i_2053++) {
      pbVar1[i_2053] = 0;
   }
   uVar14 = (uint)bVar10 + ( (int)pbVar21 - (int)( ( ulong )(pbVar21 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
   if (7 < uVar14) {
      uVar20 = 0;
      do {
         uVar11 = (ulong)uVar20;
         uVar20 = uVar20 + 8;
         *(undefined8*)( ( ( ulong )(pbVar21 + 8) & 0xfffffffffffffff8 ) + uVar11 ) = 0;
      } while ( uVar20 < uVar14 );
   }
}( *pcVar5 )(param_1, local_90, uVar13);*param_1 = bVar3;uVar13 = 0;*(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ CONCAT17(abStack_54[3], CONCAT16(abStack_54[2], CONCAT15(abStack_54[1], CONCAT14(abStack_54[0], CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));*(ulong*)( param_1 + 0x18 ) = *(ulong*)( param_1 + 0x18 ) ^ CONCAT17(uStack_49, CONCAT16(abStack_54[10], CONCAT15(abStack_54[9], CONCAT14(abStack_54[8], CONCAT13(abStack_54[7], CONCAT12(abStack_54[6], CONCAT11(abStack_54[5], abStack_54[4])))))));LAB_001008d7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar13;}undefined8 CRYPTO_ccm128_decrypt(byte *param_1, ulong *param_2, ulong *param_3, ulong param_4) {
   byte *pbVar1;
   ulong *puVar2;
   byte bVar3;
   byte bVar4;
   code *pcVar5;
   ushort uVar6;
   uint3 uVar7;
   uint5 uVar8;
   uint6 uVar9;
   uint uVar10;
   undefined8 uVar11;
   uint uVar12;
   uint uVar13;
   ulong uVar14;
   long lVar15;
   ulong *puVar16;
   uint uVar17;
   int iVar18;
   byte bVar19;
   ulong *puVar20;
   byte *pbVar21;
   long in_FS_OFFSET;
   undefined4 *local_88;
   undefined4 local_58;
   byte abStack_54[11];
   undefined1 uStack_49;
   long local_40;
   bVar3 = *param_1;
   pcVar5 = *(code**)( param_1 + 0x28 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = *(undefined8*)( param_1 + 0x30 );
   if (( bVar3 & 0x40 ) == 0) {
      ( *pcVar5 )(param_1, param_1 + 0x10, uVar11);
   }
   uVar17 = bVar3 & 7;
   *param_1 = bVar3 & 7;
   uVar10 = 0xf - uVar17;
   if (uVar10 == 0xf) {
      uVar14 = 0;
   } else {
      bVar19 = param_1[uVar10];
      param_1[uVar10] = 0;
      uVar12 = 0x10 - uVar17;
      uVar14 = (ulong)bVar19 << 8;
      if (uVar12 != 0xf) {
         bVar4 = param_1[uVar12];
         param_1[uVar12] = 0;
         uVar12 = 0x11 - uVar17;
         uVar6 = CONCAT11(bVar19, bVar4);
         uVar14 = (ulong)uVar6 << 8;
         if (uVar12 != 0xf) {
            bVar19 = param_1[uVar12];
            param_1[uVar12] = 0;
            uVar12 = 0x12 - uVar17;
            uVar7 = CONCAT21(uVar6, bVar19);
            uVar14 = (ulong)uVar7 << 8;
            if (uVar12 != 0xf) {
               bVar19 = param_1[uVar12];
               param_1[uVar12] = 0;
               uVar13 = 0x13 - uVar17;
               uVar12 = CONCAT31(uVar7, bVar19);
               uVar14 = (ulong)uVar12 << 8;
               if (uVar13 != 0xf) {
                  bVar19 = param_1[uVar13];
                  param_1[uVar13] = 0;
                  uVar13 = 0x14 - uVar17;
                  uVar8 = CONCAT41(uVar12, bVar19);
                  uVar14 = (ulong)uVar8 << 8;
                  if (uVar13 != 0xf) {
                     bVar19 = param_1[uVar13];
                     param_1[uVar13] = 0;
                     uVar9 = CONCAT51(uVar8, bVar19);
                     uVar14 = (ulong)uVar9 << 8;
                     if (uVar17 != 6) {
                        bVar19 = param_1[0xe];
                        param_1[0xe] = 0;
                        uVar14 = (ulong)CONCAT61(uVar9, bVar19) << 8;
                     }
                  }
               }
            }
         }
      }
   }
   bVar19 = param_1[0xf];
   param_1[0xf] = 1;
   if (( uVar14 | bVar19 ) != param_4) {
      uVar11 = 0xffffffff;
      goto LAB_00100fba;
   }
   if (0xf < param_4) {
      lVar15 = ( param_4 - 0x10 & 0xfffffffffffffff0 ) + 0x10;
      puVar2 = (ulong*)( (long)param_3 + lVar15 );
      puVar16 = param_2;
      do {
         ( *pcVar5 )(param_1, &local_58, uVar11);
         pbVar21 = param_1 + 0xf;
         *pbVar21 = *pbVar21 + 1;
         if (*pbVar21 == 0) {
            pbVar21 = param_1 + 0xe;
            *pbVar21 = *pbVar21 + 1;
            if (*pbVar21 == 0) {
               pbVar21 = param_1 + 0xd;
               *pbVar21 = *pbVar21 + 1;
               if (*pbVar21 == 0) {
                  pbVar21 = param_1 + 0xc;
                  *pbVar21 = *pbVar21 + 1;
                  if (*pbVar21 == 0) {
                     pbVar21 = param_1 + 0xb;
                     *pbVar21 = *pbVar21 + 1;
                     if (*pbVar21 == 0) {
                        pbVar21 = param_1 + 10;
                        *pbVar21 = *pbVar21 + 1;
                        if (*pbVar21 == 0) {
                           pbVar21 = param_1 + 9;
                           *pbVar21 = *pbVar21 + 1;
                           if (*pbVar21 == 0) {
                              param_1[8] = param_1[8] + 1;
                           }
                        }
                     }
                  }
               }
            }
         }
         uVar14 = CONCAT17(abStack_54[3], CONCAT16(abStack_54[2], CONCAT15(abStack_54[1], CONCAT14(abStack_54[0], CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58))))))) ^ *puVar16;
         *param_3 = uVar14;
         puVar20 = param_3 + 2;
         *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ uVar14;
         uVar14 = CONCAT17(uStack_49, CONCAT16(abStack_54[10], CONCAT15(abStack_54[9], CONCAT14(abStack_54[8], CONCAT13(abStack_54[7], CONCAT12(abStack_54[6], CONCAT11(abStack_54[5], abStack_54[4]))))))) ^ puVar16[1];
         param_3[1] = uVar14;
         *(ulong*)( param_1 + 0x18 ) = *(ulong*)( param_1 + 0x18 ) ^ uVar14;
         ( *pcVar5 )(param_1 + 0x10, param_1 + 0x10, uVar11);
         puVar16 = puVar16 + 2;
         param_3 = puVar20;
      } while ( puVar20 != puVar2 );
      param_2 = (ulong*)( (long)param_2 + lVar15 );
      param_4 = ( ulong )((uint)param_4 & 0xf);
      param_3 = puVar2;
   }
   local_88 = &local_58;
   if (param_4 != 0) {
      ( *pcVar5 )(param_1, local_88, uVar11);
      if (param_4 - 1 < 3) {
         bVar19 = (byte)local_58 ^ ( byte ) * param_2;
         *(byte*)param_3 = bVar19;
         param_1[0x10] = param_1[0x10] ^ bVar19;
         if (param_4 != 1) goto LAB_00101016;
      } else if (( param_1 + 0x10 < param_3 + 1 && param_3 < param_1 + 0x18 ) || ( ( ulong )((long)param_3 - ( (long)param_2 + 1 )) < 7 || ( ulong )((long)( param_1 + 0x10 ) - ( (long)param_2 + 1 )) < 7 )) {
         bVar19 = ( byte ) * param_2 ^ (byte)local_58;
         *(byte*)param_3 = bVar19;
         param_1[0x10] = param_1[0x10] ^ bVar19;
         LAB_00101016:bVar19 = local_58._1_1_ ^ *(byte*)( (long)param_2 + 1 );
         *(byte*)( (long)param_3 + 1 ) = bVar19;
         param_1[0x11] = param_1[0x11] ^ bVar19;
         if (param_4 != 2) {
            bVar19 = local_58._2_1_ ^ *(byte*)( (long)param_2 + 2 );
            *(byte*)( (long)param_3 + 2 ) = bVar19;
            param_1[0x12] = param_1[0x12] ^ bVar19;
            if (param_4 != 3) {
               bVar19 = local_58._3_1_ ^ *(byte*)( (long)param_2 + 3 );
               *(byte*)( (long)param_3 + 3 ) = bVar19;
               param_1[0x13] = param_1[0x13] ^ bVar19;
               if (param_4 != 4) {
                  bVar19 = abStack_54[0] ^ *(byte*)( (long)param_2 + 4 );
                  *(byte*)( (long)param_3 + 4 ) = bVar19;
                  param_1[0x14] = param_1[0x14] ^ bVar19;
                  if (param_4 != 5) {
                     bVar19 = abStack_54[1] ^ *(byte*)( (long)param_2 + 5 );
                     *(byte*)( (long)param_3 + 5 ) = bVar19;
                     param_1[0x15] = param_1[0x15] ^ bVar19;
                     if (param_4 != 6) {
                        bVar19 = abStack_54[2] ^ *(byte*)( (long)param_2 + 6 );
                        *(byte*)( (long)param_3 + 6 ) = bVar19;
                        param_1[0x16] = param_1[0x16] ^ bVar19;
                        if (param_4 != 7) {
                           bVar19 = abStack_54[3] ^ *(byte*)( (long)param_2 + 7 );
                           *(byte*)( (long)param_3 + 7 ) = bVar19;
                           param_1[0x17] = param_1[0x17] ^ bVar19;
                           if (param_4 != 8) {
                              bVar19 = abStack_54[4] ^ (byte)param_2[1];
                              *(byte*)( param_3 + 1 ) = bVar19;
                              param_1[0x18] = param_1[0x18] ^ bVar19;
                              if (param_4 != 9) {
                                 bVar19 = abStack_54[5] ^ *(byte*)( (long)param_2 + 9 );
                                 *(byte*)( (long)param_3 + 9 ) = bVar19;
                                 param_1[0x19] = param_1[0x19] ^ bVar19;
                                 if (param_4 != 10) {
                                    bVar19 = abStack_54[6] ^ *(byte*)( (long)param_2 + 10 );
                                    *(byte*)( (long)param_3 + 10 ) = bVar19;
                                    param_1[0x1a] = param_1[0x1a] ^ bVar19;
                                    if (param_4 != 0xb) {
                                       bVar19 = abStack_54[7] ^ *(byte*)( (long)param_2 + 0xb );
                                       *(byte*)( (long)param_3 + 0xb ) = bVar19;
                                       param_1[0x1b] = param_1[0x1b] ^ bVar19;
                                       if (param_4 != 0xc) {
                                          bVar19 = abStack_54[8] ^ *(byte*)( (long)param_2 + 0xc );
                                          *(byte*)( (long)param_3 + 0xc ) = bVar19;
                                          param_1[0x1c] = param_1[0x1c] ^ bVar19;
                                          if (param_4 != 0xd) {
                                             bVar19 = abStack_54[9] ^ *(byte*)( (long)param_2 + 0xd );
                                             *(byte*)( (long)param_3 + 0xd ) = bVar19;
                                             param_1[0x1d] = param_1[0x1d] ^ bVar19;
                                             if (param_4 == 0xf) {
                                                bVar19 = *(byte*)( (long)param_2 + 0xe ) ^ abStack_54[10];
                                                *(byte*)( (long)param_3 + 0xe ) = bVar19;
                                                param_1[0x1e] = param_1[0x1e] ^ bVar19;
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      } else {
         if (param_4 - 1 < 7) {
            iVar18 = 0;
            lVar15 = 0;
            uVar14 = param_4;
            LAB_00100eb0:uVar17 = iVar18 + 4;
            uVar12 = *(uint*)( (long)param_2 + lVar15 ) ^ *(uint*)( (long)&local_58 + lVar15 );
            *(uint*)( (long)param_3 + lVar15 ) = uVar12;
            *(uint*)( param_1 + lVar15 + 0x10 ) = *(uint*)( param_1 + lVar15 + 0x10 ) ^ uVar12;
            lVar15 = lVar15 + 4;
            if (uVar14 == 4) goto LAB_00100f30;
         } else {
            uVar14 = *param_2 ^ CONCAT17(abStack_54[3], CONCAT16(abStack_54[2], CONCAT15(abStack_54[1], CONCAT14(abStack_54[0], CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));
            *param_3 = uVar14;
            *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ uVar14;
            if (param_4 == 8) goto LAB_00100f30;
            uVar17 = 8;
            iVar18 = 8;
            lVar15 = 8;
            uVar14 = param_4 - 8;
            if (2 < param_4 - 9) goto LAB_00100eb0;
         }
         bVar19 = *(byte*)( (long)param_2 + lVar15 ) ^ *(byte*)( (long)&local_58 + (ulong)uVar17 );
         *(byte*)( (long)param_3 + lVar15 ) = bVar19;
         uVar14 = ( ulong )(uVar17 + 1);
         param_1[(ulong)uVar17 + 0x10] = param_1[(ulong)uVar17 + 0x10] ^ bVar19;
         if (uVar14 < param_4) {
            bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
            *(byte*)( (long)param_3 + uVar14 ) = bVar19;
            param_1[uVar14 + 0x10] = param_1[uVar14 + 0x10] ^ bVar19;
            uVar14 = ( ulong )(uVar17 + 2);
            if (uVar14 < param_4) {
               bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
               *(byte*)( (long)param_3 + uVar14 ) = bVar19;
               param_1[uVar14 + 0x10] = param_1[uVar14 + 0x10] ^ bVar19;
            }
         }
      }
      LAB_00100f30:( *pcVar5 )(param_1 + 0x10, param_1 + 0x10, uVar11);
   }
   bVar19 = ( bVar3 & 7 ) + 1;
   pbVar21 = param_1 + uVar10;
   if (bVar19 < 8) {
      if (( bVar19 & 4 ) == 0) {
         if (( bVar19 != 0 ) && ( *pbVar21 = 0(bVar19 & 2) != 0 )) {
            ( pbVar21 + ( (ulong)bVar19 - 2 ) )[0] = 0;
            ( pbVar21 + ( (ulong)bVar19 - 2 ) )[1] = 0;
         }
      } else {
         for (int i_2054 = 0; i_2054 < 4; i_2054++) {
            pbVar21[i_2054] = 0;
         }
         pbVar21 = pbVar21 + ( (ulong)bVar19 - 4 );
         for (int i_2055 = 0; i_2055 < 4; i_2055++) {
            pbVar21[i_2055] = 0;
         }
      }
   } else {
      for (int i_2056 = 0; i_2056 < 8; i_2056++) {
         pbVar21[i_2056] = 0;
      }
      pbVar1 = pbVar21 + ( (ulong)bVar19 - 8 );
      for (int i_2057 = 0; i_2057 < 8; i_2057++) {
         pbVar1[i_2057] = 0;
      }
      uVar10 = (uint)bVar19 + ( (int)pbVar21 - (int)( ( ulong )(pbVar21 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
      if (7 < uVar10) {
         uVar14 = 0;
         do {
            uVar17 = (int)uVar14 + 8;
            *(undefined8*)( ( ( ulong )(pbVar21 + 8) & 0xfffffffffffffff8 ) + uVar14 ) = 0;
            uVar14 = (ulong)uVar17;
         } while ( uVar17 < uVar10 );
      }
   }
   ( *pcVar5 )(param_1, local_88, uVar11);
   *param_1 = bVar3;
   uVar11 = 0;
   *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ CONCAT17(abStack_54[3], CONCAT16(abStack_54[2], CONCAT15(abStack_54[1], CONCAT14(abStack_54[0], CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));
   *(ulong*)( param_1 + 0x18 ) = *(ulong*)( param_1 + 0x18 ) ^ CONCAT17(uStack_49, CONCAT16(abStack_54[10], CONCAT15(abStack_54[9], CONCAT14(abStack_54[8], CONCAT13(abStack_54[7], CONCAT12(abStack_54[6], CONCAT11(abStack_54[5], abStack_54[4])))))));
   LAB_00100fba:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar11;
}undefined8 CRYPTO_ccm128_encrypt_ccm64(byte *param_1, ulong *param_2, ulong *param_3, ulong param_4, code *param_5) {
   byte *pbVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   code *pcVar5;
   ushort uVar6;
   uint3 uVar7;
   uint5 uVar8;
   uint6 uVar9;
   uint uVar10;
   byte *pbVar11;
   undefined8 uVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   long lVar19;
   uint uVar20;
   int iVar21;
   long in_FS_OFFSET;
   undefined8 local_58;
   byte bStack_50;
   byte bStack_4f;
   byte bStack_4e;
   byte bStack_4d;
   byte bStack_4c;
   byte bStack_4b;
   byte bStack_4a;
   byte bStack_49;
   long local_40;
   ulong uVar22;
   uVar12 = *(undefined8*)( param_1 + 0x30 );
   bVar2 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar5 = *(code**)( param_1 + 0x28 );
   if (( bVar2 & 0x40 ) == 0) {
      ( *pcVar5 )(param_1, param_1 + 0x10);
      *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x20 ) + 1;
   }
   uVar20 = bVar2 & 7;
   uVar10 = 0xf - uVar20;
   *param_1 = bVar2 & 7;
   if (uVar10 == 0xf) {
      uVar15 = 0;
   } else {
      bVar3 = param_1[uVar10];
      param_1[uVar10] = 0;
      uVar13 = 0x10 - uVar20;
      uVar15 = (ulong)bVar3 << 8;
      if (uVar13 != 0xf) {
         bVar4 = param_1[uVar13];
         param_1[uVar13] = 0;
         uVar13 = 0x11 - uVar20;
         uVar6 = CONCAT11(bVar3, bVar4);
         uVar15 = (ulong)uVar6 << 8;
         if (uVar13 != 0xf) {
            bVar3 = param_1[uVar13];
            param_1[uVar13] = 0;
            uVar13 = 0x12 - uVar20;
            uVar7 = CONCAT21(uVar6, bVar3);
            uVar15 = (ulong)uVar7 << 8;
            if (uVar13 != 0xf) {
               bVar3 = param_1[uVar13];
               param_1[uVar13] = 0;
               uVar14 = 0x13 - uVar20;
               uVar13 = CONCAT31(uVar7, bVar3);
               uVar15 = (ulong)uVar13 << 8;
               if (uVar14 != 0xf) {
                  bVar3 = param_1[uVar14];
                  param_1[uVar14] = 0;
                  uVar14 = 0x14 - uVar20;
                  uVar8 = CONCAT41(uVar13, bVar3);
                  uVar15 = (ulong)uVar8 << 8;
                  if (uVar14 != 0xf) {
                     bVar3 = param_1[uVar14];
                     param_1[uVar14] = 0;
                     uVar9 = CONCAT51(uVar8, bVar3);
                     uVar15 = (ulong)uVar9 << 8;
                     if (uVar20 != 6) {
                        bVar3 = param_1[0xe];
                        param_1[0xe] = 0;
                        uVar15 = (ulong)CONCAT61(uVar9, bVar3) << 8;
                     }
                  }
               }
            }
         }
      }
   }
   bVar3 = param_1[0xf];
   param_1[0xf] = 1;
   if (( uVar15 | bVar3 ) != param_4) {
      uVar12 = 0xffffffff;
      goto LAB_00101685;
   }
   uVar15 = ( param_4 + 0xf >> 3 | 1 ) + *(long*)( param_1 + 0x20 );
   *(ulong*)( param_1 + 0x20 ) = uVar15;
   if (0x2000000000000000 < uVar15) {
      uVar12 = 0xfffffffe;
      goto LAB_00101685;
   }
   if (param_4 < 0x10) {
      if (param_4 != 0) {
         uVar16 = param_4 - 1;
         uVar15 = param_4;
         if (uVar16 < 7) goto LAB_00101832;
         LAB_00101382:pbVar11 = param_1 + 0x10;
         if (( ulong )((long)pbVar11 - ( (long)param_2 + 1 )) < 0xf) {
            param_1[0x10] = param_1[0x10] ^ ( byte ) * param_2;
            param_1[0x11] = param_1[0x11] ^ *(byte*)( (long)param_2 + 1 );
            goto LAB_001013a8;
         }
         if (uVar16 < 0xf) {
            iVar21 = 0;
            uVar17 = 0;
            uVar18 = uVar15;
            LAB_00101910:*(ulong*)( param_1 + uVar17 + 0x10 ) = *(ulong*)( param_1 + uVar17 + 0x10 ) ^ *(ulong*)( (long)param_2 + uVar17 );
            uVar17 = uVar17 + ( uVar18 & 0xfffffffffffffff8 );
            uVar22 = ( ulong )(uint)(iVar21 + (int)( uVar18 & 0xfffffffffffffff8 ));
            if (( uVar18 & 7 ) != 0) {
               LAB_00101939:param_1[uVar22 + 0x10] = param_1[uVar22 + 0x10] ^ *(byte*)( (long)param_2 + uVar17 );
               iVar21 = (int)uVar22;
               uVar18 = ( ulong )(iVar21 + 1);
               if (uVar18 < uVar15) {
                  param_1[uVar18 + 0x10] = param_1[uVar18 + 0x10] ^ *(byte*)( (long)param_2 + uVar18 );
                  uVar18 = ( ulong )(iVar21 + 2);
                  if (uVar18 < uVar15) {
                     param_1[uVar18 + 0x10] = param_1[uVar18 + 0x10] ^ *(byte*)( (long)param_2 + uVar18 );
                     uVar18 = ( ulong )(iVar21 + 3);
                     if (uVar18 < uVar15) {
                        param_1[uVar18 + 0x10] = param_1[uVar18 + 0x10] ^ *(byte*)( (long)param_2 + uVar18 );
                        uVar18 = ( ulong )(iVar21 + 4);
                        if (uVar18 < uVar15) {
                           param_1[uVar18 + 0x10] = param_1[uVar18 + 0x10] ^ *(byte*)( (long)param_2 + uVar18 );
                           uVar18 = ( ulong )(iVar21 + 5);
                           if (uVar18 < uVar15) {
                              param_1[uVar18 + 0x10] = param_1[uVar18 + 0x10] ^ *(byte*)( (long)param_2 + uVar18 );
                              uVar18 = ( ulong )(iVar21 + 6);
                              if (uVar18 < uVar15) {
                                 param_1[uVar18 + 0x10] = param_1[uVar18 + 0x10] ^ *(byte*)( (long)param_2 + uVar18 );
                              }
                           }
                        }
                     }
                  }
               }
            }
         } else {
            uVar18 = param_2[1];
            uVar17 = uVar15 & 0xfffffffffffffff0;
            uVar22 = uVar15 & 0xfffffff0;
            iVar21 = (int)uVar22;
            *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ *param_2;
            *(ulong*)( param_1 + 0x18 ) = *(ulong*)( param_1 + 0x18 ) ^ uVar18;
            if (( uVar15 & 0xf ) != 0) {
               uVar18 = uVar15 - uVar17;
               if (6 < ( uVar15 - uVar17 ) - 1) goto LAB_00101910;
               goto LAB_00101939;
            }
         }
         ( *pcVar5 )(pbVar11, pbVar11, uVar12);
         ( *pcVar5 )(param_1, &local_58, uVar12);
         if (0xe < ( ulong )((long)param_3 - (long)( (long)param_2 + 1 ))) goto LAB_00101a0d;
         LAB_001014ea:*(byte*)param_3 = ( byte ) * param_2 ^ (byte)local_58;
         *(byte*)( (long)param_3 + 1 ) = *(byte*)( (long)param_2 + 1 ) ^ local_58._1_1_;
         LAB_00101504:*(byte*)( (long)param_3 + 2 ) = *(byte*)( (long)param_2 + 2 ) ^ local_58._2_1_;
         if (( ( 3 < uVar15 ) && ( *(byte*)( (long)param_3 + 3 ) = local_58._3_1_ ^ *(byte*)( (long)param_2 + 3 ) ),uVar15 != 4 )) &&( ( ( ( *(byte*)( (long)param_3 + 4 ) = local_58._4_1_ ^ *(byte*)( (long)param_2 + 4 ) ),uVar15 != 5 && ( ( *(byte*)( (long)param_3 + 5 ) = local_58._5_1_ ^ *(byte*)( (long)param_2 + 5 ) ),uVar15 != 6 && ( *(byte*)( (long)param_3 + 6 ) = local_58._6_1_ ^ *(byte*)( (long)param_2 + 6 ) ),uVar15 != 7 ) ) ) ) && ( *(byte*)( (long)param_3 + 7 ) = uVar15 != 8 ) && ( ( ( ( *(byte*)( param_3 + 1 ) = bStack_50 ^ (byte)param_2[1] ),uVar15 != 9 && ( *(byte*)( (long)param_3 + 9 ) = bStack_4f ^ *(byte*)( (long)param_2 + 9 ) ),uVar15 != 10 ) ) && ( *(byte*)( (long)param_3 + 10 ) = uVar15 != 0xb ) ) && ( ( ( *(byte*)( (long)param_3 + 0xb ) = bStack_4d ^ *(byte*)( (long)param_2 + 0xb ) ),uVar15 != 0xc && ( *(byte*)( (long)param_3 + 0xc ) = bStack_4c ^ *(byte*)( (long)param_2 + 0xc ) ),uVar15 != 0xd ) ) && ( ( *(byte*)( (long)param_3 + 0xd ) = bStack_4b ^ *(byte*)( (long)param_2 + 0xd ) ),uVar15 != 0xe && ( *(byte*)( (long)param_3 + 0xe ) = bStack_4a ^ *(byte*)( (long)param_2 + 0xe ) ),uVar15 != 0xf ) * (byte*)( (long)param_3 + 0xf ) = *(byte*)( (long)param_2 + 0xf ) ^ bStack_49;
      }
   }
}else{( *param_5 )(param_2, param_3, param_4 >> 4, uVar12);uVar15 = ( ulong )((uint)param_4 & 0xf);if (( param_4 & 0xf ) != 0) {
   uVar16 = ( param_4 >> 4 & 0xff ) + (ulong)param_1[0xf];
   param_1[0xf] = (byte)uVar16;
   uVar16 = uVar16 >> 8;
   if (uVar16 != 0 || param_4 >> 0xc != 0) {
      uVar16 = (ulong)param_1[0xe] + ( param_4 >> 0xc & 0xff ) + uVar16;
      param_1[0xe] = (byte)uVar16;
      uVar16 = uVar16 >> 8;
      if (uVar16 != 0 || param_4 >> 0x14 != 0) {
         uVar16 = uVar16 + (ulong)param_1[0xd] + ( param_4 >> 0x14 & 0xff );
         param_1[0xd] = (byte)uVar16;
         uVar16 = uVar16 >> 8;
         if (uVar16 != 0 || param_4 >> 0x1c != 0) {
            uVar16 = uVar16 + (ulong)param_1[0xc] + ( param_4 >> 0x1c & 0xff );
            param_1[0xc] = (byte)uVar16;
            uVar16 = uVar16 >> 8;
            if (uVar16 != 0 || param_4 >> 0x24 != 0) {
               uVar16 = uVar16 + (ulong)param_1[0xb] + ( param_4 >> 0x24 & 0xff );
               param_1[0xb] = (byte)uVar16;
               uVar16 = uVar16 >> 8;
               if (uVar16 != 0 || param_4 >> 0x2c != 0) {
                  uVar16 = uVar16 + (ulong)param_1[10] + ( param_4 >> 0x2c & 0xff );
                  param_1[10] = (byte)uVar16;
                  uVar16 = uVar16 >> 8;
                  if (uVar16 != 0 || param_4 >> 0x34 != 0) {
                     uVar16 = uVar16 + (ulong)param_1[9] + ( param_4 >> 0x34 & 0xff );
                     param_1[9] = (byte)uVar16;
                     if (uVar16 >> 8 != 0 || param_4 >> 0x3c != 0) {
                        param_1[8] = (char)( uVar16 >> 8 ) + param_1[8] + ( byte )(param_4 >> 0x3c);
                     }
                  }
               }
            }
         }
      }
   }
   param_2 = (ulong*)( (long)param_2 + ( param_4 & 0xfffffffffffffff0 ) );
   param_3 = (ulong*)( (long)param_3 + ( param_4 & 0xfffffffffffffff0 ) );
   uVar16 = uVar15 - 1;
   if (6 < uVar16) goto LAB_00101382;
   LAB_00101832:pbVar11 = param_1 + 0x10;
   *pbVar11 = *pbVar11 ^ ( byte ) * param_2;
   if (uVar15 == 1) {
      ( *pcVar5 )(pbVar11, pbVar11, uVar12);
      ( *pcVar5 )(param_1, &local_58, uVar12);
      *(byte*)param_3 = (byte)local_58 ^ ( byte ) * param_2;
   } else {
      param_1[0x11] = param_1[0x11] ^ *(byte*)( (long)param_2 + 1 );
      if (uVar15 != 2) {
         LAB_001013a8:param_1[0x12] = param_1[0x12] ^ *(byte*)( (long)param_2 + 2 );
         if (( ( ( ( ( ( uVar15 != 3 ) && ( param_1[0x13] = param_1[0x13] ^ *(byte*)( (long)param_2 + 3 ) ),uVar15 != 4 ) ) && ( param_1[0x14] = param_1[0x14] ^ *(byte*)( (long)param_2 + 4 ) ),uVar15 != 5 ) ) && ( ( param_1[0x15] = param_1[0x15] ^ *(byte*)( (long)param_2 + 5 ) ),uVar15 != 6 && ( param_1[0x16] = param_1[0x16] ^ *(byte*)( (long)param_2 + 6 ) ),uVar15 != 7 ) )) ( param_1[0x17] = uVar15 != 8 ) && ( ( ( param_1[0x18] = param_1[0x18] ^ (byte)param_2[1] ),uVar15 != 9 && ( param_1[0x19] = param_1[0x19] ^ *(byte*)( (long)param_2 + 9 ) ),uVar15 != 10 ) ) && ( ( param_1[0x1a] = param_1[0x1a] ^ *(byte*)( (long)param_2 + 10 ) ),uVar15 != 0xb && ( ( ( param_1[0x1b] = param_1[0x1b] ^ *(byte*)( (long)param_2 + 0xb ) ),uVar15 != 0xc && ( param_1[0x1c] = param_1[0x1c] ^ *(byte*)( (long)param_2 + 0xc ) ),uVar15 != 0xd ) ) && ( param_1[0x1d] = param_1[0x1d] ^ *(byte*)( (long)param_2 + 0xd ) ),uVar15 != 0xe ) && ( param_1[0x1e] = uVar15 != 0xf )) {
            param_1[0x1f] = param_1[0x1f] ^ *(byte*)( (long)param_2 + 0xf );
      }
   }
   ( *pcVar5 )(param_1 + 0x10, param_1 + 0x10, uVar12);
   ( *pcVar5 )(param_1, &local_58, uVar12);
   if (uVar16 < 7) {
      *(byte*)param_3 = (byte)local_58 ^ ( byte ) * param_2;
      *(byte*)( (long)param_3 + 1 ) = local_58._1_1_ ^ *(byte*)( (long)param_2 + 1 );
      if (uVar15 != 2) goto LAB_00101504;
   } else {
      if (( ulong )((long)param_3 - (long)( (long)param_2 + 1 )) < 0xf) goto LAB_001014ea;
      LAB_00101a0d:if (uVar16 < 0xf) {
         uVar18 = 0;
         uVar20 = 0;
         uVar16 = uVar15;
         LAB_00101a4e:*(ulong*)( (long)param_3 + uVar18 ) = *(ulong*)( (long)param_2 + uVar18 ) ^ *(ulong*)( (long)&local_58 + uVar18 );
         if (( uVar16 & 7 ) != 0) {
            uVar20 = uVar20 + (int)( uVar16 & 0xfffffffffffffff8 );
            lVar19 = uVar18 + ( uVar16 & 0xfffffffffffffff8 );
            *(byte*)( (long)param_3 + lVar19 ) = *(byte*)( (long)param_2 + lVar19 ) ^ *(byte*)( (long)&local_58 + (ulong)uVar20 );
            uVar16 = ( ulong )(uVar20 + 1);
            if (uVar16 < uVar15) goto LAB_00101a96;
         }
      } else {
         uVar16 = param_2[1];
         uVar18 = uVar15 & 0xfffffffffffffff0;
         *param_3 = *param_2 ^ CONCAT17(local_58._7_1_, CONCAT16(local_58._6_1_, CONCAT15(local_58._5_1_, CONCAT14(local_58._4_1_, CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));
         param_3[1] = uVar16 ^ CONCAT17(bStack_49, CONCAT16(bStack_4a, CONCAT15(bStack_4b, CONCAT14(bStack_4c, CONCAT13(bStack_4d, CONCAT12(bStack_4e, CONCAT11(bStack_4f, bStack_50)))))));
         uVar20 = (uint)uVar15 & 0xfffffff0;
         if (( uVar15 & 0xf ) == 0) goto LAB_00101638;
         uVar16 = uVar15 - uVar18;
         if (6 < ( uVar15 - uVar18 ) - 1) goto LAB_00101a4e;
         *(byte*)( (long)param_3 + uVar18 ) = *(byte*)( (long)param_2 + uVar18 ) ^ *(byte*)( (long)&local_58 + ( uVar15 & 0xfffffff0 ) );
         uVar16 = ( ulong )((int)uVar18 + 1);
         LAB_00101a96:*(byte*)( (long)param_3 + uVar16 ) = *(byte*)( (long)param_2 + uVar16 ) ^ *(byte*)( (long)&local_58 + uVar16 );
         uVar16 = ( ulong )(uVar20 + 2);
         if (uVar16 < uVar15) {
            *(byte*)( (long)param_3 + uVar16 ) = *(byte*)( (long)param_2 + uVar16 ) ^ *(byte*)( (long)&local_58 + uVar16 );
            uVar16 = ( ulong )(uVar20 + 3);
            if (uVar16 < uVar15) {
               *(byte*)( (long)param_3 + uVar16 ) = *(byte*)( (long)param_2 + uVar16 ) ^ *(byte*)( (long)&local_58 + uVar16 );
               uVar16 = ( ulong )(uVar20 + 4);
               if (uVar16 < uVar15) {
                  *(byte*)( (long)param_3 + uVar16 ) = *(byte*)( (long)param_2 + uVar16 ) ^ *(byte*)( (long)&local_58 + uVar16 );
                  uVar16 = ( ulong )(uVar20 + 5);
                  if (uVar16 < uVar15) {
                     *(byte*)( (long)param_3 + uVar16 ) = *(byte*)( (long)param_2 + uVar16 ) ^ *(byte*)( (long)&local_58 + uVar16 );
                     uVar16 = ( ulong )(uVar20 + 6);
                     if (uVar16 < uVar15) {
                        *(byte*)( (long)param_3 + uVar16 ) = *(byte*)( (long)param_2 + uVar16 ) ^ *(byte*)( (long)&local_58 + uVar16 );
                     }
                  }
               }
            }
         }
      }
   }
}}
  }LAB_00101638:bVar3 = ( bVar2 & 7 ) + 1;pbVar11 = param_1 + uVar10;if (bVar3 < 8) {
   if (( bVar3 & 4 ) == 0) {
      if (( bVar3 != 0 ) && ( *pbVar11 = 0(bVar3 & 2) != 0 )) {
         ( pbVar11 + ( (ulong)bVar3 - 2 ) )[0] = 0;
         ( pbVar11 + ( (ulong)bVar3 - 2 ) )[1] = 0;
      }
   } else {
      for (int i_2058 = 0; i_2058 < 4; i_2058++) {
         pbVar11[i_2058] = 0;
      }
      pbVar11 = pbVar11 + ( (ulong)bVar3 - 4 );
      for (int i_2059 = 0; i_2059 < 4; i_2059++) {
         pbVar11[i_2059] = 0;
      }
   }
} else {
   for (int i_2060 = 0; i_2060 < 8; i_2060++) {
      pbVar11[i_2060] = 0;
   }
   pbVar1 = pbVar11 + ( (ulong)bVar3 - 8 );
   for (int i_2061 = 0; i_2061 < 8; i_2061++) {
      pbVar1[i_2061] = 0;
   }
   uVar10 = (uint)bVar3 + ( (int)pbVar11 - (int)( ( ulong )(pbVar11 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
   if (7 < uVar10) {
      uVar20 = 0;
      do {
         uVar15 = (ulong)uVar20;
         uVar20 = uVar20 + 8;
         *(undefined8*)( ( ( ulong )(pbVar11 + 8) & 0xfffffffffffffff8 ) + uVar15 ) = 0;
      } while ( uVar20 < uVar10 );
   }
}( *pcVar5 )(param_1, &local_58, uVar12);*param_1 = bVar2;uVar12 = 0;*(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ CONCAT17(local_58._7_1_, CONCAT16(local_58._6_1_, CONCAT15(local_58._5_1_, CONCAT14(local_58._4_1_, CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));*(ulong*)( param_1 + 0x18 ) = *(ulong*)( param_1 + 0x18 ) ^ CONCAT17(bStack_49, CONCAT16(bStack_4a, CONCAT15(bStack_4b, CONCAT14(bStack_4c, CONCAT13(bStack_4d, CONCAT12(bStack_4e, CONCAT11(bStack_4f, bStack_50)))))));LAB_00101685:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar12;}undefined8 CRYPTO_ccm128_decrypt_ccm64(ulong *param_1, ulong *param_2, ulong *param_3, ulong param_4, code *param_5) {
   byte *pbVar1;
   ulong *puVar2;
   byte bVar3;
   byte bVar4;
   code *pcVar5;
   ulong uVar6;
   ushort uVar7;
   uint3 uVar8;
   uint5 uVar9;
   uint6 uVar10;
   undefined8 uVar11;
   uint uVar12;
   uint uVar13;
   ulong uVar14;
   ulong uVar15;
   uint uVar16;
   int iVar17;
   byte bVar19;
   ulong *puVar20;
   uint uVar21;
   byte *pbVar22;
   long in_FS_OFFSET;
   ulong uVar23;
   byte local_78;
   undefined8 local_58;
   byte bStack_50;
   byte bStack_4f;
   byte bStack_4e;
   byte bStack_4d;
   byte bStack_4c;
   byte bStack_4b;
   byte bStack_4a;
   byte bStack_49;
   long local_40;
   ulong uVar18;
   bVar3 = ( byte ) * param_1;
   pcVar5 = (code*)param_1[5];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = param_1[6];
   if (( bVar3 & 0x40 ) == 0) {
      ( *pcVar5 )(param_1, param_1 + 2);
   }
   uVar16 = bVar3 & 7;
   uVar21 = 0xf - uVar16;
   local_78 = bVar3 & 7;
   *(byte*)param_1 = bVar3 & 7;
   if (uVar21 == 0xf) {
      uVar14 = 0;
   } else {
      bVar19 = *(byte*)( (long)param_1 + (ulong)uVar21 );
      *(byte*)( (long)param_1 + (ulong)uVar21 ) = 0;
      uVar12 = 0x10 - uVar16;
      uVar14 = (ulong)bVar19 << 8;
      if (uVar12 != 0xf) {
         bVar4 = *(byte*)( (long)param_1 + (ulong)uVar12 );
         *(byte*)( (long)param_1 + (ulong)uVar12 ) = 0;
         uVar12 = 0x11 - uVar16;
         uVar7 = CONCAT11(bVar19, bVar4);
         uVar14 = (ulong)uVar7 << 8;
         if (uVar12 != 0xf) {
            bVar19 = *(byte*)( (long)param_1 + (ulong)uVar12 );
            *(byte*)( (long)param_1 + (ulong)uVar12 ) = 0;
            uVar12 = 0x12 - uVar16;
            uVar8 = CONCAT21(uVar7, bVar19);
            uVar14 = (ulong)uVar8 << 8;
            if (uVar12 != 0xf) {
               bVar19 = *(byte*)( (long)param_1 + (ulong)uVar12 );
               *(byte*)( (long)param_1 + (ulong)uVar12 ) = 0;
               uVar13 = 0x13 - uVar16;
               uVar12 = CONCAT31(uVar8, bVar19);
               uVar14 = (ulong)uVar12 << 8;
               if (uVar13 != 0xf) {
                  bVar19 = *(byte*)( (long)param_1 + (ulong)uVar13 );
                  *(byte*)( (long)param_1 + (ulong)uVar13 ) = 0;
                  uVar13 = 0x14 - uVar16;
                  uVar9 = CONCAT41(uVar12, bVar19);
                  uVar14 = (ulong)uVar9 << 8;
                  if (uVar13 != 0xf) {
                     bVar19 = *(byte*)( (long)param_1 + (ulong)uVar13 );
                     *(byte*)( (long)param_1 + (ulong)uVar13 ) = 0;
                     uVar10 = CONCAT51(uVar9, bVar19);
                     uVar14 = (ulong)uVar10 << 8;
                     if (uVar16 != 6) {
                        bVar19 = *(byte*)( (long)param_1 + 0xe );
                        *(byte*)( (long)param_1 + 0xe ) = 0;
                        uVar14 = (ulong)CONCAT61(uVar10, bVar19) << 8;
                     }
                  }
               }
            }
         }
      }
   }
   bVar19 = *(byte*)( (long)param_1 + 0xf );
   *(byte*)( (long)param_1 + 0xf ) = 1;
   if (( uVar14 | bVar19 ) != param_4) {
      uVar11 = 0xffffffff;
      goto LAB_00101dfa;
   }
   if (param_4 < 0x10) {
      if (param_4 != 0) goto LAB_00101e32;
   } else {
      ( *param_5 )(param_2, param_3, param_4 >> 4, uVar6);
      if (( param_4 & 0xf ) != 0) {
         uVar14 = ( param_4 >> 4 & 0xff ) + ( ulong ) * (byte*)( (long)param_1 + 0xf );
         *(byte*)( (long)param_1 + 0xf ) = (byte)uVar14;
         uVar14 = uVar14 >> 8;
         if (uVar14 != 0 || param_4 >> 0xc != 0) {
            uVar14 = ( ulong ) * (byte*)( (long)param_1 + 0xe ) + ( param_4 >> 0xc & 0xff ) + uVar14;
            *(byte*)( (long)param_1 + 0xe ) = (byte)uVar14;
            uVar14 = uVar14 >> 8;
            if (uVar14 != 0 || param_4 >> 0x14 != 0) {
               uVar14 = uVar14 + ( ulong ) * (byte*)( (long)param_1 + 0xd ) + ( param_4 >> 0x14 & 0xff );
               *(byte*)( (long)param_1 + 0xd ) = (byte)uVar14;
               uVar14 = uVar14 >> 8;
               if (uVar14 != 0 || param_4 >> 0x1c != 0) {
                  uVar14 = uVar14 + ( ulong ) * (byte*)( (long)param_1 + 0xc ) + ( param_4 >> 0x1c & 0xff );
                  *(byte*)( (long)param_1 + 0xc ) = (byte)uVar14;
                  uVar14 = uVar14 >> 8;
                  if (uVar14 != 0 || param_4 >> 0x24 != 0) {
                     uVar14 = uVar14 + ( ulong ) * (byte*)( (long)param_1 + 0xb ) + ( param_4 >> 0x24 & 0xff );
                     *(byte*)( (long)param_1 + 0xb ) = (byte)uVar14;
                     uVar14 = uVar14 >> 8;
                     if (uVar14 != 0 || param_4 >> 0x2c != 0) {
                        uVar14 = uVar14 + ( ulong ) * (byte*)( (long)param_1 + 10 ) + ( param_4 >> 0x2c & 0xff );
                        *(byte*)( (long)param_1 + 10 ) = (byte)uVar14;
                        uVar14 = uVar14 >> 8;
                        if (uVar14 != 0 || param_4 >> 0x34 != 0) {
                           uVar14 = uVar14 + ( ulong ) * (byte*)( (long)param_1 + 9 ) + ( param_4 >> 0x34 & 0xff );
                           *(byte*)( (long)param_1 + 9 ) = (byte)uVar14;
                           if (uVar14 >> 8 != 0 || param_4 >> 0x3c != 0) {
                              *(byte*)( param_1 + 1 ) = (char)( uVar14 >> 8 ) + (byte)param_1[1] + ( byte )(param_4 >> 0x3c);
                           }
                        }
                     }
                  }
               }
            }
         }
         param_2 = (ulong*)( (long)param_2 + ( param_4 & 0xfffffffffffffff0 ) );
         param_3 = (ulong*)( (long)param_3 + ( param_4 & 0xfffffffffffffff0 ) );
         param_4 = ( ulong )((uint)param_4 & 0xf);
         LAB_00101e32:puVar20 = param_1 + 2;
         ( *pcVar5 )(param_1, &local_58, uVar6);
         if (param_4 - 1 < 7) {
            bVar19 = (byte)local_58 ^ ( byte ) * param_2;
            *(byte*)param_3 = bVar19;
            *(byte*)( param_1 + 2 ) = (byte)param_1[2] ^ bVar19;
            if (param_4 != 1) goto LAB_00102186;
         } else if (( ( ulong )((long)puVar20 - ( (long)param_2 + 1 )) < 0xf || ( ulong )((long)param_3 - (long)( (long)param_2 + 1 )) < 0xf ) || ( param_3 < param_1 + 4 && param_1 < param_3 )) {
            bVar19 = ( byte ) * param_2 ^ (byte)local_58;
            *(byte*)param_3 = bVar19;
            *(byte*)( param_1 + 2 ) = (byte)param_1[2] ^ bVar19;
            LAB_00102186:bVar19 = local_58._1_1_ ^ *(byte*)( (long)param_2 + 1 );
            *(byte*)( (long)param_3 + 1 ) = bVar19;
            *(byte*)( (long)param_1 + 0x11 ) = *(byte*)( (long)param_1 + 0x11 ) ^ bVar19;
            if (param_4 != 2) {
               bVar19 = local_58._2_1_ ^ *(byte*)( (long)param_2 + 2 );
               *(byte*)( (long)param_3 + 2 ) = bVar19;
               *(byte*)( (long)param_1 + 0x12 ) = *(byte*)( (long)param_1 + 0x12 ) ^ bVar19;
               if (param_4 != 3) {
                  bVar19 = local_58._3_1_ ^ *(byte*)( (long)param_2 + 3 );
                  *(byte*)( (long)param_3 + 3 ) = bVar19;
                  *(byte*)( (long)param_1 + 0x13 ) = *(byte*)( (long)param_1 + 0x13 ) ^ bVar19;
                  if (param_4 != 4) {
                     bVar19 = local_58._4_1_ ^ *(byte*)( (long)param_2 + 4 );
                     *(byte*)( (long)param_3 + 4 ) = bVar19;
                     *(byte*)( (long)param_1 + 0x14 ) = *(byte*)( (long)param_1 + 0x14 ) ^ bVar19;
                     if (param_4 != 5) {
                        bVar19 = local_58._5_1_ ^ *(byte*)( (long)param_2 + 5 );
                        *(byte*)( (long)param_3 + 5 ) = bVar19;
                        *(byte*)( (long)param_1 + 0x15 ) = *(byte*)( (long)param_1 + 0x15 ) ^ bVar19;
                        if (param_4 != 6) {
                           bVar19 = local_58._6_1_ ^ *(byte*)( (long)param_2 + 6 );
                           *(byte*)( (long)param_3 + 6 ) = bVar19;
                           *(byte*)( (long)param_1 + 0x16 ) = *(byte*)( (long)param_1 + 0x16 ) ^ bVar19;
                           if (param_4 != 7) {
                              bVar19 = local_58._7_1_ ^ *(byte*)( (long)param_2 + 7 );
                              *(byte*)( (long)param_3 + 7 ) = bVar19;
                              *(byte*)( (long)param_1 + 0x17 ) = *(byte*)( (long)param_1 + 0x17 ) ^ bVar19;
                              if (param_4 != 8) {
                                 bVar19 = bStack_50 ^ (byte)param_2[1];
                                 *(byte*)( param_3 + 1 ) = bVar19;
                                 *(byte*)( param_1 + 3 ) = (byte)param_1[3] ^ bVar19;
                                 if (param_4 != 9) {
                                    bVar19 = bStack_4f ^ *(byte*)( (long)param_2 + 9 );
                                    *(byte*)( (long)param_3 + 9 ) = bVar19;
                                    *(byte*)( (long)param_1 + 0x19 ) = *(byte*)( (long)param_1 + 0x19 ) ^ bVar19;
                                    if (param_4 != 10) {
                                       bVar19 = bStack_4e ^ *(byte*)( (long)param_2 + 10 );
                                       *(byte*)( (long)param_3 + 10 ) = bVar19;
                                       *(byte*)( (long)param_1 + 0x1a ) = *(byte*)( (long)param_1 + 0x1a ) ^ bVar19;
                                       if (param_4 != 0xb) {
                                          bVar19 = bStack_4d ^ *(byte*)( (long)param_2 + 0xb );
                                          *(byte*)( (long)param_3 + 0xb ) = bVar19;
                                          *(byte*)( (long)param_1 + 0x1b ) = *(byte*)( (long)param_1 + 0x1b ) ^ bVar19;
                                          if (param_4 != 0xc) {
                                             bVar19 = bStack_4c ^ *(byte*)( (long)param_2 + 0xc );
                                             *(byte*)( (long)param_3 + 0xc ) = bVar19;
                                             *(byte*)( (long)param_1 + 0x1c ) = *(byte*)( (long)param_1 + 0x1c ) ^ bVar19;
                                             if (param_4 != 0xd) {
                                                bVar19 = bStack_4b ^ *(byte*)( (long)param_2 + 0xd );
                                                *(byte*)( (long)param_3 + 0xd ) = bVar19;
                                                *(byte*)( (long)param_1 + 0x1d ) = *(byte*)( (long)param_1 + 0x1d ) ^ bVar19;
                                                if (param_4 != 0xe) {
                                                   bVar19 = bStack_4a ^ *(byte*)( (long)param_2 + 0xe );
                                                   *(byte*)( (long)param_3 + 0xe ) = bVar19;
                                                   *(byte*)( (long)param_1 + 0x1e ) = *(byte*)( (long)param_1 + 0x1e ) ^ bVar19;
                                                   if (param_4 != 0xf) {
                                                      bVar19 = *(byte*)( (long)param_2 + 0xf ) ^ bStack_49;
                                                      *(byte*)( (long)param_3 + 0xf ) = bVar19;
                                                      *(byte*)( (long)param_1 + 0x1f ) = *(byte*)( (long)param_1 + 0x1f ) ^ bVar19;
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         } else {
            if (param_4 - 1 < 0xf) {
               iVar17 = 0;
               uVar15 = 0;
               uVar14 = param_4;
               LAB_00101efc:puVar2 = (ulong*)( (long)param_1 + uVar15 + 0x10 );
               uVar18 = *(ulong*)( (long)param_2 + uVar15 ) ^ *(ulong*)( (long)&local_58 + uVar15 );
               *(ulong*)( (long)param_3 + uVar15 ) = uVar18;
               *puVar2 = *puVar2 ^ uVar18;
               uVar15 = uVar15 + ( uVar14 & 0xfffffffffffffff8 );
               uVar18 = ( ulong )(uint)(iVar17 + (int)( uVar14 & 0xfffffffffffffff8 ));
               if (( uVar14 & 7 ) == 0) goto LAB_00102000;
            } else {
               uVar14 = *param_2 ^ CONCAT17(local_58._7_1_, CONCAT16(local_58._6_1_, CONCAT15(local_58._5_1_, CONCAT14(local_58._4_1_, CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));
               uVar23 = param_2[1] ^ CONCAT17(bStack_49, CONCAT16(bStack_4a, CONCAT15(bStack_4b, CONCAT14(bStack_4c, CONCAT13(bStack_4d, CONCAT12(bStack_4e, CONCAT11(bStack_4f, bStack_50)))))));
               uVar15 = param_4 & 0xfffffffffffffff0;
               *param_3 = uVar14;
               param_3[1] = uVar23;
               uVar18 = param_4 & 0xfffffff0;
               iVar17 = (int)uVar18;
               param_1[2] = uVar14 ^ param_1[2];
               param_1[3] = uVar23 ^ param_1[3];
               if (( param_4 & 0xf ) == 0) goto LAB_00102000;
               uVar14 = param_4 - uVar15;
               if (6 < ( param_4 - uVar15 ) - 1) goto LAB_00101efc;
            }
            bVar19 = *(byte*)( (long)param_2 + uVar15 ) ^ *(byte*)( (long)&local_58 + uVar18 );
            *(byte*)( (long)param_3 + uVar15 ) = bVar19;
            iVar17 = (int)uVar18;
            uVar14 = ( ulong )(iVar17 + 1);
            pbVar22 = (byte*)( (long)param_1 + uVar18 + 0x10 );
            *pbVar22 = *pbVar22 ^ bVar19;
            if (uVar14 < param_4) {
               bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
               *(byte*)( (long)param_3 + uVar14 ) = bVar19;
               pbVar22 = (byte*)( (long)param_1 + uVar14 + 0x10 );
               *pbVar22 = *pbVar22 ^ bVar19;
               uVar14 = ( ulong )(iVar17 + 2);
               if (uVar14 < param_4) {
                  bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
                  *(byte*)( (long)param_3 + uVar14 ) = bVar19;
                  pbVar22 = (byte*)( (long)param_1 + uVar14 + 0x10 );
                  *pbVar22 = *pbVar22 ^ bVar19;
                  uVar14 = ( ulong )(iVar17 + 3);
                  if (uVar14 < param_4) {
                     bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
                     *(byte*)( (long)param_3 + uVar14 ) = bVar19;
                     pbVar22 = (byte*)( (long)param_1 + uVar14 + 0x10 );
                     *pbVar22 = *pbVar22 ^ bVar19;
                     uVar14 = ( ulong )(iVar17 + 4);
                     if (uVar14 < param_4) {
                        bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
                        *(byte*)( (long)param_3 + uVar14 ) = bVar19;
                        pbVar22 = (byte*)( (long)param_1 + uVar14 + 0x10 );
                        *pbVar22 = *pbVar22 ^ bVar19;
                        uVar14 = ( ulong )(iVar17 + 5);
                        if (uVar14 < param_4) {
                           bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
                           *(byte*)( (long)param_3 + uVar14 ) = bVar19;
                           pbVar22 = (byte*)( (long)param_1 + uVar14 + 0x10 );
                           *pbVar22 = *pbVar22 ^ bVar19;
                           uVar14 = ( ulong )(iVar17 + 6);
                           if (uVar14 < param_4) {
                              bVar19 = *(byte*)( (long)param_2 + uVar14 ) ^ *(byte*)( (long)&local_58 + uVar14 );
                              *(byte*)( (long)param_3 + uVar14 ) = bVar19;
                              pbVar22 = (byte*)( (long)param_1 + uVar14 + 0x10 );
                              *pbVar22 = *pbVar22 ^ bVar19;
                           }
                        }
                     }
                  }
               }
            }
         }
         LAB_00102000:( *pcVar5 )(puVar20, puVar20, uVar6);
      }
   }
   pbVar22 = (byte*)( (ulong)uVar21 + (long)param_1 );
   local_78 = local_78 + 1;
   if (local_78 < 8) {
      if (( local_78 & 4 ) == 0) {
         if (( local_78 != 0 ) && ( *pbVar22 = 0(local_78 & 2) != 0 )) {
            ( pbVar22 + ( (ulong)local_78 - 2 ) )[0] = 0;
            ( pbVar22 + ( (ulong)local_78 - 2 ) )[1] = 0;
         }
      } else {
         for (int i_2062 = 0; i_2062 < 4; i_2062++) {
            pbVar22[i_2062] = 0;
         }
         pbVar22 = pbVar22 + ( (ulong)local_78 - 4 );
         for (int i_2063 = 0; i_2063 < 4; i_2063++) {
            pbVar22[i_2063] = 0;
         }
      }
   } else {
      for (int i_2064 = 0; i_2064 < 8; i_2064++) {
         pbVar22[i_2064] = 0;
      }
      pbVar1 = pbVar22 + ( (ulong)local_78 - 8 );
      for (int i_2065 = 0; i_2065 < 8; i_2065++) {
         pbVar1[i_2065] = 0;
      }
      uVar16 = (uint)local_78 + ( (int)pbVar22 - (int)( ( ulong )(pbVar22 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
      if (7 < uVar16) {
         uVar21 = 0;
         do {
            uVar14 = (ulong)uVar21;
            uVar21 = uVar21 + 8;
            *(undefined8*)( ( ( ulong )(pbVar22 + 8) & 0xfffffffffffffff8 ) + uVar14 ) = 0;
         } while ( uVar21 < uVar16 );
      }
   }
   ( *pcVar5 )(param_1, &local_58, uVar6);
   *(byte*)param_1 = bVar3;
   uVar11 = 0;
   param_1[2] = param_1[2] ^ CONCAT17(local_58._7_1_, CONCAT16(local_58._6_1_, CONCAT15(local_58._5_1_, CONCAT14(local_58._4_1_, CONCAT13(local_58._3_1_, CONCAT12(local_58._2_1_, CONCAT11(local_58._1_1_, (byte)local_58)))))));
   param_1[3] = param_1[3] ^ CONCAT17(bStack_49, CONCAT16(bStack_4a, CONCAT15(bStack_4b, CONCAT14(bStack_4c, CONCAT13(bStack_4d, CONCAT12(bStack_4e, CONCAT11(bStack_4f, bStack_50)))))));
   LAB_00101dfa:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar11;
}ulong CRYPTO_ccm128_tag(byte *param_1, byte *param_2, ulong param_3) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   uVar1 = ( *param_1 >> 3 & 7 ) * 2 + 2;
   uVar2 = (ulong)uVar1;
   if (uVar2 == param_3) {
      if (uVar1 < 8) {
         if (( uVar1 & 4 ) == 0) {
            if (( uVar1 != 0 ) && ( *param_2 = param_1[0x10](uVar1 & 2) != 0 )) {
               *(undefined2*)( param_2 + ( uVar2 - 2 ) ) = *(undefined2*)( param_1 + uVar2 + 0xe );
            }
         } else {
            *(undefined4*)param_2 = *(undefined4*)( param_1 + 0x10 );
            *(undefined4*)( param_2 + ( uVar2 - 4 ) ) = *(undefined4*)( param_1 + uVar2 + 0xc );
         }
      } else {
         *(undefined8*)param_2 = *(undefined8*)( param_1 + 0x10 );
         *(undefined8*)( param_2 + ( uVar2 - 8 ) ) = *(undefined8*)( param_1 + uVar2 + 8 );
         lVar4 = (long)param_2 - ( ( ulong )(param_2 + 8) & 0xfffffffffffffff8 );
         uVar1 = uVar1 + (int)lVar4 & 0xfffffff8;
         if (7 < uVar1) {
            uVar3 = 0;
            do {
               uVar5 = (ulong)uVar3;
               uVar3 = uVar3 + 8;
               *(undefined8*)( ( ( ulong )(param_2 + 8) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( param_1 + uVar5 + ( 0x10 - lVar4 ) );
            } while ( uVar3 < uVar1 );
         }
      }
   } else {
      uVar2 = 0;
   }
   return uVar2;
}
