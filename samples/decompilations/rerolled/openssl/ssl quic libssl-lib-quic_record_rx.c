void *qrx_ensure_free_rxe_part_0(long param_1, ulong param_2) {
   long lVar1;
   long lVar2;
   void *pvVar3;
   if (0xfffffffffffffe2e < param_2) {
      return (void*)0x0;
   }

   pvVar3 = CRYPTO_malloc((int)param_2 + 0x1d0, "ssl/quic/quic_record_rx.c", 0x229);
   if (pvVar3 != (void*)0x0) {
      lVar1 = *(long*)( param_1 + 0x68 );
      *(ulong*)( (long)pvVar3 + 0x60 ) = param_2;
      *(undefined8*)( (long)pvVar3 + 0x58 ) = 0;
      *(undefined8*)( (long)pvVar3 + 0x68 ) = 0;
      if (lVar1 != 0) {
         *(void**)( lVar1 + 0x48 ) = pvVar3;
      }

      lVar2 = *(long*)( param_1 + 0x60 );
      *(long*)( (long)pvVar3 + 0x50 ) = lVar1;
      *(undefined8*)( (long)pvVar3 + 0x48 ) = 0;
      *(void**)( param_1 + 0x68 ) = pvVar3;
      if (lVar2 == 0) {
         *(void**)( param_1 + 0x60 ) = pvVar3;
      }

      *(long*)( param_1 + 0x70 ) = *(long*)( param_1 + 0x70 ) + 1;
      return pvVar3;
   }

   return (void*)0x0;
}
undefined4 qrx_decrypt_pkt_body_constprop_0(long param_1, uchar *param_2, uchar *param_3, ulong param_4, long *param_5, uchar *param_6, ulong param_7, ulong param_8, int param_9, uint param_10, long *param_11) {
   char cVar1;
   EVP_CIPHER_CTX *ctx;
   undefined4 uVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   uchar *iv;
   ulong uVar6;
   uint uVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60._0_4_ = 0;
   local_60._4_4_ = 0;
   lVar4 = ossl_qrl_enc_level_set_get(param_1 + 0xa8, param_9, 1);
   if (( ( ( ( param_7 | param_4 ) < 0x80000000 ) && ( lVar4 != 0 ) ) && ( *(uint*)( lVar4 + 100 ) < param_4 ) ) && ( uVar6 = *(ulong*)( param_1 + 0x3f0 ) ),uVar5 = ossl_qrl_get_suite_max_forged_pkt(*(undefined4*)( lVar4 + 0x60 )),uVar6 < uVar5) {
      if (param_9 == 3) {
         cVar1 = *(char*)( lVar4 + 0x68 );
         if (cVar1 == '\x03') {
            lVar8 = *(long*)( lVar4 + 0x50 );
            *param_11 = lVar8;
            uVar6 = ( ulong )((uint)lVar8 & 1);
         }
 else {
            uVar6 = ( ulong )(param_10 & 0xff);
            if (cVar1 == '\x01') {
               *param_11 = ( ulong )(( uint ) * (long*)( lVar4 + 0x50 ) & 1 ^ param_10 & 0xff) + *(long*)( lVar4 + 0x50 );
            }
 else if (( ( cVar1 == '\x02' ) && ( uVar7 = ( uint ) * (long*)( lVar4 + 0x50 ) & 1 ),*param_11 = *(long*)( lVar4 + 0x50 ) - ( ulong )(uVar7 ^ param_10 & 0xff),uVar7 != ( param_10 & 0xff ) )) goto LAB_00100131;
         }

      }
 else {
         *param_11 = 0;
         uVar6 = 0;
      }

      ctx = *(EVP_CIPHER_CTX**)( lVar4 + 0x30 + uVar6 * 8 );
      iVar3 = EVP_CIPHER_CTX_get_iv_length(ctx);
      if (7 < iVar3) {
         lVar8 = (long)iVar3;
         iv = (uchar*)__memcpy_chk(local_58, lVar4 + 0x6a + uVar6 * 0x10, lVar8);
         *(ulong*)( (long)&local_60 + lVar8 ) = *(ulong*)( (long)&local_60 + lVar8 ) ^ ( param_8 >> 0x38 | ( param_8 & 0xff000000000000 ) >> 0x28 | ( param_8 & 0xff0000000000 ) >> 0x18 | ( param_8 & 0xff00000000 ) >> 8 | ( param_8 & 0xff000000 ) << 8 | ( param_8 & 0xff0000 ) << 0x18 | ( param_8 & 0xff00 ) << 0x28 | param_8 << 0x38 );
         iVar3 = EVP_CipherInit_ex(ctx, (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, iv, 0);
         if (( iVar3 == 1 ) && ( iVar3 = EVP_CIPHER_CTX_ctrl(ctx, 0x11, *(uint*)( lVar4 + 100 ), param_3 + ( param_4 - *(uint*)( lVar4 + 100 ) )) ),iVar3 == 1) {
            iVar3 = EVP_CipherUpdate(ctx, (uchar*)0x0, (int*)&local_60, param_6, (int)param_7);
            if (( iVar3 == 1 ) && ( iVar3 = EVP_CipherUpdate(ctx, param_2, (int*)&local_60, param_3, (int)param_4 - *(int*)( lVar4 + 100 )) ),iVar3 == 1) {
               iVar3 = EVP_CipherFinal_ex(ctx, (uchar*)0x0, (int*)( (long)&local_60 + 4 ));
               if (iVar3 == 1) {
                  *param_5 = (long)(int)local_60;
                  uVar2 = 1;
                  goto LAB_00100133;
               }

               *(long*)( param_1 + 0x3f0 ) = *(long*)( param_1 + 0x3f0 ) + 1;
            }

         }

      }

   }

   LAB_00100131:uVar2 = 0;
   LAB_00100133:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
void *qrx_resize_rxe(long *param_1, void *param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   void *pvVar3;
   if (param_2 == (void*)0x0) {
      return (void*)0x0;
   }

   if (0xfffffffffffffe2e < param_3) {
      return (void*)0x0;
   }

   lVar1 = *(long*)( (long)param_2 + 0x50 );
   lVar2 = *(long*)( (long)param_2 + 0x48 );
   if (param_2 == (void*)*param_1) {
      *param_1 = lVar2;
      pvVar3 = (void*)param_1[1];
   }
 else {
      pvVar3 = (void*)param_1[1];
   }

   if (param_2 == pvVar3) {
      param_1[1] = lVar1;
   }

   if (lVar1 != 0) {
      *(long*)( lVar1 + 0x48 ) = lVar2;
      lVar2 = *(long*)( (long)param_2 + 0x48 );
   }

   if (lVar2 != 0) {
      *(long*)( lVar2 + 0x50 ) = lVar1;
   }

   param_1[2] = param_1[2] + -1;
   *(undefined1(*) [16])( (long)param_2 + 0x48 ) = (undefined1[16])0x0;
   if (*(long*)( (long)param_2 + 0x68 ) != 0) {
      return (void*)0x0;
   }

   pvVar3 = CRYPTO_realloc(param_2, (int)param_3 + 0x1d0, "ssl/quic/quic_record_rx.c", 0x266);
   if (pvVar3 != (void*)0x0) {
      if (lVar1 == 0) {
         lVar1 = *param_1;
         if (lVar1 != 0) {
            *(void**)( lVar1 + 0x50 ) = pvVar3;
         }

         lVar2 = param_1[1];
         *(long*)( (long)pvVar3 + 0x48 ) = lVar1;
         *(undefined8*)( (long)pvVar3 + 0x50 ) = 0;
         *param_1 = (long)pvVar3;
         if (lVar2 != 0) goto LAB_00100419;
      }
 else {
         lVar2 = *(long*)( lVar1 + 0x48 );
         *(long*)( (long)pvVar3 + 0x48 ) = lVar2;
         *(long*)( (long)pvVar3 + 0x50 ) = lVar1;
         if (lVar2 != 0) {
            *(void**)( lVar2 + 0x50 ) = pvVar3;
         }

         *(void**)( lVar1 + 0x48 ) = pvVar3;
         if (lVar1 != param_1[1]) goto LAB_00100419;
      }

      param_1[1] = (long)pvVar3;
      LAB_00100419:param_1[2] = param_1[2] + 1;
      *(ulong*)( (long)pvVar3 + 0x60 ) = param_3;
      return pvVar3;
   }

   if (lVar1 == 0) {
      lVar1 = *param_1;
      if (lVar1 != 0) {
         *(void**)( lVar1 + 0x50 ) = param_2;
      }

      lVar2 = param_1[1];
      *(long*)( (long)param_2 + 0x48 ) = lVar1;
      *(undefined8*)( (long)param_2 + 0x50 ) = 0;
      *param_1 = (long)param_2;
      if (lVar2 != 0) goto LAB_0010046e;
   }
 else {
      lVar2 = *(long*)( lVar1 + 0x48 );
      *(long*)( (long)param_2 + 0x48 ) = lVar2;
      *(long*)( (long)param_2 + 0x50 ) = lVar1;
      if (lVar2 != 0) {
         *(void**)( lVar2 + 0x50 ) = param_2;
      }

      *(void**)( lVar1 + 0x48 ) = param_2;
      if (lVar1 != param_1[1]) goto LAB_0010046e;
   }

   param_1[1] = (long)param_2;
   LAB_0010046e:param_1[2] = param_1[2] + 1;
   return (void*)0x0;
}
undefined8 *ossl_qrx_new(undefined8 *param_1) {
   undefined1 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   if ((undefined8*)param_1[2] != (undefined8*)0x0) {
      puVar9 = (undefined8*)0x0;
      if (param_1[4] != 0) {
         puVar9 = (undefined8*)CRYPTO_zalloc(0x440, "ssl/quic/quic_record_rx.c", 0xca);
         if (puVar9 != (undefined8*)0x0) {
            uVar3 = param_1[5];
            uVar4 = param_1[6];
            uVar5 = *param_1;
            uVar6 = param_1[1];
            uVar7 = param_1[3];
            uVar8 = param_1[4];
            puVar9[0x14] = param_1[7];
            uVar2 = param_1[2];
            puVar9[0x12] = uVar3;
            puVar9[0x13] = uVar4;
            puVar9[2] = uVar2;
            uVar1 = *(undefined1*)( param_1 + 8 );
            *puVar9 = uVar5;
            puVar9[1] = uVar6;
            *(undefined1*)( puVar9 + 0x84 ) = uVar1;
            puVar9[3] = uVar7;
            puVar9[4] = uVar8;
         }

      }

      return puVar9;
   }

   return (undefined8*)param_1[2];
}
void ossl_qrx_free(void *param_1) {
   void *pvVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined8 *puVar4;
   void *pvVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   void *pvVar8;
   int iVar9;
   int iVar10;
   if (param_1 == (void*)0x0) {
      return;
   }

   pvVar5 = *(void**)( (long)param_1 + 0x60 );
   pvVar8 = pvVar5;
   if (pvVar5 != (void*)0x0) {
      while (true) {
         pvVar1 = *(void**)( (long)pvVar8 + 0x48 );
         if (pvVar8 == pvVar5) {
            *(void**)( (long)param_1 + 0x60 ) = pvVar1;
         }

         lVar2 = *(long*)( (long)pvVar8 + 0x50 );
         if (pvVar8 == *(void**)( (long)param_1 + 0x68 )) {
            *(long*)( (long)param_1 + 0x68 ) = lVar2;
         }

         pvVar5 = pvVar1;
         if (lVar2 != 0) {
            *(void**)( lVar2 + 0x48 ) = pvVar1;
            pvVar5 = *(void**)( (long)pvVar8 + 0x48 );
         }

         if (pvVar5 == (void*)0x0) {
            *(long*)( (long)param_1 + 0x70 ) = *(long*)( (long)param_1 + 0x70 ) + -1;
            *(undefined1(*) [16])( (long)pvVar8 + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            *(long*)( (long)pvVar5 + 0x50 ) = lVar2;
            *(long*)( (long)param_1 + 0x70 ) = *(long*)( (long)param_1 + 0x70 ) + -1;
            *(undefined1(*) [16])( (long)pvVar8 + 0x48 ) = (undefined1[16])0x0;
         }

         CRYPTO_free(pvVar8);
         if (pvVar1 == (void*)0x0) break;
         pvVar5 = *(void**)( (long)param_1 + 0x60 );
         pvVar8 = pvVar1;
      }
;
   }

   pvVar5 = *(void**)( (long)param_1 + 0x78 );
   pvVar8 = pvVar5;
   if (pvVar5 != (void*)0x0) {
      while (true) {
         pvVar1 = *(void**)( (long)pvVar8 + 0x48 );
         if (pvVar8 == pvVar5) {
            *(void**)( (long)param_1 + 0x78 ) = pvVar1;
            lVar2 = *(long*)( (long)pvVar8 + 0x50 );
            pvVar5 = *(void**)( (long)param_1 + 0x80 );
         }
 else {
            lVar2 = *(long*)( (long)pvVar8 + 0x50 );
            pvVar5 = *(void**)( (long)param_1 + 0x80 );
         }

         if (pvVar8 == pvVar5) {
            *(long*)( (long)param_1 + 0x80 ) = lVar2;
         }

         pvVar5 = pvVar1;
         if (lVar2 != 0) {
            *(void**)( lVar2 + 0x48 ) = pvVar1;
            pvVar5 = *(void**)( (long)pvVar8 + 0x48 );
         }

         if (pvVar5 == (void*)0x0) {
            *(long*)( (long)param_1 + 0x88 ) = *(long*)( (long)param_1 + 0x88 ) + -1;
            *(undefined1(*) [16])( (long)pvVar8 + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            *(long*)( (long)pvVar5 + 0x50 ) = lVar2;
            *(long*)( (long)param_1 + 0x88 ) = *(long*)( (long)param_1 + 0x88 ) + -1;
            *(undefined1(*) [16])( (long)pvVar8 + 0x48 ) = (undefined1[16])0x0;
         }

         CRYPTO_free(pvVar8);
         if (pvVar1 == (void*)0x0) break;
         pvVar5 = *(void**)( (long)param_1 + 0x78 );
         pvVar8 = pvVar1;
      }
;
   }

   pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x30 );
   pauVar7 = pauVar6;
   if (pauVar6 != (undefined1(*) [16])0x0) {
      while (true) {
         pauVar3 = *(undefined1(**) [16])*pauVar7;
         if (pauVar7 == pauVar6) {
            *(undefined1(**) [16])( (long)param_1 + 0x30 ) = pauVar3;
            puVar4 = *(undefined8**)( *pauVar7 + 8 );
            pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x38 );
         }
 else {
            puVar4 = *(undefined8**)( *pauVar7 + 8 );
            pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x38 );
         }

         if (pauVar7 == pauVar6) {
            *(undefined8**)( (long)param_1 + 0x38 ) = puVar4;
         }

         pauVar6 = pauVar3;
         if (puVar4 != (undefined8*)0x0) {
            *puVar4 = pauVar3;
            pauVar6 = *(undefined1(**) [16])*pauVar7;
         }

         if (pauVar6 == (undefined1(*) [16])0x0) {
            *(long*)( (long)param_1 + 0x40 ) = *(long*)( (long)param_1 + 0x40 ) + -1;
            *pauVar7 = (undefined1[16])0x0;
            ossl_quic_demux_release_urxe(*(undefined8*)( (long)param_1 + 0x10 ));
         }
 else {
            *(undefined8**)( *pauVar6 + 8 ) = puVar4;
            *(long*)( (long)param_1 + 0x40 ) = *(long*)( (long)param_1 + 0x40 ) + -1;
            *pauVar7 = (undefined1[16])0x0;
            ossl_quic_demux_release_urxe(*(undefined8*)( (long)param_1 + 0x10 ));
         }

         if (pauVar3 == (undefined1(*) [16])0x0) break;
         pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x30 );
         pauVar7 = pauVar3;
      }
;
   }

   pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x48 );
   pauVar7 = pauVar6;
   if (pauVar6 != (undefined1(*) [16])0x0) {
      while (true) {
         pauVar3 = *(undefined1(**) [16])*pauVar7;
         if (pauVar7 == pauVar6) {
            *(undefined1(**) [16])( (long)param_1 + 0x48 ) = pauVar3;
            puVar4 = *(undefined8**)( *pauVar7 + 8 );
            pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x50 );
         }
 else {
            puVar4 = *(undefined8**)( *pauVar7 + 8 );
            pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x50 );
         }

         if (pauVar7 == pauVar6) {
            *(undefined8**)( (long)param_1 + 0x50 ) = puVar4;
         }

         pauVar6 = pauVar3;
         if (puVar4 != (undefined8*)0x0) {
            *puVar4 = pauVar3;
            pauVar6 = *(undefined1(**) [16])*pauVar7;
         }

         if (pauVar6 == (undefined1(*) [16])0x0) {
            *(long*)( (long)param_1 + 0x58 ) = *(long*)( (long)param_1 + 0x58 ) + -1;
            *pauVar7 = (undefined1[16])0x0;
            ossl_quic_demux_release_urxe(*(undefined8*)( (long)param_1 + 0x10 ));
         }
 else {
            *(undefined8**)( *pauVar6 + 8 ) = puVar4;
            *(long*)( (long)param_1 + 0x58 ) = *(long*)( (long)param_1 + 0x58 ) + -1;
            *pauVar7 = (undefined1[16])0x0;
            ossl_quic_demux_release_urxe(*(undefined8*)( (long)param_1 + 0x10 ));
         }

         if (pauVar3 == (undefined1(*) [16])0x0) break;
         pauVar6 = *(undefined1(**) [16])( (long)param_1 + 0x48 );
         pauVar7 = pauVar3;
      }
;
   }

   iVar9 = 0;
   do {
      iVar10 = iVar9 + 1;
      ossl_qrl_enc_level_set_discard((long)param_1 + 0xa8, iVar9);
      iVar9 = iVar10;
   }
 while ( iVar10 != 4 );
   CRYPTO_free(param_1);
   return;
}
void ossl_qrx_inject_urxe(long param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   long lVar2;
   *(undefined1*)( param_2 + 0x24 ) = 0;
   puVar1 = *(undefined8**)( param_1 + 0x38 );
   *(undefined1(*) [16])( param_2 + 4 ) = (undefined1[16])0x0;
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_2;
   }

   lVar2 = *(long*)( param_1 + 0x30 );
   param_2[1] = puVar1;
   *param_2 = 0;
   *(undefined8**)( param_1 + 0x38 ) = param_2;
   if (lVar2 == 0) {
      *(undefined8**)( param_1 + 0x30 ) = param_2;
   }

   *(long*)( param_1 + 0x40 ) = *(long*)( param_1 + 0x40 ) + 1;
   if (*(code**)( param_1 + 0x428 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x428 ) )(0, 1, 0x200, param_2 + 0x25, param_2[2], *(undefined8*)( param_1 + 0x438 ), *(undefined8*)( param_1 + 0x430 ));
      return;
   }

   return;
}
undefined4 ossl_qrx_validate_initial_packet(long param_1, long param_2) {
   long lVar1;
   long lVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   byte bVar19;
   int iVar20;
   long lVar21;
   ulong uVar22;
   long lVar23;
   void *__src;
   long lVar24;
   undefined8 extraout_RDX;
   long lVar25;
   char cVar26;
   undefined4 uVar27;
   long in_FS_OFFSET;
   undefined8 uVar28;
   ulong local_98;
   undefined8 local_88;
   undefined8 local_80;
   long local_78;
   long local_70;
   undefined1 local_68[40];
   long local_40;
   lVar23 = *(long*)( param_2 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1*)( param_2 + 0x120 ) = 0;
   local_88 = 0;
   local_80 = 0xffffffffffffffff;
   *(undefined1(*) [16])( param_2 + 0x20 ) = (undefined1[16])0x0;
   if (-1 < lVar23) {
      lVar21 = *(long*)( param_1 + 0x60 );
      lVar1 = param_2 + 0x128;
      local_78 = lVar1;
      local_70 = lVar23;
      if (( lVar21 != 0 ) || ( lVar21 = lVar21 != 0 )) {
         uVar28 = 0;
         iVar20 = ossl_quic_wire_decode_pkt_hdr(&local_78, 0, 1, 0, lVar21 + 0x70, local_68);
         if (( iVar20 != 0 ) && ( ( *(char*)( lVar21 + 0x70 ) == '\x01' && ( *(uint*)( lVar21 + 0x74 ) < 2 ) ) )) {
            iVar20 = ossl_qrl_enc_level_set_have_el(param_1 + 0xa8, 0, extraout_RDX, uVar28);
            if (iVar20 == 1) {
               local_98 = 0;
               if (*(char*)( lVar21 + 0x70 ) == '\x01') {
                  local_98 = *(ulong*)( lVar21 + 0xb0 );
                  __src = *(void**)( lVar21 + 0xa8 );
                  if (local_98 != 0) {
                     if (( *(ulong*)( lVar21 + 0x60 ) < local_98 ) && ( lVar21 = lVar21 == 0 )) goto LAB_001009a0;
                     __src = memcpy((void*)( lVar21 + 0x1d0 ), __src, local_98);
                  }

                  *(void**)( lVar21 + 0xa8 ) = __src;
               }

               local_78 = lVar1;
               local_70 = lVar23;
               uVar28 = ossl_qrl_enc_level_set_get(param_1 + 0xa8, 0, 1);
               iVar20 = ossl_quic_hdr_protector_decrypt(uVar28, local_68);
               if (iVar20 != 0) {
                  *(ulong*)( param_2 + 0x28 ) = *(ulong*)( param_2 + 0x28 ) | 1;
                  iVar20 = ossl_quic_wire_decode_pkt_hdr(&local_78, 0, 0, 0, lVar21 + 0x70, 0, 0);
                  if (iVar20 == 1) {
                     bVar19 = *(char*)( lVar21 + 0x70 ) - 2;
                     iVar20 = 0;
                     if (( bVar19 < 4 ) && ( iVar20 = 0 * (int*)( CSWTCH_147 + (ulong)bVar19 * 4 ) != 0 )) {
                        iVar20 = ( *(int*)( CSWTCH_147 + (ulong)bVar19 * 4 ) != 2 ) + 1;
                     }

                     iVar20 = ossl_quic_wire_decode_pkt_hdr_pn(lVar21 + 0xa2, *(byte*)( lVar21 + 0x71 ) >> 2 & 0xf, *(undefined8*)( param_1 + 0x90 + (long)iVar20 * 8 ), lVar21 + 200);
                     if (iVar20 != 0) {
                        lVar4 = *(long*)( lVar21 + 0xc0 );
                        lVar24 = *(long*)( lVar21 + 0xb8 );
                        lVar25 = lVar4;
                        if (*(ulong*)( lVar21 + 0x60 ) < local_98 + lVar24) {
                           lVar21 = qrx_resize_rxe(param_1 + 0x60, lVar21, local_98 + lVar24);
                           if (lVar21 == 0) goto LAB_001009a0;
                           lVar24 = *(long*)( lVar21 + 0xb8 );
                           lVar25 = *(long*)( lVar21 + 0xc0 );
                        }

                        lVar2 = lVar21 + 0x1d0 + local_98;
                        iVar20 = qrx_decrypt_pkt_body_constprop_0(param_1, lVar2, lVar25, lVar24, &local_88, lVar1, lVar4 - lVar1, *(undefined8*)( lVar21 + 200 ), 0, *(byte*)( lVar21 + 0x71 ) >> 1 & 1, &local_80);
                        if (iVar20 != 0) {
                           cVar26 = '\0';
                           bVar19 = *(char*)( lVar21 + 0x70 ) - 2;
                           if (( bVar19 < 4 ) && ( *(int*)( CSWTCH_147 + (ulong)bVar19 * 4 ) != 0 )) {
                              cVar26 = ( *(int*)( CSWTCH_147 + (ulong)bVar19 * 4 ) != 2 ) + '\x01';
                           }

                           if (( *(code**)( param_1 + 0x400 ) == (code*)0x0 ) || ( iVar20 = ( **(code**)( param_1 + 0x400 ) )(*(undefined8*)( lVar21 + 200 ), cVar26, *(undefined8*)( param_1 + 0x408 )) ),iVar20 != 0) {
                              *(ulong*)( param_2 + 0x20 ) = *(ulong*)( param_2 + 0x20 ) | 1;
                              *(long*)( lVar21 + 0xc0 ) = lVar2;
                              *(long*)( lVar21 + 0x1b8 ) = lVar23;
                              *(undefined8*)( lVar21 + 0x1c0 ) = local_80;
                              *(undefined8*)( lVar21 + 0xb8 ) = local_88;
                              *(undefined8*)( lVar21 + 0x58 ) = local_88;
                              bVar19 = *(char*)( lVar21 + 0x70 ) - 2;
                              if (bVar19 < 4) {
                                 uVar3 = *(uint*)( CSWTCH_147 + (ulong)bVar19 * 4 );
                                 uVar22 = (ulong)uVar3;
                                 if (uVar3 != 0) {
                                    if (uVar3 == 2) {
                                       uVar22 = 1;
                                    }
 else {
                                       uVar22 = 2;
                                    }

                                 }

                              }
 else {
                                 uVar22 = 0;
                              }

                              if (*(ulong*)( param_1 + 0x90 + uVar22 * 8 ) < *(ulong*)( lVar21 + 200 )) {
                                 *(ulong*)( param_1 + ( uVar22 + 0x12 ) * 8 ) = *(ulong*)( lVar21 + 200 );
                              }

                              uVar28 = *(undefined8*)( param_2 + 0x40 );
                              uVar5 = *(undefined8*)( param_2 + 0x48 );
                              uVar6 = *(undefined8*)( param_2 + 0x50 );
                              uVar7 = *(undefined8*)( param_2 + 0x58 );
                              uVar8 = *(undefined8*)( param_2 + 0x60 );
                              uVar9 = *(undefined8*)( param_2 + 0x68 );
                              uVar10 = *(undefined8*)( param_2 + 0x70 );
                              uVar11 = *(undefined8*)( param_2 + 0x78 );
                              uVar12 = *(undefined8*)( param_2 + 0x80 );
                              uVar13 = *(undefined8*)( param_2 + 0x88 );
                              uVar14 = *(undefined8*)( param_2 + 0x90 );
                              *(undefined8*)( lVar21 + 0xd0 ) = *(undefined8*)( param_2 + 0x38 );
                              *(undefined8*)( lVar21 + 0xd8 ) = uVar28;
                              uVar15 = *(undefined8*)( param_2 + 0x98 );
                              uVar16 = *(undefined8*)( param_2 + 0xa0 );
                              uVar28 = *(undefined8*)( param_2 + 0x118 );
                              *(undefined8*)( lVar21 + 0xe0 ) = uVar5;
                              *(undefined8*)( lVar21 + 0xe8 ) = uVar6;
                              uVar5 = *(undefined8*)( param_2 + 0xa8 );
                              uVar6 = *(undefined8*)( param_2 + 0xb0 );
                              uVar17 = *(undefined8*)( param_2 + 0xb8 );
                              uVar18 = *(undefined8*)( param_2 + 0xc0 );
                              *(undefined8*)( lVar21 + 0xf0 ) = uVar7;
                              *(undefined8*)( lVar21 + 0xf8 ) = uVar8;
                              *(undefined8*)( lVar21 + 0x100 ) = uVar9;
                              *(undefined8*)( lVar21 + 0x108 ) = uVar10;
                              uVar7 = *(undefined8*)( param_2 + 200 );
                              uVar8 = *(undefined8*)( param_2 + 0xd0 );
                              uVar9 = *(undefined8*)( param_2 + 0xd8 );
                              uVar10 = *(undefined8*)( param_2 + 0xe0 );
                              *(undefined8*)( lVar21 + 0x110 ) = uVar11;
                              *(undefined8*)( lVar21 + 0x118 ) = uVar12;
                              uVar11 = *(undefined8*)( param_2 + 0xe8 );
                              uVar12 = *(undefined8*)( param_2 + 0xf0 );
                              *(undefined8*)( lVar21 + 0x120 ) = uVar13;
                              *(undefined8*)( lVar21 + 0x128 ) = uVar14;
                              uVar13 = *(undefined8*)( param_2 + 0xf8 );
                              uVar14 = *(undefined8*)( param_2 + 0x100 );
                              *(undefined8*)( lVar21 + 0x130 ) = uVar15;
                              *(undefined8*)( lVar21 + 0x138 ) = uVar16;
                              uVar15 = *(undefined8*)( param_2 + 0x108 );
                              uVar16 = *(undefined8*)( param_2 + 0x110 );
                              *(undefined8*)( lVar21 + 0x1b0 ) = uVar28;
                              uVar28 = *(undefined8*)( param_2 + 0x30 );
                              *(undefined8*)( lVar21 + 0x140 ) = uVar5;
                              *(undefined8*)( lVar21 + 0x148 ) = uVar6;
                              *(undefined8*)( lVar21 + 0x1c8 ) = uVar28;
                              *(undefined8*)( lVar21 + 0x150 ) = uVar17;
                              *(undefined8*)( lVar21 + 0x158 ) = uVar18;
                              *(undefined8*)( lVar21 + 0x160 ) = uVar7;
                              *(undefined8*)( lVar21 + 0x168 ) = uVar8;
                              *(undefined8*)( lVar21 + 0x170 ) = uVar9;
                              *(undefined8*)( lVar21 + 0x178 ) = uVar10;
                              *(undefined8*)( lVar21 + 0x180 ) = uVar11;
                              *(undefined8*)( lVar21 + 0x188 ) = uVar12;
                              *(undefined8*)( lVar21 + 400 ) = uVar13;
                              *(undefined8*)( lVar21 + 0x198 ) = uVar14;
                              *(undefined8*)( lVar21 + 0x1a0 ) = uVar15;
                              *(undefined8*)( lVar21 + 0x1a8 ) = uVar16;
                              lVar23 = *(long*)( lVar21 + 0x48 );
                              if (*(long*)( param_1 + 0x60 ) == lVar21) {
                                 *(long*)( param_1 + 0x60 ) = lVar23;
                              }

                              lVar1 = *(long*)( lVar21 + 0x50 );
                              if (*(long*)( param_1 + 0x68 ) == lVar21) {
                                 *(long*)( param_1 + 0x68 ) = lVar1;
                              }

                              if (lVar1 != 0) {
                                 *(long*)( lVar1 + 0x48 ) = lVar23;
                                 lVar23 = *(long*)( lVar21 + 0x48 );
                              }

                              if (lVar23 != 0) {
                                 *(long*)( lVar23 + 0x50 ) = lVar1;
                              }

                              *(long*)( param_1 + 0x70 ) = *(long*)( param_1 + 0x70 ) + -1;
                              *(undefined1(*) [16])( lVar21 + 0x48 ) = (undefined1[16])0x0;
                              lVar23 = *(long*)( param_1 + 0x80 );
                              if (lVar23 != 0) {
                                 *(long*)( lVar23 + 0x48 ) = lVar21;
                              }

                              lVar1 = *(long*)( param_1 + 0x78 );
                              *(long*)( lVar21 + 0x50 ) = lVar23;
                              *(undefined8*)( lVar21 + 0x48 ) = 0;
                              *(long*)( param_1 + 0x80 ) = lVar21;
                              if (lVar1 == 0) {
                                 *(long*)( param_1 + 0x78 ) = lVar21;
                              }

                              *(long*)( param_1 + 0x88 ) = *(long*)( param_1 + 0x88 ) + 1;
                              uVar27 = 1;
                              goto LAB_001009a3;
                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_001009a0:uVar27 = 0;
   LAB_001009a3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar27;
}
undefined8 ossl_qrx_provide_secret(undefined8 *param_1, uint param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   long *plVar1;
   undefined8 *puVar2;
   int iVar3;
   undefined1(*pauVar4)[16];
   long lVar5;
   if (3 < param_2) {
      return 0;
   }

   iVar3 = ossl_qrl_enc_level_set_provide_secret(param_1 + 0x15, *param_1, param_1[1], param_2, param_3, param_4, param_5, param_6, *(undefined1*)( param_1 + 0x84 ), 0);
   if (iVar3 != 0) {
      pauVar4 = (undefined1(*) [16])param_1[9];
      do {
         if (pauVar4 == (undefined1(*) [16])0x0) {
            return 1;
         }

         while (true) {
            lVar5 = *(long*)*pauVar4;
            plVar1 = *(long**)( *pauVar4 + 8 );
            param_1[9] = lVar5;
            if (pauVar4 == (undefined1(*) [16])param_1[10]) {
               param_1[10] = plVar1;
            }

            if (plVar1 != (long*)0x0) {
               *plVar1 = lVar5;
               lVar5 = *(long*)*pauVar4;
            }

            if (lVar5 != 0) {
               *(long**)( lVar5 + 8 ) = plVar1;
            }

            param_1[0xb] = param_1[0xb] + -1;
            *pauVar4 = (undefined1[16])0x0;
            puVar2 = (undefined8*)param_1[7];
            if (puVar2 != (undefined8*)0x0) {
               *puVar2 = pauVar4;
            }

            lVar5 = param_1[6];
            *(undefined8**)( *pauVar4 + 8 ) = puVar2;
            *(undefined8*)*pauVar4 = 0;
            param_1[7] = pauVar4;
            if (lVar5 == 0) break;
            pauVar4 = (undefined1(*) [16])param_1[9];
            param_1[8] = param_1[8] + 1;
            if (pauVar4 == (undefined1(*) [16])0x0) {
               return 1;
            }

         }
;
         param_1[6] = pauVar4;
         pauVar4 = (undefined1(*) [16])param_1[9];
         param_1[8] = param_1[8] + 1;
      }
 while ( true );
   }

   return 0;
}
undefined8 ossl_qrx_discard_enc_level(long param_1, uint param_2) {
   if (3 < param_2) {
      return 0;
   }

   ossl_qrl_enc_level_set_discard(param_1 + 0xa8);
   return 1;
}
bool ossl_qrx_processed_read_pending(long param_1) {
   return *(long*)( param_1 + 0x88 ) != 0;
}
bool ossl_qrx_unprocessed_read_pending(long param_1) {
   bool bVar1;
   bVar1 = true;
   if (*(long*)( param_1 + 0x40 ) == 0) {
      bVar1 = *(long*)( param_1 + 0x58 ) != 0;
   }

   return bVar1;
}
undefined8 ossl_qrx_read_pkt(long param_1, undefined8 *param_2) {
   long lVar1;
   byte bVar2;
   uint uVar3;
   undefined1(*pauVar4)[16];
   ulong uVar5;
   long *plVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   bool bVar17;
   undefined8 *puVar18;
   byte bVar19;
   char cVar20;
   int iVar21;
   int iVar22;
   long lVar23;
   ulong uVar24;
   undefined8 uVar25;
   long lVar26;
   void *pvVar27;
   long lVar28;
   code *pcVar29;
   undefined1(*pauVar30)[16];
   long lVar31;
   long *plVar32;
   ulong uVar33;
   char cVar34;
   long lVar35;
   ulong uVar36;
   long in_FS_OFFSET;
   bool bVar37;
   bool bVar38;
   ulong local_f8;
   ulong local_f0;
   long local_c0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 *local_88;
   ulong local_80;
   undefined1 local_78[32];
   byte local_58;
   undefined7 uStack_57;
   undefined5 uStack_50;
   undefined4 uStack_4b;
   undefined4 uStack_47;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar21 = ossl_qrx_processed_read_pending();
   if (iVar21 == 0) {
      pauVar4 = *(undefined1(**) [16])( param_1 + 0x30 );
      while (pauVar4 != (undefined1(*) [16])0x0) {
         uVar5 = *(ulong*)pauVar4[1];
         *(long*)( param_1 + 1000 ) = *(long*)( param_1 + 1000 ) + uVar5;
         uStack_47 = 0;
         local_58 = 0xff;
         uStack_57 = 0;
         uStack_50 = 0;
         uStack_4b = 0;
         if (( (long)uVar5 < 0 ) || ( local_88 = (undefined8*)( pauVar4[0x12] + 8 ) ),local_80 = uVar5,uVar5 < 7) {
            bVar17 = false;
            lVar28 = *(long*)*pauVar4;
            LAB_00101ba3:*(long*)( param_1 + 0x30 ) = lVar28;
            plVar6 = *(long**)( *pauVar4 + 8 );
            pauVar30 = *(undefined1(**) [16])( param_1 + 0x38 );
         }
 else {
            bVar17 = false;
            uVar33 = 0;
            do {
               uVar24 = local_80;
               puVar7 = local_88;
               local_98 = 0;
               lVar28 = *(long*)( param_1 + 0x60 );
               local_90 = 0xffffffffffffffff;
               if (( lVar28 != 0 ) || ( lVar28 = qrx_ensure_free_rxe_part_0(param_1, local_80) ),lVar28 != 0) {
                  uVar36 = *(ulong*)pauVar4[2];
                  bVar37 = ( *(ulong*)( pauVar4[2] + 8 ) >> ( uVar33 & 0x3f ) & 1 ) == 0;
                  iVar21 = ossl_quic_wire_decode_pkt_hdr(&local_88, *(undefined8*)( param_1 + 0x18 ), bVar37, 0, lVar28 + 0x70, local_78, 0);
                  puVar18 = local_88;
                  bVar19 = (byte)uVar33;
                  if (iVar21 == 0) {
                     uVar36 = 1L << ( bVar19 & 0x3f );
                     LAB_001012b0:*(ulong*)pauVar4[2] = *(ulong*)pauVar4[2] | uVar36;
                     pauVar30 = *(undefined1(**) [16])( param_1 + 0x30 );
                     goto LAB_001012b8;
                  }

                  bVar38 = ( uVar36 >> ( uVar33 & 0x3f ) & 1 ) != 0;
                  if (uVar33 == 0) {
                     local_58 = ( byte ) * (undefined8*)( lVar28 + 0x78 );
                     uStack_57 = ( undefined7 )(( ulong ) * (undefined8*)( lVar28 + 0x78 ) >> 8);
                     uStack_50 = ( undefined5 ) * (undefined8*)( lVar28 + 0x80 );
                     uStack_4b = ( undefined4 ) * (undefined8*)( lVar28 + 0x85 );
                     uStack_47 = ( undefined4 )(( ulong ) * (undefined8*)( lVar28 + 0x85 ) >> 0x20);
                     if (( ( bVar38 ) || ( 1 < *(uint*)( lVar28 + 0x74 ) ) ) || ( bVar2 = bVar2 == 2 )) {
                        uVar36 = 1;
                        LAB_00101856:local_f8 = local_80;
                        if (puVar18 == (undefined8*)0x0) goto LAB_001012b0;
                        *(ulong*)pauVar4[2] = *(ulong*)pauVar4[2] | uVar36;
                        uVar24 = 0;
                        LAB_00101889:local_80 = local_f8 - uVar24;
                        local_88 = puVar18;
                     }
 else {
                        if (( bVar2 & 0xfd ) != 4) goto LAB_00101165;
                        uVar24 = *(ulong*)( lVar28 + 0xb8 );
                        if (*(ulong*)( lVar28 + 0x60 ) < uVar24) {
                           lVar28 = qrx_resize_rxe(param_1 + 0x60, lVar28);
                           if (lVar28 == 0) {
                              uVar36 = 1;
                              goto LAB_00101265;
                           }

                           uVar24 = *(size_t*)( lVar28 + 0xb8 );
                        }

                        pvVar27 = memcpy((void*)( lVar28 + 0x1d0 ), *(void**)( lVar28 + 0xc0 ), uVar24);
                        uVar25 = *(undefined8*)( pauVar4[3] + 8 );
                        uVar8 = *(undefined8*)pauVar4[4];
                        *(ulong*)pauVar4[2] = *(ulong*)pauVar4[2] | 1;
                        uVar9 = *(undefined8*)( pauVar4[4] + 8 );
                        uVar10 = *(undefined8*)pauVar4[5];
                        uVar11 = *(undefined8*)( pauVar4[5] + 8 );
                        uVar12 = *(undefined8*)pauVar4[6];
                        *(void**)( lVar28 + 0xc0 ) = pvVar27;
                        uVar13 = *(undefined8*)( pauVar4[6] + 8 );
                        uVar14 = *(undefined8*)pauVar4[7];
                        uVar15 = *(undefined8*)( pauVar4[7] + 8 );
                        uVar16 = *(undefined8*)pauVar4[8];
                        *(undefined8*)( lVar28 + 0xd0 ) = uVar25;
                        *(undefined8*)( lVar28 + 0xd8 ) = uVar8;
                        *(undefined8*)( lVar28 + 0xe0 ) = uVar9;
                        *(undefined8*)( lVar28 + 0xe8 ) = uVar10;
                        uVar25 = *(undefined8*)( pauVar4[8] + 8 );
                        uVar8 = *(undefined8*)pauVar4[9];
                        uVar9 = *(undefined8*)( pauVar4[9] + 8 );
                        uVar10 = *(undefined8*)pauVar4[10];
                        *(undefined8*)( lVar28 + 0xf0 ) = uVar11;
                        *(undefined8*)( lVar28 + 0xf8 ) = uVar12;
                        uVar11 = *(undefined8*)( pauVar4[10] + 8 );
                        uVar12 = *(undefined8*)pauVar4[0xb];
                        *(undefined8*)( lVar28 + 0x58 ) = *(undefined8*)( lVar28 + 0xb8 );
                        *(undefined8*)( lVar28 + 0x100 ) = uVar13;
                        *(undefined8*)( lVar28 + 0x108 ) = uVar14;
                        uVar13 = *(undefined8*)( pauVar4[0xb] + 8 );
                        uVar14 = *(undefined8*)pauVar4[0xc];
                        *(undefined8*)( lVar28 + 0x110 ) = uVar15;
                        *(undefined8*)( lVar28 + 0x118 ) = uVar16;
                        uVar15 = *(undefined8*)( pauVar4[0xc] + 8 );
                        uVar16 = *(undefined8*)pauVar4[0xd];
                        *(undefined8*)( lVar28 + 0x120 ) = uVar25;
                        *(undefined8*)( lVar28 + 0x128 ) = uVar8;
                        uVar25 = *(undefined8*)( pauVar4[0xd] + 8 );
                        uVar8 = *(undefined8*)pauVar4[0xe];
                        *(undefined8*)( lVar28 + 0x130 ) = uVar9;
                        *(undefined8*)( lVar28 + 0x138 ) = uVar10;
                        uVar9 = *(undefined8*)( pauVar4[0xe] + 8 );
                        uVar10 = *(undefined8*)pauVar4[0xf];
                        *(ulong*)( lVar28 + 0x1b8 ) = uVar5;
                        *(undefined8*)( lVar28 + 0x140 ) = uVar11;
                        *(undefined8*)( lVar28 + 0x148 ) = uVar12;
                        *(undefined8*)( lVar28 + 0x150 ) = uVar13;
                        *(undefined8*)( lVar28 + 0x158 ) = uVar14;
                        *(undefined8*)( lVar28 + 200 ) = 0xffffffffffffffff;
                        *(undefined8*)( lVar28 + 0x1c0 ) = 0;
                        *(undefined8*)( lVar28 + 0x160 ) = uVar15;
                        *(undefined8*)( lVar28 + 0x168 ) = uVar16;
                        *(undefined8*)( lVar28 + 0x170 ) = uVar25;
                        *(undefined8*)( lVar28 + 0x178 ) = uVar8;
                        *(undefined8*)( lVar28 + 0x180 ) = uVar9;
                        *(undefined8*)( lVar28 + 0x188 ) = uVar10;
                        lVar23 = *(long*)( param_1 + 0x60 );
                        uVar8 = *(undefined8*)( pauVar4[0xf] + 8 );
                        uVar9 = *(undefined8*)pauVar4[0x10];
                        uVar10 = *(undefined8*)( pauVar4[0x10] + 8 );
                        uVar11 = *(undefined8*)pauVar4[0x11];
                        *(undefined8*)( lVar28 + 0x1b0 ) = *(undefined8*)( pauVar4[0x11] + 8 );
                        uVar25 = *(undefined8*)pauVar4[3];
                        *(undefined8*)( lVar28 + 400 ) = uVar8;
                        *(undefined8*)( lVar28 + 0x198 ) = uVar9;
                        *(undefined8*)( lVar28 + 0x1c8 ) = uVar25;
                        lVar26 = *(long*)( lVar28 + 0x48 );
                        *(undefined8*)( lVar28 + 0x1a0 ) = uVar10;
                        *(undefined8*)( lVar28 + 0x1a8 ) = uVar11;
                        if (lVar23 == lVar28) {
                           *(long*)( param_1 + 0x60 ) = lVar26;
                        }

                        lVar23 = *(long*)( lVar28 + 0x50 );
                        if (*(long*)( param_1 + 0x68 ) == lVar28) {
                           *(long*)( param_1 + 0x68 ) = lVar23;
                        }

                        if (lVar23 != 0) {
                           *(long*)( lVar23 + 0x48 ) = lVar26;
                           lVar26 = *(long*)( lVar28 + 0x48 );
                        }

                        if (lVar26 != 0) {
                           *(long*)( lVar26 + 0x50 ) = lVar23;
                        }

                        *(long*)( param_1 + 0x70 ) = *(long*)( param_1 + 0x70 ) + -1;
                        *(undefined1(*) [16])( lVar28 + 0x48 ) = (undefined1[16])0x0;
                        lVar23 = *(long*)( param_1 + 0x80 );
                        joined_r0x00101792:if (lVar23 != 0) {
                           *(long*)( lVar23 + 0x48 ) = lVar28;
                        }

                        *(long*)( lVar28 + 0x50 ) = lVar23;
                        *(undefined8*)( lVar28 + 0x48 ) = 0;
                        *(long*)( param_1 + 0x80 ) = lVar28;
                        if (*(long*)( param_1 + 0x78 ) == 0) {
                           *(long*)( param_1 + 0x78 ) = lVar28;
                        }

                        *(long*)( param_1 + 0x88 ) = *(long*)( param_1 + 0x88 ) + 1;
                     }

                  }
 else {
                     if (( ( ( ( bVar38 ) || ( 1 < *(uint*)( lVar28 + 0x74 ) ) ) || ( bVar2 = *(byte*)( lVar28 + 0x70 ) ),bVar2 == 2 ) ) || ( ( ( bVar2 & 0xfd ) == 4 || ( 0x13 < local_58 ) ) )) {
                        uVar36 = 1L << ( bVar19 & 0x3f );
                        goto LAB_00101856;
                     }

                     LAB_00101165:if (( byte )(bVar2 - 2) < 4) {
                        iVar21 = *(int*)( CSWTCH_147 + ( ulong )(byte)(bVar2 - 2) * 4 );
                        iVar22 = ossl_qrl_enc_level_set_have_el(param_1 + 0xa8);
                        if (iVar22 != 0) {
                           if (iVar22 != 1) goto LAB_00101b80;
                           if (( iVar21 != 3 ) || ( *(char*)( param_1 + 0x421 ) != '\0' )) goto LAB_001011ac;
                        }

                     }
 else {
                        iVar21 = ossl_qrl_enc_level_set_have_el(param_1 + 0xa8, 0);
                        if (iVar21 != 0) {
                           if (iVar21 == 1) {
                              iVar21 = 0;
                              LAB_001011ac:local_c0 = param_1 + 0xa8;
                              local_f0 = 0;
                              uVar36 = 1L << ( bVar19 & 0x3f );
                              if (*(char*)( lVar28 + 0x70 ) == '\x01') {
                                 local_f0 = *(ulong*)( lVar28 + 0xb0 );
                                 pvVar27 = *(void**)( lVar28 + 0xa8 );
                                 if (local_f0 != 0) {
                                    if (( *(ulong*)( lVar28 + 0x60 ) < local_f0 ) && ( lVar28 = lVar28 == 0 )) goto LAB_00101265;
                                    pvVar27 = memcpy((void*)( lVar28 + 0x1d0 ), pvVar27, local_f0);
                                 }

                                 *(void**)( lVar28 + 0xa8 ) = pvVar27;
                              }

                              local_88 = puVar7;
                              local_80 = uVar24;
                              lVar23 = ossl_qrl_enc_level_set_get(local_c0, iVar21, 1);
                              if (bVar37) {
                                 iVar22 = ossl_quic_hdr_protector_decrypt(lVar23, local_78);
                                 if (iVar22 != 0) {
                                    *(ulong*)( pauVar4[2] + 8 ) = *(ulong*)( pauVar4[2] + 8 ) | uVar36;
                                    iVar22 = ossl_quic_wire_decode_pkt_hdr(&local_88, *(undefined8*)( param_1 + 0x18 ), 0, 0, lVar28 + 0x70, 0, 0);
                                    if (iVar22 == 1) goto LAB_00101478;
                                 }

                              }
 else {
                                 LAB_00101478:bVar19 = *(char*)( lVar28 + 0x70 ) - 2;
                                 iVar22 = 0;
                                 if (( bVar19 < 4 ) && ( iVar22 = 0 * (int*)( CSWTCH_147 + (ulong)bVar19 * 4 ) != 0 )) {
                                    iVar22 = ( *(int*)( CSWTCH_147 + (ulong)bVar19 * 4 ) != 2 ) + 1;
                                 }

                                 iVar22 = ossl_quic_wire_decode_pkt_hdr_pn(lVar28 + 0xa2, *(byte*)( lVar28 + 0x71 ) >> 2 & 0xf, *(undefined8*)( param_1 + 0x90 + (long)iVar22 * 8 ));
                                 if (iVar22 != 0) {
                                    if (*(code**)( param_1 + 0x428 ) != (code*)0x0) {
                                       ( **(code**)( param_1 + 0x428 ) )(0, 1, 0x201, puVar7, (undefined1*)( (long)puVar18 + ( -*(long *)(lVar28 + 0xb8) - (long)puVar7 ) ), *(undefined8*)( param_1 + 0x438 ), *(undefined8*)( param_1 + 0x430 ));
                                    }

                                    lVar26 = *(long*)( lVar28 + 0xc0 );
                                    lVar35 = *(long*)( lVar28 + 0xb8 );
                                    lVar31 = lVar26;
                                    if (*(ulong*)( lVar28 + 0x60 ) < local_f0 + lVar35) {
                                       lVar28 = qrx_resize_rxe(param_1 + 0x60, lVar28, local_f0 + lVar35);
                                       if (lVar28 == 0) goto LAB_001012b0;
                                       lVar35 = *(long*)( lVar28 + 0xb8 );
                                       lVar31 = *(long*)( lVar28 + 0xc0 );
                                    }

                                    lVar1 = lVar28 + 0x1d0 + local_f0;
                                    iVar21 = qrx_decrypt_pkt_body_constprop_0(param_1, lVar1, lVar31, lVar35, &local_98, puVar7, lVar26 - (long)puVar7, *(undefined8*)( lVar28 + 200 ), iVar21, *(byte*)( lVar28 + 0x71 ) >> 1 & 1, &local_90);
                                    if (iVar21 != 0) {
                                       cVar20 = *(char*)( lVar28 + 0x70 );
                                       if (( byte )(cVar20 - 2U) < 4) {
                                          cVar34 = '\0';
                                          if (*(int*)( CSWTCH_147 + ( ulong )(byte)(cVar20 - 2U) * 4 ) != 0) {
                                             cVar34 = ( *(int*)( CSWTCH_147 + ( ulong )(byte)(cVar20 - 2U) * 4 ) != 2 ) + '\x01';
                                          }

                                          pcVar29 = *(code**)( param_1 + 0x400 );
                                          if (pcVar29 != (code*)0x0) goto LAB_001015c2;
                                          LAB_001015e6:if (( cVar20 == '\x05' ) && ( ( *(byte*)( lVar28 + 0x71 ) >> 1 & 1 ) != ( ( uint ) * (undefined8*)( lVar23 + 0x50 ) & 1 ) )) {
                                             uVar25 = *(undefined8*)( lVar28 + 200 );
                                             iVar21 = ossl_qrl_enc_level_set_key_update(local_c0, 3);
                                             if (iVar21 != 0) {
                                                *(undefined8*)( param_1 + 0x3f8 ) = uVar25;
                                                if (*(code**)( param_1 + 0x410 ) != (code*)0x0) {
                                                   ( **(code**)( param_1 + 0x410 ) )(uVar25, *(undefined8*)( param_1 + 0x418 ));
                                                }

                                             }

                                          }

                                       }
 else {
                                          pcVar29 = *(code**)( param_1 + 0x400 );
                                          cVar34 = '\0';
                                          if (pcVar29 != (code*)0x0) {
                                             LAB_001015c2:iVar21 = ( *pcVar29 )(*(undefined8*)( lVar28 + 200 ), cVar34, *(undefined8*)( param_1 + 0x408 ));
                                             if (iVar21 == 0) goto LAB_00101265;
                                             cVar20 = *(char*)( lVar28 + 0x70 );
                                             goto LAB_001015e6;
                                          }

                                       }

                                       *(ulong*)pauVar4[2] = *(ulong*)pauVar4[2] | uVar36;
                                       *(long*)( lVar28 + 0xc0 ) = lVar1;
                                       *(undefined8*)( lVar28 + 0xb8 ) = local_98;
                                       *(undefined8*)( lVar28 + 0x58 ) = local_98;
                                       *(ulong*)( lVar28 + 0x1b8 ) = uVar5;
                                       *(undefined8*)( lVar28 + 0x1c0 ) = local_90;
                                       bVar19 = *(char*)( lVar28 + 0x70 ) - 2;
                                       uVar24 = 0;
                                       if (bVar19 < 4) {
                                          uVar3 = *(uint*)( CSWTCH_147 + (ulong)bVar19 * 4 );
                                          uVar24 = (ulong)uVar3;
                                          if (uVar3 != 0) {
                                             uVar24 = ( ulong )(( uVar3 != 2 ) + 1);
                                          }

                                       }

                                       if (*(ulong*)( param_1 + 0x90 + uVar24 * 8 ) < *(ulong*)( lVar28 + 200 )) {
                                          *(ulong*)( param_1 + ( uVar24 + 0x12 ) * 8 ) = *(ulong*)( lVar28 + 200 );
                                       }

                                       uVar8 = *(undefined8*)pauVar4[4];
                                       uVar9 = *(undefined8*)( pauVar4[6] + 8 );
                                       uVar10 = *(undefined8*)pauVar4[7];
                                       uVar25 = *(undefined8*)( pauVar4[0x11] + 8 );
                                       *(undefined8*)( lVar28 + 0xd0 ) = *(undefined8*)( pauVar4[3] + 8 );
                                       *(undefined8*)( lVar28 + 0xd8 ) = uVar8;
                                       uVar8 = *(undefined8*)pauVar4[5];
                                       *(undefined8*)( lVar28 + 0xe0 ) = *(undefined8*)( pauVar4[4] + 8 );
                                       *(undefined8*)( lVar28 + 0xe8 ) = uVar8;
                                       uVar8 = *(undefined8*)( pauVar4[5] + 8 );
                                       uVar11 = *(undefined8*)pauVar4[6];
                                       for (int i = 0; i < 5; i++) {
                                          *(undefined8*)( lVar28 + ( 32*i + 256 ) ) = uVar9;
                                          *(undefined8*)( lVar28 + ( 32*i + 264 ) ) = uVar10;
                                          uVar9 = *(undefined8*)( pauVar4[( 2*i + 8 )] + 8 );
                                          uVar10 = *(undefined8*)pauVar4[( 2*i + 9 )];
                                          *(undefined8*)( lVar28 + ( 32*i + 240 ) ) = uVar8;
                                          *(undefined8*)( lVar28 + ( 32*i + 248 ) ) = uVar11;
                                          uVar8 = *(undefined8*)( pauVar4[( 2*i + 7 )] + 8 );
                                          uVar11 = *(undefined8*)pauVar4[( 2*i + 8 )];
                                       }

                                       *(undefined8*)( lVar28 + 0x1b0 ) = uVar25;
                                       uVar25 = *(undefined8*)pauVar4[3];
                                       *(undefined8*)( lVar28 + 400 ) = uVar8;
                                       *(undefined8*)( lVar28 + 0x198 ) = uVar11;
                                       *(undefined8*)( lVar28 + 0x1c8 ) = uVar25;
                                       *(undefined8*)( lVar28 + 0x1a0 ) = uVar9;
                                       *(undefined8*)( lVar28 + 0x1a8 ) = uVar10;
                                       lVar23 = *(long*)( lVar28 + 0x48 );
                                       if (*(long*)( param_1 + 0x60 ) == lVar28) {
                                          *(long*)( param_1 + 0x60 ) = lVar23;
                                       }

                                       lVar26 = *(long*)( lVar28 + 0x50 );
                                       if (*(long*)( param_1 + 0x68 ) == lVar28) {
                                          *(long*)( param_1 + 0x68 ) = lVar26;
                                       }

                                       if (lVar26 != 0) {
                                          *(long*)( lVar26 + 0x48 ) = lVar23;
                                          lVar23 = *(long*)( lVar28 + 0x48 );
                                       }

                                       if (lVar23 != 0) {
                                          *(long*)( lVar23 + 0x50 ) = lVar26;
                                       }

                                       *(long*)( param_1 + 0x70 ) = *(long*)( param_1 + 0x70 ) + -1;
                                       *(undefined1(*) [16])( lVar28 + 0x48 ) = (undefined1[16])0x0;
                                       lVar23 = *(long*)( param_1 + 0x80 );
                                       goto joined_r0x00101792;
                                    }

                                 }

                              }

                           }
 else {
                              LAB_00101b80:uVar36 = 1L << ( bVar19 & 0x3f );
                           }

                           LAB_00101265:local_f8 = local_80;
                           if (puVar18 == (undefined8*)0x0) goto LAB_001012b0;
                           *(ulong*)pauVar4[2] = *(ulong*)pauVar4[2] | uVar36;
                           uVar24 = (long)puVar18 - (long)local_88;
                           if (uVar24 <= local_80) goto LAB_00101889;
                           goto LAB_001017c1;
                        }

                     }

                     bVar17 = true;
                     if (( ulong )((long)puVar18 - (long)local_88) <= local_80) {
                        local_80 = local_80 - ( (long)puVar18 - (long)local_88 );
                        local_88 = puVar18;
                     }

                  }

               }

               LAB_001017c1:uVar33 = uVar33 + 1;
            }
 while ( ( uVar33 != 0x40 ) && ( 6 < local_80 ) );
            pauVar30 = *(undefined1(**) [16])( param_1 + 0x30 );
            LAB_001012b8:lVar28 = *(long*)*pauVar4;
            if (pauVar4 == pauVar30) goto LAB_00101ba3;
            plVar6 = *(long**)( *pauVar4 + 8 );
            pauVar30 = *(undefined1(**) [16])( param_1 + 0x38 );
         }

         if (pauVar30 == pauVar4) {
            *(long**)( param_1 + 0x38 ) = plVar6;
         }

         if (plVar6 != (long*)0x0) {
            *plVar6 = lVar28;
            lVar28 = *(long*)*pauVar4;
         }

         if (lVar28 != 0) {
            *(long**)( lVar28 + 8 ) = plVar6;
         }

         *(long*)( param_1 + 0x40 ) = *(long*)( param_1 + 0x40 ) + -1;
         *pauVar4 = (undefined1[16])0x0;
         if (bVar17) {
            cVar20 = pauVar4[0x12][0];
            if (( cVar20 == '\0' ) && ( *(ulong*)( param_1 + 0x20 ) <= *(ulong*)( param_1 + 0x28 ) )) goto LAB_00101a97;
            puVar7 = *(undefined8**)( param_1 + 0x50 );
            if (puVar7 != (undefined8*)0x0) {
               *puVar7 = pauVar4;
            }

            lVar28 = *(long*)( param_1 + 0x48 );
            *(undefined8**)( *pauVar4 + 8 ) = puVar7;
            *(undefined8*)*pauVar4 = 0;
            *(undefined1(**) [16])( param_1 + 0x50 ) = pauVar4;
            if (lVar28 == 0) {
               *(undefined1(**) [16])( param_1 + 0x48 ) = pauVar4;
            }

            *(long*)( param_1 + 0x58 ) = *(long*)( param_1 + 0x58 ) + 1;
            if (cVar20 == '\0') {
               pauVar4[0x12][0] = 1;
               *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + 1;
            }

         }
 else {
            if (pauVar4[0x12][0] != '\0') {
               pauVar4[0x12][0] = 0;
               *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + -1;
            }

            LAB_00101a97:ossl_quic_demux_release_urxe(*(undefined8*)( param_1 + 0x10 ), pauVar4);
         }

         pauVar4 = *(undefined1(**) [16])( param_1 + 0x30 );
      }
;
      iVar21 = ossl_qrx_processed_read_pending(param_1);
      if (iVar21 != 0) goto LAB_00101379;
   }
 else {
      LAB_00101379:plVar6 = *(long**)( param_1 + 0x78 );
      if (plVar6 != (long*)0x0) {
         lVar28 = plVar6[9];
         lVar23 = plVar6[10];
         *(long*)( param_1 + 0x78 ) = lVar28;
         if (plVar6 == *(long**)( param_1 + 0x80 )) {
            *(long*)( param_1 + 0x80 ) = lVar23;
         }

         if (lVar23 != 0) {
            *(long*)( lVar23 + 0x48 ) = lVar28;
            lVar28 = plVar6[9];
         }

         if (lVar28 != 0) {
            *(long*)( lVar28 + 0x50 ) = lVar23;
         }

         *(long*)( param_1 + 0x88 ) = *(long*)( param_1 + 0x88 ) + -1;
         *plVar6 = (long)( plVar6 + 0xe );
         plVar6[0xd] = 1;
         plVar6[4] = plVar6[0x19];
         *(undefined1(*) [16])( plVar6 + 9 ) = (undefined1[16])0x0;
         plVar6[5] = plVar6[0x36];
         plVar6[3] = plVar6[0x37];
         iVar21 = BIO_ADDR_family(plVar6 + 0x1a);
         plVar32 = plVar6 + 0x1a;
         if (iVar21 == 0) {
            plVar32 = (long*)0x0;
         }

         plVar6[1] = (long)plVar32;
         iVar21 = BIO_ADDR_family(plVar6 + 0x28);
         plVar6[6] = param_1;
         uVar25 = 1;
         plVar32 = plVar6 + 0x28;
         if (iVar21 == 0) {
            plVar32 = (long*)0x0;
         }

         plVar6[7] = plVar6[0x38];
         plVar6[8] = plVar6[0x39];
         plVar6[2] = (long)plVar32;
         *param_2 = plVar6;
         goto LAB_00101443;
      }

   }

   uVar25 = 0;
   LAB_00101443:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar25;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ossl_qrx_pkt_release(undefined1 (*param_1)[16]) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (param_1 != (undefined1(*) [16])0x0) {
      plVar1 = (long*)( param_1[6] + 8 );
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
         lVar2 = *(long*)param_1[3];
         *(undefined8*)param_1[1] = 0;
         *param_1 = (undefined1[16])0x0;
         lVar3 = *(long*)( lVar2 + 0x68 );
         if (lVar3 != 0) {
            *(undefined1(**) [16])( lVar3 + 0x48 ) = param_1;
         }

         lVar4 = *(long*)( lVar2 + 0x60 );
         *(long*)param_1[5] = lVar3;
         *(undefined8*)( param_1[4] + 8 ) = 0;
         *(undefined1(**) [16])( lVar2 + 0x68 ) = param_1;
         if (lVar4 == 0) {
            *(undefined1(**) [16])( lVar2 + 0x60 ) = param_1;
         }

         *(long*)( lVar2 + 0x70 ) = *(long*)( lVar2 + 0x70 ) + 1;
      }

   }

   return;
}
void ossl_qrx_pkt_orphan(long param_1) {
   if (param_1 != 0) {
      *(long*)( param_1 + 0x68 ) = *(long*)( param_1 + 0x68 ) + -1;
   }

   return;
}
void ossl_qrx_inject_pkt(long param_1, long param_2) {
   long lVar1;
   long lVar2;
   ossl_qrx_pkt_orphan(param_2);
   if (*(long*)( param_2 + 0x68 ) == 0) {
      lVar1 = *(long*)( param_1 + 0x80 );
      if (lVar1 != 0) {
         *(long*)( lVar1 + 0x48 ) = param_2;
      }

      lVar2 = *(long*)( param_1 + 0x78 );
      *(long*)( param_2 + 0x50 ) = lVar1;
      *(undefined8*)( param_2 + 0x48 ) = 0;
      *(long*)( param_1 + 0x80 ) = param_2;
      if (lVar2 == 0) {
         *(long*)( param_1 + 0x78 ) = param_2;
      }

      *(long*)( param_1 + 0x88 ) = *(long*)( param_1 + 0x88 ) + 1;
   }

   return;
}
void ossl_qrx_pkt_up_ref(long param_1) {
   *(long*)( param_1 + 0x68 ) = *(long*)( param_1 + 0x68 ) + 1;
   return;
}
undefined8 ossl_qrx_get_bytes_received(long param_1, int param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 1000 );
   if (param_2 != 0) {
      *(undefined8*)( param_1 + 1000 ) = 0;
   }

   return uVar1;
}
undefined8 ossl_qrx_set_late_validation_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x400 ) = param_2;
   *(undefined8*)( param_1 + 0x408 ) = param_3;
   return 1;
}
undefined8 ossl_qrx_set_key_update_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x410 ) = param_2;
   *(undefined8*)( param_1 + 0x418 ) = param_3;
   return 1;
}
undefined8 ossl_qrx_get_key_epoch(long param_1) {
   long lVar1;
   lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0xa8, 3, 1);
   if (lVar1 != 0) {
      return *(undefined8*)( lVar1 + 0x50 );
   }

   return 0xffffffffffffffff;
}
bool ossl_qrx_key_update_timeout(long param_1, int param_2) {
   int iVar1;
   long lVar2;
   bool bVar3;
   param_1 = param_1 + 0xa8;
   lVar2 = ossl_qrl_enc_level_set_get(param_1, 3, 1);
   if (lVar2 == 0) {
      return false;
   }

   if (( *(char*)( lVar2 + 0x68 ) == '\x02' ) && ( iVar1 = ossl_qrl_enc_level_set_key_update_done(param_1, 3) ),iVar1 == 0) {
      return false;
   }

   bVar3 = true;
   if (( param_2 != 0 ) && ( *(char*)( lVar2 + 0x68 ) == '\x03' )) {
      iVar1 = ossl_qrl_enc_level_set_key_cooldown_done(param_1, 3);
      bVar3 = iVar1 != 0;
   }

   return bVar3;
}
undefined8 ossl_qrx_get_cur_forged_pkt_count(long param_1) {
   return *(undefined8*)( param_1 + 0x3f0 );
}
undefined8 ossl_qrx_get_max_forged_pkt_count(long param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0xa8, param_2, 1);
   if (lVar1 != 0) {
      uVar2 = ossl_qrl_get_suite_max_forged_pkt(*(undefined4*)( lVar1 + 0x60 ));
      return uVar2;
   }

   return 0xffffffffffffffff;
}
void ossl_qrx_allow_1rtt_processing(long param_1) {
   long *plVar1;
   undefined8 *puVar2;
   undefined1(*pauVar3)[16];
   long lVar4;
   if (*(char*)( param_1 + 0x421 ) == '\0') {
      pauVar3 = *(undefined1(**) [16])( param_1 + 0x48 );
      *(undefined1*)( param_1 + 0x421 ) = 1;
      if (pauVar3 != (undefined1(*) [16])0x0) {
         do {
            while (true) {
               lVar4 = *(long*)*pauVar3;
               plVar1 = *(long**)( *pauVar3 + 8 );
               *(long*)( param_1 + 0x48 ) = lVar4;
               if (*(undefined1(**) [16])( param_1 + 0x50 ) == pauVar3) {
                  *(long**)( param_1 + 0x50 ) = plVar1;
               }

               if (plVar1 != (long*)0x0) {
                  *plVar1 = lVar4;
                  lVar4 = *(long*)*pauVar3;
               }

               if (lVar4 != 0) {
                  *(long**)( lVar4 + 8 ) = plVar1;
               }

               *(long*)( param_1 + 0x58 ) = *(long*)( param_1 + 0x58 ) + -1;
               *pauVar3 = (undefined1[16])0x0;
               puVar2 = *(undefined8**)( param_1 + 0x38 );
               if (puVar2 != (undefined8*)0x0) {
                  *puVar2 = pauVar3;
               }

               lVar4 = *(long*)( param_1 + 0x30 );
               *(undefined8**)( *pauVar3 + 8 ) = puVar2;
               *(undefined8*)*pauVar3 = 0;
               *(undefined1(**) [16])( param_1 + 0x38 ) = pauVar3;
               if (lVar4 == 0) break;
               pauVar3 = *(undefined1(**) [16])( param_1 + 0x48 );
               *(long*)( param_1 + 0x40 ) = *(long*)( param_1 + 0x40 ) + 1;
               if (pauVar3 == (undefined1(*) [16])0x0) {
                  return;
               }

            }
;
            *(undefined1(**) [16])( param_1 + 0x30 ) = pauVar3;
            pauVar3 = *(undefined1(**) [16])( param_1 + 0x48 );
            *(long*)( param_1 + 0x40 ) = *(long*)( param_1 + 0x40 ) + 1;
         }
 while ( pauVar3 != (undefined1(*) [16])0x0 );
         return;
      }

   }

   return;
}
void ossl_qrx_set_msg_callback(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x428 ) = param_2;
   *(undefined8*)( param_1 + 0x438 ) = param_3;
   return;
}
void ossl_qrx_set_msg_callback_arg(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x430 ) = param_2;
   return;
}
undefined8 ossl_qrx_get_short_hdr_conn_id_len(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}

