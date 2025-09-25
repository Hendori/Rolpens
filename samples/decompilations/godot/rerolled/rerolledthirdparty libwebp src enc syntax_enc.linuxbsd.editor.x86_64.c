void VP8EncFreeBitWriters(long param_1) {
   int iVar1;
   long lVar2;
   VP8BitWriterWipeOut(param_1 + 0x40);
   if (0 < *(int*)( param_1 + 0x3c )) {
      iVar1 = 0;
      lVar2 = param_1 + 0x70;
      do {
         iVar1 = iVar1 + 1;
         VP8BitWriterWipeOut(lVar2);
         lVar2 = lVar2 + 0x30;
      }
 while ( iVar1 < *(int*)( param_1 + 0x3c ) );
   }

   return;
}
ulong VP8EncWrite(long param_1) {
   ulong uVar1;
   int iVar2;
   int iVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   int iVar11;
   int iVar12;
   uint uVar13;
   int iVar14;
   long *plVar15;
   long *plVar16;
   ulong extraout_RDX;
   ulong extraout_RDX_00;
   ulong extraout_RDX_01;
   byte *pbVar17;
   ulong uVar18;
   int iVar19;
   undefined8 uVar20;
   ulong *puVar21;
   ulong uVar22;
   long lVar23;
   char *pcVar24;
   undefined4 *puVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   undefined1 uVar27;
   undefined1 local_59;
   byte local_58;
   undefined1 uStack_57;
   undefined1 uStack_56;
   undefined1 uStack_55;
   undefined1 uStack_54;
   undefined1 uStack_53;
   ushort uStack_52;
   undefined1 uStack_50;
   undefined1 uStack_4f;
   undefined2 uStack_4e;
   undefined2 uStack_4c;
   undefined1 uStack_4a;
   undefined1 uStack_49;
   undefined1 local_48;
   undefined1 uStack_47;
   long local_40;
   lVar23 = param_1 + 0x40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( param_1 + 8 );
   iVar12 = *(int*)( param_1 + 0x4c );
   iVar14 = *(int*)( param_1 + 0x48 );
   iVar2 = *(int*)( param_1 + 0x3c );
   iVar3 = *(int*)( param_1 + 0x218 );
   lVar6 = *(long*)( param_1 + 0x58 );
   iVar11 = *(int*)( param_1 + 0x30 ) * *(int*)( param_1 + 0x34 ) * 7;
   iVar19 = iVar11 + 7;
   if (-1 < iVar11) {
      iVar19 = iVar11;
   }

   iVar11 = VP8BitWriterInit(lVar23, (long)( iVar19 >> 3 ));
   if (iVar11 == 0) {
      iVar12 = WebPEncodingSetError(*(undefined8*)( param_1 + 8 ), 1);
      LAB_001006b7:if (iVar12 != 0) {
         uVar26 = *(ulong*)( param_1 + 0x58 );
         goto LAB_001002ca;
      }

      LAB_001006bf:uVar26 = 0;
   }
 else {
      VP8PutBitUniform(lVar23, 0);
      VP8PutBitUniform(lVar23, 0);
      iVar11 = VP8PutBitUniform(lVar23, 1 < *(int*)( param_1 + 0x20 ));
      if (iVar11 != 0) {
         VP8PutBitUniform(lVar23, *(undefined4*)( param_1 + 0x24 ));
         iVar11 = VP8PutBitUniform(lVar23, 1);
         if (iVar11 != 0) {
            puVar25 = (undefined4*)( param_1 + 0x508 );
            VP8PutBitUniform(lVar23, 1);
            do {
               uVar4 = *puVar25;
               puVar25 = puVar25 + 0xba;
               VP8PutSignedBits(lVar23, uVar4, 7);
            }
 while ( (undefined4*)( param_1 + 0x10a8 ) != puVar25 );
            puVar25 = (undefined4*)( param_1 + 0x50c );
            do {
               uVar4 = *puVar25;
               puVar25 = puVar25 + 0xba;
               VP8PutSignedBits(lVar23, uVar4, 6);
            }
 while ( (undefined4*)( param_1 + 0x10ac ) != puVar25 );
         }

         if (*(int*)( param_1 + 0x24 ) != 0) {
            pcVar24 = (char*)( param_1 + 0xe20 );
            do {
               iVar11 = VP8PutBitUniform(lVar23, *pcVar24 != -1);
               if (iVar11 != 0) {
                  VP8PutBits(lVar23, *pcVar24, 8);
               }

               pcVar24 = pcVar24 + 1;
            }
 while ( (char*)( param_1 + 0xe23 ) != pcVar24 );
         }

      }

      iVar11 = *(int*)( param_1 + 0x1c );
      VP8PutBitUniform(lVar23, *(undefined4*)( param_1 + 0x10 ));
      VP8PutBits(lVar23, *(undefined4*)( param_1 + 0x14 ), 6);
      VP8PutBits(lVar23, *(undefined4*)( param_1 + 0x18 ), 3);
      iVar11 = VP8PutBitUniform(lVar23, iVar11 != 0);
      if (( iVar11 != 0 ) && ( iVar11 = iVar11 != 0 )) {
         VP8PutBits(lVar23, 0, 4);
         VP8PutSignedBits(lVar23, *(undefined4*)( param_1 + 0x1c ), 6);
         VP8PutBits(lVar23, 0, 3);
      }

      iVar11 = *(int*)( param_1 + 0x3c );
      uVar27 = 3;
      if (( iVar11 != 8 ) && ( uVar27 = iVar11 != 4 )) {
         uVar27 = iVar11 == 2;
      }

      VP8PutBits(lVar23, uVar27, 2);
      VP8PutBits(lVar23, *(undefined4*)( param_1 + 0xe00 ), 7);
      for (int i = 0; i < 5; i++) {
         VP8PutSignedBits(lVar23, *(undefined4*)( param_1 + ( 4*i + 3596 ) ), 4);
      }

      VP8PutBitUniform(lVar23, 0);
      VP8WriteProbas(lVar23, param_1 + 0xe20);
      iVar11 = *(int*)( param_1 + 0x4c );
      lVar7 = *(long*)( param_1 + 0x58 );
      iVar19 = *(int*)( param_1 + 0x48 );
      VP8CodeIntraModes(param_1);
      VP8BitWriterFinish(lVar23);
      lVar8 = *(long*)( param_1 + 8 );
      uVar26 = *(ulong*)( param_1 + 0x58 );
      lVar9 = *(long*)( lVar8 + 0x80 );
      if (lVar9 != 0) {
         lVar7 = (long)( iVar11 + 8 ) + ( iVar19 + lVar7 ) * 8;
         *(int*)( lVar9 + 0x28 ) = (int)( ( (long)*(int*)( param_1 + 0x4c ) + 0xf + ( (long)*(int*)( param_1 + 0x48 ) + uVar26 ) * 8 ) - lVar7 >> 3 );
         uVar4 = *(undefined4*)( param_1 + 0x228 );
         *(int*)( lVar9 + 0x24 ) = (int)( ( ulong )(( lVar7 - ( iVar12 + 8 ) ) + 7 + ( iVar14 + lVar6 ) * -8) >> 3 );
         *(undefined4*)( lVar9 + 0x8c ) = uVar4;
      }

      if (*(int*)( param_1 + 0x68 ) != 0) {
         iVar12 = WebPEncodingSetError(lVar8, 1);
         goto LAB_001006b7;
      }

      LAB_001002ca:iVar12 = *(int*)( param_1 + 0x3c );
      uVar22 = uVar26 + 10 + (long)( iVar12 * 3 + -3 );
      if (0 < iVar12) {
         plVar15 = (long*)( param_1 + 0x88 );
         plVar16 = plVar15 + (long)iVar12 * 6;
         do {
            uVar22 = uVar22 + *plVar15;
            plVar15 = plVar15 + 6;
         }
 while ( plVar16 != plVar15 );
      }

      uVar18 = uVar22 + 1 & 0xfffffffffffffffe;
      uVar1 = uVar18 + 0xc;
      if (*(int*)( param_1 + 0x21c ) != 0) {
         uVar1 = uVar18 + 0x1e + ( ulong )(( *(int*)( param_1 + 0x228 ) + 1U & 0xfffffffe ) + 8);
      }

      if (0xfffffffe < uVar1) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar26 = WebPEncodingSetError(lVar5, 9);
            return uVar26;
         }

         goto LAB_001009a4;
      }

      uVar10 = *(undefined8*)( param_1 + 0x50 );
      lVar6 = *(long*)( param_1 + 8 );
      local_58 = 0x52;
      uStack_57 = 0x49;
      uStack_56 = 0x46;
      uStack_55 = 0x46;
      uStack_54 = (undefined1)uVar1;
      uStack_53 = ( undefined1 )(uVar1 >> 8);
      uStack_52 = ( ushort )(uVar1 >> 0x10);
      uStack_50 = 0x57;
      uStack_4f = 0x45;
      uStack_4e = 0x5042;
      iVar12 = ( **(code**)( lVar6 + 0x60 ) )(&local_58, 0xc, lVar6);
      if (iVar12 == 0) {
         LAB_00100858:uVar20 = 8;
         LAB_0010085d:iVar12 = WebPEncodingSetError(lVar6, uVar20);
         if (iVar12 != 0) goto LAB_0010041b;
         LAB_00100436:uVar26 = 0;
         VP8BitWriterWipeOut(lVar23);
         if (0 < *(int*)( param_1 + 0x3c )) {
            LAB_0010044e:lVar23 = param_1 + 0x70;
            iVar12 = 0;
            uVar18 = 0x13 % (long)iVar2 & 0xffffffff;
            do {
               while (true) {
                  if (*(long*)( lVar23 + 0x18 ) != 0) break;
                  VP8BitWriterWipeOut(lVar23, 0, uVar18);
                  uVar18 = extraout_RDX_00;
                  if ((int)uVar26 != 0) goto LAB_001004a7;
                  LAB_001004f0:uVar26 = 0;
                  iVar12 = iVar12 + 1;
                  lVar23 = lVar23 + 0x30;
                  if (*(int*)( param_1 + 0x3c ) <= iVar12) goto LAB_00100506;
               }
;
               if (( (int)uVar26 == 0 ) || ( iVar14 = ( **(code**)( lVar5 + 0x60 ) )(*(undefined8*)( lVar23 + 0x10 ), *(long*)( lVar23 + 0x18 ), lVar5) ),iVar14 == 0) {
                  VP8BitWriterWipeOut(lVar23);
                  uVar18 = extraout_RDX_01;
                  goto LAB_001004f0;
               }

               VP8BitWriterWipeOut(lVar23);
               LAB_001004a7:iVar14 = WebPReportProgress(lVar5, *(int*)( param_1 + 0x218 ) + (int)( 0x13 / (long)iVar2 ), param_1 + 0x218);
               uVar26 = ( ulong )(iVar14 != 0);
               iVar12 = iVar12 + 1;
               lVar23 = lVar23 + 0x30;
               uVar18 = extraout_RDX;
            }
 while ( iVar12 < *(int*)( param_1 + 0x3c ) );
            goto LAB_00100506;
         }

         *(int*)( param_1 + 0x5c00 ) = (int)uVar1 + 8;
         LAB_00100569:WebPEncodingSetError(lVar5, 8);
         goto LAB_001006bf;
      }

      if (*(int*)( param_1 + 0x21c ) != 0) {
         lVar7 = *(long*)( param_1 + 8 );
         uStack_4f = 0;
         uStack_4e = 0;
         local_58 = 0x56;
         uStack_57 = 0x50;
         uStack_56 = 0x38;
         uStack_55 = 0x58;
         uStack_53 = 0;
         uStack_52 = 0;
         uStack_50 = 0x10;
         uStack_54 = 10;
         iVar12 = *(int*)( lVar7 + 8 ) + -1;
         uStack_4c = (undefined2)iVar12;
         uStack_4a = ( undefined1 )((uint)iVar12 >> 0x10);
         iVar12 = *(int*)( lVar7 + 0xc ) + -1;
         uStack_49 = (undefined1)iVar12;
         local_48 = ( undefined1 )((uint)iVar12 >> 8);
         uStack_47 = ( undefined1 )((uint)iVar12 >> 0x10);
         iVar12 = ( **(code**)( lVar7 + 0x60 ) )(&local_58, 0x12);
         if (iVar12 == 0) goto LAB_00100858;
         if (*(int*)( param_1 + 0x21c ) != 0) {
            lVar7 = *(long*)( param_1 + 8 );
            local_58 = 0x41;
            uStack_57 = 0x4c;
            uStack_56 = 0x50;
            uStack_55 = 0x48;
            uVar4 = *(undefined4*)( param_1 + 0x228 );
            uStack_54 = (undefined1)uVar4;
            uStack_53 = ( undefined1 )((uint)uVar4 >> 8);
            uStack_52 = ( ushort )((uint)uVar4 >> 0x10);
            iVar12 = ( **(code**)( lVar7 + 0x60 ) )(&local_58, 8);
            if (( iVar12 == 0 ) || ( iVar12 = ( **(code**)( lVar7 + 0x60 ) )(*(undefined8*)( param_1 + 0x220 ), *(undefined4*)( param_1 + 0x228 )) ),iVar12 == 0) goto LAB_00100858;
            if (( *(byte*)( param_1 + 0x228 ) & 1 ) != 0) {
               local_59 = 0;
               iVar12 = ( **(code**)( lVar7 + 0x60 ) )(&local_59, 1);
               if (iVar12 == 0) goto LAB_00100858;
            }

         }

      }

      local_58 = 0x56;
      uStack_57 = 0x50;
      uStack_56 = 0x38;
      uStack_55 = 0x20;
      uStack_54 = (undefined1)uVar18;
      uStack_53 = ( undefined1 )(uVar18 >> 8);
      uStack_52 = ( ushort )(uVar18 >> 0x10);
      iVar12 = ( **(code**)( lVar6 + 0x60 ) )(&local_58, 8, lVar6);
      if (iVar12 == 0) goto LAB_00100858;
      if (0x7ffff < uVar26) {
         uVar20 = 6;
         goto LAB_0010085d;
      }

      uStack_53 = 0x2a;
      uStack_55 = 0x9d;
      uStack_54 = 1;
      uVar13 = *(int*)( param_1 + 0x2c ) * 2 | (int)uVar26 << 5;
      local_58 = (byte)uVar13 | 0x10;
      uStack_57 = ( undefined1 )(uVar13 >> 8);
      uStack_56 = ( undefined1 )(uVar13 >> 0x10);
      uStack_52 = ( ushort )(( *(uint*)( lVar6 + 8 ) >> 8 & 0xff ) << 8) | ( ushort ) * (uint*)( lVar6 + 8 ) & 0xff;
      uStack_50 = ( undefined1 ) * (undefined2*)( lVar6 + 0xc );
      uStack_4f = ( undefined1 )(( ushort ) * (undefined2*)( lVar6 + 0xc ) >> 8);
      iVar12 = ( **(code**)( lVar6 + 0x60 ) )(&local_58, 10, lVar6);
      if (iVar12 == 0) goto LAB_00100858;
      LAB_0010041b:iVar12 = ( **(code**)( lVar5 + 0x60 ) )(uVar10, uVar26, lVar5);
      if (iVar12 == 0) goto LAB_00100436;
      iVar12 = *(int*)( param_1 + 0x3c );
      if (iVar12 < 2) {
         LAB_00100967:uVar26 = 1;
      }
 else {
         puVar21 = (ulong*)( param_1 + 0x88 );
         iVar14 = 0;
         pbVar17 = &local_58;
         do {
            uVar26 = *puVar21;
            if (0xffffff < uVar26) {
               iVar12 = WebPEncodingSetError(lVar5, 7);
               goto LAB_0010092e;
            }

            *pbVar17 = (byte)uVar26;
            iVar14 = iVar14 + 1;
            puVar21 = puVar21 + 6;
            pbVar17[1] = ( byte )(uVar26 >> 8);
            pbVar17[2] = ( byte )(uVar26 >> 0x10);
            pbVar17 = pbVar17 + 3;
         }
 while ( iVar14 != iVar12 + -1 );
         iVar12 = ( **(code**)( lVar5 + 0x60 ) )(&local_58, (long)( iVar14 * 3 ), lVar5);
         if (iVar12 != 0) goto LAB_00100967;
         iVar12 = WebPEncodingSetError(lVar5, 8);
         LAB_0010092e:uVar26 = ( ulong )(iVar12 != 0);
      }

      VP8BitWriterWipeOut(lVar23);
      if (0 < *(int*)( param_1 + 0x3c )) goto LAB_0010044e;
      LAB_00100506:if (( (int)uVar26 != 0 ) && ( ( uVar22 & 1 ) != 0 )) {
         local_58 = 0;
         iVar12 = ( **(code**)( lVar5 + 0x60 ) )(&local_58, 1, lVar5);
         uVar26 = ( ulong )(iVar12 != 0);
      }

      *(int*)( param_1 + 0x5c00 ) = (int)uVar1 + 8;
      if (( (int)uVar26 == 0 ) || ( iVar12 = iVar12 == 0 )) goto LAB_00100569;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar26;
   }

   LAB_001009a4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}

