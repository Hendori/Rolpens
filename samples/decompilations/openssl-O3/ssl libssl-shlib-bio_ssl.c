
long ssl_callback_ctrl(undefined8 param_1,int param_2,fp *param_3)

{
  undefined8 *puVar1;
  BIO *b;
  long lVar2;
  
  puVar1 = (undefined8 *)BIO_get_data();
  if (param_2 != 0xe) {
    return 0;
  }
  b = SSL_get_rbio((SSL *)*puVar1);
  lVar2 = BIO_callback_ctrl(b,0xe,param_3);
  return lVar2;
}



bool ssl_new(BIO *param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x30,"ssl/bio_ssl.c",0x40);
  if (lVar1 != 0) {
    BIO_set_init(param_1,0);
    BIO_set_data(param_1,lVar1);
    BIO_clear_flags(param_1,-1);
  }
  return lVar1 != 0;
}



void ssl_puts(BIO *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  BIO_write(param_1,param_2,(int)sVar1);
  return;
}



int ssl_read(BIO *param_1,long param_2,undefined8 param_3,long *param_4)

{
  SSL *s;
  long lVar1;
  long lVar2;
  int ret_code;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)BIO_get_data();
  s = (SSL *)*puVar4;
  BIO_clear_flags(param_1,0xf);
  ret_code = ssl_read_internal(s,param_2,param_3,param_4);
  iVar3 = SSL_get_error(s,ret_code);
  switch(iVar3) {
  case 0:
    if ((puVar4[2] == 0) ||
       (lVar1 = *param_4, lVar2 = puVar4[3], puVar4[3] = lVar1 + lVar2,
       (ulong)(lVar1 + lVar2) <= (ulong)puVar4[2])) {
      if ((puVar4[4] != 0) && (uVar5 = time((time_t *)0x0), (ulong)(puVar4[4] + puVar4[5]) < uVar5))
      {
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        puVar4[5] = uVar5;
        SSL_renegotiate(s);
      }
    }
    else {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      puVar4[3] = 0;
      SSL_renegotiate(s);
    }
    break;
  case 2:
    BIO_set_flags(param_1,9);
    break;
  case 3:
    BIO_set_flags(param_1,10);
    break;
  case 4:
    BIO_set_flags(param_1,0xc);
    uVar6 = 1;
    goto LAB_00100178;
  case 7:
    BIO_set_flags(param_1,0xc);
    uVar6 = 2;
    goto LAB_00100178;
  case 8:
    BIO_set_flags(param_1,0xc);
    uVar6 = 3;
    goto LAB_00100178;
  }
  uVar6 = 0;
LAB_00100178:
  BIO_set_retry_reason(param_1,uVar6);
  return ret_code;
}



int ssl_write(BIO *param_1,long param_2,undefined8 param_3,long *param_4)

{
  SSL *s;
  long lVar1;
  long lVar2;
  int ret_code;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)BIO_get_data();
  s = (SSL *)*puVar4;
  BIO_clear_flags(param_1,0xf);
  ret_code = ssl_write_internal(s,param_2,param_3,0,param_4);
  iVar3 = SSL_get_error(s,ret_code);
  switch(iVar3) {
  case 0:
    if ((puVar4[2] == 0) ||
       (lVar1 = *param_4, lVar2 = puVar4[3], puVar4[3] = lVar1 + lVar2,
       (ulong)(lVar1 + lVar2) <= (ulong)puVar4[2])) {
      if ((puVar4[4] != 0) && (uVar5 = time((time_t *)0x0), (ulong)(puVar4[4] + puVar4[5]) < uVar5))
      {
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        puVar4[5] = uVar5;
        SSL_renegotiate(s);
      }
    }
    else {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      puVar4[3] = 0;
      SSL_renegotiate(s);
    }
    break;
  case 2:
    BIO_set_flags(param_1,9);
    break;
  case 3:
    BIO_set_flags(param_1,10);
    break;
  case 4:
    BIO_set_flags(param_1,0xc);
    uVar6 = 1;
    goto LAB_00100302;
  case 7:
    BIO_set_flags(param_1,0xc);
    uVar6 = 2;
    goto LAB_00100302;
  }
  uVar6 = 0;
LAB_00100302:
  BIO_set_retry_reason(param_1,uVar6);
  return ret_code;
}



undefined8 ssl_free(BIO *param_1)

{
  int iVar1;
  long *ptr;
  
  if (param_1 != (BIO *)0x0) {
    ptr = (long *)BIO_get_data();
    iVar1 = BIO_get_shutdown(param_1);
    if (iVar1 != 0) {
      if (*ptr != 0) {
        iVar1 = SSL_in_init();
        if (iVar1 == 0) {
          SSL_shutdown((SSL *)*ptr);
        }
      }
      iVar1 = BIO_get_init(param_1);
      if (iVar1 != 0) {
        SSL_free((SSL *)*ptr);
      }
      BIO_clear_flags(param_1,-1);
      BIO_set_init(param_1,0);
    }
    CRYPTO_free(ptr);
    return 1;
  }
  return 0;
}



ulong ssl_ctrl(SSL *param_1,int param_2,ulong param_3,SSL *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  BIO *pBVar8;
  ulong uVar9;
  undefined8 *puVar10;
  SSL *pSVar11;
  long *ptr;
  long lVar12;
  BIO *pBVar13;
  time_t tVar14;
  
  puVar7 = (undefined8 *)BIO_get_data();
  pBVar8 = BIO_next((BIO *)param_1);
  pSVar11 = (SSL *)*puVar7;
  if ((pSVar11 == (SSL *)0x0) && (param_2 != 0x6d)) {
LAB_001004d0:
    return 0;
  }
  switch(param_2) {
  default:
    pBVar8 = SSL_get_rbio(pSVar11);
    goto LAB_00100513;
  case 1:
    if (pSVar11 == (SSL *)0x0) {
      return 0;
    }
    if (pSVar11->version != 0) {
      return 0;
    }
    SSL_shutdown(pSVar11);
    if (*(bio_st **)&pSVar11->packet_length == *(bio_st **)&pSVar11->wbio->references) {
      SSL_set_connect_state(pSVar11);
    }
    else if (*(bio_st **)&pSVar11->packet_length == pSVar11->wbio->prev_bio) {
      SSL_set_accept_state(pSVar11);
    }
    iVar6 = SSL_clear(pSVar11);
    if (iVar6 == 0) {
      return 0;
    }
    if (pBVar8 != (BIO *)0x0) {
      param_2 = 1;
      goto LAB_00100513;
    }
    pBVar8 = (BIO *)pSVar11->init_buf;
    if (pBVar8 != (BIO *)0x0) {
      param_2 = 1;
      goto LAB_00100513;
    }
    goto LAB_001005d8;
  case 3:
  case 0xe:
    goto LAB_001004d0;
  case 6:
    if ((pBVar8 != (BIO *)0x0) && (pBVar13 = SSL_get_rbio(pSVar11), pBVar8 != pBVar13)) {
      iVar6 = BIO_up_ref(pBVar8);
      if (iVar6 == 0) {
        return 0;
      }
      SSL_set_bio(pSVar11,pBVar8,pBVar8);
    }
    goto LAB_001005d8;
  case 7:
    if (param_1 == param_4) {
      SSL_set_bio(pSVar11,(BIO *)0x0,(BIO *)0x0);
    }
    goto LAB_001005d8;
  case 8:
    iVar6 = BIO_get_shutdown(param_1);
    uVar9 = (ulong)iVar6;
    break;
  case 9:
    BIO_set_shutdown(param_1,param_3 & 0xffffffff);
    goto LAB_001005d8;
  case 10:
    iVar6 = SSL_pending(pSVar11);
    uVar9 = (ulong)iVar6;
    if (uVar9 == 0) {
      pBVar8 = SSL_get_rbio(pSVar11);
      lVar12 = BIO_ctrl(pBVar8,10,0,(void *)0x0);
      uVar9 = (ulong)(int)lVar12;
    }
    break;
  case 0xb:
    BIO_clear_flags((BIO *)param_1,0xf);
    pBVar8 = SSL_get_wbio(pSVar11);
    uVar9 = BIO_ctrl(pBVar8,0xb,param_3,param_4);
    BIO_copy_next_retry((BIO *)param_1);
    break;
  case 0xc:
    puVar10 = (undefined8 *)BIO_get_data(param_4);
    SSL_free((SSL *)*puVar10);
    pSVar11 = SSL_dup(pSVar11);
    uVar1 = *(undefined4 *)(puVar7 + 1);
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    uVar4 = puVar7[4];
    uVar5 = puVar7[5];
    *puVar10 = pSVar11;
    *(undefined4 *)(puVar10 + 1) = uVar1;
    uVar9 = (ulong)(pSVar11 != (SSL *)0x0);
    puVar10[4] = uVar4;
    puVar10[5] = uVar5;
    puVar10[2] = uVar2;
    puVar10[3] = uVar3;
    break;
  case 0xd:
    pBVar8 = SSL_get_wbio(pSVar11);
    param_2 = 0xd;
    goto LAB_00100513;
  case 0x5b:
    iVar6 = SSL_get_rpoll_descriptor(pSVar11,param_4);
    uVar9 = (ulong)(iVar6 != 0);
    break;
  case 0x5c:
    iVar6 = SSL_get_wpoll_descriptor(pSVar11,param_4);
    uVar9 = (ulong)(iVar6 != 0);
    break;
  case 0x65:
    BIO_clear_flags((BIO *)param_1,0xf);
    BIO_set_retry_reason(param_1,0);
    iVar6 = SSL_do_handshake(pSVar11);
    uVar9 = (ulong)iVar6;
    iVar6 = SSL_get_error(pSVar11,iVar6);
    if (iVar6 == 4) {
      BIO_set_flags((BIO *)param_1,0xc);
      BIO_set_retry_reason(param_1,1);
    }
    else if (iVar6 < 5) {
      if (iVar6 == 2) {
        BIO_set_flags((BIO *)param_1,9);
      }
      else if (iVar6 == 3) {
        BIO_set_flags((BIO *)param_1,10);
      }
    }
    else if (iVar6 == 7) {
      BIO_set_flags((BIO *)param_1,0xc);
      iVar6 = BIO_get_retry_reason(pBVar8);
      BIO_set_retry_reason(param_1,iVar6);
    }
    break;
  case 0x69:
    pBVar8 = SSL_get_rbio(pSVar11);
    param_2 = 0x69;
LAB_00100513:
    uVar9 = BIO_ctrl(pBVar8,param_2,param_3,param_4);
    return uVar9;
  case 0x6d:
    if (pSVar11 != (SSL *)0x0) {
      if (param_1 != (SSL *)0x0) {
        ptr = (long *)BIO_get_data(param_1);
        iVar6 = BIO_get_shutdown(param_1);
        if (iVar6 != 0) {
          if ((*ptr != 0) && (iVar6 = SSL_in_init(), iVar6 == 0)) {
            SSL_shutdown((SSL *)*ptr);
          }
          iVar6 = BIO_get_init(param_1);
          if (iVar6 != 0) {
            SSL_free((SSL *)*ptr);
          }
          BIO_clear_flags((BIO *)param_1,-1);
          BIO_set_init(param_1,0);
        }
        CRYPTO_free(ptr);
      }
      lVar12 = CRYPTO_zalloc(0x30,"ssl/bio_ssl.c",0x40);
      if (lVar12 == 0) {
        return 0;
      }
      BIO_set_init(param_1,0);
      BIO_set_data(param_1,lVar12);
      BIO_clear_flags((BIO *)param_1,-1);
      puVar7 = (undefined8 *)BIO_get_data(param_1);
    }
    BIO_set_shutdown(param_1,param_3 & 0xffffffff);
    *puVar7 = param_4;
    pBVar13 = SSL_get_rbio(param_4);
    if (pBVar13 != (BIO *)0x0) {
      iVar6 = BIO_up_ref(pBVar13);
      if (iVar6 == 0) {
        return 0;
      }
      if (pBVar8 != (BIO *)0x0) {
        BIO_push(pBVar13,pBVar8);
      }
      BIO_set_next(param_1,pBVar13);
    }
    BIO_set_init(param_1,1);
    goto LAB_001005d8;
  case 0x6e:
    if (param_4 == (SSL *)0x0) {
      return 0;
    }
    *(SSL **)param_4 = pSVar11;
    goto LAB_001005d8;
  case 0x77:
    if (param_3 == 0) {
      SSL_set_accept_state(pSVar11);
    }
    else {
      SSL_set_connect_state(pSVar11);
    }
LAB_001005d8:
    uVar9 = 1;
    break;
  case 0x7d:
    uVar9 = puVar7[2];
    if (0x1ff < (long)param_3) {
      puVar7[2] = param_3;
    }
    break;
  case 0x7e:
    uVar9 = (ulong)*(int *)(puVar7 + 1);
    break;
  case 0x7f:
    uVar9 = puVar7[4];
    if ((long)param_3 < 0x3c) {
      param_3 = 5;
    }
    puVar7[4] = param_3;
    tVar14 = time((time_t *)0x0);
    puVar7[5] = tVar14;
  }
  return uVar9;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_ssl(void)

{
  return (BIO_METHOD *)methods_sslp;
}



BIO * BIO_new_ssl(SSL_CTX *ctx,int client)

{
  BIO_METHOD *type;
  BIO *a;
  SSL *s;
  
  type = BIO_f_ssl();
  a = BIO_new(type);
  if (a != (BIO *)0x0) {
    s = SSL_new(ctx);
    if (s != (SSL *)0x0) {
      if (client == 0) {
        SSL_set_accept_state(s);
      }
      else {
        SSL_set_connect_state(s);
      }
      BIO_ctrl(a,0x6d,1,s);
      return a;
    }
    BIO_free(a);
  }
  return (BIO *)0x0;
}



BIO * BIO_new_ssl_connect(SSL_CTX *ctx)

{
  stack_st_SSL_CIPHER *psVar1;
  BIO_METHOD *type;
  BIO *bp;
  stack_st_SSL_CIPHER *psVar2;
  BIO *b;
  BIO *pBVar3;
  long lVar4;
  
  type = BIO_s_connect();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  if ((((ctx == (SSL_CTX *)0x0) ||
       (((psVar1 = ctx->cipher_list, psVar2 = (stack_st_SSL_CIPHER *)OSSL_QUIC_client_method(),
         psVar1 != psVar2 &&
         (psVar1 = ctx->cipher_list,
         psVar2 = (stack_st_SSL_CIPHER *)OSSL_QUIC_client_thread_method(), psVar1 != psVar2)) &&
        (psVar1 = ctx->cipher_list, psVar2 = (stack_st_SSL_CIPHER *)OSSL_QUIC_server_method(),
        psVar1 != psVar2)))) || (lVar4 = BIO_ctrl(bp,0x9d,2,(void *)0x0), lVar4 != 0)) &&
     (b = BIO_new_ssl(ctx,1), b != (BIO *)0x0)) {
    pBVar3 = BIO_push(b,bp);
    if (pBVar3 != (BIO *)0x0) {
      return pBVar3;
    }
  }
  else {
    b = (BIO *)0x0;
  }
  BIO_free(b);
  BIO_free(bp);
  return (BIO *)0x0;
}



BIO * BIO_new_buffer_ssl_connect(SSL_CTX *ctx)

{
  stack_st_SSL_CIPHER *psVar1;
  stack_st_SSL_CIPHER *psVar2;
  BIO_METHOD *type;
  BIO *pBVar3;
  BIO *append;
  BIO *pBVar4;
  
  if (ctx != (SSL_CTX *)0x0) {
    psVar1 = ctx->cipher_list;
    psVar2 = (stack_st_SSL_CIPHER *)OSSL_QUIC_client_method();
    if (psVar1 != psVar2) {
      psVar1 = ctx->cipher_list;
      psVar2 = (stack_st_SSL_CIPHER *)OSSL_QUIC_client_thread_method();
      if (psVar1 != psVar2) {
        psVar1 = ctx->cipher_list;
        psVar2 = (stack_st_SSL_CIPHER *)OSSL_QUIC_server_method();
        if (psVar1 != psVar2) goto LAB_00100bfc;
      }
    }
    pBVar3 = BIO_new_ssl_connect(ctx);
    return pBVar3;
  }
LAB_00100bfc:
  type = BIO_f_buffer();
  pBVar3 = BIO_new(type);
  if (pBVar3 != (BIO *)0x0) {
    append = BIO_new_ssl_connect(ctx);
    if (append != (BIO *)0x0) {
      pBVar4 = BIO_push(pBVar3,append);
      if (pBVar4 != (BIO *)0x0) {
        return pBVar4;
      }
    }
    BIO_free(pBVar3);
    BIO_free(append);
  }
  return (BIO *)0x0;
}



int BIO_ssl_copy_session_id(BIO *to,BIO *from)

{
  int extraout_EAX;
  BIO *pBVar1;
  BIO *pBVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pBVar1 = BIO_find_type(to,0x207);
  pBVar2 = BIO_find_type(from,0x207);
  if ((pBVar1 != (BIO *)0x0) && (pBVar2 != (BIO *)0x0)) {
    puVar3 = (undefined8 *)BIO_get_data(pBVar1);
    puVar4 = (undefined8 *)BIO_get_data(pBVar2);
    if (((SSL *)*puVar3 != (SSL *)0x0) && ((SSL *)*puVar4 != (SSL *)0x0)) {
      SSL_copy_session_id((SSL *)*puVar3,(SSL *)*puVar4);
      return (int)(extraout_EAX != 0);
    }
  }
  return 0;
}



void BIO_ssl_shutdown(BIO *ssl_bio)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (ssl_bio == (BIO *)0x0) {
    return;
  }
  do {
    iVar1 = BIO_method_type(ssl_bio);
    if (((iVar1 == 0x207) &&
        (puVar2 = (undefined8 *)BIO_get_data(ssl_bio), puVar2 != (undefined8 *)0x0)) &&
       ((SSL *)*puVar2 != (SSL *)0x0)) {
      SSL_shutdown((SSL *)*puVar2);
      ssl_bio = BIO_next(ssl_bio);
    }
    else {
      ssl_bio = BIO_next(ssl_bio);
    }
  } while (ssl_bio != (BIO *)0x0);
  return;
}


