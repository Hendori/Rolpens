
void * dtls1_hm_fragment_new(long param_1,int param_2)

{
  void *ptr;
  void *ptr_00;
  long lVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x50,"ssl/statem/statem_dtls.c",0x44);
  if (ptr != (void *)0x0) {
    ptr_00 = (void *)0x0;
    if ((param_1 == 0) ||
       (ptr_00 = CRYPTO_malloc((int)param_1,"ssl/statem/statem_dtls.c",0x48), ptr_00 != (void *)0x0)
       ) {
      *(void **)((long)ptr + 0x40) = ptr_00;
      lVar1 = 0;
      if ((param_2 != 0) &&
         (lVar1 = CRYPTO_zalloc(param_1 + 7U >> 3,"ssl/statem/statem_dtls.c",0x53), lVar1 == 0)) {
        CRYPTO_free(ptr_00);
        CRYPTO_free(ptr);
        return (void *)0x0;
      }
      *(long *)((long)ptr + 0x48) = lVar1;
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



undefined8 dtls1_preprocess_fragment(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if ((ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18)) <= uVar2) {
    uVar5 = *(ulong *)(param_1 + 0x9c8);
    if (uVar5 < 0x454c) {
      uVar5 = 0x454c;
    }
    if (uVar2 <= uVar5) {
      if (*(long *)(*(long *)(param_1 + 0x4f0) + 400) == 0) {
        iVar4 = BUF_MEM_grow_clean(*(BUF_MEM **)(param_1 + 0xf8),uVar2 + 0xc);
        if (CONCAT44(extraout_var,iVar4) != 0) {
          lVar3 = *(long *)(param_1 + 0x4f0);
          *(ulong *)(param_1 + 0x2f0) = uVar2;
          *(ulong *)(lVar3 + 0x180) = uVar2;
          bVar1 = *param_2;
          *(uint *)(param_1 + 0x2f8) = (uint)bVar1;
          *(byte *)(lVar3 + 0x178) = bVar1;
          *(undefined2 *)(lVar3 + 0x188) = *(undefined2 *)(param_2 + 0x10);
          return 1;
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_dtls.c",0x1c8,"dtls1_preprocess_fragment");
        ossl_statem_fatal(param_1,0x50,0x80007,0);
        return 0;
      }
      if (*(ulong *)(*(long *)(param_1 + 0x4f0) + 0x180) == uVar2) {
        return 1;
      }
      ERR_new();
      uVar6 = 0x1d6;
      goto LAB_00100141;
    }
  }
  ERR_new();
  uVar6 = 0x1be;
LAB_00100141:
  ERR_set_debug("ssl/statem/statem_dtls.c",uVar6,"dtls1_preprocess_fragment");
  ossl_statem_fatal(param_1,0x2f,0x98,0);
  return 0;
}



void dtls1_hm_fragment_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x40));
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 dtls1_reassemble_fragment(long param_1,undefined8 *param_2)

{
  void *ptr;
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  pitem *ppVar4;
  long lVar5;
  undefined8 *data;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  ulong local_158;
  uchar local_150 [6];
  ushort local_14a;
  undefined1 local_148 [264];
  long local_40;
  
  uVar9 = param_2[4];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)param_2[1] < param_2[3] + uVar9) {
LAB_00100310:
    data = (undefined8 *)0x0;
LAB_00100312:
    dtls1_hm_fragment_free(data);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x9c8);
    if (uVar2 < 0x454c) {
      uVar2 = 0x454c;
    }
    if (uVar2 < (ulong)param_2[1]) goto LAB_00100310;
    if (uVar9 == 0) {
LAB_001002d8:
      uVar3 = 0xfffffffd;
      goto LAB_001002dd;
    }
    local_150[0] = '\0';
    local_150[1] = '\0';
    local_150[2] = '\0';
    local_150[3] = '\0';
    local_14a = *(ushort *)(param_2 + 2) << 8 | *(ushort *)(param_2 + 2) >> 8;
    local_150[4] = '\0';
    local_150[5] = '\0';
    ppVar4 = pqueue_find(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118),local_150);
    if (ppVar4 == (pitem *)0x0) {
      data = (undefined8 *)dtls1_hm_fragment_new(param_2[1],1);
      if (data == (undefined8 *)0x0) goto LAB_00100310;
      uVar3 = param_2[1];
      *data = *param_2;
      data[1] = uVar3;
      uVar3 = param_2[3];
      data[2] = param_2[2];
      data[3] = uVar3;
      uVar3 = param_2[5];
      data[4] = param_2[4];
      data[5] = uVar3;
      uVar3 = param_2[7];
      data[6] = param_2[6];
      data[7] = uVar3;
      data[3] = 0;
      data[4] = data[1];
    }
    else {
      data = (undefined8 *)ppVar4->data;
      if (data[1] != param_2[1]) goto LAB_00100310;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (data[9] == 0) {
      while( true ) {
        uVar2 = 0x100;
        if (uVar9 < 0x101) {
          uVar2 = uVar9;
        }
        iVar1 = (**(code **)(lVar6 + 0x80))(param_1,0x16,0,local_148,uVar2,0,&local_158);
        if (iVar1 < 1) goto LAB_001004dd;
        uVar9 = uVar9 - local_158;
        if (uVar9 == 0) break;
        lVar6 = *(long *)(param_1 + 0x18);
      }
      goto LAB_001002d8;
    }
    iVar1 = (**(code **)(lVar6 + 0x80))(param_1,0x16,0,param_2[3] + data[8],uVar9,0,&local_158);
    if ((0 < iVar1) && (local_158 == uVar9)) {
      lVar6 = param_2[3];
      if ((long)uVar9 < 9) {
        if (lVar6 < (long)(uVar9 + lVar6)) {
          do {
            lVar5 = lVar6 + 1;
            pbVar7 = (byte *)((lVar6 >> 3) + data[9]);
            *pbVar7 = *pbVar7 | (byte)(1 << ((byte)lVar6 & 7));
            lVar6 = lVar5;
          } while (lVar5 < (long)(param_2[3] + uVar9));
        }
      }
      else {
        pbVar7 = (byte *)((lVar6 >> 3) + data[9]);
        *pbVar7 = *pbVar7 | *(byte *)((long)&bitmask_start_values + (ulong)((uint)lVar6 & 7));
        lVar5 = param_2[3] + uVar9;
        lVar8 = ((long)param_2[3] >> 3) + 1;
        lVar6 = lVar5 + -1 >> 3;
        if (lVar8 < lVar6) {
          do {
            *(undefined1 *)(data[9] + lVar8) = 0xff;
            lVar8 = lVar8 + 1;
            lVar5 = param_2[3] + uVar9;
            lVar6 = lVar5 + -1 >> 3;
          } while (lVar8 < lVar6);
        }
        *(byte *)(lVar6 + data[9]) =
             *(byte *)(lVar6 + data[9]) |
             *(byte *)((long)&bitmask_end_values + (ulong)((uint)lVar5 & 7));
      }
      lVar6 = param_2[1];
      if (lVar6 == 0) goto LAB_001004dd;
      ptr = (void *)data[9];
      lVar5 = lVar6 + -1 >> 3;
      if (*(char *)((long)ptr + lVar5) ==
          *(char *)((long)&bitmask_end_values + (ulong)((uint)lVar6 & 7))) {
        lVar5 = lVar5 + -1;
        if (-1 < lVar5) {
          do {
            if (*(char *)((long)ptr + lVar5) != -1) goto LAB_00100448;
            bVar10 = lVar5 != 0;
            lVar5 = lVar5 + -1;
          } while (bVar10);
        }
        CRYPTO_free(ptr);
        data[9] = 0;
      }
LAB_00100448:
      if ((ppVar4 != (pitem *)0x0) ||
         ((ppVar4 = pitem_new(local_150,data), ppVar4 != (pitem *)0x0 &&
          (ppVar4 = pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118),ppVar4),
          ppVar4 != (pitem *)0x0)))) goto LAB_001002d8;
      goto LAB_00100312;
    }
LAB_001004dd:
    if (ppVar4 == (pitem *)0x0) goto LAB_00100312;
  }
  uVar3 = 0xffffffff;
LAB_001002dd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



ulong dtls1_do_write(SSL *param_1,char param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  COMP_CTX *pCVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  BIO *bp;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2._0_4_ = param_1->quiet_shutdown;
  uVar2._4_4_ = param_1->shutdown;
  iVar7 = dtls1_query_mtu();
  if (((iVar7 == 0) ||
      (uVar13 = *(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x130),
      uVar9 = dtls1_min_mtu(param_1), uVar13 < uVar9)) ||
     ((*(long *)(param_1->sid_ctx + 4) == 0 &&
      ((param_2 == '\x16' &&
       (lVar10._0_4_ = param_1->sid_ctx_length, lVar10._4_1_ = param_1->sid_ctx[0],
       lVar10._5_1_ = param_1->sid_ctx[1], lVar10._6_1_ = param_1->sid_ctx[2],
       lVar10._7_1_ = param_1->sid_ctx[3],
       lVar10 != *(long *)((long)param_1[1].tlsext_opaque_prf_input + 0x140) + 0xc)))))) {
LAB_001009e0:
    uVar9 = 0xffffffff;
  }
  else {
    uVar3._0_4_ = param_1[4].first_packet;
    uVar3._4_4_ = param_1[4].client_version;
    lVar10 = (**(code **)(param_1[4].mode + 0xa8))(uVar3);
    *(undefined4 *)&param_1->packet = 1;
    lVar11._0_4_ = param_1->sid_ctx_length;
    lVar11._4_1_ = param_1->sid_ctx[0];
    lVar11._5_1_ = param_1->sid_ctx[1];
    lVar11._6_1_ = param_1->sid_ctx[2];
    lVar11._7_1_ = param_1->sid_ctx[3];
    if (lVar11 != 0) {
      bVar6 = true;
      lVar14 = 0;
      while( true ) {
        while( true ) {
          if ((param_2 == '\x16') && (uVar13 = *(ulong *)(param_1->sid_ctx + 4), uVar13 != 0)) {
            if (lVar14 == 0) {
              lVar14 = *(long *)((long)param_1[1].tlsext_opaque_prf_input + 0x150);
            }
            else {
              if (uVar13 < 0xd) goto LAB_001009e0;
              *(ulong *)(param_1->sid_ctx + 4) = uVar13 - 0xc;
              *(long *)&param_1->sid_ctx_length = lVar11 + 0xc;
            }
          }
          lVar11 = BIO_ctrl((BIO *)param_1->init_msg,0xd,0,(void *)0x0);
          uVar13 = *(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x130);
          uVar9 = (int)lVar11 + lVar10;
          if ((uVar13 <= uVar9) || (uVar13 = uVar13 - uVar9, uVar13 < 0xd)) {
            uVar13 = BIO_ctrl((BIO *)param_1->init_msg,0xb,0,(void *)0x0);
            uVar9 = uVar13 & 0xffffffff;
            if ((int)uVar13 < 1) {
              *(undefined4 *)&param_1->packet = 2;
              goto LAB_001009e5;
            }
            uVar13 = *(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x130);
            if (uVar13 <= lVar10 + 0xcU) goto LAB_001009e0;
            uVar13 = uVar13 - lVar10;
          }
          uVar9._0_4_ = param_1->sid_ctx_length;
          uVar9._4_1_ = param_1->sid_ctx[0];
          uVar9._5_1_ = param_1->sid_ctx[1];
          uVar9._6_1_ = param_1->sid_ctx[2];
          uVar9._7_1_ = param_1->sid_ctx[3];
          if (uVar13 < (uVar9 & 0xffffffff)) {
            uVar9 = uVar13;
          }
          uVar8 = ssl_get_max_send_fragment(param_1);
          if (uVar8 < uVar9) {
            uVar8 = ssl_get_max_send_fragment(param_1);
            uVar9 = (ulong)uVar8;
          }
          if (param_2 == '\x16') {
            if (uVar9 < 0xc) goto LAB_001009e0;
            pvVar4 = param_1[1].tlsext_opaque_prf_input;
            pCVar5 = param_1->compress;
            *(ulong *)((long)pvVar4 + 0x158) = uVar9 - 0xc;
            puVar12 = (undefined1 *)(*(long *)(param_1->sid_ctx + 4) + pCVar5->compress_in);
            *(long *)((long)pvVar4 + 0x150) = lVar14;
            *puVar12 = *(undefined1 *)((long)pvVar4 + 0x138);
            puVar12[1] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x140) >> 0x10);
            puVar12[2] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x140) >> 8);
            puVar12[3] = (char)*(undefined8 *)((long)pvVar4 + 0x140);
            puVar12[4] = *(undefined1 *)((long)pvVar4 + 0x149);
            puVar12[5] = (char)*(undefined2 *)((long)pvVar4 + 0x148);
            puVar12[6] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x150) >> 0x10);
            puVar12[7] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x150) >> 8);
            puVar12[8] = (char)*(undefined8 *)((long)pvVar4 + 0x150);
            puVar12[9] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x158) >> 0x10);
            puVar12[10] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x158) >> 8);
            puVar12[0xb] = (char)*(undefined8 *)((long)pvVar4 + 0x158);
          }
          iVar7 = dtls1_write_bytes(param_1,param_2,
                                    *(long *)(param_1->sid_ctx + 4) + param_1->compress->compress_in
                                    ,uVar9,&local_48);
          if (iVar7 < 1) break;
          if (local_48 != uVar9) goto LAB_001009e0;
          if ((param_2 == '\x16') &&
             (pvVar4 = param_1[1].tlsext_opaque_prf_input, *(int *)((long)pvVar4 + 0x1cc) == 0)) {
            puVar12 = (undefined1 *)
                      (*(long *)(param_1->sid_ctx + 4) + param_1->compress->compress_in);
            if ((lVar14 == 0) && (param_1->state != 0x100)) {
              *puVar12 = *(undefined1 *)((long)pvVar4 + 0x138);
              puVar12[1] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x140) >> 0x10);
              puVar12[2] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x140) >> 8);
              puVar12[3] = (char)*(undefined8 *)((long)pvVar4 + 0x140);
              puVar12[4] = *(undefined1 *)((long)pvVar4 + 0x149);
              uVar1 = *(undefined2 *)((long)pvVar4 + 0x148);
              *(undefined2 *)(puVar12 + 6) = 0;
              puVar12[5] = (char)uVar1;
              puVar12[8] = 0;
              puVar12[9] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x140) >> 0x10);
              puVar12[10] = (char)((ulong)*(undefined8 *)((long)pvVar4 + 0x140) >> 8);
              puVar12[0xb] = (char)*(undefined8 *)((long)pvVar4 + 0x140);
              uVar13 = local_48;
            }
            else {
              puVar12 = puVar12 + 0xc;
              uVar13 = uVar9 - 0xc;
            }
            iVar7 = ssl3_finish_mac(param_1,puVar12,uVar13);
            uVar9 = local_48;
            if (iVar7 == 0) goto LAB_001009e0;
          }
          if (*(ulong *)&param_1->sid_ctx_length == uVar9) {
            if ((code *)param_1[1].tlsext_opaque_prf_input_len != (code *)0x0) {
              (*(code *)param_1[1].tlsext_opaque_prf_input_len)
                        (1,param_1->state,param_2,param_1->compress->compress_in,
                         *(long *)(param_1->sid_ctx + 4) + uVar9,uVar2,
                         param_1[1].tlsext_session_ticket);
            }
            uVar9 = 1;
            param_1->sid_ctx_length = 0;
            param_1->sid_ctx[0] = '\0';
            param_1->sid_ctx[1] = '\0';
            param_1->sid_ctx[2] = '\0';
            param_1->sid_ctx[3] = '\0';
            param_1->sid_ctx[4] = '\0';
            param_1->sid_ctx[5] = '\0';
            param_1->sid_ctx[6] = '\0';
            param_1->sid_ctx[7] = '\0';
            param_1->sid_ctx[8] = '\0';
            param_1->sid_ctx[9] = '\0';
            param_1->sid_ctx[10] = '\0';
            param_1->sid_ctx[0xb] = '\0';
            goto LAB_001009e5;
          }
          pvVar4 = param_1[1].tlsext_opaque_prf_input;
          local_48 = uVar9 - 0xc;
          lVar11 = *(ulong *)&param_1->sid_ctx_length - uVar9;
          *(ulong *)(param_1->sid_ctx + 4) = *(long *)(param_1->sid_ctx + 4) + uVar9;
          lVar14 = lVar14 + local_48;
          *(long *)&param_1->sid_ctx_length = lVar11;
          *(long *)((long)pvVar4 + 0x150) = lVar14;
          *(undefined8 *)((long)pvVar4 + 0x158) = 0;
        }
        if (!bVar6) goto LAB_001009e0;
        bp = SSL_get_wbio(param_1);
        lVar11 = BIO_ctrl(bp,0x2b,0,(void *)0x0);
        if (((lVar11 < 1) || (uVar13 = SSL_get_options(param_1), (uVar13 & 0x1000) != 0)) ||
           (iVar7 = dtls1_query_mtu(param_1), iVar7 == 0)) goto LAB_001009e0;
        lVar11._0_4_ = param_1->sid_ctx_length;
        lVar11._4_1_ = param_1->sid_ctx[0];
        lVar11._5_1_ = param_1->sid_ctx[1];
        lVar11._6_1_ = param_1->sid_ctx[2];
        lVar11._7_1_ = param_1->sid_ctx[3];
        if (lVar11 == 0) break;
        bVar6 = false;
      }
    }
    uVar9 = 0;
  }
LAB_001009e5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dtls_get_message_body(long param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x108);
  pcVar1 = *(char **)(*(long *)(param_1 + 0xf8) + 8);
  if (*(int *)(param_1 + 0x2f8) == 0x101) {
LAB_00100bc5:
    *param_2 = lVar3;
    return 1;
  }
  if ((*pcVar1 != '\x14') || (iVar2 = ssl3_take_mac(), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x48) == 0x100) {
      iVar2 = ssl3_finish_mac(param_1,pcVar1 + 0xc,lVar3);
    }
    else {
      iVar2 = ssl3_finish_mac(param_1,pcVar1,lVar3 + 0xc);
    }
    if (iVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x108);
      if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x4f8))
                  (0,*(undefined4 *)(param_1 + 0x48),0x16,
                   *(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),lVar3 + 0xc,
                   *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x500));
        lVar3 = *(long *)(param_1 + 0x108);
      }
      goto LAB_00100bc5;
    }
  }
  return 0;
}



undefined8 dtls_construct_change_cipher_spec(long param_1,undefined8 param_2)

{
  short *psVar1;
  long lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x48) == 0x100) {
    lVar2 = *(long *)(param_1 + 0x4f0);
    psVar1 = (short *)(lVar2 + 0x10e);
    *psVar1 = *psVar1 + 1;
    iVar3 = WPACKET_put_bytes__(param_2,*(undefined2 *)(lVar2 + 0x10c),2);
    if (iVar3 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_dtls.c",0x3eb,"dtls_construct_change_cipher_spec");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  return 1;
}



ulong dtls1_read_failed(SSL *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  BIO *b;
  
  if ((int)param_2 < 1) {
    uVar2 = (ulong)param_2;
    iVar1 = dtls1_is_timer_expired();
    if ((iVar1 != 0) && (iVar1 = ossl_statem_in_error(param_1), iVar1 == 0)) {
      iVar1 = SSL_in_init(param_1);
      if (iVar1 != 0) {
        uVar2 = dtls1_handle_timeout();
        return uVar2;
      }
      b = SSL_get_rbio(param_1);
      BIO_set_flags(b,1);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_dtls.c",0x421,"dtls1_read_failed");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    uVar2 = 0;
  }
  return uVar2;
}



int dtls1_get_queue_priority(ushort param_1,int param_2)

{
  return (uint)param_1 * 2 - param_2;
}



undefined8 dtls1_buffer_message(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 extraout_AH;
  undefined1 *data;
  pitem *item;
  undefined8 uVar6;
  long in_FS_OFFSET;
  uchar local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x110) == 0) {
    data = (undefined1 *)dtls1_hm_fragment_new(*(undefined8 *)(param_1 + 0x108),0);
    if (data != (undefined1 *)0x0) {
      memcpy(*(void **)(data + 0x40),*(void **)(*(long *)(param_1 + 0xf8) + 8),
             *(size_t *)(param_1 + 0x108));
      lVar3 = *(long *)(param_1 + 0x4f0);
      lVar4 = *(long *)(lVar3 + 0x140);
      if (param_2 == 0) {
        if (lVar4 + 0xcU == (ulong)*(uint *)(param_1 + 0x108)) {
LAB_00100df4:
          uVar2 = *(undefined2 *)(lVar3 + 0x148);
          *(long *)(data + 8) = lVar4;
          *(undefined2 *)(data + 0x10) = uVar2;
          uVar5 = *(undefined1 *)(lVar3 + 0x138);
          *(undefined8 *)(data + 0x18) = 0;
          *data = uVar5;
          uVar6 = *(undefined8 *)(param_1 + 0xc78);
          *(long *)(data + 0x20) = lVar4;
          *(int *)(data + 0x28) = param_2;
          uVar1 = *(undefined8 *)(param_1 + 0xc88);
          local_38[0] = '\0';
          local_38[1] = '\0';
          local_38[2] = '\0';
          local_38[3] = '\0';
          local_38[4] = '\0';
          local_38[5] = '\0';
          local_38[6] = '\0';
          local_38[7] = '\0';
          *(undefined8 *)(data + 0x30) = uVar6;
          *(undefined8 *)(data + 0x38) = uVar1;
          dtls1_get_queue_priority(uVar2,param_2);
          local_38[6] = extraout_AH;
          uVar5 = dtls1_get_queue_priority
                            (*(undefined2 *)(data + 0x10),*(undefined4 *)(data + 0x28));
          local_38[7] = uVar5;
          item = pitem_new(local_38,data);
          if (item != (pitem *)0x0) {
            pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x120),item);
            uVar6 = 1;
            goto LAB_00100e84;
          }
        }
      }
      else if (lVar4 + 1 + (ulong)(*(int *)(param_1 + 0x48) == 0x100) * 2 ==
               (ulong)*(uint *)(param_1 + 0x108)) goto LAB_00100df4;
      dtls1_hm_fragment_free(data);
    }
  }
  uVar6 = 0;
LAB_00100e84:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 dtls1_retransmit_message(long param_1,ushort param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BIO *bp;
  undefined4 uVar10;
  pitem *ppVar11;
  long lVar12;
  long in_FS_OFFSET;
  uchar local_38 [6];
  ushort local_32;
  long local_30;
  
  local_32 = param_2 << 8 | param_2 >> 8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  ppVar11 = pqueue_find(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x120),local_38);
  if (ppVar11 == (pitem *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_dtls.c",0x4af,"dtls1_retransmit_message");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    *param_3 = 0;
    uVar10 = 0;
  }
  else {
    *param_3 = 1;
    puVar3 = (undefined1 *)ppVar11->data;
    lVar12 = (ulong)(-(uint)(*(int *)(puVar3 + 0x28) == 0) & 0xb) + 1;
    memcpy(*(void **)(*(long *)(param_1 + 0xf8) + 8),*(void **)(puVar3 + 0x40),
           *(long *)(puVar3 + 8) + lVar12);
    lVar4 = *(long *)(puVar3 + 8);
    uVar5 = *(undefined8 *)(puVar3 + 0x20);
    uVar2 = *(undefined2 *)(puVar3 + 0x10);
    lVar6 = *(long *)(param_1 + 0x4f0);
    *(long *)(param_1 + 0x108) = lVar12 + lVar4;
    uVar1 = *puVar3;
    *(long *)(lVar6 + 0x140) = lVar4;
    *(undefined1 *)(lVar6 + 0x138) = uVar1;
    uVar7 = *(undefined8 *)(puVar3 + 0x38);
    *(undefined8 *)(lVar6 + 0x158) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xc78);
    *(undefined2 *)(lVar6 + 0x148) = uVar2;
    uVar8 = *(undefined8 *)(param_1 + 0xc88);
    *(undefined8 *)(lVar6 + 0x150) = 0;
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    *(undefined4 *)(lVar6 + 0x1cc) = 1;
    lVar4 = *(long *)(puVar3 + 0x30);
    *(undefined8 *)(param_1 + 0xc88) = uVar7;
    *(long *)(param_1 + 0xc78) = lVar4;
    (**(code **)(lVar4 + 0x58))(uVar7,uVar9);
    uVar10 = dtls1_do_write(param_1,(-(*(int *)(puVar3 + 0x28) == 0) & 2U) + 0x14);
    *(undefined8 *)(param_1 + 0xc78) = uVar5;
    bp = *(BIO **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0xc88) = uVar8;
    *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 0x1cc) = 0;
    BIO_ctrl(bp,0xb,0,(void *)0x0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dtls1_retransmit_buffered_messages(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  pitem *ppVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_2c;
  pitem *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  local_28 = pqueue_iterator(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x120));
  ppVar3 = pqueue_next(&local_28);
  if (ppVar3 != (pitem *)0x0) {
    do {
      uVar1 = dtls1_get_queue_priority
                        (*(undefined2 *)((long)ppVar3->data + 0x10),
                         *(undefined4 *)((long)ppVar3->data + 0x28));
      iVar2 = dtls1_retransmit_message(param_1,uVar1,&local_2c);
      if (iVar2 < 1) {
        uVar4 = 0xffffffff;
        goto LAB_00101145;
      }
      ppVar3 = pqueue_next(&local_28);
    } while (ppVar3 != (pitem *)0x0);
  }
  uVar4 = 1;
LAB_00101145:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dtls1_set_message_header
               (long param_1,undefined1 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  lVar2 = *(long *)(param_1 + 0x4f0);
  uVar1 = *(ushort *)(lVar2 + 0x10e);
  uVar3 = *(ushort *)(lVar2 + 0x10c);
  if (param_4 == 0) {
    *(uint *)(lVar2 + 0x10c) = (uVar1 + 1) * 0x10000 | (uint)uVar1;
    uVar3 = uVar1;
  }
  *(undefined1 *)(lVar2 + 0x138) = param_2;
  *(undefined8 *)(lVar2 + 0x140) = param_3;
  *(ushort *)(lVar2 + 0x148) = uVar3;
  *(long *)(lVar2 + 0x150) = param_4;
  *(undefined8 *)(lVar2 + 0x158) = param_5;
  return;
}



void dtls1_get_message_header(undefined1 *param_1,undefined1 (*param_2) [16])

{
  *param_2 = (undefined1  [16])0x0;
  param_2[1] = (undefined1  [16])0x0;
  param_2[2] = (undefined1  [16])0x0;
  param_2[3] = (undefined1  [16])0x0;
  (*param_2)[0] = *param_1;
  *(ulong *)(*param_2 + 8) =
       (ulong)(byte)param_1[1] << 0x10 | (ulong)(byte)param_1[2] << 8 | (ulong)(byte)param_1[3];
  *(ushort *)param_2[1] = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
  *(ulong *)(param_2[1] + 8) =
       (ulong)(byte)param_1[6] << 0x10 | (ulong)(byte)param_1[7] << 8 | (ulong)(byte)param_1[8];
  *(ulong *)param_2[2] =
       (ulong)(byte)param_1[0xb] | (ulong)(byte)param_1[9] << 0x10 | (ulong)(byte)param_1[10] << 8;
  return;
}



undefined8 dtls_get_message(long param_1,int *param_2)

{
  short *psVar1;
  undefined2 uVar2;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  pitem *ppVar8;
  long lVar9;
  pitem *ppVar10;
  undefined1 *puVar11;
  undefined8 *data;
  uint *puVar12;
  ushort uVar13;
  undefined8 uVar14;
  pitem *ppVar15;
  void *pvVar16;
  long in_FS_OFFSET;
  pitem **pppVar17;
  char local_1a9;
  pitem *local_1a8;
  pitem *local_1a0;
  char local_198;
  undefined7 uStack_197;
  pitem *ppStack_190;
  ushort local_188;
  undefined6 uStack_186;
  long lStack_180;
  pitem *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_150;
  undefined2 local_14c;
  ushort local_14a;
  undefined1 local_148 [264];
  long local_40;
  
  lVar3 = *(long *)(param_1 + 0x4f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(lVar3 + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar3 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar3 + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar3 + 0x1a8) = (undefined1  [16])0x0;
LAB_001012cd:
  do {
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    pcVar4 = *(char **)(*(long *)(param_1 + 0xf8) + 8);
    lVar9 = *(long *)(param_1 + 0x4f0);
LAB_001012e8:
    local_1a0 = pqueue_iterator(*(pqueue *)(lVar9 + 0x118));
    ppVar8 = pqueue_next(&local_1a0);
    while (ppVar8 != (pitem *)0x0) {
      pvVar16 = ppVar8->data;
      uVar13 = *(ushort *)(*(long *)(param_1 + 0x4f0) + 0x110);
      if (uVar13 <= *(ushort *)((long)pvVar16 + 0x10)) {
        bVar6 = false;
LAB_0010149b:
        if ((*(long *)((long)pvVar16 + 0x48) == 0) &&
           ((*(short *)(*(long *)(param_1 + 0x4f0) + 0x110) == *(short *)((long)pvVar16 + 0x10) ||
            (bVar6)))) {
          ppVar10 = *(pitem **)((long)pvVar16 + 0x20);
          pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118));
          iVar7 = dtls1_preprocess_fragment(param_1,pvVar16);
          if (iVar7 == 0) {
            dtls1_hm_fragment_free(pvVar16);
            pitem_free(ppVar8);
            uVar14 = 0;
            *(undefined8 *)(param_1 + 0x108) = 0;
            goto LAB_00101608;
          }
          if (*(size_t *)((long)pvVar16 + 0x20) != 0) {
            memcpy((void *)(*(long *)(*(long *)(param_1 + 0xf8) + 8) + 0xc +
                           *(long *)((long)pvVar16 + 0x18)),*(void **)((long)pvVar16 + 0x40),
                   *(size_t *)((long)pvVar16 + 0x20));
          }
          dtls1_hm_fragment_free(pvVar16);
          pitem_free(ppVar8);
          if (!bVar6) goto LAB_00101521;
          goto LAB_0010183d;
        }
        break;
      }
      if (((*(int *)(param_1 + 0x78) != 0 && uVar13 == 1) &&
          (*(ushort *)((long)pvVar16 + 0x10) == 0)) && (*(int *)(param_1 + 0xac) == 0x17)) {
        bVar6 = true;
        ppVar10 = pqueue_next(&local_1a0);
        if (ppVar10 != (pitem *)0x0) {
          pvVar5 = ppVar10->data;
          if (*(short *)((long)pvVar5 + 0x10) == *(short *)(*(long *)(param_1 + 0x4f0) + 0x110)) {
            bVar6 = false;
            pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118));
            dtls1_hm_fragment_free(pvVar16);
            pitem_free(ppVar8);
            ppVar8 = ppVar10;
            pvVar16 = pvVar5;
          }
        }
        goto LAB_0010149b;
      }
      pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118));
      dtls1_hm_fragment_free(pvVar16);
      pitem_free(ppVar8);
      ppVar8 = pqueue_next(&local_1a0);
    }
    pppVar17 = &local_1a8;
    iVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))(param_1,0x16,&local_1a9,pcVar4,0xc,0);
    if (iVar7 < 1) {
LAB_001019b6:
      *(undefined4 *)(param_1 + 0x68) = 3;
      uVar14 = 0;
      goto LAB_00101608;
    }
    if (local_1a9 == '\x14') {
      if (*pcVar4 == '\x01') {
        puVar12 = *(uint **)(*(long *)(param_1 + 0xf8) + 8);
        puVar11 = (undefined1 *)((long)&local_1a8[-1].next + 7);
        *(undefined4 *)(param_1 + 0x2f8) = 0x101;
        *(undefined1 **)(param_1 + 0x108) = puVar11;
        *(undefined1 **)(param_1 + 0x2f0) = puVar11;
        *(long *)(param_1 + 0x100) = (long)puVar12 + 1;
        *param_2 = 0x101;
LAB_00101a11:
        if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
          (**(code **)(param_1 + 0x4f8))
                    (0,*(undefined4 *)(param_1 + 0x48),0x14,puVar12,1,
                     *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x500));
        }
LAB_001015fe:
        uVar14 = 1;
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_dtls.c",0x34c,"dtls_get_reassembled_message");
        ossl_statem_fatal(param_1,10,0x67,0);
        *(undefined8 *)(param_1 + 0x108) = 0;
LAB_00101891:
        uVar14 = 0;
      }
      goto LAB_00101608;
    }
    if (local_1a8 != (pitem *)0xc) {
      ERR_new();
      uVar14 = 0x35b;
LAB_00101864:
      ERR_set_debug("ssl/statem/statem_dtls.c",uVar14,"dtls_get_reassembled_message");
      ossl_statem_fatal(param_1,10,0xf4,0);
LAB_00101886:
      *(undefined8 *)(param_1 + 0x108) = 0;
      goto LAB_00101891;
    }
    dtls1_get_message_header(pcVar4,&local_198);
    ppVar8 = local_178;
    if (*(pitem **)(param_1 + 0xd38 + *(long *)(param_1 + 0xd10) * 0x40) < local_178) {
      ERR_new();
      uVar14 = 0x36b;
LAB_00101a6f:
      ERR_set_debug("ssl/statem/statem_dtls.c",uVar14,"dtls_get_reassembled_message");
      ossl_statem_fatal(param_1,0x2f,0x10f,0);
      *(undefined8 *)(param_1 + 0x108) = 0;
      goto LAB_00101891;
    }
    lVar9 = *(long *)(param_1 + 0x4f0);
    if (local_188 == *(ushort *)(lVar9 + 0x110)) {
      if ((local_178 < ppStack_190) && (local_178 != (pitem *)0x0)) goto LAB_00101475;
      if (*(int *)(param_1 + 0x78) != 0) {
        bVar6 = false;
LAB_00101798:
        iVar7 = dtls1_preprocess_fragment(param_1,&local_198);
        if (iVar7 != 0) {
          if (local_178 != (pitem *)0x0) {
            iVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                              (param_1,0x16,0,pcVar4 + lStack_180 + 0xc,local_178,0);
            if (iVar7 < 1) goto LAB_001019b6;
            if (local_178 != local_1a8) {
              ERR_new(0x1017b7,pppVar17);
              uVar14 = 0x3c0;
              goto LAB_00101a6f;
            }
          }
          ppVar10 = local_178;
          if (bVar6) {
LAB_0010183d:
            *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 0x10e) = 0;
          }
LAB_00101521:
          iVar7 = *(int *)(param_1 + 0x2f8);
          *(pitem **)(param_1 + 0x108) = ppVar10;
          lVar9 = *(long *)(param_1 + 0xf8);
          *param_2 = iVar7;
          puVar12 = *(uint **)(lVar9 + 8);
          if (iVar7 == 0x101) goto LAB_00101a11;
          uVar13 = *(ushort *)(lVar3 + 0x180);
          uVar14 = *(undefined8 *)(lVar3 + 0x180);
          *puVar12 = ((((uint)uVar14 & 0xff) << 8 | (uint)(byte)((ulong)uVar14 >> 8)) << 8 |
                     (uint)((ulong)uVar14 >> 0x10) & 0xff) << 8 | (uint)*(byte *)(lVar3 + 0x178);
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(lVar3 + 0x189);
          uVar2 = *(undefined2 *)(lVar3 + 0x188);
          *(undefined1 *)(puVar12 + 2) = 0;
          *(char *)((long)puVar12 + 5) = (char)uVar2;
          *(undefined2 *)((long)puVar12 + 6) = 0;
          *(char *)((long)puVar12 + 9) = (char)((ulong)uVar14 >> 0x10);
          *(ushort *)((long)puVar12 + 10) = uVar13 << 8 | uVar13 >> 8;
          *(undefined1 (*) [16])(lVar3 + 0x178) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar3 + 0x188) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar3 + 0x198) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar3 + 0x1a8) = (undefined1  [16])0x0;
          psVar1 = (short *)(*(long *)(param_1 + 0x4f0) + 0x110);
          *psVar1 = *psVar1 + 1;
          *(long *)(param_1 + 0x100) = *(long *)(*(long *)(param_1 + 0xf8) + 8) + 0xc;
          goto LAB_001015fe;
        }
        goto LAB_00101886;
      }
      bVar6 = false;
      if (((*(long *)(lVar9 + 400) != 0) || (*(int *)(param_1 + 0xac) == 1)) || (*pcVar4 != '\0'))
      goto LAB_00101798;
      if (((pcVar4[1] != '\0') || (pcVar4[2] != '\0')) || (pcVar4[3] != '\0')) {
        ERR_new();
        uVar14 = 0x39e;
        goto LAB_00101864;
      }
      if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x4f8))
                  (0,*(undefined4 *)(param_1 + 0x48),0x16,pcVar4,0xc,uVar14,
                   *(undefined8 *)(param_1 + 0x500));
        lVar9 = *(long *)(param_1 + 0x4f0);
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
      goto LAB_001012e8;
    }
    uVar13 = local_188;
    if ((*(int *)(param_1 + 0x78) != 0) && (local_188 == 0)) {
      if ((*(ushort *)(lVar9 + 0x110) == 1) && (*pcVar4 == '\x01')) {
        if (*(int *)(param_1 + 0xac) == 0x17) {
          if ((ppStack_190 <= local_178) || (local_178 == (pitem *)0x0)) {
            bVar6 = true;
            goto LAB_00101798;
          }
          goto LAB_00101475;
        }
      }
      else {
        uVar13 = 0;
      }
    }
    if (ppStack_190 < (pitem *)(local_178->priority + lStack_180)) goto LAB_00101982;
    local_14a = uVar13 << 8 | uVar13 >> 8;
    local_150 = 0;
    local_14c = 0;
    ppVar10 = pqueue_find(*(pqueue *)(lVar9 + 0x118),(uchar *)&local_150);
    if ((ppVar10 != (pitem *)0x0) && (ppVar8 == ppStack_190)) {
LAB_0010191e:
      if (ppVar8 == (pitem *)0x0) goto LAB_001012cd;
      goto LAB_0010193b;
    }
    uVar13 = *(ushort *)(*(long *)(param_1 + 0x4f0) + 0x110);
    if (local_188 <= uVar13) {
      ppVar10 = (pitem *)0x0;
      goto LAB_0010191e;
    }
    ppVar10 = (pitem *)0x0;
    if ((uVar13 + 10 < (uint)local_188) || ((uVar13 == 0 && (local_198 == '\x14'))))
    goto LAB_0010191e;
    if (ppVar8 == ppStack_190) {
      ppVar10 = *(pitem **)(param_1 + 0x9c8);
      if (ppVar10 < (pitem *)0x454c) {
        ppVar10 = (pitem *)0x454c;
      }
      if ((ppVar10 < ppVar8) ||
         (data = (undefined8 *)dtls1_hm_fragment_new(ppVar8,0), data == (undefined8 *)0x0))
      goto LAB_00101982;
      *data = CONCAT71(uStack_197,local_198);
      data[1] = ppStack_190;
      data[2] = CONCAT62(uStack_186,local_188);
      data[3] = lStack_180;
      data[4] = local_178;
      data[5] = uStack_170;
      data[6] = local_168;
      data[7] = uStack_160;
      if ((((ppVar8 != (pitem *)0x0) &&
           ((iVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                               (param_1,0x16,0,data[8],ppVar8,0,&local_1a0), iVar7 < 1 ||
            (ppVar8 != local_1a0)))) ||
          (ppVar8 = pitem_new((uchar *)&local_150,data), ppVar8 == (pitem *)0x0)) ||
         (ppVar8 = pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118),ppVar8),
         ppVar8 == (pitem *)0x0)) goto LAB_00101985;
      goto LAB_001012cd;
    }
LAB_00101475:
    iVar7 = dtls1_reassemble_fragment(param_1,&local_198);
  } while (iVar7 + 3U < 2);
LAB_0010148c:
  uVar14 = 0;
  goto LAB_00101608;
  while (ppVar8 = (pitem *)((long)ppVar8 - (long)local_1a0), ppVar8 != (pitem *)0x0) {
LAB_0010193b:
    ppVar15 = (pitem *)0x100;
    if (ppVar8 < (pitem *)0x101) {
      ppVar15 = ppVar8;
    }
    iVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                      (param_1,0x16,0,local_148,ppVar15,0,&local_1a0);
    if (iVar7 < 1) {
      if (ppVar10 == (pitem *)0x0) goto LAB_00101982;
      goto LAB_0010148c;
    }
  }
  goto LAB_001012cd;
LAB_00101982:
  data = (undefined8 *)0x0;
LAB_00101985:
  dtls1_hm_fragment_free(data);
  uVar14 = 0;
LAB_00101608:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong dtls1_set_handshake_header(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0x101) {
    lVar1 = *(long *)(param_1 + 0x4f0);
    *(undefined1 *)(lVar1 + 0x138) = 1;
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined2 *)(lVar1 + 0x10c) = *(undefined2 *)(lVar1 + 0x10e);
    *(undefined2 *)(lVar1 + 0x148) = *(undefined2 *)(lVar1 + 0x10e);
    *(undefined1 (*) [16])(lVar1 + 0x150) = (undefined1  [16])0x0;
    iVar2 = WPACKET_put_bytes__(param_2,1,1);
    uVar3 = (ulong)(iVar2 != 0);
  }
  else {
    dtls1_set_message_header(param_1,param_3 & 0xff,0,0,0);
    uVar3 = WPACKET_allocate_bytes(param_2,0xc,auStack_18);
    if ((int)uVar3 != 0) {
      iVar2 = WPACKET_start_sub_packet(param_2);
      uVar3 = (ulong)(iVar2 != 0);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dtls1_close_construct_packet(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0x101) {
LAB_00101d2c:
    iVar2 = WPACKET_get_length(param_2,&local_28);
    if ((iVar2 != 0) && (local_28 < 0x80000000)) {
      if (param_3 == 0x101) {
        *(ulong *)(param_1 + 0x108) = local_28;
        *(undefined8 *)(param_1 + 0x110) = 0;
      }
      else {
        lVar1 = *(long *)(param_1 + 0x4f0);
        *(ulong *)(lVar1 + 0x140) = local_28 - 0xc;
        *(ulong *)(lVar1 + 0x158) = local_28 - 0xc;
        *(ulong *)(param_1 + 0x108) = local_28;
        bVar3 = true;
        *(undefined8 *)(param_1 + 0x110) = 0;
        if (param_3 == 3) goto LAB_00101daa;
      }
      iVar2 = dtls1_buffer_message(param_1,param_3 == 0x101);
      bVar3 = iVar2 != 0;
      goto LAB_00101daa;
    }
  }
  else {
    iVar2 = WPACKET_close(param_2);
    if (iVar2 != 0) goto LAB_00101d2c;
  }
  bVar3 = false;
LAB_00101daa:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


