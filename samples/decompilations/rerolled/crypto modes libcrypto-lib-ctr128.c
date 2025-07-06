void CRYPTO_ctr128_encrypt(ulong *param_1, ulong *param_2, ulong param_3, undefined8 param_4, ulong *param_5, ulong *param_6, uint *param_7, code *param_8) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   uint uVar6;
   long lVar7;
   ulong *puVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   ulong *puVar19;
   uint uVar20;
   byte local_88;
   byte local_6c;
   byte local_68;
   byte local_64;
   ulong *local_60;
   byte local_58;
   uVar17 = *param_7;
   if (( uVar17 != 0 ) && ( puVar8 = param_2 ),puVar19 = param_1,param_3 != 0) {
      do {
         param_1 = (ulong*)( (long)puVar19 + 1 );
         param_2 = (ulong*)( (long)puVar8 + 1 );
         param_3 = param_3 - 1;
         *(byte*)puVar8 = *(byte*)( (long)param_6 + (ulong)uVar17 ) ^ ( byte ) * puVar19;
         uVar17 = uVar17 + 1 & 0xf;
         if (uVar17 == 0) break;
         puVar8 = param_2;
         puVar19 = param_1;
      }
 while ( param_3 != 0 );
   }

   local_60 = param_1;
   if (0xf < param_3) {
      lVar7 = ( param_3 - 0x10 & 0xfffffffffffffff0 ) + 0x10;
      local_60 = (ulong*)( (long)param_1 + lVar7 );
      puVar8 = param_2;
      do {
         ( *param_8 )(param_5, param_6, param_4);
         uVar11 = ( uint ) * (byte*)( (long)param_5 + 0xe ) + ( *(byte*)( (long)param_5 + 0xf ) + 1 >> 8 );
         uVar10 = ( uint ) * (byte*)( (long)param_5 + 0xd ) + ( uVar11 >> 8 );
         uVar4 = ( uint ) * (byte*)( (long)param_5 + 0xc ) + ( uVar10 >> 8 );
         uVar1 = ( uVar4 >> 8 ) + ( uint ) * (byte*)( (long)param_5 + 0xb );
         uVar6 = ( uint ) * (byte*)( (long)param_5 + 10 ) + ( uVar1 >> 8 );
         uVar17 = ( uint ) * (byte*)( (long)param_5 + 9 ) + ( uVar6 >> 8 );
         uVar12 = (uint)(byte)param_5[1] + ( uVar17 >> 8 );
         uVar2 = ( uint ) * (byte*)( (long)param_5 + 7 ) + ( uVar12 >> 8 );
         uVar18 = ( uint ) * (byte*)( (long)param_5 + 6 ) + ( uVar2 >> 8 );
         uVar9 = ( uint ) * (byte*)( (long)param_5 + 5 ) + ( uVar18 >> 8 );
         uVar16 = ( uint ) * (byte*)( (long)param_5 + 4 ) + ( uVar9 >> 8 );
         uVar15 = ( uint ) * (byte*)( (long)param_5 + 3 ) + ( uVar16 >> 8 );
         uVar14 = ( uint ) * (byte*)( (long)param_5 + 2 ) + ( uVar15 >> 8 );
         uVar13 = ( uint ) * (byte*)( (long)param_5 + 1 ) + ( uVar14 >> 8 );
         puVar19 = param_1 + 2;
         local_88 = (byte)uVar1;
         local_6c = (byte)uVar6;
         local_68 = (byte)uVar17;
         local_64 = (byte)uVar12;
         *param_5 = ( ( ( ( ( ( ( ulong )(uVar2 & 0xff) << 8 | ( ulong )(uVar18 & 0xff) ) << 8 | ( ulong )(uVar9 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar13 >> 8 ) + (char)*param_5);
         param_5[1] = ( ( ( ( ( ( ( ulong )(byte)(*(char*)( (long)param_5 + 0xf ) + 1) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(uVar4 & 0xff) ) << 8 | (ulong)local_88 ) << 8 | (ulong)local_6c ) << 8 | (ulong)local_68 ) << 8 | (ulong)local_64;
         *puVar8 = *param_1 ^ *param_6;
         puVar8[1] = param_1[1] ^ param_6[1];
         puVar8 = puVar8 + 2;
         param_1 = puVar19;
      }
 while ( puVar19 != local_60 );
      param_2 = (ulong*)( (long)param_2 + lVar7 );
      uVar17 = 0;
      param_3 = ( ulong )((uint)param_3 & 0xf);
   }

   if (param_3 != 0) {
      ( *param_8 )(param_5, param_6, param_4);
      uVar6 = ( *(byte*)( (long)param_5 + 0xf ) + 1 >> 8 ) + ( uint ) * (byte*)( (long)param_5 + 0xe );
      uVar9 = ( uVar6 >> 8 ) + ( uint ) * (byte*)( (long)param_5 + 0xd );
      uVar1 = ( uint ) * (byte*)( (long)param_5 + 0xc ) + ( uVar9 >> 8 );
      uVar20 = ( uint ) * (byte*)( (long)param_5 + 0xb ) + ( uVar1 >> 8 );
      uVar11 = ( uint ) * (byte*)( (long)param_5 + 10 ) + ( uVar20 >> 8 );
      uVar2 = ( uint ) * (byte*)( (long)param_5 + 9 ) + ( uVar11 >> 8 );
      uVar4 = (uint)(byte)param_5[1] + ( uVar2 >> 8 );
      uVar10 = ( uint ) * (byte*)( (long)param_5 + 7 ) + ( uVar4 >> 8 );
      uVar18 = ( uint ) * (byte*)( (long)param_5 + 6 ) + ( uVar10 >> 8 );
      uVar16 = ( uint ) * (byte*)( (long)param_5 + 5 ) + ( uVar18 >> 8 );
      uVar15 = ( uint ) * (byte*)( (long)param_5 + 4 ) + ( uVar16 >> 8 );
      uVar14 = ( uint ) * (byte*)( (long)param_5 + 3 ) + ( uVar15 >> 8 );
      uVar13 = ( uint ) * (byte*)( (long)param_5 + 2 ) + ( uVar14 >> 8 );
      uVar12 = ( uVar13 >> 8 ) + ( uint ) * (byte*)( (long)param_5 + 1 );
      local_88 = (byte)uVar6;
      local_6c = (byte)uVar9;
      uVar5 = ( ulong )(uVar17 + 1);
      local_68 = (byte)uVar11;
      local_64 = (byte)uVar2;
      local_58 = (byte)uVar4;
      uVar3 = (ulong)uVar17;
      *param_5 = ( ( ( ( ( ( ( ulong )(uVar10 & 0xff) << 8 | ( ulong )(uVar18 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar12 >> 8 ) + (char)*param_5);
      param_5[1] = ( ( ( ( (ulong)CONCAT21(CONCAT11(*(char*)( (long)param_5 + 0xf ) + '\x01', local_88), local_6c) << 8 | (ulong)uVar1 & 0xff ) << 8 | ( ulong )(uVar20 & 0xff) ) << 8 | (ulong)local_68 ) << 8 | (ulong)local_64 ) << 8 | (ulong)local_58;
      *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)param_6 + uVar3 ) ^ *(byte*)( (long)local_60 + uVar3 );
      lVar7 = param_3 - 1;
      if (lVar7 != 0) {
         *(byte*)( (long)param_2 + uVar5 ) = *(byte*)( (long)param_6 + uVar5 ) ^ *(byte*)( (long)local_60 + uVar5 );
         uVar3 = ( ulong )(uVar17 + 2);
         if (lVar7 != 1) {
            *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
            uVar3 = ( ulong )(uVar17 + 3);
            if (param_3 != 3) {
               *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
               uVar3 = ( ulong )(uVar17 + 4);
               if (param_3 != 4) {
                  *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                  uVar3 = ( ulong )(uVar17 + 5);
                  if (param_3 != 5) {
                     *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                     uVar3 = ( ulong )(uVar17 + 6);
                     if (param_3 != 6) {
                        *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                        uVar3 = ( ulong )(uVar17 + 7);
                        if (param_3 != 7) {
                           *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                           uVar3 = ( ulong )(uVar17 + 8);
                           if (param_3 != 8) {
                              *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                              uVar3 = ( ulong )(uVar17 + 9);
                              if (param_3 != 9) {
                                 *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                                 uVar3 = ( ulong )(uVar17 + 10);
                                 if (param_3 != 10) {
                                    *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                                    uVar3 = ( ulong )(uVar17 + 0xb);
                                    if (param_3 != 0xb) {
                                       *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                                       uVar3 = ( ulong )(uVar17 + 0xc);
                                       if (param_3 != 0xc) {
                                          *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                                          uVar3 = ( ulong )(uVar17 + 0xd);
                                          if (param_3 != 0xd) {
                                             *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
                                             uVar3 = ( ulong )(uVar17 + 0xe);
                                             if (param_3 != 0xe) {
                                                *(byte*)( (long)param_2 + uVar3 ) = *(byte*)( (long)local_60 + uVar3 ) ^ *(byte*)( (long)param_6 + uVar3 );
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

      uVar17 = uVar17 + 1 + (int)lVar7;
   }

   *param_7 = uVar17;
   return;
}
void CRYPTO_ctr128_encrypt_ctr32(byte *param_1, byte *param_2, ulong param_3, undefined8 param_4, ulong *param_5, undefined1 (*param_6)[16], uint *param_7, code *param_8) {
   char *pcVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   long lVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uVar15 = *param_7;
   for (; ( uVar15 != 0 && ( param_3 != 0 ) ); param_3 = param_3 - 1) {
      *param_2 = ( *param_6 )[uVar15] ^ *param_1;
      uVar15 = uVar15 + 1 & 0xf;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
   }

   uVar9 = *(uint*)( (long)param_5 + 0xc );
   uVar9 = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18;
   do {
      if (param_3 < 0x10) {
         if (param_3 != 0) {
            uVar9 = uVar9 + 1;
            *param_6 = (undefined1[16])0x0;
            ( *param_8 )(param_6, param_6, 1, param_4, param_5);
            *(uint*)( (long)param_5 + 0xc ) = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 * 0x1000000;
            if (uVar9 == 0) {
               uVar10 = ( uint ) * (byte*)( (long)param_5 + 10 ) + ( *(byte*)( (long)param_5 + 0xb ) + 1 >> 8 );
               uVar9 = ( uint ) * (byte*)( (long)param_5 + 9 ) + ( uVar10 >> 8 );
               uVar5 = (uint)(byte)param_5[1] + ( uVar9 >> 8 );
               *(uint*)( param_5 + 1 ) = ( ( ( *(byte*)( (long)param_5 + 0xb ) + 1 & 0xff ) << 8 | uVar10 & 0xff ) << 8 | uVar9 & 0xff ) << 8 | uVar5 & 0xff;
               uVar9 = ( uint ) * (byte*)( (long)param_5 + 7 ) + ( uVar5 >> 8 );
               uVar14 = ( uint ) * (byte*)( (long)param_5 + 6 ) + ( uVar9 >> 8 );
               uVar13 = ( uint ) * (byte*)( (long)param_5 + 5 ) + ( uVar14 >> 8 );
               uVar12 = ( uint ) * (byte*)( (long)param_5 + 4 ) + ( uVar13 >> 8 );
               uVar11 = ( uint ) * (byte*)( (long)param_5 + 3 ) + ( uVar12 >> 8 );
               uVar10 = ( uint ) * (byte*)( (long)param_5 + 2 ) + ( uVar11 >> 8 );
               uVar5 = ( uint ) * (byte*)( (long)param_5 + 1 ) + ( uVar10 >> 8 );
               *param_5 = ( ( ( ( ( ( ( ulong )(uVar9 & 0xff) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(uVar5 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar5 >> 8 ) + (char)*param_5);
            }

            LAB_00100a5f:uVar9 = uVar15 + 1;
            param_2[uVar15] = ( *param_6 )[uVar15] ^ param_1[uVar15];
            lVar8 = param_3 - 1;
            if (lVar8 != 0) {
               param_2[uVar9] = ( *param_6 )[uVar9] ^ param_1[uVar9];
               uVar5 = uVar15 + 2;
               if (lVar8 != 1) {
                  param_2[uVar5] = ( *param_6 )[uVar5] ^ param_1[uVar5];
                  uVar5 = uVar15 + 3;
                  if (param_3 != 3) {
                     param_2[uVar5] = ( *param_6 )[uVar5] ^ param_1[uVar5];
                     uVar5 = uVar15 + 4;
                     if (param_3 != 4) {
                        param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                        uVar5 = uVar15 + 5;
                        if (param_3 != 5) {
                           param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                           uVar5 = uVar15 + 6;
                           if (param_3 != 6) {
                              param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                              uVar5 = uVar15 + 7;
                              if (param_3 != 7) {
                                 param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                 uVar5 = uVar15 + 8;
                                 if (param_3 != 8) {
                                    param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                    uVar5 = uVar15 + 9;
                                    if (param_3 != 9) {
                                       param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                       uVar5 = uVar15 + 10;
                                       if (param_3 != 10) {
                                          param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                          uVar5 = uVar15 + 0xb;
                                          if (param_3 != 0xb) {
                                             param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                             uVar5 = uVar15 + 0xc;
                                             if (param_3 != 0xc) {
                                                param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                                uVar5 = uVar15 + 0xd;
                                                if (param_3 != 0xd) {
                                                   param_2[uVar5] = param_1[uVar5] ^ ( *param_6 )[uVar5];
                                                   uVar15 = uVar15 + 0xe;
                                                   if (param_3 != 0xe) {
                                                      param_2[uVar15] = param_1[uVar15] ^ ( *param_6 )[uVar15];
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

            uVar15 = uVar9 + (int)lVar8;
         }

         LAB_001008c1:*param_7 = uVar15;
         return;
      }

      uVar5 = uVar9;
      if (0x10000000f < param_3) goto LAB_00100857;
      while (true) {
         uVar7 = param_3 >> 4;
         uVar9 = (int)uVar7 + uVar9;
         uVar6 = (ulong)uVar9;
         if (uVar7 <= uVar6) break;
         while (true) {
            lVar8 = uVar7 - uVar6;
            ( *param_8 )(param_1, param_2, lVar8, param_4, param_5);
            bVar2 = *(byte*)( (long)param_5 + 0xb );
            bVar3 = *(byte*)( (long)param_5 + 10 );
            bVar4 = *(byte*)( (long)param_5 + 9 );
            pcVar1 = (char*)( (long)param_5 + 0xc );
            for (int i = 0; i < 4; i++) {
               pcVar1[i] = '\0';
            }

            uVar10 = (uint)bVar3 + ( bVar2 + 1 >> 8 );
            uVar9 = (uint)bVar4 + ( uVar10 >> 8 );
            uVar5 = (uint)(byte)param_5[1] + ( uVar9 >> 8 );
            *(uint*)( param_5 + 1 ) = ( ( ( bVar2 + 1 & 0xff ) << 8 | uVar10 & 0xff ) << 8 | uVar9 & 0xff ) << 8 | uVar5 & 0xff;
            uVar9 = ( uint ) * (byte*)( (long)param_5 + 7 ) + ( uVar5 >> 8 );
            uVar14 = ( uint ) * (byte*)( (long)param_5 + 6 ) + ( uVar9 >> 8 );
            uVar13 = ( uint ) * (byte*)( (long)param_5 + 5 ) + ( uVar14 >> 8 );
            uVar12 = ( uint ) * (byte*)( (long)param_5 + 4 ) + ( uVar13 >> 8 );
            uVar11 = ( uint ) * (byte*)( (long)param_5 + 3 ) + ( uVar12 >> 8 );
            uVar10 = ( uint ) * (byte*)( (long)param_5 + 2 ) + ( uVar11 >> 8 );
            uVar5 = ( uint ) * (byte*)( (long)param_5 + 1 ) + ( uVar10 >> 8 );
            param_3 = param_3 + lVar8 * -0x10;
            param_2 = param_2 + lVar8 * 0x10;
            param_1 = param_1 + lVar8 * 0x10;
            *param_5 = ( ( ( ( ( ( ( ulong )(uVar9 & 0xff) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(uVar5 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar5 >> 8 ) + (char)*param_5);
            if (param_3 < 0x10) {
               if (param_3 == 0) goto LAB_001008c1;
               *param_6 = (undefined1[16])0x0;
               ( *param_8 )(param_6, param_6, 1, param_4, param_5);
               pcVar1 = (char*)( (long)param_5 + 0xc );
               for (int i = 0; i < 4; i++) {
                  pcVar1[i] = '\0';
               }

               goto LAB_00100a5f;
            }

            uVar9 = 0;
            uVar5 = 0;
            if (param_3 < 0x100000010) break;
            LAB_00100857:uVar7 = 0x10000000;
            uVar9 = uVar5 + 0x10000000;
            uVar6 = (ulong)uVar9;
            if (0xfffffff < uVar6) goto LAB_0010086c;
         }
;
      }
;
      LAB_0010086c:( *param_8 )(param_1, param_2, uVar7, param_4, param_5);
      param_3 = param_3 + uVar7 * -0x10;
      param_2 = param_2 + uVar7 * 0x10;
      param_1 = param_1 + uVar7 * 0x10;
      *(uint*)( (long)param_5 + 0xc ) = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18;
   }
 while ( true );
}

