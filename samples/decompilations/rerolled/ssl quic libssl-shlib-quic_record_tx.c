undefined8 *ossl_qtx_new(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   if (0x4af < (ulong)param_1[3]) {
      puVar4 = (undefined8*)CRYPTO_zalloc(0x400, "ssl/quic/quic_record_tx.c", 0x78);
      if (puVar4 != (undefined8*)0x0) {
         uVar2 = *param_1;
         uVar3 = param_1[1];
         puVar4[0x6a] = param_1[2];
         uVar1 = param_1[3];
         *puVar4 = uVar2;
         puVar4[1] = uVar3;
         puVar4[0x6d] = uVar1;
         puVar4[0x6b] = param_1[4];
         puVar4[0x6c] = param_1[5];
      }

      return puVar4;
   }

   return (undefined8*)0x0;
}
void ossl_qtx_free(void *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   int iVar3;
   int iVar4;
   if (param_1 == (void*)0x0) {
      return;
   }

   puVar2 = *(undefined8**)( (long)param_1 + 0x388 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      CRYPTO_free(puVar2);
      puVar2 = puVar1;
   }
;
   puVar2 = *(undefined8**)( (long)param_1 + 0x370 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      CRYPTO_free(puVar2);
      puVar2 = puVar1;
   }
;
   CRYPTO_free(*(void**)( (long)param_1 + 0x3b0 ));
   iVar3 = 0;
   do {
      iVar4 = iVar3 + 1;
      ossl_qrl_enc_level_set_discard((long)param_1 + 0x10, iVar3);
      iVar3 = iVar4;
   }
 while ( iVar4 != 4 );
   CRYPTO_free(param_1);
   return;
}
void ossl_qtx_set_mutator(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   *(undefined8*)( param_1 + 0x3d0 ) = param_2;
   *(undefined8*)( param_1 + 0x3d8 ) = param_3;
   *(undefined8*)( param_1 + 0x3e0 ) = param_4;
   return;
}
void ossl_qtx_set_qlog_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x358 ) = param_2;
   *(undefined8*)( param_1 + 0x360 ) = param_3;
   return;
}
undefined8 ossl_qtx_provide_secret(undefined8 *param_1, uint param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   undefined8 uVar1;
   if (3 < param_2) {
      return 0;
   }

   uVar1 = ossl_qrl_enc_level_set_provide_secret(param_1 + 2, *param_1, param_1[1], param_2, param_3, param_4, param_5, param_6, 0, 1);
   return uVar1;
}
undefined8 ossl_qtx_discard_enc_level(long param_1, uint param_2) {
   if (3 < param_2) {
      return 0;
   }

   ossl_qrl_enc_level_set_discard(param_1 + 0x10);
   return 1;
}
bool ossl_qtx_is_enc_level_provisioned(long param_1, undefined8 param_2) {
   long lVar1;
   lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10, param_2, 1);
   return lVar1 != 0;
}
undefined8 ossl_qtx_calculate_ciphertext_payload_len(long param_1, undefined8 param_2, long param_3, long *param_4) {
   uint uVar1;
   long lVar2;
   lVar2 = ossl_qrl_enc_level_set_get(param_1 + 0x10, param_2, 1);
   if (lVar2 != 0) {
      uVar1 = ossl_qrl_get_suite_cipher_tag_len(*(undefined4*)( lVar2 + 0x60 ));
      *param_4 = (ulong)uVar1 + param_3;
      return 1;
   }

   *param_4 = 0;
   return 0;
}
undefined8 ossl_qtx_calculate_plaintext_payload_len(long param_1, undefined8 param_2, ulong param_3, long *param_4) {
   uint uVar1;
   long lVar2;
   lVar2 = ossl_qrl_enc_level_set_get(param_1 + 0x10, param_2, 1);
   if (lVar2 != 0) {
      uVar1 = ossl_qrl_get_suite_cipher_tag_len(*(undefined4*)( lVar2 + 0x60 ));
      if (uVar1 < param_3) {
         *param_4 = param_3 - uVar1;
         return 1;
      }

   }

   *param_4 = 0;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_qtx_finish_dgram(long param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   puVar1 = *(undefined8**)( param_1 + 0x3b0 );
   if (puVar1 != (undefined8*)0x0) {
      lVar4 = puVar1[2];
      if (lVar4 == 0) {
         puVar2 = *(undefined8**)( param_1 + 0x378 );
         if (puVar2 != (undefined8*)0x0) {
            *puVar2 = puVar1;
         }

         lVar4 = *(long*)( param_1 + 0x370 );
         puVar1[1] = puVar2;
         *puVar1 = 0;
         *(undefined8**)( param_1 + 0x378 ) = puVar1;
         if (lVar4 == 0) {
            *(undefined8**)( param_1 + 0x370 ) = puVar1;
         }

         *(long*)( param_1 + 0x380 ) = *(long*)( param_1 + 0x380 ) + 1;
      }
 else {
         puVar2 = *(undefined8**)( param_1 + 0x390 );
         if (puVar2 != (undefined8*)0x0) {
            *puVar2 = puVar1;
         }

         lVar3 = *(long*)( param_1 + 0x388 );
         puVar1[1] = puVar2;
         *puVar1 = 0;
         *(undefined8**)( param_1 + 0x390 ) = puVar1;
         if (lVar3 == 0) {
            *(undefined8**)( param_1 + 0x388 ) = puVar1;
         }

         *(long*)( param_1 + 0x3a8 ) = *(long*)( param_1 + 0x3a8 ) + lVar4;
         lVar4 = *(long*)( param_1 + 0x3a0 ) + _UNK_001016c8;
         *(long*)( param_1 + 0x398 ) = *(long*)( param_1 + 0x398 ) + __LC1;
         *(long*)( param_1 + 0x3a0 ) = lVar4;
      }

      *(long*)( param_1 + 0x3c8 ) = *(long*)( param_1 + 0x3c8 ) + 1;
      *(undefined8*)( param_1 + 0x3b0 ) = 0;
      *(undefined8*)( param_1 + 0x3b8 ) = 0;
   }

   return;
}
undefined8 ossl_qtx_write_pkt(long param_1, undefined8 *param_2) {
   long *plVar1;
   uchar *in;
   byte bVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   undefined1(*pauVar6)[16];
   void *pvVar7;
   void *__s2;
   EVP_CIPHER_CTX *ctx;
   code *pcVar8;
   bool bVar9;
   bool bVar10;
   int iVar11;
   int iVar12;
   long lVar13;
   long lVar14;
   long *plVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined1(*pauVar18)[16];
   ulong uVar19;
   uchar *iv;
   size_t __n;
   ulong uVar20;
   long lVar21;
   ulong uVar22;
   ulong uVar23;
   byte *pbVar24;
   long lVar25;
   long in_FS_OFFSET;
   long lVar26;
   int local_108;
   byte *local_e0;
   long local_d8;
   ulong local_d0;
   long local_c8;
   ulong local_c0;
   undefined1 local_b8[32];
   int local_98[14];
   ulong uStack_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(uint*)( param_2 + 6 );
   if ((byte*)*param_2 != (byte*)0x0) {
      bVar2 = *(byte*)*param_2;
      if (bVar2 - 1 < 5) {
         iVar12 = *(int*)( CSWTCH_25 + ( ulong )(bVar2 - 1) * 4 );
         if (( bVar2 & 0xfd ) == 4) goto LAB_00100a30;
         if (( iVar12 == 4 ) || ( iVar11 = ossl_qrl_enc_level_set_have_el(param_1 + 0x10, iVar12) ),iVar11 != 1) goto LAB_0010049c;
      }
 else {
         if (( bVar2 & 0xfd ) != 4) goto LAB_0010049c;
         iVar12 = 4;
         LAB_00100a30:ossl_qtx_finish_dgram();
      }

      bVar9 = false;
      pauVar18 = *(undefined1(**) [16])( param_1 + 0x3b0 );
      if (( pauVar18 == (undefined1(*) [16])0x0 ) || ( *(long*)pauVar18[1] == 0 )) goto LAB_00100466;
      pvVar7 = (void*)param_2[3];
      iVar11 = BIO_ADDR_family(pauVar18 + 2);
      if (iVar11 == 0) {
         if (( pvVar7 != (void*)0x0 ) && ( iVar11 = iVar11 != 0 )) goto LAB_00100c11;
         LAB_00100c30:__s2 = (void*)param_2[4];
         pvVar7 = (void*)( *(long*)( param_1 + 0x3b0 ) + 0x90 );
         iVar11 = BIO_ADDR_family(pvVar7);
         if (iVar11 == 0) {
            if (( __s2 != (void*)0x0 ) && ( iVar11 = iVar11 != 0 )) goto LAB_00100c6a;
            LAB_00100c82:bVar9 = true;
            pauVar18 = *(undefined1(**) [16])( param_1 + 0x3b0 );
            goto LAB_00100466;
         }

         if (__s2 != (void*)0x0) {
            LAB_00100c6a:iVar11 = memcmp(pvVar7, __s2, 0x70);
            if (iVar11 == 0) goto LAB_00100c82;
         }

      }
 else if (pvVar7 != (void*)0x0) {
         LAB_00100c11:iVar11 = memcmp(pauVar18 + 2, pvVar7, 0x70);
         if (iVar11 == 0) goto LAB_00100c30;
      }

      bVar9 = false;
      ossl_qtx_finish_dgram(param_1);
      pauVar18 = *(undefined1(**) [16])( param_1 + 0x3b0 );
      LAB_00100466:uVar23 = *(ulong*)( param_1 + 0x368 );
      do {
         if (pauVar18 == (undefined1(*) [16])0x0) {
            pauVar18 = *(undefined1(**) [16])( param_1 + 0x370 );
            if (pauVar18 == (undefined1(*) [16])0x0) {
               if (( 0xfffffffffffffefe < uVar23 ) || ( pauVar18 = (undefined1(*) [16])CRYPTO_malloc((int)uVar23 + 0x100, "ssl/quic/quic_record_tx.c", 0xe0) ),pauVar18 == (undefined1(*) [16])0x0) break;
               plVar15 = *(long**)( param_1 + 0x378 );
               *(ulong*)( pauVar18[1] + 8 ) = uVar23;
               *(undefined8*)pauVar18[1] = 0;
               if (plVar15 != (long*)0x0) {
                  *plVar15 = (long)pauVar18;
               }

               pauVar6 = *(undefined1(**) [16])( param_1 + 0x370 );
               *(long**)( *pauVar18 + 8 ) = plVar15;
               *(undefined8*)*pauVar18 = 0;
               *(undefined1(**) [16])( param_1 + 0x378 ) = pauVar18;
               if (pauVar6 == (undefined1(*) [16])0x0) {
                  *(long*)( param_1 + 0x380 ) = *(long*)( param_1 + 0x380 ) + 1;
                  goto LAB_001009b4;
               }

               lVar21 = *(long*)( param_1 + 0x380 );
               *(long*)( param_1 + 0x380 ) = lVar21 + 1;
               if (pauVar6 == pauVar18) goto LAB_001009b4;
               *(long**)( param_1 + 0x378 ) = plVar15;
               lVar13 = 0;
               if (plVar15 != (long*)0x0) goto LAB_001009e0;
            }
 else {
               LAB_001009b4:lVar13 = *(long*)*pauVar18;
               plVar15 = *(long**)( *pauVar18 + 8 );
               *(long*)( param_1 + 0x370 ) = lVar13;
               lVar21 = *(long*)( param_1 + 0x380 ) + -1;
               if (*(undefined1(**) [16])( param_1 + 0x378 ) == pauVar18) {
                  *(long**)( param_1 + 0x378 ) = plVar15;
               }

               if (plVar15 != (long*)0x0) {
                  LAB_001009e0:*plVar15 = lVar13;
                  lVar13 = *(long*)*pauVar18;
               }

               if (lVar13 != 0) {
                  *(long**)( lVar13 + 8 ) = plVar15;
               }

            }

            *(long*)( param_1 + 0x380 ) = lVar21;
            *pauVar18 = (undefined1[16])0x0;
            uVar23 = *(ulong*)( param_1 + 0x368 );
            *(undefined1(**) [16])( param_1 + 0x3b0 ) = pauVar18;
            *(undefined8*)( param_1 + 0x3b8 ) = 0;
            *(undefined8*)pauVar18[1] = 0;
         }

         if (*(ulong*)( pauVar18[1] + 8 ) < uVar23) {
            if (uVar23 < 0xfffffffffffffeff) {
               /* WARNING: Does not return */
               pcVar8 = (code*)invalidInstructionException();
               ( *pcVar8 )();
            }

            break;
         }

         if (!bVar9) {
            if (param_2[3] == 0) {
               BIO_ADDR_clear(pauVar18 + 2);
            }
 else {
               iVar11 = BIO_ADDR_copy();
               if (iVar11 == 0) break;
            }

            if (param_2[4] == 0) {
               BIO_ADDR_clear(pauVar18 + 9);
            }
 else {
               iVar11 = BIO_ADDR_copy();
               if (iVar11 == 0) break;
            }

         }

         pbVar24 = (byte*)*param_2;
         lVar21 = param_2[1];
         uVar23 = param_2[2];
         if (*(code**)( param_1 + 0x3d0 ) == (code*)0x0) {
            local_e0 = pbVar24;
            local_d8 = lVar21;
            local_d0 = uVar23;
            if (( *pbVar24 & 0xfd ) != 4) goto LAB_0010057f;
            LAB_00100a9e:bVar10 = false;
            lVar13 = 0;
            uVar20 = 7;
            uVar23 = local_d0;
            lVar21 = local_d8;
            pbVar24 = local_e0;
         }
 else {
            iVar11 = ( **(code**)( param_1 + 0x3d0 ) )(pbVar24, lVar21, uVar23, &local_e0, &local_d8, &local_d0, *(undefined8*)( param_1 + 0x3e0 ));
            if (iVar11 == 0) break;
            if (( *local_e0 & 0xfd ) == 4) goto LAB_00100a9e;
            LAB_0010057f:uVar23 = local_d0;
            lVar21 = local_d8;
            pbVar24 = local_e0;
            lVar13 = ossl_qrl_enc_level_set_get(param_1 + 0x10, iVar12, 1);
            if (lVar13 == 0) goto LAB_00100a57;
            bVar10 = true;
            uVar20 = 0x15;
         }

         lVar4 = *(long*)pauVar18[1];
         uVar22 = *(long*)( pauVar18[1] + 8 ) - lVar4;
         if (uVar20 <= uVar22) {
            if (*pbVar24 == 5) {
               pbVar24[1] = pbVar24[1] & 0xfd | ( ( byte ) * (undefined8*)( lVar13 + 0x50 ) & 1 ) * '\x02';
            }

            if (uVar23 == 0) goto LAB_00100a53;
            uVar20 = uVar23 - 1;
            if (uVar20 < 2) {
               lVar13 = 0;
               uVar20 = 0;
            }
 else {
               lVar13 = 0;
               lVar26 = 0;
               lVar14 = lVar21;
               do {
                  plVar15 = (long*)( lVar14 + 8 );
                  plVar1 = (long*)( lVar14 + 0x18 );
                  lVar14 = lVar14 + 0x20;
                  lVar13 = lVar13 + *plVar15;
                  lVar26 = lVar26 + *plVar1;
               }
 while ( lVar14 != ( uVar20 >> 1 ) * 0x20 + lVar21 );
               uVar20 = uVar20 & 0xfffffffffffffffe;
               lVar13 = lVar13 + lVar26;
            }

            lVar13 = lVar13 + *(long*)( lVar21 + 8 + uVar20 * 0x10 );
            if (uVar20 + 1 < uVar23) {
               lVar13 = lVar13 + *(long*)( lVar21 + 0x18 + uVar20 * 0x10 );
            }

            if (lVar13 == 0) goto LAB_00100a53;
            if (bVar10) {
               ossl_qtx_calculate_ciphertext_payload_len(param_1, iVar12, lVar13, &local_c8);
               lVar13 = local_c8;
            }

            local_c8 = lVar13;
            for (int i = 0; i < 8; i++) {
               pbVar24[( i + 80 )] = 0;
            }

            *(long*)( pbVar24 + 0x48 ) = local_c8;
            iVar11 = ossl_quic_wire_get_encoded_pkt_hdr_len(pbVar24[8], pbVar24);
            if ((long)iVar11 == 0) goto LAB_00100a53;
            if (uVar22 < ( ulong )(iVar11 + local_c8)) goto LAB_00100958;
            if (( ( *pbVar24 & 0xfd ) != 4 ) && ( iVar11 = ossl_quic_wire_encode_pkt_hdr_pn(param_2[5], pbVar24 + 0x32, pbVar24[1] >> 2 & 0xf) ),iVar11 == 0) goto LAB_00100a53;
            lVar13 = *(long*)pauVar18[1];
            local_c0 = 0;
            in = pauVar18[0x10] + lVar13;
            iVar11 = WPACKET_init_static_len(local_98, in, *(long*)( pauVar18[1] + 8 ) - lVar13, 0);
            if (iVar11 == 0) goto LAB_00100a53;
            iVar11 = ossl_quic_wire_encode_pkt_hdr(local_98, pbVar24[8], pbVar24);
            if (iVar11 == 0) {
               LAB_00100ca8:WPACKET_finish(local_98);
               goto LAB_00100a53;
            }

            iVar11 = WPACKET_get_total_written(local_98, &local_c0);
            if (iVar11 == 0) goto LAB_00100ca8;
            WPACKET_finish(local_98);
            if (*(code**)( param_1 + 1000 ) != (code*)0x0) {
               ( **(code**)( param_1 + 1000 ) )(1, 1, 0x201, in, local_c0, *(undefined8*)( param_1 + 0x3f8 ), *(undefined8*)( param_1 + 0x3f0 ));
            }

            lVar14 = local_c0 + *(long*)pauVar18[1];
            *(long*)pauVar18[1] = lVar14;
            if (!bVar10) {
               uVar20 = 0;
               lVar13 = 0;
               do {
                  plVar15 = (long*)( uVar20 * 0x10 + lVar21 );
                  while (true) {
                     lVar4 = plVar15[1];
                     __n = lVar4 - lVar13;
                     if (__n != 0) break;
                     uVar20 = uVar20 + 1;
                     plVar15 = plVar15 + 2;
                     lVar13 = 0;
                     if (uVar20 == uVar23) goto LAB_0010089d;
                  }
;
                  memcpy(pauVar18[0x10] + lVar14, (void*)( lVar13 + *plVar15 ), __n);
                  lVar14 = __n + *(long*)pauVar18[1];
                  *(long*)pauVar18[1] = lVar14;
                  lVar13 = lVar4;
               }
 while ( uVar20 < uVar23 );
               goto LAB_0010089d;
            }

            uVar20 = param_2[5];
            local_c0 = local_c0 & 0xffffffff00000000;
            local_98[0] = 0;
            lVar26 = ossl_qrl_enc_level_set_get(param_1 + 0x10, iVar12, 1);
            if (lVar26 == 0) {
               ERR_new();
               uVar17 = 0x1f6;
            }
 else {
               uVar22 = *(ulong*)( lVar26 + 0x58 );
               uVar19 = ossl_qrl_get_suite_max_pkt(*(undefined4*)( lVar26 + 0x60 ));
               if (uVar19 <= uVar22) {
                  ERR_new();
                  ERR_set_debug("ssl/quic/quic_record_tx.c", 0x1ff, "qtx_encrypt_into_txe");
                  ERR_set_error(0x14, 0x18b, 0);
                  goto LAB_00100a53;
               }

               ctx = *(EVP_CIPHER_CTX**)( lVar26 + 0x30 );
               if (ctx == (EVP_CIPHER_CTX*)0x0) {
                  ERR_new();
                  uVar17 = 0x20a;
               }
 else {
                  iVar12 = EVP_CIPHER_CTX_get_iv_length(ctx);
                  if (7 < iVar12) {
                     lVar25 = (long)iVar12;
                     iv = (uchar*)__memcpy_chk(local_58, lVar26 + 0x6a, lVar25);
                     *(ulong*)( (long)&uStack_60 + lVar25 ) = *(ulong*)( (long)&uStack_60 + lVar25 ) ^ ( uVar20 >> 0x38 | ( uVar20 & 0xff000000000000 ) >> 0x28 | ( uVar20 & 0xff0000000000 ) >> 0x18 | ( uVar20 & 0xff00000000 ) >> 8 | ( uVar20 & 0xff000000 ) << 8 | ( uVar20 & 0xff0000 ) << 0x18 | ( uVar20 & 0xff00 ) << 0x28 | uVar20 << 0x38 );
                     iVar12 = EVP_CipherInit_ex(ctx, (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, iv, 1);
                     if (iVar12 == 1) {
                        local_108 = (int)lVar13;
                        lVar13 = 0;
                        iVar12 = EVP_CipherUpdate(ctx, (uchar*)0x0, (int*)&local_c0, in, (int)lVar14 - local_108);
                        uVar20 = 0;
                        if (iVar12 == 1) goto LAB_00100e96;
                        ERR_new();
                        uVar17 = 0x221;
                     }
 else {
                        ERR_new();
                        uVar17 = 0x21b;
                     }

                     goto LAB_00100e03;
                  }

                  ERR_new();
                  uVar17 = 0x211;
               }

            }

            ERR_set_debug("ssl/quic/quic_record_tx.c", uVar17, "qtx_encrypt_into_txe");
            ERR_set_error(0x14, 0xc0103, 0);
            goto LAB_00100a53;
         }

         LAB_00100958:pcVar8 = *(code**)( param_1 + 0x3d8 );
         *(long*)pauVar18[1] = lVar4;
         if (pcVar8 != (code*)0x0) {
            ( *pcVar8 )(*(undefined8*)( param_1 + 0x3e0 ));
         }

         if (!bVar9) break;
         bVar9 = false;
         ossl_qtx_finish_dgram(param_1);
         pauVar18 = *(undefined1(**) [16])( param_1 + 0x3b0 );
         uVar23 = *(ulong*)( param_1 + 0x368 );
      }
 while ( true );
   }

   goto LAB_0010049c;
   while (*(long*)pauVar18[1] = *(long*)pauVar18[1] + lVar25,lVar13 = lVar14,uVar20 < uVar23) {
      LAB_00100e96:plVar15 = (long*)( uVar20 * 0x10 + lVar21 );
      while (true) {
         lVar14 = plVar15[1];
         lVar25 = lVar14 - lVar13;
         if (lVar25 != 0) break;
         uVar20 = uVar20 + 1;
         plVar15 = plVar15 + 2;
         lVar13 = 0;
         if (uVar20 == uVar23) goto LAB_00100efa;
      }
;
      iVar12 = EVP_CipherUpdate(ctx, pauVar18[0x10] + *(long*)pauVar18[1], (int*)&local_c0, (uchar*)( lVar13 + *plVar15 ), (int)lVar25);
      if (iVar12 != 1) {
         ERR_new();
         uVar17 = 0x230;
         goto LAB_00100e03;
      }

   }
;
   LAB_00100efa:iVar12 = EVP_CipherFinal_ex(ctx, (uchar*)0x0, local_98);
   if (iVar12 == 1) {
      iVar12 = EVP_CIPHER_CTX_ctrl(ctx, 0x10, *(int*)( lVar26 + 100 ), pauVar18[0x10] + *(long*)pauVar18[1]);
      if (iVar12 != 1) {
         ERR_new();
         uVar17 = 0x245;
         goto LAB_00100e03;
      }

      *(ulong*)pauVar18[1] = *(long*)pauVar18[1] + ( ulong ) * (uint*)( lVar26 + 100 );
      iVar12 = ossl_quic_hdr_protector_encrypt(lVar26, local_b8);
      if (iVar12 != 0) {
         *(long*)( lVar26 + 0x58 ) = *(long*)( lVar26 + 0x58 ) + 1;
         LAB_0010089d:uVar23 = local_d0;
         lVar21 = local_d8;
         pbVar24 = local_e0;
         uVar17 = param_2[5];
         uVar5 = *(undefined8*)( param_1 + 0x3c8 );
         if (*(code**)( param_1 + 0x358 ) == (code*)0x0) {
            uVar16 = 0;
         }
 else {
            uVar16 = ( **(code**)( param_1 + 0x358 ) )(*(undefined8*)( param_1 + 0x360 ));
         }

         ossl_qlog_event_transport_packet_sent(uVar16, pbVar24, uVar17, lVar21, uVar23, uVar5);
         if (*(code**)( param_1 + 0x3d8 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x3d8 ) )(*(undefined8*)( param_1 + 0x3e0 ));
         }

         *(long*)( param_1 + 0x3b8 ) = *(long*)( param_1 + 0x3b8 ) + 1;
         if (( ( ( *(byte*)*param_2 & 0xfd ) == 4 ) || ( *(byte*)*param_2 == 5 ) ) || ( ( uVar3 & 1 ) == 0 )) {
            ossl_qtx_finish_dgram(param_1);
         }

         uVar17 = 1;
         goto LAB_0010049e;
      }

   }
 else {
      ERR_new();
      uVar17 = 0x23f;
      LAB_00100e03:ERR_set_debug("ssl/quic/quic_record_tx.c", uVar17, "qtx_encrypt_into_txe");
      ERR_set_error(0x14, 0x80006, 0);
   }

   LAB_00100a53:*(long*)pauVar18[1] = lVar4;
   LAB_00100a57:if (*(code**)( param_1 + 0x3d8 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x3d8 ) )(*(undefined8*)( param_1 + 0x3e0 ));
   }

   LAB_0010049c:uVar17 = 0;
   LAB_0010049e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar17;
}
undefined8 ossl_qtx_flush_net(long param_1) {
   undefined1(*pauVar1)[16];
   long *plVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   undefined8 *puVar7;
   ulong uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_560;
   ulong local_550;
   long local_548[161];
   long local_40;
   puVar9 = *(undefined8**)( param_1 + 0x388 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (puVar9 != (undefined8*)0x0) {
      if (*(long*)( param_1 + 0x350 ) == 0) {
         LAB_00101349:uVar4 = 0xfffffffe;
         goto LAB_001012fa;
      }

      local_560 = 0;
      do {
         plVar6 = local_548;
         uVar10 = 0;
         do {
            uVar8 = uVar10;
            puVar7 = puVar9 + 4;
            *plVar6 = (long)( puVar9 + 0x20 );
            lVar5 = puVar9[2];
            plVar6[4] = 0;
            plVar6[1] = lVar5;
            iVar3 = BIO_ADDR_family(puVar7);
            if (iVar3 == 0) {
               puVar7 = (undefined8*)0x0;
            }

            plVar6[2] = (long)puVar7;
            puVar7 = puVar9 + 0x12;
            iVar3 = BIO_ADDR_family(puVar7);
            if (iVar3 == 0) {
               puVar9 = (undefined8*)*puVar9;
               plVar6[3] = 0;
            }
 else {
               puVar9 = (undefined8*)*puVar9;
               plVar6[3] = (long)puVar7;
            }

            if (puVar9 == (undefined8*)0x0) break;
            uVar10 = uVar8 + 1;
            plVar6 = plVar6 + 5;
         }
 while ( uVar10 < 0x20 );
         ERR_set_mark();
         iVar3 = BIO_sendmmsg(*(undefined8*)( param_1 + 0x350 ), local_548, 0x28, uVar8 + 1, 0, &local_550);
         if (iVar3 == 0) {
            uVar10 = ERR_peek_last_error();
            iVar3 = BIO_err_is_non_fatal(uVar10 & 0xffffffff);
            if (iVar3 == 0) {
               ERR_clear_last_mark();
               goto LAB_00101349;
            }

            ERR_pop_to_mark();
            break;
         }

         if (local_550 == 0) {
            ERR_clear_last_mark();
            break;
         }

         ERR_clear_last_mark();
         if (local_550 != 0) {
            uVar10 = 0;
            plVar6 = local_548;
            do {
               if (*(code**)( param_1 + 1000 ) != (code*)0x0) {
                  ( **(code**)( param_1 + 1000 ) )(1, 1, 0x200, *plVar6, plVar6[1], *(undefined8*)( param_1 + 0x3f8 ), *(undefined8*)( param_1 + 0x3f0 ));
               }

               pauVar1 = *(undefined1(**) [16])( param_1 + 0x388 );
               lVar5 = *(long*)*pauVar1;
               plVar2 = *(long**)( *pauVar1 + 8 );
               *(long*)( param_1 + 0x388 ) = lVar5;
               if (pauVar1 == *(undefined1(**) [16])( param_1 + 0x390 )) {
                  *(long**)( param_1 + 0x390 ) = plVar2;
               }

               if (plVar2 != (long*)0x0) {
                  *plVar2 = lVar5;
                  lVar5 = *(long*)*pauVar1;
               }

               if (lVar5 != 0) {
                  *(long**)( lVar5 + 8 ) = plVar2;
               }

               *(long*)( param_1 + 0x398 ) = *(long*)( param_1 + 0x398 ) + -1;
               *pauVar1 = (undefined1[16])0x0;
               lVar5 = *(long*)pauVar1[1];
               puVar9 = *(undefined8**)( param_1 + 0x378 );
               *(long*)( param_1 + 0x3a0 ) = *(long*)( param_1 + 0x3a0 ) + -1;
               *(long*)( param_1 + 0x3a8 ) = *(long*)( param_1 + 0x3a8 ) - lVar5;
               if (puVar9 != (undefined8*)0x0) {
                  *puVar9 = pauVar1;
               }

               lVar5 = *(long*)( param_1 + 0x370 );
               *(undefined8**)( *pauVar1 + 8 ) = puVar9;
               *(undefined8*)*pauVar1 = 0;
               *(undefined1(**) [16])( param_1 + 0x378 ) = pauVar1;
               if (lVar5 == 0) {
                  *(undefined1(**) [16])( param_1 + 0x370 ) = pauVar1;
               }

               uVar10 = uVar10 + 1;
               *(long*)( param_1 + 0x380 ) = *(long*)( param_1 + 0x380 ) + 1;
               plVar6 = plVar6 + 5;
            }
 while ( uVar10 < local_550 );
            local_560 = local_560 + local_550;
         }

         puVar9 = *(undefined8**)( param_1 + 0x388 );
      }
 while ( puVar9 != (undefined8*)0x0 );
      if (local_560 == 0) {
         uVar4 = 0xffffffff;
         goto LAB_001012fa;
      }

   }

   uVar4 = 1;
   LAB_001012fa:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
undefined8 ossl_qtx_pop_net(long param_1, long *param_2) {
   undefined1(*pauVar1)[16];
   long *plVar2;
   undefined8 *puVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uVar5 = 0;
   lVar7 = *(long*)( param_1 + 0x388 );
   if (lVar7 != 0) {
      *param_2 = lVar7 + 0x100;
      lVar6 = *(long*)( lVar7 + 0x10 );
      param_2[4] = 0;
      param_2[1] = lVar6;
      iVar4 = BIO_ADDR_family(lVar7 + 0x20);
      lVar6 = lVar7 + 0x20;
      if (iVar4 == 0) {
         lVar6 = 0;
      }

      param_2[2] = lVar6;
      iVar4 = BIO_ADDR_family(lVar7 + 0x90);
      pauVar1 = *(undefined1(**) [16])( param_1 + 0x388 );
      lVar7 = lVar7 + 0x90;
      if (iVar4 == 0) {
         lVar7 = 0;
      }

      lVar6 = *(long*)*pauVar1;
      plVar2 = *(long**)( *pauVar1 + 8 );
      param_2[3] = lVar7;
      *(long*)( param_1 + 0x388 ) = lVar6;
      if (pauVar1 == *(undefined1(**) [16])( param_1 + 0x390 )) {
         *(long**)( param_1 + 0x390 ) = plVar2;
      }

      if (plVar2 != (long*)0x0) {
         *plVar2 = lVar6;
         lVar6 = *(long*)*pauVar1;
      }

      if (lVar6 != 0) {
         *(long**)( lVar6 + 8 ) = plVar2;
      }

      *(long*)( param_1 + 0x398 ) = *(long*)( param_1 + 0x398 ) + -1;
      *pauVar1 = (undefined1[16])0x0;
      lVar7 = *(long*)pauVar1[1];
      puVar3 = *(undefined8**)( param_1 + 0x378 );
      *(long*)( param_1 + 0x3a0 ) = *(long*)( param_1 + 0x3a0 ) + -1;
      *(long*)( param_1 + 0x3a8 ) = *(long*)( param_1 + 0x3a8 ) - lVar7;
      if (puVar3 != (undefined8*)0x0) {
         *puVar3 = pauVar1;
      }

      lVar7 = *(long*)( param_1 + 0x370 );
      *(undefined8**)( *pauVar1 + 8 ) = puVar3;
      *(undefined8*)*pauVar1 = 0;
      *(undefined1(**) [16])( param_1 + 0x378 ) = pauVar1;
      if (lVar7 == 0) {
         *(undefined1(**) [16])( param_1 + 0x370 ) = pauVar1;
      }

      *(long*)( param_1 + 0x380 ) = *(long*)( param_1 + 0x380 ) + 1;
      uVar5 = 1;
   }

   return uVar5;
}
void ossl_qtx_set_bio(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x350 ) = param_2;
   return;
}
bool ossl_qtx_set_mdpl(long param_1, ulong param_2) {
   if (0x4af < param_2) {
      *(ulong*)( param_1 + 0x368 ) = param_2;
   }

   return 0x4af < param_2;
}
undefined8 ossl_qtx_get_mdpl(long param_1) {
   return *(undefined8*)( param_1 + 0x368 );
}
undefined8 ossl_qtx_get_queue_len_datagrams(long param_1) {
   return *(undefined8*)( param_1 + 0x3a0 );
}
undefined8 ossl_qtx_get_queue_len_bytes(long param_1) {
   return *(undefined8*)( param_1 + 0x3a8 );
}
undefined8 ossl_qtx_get_cur_dgram_len_bytes(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (*(long*)( param_1 + 0x3b0 ) != 0) {
      uVar1 = *(undefined8*)( *(long*)( param_1 + 0x3b0 ) + 0x10 );
   }

   return uVar1;
}
undefined8 ossl_qtx_get_unflushed_pkt_count(long param_1) {
   return *(undefined8*)( param_1 + 0x3b8 );
}
void ossl_qtx_trigger_key_update(long param_1) {
   ossl_qrl_enc_level_set_key_update(param_1 + 0x10, 3);
   return;
}
undefined8 ossl_qtx_get_cur_epoch_pkt_count(long param_1, undefined8 param_2) {
   long lVar1;
   lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10, param_2, 1);
   if (lVar1 != 0) {
      return *(undefined8*)( lVar1 + 0x58 );
   }

   return 0xffffffffffffffff;
}
undefined8 ossl_qtx_get_max_epoch_pkt_count(long param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10, param_2, 1);
   if (lVar1 != 0) {
      uVar2 = ossl_qrl_get_suite_max_pkt(*(undefined4*)( lVar1 + 0x60 ));
      return uVar2;
   }

   return 0xffffffffffffffff;
}
void ossl_qtx_set_msg_callback(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 1000 ) = param_2;
   *(undefined8*)( param_1 + 0x3f8 ) = param_3;
   return;
}
void ossl_qtx_set_msg_callback_arg(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x3f0 ) = param_2;
   return;
}
undefined8 ossl_qtx_get_key_epoch(long param_1) {
   long lVar1;
   lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10, 3, 1);
   if (lVar1 != 0) {
      return *(undefined8*)( lVar1 + 0x50 );
   }

   return 0;
}

