/* smolv_RemapOp(SpvOp) */int smolv_RemapOp(int param_1) {
   int iVar1;
   switch (param_1) {
      case 0:
    return 0x47;
      case 1:
    return 0x3d;
      case 2:
    return 0x3e;
      case 3:
    return 0x41;
      case 4:
    return 0x4f;
      case 5:
      case 6:
      case 0xc:
      case 0xd:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3c:
      case 0x3f:
      case 0x40:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x80:
      case 0x82:
      case 0x83:
      case 0x84:
    return param_1;
      case 7:
    return 0x48;
      case 8:
    return 0xf8;
      case 9:
    return 0x3b;
      case 10:
    return 0x85;
      case 0xb:
    return 0x81;
      case 0xe:
    return 0x20;
      case 0xf:
    return 0x7f;
      case 0x20:
    return 0xe;
      case 0x3b:
    return 9;
      case 0x3d:
    return 1;
      case 0x3e:
    return 2;
      case 0x41:
    return 3;
      case 0x47:
    return 0;
      case 0x48:
    return 7;
      case 0x4f:
    return 4;
      case 0x7f:
    return 0xf;
      case 0x81:
    return 0xb;
      case 0x85:
    return 10;
   }

   iVar1 = 8;
   if (param_1 != 0xf8) {
      iVar1 = param_1;
   }

   return iVar1;
}
/* CompareOpCounters(std::pair<SpvOp, unsigned long>, std::pair<SpvOp, unsigned long>) */bool CompareOpCounters(undefined8 param_1, ulong param_2, undefined8 param_3, ulong param_4) {
   return param_4 < param_2;
}
/* smolv_CheckSmolHeader(unsigned char const*, unsigned long) */bool smolv_CheckSmolHeader(uchar *param_1, ulong param_2) {
   bool bVar1;
   bVar1 = param_2 < 0x14 || param_1 == (uchar*)0x0;
   if (bVar1) {
      bVar1 = false;
   }
 else if (( ( *(int*)param_1 == 0x534d4f4c ) && ( ( *(uint*)( param_1 + 4 ) & 0xffffff ) - 0x10000 < 0x601 ) ) && ( 0x17 < param_2 )) {
      return *(uint*)( param_1 + 4 ) < 0x2000000;
   }

   return bVar1;
}
/* smolv_ReadLengthOp(unsigned char const*&, unsigned char const*, unsigned int&, SpvOp&) */undefined8 smolv_ReadLengthOp(uchar **param_1, uchar *param_2, uint *param_3, SpvOp *param_4) {
   byte bVar1;
   byte bVar2;
   int iVar3;
   byte *pbVar4;
   byte bVar5;
   uint uVar6;
   uint uVar7;
   pbVar4 = *param_1;
   bVar5 = 0;
   uVar7 = 0;
   do {
      if (param_2 <= pbVar4) break;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *param_1 = pbVar4;
      bVar2 = bVar5 & 0x1f;
      bVar5 = bVar5 + 7;
      uVar7 = uVar7 | ( bVar1 & 0x7f ) << bVar2;
   }
 while ( (char)bVar1 < '\0' );
   uVar6 = ( uVar7 >> 0x14 ) << 4 | uVar7 >> 4 & 0xf;
   iVar3 = smolv_RemapOp(uVar7 >> 4 & 0xfff0 | uVar7 & 0xf);
   *(int*)param_4 = iVar3;
   if (( iVar3 == 0x4f ) || ( iVar3 == 0xd )) {
      uVar6 = uVar6 + 5;
   }
 else {
      if (iVar3 == 0x47) {
         *param_3 = uVar6 + 3;
         return 1;
      }

      if (( iVar3 == 0x3d ) || ( iVar3 == 0x41 )) {
         *param_3 = uVar6 + 4;
         return 1;
      }

      uVar6 = uVar6 + 1;
   }

   *param_3 = uVar6;
   return 1;
}
/* smolv::GetDecodedBufferSize(void const*, unsigned long) */undefined4 smolv::GetDecodedBufferSize(void *param_1, ulong param_2) {
   if (( param_2 < 0x14 ) || ( param_1 == (void*)0x0 )) {
      return 0;
   }

   /* WARNING: Load size is inaccurate */
   if (( *param_1 == 0x534d4f4c ) && ( ( ( ( *(uint*)( (long)param_1 + 4 ) & 0xffffff ) - 0x10000 < 0x601 && ( 0x17 < param_2 ) ) && ( *(uint*)( (long)param_1 + 4 ) < 0x2000000 ) ) )) {
      return *(undefined4*)( (long)param_1 + 0x14 );
   }

   return 0;
}
/* smolv::Decode(void const*, unsigned long, void*, unsigned long, unsigned int) */undefined8 smolv::Decode(void *param_1, ulong param_2, void *param_3, ulong param_4, uint param_5) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   char cVar4;
   byte bVar5;
   uint uVar6;
   uint *puVar7;
   undefined8 uVar8;
   ulong uVar9;
   uint *puVar10;
   uint *puVar11;
   byte bVar12;
   byte bVar13;
   uint uVar14;
   byte bVar15;
   uint *puVar16;
   uint uVar17;
   uint *puVar18;
   uint uVar19;
   uint uVar20;
   ulong uVar21;
   ulong uVar22;
   uint uVar23;
   long lVar24;
   uint uVar25;
   long in_FS_OFFSET;
   uint local_88;
   uint local_84;
   byte local_71;
   uint local_50;
   uint local_4c;
   uint *local_48;
   long local_40;
   local_71 = (byte)param_5;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = smolv_CheckSmolHeader((uchar*)param_1, param_2);
   if (( cVar4 == '\0' ) || ( uVar2 = *(uint*)( (long)param_1 + 0x14 ) ),param_4 <= (ulong)uVar2 - 1 || param_3 == (void*)0x0) {
      LAB_0010027a:uVar8 = 0;
      goto LAB_0010027c;
   }

   puVar1 = (uint*)( (long)param_1 + param_2 );
   local_48 = (uint*)( (long)param_1 + 8 );
   *(undefined4*)param_3 = 0x7230203;
   if (puVar1 < local_48) {
      uVar6 = 0;
      *(undefined4*)( (long)param_3 + 4 ) = 0;
      uVar14 = 0;
      LAB_00100964:*(uint*)( (long)param_3 + 8 ) = uVar6;
      LAB_00100967:*(uint*)( (long)param_3 + 0xc ) = uVar6;
   }
 else {
      uVar14 = *(uint*)( (long)param_1 + 4 );
      local_48 = (uint*)( (long)param_1 + 0xc );
      uVar6 = uVar14 & 0xffffff;
      *(uint*)( (long)param_3 + 4 ) = uVar6;
      uVar14 = uVar14 >> 0x18;
      if (puVar1 < local_48) goto LAB_00100964;
      uVar6 = *(uint*)( (long)param_1 + 8 );
      local_48 = (uint*)( (long)param_1 + 0x10 );
      *(uint*)( (long)param_3 + 8 ) = uVar6;
      if (puVar1 < local_48) goto LAB_00100967;
      uVar6 = *(uint*)( (long)param_1 + 0xc );
      local_48 = (uint*)( (long)param_1 + 0x14 );
      *(uint*)( (long)param_3 + 0xc ) = uVar6;
      if (local_48 <= puVar1) {
         uVar6 = *(uint*)( (long)param_1 + 0x10 );
         local_48 = (uint*)( (long)param_1 + 0x18 );
      }

   }

   *(uint*)( (long)param_3 + 0x10 ) = uVar6;
   puVar7 = (uint*)( (long)param_3 + 0x14 );
   if (uVar14 == 0) {
      local_88 = 0x14b;
      local_71 = local_71 & 1;
   }
 else {
      local_71 = 0;
      local_88 = 0;
      if (uVar14 == 1) {
         local_88 = 0x16f;
      }

   }

   if (local_48 < puVar1) {
      local_84 = 0;
      uVar14 = 0;
      do {
         bVar5 = smolv_ReadLengthOp((uchar**)&local_48, (uchar*)puVar1, &local_50, (SpvOp*)&local_4c);
         uVar6 = local_4c;
         if (bVar5 == 0) goto LAB_0010027a;
         if (local_4c == 0xd) {
            local_4c = 0x4f;
            *puVar7 = local_50 << 0x10 | 0x4f;
            if (0x4f < local_88) {
               uVar17 = 8;
               goto LAB_001003c9;
            }

            LAB_00100816:puVar7 = puVar7 + 1;
            uVar21 = 1;
            uVar22 = uVar21;
            bVar13 = bVar5;
            if (local_71 != 0) goto LAB_00100753;
            LAB_0010082a:if (( local_50 < 10 ) && ( puVar16 = uVar6 == 0xd )) goto LAB_00100a68;
            LAB_0010083c:puVar16 = puVar7 + ( local_50 - uVar22 );
            puVar11 = local_48;
            puVar18 = puVar7;
            puVar10 = local_48;
            if (uVar22 < local_50) {
               do {
                  puVar10 = puVar11 + 1;
                  if (puVar1 < puVar10) goto LAB_0010027a;
                  puVar7 = puVar18 + 1;
                  *puVar18 = *puVar11;
                  puVar11 = puVar10;
                  puVar18 = puVar7;
               }
 while ( puVar7 != puVar16 );
            }

         }
 else {
            uVar17 = local_4c - 0x47;
            puVar16 = puVar7 + 1;
            *puVar7 = local_50 << 0x10 | local_4c;
            bVar15 = (int)local_88 <= (int)local_4c | ( byte )(local_4c >> 0x1f);
            if (bVar15 == 0) {
               LAB_001003c9:puVar16 = puVar7 + 1;
               lVar24 = (long)(int)local_4c;
               uVar21 = 1;
               if (kSpirvOpData[lVar24 * 4 + 1] != '\0') {
                  bVar13 = 0;
                  uVar25 = 0;
                  puVar16 = local_48;
                  bVar15 = 0;
                  do {
                     if (puVar1 <= puVar16) {
                        if (bVar15 == 0) goto LAB_001008d7;
                        break;
                     }

                     uVar20 = *puVar16;
                     puVar16 = (uint*)( (long)puVar16 + 1 );
                     bVar15 = bVar13 & 0x1f;
                     bVar13 = bVar13 + 7;
                     uVar25 = uVar25 | ( (byte)uVar20 & 0x7f ) << bVar15;
                     bVar15 = bVar5;
                  }
 while ( (char)(byte)uVar20 < '\0' );
                  local_48 = puVar16;
                  LAB_001008d7:puVar7[1] = uVar25;
                  puVar16 = puVar7 + 2;
                  uVar21 = 2;
               }

               puVar7 = puVar16;
               if (kSpirvOpData[lVar24 * 4] != '\0') {
                  bVar13 = 0;
                  uVar25 = 0;
                  puVar7 = local_48;
                  bVar15 = 0;
                  do {
                     if (puVar1 <= puVar7) {
                        if (bVar15 == 0) goto LAB_00100933;
                        break;
                     }

                     uVar20 = *puVar7;
                     puVar7 = (uint*)( (long)puVar7 + 1 );
                     bVar15 = bVar13 & 0x1f;
                     bVar13 = bVar13 + 7;
                     uVar25 = uVar25 | ( (byte)uVar20 & 0x7f ) << bVar15;
                     bVar15 = bVar5;
                  }
 while ( (char)(byte)uVar20 < '\0' );
                  local_48 = puVar7;
                  LAB_00100933:uVar20 = uVar25 >> 1;
                  if (( uVar25 & 1 ) != 0) {
                     uVar20 = ~(uVar25 >> 1);
                  }

                  puVar7 = puVar16 + 1;
                  uVar21 = uVar21 + 1;
                  uVar14 = uVar14 + uVar20;
                  *puVar16 = uVar14;
               }

               if (uVar17 < 2) {
                  uVar21 = uVar21 + 1;
                  bVar15 = 0;
                  puVar16 = puVar7;
                  goto LAB_0010040c;
               }

               uVar9 = (ulong)(byte)kSpirvOpData[lVar24 * 4 + 2];
               if (local_71 != 0) goto LAB_00100679;
               LAB_001006ab:uVar22 = uVar21;
               bVar15 = bVar5;
               LAB_001006ae:uVar21 = uVar22;
               if ((int)uVar9 == 0) {
                  LAB_00100892:bVar13 = 0;
                  LAB_00100753:if (( local_50 < 10 ) && ( puVar16 = uVar6 == 0xd )) {
                     LAB_00100a68:puVar10 = (uint*)( (long)local_48 + 1 );
                     puVar7 = puVar16;
                     if (5 < local_50) {
                        bVar5 = ( byte ) * local_48;
                        *puVar16 = ( uint )(bVar5 >> 6);
                        if (local_50 == 6) {
                           puVar7 = puVar16 + 1;
                        }
 else {
                           puVar16[1] = bVar5 >> 4 & 3;
                           if (local_50 == 7) {
                              puVar7 = puVar16 + 2;
                           }
 else {
                              puVar16[2] = bVar5 >> 2 & 3;
                              if (local_50 == 9) {
                                 puVar7 = puVar16 + 4;
                                 puVar16[3] = bVar5 & 3;
                              }
 else {
                                 puVar7 = puVar16 + 3;
                              }

                           }

                        }

                     }

                     goto LAB_001005d7;
                  }

                  lVar24 = (long)(int)local_4c;
                  uVar22 = uVar21;
                  if (bVar13 != 0) goto LAB_0010083c;
               }
 else {
                  uVar21 = (ulong)local_50;
                  if (uVar22 < uVar21) {
                     puVar16 = puVar7 + uVar9;
                     bVar13 = 0;
                     puVar10 = local_48;
                     puVar11 = puVar7;
                     do {
                        bVar12 = 0;
                        uVar17 = 0;
                        do {
                           if (puVar1 <= puVar10) break;
                           uVar25 = *puVar10;
                           puVar10 = (uint*)( (long)puVar10 + 1 );
                           bVar13 = bVar12 & 0x1f;
                           bVar12 = bVar12 + 7;
                           uVar17 = uVar17 | ( (byte)uVar25 & 0x7f ) << bVar13;
                           bVar13 = bVar5;
                        }
 while ( (char)(byte)uVar25 < '\0' );
                        uVar25 = uVar17;
                        if (bVar15 != 0) {
                           uVar25 = uVar17 >> 1;
                           if (( uVar17 & 1 ) != 0) {
                              uVar25 = ~(uVar17 >> 1);
                           }

                        }

                        puVar7 = puVar11 + 1;
                        uVar22 = uVar22 + 1;
                        *puVar11 = uVar14 - uVar25;
                        if (puVar16 == puVar7) {
                           uVar21 = uVar22;
                           if (bVar13 != 0) {
                              local_48 = puVar10;
                           }

                           goto LAB_00100892;
                        }

                        puVar11 = puVar7;
                     }
 while ( uVar22 != uVar21 );
                     if (bVar13 != 0) {
                        local_48 = puVar10;
                     }

                     bVar13 = 0;
                     goto LAB_00100753;
                  }

                  if (uVar6 == 0xd) {
                     puVar10 = (uint*)( (long)local_48 + 1 );
                     goto LAB_001005d7;
                  }

               }

               if (kSpirvOpData[lVar24 * 4 + 3] == '\0') goto LAB_0010083c;
               puVar10 = local_48;
               if (uVar22 < local_50) {
                  bVar15 = 0;
                  uVar21 = uVar22;
                  do {
                     bVar13 = 0;
                     uVar6 = 0;
                     do {
                        if (puVar1 <= puVar10) break;
                        uVar17 = *puVar10;
                        puVar10 = (uint*)( (long)puVar10 + 1 );
                        bVar15 = bVar13 & 0x1f;
                        bVar13 = bVar13 + 7;
                        uVar6 = uVar6 | ( (byte)uVar17 & 0x7f ) << bVar15;
                        bVar15 = bVar5;
                     }
 while ( (char)(byte)uVar17 < '\0' );
                     puVar7[uVar21 - uVar22] = uVar6;
                     uVar21 = uVar21 + 1;
                  }
 while ( uVar21 != local_50 );
                  puVar7 = puVar7 + ( uVar21 - uVar22 );
                  if (bVar15 == 0) {
                     puVar10 = local_48;
                  }

               }

            }
 else {
               uVar21 = 2;
               if (1 < uVar17) goto LAB_00100816;
               LAB_0010040c:bVar12 = 0;
               uVar22 = 0;
               puVar7 = local_48;
               bVar13 = 0;
               do {
                  if (puVar1 <= puVar7) {
                     if (bVar13 == 0) goto LAB_00100450;
                     break;
                  }

                  uVar17 = *puVar7;
                  puVar7 = (uint*)( (long)puVar7 + 1 );
                  bVar13 = bVar12 & 0x1f;
                  bVar12 = bVar12 + 7;
                  uVar22 = ( ulong )((uint)uVar22 | ( (byte)uVar17 & 0x7f ) << bVar13);
                  bVar13 = bVar5;
               }
 while ( (char)(byte)uVar17 < '\0' );
               local_48 = puVar7;
               LAB_00100450:puVar7 = puVar16 + 1;
               if (local_71 != 0) {
                  local_84 = local_84 + (int)uVar22;
                  *puVar16 = local_84;
                  bVar13 = bVar15;
                  if (( local_4c == 0x48 ) || ( bVar13 = bVar15 != 0 )) goto LAB_00100753;
                  lVar24 = (long)(int)local_4c;
                  uVar9 = (ulong)(byte)kSpirvOpData[lVar24 * 4 + 2];
                  LAB_00100679:uVar22 = uVar21;
                  if (local_4c < 0xfb) {
                     if (0xdf < local_4c) {
                        bVar15 = ( 0x6c00003UL >> ( ( ulong )(local_4c - 0xe0) & 0x3f ) & 1 ) != 0;
                        if ((bool)bVar15) goto LAB_001006ab;
                        goto LAB_001006ae;
                     }

                  }
 else if (local_4c == 0x149) goto LAB_001006ab;
                  bVar15 = 0;
                  goto LAB_001006ae;
               }

               uVar17 = ( uint )(uVar22 >> 1);
               if (( uVar22 & 1 ) != 0) {
                  uVar17 = ~uVar17;
               }

               local_84 = local_84 + uVar17;
               *puVar16 = local_84;
               if (local_4c != 0x48) {
                  uVar22 = uVar21;
                  if (bVar15 != 0) goto LAB_0010082a;
                  lVar24 = (long)(int)local_4c;
                  uVar9 = (ulong)(byte)kSpirvOpData[lVar24 * 4 + 2];
                  goto LAB_001006ab;
               }

               if (puVar1 <= local_48) goto LAB_0010027a;
               puVar10 = (uint*)( (long)local_48 + 1 );
               uVar6 = *local_48;
               if ((byte)uVar6 != 0) {
                  bVar15 = 0;
                  uVar20 = 0;
                  uVar25 = 0;
                  uVar17 = 0;
                  puVar16 = puVar10;
                  do {
                     bVar13 = 0;
                     uVar19 = 0;
                     do {
                        if (puVar1 <= puVar16) break;
                        uVar23 = *puVar16;
                        puVar16 = (uint*)( (long)puVar16 + 1 );
                        bVar15 = bVar13 & 0x1f;
                        bVar13 = bVar13 + 7;
                        uVar19 = uVar19 | ( (byte)uVar23 & 0x7f ) << bVar15;
                        bVar15 = bVar5;
                     }
 while ( (char)(byte)uVar23 < '\0' );
                     uVar25 = uVar19 + uVar25;
                     bVar13 = 0;
                     uVar19 = 0;
                     do {
                        if (puVar1 <= puVar16) break;
                        uVar23 = *puVar16;
                        puVar16 = (uint*)( (long)puVar16 + 1 );
                        bVar15 = bVar13 & 0x1f;
                        bVar13 = bVar13 + 7;
                        uVar19 = uVar19 | ( (byte)uVar23 & 0x7f ) << bVar15;
                        bVar15 = bVar5;
                     }
 while ( (char)(byte)uVar23 < '\0' );
                     if (uVar19 < 6) {
                        if (uVar19 == 1) {
                           LAB_00100527:bVar13 = 0;
                           uVar23 = 0;
                           do {
                              if (puVar1 <= puVar16) break;
                              uVar3 = *puVar16;
                              puVar16 = (uint*)( (long)puVar16 + 1 );
                              bVar15 = bVar13 & 0x1f;
                              bVar13 = bVar13 + 7;
                              uVar23 = uVar23 | ( (byte)uVar3 & 0x7f ) << bVar15;
                              bVar15 = bVar5;
                           }
 while ( (char)(byte)uVar3 < '\0' );
                           uVar23 = uVar23 + 4;
                           if (uVar20 == 0) {
                              *puVar7 = uVar25;
                              puVar7[1] = uVar19;
                           }
 else {
                              LAB_00100a31:puVar7[2] = uVar25;
                              puVar11 = puVar7 + 2;
                              puVar7[3] = uVar19;
                              *puVar7 = uVar23 << 0x10 | 0x48;
                              puVar7[1] = local_84;
                              puVar7 = puVar11;
                              if (uVar19 == 0x23) {
                                 local_48 = puVar10;
                                 if (uVar23 == 5) goto LAB_001009ea;
                                 goto LAB_0010027a;
                              }

                           }

                           LAB_0010056b:puVar11 = puVar7 + 2;
                           if (4 < uVar23) {
                              puVar7 = puVar11 + ( uVar23 - 4 );
                              puVar18 = puVar11;
                              do {
                                 bVar13 = 0;
                                 uVar19 = 0;
                                 do {
                                    if (puVar1 <= puVar16) break;
                                    uVar23 = *puVar16;
                                    puVar16 = (uint*)( (long)puVar16 + 1 );
                                    bVar15 = bVar13 & 0x1f;
                                    bVar13 = bVar13 + 7;
                                    uVar19 = uVar19 | ( (byte)uVar23 & 0x7f ) << bVar15;
                                    bVar15 = bVar5;
                                 }
 while ( (char)(byte)uVar23 < '\0' );
                                 *puVar18 = uVar19;
                                 puVar18 = puVar18 + 1;
                                 puVar11 = puVar7;
                              }
 while ( puVar7 != puVar18 );
                           }

                        }
 else {
                           if (uVar20 != 0) {
                              uVar23 = 4;
                              goto LAB_00100a31;
                           }

                           *puVar7 = uVar25;
                           puVar11 = puVar7 + 2;
                           puVar7[1] = uVar19;
                        }

                     }
 else {
                        if (8 < uVar19 - 0x1d) goto LAB_00100527;
                        if (uVar20 != 0) {
                           uVar23 = 5;
                           goto LAB_00100a31;
                        }

                        *puVar7 = uVar25;
                        uVar23 = 5;
                        puVar7[1] = uVar19;
                        if (uVar19 != 0x23) goto LAB_0010056b;
                        LAB_001009ea:bVar13 = 0;
                        uVar19 = 0;
                        do {
                           if (puVar1 <= puVar16) break;
                           uVar23 = *puVar16;
                           puVar16 = (uint*)( (long)puVar16 + 1 );
                           bVar15 = bVar13 & 0x1f;
                           bVar13 = bVar13 + 7;
                           uVar19 = uVar19 | ( (byte)uVar23 & 0x7f ) << bVar15;
                           bVar15 = bVar5;
                        }
 while ( (char)(byte)uVar23 < '\0' );
                        uVar17 = uVar17 + uVar19;
                        puVar7[2] = uVar17;
                        puVar11 = puVar7 + 3;
                     }

                     uVar20 = uVar20 + 1;
                     puVar7 = puVar11;
                  }
 while ( (byte)uVar6 != uVar20 );
                  if (bVar15 != 0) {
                     puVar10 = puVar16;
                  }

               }

            }

         }

         LAB_001005d7:local_48 = puVar10;
      }
 while ( local_48 < puVar1 );
   }

   puVar1 = (uint*)( (long)param_3 + (ulong)uVar2 );
   uVar8 = CONCAT71(( int7 )((ulong)puVar1 >> 8), puVar7 == puVar1);
   LAB_0010027c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* smolv::StatsCreate() */void smolv::StatsCreate(void) {
   void *__s;
   __s = operator_new(0x2348);
   memset(__s, 0, 0x2348);
   return;
}
/* smolv::StatsDelete(smolv::Stats*) */void smolv::StatsDelete(Stats *param_1) {
   if (param_1 != (Stats*)0x0) {
      operator_delete(param_1, 0x2348);
      return;
   }

   return;
}
/* smolv::StatsCalculate(smolv::Stats*, void const*, unsigned long) */undefined8 smolv::StatsCalculate(Stats *param_1, void *param_2, ulong param_3) {
   uint *puVar1;
   Stats *pSVar2;
   uint uVar3;
   ushort uVar4;
   uint uVar5;
   uint *puVar6;
   /* WARNING: Load size is inaccurate */
   if (( ( ( ( param_1 != (Stats*)0x0 ) && ( ( param_3 & 3 ) == 0 ) ) && ( param_2 != (void*)0x0 ) ) && ( ( 4 < param_3 >> 2 && ( *param_2 == 0x7230203 ) ) ) ) && ( *(int*)( (long)param_2 + 4 ) - 0x10000U < 0x601 )) {
      *(long*)( param_1 + 0x2340 ) = *(long*)( param_1 + 0x2340 ) + 1;
      puVar1 = (uint*)( (long)param_2 + ( param_3 & 0xfffffffffffffffc ) );
      puVar6 = (uint*)( (long)param_2 + 0x14 );
      *(ulong*)( param_1 + 0x2330 ) = *(long*)( param_1 + 0x2330 ) + ( param_3 >> 2 );
      while (true) {
         if (puVar1 <= puVar6) {
            return 1;
         }

         uVar3 = *puVar6;
         uVar5 = uVar3 >> 0x10;
         if (( uVar5 == 0 ) || ( puVar6 = puVar1 < puVar6 )) break;
         uVar4 = (ushort)uVar3;
         if (uVar4 < 0x16f) {
            pSVar2 = param_1 + (ulong)uVar4 * 8;
            *(long*)pSVar2 = *(long*)pSVar2 + 1;
            *(ulong*)( pSVar2 + 0xb78 ) = *(long*)( pSVar2 + 0xb78 ) + (ulong)uVar5;
         }

         *(long*)( param_1 + 9000 ) = *(long*)( param_1 + 9000 ) + 1;
      }
;
   }

   return 0;
}
/* smolv::StatsCalculateSmol(smolv::Stats*, void const*, unsigned long) */ulong smolv::StatsCalculateSmol(Stats *param_1, void *param_2, ulong param_3) {
   byte bVar1;
   byte bVar2;
   char cVar3;
   ulong uVar4;
   byte *pbVar5;
   byte *pbVar6;
   byte bVar7;
   char cVar8;
   byte *pbVar9;
   byte *pbVar10;
   ulong uVar11;
   uint in_R9D;
   uint uVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long lVar17;
   long lVar18;
   long in_FS_OFFSET;
   uint local_8c;
   uint local_50;
   int local_4c;
   byte *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (Stats*)0x0 ) || ( uVar4 = smolv_CheckSmolHeader((uchar*)param_2, param_3) ),(char)uVar4 == '\0') {
      LAB_00100ccc:uVar4 = 0;
   }
 else {
      pbVar10 = (byte*)( (long)param_2 + param_3 );
      pbVar9 = (byte*)( (long)param_2 + 8 );
      if (pbVar10 < pbVar9) {
         pbVar9 = (byte*)( (long)param_2 + 4 );
      }
 else {
         in_R9D = *(uint*)( (long)param_2 + 4 );
      }

      local_8c = 0x14b;
      if (( in_R9D >> 0x18 != 0 ) && ( local_8c = in_R9D >> 0x18 == 1 )) {
         local_8c = 0x16f;
      }

      local_48 = pbVar9 + 0x10;
      *(ulong*)( param_1 + 0x2338 ) = *(long*)( param_1 + 0x2338 ) + param_3;
      if (local_48 < pbVar10) {
         do {
            pbVar9 = local_48;
            cVar3 = smolv_ReadLengthOp(&local_48, pbVar10, &local_50, (SpvOp*)&local_4c);
            iVar13 = local_4c;
            if (cVar3 == '\0') goto LAB_00100ccc;
            if (local_4c == 0xd) {
               local_4c = 0x4f;
               *(long*)( param_1 + ( (long)local_48 - (long)pbVar9 ) * 8 + 0x2268 ) = *(long*)( param_1 + ( (long)local_48 - (long)pbVar9 ) * 8 + 0x2268 ) + 1;
               if (0x4f < local_8c) {
                  uVar15 = 8;
                  goto LAB_00100dca;
               }

               uVar11 = 1;
               LAB_00100f34:pbVar6 = local_48;
               iVar13 = local_4c;
               if (local_50 < 10) {
                  pbVar6 = local_48 + 1;
               }
 else {
                  LAB_00100f7d:do {
                     pbVar6 = pbVar6 + 4;
                     if (pbVar10 < pbVar6) goto LAB_00100ccc;
                     uVar11 = uVar11 + 1;
                  }
 while ( uVar11 < local_50 );
               }

               LAB_00100f43:local_48 = pbVar6;
               if (iVar13 < 0x16f) {
                  lVar18 = (long)iVar13;
                  LAB_00101085:*(byte**)( param_1 + lVar18 * 8 + 0x16f0 ) = local_48 + ( *(long*)( param_1 + lVar18 * 8 + 0x16f0 ) - (long)pbVar9 );
               }

            }
 else {
               uVar15 = local_4c - 0x47;
               *(long*)( param_1 + ( (long)local_48 - (long)pbVar9 ) * 8 + 0x2268 ) = *(long*)( param_1 + ( (long)local_48 - (long)pbVar9 ) * 8 + 0x2268 ) + 1;
               bVar7 = (int)local_8c <= local_4c | ( byte )((uint)local_4c >> 0x1f);
               if (bVar7 != 0) {
                  if (uVar15 < 2) {
                     uVar11 = 2;
                     goto LAB_001010a1;
                  }

                  uVar11 = 1;
                  LAB_00100f9f:pbVar6 = local_48;
                  iVar13 = local_4c;
                  if (uVar11 < local_50) goto LAB_00100f7d;
                  goto LAB_00100f43;
               }

               LAB_00100dca:lVar18 = (long)local_4c;
               uVar11 = 1;
               if (kSpirvOpData[lVar18 * 4 + 1] != '\0') {
                  pbVar6 = local_48;
                  cVar8 = '\0';
                  do {
                     if (pbVar10 <= pbVar6) {
                        lVar17 = 0;
                        if (cVar8 == '\0') goto LAB_00101036;
                        break;
                     }

                     bVar7 = *pbVar6;
                     pbVar6 = pbVar6 + 1;
                     cVar8 = cVar3;
                  }
 while ( (char)bVar7 < '\0' );
                  lVar17 = (long)pbVar6 - (long)local_48;
                  local_48 = pbVar6;
                  LAB_00101036:*(long*)( param_1 + lVar17 * 8 + 0x2298 ) = *(long*)( param_1 + lVar17 * 8 + 0x2298 ) + 1;
                  uVar11 = 2;
               }

               if (kSpirvOpData[lVar18 * 4] != '\0') {
                  pbVar6 = local_48;
                  cVar8 = '\0';
                  do {
                     if (pbVar10 <= pbVar6) {
                        lVar17 = 0;
                        if (cVar8 == '\0') goto LAB_00100fe7;
                        break;
                     }

                     bVar7 = *pbVar6;
                     pbVar6 = pbVar6 + 1;
                     cVar8 = cVar3;
                  }
 while ( (char)bVar7 < '\0' );
                  lVar17 = (long)pbVar6 - (long)local_48;
                  local_48 = pbVar6;
                  LAB_00100fe7:*(long*)( param_1 + lVar17 * 8 + 0x22c8 ) = *(long*)( param_1 + lVar17 * 8 + 0x22c8 ) + 1;
                  if (uVar15 < 2) {
                     uVar11 = uVar11 + 2;
                     bVar7 = 0;
                     goto LAB_001010a1;
                  }

                  uVar11 = uVar11 + 1;
                  LAB_00100df8:if (kSpirvOpData[lVar18 * 4 + 2] == 0) {
                     if (iVar13 == 0xd) goto LAB_0010106c;
                     LAB_00100e88:uVar16 = (ulong)local_50;
                     if (kSpirvOpData[lVar18 * 4 + 3] == '\0') {
                        pbVar6 = local_48;
                        iVar13 = local_4c;
                        if (uVar11 < uVar16) goto LAB_00100f7d;
                     }
 else {
                        cVar8 = '\0';
                        pbVar6 = local_48;
                        pbVar5 = local_48;
                        if (uVar11 < uVar16) {
                           LAB_00100ec5:do {
                              if (pbVar6 < pbVar10) {
                                 bVar7 = *pbVar6;
                                 pbVar6 = pbVar6 + 1;
                                 cVar8 = cVar3;
                                 if ((char)bVar7 < '\0') goto LAB_00100ec5;
                              }

                              uVar11 = uVar11 + 1;
                              *(long*)( param_1 + ( (long)pbVar6 - (long)pbVar5 ) * 8 + 0x22f8 ) = *(long*)( param_1 + ( (long)pbVar6 - (long)pbVar5 ) * 8 + 0x22f8 ) + 1;
                              pbVar5 = pbVar6;
                           }
 while ( uVar11 != uVar16 );
                           if (cVar8 != '\0') {
                              local_48 = pbVar6;
                           }

                        }

                     }

                  }
 else {
                     uVar16 = (byte)kSpirvOpData[lVar18 * 4 + 2] + uVar11;
                     cVar8 = '\0';
                     pbVar6 = local_48;
                     do {
                        pbVar5 = pbVar6;
                        if (local_50 <= uVar11) {
                           if (cVar8 != '\0') {
                              local_48 = pbVar6;
                           }

                           goto LAB_00100e7f;
                        }

                        do {
                           if (pbVar10 <= pbVar5) break;
                           bVar7 = *pbVar5;
                           pbVar5 = pbVar5 + 1;
                           cVar8 = cVar3;
                        }
 while ( (char)bVar7 < '\0' );
                        uVar11 = uVar11 + 1;
                        *(long*)( param_1 + ( (long)pbVar5 - (long)pbVar6 ) * 8 + 0x22c8 ) = *(long*)( param_1 + ( (long)pbVar5 - (long)pbVar6 ) * 8 + 0x22c8 ) + 1;
                        pbVar6 = pbVar5;
                     }
 while ( uVar11 != uVar16 );
                     if (cVar8 != '\0') {
                        local_48 = pbVar5;
                     }

                     LAB_00100e7f:if (iVar13 != 0xd) goto LAB_00100e88;
                     LAB_0010106c:if (9 < local_50) goto LAB_00100e88;
                     local_48 = local_48 + 1;
                  }

                  goto LAB_00101085;
               }

               if (1 < uVar15) goto LAB_00100df8;
               uVar11 = uVar11 + 1;
               bVar7 = 0;
               LAB_001010a1:pbVar6 = local_48;
               cVar8 = '\0';
               do {
                  pbVar5 = pbVar6;
                  if (pbVar10 <= pbVar5) {
                     if (cVar8 != '\0') {
                        local_48 = pbVar5;
                     }

                     if (local_4c != 0x48) goto LAB_001010d8;
                     goto LAB_00100ccc;
                  }

                  pbVar6 = pbVar5 + 1;
                  cVar8 = cVar3;
               }
 while ( (char)*pbVar5 < '\0' );
               local_48 = pbVar6;
               if (local_4c != 0x48) {
                  LAB_001010d8:if (bVar7 != 0) {
                     if (iVar13 == 0xd) goto LAB_00100f34;
                     goto LAB_00100f9f;
                  }

                  lVar18 = (long)local_4c;
                  goto LAB_00100df8;
               }

               if (pbVar10 <= pbVar6) goto LAB_00100ccc;
               local_48 = pbVar5 + 2;
               if (*pbVar6 != 0) {
                  uVar15 = 0;
                  pbVar5 = local_48;
                  cVar8 = '\0';
                  LAB_00101155:do {
                     if (pbVar5 < pbVar10) {
                        bVar7 = *pbVar5;
                        pbVar5 = pbVar5 + 1;
                        cVar8 = cVar3;
                        if ((char)bVar7 < '\0') goto LAB_00101155;
                     }

                     bVar7 = 0;
                     uVar14 = 0;
                     do {
                        if (pbVar10 <= pbVar5) break;
                        bVar1 = *pbVar5;
                        pbVar5 = pbVar5 + 1;
                        bVar2 = bVar7 & 0x1f;
                        bVar7 = bVar7 + 7;
                        uVar14 = uVar14 | ( bVar1 & 0x7f ) << bVar2;
                        cVar8 = cVar3;
                     }
 while ( (char)bVar1 < '\0' );
                     if (uVar14 < 6) {
                        if (uVar14 == 1) {
                           LAB_00101196:bVar7 = 0;
                           uVar14 = 0;
                           do {
                              if (pbVar10 <= pbVar5) break;
                              bVar1 = *pbVar5;
                              pbVar5 = pbVar5 + 1;
                              bVar2 = bVar7 & 0x1f;
                              bVar7 = bVar7 + 7;
                              uVar14 = uVar14 | ( bVar1 & 0x7f ) << bVar2;
                              cVar8 = cVar3;
                           }
 while ( (char)bVar1 < '\0' );
                           uVar14 = uVar14 + 4;
                           if (4 < uVar14) goto LAB_001011f8;
                        }

                     }
 else {
                        if (8 < uVar14 - 0x1d) goto LAB_00101196;
                        uVar14 = 5;
                        LAB_001011f8:uVar12 = 4;
                        LAB_0010120d:do {
                           if (pbVar5 < pbVar10) {
                              bVar7 = *pbVar5;
                              pbVar5 = pbVar5 + 1;
                              cVar8 = cVar3;
                              if ((char)bVar7 < '\0') goto LAB_0010120d;
                           }

                           uVar12 = uVar12 + 1;
                        }
 while ( uVar12 != uVar14 );
                     }

                     uVar15 = uVar15 + 1;
                  }
 while ( *pbVar6 != uVar15 );
                  if (cVar8 != '\0') {
                     local_48 = pbVar5;
                  }

               }

               *(byte**)( param_1 + 0x1930 ) = local_48 + ( *(long*)( param_1 + 0x1930 ) - (long)pbVar9 );
            }

         }
 while ( local_48 < pbVar10 );
         uVar4 = uVar4 & 0xff;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* smolv_WriteVarint(std::vector<unsigned char, std::allocator<unsigned char> >&, unsigned int) */void smolv_WriteVarint(vector *param_1, uint param_2) {
   byte *pbVar1;
   long in_FS_OFFSET;
   byte local_21;
   long local_20;
   pbVar1 = *(byte**)( param_1 + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x7f < param_2) {
      do {
         while (true) {
            local_21 = (byte)param_2 | 0x80;
            if (*(byte**)( param_1 + 0x10 ) != pbVar1) break;
            param_2 = param_2 >> 7;
            std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_1, pbVar1, &local_21);
            pbVar1 = *(byte**)( param_1 + 8 );
            if (param_2 < 0x80) goto LAB_00101310;
         }
;
         *pbVar1 = local_21;
         param_2 = param_2 >> 7;
         pbVar1 = (byte*)( *(long*)( param_1 + 8 ) + 1 );
         *(byte**)( param_1 + 8 ) = pbVar1;
      }
 while ( 0x7f < param_2 );
   }

   LAB_00101310:local_21 = (byte)param_2;
   if (pbVar1 == *(byte**)( param_1 + 0x10 )) {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_1, pbVar1, &local_21);
   }
 else {
      *pbVar1 = local_21;
      *(long*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* smolv_Write4(std::vector<unsigned char, std::allocator<unsigned char> >&, unsigned int) */void smolv_Write4(vector *param_1, uint param_2) {
   undefined1 uVar1;
   undefined1 uVar2;
   undefined1 uVar3;
   undefined1 *puVar4;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = (undefined1)param_2;
   puVar4 = *(undefined1**)( param_1 + 8 );
   uVar3 = ( undefined1 )(param_2 >> 0x18);
   uVar1 = ( undefined1 )(param_2 >> 8);
   uVar2 = ( undefined1 )(param_2 >> 0x10);
   if (puVar4 == *(undefined1**)( param_1 + 0x10 )) {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_1, puVar4, &local_21);
      puVar4 = *(undefined1**)( param_1 + 8 );
      if (*(undefined1**)( param_1 + 0x10 ) == puVar4) goto LAB_00101420;
      LAB_001013a8:*puVar4 = uVar1;
      puVar4 = (undefined1*)( *(long*)( param_1 + 8 ) + 1 );
      *(undefined1**)( param_1 + 8 ) = puVar4;
      if (puVar4 != *(undefined1**)( param_1 + 0x10 )) goto LAB_001013c5;
      LAB_00101440:local_21 = uVar2;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_1, puVar4, &local_21);
      puVar4 = *(undefined1**)( param_1 + 8 );
      if (*(undefined1**)( param_1 + 0x10 ) == puVar4) goto LAB_00101460;
   }
 else {
      *puVar4 = local_21;
      puVar4 = (undefined1*)( *(long*)( param_1 + 8 ) + 1 );
      *(undefined1**)( param_1 + 8 ) = puVar4;
      if (*(undefined1**)( param_1 + 0x10 ) != puVar4) goto LAB_001013a8;
      LAB_00101420:local_21 = uVar1;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_1, puVar4, &local_21);
      puVar4 = *(undefined1**)( param_1 + 8 );
      if (puVar4 == *(undefined1**)( param_1 + 0x10 )) goto LAB_00101440;
      LAB_001013c5:*puVar4 = uVar2;
      puVar4 = (undefined1*)( *(long*)( param_1 + 8 ) + 1 );
      *(undefined1**)( param_1 + 8 ) = puVar4;
      if (*(undefined1**)( param_1 + 0x10 ) == puVar4) {
         LAB_00101460:local_21 = uVar3;
         std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_1, puVar4, &local_21);
         goto LAB_001013e9;
      }

   }

   *puVar4 = uVar3;
   *(long*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + 1;
   local_21 = uVar3;
   LAB_001013e9:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* smolv::Encode(void const*, unsigned long, std::vector<unsigned char, std::allocator<unsigned
   char> >&, unsigned int, bool (*)(char const*)) */undefined8 smolv::Encode(void *param_1, ulong param_2, vector *param_3, uint param_4, _func_bool_char_ptr *param_5) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   long lVar3;
   undefined1 *puVar4;
   void *pvVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   vector **ppvVar9;
   bool bVar10;
   uint uVar11;
   undefined4 uVar12;
   ulong uVar13;
   undefined8 uVar14;
   vector *pvVar15;
   uint uVar16;
   int iVar17;
   undefined4 *puVar18;
   uint uVar19;
   undefined4 *puVar20;
   ulong uVar21;
   undefined1 *puVar22;
   ulong uVar23;
   vector *pvVar24;
   uint uVar25;
   ulong uVar26;
   undefined4 *puVar27;
   long lVar28;
   undefined8 *puVar29;
   undefined4 *puVar30;
   undefined4 *puVar31;
   uint uVar32;
   vector *pvVar33;
   vector vVar34;
   long lVar35;
   int iVar36;
   long in_FS_OFFSET;
   byte bVar37;
   float fVar38;
   float fVar39;
   undefined1 auStack_40d8[16384];
   vector *pvStack_d8;
   ulong uStack_d0;
   long lStack_c8;
   ulong uStack_c0;
   void *pvStack_b8;
   ulong uStack_b0;
   undefined8 local_a8;
   vector *local_a0;
   vector *local_98;
   vector *local_90;
   uint local_84;
   vector *local_80;
   _func_bool_char_ptr *local_78;
   uint local_70;
   uint local_6c;
   ulong local_68;
   ulong local_60;
   long local_58;
   long local_50;
   undefined1 local_41;
   long local_40;
   bVar37 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_84 = param_4;
   local_78 = param_5;
   /* WARNING: Load size is inaccurate */
   if (( ( ( ( param_2 & 3 ) != 0 ) || ( uVar23 = param_2 >> 2 ),param_1 == (void*)0x0 ) ) || ( uVar23 < 5 )) {
      LAB_00101700:uVar14 = 0;
      goto LAB_00101702;
   }

   lVar35 = *(long*)( param_3 + 8 ) - *(long*)param_3;
   uVar13 = ( param_2 >> 1 ) + lVar35;
   if ((long)uVar13 < 0) {
      lVar28 = 0x102ecb;
      uStack_b0 = 0x101e04;
      std::__throw_length_error("vector::reserve");
      ppvVar9 = &pvStack_d8;
      do {
         puVar22 = (undefined1*)ppvVar9;
         *(undefined8*)( puVar22 + -0x1000 ) = *(undefined8*)( puVar22 + -0x1000 );
         ppvVar9 = (vector**)( puVar22 + -0x1000 );
      }
 while ( puVar22 + -0x1000 != auStack_40d8 );
      *(undefined8*)( puVar22 + 0x2ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
      pvStack_d8 = param_3;
      uStack_d0 = uVar23;
      lStack_c8 = lVar35;
      uStack_c0 = param_2;
      pvStack_b8 = param_1;
      uStack_b0 = uVar13;
      if (lVar28 != 0) {
         puVar29 = (undefined8*)( puVar22 + -0x14e8 );
         for (lVar35 = 0x2de; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar29 = 0;
            puVar29 = puVar29 + (ulong)bVar37 * -2 + 1;
         }

         puVar1 = (undefined4*)( puVar22 + -0x14e8 );
         puVar29 = (undefined8*)( puVar22 + 0x208 );
         for (lVar35 = 0x2de; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar29 = 0;
            puVar29 = puVar29 + (ulong)bVar37 * -2 + 1;
         }

         puVar29 = (undefined8*)( puVar22 + 0x18f8 );
         for (lVar35 = 0x2de; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar29 = 0;
            puVar29 = puVar29 + (ulong)bVar37 * -2 + 1;
         }

         puVar2 = (undefined4*)( puVar22 + 0x208 );
         *(undefined1**)( puVar22 + -0x14f8 ) = puVar22 + 0x18f8;
         lVar35 = 0;
         puVar18 = puVar2;
         puVar20 = (undefined4*)( puVar22 + 0x18f8 );
         puVar27 = puVar1;
         do {
            uVar14 = *(undefined8*)( lVar28 + lVar35 * 8 );
            uVar12 = (undefined4)lVar35;
            *puVar27 = uVar12;
            *puVar20 = uVar12;
            *(undefined8*)( puVar27 + 2 ) = uVar14;
            uVar14 = *(undefined8*)( lVar28 + 0xb78 + lVar35 * 8 );
            *puVar18 = uVar12;
            *(undefined8*)( puVar18 + 2 ) = uVar14;
            lVar3 = lVar35 * 8;
            lVar35 = lVar35 + 1;
            *(undefined8*)( puVar20 + 2 ) = *(undefined8*)( lVar28 + 0x16f0 + lVar3 );
            puVar18 = puVar18 + 4;
            puVar20 = puVar20 + 4;
            puVar27 = puVar27 + 4;
         }
 while ( lVar35 != 0x16f );
         *(undefined8*)( puVar22 + -0x1500 ) = 0x101f17;
         std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar1, puVar2, 0x10, CompareOpCounters);
         puVar18 = (undefined4*)( puVar22 + -0x14d8 );
         do {
            uVar23 = *(ulong*)( puVar18 + 2 );
            puVar20 = puVar18 + 4;
            if (*(ulong*)( puVar22 + -0x14e0 ) < uVar23) {
               uVar12 = *puVar18;
               puVar27 = puVar18;
               if (0 < (long)puVar18 - (long)puVar1) {
                  do {
                     puVar30 = puVar27 + -4;
                     *puVar27 = puVar27[-4];
                     *(undefined8*)( puVar27 + 2 ) = *(undefined8*)( puVar27 + -2 );
                     puVar27 = puVar30;
                  }
 while ( (undefined4*)( (long)puVar18 - ( (long)puVar18 - (long)puVar1 & 0xfffffffffffffff0U ) ) != puVar30 );
               }

               *(undefined4*)( puVar22 + -0x14e8 ) = uVar12;
               *(ulong*)( puVar22 + -0x14e0 ) = uVar23;
            }
 else {
               *(undefined8*)( puVar22 + -0x1500 ) = 0x102248;
               std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar18, CompareOpCounters);
            }

            puVar18 = puVar20;
         }
 while ( puVar20 != (undefined4*)( puVar22 + -0x13e8 ) );
         do {
            puVar18 = puVar20 + 4;
            *(undefined8*)( puVar22 + -0x1500 ) = 0x101f87;
            std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar20, CompareOpCounters);
            puVar20 = puVar18;
         }
 while ( puVar18 != puVar2 );
         *(undefined8*)( puVar22 + -0x1500 ) = 0x101fb0;
         std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar2, *(undefined8*)( puVar22 + -0x14f8 ), 0x10, CompareOpCounters);
         puVar18 = (undefined4*)( puVar22 + 0x218 );
         do {
            uVar23 = *(ulong*)( puVar18 + 2 );
            puVar20 = puVar18 + 4;
            if (*(ulong*)( puVar22 + 0x210 ) < uVar23) {
               uVar12 = *puVar18;
               puVar27 = puVar18;
               if (0 < (long)puVar18 - (long)puVar2) {
                  do {
                     puVar30 = puVar27 + -4;
                     *puVar27 = puVar27[-4];
                     *(undefined8*)( puVar27 + 2 ) = *(undefined8*)( puVar27 + -2 );
                     puVar27 = puVar30;
                  }
 while ( (undefined4*)( (long)puVar18 - ( (long)puVar18 - (long)puVar2 & 0xfffffffffffffff0U ) ) != puVar30 );
               }

               *(undefined4*)( puVar22 + 0x208 ) = uVar12;
               *(ulong*)( puVar22 + 0x210 ) = uVar23;
            }
 else {
               *(undefined8*)( puVar22 + -0x1500 ) = 0x102238;
               std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar18, CompareOpCounters);
            }

            puVar18 = puVar20;
         }
 while ( puVar20 != (undefined4*)( puVar22 + 0x308 ) );
         do {
            puVar18 = puVar20 + 4;
            *(undefined8*)( puVar22 + -0x1500 ) = 0x102027;
            std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar20, CompareOpCounters);
            puVar20 = puVar18;
         }
 while ( puVar18 != *(undefined4**)( puVar22 + -0x14f8 ) );
         *(undefined8*)( puVar22 + -0x1500 ) = 0x102053;
         std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(*(undefined4**)( puVar22 + -0x14f8 ), puVar22 + 0x2fe8, 0x10, CompareOpCounters);
         puVar18 = (undefined4*)( puVar22 + 0x19f8 );
         puVar20 = (undefined4*)( puVar22 + 0x1908 );
         do {
            uVar23 = *(ulong*)( puVar20 + 2 );
            puVar27 = puVar20 + 4;
            if (*(ulong*)( puVar22 + 0x1900 ) < uVar23) {
               lVar35 = *(long*)( puVar22 + -0x14f8 );
               uVar12 = *puVar20;
               puVar30 = puVar20;
               if (0 < (long)puVar20 - lVar35) {
                  do {
                     puVar31 = puVar30 + -4;
                     *puVar30 = puVar30[-4];
                     *(undefined8*)( puVar30 + 2 ) = *(undefined8*)( puVar30 + -2 );
                     puVar30 = puVar31;
                  }
 while ( (undefined4*)( (long)puVar20 - ( (long)puVar20 - lVar35 & 0xfffffffffffffff0U ) ) != puVar31 );
               }

               *(undefined4*)( puVar22 + 0x18f8 ) = uVar12;
               *(ulong*)( puVar22 + 0x1900 ) = uVar23;
            }
 else {
               *(undefined4**)( puVar22 + -0x14f0 ) = puVar18;
               *(undefined8*)( puVar22 + -0x1500 ) = 0x10221d;
               std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar20, CompareOpCounters);
               puVar18 = *(undefined4**)( puVar22 + -0x14f0 );
            }

            puVar20 = puVar27;
         }
 while ( puVar27 != puVar18 );
         do {
            puVar18 = puVar27 + 4;
            *(undefined8*)( puVar22 + -0x1500 ) = 0x1020d7;
            std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar27, CompareOpCounters);
            puVar27 = puVar18;
         }
 while ( puVar18 != (undefined4*)( puVar22 + 0x2fe8 ) );
         uVar23 = *(ulong*)( lVar28 + 0x2330 );
         uVar12 = *(undefined4*)( lVar28 + 0x2340 );
         uVar13 = 0;
         *(undefined8*)( puVar22 + -0x1500 ) = 0x102134;
         __printf_chk((double)( (float)uVar23 * _LC2 * __LC3 ), 2, "Stats for %i SPIR-V inputs, total size %i words (%.1fKB):\n", uVar12);
         *(undefined8*)( puVar22 + -0x1500 ) = 0x102140;
         puts("Most occuring ops:");
         do {
            uVar23 = *(ulong*)( puVar22 + uVar13 * 0x10 + -0x14e0 );
            iVar17 = puVar1[uVar13 * 4];
            if ((long)uVar23 < 0) {
               uVar26 = *(ulong*)( lVar28 + 9000 );
               fVar38 = (float)uVar23;
               if ((long)uVar26 < 0) goto LAB_001021e9;
               LAB_00102161:fVar39 = (float)(long)uVar26;
            }
 else {
               uVar26 = *(ulong*)( lVar28 + 9000 );
               fVar38 = (float)(long)uVar23;
               if (-1 < (long)uVar26) goto LAB_00102161;
               LAB_001021e9:fVar39 = (float)uVar26;
            }

            uVar23 = uVar13 & 0xffffffff;
            uVar14 = *(undefined8*)( kSpirvOpNames + (long)iVar17 * 8 );
            uVar13 = uVar13 + 1;
            *(undefined8*)( puVar22 + -0x1500 ) = 0x10219e;
            __printf_chk((double)( ( fVar38 / fVar39 ) * __LC6 ), 2, " #%2i: %4i %-20s %4i (%4.1f%%)\n", uVar23, iVar17, uVar14);
         }
 while ( uVar13 != 0x1e );
         uVar23 = 0;
         *(undefined8*)( puVar22 + -0x1500 ) = 0x1022b1;
         puts("Largest total size of ops:");
         do {
            uVar6 = *(ulong*)( puVar22 + uVar23 * 0x10 + 0x210 );
            fVar38 = (float)uVar6;
            uVar13 = *(ulong*)( lVar28 + (long)(int)puVar2[uVar23 * 4] * 8 );
            uVar26 = *(ulong*)( lVar28 + 0x2330 );
            uVar14 = *(undefined8*)( kSpirvOpNames + (long)(int)puVar2[uVar23 * 4] * 8 );
            uVar21 = uVar23 & 0xffffffff;
            uVar23 = uVar23 + 1;
            *(undefined8*)( puVar22 + -0x1500 ) = 0x102342;
            __printf_chk((double)( ( fVar38 / (float)uVar26 ) * __LC6 ), (double)( ( _LC2 * fVar38 ) / (float)uVar13 ), 2, " #%2i: %-22s %6i (%4.1f%%) avg len %.1f\n", uVar21, uVar14, (int)uVar6 * 4);
         }
 while ( uVar23 != 0x1e );
         uVar23 = 1;
         *(undefined8*)( puVar22 + -0x1500 ) = 0x1023d7;
         puts("SMOL varint encoding counts per byte length:");
         *(undefined8*)( puVar22 + -0x1500 ) = 0x102406;
         __printf_chk(2, &_LC15, &_LC14, &_LC13, "Result", "Other");
         do {
            uVar14 = *(undefined8*)( lVar28 + 0x22c8 + uVar23 * 8 );
            uVar13 = uVar23 & 0xffffffff;
            uVar7 = *(undefined8*)( lVar28 + 0x2298 + uVar23 * 8 );
            uVar8 = *(undefined8*)( lVar28 + 0x2268 + uVar23 * 8 );
            *(undefined8*)( puVar22 + -0x1508 ) = *(undefined8*)( lVar28 + 0x22f8 + uVar23 * 8 );
            uVar23 = uVar23 + 1;
            *(undefined8*)( puVar22 + -0x1510 ) = 0x10244b;
            __printf_chk(2, 0x102f34, uVar13, uVar8, uVar7, uVar14);
         }
 while ( uVar23 != 6 );
         uVar23 = 0;
         *(undefined8*)( puVar22 + -0x1500 ) = 0x10246a;
         puts("Largest total size of ops in SMOL:");
         do {
            uVar6 = *(ulong*)( puVar22 + uVar23 * 0x10 + 0x1900 );
            lVar35 = (long)*(int*)( *(long*)( puVar22 + -0x14f8 ) + uVar23 * 0x10 );
            uVar13 = *(ulong*)( lVar28 + lVar35 * 8 );
            uVar26 = *(ulong*)( lVar28 + 0x2338 );
            uVar14 = *(undefined8*)( kSpirvOpNames + lVar35 * 8 );
            uVar21 = uVar23 & 0xffffffff;
            uVar23 = uVar23 + 1;
            *(undefined8*)( puVar22 + -0x1500 ) = 0x1024e5;
            __printf_chk((double)( ( (float)uVar6 / (float)uVar26 ) * __LC6 ), (double)( (float)uVar6 / (float)uVar13 ), 2, " #%2i: %-22s %6i (%4.1f%%) avg len %.1f\n", uVar21, uVar14);
         }
 while ( uVar23 != 0x1e );
      }

      if (*(long*)( puVar22 + 0x2ff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 0;
      }

      /* WARNING: Subroutine does not return */
      *(undefined8*)( puVar22 + -0x1500 ) = 0x102573;
      __stack_chk_fail();
   }

   if (( ulong )(*(long*)( param_3 + 0x10 ) - *(long*)param_3) < uVar13) {
      uStack_b0 = 0x101b41;
      pvVar15 = (vector*)operator_new(uVar13);
      pvVar5 = *(void**)param_3;
      if (*(long*)( param_3 + 8 ) - (long)pvVar5 < 1) {
         if (pvVar5 != (void*)0x0) {
            uVar26 = *(long*)( param_3 + 0x10 ) - (long)pvVar5;
            local_a8 = (vector*)pvVar5;
            goto LAB_00101cf5;
         }

      }
 else {
         uStack_b0 = 0x101d19;
         local_a8 = (vector*)pvVar5;
         pvVar15 = (vector*)memmove(pvVar15, pvVar5, *(long*)( param_3 + 8 ) - (long)pvVar5);
         uVar26 = *(long*)( param_3 + 0x10 ) - (long)local_a8;
         LAB_00101cf5:uStack_b0 = 0x101d01;
         pvVar5 = local_a8;
         local_a8 = pvVar15;
         operator_delete(pvVar5, uVar26);
         pvVar15 = local_a8;
      }

      *(vector**)param_3 = pvVar15;
      *(vector**)( param_3 + 8 ) = pvVar15 + lVar35;
      *(vector**)( param_3 + 0x10 ) = pvVar15 + uVar13;
   }

   local_a0 = (vector*)( ( param_2 & 0xfffffffffffffffc ) + (long)param_1 );
   uStack_b0 = 0x10153f;
   smolv_Write4(param_3, 0x534d4f4c);
   uStack_b0 = 0x101557;
   smolv_Write4(param_3, ( *(uint*)( (long)param_1 + 4 ) & 0xffffff ) + 0x1000000);
   for (int i = 0; i < 3; i++) {
      uStack_b0 = ( 12*i + 1054051 );
      smolv_Write4(param_3, *(uint*)( (long)param_1 + ( 4*i + 8 ) ));
   }

   lVar35 = *(long*)( param_3 + 8 );
   lVar28 = *(long*)param_3;
   uStack_b0 = 0x101591;
   smolv_Write4(param_3, (uint)param_2);
   if ((vector*)( (long)param_1 + 0x14 ) < local_a0) {
      iVar17 = 0;
      local_80 = (vector*)( (ulong)local_80 & 0xffffffff00000000 );
      pvVar15 = (vector*)( (long)param_1 + 0x14 );
      local_68 = uVar23;
      local_60 = uVar23;
      local_58 = lVar28;
      local_50 = lVar35;
      do {
         uVar11 = *(uint*)pvVar15;
         uVar32 = uVar11 >> 0x10;
         if (uVar32 == 0) goto LAB_00101700;
         uVar23 = (ulong)uVar32;
         local_98 = pvVar15 + uVar23 * 4;
         if (local_a0 < local_98) goto LAB_00101700;
         uVar19 = uVar11 & 0xffff;
         if (( local_84 & 1 ) == 0) {
            LAB_0010161d:if (( uVar19 == 0x4f ) && ( uVar32 < 10 )) {
               if (uVar32 < 6) {
                  LAB_0010163e:uVar16 = uVar32 - 5;
                  uVar19 = 0xd;
                  goto LAB_00101646;
               }

               uVar11 = *(uint*)( pvVar15 + 0x14 );
               if (uVar32 == 6) {
                  if (uVar11 < 4) {
                     uVar25 = 0;
                     LAB_00101d76:uVar19 = 0xd;
                     local_6c = uVar11 << 6 | uVar25 << 4;
                     uVar16 = uVar32 - 5;
                  }
 else {
                     local_6c = 0;
                     uVar16 = 1;
                     uVar19 = 0x4f;
                  }

               }
 else {
                  uVar25 = *(uint*)( pvVar15 + 0x18 );
                  if (uVar32 == 7) {
                     if (( uVar11 | uVar25 ) < 4) goto LAB_00101d76;
                     local_6c = 0;
                     uVar16 = 2;
                     uVar19 = 0x4f;
                  }
 else {
                     local_6c = 0;
                     if (uVar32 == 9) {
                        local_6c = *(uint*)( pvVar15 + 0x20 );
                     }

                     if (( uVar11 | uVar25 | *(uint*)( pvVar15 + 0x1c ) | local_6c ) < 4) {
                        uVar19 = 0xd;
                        uVar16 = uVar32 - 5;
                        local_6c = uVar11 << 6 | uVar25 << 4 | *(uint*)( pvVar15 + 0x1c ) << 2 | local_6c;
                     }
 else {
                        local_6c = 0;
                        uVar16 = uVar32 - 5;
                        uVar19 = 0x4f;
                     }

                  }

               }

               LAB_00101660:local_a8 = (vector*)CONCAT44(local_a8._4_4_, uVar19);
               uVar25 = uVar16 >> 4;
               local_90 = (vector*)CONCAT44(local_90._4_4_, uVar32);
               uVar32 = ( uVar16 & 0xf ) << 4;
               uVar13 = 1;
               uStack_b0 = 0x101680;
               uVar11 = smolv_RemapOp(uVar19);
               uStack_b0 = 0x10169c;
               smolv_WriteVarint(param_3, uVar25 << 0x14 | uVar32 | uVar11 & 0xf | ( (int)uVar11 >> 4 ) << 8);
               if ((uint)local_a8 < 0x16f) {
                  uVar19 = (uint)local_a8;
                  if (kSpirvOpData[(long)(int)(uint)local_a8 * 4 + 1] == '\0') goto LAB_00101745;
                  if ((int)local_90 != 1) goto LAB_00101a1a;
                  goto LAB_00101700;
               }

               LAB_001016ab:pvVar24 = local_98;
               if (uVar13 < uVar23) {
                  do {
                     lVar35 = uVar13 * 4;
                     uVar13 = uVar13 + 1;
                     uStack_b0 = 0x1016c0;
                     smolv_Write4(param_3, *(uint*)( pvVar15 + lVar35 ));
                     pvVar24 = local_98;
                  }
 while ( uVar23 != uVar13 );
               }

            }
 else {
               uVar16 = uVar32 - 1;
               if (uVar19 == 0x4f) {
                  uVar16 = uVar32 - 5;
                  goto LAB_00101646;
               }

               if (uVar19 == 0xd) goto LAB_0010163e;
               if (uVar19 == 0x47) {
                  uVar16 = uVar32 - 3;
                  LAB_00101646:if (uVar16 < 0x10000) goto LAB_00101652;
                  goto LAB_00101700;
               }

               if (uVar19 == 0x3d) {
                  uVar16 = uVar32 - 4;
                  goto LAB_00101646;
               }

               if (uVar19 != 0x41) goto LAB_00101652;
               uVar32 = uVar32 - 4;
               if (0xffff < uVar32) goto LAB_00101700;
               local_a8 = (vector*)( CONCAT44(local_a8._4_4_, uVar11) & 0xffffffff0000ffff );
               uStack_b0 = 0x101dbe;
               uVar11 = uVar32;
               uVar16 = smolv_RemapOp(0x41);
               uVar19 = 0x41;
               uStack_b0 = 0x101de8;
               smolv_WriteVarint(param_3, ( uVar11 >> 4 ) << 0x14 | ( uVar32 & 0xf ) << 4 | uVar16 & 0xf | ( (int)uVar16 >> 4 ) << 8);
               local_6c = 0;
               LAB_00101a1a:uVar13 = 2;
               uStack_b0 = 0x101a2f;
               smolv_WriteVarint(param_3, *(uint*)( pvVar15 + 4 ));
               LAB_00101745:local_90 = (vector*)(long)(int)uVar19;
               uVar11 = (uint)local_a8;
               if (kSpirvOpData[(long)local_90 * 4] != '\0') {
                  if (uVar23 <= uVar13) goto LAB_00101700;
                  iVar36 = *(int*)( pvVar15 + uVar13 * 4 );
                  uVar13 = uVar13 + 1;
                  iVar17 = iVar36 - iVar17;
                  uStack_b0 = 0x101783;
                  smolv_WriteVarint(param_3, iVar17 * 2 ^ iVar17 >> 0x1f);
                  uVar11 = (uint)local_a8;
                  iVar17 = iVar36;
               }

               if (uVar11 - 0x47 < 2) {
                  local_a8 = (vector*)CONCAT44(local_a8._4_4_, uVar11);
                  if (uVar23 <= uVar13) goto LAB_00101700;
                  lVar35 = uVar13 * 4;
                  uVar13 = uVar13 + 1;
                  local_70 = *(uint*)( pvVar15 + lVar35 );
                  uStack_b0 = 0x1017c4;
                  smolv_WriteVarint(param_3, ( local_70 - (uint)local_80 ) * 2 ^ (int)( local_70 - (uint)local_80 ) >> 0x1f);
                  if ((uint)local_a8 == 0x48) {
                     puVar4 = *(undefined1**)( param_3 + 8 );
                     uVar11 = *(uint*)( pvVar15 + lVar35 );
                     local_41 = 0;
                     lVar35 = *(long*)param_3;
                     if (puVar4 == *(undefined1**)( param_3 + 0x10 )) {
                        uStack_b0 = 0x101b87;
                        local_a8 = (vector*)( puVar4 + -lVar35 );
                        std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_3, puVar4, &local_41);
                        pvVar33 = local_a8;
                     }
 else {
                        *puVar4 = 0;
                        *(long*)( param_3 + 8 ) = *(long*)( param_3 + 8 ) + 1;
                        pvVar33 = (vector*)( puVar4 + -lVar35 );
                     }

                     if (pvVar15 < local_a0) {
                        iVar36 = 0;
                        uVar19 = 0;
                        uVar32 = 0;
                        do {
                           uVar16 = *(uint*)pvVar15 >> 0x10;
                           if (( uVar16 == 0 ) || ( pvVar24 = local_a0 < pvVar24 )) goto LAB_00101700;
                           if ((short)*(uint*)pvVar15 != 0x48) {
                              LAB_001019f3:vVar34 = SUB41(iVar36, 0);
                              pvVar24 = pvVar15;
                              goto LAB_001019fc;
                           }

                           if (uVar16 < 4) goto LAB_00101700;
                           if (*(uint*)( pvVar15 + 4 ) != uVar11) goto LAB_001019f3;
                           local_6c = *(uint*)( pvVar15 + 8 );
                           local_90 = (vector*)CONCAT44(local_90._4_4_, iVar36);
                           local_98 = (vector*)CONCAT44(local_98._4_4_, iVar17);
                           local_a8 = (vector*)CONCAT44(local_a8._4_4_, uVar19);
                           uStack_b0 = 0x101bc8;
                           local_80 = pvVar33;
                           smolv_WriteVarint(param_3, local_6c - uVar32);
                           uVar32 = *(uint*)( pvVar15 + 0xc );
                           uStack_b0 = 0x101bd6;
                           smolv_WriteVarint(param_3, uVar32);
                           iVar36 = (int)local_90;
                           iVar17 = (uint)local_98;
                           if (uVar32 < 6) {
                              if (uVar32 == 1) goto LAB_00101c67;
                              pvVar33 = local_80;
                              uVar19 = (uint)local_a8;
                              if (uVar16 != 4) goto LAB_00101700;
                           }
 else if (uVar32 - 0x1d < 9) {
                              if (uVar16 != 5) goto LAB_00101700;
                              if (uVar32 == 0x23) {
                                 local_90 = local_80;
                                 local_98 = (vector*)CONCAT44(local_98._4_4_, iVar36);
                                 uVar32 = *(uint*)( pvVar15 + 0x10 ) - (uint)local_a8;
                                 local_a8 = (vector*)CONCAT44(local_a8._4_4_, iVar17);
                                 uStack_b0 = 0x101c24;
                                 smolv_WriteVarint(param_3, uVar32);
                                 pvVar33 = local_90;
                                 iVar36 = (uint)local_98;
                                 iVar17 = (uint)local_a8;
                                 uVar19 = *(uint*)( pvVar15 + 0x10 );
                              }
 else {
                                 uStack_b0 = 0x101d58;
                                 smolv_WriteVarint(param_3, *(uint*)( pvVar15 + 0x10 ));
                                 pvVar33 = local_80;
                                 iVar36 = (int)local_90;
                                 iVar17 = (uint)local_98;
                                 uVar19 = (uint)local_a8;
                              }

                           }
 else {
                              LAB_00101c67:uStack_b0 = 0x101c8a;
                              smolv_WriteVarint(param_3, uVar16 - 4);
                              pvVar33 = local_80;
                              iVar17 = (uint)local_98;
                              iVar36 = (int)local_90;
                              uVar19 = (uint)local_a8;
                              if (uVar16 != 4) {
                                 local_98 = (vector*)CONCAT44(local_98._4_4_, (uint)local_a8);
                                 local_90 = (vector*)CONCAT44(local_90._4_4_, iVar17);
                                 local_80 = (vector*)CONCAT44(local_80._4_4_, iVar36);
                                 lVar35 = 4;
                                 local_a8 = pvVar24;
                                 do {
                                    lVar28 = lVar35 * 4;
                                    lVar35 = lVar35 + 1;
                                    uStack_b0 = 0x101ccf;
                                    smolv_WriteVarint(param_3, *(uint*)( pvVar15 + lVar28 ));
                                 }
 while ( (uint)lVar35 < uVar16 );
                                 pvVar24 = local_a8;
                                 iVar36 = (uint)local_80;
                                 iVar17 = (int)local_90;
                                 uVar19 = (uint)local_98;
                              }

                           }

                           iVar36 = iVar36 + 1;
                        }
 while ( ( pvVar24 < local_a0 ) && ( pvVar15 = pvVar24 ),uVar32 = local_6c,iVar36 < 0xff );
                        vVar34 = SUB41(iVar36, 0);
                        LAB_001019fc:pvVar33[*(long*)param_3] = vVar34;
                        local_80 = (vector*)CONCAT44(local_80._4_4_, local_70);
                        goto LAB_001016ca;
                     }

                     pvVar33[*(long*)param_3] = (vector)0x0;
                     break;
                  }

                  uVar11 = 0x47;
               }
 else {
                  local_70 = (uint)local_80;
               }

               bVar37 = kSpirvOpData[(long)local_90 * 4 + 2];
               if (( bVar37 != 0 ) && ( uVar13 < uVar23 )) {
                  local_80 = (vector*)CONCAT44(local_80._4_4_, uVar11);
                  iVar36 = 0;
                  local_a8 = param_3;
                  do {
                     lVar35 = uVar13 * 4;
                     uVar13 = uVar13 + 1;
                     iVar36 = iVar36 + 1;
                     uStack_b0 = 0x10182d;
                     smolv_WriteVarint(local_a8, ( iVar17 - *(int*)( pvVar15 + lVar35 ) ) * 2 ^ iVar17 - *(int*)( pvVar15 + lVar35 ) >> 0x1f);
                     if (uVar23 <= uVar13) break;
                  }
 while ( iVar36 < (int)(uint)bVar37 );
                  param_3 = local_a8;
                  uVar11 = (uint)local_80;
               }

               if (uVar11 == 0xd) {
                  puVar4 = *(undefined1**)( param_3 + 8 );
                  local_41 = (undefined1)local_6c;
                  if (puVar4 != *(undefined1**)( param_3 + 0x10 )) {
                     *puVar4 = local_41;
                     *(long*)( param_3 + 8 ) = *(long*)( param_3 + 8 ) + 1;
                     local_80 = (vector*)CONCAT44(local_80._4_4_, local_70);
                     pvVar24 = local_98;
                     goto LAB_001016ca;
                  }

                  uStack_b0 = 0x101b9d;
                  std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)param_3, puVar4, &local_41);
               }
 else {
                  if (kSpirvOpData[(long)local_90 * 4 + 3] == '\0') {
                     local_80 = (vector*)CONCAT44(local_80._4_4_, local_70);
                     goto LAB_001016ab;
                  }

                  if (uVar13 < uVar23) {
                     do {
                        lVar35 = uVar13 * 4;
                        uVar13 = uVar13 + 1;
                        uStack_b0 = 0x101878;
                        smolv_WriteVarint(param_3, *(uint*)( pvVar15 + lVar35 ));
                     }
 while ( uVar23 != uVar13 );
                  }

               }

               local_80 = (vector*)CONCAT44(local_80._4_4_, local_70);
               pvVar24 = local_98;
            }

         }
 else {
            if (( 6 < uVar19 - 2 ) && ( uVar19 != 0x13d )) {
               if (uVar19 == 0x14a) goto LAB_00101958;
               goto LAB_0010161d;
            }

            local_a8 = (vector*)CONCAT44(local_a8._4_4_, uVar32);
            if (( local_78 != (_func_bool_char_ptr*)0x0 ) && ( uVar19 == 5 )) {
               uStack_b0 = 0x1018e9;
               bVar10 = ( *local_78 )((char*)( pvVar15 + 8 ));
               if (!bVar10) goto LAB_00101958;
               uVar19 = 5;
               uVar16 = (uint)local_a8 - 1;
               uVar32 = (uint)local_a8;
               LAB_00101652:local_6c = 0;
               goto LAB_00101660;
            }

            LAB_00101958:local_68 = local_68 - uVar23;
            pvVar24 = local_98;
         }

         LAB_001016ca:pvVar15 = pvVar24;
      }
 while ( pvVar24 < local_a0 );
      if (local_60 != local_68) {
         *(int*)( *(long*)param_3 + ( local_50 - local_58 ) ) = (int)local_68 << 2;
      }

   }

   uVar14 = 1;
   LAB_00101702:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar14;
   }

   /* WARNING: Subroutine does not return */
   uStack_b0 = 0x101d74;
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* smolv::StatsPrint(smolv::Stats const*) */void smolv::StatsPrint(Stats *param_1) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined1 *puVar9;
   undefined4 uVar10;
   ulong uVar11;
   long lVar12;
   undefined4 *puVar13;
   undefined4 *puVar14;
   ulong uVar15;
   undefined1 *puVar16;
   undefined4 *puVar17;
   undefined8 *puVar18;
   undefined4 *puVar19;
   undefined4 *puVar20;
   ulong uVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   float fVar23;
   float fVar24;
   undefined1 local_4030[16384];
   puVar9 = &stack0xffffffffffffffd0;
   do {
      puVar16 = puVar9;
      *(undefined8*)( puVar16 + -0x1000 ) = *(undefined8*)( puVar16 + -0x1000 );
      puVar9 = puVar16 + -0x1000;
   }
 while ( puVar16 + -0x1000 != local_4030 );
   *(undefined8*)( puVar16 + 0x2ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (Stats*)0x0) {
      puVar18 = (undefined8*)( puVar16 + -0x14e8 );
      for (lVar12 = 0x2de; lVar12 != 0; lVar12 = lVar12 + -1) {
         *puVar18 = 0;
         puVar18 = puVar18 + 1;
      }

      puVar1 = (undefined4*)( puVar16 + -0x14e8 );
      puVar18 = (undefined8*)( puVar16 + 0x208 );
      for (lVar12 = 0x2de; lVar12 != 0; lVar12 = lVar12 + -1) {
         *puVar18 = 0;
         puVar18 = puVar18 + 1;
      }

      puVar18 = (undefined8*)( puVar16 + 0x18f8 );
      for (lVar12 = 0x2de; lVar12 != 0; lVar12 = lVar12 + -1) {
         *puVar18 = 0;
         puVar18 = puVar18 + 1;
      }

      puVar2 = (undefined4*)( puVar16 + 0x208 );
      *(undefined1**)( puVar16 + -0x14f8 ) = puVar16 + 0x18f8;
      lVar12 = 0;
      puVar13 = puVar2;
      puVar14 = (undefined4*)( puVar16 + 0x18f8 );
      puVar17 = puVar1;
      do {
         uVar5 = *(undefined8*)( param_1 + lVar12 * 8 );
         uVar10 = (undefined4)lVar12;
         *puVar17 = uVar10;
         *puVar14 = uVar10;
         *(undefined8*)( puVar17 + 2 ) = uVar5;
         uVar5 = *(undefined8*)( param_1 + lVar12 * 8 + 0xb78 );
         *puVar13 = uVar10;
         *(undefined8*)( puVar13 + 2 ) = uVar5;
         lVar3 = lVar12 * 8;
         lVar12 = lVar12 + 1;
         *(undefined8*)( puVar14 + 2 ) = *(undefined8*)( param_1 + lVar3 + 0x16f0 );
         puVar13 = puVar13 + 4;
         puVar14 = puVar14 + 4;
         puVar17 = puVar17 + 4;
      }
 while ( lVar12 != 0x16f );
      *(undefined8*)( puVar16 + -0x1500 ) = 0x101f17;
      std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar1, puVar2, 0x10, CompareOpCounters);
      puVar13 = (undefined4*)( puVar16 + -0x14d8 );
      do {
         uVar22 = *(ulong*)( puVar13 + 2 );
         puVar14 = puVar13 + 4;
         if (*(ulong*)( puVar16 + -0x14e0 ) < uVar22) {
            uVar10 = *puVar13;
            puVar17 = puVar13;
            if (0 < (long)puVar13 - (long)puVar1) {
               do {
                  puVar19 = puVar17 + -4;
                  *puVar17 = puVar17[-4];
                  *(undefined8*)( puVar17 + 2 ) = *(undefined8*)( puVar17 + -2 );
                  puVar17 = puVar19;
               }
 while ( (undefined4*)( (long)puVar13 - ( (long)puVar13 - (long)puVar1 & 0xfffffffffffffff0U ) ) != puVar19 );
            }

            *(undefined4*)( puVar16 + -0x14e8 ) = uVar10;
            *(ulong*)( puVar16 + -0x14e0 ) = uVar22;
         }
 else {
            *(undefined8*)( puVar16 + -0x1500 ) = 0x102248;
            std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar13, CompareOpCounters);
         }

         puVar13 = puVar14;
      }
 while ( puVar14 != (undefined4*)( puVar16 + -0x13e8 ) );
      do {
         puVar13 = puVar14 + 4;
         *(undefined8*)( puVar16 + -0x1500 ) = 0x101f87;
         std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar14, CompareOpCounters);
         puVar14 = puVar13;
      }
 while ( puVar13 != puVar2 );
      *(undefined8*)( puVar16 + -0x1500 ) = 0x101fb0;
      std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar2, *(undefined8*)( puVar16 + -0x14f8 ), 0x10, CompareOpCounters);
      puVar13 = (undefined4*)( puVar16 + 0x218 );
      do {
         uVar22 = *(ulong*)( puVar13 + 2 );
         puVar14 = puVar13 + 4;
         if (*(ulong*)( puVar16 + 0x210 ) < uVar22) {
            uVar10 = *puVar13;
            puVar17 = puVar13;
            if (0 < (long)puVar13 - (long)puVar2) {
               do {
                  puVar19 = puVar17 + -4;
                  *puVar17 = puVar17[-4];
                  *(undefined8*)( puVar17 + 2 ) = *(undefined8*)( puVar17 + -2 );
                  puVar17 = puVar19;
               }
 while ( (undefined4*)( (long)puVar13 - ( (long)puVar13 - (long)puVar2 & 0xfffffffffffffff0U ) ) != puVar19 );
            }

            *(undefined4*)( puVar16 + 0x208 ) = uVar10;
            *(ulong*)( puVar16 + 0x210 ) = uVar22;
         }
 else {
            *(undefined8*)( puVar16 + -0x1500 ) = 0x102238;
            std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar13, CompareOpCounters);
         }

         puVar13 = puVar14;
      }
 while ( puVar14 != (undefined4*)( puVar16 + 0x308 ) );
      do {
         puVar13 = puVar14 + 4;
         *(undefined8*)( puVar16 + -0x1500 ) = 0x102027;
         std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar14, CompareOpCounters);
         puVar14 = puVar13;
      }
 while ( puVar13 != *(undefined4**)( puVar16 + -0x14f8 ) );
      *(undefined8*)( puVar16 + -0x1500 ) = 0x102053;
      std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(*(undefined4**)( puVar16 + -0x14f8 ), puVar16 + 0x2fe8, 0x10, CompareOpCounters);
      puVar13 = (undefined4*)( puVar16 + 0x19f8 );
      puVar14 = (undefined4*)( puVar16 + 0x1908 );
      do {
         uVar22 = *(ulong*)( puVar14 + 2 );
         puVar17 = puVar14 + 4;
         if (*(ulong*)( puVar16 + 0x1900 ) < uVar22) {
            lVar12 = *(long*)( puVar16 + -0x14f8 );
            uVar10 = *puVar14;
            puVar19 = puVar14;
            if (0 < (long)puVar14 - lVar12) {
               do {
                  puVar20 = puVar19 + -4;
                  *puVar19 = puVar19[-4];
                  *(undefined8*)( puVar19 + 2 ) = *(undefined8*)( puVar19 + -2 );
                  puVar19 = puVar20;
               }
 while ( (undefined4*)( (long)puVar14 - ( (long)puVar14 - lVar12 & 0xfffffffffffffff0U ) ) != puVar20 );
            }

            *(undefined4*)( puVar16 + 0x18f8 ) = uVar10;
            *(ulong*)( puVar16 + 0x1900 ) = uVar22;
         }
 else {
            *(undefined4**)( puVar16 + -0x14f0 ) = puVar13;
            *(undefined8*)( puVar16 + -0x1500 ) = 0x10221d;
            std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar14, CompareOpCounters);
            puVar13 = *(undefined4**)( puVar16 + -0x14f0 );
         }

         puVar14 = puVar17;
      }
 while ( puVar17 != puVar13 );
      do {
         puVar13 = puVar17 + 4;
         *(undefined8*)( puVar16 + -0x1500 ) = 0x1020d7;
         std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(puVar17, CompareOpCounters);
         puVar17 = puVar13;
      }
 while ( puVar13 != (undefined4*)( puVar16 + 0x2fe8 ) );
      uVar22 = *(ulong*)( param_1 + 0x2330 );
      uVar10 = *(undefined4*)( param_1 + 0x2340 );
      uVar21 = 0;
      *(undefined8*)( puVar16 + -0x1500 ) = 0x102134;
      __printf_chk((double)( (float)uVar22 * _LC2 * __LC3 ), 2, "Stats for %i SPIR-V inputs, total size %i words (%.1fKB):\n", uVar10);
      *(undefined8*)( puVar16 + -0x1500 ) = 0x102140;
      puts("Most occuring ops:");
      do {
         uVar22 = *(ulong*)( puVar16 + uVar21 * 0x10 + -0x14e0 );
         iVar4 = puVar1[uVar21 * 4];
         if ((long)uVar22 < 0) {
            uVar11 = *(ulong*)( param_1 + 9000 );
            fVar23 = (float)uVar22;
            if ((long)uVar11 < 0) goto LAB_001021e9;
            LAB_00102161:fVar24 = (float)(long)uVar11;
         }
 else {
            uVar11 = *(ulong*)( param_1 + 9000 );
            fVar23 = (float)(long)uVar22;
            if (-1 < (long)uVar11) goto LAB_00102161;
            LAB_001021e9:fVar24 = (float)uVar11;
         }

         uVar22 = uVar21 & 0xffffffff;
         uVar5 = *(undefined8*)( kSpirvOpNames + (long)iVar4 * 8 );
         uVar21 = uVar21 + 1;
         *(undefined8*)( puVar16 + -0x1500 ) = 0x10219e;
         __printf_chk((double)( ( fVar23 / fVar24 ) * __LC6 ), 2, " #%2i: %4i %-20s %4i (%4.1f%%)\n", uVar22, iVar4, uVar5);
      }
 while ( uVar21 != 0x1e );
      uVar22 = 0;
      *(undefined8*)( puVar16 + -0x1500 ) = 0x1022b1;
      puts("Largest total size of ops:");
      do {
         uVar6 = *(ulong*)( puVar16 + uVar22 * 0x10 + 0x210 );
         fVar23 = (float)uVar6;
         uVar21 = *(ulong*)( param_1 + (long)(int)puVar2[uVar22 * 4] * 8 );
         uVar11 = *(ulong*)( param_1 + 0x2330 );
         uVar5 = *(undefined8*)( kSpirvOpNames + (long)(int)puVar2[uVar22 * 4] * 8 );
         uVar15 = uVar22 & 0xffffffff;
         uVar22 = uVar22 + 1;
         *(undefined8*)( puVar16 + -0x1500 ) = 0x102342;
         __printf_chk((double)( ( fVar23 / (float)uVar11 ) * __LC6 ), (double)( ( _LC2 * fVar23 ) / (float)uVar21 ), 2, " #%2i: %-22s %6i (%4.1f%%) avg len %.1f\n", uVar15, uVar5, (int)uVar6 * 4);
      }
 while ( uVar22 != 0x1e );
      uVar22 = 1;
      *(undefined8*)( puVar16 + -0x1500 ) = 0x1023d7;
      puts("SMOL varint encoding counts per byte length:");
      *(undefined8*)( puVar16 + -0x1500 ) = 0x102406;
      __printf_chk(2, &_LC15, &_LC14, &_LC13, "Result", "Other");
      do {
         uVar5 = *(undefined8*)( param_1 + uVar22 * 8 + 0x22c8 );
         uVar21 = uVar22 & 0xffffffff;
         uVar7 = *(undefined8*)( param_1 + uVar22 * 8 + 0x2298 );
         uVar8 = *(undefined8*)( param_1 + uVar22 * 8 + 0x2268 );
         *(undefined8*)( puVar16 + -0x1508 ) = *(undefined8*)( param_1 + uVar22 * 8 + 0x22f8 );
         uVar22 = uVar22 + 1;
         *(undefined8*)( puVar16 + -0x1510 ) = 0x10244b;
         __printf_chk(2, 0x102f34, uVar21, uVar8, uVar7, uVar5);
      }
 while ( uVar22 != 6 );
      uVar22 = 0;
      *(undefined8*)( puVar16 + -0x1500 ) = 0x10246a;
      puts("Largest total size of ops in SMOL:");
      do {
         uVar6 = *(ulong*)( puVar16 + uVar22 * 0x10 + 0x1900 );
         lVar12 = (long)*(int*)( *(long*)( puVar16 + -0x14f8 ) + uVar22 * 0x10 );
         uVar21 = *(ulong*)( param_1 + lVar12 * 8 );
         uVar11 = *(ulong*)( param_1 + 0x2338 );
         uVar5 = *(undefined8*)( kSpirvOpNames + lVar12 * 8 );
         uVar15 = uVar22 & 0xffffffff;
         uVar22 = uVar22 + 1;
         *(undefined8*)( puVar16 + -0x1500 ) = 0x1024e5;
         __printf_chk((double)( ( (float)uVar6 / (float)uVar11 ) * __LC6 ), (double)( (float)uVar6 / (float)uVar21 ), 2, " #%2i: %-22s %6i (%4.1f%%) avg len %.1f\n", uVar15, uVar5);
      }
 while ( uVar22 != 0x1e );
   }

   if (*(long*)( puVar16 + 0x2ff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar16 + -0x1500 ) = 0x102573;
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Instruction at (ram,0x00102fe9) overlaps instruction at (ram,0x00102fe3)
    *//* void std::vector<unsigned char, std::allocator<unsigned char> >::_M_realloc_insert<unsigned
   char>(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
   std::allocator<unsigned char> > >, unsigned char&&) */void std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_realloc_insert<unsigned_char>(vector<unsigned_char,std::allocator<unsigned_char>> *this, undefined4 *param_2, undefined1 *param_3) {
   byte *pbVar1;
   byte bVar2;
   char cVar5;
   undefined4 uVar6;
   uint uVar7;
   void *__src;
   ulong uVar8;
   size_t __n;
   byte bVar9;
   ulong uVar10;
   void *__dest;
   byte *pbVar11;
   ulong uVar12;
   void *pvVar13;
   byte bVar14;
   byte *pbVar16;
   long unaff_RBX;
   size_t *psVar17;
   size_t *psVar18;
   uint *unaff_RBP;
   undefined4 *puVar19;
   undefined4 *puVar20;
   undefined1 *puVar21;
   undefined4 *puVar22;
   undefined1 *puVar23;
   char *pcVar24;
   char *pcVar25;
   size_t __n_00;
   long lVar26;
   long in_FS_OFFSET;
   long in_GS_OFFSET;
   bool bVar27;
   bool bVar28;
   bool bVar29;
   byte bVar30;
   undefined1 auVar31[16];
   size_t local_48;
   undefined1 *local_40;
   byte bVar3;
   byte bVar4;
   undefined2 uVar15;
   bVar30 = 0;
   uVar12 = 0x7fffffffffffffff;
   psVar18 = &local_48;
   psVar17 = &local_48;
   __src = *(void**)this;
   uVar10 = *(long*)( this + 8 ) - (long)__src;
   bVar27 = uVar10 < 0x7fffffffffffffff;
   bVar28 = uVar10 == 0x7fffffffffffffff;
   if (bVar28) {
      pcVar24 = _LC0;
      auVar31 = std::__throw_length_error(_LC0);
      pbVar16 = auVar31._8_8_;
      pbVar11 = auVar31._0_8_;
      bVar14 = auVar31[8];
      uVar15 = auVar31._8_2_;
      if (bVar27 || bVar28) {
         pbVar11 = (byte*)CONCAT71(auVar31._1_7_, auVar31[0] | *pbVar11);
         *pbVar11 = *pbVar11 & auVar31[1];
         pbVar11 = (byte*)( ulong )((uint)pbVar11 & 0x25203a69);
         psVar17 = (size_t*)( ulong )(uint)(*(int*)pbVar11 * 0x20693625);
         code_r0x00102f42:pbVar11 = (byte*)( ulong )((uint)pbVar11 & 0x25206936);
         uVar12 = ( ulong )(uint)(*(int*)pbVar16 * 0x706f4e00);
         *(char*)( (long)unaff_RBP + 0x6e ) = *(char*)( (long)unaff_RBP + 0x6e ) + bVar14;
         code_r0x00102f51:pbVar1 = (byte*)( in_GS_OFFSET + unaff_RBX + 0x6f );
         bVar9 = *pbVar1;
         bVar2 = *pbVar1;
         *pbVar1 = *pbVar1 + bVar14;
         bVar3 = *pbVar1;
         bVar4 = *pbVar1;
      }
 else {
         param_2 = (undefined4*)( ulong ) * (uint*)( pcVar24 + (long)unaff_RBP * 2 + 0x72 );
         bVar27 = ( byte )((ulong)unaff_RBX >> 8) < *pbVar16;
         if (bVar27) {
            psVar18 = (size_t*)( ulong )(uint)(*(int*)( ulong )(auVar31._0_4_ & 0x25206936) * 0x20693625);
            pbVar11 = (byte*)( ulong )(auVar31._0_4_ & 0x6936);
            puVar19 = param_2 + (ulong)bVar30 * -2 + 1;
            out(*param_2, uVar15);
            LAB_00102f4e_1:psVar17 = (size_t*)( (long)psVar18 + -8 );
            *(uint**)( (long)psVar18 + -8 ) = unaff_RBP;
            param_2 = (undefined4*)( (long)puVar19 + (ulong)bVar30 * -2 + 1 );
            out(*(undefined1*)puVar19, uVar15);
            goto code_r0x00102f51;
         }

         if (!bVar27) {
            psVar17 = (size_t*)( ulong )(uint)(*(int*)pbVar11 * 0x20693625);
            goto code_r0x00102f42;
         }

         puVar19 = param_2;
         if (bVar27) goto LAB_00102f4e_1;
         pbVar1 = (byte*)( (long)unaff_RBP + in_GS_OFFSET + 0x6f );
         bVar9 = *pbVar1;
         *pbVar1 = *pbVar1 + (byte)uVar12;
         if (CARRY1(bVar9, (byte)uVar12)) {
            pcVar24[99] = pcVar24[99] & ( byte )(uVar12 >> 8);
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         pbVar1 = (byte*)( unaff_RBX + 0x6f );
         bVar9 = *pbVar1;
         bVar2 = *pbVar1;
         *pbVar1 = *pbVar1 + bVar14;
         bVar3 = *pbVar1;
         bVar4 = *pbVar1;
      }

      bVar29 = (char)bVar3 < '\0';
      bVar28 = bVar4 == 0;
      bVar27 = CARRY1(bVar9, bVar14);
      bVar9 = (byte)pbVar11;
      pcVar25 = pcVar24;
      if (bVar28) {
         psVar17 = (size_t*)( ulong ) * (uint*)( (long)unaff_RBP + 0x43 );
         out(*param_2, uVar15);
         puVar19 = (undefined4*)( (long)( param_2 + (ulong)bVar30 * -2 + 1 ) + (ulong)bVar30 * -2 + 1 );
         out(*(undefined1*)( param_2 + (ulong)bVar30 * -2 + 1 ), uVar15);
         if (bVar28) {
            puVar20 = puVar19 + (ulong)bVar30 * -2 + 1;
            out(*puVar19, uVar15);
            LAB_00102fc8:out(*puVar20, uVar15);
            pcVar25 = pcVar24 + ( (ulong)bVar30 * -2 + 1 ) * 4;
            uVar6 = in(uVar15);
            *(undefined4*)pcVar24 = uVar6;
            goto LAB_00102fcb;
         }

         puVar20 = (undefined4*)( (long)puVar19 + (ulong)bVar30 * -2 + 1 );
         out(*(undefined1*)puVar19, uVar15);
         if (!bVar28) goto LAB_00102fc8;
         pbVar1 = (byte*)( in_FS_OFFSET + unaff_RBX + 0x6f );
         bVar2 = *pbVar1;
         *pbVar1 = *pbVar1 + bVar14;
         bVar3 = *pbVar1;
         bVar4 = *pbVar1;
         if (bVar4 != 0) goto LAB_00102fdb;
         psVar17 = (size_t*)( ( ulong ) * unaff_RBP - 8 );
         *(long*)( ( ulong ) * unaff_RBP - 8 ) = unaff_RBX;
         puVar19 = puVar20 + (ulong)bVar30 * -2 + 1;
         out(*puVar20, uVar15);
         puVar20 = puVar19;
         if (bVar4 != 0) goto LAB_00102fe2;
         psVar17 = (size_t*)( ulong ) * (uint*)( (long)unaff_RBP + 0x45 );
         if (-1 < (char)bVar3) {
            puVar20 = (undefined4*)( (long)puVar19 + (ulong)bVar30 * -2 + 1 );
            out(*(undefined1*)puVar19, uVar15);
            if (CARRY1(bVar2, bVar14)) {
               out(*puVar20, uVar15);
               out(*(undefined1*)( puVar20 + (ulong)bVar30 * -2 + 1 ), uVar15);
               pcVar25 = (char*)( (long)( puVar20 + (ulong)bVar30 * -2 + 1 ) + (ulong)bVar30 * -2 + 0x62 );
               *pcVar25 = *pcVar25 + (char)uVar12;
               uVar6 = in(uVar15);
               *(undefined4*)pcVar24 = uVar6;
               pcVar25 = (char*)( (long)unaff_RBP + in_GS_OFFSET + 0x65 );
               *pcVar25 = *pcVar25 + (char)uVar12;
               uVar6 = in(uVar15);
               *(undefined4*)( pcVar24 + ( (ulong)bVar30 * -2 + 1 ) * 4 ) = uVar6;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }

            goto LAB_00102fe2;
         }

         uVar7 = *(uint*)( (long)unaff_RBP + in_GS_OFFSET + 0x74 );
         code_r0x00102fed:puVar20 = (undefined4*)(ulong)uVar7;
         unaff_RBP = (uint*)( ulong )(uint)(*(int*)( pcVar24 + 0x6e ) * 0x65646f4d);
         pbVar1 = (byte*)( unaff_RBX + 0x61 );
         bVar27 = CARRY1(*pbVar1, bVar9);
         bVar14 = *pbVar1;
         *pbVar1 = *pbVar1 + bVar9;
         bVar29 = (char)*pbVar1 < '\0';
         if (!SCARRY1(bVar14,bVar9)) {
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         uVar6 = in(uVar15);
         *(undefined4*)pcVar24 = uVar6;
         if (!SCARRY1(bVar14,bVar9)) {
            uVar6 = in(uVar15);
            *(undefined4*)( pcVar24 + ( (ulong)bVar30 * -2 + 1 ) * 4 ) = uVar6;
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

      }
 else {
         LAB_00102fcb:if (SCARRY1(bVar2, bVar14)) goto LAB_00103032;
         puVar19 = (undefined4*)( ulong ) * (uint*)( (long)pbVar11 * 2 + 0x4d );
         uVar6 = in(uVar15);
         *(undefined4*)pcVar25 = uVar6;
         puVar22 = puVar19 + (ulong)bVar30 * -2 + 1;
         out(*puVar19, uVar15);
         if (bVar27) {
            puVar21 = (undefined1*)psVar17;
            puVar20 = puVar22;
            if (SCARRY1(bVar2, bVar14)) {
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }

         }
 else {
            puVar20 = puVar22 + (ulong)bVar30 * -2 + 1;
            out(*puVar22, uVar15);
            pcVar24 = pcVar25 + ( (ulong)bVar30 * -2 + 1 ) * 4 + (ulong)bVar30 * -2 + 1;
            cVar5 = in(uVar15);
            pcVar25[( (ulong)bVar30 * -2 + 1 ) * 4] = cVar5;
            LAB_00102fdb:pbVar1 = (byte*)( (long)unaff_RBP + 0x6e );
            bVar27 = CARRY1(*pbVar1, bVar9);
            *pbVar1 = *pbVar1 + bVar9;
            bVar29 = (char)*pbVar1 < '\0';
            puVar21 = (undefined1*)psVar17;
            if (*pbVar1 != 0) {
               pcVar25 = pcVar24;
               if (!bVar29) {
                  LAB_00103032:pcVar24 = (char*)( uVar12 + 0x70 + (long)pcVar25 * 2 );
                  *pcVar24 = *pcVar24 + bVar14;
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }

               LAB_00102fe2:out(*puVar20, uVar15);
               uVar7 = *(uint*)( ( ulong )(uint)(puVar20[(ulong)bVar30 * -2 + 0x1e] * 0x65784500) + 0x74 );
               goto code_r0x00102fed;
            }

         }

         psVar17 = (size_t*)( puVar21 + -8 );
         *(undefined1**)( puVar21 + -8 ) = puVar21;
         if (bVar29) {
            *(long*)( puVar21 + -0x10 ) = unaff_RBX;
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

      }

      *(size_t**)( (long)psVar17 + -8 ) = psVar17;
      if (!bVar29) {
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      *(byte**)( (long)psVar17 + -0x10 ) = pbVar16;
      if (bVar27) {
         if (!bVar27) {
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         puVar22 = (undefined4*)( (long)puVar20 + (ulong)bVar30 * -2 + 1 );
         out(*(undefined1*)puVar20, uVar15);
         if (bVar27) {
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         puVar19 = puVar22 + (ulong)bVar30 * -2 + 1;
         out(*puVar22, uVar15);
      }
 else {
         pbVar16 = (byte*)( unaff_RBX + 0x6f );
         bVar14 = *pbVar16;
         *pbVar16 = *pbVar16 + bVar9;
         puVar21 = (undefined1*)( (long)puVar20 + (ulong)bVar30 * -2 + 1 );
         out(*(undefined1*)puVar20, uVar15);
         if (CARRY1(bVar14, bVar9)) {
            halt_baddata();
         }

         pcVar24 = puVar21 + 0x75;
         *pcVar24 = *pcVar24 + bVar9;
         out(*puVar21, uVar15);
         puVar21 = (undefined1*)( ulong ) * (uint*)( uVar12 + 0x6f + (long)unaff_RBP * 2 );
         puVar23 = puVar21 + (ulong)bVar30 * -2 + 1;
         out(*puVar21, uVar15);
         puVar23[0x75] = puVar23[0x75] + bVar9;
         out(*puVar23, uVar15);
         puVar19 = (undefined4*)( ulong ) * (uint*)( uVar12 + 0x6f + (long)unaff_RBP * 2 );
      }

      out(*(undefined1*)puVar19, uVar15);
      *(byte**)( (long)psVar17 + -0x18 ) = pbVar11;
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   local_48 = (long)param_2 - (long)__src;
   uVar12 = 1;
   if (uVar10 != 0) {
      uVar8 = uVar10 * 2;
      uVar12 = 0x7fffffffffffffff;
      if (uVar8 < 0x8000000000000000) {
         uVar12 = uVar8;
      }

      if (uVar8 < uVar10) {
         uVar12 = 0x7fffffffffffffff;
      }

   }

   __n_00 = *(long*)( this + 8 ) - (long)param_2;
   local_40 = param_3;
   __dest = operator_new(uVar12);
   __n = local_48;
   *(undefined1*)( (long)__dest + local_48 ) = *local_40;
   if ((long)local_48 < 1) {
      pvVar13 = (void*)( local_48 + 1 + (long)__dest );
      if (0 < (long)__n_00) {
         pvVar13 = memcpy(pvVar13, param_2, __n_00);
      }

      lVar26 = __n_00 + (long)pvVar13;
      if (__src == (void*)0x0) goto LAB_00102e2c;
      LAB_00102e81:uVar10 = *(long*)( this + 0x10 ) - (long)__src;
   }
 else {
      local_48 = local_48 + 1;
      memmove(__dest, __src, __n);
      if (0 < (long)__n_00) {
         pvVar13 = memcpy((void*)( local_48 + (long)__dest ), param_2, __n_00);
         lVar26 = __n_00 + (long)pvVar13;
         goto LAB_00102e81;
      }

      lVar26 = __n_00 + (long)( local_48 + (long)__dest );
      uVar10 = *(long*)( this + 0x10 ) - (long)__src;
   }

   operator_delete(__src, uVar10);
   LAB_00102e2c:*(void**)this = __dest;
   *(long*)( this + 8 ) = lVar26;
   *(ulong*)( this + 0x10 ) = (long)__dest + uVar12;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__unguarded_linear_insert<std::pair<SpvOp, unsigned long>*,
   __gnu_cxx::__ops::_Val_comp_iter<bool (*)(std::pair<SpvOp, unsigned long>, std::pair<SpvOp,
   unsigned long>)> >(std::pair<SpvOp, unsigned long>*, __gnu_cxx::__ops::_Val_comp_iter<bool
   (*)(std::pair<SpvOp, unsigned long>, std::pair<SpvOp, unsigned long>)>) */void std::__unguarded_linear_insert<std::pair<SpvOp,unsigned_long>*,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(undefined4 *param_1, code *param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   char cVar3;
   undefined4 *puVar4;
   uVar1 = *param_1;
   uVar2 = *(undefined8*)( param_1 + 2 );
   puVar4 = param_1 + -4;
   while (true) {
      cVar3 = ( *param_2 )(uVar1, uVar2, *puVar4, *(undefined8*)( puVar4 + 2 ));
      if (cVar3 == '\0') break;
      puVar4[4] = *puVar4;
      *(undefined8*)( puVar4 + 6 ) = *(undefined8*)( puVar4 + 2 );
      puVar4 = puVar4 + -4;
   }
;
   *(undefined8*)( puVar4 + 6 ) = uVar2;
   puVar4[4] = uVar1;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__adjust_heap<std::pair<SpvOp, unsigned long>*, long, std::pair<SpvOp, unsigned long>,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(std::pair<SpvOp, unsigned long>, std::pair<SpvOp,
   unsigned long>)> >(std::pair<SpvOp, unsigned long>*, long, long, std::pair<SpvOp, unsigned long>,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(std::pair<SpvOp, unsigned long>, std::pair<SpvOp,
   unsigned long>)>) */void std::__adjust_heap<std::pair<SpvOp,unsigned_long>*,long,std::pair<SpvOp,unsigned_long>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(long param_1, long param_2, ulong param_3, undefined4 param_4, undefined8 param_5, code *param_6) {
   undefined8 uVar1;
   char cVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   lVar6 = (long)( param_3 - 1 ) / 2;
   lVar8 = param_2;
   if (param_2 < lVar6) {
      do {
         lVar7 = ( lVar8 + 1 ) * 2;
         lVar3 = ( lVar8 + 1 ) * 0x20;
         puVar4 = (undefined4*)( param_1 + lVar3 );
         cVar2 = ( *param_6 )(*puVar4, *(undefined8*)( puVar4 + 2 ), *(undefined4*)( param_1 + -0x10 + lVar3 ), *(undefined8*)( param_1 + -8 + lVar3 ));
         if (cVar2 != '\0') {
            lVar7 = lVar7 + -1;
            puVar4 = (undefined4*)( param_1 + lVar7 * 0x10 );
         }

         puVar5 = (undefined4*)( lVar8 * 0x10 + param_1 );
         *puVar5 = *puVar4;
         *(undefined8*)( puVar5 + 2 ) = *(undefined8*)( puVar4 + 2 );
         lVar8 = lVar7;
      }
 while ( lVar7 < lVar6 );
      if (( param_3 & 1 ) == 0) goto LAB_001044d0;
   }
 else {
      puVar4 = (undefined4*)( param_1 + param_2 * 0x10 );
      lVar7 = param_2;
      if (( param_3 & 1 ) != 0) goto LAB_00104496;
      LAB_001044d0:if ((long)( param_3 - 2 ) / 2 == lVar7) {
         lVar8 = lVar7 + 1;
         lVar7 = lVar7 + lVar8;
         puVar5 = (undefined4*)( param_1 + -0x10 + lVar8 * 0x20 );
         uVar1 = *(undefined8*)( puVar5 + 2 );
         *puVar4 = *puVar5;
         *(undefined8*)( puVar4 + 2 ) = uVar1;
         puVar4 = (undefined4*)( param_1 + lVar7 * 0x10 );
      }

   }

   while (param_2 < lVar7) {
      lVar8 = ( lVar7 + -1 ) / 2;
      puVar4 = (undefined4*)( lVar7 * 0x10 + param_1 );
      puVar5 = (undefined4*)( lVar8 * 0x10 + param_1 );
      cVar2 = ( *param_6 )(*puVar5, *(undefined8*)( puVar5 + 2 ), param_4, param_5);
      if (cVar2 == '\0') break;
      *puVar4 = *puVar5;
      *(undefined8*)( puVar4 + 2 ) = *(undefined8*)( puVar5 + 2 );
      lVar7 = lVar8;
      puVar4 = puVar5;
   }
;
   LAB_00104496:*puVar4 = param_4;
   *(undefined8*)( puVar4 + 2 ) = param_5;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__introsort_loop<std::pair<SpvOp, unsigned long>*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(std::pair<SpvOp, unsigned long>, std::pair<SpvOp,
   unsigned long>)> >(std::pair<SpvOp, unsigned long>*, std::pair<SpvOp, unsigned long>*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(std::pair<SpvOp, unsigned long>, std::pair<SpvOp,
   unsigned long>)>) */void std::__introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(undefined4 *param_1, undefined8 *param_2, long param_3, code *param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   long lVar12;
   long local_40;
   lVar7 = (long)param_2 - (long)param_1;
   if (0x100 < lVar7) {
      puVar8 = (undefined8*)( param_1 + 4 );
      puVar11 = param_2;
      local_40 = param_3;
      if (param_3 != 0) {
         do {
            local_40 = local_40 + -1;
            puVar1 = param_1 + ( lVar7 >> 5 ) * 4;
            cVar5 = ( *param_4 )(*(undefined4*)puVar8, *(undefined8*)( param_1 + 6 ), *puVar1, *(undefined8*)( puVar1 + 2 ));
            param_2 = puVar8;
            puVar9 = puVar11;
            if (cVar5 == '\0') {
               cVar5 = ( *param_4 )(*(undefined4*)puVar8, *(undefined8*)( param_1 + 6 ), *(undefined4*)( puVar11 + -2 ), puVar11[-1]);
               if (cVar5 == '\0') {
                  cVar5 = ( *param_4 )(*puVar1, *(undefined8*)( puVar1 + 2 ), *(undefined4*)( puVar11 + -2 ), puVar11[-1]);
                  uVar6 = *param_1;
                  if (cVar5 != '\0') goto LAB_00104753;
                  goto LAB_001045bc;
               }

               uVar6 = *param_1;
               LAB_0010468a:uVar2 = param_1[4];
               param_1[4] = uVar6;
               *param_1 = uVar2;
               uVar3 = *(undefined8*)( param_1 + 6 );
               *(undefined8*)( param_1 + 6 ) = *(undefined8*)( param_1 + 2 );
               *(undefined8*)( param_1 + 2 ) = uVar3;
            }
 else {
               cVar5 = ( *param_4 )(*puVar1, *(undefined8*)( puVar1 + 2 ));
               if (cVar5 == '\0') {
                  cVar5 = ( *param_4 )(*(undefined4*)puVar8, *(undefined8*)( param_1 + 6 ), *(undefined4*)( puVar11 + -2 ), puVar11[-1]);
                  uVar6 = *param_1;
                  if (cVar5 == '\0') goto LAB_0010468a;
                  LAB_00104753:*param_1 = *(undefined4*)( puVar11 + -2 );
                  *(undefined4*)( puVar11 + -2 ) = uVar6;
                  uVar3 = *(undefined8*)( param_1 + 2 );
                  *(undefined8*)( param_1 + 2 ) = puVar11[-1];
                  puVar11[-1] = uVar3;
               }
 else {
                  uVar6 = *param_1;
                  LAB_001045bc:*param_1 = *puVar1;
                  *puVar1 = uVar6;
                  uVar3 = *(undefined8*)( param_1 + 2 );
                  *(undefined8*)( param_1 + 2 ) = *(undefined8*)( puVar1 + 2 );
                  *(undefined8*)( puVar1 + 2 ) = uVar3;
               }

            }

            while (true) {
               while (cVar5 = ( *param_4 )(*(undefined4*)param_2, param_2[1], *param_1, *(undefined8*)( param_1 + 2 )),cVar5 != '\0') {
                  param_2 = param_2 + 2;
               }
;
               do {
                  puVar10 = puVar9;
                  puVar9 = puVar10 + -2;
                  cVar5 = ( *param_4 )(*param_1, *(undefined8*)( param_1 + 2 ), *(undefined4*)puVar9, puVar10[-1]);
               }
 while ( cVar5 != '\0' );
               if (puVar9 <= param_2) break;
               uVar6 = *(undefined4*)param_2;
               *(undefined4*)param_2 = *(undefined4*)puVar9;
               *(undefined4*)puVar9 = uVar6;
               uVar3 = param_2[1];
               param_2[1] = puVar10[-1];
               puVar10[-1] = uVar3;
               param_2 = param_2 + 2;
            }
;
            __introsort_loop<std::pair<SpvOp,unsigned_long>*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(param_2, puVar11, local_40, param_4);
            lVar7 = (long)param_2 - (long)param_1;
            if (lVar7 < 0x101) {
               return;
            }

            puVar11 = param_2;
         }
 while ( local_40 != 0 );
      }

      for (lVar12 = ( lVar7 >> 4 ) + -2 >> 1; __adjust_heap<std::pair<SpvOp,unsigned_long>*,long,std::pair<SpvOp,unsigned_long>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(param_1, lVar12, lVar7 >> 4, *(undefined8*)( param_1 + lVar12 * 4 ), *(undefined8*)( param_1 + lVar12 * 4 + 2 ), param_4),lVar12 != 0; lVar12 = lVar12 + -1) {}
      do {
         puVar8 = param_2 + -2;
         uVar3 = *puVar8;
         uVar4 = param_2[-1];
         *(undefined4*)puVar8 = *param_1;
         param_2[-1] = *(undefined8*)( param_1 + 2 );
         __adjust_heap<std::pair<SpvOp,unsigned_long>*,long,std::pair<SpvOp,unsigned_long>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(std::pair<SpvOp,unsigned_long>, std::pair<SpvOp,unsigned_long>)>>(param_1, 0, (long)puVar8 - (long)param_1 >> 4, uVar3, uVar4, param_4);
         param_2 = puVar8;
      }
 while ( 0x10 < (long)puVar8 - (long)param_1 );
   }

   return;
}

