
undefined8 ocsp_resp_cb(SSL *param_1,BIO *param_2)

{
  long lVar1;
  OCSP_RESPONSE *o;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = SSL_ctrl(param_1,0x46,0,&local_38);
  BIO_puts(param_2,"OCSP response: ");
  if (local_38 == (uchar *)0x0) {
    BIO_puts(param_2,"no response sent\n");
  }
  else {
    o = d2i_OCSP_RESPONSE((OCSP_RESPONSE **)0x0,&local_38,(long)(int)lVar1);
    if (o == (OCSP_RESPONSE *)0x0) {
      BIO_puts(param_2,"response parse error\n");
      BIO_dump_indent(param_2,(char *)local_38,(int)lVar1,4);
      uVar2 = 0;
      goto LAB_0010009c;
    }
    BIO_puts(param_2,"\n======================================\n");
    OCSP_RESPONSE_print(param_2,o,0);
    BIO_puts(param_2,"======================================\n");
    OCSP_RESPONSE_free(o);
  }
  uVar2 = 1;
LAB_0010009c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int new_session_cb(ssl_st *ssl,SSL_SESSION *sess)

{
  int iVar1;
  BIO *bp;
  
  if (sess_out != (char *)0x0) {
    bp = BIO_new_file(sess_out,"w");
    if (bp == (BIO *)0x0) {
      BIO_printf(_bio_err,"Error writing session file %s\n",sess_out);
    }
    else {
      PEM_write_bio_SSL_SESSION(bp,sess);
      BIO_free(bp);
    }
  }
  iVar1 = SSL_version(ssl);
  if (iVar1 != 0x304) {
    return 0;
  }
  BIO_printf(bio_c_out,"---\nPost-Handshake New Session Ticket arrived:\n");
  SSL_SESSION_print(bio_c_out,sess);
  BIO_printf(bio_c_out,"---\n");
  return 0;
}



undefined8
next_proto_cb(undefined8 param_1,uchar **param_2,uchar *param_3,uchar *param_4,uint param_5,
             undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (c_quiet == 0) {
    uVar3 = 0;
    BIO_printf(bio_c_out,"Protocols advertised by server: ");
    if (param_5 != 0) {
      while( true ) {
        uVar2 = (int)uVar3 + 1;
        BIO_write(bio_c_out,param_4 + uVar2,(uint)param_4[uVar3]);
        uVar2 = uVar2 + param_4[uVar3];
        uVar3 = (ulong)uVar2;
        if (param_5 <= uVar2) break;
        if (uVar2 != 0) {
          BIO_write(bio_c_out,&_LC11,2);
        }
      }
    }
    BIO_write(bio_c_out,&_LC10,1);
  }
  iVar1 = SSL_select_next_proto
                    (param_2,param_3,param_4,param_5,(uchar *)*param_6,*(uint *)(param_6 + 1));
  *(int *)(param_6 + 2) = iVar1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
psk_client_cb(undefined8 param_1,long param_2,char *param_3,uint param_4,void *param_5,uint param_6)

{
  uint uVar1;
  void *__src;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 uStack_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (c_debug != 0) {
    BIO_printf(bio_c_out,"psk_client_cb\n");
    if (param_2 == 0) {
      if (c_debug != 0) {
        BIO_printf(bio_c_out,"NULL received PSK identity hint, continuing anyway\n");
      }
    }
    else if (c_debug != 0) {
      BIO_printf(bio_c_out,"Received PSK identity hint \'%s\'\n",param_2);
    }
  }
  uVar1 = BIO_snprintf(param_3,(ulong)param_4,"%s",psk_identity);
  if (((int)uVar1 < 0) || (param_4 < uVar1)) {
    if (c_debug != 0) {
      BIO_printf(_bio_err,"Error in PSK client callback\n");
    }
  }
  else {
    if (c_debug != 0) {
      BIO_printf(bio_c_out,"created identity \'%s\' len=%d\n",param_3,(ulong)uVar1);
    }
    __src = (void *)OPENSSL_hexstr2buf(_psk_key,&local_38);
    if (__src == (void *)0x0) {
      BIO_printf(_bio_err,"Could not convert PSK key \'%s\' to buffer\n",_psk_key);
    }
    else {
      if ((-1 < (int)param_6) && ((long)CONCAT44(uStack_34,local_38) <= (long)(ulong)param_6)) {
        memcpy(param_5,__src,CONCAT44(uStack_34,local_38));
        CRYPTO_free(__src);
        if (c_debug != 0) {
          BIO_printf(bio_c_out,"created PSK len=%ld\n",CONCAT44(uStack_34,local_38));
        }
        goto LAB_0010038a;
      }
      BIO_printf(_bio_err,"psk buffer of callback is too small (%d) for key (%ld)\n",(ulong)param_6)
      ;
      CRYPTO_free(__src);
    }
  }
  local_38 = 0;
LAB_0010038a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
psk_use_session_cb(undefined8 param_1,long param_2,undefined8 *param_3,size_t *param_4,
                  undefined8 *param_5)

{
  undefined *__s;
  int iVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  void *ptr;
  SSL_SESSION *ses;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (psksess == (SSL_SESSION *)0x0) {
    ptr = (void *)OPENSSL_hexstr2buf(_psk_key,&local_48);
    if (ptr == (void *)0x0) {
      BIO_printf(_bio_err,"Could not convert PSK key \'%s\' to buffer\n",_psk_key);
    }
    else {
      lVar2 = SSL_CIPHER_find(param_1,&tls13_aes128gcmsha256_id);
      if (lVar2 != 0) {
        ses = SSL_SESSION_new();
        if ((((ses != (SSL_SESSION *)0x0) &&
             (iVar1 = SSL_SESSION_set1_master_key(ses,ptr,local_48), iVar1 != 0)) &&
            (iVar1 = SSL_SESSION_set_cipher(ses,lVar2), iVar1 != 0)) &&
           (iVar1 = SSL_SESSION_set_protocol_version(ses,0x304), iVar1 != 0)) {
          CRYPTO_free(ptr);
          goto LAB_00100561;
        }
        CRYPTO_free(ptr);
        goto LAB_001005ab;
      }
      BIO_printf(_bio_err,"Error finding suitable ciphersuite\n");
      CRYPTO_free(ptr);
    }
  }
  else {
    iVar1 = SSL_SESSION_up_ref();
    ses = psksess;
    if (iVar1 == 0) {
      ses = (SSL_SESSION *)0x0;
    }
    else {
LAB_00100561:
      lVar2 = SSL_SESSION_get0_cipher(ses);
      if (lVar2 != 0) {
        if ((param_2 == 0) || (lVar2 = SSL_CIPHER_get_handshake_digest(lVar2), param_2 == lVar2)) {
          __s = psk_identity;
          *param_5 = ses;
          *param_3 = __s;
          sVar3 = strlen(__s);
          *param_4 = sVar3;
        }
        else {
          *param_3 = 0;
          *param_4 = 0;
          *param_5 = 0;
          SSL_SESSION_free(ses);
        }
        uVar4 = 1;
        goto LAB_001005b5;
      }
    }
LAB_001005ab:
    SSL_SESSION_free(ses);
  }
  uVar4 = 0;
LAB_001005b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 checked_uint8(undefined8 *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  ulong uVar6;
  ushort **ppuVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  byte *local_48;
  long local_40;
  
  pbVar4 = (byte *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = __errno_location();
  iVar2 = *piVar5;
  *piVar5 = 0;
  saved_errno = iVar2;
  uVar6 = strtol((char *)pbVar4,(char **)&local_48,10);
  iVar3 = *piVar5;
  *piVar5 = iVar2;
  if ((((uVar6 + 0x7fffffffffffffff < 0xfffffffffffffffe) || (iVar3 != 0x22)) &&
      (local_48 != pbVar4)) &&
     ((ppuVar7 = __ctype_b_loc(), (*(byte *)((long)*ppuVar7 + (ulong)*local_48 * 2 + 1) & 0x20) != 0
      && (*param_2 = (char)uVar6, uVar6 < 0x100)))) {
    bVar1 = *(byte *)((long)*ppuVar7 + (ulong)*local_48 * 2 + 1);
    while ((bVar1 & 0x20) != 0) {
      pbVar4 = local_48 + 1;
      local_48 = local_48 + 1;
      bVar1 = *(byte *)((long)*ppuVar7 + (ulong)*pbVar4 * 2 + 1);
    }
    *param_1 = local_48;
    uVar8 = 1;
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool tlsa_import_rrset(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = OPENSSL_sk_num(param_2);
  if (iVar3 < 1) {
    bVar2 = false;
  }
  else {
    iVar7 = 0;
    iVar9 = 0;
    do {
      uVar5 = OPENSSL_sk_value(param_2,iVar7);
      local_48 = uVar5;
      if (tlsa_fields_4 == (undefined *)0x0) {
        lVar6 = 0;
      }
      else {
        ppuVar8 = &tlsa_fields_4;
        do {
          lVar6 = (*(code *)ppuVar8[2])(&local_48);
          if (lVar6 < 1) {
            BIO_printf(_bio_err,"%s: warning: bad TLSA %s field in: %s\n",prog,ppuVar8[1],uVar5);
            goto LAB_001008dc;
          }
          ppuVar1 = ppuVar8 + 3;
          ppuVar8 = ppuVar8 + 3;
        } while (*ppuVar1 != (undefined *)0x0);
      }
      iVar4 = SSL_dane_tlsa_add(param_1,usage_0,selector_1,mtype_2,data_3,lVar6);
      CRYPTO_free(data_3);
      if (iVar4 == 0) {
        ERR_print_errors(_bio_err);
        BIO_printf(_bio_err,"%s: warning: unusable TLSA rrdata: %s\n",prog,uVar5);
      }
      else if (iVar4 < 0) {
        ERR_print_errors(_bio_err);
        BIO_printf(_bio_err,"%s: warning: error loading TLSA rrdata: %s\n",prog,uVar5);
      }
      else {
        iVar9 = iVar9 + 1;
      }
LAB_001008dc:
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
    bVar2 = 0 < iVar9;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



long hexdecode(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  undefined1 *ptr;
  ushort **ppuVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *__s;
  
  __s = (byte *)*param_1;
  sVar4 = strlen((char *)__s);
  ptr = (undefined1 *)app_malloc(sVar4 >> 1,"hexdecode");
  if (ptr == (undefined1 *)0x0) {
    lVar6 = -1;
  }
  else {
    bVar1 = *__s;
    if (bVar1 == 0) {
      lVar6 = 0;
    }
    else {
      ppuVar5 = __ctype_b_loc();
      uVar8 = (ulong)bVar1;
      bVar2 = false;
      uVar7 = 0;
      puVar9 = ptr;
      do {
        while (pbVar10 = __s, (*(byte *)((long)*ppuVar5 + uVar8 * 2 + 1) & 0x20) != 0) {
LAB_00100a6a:
          uVar8 = (ulong)pbVar10[1];
          __s = pbVar10 + 1;
          if (pbVar10[1] == 0) goto LAB_00100ab0;
        }
        uVar3 = OPENSSL_hexchar2int();
        if ((int)uVar3 < 0) {
          CRYPTO_free(ptr);
          return 0;
        }
        if (!bVar2) {
          uVar7 = (uVar3 | uVar7) << 4;
          bVar2 = true;
          goto LAB_00100a6a;
        }
        *puVar9 = (char)(uVar3 | uVar7);
        bVar2 = false;
        puVar9 = puVar9 + 1;
        bVar1 = pbVar10[1];
        uVar8 = (ulong)bVar1;
        uVar7 = 0;
        __s = pbVar10 + 1;
      } while (bVar1 != 0);
LAB_00100ab0:
      __s = pbVar10 + 1;
      lVar6 = (long)puVar9 - (long)ptr;
      if (bVar2) {
        CRYPTO_free(ptr);
        return 0;
      }
    }
    *param_1 = __s;
    *param_2 = ptr;
  }
  return lVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ldap_ExtendedResponse_parse(byte *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  byte *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_1;
  iVar2 = ASN1_get_object(&local_40,&local_38,&local_48,&local_44,param_2);
  if (((iVar2 == 0x20) && (local_48 == 0x10)) &&
     (local_38 <= (long)(param_1 + (param_2 - (long)local_40)))) {
    iVar2 = ASN1_get_object(&local_40,&local_38,&local_48,&local_44,local_38);
    if ((iVar2 == 0) && (local_48 == 2)) {
      if (local_38 <= (long)(param_1 + (param_2 - (long)local_40))) {
        local_40 = local_40 + local_38;
        iVar2 = ASN1_get_object(&local_40,&local_38,&local_48,&local_44,
                                (long)(param_1 + (param_2 - (long)local_40)));
        if (((iVar2 == 0x20) && (local_44 == 0x40)) && (local_48 == 0x18)) {
          iVar2 = ASN1_get_object(&local_40,&local_38,&local_48,&local_44,
                                  (long)(param_1 + (param_2 - (long)local_40)));
          if ((((iVar2 == 0) && (local_48 == 10)) && (local_38 != 0)) &&
             (local_38 <= (long)(param_1 + (param_2 - (long)local_40)))) {
            uVar3 = 0;
            pbVar5 = local_40;
            uVar4 = 0;
            if (0 < local_38) {
              do {
                bVar1 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                uVar3 = uVar3 << 8 | (uint)bVar1;
                uVar4 = uVar3;
              } while (pbVar5 != local_40 + local_38);
            }
            goto LAB_00100c81;
          }
          BIO_printf(_bio_err,"Not LDAPResult\n");
        }
        else {
          BIO_printf(_bio_err,"Not ExtendedResponse\n");
        }
        goto LAB_00100cb3;
      }
    }
    BIO_printf(_bio_err,"No MessageID\n");
  }
  else {
    BIO_printf(_bio_err,"Unexpected LDAP response\n");
  }
LAB_00100cb3:
  uVar4 = 0xffffffff;
LAB_00100c81:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 user_data_execute(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_2) {
  default:
    BIO_printf(_bio_err,"Enter text to send to the peer followed by <enter>\n");
    BIO_printf(_bio_err,"To issue a command insert {cmd} or {cmd:arg} anywhere in the text\n");
    BIO_printf(_bio_err,"Entering {{ will send { to the peer\n");
    BIO_printf(_bio_err,"The following commands are available\n");
    BIO_printf(_bio_err,"  {help}: Get this help text\n");
    BIO_printf(_bio_err,"  {quit}: Close the connection to the peer\n");
    BIO_printf(_bio_err,"  {reconnect}: Reconnect to the peer\n");
    iVar2 = SSL_is_quic(*param_1);
    if (iVar2 == 0) {
      iVar2 = SSL_version((SSL *)*param_1);
      if (iVar2 == 0x304) {
        BIO_printf(_bio_err,"  {keyup:req|noreq}: Send a Key Update message\n");
        BIO_printf(_bio_err,"                     Arguments:\n");
        BIO_printf(_bio_err,"                     req   = peer update requested (default)\n");
        BIO_printf(_bio_err,"                     noreq = peer update not requested\n");
      }
      else {
        BIO_printf(_bio_err,"  {reneg}: Attempt to renegotiate\n");
      }
    }
    else {
      BIO_printf(_bio_err,"  {fin}: Send FIN on the stream. No further writing is possible\n");
    }
    BIO_printf(_bio_err,"\n");
    return 3;
  case 1:
    BIO_printf(_bio_err,"DONE\n");
    goto LAB_00100d73;
  case 2:
    BIO_printf(_bio_err,"RECONNECTING\n");
    do_ssl_shutdown(*param_1);
    SSL_set_connect_state((SSL *)*param_1);
    iVar2 = SSL_get_fd((SSL *)*param_1);
    BIO_closesocket(iVar2);
    return param_2;
  case 3:
    BIO_printf(_bio_err,"RENEGOTIATING\n");
    iVar2 = SSL_renegotiate((SSL *)*param_1);
    break;
  case 4:
    iVar2 = OPENSSL_strcasecmp(param_3,&_LC47);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = OPENSSL_strcasecmp(param_3,"noreq");
      if (iVar2 != 0) {
        return 0;
      }
    }
    BIO_printf(_bio_err,"KEYUPDATE\n");
    iVar2 = SSL_key_update(*param_1,iVar2);
    break;
  case 5:
    iVar2 = SSL_stream_conclude(*param_1,0);
    if (iVar2 != 0) {
      *(undefined4 *)((long)param_1 + 0x2c) = 1;
      return 3;
    }
    goto LAB_00100d52;
  }
  if (iVar2 == 0) {
LAB_00100d52:
    BIO_printf(_bio_err,"ERROR\n");
    ERR_print_errors(_bio_err);
LAB_00100d73:
    uVar1 = 1;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_stuff(BIO *param_1,SSL *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SSL_CTX *pSVar5;
  SSL_CIPHER *pSVar6;
  COMP_METHOD *comp;
  COMP_METHOD *comp_00;
  SRTP_PROTECTION_PROFILE *pSVar7;
  SSL_SESSION *pSVar8;
  uchar *out;
  size_t llen;
  stack_st_X509 *psVar9;
  X509 *pXVar10;
  ulong uVar11;
  X509_NAME *pXVar12;
  char *pcVar13;
  ASN1_TIME *pAVar14;
  BIO *pBVar15;
  ulong uVar16;
  void *ptr;
  EVP_PKEY *pkey;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  char *pcVar20;
  uint uVar21;
  long in_FS_OFFSET;
  undefined8 uVar22;
  uchar **local_90;
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = SSL_version(param_2);
  pSVar5 = SSL_get_SSL_CTX(param_2);
  if (param_3 == 0) {
    print_verify_detail(param_2,param_1);
    iVar3 = SSL_session_reused(param_2);
    pcVar20 = "---\nReused, ";
    if (iVar3 == 0) {
      pcVar20 = "---\nNew, ";
    }
    BIO_printf(param_1,pcVar20);
    pSVar6 = SSL_get_current_cipher(param_2);
    SSL_CIPHER_get_name(pSVar6);
    pcVar20 = SSL_CIPHER_get_version(pSVar6);
    BIO_printf(param_1,"%s, Cipher is %s\n",pcVar20);
    pcVar20 = SSL_get_version(param_2);
    BIO_printf(param_1,"Protocol: %s\n",pcVar20);
    goto LAB_001010d2;
  }
  psVar9 = SSL_get_peer_cert_chain(param_2);
  if (psVar9 == (stack_st_X509 *)0x0) {
    BIO_printf(param_1,"---\n");
    pXVar10 = (X509 *)SSL_get0_peer_certificate(param_2);
    if (pXVar10 != (X509 *)0x0) {
      BIO_printf(param_1,"Server certificate\n");
LAB_00101663:
      PEM_write_bio_X509(param_1,pXVar10);
      goto LAB_0010166e;
    }
LAB_0010199a:
    pXVar10 = (X509 *)0x0;
    BIO_printf(param_1,"no peer certificate available\n");
  }
  else {
    BIO_printf(param_1,"---\nCertificate chain\n");
    for (uVar21 = 0; iVar3 = OPENSSL_sk_num(psVar9), (int)uVar21 < iVar3; uVar21 = uVar21 + 1) {
      pXVar10 = (X509 *)OPENSSL_sk_value(psVar9,uVar21);
      BIO_printf(param_1,"%2d s:",(ulong)uVar21);
      uVar11 = get_nameopt();
      pXVar12 = X509_get_subject_name(pXVar10);
      X509_NAME_print_ex(param_1,pXVar12,0,uVar11);
      BIO_puts(param_1,"\n");
      BIO_printf(param_1,"   i:");
      uVar11 = get_nameopt();
      pXVar12 = X509_get_issuer_name(pXVar10);
      X509_NAME_print_ex(param_1,pXVar12,0,uVar11);
      BIO_puts(param_1,"\n");
      lVar19 = X509_get0_pubkey(pXVar10);
      if (lVar19 != 0) {
        pcVar20 = (char *)EVP_PKEY_get0_type_name(lVar19);
        if (pcVar20 == (char *)0x0) {
          iVar3 = EVP_PKEY_get_base_id(lVar19);
          pcVar20 = OBJ_nid2ln(iVar3);
        }
        local_90 = &local_48;
        iVar3 = EVP_PKEY_get_id(lVar19);
        if ((iVar3 == 0x198) && (iVar3 = EVP_PKEY_get_group_name(lVar19,0,0,local_90), iVar3 != 0))
        {
          local_48 = local_48 + 1;
          ptr = CRYPTO_malloc((int)local_48,"apps/s_client.c",0xd2a);
          iVar3 = EVP_PKEY_get_group_name(lVar19,ptr,local_48,0);
          if (iVar3 == 0) {
            CRYPTO_free(ptr);
            goto LAB_00101559;
          }
          if (ptr == (void *)0x0) goto LAB_00101559;
          iVar3 = X509_get_signature_nid(pXVar10);
          pcVar13 = OBJ_nid2ln(iVar3);
          BIO_printf(param_1,"   a:PKEY: %s, (%s); sigalg: %s\n",pcVar20,ptr,pcVar13);
        }
        else {
LAB_00101559:
          iVar3 = X509_get_signature_nid(pXVar10);
          pcVar13 = OBJ_nid2ln(iVar3);
          uVar4 = EVP_PKEY_get_bits(lVar19);
          BIO_printf(param_1,"   a:PKEY: %s, %d (bit); sigalg: %s\n",pcVar20,(ulong)uVar4,pcVar13);
          ptr = (void *)0x0;
        }
        CRYPTO_free(ptr);
      }
      BIO_printf(param_1,"   v:NotBefore: ");
      pAVar14 = (ASN1_TIME *)X509_get0_notBefore(pXVar10);
      ASN1_TIME_print(param_1,pAVar14);
      BIO_printf(param_1,"; NotAfter: ");
      pAVar14 = (ASN1_TIME *)X509_get0_notAfter(pXVar10);
      ASN1_TIME_print(param_1,pAVar14);
      BIO_puts(param_1,"\n");
      if (c_showcerts != 0) {
        PEM_write_bio_X509(param_1,pXVar10);
      }
    }
    BIO_printf(param_1,"---\n");
    pXVar10 = (X509 *)SSL_get0_peer_certificate(param_2);
    if (pXVar10 == (X509 *)0x0) goto LAB_0010199a;
    BIO_printf(param_1,"Server certificate\n");
    if (c_showcerts == 0) goto LAB_00101663;
LAB_0010166e:
    dump_cert_text(param_1,pXVar10);
  }
  iVar3 = SSL_get_negotiated_client_cert_type(param_2);
  if (iVar3 == 2) {
    BIO_printf(param_1,"Client-to-server raw public key negotiated\n");
  }
  iVar3 = SSL_get_negotiated_server_cert_type(param_2);
  if (iVar3 == 2) {
    BIO_printf(param_1,"Server-to-client raw public key negotiated\n");
  }
  if (enable_server_rpk != 0) {
    pkey = (EVP_PKEY *)SSL_get0_peer_rpk(param_2);
    if (pkey == (EVP_PKEY *)0x0) {
      BIO_printf(param_1,"no peer rpk available\n");
    }
    else {
      BIO_printf(param_1,"Server raw public key\n");
      EVP_PKEY_print_public(param_1,pkey,2,(ASN1_PCTX *)0x0);
    }
  }
  print_ca_names(param_1,param_2);
  ssl_print_sigalgs(param_1,param_2);
  ssl_print_tmp_key(param_1,param_2);
  if (((pXVar10 == (X509 *)0x0) || (iVar3 = SSL_session_reused(param_2), iVar3 != 0)) ||
     (iVar3 = SSL_ct_is_enabled(param_2), iVar3 == 0)) {
LAB_001016df:
    pBVar15 = SSL_get_wbio(param_2);
    uVar11 = BIO_number_written(pBVar15);
    pBVar15 = SSL_get_rbio(param_2);
    uVar16 = BIO_number_read(pBVar15);
    BIO_printf(param_1,"---\nSSL handshake has read %ju bytes and written %ju bytes\n",uVar16,uVar11
              );
    print_verify_detail(param_2,param_1);
    iVar3 = SSL_session_reused(param_2);
    pcVar20 = "---\nReused, ";
    if (iVar3 == 0) goto LAB_00101737;
LAB_0010173e:
    BIO_printf(param_1,pcVar20);
    pSVar6 = SSL_get_current_cipher(param_2);
    SSL_CIPHER_get_name(pSVar6);
    pcVar20 = SSL_CIPHER_get_version(pSVar6);
    BIO_printf(param_1,"%s, Cipher is %s\n",pcVar20);
    pcVar20 = SSL_get_version(param_2);
    BIO_printf(param_1,"Protocol: %s\n",pcVar20);
    if (pXVar10 == (X509 *)0x0) goto LAB_001010d2;
  }
  else {
    lVar19 = SSL_get0_peer_scts(param_2);
    if (lVar19 == 0) {
      BIO_printf(param_1,"---\nSCTs present (%i)\n",0);
    }
    else {
      uVar21 = OPENSSL_sk_num(lVar19);
      BIO_printf(param_1,"---\nSCTs present (%i)\n",(ulong)uVar21);
      if ((int)uVar21 < 1) goto LAB_001016df;
      uVar22 = SSL_CTX_get0_ctlog_store(pSVar5);
      BIO_printf(param_1,"---\n");
      uVar4 = 0;
      do {
        uVar17 = OPENSSL_sk_value(lVar19,uVar4);
        uVar18 = SCT_validation_status_string(uVar17);
        BIO_printf(param_1,"SCT validation status: %s\n",uVar18);
        SCT_print(uVar17,param_1,0,uVar22);
        if ((int)uVar4 < (int)(uVar21 - 1)) {
          BIO_printf(param_1,"\n---\n");
        }
        uVar4 = uVar4 + 1;
      } while (uVar21 != uVar4);
      BIO_printf(param_1,"\n");
    }
    pBVar15 = SSL_get_wbio(param_2);
    uVar11 = BIO_number_written(pBVar15);
    pBVar15 = SSL_get_rbio(param_2);
    uVar16 = BIO_number_read(pBVar15);
    BIO_printf(param_1,"---\nSSL handshake has read %ju bytes and written %ju bytes\n",uVar16,uVar11
              );
    print_verify_detail(param_2,param_1);
    iVar3 = SSL_session_reused(param_2);
    if (iVar3 == 0) {
LAB_00101737:
      pcVar20 = "---\nNew, ";
      goto LAB_0010173e;
    }
    BIO_printf(param_1,"---\nReused, ");
    pSVar6 = SSL_get_current_cipher(param_2);
    SSL_CIPHER_get_name(pSVar6);
    pcVar20 = SSL_CIPHER_get_version(pSVar6);
    BIO_printf(param_1,"%s, Cipher is %s\n",pcVar20);
    pcVar20 = SSL_get_version(param_2);
    BIO_printf(param_1,"Protocol: %s\n",pcVar20);
  }
  uVar22 = X509_get0_pubkey(pXVar10);
  uVar21 = EVP_PKEY_get_bits(uVar22);
  BIO_printf(param_1,"Server public key is %d bit\n",(ulong)uVar21);
LAB_001010d2:
  local_90 = &local_48;
  ssl_print_secure_renegotiation_notes(param_1,param_2);
  comp = SSL_get_current_compression(param_2);
  comp_00 = SSL_get_current_expansion(param_2);
  pcVar20 = "NONE";
  if (comp != (COMP_METHOD *)0x0) {
    pcVar20 = SSL_COMP_get_name(comp);
  }
  BIO_printf(param_1,"Compression: %s\n",pcVar20);
  pcVar20 = "NONE";
  if (comp_00 != (COMP_METHOD *)0x0) {
    pcVar20 = SSL_COMP_get_name(comp_00);
  }
  BIO_printf(param_1,"Expansion: %s\n",pcVar20);
  if (_DAT_001080f0 != 0xffffffff) {
    SSL_get0_next_proto_negotiated(param_2,local_90,&local_4c);
    BIO_printf(param_1,"Next protocol: (%d) ",(ulong)_DAT_001080f0);
    BIO_write(param_1,local_48,local_4c);
    BIO_write(param_1,&_LC10,1);
  }
  SSL_get0_alpn_selected(param_2,local_90,&local_4c);
  if (local_4c == 0) {
    BIO_printf(param_1,"No ALPN negotiated\n");
  }
  else {
    BIO_printf(param_1,"ALPN protocol: ");
    BIO_write(param_1,local_48,local_4c);
    BIO_write(param_1,&_LC10,1);
  }
  pSVar7 = SSL_get_selected_srtp_profile(param_2);
  if (pSVar7 != (SRTP_PROTECTION_PROFILE *)0x0) {
    BIO_printf(param_1,"SRTP Extension negotiated, profile=%s\n",pSVar7->name);
  }
  if (iVar2 == 0x304) {
    iVar2 = SSL_get_early_data_status();
    if (iVar2 == 1) {
      BIO_printf(param_1,"Early data was rejected\n");
    }
    else if (iVar2 == 2) {
      BIO_printf(param_1,"Early data was accepted\n");
    }
    else if (iVar2 == 0) {
      BIO_printf(param_1,"Early data was not sent\n");
    }
    lVar19 = SSL_get_verify_result(param_2);
    X509_verify_cert_error_string(lVar19);
    BIO_printf(param_1,"Verify return code: %ld (%s)\n",lVar19);
  }
  else {
    pSVar8 = SSL_get_session(param_2);
    SSL_SESSION_print(param_1,pSVar8);
  }
  pSVar8 = SSL_get_session(param_2);
  if ((pSVar8 != (SSL_SESSION *)0x0) && (keymatexportlabel != (char *)0x0)) {
    BIO_printf(param_1,"Keying material exporter:\n");
    BIO_printf(param_1,"    Label: \'%s\'\n",keymatexportlabel);
    BIO_printf(param_1,"    Length: %i bytes\n",(ulong)keymatexportlen);
    out = (uchar *)app_malloc((long)(int)keymatexportlen,"export key");
    pcVar20 = keymatexportlabel;
    llen = strlen(keymatexportlabel);
    uVar22 = 0;
    iVar2 = SSL_export_keying_material
                      (param_2,out,(long)(int)keymatexportlen,pcVar20,llen,(uchar *)0x0,0,0);
    if (iVar2 < 1) {
      BIO_printf(param_1,"    Error\n",uVar22);
    }
    else {
      lVar19 = 0;
      BIO_printf(param_1,"    Keying material: ",uVar22);
      if (0 < (int)keymatexportlen) {
        do {
          pbVar1 = out + lVar19;
          lVar19 = lVar19 + 1;
          BIO_printf(param_1,"%02X",(ulong)*pbVar1);
        } while ((int)lVar19 < (int)keymatexportlen);
      }
      BIO_printf(param_1,"\n");
    }
    CRYPTO_free(out);
  }
  BIO_printf(param_1,"---\n");
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  BIO_ctrl(param_1,0xb,0,(void *)0x0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_servername_cb(SSL *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = SSL_get_servername(param_1,0);
  iVar1 = SSL_get_servername_type(param_1);
  if (iVar1 != -1) {
    iVar1 = SSL_session_reused(param_1);
    *(uint *)(param_3 + 8) = (uint)(iVar1 == 0 && pcVar2 != (char *)0x0);
    return 0;
  }
  BIO_printf(_bio_err,"Can\'t use SSL_get_servername\n");
  return 0;
}



undefined8 serverinfo_cli_parse_cb(undefined8 param_1,uint param_2,void *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 auStack_10020 [65536];
  
  puVar1 = &stack0xffffffffffffffe0;
  do {
    puVar2 = puVar1;
    *(undefined8 *)(puVar2 + -0x1000) = *(undefined8 *)(puVar2 + -0x1000);
    puVar1 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != auStack_10020);
  *(undefined8 *)(puVar2 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(uint *)(puVar2 + -0x1018) =
       ((((uint)param_4 & 0xff) << 8 | (uint)(byte)(param_4 >> 8)) << 8 | param_2 & 0xff) << 8 |
       param_2 >> 8 & 0xff;
  *(undefined8 *)(puVar2 + -0x1090) = 0x101d29;
  memcpy(puVar2 + -0x1014,param_3,param_4 & 0xffff);
  *(undefined8 *)(puVar2 + -0x1090) = 0x101d41;
  BIO_snprintf(puVar2 + -0x1088,100,"SERVERINFO FOR EXTENSION %d",(ulong)param_2);
  *(undefined8 *)(puVar2 + -0x1090) = 0x101d5e;
  PEM_write_bio(bio_c_out,puVar2 + -0x1088,"",puVar2 + -0x1018,(param_4 & 0xffff) + 4);
  if (*(long *)(puVar2 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -0x1090) = &UNK_00101d89;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong user_data_process(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  char *__s;
  
  pcVar10 = (char *)param_1[3];
  pcVar6 = (char *)(param_1[4] + param_1[1]);
  if (pcVar10 == (char *)0x0) {
    *param_2 = 0;
    *param_3 = 0;
LAB_00101e9f:
    uVar5 = 3;
  }
  else {
    pcVar9 = pcVar10;
    if (*(int *)(param_1 + 5) != 1) {
      if (*(int *)(param_1 + 5) == 2) {
        pcVar6[(long)pcVar10] = '\0';
        pcVar9 = pcVar6;
        __s = pcVar6;
        while( true ) {
          pcVar8 = strchr(pcVar9,0x7b);
          if (__s != pcVar8) break;
          if (__s[1] != '{') {
            pcVar9 = strchr(__s,0x7d);
            if (pcVar9 == (char *)0x0) {
              __s[(long)(pcVar6 + ((long)pcVar10 - (long)__s) + -1)] = '\0';
              BIO_printf(_bio_err,"ERROR PROCESSING COMMAND. REST OF LINE IGNORED: %s\n",__s);
              goto LAB_00101f30;
            }
            *pcVar9 = '\0';
            pcVar10 = strchr(pcVar8,0x3a);
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = '\0';
              pcVar10 = pcVar10 + 1;
            }
            pcVar8 = pcVar8 + 1;
            iVar3 = OPENSSL_strcasecmp(pcVar8,&_LC96);
            if (iVar3 != 0) {
              iVar3 = 1;
              iVar4 = OPENSSL_strcasecmp(pcVar8,&_LC97);
              if (iVar4 != 0) {
                iVar3 = 2;
                iVar4 = OPENSSL_strcasecmp(pcVar8,"reconnect");
                if (iVar4 != 0) {
                  iVar3 = SSL_is_quic(*param_1);
                  if ((iVar3 == 0) || (iVar3 = OPENSSL_strcasecmp(pcVar8,&_LC99), iVar3 != 0)) {
                    iVar3 = -1;
                  }
                  else {
                    iVar3 = 5;
                  }
                }
              }
            }
            iVar4 = SSL_version((SSL *)*param_1);
            if (iVar4 == 0x304) {
              iVar4 = OPENSSL_strcasecmp(pcVar8,"keyup");
              if (iVar4 != 0) goto LAB_00102160;
              iVar3 = 4;
              if (pcVar10 == (char *)0x0) {
                pcVar10 = "req";
              }
LAB_001020d2:
              uVar5 = user_data_execute(param_1,iVar3,pcVar10);
              if (uVar5 == 0) {
                BIO_printf(_bio_err,"BAD ARGUMENT (COMMAND IGNORED): %s\n",pcVar10);
                goto LAB_00102182;
              }
            }
            else {
              iVar4 = OPENSSL_strcasecmp(pcVar8,"reneg");
              if (iVar4 == 0) {
                iVar3 = 3;
                goto LAB_001020d2;
              }
LAB_00102160:
              if (iVar3 != -1) goto LAB_001020d2;
              BIO_printf(_bio_err,"UNRECOGNISED COMMAND (IGNORED): %s\n",pcVar8);
LAB_00102182:
              uVar5 = 3;
            }
            lVar11 = (param_1[4] + param_1[3]) - (long)(pcVar9 + (1 - param_1[1]));
            param_1[4] = pcVar9 + (1 - param_1[1]);
            param_1[3] = lVar11;
            if (((pcVar8 == (char *)(param_1[1] + 1)) && (lVar11 == 1)) && (pcVar9[1] == '\n')) {
              *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
            }
            *param_3 = 0;
            *param_2 = 0;
            goto LAB_00101e08;
          }
          lVar11 = param_1[4] + _UNK_0010ddb8;
          pcVar9 = __s + 2;
          __s = __s + 1;
          param_1[3] = param_1[3] + __LC94;
          param_1[4] = lVar11;
        }
        pcVar9 = pcVar8 + -(long)__s;
        if (pcVar8 == (char *)0x0) {
          pcVar9 = pcVar6 + ((long)pcVar10 - (long)__s);
        }
      }
      goto LAB_00101dd0;
    }
    cVar1 = *pcVar6;
    uVar5 = 1;
    if (cVar1 == 'Q') {
      *param_3 = 0;
      *param_2 = 0;
      *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
      BIO_printf(_bio_err,"DONE\n");
      goto LAB_00101e08;
    }
    if (cVar1 < 'R') {
      if (cVar1 == 'C') {
        *param_3 = 0;
        uVar5 = 2;
        *param_2 = 0;
        *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
        BIO_printf(_bio_err,"RECONNECTING\n");
        do_ssl_shutdown(*param_1);
        SSL_set_connect_state((SSL *)*param_1);
        iVar3 = SSL_get_fd((SSL *)*param_1);
        BIO_closesocket(iVar3);
        goto LAB_00101e08;
      }
      if (cVar1 == 'K') {
LAB_00101e43:
        *param_3 = 0;
        *param_2 = 0;
        pcVar10 = "noreq";
        *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
        if (*pcVar6 == 'K') {
          pcVar10 = "req";
        }
        uVar7 = user_data_execute(param_1,4,pcVar10);
        return uVar7;
      }
LAB_00101dd0:
      if (*(int *)((long)param_1 + 0x2c) != 0) {
LAB_00101f30:
        *param_3 = 0;
        *param_2 = 0;
        *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
        goto LAB_00101e9f;
      }
      *param_2 = pcVar9;
      lVar11 = param_1[4];
      *param_3 = lVar11;
      lVar2 = param_1[3];
      param_1[3] = lVar2 - (long)pcVar9;
      pcVar10 = pcVar9 + lVar11;
      if (lVar2 - (long)pcVar9 == 0) {
        pcVar10 = (char *)0x0;
      }
      param_1[4] = pcVar10;
    }
    else {
      if (cVar1 != 'R') {
        if (cVar1 == 'k') goto LAB_00101e43;
        goto LAB_00101dd0;
      }
      *param_3 = 0;
      *param_2 = 0;
      *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
      BIO_printf(_bio_err,"RENEGOTIATING\n");
      iVar3 = SSL_renegotiate((SSL *)*param_1);
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"ERROR\n");
        ERR_print_errors(_bio_err);
        goto LAB_00101e08;
      }
    }
    uVar5 = 4;
  }
LAB_00101e08:
  return (ulong)uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint s_client_main(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char *pcVar24;
  byte bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  X509_VERIFY_PARAM *vpm;
  undefined8 uVar34;
  undefined8 *puVar35;
  EVP_PKEY *pkey;
  X509_CRL *a;
  undefined8 uVar36;
  stack_st_X509_NAME *stackCAs;
  BIO *pBVar37;
  void *ptr;
  byte *pbVar38;
  ushort **ppuVar39;
  byte *pbVar40;
  long lVar41;
  long lVar42;
  SSL *to;
  SSL_SESSION *pSVar43;
  ulong uVar44;
  int *piVar45;
  uint *puVar46;
  BIO *pBVar47;
  CONF *conf;
  ASN1_TYPE *a_00;
  BIO_METHOD *pBVar48;
  size_t sVar49;
  ulong uVar50;
  uint uVar51;
  long lVar52;
  int iVar53;
  long lVar54;
  int iVar55;
  uint uVar56;
  char *pcVar57;
  fd_set *pfVar58;
  int iVar59;
  uint uVar60;
  int iVar61;
  uint uVar62;
  long in_FS_OFFSET;
  byte bVar63;
  SSL_CTX *local_550;
  long local_548;
  X509 *local_540;
  byte *local_530;
  byte *local_528;
  char *local_520;
  long local_518;
  long local_510;
  long local_508;
  char *local_500;
  BIO *local_4f8;
  char *local_4f0;
  char *local_4e0;
  char *local_4d8;
  char *local_4d0;
  uint local_4c8;
  uint local_4a8;
  int local_4a4;
  char *local_498;
  int local_48c;
  long local_488;
  char *local_480;
  uint local_478;
  int local_474;
  byte *local_470;
  int local_468;
  timeval *local_460;
  int local_458;
  int local_454;
  ENGINE *local_450;
  long local_448;
  byte *local_440;
  uint local_438;
  int local_434;
  uint local_430;
  uint local_42c;
  undefined8 local_420;
  long local_418;
  long local_410;
  long local_408;
  long local_400;
  long local_3f8;
  uint local_3f0;
  uint local_3ec;
  char *local_3e8;
  long local_3e0;
  long local_3d8;
  char *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  char *local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  int local_37c;
  undefined8 local_378;
  int local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_320;
  undefined4 local_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  undefined8 local_2e0;
  long local_2d8;
  long local_2d0;
  char *local_2c8;
  char *local_2c0;
  void *local_2b8;
  void *local_2b0;
  void *local_2a8;
  long local_2a0;
  long local_298;
  void *local_290;
  undefined8 local_288;
  void *local_280;
  timeval local_278;
  BIO *local_268;
  undefined4 local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  SSL *local_238;
  long local_230;
  ulong local_228;
  ulong uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  fd_set local_208;
  fd_set local_188;
  ushort auStack_108 [100];
  long local_40;
  
  bVar63 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2e0 = 0;
  local_2d8 = 0;
  local_550 = (SSL_CTX *)TLS_client_method();
  pfVar58 = &local_208;
  for (lVar52 = 0x10; lVar52 != 0; lVar52 = lVar52 + -1) {
    pfVar58->fds_bits[0] = 0;
    pfVar58 = (fd_set *)((long)pfVar58 + ((ulong)bVar63 * -2 + 1) * 8);
  }
  local_258 = (undefined1  [16])0x0;
  pfVar58 = &local_188;
  for (lVar52 = 0x10; lVar52 != 0; lVar52 = lVar52 + -1) {
    pfVar58->fds_bits[0] = 0;
    pfVar58 = (fd_set *)((long)pfVar58 + ((ulong)bVar63 * -2 + 1) * 8);
  }
  local_248 = __LC109;
  uStack_240 = _UNK_0010ddc8;
  local_2d0 = 0;
  local_2c8 = (char *)0x0;
  local_2c0 = (char *)0x0;
  local_2b8 = (void *)0x0;
  local_2b0 = (void *)0x0;
  local_2a8 = (void *)0x0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2f0 = 0xffffffff;
  local_2ec = 0;
  local_2e8 = 0;
  local_268 = (BIO *)0x0;
  local_260 = 0;
  local_290 = (void *)0x0;
  c_quiet = 0;
  c_debug = 0;
  c_showcerts = 0;
  local_2c0 = CRYPTO_strdup("4433","apps/s_client.c",0x3d2);
  vpm = X509_VERIFY_PARAM_new();
  lVar52 = SSL_CONF_CTX_new();
  if ((vpm != (X509_VERIFY_PARAM *)0x0 && lVar52 != 0) && (local_2c0 != (char *)0x0)) {
    iVar59 = 0;
    local_510 = app_malloc(0x4000,&_LC112);
    local_528 = (byte *)app_malloc(0x4000,&_LC113);
    local_530 = (byte *)app_malloc(0x4000,&_LC114);
    SSL_CONF_CTX_set_flags(lVar52,5);
    iVar53 = 0;
    iVar55 = 2;
    prog = (byte *)opt_init(param_1,param_2,s_client_options);
    bVar25 = 0;
    local_500 = (char *)0x0;
    local_520 = (char *)0x0;
    local_478 = 0;
    bVar8 = false;
    bVar13 = false;
    bVar12 = false;
    local_470 = (byte *)0x0;
    local_4c8 = 0;
    local_4a8 = 0;
    local_3d0 = (char *)0x0;
    local_320 = 0;
    local_4f8 = (BIO *)0x0;
    bVar18 = false;
    bVar17 = false;
    bVar19 = false;
    bVar22 = false;
    local_474 = 0;
    local_3ec = 0;
    iVar28 = 0;
    local_438 = 0;
    local_42c = 0;
    local_430 = 0;
    bVar26 = false;
    iVar30 = 0;
    bVar11 = false;
    local_420 = 0;
    local_3b8 = (char *)0x0;
    local_3ac = 0;
    local_398 = 0;
    local_418 = 0;
    local_458 = 0;
    local_3d8 = 0;
    local_3e0 = 0;
    bVar9 = false;
    local_498 = (char *)0x0;
    local_4f0 = (char *)0x0;
    local_450 = (ENGINE *)0x0;
    local_410 = 0;
    bVar16 = false;
    bVar14 = false;
    local_37c = 0;
    local_32c = 0;
    local_4a4 = 1;
    local_48c = 0;
    local_4d8._0_4_ = 1;
    bVar10 = false;
    local_3f0 = 0;
    local_370 = 0;
    iVar31 = 0;
    local_434 = 0;
    local_468 = 0;
    bVar20 = false;
    bVar23 = false;
    bVar21 = false;
    local_3c4 = 0;
    local_330 = 0;
    local_3c8 = 0;
    local_480 = (char *)0x0;
    local_548 = 0;
    local_440 = (byte *)0x0;
    local_3e8 = (char *)0x0;
    local_390 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_338 = 0;
    local_340 = 0;
    local_378 = 0;
    local_348 = 0;
    local_408 = 0;
    local_3f8 = 0;
    local_540 = (X509 *)0x0;
    local_350 = 0;
    local_400 = 0;
    local_448 = 0;
    local_358 = 0;
    local_360 = 0;
    local_368 = 0;
    bVar15 = false;
    local_518 = 0;
    local_488 = 0;
    local_508 = 0;
    uVar62 = 0;
switchD_0010295b_caseD_0:
    uVar1 = uVar62;
    iVar27 = opt_next();
    if (iVar27 == 0) {
      iVar53 = opt_num_rest();
      if (iVar53 == 1) {
        if (local_520 != (char *)0x0) {
          BIO_printf(_bio_err,"%s: cannot provide both -connect option and target parameter\n",prog)
          ;
          goto switchD_0010295b_caseD_ffffffff;
        }
        puVar35 = (undefined8 *)opt_rest();
        local_520 = (char *)*puVar35;
        CRYPTO_free((void *)0x0);
        if (local_520 != (char *)0x0) {
          local_520 = CRYPTO_strdup(local_520,"apps/s_client.c",0x32a);
        }
      }
      else {
        iVar53 = opt_check_rest_arg(0);
        if (iVar53 == 0) goto switchD_0010295b_caseD_ffffffff;
      }
      iVar53 = app_RAND_load();
      pcVar24 = local_2c0;
      pcVar57 = local_2c8;
      if (iVar53 == 0) goto LAB_00102ce0;
      uVar7 = 0;
      if (!bVar22) {
        uVar7 = local_4d8._0_4_;
      }
      if (1 < iVar28) {
        BIO_printf(_bio_err,"%s: Can\'t use both -4 and -6\n",prog);
        goto switchD_0010295b_caseD_ffffffff;
      }
      if (bVar9) {
        if (local_498 != (char *)0x0) {
          BIO_printf(_bio_err,"%s: Can\'t use -servername and -noservername together\n",prog);
          goto switchD_0010295b_caseD_ffffffff;
        }
        if (local_488 != 0) {
          BIO_printf(_bio_err,"%s: Can\'t use -dane_tlsa_domain and -noservername together\n",prog);
          goto switchD_0010295b_caseD_ffffffff;
        }
      }
      if ((uVar1 == 0x304) && (local_418 != 0)) {
        BIO_printf(_bio_err,"Cannot supply -nextprotoneg with TLSv1.3\n");
        goto switchD_0010295b_caseD_ffffffff;
      }
      if (local_520 != (char *)0x0) {
        iVar28 = BIO_parse_hostserv(local_520,&local_2c8,&local_2c0);
        if (local_2c8 != pcVar57) {
          CRYPTO_free(pcVar57);
        }
        if (local_2c0 != pcVar24) {
          CRYPTO_free(pcVar24);
        }
        pcVar57 = "%s: -connect argument or target parameter malformed or ambiguous\n";
        pbVar38 = prog;
        if (iVar28 == 0) goto LAB_00102d81;
      }
      pcVar24 = local_2c0;
      pcVar57 = local_2c8;
      if (local_448 != 0) {
        if ((local_2c0 != (char *)0x0) && (local_2c8 != (char *)0x0)) {
          if ((local_498 != (char *)0x0) || (bVar9)) {
            local_4d0 = (char *)0x0;
          }
          else {
            local_4d0 = CRYPTO_strdup(local_2c8,"apps/s_client.c",0x675);
            local_498 = local_4d0;
            if (local_4d0 == (char *)0x0) {
              BIO_printf(_bio_err,"%s: out of memory\n",prog);
              goto LAB_00102ce0;
            }
          }
          local_4e0 = CRYPTO_strdup(local_2c8,"apps/s_client.c",0x67d);
          local_4d8 = CRYPTO_strdup(local_2c0,"apps/s_client.c",0x67e);
          if ((local_4e0 == (char *)0x0) || (local_4d8 == (char *)0x0)) {
            BIO_printf(_bio_err,"%s: out of memory\n",prog);
          }
          else {
            iVar28 = BIO_parse_hostserv(local_448,&local_2c8,&local_2c0);
            if (local_2c8 != pcVar57) {
              CRYPTO_free(pcVar57);
            }
            if (local_2c0 != pcVar24) {
              CRYPTO_free(pcVar24);
            }
            if (iVar28 != 0) goto LAB_001030e4;
            BIO_printf(_bio_err,"%s: -proxy argument malformed or ambiguous\n",prog);
          }
LAB_001048cf:
          local_4c8 = 1;
          pkey = (EVP_PKEY *)0x0;
          local_548 = 0;
          local_540 = (X509 *)0x0;
          local_550 = (SSL_CTX *)0x0;
          goto LAB_00102a5f;
        }
        BIO_printf(_bio_err,"%s: -proxy requires use of -connect or target parameter\n",prog);
        goto switchD_0010295b_caseD_ffffffff;
      }
      local_4d0 = (char *)0x0;
      local_4d8 = (char *)0x0;
      local_4e0 = (char *)0x0;
LAB_001030e4:
      if ((local_500 != (char *)0x0) &&
         (iVar28 = BIO_parse_hostserv(local_500,&local_2b8,&local_2b0), iVar28 == 0)) {
        BIO_printf(_bio_err,"%s: -bind argument parameter malformed or ambiguous\n",prog);
        goto LAB_001048cf;
      }
      if ((local_48c == 1) && (local_4a4 != 1)) {
        BIO_printf(_bio_err,"Can\'t use unix sockets and datagrams together\n");
        goto LAB_001048cf;
      }
      _DAT_001080f0 = 0xffffffff;
      if (local_418 == 0) {
        next_proto = (void *)0x0;
      }
      else {
        next_proto = (void *)next_protos_parse(&DAT_001080e8);
        if (next_proto == (void *)0x0) {
          BIO_printf(_bio_err,"Error parsing -nextprotoneg argument\n");
          goto LAB_001048cf;
        }
      }
      iVar28 = app_passwd(local_338,0,&local_2a8);
      if (iVar28 == 0) {
        BIO_printf(_bio_err,"Error getting private key password\n");
        goto LAB_001048cf;
      }
      iVar28 = app_passwd(local_350,0,&local_2d0);
      if (iVar28 == 0) {
        BIO_printf(_bio_err,"Error getting proxy password\n");
        goto LAB_001048cf;
      }
      if ((local_2d0 != 0) && (local_400 == 0)) {
        BIO_printf(_bio_err,"Error: Must specify proxy_user with proxy_pass\n");
        goto LAB_001048cf;
      }
      if (local_3f8 == 0) {
        pkey = (EVP_PKEY *)0x0;
        if (local_540 != (X509 *)0x0) {
          pkey = (EVP_PKEY *)load_key(local_540,local_2f4,0,local_2a8,local_4f0);
          if (pkey != (EVP_PKEY *)0x0) goto LAB_00104999;
LAB_00104a2e:
          local_4c8 = 1;
          local_548 = 0;
          local_540 = (X509 *)0x0;
          local_550 = (SSL_CTX *)0x0;
          goto LAB_00102a5f;
        }
      }
      else {
        param_5 = local_4f0;
        pkey = (EVP_PKEY *)load_key(local_3f8,local_2f4,0);
        if (pkey == (EVP_PKEY *)0x0) goto LAB_001048cf;
        if (local_540 != (X509 *)0x0) {
LAB_00104999:
          param_5 = "client certificate";
          local_540 = (X509 *)load_cert_pass(local_540,local_2f8,1);
          if (local_540 == (X509 *)0x0) goto LAB_00104a2e;
        }
      }
      if (local_408 != 0) {
        param_5 = "client certificate chain";
        iVar28 = load_certs(local_408,0,&local_2e0);
        if (iVar28 == 0) {
          local_4c8 = 1;
          local_548 = 0;
          local_550 = (SSL_CTX *)0x0;
          goto LAB_00102a5f;
        }
      }
      if (local_548 != 0) {
        a = (X509_CRL *)load_crl(local_548,local_2e8,0);
        if (a == (X509_CRL *)0x0) {
          local_548 = 0;
          local_550 = (SSL_CTX *)0x0;
          goto LAB_00104aa9;
        }
        local_548 = OPENSSL_sk_new_null();
        if ((local_548 == 0) || (iVar28 = OPENSSL_sk_push(local_548,a), iVar28 == 0)) {
          BIO_puts(_bio_err,"Error adding CRL\n");
          ERR_print_errors(_bio_err);
          X509_CRL_free(a);
          local_550 = (SSL_CTX *)0x0;
          local_4c8 = 1;
          goto LAB_00102a5f;
        }
      }
      iVar28 = load_excert(&local_2d8);
      if (iVar28 == 0) {
        local_4c8 = 1;
        local_550 = (SSL_CTX *)0x0;
        goto LAB_00102a5f;
      }
      if (bio_c_out == (BIO *)0x0) {
        if ((c_quiet == 0) || (c_debug != 0)) {
          bio_c_out = (BIO *)dup_bio_out(0x8001);
        }
        else {
          pBVar48 = BIO_s_null();
          bio_c_out = BIO_new(pBVar48);
          if (((local_474 != 0) && (local_4f8 == (BIO *)0x0)) &&
             (local_4f8 = (BIO *)dup_bio_out(0x8001), local_4f8 == (BIO *)0x0)) {
            BIO_printf(_bio_err,"Out of memory\n");
            local_4c8 = 1;
            local_550 = (SSL_CTX *)0x0;
            goto LAB_00102a5f;
          }
        }
        if (bio_c_out == (BIO *)0x0) {
          BIO_printf(_bio_err,"Unable to create BIO\n");
          local_4c8 = 1;
          local_550 = (SSL_CTX *)0x0;
          goto LAB_00102a5f;
        }
      }
      iVar28 = app_passwd(local_398,0,local_258);
      if (iVar28 == 0) {
        BIO_printf(_bio_err,"Error getting password\n");
        local_4c8 = 1;
        local_550 = (SSL_CTX *)0x0;
        goto LAB_00102a5f;
      }
      uVar34 = app_get0_propq();
      uVar36 = app_get0_libctx();
      local_550 = (SSL_CTX *)SSL_CTX_new_ex(uVar36,uVar34,local_550);
      if (local_550 == (SSL_CTX *)0x0) goto LAB_00104a9d;
      SSL_CTX_ctrl(local_550,0x4e,4,(void *)0x0);
      if (local_468 != 0) {
        ssl_ctx_security_debug(local_550,local_468);
      }
      iVar28 = config_ctx(lVar52,local_508,local_550);
      if (iVar28 == 0) goto LAB_00104aa9;
      if ((local_3d8 != 0) && (iVar28 = SSL_CTX_config(local_550), iVar28 == 0)) {
        BIO_printf(_bio_err,"Error using configuration \"%s\"\n",local_3d8);
        goto LAB_00104a9d;
      }
      if (((uVar1 != 0) &&
          (lVar54 = SSL_CTX_ctrl(local_550,0x7b,(long)(int)uVar1,(void *)0x0), lVar54 == 0)) ||
         ((iVar30 != 0 &&
          (lVar54 = SSL_CTX_ctrl(local_550,0x7c,(long)iVar30,(void *)0x0), lVar54 == 0))))
      goto LAB_00104aa9;
      if (bVar8) {
        SSL_CTX_set_options(local_550,0x80);
      }
      if ((local_370 != 0) && (iVar28 = SSL_CTX_set1_param(local_550,vpm), iVar28 == 0)) {
        BIO_printf(_bio_err,"Error setting verify params\n");
        ERR_print_errors(_bio_err);
        goto LAB_00104aa9;
      }
      if (bVar26) {
        SSL_CTX_ctrl(local_550,0x21,0x100,(void *)0x0);
      }
      if ((local_430 != 0) &&
         (lVar54 = SSL_CTX_ctrl(local_550,0x34,(ulong)local_430,(void *)0x0), lVar54 == 0)) {
        BIO_printf(_bio_err,"%s: Max send fragment size %u is out of permitted range\n",prog,
                   (ulong)local_430);
        goto LAB_00104aa9;
      }
      if ((local_42c != 0) &&
         (lVar54 = SSL_CTX_ctrl(local_550,0x7d,(ulong)local_42c,(void *)0x0), lVar54 == 0)) {
        BIO_printf(_bio_err,"%s: Split send fragment size %u is out of permitted range\n",prog,
                   (ulong)local_42c);
        goto LAB_00104aa9;
      }
      if ((local_438 != 0) &&
         (lVar54 = SSL_CTX_ctrl(local_550,0x7e,(ulong)local_438,(void *)0x0), lVar54 == 0)) {
        BIO_printf(_bio_err,"%s: Max pipelines %u is out of permitted range\n",prog,(ulong)local_438
                  );
        goto LAB_00104aa9;
      }
      if (0 < local_37c) {
        SSL_CTX_set_default_read_buffer_len(local_550,(long)local_37c);
      }
      if (bVar25 != 0) {
        iVar28 = SSL_CTX_set_tlsext_max_fragment_length(local_550,(uint)bVar25);
        if (iVar28 == 0) {
          BIO_printf(_bio_err,"%s: Max Fragment Length code %u is out of permitted values\n",prog,
                     (ulong)(uint)bVar25);
          goto LAB_00104aa9;
        }
      }
      iVar28 = ssl_load_stores(local_550,local_3a0,local_3a8,local_390,local_348,local_378,local_340
                               ,local_548,local_32c,param_5);
      if (iVar28 == 0) {
        BIO_printf(_bio_err,"Error loading store locations\n");
        ERR_print_errors(_bio_err);
        goto LAB_00104aa9;
      }
      if (local_3e8 != (char *)0x0) {
        stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
        if ((stackCAs != (stack_st_X509_NAME *)0x0) &&
           (iVar28 = SSL_add_file_cert_subjects_to_stack(stackCAs,local_3e8), iVar28 != 0)) {
          SSL_CTX_set0_CA_list(local_550,stackCAs);
          goto LAB_001035d8;
        }
        OPENSSL_sk_pop_free(stackCAs,&X509_NAME_free);
        pcVar57 = "Error loading CA names\n";
LAB_00104b89:
        BIO_printf(_bio_err,pcVar57);
        goto LAB_00104a9d;
      }
LAB_001035d8:
      if (local_450 != (ENGINE *)0x0) {
        iVar28 = SSL_CTX_set_client_cert_engine(local_550,local_450);
        if (iVar28 == 0) {
          BIO_puts(_bio_err,"Error setting client auth engine\n");
          ERR_print_errors(_bio_err);
          release_engine(local_450);
          goto LAB_00104aa9;
        }
        release_engine(local_450);
      }
      if (_psk_key == (byte *)0x0) {
        if (local_470 != (byte *)0x0) goto LAB_0010366f;
LAB_00104b3e:
        if (psksess != (SSL_SESSION *)0x0) goto LAB_001036da;
      }
      else {
        if (c_debug != 0) {
          BIO_printf(bio_c_out,"PSK key given, setting client callback\n");
        }
        SSL_CTX_set_psk_client_callback(local_550,psk_client_cb);
        if (local_470 == (byte *)0x0) {
          if (_psk_key == (byte *)0x0) goto LAB_00104b3e;
        }
        else {
LAB_0010366f:
          pBVar37 = BIO_new_file((char *)local_470,"r");
          if (pBVar37 == (BIO *)0x0) {
            pcVar57 = "Can\'t open PSK session file %s\n";
            goto LAB_00104bab;
          }
          local_390 = 0;
          psksess = PEM_read_bio_SSL_SESSION
                              (pBVar37,(SSL_SESSION **)0x0,(undefined1 *)0x0,(void *)0x0);
          BIO_free(pBVar37);
          if (psksess == (SSL_SESSION *)0x0) {
            pcVar57 = "Can\'t read PSK session file %s\n";
            goto LAB_00104bab;
          }
        }
LAB_001036da:
        SSL_CTX_set_psk_use_session_callback(local_550,psk_use_session_cb);
      }
      if ((local_3b8 != (char *)0x0) &&
         (iVar28 = SSL_CTX_set_tlsext_use_srtp(local_550,local_3b8), iVar28 != 0)) {
        pcVar57 = "Error setting SRTP profile\n";
        goto LAB_00104b89;
      }
      if (local_2d8 != 0) {
        ssl_ctx_set_excert(local_550);
      }
      if (next_proto != (void *)0x0) {
        SSL_CTX_set_next_proto_select_cb(local_550,next_proto_cb,&next_proto);
      }
      if (local_3e0 != 0) {
        ptr = (void *)next_protos_parse(&local_238);
        if (ptr == (void *)0x0) {
          BIO_printf(_bio_err,"Error parsing -alpn argument\n");
          goto LAB_00104aa9;
        }
        iVar28 = SSL_CTX_set_alpn_protos(local_550,ptr,(ulong)local_238 & 0xffffffff);
        if (iVar28 != 0) {
          BIO_printf(_bio_err,"Error setting ALPN\n");
          goto LAB_00104aa9;
        }
        CRYPTO_free(ptr);
      }
      for (lVar54 = 0; (int)lVar54 < local_458; lVar54 = lVar54 + 1) {
        uVar5 = auStack_108[lVar54];
        uVar34 = 0;
        iVar28 = SSL_CTX_add_client_custom_ext
                           (local_550,uVar5,0,0,0,serverinfo_cli_parse_cb,0,local_390);
        if (iVar28 == 0) {
          BIO_printf(_bio_err,"Warning: Unable to add custom extension %u, skipping\n",(ulong)uVar5)
          ;
        }
        local_390 = uVar34;
      }
      if (bVar10) {
        SSL_CTX_set_info_callback(local_550,(cb *)&apps_ssl_info_callback);
      }
      if (bVar11) {
        iVar28 = SSL_CTX_enable_ct(local_550,0);
        if ((iVar28 != 0) && (iVar28 = ctx_set_ctlog_list_file(local_550,local_420), iVar28 != 0))
        goto LAB_00104ca4;
LAB_00104a9d:
        ERR_print_errors(_bio_err);
LAB_00104aa9:
        local_4c8 = 1;
        goto LAB_00102a5f;
      }
      iVar28 = ctx_set_ctlog_list_file(local_550,local_420);
      if (iVar28 == 0) {
        ERR_clear_error();
      }
LAB_00104ca4:
      SSL_CTX_set_verify(local_550,iVar31,(callback *)&verify_callback);
      iVar28 = ctx_set_verify_locations
                         (local_550,local_360,local_330,local_368,local_3c8,local_358,local_3c4,
                          "Warning: Unable to add custom extension %u, skipping\n");
      if (iVar28 == 0) goto LAB_00104a9d;
      ssl_ctx_add_crls(local_550,local_548,local_32c);
      iVar28 = set_cert_key_stuff(local_550,local_540,pkey);
      if (iVar28 == 0) goto LAB_00104aa9;
      if (!bVar9) {
        local_268 = _bio_err;
        SSL_CTX_callback_ctrl(local_550,0x35,ssl_servername_cb);
        SSL_CTX_ctrl(local_550,0x36,0,&local_268);
      }
      if ((local_258._8_8_ != 0) &&
         (iVar28 = set_up_srp_arg(local_550,local_258,local_3ac), iVar28 == 0)) goto LAB_00104aa9;
      if ((local_488 != 0) && (iVar28 = SSL_CTX_dane_enable(local_550), iVar28 < 1)) {
        pcVar57 = "%s: Error enabling DANE TLSA authentication.\n";
        local_470 = prog;
LAB_00104bab:
        BIO_printf(_bio_err,pcVar57,local_470);
        goto LAB_00104a9d;
      }
      SSL_CTX_ctrl(local_550,0x2c,0x201,(void *)0x0);
      SSL_CTX_sess_set_new_cb(local_550,new_session_cb);
      iVar28 = set_keylog_file(local_550,local_320);
      if ((iVar28 != 0) || (to = SSL_new(local_550), to == (SSL *)0x0)) goto LAB_00104aa9;
      if (bVar12) {
        SSL_set_post_handshake_auth(to,1);
      }
      if ((bVar13) && (iVar28 = SSL_set1_client_cert_type(to,&cert_type_rpk,2), iVar28 == 0)) {
        BIO_printf(_bio_err,"Error setting client certificate types\n");
        goto LAB_00105e76;
      }
      if ((enable_server_rpk != 0) &&
         (iVar28 = SSL_set1_server_cert_type(to,&cert_type_rpk,2), iVar28 == 0)) {
        BIO_printf(_bio_err,"Error setting server certificate types\n");
        local_4c8 = 1;
        goto LAB_00105afb;
      }
      if (local_440 != (byte *)0x0) {
        pBVar37 = BIO_new_file((char *)local_440,"r");
        if (pBVar37 != (BIO *)0x0) {
          pSVar43 = PEM_read_bio_SSL_SESSION
                              (pBVar37,(SSL_SESSION **)0x0,(undefined1 *)0x0,(void *)0x0);
          BIO_free(pBVar37);
          if (pSVar43 != (SSL_SESSION *)0x0) {
            iVar28 = SSL_set_session(to,pSVar43);
            if (iVar28 == 0) {
              BIO_printf(_bio_err,"Can\'t set session\n");
              ERR_print_errors(_bio_err);
              goto LAB_00105e76;
            }
            SSL_SESSION_free(pSVar43);
            goto LAB_00104f17;
          }
        }
        pcVar57 = "Can\'t open session file %s\n";
LAB_001078a0:
        BIO_printf(_bio_err,pcVar57,local_440);
        ERR_print_errors(_bio_err);
LAB_00105e76:
        local_4c8 = 1;
        goto LAB_00105afb;
      }
LAB_00104f17:
      if (bVar14) {
        SSL_ctrl(to,0x21,0x80,(void *)0x0);
      }
      pcVar57 = local_2c8;
      if (bVar9) goto LAB_00107988;
      if (local_498 != (char *)0x0) goto LAB_0010795c;
      if (local_488 == 0) {
        local_498 = local_2c8;
        if (local_2c8 == (char *)0x0) {
          local_498 = "localhost";
LAB_0010795c:
          lVar54 = SSL_ctrl(to,0x37,0,local_498);
          if (lVar54 == 0) {
            BIO_printf(_bio_err,"Unable to set TLS servername extension.\n");
            ERR_print_errors(_bio_err);
            goto LAB_00105e76;
          }
        }
        else {
          sVar49 = strlen(local_2c8);
          bVar25 = 0;
          bVar2 = 1;
          uVar44 = 0;
          uVar50 = 0;
          while( true ) {
            if ((sVar49 <= uVar44) || (0x3e < uVar50)) {
              if (!(bool)((bVar2 ^ 1) & uVar50 != 0x3f & bVar25)) goto LAB_00107988;
              goto LAB_0010795c;
            }
            bVar4 = pcVar57[uVar44];
            if ((char)bVar4 < ':') break;
            if ((0x39 < (byte)(bVar4 - 0x41)) ||
               ((0x3ffffff43ffffffU >> ((ulong)(bVar4 - 0x41) & 0x3f) & 1) == 0)) goto LAB_00107f9f;
            uVar50 = uVar50 + 1;
            bVar2 = 0;
LAB_00107947:
            uVar44 = uVar44 + 1;
          }
          if ('/' < (char)bVar4) {
LAB_00107943:
            uVar50 = uVar50 + 1;
            goto LAB_00107947;
          }
LAB_00107f9f:
          if ((uVar44 != 0) && (uVar44 < sVar49 - 1)) {
            if (bVar4 == 0x2d) goto LAB_00107943;
            if ((((bVar4 == 0x2e) && (pcVar57[uVar44 + 1] != '.')) && (pcVar57[uVar44 - 1] != '-'))
               && (pcVar57[uVar44 + 1] != '-')) {
              uVar50 = 0;
              bVar25 = 1;
              goto LAB_00107947;
            }
          }
        }
LAB_00107988:
        if (local_488 != 0) goto LAB_00104f71;
        if (local_518 != 0) {
          BIO_printf(_bio_err,
                     "%s: DANE TLSA authentication requires the -dane_tlsa_domain option.\n",prog);
          goto LAB_00105e76;
        }
      }
      else {
LAB_00104f71:
        iVar28 = SSL_dane_enable(to,local_488);
        if (iVar28 < 1) {
          pcVar57 = "%s: Error enabling DANE TLSA authentication.\n";
          local_440 = prog;
          goto LAB_001078a0;
        }
        if (local_518 == 0) {
          BIO_printf(_bio_err,
                     "%s: DANE TLSA authentication requires at least one -dane_tlsa_rrdata option.\n"
                     ,prog);
          local_4c8 = 1;
          goto LAB_00105afb;
        }
        iVar28 = tlsa_import_rrset(to,local_518);
        if (iVar28 < 1) {
          BIO_printf(_bio_err,"%s: Failed to import any TLSA records.\n",prog);
          goto LAB_00105e76;
        }
        if (bVar15) {
          SSL_dane_set_flags(to,1);
        }
      }
      if ((local_4a8 & local_478) != 0) {
        BIO_printf(_bio_err,"%s: DTLS does not support the -tfo option\n",prog);
        goto LAB_00105e76;
      }
      if ((local_4c8 & local_478) != 0) {
        BIO_printf(_bio_err,"%s: QUIC does not support the -tfo option\n",prog);
        goto LAB_00105e76;
      }
      if ((local_3e0 == 0) && (local_4c8 != 0)) {
        BIO_printf(_bio_err,
                   "%s: QUIC requires ALPN to be specified (e.g. \"h3\" for HTTP/3) via the -alpn option\n"
                   ,prog);
        goto LAB_00105e76;
      }
      if (local_478 != 0) {
        BIO_printf(bio_c_out,"Connecting via TFO\n");
      }
      bVar9 = true;
      local_42c = 0;
      iVar28 = 0;
      local_438 = 1;
LAB_001050b4:
      BIO_ADDR_free(local_290);
      local_290 = (void *)0x0;
      iVar30 = init_client(&local_2f0,local_2c8,local_2c0);
      if (iVar30 == 0) {
        puVar46 = (uint *)__errno_location();
        BIO_printf(_bio_err,"connect:errno=%d\n",(ulong)*puVar46);
        BIO_closesocket(local_2f0);
        goto LAB_00105e76;
      }
      BIO_printf(bio_c_out,"CONNECTED(%08X)\n",(ulong)local_2f0);
      if ((local_3ec | local_4c8) != 0) {
        iVar30 = BIO_socket_nbio(local_2f0,1);
        if (iVar30 == 0) {
          ERR_print_errors(_bio_err);
          goto LAB_00105e76;
        }
        if (local_3ec != 0) {
          if (local_4c8 == 0) {
            BIO_printf(bio_c_out,"Turned on non blocking io\n");
            goto LAB_00105159;
          }
          iVar30 = SSL_set_blocking_mode(to,0);
          if (iVar30 == 0) goto LAB_00105afb;
          BIO_printf(bio_c_out,"Turned on non blocking io\n");
        }
        if (local_4a8 != 0) goto LAB_00105167;
        pBVar37 = BIO_new_dgram(local_2f0,0);
        iVar30 = SSL_set1_initial_peer_addr(to,local_290);
        if (iVar30 != 0) {
          if (pBVar37 == (BIO *)0x0) goto LAB_001076dd;
          goto LAB_00105295;
        }
        BIO_printf(_bio_err,"Failed to set the initial peer address\n");
        uVar62 = local_3ec | local_4c8;
        goto LAB_00105a37;
      }
LAB_00105159:
      if (local_4a8 == 0) {
        pBVar37 = BIO_new_socket(local_2f0,0);
        if (pBVar37 != (BIO *)0x0) {
          if (local_478 != 0) {
            BIO_ctrl(pBVar37,100,2,local_290);
            BIO_ctrl(pBVar37,0x9c,1,(void *)0x0);
          }
          goto LAB_00105295;
        }
LAB_001076dd:
        BIO_printf(_bio_err,"Unable to create BIO\n");
        ERR_print_errors(_bio_err);
        BIO_closesocket(local_2f0);
        goto LAB_00105e76;
      }
LAB_00105167:
      pBVar37 = BIO_new_dgram(local_2f0,0);
      if ((pBVar37 == (BIO *)0x0) || (local_280 = (void *)BIO_ADDR_new(), local_280 == (void *)0x0))
      {
        BIO_printf(_bio_err,"memory allocation failure\n");
        BIO_free(pBVar37);
        BIO_closesocket(local_2f0);
        goto LAB_00105e76;
      }
      iVar30 = BIO_sock_info(local_2f0,0,&local_280);
      if (iVar30 == 0) {
        puVar46 = (uint *)__errno_location();
        BIO_printf(_bio_err,"getsockname:errno=%d\n",(ulong)*puVar46);
        BIO_free(pBVar37);
        BIO_ADDR_free(local_280);
        BIO_closesocket(local_2f0);
        goto LAB_00105e76;
      }
      BIO_ctrl(pBVar37,0x20,0,local_280);
      BIO_ADDR_free(local_280);
      local_280 = (void *)0x0;
      if (bVar16) {
        local_278.tv_sec = __LC183;
        local_278.tv_usec = _UNK_0010ddd8;
        BIO_ctrl(pBVar37,0x21,0,&local_278);
        local_278.tv_usec = _UNK_0010ddd8;
        local_278.tv_sec = __LC183;
        BIO_ctrl(pBVar37,0x23,0,&local_278);
      }
      if (local_410 != 0) {
        lVar54 = SSL_ctrl(to,0x79,0,(void *)0x0);
        if (local_410 < lVar54) {
          lVar54 = SSL_ctrl(to,0x79,0,(void *)0x0);
          BIO_printf(_bio_err,"MTU too small. Must be at least %ld\n",lVar54);
          BIO_free(pBVar37);
        }
        else {
          SSL_set_options(to,0x1000);
          lVar54 = SSL_ctrl(to,0x78,local_410,(void *)0x0);
          if (lVar54 != 0) goto LAB_00105295;
          BIO_printf(_bio_err,"Failed to set MTU\n");
          BIO_free(pBVar37);
        }
        goto LAB_00105d4c;
      }
      BIO_ctrl(pBVar37,0x27,0,(void *)0x0);
LAB_00105295:
      if (local_3f0 != 0) {
        pBVar48 = BIO_f_nbio_test();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 == (BIO *)0x0) {
          BIO_printf(_bio_err,"Unable to create BIO\n");
          BIO_free(pBVar37);
          uVar62 = local_3f0;
          goto LAB_00105a37;
        }
        pBVar37 = BIO_push(pBVar47,pBVar37);
      }
      if (c_debug != 0) {
        BIO_set_callback_ex(pBVar37,&bio_dump_callback);
        BIO_set_callback_arg(pBVar37,(char *)bio_c_out);
      }
      if (local_474 != 0) {
        if (local_474 == 2) {
          SSL_set_msg_callback(to,(cb *)&SSL_trace);
        }
        else {
          SSL_set_msg_callback(to,(cb *)&msg_cb);
        }
        pBVar47 = local_4f8;
        if (local_4f8 == (BIO *)0x0) {
          pBVar47 = bio_c_out;
        }
        SSL_ctrl(to,0x10,0,pBVar47);
      }
      if (bVar17) {
        SSL_callback_ctrl(to,0x38,(_func_3375 *)&tlsext_cb);
        SSL_ctrl(to,0x39,0,bio_c_out);
      }
      if (bVar18) {
        SSL_ctrl(to,0x41,1,(void *)0x0);
        SSL_CTX_callback_ctrl(local_550,0x3f,ocsp_resp_cb);
        SSL_CTX_ctrl(local_550,0x40,0,bio_c_out);
      }
      SSL_set_bio(to,pBVar37,pBVar37);
      SSL_set_connect_state(to);
      iVar30 = fileno_stdin();
      iVar31 = SSL_get_fd(to);
      if (iVar31 < iVar30) {
        local_454 = fileno_stdin();
      }
      else {
        local_454 = SSL_get_fd(to);
      }
      local_454 = local_454 + 1;
      local_2a0 = 0;
      local_298 = 0;
      if ((local_448 != 0) &&
         (iVar30 = OSSL_HTTP_proxy_connect
                             (pBVar37,local_4e0,local_4d8,local_400,local_2d0,0,_bio_err,prog),
         iVar30 == 0)) goto LAB_00105d4c;
      switch(local_2ec) {
      case 1:
      case 0xb:
        pBVar48 = BIO_f_buffer();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 != (BIO *)0x0) {
          BIO_push(pBVar47,pBVar37);
          do {
            iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
            if (iVar28 < 4) break;
          } while (local_530[3] == 0x2d);
          if (local_480 == (char *)0x0) {
            local_480 = "mail.example.com";
          }
          if (local_2ec == 0xb) {
            BIO_printf(pBVar47,"LHLO %s\r\n",local_480);
          }
          else {
            BIO_printf(pBVar47,"EHLO %s\r\n",local_480);
          }
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          bVar8 = false;
          do {
            iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
            pcVar57 = strstr((char *)local_530,"STARTTLS");
            if (pcVar57 != (char *)0x0) {
              bVar8 = true;
            }
          } while ((3 < iVar28) && (local_530[3] == 0x2d));
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          BIO_pop(pBVar47);
          BIO_free(pBVar47);
          if (!bVar8) {
            BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
          }
          pcVar57 = "STARTTLS\r\n";
LAB_00106f99:
          BIO_printf(pBVar37,pcVar57);
          BIO_read(pBVar37,local_528,0x4000);
          goto switchD_0010544d_default;
        }
        goto LAB_001070af;
      case 2:
        BIO_read(pBVar37,local_530,0x4000);
        BIO_printf(pBVar37,"STLS\r\n");
        iVar28 = BIO_read(pBVar37,local_528,0x4000);
        if (iVar28 < 0) {
LAB_0010641f:
          BIO_printf(_bio_err,"BIO_read failed\n");
          goto LAB_00105e76;
        }
      default:
switchD_0010544d_default:
        if (local_3d0 != (char *)0x0) {
          pSVar43 = SSL_get_session(to);
          if (pSVar43 == (SSL_SESSION *)0x0) {
LAB_0010559c:
            if ((psksess == (SSL_SESSION *)0x0) ||
               (iVar30 = SSL_SESSION_get_max_early_data(), iVar30 == 0)) goto LAB_001055b5;
          }
          else {
            pSVar43 = SSL_get_session(to);
            iVar30 = SSL_SESSION_get_max_early_data(pSVar43);
            if (iVar30 == 0) goto LAB_0010559c;
          }
          pBVar47 = BIO_new_file(local_3d0,"r");
          if (pBVar47 == (BIO *)0x0) {
            BIO_printf(_bio_err,"Cannot open early data file\n");
            break;
          }
          do {
            iVar30 = BIO_read_ex(pBVar47,local_510,0x4000,&local_288);
LAB_0010633d:
            while (iVar31 = SSL_write_early_data(to,local_510,local_288), iVar31 == 0) {
              iVar31 = SSL_get_error(to,0);
              if (3 < iVar31) goto LAB_0010649a;
              if (iVar31 < 2) goto LAB_00106375;
            }
          } while (iVar30 != 0);
          BIO_free(pBVar47);
        }
LAB_001055b5:
        uVar60 = 1;
        local_218 = 0;
        bVar26 = true;
        local_20c = 0;
        bVar8 = false;
        uVar1 = 0;
        local_458 = 0;
        uVar56 = 1;
        uVar51 = 1;
        local_228 = __LC231;
        uStack_220 = _UNK_0010ddf8;
        local_238 = to;
        local_230 = local_510;
        local_210 = uVar7;
LAB_00105640:
        pfVar58 = &local_208;
        for (lVar54 = 0x20; lVar54 != 0; lVar54 = lVar54 + -1) {
          *(undefined4 *)pfVar58->fds_bits = 0;
          pfVar58 = (fd_set *)((long)pfVar58 + (ulong)bVar63 * -8 + 4);
        }
        pfVar58 = &local_188;
        for (lVar54 = 0x20; lVar54 != 0; lVar54 = lVar54 + -1) {
          *(undefined4 *)pfVar58->fds_bits = 0;
          pfVar58 = (fd_set *)((long)pfVar58 + (ulong)bVar63 * -8 + 4);
        }
        if (local_4a8 == 0 && local_4c8 == 0) {
LAB_00105674:
          local_460 = (timeval *)0x0;
        }
        else {
          local_460 = &local_278;
          iVar30 = SSL_get_event_timeout(to,local_460,&local_2e4);
          if ((iVar30 == 0) || (local_2e4 != 0)) goto LAB_00105674;
        }
        iVar30 = SSL_is_init_finished(to);
        if (((iVar30 == 0) && (lVar54 = SSL_ctrl(to,0xc,0,(void *)0x0), lVar54 == 0)) &&
           (iVar30 = SSL_get_key_update_type(to), iVar30 == -1)) {
          bVar9 = true;
          bVar10 = false;
        }
        else {
          bVar10 = true;
          if (bVar9) {
            if (bVar19) {
              BIO_puts(_bio_err,"CONNECTION ESTABLISHED\n");
              print_ssl_summary(to);
            }
            print_stuff(bio_c_out,to,local_438);
            if (0 < (int)local_438) {
              local_438 = local_438 + -1;
            }
            if (local_2ec == 0) {
              if (local_434 != 0) goto LAB_001060cb;
            }
            else {
              BIO_write(_bio_err,local_530,iVar28);
              if (local_434 != 0) goto LAB_001060cb;
              local_2ec = 0;
            }
            bVar10 = bVar9;
            bVar9 = false;
          }
        }
        uVar62 = 0;
        if (uVar60 == 0) {
          do {
            iVar30 = user_data_process(&local_238,&local_2a0,&local_298);
            if (iVar30 != 3) {
              if (iVar30 < 4) {
                if (iVar30 == 1) goto LAB_00105a37;
                if (iVar30 == 2) goto LAB_001050b4;
              }
              else if (iVar30 == 4) {
                uVar60 = 1;
                uVar56 = 1;
                if (local_2a0 != 0) goto LAB_00106507;
                goto LAB_00105728;
              }
              BIO_printf(_bio_err,"ERROR\n");
              uVar62 = 0;
              goto LAB_00105a37;
            }
            if (local_2a0 != 0) {
              uVar60 = 0;
LAB_00106507:
              uVar56 = 0;
              local_278.tv_sec = 0;
              local_278.tv_usec = 0;
              goto LAB_00105728;
            }
          } while (uStack_220 != 0);
          uVar56 = 1;
        }
LAB_00105728:
        if (uVar51 == 0) {
          if (bVar10) {
LAB_0010573a:
            if (((local_42c ^ 1) & uVar56) != 0) {
              bVar25 = fileno_stdin();
              iVar30 = fileno_stdin();
              lVar54 = __fdelt_chk((long)iVar30);
              local_208.fds_bits[lVar54] = local_208.fds_bits[lVar54] | 1L << (bVar25 & 0x3f);
            }
            if (bVar8) {
              bVar25 = fileno_stdout();
              iVar30 = fileno_stdout();
              lVar54 = __fdelt_chk((long)iVar30);
              local_188.fds_bits[lVar54] = local_188.fds_bits[lVar54] | 1L << (bVar25 & 0x3f);
            }
LAB_0010575a:
            if (((local_4c8 ^ 1) & uVar51) == 0) goto LAB_00105f5b;
            iVar30 = SSL_get_fd(to);
            iVar31 = SSL_get_fd(to);
            lVar54 = __fdelt_chk((long)iVar31);
            local_208.fds_bits[lVar54] = local_208.fds_bits[lVar54] | 1L << ((byte)iVar30 & 0x3f);
            if (uVar60 != 0) goto LAB_001057a2;
            if (local_4c8 != 0) goto LAB_00105e94;
          }
          else {
LAB_00105f5b:
            uVar32 = uVar60;
            if (local_4c8 == 0) {
joined_r0x00105f6c:
              if (uVar32 == 0) goto LAB_001057d3;
            }
            else {
              iVar30 = SSL_net_read_desired(to);
              if (iVar30 != 0) {
                iVar30 = SSL_get_fd(to);
                iVar31 = SSL_get_fd(to);
                lVar54 = __fdelt_chk((long)iVar31);
                local_208.fds_bits[lVar54] =
                     local_208.fds_bits[lVar54] | 1L << ((byte)iVar30 & 0x3f);
              }
LAB_00105e94:
              if (!bVar26) {
                uVar32 = SSL_net_write_desired(to);
                goto joined_r0x00105f6c;
              }
            }
LAB_001057a2:
            iVar30 = SSL_get_fd(to);
            iVar31 = SSL_get_fd(to);
            lVar54 = __fdelt_chk((long)iVar31);
            local_188.fds_bits[lVar54] = local_188.fds_bits[lVar54] | 1L << ((byte)iVar30 & 0x3f);
          }
LAB_001057d3:
          iVar30 = select(local_454,&local_208,&local_188,(fd_set *)0x0,local_460);
          if (iVar30 < 0) {
            puVar46 = (uint *)__errno_location();
            BIO_printf(_bio_err,"bad select %d\n",(ulong)*puVar46);
            uVar62 = 1;
            goto LAB_00105a37;
          }
          uVar32 = 0;
          if (local_460 != (timeval *)0x0) {
LAB_0010580f:
            SSL_handle_events(to);
            if (local_4a8 != 0) {
              iVar30 = SSL_get_fd(to);
              lVar54 = __fdelt_chk((long)iVar30);
              uVar50 = local_208.fds_bits[lVar54];
              uVar33 = SSL_get_fd(to);
              if ((uVar50 >> ((ulong)uVar33 & 0x3f) & 1) == 0) {
                iVar30 = SSL_get_fd(to);
                lVar54 = __fdelt_chk((long)iVar30);
                uVar50 = local_188.fds_bits[lVar54];
                iVar30 = SSL_get_fd(to);
                if ((uVar50 & 1L << ((byte)iVar30 & 0x3f)) == 0) {
                  BIO_printf(_bio_err,"TIMEOUT occurred\n");
                }
              }
            }
            if (uVar32 != 0) goto LAB_00106090;
          }
          if (local_4c8 == 0) {
            iVar30 = SSL_get_fd(to);
            lVar54 = __fdelt_chk((long)iVar30);
            uVar50 = local_188.fds_bits[lVar54];
            uVar32 = SSL_get_fd(to);
            if ((uVar50 >> ((ulong)uVar32 & 0x3f) & 1) == 0) {
              iVar30 = fileno_stdout();
              lVar54 = __fdelt_chk((long)iVar30);
              uVar50 = local_188.fds_bits[lVar54];
              bVar25 = fileno_stdout();
              if ((1L << (bVar25 & 0x3f) & uVar50) != 0) goto LAB_00105c26;
              iVar30 = SSL_get_fd(to);
              lVar54 = __fdelt_chk((long)iVar30);
              uVar50 = local_208.fds_bits[lVar54];
              iVar30 = SSL_get_fd(to);
              if ((1L << ((byte)iVar30 & 0x3f) & uVar50) == 0) goto LAB_00105947;
              goto LAB_00106090;
            }
          }
          else if ((local_2a0 == 0) && (!bVar26)) {
            iVar30 = fileno_stdout();
            lVar54 = __fdelt_chk((long)iVar30);
            uVar50 = local_188.fds_bits[lVar54];
            uVar44 = fileno_stdout();
            if ((uVar50 >> (uVar44 & 0x3f) & 1) == 0) {
LAB_00105947:
              if (bVar20) goto LAB_00105a37;
              iVar30 = fileno_stdin();
              lVar54 = __fdelt_chk((long)iVar30);
              uVar50 = local_208.fds_bits[lVar54];
              uVar44 = fileno_stdin();
              if ((uVar50 >> (uVar44 & 0x3f) & 1) != 0) {
                if (bVar21) {
                  iVar30 = raw_read_stdin(local_510,0x2000);
                  iVar31 = 0;
                  for (lVar54 = 0; (int)lVar54 < iVar30; lVar54 = lVar54 + 1) {
                    if (*(char *)(local_510 + lVar54) == '\n') {
                      iVar31 = iVar31 + 1;
                    }
                  }
                  for (lVar54 = (long)(iVar30 + -1); iVar53 = (int)lVar54, -1 < iVar53;
                      lVar54 = lVar54 + -1) {
                    cVar3 = *(char *)(local_510 + lVar54);
                    *(char *)(local_510 + (iVar31 + iVar53)) = cVar3;
                    if (cVar3 == '\n') {
                      iVar31 = iVar31 + -1;
                      iVar30 = iVar30 + 1;
                      *(undefined1 *)(local_510 + (iVar53 + iVar31)) = 0xd;
                    }
                  }
                }
                else {
                  iVar30 = raw_read_stdin(local_510,0x4000);
                }
                bVar26 = (bool)(iVar30 < 1 & (bVar22 ^ 1U));
                if (iVar30 == 0) {
                  if (bVar26) goto LAB_001059fd;
                  local_42c = 1;
                  uVar56 = 0;
                }
                else {
                  if (bVar26) {
LAB_001059fd:
                    BIO_printf(_bio_err,"DONE\n");
                    goto LAB_00105a37;
                  }
                  if (0 < iVar30) {
                    if ((uStack_220 == 0) && ((ulong)(long)iVar30 <= local_228)) {
                      local_218 = 0;
                      uStack_220 = (long)iVar30;
                      uVar56 = 0;
                      goto switchD_001058ba_caseD_7;
                    }
                    goto LAB_00105a37;
                  }
                  uVar56 = 0;
                }
              }
            }
            else {
LAB_00105c26:
              iVar30 = raw_write_stdout(local_528 + (int)uVar1,local_458);
              if (iVar30 < 1) {
                BIO_printf(bio_c_out,"DONE\n");
                goto LAB_00105a37;
              }
              local_458 = local_458 - iVar30;
              uVar1 = uVar1 + iVar30;
              bVar26 = false;
              if (0 < local_458) {
                bVar26 = bVar8;
              }
              bVar8 = bVar26;
              if (local_458 < 1) {
                uVar51 = 1;
              }
            }
            goto switchD_001058ba_caseD_7;
          }
          lVar41 = local_298;
          lVar54 = local_2a0;
          iVar30 = SSL_write(to,(void *)(local_510 + local_298),(int)local_2a0);
          uVar32 = SSL_get_error(to,iVar30);
          switch(uVar32) {
          case 0:
            local_298 = lVar41 + iVar30;
            local_2a0 = lVar54 - iVar30;
            if (0 < iVar30) {
              if (local_2a0 == 0) goto LAB_00105cea;
              uVar60 = 1;
              uVar56 = uVar32;
              break;
            }
            goto LAB_00105e76;
          case 1:
          case 10:
switchD_001058ba_caseD_1:
            ERR_print_errors(_bio_err);
            goto LAB_00105d4c;
          case 2:
            uVar60 = 0;
            BIO_printf(bio_c_out,"write R BLOCK\n");
            uVar51 = 1;
            bVar8 = false;
            break;
          case 3:
            pcVar57 = "write W BLOCK\n";
LAB_00105db7:
            uVar60 = 1;
            BIO_printf(bio_c_out,pcVar57);
            uVar56 = 0;
            break;
          case 4:
            BIO_printf(bio_c_out,"write X BLOCK\n");
            break;
          case 5:
            if ((lVar54 == 0) && (iVar30 == 0)) goto LAB_00105cea;
            piVar45 = __errno_location();
            if ((local_478 == 0) || (*piVar45 != 0x6a)) {
              BIO_printf(_bio_err,"write:errno=%d\n");
              goto LAB_00105d4c;
            }
            break;
          case 6:
            if (lVar54 != 0) {
              BIO_printf(bio_c_out,"shutdown\n");
              goto LAB_00105a37;
            }
LAB_00105cea:
            uVar60 = 0;
            uVar56 = 1;
            break;
          case 9:
            uVar60 = 1;
            BIO_printf(bio_c_out,"write A BLOCK\n");
            wait_for_async(to);
            uVar56 = 0;
          }
        }
        else {
          iVar30 = SSL_has_pending(to);
          if (iVar30 == 0) {
            if (bVar10) goto LAB_0010573a;
            goto LAB_0010575a;
          }
          uVar32 = uVar51;
          if (local_460 != (timeval *)0x0) goto LAB_0010580f;
LAB_00106090:
          iVar30 = SSL_read(to,local_528,0x4000);
          uVar32 = SSL_get_error(to,iVar30);
          switch(uVar32) {
          case 0:
            if (iVar30 < 1) goto LAB_00105e76;
            uVar51 = uVar32;
            local_458 = iVar30;
            bVar8 = true;
            uVar1 = uVar32;
            break;
          case 1:
          case 10:
            goto switchD_001058ba_caseD_1;
          case 2:
            BIO_printf(bio_c_out,"read R BLOCK\n");
            goto joined_r0x0010617e;
          case 3:
            pcVar57 = "read W BLOCK\n";
            goto LAB_00105db7;
          case 4:
            BIO_printf(bio_c_out,"read X BLOCK\n");
            break;
          case 5:
            puVar46 = (uint *)__errno_location();
            uVar62 = *puVar46;
            if (bVar19) {
              BIO_puts(_bio_err,"CONNECTION CLOSED BY SERVER\n");
            }
            else {
              BIO_printf(_bio_err,"read:errno=%d\n",(ulong)uVar62);
            }
            goto LAB_00105a37;
          case 6:
            BIO_printf(bio_c_out,"closed\n");
            goto LAB_00105a37;
          case 9:
            BIO_printf(bio_c_out,"read A BLOCK\n");
            wait_for_async(to);
joined_r0x0010617e:
            uVar51 = uVar56 | uVar60;
            bVar8 = false;
            if ((uVar56 | uVar60) == 0) {
              uVar56 = 0;
              uVar60 = 1;
              uVar51 = 1;
              bVar8 = false;
            }
          }
        }
switchD_001058ba_caseD_7:
        bVar26 = false;
        goto LAB_00105640;
      case 3:
        pBVar48 = BIO_f_buffer();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 != (BIO *)0x0) {
          bVar8 = false;
          BIO_push(pBVar47,pBVar37);
          BIO_gets(pBVar47,(char *)local_530,0x4000);
          BIO_printf(pBVar47,". CAPABILITY\r\n");
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          do {
            iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
            pcVar57 = strstr((char *)local_530,"STARTTLS");
            if (pcVar57 != (char *)0x0) {
              bVar8 = true;
            }
          } while ((3 < iVar28) && (*local_530 != 0x2e));
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          BIO_pop(pBVar47);
          BIO_free(pBVar47);
          if (!bVar8) {
            BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
          }
          pcVar57 = ". STARTTLS\r\n";
          goto LAB_00106f99;
        }
        goto LAB_001070af;
      case 4:
        pBVar48 = BIO_f_buffer();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 != (BIO *)0x0) {
          BIO_push(pBVar47,pBVar37);
          do {
            iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
            if (iVar28 < 4) break;
            ppuVar39 = __ctype_b_loc();
            puVar6 = *ppuVar39;
          } while (((((*(byte *)((long)puVar6 + (ulong)*local_530 * 2 + 1) & 8) == 0) ||
                    ((*(byte *)((long)puVar6 + (ulong)local_530[1] * 2 + 1) & 8) == 0)) ||
                   ((*(byte *)((long)puVar6 + (ulong)local_530[2] * 2 + 1) & 8) == 0)) ||
                  (local_530[3] != 0x20));
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          BIO_pop(pBVar47);
          BIO_free(pBVar47);
          pcVar57 = "AUTH TLS\r\n";
          goto LAB_00106f99;
        }
LAB_001070af:
        BIO_printf(_bio_err,"Unable to create BIO\n");
        break;
      case 5:
        iVar30 = BIO_read(pBVar37,local_530,0x4000);
        if (iVar30 != 3) {
LAB_00106838:
          uVar62 = 1;
          goto LAB_00105a37;
        }
        iVar30 = memcmp(local_530,&tls_do_10,3);
        if (iVar30 == 0) {
          BIO_write(pBVar37,&tls_will_9,3);
          BIO_write(pBVar37,&tls_follows_8,6);
          BIO_ctrl(pBVar37,0xb,0,(void *)0x0);
          iVar30 = BIO_read(pBVar37,local_530,0x4000);
          if (iVar30 != 6) goto LAB_00106838;
          iVar30 = memcmp(local_530,&tls_follows_8,6);
          if (iVar30 == 0) goto switchD_0010544d_default;
        }
        break;
      case 6:
      case 7:
        pcVar57 = "server";
        if (local_2ec == 6) {
          pcVar57 = "client";
        }
        BIO_printf(pBVar37,
                   "<stream:stream xmlns:stream=\'http://etherx.jabber.org/streams\' xmlns=\'jabber:%s\' to=\'%s\' version=\'1.0\'>"
                   ,pcVar57);
        iVar30 = BIO_read(pBVar37,local_530,0x4000);
        if (iVar30 < 0) goto LAB_0010641f;
        local_530[iVar30] = 0;
        while ((pcVar57 = strstr((char *)local_530,
                                 "<starttls xmlns=\'urn:ietf:params:xml:ns:xmpp-tls\'"),
               pcVar57 == (char *)0x0 &&
               (pcVar57 = strstr((char *)local_530,
                                 "<starttls xmlns=\"urn:ietf:params:xml:ns:xmpp-tls\""),
               pcVar57 == (char *)0x0))) {
          iVar30 = BIO_read(pBVar37,local_530,0x4000);
          if (iVar30 < 1) goto LAB_00105d4c;
          local_530[iVar30] = 0;
        }
        BIO_printf(pBVar37,"<starttls xmlns=\'urn:ietf:params:xml:ns:xmpp-tls\'/>");
        iVar30 = BIO_read(pBVar37,local_528,0x4000);
        if (iVar30 < 0) goto LAB_00106d2f;
        local_528[iVar30] = 0;
        pcVar57 = strstr((char *)local_528,"<proceed");
        if (pcVar57 == (char *)0x0) break;
        *local_530 = 0;
        goto switchD_0010544d_default;
      case 8:
        pBVar48 = BIO_f_buffer();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 == (BIO *)0x0) {
LAB_00106441:
          BIO_printf(_bio_err,"Unable to create BIO\n");
          goto LAB_00105e76;
        }
        BIO_push(pBVar47,pBVar37);
        BIO_printf(pBVar47,"STARTTLS\r\n");
        BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
        local_454 = SSL_get_fd(to);
        local_454 = local_454 + 1;
        do {
          while( true ) {
            local_280 = (void *)((ulong)local_280 & 0xffffffff00000000);
            pfVar58 = &local_208;
            for (lVar54 = 0x20; lVar54 != 0; lVar54 = lVar54 + -1) {
              *(undefined4 *)pfVar58->fds_bits = 0;
              pfVar58 = (fd_set *)((long)pfVar58 + (ulong)bVar63 * -8 + 4);
            }
            iVar30 = SSL_get_fd(to);
            iVar31 = SSL_get_fd(to);
            lVar54 = __fdelt_chk((long)iVar31);
            local_208.fds_bits[lVar54] = local_208.fds_bits[lVar54] | 1L << ((byte)iVar30 & 0x3f);
            local_278.tv_usec = _UNK_0010dde8;
            local_278.tv_sec = __LC202;
            lVar54 = BIO_ctrl(pBVar47,0x74,0,(void *)0x0);
            if ((((lVar54 == 0) && (lVar54 = BIO_ctrl(pBVar47,10,0,(void *)0x0), (int)lVar54 == 0))
                && (lVar54 = BIO_ctrl(pBVar37,10,0,(void *)0x0), (int)lVar54 == 0)) &&
               (iVar30 = select(local_454,&local_208,(fd_set *)0x0,(fd_set *)0x0,&local_278),
               iVar30 < 1)) {
              BIO_printf(_bio_err,"Timeout waiting for response (%d seconds).\n",8);
              goto LAB_00106b9f;
            }
            iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
            if ((iVar28 < 1) ||
               (iVar30 = __isoc99_sscanf(local_530,"%*s %d",&local_280), iVar30 != 1))
            goto LAB_00106b9f;
            if (((int)local_280 == 0x1c3) || ((int)local_280 == 0x1a5)) break;
            if ((int)local_280 == 0x2b3) {
              BIO_printf(_bio_err,"STARTTLS negotiation failed: ");
              ERR_print_errors(_bio_err);
              goto LAB_00106b9f;
            }
            if ((int)local_280 == 0x29e) goto LAB_00106b9f;
          }
          pcVar57 = strstr((char *)local_530,"STARTTLS");
        } while (pcVar57 == (char *)0x0);
        BIO_printf(_bio_err,"STARTTLS not supported: %s",local_530);
LAB_00106b9f:
        BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
        BIO_pop(pBVar47);
        BIO_free(pBVar47);
        if ((int)local_280 == 0x29e) goto switchD_0010544d_default;
        BIO_printf(_bio_err,"Server does not support STARTTLS.\n");
        break;
      case 9:
        iVar30 = BIO_read(pBVar37,local_528,0x4000);
        if (iVar30 < 0) {
LAB_00106d2f:
          BIO_printf(_bio_err,"BIO_read failed\n");
        }
        else if (iVar30 < 0x15) {
          BIO_printf(_bio_err,"MySQL packet too short.\n");
        }
        else if (*local_528 + 4 + (uint)local_528[1] * 0x100 + (uint)local_528[2] * 0x10000 ==
                 iVar30) {
          if (local_528[4] == 10) {
            lVar54 = 5;
            do {
              iVar31 = (int)lVar54;
              if (iVar30 <= iVar31) {
                BIO_printf(_bio_err,"Cannot confirm server version. ");
                goto LAB_00105d4c;
              }
              pbVar38 = local_528 + lVar54;
              lVar54 = lVar54 + 1;
            } while (*pbVar38 != 0);
            if (iVar31 + 0xf < iVar30) {
              if (local_528[iVar31 + 0xd] == 0) {
                if ((local_528[(long)(iVar31 + 0xe) + 1] & 8) != 0) {
                  BIO_write(pBVar37,ssl_req_7,0x24);
                  BIO_ctrl(pBVar37,0xb,0,(void *)0x0);
                  goto switchD_0010544d_default;
                }
                BIO_printf(_bio_err,"MySQL server does not support SSL.\n");
              }
              else {
                BIO_printf(_bio_err,"MySQL packet is broken.\n");
              }
            }
            else {
              BIO_printf(_bio_err,"MySQL server handshake packet is broken.\n");
            }
          }
          else {
            BIO_printf(_bio_err,"Only MySQL protocol version 10 is supported.\n");
          }
        }
        else {
          BIO_printf(_bio_err,"MySQL packet length does not match.\n");
        }
        break;
      case 10:
        BIO_write(pBVar37,&ssl_request_6,8);
        BIO_ctrl(pBVar37,0xb,0,(void *)0x0);
        iVar30 = BIO_read(pBVar37,local_528,0x4000);
        if (iVar30 != 1) goto LAB_00106838;
        if (*local_528 == 0x53) goto switchD_0010544d_default;
        break;
      case 0xc:
        pBVar48 = BIO_f_buffer();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 == (BIO *)0x0) goto LAB_00106441;
        BIO_push(pBVar47,pBVar37);
        BIO_gets(pBVar47,(char *)local_530,0x4000);
        BIO_printf(pBVar47,"CAPABILITIES\r\n");
        BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
        BIO_gets(pBVar47,(char *)local_530,0x4000);
        pcVar57 = strstr((char *)local_530,"101");
        if (pcVar57 == (char *)0x0) {
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          BIO_pop(pBVar47);
          BIO_free(pBVar47);
LAB_0010674c:
          BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
        }
        else {
          bVar8 = false;
          do {
            iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
            pcVar57 = strstr((char *)local_530,"STARTTLS");
            if (pcVar57 != (char *)0x0) {
              bVar8 = true;
            }
          } while ((1 < iVar28) && (*local_530 != 0x2e));
          BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
          BIO_pop(pBVar47);
          BIO_free(pBVar47);
          if (!bVar8) goto LAB_0010674c;
        }
        BIO_printf(pBVar37,"STARTTLS\r\n");
        iVar28 = BIO_read(pBVar37,local_530,0x4000);
        if (iVar28 < 0) goto LAB_0010641f;
        local_530[iVar28] = 0;
        pcVar57 = strstr((char *)local_530,"382");
        if (pcVar57 != (char *)0x0) goto switchD_0010544d_default;
        BIO_printf(_bio_err,"STARTTLS failed: %s",local_530);
        break;
      case 0xd:
        pBVar48 = BIO_f_buffer();
        pBVar47 = BIO_new(pBVar48);
        if (pBVar47 == (BIO *)0x0) goto LAB_00106441;
        bVar8 = false;
        BIO_push(pBVar47,pBVar37);
        do {
          iVar28 = BIO_gets(pBVar47,(char *)local_530,0x4000);
          if ((iVar28 < 2) || (*local_530 != 0x22)) break;
          make_uppercase(local_530);
          iVar28 = strncmp((char *)local_530,"\"STARTTLS\"",10);
          if (iVar28 == 0) {
            bVar8 = true;
          }
        } while (*local_530 == 0x22);
        BIO_ctrl(pBVar47,0xb,0,(void *)0x0);
        BIO_pop(pBVar47);
        BIO_free(pBVar47);
        if (!bVar8) {
          BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
        }
        BIO_printf(pBVar37,"STARTTLS\r\n");
        iVar28 = BIO_read(pBVar37,local_530,0x4000);
        if (iVar28 < 0) goto LAB_0010641f;
        local_530[iVar28] = 0;
        if (iVar28 < 2) {
          BIO_printf(_bio_err,"STARTTLS failed: %s",local_530);
        }
        else {
          strncpy((char *)local_528,(char *)local_530,2);
          make_uppercase(local_528);
          iVar30 = strncmp((char *)local_528,"OK",2);
          if (iVar30 == 0) goto switchD_0010544d_default;
          BIO_printf(_bio_err,"STARTTLS not supported: %s",local_530);
        }
        break;
      case 0xe:
        local_280 = (void *)0xffffffffffffffff;
        pBVar48 = BIO_s_mem();
        pBVar47 = BIO_new(pBVar48);
        conf = NCONF_new((CONF_METHOD *)0x0);
        if ((pBVar47 == (BIO *)0x0) || (conf == (CONF *)0x0)) {
          BIO_free(pBVar47);
          NCONF_free(conf);
        }
        else {
          BIO_puts(pBVar47,ldap_tls_genconf_5);
          iVar28 = NCONF_load_bio(conf,pBVar47,(long *)&local_280);
          if (iVar28 < 1) {
            BIO_free(pBVar47);
            NCONF_free(conf);
            if ((long)local_280 < 1) {
              BIO_printf(_bio_err,"NCONF_load_bio failed\n");
            }
            else {
              BIO_printf(_bio_err,"Error on line %ld\n");
            }
          }
          else {
            BIO_free(pBVar47);
            pcVar57 = NCONF_get_string(conf,"default","asn1");
            if (pcVar57 == (char *)0x0) {
              NCONF_free(conf);
              BIO_printf(_bio_err,"NCONF_get_string failed\n");
            }
            else {
              a_00 = ASN1_generate_nconf(pcVar57,conf);
              if (a_00 != (ASN1_TYPE *)0x0) {
                NCONF_free(conf);
                BIO_write(pBVar37,((a_00->value).asn1_string)->data,
                          ((a_00->value).asn1_string)->length);
                BIO_ctrl(pBVar37,0xb,0,(void *)0x0);
                ASN1_TYPE_free(a_00);
                iVar28 = BIO_read(pBVar37,local_530,0x4000);
                if (iVar28 < 0) goto LAB_0010641f;
                iVar28 = ldap_ExtendedResponse_parse(local_530,(long)iVar28);
                if (iVar28 < 0) {
                  BIO_printf(_bio_err,"ldap_ExtendedResponse_parse failed\n");
                }
                else {
                  if (iVar28 == 0) goto switchD_0010544d_default;
                  BIO_printf(_bio_err,"STARTTLS failed, LDAP Result Code: %i\n",iVar28);
                }
                break;
              }
              NCONF_free(conf);
              BIO_printf(_bio_err,"ASN1_generate_nconf failed\n");
            }
          }
        }
        goto LAB_00105e76;
      }
LAB_00105d4c:
      uVar62 = 1;
LAB_00105a37:
      if (bVar9) {
        print_stuff(bio_c_out,to,local_438);
      }
      do_ssl_shutdown(to);
      iVar28 = SSL_get_fd(to);
      shutdown(iVar28,1);
      local_278.tv_usec = _UNK_0010de08;
      local_278.tv_sec = __LC249;
      do {
        pfVar58 = &local_208;
        for (lVar54 = 0x20; lVar54 != 0; lVar54 = lVar54 + -1) {
          *(undefined4 *)pfVar58->fds_bits = 0;
          pfVar58 = (fd_set *)((long)pfVar58 + (ulong)bVar63 * -8 + 4);
        }
        lVar54 = __fdelt_chk((long)(int)local_2f0);
        local_208.fds_bits[lVar54] = local_208.fds_bits[lVar54] | 1L << ((byte)local_2f0 & 0x3f);
        iVar28 = select(local_2f0 + 1,&local_208,(fd_set *)0x0,(fd_set *)0x0,&local_278);
      } while ((0 < iVar28) && (iVar28 = BIO_read(pBVar37,local_528,0x4000), 0 < iVar28));
      iVar28 = SSL_get_fd(to);
      BIO_closesocket(iVar28);
      local_4c8 = uVar62;
LAB_00105afb:
      if (to != (SSL *)0x0) {
        if (bVar23) {
          print_stuff(bio_c_out,to,1);
        }
        SSL_free(to);
      }
      goto LAB_00102a5f;
    }
    if (iVar55 == 1) {
      if (iVar27 - 2U < 5) {
        pcVar57 = "%s: Intermixed protocol flags (unix and internet domains)\n";
        pbVar38 = prog;
        goto LAB_00102d81;
      }
    }
    else if ((iVar55 == 0) && (iVar27 == 8)) {
      BIO_printf(_bio_err,"%s: Intermixed protocol flags (internet and unix domains)\n",prog);
      goto LAB_00102ce0;
    }
    uVar62 = uVar1;
    if ((((iVar27 != 0x33) && (iVar27 != 0x38)) && (2 < iVar27 - 0x35U)) && (3 < iVar27 - 0x39U)) {
      if (4 < iVar27 - 0xbb9U) goto LAB_0010292c;
      iVar59 = iVar59 + 1;
      if ((iVar59 != 0) && (iVar53 == 1)) {
LAB_00102988:
        BIO_printf(_bio_err,"Cannot supply both a protocol flag and \'-no_<prot>\'\n");
        goto LAB_00102ce0;
      }
switchD_00102cc5_caseD_bb9:
      if ((local_508 != 0) || (local_508 = OPENSSL_sk_new_null(), local_508 != 0)) {
        uVar34 = opt_flag();
        iVar27 = OPENSSL_sk_push(local_508,uVar34);
        if (iVar27 != 0) {
          opt_arg();
          iVar27 = OPENSSL_sk_push(local_508);
joined_r0x001045f4:
          if (iVar27 != 0) goto switchD_0010295b_caseD_0;
        }
      }
LAB_0010290b:
      pcVar57 = "%s: Memory allocation failure\n";
      pbVar38 = prog;
      goto LAB_00102d81;
    }
    iVar53 = iVar53 + 1;
    if (1 < iVar53) {
      BIO_printf(_bio_err,"Cannot supply multiple protocol flags\n");
      goto LAB_00102ce0;
    }
LAB_0010292c:
    if ((iVar53 == 1) && (iVar59 != 0)) goto LAB_00102988;
    if (iVar27 < 0x66) {
      if (-2 < iVar27) goto code_r0x00102954;
      goto switchD_0010295b_caseD_0;
    }
    if (0xbed < iVar27) goto switchD_0010295b_caseD_0;
    if (3000 < iVar27) {
      switch(iVar27) {
      case 0xbb9:
      case 0xbba:
      case 0xbbb:
      case 0xbbc:
      case 0xbbd:
      case 0xbbe:
      case 0xbbf:
      case 0xbc0:
      case 0xbc1:
      case 0xbc2:
      case 0xbc3:
      case 0xbc4:
      case 0xbc5:
      case 0xbc6:
      case 0xbc7:
      case 0xbc8:
      case 0xbc9:
      case 0xbca:
      case 0xbcb:
      case 0xbcc:
      case 0xbcd:
      case 0xbce:
      case 0xbcf:
      case 0xbd0:
      case 0xbd1:
      case 0xbd2:
      case 0xbd3:
      case 0xbd4:
      case 0xbd5:
      case 0xbd6:
      case 0xbd7:
      case 0xbd8:
      case 0xbd9:
      case 0xbda:
      case 0xbdb:
      case 0xbdc:
        goto switchD_00102cc5_caseD_bb9;
      case 0xbde:
        bVar8 = true;
        break;
      case 0xbdf:
        bVar14 = true;
        break;
      case 0xbe0:
        local_4d8._0_4_ = 0;
        break;
      case 0xbe1:
        local_4d8._0_4_ = 2;
        break;
      case 0xbe2:
        local_448 = opt_arg();
        break;
      case 0xbe3:
        local_400 = opt_arg();
        break;
      case 0xbe4:
        local_350 = opt_arg();
        break;
      case 0xbe5:
        local_488 = opt_arg();
        break;
      case 0xbe6:
        bVar11 = true;
        break;
      case 0xbe7:
        bVar11 = false;
        break;
      case 0xbe8:
        local_420 = opt_arg();
        break;
      case 0xbe9:
        if ((local_518 != 0) || (local_518 = OPENSSL_sk_new_null(), local_518 != 0)) {
          opt_arg();
          iVar27 = OPENSSL_sk_push(local_518);
          goto joined_r0x001045f4;
        }
        goto LAB_0010290b;
      case 0xbea:
        bVar15 = true;
        break;
      case 0xbeb:
        bVar12 = true;
        break;
      case 0xbec:
        enable_server_rpk = 1;
        break;
      case 0xbed:
        bVar13 = true;
      }
      goto switchD_0010295b_caseD_0;
    }
    if (0x644 < iVar27) {
      if (iVar27 - 0x7d1U < 0x1e) {
        iVar27 = opt_verify();
        if (iVar27 == 0) goto LAB_00102ce0;
        local_370 = local_370 + 1;
      }
      goto switchD_0010295b_caseD_0;
    }
    if (iVar27 < 0x641) {
      if (0x3ee < iVar27) {
        if (iVar27 - 0x5ddU < 2) {
          iVar27 = opt_rand();
          goto joined_r0x00102df4;
        }
        goto switchD_0010295b_caseD_0;
      }
      if (iVar27 < 0x3e9) goto switchD_0010295b_caseD_0;
      iVar27 = args_excert();
    }
    else {
      iVar27 = opt_provider();
    }
    goto joined_r0x00102df4;
  }
  uVar34 = opt_getprog();
  pkey = (EVP_PKEY *)0x0;
  BIO_printf(_bio_err,"%s: out of memory\n",uVar34);
  local_500 = (char *)0x0;
  local_520 = (char *)0x0;
  local_4f8 = (BIO *)0x0;
  local_4d0 = (char *)0x0;
  local_4f0 = (char *)0x0;
  local_4c8 = 1;
  local_4d8 = (char *)0x0;
  local_4e0 = (char *)0x0;
  local_530 = (byte *)0x0;
  local_528 = (byte *)0x0;
  local_510 = 0;
  local_548 = 0;
  local_518 = 0;
  local_508 = 0;
  local_540 = (X509 *)0x0;
  local_550 = (SSL_CTX *)0x0;
  goto LAB_00102a5f;
code_r0x00102954:
  switch(iVar27) {
  default:
    goto switchD_0010295b_caseD_0;
  case 1:
    opt_help(s_client_options);
    local_4c8 = 0;
    goto LAB_00102cf7;
  case 2:
    iVar28 = iVar28 + 1;
    iVar55 = 0;
    local_48c = iVar27;
    goto switchD_0010295b_caseD_0;
  case 3:
    iVar28 = iVar28 + 1;
    iVar55 = 0;
    local_48c = 10;
    goto switchD_0010295b_caseD_0;
  case 4:
    pcVar57 = (char *)opt_arg();
    iVar55 = 0;
    CRYPTO_free(local_2c8);
    local_2c8 = (char *)0x0;
    if (pcVar57 != (char *)0x0) {
      local_2c8 = CRYPTO_strdup(pcVar57,"apps/s_client.c",0x32a);
    }
    goto switchD_0010295b_caseD_0;
  case 5:
    pcVar57 = (char *)opt_arg();
    iVar55 = 0;
    CRYPTO_free(local_2c0);
    local_2c0 = (char *)0x0;
    if (pcVar57 != (char *)0x0) {
      local_2c0 = CRYPTO_strdup(pcVar57,"apps/s_client.c",0x32a);
    }
    goto switchD_0010295b_caseD_0;
  case 6:
    pcVar57 = (char *)opt_arg();
    CRYPTO_free(local_520);
    if (pcVar57 == (char *)0x0) {
      local_520 = (char *)0x0;
      iVar55 = 0;
    }
    else {
      iVar55 = 0;
      local_520 = CRYPTO_strdup(pcVar57,"apps/s_client.c",0x32a);
    }
    goto switchD_0010295b_caseD_0;
  case 7:
    pcVar57 = (char *)opt_arg();
    CRYPTO_free(local_500);
    local_500 = (char *)0x0;
    if (pcVar57 != (char *)0x0) {
      local_500 = CRYPTO_strdup(pcVar57,"apps/s_client.c",0x32a);
    }
    goto switchD_0010295b_caseD_0;
  case 8:
    pcVar57 = (char *)opt_arg();
    CRYPTO_free(local_2c8);
    local_2c8 = (char *)0x0;
    if (pcVar57 == (char *)0x0) {
      local_48c = 1;
      iVar55 = 1;
    }
    else {
      iVar55 = 1;
      local_2c8 = CRYPTO_strdup(pcVar57,"apps/s_client.c",0x32a);
      local_48c = 1;
    }
    goto switchD_0010295b_caseD_0;
  case 9:
  case 0x5c:
    local_480 = (char *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 10:
    pcVar57 = (char *)opt_arg();
    uVar50 = strtol(pcVar57,(char **)0x0,10);
    iVar31 = 1;
    _verify_args = (undefined4)uVar50;
    if (c_quiet == 0) {
      BIO_printf(_bio_err,"verify depth is %d\n",uVar50 & 0xffffffff);
    }
    goto switchD_0010295b_caseD_0;
  case 0xb:
    uVar34 = opt_arg();
    iVar27 = set_nameopt(uVar34);
    goto joined_r0x00102df4;
  case 0xc:
    local_540 = (X509 *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0xd:
    local_548 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0xe:
    local_32c = 1;
    goto switchD_0010295b_caseD_0;
  case 0xf:
    sess_out = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x10:
    local_440 = (byte *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x11:
    uVar34 = opt_arg();
    iVar27 = opt_format(uVar34,0xffe,&local_2f8);
    break;
  case 0x12:
    uVar34 = opt_arg();
    iVar27 = opt_format(uVar34,6,&local_2e8);
    break;
  case 0x13:
    _DAT_0010f574 = 1;
    iVar31 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x14:
    _DAT_0010f56c = 1;
    goto switchD_0010295b_caseD_0;
  case 0x15:
    c_quiet = 1;
    _DAT_0010f56c = 1;
    bVar19 = true;
    goto switchD_0010295b_caseD_0;
  case 0x16:
    bVar23 = true;
    goto switchD_0010295b_caseD_0;
  case 0x17:
    bVar20 = true;
    goto switchD_0010295b_caseD_0;
  case 0x18:
    bVar21 = true;
    goto switchD_0010295b_caseD_0;
  case 0x19:
    c_quiet = 1;
    bVar22 = true;
    goto switchD_0010295b_caseD_0;
  case 0x1a:
    local_3ec = 1;
    goto switchD_0010295b_caseD_0;
  case 0x1b:
    uVar34 = opt_arg();
    local_450 = (ENGINE *)setup_engine_methods(uVar34,0xffffffff,0);
    if (local_450 == (ENGINE *)0x0) {
      BIO_printf(_bio_err,"Error getting client auth engine\n");
      goto switchD_0010295b_caseD_ffffffff;
    }
    goto switchD_0010295b_caseD_0;
  case 0x1c:
    bVar22 = true;
    goto switchD_0010295b_caseD_0;
  case 0x1d:
    bVar22 = false;
    goto switchD_0010295b_caseD_0;
  case 0x1e:
    c_debug = 1;
    goto switchD_0010295b_caseD_0;
  case 0x1f:
    bVar17 = true;
    goto switchD_0010295b_caseD_0;
  case 0x20:
    bVar18 = true;
    goto switchD_0010295b_caseD_0;
  case 0x22:
    local_474 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x23:
    pcVar57 = (char *)opt_arg();
    local_4f8 = BIO_new_file(pcVar57,"w");
    if (local_4f8 == (BIO *)0x0) {
      uVar34 = opt_arg();
      pkey = (EVP_PKEY *)0x0;
      BIO_printf(_bio_err,"Error writing file %s\n",uVar34);
      local_4c8 = 1;
      local_4d0 = (char *)0x0;
      local_4d8 = (char *)0x0;
      local_4e0 = (char *)0x0;
      local_548 = 0;
      local_540 = (X509 *)0x0;
      local_550 = (SSL_CTX *)0x0;
      goto LAB_00102a5f;
    }
    goto switchD_0010295b_caseD_0;
  case 0x24:
    uVar34 = opt_arg();
    local_4f0 = (char *)setup_engine_methods(uVar34,0xffffffff,1);
    goto switchD_0010295b_caseD_0;
  case 0x25:
    local_474 = 2;
    goto switchD_0010295b_caseD_0;
  case 0x26:
    local_468 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x27:
    local_468 = 2;
    goto switchD_0010295b_caseD_0;
  case 0x28:
    c_showcerts = 1;
    goto switchD_0010295b_caseD_0;
  case 0x29:
    local_3f0 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x2a:
    bVar10 = true;
    goto switchD_0010295b_caseD_0;
  case 0x2b:
    psk_identity = (undefined *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x2c:
    pbVar38 = (byte *)opt_arg();
    bVar2 = *pbVar38;
    _psk_key = pbVar38;
    if (bVar2 != 0) {
      ppuVar39 = __ctype_b_loc();
      pbVar40 = pbVar38;
      do {
        if ((*(byte *)((long)*ppuVar39 + (ulong)bVar2 * 2 + 1) & 0x10) == 0) {
          pcVar57 = "Not a hex number \'%s\'\n";
          goto LAB_00102d81;
        }
        bVar2 = pbVar40[1];
        pbVar40 = pbVar40 + 1;
      } while (bVar2 != 0);
    }
    goto switchD_0010295b_caseD_0;
  case 0x2d:
    local_470 = (byte *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x2e:
    uVar34 = opt_arg();
    local_258._8_8_ = uVar34;
    uVar62 = 0x301;
    if (0x300 < uVar1) {
      uVar62 = uVar1;
    }
    goto switchD_0010295b_caseD_0;
  case 0x2f:
    local_398 = opt_arg();
    uVar62 = 0x301;
    if (0x300 < uVar1) {
      uVar62 = uVar1;
    }
    goto switchD_0010295b_caseD_0;
  case 0x30:
    pcVar57 = (char *)opt_arg();
    uVar50 = strtol(pcVar57,(char **)0x0,10);
    uStack_240 = CONCAT44((int)uVar50,(undefined4)uStack_240);
    BIO_printf(_bio_err,"SRP minimal length for N is %d\n",uVar50 & 0xffffffff);
    uVar62 = 0x301;
    if (0x300 < uVar1) {
      uVar62 = uVar1;
    }
    goto switchD_0010295b_caseD_0;
  case 0x31:
    local_3ac = 1;
    uVar62 = 0x301;
    if (0x300 < uVar1) {
      uVar62 = uVar1;
    }
    goto switchD_0010295b_caseD_0;
  case 0x32:
    uStack_240 = CONCAT44(uStack_240._4_4_,1);
    uVar62 = 0x301;
    if (0x300 < uVar1) {
      uVar62 = uVar1;
    }
    goto switchD_0010295b_caseD_0;
  case 0x33:
    local_4c8 = 0;
    local_4a8 = 0;
    iVar30 = 0x300;
    local_4a4 = 1;
    uVar62 = 0x300;
    goto switchD_0010295b_caseD_0;
  case 0x34:
    local_3d8 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x35:
    local_4c8 = 0;
    local_4a8 = 0;
    iVar30 = 0x304;
    local_4a4 = 1;
    uVar62 = 0x304;
    goto switchD_0010295b_caseD_0;
  case 0x36:
    local_4c8 = 0;
    local_4a8 = 0;
    iVar30 = 0x303;
    local_4a4 = 1;
    uVar62 = 0x303;
    goto switchD_0010295b_caseD_0;
  case 0x37:
    local_4c8 = 0;
    local_4a8 = 0;
    iVar30 = 0x302;
    local_4a4 = 1;
    uVar62 = 0x302;
    goto switchD_0010295b_caseD_0;
  case 0x38:
    local_4c8 = 0;
    local_4a8 = 0;
    iVar30 = 0x301;
    local_4a4 = 1;
    uVar62 = 0x301;
    goto switchD_0010295b_caseD_0;
  case 0x39:
    local_550 = (SSL_CTX *)DTLS_client_method();
    local_4c8 = 0;
    local_4a8 = 1;
    local_4a4 = 2;
    goto switchD_0010295b_caseD_0;
  case 0x3a:
    local_550 = (SSL_CTX *)DTLS_client_method();
    local_4c8 = 0;
    local_4a8 = 1;
    iVar30 = 0xfeff;
    local_4a4 = 2;
    uVar62 = 0xfeff;
    goto switchD_0010295b_caseD_0;
  case 0x3b:
    local_550 = (SSL_CTX *)DTLS_client_method();
    local_4c8 = 0;
    local_4a8 = 1;
    iVar30 = 0xfefd;
    local_4a4 = 2;
    uVar62 = 0xfefd;
    goto switchD_0010295b_caseD_0;
  case 0x3c:
    local_550 = (SSL_CTX *)OSSL_QUIC_client_method();
    local_4c8 = 1;
    local_4a8 = 0;
    iVar30 = 0;
    local_4a4 = 2;
    uVar62 = 0;
    goto switchD_0010295b_caseD_0;
  case 0x3e:
    bVar16 = true;
    goto switchD_0010295b_caseD_0;
  case 0x3f:
    pcVar57 = (char *)opt_arg();
    local_410 = strtol(pcVar57,(char **)0x0,10);
    goto switchD_0010295b_caseD_0;
  case 0x40:
    uVar34 = opt_arg();
    iVar27 = opt_format(uVar34,0xffe,&local_2f4);
    break;
  case 0x41:
    local_338 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x42:
    local_408 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x43:
    local_3f8 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x44:
    local_434 = 5;
    goto switchD_0010295b_caseD_0;
  case 0x45:
    goto switchD_0010295b_caseD_0;
  case 0x46:
    local_418 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x47:
    local_3e0 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x48:
    local_368 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x49:
    local_3c8 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x4a:
    local_348 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x4b:
    local_3a0 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x4c:
    local_360 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x4d:
    local_330 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x4e:
    local_378 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x4f:
    local_3a8 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x50:
    local_358 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x51:
    local_3c4 = 1;
    goto switchD_0010295b_caseD_0;
  case 0x52:
    local_340 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x53:
    local_390 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x54:
    pcVar57 = (char *)opt_arg();
    sVar49 = strlen(pcVar57);
    iVar27 = (int)sVar49;
    if (-1 < iVar27) {
      lVar54 = 0;
      iVar29 = 0;
      do {
        iVar61 = (int)lVar54;
        if ((iVar27 == iVar61) || (pcVar57[lVar54] == ',')) {
          lVar41 = strtol(pcVar57 + iVar29,(char **)0x0,10);
          lVar42 = (long)local_458;
          local_458 = local_458 + 1;
          auStack_108[lVar42] = (ushort)lVar41;
          if (local_458 == 100) break;
          iVar29 = iVar61 + 1;
        }
        lVar54 = lVar54 + 1;
      } while (iVar61 + 1 <= iVar27);
    }
    goto switchD_0010295b_caseD_0;
  case 0x55:
    uVar34 = opt_arg();
    iVar27 = opt_pair(uVar34,services,&local_2ec);
joined_r0x00102df4:
    if (iVar27 == 0) goto LAB_00102ce0;
    goto switchD_0010295b_caseD_0;
  case 0x56:
    local_498 = (char *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x57:
    bVar9 = true;
    goto switchD_0010295b_caseD_0;
  case 0x58:
    bVar26 = true;
    goto switchD_0010295b_caseD_0;
  case 0x59:
    local_3b8 = (char *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x5a:
    keymatexportlabel = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x5b:
    pcVar57 = (char *)opt_arg();
    lVar54 = strtol(pcVar57,(char **)0x0,10);
    keymatexportlen = (undefined4)lVar54;
    goto switchD_0010295b_caseD_0;
  case 0x5d:
    pcVar57 = (char *)opt_arg();
    lVar54 = strtol(pcVar57,(char **)0x0,10);
    iVar27 = (int)lVar54;
    if (iVar27 != 0x800) {
      if (iVar27 < 0x801) {
        if (iVar27 == 0x200) {
          bVar25 = 1;
          goto switchD_0010295b_caseD_0;
        }
        if (iVar27 == 0x400) {
          bVar25 = 2;
          goto switchD_0010295b_caseD_0;
        }
      }
      else if (iVar27 == 0x1000) {
        bVar25 = 4;
        goto switchD_0010295b_caseD_0;
      }
      BIO_printf(_bio_err,"%s: Max Fragment Len %u is out of permitted values",prog);
      goto switchD_0010295b_caseD_ffffffff;
    }
    bVar25 = 3;
    goto switchD_0010295b_caseD_0;
  case 0x5e:
    pcVar57 = (char *)opt_arg();
    lVar54 = strtol(pcVar57,(char **)0x0,10);
    local_430 = (uint)lVar54;
    goto switchD_0010295b_caseD_0;
  case 0x5f:
    pcVar57 = (char *)opt_arg();
    lVar54 = strtol(pcVar57,(char **)0x0,10);
    local_42c = (uint)lVar54;
    goto switchD_0010295b_caseD_0;
  case 0x60:
    pcVar57 = (char *)opt_arg();
    lVar54 = strtol(pcVar57,(char **)0x0,10);
    local_438 = (uint)lVar54;
    goto switchD_0010295b_caseD_0;
  case 0x61:
    pcVar57 = (char *)opt_arg();
    lVar54 = strtol(pcVar57,(char **)0x0,10);
    local_37c = (int)lVar54;
    goto switchD_0010295b_caseD_0;
  case 0x62:
    local_320 = opt_arg();
    goto switchD_0010295b_caseD_0;
  case 99:
    local_3d0 = (char *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 100:
    local_3e8 = (char *)opt_arg();
    goto switchD_0010295b_caseD_0;
  case 0x65:
    local_478 = 1;
    goto switchD_0010295b_caseD_0;
  case -1:
    goto switchD_0010295b_caseD_ffffffff;
  }
  if (iVar27 == 0) goto switchD_0010295b_caseD_ffffffff;
  goto switchD_0010295b_caseD_0;
LAB_0010649a:
  if (iVar31 != 9) {
LAB_00106375:
    BIO_printf(_bio_err,"Error writing early data\n");
    BIO_free(pBVar47);
    ERR_print_errors(_bio_err);
    goto LAB_00105d4c;
  }
  goto LAB_0010633d;
LAB_001060cb:
  local_434 = local_434 + -1;
  BIO_printf(bio_c_out,"drop connection and then reconnect\n");
  do_ssl_shutdown(to);
  SSL_set_connect_state(to);
  iVar30 = SSL_get_fd(to);
  BIO_closesocket(iVar30);
  bVar9 = false;
  goto LAB_001050b4;
switchD_0010295b_caseD_ffffffff:
  pcVar57 = "%s: Use -help for summary.\n";
  pbVar38 = prog;
LAB_00102d81:
  BIO_printf(_bio_err,pcVar57,pbVar38);
LAB_00102ce0:
  local_4c8 = 1;
LAB_00102cf7:
  local_4d0 = (char *)0x0;
  local_4d8 = (char *)0x0;
  pkey = (EVP_PKEY *)0x0;
  local_4e0 = (char *)0x0;
  local_548 = 0;
  local_540 = (X509 *)0x0;
  local_550 = (SSL_CTX *)0x0;
LAB_00102a5f:
  SSL_SESSION_free(psksess);
  CRYPTO_free(next_proto);
  SSL_CTX_free(local_550);
  set_keylog_file(0,0);
  X509_free(local_540);
  OPENSSL_sk_pop_free(local_548,X509_CRL_free);
  EVP_PKEY_free(pkey);
  OSSL_STACK_OF_X509_free(local_2e0);
  CRYPTO_free(local_2a8);
  CRYPTO_free((void *)local_258._0_8_);
  CRYPTO_free(local_4d0);
  BIO_ADDR_free(local_290);
  CRYPTO_free(local_520);
  CRYPTO_free(local_500);
  CRYPTO_free(local_2b8);
  CRYPTO_free(local_2b0);
  CRYPTO_free(local_2c8);
  CRYPTO_free(local_2c0);
  CRYPTO_free(local_4e0);
  CRYPTO_free(local_4d8);
  X509_VERIFY_PARAM_free(vpm);
  ssl_excert_free(local_2d8);
  OPENSSL_sk_free(local_508);
  OPENSSL_sk_free(local_518);
  SSL_CONF_CTX_free(lVar52);
  CRYPTO_clear_free(local_510,0x4000,"apps/s_client.c",0xd18);
  CRYPTO_clear_free(local_528,0x4000,"apps/s_client.c",0xd19);
  CRYPTO_clear_free(local_530,0x4000,"apps/s_client.c",0xd1a);
  clear_free(local_2d0);
  release_engine(local_4f0);
  BIO_free(bio_c_out);
  bio_c_out = (BIO *)0x0;
  BIO_free(local_4f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_4c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


