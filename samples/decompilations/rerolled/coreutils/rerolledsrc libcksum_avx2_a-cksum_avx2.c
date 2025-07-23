/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */_Bool cksum_avx2(FILE *fp, uint_fast32_t *crc_out, uintmax_t *length_out) {
   ulong *puVar1;
   undefined1 *puVar2;
   _Bool _Var3;
   uint uVar4;
   size_t sVar5;
   byte *pbVar6;
   int *piVar8;
   ulong uVar9;
   ulong uVar10;
   undefined1 *puVar11;
   long in_FS_OFFSET;
   bool bVar12;
   __m256i buf[2048];
   undefined1 auStack_10040[65536];
   undefined1 auStack_40[16];
   byte *pbVar7;
   puVar2 = auStack_40;
   do {
      puVar11 = puVar2;
      *(undefined8*)( puVar11 + -0x1000 ) = *(undefined8*)( puVar11 + -0x1000 );
      puVar2 = puVar11 + -0x1000;
   }
 while ( puVar11 + -0x1000 != auStack_10040 );
   *(uintmax_t**)( puVar11 + -0x1030 ) = length_out;
   *(undefined8*)( puVar11 + 0xeff8 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   if (( crc_out == (uint_fast32_t*)0x0 || length_out == (uintmax_t*)0x0 ) || ( fp == (FILE*)0x0 )) {
      LAB_00100330:_Var3 = false;
   }
 else {
      uVar10 = 0;
      uVar9 = 0;
      do {
         *(ulong*)( puVar11 + -0x1028 ) = uVar9;
         *(undefined8*)( puVar11 + -0x1048 ) = 0x10009d;
         sVar5 = fread_unlocked(puVar11 + -0x1020, 1, 0x10000, (FILE*)fp);
         uVar9 = *(ulong*)( puVar11 + -0x1028 );
         if (sVar5 == 0) {
            uVar4 = fp->_flags;
            break;
         }

         bVar12 = CARRY8(uVar10, sVar5);
         uVar10 = uVar10 + sVar5;
         if (bVar12) {
            *(undefined8*)( puVar11 + -0x1048 ) = 0x10032a;
            piVar8 = __errno_location();
            *piVar8 = 0x4b;
            goto LAB_00100330;
         }

         if (0xff < sVar5) {
            vpinsrd_avx((undefined1[16])0x0, (int)uVar9, 3);
            for (int i = 0; i < 4; i++) {
               vpshufb_avx2(*(undefined1(*) [32])( puVar11 + ( 32*i + -4128 ) ), __LC0);
            }

            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x3f < sVar5) {
            vpinsrd_avx((undefined1[16])0x0, (int)uVar9, 3);
            vpshufb_avx2(*(undefined1(*) [32])( puVar11 + -0x1020 ), __LC0);
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         pbVar7 = puVar11 + -0x1020;
         do {
            pbVar6 = pbVar7 + 1;
            uVar9 = uVar9 << 8 ^ *(ulong*)( &crctab + ( ulong )(byte)(( byte )(uVar9 >> 0x18) ^ *pbVar7) * 8 );
            pbVar7 = pbVar6;
         }
 while ( pbVar6 != puVar11 + ( sVar5 - 0x1020 ) );
         uVar4 = fp->_flags;
      }
 while ( ( uVar4 & 0x10 ) == 0 );
      puVar1 = *(ulong**)( puVar11 + -0x1030 );
      *crc_out = uVar9;
      *puVar1 = uVar10;
      _Var3 = ( _Bool )(( ( byte )(uVar4 >> 5) ^ 1 ) & 1);
   }

   if (*(long*)( puVar11 + 0xeff8 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return _Var3;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar11 + -0x1048 ) = 0x10033c;
   __stack_chk_fail();
}

