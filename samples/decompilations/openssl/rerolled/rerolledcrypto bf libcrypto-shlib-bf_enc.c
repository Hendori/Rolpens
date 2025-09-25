void BF_encrypt(uint *data, BF_KEY *key) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uVar6 = *data ^ key.P[0];
   uVar4 = ( key.S[uVar6 >> 0x18] + key.S[( ulong )(uVar6 >> 0x10 & 0xff) + 0x100] ^ key.S[( ulong )(uVar6 >> 8 & 0xff) + 0x200] ) + key.S[( ulong )(uVar6 & 0xff) + 0x300] ^ data[1] ^ key.P[1];
   for (int i = 0; i < 6; i++) {
      uVar6 = ( key.S[uVar4 >> 24] + key.S[( ulong )(uVar4 >> 16 & 255) + 256] ^ key.S[( ulong )(uVar4 >> 8 & 255) + 512] ) + key.S[( ulong )(uVar4 & 255) + 768] ^ key.P[( 2*i + 2 )] ^ uVar6;
      uVar4 = ( key.S[uVar6 >> 24] + key.S[( ulong )(uVar6 >> 16 & 255) + 256] ^ key.S[( ulong )(uVar6 >> 8 & 255) + 512] ) + key.S[( ulong )(uVar6 & 255) + 768] ^ key.P[( 2*i + 3 )] ^ uVar4;
   }

   uVar7 = uVar6 ^ key.P[0xe] ^ ( key.S[uVar4 >> 0x18] + key.S[( ulong )(uVar4 >> 0x10 & 0xff) + 0x100] ^ key.S[( ulong )(uVar4 >> 8 & 0xff) + 0x200] ) + key.S[( ulong )(uVar4 & 0xff) + 0x300];
   uVar5 = ( key.S[uVar7 >> 0x18] + key.S[( ulong )(uVar7 >> 0x10 & 0xff) + 0x100] ^ key.S[( ulong )(uVar7 >> 8 & 0xff) + 0x200] ) + key.S[( ulong )(uVar7 & 0xff) + 0x300] ^ key.P[0xf] ^ uVar4;
   uVar4 = key.P[0x10];
   uVar6 = key.S[uVar5 >> 0x18];
   uVar1 = key.S[( ulong )(uVar5 >> 0x10 & 0xff) + 0x100];
   uVar2 = key.S[( ulong )(uVar5 >> 8 & 0xff) + 0x200];
   uVar3 = key.S[( ulong )(uVar5 & 0xff) + 0x300];
   *data = key.P[0x11] ^ uVar5;
   data[1] = ( uVar6 + uVar1 ^ uVar2 ) + uVar3 ^ uVar4 ^ uVar7;
   return;
}
void BF_decrypt(uint *data, BF_KEY *key) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uVar6 = *data ^ key.P[0x11];
   uVar4 = ( key.S[uVar6 >> 0x18] + key.S[( ulong )(uVar6 >> 0x10 & 0xff) + 0x100] ^ key.S[( ulong )(uVar6 >> 8 & 0xff) + 0x200] ) + key.S[( ulong )(uVar6 & 0xff) + 0x300] ^ data[1] ^ key.P[0x10];
   for (int i = 0; i < 6; i++) {
      uVar6 = ( key.S[uVar4 >> 24] + key.S[( ulong )(uVar4 >> 16 & 255) + 256] ^ key.S[( ulong )(uVar4 >> 8 & 255) + 512] ) + key.S[( ulong )(uVar4 & 255) + 768] ^ key.P[( -2*i + 15 )] ^ uVar6;
      uVar4 = ( key.S[uVar6 >> 24] + key.S[( ulong )(uVar6 >> 16 & 255) + 256] ^ key.S[( ulong )(uVar6 >> 8 & 255) + 512] ) + key.S[( ulong )(uVar6 & 255) + 768] ^ key.P[( -2*i + 14 )] ^ uVar4;
   }

   uVar7 = uVar6 ^ key.P[3] ^ ( key.S[uVar4 >> 0x18] + key.S[( ulong )(uVar4 >> 0x10 & 0xff) + 0x100] ^ key.S[( ulong )(uVar4 >> 8 & 0xff) + 0x200] ) + key.S[( ulong )(uVar4 & 0xff) + 0x300];
   uVar5 = ( key.S[uVar7 >> 0x18] + key.S[( ulong )(uVar7 >> 0x10 & 0xff) + 0x100] ^ key.S[( ulong )(uVar7 >> 8 & 0xff) + 0x200] ) + key.S[( ulong )(uVar7 & 0xff) + 0x300] ^ key.P[2] ^ uVar4;
   uVar4 = key.P[1];
   uVar6 = key.S[uVar5 >> 0x18];
   uVar1 = key.S[( ulong )(uVar5 >> 0x10 & 0xff) + 0x100];
   uVar2 = key.S[( ulong )(uVar5 >> 8 & 0xff) + 0x200];
   uVar3 = key.S[( ulong )(uVar5 & 0xff) + 0x300];
   *data = key.P[0] ^ uVar5;
   data[1] = ( uVar6 + uVar1 ^ uVar2 ) + uVar3 ^ uVar4 ^ uVar7;
   return;
}
void BF_cbc_encrypt(uchar *in, uchar *out, long length, BF_KEY *schedule, uchar *ivec, int enc) {
   byte *pbVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   uchar *puVar5;
   uint uVar6;
   uchar *puVar7;
   uint uVar8;
   uint uVar9;
   ulong *puVar10;
   uint uVar11;
   uint *puVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   ulong *local_88;
   ulong *local_68;
   uint local_48;
   uint local_44;
   long local_40;
   uVar4 = length - 8;
   uVar11 = *(uint*)ivec;
   uVar9 = *(uint*)( ivec + 4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
   uVar9 = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18;
   if (enc == 0) {
      local_88 = (ulong*)out;
      if (7 < length) {
         lVar2 = ( uVar4 >> 3 ) * 8 + 8;
         local_88 = (ulong*)( out + lVar2 );
         puVar12 = (uint*)in;
         uVar8 = uVar11;
         uVar6 = uVar9;
         do {
            uVar11 = *puVar12;
            uVar9 = puVar12[1];
            puVar10 = (ulong*)( (long)out + 8 );
            puVar12 = puVar12 + 2;
            uVar11 = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
            uVar9 = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18;
            local_48 = uVar11;
            local_44 = uVar9;
            BF_decrypt(&local_48, schedule);
            uVar6 = local_44 ^ uVar6;
            uVar8 = local_48 ^ uVar8;
            *(ulong*)out = ( ( ( ( ( ( ( ulong )(uVar6 & 0xff) << 8 | ( ulong )(uVar6 >> 8 & 0xff) ) << 8 | ( ulong )(uVar6 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar6 >> 0x18) ) << 8 | ( ulong )(uVar8 & 0xff) ) << 8 | ( ulong )(uVar8 >> 8 & 0xff) ) << 8 | ( ulong )(uVar8 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar8 >> 0x18);
            out = (uchar*)puVar10;
            uVar8 = uVar11;
            uVar6 = uVar9;
         }
 while ( puVar10 != local_88 );
         lVar13 = ( uVar4 >> 3 ) * -8;
         lVar3 = length + -0x10;
         in = in + lVar2;
         length = lVar13 + uVar4;
         uVar4 = lVar3 + lVar13;
      }

      uVar8 = uVar11;
      uVar6 = uVar9;
      if (uVar4 == 0xfffffffffffffff8) {
         LAB_00100b18:uVar11 = uVar8 >> 0x18;
         uVar14 = uVar8 >> 0x10;
         uVar15 = uVar6 >> 0x10;
         uVar4 = ( ulong )(byte)(uVar8 >> 8);
         uVar9 = uVar6 >> 0x18;
         uVar16 = uVar6 >> 8 & 0xff;
         goto LAB_00100b3c;
      }

      uVar8 = *(uint*)in;
      uVar6 = *(uint*)( (long)in + 4 );
      uVar6 = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
      uVar8 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
      local_48 = uVar8;
      local_44 = uVar6;
      BF_decrypt(&local_48, schedule);
      uVar11 = uVar11 ^ local_48;
      uVar9 = uVar9 ^ local_44;
      puVar5 = (uchar*)( (long)local_88 + uVar4 + 8 );
      switch (length) {
         default:
switchD_00100ac9_caseD_0:
      goto LAB_00100b18;
         case 1:
      goto switchD_00100ac9_caseD_1;
         case 2:
      puVar7 = puVar5;
      goto LAB_00100af9;
         case 3:
      goto switchD_00100ac9_caseD_3;
         case 4:
      break;
         case 7:
      puVar5[-1] = (uchar)(uVar9 >> 8);
      puVar5 = puVar5 + -1;
         case 6:
      puVar5 = puVar5 + -1;
      *puVar5 = (uchar)(uVar9 >> 0x10);
         case 5:
      puVar5[-1] = (uchar)(uVar9 >> 0x18);
      puVar5 = puVar5 + -1;
      }

      puVar5[-1] = (uchar)uVar11;
      puVar5 = puVar5 + -1;
      switchD_00100ac9_caseD_3:puVar5[-1] = ( uchar )(uVar11 >> 8);
      puVar7 = puVar5 + -1;
      LAB_00100af9:puVar5 = puVar7 + -1;
      puVar7[-1] = ( uchar )(uVar11 >> 0x10);
      switchD_00100ac9_caseD_1:puVar5[-1] = ( uchar )(uVar11 >> 0x18);
      goto switchD_00100ac9_caseD_0;
   }

   local_68 = (ulong*)out;
   if (-1 < (long)uVar4) {
      lVar2 = ( uVar4 >> 3 ) * 8 + 8;
      local_68 = (ulong*)( out + lVar2 );
      puVar12 = (uint*)in;
      local_44 = uVar9;
      local_48 = uVar11;
      do {
         uVar11 = *puVar12;
         uVar9 = puVar12[1];
         puVar10 = (ulong*)( (long)out + 8 );
         puVar12 = puVar12 + 2;
         local_48 = local_48 ^ ( uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18 );
         local_44 = ( uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18 ) ^ local_44;
         BF_encrypt(&local_48, schedule);
         *(ulong*)out = ( ( ( ( ( ( ( ulong )(local_44 & 0xff) << 8 | ( ulong )(local_44 >> 8 & 0xff) ) << 8 | ( ulong )(local_44 >> 0x10 & 0xff) ) << 8 | ( ulong )(local_44 >> 0x18) ) << 8 | ( ulong )(local_48 & 0xff) ) << 8 | ( ulong )(local_48 >> 8 & 0xff) ) << 8 | ( ulong )(local_48 >> 0x10 & 0xff) ) << 8 | ( ulong )(local_48 >> 0x18);
         out = (uchar*)puVar10;
      }
 while ( puVar10 != local_68 );
      lVar13 = ( uVar4 >> 3 ) * -8;
      lVar3 = length + -0x10;
      in = in + lVar2;
      length = lVar13 + uVar4;
      uVar4 = lVar3 + lVar13;
      uVar11 = local_48;
      uVar9 = local_44;
   }

   uVar8 = uVar11;
   uVar6 = uVar9;
   if (uVar4 == 0xfffffffffffffff8) goto LAB_00100b18;
   puVar5 = in + uVar4 + 8;
   switch (length) {
      default:
    goto switchD_00100907_caseD_0;
      case 1:
    uVar8 = 0;
    goto LAB_00100c08;
      case 2:
    uVar8 = 0;
    puVar7 = puVar5;
    goto LAB_00100bfb;
      case 3:
    uVar8 = 0;
    goto LAB_00100bee;
      case 4:
    goto LAB_00100be6;
      case 5:
    uVar8 = 0;
    goto LAB_00100bd7;
      case 6:
    uVar8 = 0;
    break;
      case 7:
    pbVar1 = puVar5 + -1;
    puVar5 = puVar5 + -1;
    uVar8 = (uint)*pbVar1 << 8;
   }

   pbVar1 = puVar5 + -1;
   puVar5 = puVar5 + -1;
   uVar8 = ( uint ) * pbVar1 << 0x10 | uVar8;
   LAB_00100bd7:uVar9 = uVar9 ^ ( (uint)puVar5[-1] << 0x18 | uVar8 );
   puVar5 = puVar5 + -1;
   LAB_00100be6:uVar8 = (uint)puVar5[-1];
   puVar5 = puVar5 + -1;
   LAB_00100bee:uVar8 = (uint)puVar5[-1] << 8 | uVar8;
   puVar7 = puVar5 + -1;
   LAB_00100bfb:puVar5 = puVar7 + -1;
   uVar8 = (uint)puVar7[-1] << 0x10 | uVar8;
   LAB_00100c08:uVar11 = uVar11 ^ ( (uint)puVar5[-1] << 0x18 | uVar8 );
   switchD_00100907_caseD_0:local_48 = uVar11;
   local_44 = uVar9;
   BF_encrypt(&local_48, schedule);
   uVar16 = local_44 >> 8;
   uVar4 = ( ulong )(local_48 >> 8);
   uVar15 = local_44 >> 0x10;
   uVar9 = local_44 >> 0x18;
   uVar14 = local_48 >> 0x10;
   uVar11 = local_48 >> 0x18;
   *local_68 = ( ( ( ( ( ( ( ulong )(local_44 & 0xff) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | (ulong)uVar9 ) << 8 | ( ulong )(local_48 & 0xff) ) << 8 | ( ulong )(local_48 >> 8) & 0xff ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | (ulong)uVar11;
   uVar8 = local_48;
   uVar6 = local_44;
   LAB_00100b3c:*(ulong*)ivec = ( ( ( ( ( ( ( ulong )(uVar6 & 0xff) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | (ulong)uVar9 ) << 8 | ( ulong )(uVar8 & 0xff) ) << 8 | uVar4 & 0xff ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | (ulong)uVar11;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

