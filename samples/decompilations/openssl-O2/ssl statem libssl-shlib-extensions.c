
undefined8 init_session_ticket(long param_1)

{
  if (*(int *)(param_1 + 0x78) == 0) {
    *(undefined4 *)(param_1 + 0xa60) = 0;
  }
  return 1;
}



undefined8 init_npn(long param_1)

{
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  return 1;
}



undefined8 init_etm(long param_1)

{
  *(undefined4 *)(param_1 + 0xb14) = 0;
  return 1;
}



undefined8 init_ems(long param_1)

{
  if ((*(ulong *)(param_1 + 0x160) & 0x200) != 0) {
    *(ulong *)(param_1 + 0x160) = *(ulong *)(param_1 + 0x160) & 0xfffffffffffffdff | 0x1000;
  }
  return 1;
}



undefined8 init_srtp(long param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined8 *)(param_1 + 0xb98) = 0;
  }
  return 1;
}



undefined8 init_psk_kex_modes(long param_1)

{
  *(undefined4 *)(param_1 + 0xb10) = 0;
  return 1;
}



undefined8 init_post_handshake_auth(long param_1)

{
  *(undefined4 *)(param_1 + 0xba8) = 0;
  return 1;
}



undefined8 tls_construct_compress_certificate(void)

{
  return 2;
}



undefined8 tls_parse_compress_certificate(void)

{
  return 1;
}



undefined8 init_server_cert_type(long param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined2 *)(param_1 + 0xb52) = 0;
  }
  return 1;
}



undefined8 init_client_cert_type(long param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined2 *)(param_1 + 0xb50) = 0;
  }
  return 1;
}



undefined8 final_ems(long param_1)

{
  undefined8 uVar1;
  
  if (((uint)*(ulong *)(param_1 + 0x160) & 0x1200) == 0x1000) {
    ERR_new();
    uVar1 = 0x4f0;
  }
  else {
    if (((*(int *)(param_1 + 0x78) != 0) || (*(int *)(param_1 + 0x508) == 0)) ||
       ((((byte)(*(ulong *)(param_1 + 0x160) >> 9) ^ 1) & 1) ==
        (~(byte)*(undefined4 *)(*(long *)(param_1 + 0x900) + 0x378) & 1))) {
      return 1;
    }
    ERR_new();
    uVar1 = 0x4fa;
  }
  ERR_set_debug("ssl/statem/extensions.c",uVar1,"final_ems");
  ossl_statem_fatal(param_1,0x28,0x68,0);
  return 0;
}



undefined8 final_renegotiate(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    if (((*(ulong *)(param_1 + 0x9b0) & 0x40004) == 0) && (param_3 == 0)) {
      ERR_new();
      uVar1 = 0x3b4;
LAB_00100281:
      ERR_set_debug("ssl/statem/extensions.c",uVar1,"final_renegotiate");
      ossl_statem_fatal(param_1,0x28,0x152,0);
      return 0;
    }
  }
  else if (((*(int *)(param_1 + 0xba0) != 0) && ((*(byte *)(param_1 + 0x9b2) & 4) == 0)) &&
          (param_3 == 0)) {
    ERR_new();
    uVar1 = 0x3c0;
    goto LAB_00100281;
  }
  return 1;
}



undefined8 tls_construct_certificate_authorities(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = get_ca_names();
  if ((lVar2 == 0) || (iVar1 = OPENSSL_sk_num(lVar2), iVar1 == 0)) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2f,2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    ERR_new();
    uVar3 = 0x516;
  }
  else {
    iVar1 = construct_ca_names(param_1,lVar2,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WPACKET_close(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    uVar3 = 0x520;
  }
  ERR_set_debug("ssl/statem/extensions.c",uVar3,"tls_construct_certificate_authorities");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



undefined8 tls_parse_certificate_authorities(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = parse_ca_names();
  if (iVar1 != 0) {
    if (*(long *)(param_2 + 8) == 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("ssl/statem/extensions.c",0x52e,"tls_parse_certificate_authorities");
    ossl_statem_fatal(param_1,0x32,0x6e,0);
  }
  return 0;
}



undefined8 init_certificate_authorities(long param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x358),&X509_NAME_free);
  *(undefined8 *)(param_1 + 0x358) = 0;
  return 1;
}



bool final_early_data(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((param_2 == 0x400) && (*(int *)(param_1 + 0xb1c) == 0)) {
        ERR_new();
        ERR_set_debug("ssl/statem/extensions.c",0x6ab,"final_early_data");
        ossl_statem_fatal(param_1,0x2f,0xe9,0);
        return false;
      }
    }
    else {
      if (((((*(int *)(param_1 + 0x1540) != 0) && (*(int *)(param_1 + 0x508) != 0)) &&
           (*(int *)(param_1 + 0xf0) == 9)) &&
          ((*(int *)(param_1 + 0xb1c) != 0 && (*(int *)(param_1 + 0x8d0) == 0)))) &&
         ((*(code **)(param_1 + 0x1568) == (code *)0x0 ||
          (iVar1 = (**(code **)(param_1 + 0x1568))
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x1570)),
          iVar1 != 0)))) {
        *(undefined4 *)(param_1 + 0xb18) = 2;
        iVar1 = tls13_change_cipher_state(param_1,0x61);
        return iVar1 != 0;
      }
      *(undefined4 *)(param_1 + 0xb18) = 1;
    }
  }
  return true;
}



undefined8 tls_init_compress_certificate(long param_1)

{
  *(undefined1 (*) [16])(param_1 + 0xb3c) = (undefined1  [16])0x0;
  return 1;
}



undefined8 final_key_share(long param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  short sVar3;
  uint uVar4;
  
  if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
       (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) && (0x303 < iVar1)) &&
     ((param_2 & 0x800) == 0)) {
    if (*(int *)(param_1 + 0x78) == 0 && param_3 == 0) {
      if ((*(byte *)(param_1 + 0xb10) & 1) == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/extensions.c",0x56d,"final_key_share");
        ossl_statem_fatal(param_1,0x2f,0x65,0);
        return 0;
      }
      if (*(int *)(param_1 + 0x508) == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/extensions.c",0x571,"final_key_share");
        ossl_statem_fatal(param_1,0x6d,0x65,0);
        return 0;
      }
LAB_0010059c:
      iVar1 = tls13_generate_handshake_secret(param_1,0,0);
      if (iVar1 != 0) goto LAB_001005b0;
      ERR_new();
      uVar2 = 0x5dc;
    }
    else {
      if (*(int *)(param_1 + 0x78) == 0) {
        if (param_3 != 0) goto LAB_001005b0;
        goto LAB_0010059c;
      }
      iVar1 = *(int *)(param_1 + 0x8d0);
      if (*(long *)(param_1 + 0x4e0) == 0) {
        if ((param_3 == 0) || (iVar1 != 0)) {
          if (*(int *)(param_1 + 0x508) != 0) {
            uVar4 = *(uint *)(param_1 + 0xb10);
LAB_00100670:
            if ((uVar4 & 1) != 0) {
              if (((*(byte *)(param_1 + 0x161) & 8) != 0) && (*(int *)(param_1 + 0xb30) == 0)) {
                if (iVar1 == 0) goto LAB_001005f3;
                ERR_new();
                uVar2 = 0x5c7;
                goto LAB_00100622;
              }
              goto LAB_00100600;
            }
          }
          ERR_new();
          ERR_set_debug("ssl/statem/extensions.c",0x5b9,"final_key_share");
          uVar2 = 0x6d;
          if (param_3 == 0) goto LAB_0010076e;
        }
        else {
          if (*(int *)(param_1 + 0x508) == 0) {
            sVar3 = *(short *)(param_1 + 0x4e8);
            if (sVar3 != 0) {
LAB_001007d5:
              *(short *)(param_1 + 0x4de) = sVar3;
              goto LAB_001005f3;
            }
          }
          else {
            uVar4 = *(uint *)(param_1 + 0xb10);
            if ((uVar4 & 2) != 0) {
              sVar3 = *(short *)(param_1 + 0x4e8);
              if (sVar3 == 0) goto LAB_00100670;
              goto LAB_001007d5;
            }
            if ((uVar4 & 1) != 0) {
              if (((*(byte *)(param_1 + 0x161) & 8) != 0) && (*(int *)(param_1 + 0xb30) == 0))
              goto LAB_001005f3;
              goto LAB_001005b0;
            }
          }
          ERR_new();
          ERR_set_debug("ssl/statem/extensions.c",0x5b9,"final_key_share");
        }
        uVar2 = 0x28;
LAB_0010076e:
        ossl_statem_fatal(param_1,uVar2,0x65,0);
        return 0;
      }
      if (((*(byte *)(param_1 + 0x161) & 8) == 0) || (*(int *)(param_1 + 0xb30) != 0)) {
LAB_00100600:
        if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 0x8d0) = 2;
        }
        goto LAB_001005b0;
      }
      if (iVar1 == 0) {
LAB_001005f3:
        *(undefined4 *)(param_1 + 0x8d0) = 1;
        goto LAB_001005b0;
      }
      ERR_new();
      uVar2 = 0x5a2;
    }
LAB_00100622:
    ERR_set_debug("ssl/statem/extensions.c",uVar2,"final_key_share");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    uVar2 = 0;
  }
  else {
LAB_001005b0:
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 init_sig_algs(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x3e0));
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  return 1;
}



undefined8 init_sig_algs_cert(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 1000));
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  return 1;
}



undefined8 init_ec_point_formats(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0xa80));
  *(undefined8 *)(param_1 + 0xa80) = 0;
  *(undefined8 *)(param_1 + 0xa78) = 0;
  return 1;
}



undefined8 init_srp(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0xbf0));
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  return 1;
}



undefined8 final_alpn(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0 && *(int *)(param_1 + 0x78) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x900) + 0x348) != 0) {
      *(undefined4 *)(param_1 + 0xb1c) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x78) != 0) {
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) && (0x303 < iVar1)) {
      uVar2 = tls_handle_alpn();
      return uVar2;
    }
  }
  return 1;
}



undefined8 final_maxfragmentlen(long param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x900) + 0x358);
  if (cVar1 == -1) {
    *(undefined1 *)(*(long *)(param_1 + 0x900) + 0x358) = 0;
  }
  else {
    bVar3 = cVar1 - 1;
    if (bVar3 < 4) {
      (**(code **)(*(long *)(param_1 + 0xc70) + 0xa0))
                (*(undefined8 *)(param_1 + 0xc80),0x200 << (bVar3 & 0x1f));
      pcVar2 = *(code **)(*(long *)(param_1 + 0xc78) + 0xa0);
      uVar4 = ssl_get_max_send_fragment(param_1);
      (*pcVar2)(*(undefined8 *)(param_1 + 0xc88),uVar4);
      return 1;
    }
  }
  return 1;
}



undefined8
final_server_name(SSL *param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5,
                 int *param_6)

{
  int *piVar1;
  SSL_METHOD *pSVar2;
  SSL *s;
  SSL_METHOD *pSVar3;
  _func_3064 *p_Var4;
  EVP_MD_CTX *pEVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  SSL_SESSION *pSVar11;
  EVP_PKEY_CTX *pEVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  pSVar2 = param_1->method;
  s = *(SSL **)&param_1->quiet_shutdown;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0x70;
  uVar9 = SSL_get_options();
  if ((pSVar2 == (SSL_METHOD *)0x0) ||
     (pSVar3 = *(SSL_METHOD **)&param_1[4].mac_flags, pSVar3 == (SSL_METHOD *)0x0)) {
    ERR_new();
    uVar13 = 1000;
    goto LAB_00100de8;
  }
  p_Var4 = pSVar2[2].ssl_get_message;
  if (p_Var4 == (_func_3064 *)0x0) {
    p_Var4 = pSVar3[2].ssl_get_message;
    if (p_Var4 != (_func_3064 *)0x0) {
      lVar10 = (*p_Var4)(s,(int)&local_34,(int)pSVar3[2].ssl_read_bytes,(int)p_Var4,param_5,param_6)
      ;
      iVar8 = (int)lVar10;
      goto LAB_00100a88;
    }
    if ((((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
         (lVar10._0_4_ = param_1[1].server, lVar10._4_4_ = param_1[1].new_session, lVar10 == 0)) &&
        (pSVar3 != pSVar2)) && (*(int *)&param_1[3].cipher_list_by_id == 0)) {
      iVar8 = 3;
      goto LAB_00100d10;
    }
    goto LAB_00100c12;
  }
  lVar10 = (*p_Var4)(s,(int)&local_34,(int)pSVar2[2].ssl_read_bytes,(int)p_Var4,param_5,param_6);
  iVar8 = (int)lVar10;
LAB_00100a88:
  if (((*(int *)&param_1->s2 == 0) || (param_3 == 0)) || (iVar8 != 0)) {
    if (((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
        (lVar6._0_4_ = param_1[1].server, lVar6._4_4_ = param_1[1].new_session, lVar6 == 0)) &&
       ((*(SSL_METHOD **)&param_1[4].mac_flags != pSVar2 &&
        (*(int *)&param_1[3].cipher_list_by_id == 0)))) goto LAB_00100d10;
LAB_00100bc5:
    if (iVar8 == 0) goto LAB_00100ae0;
    if (iVar8 == 2) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions.c",0x430,"final_server_name");
      ossl_statem_fatal(param_1,local_34,0xea,0);
      uVar13 = 0;
      goto LAB_00100c21;
    }
    if (iVar8 == 3) {
LAB_00100c12:
      *(undefined4 *)&param_1[4].msg_callback_arg = 0;
    }
    else if (iVar8 == 1) {
      if ((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
          (iVar8 = *(int *)&param_1->wbio->method, iVar8 < 0x304)) || (iVar8 == 0x10000)) {
        ssl3_send_alert(param_1,1,local_34);
      }
      goto LAB_00100c12;
    }
  }
  else {
    if (*(int *)&param_1[1].tls_session_ticket_ext_cb == 0) {
      CRYPTO_free(param_1[3].write_hash[0x10].pctx);
      pEVar5 = param_1[3].write_hash;
      pEVar12 = (EVP_PKEY_CTX *)
                CRYPTO_strdup((char *)param_1[3].tlsext_ocsp_resp,"ssl/statem/extensions.c",0x3ff);
      pEVar5[0x10].pctx = pEVar12;
      if ((param_1[3].write_hash[0x10].pctx == (EVP_PKEY_CTX *)0x0) &&
         (param_1[3].tlsext_ocsp_resp != (uchar *)0x0)) {
        ERR_new();
        ERR_set_debug("ssl/statem/extensions.c",0x401,"final_server_name");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
    }
    if ((((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
         (lVar7._0_4_ = param_1[1].server, lVar7._4_4_ = param_1[1].new_session, lVar7 == 0)) &&
        (pSVar2 != *(SSL_METHOD **)&param_1[4].mac_flags)) &&
       (iVar8 = 0, *(int *)&param_1[3].cipher_list_by_id == 0)) {
LAB_00100d10:
      LOCK();
      piVar1 = (int *)((long)&pSVar2->ssl_ctrl + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(*(long *)&param_1[4].mac_flags + 0x84);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      goto LAB_00100bc5;
    }
LAB_00100ae0:
    if (((*(int *)&param_1[3].tlsext_session_ticket != 0) && ((uVar9 & 0x4000) == 0)) &&
       ((uVar9 = SSL_get_options(param_1), (uVar9 & 0x4000) != 0 &&
        (*(undefined4 *)&param_1[3].tlsext_session_ticket = 0,
        *(int *)&param_1[1].tls_session_ticket_ext_cb == 0)))) {
      pSVar11 = SSL_get_session(param_1);
      if (pSVar11 == (SSL_SESSION *)0x0) {
        ERR_new();
        uVar13 = 0x428;
      }
      else {
        CRYPTO_free(*(void **)(pSVar11[1].krb5_client_princ + 0x40));
        pSVar11[1].krb5_client_princ[0x40] = '\0';
        pSVar11[1].krb5_client_princ[0x41] = '\0';
        pSVar11[1].krb5_client_princ[0x42] = '\0';
        pSVar11[1].krb5_client_princ[0x43] = '\0';
        pSVar11[1].krb5_client_princ[0x44] = '\0';
        pSVar11[1].krb5_client_princ[0x45] = '\0';
        pSVar11[1].krb5_client_princ[0x46] = '\0';
        pSVar11[1].krb5_client_princ[0x47] = '\0';
        pSVar11[1].krb5_client_princ[0x58] = '\0';
        pSVar11[1].krb5_client_princ[0x59] = '\0';
        pSVar11[1].krb5_client_princ[0x5a] = '\0';
        pSVar11[1].krb5_client_princ[0x5b] = '\0';
        pSVar11[1].krb5_client_princ[0x48] = '\0';
        pSVar11[1].krb5_client_princ[0x49] = '\0';
        pSVar11[1].krb5_client_princ[0x4a] = '\0';
        pSVar11[1].krb5_client_princ[0x4b] = '\0';
        pSVar11[1].krb5_client_princ[0x4c] = '\0';
        pSVar11[1].krb5_client_princ[0x4d] = '\0';
        pSVar11[1].krb5_client_princ[0x4e] = '\0';
        pSVar11[1].krb5_client_princ[0x4f] = '\0';
        pSVar11[1].krb5_client_princ[0x50] = '\0';
        pSVar11[1].krb5_client_princ[0x51] = '\0';
        pSVar11[1].krb5_client_princ[0x52] = '\0';
        pSVar11[1].krb5_client_princ[0x53] = '\0';
        pSVar11[1].krb5_client_princ[0x54] = '\0';
        pSVar11[1].krb5_client_princ[0x55] = '\0';
        pSVar11[1].krb5_client_princ[0x56] = '\0';
        pSVar11[1].krb5_client_princ[0x57] = '\0';
        iVar8 = ssl_generate_session_id(param_1,pSVar11);
        if (iVar8 != 0) goto LAB_00100c1c;
        ERR_new();
        uVar13 = 0x424;
      }
LAB_00100de8:
      ERR_set_debug("ssl/statem/extensions.c",uVar13,"final_server_name");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      uVar13 = 0;
      goto LAB_00100c21;
    }
  }
LAB_00100c1c:
  uVar13 = 1;
LAB_00100c21:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



undefined4 final_psk(long param_1,undefined8 param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x78) != 0) && (param_3 != 0)) {
    if (*(long *)(param_1 + 0xb58) == 0) {
      return 1;
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0xb58) + 0x288) + 0x330) == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions.c",0x6e9,"final_psk");
      ossl_statem_fatal(param_1,0x6d,0x136,0);
      return 0;
    }
  }
  return 1;
}



undefined8 final_supported_versions(undefined8 param_1,int param_2,int param_3)

{
  if ((param_3 == 0) && (param_2 == 0x800)) {
    ERR_new();
    ERR_set_debug("ssl/statem/extensions.c",0x54d,"final_supported_versions");
    ossl_statem_fatal(param_1,0x6d,0x1a4,0);
    return 0;
  }
  return 1;
}



undefined4 final_sig_algs(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0) {
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
      iVar1 = **(int **)(param_1 + 0x18);
      if (((iVar1 < 0x304) || (iVar1 == 0x10000)) || (*(int *)(param_1 + 0x508) != 0)) {
        uVar2 = 1;
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/statem/extensions.c",0x541,"final_sig_algs");
        ossl_statem_fatal(param_1,0x6d,0x70,0);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



undefined4 final_ec_pt_formats(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_1 + 0x78) == 0) && (*(long *)(param_1 + 0xa70) != 0)) &&
      (*(long *)(param_1 + 0xa68) != 0)) &&
     (((*(long *)(param_1 + 0xa80) != 0 && (lVar1 = *(long *)(param_1 + 0xa78), lVar1 != 0)) &&
      ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & 8) != 0 ||
       (*(uint *)(*(long *)(param_1 + 0x300) + 0x1c) & 4) != 0)))) {
    lVar2 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xa80) + lVar2) == '\0') {
        if (lVar2 != lVar1) goto LAB_00101090;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    ERR_new();
    ERR_set_debug("ssl/statem/extensions.c",0x461,"final_ec_pt_formats");
    ossl_statem_fatal(param_1,0x2f,0x9d,0);
    uVar3 = 0;
  }
  else {
LAB_00101090:
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 init_status_request(long param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0xa28) = 0xffffffff;
    return 1;
  }
  CRYPTO_free(*(void **)(param_1 + 0xa50));
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  return 1;
}



undefined8 init_server_name(long param_1)

{
  if (*(int *)(param_1 + 0x78) == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xb60) = 0;
  CRYPTO_free(*(void **)(param_1 + 0xa20));
  *(undefined8 *)(param_1 + 0xa20) = 0;
  return 1;
}



undefined8 init_alpn(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x4b8));
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  if (*(int *)(param_1 + 0x78) == 0) {
    return 1;
  }
  CRYPTO_free(*(void **)(param_1 + 0x4c8));
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  return 1;
}



undefined4 ossl_get_extension_type(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x10001;
  if (param_1 < 0x1d) {
    uVar1 = (&ext_defs)[param_1 * 0xe];
  }
  return uVar1;
}



undefined8 tls_validate_all_contexts(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  long local_40;
  
  iVar7 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 & 0x80) == 0) {
    iVar7 = ((param_2 >> 8 ^ 1) & 1) * 2;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x880) + 0x88);
  if (lVar2 != -0x1d) {
    puVar6 = &DAT_00102824;
    uVar5 = 0;
    do {
      if (*(int *)(param_3 + 0x10) != 0) {
        if (uVar5 < 0x1d) {
          uVar1 = *puVar6;
LAB_00101296:
          if ((uVar1 & param_2) != 0) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
              uVar1 = uVar1 & 2;
            }
            else {
              uVar1 = uVar1 & 1;
            }
            if (uVar1 == 0) goto LAB_001012b0;
          }
        }
        else {
          lVar4 = custom_ext_find(*(long *)(param_1 + 0x880) + 0x80,iVar7,
                                  *(undefined4 *)(param_3 + 0x18),local_48);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar4 + 8);
            goto LAB_00101296;
          }
        }
        uVar3 = 0;
        goto LAB_001012da;
      }
LAB_001012b0:
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 0x28;
      puVar6 = puVar6 + 0xe;
    } while (lVar2 + 0x1dU != uVar5);
  }
  uVar3 = 1;
LAB_001012da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



uint extension_is_relevant(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8;
  if ((param_3 & 0x800) == 0) {
    if (uVar2 == 0) {
      iVar1 = **(int **)(param_1 + 0x18);
      if ((*(int *)(param_1 + 0x48) == 0x300) && ((param_2 & 8) == 0)) {
        return 0;
      }
      if (iVar1 != 0x10000 && 0x303 < iVar1) goto LAB_001013e5;
    }
    else {
      if ((param_2 & 4) != 0) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x48) == 0x300) && ((param_2 & 8) == 0)) {
        return 0;
      }
    }
    if ((param_2 & 0x20) != 0) {
      if ((param_3 & 0x80) == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x78) != 0) {
        return 0;
      }
    }
  }
  else {
    if ((uVar2 != 0) && (uVar2 = 0, (param_2 & 4) != 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x48) == 0x300) && ((param_2 & 8) == 0)) {
      return uVar2;
    }
LAB_001013e5:
    if ((param_2 & 0x10) != 0) {
      return 0;
    }
  }
  uVar2 = 1;
  if (*(int *)(param_1 + 0x508) != 0) {
    uVar2 = ((uint)(param_2 >> 6) & 0x3ffffff ^ 1) & 1;
  }
  return uVar2;
}



undefined8
tls_collect_extensions
          (long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,long *param_5,
          int param_6)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *ptr;
  uint *puVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ushort uVar20;
  ushort *puVar21;
  long in_FS_OFFSET;
  long local_a8;
  
  lVar3 = *(long *)(param_1 + 0x880);
  puVar21 = (ushort *)*param_2;
  lVar19 = param_2[1];
  lVar2 = lVar3 + 0x80;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = param_3 & 0x80;
  *param_4 = 0;
  if (uVar17 != 0) {
    custom_ext_init(lVar2,param_2,0);
  }
  lVar3 = *(long *)(lVar3 + 0x88) + 0x1d;
  ptr = (void *)CRYPTO_zalloc(lVar3 * 0x28,"ssl/statem/extensions.c",0x275);
  if (ptr != (void *)0x0) {
    if (lVar19 != 0) {
      local_a8 = 0;
      uVar5 = param_3 >> 8 ^ 1;
      iVar7 = 1;
      if (uVar17 == 0) {
        iVar7 = (uVar5 & 1) * 2;
      }
      uVar6 = (int)(-(long)ptr >> 3) * -0x33333333;
      do {
        if (lVar19 - 1U < 3) {
LAB_00101a08:
          ERR_new();
          ERR_set_debug("ssl/statem/extensions.c",0x283,"tls_collect_extensions");
          ossl_statem_fatal(param_1,0x32,0x6e,0);
          goto LAB_001017b3;
        }
        uVar20 = puVar21[1] << 8 | puVar21[1] >> 8;
        uVar18 = (ulong)uVar20;
        if (lVar19 - 4U < uVar18) goto LAB_00101a08;
        uVar14 = *puVar21;
        puVar1 = puVar21 + 2;
        lVar19 = (lVar19 - 4U) - uVar18;
        lVar12 = 0;
        puVar21 = (ushort *)((long)puVar1 + uVar18);
        puVar8 = &ext_defs;
        uVar14 = uVar14 << 8 | uVar14 >> 8;
        do {
          uVar15 = (uint)uVar14;
          if ((uint)uVar14 == *puVar8) {
            uVar11 = puVar8[1];
            if ((param_3 & uVar11) == 0) goto LAB_00101778;
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
              uVar11 = uVar11 & 2;
            }
            else {
              uVar11 = uVar11 & 1;
            }
            if ((uVar11 != 0) || (plVar9 = (long *)((long)ptr + lVar12 * 0x28), (int)plVar9[2] == 1)
               ) goto LAB_00101778;
            goto LAB_001015e1;
          }
          puVar8 = puVar8 + 0xe;
          lVar12 = lVar12 + 1;
        } while ((NoteGnuProperty_4 *)puVar8 != &NoteGnuProperty_4_00102e78);
        lVar12 = custom_ext_find(lVar2,iVar7,(uint)uVar14);
        if (lVar12 != 0) {
          uVar11 = *(uint *)(lVar12 + 8);
          if ((param_3 & uVar11) != 0) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
              uVar11 = uVar11 & 2;
            }
            else {
              uVar11 = uVar11 & 1;
            }
            if ((uVar11 == 0) &&
               (plVar9 = (long *)((long)ptr + 0x488), *(int *)((long)ptr + 0x498) != 1)) {
LAB_001015e1:
              if (uVar14 == 0x29) {
                if (uVar17 == 0) {
                  uVar13 = ((long)plVar9 - (long)ptr >> 3) * -0x3333333333333333;
                  uVar11 = (uint)uVar13;
                }
                else {
                  if (lVar19 != 0) goto LAB_00101778;
                  uVar13 = ((long)plVar9 - (long)ptr >> 3) * -0x3333333333333333;
                  uVar11 = (uint)uVar13;
                }
                if ((uVar11 < 0x1d) && ((param_3 & 0x6080) == 0)) goto LAB_001018d8;
              }
              else {
                uVar13 = ((long)plVar9 - (long)ptr >> 3) * -0x3333333333333333;
                if ((((uint)uVar13 < 0x1d) &&
                    ((((param_3 & 0x6080) == 0 && (uVar15 != 0x2c)) && (uVar15 != 0x12)))) &&
                   (uVar14 != 0xff01)) {
LAB_001018d8:
                  if ((*(byte *)(param_1 + 0x9f0 + (uVar13 & 0xffffffff)) & 2) == 0)
                  goto LAB_001018e9;
                }
              }
LAB_00101620:
              *plVar9 = (long)puVar1;
              plVar9[1] = uVar18;
              *(undefined4 *)(plVar9 + 2) = 1;
              *(uint *)(plVar9 + 3) = uVar15;
              plVar9[4] = local_a8;
              if (*(code **)(param_1 + 0xa10) != (code *)0x0) {
                (**(code **)(param_1 + 0xa10))
                          (*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x78) == 0,uVar15,
                           puVar1,uVar20,*(undefined8 *)(param_1 + 0xa18));
              }
              local_a8 = local_a8 + 1;
              goto LAB_00101676;
            }
          }
LAB_00101778:
          ERR_new();
          ERR_set_debug("ssl/statem/extensions.c",0x290,"tls_collect_extensions");
          ossl_statem_fatal(param_1,0x2f,0x6e,0);
          goto LAB_001017b3;
        }
        if (uVar15 == 0x29) {
          plVar9 = (long *)0x0;
          if (uVar17 == 0) {
            uVar13 = (-(long)ptr >> 3) * -0x3333333333333333;
            if (((0x1c < (uint)uVar13) || ((param_3 & 0x6080) != 0)) ||
               ((*(byte *)(param_1 + 0x9f0 + (uVar13 & 0xffffffff)) & 2) != 0)) goto LAB_00101676;
          }
          else {
            if (lVar19 != 0) goto LAB_00101778;
            uVar11 = (int)(-(long)ptr >> 3) * -0x33333333;
            if (((0x1c < uVar11) || ((param_3 & 0x6080) != 0)) ||
               ((*(byte *)(param_1 + 0x9f0 + (ulong)uVar11) & 2) != 0)) break;
          }
LAB_001018e9:
          if ((uVar14 != 65000) || ((uVar5 & 1) != 0)) {
LAB_00101852:
            ERR_new();
            ERR_set_debug("ssl/statem/extensions.c",0x2af,"tls_collect_extensions");
            ossl_statem_fatal(param_1,0x6e,0xd9,0);
            goto LAB_001017b3;
          }
          if (plVar9 != (long *)0x0) goto LAB_00101620;
        }
        else if ((((uVar6 < 0x1d) && ((param_3 & 0x6080) == 0)) &&
                 ((uVar15 != 0x2c && ((uVar15 != 0x12 && (uVar15 != 0xff01)))))) &&
                (((*(byte *)(param_1 + 0x9f0 + (ulong)uVar6) & 2) == 0 &&
                 ((uVar14 != 65000 || ((uVar5 & 1) != 0)))))) goto LAB_00101852;
LAB_00101676:
      } while (lVar19 != 0);
    }
    if (param_6 != 0) {
      puVar16 = &ext_defs;
      do {
        if ((((*(long *)(puVar16 + 2) != 0) && ((puVar16[1] & param_3) != 0)) &&
            (iVar7 = extension_is_relevant(param_1,puVar16[1],param_3), iVar7 != 0)) &&
           (iVar7 = (**(code **)(puVar16 + 2))(param_1,param_3), iVar7 == 0)) goto LAB_001017b3;
        puVar16 = puVar16 + 0xe;
      } while ((NoteGnuProperty_4 *)puVar16 != &NoteGnuProperty_4_00102e78);
    }
    *param_4 = ptr;
    if (param_5 != (long *)0x0) {
      *param_5 = lVar3;
    }
    uVar10 = 1;
    goto LAB_001017c9;
  }
  ERR_new();
  ERR_set_debug("ssl/statem/extensions.c",0x277,"tls_collect_extensions");
  ossl_statem_fatal(param_1,0x50,0x8000f,0);
LAB_001017c7:
  uVar10 = 0;
LAB_001017c9:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001017b3:
  CRYPTO_free(ptr);
  goto LAB_001017c7;
}



undefined1  [16]
tls_parse_extension(long param_1,uint param_2,undefined4 param_3,long param_4,undefined8 param_5,
                   undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  ulong extraout_RDX;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = (ulong)param_2;
  puVar1 = (undefined8 *)(param_4 + uVar3 * 0x28);
  uVar4 = uVar3;
  if ((*(int *)(puVar1 + 2) != 0) && (*(int *)((long)puVar1 + 0x14) == 0)) {
    *(undefined4 *)((long)puVar1 + 0x14) = 1;
    if (param_2 < 0x1d) {
      iVar2 = extension_is_relevant(param_1,(&DAT_00102824)[uVar3 * 0xe],param_3);
      uVar4 = extraout_RDX;
      if (iVar2 == 0) goto LAB_00101b68;
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_tls_parse_stoc_renegotiate_00102838)[uVar3 * 7];
      if (*(int *)(param_1 + 0x78) != 0) {
        UNRECOVERED_JUMPTABLE = (code *)(&PTR_tls_parse_ctos_renegotiate_00102830)[uVar3 * 7];
      }
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,puVar1,param_3,param_5,param_6);
        return auVar5;
      }
    }
    auVar6._0_8_ = custom_ext_parse(param_1,param_3,*(undefined4 *)(puVar1 + 3),*puVar1,puVar1[1],
                                    param_5);
    auVar6._8_8_ = param_6;
    return auVar6;
  }
LAB_00101b68:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = 1;
  return auVar5;
}



undefined8
tls_parse_all_extensions
          (long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,int param_6)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x880) + 0x88);
  if (lVar1 != -0x1d) {
    uVar5 = 0;
    do {
      iVar2 = tls_parse_extension(param_1,uVar5 & 0xffffffff,param_2,param_3,param_4,param_5);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (lVar1 + 0x1dU != uVar5);
  }
  if (param_6 != 0) {
    puVar4 = &ext_defs;
    puVar3 = (undefined4 *)(param_3 + 0x10);
    do {
      if (((*(code **)(puVar4 + 0xc) != (code *)0x0) && ((param_2 & puVar4[1]) != 0)) &&
         (iVar2 = (**(code **)(puVar4 + 0xc))(param_1,param_2,*puVar3), iVar2 == 0)) {
        return 0;
      }
      puVar4 = puVar4 + 0xe;
      puVar3 = puVar3 + 10;
    } while ((NoteGnuProperty_4 *)puVar4 != &NoteGnuProperty_4_00102e78);
  }
  return 1;
}



uint should_add_extension(long param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & param_3) == 0) {
    return 0;
  }
  iVar1 = extension_is_relevant();
  if (iVar1 != 0) {
    uVar2 = 1;
    if (((param_2 & 0x20) != 0) && ((param_3 & 0x80) != 0)) {
      uVar2 = (*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1 |
              (uint)(param_4 < 0x304)) ^ 1;
    }
    return uVar2;
  }
  return 0;
}



undefined8
tls_construct_extensions
          (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_48 [4];
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
  if (iVar1 == 0) {
LAB_00101ed0:
    if ((param_3 & 0x8000) == 0) {
      ERR_new();
      uVar3 = 0x367;
LAB_00101ef1:
      ERR_set_debug("ssl/statem/extensions.c",uVar3,"tls_construct_extensions");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      uVar3 = 0;
      goto LAB_00101e57;
    }
  }
  else {
    if ((param_3 & 0x180) != 0) {
      iVar1 = WPACKET_set_flags(param_2,2);
      if (iVar1 == 0) goto LAB_00101ed0;
      if ((param_3 & 0x80) != 0) {
        iVar1 = ssl_get_min_max_version(param_1,local_48,&local_44,0);
        if (iVar1 != 0) {
          if ((param_3 & 0x8000) == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions.c",0x36f,"tls_construct_extensions");
            ossl_statem_fatal(param_1,0x50,iVar1,0);
            uVar3 = 0;
            goto LAB_00101e57;
          }
          goto LAB_00101ed8;
        }
        custom_ext_init(*(long *)(param_1 + 0x880) + 0x80);
      }
    }
    iVar1 = custom_ext_add(param_1,param_3,param_2,param_4,param_5,local_44);
    if (iVar1 != 0) {
      puVar5 = &ext_defs;
      pbVar4 = (byte *)(param_1 + 0x9f0);
LAB_00101dd5:
      do {
        iVar1 = should_add_extension(param_1,puVar5[1],param_3,local_44);
        if (iVar1 != 0) {
          pcVar2 = *(code **)(puVar5 + 10);
          if (*(int *)(param_1 + 0x78) != 0) {
            pcVar2 = *(code **)(puVar5 + 8);
          }
          if (pcVar2 != (code *)0x0) {
            iVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
            if (iVar1 == 0) goto LAB_00101ed8;
            if ((iVar1 == 1) && ((param_3 & 0x6080) != 0)) {
              puVar5 = puVar5 + 0xe;
              *pbVar4 = *pbVar4 | 2;
              pbVar4 = pbVar4 + 1;
              if ((NoteGnuProperty_4 *)puVar5 == &NoteGnuProperty_4_00102e78) break;
              goto LAB_00101dd5;
            }
          }
        }
        puVar5 = puVar5 + 0xe;
        pbVar4 = pbVar4 + 1;
      } while ((NoteGnuProperty_4 *)puVar5 != &NoteGnuProperty_4_00102e78);
      iVar1 = WPACKET_close(param_2);
      uVar3 = 1;
      if (iVar1 != 0) goto LAB_00101e57;
      if ((param_3 & 0x8000) == 0) {
        ERR_new();
        uVar3 = 0x39c;
        goto LAB_00101ef1;
      }
    }
  }
LAB_00101ed8:
  uVar3 = 0;
LAB_00101e57:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
tls_psk_do_binder(long param_1,EVP_MD *param_2,void *param_3,size_t param_4,void *param_5,
                 uchar *param_6,long param_7,int param_8,int param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  EVP_PKEY *pkey;
  uchar *sigret;
  undefined8 uVar5;
  size_t cnt;
  ulong uVar6;
  void *len;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  char *local_198;
  void *local_150;
  uchar local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = EVP_MD_get_size(param_2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (iVar3 < 1) {
    ERR_new();
    ERR_set_debug("ssl/statem/extensions.c",0x602,"tls_psk_do_binder");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
  }
  else {
    if (param_9 == 0) {
      local_198 = "res binder";
LAB_0010200d:
      lVar9 = param_1 + 0x57c;
    }
    else {
      if ((((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(*(long *)(param_1 + 0x900) + 0x344) == 0))
          && (*(int *)(param_7 + 0x344) != 0)) || (*(int *)(param_1 + 0x78) != 0)) {
        local_198 = "ext binder";
        goto LAB_0010200d;
      }
      lVar9 = param_7 + 0x10;
      local_198 = "ext binder";
    }
    iVar4 = tls13_generate_secret
                      (param_1,param_2,0,param_7 + 0x50,*(undefined8 *)(param_7 + 8),lVar9);
    if (iVar4 != 0) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if ((ctx == (EVP_MD_CTX *)0x0) ||
         (iVar4 = EVP_DigestInit_ex(ctx,param_2,(ENGINE *)0x0), iVar4 < 1)) {
LAB_001022e8:
        ERR_new();
        ERR_set_debug("ssl/statem/extensions.c",0x630,"tls_psk_do_binder");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      else {
        iVar4 = EVP_DigestFinal_ex(ctx,local_148,(uint *)0x0);
        if (iVar4 < 1) goto LAB_001022e8;
        len = (void *)(long)iVar3;
        iVar3 = tls13_hkdf_expand(param_1,param_2,lVar9,local_198,10,local_148,len,local_108,len,1);
        if ((iVar3 != 0) &&
           (iVar3 = tls13_derive_finishedkey(param_1,param_2,local_108,local_c8,len), iVar3 != 0)) {
          iVar3 = EVP_DigestInit_ex(ctx,param_2,(ENGINE *)0x0);
          if (iVar3 < 1) {
            ERR_new();
            uVar8 = 0x642;
LAB_001023fd:
            ERR_set_debug("ssl/statem/extensions.c",uVar8,"tls_psk_do_binder");
            uVar8 = 0xc0103;
          }
          else {
            if (*(int *)(param_1 + 0x8d0) != 1) {
LAB_00102117:
              iVar3 = EVP_DigestUpdate(ctx,param_3,param_4);
              if ((iVar3 < 1) || (iVar3 = EVP_DigestFinal_ex(ctx,local_148,(uint *)0x0), iVar3 < 1))
              {
                ERR_new();
                uVar8 = 0x672;
              }
              else {
                pkey = (EVP_PKEY *)
                       EVP_PKEY_new_raw_private_key_ex(*puVar1,&_LC1,puVar1[0x8e],local_c8,len);
                if (pkey != (EVP_PKEY *)0x0) {
                  uVar8 = puVar1[0x8e];
                  uVar2 = *puVar1;
                  sigret = local_88;
                  if (param_8 != 0) {
                    sigret = param_6;
                  }
                  local_150 = len;
                  uVar5 = EVP_MD_get0_name(param_2);
                  uVar10 = 0;
                  iVar3 = EVP_DigestSignInit_ex(ctx,0,uVar5,uVar2,uVar8,pkey);
                  if ((((iVar3 < 1) ||
                       (iVar3 = EVP_DigestSignUpdate(ctx,local_148,len,uVar10), iVar3 < 1)) ||
                      (iVar3 = EVP_DigestSignFinal(ctx,sigret,(size_t *)&local_150), iVar3 < 1)) ||
                     (local_150 != len)) {
                    ERR_new();
                    ERR_set_debug("ssl/statem/extensions.c",0x687,"tls_psk_do_binder");
                    uVar8 = 0xffffffff;
                    ossl_statem_fatal(param_1,0x50,0xc0103,0);
                  }
                  else if ((param_8 == 0) &&
                          (iVar3 = CRYPTO_memcmp(param_5,sigret,(size_t)len), iVar3 != 0)) {
                    ERR_new();
                    ERR_set_debug("ssl/statem/extensions.c",0x691,"tls_psk_do_binder");
                    uVar8 = 0;
                    ossl_statem_fatal(param_1,0x33,0xfd,0);
                  }
                  else {
                    uVar8 = 1;
                  }
                  goto LAB_00102260;
                }
                ERR_new();
                uVar8 = 0x67a;
              }
              goto LAB_001023fd;
            }
            cnt = BIO_ctrl(*(BIO **)(param_1 + 0x1a8),3,0,&local_150);
            if (0 < (long)cnt) {
              if (*(int *)(param_1 + 0x78) == 0) {
LAB_001024d8:
                iVar3 = EVP_DigestUpdate(ctx,local_150,cnt);
                if (0 < iVar3) goto LAB_00102117;
                ERR_new();
                uVar8 = 0x66b;
              }
              else {
                if (2 < cnt - 1) {
                  uVar6 = (ulong)*(byte *)((long)local_150 + 1) << 0x10 |
                          (ulong)*(byte *)((long)local_150 + 2) << 8 |
                          (ulong)*(byte *)((long)local_150 + 3);
                  if ((uVar6 <= cnt - 4) && (uVar7 = (cnt - 4) - uVar6, 3 < uVar7)) {
                    uVar7 = uVar7 - 4;
                    uVar6 = (ulong)*(byte *)((long)local_150 + uVar6 + 5) << 0x10 |
                            (ulong)*(byte *)((long)local_150 + uVar6 + 6) << 8 |
                            (ulong)*(byte *)((long)local_150 + uVar6 + 7);
                    if (uVar6 <= uVar7) {
                      cnt = (uVar6 + cnt) - uVar7;
                      goto LAB_001024d8;
                    }
                  }
                }
                ERR_new();
                uVar8 = 0x664;
              }
              goto LAB_001023fd;
            }
            ERR_new();
            ERR_set_debug("ssl/statem/extensions.c",0x653,"tls_psk_do_binder");
            uVar8 = 0x14c;
          }
          ossl_statem_fatal(param_1,0x50,uVar8,0);
        }
      }
      uVar8 = 0xffffffff;
      pkey = (EVP_PKEY *)0x0;
      goto LAB_00102260;
    }
  }
  uVar8 = 0xffffffff;
  ctx = (EVP_MD_CTX *)0x0;
  pkey = (EVP_PKEY *)0x0;
LAB_00102260:
  OPENSSL_cleanse(local_108,0x40);
  OPENSSL_cleanse(local_c8,0x40);
  EVP_PKEY_free(pkey);
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


