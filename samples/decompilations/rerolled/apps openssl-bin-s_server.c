undefined8 next_proto_cb(undefined8 param_1, undefined8 *param_2, undefined4 *param_3, undefined8 *param_4) {
   *param_2 = *param_4;
   *param_3 = (int)param_4[1];
   return 0;
}undefined4 not_resumable_sess_cb(undefined8 param_1, undefined4 param_2) {
   return param_2;
}void print_stats(BIO *param_1, SSL_CTX *param_2) {
   long lVar1;
   long lVar2;
   lVar1 = SSL_CTX_ctrl(param_2, 0x14, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld items in the session cache\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x15, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld client connects (SSL_connect())\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x17, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld client renegotiates (SSL_connect())\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x16, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld client connects that finished\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x18, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld server accepts (SSL_accept())\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x1a, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld server renegotiates (SSL_accept())\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x19, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld server accepts that finished\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x1b, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld session cache hits\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x1d, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld session cache misses\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x1e, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld session cache timeouts\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x1c, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld callback cache hits\n", lVar1);
   lVar1 = SSL_CTX_ctrl(param_2, 0x2b, 0, (void*)0x0);
   lVar2 = SSL_CTX_ctrl(param_2, 0x1f, 0, (void*)0x0);
   BIO_printf(param_1, "%4ld cache full overflows (%ld allowed)\n", lVar2, lVar1);
   return;
}long count_reads_callback(BIO *param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5, undefined8 param_6, int param_7, undefined8 param_8) {
   int iVar1;
   int *arg;
   arg = (int*)BIO_get_callback_arg(param_1);
   iVar1 = s_debug;
   if (( ( param_2 == 2 ) || ( param_2 == 5 ) ) && ( arg != (int*)0x0 )) {
      *arg = *arg + 1;
   }
   if (iVar1 != 0) {
      BIO_set_callback_arg(param_1, bio_s_out);
      param_7 = bio_dump_callback(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
      BIO_set_callback_arg(param_1, (char*)arg);
   }
   return (long)param_7;
}void print_connection_info(SSL *param_1) {
   byte *pbVar1;
   int iVar2;
   SSL_SESSION *x;
   X509 *x_00;
   char *pcVar3;
   SSL_CIPHER *c;
   SRTP_PROTECTION_PROFILE *pSVar4;
   ulong uVar5;
   uchar *out;
   size_t llen;
   EVP_PKEY *pkey;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 uVar7;
   uint local_2034;
   uchar *local_2030;
   char local_2028[8200];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s_brief != 0) {
      print_ssl_summary(param_1);
   }
   x = SSL_get_session(param_1);
   PEM_write_bio_SSL_SESSION(bio_s_out, x);
   x_00 = (X509*)SSL_get0_peer_certificate(param_1);
   if (x_00 != (X509*)0x0) {
      BIO_printf(bio_s_out, "Client certificate\n");
      PEM_write_bio_X509(bio_s_out, x_00);
      dump_cert_text(bio_s_out, x_00);
   }
   iVar2 = SSL_get_negotiated_server_cert_type(param_1);
   if (iVar2 == 2) {
      BIO_printf(bio_s_out, "Server-to-client raw public key negotiated\n");
   }
   iVar2 = SSL_get_negotiated_client_cert_type(param_1);
   if (iVar2 == 2) {
      BIO_printf(bio_s_out, "Client-to-server raw public key negotiated\n");
   }
   if (( enable_client_rpk != 0 ) && ( pkey = (EVP_PKEY*)SSL_get0_peer_rpk(param_1) ),pkey != (EVP_PKEY*)0x0) {
      BIO_printf(bio_s_out, "Client raw public key\n");
      EVP_PKEY_print_public(bio_s_out, pkey, 2, (ASN1_PCTX*)0x0);
   }
   pcVar3 = SSL_get_shared_ciphers(param_1, local_2028, 0x2000);
   if (pcVar3 != (char*)0x0) {
      BIO_printf(bio_s_out, "Shared ciphers:%s\n", local_2028);
   }
   c = SSL_get_current_cipher(param_1);
   pcVar3 = SSL_CIPHER_get_name(c);
   ssl_print_sigalgs(bio_s_out, param_1);
   ssl_print_point_formats(bio_s_out, param_1);
   ssl_print_groups(bio_s_out, param_1, 0);
   print_ca_names(bio_s_out, param_1);
   if (pcVar3 == (char*)0x0) {
      pcVar3 = "(NONE)";
   }
   BIO_printf(bio_s_out, "CIPHER is %s\n", pcVar3);
   SSL_get0_next_proto_negotiated(param_1, &local_2030, &local_2034);
   if (local_2030 != (uchar*)0x0) {
      BIO_printf(bio_s_out, "NEXTPROTO is ");
      BIO_write(bio_s_out, local_2030, local_2034);
      BIO_printf(bio_s_out, "\n");
   }
   pSVar4 = SSL_get_selected_srtp_profile(param_1);
   if (pSVar4 != (SRTP_PROTECTION_PROFILE*)0x0) {
      BIO_printf(bio_s_out, "SRTP Extension negotiated, profile=%s\n", pSVar4->name);
   }
   iVar2 = SSL_session_reused(param_1);
   if (iVar2 != 0) {
      BIO_printf(bio_s_out, "Reused session-id\n");
   }
   ssl_print_secure_renegotiation_notes(bio_s_out, param_1);
   uVar5 = SSL_get_options(param_1);
   if (( uVar5 & 0x40000000 ) != 0) {
      BIO_printf(bio_s_out, "Renegotiation is DISABLED\n");
   }
   if (keymatexportlabel != (char*)0x0) {
      BIO_printf(bio_s_out, "Keying material exporter:\n");
      BIO_printf(bio_s_out, "    Label: \'%s\'\n", keymatexportlabel);
      BIO_printf(bio_s_out, "    Length: %i bytes\n", (ulong)keymatexportlen);
      out = (uchar*)app_malloc((long)(int)keymatexportlen, "export key");
      pcVar3 = keymatexportlabel;
      llen = strlen(keymatexportlabel);
      uVar7 = 0;
      iVar2 = SSL_export_keying_material(param_1, out, (long)(int)keymatexportlen, pcVar3, llen, (uchar*)0x0, 0, 0);
      if (iVar2 < 1) {
         BIO_printf(bio_s_out, "    Error\n", uVar7);
      } else {
         lVar6 = 0;
         BIO_printf(bio_s_out, "    Keying material: ", uVar7);
         if (0 < (int)keymatexportlen) {
            do {
               pbVar1 = out + lVar6;
               lVar6 = lVar6 + 1;
               BIO_printf(bio_s_out, "%02X", ( ulong ) * pbVar1);
            } while ( (int)lVar6 < (int)keymatexportlen );
         }
         BIO_printf(bio_s_out, "\n");
      }
      CRYPTO_free(out);
   }
   BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint sv_body(int param_1, int param_2, undefined8 param_3, uchar *param_4) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   byte *pbVar10;
   byte *pbVar11;
   byte *pbVar12;
   byte *pbVar13;
   byte *pbVar14;
   byte *pbVar15;
   byte *pbVar16;
   byte *pbVar17;
   byte *pbVar18;
   byte *pbVar19;
   byte *pbVar20;
   byte *pbVar21;
   byte *pbVar22;
   byte *pbVar23;
   byte *pbVar24;
   undefined1 auVar25[14];
   undefined1 auVar26[12];
   unkbyte10 Var27;
   undefined1 auVar28[12];
   undefined1 auVar29[14];
   undefined1 auVar30[12];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[12];
   unkbyte9 Var35;
   undefined6 uVar36;
   undefined4 uVar37;
   undefined2 uVar38;
   byte bVar39;
   int iVar40;
   int iVar41;
   byte *buf;
   SSL *ssl;
   size_t sVar42;
   BIO *pBVar43;
   BIO_METHOD *type;
   BIO *b;
   long lVar44;
   void *parg;
   SSL_CTX *pSVar45;
   uint uVar46;
   uint uVar47;
   byte *pbVar48;
   uint uVar49;
   char *pcVar50;
   timeval *__timeout;
   ulong uVar51;
   bool bVar52;
   ulong uVar53;
   long in_FS_OFFSET;
   undefined4 uVar54;
   char cVar62;
   short sVar63;
   undefined1 auVar58[12];
   char cVar64;
   char cVar65;
   char cVar67;
   char cVar68;
   int iVar66;
   char cVar69;
   int iVar70;
   int iVar71;
   int iVar72;
   undefined1 auVar76[12];
   undefined1 auVar73[11];
   short sVar93;
   short sVar97;
   undefined1 auVar79[16];
   short sVar96;
   undefined1 auVar81[16];
   undefined1 auVar88[16];
   undefined1 auVar98[16];
   undefined1 auVar103[16];
   undefined1 auVar110[16];
   undefined1 auVar113[16];
   undefined1 auVar117[16];
   undefined1 auVar120[16];
   long local_f8;
   int local_f0;
   int local_e4;
   undefined4 local_e0;
   undefined4 uStack_dc;
   timeval local_d8;
   undefined1 local_c8[32];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   undefined6 uVar55;
   undefined8 uVar56;
   undefined1 auVar57[12];
   undefined1 auVar59[14];
   undefined1 auVar61[16];
   undefined1 auVar60[16];
   undefined1 auVar74[12];
   undefined1 auVar82[16];
   undefined1 auVar83[16];
   undefined1 auVar89[16];
   undefined1 auVar75[12];
   undefined1 auVar84[16];
   undefined1 auVar80[16];
   undefined1 auVar77[13];
   undefined1 auVar85[16];
   undefined1 auVar90[16];
   undefined1 auVar78[14];
   undefined1 auVar86[16];
   undefined1 auVar87[16];
   char cVar91;
   char cVar92;
   char cVar94;
   char cVar95;
   undefined1 auVar99[16];
   undefined1 auVar100[16];
   undefined1 auVar114[16];
   undefined1 auVar104[16];
   undefined1 auVar101[16];
   undefined1 auVar105[16];
   undefined1 auVar111[16];
   undefined1 auVar115[16];
   undefined1 auVar106[16];
   undefined1 auVar102[16];
   undefined1 auVar107[16];
   undefined1 auVar112[16];
   undefined1 auVar116[16];
   undefined1 auVar108[16];
   undefined1 auVar109[16];
   undefined1 auVar118[16];
   undefined1 auVar119[16];
   undefined1 auVar121[16];
   undefined1 auVar122[16];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   buf = (byte*)app_malloc(0x4000);
   if (s_nbio != 0) {
      iVar40 = BIO_socket_nbio(param_1, 1);
      if (iVar40 == 0) {
         ERR_print_errors(_bio_err);
      } else if (s_quiet == 0) {
         BIO_printf(_bio_err, "Turned on non blocking io\n");
      }
   }
   ssl = SSL_new(ctx);
   if (ssl == (SSL*)0x0) {
      uVar49 = 0xffffffff;
      goto LAB_0010097d;
   }
   if (s_tlsextdebug != 0) {
      SSL_callback_ctrl(ssl, 0x38, (_func_3375*)&tlsext_cb);
      SSL_ctrl(ssl, 0x39, 0, bio_s_out);
   }
   if (param_4 == (uchar*)0x0) {
      LAB_001007fc:iVar40 = SSL_clear(ssl);
      if (iVar40 == 0) {
         BIO_printf(_bio_err, "Error clearing SSL connection\n");
      } else if (param_2 == 2) {
         pBVar43 = BIO_new_dgram(param_1, 0);
         if (pBVar43 == (BIO*)0x0) {
            LAB_00101108:pcVar50 = "Unable to create BIO\n";
            LAB_00100932:BIO_printf(_bio_err, pcVar50);
            ERR_print_errors(_bio_err);
            goto LAB_0010094c;
         }
         if (enable_timeouts != 0) {
            local_d8.tv_sec = __LC37;
            local_d8.tv_usec = _UNK_0010d528;
            BIO_ctrl(pBVar43, 0x21, 0, &local_d8);
            local_d8.tv_sec = __LC37;
            local_d8.tv_usec = _UNK_0010d528;
            BIO_ctrl(pBVar43, 0x23, 0, &local_d8);
         }
         if (socket_mtu == 0) {
            BIO_ctrl(pBVar43, 0x27, 0, (void*)0x0);
            LAB_00100b0d:SSL_set_options(ssl, 0x2000);
            goto LAB_0010082d;
         }
         lVar44 = SSL_ctrl(ssl, 0x79, 0, (void*)0x0);
         if (socket_mtu < lVar44) {
            lVar44 = SSL_ctrl(ssl, 0x79, 0, (void*)0x0);
            BIO_printf(_bio_err, "MTU too small. Must be at least %ld\n", lVar44);
            BIO_free(pBVar43);
         } else {
            SSL_set_options(ssl, 0x1000);
            lVar44 = SSL_ctrl(ssl, 0x78, socket_mtu, (void*)0x0);
            if (lVar44 != 0) goto LAB_00100b0d;
            BIO_printf(_bio_err, "Failed to set MTU\n");
            BIO_free(pBVar43);
         }
      } else {
         pBVar43 = BIO_new_socket(param_1, 0);
         if (pBVar43 == (BIO*)0x0) goto LAB_00101108;
         LAB_0010082d:if (s_nbio_test == 0) {
            LAB_0010085d:SSL_set_bio(ssl, pBVar43, pBVar43);
            SSL_set_accept_state(ssl);
            pBVar43 = SSL_get_rbio(ssl);
            BIO_set_callback_ex(pBVar43, count_reads_callback);
            if (s_msg != 0) {
               if (s_msg == 2) {
                  SSL_set_msg_callback(ssl, (cb*)&SSL_trace);
               } else {
                  SSL_set_msg_callback(ssl, (cb*)&msg_cb);
               }
               pBVar43 = bio_s_msg;
               if (bio_s_msg == (BIO*)0x0) {
                  pBVar43 = bio_s_out;
               }
               SSL_ctrl(ssl, 0x10, 0, pBVar43);
            }
            if (s_tlsextdebug != 0) {
               SSL_callback_ctrl(ssl, 0x38, (_func_3375*)&tlsext_cb);
               SSL_ctrl(ssl, 0x39, 0, bio_s_out);
            }
            if (early_data != 0) {
               bVar52 = true;
               LAB_001008f6:do {
                  iVar40 = SSL_read_early_data(ssl, buf, 0x4000);
                  if (iVar40 == 0) {
                     iVar40 = SSL_get_error(ssl, 0);
                     if (iVar40 < 4) {
                        if (1 < iVar40) goto LAB_001008f6;
                     } else if (iVar40 == 9) goto LAB_001008f6;
                     pcVar50 = "Error reading early data\n";
                     goto LAB_00100932;
                  }
                  lVar44 = CONCAT44(uStack_dc, local_e0);
                  if (lVar44 != 0) {
                     if (bVar52) {
                        BIO_printf(bio_s_out, "Early data received:\n");
                        lVar44 = CONCAT44(uStack_dc, local_e0);
                     }
                     bVar52 = false;
                     raw_write_stdout(buf, lVar44);
                     BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
                  }
               } while ( iVar40 != 2 );
               if (bVar52) {
                  iVar40 = SSL_get_early_data_status(ssl);
                  if (iVar40 == 0) {
                     BIO_printf(bio_s_out, "No early data received\n");
                  } else {
                     BIO_printf(bio_s_out, "Early data was rejected\n");
                  }
               } else {
                  BIO_printf(bio_s_out, "\nEnd of early data\n");
               }
               iVar40 = SSL_is_init_finished(ssl);
               if (iVar40 != 0) {
                  print_connection_info(ssl);
               }
            }
            iVar40 = fileno_stdin();
            local_f0 = param_1 + 1;
            if (param_1 < iVar40) {
               local_f0 = fileno_stdin();
               local_f0 = local_f0 + 1;
            }
            switchD_00100dfd_caseD_4:iVar40 = SSL_has_pending(ssl);
            if (( iVar40 == 0 ) && ( ( async == 0 || ( iVar40 = SSL_waiting_for_async(ssl) ),iVar40 == 0 ) )) {
               local_c8._0_16_ = (undefined1[16])0x0;
               local_c8._16_16_ = (undefined1[16])0x0;
               local_a8 = (undefined1[16])0x0;
               local_98 = (undefined1[16])0x0;
               local_88 = (undefined1[16])0x0;
               local_78 = (undefined1[16])0x0;
               local_68 = (undefined1[16])0x0;
               local_58 = (undefined1[16])0x0;
               bVar39 = fileno_stdin();
               iVar40 = fileno_stdin();
               lVar44 = __fdelt_chk((long)iVar40);
               *(ulong*)( local_c8 + lVar44 * 8 ) = *(ulong*)( local_c8 + lVar44 * 8 ) | 1L << ( bVar39 & 0x3f );
               lVar44 = __fdelt_chk((long)param_1);
               uVar51 = 1L << ( (byte)param_1 & 0x3f );
               *(ulong*)( local_c8 + lVar44 * 8 ) = *(ulong*)( local_c8 + lVar44 * 8 ) | uVar51;
               iVar40 = SSL_is_dtls(ssl);
               if (iVar40 == 0) {
                  LAB_00100f49:__timeout = (timeval*)0x0;
               } else {
                  __timeout = &local_d8;
                  lVar44 = SSL_ctrl(ssl, 0x49, 0, __timeout);
                  if (lVar44 == 0) goto LAB_00100f49;
               }
               iVar40 = select(local_f0, (fd_set*)local_c8, (fd_set*)0x0, (fd_set*)0x0, __timeout);
               iVar41 = SSL_is_dtls(ssl);
               if (( iVar41 != 0 ) && ( lVar44= SSL_ctrl(ssl,0x4a,0,(void *)0x0),0 < lVar44 )) {
                  BIO_printf(_bio_err, "TIMEOUT occurred\n");
               }
               if (iVar40 < 1) goto switchD_00100dfd_caseD_4;
               iVar40 = fileno_stdin();
               lVar44 = __fdelt_chk((long)iVar40);
               uVar53 = *(ulong*)( local_c8 + lVar44 * 8 );
               bVar39 = fileno_stdin();
               uVar53 = uVar53 & 1L << ( bVar39 & 0x3f );
               lVar44 = __fdelt_chk((long)param_1);
               if (( uVar51 & *(ulong*)( local_c8 + lVar44 * 8 ) ) == 0) {
                  if (uVar53 == 0) goto switchD_00100dfd_caseD_4;
                  bVar52 = false;
               } else {
                  if (uVar53 == 0) goto LAB_00100c46;
                  bVar52 = true;
               }
               if (s_crlf == 0) {
                  uVar49 = raw_read_stdin(buf, 0x4000);
                  uVar53 = (ulong)uVar49;
                  LAB_00100fe2:if (s_quiet == 0 && s_brief == 0) {
                     if (( (int)uVar53 < 1 ) || ( bVar39 = bVar39 == 0x51 )) {
                        LAB_00101851:BIO_printf(bio_s_out, "DONE\n");
                        BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
                        BIO_closesocket(param_1);
                        BIO_printf(_bio_err, "shutdown accept socket\n");
                        if (-1 < accept_socket) {
                           BIO_closesocket();
                        }
                        uVar49 = 0xfffffff5;
                        goto LAB_00100958;
                     }
                     if (bVar39 == 0x71) {
                        BIO_printf(bio_s_out, "DONE\n");
                        BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
                        iVar40 = SSL_version(ssl);
                        if (iVar40 != 0xfeff) {
                           BIO_closesocket(param_1);
                        }
                        goto LAB_0010094c;
                     }
                     if (bVar39 == 0x72) {
                        if (( buf[1] == 0xd ) || ( buf[1] == 10 )) {
                           LAB_001016c1:SSL_renegotiate(ssl);
                           LAB_0010168b:iVar40 = SSL_do_handshake(ssl);
                           __printf_chk(2, "SSL_do_handshake -> %d\n", iVar40);
                           goto switchD_00100dfd_caseD_4;
                        }
                     } else if (bVar39 == 0x52) {
                        if (( buf[1] == 10 ) || ( buf[1] == 0xd )) {
                           SSL_set_verify(ssl, 5, (callback*)0x0);
                           goto LAB_001016c1;
                        }
                     } else if (( bVar39 & 0xdf ) == 0x4b) {
                        if (( buf[1] == 10 ) || ( buf[1] == 0xd )) {
                           SSL_key_update(ssl, bVar39 == 0x4b);
                           goto LAB_0010168b;
                        }
                     } else if (bVar39 == 99) {
                        if (( buf[1] == 10 ) || ( buf[1] == 0xd )) {
                           SSL_set_verify(ssl, 1, (callback*)0x0);
                           iVar40 = SSL_verify_client_post_handshake(ssl);
                           if (iVar40 != 0) goto LAB_0010168b;
                           puts("Failed to initiate request");
                           ERR_print_errors(_bio_err);
                           goto switchD_00100dfd_caseD_4;
                        }
                     } else {
                        if (bVar39 == 0x50) {
                           pBVar43 = SSL_get_wbio(ssl);
                           BIO_write(pBVar43, "Lets print some clear text\n", 0x1b);
                        }
                        if (*buf == 0x53) {
                           pSVar45 = SSL_get_SSL_CTX(ssl);
                           print_stats(bio_s_out, pSVar45);
                        }
                     }
                  }
               } else {
                  uVar51 = raw_read_stdin(buf);
                  uVar49 = (uint)uVar51;
                  uVar53 = uVar51 & 0xffffffff;
                  if (0 < (int)uVar49) {
                     if (uVar49 - 1 < 0xf) {
                        uVar47 = 0;
                        iVar41 = 0;
                        iVar66 = 0;
                        uVar51 = 0;
                        iVar40 = 0;
                        LAB_00101479:uVar46 = uVar49 - (int)uVar51;
                        if (6 < uVar46 - 1) {
                           uVar56 = *(undefined8*)( buf + uVar51 );
                           bVar1 = (byte)uVar56 == (byte)_LC47;
                           auVar81[0] = -bVar1;
                           bVar2 = ( byte )((ulong)uVar56 >> 8) == _LC47._1_1_;
                           cVar91 = -bVar2;
                           bVar3 = ( byte )((ulong)uVar56 >> 0x10) == _LC47._2_1_;
                           bVar4 = ( byte )((ulong)uVar56 >> 0x18) == _LC47._3_1_;
                           bVar5 = ( byte )((ulong)uVar56 >> 0x20) == _LC47._4_1_;
                           cVar92 = -bVar5;
                           bVar6 = ( byte )((ulong)uVar56 >> 0x28) == _LC47._5_1_;
                           cVar94 = -bVar6;
                           bVar7 = ( byte )((ulong)uVar56 >> 0x30) == _LC47._6_1_;
                           cVar95 = -bVar7;
                           bVar8 = ( byte )((ulong)uVar56 >> 0x38) == _LC47._7_1_;
                           bVar39 = -bVar8;
                           auVar82._0_9_ = CONCAT18(0xff, (ulong)bVar39 << 0x38);
                           auVar73._0_10_ = CONCAT19(0xff, auVar82._0_9_);
                           auVar73[10] = 0xff;
                           auVar75[0xb] = 0xff;
                           auVar75._0_11_ = auVar73;
                           auVar77[0xc] = 0xff;
                           auVar77._0_12_ = auVar75;
                           auVar78[0xd] = 0xff;
                           auVar78._0_13_ = auVar77;
                           cVar62 = -bVar2;
                           cVar64 = -bVar4;
                           cVar65 = -bVar5;
                           cVar67 = -bVar6;
                           cVar68 = -bVar7;
                           cVar69 = -bVar8;
                           auVar109[0xe] = bVar39;
                           auVar109._0_14_ = auVar78;
                           auVar109[0xf] = cVar69;
                           auVar108._14_2_ = auVar109._14_2_;
                           auVar108[0xd] = cVar68;
                           auVar108._0_13_ = auVar77;
                           auVar107._13_3_ = auVar108._13_3_;
                           auVar107[0xc] = cVar95;
                           auVar107._0_12_ = auVar75;
                           auVar106._12_4_ = auVar107._12_4_;
                           auVar106[0xb] = cVar67;
                           auVar106._0_11_ = auVar73;
                           auVar105._11_5_ = auVar106._11_5_;
                           auVar105[10] = cVar94;
                           auVar105._0_10_ = auVar73._0_10_;
                           auVar104._10_6_ = auVar105._10_6_;
                           auVar104[9] = cVar65;
                           auVar104._0_9_ = auVar82._0_9_;
                           Var27 = CONCAT91(CONCAT81((long)( CONCAT72(auVar104._9_7_, CONCAT11(cVar92, bVar39)) >> 8 ), cVar64), -bVar4);
                           auVar30._2_10_ = Var27;
                           auVar30[1] = -bVar3;
                           auVar30[0] = -bVar3;
                           auVar29._2_12_ = auVar30;
                           auVar29[1] = cVar62;
                           auVar29[0] = cVar91;
                           auVar103._0_2_ = CONCAT11(-bVar1, auVar81[0]);
                           auVar103._2_14_ = auVar29;
                           auVar87[0xe] = bVar39;
                           auVar87._0_14_ = auVar78;
                           auVar87[0xf] = cVar69;
                           auVar86._14_2_ = auVar87._14_2_;
                           auVar86[0xd] = cVar68;
                           auVar86._0_13_ = auVar77;
                           auVar85._13_3_ = auVar86._13_3_;
                           auVar85[0xc] = cVar95;
                           auVar85._0_12_ = auVar75;
                           auVar84._12_4_ = auVar85._12_4_;
                           auVar84[0xb] = cVar67;
                           auVar84._0_11_ = auVar73;
                           auVar83._11_5_ = auVar84._11_5_;
                           auVar83[10] = cVar94;
                           auVar83._0_10_ = auVar73._0_10_;
                           auVar82._10_6_ = auVar83._10_6_;
                           auVar82[9] = cVar65;
                           Var35 = CONCAT72(auVar82._9_7_, CONCAT11(cVar92, bVar39));
                           lVar44 = (long)( (unkuint9)Var35 >> 8 );
                           auVar33._1_8_ = lVar44;
                           auVar33[0] = cVar64;
                           auVar33._9_7_ = 0;
                           auVar32._10_6_ = 0;
                           auVar32._0_10_ = SUB1610(auVar33 << 0x38, 6);
                           auVar31._11_5_ = 0;
                           auVar31._0_11_ = SUB1611(auVar32 << 0x30, 5);
                           auVar81._4_12_ = SUB1612(auVar31 << 0x28, 4);
                           auVar81[3] = cVar62;
                           auVar81[2] = cVar91;
                           auVar81[1] = -bVar1;
                           iVar40 = (int)( (unkuint9)Var35 >> 8 );
                           auVar76._8_4_ = auVar81._0_4_;
                           auVar76._0_8_ = lVar44;
                           sVar96 = auVar30._0_2_;
                           sVar97 = (short)Var27;
                           sVar63 = (short)( (unkuint9)Var35 >> 8 );
                           sVar93 = auVar85._12_2_;
                           auVar119._0_12_ = auVar103._0_12_;
                           auVar119._12_2_ = sVar97;
                           auVar119._14_2_ = -(ushort)(sVar97 < 0);
                           auVar118._12_4_ = auVar119._12_4_;
                           auVar118._0_10_ = auVar103._0_10_;
                           auVar118._10_2_ = -(ushort)(sVar96 < 0);
                           auVar117._10_6_ = auVar118._10_6_;
                           auVar117._0_8_ = auVar103._0_8_;
                           auVar117._8_2_ = sVar96;
                           auVar34._4_8_ = auVar117._8_8_;
                           auVar34._2_2_ = -(ushort)(auVar29._0_2_ < 0);
                           auVar34._0_2_ = auVar29._0_2_;
                           auVar112._12_2_ = sVar97;
                           auVar112._0_12_ = auVar119._0_12_;
                           auVar112._14_2_ = -(ushort)(sVar97 < 0);
                           auVar111._12_4_ = auVar112._12_4_;
                           auVar111._10_2_ = -(ushort)(sVar96 < 0);
                           auVar111._0_10_ = auVar118._0_10_;
                           auVar110._10_6_ = auVar111._10_6_;
                           auVar110._8_2_ = sVar96;
                           auVar110._0_8_ = auVar117._0_8_;
                           auVar90._12_2_ = auVar86._14_2_;
                           auVar90._0_12_ = auVar76;
                           auVar90._14_2_ = -(ushort)(lVar44 < 0);
                           auVar89._12_4_ = auVar90._12_4_;
                           auVar89._0_10_ = auVar76._0_10_;
                           auVar89._10_2_ = -(ushort)(sVar93 < 0);
                           auVar88._10_6_ = auVar89._10_6_;
                           auVar88._8_2_ = sVar93;
                           auVar88._0_8_ = lVar44;
                           auVar116._12_2_ = auVar86._14_2_;
                           auVar116._0_12_ = auVar76;
                           auVar116._14_2_ = -(ushort)(lVar44 < 0);
                           auVar115._12_4_ = auVar116._12_4_;
                           auVar115._10_2_ = -(ushort)(sVar93 < 0);
                           auVar115._0_10_ = auVar89._0_10_;
                           auVar114._10_6_ = auVar115._10_6_;
                           auVar114._8_2_ = sVar93;
                           auVar114._0_8_ = lVar44;
                           auVar113._8_8_ = auVar114._8_8_;
                           auVar113._6_2_ = -(ushort)(iVar40 < 0);
                           auVar113._4_2_ = auVar83._10_2_;
                           auVar113._0_4_ = iVar40;
                           iVar40 = ( ( ( ( iVar41 - CONCAT22(-(ushort)bVar1, auVar103._0_2_) ) - auVar110._8_4_ ) - CONCAT22(-(ushort)(sVar63 < 0), sVar63) ) - auVar88._8_4_ ) + ( ( ( ( iVar66 - auVar34._0_4_ ) - auVar111._12_4_ ) - auVar113._4_4_ ) - auVar89._12_4_ );
                           uVar47 = uVar47 + ( uVar46 & 0xfffffff8 );
                           if (( uVar46 & 7 ) == 0) goto LAB_0010159e;
                        }
                        if (buf[(int)uVar47] == 10) {
                           iVar40 = iVar40 + 1;
                        }
                        if ((int)( uVar47 + 1 ) < (int)uVar49) {
                           if (buf[(int)( uVar47 + 1 )] == 10) {
                              iVar40 = iVar40 + 1;
                           }
                           if ((int)( uVar47 + 2 ) < (int)uVar49) {
                              if (buf[(int)( uVar47 + 2 )] == 10) {
                                 iVar40 = iVar40 + 1;
                              }
                              if ((int)( uVar47 + 3 ) < (int)uVar49) {
                                 if (buf[(int)( uVar47 + 3 )] == 10) {
                                    iVar40 = iVar40 + 1;
                                 }
                                 if ((int)( uVar47 + 4 ) < (int)uVar49) {
                                    if (buf[(int)( uVar47 + 4 )] == 10) {
                                       iVar40 = iVar40 + 1;
                                    }
                                    if ((int)( uVar47 + 5 ) < (int)uVar49) {
                                       if (buf[(int)( uVar47 + 5 )] == 10) {
                                          iVar40 = iVar40 + 1;
                                       }
                                       if (( (int)( uVar47 + 6 ) < (int)uVar49 ) && ( buf[(int)( uVar47 + 6 )] == 10 )) {
                                          iVar40 = iVar40 + 1;
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     } else {
                        iVar41 = 0;
                        iVar66 = 0;
                        iVar70 = 0;
                        iVar71 = 0;
                        pbVar48 = buf;
                        do {
                           bVar39 = *pbVar48;
                           pbVar10 = pbVar48 + 1;
                           pbVar11 = pbVar48 + 2;
                           pbVar12 = pbVar48 + 3;
                           pbVar13 = pbVar48 + 4;
                           pbVar14 = pbVar48 + 5;
                           pbVar15 = pbVar48 + 6;
                           pbVar16 = pbVar48 + 7;
                           pbVar17 = pbVar48 + 8;
                           pbVar18 = pbVar48 + 9;
                           pbVar19 = pbVar48 + 10;
                           pbVar20 = pbVar48 + 0xb;
                           pbVar21 = pbVar48 + 0xc;
                           pbVar22 = pbVar48 + 0xd;
                           pbVar23 = pbVar48 + 0xe;
                           pbVar24 = pbVar48 + 0xf;
                           pbVar48 = pbVar48 + 0x10;
                           bVar1 = bVar39 == (byte)_LC47;
                           cVar62 = -(*pbVar16 == _LC47._7_1_);
                           bVar2 = *pbVar17 == (byte)_UNK_0010d538;
                           bVar3 = *pbVar18 == ( byte )((ulong)_UNK_0010d538 >> 8);
                           bVar4 = *pbVar19 == ( byte )((ulong)_UNK_0010d538 >> 0x10);
                           bVar5 = *pbVar20 == ( byte )((ulong)_UNK_0010d538 >> 0x18);
                           bVar6 = *pbVar21 == ( byte )((ulong)_UNK_0010d538 >> 0x20);
                           bVar7 = *pbVar22 == ( byte )((ulong)_UNK_0010d538 >> 0x28);
                           bVar8 = *pbVar23 == ( byte )((ulong)_UNK_0010d538 >> 0x30);
                           bVar9 = *pbVar24 == ( byte )((ulong)_UNK_0010d538 >> 0x38);
                           uVar38 = CONCAT11(-(*pbVar16 == _LC47._7_1_), cVar62);
                           uVar37 = CONCAT31(CONCAT21(uVar38, -(*pbVar15 == _LC47._6_1_)), -(*pbVar15 == _LC47._6_1_));
                           uVar36 = CONCAT51(CONCAT41(uVar37, -(*pbVar14 == _LC47._5_1_)), -(*pbVar14 == _LC47._5_1_));
                           Var35 = CONCAT72(CONCAT61(uVar36, -(*pbVar13 == _LC47._4_1_)), CONCAT11(-(*pbVar13 == _LC47._4_1_), cVar62));
                           lVar44 = (long)( (unkuint9)Var35 >> 8 );
                           Var27 = CONCAT91(CONCAT81(lVar44, -(*pbVar12 == _LC47._3_1_)), -(*pbVar12 == _LC47._3_1_));
                           auVar26._2_10_ = Var27;
                           auVar26[1] = -(*pbVar11 == _LC47._2_1_);
                           auVar26[0] = -(*pbVar11 == _LC47._2_1_);
                           auVar25._2_12_ = auVar26;
                           auVar25[1] = -(*pbVar10 == _LC47._1_1_);
                           auVar25[0] = -(*pbVar10 == _LC47._1_1_);
                           auVar79._0_2_ = CONCAT11(-bVar1, -bVar1);
                           auVar79._2_14_ = auVar25;
                           uVar54 = CONCAT13(-bVar3, CONCAT12(-bVar3, CONCAT11(-bVar2, -bVar2)));
                           uVar55 = CONCAT15(-bVar4, CONCAT14(-bVar4, uVar54));
                           uVar56 = CONCAT17(-bVar5, CONCAT16(-bVar5, uVar55));
                           auVar57._0_10_ = CONCAT19(-bVar6, CONCAT18(-bVar6, uVar56));
                           auVar57[10] = -bVar7;
                           auVar57[0xb] = -bVar7;
                           auVar59[0xc] = -bVar8;
                           auVar59._0_12_ = auVar57;
                           auVar59[0xd] = -bVar8;
                           auVar60[0xe] = -bVar9;
                           auVar60._0_14_ = auVar59;
                           auVar60[0xf] = -bVar9;
                           sVar63 = (short)Var27;
                           sVar93 = (short)( (unkuint9)Var35 >> 8 );
                           sVar96 = (short)uVar36;
                           sVar97 = (short)uVar37;
                           auVar122._0_12_ = auVar79._0_12_;
                           auVar122._12_2_ = sVar63;
                           auVar122._14_2_ = -(ushort)(sVar63 < 0);
                           auVar121._12_4_ = auVar122._12_4_;
                           auVar121._0_10_ = auVar79._0_10_;
                           auVar121._10_2_ = -(ushort)(auVar26._0_2_ < 0);
                           auVar120._10_6_ = auVar121._10_6_;
                           auVar120._0_8_ = auVar79._0_8_;
                           auVar120._8_2_ = auVar26._0_2_;
                           auVar28._4_8_ = auVar120._8_8_;
                           auVar28._2_2_ = -(ushort)(auVar25._0_2_ < 0);
                           auVar28._0_2_ = auVar25._0_2_;
                           iVar72 = CONCAT22(-(ushort)(sVar93 < 0), sVar93);
                           auVar74._0_8_ = CONCAT26(-(ushort)(sVar96 < 0), CONCAT24(sVar96, iVar72));
                           auVar74._8_2_ = sVar97;
                           auVar74._10_2_ = -(ushort)(sVar97 < 0);
                           auVar80._12_2_ = uVar38;
                           auVar80._0_12_ = auVar74;
                           auVar80._14_2_ = -(ushort)(lVar44 < 0);
                           sVar63 = (short)( (unkuint10)auVar57._0_10_ >> 0x40 );
                           auVar102._12_2_ = (short)( (ulong)uVar56 >> 0x30 );
                           auVar102._0_12_ = auVar57;
                           auVar102._14_2_ = -(ushort)bVar5;
                           auVar101._12_4_ = auVar102._12_4_;
                           auVar101._10_2_ = -(ushort)bVar4;
                           auVar101._0_10_ = auVar57._0_10_;
                           auVar100._10_6_ = auVar101._10_6_;
                           auVar100._8_2_ = (short)( (uint6)uVar55 >> 0x20 );
                           auVar100._0_8_ = uVar56;
                           auVar99._8_8_ = auVar100._8_8_;
                           auVar99._6_2_ = -(ushort)bVar3;
                           auVar99._0_6_ = uVar55;
                           auVar98._6_10_ = auVar99._6_10_;
                           auVar98._4_2_ = (short)( (uint)uVar54 >> 0x10 );
                           auVar98._0_4_ = uVar54;
                           iVar40 = CONCAT22(-(ushort)(sVar63 < 0), sVar63);
                           auVar58._0_8_ = CONCAT26(-(ushort)(auVar57._10_2_ < 0), CONCAT24(auVar57._10_2_, iVar40));
                           auVar58._8_2_ = auVar59._12_2_;
                           auVar58._10_2_ = -(ushort)(auVar59._12_2_ < 0);
                           auVar61._12_2_ = auVar60._14_2_;
                           auVar61._0_12_ = auVar58;
                           auVar61._14_2_ = -(ushort)(auVar60._14_2_ < 0);
                           iVar41 = ( ( ( iVar41 - CONCAT22(-(ushort)bVar1, auVar79._0_2_) ) - iVar72 ) - CONCAT22(-(ushort)bVar2, CONCAT11(-bVar2, -bVar2)) ) - iVar40;
                           iVar66 = ( ( ( iVar66 - auVar28._0_4_ ) - (int)( (ulong)auVar74._0_8_ >> 0x20 ) ) - auVar98._4_4_ ) - (int)( (ulong)auVar58._0_8_ >> 0x20 );
                           iVar70 = ( ( ( iVar70 - auVar120._8_4_ ) - auVar74._8_4_ ) - auVar100._8_4_ ) - auVar58._8_4_;
                           iVar71 = ( ( ( iVar71 - auVar121._12_4_ ) - auVar80._12_4_ ) - auVar101._12_4_ ) - auVar61._12_4_;
                        } while ( buf + ( uVar51 & 0xfffffff0 ) != pbVar48 );
                        uVar47 = uVar49 & 0xfffffff0;
                        uVar51 = (ulong)uVar47;
                        iVar40 = iVar70 + iVar41 + iVar71 + iVar66;
                        iVar41 = iVar41 + iVar70;
                        iVar66 = iVar66 + iVar71;
                        if (uVar47 != uVar49) goto LAB_00101479;
                     }
                     LAB_0010159e:lVar44 = (long)(int)( uVar49 - 1 );
                     do {
                        bVar39 = buf[lVar44];
                        buf[iVar40 + (int)lVar44] = bVar39;
                        if (bVar39 == 10) {
                           iVar40 = iVar40 + -1;
                           uVar53 = ( ulong )((int)uVar53 + 1);
                           buf[iVar40 + (int)lVar44] = 0xd;
                        }
                        lVar44 = lVar44 + -1;
                     } while ( -1 < (int)lVar44 );
                     goto LAB_00100fe2;
                  }
                  if (s_brief == 0 && s_quiet == 0) goto LAB_00101851;
               }
               local_f8 = 0;
               pbVar48 = buf;
               do {
                  while (true) {
                     while (true) {
                        iVar66 = (int)uVar53;
                        iVar40 = SSL_write(ssl, pbVar48, iVar66);
                        iVar41 = SSL_get_error(ssl, iVar40);
                        if (iVar41 != 4) break;
                        BIO_printf(bio_s_out, "LOOKUP renego during write\n");
                        lookup_srp_user(&srp_callback_parm, bio_s_out);
                     };
                     iVar41 = SSL_get_error(ssl, iVar40);
                     switch (iVar41) {
                        case 1:
                        case 5:
                        case 10:
                goto switchD_00100dfd_caseD_1;
                        case 2:
                        case 3:
                        case 4:
                BIO_printf(bio_s_out,"Write BLOCK\n");
                BIO_ctrl(bio_s_out,0xb,0,(void *)0x0);
                break;
                        case 6:
                goto switchD_00100dfd_caseD_6;
                        case 9:
                BIO_printf(bio_s_out,"Write BLOCK (Async)\n");
                BIO_ctrl(bio_s_out,0xb,0,(void *)0x0);
                wait_for_async(ssl);
                     }
                     if (iVar40 < 1) break;
                     uVar53 = ( ulong )(uint)(iVar66 - iVar40);
                     local_f8 = local_f8 + iVar40;
                     if (iVar66 - iVar40 < 1) goto LAB_00101381;
                     pbVar48 = buf + local_f8;
                  };
               } while ( 0 < iVar66 );
               LAB_00101381:if (!bVar52) goto switchD_00100dfd_caseD_4;
            }
            LAB_00100c46:if (( ( async != 0 ) && ( iVar40 = SSL_waiting_for_async(ssl) ),iVar40 != 0 )) {
               LAB_00100dc0:while (true) {
                  iVar40 = SSL_read(ssl, buf, 0x4000);
                  iVar41 = SSL_get_error(ssl, iVar40);
                  if (iVar41 != 4) break;
                  BIO_printf(bio_s_out, "LOOKUP renego during read\n");
                  lookup_srp_user(&srp_callback_parm, bio_s_out);
               };
               iVar41 = SSL_get_error(ssl, iVar40);
               switch (iVar41) {
                  case 0:
            goto switchD_00100dfd_caseD_0;
                  case 1:
                  case 5:
                  case 10:
            goto switchD_00100dfd_caseD_1;
                  case 2:
                  case 3:
            BIO_printf(bio_s_out,"Read BLOCK\n");
            BIO_ctrl(bio_s_out,0xb,0,(void *)0x0);
                  default:
            goto switchD_00100dfd_caseD_4;
                  case 6:
            goto switchD_00100dfd_caseD_6;
                  case 9:
            BIO_printf(bio_s_out,"Read BLOCK (Async)\n");
            BIO_ctrl(bio_s_out,0xb,0,(void *)0x0);
            wait_for_async(ssl);
            goto switchD_00100dfd_caseD_4;
               }
            }
            local_e4 = 0;
            pBVar43 = SSL_get_rbio(ssl);
            BIO_set_callback_arg(pBVar43, (char*)&local_e4);
            if (dtlslisten == 0) {
               if (stateless != 0) {
                  parg = (void*)0x0;
                  iVar40 = SSL_stateless(ssl);
                  LAB_00100cc1:bVar52 = false;
                  if (iVar40 < 1) {
                     BIO_ADDR_free(parg);
                     goto LAB_00100cfb;
                  }
                  local_e0 = 0xffffffff;
                  if (dtlslisten != 0) {
                     pBVar43 = SSL_get_wbio(ssl);
                     if (pBVar43 != (BIO*)0x0) {
                        BIO_ctrl(pBVar43, 0x69, 0, &local_e0);
                        iVar40 = BIO_connect(local_e0, parg, 0);
                        if (iVar40 != 0) {
                           BIO_ctrl(pBVar43, 0x20, 0, parg);
                           BIO_ADDR_free(parg);
                           dtlslisten = 0;
                           goto LAB_00100ce9;
                        }
                     }
                     BIO_printf(_bio_err, "ERROR - unable to connect\n");
                     BIO_ADDR_free(parg);
                     goto LAB_00100d59;
                  }
                  stateless = 0;
                  LAB_00100ce9:iVar40 = SSL_accept(ssl);
                  if (iVar40 < 1) goto LAB_00100cfb;
                  LAB_001012eb:print_connection_info(ssl);
                  LAB_001012f3:pBVar43 = SSL_get_rbio(ssl);
                  BIO_set_callback_arg(pBVar43, (char*)0x0);
                  goto switchD_00100dfd_caseD_4;
               }
               do {
                  iVar40 = SSL_accept(ssl);
                  if (0 < iVar40) goto LAB_001012eb;
                  iVar41 = SSL_get_error(ssl, iVar40);
                  bVar52 = iVar41 != 1 && 1 < iVar41 - 5U;
                  while (iVar41 = SSL_get_error(ssl, iVar40),iVar41 == 4) {
                     BIO_printf(bio_s_out, "LOOKUP during accept %s\n", srp_callback_parm);
                     lookup_srp_user(&srp_callback_parm);
                     iVar40 = SSL_accept(ssl);
                     if (0 < iVar40) goto LAB_001012eb;
                     iVar41 = SSL_get_error(ssl, iVar40);
                     bVar52 = iVar41 != 1 && 1 < iVar41 - 5U;
                  };
               } while ( ( iVar40 != 0 ) && ( iVar41 = iVar41 != 0 ) );
               LAB_00100cfb:if (dtlslisten == 0) {
                  if (stateless != 0) {
                     if (iVar40 == 0) goto LAB_0010176c;
                     if (stateless != 0) goto LAB_00100d27;
                  }
                  if (bVar52) {
                     LAB_0010176c:BIO_printf(bio_s_out, "DELAY\n");
                     goto LAB_001012f3;
                  }
               } else if (iVar40 == 0) goto LAB_0010176c;
               LAB_00100d27:BIO_printf(_bio_err, "ERROR\n");
               lVar44 = SSL_get_verify_result(ssl);
               if (lVar44 != 0) {
                  pcVar50 = X509_verify_cert_error_string(lVar44);
                  BIO_printf(_bio_err, "verify error:%s\n", pcVar50);
               }
               ERR_print_errors(_bio_err);
            } else {
               parg = (void*)BIO_ADDR_new();
               if (parg != (void*)0x0) {
                  iVar40 = DTLSv1_listen(ssl);
                  goto LAB_00100cc1;
               }
               BIO_printf(_bio_err, "ERROR - memory\n");
            }
            LAB_00100d59:pBVar43 = SSL_get_rbio(ssl);
            BIO_set_callback_arg(pBVar43, (char*)0x0);
            uVar49 = -(uint)(local_e4 == 0) | 1;
            goto LAB_00100958;
         }
         type = BIO_f_nbio_test();
         b = BIO_new(type);
         if (b != (BIO*)0x0) {
            pBVar43 = BIO_push(b, pBVar43);
            goto LAB_0010085d;
         }
         BIO_printf(_bio_err, "Unable to create BIO\n");
         BIO_free(pBVar43);
      }
   } else {
      sVar42 = strlen((char*)param_4);
      iVar40 = SSL_set_session_id_context(ssl, param_4, (uint)sVar42);
      if (iVar40 != 0) goto LAB_001007fc;
      BIO_printf(_bio_err, "Error setting session id context\n");
   }
   uVar49 = 0xffffffff;
   LAB_00100958:BIO_printf(bio_s_out, "shutting down SSL\n");
   do_ssl_shutdown(ssl);
   SSL_free(ssl);
   LAB_0010097d:BIO_printf(bio_s_out, "CONNECTION CLOSED\n");
   CRYPTO_clear_free(buf, 0x4000, "apps/s_server.c", 0xb6d);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar49;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_00100dfd_caseD_6:BIO_printf(bio_s_out, "DONE\n");
   BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
   goto LAB_0010094c;
   switchD_00100dfd_caseD_1:BIO_printf(bio_s_out, "ERROR\n");
   BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
   ERR_print_errors(_bio_err);
   LAB_0010094c:uVar49 = 1;
   goto LAB_00100958;
   switchD_00100dfd_caseD_0:raw_write_stdout(buf, iVar40);
   BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
   iVar40 = SSL_has_pending(ssl);
   if (iVar40 == 0) goto switchD_00100dfd_caseD_4;
   goto LAB_00100dc0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 www_body(int param_1, undefined8 param_2, undefined8 param_3, uchar *param_4) {
   char cVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   char *buf;
   BIO_METHOD *pBVar5;
   BIO *bp;
   BIO *pBVar6;
   BIO *b;
   long lVar7;
   SSL *ssl;
   size_t sVar8;
   BIO *pBVar9;
   BIO *b_00;
   stack_st_SSL_CIPHER *psVar10;
   SSL_CIPHER *pSVar11;
   char *pcVar12;
   SSL_SESSION *ses;
   SSL_CTX *pSVar13;
   X509 *x;
   char *pcVar14;
   uint uVar15;
   undefined *data;
   fd_set *pfVar16;
   ulong uVar17;
   uint uVar18;
   int iVar19;
   long in_FS_OFFSET;
   byte bVar20;
   long local_d0;
   fd_set local_c8;
   long local_40;
   bVar20 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   buf = (char*)app_malloc(0x4001, "server www buffer");
   pBVar5 = BIO_f_buffer();
   bp = BIO_new(pBVar5);
   pBVar5 = BIO_f_ssl();
   pBVar6 = BIO_new(pBVar5);
   pBVar5 = BIO_s_mem();
   b = BIO_new(pBVar5);
   if (( bp == (BIO*)0x0 || pBVar6 == (BIO*)0x0 ) || ( b == (BIO*)0x0 )) goto LAB_00101c28;
   if (s_nbio != 0) {
      iVar2 = BIO_socket_nbio(param_1, 1);
      if (iVar2 == 0) {
         ERR_print_errors(_bio_err);
      } else if (s_quiet == 0) {
         BIO_printf(_bio_err, "Turned on non blocking io\n");
      }
   }
   lVar7 = BIO_int_ctrl(bp, 0x75, 0x4000, 1);
   if (( lVar7 < 1 ) || ( ssl = SSL_new(ctx) ),ssl == (SSL*)0x0) goto LAB_00101c28;
   if (s_tlsextdebug != 0) {
      SSL_callback_ctrl(ssl, 0x38, (_func_3375*)&tlsext_cb);
      SSL_ctrl(ssl, 0x39, 0, bio_s_out);
   }
   if (param_4 == (uchar*)0x0) {
      LAB_00101aea:pBVar9 = BIO_new_socket(param_1, 0);
      if (pBVar9 != (BIO*)0x0) {
         if (s_nbio_test != 0) {
            pBVar5 = BIO_f_nbio_test();
            b_00 = BIO_new(pBVar5);
            if (b_00 == (BIO*)0x0) {
               SSL_free(ssl);
               BIO_free(pBVar9);
               goto LAB_00101c28;
            }
            pBVar9 = BIO_push(b_00, pBVar9);
         }
         SSL_set_bio(ssl, pBVar9, pBVar9);
         SSL_set_accept_state(ssl);
         BIO_ctrl(pBVar6, 0x6d, 1, ssl);
         BIO_push(bp, pBVar6);
         if (s_debug != 0) {
            pBVar6 = SSL_get_rbio(ssl);
            BIO_set_callback_ex(pBVar6, bio_dump_callback);
            pBVar6 = bio_s_out;
            pBVar9 = SSL_get_rbio(ssl);
            BIO_set_callback_arg(pBVar9, (char*)pBVar6);
         }
         if (s_msg != 0) {
            if (s_msg == 2) {
               SSL_set_msg_callback(ssl, (cb*)&SSL_trace);
            } else {
               SSL_set_msg_callback(ssl, (cb*)&msg_cb);
            }
            pBVar6 = bio_s_msg;
            if (bio_s_msg == (BIO*)0x0) {
               pBVar6 = bio_s_out;
            }
            SSL_ctrl(ssl, 0x10, 0, pBVar6);
         }
         if (early_data == 0) {
            LAB_00101d50:lVar7 = BIO_ctrl(b, 2, 0, (void*)0x0);
            pBVar6 = b;
            if ((int)lVar7 != 0) {
               pBVar6 = bp;
            }
            iVar2 = BIO_gets(pBVar6, buf, 0x4001);
            if (iVar2 < 0) {
               iVar2 = BIO_test_flags(bp, 8);
               if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
                  if (s_quiet == 0) {
                     ERR_print_errors(_bio_err);
                  }
                  goto LAB_00101c22;
               }
               BIO_printf(bio_s_out, "read R BLOCK\n");
               iVar2 = BIO_test_flags(bp, 4);
               if (( iVar2 == 0 ) || ( iVar2 = iVar2 != 1 )) {
                  OSSL_sleep(1000);
               } else {
                  BIO_printf(bio_s_out, "LOOKUP renego during read\n");
                  lookup_srp_user(&srp_callback_parm, bio_s_out);
               }
               goto LAB_00101d50;
            }
            if (iVar2 == 0) goto LAB_00101e86;
            if (www != 1) {
               if (www == 2) {
                  iVar2 = strncmp(buf, "GET /stats ", 0xb);
                  if (iVar2 != 0) goto LAB_00101db9;
                  goto LAB_00101ff9;
               }
               if (www != 3) goto LAB_00101d50;
               LAB_00101db9:iVar2 = strncmp(buf, "GET /", 5);
               if (iVar2 == 0) goto code_r0x00101dd5;
               goto LAB_00101d50;
            }
            iVar2 = strncmp(buf, "GET ", 4);
            if (iVar2 != 0) goto LAB_00101d50;
            iVar2 = strncmp(buf, "GET /reneg", 10);
            if (iVar2 != 0) goto LAB_00101ff9;
            iVar2 = strncmp(buf, "GET /renegcert", 0xe);
            if (iVar2 == 0) {
               SSL_set_verify(ssl, 5, (callback*)0x0);
            }
            uVar15 = SSL_renegotiate(ssl);
            BIO_printf(bio_s_out, "SSL_renegotiate -> %d\n", (ulong)uVar15);
            iVar2 = SSL_do_handshake(ssl);
            if (iVar2 < 1) {
               uVar15 = SSL_get_error(ssl, iVar2);
               BIO_printf(bio_s_out, "SSL_do_handshake() Retval %d\n", (ulong)uVar15);
               ERR_print_errors(_bio_err);
               goto LAB_00101c22;
            }
            pfVar16 = &local_c8;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
               pfVar16->fds_bits[0] = 0;
               pfVar16 = (fd_set*)( (long)pfVar16 + ( (ulong)bVar20 * -2 + 1 ) * 8 );
            }
            lVar7 = __fdelt_chk((long)param_1);
            uVar17 = 1L << ( (byte)param_1 & 0x3f );
            local_c8.fds_bits[lVar7] = local_c8.fds_bits[lVar7] | uVar17;
            iVar2 = select(param_1 + 1, &local_c8, (fd_set*)0x0, (fd_set*)0x0, (timeval*)0x0);
            if (( iVar2 < 1 ) || ( lVar7 = __fdelt_chk((long)param_1)(uVar17 & local_c8.fds_bits[lVar7]) == 0 )) {
               BIO_printf(bio_s_out, "Error waiting for client response\n");
               ERR_print_errors(_bio_err);
               goto LAB_00101c22;
            }
            BIO_gets(bp, buf, 0x4001);
            LAB_00101ff9:lVar7 = 0;
            BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/html\r\n\r\n");
            BIO_puts(bp, "<HTML><BODY BGCOLOR=\"#ffffff\">\n");
            BIO_puts(bp, "<pre>\n");
            BIO_puts(bp, "\n");
            if (0 < local_argc) {
               do {
                  pcVar12 = *(char**)( local_argv + lVar7 * 8 );
                  cVar1 = *pcVar12;
                  while (cVar1 != '\0') {
                     while (cVar1 != '<') {
                        if (cVar1 != '>') {
                           if (cVar1 == '&') {
                              BIO_puts(bp, "&amp;");
                           } else {
                              BIO_write(bp, pcVar12, 1);
                           }
                           goto LAB_00102080;
                        }
                        pcVar12 = pcVar12 + 1;
                        BIO_puts(bp, "&gt;");
                        cVar1 = *pcVar12;
                        if (cVar1 == '\0') goto LAB_001020b4;
                     };
                     BIO_puts(bp, "&lt;");
                     LAB_00102080:pcVar14 = pcVar12 + 1;
                     pcVar12 = pcVar12 + 1;
                     cVar1 = *pcVar14;
                  };
                  LAB_001020b4:lVar7 = lVar7 + 1;
                  BIO_write(bp, &_LC67, 1);
               } while ( (int)lVar7 < local_argc );
            }
            uVar15 = 0;
            BIO_puts(bp, "\n");
            ssl_print_secure_renegotiation_notes(bp, ssl);
            BIO_printf(bp, "Ciphers supported in s_server binary\n");
            psVar10 = SSL_get_ciphers(ssl);
            uVar3 = OPENSSL_sk_num(psVar10);
            if (0 < (int)uVar3) {
               do {
                  while (true) {
                     uVar18 = uVar15 + 1;
                     pSVar11 = (SSL_CIPHER*)OPENSSL_sk_value(psVar10, uVar15);
                     pcVar12 = SSL_CIPHER_get_name(pSVar11);
                     pcVar14 = SSL_CIPHER_get_version(pSVar11);
                     BIO_printf(bp, "%-11s:%-25s ", pcVar14, pcVar12);
                     if (uVar18 == uVar3) goto LAB_00102288;
                     uVar15 = uVar18;
                     if (( uVar18 & 1 ) != 0) break;
                     BIO_puts(bp, "\n");
                  };
               } while ( uVar18 != uVar3 );
            }
            LAB_00102288:BIO_puts(bp, "\n");
            pcVar12 = SSL_get_shared_ciphers(ssl, buf, 0x4000);
            if (pcVar12 != (char*)0x0) {
               iVar19 = 0;
               BIO_printf(bp, "---\nCiphers common between both SSL end points:\n");
               iVar2 = 0;
               cVar1 = *pcVar12;
               while (cVar1 != '\0') {
                  if (cVar1 == ':') {
                     BIO_write(bp, "                          ", 0x1a - iVar19);
                     iVar2 = iVar2 + 1;
                     data = &_LC67;
                     if (iVar2 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
                        data = &_LC20;
                     }
                     iVar19 = 0;
                     BIO_write(bp, data, 1);
                  } else {
                     iVar19 = iVar19 + 1;
                     BIO_write(bp, pcVar12, 1);
                  }
                  pcVar14 = pcVar12 + 1;
                  pcVar12 = pcVar12 + 1;
                  cVar1 = *pcVar14;
               };
               BIO_puts(bp, "\n");
            }
            ssl_print_sigalgs(bp, ssl);
            ssl_print_groups(bp, ssl, 0);
            print_ca_names(bp, ssl);
            iVar2 = SSL_session_reused(ssl);
            pcVar12 = "---\nNew, ";
            if (iVar2 != 0) {
               pcVar12 = "---\nReused, ";
            }
            BIO_printf(bp, pcVar12);
            pSVar11 = SSL_get_current_cipher(ssl);
            SSL_CIPHER_get_name(pSVar11);
            pcVar12 = SSL_CIPHER_get_version(pSVar11);
            BIO_printf(bp, "%s, Cipher is %s\n", pcVar12);
            ses = SSL_get_session(ssl);
            SSL_SESSION_print(bp, ses);
            BIO_printf(bp, "---\n");
            pSVar13 = SSL_get_SSL_CTX(ssl);
            print_stats(bp, pSVar13);
            BIO_printf(bp, "---\n");
            x = (X509*)SSL_get0_peer_certificate(ssl);
            if (x == (X509*)0x0) {
               BIO_puts(bp, "no client certificate available\n");
            } else {
               BIO_printf(bp, "Client certificate\n");
               X509_print(bp, x);
               PEM_write_bio_X509(bp, x);
            }
            BIO_puts(bp, "</pre></BODY></HTML>\r\n\r\n");
            goto LAB_00101e71;
         }
         do {
            while (true) {
               while (iVar2 = SSL_read_early_data(ssl, buf, 0x4000),iVar2 != 0) {
                  if (local_d0 != 0) {
                     BIO_write(b, buf, (int)local_d0);
                  }
                  if (iVar2 == 2) goto LAB_00101d50;
               };
               iVar2 = SSL_get_error(ssl, 0);
               if (3 < iVar2) break;
               if (iVar2 < 2) goto LAB_00101c01;
            };
         } while ( iVar2 == 9 );
         LAB_00101c01:BIO_printf(_bio_err, "Error reading early data\n");
         ERR_print_errors(_bio_err);
         goto LAB_00101c22;
      }
   } else {
      sVar8 = strlen((char*)param_4);
      iVar2 = SSL_set_session_id_context(ssl, param_4, (uint)sVar8);
      if (iVar2 != 0) goto LAB_00101aea;
   }
   SSL_free(ssl);
   goto LAB_00101c28;
   code_r0x00101dd5:cVar1 = buf[5];
   pcVar12 = buf + 5;
   if (cVar1 != '\0') {
      uVar15 = 1;
      pcVar14 = pcVar12;
      do {
         if (cVar1 == ' ') {
            *pcVar14 = '\0';
            if (( uVar15 + 1 & 0xfffffffb ) == 0) {
               LAB_0010266e:BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/plain\r\n\r\n");
               BIO_printf(bp, "\'%s\' contains \'..\' or \':\'\r\n", pcVar12);
            } else if (( buf[5] == '/' ) || ( buf[5] == '\\' )) {
               BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/plain\r\n\r\n");
               BIO_printf(bp, "\'%s\' is an invalid path\r\n", pcVar12);
            } else {
               iVar2 = app_isdir(pcVar12);
               if (iVar2 < 1) {
                  pcVar14 = "r";
                  if (http_server_binmode == '\x01') {
                     pcVar14 = "rb";
                  }
                  pBVar6 = BIO_new_file(pcVar12, pcVar14);
                  if (pBVar6 == (BIO*)0x0) {
                     BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/plain\r\n\r\n");
                     BIO_printf(bp, "Error opening \'%s\' mode=\'%s\'\r\n", pcVar12);
                     ERR_print_errors(bp);
                  } else {
                     if (s_quiet == 0) {
                        BIO_printf(_bio_err, "FILE:%s\n", pcVar12);
                     }
                     if (www == 2) {
                        sVar8 = strlen(pcVar12);
                        iVar2 = (int)sVar8;
                        if (iVar2 < 6) {
                           if (iVar2 == 5) {
                              lVar7 = 5;
                              goto LAB_0010273f;
                           }
                           LAB_0010276a:BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/plain\r\n\r\n");
                        } else {
                           lVar7 = (long)iVar2;
                           iVar2 = strcmp(buf + lVar7, ".html");
                           if (iVar2 != 0) {
                              LAB_0010273f:iVar2 = strcmp(buf + lVar7 + 1, ".php");
                              if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) goto LAB_0010276a;
                           }
                           BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/html\r\n\r\n");
                        }
                     }
                     while (iVar2 = BIO_read(pBVar6, buf, 0x4000),0 < iVar2) {
                        iVar19 = 0;
                        do {
                           iVar4 = BIO_write(bp, buf + iVar19, iVar2 - iVar19);
                           if (iVar4 < 1) {
                              iVar4 = BIO_test_flags(bp, 8);
                              if (( iVar4 == 0 ) && ( iVar4 = iVar4 == 0 )) goto LAB_001026aa;
                              BIO_printf(bio_s_out, "rwrite W BLOCK\n");
                           } else {
                              iVar19 = iVar19 + iVar4;
                           }
                        } while ( iVar19 < iVar2 );
                     };
                     LAB_001026aa:BIO_free(pBVar6);
                  }
               } else {
                  BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/plain\r\n\r\n");
                  BIO_printf(bp, "\'%s\' is a directory\r\n", pcVar12);
               }
            }
            goto LAB_00101e71;
         }
         if (cVar1 == ':') {
            *pcVar14 = '\0';
            goto LAB_0010266e;
         }
         if (uVar15 == 2) {
            uVar15 = 3;
            joined_r0x00102397:if (cVar1 != '.') {
               LAB_00101e20:uVar15 = ( uint )(cVar1 == '/' || cVar1 == '\\');
            }
         } else if (uVar15 == 3) {
            if (( cVar1 != '/' ) && ( cVar1 != '\\' )) goto LAB_00101e20;
            uVar15 = 0xffffffff;
         } else {
            if (uVar15 == 1) {
               uVar15 = 2;
               goto joined_r0x00102397;
            }
            if (uVar15 == 0) goto LAB_00101e20;
         }
         cVar1 = pcVar14[1];
         pcVar14 = pcVar14 + 1;
      } while ( cVar1 != '\0' );
   }
   BIO_puts(bp, "HTTP/1.0 200 ok\r\nContent-type: text/plain\r\n\r\n");
   BIO_printf(bp, "\'%s\' is an invalid file name\r\n", pcVar12);
   LAB_00101e71:do {
      lVar7 = BIO_ctrl(bp, 0xb, 0, (void*)0x0);
      if (0 < (int)lVar7) break;
      iVar2 = BIO_test_flags(bp, 8);
   } while ( iVar2 != 0 );
   LAB_00101e86:do_ssl_shutdown(ssl);
   LAB_00101c22:pBVar6 = (BIO*)0x0;
   LAB_00101c28:CRYPTO_free(buf);
   BIO_free(pBVar6);
   BIO_free_all(bp);
   BIO_free_all(b);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return 1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 rev_body(int param_1, undefined8 param_2, undefined8 param_3, uchar *param_4) {
   int iVar1;
   int iVar2;
   uchar *out;
   BIO_METHOD *pBVar3;
   BIO *bp;
   BIO *pBVar4;
   long lVar5;
   SSL *ssl;
   size_t sVar6;
   BIO *pBVar7;
   uchar *puVar8;
   out = (uchar*)app_malloc(0x4001, "server rev buffer");
   pBVar3 = BIO_f_buffer();
   bp = BIO_new(pBVar3);
   pBVar3 = BIO_f_ssl();
   pBVar4 = BIO_new(pBVar3);
   if (( ( ( bp == (BIO*)0x0 ) || ( pBVar4 == (BIO*)0x0 ) ) || ( lVar5 = BIO_int_ctrl(bp, 0x75, 0x4000, 1) ),lVar5 < 1 )) goto LAB_00102a69;
   if (s_tlsextdebug != 0) {
      SSL_callback_ctrl(ssl, 0x38, (_func_3375*)&tlsext_cb);
      SSL_ctrl(ssl, 0x39, 0, bio_s_out);
   }
   if (param_4 == (uchar*)0x0) {
      LAB_001028c6:pBVar7 = BIO_new_socket(param_1, 0);
      if (pBVar7 != (BIO*)0x0) {
         SSL_set_bio(ssl, pBVar7, pBVar7);
         SSL_set_accept_state(ssl);
         BIO_ctrl(pBVar4, 0x6d, 1, ssl);
         BIO_push(bp, pBVar4);
         if (s_debug != 0) {
            pBVar4 = SSL_get_rbio(ssl);
            BIO_set_callback_ex(pBVar4, bio_dump_callback);
            pBVar4 = bio_s_out;
            pBVar7 = SSL_get_rbio(ssl);
            BIO_set_callback_arg(pBVar7, (char*)pBVar4);
         }
         if (s_msg != 0) {
            if (s_msg == 2) {
               SSL_set_msg_callback(ssl, (cb*)&SSL_trace);
            } else {
               SSL_set_msg_callback(ssl, (cb*)&msg_cb);
            }
            pBVar4 = bio_s_msg;
            if (bio_s_msg == (BIO*)0x0) {
               pBVar4 = bio_s_out;
            }
            SSL_ctrl(ssl, 0x10, 0, pBVar4);
         }
         while (lVar5 = BIO_ctrl(bp, 0x65, 0, (void*)0x0),(int)lVar5 < 1) {
            iVar1 = BIO_test_flags(bp, 8);
            if (iVar1 == 0) {
               BIO_puts(_bio_err, "CONNECTION FAILURE\n");
               ERR_print_errors(_bio_err);
               goto LAB_00102a5f;
            }
            iVar1 = BIO_test_flags(bp, 4);
            if (( iVar1 != 0 ) && ( iVar1 = iVar1 == 1 )) {
               BIO_printf(bio_s_out, "LOOKUP renego during accept\n");
               lookup_srp_user(&srp_callback_parm, bio_s_out);
            }
         };
         BIO_printf(_bio_err, "CONNECTION ESTABLISHED\n");
         print_ssl_summary(ssl);
         do {
            while (true) {
               iVar1 = BIO_gets(bp, (char*)out, 0x4001);
               if (iVar1 < 0) break;
               if (iVar1 == 0) {
                  LAB_00102b2d:BIO_printf(_bio_err, "CONNECTION CLOSED\n");
                  LAB_00102a5f:do_ssl_shutdown(ssl);
                  LAB_00102a67:pBVar4 = (BIO*)0x0;
                  goto LAB_00102a69;
               }
               puVar8 = out + (long)iVar1 + -1;
               do {
                  if (( *puVar8 != '\n' ) && ( *puVar8 != '\r' )) {
                     if (( s_ign_eof == 0 ) && ( ( iVar1 == 5 && ( iVar2 = strncmp((char*)out, "CLOSE", 5) ),iVar2 == 0 ) )) goto LAB_00102b2d;
                     break;
                  }
                  puVar8 = puVar8 + -1;
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               BUF_reverse(out, (uchar*)0x0, (long)iVar1);
               out[iVar1] = '\n';
               BIO_write(bp, out, iVar1 + 1);
               while (lVar5 = BIO_ctrl(bp, 0xb, 0, (void*)0x0),(int)lVar5 < 1) {
                  iVar1 = BIO_test_flags(bp, 8);
                  if (iVar1 == 0) goto LAB_00102a5f;
               };
            };
            iVar1 = BIO_test_flags(bp, 8);
            if (iVar1 == 0) {
               if (s_quiet != 0) goto LAB_00102a67;
               pBVar4 = (BIO*)0x0;
               ERR_print_errors(_bio_err);
               goto LAB_00102a69;
            }
            BIO_printf(bio_s_out, "read R BLOCK\n");
            iVar1 = BIO_test_flags(bp, 4);
            if (( iVar1 == 0 ) || ( iVar1 = iVar1 != 1 )) {
               OSSL_sleep(1000);
            } else {
               BIO_printf(bio_s_out, "LOOKUP renego during read\n");
               lookup_srp_user(&srp_callback_parm, bio_s_out);
            }
         } while ( true );
      }
   } else {
      sVar6 = strlen((char*)param_4);
      iVar1 = SSL_set_session_id_context(ssl, param_4, (uint)sVar6);
      if (iVar1 != 0) goto LAB_001028c6;
   }
   SSL_free(ssl);
   ERR_print_errors(_bio_err);
   LAB_00102a69:CRYPTO_free(out);
   BIO_free(pBVar4);
   BIO_free_all(bp);
   return 1;
}undefined4 ssl_servername_cb(SSL *param_1, undefined8 param_2, long *param_3) {
   byte bVar1;
   long lVar2;
   int iVar3;
   byte *pbVar4;
   ushort **ppuVar5;
   byte *pbVar6;
   char *format;
   pbVar4 = (byte*)SSL_get_servername(param_1, 0);
   if (pbVar4 == (byte*)0x0) {
      if (*param_3 == 0) {
         return 3;
      }
   } else {
      if ((BIO*)param_3[1] == (BIO*)0x0) {
         lVar2 = *param_3;
      } else {
         BIO_printf((BIO*)param_3[1], "Hostname in TLS extension: \"");
         bVar1 = *pbVar4;
         pbVar6 = pbVar4;
         while (bVar1 != 0) {
            pbVar6 = pbVar6 + 1;
            format = "\\x%02x";
            if (-1 < (char)bVar1) {
               ppuVar5 = __ctype_b_loc();
               format = "%c";
               if (( *(byte*)( (long)*ppuVar5 + (long)(char)bVar1 * 2 + 1 ) & 0x40 ) == 0) {
                  format = "\\x%02x";
               }
            }
            BIO_printf((BIO*)param_3[1], format, (ulong)bVar1);
            bVar1 = *pbVar6;
         };
         BIO_printf((BIO*)param_3[1], "\"\n");
         lVar2 = *param_3;
      }
      if (lVar2 == 0) {
         return 3;
      }
      iVar3 = OPENSSL_strcasecmp(pbVar4);
      if (iVar3 != 0) {
         return (int)param_3[2];
      }
      if (ctx2 != (SSL_CTX*)0x0) {
         BIO_printf((BIO*)param_3[1], "Switching server context.\n");
         SSL_set_SSL_CTX(param_1, ctx2);
      }
   }
   return 0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 psk_find_session_cb(SSL *param_1, void *param_2, size_t param_3, long *param_4) {
   undefined *__s1;
   int iVar1;
   size_t __n;
   void *ptr;
   long lVar2;
   SSL_SESSION *ses;
   undefined4 uVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   __s1 = psk_identity;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __n = strlen(psk_identity);
   if (__n == param_3) {
      iVar1 = memcmp(__s1, param_2, __n);
      if (iVar1 != 0) goto LAB_00102eb0;
      uVar3 = 0;
      if (psksess == 0) {
         ptr = (void*)OPENSSL_hexstr2buf(psk_key, &local_48);
         if (ptr == (void*)0x0) {
            BIO_printf(_bio_err, "Could not convert PSK key \'%s\' to buffer\n", psk_key);
            goto LAB_00102e8b;
         }
         lVar2 = SSL_CIPHER_find(param_1, &tls13_aes128gcmsha256_id);
         if (lVar2 == 0) {
            BIO_printf(_bio_err, "Error finding suitable ciphersuite\n");
            CRYPTO_free(ptr);
            goto LAB_00102e8b;
         }
         ses = SSL_SESSION_new();
         if (ses != (SSL_SESSION*)0x0) {
            iVar1 = SSL_SESSION_set1_master_key(ses, ptr, local_48);
            if (iVar1 != 0) {
               iVar1 = SSL_SESSION_set_cipher(ses, lVar2);
               if (iVar1 != 0) {
                  iVar1 = SSL_version(param_1);
                  iVar1 = SSL_SESSION_set_protocol_version(ses, iVar1);
                  if (iVar1 != 0) {
                     CRYPTO_free(ptr);
                     *param_4 = (long)ses;
                     goto LAB_00102eb8;
                  }
               }
            }
         }
         CRYPTO_free(ptr);
         SSL_SESSION_free(ses);
         goto LAB_00102e8b;
      }
      iVar1 = SSL_SESSION_up_ref();
      if (iVar1 == 0) goto LAB_00102e8b;
      *param_4 = psksess;
   } else {
      LAB_00102eb0:*param_4 = 0;
   }
   LAB_00102eb8:uVar3 = 1;
   LAB_00102e8b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong psk_server_cb(SSL *param_1, char *param_2, void *param_3, uint param_4) {
   int iVar1;
   void *ptr;
   ulong uVar2;
   size_t sVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   size_t local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (s_debug != 0) {
      BIO_printf(bio_s_out, "psk_server_cb\n");
   }
   iVar1 = SSL_is_dtls(param_1);
   if (iVar1 == 0) {
      iVar1 = SSL_version(param_1);
      if (0x303 < iVar1) {
         uVar2 = 0;
         goto LAB_001030d8;
      }
   }
   puVar4 = psk_identity;
   if (param_2 == (char*)0x0) {
      BIO_printf(_bio_err, "Error: client did not send PSK identity\n");
      if (s_debug != 0) {
         BIO_printf(_bio_err, "Error in PSK server callback\n");
      }
      BIO_ctrl(_bio_err, 0xb, 0, (void*)0x0);
      BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
      uVar2 = 0;
      goto LAB_001030d8;
   }
   if (s_debug == 0) {
      iVar1 = strcmp(param_2, psk_identity);
      if (iVar1 != 0) {
         LAB_00103170:BIO_printf(bio_s_out, "PSK warning: client identity not what we expected (got \'%s\' expected \'%s\')\n", param_2, puVar4);
      }
   } else {
      sVar3 = strlen(param_2);
      BIO_printf(bio_s_out, "identity_len=%d identity=%s\n", sVar3 & 0xffffffff, param_2);
      puVar4 = psk_identity;
      iVar1 = strcmp(param_2, psk_identity);
      if (iVar1 != 0) goto LAB_00103170;
      if (s_debug != 0) {
         BIO_printf(bio_s_out, "PSK client identity found\n");
      }
   }
   ptr = (void*)OPENSSL_hexstr2buf(psk_key, &local_38);
   if (ptr == (void*)0x0) {
      BIO_printf(_bio_err, "Could not convert PSK key \'%s\' to buffer\n", psk_key);
      uVar2 = 0;
   } else if ((long)(int)param_4 < (long)local_38) {
      BIO_printf(_bio_err, "psk buffer of callback is too small (%d) for key (%ld)\n", (ulong)param_4, local_38);
      CRYPTO_free(ptr);
      uVar2 = 0;
   } else {
      memcpy(param_3, ptr, local_38);
      CRYPTO_free(ptr);
      if (s_debug != 0) {
         BIO_printf(bio_s_out, "fetched PSK len=%ld\n", local_38);
      }
      uVar2 = local_38 & 0xffffffff;
   }
   LAB_001030d8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 alpn_cb(undefined8 param_1, uchar **param_2, byte *param_3, byte *param_4, uint param_5, undefined8 *param_6) {
   int iVar1;
   undefined8 uVar2;
   uint uVar3;
   if (s_quiet == 0) {
      uVar3 = 0;
      BIO_printf(bio_s_out, "ALPN protocols advertised by the client: ");
      if (param_5 != 0) {
         do {
            if (uVar3 == 0) {
               BIO_write(bio_s_out, param_4 + 1, ( uint ) * param_4);
               uVar3 = *param_4 + 1;
               if (param_5 <= uVar3) break;
            }
            BIO_write(bio_s_out, &_LC128, 2);
            BIO_write(bio_s_out, param_4 + ( uVar3 + 1 ), (uint)param_4[uVar3]);
            uVar3 = uVar3 + 1 + (uint)param_4[uVar3];
         } while ( uVar3 < param_5 );
      }
      BIO_write(bio_s_out, &_LC20, 1);
   }
   iVar1 = SSL_select_next_proto(param_2, param_3, (uchar*)*param_6, *(uint*)( param_6 + 1 ), param_4, param_5);
   uVar2 = 2;
   if (iVar1 == 1) {
      if (s_quiet == 0) {
         BIO_printf(bio_s_out, "ALPN protocols selected: ");
         BIO_write(bio_s_out, *param_2, ( uint ) * param_3);
         BIO_write(bio_s_out, &_LC20, 1);
         uVar2 = 0;
      } else {
         uVar2 = 0;
      }
   }
   return uVar2;
}undefined8 generate_session_id(SSL *param_1, uchar *param_2, uint *param_3) {
   int iVar1;
   size_t sVar2;
   ulong __n;
   int iVar3;
   iVar3 = 0;
   sVar2 = strlen(session_id_prefix);
   while (true) {
      iVar1 = RAND_bytes(param_2, *param_3);
      if (iVar1 < 1) {
         return 0;
      }
      __n = ( ulong ) * param_3;
      if ((uint)sVar2 <= *param_3) {
         __n = sVar2 & 0xffffffff;
      }
      memcpy(param_2, session_id_prefix, __n);
      iVar1 = SSL_has_matching_session_id(param_1, param_2, *param_3);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      if (iVar3 == 10) {
         return 0;
      }
   };
   return 1;
}void init_session_cache_ctx(SSL_CTX *param_1) {
   SSL_CTX_ctrl(param_1, 0x2c, 0x302, (void*)0x0);
   SSL_CTX_sess_set_new_cb(param_1, add_session);
   SSL_CTX_sess_set_get_cb(param_1, get_session);
   SSL_CTX_sess_set_remove_cb(param_1, del_session);
   return;
}void del_session(undefined8 param_1, SSL_SESSION *param_2) {
   void *__s1;
   undefined8 *puVar1;
   int iVar2;
   uchar *__s2;
   undefined8 *ptr;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __s2 = SSL_SESSION_get_id(param_2, &local_44);
   if (first != (undefined8*)0x0) {
      puVar1 = first;
      puVar3 = (undefined8*)0x0;
      do {
         ptr = puVar1;
         if (*(uint*)( ptr + 1 ) == local_44) {
            __s1 = (void*)*ptr;
            iVar2 = memcmp(__s1, __s2, (ulong)local_44);
            if (iVar2 == 0) {
               puVar1 = (undefined8*)ptr[4];
               if (puVar3 != (undefined8*)0x0) {
                  puVar3[4] = (undefined8*)ptr[4];
                  puVar1 = first;
               }
               first = puVar1;
               CRYPTO_free(__s1);
               CRYPTO_free((void*)ptr[2]);
               CRYPTO_free(ptr);
               break;
            }
         }
         puVar1 = (undefined8*)ptr[4];
         puVar3 = ptr;
      } while ( (undefined8*)ptr[4] != (undefined8*)0x0 );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 get_session(undefined8 param_1, void *param_2, int param_3, undefined4 *param_4) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   puVar4 = first;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = 0;
   if (puVar4 != (undefined8*)0x0) {
      do {
         if (*(int*)( puVar4 + 1 ) == param_3) {
            iVar1 = memcmp((void*)*puVar4, param_2, (long)param_3);
            if (iVar1 == 0) {
               local_38 = puVar4[2];
               BIO_printf(_bio_err, "Lookup session: cache hit\n");
               uVar2 = app_get0_propq();
               uVar3 = app_get0_libctx();
               uVar2 = d2i_SSL_SESSION_ex(0, &local_38, (long)*(int*)( puVar4 + 3 ), uVar3, uVar2);
               goto LAB_001036a7;
            }
         }
         puVar4 = (undefined8*)puVar4[4];
      } while ( puVar4 != (undefined8*)0x0 );
   }
   BIO_printf(_bio_err, "Lookup session: cache miss\n");
   uVar2 = 0;
   LAB_001036a7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 add_session(undefined8 param_1, SSL_SESSION *param_2) {
   BIO *bio;
   int iVar1;
   long *ptr;
   uchar *puVar2;
   long lVar3;
   long in_FS_OFFSET;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ptr = (long*)app_malloc(0x28, "get session");
   SSL_SESSION_get_id(param_2, (uint*)( ptr + 1 ));
   iVar1 = i2d_SSL_SESSION(param_2, (uchar**)0x0);
   *(int*)( ptr + 3 ) = iVar1;
   if (iVar1 < 0) {
      BIO_printf(_bio_err, "Error encoding session\n");
      CRYPTO_free(ptr);
   } else {
      lVar3 = ptr[1];
      puVar2 = SSL_SESSION_get_id(param_2, (uint*)0x0);
      lVar3 = CRYPTO_memdup(puVar2, (int)lVar3, "apps/s_server.c", 0xf0e);
      *ptr = lVar3;
      puVar2 = (uchar*)app_malloc((long)(int)ptr[3], "get session buffer");
      ptr[2] = (long)puVar2;
      if (*ptr == 0) {
         BIO_printf(_bio_err, "Out of memory adding to external cache\n");
         CRYPTO_free((void*)*ptr);
         CRYPTO_free((void*)ptr[2]);
         CRYPTO_free(ptr);
      } else {
         local_38 = puVar2;
         iVar1 = i2d_SSL_SESSION(param_2, &local_38);
         bio = _bio_err;
         if (iVar1 == (int)ptr[3]) {
            ptr[4] = (long)first;
            first = ptr;
            BIO_printf(bio, "New session added to external cache\n");
         } else {
            BIO_printf(_bio_err, "Unexpected session encoding length\n");
            CRYPTO_free((void*)*ptr);
            CRYPTO_free((void*)ptr[2]);
            CRYPTO_free(ptr);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int cert_status_cb(SSL *param_1, undefined4 *param_2) {
   int iVar1;
   BIO *in;
   OCSP_RESPONSE *a;
   X509 *a_00;
   X509_NAME *a_01;
   stack_st_OPENSSL_STRING *sk;
   undefined8 uVar2;
   long lVar3;
   X509_NAME *b;
   X509_STORE *store;
   X509 *pXVar4;
   OCSP_REQUEST *req;
   OCSP_ONEREQ *pOVar5;
   X509_EXTENSION *ex;
   OCSP_CERTID *a_02;
   int iVar6;
   long in_FS_OFFSET;
   X509_STORE_CTX *local_a8;
   OCSP_CERTID *local_98;
   undefined8 local_90;
   undefined8 local_88;
   SSL_CTX *local_80;
   undefined4 local_74;
   uchar *local_70;
   void *local_68;
   void *local_60;
   void *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (uchar*)0x0;
   if (param_2[0xf] == 0) {
      a_02 = *(OCSP_CERTID**)( param_2 + 2 );
      if (a_02 == (OCSP_CERTID*)0x0) goto LAB_001039d8;
      LAB_001038ec:in = (BIO*)bio_open_default(a_02, 0x72, 4);
      if (in == (BIO*)0x0) {
         a = (OCSP_RESPONSE*)0x0;
         iVar6 = 2;
         BIO_puts(_bio_err, "cert_status: Cannot open OCSP response file\n");
         goto LAB_001039a6;
      }
      a = (OCSP_RESPONSE*)ASN1_d2i_bio((xnew*)&OCSP_RESPONSE_new, &d2i_OCSP_RESPONSE, in, (void**)0x0);
      BIO_free(in);
      if (a == (OCSP_RESPONSE*)0x0) {
         BIO_puts(_bio_err, "cert_status: Error reading OCSP response\n");
         goto LAB_00103df3;
      }
      iVar1 = i2d_OCSP_RESPONSE(a, &local_70);
      if (iVar1 < 1) {
         iVar6 = 2;
         goto LAB_001039a6;
      }
      LAB_00103947:SSL_ctrl(param_1, 0x47, (long)iVar1, local_70);
      iVar6 = param_2[0xf];
      if (iVar6 != 0) {
         iVar6 = 0;
         BIO_puts(_bio_err, "cert_status: ocsp response sent:\n");
         OCSP_RESPONSE_print(_bio_err, a, 2);
      }
   } else {
      BIO_puts(_bio_err, "cert_status: callback called\n");
      a_02 = *(OCSP_CERTID**)( param_2 + 2 );
      if (a_02 != (OCSP_CERTID*)0x0) goto LAB_001038ec;
      LAB_001039d8:local_68 = (void*)0x0;
      local_60 = (void*)0x0;
      local_58 = (void*)0x0;
      local_50 = 0;
      a_00 = SSL_get_certificate(param_1);
      a_01 = X509_get_issuer_name(a_00);
      sk = X509_get1_ocsp(a_00);
      if (sk == (stack_st_OPENSSL_STRING*)0x0) {
         if (*(void**)( param_2 + 4 ) == (void*)0x0) {
            iVar6 = 3;
            BIO_puts(_bio_err, "cert_status: no AIA and no default responder URL\n");
            OCSP_CERTID_free((OCSP_CERTID*)0x0);
            OCSP_REQUEST_free((OCSP_REQUEST*)0x0);
            X509_STORE_CTX_free((X509_STORE_CTX*)0x0);
            a = (OCSP_RESPONSE*)0x0;
         } else {
            local_58 = *(void**)( param_2 + 6 );
            local_60 = *(void**)( param_2 + 8 );
            local_74 = param_2[0xe];
            local_90 = *(undefined8*)( param_2 + 10 );
            local_88 = *(undefined8*)( param_2 + 0xc );
            local_68 = *(void**)( param_2 + 4 );
            local_80 = SSL_get_SSL_CTX(param_1);
            lVar3 = SSL_CTX_ctrl(local_80, 0x73, 0, &local_50);
            if (lVar3 != 0) goto LAB_00103ab4;
            OCSP_CERTID_free((OCSP_CERTID*)0x0);
            OCSP_REQUEST_free((OCSP_REQUEST*)0x0);
            X509_STORE_CTX_free((X509_STORE_CTX*)0x0);
            LAB_00103df3:a = (OCSP_RESPONSE*)0x0;
            iVar6 = 2;
         }
      } else {
         uVar2 = OPENSSL_sk_value(sk, 0);
         iVar6 = OSSL_HTTP_parse_url(uVar2, &local_74, 0, &local_68, &local_60, 0, &local_58, 0, 0);
         if (iVar6 == 0) {
            BIO_puts(_bio_err, "cert_status: can\'t parse AIA URL\n");
            LAB_00103e20:local_a8 = (X509_STORE_CTX*)0x0;
            a = (OCSP_RESPONSE*)0x0;
            req = (OCSP_REQUEST*)0x0;
            iVar6 = 2;
            LAB_00103d02:CRYPTO_free(local_68);
            CRYPTO_free(local_58);
            CRYPTO_free(local_60);
            X509_email_free(sk);
         } else {
            if (param_2[0xf] != 0) {
               uVar2 = OPENSSL_sk_value(sk, 0);
               BIO_printf(_bio_err, "cert_status: AIA URL: %s\n", uVar2);
            }
            local_90 = *(undefined8*)( param_2 + 10 );
            local_88 = *(undefined8*)( param_2 + 0xc );
            local_80 = SSL_get_SSL_CTX(param_1);
            lVar3 = SSL_CTX_ctrl(local_80, 0x73, 0, &local_50);
            if (lVar3 == 0) goto LAB_00103e20;
            LAB_00103ab4:for (iVar6 = 0; iVar1 = OPENSSL_sk_num(local_50),iVar6 < iVar1; iVar6 = iVar6 + 1) {
               pXVar4 = (X509*)OPENSSL_sk_value(local_50, iVar6);
               b = X509_get_subject_name(pXVar4);
               iVar1 = X509_NAME_cmp(a_01, b);
               if (iVar1 == 0) {
                  local_98 = OCSP_cert_to_id((EVP_MD*)0x0, a_00, pXVar4);
                  if (local_98 != (OCSP_CERTID*)0x0) {
                     local_a8 = (X509_STORE_CTX*)0x0;
                     goto LAB_00103c3e;
                  }
                  break;
               }
            }
            local_a8 = X509_STORE_CTX_new();
            if (local_a8 == (X509_STORE_CTX*)0x0) {
               LAB_00103b7a:a = (OCSP_RESPONSE*)0x0;
               req = (OCSP_REQUEST*)0x0;
               iVar6 = 2;
               a_02 = (OCSP_CERTID*)0x0;
            } else {
               store = SSL_CTX_get_cert_store(local_80);
               iVar6 = X509_STORE_CTX_init(local_a8, store, (X509*)0x0, (stack_st_X509*)0x0);
               if (iVar6 == 0) {
                  a = (OCSP_RESPONSE*)0x0;
                  req = (OCSP_REQUEST*)0x0;
                  iVar6 = 2;
               } else {
                  lVar3 = X509_STORE_CTX_get_obj_by_subject(local_a8, 1, a_01);
                  if (lVar3 == 0) {
                     a = (OCSP_RESPONSE*)0x0;
                     a_02 = (OCSP_CERTID*)0x0;
                     iVar6 = 3;
                     BIO_puts(_bio_err, "cert_status: Can\'t retrieve issuer certificate.\n");
                     req = (OCSP_REQUEST*)0x0;
                  } else {
                     pXVar4 = (X509*)X509_OBJECT_get0_X509();
                     local_98 = OCSP_cert_to_id((EVP_MD*)0x0, a_00, pXVar4);
                     X509_OBJECT_free(lVar3);
                     if (local_98 == (OCSP_CERTID*)0x0) goto LAB_00103b7a;
                     LAB_00103c3e:req = OCSP_REQUEST_new();
                     if (req == (OCSP_REQUEST*)0x0) {
                        a = (OCSP_RESPONSE*)0x0;
                        iVar6 = 2;
                        a_02 = local_98;
                     } else {
                        pOVar5 = OCSP_request_add0_id(req, local_98);
                        if (pOVar5 == (OCSP_ONEREQ*)0x0) {
                           iVar6 = 2;
                           a = (OCSP_RESPONSE*)0x0;
                           a_02 = local_98;
                        } else {
                           SSL_ctrl(param_1, 0x42, 0, &local_48);
                           for (iVar6 = 0; iVar1 = OPENSSL_sk_num(local_48),iVar6 < iVar1; iVar6 = iVar6 + 1) {
                              ex = (X509_EXTENSION*)OPENSSL_sk_value(local_48, iVar6);
                              iVar1 = OCSP_REQUEST_add_ext(req, ex, -1);
                              if (iVar1 == 0) {
                                 a = (OCSP_RESPONSE*)0x0;
                                 iVar6 = 2;
                                 goto LAB_00103cfa;
                              }
                           }
                           iVar6 = 0;
                           a = (OCSP_RESPONSE*)process_responder(req, local_68, local_60, local_58, local_90, local_88, local_74, 0, *param_2);
                           if (a == (OCSP_RESPONSE*)0x0) {
                              iVar6 = 3;
                              BIO_puts(_bio_err, "cert_status: error querying responder\n");
                              a_02 = (OCSP_CERTID*)0x0;
                           }
                        }
                     }
                  }
               }
            }
            LAB_00103cfa:if (sk != (stack_st_OPENSSL_STRING*)0x0) goto LAB_00103d02;
         }
         OCSP_CERTID_free(a_02);
         OCSP_REQUEST_free(req);
         X509_STORE_CTX_free(local_a8);
         if (iVar6 == 0) {
            iVar1 = i2d_OCSP_RESPONSE(a, &local_70);
            if (iVar1 < 1) goto LAB_00103969;
            goto LAB_00103947;
         }
      }
      LAB_001039a6:ERR_print_errors(_bio_err);
   }
   LAB_00103969:OCSP_RESPONSE_free(a);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 s_server_main(undefined4 param_1, undefined8 param_2) {
   byte bVar1;
   undefined8 *puVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   bool bVar11;
   bool bVar12;
   bool bVar13;
   bool bVar14;
   undefined8 *ptr;
   uint uVar15;
   int iVar16;
   uint uVar17;
   int iVar18;
   int iVar19;
   long lVar20;
   X509_VERIFY_PARAM *vpm;
   undefined8 uVar21;
   undefined8 uVar22;
   byte *pbVar23;
   ushort **ppuVar24;
   byte *pbVar25;
   ulong uVar26;
   X509_CRL *a;
   EVP_PKEY *pkey;
   char *pcVar27;
   undefined8 uVar28;
   size_t sVar29;
   EVP_PKEY *pkey_00;
   EVP_PKEY *pEVar30;
   BIO *bp;
   X509 *a_00;
   BIO_METHOD *type;
   stack_st_X509_NAME *psVar31;
   long lVar32;
   undefined4 uVar33;
   int iVar34;
   char *pcVar35;
   char *pcVar36;
   ulong in_R10;
   int iVar37;
   long in_FS_OFFSET;
   bool bVar38;
   long local_278;
   X509 *local_270;
   long local_268;
   undefined8 local_260;
   EVP_PKEY *local_258;
   EVP_PKEY *local_250;
   X509 *local_248;
   code *local_240;
   uint local_238;
   int local_234;
   int local_230;
   int local_22c;
   int local_21c;
   int local_218;
   int local_214;
   char *local_210;
   char *local_208;
   long local_200;
   char *local_1f8;
   int local_1f0;
   uint local_1ec;
   uint local_1e8;
   uint local_1e4;
   char *local_1e0;
   char *local_1d8;
   undefined4 local_1d0;
   long local_1c8;
   long local_1c0;
   long local_1b8;
   undefined8 local_1b0;
   undefined8 local_1a8;
   int local_1a0;
   long local_198;
   uint local_18c;
   undefined4 local_188;
   undefined4 local_184;
   undefined4 local_180;
   char *local_178;
   int local_170;
   int local_16c;
   undefined8 local_168;
   char *local_160;
   long local_158;
   undefined8 local_150;
   long local_148;
   long local_140;
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_100;
   X509 *local_f8;
   undefined4 local_f0;
   undefined4 local_d8;
   undefined4 local_c8;
   undefined4 local_c4;
   undefined4 local_c0;
   undefined4 local_bc;
   undefined4 local_b8;
   undefined4 local_b4;
   char *local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   void *local_98;
   void *local_90;
   char *local_88;
   char *local_80;
   void *local_78;
   undefined8 local_70;
   void *local_68;
   undefined8 local_60;
   EVP_PKEY *local_58;
   BIO *pBStack_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_240 = (code*)TLS_server_method();
   local_58 = (EVP_PKEY*)0x0;
   pBStack_50 = (BIO*)0x0;
   local_b0 = (char*)0x0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = (void*)0x0;
   local_90 = (void*)0x0;
   local_c8 = 0;
   local_c4 = 0;
   local_c0 = 0;
   local_bc = 0;
   local_b8 = 0;
   local_88 = (char*)0x0;
   local_80 = (char*)0x0;
   local_48 = 1;
   local_78 = (void*)0x0;
   local_70 = 0;
   local_68 = (void*)0x0;
   local_60 = 0;
   local_b4 = 1;
   ctx2 = (SSL_CTX*)0x0;
   ctx = (SSL_CTX*)0x0;
   s_nbio_test = 0;
   s_nbio = 0;
   www = 0;
   bio_s_out = (BIO*)0x0;
   s_debug = 0;
   s_msg = 0;
   s_quiet = 0;
   s_brief = 0;
   async = 0;
   local_argv = param_2;
   local_argc = param_1;
   local_80 = CRYPTO_strdup("4433", "apps/s_server.c", 0x45d);
   lVar20 = SSL_CONF_CTX_new();
   vpm = X509_VERIFY_PARAM_new();
   if (( lVar20 == 0 || vpm == (X509_VERIFY_PARAM*)0x0 ) || ( local_80 == (char*)0x0 )) {
      local_258 = (EVP_PKEY*)0x0;
      a_00 = (X509*)0x0;
      uVar33 = 1;
      pkey = (EVP_PKEY*)0x0;
      local_270 = (X509*)0x0;
      local_248 = (X509*)0x0;
      local_278 = 0;
      local_268 = 0;
      local_250 = (EVP_PKEY*)0x0;
      local_260 = 0;
      goto LAB_00104529;
   }
   SSL_CONF_CTX_set_flags(lVar20, 9);
   uVar21 = opt_init(param_1, param_2, s_server_options);
   local_21c = -1;
   iVar37 = 0;
   iVar34 = 0;
   local_208 = "server2.pem";
   bVar13 = false;
   bVar12 = false;
   local_1f0 = 0;
   bVar8 = false;
   bVar7 = false;
   local_1f8 = (char*)0x0;
   local_170 = -1;
   local_150 = 0;
   local_148 = 0;
   local_1ec = 0;
   local_1e8 = 0;
   local_1e4 = 0;
   bVar10 = false;
   bVar11 = false;
   local_140 = 0;
   local_f8 = (X509*)0x0;
   local_270 = (X509*)0x0;
   local_1e0 = (char*)0x0;
   local_1b8 = 0;
   local_258 = (EVP_PKEY*)0x0;
   local_210 = "server.pem";
   local_214 = 0;
   local_230 = 0;
   local_238 = 0;
   local_160 = (char*)0x0;
   local_158 = 0;
   local_168 = 0;
   local_178 = (char*)0x0;
   local_1c0 = 0;
   local_200 = 0;
   local_16c = 0;
   local_1c8 = 0;
   local_100 = 0;
   local_d8 = 0;
   bVar4 = false;
   local_22c = 1;
   local_234 = 0;
   local_218 = 0;
   local_f0 = 0xffffffff;
   bVar3 = false;
   local_180 = 0;
   local_184 = 0;
   local_188 = 0;
   local_18c = 0;
   bVar9 = false;
   local_198 = 0;
   bVar6 = false;
   bVar5 = false;
   local_1d0 = 0;
   local_1a0 = 0;
   bVar14 = false;
   local_278 = 0;
   local_110 = 0;
   local_118 = 0;
   local_120 = 0;
   local_248 = (X509*)0x0;
   local_250 = (EVP_PKEY*)0x0;
   local_128 = 0;
   local_130 = 0;
   local_138 = 0;
   local_1a8 = 0;
   local_1d8 = (char*)0x0;
   local_1b0 = 0;
   local_268 = 0;
   local_260 = 0;
   uVar15 = local_238;
   iVar16 = local_21c;
   switchD_0010478b_caseD_0:local_21c = iVar16;
   local_238 = uVar15;
   uVar17 = opt_next();
   iVar18 = s_debug;
   if (uVar17 != 0) {
      uVar15 = local_238;
      iVar16 = local_21c;
      if (( ( ( ( uVar17 & 0xfffffffb ) == 0x59 ) || ( uVar17 - 0x5b < 2 ) ) || ( ( uVar17 & 0xfffffffb ) == 0x5a ) ) || ( uVar17 - 0x5f < 2 )) {
         iVar34 = iVar34 + 1;
         if (iVar34 < 2) {
            if (( iVar34 == 1 ) && ( iVar37 != 0 )) goto LAB_00104798;
            goto LAB_00104776;
         }
         BIO_printf(_bio_err, "Cannot supply multiple protocol flags\n");
         goto LAB_001047ad;
      }
      if (uVar17 - 0xbb9 < 5) {
         iVar37 = iVar37 + 1;
         if (( iVar37 != 0 ) && ( iVar34 == 1 )) goto LAB_00104798;
         goto switchD_0010478b_caseD_75;
      }
      if (( iVar34 == 1 ) && ( iVar37 != 0 )) {
         LAB_00104798:BIO_printf(_bio_err, "Cannot supply both a protocol flag and \'-no_<prot>\'\n");
         goto LAB_001047ad;
      }
      if ((int)uVar17 < 0x3ef) {
         if (-2 < (int)uVar17) goto LAB_00104776;
         goto switchD_0010478b_caseD_0;
      }
      if (0x644 < (int)uVar17) {
         if ((int)uVar17 < 0x7ef) {
            if (2000 < (int)uVar17) {
               iVar18 = opt_verify();
               if (iVar18 == 0) goto LAB_001047ad;
               local_1a0 = local_1a0 + 1;
            }
         } else if (uVar17 - 0xbb9 < 0x24) goto switchD_0010478b_caseD_75;
         goto switchD_0010478b_caseD_0;
      }
      if ((int)uVar17 < 0x641) {
         if (uVar17 - 0x5dd < 2) {
            iVar18 = opt_rand();
            goto joined_r0x001048b9;
         }
         goto switchD_0010478b_caseD_0;
      }
      iVar18 = opt_provider();
      goto joined_r0x001048b9;
   }
   iVar34 = opt_check_rest_arg(0);
   if (iVar34 == 0) goto switchD_0010478b_caseD_ffffffff;
   iVar34 = app_RAND_load();
   if (iVar34 == 0) goto LAB_001047ad;
   if (( local_238 == 0x304 ) && ( local_200 != 0 )) {
      BIO_printf(_bio_err, "Cannot supply -nextprotoneg with TLSv1.3\n");
      goto switchD_0010478b_caseD_ffffffff;
   }
   if (www == 0) {
      if (dtlslisten == 0) {
         if (local_22c != 2) goto LAB_001055c0;
      } else if (local_22c != 2) goto LAB_00104873;
      if (bVar3) {
         BIO_printf(_bio_err, "Can\'t use -rev with DTLS\n");
         goto LAB_001047ad;
      }
   } else {
      if (local_22c == 2) {
         BIO_printf(_bio_err, "Can\'t use -HTTP, -www or -WWW with DTLS\n");
         goto LAB_001047ad;
      }
      if (dtlslisten != 0) {
         LAB_00104873:BIO_printf(_bio_err, "Can only use -listen with DTLS\n");
         goto LAB_001047ad;
      }
   }
   LAB_001055c0:bVar38 = local_22c != 1;
   if (( local_1f0 != 0 ) && ( bVar38 )) {
      BIO_printf(_bio_err, "Can only use -tfo with TLS\n");
      goto LAB_001047ad;
   }
   if (( stateless != 0 ) && ( bVar38 )) {
      BIO_printf(_bio_err, "Can only use --stateless with TLS\n");
      goto LAB_001047ad;
   }
   if (( bVar38 ) && ( local_234 == 1 )) {
      BIO_printf(_bio_err, "Can\'t use unix sockets and datagrams together\n");
      goto LAB_001047ad;
   }
   if (( early_data != 0 ) && ( bVar3 )) {
      BIO_printf(_bio_err, "Can\'t use -early_data in combination with -rev\n");
      goto LAB_001047ad;
   }
   iVar34 = app_passwd(local_248, local_250, &local_90, &local_98);
   if (iVar34 == 0) {
      BIO_printf(_bio_err, "Error getting password\n");
      goto LAB_001047ad;
   }
   if (local_258 == (EVP_PKEY*)0x0) {
      local_258 = (EVP_PKEY*)local_210;
   }
   if (local_1e0 == (char*)0x0) {
      local_1e0 = local_208;
   }
   iVar34 = load_excert(&local_b0);
   if (iVar34 == 0) goto LAB_001047ad;
   uVar26 = (ulong)local_18c;
   if (local_18c == 0) {
      local_250 = (EVP_PKEY*)load_key(local_258, local_c4, 0, local_90, local_260);
      if (local_250 == (EVP_PKEY*)0x0) goto LAB_001047ad;
      local_248 = (X509*)load_cert_pass(local_210, local_c8, 1, local_90, "server certificate");
      if (local_248 == (X509*)0x0) {
         a_00 = (X509*)0x0;
         pkey = (EVP_PKEY*)0x0;
         uVar33 = 1;
         local_258 = (EVP_PKEY*)0x0;
         local_270 = (X509*)0x0;
         local_278 = 0;
         goto LAB_00104529;
      }
      if (( local_1b8 != 0 ) && ( iVar34 = iVar34 == 0 )) {
         a_00 = (X509*)0x0;
         local_258 = (EVP_PKEY*)0x0;
         goto LAB_0010652a;
      }
      local_258 = local_58;
      a_00 = (X509*)0x0;
      if (local_58 != (EVP_PKEY*)0x0) {
         local_258 = (EVP_PKEY*)load_key(local_1e0, local_c4, 0, local_90, local_260, "second server certificate private key");
         if (local_258 == (EVP_PKEY*)0x0) {
            a_00 = (X509*)0x0;
            pkey = (EVP_PKEY*)0x0;
            uVar33 = 1;
            local_270 = (X509*)0x0;
            local_278 = 0;
         } else {
            a_00 = (X509*)load_cert_pass(local_208, local_c8, 1, local_90, "second server certificate");
            if (a_00 != (X509*)0x0) goto LAB_001056c2;
            a_00 = (X509*)0x0;
            uVar33 = 1;
            local_270 = (X509*)0x0;
            local_278 = 0;
            pkey = (EVP_PKEY*)0x0;
         }
         goto LAB_00104529;
      }
   } else {
      local_258 = (EVP_PKEY*)0x0;
      a_00 = (X509*)0x0;
      local_248 = (X509*)0x0;
      local_250 = (EVP_PKEY*)0x0;
   }
   LAB_001056c2:if (( local_200 == 0 ) || ( local_78 = (void*)next_protos_parse(&local_70, local_200) ),local_78 != (void*)0x0) {
      local_68 = (void*)0x0;
      if (( local_1c0 != 0 ) && ( local_68 = (void*)next_protos_parse(&local_60, local_1c0) ),local_68 == (void*)0x0) {
         uVar33 = 1;
         local_270 = (X509*)0x0;
         local_278 = 0;
         pkey = (EVP_PKEY*)0x0;
         goto LAB_00104529;
      }
      if (local_278 != 0) {
         a = (X509_CRL*)load_crl(local_278, local_b8, 0, &_LC178);
         if (a == (X509_CRL*)0x0) goto LAB_0010652a;
         local_278 = OPENSSL_sk_new_null();
         if (( local_278 == 0 ) || ( iVar34 = iVar34 == 0 )) {
            pkey = (EVP_PKEY*)0x0;
            BIO_puts(_bio_err, "Error adding CRL\n");
            ERR_print_errors(_bio_err);
            uVar33 = 1;
            X509_CRL_free(a);
            local_270 = (X509*)0x0;
            goto LAB_00104529;
         }
      }
      if (local_270 != (X509*)0x0) {
         if (local_f8 == (X509*)0x0) {
            local_f8 = local_270;
         }
         pkey = (EVP_PKEY*)load_key(local_f8, local_bc, 0, local_98, local_260, "second certificate private key");
         if (pkey == (EVP_PKEY*)0x0) {
            uVar33 = 1;
            local_270 = (X509*)0x0;
         } else {
            local_270 = (X509*)load_cert_pass(local_270, local_c0, 1, local_98, "second server certificate");
            if (local_270 != (X509*)0x0) {
               if (( local_140 == 0 ) || ( iVar34 = load_certs(local_140, 0, &local_a0, 0, "second server certificate chain") ),iVar34 != 0) goto LAB_0010582b;
               goto LAB_001065b6;
            }
            uVar33 = 1;
            ERR_print_errors(_bio_err);
         }
         goto LAB_00104529;
      }
      pkey = (EVP_PKEY*)0x0;
      LAB_0010582b:if (bio_s_out == (BIO*)0x0) {
         if (( s_quiet == 0 ) || ( s_debug != 0 )) {
            bio_s_out = (BIO*)dup_bio_out(0x8001);
         } else {
            type = BIO_s_null();
            bio_s_out = BIO_new(type);
            if (( ( s_msg != 0 ) && ( bio_s_msg == (BIO*)0x0 ) ) && ( bio_s_msg = (BIO*)dup_bio_out(0x8001) ),bio_s_msg == (BIO*)0x0) {
               BIO_printf(_bio_err, "Out of memory\n");
               goto LAB_001065b6;
            }
         }
         uVar33 = 1;
         if (bio_s_out == (BIO*)0x0) goto LAB_00104529;
      }
      pcVar27 = (char*)0x0;
      pcVar36 = pcVar27;
      if (local_18c == 0) {
         pcVar27 = local_210;
         pcVar36 = local_208;
      }
      uVar22 = app_get0_propq();
      uVar28 = app_get0_libctx();
      ctx = (SSL_CTX*)SSL_CTX_new_ex(uVar28, uVar22, local_240);
      if (ctx == (SSL_CTX*)0x0) goto LAB_001065aa;
      SSL_CTX_ctrl(ctx, 0x4e, 4, (void*)0x0);
      if (local_218 != 0) {
         ssl_ctx_security_debug(ctx, local_218);
      }
      iVar34 = config_ctx(lVar20, local_268, ctx);
      if (iVar34 != 0) {
         if (( local_1c8 == 0 ) || ( iVar34 = iVar34 != 0 )) {
            if (( ( local_238 == 0 ) || ( lVar32 = SSL_CTX_ctrl(ctx, 0x7b, (long)(int)local_238, (void*)0x0) ),lVar32 != 0 )) {
               if (session_id_prefix == (char*)0x0) {
                  LAB_00105953:pcVar35 = local_b0;
                  if (local_b0 != (char*)0x0) {
                     ssl_ctx_set_excert(ctx);
                  }
                  if (bVar4) {
                     pcVar35 = &apps_ssl_info_callback;
                     SSL_CTX_set_info_callback(ctx, (cb*)&apps_ssl_info_callback);
                  }
                  if (bVar5) {
                     pcVar35 = (char*)0x2c;
                     SSL_CTX_ctrl(ctx, 0x2c, 0, (void*)0x0);
                  } else if (bVar6) {
                     init_session_cache_ctx();
                  } else {
                     pcVar35 = (char*)0x2a;
                     SSL_CTX_ctrl(ctx, 0x2a, 0x80, (void*)0x0);
                  }
                  if (async != 0) {
                     pcVar35 = (char*)0x21;
                     SSL_CTX_ctrl(ctx, 0x21, 0x100, (void*)0x0);
                  }
                  if (bVar7) {
                     pcVar35 = (char*)0x200;
                     SSL_CTX_set_options(ctx);
                  }
                  if (bVar8) {
                     pcVar35 = (char*)0x80;
                     SSL_CTX_set_options(ctx);
                  }
                  if (local_1e4 != 0) {
                     pcVar35 = (char*)0x34;
                     lVar32 = SSL_CTX_ctrl(ctx, 0x34, (ulong)local_1e4, (void*)0x0);
                     if (lVar32 == 0) {
                        BIO_printf(_bio_err, "%s: Max send fragment size %u is out of permitted range\n", uVar21, (ulong)local_1e4);
                        goto LAB_001065b6;
                     }
                  }
                  if (local_1e8 != 0) {
                     pcVar35 = (char*)0x7d;
                     lVar32 = SSL_CTX_ctrl(ctx, 0x7d, (ulong)local_1e8, (void*)0x0);
                     if (lVar32 == 0) {
                        BIO_printf(_bio_err, "%s: Split send fragment size %u is out of permitted range\n", uVar21, (ulong)local_1e8);
                        goto LAB_001065b6;
                     }
                  }
                  if (local_1ec != 0) {
                     pcVar35 = (char*)0x7e;
                     lVar32 = SSL_CTX_ctrl(ctx, 0x7e, (ulong)local_1ec, (void*)0x0);
                     if (lVar32 == 0) {
                        BIO_printf(_bio_err, "%s: Max pipelines %u is out of permitted range\n", uVar21, (ulong)local_1ec);
                        goto LAB_001065b6;
                     }
                  }
                  if (0 < local_16c) {
                     pcVar35 = (char*)(long)local_16c;
                     SSL_CTX_set_default_read_buffer_len();
                  }
                  if (( local_160 != (char*)0x0 ) && ( iVar34 = SSL_CTX_set_tlsext_use_srtp(ctx, local_160) ),pcVar35 = local_160,iVar34 != 0) {
                     BIO_printf(_bio_err, "Error setting SRTP profile\n");
                     ERR_print_errors(_bio_err);
                     goto LAB_001065b6;
                  }
                  uVar21 = local_1b0;
                  iVar34 = ctx_set_verify_locations(ctx, local_1d8, local_184, local_1b0, local_188, local_1a8, local_180, pcVar35);
                  if (iVar34 == 0) {
                     LAB_001065aa:ERR_print_errors(_bio_err);
                  } else {
                     if (( local_1a0 != 0 ) && ( iVar34 = iVar34 == 0 )) {
                        LAB_00106e49:BIO_printf(_bio_err, "Error setting verify params\n");
                        ERR_print_errors(_bio_err);
                        goto LAB_001065b6;
                     }
                     ssl_ctx_add_crls(ctx, local_278, 0);
                     iVar34 = ssl_load_stores(ctx, local_120, local_118, local_110, local_138, local_130, local_128, local_278, local_d8, uVar21);
                     if (iVar34 == 0) {
                        BIO_printf(_bio_err, "Error loading store locations\n");
                        ERR_print_errors(_bio_err);
                        goto LAB_001065b6;
                     }
                     if (a_00 == (X509*)0x0) {
                        if (ctx2 != (SSL_CTX*)0x0) goto LAB_00105b37;
                     } else {
                        uVar21 = app_get0_propq();
                        uVar22 = app_get0_libctx();
                        ctx2 = (SSL_CTX*)SSL_CTX_new_ex(uVar22, uVar21, local_240);
                        if (ctx2 == (SSL_CTX*)0x0) goto LAB_001065aa;
                        LAB_00105b37:BIO_printf(bio_s_out, "Setting secondary ctx parameters\n");
                        if (local_218 != 0) {
                           ssl_ctx_security_debug(ctx2, local_218);
                        }
                        if (session_id_prefix != (char*)0x0) {
                           sVar29 = strlen(session_id_prefix);
                           if (0x1f < sVar29) {
                              BIO_printf(_bio_err, "warning: id_prefix is too long, only one new session will be possible\n");
                           }
                           iVar34 = SSL_CTX_set_generate_session_id(ctx2, generate_session_id);
                           if (iVar34 == 0) goto LAB_00106734;
                           BIO_printf(_bio_err, "id_prefix \'%s\' set.\n", session_id_prefix);
                        }
                        if (local_b0 != (char*)0x0) {
                           ssl_ctx_set_excert(ctx2);
                        }
                        if (bVar4) {
                           SSL_CTX_set_info_callback(ctx2, (cb*)&apps_ssl_info_callback);
                        }
                        if (bVar5) {
                           SSL_CTX_ctrl(ctx2, 0x2c, 0, (void*)0x0);
                        } else if (bVar6) {
                           init_session_cache_ctx();
                        } else {
                           SSL_CTX_ctrl(ctx2, 0x2a, 0x80, (void*)0x0);
                        }
                        if (async != 0) {
                           SSL_CTX_ctrl(ctx2, 0x21, 0x100, (void*)0x0);
                        }
                        iVar34 = ctx_set_verify_locations(ctx2, local_1d8, local_184, local_1b0, local_188, local_1a8, local_180, uVar26);
                        if (iVar34 == 0) goto LAB_001065aa;
                        if (( local_1a0 != 0 ) && ( iVar34 = iVar34 == 0 )) goto LAB_00106e49;
                        ssl_ctx_add_crls(ctx2, local_278, 0);
                        iVar34 = config_ctx(lVar20, local_268, ctx2);
                        if (iVar34 == 0) goto LAB_001065b6;
                     }
                     if (local_78 != (void*)0x0) {
                        SSL_CTX_set_next_protos_advertised_cb(ctx, next_proto_cb, &local_78);
                     }
                     if (local_68 != (void*)0x0) {
                        SSL_CTX_set_alpn_select_cb(ctx, alpn_cb, &local_68);
                     }
                     if (!bVar9) {
                        if (local_198 != 0) {
                           pkey_00 = (EVP_PKEY*)load_keyparams(local_198, 0, 0, &_LC195, "DH parameters");
                           LAB_00105d20:if (pkey_00 == (EVP_PKEY*)0x0) goto LAB_00106b08;
                           BIO_printf(bio_s_out, "Setting temp DH parameters\n");
                           BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
                           iVar34 = EVP_PKEY_up_ref(pkey_00);
                           if (iVar34 != 0) {
                              iVar34 = SSL_CTX_set0_tmp_dh_pkey(ctx, pkey_00);
                              if (iVar34 == 0) {
                                 BIO_puts(_bio_err, "Error setting temp DH parameters\n");
                                 ERR_print_errors(_bio_err);
                                 for (int i_400 = 0; i_400 < 2; i_400++) {
                                    EVP_PKEY_free(pkey_00);
                                 }
                                 goto LAB_001065b6;
                              }
                              goto LAB_00105d7a;
                           }
                           LAB_00106a9c:EVP_PKEY_free(pkey_00);
                           goto LAB_001065b6;
                        }
                        if (pcVar27 != (char*)0x0) {
                           pkey_00 = (EVP_PKEY*)load_keyparams_suppress(pcVar27, 0, 0, &_LC195, "DH parameters", 1);
                           goto LAB_00105d20;
                        }
                        LAB_00106b08:pkey_00 = (EVP_PKEY*)0x0;
                        BIO_printf(bio_s_out, "Using default temp DH parameters\n");
                        BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
                        SSL_CTX_ctrl(ctx, 0x76, 1, (void*)0x0);
                        LAB_00105d7a:if (ctx2 != (SSL_CTX*)0x0) {
                           if (( local_198 == 0 ) || ( pEVar30 = (EVP_PKEY*)load_keyparams_suppress(pcVar36, 0, 0, &_LC195, "DH parameters", 1) ),pEVar30 == (EVP_PKEY*)0x0) {
                              if (pkey_00 != (EVP_PKEY*)0x0) goto LAB_00105e05;
                              SSL_CTX_ctrl(ctx2, 0x76, 1, (void*)0x0);
                           } else {
                              BIO_printf(bio_s_out, "Setting temp DH parameters\n");
                              BIO_ctrl(bio_s_out, 0xb, 0, (void*)0x0);
                              EVP_PKEY_free(pkey_00);
                              pkey_00 = pEVar30;
                              LAB_00105e05:iVar34 = SSL_CTX_set0_tmp_dh_pkey(ctx2, pkey_00);
                              if (iVar34 == 0) {
                                 BIO_puts(_bio_err, "Error setting temp DH parameters\n");
                                 ERR_print_errors(_bio_err);
                                 goto LAB_00106a9c;
                              }
                           }
                           pkey_00 = (EVP_PKEY*)0x0;
                        }
                        EVP_PKEY_free(pkey_00);
                     }
                     iVar34 = set_cert_key_stuff(ctx, local_248, local_250, local_a8, local_1d0);
                     if (iVar34 != 0) {
                        if (( local_148 != 0 ) && ( iVar34 = iVar34 == 0 )) goto LAB_001065aa;
                        if (( ( ctx2 == (SSL_CTX*)0x0 ) || ( iVar34 = set_cert_key_stuff(ctx2, a_00, local_258, 0, local_1d0) ),iVar34 != 0 )) &&( ( local_270 == (X509*)0x0 || ( iVar34 = set_cert_key_stuff(ctx, local_270, pkey, local_a0, local_1d0) ),iVar34 != 0 ) )(( bVar10 ) && ( SSL_CTX_set_not_resumable_session_callback(ctx, not_resumable_sess_cb),ctx2 != (SSL_CTX*)0x0 ));
                        {
                           SSL_CTX_set_not_resumable_session_callback(ctx2, not_resumable_sess_cb);
                        }
                        if (psk_key != (byte*)0x0) {
                           if (s_debug != 0) {
                              BIO_printf(bio_s_out, "PSK key given, setting server callback\n");
                           }
                           SSL_CTX_set_psk_server_callback(ctx, psk_server_cb);
                        }
                        if (local_178 != (char*)0x0) {
                           if (local_238 == 0x304) {
                              BIO_printf(bio_s_out, "PSK warning: there is NO identity hint in TLSv1.3\n");
                           } else {
                              iVar34 = SSL_CTX_use_psk_identity_hint(ctx, local_178);
                              if (iVar34 == 0) {
                                 BIO_printf(_bio_err, "error setting PSK identity hint to context\n");
                                 ERR_print_errors(_bio_err);
                                 goto LAB_001065b6;
                              }
                           }
                        }
                        if (local_1f8 == (char*)0x0) {
                           if (( psk_key != (byte*)0x0 ) || ( psksess != (SSL_SESSION*)0x0 )) {
                              LAB_00105f91:SSL_CTX_set_psk_find_session_callback(ctx, psk_find_session_cb);
                           }
                           SSL_CTX_set_verify(ctx, local_214, (callback*)&verify_callback);
                           iVar34 = SSL_CTX_set_session_id_context(ctx, (uchar*)&local_b4, 4);
                           if (iVar34 == 0) {
                              LAB_00106597:BIO_printf(_bio_err, "error setting session id context\n");
                              goto LAB_001065aa;
                           }
                           SSL_CTX_set_cookie_generate_cb(ctx, (app_gen_cookie_cb*)&generate_cookie_callback);
                           SSL_CTX_set_cookie_verify_cb(ctx, (app_verify_cookie_cb*)&verify_cookie_callback);
                           SSL_CTX_set_stateless_cookie_generate_cb(ctx, &generate_stateless_cookie_callback);
                           SSL_CTX_set_stateless_cookie_verify_cb(ctx, &verify_stateless_cookie_callback);
                           if (ctx2 != (SSL_CTX*)0x0) {
                              SSL_CTX_set_verify(ctx2, local_214, (callback*)&verify_callback);
                              iVar34 = SSL_CTX_set_session_id_context(ctx2, (uchar*)&local_b4, 4);
                              if (iVar34 == 0) goto LAB_00106597;
                              pBStack_50 = bio_s_out;
                              SSL_CTX_callback_ctrl(ctx2, 0x35, ssl_servername_cb);
                              SSL_CTX_ctrl(ctx2, 0x36, 0, &local_58);
                              SSL_CTX_callback_ctrl(ctx, 0x35, ssl_servername_cb);
                              SSL_CTX_ctrl(ctx, 0x36, 0, &local_58);
                           }
                           if (local_158 == 0) {
                              if (local_1d8 != (char*)0x0) {
                                 psVar31 = SSL_load_client_CA_file(local_1d8);
                                 SSL_CTX_set_client_CA_list(ctx, psVar31);
                                 if (ctx2 != (SSL_CTX*)0x0) {
                                    psVar31 = SSL_load_client_CA_file(local_1d8);
                                    SSL_CTX_set_client_CA_list(ctx2, psVar31);
                                 }
                              }
                           } else {
                              iVar34 = set_up_srp_verifier_file(ctx, &srp_callback_parm, local_168, local_158);
                              if (iVar34 == 0) goto LAB_001065b6;
                           }
                           if (bVar11) {
                              SSL_CTX_callback_ctrl(ctx, 0x3f, cert_status_cb);
                              SSL_CTX_ctrl(ctx, 0x40, 0, tlscstatp);
                              if (ctx2 != (SSL_CTX*)0x0) {
                                 SSL_CTX_callback_ctrl(ctx2, 0x3f, cert_status_cb);
                                 SSL_CTX_ctrl(ctx2, 0x40, 0, tlscstatp);
                              }
                           }
                           iVar34 = set_keylog_file(ctx, local_150);
                           if (iVar34 == 0) {
                              if (-1 < local_21c) {
                                 SSL_CTX_set_max_early_data(ctx, local_21c);
                              }
                              if (-1 < local_170) {
                                 SSL_CTX_set_recv_max_early_data(ctx, local_170);
                              }
                              if (bVar12) {
                                 BIO_printf(bio_s_out, "Compressing certificates\n");
                                 iVar34 = SSL_CTX_compress_certs(ctx, 0);
                                 if (iVar34 == 0) {
                                    BIO_printf(bio_s_out, "Error compressing certs on ctx\n");
                                 }
                                 if (( ctx2 != (SSL_CTX*)0x0 ) && ( iVar34 = iVar34 == 0 )) {
                                    BIO_printf(bio_s_out, "Error compressing certs on ctx2\n");
                                 }
                              }
                              if (( ( !bVar13 ) || ( iVar34 = SSL_CTX_set1_server_cert_type(ctx, &cert_type_rpk, 2) ),iVar34 != 0 )) {
                                 local_240 = rev_body;
                                 if (( !bVar3 ) && ( local_240 = www == 0 )) {
                                    local_240 = sv_body;
                                 }
                                 if (( bVar14 ) && ( local_234 == 1 )) {
                                    unlink(local_88);
                                 }
                                 if (local_1f0 != 0) {
                                    BIO_printf(bio_s_out, "Listening for TFO\n");
                                 }
                                 do_server(&accept_socket, local_88, local_80, local_234, local_22c, 0, local_240, local_100, local_f0, bio_s_out, local_1f0, in_R10);
                                 print_stats(bio_s_out, ctx);
                                 uVar33 = 0;
                                 goto LAB_00104529;
                              }
                              BIO_printf(bio_s_out, "Error setting server certificate types\n");
                           }
                        } else {
                           bp = BIO_new_file(local_1f8, "r");
                           if (bp == (BIO*)0x0) {
                              pcVar36 = "Can\'t open PSK session file %s\n";
                           } else {
                              psksess = PEM_read_bio_SSL_SESSION(bp, (SSL_SESSION**)0x0, (undefined1*)0x0, (void*)0x0);
                              BIO_free(bp);
                              if (psksess != (SSL_SESSION*)0x0) goto LAB_00105f91;
                              pcVar36 = "Can\'t read PSK session file %s\n";
                           }
                           BIO_printf(_bio_err, pcVar36, local_1f8);
                           ERR_print_errors(_bio_err);
                        }
                     }
                  }
               }
            } else {
               sVar29 = strlen(session_id_prefix);
               if (0x1f < sVar29) {
                  BIO_printf(_bio_err, "warning: id_prefix is too long, only one new session will be possible\n");
               }
               iVar34 = SSL_CTX_set_generate_session_id(ctx, generate_session_id);
               if (iVar34 != 0) {
                  BIO_printf(_bio_err, "id_prefix \'%s\' set.\n", session_id_prefix);
                  goto LAB_00105953;
               }
               LAB_00106734:BIO_printf(_bio_err, "error setting \'id_prefix\'\n");
               ERR_print_errors(_bio_err);
            }
         }
      } else {
         BIO_printf(_bio_err, "Error using configuration \"%s\"\n", local_1c8);
         ERR_print_errors(_bio_err);
      }
   }
   LAB_001065b6:uVar33 = 1;
   goto LAB_00104529;
}LAB_0010652a:uVar33 = 1;pkey = (EVP_PKEY*)0x0;local_270 = (X509*)0x0;local_278 = 0;goto LAB_00104529;LAB_00104776:switch (uVar17) {
   default:
    goto switchD_0010478b_caseD_0;
   case 1:
    uVar33 = 0;
    opt_help(s_server_options);
    goto LAB_001047be;
   case 2:
    uVar22 = opt_arg();
    local_260 = setup_engine_methods(uVar22,0xffffffff,iVar18);
    goto switchD_0010478b_caseD_0;
   case 3:
    if (local_234 == 1) {
      CRYPTO_free(local_88);
      local_88 = (char *)0x0;
      CRYPTO_free(local_80);
      local_234 = 2;
      local_80 = (char *)0x0;
    }
    else {
      local_234 = 2;
    }
    goto switchD_0010478b_caseD_0;
   case 4:
    if (local_234 == 1) {
      CRYPTO_free(local_88);
      local_88 = (char *)0x0;
      CRYPTO_free(local_80);
      local_234 = 10;
      local_80 = (char *)0x0;
    }
    else {
      local_234 = 10;
    }
    goto switchD_0010478b_caseD_0;
   case 5:
    iVar18 = 0;
    if (local_234 != 1) {
      iVar18 = local_234;
    }
    CRYPTO_free(local_80);
    local_80 = (char *)0x0;
    CRYPTO_free(local_88);
    local_88 = (char *)0x0;
    uVar22 = opt_arg();
    iVar19 = BIO_parse_hostserv(uVar22,&local_88,&local_80,1);
    local_234 = iVar18;
    if (iVar19 < 1) {
      BIO_printf(_bio_err,"%s: -accept argument malformed or ambiguous\n",local_80);
      goto LAB_001047ad;
    }
    goto switchD_0010478b_caseD_0;
   case 6:
    iVar18 = 0;
    if (local_234 != 1) {
      iVar18 = local_234;
    }
    CRYPTO_free(local_80);
    local_80 = (char *)0x0;
    CRYPTO_free(local_88);
    local_88 = (char *)0x0;
    uVar22 = opt_arg();
    iVar19 = BIO_parse_hostserv(uVar22,0,&local_80,1);
    local_234 = iVar18;
    if (iVar19 < 1) {
      BIO_printf(_bio_err,"%s: -port argument malformed or ambiguous\n",local_80);
      goto LAB_001047ad;
    }
    goto switchD_0010478b_caseD_0;
   case 7:
    CRYPTO_free(local_88);
    pcVar36 = (char *)opt_arg();
    local_88 = CRYPTO_strdup(pcVar36,"apps/s_server.c",0x4b7);
    if (local_88 == (char *)0x0) goto LAB_001047ad;
    CRYPTO_free(local_80);
    local_234 = 1;
    local_80 = (char *)0x0;
    goto switchD_0010478b_caseD_0;
   case 8:
    bVar14 = true;
    goto switchD_0010478b_caseD_0;
   case 9:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    local_f0 = (undefined4)lVar32;
    goto switchD_0010478b_caseD_0;
   case 10:
    pcVar36 = (char *)opt_arg();
    uVar26 = strtol(pcVar36,(char **)0x0,10);
    in_R10 = (ulong)s_quiet;
    local_214 = 5;
    _verify_args = (undefined4)uVar26;
    if (s_quiet == 0) {
      BIO_printf(_bio_err,"verify depth is %d\n",uVar26 & 0xffffffff);
    }
    goto switchD_0010478b_caseD_0;
   case 0xb:
    uVar22 = opt_arg();
    iVar18 = set_nameopt(uVar22);
    goto joined_r0x001048b9;
   case 0xc:
    pcVar36 = (char *)opt_arg();
    uVar26 = strtol(pcVar36,(char **)0x0,10);
    local_214 = 7;
    _verify_args = (undefined4)uVar26;
    if (s_quiet == 0) {
      BIO_printf(_bio_err,"verify depth is %d, must return a certificate\n",uVar26 & 0xffffffff);
    }
    goto switchD_0010478b_caseD_0;
   case 0xd:
    local_100 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0xe:
    local_210 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0xf:
    local_278 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x10:
    local_d8 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x11:
    local_148 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x12:
    uVar22 = opt_arg();
    iVar18 = opt_format(uVar22,0xffe,&local_c8);
    break;
   case 0x13:
    local_258 = (EVP_PKEY *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x14:
    uVar22 = opt_arg();
    iVar18 = opt_format(uVar22,0xffe,&local_c4);
    break;
   case 0x15:
    local_248 = (X509 *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x16:
    local_1b8 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x17:
    local_198 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x18:
    uVar22 = opt_arg();
    iVar18 = opt_format(uVar22,0xffe,&local_c0);
    break;
   case 0x19:
    local_270 = (X509 *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x1a:
    uVar22 = opt_arg();
    iVar18 = opt_format(uVar22,0xffe,&local_bc);
    break;
   case 0x1b:
    local_250 = (EVP_PKEY *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x1c:
    local_f8 = (X509 *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x1d:
    local_140 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x1e:
    local_18c = 1;
    goto switchD_0010478b_caseD_0;
   case 0x1f:
    local_1b0 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x20:
    local_188 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x21:
    local_138 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x22:
    local_120 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x23:
    bVar5 = true;
    goto switchD_0010478b_caseD_0;
   case 0x24:
    bVar6 = true;
    goto switchD_0010478b_caseD_0;
   case 0x25:
    uVar22 = opt_arg();
    iVar18 = opt_format(uVar22,6,&local_b8);
    break;
   case 0x26:
    _DAT_0010e654 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x27:
    _DAT_0010e64c = 1;
    goto switchD_0010478b_caseD_0;
   case 0x28:
    local_1d0 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x29:
    local_1d8 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x2a:
    local_184 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x2b:
    local_130 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x2c:
    local_118 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x2d:
    local_1a8 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x2e:
    local_180 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x2f:
    local_128 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x30:
    local_110 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x31:
    s_nbio = 1;
    goto switchD_0010478b_caseD_0;
   case 0x32:
    s_nbio_test = 1;
    s_nbio = 1;
    goto switchD_0010478b_caseD_0;
   case 0x33:
    s_ign_eof = 1;
    goto switchD_0010478b_caseD_0;
   case 0x34:
    s_ign_eof = 0;
    goto switchD_0010478b_caseD_0;
   case 0x35:
    s_debug = 1;
    goto switchD_0010478b_caseD_0;
   case 0x36:
    s_tlsextdebug = 1;
    goto switchD_0010478b_caseD_0;
   case 0x38:
    tlscstatp._60_4_ = 1;
    bVar11 = true;
    goto switchD_0010478b_caseD_0;
   case 0x39:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    tlscstatp._0_4_ = (undefined4)lVar32;
   case 0x37:
    bVar11 = true;
    goto switchD_0010478b_caseD_0;
   case 0x3a:
    tlscstatp._40_8_ = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x3b:
    tlscstatp._48_8_ = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x3c:
    uVar22 = opt_arg();
    iVar18 = OSSL_HTTP_parse_url(uVar22,0x106eb8,0,0x106e90,0x106ea0,0,0x106e98,0,0);
    if (iVar18 == 0) {
      BIO_printf(_bio_err,"Error parsing -status_url argument\n");
      goto LAB_001047ad;
    }
    bVar11 = true;
    goto switchD_0010478b_caseD_0;
   case 0x3d:
    tlscstatp._8_8_ = opt_arg();
    bVar11 = true;
    goto switchD_0010478b_caseD_0;
   case 0x3e:
    s_msg = 1;
    goto switchD_0010478b_caseD_0;
   case 0x3f:
    pcVar36 = (char *)opt_arg();
    bio_s_msg = BIO_new_file(pcVar36,"w");
    if (bio_s_msg == (BIO *)0x0) {
      uVar21 = opt_arg();
      BIO_printf(_bio_err,"Error writing file %s\n",uVar21);
      goto LAB_001047ad;
    }
    goto switchD_0010478b_caseD_0;
   case 0x40:
    s_msg = 2;
    goto switchD_0010478b_caseD_0;
   case 0x41:
    local_218 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x42:
    local_218 = 2;
    goto switchD_0010478b_caseD_0;
   case 0x43:
    bVar4 = true;
    goto switchD_0010478b_caseD_0;
   case 0x44:
    s_crlf = 1;
    goto switchD_0010478b_caseD_0;
   case 0x45:
    s_quiet = 1;
    goto switchD_0010478b_caseD_0;
   case 0x46:
    _DAT_0010e64c = 1;
    s_brief = 1;
    s_quiet = 1;
    goto switchD_0010478b_caseD_0;
   case 0x47:
    bVar9 = true;
    goto switchD_0010478b_caseD_0;
   case 0x48:
    bVar10 = true;
    goto switchD_0010478b_caseD_0;
   case 0x49:
    psk_identity = (undefined *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x4a:
    local_178 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x4b:
    pbVar23 = (byte *)opt_arg();
    bVar1 = *pbVar23;
    psk_key = pbVar23;
    if (bVar1 != 0) {
      ppuVar24 = __ctype_b_loc();
      pbVar25 = pbVar23;
      do {
        if ((*(byte *)((long)*ppuVar24 + (ulong)bVar1 * 2 + 1) & 0x10) == 0) {
          BIO_printf(_bio_err,"Not a hex number \'%s\'\n",pbVar23);
          goto LAB_001047ad;
        }
        bVar1 = pbVar25[1];
        pbVar25 = pbVar25 + 1;
      } while (bVar1 != 0);
    }
    goto switchD_0010478b_caseD_0;
   case 0x4c:
    local_1f8 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x4d:
    local_158 = opt_arg();
    uVar15 = 0x301;
    if (0x300 < local_238) {
      uVar15 = local_238;
    }
    goto switchD_0010478b_caseD_0;
   case 0x4e:
    local_168 = opt_arg();
    uVar15 = 0x301;
    if (0x300 < local_238) {
      uVar15 = local_238;
    }
    goto switchD_0010478b_caseD_0;
   case 0x4f:
    bVar3 = true;
    goto switchD_0010478b_caseD_0;
   case 0x50:
    www = 1;
    goto switchD_0010478b_caseD_0;
   case 0x51:
    www = 2;
    goto switchD_0010478b_caseD_0;
   case 0x52:
    www = 3;
    goto switchD_0010478b_caseD_0;
   case 0x53:
    async = 1;
    goto switchD_0010478b_caseD_0;
   case 0x54:
    local_1c8 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x55:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    local_1e4 = (uint)lVar32;
    goto switchD_0010478b_caseD_0;
   case 0x56:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    local_1e8 = (uint)lVar32;
    goto switchD_0010478b_caseD_0;
   case 0x57:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    local_1ec = (uint)lVar32;
    goto switchD_0010478b_caseD_0;
   case 0x58:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    local_16c = (int)lVar32;
    goto switchD_0010478b_caseD_0;
   case 0x59:
    local_230 = 0x300;
    local_238 = 0x300;
    uVar15 = local_238;
    goto switchD_0010478b_caseD_0;
   for (int i_402 = 0; i_402 < 4; i_402++) {
      case 0x5a:
    local_230 = 0x304;
    local_238 = 0x304;
    uVar15 = local_238;
    goto switchD_0010478b_caseD_0;
   }
   case 0x5e:
    local_240 = (code *)DTLS_server_method();
    local_22c = 2;
    goto switchD_0010478b_caseD_0;
   case 0x5f:
    local_240 = (code *)DTLS_server_method();
    local_230 = 0xfeff;
    local_238 = 0xfeff;
    local_22c = 2;
    uVar15 = local_238;
    goto switchD_0010478b_caseD_0;
   case 0x60:
    local_240 = (code *)DTLS_server_method();
    local_230 = 0xfefd;
    local_238 = 0xfefd;
    local_22c = 2;
    uVar15 = local_238;
    goto switchD_0010478b_caseD_0;
   case 0x62:
    enable_timeouts = 1;
    goto switchD_0010478b_caseD_0;
   case 99:
    pcVar36 = (char *)opt_arg();
    socket_mtu = strtol(pcVar36,(char **)0x0,10);
    goto switchD_0010478b_caseD_0;
   case 100:
    dtlslisten = 1;
    goto switchD_0010478b_caseD_0;
   case 0x65:
    stateless = 1;
    goto switchD_0010478b_caseD_0;
   case 0x66:
    session_id_prefix = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x67:
    local_58 = (EVP_PKEY *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x68:
    local_48 = 2;
    goto switchD_0010478b_caseD_0;
   case 0x69:
    local_208 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x6a:
    local_1e0 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x6b:
    local_200 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x6c:
    local_1c0 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x6e:
    local_160 = (char *)opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x6f:
    keymatexportlabel = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x70:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    keymatexportlen = (undefined4)lVar32;
    goto switchD_0010478b_caseD_0;
   case 0x71:
    local_150 = opt_arg();
    goto switchD_0010478b_caseD_0;
   case 0x72:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    iVar16 = (int)lVar32;
    if ((int)lVar32 < 0) {
      BIO_printf(_bio_err,"Invalid value for max_early_data\n");
      goto LAB_001047ad;
    }
    goto switchD_0010478b_caseD_0;
   case 0x73:
    pcVar36 = (char *)opt_arg();
    lVar32 = strtol(pcVar36,(char **)0x0,10);
    local_170 = (int)lVar32;
    if (local_170 < 0) {
      BIO_printf(_bio_err,"Invalid value for recv_max_early_data\n");
      goto LAB_001047ad;
    }
    goto switchD_0010478b_caseD_0;
   case 0x74:
    early_data = 1;
    iVar16 = 0x4000;
    if (local_21c != -1) {
      iVar16 = local_21c;
    }
    goto switchD_0010478b_caseD_0;
   case 0x75:
   case 0x76:
   case 0x77:
switchD_0010478b_caseD_75:
    if ((local_268 != 0) || (local_268 = OPENSSL_sk_new_null(), local_268 != 0)) {
      uVar22 = opt_flag();
      iVar18 = OPENSSL_sk_push(local_268,uVar22);
      if (iVar18 != 0) {
        opt_arg();
        iVar18 = OPENSSL_sk_push(local_268);
        if (iVar18 != 0) goto switchD_0010478b_caseD_0;
      }
    }
    BIO_printf(_bio_err,"%s: Memory allocation failure\n",uVar21);
    goto LAB_001047ad;
   case 0x79:
    http_server_binmode = 1;
    goto switchD_0010478b_caseD_0;
   case 0x7a:
    bVar7 = true;
    goto switchD_0010478b_caseD_0;
   case 0x7b:
    bVar8 = true;
    goto switchD_0010478b_caseD_0;
   case 0x7e:
    local_1f0 = 1;
    goto switchD_0010478b_caseD_0;
   case 0x7f:
    bVar12 = true;
    goto switchD_0010478b_caseD_0;
   case 0x80:
    bVar13 = true;
    goto switchD_0010478b_caseD_0;
   case 0x81:
    enable_client_rpk = 1;
    goto switchD_0010478b_caseD_0;
   for (int i_401 = 0; i_401 < 5; i_401++) {
      case 0x3e9:
   }
   case 0x3ee:
    iVar18 = args_excert();
joined_r0x001048b9:
    if (iVar18 == 0) goto LAB_001047ad;
    goto switchD_0010478b_caseD_0;
   case 0xffffffff:
    goto switchD_0010478b_caseD_ffffffff;
}if (iVar18 == 0) goto switchD_0010478b_caseD_ffffffff;goto switchD_0010478b_caseD_0;switchD_0010478b_caseD_ffffffff:BIO_printf(_bio_err, "%s: Use -help for summary.\n", uVar21);LAB_001047ad:uVar33 = 1;LAB_001047be:local_258 = (EVP_PKEY*)0x0;a_00 = (X509*)0x0;local_270 = (X509*)0x0;pkey = (EVP_PKEY*)0x0;local_248 = (X509*)0x0;local_278 = 0;local_250 = (EVP_PKEY*)0x0;LAB_00104529:SSL_CTX_free(ctx);SSL_SESSION_free(psksess);set_keylog_file(0, 0);X509_free(local_248);OPENSSL_sk_pop_free(local_278, X509_CRL_free);X509_free(local_270);EVP_PKEY_free(local_250);EVP_PKEY_free(pkey);OSSL_STACK_OF_X509_free(local_a8);OSSL_STACK_OF_X509_free(local_a0);CRYPTO_free(local_90);CRYPTO_free(local_98);CRYPTO_free(local_88);CRYPTO_free(local_80);X509_VERIFY_PARAM_free(vpm);ptr = first;while (ptr != (undefined8*)0x0) {
   CRYPTO_free((void*)*ptr);
   CRYPTO_free((void*)ptr[2]);
   puVar2 = (undefined8*)ptr[4];
   CRYPTO_free(ptr);
   ptr = puVar2;
};first = (undefined8*)0x0;CRYPTO_free((void*)tlscstatp._16_8_);CRYPTO_free((void*)tlscstatp._32_8_);CRYPTO_free((void*)tlscstatp._24_8_);SSL_CTX_free(ctx2);X509_free(a_00);EVP_PKEY_free(local_258);CRYPTO_free(local_78);CRYPTO_free(local_68);ssl_excert_free(local_b0);OPENSSL_sk_free(local_268);SSL_CONF_CTX_free(lVar20);release_engine(local_260);BIO_free(bio_s_out);bio_s_out = (BIO*)0x0;BIO_free(bio_s_msg);bio_s_msg = (BIO*)0x0;if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar33;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}
