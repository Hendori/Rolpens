
undefined8 DTLS_RECORD_LAYER_new(long param_1)

{
  void *ptr;
  pqueue p_Var1;
  
  ptr = CRYPTO_malloc(0x10,"ssl/record/rec_layer_d1.c",0x18);
  if (ptr != (void *)0x0) {
    *(void **)(param_1 + 0x88) = ptr;
    p_Var1 = pqueue_new();
    *(pqueue *)((long)ptr + 8) = p_Var1;
    if (p_Var1 != (pqueue)0x0) {
      return 1;
    }
    CRYPTO_free(ptr);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return 0;
}



void DTLS_RECORD_LAYER_clear(long *param_1)

{
  undefined1 (*pauVar1) [16];
  void *pvVar2;
  undefined8 uVar3;
  pitem *item;
  
  pauVar1 = (undefined1 (*) [16])param_1[0x11];
  while( true ) {
    item = pqueue_pop(*(pqueue *)(*pauVar1 + 8));
    if (item == (pitem *)0x0) break;
    pvVar2 = item->data;
    if ((*(byte *)(*param_1 + 0x9b0) & 2) != 0) {
      OPENSSL_cleanse(*(void **)((long)pvVar2 + 0x18),*(size_t *)((long)pvVar2 + 0x20));
    }
    CRYPTO_free(*(void **)((long)pvVar2 + 0x18));
    CRYPTO_free(item->data);
    pitem_free(item);
  }
  uVar3 = *(undefined8 *)(*pauVar1 + 8);
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)(*pauVar1 + 8) = uVar3;
  return;
}



void DTLS_RECORD_LAYER_free(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    DTLS_RECORD_LAYER_clear();
    pqueue_free(*(pqueue *)(*(long *)(param_1 + 0x88) + 8));
    CRYPTO_free(*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dtls1_read_bytes(SSL *param_1,byte param_2,undefined1 *param_3,void *param_4,SSL_CTX *param_5,
                    int param_6,size_t *param_7)

{
  uint *puVar1;
  tls_session_ticket_ext_cb_fn *pptVar2;
  code cVar3;
  char cVar4;
  short sVar5;
  pqueue pq;
  void *pvVar6;
  uchar *puVar7;
  stack_st_SRTP_PROTECTION_PROFILE *psVar8;
  ssl3_state_st *psVar9;
  size_t sVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  SSL *pSVar14;
  undefined4 extraout_var;
  undefined8 *puVar15;
  pitem *ppVar16;
  long lVar17;
  pitem *ppVar18;
  BIO *b;
  tls_session_secret_cb_fn ptVar19;
  _func_3059 *p_Var20;
  char *pcVar21;
  SSL_CTX *pSVar22;
  undefined8 uVar23;
  ulong uVar24;
  TLS_SESSION_TICKET_EXT *pTVar25;
  byte bVar26;
  long in_FS_OFFSET;
  _func_3059 *local_b8;
  char local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (SSL *)0x0) &&
     ((pSVar14 = param_1, param_1->version == 0 ||
      (((param_1->version & 0x80U) != 0 &&
       (pSVar14 = (SSL *)ossl_quic_obj_get0_handshake_layer(), pSVar14 != (SSL *)0x0)))))) {
    if ((((byte)(param_2 - 0x16) < 2) || (param_2 == 0)) && ((param_6 == 0 || (param_2 == 0x17)))) {
      iVar11 = ossl_statem_get_in_handshake(pSVar14);
      if ((iVar11 != 0) || (iVar11 = SSL_in_init(param_1), iVar11 == 0)) {
LAB_00100216:
        local_b8 = (_func_3059 *)0x0;
LAB_00100230:
        do {
          *(undefined4 *)&pSVar14->packet = 1;
          iVar11 = SSL_is_init_finished(param_1);
          if (((iVar11 != 0) &&
              ((TLS_SESSION_TICKET_EXT *)pSVar14[4].tlsext_opaque_prf_input_len <=
               pSVar14[4].tlsext_session_ticket)) &&
             (ppVar16 = pqueue_pop(*(pqueue *)(pSVar14[4].tlsext_ecpointformatlist_length + 8)),
             pTVar25 = _UNK_00101078, sVar10 = __LC1, ppVar16 != (pitem *)0x0)) {
            puVar15 = (undefined8 *)ppVar16->data;
            pvVar6 = (void *)puVar15[1];
            pSVar14[4].tls_session_ticket_ext_cb = (tls_session_ticket_ext_cb_fn)*puVar15;
            pSVar14[4].tls_session_ticket_ext_cb_arg = pvVar6;
            pvVar6 = (void *)puVar15[3];
            pSVar14[4].tls_session_secret_cb = (tls_session_secret_cb_fn)puVar15[2];
            pSVar14[4].tls_session_secret_cb_arg = pvVar6;
            puVar7 = (uchar *)puVar15[5];
            pSVar14[4].initial_ctx = (SSL_CTX *)puVar15[4];
            pSVar14[4].next_proto_negotiated = puVar7;
            uVar23 = puVar15[6];
            psVar8 = (stack_st_SRTP_PROTECTION_PROFILE *)puVar15[7];
            pSVar14[4].tlsext_opaque_prf_input_len = sVar10;
            pSVar14[4].tlsext_session_ticket = pTVar25;
            *(undefined8 *)&pSVar14[4].next_proto_negotiated_len = uVar23;
            pSVar14[4].srtp_profiles = psVar8;
            CRYPTO_free(puVar15);
            pitem_free(ppVar16);
          }
          iVar11 = dtls1_handle_timeout(pSVar14);
        } while (0 < iVar11);
        iVar11 = ossl_statem_in_error(pSVar14);
        if (iVar11 != 0) goto LAB_00100813;
        pTVar25 = pSVar14[4].tlsext_session_ticket;
        if ((TLS_SESSION_TICKET_EXT *)pSVar14[4].tlsext_opaque_prf_input_len <= pTVar25) {
          uVar24 = 0;
          pSVar14[4].tlsext_opaque_prf_input_len = 0;
          pSVar14[4].tlsext_session_ticket = (TLS_SESSION_TICKET_EXT *)0x0;
          do {
            uVar12 = (**(code **)(pSVar14[4].options + 0x40))
                               (pSVar14[4].max_cert_list,
                                &pSVar14[4].tls_session_ticket_ext_cb + uVar24 * 8,
                                &pSVar14[4].tls_session_ticket_ext_cb_arg + uVar24 * 8,
                                (long)&pSVar14[4].tls_session_ticket_ext_cb_arg + uVar24 * 0x40 + 4,
                                &pSVar14[4].tls_session_secret_cb + uVar24 * 8,
                                &pSVar14[4].initial_ctx + uVar24 * 8);
            iVar11 = ossl_tls_handle_rlayer_return
                               (pSVar14,0,uVar12,"ssl/record/rec_layer_d1.c",0xfd);
            if (iVar11 < 1) {
              iVar11 = dtls1_read_failed(pSVar14,iVar11);
              if (iVar11 < 1) goto LAB_00100520;
              goto LAB_00100230;
            }
            (&pSVar14[4].next_proto_negotiated)[uVar24 * 8] = (uchar *)0x0;
            pSVar14[4].tlsext_opaque_prf_input_len = pSVar14[4].tlsext_opaque_prf_input_len + 1;
            iVar11 = (**(code **)(pSVar14[4].options + 0x18))(pSVar14[4].max_cert_list);
          } while ((iVar11 != 0) && (uVar24 = pSVar14[4].tlsext_opaque_prf_input_len, uVar24 < 0x20)
                  );
          pTVar25 = pSVar14[4].tlsext_session_ticket;
        }
        iVar13 = (int)pSVar14->mode;
        pptVar2 = &pSVar14[4].tls_session_ticket_ext_cb + (long)pTVar25 * 8;
        bVar26 = *(byte *)((long)&pSVar14[4].tls_session_ticket_ext_cb_arg +
                          (long)pTVar25 * 0x40 + 4);
        iVar11 = 0;
        if (bVar26 == 0x15) {
          if (iVar13 == 0) {
            if (((ulong)pSVar14->s3 & 0x200000000) != 0) {
LAB_00100a38:
              iVar13 = ssl_release_record(pSVar14,pptVar2,0);
              if (iVar13 == 0) goto LAB_00100813;
              *(undefined4 *)&pSVar14->packet = 1;
              goto LAB_00100520;
            }
            if ((undefined1 *)
                ((long)&(&pSVar14[4].initial_ctx)[(long)pTVar25 * 8][-1].srtp_profiles + 6U) <
                (undefined1 *)0x7ffffffffffffffe) {
              ptVar19 = (&pSVar14[4].tls_session_secret_cb)[(long)pTVar25 * 8] +
                        (long)(&pSVar14[4].next_proto_negotiated)[(long)pTVar25 * 8];
              sVar5 = *(short *)ptVar19;
              cVar3 = ptVar19[1];
              if ((&pSVar14[4].initial_ctx)[(long)pTVar25 * 8] == (SSL_CTX *)0x2) {
                cVar4 = (char)*ptVar19;
                if ((code *)pSVar14[1].tlsext_opaque_prf_input_len != (code *)0x0) {
                  (*(code *)pSVar14[1].tlsext_opaque_prf_input_len)
                            (0,pSVar14->state,0x15,ptVar19,2,param_1,
                             pSVar14[1].tlsext_session_ticket);
                }
                p_Var20 = (_func_3059 *)pSVar14[3].info_callback;
                if ((((_func_3059 *)pSVar14[3].info_callback != (_func_3059 *)0x0) ||
                    (p_Var20 = param_1->method[1].ssl_peek, p_Var20 != (_func_3059 *)0x0)) ||
                   (p_Var20 = local_b8, local_b8 != (_func_3059 *)0x0)) {
                  (*p_Var20)(param_1,(void *)0x4004,
                             (uint)(sVar5 << 8) | (uint)(byte)((ushort)sVar5 >> 8));
                  local_b8 = p_Var20;
                }
                if (cVar4 != '\x01') {
                  if (cVar4 != '\x02') {
                    ERR_new();
                    ERR_set_debug("ssl/record/rec_layer_d1.c",0x1c4,"dtls1_read_bytes");
                    ossl_statem_fatal(pSVar14,0x2f,0xf6,0);
                    goto LAB_00100813;
                  }
                  *(undefined4 *)&pSVar14->packet = 1;
                  *(uint *)&pSVar14->max_cert_list = (uint)(byte)cVar3;
                  ERR_new();
                  ERR_set_debug("ssl/record/rec_layer_d1.c",0x1bb,"dtls1_read_bytes");
                  ossl_statem_fatal(pSVar14,0xffffffff,(byte)cVar3 + 1000,"SSL alert number %d",
                                    cVar3);
                  puVar1 = (uint *)((long)&pSVar14->s3 + 4);
                  *puVar1 = *puVar1 | 2;
                  iVar13 = ssl_release_record(pSVar14,pptVar2,0);
                  if (iVar13 == 0) goto LAB_00100813;
                  SSL_CTX_remove_session
                            (*(SSL_CTX **)&pSVar14[4].mac_flags,(SSL_SESSION *)pSVar14[3].write_hash
                            );
                  goto LAB_00100520;
                }
                *(uint *)((long)&pSVar14->mode + 4) = (uint)(byte)cVar3;
                iVar13 = ssl_release_record(pSVar14,pptVar2,0);
                if (iVar13 == 0) goto LAB_00100813;
                iVar13 = pSVar14[4].tlsext_ocsp_resplen + 1;
                pSVar14[4].tlsext_ocsp_resplen = iVar13;
                if (iVar13 == 5) {
                  ERR_new();
                  ERR_set_debug("ssl/record/rec_layer_d1.c",0x1a0,"dtls1_read_bytes");
                  ossl_statem_fatal(pSVar14,10,0x199,0);
                  goto LAB_00100813;
                }
                if ((byte)cVar3 == 0) {
                  puVar1 = (uint *)((long)&pSVar14->s3 + 4);
                  *puVar1 = *puVar1 | 2;
                  goto LAB_00100520;
                }
                goto LAB_00100230;
              }
            }
            ERR_new();
            ERR_set_debug("ssl/record/rec_layer_d1.c",0x187,"dtls1_read_bytes");
            ossl_statem_fatal(pSVar14,10,0xcd,0);
            goto LAB_00100813;
          }
LAB_00100690:
          pq = *(pqueue *)(pSVar14[4].tlsext_ecpointformatlist_length + 8);
          iVar11 = pqueue_size(pq);
          if (CONCAT44(extraout_var,iVar11) < 100) {
            if ((&pSVar14[4].next_proto_negotiated)[(long)pTVar25 * 8] != (uchar *)0x0)
            goto LAB_00100813;
            puVar15 = (undefined8 *)CRYPTO_malloc(0x40,"ssl/record/rec_layer_d1.c",0x59);
            ppVar16 = pitem_new(&pSVar14[4].field_0x28a + (long)pTVar25 * 0x40,puVar15);
            if ((puVar15 == (undefined8 *)0x0) || (ppVar16 == (pitem *)0x0)) {
              CRYPTO_free(puVar15);
              pitem_free(ppVar16);
              ERR_new();
              pcVar21 = "dtls_buffer_record";
              uVar23 = 0x5e;
              goto LAB_001009c5;
            }
            pvVar6 = (&pSVar14[4].tls_session_ticket_ext_cb_arg)[(long)pTVar25 * 8];
            *puVar15 = (&pSVar14[4].tls_session_ticket_ext_cb)[(long)pTVar25 * 8];
            puVar15[1] = pvVar6;
            pvVar6 = (&pSVar14[4].tls_session_secret_cb_arg)[(long)pTVar25 * 8];
            puVar15[2] = (&pSVar14[4].tls_session_secret_cb)[(long)pTVar25 * 8];
            puVar15[3] = pvVar6;
            puVar7 = (&pSVar14[4].next_proto_negotiated)[(long)pTVar25 * 8];
            puVar15[4] = (&pSVar14[4].initial_ctx)[(long)pTVar25 * 8];
            puVar15[5] = puVar7;
            psVar8 = (&pSVar14[4].srtp_profiles)[(long)pTVar25 * 8];
            puVar15[6] = *(undefined8 *)
                          (&pSVar14[4].next_proto_negotiated_len + (long)pTVar25 * 0x40);
            puVar15[7] = psVar8;
            lVar17 = CRYPTO_memdup((&pSVar14[4].tls_session_secret_cb)[(long)pTVar25 * 8],
                                   (&pSVar14[4].initial_ctx)[(long)pTVar25 * 8],
                                   "ssl/record/rec_layer_d1.c",0x68);
            puVar15[2] = lVar17;
            puVar15[3] = lVar17;
            if (lVar17 == 0) {
              CRYPTO_free(puVar15);
              pitem_free(ppVar16);
              ERR_new();
              ERR_set_debug("ssl/record/rec_layer_d1.c",0x6c,"dtls_buffer_record");
              ossl_statem_fatal(pSVar14,0x50,0x8000f,0);
              goto LAB_00100813;
            }
            *puVar15 = 0;
            ppVar16->data = puVar15;
            ppVar18 = pqueue_insert(pq,ppVar16);
            if (ppVar18 == (pitem *)0x0) {
              CRYPTO_free((void *)puVar15[3]);
              CRYPTO_free(puVar15);
              pitem_free(ppVar16);
            }
          }
        }
        else {
          if ((&pSVar14[4].initial_ctx)[(long)pTVar25 * 8] != (SSL_CTX *)0x0) {
            pSVar14[4].tlsext_ocsp_resplen = 0;
          }
          if (iVar13 == 0) {
            psVar9 = pSVar14->s3;
            if (((ulong)psVar9 & 0x200000000) != 0) goto LAB_00100a38;
            if (bVar26 == param_2) {
              iVar13 = SSL_in_init(param_1);
              if (((iVar13 != 0) && (bVar26 == 0x17)) &&
                 ((pSVar14->tls_session_ticket_ext_cb_arg == (void *)0x0 ||
                  (lVar17._0_4_ = pSVar14[1].server, lVar17._4_4_ = pSVar14[1].new_session,
                  lVar17 == 0)))) {
                ERR_new();
                ERR_set_debug("ssl/record/rec_layer_d1.c",0x148,"dtls1_read_bytes");
                ossl_statem_fatal(pSVar14,10,100,0);
                goto LAB_00100813;
              }
LAB_00100a8c:
              if (param_3 != (undefined1 *)0x0) {
LAB_00100a94:
                *param_3 = *(undefined1 *)
                            ((long)&pSVar14[4].tls_session_ticket_ext_cb_arg +
                            (long)pTVar25 * 0x40 + 4);
              }
              pSVar22 = (&pSVar14[4].initial_ctx)[(long)pTVar25 * 8];
              if (param_5 != (SSL_CTX *)0x0) {
                if (pSVar22 < param_5) {
                  param_5 = pSVar22;
                }
                memcpy(param_4,(&pSVar14[4].next_proto_negotiated)[(long)pTVar25 * 8] +
                               (long)(&pSVar14[4].tls_session_secret_cb)[(long)pTVar25 * 8],
                       (size_t)param_5);
                pSVar22 = param_5;
                if (param_6 == 0) {
LAB_00100b88:
                  iVar11 = ssl_release_record(pSVar14,pptVar2,pSVar22);
                  if (iVar11 == 0) goto LAB_00100813;
                }
                else if ((&pSVar14[4].initial_ctx)[(long)pTVar25 * 8] == (SSL_CTX *)0x0) {
                  pSVar22 = (SSL_CTX *)0x0;
                  goto LAB_00100b88;
                }
                iVar11 = 1;
                *param_7 = (size_t)param_5;
                goto LAB_00100520;
              }
              if (pSVar22 != (SSL_CTX *)0x0) goto LAB_00100520;
            }
            else {
              if (bVar26 == 0x14) {
                if ((param_2 == 0x16) && (param_3 != (undefined1 *)0x0)) {
                  SSL_in_init(param_1);
                  goto LAB_00100a94;
                }
                if (((ulong)psVar9 & 0x100000000) == 0) goto LAB_00100330;
              }
              else if (((ulong)psVar9 & 0x100000000) == 0) {
                if (bVar26 == 0x16) goto LAB_001002eb;
LAB_00100944:
                if (bVar26 < 0x17) {
                  if (0x13 < bVar26) {
                    ERR_new();
                    ERR_set_debug("ssl/record/rec_layer_d1.c",0x245,"dtls1_read_bytes");
                    ossl_statem_fatal(pSVar14,10,0xc0103,0);
                    goto LAB_00100813;
                  }
LAB_00100bcc:
                  ERR_new();
                  uVar23 = 0x23b;
                }
                else {
                  if (bVar26 != 0x17) goto LAB_00100bcc;
                  if (((*(int *)&pSVar14->tlsext_debug_cb != 0) && (pSVar14->max_send_fragment != 0)
                      ) && (iVar11 = ossl_statem_app_data_allowed(pSVar14), iVar11 != 0)) {
                    *(undefined4 *)&pSVar14->tlsext_debug_cb = 2;
                    goto LAB_00100813;
                  }
                  ERR_new();
                  uVar23 = 0x255;
                }
                ERR_set_debug("ssl/record/rec_layer_d1.c",uVar23,"dtls1_read_bytes");
                ossl_statem_fatal(pSVar14,10,0xf5,0);
                goto LAB_00100813;
              }
LAB_0010058c:
              *(undefined4 *)&pSVar14->packet = 1;
            }
            iVar11 = ssl_release_record(pSVar14,pptVar2,0);
            iVar11 = -(uint)(iVar11 == 0);
            goto LAB_00100520;
          }
          if (bVar26 != 0x16) goto LAB_00100690;
          if (((ulong)pSVar14->s3 & 0x200000000) != 0) goto LAB_00100a38;
          if (param_2 == 0x16) {
            SSL_in_init(param_1);
            goto LAB_00100a8c;
          }
          if (((ulong)pSVar14->s3 & 0x100000000) != 0) goto LAB_0010058c;
LAB_001002eb:
          iVar11 = ossl_statem_get_in_handshake(pSVar14);
          if (iVar11 != 0) {
            bVar26 = *(byte *)((long)&pSVar14[4].tls_session_ticket_ext_cb_arg +
                              (long)pTVar25 * 0x40 + 4);
            goto LAB_00100944;
          }
          if ((*(short *)(&pSVar14[4].next_proto_negotiated_len + (long)pTVar25 * 0x40) ==
               *(short *)pSVar14[4].tlsext_ecpointformatlist_length) &&
             ((SSL_CTX *)0xb < (&pSVar14[4].initial_ctx)[(long)pTVar25 * 8])) {
            dtls1_get_message_header
                      ((&pSVar14[4].tls_session_secret_cb)[(long)pTVar25 * 8],local_88);
            if (local_88[0] == '\x14') {
              iVar11 = dtls1_check_timeout_num(pSVar14);
              if ((iVar11 < 0) ||
                 ((iVar11 = dtls1_retransmit_buffered_messages(pSVar14), iVar11 < 1 &&
                  (iVar11 = ossl_statem_in_error(pSVar14), iVar11 != 0)))) goto LAB_00100813;
              iVar11 = ssl_release_record(pSVar14,pptVar2,0);
            }
            else {
              iVar11 = SSL_is_init_finished(param_1);
              if (iVar11 == 0) {
                ERR_new();
                uVar23 = 0x217;
                goto LAB_00100ae3;
              }
              ossl_statem_set_in_init(pSVar14,1);
              iVar11 = (**(code **)&pSVar14->packet_length)(param_1);
              if (iVar11 < 0) goto LAB_00100520;
            }
            if (iVar11 == 0) goto LAB_00100813;
            if (((pSVar14[3].references & 4) == 0) &&
               (iVar11 = (**(code **)(pSVar14[4].options + 0x10))(pSVar14[4].max_cert_list),
               iVar11 == 0)) {
              *(undefined4 *)&pSVar14->packet = 3;
              b = SSL_get_rbio(param_1);
              BIO_clear_flags(b,0xf);
              BIO_set_flags(b,9);
              goto LAB_00100813;
            }
            goto LAB_00100230;
          }
        }
LAB_00100330:
        iVar11 = ssl_release_record(pSVar14,pptVar2,0);
        if (iVar11 == 0) goto LAB_00100813;
        goto LAB_00100230;
      }
      iVar11 = (**(code **)&pSVar14->packet_length)(param_1);
      if (iVar11 < 0) goto LAB_00100520;
      if (iVar11 != 0) goto LAB_00100216;
    }
    else {
      ERR_new();
      uVar23 = 0xd7;
LAB_00100ae3:
      pcVar21 = "dtls1_read_bytes";
LAB_001009c5:
      ERR_set_debug("ssl/record/rec_layer_d1.c",uVar23,pcVar21);
      ossl_statem_fatal(pSVar14,0x50,0xc0103,0);
    }
  }
LAB_00100813:
  iVar11 = -1;
LAB_00100520:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}



undefined8
do_dtls1_write(long param_1,undefined1 param_2,undefined8 param_3,ulong param_4,long *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_1 + 0x1c4) < 1) ||
     (uVar3 = (**(code **)(*(long *)(param_1 + 0x18) + 0x90))(), 0 < (int)uVar3)) {
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = ssl_get_max_send_fragment(param_1);
      if (uVar1 < param_4) {
        ERR_new();
        ERR_set_debug("ssl/record/rec_layer_d1.c",0x282,"do_dtls1_write");
        ossl_statem_fatal(param_1,0x50,0xc2,0);
        uVar3 = 0;
      }
      else {
        if ((**(int **)(param_1 + 0x18) != 0x1ffff) ||
           (local_44 = 0xfeff, *(int *)(param_1 + 0x9c0) == 0x100)) {
          local_44 = *(undefined4 *)(param_1 + 0x48);
        }
        local_48[0] = param_2;
        local_40 = param_3;
        local_38 = param_4;
        uVar2 = (**(code **)(*(long *)(param_1 + 0xc78) + 0x30))
                          (*(undefined8 *)(param_1 + 0xc88),local_48,1);
        uVar3 = ossl_tls_handle_rlayer_return(param_1,1,uVar2,"ssl/record/rec_layer_d1.c",0x294);
        if (0 < (int)uVar3) {
          *param_5 = (long)(int)param_4;
        }
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 dtls1_write_bytes(long param_1,undefined1 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0x4001) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    uVar1 = do_dtls1_write(param_1,param_2);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/record/rec_layer_d1.c",0x266,"dtls1_write_bytes");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0xffffffff;
}



void dtls1_increment_epoch(long param_1,uint param_2)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_1 + 0xce0);
  if ((param_2 & 1) == 0) {
    psVar1[1] = psVar1[1] + 1;
    return;
  }
  *psVar1 = *psVar1 + 1;
  dtls1_clear_received_buffer();
  return;
}



undefined2 dtls1_get_epoch(long param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = (*(undefined2 **)(param_1 + 0xce0))[1];
  if ((param_2 & 1) != 0) {
    uVar1 = **(undefined2 **)(param_1 + 0xce0);
  }
  return uVar1;
}


