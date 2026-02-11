
void ssl_set_option(long param_1,uint param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  
  puVar1 = *(ulong **)(param_1 + 0x28);
  if (puVar1 != (ulong *)0x0) {
    uVar2 = param_2 & 0xf00;
    if (uVar2 == 0x100) {
      puVar4 = *(uint **)(param_1 + 0x40);
    }
    else {
      if (uVar2 != 0x200) {
        if (uVar2 != 0) {
          return;
        }
        uVar3 = *puVar1 | param_3;
        if (param_4 == (param_2 & 1)) {
          uVar3 = ~param_3 & *puVar1;
        }
        *puVar1 = uVar3;
        return;
      }
      puVar4 = *(uint **)(param_1 + 0x48);
    }
    uVar2 = *puVar4 | (uint)param_3;
    if (param_4 == (param_2 & 1)) {
      uVar2 = ~(uint)param_3 & *puVar4;
    }
    *puVar4 = uVar2;
  }
  return;
}



undefined8 ssl_conf_cmd_skip_prefix(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char *__s2;
  int iVar2;
  size_t sVar3;
  char *__s;
  ulong __n;
  
  __s = (char *)*param_2;
  if (__s == (char *)0x0) {
    return 0;
  }
  __s2 = *(char **)(param_1 + 2);
  if (__s2 == (char *)0x0) {
    if ((*param_1 & 1) != 0) {
      if (*__s != '-') {
        return 0;
      }
      if (__s[1] == '\0') {
        return 0;
      }
      *param_2 = __s + 1;
    }
  }
  else {
    sVar3 = strlen(__s);
    __n = *(ulong *)(param_1 + 4);
    if (sVar3 <= __n) {
      return 0;
    }
    uVar1 = *param_1;
    if (((uVar1 & 1) != 0) && (iVar2 = strncmp(__s,__s2,__n), iVar2 != 0)) {
      return 0;
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = OPENSSL_strncasecmp(__s,__s2,__n);
      if (iVar2 != 0) {
        return 0;
      }
      __s = (char *)*param_2;
      __n = *(ulong *)(param_1 + 4);
    }
    *param_2 = __s + __n;
  }
  return 1;
}



undefined8 ssl_set_option_list(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 local_44;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  local_44 = 1;
  if (param_2 != -1) {
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    else if (*param_1 == '-') {
      local_44 = 0;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
  }
  puVar2 = *(undefined8 **)(param_3 + 0x18);
  if (*(long *)(param_3 + 0x1a) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)((long)puVar2 + 0xc);
      if ((*param_3 & uVar4 & 0xc) != 0) {
        if (param_2 == -1) {
          iVar1 = strcmp((char *)*puVar2,param_1);
          if (iVar1 == 0) {
LAB_00100201:
            ssl_set_option(param_3,uVar4,puVar2[2],local_44);
            return 1;
          }
        }
        else if (param_2 == *(int *)(puVar2 + 1)) {
          iVar1 = OPENSSL_strncasecmp(*puVar2,param_1,(long)param_2);
          if (iVar1 == 0) {
            uVar4 = *(uint *)((long)puVar2 + 0xc);
            goto LAB_00100201;
          }
        }
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar3 < *(ulong *)(param_3 + 0x1a));
  }
  return 0;
}



undefined8 cmd_NumTickets(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = strtol(param_2,(char **)0x0,10);
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = SSL_CTX_set_num_tickets(*(long *)(param_1 + 0x18),(long)iVar1);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = SSL_set_num_tickets(*(long *)(param_1 + 0x20),(long)iVar1);
      return uVar3;
    }
  }
  return uVar3;
}



undefined4 cmd_RecordPadding(long param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__s;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  __s = CRYPTO_strdup(param_2,"ssl/ssl_conf.c",0x2a4);
  if (__s != (char *)0x0) {
    pcVar3 = strchr(__s,0x2c);
    if (pcVar3 == (char *)0x0) {
      iVar1 = OPENSSL_strtoul(__s,&local_38,0,&local_48);
      if (iVar1 != 0) {
        local_40 = local_48;
LAB_001003e0:
        uVar2 = 0;
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar2 = SSL_CTX_set_block_padding_ex(*(long *)(param_1 + 0x18),local_48,local_40);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = SSL_set_block_padding_ex(*(long *)(param_1 + 0x20),local_48,local_40);
        }
        goto LAB_0010037c;
      }
    }
    else {
      *pcVar3 = '\0';
      if (pcVar3[1] != '\0') {
        iVar1 = OPENSSL_strtoul(pcVar3 + 1,&local_38,0,&local_40);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_strtoul(__s,&local_38,0,&local_48);
          if (iVar1 != 0) goto LAB_001003e0;
        }
      }
    }
  }
  uVar2 = 0;
LAB_0010037c:
  CRYPTO_free(__s);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void free_cert_filename(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      CRYPTO_free(*(void **)(*(long *)(param_1 + 0x30) + lVar1));
    } while (uVar2 < *(ulong *)(param_1 + 0x38));
  }
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



bool cmd_DHParameters(long param_1,void *param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    bVar5 = true;
    if (puVar4 == (undefined8 *)0x0) goto LAB_00100634;
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
  }
  type = BIO_s_file();
  bp = BIO_new(type);
  if (((bp == (BIO *)0x0) || (lVar2 = BIO_ctrl(bp,0x6c,3,param_2), (int)lVar2 < 1)) ||
     (lVar2 = OSSL_DECODER_CTX_new_for_pkey(&local_38,&_LC2,0,&_LC1,4,*puVar4,puVar4[0x8e]),
     lVar2 == 0)) {
LAB_00100620:
    bVar5 = false;
  }
  else {
    ERR_set_mark();
    do {
      iVar1 = OSSL_DECODER_from_bio(lVar2,bp);
      if ((iVar1 != 0) || (local_38 != (EVP_PKEY *)0x0)) break;
      lVar3 = BIO_ctrl(bp,2,0,(void *)0x0);
    } while ((int)lVar3 == 0);
    OSSL_DECODER_CTX_free(lVar2);
    if (local_38 == (EVP_PKEY *)0x0) {
      ERR_clear_last_mark();
      goto LAB_00100620;
    }
    ERR_pop_to_mark();
    if (*(long *)(param_1 + 0x18) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = SSL_CTX_set0_tmp_dh_pkey(*(long *)(param_1 + 0x18),local_38);
      if (0 < iVar1) {
        local_38 = (EVP_PKEY *)0x0;
      }
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      bVar5 = 0 < iVar1;
    }
    else {
      iVar1 = SSL_set0_tmp_dh_pkey(*(long *)(param_1 + 0x20),local_38);
      if (iVar1 < 1) goto LAB_00100620;
      local_38 = (EVP_PKEY *)0x0;
      bVar5 = true;
    }
  }
  EVP_PKEY_free(local_38);
  BIO_free(bp);
LAB_00100634:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



undefined8 cmd_RequestCAStore(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x70) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  uVar1 = SSL_add_store_cert_subjects_to_stack(lVar2,param_2);
  return uVar1;
}



int cmd_RequestCAPath(long param_1,char *param_2)

{
  int iVar1;
  stack_st_X509_NAME *stackCAs;
  
  stackCAs = *(stack_st_X509_NAME **)(param_1 + 0x70);
  if (stackCAs == (stack_st_X509_NAME *)0x0) {
    stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
    *(stack_st_X509_NAME **)(param_1 + 0x70) = stackCAs;
    if (stackCAs == (stack_st_X509_NAME *)0x0) {
      return 0;
    }
  }
  iVar1 = SSL_add_dir_cert_subjects_to_stack(stackCAs,param_2);
  return iVar1;
}



int cmd_RequestCAFile(long param_1,char *param_2)

{
  int iVar1;
  stack_st_X509_NAME *stackCAs;
  
  stackCAs = *(stack_st_X509_NAME **)(param_1 + 0x70);
  if (stackCAs == (stack_st_X509_NAME *)0x0) {
    stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
    *(stack_st_X509_NAME **)(param_1 + 0x70) = stackCAs;
    if (stackCAs == (stack_st_X509_NAME *)0x0) {
      return 0;
    }
  }
  iVar1 = SSL_add_file_cert_subjects_to_stack(stackCAs,param_2);
  return iVar1;
}



bool do_store(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  X509_STORE *pXVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    puVar6 = *(uint **)(param_1 + 0x20);
    if (puVar6 == (uint *)0x0) {
      return true;
    }
    puVar7 = puVar6;
    if (*puVar6 != 0) {
      if ((*puVar6 & 0x80) == 0) {
        return false;
      }
      puVar7 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar7 == (uint *)0x0) {
        return false;
      }
      puVar6 = *(uint **)(param_1 + 0x20);
    }
    puVar4 = *(undefined8 **)(puVar6 + 2);
    lVar8 = *(long *)(puVar7 + 0x220);
    uVar9 = 0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_001007b1;
  }
  else {
    lVar8 = puVar4[0x2b];
  }
  uVar9 = puVar4[0x8e];
  puVar4 = (undefined8 *)*puVar4;
LAB_001007b1:
  if (param_5 == 0) {
    lVar2 = *(long *)(lVar8 + 0x70);
    puVar1 = (undefined8 *)(lVar8 + 0x70);
  }
  else {
    lVar2 = *(long *)(lVar8 + 0x78);
    puVar1 = (undefined8 *)(lVar8 + 0x78);
  }
  if (lVar2 == 0) {
    pXVar5 = X509_STORE_new();
    *puVar1 = pXVar5;
    if (pXVar5 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (((param_2 == 0) || (iVar3 = X509_STORE_load_file_ex(*puVar1,param_2,puVar4,uVar9), iVar3 != 0)
      ) && ((param_3 == 0 || (iVar3 = X509_STORE_load_path(*puVar1,param_3), iVar3 != 0)))) {
    if (param_4 == 0) {
      return true;
    }
    iVar3 = X509_STORE_load_store_ex(*puVar1,param_4,puVar4,uVar9);
    return iVar3 != 0;
  }
  return false;
}



void cmd_VerifyCAStore(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,0,0,param_2,1);
  return;
}



void cmd_VerifyCAFile(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,param_2,0,0,1);
  return;
}



void cmd_VerifyCAPath(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,0,param_2,0,1);
  return;
}



void cmd_ChainCAStore(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,0,0,param_2,0);
  return;
}



void cmd_ChainCAFile(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,param_2,0,0,0);
  return;
}



void cmd_ChainCAPath(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,0,param_2,0,0);
  return;
}



bool cmd_ServerInfoFile(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_use_serverinfo_file();
    return 0 < iVar1;
  }
  return true;
}



ulong cmd_PrivateKey(byte *param_1,char *param_2)

{
  int iVar1;
  
  if ((*param_1 & 0x20) != 0) {
    iVar1 = 1;
    if (*(SSL_CTX **)(param_1 + 0x18) != (SSL_CTX *)0x0) {
      iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 0x18),param_2,1);
    }
    if (*(SSL **)(param_1 + 0x20) != (SSL *)0x0) {
      iVar1 = SSL_use_PrivateKey_file(*(SSL **)(param_1 + 0x20),param_2,1);
    }
    return (ulong)(0 < iVar1);
  }
  return 0xfffffffe;
}



bool cmd_Certificate(byte *param_1,char *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  uint *puVar7;
  long *plVar8;
  uint *puVar9;
  
  if (*(SSL_CTX **)(param_1 + 0x18) == (SSL_CTX *)0x0) {
    puVar9 = *(uint **)(param_1 + 0x20);
    if (puVar9 == (uint *)0x0) {
      return true;
    }
    uVar2 = *puVar9;
  }
  else {
    iVar4 = SSL_CTX_use_certificate_chain_file(*(SSL_CTX **)(param_1 + 0x18),param_2);
    puVar9 = *(uint **)(param_1 + 0x20);
    plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x158);
    if (puVar9 == (uint *)0x0) goto LAB_00100a6d;
    uVar2 = *puVar9;
  }
  puVar7 = puVar9;
  if (uVar2 != 0) {
    if ((uVar2 & 0x80) == 0) {
      return false;
    }
    puVar7 = (uint *)ossl_quic_obj_get0_handshake_layer();
    if (puVar7 == (uint *)0x0) {
      return false;
    }
    puVar9 = *(uint **)(param_1 + 0x20);
  }
  iVar4 = SSL_use_certificate_chain_file(puVar9,param_2);
  plVar8 = *(long **)(puVar7 + 0x220);
LAB_00100a6d:
  bVar3 = 0 < iVar4;
  if (plVar8 == (long *)0x0) {
    return bVar3;
  }
  if (!bVar3) {
    return bVar3;
  }
  if ((*param_1 & 0x40) != 0) {
    lVar5 = *plVar8 - plVar8[4] >> 3;
    if (*(ulong *)(param_1 + 0x38) <= (ulong)(lVar5 * -0x3333333333333333)) {
      return false;
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5 * 0x6666666666666668);
    CRYPTO_free((void *)*puVar1);
    pcVar6 = CRYPTO_strdup(param_2,"ssl/ssl_conf.c",0x1d3);
    *puVar1 = pcVar6;
    if (pcVar6 == (char *)0x0) {
      return false;
    }
  }
  return true;
}



int cmd_VerifyMode(void *param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    *(undefined8 *)((long)param_1 + 0x68) = 6;
    *(undefined1 **)((long)param_1 + 0x60) = ssl_vfy_list_4;
    iVar1 = CONF_parse_list(param_2,0x2c,1,ssl_set_option_list,param_1);
    return iVar1;
  }
  return -3;
}



int cmd_Options(void *param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    *(undefined8 *)((long)param_1 + 0x68) = 0x1a;
    *(undefined1 **)((long)param_1 + 0x60) = ssl_option_list_3;
    iVar1 = CONF_parse_list(param_2,0x2c,1,ssl_set_option_list,param_1);
    return iVar1;
  }
  return -3;
}



void cmd_Protocol(void *param_1,char *param_2)

{
  *(undefined1 **)((long)param_1 + 0x60) = ssl_protocol_list_1;
  *(undefined8 *)((long)param_1 + 0x68) = 9;
  CONF_parse_list(param_2,0x2c,1,ssl_set_option_list,param_1);
  return;
}



undefined8 min_max_proto(long param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    uVar5 = **(undefined4 **)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    uVar5 = **(undefined4 **)(*(long *)(param_1 + 0x18) + 8);
  }
  lVar3 = 0;
  ppuVar4 = &versions_2;
  do {
    iVar1 = strcmp(*ppuVar4,param_2);
    if (iVar1 == 0) {
      if ((int)(&DAT_00102248)[lVar3 * 4] < 0) {
        return 0;
      }
      uVar2 = ssl_set_version_bound(uVar5,(&DAT_00102248)[lVar3 * 4],param_3);
      return uVar2;
    }
    lVar3 = lVar3 + 1;
    ppuVar4 = ppuVar4 + 2;
  } while (lVar3 != 8);
  return 0;
}



void cmd_MaxProtocol(long param_1,undefined8 param_2)

{
  min_max_proto(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  return;
}



void cmd_MinProtocol(long param_1,undefined8 param_2)

{
  min_max_proto(param_1,param_2,*(undefined8 *)(param_1 + 0x50));
  return;
}



bool cmd_Ciphersuites(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_set_ciphersuites();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_set_ciphersuites(*(long *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}



bool cmd_CipherString(long param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(SSL_CTX **)(param_1 + 0x18) != (SSL_CTX *)0x0) {
    iVar1 = SSL_CTX_set_cipher_list(*(SSL_CTX **)(param_1 + 0x18),param_2);
  }
  if (*(SSL **)(param_1 + 0x20) != (SSL *)0x0) {
    iVar1 = SSL_set_cipher_list(*(SSL **)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}



bool cmd_ECDHParameters(uint *param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  
  uVar2 = *param_1;
  if ((uVar2 & 2) != 0) {
    iVar3 = OPENSSL_strcasecmp(param_2,"+automatic");
    if (iVar3 == 0) {
      return true;
    }
    iVar3 = OPENSSL_strcasecmp(param_2,"automatic");
    if (iVar3 == 0) {
      return true;
    }
    uVar2 = *param_1;
  }
  if (((uVar2 & 1) != 0) && (iVar3 = strcmp(param_2,"auto"), iVar3 == 0)) {
    return true;
  }
  pcVar4 = strchr(param_2,0x3a);
  bVar1 = false;
  if (pcVar4 == (char *)0x0) {
    if (*(SSL_CTX **)(param_1 + 6) != (SSL_CTX *)0x0) {
      lVar5 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 6),0x5c,0,param_2);
      return 0 < (int)lVar5;
    }
    bVar1 = true;
    if (*(SSL **)(param_1 + 8) != (SSL *)0x0) {
      lVar5 = SSL_ctrl(*(SSL **)(param_1 + 8),0x5c,0,param_2);
      bVar1 = 0 < (int)lVar5;
    }
  }
  return bVar1;
}



bool cmd_Groups(long param_1,void *param_2)

{
  long lVar1;
  
  if (*(SSL **)(param_1 + 0x20) != (SSL *)0x0) {
    lVar1 = SSL_ctrl(*(SSL **)(param_1 + 0x20),0x5c,0,param_2);
    return 0 < (int)lVar1;
  }
  lVar1 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x18),0x5c,0,param_2);
  return 0 < (int)lVar1;
}



bool cmd_ClientSignatureAlgorithms(long param_1,void *param_2)

{
  long lVar1;
  
  if (*(SSL **)(param_1 + 0x20) != (SSL *)0x0) {
    lVar1 = SSL_ctrl(*(SSL **)(param_1 + 0x20),0x66,0,param_2);
    return 0 < (int)lVar1;
  }
  lVar1 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x18),0x66,0,param_2);
  return 0 < (int)lVar1;
}



bool cmd_SignatureAlgorithms(long param_1,void *param_2)

{
  long lVar1;
  
  if (*(SSL **)(param_1 + 0x20) != (SSL *)0x0) {
    lVar1 = SSL_ctrl(*(SSL **)(param_1 + 0x20),0x62,0,param_2);
    return 0 < (int)lVar1;
  }
  lVar1 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x18),0x62,0,param_2);
  return 0 < (int)lVar1;
}



NoteGnuProperty_4 * ssl_conf_cmd_lookup(uint *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  dword dVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (param_2 != (char *)0x0) {
    puVar5 = ssl_conf_cmds;
    do {
      dVar3 = ((NoteGnuProperty_4 *)((long)puVar5 + 0x10))->type;
      uVar1 = *param_1;
      if (((((dVar3 & 8) == 0) || ((uVar1 & 8) != 0)) && (((dVar3 & 4) == 0 || ((uVar1 & 4) != 0))))
         && (((dVar3 & 0x20) == 0 || ((uVar1 & 0x20) != 0)))) {
        if (((uVar1 & 1) != 0) &&
           ((*(char **)((long)puVar5 + 0x10) != (char *)0x0 &&
            (iVar4 = strcmp(*(char **)((long)puVar5 + 0x10),param_2), iVar4 == 0)))) {
          return (NoteGnuProperty_4 *)puVar5;
        }
        if ((((uVar1 & 2) != 0) &&
            (lVar2._0_4_ = ((NoteGnuProperty_4 *)puVar5)->type,
            lVar2._4_1_ = ((NoteGnuProperty_4 *)puVar5)->name[0],
            lVar2._5_1_ = ((NoteGnuProperty_4 *)puVar5)->name[1],
            lVar2._6_1_ = ((NoteGnuProperty_4 *)puVar5)->name[2],
            lVar2._7_1_ = ((NoteGnuProperty_4 *)puVar5)->name[3], lVar2 != 0)) &&
           (iVar4 = OPENSSL_strcasecmp(lVar2,param_2), iVar4 == 0)) {
          return (NoteGnuProperty_4 *)puVar5;
        }
      }
      puVar5 = (undefined1 *)((long)puVar5 + 0x20);
    } while ((NoteGnuProperty_4 *)puVar5 != &NoteGnuProperty_4_00102d60);
  }
  return (NoteGnuProperty_4 *)0x0;
}



int cmd_ClientCAFile(long param_1,char *param_2)

{
  int iVar1;
  stack_st_X509_NAME *stackCAs;
  
  stackCAs = *(stack_st_X509_NAME **)(param_1 + 0x70);
  if (stackCAs == (stack_st_X509_NAME *)0x0) {
    stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
    *(stack_st_X509_NAME **)(param_1 + 0x70) = stackCAs;
    if (stackCAs == (stack_st_X509_NAME *)0x0) {
      return 0;
    }
  }
  iVar1 = SSL_add_file_cert_subjects_to_stack(stackCAs,param_2);
  return iVar1;
}



int cmd_ClientCAPath(long param_1,char *param_2)

{
  int iVar1;
  stack_st_X509_NAME *stackCAs;
  
  stackCAs = *(stack_st_X509_NAME **)(param_1 + 0x70);
  if (stackCAs == (stack_st_X509_NAME *)0x0) {
    stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
    *(stack_st_X509_NAME **)(param_1 + 0x70) = stackCAs;
    if (stackCAs == (stack_st_X509_NAME *)0x0) {
      return 0;
    }
  }
  iVar1 = SSL_add_dir_cert_subjects_to_stack(stackCAs,param_2);
  return iVar1;
}



undefined8 cmd_ClientCAStore(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x70) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  uVar1 = SSL_add_store_cert_subjects_to_stack(lVar2,param_2);
  return uVar1;
}



bool cmd_Curves(long param_1,void *param_2)

{
  long lVar1;
  
  if (*(SSL **)(param_1 + 0x20) != (SSL *)0x0) {
    lVar1 = SSL_ctrl(*(SSL **)(param_1 + 0x20),0x5c,0,param_2);
    return 0 < (int)lVar1;
  }
  lVar1 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x18),0x5c,0,param_2);
  return 0 < (int)lVar1;
}



int SSL_CONF_cmd(byte *param_1,long param_2,char *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long local_30 [2];
  
  local_30[0] = param_2;
  if (param_2 == 0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_conf.c",0x3be,"SSL_CONF_cmd");
    ERR_set_error(0x14,0x181,0);
    return 0;
  }
  iVar1 = ssl_conf_cmd_skip_prefix(param_1,local_30);
  lVar3 = local_30[0];
  if ((iVar1 == 0) ||
     (puVar2 = (undefined8 *)ssl_conf_cmd_lookup(param_1,local_30[0]), puVar2 == (undefined8 *)0x0))
  {
    if ((*param_1 & 0x10) != 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_conf.c",0x3df,"SSL_CONF_cmd");
      ERR_set_error(0x14,0x182,"cmd=%s",local_30[0]);
    }
    return -2;
  }
  if (*(short *)((long)puVar2 + 0x1a) == 4) {
    if (puVar2 + -0x204bc < (undefined8 *)0x3a1) {
      lVar3 = ((long)(puVar2 + -0x204bc) >> 5) * 0x10;
      ssl_set_option(param_1,*(undefined4 *)(ssl_cmd_switches + lVar3 + 8),
                     *(undefined8 *)(ssl_cmd_switches + lVar3),1);
      return 1;
    }
    ERR_new();
    ERR_set_debug("ssl/ssl_conf.c",0x3b1,"ctrl_switch_option");
    ERR_set_error(0x14,0xc0103,0);
    return 0;
  }
  if (param_3 == (char *)0x0) {
    if ((*param_1 & 0x10) == 0) {
      return -3;
    }
    ERR_new();
    ERR_set_debug("ssl/ssl_conf.c",0x3d7,"SSL_CONF_cmd");
    iVar1 = -3;
    param_3 = "<EMPTY>";
  }
  else {
    iVar1 = (*(code *)*puVar2)(param_1,param_3);
    if (0 < iVar1) {
      return 2;
    }
    iVar1 = ((iVar1 != -2) - 2) + (uint)(iVar1 != -2);
    if ((*param_1 & 0x10) == 0) {
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("ssl/ssl_conf.c",0x3d7,"SSL_CONF_cmd");
  }
  ERR_set_error(0x14,0x180,"cmd=%s, value=%s",lVar3,param_3);
  return iVar1;
}



undefined8 SSL_CONF_cmd_argv(uint *param_1,int *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == (int *)0x0) {
    lVar1 = *(long *)*param_3;
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = ((long *)*param_3)[1];
    *param_1 = *param_1 & 0xfffffffd | 1;
    uVar4 = SSL_CONF_cmd(param_1,lVar1,lVar2);
    if (0 < (int)uVar4) {
      *param_3 = *param_3 + (long)(int)uVar4 * 8;
      return uVar4;
    }
  }
  else {
    if (*param_2 < 1) {
      return 0;
    }
    lVar1 = *(long *)*param_3;
    if (lVar1 == 0) {
      return 0;
    }
    if (*param_2 == 1) {
      *param_1 = *param_1 & 0xfffffffd | 1;
      uVar4 = SSL_CONF_cmd(param_1,lVar1,0);
      iVar3 = (int)uVar4;
    }
    else {
      lVar2 = ((long *)*param_3)[1];
      *param_1 = *param_1 & 0xfffffffd | 1;
      uVar4 = SSL_CONF_cmd(param_1,lVar1,lVar2);
      iVar3 = (int)uVar4;
    }
    if (0 < iVar3) {
      *param_3 = *param_3 + (long)(int)uVar4 * 8;
      *param_2 = *param_2 - (int)uVar4;
      return uVar4;
    }
  }
  if ((int)uVar4 == -2) {
    return 0;
  }
  if ((int)uVar4 == 0) {
    return 0xffffffff;
  }
  return uVar4;
}



undefined2 SSL_CONF_cmd_value_type(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_10;
  
  local_10 = param_2;
  iVar1 = ssl_conf_cmd_skip_prefix(param_1,&local_10);
  if (iVar1 != 0) {
    lVar2 = ssl_conf_cmd_lookup(param_1,local_10);
    if (lVar2 != 0) {
      return *(undefined2 *)(lVar2 + 0x1a);
    }
  }
  return 0;
}



void SSL_CONF_CTX_new(void)

{
  CRYPTO_zalloc(0x78,"ssl/ssl_conf.c",0x413);
  return;
}



undefined8 SSL_CONF_CTX_finish(byte *param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = *(uint **)(param_1 + 0x20);
    if (puVar2 != (uint *)0x0) {
      if (*puVar2 == 0) {
LAB_001015d0:
        lVar4 = *(long *)(puVar2 + 0x220);
        goto LAB_001014ef;
      }
      if ((*puVar2 & 0x80) != 0) {
        puVar2 = (uint *)ossl_quic_obj_get0_handshake_layer(puVar2);
        if (puVar2 != (uint *)0x0) goto LAB_001015d0;
        goto LAB_00101550;
      }
      lVar4 = *(long *)(param_1 + 0x70);
      if (lVar4 == 0) {
        return 1;
      }
      goto LAB_00101562;
    }
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 == 0) {
      return 1;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x158);
LAB_001014ef:
    if (((lVar4 != 0) && ((*param_1 & 0x40) != 0)) && (*(long *)(param_1 + 0x38) != 0)) {
      uVar3 = 0;
      do {
        while ((*(long *)(*(long *)(param_1 + 0x30) + uVar3 * 8) == 0 ||
               (*(long *)(*(long *)(lVar4 + 0x20) + uVar3 * 0x28 + 8) != 0))) {
          uVar3 = uVar3 + 1;
          if (*(ulong *)(param_1 + 0x38) <= uVar3) goto LAB_00101550;
        }
        uVar1 = cmd_PrivateKey(param_1);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_1 + 0x38));
    }
LAB_00101550:
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 == 0) {
      return 1;
    }
    puVar2 = *(uint **)(param_1 + 0x20);
    if (puVar2 != (uint *)0x0) {
LAB_00101562:
      SSL_set0_CA_list(puVar2,lVar4);
      goto LAB_0010156d;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      SSL_CTX_set0_CA_list(*(long *)(param_1 + 0x18),lVar4);
      goto LAB_0010156d;
    }
  }
  OPENSSL_sk_pop_free(lVar4,&X509_NAME_free);
LAB_0010156d:
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  return 1;
}



void SSL_CONF_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free_cert_filename();
    CRYPTO_free(*(void **)((long)param_1 + 8));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x70),&X509_NAME_free);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void SSL_CONF_CTX_set_flags(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



void SSL_CONF_CTX_clear_flags(uint *param_1,uint param_2)

{
  *param_1 = ~param_2 & *param_1;
  return;
}



undefined8 SSL_CONF_CTX_set1_prefix(long param_1,char *param_2)

{
  char *__s;
  size_t sVar1;
  
  if (param_2 == (char *)0x0) {
    CRYPTO_free(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    __s = CRYPTO_strdup(param_2,"ssl/ssl_conf.c",0x464);
    if (__s == (char *)0x0) {
      return 0;
    }
    CRYPTO_free(*(void **)(param_1 + 8));
    *(char **)(param_1 + 8) = __s;
    sVar1 = strlen(__s);
    *(size_t *)(param_1 + 0x10) = sVar1;
  }
  return 1;
}



void SSL_CONF_CTX_set_ssl(long param_1,uint *param_2)

{
  long lVar1;
  
  *(uint **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  free_cert_filename();
  if (param_2 == (uint *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
    return;
  }
  if (*param_2 != 0) {
    if ((*param_2 & 0x80) == 0) {
      return;
    }
    param_2 = (uint *)ossl_quic_obj_get0_handshake_layer(param_2);
    if (param_2 == (uint *)0x0) {
      return;
    }
  }
  *(uint **)(param_1 + 0x28) = param_2 + 0x26c;
  *(uint **)(param_1 + 0x50) = param_2 + 0x26f;
  *(uint **)(param_1 + 0x58) = param_2 + 0x270;
  *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x220) + 0x1c;
  *(uint **)(param_1 + 0x48) = param_2 + 0x254;
  lVar1 = CRYPTO_zalloc(*(long *)(param_2 + 0x46) * 8,"ssl/ssl_conf.c",0x480);
  *(long *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x46);
  }
  return;
}



void SSL_CONF_CTX_set_ssl_ctx(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  free_cert_filename();
  if (param_2 != 0) {
    *(long *)(param_1 + 0x28) = param_2 + 0x138;
    *(long *)(param_1 + 0x50) = param_2 + 0x144;
    *(long *)(param_1 + 0x58) = param_2 + 0x148;
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x158) + 0x1c;
    *(long *)(param_1 + 0x48) = param_2 + 0x180;
    lVar1 = CRYPTO_zalloc(*(long *)(param_2 + 0x690) * 8 + 0x48,"ssl/ssl_conf.c",0x498);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x690) + 9;
    }
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  return;
}


