void from_words52(ulong *param_1, int param_2, ulong *param_3) {
   ulong *puVar1;
   ulong uVar2;
   ulong uVar3;
   uint uVar4;
   ulong *puVar5;
   int iVar6;
   uVar4 = param_2 + 0x3f >> 6;
   puVar5 = param_3;
   if ((int)uVar4 < 1) {
      LAB_00100110:if (param_2 == 0) {
         return;
      }

      param_2 = param_2 + 7;
      uVar2 = *puVar5;
      puVar1 = param_1;
      if (param_2 >> 3 < 1) {
         return;
      }

      LAB_00100121:param_2 = param_2 >> 3;
      *(char*)puVar1 = (char)uVar2;
      if (( ( ( param_2 != 1 ) && ( *(char*)( (long)puVar1 + 1 ) = (char)( uVar2 >> 8 ) ),param_2 != 2 ) ) && ( *(char*)( (long)puVar1 + 2 ) = param_2 != 3 )) &&( ( ( *(char*)( (long)puVar1 + 3 ) = (char)( uVar2 >> 0x18 ) ),param_2 != 4 && ( *(char*)( (long)puVar1 + 4 ) = (char)( uVar2 >> 0x20 ) ),param_2 != 5 ) ) && ( *(char*)( (long)puVar1 + 5 ) = param_2 != 6 ) * (char*)( (long)puVar1 + 6 ) = (char)( uVar2 >> 0x30 );
      return;
   }

}
else{puVar1 = (ulong*)memset(param_1, 0, (ulong)uVar4 << 3);if (param_2 < 0x68) {
   if (param_2 < 0x35) {
      param_2 = param_2 + 7;
      uVar2 = *param_3;
      goto LAB_00100121;
   }

}
 else {
   do {
      uVar2 = *param_3;
      param_2 = param_2 + -0x68;
      param_1 = (ulong*)( (long)puVar1 + 0xd );
      puVar5 = param_3 + 2;
      *puVar1 = uVar2;
      *(ulong*)( (long)puVar1 + 6 ) = param_3[1] << 4 | uVar2 >> 0x30;
      puVar1 = param_1;
      param_3 = puVar5;
   }
 while ( 0x67 < param_2 );
   if (param_2 < 0x35) goto LAB_00100110;
}
uVar2 = *param_3;iVar6 = param_2 + -0x2d >> 3;*(int*)puVar1 = (int)*param_3;*(char*)( (long)puVar1 + 4 ) = (char)( uVar2 >> 0x20 );*(char*)( (long)puVar1 + 6 ) = (char)( uVar2 >> 0x30 );*(char*)( (long)puVar1 + 5 ) = (char)( uVar2 >> 0x28 );uVar2 = param_3[1] << 4;uVar3 = uVar2 | *param_3 >> 0x30;*(char*)( (long)puVar1 + 6 ) = (char)uVar3;if (( ( iVar6 != 1 ) && ( *(char*)( (long)puVar1 + 7 ) = (char)( uVar3 >> 8 ) ),iVar6 != 2 )) &&( ( *(char*)( puVar1 + 1 ) = (char)( uVar2 >> 0x10 ) ),iVar6 != 3 && ( ( ( *(char*)( (long)puVar1 + 9 ) = (char)( uVar2 >> 0x18 ) ),iVar6 != 4 && ( *(char*)( (long)puVar1 + 10 ) = (char)( uVar2 >> 0x20 ) ),iVar6 != 5 ) ) && ( *(char*)( (long)puVar1 + 0xb ) = iVar6 != 6 ) ) * (char*)( (long)puVar1 + 0xc ) = (char)( uVar2 >> 0x30 );}
  }return;}void to_words52(ulong *param_1, int param_2, ulong *param_3, int param_4) {
   byte bVar1;
   ulong uVar2;
   int iVar3;
   ulong *puVar4;
   ulong *puVar5;
   puVar4 = param_3;
   puVar5 = param_1;
   if (0x67 < param_4) {
      do {
         param_4 = param_4 + -0x68;
         param_3 = (ulong*)( (long)puVar4 + 0xd );
         param_2 = param_2 + -2;
         param_1 = puVar5 + 2;
         *puVar5 = *puVar4 & 0xfffffffffffff;
         puVar5[1] = *(ulong*)( (long)puVar4 + 6 ) >> 4 & 0xfffffffffffff;
         puVar4 = param_3;
         puVar5 = param_1;
      }
 while ( 0x67 < param_4 );
   }

   if (param_4 < 0x35) {
      if (0 < param_4) {
         iVar3 = param_4 + 7 >> 3;
         bVar1 = *(byte*)( (long)param_3 + (long)iVar3 + -1 );
         uVar2 = (ulong)bVar1;
         if (iVar3 != 1) {
            uVar2 = (ulong)CONCAT11(bVar1, *(byte*)( (long)param_3 + (long)iVar3 + -2 ));
            if (iVar3 + -2 != 0) {
               uVar2 = uVar2 * 0x100 + ( ulong ) * (byte*)( (long)param_3 + (long)( iVar3 + -2 ) + -1 );
               if (iVar3 + -3 != 0) {
                  uVar2 = uVar2 * 0x100 + ( ulong ) * (byte*)( (long)param_3 + (long)( iVar3 + -3 ) + -1 );
                  if (iVar3 + -4 != 0) {
                     uVar2 = uVar2 * 0x100 + ( ulong ) * (byte*)( (long)param_3 + (long)( iVar3 + -4 ) + -1 );
                     if (( iVar3 + -5 != 0 ) && ( uVar2 = uVar2 * 0x100 + ( ulong ) * (byte*)( (long)param_3 + (long)( iVar3 + -5 ) + -1 ) ),iVar3 != 6) {
                        uVar2 = uVar2 * 0x100 + ( ulong )(byte) * param_3;
                     }

                  }

               }

            }

         }

         *param_1 = uVar2;
         memset(param_1 + 1, 0, (long)( param_2 + -1 ) << 3);
         return;
      }

   }
 else {
      iVar3 = param_4 + -0x2d >> 3;
      *param_1 = ( ulong )(byte) * param_3 + ( ( ulong ) * (byte*)( (long)param_3 + 1 ) + ( ( ulong ) * (byte*)( (long)param_3 + 2 ) + ( ( ulong ) * (byte*)( (long)param_3 + 3 ) + ( ( ulong ) * (byte*)( (long)param_3 + 4 ) + ( ulong ) * (ushort*)( (long)param_3 + 5 ) * 0x100 ) * 0x100 ) * 0x100 ) * 0x100 ) * 0x100 & 0xfffffffffffff;
      bVar1 = *(byte*)( (long)param_3 + (long)( iVar3 + 5 ) );
      uVar2 = (ulong)bVar1;
      if (( ( ( iVar3 != 1 ) && ( uVar2 = (ulong)CONCAT11(bVar1, *(byte*)( (long)param_3 + (long)( iVar3 + 4 ) )) ),iVar3 != 2 ) ) && ( uVar2 = uVar2 * 0x100 + ( ulong ) * (byte*)( (long)param_3 + (long)( iVar3 + 3 ) ) ),iVar3 != 3) {
         uVar2 = uVar2 * 0x100 + ( ulong ) * (byte*)( (long)param_3 + 6 );
      }

      param_2 = param_2 + -2;
      param_1[1] = uVar2 >> 4;
      param_1 = param_1 + 2;
   }

   memset(param_1, 0, (long)param_2 << 3);
   return;
}
undefined8 ossl_rsaz_mod_exp_avx512_x2(ulong *param_1, undefined8 param_2, undefined8 *param_3, ulong *param_4, undefined8 param_5, undefined8 param_6, ulong *param_7, undefined8 param_8, undefined8 *param_9, ulong *param_10, undefined8 param_11, undefined8 param_12, uint param_13) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   uint num;
   code *pcVar5;
   code *pcVar6;
   uint uVar7;
   int iVar8;
   byte bVar9;
   int iVar10;
   ulong *rp;
   long lVar11;
   void *ptr;
   undefined8 *puVar12;
   ulong uVar13;
   uint uVar14;
   ulong uVar15;
   long lVar16;
   ulong uVar17;
   undefined8 uVar18;
   undefined8 *puVar19;
   long lVar20;
   undefined8 *puVar21;
   long lVar22;
   long lVar23;
   int iVar24;
   long lVar25;
   long lVar26;
   uint uVar27;
   long in_FS_OFFSET;
   byte bVar28;
   int local_110;
   size_t local_a0;
   long local_98;
   long local_78;
   long local_70;
   undefined1 local_58[16];
   long local_40;
   bVar28 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   iVar10 = ossl_rsaz_avx512ifma_eligible();
   if (( ( param_13 & 0xfffffdff ) == 0x400 ) || ( param_13 == 0x800 )) {
      iVar8 = ( (int)param_13 >> 9 ) * 2;
      uVar27 = ( param_13 + 0x35 ) / 0x34;
      iVar24 = (int)( uVar27 * 0x40 + 0xff ) >> 8;
      pcVar5 = *(code**)( ossl_rsaz_amm52_x1 + (long)(int)( ( iVar8 + -3 ) - ( uint )(iVar10 == 0) ) * 8 );
      num = iVar24 * 0xe0 + 0x40;
      rp = (ulong*)CRYPTO_malloc(num, "crypto/bn/rsaz_exp_x2.c", 0xef);
      if (rp != (ulong*)0x0) {
         iVar24 = iVar24 << 2;
         lVar16 = ( (ulong)rp & 0xffffffffffffffc0 ) + 0x40;
         iVar10 = ( uVar27 * 0x34 - param_13 ) * 4;
         lVar22 = (long)iVar24 * 8;
         uVar27 = ( param_13 + 0x35 ) / 0x34;
         lVar1 = lVar16 + lVar22 + lVar22;
         lVar23 = lVar1 + lVar22;
         lVar2 = lVar23 + lVar22;
         lVar3 = lVar2 + lVar22;
         puVar4 = (undefined8*)( lVar3 + lVar22 );
         to_words52(lVar16, iVar24, param_2, param_13);
         to_words52(lVar16 + lVar22, iVar24, param_8, param_13);
         to_words52(lVar1, iVar24, param_4, param_13);
         to_words52(lVar23, iVar24, param_10, param_13);
         to_words52(lVar2, iVar24, param_5, param_13);
         to_words52(lVar3, iVar24, param_11, param_13);
         *puVar4 = 0;
         puVar4[(long)(int)uVar27 + -1] = 0;
         puVar21 = puVar4 + 1;
         for (uVar13 = ( ulong )(uVar27 * 8 - 8 >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar21 = 0;
            puVar21 = puVar21 + (ulong)bVar28 * -2 + 1;
         }

         iVar10 = ( iVar10 / 0x34 ) * 0xc + iVar10;
         iVar24 = iVar10 + 0x3f;
         if (-1 < iVar10) {
            iVar24 = iVar10;
         }

         puVar4[iVar24 >> 6] = puVar4[iVar24 >> 6] | 1L << ( (byte)iVar10 & 0x3f );
         ( *pcVar5 )(lVar2, lVar2, lVar2, lVar1, param_6);
         ( *pcVar5 )(lVar2, lVar2, puVar4, lVar1, param_6);
         ( *pcVar5 )(lVar3, lVar3, lVar3, lVar23, param_12);
         ( *pcVar5 )(lVar3, lVar3, puVar4, lVar23, param_12);
         local_58._8_8_ = param_12;
         local_58._0_8_ = param_6;
         iVar10 = ossl_rsaz_avx512ifma_eligible();
         if (param_13 == 0x600) {
            local_70 = 0x188;
            lVar23 = 0xc0;
            lVar22 = 0x100;
            lVar25 = 0x4000;
            local_110 = 0x19;
            iVar24 = 0x20;
            local_78 = 200;
            local_98 = 0x200;
            local_a0 = 0x45d0;
            LAB_00100787:lVar11 = (long)(int)( ( iVar8 + -3 ) - ( uint )(iVar10 == 0) );
            pcVar5 = *(code**)( ossl_rsaz_amm52_x2 + lVar11 * 8 );
            pcVar6 = *(code**)( ossl_extract_multiplier_win5 + lVar11 * 8 );
            ptr = (void*)CRYPTO_zalloc(local_a0, "crypto/bn/rsaz_exp_x2.c", 0x1a0);
            if (ptr == (void*)0x0) goto LAB_00100b40;
            lVar11 = ( (ulong)ptr & 0xffffffffffffffc0 ) + 0x40;
            puVar4 = (undefined8*)( lVar11 + local_98 );
            lVar20 = local_98 + (long)puVar4;
            *puVar4 = 1;
            puVar21 = (undefined8*)( lVar20 + lVar25 );
            *(undefined8*)( (long)puVar4 + lVar22 ) = 1;
            ( *pcVar5 )(lVar20, puVar4, lVar2, lVar1, local_58);
            ( *pcVar5 )(lVar20 + local_98, lVar16, lVar2, lVar1, local_58);
            lVar26 = (long)( iVar24 * 2 ) * 8;
            iVar10 = 0xf;
            lVar16 = lVar20 + (long)( iVar24 * 4 ) * 8;
            lVar25 = lVar16 + (long)iVar24 * -0x10;
            do {
               ( *pcVar5 )(lVar16, lVar25, lVar25, lVar1, local_58);
               ( *pcVar5 )(lVar26 + lVar16, lVar16, lVar20 + local_98, lVar1, local_58);
               iVar10 = iVar10 + -1;
               lVar16 = lVar26 + lVar16 + lVar26;
               lVar25 = lVar25 + lVar26;
            }
 while ( iVar10 != 0 );
            *puVar21 = *param_3;
            *(undefined8*)( (long)puVar21 + lVar23 + -8 ) = *(undefined8*)( (long)param_3 + lVar23 + -8 );
            puVar19 = param_3 + 1;
            puVar12 = puVar21 + 1;
            for (uVar13 = ( ulong )((int)lVar23 - 8U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
               *puVar12 = *puVar19;
               puVar19 = puVar19 + (ulong)bVar28 * -2 + 1;
               puVar12 = puVar12 + (ulong)bVar28 * -2 + 1;
            }

            *(undefined8*)( (long)puVar21 + lVar23 ) = 0;
            puVar12 = (undefined8*)( local_78 + (long)puVar21 );
            *puVar12 = *param_9;
            *(undefined8*)( lVar23 + -8 + (long)puVar12 ) = *(undefined8*)( (long)param_9 + lVar23 + -8 );
            puVar19 = param_9 + 1;
            puVar12 = puVar12 + 1;
            for (uVar13 = ( ulong )((int)lVar23 - 8U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
               *puVar12 = *puVar19;
               puVar19 = puVar19 + (ulong)bVar28 * -2 + 1;
               puVar12 = puVar12 + (ulong)bVar28 * -2 + 1;
            }

            *(undefined8*)( (long)puVar21 + local_70 ) = 0;
            iVar10 = ( (int)param_13 / 5 ) * 5;
            uVar27 = iVar10 - 5;
            ( *pcVar6 )(lVar11, lVar20, (ulong)puVar21[iVar10 >> 6] >> ( (byte)iVar10 & 0x3f ), (ulong)puVar21[( iVar10 >> 6 ) + local_110] >> ( (byte)iVar10 & 0x3f ));
            do {
               while (true) {
                  iVar10 = (int)uVar27 >> 6;
                  uVar14 = ( uint )((ulong)puVar21[iVar10] >> ( (byte)uVar27 & 0x3f ));
                  uVar7 = ( uint )((ulong)puVar21[iVar10 + local_110] >> ( (byte)uVar27 & 0x3f ));
                  if (( uVar27 & 0x3f ) < 0x3c) break;
                  bVar9 = -(char)(uVar27 & 0x3f);
                  ( *pcVar6 )(puVar4, lVar20, ( ( uint )(puVar21[(long)iVar10 + 1] << ( bVar9 & 0x3f )) ^ uVar14 ) & 0x1f, ( ( uint )(puVar21[iVar10 + 1 + local_110] << ( bVar9 & 0x3f )) ^ uVar7 ) & 0x1f);
                  for (int i = 0; i < 5; i++) {
                     ( *pcVar5 )(lVar11, lVar11, lVar11, lVar1, local_58);
                  }

                  ( *pcVar5 )(lVar11, lVar11, puVar4, lVar1, local_58);
                  uVar27 = uVar27 - 5;
               }
;
               ( *pcVar6 )(puVar4, lVar20, uVar14 & 0x1f, uVar7 & 0x1f);
               for (int i = 0; i < 5; i++) {
                  ( *pcVar5 )(lVar11, lVar11, lVar11, lVar1, local_58);
               }

               ( *pcVar5 )(lVar11, lVar11, puVar4, lVar1, local_58);
               uVar27 = uVar27 - 5;
            }
 while ( -1 < (int)uVar27 );
            *(undefined8*)( (long)puVar4 + local_98 + -8 ) = 0;
            puVar21 = puVar4 + 1;
            for (uVar13 = ( ulong )((int)local_98 - 8U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
               *puVar21 = 0;
               puVar21 = puVar21 + (ulong)bVar28 * -2 + 1;
            }

            *puVar4 = 1;
            *(undefined8*)( (long)puVar4 + lVar22 ) = 1;
            ( *pcVar5 )(lVar2, lVar11, puVar4, lVar1, local_58);
            OPENSSL_cleanse(ptr, local_a0);
            uVar17 = (ulong)(long)(int)param_13 >> 6;
            CRYPTO_free(ptr);
            from_words52(param_1, param_13, lVar2);
            from_words52(param_7, param_13, lVar3);
            uVar13 = bn_sub_words(rp, param_1, param_4, (int)uVar17);
            uVar15 = 0;
            do {
               param_1[uVar15] = param_1[uVar15] & -uVar13 | rp[uVar15] & uVar13 - 1;
               uVar15 = uVar15 + 1;
            }
 while ( uVar17 != uVar15 );
            uVar13 = bn_sub_words(rp, param_7, param_10, (int)uVar17);
            uVar15 = 0;
            do {
               param_7[uVar15] = param_7[uVar15] & -uVar13 | rp[uVar15] & uVar13 - 1;
               uVar15 = uVar15 + 1;
            }
 while ( uVar17 != uVar15 );
            uVar18 = 1;
         }
 else {
            if (param_13 == 0x800) {
               local_70 = 0x208;
               lVar23 = 0x100;
               lVar22 = 0x140;
               lVar25 = 0x5000;
               local_110 = 0x21;
               iVar24 = 0x28;
               local_78 = 0x108;
               local_98 = 0x280;
               local_a0 = 0x5750;
               goto LAB_00100787;
            }

            if (param_13 == 0x400) {
               local_70 = 0x108;
               lVar23 = 0x80;
               lVar22 = 0xa0;
               lVar25 = 0x2800;
               local_110 = 0x11;
               iVar24 = 0x14;
               local_78 = 0x88;
               local_98 = 0x140;
               local_a0 = 0x2bd0;
               goto LAB_00100787;
            }

            LAB_00100b40:uVar18 = 0;
         }

         OPENSSL_cleanse(rp, (ulong)num);
         CRYPTO_free(rp);
         goto LAB_0010046f;
      }

   }

   uVar18 = 0;
   LAB_0010046f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

