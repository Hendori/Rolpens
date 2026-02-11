
undefined8 serverinfoex_srv_parse_cb(void)

{
  long in_R8;
  undefined4 *in_stack_00000010;
  
  if (in_R8 == 0) {
    return 1;
  }
  *in_stack_00000010 = 0x32;
  return 0;
}



undefined8 serverinfo_srv_parse_cb(void)

{
  long in_RCX;
  undefined4 *in_R8;
  
  if (in_RCX == 0) {
    return 1;
  }
  *in_R8 = 0x32;
  return 0;
}



undefined8 ssl_set_cert(long *param_1,X509 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  EVP_PKEY *from;
  int iVar2;
  EVP_PKEY *to;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  to = (EVP_PKEY *)X509_get0_pubkey(param_2);
  if (to == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x108,"ssl_set_cert");
    ERR_set_error(0x14,0x10c,0);
    uVar4 = 0;
    goto LAB_00100124;
  }
  lVar3 = ssl_cert_lookup_by_pkey(to,&local_38,param_3);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x10d,"ssl_set_cert");
    ERR_set_error(0x14,0xf7,0);
    uVar4 = 0;
    goto LAB_00100124;
  }
  if ((local_38 == 3) && (iVar2 = EVP_PKEY_can_sign(to), iVar2 == 0)) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x112,"ssl_set_cert");
    ERR_set_error(0x14,0x13e,0);
    uVar4 = 0;
    goto LAB_00100124;
  }
  from = *(EVP_PKEY **)(param_1[4] + local_38 * 0x28 + 8);
  if (from == (EVP_PKEY *)0x0) {
LAB_001000de:
    iVar2 = X509_up_ref(param_2);
  }
  else {
    EVP_PKEY_copy_parameters(to,from);
    ERR_clear_error();
    iVar2 = X509_check_private_key(param_2,*(EVP_PKEY **)(param_1[4] + local_38 * 0x28 + 8));
    if (iVar2 != 0) goto LAB_001000de;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1[4] + local_38 * 0x28 + 8));
    *(undefined8 *)(param_1[4] + local_38 * 0x28 + 8) = 0;
    ERR_clear_error();
    iVar2 = X509_up_ref(param_2);
  }
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    X509_free(*(X509 **)(param_1[4] + local_38 * 0x28));
    puVar1 = (undefined8 *)(param_1[4] + local_38 * 0x28);
    *puVar1 = param_2;
    *param_1 = (long)puVar1;
    uVar4 = 1;
  }
LAB_00100124:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_set_pkey(long *param_1,EVP_PKEY *param_2)

{
  X509 *x509;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ssl_cert_lookup_by_pkey(param_2,&local_28);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x8a,"ssl_set_pkey");
    ERR_set_error(0x14,0xf7,0);
  }
  else {
    x509 = *(X509 **)(param_1[4] + local_28 * 0x28);
    if (x509 != (X509 *)0x0) {
      iVar1 = X509_check_private_key(x509,param_2);
      if (iVar1 == 0) goto LAB_001002c0;
    }
    iVar1 = EVP_PKEY_up_ref(param_2);
    if (iVar1 != 0) {
      EVP_PKEY_free(*(EVP_PKEY **)(param_1[4] + local_28 * 0x28 + 8));
      lVar2 = param_1[4] + local_28 * 0x28;
      *(EVP_PKEY **)(lVar2 + 8) = param_2;
      *param_1 = lVar2;
      uVar3 = 1;
      goto LAB_001002c2;
    }
  }
LAB_001002c0:
  uVar3 = 0;
LAB_001002c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ssl_set_cert_and_key
          (uint *param_1,long param_2,X509 *param_3,EVP_PKEY *param_4,long param_5,int param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  EVP_PKEY *pkey;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  EVP_PKEY *local_60;
  long *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    if ((param_1 == (uint *)0x0) ||
       ((*param_1 != 0 &&
        (((*param_1 & 0x80) == 0 ||
         (param_1 = (uint *)ossl_quic_obj_get0_handshake_layer(), param_1 == (uint *)0x0)))))) {
      uVar7 = 0;
      goto LAB_001004e3;
    }
    local_50 = *(long **)(param_1 + 0x220);
  }
  else {
    local_50 = *(long **)(param_2 + 0x158);
    param_1 = (uint *)0x0;
  }
  iVar5 = 0;
  iVar3 = ssl_security_cert(param_1,param_2,param_3,0,1);
  if (iVar3 == 1) {
    for (; iVar3 = OPENSSL_sk_num(param_5), iVar5 < iVar3; iVar5 = iVar5 + 1) {
      uVar6 = OPENSSL_sk_value(param_5,iVar5);
      iVar3 = ssl_security_cert(param_1,param_2,uVar6,0,0);
      if (iVar3 != 1) {
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",1000,"ssl_set_cert_and_key");
        goto LAB_001004ca;
      }
    }
    pkey = X509_get_pubkey(param_3);
    if (pkey == (EVP_PKEY *)0x0) goto LAB_001004d6;
    local_60 = pkey;
    if (param_4 == (EVP_PKEY *)0x0) {
LAB_00100585:
      lVar4 = ssl_cert_lookup_by_pkey(pkey,&local_48,param_2);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x40f,"ssl_set_cert_and_key");
        ERR_set_error(0x14,0xf7,0);
        goto LAB_00100610;
      }
      if ((param_6 == 0) &&
         (((plVar1 = (long *)(local_50[4] + local_48 * 0x28), *plVar1 != 0 || (plVar1[1] != 0)) ||
          (plVar1[2] != 0)))) {
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x417,"ssl_set_cert_and_key");
        ERR_set_error(0x14,0x121,0);
        goto LAB_00100610;
      }
      if ((param_5 != 0) && (param_5 = X509_chain_up_ref(param_5), param_5 == 0)) {
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x41e,"ssl_set_cert_and_key");
        ERR_set_error(0x14,0x8000b,0);
        goto LAB_00100610;
      }
      iVar3 = X509_up_ref(param_3);
      if (iVar3 == 0) goto LAB_00100610;
      iVar3 = EVP_PKEY_up_ref(local_60);
      if (iVar3 == 0) {
        X509_free(param_3);
        goto LAB_00100610;
      }
      OSSL_STACK_OF_X509_free(*(undefined8 *)(local_48 * 0x28 + local_50[4] + 0x10));
      puVar2 = (undefined8 *)(local_50[4] + local_48 * 0x28);
      puVar2[2] = param_5;
      X509_free((X509 *)*puVar2);
      puVar2 = (undefined8 *)(local_50[4] + local_48 * 0x28);
      *puVar2 = param_3;
      EVP_PKEY_free((EVP_PKEY *)puVar2[1]);
      lVar4 = local_50[4] + local_48 * 0x28;
      *(EVP_PKEY **)(lVar4 + 8) = local_60;
      *local_50 = lVar4;
      uVar7 = 1;
    }
    else {
      iVar3 = EVP_PKEY_missing_parameters(param_4);
      if (iVar3 == 0) {
        iVar3 = EVP_PKEY_missing_parameters(pkey);
        if ((iVar3 != 0) && (iVar3 = EVP_PKEY_copy_parameters(pkey,param_4), iVar3 == 0)) {
          ERR_new();
          uVar6 = 0x403;
          goto LAB_00100663;
        }
LAB_00100459:
        iVar3 = EVP_PKEY_eq(pkey,param_4);
        local_60 = param_4;
        if (iVar3 == 1) goto LAB_00100585;
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x40a,"ssl_set_cert_and_key");
        ERR_set_error(0x14,0x120,0);
      }
      else {
        iVar3 = EVP_PKEY_missing_parameters(pkey);
        if (iVar3 == 0) {
          iVar3 = EVP_PKEY_copy_parameters(param_4,pkey);
          if (iVar3 != 0) goto LAB_00100459;
          ERR_new();
          uVar6 = 0x3fc;
LAB_00100663:
          ERR_set_debug("ssl/ssl_rsa.c",uVar6,"ssl_set_cert_and_key");
          ERR_set_error(0x14,0x128,0);
        }
        else {
          ERR_new();
          ERR_set_debug("ssl/ssl_rsa.c",0x3f7,"ssl_set_cert_and_key");
          ERR_set_error(0x14,0x122,0);
        }
      }
LAB_00100610:
      uVar7 = 0;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x3e2,"ssl_set_cert_and_key");
LAB_001004ca:
    ERR_set_error(0x14,iVar3,0);
LAB_001004d6:
    pkey = (EVP_PKEY *)0x0;
    uVar7 = 0;
  }
  EVP_PKEY_free(pkey);
LAB_001004e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 serverinfo_process_buffer(int param_1,uint *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if ((0 < (long)param_3) && (param_1 - 1U < 2)) {
    do {
      while( true ) {
        do {
          if (param_3 == 0) {
            return 1;
          }
          uVar4 = 0;
          if (param_1 == 2) {
            if (param_3 < 4) {
              return 0;
            }
            uVar4 = *param_2;
            param_3 = param_3 - 4;
            param_2 = param_2 + 1;
            uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          }
          if (param_3 < 2) {
            return 0;
          }
          uVar1 = *param_2;
          if (param_3 - 2 < 2) {
            return 0;
          }
          uVar3 = (ulong)(ushort)(*(ushort *)((long)param_2 + 2) << 8 |
                                 *(ushort *)((long)param_2 + 2) >> 8);
          if (param_3 - 4 < uVar3) {
            return 0;
          }
          param_2 = (uint *)((long)param_2 + uVar3 + 4);
          param_3 = (param_3 - 4) - uVar3;
        } while (param_4 == 0);
        uVar5 = (ushort)uVar1 << 8 | (ushort)uVar1 >> 8;
        if ((uVar4 == 0x1d0) || (param_1 == 1)) break;
        iVar2 = SSL_CTX_add_custom_ext(param_4,uVar5,uVar4,serverinfoex_srv_add_cb,0,0,0x100000,0);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = SSL_CTX_add_server_custom_ext
                        (param_4,uVar5,serverinfo_srv_add_cb,0,0,serverinfo_srv_parse_cb,0);
    } while (iVar2 != 0);
  }
  return 0;
}



undefined8
serverinfo_find_extension(long param_1,ulong param_2,uint param_3,long *param_4,ulong *param_5)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  
  *param_4 = 0;
  *param_5 = 0;
  if ((param_1 != 0) && (0 < (long)param_2)) {
    while ((5 < param_2 && (puVar1 = (ushort *)(param_1 + 4), 1 < param_2 - 6))) {
      lVar2 = param_1 + 8;
      uVar3 = (ulong)(ushort)(*(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8);
      if (param_2 - 8 < uVar3) {
        return 0xffffffff;
      }
      param_1 = lVar2 + uVar3;
      param_2 = (param_2 - 8) - uVar3;
      if (param_3 == (ushort)(*puVar1 << 8 | *puVar1 >> 8)) {
        *param_4 = lVar2;
        *param_5 = uVar3;
        return 1;
      }
      if (param_2 == 0) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}



ulong serverinfoex_srv_add_cb
                (uint *param_1,undefined4 param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,long param_7,undefined4 *param_8)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  if (param_1 != (uint *)0x0) {
    if (*param_1 == 0) {
LAB_00100a4e:
      if (((param_3 & 0x1000) == 0) || (param_7 == 0)) {
        iVar1 = ssl_get_server_cert_serverinfo(param_1,&local_40,&local_38);
        if (iVar1 != 0) {
          iVar1 = serverinfo_find_extension(local_40,local_38,param_2,param_4,param_5);
          if (iVar1 != -1) {
            uVar2 = (ulong)(iVar1 != 0);
            goto LAB_00100a74;
          }
          goto LAB_00100a98;
        }
      }
      uVar2 = 0;
      goto LAB_00100a74;
    }
    if ((*param_1 & 0x80) != 0) {
      param_1 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (param_1 != (uint *)0x0) goto LAB_00100a4e;
    }
  }
LAB_00100a98:
  *param_8 = 0x50;
  uVar2 = 0xffffffff;
LAB_00100a74:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong serverinfo_srv_add_cb
                (uint *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 *param_5)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  if (param_1 != (uint *)0x0) {
    if (*param_1 == 0) {
LAB_00100b37:
      uVar2 = ssl_get_server_cert_serverinfo(param_1,&local_40,&local_38);
      if ((int)uVar2 == 0) goto LAB_00100b4a;
      iVar1 = serverinfo_find_extension(local_40,local_38,param_2,param_3,param_4);
      if (iVar1 != -1) {
        uVar2 = (ulong)(iVar1 != 0);
        goto LAB_00100b4a;
      }
    }
    else if ((*param_1 & 0x80) != 0) {
      param_1 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (param_1 != (uint *)0x0) goto LAB_00100b37;
    }
  }
  *param_5 = 0x50;
  uVar2 = 0xffffffff;
LAB_00100b4a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_use_certificate(SSL *ssl,X509 *x)

{
  int iVar1;
  
  if (ssl == (SSL *)0x0) {
    return 0;
  }
  if (ssl->version != 0) {
    if ((ssl->version & 0x80U) == 0) {
      return 0;
    }
    ssl = (SSL *)ossl_quic_obj_get0_handshake_layer();
    if (ssl == (SSL *)0x0) {
      return 0;
    }
  }
  if (x == (X509 *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x29,"SSL_use_certificate");
    ERR_set_error(0x14,0xc0102,0);
    return 0;
  }
  iVar1 = ssl_security_cert(ssl,0,x,0,1);
  if (iVar1 != 1) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x2f,"SSL_use_certificate");
    ERR_set_error(0x14,iVar1,0);
    return 0;
  }
  iVar1 = ssl_set_cert(*(undefined8 *)&ssl[3].packet_length,x,ssl->method);
  return iVar1;
}



int SSL_use_certificate_file(SSL *ssl,char *file,int type)

{
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar1;
  SSL *pSVar2;
  X509 *pXVar3;
  uint uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  X509 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (X509 *)0x0;
  if (file == (char *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("ssl/ssl_rsa.c",0x3e,"SSL_use_certificate_file");
    ERR_set_error(0x14,0xc0102,0);
    uVar4 = 0;
    goto LAB_00100de6;
  }
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x44,"SSL_use_certificate_file");
    uVar5 = 0x80007;
LAB_00100dd4:
    ERR_set_error(0x14,uVar5,0);
  }
  else {
    lVar1 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar1 < 1) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",0x49,"SSL_use_certificate_file");
      uVar5 = 0x80002;
      goto LAB_00100dd4;
    }
    local_38 = (X509 *)X509_new_ex(*(undefined8 *)ssl->method,ssl->method[4].ssl_version);
    if (local_38 == (X509 *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",0x4f,"SSL_use_certificate_file");
      uVar5 = 0x8000d;
      goto LAB_00100dd4;
    }
    if (type == 2) {
      uVar5 = 0x8000d;
      pXVar3 = d2i_X509_bio(bp,&local_38);
LAB_00100d89:
      if (pXVar3 != (X509 *)0x0) {
        uVar4 = SSL_use_certificate(ssl,local_38);
        goto LAB_00100de6;
      }
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",100,"SSL_use_certificate_file");
      goto LAB_00100dd4;
    }
    if (type != 1) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",0x5f,"SSL_use_certificate_file");
      uVar5 = 0x7c;
      goto LAB_00100dd4;
    }
    pSVar2 = ssl;
    if (ssl->version == 0) {
LAB_00100d6b:
      uVar5 = 0x80009;
      pXVar3 = PEM_read_bio_X509(bp,&local_38,(undefined1 *)pSVar2[7].tlsext_opaque_prf_input_len,
                                 pSVar2[7].tlsext_session_ticket);
      goto LAB_00100d89;
    }
    uVar4 = ssl->version & 0x80;
    if (uVar4 == 0) goto LAB_00100de6;
    pSVar2 = (SSL *)ossl_quic_obj_get0_handshake_layer(ssl);
    if (pSVar2 != (SSL *)0x0) goto LAB_00100d6b;
  }
  uVar4 = 0;
LAB_00100de6:
  X509_free(local_38);
  BIO_free(bp);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int SSL_use_certificate_ASN1(SSL *ssl,uchar *d,int len)

{
  int iVar1;
  X509 *pXVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_30;
  X509 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = d;
  local_28 = (X509 *)X509_new_ex(*(undefined8 *)ssl->method,ssl->method[4].ssl_version);
  if (local_28 == (X509 *)0x0) {
    ERR_new();
    uVar3 = 0x76;
  }
  else {
    pXVar2 = d2i_X509(&local_28,&local_30,(long)len);
    if (pXVar2 != (X509 *)0x0) {
      iVar1 = SSL_use_certificate(ssl,local_28);
      X509_free(local_28);
      goto LAB_00100faf;
    }
    X509_free(local_28);
    ERR_new();
    uVar3 = 0x7c;
  }
  iVar1 = 0;
  ERR_set_debug("ssl/ssl_rsa.c",uVar3,"SSL_use_certificate_ASN1");
  ERR_set_error(0x14,0x8000d,0);
LAB_00100faf:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_use_PrivateKey(SSL *ssl,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (ssl == (SSL *)0x0) {
    return 0;
  }
  if (ssl->version != 0) {
    if ((ssl->version & 0x80U) == 0) {
      return 0;
    }
    ssl = (SSL *)ossl_quic_obj_get0_handshake_layer();
    if (ssl == (SSL *)0x0) {
      return 0;
    }
  }
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0xa3,"SSL_use_PrivateKey");
    ERR_set_error(0x14,0xc0102,0);
    return 0;
  }
  iVar1 = ssl_set_pkey(*(undefined8 *)&ssl[3].packet_length,pkey,ssl->method);
  return iVar1;
}



int SSL_use_PrivateKey_file(SSL *ssl,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  EVP_PKEY *pkey;
  SSL *pSVar3;
  undefined4 uVar4;
  
  if (file == (char *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("ssl/ssl_rsa.c",0xb1,"SSL_use_PrivateKey_file");
    ERR_set_error(0x14,0xc0102,0);
    iVar1 = 0;
  }
  else {
    type_00 = BIO_s_file();
    bp = BIO_new(type_00);
    if (bp == (BIO *)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_rsa.c",0xb7,"SSL_use_PrivateKey_file");
      ERR_set_error(0x14,0x80007,0);
    }
    else {
      lVar2 = BIO_ctrl(bp,0x6c,3,file);
      if ((int)lVar2 < 1) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("ssl/ssl_rsa.c",0xbc,"SSL_use_PrivateKey_file");
        ERR_set_error(0x14,0x80002,0);
      }
      else {
        if (type == 1) {
          if ((ssl == (SSL *)0x0) ||
             ((pSVar3 = ssl, ssl->version != 0 &&
              (((ssl->version & 0x80U) == 0 ||
               (pSVar3 = (SSL *)ossl_quic_obj_get0_handshake_layer(ssl), pSVar3 == (SSL *)0x0))))))
          {
            iVar1 = 0;
            goto LAB_00101171;
          }
          uVar4 = 0x80009;
          pkey = (EVP_PKEY *)
                 PEM_read_bio_PrivateKey_ex
                           (bp,0,pSVar3[7].tlsext_opaque_prf_input_len,
                            pSVar3[7].tlsext_session_ticket,*(undefined8 *)ssl->method,
                            ssl->method[4].ssl_version);
        }
        else {
          if (type != 2) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("ssl/ssl_rsa.c",0xd0,"SSL_use_PrivateKey_file");
            ERR_set_error(0x14,0x7c,0);
            goto LAB_00101171;
          }
          uVar4 = 0x8000d;
          pkey = (EVP_PKEY *)
                 d2i_PrivateKey_ex_bio(bp,0,*(undefined8 *)ssl->method,ssl->method[4].ssl_version);
        }
        if (pkey == (EVP_PKEY *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/ssl_rsa.c",0xd4,"SSL_use_PrivateKey_file");
          iVar1 = 0;
          ERR_set_error(0x14,uVar4,0);
        }
        else {
          iVar1 = SSL_use_PrivateKey(ssl,pkey);
          EVP_PKEY_free(pkey);
        }
      }
    }
  }
LAB_00101171:
  BIO_free(bp);
  return iVar1;
}



int SSL_use_PrivateKey_ASN1(int pk,SSL *ssl,uchar *d,long len)

{
  int iVar1;
  EVP_PKEY *pkey;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = d;
  pkey = (EVP_PKEY *)
         d2i_PrivateKey_ex(CONCAT44(in_register_0000003c,pk),0,&local_28,len,
                           *(undefined8 *)ssl->method,ssl->method[4].ssl_version);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("ssl/ssl_rsa.c",0xe8,"SSL_use_PrivateKey_ASN1");
    ERR_set_error(0x14,0x8000d,0);
  }
  else {
    iVar1 = SSL_use_PrivateKey(ssl,pkey);
    EVP_PKEY_free(pkey);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_CTX_use_certificate(SSL_CTX *ctx,X509 *x)

{
  int iVar1;
  
  if (x == (X509 *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0xf5,"SSL_CTX_use_certificate");
    ERR_set_error(0x14,0xc0102,0);
    return 0;
  }
  iVar1 = ssl_security_cert(0,ctx,x,0,1);
  if (iVar1 != 1) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0xfb,"SSL_CTX_use_certificate");
    ERR_set_error(0x14,iVar1,0);
    return 0;
  }
  iVar1 = ssl_set_cert(*(undefined8 *)ctx->sid_ctx,x,ctx);
  return iVar1;
}



int use_certificate_chain_file(SSL_CTX *param_1,SSL *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  X509 *pXVar4;
  ulong uVar5;
  SSL *pSVar6;
  SSL_CTX *pSVar7;
  TLS_SESSION_TICKET_EXT *u;
  long in_FS_OFFSET;
  _func_3091 *local_68;
  X509 *local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (X509 *)0x0;
  if (param_2 == (SSL *)0x0) {
    if (param_1 == (SSL_CTX *)0x0) {
LAB_001015d9:
      iVar1 = 0;
      goto LAB_001015dc;
    }
    ERR_clear_error();
    pSVar7 = param_1;
LAB_001014fb:
    local_68 = param_1->client_cert_cb;
    u = (TLS_SESSION_TICKET_EXT *)param_1->app_gen_cookie_cb;
  }
  else {
    pSVar7 = (SSL_CTX *)param_2->method;
    ERR_clear_error();
    if (param_1 != (SSL_CTX *)0x0) goto LAB_001014fb;
    pSVar6 = param_2;
    if ((param_2->version != 0) &&
       (((param_2->version & 0x80U) == 0 ||
        (pSVar6 = (SSL *)ossl_quic_obj_get0_handshake_layer(param_2), pSVar6 == (SSL *)0x0))))
    goto LAB_001015d9;
    local_68 = (_func_3091 *)pSVar6[7].tlsext_opaque_prf_input_len;
    u = pSVar6[7].tlsext_session_ticket;
  }
  if (param_3 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x1ea,"use_certificate_chain_file");
    ERR_set_error(0x14,0xc0102,0);
LAB_00101660:
    iVar1 = 0;
    bp = (BIO *)0x0;
  }
  else {
    type = BIO_s_file();
    bp = BIO_new(type);
    if (bp == (BIO *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",0x1f0,"use_certificate_chain_file");
      ERR_set_error(0x14,0x80007,0);
      goto LAB_00101660;
    }
    lVar3 = BIO_ctrl(bp,0x6c,3,param_3);
    if ((int)lVar3 < 1) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",0x1f5,"use_certificate_chain_file");
      ERR_set_error(0x14,0x80002,0);
    }
    else {
      local_50 = (X509 *)X509_new_ex(pSVar7->method,pSVar7[1].psk_client_callback);
      if (local_50 == (X509 *)0x0) {
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x1fb,"use_certificate_chain_file");
        ERR_set_error(0x14,0x8000d,0);
      }
      else {
        pXVar4 = PEM_read_bio_X509_AUX(bp,&local_50,local_68,u);
        if (pXVar4 == (X509 *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/ssl_rsa.c",0x200,"use_certificate_chain_file");
          ERR_set_error(0x14,0x80009,0);
        }
        else if (param_1 == (SSL_CTX *)0x0) {
          iVar1 = SSL_use_certificate(param_2,local_50);
          uVar5 = ERR_peek_error();
          if ((uVar5 == 0) && (iVar1 != 0)) {
            lVar3 = SSL_ctrl(param_2,0x58,0,(void *)0x0);
            iVar2 = (int)lVar3;
            goto LAB_00101759;
          }
        }
        else {
          iVar1 = SSL_CTX_use_certificate(param_1,local_50);
          uVar5 = ERR_peek_error();
          if ((uVar5 == 0) && (iVar1 != 0)) {
            lVar3 = SSL_CTX_ctrl(param_1,0x58,0,(void *)0x0);
            iVar2 = (int)lVar3;
LAB_00101759:
            if (iVar2 != 0) {
              do {
                local_48 = (X509 *)X509_new_ex(pSVar7->method,pSVar7[1].psk_client_callback);
                if (local_48 == (X509 *)0x0) {
                  ERR_new();
                  ERR_set_debug("ssl/ssl_rsa.c",0x222,"use_certificate_chain_file");
                  ERR_set_error(0x14,0x8000d,0);
                  goto LAB_001015bb;
                }
                pXVar4 = PEM_read_bio_X509(bp,&local_48,local_68,u);
                if (pXVar4 == (X509 *)0x0) {
                  X509_free(local_48);
                  uVar5 = ERR_peek_last_error();
                  if ((((uVar5 & 0x80000000) != 0) || ((char)(uVar5 >> 0x17) != '\t')) ||
                     (((uint)uVar5 & 0x7fffff) != 0x6c)) goto LAB_001015b8;
                  ERR_clear_error();
                  goto LAB_001015bb;
                }
                if (param_1 == (SSL_CTX *)0x0) {
                  lVar3 = SSL_ctrl(param_2,0x59,0,local_48);
                  iVar2 = (int)lVar3;
                }
                else {
                  lVar3 = SSL_CTX_ctrl(param_1,0x59,0,local_48);
                  iVar2 = (int)lVar3;
                }
              } while (iVar2 != 0);
              X509_free(local_48);
            }
          }
        }
      }
    }
LAB_001015b8:
    iVar1 = 0;
  }
LAB_001015bb:
  X509_free(local_50);
  BIO_free(bp);
LAB_001015dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int SSL_CTX_use_certificate_file(SSL_CTX *ctx,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  X509 *pXVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  X509 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (X509 *)0x0;
  if (file == (char *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x13e,"SSL_CTX_use_certificate_file");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    type_00 = BIO_s_file();
    bp = BIO_new(type_00);
    if (bp != (BIO *)0x0) {
      lVar2 = BIO_ctrl(bp,0x6c,3,file);
      if ((int)lVar2 < 1) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("ssl/ssl_rsa.c",0x149,"SSL_CTX_use_certificate_file");
        ERR_set_error(0x14,0x80002,0);
      }
      else {
        local_38 = (X509 *)X509_new_ex(ctx->method,ctx[1].psk_client_callback);
        if (local_38 == (X509 *)0x0) {
          ERR_new();
          iVar1 = 0;
          ERR_set_debug("ssl/ssl_rsa.c",0x14f,"SSL_CTX_use_certificate_file");
          ERR_set_error(0x14,0x8000d,0);
        }
        else {
          if (type == 2) {
            uVar4 = 0x8000d;
            pXVar3 = d2i_X509_bio(bp,&local_38);
          }
          else {
            if (type != 1) {
              ERR_new();
              iVar1 = 0;
              ERR_set_debug("ssl/ssl_rsa.c",0x15a,"SSL_CTX_use_certificate_file");
              ERR_set_error(0x14,0x7c,0);
              goto LAB_001019b3;
            }
            uVar4 = 0x80009;
            pXVar3 = PEM_read_bio_X509(bp,&local_38,ctx->client_cert_cb,ctx->app_gen_cookie_cb);
          }
          if (pXVar3 == (X509 *)0x0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_rsa.c",0x15e,"SSL_CTX_use_certificate_file");
            iVar1 = 0;
            ERR_set_error(0x14,uVar4,0);
          }
          else {
            iVar1 = SSL_CTX_use_certificate(ctx,local_38);
          }
        }
      }
      goto LAB_001019b3;
    }
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x144,"SSL_CTX_use_certificate_file");
    ERR_set_error(0x14,0x80007,0);
  }
  iVar1 = 0;
  bp = (BIO *)0x0;
LAB_001019b3:
  X509_free(local_38);
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_CTX_use_certificate_ASN1(SSL_CTX *ctx,int len,uchar *d)

{
  int iVar1;
  X509 *pXVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_30;
  X509 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = d;
  local_28 = (X509 *)X509_new_ex(ctx->method,ctx[1].psk_client_callback);
  if (local_28 == (X509 *)0x0) {
    ERR_new();
    uVar3 = 0x170;
  }
  else {
    pXVar2 = d2i_X509(&local_28,&local_30,(long)len);
    if (pXVar2 != (X509 *)0x0) {
      iVar1 = SSL_CTX_use_certificate(ctx,local_28);
      X509_free(local_28);
      goto LAB_00101bdd;
    }
    X509_free(local_28);
    ERR_new();
    uVar3 = 0x176;
  }
  iVar1 = 0;
  ERR_set_debug("ssl/ssl_rsa.c",uVar3,"SSL_CTX_use_certificate_ASN1");
  ERR_set_error(0x14,0x8000d,0);
LAB_00101bdd:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_CTX_use_PrivateKey(SSL_CTX *ctx,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = ssl_set_pkey(*(undefined8 *)ctx->sid_ctx,pkey,ctx);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/ssl_rsa.c",0x182,"SSL_CTX_use_PrivateKey");
  ERR_set_error(0x14,0xc0102,0);
  return 0;
}



int SSL_CTX_use_PrivateKey_file(SSL_CTX *ctx,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  EVP_PKEY *pkey;
  undefined4 uVar3;
  
  if (file == (char *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("ssl/ssl_rsa.c",399,"SSL_CTX_use_PrivateKey_file");
    ERR_set_error(0x14,0xc0102,0);
    iVar1 = 0;
  }
  else {
    type_00 = BIO_s_file();
    bp = BIO_new(type_00);
    if (bp == (BIO *)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_rsa.c",0x195,"SSL_CTX_use_PrivateKey_file");
      ERR_set_error(0x14,0x80007,0);
    }
    else {
      lVar2 = BIO_ctrl(bp,0x6c,3,file);
      if ((int)lVar2 < 1) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("ssl/ssl_rsa.c",0x19a,"SSL_CTX_use_PrivateKey_file");
        ERR_set_error(0x14,0x80002,0);
      }
      else {
        if (type == 1) {
          uVar3 = 0x80009;
          pkey = (EVP_PKEY *)
                 PEM_read_bio_PrivateKey_ex
                           (bp,0,ctx->client_cert_cb,ctx->app_gen_cookie_cb,ctx->method,
                            ctx[1].psk_client_callback);
        }
        else {
          if (type != 2) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("ssl/ssl_rsa.c",0x1a7,"SSL_CTX_use_PrivateKey_file");
            ERR_set_error(0x14,0x7c,0);
            goto LAB_00101d62;
          }
          uVar3 = 0x8000d;
          pkey = (EVP_PKEY *)d2i_PrivateKey_ex_bio(bp,0,ctx->method,ctx[1].psk_client_callback);
        }
        if (pkey == (EVP_PKEY *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/ssl_rsa.c",0x1ab,"SSL_CTX_use_PrivateKey_file");
          iVar1 = 0;
          ERR_set_error(0x14,uVar3,0);
        }
        else {
          iVar1 = SSL_CTX_use_PrivateKey(ctx,pkey);
          EVP_PKEY_free(pkey);
        }
      }
    }
  }
LAB_00101d62:
  BIO_free(bp);
  return iVar1;
}



int SSL_CTX_use_PrivateKey_ASN1(int pk,SSL_CTX *ctx,uchar *d,long len)

{
  int iVar1;
  EVP_PKEY *pkey;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = d;
  pkey = (EVP_PKEY *)
         d2i_PrivateKey_ex(CONCAT44(in_register_0000003c,pk),0,&local_28,len,ctx->method,
                           ctx[1].psk_client_callback);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("ssl/ssl_rsa.c",0x1bf,"SSL_CTX_use_PrivateKey_ASN1");
    ERR_set_error(0x14,0x8000d,0);
  }
  else {
    iVar1 = SSL_CTX_use_PrivateKey(ctx,pkey);
    EVP_PKEY_free(pkey);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx,char *file)

{
  int iVar1;
  
  iVar1 = use_certificate_chain_file(ctx,0,file);
  return iVar1;
}



void SSL_use_certificate_chain_file(undefined8 param_1,undefined8 param_2)

{
  use_certificate_chain_file(0,param_1,param_2);
  return;
}



undefined4 SSL_CTX_use_serverinfo_ex(long param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *__dest;
  undefined4 *ptr;
  undefined8 uVar3;
  
  if ((param_3 == (void *)0x0 || param_4 == 0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",800,"SSL_CTX_use_serverinfo_ex");
    ERR_set_error(0x14,0xc0102,0);
  }
  else if (param_2 == 1) {
    ptr = (undefined4 *)CRYPTO_malloc((int)(param_4 + 4),"ssl/ssl_rsa.c",0x32d);
    if (ptr != (undefined4 *)0x0) {
      *ptr = 0xd0010000;
      memcpy(ptr + 1,param_3,param_4);
      uVar2 = SSL_CTX_use_serverinfo_ex(param_1,2,ptr,param_4 + 4);
      CRYPTO_free(ptr);
      return uVar2;
    }
  }
  else {
    iVar1 = serverinfo_process_buffer(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x33b;
    }
    else {
      if (**(long **)(param_1 + 0x158) == 0) {
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x33f,"SSL_CTX_use_serverinfo_ex");
        ERR_set_error(0x14,0xc0103,0);
        return 0;
      }
      __dest = CRYPTO_realloc(*(void **)(**(long **)(param_1 + 0x158) + 0x18),(int)param_4,
                              "ssl/ssl_rsa.c",0x342);
      if (__dest == (void *)0x0) {
        return 0;
      }
      *(void **)(**(long **)(param_1 + 0x158) + 0x18) = __dest;
      memcpy(__dest,param_3,param_4);
      *(size_t *)(**(long **)(param_1 + 0x158) + 0x20) = param_4;
      iVar1 = serverinfo_process_buffer(param_2,param_3,param_4,param_1);
      if (iVar1 != 0) {
        return 1;
      }
      ERR_new();
      uVar3 = 0x350;
    }
    ERR_set_debug("ssl/ssl_rsa.c",uVar3,"SSL_CTX_use_serverinfo_ex");
    ERR_set_error(0x14,0x184,0);
  }
  return 0;
}



void SSL_CTX_use_serverinfo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  SSL_CTX_use_serverinfo_ex(param_1,1,param_2,param_3);
  return;
}



undefined4 SSL_CTX_use_serverinfo_file(long param_1,void *param_2)

{
  undefined4 *puVar1;
  char *__s1;
  int iVar2;
  undefined4 uVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  void *pvVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined4 *__dest;
  void *addr;
  long in_FS_OFFSET;
  long local_78;
  uchar *local_60;
  size_t local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (uchar *)0x0;
  local_58 = 0;
  local_50 = (char *)0x0;
  local_48 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    bp = (BIO *)0x0;
    uVar3 = 0;
    addr = (void *)0x0;
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa.c",0x36c,"SSL_CTX_use_serverinfo_file");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    type = BIO_s_file();
    bp = BIO_new(type);
    if (bp == (BIO *)0x0) {
      addr = (void *)0x0;
      uVar3 = 0;
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa.c",0x372,"SSL_CTX_use_serverinfo_file");
      ERR_set_error(0x14,0x80007,0);
    }
    else {
      lVar4 = BIO_ctrl(bp,0x6c,3,param_2);
      if ((int)lVar4 < 1) {
        uVar3 = 0;
        addr = (void *)0x0;
        ERR_new();
        ERR_set_debug("ssl/ssl_rsa.c",0x376,"SSL_CTX_use_serverinfo_file");
        ERR_set_error(0x14,0x80002,0);
      }
      else {
        local_78 = 0;
        lVar4 = 0;
        addr = (void *)0x0;
        while( true ) {
          iVar2 = PEM_read_bio(bp,&local_50,&local_48,&local_60,(long *)&local_58);
          __s1 = local_50;
          if (iVar2 == 0) break;
          sVar6 = strlen(local_50);
          if ((uint)sVar6 < 0xf) {
            ERR_new();
            uVar7 = 0x38c;
LAB_0010261e:
            uVar3 = 0;
            ERR_set_debug("ssl/ssl_rsa.c",uVar7,"SSL_CTX_use_serverinfo_file");
            ERR_set_error(0x14,0x188,0);
            goto LAB_001024d3;
          }
          iVar2 = strncmp(__s1,"SERVERINFO FOR ",0xf);
          if (iVar2 == 0) {
            if (((long)local_58 < 4) ||
               ((ulong)(ushort)(*(ushort *)(local_60 + 2) << 8 | *(ushort *)(local_60 + 2) >> 8) !=
                local_58 - 4)) {
              ERR_new();
              uVar7 = 0x3a4;
LAB_00102656:
              uVar3 = 0;
              ERR_set_debug("ssl/ssl_rsa.c",uVar7,"SSL_CTX_use_serverinfo_file");
              ERR_set_error(0x14,0x186,0);
              goto LAB_001024d3;
            }
            iVar2 = 1;
            sVar6 = local_58 + 4;
          }
          else {
            if ((uint)sVar6 < 0x11) {
              ERR_new();
              uVar7 = 0x393;
              goto LAB_0010261e;
            }
            iVar2 = strncmp(__s1,"SERVERINFOV2 FOR ",0x11);
            if (iVar2 != 0) {
              uVar3 = 0;
              ERR_new();
              ERR_set_debug("ssl/ssl_rsa.c",0x397,"SSL_CTX_use_serverinfo_file");
              ERR_set_error(0x14,0x187,0);
              goto LAB_001024d3;
            }
            if (((long)local_58 < 8) ||
               ((ulong)(ushort)(*(ushort *)(local_60 + 6) << 8 | *(ushort *)(local_60 + 6) >> 8) !=
                local_58 - 8)) {
              ERR_new();
              uVar7 = 0x3ac;
              goto LAB_00102656;
            }
            iVar2 = 2;
            sVar6 = local_58;
          }
          pvVar5 = CRYPTO_realloc(addr,(int)(sVar6 + lVar4),"ssl/ssl_rsa.c",0x3b2);
          if (pvVar5 == (void *)0x0) {
            uVar3 = 0;
            goto LAB_001024d3;
          }
          puVar1 = (undefined4 *)((long)pvVar5 + lVar4);
          __dest = puVar1;
          if (iVar2 == 1) {
            __dest = puVar1 + 1;
            *puVar1 = _LC1;
          }
          memcpy(__dest,local_60,local_58);
          CRYPTO_free(local_50);
          local_50 = (char *)0x0;
          CRYPTO_free(local_48);
          local_48 = (char *)0x0;
          CRYPTO_free(local_60);
          local_78 = local_78 + 1;
          local_60 = (uchar *)0x0;
          lVar4 = sVar6 + lVar4;
          addr = pvVar5;
        }
        if (local_78 == 0) {
          ERR_new();
          uVar3 = 0;
          ERR_set_debug("ssl/ssl_rsa.c",900,"SSL_CTX_use_serverinfo_file");
          ERR_set_error(0x14,0x185,0);
        }
        else {
          uVar3 = SSL_CTX_use_serverinfo_ex(param_1,2,addr,lVar4);
        }
      }
    }
  }
LAB_001024d3:
  CRYPTO_free(local_50);
  CRYPTO_free(local_48);
  CRYPTO_free(local_60);
  CRYPTO_free(addr);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SSL_use_cert_and_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  ssl_set_cert_and_key(param_1,0,param_2,param_3,param_4,param_5);
  return;
}



void SSL_CTX_use_cert_and_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  ssl_set_cert_and_key(0,param_1,param_2,param_3,param_4,param_5);
  return;
}


