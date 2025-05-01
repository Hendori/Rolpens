
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
LAB_00100140:
        uVar2 = 0;
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar2 = SSL_CTX_set_block_padding_ex(*(long *)(param_1 + 0x18),local_48,local_40);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = SSL_set_block_padding_ex(*(long *)(param_1 + 0x20),local_48,local_40);
        }
        goto LAB_001000dc;
      }
    }
    else {
      *pcVar3 = '\0';
      if (pcVar3[1] != '\0') {
        iVar1 = OPENSSL_strtoul(pcVar3 + 1,&local_38,0,&local_40);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_strtoul(__s,&local_38,0,&local_48);
          if (iVar1 != 0) goto LAB_00100140;
        }
      }
    }
  }
  uVar2 = 0;
LAB_001000dc:
  CRYPTO_free(__s);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (puVar4 == (undefined8 *)0x0) goto LAB_00100324;
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
  }
  type = BIO_s_file();
  bp = BIO_new(type);
  if (((bp == (BIO *)0x0) || (lVar2 = BIO_ctrl(bp,0x6c,3,param_2), (int)lVar2 < 1)) ||
     (lVar2 = OSSL_DECODER_CTX_new_for_pkey(&local_38,&_LC2,0,&_LC1,4,*puVar4,puVar4[0x8e]),
     lVar2 == 0)) {
LAB_00100310:
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
      goto LAB_00100310;
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
      if (iVar1 < 1) goto LAB_00100310;
      local_38 = (EVP_PKEY *)0x0;
      bVar5 = true;
    }
  }
  EVP_PKEY_free(local_38);
  BIO_free(bp);
LAB_00100324:
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
    puVar7 = *(uint **)(param_1 + 0x20);
    if (puVar7 == (uint *)0x0) {
      return true;
    }
    uVar2 = *puVar7;
  }
  else {
    iVar4 = SSL_CTX_use_certificate_chain_file(*(SSL_CTX **)(param_1 + 0x18),param_2);
    puVar7 = *(uint **)(param_1 + 0x20);
    plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x158);
    if (puVar7 == (uint *)0x0) goto LAB_0010054d;
    uVar2 = *puVar7;
  }
  puVar9 = puVar7;
  if (uVar2 != 0) {
    if ((uVar2 & 0x80) == 0) {
      return false;
    }
    puVar7 = (uint *)ossl_quic_obj_get0_handshake_layer(puVar7);
    if (puVar7 == (uint *)0x0) {
      return false;
    }
    puVar9 = *(uint **)(param_1 + 0x20);
  }
  iVar4 = SSL_use_certificate_chain_file(puVar9,param_2);
  plVar8 = *(long **)(puVar7 + 0x220);
LAB_0010054d:
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



undefined8 cmd_MinProtocol(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    uVar4 = **(undefined4 **)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    uVar4 = **(undefined4 **)(*(long *)(param_1 + 0x18) + 8);
  }
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = strcmp("SSLv3",param_2);
    if (iVar1 == 0) {
      lVar3 = 1;
    }
    else {
      iVar1 = strcmp("TLSv1",param_2);
      if (iVar1 == 0) {
        lVar3 = 2;
      }
      else {
        iVar1 = strcmp("TLSv1.1",param_2);
        if (iVar1 == 0) {
          lVar3 = 3;
        }
        else {
          iVar1 = strcmp("TLSv1.2",param_2);
          if (iVar1 == 0) {
            lVar3 = 4;
          }
          else {
            iVar1 = strcmp("TLSv1.3",param_2);
            if (iVar1 == 0) {
              lVar3 = 5;
            }
            else {
              iVar1 = strcmp("DTLSv1",param_2);
              if (iVar1 == 0) {
                lVar3 = 6;
              }
              else {
                iVar1 = strcmp("DTLSv1.2",param_2);
                if (iVar1 != 0) {
                  return 0;
                }
                lVar3 = 7;
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(versions_2 + lVar3 * 0x10 + 8) < 0) {
    return 0;
  }
  uVar2 = ssl_set_version_bound
                    (uVar4,*(int *)(versions_2 + lVar3 * 0x10 + 8),*(undefined8 *)(param_1 + 0x50));
  return uVar2;
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
    } while ((NoteGnuProperty_4 *)puVar5 != &NoteGnuProperty_4_00103460);
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



undefined8 cmd_MaxProtocol(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    uVar4 = **(undefined4 **)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    uVar4 = **(undefined4 **)(*(long *)(param_1 + 0x18) + 8);
  }
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = strcmp("SSLv3",param_2);
    if (iVar1 == 0) {
      lVar3 = 1;
    }
    else {
      iVar1 = strcmp("TLSv1",param_2);
      if (iVar1 == 0) {
        lVar3 = 2;
      }
      else {
        iVar1 = strcmp("TLSv1.1",param_2);
        if (iVar1 == 0) {
          lVar3 = 3;
        }
        else {
          iVar1 = strcmp("TLSv1.2",param_2);
          if (iVar1 == 0) {
            lVar3 = 4;
          }
          else {
            iVar1 = strcmp("TLSv1.3",param_2);
            if (iVar1 == 0) {
              lVar3 = 5;
            }
            else {
              iVar1 = strcmp("DTLSv1",param_2);
              if (iVar1 == 0) {
                lVar3 = 6;
              }
              else {
                iVar1 = strcmp("DTLSv1.2",param_2);
                if (iVar1 != 0) {
                  return 0;
                }
                lVar3 = 7;
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(versions_2 + lVar3 * 0x10 + 8) < 0) {
    return 0;
  }
  uVar2 = ssl_set_version_bound
                    (uVar4,*(int *)(versions_2 + lVar3 * 0x10 + 8),*(undefined8 *)(param_1 + 0x58));
  return uVar2;
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



undefined8 ssl_set_option_list(char *param_1,int param_2,uint *param_3)

{
  ulong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint local_44;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == -1) {
    uVar8 = *(ulong *)(param_3 + 0x1a);
    puVar3 = *(undefined8 **)(param_3 + 0x18);
    local_44 = 1;
    if (uVar8 == 0) {
      return 0;
    }
LAB_00100f45:
    uVar5 = *param_3;
    uVar6 = 0;
    do {
      uVar4 = *(uint *)((long)puVar3 + 0xc);
      if (((uVar5 & uVar4 & 0xc) != 0) && (iVar2 = strcmp((char *)*puVar3,param_1), iVar2 == 0))
      goto LAB_00100ec4;
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar6 != uVar8);
  }
  else {
    if (*param_1 == '+') {
      local_44 = 1;
LAB_00100ff0:
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar8 = *(ulong *)(param_3 + 0x1a);
      puVar3 = *(undefined8 **)(param_3 + 0x18);
      if (uVar8 == 0) {
        return 0;
      }
      if (param_2 == -1) goto LAB_00100f45;
    }
    else {
      if (*param_1 == '-') {
        local_44 = 0;
        goto LAB_00100ff0;
      }
      uVar8 = *(ulong *)(param_3 + 0x1a);
      puVar3 = *(undefined8 **)(param_3 + 0x18);
      local_44 = 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    uVar6 = 0;
    do {
      if (((*(uint *)((long)puVar3 + 0xc) & *param_3 & 0xc) != 0) &&
         (*(int *)(puVar3 + 1) == param_2)) {
        iVar2 = OPENSSL_strncasecmp(*puVar3,param_1,(long)param_2);
        if (iVar2 == 0) {
          uVar4 = *(uint *)((long)puVar3 + 0xc);
LAB_00100ec4:
          puVar1 = *(ulong **)(param_3 + 10);
          if (puVar1 != (ulong *)0x0) {
            uVar5 = uVar4 & 0xf00;
            uVar8 = puVar3[2];
            if (uVar5 == 0x100) {
              puVar7 = *(uint **)(param_3 + 0x10);
            }
            else {
              if (uVar5 != 0x200) {
                if (uVar5 != 0) {
                  return 1;
                }
                uVar6 = uVar8 | *puVar1;
                if (local_44 == (uVar4 & 1)) {
                  uVar6 = ~uVar8 & *puVar1;
                }
                *puVar1 = uVar6;
                return 1;
              }
              puVar7 = *(uint **)(param_3 + 0x12);
            }
            uVar5 = *puVar7 | (uint)uVar8;
            if (local_44 == (uVar4 & 1)) {
              uVar5 = ~(uint)uVar8 & *puVar7;
            }
            *puVar7 = uVar5;
          }
          return 1;
        }
        uVar8 = *(ulong *)(param_3 + 0x1a);
      }
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar6 < uVar8);
  }
  return 0;
}



bool cmd_ChainCAPath(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  X509_STORE *pXVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 == (uint *)0x0) {
      return true;
    }
    if (*puVar3 != 0) {
      if ((*puVar3 & 0x80) == 0) {
        return false;
      }
      puVar3 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar3 == (uint *)0x0) {
        return false;
      }
    }
    lVar1 = *(long *)(puVar3 + 0x220);
    pXVar4 = *(X509_STORE **)(lVar1 + 0x70);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x158);
    pXVar4 = *(X509_STORE **)(lVar1 + 0x70);
  }
  if (pXVar4 == (X509_STORE *)0x0) {
    pXVar4 = X509_STORE_new();
    *(X509_STORE **)(lVar1 + 0x70) = pXVar4;
    if (pXVar4 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (param_2 == 0) {
    return true;
  }
  iVar2 = X509_STORE_load_path(pXVar4);
  return iVar2 != 0;
}



bool cmd_VerifyCAFile(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  X509_STORE *pXVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 == (uint *)0x0) {
      return true;
    }
    puVar4 = puVar3;
    if (*puVar3 != 0) {
      if ((*puVar3 & 0x80) == 0) {
        return false;
      }
      puVar4 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar4 == (uint *)0x0) {
        return false;
      }
      puVar3 = *(uint **)(param_1 + 0x20);
    }
    puVar2 = *(undefined8 **)(puVar3 + 2);
    lVar6 = *(long *)(puVar4 + 0x220);
    uVar7 = 0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_00101117;
  }
  else {
    lVar6 = puVar2[0x2b];
  }
  uVar7 = puVar2[0x8e];
  puVar2 = (undefined8 *)*puVar2;
LAB_00101117:
  pXVar5 = *(X509_STORE **)(lVar6 + 0x78);
  if (pXVar5 == (X509_STORE *)0x0) {
    pXVar5 = X509_STORE_new();
    *(X509_STORE **)(lVar6 + 0x78) = pXVar5;
    if (pXVar5 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = X509_STORE_load_file_ex(pXVar5,param_2,puVar2,uVar7);
  return iVar1 != 0;
}



bool cmd_VerifyCAPath(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  X509_STORE *pXVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 == (uint *)0x0) {
      return true;
    }
    if (*puVar3 != 0) {
      if ((*puVar3 & 0x80) == 0) {
        return false;
      }
      puVar3 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar3 == (uint *)0x0) {
        return false;
      }
    }
    lVar1 = *(long *)(puVar3 + 0x220);
    pXVar4 = *(X509_STORE **)(lVar1 + 0x78);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x158);
    pXVar4 = *(X509_STORE **)(lVar1 + 0x78);
  }
  if (pXVar4 == (X509_STORE *)0x0) {
    pXVar4 = X509_STORE_new();
    *(X509_STORE **)(lVar1 + 0x78) = pXVar4;
    if (pXVar4 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (param_2 == 0) {
    return true;
  }
  iVar2 = X509_STORE_load_path(pXVar4);
  return iVar2 != 0;
}



bool cmd_VerifyCAStore(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  X509_STORE *pXVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 == (uint *)0x0) {
      return true;
    }
    puVar4 = puVar3;
    if (*puVar3 != 0) {
      if ((*puVar3 & 0x80) == 0) {
        return false;
      }
      puVar4 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar4 == (uint *)0x0) {
        return false;
      }
      puVar3 = *(uint **)(param_1 + 0x20);
    }
    puVar2 = *(undefined8 **)(puVar3 + 2);
    lVar6 = *(long *)(puVar4 + 0x220);
    uVar7 = 0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_001012d7;
  }
  else {
    lVar6 = puVar2[0x2b];
  }
  uVar7 = puVar2[0x8e];
  puVar2 = (undefined8 *)*puVar2;
LAB_001012d7:
  pXVar5 = *(X509_STORE **)(lVar6 + 0x78);
  if (pXVar5 == (X509_STORE *)0x0) {
    pXVar5 = X509_STORE_new();
    *(X509_STORE **)(lVar6 + 0x78) = pXVar5;
    if (pXVar5 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = X509_STORE_load_store_ex(pXVar5,param_2,puVar2,uVar7);
  return iVar1 != 0;
}



bool cmd_ChainCAStore(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  X509_STORE *pXVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 == (uint *)0x0) {
      return true;
    }
    puVar4 = puVar3;
    if (*puVar3 != 0) {
      if ((*puVar3 & 0x80) == 0) {
        return false;
      }
      puVar4 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar4 == (uint *)0x0) {
        return false;
      }
      puVar3 = *(uint **)(param_1 + 0x20);
    }
    puVar2 = *(undefined8 **)(puVar3 + 2);
    lVar6 = *(long *)(puVar4 + 0x220);
    uVar7 = 0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_001013d7;
  }
  else {
    lVar6 = puVar2[0x2b];
  }
  uVar7 = puVar2[0x8e];
  puVar2 = (undefined8 *)*puVar2;
LAB_001013d7:
  pXVar5 = *(X509_STORE **)(lVar6 + 0x70);
  if (pXVar5 == (X509_STORE *)0x0) {
    pXVar5 = X509_STORE_new();
    *(X509_STORE **)(lVar6 + 0x70) = pXVar5;
    if (pXVar5 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = X509_STORE_load_store_ex(pXVar5,param_2,puVar2,uVar7);
  return iVar1 != 0;
}



bool cmd_ChainCAFile(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  X509_STORE *pXVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 == (uint *)0x0) {
      return true;
    }
    puVar4 = puVar3;
    if (*puVar3 != 0) {
      if ((*puVar3 & 0x80) == 0) {
        return false;
      }
      puVar4 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (puVar4 == (uint *)0x0) {
        return false;
      }
      puVar3 = *(uint **)(param_1 + 0x20);
    }
    puVar2 = *(undefined8 **)(puVar3 + 2);
    lVar6 = *(long *)(puVar4 + 0x220);
    uVar7 = 0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_001014d7;
  }
  else {
    lVar6 = puVar2[0x2b];
  }
  uVar7 = puVar2[0x8e];
  puVar2 = (undefined8 *)*puVar2;
LAB_001014d7:
  pXVar5 = *(X509_STORE **)(lVar6 + 0x70);
  if (pXVar5 == (X509_STORE *)0x0) {
    pXVar5 = X509_STORE_new();
    *(X509_STORE **)(lVar6 + 0x70) = pXVar5;
    if (pXVar5 == (X509_STORE *)0x0) {
      return false;
    }
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = X509_STORE_load_file_ex(pXVar5,param_2,puVar2,uVar7);
  return iVar1 != 0;
}



int SSL_CONF_cmd(uint *param_1,char *param_2,char *param_3)

{
  char *__s2;
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  
  if (param_2 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_conf.c",0x3be,"SSL_CONF_cmd");
    ERR_set_error(0x14,0x181,0);
    return 0;
  }
  __s2 = *(char **)(param_1 + 2);
  uVar3 = *param_1;
  if (__s2 == (char *)0x0) {
    if ((uVar3 & 1) != 0) {
      if ((*param_2 != '-') || (param_2[1] == '\0')) goto LAB_00101610;
      param_2 = param_2 + 1;
    }
LAB_00101649:
    puVar5 = (undefined8 *)ssl_conf_cmd_lookup(param_1,param_2);
    if (puVar5 != (undefined8 *)0x0) {
      if (*(short *)((long)puVar5 + 0x1a) == 4) {
        if ((undefined8 *)0x3a0 < puVar5 + -0x2059c) {
          ERR_new();
          ERR_set_debug("ssl/ssl_conf.c",0x3b1,"ctrl_switch_option");
          ERR_set_error(0x14,0xc0103,0);
          return 0;
        }
        puVar1 = *(ulong **)(param_1 + 10);
        lVar6 = ((long)(puVar5 + -0x2059c) >> 5) * 0x10;
        if (puVar1 != (ulong *)0x0) {
          uVar10 = *(ulong *)(ssl_cmd_switches + lVar6);
          uVar3 = *(uint *)(ssl_cmd_switches + lVar6 + 8) & 0xf00;
          uVar8 = ~*(uint *)(ssl_cmd_switches + lVar6 + 8) & 1;
          if (uVar3 == 0x100) {
            puVar9 = *(uint **)(param_1 + 0x10);
          }
          else {
            if (uVar3 != 0x200) {
              if (uVar3 != 0) {
                return 1;
              }
              uVar7 = *puVar1 | uVar10;
              if (uVar8 == 0) {
                uVar7 = ~uVar10 & *puVar1;
              }
              *puVar1 = uVar7;
              return 1;
            }
            puVar9 = *(uint **)(param_1 + 0x12);
          }
          uVar3 = *puVar9 | (uint)uVar10;
          if (uVar8 == 0) {
            uVar3 = ~(uint)uVar10 & *puVar9;
          }
          *puVar9 = uVar3;
        }
        return 1;
      }
      if (param_3 == (char *)0x0) {
        if ((*param_1 & 0x10) == 0) {
          return -3;
        }
        ERR_new();
        ERR_set_debug("ssl/ssl_conf.c",0x3d7,"SSL_CONF_cmd");
        iVar2 = -3;
        param_3 = "<EMPTY>";
      }
      else {
        iVar2 = (*(code *)*puVar5)(param_1,param_3);
        if (0 < iVar2) {
          return 2;
        }
        iVar2 = ((iVar2 != -2) - 2) + (uint)(iVar2 != -2);
        if ((*param_1 & 0x10) == 0) {
          return iVar2;
        }
        ERR_new();
        ERR_set_debug("ssl/ssl_conf.c",0x3d7,"SSL_CONF_cmd");
      }
      ERR_set_error(0x14,0x180,"cmd=%s, value=%s",param_2,param_3);
      return iVar2;
    }
  }
  else {
    sVar4 = strlen(param_2);
    uVar10 = *(ulong *)(param_1 + 4);
    if ((sVar4 <= uVar10) ||
       (((uVar3 & 1) != 0 && (iVar2 = strncmp(param_2,__s2,uVar10), iVar2 != 0))))
    goto LAB_00101610;
    if ((uVar3 & 2) == 0) {
LAB_00101646:
      param_2 = param_2 + uVar10;
      goto LAB_00101649;
    }
    iVar2 = OPENSSL_strncasecmp(param_2,__s2,uVar10);
    if (iVar2 == 0) {
      uVar10 = *(ulong *)(param_1 + 4);
      goto LAB_00101646;
    }
  }
  uVar3 = *param_1;
LAB_00101610:
  if ((uVar3 & 0x10) != 0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_conf.c",0x3df,"SSL_CONF_cmd");
    ERR_set_error(0x14,0x182,"cmd=%s",param_2);
  }
  return -2;
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



undefined2 SSL_CONF_cmd_value_type(uint *param_1,char *param_2)

{
  uint uVar1;
  char *__s2;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong __n;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  __s2 = *(char **)(param_1 + 2);
  if (__s2 == (char *)0x0) {
    if ((*param_1 & 1) != 0) {
      if (*param_2 != '-') {
        return 0;
      }
      if (param_2[1] == '\0') {
        return 0;
      }
      param_2 = param_2 + 1;
    }
  }
  else {
    sVar3 = strlen(param_2);
    __n = *(ulong *)(param_1 + 4);
    if (sVar3 <= __n) {
      return 0;
    }
    uVar1 = *param_1;
    if (((uVar1 & 1) != 0) && (iVar2 = strncmp(param_2,__s2,__n), iVar2 != 0)) {
      return 0;
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = OPENSSL_strncasecmp(param_2,__s2,__n);
      if (iVar2 != 0) {
        return 0;
      }
      __n = *(ulong *)(param_1 + 4);
    }
    param_2 = param_2 + __n;
  }
  lVar4 = ssl_conf_cmd_lookup(param_1,param_2);
  if (lVar4 == 0) {
    return 0;
  }
  return *(undefined2 *)(lVar4 + 0x1a);
}



void SSL_CONF_CTX_new(void)

{
  CRYPTO_zalloc(0x78,"ssl/ssl_conf.c",0x413);
  return;
}



undefined8 SSL_CONF_CTX_finish(byte *param_1)

{
  char *file;
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  SSL *ssl;
  long lVar5;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = *(uint **)(param_1 + 0x20);
    if (puVar2 != (uint *)0x0) {
      if (*puVar2 == 0) {
LAB_00101bc0:
        lVar5 = *(long *)(puVar2 + 0x220);
        goto LAB_00101a85;
      }
      if ((*puVar2 & 0x80) != 0) {
        puVar2 = (uint *)ossl_quic_obj_get0_handshake_layer(puVar2);
        if (puVar2 != (uint *)0x0) goto LAB_00101bc0;
        goto LAB_00101b20;
      }
      lVar5 = *(long *)(param_1 + 0x70);
      if (lVar5 == 0) {
        return 1;
      }
      goto LAB_00101b32;
    }
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) {
      return 1;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x158);
LAB_00101a85:
    if (((lVar5 != 0) && ((*param_1 & 0x40) != 0)) &&
       (uVar3 = *(ulong *)(param_1 + 0x38), uVar3 != 0)) {
      uVar4 = 0;
      do {
        while (((file = *(char **)(*(long *)(param_1 + 0x30) + uVar4 * 8), file == (char *)0x0 ||
                (*(long *)(*(long *)(lVar5 + 0x20) + uVar4 * 0x28 + 8) != 0)) ||
               ((*param_1 & 0x20) == 0))) {
LAB_00101aa8:
          uVar4 = uVar4 + 1;
          if (uVar3 <= uVar4) goto LAB_00101b20;
        }
        if (*(SSL_CTX **)(param_1 + 0x18) == (SSL_CTX *)0x0) {
          ssl = *(SSL **)(param_1 + 0x20);
          if (ssl != (SSL *)0x0) goto LAB_00101afa;
          goto LAB_00101aa8;
        }
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 0x18),file,1);
        ssl = *(SSL **)(param_1 + 0x20);
        if (ssl != (SSL *)0x0) {
LAB_00101afa:
          iVar1 = SSL_use_PrivateKey_file(ssl,file,1);
        }
        if (iVar1 < 1) {
          return 0;
        }
        uVar3 = *(ulong *)(param_1 + 0x38);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
LAB_00101b20:
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) {
      return 1;
    }
    puVar2 = *(uint **)(param_1 + 0x20);
    if (puVar2 != (uint *)0x0) {
LAB_00101b32:
      SSL_set0_CA_list(puVar2,lVar5);
      goto LAB_00101b3d;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      SSL_CTX_set0_CA_list(*(long *)(param_1 + 0x18),lVar5);
      goto LAB_00101b3d;
    }
  }
  OPENSSL_sk_pop_free(lVar5,&X509_NAME_free);
LAB_00101b3d:
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
  long lVar1;
  ulong uVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x38) != 0) {
      uVar2 = 0;
      do {
        lVar1 = uVar2 * 8;
        uVar2 = uVar2 + 1;
        CRYPTO_free(*(void **)(*(long *)((long)param_1 + 0x30) + lVar1));
      } while (uVar2 < *(ulong *)((long)param_1 + 0x38));
    }
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
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
  ulong uVar2;
  
  *(uint **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
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
  ulong uVar2;
  
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
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


