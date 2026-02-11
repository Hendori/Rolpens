
void lh_RADIX_OBJ_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_RADIX_OBJ_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_RADIX_OBJ_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_RADIX_OBJ_doall_arg_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined8 new_pending_cb(undefined8 param_1,undefined8 param_2)

{
  pending_ssl_obj = param_2;
  pending_cb_called = 1;
  return 1;
}



undefined8 client_hello_cb(undefined8 param_1)

{
  client_hello_ssl_obj = param_1;
  hello_cb_called = 1;
  return 1;
}



void script_gen_simple_thread_child(void)

{
  return;
}



long get_time(void)

{
  ulong uVar1;
  ulong uVar2;
  
  ossl_crypto_mutex_lock(DAT_00107c20);
  uVar1 = DAT_00107c30;
  ossl_crypto_mutex_unlock(DAT_00107c20);
  uVar2 = ossl_time_now();
  if (!CARRY8(uVar2,uVar1)) {
    return uVar2 + uVar1;
  }
  return -1;
}



undefined8 radix_thread_init(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_ptr("test/radix/quic_bindings.c",0x234,&_LC0,param_1);
  if (iVar1 != 0) {
    uVar2 = CRYPTO_THREAD_get_local(&radix_thread);
    iVar1 = test_ptr_null("test/radix/quic_bindings.c",0x235,
                          "CRYPTO_THREAD_get_local(&radix_thread)",uVar2);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_set_local(&radix_thread,param_1);
      iVar1 = test_true("test/radix/quic_bindings.c",0x238,
                        "CRYPTO_THREAD_set_local(&radix_thread, rt)",iVar1 != 0);
      if (iVar1 != 0) {
        set_override_bio_out(*(undefined8 *)(param_1 + 0xb0));
        set_override_bio_err(*(undefined8 *)(param_1 + 0xb0));
        return 1;
      }
    }
  }
  return 0;
}



int check_consistent_want(SSL *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = SSL_get_error(param_1,param_2);
  iVar2 = SSL_want(param_1);
  if ((uVar1 == 0) || (uVar1 == 6)) {
    bVar4 = true;
    if (iVar2 == 1) goto LAB_001001bd;
LAB_001001fb:
    bVar4 = iVar2 == 8 && uVar1 == 0xc;
  }
  else {
    if (((uVar1 & 0xfffffffb) == 1) && (bVar4 = true, iVar2 == 1)) goto LAB_001001bd;
    if ((uVar1 != 2) || (iVar2 != 3)) {
      if ((uVar1 == 3) && (bVar4 = true, iVar2 == 2)) goto LAB_001001bd;
      if ((uVar1 != 0xb) || (iVar2 != 7)) {
        if ((uVar1 == 4) && (bVar4 = true, iVar2 == 4)) goto LAB_001001bd;
        goto LAB_001001fb;
      }
    }
    bVar4 = true;
  }
LAB_001001bd:
  iVar3 = test_true("test/radix/quic_ops.c",0x211,
                    "(ec == SSL_ERROR_NONE && w == SSL_NOTHING) || (ec == SSL_ERROR_ZERO_RETURN && w == SSL_NOTHING) || (ec == SSL_ERROR_SSL && w == SSL_NOTHING) || (ec == SSL_ERROR_SYSCALL && w == SSL_NOTHING) || (ec == SSL_ERROR_WANT_READ && w == SSL_READING) || (ec == SSL_ERROR_WANT_WRITE && w == SSL_WRITING) || (ec == SSL_ERROR_WANT_CLIENT_HELLO_CB && w == SSL_CLIENT_HELLO_CB) || (ec == SSL_ERROR_WANT_X509_LOOKUP && w == SSL_X509_LOOKUP) || (ec == SSL_ERROR_WANT_RETRY_VERIFY && w == SSL_RETRY_VERIFY)"
                    ,bVar4);
  if (iVar3 == 0) {
    test_error("test/radix/quic_ops.c",0x21e,"got error=%d, want=%d",uVar1,iVar2);
    return 0;
  }
  return iVar3;
}



char ssl_ctx_select_alpn(undefined8 param_1,uchar **param_2,uchar *param_3,uchar *param_4,
                        uint param_5)

{
  int iVar1;
  
  iVar1 = SSL_select_next_proto(param_2,param_3,alpn_ossltest,9,param_4,param_5);
  return (iVar1 != 1) * '\x02';
}



void keylog_cb(undefined8 param_1,undefined8 param_2)

{
  ossl_crypto_mutex_lock(DAT_00107c20);
  BIO_printf(DAT_00107c38,"%s",param_2);
  BIO_ctrl(DAT_00107c38,0xb,0,(void *)0x0);
  ossl_crypto_mutex_unlock(DAT_00107c20);
  return;
}



void RADIX_THREAD_report_state(long param_1,BIO *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  BIO_printf(param_2,"  Slots:\n");
  lVar2 = 0;
  do {
    while (puVar1 = *(undefined8 **)(param_1 + 0x28 + lVar2 * 8), puVar1 == (undefined8 *)0x0) {
      lVar3 = lVar2 + 1;
      BIO_printf(param_2,"  %3zu) <NULL>\n",lVar2);
      lVar2 = lVar3;
      if (lVar3 == 8) {
        return;
      }
    }
    lVar3 = lVar2 + 1;
    BIO_printf(param_2,"  %3zu) \'%s\' (SSL: %p)\n",lVar2,*puVar1,
               *(undefined8 *)(param_1 + 0x68 + lVar2 * 8));
    lVar2 = lVar3;
  } while (lVar3 != 8);
  return;
}



undefined8 do_per_op(void)

{
  OPENSSL_LH_doall(DAT_00107c28,per_op_tick_obj);
  return 1;
}



undefined8 hf_clear(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  lVar1 = CRYPTO_THREAD_get_local(&radix_thread);
  ossl_crypto_mutex_lock(DAT_00107c20);
  OPENSSL_LH_doall(DAT_00107c28,cleanup_one);
  OPENSSL_LH_flush(DAT_00107c28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  puVar3 = (undefined8 *)(lVar1 + 0x30U & 0xfffffffffffffff8);
  uVar2 = (ulong)(((int)lVar1 - (int)puVar3) + 0xa8U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  ossl_crypto_mutex_unlock(DAT_00107c20);
  return 1;
}



void radix_thread_cleanup_tl(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = test_ptr_null("test/radix/quic_bindings.c",0x229,&_LC11,param_1);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void RADIX_OBJ_cmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void RADIX_OBJ_hash(undefined8 *param_1)

{
  OPENSSL_LH_strhash(*param_1);
  return;
}



void radix_thread_cleanup(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = CRYPTO_THREAD_get_local(&radix_thread);
  iVar2 = test_ptr("test/radix/quic_bindings.c",0x244,&_LC0,uVar1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = CRYPTO_THREAD_set_local(&radix_thread,0);
  test_true("test/radix/quic_bindings.c",0x247,"CRYPTO_THREAD_set_local(&radix_thread, NULL)",
            iVar2 != 0);
  return;
}



undefined8 ssl_attach_bio_dgram_constprop_0(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  BIO *pBVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0x100007f;
  iVar2 = BIO_socket(2,2,0x11,0);
  iVar3 = test_int_ge("test/radix/quic_ops.c",0x53,&_LC15,&_LC14,iVar2,0);
  if (iVar3 == 0) {
LAB_00100592:
    uVar5 = 0;
joined_r0x001006c4:
    if (-1 < iVar2) {
      BIO_closesocket(iVar2);
    }
    uVar6 = 0;
    iVar2 = -1;
  }
  else {
    iVar3 = BIO_socket_nbio(iVar2,1);
    iVar3 = test_true("test/radix/quic_ops.c",0x56,"BIO_socket_nbio(fd, 1)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_00100592;
    uVar5 = BIO_ADDR_new();
    iVar3 = test_ptr("test/radix/quic_ops.c",0x59,"addr = BIO_ADDR_new()",uVar5);
    if (iVar3 == 0) goto joined_r0x001006c4;
    iVar3 = BIO_ADDR_rawmake(uVar5,2,&local_3c,4,0);
    iVar3 = test_true("test/radix/quic_ops.c",0x5c,
                      "BIO_ADDR_rawmake(addr, AF_INET, &ina, sizeof(ina), 0)",iVar3 != 0);
    if (iVar3 == 0) goto joined_r0x001006c4;
    iVar3 = BIO_bind(iVar2,uVar5,0);
    iVar3 = test_true("test/radix/quic_ops.c",0x60,"BIO_bind(fd, addr, 0)",iVar3 != 0);
    if (iVar3 == 0) goto joined_r0x001006c4;
    local_38 = uVar5;
    iVar3 = BIO_sock_info(iVar2,0,&local_38);
    iVar3 = test_true("test/radix/quic_ops.c",100,"BIO_sock_info(fd, BIO_SOCK_INFO_ADDRESS, &info)",
                      iVar3 != 0);
    if (iVar3 == 0) goto joined_r0x001006c4;
    uVar1 = BIO_ADDR_rawport(uVar5);
    uVar6 = 1;
    iVar3 = test_int_gt("test/radix/quic_ops.c",0x67,"BIO_ADDR_rawport(addr)",&_LC14,uVar1,0);
    if (iVar3 == 0) goto joined_r0x001006c4;
  }
  BIO_ADDR_free(uVar5);
  iVar3 = test_true("test/radix/quic_ops.c",0x7d,
                    "ssl_create_bound_socket(local_port, &s_fd, actual_port)",uVar6);
  if (iVar3 != 0) {
    pBVar4 = BIO_new_dgram(iVar2,1);
    iVar3 = test_ptr("test/radix/quic_ops.c",0x80,"bio = BIO_new_dgram(s_fd, BIO_CLOSE)",pBVar4);
    if (iVar3 == 0) {
      BIO_closesocket(iVar2);
    }
    else {
      SSL_set0_rbio(param_1,pBVar4);
      iVar2 = BIO_up_ref(pBVar4);
      iVar2 = test_true("test/radix/quic_ops.c",0x86,"BIO_up_ref(bio)",iVar2 != 0);
      if (iVar2 != 0) {
        SSL_set0_wbio(param_1,pBVar4);
        uVar5 = 1;
        goto LAB_001005ca;
      }
    }
  }
  uVar5 = 0;
LAB_001005ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong expect_slot_ssl_constprop_0(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = test_size_t_lt("test/radix/quic_bindings.c",0x29e,&_LC26,"NUM_SLOTS",param_1,8);
  if ((int)uVar2 != 0) {
    lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
    *param_2 = *(undefined8 *)(lVar3 + 0x68 + param_1 * 8);
    iVar1 = test_ptr("test/radix/quic_bindings.c",0x29f,"*p_ssl = RT()->ssl[idx]");
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



bool hf_set_peer_addr_from(void)

{
  ushort uVar1;
  int iVar2;
  BIO *bp;
  BIO *bp_00;
  void *parg;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined4 local_4c;
  SSL *local_48;
  SSL *local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0xffffffff;
  local_48 = (SSL *)0x0;
  iVar2 = expect_slot_ssl_constprop_0(0,&local_48);
  iVar2 = test_true("test/radix/quic_ops.c",0x3b8,"expect_slot_ssl(fctx, (0), &(dst_ssl))",
                    iVar2 != 0);
  if (iVar2 != 0) {
    local_40 = (SSL *)0x0;
    iVar2 = expect_slot_ssl_constprop_0(1,&local_40);
    iVar2 = test_true("test/radix/quic_ops.c",0x3b9,"expect_slot_ssl(fctx, (1), &(src_ssl))",
                      iVar2 != 0);
    if (iVar2 != 0) {
      bp = SSL_get_rbio(local_48);
      bp_00 = SSL_get_rbio(local_40);
      iVar2 = test_ptr("test/radix/quic_ops.c",0x3bc,"dst_bio",bp);
      if (iVar2 != 0) {
        iVar2 = test_ptr("test/radix/quic_ops.c",0x3bc,"src_bio",bp_00);
        if (iVar2 != 0) {
          parg = (void *)BIO_ADDR_new();
          iVar2 = test_ptr("test/radix/quic_ops.c",0x3bf,"src_addr = BIO_ADDR_new()",parg);
          if (iVar2 != 0) {
            lVar3 = BIO_ctrl(bp_00,0x69,0,&local_4c);
            iVar2 = test_true("test/radix/quic_ops.c",0x3c2,"BIO_get_fd(src_bio, &src_fd)",
                              lVar3 != 0);
            if (iVar2 != 0) {
              iVar2 = test_int_ge("test/radix/quic_ops.c",0x3c3,"src_fd",&_LC14,local_4c,0);
              if (iVar2 != 0) {
                local_38 = parg;
                iVar2 = BIO_sock_info(local_4c,0,&local_38);
                iVar2 = test_true("test/radix/quic_ops.c",0x3c7,
                                  "BIO_sock_info(src_fd, BIO_SOCK_INFO_ADDRESS, &src_info)",
                                  iVar2 != 0);
                if (iVar2 != 0) {
                  uVar1 = BIO_ADDR_rawport(parg);
                  iVar2 = test_int_ge("test/radix/quic_ops.c",0x3c8,
                                      "ntohs(BIO_ADDR_rawport(src_addr))",&_LC14,
                                      uVar1 << 8 | uVar1 >> 8,0);
                  if (iVar2 != 0) {
                    lVar3 = BIO_ctrl(bp,0x2c,0,parg);
                    iVar2 = test_true("test/radix/quic_ops.c",0x3cf,
                                      "BIO_dgram_set_peer(dst_bio, src_addr)",(int)lVar3 != 0);
                    bVar4 = iVar2 != 0;
                    goto LAB_001008b5;
                  }
                }
              }
            }
          }
          bVar4 = false;
          goto LAB_001008b5;
        }
      }
    }
  }
  parg = (void *)0x0;
  bVar4 = false;
LAB_001008b5:
  BIO_ADDR_free(parg);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hf_accept_conn_none(void)

{
  int iVar1;
  SSL *ssl;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = expect_slot_ssl_constprop_0(0,&local_28);
  iVar1 = test_true("test/radix/quic_ops.c",0x17a,"expect_slot_ssl(fctx, (0), &((listener)))",
                    iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ssl = (SSL *)SSL_accept_connection(local_28,1);
    iVar1 = test_ptr_null("test/radix/quic_ops.c",0x17d,&_LC39,ssl);
    uVar2 = 1;
    if (iVar1 == 0) {
      SSL_free(ssl);
      uVar2 = 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * RADIX_THREAD_new_constprop_0(void)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  iVar1 = test_ptr("test/radix/quic_bindings.c",0x1f0,&_LC40,&radix_process);
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0xd0,"test/radix/quic_bindings.c",0x1f1);
    iVar1 = test_ptr("test/radix/quic_bindings.c",0x1f1,"rt = OPENSSL_zalloc(sizeof(*rt))",ptr);
    if (iVar1 != 0) {
      *ptr = &radix_process;
      uVar2 = ossl_crypto_mutex_new();
      ptr[0x17] = uVar2;
      iVar1 = test_ptr("test/radix/quic_bindings.c",0x1f7,"rt->m = ossl_crypto_mutex_new()",uVar2);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_push(DAT_00107c18,ptr);
        iVar1 = test_true("test/radix/quic_bindings.c",0x1fd,"sk_RADIX_THREAD_push(rp->threads, rt)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          ptr[4] = DAT_00107c10;
          DAT_00107c10 = DAT_00107c10 + 1;
          return ptr;
        }
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



void report_ssl_state_constprop_0(BIO *param_1,int param_2,uint param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    pcVar2 = "none";
    break;
  case 1:
    pcVar2 = "OK";
    break;
  case 2:
    pcVar2 = "wrong-dir";
    break;
  case 3:
    pcVar2 = "finished";
    break;
  case 4:
    pcVar2 = "reset-local";
    break;
  case 5:
    pcVar2 = "reset-remote";
    break;
  case 6:
    pcVar2 = "conn-closed";
    break;
  default:
    pcVar2 = "?";
  }
  pcVar1 = "Read state: ";
  if (param_2 != 0) {
    pcVar1 = "Write state: ";
  }
  BIO_printf(param_1,"%s%-15s%s(%d)","          ",pcVar1,pcVar2,(ulong)param_3);
  if (param_4 != -1) {
    BIO_printf(param_1,", %llu",param_4);
  }
  BIO_printf(param_1,"\n");
  return;
}



void report_obj(undefined8 *param_1,BIO *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulong local_38;
  long local_30;
  
  uVar1 = param_1[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_printf(param_2,"      - %-16s @ %p\n",*param_1,uVar1);
  ERR_set_mark();
  iVar3 = SSL_is_quic(uVar1);
  local_38 = 0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (iVar3 == 0) {
    BIO_printf(param_2,"%sType:          %s\n","          ",&_LC68);
    goto LAB_00100e23;
  }
  iVar3 = SSL_is_connection(uVar1);
  iVar4 = SSL_is_listener(uVar1);
  if (iVar4 == 0) {
    if (iVar3 == 0) {
      BIO_printf(param_2,"%sType:          %s\n","          ",&_LC69);
    }
    else {
      BIO_printf(param_2,"%sType:          %s\n","          ",&_LC66);
      iVar3 = SSL_get_conn_close_info(uVar1,local_58,0x28);
      if (iVar3 != 0) {
        bVar2 = true;
        goto LAB_00100f88;
      }
    }
  }
  else {
    BIO_printf(param_2,"%sType:          %s\n","          ",&_LC70);
    if ((iVar3 == 0) || (iVar3 = SSL_get_conn_close_info(uVar1,local_58,0x28), iVar3 == 0))
    goto LAB_00100e23;
    bVar2 = false;
LAB_00100f88:
    puVar8 = (undefined *)ossl_quic_err_to_string(local_58._0_8_);
    puVar9 = (undefined *)ossl_quic_frame_type_to_string(local_58._8_8_);
    if (puVar8 == (undefined *)0x0) {
      puVar8 = &_LC51;
    }
    pcVar11 = "app";
    if (puVar9 == (undefined *)0x0) {
      puVar9 = &_LC51;
    }
    puVar10 = (undefined *)local_48._0_8_;
    if ((undefined *)local_48._0_8_ == (undefined *)0x0) {
      puVar10 = &_LC58;
    }
    if ((local_38 & 2) != 0) {
      pcVar11 = "transport";
    }
    pcVar12 = "remote";
    if ((local_38 & 1) != 0) {
      pcVar12 = "local";
    }
    BIO_printf(param_2,"%sConnection is closed: %s(%llu)/%s(%llu), %s, %s, reason: \"%s\"\n",
               "          ",puVar8,local_58._0_8_,puVar9,local_58._8_8_,pcVar12,pcVar11,puVar10);
    if (!bVar2) goto LAB_00100e23;
  }
  lVar7 = SSL_get_stream_id(uVar1);
  if (lVar7 != -1) {
    BIO_printf(param_2,"%sStream ID: %llu\n","          ",lVar7);
  }
  uVar5 = SSL_get_stream_read_state(uVar1);
  uVar6 = SSL_get_stream_write_state(uVar1);
  iVar3 = SSL_get_stream_read_error_code(uVar1,&local_68);
  if (iVar3 != 1) {
    local_68 = 0xffffffffffffffff;
  }
  iVar3 = SSL_get_stream_write_error_code(uVar1,&local_60);
  if (iVar3 != 1) {
    local_60 = 0xffffffffffffffff;
  }
  report_ssl_state_constprop_0(param_2,0,uVar5,local_68);
  report_ssl_state_constprop_0(param_2,1,uVar6,local_60);
LAB_00100e23:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ERR_pop_to_mark();
  return;
}



long openc_alloc_space_constprop_0(long param_1)

{
  void *addr;
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x40) - lVar3) < 8) {
    addr = *(void **)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x40) - (long)addr;
    lVar5 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar5 = 0x400;
    }
    pvVar2 = CRYPTO_realloc(addr,(int)lVar5,"test/radix/terp.c",0x106);
    iVar1 = test_ptr("test/radix/terp.c",0x107,&_LC11,pvVar2);
    if (iVar1 == 0) {
      return 0;
    }
    *(void **)(param_1 + 0x30) = pvVar2;
    lVar3 = (long)pvVar2 + (lVar3 - (long)addr);
    *(long *)(param_1 + 0x40) = (long)pvVar2 + lVar5;
  }
  *(long *)(param_1 + 0x38) = lVar3 + 8;
  return lVar3;
}



void per_op_tick_obj(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    return;
  }
  SSL_handle_events(*(undefined8 *)(param_1 + 8));
  return;
}



void cleanup_one(undefined8 *param_1)

{
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  SSL_free((SSL *)param_1[1]);
  CRYPTO_free((void *)*param_1);
  CRYPTO_free(param_1);
  return;
}



uint hf_connect_wait(long param_1)

{
  byte *pbVar1;
  SSL *ssl;
  int iVar2;
  uint ret_code;
  long lVar3;
  long in_FS_OFFSET;
  SSL *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (SSL *)0x0;
  iVar2 = expect_slot_ssl_constprop_0(0,&local_38);
  iVar2 = test_true("test/radix/quic_ops.c",0x2a9,"expect_slot_ssl(fctx, (0), &((ssl)))",iVar2 != 0)
  ;
  if (iVar2 == 0) {
LAB_001011f2:
    ret_code = 0;
  }
  else {
    lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
    ssl = local_38;
    if (*(long *)(lVar3 + 200) == 0) {
      iVar2 = SSL_set_blocking_mode(local_38,0);
      ret_code = test_true("test/radix/quic_ops.c",0x2ad,"SSL_set_blocking_mode(ssl, 0)",iVar2 != 0)
      ;
      if (ret_code == 0) goto LAB_00101207;
      iVar2 = SSL_set_alpn_protos(ssl,alpn_ossltest,9);
      iVar2 = test_false("test/radix/quic_ops.c",0x2b1,
                         "SSL_set_alpn_protos(ssl, alpn_ossltest, sizeof(alpn_ossltest))",iVar2 != 0
                        );
      if (iVar2 == 0) goto LAB_001011f2;
    }
    lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
    *(undefined8 *)(lVar3 + 200) = 1;
    ret_code = SSL_connect(ssl);
    lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
    if (*(long *)(lVar3 + 0x28) != 0) {
      pbVar1 = (byte *)(*(long *)(lVar3 + 0x28) + 0x10);
      *pbVar1 = *pbVar1 | 2;
    }
    iVar2 = check_consistent_want(ssl,ret_code);
    iVar2 = test_true("test/radix/quic_ops.c",0x2b9,"check_consistent_want(ssl, ret)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_001011f2;
    if (ret_code != 1) {
      iVar2 = SSL_get_error(ssl,ret_code);
      if (iVar2 - 2U < 2) {
        *(undefined4 *)(param_1 + 8) = 1;
        ret_code = 2;
      }
      else {
        iVar2 = test_int_eq("test/radix/quic_ops.c",0x2c0,&_LC77,&_LC76,ret_code,1);
        ret_code = (uint)(iVar2 != 0);
      }
    }
  }
  lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
  *(undefined8 *)(lVar3 + 200) = 0;
LAB_00101207:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ret_code;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hf_listen(void)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar2 = expect_slot_ssl_constprop_0(0,&local_28);
  iVar2 = test_true("test/radix/quic_ops.c",0x114,"expect_slot_ssl(fctx, (0), &((ssl)))",iVar2 != 0)
  ;
  uVar4 = local_28;
  if (iVar2 != 0) {
    iVar2 = SSL_listen(local_28);
    iVar2 = test_true("test/radix/quic_ops.c",0x117,&_LC78,iVar2 != 0);
    if (iVar2 != 0) {
      lVar3 = SSL_get0_domain(uVar4);
      if (lVar3 == 0) {
        lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
        if (*(long *)(lVar3 + 0x28) != 0) {
          pbVar1 = (byte *)(*(long *)(lVar3 + 0x28) + 0x10);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar4 = 1;
      goto LAB_001013c4;
    }
  }
  uVar4 = 0;
LAB_001013c4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 RADIX_PROCESS_set_ssl_constprop_0(char *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  undefined8 *ptr_00;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  char *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_ptr("test/radix/quic_bindings.c",0x6f,&_LC79,param_1);
  if ((iVar1 == 0) ||
     (iVar1 = test_ptr("test/radix/quic_bindings.c",0x6f,&_LC80,param_2), iVar1 == 0)) {
LAB_00101600:
    iVar1 = test_ptr("test/radix/quic_bindings.c",0x1d7,"obj = RADIX_OBJ_new(name, ssl)",0);
    if (iVar1 == 0) {
LAB_0010161a:
      uVar3 = 0;
      goto LAB_001015c5;
    }
    local_48[0] = param_1;
    ptr_00 = (undefined8 *)OPENSSL_LH_retrieve(DAT_00107c28,local_48);
    if (ptr_00 != (undefined8 *)0x0) {
      ptr = (undefined8 *)0x0;
LAB_0010157f:
      iVar1 = test_true("test/radix/quic_bindings.c",0x1c3,"existing->registered",
                        *(byte *)(ptr_00 + 2) & 1);
      if (iVar1 == 0) {
        iVar1 = test_true("test/radix/quic_bindings.c",0x1da,"RADIX_PROCESS_set_obj(rp, name, obj)",
                          0);
        if (iVar1 != 0) goto LAB_001015c0;
        if (ptr != (undefined8 *)0x0) goto LAB_001016ee;
        goto LAB_0010161a;
      }
      OPENSSL_LH_delete(DAT_00107c28,ptr_00);
      *(byte *)(ptr_00 + 2) = *(byte *)(ptr_00 + 2) & 0xfe;
      SSL_free((SSL *)ptr_00[1]);
      CRYPTO_free((void *)*ptr_00);
      CRYPTO_free(ptr_00);
      if (ptr != (undefined8 *)0x0) {
LAB_001016b8:
        OPENSSL_LH_insert(DAT_00107c28,ptr);
        *(byte *)(ptr + 2) = *(byte *)(ptr + 2) | 1;
        iVar1 = 1;
        goto LAB_001016d2;
      }
    }
    iVar1 = test_true("test/radix/quic_bindings.c",0x1da,"RADIX_PROCESS_set_obj(rp, name, obj)",1);
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_001015c5;
    }
  }
  else {
    ptr = (undefined8 *)CRYPTO_zalloc(0x18,"test/radix/quic_bindings.c",0x72);
    iVar1 = test_ptr("test/radix/quic_bindings.c",0x72,"obj = OPENSSL_zalloc(sizeof(*obj))",ptr);
    if (iVar1 == 0) goto LAB_00101600;
    pcVar2 = CRYPTO_strdup(param_1,"test/radix/quic_bindings.c",0x75);
    *ptr = pcVar2;
    iVar1 = test_ptr("test/radix/quic_bindings.c",0x75,"obj->name = OPENSSL_strdup(name)",pcVar2);
    if (iVar1 == 0) {
      CRYPTO_free(ptr);
      goto LAB_00101600;
    }
    ptr[1] = param_2;
    iVar1 = test_ptr("test/radix/quic_bindings.c",0x1d7,"obj = RADIX_OBJ_new(name, ssl)",ptr);
    if (iVar1 == 0) goto LAB_0010161a;
    iVar1 = test_false("test/radix/quic_bindings.c",0x1be,"obj->registered",*(byte *)(ptr + 2) & 1);
    if (iVar1 != 0) {
      local_48[0] = param_1;
      ptr_00 = (undefined8 *)OPENSSL_LH_retrieve(DAT_00107c28,local_48,extraout_RDX,iVar1);
      if ((ptr_00 != (undefined8 *)0x0) && (ptr_00 != ptr)) goto LAB_0010157f;
      goto LAB_001016b8;
    }
LAB_001016d2:
    iVar1 = test_true("test/radix/quic_bindings.c",0x1da,"RADIX_PROCESS_set_obj(rp, name, obj)",
                      iVar1);
    if (iVar1 == 0) {
LAB_001016ee:
      SSL_free((SSL *)ptr[1]);
      CRYPTO_free((void *)*ptr);
      CRYPTO_free(ptr);
      uVar3 = 0;
      goto LAB_001015c5;
    }
  }
LAB_001015c0:
  uVar3 = 1;
LAB_001015c5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void opgen_PUSH_SIZE(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



void opgen_PUSH_P(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 2;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



void opgen_PUSH_PZ(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 3;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



void opgen_PUSH_U64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 4;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



undefined8 hf_sleep(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar2 != 0) {
    uVar4 = **(undefined8 **)(lVar1 + 0x68);
    *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
  }
  else {
    uVar4 = 0;
  }
  uVar3 = test_true("test/radix/quic_ops.c",0x3dd,
                    "TERP_stk_pop((fctx->terp), &((ms)), sizeof((ms)))",iVar2 != 0);
  if ((int)uVar3 != 0) {
    OSSL_sleep(uVar4);
    uVar3 = 1;
  }
  return uVar3;
}



void opgen_FUNC(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 6;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_3;
  }
  return;
}



void script_gen_ssl_poll(long param_1)

{
  long lVar1;
  
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_listen,"hf_listen");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_set_peer_addr_from,"hf_set_peer_addr_from");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_connect_wait,"hf_connect_wait");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa5;
  opgen_FUNC(param_1,hf_set_default_stream_mode,"hf_set_default_stream_mode");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_PUSH_PZ(param_1,&_LC99);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa8;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa9;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa9;
  opgen_PUSH_PZ(param_1,&_LC99);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa9;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa9;
  opgen_PUSH_P(param_1,"apple");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa9;
  opgen_PUSH_SIZE(param_1,6);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xa9;
  opgen_FUNC(param_1,hf_write,"hf_write");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_PUSH_PZ(param_1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xab;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xac;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xac;
  opgen_PUSH_PZ(param_1,&_LC103);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xac;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xac;
  opgen_PUSH_P(param_1,"orange");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xac;
  opgen_PUSH_SIZE(param_1,7);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xac;
  opgen_FUNC(param_1,hf_write,"hf_write");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_PUSH_PZ(param_1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xae;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xaf;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xaf;
  opgen_PUSH_PZ(param_1,&_LC105);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xaf;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xaf;
  opgen_PUSH_P(param_1,"Strawberry");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xaf;
  opgen_PUSH_SIZE(param_1,0xb);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xaf;
  opgen_FUNC(param_1,hf_write,"hf_write");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_PUSH_PZ(param_1,&_LC107);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb1;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb2;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb2;
  opgen_PUSH_PZ(param_1,&_LC107);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb2;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb2;
  opgen_PUSH_P(param_1,&_LC108);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb2;
  opgen_PUSH_SIZE(param_1,5);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb2;
  opgen_FUNC(param_1,hf_write,"hf_write");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_PZ(param_1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_FUNC(param_1,hf_accept_conn,"hf_accept_conn");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_PZ(param_1,&_LC109);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_FUNC(param_1,hf_set_default_stream_mode,"hf_set_default_stream_mode");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb4;
  opgen_FUNC(param_1,hf_accept_conn_none,"hf_accept_conn_none");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_PUSH_PZ(param_1,&_LC109);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_PUSH_PZ(param_1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb6;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb7;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb7;
  opgen_PUSH_PZ(param_1,&_LC112);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb7;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb7;
  opgen_PUSH_P(param_1,"apple");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb7;
  opgen_PUSH_SIZE(param_1,6);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb7;
  opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_PUSH_PZ(param_1,&_LC109);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_PUSH_PZ(param_1,&_LC114);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xb9;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xba;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xba;
  opgen_PUSH_PZ(param_1,&_LC114);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xba;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xba;
  opgen_PUSH_P(param_1,"orange");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xba;
  opgen_PUSH_SIZE(param_1,7);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xba;
  opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_PUSH_PZ(param_1,&_LC109);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_PUSH_PZ(param_1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbc;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbd;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbd;
  opgen_PUSH_PZ(param_1,&_LC115);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbd;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbd;
  lVar1 = 0;
  opgen_PUSH_P(param_1,"Strawberry");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbd;
  opgen_PUSH_SIZE(param_1,0xb);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbd;
  opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_PUSH_PZ(param_1,&_LC109);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_PUSH_PZ(param_1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xbf;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xc0;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xc0;
  opgen_PUSH_PZ(param_1,&_LC116);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xc0;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xc0;
  opgen_PUSH_P(param_1,&_LC108);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xc0;
  opgen_PUSH_SIZE(param_1,5);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xc0;
  opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
  while( true ) {
    while( true ) {
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd7;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd7;
      opgen_PUSH_PZ(param_1,&_LC109);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd7;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd8;
      opgen_PUSH_U64(param_1,1);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd8;
      opgen_PUSH_PZ(param_1,&_LC112);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd8;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd9;
      opgen_PUSH_U64(param_1,2);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd9;
      opgen_PUSH_PZ(param_1,&_LC114);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd9;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xda;
      opgen_PUSH_U64(param_1,3);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xda;
      opgen_PUSH_PZ(param_1,&_LC115);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xda;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xdb;
      opgen_PUSH_U64(param_1,4);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xdb;
      opgen_PUSH_PZ(param_1,&_LC116);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xdb;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xdc;
      opgen_PUSH_U64(param_1,lVar1);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xdd;
      opgen_FUNC(param_1,ssl_poll_check,"ssl_poll_check");
      if (lVar1 != 3) break;
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      lVar1 = 4;
      *(undefined4 *)(param_1 + 0x14) = 0xe0;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xe0;
      opgen_PUSH_PZ(param_1,&_LC112);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xe0;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xe0;
      opgen_PUSH_P(param_1,"extra");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xe0;
      opgen_PUSH_SIZE(param_1,6);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xe0;
      opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd2;
      opgen_PUSH_PZ(param_1,&_LC120);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd2;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd2;
      opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_PUSH_PZ(param_1,&_LC120);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_PUSH_U64(param_1,1);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_PUSH_PZ(param_1,&_LC91);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd3;
      opgen_FUNC(param_1,hf_set_peer_addr_from,"hf_set_peer_addr_from");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd4;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd4;
      opgen_PUSH_PZ(param_1,&_LC120);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd4;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd4;
      opgen_FUNC(param_1,hf_connect_wait,"hf_connect_wait");
    }
    if (lVar1 == 4) break;
    lVar1 = lVar1 + 1;
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    switch(lVar1) {
    default:
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      lVar1 = 1;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_PUSH_PZ(param_1,&_LC99);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_PUSH_P(param_1,"orange");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_PUSH_SIZE(param_1,7);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_FUNC(param_1,hf_write,"hf_write");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_PUSH_PZ(param_1,&_LC107);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_PUSH_P(param_1,&_LC108);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_PUSH_SIZE(param_1,5);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_FUNC(param_1,hf_write,"hf_write");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_PUSH_PZ(param_1,&_LC116);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_PUSH_P(param_1,&_LC108);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_PUSH_SIZE(param_1,5);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_PUSH_U64(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_PUSH_PZ(param_1,&_LC112);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_PUSH_P(param_1,"orange");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_PUSH_SIZE(param_1,7);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x14) = 0xd0;
      opgen_PUSH_P(param_1,script_info_ssl_poll_child);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd0;
      opgen_FUNC(param_1,hf_spawn_thread,"hf_spawn_thread");
    }
  }
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_PZ(param_1,&_LC121);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_FUNC(param_1,hf_accept_conn,"hf_accept_conn");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_PZ(param_1,&_LC121);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_FUNC(param_1,hf_set_default_stream_mode,"hf_set_default_stream_mode");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe3;
  opgen_FUNC(param_1,hf_accept_conn_none,"hf_accept_conn_none");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_PUSH_PZ(param_1,&_LC121);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_PUSH_PZ(param_1,&_LC122);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe4;
  opgen_FUNC(param_1,hf_new_stream,"hf_new_stream");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe5;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe5;
  opgen_PUSH_PZ(param_1,&_LC122);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe5;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe5;
  opgen_PUSH_P(param_1,&_LC123);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe5;
  opgen_PUSH_SIZE(param_1,4);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe5;
  opgen_FUNC(param_1,hf_write,"hf_write");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe6;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe6;
  opgen_PUSH_PZ(param_1,&_LC120);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe6;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe6;
  opgen_PUSH_P(param_1,&_LC123);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe6;
  opgen_PUSH_SIZE(param_1,4);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0xe6;
  opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
  return;
}



void script_gen_simple_thread(long param_1)

{
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x39;
  opgen_PUSH_P(param_1,script_info_simple_thread_child);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x39;
  opgen_FUNC(param_1,hf_spawn_thread,"hf_spawn_thread");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x39;
  opgen_PUSH_P(param_1,script_info_simple_thread_child);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x39;
  opgen_FUNC(param_1,hf_spawn_thread,"hf_spawn_thread");
  return;
}



void script_gen_simple_conn(long param_1)

{
  bool bVar1;
  
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC124);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,3);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC124);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_new_ssl_listener_from,"hf_new_ssl_listener_from");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_listen,"hf_listen");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,1);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC91);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_set_peer_addr_from,"hf_set_peer_addr_from");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_PUSH_PZ(param_1,&_LC95);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x19;
  opgen_FUNC(param_1,hf_connect_wait,"hf_connect_wait");
  bVar1 = false;
  while( true ) {
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1f;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1f;
    opgen_PUSH_PZ(param_1,&_LC95);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1f;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1f;
    opgen_PUSH_P(param_1,"apple");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1f;
    opgen_PUSH_SIZE(param_1,6);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1f;
    opgen_FUNC(param_1,hf_write,"hf_write");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x21;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x21;
    opgen_PUSH_PZ(param_1,&_LC91);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x21;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x21;
    opgen_PUSH_PZ(param_1,&_LC109);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x21;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x21;
    opgen_FUNC(param_1,hf_accept_conn,"hf_accept_conn");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x22;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x22;
    opgen_PUSH_PZ(param_1,&_LC91);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x22;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x22;
    opgen_FUNC(param_1,hf_accept_conn_none,"hf_accept_conn_none");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x24;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x24;
    opgen_PUSH_PZ(param_1,&_LC109);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x24;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x24;
    opgen_PUSH_P(param_1,"apple");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x24;
    opgen_PUSH_SIZE(param_1,6);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x24;
    opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x25;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x25;
    opgen_PUSH_PZ(param_1,&_LC109);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x25;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x25;
    opgen_PUSH_P(param_1,"orange");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x25;
    opgen_PUSH_SIZE(param_1,7);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x25;
    opgen_FUNC(param_1,hf_write,"hf_write");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x26;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x26;
    opgen_PUSH_PZ(param_1,&_LC95);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x26;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x26;
    opgen_PUSH_P(param_1,"orange");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x26;
    opgen_PUSH_SIZE(param_1,7);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x26;
    opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
    if (bVar1) break;
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1b;
    opgen_FUNC(param_1,hf_clear,"hf_clear");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_PZ(param_1,&_LC91);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_U64(param_1,1);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_PZ(param_1,&_LC91);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_listen,"hf_listen");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_PZ(param_1,&_LC95);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_new_ssl,"hf_new_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_PZ(param_1,&_LC95);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_U64(param_1,1);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_PZ(param_1,&_LC91);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_set_peer_addr_from,"hf_set_peer_addr_from");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_U64(param_1,0);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_PUSH_PZ(param_1,&_LC95);
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
    *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
    *(undefined4 *)(param_1 + 0x14) = 0x1c;
    opgen_FUNC(param_1,hf_connect_wait,"hf_connect_wait");
    bVar1 = true;
  }
  return;
}



void script_gen_ssl_poll_child(long param_1)

{
  undefined8 *puVar1;
  
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x43;
  opgen_PUSH_U64(param_1,100);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x43;
  opgen_FUNC(param_1,hf_sleep,"hf_sleep");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x44;
  opgen_PUSH_U64(param_1,0);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x44;
  opgen_PUSH_PZ(param_1,&_LC99);
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x44;
  opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x44;
  opgen_PUSH_P(param_1,"extra");
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x44;
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
  }
  puVar1 = (undefined8 *)openc_alloc_space_constprop_0(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 6;
  }
  *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
  *(undefined4 *)(param_1 + 0x14) = 0x44;
  opgen_FUNC(param_1,hf_write,"hf_write");
  return;
}



bool hf_set_default_stream_mode(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar2 != 0) {
    uVar3 = (undefined4)**(undefined8 **)(lVar1 + 0x68);
    *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
  }
  else {
    uVar3 = 0;
  }
  iVar2 = test_true("test/radix/quic_ops.c",0x1bd,
                    "TERP_stk_pop((fctx->terp), &((mode)), sizeof((mode)))",iVar2 != 0);
  if (iVar2 != 0) {
    local_28 = 0;
    iVar2 = expect_slot_ssl_constprop_0(0,&local_28);
    iVar2 = test_true("test/radix/quic_ops.c",0x1be,"expect_slot_ssl(fctx, (0), &((ssl)))",
                      iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = SSL_set_default_stream_mode(local_28,uVar3);
      iVar2 = test_true("test/radix/quic_ops.c",0x1c0,
                        "SSL_set_default_stream_mode(ssl, (uint32_t)mode)",iVar2 != 0);
      bVar4 = iVar2 != 0;
      goto LAB_00103dc7;
    }
  }
  bVar4 = false;
LAB_00103dc7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hf_spawn_thread(long *param_1)

{
  long lVar1;
  int iVar2;
  void *ptr;
  BIO_METHOD *type;
  BIO *pBVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar2 != 0) {
    uVar4 = **(undefined8 **)(lVar1 + 0x68);
    *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
  }
  else {
    uVar4 = 0;
  }
  iVar2 = test_true("test/radix/quic_bindings.c",0x314,
                    "TERP_stk_pop((fctx->terp), &((script_info)), sizeof((script_info)))",iVar2 != 0
                   );
  if ((iVar2 != 0) &&
     (iVar2 = test_ptr("test/radix/quic_bindings.c",0x315,"script_info",uVar4), iVar2 != 0)) {
    ptr = (void *)RADIX_THREAD_new_constprop_0();
    iVar2 = test_ptr("test/radix/quic_bindings.c",0x31c,
                     "child_rt = RADIX_THREAD_new(&radix_process)",ptr);
    if (iVar2 != 0) {
      type = BIO_s_mem();
      pBVar3 = BIO_new(type);
      *(BIO **)((long)ptr + 0xb0) = pBVar3;
      iVar2 = test_ptr("test/radix/quic_bindings.c",799,"child_rt->debug_bio = BIO_new(BIO_s_mem())"
                       ,pBVar3);
      if (iVar2 != 0) {
        ossl_crypto_mutex_lock(*(undefined8 *)((long)ptr + 0xb8));
        *(undefined8 *)((long)ptr + 0xa8) = uVar4;
        uVar4 = ossl_crypto_thread_native_start(RADIX_THREAD_worker_main,ptr,1);
        *(undefined8 *)((long)ptr + 8) = uVar4;
        iVar2 = test_ptr("test/radix/quic_bindings.c",0x325,
                         "child_rt->t = ossl_crypto_thread_native_start(RADIX_THREAD_worker_main, child_rt, 1)"
                         ,uVar4);
        if (iVar2 != 0) {
          ossl_crypto_mutex_unlock(*(undefined8 *)((long)ptr + 0xb8));
          return 1;
        }
        ossl_crypto_mutex_unlock(*(undefined8 *)((long)ptr + 0xb8));
      }
      BIO_free_all(*(BIO **)((long)ptr + 0xb0));
      CRYPTO_free(*(void **)((long)ptr + 0x10));
      ossl_crypto_mutex_free((long)ptr + 0xb8);
      CRYPTO_free(ptr);
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_poll_check(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8 [4];
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined4 local_1a8 [2];
  undefined8 local_1a0 [15];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulong local_108 [27];
  
  lVar11 = *param_1;
  local_108[0x19] = *(long *)(in_FS_OFFSET + 0x28);
  local_210 = 0;
  lVar1 = *(long *)(lVar11 + 0x70);
  lVar2 = *(long *)(lVar11 + 0x68);
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  puVar9 = (undefined8 *)local_1c8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_108;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar4 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         lVar1 - lVar2,8);
  if (iVar4 != 0) {
    uVar12 = **(undefined8 **)(lVar11 + 0x68);
    *(undefined8 **)(lVar11 + 0x68) = *(undefined8 **)(lVar11 + 0x68) + 1;
  }
  else {
    uVar12 = 0;
  }
  iVar4 = test_true("test/radix/quic_tests.c",0x53,
                    "TERP_stk_pop((fctx->terp), &((mode)), sizeof((mode)))",iVar4 != 0);
  if (iVar4 != 0) {
    local_218 = 0;
    iVar4 = expect_slot_ssl_constprop_0(0,&local_218);
    iVar4 = test_true("test/radix/quic_tests.c",0x54,"expect_slot_ssl(fctx, (0), &((La)))",
                      iVar4 != 0);
    if (iVar4 != 0) {
      puVar9 = local_1e8;
      local_1e8[0] = 0;
      iVar4 = expect_slot_ssl_constprop_0(1,puVar9);
      iVar4 = test_true("test/radix/quic_tests.c",0x54,"expect_slot_ssl(fctx, (1), &((Lax[0])))",
                        iVar4 != 0);
      if (iVar4 != 0) {
        local_1e8[1] = 0;
        iVar4 = expect_slot_ssl_constprop_0(2,local_1e8 + 1);
        iVar4 = test_true("test/radix/quic_tests.c",0x54,"expect_slot_ssl(fctx, (2), &((Lax[1])))",
                          iVar4 != 0);
        if (iVar4 != 0) {
          local_1e8[2] = 0;
          iVar4 = expect_slot_ssl_constprop_0(3,local_1e8 + 2);
          iVar4 = test_true("test/radix/quic_tests.c",0x54,"expect_slot_ssl(fctx, (3), &((Lax[2])))"
                            ,iVar4 != 0);
          if (iVar4 != 0) {
            local_1e8[3] = 0;
            iVar4 = expect_slot_ssl_constprop_0(4,local_1e8 + 3);
            iVar4 = test_true("test/radix/quic_tests.c",0x54,
                              "expect_slot_ssl(fctx, (4), &((Lax[3])))",iVar4 != 0);
            if (iVar4 != 0) {
              local_1c8[0] = 2;
              local_1c0 = local_218;
              local_1b8 = (undefined1  [16])0x0;
              puVar5 = (undefined8 *)local_1c8;
              do {
                uVar3 = *puVar9;
                puVar5[6] = __LC140;
                puVar5[7] = _UNK_0010a358;
                puVar6 = puVar5 + 4;
                puVar9 = puVar9 + 1;
                *(undefined4 *)puVar6 = 2;
                puVar5[5] = uVar3;
                puVar5 = puVar6;
              } while (puVar6 != local_1a0 + 0xb);
              local_120 = SSL_get0_listener();
              local_128 = 2;
              switch(uVar12) {
              case 0:
              case 2:
                uVar12 = 0;
                puVar10 = local_208;
                break;
              case 1:
                local_1b8._0_8_ = 0x1800;
                puVar7 = local_108 + 7;
                local_108[3] = 0x1800;
                local_108[7] = 0x40;
                puVar9 = (undefined8 *)local_1c8;
                do {
                  puVar9[6] = puVar9[6] | 0x80;
                  puVar9 = puVar9 + 4;
                  *puVar7 = *puVar7 | 0x80;
                  puVar7 = puVar7 + 4;
                } while (puVar9 != local_1a0 + 0xb);
                uVar12 = 5;
                puVar10 = local_208;
                break;
              case 3:
                uVar12 = 1;
                puVar10 = local_1f8;
                local_108[7] = 0x40;
                local_1f8._8_8_ = _UNK_0010a368;
                local_1f8._0_8_ = __LC141;
                break;
              case 4:
                uVar12 = 1;
                puVar10 = local_208;
                local_118 = 0x100;
                local_108[0x17] = 0x100;
                break;
              default:
                goto switchD_001042bc_default;
              }
              local_210 = 0xffffffffffffffff;
              ossl_time_now();
              iVar4 = SSL_poll(local_1c8,6,0x20,puVar10,0,&local_210);
              iVar4 = test_true("test/radix/quic_tests.c",0x88,
                                "SSL_poll(items, OSSL_NELEM(items), sizeof(SSL_POLL_ITEM), p_timeout, 0, &result_count)"
                                ,iVar4 != 0);
              if (iVar4 != 0) {
                ossl_time_now();
                iVar4 = test_size_t_eq("test/radix/quic_tests.c",0x8d,"result_count",
                                       "expected_result_count",local_210,uVar12);
                if (iVar4 != 0) {
                  lVar11 = 0x18;
                  do {
                    iVar4 = test_uint64_t_eq("test/radix/quic_tests.c",0x91,"items[i].revents",
                                             "expected_items[i].revents",
                                             *(undefined8 *)((long)local_1c8 + lVar11),
                                             *(undefined8 *)((long)local_108 + lVar11));
                    if (iVar4 == 0) goto switchD_001042bc_default;
                    lVar11 = lVar11 + 0x20;
                  } while (lVar11 != 0xd8);
                  uVar12 = 1;
                  goto LAB_001040e3;
                }
              }
            }
          }
        }
      }
    }
  }
switchD_001042bc_default:
  uVar12 = 0;
LAB_001040e3:
  if (local_108[0x19] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



undefined8 hf_select_ssl(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  long local_40;
  
  lVar2 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar2 + 0x70) - *(long *)(lVar2 + 0x68),8);
  if (iVar1 != 0) {
    uVar4 = **(undefined8 **)(lVar2 + 0x68);
    *(undefined8 **)(lVar2 + 0x68) = *(undefined8 **)(lVar2 + 0x68) + 1;
  }
  else {
    uVar4 = 0;
  }
  iVar1 = test_true("test/radix/quic_ops.c",900,
                    "TERP_stk_pop(((fctx->terp)), &(((name))), sizeof(((name))))",iVar1 != 0);
  if (iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar2 + 0x70) - *(long *)(lVar2 + 0x68),8);
    if (iVar1 != 0) {
      iVar1 = 1;
      lVar5 = **(long **)(lVar2 + 0x68);
      *(long **)(lVar2 + 0x68) = *(long **)(lVar2 + 0x68) + 1;
    }
    iVar1 = test_true("test/radix/quic_ops.c",900,
                      "TERP_stk_pop(((fctx->terp)), &(((slot))), sizeof(((slot))))",iVar1);
    if (iVar1 != 0) {
      local_58[0] = uVar4;
      lVar2 = OPENSSL_LH_retrieve(DAT_00107c28,local_58);
      iVar1 = test_ptr("test/radix/quic_ops.c",0x385,"obj = RADIX_PROCESS_get_obj(RP(), name)",lVar2
                      );
      if (iVar1 != 0) {
        iVar1 = test_uint64_t_lt("test/radix/quic_ops.c",0x388,&_LC152,"NUM_SLOTS",lVar5,8);
        if (iVar1 != 0) {
          lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
          *(long *)(lVar3 + 0x28 + lVar5 * 8) = lVar2;
          lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
          *(undefined8 *)(lVar3 + 0x68 + lVar5 * 8) = *(undefined8 *)(lVar2 + 8);
          uVar4 = 1;
          goto LAB_001044ec;
        }
      }
    }
  }
  uVar4 = 0;
LAB_001044ec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool hf_write(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar3 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar3 != 0) {
    uVar6 = **(undefined8 **)(lVar1 + 0x68);
    *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
  }
  else {
    uVar6 = 0;
  }
  iVar3 = test_true("test/radix/quic_ops.c",0x22a,
                    "TERP_stk_pop(((fctx->terp)), &(((buf_len))), sizeof(((buf_len))))",iVar3 != 0);
  if (iVar3 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    iVar3 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
    if (iVar3 != 0) {
      iVar3 = 1;
      uVar5 = **(undefined8 **)(lVar1 + 0x68);
      *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
    }
    iVar3 = test_true("test/radix/quic_ops.c",0x22a,
                      "TERP_stk_pop(((fctx->terp)), &(((buf))), sizeof(((buf))))",iVar3);
    if (iVar3 != 0) {
      local_50 = 0;
      iVar3 = expect_slot_ssl_constprop_0(0,&local_50);
      iVar3 = test_true("test/radix/quic_ops.c",0x22b,"expect_slot_ssl(fctx, (0), &((ssl)))",
                        iVar3 != 0);
      uVar2 = local_50;
      if (iVar3 != 0) {
        iVar3 = SSL_write_ex(local_50,uVar5,uVar6,&local_48);
        iVar4 = test_true("test/radix/quic_ops.c",0x22e,&_LC78,iVar3 != 0);
        if (iVar4 != 0) {
          iVar3 = check_consistent_want(uVar2,iVar3);
          if (iVar3 != 0) {
            iVar3 = test_size_t_eq("test/radix/quic_ops.c",0x230,"bytes_written","buf_len",local_48,
                                   uVar6);
            bVar7 = iVar3 != 0;
            goto LAB_001046b5;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_001046b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hf_new_stream(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  SSL *ssl;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar2 != 0) {
    lVar5 = **(long **)(lVar1 + 0x68);
    *(long **)(lVar1 + 0x68) = *(long **)(lVar1 + 0x68) + 1;
  }
  else {
    lVar5 = 0;
  }
  iVar2 = test_true("test/radix/quic_ops.c",0x129,
                    "TERP_stk_pop(((fctx->terp)), &(((do_accept))), sizeof(((do_accept))))",
                    iVar2 != 0);
  if (iVar2 != 0) {
    lVar1 = *param_1;
    iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
    local_78 = 0;
    if (iVar2 != 0) {
      iVar2 = 1;
      local_78 = **(undefined8 **)(lVar1 + 0x68);
      *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
    }
    iVar2 = test_true("test/radix/quic_ops.c",0x129,
                      "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))",iVar2);
    if (iVar2 != 0) {
      lVar1 = *param_1;
      uVar4 = 0;
      iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                             *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
      if (iVar2 != 0) {
        iVar2 = 1;
        uVar4 = **(undefined8 **)(lVar1 + 0x68);
        *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
      }
      iVar2 = test_true("test/radix/quic_ops.c",0x12a,
                        "TERP_stk_pop((fctx->terp), &((stream_name)), sizeof((stream_name)))",iVar2)
      ;
      if (iVar2 != 0) {
        local_60 = 0;
        iVar2 = expect_slot_ssl_constprop_0(0,&local_60);
        iVar2 = test_true("test/radix/quic_ops.c",299,"expect_slot_ssl(fctx, (0), &((conn)))",
                          iVar2 != 0);
        if (iVar2 != 0) {
          local_58[0] = uVar4;
          uVar3 = OPENSSL_LH_retrieve(DAT_00107c28,local_58);
          iVar2 = test_ptr_null("test/radix/quic_ops.c",0x12d,
                                "RADIX_PROCESS_get_obj(RP(), stream_name)",uVar3);
          if (iVar2 != 0) {
            if (lVar5 == 0) {
              ssl = (SSL *)SSL_new_stream(local_60,local_78);
              iVar2 = test_ptr("test/radix/quic_ops.c",0x139,"stream",ssl);
              if (iVar2 != 0) {
                if (ssl != (SSL *)0x0) goto LAB_00104a39;
LAB_00104a67:
                uVar4 = 1;
                goto LAB_001048a0;
              }
            }
            else {
              ssl = (SSL *)SSL_accept_stream();
              if (ssl == (SSL *)0x0) {
                *(undefined4 *)(param_1 + 1) = 1;
                uVar4 = 2;
                goto LAB_001048a0;
              }
              iVar2 = test_ptr("test/radix/quic_ops.c",0x139,"stream",ssl);
              if (iVar2 != 0) {
LAB_00104a39:
                iVar2 = RADIX_PROCESS_set_ssl_constprop_0(uVar4,ssl);
                iVar2 = test_true("test/radix/quic_ops.c",0x13f,
                                  "RADIX_PROCESS_set_ssl(RP(), stream_name, stream)",iVar2 != 0);
                if (iVar2 != 0) goto LAB_00104a67;
                SSL_free(ssl);
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_001048a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 hf_accept_conn(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  SSL *ssl;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar2 != 0) {
    uVar4 = **(undefined8 **)(lVar1 + 0x68);
    *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
  }
  else {
    uVar4 = 0;
  }
  iVar2 = test_true("test/radix/quic_ops.c",0x150,
                    "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))",iVar2 != 0);
  if (iVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
    if (iVar2 != 0) {
      iVar2 = 1;
      uVar5 = **(undefined8 **)(lVar1 + 0x68);
      *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
    }
    iVar2 = test_true("test/radix/quic_ops.c",0x150,
                      "TERP_stk_pop(((fctx->terp)), &(((conn_name))), sizeof(((conn_name))))",iVar2)
    ;
    if (iVar2 != 0) {
      local_60 = 0;
      iVar2 = expect_slot_ssl_constprop_0(0,&local_60);
      iVar2 = test_true("test/radix/quic_ops.c",0x151,"expect_slot_ssl(fctx, (0), &((listener)))",
                        iVar2 != 0);
      if (iVar2 != 0) {
        local_58[0] = uVar5;
        uVar3 = OPENSSL_LH_retrieve(DAT_00107c28,local_58);
        iVar2 = test_ptr_null("test/radix/quic_ops.c",0x153,"RADIX_PROCESS_get_obj(RP(), conn_name)"
                              ,uVar3);
        if (iVar2 != 0) {
          ssl = (SSL *)SSL_accept_connection(local_60,uVar4);
          if (ssl == (SSL *)0x0) {
            *(undefined4 *)(param_1 + 1) = 1;
            uVar4 = 2;
            goto LAB_00104bac;
          }
          iVar2 = RADIX_PROCESS_set_ssl_constprop_0(uVar5,ssl);
          iVar2 = test_true("test/radix/quic_ops.c",0x15a,
                            "RADIX_PROCESS_set_ssl(RP(), conn_name, conn)",iVar2 != 0);
          if (iVar2 == 0) goto LAB_00104df8;
          if (check_pending_match != 0) {
            if ((pending_cb_called != 0) && (hello_cb_called != 0)) {
              iVar2 = test_ptr_eq("test/radix/quic_ops.c",0x163,"pending_ssl_obj",
                                  "client_hello_ssl_obj",pending_ssl_obj,client_hello_ssl_obj);
              if (iVar2 != 0) {
                iVar2 = test_ptr_eq("test/radix/quic_ops.c",0x167,"pending_ssl_obj",&_LC39,
                                    pending_ssl_obj,ssl);
                if (iVar2 != 0) goto LAB_00104d62;
              }
LAB_00104df8:
              SSL_free(ssl);
              goto LAB_00104baa;
            }
            test_info("test/radix/quic_ops.c",0x161,
                      "Callbacks not called, skipping user_ssl check\n");
LAB_00104d62:
            client_hello_ssl_obj = 0;
            pending_ssl_obj = 0;
            check_pending_match = 0;
            hello_cb_called = 0;
            pending_cb_called = 0;
          }
          uVar4 = 1;
          goto LAB_00104bac;
        }
      }
    }
  }
LAB_00104baa:
  uVar4 = 0;
LAB_00104bac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hf_read_expect(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  lVar4 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar4 + 0x70) - *(long *)(lVar4 + 0x68),8);
  if (iVar2 != 0) {
    lVar9 = **(long **)(lVar4 + 0x68);
    *(long **)(lVar4 + 0x68) = *(long **)(lVar4 + 0x68) + 1;
  }
  else {
    lVar9 = 0;
  }
  iVar2 = test_true("test/radix/quic_ops.c",0x269,
                    "TERP_stk_pop(((fctx->terp)), &(((buf_len))), sizeof(((buf_len))))",iVar2 != 0);
  if (iVar2 != 0) {
    lVar4 = *param_1;
    uVar7 = 0;
    iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar4 + 0x70) - *(long *)(lVar4 + 0x68),8);
    if (iVar2 != 0) {
      iVar2 = 1;
      uVar7 = **(undefined8 **)(lVar4 + 0x68);
      *(undefined8 **)(lVar4 + 0x68) = *(undefined8 **)(lVar4 + 0x68) + 1;
    }
    iVar2 = test_true("test/radix/quic_ops.c",0x269,
                      "TERP_stk_pop(((fctx->terp)), &(((buf))), sizeof(((buf))))",iVar2);
    if (iVar2 != 0) {
      local_50 = 0;
      iVar2 = expect_slot_ssl_constprop_0(0,&local_50);
      iVar2 = test_true("test/radix/quic_ops.c",0x26a,"expect_slot_ssl(fctx, (0), &((ssl)))",
                        iVar2 != 0);
      if (iVar2 != 0) {
        if ((lVar9 != 0) &&
           (lVar4 = CRYPTO_THREAD_get_local(&radix_thread), *(long *)(lVar4 + 0x10) == 0)) {
          lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
          pvVar8 = CRYPTO_malloc((int)lVar9,"test/radix/quic_ops.c",0x26d);
          *(void **)(lVar4 + 0x10) = pvVar8;
          iVar2 = test_ptr("test/radix/quic_ops.c",0x26d,"RT()->tmp_buf = OPENSSL_malloc(buf_len)",
                           pvVar8);
          if (iVar2 == 0) goto LAB_00104ea3;
        }
        lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
        lVar4 = *(long *)(lVar4 + 0x18);
        lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
        lVar5 = *(long *)(lVar5 + 0x10);
        lVar6 = CRYPTO_THREAD_get_local(&radix_thread);
        uVar1 = local_50;
        iVar2 = SSL_read_ex(local_50,*(long *)(lVar6 + 0x18) + lVar5,lVar9 - lVar4,&local_48);
        iVar3 = check_consistent_want(uVar1,iVar2);
        iVar3 = test_true("test/radix/quic_ops.c",0x273,"check_consistent_want(ssl, r)",iVar3 != 0);
        if (iVar3 != 0) {
          if (iVar2 != 0) {
            lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
            if (local_48 + *(long *)(lVar4 + 0x18) == lVar9) {
              if (lVar9 != 0) {
                lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                iVar2 = test_mem_eq("test/radix/quic_ops.c",0x27f,"RT()->tmp_buf",&_LC171,
                                    *(undefined8 *)(lVar4 + 0x10),lVar9,uVar7,lVar9);
                if (iVar2 == 0) goto LAB_00104ea3;
              }
              lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
              CRYPTO_free(*(void **)(lVar4 + 0x10));
              lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
              *(undefined8 *)(lVar4 + 0x10) = 0;
              lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
              *(undefined8 *)(lVar4 + 0x18) = 0;
              uVar7 = 1;
              goto LAB_00104ea5;
            }
            lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
            *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + local_48;
          }
          *(undefined4 *)(param_1 + 1) = 1;
          uVar7 = 2;
          goto LAB_00104ea5;
        }
      }
    }
  }
LAB_00104ea3:
  uVar7 = 0;
LAB_00104ea5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 hf_new_ssl(long *param_1)

{
  long lVar1;
  int iVar2;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *param_1;
  iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                         *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
  if (iVar2 != 0) {
    uVar6 = (uint)**(undefined8 **)(lVar1 + 0x68);
    *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
  }
  else {
    uVar6 = 0;
  }
  iVar2 = test_true("test/radix/quic_ops.c",0xbf,
                    "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))",iVar2 != 0);
  if (iVar2 != 0) {
    lVar1 = *param_1;
    uVar4 = 0;
    iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68),8);
    if (iVar2 != 0) {
      iVar2 = 1;
      uVar4 = **(undefined8 **)(lVar1 + 0x68);
      *(undefined8 **)(lVar1 + 0x68) = *(undefined8 **)(lVar1 + 0x68) + 1;
    }
    iVar2 = test_true("test/radix/quic_ops.c",0xbf,
                      "TERP_stk_pop(((fctx->terp)), &(((name))), sizeof(((name))))",iVar2);
    if (iVar2 != 0) {
      uVar5 = uVar6 & 1;
      if (uVar5 == 0) {
        meth = (SSL_METHOD *)OSSL_QUIC_client_method();
      }
      else {
        meth = (SSL_METHOD *)OSSL_QUIC_server_method();
      }
      ctx = SSL_CTX_new(meth);
      iVar2 = test_ptr("test/radix/quic_ops.c",0xc5,"ctx = SSL_CTX_new(method)",ctx);
      if (iVar2 != 0) {
        iVar2 = SSL_CTX_set_domain_flags(ctx,10);
        iVar2 = test_true("test/radix/quic_ops.c",0xc9,
                          "SSL_CTX_set_domain_flags(ctx, SSL_DOMAIN_FLAG_MULTI_THREAD | SSL_DOMAIN_FLAG_BLOCKING)"
                          ,iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = ossl_quic_set_diag_title(ctx,"quic_radix_test");
          iVar2 = test_true("test/radix/quic_ops.c",0x34,
                            "ossl_quic_set_diag_title(ctx, \"quic_radix_test\")",iVar2 != 0);
          if (iVar2 == 0) {
LAB_001053b0:
            uVar3 = 0;
          }
          else {
            if (uVar5 != 0) {
              if (DAT_00107c38 != 0) {
                SSL_CTX_set_keylog_callback(ctx,keylog_cb);
              }
              iVar2 = SSL_CTX_use_certificate_file(ctx,cert_file,1);
              iVar2 = test_int_eq("test/radix/quic_ops.c",0x3d,
                                  "SSL_CTX_use_certificate_file(ctx, cert_file, SSL_FILETYPE_PEM)",
                                  &_LC76,iVar2,1);
              if (iVar2 != 0) {
                iVar2 = SSL_CTX_use_PrivateKey_file(ctx,key_file,1);
                iVar2 = test_int_eq("test/radix/quic_ops.c",0x3f,
                                    "SSL_CTX_use_PrivateKey_file(ctx, key_file, SSL_FILETYPE_PEM)",
                                    &_LC76,iVar2,1);
                if (iVar2 != 0) {
                  SSL_CTX_set_alpn_select_cb(ctx,ssl_ctx_select_alpn,0);
                  goto LAB_001053a8;
                }
              }
              goto LAB_001053b0;
            }
LAB_001053a8:
            uVar3 = 1;
          }
          iVar2 = test_true("test/radix/quic_ops.c",0xcf,"ssl_ctx_configure(ctx, is_server)",uVar3);
          if (iVar2 != 0) {
            if ((uVar6 & 2) == 0) {
              if (uVar5 == 0) {
                ssl = SSL_new(ctx);
                iVar2 = test_ptr("test/radix/quic_ops.c",0xdd,"ssl = SSL_new(ctx)",ssl);
                if (iVar2 == 0) {
                  uVar3 = 0;
                  goto LAB_001051ba;
                }
              }
              else {
                SSL_CTX_set_new_pending_conn_cb(ctx,new_pending_cb,0);
                SSL_CTX_set_client_hello_cb(ctx,client_hello_cb,0);
                check_pending_match = 1;
                ssl = (SSL *)SSL_new_listener(ctx,0);
                iVar2 = test_ptr("test/radix/quic_ops.c",0xda,"ssl = SSL_new_listener(ctx, 0)",ssl);
                if (iVar2 == 0) goto LAB_00105280;
              }
              iVar2 = ssl_attach_bio_dgram_constprop_0(ssl);
              iVar2 = test_true("test/radix/quic_ops.c",0xe1,"ssl_attach_bio_dgram(ssl, 0, NULL)",
                                iVar2 != 0);
              if (iVar2 == 0) goto LAB_00105280;
            }
            else {
              ssl = (SSL *)SSL_new_domain(ctx,0);
              iVar2 = test_ptr("test/radix/quic_ops.c",0xd3,"ssl = SSL_new_domain(ctx, 0)",ssl);
              if (iVar2 == 0) {
                uVar3 = 0;
                goto LAB_001051ba;
              }
            }
            uVar3 = 1;
            iVar2 = RADIX_PROCESS_set_ssl_constprop_0(uVar4,ssl);
            iVar2 = test_true("test/radix/quic_ops.c",0xe4,"RADIX_PROCESS_set_ssl(RP(), name, ssl)",
                              iVar2 != 0);
            if (iVar2 == 0) {
              uVar3 = 0;
              SSL_free(ssl);
            }
            goto LAB_001051ba;
          }
        }
      }
LAB_00105280:
      uVar3 = 0;
      goto LAB_001051ba;
    }
  }
  ctx = (SSL_CTX *)0x0;
  uVar3 = 0;
LAB_001051ba:
  SSL_CTX_free(ctx);
  return uVar3;
}



undefined8 hf_new_ssl_listener_from(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  SSL *ssl;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  iVar2 = expect_slot_ssl_constprop_0(0,&local_60);
  iVar2 = test_true("test/radix/quic_ops.c",0xf7,"expect_slot_ssl(fctx, (0), &((domain)))",
                    iVar2 != 0);
  if (iVar2 != 0) {
    lVar4 = *param_1;
    iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                           *(long *)(lVar4 + 0x70) - *(long *)(lVar4 + 0x68),8);
    local_70 = 0;
    if (iVar2 != 0) {
      iVar2 = 1;
      local_70 = **(undefined8 **)(lVar4 + 0x68);
      *(undefined8 **)(lVar4 + 0x68) = *(undefined8 **)(lVar4 + 0x68) + 1;
    }
    iVar2 = test_true("test/radix/quic_ops.c",0xf8,
                      "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))",iVar2);
    if (iVar2 != 0) {
      lVar4 = *param_1;
      uVar5 = 0;
      iVar2 = test_size_t_ge("test/radix/terp.c",0x275,"terp->stk_end - terp->stk_cur","buf_len",
                             *(long *)(lVar4 + 0x70) - *(long *)(lVar4 + 0x68),8);
      if (iVar2 != 0) {
        iVar2 = 1;
        uVar5 = **(undefined8 **)(lVar4 + 0x68);
        *(undefined8 **)(lVar4 + 0x68) = *(undefined8 **)(lVar4 + 0x68) + 1;
      }
      iVar2 = test_true("test/radix/quic_ops.c",0xf8,
                        "TERP_stk_pop(((fctx->terp)), &(((listener_name))), sizeof(((listener_name))))"
                        ,iVar2);
      if (iVar2 != 0) {
        local_58[0] = uVar5;
        uVar3 = OPENSSL_LH_retrieve(DAT_00107c28,local_58);
        iVar2 = test_ptr_null("test/radix/quic_ops.c",0xfa,
                              "RADIX_PROCESS_get_obj(RP(), listener_name)",uVar3);
        if (iVar2 != 0) {
          ssl = (SSL *)SSL_new_listener_from(local_60,local_70);
          iVar2 = test_ptr("test/radix/quic_ops.c",0xfd,
                           "listener = SSL_new_listener_from(domain, flags)",ssl);
          if (iVar2 != 0) {
            iVar2 = ssl_attach_bio_dgram_constprop_0(ssl);
            iVar2 = test_true("test/radix/quic_ops.c",0x100,
                              "ssl_attach_bio_dgram(listener, 0, NULL)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = RADIX_PROCESS_set_ssl_constprop_0(uVar5,ssl);
              iVar2 = test_true("test/radix/quic_ops.c",0x103,
                                "RADIX_PROCESS_set_ssl(RP(), listener_name, listener)",iVar2 != 0);
              if (iVar2 != 0) {
                lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                if (*(long *)(lVar4 + 0x28) != 0) {
                  pbVar1 = (byte *)(*(long *)(lVar4 + 0x28) + 0x10);
                  *pbVar1 = *pbVar1 | 2;
                }
                uVar5 = 1;
                goto LAB_00105582;
              }
              SSL_free(ssl);
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_00105582:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 SRDR_print_one(long *param_1,BIO *param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  lVar6 = param_1[1];
  iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                         param_1[2] - lVar6,8);
  if (iVar1 == 0) {
    iVar1 = test_true("test/radix/terp.c",0x187,"SRDR_get_operand(srdr, &(opc), sizeof(opc))",0);
    uVar4 = 0;
    if (iVar1 == 0) {
      return 0;
    }
switchD_00105870_caseD_0:
    test_error("test/radix/terp.c",0x1d3,"unsupported opcode while printing: %llu",uVar4);
    return 0;
  }
  uVar4 = *(undefined8 *)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  iVar1 = test_true("test/radix/terp.c",0x187,"SRDR_get_operand(srdr, &(opc), sizeof(opc))",1);
  if (iVar1 == 0) {
    return 0;
  }
  switch(uVar4) {
  default:
    goto switchD_00105870_caseD_0;
  case 1:
    if (param_3 == -1) {
      BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,&_LC193);
    }
    else {
      BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,&_LC193);
    }
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    *param_4 = 1;
    return 1;
  case 2:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x196,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 != 0) {
      if (param_3 == -1) {
        BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,"PUSH_P");
      }
      else {
        BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,"PUSH_P");
      }
      BIO_printf(param_2,"%20p",uVar4);
      return 1;
    }
    break;
  case 3:
    pcVar5 = (char *)0x0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      pcVar5 = *(char **)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x19f,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 != 0) {
      if (param_3 == -1) {
        BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,"PUSH_PZ");
      }
      else {
        BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,"PUSH_PZ");
      }
      if ((pcVar5 != (char *)0x0) && (sVar2 = strlen(pcVar5), sVar2 == 1)) {
        BIO_printf(param_2,"%20p (%s)",pcVar5,pcVar5);
        return 1;
      }
      BIO_printf(param_2,"%20p (\"%s\")",pcVar5,pcVar5);
      return 1;
    }
    break;
  case 4:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x1ab,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar6 = lVar6 - *param_1;
    pcVar5 = "PUSH_U64";
    pcVar3 = "PUSH_U64";
    if (param_3 == -1) {
LAB_00105b1c:
      BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6,pcVar3);
      goto LAB_00105a8b;
    }
    goto LAB_00105a75;
  case 5:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x1b5,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar6 = lVar6 - *param_1;
    if (param_3 == -1) {
      pcVar3 = "PUSH_SIZE";
      goto LAB_00105b1c;
    }
    pcVar5 = "PUSH_SIZE";
LAB_00105a75:
    BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6,pcVar5);
LAB_00105a8b:
    BIO_printf(param_2,"%#20llx (%llu)",uVar4,uVar4);
    return 1;
  case 6:
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      param_1[1] = param_1[1] + 8;
      iVar1 = 1;
    }
    iVar1 = test_true("test/radix/terp.c",0x1c0,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 != 0) {
      uVar4 = 0;
      iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                             param_1[2] - param_1[1],8);
      if (iVar1 != 0) {
        iVar1 = 1;
        uVar4 = *(undefined8 *)param_1[1];
        param_1[1] = (long)((undefined8 *)param_1[1] + 1);
      }
      iVar1 = test_true("test/radix/terp.c",0x1c1,
                        "SRDR_get_operand(srdr, &(f_name), sizeof(f_name))",iVar1);
      if (iVar1 != 0) {
        if (param_3 == -1) {
          BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,&_LC206);
        }
        else {
          BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,&_LC206);
        }
        BIO_printf(param_2,"%s",uVar4);
        return 1;
      }
    }
    break;
  case 7:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x1cc,"SRDR_get_operand(srdr, &(l_name), sizeof(l_name))",
                      iVar1);
    if (iVar1 != 0) {
      BIO_printf(param_2,"\n%s:\n",uVar4);
      if (param_3 != -1) {
        BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,"LABEL");
        return 1;
      }
      BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,"LABEL");
      return 1;
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

int TERP_run_constprop_0(BIO *param_1,undefined8 *param_2)

{
  BIO *bio;
  undefined1 auVar1 [16];
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long in_FS_OFFSET;
  BIO *pBVar14;
  long local_158;
  undefined8 local_140;
  undefined1 local_128 [16];
  undefined8 *local_118;
  undefined8 *puStack_110;
  long local_108;
  undefined8 *puStack_100;
  BIO *local_f8;
  BIO *pBStack_f0;
  undefined8 *local_e8;
  code *pcStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  BIO *local_c8;
  long *plStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 *puStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  BIO **local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  bio = (BIO *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = (undefined1  [16])0x0;
  test_info("test/radix/terp.c",0x20f,"%s: script \'%s\' (%s)","generating script",param_1->method,
            param_1->callback);
  pBStack_f0 = (BIO *)0x0;
  local_e8 = (undefined8 *)0x0;
  pcStack_e0 = (code *)0x0;
  uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
  local_b8 = (undefined8 *)0x0;
  local_c8 = (BIO *)0x0;
  plStack_c0 = (long *)0x0;
  local_f8 = param_1;
  iVar5 = test_true("test/radix/terp.c",0x132,"GEN_CTX_init(&gctx, script_info)",1);
  if (iVar5 == 0) {
LAB_00105fdd:
    uVar11 = 0;
  }
  else {
    (**(code **)&param_1->flags)(&local_f8);
    puVar8 = (undefined8 *)openc_alloc_space_constprop_0(&local_f8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 1;
    }
    iVar5 = test_false("test/radix/terp.c",0x138,"gctx.error",(int)local_e8 != 0);
    if (iVar5 == 0) {
LAB_00105fb9:
      if ((int)local_e8 != 0) {
        test_error("test/radix/terp.c",0x142,"script generation failed: %s (at %s:%d)",pcStack_e0,
                   local_d8,uStack_d0 & 0xffffffff);
      }
      CRYPTO_free(local_c8);
      goto LAB_00105fdd;
    }
    local_b8 = (undefined8 *)0x0;
    local_128._8_8_ = (long)plStack_c0 - (long)local_c8;
    local_128._0_8_ = local_c8;
    local_c8 = (BIO *)0x0;
    plStack_c0 = (long *)0x0;
    iVar5 = test_true("test/radix/terp.c",0x13b,"GEN_CTX_finish(&gctx, gen_script)",1);
    uVar11 = 1;
    if (iVar5 == 0) goto LAB_00105fb9;
  }
  iVar5 = test_true("test/radix/terp.c",0x344,"GEN_SCRIPT_init(&gen_script, script_info)",uVar11);
  if (iVar5 == 0) {
    test_error("test/radix/terp.c",0x20c,"%s: script \'%s\' (%s)","error while generating script",
               param_1->method,param_1->callback);
  }
  else {
    lVar13 = 0;
    local_118 = (undefined8 *)((ulong)local_118 & 0xffffffff00000000);
    local_e8 = (undefined8 *)((long)(BIO_METHOD **)local_128._0_8_ + local_128._8_8_);
    pcStack_e0 = (code *)0x0;
    local_f8 = (BIO *)local_128._0_8_;
    pBStack_f0 = (BIO *)local_128._0_8_;
    BIO_printf(bio,"\nGenerated script for \'%s\':\n",param_1->method);
    BIO_printf(bio,"\n--GENERATED-----------------------------------------------------------\n");
    BIO_printf(bio,"  # NAME:\n  #   %s\n",param_1->method);
    BIO_printf(bio,"  # SOURCE:\n  #   %s:%d\n",param_1->cb_arg,(ulong)(uint)param_1->init);
    BIO_printf(bio,"  # DESCRIPTION:\n  #   %s\n",param_1->callback);
    do {
      BIO_printf(bio,"\n");
      iVar5 = SRDR_print_one(&local_f8,bio,lVar13,&local_118);
      iVar5 = test_true("test/radix/terp.c",0x1f6,"SRDR_print_one(srdr, bio, i, &was_end)",
                        iVar5 != 0);
      pBVar14 = pBStack_f0;
      if (iVar5 == 0) {
        uVar6 = 0;
        goto LAB_00106112;
      }
      lVar13 = lVar13 + 1;
    } while ((int)local_118 == 0);
    BIO_printf(bio,"\n");
    if (lVar13 == -1) {
      BIO_printf(bio,"      %4zx>\t%-8s \t",(long)pBVar14 - (long)local_f8,&_LC225);
    }
    else {
      BIO_printf(bio,"%3zu-  %4zx>\t%-8s \t",lVar13,(long)pBVar14 - (long)local_f8,&_LC225);
    }
    BIO_printf(bio,"\n----------------------------------------------------------------------\n\n");
    uVar6 = 1;
LAB_00106112:
    iVar5 = test_true("test/radix/terp.c",0x34b,
                      "GEN_SCRIPT_print(&gen_script, debug_bio, script_info)",uVar6);
    if (iVar5 == 0) {
      test_error("test/radix/terp.c",0x20c,"%s: script \'%s\' (%s)","error while printing script",
                 param_1->method,param_1->callback);
    }
    else {
      puVar8 = param_2;
      iVar5 = test_true("test/radix/terp.c",0x232,"cfg->now_cb != NULL",param_2[1] != 0);
      if (iVar5 != 0) {
        local_d8 = param_2[4];
        uStack_d0 = param_2[5];
        puVar8 = (undefined8 *)param_2[2];
        pcStack_e0 = (code *)param_2[3];
        plStack_c0 = (long *)local_128;
        local_f8 = (BIO *)*param_2;
        pBStack_f0 = (BIO *)param_2[1];
        local_70 = 0;
        local_68 = 0;
        local_60 = 1;
        local_98 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        if (uStack_d0 == 0) {
          uStack_d0 = 3000000000;
        }
        iVar5 = 1;
        local_e8 = puVar8;
        local_78 = &local_f8;
        local_c8 = param_1;
      }
      iVar5 = test_true("test/radix/terp.c",0x352,"TERP_init(&terp, cfg, script_info, &gen_script)",
                        iVar5);
      if (iVar5 != 0) {
        test_info("test/radix/terp.c",0x20f,"%s: script \'%s\' (%s)","executing script",
                  param_1->method,param_1->callback,puVar8);
        local_b8 = (undefined8 *)*plStack_c0;
        puStack_a0 = (undefined8 *)0x0;
        local_a8 = (long)local_b8 + plStack_c0[1];
        pBVar14 = local_f8;
        puStack_b0 = local_b8;
        local_58 = (*(code *)pBStack_f0)(local_e8);
        local_50 = local_58 + uStack_d0;
        if (CARRY8(local_58,uStack_d0)) {
          local_50 = 0xffffffffffffffff;
        }
        lVar13 = 0;
        bVar2 = false;
        local_158 = 0;
LAB_001062c5:
        if (local_60 != 0) {
          local_118 = local_b8;
          puStack_110 = puStack_b0;
          local_108 = local_a8;
          puStack_100 = puStack_a0;
          if (!bVar2) {
            BIO_printf(pBVar14,
                       "\n--EXECUTION-----------------------------------------------------------\n")
            ;
          }
          if (lVar13 != 0) {
            BIO_printf(local_f8,"           \t\t(span %zu times)\n",lVar13);
          }
          iVar5 = SRDR_print_one(&local_118,pBVar14,0xffffffffffffffff,0);
          iVar5 = test_true("test/radix/terp.c",0x2b4,
                            "SRDR_print_one(&srdr_copy, debug_bio, SIZE_MAX, NULL)",iVar5 != 0);
          if (iVar5 == 0) {
            BIO_printf(pBVar14,
                       "----------------------------------------------------------------------\n");
            goto LAB_00106449;
          }
          BIO_printf(pBVar14,"\n");
          bVar2 = true;
        }
        uVar11 = 0;
        iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                               local_a8 - (long)puStack_b0);
        if (iVar5 != 0) {
          iVar5 = 1;
          uVar11 = *puStack_b0;
          puStack_b0 = puStack_b0 + 1;
        }
        iVar5 = test_true("test/radix/terp.c",0x2ba,
                          "SRDR_get_operand(&terp->srdr, &((opc)), sizeof((opc)))",iVar5);
        if (iVar5 == 0) goto joined_r0x0010719e;
        local_158 = local_158 + 1;
        local_68 = local_68 + 1;
        puStack_a0 = puStack_b0;
        local_88._8_8_ = local_98._8_8_;
        uVar9 = (*(code *)pBStack_f0)(local_e8);
        if (local_50 <= uVar9) {
          lVar13 = 0;
LAB_00106402:
          test_error("test/radix/terp.c",0x2c4,"timed out while executing op %zu",local_158);
joined_r0x00106432:
          if ((local_60 != 0) && (lVar13 != 0)) {
            BIO_printf(local_f8,"           \t\t(span %zu times)\n",lVar13);
          }
          goto joined_r0x0010719e;
        }
        if (pcStack_e0 != (code *)0x0) {
          iVar5 = (*pcStack_e0)(&local_f8,local_d8);
          iVar5 = test_true("test/radix/terp.c",0x2cb,
                            "terp->cfg.per_op_cb(terp, terp->cfg.per_op_cb_arg)",iVar5 != 0);
          if (iVar5 == 0) {
            lVar13 = 0;
LAB_001067da:
            test_error("test/radix/terp.c",0x2cc,"pre-operation processing failed at op %zu",
                       local_158);
            goto joined_r0x00106432;
          }
        }
        switch(uVar11) {
        default:
          test_error("test/radix/terp.c",800,"unknown opcode: %llu",uVar11);
          goto joined_r0x0010719e;
        case 1:
joined_r0x00107124:
          if (bVar2) {
            BIO_printf(pBVar14,
                       "----------------------------------------------------------------------\n");
          }
          uVar9 = ERR_peek_last_error();
          if (uVar9 != 0) {
            test_info("test/radix/terp.c",0x332,"WARNING: errors on error stack despite success:");
            ERR_print_errors(local_f8);
            BIO_printf(pBVar14,"\n");
          }
          iVar5 = 1;
          lVar13 = local_98._8_8_;
          if (local_88._0_8_ != local_98._8_8_) {
            iVar5 = 0;
            test_error("test/radix/terp.c",0x35d,"stack not empty: %zu bytes left",
                       local_88._0_8_ - local_98._8_8_);
            lVar13 = local_88._0_8_;
          }
          goto LAB_0010649c;
        case 2:
        case 3:
          uVar11 = 0;
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            iVar5 = 1;
            uVar11 = *puStack_b0;
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2da,
                            "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
          if (iVar5 == 0) goto joined_r0x0010719e;
          uVar4 = local_88._0_8_;
          uVar9 = local_88._0_8_ - local_98._0_8_;
          if (uVar9 < 8) {
            lVar13 = uVar9 * 2;
            if (uVar9 == 0) {
              lVar13 = 0x100;
            }
            uVar3 = local_98._8_8_;
            pvVar10 = CRYPTO_realloc((void *)local_98._0_8_,(int)lVar13,"test/radix/terp.c",0x25d);
            iVar5 = test_ptr("test/radix/terp.c",0x25e,&_LC11,pvVar10);
            if (iVar5 != 0) {
              local_88._0_8_ = (long)pvVar10 + lVar13;
              local_98._8_8_ = ((long)pvVar10 + lVar13) - (uVar4 - uVar3);
              local_98._0_8_ = pvVar10;
              goto LAB_001069dd;
            }
          }
          else {
LAB_001069dd:
            iVar5 = 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x26a,"TERP_stk_ensure_capacity(terp, buf_len)",
                            iVar5);
          if (iVar5 != 0) {
            uVar4 = local_98._8_8_;
            local_98._8_8_ = local_98._8_8_ + -8;
            *(undefined8 *)(uVar4 + -8) = uVar11;
          }
          iVar5 = test_true("test/radix/terp.c",0x2db,"TERP_stk_push((terp), &(v), sizeof(v))");
          break;
        case 4:
          uVar11 = 0;
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            iVar5 = 1;
            uVar11 = *puStack_b0;
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2e2,
                            "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
          if (iVar5 == 0) goto joined_r0x0010719e;
          uVar4 = local_88._0_8_;
          uVar9 = local_88._0_8_ - local_98._0_8_;
          if (uVar9 < 8) {
            lVar13 = uVar9 * 2;
            if (uVar9 == 0) {
              lVar13 = 0x100;
            }
            uVar3 = local_98._8_8_;
            pvVar10 = CRYPTO_realloc((void *)local_98._0_8_,(int)lVar13,"test/radix/terp.c",0x25d);
            iVar5 = test_ptr("test/radix/terp.c",0x25e,&_LC11,pvVar10);
            if (iVar5 != 0) {
              local_88._0_8_ = (long)pvVar10 + lVar13;
              local_98._8_8_ = ((long)pvVar10 + lVar13) - (uVar4 - uVar3);
              local_98._0_8_ = pvVar10;
              goto LAB_00106bcd;
            }
          }
          else {
LAB_00106bcd:
            iVar5 = 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x26a,"TERP_stk_ensure_capacity(terp, buf_len)",
                            iVar5);
          if (iVar5 != 0) {
            uVar4 = local_98._8_8_;
            local_98._8_8_ = local_98._8_8_ + -8;
            *(undefined8 *)(uVar4 + -8) = uVar11;
          }
          iVar5 = test_true("test/radix/terp.c",0x2e3,"TERP_stk_push((terp), &(v), sizeof(v))");
          break;
        case 5:
          uVar11 = 0;
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            iVar5 = 1;
            uVar11 = *puStack_b0;
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2ea,
                            "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
          if (iVar5 == 0) goto joined_r0x0010719e;
          uVar4 = local_88._0_8_;
          uVar9 = local_88._0_8_ - local_98._0_8_;
          if (uVar9 < 8) {
            lVar13 = uVar9 * 2;
            if (uVar9 == 0) {
              lVar13 = 0x100;
            }
            uVar3 = local_98._8_8_;
            pvVar10 = CRYPTO_realloc((void *)local_98._0_8_,(int)lVar13,"test/radix/terp.c",0x25d);
            iVar5 = test_ptr("test/radix/terp.c",0x25e,&_LC11,pvVar10);
            if (iVar5 != 0) {
              local_88._0_8_ = (long)pvVar10 + lVar13;
              local_98._8_8_ = ((long)pvVar10 + lVar13) - (uVar4 - uVar3);
              local_98._0_8_ = pvVar10;
              goto LAB_00106db2;
            }
          }
          else {
LAB_00106db2:
            iVar5 = 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x26a,"TERP_stk_ensure_capacity(terp, buf_len)",
                            iVar5);
          if (iVar5 != 0) {
            uVar4 = local_98._8_8_;
            local_98._8_8_ = local_98._8_8_ + -8;
            *(undefined8 *)(uVar4 + -8) = uVar11;
          }
          iVar5 = test_true("test/radix/terp.c",0x2eb,"TERP_stk_push((terp), &(v), sizeof(v))");
          if (iVar5 == 0) goto joined_r0x0010719e;
          lVar13 = 0;
          goto LAB_001062c5;
        case 6:
          lVar13 = 0;
          while( true ) {
            pcVar12 = (code *)0x0;
            iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                   local_a8 - (long)puStack_b0,8);
            if (iVar5 != 0) {
              iVar5 = 1;
              pcVar12 = (code *)*puStack_b0;
              puStack_b0 = puStack_b0 + 1;
            }
            iVar5 = test_true("test/radix/terp.c",0x2fc,
                              "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
            if (iVar5 == 0) goto joined_r0x0010719e;
            iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                   local_a8 - (long)puStack_b0,8);
            local_140 = 0;
            if (iVar5 != 0) {
              iVar5 = 1;
              local_140 = *puStack_b0;
              puStack_b0 = puStack_b0 + 1;
            }
            iVar5 = test_true("test/radix/terp.c",0x2fd,
                              "SRDR_get_operand(&terp->srdr, &((f_name)), sizeof((f_name)))",iVar5);
            if ((iVar5 == 0) ||
               (iVar5 = test_true("test/radix/terp.c",0x2ff,"v != NULL"), iVar5 == 0))
            goto joined_r0x0010719e;
            iVar5 = (*pcVar12)(&local_78);
            if (local_70._4_4_ != 0) {
              iVar5 = test_int_eq("test/radix/terp.c",0x305,&_LC77,"F_RET_SKIP_REST",iVar5,3);
              if (iVar5 == 0) {
                if (bVar2) {
                  BIO_printf(pBVar14,
                             "----------------------------------------------------------------------\n"
                            );
                }
                goto LAB_00106449;
              }
              if (local_60 != 0) {
                BIO_printf(local_f8,"           \t\t(skipping)\n");
              }
              local_70 = local_70 & 0xffffffff;
              goto joined_r0x00107124;
            }
            if ((int)local_70 == 0) break;
            iVar5 = test_int_eq("test/radix/terp.c",0x30e,&_LC77,"F_RET_SPIN_AGAIN",iVar5,2);
            if (iVar5 == 0) goto joined_r0x0010719e;
            lVar13 = lVar13 + 1;
            local_70 = local_70 & 0xffffffff00000000;
            puStack_b0 = puStack_a0;
            local_98._8_8_ = local_88._8_8_;
            uVar9 = (*(code *)pBStack_f0)(local_e8);
            if (local_50 <= uVar9) goto LAB_00106402;
            if (pcStack_e0 != (code *)0x0) {
              iVar5 = (*pcStack_e0)(&local_f8,local_d8);
              iVar5 = test_true("test/radix/terp.c",0x2cb,
                                "terp->cfg.per_op_cb(terp, terp->cfg.per_op_cb_arg)",iVar5 != 0);
              if (iVar5 == 0) goto LAB_001067da;
            }
          }
          iVar7 = test_false("test/radix/terp.c",0x314,"terp->fctx.spin_again");
          if (iVar7 != 0) goto code_r0x00107166;
          goto joined_r0x0010719e;
        case 7:
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2f2,
                            "SRDR_get_operand(&terp->srdr, &((l_name)), sizeof((l_name)))");
          if (iVar5 == 0) goto joined_r0x0010719e;
          lVar13 = 0;
          goto LAB_001062c5;
        }
        if (iVar5 == 0) goto joined_r0x0010719e;
        lVar13 = 0;
        goto LAB_001062c5;
      }
    }
  }
  CRYPTO_free((void *)local_128._0_8_);
  local_128 = ZEXT816(0);
  BIO_printf(bio,"Stats:\n  Ops executed: %16llu\n\n",local_68);
  goto LAB_00106650;
code_r0x00107166:
  if (iVar5 != 1) goto code_r0x0010716f;
  goto LAB_001062c5;
code_r0x0010716f:
  test_error("test/radix/terp.c",0x318,"op %zu (FUNC %s) failed with return value %d",local_158,
             local_140,iVar5);
joined_r0x0010719e:
  if (bVar2) {
    BIO_printf(pBVar14,"----------------------------------------------------------------------\n");
  }
LAB_00106449:
  iVar5 = 0;
  test_error("test/radix/terp.c",0x32d,"FAILED while executing script: %s at op %zu, error stack:",
             local_c8->method,local_158);
  ERR_print_errors(local_f8);
  BIO_printf(pBVar14,"\n");
  lVar13 = local_88._0_8_;
LAB_0010649c:
  test_output_memory("Final state of stack",local_98._8_8_,lVar13 - local_98._8_8_);
  BIO_printf(bio,"  (%zu bytes)\n",local_88._0_8_ - local_98._8_8_);
  BIO_printf(bio,"\n");
  if (local_c8 != (BIO *)0x0) {
    CRYPTO_free((void *)local_98._0_8_);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_88._8_8_;
    local_88 = auVar1 << 0x40;
    local_c8 = (BIO *)0x0;
    local_98 = (undefined1  [16])0x0;
  }
  CRYPTO_free((void *)local_128._0_8_);
  local_128 = ZEXT816(0);
  BIO_printf(bio,"Stats:\n  Ops executed: %16llu\n\n",local_68);
  if (iVar5 != 0) {
    test_info("test/radix/terp.c",0x20f,"%s: script \'%s\' (%s)","completed",param_1->method,
              param_1->callback);
    goto LAB_00106677;
  }
LAB_00106650:
  iVar5 = 0;
  test_error("test/radix/terp.c",0x20c,"%s: script \'%s\' (%s)","failed, exiting",param_1->method,
             param_1->callback);
LAB_00106677:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_script(int param_1)

{
  uint uVar1;
  BIO *pBVar2;
  BIO *pBVar3;
  int iVar4;
  undefined8 uVar5;
  char *filename;
  long lVar6;
  long lVar7;
  void *ptr;
  undefined8 uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  uint local_dc;
  uint local_d0;
  uint local_cc;
  void *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  char local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (undefined1  [16])0x0;
  uVar8 = *(undefined8 *)(scripts + (long)param_1 * 8);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  DAT_00107c20 = ossl_crypto_mutex_new();
  iVar4 = test_ptr("test/radix/quic_bindings.c",0x99,"rp->gm = ossl_crypto_mutex_new()",DAT_00107c20
                  );
  if (iVar4 == 0) {
LAB_0010729b:
    OPENSSL_LH_free(DAT_00107c28);
    DAT_00107c28 = 0;
    ossl_crypto_mutex_free(&DAT_00107c20);
    uVar5 = 0;
  }
  else {
    uVar5 = OPENSSL_LH_new(RADIX_OBJ_hash,RADIX_OBJ_cmp);
    DAT_00107c28 = OPENSSL_LH_set_thunks
                             (uVar5,0x100000,lh_RADIX_OBJ_cfn_thunk,lh_RADIX_OBJ_doall_thunk,
                              lh_RADIX_OBJ_doall_arg_thunk);
    iVar4 = test_ptr("test/radix/quic_bindings.c",0x9d,
                     "rp->objs = lh_RADIX_OBJ_new(RADIX_OBJ_hash, RADIX_OBJ_cmp)",DAT_00107c28);
    if (iVar4 == 0) goto LAB_0010729b;
    DAT_00107c18 = OPENSSL_sk_new(0);
    iVar4 = test_ptr("test/radix/quic_bindings.c",0xa0,"rp->threads = sk_RADIX_THREAD_new(NULL)",
                     DAT_00107c18);
    if (iVar4 == 0) goto LAB_0010729b;
    DAT_00107c38 = (BIO *)0x0;
    filename = (char *)ossl_safe_getenv("SSLKEYLOGFILE");
    if ((filename != (char *)0x0) && (*filename != '\0')) {
      DAT_00107c38 = BIO_new_file(filename,"a");
      iVar4 = test_ptr("test/radix/quic_bindings.c",0xa6,
                       "rp->keylog_out = BIO_new_file(keylog_path, \"a\")",DAT_00107c38);
      if (iVar4 == 0) goto LAB_0010729b;
    }
    uVar5 = 1;
    _DAT_00107c40 = 0;
    DAT_00107c10 = 0;
    _radix_process = (undefined1  [16])0x0;
  }
  iVar4 = test_true("test/radix/quic_bindings.c",0x24f,
                    "RADIX_PROCESS_init(&radix_process, node_idx, process_idx)",uVar5);
  if (iVar4 == 0) {
LAB_001072d8:
    bVar10 = false;
  }
  else {
    iVar4 = CRYPTO_THREAD_init_local(&radix_thread,radix_thread_cleanup_tl);
    iVar4 = test_true("test/radix/quic_bindings.c",0x252,
                      "CRYPTO_THREAD_init_local(&radix_thread, radix_thread_cleanup_tl)",iVar4 != 0)
    ;
    if (iVar4 == 0) goto LAB_001072d8;
    uVar5 = RADIX_THREAD_new_constprop_0();
    iVar4 = test_ptr("test/radix/quic_bindings.c",0x256,"rt = RADIX_THREAD_new(&radix_process)",
                     uVar5);
    if (iVar4 == 0) goto LAB_001072d8;
    iVar4 = radix_thread_init(uVar5);
    bVar10 = iVar4 != 0;
  }
  iVar4 = test_true("test/radix/main.c",0x1c,"bindings_process_init(0, 0)",bVar10);
  if (iVar4 != 0) {
    local_b8._8_8_ = get_time;
    local_b8._0_8_ = _bio_err;
    local_a8._8_8_ = do_per_op;
    iVar4 = test_true("test/radix/main.c",0x21,"bindings_adjust_terp_config(&cfg)",1);
    if (iVar4 != 0) {
      local_d0 = TERP_run_constprop_0(uVar8,local_b8);
      if (_DAT_00107c40 == 0) {
        local_dc = 1;
        local_cc = 1;
        for (uVar9 = 1; iVar4 = OPENSSL_sk_num(DAT_00107c18), pBVar2 = _bio_err,
            uVar9 < (ulong)(long)iVar4; uVar9 = uVar9 + 1) {
          lVar7 = OPENSSL_sk_value(DAT_00107c18,uVar9 & 0xffffffff);
          BIO_printf(_bio_err,"==> Joining thread %zu\n",uVar9);
          lVar6 = *(long *)(lVar7 + 8);
          if (lVar6 != 0) {
            ossl_crypto_thread_native_join(lVar6,&local_c0);
            lVar6 = *(long *)(lVar7 + 8);
          }
          ossl_crypto_thread_native_clean(lVar6);
          *(undefined8 *)(lVar7 + 8) = 0;
          iVar4 = test_true("test/radix/quic_bindings.c",0x21d,"rt->done",
                            *(int *)(lVar7 + 0xc0) != 0);
          iVar4 = test_true("test/radix/quic_bindings.c",0x185,"RADIX_THREAD_join(rt)",iVar4 != 0);
          if (iVar4 == 0) {
            local_cc = 0;
          }
          uVar1 = 0;
          if (*(int *)(lVar7 + 0xc4) != 0) {
            uVar1 = local_dc;
          }
          local_dc = uVar1;
        }
        _DAT_00107c40 = 1;
        DAT_00107c44 = local_dc;
        for (uVar9 = 1; iVar4 = OPENSSL_sk_num(DAT_00107c18), uVar9 < (ulong)(long)iVar4;
            uVar9 = uVar9 + 1) {
          lVar6 = OPENSSL_sk_value(DAT_00107c18,uVar9 & 0xffffffff);
          ossl_crypto_mutex_lock(*(undefined8 *)(lVar6 + 0xb8));
          uVar1 = *(uint *)(lVar6 + 0xc4);
          ossl_crypto_mutex_unlock(*(undefined8 *)(lVar6 + 0xb8));
          BIO_printf(pBVar2,
                     "\n====(n%zu/p%zu/t%zu)=======================================================\nResult for child thread with index %zu:\n"
                     ,radix_process,DAT_00107c08,*(undefined8 *)(lVar6 + 0x20),
                     *(undefined8 *)(lVar6 + 0x20));
          BIO_snprintf(local_88,0x40,"#  -T-%2zu:\t# ",*(undefined8 *)(lVar6 + 0x20));
          BIO_ctrl(_bio_err,0x4f,0,local_88);
          lVar7 = BIO_ctrl(*(BIO **)(lVar6 + 0xb0),3,0,&local_c0);
          BIO_write(pBVar2,local_c0,(int)lVar7);
          BIO_printf(pBVar2,"\n");
          BIO_ctrl(_bio_err,0x4f,0,&_LC277);
          BIO_printf(pBVar2,"==> Child thread with index %zu exited with %d\n",
                     *(undefined8 *)(lVar6 + 0x20),(ulong)uVar1);
          if (uVar1 == 0) {
            RADIX_THREAD_report_state(lVar6,pBVar2);
          }
        }
        BIO_printf(pBVar2,
                   "\n======================================================================\n");
      }
      else {
        local_cc = 1;
        local_dc = DAT_00107c44;
      }
      iVar4 = test_true("test/radix/quic_bindings.c",0x261,
                        "RADIX_PROCESS_join_all_threads(&radix_process, &testresult_child)",local_cc
                       );
      pBVar2 = _bio_err;
      if (iVar4 != 0) {
        BIO_printf(_bio_err,"Final process state for node %zu, process %zu:\n",radix_process,
                   DAT_00107c08);
        BIO_printf(pBVar2,"  Threads (incl. main):        %zu\n",DAT_00107c10);
        BIO_printf(pBVar2,"  Time slip:                   %llu ms\n",DAT_00107c30 / 1000000);
        BIO_printf(pBVar2,"  Objects:\n");
        OPENSSL_LH_doall_arg(DAT_00107c28,report_obj,pBVar2);
        pBVar3 = _bio_err;
        if (local_dc == 0 || local_d0 == 0) {
          uVar8 = OPENSSL_sk_value(DAT_00107c18,0);
          RADIX_THREAD_report_state(uVar8,pBVar3);
        }
        BIO_printf(pBVar2,
                   "\n======================================================================\n");
        radix_thread_cleanup();
        for (uVar9 = 0; iVar4 = OPENSSL_sk_num(DAT_00107c18), uVar9 < (ulong)(long)iVar4;
            uVar9 = uVar9 + 1) {
          ptr = (void *)OPENSSL_sk_value(DAT_00107c18,uVar9 & 0xffffffff);
          if (ptr != (void *)0x0) {
            BIO_free_all(*(BIO **)((long)ptr + 0xb0));
            CRYPTO_free(*(void **)((long)ptr + 0x10));
            ossl_crypto_mutex_free((long)ptr + 0xb8);
            CRYPTO_free(ptr);
          }
        }
        OPENSSL_sk_free(DAT_00107c18);
        DAT_00107c18 = 0;
        OPENSSL_LH_doall(DAT_00107c28,cleanup_one);
        OPENSSL_LH_free(DAT_00107c28);
        DAT_00107c28 = 0;
        BIO_free_all(DAT_00107c38);
        DAT_00107c38 = (BIO *)0x0;
        ossl_crypto_mutex_free(&DAT_00107c20);
        if (local_dc != 0 && local_d0 != 0) {
          BIO_printf(_bio_err,"==> OK\n\n");
          goto LAB_00107305;
        }
        BIO_printf(_bio_err,"==> ERROR (main=%d, children=%d)\n\n",(ulong)local_d0,(ulong)local_dc);
      }
    }
  }
  local_d0 = 0;
LAB_00107305:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_d0;
}



undefined8 RADIX_THREAD_worker_main(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  code *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = radix_thread_init();
  iVar1 = test_true("test/radix/quic_bindings.c",0x2ec,"radix_thread_init(rt)",iVar1 != 0);
  uVar3 = 0;
  if (iVar1 != 0) {
    ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0xb8));
    ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xb8));
    local_58 = *(undefined8 *)(param_1 + 0xb0);
    local_50 = get_time;
    local_48 = ZEXT816(0x1003b0) << 0x40;
    local_38 = (undefined1  [16])0x0;
    uVar2 = test_true("test/radix/quic_bindings.c",0x2dc,"bindings_adjust_terp_config(&cfg)",1);
    if (uVar2 != 0) {
      iVar1 = TERP_run_constprop_0(*(undefined8 *)(param_1 + 0xa8),&local_58);
      uVar2 = (uint)(iVar1 != 0);
    }
    ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0xb8));
    *(uint *)(param_1 + 0xc4) = uVar2;
    *(undefined4 *)(param_1 + 0xc0) = 1;
    ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xb8));
    radix_thread_cleanup();
    uVar3 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    cert_file = (char *)test_get_argument(0);
    if (cert_file == (char *)0x0) {
      cert_file = "test/certs/servercert.pem";
    }
    key_file = (char *)test_get_argument(1);
    if (key_file == (char *)0x0) {
      key_file = "test/certs/serverkey.pem";
    }
    add_all_tests("test_script",test_script,3,1);
    return 1;
  }
  test_error("test/radix/main.c",0x2f,"Error parsing test options\n");
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void radix_thread_cleanup_tl_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


