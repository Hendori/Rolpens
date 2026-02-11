
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tls_engine_finish(ENGINE *e)

{
  int iVar1;
  
  iVar1 = ENGINE_finish(e);
  return iVar1;
}



EVP_CIPHER * tls_get_cipher_from_engine(int param_1)

{
  ENGINE *e;
  EVP_CIPHER *pEVar1;
  
  pEVar1 = (EVP_CIPHER *)0x0;
  e = ENGINE_get_cipher_engine(param_1);
  if (e != (ENGINE *)0x0) {
    pEVar1 = ENGINE_get_cipher(e,param_1);
    ENGINE_finish(e);
  }
  return pEVar1;
}



EVP_MD * tls_get_digest_from_engine(int param_1)

{
  ENGINE *e;
  EVP_MD *pEVar1;
  
  pEVar1 = (EVP_MD *)0x0;
  e = ENGINE_get_digest_engine(param_1);
  if (e != (ENGINE *)0x0) {
    pEVar1 = ENGINE_get_digest(e,param_1);
    ENGINE_finish(e);
  }
  return pEVar1;
}



void tls_engine_load_ssl_client_cert(SSL *param_1,X509 **param_2,EVP_PKEY **param_3)

{
  stack_st_X509_NAME *ca_dn;
  
  ca_dn = SSL_get_client_CA_list(param_1);
  ENGINE_load_ssl_client_cert
            ((ENGINE *)param_1->method[2].ssl_peek,param_1,ca_dn,param_2,param_3,
             (stack_st_X509 **)0x0,(UI_METHOD *)0x0,(void *)0x0);
  return;
}



int SSL_CTX_set_client_cert_engine(SSL_CTX *ctx,ENGINE *e)

{
  int iVar1;
  ENGINE_SSL_CLIENT_CERT_PTR pEVar2;
  
  iVar1 = ENGINE_init(e);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("ssl/tls_depr.c",0x54,"SSL_CTX_set_client_cert_engine");
    ERR_set_error(0x14,0x80026,0);
    iVar1 = 0;
  }
  else {
    pEVar2 = ENGINE_get_ssl_client_cert_function(e);
    if (pEVar2 == (ENGINE_SSL_CLIENT_CERT_PTR)0x0) {
      ERR_new();
      ERR_set_debug("ssl/tls_depr.c",0x58,"SSL_CTX_set_client_cert_engine");
      ERR_set_error(0x14,0x14b,0);
      ENGINE_finish(e);
      iVar1 = 0;
    }
    else {
      ctx->psk_identity_hint = (char *)e;
      iVar1 = 1;
    }
  }
  return iVar1;
}



bool ssl_hmac_old_new(long param_1)

{
  long lVar1;
  
  lVar1 = HMAC_CTX_new();
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 != 0;
}



void ssl_hmac_old_free(long param_1)

{
  HMAC_CTX_free(*(undefined8 *)(param_1 + 8));
  return;
}



void ssl_hmac_old_init(long param_1,void *param_2,int param_3,char *param_4)

{
  EVP_MD *md;
  
  md = EVP_get_digestbyname(param_4);
  HMAC_Init_ex(*(HMAC_CTX **)(param_1 + 8),param_2,param_3,md,(ENGINE *)0x0);
  return;
}



void ssl_hmac_old_update(long param_1,uchar *param_2,size_t param_3)

{
  HMAC_Update(*(HMAC_CTX **)(param_1 + 8),param_2,param_3);
  return;
}



undefined8 ssl_hmac_old_final(long param_1,uchar *param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = HMAC_Final(*(HMAC_CTX **)(param_1 + 8),param_2,&local_14);
  uVar2 = 0;
  if (0 < iVar1) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = (ulong)local_14;
    }
    uVar2 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ssl_hmac_old_size(long param_1)

{
  HMAC_size(*(undefined8 *)(param_1 + 8));
  return;
}



undefined8 ssl_hmac_get0_HMAC_CTX(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



EVP_PKEY * ssl_dh_to_pkey(dh_st *param_1)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if (param_1 != (dh_st *)0x0) {
    pkey = EVP_PKEY_new();
    iVar1 = EVP_PKEY_set1_DH(pkey,param_1);
    if (0 < iVar1) {
      return pkey;
    }
    EVP_PKEY_free(pkey);
  }
  return (EVP_PKEY *)0x0;
}



undefined8
ssl_set_tmp_ecdh_groups
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,EC_KEY *param_7)

{
  EC_GROUP *group;
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  group = EC_KEY_get0_group(param_7);
  if (group == (EC_GROUP *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/tls_depr.c",0xb7,"ssl_set_tmp_ecdh_groups");
    ERR_set_error(0x14,0x122,0);
  }
  else {
    local_44 = EC_GROUP_get_curve_name(group);
    if (local_44 != 0) {
      uVar1 = tls1_set_groups(param_1,param_2,param_3,param_4,param_5,param_6,&local_44,1);
      goto LAB_00100345;
    }
  }
  uVar1 = 0;
LAB_00100345:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SSL_CTX_set_tmp_dh_callback(SSL_CTX *ctx,dh *dh)

{
  SSL_CTX_callback_ctrl(ctx,6,(_func_3378 *)dh);
  return;
}



void SSL_set_tmp_dh_callback(SSL *ssl,dh *dh)

{
  SSL_callback_ctrl(ssl,6,(_func_3375 *)dh);
  return;
}


