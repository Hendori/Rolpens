
undefined8 generate_token(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined5 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined5 in_stack_00000030;
  
  *(undefined1 *)(param_2 + 9) = param_3;
  uVar2 = ossl_time_now();
  *param_2 = uVar2;
  param_2[1] = in_stack_00000008;
  param_2[2] = in_stack_00000010;
  *(ulong *)((long)param_2 + 0x15) = CONCAT53(in_stack_00000018,in_stack_00000010._5_3_);
  *(undefined8 *)((long)param_2 + 0x1d) = in_stack_00000020;
  *(undefined8 *)((long)param_2 + 0x25) = in_stack_00000028;
  param_2[8] = 0;
  *(ulong *)((long)param_2 + 0x2a) = CONCAT53(in_stack_00000030,in_stack_00000028._5_3_);
  iVar1 = BIO_ADDR_rawaddress(param_1,0,param_2 + 7);
  if ((iVar1 != 0) && (param_2[7] != 0)) {
    pvVar3 = CRYPTO_malloc((int)param_2[7],"ssl/quic/quic_port.c",0x35b);
    param_2[8] = pvVar3;
    if ((pvVar3 != (void *)0x0) &&
       (iVar1 = BIO_ADDR_rawaddress(param_1,pvVar3,param_2 + 7), iVar1 != 0)) {
      return 1;
    }
  }
  CRYPTO_free((void *)param_2[8]);
  return 0;
}



undefined8 marshal_validation_token(long param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  BUF_MEM *a;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_38 = 0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  a = BUF_MEM_new();
  if ((a != (BUF_MEM *)0x0) && (*(byte *)(param_1 + 0x48) < 2)) {
    iVar1 = WPACKET_init(local_68,a);
    if ((((iVar1 != 0) &&
         ((iVar1 = WPACKET_memset(local_68,*(undefined1 *)(param_1 + 0x48),1), iVar1 != 0 &&
          (iVar1 = WPACKET_memcpy(local_68,param_1,8), iVar1 != 0)))) &&
        ((*(char *)(param_1 + 0x48) == '\0' ||
         ((iVar1 = WPACKET_sub_memcpy__(local_68,param_1 + 9,*(undefined1 *)(param_1 + 8),1),
          iVar1 != 0 &&
          (iVar1 = WPACKET_sub_memcpy__(local_68,param_1 + 0x1e,*(undefined1 *)(param_1 + 0x1d),1),
          iVar1 != 0)))))) &&
       ((iVar1 = WPACKET_sub_memcpy__
                           (local_68,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38)
                            ,1), iVar1 != 0 &&
        (((iVar1 = WPACKET_get_total_written(local_68,param_3), iVar1 != 0 && (*param_3 < 0xaa)) &&
         (iVar1 = WPACKET_finish(local_68), iVar1 != 0)))))) {
      memcpy(param_2,a->data,*param_3);
      BUF_MEM_free(a);
      uVar2 = 1;
      goto LAB_0010013d;
    }
    WPACKET_cleanup(local_68);
  }
  BUF_MEM_free(a);
  uVar2 = 0;
LAB_0010013d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool encrypt_validation_token
               (undefined8 *param_1,uchar *param_2,long param_3,uchar *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_CIPHER_CTX_get_tag_length(param_1[0x14]);
  if ((long)iVar1 != 0) {
    iVar2 = EVP_CIPHER_CTX_get_iv_length(param_1[0x14]);
    if (0 < iVar2) {
      lVar3 = (long)iVar2;
      *param_5 = (long)iVar1 + 0x10 + param_3 + lVar3;
      bVar4 = true;
      if (param_4 == (uchar *)0x0) goto LAB_001002a3;
      iVar2 = RAND_bytes_ex(*(undefined8 *)*param_1,param_4,lVar3);
      if (iVar2 != 0) {
        iVar2 = EVP_EncryptInit_ex((EVP_CIPHER_CTX *)param_1[0x14],(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                   (uchar *)0x0,param_4);
        if (iVar2 != 0) {
          param_4 = param_4 + lVar3;
          iVar2 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)param_1[0x14],param_4,&local_44,param_2,
                                    (int)param_3);
          if (iVar2 != 0) {
            iVar2 = EVP_EncryptFinal_ex((EVP_CIPHER_CTX *)param_1[0x14],param_4 + param_3,&local_44)
            ;
            if (iVar2 != 0) {
              iVar1 = EVP_CIPHER_CTX_ctrl((EVP_CIPHER_CTX *)param_1[0x14],0x10,iVar1,
                                          param_4 + param_3);
              bVar4 = iVar1 != 0;
              goto LAB_001002a3;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_001002a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * port_make_channel(long param_1,SSL *param_2,undefined8 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  SSL_METHOD *pSVar1;
  _func_3069 *str;
  code *pcVar2;
  int iVar3;
  void *ptr;
  char *pcVar4;
  SSL *ssl;
  undefined8 uVar5;
  SSL *pSVar6;
  void *pvVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = *(undefined8 *)(param_1 + 0x80);
  local_64 = SUB1612((undefined1  [16])0x0,0);
  local_78 = *(undefined8 *)(param_1 + 0x88);
  uStack_58 = 0;
  uStack_50 = 0;
  local_88 = param_1;
  local_70 = param_3;
  local_68 = param_4;
  local_54 = param_5;
  ptr = (void *)ossl_quic_channel_alloc(&local_88);
  if (ptr != (void *)0x0) {
    if (param_2 == (SSL *)0x0) {
      if (*(code **)(param_1 + 0x18) == (code *)0x0) {
        lVar8 = 0;
        ssl = (SSL *)0x0;
      }
      else {
        ssl = (SSL *)(**(code **)(param_1 + 0x18))(ptr,*(undefined8 *)(param_1 + 0x20));
        if (ssl == (SSL *)0x0) goto LAB_00100518;
        lVar8 = *(long *)(param_1 + 0x20);
      }
      uVar5 = TLS_method();
      param_2 = (SSL *)ossl_ssl_connection_new_int(*(undefined8 *)(param_1 + 0x28),ssl,uVar5);
      if ((param_2 == (SSL *)0x0) ||
         ((pSVar6 = param_2, param_2->version != 0 &&
          (((param_2->version & 0x80U) == 0 ||
           (pSVar6 = (SSL *)ossl_quic_obj_get0_handshake_layer(param_2), pSVar6 == (SSL *)0x0))))))
      {
        SSL_free(ssl);
LAB_00100518:
        *(byte *)((long)ptr + 0x625) = *(byte *)((long)ptr + 0x625) | 2;
        *(undefined8 *)((long)ptr + 0x30) = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (ssl != (SSL *)0x0) {
        ssl->s2 = (ssl2_state_st *)param_2;
      }
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 8);
        if ((*(code **)(lVar8 + 0x220) != (code *)0x0) &&
           (iVar3 = (**(code **)(lVar8 + 0x220))(lVar8,ssl,*(undefined8 *)(lVar8 + 0x228)),
           iVar3 == 0)) {
          SSL_free(param_2);
          SSL_free(ssl);
          if (ssl != (SSL *)0x0) {
            ssl->s2 = (ssl2_state_st *)0x0;
          }
          goto LAB_00100518;
        }
      }
      pSVar6->kssl_ctx = (KSSL_CTX *)((ulong)pSVar6->kssl_ctx | 0x6000);
      pSVar6[3].client_CA = (stack_st_X509_NAME *)((ulong)pSVar6[3].client_CA & 0x3df6ffb85);
      *(undefined4 *)((long)&pSVar6[4].enc_write_ctx + 4) = 0;
    }
    *(byte *)((long)ptr + 0x625) = *(byte *)((long)ptr + 0x625) | 2;
    pSVar1 = param_2->method;
    *(SSL **)((long)ptr + 0x30) = param_2;
    str = pSVar1[7].ssl_ctx_ctrl;
    if (str != (_func_3069 *)0x0) {
      pcVar4 = CRYPTO_strdup((char *)str,"ssl/quic/quic_port.c",0x21c);
      *(char **)((long)ptr + 0x640) = pcVar4;
      if (pcVar4 == (char *)0x0) {
        pvVar7 = (void *)0x0;
        CRYPTO_free(ptr);
        goto LAB_00100489;
      }
    }
    iVar3 = ossl_quic_channel_init(ptr);
    if (iVar3 != 0) {
      ossl_qtx_set_bio(*(undefined8 *)((long)ptr + 0x420),*(undefined8 *)(param_1 + 0x38));
      pvVar7 = ptr;
      goto LAB_00100489;
    }
    SSL_free(*(SSL **)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  pvVar7 = (void *)0x0;
LAB_00100489:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar7;
}



undefined8 port_update_poll_desc(long *param_1,long param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  int iStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _local_38 = (undefined1  [16])0x0;
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_00100646;
    ossl_quic_reactor_set_poll_w(*param_1 + 0x28,local_38);
  }
  else if (param_3 == 0) {
    iVar3 = BIO_get_rpoll_descriptor();
    if (iVar3 == 0) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = stack0xffffffffffffffcc;
      _local_38 = auVar1 << 0x20;
    }
    else if ((local_38._0_4_ == 1) && (iStack_30 < 0)) {
LAB_001006f0:
      ERR_new();
      ERR_set_debug("ssl/quic/quic_port.c",0x11a,"validate_poll_descriptor");
      ERR_set_error(0x14,0x80106,0);
      uVar4 = 0;
      goto LAB_0010065a;
    }
LAB_00100646:
    ossl_quic_reactor_set_poll_r(*param_1 + 0x28,local_38);
  }
  else {
    iVar3 = BIO_get_wpoll_descriptor(param_2,local_38);
    if (iVar3 == 0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = stack0xffffffffffffffcc;
      _local_38 = auVar2 << 0x20;
      ossl_quic_reactor_set_poll_w(*param_1 + 0x28,local_38);
    }
    else {
      if ((local_38._0_4_ == 1) && (iStack_30 < 0)) goto LAB_001006f0;
      ossl_quic_reactor_set_poll_w(*param_1 + 0x28,local_38);
    }
  }
  uVar4 = 1;
LAB_0010065a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void port_update_addressing_mode(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(BIO **)(param_1 + 0x30) != (BIO *)0x0) {
    uVar2 = BIO_ctrl(*(BIO **)(param_1 + 0x30),0x55,0,(void *)0x0);
    uVar3 = (uint)(uVar2 >> 2) & 1;
  }
  uVar1 = 0;
  if (*(BIO **)(param_1 + 0x38) != (BIO *)0x0) {
    uVar2 = BIO_ctrl(*(BIO **)(param_1 + 0x38),0x55,0,(void *)0x0);
    uVar1 = (uint)(uVar2 >> 1) & 1;
  }
  *(ushort *)(param_1 + 0x9a) =
       (ushort)(uVar1 << 6) | 0x100 | (ushort)(uVar3 << 7) | *(ushort *)(param_1 + 0x9a) & 0xfe3f;
  return;
}



void port_cleanup(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  ossl_quic_demux_free(param_1[8]);
  param_1[8] = 0;
  ossl_quic_srtm_free(param_1[0x11]);
  param_1[0x11] = 0;
  ossl_quic_lcidm_free(param_1[0x10]);
  param_1[0x10] = 0;
  OSSL_ERR_STATE_free(param_1[0x12]);
  param_1[0x12] = 0;
  if ((*(byte *)((long)param_1 + 0x9a) & 0x20) != 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    if (param_1 == *(long **)(lVar1 + 0x88)) {
      *(long *)(lVar1 + 0x88) = lVar3;
    }
    lVar2 = param_1[2];
    if (param_1 == *(long **)(lVar1 + 0x90)) {
      *(long *)(lVar1 + 0x90) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
      lVar3 = param_1[1];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + -1;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    *(byte *)((long)param_1 + 0x9a) = *(byte *)((long)param_1 + 0x9a) & 0xdf;
  }
  EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)param_1[0x14]);
  param_1[0x14] = 0;
  return;
}



void port_send_retry(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  undefined1 local_450 [8];
  long local_448;
  ulong local_440;
  undefined1 local_438 [64];
  undefined1 *local_3f8;
  undefined1 local_3f0 [8];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  ulong local_378 [2];
  undefined5 uStack_368;
  undefined3 uStack_363;
  undefined5 uStack_360;
  undefined1 local_35b [27];
  undefined1 *local_340;
  ulong local_338;
  ulong local_330;
  undefined1 *local_328 [2];
  undefined1 local_318 [208];
  undefined1 local_248 [520];
  long local_40;
  
  uVar1 = *(undefined8 *)(param_3 + 0x1d);
  uVar2 = *(undefined8 *)(param_3 + 0x25);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c8 = (undefined1  [16])0x0;
  local_3b8 = (undefined1  [16])0x0;
  local_3a8 = (undefined1  [16])0x0;
  local_398 = (undefined1  [16])0x0;
  local_388 = (undefined1  [16])0x0;
  puVar6 = local_378;
  for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_368 = (undefined5)uVar2;
  uStack_363 = (undefined3)*(undefined8 *)(param_3 + 0x2a);
  uStack_360 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x2a) >> 0x18);
  local_378[1] = uVar1;
  iVar3 = ossl_quic_lcidm_get_unused_cid(param_1[0x10],local_35b);
  if (iVar3 != 0) {
    local_3c8 = (undefined1  [16])0x0;
    local_3b8 = (undefined1  [16])0x0;
    local_3a8 = (undefined1  [16])0x0;
    local_398 = (undefined1  [16])0x0;
    local_388 = (undefined1  [16])0x0;
    iVar3 = generate_token(param_2,local_3c8,1);
    if (iVar3 != 0) {
      iVar3 = marshal_validation_token(local_3c8,local_248,&local_448);
      lVar5 = local_448;
      if (iVar3 != 0) {
        iVar3 = EVP_CIPHER_CTX_get_tag_length(param_1[0x14]);
        if ((long)iVar3 != 0) {
          iVar4 = EVP_CIPHER_CTX_get_iv_length(param_1[0x14]);
          if ((0 < iVar4) &&
             (local_440 = (long)iVar4 + lVar5 + 0x10 + (long)iVar3, local_440 < 0xc6)) {
            iVar3 = encrypt_validation_token(param_1,local_248,local_448,local_318,&local_440);
            if ((iVar3 != 0) && (0xf < local_440)) {
              local_378[1] = *(undefined8 *)(param_3 + 0x1d);
              local_330 = local_440;
              uStack_368 = (undefined5)*(undefined8 *)(param_3 + 0x25);
              uStack_363 = (undefined3)*(undefined8 *)(param_3 + 0x2a);
              uStack_360 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x2a) >> 0x18);
              local_378[0] = (ulong)((uint)local_378[0] & 0xffff7f00) | 0x100008004;
              local_328[0] = local_318;
              iVar3 = ossl_quic_calculate_retry_integrity_tag
                                (*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],local_378,
                                 param_3 + 8,(long)local_328 + local_440);
              if (iVar3 != 0) {
                local_3e0 = 0;
                local_340 = local_328[0];
                local_338 = local_330;
                local_3d8 = 0;
                local_3f8 = local_248;
                local_3e8 = param_2;
                iVar3 = WPACKET_init_static_len(local_438,local_248,0x200,0);
                if (iVar3 != 0) {
                  iVar3 = ossl_quic_wire_encode_pkt_hdr
                                    (local_438,*(undefined1 *)(param_3 + 8),local_378,0);
                  if (iVar3 != 0) {
                    iVar3 = WPACKET_get_total_written(local_438,local_3f0);
                    if (iVar3 != 0) {
                      iVar3 = WPACKET_finish(local_438);
                      if (iVar3 != 0) {
                        iVar3 = BIO_sendmmsg(param_1[7],&local_3f8,0x28,1,0,local_450);
                        if (iVar3 == 0) {
                          ERR_new();
                          ERR_set_debug("ssl/quic/quic_port.c",0x4a2,"port_send_retry");
                          ERR_set_error(0x14,0x183,
                                        "port retry send failed due to network BIO I/O error");
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  CRYPTO_free((void *)local_388._0_8_);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ossl_quic_port_new(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *ptr;
  long lVar4;
  EVP_CIPHER_CTX *pEVar5;
  EVP_CIPHER *cipher;
  uchar *key;
  uint uVar6;
  uint uVar7;
  
  ptr = (long *)CRYPTO_zalloc(0xa8,"ssl/quic/quic_port.c",0x68);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  lVar4 = *param_1;
  lVar1 = param_1[3];
  uVar6 = *(uint *)((long)param_1 + 0x24);
  *ptr = lVar4;
  ptr[5] = lVar1;
  uVar6 = (uVar6 & 1) << 2 | (*(uint *)(param_1 + 4) & 1) * 2 |
          *(byte *)((long)ptr + 0x9a) & 0xfffffff9;
  lVar2 = param_1[1];
  *(char *)((long)ptr + 0x9a) = (char)uVar6;
  ptr[3] = lVar2;
  ptr[4] = param_1[2];
  if ((lVar1 == 0) || (lVar4 == 0)) {
LAB_00100e18:
    key = (uchar *)0x0;
    cipher = (EVP_CIPHER *)0x0;
  }
  else {
    lVar4 = OSSL_ERR_STATE_new();
    ptr[0x12] = lVar4;
    if (lVar4 == 0) goto LAB_00100e18;
    uVar6 = uVar6 * 4;
    uVar7 = uVar6 & 8;
    lVar4 = ossl_quic_demux_new(0,uVar7,get_time);
    ptr[8] = lVar4;
    if (lVar4 == 0) goto LAB_00100e18;
    ossl_quic_demux_set_default_handler(lVar4,port_default_packet_handler,ptr);
    lVar4 = ossl_quic_srtm_new(*(undefined8 *)*ptr,((undefined8 *)*ptr)[1]);
    ptr[0x11] = lVar4;
    if (lVar4 == 0) goto LAB_00100e18;
    lVar4 = ossl_quic_lcidm_new(*(undefined8 *)*ptr,uVar7);
    ptr[0x10] = lVar4;
    if (lVar4 == 0) goto LAB_00100e18;
    *(byte *)(ptr + 0x13) = (byte)uVar6 & 8;
    *(ushort *)((long)ptr + 0x99) = *(ushort *)((long)ptr + 0x99) & 0xfe00 | 8;
    lVar4 = *ptr;
    lVar1 = *(long *)(lVar4 + 0x90);
    if (lVar1 != 0) {
      *(long **)(lVar1 + 8) = ptr;
    }
    lVar2 = *(long *)(lVar4 + 0x88);
    ptr[2] = lVar1;
    ptr[1] = 0;
    *(long **)(lVar4 + 0x90) = ptr;
    if (lVar2 == 0) {
      *(long **)(lVar4 + 0x88) = ptr;
    }
    *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) + 1;
    *(ushort *)((long)ptr + 0x9a) = *(ushort *)((long)ptr + 0x9a) | 0x120;
    pEVar5 = EVP_CIPHER_CTX_new();
    ptr[0x14] = (long)pEVar5;
    if ((pEVar5 == (EVP_CIPHER_CTX *)0x0) ||
       (cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(*(undefined8 *)*ptr,"AES-256-GCM",0),
       cipher == (EVP_CIPHER *)0x0)) goto LAB_00100e18;
    iVar3 = EVP_EncryptInit_ex((EVP_CIPHER_CTX *)ptr[0x14],cipher,(ENGINE *)0x0,(uchar *)0x0,
                               (uchar *)0x0);
    if ((iVar3 == 0) || (iVar3 = EVP_CIPHER_CTX_get_key_length(ptr[0x14]), iVar3 < 1)) {
      key = (uchar *)0x0;
    }
    else {
      key = (uchar *)CRYPTO_malloc(iVar3,"ssl/quic/quic_port.c",0xb0);
      if ((key != (uchar *)0x0) &&
         (iVar3 = RAND_bytes_ex(*(undefined8 *)*ptr,key,(long)iVar3,0), iVar3 != 0)) {
        iVar3 = EVP_EncryptInit_ex((EVP_CIPHER_CTX *)ptr[0x14],(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                                   (uchar *)0x0);
        EVP_CIPHER_free(cipher);
        CRYPTO_free(key);
        if (iVar3 != 0) {
          return ptr;
        }
        goto LAB_00100e35;
      }
    }
  }
  EVP_CIPHER_free(cipher);
  CRYPTO_free(key);
LAB_00100e35:
  port_cleanup(ptr);
  CRYPTO_free(ptr);
  return (long *)0x0;
}



void ossl_quic_port_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    port_cleanup();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



byte ossl_quic_port_is_running(long param_1)

{
  return ~*(byte *)(param_1 + 0x9a) & 1;
}



void port_default_packet_handler(long param_1,long *param_2,undefined1 *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  long lVar19;
  uchar *puVar20;
  long lVar21;
  long in_FS_OFFSET;
  byte bVar22;
  byte bVar23;
  uchar *local_680;
  long local_678;
  undefined8 local_638;
  ulong local_630;
  undefined8 local_628;
  ulong local_620;
  long local_618;
  long local_610;
  ulong local_608 [8];
  ulong local_5c8 [4];
  ulong local_5a8 [4];
  undefined8 local_588;
  undefined1 auStack_580 [8];
  undefined5 local_578;
  undefined3 uStack_573;
  undefined8 local_570;
  undefined8 local_568;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined8 local_518;
  char local_508 [4];
  int local_504;
  char local_500;
  undefined7 auStack_4ff [2];
  ulong local_4eb;
  uchar *local_4d0;
  ulong local_4c8;
  undefined1 local_4a8 [16];
  undefined8 local_48b;
  undefined3 uStack_47b;
  undefined2 uStack_478;
  undefined6 uStack_476;
  ulong uStack_470;
  byte *local_468;
  undefined8 local_460;
  ulong *local_458;
  byte local_448;
  ulong local_447;
  byte local_43f [1023];
  long local_40;
  
  bVar23 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_558 = (undefined1  [16])0x0;
  local_638 = 0;
  local_518 = 0;
  local_630 = 0;
  local_628 = 0;
  local_548 = (undefined1  [16])0x0;
  local_538 = (undefined1  [16])0x0;
  local_528 = (undefined1  [16])0x0;
  iVar3 = ossl_quic_port_is_running(param_2);
  if (iVar3 == 0) goto LAB_00100fe8;
  local_608[0] = 0;
  uVar6 = *(ulong *)(param_1 + 0x10);
  if ((0x14 < uVar6) && ((*(byte *)(param_1 + 0x128) & 0x40) != 0)) {
    lVar12 = 0;
    while (iVar3 = ossl_quic_srtm_lookup(param_2[0x11],param_1 + 0x118 + uVar6,lVar12,local_608,0),
          iVar3 != 0) {
      lVar12 = lVar12 + 1;
      ossl_quic_channel_on_stateless_reset(local_608[0]);
      uVar6 = *(ulong *)(param_1 + 0x10);
    }
    if (lVar12 != 0) goto LAB_00100fe8;
  }
  if ((param_3 != (undefined1 *)0x0) &&
     (iVar3 = ossl_quic_lcidm_lookup(param_2[0x10],param_3,0,&local_638), iVar3 != 0)) {
    ossl_quic_channel_inject(local_638,param_1);
    goto LAB_0010100a;
  }
  if (((*(byte *)((long)param_2 + 0x9a) & 0x10) == 0) ||
     (0x7ffffffffffffb4f < *(long *)(param_1 + 0x10) - 0x4b0U)) {
LAB_00100fe8:
    local_680 = (uchar *)0x0;
    puVar20 = (uchar *)0x0;
  }
  else {
    local_618 = param_1 + 0x128;
    local_610 = *(long *)(param_1 + 0x10);
    iVar3 = ossl_quic_wire_decode_pkt_hdr(&local_618,0xffffffffffffffff,1,0,local_508,0);
    if ((iVar3 == 0) && ((local_630 & 2) == 0)) goto LAB_00100fe8;
    if (local_504 != 1) {
      if (0x4af < *(ulong *)(param_1 + 0x10)) {
        local_48b = CONCAT71(auStack_4ff[0],local_500);
        local_588 = &local_448;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_4eb;
        local_4a8 = auVar1 << 0x40;
        uStack_476 = 0;
        uStack_470 = 0;
        uStack_47b = (undefined3)stack0xfffffffffffffb10;
        uStack_478 = (undefined2)((uint5)stack0xfffffffffffffb10 >> 0x18);
        local_458 = local_5a8;
        local_468 = (byte *)0x0;
        local_5a8[0] = CONCAT44(local_5a8[0]._4_4_,1);
        local_4a8[0] = 6;
        local_460 = 4;
        local_578 = (undefined5)(param_1 + 0x38);
        uStack_573 = (undefined3)((ulong)(param_1 + 0x38) >> 0x28);
        local_570 = 0;
        local_568 = 0;
        iVar3 = WPACKET_init_static_len(local_608,local_588,0x400,0);
        if ((iVar3 != 0) &&
           (iVar3 = ossl_quic_wire_encode_pkt_hdr(local_608,local_500,local_4a8,0), iVar3 != 0)) {
          iVar3 = WPACKET_put_bytes__(local_608,
                                      (uint)local_5a8[0] >> 0x18 |
                                      ((uint)local_5a8[0] & 0xff0000) >> 8 |
                                      ((uint)local_5a8[0] & 0xff00) << 8 |
                                      (uint)local_5a8[0] << 0x18,4);
          if (iVar3 != 0) {
            iVar3 = WPACKET_get_total_written(local_608,auStack_580);
            if (((iVar3 != 0) && (iVar3 = WPACKET_finish(local_608), iVar3 != 0)) &&
               (iVar3 = BIO_sendmmsg(param_2[7],&local_588,0x28,1,0,&local_620), iVar3 == 0)) {
              ERR_new();
              ERR_set_debug("ssl/quic/quic_port.c",0x4fe,"port_send_version_negotiation");
              ERR_set_error(0x14,0x183,"port version negotiation send failed");
            }
          }
        }
      }
      goto LAB_00100fe8;
    }
    if (local_508[0] != '\x01') goto LAB_00100fe8;
    local_5c8[0] = local_5c8[0] & 0xffffffffffffff00;
    local_538._0_8_ = 0x20;
    local_558._0_8_ = *(undefined8 *)*param_2;
    local_548[8] = *param_3;
    local_548._0_8_ = param_2[8];
    local_548._9_7_ = 0;
    local_680 = (uchar *)ossl_qrx_new(local_558,&local_630);
    if (local_680 == (uchar *)0x0) goto LAB_00100fe8;
    iVar3 = ossl_quic_provide_initial_secret
                      (*(undefined8 *)*param_2,((undefined8 *)*param_2)[1],&local_500,1,local_680,0)
    ;
    puVar20 = local_680;
    if ((iVar3 == 0) ||
       (iVar3 = ossl_qrx_validate_initial_packet(local_680,param_1,param_3), iVar3 == 0)) {
LAB_001013e5:
      local_680 = (uchar *)0x0;
    }
    else {
      bVar22 = *(byte *)((long)param_2 + 0x9a) & 4;
      if ((*(byte *)((long)param_2 + 0x9a) & 4) == 0) {
        puVar20 = local_4d0;
        if (local_4d0 != (uchar *)0x0) {
          puVar20 = (uchar *)0x0;
          goto LAB_00101433;
        }
      }
      else {
        if (local_4d0 == (uchar *)0x0) {
          port_send_retry(param_2,param_1 + 0x38,local_508);
          goto LAB_001013e5;
        }
        local_680 = (uchar *)0x0;
LAB_00101433:
        lVar12 = param_1 + 0x38;
        puVar17 = (undefined4 *)local_4a8;
        for (lVar11 = 0x14; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + (ulong)bVar23 * -2 + 1;
        }
        uVar7 = ossl_time_now();
        uVar6 = local_4c8;
        iVar3 = EVP_CIPHER_CTX_get_tag_length(param_2[0x14]);
        lVar11 = (long)iVar3;
        if (lVar11 == 0) {
LAB_00101630:
          pvVar9 = (void *)0x0;
        }
        else {
          iVar3 = EVP_CIPHER_CTX_get_iv_length(param_2[0x14]);
          if (((iVar3 < 1) || (uVar6 < (ulong)(lVar11 + iVar3))) ||
             ((0xc5 < uVar6 || (0xa9 < (uVar6 - lVar11) - (long)iVar3)))) goto LAB_00101630;
          local_608[0] = local_608[0] & 0xffffffff00000000;
          iVar3 = EVP_CIPHER_CTX_get_tag_length(param_2[0x14]);
          lVar11 = (long)iVar3;
          if ((((lVar11 == 0) || (iVar4 = EVP_CIPHER_CTX_get_iv_length(param_2[0x14]), iVar4 < 1))
              || (lVar19 = (long)iVar4, local_4c8 < (ulong)(lVar11 + lVar19))) || (0xc5 < local_4c8)
             ) goto LAB_00101630;
          lVar21 = (local_4c8 - lVar11) - lVar19;
          iVar5 = EVP_DecryptInit_ex((EVP_CIPHER_CTX *)param_2[0x14],(EVP_CIPHER *)0x0,(ENGINE *)0x0
                                     ,(uchar *)0x0,local_4d0);
          if (iVar5 == 0) goto LAB_00101630;
          iVar4 = EVP_DecryptUpdate((EVP_CIPHER_CTX *)param_2[0x14],&local_448,(int *)local_608,
                                    local_4d0 + lVar19,((int)local_4c8 - iVar3) - iVar4);
          if ((iVar4 == 0) ||
             (iVar3 = EVP_CIPHER_CTX_ctrl((EVP_CIPHER_CTX *)param_2[0x14],0x11,iVar3,
                                          local_4d0 + (local_4c8 - lVar11)), iVar3 == 0))
          goto LAB_00101630;
          iVar3 = EVP_DecryptFinal_ex((EVP_CIPHER_CTX *)param_2[0x14],&local_448 + (int)local_608[0]
                                      ,(int *)local_608);
          auVar1 = local_4a8;
          if (iVar3 == 0) goto LAB_00101630;
          if (lVar21 < 1) {
LAB_00101619:
            CRYPTO_free(local_468);
            goto LAB_00101630;
          }
          local_460 = CONCAT71(local_460._1_7_,local_448);
          if ((1 < local_448) || (lVar21 - 1U < 8)) goto LAB_00101619;
          lVar11 = lVar21 + -9;
          local_4a8._0_8_ = local_447;
          if (local_448 != 0) {
            if (lVar11 != 0) {
              uVar6 = (ulong)local_43f[0];
              if (uVar6 <= lVar21 - 10U) {
                local_4a8._9_7_ = auVar1._9_7_;
                local_4a8[8] = local_43f[0];
                if (local_43f[0] < 0x15) {
                  pbVar15 = local_43f + 1;
                  pbVar10 = local_4a8 + 9;
                  for (uVar13 = uVar6; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *pbVar10 = *pbVar15;
                    pbVar15 = pbVar15 + (ulong)bVar23 * -2 + 1;
                    pbVar10 = pbVar10 + (ulong)bVar23 * -2 + 1;
                  }
                  lVar11 = (lVar21 - 10U) - uVar6;
                  if (lVar11 != 0) {
                    uVar13 = lVar11 - 1;
                    bVar22 = (local_43f + 1)[uVar6];
                    uVar14 = (ulong)bVar22;
                    if (uVar14 <= uVar13) {
                      local_48b = CONCAT71(local_48b._1_7_,bVar22);
                      if (bVar22 < 0x15) {
                        lVar11 = uVar13 - uVar14;
                        pbVar15 = local_43f + uVar6 + 2 + uVar14;
                        pbVar10 = local_43f + uVar6 + 2;
                        pbVar18 = (byte *)((long)&local_48b + 1);
                        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                          *pbVar18 = *pbVar10;
                          pbVar10 = pbVar10 + (ulong)bVar23 * -2 + 1;
                          pbVar18 = pbVar18 + (ulong)bVar23 * -2 + 1;
                        }
                        goto LAB_00101b0b;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_00101619;
          }
          pbVar15 = local_43f;
LAB_00101b0b:
          if (lVar11 == 0) goto LAB_00101619;
          bVar22 = *pbVar15;
          uVar6 = (ulong)bVar22;
          if (((lVar11 - 1U < uVar6) || (uStack_470 = uVar6, uVar6 == 0)) ||
             (pbVar10 = (byte *)CRYPTO_malloc((uint)bVar22,"ssl/quic/quic_port.c",0x424),
             local_468 = pbVar10, pbVar10 == (byte *)0x0)) goto LAB_00101619;
          pbVar15 = pbVar15 + 1;
          pbVar18 = pbVar10;
          for (uVar13 = uVar6; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar18 = *pbVar15;
            pbVar15 = pbVar15 + (ulong)bVar23 * -2 + 1;
            pbVar18 = pbVar18 + (ulong)bVar23 * -2 + 1;
          }
          if (lVar11 - 1U != uVar6) goto LAB_00101619;
          if (uVar7 < local_447) goto LAB_00101630;
          cVar2 = (char)local_460;
          uVar7 = uVar7 - local_447;
          if ((char)local_460 == '\0') {
            if (uVar7 < 0x3466c536a00) goto LAB_00101bda;
            goto LAB_00101630;
          }
          if (10999999999 < uVar7) goto LAB_00101630;
LAB_00101bda:
          iVar3 = BIO_ADDR_rawaddress(lVar12,0,local_608);
          if (((iVar3 == 0) || (local_608[0] != uVar6)) ||
             (pvVar9 = CRYPTO_malloc((uint)bVar22,"ssl/quic/quic_port.c",0x54d),
             pvVar9 == (void *)0x0)) goto LAB_00101630;
          iVar3 = BIO_ADDR_rawaddress(lVar12,pvVar9,local_608);
          if ((iVar3 != 0) && (iVar3 = memcmp(pvVar9,pbVar10,local_608[0]), iVar3 == 0)) {
            if (cVar2 == '\0') {
              iVar3 = ossl_quic_lcidm_get_unused_cid(param_2[0x10],local_5c8);
              if (iVar3 != 0) {
                local_5a8[0] = local_4eb;
                bVar22 = 0x2f29aa759ff < uVar7;
                goto LAB_00101cd4;
              }
            }
            else if (((char)local_48b == local_500) &&
                    (iVar3 = memcmp((void *)((long)&local_48b + 1),auStack_4ff,local_48b & 0xff),
                    iVar3 == 0)) {
              local_5c8[0] = local_4a8._8_8_;
              local_5a8[0] = local_48b;
              bVar22 = true;
LAB_00101cd4:
              CRYPTO_free(pbVar10);
              CRYPTO_free(pvVar9);
              goto LAB_00101672;
            }
          }
        }
        CRYPTO_free(local_468);
        CRYPTO_free(pvVar9);
        if ((*(byte *)((long)param_2 + 0x9a) & 4) != 0) {
          port_send_retry(param_2,lVar12,local_508);
          goto LAB_00100fee;
        }
        bVar22 = 0;
        local_680 = puVar20;
        puVar20 = (uchar *)0x0;
      }
LAB_00101672:
      local_678 = param_1 + 0x38;
      plVar8 = (long *)param_2[0xf];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)port_make_channel(param_2,0,puVar20,1,0);
        if (plVar8 == (long *)0x0) goto LAB_00100fee;
      }
      else {
        param_2[0xf] = 0;
        ossl_quic_channel_bind_qrx(plVar8,puVar20);
        ossl_qrx_set_msg_callback(plVar8[0x85],plVar8[0x86],plVar8[0x88]);
        ossl_qrx_set_msg_callback_arg(plVar8[0x85],plVar8[0x87]);
      }
      if ((puVar20 == (uchar *)0x0) &&
         (iVar3 = ossl_quic_provide_initial_secret
                            (**(undefined8 **)*plVar8,(*(undefined8 **)*plVar8)[1],&local_500,1,
                             plVar8[0x85],0), iVar3 == 0)) {
LAB_0010174d:
        puVar20 = (uchar *)0x0;
      }
      else {
        if ((char)local_5c8[0] == '\0') {
          iVar3 = ossl_quic_channel_on_new_conn(plVar8,local_678,local_5a8,&local_500);
        }
        else {
          ossl_quic_tx_packetiser_set_validated(plVar8[0x1b]);
          iVar3 = ossl_quic_bind_channel(plVar8,local_678,local_5a8,&local_500,local_5c8);
        }
        if (iVar3 == 0) {
          ossl_quic_channel_free(plVar8);
        }
        else {
          lVar12 = param_2[0xd];
          if (lVar12 != 0) {
            *(long **)(lVar12 + 0x18) = plVar8;
          }
          lVar11 = param_2[0xc];
          plVar8[4] = lVar12;
          plVar8[3] = 0;
          param_2[0xd] = (long)plVar8;
          if (lVar11 == 0) {
            param_2[0xc] = (long)plVar8;
          }
          param_2[0xe] = param_2[0xe] + 1;
          if (bVar22 == 1) {
            puVar16 = &local_588;
            for (lVar12 = 0x15; lVar12 != 0; lVar12 = lVar12 + -1) {
              *(undefined1 *)puVar16 = 0;
              puVar16 = (undefined8 *)((long)puVar16 + (ulong)bVar23 * -2 + 1);
            }
            local_608[0] = 0;
            if (((*(byte *)((long)plVar8 + 0x623) & 2) != 0) &&
               (pvVar9 = (void *)CRYPTO_zalloc(0xc5,"ssl/quic/quic_port.c",0x593),
               pvVar9 != (void *)0x0)) {
              local_588 = (byte *)CONCAT71(local_588._1_7_,8);
              iVar3 = RAND_bytes_ex(**(undefined8 **)*plVar8,(long)&local_588 + 1,8,0);
              if (iVar3 == 0) {
                CRYPTO_free(pvVar9);
              }
              else {
                puVar17 = (undefined4 *)local_4a8;
                for (lVar12 = 0x14; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar17 = 0;
                  puVar17 = puVar17 + (ulong)bVar23 * -2 + 1;
                }
                iVar3 = generate_token(local_678,local_4a8,0);
                if (iVar3 != 0) {
                  iVar3 = marshal_validation_token(local_4a8,&local_448,local_608);
                  uVar6 = local_608[0];
                  if (iVar3 != 0) {
                    lVar12 = *plVar8;
                    iVar3 = EVP_CIPHER_CTX_get_tag_length(*(undefined8 *)(lVar12 + 0xa0));
                    if (((((long)iVar3 != 0) &&
                         (iVar4 = EVP_CIPHER_CTX_get_iv_length(*(undefined8 *)(lVar12 + 0xa0)),
                         0 < iVar4)) &&
                        (local_620 = (long)iVar4 + uVar6 + 0x10 + (long)iVar3, local_620 < 0xc6)) &&
                       ((iVar3 = encrypt_validation_token
                                           (*plVar8,&local_448,local_608[0],pvVar9,&local_620),
                        iVar3 != 0 && (0xf < local_620)))) {
                      plVar8[0xb] = (long)pvVar9;
                      plVar8[0xc] = local_620;
                      CRYPTO_free(local_468);
                      goto LAB_00101743;
                    }
                  }
                }
                CRYPTO_free(pvVar9);
                CRYPTO_free(local_468);
              }
            }
          }
LAB_00101743:
          if (puVar20 != (uchar *)0x0) goto LAB_0010174d;
          while (iVar3 = ossl_qrx_read_pkt(local_680,&local_628), iVar3 == 1) {
            ossl_quic_channel_inject_pkt(plVar8,local_628);
          }
        }
      }
    }
  }
LAB_00100fee:
  ossl_qrx_free(puVar20);
  ossl_qrx_free(local_680);
  ossl_quic_demux_release_urxe(param_2[8],param_1);
LAB_0010100a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_port_get0_engine(undefined8 *param_1)

{
  return *param_1;
}



void ossl_quic_port_get0_reactor(undefined8 *param_1)

{
  ossl_quic_engine_get0_reactor(*param_1);
  return;
}



undefined8 ossl_quic_port_get0_demux(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



void ossl_quic_port_get0_mutex(undefined8 *param_1)

{
  ossl_quic_engine_get0_mutex(*param_1);
  return;
}



void ossl_quic_port_get_time(undefined8 *param_1)

{
  ossl_quic_engine_get_time(*param_1);
  return;
}



void get_time(void)

{
  ossl_quic_port_get_time();
  return;
}



undefined1 ossl_quic_port_get_rx_short_dcid_len(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



undefined1 ossl_quic_port_get_tx_init_dcid_len(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



undefined8 ossl_quic_port_get_num_incoming_channels(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



undefined8 ossl_quic_port_get_net_rbio(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 ossl_quic_port_get_net_wbio(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



ulong ossl_quic_port_update_poll_descriptors(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_2 != 0) || (uVar2 = 0, (*(byte *)(param_1 + 0x9b) & 1) != 0)) {
    iVar1 = port_update_poll_desc(param_1,*(undefined8 *)(param_1 + 0x30),0);
    uVar2 = port_update_poll_desc(param_1,*(undefined8 *)(param_1 + 0x38),1);
    if ((int)uVar2 != 0) {
      uVar2 = (ulong)(iVar1 != 0);
    }
    *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xfe;
  }
  return uVar2;
}



byte ossl_quic_port_is_addressed_r(long param_1)

{
  return *(byte *)(param_1 + 0x9a) >> 7;
}



byte ossl_quic_port_is_addressed_w(long param_1)

{
  return *(byte *)(param_1 + 0x9a) >> 6 & 1;
}



ulong ossl_quic_port_is_addressed(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_quic_port_is_addressed_r();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = ossl_quic_port_is_addressed_w(param_1);
  return (ulong)(iVar1 != 0);
}



undefined8 ossl_quic_port_set_net_rbio(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  int iStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[6] != param_2) {
    _local_38 = (undefined1  [16])0x0;
    if (param_2 == 0) {
LAB_00102010:
      auVar1._12_4_ = 0;
      auVar1._0_12_ = stack0xffffffffffffffcc;
      _local_38 = auVar1 << 0x20;
    }
    else {
      iVar2 = BIO_get_rpoll_descriptor(param_2,local_38);
      if (iVar2 == 0) goto LAB_00102010;
      if ((local_38._0_4_ == 1) && (iStack_30 < 0)) {
        ERR_new();
        ERR_set_debug("ssl/quic/quic_port.c",0x11a,"validate_poll_descriptor");
        ERR_set_error(0x14,0x80106,0);
        uVar3 = 0;
        goto LAB_00102044;
      }
    }
    ossl_quic_reactor_set_poll_r(*param_1 + 0x28,local_38);
    ossl_quic_demux_set_bio(param_1[8],param_2);
    param_1[6] = param_2;
    port_update_addressing_mode(param_1);
  }
  uVar3 = 1;
LAB_00102044:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_port_set_net_wbio(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x38) == param_2) {
    return 1;
  }
  uVar2 = port_update_poll_desc(param_1,param_2,1);
  if ((int)uVar2 != 0) {
    for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      ossl_qtx_set_bio(*(undefined8 *)(lVar1 + 0x420),param_2);
    }
    *(long *)(param_1 + 0x38) = param_2;
    port_update_addressing_mode(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 ossl_quic_port_get_channel_ctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



void ossl_quic_port_create_outgoing(undefined8 param_1,undefined8 param_2)

{
  port_make_channel(param_1,param_2,0,0,0);
  return;
}



void ossl_quic_port_create_incoming(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = port_make_channel(param_1,param_2,0,1,1);
  *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) | 0x10;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}



void ossl_quic_port_pop_incoming(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    *(long *)(param_1 + 0x60) = lVar3;
    if (lVar1 == *(long *)(param_1 + 0x68)) {
      *(long *)(param_1 + 0x68) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x18) = lVar3;
      lVar3 = *(long *)(lVar1 + 0x18);
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x20) = lVar2;
    }
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
    *(undefined1 (*) [16])(lVar1 + 0x18) = (undefined1  [16])0x0;
  }
  return;
}



bool ossl_quic_port_have_incoming(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}



void ossl_quic_port_drop_incoming(undefined8 param_1)

{
  SSL *ssl;
  long lVar1;
  SSL *ssl_00;
  long lVar2;
  
  do {
    lVar1 = ossl_quic_port_pop_incoming(param_1);
    while( true ) {
      if ((lVar1 == 0) || (ssl_00 = (SSL *)ossl_quic_channel_get0_tls(lVar1), ssl_00 == (SSL *)0x0))
      {
        return;
      }
      if (ssl_00->version == 0) {
        ssl = *(SSL **)&ssl_00->quiet_shutdown;
      }
      else {
        if ((ssl_00->version & 0x80U) == 0) {
          return;
        }
        lVar2 = ossl_quic_obj_get0_handshake_layer(ssl_00);
        if (lVar2 == 0) {
          return;
        }
        ssl = *(SSL **)(lVar2 + 0x40);
      }
      if (ssl_00 == ssl) break;
      SSL_free(ssl);
      lVar1 = ossl_quic_port_pop_incoming(param_1);
    }
    ossl_quic_channel_free(lVar1);
    SSL_free(ssl_00);
  } while( true );
}



void ossl_quic_port_set_allow_incoming(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) & 0xef | (byte)((param_2 & 1) << 4);
  return;
}



void ossl_quic_port_raise_net_error(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_quic_port_is_running();
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_port.c",0x6b7,"ossl_quic_port_raise_net_error");
    ERR_set_error(0x14,0x183,"port failed due to network BIO I/O error");
    OSSL_ERR_STATE_save(*(undefined8 *)(param_1 + 0x90));
    if ((*(byte *)(param_1 + 0x9a) & 1) == 0) {
      *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) | 1;
    }
    if (param_2 != 0) {
      ossl_quic_channel_raise_net_error(param_2);
    }
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0) {
      do {
        if (param_2 != lVar2) {
          ossl_quic_channel_raise_net_error(lVar2);
        }
        lVar2 = *(long *)(lVar2 + 8);
      } while (lVar2 != 0);
      return;
    }
  }
  return;
}



void ossl_quic_port_subtick(long *param_1,ulong *param_2,undefined4 param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = ossl_quic_port_is_running();
  *param_2 = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 1) = uVar4;
  *(undefined2 *)((long)param_2 + 9) = 0;
  if ((*(byte *)(*param_1 + 0xa0) & 1) == 0) {
    iVar5 = ossl_quic_port_is_running(param_1);
    if (((iVar5 != 0) && ((*(byte *)((long)param_1 + 0x9a) & 0x18) != 0)) &&
       (iVar5 = ossl_quic_demux_pump(param_1[8]), iVar5 == -2)) {
      ossl_quic_port_raise_net_error(param_1,0);
    }
    uVar3 = _LC6;
    lVar1 = param_1[9];
    while (lVar1 != 0) {
      local_58 = (undefined1  [16])0x0;
      ossl_quic_channel_subtick(lVar1,local_58,param_3);
      uVar2 = (ushort)param_2[1] | local_58._8_2_;
      *(ushort *)(param_2 + 1) =
           ~CONCAT11(-((char)(uVar2 >> 8) == '\0'),-((char)uVar2 == '\0')) & uVar3;
      *(bool *)((long)param_2 + 10) = local_58[10] != '\0' || *(char *)((long)param_2 + 10) != '\0';
      lVar1 = *(long *)(lVar1 + 8);
      uVar6 = *param_2;
      if ((ulong)local_58._0_8_ < *param_2) {
        uVar6 = local_58._0_8_;
      }
      *param_2 = uVar6;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_port_restore_err_state(long param_1)

{
  ERR_clear_error();
  OSSL_ERR_STATE_restore(*(undefined8 *)(param_1 + 0x90));
  return;
}



void port_make_channel_cold(void)

{
  code *pcVar1;
  long unaff_RBX;
  SSL *unaff_R12;
  SSL *unaff_R13;
  
  SSL_free(unaff_R12);
  SSL_free(unaff_R13);
  if (unaff_R13 != (SSL *)0x0) {
    unaff_R13->s2 = (ssl2_state_st *)0x0;
  }
  *(byte *)(unaff_RBX + 0x625) = *(byte *)(unaff_RBX + 0x625) | 2;
  *(undefined8 *)(unaff_RBX + 0x30) = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


