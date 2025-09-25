/* WARNING: Type propagation algorithm not settling */void BrotliBuildCodeLengthsHuffmanTable(undefined1 *param_1, long param_2, long param_3) {
   byte bVar1;
   ushort uVar2;
   undefined2 uVar3;
   int iVar4;
   int iVar5;
   undefined2 *puVar6;
   uint uVar7;
   int iVar8;
   ulong uVar9;
   byte *pbVar10;
   undefined1 *puVar11;
   undefined1 *puVar12;
   undefined2 *puVar13;
   long lVar14;
   long lVar15;
   long in_FS_OFFSET;
   int local_a8[4];
   int local_98;
   int local_94;
   int local_88;
   undefined2 local_84[34];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8[0] = 0x11;
   local_a8[1] = *(ushort*)( param_3 + 2 ) - 1;
   local_a8[2] = ( uint ) * (ushort*)( param_3 + 4 ) + local_a8[1];
   local_a8[3] = ( uint ) * (ushort*)( param_3 + 6 ) + local_a8[2];
   local_98 = ( uint ) * (ushort*)( param_3 + 8 ) + local_a8[3];
   local_94 = local_98 + ( uint ) * (ushort*)( param_3 + 10 );
   iVar4 = 0x12;
   pbVar10 = (byte*)( param_2 + 0xc );
   do {
      for (int i = 0; i < 4; i++) {
         iVar5 = local_a8[pbVar10[( 5 - i )]];
         local_a8[pbVar10[( 5 - i )]] = iVar5 + -1;
         *(int*)( (long)&local_88 + (long)iVar5 * 2 * 2 ) = iVar4 + ( -1 - i );
      }

      iVar8 = local_a8[pbVar10[1]];
      local_a8[pbVar10[1]] = iVar8 + -1;
      iVar5 = iVar4 + -5;
      iVar4 = iVar4 + -6;
      *(int*)( (long)&local_88 + (long)iVar8 * 2 * 2 ) = iVar5;
      bVar1 = *pbVar10;
      iVar5 = local_a8[bVar1];
      *(int*)( (long)&local_88 + (long)iVar5 * 2 * 2 ) = iVar4;
      local_a8[bVar1] = iVar5 + -1;
      pbVar10 = pbVar10 + -6;
   }
 while ( iVar4 != 0 );
   if (local_a8[0] == 0) {
      puVar11 = param_1;
      do {
         *puVar11 = 0;
         puVar12 = puVar11 + 4;
         *(undefined2*)( puVar11 + 2 ) = (undefined2)local_88;
         puVar11 = puVar12;
      }
 while ( param_1 + 0x80 != puVar12 );
   }
 else {
      iVar4 = 2;
      lVar15 = 0;
      lVar14 = 1;
      uVar9 = 0x80;
      iVar5 = 0;
      do {
         uVar2 = *(ushort*)( param_3 + lVar14 * 2 );
         if (uVar2 != 0) {
            puVar13 = (undefined2*)( (long)&local_88 + (long)iVar5 * 2 * 2 );
            pbVar10 = &kReverseBits + lVar15;
            uVar7 = uVar2 - 1;
            do {
               uVar3 = *puVar13;
               iVar8 = 0x20;
               puVar6 = (undefined2*)( param_1 + ( ( ulong ) * pbVar10 - (long)iVar4 ) * 4 + 0x82 );
               do {
                  iVar8 = iVar8 - iVar4;
                  *(char*)( puVar6 + -1 ) = (char)lVar14;
                  *puVar6 = uVar3;
                  puVar6 = puVar6 + (long)-iVar4 * 2;
               }
 while ( 0 < iVar8 );
               puVar13 = puVar13 + 2;
               pbVar10 = pbVar10 + uVar9;
            }
 while ( (undefined2*)( (long)local_84 + ( (ulong)uVar7 + (long)iVar5 ) * 4 ) != puVar13 );
            iVar5 = iVar5 + 1 + uVar7;
            lVar15 = (long)(int)uVar7 * uVar9 + lVar15 + uVar9;
         }

         lVar14 = lVar14 + 1;
         iVar4 = iVar4 * 2;
         uVar9 = uVar9 >> 1;
      }
 while ( lVar14 != 6 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
int BrotliBuildHuffmanTable(void *param_1, int param_2, long param_3, long param_4) {
   undefined1 *puVar1;
   byte bVar2;
   ushort uVar3;
   ushort uVar4;
   byte bVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   byte bVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   ulong uVar14;
   ulong uVar15;
   uint uVar16;
   uint uVar17;
   ushort *puVar18;
   byte *pbVar19;
   ulong uVar20;
   void *pvVar21;
   long local_80;
   int local_78;
   int local_58;
   if (*(short*)( param_3 + -2 ) == -1) {
      lVar8 = -2;
      do {
         lVar7 = lVar8;
         lVar8 = lVar7 + -1;
      }
 while ( *(short*)( param_3 + 2 + lVar8 * 2 ) == -1 );
      iVar11 = (int)lVar7 + 0x10;
   }
 else {
      iVar11 = 0xf;
   }

   bVar10 = (byte)param_2;
   local_58 = 1 << ( bVar10 & 0x1f );
   local_78 = local_58;
   iVar12 = param_2;
   if (iVar11 < param_2) {
      local_78 = 1 << ( (byte)iVar11 & 0x1f );
      iVar12 = iVar11;
   }

   local_80 = 0;
   lVar8 = 1;
   uVar15 = 0x80;
   iVar6 = 2;
   do {
      uVar16 = (int)lVar8 - 0x10;
      uVar3 = *(ushort*)( param_4 + lVar8 * 2 );
      if (uVar3 != 0) {
         pbVar19 = &kReverseBits + local_80;
         uVar17 = (uint)uVar3;
         do {
            uVar4 = *(ushort*)( param_3 + (long)(int)uVar16 * 2 );
            uVar16 = (uint)uVar4;
            lVar7 = (long)iVar6 * -4 + ( ulong ) * pbVar19 * 4;
            lVar9 = (long)local_78;
            do {
               *(char*)( (long)param_1 + lVar9 * 4 + lVar7 ) = (char)lVar8;
               *(ushort*)( (long)param_1 + lVar9 * 4 + lVar7 + 2 ) = uVar4;
               lVar9 = lVar9 + -iVar6;
            }
 while ( 0 < (int)lVar9 );
            pbVar19 = pbVar19 + uVar15;
            uVar17 = uVar17 - 1;
         }
 while ( uVar17 != 0 );
         local_80 = local_80 + uVar15 + (long)(int)( uVar3 - 1 ) * uVar15;
      }

      iVar6 = iVar6 * 2;
      uVar15 = uVar15 >> 1;
      lVar8 = lVar8 + 1;
   }
 while ( (int)lVar8 <= iVar12 );
   for (; local_78 != local_58; local_78 = local_78 * 2) {
      memcpy((void*)( (long)param_1 + (long)local_78 * 4 ), param_1, (long)local_78 * 4);
   }

   param_2 = param_2 + 1;
   if (param_2 <= iVar11) {
      uVar20 = 0x80;
      uVar15 = 0x100;
      puVar18 = (ushort*)( param_4 + (long)param_2 * 2 );
      iVar12 = 2;
      bVar5 = 1;
      pvVar21 = param_1;
      do {
         uVar16 = param_2 - 0x10;
         if (*puVar18 != 0) {
            lVar8 = (long)local_78;
            do {
               if (uVar15 == 0x100) {
                  pvVar21 = (void*)( (long)pvVar21 + lVar8 * 4 );
                  if (param_2 == 0xf) {
                     iVar6 = 0xf;
                     uVar15 = 0xf;
                  }
 else {
                     iVar13 = ( 1 << ( bVar5 & 0x1f ) ) - ( uint ) * puVar18;
                     uVar14 = (long)( param_2 + 1 );
                     if (iVar13 < 1) {
                        uVar15 = (ulong)(byte)param_2;
                        iVar6 = param_2;
                     }
 else {
                        do {
                           uVar15 = uVar14;
                           iVar6 = (int)uVar15;
                           if (iVar6 == 0xf) break;
                           iVar13 = iVar13 * 2 - ( uint ) * (ushort*)( param_4 + uVar15 * 2 );
                           uVar14 = uVar15 + 1;
                        }
 while ( 0 < iVar13 );
                     }

                  }

                  local_78 = 1 << ( (char)iVar6 - bVar10 & 0x1f );
                  local_58 = local_58 + local_78;
                  lVar8 = (long)local_78;
                  bVar2 = ( &kReverseBits )[local_80];
                  local_80 = local_80 + ( 0x80UL >> ( bVar10 - 1 & 0x3f ) );
                  puVar1 = (undefined1*)( (long)param_1 + (ulong)bVar2 * 4 );
                  *puVar1 = (char)uVar15;
                  uVar14 = 0;
                  *(ushort*)( puVar1 + 2 ) = (short)( (long)pvVar21 - (long)param_1 >> 2 ) - (ushort)bVar2;
                  uVar15 = uVar20;
               }
 else {
                  uVar14 = ( ulong )(byte)(&kReverseBits)[uVar15];
                  uVar15 = uVar15 + uVar20;
               }

               lVar7 = (long)iVar12 * -4 + uVar14 * 4;
               uVar3 = *(ushort*)( param_3 + (long)(int)uVar16 * 2 );
               uVar16 = (uint)uVar3;
               lVar9 = lVar8;
               do {
                  *(byte*)( (long)pvVar21 + lVar9 * 4 + lVar7 ) = bVar5;
                  *(ushort*)( (long)pvVar21 + lVar9 * 4 + lVar7 + 2 ) = uVar3;
                  lVar9 = lVar9 + -iVar12;
               }
 while ( 0 < (int)lVar9 );
               *puVar18 = *puVar18 - 1;
            }
 while ( *puVar18 != 0 );
         }

         param_2 = param_2 + 1;
         iVar12 = iVar12 * 2;
         uVar20 = uVar20 >> 1;
         puVar18 = puVar18 + 1;
         bVar5 = bVar5 + 1;
      }
 while ( iVar11 + 1 != param_2 );
   }

   return local_58;
}
uint BrotliBuildSimpleHuffmanTable(undefined1 *param_1, byte param_2, ushort *param_3, undefined4 param_4) {
   ushort uVar1;
   ushort uVar2;
   long lVar3;
   long lVar4;
   uint uVar5;
   uint uVar6;
   undefined1 auVar7[16];
   uVar6 = 1 << ( param_2 & 0x1f );
   switch (param_4) {
      case 0:
    uVar2 = *param_3;
    *param_1 = 0;
    *(ushort *)(param_1 + 2) = uVar2;
      default:
    uVar5 = 1;
    break;
      case 1:
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *param_1 = 1;
    if (uVar1 < uVar2) {
      *(ushort *)(param_1 + 2) = uVar1;
      uVar2 = param_3[1];
    }
    else {
      *(ushort *)(param_1 + 2) = uVar2;
      uVar2 = *param_3;
    }
    param_1[4] = 1;
    uVar5 = 2;
    *(ushort *)(param_1 + 6) = uVar2;
    break;
      case 2:
    uVar2 = *param_3;
    *param_1 = 1;
    *(ushort *)(param_1 + 2) = uVar2;
    uVar2 = *param_3;
    param_1[8] = 1;
    *(ushort *)(param_1 + 10) = uVar2;
    uVar2 = param_3[2];
    uVar1 = param_3[1];
    param_1[4] = 2;
    if (uVar1 < uVar2) {
      *(ushort *)(param_1 + 6) = uVar1;
      uVar2 = param_3[2];
    }
    else {
      *(ushort *)(param_1 + 6) = uVar2;
      uVar2 = param_3[1];
    }
    goto LAB_001006da;
      case 3:
    lVar3 = 1;
    lVar4 = lVar3;
    do {
      uVar2 = param_3[lVar3];
      if (uVar2 < param_3[lVar4 + -1]) {
        param_3[lVar3] = param_3[lVar4 + -1];
        param_3[lVar4 + -1] = uVar2;
      }
      lVar3 = lVar3 + 1;
    } while (((int)lVar3 != 4) || (lVar3 = lVar4 + 1, lVar4 = lVar3, lVar3 != 4));
    uVar2 = *param_3;
    *param_1 = 2;
    *(ushort *)(param_1 + 2) = uVar2;
    uVar2 = param_3[1];
    param_1[8] = 2;
    *(ushort *)(param_1 + 10) = uVar2;
    uVar2 = param_3[2];
    param_1[4] = 2;
    *(ushort *)(param_1 + 6) = uVar2;
    uVar2 = param_3[3];
LAB_001006da:
    param_1[0xc] = 2;
    uVar5 = 4;
    *(ushort *)(param_1 + 0xe) = uVar2;
    break;
      case 4:
    uVar5 = *(uint *)(param_3 + 2);
    if ((ushort)(uVar5 >> 0x10) < (ushort)uVar5) {
      auVar7 = pshuflw(ZEXT416(uVar5),ZEXT416(uVar5),0xe1);
      *(int *)(param_3 + 2) = auVar7._0_4_;
    }
    uVar2 = *param_3;
    *param_1 = 1;
    uVar5 = 8;
    *(ushort *)(param_1 + 2) = uVar2;
    uVar2 = param_3[1];
    param_1[4] = 2;
    *(ushort *)(param_1 + 6) = uVar2;
    uVar2 = *param_3;
    param_1[8] = 1;
    *(ushort *)(param_1 + 10) = uVar2;
    uVar2 = param_3[2];
    param_1[0xc] = 3;
    *(ushort *)(param_1 + 0xe) = uVar2;
    uVar2 = *param_3;
    param_1[0x10] = 1;
    *(ushort *)(param_1 + 0x12) = uVar2;
    uVar2 = param_3[1];
    param_1[0x14] = 2;
    *(ushort *)(param_1 + 0x16) = uVar2;
    uVar2 = *param_3;
    param_1[0x18] = 1;
    *(ushort *)(param_1 + 0x1a) = uVar2;
    uVar2 = param_3[3];
    param_1[0x1c] = 3;
    *(ushort *)(param_1 + 0x1e) = uVar2;
   }

   for (; uVar5 != uVar6; uVar5 = uVar5 * 2) {
      memcpy(param_1 + (ulong)uVar5 * 4, param_1, (ulong)uVar5 * 4);
   }

   return uVar6;
}

