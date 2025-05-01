
void dtls1_handshake_write(undefined8 param_1)

{
  dtls1_do_write(param_1,0x16);
  return;
}



undefined8 dtls1_default_timeout(void)

{
  return 7200000000000;
}



bool dtls1_new(int *param_1)

{
  int iVar1;
  void *ptr;
  pqueue p_Var2;
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (((*param_1 == 0) && (iVar1 = DTLS_RECORD_LAYER_new(param_1 + 0x316), iVar1 != 0)) &&
     (iVar1 = ssl3_new(param_1), iVar1 != 0)) {
    ptr = (void *)CRYPTO_zalloc(0x1d8,"ssl/d1_lib.c",0x4f);
    if (ptr != (void *)0x0) {
      p_Var2 = pqueue_new();
      *(pqueue *)((long)ptr + 0x118) = p_Var2;
      p_Var2 = pqueue_new();
      iVar1 = param_1[0x1e];
      *(pqueue *)((long)ptr + 0x120) = p_Var2;
      if (iVar1 != 0) {
        *(undefined8 *)((long)ptr + 0x100) = 0xff;
      }
      *(undefined1 (*) [16])((long)ptr + 0x128) = (undefined1  [16])0x0;
      if ((p_Var2 != (pqueue)0x0) && (*(pqueue *)((long)ptr + 0x118) != (pqueue)0x0)) {
        *(void **)(param_1 + 0x13c) = ptr;
        iVar1 = (**(code **)(*(long *)(param_1 + 6) + 0x30))(param_1);
        return iVar1 != 0;
      }
      pqueue_free(*(pqueue *)((long)ptr + 0x118));
      pqueue_free(*(pqueue *)((long)ptr + 0x120));
      CRYPTO_free(ptr);
    }
    ssl3_free(param_1);
    return false;
  }
  return false;
}



void dtls1_clear_received_buffer(long param_1)

{
  pitem *item;
  
  while( true ) {
    item = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x118));
    if (item == (pitem *)0x0) break;
    dtls1_hm_fragment_free(item->data);
    pitem_free(item);
  }
  return;
}



void dtls1_clear_sent_buffer(long param_1)

{
  void *pvVar1;
  pitem *item;
  
  while( true ) {
    item = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x120));
    if (item == (pitem *)0x0) break;
    pvVar1 = item->data;
    if (((*(int *)((long)pvVar1 + 0x28) != 0) && (*(long *)((long)pvVar1 + 0x30) != 0)) &&
       (*(long *)(param_1 + 0xc88) != *(long *)((long)pvVar1 + 0x38))) {
      (**(code **)(*(long *)((long)pvVar1 + 0x30) + 8))();
    }
    dtls1_hm_fragment_free(pvVar1);
    pitem_free(item);
  }
  return;
}



void dtls1_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      if (*(long *)(param_1 + 0x13c) != 0) {
        dtls1_clear_received_buffer();
        dtls1_clear_sent_buffer(param_1);
        pqueue_free(*(pqueue *)(*(long *)(param_1 + 0x13c) + 0x118));
        pqueue_free(*(pqueue *)(*(long *)(param_1 + 0x13c) + 0x120));
      }
      DTLS_RECORD_LAYER_free(param_1 + 0x316);
      ssl3_free(param_1);
      CRYPTO_free(*(void **)(param_1 + 0x13c));
      param_1[0x13c] = 0;
      param_1[0x13d] = 0;
    }
    return;
  }
  return;
}



undefined8 dtls1_clear(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    DTLS_RECORD_LAYER_clear(param_1 + 0x316);
    lVar1 = *(long *)(param_1 + 0x13c);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x118);
      uVar4 = *(undefined8 *)(lVar1 + 0x120);
      uVar5 = *(undefined8 *)(lVar1 + 0x128);
      uVar6 = *(undefined8 *)(lVar1 + 0x130);
      uVar2 = *(undefined8 *)(lVar1 + 0x1d0);
      dtls1_clear_received_buffer(param_1);
      dtls1_clear_sent_buffer(param_1);
      puVar9 = *(undefined8 **)(param_1 + 0x13c);
      *puVar9 = 0;
      puVar9[0x3a] = 0;
      uVar8 = (ulong)(((int)puVar9 - (int)(undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8))
                      + 0x1d8U >> 3);
      puVar9 = (undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
      lVar1 = *(long *)(param_1 + 0x13c);
      iVar7 = param_1[0x1e];
      *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
      if (iVar7 != 0) {
        *(undefined8 *)(lVar1 + 0x100) = 0xff;
      }
      uVar8 = SSL_get_options(param_1);
      lVar1 = *(long *)(param_1 + 0x13c);
      if ((uVar8 & 0x1000) != 0) {
        *(undefined8 *)(lVar1 + 0x128) = uVar5;
        *(undefined8 *)(lVar1 + 0x130) = uVar6;
      }
      *(undefined8 *)(lVar1 + 0x118) = uVar3;
      *(undefined8 *)(lVar1 + 0x120) = uVar4;
    }
    iVar7 = ssl3_clear(param_1);
    if (iVar7 != 0) {
      if (**(int **)(param_1 + 6) == 0x1ffff) {
        param_1[0x12] = 0xfefd;
      }
      else if ((*(byte *)((long)param_1 + 0x9b1) & 0x80) == 0) {
        param_1[0x12] = **(int **)(param_1 + 6);
      }
      else {
        param_1[0x12] = 0x100;
        param_1[0x275] = 0x100;
      }
      return 1;
    }
  }
  return 0;
}



void dtls1_start_timer(SSL *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  BIO *bp;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_38;
  ulong local_30;
  long local_20;
  
  pvVar1 = param_1[1].tlsext_opaque_prf_input;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)((long)pvVar1 + 0x1c0) == 0) {
    if (*(code **)((long)pvVar1 + 0x1d0) == (code *)0x0) {
      *(undefined4 *)((long)pvVar1 + 0x1c8) = 1000000;
      uVar5 = 1000000000;
    }
    else {
      uVar2 = (**(code **)((long)pvVar1 + 0x1d0))(param_1,0);
      *(undefined4 *)((long)pvVar1 + 0x1c8) = uVar2;
      uVar5 = (ulong)*(uint *)((long)param_1[1].tlsext_opaque_prf_input + 0x1c8) * 1000;
    }
  }
  else {
    uVar5 = (ulong)*(uint *)((long)pvVar1 + 0x1c8) * 1000;
  }
  uVar3 = ossl_time_now();
  pvVar1 = param_1[1].tlsext_opaque_prf_input;
  lVar4 = uVar3 + uVar5;
  if (CARRY8(uVar3,uVar5)) {
    lVar4 = -1;
  }
  *(long *)((long)pvVar1 + 0x1c0) = lVar4;
  bp = SSL_get_rbio(param_1);
  uVar5 = *(ulong *)((long)pvVar1 + 0x1c0);
  uVar3 = uVar5 + 999;
  if (uVar5 < 0xfffffffffffffc19) {
    local_38 = uVar3 / 1000000000;
    local_30 = (uVar3 % 1000000000) / 1000;
  }
  else {
    local_38 = 0x44b82fa09;
    local_30 = 0xad3af;
  }
  BIO_ctrl(bp,0x2d,0,&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dtls1_get_timeout(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x4f0) + 0x1c0) == 0) {
    return 0;
  }
  uVar1 = ossl_time_now();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x4f0) + 0x1c0);
  if ((uVar1 <= uVar2) && (uVar2 = uVar2 - uVar1, *param_2 = uVar2, 15000000 < uVar2)) {
    return 1;
  }
  *param_2 = 0;
  return 1;
}



ulong dtls1_is_timer_expired(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = dtls1_get_timeout(param_1,&local_18);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(local_18 == 0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dtls1_stop_timer(long param_1)

{
  long lVar1;
  BIO *bp;
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 0x4f0);
  bp = *(BIO **)(param_1 + 0x50);
  local_28 = (undefined1  [16])0x0;
  *(undefined4 *)(lVar1 + 0x1b8) = 0;
  *(undefined8 *)(lVar1 + 0x1c0) = 0;
  *(undefined4 *)(lVar1 + 0x1c8) = 1000000;
  BIO_ctrl(bp,0x2d,0,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    dtls1_clear_sent_buffer(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dtls1_check_timeout_num(SSL *param_1)

{
  uint uVar1;
  ulong uVar2;
  BIO *bp;
  void *pvVar3;
  
  uVar1 = *(int *)((long)param_1[1].tlsext_opaque_prf_input + 0x1b8) + 1;
  *(uint *)((long)param_1[1].tlsext_opaque_prf_input + 0x1b8) = uVar1;
  if (uVar1 < 3) {
    return 0;
  }
  uVar2 = SSL_get_options();
  if ((uVar2 & 0x1000) == 0) {
    bp = SSL_get_wbio(param_1);
    uVar2 = BIO_ctrl(bp,0x2f,0,(void *)0x0);
    pvVar3 = param_1[1].tlsext_opaque_prf_input;
    if (uVar2 < *(ulong *)((long)pvVar3 + 0x130)) {
      *(ulong *)((long)pvVar3 + 0x130) = uVar2;
    }
  }
  else {
    pvVar3 = param_1[1].tlsext_opaque_prf_input;
  }
  if (*(uint *)((long)pvVar3 + 0x1b8) < 0xd) {
    return 0;
  }
  ERR_new();
  ERR_set_debug("ssl/d1_lib.c",0x181,"dtls1_check_timeout_num");
  ossl_statem_fatal(param_1,0xffffffff,0x138,0);
  return 0xffffffff;
}



undefined8 dtls1_handle_timeout(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = dtls1_is_timer_expired();
  if ((int)uVar4 != 0) {
    lVar1 = *(long *)(param_1 + 0x4f0);
    if (*(code **)(lVar1 + 0x1d0) == (code *)0x0) {
      uVar2 = *(int *)(lVar1 + 0x1c8) * 2;
      if (60000000 < uVar2) {
        uVar2 = 60000000;
      }
    }
    else {
      uVar2 = (**(code **)(lVar1 + 0x1d0))(*(undefined8 *)(param_1 + 0x40));
    }
    *(uint *)(lVar1 + 0x1c8) = uVar2;
    iVar3 = dtls1_check_timeout_num(param_1);
    if (-1 < iVar3) {
      dtls1_start_timer(param_1);
      uVar4 = dtls1_retransmit_buffered_messages(param_1);
      return uVar4;
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



long dtls1_ctrl(int *param_1,int param_2,long param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  lVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    if (param_2 == 0x4a) {
      iVar1 = dtls1_handle_timeout();
      lVar4 = (long)iVar1;
    }
    else {
      if (param_2 < 0x4b) {
        if (param_2 == 0x11) {
          lVar4 = 0;
          if (0xcf < param_3) {
            *(long *)(*(long *)(param_1 + 0x13c) + 0x130) = param_3;
            lVar4 = param_3;
          }
          goto LAB_001008a0;
        }
        if (param_2 == 0x49) {
          iVar1 = dtls1_get_timeout(param_1,&local_18);
          if (iVar1 != 0) {
            if (local_18 < 0xfffffffffffffc19) {
              uVar2 = (local_18 + 999) / 1000000000;
              uVar3 = ((local_18 + 999) % 1000000000) / 1000;
            }
            else {
              uVar2 = 0x44b82fa09;
              uVar3 = 0xad3af;
            }
            *param_4 = uVar2;
            param_4[1] = uVar3;
            lVar4 = 1;
          }
          goto LAB_001008a0;
        }
      }
      else {
        if (param_2 == 0x78) {
          lVar4 = 0;
          if (0xff < param_3) {
            lVar4 = 1;
            *(long *)(*(long *)(param_1 + 0x13c) + 0x128) = param_3;
          }
          goto LAB_001008a0;
        }
        lVar4 = 0x100;
        if (param_2 == 0x79) goto LAB_001008a0;
      }
      iVar1 = ssl3_ctrl();
      lVar4 = (long)iVar1;
    }
  }
LAB_001008a0:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int DTLSv1_listen(SSL *param_1,void *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BIO *b;
  BIO *bp;
  char *ptr;
  void *data;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  SSL_METHOD *pSVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 extraout_RDX;
  undefined8 uVar16;
  TLS_SESSION_TICKET_EXT *pTVar17;
  long in_FS_OFFSET;
  uint local_194;
  int local_190 [2];
  undefined1 local_188 [56];
  undefined8 local_150;
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (SSL *)0x0) && (param_1->version == 0)) {
    if (*(long *)&param_1->packet_length == 0) {
      SSL_set_accept_state(param_1);
    }
    iVar6 = SSL_clear(param_1);
    if (iVar6 != 0) {
      ERR_clear_error();
      b = SSL_get_rbio(param_1);
      bp = SSL_get_wbio(param_1);
      if ((b == (BIO *)0x0) || (bp == (BIO *)0x0)) {
        ERR_new();
        ERR_set_debug("ssl/d1_lib.c",0x1c3,"DTLSv1_listen");
        ERR_set_error(0x14,0x80,0);
      }
      else if ((param_1->state & 0xff00U) == 0xfe00) {
        ptr = (char *)CRYPTO_malloc(0x400d,"ssl/d1_lib.c",0x1d3);
        if (ptr != (char *)0x0) {
          data = CRYPTO_malloc(0x400d,"ssl/d1_lib.c",0x1d6);
          if (data != (void *)0x0) {
            piVar9 = __errno_location();
            do {
              *piVar9 = 0;
              iVar6 = BIO_read(b,ptr,0x400d);
              if (iVar6 < 1) {
                iVar6 = BIO_test_flags(b,8);
                iVar8 = -(uint)(iVar6 == 0);
                goto LAB_00100cf8;
              }
              iVar8 = 0;
              if (iVar6 < 0xd) {
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x1fc,"DTLSv1_listen");
                ERR_set_error(0x14,0x12a,0);
                goto LAB_00100cf8;
              }
              cVar1 = *ptr;
              cVar2 = ptr[1];
              if ((code *)param_1[1].tlsext_opaque_prf_input_len != (code *)0x0) {
                (*(code *)param_1[1].tlsext_opaque_prf_input_len)
                          (0,*(ushort *)(ptr + 1) << 8 | *(ushort *)(ptr + 1) >> 8,0x100,ptr,0xd,
                           param_1,param_1[1].tlsext_session_ticket);
              }
              if (cVar1 != '\x16') {
                ERR_new();
                uVar16 = 0x20d;
                goto LAB_00100e46;
              }
              if (cVar2 != -2) {
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x216,"DTLSv1_listen");
                ERR_set_error(0x14,0x74,0);
                goto LAB_00100cf8;
              }
              local_150 = *(undefined8 *)(ptr + 3);
              uVar5 = *(ushort *)(ptr + 0xb) << 8 | *(ushort *)(ptr + 0xb) >> 8;
              if ((long)iVar6 - 0xdU < (ulong)uVar5) {
                ERR_new();
                uVar16 = 0x21d;
LAB_00100cd9:
                ERR_set_debug("ssl/d1_lib.c",uVar16,"DTLSv1_listen");
                ERR_set_error(0x14,0x9f,0);
                goto LAB_00100cf8;
              }
              if ((char)local_150 != '\0' || (char)((ulong)local_150 >> 8) != '\0') {
                ERR_new();
                uVar16 = 0x227;
LAB_00100e46:
                ERR_set_debug("ssl/d1_lib.c",uVar16,"DTLSv1_listen");
                ERR_set_error(0x14,0xf4,0);
                goto LAB_00100cf8;
              }
              if ((uVar5 < 0xc) ||
                 (uVar10 = (ulong)(byte)ptr[0x16] << 0x10 | (ulong)(byte)ptr[0x17] << 8 |
                           (ulong)(byte)ptr[0x18], uVar10 != (ulong)uVar5 - 0xc)) {
                ERR_new();
                uVar16 = 0x236;
                goto LAB_00100cd9;
              }
              pTVar17 = (TLS_SESSION_TICKET_EXT *)(ulong)(byte)ptr[0xf];
              if (ptr[0xd] != '\x01') {
                ERR_new();
                uVar16 = 0x23b;
                goto LAB_00100e46;
              }
              if (2 < (ushort)(*(ushort *)(ptr + 0x11) << 8 | *(ushort *)(ptr + 0x11) >> 8)) {
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x241,"DTLSv1_listen");
                ERR_set_error(0x14,0x192,0);
                goto LAB_00100cf8;
              }
              if (((ptr[0x13] != '\0' || ptr[0x14] != '\0') || ptr[0x15] != '\0') ||
                 (((ulong)(byte)ptr[0xe] << 0x10 | (long)pTVar17 << 8 | (ulong)(byte)ptr[0x10]) <
                  uVar10)) {
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x24e,"DTLSv1_listen");
                ERR_set_error(0x14,0x191,0);
                goto LAB_00100cf8;
              }
              if ((code *)param_1[1].tlsext_opaque_prf_input_len != (code *)0x0) {
                pTVar17 = param_1[1].tlsext_session_ticket;
                (*(code *)param_1[1].tlsext_opaque_prf_input_len)
                          (0,param_1->state,0x16,ptr + 0xd,uVar10 + 0xc,param_1);
              }
              if (uVar10 < 2) {
                ERR_new(pTVar17);
                uVar16 = 600;
                goto LAB_00100cd9;
              }
              uVar5 = *(ushort *)(ptr + 0x19) << 8 | *(ushort *)(ptr + 0x19) >> 8;
              uVar14 = (uint)uVar5;
              uVar4 = *(uint *)&param_1->wbio->method;
              if (uVar5 != 0x100) {
                if (uVar4 != 0x100) goto LAB_00100c44;
                if (uVar5 < 0xff01) goto LAB_00100d8f;
LAB_00100c4c:
                ERR_new(pTVar17);
                ERR_set_debug("ssl/d1_lib.c",0x261,"DTLSv1_listen");
                ERR_set_error(0x14,0x10b,0);
                goto LAB_00100cf8;
              }
              uVar14 = 0xff00;
              if (uVar4 != 0x100) {
LAB_00100c44:
                if (uVar4 < uVar14) goto LAB_00100c4c;
              }
LAB_00100d8f:
              if (uVar10 - 2 < 0x21) {
LAB_00100d9d:
                ERR_new(pTVar17);
                uVar16 = 0x26c;
                goto LAB_00100cd9;
              }
              uVar15 = (ulong)(byte)ptr[0x3b];
              if ((uVar10 - 0x23 < uVar15) || (lVar11 = (uVar10 - 0x23) - uVar15, lVar11 == 0))
              goto LAB_00100d9d;
              bVar3 = ptr[uVar15 + 0x3c];
              if (lVar11 - 1U < (ulong)bVar3) goto LAB_00100d9d;
              pSVar12 = param_1->method;
              if ((ulong)bVar3 != 0) {
                if (pSVar12->ssl_callback_ctrl == (_func_3078 *)0x0) {
                  ERR_new(pTVar17);
                  ERR_set_debug("ssl/d1_lib.c",0x27b,"DTLSv1_listen");
                  ERR_set_error(0x14,0x193,0);
                }
                else {
                  lVar11 = (*pSVar12->ssl_callback_ctrl)
                                     (param_1,(int)(ptr + uVar15 + 0x3c) + 1,(fp *)(ulong)bVar3);
                  if ((int)lVar11 == 0) {
                    pSVar12 = param_1->method;
                    goto LAB_00100ee0;
                  }
                  pvVar13 = param_1[1].tlsext_opaque_prf_input;
                  uVar16._0_4_ = param_1[4].first_packet;
                  uVar16._4_4_ = param_1[4].client_version;
                  *(undefined2 *)((long)pvVar13 + 0x110) = 1;
                  *(undefined4 *)((long)pvVar13 + 0x10c) = 0x10001;
                  (**(code **)(param_1[4].mode + 0xb0))(uVar16);
                  SSL_set_options(param_1,0x2000);
                  ossl_statem_set_hello_verify_done(param_1);
                  lVar11 = BIO_ctrl(b,0x2e,0,param_2);
                  if ((int)lVar11 < 1) {
                    BIO_ADDR_clear(param_2);
                  }
                  iVar8 = BIO_write(*(BIO **)&param_1[4].max_send_fragment,ptr,iVar6);
                  if (iVar8 == iVar6) {
                    iVar8 = 1;
                    iVar6 = ssl_set_new_record_layer
                                      (param_1,0x1ffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
                    if (iVar6 != 0) goto LAB_00100cf8;
                  }
                  else {
                    ERR_new();
                    ERR_set_debug("ssl/d1_lib.c",0x339,"DTLSv1_listen");
                    ERR_set_error(0x14,0xc0103,0);
                  }
                }
LAB_00101291:
                iVar8 = -1;
                goto LAB_00100cf8;
              }
LAB_00100ee0:
              if (pSVar12->ssl_version == (_func_3077 *)0x0) {
LAB_00101390:
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x29c,"DTLSv1_listen");
                ERR_set_error(0x14,400,0);
                goto LAB_00101291;
              }
              iVar6 = (*pSVar12->ssl_version)(param_1,local_148,&local_194);
              if ((iVar6 == 0) || (0xff < local_194)) goto LAB_00101390;
              if (*(int *)&param_1->wbio->method == 0x1ffff) {
                iVar6 = 0xfeff;
              }
              else {
                iVar6 = param_1->state;
              }
              iVar7 = ssl_get_max_send_fragment(param_1);
              iVar7 = WPACKET_init_static_len(local_188,data,iVar7 + 0xd,0);
              if (((((((iVar7 == 0) || (iVar7 = WPACKET_put_bytes__(local_188,0x16,1), iVar7 == 0))
                     || (iVar6 = WPACKET_put_bytes__(local_188,iVar6,2), iVar6 == 0)) ||
                    ((iVar6 = WPACKET_memcpy(local_188,&local_150,8), iVar6 == 0 ||
                     (iVar6 = WPACKET_start_sub_packet_len__(local_188,2), iVar6 == 0)))) ||
                   ((iVar6 = WPACKET_put_bytes__(local_188,3,1), iVar6 == 0 ||
                    ((iVar6 = WPACKET_put_bytes__(local_188,0,3), iVar6 == 0 ||
                     (iVar6 = WPACKET_put_bytes__(local_188,0,2), iVar6 == 0)))))) ||
                  (iVar6 = WPACKET_put_bytes__(local_188,0,3), iVar6 == 0)) ||
                 ((((iVar6 = WPACKET_start_sub_packet_len__(local_188,3), iVar6 == 0 ||
                    (iVar6 = dtls_raw_hello_verify_request(local_188,local_148,local_194),
                    iVar6 == 0)) || (iVar6 = WPACKET_close(local_188), iVar6 == 0)) ||
                  (((iVar6 = WPACKET_close(local_188), iVar6 == 0 ||
                    (iVar6 = WPACKET_get_total_written(local_188,local_190), iVar6 == 0)) ||
                   (iVar6 = WPACKET_finish(local_188), iVar6 == 0)))))) {
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x2dc,"DTLSv1_listen");
                ERR_set_error(0x14,0xc0103,0);
                WPACKET_cleanup(local_188);
                goto LAB_00101291;
              }
              *(undefined2 *)((long)data + 0xe) = *(undefined2 *)((long)data + 0x16);
              *(undefined1 *)((long)data + 0x10) = *(undefined1 *)((long)data + 0x18);
              if ((code *)param_1[1].tlsext_opaque_prf_input_len != (code *)0x0) {
                (*(code *)param_1[1].tlsext_opaque_prf_input_len)
                          (1,0,0x100,ptr,0xd,param_1,param_1[1].tlsext_session_ticket,extraout_RDX);
              }
              pvVar13 = (void *)BIO_ADDR_new();
              if (pvVar13 == (void *)0x0) {
                ERR_new();
                ERR_set_debug("ssl/d1_lib.c",0x2f4,"DTLSv1_listen");
                ERR_set_error(0x14,0x80020,0);
                goto LAB_00100cf8;
              }
              lVar11 = BIO_ctrl(b,0x2e,0,pvVar13);
              if (0 < (int)lVar11) {
                BIO_ctrl(bp,0x2c,0,pvVar13);
              }
              BIO_ADDR_free(pvVar13);
              iVar6 = BIO_write(bp,data,local_190[0]);
            } while ((local_190[0] <= iVar6) &&
                    (lVar11 = BIO_ctrl(bp,0xb,0,(void *)0x0), 0 < (int)lVar11));
            iVar6 = BIO_test_flags(bp,8);
            iVar8 = -(uint)(iVar6 == 0);
LAB_00100cf8:
            BIO_ADDR_free(0);
            CRYPTO_free(ptr);
            CRYPTO_free(data);
            goto LAB_001009a8;
          }
          CRYPTO_free(ptr);
        }
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/d1_lib.c",0x1cf,"DTLSv1_listen");
        ERR_set_error(0x14,0x103,0);
      }
    }
  }
  iVar8 = -1;
LAB_001009a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}



void dtls1_shutdown(void)

{
  ssl3_shutdown();
  return;
}



long dtls1_min_mtu(SSL *param_1)

{
  BIO *bp;
  ulong uVar1;
  
  bp = SSL_get_wbio(param_1);
  uVar1 = BIO_ctrl(bp,0x31,0,(void *)0x0);
  return 0x100 - (uVar1 & 0xffffffff);
}



undefined8 dtls1_query_mtu(SSL *param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  BIO *pBVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)((long)param_1[1].tlsext_opaque_prf_input + 0x128);
  if (lVar1 == 0) {
    uVar4 = *(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x130);
    uVar3 = dtls1_min_mtu(param_1);
    if (uVar3 <= uVar4) {
      return 1;
    }
  }
  else {
    pBVar5 = SSL_get_wbio(param_1);
    uVar4 = BIO_ctrl(pBVar5,0x31,0,(void *)0x0);
    pvVar2 = param_1[1].tlsext_opaque_prf_input;
    *(undefined8 *)((long)pvVar2 + 0x128) = 0;
    uVar3 = lVar1 - (uVar4 & 0xffffffff);
    *(ulong *)((long)pvVar2 + 0x130) = uVar3;
    uVar4 = dtls1_min_mtu(param_1);
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar4 = SSL_get_options(param_1);
  if ((uVar4 & 0x1000) == 0) {
    pBVar5 = SSL_get_wbio(param_1);
    uVar4 = BIO_ctrl(pBVar5,0x28,0,(void *)0x0);
    *(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x130) = uVar4;
    uVar3 = dtls1_min_mtu(param_1);
    if (uVar4 < uVar3) {
      pvVar2 = param_1[1].tlsext_opaque_prf_input;
      uVar6 = dtls1_min_mtu(param_1);
      *(undefined8 *)((long)pvVar2 + 0x130) = uVar6;
      lVar1 = *(long *)((long)param_1[1].tlsext_opaque_prf_input + 0x130);
      pBVar5 = SSL_get_wbio(param_1);
      BIO_ctrl(pBVar5,0x2a,lVar1,(void *)0x0);
    }
    return 1;
  }
  return 0;
}



long DTLS_get_data_mtu(SSL *param_1)

{
  int iVar1;
  SSL_CIPHER *pSVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = SSL_get_current_cipher(param_1);
  if (((param_1 != (SSL *)0x0) && (param_1->version == 0)) &&
     (uVar3 = *(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x130),
     pSVar2 != (SSL_CIPHER *)0x0)) {
    iVar1 = ssl_cipher_get_overhead(pSVar2,&local_40,&local_38,&local_30,&local_28);
    if (iVar1 != 0) {
      if (((ulong)param_1->kssl_ctx & 0x100) == 0) {
        local_38 = local_38 + local_40;
      }
      else {
        local_28 = local_28 + local_40;
      }
      if (local_28 + 0xdU < uVar3) {
        uVar3 = (uVar3 - 0xd) - local_28;
        if (local_30 != 0) {
          uVar3 = uVar3 - uVar3 % local_30;
        }
        if (local_38 < uVar3) {
          lVar4 = uVar3 - local_38;
          goto LAB_00101652;
        }
      }
    }
  }
  lVar4 = 0;
LAB_00101652:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void DTLS_set_timer_cb(int *param_1,undefined8 param_2)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x13c) + 0x1d0) = param_2;
  }
  return;
}


