undefined8 PACKET_get_quic_vlint(long *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   ulong uVar2;
   if (param_1[1] == 0) {
      return 0;
   }

   uVar2 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
   if ((ulong)param_1[1] < uVar2) {
      return 0;
   }

   uVar1 = ossl_quic_vlint_decode_unchecked();
   *param_2 = uVar1;
   *param_1 = *param_1 + uVar2;
   param_1[1] = param_1[1] - uVar2;
   return 1;
}
void ossl_quic_hdr_protector_cleanup(long param_1) {
   EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ));
   *(undefined8*)( param_1 + 0x10 ) = 0;
   EVP_CIPHER_free(*(undefined8*)( param_1 + 0x18 ));
   *(undefined8*)( param_1 + 0x18 ) = 0;
   return;
}
undefined8 ossl_quic_hdr_protector_init(undefined8 *param_1, undefined8 param_2, undefined8 param_3, int param_4, uchar *param_5, long param_6) {
   int iVar1;
   EVP_CIPHER_CTX *pEVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   if (param_4 == 2) {
      pEVar2 = EVP_CIPHER_CTX_new();
      pcVar5 = "AES-256-ECB";
      param_1[2] = pEVar2;
   }
 else {
      if (param_4 == 3) {
         pcVar5 = "ChaCha20";
      }
 else {
         if (param_4 != 1) {
            ERR_new();
            ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x22, "ossl_quic_hdr_protector_init");
            ERR_set_error(0x14, 0x8010c, 0);
            return 0;
         }

         pcVar5 = "AES-128-ECB";
      }

      pEVar2 = EVP_CIPHER_CTX_new();
      param_1[2] = pEVar2;
   }

   if (pEVar2 == (EVP_CIPHER_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x28, "ossl_quic_hdr_protector_init");
      ERR_set_error(0x14, 0x80006, 0);
   }
 else {
      lVar3 = EVP_CIPHER_fetch(param_2, pcVar5, param_3);
      param_1[3] = lVar3;
      if (( lVar3 == 0 ) || ( iVar1 = iVar1 != param_6 )) {
         ERR_new();
         uVar4 = 0x2f;
      }
 else {
         iVar1 = EVP_CipherInit_ex((EVP_CIPHER_CTX*)param_1[2], (EVP_CIPHER*)param_1[3], (ENGINE*)0x0, param_5, (uchar*)0x0, 1);
         if (iVar1 != 0) {
            *param_1 = param_2;
            param_1[1] = param_3;
            *(int*)( param_1 + 4 ) = param_4;
            return 1;
         }

         ERR_new();
         uVar4 = 0x35;
      }

      ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar4, "ossl_quic_hdr_protector_init");
      ERR_set_error(0x14, 0x80006, 0);
      ossl_quic_hdr_protector_cleanup(param_1);
   }

   return 0;
}
undefined8 ossl_quic_hdr_protector_decrypt_fields(long param_1, uchar *param_2, ulong param_3, byte *param_4, uint *param_5) {
   byte bVar1;
   int iVar2;
   byte bVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   int local_54;
   byte local_50;
   byte bStack_4f;
   byte bStack_4e;
   byte bStack_4d;
   undefined1 uStack_4c;
   uchar local_48[4];
   undefined1 local_44;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_54 = 0;
   if (*(int*)( param_1 + 0x20 ) - 1U < 2) {
      if (0xf < param_3) {
         iVar2 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0, 1);
         if (iVar2 != 0) {
            iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), local_48, &local_54, param_2, 0x10);
            if (iVar2 != 0) {
               local_50 = local_48[0];
               bStack_4f = local_48[1];
               bStack_4e = local_48[2];
               bStack_4d = local_48[3];
               uStack_4c = local_44;
               LAB_0010039f:if ((char)*param_4 < '\0') {
                  bVar1 = local_50 & 0xf;
               }
 else {
                  bVar1 = local_50 & 0x1f;
               }

               bVar1 = *param_4 ^ bVar1;
               bVar3 = bVar1 & 3;
               *param_4 = bVar1;
               if (bVar3 == 3) {
                  *param_5 = *param_5 ^ CONCAT13(uStack_4c, CONCAT12(bStack_4d, CONCAT11(bStack_4e, bStack_4f)));
               }
 else {
                  *(byte*)param_5 = ( byte ) * param_5 ^ bStack_4f;
                  if (( bVar3 != 0 ) && ( *(byte*)( (long)param_5 + 1 ) = bVar3 == 2 )) {
                     *(byte*)( (long)param_5 + 2 ) = *(byte*)( (long)param_5 + 2 ) ^ bStack_4d;
                  }

               }

               uVar4 = 1;
               goto LAB_0010031a;
            }

         }

         ERR_new();
         uVar4 = 0x5e;
         goto LAB_001002f9;
      }

      ERR_new();
      uVar4 = 0x58;
      LAB_00100499:ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar4, "hdr_generate_mask");
      ERR_set_error(0x14, 0x80106, 0);
   }
 else if (*(int*)( param_1 + 0x20 ) == 3) {
      if (param_3 < 0x10) {
         ERR_new();
         uVar4 = 0x66;
         goto LAB_00100499;
      }

      iVar2 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, param_2, 1);
      if (iVar2 != 0) {
         iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), &local_50, &local_54, "", 5);
         if (iVar2 != 0) goto LAB_0010039f;
      }

      ERR_new();
      uVar4 = 0x6d;
      LAB_001002f9:ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar4, "hdr_generate_mask");
      ERR_set_error(0x14, 0x80006, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x71, "hdr_generate_mask");
      ERR_set_error(0x14, 0xc0103, 0);
   }

   uVar4 = 0;
   LAB_0010031a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ossl_quic_hdr_protector_decrypt(undefined8 param_1, undefined8 *param_2) {
   ossl_quic_hdr_protector_decrypt_fields(param_1, param_2[1], param_2[2], *param_2, param_2[3]);
   return;
}
undefined8 ossl_quic_hdr_protector_encrypt_fields(long param_1, uchar *param_2, ulong param_3, byte *param_4, uint *param_5) {
   byte bVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   int local_54;
   byte local_50;
   byte bStack_4f;
   byte bStack_4e;
   byte bStack_4d;
   undefined1 uStack_4c;
   uchar local_48[4];
   undefined1 local_44;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_54 = 0;
   if (*(int*)( param_1 + 0x20 ) - 1U < 2) {
      if (0xf < param_3) {
         iVar2 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0, 1);
         if (iVar2 != 0) {
            iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), local_48, &local_54, param_2, 0x10);
            if (iVar2 != 0) {
               local_50 = local_48[0];
               bStack_4f = local_48[1];
               bStack_4e = local_48[2];
               bStack_4d = local_48[3];
               uStack_4c = local_44;
               LAB_00100650:bVar1 = *param_4 & 3;
               if (bVar1 == 3) {
                  *param_5 = *param_5 ^ CONCAT13(uStack_4c, CONCAT12(bStack_4d, CONCAT11(bStack_4e, bStack_4f)));
               }
 else {
                  *(byte*)param_5 = ( byte ) * param_5 ^ bStack_4f;
                  if (( bVar1 != 0 ) && ( *(byte*)( (long)param_5 + 1 ) = bVar1 == 2 )) {
                     *(byte*)( (long)param_5 + 2 ) = *(byte*)( (long)param_5 + 2 ) ^ bStack_4d;
                  }

               }

               *param_4 = ( (char)*param_4 >> 7 & 0xf0U ) + 0x1f & local_50 ^ *param_4;
               uVar3 = 1;
               goto LAB_001005d0;
            }

         }

         ERR_new();
         uVar3 = 0x5e;
         goto LAB_001005aa;
      }

      ERR_new();
      uVar3 = 0x58;
      LAB_00100701:ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar3, "hdr_generate_mask");
      ERR_set_error(0x14, 0x80106, 0);
   }
 else if (*(int*)( param_1 + 0x20 ) == 3) {
      if (param_3 < 0x10) {
         ERR_new();
         uVar3 = 0x66;
         goto LAB_00100701;
      }

      iVar2 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, param_2, 1);
      if (iVar2 != 0) {
         iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), &local_50, &local_54, "", 5);
         if (iVar2 != 0) goto LAB_00100650;
      }

      ERR_new();
      uVar3 = 0x6d;
      LAB_001005aa:ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar3, "hdr_generate_mask");
      ERR_set_error(0x14, 0x80006, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x71, "hdr_generate_mask");
      ERR_set_error(0x14, 0xc0103, 0);
   }

   uVar3 = 0;
   LAB_001005d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ossl_quic_hdr_protector_encrypt(undefined8 param_1, undefined8 *param_2) {
   ossl_quic_hdr_protector_encrypt_fields(param_1, param_2[1], param_2[2], *param_2, param_2[3]);
   return;
}
undefined8 ossl_quic_wire_decode_pkt_hdr(long *param_1, ulong param_2, uint param_3, int param_4, uint *param_5, long *param_6, ulong *param_7) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   char cVar4;
   int iVar5;
   undefined8 uVar6;
   uint uVar7;
   long lVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   ulong uVar14;
   char *pcVar15;
   ushort *puVar16;
   byte *pbVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   byte bVar21;
   uint local_60;
   ulong local_48;
   long local_40;
   bVar21 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = param_1[1];
   if (param_7 != (ulong*)0x0) {
      *param_7 = 1;
   }

   if (param_6 != (long*)0x0) {
      lVar13 = *param_1;
      param_6[1] = 0;
      param_6[2] = 0;
      *param_6 = lVar13;
      param_6[3] = 0;
   }

   if (( uVar9 < 7 ) || ( lVar13 = lVar13 == 0 )) goto LAB_001008e0;
   pbVar17 = (byte*)*param_1;
   uVar20 = *param_5;
   bVar1 = *pbVar17;
   uVar12 = (ulong)bVar1;
   param_1[1] = lVar13 - 1U;
   *param_1 = (long)( pbVar17 + 1 );
   *param_5 = ( param_3 & 1 ) << 0xe | uVar20 & 0xffc0bfff;
   if ((char)bVar1 < '\0') {
      if (3 < lVar13 - 1U) {
         uVar20 = *(uint*)( pbVar17 + 1 );
         uVar20 = uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18;
         *param_1 = (long)( pbVar17 + 5 );
         param_1[1] = lVar13 + -5;
         if (( ( uVar20 == 0 ) || ( ( bVar1 & 0x40 ) != 0 ) ) && ( lVar13 + -5 != 0 )) {
            bVar2 = pbVar17[5];
            param_1[1] = lVar13 - 6U;
            uVar19 = (ulong)bVar2;
            *param_1 = (long)( pbVar17 + 6 );
            if (( bVar2 < 0x15 ) && ( uVar19 <= lVar13 - 6U )) {
               uVar7 = (uint)bVar2;
               if (uVar7 < 8) {
                  if (( bVar2 & 4 ) == 0) {
                     if (( uVar7 != 0 ) && ( *(byte*)( (long)param_5 + 9 ) = pbVar17[6](bVar2 & 2) != 0 )) {
                        *(undefined2*)( (long)param_5 + uVar19 + 7 ) = *(undefined2*)( pbVar17 + uVar19 + 4 );
                     }

                  }
 else {
                     *(undefined4*)( (long)param_5 + 9 ) = *(undefined4*)( pbVar17 + 6 );
                     *(undefined4*)( (long)param_5 + uVar19 + 5 ) = *(undefined4*)( pbVar17 + uVar19 + 2 );
                  }

               }
 else {
                  *(undefined8*)( (long)param_5 + 9 ) = *(undefined8*)( pbVar17 + 6 );
                  *(undefined8*)( (long)param_5 + uVar19 + 1 ) = *(undefined8*)( pbVar17 + ( uVar19 - 2 ) );
                  uVar14 = ( ulong )((long)param_5 + 0x11U) & 0xfffffffffffffff8;
                  pcVar15 = (char*)( (long)param_5 + ( 9 - uVar14 ) );
                  uVar7 = (int)pcVar15 + uVar7 & 0xfffffff8;
                  if (7 < uVar7) {
                     uVar12 = 0;
                     do {
                        uVar18 = (int)uVar12 + 8;
                        *(undefined8*)( uVar14 + uVar12 ) = *(undefined8*)( pbVar17 + 6 + ( uVar12 - (long)pcVar15 ) );
                        uVar12 = (ulong)uVar18;
                     }
 while ( uVar18 < uVar7 );
                     uVar12 = (ulong)(uint)bVar1;
                  }

               }

               pbVar17 = (byte*)( *param_1 + uVar19 );
               lVar13 = param_1[1] - uVar19;
               *param_1 = (long)pbVar17;
               param_1[1] = lVar13;
               if (lVar13 != 0) {
                  bVar3 = *pbVar17;
                  uVar19 = (ulong)bVar3;
                  *param_1 = (long)( pbVar17 + 1 );
                  param_1[1] = lVar13 - 1U;
                  if (( bVar3 < 0x15 ) && ( uVar19 <= lVar13 - 1U )) {
                     local_60 = (uint)bVar3;
                     if (local_60 < 8) {
                        if (( bVar3 & 4 ) == 0) {
                           if (( local_60 != 0 ) && ( *(byte*)( (long)param_5 + 0x1e ) = pbVar17[1](bVar3 & 2) != 0 )) {
                              *(undefined2*)( (long)param_5 + uVar19 + 0x1c ) = *(undefined2*)( pbVar17 + ( uVar19 - 1 ) );
                           }

                        }
 else {
                           *(undefined4*)( (long)param_5 + 0x1e ) = *(undefined4*)( pbVar17 + 1 );
                           *(undefined4*)( (long)param_5 + uVar19 + 0x1a ) = *(undefined4*)( pbVar17 + ( uVar19 - 3 ) );
                        }

                     }
 else {
                        *(undefined8*)( (long)param_5 + 0x1e ) = *(undefined8*)( pbVar17 + 1 );
                        *(undefined8*)( (long)param_5 + uVar19 + 0x16 ) = *(undefined8*)( pbVar17 + ( uVar19 - 7 ) );
                        uVar14 = ( ulong )((long)param_5 + 0x26U) & 0xfffffffffffffff8;
                        pcVar15 = (char*)( (long)param_5 + ( 0x1e - uVar14 ) );
                        local_60 = (int)pcVar15 + local_60;
                        if (7 < ( local_60 & 0xfffffff8 )) {
                           local_60 = local_60 & 0xfffffff8;
                           uVar7 = 0;
                           do {
                              uVar11 = (ulong)uVar7;
                              uVar7 = uVar7 + 8;
                              *(undefined8*)( uVar14 + uVar11 ) = *(undefined8*)( pbVar17 + 1 + ( uVar11 - (long)pcVar15 ) );
                           }
 while ( uVar7 < local_60 );
                        }

                     }

                     lVar13 = param_1[1];
                     lVar10 = *param_1;
                     uVar14 = lVar13 - uVar19;
                     *param_1 = lVar10 + uVar19;
                     param_1[1] = uVar14;
                     param_5[1] = uVar20;
                     *(byte*)( param_5 + 2 ) = bVar2;
                     *(byte*)( (long)param_5 + 0x1d ) = bVar3;
                     if (uVar20 == 0) {
                        *(ulong*)( param_5 + 0x14 ) = lVar10 + uVar19;
                        *(ulong*)( param_5 + 0x12 ) = uVar14;
                        *(ushort*)param_5 = ( ushort )(bVar1 >> 6) << 0xf | 6 | ( ushort ) * param_5 & 0x7f00;
                        if (( uVar14 & 3 ) == 0) {
                           *(byte*)( (long)param_5 + 1 ) = *(byte*)( (long)param_5 + 1 ) & 0x80;
                           ( (ushort*)( (long)param_5 + 0x32 ) )[0] = 0;
                           ( (ushort*)( (long)param_5 + 0x32 ) )[1] = 0;
                           uVar9 = param_1[1];
                           for (int i = 0; i < 4; i++) {
                              param_5[( i + 14 )] = 0;
                           }

                           if (uVar14 <= uVar9) {
                              *param_1 = *param_1 + uVar14;
                              param_1[1] = ( uVar9 - lVar13 ) + uVar19;
                              joined_r0x00100f7d:if (param_6 != (long*)0x0) {
                                 param_6[3] = 0;
                              }

                              LAB_001009b1:if (param_7 != (ulong*)0x0) {
                                 *param_7 = *param_7 & 0xfffffffffffffffe;
                              }

                              uVar6 = 1;
                              goto LAB_001008e2;
                           }

                        }

                     }
 else if (uVar20 == 1) {
                        if (0x14 < uVar9) {
                           uVar20 = ( uint )(uVar12 >> 4) & 3;
                           if (uVar20 == 2) {
                              cVar4 = '\x03';
                              LAB_00100eee:*(char*)param_5 = cVar4;
                              *(byte*)( (long)param_5 + 1 ) = *(byte*)( (long)param_5 + 1 ) & 0x40 | 0x80;
                              for (int i = 0; i < 4; i++) {
                                 param_5[( i + 14 )] = 0;
                              }

                           }
 else {
                              if (uVar20 == 3) {
                                 cVar4 = '\x04';
                                 goto LAB_00100eee;
                              }

                              if (uVar20 == 1) {
                                 cVar4 = '\x02';
                                 goto LAB_00100eee;
                              }

                              *(ushort*)param_5 = ( ushort ) * param_5 & 0x4000 | 0x8001;
                              iVar5 = PACKET_get_quic_vlint(param_1, &local_48);
                              if (( iVar5 == 0 ) || ( uVar9 = uVar9 < local_48 )) goto LAB_001008e0;
                              lVar13 = *param_1;
                              *(long*)( param_5 + 0xe ) = lVar13;
                              *param_1 = lVar13 + local_48;
                              param_1[1] = uVar9 - local_48;
                              *(ulong*)( param_5 + 0x10 ) = local_48;
                              if (local_48 == 0) {
                                 param_5[0xe] = 0;
                                 param_5[0xf] = 0;
                              }

                           }

                           if ((char)*param_5 == '\x04') {
                              lVar13 = *param_1;
                              uVar9 = param_1[1];
                              ( (ushort*)( (long)param_5 + 0x32 ) )[0] = 0;
                              ( (ushort*)( (long)param_5 + 0x32 ) )[1] = 0;
                              *(long*)( param_5 + 0x14 ) = lVar13;
                              *(ulong*)( param_5 + 0x12 ) = uVar9;
                              *param_5 = ( bVar1 & 0xf ) << 0x10 | *param_5 & 0xfff0bfff;
                              if (uVar9 <= (ulong)param_1[1]) {
                                 *param_1 = *param_1 + uVar9;
                                 param_1[1] = param_1[1] - uVar9;
                                 goto joined_r0x00100f7d;
                              }

                           }
 else {
                              if (param_3 == 0) {
                                 iVar5 = ( bVar1 & 3 ) + 1;
                                 uVar20 = ( uint )(uVar12 >> 2) & 3;
                              }
 else {
                                 iVar5 = 0;
                                 uVar20 = 0;
                              }

                              *param_5 = uVar20 << 0x14 | iVar5 << 10 | *param_5 & 0xffcfc3ff;
                              iVar5 = PACKET_get_quic_vlint(param_1);
                              if (( ( iVar5 != 0 ) && ( 3 < local_48 ) ) && ( ( param_4 != 0 || ( local_48 <= (ulong)param_1[1] ) ) )) {
                                 lVar13 = *param_1;
                                 puVar16 = (ushort*)( (long)param_5 + 0x32 );
                                 ( (ushort*)( (long)param_5 + 0x32 ) )[0] = 0;
                                 ( (ushort*)( (long)param_5 + 0x32 ) )[1] = 0;
                                 if (param_3 == 0) {
                                    pcVar15 = (char*)*param_1;
                                    uVar12 = ( ulong )(*(byte*)( (long)param_5 + 1 ) >> 2 & 0xf);
                                    uVar9 = uVar12;
                                    if (uVar12 <= (ulong)param_1[1]) {
                                       for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                                          *(char*)puVar16 = *pcVar15;
                                          pcVar15 = pcVar15 + (ulong)bVar21 * -2 + 1;
                                          puVar16 = (ushort*)( (long)puVar16 + (ulong)bVar21 * -2 + 1 );
                                       }

                                       local_48 = local_48 - uVar12;
                                       *param_1 = *param_1 + uVar12;
                                       uVar12 = param_1[1] - uVar12;
                                       goto LAB_00100e7e;
                                    }

                                 }
 else if (3 < (ulong)param_1[1]) {
                                    *param_1 = *param_1 + 4;
                                    uVar12 = param_1[1] - 4;
                                    local_48 = local_48 - 4;
                                    LAB_00100e7e:param_1[1] = uVar12;
                                    *(ulong*)( param_5 + 0x12 ) = local_48;
                                    if (param_4 == 0) {
                                       lVar10 = *param_1;
                                       *(long*)( param_5 + 0x14 ) = lVar10;
                                       if (uVar12 < local_48) goto LAB_001008e0;
                                       *param_1 = lVar10 + local_48;
                                       param_1[1] = uVar12 - local_48;
                                    }
 else {
                                       param_5[0x14] = 0;
                                       param_5[0x15] = 0;
                                    }

                                    LAB_0010098d:if (( param_6 != (long*)0x0 ) && ( param_6[3] = lVar13 != 0 )) {
                                       lVar10 = param_1[1];
                                       lVar8 = *param_1;
                                       param_6[1] = lVar13 + 4;
                                       param_6[2] = ( lVar10 + lVar8 ) - ( lVar13 + 4 );
                                    }

                                    goto LAB_001009b1;
                                 }

                              }

                           }

                        }

                     }
 else if (param_7 != (ulong*)0x0) {
                        *param_7 = *param_7 | 2;
                     }

                  }

               }

            }

         }

      }

   }
 else if (( param_2 < 0x15 ) && ( ( ( bVar1 >> 6 ^ 1 ) & 1 ) == 0 && 0x14 < uVar9 )) {
      uVar20 = 0;
      *(ushort*)param_5 = ( ushort )(( bVar1 >> 5 & 1 ) << 8) | 0x8005 | ( ushort ) * param_5 & 0x7e00;
      bVar21 = 0;
      if (param_3 == 0) {
         bVar21 = bVar1 >> 2 & 1;
         uVar20 = ( bVar1 & 3 ) + 1;
         *(byte*)( (long)param_5 + 2 ) = *(byte*)( (long)param_5 + 2 ) & 0xcf | ( byte )(( bVar1 >> 3 & 3 ) << 4);
      }

      *(byte*)( (long)param_5 + 1 ) = *(byte*)( (long)param_5 + 1 ) & 0xc1 | (char)uVar20 * '\x04' | bVar21 * '\x02';
      if (param_2 <= (ulong)param_1[1]) {
         memcpy((char*)( (long)param_5 + 9 ), (void*)*param_1, param_2);
         *param_1 = *param_1 + param_2;
         param_1[1] = param_1[1] - param_2;
         *(char*)( param_5 + 2 ) = (char)param_2;
         ( (ushort*)( (long)param_5 + 0x32 ) )[0] = 0;
         ( (ushort*)( (long)param_5 + 0x32 ) )[1] = 0;
         lVar13 = *param_1;
         if (param_3 == 0) {
            uVar9 = (ulong)uVar20;
            if (uVar9 <= (ulong)param_1[1]) {
               lVar10 = lVar13;
               if (uVar20 != 0) {
                  uVar7 = 0;
                  do {
                     uVar12 = (ulong)uVar7;
                     uVar7 = uVar7 + 1;
                     *(char*)( (long)param_5 + uVar12 + 0x32 ) = *(char*)( lVar13 + uVar12 );
                  }
 while ( uVar7 < uVar20 );
                  lVar10 = *param_1;
               }

               lVar10 = lVar10 + uVar9;
               lVar8 = param_1[1] - uVar9;
               goto LAB_00100954;
            }

         }
 else if (3 < (ulong)param_1[1]) {
            lVar10 = lVar13 + 4;
            lVar8 = param_1[1] - 4;
            LAB_00100954:*(long*)( param_5 + 0x14 ) = lVar10;
            param_5[1] = 0;
            *(char*)( (long)param_5 + 0x1d ) = '\0';
            for (int i = 0; i < 4; i++) {
               param_5[( i + 14 )] = 0;
            }

            *(long*)( param_5 + 0x12 ) = lVar8;
            *param_1 = lVar10 + lVar8;
            param_1[1] = 0;
            goto LAB_0010098d;
         }

      }

   }

   LAB_001008e0:uVar6 = 0;
   LAB_001008e2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool ossl_quic_wire_encode_pkt_hdr(long param_1, ulong param_2, ushort *param_3, undefined1 (*param_4)[16]) {
   byte bVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   byte bVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = WPACKET_get_curr();
   iVar2 = WPACKET_get_total_written(param_1, &local_40);
   if (iVar2 == 0) goto switchD_001010ae_caseD_0;
   if (param_4 != (undefined1(*) [16])0x0) {
      if (*(long*)( param_1 + 8 ) == 0) goto switchD_001010ae_caseD_0;
      *(undefined8*)param_4[1] = 0;
      *(undefined8*)( param_4[1] + 8 ) = 0;
      *param_4 = (undefined1[16])0x0;
   }

   bVar1 = *(byte*)( (long)param_3 + 1 );
   if (( bVar1 & 0x40 ) != 0) goto switchD_001010ae_caseD_0;
   bVar5 = ( byte ) * param_3;
   if (bVar5 == 5) {
      if (( ( ( ( (byte)param_3[4] != param_2 ) || ( 0x14 < param_2 ) ) || ( ( bVar1 & 0x3c ) == 0 ) ) || ( ( bVar5 = bVar1 >> 2 & 0xf ),4 < bVar5 || ( iVar2 = WPACKET_put_bytes__(param_1, ( bVar1 & 1 ) << 5 | (uint)bVar1 * 2 & 4 | ( uint )(byte)(bVar5 - 1) | ( byte )((byte)param_3[1] >> 1) & 0x18 | 0x40, 1) ),iVar2 == 0 ) )) goto switchD_001010ae_caseD_0;
      goto LAB_0010114e;
   }

   if (( ( 0x14 < (byte)param_3[4] ) || ( 0x14 < *(byte*)( (long)param_3 + 0x1d ) ) ) || ( ( ( bVar5 & 0xfd ) != 4 && ( ( ( bVar1 & 0x3c ) == 0 || ( 4 < ( bVar1 >> 2 & 0xf ) ) ) ) ) )) goto switchD_001010ae_caseD_0;
   switch (bVar5) {
      default:
    goto switchD_001010ae_caseD_0;
      case 1:
    bVar5 = 0xc0;
    if ((*param_3 & 0x80ff) == 6) {
      bVar5 = 0x80;
    }
    break;
      case 2:
    bVar5 = 0xd0;
    if ((*param_3 & 0x80ff) == 6) {
      bVar5 = 0x90;
    }
    break;
      case 3:
    bVar5 = 0xa0;
    if ((*param_3 & 0x80ff) != 6) {
      bVar5 = 0xe0;
    }
    break;
      case 4:
    bVar5 = 0xb0;
    if ((*param_3 & 0x80ff) != 6) {
      bVar5 = 0xf0;
    }
    bVar5 = (byte)param_3[1] & 0xf | bVar5;
    goto LAB_00101210;
      case 6:
    if (*(int *)(param_3 + 2) == 0) {
      bVar5 = 0xc0;
      if ((*param_3 & 0x80ff) == 6) {
        bVar5 = 0x80;
      }
      goto LAB_00101210;
    }
    goto switchD_001010ae_caseD_0;
   }

   bVar5 = ( bVar1 >> 2 & 0xf ) - 1 | (byte)param_3[1] >> 2 & 0xc | bVar5;
   LAB_00101210:iVar2 = WPACKET_put_bytes__(param_1, bVar5, 1);
   if (( ( ( iVar2 != 0 ) && ( iVar2 = WPACKET_put_bytes__(param_1, *(undefined4*)( param_3 + 2 ), 4) ),iVar2 != 0 ) ) && ( iVar2 = iVar2 != 0 )) &&( ( ( iVar2 = WPACKET_memcpy(param_1, (byte*)( (long)param_3 + 9 ), (byte)param_3[4]) ),iVar2 != 0 && ( iVar2 = WPACKET_put_bytes__(param_1, *(byte*)( (long)param_3 + 0x1d ), 1) ),iVar2 != 0 ) ) && ( iVar2 = iVar2 != 0 )(( byte ) * param_3 == 6);
   {
      if (*(long*)( param_3 + 0x24 ) != 0) {
         iVar2 = WPACKET_reserve_bytes(param_1, *(long*)( param_3 + 0x24 ), 0);
         bVar6 = iVar2 != 0;
         goto LAB_001010c2;
      }

      LAB_001011d2:bVar6 = true;
      goto LAB_001010c2;
   }

   if (( ( byte ) * param_3 != 1 ) || ( ( iVar2 = WPACKET_quic_write_vlint(param_1, *(undefined8*)( param_3 + 0x20 )) ),iVar2 != 0 && ( iVar2 = WPACKET_memcpy(param_1, *(undefined8*)( param_3 + 0x1c ), *(undefined8*)( param_3 + 0x20 )) ),iVar2 != 0 )) {
      if (( byte ) * param_3 == 4) {
         iVar2 = WPACKET_memcpy(param_1, *(undefined8*)( param_3 + 0x1c ), *(undefined8*)( param_3 + 0x20 ));
         bVar6 = iVar2 != 0;
         goto LAB_001010c2;
      }

      iVar2 = WPACKET_quic_write_vlint(param_1, ( ulong )(*(byte*)( (long)param_3 + 1 ) >> 2 & 0xf) + *(long*)( param_3 + 0x24 ));
      if (iVar2 != 0) {
         LAB_0010114e:iVar2 = WPACKET_get_total_written(param_1, &local_38);
         if (( ( iVar2 != 0 ) && ( iVar2 = WPACKET_memcpy(param_1, param_3 + 0x19, *(byte*)( (long)param_3 + 1 ) >> 2 & 0xf) ),iVar2 != 0 )) {
            if (param_4 != (undefined1(*) [16])0x0) {
               *(long*)*param_4 = lVar3;
               *(long*)( *param_4 + 8 ) = ( ( local_38 + 4 ) - local_40 ) + lVar3;
               lVar4 = WPACKET_get_curr(param_1);
               *(long*)param_4[1] = ( lVar4 + *(long*)( param_3 + 0x24 ) ) - *(long*)( *param_4 + 8 );
               *(long*)( param_4[1] + 8 ) = ( local_38 + lVar3 ) - local_40;
            }

            goto LAB_001011d2;
         }

      }

   }

}
switchD_001010ae_caseD_0:bVar6 = false;LAB_001010c2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return bVar6;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}int ossl_quic_wire_get_encoded_pkt_hdr_len(ulong param_1, byte *param_2) {
   byte bVar1;
   byte bVar2;
   int iVar3;
   byte bVar4;
   ulong uVar5;
   int iVar6;
   bVar4 = param_2[1];
   iVar6 = 0;
   iVar3 = 0;
   if (( bVar4 & 0x40 ) == 0) {
      bVar1 = *param_2;
      bVar2 = param_2[8];
      if (bVar1 == 5) {
         iVar6 = iVar3;
         if (( ( ( bVar2 == param_1 ) && ( (ulong)bVar2 < 0x15 ) ) && ( ( bVar4 & 0x3c ) != 0 ) ) && ( bVar4 = bVar4 < 5 )) {
            iVar6 = bVar4 + 1 + (uint)bVar2;
         }

      }
 else if (( ( bVar2 < 0x15 ) && ( param_2[0x1d] < 0x15 ) ) && ( iVar6 = bVar2 + 7 + (uint)param_2[0x1d](bVar1 & 0xfd) != 4 )) {
         if (( ( bVar4 & 0x3c ) == 0 ) || ( bVar4 = 4 < bVar4 )) {
            iVar6 = 0;
         }
 else {
            iVar6 = iVar6 + (uint)bVar4;
            if (bVar1 == 1) {
               uVar5 = *(ulong*)( param_2 + 0x40 );
               if (uVar5 < 0x40) {
                  iVar3 = 1;
               }
 else if (uVar5 < 0x4000) {
                  iVar3 = 2;
               }
 else if (uVar5 < 0x40000000) {
                  iVar3 = 4;
               }
 else {
                  if (uVar5 >> 0x3e != 0) {
                     return 0;
                  }

                  iVar3 = 8;
               }

               iVar6 = iVar6 + (int)uVar5 + iVar3;
            }

            uVar5 = (ulong)bVar4 + *(long*)( param_2 + 0x48 );
            if (uVar5 < 0x40) {
               iVar3 = 1;
            }
 else if (uVar5 < 0x4000) {
               iVar3 = 2;
            }
 else if (uVar5 < 0x40000000) {
               iVar3 = 4;
            }
 else {
               iVar3 = 8;
               if (uVar5 >> 0x3e != 0) {
                  return 0;
               }

            }

            iVar6 = iVar3 + iVar6;
         }

      }

   }

   return iVar6;
}
undefined8 ossl_quic_wire_get_pkt_hdr_dst_conn_id(byte *param_1, ulong param_2, size_t param_3, byte *param_4) {
   byte bVar1;
   undefined8 uVar2;
   ulong uVar3;
   byte *pbVar4;
   undefined8 *puVar5;
   if (( param_2 < 7 ) || ( 0x14 < param_3 )) {
      return 0;
   }

   bVar1 = *param_1;
   if ((char)bVar1 < '\0') {
      if (( ( ( ( param_1[1] == 0 ) && ( param_1[2] == 0 ) ) && ( param_1[3] == 0 ) ) && ( param_1[4] == 0 ) ) || ( uVar2 = 0(bVar1 & 0x40) != 0 )) {
         bVar1 = param_1[5];
         uVar3 = (ulong)bVar1;
         uVar2 = 0;
         if (( bVar1 < 0x15 ) && ( uVar2 = uVar3 + 7 <= param_2 )) {
            *param_4 = bVar1;
            if (bVar1 < 8) {
               if (( bVar1 & 4 ) == 0) {
                  if (( bVar1 != 0 ) && ( param_4[1] = param_1[6](bVar1 & 2) != 0 )) {
                     *(undefined2*)( param_4 + ( uVar3 - 1 ) ) = *(undefined2*)( param_1 + uVar3 + 4 );
                  }

               }
 else {
                  *(undefined4*)( param_4 + 1 ) = *(undefined4*)( param_1 + 6 );
                  *(undefined4*)( param_4 + ( uVar3 - 3 ) ) = *(undefined4*)( param_1 + uVar3 + 2 );
               }

            }
 else {
               *(undefined8*)( param_4 + 1 ) = *(undefined8*)( param_1 + 6 );
               *(undefined8*)( param_4 + ( uVar3 - 7 ) ) = *(undefined8*)( param_1 + ( uVar3 - 2 ) );
               pbVar4 = param_1 + ( 6 - (long)( param_4 + ( 1 - (long)( ( ulong )(param_4 + 9) & 0xfffffffffffffff8 ) ) ) );
               puVar5 = (undefined8*)( ( ulong )(param_4 + 9) & 0xfffffffffffffff8 );
               for (uVar3 = ( ulong )((uint)bVar1 + (int)( param_4 + ( 1 - (long)( ( ulong )(param_4 + 9) & 0xfffffffffffffff8 ) ) ) >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                  *puVar5 = *(undefined8*)pbVar4;
                  pbVar4 = pbVar4 + 8;
                  puVar5 = puVar5 + 1;
               }

            }

            uVar2 = 1;
         }

      }

   }
 else {
      uVar2 = 0;
      if (( ( bVar1 & 0x40 ) != 0 ) && ( param_3 + 0x15 <= param_2 )) {
         *param_4 = (byte)param_3;
         memcpy(param_4 + 1, param_1 + 1, param_3);
         return 1;
      }

   }

   return uVar2;
}
undefined8 ossl_quic_wire_decode_pkt_hdr_pn(uint *param_1, ulong param_2, long param_3, ulong *param_4) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   if (param_2 == 3) {
      uVar3 = ( ulong )(byte) * param_1 << 0x10 | ( ulong ) * (byte*)( (long)param_1 + 1 ) << 8 | ( ulong ) * (byte*)( (long)param_1 + 2 );
   }
 else if (param_2 < 4) {
      if (param_2 == 1) {
         uVar3 = ( ulong )(byte) * param_1;
      }
 else {
         if (param_2 != 2) {
            return 0;
         }

         uVar3 = ( ulong )(ushort)(( ushort ) * param_1 << 8 | ( ushort ) * param_1 >> 8);
      }

   }
 else {
      if (param_2 != 4) {
         return 0;
      }

      uVar1 = *param_1;
      uVar3 = ( ulong )(uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18);
   }

   uVar4 = param_3 + 1;
   lVar2 = 1L << ( (char)param_2 * '\b' & 0x3fU );
   lVar5 = lVar2 >> 1;
   uVar3 = -lVar2 & uVar4 | uVar3;
   if ((long)( uVar4 - lVar5 ) < (long)uVar3) {
      if (( (long)uVar3 <= (long)( uVar4 + lVar5 ) ) || ( (long)uVar3 < lVar2 )) goto LAB_0010178d;
   }
 else {
      if ((long)uVar3 < 0x4000000000000000 - lVar2) {
         *param_4 = lVar2 + uVar3;
         return 1;
      }

      if ((long)uVar3 <= (long)( uVar4 + lVar5 )) {
         LAB_0010178d:*param_4 = uVar3;
         return 1;
      }

   }

   *param_4 = uVar3 - lVar2;
   return 1;
}
char ossl_quic_wire_determine_pn_len(long param_1, long param_2) {
   char cVar1;
   ulong uVar2;
   uVar2 = param_1 - param_2;
   if (param_2 == -1) {
      uVar2 = param_1 + 1;
   }

   cVar1 = '\x01';
   if (( 0x80 < uVar2 ) && ( cVar1 = 0x8000 < uVar2 )) {
      cVar1 = ( 0x800000 < uVar2 ) + '\x03';
   }

   return cVar1;
}
undefined8 ossl_quic_wire_encode_pkt_hdr_pn(uint param_1, uint *param_2, ulong param_3) {
   ushort uVar1;
   uVar1 = (ushort)param_1;
   if (param_3 == 3) {
      *(char*)param_2 = (char)( param_1 >> 0x10 );
      *(ushort*)( (long)param_2 + 1 ) = uVar1 << 8 | uVar1 >> 8;
      return 1;
   }

   if (param_3 < 4) {
      if (param_3 == 1) {
         *(char*)param_2 = (char)param_1;
         return 1;
      }

      if (param_3 == 2) {
         *(ushort*)param_2 = uVar1 << 8 | uVar1 >> 8;
         return 1;
      }

   }
 else if (param_3 == 4) {
      *param_2 = param_1 >> 0x18 | ( param_1 & 0xff0000 ) >> 8 | ( param_1 & 0xff00 ) << 8 | param_1 << 0x18;
      return 1;
   }

   return 0;
}
undefined4 ossl_quic_calculate_retry_integrity_tag(undefined8 param_1, undefined8 param_2, char *param_3, byte *param_4, void *param_5) {
   int iVar1;
   EVP_CIPHER *cipher;
   EVP_CIPHER_CTX *ctx;
   undefined4 uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   int local_178[2];
   undefined8 local_170;
   undefined1 local_168[64];
   undefined8 local_128;
   ulong uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   uchar local_c8[136];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_178[0] = 0;
   local_178[1] = 0;
   local_170 = 0;
   if (( ( ( *param_3 == '\x04' ) && ( *(int*)( param_3 + 4 ) != 0 ) ) && ( 0xf < *(ulong*)( param_3 + 0x48 ) ) ) && ( ( ( *(long*)( param_3 + 0x50 ) != 0 && ( param_4 != (byte*)0x0 ) ) && ( ( param_5 != (void*)0x0 && ( *param_4 < 0x15 ) ) ) ) )) {
      local_d8 = *(undefined8*)( param_3 + 0x50 );
      local_128 = *(undefined8*)param_3;
      uStack_120 = *(ulong*)( param_3 + 8 );
      local_118 = *(undefined8*)( param_3 + 0x10 );
      uStack_110 = *(undefined8*)( param_3 + 0x18 );
      local_108 = *(undefined8*)( param_3 + 0x20 );
      uStack_100 = *(undefined8*)( param_3 + 0x28 );
      local_f8 = *(undefined8*)( param_3 + 0x30 );
      uStack_f0 = *(undefined8*)( param_3 + 0x38 );
      local_e8 = *(undefined8*)( param_3 + 0x40 );
      uStack_e0 = 0;
      iVar1 = WPACKET_init_static_len(local_168, local_c8, 0x80, 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_put_bytes__(local_168, *param_4, 1);
         if (iVar1 == 0) {
            LAB_00101b50:ERR_new();
            uVar3 = 0x380;
            LAB_00101b61:ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar3, "ossl_quic_calculate_retry_integrity_tag");
            uVar3 = 0x8000f;
            LAB_00101b74:ERR_set_error(0x14, uVar3, 0);
            LAB_00101b80:EVP_CIPHER_free();
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)0x0);
            LAB_00101ad0:uVar2 = 0;
         }
 else {
            iVar1 = WPACKET_memcpy(local_168, param_4 + 1, *param_4);
            if (iVar1 == 0) goto LAB_00101b50;
            iVar1 = ossl_quic_wire_encode_pkt_hdr(local_168, uStack_120 & 0xff, &local_128, 0);
            if (iVar1 == 0) goto LAB_00101b80;
            iVar1 = WPACKET_get_total_written(local_168, &local_170);
            if (iVar1 == 0) {
               ERR_new();
               uVar3 = 0x38a;
               goto LAB_00101b61;
            }

            cipher = (EVP_CIPHER*)EVP_CIPHER_fetch(param_1, "AES-128-GCM", param_2);
            if (cipher == (EVP_CIPHER*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x391, "ossl_quic_calculate_retry_integrity_tag");
               uVar3 = 0x80006;
               goto LAB_00101b74;
            }

            ctx = EVP_CIPHER_CTX_new();
            if (ctx == (EVP_CIPHER_CTX*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x396, "ossl_quic_calculate_retry_integrity_tag");
               ERR_set_error(0x14, 0x80006, 0);
               EVP_CIPHER_free();
               EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)0x0);
               goto LAB_00101ad0;
            }

            iVar1 = EVP_CipherInit_ex(ctx, cipher, (ENGINE*)0x0, retry_integrity_key, retry_integrity_nonce, 1);
            if (iVar1 == 0) {
               ERR_new();
               uVar3 = 0x39c;
               LAB_00101a9a:ERR_set_debug("ssl/quic/quic_wire_pkt.c", uVar3, "ossl_quic_calculate_retry_integrity_tag");
               ERR_set_error(0x14, 0x80006, 0);
               EVP_CIPHER_free(cipher);
               EVP_CIPHER_CTX_free(ctx);
               goto LAB_00101ad0;
            }

            iVar1 = EVP_CipherUpdate(ctx, (uchar*)0x0, local_178, local_c8, (int)local_170);
            if (iVar1 != 1) {
               ERR_new();
               uVar3 = 0x3a2;
               goto LAB_00101a9a;
            }

            iVar1 = EVP_CipherUpdate(ctx, (uchar*)0x0, local_178, *(uchar**)( param_3 + 0x50 ), (int)*(undefined8*)( param_3 + 0x48 ) + -0x10);
            if (iVar1 != 1) {
               ERR_new();
               uVar3 = 0x3a9;
               goto LAB_00101a9a;
            }

            iVar1 = EVP_CipherFinal_ex(ctx, (uchar*)0x0, local_178 + 1);
            if (iVar1 != 1) {
               ERR_new();
               uVar3 = 0x3af;
               goto LAB_00101a9a;
            }

            iVar1 = EVP_CIPHER_CTX_ctrl(ctx, 0x10, 0x10, param_5);
            if (iVar1 != 1) {
               ERR_new();
               uVar3 = 0x3b6;
               goto LAB_00101a9a;
            }

            EVP_CIPHER_free(cipher);
            EVP_CIPHER_CTX_free(ctx);
            uVar2 = 1;
         }

         WPACKET_finish(local_168);
         goto LAB_00101b20;
      }

      ERR_new();
      ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x376, "ossl_quic_calculate_retry_integrity_tag");
      uVar3 = 0x8000f;
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/quic/quic_wire_pkt.c", 0x368, "ossl_quic_calculate_retry_integrity_tag");
      uVar3 = 0x80106;
   }

   uVar2 = 0;
   ERR_set_error(0x14, uVar3, 0);
   EVP_CIPHER_free();
   EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)0x0);
   LAB_00101b20:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool ossl_quic_validate_retry_integrity_tag(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined1 auStack_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( 0xf < *(ulong*)( param_3 + 0x48 ) )) {
      iVar1 = ossl_quic_calculate_retry_integrity_tag();
      if (iVar1 != 0) {
         iVar1 = CRYPTO_memcmp(auStack_38, (void*)( *(long*)( param_3 + 0x50 ) + -0x10 + *(long*)( param_3 + 0x48 ) ), 0x10);
         bVar2 = iVar1 == 0;
         goto LAB_00101d3b;
      }

   }

   bVar2 = false;
   LAB_00101d3b:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

