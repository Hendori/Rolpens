/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* get_2d_percentile_table(unsigned int, unsigned int) */undefined4 *get_2d_percentile_table(uint param_1, uint param_2) {
   ushort *puVar1;
   ushort uVar2;
   undefined4 uVar3;
   uint uVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   undefined4 *puVar7;
   ushort uVar8;
   ushort *puVar9;
   undefined1 *puVar10;
   long lVar11;
   puVar5 = (undefined4*)operator_new__(0x2000);
   uVar3 = _LC1;
   uVar4 = param_2 << 8 | param_1;
   if (uVar4 == 0x608) {
      uVar8 = 0x370;
      puVar10 = block_pcd_8x6;
      goto LAB_00100081;
   }

   if ((int)uVar4 < 0x609) {
      if (uVar4 == 0x506) {
         uVar8 = 0x184;
         puVar10 = block_pcd_6x5;
         goto LAB_00100081;
      }

      if ((int)uVar4 < 0x507) {
         puVar10 = block_pcd_5x4;
         uVar8 = 0x142;
         if (uVar4 == 0x405) goto LAB_00100081;
         puVar10 = block_pcd_5x5;
         uVar8 = 0x102;
         if (uVar4 == 0x505) goto LAB_00100081;
         puVar10 = block_pcd_4x4;
         uVar8 = 0xb8;
         if (uVar4 == 0x404) goto LAB_00100081;
      }
 else {
         uVar8 = 0x3ba;
         puVar10 = block_pcd_10x5;
         if (uVar4 == 0x50a) goto LAB_00100081;
         uVar8 = 0x301;
         puVar10 = block_pcd_6x6;
         if (uVar4 == 0x606) goto LAB_00100081;
         uVar8 = 0x2fb;
         puVar10 = block_pcd_8x5;
         if (uVar4 == 0x508) goto LAB_00100081;
      }

   }
 else {
      if (uVar4 == 0xa0a) {
         uVar8 = 0x447;
         puVar10 = block_pcd_10x10;
         goto LAB_00100081;
      }

      if ((int)uVar4 < 0xa0b) {
         uVar8 = 0x478;
         puVar10 = block_pcd_8x8;
         if (uVar4 == 0x808) goto LAB_00100081;
         uVar8 = 0x45f;
         puVar10 = block_pcd_10x8;
         if (uVar4 == 0x80a) goto LAB_00100081;
         uVar8 = 0x39a;
         puVar10 = block_pcd_10x6;
         if (uVar4 == 0x60a) goto LAB_00100081;
      }
 else {
         uVar8 = 1099;
         puVar10 = block_pcd_12x10;
         if (uVar4 == 0xa0c) goto LAB_00100081;
         uVar8 = 0x59b;
         puVar10 = block_pcd_12x12;
         if (uVar4 == 0xc0c) goto LAB_00100081;
      }

   }

   puVar10 = (undefined1*)0x0;
   uVar8 = _DAT_00000006;
   LAB_00100081:puVar6 = puVar5;
   do {
      *puVar6 = uVar3;
      for (int i = 0; i < 3; i++) {
         puVar6[( i + 1 )] = uVar3;
      }

      puVar7 = puVar6 + 8;
      for (int i = 0; i < 4; i++) {
         puVar6[( i + 4 )] = uVar3;
      }

      puVar6 = puVar7;
   }
 while ( puVar5 + 0x800 != puVar7 );
   lVar11 = 0;
   while (true) {
      uVar4 = ( uint ) * (ushort*)( puVar10 + lVar11 + 10 );
      puVar9 = *(ushort**)( puVar10 + lVar11 * 4 + 0x10 );
      if (*(ushort*)( puVar10 + lVar11 + 2 ) != 0) {
         puVar1 = puVar9 + ( ulong )(*(ushort*)( puVar10 + lVar11 + 2 ) - 1) + 1;
         do {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar4 = ( uVar2 >> 0xb ) + uVar4;
            puVar5[uVar2 & 0x7ff] = (float)uVar4 / (float)uVar8;
         }
 while ( puVar9 != puVar1 );
      }

      if (lVar11 == 2) break;
      uVar8 = *(ushort*)( puVar10 + 8 );
      lVar11 = 2;
   }
;
   return puVar5;
}
/* is_legal_2d_block_size(unsigned int, unsigned int) */bool is_legal_2d_block_size(uint param_1, uint param_2) {
   uint uVar1;
   bool bVar2;
   uVar1 = param_1 << 8 | param_2;
   if (uVar1 < 0xa0b) {
      if (0xa04 < uVar1) {
         return ( 0x2bUL >> ( ( ulong )(uVar1 - 0xa05) & 0x3f ) & 1 ) != 0;
      }

      if (0x606 < uVar1) {
         if (0x806 < uVar1) {
            return uVar1 == 0x808;
         }

         return 0x804 < uVar1;
      }

      bVar2 = true;
      if (( uVar1 < 0x605 ) && ( uVar1 != 0x404 )) {
         return uVar1 - 0x504 < 2;
      }

   }
 else {
      bVar2 = ( uVar1 - 0xc0a & 0xfffffffd ) == 0;
   }

   return bVar2;
}
/* is_legal_3d_block_size(unsigned int, unsigned int, unsigned int) */bool is_legal_3d_block_size(uint param_1, uint param_2, uint param_3) {
   uint uVar1;
   uVar1 = param_1 << 0x10 | param_2 << 8 | param_3;
   if (uVar1 != 0x50404) {
      if (uVar1 < 0x50405) {
         if (uVar1 != 0x40303) {
            if (uVar1 < 0x40304) {
               return uVar1 == 0x30303;
            }

            return uVar1 - 0x40403 < 2;
         }

      }
 else if (uVar1 != 0x60505) {
         if (uVar1 < 0x60506) {
            return uVar1 - 0x50504 < 2;
         }

         return uVar1 - 0x60605 < 2;
      }

   }

   return true;
}

