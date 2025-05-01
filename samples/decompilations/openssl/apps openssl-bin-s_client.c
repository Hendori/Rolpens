
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



undefined8
next_proto_cb(undefined8 param_1,uchar **param_2,uchar *param_3,byte *param_4,uint param_5,
             undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  
  if (c_quiet == 0) {
    uVar2 = 0;
    BIO_printf(bio_c_out,"Protocols advertised by server: ");
    if (param_5 != 0) {
      do {
        if (uVar2 == 0) {
          BIO_write(bio_c_out,param_4 + 1,(uint)*param_4);
          uVar2 = *param_4 + 1;
          if (param_5 <= uVar2) break;
        }
        BIO_write(bio_c_out,&_LC7,2);
        BIO_write(bio_c_out,param_4 + (uVar2 + 1),(uint)param_4[uVar2]);
        uVar2 = uVar2 + 1 + (uint)param_4[uVar2];
      } while (uVar2 < param_5);
    }
    BIO_write(bio_c_out,&_LC6,1);
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
        goto LAB_001002da;
      }
      BIO_printf(_bio_err,"psk buffer of callback is too small (%d) for key (%ld)\n",(ulong)param_6)
      ;
      CRYPTO_free(__src);
    }
  }
  local_38 = 0;
LAB_001002da:
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
          goto LAB_001004b1;
        }
        CRYPTO_free(ptr);
        goto LAB_001004fb;
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
LAB_001004b1:
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
        goto LAB_00100505;
      }
    }
LAB_001004fb:
    SSL_SESSION_free(ses);
  }
  uVar4 = 0;
LAB_00100505:
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
LAB_001007ea:
          uVar8 = (ulong)pbVar10[1];
          __s = pbVar10 + 1;
          if (pbVar10[1] == 0) goto LAB_00100830;
        }
        uVar3 = OPENSSL_hexchar2int();
        if ((int)uVar3 < 0) {
          CRYPTO_free(ptr);
          return 0;
        }
        if (!bVar2) {
          uVar7 = (uVar3 | uVar7) << 4;
          bVar2 = true;
          goto LAB_001007ea;
        }
        *puVar9 = (char)(uVar3 | uVar7);
        bVar2 = false;
        puVar9 = puVar9 + 1;
        bVar1 = pbVar10[1];
        uVar8 = (ulong)bVar1;
        uVar7 = 0;
        __s = pbVar10 + 1;
      } while (bVar1 != 0);
LAB_00100830:
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
  int iVar19;
  long lVar20;
  char *pcVar21;
  uint uVar22;
  long in_FS_OFFSET;
  undefined8 uVar23;
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
    pcVar21 = "---\nReused, ";
    if (iVar3 == 0) {
      pcVar21 = "---\nNew, ";
    }
    BIO_printf(param_1,pcVar21);
    pSVar6 = SSL_get_current_cipher(param_2);
    SSL_CIPHER_get_name(pSVar6);
    pcVar21 = SSL_CIPHER_get_version(pSVar6);
    BIO_printf(param_1,"%s, Cipher is %s\n",pcVar21);
    pcVar21 = SSL_get_version(param_2);
    BIO_printf(param_1,"Protocol: %s\n",pcVar21);
    goto LAB_00100982;
  }
  psVar9 = SSL_get_peer_cert_chain(param_2);
  if (psVar9 == (stack_st_X509 *)0x0) {
    BIO_printf(param_1,"---\n");
    pXVar10 = (X509 *)SSL_get0_peer_certificate(param_2);
    if (pXVar10 != (X509 *)0x0) {
      BIO_printf(param_1,"Server certificate\n");
LAB_00100f13:
      PEM_write_bio_X509(param_1,pXVar10);
      goto LAB_00100f1e;
    }
LAB_0010124a:
    pXVar10 = (X509 *)0x0;
    BIO_printf(param_1,"no peer certificate available\n");
  }
  else {
    BIO_printf(param_1,"---\nCertificate chain\n");
    for (uVar22 = 0; iVar3 = OPENSSL_sk_num(psVar9), (int)uVar22 < iVar3; uVar22 = uVar22 + 1) {
      pXVar10 = (X509 *)OPENSSL_sk_value(psVar9,uVar22);
      BIO_printf(param_1,"%2d s:",(ulong)uVar22);
      uVar11 = get_nameopt();
      pXVar12 = X509_get_subject_name(pXVar10);
      X509_NAME_print_ex(param_1,pXVar12,0,uVar11);
      BIO_puts(param_1,"\n");
      BIO_printf(param_1,"   i:");
      uVar11 = get_nameopt();
      pXVar12 = X509_get_issuer_name(pXVar10);
      X509_NAME_print_ex(param_1,pXVar12,0,uVar11);
      BIO_puts(param_1,"\n");
      lVar20 = X509_get0_pubkey(pXVar10);
      if (lVar20 != 0) {
        pcVar21 = (char *)EVP_PKEY_get0_type_name(lVar20);
        if (pcVar21 == (char *)0x0) {
          iVar3 = EVP_PKEY_get_base_id(lVar20);
          pcVar21 = OBJ_nid2ln(iVar3);
        }
        local_90 = &local_48;
        iVar3 = EVP_PKEY_get_id(lVar20);
        if ((iVar3 == 0x198) && (iVar3 = EVP_PKEY_get_group_name(lVar20,0,0,local_90), iVar3 != 0))
        {
          local_48 = local_48 + 1;
          ptr = CRYPTO_malloc((int)local_48,"apps/s_client.c",0xd2a);
          iVar3 = EVP_PKEY_get_group_name(lVar20,ptr,local_48,0);
          if (iVar3 == 0) {
            CRYPTO_free(ptr);
            goto LAB_00100e09;
          }
          if (ptr == (void *)0x0) goto LAB_00100e09;
          iVar3 = X509_get_signature_nid(pXVar10);
          pcVar13 = OBJ_nid2ln(iVar3);
          BIO_printf(param_1,"   a:PKEY: %s, (%s); sigalg: %s\n",pcVar21,ptr,pcVar13);
        }
        else {
LAB_00100e09:
          iVar3 = X509_get_signature_nid(pXVar10);
          pcVar13 = OBJ_nid2ln(iVar3);
          uVar4 = EVP_PKEY_get_bits(lVar20);
          BIO_printf(param_1,"   a:PKEY: %s, %d (bit); sigalg: %s\n",pcVar21,(ulong)uVar4,pcVar13);
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
    if (pXVar10 == (X509 *)0x0) goto LAB_0010124a;
    BIO_printf(param_1,"Server certificate\n");
    if (c_showcerts == 0) goto LAB_00100f13;
LAB_00100f1e:
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
LAB_00100f8f:
    pBVar15 = SSL_get_wbio(param_2);
    uVar11 = BIO_number_written(pBVar15);
    pBVar15 = SSL_get_rbio(param_2);
    uVar16 = BIO_number_read(pBVar15);
    BIO_printf(param_1,"---\nSSL handshake has read %ju bytes and written %ju bytes\n",uVar16,uVar11
              );
    print_verify_detail(param_2,param_1);
    iVar3 = SSL_session_reused(param_2);
    pcVar21 = "---\nReused, ";
    if (iVar3 == 0) goto LAB_00100fe7;
LAB_00100fee:
    BIO_printf(param_1,pcVar21);
    pSVar6 = SSL_get_current_cipher(param_2);
    SSL_CIPHER_get_name(pSVar6);
    pcVar21 = SSL_CIPHER_get_version(pSVar6);
    BIO_printf(param_1,"%s, Cipher is %s\n",pcVar21);
    pcVar21 = SSL_get_version(param_2);
    BIO_printf(param_1,"Protocol: %s\n",pcVar21);
    if (pXVar10 == (X509 *)0x0) goto LAB_00100982;
  }
  else {
    lVar20 = SSL_get0_peer_scts(param_2);
    if (lVar20 == 0) {
      BIO_printf(param_1,"---\nSCTs present (%i)\n",0);
    }
    else {
      uVar22 = OPENSSL_sk_num(lVar20);
      BIO_printf(param_1,"---\nSCTs present (%i)\n",(ulong)uVar22);
      if ((int)uVar22 < 1) goto LAB_00100f8f;
      uVar23 = SSL_CTX_get0_ctlog_store(pSVar5);
      BIO_printf(param_1,"---\n");
      if ((int)(uVar22 - 1) < 1) {
        uVar17 = OPENSSL_sk_value(lVar20,0);
        uVar18 = SCT_validation_status_string(uVar17);
        BIO_printf(param_1,"SCT validation status: %s\n",uVar18);
        SCT_print(uVar17,param_1,0,uVar23);
      }
      else {
        iVar3 = 0;
        do {
          iVar19 = iVar3 + 1;
          uVar17 = OPENSSL_sk_value(lVar20,iVar3);
          uVar18 = SCT_validation_status_string(uVar17);
          BIO_printf(param_1,"SCT validation status: %s\n",uVar18);
          SCT_print(uVar17,param_1,0,uVar23);
          BIO_printf(param_1,"\n---\n");
          iVar3 = iVar19;
        } while (iVar19 < (int)(uVar22 - 1));
        for (; iVar19 < (int)uVar22; iVar19 = iVar19 + 1) {
          uVar17 = OPENSSL_sk_value(lVar20,iVar19);
          uVar18 = SCT_validation_status_string(uVar17);
          BIO_printf(param_1,"SCT validation status: %s\n",uVar18);
          SCT_print(uVar17,param_1,0,uVar23);
        }
      }
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
LAB_00100fe7:
      pcVar21 = "---\nNew, ";
      goto LAB_00100fee;
    }
    BIO_printf(param_1,"---\nReused, ");
    pSVar6 = SSL_get_current_cipher(param_2);
    SSL_CIPHER_get_name(pSVar6);
    pcVar21 = SSL_CIPHER_get_version(pSVar6);
    BIO_printf(param_1,"%s, Cipher is %s\n",pcVar21);
    pcVar21 = SSL_get_version(param_2);
    BIO_printf(param_1,"Protocol: %s\n",pcVar21);
  }
  uVar23 = X509_get0_pubkey(pXVar10);
  uVar22 = EVP_PKEY_get_bits(uVar23);
  BIO_printf(param_1,"Server public key is %d bit\n",(ulong)uVar22);
LAB_00100982:
  local_90 = &local_48;
  ssl_print_secure_renegotiation_notes(param_1,param_2);
  comp = SSL_get_current_compression(param_2);
  comp_00 = SSL_get_current_expansion(param_2);
  pcVar21 = "NONE";
  if (comp != (COMP_METHOD *)0x0) {
    pcVar21 = SSL_COMP_get_name(comp);
  }
  BIO_printf(param_1,"Compression: %s\n",pcVar21);
  pcVar21 = "NONE";
  if (comp_00 != (COMP_METHOD *)0x0) {
    pcVar21 = SSL_COMP_get_name(comp_00);
  }
  BIO_printf(param_1,"Expansion: %s\n",pcVar21);
  if (DAT_001080d0 != 0xffffffff) {
    SSL_get0_next_proto_negotiated(param_2,local_90,&local_4c);
    BIO_printf(param_1,"Next protocol: (%d) ",(ulong)DAT_001080d0);
    BIO_write(param_1,local_48,local_4c);
    BIO_write(param_1,&_LC6,1);
  }
  SSL_get0_alpn_selected(param_2,local_90,&local_4c);
  if (local_4c == 0) {
    BIO_printf(param_1,"No ALPN negotiated\n");
  }
  else {
    BIO_printf(param_1,"ALPN protocol: ");
    BIO_write(param_1,local_48,local_4c);
    BIO_write(param_1,&_LC6,1);
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
    lVar20 = SSL_get_verify_result(param_2);
    X509_verify_cert_error_string(lVar20);
    BIO_printf(param_1,"Verify return code: %ld (%s)\n",lVar20);
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
    pcVar21 = keymatexportlabel;
    llen = strlen(keymatexportlabel);
    uVar23 = 0;
    iVar2 = SSL_export_keying_material
                      (param_2,out,(long)(int)keymatexportlen,pcVar21,llen,(uchar *)0x0,0,0);
    if (iVar2 < 1) {
      BIO_printf(param_1,"    Error\n",uVar23);
    }
    else {
      lVar20 = 0;
      BIO_printf(param_1,"    Keying material: ",uVar23);
      if (0 < (int)keymatexportlen) {
        do {
          pbVar1 = out + lVar20;
          lVar20 = lVar20 + 1;
          BIO_printf(param_1,"%02X",(ulong)*pbVar1);
        } while ((int)lVar20 < (int)keymatexportlen);
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
  *(undefined8 *)(puVar2 + -0x1090) = 0x101759;
  memcpy(puVar2 + -0x1014,param_3,param_4 & 0xffff);
  *(undefined8 *)(puVar2 + -0x1090) = 0x101771;
  BIO_snprintf(puVar2 + -0x1088,100,"SERVERINFO FOR EXTENSION %d",(ulong)param_2);
  *(undefined8 *)(puVar2 + -0x1090) = 0x10178e;
  PEM_write_bio(bio_c_out,puVar2 + -0x1088,"",puVar2 + -0x1018,(param_4 & 0xffff) + 4);
  if (*(long *)(puVar2 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -0x1090) = &UNK_001017b9;
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int user_data_process(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  char *__s;
  
  pcVar8 = (char *)param_1[3];
  pcVar5 = (char *)(param_1[4] + param_1[1]);
  if (pcVar8 == (char *)0x0) {
    *param_2 = 0;
    *param_3 = 0;
    return 3;
  }
  pcVar7 = pcVar8;
  if (*(int *)(param_1 + 5) != 1) {
    if (*(int *)(param_1 + 5) == 2) {
      pcVar5[(long)pcVar8] = '\0';
      pcVar7 = pcVar5;
      __s = pcVar5;
      while( true ) {
        pcVar6 = strchr(pcVar7,0x7b);
        if (__s != pcVar6) break;
        if (__s[1] != '{') {
          pcVar7 = strchr(__s,0x7d);
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
            pcVar8 = strchr(pcVar6,0x3a);
            if (pcVar8 != (char *)0x0) {
              *pcVar8 = '\0';
              pcVar8 = pcVar8 + 1;
            }
            pcVar6 = pcVar6 + 1;
            iVar3 = OPENSSL_strcasecmp(pcVar6,&_LC76);
            if (iVar3 != 0) {
              iVar3 = 1;
              iVar4 = OPENSSL_strcasecmp(pcVar6,&_LC77);
              if (iVar4 != 0) {
                iVar3 = 2;
                iVar4 = OPENSSL_strcasecmp(pcVar6,"reconnect");
                if (iVar4 != 0) {
                  iVar3 = SSL_is_quic(*param_1);
                  if ((iVar3 == 0) || (iVar3 = OPENSSL_strcasecmp(pcVar6,&_LC79), iVar3 != 0)) {
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
              iVar4 = OPENSSL_strcasecmp(pcVar6,"keyup");
              if (iVar4 != 0) goto LAB_00101bf0;
              if (pcVar8 == (char *)0x0) {
                pcVar8 = "req";
              }
              else {
switchD_00101c15_caseD_4:
              }
              iVar3 = OPENSSL_strcasecmp(pcVar8,&_LC67);
              if (iVar3 == 0) {
                iVar3 = 1;
              }
              else {
                iVar3 = OPENSSL_strcasecmp(pcVar8,"noreq");
                if (iVar3 != 0) {
                  BIO_printf(_bio_err,"BAD ARGUMENT (COMMAND IGNORED): %s\n",pcVar8);
                  goto LAB_00101cf0;
                }
              }
              BIO_printf(_bio_err,"KEYUPDATE\n");
              iVar3 = SSL_key_update(*param_1,iVar3);
joined_r0x00101c6b:
              if (iVar3 != 0) {
                iVar3 = 4;
                goto LAB_00101b73;
              }
LAB_00101b4c:
              BIO_printf(_bio_err,"ERROR\n");
              ERR_print_errors(_bio_err);
            }
            else {
              iVar4 = OPENSSL_strcasecmp(pcVar6,"reneg");
              if (iVar4 == 0) {
switchD_00101c15_caseD_3:
                BIO_printf(_bio_err,"RENEGOTIATING\n");
                iVar3 = SSL_renegotiate((SSL *)*param_1);
                goto joined_r0x00101c6b;
              }
LAB_00101bf0:
              if (iVar3 == -1) {
                BIO_printf(_bio_err,"UNRECOGNISED COMMAND (IGNORED): %s\n",pcVar6);
LAB_00101cf0:
                iVar3 = 3;
                goto LAB_00101b73;
              }
              switch(iVar3) {
              default:
                BIO_printf(_bio_err,"Enter text to send to the peer followed by <enter>\n");
                BIO_printf(_bio_err,
                           "To issue a command insert {cmd} or {cmd:arg} anywhere in the text\n");
                BIO_printf(_bio_err,"Entering {{ will send { to the peer\n");
                BIO_printf(_bio_err,"The following commands are available\n");
                BIO_printf(_bio_err,"  {help}: Get this help text\n");
                BIO_printf(_bio_err,"  {quit}: Close the connection to the peer\n");
                BIO_printf(_bio_err,"  {reconnect}: Reconnect to the peer\n");
                iVar3 = SSL_is_quic(*param_1);
                if (iVar3 == 0) {
                  iVar3 = SSL_version((SSL *)*param_1);
                  if (iVar3 == 0x304) {
                    BIO_printf(_bio_err,"  {keyup:req|noreq}: Send a Key Update message\n");
                    BIO_printf(_bio_err,"                     Arguments:\n");
                    BIO_printf(_bio_err,
                               "                     req   = peer update requested (default)\n");
                    BIO_printf(_bio_err,"                     noreq = peer update not requested\n");
                  }
                  else {
                    BIO_printf(_bio_err,"  {reneg}: Attempt to renegotiate\n");
                  }
                }
                else {
                  BIO_printf(_bio_err,
                             "  {fin}: Send FIN on the stream. No further writing is possible\n");
                }
                BIO_printf(_bio_err,"\n");
                goto LAB_00101cf0;
              case 1:
                BIO_printf(_bio_err,"DONE\n");
                break;
              case 2:
                BIO_printf(_bio_err,"RECONNECTING\n");
                do_ssl_shutdown(*param_1);
                SSL_set_connect_state((SSL *)*param_1);
                iVar4 = SSL_get_fd((SSL *)*param_1);
                BIO_closesocket(iVar4);
                goto LAB_00101b73;
              case 3:
                goto switchD_00101c15_caseD_3;
              case 4:
                goto switchD_00101c15_caseD_4;
              case 5:
                iVar3 = SSL_stream_conclude(*param_1,0);
                if (iVar3 != 0) {
                  *(undefined4 *)((long)param_1 + 0x2c) = 1;
                  goto LAB_00101cf0;
                }
                goto LAB_00101b4c;
              }
            }
            iVar3 = 1;
LAB_00101b73:
            lVar9 = (param_1[4] + param_1[3]) - (long)(pcVar7 + (1 - param_1[1]));
            param_1[4] = pcVar7 + (1 - param_1[1]);
            param_1[3] = lVar9;
            if (((pcVar6 == (char *)(param_1[1] + 1)) && (lVar9 == 1)) && (pcVar7[1] == '\n')) {
              *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
            }
            *param_3 = 0;
            *param_2 = 0;
            return iVar3;
          }
          __s[(long)(pcVar5 + ((long)pcVar8 - (long)__s) + -1)] = '\0';
          BIO_printf(_bio_err,"ERROR PROCESSING COMMAND. REST OF LINE IGNORED: %s\n",__s);
          goto LAB_001019b0;
        }
        lVar9 = param_1[4] + _UNK_0010dd98;
        pcVar7 = __s + 2;
        __s = __s + 1;
        param_1[3] = param_1[3] + __LC74;
        param_1[4] = lVar9;
      }
      pcVar7 = pcVar6 + -(long)__s;
      if (pcVar6 == (char *)0x0) {
        pcVar7 = pcVar5 + ((long)pcVar8 - (long)__s);
      }
    }
LAB_00101800:
    if (*(int *)((long)param_1 + 0x2c) == 0) {
      *param_2 = pcVar7;
      lVar9 = param_1[4];
      *param_3 = lVar9;
      lVar2 = param_1[3];
      param_1[3] = lVar2 - (long)pcVar7;
      pcVar8 = pcVar7 + lVar9;
      if (lVar2 - (long)pcVar7 == 0) {
        pcVar8 = (char *)0x0;
      }
      param_1[4] = pcVar8;
      return 4;
    }
LAB_001019b0:
    *param_3 = 0;
    *param_2 = 0;
    *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
    return 3;
  }
  cVar1 = *pcVar5;
  if (cVar1 == 'Q') {
    *param_3 = 0;
    *param_2 = 0;
    *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
    BIO_printf(_bio_err,"DONE\n");
    return 1;
  }
  if (cVar1 < 'R') {
    if (cVar1 == 'C') {
      *param_3 = 0;
      *param_2 = 0;
      *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
      BIO_printf(_bio_err,"RECONNECTING\n");
      do_ssl_shutdown(*param_1);
      SSL_set_connect_state((SSL *)*param_1);
      iVar3 = SSL_get_fd((SSL *)*param_1);
      BIO_closesocket(iVar3);
      return 2;
    }
    if (cVar1 != 'K') goto LAB_00101800;
  }
  else {
    if (cVar1 == 'R') {
      *param_3 = 0;
      *param_2 = 0;
      *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
      BIO_printf(_bio_err,"RENEGOTIATING\n");
      iVar3 = SSL_renegotiate((SSL *)*param_1);
      goto joined_r0x00101a56;
    }
    if (cVar1 != 'k') goto LAB_00101800;
  }
  *param_3 = 0;
  pcVar8 = "noreq";
  *param_2 = 0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  if (*pcVar5 == 'K') {
    pcVar8 = "req";
  }
  iVar3 = OPENSSL_strcasecmp(pcVar8);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = OPENSSL_strcasecmp(pcVar8,"noreq");
    if (iVar3 != 0) {
      return 0;
    }
  }
  BIO_printf(_bio_err,"KEYUPDATE\n");
  iVar3 = SSL_key_update(*param_1,iVar3);
joined_r0x00101a56:
  if (iVar3 != 0) {
    return 4;
  }
  BIO_printf(_bio_err,"ERROR\n");
  ERR_print_errors(_bio_err);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint s_client_main(undefined4 param_1,undefined8 param_2)

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
  char *ptr;
  byte bVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  X509_VERIFY_PARAM *vpm;
  undefined8 uVar32;
  undefined8 *puVar33;
  X509_CRL *a;
  undefined8 uVar34;
  stack_st_X509_NAME *stackCAs;
  BIO *pBVar35;
  void *ptr_00;
  byte *pbVar36;
  ushort **ppuVar37;
  byte *pbVar38;
  long lVar39;
  long lVar40;
  SSL *to;
  SSL_SESSION *pSVar41;
  SSL *pSVar42;
  ulong uVar43;
  uint *puVar44;
  BIO *pBVar45;
  CONF *conf;
  ASN1_TYPE *a_00;
  BIO_METHOD *pBVar46;
  size_t sVar47;
  ulong uVar48;
  long lVar49;
  int iVar50;
  int iVar51;
  uint uVar52;
  undefined **ppuVar53;
  int iVar54;
  uint uVar55;
  char *pcVar56;
  char *pcVar57;
  uint uVar58;
  fd_set *pfVar59;
  undefined8 in_R11;
  int iVar60;
  uint uVar61;
  uint uVar62;
  int iVar63;
  long lVar64;
  long in_FS_OFFSET;
  byte bVar65;
  uint local_564;
  SSL_CTX *local_560;
  long local_558;
  X509 *local_550;
  byte *local_540;
  byte *local_538;
  char *local_530;
  long local_528;
  long local_520;
  long local_518;
  char *local_510;
  BIO *local_508;
  undefined8 local_500;
  EVP_PKEY *local_4f0;
  char *local_4e8;
  char *local_4e0;
  uint local_4bc;
  char *local_4b0;
  int local_4a8;
  int local_4a0;
  uint local_49c;
  long local_498;
  char *local_490;
  byte *local_488;
  int local_480;
  int local_47c;
  int local_474;
  timeval *local_470;
  ENGINE *local_468;
  long local_460;
  byte *local_458;
  uint local_450;
  int local_44c;
  uint local_440;
  uint local_43c;
  uint local_438;
  undefined8 local_430;
  long local_428;
  long local_420;
  long local_418;
  long local_410;
  long local_408;
  uint local_400;
  uint local_3fc;
  char *local_3f8;
  long local_3f0;
  long local_3e8;
  char *local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  char *local_3c8;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  int local_38c;
  undefined8 local_388;
  int local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_330;
  undefined4 local_308;
  undefined4 local_304;
  uint local_300;
  int local_2fc;
  undefined4 local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  undefined8 local_2e8;
  long local_2e0;
  long local_2d8;
  char *local_2d0;
  char *local_2c8;
  void *local_2c0;
  void *local_2b8;
  void *local_2b0;
  long local_2a8;
  long local_2a0;
  void *local_298;
  long local_290;
  byte *local_288;
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
  
  bVar65 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2e8 = 0;
  local_2e0 = 0;
  local_560 = (SSL_CTX *)TLS_client_method();
  pfVar59 = &local_208;
  for (lVar49 = 0x10; lVar49 != 0; lVar49 = lVar49 + -1) {
    pfVar59->fds_bits[0] = 0;
    pfVar59 = (fd_set *)((long)pfVar59 + ((ulong)bVar65 * -2 + 1) * 8);
  }
  local_258 = (undefined1  [16])0x0;
  pfVar59 = &local_188;
  for (lVar49 = 0x10; lVar49 != 0; lVar49 = lVar49 + -1) {
    pfVar59->fds_bits[0] = 0;
    pfVar59 = (fd_set *)((long)pfVar59 + ((ulong)bVar65 * -2 + 1) * 8);
  }
  local_248 = __LC102;
  uStack_240 = _UNK_0010dda8;
  local_2d8 = 0;
  local_2d0 = (char *)0x0;
  local_2c8 = (char *)0x0;
  local_2c0 = (void *)0x0;
  local_2b8 = (void *)0x0;
  local_2b0 = (void *)0x0;
  local_308 = 0;
  local_304 = 0;
  local_300 = 0xffffffff;
  local_2fc = 0;
  local_2f8 = 0;
  local_268 = (BIO *)0x0;
  local_260 = 0;
  local_298 = (void *)0x0;
  c_quiet = 0;
  c_debug = 0;
  c_showcerts = 0;
  local_2c8 = CRYPTO_strdup("4433","apps/s_client.c",0x3d2);
  vpm = X509_VERIFY_PARAM_new();
  lVar49 = SSL_CONF_CTX_new();
  if ((vpm != (X509_VERIFY_PARAM *)0x0 && lVar49 != 0) && (local_2c8 != (char *)0x0)) {
    iVar60 = 0;
    local_520 = app_malloc(0x4000,&_LC105);
    local_538 = (byte *)app_malloc(0x4000,&_LC106);
    local_540 = (byte *)app_malloc(0x4000,&_LC107);
    SSL_CONF_CTX_set_flags(lVar49,5);
    iVar50 = 0;
    iVar54 = 2;
    prog = (byte *)opt_init(param_1,param_2,s_client_options);
    local_564 = 0;
    local_510 = (char *)0x0;
    local_530 = (char *)0x0;
    local_49c = 0;
    bVar8 = false;
    bVar13 = false;
    bVar12 = false;
    local_488 = (byte *)0x0;
    local_4bc = 0;
    local_3e0 = (char *)0x0;
    local_330 = 0;
    local_508 = (BIO *)0x0;
    bVar19 = false;
    bVar18 = false;
    bVar20 = false;
    bVar23 = false;
    local_480 = 0;
    local_3fc = 0;
    bVar24 = 0;
    iVar27 = 0;
    local_450 = 0;
    local_43c = 0;
    local_440 = 0;
    bVar25 = false;
    iVar51 = 0;
    bVar11 = false;
    local_430 = 0;
    local_3c8 = (char *)0x0;
    local_3bc = 0;
    local_3a8 = 0;
    local_428 = 0;
    iVar29 = 0;
    local_3e8 = 0;
    local_3f0 = 0;
    bVar9 = false;
    local_4b0 = (char *)0x0;
    local_500 = 0;
    local_468 = (ENGINE *)0x0;
    local_420 = 0;
    bVar17 = false;
    bVar14 = false;
    local_38c = 0;
    local_33c = 0;
    local_4a8 = 1;
    local_4a0 = 0;
    local_4e8._0_4_ = 1;
    bVar10 = false;
    local_400 = 0;
    local_380 = 0;
    local_474 = 0;
    local_44c = 0;
    local_47c = 0;
    bVar21 = false;
    bVar15 = false;
    bVar22 = false;
    local_3d4 = 0;
    local_340 = 0;
    local_3d8 = 0;
    local_490 = (char *)0x0;
    local_558 = 0;
    local_458 = (byte *)0x0;
    local_3f8 = (char *)0x0;
    local_3a0 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_348 = 0;
    local_350 = 0;
    local_388 = 0;
    local_358 = 0;
    local_418 = 0;
    local_408 = 0;
    local_550 = (X509 *)0x0;
    local_360 = 0;
    local_410 = 0;
    local_460 = 0;
    local_368 = 0;
    local_370 = 0;
    local_378 = 0;
    bVar16 = false;
    local_528 = 0;
    local_498 = 0;
    local_518 = 0;
    uVar58 = 0;
switchD_0010264b_caseD_0:
    uVar62 = uVar58;
    iVar26 = opt_next();
    if (iVar26 == 0) {
      iVar50 = opt_num_rest();
      if (iVar50 == 1) {
        if (local_530 != (char *)0x0) {
          BIO_printf(_bio_err,"%s: cannot provide both -connect option and target parameter\n",prog)
          ;
          goto switchD_0010264b_caseD_ffffffff;
        }
        puVar33 = (undefined8 *)opt_rest();
        local_530 = (char *)*puVar33;
        CRYPTO_free((void *)0x0);
        if (local_530 != (char *)0x0) {
          local_530 = CRYPTO_strdup(local_530,"apps/s_client.c",0x32a);
        }
      }
      else {
        iVar50 = opt_check_rest_arg(0);
        if (iVar50 == 0) goto switchD_0010264b_caseD_ffffffff;
      }
      iVar50 = app_RAND_load();
      pcVar57 = local_2c8;
      pcVar56 = local_2d0;
      if (iVar50 == 0) goto LAB_001029d0;
      uVar7 = 0;
      if (!bVar23) {
        uVar7 = local_4e8._0_4_;
      }
      if (1 < iVar27) {
        BIO_printf(_bio_err,"%s: Can\'t use both -4 and -6\n",prog);
        goto switchD_0010264b_caseD_ffffffff;
      }
      if (bVar9) {
        if (local_4b0 != (char *)0x0) {
          BIO_printf(_bio_err,"%s: Can\'t use -servername and -noservername together\n",prog);
          goto switchD_0010264b_caseD_ffffffff;
        }
        if (local_498 != 0) {
          BIO_printf(_bio_err,"%s: Can\'t use -dane_tlsa_domain and -noservername together\n",prog);
          goto switchD_0010264b_caseD_ffffffff;
        }
      }
      if ((uVar62 == 0x304) && (local_428 != 0)) {
        BIO_printf(_bio_err,"Cannot supply -nextprotoneg with TLSv1.3\n");
        goto switchD_0010264b_caseD_ffffffff;
      }
      if (local_530 != (char *)0x0) {
        iVar27 = BIO_parse_hostserv(local_530,&local_2d0,&local_2c8);
        if (local_2d0 != pcVar56) {
          CRYPTO_free(pcVar56);
        }
        if (local_2c8 != pcVar57) {
          CRYPTO_free(pcVar57);
        }
        pcVar56 = "%s: -connect argument or target parameter malformed or ambiguous\n";
        pbVar36 = prog;
        if (iVar27 == 0) goto LAB_00102a6f;
      }
      ptr = local_2c8;
      pcVar57 = local_2d0;
      if (local_460 != 0) {
        if ((local_2c8 != (char *)0x0) && (local_2d0 != (char *)0x0)) {
          if ((local_4b0 != (char *)0x0) || (bVar9)) {
            pcVar56 = (char *)0x0;
          }
          else {
            pcVar56 = CRYPTO_strdup(local_2d0,"apps/s_client.c",0x675);
            local_4b0 = pcVar56;
            if (pcVar56 == (char *)0x0) {
              BIO_printf(_bio_err,"%s: out of memory\n",prog);
              goto LAB_001029d0;
            }
          }
          local_4e8 = CRYPTO_strdup(local_2d0,"apps/s_client.c",0x67d);
          local_4e0 = CRYPTO_strdup(local_2c8,"apps/s_client.c",0x67e);
          if ((local_4e8 == (char *)0x0) || (local_4e0 == (char *)0x0)) {
            BIO_printf(_bio_err,"%s: out of memory\n",prog);
          }
          else {
            iVar27 = BIO_parse_hostserv(local_460,&local_2d0,&local_2c8);
            if (local_2d0 != pcVar57) {
              CRYPTO_free(pcVar57);
            }
            if (local_2c8 != ptr) {
              CRYPTO_free(ptr);
            }
            if (iVar27 != 0) goto LAB_00102db7;
            BIO_printf(_bio_err,"%s: -proxy argument malformed or ambiguous\n",prog);
          }
LAB_00104560:
          local_564 = 1;
          local_558 = 0;
          local_550 = (X509 *)0x0;
          local_560 = (SSL_CTX *)0x0;
          local_4f0 = (EVP_PKEY *)0x0;
          goto LAB_0010274d;
        }
        BIO_printf(_bio_err,"%s: -proxy requires use of -connect or target parameter\n",prog);
        goto switchD_0010264b_caseD_ffffffff;
      }
      local_4e0 = (char *)0x0;
      pcVar56 = (char *)0x0;
      local_4e8 = (char *)0x0;
LAB_00102db7:
      if ((local_510 != (char *)0x0) &&
         (iVar27 = BIO_parse_hostserv(local_510,&local_2c0,&local_2b8), iVar27 == 0)) {
        BIO_printf(_bio_err,"%s: -bind argument parameter malformed or ambiguous\n",prog);
        goto LAB_00104560;
      }
      if ((local_4a0 == 1) && (local_4a8 != 1)) {
        BIO_printf(_bio_err,"Can\'t use unix sockets and datagrams together\n");
        goto LAB_00104560;
      }
      DAT_001080d0 = 0xffffffff;
      if (local_428 == 0) {
        next_proto = (void *)0x0;
      }
      else {
        next_proto = (void *)next_protos_parse(&DAT_001080c8);
        if (next_proto == (void *)0x0) {
          BIO_printf(_bio_err,"Error parsing -nextprotoneg argument\n");
          goto LAB_00104560;
        }
      }
      iVar27 = app_passwd(local_348,0,&local_2b0);
      if (iVar27 == 0) {
        BIO_printf(_bio_err,"Error getting private key password\n");
        goto LAB_00104560;
      }
      iVar27 = app_passwd(local_360,0,&local_2d8);
      if (iVar27 == 0) {
        BIO_printf(_bio_err,"Error getting proxy password\n");
        goto LAB_00104560;
      }
      if ((local_2d8 != 0) && (local_410 == 0)) {
        BIO_printf(_bio_err,"Error: Must specify proxy_user with proxy_pass\n");
        goto LAB_00104560;
      }
      if (local_408 == 0) {
        if (local_550 != (X509 *)0x0) {
          local_4f0 = (EVP_PKEY *)
                      load_key(local_550,local_304,0,local_2b0,local_500,
                               "client certificate private key");
          if (local_4f0 != (EVP_PKEY *)0x0) goto LAB_0010462e;
LAB_001046bf:
          local_564 = 1;
          local_558 = 0;
          local_550 = (X509 *)0x0;
          local_560 = (SSL_CTX *)0x0;
          goto LAB_0010274d;
        }
        local_4f0 = (EVP_PKEY *)0x0;
      }
      else {
        local_4f0 = (EVP_PKEY *)
                    load_key(local_408,local_304,0,local_2b0,local_500,
                             "client certificate private key");
        if (local_4f0 == (EVP_PKEY *)0x0) goto LAB_00104560;
        if (local_550 != (X509 *)0x0) {
LAB_0010462e:
          local_550 = (X509 *)load_cert_pass(local_550,local_308,1,local_2b0,"client certificate");
          if (local_550 == (X509 *)0x0) goto LAB_001046bf;
        }
      }
      if ((local_418 != 0) &&
         (iVar27 = load_certs(local_418,0,&local_2e8,local_2b0,"client certificate chain"),
         iVar27 == 0)) {
        local_564 = 1;
        local_558 = 0;
        local_560 = (SSL_CTX *)0x0;
        goto LAB_0010274d;
      }
      if (local_558 != 0) {
        a = (X509_CRL *)load_crl(local_558,local_2f8,0);
        if (a == (X509_CRL *)0x0) {
          local_558 = 0;
          local_560 = (SSL_CTX *)0x0;
          goto LAB_0010473d;
        }
        local_558 = OPENSSL_sk_new_null();
        if ((local_558 == 0) || (iVar27 = OPENSSL_sk_push(local_558,a), iVar27 == 0)) {
          BIO_puts(_bio_err,"Error adding CRL\n");
          ERR_print_errors(_bio_err);
          X509_CRL_free(a);
          local_564 = 1;
          local_560 = (SSL_CTX *)0x0;
          goto LAB_0010274d;
        }
      }
      iVar27 = load_excert(&local_2e0);
      if (iVar27 == 0) {
        local_564 = 1;
        local_560 = (SSL_CTX *)0x0;
        goto LAB_0010274d;
      }
      if (bio_c_out == (BIO *)0x0) {
        if ((c_quiet == 0) || (c_debug != 0)) {
          bio_c_out = (BIO *)dup_bio_out(0x8001);
        }
        else {
          pBVar46 = BIO_s_null();
          bio_c_out = BIO_new(pBVar46);
          if (((local_480 != 0) && (local_508 == (BIO *)0x0)) &&
             (local_508 = (BIO *)dup_bio_out(0x8001), local_508 == (BIO *)0x0)) {
            BIO_printf(_bio_err,"Out of memory\n");
            local_560 = (SSL_CTX *)0x0;
            local_564 = 1;
            goto LAB_0010274d;
          }
        }
        if (bio_c_out == (BIO *)0x0) {
          BIO_printf(_bio_err,"Unable to create BIO\n");
          local_560 = (SSL_CTX *)0x0;
          local_564 = 1;
          goto LAB_0010274d;
        }
      }
      iVar27 = app_passwd(local_3a8,0,local_258);
      if (iVar27 == 0) {
        BIO_printf(_bio_err,"Error getting password\n");
        local_564 = 1;
        local_560 = (SSL_CTX *)0x0;
        goto LAB_0010274d;
      }
      uVar32 = app_get0_propq();
      uVar34 = app_get0_libctx();
      local_560 = (SSL_CTX *)SSL_CTX_new_ex(uVar34,uVar32,local_560);
      if (local_560 == (SSL_CTX *)0x0) goto LAB_00104731;
      SSL_CTX_ctrl(local_560,0x4e,4,(void *)0x0);
      if (local_47c != 0) {
        ssl_ctx_security_debug(local_560,local_47c);
      }
      iVar27 = config_ctx(lVar49,local_518,local_560);
      if (iVar27 == 0) goto LAB_0010473d;
      if ((local_3e8 != 0) && (iVar27 = SSL_CTX_config(local_560), iVar27 == 0)) {
        BIO_printf(_bio_err,"Error using configuration \"%s\"\n",local_3e8);
        goto LAB_00104731;
      }
      if (((uVar62 != 0) &&
          (lVar64 = SSL_CTX_ctrl(local_560,0x7b,(long)(int)uVar62,(void *)0x0), lVar64 == 0)) ||
         ((iVar51 != 0 &&
          (lVar64 = SSL_CTX_ctrl(local_560,0x7c,(long)iVar51,(void *)0x0), lVar64 == 0))))
      goto LAB_0010473d;
      if (bVar8) {
        SSL_CTX_set_options(local_560,0x80);
      }
      if ((local_380 != 0) && (iVar27 = SSL_CTX_set1_param(local_560,vpm), iVar27 == 0)) {
        BIO_printf(_bio_err,"Error setting verify params\n");
        ERR_print_errors(_bio_err);
        goto LAB_0010473d;
      }
      if (bVar25) {
        SSL_CTX_ctrl(local_560,0x21,0x100,(void *)0x0);
      }
      if ((local_440 != 0) &&
         (lVar64 = SSL_CTX_ctrl(local_560,0x34,(ulong)local_440,(void *)0x0), lVar64 == 0)) {
        BIO_printf(_bio_err,"%s: Max send fragment size %u is out of permitted range\n",prog,
                   (ulong)local_440);
        goto LAB_0010473d;
      }
      if ((local_43c != 0) &&
         (lVar64 = SSL_CTX_ctrl(local_560,0x7d,(ulong)local_43c,(void *)0x0), lVar64 == 0)) {
        BIO_printf(_bio_err,"%s: Split send fragment size %u is out of permitted range\n",prog,
                   (ulong)local_43c);
        goto LAB_0010473d;
      }
      if ((local_450 != 0) &&
         (lVar64 = SSL_CTX_ctrl(local_560,0x7e,(ulong)local_450,(void *)0x0), lVar64 == 0)) {
        BIO_printf(_bio_err,"%s: Max pipelines %u is out of permitted range\n",prog,(ulong)local_450
                  );
        goto LAB_0010473d;
      }
      if (0 < local_38c) {
        SSL_CTX_set_default_read_buffer_len(local_560,(long)local_38c);
      }
      if (bVar24 != 0) {
        iVar27 = SSL_CTX_set_tlsext_max_fragment_length(local_560,(uint)bVar24);
        if (iVar27 == 0) {
          BIO_printf(_bio_err,"%s: Max Fragment Length code %u is out of permitted values\n",prog,
                     (ulong)(uint)bVar24);
          goto LAB_0010473d;
        }
      }
      iVar27 = ssl_load_stores(local_560,local_3b0,local_3b8,local_3a0,local_358,local_388,local_350
                               ,local_558,local_33c,in_R11);
      if (iVar27 == 0) {
        BIO_printf(_bio_err,"Error loading store locations\n");
        ERR_print_errors(_bio_err);
        goto LAB_0010473d;
      }
      if (local_3f8 != (char *)0x0) {
        stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
        if ((stackCAs != (stack_st_X509_NAME *)0x0) &&
           (iVar27 = SSL_add_file_cert_subjects_to_stack(stackCAs,local_3f8), iVar27 != 0)) {
          SSL_CTX_set0_CA_list(local_560,stackCAs);
          goto LAB_00103295;
        }
        OPENSSL_sk_pop_free(stackCAs,&X509_NAME_free);
        pcVar57 = "Error loading CA names\n";
LAB_00104818:
        BIO_printf(_bio_err,pcVar57);
        goto LAB_00104731;
      }
LAB_00103295:
      if (local_468 != (ENGINE *)0x0) {
        iVar27 = SSL_CTX_set_client_cert_engine(local_560,local_468);
        if (iVar27 == 0) {
          BIO_puts(_bio_err,"Error setting client auth engine\n");
          ERR_print_errors(_bio_err);
          release_engine(local_468);
          goto LAB_0010473d;
        }
        release_engine(local_468);
      }
      if (_psk_key == (byte *)0x0) {
        if (local_488 != (byte *)0x0) goto LAB_0010332c;
LAB_001047cd:
        if (psksess != (SSL_SESSION *)0x0) goto LAB_00103397;
      }
      else {
        if (c_debug != 0) {
          BIO_printf(bio_c_out,"PSK key given, setting client callback\n");
        }
        SSL_CTX_set_psk_client_callback(local_560,psk_client_cb);
        if (local_488 == (byte *)0x0) {
          if (_psk_key == (byte *)0x0) goto LAB_001047cd;
        }
        else {
LAB_0010332c:
          pBVar35 = BIO_new_file((char *)local_488,"r");
          if (pBVar35 == (BIO *)0x0) {
            pcVar57 = "Can\'t open PSK session file %s\n";
            goto LAB_0010483a;
          }
          local_3a0 = 0;
          psksess = PEM_read_bio_SSL_SESSION
                              (pBVar35,(SSL_SESSION **)0x0,(undefined1 *)0x0,(void *)0x0);
          BIO_free(pBVar35);
          if (psksess == (SSL_SESSION *)0x0) {
            pcVar57 = "Can\'t read PSK session file %s\n";
            goto LAB_0010483a;
          }
        }
LAB_00103397:
        SSL_CTX_set_psk_use_session_callback(local_560,psk_use_session_cb);
      }
      if ((local_3c8 != (char *)0x0) &&
         (iVar27 = SSL_CTX_set_tlsext_use_srtp(local_560,local_3c8), iVar27 != 0)) {
        pcVar57 = "Error setting SRTP profile\n";
        goto LAB_00104818;
      }
      if (local_2e0 != 0) {
        ssl_ctx_set_excert(local_560);
      }
      if (next_proto != (void *)0x0) {
        SSL_CTX_set_next_proto_select_cb(local_560,next_proto_cb,&next_proto);
      }
      if (local_3f0 != 0) {
        ptr_00 = (void *)next_protos_parse(&local_238);
        if (ptr_00 == (void *)0x0) {
          BIO_printf(_bio_err,"Error parsing -alpn argument\n");
          goto LAB_0010473d;
        }
        iVar27 = SSL_CTX_set_alpn_protos(local_560,ptr_00,(ulong)local_238 & 0xffffffff);
        if (iVar27 != 0) {
          BIO_printf(_bio_err,"Error setting ALPN\n");
          goto LAB_0010473d;
        }
        CRYPTO_free(ptr_00);
      }
      for (lVar64 = 0; (int)lVar64 < iVar29; lVar64 = lVar64 + 1) {
        uVar5 = auStack_108[lVar64];
        uVar32 = 0;
        local_3a0 = 0;
        iVar27 = SSL_CTX_add_client_custom_ext
                           (local_560,uVar5,0,0,0,serverinfo_cli_parse_cb,0,local_358);
        if (iVar27 == 0) {
          BIO_printf(_bio_err,"Warning: Unable to add custom extension %u, skipping\n",(ulong)uVar5)
          ;
        }
        local_358 = uVar32;
      }
      if (bVar10) {
        SSL_CTX_set_info_callback(local_560,(cb *)&apps_ssl_info_callback);
      }
      if (bVar11) {
        iVar27 = SSL_CTX_enable_ct(local_560,0);
        if ((iVar27 != 0) && (iVar27 = ctx_set_ctlog_list_file(local_560,local_430), iVar27 != 0))
        goto LAB_00104933;
LAB_00104731:
        ERR_print_errors(_bio_err);
LAB_0010473d:
        local_564 = 1;
        goto LAB_0010274d;
      }
      iVar27 = ctx_set_ctlog_list_file(local_560,local_430);
      if (iVar27 == 0) {
        ERR_clear_error();
      }
LAB_00104933:
      SSL_CTX_set_verify(local_560,local_474,(callback *)&verify_callback);
      iVar27 = ctx_set_verify_locations
                         (local_560,local_370,local_340,local_378,local_3d8,local_368,local_3d4,
                          local_3a0);
      if (iVar27 == 0) goto LAB_00104731;
      ssl_ctx_add_crls(local_560,local_558,local_33c);
      iVar27 = set_cert_key_stuff(local_560,local_550,local_4f0);
      if (iVar27 == 0) goto LAB_0010473d;
      if (!bVar9) {
        local_268 = _bio_err;
        SSL_CTX_callback_ctrl(local_560,0x35,ssl_servername_cb);
        SSL_CTX_ctrl(local_560,0x36,0,&local_268);
      }
      if ((local_258._8_8_ != 0) &&
         (iVar27 = set_up_srp_arg(local_560,local_258,local_3bc), iVar27 == 0)) goto LAB_0010473d;
      if ((local_498 != 0) && (iVar27 = SSL_CTX_dane_enable(local_560), iVar27 < 1)) {
        pcVar57 = "%s: Error enabling DANE TLSA authentication.\n";
        local_488 = prog;
LAB_0010483a:
        BIO_printf(_bio_err,pcVar57,local_488);
        goto LAB_00104731;
      }
      SSL_CTX_ctrl(local_560,0x2c,0x201,(void *)0x0);
      SSL_CTX_sess_set_new_cb(local_560,new_session_cb);
      iVar27 = set_keylog_file(local_560,local_330);
      if ((iVar27 != 0) || (to = SSL_new(local_560), to == (SSL *)0x0)) goto LAB_0010473d;
      if (bVar12) {
        SSL_set_post_handshake_auth(to,1);
      }
      if ((bVar13) && (iVar27 = SSL_set1_client_cert_type(to,&cert_type_rpk,2), iVar27 == 0)) {
        BIO_printf(_bio_err,"Error setting client certificate types\n");
        goto LAB_00105cbf;
      }
      if ((enable_server_rpk != 0) &&
         (iVar27 = SSL_set1_server_cert_type(to,&cert_type_rpk,2), iVar27 == 0)) {
        BIO_printf(_bio_err,"Error setting server certificate types\n");
        local_564 = 1;
        goto LAB_00104d87;
      }
      if (local_458 != (byte *)0x0) {
        pBVar35 = BIO_new_file((char *)local_458,"r");
        if (pBVar35 != (BIO *)0x0) {
          pSVar41 = PEM_read_bio_SSL_SESSION
                              (pBVar35,(SSL_SESSION **)0x0,(undefined1 *)0x0,(void *)0x0);
          BIO_free(pBVar35);
          if (pSVar41 != (SSL_SESSION *)0x0) {
            iVar27 = SSL_set_session(to,pSVar41);
            if (iVar27 == 0) {
              BIO_printf(_bio_err,"Can\'t set session\n");
              ERR_print_errors(_bio_err);
              goto LAB_00105cbf;
            }
            SSL_SESSION_free(pSVar41);
            goto LAB_00104bb2;
          }
        }
        pcVar57 = "Can\'t open session file %s\n";
LAB_00107901:
        BIO_printf(_bio_err,pcVar57,local_458);
        ERR_print_errors(_bio_err);
LAB_00105cbf:
        local_564 = 1;
        goto LAB_00104d87;
      }
LAB_00104bb2:
      if (bVar14) {
        SSL_ctrl(to,0x21,0x80,(void *)0x0);
      }
      pcVar57 = local_2d0;
      if (bVar9) goto LAB_001079e9;
      if (local_4b0 != (char *)0x0) goto LAB_001079bd;
      if (local_498 == 0) {
        local_4b0 = local_2d0;
        if (local_2d0 == (char *)0x0) {
          local_4b0 = "localhost";
LAB_001079bd:
          lVar64 = SSL_ctrl(to,0x37,0,local_4b0);
          if (lVar64 == 0) {
            BIO_printf(_bio_err,"Unable to set TLS servername extension.\n");
            ERR_print_errors(_bio_err);
            goto LAB_00105cbf;
          }
        }
        else {
          sVar47 = strlen(local_2d0);
          bVar24 = 0;
          bVar2 = 1;
          uVar43 = 0;
          uVar48 = 0;
          while( true ) {
            if ((sVar47 <= uVar43) || (0x3e < uVar48)) {
              if (!(bool)((bVar2 ^ 1) & uVar48 != 0x3f & bVar24)) goto LAB_001079e9;
              goto LAB_001079bd;
            }
            bVar4 = pcVar57[uVar43];
            if ('9' < (char)bVar4) break;
            if ((char)bVar4 < '0') goto LAB_00107a49;
LAB_001079a4:
            uVar48 = uVar48 + 1;
LAB_001079a8:
            uVar43 = uVar43 + 1;
          }
          if (((byte)(bVar4 - 0x41) < 0x3a) &&
             ((0x3ffffff43ffffffU >> ((ulong)(bVar4 - 0x41) & 0x3f) & 1) != 0)) {
            uVar48 = uVar48 + 1;
            bVar2 = 0;
            goto LAB_001079a8;
          }
LAB_00107a49:
          if ((uVar43 != 0) && (uVar43 < sVar47 - 1)) {
            if (bVar4 == 0x2d) goto LAB_001079a4;
            if ((((bVar4 == 0x2e) && (pcVar57[uVar43 + 1] != '.')) && (pcVar57[uVar43 - 1] != '-'))
               && (pcVar57[uVar43 + 1] != '-')) {
              uVar48 = 0;
              bVar24 = 1;
              goto LAB_001079a8;
            }
          }
        }
LAB_001079e9:
        if (local_498 != 0) goto LAB_00104c0c;
        if (local_528 != 0) {
          BIO_printf(_bio_err,
                     "%s: DANE TLSA authentication requires the -dane_tlsa_domain option.\n",prog);
          goto LAB_00105cbf;
        }
      }
      else {
LAB_00104c0c:
        iVar27 = SSL_dane_enable(to,local_498);
        if (iVar27 < 1) {
          pcVar57 = "%s: Error enabling DANE TLSA authentication.\n";
          local_458 = prog;
          goto LAB_00107901;
        }
        if (local_528 == 0) {
          BIO_printf(_bio_err,
                     "%s: DANE TLSA authentication requires at least one -dane_tlsa_rrdata option.\n"
                     ,prog);
          local_564 = 1;
          goto LAB_00104d87;
        }
        iVar29 = OPENSSL_sk_num(local_528);
        iVar27 = 0;
        for (iVar51 = 0; iVar51 < iVar29; iVar51 = iVar51 + 1) {
          pSVar42 = (SSL *)OPENSSL_sk_value(local_528,iVar51);
          local_238 = pSVar42;
          for (ppuVar53 = &tlsa_fields_4; *ppuVar53 != (undefined *)0x0; ppuVar53 = ppuVar53 + 3) {
            lVar64 = (*(code *)ppuVar53[2])(&local_238);
            if (lVar64 < 1) {
              BIO_printf(_bio_err,"%s: warning: bad TLSA %s field in: %s\n",prog,ppuVar53[1],pSVar42
                        );
              goto LAB_00104df7;
            }
          }
          iVar50 = SSL_dane_tlsa_add(to,usage_0,selector_1,mtype_2,data_3);
          CRYPTO_free(data_3);
          if (iVar50 == 0) {
            ERR_print_errors(_bio_err);
            BIO_printf(_bio_err,"%s: warning: unusable TLSA rrdata: %s\n",prog,pSVar42);
          }
          else if (iVar50 < 0) {
            ERR_print_errors(_bio_err);
            BIO_printf(_bio_err,"%s: warning: error loading TLSA rrdata: %s\n",prog,pSVar42);
          }
          else {
            iVar27 = iVar27 + 1;
          }
LAB_00104df7:
        }
        if (iVar27 < 1) {
          BIO_printf(_bio_err,"%s: Failed to import any TLSA records.\n",prog);
          goto LAB_00105cbf;
        }
        if (bVar16) {
          SSL_dane_set_flags(to,1);
        }
      }
      if ((local_4bc & local_49c) != 0) {
        BIO_printf(_bio_err,"%s: DTLS does not support the -tfo option\n",prog);
        goto LAB_00105cbf;
      }
      if ((local_564 & local_49c) != 0) {
        BIO_printf(_bio_err,"%s: QUIC does not support the -tfo option\n",prog);
        goto LAB_00105cbf;
      }
      if ((local_3f0 == 0) && (local_564 != 0)) {
        BIO_printf(_bio_err,
                   "%s: QUIC requires ALPN to be specified (e.g. \"h3\" for HTTP/3) via the -alpn option\n"
                   ,prog);
        goto LAB_00105cbf;
      }
      if (local_49c != 0) {
        BIO_printf(bio_c_out,"Connecting via TFO\n");
      }
      bVar9 = true;
      local_438 = 0;
      iVar27 = 1;
      uVar58 = 0;
LAB_00104ef0:
      BIO_ADDR_free(local_298);
      local_298 = (void *)0x0;
      iVar29 = init_client(&local_300,local_2d0,local_2c8);
      if (iVar29 == 0) {
        puVar44 = (uint *)__errno_location();
        BIO_printf(_bio_err,"connect:errno=%d\n",(ulong)*puVar44);
        BIO_closesocket(local_300);
        goto LAB_00105cbf;
      }
      BIO_printf(bio_c_out,"CONNECTED(%08X)\n",(ulong)local_300);
      if ((local_3fc | local_564) != 0) {
        iVar29 = BIO_socket_nbio(local_300,1);
        if (iVar29 == 0) {
          ERR_print_errors(_bio_err);
          goto LAB_00105cbf;
        }
        if (local_3fc != 0) {
          if (local_564 == 0) {
            BIO_printf(bio_c_out,"Turned on non blocking io\n");
            goto LAB_00104f94;
          }
          iVar29 = SSL_set_blocking_mode(to,0);
          if (iVar29 == 0) goto LAB_00104d87;
          BIO_printf(bio_c_out,"Turned on non blocking io\n");
        }
        if (local_4bc != 0) goto LAB_00104fa2;
        pBVar35 = BIO_new_dgram(local_300,0);
        iVar29 = SSL_set1_initial_peer_addr(to,local_298);
        if (iVar29 != 0) {
          if (pBVar35 == (BIO *)0x0) goto LAB_001076c0;
          goto LAB_001050d0;
        }
        BIO_printf(_bio_err,"Failed to set the initial peer address\n");
        uVar62 = local_3fc | local_564;
        goto LAB_00105350;
      }
LAB_00104f94:
      if (local_4bc == 0) {
        pBVar35 = BIO_new_socket(local_300,0);
        if (pBVar35 != (BIO *)0x0) {
          if (local_49c != 0) {
            BIO_ctrl(pBVar35,100,2,local_298);
            BIO_ctrl(pBVar35,0x9c,1,(void *)0x0);
          }
          goto LAB_001050d0;
        }
LAB_001076c0:
        BIO_printf(_bio_err,"Unable to create BIO\n");
        ERR_print_errors(_bio_err);
        BIO_closesocket(local_300);
        goto LAB_00105cbf;
      }
LAB_00104fa2:
      pBVar35 = BIO_new_dgram(local_300,0);
      if ((pBVar35 == (BIO *)0x0) || (local_280 = (void *)BIO_ADDR_new(), local_280 == (void *)0x0))
      {
        BIO_printf(_bio_err,"memory allocation failure\n");
        BIO_free(pBVar35);
        BIO_closesocket(local_300);
        goto LAB_00105cbf;
      }
      iVar29 = BIO_sock_info(local_300,0,&local_280);
      if (iVar29 == 0) {
        puVar44 = (uint *)__errno_location();
        BIO_printf(_bio_err,"getsockname:errno=%d\n",(ulong)*puVar44);
        BIO_free(pBVar35);
        BIO_ADDR_free(local_280);
        BIO_closesocket(local_300);
        goto LAB_00105cbf;
      }
      BIO_ctrl(pBVar35,0x20,0,local_280);
      BIO_ADDR_free(local_280);
      local_280 = (void *)0x0;
      if (bVar17) {
        local_278.tv_sec = __LC179;
        local_278.tv_usec = _UNK_0010ddb8;
        BIO_ctrl(pBVar35,0x21,0,&local_278);
        local_278.tv_usec = _UNK_0010ddb8;
        local_278.tv_sec = __LC179;
        BIO_ctrl(pBVar35,0x23,0,&local_278);
      }
      if (local_420 != 0) {
        lVar64 = SSL_ctrl(to,0x79,0,(void *)0x0);
        if (local_420 < lVar64) {
          lVar64 = SSL_ctrl(to,0x79,0,(void *)0x0);
          BIO_printf(_bio_err,"MTU too small. Must be at least %ld\n",lVar64);
          BIO_free(pBVar35);
        }
        else {
          SSL_set_options(to,0x1000);
          lVar64 = SSL_ctrl(to,0x78,local_420,(void *)0x0);
          if (lVar64 != 0) goto LAB_001050d0;
          BIO_printf(_bio_err,"Failed to set MTU\n");
          BIO_free(pBVar35);
        }
        goto LAB_0010534a;
      }
      BIO_ctrl(pBVar35,0x27,0,(void *)0x0);
LAB_001050d0:
      if (local_400 != 0) {
        pBVar46 = BIO_f_nbio_test();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 == (BIO *)0x0) {
          BIO_printf(_bio_err,"Unable to create BIO\n");
          BIO_free(pBVar35);
          uVar62 = local_400;
          goto LAB_00105350;
        }
        pBVar35 = BIO_push(pBVar45,pBVar35);
      }
      if (c_debug != 0) {
        BIO_set_callback_ex(pBVar35,&bio_dump_callback);
        BIO_set_callback_arg(pBVar35,(char *)bio_c_out);
      }
      if (local_480 != 0) {
        if (local_480 == 2) {
          SSL_set_msg_callback(to,(cb *)&SSL_trace);
        }
        else {
          SSL_set_msg_callback(to,(cb *)&msg_cb);
        }
        pBVar45 = local_508;
        if (local_508 == (BIO *)0x0) {
          pBVar45 = bio_c_out;
        }
        SSL_ctrl(to,0x10,0,pBVar45);
      }
      if (bVar18) {
        SSL_callback_ctrl(to,0x38,(_func_3375 *)&tlsext_cb);
        SSL_ctrl(to,0x39,0,bio_c_out);
      }
      if (bVar19) {
        SSL_ctrl(to,0x41,1,(void *)0x0);
        SSL_CTX_callback_ctrl(local_560,0x3f,ocsp_resp_cb);
        SSL_CTX_ctrl(local_560,0x40,0,bio_c_out);
      }
      SSL_set_bio(to,pBVar35,pBVar35);
      SSL_set_connect_state(to);
      iVar29 = fileno_stdin();
      iVar51 = SSL_get_fd(to);
      if (iVar51 < iVar29) {
        iVar29 = fileno_stdin();
      }
      else {
        iVar29 = SSL_get_fd(to);
      }
      local_450 = iVar29 + 1;
      local_2a8 = 0;
      local_2a0 = 0;
      if ((local_460 != 0) &&
         (iVar29 = OSSL_HTTP_proxy_connect
                             (pBVar35,local_4e8,local_4e0,local_410,local_2d8,0,_bio_err,prog),
         iVar29 == 0)) goto LAB_0010534a;
      switch(local_2fc) {
      case 1:
      case 0xb:
        pBVar46 = BIO_f_buffer();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 != (BIO *)0x0) {
          BIO_push(pBVar45,pBVar35);
          do {
            iVar29 = BIO_gets(pBVar45,(char *)local_540,0x4000);
            if (iVar29 < 4) break;
          } while (local_540[3] == 0x2d);
          if (local_490 == (char *)0x0) {
            local_490 = "mail.example.com";
          }
          if (local_2fc == 0xb) {
            BIO_printf(pBVar45,"LHLO %s\r\n",local_490);
          }
          else {
            BIO_printf(pBVar45,"EHLO %s\r\n",local_490);
          }
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          bVar8 = false;
          do {
            uVar58 = BIO_gets(pBVar45,(char *)local_540,0x4000);
            pcVar57 = strstr((char *)local_540,"STARTTLS");
            if (pcVar57 != (char *)0x0) {
              bVar8 = true;
            }
          } while ((3 < (int)uVar58) && (local_540[3] == 0x2d));
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          BIO_pop(pBVar45);
          BIO_free(pBVar45);
          if (!bVar8) {
            BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
          }
          pcVar57 = "STARTTLS\r\n";
LAB_00106d6f:
          BIO_printf(pBVar35,pcVar57);
          BIO_read(pBVar35,local_538,0x4000);
          goto switchD_00105287_default;
        }
        goto LAB_00106e85;
      case 2:
        BIO_read(pBVar35,local_540,0x4000);
        BIO_printf(pBVar35,"STLS\r\n");
        uVar58 = BIO_read(pBVar35,local_538,0x4000);
        if ((int)uVar58 < 0) {
LAB_0010637f:
          BIO_printf(_bio_err,"BIO_read failed\n");
          goto LAB_00105cbf;
        }
      default:
switchD_00105287_default:
        if (local_3e0 != (char *)0x0) {
          pSVar41 = SSL_get_session(to);
          if (pSVar41 == (SSL_SESSION *)0x0) {
LAB_0010554a:
            if ((psksess == (SSL_SESSION *)0x0) ||
               (iVar29 = SSL_SESSION_get_max_early_data(), iVar29 == 0)) goto LAB_00105563;
          }
          else {
            pSVar41 = SSL_get_session(to);
            iVar29 = SSL_SESSION_get_max_early_data(pSVar41);
            if (iVar29 == 0) goto LAB_0010554a;
          }
          pBVar45 = BIO_new_file(local_3e0,"r");
          if (pBVar45 == (BIO *)0x0) {
            BIO_printf(_bio_err,"Cannot open early data file\n");
            break;
          }
          do {
            iVar29 = BIO_read_ex(pBVar45,local_520,0x4000,&local_288);
LAB_0010642a:
            while (iVar51 = SSL_write_early_data(to,local_520,local_288), iVar51 == 0) {
              iVar51 = SSL_get_error(to,0);
              if (3 < iVar51) goto LAB_001064f2;
              if (iVar51 < 2) goto LAB_00106462;
            }
          } while (iVar29 != 0);
          BIO_free(pBVar45);
        }
LAB_00105563:
        local_20c = 0;
        uVar55 = 1;
        local_218 = 0;
        bVar8 = false;
        uVar1 = 0;
        local_474 = 0;
        bVar25 = true;
        uVar52 = 1;
        uVar61 = 1;
        local_228 = __LC231;
        uStack_220 = _UNK_0010ddd8;
        local_238 = to;
        local_230 = local_520;
        local_210 = uVar7;
LAB_00105603:
        pfVar59 = &local_208;
        for (lVar64 = 0x20; lVar64 != 0; lVar64 = lVar64 + -1) {
          *(undefined4 *)pfVar59->fds_bits = 0;
          pfVar59 = (fd_set *)((long)pfVar59 + (ulong)bVar65 * -8 + 4);
        }
        pfVar59 = &local_188;
        for (lVar64 = 0x20; lVar64 != 0; lVar64 = lVar64 + -1) {
          *(undefined4 *)pfVar59->fds_bits = 0;
          pfVar59 = (fd_set *)((long)pfVar59 + (ulong)bVar65 * -8 + 4);
        }
        if (local_4bc == 0 && local_564 == 0) {
LAB_00105631:
          local_470 = (timeval *)0x0;
        }
        else {
          local_470 = &local_278;
          iVar29 = SSL_get_event_timeout(to,local_470,&local_2f4);
          if ((iVar29 == 0) || (local_2f4 != 0)) goto LAB_00105631;
        }
        iVar29 = SSL_is_init_finished(to);
        if (((iVar29 == 0) && (lVar64 = SSL_ctrl(to,0xc,0,(void *)0x0), lVar64 == 0)) &&
           (iVar29 = SSL_get_key_update_type(to), iVar29 == -1)) {
          bVar9 = true;
          bVar10 = false;
        }
        else {
          bVar10 = true;
          if (bVar9) {
            if (bVar20) {
              BIO_puts(_bio_err,"CONNECTION ESTABLISHED\n");
              print_ssl_summary(to);
            }
            print_stuff(bio_c_out,to,iVar27);
            if (0 < iVar27) {
              iVar27 = iVar27 + -1;
            }
            if (local_2fc == 0) {
              if (local_44c != 0) goto LAB_00105e48;
            }
            else {
              BIO_write(_bio_err,local_540,uVar58);
              if (local_44c != 0) goto LAB_00105e48;
              local_2fc = 0;
            }
            bVar10 = bVar9;
            bVar9 = false;
          }
        }
        uVar62 = 0;
        if (uVar55 == 0) {
          do {
            iVar29 = user_data_process(&local_238,&local_2a8,&local_2a0);
            if (iVar29 != 3) {
              if (iVar29 < 4) {
                if (iVar29 == 1) goto LAB_00105350;
                if (iVar29 == 2) goto LAB_00104ef0;
              }
              else if (iVar29 == 4) {
                uVar55 = 1;
                uVar52 = 1;
                if (local_2a8 != 0) goto LAB_0010629f;
                goto LAB_001056e4;
              }
              BIO_printf(_bio_err,"ERROR\n");
              uVar62 = 0;
              goto LAB_00105350;
            }
            if (local_2a8 != 0) {
              uVar55 = 0;
LAB_0010629f:
              uVar52 = 0;
              local_278.tv_sec = 0;
              local_278.tv_usec = 0;
              goto LAB_001056e4;
            }
          } while (uStack_220 != 0);
          uVar52 = 1;
        }
LAB_001056e4:
        if (uVar61 == 0) {
          if (bVar10) {
LAB_001056f6:
            if (((local_438 ^ 1) & uVar52) != 0) {
              bVar24 = fileno_stdin();
              iVar29 = fileno_stdin();
              lVar64 = __fdelt_chk((long)iVar29);
              local_208.fds_bits[lVar64] = local_208.fds_bits[lVar64] | 1L << (bVar24 & 0x3f);
            }
            if (bVar8) {
              bVar24 = fileno_stdout();
              iVar29 = fileno_stdout();
              lVar64 = __fdelt_chk((long)iVar29);
              local_188.fds_bits[lVar64] = local_188.fds_bits[lVar64] | 1L << (bVar24 & 0x3f);
            }
LAB_00105716:
            if (((local_564 ^ 1) & uVar61) == 0) goto LAB_00105df0;
            iVar29 = SSL_get_fd(to);
            iVar51 = SSL_get_fd(to);
            lVar64 = __fdelt_chk((long)iVar51);
            local_208.fds_bits[lVar64] = local_208.fds_bits[lVar64] | 1L << ((byte)iVar29 & 0x3f);
            if (uVar55 != 0) goto LAB_0010575d;
            if (local_564 != 0) goto LAB_00105d6d;
          }
          else {
LAB_00105df0:
            uVar30 = uVar55;
            if (local_564 == 0) {
joined_r0x00105dfd:
              if (uVar30 == 0) goto LAB_0010578e;
            }
            else {
              iVar29 = SSL_net_read_desired(to);
              if (iVar29 != 0) {
                iVar29 = SSL_get_fd(to);
                iVar51 = SSL_get_fd(to);
                lVar64 = __fdelt_chk((long)iVar51);
                local_208.fds_bits[lVar64] =
                     local_208.fds_bits[lVar64] | 1L << ((byte)iVar29 & 0x3f);
              }
LAB_00105d6d:
              if (!bVar25) {
                uVar30 = SSL_net_write_desired(to);
                goto joined_r0x00105dfd;
              }
            }
LAB_0010575d:
            iVar29 = SSL_get_fd(to);
            iVar51 = SSL_get_fd(to);
            lVar64 = __fdelt_chk((long)iVar51);
            local_188.fds_bits[lVar64] = local_188.fds_bits[lVar64] | 1L << ((byte)iVar29 & 0x3f);
          }
LAB_0010578e:
          iVar29 = select(local_450,&local_208,&local_188,(fd_set *)0x0,local_470);
          if (iVar29 < 0) {
            puVar44 = (uint *)__errno_location();
            BIO_printf(_bio_err,"bad select %d\n",(ulong)*puVar44);
            uVar62 = 1;
            goto LAB_00105350;
          }
          uVar30 = 0;
          if (local_470 != (timeval *)0x0) {
LAB_001057ca:
            SSL_handle_events(to);
            if (local_4bc != 0) {
              iVar29 = SSL_get_fd(to);
              lVar64 = __fdelt_chk((long)iVar29);
              uVar48 = local_208.fds_bits[lVar64];
              uVar31 = SSL_get_fd(to);
              if ((uVar48 >> ((ulong)uVar31 & 0x3f) & 1) == 0) {
                iVar29 = SSL_get_fd(to);
                lVar64 = __fdelt_chk((long)iVar29);
                uVar48 = local_188.fds_bits[lVar64];
                iVar29 = SSL_get_fd(to);
                if ((uVar48 & 1L << ((byte)iVar29 & 0x3f)) == 0) {
                  BIO_printf(_bio_err,"TIMEOUT occurred\n");
                }
              }
            }
            if (uVar30 != 0) goto LAB_00105f58;
          }
          if (local_564 == 0) {
            iVar29 = SSL_get_fd(to);
            lVar64 = __fdelt_chk((long)iVar29);
            uVar48 = local_188.fds_bits[lVar64];
            uVar30 = SSL_get_fd(to);
            if ((uVar48 >> ((ulong)uVar30 & 0x3f) & 1) == 0) {
              iVar29 = fileno_stdout();
              lVar64 = __fdelt_chk((long)iVar29);
              uVar48 = local_188.fds_bits[lVar64];
              bVar24 = fileno_stdout();
              if ((1L << (bVar24 & 0x3f) & uVar48) != 0) goto LAB_00105ac2;
              iVar29 = SSL_get_fd(to);
              lVar64 = __fdelt_chk((long)iVar29);
              uVar48 = local_208.fds_bits[lVar64];
              iVar29 = SSL_get_fd(to);
              if ((1L << ((byte)iVar29 & 0x3f) & uVar48) == 0) goto LAB_001058ff;
              goto LAB_00105f58;
            }
          }
          else if ((local_2a8 == 0) && (!bVar25)) {
            iVar29 = fileno_stdout();
            lVar64 = __fdelt_chk((long)iVar29);
            uVar48 = local_188.fds_bits[lVar64];
            uVar43 = fileno_stdout();
            if ((uVar48 >> (uVar43 & 0x3f) & 1) == 0) {
LAB_001058ff:
              if (bVar21) goto LAB_00105350;
              iVar29 = fileno_stdin();
              lVar64 = __fdelt_chk((long)iVar29);
              uVar48 = local_208.fds_bits[lVar64];
              uVar43 = fileno_stdin();
              if ((uVar48 >> (uVar43 & 0x3f) & 1) == 0) goto switchD_00105872_caseD_7;
              if (bVar22) {
                iVar29 = raw_read_stdin(local_520,0x2000);
                iVar51 = 0;
                for (lVar64 = 0; (int)lVar64 < iVar29; lVar64 = lVar64 + 1) {
                  if (*(char *)(local_520 + lVar64) == '\n') {
                    iVar51 = iVar51 + 1;
                  }
                }
                for (lVar64 = (long)(iVar29 + -1); iVar50 = (int)lVar64, -1 < iVar50;
                    lVar64 = lVar64 + -1) {
                  cVar3 = *(char *)(local_520 + lVar64);
                  *(char *)(local_520 + (iVar51 + iVar50)) = cVar3;
                  if (cVar3 == '\n') {
                    iVar51 = iVar51 + -1;
                    iVar29 = iVar29 + 1;
                    *(undefined1 *)(local_520 + (iVar50 + iVar51)) = 0xd;
                  }
                }
              }
              else {
                iVar29 = raw_read_stdin(local_520,0x4000);
              }
              bVar25 = (bool)((bVar23 ^ 1U) & iVar29 < 1);
              if (iVar29 == 0) {
                if (bVar25) goto LAB_001059b5;
                local_438 = 1;
                uVar52 = 0;
              }
              else {
                if (bVar25) {
LAB_001059b5:
                  BIO_printf(_bio_err,"DONE\n");
                  goto LAB_00105350;
                }
                if (iVar29 < 1) {
                  uVar52 = 0;
                }
                else {
                  if ((uStack_220 != 0) || (local_228 < (ulong)(long)iVar29)) goto LAB_00105350;
                  local_218 = 0;
                  uStack_220 = (long)iVar29;
                  uVar52 = 0;
                }
              }
            }
            else {
LAB_00105ac2:
              iVar29 = raw_write_stdout(local_538 + (int)uVar1,local_474);
              if (iVar29 < 1) {
                BIO_printf(bio_c_out,"DONE\n");
                goto LAB_00105350;
              }
              local_474 = local_474 - iVar29;
              uVar1 = uVar1 + iVar29;
              if (local_474 < 1) {
                uVar61 = 1;
                bVar8 = false;
              }
            }
            goto switchD_00105872_caseD_7;
          }
          lVar39 = local_2a0;
          lVar64 = local_2a8;
          iVar29 = SSL_write(to,(void *)(local_520 + local_2a0),(int)local_2a8);
          uVar30 = SSL_get_error(to,iVar29);
          switch(uVar30) {
          case 0:
            local_2a0 = lVar39 + iVar29;
            local_2a8 = lVar64 - iVar29;
            if (0 < iVar29) {
              if (local_2a8 == 0) goto LAB_00105b25;
              uVar55 = 1;
              uVar52 = uVar30;
              break;
            }
            goto LAB_00105cbf;
          case 1:
          case 10:
switchD_00105872_caseD_1:
            ERR_print_errors(_bio_err);
            goto LAB_0010534a;
          case 2:
            uVar55 = 0;
            BIO_printf(bio_c_out,"write R BLOCK\n");
            uVar61 = 1;
            bVar8 = false;
            break;
          case 3:
            pcVar57 = "write W BLOCK\n";
LAB_00105ced:
            uVar55 = 1;
            BIO_printf(bio_c_out,pcVar57);
            uVar52 = 0;
            break;
          case 4:
            BIO_printf(bio_c_out,"write X BLOCK\n");
            break;
          case 5:
            if ((iVar29 == 0) && (lVar64 == 0)) goto LAB_00105b25;
            puVar44 = (uint *)__errno_location();
            if ((local_49c == 0) || (*puVar44 != 0x6a)) {
              BIO_printf(_bio_err,"write:errno=%d\n",(ulong)*puVar44);
              goto LAB_0010534a;
            }
            break;
          case 6:
            if (lVar64 != 0) {
              BIO_printf(bio_c_out,"shutdown\n");
              goto LAB_00105350;
            }
LAB_00105b25:
            uVar55 = 0;
            uVar52 = 1;
            break;
          case 9:
            uVar55 = 1;
            BIO_printf(bio_c_out,"write A BLOCK\n");
            wait_for_async(to);
            uVar52 = 0;
          }
        }
        else {
          iVar29 = SSL_has_pending(to);
          if (iVar29 == 0) {
            if (bVar10) goto LAB_001056f6;
            goto LAB_00105716;
          }
          uVar30 = uVar61;
          if (local_470 != (timeval *)0x0) goto LAB_001057ca;
LAB_00105f58:
          iVar29 = SSL_read(to,local_538,0x4000);
          uVar30 = SSL_get_error(to,iVar29);
          switch(uVar30) {
          case 0:
            if (iVar29 < 1) goto LAB_00105cbf;
            uVar61 = uVar30;
            local_474 = iVar29;
            bVar8 = true;
            uVar1 = uVar30;
            break;
          case 1:
          case 10:
            goto switchD_00105872_caseD_1;
          case 2:
            BIO_printf(bio_c_out,"read R BLOCK\n");
            goto joined_r0x00106055;
          case 3:
            pcVar57 = "read W BLOCK\n";
            goto LAB_00105ced;
          case 4:
            BIO_printf(bio_c_out,"read X BLOCK\n");
            break;
          case 5:
            puVar44 = (uint *)__errno_location();
            uVar62 = *puVar44;
            if (bVar20) {
              BIO_puts(_bio_err,"CONNECTION CLOSED BY SERVER\n");
            }
            else {
              BIO_printf(_bio_err,"read:errno=%d\n",(ulong)uVar62);
            }
            goto LAB_00105350;
          case 6:
            BIO_printf(bio_c_out,"closed\n");
            goto LAB_00105350;
          case 9:
            BIO_printf(bio_c_out,"read A BLOCK\n");
            wait_for_async(to);
joined_r0x00106055:
            uVar61 = uVar52 | uVar55;
            bVar8 = false;
            if ((uVar52 | uVar55) == 0) {
              uVar52 = 0;
              uVar55 = 1;
              uVar61 = 1;
              bVar8 = false;
            }
          }
        }
switchD_00105872_caseD_7:
        bVar25 = false;
        goto LAB_00105603;
      case 3:
        pBVar46 = BIO_f_buffer();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 != (BIO *)0x0) {
          bVar8 = false;
          BIO_push(pBVar45,pBVar35);
          BIO_gets(pBVar45,(char *)local_540,0x4000);
          BIO_printf(pBVar45,". CAPABILITY\r\n");
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          do {
            uVar58 = BIO_gets(pBVar45,(char *)local_540,0x4000);
            pcVar57 = strstr((char *)local_540,"STARTTLS");
            if (pcVar57 != (char *)0x0) {
              bVar8 = true;
            }
          } while ((3 < (int)uVar58) && (*local_540 != 0x2e));
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          BIO_pop(pBVar45);
          BIO_free(pBVar45);
          if (!bVar8) {
            BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
          }
          pcVar57 = ". STARTTLS\r\n";
          goto LAB_00106d6f;
        }
        goto LAB_00106e85;
      case 4:
        pBVar46 = BIO_f_buffer();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 != (BIO *)0x0) {
          BIO_push(pBVar45,pBVar35);
          do {
            uVar58 = BIO_gets(pBVar45,(char *)local_540,0x4000);
            if ((int)uVar58 < 4) break;
            ppuVar37 = __ctype_b_loc();
            puVar6 = *ppuVar37;
          } while (((((*(byte *)((long)puVar6 + (ulong)*local_540 * 2 + 1) & 8) == 0) ||
                    ((*(byte *)((long)puVar6 + (ulong)local_540[1] * 2 + 1) & 8) == 0)) ||
                   ((*(byte *)((long)puVar6 + (ulong)local_540[2] * 2 + 1) & 8) == 0)) ||
                  (local_540[3] != 0x20));
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          BIO_pop(pBVar45);
          BIO_free(pBVar45);
          pcVar57 = "AUTH TLS\r\n";
          goto LAB_00106d6f;
        }
LAB_00106e85:
        BIO_printf(_bio_err,"Unable to create BIO\n");
        break;
      case 5:
        iVar29 = BIO_read(pBVar35,local_540,0x4000);
        if (iVar29 != 3) {
LAB_0010674b:
          uVar62 = 1;
          goto LAB_00105350;
        }
        iVar29 = memcmp(local_540,&tls_do_10,3);
        if (iVar29 == 0) {
          BIO_write(pBVar35,&tls_will_9,3);
          BIO_write(pBVar35,&tls_follows_8,6);
          BIO_ctrl(pBVar35,0xb,0,(void *)0x0);
          iVar29 = BIO_read(pBVar35,local_540,0x4000);
          if (iVar29 != 6) goto LAB_0010674b;
          iVar29 = memcmp(local_540,&tls_follows_8,6);
          if (iVar29 == 0) goto switchD_00105287_default;
        }
        break;
      case 6:
      case 7:
        pcVar57 = "server";
        if (local_2fc == 6) {
          pcVar57 = "client";
        }
        BIO_printf(pBVar35,
                   "<stream:stream xmlns:stream=\'http://etherx.jabber.org/streams\' xmlns=\'jabber:%s\' to=\'%s\' version=\'1.0\'>"
                   ,pcVar57);
        iVar29 = BIO_read(pBVar35,local_540,0x4000);
        if (iVar29 < 0) goto LAB_0010637f;
        local_540[iVar29] = 0;
        while ((pcVar57 = strstr((char *)local_540,
                                 "<starttls xmlns=\'urn:ietf:params:xml:ns:xmpp-tls\'"),
               pcVar57 == (char *)0x0 &&
               (pcVar57 = strstr((char *)local_540,
                                 "<starttls xmlns=\"urn:ietf:params:xml:ns:xmpp-tls\""),
               pcVar57 == (char *)0x0))) {
          iVar29 = BIO_read(pBVar35,local_540,0x4000);
          if (iVar29 < 1) goto LAB_0010534a;
          local_540[iVar29] = 0;
        }
        BIO_printf(pBVar35,"<starttls xmlns=\'urn:ietf:params:xml:ns:xmpp-tls\'/>");
        iVar29 = BIO_read(pBVar35,local_538,0x4000);
        if (iVar29 < 0) goto LAB_00106bab;
        local_538[iVar29] = 0;
        pcVar57 = strstr((char *)local_538,"<proceed");
        if (pcVar57 == (char *)0x0) break;
        *local_540 = 0;
        goto switchD_00105287_default;
      case 8:
        pBVar46 = BIO_f_buffer();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 == (BIO *)0x0) {
LAB_00105e26:
          BIO_printf(_bio_err,"Unable to create BIO\n");
          goto LAB_00105cbf;
        }
        BIO_push(pBVar45,pBVar35);
        BIO_printf(pBVar45,"STARTTLS\r\n");
        BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
        iVar29 = SSL_get_fd(to);
        local_450 = iVar29 + 1;
        do {
          while( true ) {
            local_280 = (void *)((ulong)local_280 & 0xffffffff00000000);
            pfVar59 = &local_208;
            for (lVar64 = 0x20; lVar64 != 0; lVar64 = lVar64 + -1) {
              *(undefined4 *)pfVar59->fds_bits = 0;
              pfVar59 = (fd_set *)((long)pfVar59 + (ulong)bVar65 * -8 + 4);
            }
            iVar29 = SSL_get_fd(to);
            iVar51 = SSL_get_fd(to);
            lVar64 = __fdelt_chk((long)iVar51);
            local_208.fds_bits[lVar64] = local_208.fds_bits[lVar64] | 1L << ((byte)iVar29 & 0x3f);
            local_278.tv_usec = _UNK_0010ddc8;
            local_278.tv_sec = __LC198;
            lVar64 = BIO_ctrl(pBVar45,0x74,0,(void *)0x0);
            if ((((lVar64 == 0) && (lVar64 = BIO_ctrl(pBVar45,10,0,(void *)0x0), (int)lVar64 == 0))
                && (lVar64 = BIO_ctrl(pBVar35,10,0,(void *)0x0), (int)lVar64 == 0)) &&
               (iVar29 = select(local_450,&local_208,(fd_set *)0x0,(fd_set *)0x0,&local_278),
               iVar29 < 1)) {
              BIO_printf(_bio_err,"Timeout waiting for response (%d seconds).\n",8);
              goto LAB_001069c7;
            }
            uVar58 = BIO_gets(pBVar45,(char *)local_540,0x4000);
            if (((int)uVar58 < 1) ||
               (iVar29 = __isoc99_sscanf(local_540,"%*s %d",&local_280), iVar29 != 1))
            goto LAB_001069c7;
            if (((int)local_280 == 0x1c3) || ((int)local_280 == 0x1a5)) break;
            if ((int)local_280 == 0x2b3) {
              BIO_printf(_bio_err,"STARTTLS negotiation failed: ");
              ERR_print_errors(_bio_err);
              goto LAB_001069c7;
            }
            if ((int)local_280 == 0x29e) goto LAB_001069c7;
          }
          pcVar57 = strstr((char *)local_540,"STARTTLS");
        } while (pcVar57 == (char *)0x0);
        BIO_printf(_bio_err,"STARTTLS not supported: %s",local_540);
LAB_001069c7:
        BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
        BIO_pop(pBVar45);
        BIO_free(pBVar45);
        if ((int)local_280 == 0x29e) goto switchD_00105287_default;
        BIO_printf(_bio_err,"Server does not support STARTTLS.\n");
        break;
      case 9:
        iVar29 = BIO_read(pBVar35,local_538,0x4000);
        if (iVar29 < 0) {
LAB_00106bab:
          BIO_printf(_bio_err,"BIO_read failed\n");
        }
        else if (iVar29 < 0x15) {
          BIO_printf(_bio_err,"MySQL packet too short.\n");
        }
        else if (*local_538 + 4 + (uint)local_538[1] * 0x100 + (uint)local_538[2] * 0x10000 ==
                 iVar29) {
          if (local_538[4] == 10) {
            lVar64 = 5;
            do {
              iVar51 = (int)lVar64;
              if (iVar29 <= iVar51) {
                BIO_printf(_bio_err,"Cannot confirm server version. ");
                goto LAB_0010534a;
              }
              pbVar36 = local_538 + lVar64;
              lVar64 = lVar64 + 1;
            } while (*pbVar36 != 0);
            if (iVar51 + 0xf < iVar29) {
              if (local_538[iVar51 + 0xd] == 0) {
                if ((local_538[(long)(iVar51 + 0xe) + 1] & 8) != 0) {
                  BIO_write(pBVar35,ssl_req_7,0x24);
                  BIO_ctrl(pBVar35,0xb,0,(void *)0x0);
                  goto switchD_00105287_default;
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
        BIO_write(pBVar35,&ssl_request_6,8);
        BIO_ctrl(pBVar35,0xb,0,(void *)0x0);
        iVar29 = BIO_read(pBVar35,local_538,0x4000);
        if (iVar29 != 1) goto LAB_0010674b;
        if (*local_538 == 0x53) goto switchD_00105287_default;
        break;
      case 0xc:
        pBVar46 = BIO_f_buffer();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 == (BIO *)0x0) goto LAB_00105e26;
        BIO_push(pBVar45,pBVar35);
        BIO_gets(pBVar45,(char *)local_540,0x4000);
        BIO_printf(pBVar45,"CAPABILITIES\r\n");
        BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
        BIO_gets(pBVar45,(char *)local_540,0x4000);
        pcVar57 = strstr((char *)local_540,"101");
        if (pcVar57 == (char *)0x0) {
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          BIO_pop(pBVar45);
          BIO_free(pBVar45);
LAB_001065df:
          BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
        }
        else {
          bVar8 = false;
          do {
            iVar29 = BIO_gets(pBVar45,(char *)local_540,0x4000);
            pcVar57 = strstr((char *)local_540,"STARTTLS");
            if (pcVar57 != (char *)0x0) {
              bVar8 = true;
            }
          } while ((1 < iVar29) && (*local_540 != 0x2e));
          BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
          BIO_pop(pBVar45);
          BIO_free(pBVar45);
          if (!bVar8) goto LAB_001065df;
        }
        BIO_printf(pBVar35,"STARTTLS\r\n");
        uVar58 = BIO_read(pBVar35,local_540,0x4000);
        if ((int)uVar58 < 0) goto LAB_0010637f;
        local_540[(int)uVar58] = 0;
        pcVar57 = strstr((char *)local_540,"382");
        if (pcVar57 != (char *)0x0) goto switchD_00105287_default;
        BIO_printf(_bio_err,"STARTTLS failed: %s",local_540);
        break;
      case 0xd:
        pBVar46 = BIO_f_buffer();
        pBVar45 = BIO_new(pBVar46);
        if (pBVar45 == (BIO *)0x0) goto LAB_00105e26;
        bVar8 = false;
        BIO_push(pBVar45,pBVar35);
        do {
          iVar29 = BIO_gets(pBVar45,(char *)local_540,0x4000);
          if ((iVar29 < 2) || (*local_540 != 0x22)) break;
          make_uppercase(local_540);
          iVar29 = strncmp((char *)local_540,"\"STARTTLS\"",10);
          if (iVar29 == 0) {
            bVar8 = true;
          }
        } while (*local_540 == 0x22);
        BIO_ctrl(pBVar45,0xb,0,(void *)0x0);
        BIO_pop(pBVar45);
        BIO_free(pBVar45);
        if (!bVar8) {
          BIO_printf(_bio_err,"Didn\'t find STARTTLS in server response, trying anyway...\n");
        }
        BIO_printf(pBVar35,"STARTTLS\r\n");
        uVar58 = BIO_read(pBVar35,local_540,0x4000);
        if ((int)uVar58 < 0) goto LAB_0010637f;
        local_540[(int)uVar58] = 0;
        if ((int)uVar58 < 2) {
          BIO_printf(_bio_err,"STARTTLS failed: %s",local_540);
        }
        else {
          strncpy((char *)local_538,(char *)local_540,2);
          make_uppercase(local_538);
          iVar29 = strncmp((char *)local_538,"OK",2);
          if (iVar29 == 0) goto switchD_00105287_default;
          BIO_printf(_bio_err,"STARTTLS not supported: %s",local_540);
        }
        break;
      case 0xe:
        local_290 = -1;
        pBVar46 = BIO_s_mem();
        pBVar45 = BIO_new(pBVar46);
        conf = NCONF_new((CONF_METHOD *)0x0);
        if ((pBVar45 == (BIO *)0x0) || (conf == (CONF *)0x0)) {
          BIO_free(pBVar45);
          NCONF_free(conf);
        }
        else {
          BIO_puts(pBVar45,ldap_tls_genconf_5);
          iVar29 = NCONF_load_bio(conf,pBVar45,&local_290);
          if (iVar29 < 1) {
            BIO_free(pBVar45);
            NCONF_free(conf);
            if (local_290 < 1) {
              BIO_printf(_bio_err,"NCONF_load_bio failed\n");
            }
            else {
              BIO_printf(_bio_err,"Error on line %ld\n");
            }
          }
          else {
            BIO_free(pBVar45);
            pcVar57 = NCONF_get_string(conf,"default","asn1");
            if (pcVar57 == (char *)0x0) {
              NCONF_free(conf);
              BIO_printf(_bio_err,"NCONF_get_string failed\n");
            }
            else {
              a_00 = ASN1_generate_nconf(pcVar57,conf);
              if (a_00 != (ASN1_TYPE *)0x0) {
                NCONF_free(conf);
                BIO_write(pBVar35,((a_00->value).asn1_string)->data,
                          ((a_00->value).asn1_string)->length);
                BIO_ctrl(pBVar35,0xb,0,(void *)0x0);
                ASN1_TYPE_free(a_00);
                iVar29 = BIO_read(pBVar35,local_540,0x4000);
                lVar64 = (long)iVar29;
                if (iVar29 < 0) goto LAB_0010637f;
                local_288 = local_540;
                iVar29 = ASN1_get_object(&local_288,(long *)&local_280,&local_2f0,&local_2ec,lVar64)
                ;
                if (((iVar29 == 0x20) && (local_2f0 == 0x10)) &&
                   ((long)local_280 <= (long)(local_540 + (lVar64 - (long)local_288)))) {
                  iVar29 = ASN1_get_object(&local_288,(long *)&local_280,&local_2f0,&local_2ec,
                                           (long)local_280);
                  if (((iVar29 == 0) && (local_2f0 == 2)) &&
                     ((long)local_280 <= (long)(local_540 + (lVar64 - (long)local_288)))) {
                    local_288 = local_288 + (long)local_280;
                    iVar29 = ASN1_get_object(&local_288,(long *)&local_280,&local_2f0,&local_2ec,
                                             (long)(local_540 + (lVar64 - (long)local_288)));
                    if (((iVar29 == 0x20) && (local_2ec == 0x40)) && (local_2f0 == 0x18)) {
                      iVar29 = ASN1_get_object(&local_288,(long *)&local_280,&local_2f0,&local_2ec,
                                               (long)(local_540 + (lVar64 - (long)local_288)));
                      if ((((iVar29 == 0) && (local_2f0 == 10)) && (local_280 != (void *)0x0)) &&
                         ((long)local_280 <= (long)(local_540 + (lVar64 - (long)local_288)))) {
                        uVar58 = 0;
                        for (lVar64 = 0; lVar64 < (long)local_280; lVar64 = lVar64 + 1) {
                          uVar58 = (uint)local_288[lVar64] | uVar58 << 8;
                        }
                        if (-1 < (int)uVar58) {
                          if (uVar58 != 0) {
                            BIO_printf(_bio_err,"STARTTLS failed, LDAP Result Code: %i\n",
                                       (ulong)uVar58);
                            break;
                          }
                          goto switchD_00105287_default;
                        }
                      }
                      else {
                        BIO_printf(_bio_err,"Not LDAPResult\n");
                      }
                    }
                    else {
                      BIO_printf(_bio_err,"Not ExtendedResponse\n");
                    }
                  }
                  else {
                    BIO_printf(_bio_err,"No MessageID\n");
                  }
                }
                else {
                  BIO_printf(_bio_err,"Unexpected LDAP response\n");
                }
                BIO_printf(_bio_err,"ldap_ExtendedResponse_parse failed\n");
                break;
              }
              NCONF_free(conf);
              BIO_printf(_bio_err,"ASN1_generate_nconf failed\n");
            }
          }
        }
        goto LAB_00105cbf;
      }
LAB_0010534a:
      uVar62 = 1;
LAB_00105350:
      if (bVar9) {
        print_stuff(bio_c_out,to,iVar27);
      }
      do_ssl_shutdown(to);
      iVar27 = SSL_get_fd(to);
      shutdown(iVar27,1);
      local_278.tv_usec = _UNK_0010dde8;
      local_278.tv_sec = __LC249;
      do {
        pfVar59 = &local_208;
        for (lVar64 = 0x20; lVar64 != 0; lVar64 = lVar64 + -1) {
          *(undefined4 *)pfVar59->fds_bits = 0;
          pfVar59 = (fd_set *)((long)pfVar59 + (ulong)bVar65 * -8 + 4);
        }
        lVar64 = __fdelt_chk((long)(int)local_300);
        local_208.fds_bits[lVar64] = local_208.fds_bits[lVar64] | 1L << ((byte)local_300 & 0x3f);
        iVar27 = select(local_300 + 1,&local_208,(fd_set *)0x0,(fd_set *)0x0,&local_278);
      } while ((0 < iVar27) && (iVar27 = BIO_read(pBVar35,local_538,0x4000), 0 < iVar27));
      iVar27 = SSL_get_fd(to);
      BIO_closesocket(iVar27);
      local_564 = uVar62;
LAB_00104d87:
      if (to != (SSL *)0x0) {
        if (bVar15) {
          print_stuff(bio_c_out,to,1);
        }
        SSL_free(to);
      }
      goto LAB_0010274d;
    }
    if (iVar54 == 1) {
      if (iVar26 - 2U < 5) {
        pcVar56 = "%s: Intermixed protocol flags (unix and internet domains)\n";
        pbVar36 = prog;
        goto LAB_00102a6f;
      }
    }
    else if ((iVar54 == 0) && (iVar26 == 8)) {
      BIO_printf(_bio_err,"%s: Intermixed protocol flags (internet and unix domains)\n",prog);
      goto LAB_001029d0;
    }
    uVar58 = uVar62;
    if ((((iVar26 != 0x33) && (iVar26 != 0x38)) && (2 < iVar26 - 0x35U)) && (3 < iVar26 - 0x39U)) {
      if (4 < iVar26 - 0xbb9U) goto LAB_0010261c;
      iVar60 = iVar60 + 1;
      if ((iVar60 != 0) && (iVar50 == 1)) {
LAB_00102678:
        BIO_printf(_bio_err,"Cannot supply both a protocol flag and \'-no_<prot>\'\n");
        goto LAB_001029d0;
      }
switchD_001029b5_caseD_bb9:
      if ((local_518 != 0) || (local_518 = OPENSSL_sk_new_null(), local_518 != 0)) {
        uVar32 = opt_flag();
        iVar26 = OPENSSL_sk_push(local_518,uVar32);
        if (iVar26 != 0) {
          opt_arg();
          iVar26 = OPENSSL_sk_push(local_518);
joined_r0x00104294:
          if (iVar26 != 0) goto switchD_0010264b_caseD_0;
        }
      }
LAB_001025fb:
      pcVar56 = "%s: Memory allocation failure\n";
      pbVar36 = prog;
      goto LAB_00102a6f;
    }
    iVar50 = iVar50 + 1;
    if (1 < iVar50) {
      BIO_printf(_bio_err,"Cannot supply multiple protocol flags\n");
      goto LAB_001029d0;
    }
LAB_0010261c:
    if ((iVar50 == 1) && (iVar60 != 0)) goto LAB_00102678;
    if (iVar26 < 0x66) {
      if (-2 < iVar26) goto code_r0x00102644;
      goto switchD_0010264b_caseD_0;
    }
    if (0xbed < iVar26) goto switchD_0010264b_caseD_0;
    if (3000 < iVar26) {
      switch(iVar26) {
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
        goto switchD_001029b5_caseD_bb9;
      case 0xbde:
        bVar8 = true;
        break;
      case 0xbdf:
        bVar14 = true;
        break;
      case 0xbe0:
        local_4e8._0_4_ = 0;
        break;
      case 0xbe1:
        local_4e8._0_4_ = 2;
        break;
      case 0xbe2:
        local_460 = opt_arg();
        break;
      case 0xbe3:
        local_410 = opt_arg();
        break;
      case 0xbe4:
        local_360 = opt_arg();
        break;
      case 0xbe5:
        local_498 = opt_arg();
        break;
      case 0xbe6:
        bVar11 = true;
        break;
      case 0xbe7:
        bVar11 = false;
        break;
      case 0xbe8:
        local_430 = opt_arg();
        break;
      case 0xbe9:
        if ((local_528 != 0) || (local_528 = OPENSSL_sk_new_null(), local_528 != 0)) {
          opt_arg();
          iVar26 = OPENSSL_sk_push(local_528);
          goto joined_r0x00104294;
        }
        goto LAB_001025fb;
      case 0xbea:
        bVar16 = true;
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
      goto switchD_0010264b_caseD_0;
    }
    if (0x644 < iVar26) {
      if (iVar26 - 0x7d1U < 0x1e) {
        iVar26 = opt_verify();
        if (iVar26 == 0) goto LAB_001029d0;
        local_380 = local_380 + 1;
      }
      goto switchD_0010264b_caseD_0;
    }
    if (iVar26 < 0x641) {
      if (0x3ee < iVar26) {
        if (iVar26 - 0x5ddU < 2) {
          iVar26 = opt_rand();
          goto joined_r0x00102ae2;
        }
        goto switchD_0010264b_caseD_0;
      }
      if (iVar26 < 0x3e9) goto switchD_0010264b_caseD_0;
      iVar26 = args_excert();
    }
    else {
      iVar26 = opt_provider();
    }
    goto joined_r0x00102ae2;
  }
  uVar32 = opt_getprog();
  pcVar56 = (char *)0x0;
  BIO_printf(_bio_err,"%s: out of memory\n",uVar32);
  local_564 = 1;
  local_510 = (char *)0x0;
  local_530 = (char *)0x0;
  local_508 = (BIO *)0x0;
  local_500 = 0;
  local_4e0 = (char *)0x0;
  local_4e8 = (char *)0x0;
  local_540 = (byte *)0x0;
  local_538 = (byte *)0x0;
  local_520 = 0;
  local_558 = 0;
  local_528 = 0;
  local_518 = 0;
  local_550 = (X509 *)0x0;
  local_560 = (SSL_CTX *)0x0;
  local_4f0 = (EVP_PKEY *)0x0;
  goto LAB_0010274d;
code_r0x00102644:
  switch(iVar26) {
  default:
    goto switchD_0010264b_caseD_0;
  case 1:
    opt_help(s_client_options);
    local_564 = 0;
    goto LAB_001029db;
  case 2:
    iVar27 = iVar27 + 1;
    iVar54 = 0;
    local_4a0 = iVar26;
    goto switchD_0010264b_caseD_0;
  case 3:
    iVar27 = iVar27 + 1;
    iVar54 = 0;
    local_4a0 = 10;
    goto switchD_0010264b_caseD_0;
  case 4:
    pcVar56 = (char *)opt_arg();
    iVar54 = 0;
    CRYPTO_free(local_2d0);
    local_2d0 = (char *)0x0;
    if (pcVar56 != (char *)0x0) {
      local_2d0 = CRYPTO_strdup(pcVar56,"apps/s_client.c",0x32a);
    }
    goto switchD_0010264b_caseD_0;
  case 5:
    pcVar56 = (char *)opt_arg();
    iVar54 = 0;
    CRYPTO_free(local_2c8);
    local_2c8 = (char *)0x0;
    if (pcVar56 != (char *)0x0) {
      local_2c8 = CRYPTO_strdup(pcVar56,"apps/s_client.c",0x32a);
    }
    goto switchD_0010264b_caseD_0;
  case 6:
    pcVar56 = (char *)opt_arg();
    CRYPTO_free(local_530);
    if (pcVar56 == (char *)0x0) {
      local_530 = (char *)0x0;
      iVar54 = 0;
    }
    else {
      iVar54 = 0;
      local_530 = CRYPTO_strdup(pcVar56,"apps/s_client.c",0x32a);
    }
    goto switchD_0010264b_caseD_0;
  case 7:
    pcVar56 = (char *)opt_arg();
    CRYPTO_free(local_510);
    local_510 = (char *)0x0;
    if (pcVar56 != (char *)0x0) {
      local_510 = CRYPTO_strdup(pcVar56,"apps/s_client.c",0x32a);
    }
    goto switchD_0010264b_caseD_0;
  case 8:
    pcVar56 = (char *)opt_arg();
    CRYPTO_free(local_2d0);
    local_2d0 = (char *)0x0;
    if (pcVar56 == (char *)0x0) {
      local_4a0 = 1;
      iVar54 = 1;
    }
    else {
      iVar54 = 1;
      local_2d0 = CRYPTO_strdup(pcVar56,"apps/s_client.c",0x32a);
      local_4a0 = 1;
    }
    goto switchD_0010264b_caseD_0;
  case 9:
  case 0x5c:
    local_490 = (char *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 10:
    pcVar56 = (char *)opt_arg();
    uVar48 = strtol(pcVar56,(char **)0x0,10);
    local_474 = 1;
    _verify_args = (undefined4)uVar48;
    if (c_quiet == 0) {
      BIO_printf(_bio_err,"verify depth is %d\n",uVar48 & 0xffffffff);
    }
    goto switchD_0010264b_caseD_0;
  case 0xb:
    uVar32 = opt_arg();
    iVar26 = set_nameopt(uVar32);
    goto joined_r0x00102ae2;
  case 0xc:
    local_550 = (X509 *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0xd:
    local_558 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0xe:
    local_33c = 1;
    goto switchD_0010264b_caseD_0;
  case 0xf:
    sess_out = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x10:
    local_458 = (byte *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x11:
    uVar32 = opt_arg();
    iVar26 = opt_format(uVar32,0xffe,&local_308);
    break;
  case 0x12:
    uVar32 = opt_arg();
    iVar26 = opt_format(uVar32,6,&local_2f8);
    break;
  case 0x13:
    _DAT_0010f564 = 1;
    local_474 = 1;
    goto switchD_0010264b_caseD_0;
  case 0x14:
    _DAT_0010f55c = 1;
    goto switchD_0010264b_caseD_0;
  case 0x15:
    c_quiet = 1;
    _DAT_0010f55c = 1;
    bVar20 = true;
    goto switchD_0010264b_caseD_0;
  case 0x16:
    bVar15 = true;
    goto switchD_0010264b_caseD_0;
  case 0x17:
    bVar21 = true;
    goto switchD_0010264b_caseD_0;
  case 0x18:
    bVar22 = true;
    goto switchD_0010264b_caseD_0;
  case 0x19:
    c_quiet = 1;
    bVar23 = true;
    goto switchD_0010264b_caseD_0;
  case 0x1a:
    local_3fc = 1;
    goto switchD_0010264b_caseD_0;
  case 0x1b:
    uVar32 = opt_arg();
    local_468 = (ENGINE *)setup_engine_methods(uVar32,0xffffffff,0);
    if (local_468 == (ENGINE *)0x0) {
      BIO_printf(_bio_err,"Error getting client auth engine\n");
      goto switchD_0010264b_caseD_ffffffff;
    }
    goto switchD_0010264b_caseD_0;
  case 0x1c:
    bVar23 = true;
    goto switchD_0010264b_caseD_0;
  case 0x1d:
    bVar23 = false;
    goto switchD_0010264b_caseD_0;
  case 0x1e:
    c_debug = 1;
    goto switchD_0010264b_caseD_0;
  case 0x1f:
    bVar18 = true;
    goto switchD_0010264b_caseD_0;
  case 0x20:
    bVar19 = true;
    goto switchD_0010264b_caseD_0;
  case 0x22:
    local_480 = 1;
    goto switchD_0010264b_caseD_0;
  case 0x23:
    pcVar56 = (char *)opt_arg();
    local_508 = BIO_new_file(pcVar56,"w");
    if (local_508 == (BIO *)0x0) {
      uVar32 = opt_arg();
      pcVar56 = (char *)0x0;
      BIO_printf(_bio_err,"Error writing file %s\n",uVar32);
      local_564 = 1;
      local_4e0 = (char *)0x0;
      local_4e8 = (char *)0x0;
      local_558 = 0;
      local_550 = (X509 *)0x0;
      local_560 = (SSL_CTX *)0x0;
      local_4f0 = (EVP_PKEY *)0x0;
      goto LAB_0010274d;
    }
    goto switchD_0010264b_caseD_0;
  case 0x24:
    uVar32 = opt_arg();
    local_500 = setup_engine_methods(uVar32,0xffffffff,1);
    goto switchD_0010264b_caseD_0;
  case 0x25:
    local_480 = 2;
    goto switchD_0010264b_caseD_0;
  case 0x26:
    local_47c = 1;
    goto switchD_0010264b_caseD_0;
  case 0x27:
    local_47c = 2;
    goto switchD_0010264b_caseD_0;
  case 0x28:
    c_showcerts = 1;
    goto switchD_0010264b_caseD_0;
  case 0x29:
    local_400 = 1;
    goto switchD_0010264b_caseD_0;
  case 0x2a:
    bVar10 = true;
    goto switchD_0010264b_caseD_0;
  case 0x2b:
    psk_identity = (undefined *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x2c:
    pbVar36 = (byte *)opt_arg();
    bVar2 = *pbVar36;
    _psk_key = pbVar36;
    if (bVar2 != 0) {
      ppuVar37 = __ctype_b_loc();
      pbVar38 = pbVar36;
      do {
        if ((*(byte *)((long)*ppuVar37 + (ulong)bVar2 * 2 + 1) & 0x10) == 0) {
          pcVar56 = "Not a hex number \'%s\'\n";
          goto LAB_00102a6f;
        }
        bVar2 = pbVar38[1];
        pbVar38 = pbVar38 + 1;
      } while (bVar2 != 0);
    }
    goto switchD_0010264b_caseD_0;
  case 0x2d:
    local_488 = (byte *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x2e:
    uVar32 = opt_arg();
    local_258._8_8_ = uVar32;
    uVar58 = 0x301;
    if (0x300 < uVar62) {
      uVar58 = uVar62;
    }
    goto switchD_0010264b_caseD_0;
  case 0x2f:
    local_3a8 = opt_arg();
    uVar58 = 0x301;
    if (0x300 < uVar62) {
      uVar58 = uVar62;
    }
    goto switchD_0010264b_caseD_0;
  case 0x30:
    pcVar56 = (char *)opt_arg();
    uVar48 = strtol(pcVar56,(char **)0x0,10);
    uStack_240 = CONCAT44((int)uVar48,(undefined4)uStack_240);
    BIO_printf(_bio_err,"SRP minimal length for N is %d\n",uVar48 & 0xffffffff);
    uVar58 = 0x301;
    if (0x300 < uVar62) {
      uVar58 = uVar62;
    }
    goto switchD_0010264b_caseD_0;
  case 0x31:
    local_3bc = 1;
    uVar58 = 0x301;
    if (0x300 < uVar62) {
      uVar58 = uVar62;
    }
    goto switchD_0010264b_caseD_0;
  case 0x32:
    uStack_240 = CONCAT44(uStack_240._4_4_,1);
    uVar58 = 0x301;
    if (0x300 < uVar62) {
      uVar58 = uVar62;
    }
    goto switchD_0010264b_caseD_0;
  case 0x33:
    local_564 = 0;
    local_4bc = 0;
    iVar51 = 0x300;
    local_4a8 = 1;
    uVar58 = 0x300;
    goto switchD_0010264b_caseD_0;
  case 0x34:
    local_3e8 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x35:
    local_564 = 0;
    local_4bc = 0;
    iVar51 = 0x304;
    local_4a8 = 1;
    uVar58 = 0x304;
    goto switchD_0010264b_caseD_0;
  case 0x36:
    local_564 = 0;
    local_4bc = 0;
    iVar51 = 0x303;
    local_4a8 = 1;
    uVar58 = 0x303;
    goto switchD_0010264b_caseD_0;
  case 0x37:
    local_564 = 0;
    local_4bc = 0;
    iVar51 = 0x302;
    local_4a8 = 1;
    uVar58 = 0x302;
    goto switchD_0010264b_caseD_0;
  case 0x38:
    local_564 = 0;
    local_4bc = 0;
    iVar51 = 0x301;
    local_4a8 = 1;
    uVar58 = 0x301;
    goto switchD_0010264b_caseD_0;
  case 0x39:
    local_560 = (SSL_CTX *)DTLS_client_method();
    local_564 = 0;
    local_4bc = 1;
    local_4a8 = 2;
    goto switchD_0010264b_caseD_0;
  case 0x3a:
    local_560 = (SSL_CTX *)DTLS_client_method();
    local_564 = 0;
    local_4bc = 1;
    iVar51 = 0xfeff;
    local_4a8 = 2;
    uVar58 = 0xfeff;
    goto switchD_0010264b_caseD_0;
  case 0x3b:
    local_560 = (SSL_CTX *)DTLS_client_method();
    local_564 = 0;
    local_4bc = 1;
    iVar51 = 0xfefd;
    local_4a8 = 2;
    uVar58 = 0xfefd;
    goto switchD_0010264b_caseD_0;
  case 0x3c:
    local_560 = (SSL_CTX *)OSSL_QUIC_client_method();
    local_564 = 1;
    local_4bc = 0;
    iVar51 = 0;
    local_4a8 = 2;
    uVar58 = 0;
    goto switchD_0010264b_caseD_0;
  case 0x3e:
    bVar17 = true;
    goto switchD_0010264b_caseD_0;
  case 0x3f:
    pcVar56 = (char *)opt_arg();
    local_420 = strtol(pcVar56,(char **)0x0,10);
    goto switchD_0010264b_caseD_0;
  case 0x40:
    uVar32 = opt_arg();
    iVar26 = opt_format(uVar32,0xffe,&local_304);
    break;
  case 0x41:
    local_348 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x42:
    local_418 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x43:
    local_408 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x44:
    local_44c = 5;
    goto switchD_0010264b_caseD_0;
  case 0x45:
    goto switchD_0010264b_caseD_0;
  case 0x46:
    local_428 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x47:
    local_3f0 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x48:
    local_378 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x49:
    local_3d8 = 1;
    goto switchD_0010264b_caseD_0;
  case 0x4a:
    local_358 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x4b:
    local_3b0 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x4c:
    local_370 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x4d:
    local_340 = 1;
    goto switchD_0010264b_caseD_0;
  case 0x4e:
    local_388 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x4f:
    local_3b8 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x50:
    local_368 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x51:
    local_3d4 = 1;
    goto switchD_0010264b_caseD_0;
  case 0x52:
    local_350 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x53:
    local_3a0 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x54:
    pcVar56 = (char *)opt_arg();
    sVar47 = strlen(pcVar56);
    iVar26 = (int)sVar47;
    if (-1 < iVar26) {
      lVar64 = 0;
      iVar28 = 0;
      do {
        iVar63 = (int)lVar64;
        if ((iVar26 == iVar63) || (pcVar56[lVar64] == ',')) {
          lVar39 = strtol(pcVar56 + iVar28,(char **)0x0,10);
          lVar40 = (long)iVar29;
          iVar29 = iVar29 + 1;
          auStack_108[lVar40] = (ushort)lVar39;
          if (iVar29 == 100) {
            iVar29 = 100;
            break;
          }
          iVar28 = iVar63 + 1;
        }
        lVar64 = lVar64 + 1;
      } while (iVar63 + 1 <= iVar26);
    }
    goto switchD_0010264b_caseD_0;
  case 0x55:
    uVar32 = opt_arg();
    iVar26 = opt_pair(uVar32,services,&local_2fc);
joined_r0x00102ae2:
    if (iVar26 == 0) goto LAB_001029d0;
    goto switchD_0010264b_caseD_0;
  case 0x56:
    local_4b0 = (char *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x57:
    bVar9 = true;
    goto switchD_0010264b_caseD_0;
  case 0x58:
    bVar25 = true;
    goto switchD_0010264b_caseD_0;
  case 0x59:
    local_3c8 = (char *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x5a:
    keymatexportlabel = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x5b:
    pcVar56 = (char *)opt_arg();
    lVar64 = strtol(pcVar56,(char **)0x0,10);
    keymatexportlen = (undefined4)lVar64;
    goto switchD_0010264b_caseD_0;
  case 0x5d:
    pcVar56 = (char *)opt_arg();
    lVar64 = strtol(pcVar56,(char **)0x0,10);
    iVar26 = (int)lVar64;
    if (iVar26 == 0x800) {
      bVar24 = 3;
      goto switchD_0010264b_caseD_0;
    }
    if (iVar26 < 0x801) {
      if (iVar26 == 0x200) {
        bVar24 = 1;
        goto switchD_0010264b_caseD_0;
      }
      if (iVar26 == 0x400) {
        bVar24 = 2;
        goto switchD_0010264b_caseD_0;
      }
    }
    else if (iVar26 == 0x1000) {
      bVar24 = 4;
      goto switchD_0010264b_caseD_0;
    }
    BIO_printf(_bio_err,"%s: Max Fragment Len %u is out of permitted values",prog);
    goto switchD_0010264b_caseD_ffffffff;
  case 0x5e:
    pcVar56 = (char *)opt_arg();
    lVar64 = strtol(pcVar56,(char **)0x0,10);
    local_440 = (uint)lVar64;
    goto switchD_0010264b_caseD_0;
  case 0x5f:
    pcVar56 = (char *)opt_arg();
    lVar64 = strtol(pcVar56,(char **)0x0,10);
    local_43c = (uint)lVar64;
    goto switchD_0010264b_caseD_0;
  case 0x60:
    pcVar56 = (char *)opt_arg();
    lVar64 = strtol(pcVar56,(char **)0x0,10);
    local_450 = (uint)lVar64;
    goto switchD_0010264b_caseD_0;
  case 0x61:
    pcVar56 = (char *)opt_arg();
    lVar64 = strtol(pcVar56,(char **)0x0,10);
    local_38c = (int)lVar64;
    goto switchD_0010264b_caseD_0;
  case 0x62:
    local_330 = opt_arg();
    goto switchD_0010264b_caseD_0;
  case 99:
    local_3e0 = (char *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 100:
    local_3f8 = (char *)opt_arg();
    goto switchD_0010264b_caseD_0;
  case 0x65:
    local_49c = 1;
    goto switchD_0010264b_caseD_0;
  case -1:
    goto switchD_0010264b_caseD_ffffffff;
  }
  if (iVar26 == 0) goto switchD_0010264b_caseD_ffffffff;
  goto switchD_0010264b_caseD_0;
LAB_001064f2:
  if (iVar51 != 9) {
LAB_00106462:
    BIO_printf(_bio_err,"Error writing early data\n");
    BIO_free(pBVar45);
    ERR_print_errors(_bio_err);
    goto LAB_0010534a;
  }
  goto LAB_0010642a;
LAB_00105e48:
  local_44c = local_44c + -1;
  BIO_printf(bio_c_out,"drop connection and then reconnect\n");
  do_ssl_shutdown(to);
  SSL_set_connect_state(to);
  iVar29 = SSL_get_fd(to);
  BIO_closesocket(iVar29);
  bVar9 = false;
  goto LAB_00104ef0;
switchD_0010264b_caseD_ffffffff:
  pcVar56 = "%s: Use -help for summary.\n";
  pbVar36 = prog;
LAB_00102a6f:
  BIO_printf(_bio_err,pcVar56,pbVar36);
LAB_001029d0:
  local_564 = 1;
LAB_001029db:
  pcVar56 = (char *)0x0;
  local_4e0 = (char *)0x0;
  local_4e8 = (char *)0x0;
  local_558 = 0;
  local_550 = (X509 *)0x0;
  local_560 = (SSL_CTX *)0x0;
  local_4f0 = (EVP_PKEY *)0x0;
LAB_0010274d:
  SSL_SESSION_free(psksess);
  CRYPTO_free(next_proto);
  SSL_CTX_free(local_560);
  set_keylog_file(0,0);
  X509_free(local_550);
  OPENSSL_sk_pop_free(local_558,X509_CRL_free);
  EVP_PKEY_free(local_4f0);
  OSSL_STACK_OF_X509_free(local_2e8);
  CRYPTO_free(local_2b0);
  CRYPTO_free((void *)local_258._0_8_);
  CRYPTO_free(pcVar56);
  BIO_ADDR_free(local_298);
  CRYPTO_free(local_530);
  CRYPTO_free(local_510);
  CRYPTO_free(local_2c0);
  CRYPTO_free(local_2b8);
  CRYPTO_free(local_2d0);
  CRYPTO_free(local_2c8);
  CRYPTO_free(local_4e8);
  CRYPTO_free(local_4e0);
  X509_VERIFY_PARAM_free(vpm);
  ssl_excert_free(local_2e0);
  OPENSSL_sk_free(local_518);
  OPENSSL_sk_free(local_528);
  SSL_CONF_CTX_free(lVar49);
  CRYPTO_clear_free(local_520,0x4000,"apps/s_client.c",0xd18);
  CRYPTO_clear_free(local_538,0x4000,"apps/s_client.c",0xd19);
  CRYPTO_clear_free(local_540,0x4000,"apps/s_client.c",0xd1a);
  clear_free(local_2d8);
  release_engine(local_500);
  BIO_free(bio_c_out);
  bio_c_out = (BIO *)0x0;
  BIO_free(local_508);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_564;
}


