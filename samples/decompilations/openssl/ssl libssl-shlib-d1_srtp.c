
undefined4 ssl_ctx_make_profiles(char *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t __n;
  size_t sVar4;
  char *__s1;
  undefined1 *puVar5;
  
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("ssl/d1_srtp.c",0x68,"ssl_ctx_make_profiles");
    ERR_set_error(0x14,0x16a,0);
  }
  else {
    while( true ) {
      pcVar3 = strchr(param_1,0x3a);
      if (pcVar3 == (char *)0x0) {
        sVar4 = strlen(param_1);
      }
      else {
        sVar4 = (long)pcVar3 - (long)param_1;
      }
      __n = 0x16;
      puVar5 = srtp_known_profiles;
      __s1 = "SRTP_AES128_CM_SHA1_80";
      while ((__n != sVar4 || (iVar1 = strncmp(__s1,param_1,__n), iVar1 != 0))) {
        __s1 = *(char **)(puVar5 + 0x10);
        puVar5 = puVar5 + 0x10;
        if (__s1 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/d1_srtp.c",0x7d,"ssl_ctx_make_profiles");
          ERR_set_error(0x14,0x16c,0);
          goto LAB_00100138;
        }
        __n = strlen(__s1);
      }
      iVar1 = OPENSSL_sk_find(lVar2,puVar5);
      if (-1 < iVar1) break;
      iVar1 = OPENSSL_sk_push(lVar2,puVar5);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("ssl/d1_srtp.c",0x79,"ssl_ctx_make_profiles");
        ERR_set_error(0x14,0x16a,0);
        goto LAB_00100138;
      }
      if (pcVar3 == (char *)0x0) {
        OPENSSL_sk_free(*param_2);
        *param_2 = lVar2;
        return 0;
      }
      param_1 = pcVar3 + 1;
    }
    ERR_new();
    ERR_set_debug("ssl/d1_srtp.c",0x73,"ssl_ctx_make_profiles");
    ERR_set_error(0x14,0x161,0);
LAB_00100138:
    OPENSSL_sk_free(lVar2);
  }
  return 1;
}



int SSL_CTX_set_tlsext_use_srtp(SSL_CTX *ctx,char *profiles)

{
  stack_st_SSL_CIPHER *psVar1;
  int iVar2;
  stack_st_SSL_CIPHER *psVar3;
  
  psVar1 = ctx->cipher_list;
  psVar3 = (stack_st_SSL_CIPHER *)OSSL_QUIC_client_method();
  if (psVar1 != psVar3) {
    psVar1 = ctx->cipher_list;
    psVar3 = (stack_st_SSL_CIPHER *)OSSL_QUIC_client_thread_method();
    if (psVar1 != psVar3) {
      psVar1 = ctx->cipher_list;
      psVar3 = (stack_st_SSL_CIPHER *)OSSL_QUIC_server_method();
      if (psVar1 != psVar3) {
        iVar2 = ssl_ctx_make_profiles(profiles,&ctx[1].generate_session_id);
        return iVar2;
      }
    }
  }
  return 1;
}



int SSL_set_tlsext_use_srtp(SSL *ctx,char *profiles)

{
  int iVar1;
  
  if ((ctx != (SSL *)0x0) && (ctx->version == 0)) {
    iVar1 = ssl_ctx_make_profiles(profiles,&ctx[4].enc_read_ctx);
    return iVar1;
  }
  return 1;
}



stack_st_SRTP_PROTECTION_PROFILE * SSL_get_srtp_profiles(SSL *ssl)

{
  SSL_METHOD *pSVar1;
  
  pSVar1 = (SSL_METHOD *)0x0;
  if ((((ssl != (SSL *)0x0) && (ssl->version == 0)) &&
      (pSVar1 = (SSL_METHOD *)ssl[4].enc_read_ctx, pSVar1 == (SSL_METHOD *)0x0)) &&
     (pSVar1 = ssl->method, pSVar1 != (SSL_METHOD *)0x0)) {
    return (stack_st_SRTP_PROTECTION_PROFILE *)pSVar1[4].ssl_write;
  }
  return (stack_st_SRTP_PROTECTION_PROFILE *)pSVar1;
}



SRTP_PROTECTION_PROFILE * SSL_get_selected_srtp_profile(SSL *s)

{
  if ((s != (SSL *)0x0) && (s->version == 0)) {
    return (SRTP_PROTECTION_PROFILE *)s[4].read_hash;
  }
  return (SRTP_PROTECTION_PROFILE *)0x0;
}


