
void client_srp_cb(undefined8 param_1,long param_2)

{
  CRYPTO_strdup(*(char **)(param_2 + 0x28),"test/helpers/handshake_srp.c",0x19);
  return;
}



undefined8 server_srp_cb(undefined8 param_1,undefined4 *param_2,long param_3)

{
  char *__s1;
  int iVar1;
  char *__s2;
  
  __s2 = (char *)SSL_get_srp_username();
  __s1 = *(char **)(param_3 + 0x20);
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 == 0) {
    iVar1 = SSL_set_srp_server_param_pw(param_1,__s1,*(undefined8 *)(param_3 + 0x28),&_LC1);
    if (-1 < iVar1) {
      return 0;
    }
    *param_2 = 0x50;
  }
  return 2;
}



undefined8
configure_handshake_ctx_for_srp
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          long param_6,long param_7)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*(long *)(param_4 + 0x68) != 0) {
    SSL_CTX_set_srp_username_callback(param_1,server_srp_cb);
    pcVar2 = CRYPTO_strdup(*(char **)(param_4 + 0x68),"test/helpers/handshake_srp.c",0x33);
    pcVar3 = *(char **)(param_4 + 0x70);
    *(char **)(param_5 + 0x20) = pcVar2;
    pcVar3 = CRYPTO_strdup(pcVar3,"test/helpers/handshake_srp.c",0x34);
    *(char **)(param_5 + 0x28) = pcVar3;
    if ((*(void **)(param_5 + 0x20) == (void *)0x0) || (pcVar3 == (char *)0x0)) {
      CRYPTO_free(*(void **)(param_5 + 0x20));
      CRYPTO_free(*(void **)(param_5 + 0x28));
      *(undefined1 (*) [16])(param_5 + 0x20) = (undefined1  [16])0x0;
      return 0;
    }
    SSL_CTX_set_srp_cb_arg(param_1,param_5);
  }
  if (*(long *)(param_4 + 0xa8) != 0) {
    iVar1 = test_ptr("test/helpers/handshake_srp.c",0x3f,"server2_ctx",param_2);
    if (iVar1 == 0) {
      return 0;
    }
    SSL_CTX_set_srp_username_callback(param_2,server_srp_cb);
    pcVar2 = CRYPTO_strdup(*(char **)(param_4 + 0xa8),"test/helpers/handshake_srp.c",0x42);
    pcVar3 = *(char **)(param_4 + 0xb0);
    *(char **)(param_6 + 0x20) = pcVar2;
    pcVar3 = CRYPTO_strdup(pcVar3,"test/helpers/handshake_srp.c",0x43);
    *(char **)(param_6 + 0x28) = pcVar3;
    if ((pcVar3 == (char *)0x0) || (*(void **)(param_6 + 0x20) == (void *)0x0)) {
      CRYPTO_free(*(void **)(param_6 + 0x20));
      CRYPTO_free(*(void **)(param_6 + 0x28));
      *(undefined1 (*) [16])(param_6 + 0x20) = (undefined1  [16])0x0;
      return 0;
    }
    SSL_CTX_set_srp_cb_arg(param_2,param_6);
  }
  if (*(long *)(param_4 + 0x30) == 0) {
    return 1;
  }
  iVar1 = SSL_CTX_set_srp_username(param_3);
  iVar1 = test_true("test/helpers/handshake_srp.c",0x4e,
                    "SSL_CTX_set_srp_username(client_ctx, extra->client.srp_user)",iVar1 != 0);
  if (iVar1 != 0) {
    SSL_CTX_set_srp_client_pwd_callback(param_3,0x100000);
    pcVar3 = CRYPTO_strdup(*(char **)(param_4 + 0x38),"test/helpers/handshake_srp.c",0x52);
    *(char **)(param_7 + 0x28) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      SSL_CTX_set_srp_cb_arg(param_3,param_7);
      return 1;
    }
  }
  return 0;
}


