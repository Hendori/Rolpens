
void packet_plain_finish(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
  return;
}



void handshake_finish(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



void noise_msg_callback(undefined4 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                       long param_5,undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0x202) {
    if (-1 < param_5) {
      local_58 = param_4;
      local_50 = param_5;
      iVar1 = ossl_quic_wire_peek_frame_header(&local_58,&local_60,0);
      if (iVar1 != 0) {
        if (local_60 == 1) {
          BIO_ctrl((BIO *)*param_7,0x3e9,1,(void *)0x0);
          BIO_ctrl((BIO *)param_7[1],0x3e9,1,(void *)0x0);
        }
        goto LAB_001000a4;
      }
    }
  }
  else {
LAB_001000a4:
    if ((*(byte *)(param_7 + 3) & 0x10) != 0) {
      iVar1 = SSL_is_server(param_6);
      if (iVar1 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          SSL_trace(param_1,param_2,param_3,param_4,param_5,param_6);
          return;
        }
        goto LAB_0010018a;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010018a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void run_server_shutdown_thread(void)

{
  do {
    ossl_quic_tserver_tick(globtserv);
  } while (shutdowndone == 0);
  return;
}



undefined8 thread_run(code *param_1)

{
  (*param_1)();
  OPENSSL_thread_stop();
  return 0;
}



undefined8
packet_plain_mutate(undefined8 *param_1,undefined8 *param_2,long param_3,long *param_4,long *param_5
                   ,undefined8 *param_6,long param_7)

{
  size_t __n;
  void *__src;
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  if (param_3 == 0) {
    lVar6 = 0;
    iVar5 = 0x492;
  }
  else {
    lVar6 = 0;
    puVar1 = param_2;
    do {
      lVar6 = lVar6 + puVar1[1];
      puVar1 = puVar1 + 2;
    } while (param_2 + param_3 * 2 != puVar1);
    iVar5 = 0x492 - (int)lVar6;
  }
  *(long *)(param_7 + 0x68) = lVar6;
  lVar6 = (int)((iVar5 - (uint)*(byte *)(param_1 + 1)) - (uint)*(byte *)((long)param_1 + 0x1d)) +
          lVar6;
  pvVar2 = CRYPTO_malloc((int)lVar6,"test/helpers/quictestlib.c",0x2f6);
  *(void **)(param_7 + 0x60) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *(undefined8 *)(param_7 + 0x68) = 0;
    uVar4 = 0;
  }
  else {
    *(long *)(param_7 + 0x70) = lVar6;
    if (param_3 != 0) {
      puVar1 = param_2 + param_3 * 2;
      pvVar3 = pvVar2;
      do {
        __n = param_2[1];
        __src = (void *)*param_2;
        param_2 = param_2 + 2;
        pvVar3 = memcpy(pvVar3,__src,__n);
        pvVar3 = (void *)((long)pvVar3 + __n);
      } while (puVar1 != param_2);
    }
    uVar4 = param_1[1];
    *(undefined8 *)(param_7 + 8) = *param_1;
    *(undefined8 *)(param_7 + 0x10) = uVar4;
    uVar4 = param_1[3];
    *(undefined8 *)(param_7 + 0x18) = param_1[2];
    *(undefined8 *)(param_7 + 0x20) = uVar4;
    uVar4 = param_1[5];
    *(undefined8 *)(param_7 + 0x28) = param_1[4];
    *(undefined8 *)(param_7 + 0x30) = uVar4;
    uVar4 = param_1[7];
    *(undefined8 *)(param_7 + 0x38) = param_1[6];
    *(undefined8 *)(param_7 + 0x40) = uVar4;
    uVar4 = param_1[9];
    *(undefined8 *)(param_7 + 0x48) = param_1[8];
    *(undefined8 *)(param_7 + 0x50) = uVar4;
    *(undefined8 *)(param_7 + 0x58) = param_1[10];
    if (*(code **)(param_7 + 0x78) != (code *)0x0) {
      (**(code **)(param_7 + 0x78))
                (param_7,param_7 + 8,pvVar2,*(undefined8 *)(param_7 + 0x68),
                 *(undefined8 *)(param_7 + 0x80));
    }
    *param_4 = param_7 + 8;
    *param_5 = param_7 + 0x60;
    *param_6 = 1;
    uVar4 = 1;
  }
  return uVar4;
}



undefined8 pcipher_destroy(void)

{
  void *ptr;
  
  ptr = (void *)BIO_get_data();
  CRYPTO_free(ptr);
  return 1;
}



long pcipher_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  BIO *bp;
  long lVar1;
  
  bp = BIO_next(param_1);
  if (bp != (BIO *)0x0) {
    lVar1 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar1;
  }
  return -1;
}



ulong pcipher_sendmmsg(BIO *param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5
                      ,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  BIO *pBVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  void *local_a8;
  long local_a0;
  undefined1 local_98 [72];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar4 = BIO_next(param_1);
  if (pBVar4 == (BIO *)0x0) {
LAB_001005e8:
    uVar8 = 0;
  }
  else {
    puVar5 = (undefined8 *)BIO_get_data(param_1);
    if (((puVar5 == (undefined8 *)0x0) || (lVar7 = puVar5[1], lVar7 == 0)) ||
       ((*(long *)(lVar7 + 0xc0) == 0 && (*(long *)(lVar7 + 0xd0) == 0)))) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = BIO_sendmmsg(pBVar4,param_2,param_3,param_4,param_5,param_6);
        return uVar8;
      }
      goto LAB_00100759;
    }
    lVar9 = 0;
    if (param_4 == 0) {
      *param_6 = 0;
      uVar8 = 1;
    }
    else {
      do {
        uVar2 = param_2[1];
        *(undefined8 *)(lVar7 + 0xe0) = *param_2;
        *(undefined8 *)(lVar7 + 0xe8) = uVar2;
        uVar2 = param_2[3];
        *(undefined8 *)(lVar7 + 0xf0) = param_2[2];
        *(undefined8 *)(lVar7 + 0xf8) = uVar2;
        *(undefined8 *)(lVar7 + 0x100) = param_2[4];
        pvVar6 = CRYPTO_malloc((int)*(undefined8 *)(lVar7 + 0xe8) + 0x400,
                               "test/helpers/quictestlib.c",0x46d);
        if (pvVar6 == (void *)0x0) goto LAB_001005e8;
        pvVar6 = memcpy(pvVar6,*(void **)(puVar5[1] + 0xe0),*(size_t *)(puVar5[1] + 0xe8));
        lVar7 = puVar5[1];
        *(void **)(lVar7 + 0xe0) = pvVar6;
        lVar1 = *(long *)(lVar7 + 0xe8);
        *(long *)(lVar7 + 0x108) = lVar1 + 0x400;
        if (*(long *)(lVar7 + 0xc0) != 0) {
          if (lVar1 < 0) goto LAB_001005e8;
          local_a8 = pvVar6;
          local_a0 = lVar1;
          do {
            iVar3 = ossl_quic_wire_decode_pkt_hdr(&local_a8,*puVar5,1,0,local_98,0,0);
            lVar7 = puVar5[1];
            if (iVar3 == 0) goto LAB_00100697;
            iVar3 = (**(code **)(lVar7 + 0xc0))
                              (lVar7,local_98,local_48,local_50,*(undefined8 *)(lVar7 + 200));
            if (iVar3 == 0) goto LAB_00100740;
          } while (local_a0 != 0);
          lVar7 = puVar5[1];
        }
        if (*(code **)(lVar7 + 0xd0) != (code *)0x0) {
          iVar3 = (**(code **)(lVar7 + 0xd0))
                            (lVar7,lVar7 + 0xe0,param_3,*(undefined8 *)(lVar7 + 0xd8));
          if (iVar3 != 0) {
            lVar7 = puVar5[1];
            goto LAB_0010055e;
          }
LAB_00100740:
          lVar7 = puVar5[1];
LAB_00100697:
          pvVar6 = *(void **)(lVar7 + 0xe0);
          goto LAB_0010069e;
        }
LAB_0010055e:
        iVar3 = BIO_sendmmsg(pBVar4,lVar7 + 0xe0,param_3,1,param_5);
        if (iVar3 == 0) {
          *param_6 = lVar9;
          goto LAB_00100740;
        }
        lVar9 = lVar9 + 1;
        param_2 = (undefined8 *)((long)param_2 + param_3);
        CRYPTO_free(*(void **)(puVar5[1] + 0xe0));
        lVar7 = puVar5[1];
        *(undefined8 *)(lVar7 + 0xe0) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0;
      } while (param_4 != lVar9);
      pvVar6 = (void *)0x0;
      *param_6 = lVar9;
LAB_0010069e:
      CRYPTO_free(pvVar6);
      *(undefined8 *)(puVar5[1] + 0xe0) = 0;
      uVar8 = (ulong)(lVar9 != 0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_00100759:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 qtest_get_bio_method_part_0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = BIO_meth_new(0x280,"Cipher Packet Filter");
  iVar1 = test_ptr("test/helpers/quictestlib.c",0x4c1,&_LC2,uVar2);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = BIO_meth_set_sendmmsg(uVar2,pcipher_sendmmsg);
    iVar1 = test_true("test/helpers/quictestlib.c",0x4c4,
                      "BIO_meth_set_sendmmsg(tmp, pcipher_sendmmsg)",iVar1 != 0);
    uVar3 = uVar2;
    if (iVar1 != 0) {
      iVar1 = BIO_meth_set_ctrl(uVar2,pcipher_ctrl);
      iVar1 = test_true("test/helpers/quictestlib.c",0x4c5,"BIO_meth_set_ctrl(tmp, pcipher_ctrl)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BIO_meth_set_destroy(uVar2,pcipher_destroy);
        iVar1 = test_true("test/helpers/quictestlib.c",0x4c6,
                          "BIO_meth_set_destroy(tmp, pcipher_destroy)",iVar1 != 0);
        if (iVar1 != 0) {
          uVar3 = 0;
          pcipherbiometh = uVar2;
        }
      }
    }
    BIO_meth_free(uVar3);
    uVar3 = pcipherbiometh;
  }
  return uVar3;
}



undefined8
handshake_mutate(void *param_1,size_t param_2,undefined8 *param_3,size_t *param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  char *__dest;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __dest = (char *)CRYPTO_malloc((int)(param_2 + 0x400),"test/helpers/quictestlib.c",0x37a);
  if (__dest != (char *)0x0) {
    *(char **)(param_5 + 0x88) = __dest;
    *(size_t *)(param_5 + 0x98) = param_2;
    *(size_t *)(param_5 + 0x90) = param_2 + 0x400;
    memcpy(__dest,param_1,param_2);
    if (((0 < (long)param_2) && (2 < param_2 - 1)) &&
       (uVar1 = param_2 - 4,
       uVar1 == ((ulong)(byte)__dest[1] << 0x10 | (ulong)(byte)__dest[2] << 8 |
                (ulong)(byte)__dest[3]))) {
      if ((*__dest == '\b') && (*(code **)(param_5 + 0xb0) != (code *)0x0)) {
        local_58 = __dest + 4;
        local_50 = uVar1;
        iVar2 = (**(code **)(param_5 + 0xb0))
                          (param_5,&local_58,uVar1,*(undefined8 *)(param_5 + 0xb8));
        if (iVar2 == 0) goto LAB_001008e1;
        param_2 = *(size_t *)(param_5 + 0x98);
      }
      if (*(code **)(param_5 + 0xa0) != (code *)0x0) {
        iVar2 = (**(code **)(param_5 + 0xa0))
                          (param_5,__dest,param_2,*(undefined8 *)(param_5 + 0xa8));
        if (iVar2 == 0) goto LAB_001008e1;
        param_2 = *(size_t *)(param_5 + 0x98);
      }
      *param_3 = __dest;
      *param_4 = param_2;
      uVar3 = 1;
      goto LAB_0010095a;
    }
  }
LAB_001008e1:
  uVar3 = 0;
LAB_0010095a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fake_now_cb(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = CRYPTO_THREAD_read_lock(fake_now_lock);
  uVar1 = fake_now;
  uVar3 = 0;
  if (iVar2 != 0) {
    CRYPTO_THREAD_unlock(fake_now_lock);
    uVar3 = uVar1;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
qtest_create_quic_objects
          (undefined8 param_1,SSL_CTX *param_2,SSL_CTX *param_3,undefined8 param_4,
          undefined8 param_5,uint param_6,undefined8 *param_7,long *param_8,long *param_9,
          undefined8 *param_10)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  BIO_METHOD *pBVar3;
  BIO *pBVar4;
  ulong uVar5;
  undefined8 uVar6;
  BIO *a;
  void *parg;
  SSL *pSVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_110;
  uint local_e0;
  undefined4 local_c0;
  int local_bc;
  BIO *local_b8;
  BIO *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  SSL_CTX *local_88;
  BIO *pBStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_49;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = 0x7365746c73736f08;
  local_41 = 0x74;
  local_98 = (undefined1  [16])0x0;
  local_88 = (SSL_CTX *)0x0;
  pBStack_80 = (BIO *)0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = 0;
  local_b8 = (BIO *)0x0;
  local_b0 = (BIO *)0x0;
  local_c0 = 0;
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"test/helpers/quictestlib.c",0x8b);
  if (ptr != (undefined8 *)0x0) {
    lVar2 = *param_8;
    *param_7 = 0;
    if (lVar2 == 0) {
      pSVar7 = SSL_new(param_2);
      *param_8 = (long)pSVar7;
      iVar1 = test_ptr("test/helpers/quictestlib.c",0x92,"*cssl",pSVar7);
      if (iVar1 == 0) goto LAB_00100c21;
    }
    if (param_9 != (long *)0x0) {
      lVar2 = CRYPTO_zalloc(0x130,"test/helpers/quictestlib.c",0x97);
      *param_9 = lVar2;
      if (lVar2 != 0) {
        ptr[1] = lVar2;
        goto LAB_00100b33;
      }
      a = (BIO *)0x0;
      local_110 = 0;
      pBVar4 = (BIO *)0x0;
      goto LAB_00100b8f;
    }
LAB_00100b33:
    a = (BIO *)0x0;
    if ((param_6 & 0x10) == 0) {
LAB_00100b41:
      if (param_10 != (undefined8 *)0x0) {
        *param_10 = a;
      }
      iVar1 = SSL_set_alpn_protos(*param_8,&local_49,9);
      iVar1 = test_false("test/helpers/quictestlib.c",0xab,
                         "SSL_set_alpn_protos(*cssl, alpn, sizeof(alpn))",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00100b83;
      local_110 = BIO_ADDR_new();
      iVar1 = test_ptr("test/helpers/quictestlib.c",0xae,"peeraddr = BIO_ADDR_new()",local_110);
      if (iVar1 == 0) goto LAB_00100b8c;
      if ((param_6 & 1) == 0) {
        BIO_new_bio_dgram_pair(&local_b8,0,&local_b0,0);
        iVar1 = test_true("test/helpers/quictestlib.c",0xcc,
                          "BIO_new_bio_dgram_pair(&cbio, 0, &sbio, 0)");
        if (iVar1 != 0) {
          BIO_ctrl(local_b8,0x57,2,(void *)0x0);
          iVar1 = test_true("test/helpers/quictestlib.c",0xcf,
                            "BIO_dgram_set_caps(cbio, BIO_DGRAM_CAP_HANDLES_DST_ADDR)");
          if (iVar1 != 0) {
            lVar2 = BIO_ctrl(local_b0,0x57,2,(void *)0x0);
            iVar1 = test_true("test/helpers/quictestlib.c",0xd0,
                              "BIO_dgram_set_caps(sbio, BIO_DGRAM_CAP_HANDLES_DST_ADDR)",
                              (int)lVar2 != 0);
            if (iVar1 != 0) {
              parg = (void *)BIO_ADDR_new();
              iVar1 = test_ptr("test/helpers/quictestlib.c",0xd3,"localaddr = BIO_ADDR_new()",parg);
              if (iVar1 != 0) {
                iVar1 = BIO_ADDR_rawmake(parg,2,&local_c0,4);
                iVar1 = test_true("test/helpers/quictestlib.c",0xd6,
                                  "BIO_ADDR_rawmake(localaddr, AF_INET, &ina, sizeof(ina), htons(0))"
                                  ,iVar1 != 0);
                if (iVar1 != 0) {
                  uVar5 = BIO_ctrl(local_b8,0x5e,0,parg);
                  iVar1 = test_int_eq("test/helpers/quictestlib.c",0xdb,
                                      "BIO_dgram_set0_local_addr(cbio, localaddr)",&_LC18,
                                      uVar5 & 0xffffffff,1);
                  if (iVar1 != 0) {
                    iVar1 = BIO_ADDR_rawmake(local_110,2,&local_c0,4);
                    iVar1 = test_true("test/helpers/quictestlib.c",0xe0,
                                      "BIO_ADDR_rawmake(peeraddr, AF_INET, &ina, sizeof(ina), htons(0))"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) goto LAB_00100d30;
                    goto LAB_00100b8c;
                  }
                }
                BIO_ADDR_free(parg);
              }
            }
          }
        }
        goto LAB_00100b8c;
      }
      iVar1 = create_test_sockets(&local_bc,&local_a8,2,local_110);
      iVar1 = test_true("test/helpers/quictestlib.c",0xb9,
                        "create_test_sockets(&cfd, &sfd, SOCK_DGRAM, peeraddr)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00100b8c;
      local_b8 = BIO_new_dgram(local_bc,1);
      iVar1 = test_ptr("test/helpers/quictestlib.c",0xbc,&_LC11,local_b8);
      if (iVar1 == 0) {
        close(local_bc);
        close((int)local_a8);
        goto LAB_00100b8c;
      }
      local_b0 = BIO_new_dgram((int)local_a8,1);
      iVar1 = test_ptr("test/helpers/quictestlib.c",0xc2,&_LC12,local_b0);
      if (iVar1 == 0) {
        close((int)local_a8);
        goto LAB_00100b8c;
      }
LAB_00100d30:
      if ((param_6 & 8) != 0) {
        pBVar3 = (BIO_METHOD *)bio_f_pkt_split_dgram_filter();
        pBVar4 = BIO_new(pBVar3);
        iVar1 = test_ptr("test/helpers/quictestlib.c",0xe8,"pktsplitbio",pBVar4);
        if (iVar1 != 0) {
          local_b8 = BIO_push(pBVar4,local_b8);
          BIO_set_data(pBVar4,ptr);
          pBVar3 = (BIO_METHOD *)bio_f_pkt_split_dgram_filter();
          pBVar4 = BIO_new(pBVar3);
          iVar1 = test_ptr("test/helpers/quictestlib.c",0xee,"pktsplitbio",pBVar4);
          if (iVar1 != 0) {
            local_b0 = BIO_push(pBVar4,local_b0);
            BIO_set_data(pBVar4,ptr);
            goto LAB_00100d3b;
          }
        }
        goto LAB_00100b8c;
      }
LAB_00100d3b:
      local_e0 = param_6 & 4;
      if ((param_6 & 4) != 0) {
        local_a8 = fake_now_cb;
        local_a0 = 0;
        iVar1 = test_ptr("test/helpers/quictestlib.c",0xfb,"fault",param_9);
        if (iVar1 != 0) {
          pBVar3 = (BIO_METHOD *)bio_f_noisy_dgram_filter();
          pBVar4 = BIO_new(pBVar3);
          iVar1 = test_ptr("test/helpers/quictestlib.c",0x100,"noisebio",pBVar4);
          if (iVar1 != 0) {
            local_b8 = BIO_push(pBVar4,local_b8);
            if ((param_6 & 2) == 0) {
              pBVar3 = (BIO_METHOD *)bio_f_noisy_dgram_filter();
              pBVar4 = BIO_new(pBVar3);
              iVar1 = test_ptr("test/helpers/quictestlib.c",0x10b,"noisebio",pBVar4);
              if (iVar1 != 0) {
                local_b0 = BIO_push(pBVar4,local_b0);
LAB_00100ea6:
                BIO_ctrl(local_b0,0x3e9,2,(void *)0x0);
                lVar2 = *param_9;
                pSVar7 = (SSL *)*param_8;
                *(uint *)(lVar2 + 0x128) = param_6;
                *(BIO **)(lVar2 + 0x120) = a;
                *(BIO **)(lVar2 + 0x110) = local_b8;
                *(BIO **)(lVar2 + 0x118) = local_b0;
                SSL_set_msg_callback(pSVar7,noise_msg_callback);
                SSL_ctrl((SSL *)*param_8,0x10,0,(void *)(*param_9 + 0x110));
                goto LAB_00100f10;
              }
            }
            else {
              uVar5 = BIO_ctrl(local_b8,0x3ed,0,&local_a8);
              iVar1 = test_int_eq("test/helpers/quictestlib.c",0x104,
                                  "BIO_ctrl(cbio, BIO_CTRL_NOISE_SET_NOW_CB, 0, &now_cb)",&_LC18,
                                  uVar5 & 0xffffffff,1);
              if (iVar1 != 0) {
                pBVar3 = (BIO_METHOD *)bio_f_noisy_dgram_filter();
                pBVar4 = BIO_new(pBVar3);
                iVar1 = test_ptr("test/helpers/quictestlib.c",0x10b,"noisebio",pBVar4);
                if (iVar1 != 0) {
                  local_b0 = BIO_push(pBVar4,local_b0);
                  uVar5 = BIO_ctrl(local_b0,0x3ed,0,&local_a8);
                  iVar1 = test_int_eq("test/helpers/quictestlib.c",0x10f,
                                      "BIO_ctrl(sbio, BIO_CTRL_NOISE_SET_NOW_CB, 0, &now_cb)",&_LC18
                                      ,uVar5 & 0xffffffff,1);
                  if (iVar1 != 0) goto LAB_00100ea6;
                }
              }
            }
          }
        }
        goto LAB_00100b8c;
      }
LAB_00100f10:
      SSL_set_bio((SSL *)*param_8,local_b8,local_b8);
      iVar1 = SSL_set_blocking_mode(*param_8,param_6 & 1);
      iVar1 = test_true("test/helpers/quictestlib.c",0x121,
                        "SSL_set_blocking_mode(*cssl, (flags & QTEST_FLAG_BLOCK) != 0 ? 1 : 0)",
                        iVar1 != 0);
      if (iVar1 == 0) goto LAB_00100b8c;
      iVar1 = SSL_set1_initial_peer_addr(*param_8,local_110);
      iVar1 = test_true("test/helpers/quictestlib.c",0x125,
                        "SSL_set1_initial_peer_addr(*cssl, peeraddr)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00100b8c;
      pBVar3 = pcipherbiometh;
      if (pcipherbiometh == (BIO_METHOD *)0x0) {
        pBVar3 = (BIO_METHOD *)qtest_get_bio_method_part_0();
      }
      pBVar4 = BIO_new(pBVar3);
      iVar1 = test_ptr("test/helpers/quictestlib.c",0x129,"fisbio",pBVar4);
      if (iVar1 != 0) {
        BIO_set_data(pBVar4,ptr);
        iVar1 = BIO_up_ref(local_b0);
        if (iVar1 != 0) {
          BIO_push(pBVar4,local_b0);
          iVar1 = test_ptr("test/helpers/quictestlib.c",0x130,"BIO_push(fisbio, sbio)");
          if (iVar1 == 0) {
            BIO_free(local_b0);
          }
          else {
            local_68._8_8_ = 0;
            local_98._0_8_ = param_1;
            pBStack_80 = local_b0;
            pBStack_80 = local_b0;
            local_78._0_8_ = pBVar4;
            if (param_3 != (SSL_CTX *)0x0) {
              SSL_CTX_up_ref(param_3);
              iVar1 = test_true("test/helpers/quictestlib.c",0x139,"SSL_CTX_up_ref(serverctx)");
              if (iVar1 == 0) goto LAB_00100b8f;
            }
            local_88 = param_3;
            if ((fake_now_lock != 0) ||
               (fake_now_lock = CRYPTO_THREAD_lock_new(), fake_now_lock != 0)) {
              if ((param_6 & 2) == 0) {
                using_fake_time = 0;
              }
              else {
                using_fake_time = 1;
                iVar1 = CRYPTO_THREAD_write_lock(fake_now_lock);
                if (iVar1 != 0) {
                  fake_now = 0;
                  CRYPTO_THREAD_unlock(fake_now_lock);
                  iVar1 = CRYPTO_THREAD_write_lock(fake_now_lock);
                  if (iVar1 != 0) {
                    bVar8 = 0xfffffffffff0bdbf < fake_now;
                    fake_now = fake_now + 1000000;
                    if (bVar8) {
                      fake_now = 0xffffffffffffffff;
                    }
                    CRYPTO_THREAD_unlock(fake_now_lock);
                  }
                }
                local_78._8_8_ = fake_now_cb;
                ossl_quic_set_override_now_cb(*param_8,fake_now_cb,0);
              }
              uVar6 = ossl_quic_tserver_new(local_98,param_4,param_5);
              *param_7 = uVar6;
              iVar1 = test_ptr("test/helpers/quictestlib.c",0x14a,
                               "*qtserv = ossl_quic_tserver_new(&tserver_args, certfile, keyfile)");
              if (iVar1 != 0) {
                uVar6 = ossl_quic_tserver_get_short_header_conn_id_len(*param_7);
                *ptr = uVar6;
                local_b0 = (BIO *)0x0;
                if (local_e0 == 0) {
                  if (param_9 != (long *)0x0) goto LAB_0010111e;
                }
                else {
                  ossl_quic_tserver_set_msg_callback(*param_7,noise_msg_callback,*param_9 + 0x110);
LAB_0010111e:
                  *(undefined8 *)*param_9 = *param_7;
                }
                BIO_ADDR_free(local_110);
                uVar6 = 1;
                goto LAB_00100c23;
              }
            }
          }
        }
      }
    }
    else {
      a = BIO_new_fp(_stdout,0);
      iVar1 = test_ptr("test/helpers/quictestlib.c",0xa0,"tmpbio",a);
      if (iVar1 != 0) {
        SSL_set_msg_callback((SSL *)*param_8,SSL_trace);
        SSL_ctrl((SSL *)*param_8,0x10,0,a);
        goto LAB_00100b41;
      }
LAB_00100b83:
      local_110 = 0;
LAB_00100b8c:
      pBVar4 = (BIO *)0x0;
    }
LAB_00100b8f:
    SSL_CTX_free(local_88);
    BIO_ADDR_free(local_110);
    BIO_free_all(local_b8);
    BIO_free_all(pBVar4);
    BIO_free_all(local_b0);
    SSL_free((SSL *)*param_8);
    *param_8 = 0;
    ossl_quic_tserver_free(*param_7);
    if (param_9 != (long *)0x0) {
      CRYPTO_free((void *)*param_9);
    }
    CRYPTO_free(ptr);
    BIO_free(a);
    if (param_10 != (undefined8 *)0x0) {
      *param_10 = 0;
    }
  }
LAB_00100c21:
  uVar6 = 0;
LAB_00100c23:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void qtest_add_time(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = CRYPTO_THREAD_write_lock(fake_now_lock);
  if (iVar1 != 0) {
    bVar2 = CARRY8(param_1 * 1000000,fake_now);
    fake_now = param_1 * 1000000 + fake_now;
    if (bVar2) {
      fake_now = -1;
    }
    CRYPTO_THREAD_unlock(fake_now_lock);
    return;
  }
  return;
}



void qtest_start_stopwatch(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = CRYPTO_THREAD_read_lock(fake_now_lock);
  uVar1 = fake_now;
  uVar3 = 0;
  if (iVar2 != 0) {
    CRYPTO_THREAD_unlock(fake_now_lock);
    uVar3 = uVar1;
  }
  start_time = uVar3;
  return;
}



ulong qtest_get_stopwatch_time(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = CRYPTO_THREAD_read_lock(fake_now_lock);
  uVar2 = fake_now;
  uVar3 = 0;
  if (iVar1 != 0) {
    CRYPTO_THREAD_unlock(fake_now_lock);
    uVar3 = uVar2;
  }
  uVar2 = 0;
  if (start_time <= uVar3) {
    uVar2 = (uVar3 - start_time) / 1000000;
  }
  return uVar2;
}



void qtest_create_injector(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x130,"test/helpers/quictestlib.c",0x19b);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



undefined8 qtest_supports_blocking(void)

{
  return 1;
}



undefined4 qtest_wait_for_timeout(SSL *param_1,undefined8 param_2)

{
  int iVar1;
  BIO *pBVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  int local_4c;
  long local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (SSL *)0x0) {
    iVar1 = SSL_get_blocking_mode();
    if (iVar1 == 0) {
      pBVar2 = SSL_get_rbio(param_1);
      lVar3 = BIO_ctrl(pBVar2,10,0,(void *)0x0);
      if ((int)lVar3 < 1) {
        pBVar2 = (BIO *)ossl_quic_tserver_get0_rbio(param_2);
        lVar3 = BIO_ctrl(pBVar2,10,0,(void *)0x0);
        if ((int)lVar3 < 1) {
          iVar1 = SSL_get_event_timeout(param_1,&local_48,&local_4c);
          uVar8 = 0;
          if (iVar1 == 0) goto LAB_00101770;
          if (using_fake_time == 0) {
            uVar5 = ossl_time_now();
          }
          else {
            iVar1 = CRYPTO_THREAD_read_lock(fake_now_lock);
            uVar7 = fake_now;
            uVar5 = 0;
            if (iVar1 != 0) {
              CRYPTO_THREAD_unlock(fake_now_lock);
              uVar5 = uVar7;
            }
          }
          if (local_4c == 0) {
            if (-1 < local_48) {
              uVar7 = local_40 * 1000 + local_48 * 1000000000;
              goto LAB_0010182c;
            }
            uVar7 = ossl_quic_tserver_get_deadline(param_2);
            if (uVar7 < uVar5) goto LAB_001018b0;
            uVar6 = 0;
LAB_0010184d:
            uVar6 = uVar6 / 1000000;
          }
          else {
            uVar7 = 0xffffffffffffffff;
LAB_0010182c:
            uVar4 = ossl_quic_tserver_get_deadline(param_2);
            if (uVar5 <= uVar4) {
              uVar6 = uVar4 - uVar5;
              if (uVar7 < uVar4 - uVar5) {
                uVar6 = uVar7;
              }
              if (uVar6 == 0xffffffffffffffff) goto LAB_00101770;
              goto LAB_0010184d;
            }
LAB_001018b0:
            uVar6 = 0;
          }
          if (using_fake_time == 0) {
            OSSL_sleep(uVar6);
          }
          else {
            iVar1 = CRYPTO_THREAD_write_lock(fake_now_lock);
            if (iVar1 != 0) {
              bVar9 = CARRY8(uVar6 * 1000000,fake_now);
              fake_now = uVar6 * 1000000 + fake_now;
              if (bVar9) {
                fake_now = 0xffffffffffffffff;
              }
              CRYPTO_THREAD_unlock(fake_now_lock);
            }
          }
        }
      }
    }
  }
  uVar8 = 1;
LAB_00101770:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool qtest_create_quic_connection_ex(long param_1,SSL *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  int local_5c;
  pthread_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == (SSL *)0x0) {
    iVar2 = test_ptr("test/helpers/quictestlib.c",0x1fc,"qtserv",param_1);
    if (iVar2 == 0) goto LAB_00101a80;
    iVar5 = 0;
    iVar2 = 1;
  }
  else {
    LOCK();
    abortserverthread = 0;
    UNLOCK();
    iVar2 = test_ptr("test/helpers/quictestlib.c",0x1fc,"qtserv",param_1);
    if (iVar2 == 0) goto LAB_00101a80;
    iVar5 = 0;
    iVar2 = -1;
    iVar3 = SSL_get_blocking_mode(param_2);
    if (0 < iVar3) {
      globtserv = param_1;
      iVar5 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_run,run_server_thread);
      iVar5 = test_true("test/helpers/quictestlib.c",0x207,"run_thread(&t, run_server_thread)",
                        iVar5 == 0);
      if (iVar5 == 0) goto LAB_00101a80;
      iVar5 = 1;
      param_1 = 0;
    }
  }
  local_5c = 0;
  iVar3 = 0;
  bVar7 = false;
LAB_001019a8:
  do {
    if (((bVar7) || (0 < iVar2)) || (iVar2 = SSL_connect(param_2), 0 < iVar2)) {
      bVar1 = iVar5 < 1 && iVar3 == 0;
    }
    else {
      iVar4 = SSL_get_error(param_2,iVar2);
      if (iVar4 == param_3) {
        bVar1 = param_1 == 0 && 0 < iVar5;
        if (bVar1) {
          abortserverthread = 1;
          bVar7 = false;
          bVar1 = false;
          iVar2 = 1;
        }
        else {
          bVar7 = false;
          iVar5 = 1;
          iVar2 = 1;
        }
      }
      else {
        bVar7 = false;
        bVar1 = iVar5 < 1 && iVar3 == 0;
        if (1 < iVar4 - 2U) {
          bVar7 = true;
          test_info("test/helpers/quictestlib.c",0x225,"SSL_connect() failed %d, %d",iVar2);
          test_openssl_errors();
        }
      }
    }
    iVar4 = CRYPTO_THREAD_write_lock(fake_now_lock);
    if (iVar4 != 0) {
      bVar6 = 0xfffffffffff0bdbf < fake_now;
      fake_now = fake_now + 1000000;
      if (bVar6) {
        fake_now = 0xffffffffffffffff;
      }
      CRYPTO_THREAD_unlock(fake_now_lock);
    }
    if (param_2 != (SSL *)0x0) {
      SSL_handle_events(param_2);
    }
    if (param_1 != 0) {
      ossl_quic_tserver_tick(param_1);
    }
    if (bVar1) {
      iVar3 = ossl_quic_tserver_is_term_any(param_1);
      if (iVar3 != 0) goto LAB_00101ae8;
      iVar5 = ossl_quic_tserver_is_handshake_confirmed(param_1);
    }
    else if (iVar3 != 0) {
LAB_00101ae8:
      if (bVar7) break;
    }
    if ((param_2 != (SSL *)0x0) && (local_5c = local_5c + 1, local_5c == 1000)) {
      test_info("test/helpers/quictestlib.c",0x23d,"No progress made");
      break;
    }
    if ((0 < iVar2) || (bVar7)) {
      if ((iVar5 < 1) && (iVar3 == 0)) {
        iVar3 = qtest_wait_for_timeout(param_2);
        if (iVar3 == 0) break;
        iVar3 = 0;
        if (abortserverthread == 0) goto LAB_001019a8;
      }
      else if ((param_1 == 0) && (0 < iVar5)) {
        iVar2 = pthread_join(local_48,(void **)0x0);
        iVar2 = test_true("test/helpers/quictestlib.c",0x24e,"wait_for_thread(t)",iVar2 == 0);
        if ((iVar2 == 0) ||
           (iVar2 = test_true("test/helpers/quictestlib.c",0x24e,"globserverret",globserverret != 0)
           , iVar2 == 0)) break;
      }
      bVar7 = iVar3 == 0 && !bVar7;
      goto LAB_00101a82;
    }
    iVar4 = qtest_wait_for_timeout(param_2);
  } while (iVar4 != 0);
LAB_00101a80:
  bVar7 = false;
LAB_00101a82:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



void run_server_thread(void)

{
  globserverret = qtest_create_quic_connection_ex(globtserv,0,0);
  return;
}



void qtest_create_quic_connection(undefined8 param_1,undefined8 param_2)

{
  qtest_create_quic_connection_ex(param_1,param_2,0);
  return;
}



undefined8 qtest_shutdown(undefined8 param_1,SSL *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  pthread_t local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar2 = SSL_get_blocking_mode(param_2);
  if (iVar2 < 1) {
    bVar1 = true;
LAB_00101de6:
    while( true ) {
      iVar2 = SSL_shutdown(param_2);
      if (iVar2 == 1) break;
      if (iVar2 < 0) goto LAB_00101ea0;
      if (!bVar1) goto LAB_00101e10;
      ossl_quic_tserver_tick(param_1);
    }
LAB_00101e1d:
    uVar3 = 1;
    goto LAB_00101e22;
  }
  LOCK();
  shutdowndone = 0;
  UNLOCK();
  globtserv = param_1;
  iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_run,run_server_shutdown_thread);
  bVar1 = false;
  iVar2 = test_true("test/helpers/quictestlib.c",0x285,"run_thread(&t, run_server_shutdown_thread)",
                    iVar2 == 0);
  if (iVar2 != 0) goto LAB_00101de6;
  goto LAB_00101e5e;
  while (-1 < iVar2) {
LAB_00101e10:
    iVar2 = SSL_shutdown(param_2);
    if (iVar2 == 1) goto LAB_00101e1d;
  }
LAB_00101ea0:
  uVar3 = 0;
LAB_00101e22:
  shutdowndone = 1;
  if (bVar1) goto LAB_00101e60;
  iVar2 = pthread_join(local_28,(void **)0x0);
  iVar2 = test_true("test/helpers/quictestlib.c",0x2a2,"wait_for_thread(t)",iVar2 == 0);
  if (iVar2 != 0) goto LAB_00101e60;
LAB_00101e5e:
  uVar3 = 0;
LAB_00101e60:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool qtest_check_server_transport_err(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  ossl_quic_tserver_tick();
  iVar1 = ossl_quic_tserver_is_term_any(param_1);
  iVar1 = test_true("test/helpers/quictestlib.c",0x2b3,"ossl_quic_tserver_is_term_any(qtserv)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)ossl_quic_tserver_get_terminate_cause(param_1);
    iVar1 = test_ptr("test/helpers/quictestlib.c",0x2b7,"cause",puVar2);
    if (((iVar1 != 0) &&
        (iVar1 = test_true("test/helpers/quictestlib.c",0x2b8,"cause->remote",
                           *(byte *)(puVar2 + 4) >> 1 & 1), iVar1 != 0)) &&
       (iVar1 = test_false("test/helpers/quictestlib.c",0x2b9,"cause->app",*(byte *)(puVar2 + 4) & 1
                          ), iVar1 != 0)) {
      iVar1 = test_uint64_t_eq("test/helpers/quictestlib.c",0x2ba,"cause->error_code",&_LC43,*puVar2
                               ,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



void qtest_check_server_protocol_err(undefined8 param_1)

{
  qtest_check_server_transport_err(param_1,10);
  return;
}



void qtest_check_server_frame_encoding_err(undefined8 param_1)

{
  qtest_check_server_transport_err(param_1,7);
  return;
}



void qtest_fault_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x60));
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined1 (*) [16])((long)param_1 + 0x68) = (undefined1  [16])0x0;
    CRYPTO_free(*(void **)((long)param_1 + 0x88));
    *(undefined8 *)((long)param_1 + 0x88) = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void qtest_fault_set_packet_plain_listener
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0xf] = param_2;
  param_1[0x10] = param_3;
  ossl_quic_tserver_set_plain_packet_mutator(*param_1,packet_plain_mutate,0x100000,param_1);
  return;
}



undefined8 qtest_fault_resize_plain_packet(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 <= *(ulong *)(param_1 + 0x70)) && (*(ulong *)(param_1 + 0x70) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x68);
    if (uVar1 < param_2) {
      memset((void *)(uVar1 + *(long *)(param_1 + 0x60)),0,param_2 - uVar1);
    }
    *(ulong *)(param_1 + 0x68) = param_2;
    *(ulong *)(param_1 + 0x50) = param_2;
    return 1;
  }
  return 0;
}



undefined8 qtest_fault_prepend_frame(long param_1,void *param_2,size_t param_3)

{
  size_t __n;
  void *__src;
  int iVar1;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    return 0;
  }
  __n = *(size_t *)(param_1 + 0x68);
  __src = *(void **)(param_1 + 0x60);
  iVar1 = qtest_fault_resize_plain_packet(param_1,__n + param_3);
  iVar1 = test_true("test/helpers/quictestlib.c",0x366,
                    "qtest_fault_resize_plain_packet(fault, old_len + frame_len)",iVar1 != 0);
  if (iVar1 != 0) {
    memmove((void *)((long)__src + param_3),__src,__n);
    memcpy(__src,param_2,param_3);
    return 1;
  }
  return 0;
}



void qtest_fault_set_handshake_listener(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x14] = param_2;
  param_1[0x15] = param_3;
  ossl_quic_tserver_set_handshake_mutator(*param_1,handshake_mutate,handshake_finish,param_1);
  return;
}



void qtest_fault_set_hand_enc_ext_listener
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x16] = param_2;
  param_1[0x17] = param_3;
  ossl_quic_tserver_set_handshake_mutator(*param_1,handshake_mutate,handshake_finish,param_1);
  return;
}



undefined8 qtest_fault_resize_handshake(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 <= *(ulong *)(param_1 + 0x90)) && (*(ulong *)(param_1 + 0x90) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x98);
    if (uVar1 < param_2) {
      memset((void *)(uVar1 + *(long *)(param_1 + 0x88)),0,param_2 - uVar1);
    }
    *(ulong *)(param_1 + 0x98) = param_2;
    return 1;
  }
  return 0;
}



undefined8 qtest_fault_resize_message(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_2 + 4;
  if ((uVar1 <= *(ulong *)(param_1 + 0x90)) && (*(ulong *)(param_1 + 0x90) != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x98);
    lVar3 = *(long *)(param_1 + 0x88);
    if (uVar2 < uVar1) {
      memset((void *)(lVar3 + uVar2),0,uVar1 - uVar2);
      lVar3 = *(long *)(param_1 + 0x88);
    }
    *(ulong *)(param_1 + 0x98) = uVar1;
    *(char *)(lVar3 + 1) = (char)((ulong)param_2 >> 0x10);
    *(char *)(*(long *)(param_1 + 0x88) + 2) = (char)((ulong)param_2 >> 8);
    *(char *)(*(long *)(param_1 + 0x88) + 3) = (char)param_2;
    return 1;
  }
  return 0;
}



bool qtest_fault_delete_extension
               (long param_1,uint param_2,ushort *param_3,ulong *param_4,undefined8 *param_5)

{
  ushort *__src;
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  ushort *__dest;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_80;
  undefined1 local_78 [56];
  long local_40;
  
  uVar1 = *(ulong *)(param_1 + 0x98);
  uVar6 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < (long)uVar6) && (1 < uVar6)) {
    uVar4 = uVar6 - 2;
    uVar5 = (ulong)(ushort)(*param_3 << 8 | *param_3 >> 8);
    if ((uVar5 <= uVar4) && (__src = param_3 + 1, uVar5 == uVar4)) {
      do {
        __dest = __src;
        if ((uVar4 < 2) || (uVar4 - 2 < 2)) goto LAB_00102371;
        uVar5 = (ulong)(ushort)(__dest[1] << 8 | __dest[1] >> 8);
        if (uVar4 - 4 < uVar5) goto LAB_00102371;
        __src = (ushort *)((long)(__dest + 2) + uVar5);
        uVar4 = (uVar4 - 4) - uVar5;
      } while (param_2 != (ushort)(*__dest << 8 | *__dest >> 8));
      if (param_5 == (undefined8 *)0x0) {
LAB_00102438:
        __n = (long)__src - (long)__dest;
        if (__src < (ushort *)((long)param_3 + uVar6)) {
          memmove(__dest,__src,__n);
          uVar6 = *param_4;
        }
        uVar2 = (short)(uVar6 - __n) - 2;
        *param_3 = uVar2 * 0x100 | uVar2 >> 8;
        *param_4 = uVar6 - __n;
        if (__n + 4 <= uVar1) {
          iVar3 = qtest_fault_resize_message(param_1,(uVar1 - 4) - __n);
          bVar7 = iVar3 != 0;
          goto LAB_00102373;
        }
      }
      else {
        iVar3 = WPACKET_init(local_78,param_5);
        if (iVar3 != 0) {
          iVar3 = WPACKET_memcpy(local_78,__dest + 2,uVar5);
          if ((iVar3 != 0) && (iVar3 = WPACKET_get_total_written(local_78,&local_80), iVar3 != 0)) {
            WPACKET_finish(local_78);
            *param_5 = local_80;
            uVar6 = *param_4;
            goto LAB_00102438;
          }
          WPACKET_cleanup(local_78);
        }
      }
    }
  }
LAB_00102371:
  bVar7 = false;
LAB_00102373:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



void qtest_get_bio_method(void)

{
  if (pcipherbiometh != 0) {
    return;
  }
  qtest_get_bio_method_part_0();
  return;
}



undefined8
qtest_fault_set_packet_cipher_listener(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = param_3;
  return 1;
}



undefined8 qtest_fault_set_datagram_listener(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return 1;
}



undefined8 qtest_fault_resize_datagram(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 <= *(ulong *)(param_1 + 0x108)) {
    uVar1 = *(ulong *)(param_1 + 0xe8);
    if (uVar1 < param_2) {
      memset((void *)(uVar1 + *(long *)(param_1 + 0xe0)),0,param_2 - uVar1);
    }
    *(ulong *)(param_1 + 0xe8) = param_2;
    return 1;
  }
  return 0;
}



bool qtest_fault_set_bw_limit(long param_1,long param_2,long param_3,int param_4)

{
  BIO *bp;
  BIO *bp_00;
  int iVar1;
  ulong uVar2;
  
  bp = *(BIO **)(param_1 + 0x118);
  bp_00 = *(BIO **)(param_1 + 0x110);
  iVar1 = test_ptr("test/helpers/quictestlib.c",0x4fa,&_LC12,bp);
  if ((iVar1 != 0) && (iVar1 = test_ptr("test/helpers/quictestlib.c",0x4fa,&_LC11), iVar1 != 0)) {
    uVar2 = BIO_ctrl(bp,0x3ea,(long)param_4,(void *)0x0);
    iVar1 = test_int_eq("test/helpers/quictestlib.c",0x4fc,
                        "BIO_ctrl(sbio, BIO_CTRL_NOISE_RATE, noise_rate, NULL)",&_LC18,
                        uVar2 & 0xffffffff,1);
    if (iVar1 != 0) {
      uVar2 = BIO_ctrl(bp_00,0x3ea,(long)param_4,(void *)0x0);
      iVar1 = test_int_eq("test/helpers/quictestlib.c",0x4fe,
                          "BIO_ctrl(cbio, BIO_CTRL_NOISE_RATE, noise_rate, NULL)",&_LC18,
                          uVar2 & 0xffffffff,1);
      if (iVar1 != 0) {
        uVar2 = BIO_ctrl(bp_00,0x3ec,param_2,(void *)0x0);
        iVar1 = test_int_eq("test/helpers/quictestlib.c",0x501,
                            "BIO_ctrl(cbio, BIO_CTRL_NOISE_SEND_BANDWIDTH, (long)ctos_bw, NULL)",
                            &_LC18,uVar2 & 0xffffffff,1);
        if (iVar1 != 0) {
          uVar2 = BIO_ctrl(bp,0x3ec,param_3,(void *)0x0);
          iVar1 = test_int_eq("test/helpers/quictestlib.c",0x504,
                              "BIO_ctrl(sbio, BIO_CTRL_NOISE_SEND_BANDWIDTH, (long)stoc_bw, NULL)",
                              &_LC18,uVar2 & 0xffffffff,1);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}



ulong bio_msg_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  memcpy((void *)*param_1,(void *)*param_2,param_2[1]);
  param_1[1] = param_2[1];
  param_1[4] = param_2[4];
  if (param_1[3] != 0) {
    if (param_2[3] == 0) {
      BIO_ADDR_clear();
    }
    else {
      iVar1 = BIO_ADDR_copy();
      uVar2 = test_true("test/helpers/quictestlib.c",0x516,"BIO_ADDR_copy(dst->local, src->local)",
                        iVar1 != 0);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
  }
  iVar1 = BIO_ADDR_copy(param_1[2],param_2[2]);
  iVar1 = test_true("test/helpers/quictestlib.c",0x51c,"BIO_ADDR_copy(dst->peer, src->peer)",
                    iVar1 != 0);
  return (ulong)(iVar1 != 0);
}


