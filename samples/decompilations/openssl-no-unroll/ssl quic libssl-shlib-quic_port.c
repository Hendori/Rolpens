
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
      goto LAB_0010005d;
    }
    WPACKET_cleanup(local_68);
  }
  BUF_MEM_free(a);
  uVar2 = 0;
LAB_0010005d:
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
      if (param_4 == (uchar *)0x0) goto LAB_001001c3;
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
              goto LAB_001001c3;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_001001c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void port_send_retry(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  undefined1 local_470 [8];
  long local_468;
  ulong local_460;
  undefined1 local_458 [64];
  undefined8 local_418;
  undefined5 uStack_410;
  undefined3 uStack_40b;
  undefined5 uStack_408;
  undefined1 *local_3f8;
  undefined5 uStack_3f0;
  undefined3 uStack_3eb;
  undefined5 uStack_3e8;
  undefined3 uStack_3e3;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 local_3c8 [16];
  undefined5 local_3b8;
  undefined3 uStack_3b3;
  undefined5 uStack_3b0;
  undefined3 uStack_3ab;
  undefined5 local_3a8;
  undefined5 uStack_3a3;
  undefined3 uStack_39e;
  undefined3 uStack_39b;
  undefined2 uStack_398;
  undefined6 uStack_396;
  long lStack_390;
  undefined1 local_388 [16];
  ulong local_378 [2];
  undefined5 uStack_368;
  undefined3 uStack_363;
  undefined5 uStack_360;
  undefined1 *local_35b;
  undefined5 uStack_353;
  undefined3 uStack_34e;
  undefined5 uStack_34b;
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
  local_3b8 = 0;
  uStack_3b3 = 0;
  uStack_3b0 = 0;
  uStack_3ab = 0;
  local_3a8 = 0;
  uStack_3a3 = 0;
  uStack_39e = 0;
  uStack_39b = 0;
  uStack_398 = 0;
  uStack_396 = 0;
  lStack_390 = 0;
  local_388 = (undefined1  [16])0x0;
  puVar8 = local_378;
  for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uStack_368 = (undefined5)uVar2;
  uStack_363 = (undefined3)*(undefined8 *)(param_3 + 0x2a);
  uStack_360 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x2a) >> 0x18);
  local_378[1] = uVar1;
  iVar4 = ossl_quic_lcidm_get_unused_cid(param_1[0x10],&local_35b);
  if (iVar4 != 0) {
    local_418 = *(undefined8 *)(param_3 + 8);
    uStack_410 = (undefined5)*(undefined8 *)(param_3 + 0x10);
    uStack_40b = (undefined3)*(undefined8 *)(param_3 + 0x15);
    uStack_408 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x15) >> 0x18);
    local_3f8 = local_35b;
    uStack_3f0 = uStack_353;
    local_3c8 = (undefined1  [16])0x0;
    local_3b8 = 0;
    uStack_3b3 = 0;
    uStack_3b0 = 0;
    uStack_3ab = 0;
    local_3a8 = 0;
    uStack_3a3 = 0;
    uStack_39e = 0;
    uStack_39b = 0;
    uStack_398 = 0;
    uStack_396 = 0;
    lStack_390 = 0;
    uStack_3eb = uStack_34e;
    uStack_3e8 = uStack_34b;
    local_388._0_9_ = (unkuint9)1 << 0x40;
    local_388._9_7_ = 0;
    local_3c8._0_8_ = ossl_time_now();
    local_3c8._8_8_ = local_418;
    local_3b8 = uStack_410;
    uStack_3b3 = uStack_40b;
    uStack_3b0 = uStack_408;
    uStack_3ab = SUB83(local_3f8,0);
    local_3a8 = (undefined5)((ulong)local_3f8 >> 0x18);
    uStack_3a3 = uStack_3f0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_388._8_8_;
    local_388 = auVar3 << 0x40;
    uStack_39e = uStack_3eb;
    uStack_39b = (undefined3)uStack_3e8;
    uStack_398 = (undefined2)((uint5)uStack_3e8 >> 0x18);
    iVar4 = BIO_ADDR_rawaddress(param_2,0,&lStack_390);
    if ((iVar4 != 0) && (lStack_390 != 0)) {
      pvVar6 = CRYPTO_malloc((int)lStack_390,"ssl/quic/quic_port.c",0x35b);
      local_388._0_8_ = pvVar6;
      if (pvVar6 != (void *)0x0) {
        iVar4 = BIO_ADDR_rawaddress(param_2,pvVar6,&lStack_390);
        if (iVar4 != 0) {
          iVar4 = marshal_validation_token(local_3c8,local_248,&local_468);
          lVar7 = local_468;
          if (iVar4 != 0) {
            iVar4 = EVP_CIPHER_CTX_get_tag_length(param_1[0x14]);
            if ((long)iVar4 != 0) {
              iVar5 = EVP_CIPHER_CTX_get_iv_length(param_1[0x14]);
              if ((0 < iVar5) &&
                 (local_460 = (long)iVar5 + lVar7 + 0x10 + (long)iVar4, local_460 < 0xc6)) {
                iVar4 = encrypt_validation_token(param_1,local_248,local_468,local_318,&local_460);
                if ((iVar4 != 0) && (0xf < local_460)) {
                  local_330 = local_460;
                  local_378[1] = *(undefined8 *)(param_3 + 0x1d);
                  uStack_368 = (undefined5)*(undefined8 *)(param_3 + 0x25);
                  uStack_363 = (undefined3)*(undefined8 *)(param_3 + 0x2a);
                  uStack_360 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x2a) >> 0x18);
                  local_378[0] = (ulong)((uint)local_378[0] & 0xffff7f00) | 0x100008004;
                  local_328[0] = local_318;
                  iVar4 = ossl_quic_calculate_retry_integrity_tag
                                    (*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],local_378,
                                     param_3 + 8,(long)local_328 + local_460);
                  if (iVar4 != 0) {
                    uStack_3e8 = (undefined5)param_2;
                    uStack_3e3 = (undefined3)((ulong)param_2 >> 0x28);
                    local_340 = local_328[0];
                    local_338 = local_330;
                    local_3e0 = 0;
                    local_3d8 = 0;
                    local_3f8 = local_248;
                    iVar4 = WPACKET_init_static_len(local_458,local_248,0x200,0);
                    if (iVar4 != 0) {
                      iVar4 = ossl_quic_wire_encode_pkt_hdr
                                        (local_458,*(undefined1 *)(param_3 + 8),local_378,0);
                      if (iVar4 != 0) {
                        iVar4 = WPACKET_get_total_written(local_458,&uStack_3f0);
                        if (iVar4 != 0) {
                          iVar4 = WPACKET_finish(local_458);
                          if (iVar4 != 0) {
                            iVar4 = BIO_sendmmsg(param_1[7],&local_3f8,0x28,1,0,local_470);
                            if (iVar4 == 0) {
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
          goto LAB_00100374;
        }
      }
    }
    CRYPTO_free((void *)local_388._0_8_);
  }
LAB_00100374:
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
  int iVar2;
  long *ptr;
  long lVar3;
  EVP_CIPHER_CTX *pEVar4;
  EVP_CIPHER *cipher;
  uchar *key;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  ptr = (long *)CRYPTO_zalloc(0xa8,"ssl/quic/quic_port.c",0x68);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = *param_1;
  lVar5 = param_1[3];
  uVar6 = *(uint *)((long)param_1 + 0x24);
  *ptr = lVar3;
  ptr[5] = lVar5;
  uVar6 = (uVar6 & 1) << 2 | (*(uint *)(param_1 + 4) & 1) * 2 |
          *(byte *)((long)ptr + 0x9a) & 0xfffffff9;
  lVar1 = param_1[1];
  *(char *)((long)ptr + 0x9a) = (char)uVar6;
  ptr[3] = lVar1;
  ptr[4] = param_1[2];
  if ((lVar5 == 0) || (lVar3 == 0)) {
LAB_00100920:
    key = (uchar *)0x0;
    cipher = (EVP_CIPHER *)0x0;
  }
  else {
    lVar3 = OSSL_ERR_STATE_new();
    ptr[0x12] = lVar3;
    if (lVar3 == 0) goto LAB_00100920;
    uVar6 = uVar6 * 4;
    uVar7 = uVar6 & 8;
    lVar3 = ossl_quic_demux_new(0,uVar7,get_time);
    ptr[8] = lVar3;
    if (lVar3 == 0) goto LAB_00100920;
    ossl_quic_demux_set_default_handler(lVar3,port_default_packet_handler,ptr);
    lVar3 = ossl_quic_srtm_new(*(undefined8 *)*ptr,((undefined8 *)*ptr)[1]);
    ptr[0x11] = lVar3;
    if (lVar3 == 0) goto LAB_00100920;
    lVar3 = ossl_quic_lcidm_new(*(undefined8 *)*ptr,uVar7);
    ptr[0x10] = lVar3;
    if (lVar3 == 0) goto LAB_00100920;
    *(byte *)(ptr + 0x13) = (byte)uVar6 & 8;
    *(ushort *)((long)ptr + 0x99) = *(ushort *)((long)ptr + 0x99) & 0xfe00 | 8;
    lVar3 = *ptr;
    lVar5 = *(long *)(lVar3 + 0x90);
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = ptr;
    }
    lVar1 = *(long *)(lVar3 + 0x88);
    ptr[2] = lVar5;
    ptr[1] = 0;
    *(long **)(lVar3 + 0x90) = ptr;
    if (lVar1 == 0) {
      *(long **)(lVar3 + 0x88) = ptr;
    }
    *(long *)(lVar3 + 0x98) = *(long *)(lVar3 + 0x98) + 1;
    *(ushort *)((long)ptr + 0x9a) = *(ushort *)((long)ptr + 0x9a) | 0x120;
    pEVar4 = EVP_CIPHER_CTX_new();
    ptr[0x14] = (long)pEVar4;
    if ((pEVar4 == (EVP_CIPHER_CTX *)0x0) ||
       (cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(*(undefined8 *)*ptr,"AES-256-GCM",0),
       cipher == (EVP_CIPHER *)0x0)) goto LAB_00100920;
    iVar2 = EVP_EncryptInit_ex((EVP_CIPHER_CTX *)ptr[0x14],cipher,(ENGINE *)0x0,(uchar *)0x0,
                               (uchar *)0x0);
    if ((iVar2 == 0) || (iVar2 = EVP_CIPHER_CTX_get_key_length(ptr[0x14]), iVar2 < 1)) {
      key = (uchar *)0x0;
    }
    else {
      key = (uchar *)CRYPTO_malloc(iVar2,"ssl/quic/quic_port.c",0xb0);
      if ((key != (uchar *)0x0) &&
         (iVar2 = RAND_bytes_ex(*(undefined8 *)*ptr,key,(long)iVar2,0), iVar2 != 0)) {
        iVar2 = EVP_EncryptInit_ex((EVP_CIPHER_CTX *)ptr[0x14],(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                                   (uchar *)0x0);
        EVP_CIPHER_free(cipher);
        CRYPTO_free(key);
        if (iVar2 != 0) {
          return ptr;
        }
        goto LAB_0010093d;
      }
    }
  }
  EVP_CIPHER_free(cipher);
  CRYPTO_free(key);
LAB_0010093d:
  ossl_quic_demux_free(ptr[8]);
  ptr[8] = 0;
  ossl_quic_srtm_free(ptr[0x11]);
  ptr[0x11] = 0;
  ossl_quic_lcidm_free(ptr[0x10]);
  ptr[0x10] = 0;
  OSSL_ERR_STATE_free(ptr[0x12]);
  ptr[0x12] = 0;
  if ((*(byte *)((long)ptr + 0x9a) & 0x20) != 0) {
    lVar3 = *ptr;
    lVar5 = ptr[1];
    if (ptr == *(long **)(lVar3 + 0x88)) {
      *(long *)(lVar3 + 0x88) = lVar5;
    }
    lVar1 = ptr[2];
    if (ptr == *(long **)(lVar3 + 0x90)) {
      *(long *)(lVar3 + 0x90) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar5;
      lVar5 = ptr[1];
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar1;
    }
    *(long *)(lVar3 + 0x98) = *(long *)(lVar3 + 0x98) + -1;
    *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
    *(byte *)((long)ptr + 0x9a) = *(byte *)((long)ptr + 0x9a) & 0xdf;
  }
  EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)ptr[0x14]);
  ptr[0x14] = 0;
  CRYPTO_free(ptr);
  return (long *)0x0;
}



void ossl_quic_port_free(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
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
  SSL_METHOD *pSVar1;
  _func_3069 *str;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  SSL *ssl;
  undefined8 uVar11;
  SSL *ssl_00;
  SSL *pSVar12;
  char *pcVar13;
  void *pvVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  long lVar25;
  uchar *puVar26;
  long lVar27;
  long in_FS_OFFSET;
  byte bVar28;
  byte bVar29;
  uchar *local_6c0;
  long local_6b8;
  undefined8 local_678;
  ulong local_670;
  undefined8 local_668;
  ulong local_660;
  long local_658;
  long local_650;
  long *local_648;
  long local_640;
  long local_638;
  uchar *local_630;
  undefined4 local_628;
  undefined4 local_624 [7];
  ulong local_608 [4];
  byte *local_5e8 [4];
  undefined1 local_5c8;
  undefined7 uStack_5c7;
  undefined5 uStack_5b8;
  long local_5a8;
  undefined5 uStack_5a0;
  undefined3 uStack_59b;
  undefined5 uStack_598;
  byte *local_588;
  undefined1 auStack_580 [8];
  undefined5 uStack_578;
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
  byte *local_4eb;
  undefined5 uStack_4e3;
  undefined3 uStack_4de;
  undefined5 uStack_4db;
  uchar *local_4d0;
  ulong local_4c8;
  undefined1 local_4a8 [16];
  undefined5 uStack_498;
  undefined3 local_493;
  undefined5 uStack_490;
  undefined8 local_48b;
  undefined3 uStack_47b;
  undefined2 uStack_478;
  undefined6 uStack_476;
  long *plStack_470;
  byte *local_468;
  undefined8 local_460;
  long *local_458;
  byte local_448;
  ulong local_447;
  byte local_43f [1023];
  long local_40;
  
  bVar29 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_558 = (undefined1  [16])0x0;
  local_678 = 0;
  local_518 = 0;
  local_670 = 0;
  local_668 = 0;
  local_548 = (undefined1  [16])0x0;
  local_538 = (undefined1  [16])0x0;
  local_528 = (undefined1  [16])0x0;
  iVar5 = ossl_quic_port_is_running(param_2);
  if (iVar5 == 0) goto LAB_00100cc8;
  local_648 = (long *)0x0;
  uVar8 = *(ulong *)(param_1 + 0x10);
  if ((0x14 < uVar8) && ((*(byte *)(param_1 + 0x128) & 0x40) != 0)) {
    lVar17 = 0;
    while (iVar5 = ossl_quic_srtm_lookup(param_2[0x11],param_1 + 0x118 + uVar8,lVar17,&local_648,0),
          iVar5 != 0) {
      lVar17 = lVar17 + 1;
      ossl_quic_channel_on_stateless_reset(local_648);
      uVar8 = *(ulong *)(param_1 + 0x10);
    }
    if (lVar17 != 0) goto LAB_00100cc8;
  }
  if ((param_3 != (undefined1 *)0x0) &&
     (iVar5 = ossl_quic_lcidm_lookup(param_2[0x10],param_3,0,&local_678), iVar5 != 0)) {
    ossl_quic_channel_inject(local_678,param_1);
    goto LAB_00100cea;
  }
  if (((*(byte *)((long)param_2 + 0x9a) & 0x10) == 0) ||
     (0x7ffffffffffffb4f < *(long *)(param_1 + 0x10) - 0x4b0U)) {
LAB_00100cc8:
    local_6c0 = (uchar *)0x0;
    puVar26 = (uchar *)0x0;
  }
  else {
    local_658 = param_1 + 0x128;
    local_650 = *(long *)(param_1 + 0x10);
    iVar5 = ossl_quic_wire_decode_pkt_hdr(&local_658,0xffffffffffffffff,1,0,local_508,0,&local_670);
    if ((iVar5 == 0) && ((local_670 & 2) == 0)) goto LAB_00100cc8;
    if (local_504 != 1) {
      if (0x4af < *(ulong *)(param_1 + 0x10)) {
        local_48b = (byte *)CONCAT71(auStack_4ff[0],local_500);
        local_588 = &local_448;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_4eb;
        local_4a8 = auVar3 << 0x40;
        uStack_498 = uStack_4e3;
        local_493 = uStack_4de;
        uStack_490 = uStack_4db;
        uStack_476 = 0;
        plStack_470 = (long *)0x0;
        uStack_47b = (undefined3)stack0xfffffffffffffb10;
        uStack_478 = (undefined2)((uint5)stack0xfffffffffffffb10 >> 0x18);
        local_458 = &local_5a8;
        local_468 = (byte *)0x0;
        local_5a8 = CONCAT44(local_5a8._4_4_,1);
        local_4a8[0] = 6;
        local_460 = 4;
        uStack_578 = (undefined5)(param_1 + 0x38);
        uStack_573 = (undefined3)((ulong)(param_1 + 0x38) >> 0x28);
        local_570 = 0;
        local_568 = 0;
        iVar5 = WPACKET_init_static_len(&local_648,local_588,0x400,0);
        if ((iVar5 != 0) &&
           (iVar5 = ossl_quic_wire_encode_pkt_hdr(&local_648,local_500,local_4a8,0), iVar5 != 0)) {
          iVar5 = WPACKET_put_bytes__(&local_648,
                                      (uint)local_5a8 >> 0x18 | ((uint)local_5a8 & 0xff0000) >> 8 |
                                      ((uint)local_5a8 & 0xff00) << 8 | (uint)local_5a8 << 0x18,4);
          if (iVar5 != 0) {
            iVar5 = WPACKET_get_total_written(&local_648,auStack_580);
            if (((iVar5 != 0) && (iVar5 = WPACKET_finish(&local_648), iVar5 != 0)) &&
               (iVar5 = BIO_sendmmsg(param_2[7],&local_588,0x28,1,0,&local_660), iVar5 == 0)) {
              ERR_new();
              ERR_set_debug("ssl/quic/quic_port.c",0x4fe,"port_send_version_negotiation");
              ERR_set_error(0x14,0x183,"port version negotiation send failed");
            }
          }
        }
      }
      goto LAB_00100cc8;
    }
    if (local_508[0] != '\x01') goto LAB_00100cc8;
    local_608[0] = local_608[0] & 0xffffffffffffff00;
    local_538._0_8_ = 0x20;
    local_558._0_8_ = *(undefined8 *)*param_2;
    local_548[8] = *param_3;
    local_548._0_8_ = param_2[8];
    local_548._9_7_ = 0;
    local_6c0 = (uchar *)ossl_qrx_new(local_558);
    if (local_6c0 == (uchar *)0x0) goto LAB_00100cc8;
    iVar5 = ossl_quic_provide_initial_secret
                      (*(undefined8 *)*param_2,((undefined8 *)*param_2)[1],&local_500,1);
    puVar26 = local_6c0;
    if ((iVar5 == 0) ||
       (iVar5 = ossl_qrx_validate_initial_packet(local_6c0,param_1,param_3), iVar5 == 0)) {
LAB_001010c5:
      local_6c0 = (uchar *)0x0;
    }
    else {
      bVar28 = *(byte *)((long)param_2 + 0x9a) & 4;
      if ((*(byte *)((long)param_2 + 0x9a) & 4) == 0) {
        puVar26 = local_4d0;
        if (local_4d0 != (uchar *)0x0) {
          puVar26 = (uchar *)0x0;
          goto LAB_00101116;
        }
      }
      else {
        if (local_4d0 == (uchar *)0x0) {
          port_send_retry(param_2,param_1 + 0x38,local_508);
          goto LAB_001010c5;
        }
        local_6c0 = (uchar *)0x0;
LAB_00101116:
        lVar17 = param_1 + 0x38;
        puVar23 = (undefined4 *)local_4a8;
        for (lVar16 = 0x14; lVar16 != 0; lVar16 = lVar16 + -1) {
          *puVar23 = 0;
          puVar23 = puVar23 + (ulong)bVar29 * -2 + 1;
        }
        uVar9 = ossl_time_now();
        uVar8 = local_4c8;
        iVar5 = EVP_CIPHER_CTX_get_tag_length(param_2[0x14]);
        lVar16 = (long)iVar5;
        if (lVar16 == 0) {
LAB_00101315:
          pvVar14 = (void *)0x0;
        }
        else {
          iVar5 = EVP_CIPHER_CTX_get_iv_length(param_2[0x14]);
          if (((iVar5 < 1) || (uVar8 < (ulong)(lVar16 + iVar5))) ||
             ((0xc5 < uVar8 || (0xa9 < (uVar8 - lVar16) - (long)iVar5)))) goto LAB_00101315;
          local_648 = (long *)((ulong)local_648 & 0xffffffff00000000);
          iVar5 = EVP_CIPHER_CTX_get_tag_length(param_2[0x14]);
          lVar16 = (long)iVar5;
          if ((((lVar16 == 0) || (iVar6 = EVP_CIPHER_CTX_get_iv_length(param_2[0x14]), iVar6 < 1))
              || (lVar25 = (long)iVar6, local_4c8 < (ulong)(lVar16 + lVar25))) || (0xc5 < local_4c8)
             ) goto LAB_00101315;
          lVar27 = (local_4c8 - lVar16) - lVar25;
          iVar7 = EVP_DecryptInit_ex((EVP_CIPHER_CTX *)param_2[0x14],(EVP_CIPHER *)0x0,(ENGINE *)0x0
                                     ,(uchar *)0x0,local_4d0);
          if (iVar7 == 0) goto LAB_00101315;
          iVar6 = EVP_DecryptUpdate((EVP_CIPHER_CTX *)param_2[0x14],&local_448,(int *)&local_648,
                                    local_4d0 + lVar25,((int)local_4c8 - iVar5) - iVar6);
          if ((iVar6 == 0) ||
             (iVar5 = EVP_CIPHER_CTX_ctrl((EVP_CIPHER_CTX *)param_2[0x14],0x11,iVar5,
                                          local_4d0 + (local_4c8 - lVar16)), iVar5 == 0))
          goto LAB_00101315;
          iVar5 = EVP_DecryptFinal_ex((EVP_CIPHER_CTX *)param_2[0x14],&local_448 + (int)local_648,
                                      (int *)&local_648);
          auVar3 = local_4a8;
          if (iVar5 == 0) goto LAB_00101315;
          if (lVar27 < 1) {
LAB_001012fe:
            CRYPTO_free(local_468);
            goto LAB_00101315;
          }
          local_460 = CONCAT71(local_460._1_7_,local_448);
          if ((1 < local_448) || (lVar27 - 1U < 8)) goto LAB_001012fe;
          lVar16 = lVar27 + -9;
          local_4a8._0_8_ = local_447;
          if (local_448 != 0) {
            if (lVar16 != 0) {
              uVar8 = (ulong)local_43f[0];
              if (uVar8 <= lVar27 - 10U) {
                local_4a8._9_7_ = auVar3._9_7_;
                local_4a8[8] = local_43f[0];
                if (local_43f[0] < 0x15) {
                  pbVar21 = local_43f + 1;
                  pbVar15 = local_4a8 + 9;
                  for (uVar18 = uVar8; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *pbVar15 = *pbVar21;
                    pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
                    pbVar15 = pbVar15 + (ulong)bVar29 * -2 + 1;
                  }
                  lVar16 = (lVar27 - 10U) - uVar8;
                  if (lVar16 != 0) {
                    uVar18 = lVar16 - 1;
                    bVar28 = (local_43f + 1)[uVar8];
                    uVar19 = (ulong)bVar28;
                    if (uVar19 <= uVar18) {
                      local_48b = (byte *)CONCAT71(local_48b._1_7_,bVar28);
                      if (bVar28 < 0x15) {
                        lVar16 = uVar18 - uVar19;
                        pbVar21 = local_43f + uVar8 + 2 + uVar19;
                        pbVar15 = local_43f + uVar8 + 2;
                        pbVar24 = (byte *)((long)&local_48b + 1);
                        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                          *pbVar24 = *pbVar15;
                          pbVar15 = pbVar15 + (ulong)bVar29 * -2 + 1;
                          pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
                        }
                        goto LAB_00101ac7;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_001012fe;
          }
          pbVar21 = local_43f;
LAB_00101ac7:
          if (lVar16 == 0) goto LAB_001012fe;
          bVar28 = *pbVar21;
          plVar10 = (long *)(ulong)bVar28;
          if ((((long *)(lVar16 - 1U) < plVar10) || (plStack_470 = plVar10, plVar10 == (long *)0x0))
             || (pbVar15 = (byte *)CRYPTO_malloc((uint)bVar28,"ssl/quic/quic_port.c",0x424),
                local_468 = pbVar15, pbVar15 == (byte *)0x0)) goto LAB_001012fe;
          pbVar21 = pbVar21 + 1;
          pbVar24 = pbVar15;
          for (plVar20 = plVar10; plVar20 != (long *)0x0; plVar20 = (long *)((long)plVar20 + -1)) {
            *pbVar24 = *pbVar21;
            pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
            pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
          }
          if ((long *)(lVar16 - 1U) != plVar10) goto LAB_001012fe;
          if (uVar9 < local_447) goto LAB_00101315;
          cVar4 = (char)local_460;
          uVar9 = uVar9 - local_447;
          if ((char)local_460 == '\0') {
            if (uVar9 < 0x3466c536a00) goto LAB_00101b96;
            goto LAB_00101315;
          }
          if (10999999999 < uVar9) goto LAB_00101315;
LAB_00101b96:
          iVar5 = BIO_ADDR_rawaddress(lVar17,0,&local_648);
          if (((iVar5 == 0) || (local_648 != plVar10)) ||
             (pvVar14 = CRYPTO_malloc((uint)bVar28,"ssl/quic/quic_port.c",0x54d),
             pvVar14 == (void *)0x0)) goto LAB_00101315;
          iVar5 = BIO_ADDR_rawaddress(lVar17,pvVar14,&local_648);
          if ((iVar5 != 0) && (iVar5 = memcmp(pvVar14,pbVar15,(size_t)local_648), iVar5 == 0)) {
            if (cVar4 == '\0') {
              iVar5 = ossl_quic_lcidm_get_unused_cid(param_2[0x10],local_608);
              if (iVar5 != 0) {
                local_5e8[0] = local_4eb;
                bVar28 = 0x2f29aa759ff < uVar9;
                goto LAB_00101c90;
              }
            }
            else if (((char)local_48b == local_500) &&
                    (iVar5 = memcmp((void *)((long)&local_48b + 1),auStack_4ff,
                                    (ulong)local_48b & 0xff), iVar5 == 0)) {
              local_608[0] = local_4a8._8_8_;
              local_5e8[0] = local_48b;
              bVar28 = true;
LAB_00101c90:
              CRYPTO_free(pbVar15);
              CRYPTO_free(pvVar14);
              goto LAB_00101358;
            }
          }
        }
        CRYPTO_free(local_468);
        CRYPTO_free(pvVar14);
        bVar28 = *(byte *)((long)param_2 + 0x9a) & 4;
        if ((*(byte *)((long)param_2 + 0x9a) & 4) != 0) {
          port_send_retry(param_2,lVar17,local_508);
          goto LAB_00100cce;
        }
        local_6c0 = puVar26;
        puVar26 = (uchar *)0x0;
      }
LAB_00101358:
      local_6b8 = param_1 + 0x38;
      plVar10 = (long *)param_2[0xf];
      if (plVar10 == (long *)0x0) {
        puVar23 = local_624;
        for (lVar17 = 7; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar23 = 0;
          puVar23 = puVar23 + (ulong)bVar29 * -2 + 1;
        }
        local_640 = param_2[0x10];
        local_628 = 1;
        local_638 = param_2[0x11];
        local_648 = param_2;
        local_630 = puVar26;
        plVar10 = (long *)ossl_quic_channel_alloc(&local_648);
        if (plVar10 != (long *)0x0) {
          if ((code *)param_2[3] == (code *)0x0) {
            lVar17 = 0;
            ssl = (SSL *)0x0;
          }
          else {
            ssl = (SSL *)(*(code *)param_2[3])(plVar10,param_2[4]);
            if (ssl == (SSL *)0x0) goto LAB_0010198e;
            lVar17 = param_2[4];
          }
          uVar11 = TLS_method();
          ssl_00 = (SSL *)ossl_ssl_connection_new_int(param_2[5],ssl,uVar11);
          if ((ssl_00 == (SSL *)0x0) ||
             ((pSVar12 = ssl_00, ssl_00->version != 0 &&
              (((ssl_00->version & 0x80U) == 0 ||
               (pSVar12 = (SSL *)ossl_quic_obj_get0_handshake_layer(ssl_00), pSVar12 == (SSL *)0x0))
              )))) {
            SSL_free(ssl);
LAB_0010198e:
            *(byte *)((long)plVar10 + 0x625) = *(byte *)((long)plVar10 + 0x625) | 2;
            plVar10[6] = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (ssl != (SSL *)0x0) {
            ssl->s2 = (ssl2_state_st *)ssl_00;
          }
          if (lVar17 != 0) {
            lVar17 = *(long *)(lVar17 + 8);
            if ((*(code **)(lVar17 + 0x220) != (code *)0x0) &&
               (iVar5 = (**(code **)(lVar17 + 0x220))(lVar17,ssl,*(undefined8 *)(lVar17 + 0x228)),
               iVar5 == 0)) {
              SSL_free(ssl_00);
              SSL_free(ssl);
              if (ssl != (SSL *)0x0) {
                port_default_packet_handler_cold();
                return;
              }
              goto LAB_0010198e;
            }
          }
          pSVar12->kssl_ctx = (KSSL_CTX *)((ulong)pSVar12->kssl_ctx | 0x6000);
          *(undefined4 *)((long)&pSVar12[4].enc_write_ctx + 4) = 0;
          pSVar12[3].client_CA = (stack_st_X509_NAME *)((ulong)pSVar12[3].client_CA & 0x3df6ffb85);
          *(byte *)((long)plVar10 + 0x625) = *(byte *)((long)plVar10 + 0x625) | 2;
          pSVar1 = ssl_00->method;
          plVar10[6] = (long)ssl_00;
          str = pSVar1[7].ssl_ctx_ctrl;
          if (str != (_func_3069 *)0x0) {
            pcVar13 = CRYPTO_strdup((char *)str,"ssl/quic/quic_port.c",0x21c);
            plVar10[200] = (long)pcVar13;
            if (pcVar13 == (char *)0x0) {
              CRYPTO_free(plVar10);
              goto LAB_00100cce;
            }
          }
          iVar5 = ossl_quic_channel_init(plVar10);
          if (iVar5 != 0) {
            ossl_qtx_set_bio(plVar10[0x84],param_2[7]);
            goto LAB_001013a5;
          }
          SSL_free((SSL *)plVar10[6]);
          CRYPTO_free(plVar10);
        }
      }
      else {
        param_2[0xf] = 0;
        ossl_quic_channel_bind_qrx(plVar10,puVar26);
        ossl_qrx_set_msg_callback(plVar10[0x85],plVar10[0x86],plVar10[0x88]);
        ossl_qrx_set_msg_callback_arg(plVar10[0x85],plVar10[0x87]);
LAB_001013a5:
        if ((puVar26 != (uchar *)0x0) ||
           (iVar5 = ossl_quic_provide_initial_secret
                              (**(undefined8 **)*plVar10,(*(undefined8 **)*plVar10)[1],&local_500,1,
                               plVar10[0x85],0), iVar5 != 0)) {
          if ((char)local_608[0] == '\0') {
            iVar5 = ossl_quic_channel_on_new_conn(plVar10,local_6b8,local_5e8,&local_500);
          }
          else {
            ossl_quic_tx_packetiser_set_validated(plVar10[0x1b]);
            iVar5 = ossl_quic_bind_channel(plVar10,local_6b8,local_5e8,&local_500,local_608);
          }
          if (iVar5 == 0) {
            ossl_quic_channel_free(plVar10);
            goto LAB_00100cce;
          }
          lVar17 = param_2[0xd];
          if (lVar17 != 0) {
            *(long **)(lVar17 + 0x18) = plVar10;
          }
          lVar16 = param_2[0xc];
          plVar10[4] = lVar17;
          plVar10[3] = 0;
          param_2[0xd] = (long)plVar10;
          if (lVar16 == 0) {
            param_2[0xc] = (long)plVar10;
          }
          param_2[0xe] = param_2[0xe] + 1;
          if (bVar28 == 1) {
            puVar22 = &local_5c8;
            for (lVar17 = 0x15; lVar17 != 0; lVar17 = lVar17 + -1) {
              *puVar22 = 0;
              puVar22 = puVar22 + (ulong)bVar29 * -2 + 1;
            }
            local_648 = (long *)0x0;
            if (((*(byte *)((long)plVar10 + 0x623) & 2) != 0) &&
               (pvVar14 = (void *)CRYPTO_zalloc(0xc5,"ssl/quic/quic_port.c",0x593),
               pvVar14 != (void *)0x0)) {
              local_5c8 = 8;
              iVar5 = RAND_bytes_ex(**(undefined8 **)*plVar10,&uStack_5c7,8,0);
              if (iVar5 == 0) {
                CRYPTO_free(pvVar14);
              }
              else {
                local_588 = (byte *)CONCAT71(uStack_5c7,local_5c8);
                puVar23 = (undefined4 *)local_4a8;
                for (lVar17 = 0x14; lVar17 != 0; lVar17 = lVar17 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + (ulong)bVar29 * -2 + 1;
                }
                local_5a8 = plVar10[0x8f];
                uStack_5a0 = (undefined5)plVar10[0x90];
                uStack_59b = (undefined3)*(undefined8 *)((long)plVar10 + 0x485);
                uStack_598 = (undefined5)((ulong)*(undefined8 *)((long)plVar10 + 0x485) >> 0x18);
                uStack_578 = uStack_5b8;
                local_4a8._0_8_ = ossl_time_now();
                local_468 = (byte *)0x0;
                local_4a8._8_8_ = local_5a8;
                uStack_498 = uStack_5a0;
                local_493 = uStack_59b;
                uStack_490 = uStack_598;
                local_48b = local_588;
                uStack_47b = (undefined3)uStack_578;
                uStack_478 = (undefined2)((uint5)uStack_578 >> 0x18);
                iVar5 = BIO_ADDR_rawaddress(local_6b8,0,&plStack_470);
                if ((((iVar5 == 0) || (plStack_470 == (long *)0x0)) ||
                    (local_468 = (byte *)CRYPTO_malloc((int)plStack_470,"ssl/quic/quic_port.c",0x35b
                                                      ), local_468 == (byte *)0x0)) ||
                   (iVar5 = BIO_ADDR_rawaddress(local_6b8,local_468,&plStack_470), iVar5 == 0)) {
                  CRYPTO_free(local_468);
                }
                else {
                  iVar5 = marshal_validation_token(local_4a8,&local_448,&local_648);
                  plVar20 = local_648;
                  if (iVar5 != 0) {
                    lVar17 = *plVar10;
                    iVar5 = EVP_CIPHER_CTX_get_tag_length(*(undefined8 *)(lVar17 + 0xa0));
                    if ((((long)iVar5 != 0) &&
                        (iVar6 = EVP_CIPHER_CTX_get_iv_length(*(undefined8 *)(lVar17 + 0xa0)),
                        0 < iVar6)) &&
                       ((local_660 = (long)plVar20 + (long)iVar6 + (long)iVar5 + 0x10,
                        local_660 < 0xc6 &&
                        ((iVar5 = encrypt_validation_token
                                            (*plVar10,&local_448,local_648,pvVar14,&local_660),
                         iVar5 != 0 && (0xf < local_660)))))) {
                      plVar10[0xb] = (long)pvVar14;
                      plVar10[0xc] = local_660;
                      CRYPTO_free(local_468);
                      goto LAB_0010142a;
                    }
                  }
                }
                CRYPTO_free(pvVar14);
                CRYPTO_free(local_468);
              }
            }
          }
LAB_0010142a:
          if (puVar26 == (uchar *)0x0) {
            while (iVar5 = ossl_qrx_read_pkt(local_6c0,&local_668), iVar5 == 1) {
              ossl_quic_channel_inject_pkt(plVar10,local_668);
            }
          }
        }
        puVar26 = (uchar *)0x0;
      }
    }
  }
LAB_00100cce:
  ossl_qrx_free(puVar26);
  ossl_qrx_free(local_6c0);
  ossl_quic_demux_release_urxe(param_2[8],param_1);
LAB_00100cea:
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



undefined8 ossl_quic_port_update_poll_descriptors(long *param_1,int param_2)

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
  if ((param_2 == 0) && (uVar4 = 0, (*(byte *)((long)param_1 + 0x9b) & 1) == 0)) goto LAB_00101f29;
  _local_38 = (undefined1  [16])0x0;
  if (param_1[6] == 0) {
LAB_00101ed3:
    auVar1._12_4_ = 0;
    auVar1._0_12_ = stack0xffffffffffffffcc;
    _local_38 = auVar1 << 0x20;
LAB_00101eda:
    uVar4 = 1;
    ossl_quic_reactor_set_poll_r(*param_1 + 0x28,local_38);
  }
  else {
    iVar3 = BIO_get_rpoll_descriptor(param_1[6],local_38);
    if (iVar3 == 0) goto LAB_00101ed3;
    if ((local_38._0_4_ != 1) || (-1 < iStack_30)) goto LAB_00101eda;
    ERR_new();
    uVar4 = 0;
    ERR_set_debug("ssl/quic/quic_port.c",0x11a,"validate_poll_descriptor");
    ERR_set_error(0x14,0x80106,0);
  }
  _local_38 = (undefined1  [16])0x0;
  if (param_1[7] == 0) {
LAB_00101f0c:
    auVar2._12_4_ = 0;
    auVar2._0_12_ = stack0xffffffffffffffcc;
    _local_38 = auVar2 << 0x20;
LAB_00101f13:
    ossl_quic_reactor_set_poll_w(*param_1 + 0x28,local_38);
  }
  else {
    iVar3 = BIO_get_wpoll_descriptor(param_1[7],local_38);
    if (iVar3 == 0) goto LAB_00101f0c;
    if ((local_38._0_4_ != 1) || (-1 < iStack_30)) goto LAB_00101f13;
    ERR_new();
    uVar4 = 0;
    ERR_set_debug("ssl/quic/quic_port.c",0x11a,"validate_poll_descriptor");
    ERR_set_error(0x14,0x80106,0);
  }
  *(byte *)((long)param_1 + 0x9b) = *(byte *)((long)param_1 + 0x9b) & 0xfe;
LAB_00101f29:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



undefined8 ossl_quic_port_set_net_rbio(long *param_1,BIO *param_2)

{
  BIO *bp;
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  int iStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((BIO *)param_1[6] != param_2) {
    _local_38 = (undefined1  [16])0x0;
    if ((param_2 == (BIO *)0x0) || (iVar2 = BIO_get_rpoll_descriptor(param_2,local_38), iVar2 == 0))
    {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = stack0xffffffffffffffcc;
      _local_38 = auVar1 << 0x20;
      ossl_quic_reactor_set_poll_r(*param_1 + 0x28,local_38);
      ossl_quic_demux_set_bio(param_1[8],param_2);
      param_1[6] = (long)param_2;
      if (param_2 != (BIO *)0x0) goto LAB_001020e5;
      bp = (BIO *)param_1[7];
      uVar6 = 0;
    }
    else {
      if ((local_38._0_4_ == 1) && (iStack_30 < 0)) {
        ERR_new();
        ERR_set_debug("ssl/quic/quic_port.c",0x11a,"validate_poll_descriptor");
        ERR_set_error(0x14,0x80106,0);
        uVar5 = 0;
        goto LAB_0010214a;
      }
      ossl_quic_reactor_set_poll_r(*param_1 + 0x28,local_38);
      ossl_quic_demux_set_bio(param_1[8],param_2);
      param_1[6] = (long)param_2;
LAB_001020e5:
      uVar4 = BIO_ctrl(param_2,0x55,0,(void *)0x0);
      bp = (BIO *)param_1[7];
      uVar6 = (uint)(uVar4 >> 2) & 1;
    }
    uVar3 = 0;
    if (bp != (BIO *)0x0) {
      uVar4 = BIO_ctrl(bp,0x55,0,(void *)0x0);
      uVar3 = (uint)(uVar4 >> 1) & 1;
    }
    *(ushort *)((long)param_1 + 0x9a) =
         (ushort)(uVar3 << 6) | 0x100 | (ushort)(uVar6 << 7) |
         *(ushort *)((long)param_1 + 0x9a) & 0xfe3f;
  }
  uVar5 = 1;
LAB_0010214a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_port_set_net_wbio(long *param_1,BIO *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  int iStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((BIO *)param_1[7] != param_2) {
    _local_38 = (undefined1  [16])0x0;
    if ((param_2 == (BIO *)0x0) || (iVar3 = BIO_get_wpoll_descriptor(param_2,local_38), iVar3 == 0))
    {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = stack0xffffffffffffffcc;
      _local_38 = auVar2 << 0x20;
    }
    else if ((local_38._0_4_ == 1) && (iStack_30 < 0)) {
      ERR_new();
      ERR_set_debug("ssl/quic/quic_port.c",0x11a,"validate_poll_descriptor");
      ERR_set_error(0x14,0x80106,0);
      uVar6 = 0;
      goto LAB_0010234a;
    }
    ossl_quic_reactor_set_poll_w(*param_1 + 0x28,local_38);
    for (lVar1 = param_1[9]; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      ossl_qtx_set_bio(*(undefined8 *)(lVar1 + 0x420),param_2);
    }
    param_1[7] = (long)param_2;
    uVar7 = 0;
    if ((BIO *)param_1[6] != (BIO *)0x0) {
      uVar5 = BIO_ctrl((BIO *)param_1[6],0x55,0,(void *)0x0);
      param_2 = (BIO *)param_1[7];
      uVar7 = (uint)(uVar5 >> 2) & 1;
    }
    uVar4 = 0;
    if (param_2 != (BIO *)0x0) {
      uVar5 = BIO_ctrl(param_2,0x55,0,(void *)0x0);
      uVar4 = (uint)(uVar5 >> 1) & 1;
    }
    *(ushort *)((long)param_1 + 0x9a) =
         (ushort)(uVar4 << 6) | 0x100 | (ushort)(uVar7 << 7) |
         *(ushort *)((long)param_1 + 0x9a) & 0xfe3f;
  }
  uVar6 = 1;
LAB_0010234a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8 ossl_quic_port_get_channel_ctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



void * ossl_quic_port_create_outgoing(long param_1,SSL *param_2)

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
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined4 uStack_58;
  undefined1 auStack_54 [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = *(undefined8 *)(param_1 + 0x88);
  local_64 = SUB1612((undefined1  [16])0x0,0);
  uStack_58 = 0;
  auStack_54 = SUB1612((undefined1  [16])0x0,4);
  uStack_80 = *(undefined8 *)(param_1 + 0x80);
  local_68 = 0;
  local_70 = 0;
  local_88 = param_1;
  ptr = (void *)ossl_quic_channel_alloc(&local_88);
  if (ptr != (void *)0x0) {
    if (param_2 == (SSL *)0x0) {
      if (*(code **)(param_1 + 0x18) == (code *)0x0) {
        lVar8 = 0;
        ssl = (SSL *)0x0;
      }
      else {
        ssl = (SSL *)(**(code **)(param_1 + 0x18))(ptr,*(undefined8 *)(param_1 + 0x20));
        if (ssl == (SSL *)0x0) goto LAB_001024f8;
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
LAB_001024f8:
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
          goto LAB_001024f8;
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
        goto LAB_00102460;
      }
    }
    iVar3 = ossl_quic_channel_init(ptr);
    if (iVar3 != 0) {
      ossl_qtx_set_bio(*(undefined8 *)((long)ptr + 0x420),*(undefined8 *)(param_1 + 0x38));
      pvVar7 = ptr;
      goto LAB_00102460;
    }
    SSL_free(*(SSL **)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  pvVar7 = (void *)0x0;
LAB_00102460:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar7;
}



void * ossl_quic_port_create_incoming(long param_1,SSL *param_2)

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
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = *(undefined8 *)(param_1 + 0x88);
  local_64 = SUB1612((undefined1  [16])0x0,0);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = *(undefined8 *)(param_1 + 0x80);
  local_68 = 1;
  local_70 = 0;
  local_54 = 1;
  local_88 = param_1;
  ptr = (void *)ossl_quic_channel_alloc(&local_88);
  if (ptr != (void *)0x0) {
    if (param_2 == (SSL *)0x0) {
      if (*(code **)(param_1 + 0x18) == (code *)0x0) {
        lVar8 = 0;
        ssl = (SSL *)0x0;
      }
      else {
        ssl = (SSL *)(**(code **)(param_1 + 0x18))(ptr,*(undefined8 *)(param_1 + 0x20));
        if (ssl == (SSL *)0x0) goto LAB_00102758;
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
LAB_00102758:
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
          goto LAB_00102758;
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
        goto LAB_001026b8;
      }
    }
    iVar3 = ossl_quic_channel_init(ptr);
    if (iVar3 != 0) {
      ossl_qtx_set_bio(*(undefined8 *)((long)ptr + 0x420),*(undefined8 *)(param_1 + 0x38));
      pvVar7 = ptr;
      goto LAB_001026b8;
    }
    SSL_free(*(SSL **)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  pvVar7 = (void *)0x0;
LAB_001026b8:
  *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) | 0x10;
  *(void **)(param_1 + 0x78) = pvVar7;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar7;
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
  long lVar1;
  int iVar2;
  
  iVar2 = ossl_quic_port_is_running();
  if (iVar2 != 0) {
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
    for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      while (param_2 == lVar1) {
        lVar1 = *(long *)(param_2 + 8);
        if (lVar1 == 0) {
          return;
        }
      }
      ossl_quic_channel_raise_net_error(lVar1);
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
    uVar3 = _LC8;
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



void port_default_packet_handler_cold(void)

{
  code *pcVar1;
  long unaff_R13;
  long unaff_R14;
  
  *(undefined8 *)(unaff_R13 + 0x78) = 0;
  *(byte *)(unaff_R14 + 0x625) = *(byte *)(unaff_R14 + 0x625) | 2;
  *(undefined8 *)(unaff_R14 + 0x30) = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void ossl_quic_port_create_outgoing_cold(void)

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



void ossl_quic_port_create_incoming_cold(void)

{
  code *pcVar1;
  long unaff_RBX;
  SSL *unaff_RBP;
  SSL *unaff_R13;
  
  SSL_free(unaff_RBP);
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


