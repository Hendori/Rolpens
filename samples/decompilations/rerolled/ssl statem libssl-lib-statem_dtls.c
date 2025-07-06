undefined8 dtls1_preprocess_fragment(long param_1, byte *param_2) {
   byte bVar1;
   ulong uVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   undefined4 extraout_var;
   undefined8 uVar6;
   uVar2 = *(ulong*)( param_2 + 8 );
   if (( ulong )(*(long*)( param_2 + 0x20 ) + *(long*)( param_2 + 0x18 )) <= uVar2) {
      uVar5 = *(ulong*)( param_1 + 0x9c8 );
      if (uVar5 < 0x454c) {
         uVar5 = 0x454c;
      }

      if (uVar2 <= uVar5) {
         if (*(long*)( *(long*)( param_1 + 0x4f0 ) + 400 ) == 0) {
            iVar4 = BUF_MEM_grow_clean(*(BUF_MEM**)( param_1 + 0xf8 ), uVar2 + 0xc);
            if (CONCAT44(extraout_var, iVar4) != 0) {
               lVar3 = *(long*)( param_1 + 0x4f0 );
               *(ulong*)( param_1 + 0x2f0 ) = uVar2;
               *(ulong*)( lVar3 + 0x180 ) = uVar2;
               bVar1 = *param_2;
               *(uint*)( param_1 + 0x2f8 ) = (uint)bVar1;
               *(byte*)( lVar3 + 0x178 ) = bVar1;
               *(undefined2*)( lVar3 + 0x188 ) = *(undefined2*)( param_2 + 0x10 );
               return 1;
            }

            ERR_new();
            ERR_set_debug("ssl/statem/statem_dtls.c", 0x1c8, "dtls1_preprocess_fragment");
            ossl_statem_fatal(param_1, 0x50, 0x80007, 0);
            return 0;
         }

         if (*(ulong*)( *(long*)( param_1 + 0x4f0 ) + 0x180 ) == uVar2) {
            return 1;
         }

         ERR_new();
         uVar6 = 0x1d6;
         goto LAB_00100071;
      }

   }

   ERR_new();
   uVar6 = 0x1be;
   LAB_00100071:ERR_set_debug("ssl/statem/statem_dtls.c", uVar6, "dtls1_preprocess_fragment");
   ossl_statem_fatal(param_1, 0x2f, 0x98, 0);
   return 0;
}
void dtls1_hm_fragment_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      CRYPTO_free(*(void**)( (long)param_1 + 0x40 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0x48 ));
      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined8 dtls1_reassemble_fragment(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   int iVar8;
   ulong uVar9;
   undefined8 uVar10;
   pitem *ppVar11;
   long lVar12;
   undefined8 *ptr;
   long lVar13;
   void *pvVar14;
   byte *pbVar15;
   long lVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   bool bVar18;
   ulong local_158;
   uchar local_150[6];
   ushort local_14a;
   undefined1 local_148[264];
   long local_40;
   uVar17 = param_2[4];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_2[1] < param_2[3] + uVar17) {
      LAB_00100296:ptr = (undefined8*)0x0;
      LAB_001002a0:dtls1_hm_fragment_free(ptr);
   }
 else {
      uVar9 = *(ulong*)( param_1 + 0x9c8 );
      if (uVar9 < 0x454c) {
         uVar9 = 0x454c;
      }

      if (uVar9 < (ulong)param_2[1]) goto LAB_00100296;
      if (uVar17 == 0) {
         LAB_00100210:uVar10 = 0xfffffffd;
         goto LAB_00100215;
      }

      for (int i = 0; i < 4; i++) {
         local_150[i] = '\0';
      }

      local_14a = *(ushort*)( param_2 + 2 ) << 8 | *(ushort*)( param_2 + 2 ) >> 8;
      local_150[4] = '\0';
      local_150[5] = '\0';
      ppVar11 = pqueue_find(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x118 ), local_150);
      if (ppVar11 == (pitem*)0x0) {
         lVar13 = param_2[1];
         ptr = (undefined8*)CRYPTO_zalloc(0x50, "ssl/statem/statem_dtls.c", 0x44);
         if (ptr != (undefined8*)0x0) {
            pvVar14 = (void*)0x0;
            if (( lVar13 == 0 ) || ( pvVar14 = CRYPTO_malloc((int)lVar13, "ssl/statem/statem_dtls.c", 0x48) ),pvVar14 != (void*)0x0) {
               ptr[8] = pvVar14;
               lVar13 = CRYPTO_zalloc(lVar13 + 7U >> 3, "ssl/statem/statem_dtls.c", 0x53);
               if (lVar13 != 0) {
                  uVar10 = *param_2;
                  uVar1 = param_2[1];
                  uVar2 = param_2[2];
                  uVar3 = param_2[3];
                  ptr[9] = lVar13;
                  uVar4 = param_2[4];
                  uVar5 = param_2[5];
                  uVar6 = param_2[6];
                  uVar7 = param_2[7];
                  *ptr = uVar10;
                  ptr[1] = uVar1;
                  ptr[2] = uVar2;
                  ptr[3] = uVar3;
                  ptr[4] = uVar4;
                  ptr[5] = uVar5;
                  ptr[3] = 0;
                  ptr[4] = ptr[1];
                  ptr[6] = uVar6;
                  ptr[7] = uVar7;
                  goto LAB_001002c3;
               }

               CRYPTO_free(pvVar14);
               CRYPTO_free(ptr);
            }
 else {
               CRYPTO_free(ptr);
            }

         }

         goto LAB_00100296;
      }

      ptr = (undefined8*)ppVar11->data;
      if (ptr[1] != param_2[1]) goto LAB_00100296;
      if (ptr[9] == 0) {
         do {
            uVar9 = 0x100;
            if (uVar17 < 0x101) {
               uVar9 = uVar17;
            }

            iVar8 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) )(param_1, 0x16, 0, local_148, uVar9, 0, &local_158);
            if (iVar8 < 1) goto LAB_001002a8;
            uVar17 = uVar17 - local_158;
         }
 while ( uVar17 != 0 );
         goto LAB_00100210;
      }

      LAB_001002c3:iVar8 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) )(param_1, 0x16, 0, param_2[3] + ptr[8], uVar17, 0, &local_158);
      if (( 0 < iVar8 ) && ( local_158 == uVar17 )) {
         lVar13 = param_2[3];
         if ((long)uVar17 < 9) {
            if (lVar13 < (long)( uVar17 + lVar13 )) {
               do {
                  lVar12 = lVar13 + 1;
                  pbVar15 = (byte*)( ( lVar13 >> 3 ) + ptr[9] );
                  *pbVar15 = *pbVar15 | ( byte )(1 << ( (byte)lVar13 & 7 ));
                  lVar13 = lVar12;
               }
 while ( lVar12 < (long)( param_2[3] + uVar17 ) );
            }

         }
 else {
            pbVar15 = (byte*)( ( lVar13 >> 3 ) + ptr[9] );
            *pbVar15 = *pbVar15 | *(byte*)( (long)&bitmask_start_values + ( ulong )((uint)lVar13 & 7) );
            lVar12 = param_2[3] + uVar17;
            lVar16 = ( (long)param_2[3] >> 3 ) + 1;
            lVar13 = lVar12 + -1 >> 3;
            if (lVar16 < lVar13) {
               do {
                  *(undefined1*)( ptr[9] + lVar16 ) = 0xff;
                  lVar16 = lVar16 + 1;
                  lVar12 = param_2[3] + uVar17;
                  lVar13 = lVar12 + -1 >> 3;
               }
 while ( lVar16 < lVar13 );
            }

            *(byte*)( lVar13 + ptr[9] ) = *(byte*)( lVar13 + ptr[9] ) | *(byte*)( (long)&bitmask_end_values + ( ulong )((uint)lVar12 & 7) );
         }

         lVar13 = param_2[1];
         if (lVar13 == 0) goto LAB_001003b8;
         pvVar14 = (void*)ptr[9];
         lVar12 = lVar13 + -1 >> 3;
         if (*(char*)( (long)pvVar14 + lVar12 ) == *(char*)( (long)&bitmask_end_values + ( ulong )((uint)lVar13 & 7) )) {
            lVar12 = lVar12 + -1;
            if (-1 < lVar12) {
               do {
                  if (*(char*)( (long)pvVar14 + lVar12 ) != -1) goto LAB_00100374;
                  bVar18 = lVar12 != 0;
                  lVar12 = lVar12 + -1;
               }
 while ( bVar18 );
            }

            CRYPTO_free(pvVar14);
            ptr[9] = 0;
         }

         LAB_00100374:if (( ppVar11 != (pitem*)0x0 ) || ( ( ppVar11 = pitem_new(local_150, ptr) ),ppVar11 != (pitem*)0x0 && ( ppVar11 = pqueue_insert(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x118 ), ppVar11) ),ppVar11 != (pitem*)0x0 )) goto LAB_00100210;
         goto LAB_001002a0;
      }

      LAB_001003b8:if (ppVar11 == (pitem*)0x0) goto LAB_001002a0;
   }

   LAB_001002a8:uVar10 = 0xffffffff;
   LAB_00100215:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}
ulong dtls1_do_write(SSL *param_1, char param_2) {
   undefined2 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   ulong uVar4;
   void *pvVar5;
   long lVar6;
   bool bVar7;
   int iVar8;
   uint uVar9;
   ulong uVar10;
   long lVar11;
   long lVar12;
   BIO *pBVar13;
   undefined1 *puVar14;
   long lVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2._0_4_ = param_1->quiet_shutdown;
   uVar2._4_4_ = param_1->shutdown;
   iVar8 = dtls1_query_mtu();
   if (( ( iVar8 == 0 ) || ( uVar16 = *(ulong*)( (long)param_1[1].tlsext_opaque_prf_input + 0x130 ) ),uVar10 = dtls1_min_mtu(param_1),uVar16 < uVar10 )) {
      LAB_00100890:uVar16 = 0xffffffff;
   }
 else {
      uVar3._0_4_ = param_1[4].first_packet;
      uVar3._4_4_ = param_1[4].client_version;
      lVar11 = ( **(code**)( param_1[4].mode + 0xa8 ) )(uVar3);
      *(undefined4*)&param_1->packet = 1;
      lVar12._0_4_ = param_1->sid_ctx_length;
      lVar12._4_1_ = param_1->sid_ctx[0];
      lVar12._5_1_ = param_1->sid_ctx[1];
      lVar12._6_1_ = param_1->sid_ctx[2];
      lVar12._7_1_ = param_1->sid_ctx[3];
      if (lVar12 != 0) {
         lVar15 = 0;
         if (param_2 == '\x16') {
            bVar7 = true;
            while (true) {
               while (true) {
                  uVar16 = *(ulong*)( param_1->sid_ctx + 4 );
                  if (uVar16 != 0) {
                     if (lVar15 == 0) {
                        lVar15 = *(long*)( (long)param_1[1].tlsext_opaque_prf_input + 0x150 );
                     }
 else {
                        if (uVar16 < 0xd) goto LAB_00100890;
                        *(ulong*)( param_1->sid_ctx + 4 ) = uVar16 - 0xc;
                        *(long*)&param_1->sid_ctx_length = lVar12 + 0xc;
                     }

                  }

                  lVar12 = BIO_ctrl((BIO*)param_1->init_msg, 0xd, 0, (void*)0x0);
                  uVar16 = *(ulong*)( (long)param_1[1].tlsext_opaque_prf_input + 0x130 );
                  uVar10 = (int)lVar12 + lVar11;
                  if (( uVar16 <= uVar10 ) || ( uVar16 = uVar16 < 0xd )) {
                     uVar16 = BIO_ctrl((BIO*)param_1->init_msg, 0xb, 0, (void*)0x0);
                     if ((int)uVar16 < 1) goto LAB_00100c40;
                     uVar16 = *(ulong*)( (long)param_1[1].tlsext_opaque_prf_input + 0x130 );
                     if (uVar16 <= lVar11 + 0xcU) goto LAB_00100890;
                     uVar16 = uVar16 - lVar11;
                  }

                  uVar10._0_4_ = param_1->sid_ctx_length;
                  uVar10._4_1_ = param_1->sid_ctx[0];
                  uVar10._5_1_ = param_1->sid_ctx[1];
                  uVar10._6_1_ = param_1->sid_ctx[2];
                  uVar10._7_1_ = param_1->sid_ctx[3];
                  if (uVar16 < ( uVar10 & 0xffffffff )) {
                     uVar10 = uVar16;
                  }

                  uVar9 = ssl_get_max_send_fragment(param_1);
                  if (uVar9 < uVar10) {
                     uVar9 = ssl_get_max_send_fragment(param_1);
                     uVar10 = (ulong)uVar9;
                  }

                  if (uVar10 < 0xc) goto LAB_00100890;
                  uVar16 = uVar10 - 0xc;
                  pvVar5 = param_1[1].tlsext_opaque_prf_input;
                  puVar14 = (undefined1*)( *(long*)( param_1->sid_ctx + 4 ) + param_1->compress->compress_in );
                  *(long*)( (long)pvVar5 + 0x150 ) = lVar15;
                  *(ulong*)( (long)pvVar5 + 0x158 ) = uVar16;
                  *puVar14 = *(undefined1*)( (long)pvVar5 + 0x138 );
                  puVar14[1] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x140 ) >> 0x10 );
                  puVar14[2] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x140 ) >> 8 );
                  puVar14[3] = (char)*(undefined8*)( (long)pvVar5 + 0x140 );
                  puVar14[4] = *(undefined1*)( (long)pvVar5 + 0x149 );
                  puVar14[5] = (char)*(undefined2*)( (long)pvVar5 + 0x148 );
                  puVar14[6] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x150 ) >> 0x10 );
                  puVar14[7] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x150 ) >> 8 );
                  puVar14[8] = (char)*(undefined8*)( (long)pvVar5 + 0x150 );
                  puVar14[9] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x158 ) >> 0x10 );
                  puVar14[10] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x158 ) >> 8 );
                  puVar14[0xb] = (char)*(undefined8*)( (long)pvVar5 + 0x158 );
                  iVar8 = dtls1_write_bytes(param_1, 0x16, *(long*)( param_1->sid_ctx + 4 ) + param_1->compress->compress_in, uVar10, &local_48);
                  if (iVar8 < 1) break;
                  if (local_48 != uVar10) goto LAB_00100890;
                  pvVar5 = param_1[1].tlsext_opaque_prf_input;
                  if (*(int*)( (long)pvVar5 + 0x1cc ) == 0) {
                     puVar14 = (undefined1*)( *(long*)( param_1->sid_ctx + 4 ) + param_1->compress->compress_in );
                     if (( lVar15 == 0 ) && ( param_1->state != 0x100 )) {
                        *puVar14 = *(undefined1*)( (long)pvVar5 + 0x138 );
                        puVar14[1] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x140 ) >> 0x10 );
                        puVar14[2] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x140 ) >> 8 );
                        puVar14[3] = (char)*(undefined8*)( (long)pvVar5 + 0x140 );
                        puVar14[4] = *(undefined1*)( (long)pvVar5 + 0x149 );
                        uVar1 = *(undefined2*)( (long)pvVar5 + 0x148 );
                        *(undefined2*)( puVar14 + 6 ) = 0;
                        puVar14[5] = (char)uVar1;
                        puVar14[8] = 0;
                        puVar14[9] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x140 ) >> 0x10 );
                        puVar14[10] = (char)( ( ulong ) * (undefined8*)( (long)pvVar5 + 0x140 ) >> 8 );
                        puVar14[0xb] = (char)*(undefined8*)( (long)pvVar5 + 0x140 );
                        uVar16 = local_48;
                     }
 else {
                        puVar14 = puVar14 + 0xc;
                     }

                     iVar8 = ssl3_finish_mac(param_1, puVar14, uVar16);
                     uVar10 = local_48;
                     if (iVar8 == 0) goto LAB_00100890;
                  }

                  if (*(ulong*)&param_1->sid_ctx_length == uVar10) {
                     param_2 = '\x16';
                     goto LAB_00100c53;
                  }

                  pvVar5 = param_1[1].tlsext_opaque_prf_input;
                  local_48 = uVar10 - 0xc;
                  lVar12 = *(ulong*)&param_1->sid_ctx_length - uVar10;
                  *(ulong*)( param_1->sid_ctx + 4 ) = *(long*)( param_1->sid_ctx + 4 ) + uVar10;
                  lVar15 = lVar15 + local_48;
                  *(long*)&param_1->sid_ctx_length = lVar12;
                  *(long*)( (long)pvVar5 + 0x150 ) = lVar15;
                  *(undefined8*)( (long)pvVar5 + 0x158 ) = 0;
               }
;
               if (!bVar7) goto LAB_00100890;
               pBVar13 = SSL_get_wbio(param_1);
               lVar12 = BIO_ctrl(pBVar13, 0x2b, 0, (void*)0x0);
               if (( ( lVar12 < 1 ) || ( uVar16 = SSL_get_options(param_1)(uVar16 & 0x1000) != 0 ) ) || ( iVar8 = iVar8 == 0 )) goto LAB_00100890;
               lVar12._0_4_ = param_1->sid_ctx_length;
               lVar12._4_1_ = param_1->sid_ctx[0];
               lVar12._5_1_ = param_1->sid_ctx[1];
               lVar12._6_1_ = param_1->sid_ctx[2];
               lVar12._7_1_ = param_1->sid_ctx[3];
               if (lVar12 == 0) break;
               bVar7 = false;
            }
;
         }
 else {
            bVar7 = true;
            while (true) {
               while (true) {
                  lVar12 = BIO_ctrl((BIO*)param_1->init_msg, 0xd, 0, (void*)0x0);
                  uVar16 = *(ulong*)( (long)param_1[1].tlsext_opaque_prf_input + 0x130 );
                  uVar10 = (int)lVar12 + lVar11;
                  if (( uVar16 <= uVar10 ) || ( uVar16 = uVar16 < 0xd )) {
                     uVar16 = BIO_ctrl((BIO*)param_1->init_msg, 0xb, 0, (void*)0x0);
                     if ((int)uVar16 < 1) goto LAB_00100c40;
                     uVar16 = *(ulong*)( (long)param_1[1].tlsext_opaque_prf_input + 0x130 );
                     if (uVar16 <= lVar11 + 0xcU) goto LAB_00100890;
                     uVar16 = uVar16 - lVar11;
                  }

                  uVar4._0_4_ = param_1->sid_ctx_length;
                  uVar4._4_1_ = param_1->sid_ctx[0];
                  uVar4._5_1_ = param_1->sid_ctx[1];
                  uVar4._6_1_ = param_1->sid_ctx[2];
                  uVar4._7_1_ = param_1->sid_ctx[3];
                  if (( uVar4 & 0xffffffff ) <= uVar16) {
                     uVar16 = uVar4;
                  }

                  uVar9 = ssl_get_max_send_fragment(param_1);
                  if (uVar9 < uVar16) {
                     uVar9 = ssl_get_max_send_fragment(param_1);
                     uVar16 = (ulong)uVar9;
                  }

                  iVar8 = dtls1_write_bytes(param_1, param_2, *(long*)( param_1->sid_ctx + 4 ) + param_1->compress->compress_in, uVar16, &local_48);
                  if (iVar8 < 1) break;
                  if (uVar16 != local_48) goto LAB_00100890;
                  uVar10 = *(ulong*)&param_1->sid_ctx_length;
                  if (uVar16 == uVar10) goto LAB_00100c53;
                  pvVar5 = param_1[1].tlsext_opaque_prf_input;
                  local_48 = uVar16 - 0xc;
                  *(ulong*)( param_1->sid_ctx + 4 ) = *(long*)( param_1->sid_ctx + 4 ) + uVar16;
                  lVar15 = lVar15 + local_48;
                  *(ulong*)&param_1->sid_ctx_length = uVar10 - uVar16;
                  *(long*)( (long)pvVar5 + 0x150 ) = lVar15;
                  *(undefined8*)( (long)pvVar5 + 0x158 ) = 0;
               }
;
               if (!bVar7) goto LAB_00100890;
               pBVar13 = SSL_get_wbio(param_1);
               lVar12 = BIO_ctrl(pBVar13, 0x2b, 0, (void*)0x0);
               if (( ( lVar12 < 1 ) || ( uVar16 = SSL_get_options(param_1)(uVar16 & 0x1000) != 0 ) ) || ( iVar8 = iVar8 == 0 )) goto LAB_00100890;
               lVar6._0_4_ = param_1->sid_ctx_length;
               lVar6._4_1_ = param_1->sid_ctx[0];
               lVar6._5_1_ = param_1->sid_ctx[1];
               lVar6._6_1_ = param_1->sid_ctx[2];
               lVar6._7_1_ = param_1->sid_ctx[3];
               if (lVar6 == 0) break;
               bVar7 = false;
            }
;
         }

      }

      uVar16 = 0;
   }

   LAB_00100895:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar16;
   LAB_00100c40:uVar16 = uVar16 & 0xffffffff;
   *(undefined4*)&param_1->packet = 2;
   goto LAB_00100895;
   LAB_00100c53:if ((code*)param_1[1].tlsext_opaque_prf_input_len != (code*)0x0) {
      ( *(code*)param_1[1].tlsext_opaque_prf_input_len )(1, param_1->state, param_2, param_1->compress->compress_in, *(long*)( param_1->sid_ctx + 4 ) + uVar10, uVar2, param_1[1].tlsext_session_ticket);
   }

   uVar16 = 1;
   param_1->sid_ctx_length = 0;
   for (int i = 0; i < 12; i++) {
      param_1->sid_ctx[i] = '\0';
   }

   goto LAB_00100895;
}
undefined8 dtls_get_message_body(long param_1, long *param_2) {
   char *pcVar1;
   int iVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 0x108 );
   pcVar1 = *(char**)( *(long*)( param_1 + 0xf8 ) + 8 );
   if (*(int*)( param_1 + 0x2f8 ) == 0x101) {
      LAB_00100d55:*param_2 = lVar3;
      return 1;
   }

   if (( *pcVar1 != '\x14' ) || ( iVar2 = iVar2 != 0 )) {
      if (*(int*)( param_1 + 0x48 ) == 0x100) {
         iVar2 = ssl3_finish_mac(param_1, pcVar1 + 0xc, lVar3);
      }
 else {
         iVar2 = ssl3_finish_mac(param_1, pcVar1, lVar3 + 0xc);
      }

      if (iVar2 != 0) {
         lVar3 = *(long*)( param_1 + 0x108 );
         if (*(code**)( param_1 + 0x4f8 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x4f8 ) )(0, *(undefined4*)( param_1 + 0x48 ), 0x16, *(undefined8*)( *(long*)( param_1 + 0xf8 ) + 8 ), lVar3 + 0xc, *(undefined8*)( param_1 + 0x40 ), *(undefined8*)( param_1 + 0x500 ));
            lVar3 = *(long*)( param_1 + 0x108 );
         }

         goto LAB_00100d55;
      }

   }

   return 0;
}
undefined8 dtls_construct_change_cipher_spec(long param_1, undefined8 param_2) {
   short *psVar1;
   long lVar2;
   int iVar3;
   if (*(int*)( param_1 + 0x48 ) == 0x100) {
      lVar2 = *(long*)( param_1 + 0x4f0 );
      psVar1 = (short*)( lVar2 + 0x10e );
      *psVar1 = *psVar1 + 1;
      iVar3 = WPACKET_put_bytes__(param_2, *(undefined2*)( lVar2 + 0x10c ), 2);
      if (iVar3 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_dtls.c", 0x3eb, "dtls_construct_change_cipher_spec");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }

   }

   return 1;
}
ulong dtls1_read_failed(SSL *param_1, uint param_2) {
   int iVar1;
   ulong uVar2;
   BIO *b;
   if ((int)param_2 < 1) {
      uVar2 = (ulong)param_2;
      iVar1 = dtls1_is_timer_expired();
      if (( iVar1 != 0 ) && ( iVar1 = iVar1 == 0 )) {
         iVar1 = SSL_in_init(param_1);
         if (iVar1 != 0) {
            uVar2 = dtls1_handle_timeout();
            return uVar2;
         }

         b = SSL_get_rbio(param_1);
         BIO_set_flags(b, 1);
      }

   }
 else {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_dtls.c", 0x421, "dtls1_read_failed");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      uVar2 = 0;
   }

   return uVar2;
}
int dtls1_get_queue_priority(ushort param_1, int param_2) {
   return (uint)param_1 * 2 - param_2;
}
undefined8 dtls1_buffer_message(long param_1, int param_2) {
   ulong uVar1;
   undefined8 uVar2;
   undefined2 uVar3;
   long lVar4;
   ulong __n;
   long lVar5;
   undefined1 uVar6;
   undefined1 extraout_AH;
   undefined1 *ptr;
   pitem *item;
   undefined8 uVar7;
   void *__dest;
   long in_FS_OFFSET;
   uchar local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0x110 ) == 0) {
      lVar4 = *(long*)( param_1 + 0x108 );
      ptr = (undefined1*)CRYPTO_zalloc(0x50, "ssl/statem/statem_dtls.c", 0x44);
      if (ptr != (undefined1*)0x0) {
         __dest = (void*)0x0;
         if (( lVar4 != 0 ) && ( __dest = CRYPTO_malloc((int)lVar4, "ssl/statem/statem_dtls.c", 0x48) ),__dest == (void*)0x0) {
            CRYPTO_free(ptr);
            uVar7 = 0;
            goto LAB_00101035;
         }

         lVar4 = *(long*)( param_1 + 0xf8 );
         __n = *(ulong*)( param_1 + 0x108 );
         *(void**)( ptr + 0x40 ) = __dest;
         *(undefined8*)( ptr + 0x48 ) = 0;
         memcpy(__dest, *(void**)( lVar4 + 8 ), __n);
         lVar4 = *(long*)( param_1 + 0x4f0 );
         lVar5 = *(long*)( lVar4 + 0x140 );
         if (param_2 == 0) {
            uVar1 = lVar5 + 0xc;
         }
 else {
            uVar1 = lVar5 + 1 + ( ulong )(*(int*)( param_1 + 0x48 ) == 0x100) * 2;
         }

         if (uVar1 == ( __n & 0xffffffff )) {
            uVar3 = *(undefined2*)( lVar4 + 0x148 );
            *(long*)( ptr + 8 ) = lVar5;
            uVar7 = *(undefined8*)( param_1 + 0xc78 );
            for (int i = 0; i < 8; i++) {
               local_38[i] = '\0';
            }

            *(undefined2*)( ptr + 0x10 ) = uVar3;
            uVar6 = *(undefined1*)( lVar4 + 0x138 );
            *(undefined8*)( ptr + 0x18 ) = 0;
            uVar2 = *(undefined8*)( param_1 + 0xc88 );
            *ptr = uVar6;
            *(long*)( ptr + 0x20 ) = lVar5;
            *(int*)( ptr + 0x28 ) = param_2;
            *(undefined8*)( ptr + 0x30 ) = uVar7;
            *(undefined8*)( ptr + 0x38 ) = uVar2;
            dtls1_get_queue_priority(uVar3, param_2);
            local_38[6] = extraout_AH;
            uVar6 = dtls1_get_queue_priority(*(undefined2*)( ptr + 0x10 ), *(undefined4*)( ptr + 0x28 ));
            local_38[7] = uVar6;
            item = pitem_new(local_38, ptr);
            if (item != (pitem*)0x0) {
               pqueue_insert(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x120 ), item);
               uVar7 = 1;
               goto LAB_00101035;
            }

         }

         dtls1_hm_fragment_free(ptr);
      }

   }

   uVar7 = 0;
   LAB_00101035:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 dtls1_retransmit_message(long param_1, ushort param_2, undefined4 *param_3) {
   undefined1 uVar1;
   undefined2 uVar2;
   undefined1 *puVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   BIO *bp;
   undefined4 uVar10;
   pitem *ppVar11;
   long lVar12;
   long in_FS_OFFSET;
   uchar local_38[6];
   ushort local_32;
   long local_30;
   local_32 = param_2 << 8 | param_2 >> 8;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38[4] = '\0';
   local_38[5] = '\0';
   local_38[0] = '\0';
   local_38[1] = '\0';
   local_38[2] = '\0';
   local_38[3] = '\0';
   ppVar11 = pqueue_find(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x120 ), local_38);
   if (ppVar11 == (pitem*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_dtls.c", 0x4af, "dtls1_retransmit_message");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      *param_3 = 0;
      uVar10 = 0;
   }
 else {
      *param_3 = 1;
      puVar3 = (undefined1*)ppVar11->data;
      lVar12 = ( ulong )(-(uint)(*(int *)(puVar3 + 0x28) == 0) & 0xb) + 1;
      memcpy(*(void**)( *(long*)( param_1 + 0xf8 ) + 8 ), *(void**)( puVar3 + 0x40 ), *(long*)( puVar3 + 8 ) + lVar12);
      lVar4 = *(long*)( puVar3 + 8 );
      uVar5 = *(undefined8*)( puVar3 + 0x20 );
      uVar2 = *(undefined2*)( puVar3 + 0x10 );
      lVar6 = *(long*)( param_1 + 0x4f0 );
      *(long*)( param_1 + 0x108 ) = lVar12 + lVar4;
      uVar1 = *puVar3;
      *(long*)( lVar6 + 0x140 ) = lVar4;
      *(undefined1*)( lVar6 + 0x138 ) = uVar1;
      uVar7 = *(undefined8*)( puVar3 + 0x38 );
      *(undefined8*)( lVar6 + 0x158 ) = uVar5;
      uVar5 = *(undefined8*)( param_1 + 0xc78 );
      *(undefined2*)( lVar6 + 0x148 ) = uVar2;
      uVar8 = *(undefined8*)( param_1 + 0xc88 );
      *(undefined8*)( lVar6 + 0x150 ) = 0;
      uVar9 = *(undefined8*)( param_1 + 0x58 );
      *(undefined4*)( lVar6 + 0x1cc ) = 1;
      lVar4 = *(long*)( puVar3 + 0x30 );
      *(undefined8*)( param_1 + 0xc88 ) = uVar7;
      *(long*)( param_1 + 0xc78 ) = lVar4;
      ( **(code**)( lVar4 + 0x58 ) )(uVar7, uVar9);
      uVar10 = dtls1_do_write(param_1, ( -(*(int *)(puVar3 + 0x28) == 0) & 2U ) + 0x14);
      *(undefined8*)( param_1 + 0xc78 ) = uVar5;
      bp = *(BIO**)( param_1 + 0x58 );
      *(undefined8*)( param_1 + 0xc88 ) = uVar8;
      *(undefined4*)( *(long*)( param_1 + 0x4f0 ) + 0x1cc ) = 0;
      BIO_ctrl(bp, 0xb, 0, (void*)0x0);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 dtls1_retransmit_buffered_messages(long param_1) {
   undefined2 uVar1;
   int iVar2;
   pitem *ppVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined4 local_2c;
   pitem *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_2c = 0;
   local_28 = pqueue_iterator(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x120 ));
   ppVar3 = pqueue_next(&local_28);
   if (ppVar3 != (pitem*)0x0) {
      do {
         uVar1 = dtls1_get_queue_priority(*(undefined2*)( (long)ppVar3->data + 0x10 ), *(undefined4*)( (long)ppVar3->data + 0x28 ));
         iVar2 = dtls1_retransmit_message(param_1, uVar1, &local_2c);
         if (iVar2 < 1) {
            uVar4 = 0xffffffff;
            goto LAB_00101325;
         }

         ppVar3 = pqueue_next(&local_28);
      }
 while ( ppVar3 != (pitem*)0x0 );
   }

   uVar4 = 1;
   LAB_00101325:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void dtls1_set_message_header(long param_1, undefined1 param_2, undefined8 param_3, long param_4, undefined8 param_5) {
   ushort uVar1;
   long lVar2;
   ushort uVar3;
   lVar2 = *(long*)( param_1 + 0x4f0 );
   uVar1 = *(ushort*)( lVar2 + 0x10e );
   uVar3 = *(ushort*)( lVar2 + 0x10c );
   if (param_4 == 0) {
      *(uint*)( lVar2 + 0x10c ) = ( uVar1 + 1 ) * 0x10000 | (uint)uVar1;
      uVar3 = uVar1;
   }

   *(undefined1*)( lVar2 + 0x138 ) = param_2;
   *(undefined8*)( lVar2 + 0x140 ) = param_3;
   *(ushort*)( lVar2 + 0x148 ) = uVar3;
   *(long*)( lVar2 + 0x150 ) = param_4;
   *(undefined8*)( lVar2 + 0x158 ) = param_5;
   return;
}
void dtls1_get_message_header(undefined1 *param_1, undefined1 (*param_2)[16]) {
   *param_2 = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      param_2[( i + 1 )] = (undefined1[16])0;
   }

   ( *param_2 )[0] = *param_1;
   *(ulong*)( *param_2 + 8 ) = (ulong)(byte)param_1[1] << 0x10 | (ulong)(byte)param_1[2] << 8 | (ulong)(byte)param_1[3];
   *(ushort*)param_2[1] = *(ushort*)( param_1 + 4 ) << 8 | *(ushort*)( param_1 + 4 ) >> 8;
   *(ulong*)( param_2[1] + 8 ) = (ulong)(byte)param_1[6] << 0x10 | (ulong)(byte)param_1[7] << 8 | (ulong)(byte)param_1[8];
   *(ulong*)param_2[2] = (ulong)(byte)param_1[0xb] | (ulong)(byte)param_1[9] << 0x10 | (ulong)(byte)param_1[10] << 8;
   return;
}
undefined8 dtls_get_reassembled_message(long param_1, undefined4 *param_2, long *param_3) {
   void *pvVar1;
   bool bVar2;
   int iVar3;
   undefined4 uVar4;
   pitem *ppVar5;
   pitem *ppVar6;
   undefined8 *ptr;
   void *pvVar7;
   long lVar8;
   ushort uVar9;
   undefined8 uVar10;
   char *pcVar11;
   undefined8 *puVar12;
   pitem *ppVar13;
   pitem **pppVar14;
   long in_FS_OFFSET;
   byte bVar15;
   char local_1a9;
   pitem *local_1a8;
   pitem *local_1a0;
   char local_198;
   undefined7 uStack_197;
   pitem *ppStack_190;
   ushort local_188;
   undefined6 uStack_186;
   long lStack_180;
   pitem *local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined4 local_150;
   undefined2 local_14c;
   ushort local_14a;
   undefined1 local_148[264];
   long local_40;
   bVar15 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = *(undefined8*)( param_1 + 0x40 );
   *param_2 = 0;
   pcVar11 = *(char**)( *(long*)( param_1 + 0xf8 ) + 8 );
   lVar8 = *(long*)( param_1 + 0x4f0 );
   LAB_00101494:local_1a0 = pqueue_iterator(*(pqueue*)( lVar8 + 0x118 ));
   ppVar5 = pqueue_next(&local_1a0);
   while (ppVar5 != (pitem*)0x0) {
      pvVar7 = ppVar5->data;
      uVar9 = *(ushort*)( *(long*)( param_1 + 0x4f0 ) + 0x110 );
      if (uVar9 <= *(ushort*)( (long)pvVar7 + 0x10 )) {
         bVar2 = false;
         LAB_0010165a:if (( *(long*)( (long)pvVar7 + 0x48 ) == 0 ) && ( ( *(short*)( *(long*)( param_1 + 0x4f0 ) + 0x110 ) == *(short*)( (long)pvVar7 + 0x10 ) || ( bVar2 ) ) )) {
            ppVar6 = *(pitem**)( (long)pvVar7 + 0x20 );
            pqueue_pop(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x118 ));
            iVar3 = dtls1_preprocess_fragment(param_1, pvVar7);
            if (iVar3 == 0) {
               dtls1_hm_fragment_free(pvVar7);
               pitem_free(ppVar5);
               *(undefined8*)( param_1 + 0x108 ) = 0;
               goto LAB_0010162a;
            }

            if (*(size_t*)( (long)pvVar7 + 0x20 ) != 0) {
               memcpy((void*)( *(long*)( *(long*)( param_1 + 0xf8 ) + 8 ) + 0xc + *(long*)( (long)pvVar7 + 0x18 ) ), *(void**)( (long)pvVar7 + 0x40 ), *(size_t*)( (long)pvVar7 + 0x20 ));
            }

            dtls1_hm_fragment_free(pvVar7);
            pitem_free(ppVar5);
            if (!bVar2) goto LAB_001016d6;
            goto LAB_00101946;
         }

         break;
      }

      if (( ( *(int*)( param_1 + 0x78 ) != 0 && uVar9 == 1 ) && ( *(ushort*)( (long)pvVar7 + 0x10 ) == 0 ) ) && ( *(int*)( param_1 + 0xac ) == 0x17 )) {
         ppVar6 = pqueue_next(&local_1a0);
         bVar2 = true;
         if (ppVar6 != (pitem*)0x0) {
            pvVar1 = ppVar6->data;
            if (*(short*)( (long)pvVar1 + 0x10 ) == *(short*)( *(long*)( param_1 + 0x4f0 ) + 0x110 )) {
               pqueue_pop(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x118 ));
               dtls1_hm_fragment_free(pvVar7);
               pitem_free(ppVar5);
               bVar2 = false;
               ppVar5 = ppVar6;
               pvVar7 = pvVar1;
            }

         }

         goto LAB_0010165a;
      }

      pqueue_pop(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x118 ));
      dtls1_hm_fragment_free(pvVar7);
      pitem_free(ppVar5);
      ppVar5 = pqueue_next(&local_1a0);
   }
;
   pppVar14 = &local_1a8;
   iVar3 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) )(param_1, 0x16, &local_1a9, pcVar11, 0xc, 0, pppVar14);
   if (iVar3 < 1) {
      LAB_00101b34:*(undefined4*)( param_1 + 0x68 ) = 3;
      *param_3 = 0;
      goto LAB_0010162a;
   }

   if (local_1a9 == '\x14') {
      if (*pcVar11 != '\x01') {
         ERR_new();
         ERR_set_debug("ssl/statem/statem_dtls.c", 0x34c, "dtls_get_reassembled_message");
         ossl_statem_fatal(param_1, 10, 0x67, 0);
         goto LAB_001018ff;
      }

      ppVar6 = (pitem*)( (long)&local_1a8[-1].next + 7 );
      *(pitem**)( param_1 + 0x108 ) = ppVar6;
      lVar8 = *(long*)( *(long*)( param_1 + 0xf8 ) + 8 );
      *(pitem**)( param_1 + 0x2f0 ) = ppVar6;
      *(undefined4*)( param_1 + 0x2f8 ) = 0x101;
      *(long*)( param_1 + 0x100 ) = lVar8 + 1;
      LAB_001016dd:*param_3 = (long)ppVar6;
      uVar10 = 1;
      goto LAB_0010162c;
   }

   if (local_1a8 != (pitem*)0xc) {
      ERR_new();
      uVar10 = 0x35b;
      goto LAB_001018dd;
   }

   dtls1_get_message_header(pcVar11, &local_198);
   ppVar5 = local_178;
   if (local_178 <= *(pitem**)( param_1 + 0xd38 + *(long*)( param_1 + 0xd10 ) * 0x40 )) {
      lVar8 = *(long*)( param_1 + 0x4f0 );
      if (local_188 == *(ushort*)( lVar8 + 0x110 )) {
         if (( ppStack_190 <= local_178 ) || ( local_178 == (pitem*)0x0 )) {
            if (*(int*)( param_1 + 0x78 ) == 0) {
               bVar2 = false;
               if (( ( *(long*)( lVar8 + 400 ) != 0 ) || ( *(int*)( param_1 + 0xac ) == 1 ) ) || ( *pcVar11 != '\0' )) goto LAB_00101842;
               if (( ( pcVar11[1] == '\0' ) && ( pcVar11[2] == '\0' ) ) && ( pcVar11[3] == '\0' )) goto code_r0x001017d2;
               ERR_new();
               uVar10 = 0x39e;
               LAB_001018dd:ERR_set_debug("ssl/statem/statem_dtls.c", uVar10, "dtls_get_reassembled_message");
               ossl_statem_fatal(param_1, 10, 0xf4, 0);
            }
 else {
               bVar2 = false;
               LAB_00101842:iVar3 = dtls1_preprocess_fragment(param_1, &local_198);
               if (iVar3 != 0) {
                  if (local_178 != (pitem*)0x0) {
                     iVar3 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) )(param_1, 0x16, 0, pcVar11 + lStack_180 + 0xc, local_178, 0);
                     if (iVar3 < 1) goto LAB_00101b34;
                     if (local_178 != local_1a8) {
                        ERR_new();
                        uVar10 = 0x3c0;
                        goto LAB_00101bb6;
                     }

                  }

                  ppVar6 = local_178;
                  if (bVar2) {
                     LAB_00101946:*(undefined4*)( *(long*)( param_1 + 0x4f0 ) + 0x10e ) = 0;
                  }

                  LAB_001016d6:*(pitem**)( param_1 + 0x108 ) = ppVar6;
                  goto LAB_001016dd;
               }

            }

            goto LAB_001018ff;
         }

         LAB_00101618:uVar4 = dtls1_reassemble_fragment(param_1, &local_198);
         goto LAB_00101623;
      }

      uVar9 = local_188;
      if (( *(int*)( param_1 + 0x78 ) != 0 ) && ( local_188 == 0 )) {
         if (( *(ushort*)( lVar8 + 0x110 ) == 1 ) && ( *pcVar11 == '\x01' )) {
            if (*(int*)( param_1 + 0xac ) == 0x17) {
               if (( ppStack_190 <= local_178 ) || ( local_178 == (pitem*)0x0 )) {
                  bVar2 = true;
                  goto LAB_00101842;
               }

               goto LAB_00101618;
            }

         }
 else {
            uVar9 = 0;
         }

      }

      if (ppStack_190 < (pitem*)( local_178->priority + lStack_180 )) goto LAB_00101b22;
      local_14a = uVar9 << 8 | uVar9 >> 8;
      local_14c = 0;
      local_150 = 0;
      ppVar6 = pqueue_find(*(pqueue*)( lVar8 + 0x118 ), (uchar*)&local_150);
      if (( ppVar6 != (pitem*)0x0 ) && ( ppVar5 == ppStack_190 )) {
         LAB_00101ab3:if (ppVar5 == (pitem*)0x0) goto LAB_00101aa6;
         goto LAB_00101acf;
      }

      uVar9 = *(ushort*)( *(long*)( param_1 + 0x4f0 ) + 0x110 );
      if (local_188 <= uVar9) {
         ppVar6 = (pitem*)0x0;
         goto LAB_00101ab3;
      }

      ppVar6 = (pitem*)0x0;
      if (( uVar9 + 10 < (uint)local_188 ) || ( ( uVar9 == 0 && ( local_198 == '\x14' ) ) )) goto LAB_00101ab3;
      if (ppVar5 != ppStack_190) goto LAB_00101618;
      ppVar6 = *(pitem**)( param_1 + 0x9c8 );
      if (ppVar6 < (pitem*)0x454c) {
         ppVar6 = (pitem*)0x454c;
      }

      if (( ppVar6 < ppVar5 ) || ( ptr = (undefined8*)CRYPTO_zalloc(0x50, "ssl/statem/statem_dtls.c", 0x44) ),ptr == (undefined8*)0x0) goto LAB_00101b22;
      if (ppVar5 == (pitem*)0x0) {
         *(undefined1(*) [16])( ptr + 8 ) = (undefined1[16])0x0;
         *ptr = CONCAT71(uStack_197, local_198);
         ptr[1] = ppStack_190;
         ptr[2] = CONCAT62(uStack_186, local_188);
         ptr[3] = lStack_180;
         ptr[4] = local_178;
         ptr[5] = uStack_170;
         ptr[6] = local_168;
         ptr[7] = uStack_160;
         goto LAB_00101a73;
      }

      pvVar7 = CRYPTO_malloc((int)ppVar5, "ssl/statem/statem_dtls.c", 0x48);
      if (pvVar7 != (void*)0x0) {
         ptr[8] = pvVar7;
         ptr[9] = 0;
         pcVar11 = &local_198;
         puVar12 = ptr;
         for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined4*)puVar12 = *(undefined4*)pcVar11;
            pcVar11 = pcVar11 + ( (ulong)bVar15 * -2 + 1 ) * 4;
            puVar12 = (undefined8*)( (long)puVar12 + (ulong)bVar15 * -8 + 4 );
         }

         iVar3 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) )(param_1, 0x16, 0, pvVar7, ppVar5, 0, &local_1a0, pppVar14);
         if (( iVar3 < 1 ) || ( ppVar5 != local_1a0 )) goto LAB_00101b25;
         LAB_00101a73:ppVar5 = pitem_new((uchar*)&local_150, ptr);
         if (( ppVar5 == (pitem*)0x0 ) || ( ppVar5 = pqueue_insert(*(pqueue*)( *(long*)( param_1 + 0x4f0 ) + 0x118 ), ppVar5) ),ppVar5 == (pitem*)0x0) goto LAB_00101b25;
         goto LAB_00101aa6;
      }

      CRYPTO_free(ptr);
      goto LAB_00101b22;
   }

   ERR_new();
   uVar10 = 0x36b;
   LAB_00101bb6:ERR_set_debug("ssl/statem/statem_dtls.c", uVar10, "dtls_get_reassembled_message");
   ossl_statem_fatal(param_1, 0x2f, 0x10f, 0);
   LAB_001018ff:*(undefined8*)( param_1 + 0x108 ) = 0;
   *param_3 = 0;
   goto LAB_0010162a;
   code_r0x001017d2:if (*(code**)( param_1 + 0x4f8 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x4f8 ) )(0, *(undefined4*)( param_1 + 0x48 ), 0x16, pcVar11, 0xc, uVar10, *(undefined8*)( param_1 + 0x500 ));
      lVar8 = *(long*)( param_1 + 0x4f0 );
   }

   *(undefined8*)( param_1 + 0x108 ) = 0;
   goto LAB_00101494;
   while (ppVar5 = (pitem*)( (long)ppVar5 - (long)local_1a0 ),ppVar5 != (pitem*)0x0) {
      LAB_00101acf:ppVar13 = (pitem*)0x100;
      if (ppVar5 < (pitem*)0x101) {
         ppVar13 = ppVar5;
      }

      iVar3 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) )(param_1, 0x16, 0, local_148, ppVar13, 0, &local_1a0);
      if (iVar3 < 1) {
         if (ppVar6 == (pitem*)0x0) {
            LAB_00101b22:ptr = (undefined8*)0x0;
            LAB_00101b25:dtls1_hm_fragment_free(ptr);
            uVar4 = 0;
         }
 else {
            uVar4 = 0;
         }

         goto LAB_00101623;
      }

   }
;
   LAB_00101aa6:uVar4 = 0xfffffffd;
   LAB_00101623:*param_2 = uVar4;
   LAB_0010162a:uVar10 = 0;
   LAB_0010162c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 dtls_get_message(long param_1, int *param_2) {
   short *psVar1;
   ushort uVar2;
   undefined2 uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   uint *puVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   int local_4c;
   undefined1 local_48[8];
   long local_40;
   lVar5 = *(long*)( param_1 + 0x4f0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( lVar5 + ( 16*i + 376 ) ) = (undefined1[16])0;
   }

   do {
      uVar8 = dtls_get_reassembled_message(param_1, &local_4c, local_48);
      if ((int)uVar8 != 0) {
         iVar4 = *(int*)( param_1 + 0x2f8 );
         lVar6 = *(long*)( param_1 + 0xf8 );
         *param_2 = iVar4;
         puVar7 = *(uint**)( lVar6 + 8 );
         if (iVar4 == 0x101) {
            if (*(code**)( param_1 + 0x4f8 ) != (code*)0x0) {
               ( **(code**)( param_1 + 0x4f8 ) )(0, *(undefined4*)( param_1 + 0x48 ), 0x14, puVar7, 1, *(undefined8*)( param_1 + 0x40 ), *(undefined8*)( param_1 + 0x500 ));
            }

         }
 else {
            uVar8 = *(undefined8*)( lVar5 + 0x180 );
            uVar2 = *(ushort*)( lVar5 + 0x180 );
            *puVar7 = ( ( ( (uint)uVar8 & 0xff ) << 8 | ( uint )(byte)((ulong)uVar8 >> 8) ) << 8 | ( uint )((ulong)uVar8 >> 0x10) & 0xff ) << 8 | ( uint ) * (byte*)( lVar5 + 0x178 );
            *(undefined1*)( puVar7 + 1 ) = *(undefined1*)( lVar5 + 0x189 );
            uVar3 = *(undefined2*)( lVar5 + 0x188 );
            *(undefined1*)( puVar7 + 2 ) = 0;
            *(char*)( (long)puVar7 + 5 ) = (char)uVar3;
            *(undefined2*)( (long)puVar7 + 6 ) = 0;
            *(char*)( (long)puVar7 + 9 ) = (char)( (ulong)uVar8 >> 0x10 );
            *(ushort*)( (long)puVar7 + 10 ) = uVar2 << 8 | uVar2 >> 8;
            for (int i = 0; i < 4; i++) {
               *(undefined1(*) [16])( lVar5 + ( 16*i + 376 ) ) = (undefined1[16])0;
            }

            psVar1 = (short*)( *(long*)( param_1 + 0x4f0 ) + 0x110 );
            *psVar1 = *psVar1 + 1;
            *(long*)( param_1 + 0x100 ) = *(long*)( *(long*)( param_1 + 0xf8 ) + 8 ) + 0xc;
         }

         uVar8 = 1;
         break;
      }

   }
 while ( local_4c + 3U < 2 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong dtls1_set_handshake_header(long param_1, undefined8 param_2, uint param_3) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined1 auStack_18[8];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0x101) {
      lVar1 = *(long*)( param_1 + 0x4f0 );
      *(undefined1*)( lVar1 + 0x138 ) = 1;
      *(undefined8*)( lVar1 + 0x140 ) = 0;
      *(undefined2*)( lVar1 + 0x10c ) = *(undefined2*)( lVar1 + 0x10e );
      *(undefined2*)( lVar1 + 0x148 ) = *(undefined2*)( lVar1 + 0x10e );
      *(undefined1(*) [16])( lVar1 + 0x150 ) = (undefined1[16])0x0;
      iVar2 = WPACKET_put_bytes__(param_2, 1, 1);
      uVar3 = ( ulong )(iVar2 != 0);
   }
 else {
      dtls1_set_message_header(param_1, param_3 & 0xff, 0, 0, 0);
      uVar3 = WPACKET_allocate_bytes(param_2, 0xc, auStack_18);
      if ((int)uVar3 != 0) {
         iVar2 = WPACKET_start_sub_packet(param_2);
         uVar3 = ( ulong )(iVar2 != 0);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool dtls1_close_construct_packet(long param_1, undefined8 param_2, int param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   bool bVar3;
   ulong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0x101) {
      LAB_00101f6c:iVar2 = WPACKET_get_length(param_2, &local_28);
      if (( iVar2 != 0 ) && ( local_28 < 0x80000000 )) {
         if (param_3 == 0x101) {
            *(ulong*)( param_1 + 0x108 ) = local_28;
            *(undefined8*)( param_1 + 0x110 ) = 0;
         }
 else {
            lVar1 = *(long*)( param_1 + 0x4f0 );
            *(ulong*)( lVar1 + 0x140 ) = local_28 - 0xc;
            *(ulong*)( lVar1 + 0x158 ) = local_28 - 0xc;
            *(ulong*)( param_1 + 0x108 ) = local_28;
            bVar3 = true;
            *(undefined8*)( param_1 + 0x110 ) = 0;
            if (param_3 == 3) goto LAB_00101fea;
         }

         iVar2 = dtls1_buffer_message(param_1, param_3 == 0x101);
         bVar3 = iVar2 != 0;
         goto LAB_00101fea;
      }

   }
 else {
      iVar2 = WPACKET_close(param_2);
      if (iVar2 != 0) goto LAB_00101f6c;
   }

   bVar3 = false;
   LAB_00101fea:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

