void ZSTD_safecopyLiterals(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4) {
   undefined8 uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   puVar6 = param_2;
   puVar7 = param_1;
   if (param_2 <= param_4) {
      uVar1 = param_2[1];
      puVar7 = (undefined8*)( (long)param_1 + ( (long)param_4 - (long)param_2 ) );
      *param_1 = *param_2;
      param_1[1] = uVar1;
      puVar6 = param_4;
      if (0x10 < (long)param_4 - (long)param_2) {
         puVar2 = param_1 + 2;
         puVar5 = param_2 + 2;
         do {
            uVar1 = puVar5[1];
            puVar3 = puVar2 + 4;
            *puVar2 = *puVar5;
            puVar2[1] = uVar1;
            uVar1 = puVar5[3];
            puVar2[2] = puVar5[2];
            puVar2[3] = uVar1;
            puVar2 = puVar3;
            puVar5 = puVar5 + 4;
         }
 while ( puVar3 < puVar7 );
      }

   }

   if (puVar6 < param_3) {
      lVar4 = 0;
      do {
         *(undefined1*)( (long)puVar7 + lVar4 ) = *(undefined1*)( (long)puVar6 + lVar4 );
         lVar4 = lVar4 + 1;
      }
 while ( lVar4 != (long)param_3 - (long)puVar6 );
   }

   return;
}
void ZSTD_overrideCParams(int *param_1, int *param_2) {
   if (*param_2 != 0) {
      *param_1 = *param_2;
   }

   if (param_2[2] != 0) {
      param_1[2] = param_2[2];
   }

   if (param_2[1] != 0) {
      param_1[1] = param_2[1];
   }

   if (param_2[3] != 0) {
      param_1[3] = param_2[3];
   }

   if (param_2[4] != 0) {
      param_1[4] = param_2[4];
   }

   if (param_2[5] != 0) {
      param_1[5] = param_2[5];
   }

   if (param_2[6] != 0) {
      param_1[6] = param_2[6];
   }

   return;
}
long ZSTD_sizeof_matchState(uint *param_1, int param_2, int param_3, uint param_4) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   byte bVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   uVar2 = param_1[6];
   uVar1 = uVar2 - 3;
   bVar4 = (byte)param_1[2];
   lVar7 = 1L << ( bVar4 & 0x3f );
   if (( param_3 == 0 ) || ( ( param_4 & 1 ) != 0 )) {
      if (uVar2 == 1) {
         if (param_4 == 0) {
            lVar3 = 4L << ( bVar4 & 0x3f );
            goto LAB_00100182;
         }

         if (param_1[4] == 3) {
            lVar3 = 0;
            LAB_001001a9:uVar5 = *param_1;
            if (uVar5 != 0) goto LAB_001001b3;
            goto LAB_001000fb;
         }

         lVar3 = 4L << ( bVar4 & 0x3f );
         goto LAB_00100172;
      }

      if (( param_2 == 1 ) && ( uVar1 < 3 )) {
         lVar3 = 4L << ( bVar4 & 0x3f );
         if (( param_4 == 0 ) || ( param_1[4] != 3 )) goto LAB_001001d0;
         uVar5 = *param_1;
         if (uVar5 != 0) {
            lVar3 = 0;
            LAB_001001b3:bVar4 = (byte)uVar5;
            if (0x11 < uVar5) {
               bVar4 = 0x11;
            }

            lVar3 = lVar3 + ( 1L << ( bVar4 & 0x3f ) );
            goto LAB_001000fb;
         }

      }
 else {
         lVar3 = 1L << ( (byte)param_1[1] & 0x3f );
         if (param_4 != 0) {
            if (param_1[4] == 3) goto LAB_001001a9;
            goto LAB_001000fb;
         }

         lVar3 = ( lVar3 + lVar7 ) * 4;
         if (2 < uVar1) goto LAB_00100182;
      }

   }
 else {
      lVar3 = 1L << ( (byte)param_1[1] & 0x3f );
      LAB_001000fb:lVar3 = ( lVar3 + lVar7 ) * 4;
      if (2 < uVar1) {
         LAB_00100172:if (( uVar2 < 7 ) || ( lVar6 = 0x24780(param_4 & 1) == 0 )) {
            LAB_00100182:return lVar3 + 0x80;
         }

         goto LAB_00100116;
      }

   }

   lVar6 = 0x80;
   if (param_2 == 1) {
      LAB_001001d0:return lVar3 + ( lVar7 + 0x3fU & 0xffffffffffffffc0 ) + 0x80;
   }

   LAB_00100116:return lVar3 + lVar6;
}
long ZSTD_writeFrameHeader(char *param_1, ulong param_2, int *param_3, ulong param_4, uint param_5) {
   int iVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   byte bVar6;
   long lVar7;
   char cVar8;
   ulong uVar9;
   char cVar10;
   bool bVar11;
   if (param_3[10] == 0) {
      cVar8 = ( param_5 != 0 ) + ( 0xff < param_5 ) + ( 0xffff < param_5 );
   }
 else {
      cVar8 = '\0';
   }

   iVar1 = param_3[9];
   iVar2 = param_3[1];
   if (param_3[8] == 0) {
      cVar10 = '\0';
      bVar6 = 0;
      cVar5 = '\0';
      bVar11 = false;
   }
 else {
      uVar9 = ( ulong )(uint)(1 << ( (byte)iVar2 & 0x1f ));
      bVar6 = ~-(uVar9 < param_4) & 0x20;
      bVar11 = param_4 <= uVar9;
      cVar5 = ( 0xff < param_4 ) + ( 0x100ff < param_4 ) + ( 0xfffffffe < param_4 );
      cVar10 = cVar5 * '@';
   }

   lVar7 = -0x46;
   if (0x11 < param_2) {
      if (*param_3 == 0) {
         param_1[0] = '(';
         param_1[1] = -0x4b;
         param_1[2] = '/';
         param_1[3] = -3;
         pcVar3 = param_1 + 4;
         lVar7 = 5;
         lVar4 = 4;
      }
 else {
         lVar7 = 1;
         lVar4 = 0;
         pcVar3 = param_1;
      }

      *pcVar3 = cVar8 + ( 0 < iVar1 ) * '\x04' + bVar6 + cVar10;
      if (!bVar11) {
         param_1[lVar7] = (byte)iVar2 * '\b' + -0x50;
         lVar7 = lVar4 + 2;
      }

      if (cVar8 == '\x02') {
         *(short*)( param_1 + lVar7 ) = (short)param_5;
         lVar7 = lVar7 + 2;
      }
 else if (cVar8 == '\x03') {
         *(uint*)( param_1 + lVar7 ) = param_5;
         lVar7 = lVar7 + 4;
      }
 else if (cVar8 == '\x01') {
         param_1[lVar7] = (char)param_5;
         lVar7 = lVar7 + 1;
      }

      if (cVar5 == '\x02') {
         *(int*)( param_1 + lVar7 ) = (int)param_4;
         return lVar7 + 4;
      }

      if (cVar5 == '\x03') {
         *(ulong*)( param_1 + lVar7 ) = param_4;
         return lVar7 + 8;
      }

      if (cVar5 == '\x01') {
         *(short*)( param_1 + lVar7 ) = (short)param_4 + -0x100;
         return lVar7 + 2;
      }

      if (bVar11) {
         param_1[lVar7] = (char)param_4;
         lVar7 = lVar7 + 1;
      }

   }

   return lVar7;
}
undefined8 *ZSTD_adjustCParams_internal(undefined8 *param_1, ulong param_2, ulong param_3, int param_4, uint param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10) {
   bool bVar1;
   int iVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   if (param_4 == 1) {
      bVar1 = true;
      param_3 = 0;
      LAB_0010044c:if (( param_2 < 0x40000001 ) && ( bVar1 )) {
         uVar4 = (int)param_2 + (int)param_3;
         uVar5 = 6;
         if (0x3f < uVar4) {
            uVar4 = uVar4 - 1;
            iVar2 = 0x1f;
            if (uVar4 != 0) {
               for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {}
            }

            uVar5 = iVar2 + 1;
         }

         if (uVar5 < (uint)param_7) {
            param_7._0_4_ = uVar5;
         }

      }
 else if (param_2 == 0xffffffffffffffff) goto LAB_00100522;
      if (param_3 != 0) goto LAB_001004d8;
      LAB_00100481:uVar5 = (uint)param_7 + 1;
      uVar4 = (uint)param_7;
   }
 else {
      if (( ( param_4 != 2 ) || ( param_3 == 0 ) ) || ( param_2 != 0xffffffffffffffff )) {
         bVar1 = param_3 < 0x40000001;
         goto LAB_0010044c;
      }

      param_2 = 0x201;
      if (param_3 < 0x40000001) {
         uVar5 = (int)param_3 + 0x200;
         iVar2 = 0x1f;
         if (uVar5 != 0) {
            for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {}
         }

         if (iVar2 + 1U < (uint)param_7) {
            param_7._0_4_ = iVar2 + 1U;
         }

      }

      LAB_001004d8:uVar3 = 1L << ( (byte)(uint)param_7 & 0x3f );
      if (param_2 + param_3 <= uVar3) goto LAB_00100481;
      uVar3 = uVar3 + param_3;
      if (uVar3 < 0x80000000) {
         uVar4 = (int)uVar3 - 1;
         uVar5 = 0x1f;
         if (uVar4 != 0) {
            for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {}
         }

         uVar4 = 0x20 - ( uVar5 ^ 0x1f );
         uVar5 = 0x21 - ( uVar5 ^ 0x1f );
      }
 else {
         uVar5 = 0x20;
         uVar4 = 0x1f;
      }

   }

   if (uVar5 < (uint)param_8) {
      param_8._0_4_ = uVar5;
   }

   if (uVar4 < param_7._4_4_ - ( 5 < param_10 )) {
      param_7._4_4_ = ( 5 < param_10 ) + uVar4;
   }

   LAB_00100522:uVar5 = 10;
   if (9 < (uint)param_7) {
      uVar5 = (uint)param_7;
   }

   if (( param_4 == 2 ) && ( param_10 - 1 < 2 )) {
      if (0x18 < (uint)param_8) {
         param_8._0_4_ = 0x18;
      }

      if (0x18 < param_7._4_4_) {
         param_7._4_4_ = 0x18;
      }

   }
 else if (( param_10 - 3 < 3 ) && ( param_5 < 2 )) {
      uVar4 = param_8._4_4_;
      if (6 < param_8._4_4_) {
         uVar4 = 6;
      }

      if (uVar4 < 4) {
         uVar4 = 4;
      }

      if (uVar4 + 0x18 < (uint)param_8) {
         param_8._0_4_ = uVar4 + 0x18;
      }

   }

   *param_1 = CONCAT44(param_7._4_4_, uVar5);
   param_1[1] = CONCAT44(param_8._4_4_, (uint)param_8);
   *(ulong*)( (long)param_1 + 0xc ) = CONCAT44((undefined4)param_9, param_8._4_4_);
   *(ulong*)( (long)param_1 + 0x14 ) = CONCAT44(param_10, param_9._4_4_);
   return param_1;
}
undefined8 ZSTD_getCParams_internal(undefined8 param_1, int param_2, long param_3, long param_4, int param_5) {
   long lVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_38;
   undefined4 uStack_30;
   undefined4 uStack_28;
   undefined4 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 == 1) {
      bVar5 = false;
      lVar2 = 0;
      LAB_00100746:if (( param_3 == -1 ) && ( uVar4 = !bVar5 )) goto LAB_0010065b;
   }
 else {
      bVar5 = param_4 != 0;
      lVar2 = param_4;
      if (( param_3 != -1 ) || ( !bVar5 )) goto LAB_00100746;
      lVar2 = param_4 + 500;
   }

   uVar4 = lVar2 + param_3;
   uVar4 = ( ulong )(( uint )(uVar4 < 0x40001) + ( uint )(uVar4 < 0x20001) + ( uint )(uVar4 < 0x4001));
   LAB_0010065b:if (param_2 == 0) {
      lVar2 = uVar4 * 0x284;
      local_38 = *(undefined8*)( ZSTD_defaultCParameters + lVar2 + 0x54 );
      uStack_20 = ( undefined4 )(( ulong ) * (undefined8*)( ZSTD_defaultCParameters + lVar2 + 0x68 ) >> 0x20);
      uStack_30 = ( undefined4 ) * (undefined8*)( ZSTD_defaultCParameters + lVar2 + 0x5c );
      uStack_28 = ( undefined4 )(( ulong ) * (undefined8*)( ZSTD_defaultCParameters + lVar2 + 0x60 ) >> 0x20);
   }
 else {
      iVar3 = 0x16;
      if (param_2 < 0x17) {
         iVar3 = param_2;
      }

      if (iVar3 < 0) {
         iVar3 = 0;
      }

      lVar2 = uVar4 * 0x284 + (long)iVar3 * 0x1c;
      local_38 = *(undefined8*)( ZSTD_defaultCParameters + lVar2 );
      uStack_20 = ( undefined4 )(( ulong ) * (undefined8*)( ZSTD_defaultCParameters + lVar2 + 0x14 ) >> 0x20);
      uStack_30 = ( undefined4 ) * (undefined8*)( ZSTD_defaultCParameters + lVar2 + 8 );
      uStack_28 = ( undefined4 )(( ulong ) * (undefined8*)( ZSTD_defaultCParameters + lVar2 + 0xc ) >> 0x20);
   }

   ZSTD_adjustCParams_internal(param_1, param_3, param_4, param_5, 0, param_3, local_38, uStack_30, uStack_28, uStack_20);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long ZSTD_estimateCCtxSize_usingCCtxParams_internal(undefined4 *param_1, int *param_2, int param_3, undefined4 param_4, long param_5, long param_6, ulong param_7, uint param_8, ulong param_9) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   uVar7 = 1L << ( ( byte ) * param_1 & 0x3f );
   if (param_7 < uVar7) {
      uVar7 = param_7;
   }

   if (uVar7 == 0) {
      uVar7 = 1;
   }

   if (param_9 == 0) {
      param_9 = 0x20000;
   }

   if (param_9 < uVar7) {
      uVar7 = param_9;
   }

   uVar1 = uVar7 / ( 4 - ( ( uint )(param_1[4] == 3) | param_8 & 1 ) );
   lVar2 = ZSTD_sizeof_matchState(param_1, param_4, 0, 1);
   lVar3 = ZSTD_ldm_getTableSize();
   lVar4 = ZSTD_ldm_getMaxNbSeq(uVar7);
   uVar5 = 0;
   if (*param_2 == 1) {
      uVar5 = lVar4 * 0xc + 0x3fU & 0xffffffffffffffc0;
   }

   uVar6 = 0;
   if (param_8 != 0) {
      uVar6 = ( uVar7 / 3 + ( uVar7 >> 10 ) ) * 0x10 + 0x5f & 0xffffffffffffffc0;
   }

   return param_5 + 0x4ef8 + param_6 + lVar2 + lVar3 + uVar7 + uVar1 * 3 + ( uVar1 * 8 + 0x3f & 0xffffffffffffffc0 ) + uVar5 + ( ulong )(-(uint)(param_3 != 0) & 0x1480) + uVar6;
}
undefined8 ZSTD_isRLE(ulong *param_1, ulong param_2) {
   ulong *puVar1;
   ulong *puVar2;
   ulong *puVar3;
   uint uVar4;
   long lVar5;
   ulong *puVar6;
   ulong uVar7;
   byte *pbVar8;
   ulong uVar9;
   ulong *puVar10;
   uVar9 = ( ulong )((uint)param_2 & 0x1f);
   if (param_2 == 1) {
      return 1;
   }

   if (uVar9 == 0) goto LAB_001008f9;
   puVar3 = (ulong*)( (long)param_1 + uVar9 );
   puVar1 = (ulong*)( (long)param_1 + 1 );
   puVar2 = (ulong*)( (long)puVar3 - 7 );
   puVar6 = puVar1;
   puVar10 = param_1;
   if (puVar1 < puVar2) {
      if (*param_1 == *(ulong*)( (long)param_1 + 1 )) {
         puVar6 = (ulong*)( (long)param_1 + 9 );
         puVar10 = param_1 + 1;
         if (puVar6 < puVar2) {
            LAB_001009f2:puVar10 = puVar6;
            if (*(ulong*)( (long)puVar10 - 1 ) == *puVar10) goto LAB_00100a13;
            uVar4 = 0;
            for (uVar7 = *(ulong*)( (long)puVar10 - 1 ) ^ *puVar10; ( uVar7 & 1 ) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
               uVar4 = uVar4 + 1;
            }

            pbVar8 = (byte*)( (long)puVar10 + ( ( ulong )(uVar4 >> 3) - (long)puVar1 ) );
            goto LAB_001009cf;
         }

         goto LAB_00100957;
      }

      uVar4 = 0;
      for (uVar7 = *param_1 ^ *(ulong*)( (long)param_1 + 1 ); ( uVar7 & 1 ) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
         uVar4 = uVar4 + 1;
      }

      pbVar8 = (byte*)( ulong )(uVar4 >> 3);
   }
 else {
      LAB_00100957:if (( puVar6 < (ulong*)( (long)puVar3 - 3U ) ) && ( (int)*puVar10 == (int)*puVar6 )) {
         puVar6 = (ulong*)( (long)puVar6 + 4 );
         puVar10 = (ulong*)( (long)puVar10 + 4 );
      }

      if (( puVar6 < (ulong*)( (long)puVar3 - 1U ) ) && ( (short)*puVar10 == (short)*puVar6 )) {
         puVar6 = (ulong*)( (long)puVar6 + 2 );
         puVar10 = (ulong*)( (long)puVar10 + 2 );
      }

      if (puVar6 < puVar3) {
         puVar6 = (ulong*)( (long)puVar6 + ( ulong )(( byte ) * puVar10 == ( byte ) * puVar6) );
      }

      pbVar8 = (byte*)( (long)puVar6 - (long)puVar1 );
   }

   LAB_001009cf:if ((byte*)( uVar9 - 1 ) != pbVar8) {
      return 0;
   }

   LAB_001008f9:if (0x1f < param_2) {
      pbVar8 = (byte*)( (long)param_1 + uVar9 );
      do {
         lVar5 = 0;
         do {
            if (( ulong )(byte) * param_1 * 0x101010101010101 - *(long*)( pbVar8 + lVar5 ) != 0) {
               return 0;
            }

            lVar5 = lVar5 + 8;
         }
 while ( lVar5 != 0x20 );
         uVar9 = uVar9 + 0x20;
         pbVar8 = pbVar8 + 0x20;
      }
 while ( param_2 != uVar9 );
   }

   return 1;
   LAB_00100a13:puVar6 = puVar10 + 1;
   if (puVar2 <= puVar6) goto code_r0x00100a1c;
   goto LAB_001009f2;
   code_r0x00100a1c:puVar10 = (ulong*)( (long)puVar10 + 7 );
   goto LAB_00100957;
}
undefined8 ZSTD_copySequencesToSeqStoreExplicitBlockDelim(long param_1, uint *param_2, long param_3, ulong param_4, undefined8 *param_5, long param_6, int param_7) {
   uint uVar1;
   undefined8 *puVar2;
   uint uVar3;
   undefined4 uVar4;
   undefined8 *puVar5;
   long lVar6;
   undefined8 uVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   ulong uVar11;
   undefined4 *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   uint uVar15;
   int *piVar16;
   ulong uVar18;
   undefined8 uVar19;
   uint uVar20;
   uint uVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   ulong local_80;
   undefined8 local_50;
   int local_48;
   long local_40;
   ulong uVar17;
   puVar2 = (undefined8*)( (long)param_5 + param_6 );
   uVar3 = *param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xe70 ) == 0) {
      local_80 = 0;
      if (*(long*)( param_1 + 0xe78 ) != 0) {
         local_80 = ( ulong ) * (uint*)( param_1 + 0xe80 );
      }

   }
 else {
      local_80 = ( ulong ) * (uint*)( *(long*)( param_1 + 0xe70 ) + 8 );
   }

   uVar17 = (ulong)uVar3;
   uVar19 = 1;
   local_50 = *(undefined8*)( *(long*)( param_1 + 0xc80 ) + 0x15f0 );
   local_48 = *(int*)( *(long*)( param_1 + 0xc80 ) + 0x15f8 );
   if (uVar3 < param_4) {
      do {
         uVar15 = (uint)uVar17;
         piVar16 = (int*)( uVar17 * 0x10 + param_3 );
         uVar8 = piVar16[2];
         uVar17 = (ulong)uVar8;
         iVar9 = *piVar16;
         if (uVar8 == 0 && iVar9 == 0) goto LAB_00100cc5;
         uVar20 = piVar16[1];
         uVar1 = iVar9 + 3;
         uVar22 = (ulong)uVar1;
         if (param_7 != 2) {
            uVar21 = ( uint )(uVar20 == 0);
            if (uVar20 == 0) {
               iVar10 = local_50._4_4_;
               if (local_50._4_4_ == iVar9) {
                  LAB_00100eb0:uVar22 = ( ulong )(2 - uVar21);
                  LAB_00100ebb:local_50._4_4_ = local_48;
               }
 else if (local_48 == iVar9) {
                  LAB_00100e48:uVar22 = ( ulong )(3 - uVar21);
                  iVar10 = local_48;
               }
 else {
                  if ((int)local_50 + -1 != iVar9) {
                     if (uVar1 < 4) {
                        if (uVar1 != 0) {
                           uVar11 = uVar22;
                           iVar9 = (int)local_50 + -1;
                           if (uVar1 != 3) goto LAB_00100ed3;
                           goto LAB_00100b3b;
                        }

                     }
 else {
                        LAB_00100b80:local_48 = local_50._4_4_;
                        local_50 = CONCAT44((int)local_50, iVar9);
                     }

                     goto LAB_00100b96;
                  }

                  LAB_00100b3b:uVar22 = 3;
                  iVar10 = iVar9;
               }

               LAB_00100e57:local_48 = local_50._4_4_;
               local_50 = CONCAT44((int)local_50, iVar10);
            }
 else {
               if ((int)local_50 != iVar9) {
                  iVar10 = iVar9;
                  if (local_50._4_4_ == iVar9) goto LAB_00100eb0;
                  if (local_48 == iVar9) goto LAB_00100e48;
                  if (3 < uVar1) goto LAB_00100b80;
                  uVar11 = ( ulong )(iVar9 + 2U);
                  if (iVar9 + 2U == 0) goto LAB_00100b96;
                  LAB_00100ed3:iVar10 = *(int*)( (long)&local_50 + uVar11 * 4 );
                  if ((int)uVar11 != 1) goto LAB_00100e57;
                  goto LAB_00100ebb;
               }

               uVar22 = 1;
            }

         }

         LAB_00100b96:if (*(int*)( param_1 + 0x170 ) != 0) {
            uVar4 = *(undefined4*)( param_1 + 0xec );
            uVar18 = ( ulong )(uVar8 + uVar20) + *(long*)( param_2 + 2 );
            lVar6 = *(long*)( param_1 + 0x1a8 );
            *(ulong*)( param_2 + 2 ) = uVar18;
            uVar11 = ( ulong )(uint)((int)uVar19 << ( (byte)uVar4 & 0x1f ));
            if (uVar18 <= uVar11) {
               uVar11 = local_80 + uVar18;
            }

            if (( uVar11 + 3 < uVar22 ) || ( (ulong)uVar8 < ( (long)( ( ulong )(*(int*)( param_1 + 0xfc ) == 3 || lVar6 != 0) << 0x3f ) >> 0x3f ) + 4U )) goto LAB_00100dc8;
         }

         if (*(ulong*)( param_1 + 0x3f0 ) <= ( ulong )(uVar15 - *param_2)) goto LAB_00100dc8;
         uVar11 = (ulong)uVar20;
         puVar5 = *(undefined8**)( param_1 + 0x3d0 );
         if (puVar2 + -4 < (undefined8*)( (long)param_5 + uVar11 )) {
            ZSTD_safecopyLiterals();
            LAB_00100d83:*(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + uVar11;
            puVar12 = *(undefined4**)( param_1 + 0x3c0 );
            if (0xffff < uVar11) {
               *(undefined4*)( param_1 + 0x400 ) = 1;
               *(int*)( param_1 + 0x404 ) = (int)( (long)puVar12 - *(long*)( param_1 + 0x3b8 ) >> 3 );
            }

         }
 else {
            uVar7 = param_5[1];
            *puVar5 = *param_5;
            puVar5[1] = uVar7;
            if (0x10 < uVar11) {
               lVar6 = *(long*)( param_1 + 0x3d0 );
               uVar7 = param_5[3];
               *(undefined8*)( lVar6 + 0x10 ) = param_5[2];
               *(undefined8*)( lVar6 + 0x18 ) = uVar7;
               if (0x20 < uVar20) {
                  puVar13 = (undefined8*)( lVar6 + 0x20 );
                  puVar5 = param_5;
                  do {
                     uVar7 = puVar5[5];
                     puVar14 = puVar13 + 4;
                     *puVar13 = puVar5[4];
                     puVar13[1] = uVar7;
                     uVar7 = puVar5[7];
                     puVar13[2] = puVar5[6];
                     puVar13[3] = uVar7;
                     puVar13 = puVar14;
                     puVar5 = puVar5 + 4;
                  }
 while ( puVar14 < (undefined8*)( lVar6 + uVar11 ) );
               }

               goto LAB_00100d83;
            }

            *(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + uVar11;
            puVar12 = *(undefined4**)( param_1 + 0x3c0 );
         }

         *(short*)( puVar12 + 1 ) = (short)uVar20;
         *puVar12 = (int)uVar22;
         if (0xffff < uVar17 - 3) {
            *(undefined4*)( param_1 + 0x400 ) = 2;
            *(int*)( param_1 + 0x404 ) = (int)( (long)puVar12 - *(long*)( param_1 + 0x3b8 ) >> 3 );
         }

         *(short*)( (long)puVar12 + 6 ) = (short)( uVar17 - 3 );
         uVar15 = uVar15 + 1;
         uVar17 = (ulong)uVar15;
         *(undefined4**)( param_1 + 0x3c0 ) = puVar12 + 2;
         param_5 = (undefined8*)( (long)param_5 + ( ulong )(uVar8 + uVar20) );
      }
 while ( uVar17 < param_4 );
      piVar16 = (int*)( uVar17 * 0x10 + param_3 );
      LAB_00100cc5:if (( param_7 == 2 ) && ( uVar3 != uVar15 )) {
         uVar8 = uVar15 - 1;
         uVar4 = *(undefined4*)( param_3 + (ulong)uVar8 * 0x10 );
         if (uVar8 < uVar3 + 2) {
            if (uVar3 + 1 != uVar8) {
               local_48 = local_50._4_4_;
               local_50 = CONCAT44((int)local_50, uVar4);
               goto LAB_00100d1c;
            }

            local_48 = (int)local_50;
         }
 else {
            local_48 = *(int*)( param_3 + ( ulong )(uVar15 - 3) * 0x10 );
         }

         local_50 = CONCAT44(*(undefined4*)( param_3 + ( ulong )(uVar15 - 2) * 0x10 ), uVar4);
      }

   }
 else {
      piVar16 = (int*)( (ulong)uVar3 * 0x10 + param_3 );
      uVar15 = uVar3;
   }

   LAB_00100d1c:lVar6 = *(long*)( param_1 + 0xc88 );
   *(undefined8*)( lVar6 + 0x15f0 ) = local_50;
   *(int*)( lVar6 + 0x15f8 ) = local_48;
   uVar3 = piVar16[1];
   if (uVar3 != 0) {
      memcpy(*(void**)( param_1 + 0x3d0 ), param_5, (ulong)uVar3);
      uVar8 = piVar16[1];
      *(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + (ulong)uVar3;
      param_5 = (undefined8*)( (long)param_5 + (ulong)uVar8 );
      *(ulong*)( param_2 + 2 ) = *(long*)( param_2 + 2 ) + (ulong)uVar8;
   }

   if (param_5 == puVar2) {
      uVar19 = 0;
      *param_2 = uVar15 + 1;
   }
 else {
      LAB_00100dc8:uVar19 = 0xffffffffffffff95;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar19;
}
ulong ZSTD_estimateBlockSize_symbolType_constprop_0(int param_1, byte *param_2, long param_3, undefined4 param_4, undefined8 param_5, long param_6, undefined8 param_7, undefined4 param_8, undefined8 param_9) {
   byte *pbVar1;
   ulong uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = param_4;
   HIST_countFast_wksp(param_9, &local_44, param_2, param_3, param_9, 0x22d8);
   if (param_1 == 0) {
      uVar2 = ZSTD_crossEntropyCost(param_7, param_8, param_9, local_44);
      LAB_00100ffe:if (0xffffffffffffff88 < uVar2) {
         uVar2 = param_3 * 10;
         goto LAB_0010100c;
      }

   }
 else {
      if (param_1 - 2U < 2) {
         uVar2 = ZSTD_fseBitCost(param_5, param_9, local_44);
         goto LAB_00100ffe;
      }

      uVar2 = 0;
   }

   pbVar1 = param_2 + param_3;
   if (param_2 < pbVar1) {
      uVar3 = ( ulong ) * param_2;
      if (param_6 == 0) {
         while (true) {
            param_2 = param_2 + 1;
            uVar2 = uVar2 + uVar3;
            if (pbVar1 == param_2) break;
            uVar3 = ( ulong ) * param_2;
         }
;
         uVar2 = uVar2 >> 3;
         goto LAB_0010100c;
      }

      while (true) {
         param_2 = param_2 + 1;
         uVar2 = uVar2 + *(byte*)( param_6 + uVar3 );
         if (pbVar1 == param_2) break;
         uVar3 = ( ulong ) * param_2;
      }
;
   }

   uVar2 = uVar2 >> 3;
   LAB_0010100c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
undefined8 ZSTD_copyBlockSequences(long param_1, long *param_2, undefined8 *param_3) {
   ushort uVar1;
   ushort uVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   uint uVar7;
   undefined8 uVar8;
   int iVar9;
   int *piVar10;
   int iVar11;
   ulong uVar12;
   uint uVar13;
   int *piVar14;
   int iVar15;
   ulong uVar16;
   uint uVar17;
   long in_FS_OFFSET;
   undefined8 local_50;
   undefined4 local_48;
   long local_40;
   uVar8 = 0xffffffffffffffba;
   lVar4 = *(long*)( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *param_2;
   uVar16 = param_2[1] - lVar5 >> 3;
   piVar14 = *(int**)( param_1 + 8 );
   if (lVar4 != 0) {
      piVar14 = *(int**)( param_1 + 8 ) + lVar4 * 4;
   }

   if (uVar16 + 1 <= ( ulong )(*(long*)( param_1 + 0x18 ) - lVar4)) {
      iVar9 = (int)param_2[3] - (int)param_2[2];
      local_50 = *param_3;
      local_48 = *(undefined4*)( param_3 + 1 );
      if (param_2[1] != lVar5) {
         uVar3 = *(uint*)( (long)param_2 + 0x4c );
         uVar6 = 0;
         iVar15 = 0;
         piVar10 = piVar14;
         do {
            uVar1 = *(ushort*)( lVar5 + 6 + uVar6 * 8 );
            uVar2 = *(ushort*)( lVar5 + 4 + uVar6 * 8 );
            uVar7 = (uint)uVar2;
            piVar10[3] = 0;
            piVar10[1] = (uint)uVar2;
            piVar10[2] = uVar1 + 3;
            if (uVar3 == uVar6) {
               if ((int)param_2[9] != 1) {
                  if ((int)param_2[9] == 2) {
                     piVar10[2] = uVar1 + 0x10003;
                  }

                  goto LAB_0010116f;
               }

               uVar7 = uVar2 + 0x10000;
               piVar10[1] = uVar7;
               uVar13 = *(uint*)( lVar5 + (ulong)uVar3 * 8 );
               uVar17 = ( uint )(uVar2 == 0);
               uVar12 = ( ulong )(uVar13 - 1);
               if (uVar13 - 1 < 3) {
                  piVar10[3] = uVar13;
                  goto LAB_00101293;
               }

               LAB_0010123a:*piVar10 = uVar13 - 3;
               if (uVar13 < 4) {
                  LAB_0010129c:uVar13 = uVar17 + (int)uVar12;
                  if (uVar13 != 0) {
                     uVar12 = (ulong)uVar13;
                     if (uVar13 != 3) goto LAB_001011a3;
                     iVar11 = (int)local_50 + -1;
                     goto LAB_001011b7;
                  }

               }
 else {
                  local_48 = local_50._4_4_;
                  local_50 = CONCAT44((int)local_50, uVar13 - 3);
               }

            }
 else {
               LAB_0010116f:uVar13 = *(uint*)( lVar5 + uVar6 * 8 );
               uVar12 = ( ulong )(uVar13 - 1);
               if (2 < uVar13 - 1) {
                  uVar17 = ( uint )(uVar2 == 0);
                  goto LAB_0010123a;
               }

               piVar10[3] = uVar13;
               if (uVar2 != 0) {
                  uVar17 = 0;
                  LAB_00101293:*piVar10 = *(int*)( (long)&local_50 + uVar12 * 4 );
                  goto LAB_0010129c;
               }

               if (uVar13 == 3) {
                  iVar11 = (int)local_50 + -1;
                  *piVar10 = iVar11;
               }
 else {
                  uVar12 = (ulong)uVar13;
                  *piVar10 = *(int*)( (long)&local_50 + uVar12 * 4 );
                  LAB_001011a3:iVar11 = *(int*)( (long)&local_50 + uVar12 * 4 );
                  if (uVar13 == 1) {
                     local_50._4_4_ = local_48;
                  }

               }

               LAB_001011b7:local_48 = local_50._4_4_;
               local_50 = CONCAT44((int)local_50, iVar11);
            }

            uVar6 = uVar6 + 1;
            piVar10 = piVar10 + 4;
            iVar15 = iVar15 + uVar7;
         }
 while ( uVar6 < uVar16 );
         iVar9 = iVar9 - iVar15;
      }

      uVar8 = 0;
      piVar14 = piVar14 + uVar16 * 4;
      piVar14[1] = iVar9;
      piVar14[2] = 0;
      *piVar14 = 0;
      *(ulong*)( param_1 + 0x10 ) = lVar4 + uVar16 + 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
void ZSTD_CCtxParams_init_internal(undefined8 *param_1, uint *param_2, int param_3) {
   uint uVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   ulong uVar7;
   undefined8 *puVar8;
   *param_1 = 0;
   param_1[0x1a] = 0;
   puVar8 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar7 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xd8U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
   }

   uVar3 = *(undefined8*)param_2;
   uVar4 = *(undefined8*)( param_2 + 2 );
   uVar5 = *(undefined8*)( param_2 + 3 );
   uVar6 = *(undefined8*)( param_2 + 5 );
   param_1[4] = *(undefined8*)( param_2 + 7 );
   uVar1 = param_2[9];
   *(undefined8*)( (long)param_1 + 4 ) = uVar3;
   *(undefined8*)( (long)param_1 + 0xc ) = uVar4;
   *(uint*)( param_1 + 5 ) = uVar1;
   *(int*)( (long)param_1 + 0x2c ) = param_3;
   param_1[2] = uVar5;
   param_1[3] = uVar6;
   *(uint*)( param_1 + 0x12 ) = 2 - ( uint )(0xe < *param_2 && param_2[6] - 3 < 3);
   *(uint*)( (long)param_1 + 0x8c ) = 2 - ( uint )(6 < param_2[6] && 0x10 < *param_2);
   uVar1 = *param_2;
   uVar2 = param_2[6];
   param_1[0x19] = 0x20000;
   *(uint*)( param_1 + 0xc ) = 2 - ( uint )(6 < uVar2 && 0x1a < uVar1);
   *(uint*)( param_1 + 0x1a ) = ( param_3 < 10 ) + 1;
   return;
}
ulong ZSTD_copySequencesToSeqStoreNoBlockDelim(long param_1, uint *param_2, long param_3, ulong param_4, undefined8 *param_5, ulong param_6) {
   uint uVar1;
   undefined8 *puVar2;
   long lVar3;
   uint uVar4;
   undefined8 uVar5;
   bool bVar6;
   ulong uVar7;
   ulong uVar8;
   uint uVar9;
   int *piVar10;
   ulong uVar11;
   uint *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   ulong uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   int iVar19;
   int iVar20;
   uint uVar21;
   uint uVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   bool bVar24;
   undefined8 *local_90;
   long local_80;
   uint local_5c;
   undefined8 local_50;
   int local_48;
   long local_40;
   uVar22 = param_2[1];
   uVar21 = *param_2;
   uVar16 = uVar22 + (int)param_6;
   uVar23 = (ulong)uVar16;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (undefined8*)( param_6 + (long)param_5 );
   if (*(long*)( param_1 + 0xe70 ) == 0) {
      local_80 = 0;
      if (*(long*)( param_1 + 0xe78 ) != 0) {
         local_80 = *(long*)( param_1 + 0xe80 );
      }

   }
 else {
      local_80 = *(long*)( *(long*)( param_1 + 0xe70 ) + 8 );
   }

   local_50 = *(undefined8*)( *(long*)( param_1 + 0xc80 ) + 0x15f0 );
   local_48 = *(int*)( *(long*)( param_1 + 0xc80 ) + 0x15f8 );
   if (( uVar16 == 0 ) || ( uVar8 = param_4 <= uVar8 )) {
      uVar23 = 0;
   }
 else {
      local_5c = 0;
      do {
         piVar10 = (int*)( uVar8 * 0x10 + param_3 );
         uVar16 = piVar10[1];
         uVar18 = piVar10[2];
         uVar8 = (ulong)uVar18;
         iVar19 = *piVar10;
         uVar9 = uVar18 + uVar16;
         uVar17 = (uint)uVar23;
         if (uVar17 < uVar9) {
            if (uVar17 <= uVar16) break;
            uVar4 = uVar16 - uVar22;
            if (uVar16 <= uVar22) {
               uVar4 = 0;
            }

            uVar15 = (ulong)uVar4;
            uVar18 = ( uVar17 - uVar22 ) - uVar4;
            if (( uVar8 <= param_6 ) || ( uVar1 = uVar18 < uVar1 )) {
               uVar23 = ( ulong )(uVar17 - uVar16);
               local_90 = (undefined8*)( (long)local_90 - uVar23 );
               goto LAB_0010168f;
            }

            bVar24 = uVar4 == 0;
            bVar6 = true;
            uVar16 = (uint)bVar24;
            if (uVar1 <= uVar9 - uVar17) goto LAB_001014e4;
            local_5c = ( uVar17 + uVar1 ) - uVar9;
            uVar23 = ( ulong )(uVar9 - uVar1);
            uVar8 = ( ulong )(uVar18 + ( uVar9 - ( uVar17 + uVar1 ) ));
            if (uVar4 == 0) goto LAB_001014f1;
            LAB_0010176f:uVar18 = 1;
            if (iVar19 != (int)local_50) {
               iVar20 = iVar19;
               if (iVar19 == local_50._4_4_) {
                  LAB_001018f8:uVar18 = 2 - uVar16;
                  LAB_00101904:local_50._4_4_ = local_48;
                  goto LAB_0010153d;
               }

               if (iVar19 == local_48) {
                  LAB_00101799:uVar18 = 3 - uVar16;
                  iVar20 = local_48;
                  goto LAB_0010153d;
               }

               LAB_00101511:uVar18 = iVar19 + 3;
               if (uVar18 < 4) {
                  uVar16 = iVar19 + 2 + uVar16;
                  if (uVar16 != 0) {
                     if (uVar16 == 3) goto LAB_00101537;
                     iVar20 = *(int*)( (long)&local_50 + (ulong)uVar16 * 4 );
                     if (uVar16 != 1) goto LAB_0010153d;
                     goto LAB_00101904;
                  }

               }
 else {
                  local_48 = local_50._4_4_;
                  local_50 = CONCAT44((int)local_50, iVar19);
               }

            }

         }
 else {
            if (uVar22 < uVar16) {
               uVar15 = ( ulong )(uVar16 - uVar22);
            }
 else {
               uVar15 = 0;
               uVar18 = uVar9 - uVar22;
            }

            bVar24 = uVar22 >= uVar16;
            bVar6 = false;
            uVar23 = ( ulong )(uVar17 - uVar9);
            uVar22 = 0;
            LAB_001014e4:uVar16 = (uint)bVar24;
            uVar8 = (ulong)uVar18;
            if ((int)uVar15 != 0) goto LAB_0010176f;
            LAB_001014f1:iVar20 = local_50._4_4_;
            if (local_50._4_4_ == iVar19) goto LAB_001018f8;
            if (local_48 == iVar19) goto LAB_00101799;
            if (iVar19 != (int)local_50 + -1) goto LAB_00101511;
            LAB_00101537:uVar18 = 3;
            iVar20 = (int)local_50 + -1;
            LAB_0010153d:local_48 = local_50._4_4_;
            local_50 = CONCAT44((int)local_50, iVar20);
         }

         iVar19 = (int)uVar8;
         if (*(int*)( param_1 + 0x170 ) != 0) {
            uVar11 = ( ulong )((uint)uVar15 + iVar19) + *(long*)( param_2 + 2 );
            lVar3 = *(long*)( param_1 + 0x1a8 );
            uVar7 = ( ulong )(uint)(1 << ( ( byte ) * (undefined4*)( param_1 + 0xec ) & 0x1f ));
            *(ulong*)( param_2 + 2 ) = uVar11;
            if (uVar11 <= uVar7) {
               uVar7 = uVar11 + local_80;
            }

            if (( (ulong)uVar18 <= uVar7 + 3 ) && ( ( (long)( ( ulong )(*(int*)( param_1 + 0xfc ) == 3 || lVar3 != 0) << 0x3f ) >> 0x3f ) + 4U <= uVar8 )) goto LAB_001015c6;
            LAB_00101870:uVar23 = 0xffffffffffffff95;
            goto LAB_00101877;
         }

         LAB_001015c6:if (*(ulong*)( param_1 + 0x3f0 ) <= ( ulong )(uVar21 - *param_2)) goto LAB_00101870;
         puVar2 = *(undefined8**)( param_1 + 0x3d0 );
         uVar7 = uVar15;
         if (local_90 + -4 < (undefined8*)( (long)param_5 + uVar15 )) {
            ZSTD_safecopyLiterals(puVar2, param_5);
            LAB_001017ec:*(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + uVar15;
            puVar12 = *(uint**)( param_1 + 0x3c0 );
            if (0xffff < uVar15) {
               *(undefined4*)( param_1 + 0x400 ) = 1;
               *(int*)( param_1 + 0x404 ) = (int)( (long)puVar12 - *(long*)( param_1 + 0x3b8 ) >> 3 );
            }

         }
 else {
            uVar5 = param_5[1];
            *puVar2 = *param_5;
            puVar2[1] = uVar5;
            if (0x10 < uVar15) {
               lVar3 = *(long*)( param_1 + 0x3d0 );
               uVar5 = param_5[3];
               *(undefined8*)( lVar3 + 0x10 ) = param_5[2];
               *(undefined8*)( lVar3 + 0x18 ) = uVar5;
               if (0x20 < (uint)uVar15) {
                  puVar13 = (undefined8*)( lVar3 + 0x20 );
                  puVar2 = param_5;
                  do {
                     uVar5 = puVar2[5];
                     puVar14 = puVar13 + 4;
                     *puVar13 = puVar2[4];
                     puVar13[1] = uVar5;
                     uVar5 = puVar2[7];
                     puVar13[2] = puVar2[6];
                     puVar13[3] = uVar5;
                     puVar13 = puVar14;
                     puVar2 = puVar2 + 4;
                  }
 while ( puVar14 < (undefined8*)( lVar3 + uVar15 ) );
               }

               goto LAB_001017ec;
            }

            *(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + uVar15;
            puVar12 = *(uint**)( param_1 + 0x3c0 );
         }

         uVar17 = (uint)uVar23;
         *(short*)( puVar12 + 1 ) = (short)uVar7;
         *puVar12 = uVar18;
         if (0xffff < uVar8 - 3) {
            *(undefined4*)( param_1 + 0x400 ) = 2;
            *(int*)( param_1 + 0x404 ) = (int)( (long)puVar12 - *(long*)( param_1 + 0x3b8 ) >> 3 );
         }

         *(short*)( (long)puVar12 + 6 ) = (short)( uVar8 - 3 );
         param_5 = (undefined8*)( (long)param_5 + ( ulong )(uint)((int)uVar7 + iVar19) );
         *(uint**)( param_1 + 0x3c0 ) = puVar12 + 2;
         if (bVar6) {
            if (uVar17 == 0) {
               LAB_00101971:uVar23 = (ulong)local_5c;
               uVar16 = 0;
               local_90 = (undefined8*)( (long)local_90 - uVar23 );
               goto LAB_0010168f;
            }

            break;
         }

         uVar21 = uVar21 + 1;
         if (uVar17 == 0) goto LAB_00101971;
         uVar8 = (ulong)uVar21;
      }
 while ( uVar8 < param_4 );
      uVar16 = uVar17;
      uVar23 = (ulong)local_5c;
      local_90 = (undefined8*)( (long)local_90 - uVar23 );
   }

   LAB_0010168f:lVar3 = *(long*)( param_1 + 0xc88 );
   *param_2 = uVar21;
   param_2[1] = uVar16;
   *(undefined8*)( lVar3 + 0x15f0 ) = local_50;
   *(int*)( lVar3 + 0x15f8 ) = local_48;
   if (param_5 != local_90) {
      uVar8 = ( ulong )(uint)((int)local_90 - (int)param_5);
      memcpy(*(void**)( param_1 + 0x3d0 ), param_5, uVar8);
      *(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + uVar8;
      *(ulong*)( param_2 + 2 ) = *(long*)( param_2 + 2 ) + uVar8;
   }

   LAB_00101877:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar23;
}
undefined8 *ZSTD_makeCCtxParamsFromCParams(undefined8 *param_1, ulong param_2) {
   long lVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   uint uStack0000000000000008;
   undefined4 uStack000000000000000c;
   undefined4 uStack0000000000000010;
   undefined4 uStack0000000000000014;
   undefined4 uStack0000000000000018;
   undefined4 uStack000000000000001c;
   uint in_stack_00000020;
   undefined8 uStack_e8;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined4 uStack_d8;
   undefined4 uStack_d4;
   undefined8 uStack_d0;
   undefined4 local_c8;
   undefined4 uStack_c4;
   undefined4 uStack_c0;
   int iStack_bc;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined4 uStack_60;
   uint uStack_5c;
   int local_58;
   undefined4 uStack_54;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   long lStack_20;
   int local_18;
   undefined4 uStack_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = &uStack_e8;
   for (lVar1 = 0x1b; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   uStack_e8._4_4_ = uStack0000000000000008;
   uStack_e0 = uStack000000000000000c;
   uStack_dc = uStack0000000000000010;
   iStack_bc = 3;
   local_c8 = 1;
   uStack_d8 = uStack0000000000000014;
   uStack_d4 = uStack0000000000000018;
   uStack_d0 = CONCAT44(in_stack_00000020, uStack000000000000001c);
   if (( uStack0000000000000008 < 0x1b ) || ( in_stack_00000020 < 7 )) {
      local_88 = 2;
      local_18 = 0;
      lStack_20 = 0;
      local_58 = 0;
   }
 else {
      local_88 = 1;
      ZSTD_ldm_adjustParameters(&local_88, &stack0x00000008);
      param_2 = (ulong)uStack_5c;
      if (uStack_5c != 0) goto LAB_00101a97;
   }

   uStack_5c = 2 - ( ( uint )(6 < in_stack_00000020) & (uint)CONCAT71(( int7 )(param_2 >> 8), 0x10 < uStack0000000000000008) );
   LAB_00101a97:if (local_58 == 0) {
      local_58 = 2 - ( uint )(0xe < uStack0000000000000008 && in_stack_00000020 - 3 < 3);
   }

   if (lStack_20 == 0) {
      lStack_20 = 0x20000;
   }

   if (local_18 == 0) {
      local_18 = ( iStack_bc < 10 ) + 1;
   }

   *param_1 = CONCAT44(uStack_e8._4_4_, (undefined4)uStack_e8);
   param_1[1] = CONCAT44(uStack_dc, uStack_e0);
   param_1[2] = CONCAT44(uStack_d4, uStack_d8);
   param_1[3] = uStack_d0;
   param_1[4] = CONCAT44(uStack_c4, local_c8);
   param_1[5] = CONCAT44(iStack_bc, uStack_c0);
   param_1[6] = local_b8;
   param_1[7] = uStack_b0;
   param_1[8] = local_a8;
   param_1[9] = uStack_a0;
   param_1[0x1a] = CONCAT44(uStack_14, local_18);
   param_1[10] = local_98;
   param_1[0xb] = uStack_90;
   param_1[0xc] = CONCAT44(uStack_84, local_88);
   param_1[0xd] = uStack_80;
   param_1[0xe] = local_78;
   param_1[0xf] = uStack_70;
   param_1[0x10] = local_68;
   param_1[0x11] = CONCAT44(uStack_5c, uStack_60);
   param_1[0x12] = CONCAT44(uStack_54, local_58);
   param_1[0x13] = uStack_50;
   param_1[0x14] = local_48;
   param_1[0x15] = uStack_40;
   param_1[0x16] = local_38;
   param_1[0x17] = uStack_30;
   param_1[0x18] = local_28;
   param_1[0x19] = lStack_20;
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
void ZSTD_deriveSeqStoreChunk(long *param_1, long *param_2, ulong param_3, ulong param_4) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   lVar5 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = lVar5;
   for (int i = 0; i < 4; i++) {
      lVar5 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = lVar5;
   }

   if (param_3 == 0) {
      lVar5 = *param_2;
      if ((int)param_2[9] == 0) goto LAB_00101c23;
      uVar4 = ( ulong ) * (uint*)( (long)param_2 + 0x4c );
   }
 else {
      lVar2 = *param_1;
      lVar5 = *param_2 + param_3 * 8;
      param_1[1] = lVar5;
      uVar4 = lVar5 - lVar2 >> 3;
      if (lVar5 == lVar2) {
         lVar3 = 0;
      }
 else {
         lVar3 = 0;
         uVar1 = 0;
         do {
            while (( lVar3 = lVar3 + ( ulong ) * (ushort*)( lVar2 + 4 + uVar1 * 8 ) * (uint*)( (long)param_1 + 0x4c ) == uVar1 && ( (int)param_1[9] == 1 ) )) {
               uVar1 = uVar1 + 1;
               lVar3 = lVar3 + 0x10000;
               if (uVar4 <= uVar1) goto LAB_00101d30;
            }
;
            uVar1 = uVar1 + 1;
         }
 while ( uVar1 < uVar4 );
      }

      LAB_00101d30:lVar2 = param_2[9];
      param_1[2] = param_1[2] + lVar3;
      if ((int)lVar2 == 0) goto LAB_00101c23;
      uVar4 = ( ulong ) * (uint*)( (long)param_2 + 0x4c );
      if (uVar4 < param_3) {
         *(undefined4*)( param_1 + 9 ) = 0;
         goto LAB_00101c23;
      }

   }

   if (param_4 < uVar4) {
      *(undefined4*)( param_1 + 9 ) = 0;
   }
 else {
      *(int*)( (long)param_1 + 0x4c ) = *(int*)( (long)param_1 + 0x4c ) - (int)param_3;
   }

   LAB_00101c23:*param_1 = lVar5;
   lVar3 = *param_2;
   lVar2 = lVar3 + param_4 * 8;
   param_1[1] = lVar2;
   if (param_2[1] - lVar3 >> 3 != param_4) {
      uVar4 = lVar2 - lVar5 >> 3;
      if (lVar2 == lVar5) {
         lVar2 = 0;
      }
 else {
         lVar2 = 0;
         uVar1 = 0;
         do {
            while (( lVar2 = lVar2 + ( ulong ) * (ushort*)( lVar5 + 4 + uVar1 * 8 ) * (uint*)( (long)param_1 + 0x4c ) == uVar1 && ( (int)param_1[9] == 1 ) )) {
               uVar1 = uVar1 + 1;
               lVar2 = lVar2 + 0x10000;
               if (uVar4 <= uVar1) goto LAB_00101c90;
            }
;
            uVar1 = uVar1 + 1;
         }
 while ( uVar1 < uVar4 );
      }

      LAB_00101c90:param_1[3] = lVar2 + param_1[2];
   }

   param_1[6] = param_1[6] + param_3;
   param_1[4] = param_3 + param_1[4];
   param_1[5] = param_3 + param_1[5];
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ZSTD_overflowCorrectIfNeeded(long param_1, long param_2, long param_3, int param_4, int param_5) {
   undefined4 uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   int iVar11;
   int iVar12;
   uint *puVar13;
   uint *puVar14;
   uint *puVar15;
   uint *puVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   int iVar21;
   uint uVar22;
   uint uVar23;
   int iVar24;
   int iVar25;
   uint uVar26;
   uint uVar27;
   uint uVar28;
   uint uVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   int iVar33;
   iVar11 = (int)*(long*)( param_1 + 8 );
   if (( uint )(param_5 - iVar11) < 0xe0000001) {
      return;
   }

   uVar17 = *(uint*)( param_3 + 0x1c );
   uVar19 = param_4 - iVar11;
   uVar20 = 1 << ( (char)*(undefined4*)( param_3 + 8 ) - ( 5 < uVar17 ) & 0x1fU );
   uVar23 = uVar20 - 1 & uVar19;
   uVar18 = 2;
   if (1 < uVar20) {
      uVar18 = uVar20;
   }

   uVar22 = 0;
   if (uVar23 < 2) {
      uVar22 = uVar18;
   }

   uVar18 = 1 << ( ( byte ) * (undefined4*)( param_3 + 4 ) & 0x1f );
   if (uVar20 <= uVar18) {
      uVar20 = uVar18;
   }

   iVar21 = uVar20 + uVar23 + uVar22;
   uVar18 = uVar19 - iVar21;
   iVar11 = ( *(uint*)( param_1 + 0x1c ) - uVar19 ) + iVar21;
   uVar20 = uVar18 + 2;
   if (*(uint*)( param_1 + 0x1c ) < uVar20) {
      iVar11 = 2;
   }

   *(ulong*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + (ulong)uVar18;
   *(ulong*)( param_1 + 0x10 ) = *(long*)( param_1 + 0x10 ) + (ulong)uVar18;
   *(int*)( param_1 + 0x1c ) = iVar11;
   uVar2 = *(ulong*)( param_2 + 0x10 );
   iVar11 = ( *(uint*)( param_1 + 0x18 ) - uVar19 ) + iVar21;
   if (*(uint*)( param_1 + 0x18 ) < uVar20) {
      iVar11 = 2;
   }

   uVar1 = *(undefined4*)( param_3 + 0xc );
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   iVar24 = 1 << ( (byte)uVar1 & 0x1f );
   *(int*)( param_1 + 0x18 ) = iVar11;
   puVar16 = *(uint**)( param_1 + 0x70 );
   *(ulong*)( param_2 + 0x20 ) = uVar2;
   iVar8 = _UNK_0010f6cc;
   iVar7 = _UNK_0010f6c8;
   iVar6 = _UNK_0010f6c4;
   iVar11 = __LC0;
   iVar12 = iVar24 + 0xf;
   if (-1 < iVar24) {
      iVar12 = iVar24;
   }

   if (0xf < iVar24) {
      puVar14 = puVar16 + 0x10;
      iVar25 = 0;
      iVar24 = iVar21 - uVar19;
      iVar30 = uVar20 - __LC0;
      iVar31 = uVar20 - _UNK_0010f6c4;
      iVar32 = uVar20 - _UNK_0010f6c8;
      iVar33 = uVar20 - _UNK_0010f6cc;
      puVar15 = puVar16;
      do {
         do {
            puVar13 = puVar15;
            *puVar13 = ~-(uint)((int)(*puVar13 - iVar11) < iVar30) & *puVar13 + iVar24;
            puVar13[1] = ~-(uint)((int)(puVar13[1] - iVar6) < iVar31) & puVar13[1] + iVar24;
            puVar13[2] = ~-(uint)((int)(puVar13[2] - iVar7) < iVar32) & puVar13[2] + iVar24;
            puVar13[3] = ~-(uint)((int)(puVar13[3] - iVar8) < iVar33) & puVar13[3] + iVar24;
            puVar15 = puVar13 + 4;
         }
 while ( puVar13 + 4 != puVar14 );
         iVar25 = iVar25 + 1;
         puVar16 = puVar16 + 0x10;
         puVar14 = puVar13 + 0x14;
         puVar15 = puVar16;
      }
 while ( iVar25<iVar12> > 4 );
      uVar17 = *(uint*)( param_3 + 0x1c );
   }

   uVar10 = _UNK_0010f6dc;
   uVar9 = _UNK_0010f6d8;
   uVar22 = _LC11._4_4_;
   uVar23 = (uint)_LC11;
   iVar8 = _UNK_0010f6cc;
   iVar7 = _UNK_0010f6c8;
   iVar6 = _UNK_0010f6c4;
   iVar11 = __LC0;
   if (*(int*)( param_1 + 0x8c ) == 0) {
      if (uVar17 == 1) goto LAB_00101fc1;
      if (2 < uVar17 - 3) goto LAB_0010200c;
      if (*(int*)( param_3 + 0x90 ) == 1) goto LAB_00101fc1;
      iVar12 = 1 << ( ( byte ) * (undefined4*)( param_3 + 8 ) & 0x1f );
   }
 else {
      LAB_0010200c:iVar12 = 1 << ( ( byte ) * (undefined4*)( param_3 + 8 ) & 0x1f );
      if (uVar17 == 6) {
         if (0xf < iVar12) {
            iVar24 = 0;
            iVar25 = iVar21 - uVar19;
            puVar16 = *(uint**)( param_1 + 0x80 ) + 0x10;
            iVar30 = uVar20 - __LC0;
            iVar31 = uVar20 - _UNK_0010f6c4;
            iVar32 = uVar20 - _UNK_0010f6c8;
            iVar33 = uVar20 - _UNK_0010f6cc;
            puVar14 = *(uint**)( param_1 + 0x80 );
            puVar15 = puVar16;
            while (true) {
               do {
                  uVar17 = *puVar14;
                  uVar3 = puVar14[1];
                  uVar4 = puVar14[2];
                  uVar5 = puVar14[3];
                  puVar13 = puVar14 + 4;
                  uVar26 = -(uint)(uVar17 == uVar23);
                  uVar27 = -(uint)(uVar3 == uVar22);
                  uVar28 = -(uint)(uVar4 == uVar9);
                  uVar29 = -(uint)(uVar5 == uVar10);
                  *puVar14 = ~uVar26 & ~-(uint)(uVar26 == 0 && (int)(uVar17 - iVar11) < iVar30) & uVar17 + iVar25 | uVar23 & uVar26;
                  puVar14[1] = ~uVar27 & ~-(uint)(uVar27 == 0 && (int)(uVar3 - iVar6) < iVar31) & uVar3 + iVar25 | uVar22 & uVar27;
                  puVar14[2] = ~uVar28 & ~-(uint)(uVar28 == 0 && (int)(uVar4 - iVar7) < iVar32) & uVar4 + iVar25 | uVar9 & uVar28;
                  puVar14[3] = ~uVar29 & ~-(uint)(uVar29 == 0 && (int)(uVar5 - iVar8) < iVar33) & uVar5 + iVar25 | uVar10 & uVar29;
                  puVar14 = puVar13;
               }
 while ( puVar16 != puVar13 );
               iVar24 = iVar24 + 1;
               puVar16 = puVar16 + 0x10;
               if (iVar12 >> 4 <= iVar24) break;
               puVar14 = puVar15;
               puVar15 = puVar15 + 0x10;
            }
;
         }

         goto LAB_00101fc1;
      }

   }

   puVar16 = *(uint**)( param_1 + 0x80 );
   iVar24 = iVar12 + 0xf;
   if (-1 < iVar12) {
      iVar24 = iVar12;
   }

   if (0xf < iVar12) {
      iVar25 = 0;
      iVar12 = iVar21 - uVar19;
      iVar30 = uVar20 - __LC0;
      iVar31 = uVar20 - _UNK_0010f6c4;
      iVar32 = uVar20 - _UNK_0010f6c8;
      iVar33 = uVar20 - _UNK_0010f6cc;
      puVar14 = puVar16;
      do {
         puVar14 = puVar14 + 0x10;
         puVar15 = puVar16;
         do {
            puVar13 = puVar15 + 4;
            *puVar15 = ~-(uint)((int)(*puVar15 - iVar11) < iVar30) & *puVar15 + iVar12;
            puVar15[1] = ~-(uint)((int)(puVar15[1] - iVar6) < iVar31) & puVar15[1] + iVar12;
            puVar15[2] = ~-(uint)((int)(puVar15[2] - iVar7) < iVar32) & puVar15[2] + iVar12;
            puVar15[3] = ~-(uint)((int)(puVar15[3] - iVar8) < iVar33) & puVar15[3] + iVar12;
            puVar15 = puVar13;
         }
 while ( puVar14 != puVar13 );
         iVar25 = iVar25 + 1;
         puVar16 = puVar16 + 0x10;
      }
 while ( iVar25<iVar24> > 4 );
   }

   LAB_00101fc1:iVar8 = _UNK_0010f6cc;
   iVar7 = _UNK_0010f6c8;
   iVar6 = _UNK_0010f6c4;
   iVar11 = __LC0;
   if (*(int*)( param_1 + 0x30 ) != 0) {
      puVar16 = *(uint**)( param_1 + 0x78 );
      iVar24 = 1 << ( ( byte ) * (int*)( param_1 + 0x30 ) & 0x1f );
      iVar12 = iVar24 + 0xf;
      if (-1 < iVar24) {
         iVar12 = iVar24;
      }

      if (0xf < iVar24) {
         iVar25 = 0;
         iVar24 = iVar21 - uVar19;
         iVar30 = uVar20 - __LC0;
         iVar31 = uVar20 - _UNK_0010f6c4;
         iVar32 = uVar20 - _UNK_0010f6c8;
         iVar33 = uVar20 - _UNK_0010f6cc;
         puVar14 = puVar16;
         do {
            puVar14 = puVar14 + 0x10;
            puVar15 = puVar16;
            do {
               puVar13 = puVar15 + 4;
               *puVar15 = ~-(uint)((int)(*puVar15 - iVar11) < iVar30) & *puVar15 + iVar24;
               puVar15[1] = ~-(uint)((int)(puVar15[1] - iVar6) < iVar31) & puVar15[1] + iVar24;
               puVar15[2] = ~-(uint)((int)(puVar15[2] - iVar7) < iVar32) & puVar15[2] + iVar24;
               puVar15[3] = ~-(uint)((int)(puVar15[3] - iVar8) < iVar33) & puVar15[3] + iVar24;
               puVar15 = puVar13;
            }
 while ( puVar13 != puVar14 );
            iVar25 = iVar25 + 1;
            puVar16 = puVar16 + 0x10;
         }
 while ( iVar25<iVar12> > 4 );
      }

   }

   if (uVar2 < *(ulong*)( param_2 + 0x18 )) {
      *(ulong*)( param_2 + 0x20 ) = *(ulong*)( param_2 + 0x18 );
   }

   *(undefined4*)( param_1 + 0x28 ) = 0;
   *(undefined8*)( param_1 + 0xf8 ) = 0;
   iVar21 = ( *(uint*)( param_1 + 0x2c ) - uVar19 ) + iVar21;
   if (*(uint*)( param_1 + 0x2c ) < uVar18) {
      iVar21 = 0;
   }

   *(int*)( param_1 + 0x2c ) = iVar21;
   return;
}
undefined8 ZSTD_loadDictionaryContent(ulong *param_1, ulong *param_2, undefined8 param_3, long param_4, ulong param_5, ulong param_6, undefined8 param_7, uint param_8) {
   ulong uVar1;
   int iVar2;
   int iVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   undefined4 uVar9;
   int iVar10;
   bool bVar11;
   uVar1 = param_5 + param_6;
   bVar11 = *(int*)( param_4 + 0x60 ) != 1;
   uVar8 = *(uint*)( param_4 + 0x1c );
   iVar10 = (int)uVar1;
   if (( uVar8 - 1 < 2 ) && ( ( param_8 & 1 ) != 0 )) {
      uVar6 = 0xfffffe;
      if (0xfffffe < param_6) goto LAB_001021dc;
      LAB_001022f7:if (param_6 != 0) {
         uVar6 = *param_1;
         uVar4 = (ulong)(uint)param_1[3];
         if (uVar6 == param_5) goto LAB_001023f0;
         goto LAB_001021f1;
      }

      param_5 = uVar1;
      if (bVar11 || param_2 == (ulong*)0x0) {
         iVar2 = *(int*)( param_4 + 0x30 );
         iVar10 = iVar10 - (int)param_1[1];
         *(int*)( (long)param_1 + 0x2c ) = iVar10;
         if (iVar2 == 0) {
            uVar9 = *(undefined4*)( param_4 + 0x94 );
            *(int*)( param_1 + 5 ) = iVar10;
            *(undefined4*)( param_1 + 0x11 ) = uVar9;
            return 0;
         }

         uVar9 = *(undefined4*)( param_4 + 0x94 );
         *(undefined4*)( param_1 + 5 ) = 0;
         *(undefined4*)( param_1 + 0x11 ) = uVar9;
         return 0;
      }

   }
 else {
      uVar6 = 0xdffffffe;
      if (param_6 < 0xdfffffff) goto LAB_001022f7;
      LAB_001021dc:param_6 = uVar6;
      uVar6 = *param_1;
      uVar4 = (ulong)(uint)param_1[3];
      param_5 = uVar1 - param_6;
      if (uVar6 == param_5) {
         LAB_001023f0:uVar5 = param_1[2];
         uVar7 = ( ulong ) * (uint*)( (long)param_1 + 0x1c );
      }
 else {
         LAB_001021f1:uVar5 = param_1[1];
         iVar2 = (int)uVar4;
         uVar6 = uVar6 - uVar5;
         iVar3 = (int)uVar6;
         param_1[3] = CONCAT44(iVar2, iVar3);
         param_1[1] = param_5 - uVar6;
         param_1[2] = uVar5;
         uVar7 = uVar4;
         uVar4 = uVar6 & 0xffffffff;
         if (( uint )(iVar3 - iVar2) < 8) {
            *(int*)( (long)param_1 + 0x1c ) = iVar3;
            uVar7 = uVar6 & 0xffffffff;
         }

      }

      *param_1 = uVar1;
      if (( uVar7 + uVar5 < uVar1 ) && ( param_5 < uVar5 + uVar4 )) {
         uVar9 = (undefined4)uVar4;
         if ((long)( uVar1 - uVar5 ) <= (long)uVar4) {
            uVar9 = ( undefined4 )(uVar1 - uVar5);
         }

         *(undefined4*)( (long)param_1 + 0x1c ) = uVar9;
      }

      if (bVar11 || param_2 == (ulong*)0x0) goto LAB_0010232f;
      uVar8 = (uint)param_2[3];
      uVar6 = (ulong)uVar8;
      if (*param_2 == param_5) {
         uVar4 = param_2[2];
         uVar5 = ( ulong ) * (uint*)( (long)param_2 + 0x1c );
      }
 else {
         uVar4 = param_2[1];
         uVar7 = *param_2 - uVar4;
         iVar2 = (int)uVar7;
         param_2[3] = CONCAT44(uVar8, iVar2);
         param_2[1] = param_5 - uVar7;
         param_2[2] = uVar4;
         uVar5 = uVar6;
         uVar6 = uVar7 & 0xffffffff;
         if (iVar2 - uVar8 < 8) {
            *(int*)( (long)param_2 + 0x1c ) = iVar2;
            uVar5 = uVar7 & 0xffffffff;
         }

      }

      *param_2 = uVar1;
      if (( uVar5 + uVar4 < uVar1 ) && ( param_5 < uVar4 + uVar6 )) {
         uVar9 = (undefined4)uVar6;
         if ((long)( uVar1 - uVar4 ) <= (long)uVar6) {
            uVar9 = ( undefined4 )(uVar1 - uVar4);
         }

         *(undefined4*)( (long)param_2 + 0x1c ) = uVar9;
      }

   }

   iVar2 = 0;
   if (*(int*)( param_4 + 0x30 ) == 0) {
      iVar2 = iVar10 - (int)param_2[1];
   }

   *(int*)( param_2 + 6 ) = iVar2;
   ZSTD_ldm_fillHashTable(param_2, param_5, uVar1, param_4 + 0x60);
   uVar8 = *(uint*)( param_4 + 0x1c );
   LAB_0010232f:if (uVar8 < 8) {
      uVar8 = *(uint*)( param_4 + 8 );
      if (*(uint*)( param_4 + 8 ) < *(uint*)( param_4 + 0xc )) {
         uVar8 = *(uint*)( param_4 + 0xc );
      }

      if (0x1c < uVar8) {
         uVar8 = 0x1c;
      }

      uVar6 = ( ulong )(uint)(8 << ( (byte)uVar8 & 0x1f ));
      if (uVar6 < param_6) {
         param_5 = uVar1 - uVar6;
         param_6 = uVar6;
      }

   }

   iVar2 = *(int*)( param_4 + 0x30 );
   *(int*)( (long)param_1 + 0x2c ) = (int)param_5 - (int)param_1[1];
   iVar3 = 0;
   if (iVar2 == 0) {
      iVar3 = iVar10 - (int)param_1[1];
   }

   *(int*)( param_1 + 5 ) = iVar3;
   *(undefined4*)( param_1 + 0x11 ) = *(undefined4*)( param_4 + 0x94 );
   if (8 < param_6) {
      ZSTD_overflowCorrectIfNeeded(param_1, param_3, param_4, param_5, uVar1);
      uVar8 = *(uint*)( param_4 + 0x1c );
      if (uVar8 < 6) {
         if (uVar8 < 3) {
            if (uVar8 == 1) {
               ZSTD_fillHashTable();
            }
 else if (uVar8 == 2) {
               ZSTD_fillDoubleHashTable();
            }

         }
 else if (*(int*)( (long)param_1 + 0x8c ) == 0) {
            if (*(int*)( param_4 + 0x90 ) == 1) {
               memset((void*)param_1[7], 0, 1L << ( ( byte ) * (undefined4*)( param_4 + 0xc ) & 0x3f ));
               ZSTD_row_update(param_1, uVar1 - 8);
            }
 else {
               ZSTD_insertAndFindFirstIndex();
            }

         }
 else {
            ZSTD_dedicatedDictSearch_lazy_loadDictionary();
         }

      }
 else if (uVar8 - 6 < 4) {
         ZSTD_updateTree();
      }

      *(int*)( (long)param_1 + 0x2c ) = iVar10 - (int)param_1[1];
   }

   return 0;
}
ulong ZSTD_buildSeqStore(long param_1, long param_2, ulong param_3) {
   int *piVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   uint uVar4;
   ulong uVar5;
   code *pcVar6;
   size_t __n;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined1 local_50[16];
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 7) {
      if (*(uint*)( param_1 + 0x104 ) < 7) {
         ZSTD_ldm_skipSequences(param_1 + 0xc58, param_3, *(undefined4*)( param_1 + 0xfc ));
      }
 else {
         ZSTD_ldm_skipRawSeqStoreBytes(param_1 + 0xc58, param_3);
      }

      uVar5 = 1;
      goto LAB_00102750;
   }

   *(undefined4*)( param_1 + 0x400 ) = 0;
   lVar12 = *(long*)( param_1 + 0xc80 );
   *(undefined8*)( param_1 + 0x3d0 ) = *(undefined8*)( param_1 + 0x3c8 );
   *(long*)( param_1 + 0xd78 ) = lVar12;
   *(undefined8*)( param_1 + 0x3c0 ) = *(undefined8*)( param_1 + 0x3b8 );
   *(undefined4*)( param_1 + 0xd80 ) = *(undefined4*)( param_1 + 0x130 );
   uVar4 = (int)param_2 - (int)*(undefined8*)( param_1 + 0xc98 );
   if (*(int*)( param_1 + 0xcbc ) + 0x180U < uVar4) {
      uVar7 = ( uVar4 - *(int*)( param_1 + 0xcbc ) ) - 0x180;
      if (0xc0 < uVar7) {
         uVar7 = 0xc0;
      }

      *(uint*)( param_1 + 0xcbc ) = uVar4 - uVar7;
   }

   iVar13 = 1;
   if (*(uint*)( param_1 + 0xca8 ) <= *(uint*)( param_1 + 0xcac )) {
      iVar13 = 0;
      if (*(long*)( param_1 + 0xd88 ) != 0) {
         iVar13 = 3 - ( uint )(*(int*)( *(long*)( param_1 + 0xd88 ) + 0x8c ) == 0);
      }

   }

   lVar11 = *(long*)( param_1 + 0xc88 );
   lVar8 = param_1 + 0xc90;
   pcVar6 = *(code**)( param_1 + 0x1a8 );
   *(undefined8*)( lVar11 + 0x15f0 ) = *(undefined8*)( lVar12 + 0x15f0 );
   *(undefined4*)( lVar11 + 0x15f8 ) = *(undefined4*)( lVar12 + 0x15f8 );
   if (*(ulong*)( param_1 + 0xc60 ) < *(ulong*)( param_1 + 0xc70 )) {
      uVar5 = 0xffffffffffffffd7;
      if (pcVar6 != (code*)0x0) goto LAB_00102750;
      __n = ZSTD_ldm_blockCompress(param_1 + 0xc58, lVar8, param_1 + 0x3b8, lVar11 + 0x15f0, *(undefined4*)( param_1 + 0x178 ), param_2, param_3);
   }
 else if (*(int*)( param_1 + 0x148 ) == 1) {
      uVar5 = 0xffffffffffffffd7;
      local_50 = (undefined1[16])0x0;
      local_40 = (undefined1[16])0x0;
      if (pcVar6 != (code*)0x0) goto LAB_00102750;
      local_58 = *(undefined8*)( param_1 + 0xc48 );
      local_40._8_8_ = 0;
      local_40._0_8_ = *(ulong*)( param_1 + 0xc50 );
      local_40 = local_40 << 0x40;
      uVar5 = ZSTD_ldm_generateSequences(param_1 + 0x408, &local_58, param_1 + 0x148, param_2, param_3);
      if (0xffffffffffffff88 < uVar5) goto LAB_00102750;
      __n = ZSTD_ldm_blockCompress(&local_58, lVar8, param_1 + 0x3b8, *(long*)( param_1 + 0xc88 ) + 0x15f0, *(undefined4*)( param_1 + 0x178 ), param_2, param_3);
   }
 else if (pcVar6 == (code*)0x0) {
      if (( *(int*)( param_1 + 0x178 ) == 1 ) && ( uVar4 = uVar4 < 3 )) {
         pcVar6 = *(code**)( rowBasedBlockCompressors_1 + ( (long)iVar13 * 3 + (long)(int)uVar4 ) * 8 );
      }
 else {
         pcVar6 = *(code**)( blockCompressor_0 + ( (long)*(int*)( param_1 + 0x104 ) + (long)iVar13 * 10 ) * 8 );
      }

      *(undefined8*)( param_1 + 0xdb0 ) = 0;
      __n = ( *pcVar6 )(lVar8, param_1 + 0x3b8, lVar11 + 0x15f0, param_2, param_3);
   }
 else {
      uVar5 = ( *pcVar6 )(*(undefined8*)( param_1 + 0x1a0 ), *(undefined8*)( param_1 + 0x1470 ), *(undefined8*)( param_1 + 0x1478 ), param_2, param_3, 0, 0, *(undefined4*)( param_1 + 0x114 ), 1 << ( ( byte ) * (undefined4*)( param_1 + 0xec ) & 0x1f ));
      lVar12 = *(long*)( param_1 + 0x1470 );
      if (( uVar5 <= *(ulong*)( param_1 + 0x1478 ) ) && ( uVar5 != 0 )) {
         lVar11 = uVar5 * 0x10;
         piVar1 = (int*)( lVar12 + -0x10 + lVar11 );
         if (*piVar1 == 0 && piVar1[2] == 0) {
            if (0xffffffffffffff88 < uVar5) goto LAB_001028af;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_50._8_8_;
            local_50 = auVar3 << 0x40;
            LAB_0010270e:local_58 = 0;
            lVar10 = 0;
            lVar11 = 0;
            lVar8 = lVar12;
            do {
               lVar9 = lVar8 + 0x10;
               lVar11 = lVar11 + ( ulong ) * (uint*)( lVar8 + 4 );
               lVar10 = lVar10 + ( ulong ) * (uint*)( lVar8 + 8 );
               lVar8 = lVar9;
            }
 while ( lVar9 != uVar5 * 0x10 + lVar12 );
            if (param_3 < ( ulong )(lVar11 + lVar10)) {
               uVar5 = 0xffffffffffffff95;
               goto LAB_00102750;
            }

         }
 else {
            if (*(ulong*)( param_1 + 0x1478 ) == uVar5) goto LAB_001028a8;
            uVar5 = uVar5 + 1;
            *(undefined1(*) [16])( lVar12 + lVar11 ) = (undefined1[16])0x0;
            if (0xffffffffffffff88 < uVar5) goto LAB_001028af;
            lVar12 = *(long*)( param_1 + 0x1470 );
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_50._8_8_;
            local_50 = auVar2 << 0x40;
            if (uVar5 != 0) goto LAB_0010270e;
         }

         local_58 = 0;
         uVar5 = ZSTD_copySequencesToSeqStoreExplicitBlockDelim(param_1, &local_58, lVar12, uVar5, param_2, param_3, *(undefined4*)( param_1 + 0x1b8 ));
         if (uVar5 < 0xffffffffffffff89) {
            *(undefined8*)( param_1 + 0xdb0 ) = 0;
            uVar5 = 0;
         }

         goto LAB_00102750;
      }

      LAB_001028a8:uVar5 = 0xffffffffffffff96;
      LAB_001028af:if (*(int*)( param_1 + 0x19c ) == 0) goto LAB_00102750;
      uVar4 = *(int*)( param_1 + 0x104 ) - 3;
      if (( uVar4 < 3 ) && ( *(int*)( param_1 + 0x178 ) == 1 )) {
         pcVar6 = *(code**)( rowBasedBlockCompressors_1 + ( (long)iVar13 * 3 + (long)(int)uVar4 ) * 8 );
      }
 else {
         pcVar6 = *(code**)( blockCompressor_0 + ( (long)*(int*)( param_1 + 0x104 ) + (long)iVar13 * 10 ) * 8 );
      }

      *(undefined8*)( param_1 + 0xdb0 ) = 0;
      __n = ( *pcVar6 )(lVar8, param_1 + 0x3b8, *(long*)( param_1 + 0xc88 ) + 0x15f0, param_2, param_3);
   }

   memcpy(*(void**)( param_1 + 0x3d0 ), (void*)( param_2 + ( param_3 - __n ) ), __n);
   *(long*)( param_1 + 0x3d0 ) = *(long*)( param_1 + 0x3d0 ) + __n;
   uVar5 = 0;
   LAB_00102750:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_reset_matchState(undefined8 *param_1, long param_2, uint *param_3, int param_4, int param_5, int param_6, uint param_7) {
   uint uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   void *pvVar6;
   uint uVar7;
   long lVar8;
   ulong uVar9;
   size_t __n;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   void *pvVar14;
   int iVar15;
   uVar5 = param_3[2];
   if (*(int*)( (long)param_1 + 0x8c ) == 0) {
      lVar8 = 0;
      if (( param_3[6] != 1 ) && ( ( 2 < param_3[6] - 3 || ( param_4 != 1 ) ) )) {
         lVar8 = 4L << ( (byte)param_3[1] & 0x3f );
      }

      lVar13 = 0;
      uVar7 = param_7;
      if (param_7 == 1) {
         LAB_00102c23:uVar1 = param_3[4];
         goto joined_r0x00102c2d;
      }

   }
 else if (param_7 == 0) {
      lVar13 = 0;
      lVar8 = 4L << ( (byte)param_3[1] & 0x3f );
      uVar7 = 0;
   }
 else {
      lVar8 = 0;
      if (( param_3[6] == 1 ) || ( ( param_3[6] - 3 < 3 && ( lVar8 = param_4 == 1 ) ) )) goto LAB_00102c23;
      lVar8 = 4L << ( (byte)param_3[1] & 0x3f );
      uVar1 = param_3[4];
      joined_r0x00102c2d:lVar13 = 0;
      uVar7 = 0;
      if (uVar1 == 3) {
         lVar13 = 0;
         uVar7 = *param_3;
         if (uVar7 != 0) {
            if (0x11 < uVar7) {
               uVar7 = 0x11;
            }

            lVar13 = 4L << ( (byte)uVar7 & 0x3f );
         }

      }

   }

   if (param_6 == 1) {
      param_1[4] = 0;
      iVar15 = 2;
      param_1[2] = &_LC2;
      *param_1 = 0x10e29e;
      param_1[1] = &_LC2;
      uVar11 = *(ulong*)( param_2 + 0x10 );
      *(ulong*)( param_2 + 0x20 ) = uVar11;
   }
 else {
      uVar11 = *(ulong*)( param_2 + 0x10 );
      iVar15 = (int)*param_1 - *(int*)( param_1 + 1 );
   }

   *(uint*)( param_1 + 6 ) = uVar7;
   *(int*)( (long)param_1 + 0x2c ) = iVar15;
   param_1[3] = CONCAT44(iVar15, iVar15);
   iVar15 = *(int*)( param_2 + 0x40 );
   *(undefined4*)( (long)param_1 + 300 ) = 0;
   *(undefined4*)( param_1 + 5 ) = 0;
   *(undefined4*)( (long)param_1 + 0xc4 ) = 0;
   param_1[0x1f] = 0;
   *(ulong*)( param_2 + 0x18 ) = uVar11;
   uVar12 = uVar11;
   if (iVar15 == 0) {
      uVar9 = *(ulong*)( param_2 + 8 );
      *(ulong*)( param_2 + 0x20 ) = uVar11;
      *(ulong*)( param_2 + 0x30 ) = uVar9 & 0xffffffffffffffc0;
      uVar12 = ( -(int)uVar11 & 0x3f ) + uVar11;
      if (uVar12 <= uVar9) {
         *(undefined4*)( param_2 + 0x40 ) = 1;
         if (uVar11 <= uVar12) {
            uVar11 = uVar12;
         }

         *(ulong*)( param_2 + 0x10 ) = uVar12;
         *(ulong*)( param_2 + 0x18 ) = uVar12;
         *(ulong*)( param_2 + 0x20 ) = uVar11;
         goto LAB_00102b10;
      }

      param_1[0xe] = 0;
      LAB_00102d28:*(ulong*)( param_2 + 0x20 ) = uVar11;
      *(ulong*)( param_2 + 0x30 ) = uVar9 & 0xffffffffffffffc0;
      uVar12 = ( -(int)uVar11 & 0x3f ) + uVar11;
      if (uVar12 <= uVar9) {
         *(undefined4*)( param_2 + 0x40 ) = 1;
         if (uVar11 < uVar12) {
            uVar11 = uVar12;
         }

         *(ulong*)( param_2 + 0x10 ) = uVar12;
         *(ulong*)( param_2 + 0x18 ) = uVar12;
         uVar9 = lVar8 + uVar12;
         *(ulong*)( param_2 + 0x20 ) = uVar11;
         iVar15 = 1;
         if (uVar9 <= *(ulong*)( param_2 + 0x28 )) goto LAB_00102b42;
         LAB_00102d7d:*(undefined1*)( param_2 + 0x38 ) = 1;
         uVar12 = 0;
         goto LAB_00102b46;
      }

      param_1[0x10] = 0;
      LAB_00102cd0:*(ulong*)( param_2 + 0x20 ) = uVar11;
      *(ulong*)( param_2 + 0x30 ) = uVar9 & 0xffffffffffffffc0;
      uVar12 = ( -(int)uVar11 & 0x3f ) + uVar11;
      if (uVar12 <= uVar9) {
         *(undefined4*)( param_2 + 0x40 ) = 1;
         if (uVar11 < uVar12) {
            uVar11 = uVar12;
         }

         *(ulong*)( param_2 + 0x10 ) = uVar12;
         *(ulong*)( param_2 + 0x18 ) = uVar12;
         *(ulong*)( param_2 + 0x20 ) = uVar11;
         goto LAB_00102b59;
      }

      cVar4 = *(char*)( param_2 + 0x38 );
      uVar12 = 0;
   }
 else {
      LAB_00102b10:uVar11 = uVar12 + ( 4L << ( (byte)uVar5 & 0x3f ) );
      if (*(ulong*)( param_2 + 0x28 ) < uVar11) {
         *(undefined1*)( param_2 + 0x38 ) = 1;
         iVar15 = *(int*)( param_2 + 0x40 );
         uVar12 = 0;
      }
 else {
         *(ulong*)( param_2 + 0x18 ) = uVar11;
         iVar15 = *(int*)( param_2 + 0x40 );
      }

      param_1[0xe] = uVar12;
      if (iVar15 == 0) {
         uVar11 = *(ulong*)( param_2 + 0x10 );
         uVar9 = *(ulong*)( param_2 + 8 );
         goto LAB_00102d28;
      }

      uVar12 = *(ulong*)( param_2 + 0x18 );
      uVar9 = lVar8 + uVar12;
      if (*(ulong*)( param_2 + 0x28 ) < uVar9) goto LAB_00102d7d;
      LAB_00102b42:*(ulong*)( param_2 + 0x18 ) = uVar9;
      LAB_00102b46:param_1[0x10] = uVar12;
      if (iVar15 == 0) {
         uVar11 = *(ulong*)( param_2 + 0x10 );
         uVar9 = *(ulong*)( param_2 + 8 );
         goto LAB_00102cd0;
      }

      uVar12 = *(ulong*)( param_2 + 0x18 );
      LAB_00102b59:if (*(ulong*)( param_2 + 0x28 ) < lVar13 + uVar12) {
         *(undefined1*)( param_2 + 0x38 ) = 1;
         param_1[0xf] = 0;
         return 0xffffffffffffffc0;
      }

      *(ulong*)( param_2 + 0x18 ) = lVar13 + uVar12;
      cVar4 = *(char*)( param_2 + 0x38 );
   }

   param_1[0xf] = uVar12;
   if (cVar4 != '\0') {
      return 0xffffffffffffffc0;
   }

   if (param_5 != 1) {
      pvVar6 = *(void**)( param_2 + 0x20 );
      if (pvVar6 < *(void**)( param_2 + 0x18 )) {
         memset(pvVar6, 0, (long)*(void**)( param_2 + 0x18 ) - (long)pvVar6);
         if (*(ulong*)( param_2 + 0x20 ) < *(ulong*)( param_2 + 0x18 )) {
            *(ulong*)( param_2 + 0x20 ) = *(ulong*)( param_2 + 0x18 );
         }

      }

   }

   uVar7 = param_3[6];
   if (( 2 < uVar7 - 3 ) || ( param_4 != 1 )) {
      if (param_7 == 1) goto LAB_00102ec0;
      LAB_00102bb2:cVar4 = *(char*)( param_2 + 0x38 );
      goto LAB_00102bb6;
   }

   __n = 1L << ( (byte)uVar5 & 0x3f );
   uVar5 = *(uint*)( param_2 + 0x40 );
   uVar11 = __n + 0x3f & 0xffffffffffffffc0;
   if (param_7 == 1) {
      if (uVar5 == 0) {
         pvVar14 = *(void**)( param_2 + 0x10 );
         *(void**)( param_2 + 0x20 ) = pvVar14;
         *(ulong*)( param_2 + 0x30 ) = ( ulong ) * (void**)( param_2 + 8 ) & 0xffffffffffffffc0;
         pvVar6 = (void*)( ( ulong )(-(int)pvVar14 & 0x3f) + (long)pvVar14 );
         if (pvVar6 <= *(void**)( param_2 + 8 )) {
            *(undefined4*)( param_2 + 0x40 ) = 1;
            if (pvVar14 < pvVar6) {
               pvVar14 = pvVar6;
            }

            *(void**)( param_2 + 0x10 ) = pvVar6;
            *(void**)( param_2 + 0x18 ) = pvVar6;
            *(void**)( param_2 + 0x20 ) = pvVar14;
            goto LAB_00102de3;
         }

         LAB_0010334c:pvVar14 = (void*)0x0;
      }
 else {
         pvVar6 = *(void**)( param_2 + 0x18 );
         LAB_00102de3:pvVar14 = (void*)( *(long*)( param_2 + 0x28 ) - uVar11 );
         if (pvVar14 < pvVar6) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar7 = param_3[6];
            goto LAB_0010334c;
         }

         if (pvVar14 < *(void**)( param_2 + 0x20 )) {
            *(void**)( param_2 + 0x20 ) = pvVar14;
         }

         *(void**)( param_2 + 0x28 ) = pvVar14;
         if (pvVar14 < *(void**)( param_2 + 0x30 )) {
            uVar12 = (long)*(void**)( param_2 + 0x30 ) - (long)pvVar14;
            if (uVar12 <= uVar11) {
               uVar11 = uVar12;
            }

            pvVar14 = memset(pvVar14, 0, uVar11);
            *(void**)( param_2 + 0x30 ) = pvVar14;
         }

         uVar7 = param_3[6];
      }

      uVar11 = param_1[0xc];
      uVar12 = ( ulong ) * (uint*)( param_1 + 0xd );
      param_1[7] = pvVar14;
      uVar11 = ( ( uVar11 << 0xf | uVar11 >> 0x31 ) ^ ( uVar11 >> 0x18 | uVar11 << 0x28 ) ^ uVar11 ) * -0x604de39ae16720db;
      uVar11 = ( uVar11 ^ ( uVar11 >> 0x23 ) + 8 ) * -0x604de39ae16720db;
      uVar12 = ( uVar12 << 0xf ^ ( ( ulong )(*(uint*)( param_1 + 0xd ) >> 0x18) | uVar12 << 0x28 ) ^ uVar12 ) * -0x604de39ae16720db;
      uVar12 = ( uVar12 ^ ( uVar12 >> 0x23 ) + 4 ) * -0x604de39ae16720db;
      param_1[0xc] = uVar12 >> 0x1c ^ uVar11 ^ uVar11 >> 0x1c ^ uVar12;
      uVar5 = param_3[3];
      if (6 < param_3[3]) {
         uVar5 = 6;
      }

      if (uVar5 < 4) {
         uVar5 = 4;
      }

      *(uint*)( (long)param_1 + 0x34 ) = param_3[2] - uVar5;
      LAB_00102ec0:if (uVar7 < 7) goto LAB_00102bb2;
      if (*(uint*)( param_2 + 0x40 ) < 2) {
         if (*(uint*)( param_2 + 0x40 ) != 0) {
            uVar11 = *(ulong*)( param_2 + 0x18 );
            uVar12 = uVar11;
            LAB_00103167:*(undefined4*)( param_2 + 0x40 ) = 2;
            goto LAB_00102edc;
         }

         uVar11 = *(ulong*)( param_2 + 0x10 );
         *(ulong*)( param_2 + 0x20 ) = uVar11;
         uVar9 = *(ulong*)( param_2 + 8 ) & 0xffffffffffffffc0;
         *(ulong*)( param_2 + 0x30 ) = uVar9;
         uVar12 = ( -(int)uVar11 & 0x3f ) + uVar11;
         if (uVar12 <= *(ulong*)( param_2 + 8 )) {
            *(ulong*)( param_2 + 0x10 ) = uVar12;
            *(ulong*)( param_2 + 0x18 ) = uVar12;
            if (uVar11 < uVar12) {
               *(ulong*)( param_2 + 0x20 ) = uVar12;
            }

            uVar11 = *(ulong*)( param_2 + 0x18 );
            goto LAB_00103167;
         }

         for (int i = 0; i < 5; i++) {
            param_1[( i + 18 )] = 0;
         }

         *(ulong*)( param_2 + 0x20 ) = uVar11;
         cVar4 = *(char*)( param_2 + 0x38 );
         *(ulong*)( param_2 + 0x30 ) = uVar9;
         uVar9 = 0;
      }
 else {
         uVar11 = *(ulong*)( param_2 + 0x18 );
         uVar12 = uVar11;
         LAB_00102edc:uVar9 = *(ulong*)( param_2 + 0x28 );
         uVar10 = uVar9 - 0x400;
         if (uVar10 < uVar12) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar10 = 0;
         }
 else {
            if (uVar10 < *(ulong*)( param_2 + 0x20 )) {
               *(ulong*)( param_2 + 0x20 ) = uVar10;
            }

            *(ulong*)( param_2 + 0x28 ) = uVar10;
            uVar9 = uVar10;
         }

         param_1[0x12] = uVar10;
         uVar12 = uVar9 - 0xc0;
         if (uVar12 < uVar11) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar12 = 0;
         }
 else {
            if (uVar12 < *(ulong*)( param_2 + 0x20 )) {
               *(ulong*)( param_2 + 0x20 ) = uVar12;
            }

            *(ulong*)( param_2 + 0x28 ) = uVar12;
            uVar9 = uVar12;
         }

         param_1[0x13] = uVar12;
         uVar12 = uVar9 - 0x100;
         if (uVar12 < uVar11) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar12 = 0;
         }
 else {
            if (uVar12 < *(ulong*)( param_2 + 0x20 )) {
               *(ulong*)( param_2 + 0x20 ) = uVar12;
            }

            *(ulong*)( param_2 + 0x28 ) = uVar12;
            uVar9 = uVar12;
         }

         param_1[0x14] = uVar12;
         uVar12 = uVar9 - 0x80;
         if (uVar12 < uVar11) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar12 = 0;
         }
 else {
            if (uVar12 < *(ulong*)( param_2 + 0x20 )) {
               *(ulong*)( param_2 + 0x20 ) = uVar12;
            }

            *(ulong*)( param_2 + 0x28 ) = uVar12;
            uVar9 = uVar12;
         }

         param_1[0x15] = uVar12;
         uVar12 = uVar9 - 0x8040;
         if (uVar12 < uVar11) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar12 = 0;
         }
 else {
            if (uVar12 < *(ulong*)( param_2 + 0x20 )) {
               *(ulong*)( param_2 + 0x20 ) = uVar12;
            }

            *(ulong*)( param_2 + 0x28 ) = uVar12;
            uVar9 = uVar12;
         }

         param_1[0x16] = uVar12;
         uVar9 = uVar9 - 0x1c080;
         if (uVar9 < uVar11) {
            *(undefined1*)( param_2 + 0x38 ) = 1;
            uVar2 = *(undefined8*)param_3;
            uVar3 = *(undefined8*)( param_3 + 2 );
            param_1[0x17] = 0;
            param_1[0x20] = uVar2;
            param_1[0x21] = uVar3;
            uVar2 = *(undefined8*)( param_3 + 5 );
            *(undefined8*)( (long)param_1 + 0x10c ) = *(undefined8*)( param_3 + 3 );
            *(undefined8*)( (long)param_1 + 0x114 ) = uVar2;
            return 0xffffffffffffffc0;
         }

         if (uVar9 < *(ulong*)( param_2 + 0x20 )) {
            *(ulong*)( param_2 + 0x20 ) = uVar9;
         }

         *(ulong*)( param_2 + 0x28 ) = uVar9;
         cVar4 = *(char*)( param_2 + 0x38 );
      }

      param_1[0x17] = uVar9;
      goto LAB_00102bb6;
   }

   if (uVar5 < 2) {
      if (uVar5 != 0) {
         pvVar6 = *(void**)( param_2 + 0x18 );
         LAB_00103148:*(undefined4*)( param_2 + 0x40 ) = 2;
         goto LAB_00103090;
      }

      pvVar14 = *(void**)( param_2 + 0x10 );
      *(void**)( param_2 + 0x20 ) = pvVar14;
      *(ulong*)( param_2 + 0x30 ) = ( ulong ) * (void**)( param_2 + 8 ) & 0xffffffffffffffc0;
      pvVar6 = (void*)( ( ulong )(-(int)pvVar14 & 0x3f) + (long)pvVar14 );
      if (pvVar6 <= *(void**)( param_2 + 8 )) {
         *(void**)( param_2 + 0x10 ) = pvVar6;
         *(void**)( param_2 + 0x18 ) = pvVar6;
         if (pvVar14 < pvVar6) {
            *(void**)( param_2 + 0x20 ) = pvVar6;
         }

         goto LAB_00103148;
      }

      LAB_0010333c:pvVar14 = (void*)0x0;
   }
 else {
      pvVar6 = *(void**)( param_2 + 0x18 );
      LAB_00103090:pvVar14 = (void*)( *(long*)( param_2 + 0x28 ) - uVar11 );
      if (pvVar14 < pvVar6) {
         *(undefined1*)( param_2 + 0x38 ) = 1;
         goto LAB_0010333c;
      }

      if (pvVar14 < *(void**)( param_2 + 0x20 )) {
         *(void**)( param_2 + 0x20 ) = pvVar14;
      }

      *(void**)( param_2 + 0x28 ) = pvVar14;
   }

   param_1[7] = pvVar14;
   memset(pvVar14, 0, __n);
   uVar5 = param_3[3];
   param_1[0xc] = 0;
   if (6 < uVar5) {
      uVar5 = 6;
   }

   if (uVar5 < 4) {
      uVar5 = 4;
   }

   *(uint*)( (long)param_1 + 0x34 ) = param_3[2] - uVar5;
   cVar4 = *(char*)( param_2 + 0x38 );
   LAB_00102bb6:uVar2 = *(undefined8*)( param_3 + 2 );
   param_1[0x20] = *(undefined8*)param_3;
   param_1[0x21] = uVar2;
   uVar2 = *(undefined8*)( param_3 + 5 );
   *(undefined8*)( (long)param_1 + 0x10c ) = *(undefined8*)( param_3 + 3 );
   *(undefined8*)( (long)param_1 + 0x114 ) = uVar2;
   if (cVar4 != '\0') {
      return 0xffffffffffffffc0;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong ZSTD_resetCCtx_internal(undefined4 *param_1, undefined8 *param_2, ulong param_3, ulong param_4, undefined4 param_5, int param_6) {
   undefined4 *puVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   void *pvVar9;
   ulong uVar10;
   ulong uVar11;
   void *pvVar12;
   int iVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   void *pvVar17;
   size_t sVar18;
   uint uVar19;
   undefined8 uVar20;
   long lVar21;
   bool bVar22;
   long local_70;
   uVar20 = *param_2;
   uVar5 = param_2[1];
   param_1[0xec] = 1;
   *(undefined8*)( param_1 + 0x3a ) = uVar20;
   *(undefined8*)( param_1 + 0x3c ) = uVar5;
   for (int i = 0; i < 12; i++) {
      uVar20 = param_2[( 2*i + 3 )];
      *(undefined8*)( param_1 + ( 4*i + 62 ) ) = param_2[( 2*i + 2 )];
      *(undefined8*)( param_1 + ( 4*i + 64 ) ) = uVar20;
   }

   *(undefined8*)( param_1 + 0x6e ) = param_2[0x1a];
   puVar1 = param_1 + 0x3b;
   if (param_1[0x52] == 1) {
      ZSTD_ldm_adjustParameters(param_1 + 0x52, puVar1);
   }

   local_70 = 0;
   lVar3 = *(long*)( param_1 + 0x6a );
   uVar7 = 1L << ( (byte)param_1[0x3b] & 0x3f );
   iVar13 = param_1[0x3f];
   if (param_3 < uVar7) {
      uVar7 = param_3;
   }

   if (uVar7 == 0) {
      uVar7 = 1;
   }

   uVar10 = *(ulong*)( param_1 + 0x6c );
   if (uVar7 <= *(ulong*)( param_1 + 0x6c )) {
      uVar10 = uVar7;
   }

   lVar21 = 0;
   if (param_6 == 1) {
      if (param_1[0x5a] == 0) {
         lVar8 = ( uVar10 >> 8 ) + uVar10;
         if (uVar10 < 0x20000) {
            lVar8 = lVar8 + ( 0x20000 - uVar10 >> 0xb );
         }

         lVar21 = lVar8 + 1;
         if (lVar8 == 0) {
            lVar21 = -0x47;
         }

      }

      local_70 = 0;
      if (param_1[0x59] == 0) {
         local_70 = uVar7 + uVar10;
      }

   }

   lVar8 = ZSTD_ldm_getMaxNbSeq(uVar10);
   if (( ( ulong )(*(long*)( param_1 + 0x324 ) - *(long*)( param_1 + 0x326 )) < 0xdf000001 ) && ( param_4 < 0x20000000 )) {
      bVar22 = param_1[0xed] == 0;
   }
 else {
      bVar22 = true;
   }

   uVar7 = ZSTD_estimateCCtxSize_usingCCtxParams_internal(puVar1, param_1 + 0x52, *(long*)( param_1 + 0xe2 ) != 0, param_1[0x5e], local_70, lVar21, param_3, *(long*)( param_1 + 0x6a ) != 0, *(undefined8*)( param_1 + 0x6c ));
   if (0xffffffffffffff88 < uVar7) {
      return uVar7;
   }

   if (*(long*)( param_1 + 0xe2 ) == 0) {
      param_1[0xb9] = param_1[0xb9] + 1;
   }

   pvVar9 = *(void**)( param_1 + 0xaa );
   if (( ( ( ulong )(*(long*)( param_1 + 0xb4 ) - *(long*)( param_1 + 0xb0 )) < uVar7 * 3 ) || ( (int)param_1[0xb9] < 0x81 ) ) && ( uVar7 <= *(ulong*)( param_1 + 0xac ) - (long)pvVar9 )) {
      *(undefined1*)( param_1 + 0xb8 ) = 0;
      *(ulong*)( param_1 + 0xb4 ) = *(ulong*)( param_1 + 0xac ) & 0xffffffffffffffc0;
      *(undefined8*)( param_1 + 0xb0 ) = *(undefined8*)( param_1 + 0xae );
      if (1 < (uint)param_1[0xba]) {
         param_1[0xba] = 1;
      }

   }
 else {
      if (*(long*)( param_1 + 0xe2 ) != 0) {
         return 0xffffffffffffffc0;
      }

      uVar20 = *(undefined8*)( param_1 + 0xde );
      *(undefined1(*) [16])( param_1 + 0xaa ) = (undefined1[16])0x0;
      *(undefined8*)( param_1 + 0xba ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( param_1 + ( 4*i + 174 ) ) = (undefined1[16])0;
      }

      if (pvVar9 != (void*)0x0) {
         if (*(code**)( param_1 + 0xdc ) == (code*)0x0) {
            free(pvVar9);
            uVar20 = *(undefined8*)( param_1 + 0xde );
         }
 else {
            ( **(code**)( param_1 + 0xdc ) )(uVar20, pvVar9);
            uVar20 = *(undefined8*)( param_1 + 0xde );
         }

      }

      if (*(code**)( param_1 + 0xda ) == (code*)0x0) {
         pvVar9 = malloc(uVar7);
      }
 else {
         pvVar9 = (void*)( **(code**)( param_1 + 0xda ) )(uVar20, uVar7);
      }

      if (pvVar9 == (void*)0x0) {
         return 0xffffffffffffffc0;
      }

      uVar7 = uVar7 + (long)pvVar9;
      *(void**)( param_1 + 0xaa ) = pvVar9;
      *(ulong*)( param_1 + 0xac ) = uVar7;
      *(void**)( param_1 + 0xae ) = pvVar9;
      *(ulong*)( param_1 + 0xb6 ) = uVar7 & 0xffffffffffffffc0;
      *(ulong*)( param_1 + 0xb4 ) = uVar7 & 0xffffffffffffffc0;
      uVar16 = (long)pvVar9 + 0x1600;
      *(void**)( param_1 + 0xb2 ) = pvVar9;
      *(undefined8*)( param_1 + 0xba ) = 0;
      *(void**)( param_1 + 0xb0 ) = pvVar9;
      param_1[0xb9] = 0;
      if (uVar7 < uVar16) {
         *(undefined1*)( param_1 + 0xb8 ) = 1;
         *(undefined8*)( param_1 + 800 ) = 0;
         return 0xffffffffffffffc0;
      }

      uVar14 = (long)pvVar9 + 0x2c00;
      *(ulong*)( param_1 + 0xb2 ) = uVar16;
      *(void**)( param_1 + 800 ) = pvVar9;
      *(ulong*)( param_1 + 0xae ) = uVar16;
      *(ulong*)( param_1 + 0xb0 ) = uVar16;
      if (uVar7 < uVar14) {
         *(undefined1*)( param_1 + 0xb8 ) = 1;
         *(undefined8*)( param_1 + 0x322 ) = 0;
         return 0xffffffffffffffc0;
      }

      uVar11 = (long)pvVar9 + 0x4ed8;
      *(ulong*)( param_1 + 0xb2 ) = uVar14;
      *(ulong*)( param_1 + 0x322 ) = uVar16;
      *(ulong*)( param_1 + 0xae ) = uVar14;
      *(ulong*)( param_1 + 0xb0 ) = uVar14;
      if (uVar7 < uVar11) {
         *(undefined1*)( param_1 + 0xb8 ) = 1;
         *(undefined8*)( param_1 + 0x370 ) = 0;
         return 0xffffffffffffffc0;
      }

      *(ulong*)( param_1 + 0xae ) = uVar11;
      bVar22 = true;
      *(ulong*)( param_1 + 0xb2 ) = uVar11;
      *(ulong*)( param_1 + 0x370 ) = uVar14;
      *(ulong*)( param_1 + 0xb0 ) = uVar11;
      *(undefined1*)( param_1 + 0xb8 ) = 0;
   }

   *(undefined8*)( param_1 + 0xc0 ) = 0;
   *(undefined8*)( param_1 + 0xc2 ) = 0;
   param_1[0x36e] = ( uint )(param_1[0x66] == 1);
   *(undefined8*)( param_1 + 0x364 ) = *(undefined8*)( param_1 + 0x3b );
   *(undefined8*)( param_1 + 0x366 ) = *(undefined8*)( param_1 + 0x3d );
   *(ulong*)( param_1 + 0xbe ) = param_3 + 1;
   *(undefined8*)( param_1 + 0x367 ) = *(undefined8*)( param_1 + 0x3e );
   *(undefined8*)( param_1 + 0x369 ) = *(undefined8*)( param_1 + 0x40 );
   if (param_3 == 0xffffffffffffffff) {
      param_1[0x42] = 0;
   }

   *(ulong*)( param_1 + 0xbc ) = uVar10;
   ZSTD_XXH64_reset(param_1 + 0xc4, 0);
   uVar6 = _LC3;
   uVar5 = _LC8;
   uVar20 = __LC4;
   lVar4 = *(long*)( param_1 + 800 );
   *param_1 = 1;
   param_1[0xa6] = 0;
   *(undefined8*)( param_1 + 0xa8 ) = 0;
   *(undefined8*)( lVar4 + 0x15f4 ) = uVar6;
   *(undefined8*)( lVar4 + 0x15e4 ) = uVar20;
   *(undefined8*)( lVar4 + 0x15ec ) = uVar5;
   uVar2 = param_1[0x5e];
   *(undefined4*)( lVar4 + 0x808 ) = 0;
   uVar7 = ZSTD_reset_matchState(param_1 + 0x324, param_1 + 0xaa, puVar1, uVar2, param_5, bVar22, 1);
   if (0xffffffffffffff88 < uVar7) {
      return uVar7;
   }

   uVar19 = param_1[0xba];
   uVar14 = ( ulong )(4 - ( lVar3 != 0 || iVar13 == 3 ));
   uVar7 = uVar10 / uVar14;
   uVar16 = uVar7 * 8 + 0x3f & 0xffffffffffffffc0;
   if (uVar19 < 2) {
      if (uVar19 != 0) {
         LAB_00103ca1:param_1[0xba] = 2;
         uVar19 = 2;
         goto LAB_0010374f;
      }

      pvVar9 = *(void**)( param_1 + 0xac );
      pvVar12 = *(void**)( param_1 + 0xae );
      *(void**)( param_1 + 0xb2 ) = pvVar12;
      *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
      pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
      if (pvVar17 <= pvVar9) {
         *(void**)( param_1 + 0xae ) = pvVar17;
         *(void**)( param_1 + 0xb0 ) = pvVar17;
         if (pvVar12 < pvVar17) {
            *(void**)( param_1 + 0xb2 ) = pvVar17;
         }

         goto LAB_00103ca1;
      }

      iVar13 = param_1[0x52];
      *(undefined8*)( param_1 + 0xee ) = 0;
      if (iVar13 == 1) {
         sVar18 = 8L << ( (byte)param_1[0x53] & 0x3f );
         uVar16 = sVar18 + 0x3f & 0xffffffffffffffc0;
         goto LAB_00104305;
      }

      if (*(long*)( param_1 + 0x6a ) != 0) goto LAB_001037ab;
      LAB_00103e20:*(void**)( param_1 + 0xb2 ) = pvVar12;
      *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
      pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
      if (pvVar17 <= pvVar9) {
         *(void**)( param_1 + 0xae ) = pvVar17;
         *(void**)( param_1 + 0xb0 ) = pvVar17;
         if (pvVar12 < pvVar17) {
            *(void**)( param_1 + 0xb2 ) = pvVar17;
         }

         LAB_00103d0f:param_1[0xba] = 3;
         uVar19 = 3;
         goto LAB_00103842;
      }

      *(undefined8*)( param_1 + 0xf2 ) = 0;
      *(ulong*)( param_1 + 0xfe ) = uVar10;
      param_1[0x372] = param_6;
      *(undefined8*)( param_1 + 0x374 ) = 0;
      *(long*)( param_1 + 0x376 ) = local_70;
      *(long*)( param_1 + 0x380 ) = lVar21;
      LAB_00103ea7:*(void**)( param_1 + 0xb2 ) = pvVar12;
      *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
      pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
      if (pvVar17 <= pvVar9) {
         *(void**)( param_1 + 0xae ) = pvVar17;
         *(void**)( param_1 + 0xb0 ) = pvVar17;
         if (pvVar12 < pvVar17) {
            *(void**)( param_1 + 0xb2 ) = pvVar17;
         }

         LAB_00103d30:param_1[0xba] = 3;
         uVar19 = 3;
         goto LAB_001038eb;
      }

      *(undefined8*)( param_1 + 0x37e ) = 0;
      if (iVar13 == 1) {
         sVar18 = 1L << ( (char)param_1[0x53] - (char)param_1[0x54] & 0x3fU );
         LAB_00104363:*(void**)( param_1 + 0xb2 ) = pvVar12;
         *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
         pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
         if (pvVar17 <= pvVar9) {
            *(void**)( param_1 + 0xae ) = pvVar17;
            *(void**)( param_1 + 0xb0 ) = pvVar17;
            if (pvVar12 < pvVar17) {
               *(void**)( param_1 + 0xb2 ) = pvVar17;
            }

            goto LAB_0010428f;
         }

         goto LAB_001043e5;
      }

      *(ulong*)( param_1 + 0xfc ) = uVar7;
      *(undefined8*)( param_1 + 0x316 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x318 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0x31c ) = (undefined1[16])0x0;
      LAB_00103f26:*(void**)( param_1 + 0xb2 ) = pvVar12;
      *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
      pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
      if (pvVar17 <= pvVar9) {
         *(void**)( param_1 + 0xae ) = pvVar17;
         *(void**)( param_1 + 0xb0 ) = pvVar17;
         if (pvVar12 < pvVar17) {
            *(void**)( param_1 + 0xb2 ) = pvVar17;
         }

         LAB_00103965:param_1[0xba] = 3;
         goto LAB_00103970;
      }

   }
 else {
      LAB_0010374f:if (uVar16 == 0) {
         LAB_00103d78:uVar16 = 0;
      }
 else {
         uVar16 = *(long*)( param_1 + 0xb4 ) - uVar16;
         if (uVar16 < *(ulong*)( param_1 + 0xb0 )) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            goto LAB_00103d78;
         }

         if (uVar16 < *(ulong*)( param_1 + 0xb2 )) {
            *(ulong*)( param_1 + 0xb2 ) = uVar16;
         }

         *(ulong*)( param_1 + 0xb4 ) = uVar16;
      }

      iVar13 = param_1[0x52];
      *(ulong*)( param_1 + 0xee ) = uVar16;
      if (iVar13 == 1) {
         sVar18 = 8L << ( (byte)param_1[0x53] & 0x3f );
         uVar16 = sVar18 + 0x3f & 0xffffffffffffffc0;
         if (uVar19 < 2) {
            if (uVar19 != 0) {
               LAB_00104268:param_1[0xba] = 2;
               goto LAB_00104028;
            }

            pvVar9 = *(void**)( param_1 + 0xac );
            pvVar12 = *(void**)( param_1 + 0xae );
            LAB_00104305:*(void**)( param_1 + 0xb2 ) = pvVar12;
            *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
            pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
            if (pvVar17 <= pvVar9) {
               *(void**)( param_1 + 0xae ) = pvVar17;
               *(void**)( param_1 + 0xb0 ) = pvVar17;
               if (pvVar12 < pvVar17) {
                  *(void**)( param_1 + 0xb2 ) = pvVar17;
               }

               goto LAB_00104268;
            }

            LAB_001043d6:pvVar9 = (void*)0x0;
         }
 else {
            LAB_00104028:if (uVar16 == 0) goto LAB_001043d6;
            pvVar9 = (void*)( *(long*)( param_1 + 0xb4 ) - uVar16 );
            if (pvVar9 < *(void**)( param_1 + 0xb0 )) {
               *(undefined1*)( param_1 + 0xb8 ) = 1;
               goto LAB_001043d6;
            }

            if (pvVar9 < *(void**)( param_1 + 0xb2 )) {
               *(void**)( param_1 + 0xb2 ) = pvVar9;
            }

            *(void**)( param_1 + 0xb4 ) = pvVar9;
         }

         *(void**)( param_1 + 0x10c ) = pvVar9;
         memset(pvVar9, 0, sVar18);
         uVar19 = param_1[0xba];
         uVar16 = lVar8 * 0xc + 0x3fU & 0xffffffffffffffc0;
         if (uVar19 < 2) {
            if (uVar19 != 0) {
               LAB_001040e7:param_1[0xba] = 2;
               uVar19 = 2;
               goto LAB_001040f7;
            }

            uVar11 = *(ulong*)( param_1 + 0xae );
            *(ulong*)( param_1 + 0xb2 ) = uVar11;
            *(ulong*)( param_1 + 0xb6 ) = *(ulong*)( param_1 + 0xac ) & 0xffffffffffffffc0;
            uVar15 = ( -(int)uVar11 & 0x3f ) + uVar11;
            if (uVar15 <= *(ulong*)( param_1 + 0xac )) {
               *(ulong*)( param_1 + 0xae ) = uVar15;
               *(ulong*)( param_1 + 0xb0 ) = uVar15;
               if (uVar11 < uVar15) {
                  *(ulong*)( param_1 + 0xb2 ) = uVar15;
               }

               goto LAB_001040e7;
            }

            LAB_001043c7:uVar16 = 0;
         }
 else {
            LAB_001040f7:if (uVar16 == 0) goto LAB_001043c7;
            uVar16 = *(long*)( param_1 + 0xb4 ) - uVar16;
            if (uVar16 < *(ulong*)( param_1 + 0xb0 )) {
               *(undefined1*)( param_1 + 0xb8 ) = 1;
               goto LAB_001043c7;
            }

            if (uVar16 < *(ulong*)( param_1 + 0xb2 )) {
               *(ulong*)( param_1 + 0xb2 ) = uVar16;
            }

            *(ulong*)( param_1 + 0xb4 ) = uVar16;
         }

         *(ulong*)( param_1 + 0x312 ) = uVar16;
         uVar20 = _LC5;
         iVar13 = param_1[0x52];
         *(undefined8*)( param_1 + 0x10a ) = 0;
         *(long*)( param_1 + 0x314 ) = lVar8;
         *(undefined**)( param_1 + 0x106 ) = &_LC2;
         *(undefined8*)( param_1 + 0x108 ) = uVar20;
         param_1[0x10e] = 0;
         *(undefined8*)( param_1 + 0x102 ) = 0x10e29e;
         *(undefined**)( param_1 + 0x104 ) = &_LC2;
      }

      if (*(long*)( param_1 + 0x6a ) != 0) {
         LAB_001037ab:lVar3 = uVar10 / 3 + 2 + ( uVar10 >> 10 );
         *(long*)( param_1 + 0x51e ) = lVar3;
         uVar16 = lVar3 * 0x10 + 0x3fU & 0xffffffffffffffc0;
         if (uVar19 < 2) {
            if (uVar19 == 0) {
               pvVar9 = *(void**)( param_1 + 0xac );
               pvVar12 = *(void**)( param_1 + 0xae );
               *(void**)( param_1 + 0xb2 ) = pvVar12;
               *(ulong*)( param_1 + 0xb6 ) = (ulong)pvVar9 & 0xffffffffffffffc0;
               pvVar17 = (void*)( ( ulong )(-(int)pvVar12 & 0x3f) + (long)pvVar12 );
               if (pvVar9 < pvVar17) {
                  *(undefined8*)( param_1 + 0x51c ) = 0;
                  goto LAB_00103e20;
               }

               *(void**)( param_1 + 0xae ) = pvVar17;
               *(void**)( param_1 + 0xb0 ) = pvVar17;
               if (pvVar12 < pvVar17) {
                  *(void**)( param_1 + 0xb2 ) = pvVar17;
               }

            }

            param_1[0xba] = 2;
            uVar19 = 2;
         }

         if (uVar16 == 0) {
            LAB_001041c4:uVar16 = 0;
         }
 else {
            uVar16 = *(long*)( param_1 + 0xb4 ) - uVar16;
            if (uVar16 < *(ulong*)( param_1 + 0xb0 )) {
               *(undefined1*)( param_1 + 0xb8 ) = 1;
               goto LAB_001041c4;
            }

            if (uVar16 < *(ulong*)( param_1 + 0xb2 )) {
               *(ulong*)( param_1 + 0xb2 ) = uVar16;
            }

            *(ulong*)( param_1 + 0xb4 ) = uVar16;
         }

         *(ulong*)( param_1 + 0x51c ) = uVar16;
      }

      if (uVar19 < 3) {
         if (uVar19 == 0) {
            pvVar9 = *(void**)( param_1 + 0xac );
            pvVar12 = *(void**)( param_1 + 0xae );
            goto LAB_00103e20;
         }

         pvVar17 = *(void**)( param_1 + 0xb0 );
         goto LAB_00103d0f;
      }

      pvVar17 = *(void**)( param_1 + 0xb0 );
      LAB_00103842:pvVar9 = (void*)( ( -0x20 - uVar10 ) + *(long*)( param_1 + 0xb4 ) );
      if (pvVar9 < pvVar17) {
         *(undefined1*)( param_1 + 0xb8 ) = 1;
         pvVar9 = (void*)0x0;
      }
 else {
         if (pvVar9 < *(void**)( param_1 + 0xb2 )) {
            *(void**)( param_1 + 0xb2 ) = pvVar9;
         }

         *(void**)( param_1 + 0xb4 ) = pvVar9;
      }

      *(void**)( param_1 + 0xf2 ) = pvVar9;
      *(ulong*)( param_1 + 0xfe ) = uVar10;
      param_1[0x372] = param_6;
      *(long*)( param_1 + 0x376 ) = local_70;
      if (local_70 == 0) {
         LAB_00103d50:uVar16 = 0;
      }
 else {
         uVar16 = *(long*)( param_1 + 0xb4 ) - local_70;
         if (uVar16 < *(ulong*)( param_1 + 0xb0 )) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            goto LAB_00103d50;
         }

         if (uVar16 < *(ulong*)( param_1 + 0xb2 )) {
            *(ulong*)( param_1 + 0xb2 ) = uVar16;
         }

         *(ulong*)( param_1 + 0xb4 ) = uVar16;
      }

      *(ulong*)( param_1 + 0x374 ) = uVar16;
      *(long*)( param_1 + 0x380 ) = lVar21;
      if (uVar19 < 3) {
         if (uVar19 == 0) {
            pvVar9 = *(void**)( param_1 + 0xac );
            pvVar12 = *(void**)( param_1 + 0xae );
            goto LAB_00103ea7;
         }

         goto LAB_00103d30;
      }

      LAB_001038eb:if (lVar21 == 0) {
         LAB_00103d68:uVar16 = 0;
      }
 else {
         uVar16 = *(long*)( param_1 + 0xb4 ) - lVar21;
         if (uVar16 < *(ulong*)( param_1 + 0xb0 )) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            goto LAB_00103d68;
         }

         if (uVar16 < *(ulong*)( param_1 + 0xb2 )) {
            *(ulong*)( param_1 + 0xb2 ) = uVar16;
         }

         *(ulong*)( param_1 + 0xb4 ) = uVar16;
      }

      *(ulong*)( param_1 + 0x37e ) = uVar16;
      if (iVar13 == 1) {
         sVar18 = 1L << ( (char)param_1[0x53] - (char)param_1[0x54] & 0x3fU );
         if (uVar19 < 3) {
            if (uVar19 == 0) {
               pvVar9 = *(void**)( param_1 + 0xac );
               pvVar12 = *(void**)( param_1 + 0xae );
               goto LAB_00104363;
            }

            pvVar17 = *(void**)( param_1 + 0xb0 );
            LAB_0010428f:param_1[0xba] = 3;
         }
 else {
            pvVar17 = *(void**)( param_1 + 0xb0 );
         }

         pvVar9 = (void*)( *(long*)( param_1 + 0xb4 ) - sVar18 );
         if (pvVar9 < pvVar17) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            LAB_001043e5:pvVar9 = (void*)0x0;
         }
 else {
            if (pvVar9 < *(void**)( param_1 + 0xb2 )) {
               *(void**)( param_1 + 0xb2 ) = pvVar9;
            }

            *(void**)( param_1 + 0xb4 ) = pvVar9;
         }

         *(void**)( param_1 + 0x110 ) = pvVar9;
         memset(pvVar9, 0, sVar18);
         uVar19 = param_1[0xba];
      }

      *(ulong*)( param_1 + 0xfc ) = uVar7;
      *(undefined8*)( param_1 + 0x316 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x318 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0x31c ) = (undefined1[16])0x0;
      if (uVar19 < 3) {
         if (uVar19 == 0) {
            pvVar9 = *(void**)( param_1 + 0xac );
            pvVar12 = *(void**)( param_1 + 0xae );
            goto LAB_00103f26;
         }

         goto LAB_00103965;
      }

      LAB_00103970:if (uVar14 <= uVar10) {
         uVar10 = *(ulong*)( param_1 + 0xb4 );
         uVar16 = *(ulong*)( param_1 + 0xb0 );
         uVar14 = uVar10 - uVar7;
         if (uVar14 < uVar16) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            uVar14 = 0;
         }
 else {
            if (uVar14 < *(ulong*)( param_1 + 0xb2 )) {
               *(ulong*)( param_1 + 0xb2 ) = uVar14;
            }

            *(ulong*)( param_1 + 0xb4 ) = uVar14;
            uVar10 = uVar14;
         }

         *(ulong*)( param_1 + 0xf6 ) = uVar14;
         uVar14 = uVar10 + -uVar7;
         if (uVar14 < uVar16) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            *(undefined8*)( param_1 + 0xf8 ) = 0;
         }
 else {
            if (uVar14 < *(ulong*)( param_1 + 0xb2 )) {
               *(ulong*)( param_1 + 0xb2 ) = uVar14;
            }

            *(ulong*)( param_1 + 0xb4 ) = uVar14;
            *(ulong*)( param_1 + 0xf8 ) = uVar14;
            uVar10 = uVar14;
         }

         uVar10 = uVar10 + -uVar7;
         if (uVar10 < uVar16) {
            *(undefined1*)( param_1 + 0xb8 ) = 1;
            uVar10 = 0;
         }
 else {
            if (uVar10 < *(ulong*)( param_1 + 0xb2 )) {
               *(ulong*)( param_1 + 0xb2 ) = uVar10;
            }

            *(ulong*)( param_1 + 0xb4 ) = uVar10;
         }

         goto LAB_00103a0e;
      }

   }

   *(undefined8*)( param_1 + 0xf6 ) = 0;
   uVar10 = 0;
   *(undefined8*)( param_1 + 0xf8 ) = 0;
   LAB_00103a0e:*(ulong*)( param_1 + 0xfa ) = uVar10;
   param_1[0xed] = 1;
   return 0;
}
long ZSTD_compressBound(ulong param_1) {
   long lVar1;
   lVar1 = -0x48;
   if (param_1 < 0xff00ff00ff00ff00) {
      lVar1 = ( param_1 >> 8 ) + param_1;
      if (param_1 < 0x20000) {
         lVar1 = lVar1 + ( 0x20000 - param_1 >> 0xb );
      }

      if (lVar1 == 0) {
         lVar1 = -0x48;
      }

   }

   return lVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010466d) *//* WARNING: Removing unreachable block (ram,0x0010465f) */undefined8 *ZSTD_initStaticCCtx(undefined8 *param_1, ulong param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   uint *puVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   uint uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong *puVar12;
   long in_FS_OFFSET;
   undefined1 auStack_28[32];
   uVar6 = _LC8;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x1480 < param_2) {
      if (( (ulong)param_1 & 7 ) == 0) {
         puVar2 = (undefined8*)( (long)param_1 + param_2 );
         puVar1 = param_1 + 0x290;
         uVar11 = (ulong)puVar2 & 0xffffffffffffffc0;
         auStack_28[8] = 0;
         auStack_28._0_8_ = uVar11;
         if (( puVar1 <= puVar2 ) && ( param_1 != (undefined8*)0x0 )) {
            *param_1 = 0;
            param_1[0x28f] = 0;
            puVar12 = (ulong*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
            for (uVar10 = ( ulong )(( (uint)param_1 - (int)(ulong*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x1480 >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
               *puVar12 = ( ulong )((uint)param_1 & 7);
               puVar12 = puVar12 + 1;
            }

            param_1[0x71] = param_2;
            auStack_28._12_4_ = 0;
            param_1[0x55] = param_1;
            param_1[0x56] = puVar2;
            param_1[0x5d] = uVar6;
            for (int i = 0; i < 3; i++) {
               param_1[( i + 87 )] = puVar1;
            }

            param_1[0x5a] = uVar11;
            param_1[0x5b] = uVar11;
            param_1[0x5c] = auStack_28._8_8_;
            if (0x4ed7 < uVar11 - (long)puVar1) {
               puVar7 = param_1 + 0x550;
               if (puVar2 < puVar7) {
                  *(undefined1*)( param_1 + 0x5c ) = 1;
                  puVar8 = (undefined8*)0x0;
                  puVar7 = puVar1;
               }
 else {
                  param_1[0x59] = puVar7;
                  param_1[0x57] = puVar7;
                  param_1[0x58] = puVar7;
                  puVar8 = puVar1;
               }

               puVar1 = puVar7 + 0x2c0;
               param_1[400] = puVar8;
               if (puVar2 < puVar1) {
                  *(undefined1*)( param_1 + 0x5c ) = 1;
                  puVar8 = (undefined8*)0x0;
               }
 else {
                  param_1[0x59] = puVar1;
                  param_1[0x57] = puVar1;
                  param_1[0x58] = puVar1;
                  puVar8 = puVar7;
                  puVar7 = puVar1;
               }

               param_1[0x191] = puVar8;
               puVar1 = puVar7 + 0x45b;
               if (puVar2 < puVar1) {
                  *(undefined1*)( param_1 + 0x5c ) = 1;
                  puVar7 = (undefined8*)0x0;
               }
 else {
                  param_1[0x59] = puVar1;
                  param_1[0x57] = puVar1;
                  param_1[0x58] = puVar1;
               }

               param_1[0x1b8] = puVar7;
               puVar4 = (uint*)cpuid_basic_info(0);
               uVar9 = 0;
               if (6 < *puVar4) {
                  lVar5 = cpuid_Extended_Feature_Enumeration_info(7);
                  uVar9 = *(uint*)( lVar5 + 4 ) >> 8 & 1;
               }

               *(uint*)( param_1 + 1 ) = uVar9;
               goto LAB_00104682;
            }

         }

      }

   }

   param_1 = (undefined8*)0x0;
   LAB_00104682:if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
long ZSTD_sizeof_CCtx(long param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   if (param_1 == 0) {
      lVar3 = 0;
   }
 else {
      lVar3 = 0x1480;
      if (*(long*)( param_1 + 0x2a8 ) == param_1) {
         lVar3 = 0;
      }

      lVar3 = ( *(long*)( param_1 + 0x2b0 ) - *(long*)( param_1 + 0x2a8 ) ) + lVar3;
      lVar1 = *(long*)( param_1 + 0xe68 );
      if (*(long*)( param_1 + 0xe48 ) != 0) {
         lVar3 = lVar3 + *(long*)( param_1 + 0xe58 );
      }

      if (lVar1 != 0) {
         lVar2 = 0x17c0;
         if (lVar1 == *(long*)( lVar1 + 0x20 )) {
            lVar2 = 0;
         }

         return lVar3 + ( *(long*)( lVar1 + 0x28 ) - *(long*)( lVar1 + 0x20 ) ) + lVar2;
      }

   }

   return lVar3;
}
long ZSTD_sizeof_CStream(long param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   if (param_1 == 0) {
      lVar3 = 0;
   }
 else {
      lVar3 = 0x1480;
      if (param_1 == *(long*)( param_1 + 0x2a8 )) {
         lVar3 = 0;
      }

      lVar3 = ( *(long*)( param_1 + 0x2b0 ) - *(long*)( param_1 + 0x2a8 ) ) + lVar3;
      lVar1 = *(long*)( param_1 + 0xe68 );
      if (*(long*)( param_1 + 0xe48 ) != 0) {
         lVar3 = lVar3 + *(long*)( param_1 + 0xe58 );
      }

      if (lVar1 != 0) {
         lVar2 = 0x17c0;
         if (lVar1 == *(long*)( lVar1 + 0x20 )) {
            lVar2 = 0;
         }

         return lVar3 + ( *(long*)( lVar1 + 0x28 ) - *(long*)( lVar1 + 0x20 ) ) + lVar2;
      }

   }

   return lVar3;
}
long ZSTD_getSeqStore(long param_1) {
   return param_1 + 0x3b8;
}
void ZSTD_createCCtxParams(void) {
   void *pvVar1;
   pvVar1 = calloc(1, 0xd8);
   if (pvVar1 != (void*)0x0) {
      *(undefined4*)( (long)pvVar1 + 0x2c ) = 3;
      *(undefined4*)( (long)pvVar1 + 0x20 ) = 1;
      *(undefined8*)( (long)pvVar1 + 0xa8 ) = 0;
      *(undefined1(*) [16])( (long)pvVar1 + 0x98 ) = (undefined1[16])0x0;
   }

   return;
}
undefined8 ZSTD_freeCCtxParams(void *param_1) {
   if (param_1 != (void*)0x0) {
      if (*(code**)( (long)param_1 + 0xa0 ) == (code*)0x0) {
         free(param_1);
      }
 else {
         ( **(code**)( (long)param_1 + 0xa0 ) )(*(undefined8*)( (long)param_1 + 0xa8 ));
      }

      return 0;
   }

   return 0;
}
undefined8 ZSTD_CCtxParams_reset(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   if (param_1 != (undefined8*)0x0) {
      *param_1 = 0;
      param_1[0x1a] = 0;
      puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xd8U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + 1;
      }

      *(undefined4*)( (long)param_1 + 0x2c ) = 3;
      *(undefined4*)( param_1 + 4 ) = 1;
      return 0;
   }

   return 0xffffffffffffffff;
}
undefined8 ZSTD_CCtxParams_init(undefined8 *param_1, undefined4 param_2) {
   ulong uVar1;
   undefined8 *puVar2;
   if (param_1 != (undefined8*)0x0) {
      *param_1 = 0;
      param_1[0x1a] = 0;
      puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xd8U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + 1;
      }

      *(undefined4*)( (long)param_1 + 0x2c ) = param_2;
      *(undefined4*)( param_1 + 4 ) = 1;
      return 0;
   }

   return 0xffffffffffffffff;
}
undefined1[16];ZSTD_cParam_getBounds(uint param_1) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   bool bVar5;
   undefined1 auVar6[16];
   if (param_1 < 0x193) {
      if (399 < param_1) {
         uVar1 = 0;
         uVar4 = 0;
         uVar3 = 0;
         goto LAB_0010498b;
      }

      if (param_1 == 10) {
         switchD_00104977_caseD_c8:return ZEXT816(0x100000000) << 0x40;
      }

      switch (param_1) {
         case 100:
      uVar1 = 0;
      uVar4 = 0xfffe0000;
      uVar3 = 0x16;
      break;
         case 0x65:
      uVar1 = 0;
      uVar4 = 10;
      uVar3 = 0x1f;
      break;
         case 0x66:
         case 0x67:
         case 0xa1:
      uVar1 = 0;
      uVar4 = 6;
      uVar3 = 0x1e;
      break;
         case 0x68:
      uVar1 = 0;
      uVar4 = 1;
      uVar3 = 0x1e;
      break;
         case 0x69:
      uVar1 = 0;
      uVar4 = 3;
      uVar3 = 7;
      break;
         case 0x6a:
      uVar1 = 0;
      uVar4 = 0;
      uVar3 = 0x20000;
      break;
         case 0x6b:
      uVar1 = 0;
      uVar4 = 1;
      uVar3 = 9;
      break;
         default:
      goto switchD_00104977_caseD_6c;
         case 0x82:
      uVar1 = 0;
      uVar4 = 0x53c;
      uVar3 = 0x20000;
      break;
         case 0xa0:
      goto switchD_00104977_caseD_a0;
         case 0xa2:
      uVar1 = 0;
      uVar4 = 4;
      uVar3 = 0x1000;
      break;
         case 0xa3:
      uVar1 = 0;
      uVar4 = 1;
      uVar3 = 8;
      break;
         case 0xa4:
      uVar1 = 0;
      uVar4 = 0;
      uVar3 = 0x19;
      break;
         case 200:
         case 0xc9:
         case 0xca:
      goto switchD_00104977_caseD_c8;
      }

   }
 else {
      if (param_1 < 0x3f9) {
         if (param_1 < 0x3ed) {
            if (param_1 == 1000) goto switchD_00104977_caseD_c8;
            if (param_1 < 0x3e9) {
               uVar1 = 0xffffffffffffffd8;
               uVar4 = 0;
               if (param_1 == 500) {
                  uVar1 = 0;
               }

               uVar3 = ( ulong )(param_1 == 500);
               goto LAB_0010498b;
            }

            if (param_1 != 0x3ea) {
               if (param_1 == 0x3ec) {
                  uVar1 = 0;
                  uVar4 = 0;
                  uVar3 = 0x7fffffff;
               }
 else {
                  bVar5 = param_1 == 0x3e9;
                  uVar1 = 0xffffffffffffffd8;
                  uVar4 = 0;
                  if (bVar5) {
                     uVar1 = 0;
                  }

                  uVar3 = ( ulong )((uint)bVar5 + (uint)bVar5 * 2);
               }

               goto LAB_0010498b;
            }

         }
 else {
            uVar2 = 1L << ( (char)param_1 + 0x13U & 0x3f );
            if (( uVar2 & 0x29f ) != 0) goto switchD_00104977_caseD_c8;
            uVar4 = 0x400;
            uVar3 = 0x20000;
            uVar1 = ( ulong )((uint)uVar2 & 0x960);
            if (( uVar2 & 0x960 ) == 0) goto LAB_0010498b;
         }

         switchD_00104977_caseD_a0:uVar1 = 0;
         uVar4 = 0;
         uVar3 = 2;
         goto LAB_0010498b;
      }

      switchD_00104977_caseD_6c:uVar1 = 0xffffffffffffffd8;
      uVar4 = 0;
      uVar3 = 0;
   }

   LAB_0010498b:auVar6._8_8_ = uVar4 | uVar3 << 0x20;
   auVar6._0_8_ = uVar1;
   return auVar6;
}
ulong ZSTD_CCtxParams_setParameter(uint *param_1, uint param_2, ulong param_3) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   undefined1 auVar4[16];
   uVar2 = param_3 & 0xffffffff;
   uVar3 = (uint)param_3;
   if (param_2 < 0x193) {
      if (param_2 < 400) {
         if (param_2 == 10) {
            auVar4 = ZSTD_cParam_getBounds(10);
            if (0xffffffffffffff88 < auVar4._0_8_) {
               return 0xffffffffffffffd6;
            }

            if ((int)uVar3 < auVar4._8_4_) {
               return 0xffffffffffffffd6;
            }

            if (auVar4._12_4_ < (int)uVar3) {
               return 0xffffffffffffffd6;
            }

            *param_1 = uVar3;
            return (ulong)uVar3;
         }

         switch (param_2) {
            case 100:
        auVar4 = ZSTD_cParam_getBounds(100);
        if (0xffffffffffffff88 < auVar4._0_8_) {
          return auVar4._0_8_;
        }
        uVar1 = auVar4._8_4_;
        if ((int)auVar4._8_4_ <= (int)uVar3) {
          uVar1 = uVar3;
        }
        if ((int)auVar4._12_4_ < (int)uVar1) {
          uVar1 = auVar4._12_4_;
        }
        if (uVar1 != 0) {
          param_1[0xb] = uVar1;
          if ((int)uVar1 < 0) {
            return 0;
          }
          return (long)(int)uVar1;
        }
        param_1[0xb] = 3;
        return 3;
            case 0x65:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0x65), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[1] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0x66:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0x66), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[3] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0x67:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0x67), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[2] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0x68:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0x68), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar3)) && ((int)uVar3 <= auVar4._12_4_)))) {
          param_1[4] = uVar3;
          return (long)(int)uVar3;
        }
        break;
            case 0x69:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0x69), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[5] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0x6a:
        auVar4 = ZSTD_cParam_getBounds(0x6a);
        if (((auVar4._0_8_ < 0xffffffffffffff89) && (auVar4._8_4_ <= (int)uVar3)) &&
           ((int)uVar3 <= auVar4._12_4_)) {
          param_1[6] = uVar3;
          return (ulong)uVar3;
        }
        break;
            case 0x6b:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0x6b), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[7] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            default:
        goto LAB_00104b87;
            case 0x82:
        if (uVar3 == 0) {
          uVar2 = 0;
LAB_001051c4:
          *(ulong *)(param_1 + 0xe) = uVar2;
          return uVar2;
        }
        auVar4 = ZSTD_cParam_getBounds(0x82);
        if (auVar4._0_8_ < 0xffffffffffffff89) {
          uVar1 = 0x53c;
          if (0x53b < (int)uVar3) {
            uVar1 = uVar3;
          }
          if ((auVar4._8_4_ <= (int)uVar1) &&
             (uVar2 = (ulong)(int)uVar1, (int)uVar1 <= auVar4._12_4_)) goto LAB_001051c4;
        }
        break;
            case 0xa0:
        auVar4 = ZSTD_cParam_getBounds(0xa0);
        if (((auVar4._0_8_ < 0xffffffffffffff89) && (auVar4._8_4_ <= (int)uVar3)) &&
           ((int)uVar3 <= auVar4._12_4_)) {
          param_1[0x18] = uVar3;
          return (ulong)uVar3;
        }
        break;
            case 0xa1:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0xa1), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[0x19] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0xa2:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0xa2), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[0x1b] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0xa3:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0xa3), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[0x1a] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 0xa4:
        if ((uVar3 == 0) ||
           (((auVar4 = ZSTD_cParam_getBounds(0xa4), auVar4._0_8_ < 0xffffffffffffff89 &&
             (auVar4._8_4_ <= (int)uVar2)) && ((int)uVar2 <= auVar4._12_4_)))) {
          param_1[0x1c] = (uint)uVar2;
          return uVar2 & 0xffffffff;
        }
        break;
            case 200:
        param_1[8] = (uint)(uVar3 != 0);
        return (ulong)(uVar3 != 0);
            case 0xc9:
        param_1[9] = (uint)(uVar3 != 0);
        return (ulong)(uVar3 != 0);
            case 0xca:
        param_1[10] = (uint)(uVar3 == 0);
        return (ulong)(uVar3 != 0);
         }

         return 0xffffffffffffffd6;
      }

   }
 else if (param_2 != 500) {
      switch (param_2) {
         case 1000:
      param_1[0xc] = (uint)(uVar3 != 0);
      return (ulong)(uVar3 != 0);
         case 0x3e9:
      auVar4 = ZSTD_cParam_getBounds(0x3e9);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x11] = uVar3;
      return (ulong)uVar3;
         case 0x3ea:
      auVar4 = ZSTD_cParam_getBounds(0x3ea);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x12] = uVar3;
      return (ulong)uVar3;
         case 0x3ec:
      if (uVar3 != 0) {
        auVar4 = ZSTD_cParam_getBounds(0x3ec);
        if (0xffffffffffffff88 < auVar4._0_8_) {
          return 0xffffffffffffffd6;
        }
        if ((int)uVar3 < auVar4._8_4_) {
          return 0xffffffffffffffd6;
        }
        if (auVar4._12_4_ < (int)uVar3) {
          return 0xffffffffffffffd6;
        }
      }
      param_1[0x10] = uVar3;
      return (long)(int)uVar3;
         case 0x3ed:
      param_1[0x1e] = (uint)(uVar3 != 0);
      return (ulong)(uVar3 != 0);
         case 0x3ee:
      auVar4 = ZSTD_cParam_getBounds(0x3ee);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x1f] = uVar3;
      return (ulong)uVar3;
         case 0x3ef:
      auVar4 = ZSTD_cParam_getBounds(0x3ef);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x20] = uVar3;
      return (ulong)uVar3;
         case 0x3f0:
      auVar4 = ZSTD_cParam_getBounds(0x3f0);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x21] = uVar3;
      return (ulong)uVar3;
         case 0x3f1:
      auVar4 = ZSTD_cParam_getBounds(0x3f1);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x22] = uVar3;
      return (long)(int)uVar3;
         case 0x3f2:
      auVar4 = ZSTD_cParam_getBounds(0x3f2);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x23] = uVar3;
      return (ulong)uVar3;
         case 0x3f3:
      auVar4 = ZSTD_cParam_getBounds(0x3f3);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x24] = uVar3;
      return (ulong)uVar3;
         case 0x3f4:
      auVar4 = ZSTD_cParam_getBounds(0x3f4);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x25] = (uint)(uVar3 != 0);
      return (ulong)(uVar3 != 0);
         case 0x3f5:
      auVar4 = ZSTD_cParam_getBounds(0x3f5);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x2c] = uVar3;
      return (ulong)uVar3;
         case 0x3f6:
      auVar4 = ZSTD_cParam_getBounds(0x3f6);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x2d] = uVar3;
      return (long)(int)uVar3;
         case 0x3f7:
      if (uVar3 != 0) {
        auVar4 = ZSTD_cParam_getBounds(0x3f7);
        if (0xffffffffffffff88 < auVar4._0_8_) {
          return 0xffffffffffffffd6;
        }
        if ((int)uVar3 < auVar4._8_4_) {
          return 0xffffffffffffffd6;
        }
        if (auVar4._12_4_ < (int)uVar3) {
          return 0xffffffffffffffd6;
        }
      }
      *(long *)(param_1 + 0x32) = (long)(int)uVar3;
      return (long)(int)uVar3;
         case 0x3f8:
      auVar4 = ZSTD_cParam_getBounds(0x3f8);
      if (0xffffffffffffff88 < auVar4._0_8_) {
        return 0xffffffffffffffd6;
      }
      if ((int)uVar3 < auVar4._8_4_) {
        return 0xffffffffffffffd6;
      }
      if (auVar4._12_4_ < (int)uVar3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x34] = uVar3;
      return (ulong)uVar3;
      }

      LAB_00104b87:return 0xffffffffffffffd8;
   }

   if (uVar3 == 0) {
      return 0;
   }

   return 0xffffffffffffffd8;
}
undefined8 ZSTD_CCtx_setParameter(long param_1, uint param_2, int param_3) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      if (param_2 == 400) {
         if (( param_3 != 0 ) && ( *(long*)( param_1 + 0x388 ) != 0 )) {
            return 0xffffffffffffffd8;
         }

      }
 else if (param_2 < 0x191) {
         if (param_2 != 0x82) {
            if (param_2 < 0x83) {
               if (( param_2 != 10 ) && ( 7 < param_2 - 100 )) {
                  return 0xffffffffffffffd8;
               }

            }
 else if (param_2 < 0xa5) {
               if (param_2 < 0xa0) {
                  return 0xffffffffffffffd8;
               }

            }
 else if (2 < param_2 - 200) {
               return 0xffffffffffffffd8;
            }

         }

      }
 else if (param_2 < 0x3eb) {
         if (( ( param_2 < 1000 ) && ( 0x192 < param_2 ) ) && ( param_2 != 500 )) {
            return 0xffffffffffffffd8;
         }

      }
 else if (0xc < param_2 - 0x3ec) {
         return 0xffffffffffffffd8;
      }

   }
 else {
      if (( param_2 != 100 ) && ( 5 < param_2 - 0x66 )) {
         return 0xffffffffffffffc4;
      }

      *(undefined4*)( param_1 + 4 ) = 1;
   }

   uVar1 = ZSTD_CCtxParams_setParameter(param_1 + 0x10);
   return uVar1;
}
undefined8 ZSTD_CCtxParams_getParameter(uint *param_1, uint param_2, uint *param_3) {
   if (param_2 < 0xcb) {
      if (param_2 < 100) {
         if (param_2 != 10) {
            return 0xffffffffffffffd8;
         }

         *param_3 = *param_1;
      }
 else {
         switch (param_2) {
            case 100:
        *param_3 = param_1[0xb];
        break;
            case 0x65:
        *param_3 = param_1[1];
        break;
            case 0x66:
        *param_3 = param_1[3];
        break;
            case 0x67:
        *param_3 = param_1[2];
        break;
            case 0x68:
        *param_3 = param_1[4];
        break;
            case 0x69:
        *param_3 = param_1[5];
        break;
            case 0x6a:
        *param_3 = param_1[6];
        break;
            case 0x6b:
        *param_3 = param_1[7];
        break;
            default:
switchD_00105497_caseD_6c:
        return 0xffffffffffffffd8;
            case 0x82:
        *param_3 = (uint)*(undefined8 *)(param_1 + 0xe);
        break;
            case 0xa0:
        *param_3 = param_1[0x18];
        break;
            case 0xa1:
        *param_3 = param_1[0x19];
        break;
            case 0xa2:
        *param_3 = param_1[0x1b];
        break;
            case 0xa3:
        *param_3 = param_1[0x1a];
        break;
            case 0xa4:
        *param_3 = param_1[0x1c];
        break;
            case 200:
        *param_3 = param_1[8];
        break;
            case 0xc9:
        *param_3 = param_1[9];
        break;
            case 0xca:
        *param_3 = (uint)(param_1[10] == 0);
         }

      }

   }
 else if (param_2 == 400) {
      *param_3 = param_1[0x13];
   }
 else {
      switch (param_2) {
         case 1000:
      *param_3 = param_1[0xc];
      break;
         case 0x3e9:
      *param_3 = param_1[0x11];
      break;
         case 0x3ea:
      *param_3 = param_1[0x12];
      break;
         default:
      goto switchD_00105497_caseD_6c;
         case 0x3ec:
      *param_3 = param_1[0x10];
      break;
         case 0x3ed:
      *param_3 = param_1[0x1e];
      break;
         case 0x3ee:
      *param_3 = param_1[0x1f];
      break;
         case 0x3ef:
      *param_3 = param_1[0x20];
      break;
         case 0x3f0:
      *param_3 = param_1[0x21];
      break;
         case 0x3f1:
      *param_3 = param_1[0x22];
      break;
         case 0x3f2:
      *param_3 = param_1[0x23];
      break;
         case 0x3f3:
      *param_3 = param_1[0x24];
      break;
         case 0x3f4:
      *param_3 = param_1[0x25];
      break;
         case 0x3f5:
      *param_3 = param_1[0x2c];
      break;
         case 0x3f6:
      *param_3 = param_1[0x2d];
      break;
         case 0x3f7:
      *param_3 = (uint)*(undefined8 *)(param_1 + 0x32);
      break;
         case 0x3f8:
      *param_3 = param_1[0x34];
      }

   }

   return 0;
}
void ZSTD_CCtx_getParameter(long param_1) {
   ZSTD_CCtxParams_getParameter(param_1 + 0x10);
   return;
}
undefined8 ZSTD_CCtx_setParametersUsingCCtxParams(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = 0xffffffffffffffc4;
   if (( *(int*)( param_1 + 0xe18 ) == 0 ) && ( *(long*)( param_1 + 0xe70 ) == 0 )) {
      uVar1 = param_2[1];
      *(undefined8*)( param_1 + 0x10 ) = *param_2;
      *(undefined8*)( param_1 + 0x18 ) = uVar1;
      for (int i = 0; i < 12; i++) {
         uVar1 = param_2[( 2*i + 3 )];
         *(undefined8*)( param_1 + ( 16*i + 32 ) ) = param_2[( 2*i + 2 )];
         *(undefined8*)( param_1 + ( 16*i + 40 ) ) = uVar1;
      }

      *(undefined8*)( param_1 + 0xe0 ) = param_2[0x1a];
      uVar1 = 0;
   }

   return uVar1;
}
ulong ZSTD_CCtx_setFParams(long param_1, undefined8 param_2, int param_3) {
   ulong uVar1;
   undefined4 local_18;
   undefined4 uStack_14;
   uVar1 = 0xffffffffffffffc4;
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      local_18 = (int)param_2;
      param_1 = param_1 + 0x10;
      uVar1 = ZSTD_CCtxParams_setParameter(param_1, 200, local_18 != 0);
      if (uVar1 < 0xffffffffffffff89) {
         uStack_14 = (int)( (ulong)param_2 >> 0x20 );
         uVar1 = ZSTD_CCtxParams_setParameter(param_1, 0xc9, uStack_14 != 0);
         if (uVar1 < 0xffffffffffffff89) {
            uVar1 = ZSTD_CCtxParams_setParameter(param_1, 0xca, param_3 == 0);
            if (uVar1 < 0xffffffffffffff89) {
               uVar1 = 0;
            }

            return uVar1;
         }

      }

   }

   return uVar1;
}
undefined8 ZSTD_CCtx_setPledgedSrcSize(long param_1, long param_2) {
   undefined8 uVar1;
   uVar1 = 0xffffffffffffffc4;
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      uVar1 = 0;
      *(long*)( param_1 + 0x2f8 ) = param_2 + 1;
   }

   return uVar1;
}
undefined8 ZSTD_CCtx_refThreadPool(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   uVar1 = 0xffffffffffffffc4;
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      *(undefined8*)( param_1 + 0x380 ) = param_2;
      uVar1 = 0;
   }

   return uVar1;
}
undefined8 ZSTD_checkCParams(void) {
   undefined1 auVar1[16];
   int iStack0000000000000008;
   int iStack000000000000000c;
   int iStack0000000000000010;
   int iStack0000000000000014;
   int iStack0000000000000018;
   int iStack000000000000001c;
   int in_stack_00000020;
   auVar1 = ZSTD_cParam_getBounds(0x65);
   if (( ( ( ( ( ( auVar1._0_8_ < 0xffffffffffffff89 ) && ( auVar1._8_4_ <= iStack0000000000000008 ) ) && ( iStack0000000000000008 <= auVar1._12_4_ ) ) && ( ( ( auVar1 = ZSTD_cParam_getBounds(0x67) ),auVar1._0_8_ < 0xffffffffffffff89 && ( auVar1._8_4_ <= iStack000000000000000c ) ) && ( ( iStack000000000000000c <= auVar1._12_4_ && ( ( auVar1 = ZSTD_cParam_getBounds(0x66) ),auVar1._0_8_ < 0xffffffffffffff89 && ( auVar1._8_4_ <= iStack0000000000000010 ) ) ) ) ) ) ) ) && ( ( iStack0000000000000010 <= auVar1._12_4_ && ( ( ( auVar1 = ZSTD_cParam_getBounds(0x68) ),auVar1._0_8_ < 0xffffffffffffff89 && ( auVar1._8_4_ <= iStack0000000000000014 ) ) && ( iStack0000000000000014 <= auVar1._12_4_ ) ) ) )) {
      return 0;
   }

   return 0xffffffffffffffd6;
}
ulong ZSTD_CCtxParams_init_advanced(long param_1) {
   ulong uVar1;
   undefined8 in_stack_00000008;
   undefined4 in_stack_00000010;
   undefined4 in_stack_00000018;
   if (param_1 == 0) {
      return 0xffffffffffffffff;
   }

   uVar1 = ZSTD_checkCParams();
   if (0xffffffffffffff88 < uVar1) {
      return uVar1;
   }

   ZSTD_CCtxParams_init_internal(param_1, &stack0x00000008, 0);
   return 0;
}
ulong ZSTD_CCtx_setCParams(long param_1) {
   ulong uVar1;
   undefined4 uStack0000000000000008;
   undefined4 uStack000000000000000c;
   undefined4 uStack0000000000000010;
   undefined4 uStack0000000000000014;
   undefined4 uStack0000000000000018;
   undefined4 uStack000000000000001c;
   undefined4 in_stack_00000020;
   uVar1 = ZSTD_checkCParams();
   if (( uVar1 < 0xffffffffffffff89 ) && ( uVar1 = 0xffffffffffffffc4 * (int*)( param_1 + 0xe18 ) == 0 )) {
      param_1 = param_1 + 0x10;
      uVar1 = ZSTD_CCtxParams_setParameter(param_1, 0x65, uStack0000000000000008);
      if (( ( uVar1 < 0xffffffffffffff89 ) && ( ( ( uVar1 = ZSTD_CCtxParams_setParameter(param_1, 0x67, uStack000000000000000c) ),uVar1 < 0xffffffffffffff89 && ( uVar1 = uVar1 < 0xffffffffffffff89 ) ) && ( uVar1 = ZSTD_CCtxParams_setParameter(param_1, 0x68, uStack0000000000000014) ),uVar1 < 0xffffffffffffff89 ) )) {
         uVar1 = ZSTD_CCtxParams_setParameter(param_1, 0x6b, in_stack_00000020);
         if (uVar1 < 0xffffffffffffff89) {
            uVar1 = 0;
         }

      }

   }

   return uVar1;
}
ulong ZSTD_CCtx_setParams(undefined8 param_1) {
   ulong uVar1;
   undefined1 in_stack_00000020[16];
   uVar1 = ZSTD_checkCParams();
   if (uVar1 < 0xffffffffffffff89) {
      uVar1 = ZSTD_CCtx_setFParams(param_1, in_stack_00000020._4_8_, in_stack_00000020._12_4_);
      if (uVar1 < 0xffffffffffffff89) {
         uVar1 = ZSTD_CCtx_setCParams(param_1);
         if (uVar1 < 0xffffffffffffff89) {
            uVar1 = 0;
         }

         return uVar1;
      }

   }

   return uVar1;
}
int ZSTD_cycleLog(int param_1, uint param_2) {
   return param_1 - ( uint )(5 < param_2);
}
undefined8 ZSTD_adjustCParams(undefined8 param_1, long param_2, undefined8 param_3) {
   long lVar1;
   uint uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong extraout_RDX;
   ulong extraout_RDX_00;
   ulong extraout_RDX_01;
   long in_FS_OFFSET;
   undefined8 uVar5;
   uint in_stack_00000008;
   uint uStack0000000000000010;
   uint uStack0000000000000014;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_cParam_getBounds(0x65);
   uVar2 = ( uint )(extraout_RDX >> 0x20);
   if ((int)in_stack_00000008 <= (int)uVar2) {
      uVar2 = in_stack_00000008;
   }

   uVar3 = extraout_RDX & 0xffffffff;
   if ((int)extraout_RDX <= (int)in_stack_00000008) {
      uVar3 = (ulong)uVar2;
   }

   ZSTD_cParam_getBounds(0x67, uVar3);
   ZSTD_cParam_getBounds(uVar3 & 0xffffffff, 0x66);
   uVar3 = extraout_RDX_00 & 0xffffffff;
   uVar2 = ( uint )(extraout_RDX_00 >> 0x20);
   if ((int)uStack0000000000000010 <= (int)uVar2) {
      uVar2 = uStack0000000000000010;
   }

   if ((int)extraout_RDX_00 <= (int)uStack0000000000000010) {
      uVar3 = (ulong)uVar2;
   }

   uVar5 = ZSTD_cParam_getBounds(0x68);
   uVar4 = extraout_RDX_01 & 0xffffffff;
   uVar2 = ( uint )(extraout_RDX_01 >> 0x20);
   if ((int)uStack0000000000000014 <= (int)uVar2) {
      uVar2 = uStack0000000000000014;
   }

   if ((int)extraout_RDX_01 <= (int)uStack0000000000000014) {
      uVar4 = (ulong)uVar2;
   }

   ZSTD_cParam_getBounds(uVar5, uVar3 & 0xffffffff, uVar4, 0x69);
   ZSTD_cParam_getBounds(0x6a);
   ZSTD_cParam_getBounds(0x6b);
   if (param_2 == 0) {
      param_2 = -1;
   }

   ZSTD_adjustCParams_internal(param_1, param_2, param_3, 3, 0);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_getCParamsFromCCtxParams(undefined8 param_1, long param_2, long param_3, undefined8 param_4, undefined4 param_5) {
   long in_FS_OFFSET;
   undefined4 local_68[10];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == -1 ) && ( 0 < *(int*)( param_2 + 0x40 ) )) {
      param_3 = (long)*(int*)( param_2 + 0x40 );
   }

   ZSTD_getCParams_internal(local_68, *(undefined4*)( param_2 + 0x2c ), param_3, param_4, param_5);
   if (*(int*)( param_2 + 0x60 ) == 1) {
      local_68[0] = 0x1b;
   }

   ZSTD_overrideCParams(local_68, param_2 + 4, param_4, param_5);
   ZSTD_adjustCParams_internal(param_1, param_3);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_estimateCCtxSize_usingCCtxParams(long param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 extraout_RDX;
   long in_FS_OFFSET;
   uint local_48[6];
   int local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_getCParamsFromCCtxParams(local_48, param_1, 0xffffffffffffffff, 0, 0);
   iVar2 = *(int*)( param_1 + 0x90 );
   if (iVar2 == 0) {
      iVar2 = 2 - ( ( uint )(0xe < local_48[0]) & (uint)CONCAT71(( int7 )((ulong)extraout_RDX >> 8), local_30 - 3U < 3) );
   }

   uVar1 = 0xffffffffffffffff;
   if (*(int*)( param_1 + 0x4c ) < 1) {
      uVar1 = ZSTD_estimateCCtxSize_usingCCtxParams_internal(local_48, param_1 + 0x60, 1, iVar2, 0, 0, 0xffffffffffffffff, *(long*)( param_1 + 0xc0 ) != 0, *(undefined8*)( param_1 + 200 ));
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_estimateCCtxSize_usingCParams(void) {
   ulong uVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   int in_stack_00000020;
   undefined1 auStack_f8[144];
   undefined4 local_68;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_makeCCtxParamsFromCParams(auStack_f8);
   if (in_stack_00000020 - 3U < 3) {
      local_68 = 2;
      uVar1 = ZSTD_estimateCCtxSize_usingCCtxParams(auStack_f8);
      local_68 = 1;
      uVar2 = ZSTD_estimateCCtxSize_usingCCtxParams(auStack_f8);
      if (uVar2 <= uVar1) {
         uVar2 = uVar1;
      }

   }
 else {
      uVar2 = ZSTD_estimateCCtxSize_usingCCtxParams(auStack_f8);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_estimateCCtxSize(int param_1) {
   ulong uVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   undefined1 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = 1;
   if (param_1 < 1) {
      iVar3 = param_1;
   }

   uVar4 = 0;
   do {
      puVar5 = &srcSizeTiers_4;
      uVar2 = 0;
      do {
         ZSTD_getCParams_internal(local_68, iVar3, *puVar5, 0, 0);
         uVar1 = ZSTD_estimateCCtxSize_usingCParams();
         if (uVar2 < uVar1) {
            uVar2 = ZSTD_estimateCCtxSize_usingCParams();
         }

         puVar5 = puVar5 + 1;
      }
 while ( puVar5 != (undefined8*)ZSTD_defaultCParameters );
      if (uVar4 < uVar2) {
         uVar4 = uVar2;
      }

      iVar3 = iVar3 + 1;
   }
 while ( iVar3 <= param_1 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_estimateCStreamSize_usingCCtxParams(long param_1) {
   ulong uVar1;
   undefined8 uVar2;
   ulong uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   byte local_48[40];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < *(int*)( param_1 + 0x4c )) {
      uVar2 = 0xffffffffffffffff;
      goto LAB_001061ad;
   }

   ZSTD_getCParamsFromCCtxParams(local_48, param_1, 0xffffffffffffffff, 0, 0);
   uVar1 = *(ulong*)( param_1 + 200 );
   uVar3 = 0x20000;
   if (uVar1 != 0) {
      uVar3 = uVar1;
   }

   if (uVar3 >> ( local_48[0] & 0x3f ) == 0) {
      lVar5 = 0;
      if (*(int*)( param_1 + 0x7c ) == 0) {
         lVar5 = ( 1L << ( local_48[0] & 0x3f ) ) + uVar3;
      }

      lVar6 = 0;
      if (( *(int*)( param_1 + 0x80 ) == 0 ) && ( lVar6 = uVar3 < 0xff00ff00ff00ff00 )) {
         LAB_00106222:lVar6 = ( uVar3 >> 8 ) + uVar3;
         if (uVar3 < 0x20000) {
            lVar6 = lVar6 + 1 + ( 0x20000 - uVar3 >> 0xb );
         }
 else {
            lVar6 = lVar6 + 1;
         }

      }

   }
 else {
      uVar3 = 1L << ( local_48[0] & 0x3f );
      if (*(int*)( param_1 + 0x7c ) == 0) {
         lVar5 = 2L << ( local_48[0] & 0x3f );
      }
 else {
         lVar5 = 0;
      }

      if (*(int*)( param_1 + 0x80 ) == 0) goto LAB_00106222;
      lVar6 = 0;
   }

   iVar4 = *(int*)( param_1 + 0x90 );
   if (iVar4 == 0) {
      iVar4 = 2 - ( uint )(0xe < *(uint*)( param_1 + 4 ) && *(int*)( param_1 + 0x1c ) - 3U < 3);
   }

   uVar2 = ZSTD_estimateCCtxSize_usingCCtxParams_internal(local_48, param_1 + 0x60, 1, iVar4, lVar5, lVar6, 0xffffffffffffffff, *(long*)( param_1 + 0xc0 ) != 0, uVar1);
   LAB_001061ad:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_estimateCStreamSize_usingCParams(void) {
   ulong uVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   int in_stack_00000020;
   undefined1 auStack_f8[144];
   undefined4 local_68;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_makeCCtxParamsFromCParams(auStack_f8);
   if (in_stack_00000020 - 3U < 3) {
      local_68 = 2;
      uVar1 = ZSTD_estimateCStreamSize_usingCCtxParams(auStack_f8);
      local_68 = 1;
      uVar2 = ZSTD_estimateCStreamSize_usingCCtxParams(auStack_f8);
      if (uVar2 <= uVar1) {
         uVar2 = uVar1;
      }

   }
 else {
      uVar2 = ZSTD_estimateCStreamSize_usingCCtxParams(auStack_f8);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_estimateCStreamSize(int param_1) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   int iVar4;
   undefined8 in_R9;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined1 local_78[52];
   int local_44;
   undefined4 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = 1;
   if (param_1 < 1) {
      iVar4 = param_1;
   }

   uVar5 = 0;
   do {
      if (iVar4 == 0) {
         local_78._32_8_ = ZSTD_defaultCParameters._84_8_;
         local_78._40_4_ = ZSTD_defaultCParameters._92_4_;
         local_78._44_4_ = ZSTD_defaultCParameters._96_4_;
         local_78._48_4_ = ZSTD_defaultCParameters._100_4_;
         _local_44 = ZSTD_defaultCParameters._104_8_;
      }
 else {
         iVar2 = 0x16;
         if (iVar4 < 0x17) {
            iVar2 = iVar4;
         }

         if (iVar2 < 0) {
            iVar2 = 0;
         }

         lVar1 = (long)iVar2 * 0x1c;
         local_78._32_8_ = *(undefined8*)( ZSTD_defaultCParameters + lVar1 );
         _local_44 = *(undefined8*)( ZSTD_defaultCParameters + lVar1 + 0x14 );
         local_78._40_4_ = ( undefined4 ) * (undefined8*)( ZSTD_defaultCParameters + lVar1 + 8 );
         local_78._44_4_ = ( undefined4 ) * (undefined8*)( ZSTD_defaultCParameters + lVar1 + 0xc );
         local_78._48_4_ = ( undefined4 )(( ulong ) * (undefined8*)( ZSTD_defaultCParameters + lVar1 + 0xc ) >> 0x20);
         if (iVar4 < 0) {
            iVar2 = -0x20000;
            if (-0x20001 < iVar4) {
               iVar2 = iVar4;
            }

            local_44 = -iVar2;
         }

      }

      ZSTD_adjustCParams_internal(local_78, 0xffffffffffffffff, 0, 0, 0, in_R9, local_78._32_8_, local_78._40_4_, local_78._48_4_, SUB84(_local_44, 4));
      uVar3 = ZSTD_estimateCStreamSize_usingCParams();
      if (uVar5 < uVar3) {
         uVar5 = uVar3;
      }

      iVar4 = iVar4 + 1;
   }
 while ( iVar4 <= param_1 );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_getFrameProgression(long *param_1, long param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar3 = 0;
   if (*(long*)( param_2 + 0xdd0 ) != 0) {
      lVar3 = *(long*)( param_2 + 0xde8 ) - *(long*)( param_2 + 0xde0 );
   }

   lVar2 = *(long*)( param_2 + 0x300 );
   param_1[4] = 0;
   lVar1 = *(long*)( param_2 + 0x300 );
   *param_1 = lVar3 + lVar2;
   param_1[1] = lVar1;
   lVar3 = *(long*)( param_2 + 0x308 );
   param_1[2] = lVar3;
   param_1[3] = lVar3;
   return;
}
undefined8 ZSTD_toFlushNow(void) {
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ZSTD_reset_compressedBlockState(long param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar3 = _LC3;
   uVar2 = _LC8;
   uVar1 = __LC4;
   *(undefined4*)( param_1 + 0x808 ) = 0;
   *(undefined8*)( param_1 + 0x15f4 ) = uVar3;
   *(undefined8*)( param_1 + 0x15e4 ) = uVar1;
   *(undefined8*)( param_1 + 0x15ec ) = uVar2;
   return;
}
void ZSTD_invalidateRepCodes(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0xc80 );
   *(undefined8*)( lVar1 + 0x15f0 ) = 0;
   *(undefined4*)( lVar1 + 0x15f8 ) = 0;
   return;
}
undefined8 ZSTD_copyCCtx(long param_1, int *param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   size_t __n;
   size_t __n_00;
   long in_FS_OFFSET;
   byte bVar8;
   undefined4 local_108;
   undefined4 uStack_104;
   undefined4 uStack_100;
   undefined4 uStack_fc;
   undefined4 local_f8;
   undefined4 uStack_f4;
   undefined8 uStack_f0;
   uint local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 uStack_78;
   undefined4 uStack_74;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   bVar8 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      uVar3 = 0;
      iVar1 = *param_2;
      param_3 = -1;
   }
 else {
      uVar3 = ( uint )(param_3 != -1);
      iVar1 = *param_2;
   }

   uVar2 = 0xffffffffffffffc4;
   if (iVar1 == 1) {
      uVar2 = *(undefined8*)( param_2 + 0xdc );
      iVar1 = param_2[0x372];
      __n_00 = 0;
      local_d8 = *(undefined8*)( param_1 + 0x40 );
      uStack_d0 = *(undefined8*)( param_1 + 0x48 );
      local_c8 = *(undefined8*)( param_1 + 0x50 );
      uStack_c0 = *(undefined8*)( param_1 + 0x58 );
      local_108 = ( undefined4 ) * (undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x368 ) = *(undefined8*)( param_2 + 0xda );
      *(undefined8*)( param_1 + 0x370 ) = uVar2;
      local_b8 = *(undefined8*)( param_1 + 0x60 );
      uStack_b0 = *(undefined8*)( param_1 + 0x68 );
      uStack_90 = *(undefined8*)( param_1 + 0x88 );
      local_88 = *(undefined8*)( param_1 + 0x90 );
      uStack_dc = ( undefined4 )(( ulong ) * (undefined8*)( param_1 + 0x38 ) >> 0x20);
      *(undefined8*)( param_1 + 0x378 ) = *(undefined8*)( param_2 + 0xde );
      uStack_70 = *(undefined8*)( param_1 + 0xa8 );
      local_68 = *(undefined8*)( param_1 + 0xb0 );
      uStack_60 = *(undefined8*)( param_1 + 0xb8 );
      local_58 = *(undefined8*)( param_1 + 0xc0 );
      uStack_50 = *(undefined8*)( param_1 + 200 );
      local_38 = *(undefined8*)( param_1 + 0xe0 );
      local_48 = *(undefined8*)( param_1 + 0xd0 );
      uStack_f0 = *(undefined8*)( param_2 + 0x40 );
      uStack_80 = ( undefined4 ) * (undefined8*)( param_1 + 0x98 );
      uStack_74 = ( undefined4 )(( ulong ) * (undefined8*)( param_1 + 0xa0 ) >> 0x20);
      uStack_104 = ( undefined4 ) * (undefined8*)( param_2 + 0x3b );
      uStack_100 = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x3b ) >> 0x20);
      uStack_fc = ( undefined4 ) * (undefined8*)( param_2 + 0x3d );
      local_f8 = ( undefined4 ) * (undefined8*)( param_2 + 0x3e );
      uStack_f4 = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x3e ) >> 0x20);
      local_a8 = *(undefined8*)( param_2 + 0x52 );
      uStack_a0 = *(undefined8*)( param_2 + 0x54 );
      uStack_7c = ( undefined4 ) * (undefined8*)( param_2 + 0x5d );
      uStack_78 = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x5d ) >> 0x20);
      local_98 = *(undefined8*)( param_2 + 0x56 );
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_40 = *(undefined8*)( param_2 + 0x6c );
      local_e8 = uVar3;
      ZSTD_resetCCtx_internal(param_1, &local_108, param_3, 0, 1, iVar1);
      iVar1 = param_2[0x5e];
      *(undefined8*)( param_1 + 0x2c8 ) = *(undefined8*)( param_1 + 0x2b8 );
      if (( param_2[0x41] != 1 ) && ( ( 2 < param_2[0x41] - 3U || ( iVar1 != 1 ) ) )) {
         __n_00 = 4L << ( (byte)param_2[0x3c] & 0x3f );
      }

      __n = 4L << ( (byte)param_2[0x330] & 0x3f );
      if (param_2[0x330] == 0) {
         __n = 0;
      }

      memcpy(*(void**)( param_1 + 0xd00 ), *(void**)( param_2 + 0x340 ), 4L << ( *(byte*)( param_2 + 0x3d ) & 0x3f ));
      memcpy(*(void**)( param_1 + 0xd10 ), *(void**)( param_2 + 0x344 ), __n_00);
      memcpy(*(void**)( param_1 + 0xd08 ), *(void**)( param_2 + 0x342 ), __n);
      if (*(ulong*)( param_1 + 0x2c8 ) < *(ulong*)( param_1 + 0x2c0 )) {
         *(ulong*)( param_1 + 0x2c8 ) = *(ulong*)( param_1 + 0x2c0 );
      }

      uVar2 = *(undefined8*)( param_2 + 0x326 );
      puVar6 = *(undefined8**)( param_2 + 800 );
      puVar7 = *(undefined8**)( param_1 + 0xc80 );
      *(undefined8*)( param_1 + 0xc90 ) = *(undefined8*)( param_2 + 0x324 );
      *(undefined8*)( param_1 + 0xc98 ) = uVar2;
      uVar2 = *(undefined8*)( param_2 + 0x32a );
      *(undefined8*)( param_1 + 0xca0 ) = *(undefined8*)( param_2 + 0x328 );
      *(undefined8*)( param_1 + 0xca8 ) = uVar2;
      *(undefined8*)( param_1 + 0xcb0 ) = *(undefined8*)( param_2 + 0x32c );
      *(undefined8*)( param_1 + 0xcb8 ) = *(undefined8*)( param_2 + 0x32e );
      *(int*)( param_1 + 0x298 ) = param_2[0xa6];
      *(undefined8*)( param_1 + 0x2a0 ) = *(undefined8*)( param_2 + 0xa8 );
      *puVar7 = *puVar6;
      puVar7[0x2bf] = puVar6[0x2bf];
      lVar4 = (long)puVar7 - (long)( ( ulong )(puVar7 + 1) & 0xfffffffffffffff8 );
      uVar2 = 0;
      puVar6 = (undefined8*)( (long)puVar6 - lVar4 );
      puVar7 = (undefined8*)( ( ulong )(puVar7 + 1) & 0xfffffffffffffff8 );
      for (uVar5 = ( ulong )((int)lVar4 + 0x1600U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar7 = *puVar6;
         puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
         puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_seqToCodes(long *param_1) {
   uint *puVar1;
   ushort uVar2;
   ushort uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   ulong uVar9;
   ulong uVar10;
   char cVar11;
   lVar4 = *param_1;
   lVar5 = param_1[4];
   lVar6 = param_1[6];
   lVar7 = param_1[5];
   uVar10 = param_1[1] - lVar4 >> 3;
   if ((int)uVar10 == 0) {
      iVar8 = (int)param_1[9];
      if (iVar8 == 1) {
         *(undefined1*)( lVar5 + ( ulong ) * (uint*)( (long)param_1 + 0x4c ) ) = 0x23;
         iVar8 = (int)param_1[9];
      }

      if (iVar8 == 2) {
         *(undefined1*)( lVar7 + ( ulong ) * (uint*)( (long)param_1 + 0x4c ) ) = 0x34;
      }

      return 0;
   }

   uVar9 = 0;
   uVar10 = uVar10 & 0xffffffff;
   do {
      while (true) {
         puVar1 = (uint*)( lVar4 + uVar9 * 8 );
         iVar8 = 0x1f;
         if (*puVar1 != 0) {
            for (; *puVar1 >> iVar8 == 0; iVar8 = iVar8 + -1) {}
         }

         uVar2 = *(ushort*)( lVar4 + 4 + uVar9 * 8 );
         cVar11 = '\x1f' - ( (byte)iVar8 ^ 0x1f );
         uVar3 = *(ushort*)( lVar4 + 6 + uVar9 * 8 );
         if (uVar2 < 0x40) break;
         iVar8 = 0x1f;
         if (uVar2 != 0) {
            for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {}
         }

         *(byte*)( lVar5 + uVar9 ) = '2' - ( (byte)iVar8 ^ 0x1f );
         *(char*)( lVar6 + uVar9 ) = cVar11;
         if (0x7f < uVar3) goto LAB_001068b9;
         LAB_001068fd:*(undefined*)( lVar7 + uVar9 ) = ( &ML_Code_2 )[uVar3];
         uVar9 = uVar9 + 1;
         if (uVar9 == uVar10) goto LAB_0010690f;
      }
;
      *(char*)( lVar5 + uVar9 ) = "  !!\"\"##$$$$%%%%&&&&&&&&\'\'\'\'\'\'\'\'(((((((((((((((())))))))))))))))********************************"[(ulong)uVar2 + 0x60];
      *(char*)( lVar6 + uVar9 ) = cVar11;
      if (uVar3 < 0x80) goto LAB_001068fd;
      LAB_001068b9:iVar8 = 0x1f;
      if (uVar3 != 0) {
         for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {}
      }

      *(byte*)( lVar7 + uVar9 ) = 'C' - ( (byte)iVar8 ^ 0x1f );
      uVar9 = uVar9 + 1;
   }
 while ( uVar9 != uVar10 );
   LAB_0010690f:iVar8 = (int)param_1[9];
   if (iVar8 == 1) {
      *(undefined1*)( lVar5 + ( ulong ) * (uint*)( (long)param_1 + 0x4c ) ) = 0x23;
      iVar8 = (int)param_1[9];
   }

   if (iVar8 == 2) {
      *(undefined1*)( lVar7 + ( ulong ) * (uint*)( (long)param_1 + 0x4c ) ) = 0x34;
   }

   return 0;
}
int *ZSTD_buildSequencesStatistics(int *param_1, long param_2, undefined8 param_3, long param_4, long param_5, long param_6, long param_7, undefined4 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   undefined8 uVar7;
   ulong uVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   uVar9 = *(undefined8*)( param_2 + 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)( param_2 + 0x30 );
   uVar2 = *(undefined8*)( param_2 + 0x28 );
   iVar3 = ZSTD_seqToCodes();
   local_44 = 0x23;
   uVar7 = HIST_countFast_wksp(param_9, &local_44, uVar9, param_3, param_10, param_11);
   *(undefined4*)( param_5 + 0xddc ) = *(undefined4*)( param_4 + 0xddc );
   iVar4 = ZSTD_selectEncodingType(param_5 + 0xddc, param_9, local_44, uVar7, param_3, 9, param_4 + 0x8b0, LL_defaultNorm, 6, 1, param_8);
   uVar8 = ZSTD_buildCTable(param_6, param_7 - param_6, param_5 + 0x8b0, 9, iVar4, param_9, local_44, uVar9, param_3, LL_defaultNorm, 6, 0x23, param_4 + 0x8b0, 0x524, param_10, param_11);
   if (uVar8 < 0xffffffffffffff89) {
      uVar10 = 0;
      if (iVar4 == 2) {
         uVar10 = uVar8;
      }

      lVar11 = param_6 + uVar8;
      local_44 = 0x1f;
      uVar9 = HIST_countFast_wksp(param_9, &local_44, uVar1, param_3, param_10, param_11);
      *(undefined4*)( param_5 + 0xdd4 ) = *(undefined4*)( param_4 + 0xdd4 );
      iVar5 = ZSTD_selectEncodingType(param_5 + 0xdd4, param_9, local_44, uVar9, param_3, 8, param_4, OF_defaultNorm, 5, local_44 < 0x1d, param_8);
      uVar8 = ZSTD_buildCTable(lVar11, param_7 - lVar11, param_5, 8, iVar5, param_9, local_44, uVar1, param_3, OF_defaultNorm, 5, 0x1c, param_4, 0x304, param_10, param_11);
      if (uVar8 < 0xffffffffffffff89) {
         local_44 = 0x34;
         if (iVar5 == 2) {
            uVar10 = uVar8;
         }

         lVar11 = lVar11 + uVar8;
         uVar9 = HIST_countFast_wksp(param_9, &local_44, uVar2, param_3, param_10, param_11);
         *(undefined4*)( param_5 + 0xdd8 ) = *(undefined4*)( param_4 + 0xdd8 );
         iVar6 = ZSTD_selectEncodingType(param_5 + 0xdd8, param_9, local_44, uVar9, param_3, 9, param_4 + 0x304, ML_defaultNorm, 6, 1, param_8);
         uVar8 = ZSTD_buildCTable(lVar11, param_7 - lVar11, param_5 + 0x304, 9, iVar6, param_9, local_44, uVar2, param_3, ML_defaultNorm, 6, 0x34, param_4 + 0x304, 0x5ac, param_10, param_11);
         if (uVar8 < 0xffffffffffffff89) {
            param_1[2] = iVar6;
            if (iVar6 == 2) {
               uVar10 = uVar8;
            }

            *param_1 = iVar4;
            *(ulong*)( param_1 + 6 ) = uVar10;
            param_1[1] = iVar5;
            *(ulong*)( param_1 + 4 ) = ( lVar11 + uVar8 ) - param_6;
            param_1[8] = iVar3;
         }
 else {
            *(ulong*)( param_1 + 4 ) = uVar8;
            param_1[2] = iVar6;
            *param_1 = iVar4;
            *(ulong*)( param_1 + 6 ) = uVar10;
            param_1[1] = iVar5;
            param_1[8] = iVar3;
         }

      }
 else {
         *(ulong*)( param_1 + 4 ) = uVar8;
         param_1[2] = 0;
         *param_1 = iVar4;
         *(ulong*)( param_1 + 6 ) = uVar10;
         param_1[1] = iVar5;
         param_1[8] = iVar3;
      }

   }
 else {
      *(ulong*)( param_1 + 4 ) = uVar8;
      param_1[1] = 0;
      *param_1 = iVar4;
      param_1[2] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = iVar3;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
char *ZSTD_entropyCompressSeqStore_internal_constprop_0(long *param_1, long param_2, long param_3, long param_4, long param_5, long param_6, long param_7, undefined4 param_8) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   bool bVar6;
   char *pcVar7;
   char *pcVar8;
   char *pcVar9;
   ulong uVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   long lVar13;
   ulong uVar14;
   ulong uVar15;
   long in_FS_OFFSET;
   byte bVar16;
   char local_68[4];
   char local_64;
   char local_60;
   char *local_58;
   long local_50;
   undefined4 local_48;
   long local_40;
   bVar16 = 0;
   iVar1 = *(int*)( param_4 + 0x1c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *param_1;
   uVar14 = param_1[1] - lVar2;
   lVar3 = param_1[6];
   lVar4 = param_1[4];
   lVar5 = param_1[5];
   uVar10 = param_1[3] - param_1[2];
   uVar15 = (long)uVar14 >> 3;
   bVar6 = false;
   if (( *(int*)( param_4 + 0x48 ) != 1 ) && ( bVar6 = true * (int*)( param_4 + 0x48 ) != 2 )) {
      bVar6 = *(int*)( param_4 + 0x18 ) != 0 && iVar1 == 1;
   }

   pcVar7 = (char*)ZSTD_compressLiterals(param_5, param_6, param_1[2], uVar10, param_7 + 0xd4, 0x2204, param_2, param_3, iVar1, bVar6, uVar15 == 0 || 0x13 < uVar10 / uVar15, param_8);
   pcVar9 = pcVar7;
   if (pcVar7 < (char*)0xffffffffffffff89) {
      pcVar8 = pcVar7 + param_5;
      pcVar9 = (char*)0xffffffffffffffba;
      if (3 < param_6 - (long)pcVar7) {
         lVar13 = param_3 + 0x810;
         if (uVar14 < 0x3f9) {
            *pcVar8 = (char)uVar15;
            pcVar7 = pcVar8 + 1;
            if (uVar15 == 0) {
               puVar12 = (undefined8*)( param_3 + 0x818U & 0xfffffffffffffff8 );
               lVar13 = lVar13 - (long)puVar12;
               *(undefined8*)( param_3 + 0x810 ) = *(undefined8*)( param_2 + 0x810 );
               *(undefined8*)( param_3 + 0x15e8 ) = *(undefined8*)( param_2 + 0x15e8 );
               puVar11 = (undefined8*)( ( param_2 + 0x810 ) - lVar13 );
               for (uVar10 = ( ulong )((int)lVar13 + 0xde0U >> 3); pcVar9 = pcVar7 + -param_5,uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + (ulong)bVar16 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
               }

               goto LAB_00106f50;
            }

         }
 else if (uVar14 < 0x3f7f9) {
            pcVar8[1] = (char)uVar15;
            pcVar7 = pcVar8 + 2;
            *pcVar8 = (char)( uVar15 >> 8 ) + -0x80;
         }
 else {
            *pcVar8 = -1;
            pcVar7 = pcVar8 + 3;
            *(short*)( pcVar8 + 1 ) = (short)uVar15 + -0x7f00;
         }

         ZSTD_buildSequencesStatistics(local_68, param_1, uVar15, param_2 + 0x810, lVar13, pcVar7 + 1, param_6 + param_5, iVar1, param_7, param_7 + 0xd4, 0x2204);
         pcVar9 = local_58;
         if (local_58 < (char*)0xffffffffffffff89) {
            *pcVar7 = local_68[0] * '@' + local_64 * '\x10' + local_60 * '\x04';
            pcVar7 = pcVar7 + 1 + (long)local_58;
            pcVar8 = (char*)ZSTD_encodeSequences(pcVar7, ( param_6 + param_5 ) - (long)pcVar7, param_3 + 0xb14, lVar5, lVar13, lVar3, param_3 + 0x10c0, lVar4, lVar2, uVar15, local_48, param_8);
            pcVar9 = pcVar8;
            if (( pcVar8 < (char*)0xffffffffffffff89 ) && ( ( local_50 == 0 || ( pcVar9 = (char*)0x0 ),(char*)0x3 < pcVar8 + local_50 ) )) {
               pcVar9 = pcVar7 + ( (long)pcVar8 - param_5 );
            }

         }

      }

   }

   LAB_00106f50:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_compressBlock_internal(long param_1, undefined1 *param_2, ulong param_3, undefined1 *param_4, ulong param_5, int param_6) {
   uint uVar1;
   undefined8 uVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   uVar4 = ZSTD_buildSeqStore(param_1, param_4, param_5);
   if (0xffffffffffffff88 < uVar4) {
      return uVar4;
   }

   if (uVar4 == 1) {
      if (*(int*)( param_1 + 0x390 ) != 0) {
         return 0xffffffffffffff96;
      }

   }
 else {
      lVar5 = *(long*)( param_1 + 0xc80 );
      if (*(int*)( param_1 + 0x390 ) != 0) {
         uVar4 = ZSTD_copyBlockSequences(param_1 + 0x390, param_1 + 0x3b8, lVar5 + 0x15f0);
         if (0xffffffffffffff88 < uVar4) {
            return uVar4;
         }

         *(undefined8*)( param_1 + 0xc80 ) = *(undefined8*)( param_1 + 0xc88 );
         *(long*)( param_1 + 0xc88 ) = lVar5;
         return 0;
      }

      uVar4 = *(ulong*)( param_1 + 0xdc0 );
      uVar6 = ZSTD_entropyCompressSeqStore_internal_constprop_0(param_1 + 0x3b8, lVar5, *(undefined8*)( param_1 + 0xc88 ), param_1 + 0xe8, param_2, param_3, uVar4, *(undefined4*)( param_1 + 8 ));
      if (( uVar6 != 0 ) && ( ( uVar6 != 0xffffffffffffffba || ( param_3 < param_5 ) ) )) {
         if (0xffffffffffffff88 < uVar6) {
            LAB_001072b0:lVar5 = *(long*)( param_1 + 0xc80 );
            goto LAB_00107174;
         }

         uVar1 = *(uint*)( param_1 + 0x104 );
         if (*(uint*)( param_1 + 0x104 ) < 7) {
            uVar1 = 7;
         }

         uVar4 = ( ulong )(uVar1 - 1);
         if (( param_5 - 2 ) - ( param_5 >> ( ( byte )(uVar1 - 1) & 0x3f ) ) <= uVar6) goto LAB_001071d6;
         if (( param_6 == 0 ) || ( *(int*)( param_1 + 0x3b0 ) != 0 )) {
            LAB_00107285:if (uVar6 == 1) goto LAB_001072b0;
         }
 else if (uVar6 < 0x19) {
            iVar3 = ZSTD_isRLE(param_4, param_5);
            if (iVar3 == 0) goto LAB_00107285;
            goto LAB_001071f9;
         }

         uVar2 = *(undefined8*)( param_1 + 0xc80 );
         lVar5 = *(long*)( param_1 + 0xc88 );
         *(undefined8*)( param_1 + 0xc80 ) = *(undefined8*)( param_1 + 0xc88 );
         *(undefined8*)( param_1 + 0xc88 ) = uVar2;
         goto LAB_00107174;
      }

      LAB_001071d6:if (( ( param_6 != 0 ) && ( *(int*)( param_1 + 0x3b0 ) == 0 ) ) && ( iVar3 = iVar3 != 0 )) {
         LAB_001071f9:uVar6 = 1;
         *param_2 = *param_4;
         lVar5 = *(long*)( param_1 + 0xc80 );
         goto LAB_00107174;
      }

   }

   lVar5 = *(long*)( param_1 + 0xc80 );
   uVar6 = 0;
   LAB_00107174:if (*(int*)( lVar5 + 0x15e4 ) == 2) {
      *(undefined4*)( lVar5 + 0x15e4 ) = 1;
   }

   return uVar6;
}
ulong ZSTD_compressSeqStore_singleBlock(long param_1, long *param_2, int *param_3, int *param_4, undefined2 *param_5, ulong param_6, undefined1 *param_7, ulong param_8, int param_9, int param_10) {
   undefined1 uVar1;
   uint uVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   long in_FS_OFFSET;
   undefined8 uVar13;
   undefined8 local_4c;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c = *(undefined8*)param_3;
   local_44 = param_3[2];
   if (param_10 != 0) {
      lVar3 = *param_2;
      uVar6 = param_2[1] - lVar3 >> 3;
      iVar5 = (int)uVar6;
      iVar4 = iVar5;
      if ((int)param_2[9] == 1) {
         iVar4 = *(int*)( (long)param_2 + 0x4c );
      }

      if (iVar5 != 0) {
         uVar7 = 0;
         do {
            uVar2 = *(uint*)( lVar3 + uVar7 * 8 );
            uVar8 = uVar2 - 1;
            if (( *(short*)( lVar3 + 4 + uVar7 * 8 ) == 0 ) && ( iVar4 != (int)uVar7 )) {
               if (uVar8 < 3) {
                  iVar5 = param_10;
                  uVar12 = uVar2;
                  if (uVar2 != 3) goto LAB_0010751e;
                  iVar9 = *param_4;
                  if (*param_3 != iVar9) {
                     iVar9 = iVar9 + -1;
                     goto LAB_0010752c;
                  }

                  LAB_001076f4:iVar10 = iVar9 + -1;
                  LAB_001075c8:iVar11 = param_3[1];
                  LAB_001075cc:param_3[2] = iVar11;
                  uVar13 = CONCAT44(iVar9, iVar10);
                  LAB_001075d4:*(undefined8*)param_3 = uVar13;
                  if (uVar2 < 4) goto LAB_00107550;
               }
 else {
                  if (uVar2 < 4) goto LAB_0010757f;
                  param_3[2] = param_3[1];
                  *(ulong*)param_3 = CONCAT44(*param_3, uVar2 - 3);
               }

               LAB_001075eb:param_4[2] = param_4[1];
               *(ulong*)param_4 = CONCAT44(*param_4, uVar2 - 3);
            }
 else {
               iVar5 = 0;
               uVar12 = uVar8;
               if (2 < uVar8) {
                  if (3 < uVar2) {
                     param_3[2] = param_3[1];
                     *(ulong*)param_3 = CONCAT44(*param_3, uVar2 - 3);
                     goto LAB_001075eb;
                  }

                  iVar9 = *param_3;
                  iVar5 = 0;
                  iVar10 = param_3[0xffffffff];
                  goto LAB_001075c8;
               }

               LAB_0010751e:iVar9 = param_4[uVar12];
               if (param_3[uVar12] == iVar9) {
                  uVar12 = iVar5 + uVar8;
                  if (uVar12 == 0) goto LAB_0010757f;
                  LAB_001076c0:iVar9 = *param_3;
                  if (uVar12 == 3) goto LAB_001076f4;
                  iVar10 = param_3[uVar12];
                  if (uVar12 != 1) goto LAB_001075c8;
                  iVar11 = param_3[2];
                  goto LAB_001075cc;
               }

               LAB_0010752c:*(uint*)( lVar3 + uVar7 * 8 ) = iVar9 + 3U;
               if (3 < iVar9 + 3U) {
                  param_3[2] = param_3[1];
                  uVar13 = CONCAT44(*param_3, iVar9);
                  goto LAB_001075d4;
               }

               uVar12 = iVar9 + 2 + iVar5;
               if (uVar12 != 0) goto LAB_001076c0;
               LAB_00107550:uVar8 = uVar8 + iVar5;
               if (uVar8 != 0) {
                  if (uVar8 == 3) {
                     iVar5 = *param_4 + -1;
                     LAB_0010763b:iVar9 = param_4[1];
                  }
 else {
                     iVar5 = param_4[uVar8];
                     if (uVar8 != 1) goto LAB_0010763b;
                     iVar9 = param_4[2];
                  }

                  param_4[2] = iVar9;
                  *(ulong*)param_4 = CONCAT44(*param_4, iVar5);
               }

            }

            LAB_0010757f:uVar7 = uVar7 + 1;
         }
 while ( uVar7 != ( uVar6 & 0xffffffff ) );
      }

   }

   if (param_6 < 3) {
      LAB_00107480:uVar6 = 0xffffffffffffffba;
   }
 else {
      uVar6 = ZSTD_entropyCompressSeqStore_internal_constprop_0(param_2, *(undefined8*)( param_1 + 0xc80 ), *(undefined8*)( param_1 + 0xc88 ), param_1 + 0xe8, (void*)( (long)param_5 + 3 ), param_6 - 3, *(undefined8*)( param_1 + 0xdc0 ), *(undefined4*)( param_1 + 8 ));
      if (uVar6 == 0) {
         if (*(int*)( param_1 + 0x3b0 ) == 0) goto LAB_00107712;
         LAB_00107760:iVar4 = *(int*)( param_1 + 0x390 );
         joined_r0x0010789e:if (iVar4 != 0) goto LAB_00107810;
         LAB_0010776e:uVar6 = param_8 + 3;
         if (param_6 < uVar6) goto LAB_00107480;
         param_9 = param_9 + (int)param_8 * 8;
         *param_5 = (short)param_9;
         *(char*)( param_5 + 1 ) = (char)( (uint)param_9 >> 0x10 );
         memcpy((void*)( (long)param_5 + 3 ), param_7, param_8);
         if (0xffffffffffffff88 < uVar6) goto LAB_00107487;
         *(undefined8*)param_3 = local_4c;
         param_3[2] = local_44;
      }
 else if (( uVar6 == 0xffffffffffffffba ) && ( param_8 <= param_6 - 3 )) {
         if (*(int*)( param_1 + 0x3b0 ) != 0) goto LAB_00107760;
         uVar6 = 0;
         LAB_00107712:iVar4 = *(int*)( param_1 + 0x390 );
         LAB_00107718:iVar5 = ZSTD_isRLE(param_7, param_8);
         if (iVar5 == 0) {
            if (iVar4 != 0) {
               LAB_00107810:uVar6 = ZSTD_copyBlockSequences(param_1 + 0x390, param_2, &local_4c);
               if (uVar6 < 0xffffffffffffff89) {
                  uVar13 = *(undefined8*)( param_1 + 0xc80 );
                  uVar6 = 0;
                  *(undefined8*)( param_1 + 0xc80 ) = *(undefined8*)( param_1 + 0xc88 );
                  *(undefined8*)( param_1 + 0xc88 ) = uVar13;
               }

               goto LAB_00107487;
            }

            if (uVar6 == 0) goto LAB_0010776e;
            LAB_00107424:if (uVar6 != 1) goto LAB_0010785e;
         }
 else if (iVar4 != 0) goto LAB_00107810;
         uVar1 = *param_7;
         if (param_6 == 3) goto LAB_00107480;
         uVar6 = 4;
         iVar4 = param_9 + 2 + (int)param_8 * 8;
         *param_5 = (short)iVar4;
         param_5[1] = CONCAT11(uVar1, (char)( (uint)iVar4 >> 0x10 ));
         *(undefined8*)param_3 = local_4c;
         param_3[2] = local_44;
      }
 else {
         if (0xffffffffffffff88 < uVar6) goto LAB_00107487;
         iVar4 = *(int*)( param_1 + 0x390 );
         uVar2 = *(uint*)( param_1 + 0x104 );
         if (*(uint*)( param_1 + 0x104 ) < 7) {
            uVar2 = 7;
         }

         if (( param_8 - 2 ) - ( param_8 >> ( (char)uVar2 - 1U & 0x3f ) ) <= uVar6) {
            if (*(int*)( param_1 + 0x3b0 ) != 0) goto joined_r0x0010789e;
            uVar6 = 0;
            goto LAB_00107718;
         }

         if (*(int*)( param_1 + 0x3b0 ) != 0) {
            if (iVar4 != 0) goto LAB_00107810;
            goto LAB_00107424;
         }

         if (uVar6 < 0x19) goto LAB_00107718;
         if (iVar4 != 0) goto LAB_00107810;
         LAB_0010785e:uVar13 = *(undefined8*)( param_1 + 0xc80 );
         iVar4 = param_9 + 4 + (int)uVar6 * 8;
         uVar6 = uVar6 + 3;
         *(undefined8*)( param_1 + 0xc80 ) = *(undefined8*)( param_1 + 0xc88 );
         *(undefined8*)( param_1 + 0xc88 ) = uVar13;
         *param_5 = (short)iVar4;
         *(char*)( param_5 + 1 ) = (char)( (uint)iVar4 >> 0x10 );
      }

      if (*(int*)( *(long*)( param_1 + 0xc80 ) + 0x15e4 ) == 2) {
         *(undefined4*)( *(long*)( param_1 + 0xc80 ) + 0x15e4 ) = 1;
      }

   }

   LAB_00107487:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
undefined8 ZSTD_selectBlockCompressor(int param_1, int param_2, int param_3) {
   if (( param_1 - 3U < 3 ) && ( param_2 == 1 )) {
      return *(undefined8*)( rowBasedBlockCompressors_1 + ( (long)(int)( param_1 - 3U ) + (long)param_3 * 3 ) * 8 );
   }

   return *(undefined8*)( blockCompressor_0 + ( (long)param_1 + (long)param_3 * 10 ) * 8 );
}
void ZSTD_resetSeqStore(undefined8 *param_1) {
   *(undefined4*)( param_1 + 9 ) = 0;
   param_1[3] = param_1[2];
   param_1[1] = *param_1;
   return;
}
long ZSTD_sequenceBound(ulong param_1) {
   return param_1 / 3 + 2 + ( param_1 >> 10 );
}
long ZSTD_mergeBlockDelimiters(int *param_1, long param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int *piVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   if (param_2 == 0) {
      return 0;
   }

   lVar4 = 0;
   piVar3 = param_1;
   lVar5 = 0;
   do {
      while (( *piVar3 != 0 || ( piVar3[2] != 0 ) )) {
         uVar1 = *(undefined8*)piVar3;
         uVar2 = *(undefined8*)( piVar3 + 2 );
         piVar3 = piVar3 + 4;
         lVar6 = lVar5 + 1;
         lVar4 = lVar4 + 1;
         *(undefined8*)( param_1 + lVar5 * 4 ) = uVar1;
         *(undefined8*)( param_1 + lVar5 * 4 + 2 ) = uVar2;
         lVar5 = lVar6;
         if (piVar3 == param_1 + param_2 * 4) {
            return lVar6;
         }

      }
;
      if (param_2 + -1 != lVar4) {
         piVar3[5] = piVar3[5] + piVar3[1];
      }

      piVar3 = piVar3 + 4;
      lVar4 = lVar4 + 1;
   }
 while ( piVar3 != param_1 + param_2 * 4 );
   return lVar5;
}
ulong ZSTD_buildBlockEntropyStats(long *param_1, undefined8 *param_2, undefined8 *param_3, long param_4, undefined4 *param_5, long param_6, long param_7) {
   uint uVar1;
   long lVar2;
   undefined4 uVar3;
   int iVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   undefined8 uVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   byte bVar13;
   uint local_a0;
   undefined8 *local_98;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 local_60;
   ulong local_58;
   undefined8 uStack_50;
   long local_40;
   bVar13 = 0;
   lVar6 = param_1[3];
   lVar2 = param_1[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( param_4 + 0x1c );
   iVar4 = *(int*)( param_4 + 0x18 );
   if (*(int*)( param_4 + 0x48 ) == 1) {
      local_a0 = *(uint*)( param_2 + 0x101 );
      *param_3 = *param_2;
      param_3[0x101] = param_2[0x101];
      lVar8 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
      puVar10 = (undefined8*)( (long)param_2 - lVar8 );
      puVar11 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
      for (uVar7 = ( ulong )((int)lVar8 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
         *puVar11 = *puVar10;
         puVar10 = puVar10 + 1;
         puVar11 = puVar11 + 1;
      }

      LAB_00107b60:local_98 = param_3 + 1;
      local_68 = 0xff;
      uVar7 = 0x3f;
      if (*(int*)( param_2 + 0x101 ) == 2) {
         uVar7 = 6;
      }

      uVar12 = lVar6 - lVar2;
      if (uVar12 <= uVar7) goto LAB_00107a5f;
      uVar7 = HIST_count_wksp(param_6, &local_68, lVar2, uVar12, param_6, param_7);
      if (0xffffffffffffff88 < uVar7) {
         LAB_00107da8:*(ulong*)( param_5 + 0x22 ) = uVar7;
         goto LAB_00107abe;
      }

      if (uVar12 == uVar7) {
         *param_5 = 1;
         *(undefined8*)( param_5 + 0x22 ) = 0;
      }
 else {
         if (uVar7 <= ( uVar12 >> 7 ) + 4) goto LAB_00107a5f;
         if (local_a0 == 1) {
            iVar4 = HUF_validateCTable(param_2, param_6, local_68);
            local_a0 = ( uint )(iVar4 != 0);
         }

         *param_3 = 0;
         lVar6 = param_6 + 0x400;
         param_3[0x100] = 0;
         lVar2 = param_7 + -0x400;
         puVar10 = (undefined8*)( (ulong)local_98 & 0xfffffffffffffff8 );
         for (uVar7 = ( ulong )(( (int)param_3 - (int)(undefined8*)( (ulong)local_98 & 0xfffffffffffffff8 ) ) + 0x808U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
         }

         uVar3 = HUF_optimalTableLog(0xb, uVar12, local_68, lVar6, lVar2, param_3, param_6, ( 7 < uVar1 ) * '\x02');
         uVar7 = HUF_buildCTable_wksp(param_3, param_6, local_68, uVar3, lVar6, lVar2);
         if (0xffffffffffffff88 < uVar7) goto LAB_00107da8;
         lVar8 = HUF_estimateCompressedSize(param_3, param_6, local_68);
         uVar7 = HUF_writeCTable_wksp(param_5 + 1, 0x80, param_3, local_68, uVar7, lVar6, lVar2);
         if (( local_a0 == 0 ) || ( uVar5 = uVar12 <= uVar5 )) {
            if (uVar12 <= lVar8 + uVar7) {
               *param_3 = *param_2;
               param_3[0x101] = param_2[0x101];
               lVar6 = (long)param_3 - (long)( (ulong)local_98 & 0xfffffffffffffff8 );
               puVar10 = (undefined8*)( (long)param_2 - lVar6 );
               puVar11 = (undefined8*)( (ulong)local_98 & 0xfffffffffffffff8 );
               for (uVar7 = ( ulong )((int)lVar6 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
                  puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
               }

               goto LAB_00107a5f;
            }

         }
 else if (( uVar5 <= lVar8 + uVar7 ) || ( uVar12 <= uVar7 + 0xc )) {
            *param_3 = *param_2;
            param_3[0x101] = param_2[0x101];
            lVar6 = (long)param_3 - (long)( (ulong)local_98 & 0xfffffffffffffff8 );
            puVar10 = (undefined8*)( (long)param_2 - lVar6 );
            puVar11 = (undefined8*)( (ulong)local_98 & 0xfffffffffffffff8 );
            for (uVar7 = ( ulong )((int)lVar6 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
               *puVar11 = *puVar10;
               puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
               puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
            }

            *param_5 = 3;
            *(undefined8*)( param_5 + 0x22 ) = 0;
            goto LAB_00107a72;
         }

         *param_5 = 2;
         *(undefined4*)( param_3 + 0x101 ) = 1;
         *(ulong*)( param_5 + 0x22 ) = uVar7;
         if (0xffffffffffffff88 < uVar7) goto LAB_00107abe;
      }

   }
 else {
      if (*(int*)( param_4 + 0x48 ) == 2) {
         lVar6 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
         *param_3 = *param_2;
         param_3[0x101] = param_2[0x101];
         puVar10 = (undefined8*)( (long)param_2 - lVar6 );
         puVar11 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
         for (uVar7 = ( ulong )((int)lVar6 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
         }

      }
 else {
         local_a0 = *(uint*)( param_2 + 0x101 );
         local_68 = 0xff;
         *param_3 = *param_2;
         param_3[0x101] = param_2[0x101];
         lVar8 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
         puVar10 = (undefined8*)( (long)param_2 - lVar8 );
         puVar11 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
         for (uVar7 = ( ulong )((int)lVar8 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
         }

         if (( iVar4 == 0 ) || ( uVar1 != 1 )) goto LAB_00107b60;
      }

      LAB_00107a5f:*param_5 = 0;
      *(undefined8*)( param_5 + 0x22 ) = 0;
   }

   LAB_00107a72:lVar6 = param_1[1] - *param_1 >> 3;
   if (lVar6 == 0) {
      *(undefined4*)( (long)param_3 + 0x15ec ) = 0;
      local_58 = 0;
      uStack_50 = 0;
      uVar9 = 0;
      local_60 = 0;
      *(undefined8*)( (long)param_3 + 0x15e4 ) = 0;
   }
 else {
      ZSTD_buildSequencesStatistics(&local_68, param_1, lVar6, param_2 + 0x102, param_3 + 0x102, param_5 + 0x27, (long)param_5 + 0x121, *(undefined4*)( param_4 + 0x1c ), param_6, param_6 + 0xd4, param_7 + -0xd4);
      uVar9 = CONCAT44(uStack_64, local_68);
      if (0xffffffffffffff88 < local_58) {
         *(ulong*)( param_5 + 0x4a ) = local_58;
         uVar7 = local_58;
         goto LAB_00107abe;
      }

   }

   *(undefined8*)( param_5 + 0x24 ) = uVar9;
   param_5[0x26] = local_60;
   *(ulong*)( param_5 + 0x4a ) = local_58;
   *(undefined8*)( param_5 + 0x4c ) = uStack_50;
   uVar7 = 0;
   LAB_00107abe:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
ulong ZSTD_buildEntropyStatisticsAndEstimateSubBlockSize(long *param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = ZSTD_buildBlockEntropyStats(param_1, *(undefined8*)( param_2 + 0xc80 ), *(undefined8*)( param_2 + 0xc88 ), param_2 + 0xe8, param_2 + 0x1338, *(undefined8*)( param_2 + 0xdc0 ), 0x22d8);
   if (uVar4 < 0xffffffffffffff89) {
      uVar11 = param_1[1] - *param_1;
      local_44 = 0xff;
      lVar6 = param_1[6];
      lVar5 = (long)uVar11 >> 3;
      iVar1 = *(int*)( param_2 + 0x1338 );
      uVar2 = *(undefined8*)( param_2 + 0xdc0 );
      lVar8 = param_1[5];
      lVar3 = *(long*)( param_2 + 0xc88 );
      lVar7 = param_1[4];
      uVar4 = param_1[3] - param_1[2];
      if (iVar1 != 0) {
         if (iVar1 == 1) {
            uVar4 = 1;
         }
 else if (iVar1 - 2U < 2) {
            uVar9 = HIST_count_wksp(uVar2, &local_44, param_1[2], uVar4, uVar2, 0x22d8);
            if (uVar9 < 0xffffffffffffff89) {
               lVar10 = HUF_estimateCompressedSize(lVar3, uVar2, local_44);
               if (iVar1 == 2) {
                  lVar10 = lVar10 + *(long*)( param_2 + 0x13c0 );
               }

               if (0xff < uVar4) {
                  lVar10 = lVar10 + 6;
               }

               uVar4 = (int)( ( uint )(0x3fff < uVar4) + ( 0x3ff < uVar4 ) + 3 ) + lVar10;
            }

         }
 else {
            uVar4 = 0;
         }

      }

      lVar6 = ZSTD_estimateBlockSize_symbolType_constprop_0(*(undefined4*)( param_2 + 0x13cc ), lVar6, lVar5, 0x1f, lVar3 + 0x810, 0, OF_defaultNorm, 5, uVar2);
      lVar7 = ZSTD_estimateBlockSize_symbolType_constprop_0(*(undefined4*)( param_2 + 0x13c8 ), lVar7, lVar5, 0x23, lVar3 + 0x10c0, LL_bits, LL_defaultNorm, 6, uVar2);
      lVar8 = ZSTD_estimateBlockSize_symbolType_constprop_0(*(undefined4*)( param_2 + 0x13d0 ), lVar8, lVar5, 0x34, lVar3 + 0xb14, ML_bits, ML_defaultNorm, 6, uVar2);
      uVar4 = uVar4 + 3 + *(long*)( param_2 + 0x1460 ) + lVar6 + lVar7 + lVar8 + (long)(int)( ( uint )(0x3f7f8 < uVar11) + ( 0x3f8 < uVar11 ) + 2 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_deriveBlockSplitsHelper(long *param_1, ulong param_2, long param_3, long param_4, undefined8 param_5) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   uVar2 = param_2 + param_3;
   if (( 299 < param_3 - param_2 ) && ( (ulong)param_1[1] < 0xc4 )) {
      while (true) {
         uVar5 = uVar2 >> 1;
         ZSTD_deriveSeqStoreChunk(param_4 + 0xe98, param_5, param_2, param_3);
         ZSTD_deriveSeqStoreChunk(param_4 + 0xee8, param_5, param_2, uVar5);
         ZSTD_deriveSeqStoreChunk(param_4 + 0xf38, param_5, uVar5, param_3);
         uVar2 = ZSTD_buildEntropyStatisticsAndEstimateSubBlockSize(param_4 + 0xe98, param_4);
         uVar3 = ZSTD_buildEntropyStatisticsAndEstimateSubBlockSize(param_4 + 0xee8, param_4);
         uVar4 = ZSTD_buildEntropyStatisticsAndEstimateSubBlockSize(param_4 + 0xf38, param_4);
         if (( 0xffffffffffffff88 < uVar3 || 0xffffffffffffff88 < uVar2 ) || ( ( 0xffffffffffffff88 < uVar4 || ( uVar2 <= uVar3 + uVar4 ) ) )) break;
         ZSTD_deriveBlockSplitsHelper(param_1, param_2, uVar5, param_4, param_5);
         lVar1 = param_1[1];
         *(int*)( *param_1 + lVar1 * 4 ) = (int)uVar5;
         uVar3 = lVar1 + 1;
         uVar2 = param_3 + uVar5;
         param_1[1] = uVar3;
         if (param_3 - uVar5 < 300) {
            return;
         }

         param_2 = uVar5;
         if (0xc3 < uVar3) {
            return;
         }

      }
;
   }

   return;
}
ulong ZSTD_compressContinue_internal(int *param_1, undefined2 *param_2, ulong param_3, undefined1 *param_4, ulong param_5, uint param_6, uint param_7) {
   undefined1(*pauVar1)[16];
   undefined1 uVar2;
   long lVar3;
   undefined8 uVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   uint uVar12;
   long lVar13;
   ulong uVar14;
   ulong uVar15;
   undefined2 *puVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   ulong uVar20;
   undefined1 *puVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   bool bVar23;
   ulong local_110;
   undefined2 *local_100;
   uint local_f4;
   undefined8 *local_c0;
   undefined8 *local_b8;
   ulong local_b0;
   int *local_a0;
   int *local_68;
   ulong local_60;
   undefined8 local_58;
   undefined4 local_50;
   undefined8 local_4c;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = 0xffffffffffffffc4;
   if (*param_1 == 0) {
      LAB_001083e9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar8;
   }

   if (( *param_1 == 1 ) && ( ( param_6 & 1 ) != 0 )) {
      uVar8 = ZSTD_writeFrameHeader(param_2, param_3, param_1 + 0x3a, *(long*)( param_1 + 0xbe ) + -1, param_1[0xa6]);
      if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
      *param_1 = 2;
      param_3 = param_3 - uVar8;
      param_2 = (undefined2*)( (long)param_2 + uVar8 );
      uVar15 = uVar8;
   }
 else {
      uVar15 = 0;
   }

   uVar8 = uVar15;
   if (param_5 == 0) goto LAB_001083e9;
   uVar5 = param_1[0x32a];
   uVar8 = (ulong)uVar5;
   if (( param_1[0x346] == 0 ) && ( param_4 == *(undefined1**)( param_1 + 0x324 ) )) {
      lVar9 = *(long*)( param_1 + 0x328 );
      uVar8 = (ulong)(uint)param_1[0x32b];
      bVar23 = true;
   }
 else {
      lVar9 = *(long*)( param_1 + 0x326 );
      uVar18 = (long)*(undefined1**)( param_1 + 0x324 ) - lVar9;
      uVar17 = (uint)uVar18;
      uVar19 = uVar17 - uVar5;
      *(ulong*)( param_1 + 0x32a ) = CONCAT44(uVar5, uVar17);
      *(ulong*)( param_1 + 0x326 ) = (long)param_4 - uVar18;
      *(long*)( param_1 + 0x328 ) = lVar9;
      uVar5 = uVar17;
      bVar23 = false;
      if (uVar19 < 8) {
         param_1[0x32b] = uVar17;
         uVar8 = uVar18 & 0xffffffff;
         bVar23 = false;
      }

   }

   puVar21 = param_4 + param_5;
   *(undefined1**)( param_1 + 0x324 ) = puVar21;
   if (( (undefined1*)( uVar8 + lVar9 ) < puVar21 ) && ( param_4 < (undefined1*)( lVar9 + (ulong)uVar5 ) )) {
      uVar17 = ( uint )((long)puVar21 - lVar9);
      if ((long)(ulong)uVar5 < (long)puVar21 - lVar9) {
         uVar17 = uVar5;
      }

      param_1[0x32b] = uVar17;
   }

   if (!bVar23) {
      param_1[0x346] = 0;
      param_1[0x32f] = uVar5;
   }

   if (param_1[0x52] == 1) {
      uVar5 = param_1[0x108];
      uVar8 = (ulong)uVar5;
      if (param_4 == *(undefined1**)( param_1 + 0x102 )) {
         lVar9 = *(long*)( param_1 + 0x106 );
         uVar18 = (ulong)(uint)param_1[0x109];
      }
 else {
         lVar9 = *(long*)( param_1 + 0x104 );
         uVar14 = (long)*(undefined1**)( param_1 + 0x102 ) - lVar9;
         iVar7 = (int)uVar14;
         *(ulong*)( param_1 + 0x108 ) = CONCAT44(uVar5, iVar7);
         *(ulong*)( param_1 + 0x104 ) = (long)param_4 - uVar14;
         *(long*)( param_1 + 0x106 ) = lVar9;
         uVar18 = uVar8;
         uVar8 = uVar14 & 0xffffffff;
         if (iVar7 - uVar5 < 8) {
            param_1[0x109] = iVar7;
            uVar18 = uVar14 & 0xffffffff;
         }

      }

      *(undefined1**)( param_1 + 0x102 ) = puVar21;
      if (( (undefined1*)( uVar18 + lVar9 ) < puVar21 ) && ( param_4 < (undefined1*)( lVar9 + uVar8 ) )) {
         iVar7 = (int)uVar8;
         if ((long)puVar21 - lVar9 <= (long)uVar8) {
            iVar7 = (int)( (long)puVar21 - lVar9 );
         }

         param_1[0x109] = iVar7;
      }

   }

   if (param_6 == 0) {
      ZSTD_overflowCorrectIfNeeded(param_1 + 0x324, param_1 + 0xaa, param_1 + 0x3a, param_4);
      uVar8 = ZSTD_compressBlock_internal(param_1, param_2, param_3, param_4, param_5, 0);
      LAB_0010851e:if (uVar8 < 0xffffffffffffff89) {
         LAB_00108528:uVar8 = uVar15 + uVar8;
         lVar9 = *(long*)( param_1 + 0xc0 );
         *(ulong*)( param_1 + 0xc0 ) = param_5 + lVar9;
         *(ulong*)( param_1 + 0xc2 ) = uVar8 + *(long*)( param_1 + 0xc2 );
         if (( *(ulong*)( param_1 + 0xbe ) != 0 ) && ( *(ulong*)( param_1 + 0xbe ) < param_5 + lVar9 + 1 )) {
            uVar8 = 0xffffffffffffffb8;
         }

      }

      goto LAB_001083e9;
   }

   uVar18 = *(ulong*)( param_1 + 0xbc );
   iVar7 = param_1[0x3b];
   if (param_1[0x43] != 0) {
      ZSTD_XXH64_update(param_1 + 0xc4, param_4, param_5);
   }

   bVar23 = param_5 <= uVar18;
   if (param_3 < 6) {
      LAB_00109030:uVar8 = 0xffffffffffffffba;
      goto LAB_001083e9;
   }

   uVar5 = 1 << ( (byte)iVar7 & 0x1f );
   pauVar1 = (undefined1(*) [16])( param_1 + 0x3f6 );
   local_110 = param_5;
   local_100 = param_2;
   LAB_00108702:local_f4 = bVar23 & param_7;
   if (local_110 < uVar18) {
      uVar18 = local_110;
   }

   puVar21 = param_4 + uVar18;
   ZSTD_overflowCorrectIfNeeded(param_1 + 0x324, param_1 + 0xaa, param_1 + 0x3a, param_4, puVar21);
   uVar17 = uVar5 + param_1[0x32e];
   if (( uVar17 < ( uint )((int)puVar21 - (int)*(undefined8*)( param_1 + 0x326 )) ) || ( param_1[0x32e] != param_1[0x32a] )) {
      param_1[0x32e] = 0;
      param_1[0x362] = 0;
      param_1[0x363] = 0;
      uVar17 = uVar5;
   }

   uVar12 = (int)param_4 - (int)*(undefined8*)( param_1 + 0x326 );
   uVar19 = param_1[0x32b];
   if (uVar17 < uVar12) {
      uVar12 = uVar12 - uVar5;
      if (uVar19 < uVar12) {
         param_1[0x32b] = uVar12;
         uVar19 = uVar12;
      }

      if ((uint)param_1[0x32a] < uVar19) {
         param_1[0x32a] = uVar19;
      }

      param_1[0x32e] = 0;
      param_1[0x362] = 0;
      param_1[0x363] = 0;
   }

   if ((uint)param_1[0x32f] < uVar19) {
      param_1[0x32f] = uVar19;
   }

   iVar7 = (int)uVar18;
   if (*(long*)( param_1 + 0x48 ) == 0) {
      if (param_1[0x5d] == 1) {
         uVar8 = ZSTD_buildSeqStore(param_1, param_4, uVar18);
         if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
         if (uVar8 == 1) {
            if (*(int*)( *(long*)( param_1 + 800 ) + 0x15e4 ) == 2) {
               *(undefined4*)( *(long*)( param_1 + 800 ) + 0x15e4 ) = 1;
            }

            if (param_1[0xe4] != 0) {
               uVar8 = 0xffffffffffffff96;
               goto LAB_001083e9;
            }

            if (param_3 < uVar18 + 3) goto LAB_00109030;
            iVar7 = local_f4 + iVar7 * 8;
            *local_100 = (short)iVar7;
            *(char*)( local_100 + 1 ) = (char)( (uint)iVar7 >> 0x10 );
            memcpy((void*)( (long)local_100 + 3 ), param_4, uVar18);
            uVar8 = uVar18 + 3;
         }
 else {
            local_60 = 0;
            uVar8 = *(long*)( param_1 + 0xf0 ) - *(long*)( param_1 + 0xee ) >> 3;
            local_68 = param_1 + 0x40a;
            uVar17 = (uint)uVar8;
            if (uVar17 < 5) {
               local_4c = *(undefined8*)( *(long*)( param_1 + 800 ) + 0x15f0 );
               local_44 = *(undefined4*)( *(long*)( param_1 + 800 ) + 0x15f8 );
               *pauVar1 = (undefined1[16])0x0;
               for (int i = 0; i < 4; i++) {
                  *(undefined1(*) [16])( param_1 + ( 4*i + 1018 ) ) = (undefined1[16])0;
               }

            }
 else {
               ZSTD_deriveBlockSplitsHelper(&local_68, 0, uVar8 & 0xffffffff, param_1);
               uVar14 = local_60;
               local_68[local_60] = uVar17;
               local_58 = *(undefined8*)( *(long*)( param_1 + 800 ) + 0x15f0 );
               local_50 = *(undefined4*)( *(long*)( param_1 + 800 ) + 0x15f8 );
               *pauVar1 = (undefined1[16])0x0;
               for (int i = 0; i < 4; i++) {
                  *(undefined1(*) [16])( param_1 + ( 4*i + 1018 ) ) = (undefined1[16])0;
               }

               local_4c = local_58;
               local_44 = local_50;
               if (local_60 != 0) {
                  ZSTD_deriveSeqStoreChunk(param_1 + 0x3e2, param_1 + 0xee, 0, param_1[0x40a]);
                  uVar22 = 0;
                  local_b0 = 0;
                  puVar16 = local_100;
                  lVar9 = 0;
                  uVar20 = param_3;
                  do {
                     lVar3 = *(long*)( param_1 + 0x3e2 );
                     lVar10 = *(long*)( param_1 + 0x3e4 ) - lVar3;
                     uVar8 = lVar10 >> 3;
                     if (lVar10 == 0) {
                        lVar10 = 0;
                     }
 else {
                        lVar10 = 0;
                        uVar11 = 0;
                        do {
                           while (( lVar10 = lVar10 + ( ulong ) * (ushort*)( lVar3 + 4 + uVar11 * 8 ) ),uVar11 != (uint)param_1[0x3f5] || ( param_1[0x3f4] != 1 )) {
                              uVar11 = uVar11 + 1;
                              if (uVar8 <= uVar11) goto LAB_00108d20;
                           }
;
                           uVar11 = uVar11 + 1;
                           lVar10 = lVar10 + 0x10000;
                        }
 while ( uVar11 < uVar8 );
                     }

                     LAB_00108d20:if (*(long*)( param_1 + 0x3e4 ) != lVar3) {
                        lVar13 = 0;
                        uVar11 = 0;
                        do {
                           while (( lVar13 = lVar13 + 3 + ( ulong ) * (ushort*)( lVar3 + 6 + uVar11 * 8 ) ),uVar11 != (uint)param_1[0x3f5] || ( param_1[0x3f4] != 2 )) {
                              uVar11 = uVar11 + 1;
                              if (uVar8 <= uVar11) goto LAB_00108d70;
                           }
;
                           uVar11 = uVar11 + 1;
                           lVar13 = lVar13 + 0x10000;
                        }
 while ( uVar11 < uVar8 );
                        LAB_00108d70:lVar10 = lVar10 + lVar13;
                     }

                     lVar3 = lVar9 + lVar10;
                     if (uVar14 == uVar22) {
                        lVar10 = uVar18 - lVar9;
                        uVar17 = local_f4;
                     }
 else {
                        ZSTD_deriveSeqStoreChunk(pauVar1, param_1 + 0xee, param_1[uVar22 + 0x40a], param_1[uVar22 + 0x40b]);
                        uVar17 = 0;
                     }

                     uVar8 = ZSTD_compressSeqStore_singleBlock(param_1, param_1 + 0x3e2, &local_58, &local_4c, puVar16, uVar20, param_4, lVar10, uVar17, 1);
                     if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
                     param_4 = param_4 + lVar10;
                     puVar16 = (undefined2*)( (long)puVar16 + uVar8 );
                     local_b0 = local_b0 + uVar8;
                     uVar20 = uVar20 - uVar8;
                     uVar22 = uVar22 + 1;
                     for (int i = 0; i < 10; i++) {
                        *(undefined8*)( param_1 + ( 2*i + 994 ) ) = *(undefined8*)( param_1 + ( 2*i + 1014 ) );
                     }

                     lVar9 = lVar3;
                  }
 while ( uVar22 <= uVar14 );
                  lVar9 = *(long*)( param_1 + 800 );
                  *(undefined8*)( lVar9 + 0x15f0 ) = local_58;
                  *(undefined4*)( lVar9 + 0x15f8 ) = local_50;
                  uVar8 = local_b0;
                  goto LAB_00108938;
               }

            }

            local_a0 = param_1 + 0xee;
            local_b8 = &local_4c;
            local_c0 = &local_58;
            local_58 = local_4c;
            local_50 = local_44;
            uVar8 = ZSTD_compressSeqStore_singleBlock(param_1, local_a0, local_c0, local_b8, local_100, param_3, param_4, uVar18, local_f4, 0);
         }

      }
 else {
         uVar8 = ZSTD_compressBlock_internal(param_1, (void*)( (long)local_100 + 3U ), param_3 - 3, param_4, uVar18, 1);
         if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
         if (uVar8 != 0) {
            iVar6 = local_f4 + 4 + (int)uVar8 * 8;
            if (uVar8 == 1) {
               iVar6 = local_f4 + 2 + iVar7 * 8;
            }

            uVar8 = uVar8 + 3;
            *local_100 = (short)iVar6;
            *(char*)( local_100 + 1 ) = (char)( (uint)iVar6 >> 0x10 );
            goto LAB_001086c1;
         }

         if (param_3 < uVar18 + 3) goto LAB_00109030;
         iVar7 = local_f4 + iVar7 * 8;
         *local_100 = (short)iVar7;
         *(char*)( local_100 + 1 ) = (char)( (uint)iVar7 >> 0x10 );
         memcpy((void*)( (long)local_100 + 3U ), param_4, uVar18);
         uVar8 = uVar18 + 3;
      }

      LAB_00108938:if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
      goto LAB_001086c1;
   }

   uVar8 = ZSTD_buildSeqStore(param_1, param_4, uVar18);
   if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
   if (uVar8 == 0) {
      if (( ( ( param_1[0xec] != 0 ) || ( 0x18 < ( ulong )(*(long*)( param_1 + 0xf0 ) - *(long*)( param_1 + 0xee )) ) ) || ( 9 < ( ulong )(*(long*)( param_1 + 0xf4 ) - *(long*)( param_1 + 0xf2 )) ) ) || ( iVar6 = iVar6 == 0 )) {
         uVar8 = ZSTD_compressSuperBlock(param_1, local_100, param_3, param_4, uVar18, local_f4);
         if (uVar8 == 0xffffffffffffffba) goto LAB_00108a10;
         if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
         if (uVar8 != 0) {
            uVar17 = param_1[0x41];
            if ((uint)param_1[0x41] < 7) {
               uVar17 = 7;
            }

            if (uVar8 < ( uVar18 + 1 ) - ( uVar18 >> ( (char)uVar17 - 1U & 0x3f ) )) {
               uVar4 = *(undefined8*)( param_1 + 800 );
               lVar9 = *(long*)( param_1 + 0x322 );
               *(undefined8*)( param_1 + 800 ) = *(undefined8*)( param_1 + 0x322 );
               *(undefined8*)( param_1 + 0x322 ) = uVar4;
               goto LAB_00108a5c;
            }

         }

         goto LAB_00108a10;
      }

      uVar8 = 4;
      uVar2 = *param_4;
      iVar7 = local_f4 + 2 + iVar7 * 8;
      *local_100 = (short)iVar7;
      local_100[1] = CONCAT11(uVar2, (char)( (uint)iVar7 >> 0x10 ));
      lVar9 = *(long*)( param_1 + 800 );
   }
 else {
      LAB_00108a10:uVar8 = uVar18 + 3;
      if (param_3 < uVar8) goto LAB_00109030;
      iVar7 = local_f4 + iVar7 * 8;
      *local_100 = (short)iVar7;
      *(char*)( local_100 + 1 ) = (char)( (uint)iVar7 >> 0x10 );
      memcpy((void*)( (long)local_100 + 3 ), param_4, uVar18);
      if (0xffffffffffffff88 < uVar8) goto LAB_001083e9;
      lVar9 = *(long*)( param_1 + 800 );
   }

   LAB_00108a5c:if (*(int*)( lVar9 + 0x15e4 ) == 2) {
      *(undefined4*)( lVar9 + 0x15e4 ) = 1;
   }

   LAB_001086c1:local_100 = (undefined2*)( (long)local_100 + uVar8 );
   param_3 = param_3 - uVar8;
   local_110 = local_110 - uVar18;
   param_1[0xec] = 0;
   if (local_110 == 0) {
      uVar8 = (long)local_100 - (long)param_2;
      if (( local_100 <= param_2 ) || ( ( param_7 & 1 ) == 0 )) goto LAB_0010851e;
      *param_1 = 3;
      goto LAB_00108528;
   }

   bVar23 = local_110 <= uVar18;
   param_4 = puVar21;
   if (param_3 < 6) goto LAB_00109030;
   goto LAB_00108702;
}
ulong ZSTD_writeSkippableFrame(int *param_1, ulong param_2, void *param_3, ulong param_4, uint param_5) {
   if (param_2 < param_4 + 8) {
      return 0xffffffffffffffba;
   }

   if ((int)( param_4 >> 0x20 ) == 0) {
      if (param_5 < 0x10) {
         param_1[1] = (int)param_4;
         *param_1 = param_5 + 0x184d2a50;
         memcpy(param_1 + 2, param_3, param_4 & 0xffffffff);
         return param_4 + 8;
      }

      return 0xffffffffffffffd6;
   }

   return 0xffffffffffffffb8;
}
undefined8 ZSTD_writeLastEmptyBlock(undefined2 *param_1, ulong param_2) {
   undefined8 uVar1;
   uVar1 = 0xffffffffffffffba;
   if (2 < param_2) {
      *(undefined1*)( param_1 + 1 ) = 0;
      *param_1 = 1;
      uVar1 = 3;
   }

   return uVar1;
}
void ZSTD_referenceExternalSequences(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0xc58 ) = param_2;
   *(undefined8*)( param_1 + 0xc70 ) = param_3;
   *(undefined8*)( param_1 + 0xc78 ) = param_3;
   *(undefined1(*) [16])( param_1 + 0xc60 ) = (undefined1[16])0x0;
   return;
}
void ZSTD_compressContinue_public(void) {
   ZSTD_compressContinue_internal();
   return;
}
void ZSTD_compressContinue(void) {
   ZSTD_compressContinue_internal();
   return;
}
ulong ZSTD_getBlockSize(long param_1) {
   ulong uVar1;
   byte bVar2;
   bVar2 = ( byte ) * (undefined4*)( param_1 + 0xec );
   uVar1 = *(ulong*)( param_1 + 0x1b0 );
   if (*(ulong*)( param_1 + 0x1b0 ) >> ( bVar2 & 0x3f ) != 0) {
      uVar1 = 1L << ( bVar2 & 0x3f );
   }

   return uVar1;
}
undefined8 ZSTD_compressBlock_deprecated(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulong param_5) {
   undefined8 uVar1;
   byte bVar2;
   ulong uVar3;
   bVar2 = ( byte ) * (undefined4*)( param_1 + 0xec );
   uVar3 = *(ulong*)( param_1 + 0x1b0 );
   if (*(ulong*)( param_1 + 0x1b0 ) >> ( bVar2 & 0x3f ) != 0) {
      uVar3 = 1L << ( bVar2 & 0x3f );
   }

   if (param_5 <= uVar3) {
      uVar1 = ZSTD_compressContinue_internal(param_1, param_2, param_3, param_4, param_5, 0, 0);
      return uVar1;
   }

   return 0xffffffffffffffb8;
}
undefined8 ZSTD_compressBlock(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulong param_5) {
   undefined8 uVar1;
   byte bVar2;
   ulong uVar3;
   bVar2 = ( byte ) * (undefined4*)( param_1 + 0xec );
   uVar3 = *(ulong*)( param_1 + 0x1b0 );
   if (*(ulong*)( param_1 + 0x1b0 ) >> ( bVar2 & 0x3f ) != 0) {
      uVar3 = 1L << ( bVar2 & 0x3f );
   }

   if (param_5 <= uVar3) {
      uVar1 = ZSTD_compressContinue_internal(param_1, param_2, param_3, param_4, param_5, 0, 0);
      return uVar1;
   }

   return 0xffffffffffffffb8;
}
long ZSTD_loadCEntropy(long param_1, undefined8 param_2, long param_3, long param_4) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   uint uVar3;
   undefined4 uVar4;
   ulong uVar5;
   ulong uVar6;
   short *psVar7;
   short *psVar8;
   uint *puVar9;
   uint uVar10;
   short *psVar11;
   long lVar12;
   undefined4 *puVar13;
   long in_FS_OFFSET;
   uint local_104;
   uint local_100;
   uint local_fc;
   short local_f8;
   short asStack_f6[31];
   short local_b8[36];
   short local_70[17];
   short local_4e[7];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_104 = 0x1f;
   *(undefined4*)( param_1 + 0x808 ) = 1;
   local_100 = 0xff;
   local_fc = 1;
   uVar5 = HUF_readCTable(param_1, &local_100, param_3 + 8, param_4 + -8, &local_fc);
   if (( local_fc == 0 ) && ( local_100 == 0xff )) {
      *(undefined4*)( param_1 + 0x808 ) = 2;
   }

   if (uVar5 < 0xffffffffffffff89) {
      puVar2 = (undefined4*)( param_3 + param_4 );
      lVar12 = param_3 + 8 + uVar5;
      psVar11 = &local_f8;
      uVar5 = FSE_readNCount(psVar11, &local_104, &local_fc, lVar12, (long)puVar2 - lVar12);
      if (( uVar5 < 0xffffffffffffff89 ) && ( local_fc < 9 )) {
         uVar6 = FSE_buildCTable_wksp(param_1 + 0x810, psVar11, 0x1f, local_fc, param_2, 0x2200);
         if (uVar6 < 0xffffffffffffff89) {
            psVar8 = local_b8;
            local_100 = 0x34;
            lVar12 = lVar12 + uVar5;
            uVar5 = FSE_readNCount(psVar8, &local_100, &local_fc, lVar12, (long)puVar2 - lVar12);
            if (uVar5 < 0xffffffffffffff89) {
               if (local_fc < 10) {
                  uVar6 = FSE_buildCTable_wksp(param_1 + 0xb14, psVar8, local_100, local_fc, param_2, 0x2200);
                  if (uVar6 < 0xffffffffffffff89) {
                     uVar4 = 1;
                     if (0x33 < local_100) {
                        psVar7 = psVar8;
                        do {
                           if (*psVar7 == 0) {
                              uVar4 = 1;
                              goto LAB_00109418;
                           }

                           psVar7 = psVar7 + 1;
                        }
 while ( psVar7 != local_4e );
                        uVar4 = 2;
                     }

                     LAB_00109418:lVar12 = lVar12 + uVar5;
                     *(undefined4*)( param_1 + 0x15e8 ) = uVar4;
                     local_100 = 0x23;
                     uVar5 = FSE_readNCount(psVar8, &local_100, &local_fc, lVar12, (long)puVar2 - lVar12);
                     if (( uVar5 < 0xffffffffffffff89 ) && ( local_fc < 10 )) {
                        uVar6 = FSE_buildCTable_wksp(param_1 + 0x10c0, psVar8, local_100, local_fc, param_2, 0x2200);
                        if (uVar6 < 0xffffffffffffff89) {
                           uVar4 = 1;
                           if (0x22 < local_100) {
                              do {
                                 if (*psVar8 == 0) {
                                    uVar4 = 1;
                                    goto LAB_001094c0;
                                 }

                                 psVar8 = psVar8 + 1;
                              }
 while ( psVar8 != local_70 );
                              uVar4 = 2;
                           }

                           LAB_001094c0:puVar13 = (undefined4*)( lVar12 + uVar5 );
                           *(undefined4*)( param_1 + 0x15ec ) = uVar4;
                           puVar1 = puVar13 + 3;
                           if (puVar1 <= puVar2) {
                              uVar6 = (long)puVar2 - (long)puVar1;
                              uVar5 = 0x1f;
                              *(undefined4*)( param_1 + 0x15f0 ) = *puVar13;
                              *(undefined4*)( param_1 + 0x15f4 ) = puVar13[1];
                              *(undefined4*)( param_1 + 0x15f8 ) = puVar13[2];
                              if ((long)uVar6 < 0xfffe0000) {
                                 uVar10 = (int)uVar6 + 0x20000;
                                 uVar3 = 0x1f;
                                 if (uVar10 != 0) {
                                    for (; uVar10 >> uVar3 == 0; uVar3 = uVar3 - 1) {}
                                 }

                                 uVar5 = ( ulong )(0x1f - ( uVar3 ^ 0x1f ));
                              }

                              uVar4 = 1;
                              if ((uint)uVar5 <= local_104) {
                                 do {
                                    if (*psVar11 == 0) {
                                       uVar4 = 1;
                                       goto LAB_00109548;
                                    }

                                    psVar11 = psVar11 + 1;
                                 }
 while ( psVar11 != asStack_f6 + uVar5 );
                                 uVar4 = 2;
                              }

                              LAB_00109548:*(undefined4*)( param_1 + 0x15e4 ) = uVar4;
                              puVar9 = (uint*)( param_1 + 0x15f0 );
                              do {
                                 if (( *puVar9 == 0 ) || ( uVar6 < *puVar9 )) goto LAB_00109578;
                                 puVar9 = puVar9 + 1;
                              }
 while ( (uint*)( param_1 + 0x15fc ) != puVar9 );
                              param_3 = (long)puVar1 - param_3;
                              goto LAB_0010957f;
                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_00109578:param_3 = -0x1e;
   LAB_0010957f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong ZSTD_compress_insertDictionary(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long param_5, int *param_6, ulong param_7, int param_8, undefined4 param_9, undefined4 param_10, undefined8 param_11) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong local_48;
   uVar3 = _LC3;
   uVar2 = _LC8;
   uVar1 = __LC4;
   if (( param_6 == (int*)0x0 ) || ( param_7 < 8 )) {
      uVar4 = 0;
      if (param_8 == 2) {
         return 0xffffffffffffffe0;
      }

   }
 else {
      *(undefined4*)( param_1 + 0x808 ) = 0;
      *(undefined8*)( param_1 + 0x15f4 ) = uVar3;
      *(undefined8*)( param_1 + 0x15e4 ) = uVar1;
      *(undefined8*)( param_1 + 0x15ec ) = uVar2;
      if (param_8 == 1) {
         LAB_00109708:uVar4 = ZSTD_loadDictionaryContent(param_2, param_3, param_4, param_5, param_6);
         return uVar4;
      }

      if (*param_6 != -0x13cf5bc9) {
         if (param_8 == 0) goto LAB_00109708;
         if (param_8 == 2) {
            return 0xffffffffffffffe0;
         }

      }

      local_48 = 0;
      if (*(int*)( param_5 + 0x28 ) == 0) {
         local_48 = (ulong)(uint)param_6[1];
      }

      uVar4 = ZSTD_loadCEntropy(param_1, param_11, param_6, param_7);
      if (uVar4 < 0xffffffffffffff89) {
         uVar4 = ZSTD_loadDictionaryContent(param_2, 0, param_4, param_5, (long)param_6 + uVar4, param_7 - uVar4, param_9, param_10);
         if (uVar4 < 0xffffffffffffff89) {
            uVar4 = local_48;
         }

         return uVar4;
      }

   }

   return uVar4;
}
ulong ZSTD_compressBegin_internal(long param_1, undefined8 param_2, long param_3, undefined4 param_4, undefined4 param_5, undefined8 *param_6, undefined8 *param_7, ulong param_8, undefined4 param_9) {
   undefined4 uVar1;
   int iVar2;
   void *pvVar3;
   void *pvVar4;
   uint uVar5;
   int iVar6;
   undefined8 uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   uint uVar12;
   size_t __n;
   undefined8 *puVar13;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   byte bVar15;
   undefined4 local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined4 local_108;
   undefined4 uStack_104;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   bVar15 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_6 == (undefined8*)0x0) {
      uVar7 = 0;
      if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
         uVar7 = ZSTD_trace_compress_begin();
      }

      *(undefined8*)( param_1 + 0xe90 ) = uVar7;
      uVar8 = ZSTD_resetCCtx_internal(param_1, param_7, param_8, param_3, 0, param_9);
      if (0xffffffffffffff88 < uVar8) goto LAB_0010986e;
      uVar8 = ZSTD_compress_insertDictionary(*(undefined8*)( param_1 + 0xc80 ), param_1 + 0xc90, param_1 + 0x408, param_1 + 0x2a8, param_1 + 0xe8, param_2, param_3, param_4, param_5, 0, (int)*(undefined8*)( param_1 + 0xdc0 ));
   }
 else {
      param_3 = param_6[1];
      if (_GLOBAL_OFFSET_TABLE_ == (undefined*)0x0) {
         *(undefined8*)( param_1 + 0xe90 ) = 0;
         lVar9 = param_3;
      }
 else {
         uVar7 = ZSTD_trace_compress_begin();
         lVar9 = param_6[1];
         *(undefined8*)( param_1 + 0xe90 ) = uVar7;
      }

      if (( lVar9 != 0 ) && ( ( ( ( 0xfffffffffffdfffe < param_8 - 0x20000 || ( param_8 < ( ulong )(lVar9 * 6) ) ) || ( *(int*)( (long)param_6 + 0x17b4 ) == 0 ) ) && ( iVar6 = *(int*)( (long)param_7 + 0x44 ) ),iVar6 != 3 ) )) {
         if (*(int*)( (long)param_6 + 0xf4 ) == 0) {
            if (( *(ulong*)( attachDictSizeCutoffs + ( ulong ) * (uint*)( param_6 + 0x30 ) * 8 ) < param_8 ) && ( param_8 != 0xffffffffffffffff )) {
               if (iVar6 == 1) {
                  LAB_00109e89:if (*(int*)( param_7 + 6 ) == 0) {
                     uStack_100 = param_7[3];
                     local_f8 = param_7[4];
                     uStack_f0 = param_7[5];
                     local_e8 = param_7[6];
                     uStack_e0 = param_7[7];
                     local_d8 = param_7[8];
                     uStack_d0 = param_7[9];
                     local_c8 = param_7[10];
                     uStack_c0 = param_7[0xb];
                     local_118 = ( undefined4 ) * param_7;
                     uStack_114 = ( undefined4 )(( ulong ) * param_7 >> 0x20);
                     uStack_110 = (undefined4)param_7[1];
                     uStack_10c = ( undefined4 )((ulong)param_7[1] >> 0x20);
                     local_b8 = param_7[0xc];
                     uStack_b0 = param_7[0xd];
                     local_a8 = param_7[0xe];
                     uStack_a0 = param_7[0xf];
                     local_108 = (undefined4)param_7[2];
                     uStack_104 = ( undefined4 )((ulong)param_7[2] >> 0x20);
                     local_48 = param_7[0x1a];
                     local_98 = param_7[0x10];
                     uStack_90 = param_7[0x11];
                     local_88 = param_7[0x12];
                     uStack_80 = param_7[0x13];
                     local_78 = param_7[0x14];
                     uStack_70 = param_7[0x15];
                     local_68 = param_7[0x16];
                     uStack_60 = param_7[0x17];
                     local_58 = param_7[0x18];
                     uStack_50 = param_7[0x19];
                     goto LAB_00109a90;
                  }

               }

            }
 else if (iVar6 != 2) goto LAB_00109e89;
            local_f8 = param_7[4];
            uStack_f0 = param_7[5];
            local_e8 = param_7[6];
            uStack_e0 = param_7[7];
            local_d8 = param_7[8];
            uStack_d0 = param_7[9];
            local_c8 = param_7[10];
            uStack_c0 = param_7[0xb];
            local_b8 = param_7[0xc];
            uStack_b0 = param_7[0xd];
            local_118 = ( undefined4 ) * param_7;
            uStack_114 = ( undefined4 )(( ulong ) * param_7 >> 0x20);
            local_48 = param_7[0x1a];
            local_a8 = param_7[0xe];
            uStack_a0 = param_7[0xf];
            local_98 = param_7[0x10];
            uStack_90 = param_7[0x11];
            uStack_80 = param_7[0x13];
            local_78 = param_7[0x14];
            uStack_70 = param_7[0x15];
            local_68 = param_7[0x16];
            uStack_60 = param_7[0x17];
            local_58 = param_7[0x18];
            uStack_50 = param_7[0x19];
            uStack_100 = *(undefined8*)( (long)param_6 + 0x17c );
            uStack_110 = ( undefined4 )((ulong)param_6[0x2d] >> 0x20);
            uStack_10c = (undefined4)param_6[0x2e];
            local_108 = ( undefined4 ) * (undefined8*)( (long)param_6 + 0x174 );
            uStack_104 = ( undefined4 )(( ulong ) * (undefined8*)( (long)param_6 + 0x174 ) >> 0x20);
            local_88._4_4_ = ( undefined4 )((ulong)param_7[0x12] >> 0x20);
            local_88 = CONCAT44(local_88._4_4_, *(undefined4*)( param_6 + 0x2f7 ));
            uVar8 = ZSTD_resetCCtx_internal(param_1, &local_118, param_8, 0, 1, param_9);
            if (0xffffffffffffff88 < uVar8) goto LAB_0010986e;
            uVar1 = *(undefined4*)( param_6 + 0x2e );
            lVar9 = 0;
            iVar6 = *(int*)( param_6 + 0x2f7 );
            pvVar3 = *(void**)( param_1 + 0xd00 );
            *(undefined8*)( param_1 + 0x2c8 ) = *(undefined8*)( param_1 + 0x2b8 );
            iVar2 = *(int*)( param_6 + 0x30 );
            pvVar4 = (void*)param_6[0x1b];
            uVar8 = 1L << ( (byte)uVar1 & 0x3f );
            if (iVar2 == 1) {
               LAB_00109f88:uVar11 = 0;
               do {
                  *(uint*)( (long)pvVar3 + uVar11 * 4 ) = *(uint*)( (long)pvVar4 + uVar11 * 4 ) >> 8;
                  uVar11 = uVar11 + 1;
               }
 while ( uVar11 < uVar8 );
            }
 else {
               if (( iVar2 - 3U < 3 ) && ( iVar6 == 1 )) {
                  lVar9 = 0;
               }
 else {
                  lVar9 = 1L << ( ( byte ) * (undefined4*)( (long)param_6 + 0x16c ) & 0x3f );
                  if (iVar2 == 2) goto LAB_00109f88;
               }

               memcpy(pvVar3, pvVar4, 4L << ( (byte)uVar1 & 0x3f ));
            }

            iVar6 = *(int*)( param_6 + 0x30 );
            if (( *(int*)( param_1 + 0x104 ) == 1 ) || ( ( *(int*)( param_1 + 0x178 ) == 1 && ( *(int*)( param_1 + 0x104 ) - 3U < 3 ) ) )) {
               LAB_00109dd8:if (( *(int*)( param_6 + 0x2f7 ) == 1 ) && ( iVar6 - 3U < 3 )) {
                  memcpy(*(void**)( param_1 + 0xcc8 ), (void*)param_6[0x14], uVar8);
                  *(undefined8*)( param_1 + 0xcf0 ) = param_6[0x19];
               }

            }
 else {
               pvVar3 = (void*)param_6[0x1d];
               pvVar4 = *(void**)( param_1 + 0xd10 );
               if (1 < iVar6 - 1U) {
                  memcpy(pvVar4, pvVar3, lVar9 * 4);
                  LAB_00109dd2:iVar6 = *(int*)( param_6 + 0x30 );
                  goto LAB_00109dd8;
               }

               if (lVar9 != 0) {
                  lVar10 = 0;
                  do {
                     *(uint*)( (long)pvVar4 + lVar10 * 4 ) = *(uint*)( (long)pvVar3 + lVar10 * 4 ) >> 8;
                     lVar10 = lVar10 + 1;
                  }
 while ( lVar10 != lVar9 );
                  goto LAB_00109dd2;
               }

            }

            __n = 4L << ( ( byte ) * (int*)( param_1 + 0xcc0 ) & 0x3f );
            if (*(int*)( param_1 + 0xcc0 ) == 0) {
               __n = 0;
            }

            memset(*(void**)( param_1 + 0xd08 ), 0, __n);
            if (*(ulong*)( param_1 + 0x2c8 ) < *(ulong*)( param_1 + 0x2c0 )) {
               *(ulong*)( param_1 + 0x2c8 ) = *(ulong*)( param_1 + 0x2c0 );
            }

            uVar7 = param_6[0xe];
            *(undefined8*)( param_1 + 0xc90 ) = param_6[0xd];
            *(undefined8*)( param_1 + 0xc98 ) = uVar7;
            uVar7 = param_6[0x10];
            *(undefined8*)( param_1 + 0xca0 ) = param_6[0xf];
            *(undefined8*)( param_1 + 0xca8 ) = uVar7;
            *(undefined8*)( param_1 + 0xcb0 ) = param_6[0x11];
            *(undefined8*)( param_1 + 0xcb8 ) = param_6[0x12];
         }
 else {
            uStack_100 = param_7[3];
            local_f8 = param_7[4];
            uStack_f0 = param_7[5];
            local_e8 = param_7[6];
            uStack_e0 = param_7[7];
            local_d8 = param_7[8];
            uStack_d0 = param_7[9];
            local_c8 = param_7[10];
            uStack_c0 = param_7[0xb];
            local_118 = ( undefined4 ) * param_7;
            uStack_114 = ( undefined4 )(( ulong ) * param_7 >> 0x20);
            uStack_110 = (undefined4)param_7[1];
            uStack_10c = ( undefined4 )((ulong)param_7[1] >> 0x20);
            local_b8 = param_7[0xc];
            uStack_b0 = param_7[0xd];
            local_48 = param_7[0x1a];
            local_108 = (undefined4)param_7[2];
            uStack_104 = ( undefined4 )((ulong)param_7[2] >> 0x20);
            local_68 = param_7[0x16];
            uStack_60 = param_7[0x17];
            local_a8 = param_7[0xe];
            uStack_a0 = param_7[0xf];
            local_58 = param_7[0x18];
            uStack_50 = param_7[0x19];
            local_98 = param_7[0x10];
            uStack_90 = param_7[0x11];
            local_88 = param_7[0x12];
            uStack_80 = param_7[0x13];
            local_78 = param_7[0x14];
            uStack_70 = param_7[0x15];
            LAB_00109a90:uVar1 = uStack_114;
            ZSTD_adjustCParams_internal(&uStack_114, param_8, lVar9, 1, local_88 & 0xffffffff);
            local_88 = CONCAT44(local_88._4_4_, *(undefined4*)( param_6 + 0x2f7 ));
            uStack_114 = uVar1;
            uVar8 = ZSTD_resetCCtx_internal(param_1, &local_118, param_8, 0, 0, param_9);
            if (0xffffffffffffff88 < uVar8) goto LAB_0010986e;
            lVar9 = param_6[0xd];
            lVar10 = param_6[0xe];
            uVar5 = ( uint )(lVar9 - lVar10);
            if (uVar5 != *(uint*)( param_6 + 0x10 )) {
               *(undefined8**)( param_1 + 0xd88 ) = param_6 + 0xd;
               uVar12 = *(uint*)( param_1 + 0xca8 );
               if (*(uint*)( param_1 + 0xca8 ) < uVar5) {
                  *(ulong*)( param_1 + 0xc90 ) = ( lVar9 - lVar10 & 0xffffffffU ) + *(long*)( param_1 + 0xc98 );
                  *(ulong*)( param_1 + 0xca8 ) = CONCAT44(uVar5, uVar5);
                  uVar12 = uVar5;
               }

               *(uint*)( param_1 + 0xcb8 ) = uVar12;
            }

         }

         *(undefined4*)( param_1 + 0x298 ) = *(undefined4*)( param_6 + 0x2f6 );
         *(undefined8*)( param_1 + 0x2a0 ) = param_6[1];
         puVar14 = *(undefined8**)( param_1 + 0xc80 );
         *puVar14 = param_6[0x33];
         puVar14[0x2bf] = param_6[0x2f2];
         lVar9 = (long)puVar14 - (long)( ( ulong )(puVar14 + 1) & 0xfffffffffffffff8 );
         uVar8 = 0;
         puVar13 = (undefined8*)( (long)param_6 + ( 0x198 - lVar9 ) );
         puVar14 = (undefined8*)( ( ulong )(puVar14 + 1) & 0xfffffffffffffff8 );
         for (uVar11 = ( ulong )((int)lVar9 + 0x1600U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
            puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
         }

         goto LAB_0010986e;
      }

      uVar8 = ZSTD_resetCCtx_internal(param_1, param_7, param_8, param_3, 0, param_9);
      if (0xffffffffffffff88 < uVar8) goto LAB_0010986e;
      uVar8 = ZSTD_compress_insertDictionary(*(undefined8*)( param_1 + 0xc80 ), param_1 + 0xc90, param_1 + 0x408, param_1 + 0x2a8, param_1 + 0xe8, *param_6, param_6[1], *(undefined4*)( param_6 + 2 ), param_5, 0, (int)*(undefined8*)( param_1 + 0xdc0 ));
   }

   if (uVar8 < 0xffffffffffffff89) {
      *(long*)( param_1 + 0x2a0 ) = param_3;
      *(int*)( param_1 + 0x298 ) = (int)uVar8;
      uVar8 = 0;
   }

   LAB_0010986e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_compressBegin_usingDict_deprecated(undefined8 param_1, undefined8 param_2, undefined8 param_3, int param_4) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_158[2];
   undefined4 uStack_148;
   undefined8 uStack_144;
   undefined8 local_138[2];
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 local_108[2];
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined8 local_e8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_getCParams_internal(local_158, param_4, 0xffffffffffffffff, param_3, 0);
   puVar1 = local_108;
   uStack_ec = 1;
   if (param_4 == 0) {
      param_4 = 3;
   }

   local_108[0] = local_158[0];
   uStack_f4 = (undefined4)uStack_144;
   uStack_f0 = ( undefined4 )((ulong)uStack_144 >> 0x20);
   local_128 = CONCAT44(uStack_f4, uStack_148);
   uStack_120 = CONCAT44(1, uStack_f0);
   local_e8 = 0;
   local_118 = 0;
   local_138[0] = local_158[0];
   ZSTD_CCtxParams_init_internal(puVar1, local_138, param_4);
   ZSTD_compressBegin_internal(param_1, param_2, param_3, 0, 0, 0, puVar1, 0xffffffffffffffff, 0);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_compressBegin_usingCDict_internal(undefined8 param_1, long param_2, undefined8 param_3, undefined4 param_4, ulong param_5) {
   int iVar1;
   undefined8 uVar2;
   uint uVar3;
   uint uVar4;
   long in_FS_OFFSET;
   undefined8 local_138;
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined4 local_128;
   undefined4 uStack_124;
   undefined4 local_120;
   undefined8 local_11c;
   undefined4 local_114;
   undefined4 local_108;
   uint uStack_104;
   undefined4 uStack_100;
   undefined4 uStack_fc;
   undefined4 uStack_f8;
   undefined8 uStack_f4;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      uVar2 = 0xffffffffffffffe0;
      goto LAB_0010a1af;
   }

   iVar1 = *(int*)( param_2 + 0x17b4 );
   uVar4 = (uint)param_5;
   local_11c = param_3;
   local_114 = param_4;
   if (( ( ( param_5 < 0x20000 ) || ( param_5 < ( ulong )(*(long*)( param_2 + 8 ) * 6) ) ) || ( param_5 == 0xffffffffffffffff ) ) || ( iVar1 == 0 )) {
      local_120 = *(undefined4*)( param_2 + 0x180 );
      local_138 = *(undefined8*)( param_2 + 0x168 );
      local_128 = ( undefined4 ) * (undefined8*)( param_2 + 0x178 );
      uStack_124 = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x178 ) >> 0x20);
      uStack_130 = ( undefined4 ) * (undefined8*)( param_2 + 0x170 );
      uStack_12c = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x170 ) >> 0x20);
      ZSTD_CCtxParams_init_internal(&local_108, &local_138, iVar1);
      if (param_5 != 0xffffffffffffffff) {
         if (0x7ffff < param_5) goto LAB_0010a17c;
         uVar3 = 1;
         if (1 < uVar4) {
            iVar1 = 0x1f;
            if (uVar4 - 1 != 0) {
               for (; uVar4 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {}
            }

            uVar3 = iVar1 + 1;
         }

         goto LAB_0010a181;
      }

   }
 else {
      ZSTD_getCParams_internal(&local_108, iVar1, param_5, *(long*)( param_2 + 8 ), 3);
      local_138 = CONCAT44(uStack_104, local_108);
      uStack_130 = uStack_100;
      uStack_12c = uStack_fc;
      local_128 = uStack_f8;
      uStack_124 = (undefined4)uStack_f4;
      local_120 = ( undefined4 )((ulong)uStack_f4 >> 0x20);
      ZSTD_CCtxParams_init_internal(&local_108, &local_138, iVar1);
      if (param_5 < 0x80000) {
         iVar1 = 0x1f;
         if (uVar4 - 1 != 0) {
            for (; uVar4 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {}
         }

         uVar3 = iVar1 + 1;
      }
 else {
         LAB_0010a17c:uVar3 = 0x13;
      }

      LAB_0010a181:if (uStack_104 < uVar3) {
         uStack_104 = uVar3;
      }

   }

   uVar2 = ZSTD_compressBegin_internal(param_1, 0, 0, 0, 0, param_2, &local_108, param_5, 0);
   LAB_0010a1af:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong ZSTD_initCDict_internal(undefined8 *param_1, void *param_2, size_t param_3, int param_4, undefined4 param_5, undefined8 param_6, undefined1 param_7[16], undefined8 param_8, undefined8 param_9, undefined4 param_10) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   ulong uVar4;
   void *__dest;
   undefined4 uStack0000000000000034;
   undefined4 in_stack_00000080;
   undefined4 in_stack_00000098;
   *(undefined4*)( (long)param_1 + 0xf4 ) = in_stack_00000080;
   param_1[0x2d] = param_7._4_8_;
   param_1[0x2e] = CONCAT44((undefined4)param_8, param_7._12_4_);
   *(undefined8*)( (long)param_1 + 0x174 ) = param_8;
   *(undefined8*)( (long)param_1 + 0x17c ) = param_9;
   __dest = (void*)param_1[6];
   if (( param_2 == (void*)0x0 || param_3 == 0 ) || ( param_4 == 1 )) {
      *param_1 = param_2;
      LAB_0010a30e:param_1[1] = param_3;
      uVar4 = (long)__dest + 0x2200;
      *(undefined4*)( param_1 + 2 ) = param_5;
      if (( *(int*)( param_1 + 0xc ) == 0 ) && ( uVar4 <= (ulong)param_1[5] )) {
         param_1[8] = uVar4;
         param_1[6] = uVar4;
         param_1[7] = uVar4;
      }
 else {
         *(undefined1*)( param_1 + 0xb ) = 1;
         __dest = (void*)0x0;
      }

      param_1[3] = __dest;
      uVar3 = _LC3;
      uVar2 = _LC8;
      uVar1 = __LC4;
      *(undefined4*)( param_1 + 0x134 ) = 0;
      *(undefined8*)( (long)param_1 + 0x178c ) = uVar3;
      *(undefined8*)( (long)param_1 + 0x177c ) = uVar1;
      *(undefined8*)( (long)param_1 + 0x1784 ) = uVar2;
      uVar4 = ZSTD_reset_matchState(param_1 + 0xd, param_1 + 4, param_7 + 4, in_stack_00000098, 0, 1, 0);
      if (uVar4 < 0xffffffffffffff89) {
         uStack0000000000000034 = 3;
         param_10 = 1;
         uVar4 = ZSTD_compress_insertDictionary(param_1 + 0x33, param_1 + 0xd, 0, param_1 + 4, param_7, *param_1, param_1[1], param_5, 1, 1, param_1[3]);
         if (uVar4 < 0xffffffffffffff89) {
            *(int*)( param_1 + 0x2f6 ) = (int)uVar4;
            return 0;
         }

      }

   }
 else {
      uVar4 = ( param_3 + 7 & 0xfffffffffffffff8 ) + (long)__dest;
      if (( *(int*)( param_1 + 0xc ) == 0 ) && ( uVar4 <= (ulong)param_1[5] )) {
         param_1[8] = uVar4;
         param_1[6] = uVar4;
         param_1[7] = uVar4;
         if (__dest != (void*)0x0) {
            *param_1 = __dest;
            memcpy(__dest, param_2, param_3);
            __dest = (void*)param_1[6];
            goto LAB_0010a30e;
         }

      }
 else {
         *(undefined1*)( param_1 + 0xb ) = 1;
      }

      uVar4 = 0xffffffffffffffc0;
   }

   return uVar4;
}
void ZSTD_compressBegin_advanced_internal(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, long param_7, undefined4 param_8) {
   ulong uVar1;
   undefined4 uVar2;
   uVar2 = ( undefined4 )(( ulong ) * (undefined8*)( param_7 + 0x18 ) >> 0x20);
   uVar1 = ZSTD_checkCParams();
   if (uVar1 < 0xffffffffffffff89) {
      ZSTD_compressBegin_internal(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, 0, uVar2);
   }

   return;
}
void ZSTD_compressBegin_advanced(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4) {
   ulong uVar1;
   long in_FS_OFFSET;
   undefined1 auStack_f8[28];
   undefined4 uStack_dc;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_CCtxParams_init_internal(auStack_f8, &stack0x00000008, 0);
   uVar1 = ZSTD_checkCParams();
   if (uVar1 < 0xffffffffffffff89) {
      ZSTD_compressBegin_internal(param_1, param_2, param_3, 0, 0, 0, auStack_f8, param_4, 0, uStack_dc);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_compressBegin_usingDict(void) {
   ZSTD_compressBegin_usingDict_deprecated();
   return;
}
void ZSTD_compressBegin(undefined8 param_1, undefined4 param_2) {
   ZSTD_compressBegin_usingDict_deprecated(param_1, 0, 0, param_2);
   return;
}
void ZSTD_CCtx_trace(long param_1, long param_2) {
   long in_FS_OFFSET;
   undefined4 local_58;
   uint local_54;
   undefined4 local_50;
   undefined4 local_4c;
   undefined8 uStack_48;
   undefined4 uStack_40;
   undefined4 uStack_3c;
   long local_38;
   undefined8 local_30;
   long lStack_28;
   undefined4 uStack_20;
   undefined4 local_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = CONCAT44(local_30._4_4_, (undefined4)local_30);
   if (( *(long*)( param_1 + 0xe90 ) != 0 ) && ( local_30 = CONCAT44(local_30._4_4_, (undefined4)local_30) ),PTR_ZSTD_trace_compress_end_00113008 != (undefined*)0x0) {
      local_54 = 1;
      if (( *(long*)( param_1 + 0xdd8 ) == 0 ) && ( *(long*)( param_1 + 0xe00 ) == 0 )) {
         local_54 = ( uint )(0 < *(int*)( param_1 + 0x134 ));
      }

      local_50 = *(undefined4*)( param_1 + 0x298 );
      uStack_20 = 0;
      local_38 = param_2 + *(long*)( param_1 + 0x308 );
      local_4c = 0;
      uStack_48 = *(undefined8*)( param_1 + 0x2a0 );
      local_30 = param_1 + 0xe8;
      local_1c = 0;
      local_58 = 0x290a;
      uStack_40 = ( undefined4 ) * (undefined8*)( param_1 + 0x300 );
      uStack_3c = ( undefined4 )(( ulong ) * (undefined8*)( param_1 + 0x300 ) >> 0x20);
      lStack_28 = param_1;
      ZSTD_trace_compress_end(*(long*)( param_1 + 0xe90 ), &local_58);
   }

   *(undefined8*)( param_1 + 0xe90 ) = 0;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_compressEnd_public(int *param_1, long param_2, long param_3) {
   int iVar1;
   undefined4 uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   undefined4 *puVar6;
   undefined4 *puVar7;
   undefined4 *puVar8;
   uVar3 = ZSTD_compressContinue_internal();
   if (0xffffffffffffff88 < uVar3) {
      return uVar3;
   }

   uVar5 = param_3 - uVar3;
   puVar6 = (undefined4*)( param_2 + uVar3 );
   iVar1 = *param_1;
   if (iVar1 == 0) {
      return 0xffffffffffffffc4;
   }

   if (iVar1 == 1) {
      uVar4 = ZSTD_writeFrameHeader(puVar6, uVar5, param_1 + 0x3a, 0, 0);
      if (0xffffffffffffff88 < uVar4) {
         return uVar4;
      }

      *param_1 = 2;
      uVar5 = uVar5 - uVar4;
      puVar7 = (undefined4*)( (long)puVar6 + uVar4 );
      LAB_0010a716:if (uVar5 < 3) {
         return 0xffffffffffffffba;
      }

      *(undefined1*)( (long)puVar7 + 2 ) = 0;
      iVar1 = param_1[0x43];
      puVar8 = (undefined4*)( (long)puVar7 + 3 );
      uVar5 = uVar5 - 3;
      *(undefined2*)puVar7 = 1;
      if (iVar1 != 0) goto LAB_0010a741;
   }
 else {
      puVar7 = puVar6;
      if (iVar1 != 3) goto LAB_0010a716;
      puVar8 = puVar6;
      if (param_1[0x43] == 0) {
         *param_1 = 0;
         uVar5 = 0;
         goto LAB_0010a772;
      }

      LAB_0010a741:uVar2 = ZSTD_XXH64_digest(param_1 + 0xc4);
      if (uVar5 < 4) {
         return 0xffffffffffffffba;
      }

      *puVar8 = uVar2;
      puVar8 = puVar8 + 1;
   }

   uVar5 = (long)puVar8 - (long)puVar6;
   *param_1 = 0;
   if (0xffffffffffffff88 < uVar5) {
      return uVar5;
   }

   LAB_0010a772:if (( *(long*)( param_1 + 0xbe ) != 0 ) && ( *(long*)( param_1 + 0xbe ) != *(long*)( param_1 + 0xc0 ) + 1 )) {
      return 0xffffffffffffffb8;
   }

   ZSTD_CCtx_trace(param_1, uVar5);
   return uVar3 + uVar5;
}
void ZSTD_compressEnd(void) {
   ZSTD_compressEnd_public();
   return;
}
void ZSTD_compress_advanced(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 param_9, undefined4 param_10) {
   ulong uVar1;
   long lVar2;
   uVar1 = ZSTD_checkCParams();
   if (uVar1 < 0xffffffffffffff89) {
      lVar2 = param_1 + 0x1c0;
      ZSTD_CCtxParams_init_internal(lVar2, &param_8, 0);
      uVar1 = ZSTD_compressBegin_internal(param_1, param_6, param_7, 0, 0, 0, lVar2, (int)param_5, 0);
      if (uVar1 < 0xffffffffffffff89) {
         ZSTD_compressEnd_public(param_1, param_2, param_3, param_4, param_5);
         return;
      }

   }

   return;
}
void ZSTD_compress_advanced_internal(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8) {
   undefined8 uVar1;
   ulong uVar2;
   uVar1 = 0;
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      uVar1 = ZSTD_trace_compress_begin();
   }

   *(undefined8*)( param_1 + 0xe90 ) = uVar1;
   uVar2 = ZSTD_resetCCtx_internal(param_1, param_8, param_5, param_7, 0, 0);
   if (uVar2 < 0xffffffffffffff89) {
      uVar2 = ZSTD_compress_insertDictionary(*(undefined8*)( param_1 + 0xc80 ), param_1 + 0xc90, param_1 + 0x408, param_1 + 0x2a8, param_1 + 0xe8, param_6, param_7, 0, 0, 0, *(undefined8*)( param_1 + 0xdc0 ));
      if (uVar2 < 0xffffffffffffff89) {
         *(int*)( param_1 + 0x298 ) = (int)uVar2;
         *(undefined8*)( param_1 + 0x2a0 ) = param_7;
         ZSTD_compressEnd_public(param_1, param_2, param_3, param_4, param_5);
         return;
      }

   }

   return;
}
void ZSTD_compress_usingDict(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, long param_6, undefined8 param_7, int param_8) {
   ulong uVar1;
   undefined8 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 local_b8[2];
   undefined4 uStack_a8;
   undefined8 uStack_a4;
   undefined8 local_98[2];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_68;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = 0;
   if (param_6 != 0) {
      uVar2 = param_7;
   }

   ZSTD_getCParams_internal(local_b8, param_8, param_5, uVar2, 0);
   uStack_4c = 1;
   lVar3 = param_1 + 0x1c0;
   if (param_8 == 0) {
      param_8 = 3;
   }

   local_68 = local_b8[0];
   uStack_54 = (undefined4)uStack_a4;
   uStack_50 = ( undefined4 )((ulong)uStack_a4 >> 0x20);
   local_88 = CONCAT44(uStack_54, uStack_a8);
   uStack_80 = CONCAT44(1, uStack_50);
   local_48 = 0;
   local_78 = 0;
   local_98[0] = local_b8[0];
   ZSTD_CCtxParams_init_internal(lVar3, local_98, param_8);
   uVar1 = ZSTD_compressBegin_internal(param_1, param_6, param_7, 0, 0, 0, lVar3, param_5, 0);
   if (uVar1 < 0xffffffffffffff89) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ZSTD_compressEnd_public(param_1, param_2, param_3, param_4, param_5);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_compressCCtx(void) {
   ZSTD_compress_usingDict();
   return;
}
long ZSTD_estimateCDictSize_advanced(long param_1, int param_2) {
   long lVar1;
   long lVar2;
   uint uStack0000000000000008;
   byte bStack000000000000000c;
   byte in_stack_00000010;
   int in_stack_00000020;
   lVar2 = 1L << ( in_stack_00000010 & 0x3f );
   lVar1 = ( ( 1L << ( bStack000000000000000c & 0x3f ) ) + lVar2 ) * 4;
   if (( in_stack_00000020 - 3U < 3 ) && ( 0xe < uStack0000000000000008 )) {
      lVar1 = lVar1 + ( lVar2 + 0x3fU & 0xffffffffffffffc0 );
   }

   lVar1 = lVar1 + 0x3a40;
   if (param_2 != 1) {
      lVar1 = lVar1 + ( param_1 + 7U & 0xfffffffffffffff8 );
   }

   return lVar1;
}
long ZSTD_estimateCDictSize(long param_1, undefined8 param_2) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   uint local_38;
   byte local_34;
   byte local_30;
   int local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_getCParams_internal(&local_38, param_2, 0xffffffffffffffff, param_1, 2);
   if (local_20 - 3U < 3) {
      lVar2 = 1L << ( local_30 & 0x3f );
      lVar1 = ( ( 1L << ( local_34 & 0x3f ) ) + lVar2 ) * 4;
      uVar3 = lVar2 + 0x3fU & 0xffffffffffffffc0;
      if (local_38 < 0xf) {
         uVar3 = 0;
      }

   }
 else {
      uVar3 = 0;
      lVar1 = ( ( 1L << ( local_30 & 0x3f ) ) + ( 1L << ( local_34 & 0x3f ) ) ) * 4;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar1 + 0x3a40 + ( param_1 + 7U & 0xfffffffffffffff8 ) + uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long ZSTD_sizeof_CDict(long param_1) {
   long lVar1;
   if (param_1 != 0) {
      lVar1 = 0x17c0;
      if (*(long*)( param_1 + 0x20 ) == param_1) {
         lVar1 = 0;
      }

      return ( *(long*)( param_1 + 0x28 ) - *(long*)( param_1 + 0x20 ) ) + lVar1;
   }

   return 0;
}
undefined8 ZSTD_freeCDict(void *param_1) {
   void *__ptr;
   code *pcVar1;
   undefined8 uVar2;
   void *pvVar3;
   if (param_1 == (void*)0x0) {
      return 0;
   }

   __ptr = *(void**)( (long)param_1 + 0x20 );
   pcVar1 = *(code**)( (long)param_1 + 0x17a0 );
   uVar2 = *(undefined8*)( (long)param_1 + 0x17a8 );
   if (param_1 < __ptr) {
      *(undefined8*)( (long)param_1 + 0x60 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined1(*) [16])( (long)param_1 + ( 16*i + 32 ) ) = (undefined1[16])0;
      }

      if (pcVar1 == (code*)0x0) {
         free(__ptr);
         goto LAB_0010ade8;
      }

      ( *pcVar1 )(uVar2);
   }
 else {
      pvVar3 = *(void**)( (long)param_1 + 0x28 );
      *(undefined8*)( (long)param_1 + 0x60 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined1(*) [16])( (long)param_1 + ( 16*i + 32 ) ) = (undefined1[16])0;
      }

      if (__ptr == (void*)0x0) {
         if (param_1 < pvVar3) {
            return 0;
         }

         if (pcVar1 == (code*)0x0) {
            LAB_0010ade8:free(param_1);
            return 0;
         }

      }
 else {
         if (pcVar1 == (code*)0x0) {
            free(__ptr);
            if (param_1 < pvVar3) {
               return 0;
            }

            goto LAB_0010ade8;
         }

         ( *pcVar1 )(uVar2);
         if (param_1 < pvVar3) {
            return 0;
         }

      }

   }

   ( *pcVar1 )(uVar2, param_1);
   return 0;
}
void ZSTD_clearAllDicts(long param_1) {
   if (*(void**)( param_1 + 0xe48 ) != (void*)0x0) {
      if (*(code**)( param_1 + 0x370 ) == (code*)0x0) {
         free(*(void**)( param_1 + 0xe48 ));
      }
 else {
         ( **(code**)( param_1 + 0x370 ) )(*(undefined8*)( param_1 + 0x378 ));
      }

   }

   ZSTD_freeCDict(*(undefined8*)( param_1 + 0xe68 ));
   *(undefined8*)( param_1 + 0xe68 ) = 0;
   *(undefined8*)( param_1 + 0xe88 ) = 0;
   *(undefined8*)( param_1 + 0xe70 ) = 0;
   *(undefined1(*) [16])( param_1 + 0xe48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0xe58 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0xe78 ) = (undefined1[16])0x0;
   return;
}
undefined8 ZSTD_freeCCtx(void *param_1) {
   code *pcVar1;
   void *__ptr;
   undefined8 uVar2;
   bool bVar3;
   if (param_1 == (void*)0x0) {
      return 0;
   }

   if (*(long*)( (long)param_1 + 0x388 ) != 0) {
      return 0xffffffffffffffc0;
   }

   if (param_1 < *(void**)( (long)param_1 + 0x2a8 )) {
      ZSTD_clearAllDicts();
      __ptr = *(void**)( (long)param_1 + 0x2a8 );
      bVar3 = false;
      pcVar1 = *(code**)( (long)param_1 + 0x370 );
      uVar2 = *(undefined8*)( (long)param_1 + 0x378 );
      *(undefined8*)( (long)param_1 + 0x2e8 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined1(*) [16])( (long)param_1 + ( 16*i + 680 ) ) = (undefined1[16])0;
      }

      if (__ptr == (void*)0x0) goto LAB_0010af9e;
      LAB_0010af10:if (pcVar1 == (code*)0x0) {
         free(__ptr);
      }
 else {
         ( *pcVar1 )(uVar2);
      }

   }
 else {
      bVar3 = param_1 < *(void**)( (long)param_1 + 0x2b0 );
      ZSTD_clearAllDicts();
      __ptr = *(void**)( (long)param_1 + 0x2a8 );
      *(undefined8*)( (long)param_1 + 0x2e8 ) = 0;
      pcVar1 = *(code**)( (long)param_1 + 0x370 );
      uVar2 = *(undefined8*)( (long)param_1 + 0x378 );
      for (int i = 0; i < 4; i++) {
         *(undefined1(*) [16])( (long)param_1 + ( 16*i + 680 ) ) = (undefined1[16])0;
      }

      if (__ptr != (void*)0x0) goto LAB_0010af10;
   }

   if (bVar3) {
      return 0;
   }

   pcVar1 = *(code**)( (long)param_1 + 0x370 );
   uVar2 = *(undefined8*)( (long)param_1 + 0x378 );
   LAB_0010af9e:if (pcVar1 == (code*)0x0) {
      free(param_1);
   }
 else {
      ( *pcVar1 )(uVar2, param_1);
   }

   return 0;
}
undefined8 ZSTD_CCtx_loadDictionary_advanced_part_0(long param_1, void *param_2, size_t param_3, int param_4, undefined4 param_5) {
   void *__dest;
   ZSTD_clearAllDicts();
   if (( param_2 != (void*)0x0 ) && ( param_3 != 0 )) {
      if (param_4 != 1) {
         if (*(long*)( param_1 + 0x388 ) != 0) {
            return 0xffffffffffffffc0;
         }

         if (*(code**)( param_1 + 0x368 ) == (code*)0x0) {
            __dest = malloc(param_3);
         }
 else {
            __dest = (void*)( **(code**)( param_1 + 0x368 ) )(*(undefined8*)( param_1 + 0x378 ), param_3);
         }

         if (__dest == (void*)0x0) {
            return 0xffffffffffffffc0;
         }

         param_2 = memcpy(__dest, param_2, param_3);
         *(void**)( param_1 + 0xe48 ) = param_2;
      }

      *(void**)( param_1 + 0xe50 ) = param_2;
      *(size_t*)( param_1 + 0xe58 ) = param_3;
      *(undefined4*)( param_1 + 0xe60 ) = param_5;
   }

   return 0;
}
undefined8 ZSTD_CCtx_refCDict(long param_1, undefined8 param_2) {
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      ZSTD_clearAllDicts();
      *(undefined8*)( param_1 + 0xe70 ) = param_2;
      return 0;
   }

   return 0xffffffffffffffc4;
}
undefined8 ZSTD_CCtx_refPrefix_advanced(long param_1, long param_2, long param_3, undefined4 param_4) {
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      ZSTD_clearAllDicts();
      if (( param_2 != 0 ) && ( param_3 != 0 )) {
         *(long*)( param_1 + 0xe78 ) = param_2;
         *(long*)( param_1 + 0xe80 ) = param_3;
         *(undefined4*)( param_1 + 0xe88 ) = param_4;
      }

      return 0;
   }

   return 0xffffffffffffffc4;
}
undefined8 ZSTD_CCtx_reset(long param_1, uint param_2) {
   ulong uVar1;
   undefined8 *puVar2;
   byte bVar3;
   bVar3 = 0;
   if (( param_2 & 0xfffffffd ) == 1) {
      *(undefined4*)( param_1 + 0xe18 ) = 0;
      *(undefined8*)( param_1 + 0x2f8 ) = 0;
      if (1 < param_2 - 2) {
         return 0;
      }

   }
 else {
      if (1 < param_2 - 2) {
         return 0;
      }

      if (*(int*)( param_1 + 0xe18 ) != 0) {
         return 0xffffffffffffffc4;
      }

   }

   ZSTD_clearAllDicts(param_1);
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( param_1 + 0xe0 ) = 0;
   puVar2 = (undefined8*)( param_1 + 0x18U & 0xfffffffffffffff8 );
   uVar1 = ( ulong )(( (int)param_1 - (int)puVar2 ) + 0xe8U >> 3);
   for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
   }

   *(undefined4*)( param_1 + 0x3c ) = 3;
   *(undefined4*)( param_1 + 0x30 ) = 1;
   return 0;
}
undefined8 ZSTD_CCtx_refPrefix(long param_1, long param_2, long param_3) {
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      ZSTD_clearAllDicts();
      if (( param_2 != 0 ) && ( param_3 != 0 )) {
         *(long*)( param_1 + 0xe78 ) = param_2;
         *(long*)( param_1 + 0xe80 ) = param_3;
         *(undefined4*)( param_1 + 0xe88 ) = 1;
      }

      return 0;
   }

   return 0xffffffffffffffc4;
}
/* WARNING: Removing unreachable block (ram,0x0010b2e7) *//* WARNING: Removing unreachable block (ram,0x0010b285) */void ZSTD_initCCtx(undefined8 *param_1) {
   uint *puVar1;
   long lVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   undefined8 *puVar6;
   byte bVar7;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined8 in_stack_00000018;
   bVar7 = 0;
   *param_1 = 0;
   param_1[0x28f] = 0;
   puVar6 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x1480U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }

   param_1[0x6f] = in_stack_00000018;
   param_1[0x6d] = in_stack_00000008;
   param_1[0x6e] = in_stack_00000010;
   puVar1 = (uint*)cpuid_basic_info(0);
   uVar5 = puVar1[2];
   uVar3 = puVar1[3];
   if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar5 = *(uint*)( lVar2 + 8 );
      uVar3 = *(uint*)( lVar2 + 0xc );
      if (( ~*(uint *)(lVar2 + 4) & 0x108 ) == 0) {
         *(undefined4*)( param_1 + 1 ) = 1;
      }

   }

   ZSTD_clearAllDicts(param_1, 0, uVar5, uVar3);
   param_1[2] = 0;
   param_1[0x1c] = 0;
   puVar6 = (undefined8*)( ( ulong )(param_1 + 3) & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )(( (int)( param_1 + 2 ) - (int)(undefined8*)( ( ulong )(param_1 + 3) & 0xfffffffffffffff8 ) ) + 0xd8U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
   }

   *(undefined4*)( (long)param_1 + 0x3c ) = 3;
   *(undefined4*)( param_1 + 6 ) = 1;
   return;
}
void *ZSTD_createCCtx_advanced(void) {
   void *pvVar1;
   code *in_stack_00000008;
   long in_stack_00000010;
   undefined8 in_stack_00000018;
   pvVar1 = (void*)0x0;
   if (( in_stack_00000008 == (code*)0x0 ) == ( in_stack_00000010 == 0 )) {
      if (in_stack_00000008 == (code*)0x0) {
         pvVar1 = malloc(0x1480);
      }
 else {
         pvVar1 = (void*)( *in_stack_00000008 )(in_stack_00000018, 0x1480);
      }

      if (pvVar1 != (void*)0x0) {
         ZSTD_initCCtx(pvVar1);
      }

   }

   return pvVar1;
}
void *ZSTD_createCCtx(void) {
   void *pvVar1;
   pvVar1 = malloc(0x1480);
   if (pvVar1 != (void*)0x0) {
      ZSTD_initCCtx(pvVar1);
   }

   return pvVar1;
}
undefined8 ZSTD_compress(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5) {
   undefined8 __ptr;
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined1 auStack_14c8[680];
   undefined1 local_1220[16];
   undefined1 local_1210[16];
   undefined1 local_1200[16];
   undefined1 local_11f0[16];
   undefined8 local_11e0;
   code *local_1158;
   undefined8 local_1150;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_initCCtx(auStack_14c8);
   uVar1 = ZSTD_compress_usingDict(auStack_14c8, param_1, param_2, param_3, param_4, 0, 0, param_5);
   ZSTD_clearAllDicts(auStack_14c8);
   __ptr = local_1220._0_8_;
   local_11e0 = 0;
   local_1220 = (undefined1[16])0x0;
   local_1210 = (undefined1[16])0x0;
   local_1200 = (undefined1[16])0x0;
   local_11f0 = (undefined1[16])0x0;
   if ((void*)__ptr != (void*)0x0) {
      if (local_1158 == (code*)0x0) {
         free((void*)__ptr);
      }
 else {
         ( *local_1158 )(local_1150);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_CCtx_loadDictionary_byReference(long param_1, long param_2, long param_3) {
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      ZSTD_clearAllDicts();
      if (( param_2 != 0 ) && ( param_3 != 0 )) {
         *(long*)( param_1 + 0xe50 ) = param_2;
         *(long*)( param_1 + 0xe58 ) = param_3;
         *(undefined4*)( param_1 + 0xe60 ) = 0;
      }

      return 0;
   }

   return 0xffffffffffffffc4;
}
undefined8 ZSTD_CCtx_loadDictionary(long param_1, void *param_2, size_t param_3) {
   void *__dest;
   if (*(int*)( param_1 + 0xe18 ) != 0) {
      return 0xffffffffffffffc4;
   }

   ZSTD_clearAllDicts();
   if (( param_2 != (void*)0x0 ) && ( param_3 != 0 )) {
      if (*(long*)( param_1 + 0x388 ) == 0) {
         if (*(code**)( param_1 + 0x368 ) == (code*)0x0) {
            __dest = malloc(param_3);
         }
 else {
            __dest = (void*)( **(code**)( param_1 + 0x368 ) )(*(undefined8*)( param_1 + 0x378 ), param_3);
         }

         if (__dest != (void*)0x0) {
            memcpy(__dest, param_2, param_3);
            *(size_t*)( param_1 + 0xe58 ) = param_3;
            *(undefined4*)( param_1 + 0xe60 ) = 0;
            *(void**)( param_1 + 0xe48 ) = __dest;
            *(void**)( param_1 + 0xe50 ) = __dest;
            return 0;
         }

      }

      return 0xffffffffffffffc0;
   }

   return 0;
}
undefined8 ZSTD_CCtx_loadDictionary_advanced(long param_1, void *param_2, size_t param_3, int param_4, undefined4 param_5) {
   void *__dest;
   if (*(int*)( param_1 + 0xe18 ) != 0) {
      return 0xffffffffffffffc4;
   }

   ZSTD_clearAllDicts();
   if (( param_2 != (void*)0x0 ) && ( param_3 != 0 )) {
      if (param_4 != 1) {
         if (*(long*)( param_1 + 0x388 ) != 0) {
            return 0xffffffffffffffc0;
         }

         if (*(code**)( param_1 + 0x368 ) == (code*)0x0) {
            __dest = malloc(param_3);
         }
 else {
            __dest = (void*)( **(code**)( param_1 + 0x368 ) )(*(undefined8*)( param_1 + 0x378 ), param_3);
         }

         if (__dest == (void*)0x0) {
            return 0xffffffffffffffc0;
         }

         param_2 = memcpy(__dest, param_2, param_3);
         *(void**)( param_1 + 0xe48 ) = param_2;
      }

      *(void**)( param_1 + 0xe50 ) = param_2;
      *(size_t*)( param_1 + 0xe58 ) = param_3;
      *(undefined4*)( param_1 + 0xe60 ) = param_5;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void *ZSTD_createCDict_advanced2(undefined8 param_1, ulong param_2, int param_3, undefined4 param_4, undefined8 *param_5, undefined8 param_6, code *param_7, long param_8, undefined8 param_9) {
   code *pcVar1;
   undefined4 uVar2;
   long lVar3;
   void *pvVar4;
   ulong uVar5;
   int iVar6;
   size_t __size;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 *local_160;
   undefined8 local_158;
   uint uStack_150;
   undefined4 uStack_14c;
   undefined4 local_148;
   undefined4 uStack_144;
   uint local_140;
   undefined8 local_138;
   uint uStack_130;
   undefined4 uStack_12c;
   undefined4 local_128;
   undefined4 uStack_124;
   uint local_120;
   undefined4 local_118;
   uint uStack_114;
   undefined4 uStack_110;
   uint uStack_10c;
   undefined4 local_108;
   undefined4 uStack_104;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   ulong uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   uStack_100 = param_5[3];
   local_f8 = param_5[4];
   uStack_f0 = param_5[5];
   local_e8 = param_5[6];
   uStack_e0 = param_5[7];
   local_d8 = param_5[8];
   uStack_d0 = param_5[9];
   local_c8 = param_5[10];
   uStack_c0 = param_5[0xb];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = param_5[0xc];
   uStack_b0 = param_5[0xd];
   local_118 = ( undefined4 ) * param_5;
   uStack_114 = ( uint )(( ulong ) * param_5 >> 0x20);
   uStack_110 = (undefined4)param_5[1];
   uStack_10c = ( uint )((ulong)param_5[1] >> 0x20);
   local_108 = (undefined4)param_5[2];
   uStack_104 = ( undefined4 )((ulong)param_5[2] >> 0x20);
   local_48 = param_5[0x1a];
   local_98 = param_5[0x10];
   uStack_90 = param_5[0x11];
   local_88 = param_5[0x12];
   uStack_80 = param_5[0x13];
   local_a8 = param_5[0xe];
   uVar5 = param_5[0xf];
   local_78 = param_5[0x14];
   uStack_70 = param_5[0x15];
   local_68 = param_5[0x16];
   uStack_60 = param_5[0x17];
   local_58 = param_5[0x18];
   uStack_50 = param_5[0x19];
   uStack_a0 = uVar5;
   if (( param_7 == (code*)0x0 ) == ( param_8 == 0 )) {
      uStack_a0._0_4_ = (int)uVar5;
      if ((int)uStack_a0 == 0) {
         uVar7 = param_2;
         ZSTD_getCParamsFromCCtxParams(&local_158, &local_118, 0xffffffffffffffff, param_2, 2);
      }
 else {
         uStack_f0._4_4_ = ( undefined4 )((ulong)uStack_f0 >> 0x20);
         uVar2 = uStack_f0._4_4_;
         ZSTD_getCParams_internal(&local_138, uVar2, 0, param_2, 2);
         uVar7 = (ulong)local_120;
         local_140 = local_120;
         uStack_150 = uStack_130;
         if (local_120 - 3 < 3) {
            uStack_150 = uStack_130 + 2;
         }

         local_148 = local_128;
         uStack_144 = uStack_124;
         local_158 = local_138;
         uStack_14c = uStack_12c;
         ZSTD_overrideCParams(&local_158, &uStack_114);
      }

      local_160 = &local_138;
      if (( ( local_140 - 3 < 3 ) && ( local_158._4_4_ < uStack_150 ) ) && ( local_158._4_4_ < 0x19 )) {
         uVar5 = uVar5 & 0xffffffff;
      }
 else {
         uStack_a0 = uStack_a0 & 0xffffffff00000000;
         uVar7 = param_2;
         ZSTD_getCParamsFromCCtxParams(&local_158, &local_118, 0xffffffffffffffff, param_2, 2);
         uVar5 = 0;
      }

      uStack_100 = CONCAT44(local_140, uStack_144);
      uStack_114 = (uint)local_158;
      uStack_110 = ( undefined4 )((ulong)local_158 >> 0x20);
      uStack_10c = uStack_150;
      local_108 = uStack_14c;
      uStack_104 = local_148;
      iVar6 = (int)local_88;
      if ((int)local_88 == 0) {
         iVar6 = 2 - ( ( uint )(0xe < uStack_114) & (uint)CONCAT71(( int7 )(uVar7 >> 8), local_140 - 3 < 3) );
      }

      local_138 = local_158;
      local_88 = CONCAT44(local_88._4_4_, iVar6);
      uStack_130 = uStack_150;
      local_120 = local_140;
      lVar3 = ZSTD_sizeof_matchState(local_160, iVar6, uVar5, 0);
      __size = lVar3 + 0x39c0;
      if (param_3 != 1) {
         __size = __size + ( param_2 + 7 & 0xfffffffffffffff8 );
      }

      if (param_7 == (code*)0x0) {
         pvVar4 = malloc(__size);
      }
 else {
         pvVar4 = (void*)( *param_7 )(param_9, __size);
      }

      if (pvVar4 != (void*)0x0) {
         uVar7 = __size + (long)pvVar4;
         uVar5 = (long)pvVar4 + 0x17c0;
         if (uVar7 < uVar5) {
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            _DAT_00000020 = pvVar4;
            ( *pcVar1 )();
         }

         for (int i = 0; i < 3; i++) {
            *(ulong*)( (long)pvVar4 + ( 8*i + 48 ) ) = uVar5;
         }

         *(ulong*)( (long)pvVar4 + 0x48 ) = uVar7 & 0xffffffffffffffc0;
         *(ulong*)( (long)pvVar4 + 0x50 ) = uVar7 & 0xffffffffffffffc0;
         *(undefined8*)( (long)pvVar4 + 0x17a8 ) = param_9;
         *(code**)( (long)pvVar4 + 0x1798 ) = param_7;
         *(long*)( (long)pvVar4 + 0x17a0 ) = param_8;
         *(void**)( (long)pvVar4 + 0x20 ) = pvVar4;
         *(ulong*)( (long)pvVar4 + 0x28 ) = uVar7;
         *(undefined1*)( (long)pvVar4 + 0x58 ) = 0;
         *(undefined4*)( (long)pvVar4 + 0x5c ) = 0;
         *(undefined8*)( (long)pvVar4 + 0x60 ) = 0;
         *(undefined4*)( (long)pvVar4 + 0x17b4 ) = 0;
         *(int*)( (long)pvVar4 + 0x17b8 ) = iVar6;
         uVar5 = ZSTD_initCDict_internal(pvVar4, param_1, param_2, param_3, param_4, param_6, CONCAT44(uStack_114, local_118), CONCAT44(uStack_10c, uStack_110), CONCAT44(uStack_104, local_108), uStack_100, local_f8, uStack_f0, local_e8, uStack_e0, local_d8, uStack_d0, local_c8, uStack_c0, local_b8, uStack_b0, local_a8, uStack_a0, local_98, uStack_90, local_88, uStack_80, local_78, uStack_70, local_68, uStack_60, local_58, uStack_50, local_48);
         if (uVar5 < 0xffffffffffffff89) goto LAB_0010bb07;
      }

      ZSTD_freeCDict(pvVar4);
   }

   pvVar4 = (void*)0x0;
   LAB_0010bb07:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pvVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_createCDict_advanced(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8, undefined4 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13) {
   long lVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined1 auStack_e8[12];
   undefined4 uStack_dc;
   undefined4 uStack_d4;
   undefined4 local_c8;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = (undefined8*)auStack_e8;
   for (lVar1 = 0x1b; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   auStack_e8._4_8_ = param_7;
   uStack_dc = param_8;
   local_c8 = 1;
   uStack_d4 = param_9;
   local_50 = param_11;
   uStack_48 = param_12;
   local_40 = param_13;
   ZSTD_createCDict_advanced2(param_1, param_2, param_3, param_4, auStack_e8, param_1, param_11, param_12, param_13);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_CCtx_init_compressStream2(long param_1, int param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   undefined4 uVar1;
   undefined8 uVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   int local_13c;
   undefined1 local_138[8];
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined4 uStack_128;
   undefined8 uStack_124;
   undefined4 local_118;
   uint uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined4 local_108;
   undefined4 uStack_104;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   long lStack_50;
   undefined8 local_48;
   long local_40;
   local_f8 = *(undefined8*)( param_1 + 0x30 );
   uStack_f0 = *(undefined8*)( param_1 + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = *(undefined8*)( param_1 + 0x40 );
   uStack_e0 = *(undefined8*)( param_1 + 0x48 );
   local_d8 = *(undefined8*)( param_1 + 0x50 );
   uStack_d0 = *(undefined8*)( param_1 + 0x58 );
   local_c8 = *(undefined8*)( param_1 + 0x60 );
   uStack_c0 = *(undefined8*)( param_1 + 0x68 );
   uStack_100 = *(undefined8*)( param_1 + 0x28 );
   local_118 = ( undefined4 ) * (undefined8*)( param_1 + 0x10 );
   uStack_114 = ( uint )(( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20);
   uStack_110 = ( undefined4 ) * (undefined8*)( param_1 + 0x18 );
   uStack_10c = ( undefined4 )(( ulong ) * (undefined8*)( param_1 + 0x18 ) >> 0x20);
   local_b8 = *(undefined8*)( param_1 + 0x70 );
   uStack_b0 = *(undefined8*)( param_1 + 0x78 );
   local_a8 = *(undefined8*)( param_1 + 0x80 );
   uStack_a0 = *(undefined8*)( param_1 + 0x88 );
   local_108 = ( undefined4 ) * (undefined8*)( param_1 + 0x20 );
   uStack_104 = ( undefined4 )(( ulong ) * (undefined8*)( param_1 + 0x20 ) >> 0x20);
   local_98 = *(undefined8*)( param_1 + 0x90 );
   uStack_90 = *(undefined8*)( param_1 + 0x98 );
   local_88 = *(undefined8*)( param_1 + 0xa0 );
   uStack_80 = *(undefined8*)( param_1 + 0xa8 );
   local_78 = *(undefined8*)( param_1 + 0xb0 );
   uStack_70 = *(undefined8*)( param_1 + 0xb8 );
   local_68 = *(undefined8*)( param_1 + 0xc0 );
   uStack_60 = *(undefined8*)( param_1 + 200 );
   local_58 = *(undefined8*)( param_1 + 0xd0 );
   lStack_50 = *(long*)( param_1 + 0xd8 );
   local_48 = *(undefined8*)( param_1 + 0xe0 );
   lVar6 = *(long*)( param_1 + 0xe78 );
   uVar2 = *(undefined8*)( param_1 + 0xe80 );
   uVar1 = *(undefined4*)( param_1 + 0xe88 );
   if (( *(long*)( param_1 + 0xe50 ) != 0 ) && ( *(long*)( param_1 + 0xe68 ) == 0 )) {
      lVar5 = ZSTD_createCDict_advanced2(*(long*)( param_1 + 0xe50 ), *(undefined8*)( param_1 + 0xe58 ), 1, *(undefined4*)( param_1 + 0xe60 ), param_1 + 0x10, param_6, *(undefined8*)( param_1 + 0x368 ), *(undefined8*)( param_1 + 0x370 ), *(undefined8*)( param_1 + 0x378 ));
      *(long*)( param_1 + 0xe68 ) = lVar5;
      if (lVar5 == 0) {
         uVar4 = 0xffffffffffffffc0;
         goto LAB_0010bfdb;
      }

      *(long*)( param_1 + 0xe70 ) = lVar5;
   }

   lVar5 = *(long*)( param_1 + 0xe70 );
   *(undefined8*)( param_1 + 0xe88 ) = 0;
   *(undefined1(*) [16])( param_1 + 0xe78 ) = (undefined1[16])0x0;
   uVar7 = uVar2;
   if (lVar5 == 0) {
      local_13c = uStack_f0._4_4_;
      if (param_2 == 2) {
         *(ulong*)( param_1 + 0x2f8 ) = param_3 + 1;
      }
 else {
         param_3 = *(long*)( param_1 + 0x2f8 ) - 1;
      }

      bVar8 = false;
      if (lVar6 == 0) {
         uVar7 = 0;
         bVar8 = false;
      }

   }
 else {
      if (*(long*)( param_1 + 0xe68 ) == 0) {
         local_13c = *(int*)( lVar5 + 0x17b4 );
         uStack_f0 = CONCAT44(local_13c, (undefined4)uStack_f0);
         if (param_2 != 2) goto LAB_0010be1d;
         LAB_0010c0d9:*(ulong*)( param_1 + 0x2f8 ) = param_3 + 1;
      }
 else {
         local_13c = uStack_f0._4_4_;
         if (param_2 == 2) goto LAB_0010c0d9;
         LAB_0010be1d:param_3 = *(long*)( param_1 + 0x2f8 ) - 1;
      }

      if (lVar6 == 0) {
         uVar7 = *(undefined8*)( lVar5 + 8 );
      }

      bVar8 = true;
      if (*(int*)( lVar5 + 0xf4 ) == 0) {
         if (( *(ulong*)( attachDictSizeCutoffs + ( ulong ) * (uint*)( lVar5 + 0x180 ) * 8 ) < param_3 ) && ( param_3 != 0xffffffffffffffff )) {
            bVar8 = false;
            if (local_d8._4_4_ == 1) {
               LAB_0010c10c:bVar8 = (int)local_e8 == 0;
            }

         }
 else {
            bVar8 = false;
            if (local_d8._4_4_ != 2) goto LAB_0010c10c;
         }

      }

   }

   ZSTD_getCParamsFromCCtxParams(local_138, &local_118, param_3, uVar7, bVar8);
   uStack_114 = local_138._0_4_;
   uStack_110 = local_138._4_4_;
   uStack_10c = uStack_130;
   local_108 = uStack_12c;
   uStack_104 = uStack_128;
   uStack_100 = uStack_124;
   uVar7 = uStack_100;
   uStack_100._4_4_ = ( uint )((ulong)uStack_124 >> 0x20);
   iVar3 = uStack_90._4_4_;
   if (uStack_90._4_4_ == 0) {
      iVar3 = 2 - ( uint )(6 < uStack_100._4_4_ && 0x10 < uStack_114);
   }

   uStack_90 = CONCAT44(iVar3, (undefined4)uStack_90);
   iVar3 = (int)local_b8;
   if ((int)local_b8 == 0) {
      iVar3 = 2 - ( uint )(6 < uStack_100._4_4_ && 0x1a < uStack_114);
   }

   local_b8 = CONCAT44(local_b8._4_4_, iVar3);
   iVar3 = (int)local_88;
   if ((int)local_88 == 0) {
      iVar3 = 2 - ( uint )(0xe < uStack_114 && uStack_100._4_4_ - 3 < 3);
   }

   local_88 = CONCAT44(local_88._4_4_, iVar3);
   if (lStack_50 == 0) {
      lStack_50 = 0x20000;
   }

   iVar3 = (int)local_48;
   if ((int)local_48 == 0) {
      iVar3 = ( local_13c < 10 ) + 1;
   }

   local_48 = CONCAT44(local_48._4_4_, iVar3);
   uStack_100 = uVar7;
   uVar4 = ZSTD_compressBegin_internal(param_1, lVar6, uVar2, uVar1, 0, lVar5, &local_118, param_3, 1);
   if (uVar4 < 0xffffffffffffff89) {
      lVar6 = 0;
      *(undefined1(*) [16])( param_1 + 0xde0 ) = (undefined1[16])0x0;
      if (*(int*)( param_1 + 0x164 ) == 0) {
         lVar6 = ( ulong )(*(ulong*)( param_1 + 0x2f0 ) == param_3) + *(ulong*)( param_1 + 0x2f0 );
      }

      *(undefined8*)( param_1 + 0xe18 ) = 1;
      *(long*)( param_1 + 0xdf0 ) = lVar6;
      uVar4 = 0;
      *(undefined1(*) [16])( param_1 + 0xe08 ) = (undefined1[16])0x0;
   }

   LAB_0010bfdb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
void ZSTD_createCDict(undefined8 param_1, undefined8 param_2, int param_3) {
   long lVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   byte bVar3;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined4 local_100;
   undefined1 local_f8[12];
   undefined8 uStack_ec;
   undefined8 local_e4;
   undefined4 local_dc;
   undefined4 local_d8;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_20;
   bVar3 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_getCParams_internal(&local_118, param_3, 0xffffffffffffffff, param_2, 2);
   puVar2 = (undefined8*)local_f8;
   for (lVar1 = 0x1b; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
   }

   local_dc = local_100;
   local_50 = ZSTD_defaultCMem._16_8_;
   local_d8 = 1;
   local_f8._4_8_ = local_118;
   uStack_ec = uStack_110;
   local_e4 = local_108;
   local_60 = ZSTD_defaultCMem._0_8_;
   uStack_58 = ZSTD_defaultCMem._8_8_;
   lVar1 = ZSTD_createCDict_advanced2(param_1, param_2, 0);
   if (lVar1 != 0) {
      if (param_3 == 0) {
         param_3 = 3;
      }

      *(int*)( lVar1 + 0x17b4 ) = param_3;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_createCDict_byReference(undefined8 param_1, undefined8 param_2, int param_3) {
   long lVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   byte bVar3;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined4 local_100;
   undefined1 local_f8[12];
   undefined8 uStack_ec;
   undefined8 local_e4;
   undefined4 local_dc;
   undefined4 local_d8;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_20;
   bVar3 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ZSTD_getCParams_internal(&local_118, param_3, 0xffffffffffffffff, param_2, 2);
   puVar2 = (undefined8*)local_f8;
   for (lVar1 = 0x1b; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
   }

   local_dc = local_100;
   local_50 = ZSTD_defaultCMem._16_8_;
   local_d8 = 1;
   local_f8._4_8_ = local_118;
   uStack_ec = uStack_110;
   local_e4 = local_108;
   local_60 = ZSTD_defaultCMem._0_8_;
   uStack_58 = ZSTD_defaultCMem._8_8_;
   lVar1 = ZSTD_createCDict_advanced2(param_1, param_2, 1);
   if (lVar1 != 0) {
      if (param_3 == 0) {
         param_3 = 3;
      }

      *(int*)( lVar1 + 0x17b4 ) = param_3;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_initStaticCDict(ulong param_1, ulong param_2, undefined8 param_3, long param_4, int param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8, undefined8 param_9, int param_10) {
   ulong uVar1;
   ulong uVar2;
   undefined8 uVar3;
   ulong uVar4;
   long lVar5;
   undefined4 uVar6;
   ulong *puVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 uStack_108;
   undefined4 uStack_fc;
   undefined4 uStack_f4;
   undefined8 uStack_f0;
   undefined4 local_e8;
   undefined4 local_78;
   long local_30;
   uVar6 = 2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = 1L << ( (byte)param_8 & 0x3f );
   lVar5 = ( ( 1L << ( ( byte )((ulong)param_7 >> 0x20) & 0x3f ) ) + lVar8 ) * 4;
   if (( param_10 - 3U < 3 ) && ( 0xe < (uint)param_7 )) {
      uVar6 = 1;
      lVar5 = lVar5 + ( lVar8 + 0x3fU & 0xffffffffffffffc0 );
   }

   uVar4 = 0;
   if (param_5 != 1) {
      uVar4 = param_4 + 7U & 0xfffffffffffffff8;
   }

   if (( param_1 & 7 ) == 0) {
      uVar2 = param_1 + param_2;
      uVar1 = param_1 + 0x17c0;
      if (( uVar1 <= uVar2 ) && ( param_1 != 0 )) {
         for (int i = 0; i < 3; i++) {
            *(ulong*)( param_1 + ( 8*i + 48 ) ) = uVar1;
         }

         uVar3 = _LC8;
         *(ulong*)( param_1 + 0x20 ) = param_1;
         *(ulong*)( param_1 + 0x28 ) = uVar2;
         *(ulong*)( param_1 + 0x48 ) = uVar2 & 0xffffffffffffffc0;
         *(ulong*)( param_1 + 0x50 ) = uVar2 & 0xffffffffffffffc0;
         *(undefined1*)( param_1 + 0x58 ) = 0;
         *(undefined4*)( param_1 + 0x5c ) = 0;
         *(undefined8*)( param_1 + 0x60 ) = uVar3;
         if (uVar4 + 0x3a40 + lVar5 <= param_2) {
            *(undefined4*)( param_1 + 0x17b8 ) = uVar6;
            puVar7 = &uStack_108;
            for (lVar5 = 0x1b; lVar5 != 0; lVar5 = lVar5 + -1) {
               *puVar7 = ( ulong )((uint)param_1 & 7);
               puVar7 = puVar7 + 1;
            }

            uStack_108._4_4_ = (uint)param_7;
            uStack_fc = param_8;
            local_e8 = 1;
            uStack_f4 = (undefined4)param_9;
            *(undefined4*)( param_1 + 0x17b4 ) = 0;
            uStack_f0 = CONCAT44(param_10, param_9._4_4_);
            local_78 = uVar6;
            uVar4 = ZSTD_initCDict_internal(param_1, param_3, param_4, param_5, param_6, uVar3, CONCAT44((uint)param_7, (undefined4)uStack_108), CONCAT44(param_8, param_7._4_4_));
            if (uVar4 < 0xffffffffffffff89) goto LAB_0010c5c2;
         }

      }

   }

   param_1 = 0;
   LAB_0010c5c2:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
undefined8 *ZSTD_getCParamsFromCDict(undefined8 *param_1, long param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar1 = *(undefined8*)( param_2 + 0x170 );
   uVar2 = *(undefined8*)( param_2 + 0x174 );
   uVar3 = *(undefined8*)( param_2 + 0x17c );
   *param_1 = *(undefined8*)( param_2 + 0x168 );
   param_1[1] = uVar1;
   *(undefined8*)( (long)param_1 + 0xc ) = uVar2;
   *(undefined8*)( (long)param_1 + 0x14 ) = uVar3;
   return param_1;
}
undefined4 ZSTD_getDictID_fromCDict(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 0x17b0 );
   }

   return 0;
}
void ZSTD_compressBegin_usingCDict_advanced(void) {
   ZSTD_compressBegin_usingCDict_internal();
   return;
}
void ZSTD_compressBegin_usingCDict_deprecated(undefined8 param_1, undefined8 param_2) {
   ZSTD_compressBegin_usingCDict_internal(param_1, param_2, 0, 0, 0xffffffffffffffff);
   return;
}
void ZSTD_compressBegin_usingCDict(undefined8 param_1, undefined8 param_2) {
   ZSTD_compressBegin_usingCDict_internal(param_1, param_2, 0, 0, 0xffffffffffffffff);
   return;
}
void ZSTD_compress_usingCDict_advanced(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8) {
   ulong uVar1;
   uVar1 = ZSTD_compressBegin_usingCDict_internal(param_1, param_6, param_7, param_8);
   if (0xffffffffffffff88 < uVar1) {
      return;
   }

   ZSTD_compressEnd_public(param_1, param_2, param_3, param_4, param_5);
   return;
}
void ZSTD_compress_usingCDict(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   ulong uVar1;
   uVar1 = ZSTD_compressBegin_usingCDict_internal(param_1, param_6, 1, 0);
   if (0xffffffffffffff88 < uVar1) {
      return;
   }

   ZSTD_compressEnd_public(param_1, param_2, param_3, param_4, param_5);
   return;
}
void *ZSTD_createCStream(void) {
   void *pvVar1;
   pvVar1 = malloc(0x1480);
   if (pvVar1 != (void*)0x0) {
      ZSTD_initCCtx(pvVar1);
   }

   return pvVar1;
}
void ZSTD_initStaticCStream(void) {
   ZSTD_initStaticCCtx();
   return;
}
void *ZSTD_createCStream_advanced(void) {
   void *pvVar1;
   code *in_stack_00000008;
   long in_stack_00000010;
   undefined8 in_stack_00000018;
   pvVar1 = (void*)0x0;
   if (( in_stack_00000008 == (code*)0x0 ) == ( in_stack_00000010 == 0 )) {
      if (in_stack_00000008 == (code*)0x0) {
         pvVar1 = malloc(0x1480);
      }
 else {
         pvVar1 = (void*)( *in_stack_00000008 )(in_stack_00000018, 0x1480);
      }

      if (pvVar1 != (void*)0x0) {
         ZSTD_initCCtx(pvVar1);
      }

   }

   return pvVar1;
}
void ZSTD_freeCStream(void) {
   ZSTD_freeCCtx();
   return;
}
undefined8 ZSTD_CStreamInSize(void) {
   return 0x20000;
}
undefined8 ZSTD_CStreamOutSize(void) {
   return 0x20207;
}
undefined8 ZSTD_resetCStream(long param_1, long param_2) {
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(ulong*)( param_1 + 0x2f8 ) = ( param_2 + 1 ) - ( ulong )(param_2 == 0);
   return 0;
}
ulong ZSTD_initCStream_internal(long param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 *param_5, long param_6) {
   undefined8 uVar1;
   undefined8 uVar2;
   ulong uVar3;
   uVar1 = *param_5;
   uVar2 = param_5[1];
   *(long*)( param_1 + 0x2f8 ) = param_6 + 1;
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   *(undefined8*)( param_1 + 0x18 ) = uVar2;
   for (int i = 0; i < 12; i++) {
      uVar1 = param_5[( 2*i + 3 )];
      *(undefined8*)( param_1 + ( 16*i + 32 ) ) = param_5[( 2*i + 2 )];
      *(undefined8*)( param_1 + ( 16*i + 40 ) ) = uVar1;
   }

   *(undefined8*)( param_1 + 0xe0 ) = param_5[0x1a];
   if (param_2 == 0) {
      ZSTD_clearAllDicts();
      uVar3 = 0;
      *(undefined8*)( param_1 + 0xe70 ) = param_4;
   }
 else {
      uVar3 = ZSTD_CCtx_loadDictionary_advanced_part_0();
      if (uVar3 < 0xffffffffffffff89) {
         uVar3 = 0;
      }

   }

   return uVar3;
}
undefined8 ZSTD_initCStream_usingCDict_advanced(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, long param_5) {
   *(long*)( param_1 + 0x2f8 ) = param_5 + 1;
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x30 ) = param_3;
   *(undefined4*)( param_1 + 0x38 ) = param_4;
   ZSTD_clearAllDicts();
   *(undefined8*)( param_1 + 0xe70 ) = param_2;
   return 0;
}
undefined8 ZSTD_initCStream_usingCDict(long param_1, undefined8 param_2) {
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x2f8 ) = 0;
   ZSTD_clearAllDicts();
   *(undefined8*)( param_1 + 0xe70 ) = param_2;
   return 0;
}
ulong ZSTD_initCStream_advanced(long param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   ulong uVar1;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM1_Qa;
   undefined8 extraout_XMM1_Qb;
   undefined8 in_stack_00000020;
   undefined4 uStack0000000000000028;
   undefined4 uStack000000000000002c;
   if (param_4 == 0) {
      param_4 = -(ulong)(in_stack_00000020._4_4_ == 0);
   }

   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(long*)( param_1 + 0x2f8 ) = param_4 + 1;
   uVar1 = ZSTD_checkCParams();
   if (uVar1 < 0xffffffffffffff89) {
      *(undefined8*)( param_1 + 0x14 ) = extraout_XMM1_Qa;
      *(undefined8*)( param_1 + 0x1c ) = extraout_XMM1_Qb;
      *(undefined8*)( param_1 + 0x20 ) = extraout_XMM0_Qa;
      *(undefined8*)( param_1 + 0x28 ) = extraout_XMM0_Qb;
      *(ulong*)( param_1 + 0x30 ) = CONCAT44(uStack0000000000000028, in_stack_00000020._4_4_);
      *(undefined4*)( param_1 + 0x3c ) = 0;
      *(undefined4*)( param_1 + 0x38 ) = uStack000000000000002c;
      uVar1 = ZSTD_CCtx_loadDictionary_advanced_part_0(param_1, param_2, param_3, 0, 0);
      if (uVar1 < 0xffffffffffffff89) {
         uVar1 = 0;
      }

   }

   return uVar1;
}
ulong ZSTD_initCStream_usingDict(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4) {
   ulong uVar1;
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x2f8 ) = 0;
   uVar1 = ZSTD_CCtxParams_setParameter(param_1 + 0x10, 100, param_4);
   if (0xffffffffffffff88 < uVar1) {
      return uVar1;
   }

   uVar1 = ZSTD_CCtx_loadDictionary_advanced_part_0(param_1, param_2, param_3, 0, 0);
   if (uVar1 < 0xffffffffffffff89) {
      uVar1 = 0;
   }

   return uVar1;
}
ulong ZSTD_initCStream_srcSize(long param_1, undefined4 param_2, long param_3) {
   ulong uVar1;
   if (param_3 == 0) {
      param_3 = -1;
   }

   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x2f8 ) = 0;
   ZSTD_clearAllDicts();
   *(undefined8*)( param_1 + 0xe70 ) = 0;
   if (*(int*)( param_1 + 0xe18 ) == 0) {
      uVar1 = ZSTD_CCtxParams_setParameter(param_1 + 0x10, 100, param_2);
      if (uVar1 < 0xffffffffffffff89) {
         uVar1 = 0;
         *(long*)( param_1 + 0x2f8 ) = param_3 + 1;
      }

      return uVar1;
   }

   *(undefined4*)( param_1 + 4 ) = 1;
   uVar1 = ZSTD_CCtxParams_setParameter(param_1 + 0x10, 100, param_2);
   if (uVar1 < 0xffffffffffffff89) {
      uVar1 = 0xffffffffffffffc4;
   }

   return uVar1;
}
ulong ZSTD_initCStream(long param_1, undefined4 param_2) {
   ulong uVar1;
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x2f8 ) = 0;
   ZSTD_clearAllDicts();
   *(undefined8*)( param_1 + 0xe70 ) = 0;
   if (*(int*)( param_1 + 0xe18 ) != 0) {
      *(undefined4*)( param_1 + 4 ) = 1;
   }

   uVar1 = ZSTD_CCtxParams_setParameter(param_1 + 0x10, 100, param_2);
   if (uVar1 < 0xffffffffffffff89) {
      uVar1 = 0;
   }

   return uVar1;
}
ulong ZSTD_compressStream2(long param_1, long *param_2, long *param_3, uint param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   void *__dest;
   void *pvVar9;
   void *__src;
   undefined4 uVar10;
   ulong uVar11;
   long local_78;
   void *local_70;
   if ((ulong)param_2[1] < (ulong)param_2[2]) {
      return 0xffffffffffffffba;
   }

   uVar5 = param_3[2];
   uVar11 = param_3[1];
   if (uVar11 < uVar5) {
      return 0xffffffffffffffb8;
   }

   if (2 < param_4) {
      return 0xffffffffffffffd6;
   }

   if (*(int*)( param_1 + 0xe18 ) == 0) {
      uVar7 = ( uVar11 + *(long*)( param_1 + 0xe38 ) ) - uVar5;
      if (( ( *(int*)( param_1 + 0x8c ) == 1 ) && ( param_4 == 0 ) ) && ( uVar7 < 0x20000 )) {
         if (*(long*)( param_1 + 0xe38 ) != 0) {
            if (*param_3 != *(long*)( param_1 + 0xe20 )) {
               return 0xffffffffffffffce;
            }

            if (uVar5 != *(ulong*)( param_1 + 0xe28 )) {
               return 0xffffffffffffffce;
            }

         }

         lVar2 = param_3[1];
         iVar4 = *(int*)( param_1 + 0x10 );
         param_3[2] = uVar11;
         *(long*)( param_1 + 0xe20 ) = *param_3;
         *(long*)( param_1 + 0xe28 ) = lVar2;
         lVar2 = param_3[2];
         *(ulong*)( param_1 + 0xe38 ) = uVar7;
         *(long*)( param_1 + 0xe30 ) = lVar2;
         return ( ulong )(-(uint)(iVar4 == 0) & 4) + 2;
      }

      uVar5 = ZSTD_CCtx_init_compressStream2(param_1, param_4);
      if (0xffffffffffffff88 < uVar5) {
         return uVar5;
      }

      iVar4 = *(int*)( param_1 + 0x164 );
      if (iVar4 != 1) {
         if (*(int*)( param_1 + 0x168 ) == 1) {
            *(long*)( param_1 + 0xe40 ) = param_2[1] - param_2[2];
         }

         goto LAB_0010cda4;
      }

      lVar2 = param_3[1];
      *(long*)( param_1 + 0xe20 ) = *param_3;
      *(long*)( param_1 + 0xe28 ) = lVar2;
      *(long*)( param_1 + 0xe30 ) = param_3[2];
      if (*(int*)( param_1 + 0x168 ) == 1) {
         *(long*)( param_1 + 0xe40 ) = param_2[1] - param_2[2];
      }

      LAB_0010cee0:if (*(long*)( param_1 + 0xe20 ) != *param_3) {
         return 0xffffffffffffffce;
      }

      if (*(long*)( param_1 + 0xe30 ) != param_3[2]) {
         return 0xffffffffffffffce;
      }

      iVar4 = 1;
   }
 else {
      iVar4 = *(int*)( param_1 + 0x164 );
      if (iVar4 == 1) goto LAB_0010cee0;
   }

   if (( *(int*)( param_1 + 0x168 ) == 1 ) && ( param_2[1] - param_2[2] != *(long*)( param_1 + 0xe40 ) )) {
      return 0xffffffffffffffce;
   }

   LAB_0010cda4:lVar2 = *param_3;
   if (lVar2 == 0) {
      local_70 = (void*)0x0;
      __src = (void*)0x0;
   }
 else {
      local_70 = (void*)( param_3[1] + lVar2 );
      __src = (void*)( lVar2 + param_3[2] );
   }

   lVar3 = *param_2;
   if (lVar3 == 0) {
      local_78 = 0;
      __dest = (void*)0x0;
   }
 else {
      local_78 = param_2[1] + lVar3;
      __dest = (void*)( lVar3 + param_2[2] );
   }

   if (iVar4 == 1) {
      lVar6 = *(long*)( param_1 + 0xe38 );
      param_3[2] = param_3[2] - lVar6;
      *(undefined8*)( param_1 + 0xe38 ) = 0;
      if (__src != (void*)0x0) {
         __src = (void*)( (long)__src - lVar6 );
      }

   }

   iVar4 = *(int*)( param_1 + 0xe18 );
   LAB_0010ce24:while (iVar4 != 1) {
      if (iVar4 == 2) {
         lVar6 = *(long*)( param_1 + 0xe10 );
         uVar5 = *(long*)( param_1 + 0xe08 ) - lVar6;
         uVar11 = local_78 - (long)__dest;
         LAB_0010cf48:uVar7 = uVar11;
         if (uVar5 <= uVar11) {
            uVar7 = uVar5;
         }

         if (uVar7 != 0) {
            memcpy(__dest, (void*)( lVar6 + *(long*)( param_1 + 0xdf8 ) ), uVar7);
            lVar6 = *(long*)( param_1 + 0xe10 );
            __dest = (void*)( (long)__dest + uVar7 );
         }

         if (uVar11 < uVar5) {
            iVar4 = *(int*)( param_1 + 0x164 );
            *(ulong*)( param_1 + 0xe10 ) = uVar7 + lVar6;
            goto LAB_0010cf7a;
         }

         *(undefined1(*) [16])( param_1 + 0xe08 ) = (undefined1[16])0x0;
         if (*(int*)( param_1 + 0xe1c ) != 0) goto LAB_0010d0a5;
         *(undefined4*)( param_1 + 0xe18 ) = 1;
         iVar4 = 1;
      }
 else if (iVar4 == 0) {
         return 0xffffffffffffffc2;
      }

   }
;
   if (param_4 == 2) {
      uVar5 = 0xffffffffffffffb8;
      uVar7 = (long)local_70 - (long)__src;
      uVar11 = local_78 - (long)__dest;
      if (uVar7 < 0xff00ff00ff00ff00) {
         uVar5 = ( uVar7 >> 8 ) + uVar7;
         if (uVar7 < 0x20000) {
            uVar5 = uVar5 + ( 0x20000 - uVar7 >> 0xb );
         }

         if (uVar5 == 0) {
            uVar5 = 0xffffffffffffffb8;
         }

      }

      if (( uVar11 < uVar5 ) && ( *(int*)( param_1 + 0x168 ) != 1 )) {
         iVar4 = *(int*)( param_1 + 0x164 );
         if (iVar4 == 0) {
            uVar5 = *(ulong*)( param_1 + 0xde8 );
            goto LAB_0010d047;
         }

      }
 else {
         uVar5 = *(ulong*)( param_1 + 0xde8 );
         if (uVar5 == 0) {
            uVar5 = ZSTD_compressEnd_public(param_1, __dest, uVar11, __src);
            if (0xffffffffffffff88 < uVar5) {
               return uVar5;
            }

            *(undefined8*)( param_1 + 0x2f8 ) = 0;
            __dest = (void*)( (long)__dest + uVar5 );
            *(undefined8*)( param_1 + 0xe18 ) = _LC8;
            iVar4 = *(int*)( param_1 + 0x164 );
            __src = local_70;
            goto LAB_0010cf7a;
         }

         iVar4 = *(int*)( param_1 + 0x164 );
         if (iVar4 == 0) goto LAB_0010d047;
      }

      LAB_0010d476:uVar7 = *(ulong*)( param_1 + 0x2f0 );
      uVar5 = (long)local_70 - (long)__src;
      LAB_0010d485:if (uVar5 < uVar7) {
         uVar7 = uVar5;
      }

      LAB_0010d290:uVar5 = 0xffffffffffffffb8;
      if (uVar7 < 0xff00ff00ff00ff00) {
         uVar5 = ( uVar7 >> 8 ) + uVar7;
         if (uVar7 < 0x20000) {
            uVar5 = uVar5 + ( 0x20000 - uVar7 >> 0xb );
         }

         if (uVar5 == 0) {
            uVar5 = 0xffffffffffffffb8;
         }

      }

      uVar8 = uVar11;
      pvVar9 = __dest;
      if (( uVar11 < uVar5 ) && ( *(int*)( param_1 + 0x168 ) != 1 )) {
         uVar8 = *(ulong*)( param_1 + 0xe00 );
         pvVar9 = *(void**)( param_1 + 0xdf8 );
      }

      if (iVar4 == 0) {
         if (param_4 == 2 && local_70 == __src) {
            uVar5 = ZSTD_compressEnd_public(param_1, pvVar9, uVar8);
         }
 else {
            uVar5 = ZSTD_compressContinue_internal(param_1, pvVar9, uVar8, *(long*)( param_1 + 0xde0 ) + *(long*)( param_1 + 0xdd0 ), uVar7, 1, 0);
         }

         if (0xffffffffffffff88 < uVar5) {
            return uVar5;
         }

         *(uint*)( param_1 + 0xe1c ) = ( uint )(param_4 == 2 && local_70 == __src);
         lVar6 = *(long*)( param_1 + 0xde8 );
         uVar7 = lVar6 + *(long*)( param_1 + 0x2f0 );
         *(ulong*)( param_1 + 0xdf0 ) = uVar7;
         if (*(ulong*)( param_1 + 0xdd8 ) < uVar7) {
            *(undefined8*)( param_1 + 0xde8 ) = 0;
            lVar6 = 0;
            *(long*)( param_1 + 0xdf0 ) = *(long*)( param_1 + 0x2f0 );
         }

         *(long*)( param_1 + 0xde0 ) = lVar6;
      }
 else {
         if (( param_4 == 2 ) && ( local_70 == (void*)( (long)__src + uVar7 ) )) {
            uVar5 = ZSTD_compressEnd_public(param_1, pvVar9, uVar8, __src);
            uVar10 = 1;
         }
 else {
            uVar5 = ZSTD_compressContinue_internal(param_1, pvVar9, uVar8, __src, uVar7, 1, 0);
            uVar10 = 0;
         }

         if (__src != (void*)0x0) {
            __src = (void*)( uVar7 + (long)__src );
         }

         if (0xffffffffffffff88 < uVar5) {
            return uVar5;
         }

         *(undefined4*)( param_1 + 0xe1c ) = uVar10;
      }

      if (pvVar9 != __dest) {
         *(ulong*)( param_1 + 0xe08 ) = uVar5;
         lVar6 = 0;
         *(undefined8*)( param_1 + 0xe10 ) = 0;
         *(undefined4*)( param_1 + 0xe18 ) = 2;
         goto LAB_0010cf48;
      }

      __dest = (void*)( (long)__dest + uVar5 );
      if (*(int*)( param_1 + 0xe1c ) == 0) {
         iVar4 = *(int*)( param_1 + 0xe18 );
         goto LAB_0010ce24;
      }

      LAB_0010d0a5:*(undefined4*)( param_1 + 0xe18 ) = 0;
      iVar4 = *(int*)( param_1 + 0x164 );
      *(undefined8*)( param_1 + 0x2f8 ) = 0;
   }
 else {
      iVar4 = *(int*)( param_1 + 0x164 );
      if (iVar4 == 0) {
         uVar5 = *(ulong*)( param_1 + 0xde8 );
         uVar7 = (long)local_70 - (long)__src;
         LAB_0010d047:uVar11 = *(long*)( param_1 + 0xdf0 ) - uVar5;
         if (uVar7 < uVar11) {
            uVar11 = uVar7;
         }

         if (uVar11 == 0) {
            if (__src != (void*)0x0) goto LAB_0010d252;
         }
 else {
            memcpy((void*)( uVar5 + *(long*)( param_1 + 0xdd0 ) ), __src, uVar11);
            iVar4 = *(int*)( param_1 + 0x164 );
            uVar5 = *(long*)( param_1 + 0xde8 ) + uVar11;
            *(ulong*)( param_1 + 0xde8 ) = uVar5;
            LAB_0010d252:__src = (void*)( (long)__src + uVar11 );
         }

         if (param_4 == 0) {
            if (*(ulong*)( param_1 + 0xdf0 ) <= uVar5) goto LAB_0010d273;
         }
 else if (( param_4 != 1 ) || ( *(ulong*)( param_1 + 0xde0 ) != uVar5 )) {
            LAB_0010d273:uVar11 = local_78 - (long)__dest;
            if (iVar4 != 0) goto LAB_0010d476;
            uVar7 = *(long*)( param_1 + 0xde8 ) - *(long*)( param_1 + 0xde0 );
            goto LAB_0010d290;
         }

      }
 else if (param_4 == 0) {
         uVar7 = *(ulong*)( param_1 + 0x2f0 );
         uVar5 = (long)local_70 - (long)__src;
         if (uVar7 <= uVar5) {
            uVar11 = local_78 - (long)__dest;
            goto LAB_0010d485;
         }

         *(ulong*)( param_1 + 0xe38 ) = uVar5;
         __src = local_70;
      }
 else if (local_70 != __src) {
         uVar7 = *(ulong*)( param_1 + 0x2f0 );
         uVar11 = local_78 - (long)__dest;
         uVar5 = (long)local_70 - (long)__src;
         goto LAB_0010d485;
      }

   }

   LAB_0010cf7a:iVar1 = *(int*)( param_1 + 0xe1c );
   param_3[2] = (long)__src - lVar2;
   param_2[2] = (long)__dest - lVar3;
   if (iVar1 == 0) {
      if (iVar4 != 1) {
         uVar5 = *(long*)( param_1 + 0xdf0 ) - *(long*)( param_1 + 0xde8 );
         if (uVar5 == 0) {
            uVar5 = *(ulong*)( param_1 + 0x2f0 );
         }

         if (0xffffffffffffff88 < uVar5) {
            return uVar5;
         }

         goto LAB_0010cfd0;
      }

      uVar5 = *(long*)( param_1 + 0x2f0 ) - *(long*)( param_1 + 0xe38 );
      if (0xffffffffffffff88 < uVar5) {
         return uVar5;
      }

   }
 else if (*(int*)( param_1 + 0x164 ) != 1) goto LAB_0010cfd0;
   lVar2 = param_3[1];
   *(long*)( param_1 + 0xe20 ) = *param_3;
   *(long*)( param_1 + 0xe28 ) = lVar2;
   *(long*)( param_1 + 0xe30 ) = param_3[2];
   LAB_0010cfd0:if (*(int*)( param_1 + 0x168 ) == 1) {
      *(long*)( param_1 + 0xe40 ) = param_2[1] - param_2[2];
   }

   return *(long*)( param_1 + 0xe08 ) - *(long*)( param_1 + 0xe10 );
}
ulong ZSTD_compressStream(long param_1) {
   ulong uVar1;
   uVar1 = ZSTD_compressStream2();
   if (uVar1 < 0xffffffffffffff89) {
      if (*(int*)( param_1 + 0x164 ) == 1) {
         return *(long*)( param_1 + 0x2f0 ) - *(long*)( param_1 + 0xe38 );
      }

      uVar1 = *(long*)( param_1 + 0xdf0 ) - *(long*)( param_1 + 0xde8 );
      if (uVar1 == 0) {
         uVar1 = *(ulong*)( param_1 + 0x2f0 );
      }

   }

   return uVar1;
}
void ZSTD_compressStream2_simpleArgs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4, undefined8 param_5, undefined8 param_6, undefined8 *param_7, undefined4 param_8) {
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_38;
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_48 = *param_4;
   uStack_28 = *param_7;
   local_58 = param_2;
   local_50 = param_3;
   local_38 = param_5;
   local_30 = param_6;
   ZSTD_compressStream2(param_1, &local_58, &local_38, param_8);
   *param_4 = uStack_48;
   *param_7 = uStack_28;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_compress2(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   undefined8 local_58;
   undefined8 local_50;
   ulong local_48;
   undefined8 local_38;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   uVar2 = _LC11;
   uVar1 = *(undefined8*)( param_1 + 0x8c );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_1 + 0xe18 ) = 0;
   *(undefined8*)( param_1 + 0x2f8 ) = 0;
   *(undefined8*)( param_1 + 0x8c ) = uVar2;
   local_48 = 0;
   local_28 = 0;
   local_58 = param_2;
   local_50 = param_3;
   local_38 = param_4;
   local_30 = param_5;
   uVar3 = ZSTD_compressStream2(param_1, &local_58, &local_38, 2);
   *(undefined8*)( param_1 + 0x8c ) = uVar1;
   if (( uVar3 < 0xffffffffffffff89 ) && ( bVar4= uVar3 != 0,uVar3 = local_48,bVar4 )) {
      uVar3 = 0xffffffffffffffba;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
ulong ZSTD_generateSequences(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulong param_5) {
   void *__ptr;
   ulong uVar1;
   size_t __size;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   __size = 0xffffffffffffffb8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 < 0xff00ff00ff00ff00) {
      __size = ( param_5 >> 8 ) + param_5;
      if (param_5 < 0x20000) {
         __size = __size + ( 0x20000 - param_5 >> 0xb );
      }

      if (__size == 0) {
         __size = 0xffffffffffffffb8;
      }

   }

   __ptr = malloc(__size);
   uVar1 = ZSTD_CCtxParams_getParameter(param_1 + 0x10, 0x82, &local_44);
   if (uVar1 < 0xffffffffffffff89) {
      uVar1 = 0xffffffffffffffd8;
      if (local_44 == 0) {
         uVar1 = ZSTD_CCtxParams_getParameter();
         if (( uVar1 < 0xffffffffffffff89 ) && ( uVar1 = local_44 == 0 )) {
            if (__ptr == (void*)0x0) {
               uVar1 = 0xffffffffffffffc0;
            }
 else {
               *(undefined8*)( param_1 + 0x398 ) = param_2;
               *(undefined8*)( param_1 + 0x3a8 ) = param_3;
               *(undefined4*)( param_1 + 0x390 ) = 1;
               *(undefined8*)( param_1 + 0x3a0 ) = 0;
               uVar1 = ZSTD_compress2(param_1, __ptr, __size, param_4, param_5);
               free(__ptr);
               if (uVar1 < 0xffffffffffffff89) {
                  uVar1 = *(ulong*)( param_1 + 0x3a0 );
               }

            }

         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_compressSequences(long param_1, long param_2, long param_3, long param_4, ulong param_5, undefined1 *param_6, ulong param_7) {
   undefined1 uVar1;
   uint uVar2;
   uint uVar3;
   undefined8 uVar4;
   long lVar5;
   uint uVar6;
   undefined4 uVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   int *piVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   ulong __n;
   ulong uVar17;
   short *psVar18;
   long in_FS_OFFSET;
   bool bVar19;
   undefined1 *local_c8;
   code *local_b8;
   ulong local_90;
   ulong local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ZSTD_CCtx_init_compressStream2(param_1, 2, param_7);
   if (0xffffffffffffff88 < uVar9) goto LAB_0010d96b;
   lVar10 = ZSTD_writeFrameHeader(param_2, param_3, param_1 + 0xe8, param_7, *(undefined4*)( param_1 + 0x298 ));
   psVar18 = (short*)( param_2 + lVar10 );
   uVar16 = param_3 - lVar10;
   if (*(int*)( param_1 + 0x10c ) == 0) {
      iVar8 = *(int*)( param_1 + 0x16c );
      local_58[0] = 0;
      local_58[1] = 0;
      local_b8 = ZSTD_copySequencesToSeqStoreExplicitBlockDelim;
      if (( iVar8 != 1 ) && ( local_b8 = iVar8 == 0 )) {
         local_b8 = ZSTD_copySequencesToSeqStoreNoBlockDelim;
      }

      if (param_7 != 0) goto LAB_0010da9f;
   }
 else if (param_7 != 0) {
      ZSTD_XXH64_update(param_1 + 0x310, param_6, param_7);
      iVar8 = *(int*)( param_1 + 0x16c );
      if (iVar8 == 1) {
         local_b8 = ZSTD_copySequencesToSeqStoreExplicitBlockDelim;
      }
 else {
         local_b8 = ZSTD_copySequencesToSeqStoreNoBlockDelim;
         if (iVar8 != 0) {
            local_b8 = (code*)0x0;
         }

      }

      LAB_0010da9f:local_58[1] = 0;
      local_58[0] = 0;
      uVar12 = 0;
      uVar15 = *(ulong*)( param_1 + 0x2f0 );
      local_90 = 0;
      uVar17 = uVar16;
      local_c8 = param_6;
      if (iVar8 == 0) goto LAB_0010dd1a;
      LAB_0010dad1:if (uVar12 < param_5) {
         uVar9 = 0;
         piVar11 = (int*)( uVar12 * 0x10 + param_4 );
         while (true) {
            uVar9 = uVar9 + ( uint )(piVar11[2] + piVar11[1]);
            if (*piVar11 == 0) break;
            uVar12 = uVar12 + 1;
            piVar11 = piVar11 + 4;
            if (param_5 <= uVar12) goto LAB_0010df30;
         }
;
         if (piVar11[2] == 0) {
            if (0xffffffffffffff88 < uVar9) goto LAB_0010d96b;
            if (param_7 < uVar15) {
               uVar15 = param_7;
            }

            if (uVar9 <= uVar15) {
               bVar19 = param_7 == uVar9;
               uVar15 = uVar9;
               do {
                  uVar6 = (uint)bVar19;
                  *(undefined4*)( param_1 + 0x400 ) = 0;
                  *(undefined8*)( param_1 + 0x3d0 ) = *(undefined8*)( param_1 + 0x3c8 );
                  *(undefined8*)( param_1 + 0x3c0 ) = *(undefined8*)( param_1 + 0x3b8 );
                  uVar12 = ( *local_b8 )(param_1, local_58, param_4, param_5, local_c8, uVar15, *(undefined4*)( param_1 + 0x1b8 ));
                  uVar9 = uVar12;
                  if (0xffffffffffffff88 < uVar12) goto LAB_0010d96b;
                  __n = uVar15 - uVar12;
                  if (6 < __n) {
                     if (uVar17 < 3) goto LAB_0010df40;
                     uVar13 = *(ulong*)( param_1 + 0xdc0 );
                     uVar9 = ZSTD_entropyCompressSeqStore_internal_constprop_0(param_1 + 0x3b8, *(undefined8*)( param_1 + 0xc80 ), *(undefined8*)( param_1 + 0xc88 ), param_1 + 0xe8);
                     if (( uVar9 == 0 ) || ( ( uVar9 == 0xffffffffffffffba && ( __n <= uVar17 - 3 ) ) )) {
                        uVar2 = *(uint*)( param_1 + 0x3b0 );
                        uVar14 = (ulong)uVar2;
                        joined_r0x0010ddc8:if (( ( ( uVar2 == 0 ) && ( ( ulong )(*(long*)( param_1 + 0x3c0 ) - *(long*)( param_1 + 0x3b8 )) < 0x19 ) ) && ( ( ulong )(*(long*)( param_1 + 0x3d0 ) - *(long*)( param_1 + 0x3c8 )) < 10 ) ) && ( iVar8 = iVar8 != 0 )) {
                           LAB_0010de26:uVar1 = *local_c8;
                           if (uVar17 == 3) goto LAB_0010df40;
                           uVar9 = 4;
                           iVar8 = uVar6 + 2 + (int)__n * 8;
                           *psVar18 = (short)iVar8;
                           psVar18[1] = CONCAT11(uVar1, (char)( (uint)iVar8 >> 0x10 ));
                        }
 else {
                           uVar9 = __n + 3;
                           if (uVar17 < uVar9) goto LAB_0010df40;
                           iVar8 = uVar6 + (int)__n * 8;
                           *psVar18 = (short)iVar8;
                           *(char*)( psVar18 + 1 ) = (char)( (uint)iVar8 >> 0x10 );
                           memcpy((void*)( (long)psVar18 + 3 ), local_c8, __n);
                           if (0xffffffffffffff88 < uVar9) goto LAB_0010d96b;
                        }

                     }
 else {
                        if (0xffffffffffffff88 < uVar9) goto LAB_0010d96b;
                        uVar2 = *(uint*)( param_1 + 0x3b0 );
                        uVar3 = *(uint*)( param_1 + 0x104 );
                        if (*(uint*)( param_1 + 0x104 ) < 7) {
                           uVar3 = 7;
                        }

                        uVar13 = ( ulong )(uVar3 - 1);
                        uVar14 = ( __n - 2 ) - ( __n >> ( ( byte )(uVar3 - 1) & 0x3f ) );
                        if (uVar14 <= uVar9) goto joined_r0x0010ddc8;
                        if (( ( ( uVar2 == 0 ) && ( ( ulong )(*(long*)( param_1 + 0x3d0 ) - *(long*)( param_1 + 0x3c8 )) < 10 ) ) && ( ( ( ulong )(*(long*)( param_1 + 0x3c0 ) - *(long*)( param_1 + 0x3b8 )) < 0x19 && ( iVar8 = ZSTD_isRLE(local_c8, __n) ),iVar8 != 0 ) ) )) goto LAB_0010de26;
                        uVar4 = *(undefined8*)( param_1 + 0xc80 );
                        lVar5 = *(long*)( param_1 + 0xc88 );
                        *(long*)( param_1 + 0xc80 ) = lVar5;
                        *(undefined8*)( param_1 + 0xc88 ) = uVar4;
                        if (*(int*)( lVar5 + 0x15e4 ) == 2) {
                           *(undefined4*)( lVar5 + 0x15e4 ) = 1;
                        }

                        iVar8 = uVar6 + 4 + (int)uVar9 * 8;
                        uVar9 = uVar9 + 3;
                        *psVar18 = (short)iVar8;
                        *(char*)( psVar18 + 1 ) = (char)( (uint)iVar8 >> 0x10 );
                     }

                     local_90 = local_90 + uVar9;
                     if (param_7 != uVar15) {
                        *(undefined4*)( param_1 + 0x3b0 ) = 0;
                        param_7 = ( param_7 + uVar12 ) - uVar15;
                        goto LAB_0010dcf8;
                     }

                     LAB_0010dfbb:uVar9 = local_90;
                     if (local_90 < 0xffffffffffffff89) goto LAB_0010d9fc;
                     goto LAB_0010d96b;
                  }

                  uVar9 = __n + 3;
                  if (uVar17 < uVar9) goto LAB_0010df40;
                  *(undefined1*)( psVar18 + 1 ) = 0;
                  *psVar18 = (ushort)bVar19 + (short)__n * 8;
                  memcpy((void*)( (long)psVar18 + 3 ), local_c8, __n);
                  local_90 = local_90 + uVar9;
                  param_7 = ( param_7 + uVar12 ) - uVar15;
                  LAB_0010dcf8:local_c8 = local_c8 + __n;
                  uVar17 = uVar17 - uVar9;
                  psVar18 = (short*)( (long)psVar18 + uVar9 );
                  if (param_7 == 0) goto LAB_0010dfbb;
                  uVar12 = local_58[0] & 0xffffffff;
                  uVar15 = *(ulong*)( param_1 + 0x2f0 );
                  if (*(int*)( param_1 + 0x16c ) != 0) goto LAB_0010dad1;
                  LAB_0010dd1a:bVar19 = param_7 <= uVar15;
                  uVar9 = param_7;
                  if (uVar15 <= param_7) {
                     uVar9 = uVar15;
                  }

                  uVar15 = uVar9;
                  if (0xffffffffffffff88 < uVar9) goto LAB_0010d96b;
               }
 while ( true );
            }

         }

      }

      LAB_0010df30:uVar9 = 0xffffffffffffff95;
      goto LAB_0010d96b;
   }

   if (3 < uVar16) {
      psVar18[0] = 1;
      psVar18[1] = 0;
      local_90 = 3;
      LAB_0010d9fc:uVar9 = lVar10 + local_90;
      if (*(int*)( param_1 + 0x10c ) == 0) goto LAB_0010d96b;
      uVar7 = ZSTD_XXH64_digest(param_1 + 0x310);
      if (3 < uVar16 - local_90) {
         *(undefined4*)( param_2 + uVar9 ) = uVar7;
         uVar9 = uVar9 + 4;
         goto LAB_0010d96b;
      }

   }

   LAB_0010df40:uVar9 = 0xffffffffffffffba;
   LAB_0010d96b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_flushStream(long param_1, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 uStack_20;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x164 ) == 1) {
      local_28 = *(undefined8*)( param_1 + 0xe20 );
      local_18 = *(undefined8*)( param_1 + 0xe30 );
   }
 else {
      local_28 = 0;
      local_18 = 0;
   }

   uStack_20 = local_18;
   ZSTD_compressStream2(param_1, param_2, &local_28, 1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_endStream(long param_1, undefined8 param_2) {
   ulong uVar1;
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined1 auStack_20[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x164 ) == 1) {
      local_28 = *(undefined8*)( param_1 + 0xe20 );
      auStack_20 = *(undefined1(*) [16])( param_1 + 0xe28 );
   }
 else {
      local_28 = 0;
      auStack_20 = (undefined1[16])0x0;
   }

   uVar1 = ZSTD_compressStream2(param_1, param_2, &local_28, 2);
   if (( ( uVar1 < 0xffffffffffffff89 ) && ( *(int*)( param_1 + 0x134 ) < 1 ) ) && ( *(int*)( param_1 + 0xe1c ) == 0 )) {
      uVar1 = uVar1 + 3 + (long)( *(int*)( param_1 + 0x10c ) << 2 );
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ZSTD_maxCLevel(void) {
   return 0x16;
}
undefined8 ZSTD_minCLevel(void) {
   return 0xfffe0000;
}
undefined8 ZSTD_defaultCLevel(void) {
   return 3;
}
undefined8 ZSTD_getCParams(undefined8 param_1, undefined8 param_2, long param_3, undefined8 param_4) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      param_3 = -1;
   }

   ZSTD_getCParams_internal(param_1, param_2, param_3, param_4, 3);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 *ZSTD_getParams(undefined8 *param_1, undefined8 param_2, long param_3, undefined8 param_4) {
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined4 uStack_48;
   undefined8 uStack_44;
   undefined8 local_38;
   undefined4 uStack_24;
   undefined4 uStack_20;
   undefined4 uStack_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      param_3 = -1;
   }

   ZSTD_getCParams_internal(&local_58, param_2, param_3, param_4, 3);
   uStack_1c = 1;
   local_18 = 0;
   local_38 = local_58;
   param_1[4] = 0;
   uStack_24 = (undefined4)uStack_44;
   uStack_20 = ( undefined4 )((ulong)uStack_44 >> 0x20);
   *param_1 = local_58;
   param_1[1] = CONCAT44(uStack_4c, uStack_50);
   param_1[2] = CONCAT44(uStack_24, uStack_48);
   param_1[3] = CONCAT44(1, uStack_20);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_registerSequenceProducer(long param_1, undefined8 param_2, long param_3) {
   *(long*)( param_1 + 0xd0 ) = param_3;
   if (param_3 == 0) {
      param_2 = 0;
   }

   *(undefined8*)( param_1 + 200 ) = param_2;
   return;
}
void ZSTD_CCtxParams_registerSequenceProducer(long param_1, undefined8 param_2, long param_3) {
   *(long*)( param_1 + 0xc0 ) = param_3;
   if (param_3 == 0) {
      param_2 = 0;
   }

   *(undefined8*)( param_1 + 0xb8 ) = param_2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ZSTD_createCDict_advanced2_cold(void) {
   code *pcVar1;
   undefined8 unaff_R14;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000020 = unaff_R14;
   ( *pcVar1 )();
}

