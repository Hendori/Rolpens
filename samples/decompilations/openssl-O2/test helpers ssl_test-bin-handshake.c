
undefined8 verify_accept_cb(void)

{
  return 1;
}



undefined8 broken_session_ticket_cb(void)

{
  return 0;
}



undefined8
server_npn_cb(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  *param_2 = *param_4;
  *param_3 = (int)param_4[1];
  return 0;
}



undefined4 decrypt_session_ticket_cb(void)

{
  undefined4 uVar1;
  int in_R8D;
  
  uVar1 = 0;
  if (in_R8D - 3U < 4) {
    uVar1 = *(undefined4 *)(CSWTCH_74 + (ulong)(in_R8D - 3U) * 4);
  }
  return uVar1;
}



uint handshake_status(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (param_2 == 2) {
        return param_3 + 1;
      }
      if (param_2 < 3) {
        uVar1 = 4;
        if (param_2 == 0) {
          uVar1 = 2 - param_3;
        }
        return uVar1;
      }
      uVar1 = 3;
      if (param_2 == 3) {
        return (-(uint)(param_3 == 0) & 2) + 1;
      }
    }
    else {
      uVar1 = 3;
      if (param_1 == 0) {
        if ((param_2 & 0xfffffffd) != 1) {
          return -(uint)(param_2 != 0) & 3;
        }
        uVar1 = 4;
      }
    }
  }
  return uVar1;
}



void ctx_data_free_data(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  *param_1 = 0;
  CRYPTO_free((void *)param_1[2]);
  param_1[2] = 0;
  CRYPTO_free((void *)param_1[4]);
  param_1[4] = 0;
  CRYPTO_free((void *)param_1[5]);
  param_1[5] = 0;
  CRYPTO_free((void *)param_1[6]);
  param_1[6] = 0;
  return;
}



bool client_ocsp_cb(SSL *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  bool bVar2;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = SSL_ctrl(param_1,0x46,0,&local_18);
  bVar2 = false;
  if ((int)lVar1 == 1) {
    bVar2 = *local_18 == dummy_ocsp_resp_good_val;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 do_not_call_session_ticket_cb(SSL *param_1)

{
  void *pvVar1;
  
  pvVar1 = SSL_get_ex_data(param_1,ex_data_idx);
  *(undefined4 *)((long)pvVar1 + 0xc) = 1;
  return 0;
}



undefined8 generate_session_ticket_cb(SSL *param_1,long param_2)

{
  char *__s;
  SSL_SESSION *pSVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  pSVar1 = SSL_get_session(param_1);
  __s = *(char **)(param_2 + 0x30);
  if ((pSVar1 != (SSL_SESSION *)0x0) && (__s != (char *)0x0)) {
    sVar2 = strlen(__s);
    uVar3 = SSL_SESSION_set1_ticket_appdata(pSVar1,__s,sVar2);
    return uVar3;
  }
  return 0;
}



char server_alpn_cb(undefined8 param_1,undefined8 *param_2,uchar *param_3,uchar *param_4,
                   uint param_5,long param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = SSL_select_next_proto
                    (&local_18,param_3,*(uchar **)(param_6 + 0x10),*(uint *)(param_6 + 0x18),param_4
                     ,param_5);
  *param_2 = local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (iVar1 != 1) * '\x02';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char client_npn_cb(undefined8 param_1,uchar **param_2,uchar *param_3,uchar *param_4,uint param_5,
                  undefined8 *param_6)

{
  int iVar1;
  
  iVar1 = SSL_select_next_proto
                    (param_2,param_3,param_4,param_5,(uchar *)*param_6,*(uint *)(param_6 + 1));
  iVar1 = test_true("test/helpers/handshake.c",0x19b,
                    "ret == OPENSSL_NPN_NEGOTIATED || ret == OPENSSL_NPN_NO_OVERLAP",iVar1 - 1U < 2)
  ;
  return (iVar1 == 0) * '\x02';
}



undefined8 server_ocsp_cb(SSL *param_1,undefined1 *param_2)

{
  undefined1 *parg;
  long lVar1;
  
  parg = (undefined1 *)CRYPTO_malloc(1,"test/helpers/handshake.c",0x113);
  if (parg != (undefined1 *)0x0) {
    *parg = *param_2;
    lVar1 = SSL_ctrl(param_1,0x47,1,parg);
    if (lVar1 != 0) {
      return 0;
    }
    CRYPTO_free(parg);
  }
  return 2;
}



undefined8 client_hello_select_server_ctx(SSL *param_1,SSL_CTX *param_2,int param_3)

{
  byte *__s1;
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  byte *local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar2 = SSL_get_ex_data(param_1,ex_data_idx);
  iVar1 = SSL_client_hello_get0_ext(param_1,0,&local_40,&local_38);
  __s1 = local_40;
  uVar5 = local_38;
  if ((iVar1 != 0) && (2 < local_38)) {
    uVar4 = (ulong)local_40[1] + (long)(int)((uint)*local_40 << 8);
    __s1 = local_40 + 2;
    if ((local_38 == uVar4 + 2) &&
       ((__s1 = local_40 + 3, uVar5 = uVar4, local_40[2] == 0 && (uVar5 = uVar4 - 1, 2 < uVar5)))) {
      __s1 = local_40 + 5;
      local_38 = (ulong)local_40[4] + (long)(int)((uint)local_40[3] << 8);
      if (local_38 + 2 <= uVar5) {
        local_40 = __s1;
        if (local_38 == 7) {
          iVar1 = strncmp((char *)__s1,"server2",7);
          if (iVar1 != 0) {
            iVar1 = strncmp((char *)__s1,"server1",7);
            if (iVar1 != 0) goto LAB_00100497;
            goto LAB_001004f8;
          }
          SSL_set_SSL_CTX(param_1,param_2);
          SSL_clear_options(param_1,0xffffffff);
          uVar3 = SSL_CTX_get_options(param_2);
          SSL_set_options(param_1,uVar3);
          *(undefined4 *)((long)pvVar2 + 0x10) = 2;
        }
        else {
LAB_00100497:
          __s1 = local_40;
          uVar5 = local_38;
          if (param_3 == 0) goto LAB_001004a0;
LAB_001004f8:
          *(undefined4 *)((long)pvVar2 + 0x10) = 1;
        }
        uVar3 = 1;
        goto LAB_001004a2;
      }
    }
  }
LAB_001004a0:
  local_38 = uVar5;
  local_40 = __s1;
  uVar3 = 0;
LAB_001004a2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 client_hello_nov12_cb(SSL *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = SSL_client_hello_get0_legacy_version();
  if (iVar1 - 0x300U < 4) {
    SSL_client_hello_get0_session_id(param_1,&local_38);
    if (local_38 != 0) {
      lVar2 = SSL_client_hello_get0_random(param_1,&local_38);
      if (lVar2 != 0) {
        lVar2 = SSL_client_hello_get0_ciphers(param_1,&local_38);
        if (lVar2 != 0) {
          lVar2 = SSL_client_hello_get0_compression_methods(param_1,&local_38);
          if (lVar2 != 0) {
            iVar1 = client_hello_select_server_ctx(param_1,param_3,0);
            SSL_ctrl(param_1,0x7c,0x302,(void *)0x0);
            uVar3 = 1;
            if (iVar1 != 0) goto LAB_00100590;
            *param_2 = 0x70;
            goto LAB_0010058e;
          }
        }
      }
    }
    *param_2 = 0x50;
  }
  else {
    *param_2 = 0x46;
  }
LAB_0010058e:
  uVar3 = 0;
LAB_00100590:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 client_hello_reject_cb(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = client_hello_select_server_ctx(param_1,param_3,0);
  if ((int)uVar1 != 0) {
    return 1;
  }
  *param_2 = 0x70;
  return uVar1;
}



undefined8 client_hello_ignore_cb(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = client_hello_select_server_ctx(param_1,param_3,1);
  if ((int)uVar1 != 0) {
    return 1;
  }
  *param_2 = 0x70;
  return uVar1;
}



undefined8 select_server_ctx(SSL *param_1,SSL_CTX *param_2,int param_3)

{
  int iVar1;
  char *__s1;
  void *pvVar2;
  undefined8 uVar3;
  
  __s1 = SSL_get_servername(param_1,0);
  pvVar2 = SSL_get_ex_data(param_1,ex_data_idx);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"server2");
    if (iVar1 == 0) {
      SSL_set_SSL_CTX(param_1,param_2);
      SSL_clear_options(param_1,0xffffffff);
      uVar3 = SSL_CTX_get_options(param_2);
      SSL_set_options(param_1,uVar3);
      *(undefined4 *)((long)pvVar2 + 0x10) = 2;
      return 0;
    }
    iVar1 = strcmp(__s1,"server1");
    if (iVar1 == 0) {
      *(undefined4 *)((long)pvVar2 + 0x10) = 1;
      return 0;
    }
    if (param_3 == 0) {
      return 2;
    }
  }
  *(undefined4 *)((long)pvVar2 + 0x10) = 1;
  return 3;
}



void servername_reject_cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  select_server_ctx(param_1,param_3,0);
  return;
}



void servername_ignore_cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  select_server_ctx(param_1,param_3,1);
  return;
}



undefined8 verify_reject_cb(X509_STORE_CTX *param_1)

{
  X509_STORE_CTX_set_error(param_1,0x32);
  return 0;
}



bool verify_retry_cb(X509_STORE_CTX *param_1)

{
  int idx;
  SSL *ssl;
  long lVar1;
  
  idx = SSL_get_ex_data_X509_STORE_CTX_idx();
  if ((-1 < idx) && (ssl = (SSL *)X509_STORE_CTX_get_ex_data(param_1,idx), ssl != (SSL *)0x0)) {
    n_retries = n_retries + -1;
    if (n_retries < 0) {
      return true;
    }
    lVar1 = SSL_ctrl(ssl,0x88,0,(void *)0x0);
    return 0 < lVar1;
  }
  return false;
}



undefined8 parse_protos(char *param_1,long *param_2,long *param_3)

{
  int iVar1;
  size_t __n;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  
  __n = strlen(param_1);
  if (__n == 0) {
    *param_2 = 0;
    *param_3 = 0;
LAB_00100860:
    uVar2 = 1;
  }
  else {
    iVar1 = test_ptr_null("test/helpers/handshake.c",0x167,&_LC4,*param_2);
    if (iVar1 != 0) {
      pvVar3 = CRYPTO_malloc((int)(__n + 1),"test/helpers/handshake.c",0x169);
      *param_2 = (long)pvVar3;
      iVar1 = test_ptr("test/helpers/handshake.c",0x169,"*out = OPENSSL_malloc(len + 1)",pvVar3);
      if (iVar1 != 0) {
        *param_3 = __n + 1;
        uVar6 = 0;
        memcpy((void *)(*param_2 + 1),param_1,__n);
        uVar4 = 0;
        do {
          sVar5 = uVar4 + 1;
          if (*(char *)(*param_2 + sVar5) == ',') {
            iVar1 = test_int_gt("test/helpers/handshake.c",0x177,"i - 1","prefix",uVar4 & 0xffffffff
                                ,uVar6 & 0xffffffff);
            if (iVar1 == 0) goto LAB_00100988;
            *(char *)(*param_2 + uVar6) = (char)uVar4 - (char)uVar6;
            uVar6 = sVar5;
          }
          uVar4 = sVar5;
        } while (__n != sVar5);
        iVar1 = test_int_gt("test/helpers/handshake.c",0x17e,&_LC8,"prefix",__n & 0xffffffff,
                            uVar6 & 0xffffffff);
        if (iVar1 == 0) {
LAB_00100988:
          CRYPTO_free((void *)*param_2);
          *param_2 = 0;
          return 0;
        }
        *(char *)(*param_2 + uVar6) = (char)__n - (char)uVar6;
        goto LAB_00100860;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 create_peer(undefined8 *param_1,SSL_CTX *param_2)

{
  int iVar1;
  SSL *ssl;
  void *ptr;
  void *ptr_00;
  
  ssl = SSL_new(param_2);
  iVar1 = test_ptr("test/helpers/handshake.c",0x2f5,"ssl = SSL_new(ctx)",ssl);
  if (iVar1 == 0) {
    ptr = (void *)0x0;
    ptr_00 = (void *)0x0;
  }
  else {
    ptr_00 = (void *)0x0;
    ptr = (void *)CRYPTO_zalloc(0x10000,"test/helpers/handshake.c",0x2f6);
    iVar1 = test_ptr("test/helpers/handshake.c",0x2f6,"write_buf = OPENSSL_zalloc(peer_buffer_size)"
                     ,ptr);
    if (iVar1 != 0) {
      ptr_00 = (void *)CRYPTO_zalloc(0x10000,"test/helpers/handshake.c",0x2f7);
      iVar1 = test_ptr("test/helpers/handshake.c",0x2f7,
                       "read_buf = OPENSSL_zalloc(peer_buffer_size)",ptr_00);
      if (iVar1 != 0) {
        *param_1 = ssl;
        param_1[1] = ptr;
        param_1[3] = ptr_00;
        *(undefined4 *)(param_1 + 4) = 0x10000;
        *(undefined4 *)(param_1 + 2) = 0x10000;
        return 1;
      }
    }
  }
  SSL_free(ssl);
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  return 0;
}



void info_cb(SSL *param_1,uint param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  
  if ((param_2 & 0x4000) != 0) {
    piVar1 = (int *)SSL_get_ex_data(param_1,ex_data_idx);
    if ((param_2 & 8) == 0) {
      piVar1[2] = param_3;
      return;
    }
    *piVar1 = param_3;
    pcVar2 = SSL_alert_type_string(param_3);
    if (((*pcVar2 == 'F') && (pcVar2[1] == '\0')) ||
       ((pcVar2 = SSL_alert_desc_string(param_3), *pcVar2 == 'C' &&
        ((pcVar2[1] == 'N' && (pcVar2[2] == '\0')))))) {
      piVar1[1] = piVar1[1] + 1;
    }
  }
  return;
}



void do_handshake_step(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = test_int_eq("test/helpers/handshake.c",0x313,"peer->status","PEER_RETRY",
                      *(undefined4 *)((long)param_1 + 0x2c),1);
  if (iVar1 == 0) {
    *(undefined4 *)((long)param_1 + 0x2c) = 4;
  }
  else {
    iVar1 = SSL_do_handshake((SSL *)*param_1);
    if (iVar1 == 1) {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      return;
    }
    if ((iVar1 == 0) ||
       ((iVar1 = SSL_get_error((SSL *)*param_1,iVar1), iVar1 != 2 && (iVar1 != 0xc)))) {
      *(undefined4 *)((long)param_1 + 0x2c) = 2;
      return;
    }
  }
  return;
}



void do_app_data_step(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = test_int_eq("test/helpers/handshake.c",0x334,"peer->status","PEER_RETRY",
                      *(undefined4 *)((long)param_1 + 0x2c),1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 5);
    while (iVar1 != 0) {
      iVar1 = SSL_read((SSL *)*param_1,(void *)param_1[3],*(int *)(param_1 + 4));
      if (iVar1 < 1) {
        if (iVar1 == 0) goto LAB_00100d38;
        iVar1 = SSL_get_error((SSL *)*param_1,iVar1);
        if (iVar1 != 2) goto LAB_00100d38;
        break;
      }
      iVar2 = test_int_le("test/helpers/handshake.c",0x33d,&_LC15,"peer->bytes_to_read",iVar1,
                          *(undefined4 *)(param_1 + 5));
      if (iVar2 == 0) goto LAB_00100d21;
      iVar1 = *(int *)(param_1 + 5) - iVar1;
      *(int *)(param_1 + 5) = iVar1;
    }
    iVar1 = *(int *)((long)param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 2);
    if (iVar1 <= *(int *)(param_1 + 2)) {
      iVar2 = iVar1;
    }
    if (iVar2 != 0) {
      iVar1 = SSL_write((SSL *)*param_1,(void *)param_1[1],iVar2);
      if (iVar1 < 1) {
LAB_00100d38:
        *(undefined4 *)((long)param_1 + 0x2c) = 2;
        return;
      }
      iVar2 = test_int_eq("test/helpers/handshake.c",0x355,&_LC15,"write_bytes",iVar1,iVar2);
      if (iVar2 == 0) goto LAB_00100d21;
      iVar1 = *(int *)((long)param_1 + 0x24) - iVar1;
      *(int *)((long)param_1 + 0x24) = iVar1;
    }
    if ((iVar1 == 0) && (*(int *)(param_1 + 5) == 0)) {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
    }
    return;
  }
LAB_00100d21:
  *(undefined4 *)((long)param_1 + 0x2c) = 4;
  return;
}



void do_connect_step(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *str;
  SSL *pSVar4;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 1:
  case 4:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      do_app_data_step(param_2);
      return;
    }
    break;
  case 2:
    if (*(int *)((long)param_2 + 0x2c) != 0) {
      iVar2 = test_int_eq("test/helpers/handshake.c",0x37f,"peer->status","PEER_RETRY",
                          *(int *)((long)param_2 + 0x2c),1);
      if ((iVar2 == 0) ||
         (iVar2 = test_true("test/helpers/handshake.c",0x380,
                            "test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_RENEG_SERVER || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_RENEG_CLIENT || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_KEY_UPDATE_SERVER || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_KEY_UPDATE_CLIENT || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_POST_HANDSHAKE_AUTH"
                            ,*(int *)(param_1 + 4) - 2U < 5), iVar2 == 0)) goto LAB_00100e3c;
      pSVar4 = (SSL *)*param_2;
      *(ulong *)((long)param_2 + 0x24) =
           CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 2) {
        iVar2 = SSL_is_server();
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 4);
          pSVar4 = (SSL *)*param_2;
          goto LAB_00100f50;
        }
LAB_00101007:
        iVar2 = SSL_renegotiate_pending((SSL *)*param_2);
        pSVar4 = (SSL *)*param_2;
        if (iVar2 != 0) {
LAB_00100f6a:
          iVar2 = SSL_read(pSVar4,&local_21,1);
          if ((-1 < iVar2) || (iVar2 = SSL_get_error((SSL *)*param_2,iVar2), iVar2 != 2))
          goto LAB_00100f7d;
          iVar2 = SSL_in_init(*param_2);
          if (iVar2 != 0) goto LAB_00100fb0;
          goto switchD_00100d94_default;
        }
        iVar2 = SSL_is_server();
        pSVar4 = (SSL *)*param_2;
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x5c) != 0) {
            SSL_set_options(pSVar4,1);
            str = *(char **)(param_1 + 0x40);
            if (str != (char *)0x0) goto LAB_0010103e;
LAB_0010104e:
            pSVar4 = (SSL *)*param_2;
            goto LAB_00101051;
          }
          str = *(char **)(param_1 + 0x40);
          if (str != (char *)0x0) {
LAB_0010103e:
            iVar2 = SSL_set_cipher_list((SSL *)*param_2,str);
            if (iVar2 == 0) goto LAB_00100f7d;
            goto LAB_0010104e;
          }
          iVar2 = SSL_renegotiate_abbreviated(pSVar4);
        }
        else {
LAB_00101051:
          iVar2 = SSL_renegotiate(pSVar4);
        }
        if (iVar2 != 0) {
          do_handshake_step(param_2);
          if (*(int *)((long)param_2 + 0x2c) == 1) goto LAB_00100fb0;
          if (*(int *)((long)param_2 + 0x2c) == 0) {
            *(undefined4 *)((long)param_2 + 0x2c) = 1;
          }
          goto switchD_00100d94_default;
        }
      }
      else {
LAB_00100f50:
        if (iVar2 == 3) {
          iVar2 = SSL_is_server();
          if (iVar2 == 0) goto LAB_00101007;
          iVar2 = *(int *)(param_1 + 4);
          pSVar4 = (SSL *)*param_2;
        }
        if (iVar2 - 4U < 2) {
          uVar3 = SSL_is_server();
          if (uVar3 != (*(int *)(param_1 + 4) == 4)) goto LAB_00100fb0;
          iVar2 = SSL_key_update(*param_2,*(undefined4 *)(param_1 + 0x10));
          if (iVar2 == 0) goto LAB_00100f7d;
LAB_00100fdf:
          do_handshake_step(param_2);
          if (*(int *)((long)param_2 + 0x2c) == 0) goto switchD_00100d94_default;
        }
        else {
          if (iVar2 != 6) goto LAB_00100f6a;
          iVar2 = SSL_is_server();
          if (iVar2 == 0) goto LAB_00100fdf;
          piVar1 = (int *)*param_2;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            if (*(int *)(param_1 + 0x90) != 0) {
              piVar1[0x2ea] = 2;
            }
            iVar2 = SSL_verify_client_post_handshake();
            if (iVar2 != 0) goto LAB_00100fdf;
          }
        }
      }
LAB_00100f7d:
      *(undefined4 *)((long)param_2 + 0x2c) = 2;
      goto switchD_00100d94_default;
    }
    *(undefined4 *)((long)param_2 + 0x2c) = 1;
  case 0:
  case 3:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      do_handshake_step(param_2);
      return;
    }
    break;
  case 5:
    iVar2 = test_int_eq("test/helpers/handshake.c",0x42c,"peer->status","PEER_RETRY",
                        *(undefined4 *)((long)param_2 + 0x2c),1);
    if (iVar2 == 0) {
LAB_00100e3c:
      *(undefined4 *)((long)param_2 + 0x2c) = 4;
    }
    else {
      iVar2 = SSL_shutdown((SSL *)*param_2);
      if (iVar2 != 1) {
        if ((-1 < iVar2) || (iVar2 = SSL_get_error((SSL *)*param_2,iVar2), iVar2 - 2U < 2))
        goto switchD_00100d94_default;
        goto LAB_00100f7d;
      }
LAB_00100fb0:
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
    }
  default:
switchD_00100d94_default:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
  case 6:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      test_error("test/helpers/handshake.c",0x48f,"Action after connection done");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dup_str(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = OPENSSL_strnlen();
    iVar1 = test_size_t_eq("test/helpers/handshake.c",0x4e9,
                           "OPENSSL_strnlen((const char*)(in), len)",&_LC8,uVar2,param_2);
    if (iVar1 != 0) {
      uVar2 = CRYPTO_strndup(param_1,param_2,"test/helpers/handshake.c",0x4ea);
      test_ptr("test/helpers/handshake.c",0x4ea,"ret = OPENSSL_strndup((const char*)(in), len)",
               uVar2);
      return uVar2;
    }
  }
  return 0;
}



void pkey_type(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  char local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_is_a(param_1,&_LC21);
  if (iVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      EVP_PKEY_get_id(param_1);
      return;
    }
  }
  else {
    iVar1 = EVP_PKEY_get_group_name(param_1,local_78,0x50,local_80);
    if (iVar1 != 0) {
      OBJ_txt2nid(local_78);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void HANDSHAKE_RESULT_free_part_0(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 0x38));
  CRYPTO_free(*(void **)((long)param_1 + 0x40));
  CRYPTO_free(*(void **)((long)param_1 + 0x48));
  CRYPTO_free(*(void **)((long)param_1 + 0x50));
  CRYPTO_free(*(void **)((long)param_1 + 0xa0));
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x70),&X509_NAME_free);
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x88),&X509_NAME_free);
  CRYPTO_free(*(void **)((long)param_1 + 0x98));
  CRYPTO_free(param_1);
  return;
}



undefined4 *
do_handshake_internal
          (SSL_CTX *param_1,SSL_CTX *param_2,SSL_CTX *param_3,long param_4,int *param_5,
          SSL_SESSION *param_6,SSL_SESSION *param_7,undefined8 *param_8,undefined8 *param_9)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  void *pvVar8;
  SSL_SESSION *pSVar9;
  uchar *puVar10;
  COMP_METHOD *pCVar11;
  undefined8 uVar12;
  SSL_CIPHER *c;
  char *__s;
  size_t sVar13;
  stack_st_X509_NAME *psVar14;
  BIO_METHOD *pBVar15;
  time_t tVar16;
  time_t tVar17;
  undefined1 *parg;
  long lVar18;
  code *pcVar19;
  SSL *ssl;
  int iVar20;
  SSL *s;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  BIO *local_220;
  BIO *local_208;
  uint local_1c8;
  uint local_1c4;
  long local_1c0;
  long local_1b8;
  uchar *local_1b0;
  void *local_1a8;
  EVP_PKEY *local_1a0;
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  char *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (undefined4 *)CRYPTO_zalloc(0xa8,"test/helpers/handshake.c",0x20);
  test_ptr("test/helpers/handshake.c",0x20,"ret = OPENSSL_zalloc(sizeof(*ret))");
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = (uchar *)0x0;
  local_1c4 = 0;
  if (puVar6 == (undefined4 *)0x0) goto LAB_001016e6;
  local_88 = (char *)0x0;
  local_48 = (char *)0x0;
  local_c8 = 0;
  local_188 = 0;
  local_168 = 0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  uVar7 = SSL_CTX_ctrl(param_1,0x34,(long)*(int *)(param_4 + 0xc),(void *)0x0);
  iVar4 = test_int_eq("test/helpers/handshake.c",0x1f7,
                      "SSL_CTX_set_max_send_fragment(server_ctx, test->max_fragment_size)",&_LC23,
                      uVar7 & 0xffffffff,1);
  if (iVar4 == 0) goto LAB_001016d0;
  lVar18 = (long)*(int *)(param_4 + 0xc);
  if (param_2 != (SSL_CTX *)0x0) {
    uVar7 = SSL_CTX_ctrl(param_2,0x34,lVar18,(void *)0x0);
    iVar4 = test_int_eq("test/helpers/handshake.c",0x1fb,
                        "SSL_CTX_set_max_send_fragment(server2_ctx, test->max_fragment_size)",&_LC23
                        ,uVar7 & 0xffffffff,1);
    if (iVar4 == 0) goto LAB_001016d0;
    lVar18 = (long)*(int *)(param_4 + 0xc);
  }
  uVar7 = SSL_CTX_ctrl(param_3,0x34,lVar18,(void *)0x0);
  iVar4 = test_int_eq("test/helpers/handshake.c",0x200,
                      "SSL_CTX_set_max_send_fragment(client_ctx, test->max_fragment_size)",&_LC23,
                      uVar7 & 0xffffffff,1);
  if (iVar4 == 0) goto LAB_001016d0;
  iVar4 = *param_5;
  if (iVar4 == 2) {
    n_retries = 1;
    SSL_CTX_set_cert_verify_callback(param_3,verify_retry_cb,(void *)0x0);
  }
  else if (iVar4 == 3) {
    SSL_CTX_set_cert_verify_callback(param_3,verify_reject_cb,(void *)0x0);
  }
  else if (iVar4 == 1) {
    SSL_CTX_set_cert_verify_callback(param_3,verify_accept_cb,(void *)0x0);
  }
  if ((uint)param_5[2] < 5) {
    SSL_CTX_set_tlsext_max_fragment_length(param_3);
  }
  switch(param_5[0x12]) {
  case 1:
    pcVar19 = servername_ignore_cb;
    goto LAB_001015bf;
  case 2:
    pcVar19 = servername_reject_cb;
LAB_001015bf:
    SSL_CTX_callback_ctrl(param_1,0x35,pcVar19);
    SSL_CTX_ctrl(param_1,0x36,0,param_2);
    break;
  case 3:
    SSL_CTX_set_client_hello_cb(param_1,client_hello_ignore_cb,param_2);
    break;
  case 4:
    SSL_CTX_set_client_hello_cb(param_1,client_hello_reject_cb,param_2);
    break;
  case 5:
    SSL_CTX_set_client_hello_cb(param_1,client_hello_nov12_cb,param_2);
  }
  if (param_5[0x19] != 0) {
    SSL_CTX_ctrl(param_3,0x41,1,(void *)0x0);
    SSL_CTX_callback_ctrl(param_3,0x3f,client_ocsp_cb);
    SSL_CTX_ctrl(param_3,0x40,0,(void *)0x0);
    SSL_CTX_callback_ctrl(param_1,0x3f,server_ocsp_cb);
    parg = &dummy_ocsp_resp_bad_val;
    if (param_5[0x19] == 1) {
      parg = &dummy_ocsp_resp_good_val;
    }
    SSL_CTX_ctrl(param_1,0x40,0,parg);
  }
  if (param_2 != (SSL_CTX *)0x0) {
    SSL_CTX_set_tlsext_ticket_key_evp_cb(param_2,do_not_call_session_ticket_cb);
  }
  if (param_5[0x18] != 0) {
    SSL_CTX_set_tlsext_ticket_key_evp_cb(param_1,broken_session_ticket_cb);
  }
  if (*(long *)(param_5 + 0x14) == 0) {
LAB_00101669:
    if (*(long *)(param_5 + 0x24) != 0) {
      iVar4 = parse_protos(*(long *)(param_5 + 0x24),local_78,local_78 + 8);
      iVar4 = test_true("test/helpers/handshake.c",0x259,
                        "parse_protos(extra->server2.npn_protocols, &server2_ctx_data->npn_protocols, &server2_ctx_data->npn_protocols_len)"
                        ,iVar4 != 0);
      if ((iVar4 == 0) ||
         (iVar4 = test_ptr("test/helpers/handshake.c",0x25c,"server2_ctx"), iVar4 == 0))
      goto LAB_001016d0;
      SSL_CTX_set_next_protos_advertised_cb(param_2,server_npn_cb,local_78);
    }
    if (*(long *)(param_5 + 4) != 0) {
      parse_protos(*(long *)(param_5 + 4),local_f8,local_f8 + 8);
      iVar4 = test_true("test/helpers/handshake.c",0x262,
                        "parse_protos(extra->client.npn_protocols, &client_ctx_data->npn_protocols, &client_ctx_data->npn_protocols_len)"
                       );
      if (iVar4 == 0) goto LAB_001016d0;
      SSL_CTX_set_next_proto_select_cb(param_3,client_npn_cb,local_f8);
    }
    if (*(long *)(param_5 + 0x16) != 0) {
      parse_protos(*(long *)(param_5 + 0x16),local_a8,local_a8 + 8);
      iVar4 = test_true("test/helpers/handshake.c",0x26b,
                        "parse_protos(extra->server.alpn_protocols, &server_ctx_data->alpn_protocols, &server_ctx_data->alpn_protocols_len)"
                       );
      if (iVar4 == 0) goto LAB_001016d0;
      SSL_CTX_set_alpn_select_cb(param_1,server_alpn_cb,local_b8);
    }
    if (*(long *)(param_5 + 0x26) == 0) {
LAB_0010187e:
      if (*(long *)(param_5 + 6) == 0) {
LAB_00101935:
        if (*(char **)(param_5 + 0x20) != (char *)0x0) {
          local_88 = CRYPTO_strdup(*(char **)(param_5 + 0x20),"test/helpers/handshake.c",0x28a);
          iVar4 = test_ptr("test/helpers/handshake.c",0x28b,
                           "server_ctx_data->session_ticket_app_data",local_88);
          if (iVar4 == 0) goto LAB_001016d0;
          SSL_CTX_set_session_ticket_cb
                    (param_1,generate_session_ticket_cb,decrypt_session_ticket_cb);
        }
        if (*(long *)(param_5 + 0x30) == 0) {
LAB_00101a12:
          lVar18 = SSL_CTX_ctrl(param_1,0x3b,0,(void *)0x0);
          pvVar8 = (void *)CRYPTO_zalloc(lVar18,"test/helpers/handshake.c",0x2a0);
          iVar4 = test_ptr("test/helpers/handshake.c",0x2a0,
                           "ticket_keys = OPENSSL_zalloc(ticket_key_len)",pvVar8);
          if (iVar4 != 0) {
            uVar7 = SSL_CTX_ctrl(param_1,0x3b,lVar18,pvVar8);
            iVar4 = test_int_eq("test/helpers/handshake.c",0x2a1,
                                "SSL_CTX_set_tlsext_ticket_keys(server_ctx, ticket_keys, ticket_key_len)"
                                ,&_LC23,uVar7 & 0xffffffff,1);
            if (iVar4 != 0) {
              CRYPTO_free(pvVar8);
              iVar4 = SSL_CTX_set_default_ctlog_list_file(param_3);
              iVar4 = test_true("test/helpers/handshake.c",0x2ab,
                                "SSL_CTX_set_default_ctlog_list_file(client_ctx)",iVar4 != 0);
              if (iVar4 == 0) goto LAB_001016d0;
              if (param_5[8] == 1) {
                iVar4 = SSL_CTX_enable_ct(param_3,0);
                iVar4 = test_true("test/helpers/handshake.c",0x2af,
                                  "SSL_CTX_enable_ct(client_ctx, SSL_CT_VALIDATION_PERMISSIVE)",
                                  iVar4 != 0);
joined_r0x00102771:
                if (iVar4 == 0) goto LAB_001016d0;
              }
              else if (param_5[8] == 2) {
                iVar4 = SSL_CTX_enable_ct(param_3,1);
                iVar4 = test_true("test/helpers/handshake.c",0x2b4,
                                  "SSL_CTX_enable_ct(client_ctx, SSL_CT_VALIDATION_STRICT)",
                                  iVar4 != 0);
                goto joined_r0x00102771;
              }
              iVar4 = configure_handshake_ctx_for_srp
                                (param_1,param_2,param_3,param_5,local_b8,local_78,local_f8);
              if (iVar4 == 0) goto LAB_001016d0;
              iVar4 = create_peer(local_158,param_1);
              if (iVar4 == 0) {
                ssl = (SSL *)0x0;
                test_note("creating server context");
                local_220 = (BIO *)0x0;
                local_208 = (BIO *)0x0;
                s = (SSL *)local_158._0_8_;
              }
              else {
                iVar4 = create_peer(local_128,param_3);
                s = (SSL *)local_158._0_8_;
                if (iVar4 == 0) {
                  test_note("creating client context");
LAB_00102414:
                  local_208 = (BIO *)local_128._8_8_;
                  local_220 = (BIO *)local_118._8_8_;
                  ssl = (SSL *)local_128._0_8_;
                }
                else {
                  ssl = (SSL *)local_128._0_8_;
                  uVar12 = CONCAT44(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 8));
                  local_138._4_8_ = uVar12;
                  local_108._4_8_ = uVar12;
                  if (param_5[1] == 0) {
                    iVar4 = param_5[0x10];
                  }
                  else {
                    pvVar8 = (void *)ssl_servername_name();
                    SSL_ctrl(ssl,0x37,0,pvVar8);
                    iVar4 = param_5[0x10];
                  }
                  if (iVar4 != 0) {
                    SSL_set_post_handshake_auth(ssl,1);
                  }
                  if (param_6 == (SSL_SESSION *)0x0) {
LAB_00101c89:
                    iVar4 = *(int *)(param_4 + 0x210);
                    *puVar6 = 3;
                    local_208 = (BIO *)0x0;
                    local_220 = (BIO *)0x0;
                    if (iVar4 == 0) {
                      pBVar15 = BIO_s_mem();
                      local_220 = BIO_new(pBVar15);
                      pBVar15 = BIO_s_mem();
                      local_208 = BIO_new(pBVar15);
                    }
                    iVar4 = test_ptr("test/helpers/handshake.c",0x5e8,"client_to_server",local_220);
                    if ((iVar4 != 0) &&
                       (iVar4 = test_ptr("test/helpers/handshake.c",0x5e9,"server_to_client"),
                       iVar4 != 0)) {
                      BIO_ctrl(local_220,0x66,1,(void *)0x0);
                      BIO_ctrl(local_208,0x66,1,(void *)0x0);
                      SSL_set_connect_state(ssl);
                      SSL_set_accept_state(s);
                      if (*(int *)(param_4 + 0x210) == 0) {
                        SSL_set_bio(ssl,local_208,local_220);
                        uVar5 = BIO_up_ref(local_208);
                        iVar4 = test_int_gt("test/helpers/handshake.c",0x5f9,
                                            "BIO_up_ref(server_to_client)",&_LC34,uVar5);
                        if (iVar4 != 0) {
                          BIO_up_ref(local_220);
                          iVar4 = test_int_gt("test/helpers/handshake.c",0x5fa,
                                              "BIO_up_ref(client_to_server)");
                          if (iVar4 != 0) {
                            SSL_set_bio(s,local_220,local_208);
                            goto LAB_00101d6b;
                          }
                        }
                      }
                      else {
                        SSL_set_bio(ssl,local_220,local_220);
                        SSL_set_bio(s,local_208,local_208);
LAB_00101d6b:
                        ex_data_idx = CRYPTO_get_ex_new_index
                                                (0,0,"ex data",(undefined1 *)0x0,(undefined1 *)0x0,
                                                 (undefined1 *)0x0);
                        iVar4 = test_int_ge("test/helpers/handshake.c",0x600,"ex_data_idx",&_LC34,
                                            ex_data_idx,0);
                        if (iVar4 != 0) {
                          iVar4 = SSL_set_ex_data(s,ex_data_idx,local_198);
                          iVar4 = test_int_eq("test/helpers/handshake.c",0x601,
                                              "SSL_set_ex_data(server.ssl, ex_data_idx, &server_ex_data)"
                                              ,&_LC23,iVar4,1);
                          if (iVar4 != 0) {
                            iVar4 = SSL_set_ex_data(ssl,ex_data_idx,local_178);
                            iVar4 = test_int_eq("test/helpers/handshake.c",0x602,
                                                "SSL_set_ex_data(client.ssl, ex_data_idx, &client_ex_data)"
                                                ,&_LC23,iVar4,1);
                            if (iVar4 != 0) {
                              SSL_set_info_callback(s,info_cb);
                              SSL_set_info_callback(ssl,info_cb);
                              local_108._12_4_ = 1;
                              local_138._12_4_ = 3;
                              tVar16 = time((time_t *)0x0);
                              iVar3 = 0;
                              uVar12 = 1;
                              iVar20 = 0;
                              iVar4 = 0;
switchD_001025fd_default:
                              if ((int)uVar12 != 0) goto LAB_00102685;
LAB_001025c9:
                              do_connect_step(param_4,local_158,iVar20);
                              auVar21 = handshake_status(local_138._12_4_,local_108._12_4_,0);
LAB_001025ee:
                              uVar12 = auVar21._8_8_;
                              switch(auVar21._0_8_ & 0xffffffff) {
                              case 0:
                                switch(iVar20) {
                                case 0:
                                  iVar20 = (-(uint)(*(int *)(param_4 + 4) - 2U < 5) & 0xfffffffd) +
                                           4;
                                  break;
                                case 1:
                                  iVar20 = 2;
                                  break;
                                case 2:
                                  iVar20 = ~-(uint)(*(int *)(param_4 + 4) - 4U < 3) + 4;
                                  break;
                                case 3:
                                  iVar20 = 4;
                                  break;
                                case 4:
                                  iVar20 = 5;
                                  break;
                                case 5:
                                  *puVar6 = 0;
                                  goto LAB_00102606;
                                case 6:
                                  test_error("test/helpers/handshake.c",0x472,
                                             "Trying to progress after connection done");
                                default:
                                  iVar20 = -1;
                                }
                                local_138._12_4_ = 1;
                                local_108._12_4_ = 1;
                                iVar4 = 0;
                                goto LAB_00102685;
                              case 1:
                                *puVar6 = 2;
                                break;
                              case 2:
                                *puVar6 = 1;
                                break;
                              case 3:
switchD_001025fd_caseD_3:
                                *puVar6 = 3;
                                break;
                              case 4:
                                if (*(int *)(param_4 + 0x210) != 0) {
                                  tVar17 = time((time_t *)0x0);
                                  if (3 < tVar17 - tVar16) goto switchD_001025fd_caseD_3;
                                  if (auVar21._8_4_ == 0) {
                                    iVar1 = local_108._12_4_;
                                  }
                                  else {
                                    iVar1 = local_138._12_4_;
                                  }
                                  if (iVar1 != 1) goto LAB_00102685;
                                  goto LAB_001025c9;
                                }
                                iVar1 = iVar4 + 1;
                                if (1999 < iVar4) goto switchD_001025fd_caseD_3;
                                iVar4 = iVar1;
                                if (auVar21._8_4_ != 0) {
                                  if (local_138._12_4_ == 0) {
                                    bVar2 = 1 < iVar3;
                                    iVar3 = iVar3 + 1;
                                    if (bVar2) goto switchD_001025fd_caseD_3;
                                    goto LAB_00102685;
                                  }
                                  goto LAB_001025c9;
                                }
LAB_00102685:
                                do_connect_step(param_4,local_128,iVar20);
                                uVar5 = local_138._12_4_;
                                if (local_138._12_4_ == 3) {
                                  local_138._12_4_ = 1;
                                }
                                auVar21 = handshake_status(local_108._12_4_,uVar5,1);
                                goto LAB_001025ee;
                              default:
                                goto switchD_001025fd_default;
                              }
LAB_00102606:
                              s = (SSL *)local_158._0_8_;
                              goto LAB_00102414;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    SSL_SESSION_get_id(param_7,&local_1c8);
                    if (local_1c8 == 0) {
LAB_00101c51:
                      iVar4 = SSL_set_session(ssl,param_6);
                      iVar4 = test_true("test/helpers/handshake.c",0x5d3,
                                        "SSL_set_session(client.ssl, session_in)",iVar4 != 0);
                      if (iVar4 != 0) {
                        local_1c8 = 0;
                        goto LAB_00101c89;
                      }
                    }
                    else {
                      iVar4 = SSL_CTX_add_session(param_1,param_7);
                      iVar4 = test_true("test/helpers/handshake.c",0x5d1,
                                        "SSL_CTX_add_session(server_ctx, serv_sess_in)",iVar4 != 0);
                      if (iVar4 != 0) goto LAB_00101c51;
                    }
                  }
                  local_208 = (BIO *)local_128._8_8_;
                  local_220 = (BIO *)local_118._8_8_;
                }
              }
              *(ulong *)(puVar6 + 5) = CONCAT44(local_178._8_4_,local_198._4_4_);
              *(long *)(puVar6 + 1) = local_178._0_8_;
              *(ulong *)(puVar6 + 3) = CONCAT44(local_198._0_4_,local_198._8_4_);
              iVar4 = SSL_version(s);
              puVar6[7] = iVar4;
              iVar4 = SSL_version(ssl);
              puVar6[8] = iVar4;
              puVar6[9] = local_188;
              pSVar9 = SSL_get_session(ssl);
              if (pSVar9 == (SSL_SESSION *)0x0) {
                if ((local_1c0 == 0) || (local_1b8 == 0)) {
                  puVar6[10] = 2;
                }
                else {
                  puVar6[10] = 1;
                }
                pCVar11 = SSL_get_current_compression(ssl);
                puVar6[0xb] = (uint)(pCVar11 != (COMP_METHOD *)0x0);
LAB_00101f31:
                uVar5 = 2;
              }
              else {
                SSL_SESSION_get0_ticket(pSVar9,&local_1c0,&local_1b8);
                puVar10 = SSL_SESSION_get_id(pSVar9,&local_1c8);
                iVar4 = 2;
                if (local_1c0 != 0) {
                  iVar4 = 2 - (uint)(local_1b8 != 0);
                }
                puVar6[10] = iVar4;
                pCVar11 = SSL_get_current_compression(ssl);
                puVar6[0xb] = (uint)(pCVar11 != (COMP_METHOD *)0x0);
                if ((puVar10 == (uchar *)0x0) || (local_1c8 == 0)) goto LAB_00101f31;
                uVar5 = 1;
              }
              puVar6[0x24] = uVar5;
              iVar4 = *param_5;
              puVar6[0xc] = local_198._12_4_;
              if ((iVar4 == 2) && (n_retries != -1)) {
                *puVar6 = 1;
              }
              SSL_get0_next_proto_negotiated(ssl,&local_1b0,&local_1c4);
              uVar12 = dup_str(local_1b0,local_1c4);
              *(undefined8 *)(puVar6 + 0xe) = uVar12;
              SSL_get0_next_proto_negotiated(s,&local_1b0,&local_1c4);
              uVar12 = dup_str(local_1b0,local_1c4);
              *(undefined8 *)(puVar6 + 0x10) = uVar12;
              SSL_get0_alpn_selected(ssl,&local_1b0,&local_1c4);
              uVar12 = dup_str(local_1b0,local_1c4);
              *(undefined8 *)(puVar6 + 0x12) = uVar12;
              SSL_get0_alpn_selected(s,&local_1b0,&local_1c4);
              uVar12 = dup_str(local_1b0,local_1c4);
              *(undefined8 *)(puVar6 + 0x14) = uVar12;
              pSVar9 = SSL_get_session(s);
              if (pSVar9 != (SSL_SESSION *)0x0) {
                SSL_SESSION_get0_ticket_appdata(pSVar9,&local_1c0,&local_1b8);
                uVar12 = CRYPTO_strndup(local_1c0,local_1b8,"test/helpers/handshake.c",0x698);
                *(undefined8 *)(puVar6 + 0x28) = uVar12;
              }
              uVar5 = SSL_session_reused(ssl);
              puVar6[0x16] = uVar5;
              uVar5 = SSL_session_reused(s);
              puVar6[0x17] = uVar5;
              c = SSL_get_current_cipher(ssl);
              __s = SSL_CIPHER_get_name(c);
              sVar13 = strlen(__s);
              uVar12 = dup_str(__s,sVar13);
              *(undefined8 *)(puVar6 + 0x26) = uVar12;
              if (param_8 != (undefined8 *)0x0) {
                pSVar9 = SSL_get1_session(ssl);
                *param_8 = pSVar9;
              }
              if ((param_9 != (undefined8 *)0x0) &&
                 (pSVar9 = SSL_get_session(s), pSVar9 != (SSL_SESSION *)0x0)) {
                uVar12 = SSL_SESSION_dup(pSVar9);
                *param_9 = uVar12;
              }
              lVar18 = SSL_ctrl(ssl,0x6d,0,&local_1a0);
              if (lVar18 != 0) {
                uVar5 = pkey_type(local_1a0);
                puVar6[0x18] = uVar5;
                EVP_PKEY_free(local_1a0);
              }
              SSL_ctrl(ssl,0x6c,0,puVar6 + 0x1a);
              SSL_ctrl(s,0x6c,0,puVar6 + 0x1f);
              SSL_get_peer_signature_type_nid(ssl,puVar6 + 0x1b);
              SSL_get_peer_signature_type_nid(s,puVar6 + 0x20);
              psVar14 = (stack_st_X509_NAME *)SSL_get0_peer_CA_list(ssl);
              if (psVar14 != (stack_st_X509_NAME *)0x0) {
                psVar14 = SSL_dup_CA_list(psVar14);
              }
              *(stack_st_X509_NAME **)(puVar6 + 0x22) = psVar14;
              psVar14 = (stack_st_X509_NAME *)SSL_get0_peer_CA_list(s);
              if (psVar14 != (stack_st_X509_NAME *)0x0) {
                psVar14 = SSL_dup_CA_list(psVar14);
              }
              *(stack_st_X509_NAME **)(puVar6 + 0x1c) = psVar14;
              lVar18 = SSL_get0_peer_certificate(ssl);
              uVar5 = 0;
              if (lVar18 != 0) {
                uVar12 = X509_get0_pubkey();
                uVar5 = pkey_type(uVar12);
              }
              puVar6[0x19] = uVar5;
              lVar18 = SSL_get0_peer_certificate(s);
              uVar5 = 0;
              if (lVar18 != 0) {
                uVar12 = X509_get0_pubkey();
                uVar5 = pkey_type(uVar12);
              }
              puVar6[0x1e] = uVar5;
              ctx_data_free_data(local_b8);
              ctx_data_free_data(local_78);
              ctx_data_free_data(local_f8);
              SSL_free(s);
              CRYPTO_free((void *)local_158._8_8_);
              CRYPTO_free((void *)local_148._8_8_);
              SSL_free(ssl);
              CRYPTO_free(local_208);
              CRYPTO_free(local_220);
              goto LAB_001016f0;
            }
          }
          CRYPTO_free(pvVar8);
        }
        else {
          iVar4 = test_ptr("test/helpers/handshake.c",0x291,"server2_ctx",param_2);
          if (iVar4 != 0) {
            local_48 = CRYPTO_strdup(*(char **)(param_5 + 0x30),"test/helpers/handshake.c",0x294);
            iVar4 = test_ptr("test/helpers/handshake.c",0x295,
                             "server2_ctx_data->session_ticket_app_data",local_48);
            if (iVar4 != 0) {
              SSL_CTX_set_session_ticket_cb(param_2,0,decrypt_session_ticket_cb);
              goto LAB_00101a12;
            }
          }
        }
      }
      else {
        local_1a8 = (void *)0x0;
        local_1a0 = (EVP_PKEY *)0x0;
        iVar4 = parse_protos(*(long *)(param_5 + 6),&local_1a8,&local_1a0);
        iVar4 = test_true("test/helpers/handshake.c",0x27f,
                          "parse_protos(extra->client.alpn_protocols, &alpn_protos, &alpn_protos_len)"
                          ,iVar4 != 0);
        pvVar8 = local_1a8;
        if (iVar4 != 0) {
          uVar5 = SSL_CTX_set_alpn_protos(param_3,local_1a8,(ulong)local_1a0 & 0xffffffff);
          iVar4 = test_int_eq("test/helpers/handshake.c",0x282,
                              "SSL_CTX_set_alpn_protos(client_ctx, alpn_protos, alpn_protos_len)",
                              &_LC34,uVar5,0);
          if (iVar4 != 0) {
            CRYPTO_free(pvVar8);
            goto LAB_00101935;
          }
        }
      }
    }
    else {
      iVar4 = test_ptr("test/helpers/handshake.c",0x272,"server2_ctx",param_2);
      if (iVar4 != 0) {
        parse_protos(*(undefined8 *)(param_5 + 0x26),local_68,local_68 + 8);
        iVar4 = test_true("test/helpers/handshake.c",0x273,
                          "parse_protos(extra->server2.alpn_protocols, &server2_ctx_data->alpn_protocols, &server2_ctx_data->alpn_protocols_len )"
                         );
        if (iVar4 != 0) {
          SSL_CTX_set_alpn_select_cb(param_2,server_alpn_cb,local_78);
          goto LAB_0010187e;
        }
      }
    }
  }
  else {
    parse_protos(*(long *)(param_5 + 0x14),local_b8,local_b8 + 8);
    iVar4 = test_true("test/helpers/handshake.c",0x251,
                      "parse_protos(extra->server.npn_protocols, &server_ctx_data->npn_protocols, &server_ctx_data->npn_protocols_len)"
                     );
    if (iVar4 != 0) {
      SSL_CTX_set_next_protos_advertised_cb(param_1,server_npn_cb,local_b8);
      goto LAB_00101669;
    }
  }
LAB_001016d0:
  test_note("configure_handshake_ctx");
  HANDSHAKE_RESULT_free_part_0(puVar6);
LAB_001016e6:
  puVar6 = (undefined4 *)0x0;
LAB_001016f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



undefined8 HANDSHAKE_RESULT_new(void)

{
  undefined8 uVar1;
  
  uVar1 = CRYPTO_zalloc(0xa8,"test/helpers/handshake.c",0x20);
  test_ptr("test/helpers/handshake.c",0x20,"ret = OPENSSL_zalloc(sizeof(*ret))",uVar1);
  return uVar1;
}



void HANDSHAKE_RESULT_free(long param_1)

{
  if (param_1 != 0) {
    HANDSHAKE_RESULT_free_part_0();
    return;
  }
  return;
}



int * do_handshake(void)

{
  long lVar1;
  int *piVar2;
  undefined8 in_RCX;
  undefined8 in_R8;
  long in_R9;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)do_handshake_internal();
  if (((piVar2 != (int *)0x0) && (*(int *)(in_R9 + 4) == 1)) && (*piVar2 != 3)) {
    if (*piVar2 == 0) {
      HANDSHAKE_RESULT_free_part_0(piVar2);
      piVar2 = (int *)do_handshake_internal(in_RCX,0,in_R8,in_R9,in_R9 + 0xe0,0,0,0,0);
    }
    else {
      *piVar2 = 4;
    }
  }
  SSL_SESSION_free((SSL_SESSION *)0x0);
  SSL_SESSION_free((SSL_SESSION *)0x0);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


