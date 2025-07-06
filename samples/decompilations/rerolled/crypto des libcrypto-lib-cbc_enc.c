void DES_cbc_encrypt(uchar *input, uchar *output, long length, DES_key_schedule *schedule, DES_cblock *ivec, int enc) {
   byte *pbVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined1 *puVar5;
   uchar *puVar6;
   uint uVar7;
   uchar *puVar8;
   uint uVar9;
   undefined1 *puVar10;
   uint uVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   ulong *puVar15;
   DES_cblock *pauVar16;
   DES_cblock *pauVar17;
   long in_FS_OFFSET;
   DES_cblock auVar18;
   ulong *local_80;
   undefined8 local_48;
   long local_40;
   uVar4 = length - 8;
   auVar18 = *ivec;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (enc == 0) {
      uVar13 = auVar18._4_4_;
      uVar11 = auVar18._0_4_;
      local_80 = (ulong*)output;
      if (7 < length) {
         lVar2 = ( uVar4 >> 3 ) * 8 + 8;
         local_80 = (ulong*)( output + lVar2 );
         uVar12 = (ulong)auVar18 & 0xffffffff;
         pauVar16 = (DES_cblock*)input;
         uVar7 = uVar13;
         do {
            uVar11 = *(uint*)*pauVar16;
            uVar13 = *(uint*)( *pauVar16 + 4 );
            local_48 = *pauVar16;
            puVar15 = (ulong*)( (long)output + 8 );
            pauVar16 = pauVar16 + 1;
            DES_encrypt1((uint*)&local_48, schedule, 0);
            uVar7 = local_48._4_4_ ^ uVar7;
            uVar9 = (uint)local_48 ^ (uint)uVar12;
            *(ulong*)output = ( ( ( ( ( ( ( ulong )(uVar7 >> 0x18) << 8 | ( ulong )(uVar7 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar7 >> 8 & 0xff) ) << 8 | ( ulong )(uVar7 & 0xff) ) << 8 | ( ulong )(uVar9 >> 0x18) ) << 8 | ( ulong )(uVar9 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar9 >> 8 & 0xff) ) << 8 | ( ulong )(uVar9 & 0xff);
            uVar12 = (ulong)uVar11;
            output = (uchar*)puVar15;
            uVar7 = uVar13;
         }
 while ( puVar15 != local_80 );
         lVar14 = ( uVar4 >> 3 ) * -8;
         lVar3 = length + -0x10;
         input = input + lVar2;
         length = lVar14 + uVar4;
         uVar4 = lVar3 + lVar14;
      }

      if (uVar4 == 0xfffffffffffffff8) goto switchD_00100326_caseD_0;
      local_48 = *(DES_cblock*)input;
      DES_encrypt1((uint*)&local_48, schedule, 0);
      uVar11 = uVar11 ^ (uint)local_48;
      uVar13 = local_48._4_4_ ^ uVar13;
      puVar5 = (undefined1*)( (long)local_80 + uVar4 + 8 );
      switch (length) {
         default:
      goto switchD_00100326_caseD_0;
         case 1:
      goto switchD_00100326_caseD_1;
         case 2:
      goto LAB_0010035e;
         case 3:
      goto switchD_00100326_caseD_3;
         case 4:
      puVar10 = puVar5;
      break;
         case 7:
      puVar5 = puVar5 + -1;
      *puVar5 = (char)(uVar13 >> 0x10);
         case 6:
      puVar5 = puVar5 + -1;
      *puVar5 = (char)(uVar13 >> 8);
         case 5:
      puVar5[-1] = (char)uVar13;
      puVar10 = puVar5 + -1;
      }

      puVar5 = puVar10 + -1;
      puVar10[-1] = (char)( uVar11 >> 0x18 );
      switchD_00100326_caseD_3:puVar5[-1] = (char)( uVar11 >> 0x10 );
      puVar5 = puVar5 + -1;
      LAB_0010035e:puVar5[-1] = (char)( uVar11 >> 8 );
      puVar5 = puVar5 + -1;
      switchD_00100326_caseD_1:puVar5[-1] = (char)uVar11;
      goto switchD_00100326_caseD_0;
   }

   if (-1 < (long)uVar4) {
      lVar2 = ( uVar4 >> 3 ) * 8 + 8;
      puVar15 = (ulong*)input;
      pauVar16 = (DES_cblock*)output;
      local_48 = auVar18;
      do {
         uVar12 = *puVar15;
         pauVar17 = pauVar16 + 1;
         puVar15 = puVar15 + 1;
         local_48 = ( DES_cblock )((ulong)local_48 ^ uVar12);
         DES_encrypt1((uint*)&local_48, schedule, 1);
         uVar11 = local_48._4_4_;
         *pauVar16 = ( DES_cblock )(( ( ( ( ( ( ( ulong )(uVar11 >> 0x18) << 8 | ( ulong )(uVar11 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar11 >> 8 & 0xff) ) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )((uint)local_48 >> 0x18) ) << 8 | ( ulong )((uint)local_48 >> 0x10 & 0xff) ) << 8 | ( ulong )((uint)local_48 >> 8 & 0xff) ) << 8 | ( ulong )((uint)local_48 & 0xff));
         pauVar16 = pauVar17;
      }
 while ( pauVar17 != (DES_cblock*)( output + lVar2 ) );
      lVar14 = ( uVar4 >> 3 ) * -8;
      input = input + lVar2;
      lVar3 = length + -0x10;
      length = lVar14 + uVar4;
      uVar4 = lVar3 + lVar14;
      output = output + lVar2;
      auVar18 = local_48;
   }

   if (uVar4 == 0xfffffffffffffff8) goto switchD_00100326_caseD_0;
   puVar6 = input + uVar4 + 8;
   uVar11 = auVar18._4_4_;
   switch (length) {
      default:
    goto switchD_00100185_caseD_0;
      case 1:
    uVar13 = 0;
    goto LAB_001003d8;
      case 2:
    uVar13 = 0;
    puVar8 = puVar6;
    goto LAB_001003cb;
      case 3:
    uVar13 = 0;
    goto LAB_001003be;
      case 4:
    goto LAB_001003b3;
      case 5:
    uVar13 = 0;
    goto LAB_0010039f;
      case 6:
    uVar13 = 0;
    break;
      case 7:
    pbVar1 = puVar6 + -1;
    puVar6 = puVar6 + -1;
    uVar13 = (uint)*pbVar1 << 0x10;
   }

   pbVar1 = puVar6 + -1;
   puVar6 = puVar6 + -1;
   uVar13 = ( uint ) * pbVar1 << 8 | uVar13;
   LAB_0010039f:uVar11 = uVar11 ^ ( puVar6[-1] | uVar13 );
   puVar6 = puVar6 + -1;
   LAB_001003b3:pbVar1 = puVar6 + -1;
   puVar6 = puVar6 + -1;
   uVar13 = ( uint ) * pbVar1 << 0x18;
   LAB_001003be:uVar13 = (uint)puVar6[-1] << 0x10 | uVar13;
   puVar8 = puVar6 + -1;
   LAB_001003cb:puVar6 = puVar8 + -1;
   uVar13 = (uint)puVar8[-1] << 8 | uVar13;
   LAB_001003d8:uVar13 = ( puVar6[-1] | uVar13 ) ^ auVar18._0_4_;
   auVar18[4] = (char)uVar11;
   for (int i = 0; i < 3; i++) {
      auVar18[( i + 5 )] = (char)( uVar11 >> ( 8*i + 8 ) );
   }

   auVar18[0] = (char)uVar13;
   for (int i = 0; i < 3; i++) {
      auVar18[( i + 1 )] = (char)( uVar13 >> ( 8*i + 8 ) );
   }

   switchD_00100185_caseD_0:local_48 = auVar18;
   DES_encrypt1((uint*)&local_48, schedule, 1);
   *(DES_cblock*)output = local_48;
   switchD_00100326_caseD_0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

