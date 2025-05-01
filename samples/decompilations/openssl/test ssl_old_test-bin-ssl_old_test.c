
undefined8 cb_client_npn(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  *param_2 = "testproto";
  *param_3 = 9;
  return 0;
}



undefined8 cb_server_npn(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = "\ttestproto";
  *param_3 = 10;
  return 0;
}



undefined8 cb_server_rejects_npn(void)

{
  return 3;
}



undefined8 custom_ext_0_cli_add_cb(undefined8 param_1,int param_2)

{
  if (param_2 != 1000) {
    custom_ext_error = 1;
  }
  return 0;
}



undefined8 custom_ext_0_cli_parse_cb(void)

{
  return 1;
}



undefined8
custom_ext_1_cli_add_cb(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != 0x3e9) {
    custom_ext_error = 1;
  }
  *param_3 = &custom_ext_cli_string;
  *param_4 = 3;
  return 1;
}



undefined8
custom_ext_2_cli_add_cb(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != 0x3ea) {
    custom_ext_error = 1;
  }
  *param_3 = &custom_ext_cli_string;
  *param_4 = 3;
  return 1;
}



undefined8 custom_ext_2_cli_parse_cb(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  if (param_2 != 0x3ea) {
    custom_ext_error = 1;
  }
  if (param_4 != 0) {
    custom_ext_error = 1;
  }
  return 1;
}



undefined8
custom_ext_3_cli_add_cb(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != 0x3eb) {
    custom_ext_error = 1;
  }
  *param_3 = &custom_ext_cli_string;
  *param_4 = 3;
  return 1;
}



undefined8 custom_ext_0_srv_parse_cb(void)

{
  custom_ext_error = 1;
  return 1;
}



undefined8 custom_ext_0_srv_add_cb(void)

{
  custom_ext_error = 1;
  return 0;
}



undefined8 custom_ext_1_srv_add_cb(void)

{
  return 0;
}



undefined8
custom_ext_2_srv_add_cb
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = 0;
  *param_4 = 0;
  return 1;
}



undefined8
custom_ext_3_srv_add_cb
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = &custom_ext_srv_string;
  *param_4 = 4;
  return 1;
}



undefined4 protocol_from_string(char *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp("ssl3",param_1);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = strcmp("tls1",param_1);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strcmp("tls1.1",param_1);
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = strcmp("tls1.2",param_1);
        if (iVar1 == 0) {
          lVar2 = 3;
        }
        else {
          iVar1 = strcmp("tls1.3",param_1);
          if (iVar1 == 0) {
            lVar2 = 4;
          }
          else {
            iVar1 = strcmp("dtls1",param_1);
            if (iVar1 == 0) {
              lVar2 = 5;
            }
            else {
              iVar1 = strcmp("dtls1.2",param_1);
              if (iVar1 != 0) {
                return 0xffffffff;
              }
              lVar2 = 6;
            }
          }
        }
      }
    }
  }
  return *(undefined4 *)(versions_1 + lVar2 * 0x10 + 8);
}



void * next_protos_parse(long *param_1,char *param_2)

{
  size_t sVar1;
  void *ptr;
  ulong uVar2;
  size_t sVar3;
  ulong uVar4;
  
  sVar1 = strlen(param_2);
  if (sVar1 < 0xffff) {
    ptr = CRYPTO_malloc((int)(sVar1 + 1),"test/ssl_old_test.c",0x10b);
    if (ptr != (void *)0x0) {
      uVar2 = 1;
      sVar3 = 0;
      uVar4 = 0;
      while( true ) {
        if ((sVar3 == sVar1) || (param_2[sVar3] == ',')) {
          if (0xff < sVar3 - uVar4) {
            CRYPTO_free(ptr);
            return (void *)0x0;
          }
          *(char *)((long)ptr + uVar4) = (char)sVar3 - (char)uVar4;
          uVar4 = uVar2;
        }
        else {
          *(char *)((long)ptr + uVar2) = param_2[sVar3];
        }
        if (sVar1 < uVar2) break;
        uVar2 = uVar2 + 1;
        sVar3 = sVar3 + 1;
      }
      *param_1 = sVar1 + 1;
      return ptr;
    }
  }
  return (void *)0x0;
}



undefined8 custom_ext_3_srv_parse_cb(undefined8 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != 0x3eb) {
    custom_ext_error = 1;
  }
  if (param_4 != 3) {
    custom_ext_error = 1;
  }
  iVar1 = memcmp(param_3,&custom_ext_cli_string,param_4);
  if (iVar1 != 0) {
    custom_ext_error = 1;
  }
  return 1;
}



undefined8 custom_ext_2_srv_parse_cb(undefined8 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != 0x3ea) {
    custom_ext_error = 1;
  }
  if (param_4 != 3) {
    custom_ext_error = 1;
  }
  iVar1 = memcmp(param_3,&custom_ext_cli_string,param_4);
  if (iVar1 != 0) {
    custom_ext_error = 1;
  }
  return 1;
}



undefined8 custom_ext_1_srv_parse_cb(undefined8 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != 0x3e9) {
    custom_ext_error = 1;
  }
  if (param_4 != 3) {
    custom_ext_error = 1;
  }
  iVar1 = memcmp(param_3,&custom_ext_cli_string,param_4);
  if (iVar1 != 0) {
    custom_ext_error = 1;
  }
  return 1;
}



undefined8 custom_ext_3_cli_parse_cb(undefined8 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != 0x3eb) {
    custom_ext_error = 1;
  }
  if (param_4 != 4) {
    custom_ext_error = 1;
  }
  iVar1 = memcmp(&custom_ext_srv_string,param_3,param_4);
  if (iVar1 != 0) {
    custom_ext_error = 1;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
cb_server_alpn(undefined8 param_1,uchar **param_2,byte *param_3,uchar *param_4,uint param_5,
              undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  uchar *in;
  uchar *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uchar *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  byte bVar9;
  uint local_48 [2];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  in = (uchar *)next_protos_parse(local_48,param_6);
  if (in == (uchar *)0x0) {
    __fprintf_chk(_stderr,2,"failed to parser ALPN server protocol string: %s\n",param_6);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = SSL_select_next_proto(param_2,param_3,in,local_48[0],param_4,param_5);
  if (iVar2 == 1) {
    puVar3 = (uchar *)CRYPTO_malloc((uint)*param_3,"test/ssl_old_test.c",0x139);
    alpn_selected = puVar3;
    if (puVar3 == (uchar *)0x0) {
      fwrite("failed to allocate memory\n",1,0x1a,_stderr);
      CRYPTO_free(in);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar1 = *param_3;
    puVar7 = *param_2;
    if (bVar1 < 8) {
      if ((bVar1 & 4) == 0) {
        if ((bVar1 != 0) && (*puVar3 = *puVar7, (bVar1 & 2) != 0)) {
          *(undefined2 *)(puVar3 + ((ulong)bVar1 - 2)) =
               *(undefined2 *)(puVar7 + ((ulong)bVar1 - 2));
        }
      }
      else {
        *(undefined4 *)puVar3 = *(undefined4 *)puVar7;
        *(undefined4 *)(puVar3 + ((ulong)bVar1 - 4)) = *(undefined4 *)(puVar7 + ((ulong)bVar1 - 4));
      }
    }
    else {
      *(undefined8 *)puVar3 = *(undefined8 *)puVar7;
      *(undefined8 *)(puVar3 + ((ulong)bVar1 - 8)) = *(undefined8 *)(puVar7 + ((ulong)bVar1 - 8));
      lVar6 = (long)puVar3 - (long)((ulong)(puVar3 + 8) & 0xfffffffffffffff8);
      puVar7 = puVar7 + -lVar6;
      puVar8 = (undefined8 *)((ulong)(puVar3 + 8) & 0xfffffffffffffff8);
      for (uVar5 = (ulong)((uint)bVar1 + (int)lVar6 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *(undefined8 *)puVar7;
        puVar7 = puVar7 + ((ulong)bVar9 * -2 + 1) * 8;
        puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
      }
    }
    *param_2 = puVar3;
    CRYPTO_free(in);
    uVar4 = 0;
  }
  else {
    CRYPTO_free(in);
    uVar4 = 3;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint psk_client_callback(SSL *ssl,char *hint,char *identity,uint max_identity_len,uchar *psk,
                        uint max_psk_len)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BIO_snprintf(identity,(ulong)max_identity_len,"Client_identity");
  if (-1 < iVar2) {
    if (debug != 0) {
      __fprintf_chk(_stderr,2,"client: created identity \'%s\' len=%d\n",identity,iVar2);
    }
    pcVar1 = psk_key;
    local_28 = (BIGNUM *)0x0;
    iVar2 = BN_hex2bn(&local_28,psk_key);
    if (iVar2 == 0) {
      BIO_printf(_bio_err,"Could not convert PSK key \'%s\' to BIGNUM\n",pcVar1);
      BN_free(local_28);
    }
    else {
      iVar3 = BN_num_bits(local_28);
      iVar2 = iVar3 + 7;
      if (iVar3 + 7 < 0) {
        iVar2 = iVar3 + 0xe;
      }
      if ((int)max_psk_len < iVar2 >> 3) {
        iVar3 = BN_num_bits(local_28);
        iVar2 = iVar3 + 0xe;
        if (-1 < iVar3 + 7) {
          iVar2 = iVar3 + 7;
        }
        BIO_printf(_bio_err,"psk buffer of callback is too small (%d) for key (%d)\n",
                   (ulong)max_psk_len,(ulong)(uint)(iVar2 >> 3));
        BN_free(local_28);
      }
      else {
        uVar4 = BN_bn2bin(local_28,psk);
        BN_free(local_28);
        if (-1 < (int)uVar4) goto LAB_00100750;
      }
    }
  }
  uVar4 = 0;
LAB_00100750:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int verify_callback(int param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  int iVar2;
  X509 *a;
  X509_NAME *a_00;
  char *pcVar3;
  long in_FS_OFFSET;
  char acStack_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  a = X509_STORE_CTX_get_current_cert(param_2);
  a_00 = X509_get_subject_name(a);
  pcVar3 = X509_NAME_oneline(a_00,acStack_128,0x100);
  if (pcVar3 == (char *)0x0) {
    if (param_1 != 0) goto LAB_001008ff;
  }
  else {
    if (param_1 != 0) {
      iVar1 = X509_STORE_CTX_get_error_depth(param_2);
      __printf_chk(2,"depth=%d %s\n",iVar1,acStack_128);
      goto LAB_001008ff;
    }
    iVar1 = X509_STORE_CTX_get_error(param_2);
    iVar2 = X509_STORE_CTX_get_error_depth(param_2);
    __fprintf_chk(_stderr,2,"depth=%d error=%d %s\n",iVar2,iVar1,acStack_128);
  }
  iVar1 = X509_STORE_CTX_get_error(param_2);
  param_1 = 1;
  if (iVar1 < 0xb) {
    if (8 < iVar1) goto LAB_001008ff;
  }
  else if (iVar1 == 0x12) goto LAB_001008ff;
  pcVar3 = X509_verify_cert_error_string((long)iVar1);
  __fprintf_chk(_stderr,2,"Error string: %s\n",pcVar3);
  param_1 = 0;
LAB_001008ff:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 write_session(char *param_1,SSL_SESSION *param_2)

{
  BIO *bp;
  undefined8 uVar1;
  
  if (param_2 == (SSL_SESSION *)0x0) {
    BIO_printf(_bio_err,"No session information\n");
    uVar1 = 0;
  }
  else {
    bp = BIO_new_file(param_1,"w");
    if (bp == (BIO *)0x0) {
      BIO_printf(_bio_err,"Can\'t open session file %s\n",param_1);
      ERR_print_errors(_bio_err);
      uVar1 = 0;
    }
    else {
      PEM_write_bio_SSL_SESSION(bp,param_2);
      BIO_free(bp);
      uVar1 = 1;
    }
  }
  return uVar1;
}



int verify_npn(SSL *param_1,SSL *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  uint local_28;
  uint local_24;
  long *local_20;
  long *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  SSL_get0_next_proto_negotiated(param_1,(uchar **)&local_20,&local_28);
  SSL_get0_next_proto_negotiated(param_2,(uchar **)&local_18,&local_24);
  if (local_28 == 0) {
    if (local_24 == 0) {
LAB_00100b10:
      if (npn_server != 0) {
        if (npn_server_reject == 0) {
          iVar1 = -1;
          if (npn_client == 0) {
            iVar1 = 0;
          }
        }
        else {
          iVar1 = -(uint)(npn_client != 0);
        }
        goto LAB_00100a9b;
      }
LAB_00100b9b:
      iVar1 = 0;
      if (npn_server_reject == 0) {
        iVar1 = 0;
      }
      goto LAB_00100a9b;
    }
LAB_00100a27:
    BIO_printf(bio_stdout,"Server NPN: ");
    BIO_write(bio_stdout,local_18,local_24);
    BIO_printf(bio_stdout,"\n");
    if (local_28 != 0) goto LAB_00100b48;
    iVar1 = 0;
    if (local_24 == 0) goto LAB_00100b10;
LAB_00100a79:
    if (((local_24 == 9) && (*local_18 == 0x746f727074736574)) && ((char)local_18[1] == 'o')) {
      if (npn_client == 0) {
        if ((npn_server != 0) && (iVar1 == 0 && npn_server_reject == 0)) {
          iVar1 = 0;
          goto LAB_00100a9b;
        }
      }
      else if ((npn_server != 0) && (npn_server_reject == 0)) {
        iVar1 = -(uint)(iVar1 == 0);
        goto LAB_00100a9b;
      }
    }
  }
  else {
    BIO_printf(bio_stdout,"Client NPN: ");
    BIO_write(bio_stdout,local_20,local_28);
    BIO_printf(bio_stdout,"\n");
    if (local_24 != 0) goto LAB_00100a27;
    if (local_28 == 0) goto LAB_00100b10;
LAB_00100b48:
    if (((local_28 == 9) && (*local_20 == 0x746f727074736574)) && ((char)local_20[1] == 'o')) {
      iVar1 = 9;
      if (local_24 != 0) goto LAB_00100a79;
      if ((npn_client != 0) && (npn_server == 0)) goto LAB_00100b9b;
    }
  }
  iVar1 = -1;
LAB_00100a9b:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int verify_alpn(undefined8 param_1,SSL *param_2)

{
  char *__s2;
  uint uVar1;
  void *__s1;
  int iVar2;
  size_t sVar3;
  SSL_CTX *pSVar4;
  size_t __n;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  void *local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_44 = 0;
  SSL_get0_alpn_selected(param_1,&local_40,&local_48);
  SSL_get0_alpn_selected(param_2,&local_38,&local_44);
  CRYPTO_free(alpn_selected);
  __s1 = local_40;
  uVar1 = local_44;
  alpn_selected = (void *)0x0;
  if (local_40 == (void *)0x0) {
    if (local_48 == 0) {
      if (local_38 == (void *)0x0) {
        if (local_44 != 0) goto LAB_00100e6c;
      }
      else if (local_44 != 0) goto LAB_00100d90;
LAB_00100d53:
      iVar2 = 0;
      if (alpn_expected == (char *)0x0) goto LAB_00100d18;
      __n = 0;
LAB_00100cf1:
      __s2 = alpn_expected;
      sVar3 = strlen(alpn_expected);
      if (sVar3 == __n) {
        iVar2 = memcmp(__s1,__s2,__n);
        if (iVar2 == 0) goto LAB_00100d18;
      }
      BIO_printf(bio_stdout,"ALPN selected protocols not equal to expected protocol: %s\n",__s2);
    }
    else {
      BIO_printf(bio_stdout,"Inconsistent SSL_get0_alpn_selected() for client!\n");
    }
  }
  else {
    if (local_38 == (void *)0x0) {
      if (local_44 != 0) {
LAB_00100e6c:
        BIO_printf(bio_stdout,"Inconsistent SSL_get0_alpn_selected() for server!\n");
        goto LAB_00100da5;
      }
      if (local_48 == 0) goto LAB_00100d53;
    }
    else if (local_48 == local_44) {
      __n = (size_t)local_44;
      iVar2 = memcmp(local_40,local_38,__n);
      if (iVar2 == 0) {
        if (uVar1 == 0) goto LAB_00100d53;
        if (alpn_expected == (char *)0x0) {
          BIO_printf(bio_stdout,"ALPN unexpectedly negotiated\n");
          goto LAB_00100da5;
        }
        goto LAB_00100cf1;
      }
    }
LAB_00100d90:
    BIO_printf(bio_stdout,"ALPN selected protocols differ!\n");
  }
LAB_00100da5:
  BIO_printf(bio_stdout,"ALPN results: client: \'");
  BIO_write(bio_stdout,local_40,local_48);
  BIO_printf(bio_stdout,"\', server: \'");
  BIO_write(bio_stdout,local_38,local_44);
  BIO_printf(bio_stdout,"\'\n");
  BIO_printf(bio_stdout,"ALPN configured: client: \'%s\', server: \'",alpn_client);
  pSVar4 = SSL_get_SSL_CTX(param_2);
  if (s_ctx2 == pSVar4) {
    BIO_printf(bio_stdout,"%s\'\n",alpn_server2);
  }
  else {
    BIO_printf(bio_stdout,"%s\'\n",alpn_server);
  }
  iVar2 = -1;
LAB_00100d18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 serverinfo_cli_parse_cb(undefined8 param_1,int param_2)

{
  if (param_2 == 0x12) {
    serverinfo_sct_seen = serverinfo_sct_seen + 1;
    return 1;
  }
  if (param_2 != 0xf300) {
    serverinfo_other_seen = serverinfo_other_seen + 1;
    return 1;
  }
  serverinfo_tack_seen = serverinfo_tack_seen + 1;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long set_protocol_version(long param_1,SSL *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    iVar1 = protocol_from_string();
    if (iVar1 < 0) {
      BIO_printf(_bio_err,"Error parsing: %s\n",param_1);
      lVar2 = 0;
    }
    else {
      lVar2 = SSL_ctrl(param_2,param_3,(long)iVar1,(void *)0x0);
    }
    return lVar2;
  }
  return 1;
}



undefined8 servername_cb(SSL *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = SSL_get_servername(param_1,0);
  if (sn_server2 != 0) {
    if (((pcVar2 != (char *)0x0) && (s_ctx2 != (SSL_CTX *)0x0)) &&
       (iVar1 = OPENSSL_strcasecmp(pcVar2), iVar1 == 0)) {
      BIO_printf(bio_stdout,"Switching server context.\n");
      SSL_set_SSL_CTX(param_1,s_ctx2);
    }
    return 0;
  }
  BIO_printf(bio_stdout,"Servername 2 is NULL\n");
  return 3;
}



int app_verify_callback(X509_STORE_CTX *param_1,undefined8 *param_2)

{
  int iVar1;
  X509 *a;
  X509_NAME *a_00;
  char *pcVar2;
  long in_FS_OFFSET;
  char acStack_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = X509_verify_cert(param_1);
      return iVar1;
    }
  }
  else {
    a = (X509 *)X509_STORE_CTX_get0_cert();
    __printf_chk(2,"In app_verify_callback, allowing cert. ");
    __printf_chk(2,"Arg is: %s\n",*param_2);
    __printf_chk(2,"Finished printing do we have a context? 0x%p a cert? 0x%p\n",param_1,a);
    if (a != (X509 *)0x0) {
      a_00 = X509_get_subject_name(a);
      pcVar2 = X509_NAME_oneline(a_00,acStack_128,0x100);
      if (pcVar2 != (char *)0x0) {
        iVar1 = X509_STORE_CTX_get_error_depth(param_1);
        __printf_chk(2,"cert depth=%d %s\n",iVar1,acStack_128);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSL_SESSION * read_session(char *param_1)

{
  BIO *bp;
  SSL_SESSION *pSVar1;
  
  bp = BIO_new_file(param_1,"r");
  if (bp == (BIO *)0x0) {
    pSVar1 = (SSL_SESSION *)0x0;
    BIO_printf(_bio_err,"Can\'t open session file %s\n",param_1);
    ERR_print_errors(_bio_err);
  }
  else {
    pSVar1 = PEM_read_bio_SSL_SESSION(bp,(SSL_SESSION **)0x0,(undefined1 *)0x0,(void *)0x0);
    if (pSVar1 == (SSL_SESSION *)0x0) {
      BIO_printf(_bio_err,"Can\'t parse session file %s\n",param_1);
      ERR_print_errors(_bio_err);
    }
    BIO_free(bp);
  }
  return pSVar1;
}



void print_key_details(BIO *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  undefined6 local_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_id(param_2);
  if (iVar1 == 0x198) {
    iVar1 = EVP_PKEY_get_group_name(param_2,&local_78,0x50,local_80);
    if (iVar1 == 0) {
      local_78 = 0x776f6e6b6e75;
      uStack_72 = 0x206e;
      uStack_70 = 0x70756f7267;
    }
    uVar2 = EVP_PKEY_get_bits(param_2);
    BIO_printf(param_1,"%d bits EC (%s)",(ulong)uVar2,&local_78);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pcVar3 = "DH";
    if (((iVar1 != 0x1c) && (pcVar3 = "DSA", iVar1 != 0x74)) && (pcVar3 = "RSA", iVar1 != 6)) {
      pcVar3 = OBJ_nid2sn(iVar1);
    }
    uVar2 = EVP_PKEY_get_bits(param_2);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      BIO_printf(param_1,"%d bits %s",(ulong)uVar2,pcVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_details(SSL *param_1,undefined8 param_2)

{
  SSL_CIPHER *c;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_3c;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  c = SSL_get_current_cipher(param_1);
  pcVar1 = SSL_CIPHER_get_name(c);
  pcVar2 = SSL_CIPHER_get_version(c);
  pcVar3 = SSL_get_version(param_1);
  BIO_printf(bio_stdout,"%s%s, cipher %s %s",param_2,pcVar3,pcVar2,pcVar1);
  lVar4 = SSL_get0_peer_certificate(param_1);
  if (lVar4 != 0) {
    lVar4 = X509_get0_pubkey(lVar4);
    if (lVar4 != 0) {
      BIO_puts(bio_stdout,", ");
      print_key_details(bio_stdout,lVar4);
    }
  }
  lVar4 = SSL_ctrl(param_1,0x6d,0,&local_38);
  if (lVar4 != 0) {
    BIO_puts(bio_stdout,", temp key: ");
    print_key_details(bio_stdout,local_38);
    EVP_PKEY_free(local_38);
  }
  lVar4 = SSL_ctrl(param_1,0x6c,0,&local_3c);
  if (lVar4 != 0) {
    pcVar1 = OBJ_nid2sn(local_3c);
    BIO_printf(bio_stdout,", digest=%s",pcVar1);
  }
  BIO_printf(bio_stdout,"\n");
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 custom_ext_1_cli_parse_cb(void)

{
  return 1;
}



uint verify_servername_isra_0(SSL *param_1)

{
  SSL_CTX *pSVar1;
  uint uVar2;
  SSL_CTX *pSVar3;
  
  pSVar3 = SSL_get_SSL_CTX(param_1);
  uVar2 = sn_expect;
  if (sn_expect != 0) {
    pSVar1 = s_ctx;
    if (((sn_expect != 1) && (pSVar1 = s_ctx2, sn_expect != 2)) || (pSVar3 != pSVar1)) {
      BIO_printf(bio_stdout,"Servername: expected context %d\n",(ulong)sn_expect);
      if (pSVar3 == s_ctx2) {
        BIO_printf(bio_stdout,"Servername: context is 2\n");
      }
      else if (pSVar3 == s_ctx) {
        BIO_printf(bio_stdout,"Servername: context is 1\n");
      }
      else {
        BIO_printf(bio_stdout,"Servername: context is unknown\n");
      }
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint psk_server_callback(SSL *ssl,char *identity,uchar *psk,uint max_psk_len)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = strcmp(identity,"Client_identity");
  pcVar1 = psk_key;
  if (iVar2 == 0) {
    local_28 = (BIGNUM *)0x0;
    iVar2 = BN_hex2bn(&local_28,psk_key);
    if (iVar2 == 0) {
      BIO_printf(_bio_err,"Could not convert PSK key \'%s\' to BIGNUM\n",pcVar1);
      BN_free(local_28);
      uVar4 = 0;
    }
    else {
      iVar3 = BN_num_bits(local_28);
      iVar2 = iVar3 + 7;
      if (iVar3 + 7 < 0) {
        iVar2 = iVar3 + 0xe;
      }
      if ((int)max_psk_len < iVar2 >> 3) {
        iVar3 = BN_num_bits(local_28);
        iVar2 = iVar3 + 0xe;
        if (-1 < iVar3 + 7) {
          iVar2 = iVar3 + 7;
        }
        BIO_printf(_bio_err,"psk buffer of callback is too small (%d) for key (%d)\n",
                   (ulong)max_psk_len,(ulong)(uint)(iVar2 >> 3));
        BN_free(local_28);
        uVar4 = 0;
      }
      else {
        uVar4 = BN_bn2bin(local_28,psk);
        BN_free(local_28);
      }
    }
  }
  else {
    BIO_printf(_bio_err,"server: PSK error: client identity not found\n");
    uVar4 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint doit_localhost(SSL *param_1,SSL *param_2,int param_3,long param_4,long *param_5,long *param_6)

{
  bool bVar1;
  int iVar2;
  BIO *bp;
  long lVar3;
  BIO *bp_00;
  BIO_METHOD *pBVar4;
  clock_t cVar5;
  clock_t cVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  byte bVar13;
  BIO *local_20c0;
  BIO *local_20b8;
  long local_20b0;
  BIO *local_20a0;
  long local_2098;
  char local_2078 [48];
  undefined8 local_2048 [1025];
  long local_40;
  
  bVar13 = 0;
  pcVar9 = "[::1]:0";
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 4) {
    pcVar9 = "127.0.0.1:0";
  }
  bp = BIO_new_accept(pcVar9);
  if (bp == (BIO *)0x0) {
    bp_00 = (BIO *)0x0;
  }
  else {
    BIO_int_ctrl(bp,0x76,4,param_3);
    BIO_ctrl(bp,0x83,9,(void *)0x0);
    lVar3 = BIO_ctrl(bp,0x65,0,(void *)0x0);
    if (lVar3 < 1) {
      uVar11 = 0;
      uVar12 = 0;
      uVar8 = 1;
      bp_00 = (BIO *)0x0;
      local_20a0 = (BIO *)0x0;
      local_20c0 = (BIO *)0x0;
      local_20b8 = (BIO *)0x0;
      goto LAB_00101889;
    }
    pcVar9 = BIO_ptr_ctrl(bp,0x7c,1);
    BIO_snprintf(local_2078,0x28,":%s",pcVar9);
    bp_00 = BIO_new_connect(local_2078);
    if (bp_00 != (BIO *)0x0) {
      BIO_int_ctrl(bp_00,100,3,param_3);
      lVar3 = BIO_ctrl(bp_00,0x66,1,(void *)0x0);
      if ((0 < lVar3) && (lVar3 = BIO_ctrl(bp,0x66,1,(void *)0x0), 0 < lVar3)) {
        do {
          bVar1 = false;
          do {
            do {
              lVar3 = BIO_ctrl(bp_00,0x65,0,(void *)0x0);
              if (0 < lVar3) {
                if (!bVar1) goto LAB_00101800;
                goto LAB_001019d0;
              }
              iVar2 = BIO_test_flags(bp_00,8);
              if (iVar2 == 0) goto LAB_00101830;
            } while (bVar1);
            lVar3 = BIO_ctrl(bp,0x65,0,(void *)0x0);
            bVar1 = true;
          } while (0 < lVar3);
          iVar2 = BIO_test_flags(bp,8);
        } while (iVar2 != 0);
      }
      goto LAB_00101830;
    }
  }
  local_20a0 = (BIO *)0x0;
  uVar11 = 0;
  uVar12 = 0;
  uVar8 = 1;
  local_20c0 = (BIO *)0x0;
  local_20b8 = (BIO *)0x0;
  goto LAB_00101889;
LAB_001019d0:
  local_20a0 = BIO_pop(bp);
  BIO_free_all(bp);
  pBVar4 = BIO_f_ssl();
  local_20b8 = BIO_new(pBVar4);
  if (local_20b8 == (BIO *)0x0) {
    bp = (BIO *)0x0;
    uVar11 = 0;
    uVar12 = 0;
    uVar8 = 1;
    local_20c0 = (BIO *)0x0;
  }
  else {
    pBVar4 = BIO_f_ssl();
    local_20c0 = BIO_new(pBVar4);
    if (local_20c0 == (BIO *)0x0) {
      bp = (BIO *)0x0;
      uVar11 = 0;
      uVar12 = 0;
      uVar8 = 1;
    }
    else {
      SSL_set_connect_state(param_2);
      SSL_set_bio(param_2,bp_00,bp_00);
      BIO_ctrl(local_20c0,0x6d,0,param_2);
      SSL_set_accept_state(param_1);
      SSL_set_bio(param_1,local_20a0,local_20a0);
      BIO_ctrl(local_20b8,0x6d,0,param_1);
      lVar3 = param_4;
      local_20b0 = param_4;
      local_2098 = param_4;
LAB_00101aa0:
      do {
        cVar5 = clock();
        puVar10 = local_2048;
        for (lVar7 = 0x400; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
        }
        if ((debug != 0) && (iVar2 = SSL_in_init(param_2), iVar2 != 0)) {
          pcVar9 = SSL_state_string_long(param_2);
          __printf_chk(2,"client waiting in SSL_connect - %s\n",pcVar9);
        }
        if (0 < param_4) {
          lVar7 = 0x2000;
          if (param_4 < 0x2001) {
            lVar7 = param_4;
          }
          iVar2 = BIO_write(local_20c0,local_2048,(int)lVar7);
          if (iVar2 < 0) {
            iVar2 = BIO_test_flags(local_20c0,8);
            if (iVar2 != 0) goto joined_r0x00101c79;
            fwrite("ERROR in CLIENT (write)\n",1,0x18,_stderr);
LAB_00101df9:
            uVar12 = 1;
          }
          else {
            if (iVar2 != 0) {
              if (debug != 0) {
                __printf_chk(2,"client wrote %d\n");
              }
              param_4 = param_4 - iVar2;
              goto joined_r0x00101c79;
            }
LAB_00101f7b:
            uVar12 = 0;
            fwrite("SSL CLIENT STARTUP FAILED\n",1,0x1a,_stderr);
          }
          goto LAB_00101dff;
        }
joined_r0x00101c79:
        if (0 < local_20b0) {
          iVar2 = BIO_read(local_20c0,local_2048,0x2000);
          if (iVar2 < 0) {
            iVar2 = BIO_test_flags(local_20c0,8);
            if (iVar2 == 0) {
              fwrite("ERROR in CLIENT (read)\n",1,0x17,_stderr);
              goto LAB_00101df9;
            }
          }
          else {
            if (iVar2 == 0) goto LAB_00101f7b;
            if (debug != 0) {
              __printf_chk(2,"client read %d\n");
            }
            local_20b0 = local_20b0 - iVar2;
          }
        }
        iVar2 = debug;
        cVar6 = clock();
        *param_6 = *param_6 + (cVar6 - cVar5);
        cVar5 = clock();
        puVar10 = local_2048;
        for (lVar7 = 0x400; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
        }
        if ((iVar2 != 0) && (iVar2 = SSL_in_init(param_1), iVar2 != 0)) {
          pcVar9 = SSL_state_string_long(param_1);
          __printf_chk(2,"server waiting in SSL_accept - %s\n",pcVar9);
        }
        if (0 < lVar3) {
          lVar7 = 0x2000;
          if (lVar3 < 0x2001) {
            lVar7 = lVar3;
          }
          iVar2 = BIO_write(local_20b8,local_2048,(int)lVar7);
          if (-1 < iVar2) {
            if (iVar2 != 0) {
              if (debug != 0) {
                __printf_chk(2,"server wrote %d\n");
              }
              lVar3 = lVar3 - iVar2;
              goto joined_r0x00101d01;
            }
LAB_00101fa5:
            fwrite("SSL SERVER STARTUP FAILED\n",1,0x1a,_stderr);
            goto LAB_00101c11;
          }
          iVar2 = BIO_test_flags(local_20b8,8);
          if (iVar2 != 0) goto joined_r0x00101d01;
          fwrite("ERROR in SERVER (write)\n",1,0x18,_stderr);
LAB_00101e89:
          uVar11 = 1;
          goto LAB_00101c14;
        }
joined_r0x00101d01:
        if (0 < local_2098) {
          iVar2 = BIO_read(local_20b8,local_2048,0x2000);
          if (iVar2 < 0) {
            iVar2 = BIO_test_flags(local_20b8,8);
            if (iVar2 == 0) {
              fwrite("ERROR in SERVER (read)\n",1,0x17,_stderr);
              goto LAB_00101e89;
            }
            cVar6 = clock();
            *param_5 = *param_5 + (cVar6 - cVar5);
            goto LAB_00101aa0;
          }
          if (iVar2 == 0) goto LAB_00101fa5;
          if (debug != 0) {
            __printf_chk(2,"server read %d\n");
          }
          local_2098 = local_2098 - iVar2;
        }
        cVar6 = clock();
        *param_5 = *param_5 + (cVar6 - cVar5);
      } while ((((0 < param_4) || (0 < local_20b0)) || (0 < lVar3)) || (0 < local_2098));
      if (verbose != 0) {
        print_details(param_2,"DONE via TCP connect: ");
      }
      iVar2 = verify_npn(param_2,param_1);
      if (iVar2 < 0) {
        uVar11 = 0;
        uVar12 = 0;
        uVar8 = 0;
        bp = (BIO *)0x0;
      }
      else {
        if (((serverinfo_sct == serverinfo_sct_seen) && (serverinfo_tack == serverinfo_tack_seen))
           && (serverinfo_other_seen == 0)) {
          iVar2 = verify_alpn(param_2,param_1);
          if (-1 < iVar2) {
            iVar2 = verify_servername_isra_0(param_1);
            uVar12 = 0;
            if (iVar2 < 0) {
LAB_00101dff:
              uVar11 = 0;
              uVar8 = 1;
              bp = (BIO *)0x0;
              goto LAB_00101889;
            }
            uVar11 = 0;
            bp = (BIO *)0x0;
            uVar8 = custom_ext_error;
            if (custom_ext_error == 0) goto LAB_00101889;
            fwrite("Custom extension error\n",1,0x17,_stderr);
          }
        }
        else {
          fwrite("Server info verify error\n",1,0x19,_stderr);
        }
LAB_00101c11:
        uVar11 = 0;
LAB_00101c14:
        uVar12 = 0;
        uVar8 = 1;
        bp = (BIO *)0x0;
      }
    }
  }
  goto LAB_00101889;
  while (iVar2 = BIO_test_flags(bp,8), iVar2 != 0) {
LAB_00101800:
    lVar3 = BIO_ctrl(bp,0x65,0,(void *)0x0);
    if (0 < lVar3) goto LAB_001019d0;
  }
LAB_00101830:
  local_20a0 = (BIO *)0x0;
  uVar11 = 0;
  uVar12 = 0;
  local_20c0 = (BIO *)0x0;
  local_20b8 = (BIO *)0x0;
  uVar8 = 1;
LAB_00101889:
  ERR_print_errors(_bio_err);
  BIO_free_all(bp);
  BIO_free(local_20a0);
  BIO_free(bp_00);
  BIO_free(local_20b8);
  BIO_free(local_20c0);
  pcVar9 = should_negotiate;
  if (should_negotiate != (char *)0x0) {
    iVar2 = strcmp(should_negotiate,"fail-client");
    if (iVar2 == 0) {
      uVar8 = uVar12 ^ 1;
    }
    else {
      iVar2 = strcmp(pcVar9,"fail-server");
      if (iVar2 == 0) {
        uVar8 = uVar11 ^ 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint doit_biopair(SSL *param_1,SSL *param_2,long param_3,long *param_4,long *param_5)

{
  BIO *b;
  BIO *b_00;
  int iVar1;
  int iVar2;
  BIO_METHOD *pBVar3;
  BIO *bp;
  clock_t cVar4;
  clock_t cVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  size_t sVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  long in_FS_OFFSET;
  byte bVar16;
  BIO *local_20d0;
  long local_20a0;
  long local_2090;
  long local_2088;
  BIO *local_2070;
  BIO *local_2068;
  BIO *local_2060;
  BIO *local_2058;
  char *local_2050;
  undefined8 local_2048 [1025];
  long local_40;
  
  bVar16 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2070 = (BIO *)0x0;
  local_2068 = (BIO *)0x0;
  local_2060 = (BIO *)0x0;
  local_2058 = (BIO *)0x0;
  iVar1 = BIO_new_bio_pair(&local_2070,0x100,&local_2068,0x100);
  if ((iVar1 != 0) && (iVar1 = BIO_new_bio_pair(&local_2060,0x100,&local_2058,0x100), iVar1 != 0)) {
    pBVar3 = BIO_f_ssl();
    bp = BIO_new(pBVar3);
    if (bp != (BIO *)0x0) {
      pBVar3 = BIO_f_ssl();
      local_20d0 = BIO_new(pBVar3);
      if (local_20d0 != (BIO *)0x0) {
        SSL_set_connect_state(param_2);
        SSL_set_bio(param_2,local_2060,local_2060);
        BIO_ctrl(local_20d0,0x6d,0,param_2);
        SSL_set_accept_state(param_1);
        SSL_set_bio(param_1,local_2070,local_2070);
        BIO_ctrl(bp,0x6d,0,param_1);
        local_20a0 = param_3;
        local_2090 = param_3;
        local_2088 = param_3;
        do {
          cVar4 = clock();
          puVar12 = local_2048;
          for (lVar8 = 0x400; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
          }
          if ((debug != 0) && (iVar1 = SSL_in_init(param_2), iVar1 != 0)) {
            pcVar11 = SSL_state_string_long(param_2);
            __printf_chk(2,"client waiting in SSL_connect - %s\n",pcVar11);
          }
          if (0 < param_3) {
            lVar8 = 0x2000;
            if (param_3 < 0x2001) {
              lVar8 = param_3;
            }
            iVar1 = BIO_write(local_20d0,local_2048,(int)lVar8);
            if (iVar1 < 0) {
              iVar1 = BIO_test_flags(local_20d0,8);
              if (iVar1 != 0) goto joined_r0x00102555;
LAB_001027de:
              uVar15 = 1;
              fwrite("ERROR in CLIENT\n",1,0x10,_stderr);
            }
            else {
              if (iVar1 != 0) {
                if (debug != 0) {
                  __printf_chk(2,"client wrote %d\n",iVar1);
                }
                param_3 = param_3 - iVar1;
                goto joined_r0x00102555;
              }
LAB_001028ff:
              uVar15 = 0;
              fwrite("SSL CLIENT STARTUP FAILED\n",1,0x1a,_stderr);
            }
            uVar13 = 0;
            uVar10 = 1;
            goto LAB_001020f6;
          }
joined_r0x00102555:
          if (0 < local_20a0) {
            iVar1 = BIO_read(local_20d0,local_2048,0x2000);
            if (iVar1 < 0) {
              iVar1 = BIO_test_flags(local_20d0,8);
              if (iVar1 == 0) goto LAB_001027de;
            }
            else {
              if (iVar1 == 0) goto LAB_001028ff;
              if (debug != 0) {
                __printf_chk(2,"client read %d\n",iVar1);
              }
              local_20a0 = local_20a0 - iVar1;
            }
          }
          iVar1 = debug;
          cVar5 = clock();
          *param_5 = *param_5 + (cVar5 - cVar4);
          cVar4 = clock();
          puVar12 = local_2048;
          for (lVar8 = 0x400; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
          }
          if ((iVar1 != 0) && (iVar1 = SSL_in_init(param_1), iVar1 != 0)) {
            pcVar11 = SSL_state_string_long(param_1);
            __printf_chk(2,"server waiting in SSL_accept - %s\n",pcVar11);
          }
          if (0 < local_2090) {
            lVar8 = 0x2000;
            if (local_2090 < 0x2001) {
              lVar8 = local_2090;
            }
            iVar1 = BIO_write(bp,local_2048,(int)lVar8);
            if (iVar1 < 0) {
              iVar1 = BIO_test_flags(bp,8);
              if (iVar1 != 0) goto joined_r0x001025e5;
LAB_00102823:
              uVar13 = 1;
              fwrite("ERROR in SERVER\n",1,0x10,_stderr);
              goto LAB_00102655;
            }
            if (iVar1 != 0) {
              if (debug != 0) {
                __printf_chk(2,"server wrote %d\n",iVar1);
              }
              local_2090 = local_2090 - iVar1;
              goto joined_r0x001025e5;
            }
LAB_00102924:
            fwrite("SSL SERVER STARTUP FAILED\n",1,0x1a,_stderr);
            goto LAB_00102652;
          }
joined_r0x001025e5:
          if (0 < local_2088) {
            iVar1 = BIO_read(bp,local_2048,0x2000);
            if (iVar1 < 0) {
              iVar1 = BIO_test_flags(bp,8);
              if (iVar1 == 0) goto LAB_00102823;
            }
            else {
              if (iVar1 == 0) goto LAB_00102924;
              if (debug != 0) {
                __printf_chk(2,"server read %d\n",iVar1);
              }
              local_2088 = local_2088 - iVar1;
            }
          }
          cVar5 = clock();
          b_00 = local_2058;
          b = local_2068;
          bVar14 = false;
          *param_4 = *param_4 + (cVar5 - cVar4);
          do {
            sVar6 = BIO_ctrl_pending(b);
            sVar7 = BIO_ctrl_get_write_guarantee(b_00);
            sVar9 = sVar7;
            if (sVar6 <= sVar7) {
              sVar9 = sVar6;
            }
            if (sVar9 != 0) {
              if (0x7fffffff < sVar9) {
                sVar9 = 0x7fffffff;
              }
              iVar1 = BIO_nread(b,&local_2050,(int)sVar9);
              iVar2 = BIO_write(b_00,local_2050,iVar1);
              if (iVar1 != iVar2) {
                fwrite("ERROR: BIO_write could not write BIO_ctrl_get_write_guarantee() bytes",1,
                       0x45,_stderr);
                goto LAB_00102652;
              }
              if (debug != 0) {
                pcVar11 = "C->S relaying: %d bytes\n";
                if (local_2058 != b) {
                  pcVar11 = "S->C relaying: %d bytes\n";
                }
                __printf_chk(2,pcVar11,iVar1);
              }
              bVar14 = true;
            }
          } while ((sVar6 != 0) && (sVar7 != 0));
          sVar9 = BIO_ctrl_pending(b_00);
          sVar6 = BIO_ctrl_get_read_request(b);
          if (sVar6 < sVar9) {
            sVar9 = sVar6;
          }
          if (sVar9 == 0) {
            if (bVar14) goto LAB_001024cf;
            iVar1 = 0;
            if (prev_progress_0 == 0) {
              if ((((0 < param_3) || (0 < local_20a0)) || (0 < local_2090)) || (0 < local_2088)) {
                fwrite("ERROR: got stuck\n",1,0x11,_stderr);
                fwrite(" ERROR.\n",1,8,_stderr);
                goto LAB_00102652;
              }
              break;
            }
          }
          else {
            iVar1 = 0x7ffffffe;
            if (sVar9 < 0x80000000) {
              iVar1 = 1;
              if (sVar9 != 1) {
                iVar1 = (int)sVar9 + -1;
              }
            }
            iVar2 = BIO_nwrite0(b,&local_2050);
            if (iVar2 <= iVar1) {
              iVar1 = iVar2;
            }
            iVar2 = BIO_read(b_00,local_2050,iVar1);
            if (iVar1 != iVar2) {
              fwrite("ERROR: BIO_read could not read BIO_ctrl_pending() bytes",1,0x37,_stderr);
              goto LAB_00102652;
            }
            iVar2 = BIO_nwrite(b,&local_2050,iVar1);
            if (iVar1 != iVar2) {
              fwrite("ERROR: BIO_nwrite() did not accept BIO_nwrite0() bytes",1,0x36,_stderr);
              goto LAB_00102652;
            }
            if (debug != 0) {
              pcVar11 = "S->C relaying: %d bytes\n";
              if (local_2058 == b_00) {
                pcVar11 = "C->S relaying: %d bytes\n";
              }
              __printf_chk(2,pcVar11,iVar1);
            }
LAB_001024cf:
            iVar1 = 1;
          }
          prev_progress_0 = iVar1;
        } while (((0 < param_3) || (0 < local_20a0)) || ((0 < local_2090 || (0 < local_2088))));
        if (verbose != 0) {
          print_details(param_2,"DONE via BIO pair: ");
        }
        iVar1 = verify_npn(param_2,param_1);
        if (iVar1 < 0) {
          uVar13 = 0;
          uVar15 = 0;
          uVar10 = 0;
          goto LAB_001020f6;
        }
        if (((serverinfo_sct == serverinfo_sct_seen) && (serverinfo_tack == serverinfo_tack_seen))
           && (serverinfo_other_seen == 0)) {
          iVar1 = verify_alpn(param_2,param_1);
          if ((-1 < iVar1) && (iVar1 = verify_servername_isra_0(param_1), -1 < iVar1)) {
            if (custom_ext_error == 0) {
              uVar13 = 0;
              uVar15 = 0;
              uVar10 = 0;
              goto LAB_001020f6;
            }
            fwrite("Custom extension error\n",1,0x17,_stderr);
          }
        }
        else {
          fwrite("Server info verify error\n",1,0x19,_stderr);
        }
      }
LAB_00102652:
      uVar13 = 0;
LAB_00102655:
      uVar15 = 0;
      uVar10 = 1;
      goto LAB_001020f6;
    }
  }
  uVar13 = 0;
  uVar15 = 0;
  uVar10 = 1;
  bp = (BIO *)0x0;
  local_20d0 = (BIO *)0x0;
LAB_001020f6:
  ERR_print_errors(_bio_err);
  BIO_free(local_2070);
  BIO_free(local_2068);
  BIO_free(local_2060);
  BIO_free(local_2058);
  BIO_free(bp);
  BIO_free(local_20d0);
  pcVar11 = should_negotiate;
  if (should_negotiate != (char *)0x0) {
    iVar1 = strcmp(should_negotiate,"fail-client");
    if (iVar1 == 0) {
      uVar10 = uVar15 ^ 1;
    }
    else {
      iVar1 = strcmp(pcVar11,"fail-server");
      if (iVar1 == 0) {
        uVar10 = uVar13 ^ 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool doit(SSL *param_1,SSL *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  void *data;
  BIO_METHOD *pBVar7;
  BIO *wbio;
  BIO *rbio;
  BIO *bp;
  BIO *bp_00;
  long lVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int local_a0;
  void *local_90;
  long local_70;
  long local_60;
  int local_54;
  long local_50;
  long local_48;
  bool bVar11;
  
  lVar6 = 0xa000;
  if (param_3 < 0xa001) {
    lVar6 = param_3;
  }
  data = (void *)CRYPTO_zalloc(lVar6,"test/ssl_old_test.c",0xa47);
  if ((data == (void *)0x0) ||
     (local_90 = (void *)CRYPTO_zalloc(lVar6,"test/ssl_old_test.c",0xa49), local_90 == (void *)0x0))
  {
    bVar2 = true;
    bp_00 = (BIO *)0x0;
    bp = (BIO *)0x0;
    local_90 = (void *)0x0;
    bVar12 = true;
    rbio = (BIO *)0x0;
    wbio = (BIO *)0x0;
    bVar11 = true;
    bVar10 = true;
    goto LAB_00102bc0;
  }
  pBVar7 = BIO_s_mem();
  wbio = BIO_new(pBVar7);
  pBVar7 = BIO_s_mem();
  rbio = BIO_new(pBVar7);
  if ((rbio == (BIO *)0x0) || (wbio == (BIO *)0x0)) {
    bVar12 = true;
    bp_00 = (BIO *)0x0;
    bp = (BIO *)0x0;
    bVar11 = true;
    bVar10 = true;
    ERR_print_errors(_bio_err);
    bVar2 = true;
    goto LAB_00102bc0;
  }
  pBVar7 = BIO_f_ssl();
  bp = BIO_new(pBVar7);
  pBVar7 = BIO_f_ssl();
  bp_00 = BIO_new(pBVar7);
  if ((bp == (BIO *)0x0) || (bp_00 == (BIO *)0x0)) {
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    ERR_print_errors(_bio_err);
    bVar2 = true;
    goto LAB_00102bc0;
  }
  SSL_set_connect_state(param_2);
  SSL_set_bio(param_2,rbio,wbio);
  SSL_ctrl(param_2,0x34,0x1400,(void *)0x0);
  BIO_ctrl(bp,0x6d,0,param_2);
  iVar5 = BIO_up_ref(wbio);
  if (iVar5 != 0) {
    iVar5 = BIO_up_ref(rbio);
    if (iVar5 != 0) {
      bVar15 = true;
      SSL_set_accept_state(param_1);
      SSL_set_bio(param_1,wbio,rbio);
      SSL_ctrl(param_1,0x34,0x1400,(void *)0x0);
      bVar10 = true;
      BIO_ctrl(bp_00,0x6d,0,param_1);
      local_54 = 0x1400;
      local_a0 = (int)lVar6;
      bVar1 = false;
      bVar14 = true;
      local_70 = param_3;
      local_60 = param_3;
      local_50 = param_3;
      local_48 = param_3;
      bVar16 = false;
      bVar13 = false;
      bVar11 = true;
      bVar2 = false;
LAB_00102d88:
      lVar8 = BIO_ctrl(bp_00,10,0,(void *)0x0);
      bVar3 = (int)lVar8 != 0 & bVar15;
      lVar8 = BIO_ctrl(bp,10,0,(void *)0x0);
      if (((bVar13 & (int)lVar8 != 0) == 0) && (!bVar14)) {
        if (bVar3 != 0 || bVar16) {
          if ((debug != 0) && (iVar5 = SSL_in_init(param_1), iVar5 != 0)) {
            pcVar9 = SSL_state_string_long(param_1);
            __printf_chk(2,"server waiting in SSL_accept - %s\n",pcVar9);
          }
          bVar14 = false;
          goto LAB_00102e64;
        }
        fwrite("ERROR IN STARTUP\n",1,0x11,_stdout);
        ERR_print_errors(_bio_err);
        goto LAB_00102cc8;
      }
      if (bVar3 != 0 || bVar16) {
        if (debug != 0) {
          iVar5 = SSL_in_init(param_1);
          if (iVar5 != 0) {
            pcVar9 = SSL_state_string_long(param_1);
            __printf_chk(2,"server waiting in SSL_accept - %s\n",pcVar9);
          }
          goto LAB_00102ddb;
        }
      }
      else {
LAB_00102ddb:
        if ((debug != 0) && (iVar5 = SSL_in_init(param_2), iVar5 != 0)) {
          pcVar9 = SSL_state_string_long(param_2);
          __printf_chk(2,"client waiting in SSL_connect - %s\n",pcVar9);
        }
      }
      bVar4 = bVar16;
      if (bVar10 == false) {
        iVar5 = BIO_read(bp,data,local_a0);
        if (iVar5 < 0) {
          iVar5 = BIO_test_flags(bp,8);
          if (iVar5 != 0) goto LAB_0010310d;
          rbio = (BIO *)0x0;
          wbio = (BIO *)0x0;
          bVar2 = false;
          bVar12 = true;
          bVar11 = true;
          bVar10 = true;
          fwrite("ERROR in CLIENT\n",1,0x10,_stderr);
          ERR_print_errors(_bio_err);
          goto LAB_00102bc0;
        }
        if (iVar5 == 0) {
          fwrite("SSL CLIENT STARTUP FAILED\n",1,0x1a,_stderr);
          goto LAB_00102cc8;
        }
        if (debug != 0) {
          __printf_chk(2,"client read %d\n");
        }
        local_50 = local_50 - iVar5;
        if (0 < local_60) {
          bVar4 = true;
          bVar2 = true;
        }
        if (local_50 < 1) goto code_r0x00102fca;
      }
      else {
        iVar5 = local_a0;
        if (local_70 <= lVar6) {
          iVar5 = (int)local_70;
        }
        iVar5 = BIO_write(bp,data,iVar5);
        bVar12 = bVar10;
        if (-1 < iVar5) {
          if (iVar5 != 0) {
            if (debug != 0) {
              __printf_chk(2,"client wrote %d\n");
            }
            local_70 = local_70 - iVar5;
            bVar15 = bVar10;
            if (local_54 < 0x406) {
              bVar11 = false;
              bVar10 = bVar11;
            }
            else {
              local_54 = local_54 + -5;
              bVar11 = false;
              SSL_ctrl(param_2,0x34,(long)local_54,(void *)0x0);
              bVar10 = bVar11;
            }
            goto LAB_00102e5b;
          }
          rbio = (BIO *)0x0;
          wbio = (BIO *)0x0;
          fwrite("SSL CLIENT STARTUP FAILED\n",1,0x1a,_stderr);
          bVar2 = bVar10;
          goto LAB_00102bc0;
        }
        iVar5 = BIO_test_flags(bp,8);
        if (iVar5 == 0) {
          rbio = (BIO *)0x0;
          bVar2 = false;
          wbio = (BIO *)0x0;
          fwrite("ERROR in CLIENT\n",1,0x10,_stderr);
          ERR_print_errors(_bio_err);
          goto LAB_00102bc0;
        }
LAB_0010310d:
        iVar5 = BIO_test_flags(bp,1);
        bVar13 = iVar5 != 0;
        iVar5 = BIO_test_flags(bp,2);
        bVar14 = iVar5 != 0;
      }
LAB_00102e5b:
      bVar12 = bVar3 != 0 || bVar16;
      bVar16 = bVar4;
      if (bVar12) {
LAB_00102e64:
        if (!bVar1) {
          if (bVar2 == false) {
            iVar5 = BIO_read(bp_00,local_90,local_a0);
            if (-1 < iVar5) {
              if (iVar5 == 0) {
                ERR_print_errors(_bio_err);
                fwrite("SSL SERVER STARTUP FAILED in SSL_read\n",1,0x26,_stderr);
                goto LAB_00102cc8;
              }
              if (debug != 0) {
                __printf_chk(2,"server read %d\n",iVar5);
              }
              local_48 = local_48 - iVar5;
              if (0 < local_70) {
                bVar10 = true;
              }
              bVar2 = true;
              if (local_70 < 1) {
                bVar2 = bVar14;
              }
              bVar14 = bVar2;
              if (local_48 < 1) {
                bVar10 = false;
              }
              bVar2 = local_48 < 1;
              bVar11 = bVar10;
              if (local_48 < 1) {
                bVar16 = true;
              }
              goto LAB_00102d88;
            }
            iVar5 = BIO_test_flags(bp_00,8);
            if (iVar5 == 0) {
              rbio = (BIO *)0x0;
              wbio = (BIO *)0x0;
              bVar11 = true;
              bVar10 = true;
              fwrite("ERROR in SERVER\n",1,0x10,_stderr);
              ERR_print_errors(_bio_err);
              bVar2 = true;
              bVar12 = false;
              goto LAB_00102bc0;
            }
          }
          else {
            iVar5 = local_a0;
            if (local_60 <= lVar6) {
              iVar5 = (int)local_60;
            }
            iVar5 = BIO_write(bp_00,local_90,iVar5);
            if (-1 < iVar5) {
              if (iVar5 == 0) {
                ERR_print_errors(_bio_err);
                fwrite("SSL SERVER STARTUP FAILED in SSL_write\n",1,0x27,_stderr);
                goto LAB_00102cc8;
              }
              if (debug != 0) {
                __printf_chk(2,"server wrote %d\n",iVar5);
              }
              local_60 = local_60 - iVar5;
              bVar1 = local_60 < 1;
              if (0x405 < local_54) {
                local_54 = local_54 + -5;
                SSL_ctrl(param_1,0x34,(long)local_54,(void *)0x0);
              }
              bVar13 = bVar2;
              bVar2 = false;
              goto LAB_00102d88;
            }
            iVar5 = BIO_test_flags(bp_00,8);
            if (iVar5 == 0) {
              rbio = (BIO *)0x0;
              wbio = (BIO *)0x0;
              fwrite("ERROR in SERVER\n",1,0x10,_stderr);
              ERR_print_errors(_bio_err);
              bVar10 = bVar2;
              bVar11 = bVar2;
              bVar12 = false;
              goto LAB_00102bc0;
            }
          }
          iVar5 = BIO_test_flags(bp_00,1);
          bVar15 = iVar5 != 0;
          iVar5 = BIO_test_flags(bp_00,2);
          bVar16 = iVar5 != 0;
        }
      }
      goto LAB_00102d88;
    }
    rbio = (BIO *)0x0;
    bVar10 = true;
    bVar11 = true;
    bVar2 = true;
    bVar12 = true;
    goto LAB_00102bc0;
  }
LAB_00102cc8:
  rbio = (BIO *)0x0;
  wbio = (BIO *)0x0;
  bVar10 = true;
  bVar11 = true;
  bVar2 = true;
  bVar12 = true;
LAB_00102bc0:
  BIO_free(wbio);
  BIO_free(rbio);
  BIO_free_all(bp);
  BIO_free_all(bp_00);
  CRYPTO_free(data);
  CRYPTO_free(local_90);
  pcVar9 = should_negotiate;
  if (((should_negotiate != (char *)0x0) &&
      (iVar5 = strcmp(should_negotiate,"fail-client"), bVar10 = bVar2, iVar5 != 0)) &&
     (iVar5 = strcmp(pcVar9,"fail-server"), bVar10 = bVar11, iVar5 == 0)) {
    bVar10 = bVar12;
  }
  return bVar10;
code_r0x00102fca:
  if (verbose != 0) {
    print_details(param_2,"DONE: ");
  }
  iVar5 = verify_npn(param_2,param_1);
  if (-1 < iVar5) {
    if (((serverinfo_sct == serverinfo_sct_seen) && (serverinfo_tack == serverinfo_tack_seen)) &&
       (serverinfo_other_seen == 0)) {
      if (custom_ext_error == 0) {
        bVar2 = true;
        bVar12 = true;
        rbio = (BIO *)0x0;
        wbio = (BIO *)0x0;
        bVar10 = false;
        bVar11 = false;
        goto LAB_00102bc0;
      }
      fwrite("Custom extension error\n",1,0x17,_stderr);
    }
    else {
      fwrite("Server info verify error\n",1,0x19,_stderr);
    }
  }
  goto LAB_00102cc8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
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
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  size_t sVar22;
  stack_st_SSL_COMP *psVar23;
  undefined8 uVar24;
  SSL_CTX *ctx;
  long lVar25;
  ulong uVar26;
  COMP_METHOD *cm;
  EVP_PKEY *pkey;
  void *pvVar27;
  SSL *ssl;
  SSL *ssl_00;
  SSL_SESSION *pSVar28;
  undefined8 uVar29;
  uint uVar30;
  size_t sVar31;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 *puVar32;
  undefined8 uVar33;
  SSL_CTX *pSVar34;
  code *in_R9;
  code *pcVar35;
  code *in_R11;
  char *pcVar36;
  long larg;
  long in_FS_OFFSET;
  undefined1 auVar37 [16];
  undefined8 uVar38;
  long local_130;
  uint local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  long local_100;
  int local_f4;
  uint local_e8;
  uint local_dc;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 *local_98;
  int local_90;
  int local_8c;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = "Test Callback Argument";
  verbose = 0;
  debug = 0;
  local_98 = param_2;
  local_8c = param_1;
  test_open_streams();
  bio_stdout = BIO_new_fp(_stdout,0x10);
  lVar19 = SSL_CONF_CTX_new();
  lVar20 = SSL_CONF_CTX_new();
  lVar21 = SSL_CONF_CTX_new();
  if ((lVar19 == 0 || lVar21 == 0) || (lVar20 == 0)) {
LAB_00105a00:
    ERR_print_errors(_bio_err);
LAB_00105a0c:
    local_130 = 0;
  }
  else {
    SSL_CONF_CTX_set_flags(lVar19,0x69);
    SSL_CONF_CTX_set_flags(lVar20,0x69);
    iVar16 = SSL_CONF_CTX_set1_prefix(lVar19,&_LC94);
    if ((iVar16 == 0) || (iVar16 = SSL_CONF_CTX_set1_prefix(lVar20,&_LC94), iVar16 == 0))
    goto LAB_00105a00;
    SSL_CONF_CTX_set_flags(lVar21,0x65);
    iVar16 = SSL_CONF_CTX_set1_prefix();
    if (iVar16 == 0) goto LAB_00105a00;
    local_98 = local_98 + 1;
    local_d0 = 0;
    local_8c = local_8c + -1;
    local_100 = 0;
    local_130 = 0;
    bVar7 = false;
    if (local_8c < 1) {
      in_R9 = (code *)0x0;
      in_R11 = (code *)0x0;
      pcVar36 = (char *)0x0;
      bVar4 = false;
      bVar11 = false;
      bVar9 = false;
      bVar10 = false;
      local_c0 = 0;
      bVar5 = false;
      bVar13 = false;
      local_90 = 0;
      local_e8 = 1;
      bVar8 = false;
      local_b0 = 0xffffffff;
      bVar6 = false;
      bVar15 = false;
      bVar12 = false;
      local_d8 = 0x100;
      bVar14 = false;
      local_b8 = 0;
      local_dc = 0;
LAB_0010618a:
      if (((int)local_e8 < 2) || (bVar8)) {
        local_104 = 0;
        local_114 = 0;
        local_110 = 0;
        local_118 = 0;
        bVar3 = false;
        local_108 = 0;
        local_10c = 0;
        goto LAB_00105cbe;
      }
      sVar31 = 0xc1;
      pcVar36 = 
      "This case cannot work.  Use -f to perform the test anyway (and\n-d to see what happens), or add one of -ssl3, -tls1, -tls1_1, -tls1_2, -dtls, -dtls1, -dtls12, -reuse\nto avoid protocol mismatch.\n"
      ;
LAB_00106276:
      fwrite(pcVar36,1,sVar31,_stderr);
    }
    else {
      bVar5 = false;
      bVar4 = false;
      bVar9 = false;
      bVar12 = false;
      bVar10 = false;
      bVar11 = false;
      bVar15 = false;
      bVar14 = false;
      bVar6 = false;
      bVar8 = false;
      bVar13 = false;
      pcVar36 = (char *)0x0;
      local_d8 = 0x100;
      local_b0 = 0xffffffff;
      local_e8 = 1;
      local_118 = 0;
      local_104 = 0;
      local_10c = 0;
      local_108 = 0;
      local_110 = 0;
      local_114 = 0;
      bVar3 = false;
      local_dc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_f4 = 0;
      do {
        iVar16 = local_8c;
        puVar32 = local_98;
        pcVar2 = (char *)*local_98;
        cVar1 = *pcVar2;
        if (((cVar1 == '-') && (pcVar2[1] == 'F')) &&
           (in_R9 = (code *)(ulong)(byte)pcVar2[2], pcVar2[2] == 0)) {
          ssl_00 = (SSL *)0x0;
          ssl = (SSL *)0x0;
          ctx = (SSL_CTX *)0x0;
          fwrite("not compiled with FIPS support, so exiting without running.\n",1,0x3c,_stderr);
          uVar30 = 0;
          goto LAB_00105a22;
        }
        iVar17 = strcmp(pcVar2,"-server_auth");
        if (iVar17 == 0) {
          pcVar36 = (char *)0x1;
LAB_00105990:
          local_8c = iVar16 + -1;
          local_98 = puVar32 + 1;
        }
        else {
          iVar17 = strcmp(pcVar2,"-client_auth");
          if (iVar17 == 0) {
            bVar13 = true;
            goto LAB_00105990;
          }
          if (((cVar1 == '-') && (pcVar2[1] == 'v')) && (pcVar2[2] == '\0')) {
            verbose = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-d");
          if (iVar17 == 0) {
            debug = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-reuse");
          if (iVar17 == 0) {
            bVar8 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-no_dhe");
          if (iVar17 == 0) {
            bVar9 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-dhe512");
          if (iVar17 == 0) {
            bVar11 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-dhe1024dsa");
          if (iVar17 == 0) {
            bVar10 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-dhe4096");
          if (iVar17 == 0) {
            bVar12 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-no_ecdhe");
          if (iVar17 == 0) goto LAB_00105990;
          iVar17 = strcmp(pcVar2,"-psk");
          if (iVar17 == 0) {
            iVar17 = iVar16 + -1;
            if (iVar17 == 0) goto LAB_00107574;
            pcVar2 = (char *)puVar32[1];
            puVar32 = puVar32 + 1;
            psk_key = pcVar2;
            local_98 = puVar32;
            local_8c = iVar17;
            sVar31 = strspn(pcVar2,"abcdefABCDEF1234567890");
            sVar22 = strlen(pcVar2);
            iVar16 = iVar17;
            if (sVar31 == sVar22) goto LAB_00105990;
            BIO_printf(_bio_err,"Not a hex number \'%s\'\n",pcVar2);
LAB_0010757e:
            fwrite("usage: ssltest [args ...]\n",1,0x1a,_stderr);
            fputc(10,_stderr);
            fwrite(" -server_auth  - check server certificate\n",1,0x2a,_stderr);
            fwrite(" -client_auth  - do client authentication\n",1,0x2a,_stderr);
            fwrite(" -v            - more output\n",1,0x1d,_stderr);
            fwrite(" -d            - debug output\n",1,0x1e,_stderr);
            fwrite(" -reuse        - use session-id reuse\n",1,0x26,_stderr);
            fwrite(" -num <val>    - number of connections to perform\n",1,0x32,_stderr);
            fwrite(" -bytes <val>  - number of bytes to swap between client/server\n",1,0x3f,_stderr
                  );
            fwrite(" -dhe512       - use 512 bit key for DHE (to test failure)\n",1,0x3b,_stderr);
            fwrite(" -dhe1024dsa   - use 1024 bit key (with 160-bit subprime) for DHE\n",1,0x42,
                   _stderr);
            fwrite(" -dhe2048      - use 2048 bit key (safe prime) for DHE (default, no-op)\n",1,
                   0x48,_stderr);
            fwrite(" -dhe4096      - use 4096 bit key (safe prime) for DHE\n",1,0x37,_stderr);
            fwrite(" -no_dhe       - disable DHE\n",1,0x1d,_stderr);
            fwrite(" -no_ecdhe     - disable ECDHE\n",1,0x1f,_stderr);
            fwrite(" -psk arg      - PSK in hex (without 0x)\n",1,0x29,_stderr);
            fwrite(" -tls1         - use TLSv1\n",1,0x1b,_stderr);
            fwrite(" -tls1_1       - use TLSv1.1\n",1,0x1d,_stderr);
            fwrite(" -tls1_2       - use TLSv1.2\n",1,0x1d,_stderr);
            fwrite(" -dtls         - use DTLS\n",1,0x1a,_stderr);
            fwrite(" -dtls1        - use DTLSv1\n",1,0x1c,_stderr);
            fwrite(" -dtls12       - use DTLSv1.2\n",1,0x1e,_stderr);
            fwrite(" -CApath arg   - PEM format directory of CA\'s\n",1,0x2e,_stderr);
            fwrite(" -CAfile arg   - PEM format file of CA\'s\n",1,0x29,_stderr);
            fwrite(" -s_cert arg   - Server certificate file\n",1,0x29,_stderr);
            fwrite(" -s_key arg    - Server key file (default: same as -cert)\n",1,0x3a,_stderr);
            fwrite(" -c_cert arg   - Client certificate file\n",1,0x29,_stderr);
            fwrite(" -c_key arg    - Client key file (default: same as -c_cert)\n",1,0x3c,_stderr);
            fwrite(" -cipher arg   - The TLSv1.2 and below cipher list\n",1,0x33,_stderr);
            fwrite(" -ciphersuites arg   - The TLSv1.3 ciphersuites\n",1,0x30,_stderr);
            fwrite(" -bio_pair     - Use BIO pairs\n",1,0x1f,_stderr);
            fwrite(" -ipv4         - Use IPv4 connection on localhost\n",1,0x32,_stderr);
            fwrite(" -ipv6         - Use IPv6 connection on localhost\n",1,0x32,_stderr);
            fwrite(" -f            - Test even cases that can\'t work\n",1,0x31,_stderr);
            fwrite(" -time         - measure processor time used by client and server\n",1,0x42,
                   _stderr);
            fwrite(" -zlib         - use zlib compression\n",1,0x26,_stderr);
            fwrite(" -npn_client - have client side offer NPN\n",1,0x2a,_stderr);
            fwrite(" -npn_server - have server side offer NPN\n",1,0x2a,_stderr);
            fwrite(" -npn_server_reject - have server reject NPN\n",1,0x2d,_stderr);
            fwrite(" -serverinfo_file file - have server use this file\n",1,0x33,_stderr);
            fwrite(" -serverinfo_sct  - have client offer and expect SCT\n",1,0x35,_stderr);
            fwrite(" -serverinfo_tack - have client offer and expect TACK\n",1,0x36,_stderr);
            fwrite(" -custom_ext - try various custom extension callbacks\n",1,0x36,_stderr);
            fwrite(" -alpn_client <string> - have client side offer ALPN\n",1,0x35,_stderr);
            fwrite(" -alpn_server <string> - have server side offer ALPN\n",1,0x35,_stderr);
            fwrite(" -alpn_server1 <string> - alias for -alpn_server\n",1,0x31,_stderr);
            fwrite(" -alpn_server2 <string> - have server side context 2 offer ALPN\n",1,0x40,
                   _stderr);
            fwrite(" -alpn_expected <string> - the ALPN protocol that should be negotiated\n",1,0x47
                   ,_stderr);
            fwrite(" -server_min_proto <string> - Minimum version the server should support\n",1,
                   0x48,_stderr);
            fwrite(" -server_max_proto <string> - Maximum version the server should support\n",1,
                   0x48,_stderr);
            fwrite(" -client_min_proto <string> - Minimum version the client should support\n",1,
                   0x48,_stderr);
            fwrite(" -client_max_proto <string> - Maximum version the client should support\n",1,
                   0x48,_stderr);
            fwrite(" -should_negotiate <string> - The version that should be negotiated, fail-client or fail-server\n"
                   ,1,0x60,_stderr);
            fwrite(" -noct         - no certificate transparency\n",1,0x2d,_stderr);
            fwrite(" -requestct    - request certificate transparency\n",1,0x32,_stderr);
            fwrite(" -requirect    - require certificate transparency\n",1,0x32,_stderr);
            fwrite(" -sn_client <string>  - have client request this servername\n",1,0x3c,_stderr);
            fwrite(" -sn_server1 <string> - have server context 1 respond to this servername\n",1,
                   0x49,_stderr);
            fwrite(" -sn_server2 <string> - have server context 2 respond to this servername\n",1,
                   0x49,_stderr);
            fwrite(" -sn_expect1          - expected server 1\n",1,0x2a,_stderr);
            fwrite(" -sn_expect2          - expected server 2\n",1,0x2a,_stderr);
            fwrite(" -server_sess_out <file>    - Save the server session to a file\n",1,0x40,
                   _stderr);
            fwrite(" -server_sess_in <file>     - Read the server session from a file\n",1,0x42,
                   _stderr);
            fwrite(" -client_sess_out <file>    - Save the client session to a file\n",1,0x40,
                   _stderr);
            fwrite(" -client_sess_in <file>     - Read the client session from a file\n",1,0x42,
                   _stderr);
            fwrite(" -should_reuse <number>     - The expected state of reusing the session\n",1,
                   0x48,_stderr);
            fwrite(" -no_ticket    - do not issue TLS session ticket\n",1,0x31,_stderr);
            fwrite(" -client_ktls  - try to enable client KTLS\n",1,0x2b,_stderr);
            fwrite(" -server_ktls  - try to enable server KTLS\n",1,0x2b,_stderr);
            fwrite(" -provider <name>    - Load the given provider into the library context\n",1,
                   0x48,_stderr);
            sVar31 = 0x48;
            pcVar36 = " -config <cnf>    - Load the given config file into the library context\n";
            goto LAB_00106276;
          }
          iVar17 = strcmp(pcVar2,"-tls1_2");
          if (iVar17 == 0) {
            local_118 = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-tls1_1");
          if (iVar17 == 0) {
            local_104 = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-tls1");
          if (iVar17 == 0) {
            local_10c = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-ssl3");
          if (iVar17 == 0) {
            local_f4 = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-dtls1");
          if (iVar17 == 0) {
            local_114 = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-dtls12");
          if (iVar17 == 0) {
            local_110 = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-dtls");
          if (iVar17 == 0) {
            local_108 = 1;
            goto LAB_00105990;
          }
          iVar17 = strncmp(pcVar2,"-num",4);
          if (iVar17 == 0) {
            local_8c = iVar16 + -1;
            if (local_8c == 0) {
LAB_00107574:
              local_8c = iVar16 + -1;
              goto LAB_0010757e;
            }
            local_98 = puVar32 + 1;
            lVar25 = strtol((char *)puVar32[1],(char **)0x0,10);
            local_e8 = (uint)lVar25;
            puVar32 = local_98;
            iVar16 = local_8c;
            if (local_e8 == 0) {
              local_e8 = 1;
            }
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-bytes");
          if (iVar17 == 0) {
            local_8c = iVar16 + -1;
            if (local_8c == 0) goto LAB_00107574;
            local_98 = puVar32 + 1;
            local_d8 = strtol((char *)puVar32[1],(char **)0x0,10);
            puVar32 = local_98;
            if (local_d8 == 0) {
              local_d8 = 1;
            }
            pcVar2 = (char *)*local_98;
            sVar31 = strlen(pcVar2);
            cVar1 = pcVar2[(long)(int)sVar31 + -1];
            iVar16 = local_8c;
            if (cVar1 == 'k') {
              local_d8 = local_d8 << 10;
            }
            else if (cVar1 == 'm') {
              local_d8 = local_d8 << 0x14;
            }
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-cipher");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            cipher = (char *)puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-ciphersuites");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            ciphersuites = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-CApath");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            local_b8 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-CAfile");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            local_c0 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-bio_pair");
          if (iVar17 == 0) {
            local_dc = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-ipv4");
          if (iVar17 == 0) {
            local_dc = 2;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-ipv6");
          if (iVar17 == 0) {
            local_dc = 3;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-f");
          if (iVar17 == 0) {
            bVar3 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-time");
          if (iVar17 == 0) {
            bVar4 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-noct");
          if (iVar17 == 0) {
            bVar7 = false;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-ct");
          if (iVar17 == 0) {
            bVar7 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-zlib");
          if (iVar17 == 0) {
            bVar5 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-app_verify");
          if (iVar17 == 0) {
            local_50 = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-npn_client");
          if (iVar17 == 0) {
            npn_client = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-npn_server");
          if (iVar17 == 0) {
            npn_server = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-npn_server_reject");
          if (iVar17 == 0) {
            npn_server_reject = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-serverinfo_sct");
          if (iVar17 == 0) {
            serverinfo_sct = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-serverinfo_tack");
          if (iVar17 == 0) {
            serverinfo_tack = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-serverinfo_file");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            serverinfo_file = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-custom_ext");
          if (iVar17 == 0) {
            custom_ext = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-alpn_client");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            alpn_client = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-alpn_server");
          if ((iVar17 == 0) || (iVar17 = strcmp(pcVar2,"-alpn_server1"), iVar17 == 0)) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            alpn_server = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-alpn_server2");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            alpn_server2 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-alpn_expected");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            alpn_expected = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-server_min_proto");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            server_min_proto = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-server_max_proto");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            server_max_proto = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-client_min_proto");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            client_min_proto = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-client_max_proto");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            client_max_proto = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-should_negotiate");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            should_negotiate = (char *)puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-sn_client");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            sn_client = (void *)puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-sn_server1");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            sn_server1 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-sn_server2");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            sn_server2 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-sn_expect1");
          if (iVar17 == 0) {
            sn_expect = 1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-sn_expect2");
          if (iVar17 == 0) {
            sn_expect = 2;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-server_sess_out");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            server_sess_out = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-server_sess_in");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            server_sess_in = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-client_sess_out");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            client_sess_out = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-client_sess_in");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            client_sess_in = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-should_reuse");
          if (iVar17 == 0) {
            local_8c = iVar16 + -1;
            if (local_8c == 0) goto LAB_00107574;
            local_98 = puVar32 + 1;
            lVar25 = strtol((char *)puVar32[1],(char **)0x0,10);
            local_b0 = (uint)((int)lVar25 != 0);
            puVar32 = local_98;
            iVar16 = local_8c;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-no_ticket");
          if (iVar17 == 0) {
            bVar6 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-client_ktls");
          if (iVar17 == 0) {
            bVar14 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-server_ktls");
          if (iVar17 == 0) {
            bVar15 = true;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-provider");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            local_100 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar17 = strcmp(pcVar2,"-config");
          if (iVar17 == 0) {
            if (iVar16 + -1 == 0) goto LAB_00107574;
            local_d0 = puVar32[1];
            puVar32 = puVar32 + 1;
            iVar16 = iVar16 + -1;
            goto LAB_00105990;
          }
          iVar16 = SSL_CONF_cmd_argv(lVar21,&local_8c,&local_98);
          if (iVar16 == 0) {
            iVar16 = SSL_CONF_cmd_argv(lVar19,&local_8c,&local_98);
          }
          if (iVar16 < 1) {
            if (iVar16 == -3) {
              BIO_printf(_bio_err,"Missing argument for %s\n",pcVar2);
            }
            else if (iVar16 == 0) {
              BIO_printf(_bio_err,"unknown option %s\n",pcVar2);
            }
            else {
              BIO_printf(_bio_err,"Error with command %s\n",pcVar2);
            }
            goto LAB_0010757e;
          }
          if ((local_130 == 0) && (local_130 = OPENSSL_sk_new_null(), local_130 == 0))
          goto LAB_00105a0c;
          iVar16 = OPENSSL_sk_push(local_130,pcVar2);
          if ((iVar16 == 0) || (iVar16 = OPENSSL_sk_push(local_130), iVar16 == 0)) {
            ssl_00 = (SSL *)0x0;
            ssl = (SSL *)0x0;
            ctx = (SSL_CTX *)0x0;
            uVar30 = 1;
            goto LAB_00105a22;
          }
        }
      } while (0 < local_8c);
      local_90 = (int)pcVar36;
      if (1 < local_10c + local_f4 + local_104 + local_118 + local_108 + local_114 + local_110) {
        sVar31 = 0x5d;
        pcVar36 = 
        "At most one of -ssl3, -tls1, -tls1_1, -tls1_2, -dtls, -dtls1 or -dtls12 should be requested.\n"
        ;
        goto LAB_00106276;
      }
      if (local_f4 != 0) {
        ssl_00 = (SSL *)0x0;
        ssl = (SSL *)0x0;
        ctx = (SSL_CTX *)0x0;
        fwrite("Testing was requested for a disabled protocol. Skipping tests.\n",1,0x3f,_stderr);
        uVar30 = 0;
        goto LAB_00105a22;
      }
      if ((((((local_10c == 0 && local_108 == 0) && !bVar3) && local_118 == 0) && local_110 == 0) &&
          local_114 == 0) && local_104 == 0) goto LAB_0010618a;
LAB_00105cbe:
      if (bVar4) {
        if (local_dc == 0) {
          fwrite("Using BIO pair (-bio_pair)\n",1,0x1b,_stderr);
          local_dc = 1;
        }
        if (((int)local_e8 < 0x32) && (!bVar3)) {
          fwrite("Warning: For accurate timings, use more connections (e.g. -num 1000)\n",1,0x45,
                 _stderr);
        }
      }
      if ((bVar5) && (cm = COMP_zlib(), cm != (COMP_METHOD *)0x0)) {
        iVar16 = SSL_COMP_add_compression_method(1,cm);
        if (iVar16 != 0) {
          fwrite("Failed to add compression method\n",1,0x21,_stderr);
          ERR_print_errors_fp(_stderr);
        }
      }
      else {
        __fprintf_chk(_stderr,2,"Warning: %s compression not supported\n");
        ERR_print_errors_fp(_stderr);
      }
      psVar23 = SSL_COMP_get_compression_methods();
      iVar16 = OPENSSL_sk_num(psVar23);
      if (iVar16 != 0) {
        pcVar36 = "  %s:%d";
        __printf_chk(2,"Available compression methods:");
        for (iVar17 = 0; iVar17 < iVar16; iVar17 = iVar17 + 1) {
          uVar24 = OPENSSL_sk_value(psVar23,iVar17);
          SSL_COMP_get_id(uVar24);
          uVar24 = SSL_COMP_get0_name(uVar24);
          __printf_chk(2,"  %s:%d",uVar24);
        }
        putchar(10);
      }
      uVar24 = TLS_method();
      if (local_10c == 0) {
        if (local_104 == 0) {
          if (local_118 != 0) {
            local_118 = 0x303;
          }
        }
        else {
          local_118 = 0x302;
        }
      }
      else {
        local_118 = 0x301;
      }
      if ((local_108 != 0 || local_110 != 0) || local_114 != 0) {
        uVar24 = DTLS_method();
        local_118 = 0xfeff;
        if (local_114 == 0) {
          local_118 = -local_110 & 0xfefd;
        }
      }
      if ((local_100 == 0) ||
         (iVar16 = test_get_libctx(&local_68,&local_70,local_d0,&local_78,local_100), iVar16 != 0))
      {
        ctx = (SSL_CTX *)SSL_CTX_new_ex(local_68,0,uVar24);
        s_ctx = (SSL_CTX *)SSL_CTX_new_ex(local_68,0,uVar24);
        s_ctx2 = (SSL_CTX *)SSL_CTX_new_ex(local_68,0,uVar24);
        if ((ctx == (SSL_CTX *)0x0) || ((s_ctx == (SSL_CTX *)0x0 || (s_ctx2 == (SSL_CTX *)0x0))))
        goto LAB_00106234;
        SSL_CTX_set_security_level(ctx,0);
        SSL_CTX_set_security_level(s_ctx,0);
        SSL_CTX_set_security_level(s_ctx2,0);
        if (bVar6) {
          SSL_CTX_set_options(ctx,0x4000);
          SSL_CTX_set_options(s_ctx,0x4000);
        }
        larg = (long)(int)local_118;
        lVar25 = SSL_CTX_ctrl(ctx,0x7b,larg,(void *)0x0);
        if ((((lVar25 == 0) || (lVar25 = SSL_CTX_ctrl(ctx,0x7c,larg,(void *)0x0), lVar25 == 0)) ||
            (lVar25 = SSL_CTX_ctrl(s_ctx,0x7b,larg,(void *)0x0), lVar25 == 0)) ||
           (lVar25 = SSL_CTX_ctrl(s_ctx,0x7c,larg,(void *)0x0), lVar25 == 0)) goto LAB_00106240;
        if (cipher == (char *)0x0) {
LAB_00105fbd:
          if (((ciphersuites != 0) &&
              (((iVar16 = SSL_CTX_set_ciphersuites(ctx), iVar16 == 0 ||
                (iVar16 = SSL_CTX_set_ciphersuites(s_ctx,ciphersuites), iVar16 == 0)) ||
               (iVar16 = SSL_CTX_set_ciphersuites(s_ctx2,ciphersuites), iVar16 == 0)))) ||
             ((bVar7 && (iVar16 = SSL_CTX_enable_ct(ctx,1), iVar16 == 0)))) goto LAB_00106234;
          SSL_CONF_CTX_set_ssl_ctx(lVar21,ctx);
          SSL_CONF_CTX_set_ssl_ctx(lVar19,s_ctx);
          SSL_CONF_CTX_set_ssl_ctx(lVar20,s_ctx2);
          for (iVar16 = 0; iVar17 = OPENSSL_sk_num(local_130), iVar16 < iVar17; iVar16 = iVar16 + 2)
          {
            uVar24 = OPENSSL_sk_value(local_130,iVar16);
            pcVar36 = (char *)OPENSSL_sk_value(local_130,iVar16 + 1);
            iVar17 = SSL_CONF_cmd(lVar21,uVar24,pcVar36);
            if (iVar17 == -2) {
              iVar17 = SSL_CONF_cmd(lVar20,uVar24,pcVar36);
              if (0 < iVar17) {
                iVar17 = SSL_CONF_cmd(lVar19,uVar24,pcVar36);
                goto LAB_0010605e;
              }
LAB_00106210:
              if (pcVar36 == (char *)0x0) {
                pcVar36 = "";
              }
              BIO_printf(_bio_err,"Error processing %s %s\n",uVar24,pcVar36);
              goto LAB_00106234;
            }
LAB_0010605e:
            if (iVar17 < 1) goto LAB_00106210;
          }
          iVar16 = SSL_CONF_CTX_finish(lVar19);
          if (((iVar16 == 0) || (iVar16 = SSL_CONF_CTX_finish(lVar21), iVar16 == 0)) ||
             (iVar16 = SSL_CONF_CTX_finish(lVar20), iVar16 == 0)) {
            BIO_puts(_bio_err,"Error finishing context\n");
            ERR_print_errors(_bio_err);
            goto LAB_00106240;
          }
          if (!bVar9) {
            if (bVar10) {
              pkey = (EVP_PKEY *)get_dh1024dsa(local_68);
            }
            else if (bVar11) {
              pkey = (EVP_PKEY *)get_dh512();
            }
            else if (bVar12) {
              pkey = (EVP_PKEY *)get_dh4096();
            }
            else {
              pkey = (EVP_PKEY *)get_dh2048();
            }
            if ((pkey == (EVP_PKEY *)0x0) || (iVar16 = EVP_PKEY_up_ref(pkey), iVar16 == 0)) {
              EVP_PKEY_free(pkey);
              BIO_puts(_bio_err,"Error getting DH parameters\n");
              ERR_print_errors(_bio_err);
              goto LAB_00106240;
            }
            iVar16 = SSL_CTX_set0_tmp_dh_pkey(s_ctx,pkey);
            if (iVar16 == 0) {
              EVP_PKEY_free(pkey);
            }
            iVar16 = SSL_CTX_set0_tmp_dh_pkey(s_ctx2,pkey);
            if (iVar16 == 0) {
              EVP_PKEY_free(pkey);
            }
          }
          iVar16 = SSL_CTX_load_verify_file(s_ctx,local_c0);
          if (((((iVar16 == 0) && (iVar16 = SSL_CTX_load_verify_dir(s_ctx,local_b8), iVar16 == 0))
               || ((iVar16 = SSL_CTX_set_default_verify_paths(s_ctx), iVar16 == 0 ||
                   (((iVar16 = SSL_CTX_load_verify_file(s_ctx2,local_c0), iVar16 == 0 &&
                     (iVar16 = SSL_CTX_load_verify_dir(s_ctx2,local_b8), iVar16 == 0)) ||
                    (iVar16 = SSL_CTX_set_default_verify_paths(s_ctx2), iVar16 == 0)))))) ||
              ((iVar16 = SSL_CTX_load_verify_file(ctx,local_c0), iVar16 == 0 &&
               (iVar16 = SSL_CTX_load_verify_dir(ctx,local_b8), iVar16 == 0)))) ||
             (iVar16 = SSL_CTX_set_default_verify_paths(ctx), iVar16 == 0)) {
            ERR_print_errors(_bio_err);
          }
          iVar16 = SSL_CTX_set_default_ctlog_list_file(s_ctx);
          if (((iVar16 == 0) || (iVar16 = SSL_CTX_set_default_ctlog_list_file(s_ctx2), iVar16 == 0))
             || (iVar16 = SSL_CTX_set_default_ctlog_list_file(ctx), iVar16 == 0)) {
            ERR_print_errors(_bio_err);
          }
          if (bVar13) {
            puts("client authentication");
            SSL_CTX_set_verify(s_ctx,3,verify_callback);
            SSL_CTX_set_verify(s_ctx2,3,verify_callback);
            SSL_CTX_set_cert_verify_callback(s_ctx,app_verify_callback,&local_58);
            SSL_CTX_set_cert_verify_callback(s_ctx2,app_verify_callback,&local_58);
          }
          if (local_90 != 0) {
            puts("server authentication");
            SSL_CTX_set_verify(ctx,1,verify_callback);
            SSL_CTX_set_cert_verify_callback(ctx,app_verify_callback,&local_58);
          }
          local_60[0] = 0;
          iVar16 = SSL_CTX_set_session_id_context(s_ctx,(uchar *)local_60,4);
          if ((iVar16 == 0) ||
             (iVar16 = SSL_CTX_set_session_id_context(s_ctx2,(uchar *)local_60,4), iVar16 == 0))
          goto LAB_00106234;
          if (psk_key != (char *)0x0) {
            SSL_CTX_set_psk_client_callback(ctx,psk_client_callback);
            SSL_CTX_set_psk_server_callback(s_ctx,psk_server_callback);
            SSL_CTX_set_psk_server_callback(s_ctx2,psk_server_callback);
            if (debug != 0) {
              BIO_printf(_bio_err,"setting PSK identity hint to s_ctx\n");
            }
            iVar16 = SSL_CTX_use_psk_identity_hint(s_ctx,"ctx server identity_hint");
            if ((iVar16 == 0) ||
               (iVar16 = SSL_CTX_use_psk_identity_hint(s_ctx2,"ctx server identity_hint"),
               iVar16 == 0)) {
              BIO_printf(_bio_err,"error setting PSK identity hint to s_ctx\n");
              ERR_print_errors(_bio_err);
              goto LAB_00106240;
            }
          }
          if (npn_client != 0) {
            SSL_CTX_set_next_proto_select_cb(ctx,cb_client_npn,(void *)0x0);
          }
          if (npn_server != 0) {
            if (npn_server_reject != 0) {
              BIO_printf(_bio_err,"Can\'t have both -npn_server and -npn_server_reject\n");
              goto LAB_00106240;
            }
            SSL_CTX_set_next_protos_advertised_cb(s_ctx,cb_server_npn,(void *)0x0);
            SSL_CTX_set_next_protos_advertised_cb(s_ctx2,cb_server_npn,(void *)0x0);
          }
          if (npn_server_reject != 0) {
            SSL_CTX_set_next_protos_advertised_cb(s_ctx,cb_server_rejects_npn,(void *)0x0);
            SSL_CTX_set_next_protos_advertised_cb(s_ctx2,cb_server_rejects_npn,(void *)0x0);
          }
          if (serverinfo_sct != 0) {
            in_R9 = serverinfo_cli_parse_cb;
            iVar16 = SSL_CTX_add_client_custom_ext(ctx,0x12,0,0,0,serverinfo_cli_parse_cb,0,pcVar36)
            ;
            if (iVar16 == 0) {
              BIO_printf(_bio_err,"Error adding SCT extension\n");
              goto LAB_00106240;
            }
          }
          if ((serverinfo_tack != 0) &&
             (in_R11 = in_R9,
             iVar16 = SSL_CTX_add_client_custom_ext
                                (ctx,0xf300,0,0,0,serverinfo_cli_parse_cb,0,in_R9), iVar16 == 0)) {
            BIO_printf(_bio_err,"Error adding TACK extension\n");
            goto LAB_00106240;
          }
          lVar25 = serverinfo_file;
          if ((serverinfo_file != 0) &&
             ((iVar16 = SSL_CTX_use_serverinfo_file(s_ctx), iVar16 == 0 ||
              (lVar25 = serverinfo_file, iVar16 = SSL_CTX_use_serverinfo_file(s_ctx2), iVar16 == 0))
             )) {
            BIO_printf(_bio_err,"missing serverinfo file\n");
            goto LAB_00106240;
          }
          if (custom_ext != 0) {
            auVar37 = SSL_CTX_add_client_custom_ext
                                (ctx,1000,custom_ext_0_cli_add_cb,0,0,custom_ext_0_cli_parse_cb,0,
                                 lVar25);
            uVar24 = auVar37._8_8_;
            if (auVar37._0_4_ != 0) {
              uVar24 = 0;
              iVar16 = SSL_CTX_add_client_custom_ext
                                 (ctx,0x3e9,custom_ext_1_cli_add_cb,0,0,custom_ext_1_cli_parse_cb,0,
                                  auVar37._0_8_);
              if (iVar16 != 0) {
                uVar33 = 0;
                uVar38 = 0;
                iVar16 = SSL_CTX_add_client_custom_ext
                                   (ctx,0x3ea,custom_ext_2_cli_add_cb,0,0,custom_ext_2_cli_parse_cb,
                                    0,in_R11);
                uVar24 = extraout_RDX;
                if (iVar16 != 0) {
                  uVar29 = 0;
                  iVar16 = SSL_CTX_add_client_custom_ext
                                     (ctx,0x3eb,custom_ext_3_cli_add_cb,0,0,
                                      custom_ext_3_cli_parse_cb,0,uVar33);
                  uVar24 = extraout_RDX_00;
                  if ((iVar16 != 0) &&
                     (iVar16 = SSL_CTX_add_server_custom_ext
                                         (s_ctx,1000,custom_ext_0_srv_add_cb,0,0,
                                          custom_ext_0_srv_parse_cb,0,uVar29),
                     uVar24 = extraout_RDX_01, iVar16 != 0)) {
                    pcVar35 = custom_ext_0_srv_parse_cb;
                    uVar24 = uVar38;
                    iVar16 = SSL_CTX_add_server_custom_ext
                                       (s_ctx2,1000,custom_ext_0_srv_add_cb,0,0,
                                        custom_ext_0_srv_parse_cb,0);
                    if (iVar16 != 0) {
                      uVar38 = 0;
                      uVar33 = 0x3e9;
                      iVar16 = SSL_CTX_add_server_custom_ext
                                         (s_ctx,0x3e9,custom_ext_1_srv_add_cb,0,0,
                                          custom_ext_1_srv_parse_cb,0,pcVar35);
                      uVar24 = extraout_RDX_02;
                      if ((iVar16 != 0) &&
                         (iVar16 = SSL_CTX_add_server_custom_ext
                                             (s_ctx2,0x3e9,custom_ext_1_srv_add_cb,0,0,
                                              custom_ext_1_srv_parse_cb,0,uVar33),
                         uVar24 = extraout_RDX_03, iVar16 != 0)) {
                        uVar24 = 0;
                        iVar16 = SSL_CTX_add_server_custom_ext
                                           (s_ctx,0x3ea,custom_ext_2_srv_add_cb,0,0,
                                            custom_ext_2_srv_parse_cb,0,custom_ext_1_srv_add_cb);
                        if ((iVar16 != 0) &&
                           (((pSVar34 = s_ctx2,
                             iVar16 = SSL_CTX_add_server_custom_ext
                                                (s_ctx2,0x3ea,custom_ext_2_srv_add_cb,0,0,
                                                 custom_ext_2_srv_parse_cb,0,uVar38),
                             uVar24 = extraout_RDX_04, iVar16 != 0 &&
                             (iVar16 = SSL_CTX_add_server_custom_ext
                                                 (s_ctx,0x3eb,custom_ext_3_srv_add_cb,0,0,
                                                  custom_ext_3_srv_parse_cb,0,pSVar34),
                             uVar24 = extraout_RDX_05, iVar16 != 0)) &&
                            (iVar16 = SSL_CTX_add_server_custom_ext
                                                (s_ctx2,0x3eb,custom_ext_3_srv_add_cb,0,0,
                                                 custom_ext_3_srv_parse_cb,0,extraout_RDX_05),
                            uVar24 = extraout_RDX_06, iVar16 != 0)))) goto LAB_001069a3;
                      }
                    }
                  }
                }
              }
            }
            BIO_printf(_bio_err,"Error setting custom extensions\n",uVar24);
            goto LAB_00106240;
          }
LAB_001069a3:
          if (alpn_server != 0) {
            SSL_CTX_set_alpn_select_cb(s_ctx,cb_server_alpn);
          }
          if (alpn_server2 != 0) {
            SSL_CTX_set_alpn_select_cb(s_ctx2,cb_server_alpn);
          }
          if (alpn_client != 0) {
            pvVar27 = (void *)next_protos_parse(local_60);
            if (pvVar27 == (void *)0x0) {
              BIO_printf(_bio_err,"Error parsing -alpn_client argument\n");
            }
            else {
              iVar16 = SSL_CTX_set_alpn_protos(ctx,pvVar27,local_60[0]);
              if (iVar16 == 0) {
                CRYPTO_free(pvVar27);
                goto LAB_00106a2f;
              }
              BIO_printf(_bio_err,"Error setting ALPN\n");
              CRYPTO_free(pvVar27);
            }
            goto LAB_00106240;
          }
LAB_00106a2f:
          if (((server_sess_in != 0) &&
              (server_sess = (SSL_SESSION *)read_session(), server_sess == (SSL_SESSION *)0x0)) ||
             ((client_sess_in != 0 &&
              (client_sess = (SSL_SESSION *)read_session(), client_sess == (SSL_SESSION *)0x0))))
          goto LAB_00106240;
          if ((server_sess_out != 0) || (server_sess_in != 0)) {
            lVar25 = SSL_CTX_ctrl(s_ctx,0x3b,0,(void *)0x0);
            pvVar27 = (void *)CRYPTO_zalloc(lVar25,"test/ssl_old_test.c",0x6e3);
            if (pvVar27 == (void *)0x0) goto LAB_00106240;
            SSL_CTX_ctrl(s_ctx,0x3b,lVar25,pvVar27);
            CRYPTO_free(pvVar27);
          }
          if ((sn_server1 != 0) || (sn_server2 != 0)) {
            SSL_CTX_callback_ctrl(s_ctx,0x35,servername_cb);
          }
          ssl = SSL_new(ctx);
          ssl_00 = SSL_new(s_ctx);
          if ((ssl != (SSL *)0x0) && (ssl_00 != (SSL *)0x0)) {
            if (sn_client != (void *)0x0) {
              SSL_ctrl(ssl,0x37,0,sn_client);
            }
            if (bVar14) {
              SSL_set_options(ssl,8);
            }
            if (bVar15) {
              SSL_set_options(ssl_00,8);
            }
            iVar16 = set_protocol_version(server_min_proto,ssl_00,0x7b);
            if ((((iVar16 != 0) &&
                 (iVar16 = set_protocol_version(server_max_proto,ssl_00,0x7c), iVar16 != 0)) &&
                (iVar16 = set_protocol_version(client_min_proto,ssl,0x7b), iVar16 != 0)) &&
               (iVar16 = set_protocol_version(client_max_proto,ssl,0x7c), iVar16 != 0)) {
              if ((server_sess == (SSL_SESSION *)0x0) ||
                 (iVar16 = SSL_CTX_add_session(s_ctx,server_sess), iVar16 != 0)) {
                BIO_printf(bio_stdout,"Doing handshakes=%d bytes=%ld\n",(ulong)local_e8,local_d8);
                uVar30 = 1;
                for (iVar16 = 0; pcVar36 = should_negotiate, iVar16 < (int)local_e8;
                    iVar16 = iVar16 + 1) {
                  if ((!bVar8) && (iVar17 = SSL_set_session(ssl,(SSL_SESSION *)0x0), iVar17 == 0)) {
                    BIO_printf(_bio_err,"Failed to set session\n");
                    goto LAB_00105a22;
                  }
                  if ((client_sess_in != 0) &&
                     (iVar17 = SSL_set_session(ssl,client_sess), iVar17 == 0)) {
                    BIO_printf(_bio_err,"Can\'t set client session\n");
                    ERR_print_errors(_bio_err);
                    goto LAB_00105a22;
                  }
                  if (local_dc == 2) {
                    uVar30 = doit_localhost(ssl_00,ssl,4,local_d8,&local_88,&local_80);
                  }
                  else if (local_dc < 3) {
                    if (local_dc == 0) {
                      uVar30 = doit(ssl_00,ssl,local_d8);
                    }
                    else {
                      uVar30 = doit_biopair(ssl_00,ssl,local_d8,&local_88,&local_80);
                    }
                  }
                  else if (local_dc == 3) {
                    uVar30 = doit_localhost(ssl_00,ssl,6,local_d8,&local_88,&local_80);
                  }
                  if (uVar30 != 0) goto LAB_00106cf1;
                }
                if (((((uVar30 & 1) == 0) && (should_negotiate != (char *)0x0)) &&
                    (iVar16 = strcmp(should_negotiate,"fail-server"), iVar16 != 0)) &&
                   (iVar16 = strcmp(pcVar36,"fail-client"), iVar16 != 0)) {
                  iVar16 = protocol_from_string(pcVar36);
                  if (iVar16 < 0) {
                    BIO_printf(_bio_err,"Error parsing: %s\n",pcVar36);
                  }
                  else {
                    iVar17 = SSL_version(ssl);
                    if (iVar17 == iVar16) goto LAB_00106cf1;
                    pcVar36 = SSL_get_version(ssl);
                    BIO_printf(_bio_err,"Unexpected version negotiated. Expected: %s, got %s\n",
                               should_negotiate,pcVar36);
                  }
                }
                else {
LAB_00106cf1:
                  if ((local_b0 == 0xffffffff) ||
                     ((uVar18 = SSL_session_reused(ssl_00), uVar18 == local_b0 &&
                      (uVar18 = SSL_session_reused(ssl), uVar18 == local_b0)))) {
                    if (server_sess_out != 0) {
                      pSVar28 = SSL_get_session(ssl_00);
                      iVar16 = write_session(server_sess_out,pSVar28);
                      if (iVar16 == 0) goto LAB_00106246;
                    }
                    if (client_sess_out != 0) {
                      pSVar28 = SSL_get_session(ssl);
                      iVar16 = write_session(client_sess_out,pSVar28);
                      if (iVar16 == 0) goto LAB_00106246;
                    }
                    if (verbose == 0) {
                      print_details(ssl,&_LC92);
                    }
                    if (bVar4) {
                      BIO_printf(bio_stdout,
                                 "Approximate total server time: %6.2f s\nApproximate total client time: %6.2f s\n"
                                 ,(double)local_88 / _LC267,(double)local_80 / _LC267);
                    }
                    goto LAB_00105a22;
                  }
                  uVar30 = SSL_session_reused(ssl);
                  uVar18 = SSL_session_reused(ssl_00);
                  BIO_printf(_bio_err,
                             "Unexpected session reuse state. Expected: %d, server: %d, client: %d\n"
                             ,(ulong)local_b0,(ulong)uVar18,(ulong)uVar30);
                }
              }
              else {
                BIO_printf(_bio_err,"Can\'t add server session\n");
                ERR_print_errors(_bio_err);
              }
            }
          }
        }
        else {
          if (*cipher != '\0') {
            iVar16 = SSL_CTX_set_cipher_list(ctx,cipher);
            if (((iVar16 == 0) || (iVar16 = SSL_CTX_set_cipher_list(s_ctx,cipher), iVar16 == 0)) ||
               (iVar16 = SSL_CTX_set_cipher_list(s_ctx2,cipher), iVar16 == 0)) goto LAB_00106234;
            goto LAB_00105fbd;
          }
          iVar16 = SSL_CTX_set_cipher_list(ctx,cipher);
          if (iVar16 != 0) {
LAB_00106530:
            fwrite("CLEARING ALL TLSv1.2 CIPHERS SHOULD FAIL\n",1,0x29,_stderr);
            goto LAB_00106240;
          }
          uVar26 = ERR_peek_error();
          uVar30 = (uint)uVar26 & 0x7fffff;
          if ((uVar26 & 0x80000000) != 0) {
            uVar30 = (uint)uVar26 & 0x7fffffff;
          }
          if (uVar30 == 0xb9) {
            ERR_clear_error();
            iVar16 = SSL_CTX_set_cipher_list(s_ctx,cipher);
            if (iVar16 != 0) goto LAB_00106530;
            uVar26 = ERR_peek_error();
            uVar30 = (uint)uVar26 & 0x7fffff;
            if ((uVar26 & 0x80000000) != 0) {
              uVar30 = (uint)uVar26 & 0x7fffffff;
            }
            if (uVar30 == 0xb9) {
              ERR_clear_error();
              iVar16 = SSL_CTX_set_cipher_list(s_ctx2,cipher);
              if (iVar16 != 0) goto LAB_00106530;
              uVar26 = ERR_peek_error();
              uVar30 = (uint)uVar26 & 0x7fffff;
              if ((uVar26 & 0x80000000) != 0) {
                uVar30 = (uint)uVar26 & 0x7fffffff;
              }
              if (uVar30 == 0xb9) {
                ERR_clear_error();
                goto LAB_00105fbd;
              }
            }
          }
LAB_00106234:
          ERR_print_errors(_bio_err);
LAB_00106240:
          ssl_00 = (SSL *)0x0;
          ssl = (SSL *)0x0;
        }
LAB_00106246:
        uVar30 = 1;
        goto LAB_00105a22;
      }
    }
  }
  ssl_00 = (SSL *)0x0;
  ssl = (SSL *)0x0;
  ctx = (SSL_CTX *)0x0;
  uVar30 = 1;
LAB_00105a22:
  SSL_free(ssl_00);
  SSL_free(ssl);
  SSL_CTX_free(s_ctx);
  SSL_CTX_free(s_ctx2);
  SSL_CTX_free(ctx);
  SSL_CONF_CTX_free(lVar19);
  SSL_CONF_CTX_free(lVar20);
  SSL_CONF_CTX_free(lVar21);
  OPENSSL_sk_free(local_130);
  BIO_free(bio_stdout);
  SSL_SESSION_free(server_sess);
  SSL_SESSION_free(client_sess);
  OSSL_PROVIDER_unload(local_70);
  OSSL_PROVIDER_unload(local_78);
  OSSL_LIB_CTX_free(local_68);
  test_close_streams();
                    /* WARNING: Subroutine does not return */
  exit(uVar30);
}


