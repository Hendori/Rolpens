undefined1[16];HUF_decompress4X1_usingDTable_internal_fast_asm_loop(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   ushort uVar1;
   ushort uVar2;
   ushort uVar3;
   ushort uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 in_RAX;
   undefined1 *puVar8;
   ulong uVar9;
   ulong uVar10;
   undefined1 *puVar11;
   ulong uVar12;
   undefined1 *puVar13;
   undefined1 *puVar14;
   ulong *puVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   undefined1 *puVar19;
   undefined1 auVar20[16];
   ulong *local_b0;
   ulong *local_a8;
   ulong *local_a0;
   puVar15 = (ulong*)*param_1;
   local_b0 = (ulong*)param_1[1];
   local_a8 = (ulong*)param_1[2];
   local_a0 = (ulong*)param_1[3];
   puVar13 = (undefined1*)param_1[4];
   puVar11 = (undefined1*)param_1[5];
   puVar8 = (undefined1*)param_1[6];
   puVar14 = (undefined1*)param_1[7];
   uVar12 = param_1[8];
   uVar10 = param_1[9];
   uVar16 = param_1[10];
   uVar17 = param_1[0xb];
   lVar5 = param_1[0xc];
   lVar6 = param_1[0xd];
   lVar7 = param_1[0xe];
   while (true) {
      uVar18 = ( ulong )(lVar7 - (long)puVar14) / 5;
      uVar9 = ( ulong )((long)puVar15 - lVar6) / 7;
      if (uVar9 < uVar18) {
         uVar18 = uVar9;
      }

      puVar19 = puVar14 + uVar18 * 5;
      if (( ( ( puVar19 == puVar14 ) || ( local_b0 < puVar15 ) ) || ( local_a8 < local_b0 ) ) || ( local_a0 < local_a8 )) break;
      uVar1 = *(ushort*)( lVar5 + ( uVar12 >> 0x35 ) * 2 );
      uVar2 = *(ushort*)( lVar5 + ( uVar10 >> 0x35 ) * 2 );
      uVar3 = *(ushort*)( lVar5 + ( uVar16 >> 0x35 ) * 2 );
      uVar4 = *(ushort*)( lVar5 + ( uVar17 >> 0x35 ) * 2 );
      do {
         uVar12 = uVar12 << ( (ulong)uVar1 & 0x3f );
         *puVar13 = (char)( uVar1 >> 8 );
         uVar1 = *(ushort*)( lVar5 + ( uVar12 >> 0x35 ) * 2 );
         uVar10 = uVar10 << ( (ulong)uVar2 & 0x3f );
         *puVar11 = (char)( uVar2 >> 8 );
         uVar2 = *(ushort*)( lVar5 + ( uVar10 >> 0x35 ) * 2 );
         uVar16 = uVar16 << ( (ulong)uVar3 & 0x3f );
         *puVar8 = (char)( uVar3 >> 8 );
         uVar3 = *(ushort*)( lVar5 + ( uVar16 >> 0x35 ) * 2 );
         uVar17 = uVar17 << ( (ulong)uVar4 & 0x3f );
         *puVar14 = (char)( uVar4 >> 8 );
         uVar4 = *(ushort*)( lVar5 + ( uVar17 >> 0x35 ) * 2 );
         uVar12 = uVar12 << ( (ulong)uVar1 & 0x3f );
         puVar13[1] = (char)( uVar1 >> 8 );
         for (int i = 0; i < 3; i++) {
            uVar1 = *(ushort*)( lVar5 + ( uVar12 >> 53 ) * 2 );
            uVar10 = uVar10 << ( (ulong)uVar2 & 63 );
            puVar11[( i + 1 )] = (char)( uVar2 >> 8 );
            uVar2 = *(ushort*)( lVar5 + ( uVar10 >> 53 ) * 2 );
            uVar16 = uVar16 << ( (ulong)uVar3 & 63 );
            puVar8[( i + 1 )] = (char)( uVar3 >> 8 );
            uVar3 = *(ushort*)( lVar5 + ( uVar16 >> 53 ) * 2 );
            uVar17 = uVar17 << ( (ulong)uVar4 & 63 );
            puVar14[( i + 1 )] = (char)( uVar4 >> 8 );
            uVar4 = *(ushort*)( lVar5 + ( uVar17 >> 53 ) * 2 );
            uVar12 = uVar12 << ( (ulong)uVar1 & 63 );
            puVar13[( i + 2 )] = (char)( uVar1 >> 8 );
         }

         uVar10 = uVar10 << ( (ulong)uVar2 & 0x3f );
         puVar11[4] = (char)( uVar2 >> 8 );
         uVar16 = uVar16 << ( (ulong)uVar3 & 0x3f );
         puVar8[4] = (char)( uVar3 >> 8 );
         uVar17 = uVar17 << ( (ulong)uVar4 & 0x3f );
         puVar14[4] = (char)( uVar4 >> 8 );
         uVar18 = 0;
         if (uVar12 != 0) {
            for (; ( uVar12 >> uVar18 & 1 ) == 0; uVar18 = uVar18 + 1) {}
         }

         puVar13 = puVar13 + 5;
         puVar15 = (ulong*)( (long)puVar15 - ( uVar18 >> 3 ) );
         uVar12 = ( *puVar15 | 1 ) << ( uVar18 & 7 );
         uVar1 = *(ushort*)( lVar5 + ( uVar12 >> 0x35 ) * 2 );
         uVar18 = 0;
         if (uVar10 != 0) {
            for (; ( uVar10 >> uVar18 & 1 ) == 0; uVar18 = uVar18 + 1) {}
         }

         puVar11 = puVar11 + 5;
         local_b0 = (ulong*)( (long)local_b0 - ( uVar18 >> 3 ) );
         uVar10 = ( *local_b0 | 1 ) << ( uVar18 & 7 );
         uVar2 = *(ushort*)( lVar5 + ( uVar10 >> 0x35 ) * 2 );
         uVar18 = 0;
         if (uVar16 != 0) {
            for (; ( uVar16 >> uVar18 & 1 ) == 0; uVar18 = uVar18 + 1) {}
         }

         puVar8 = puVar8 + 5;
         local_a8 = (ulong*)( (long)local_a8 - ( uVar18 >> 3 ) );
         uVar16 = ( *local_a8 | 1 ) << ( uVar18 & 7 );
         uVar3 = *(ushort*)( lVar5 + ( uVar16 >> 0x35 ) * 2 );
         uVar18 = 0;
         if (uVar17 != 0) {
            for (; ( uVar17 >> uVar18 & 1 ) == 0; uVar18 = uVar18 + 1) {}
         }

         puVar14 = puVar14 + 5;
         local_a0 = (ulong*)( (long)local_a0 - ( uVar18 >> 3 ) );
         uVar17 = ( *local_a0 | 1 ) << ( uVar18 & 7 );
         uVar4 = *(ushort*)( lVar5 + ( uVar17 >> 0x35 ) * 2 );
      }
 while ( puVar14 < puVar19 );
   }
;
   *param_1 = puVar15;
   param_1[1] = local_b0;
   param_1[2] = local_a8;
   param_1[3] = local_a0;
   param_1[4] = puVar13;
   param_1[5] = puVar11;
   param_1[6] = puVar8;
   param_1[7] = puVar14;
   param_1[8] = uVar12;
   param_1[9] = uVar10;
   param_1[10] = uVar16;
   param_1[0xb] = uVar17;
   auVar20._8_8_ = param_3;
   auVar20._0_8_ = in_RAX;
   return auVar20;
}

