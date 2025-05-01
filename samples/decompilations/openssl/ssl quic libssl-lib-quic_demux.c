
undefined8 demux_ensure_free_urxe(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_2 <= *(ulong *)(param_1 + 0x50)) {
    return 1;
  }
  while ((uVar1 = *(ulong *)(param_1 + 0x10), uVar1 < 0xfffffffffffffed7 &&
         (puVar4 = (undefined8 *)CRYPTO_malloc((int)uVar1 + 0x128,"ssl/quic/quic_demux.c",0xa2),
         puVar4 != (undefined8 *)0x0))) {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar4[3] = uVar1;
    puVar4[2] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = puVar4;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    puVar4[1] = puVar2;
    *puVar4 = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar4;
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x40) = puVar4;
      *(undefined1 *)((long)puVar4 + 0x121) = 0;
      uVar1 = lVar3 + 1;
      *(ulong *)(param_1 + 0x50) = uVar1;
      if (param_2 <= uVar1) {
        return 1;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
      *(undefined1 *)((long)puVar4 + 0x121) = 0;
      uVar1 = lVar3 + 1;
      *(ulong *)(param_1 + 0x50) = uVar1;
      if (param_2 <= uVar1) {
        return 1;
      }
    }
  }
  return 0;
}



long * demux_resize_urxe(long param_1,undefined1 (*param_2) [16],long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2[0x12][1] != '\0') {
    return (long *)0x0;
  }
  plVar1 = *(long **)(*param_2 + 8);
  lVar3 = *(long *)*param_2;
  if (param_2 == *(undefined1 (**) [16])(param_1 + 0x40)) {
    *(long *)(param_1 + 0x40) = lVar3;
  }
  if (param_2 == *(undefined1 (**) [16])(param_1 + 0x48)) {
    *(long **)(param_1 + 0x48) = plVar1;
  }
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar3;
    lVar3 = *(long *)*param_2;
  }
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  *param_2 = (undefined1  [16])0x0;
  plVar4 = (long *)CRYPTO_realloc(param_2,(int)param_3 + 0x128,"ssl/quic/quic_demux.c",0xb8);
  if (plVar4 == (long *)0x0) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != 0) {
        *(undefined1 (**) [16])(lVar3 + 8) = param_2;
      }
      lVar2 = *(long *)(param_1 + 0x48);
      *(long *)*param_2 = lVar3;
      *(undefined8 *)(*param_2 + 8) = 0;
      *(undefined1 (**) [16])(param_1 + 0x40) = param_2;
      if (lVar2 != 0) goto LAB_0010023e;
    }
    else {
      lVar3 = *plVar1;
      *(long *)*param_2 = lVar3;
      *(long **)(*param_2 + 8) = plVar1;
      if (lVar3 != 0) {
        *(undefined1 (**) [16])(lVar3 + 8) = param_2;
      }
      *plVar1 = (long)param_2;
      if (plVar1 != *(long **)(param_1 + 0x48)) goto LAB_0010023e;
    }
    *(undefined1 (**) [16])(param_1 + 0x48) = param_2;
LAB_0010023e:
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    return (long *)0x0;
  }
  if (plVar1 == (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar4;
    }
    lVar2 = *(long *)(param_1 + 0x48);
    *plVar4 = lVar3;
    plVar4[1] = 0;
    *(long **)(param_1 + 0x40) = plVar4;
    if (lVar2 != 0) goto LAB_0010019f;
  }
  else {
    lVar3 = *plVar1;
    *plVar4 = lVar3;
    plVar4[1] = (long)plVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar4;
    }
    *plVar1 = (long)plVar4;
    if (plVar1 != *(long **)(param_1 + 0x48)) goto LAB_0010019f;
  }
  *(long **)(param_1 + 0x48) = plVar4;
LAB_0010019f:
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  plVar4[3] = param_3;
  return plVar4;
}



undefined8 demux_recv(long *param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  long lVar11;
  long in_FS_OFFSET;
  ulong local_540;
  undefined1 local_538 [8];
  undefined8 auStack_530 [160];
  long local_30;
  
  puVar6 = (undefined8 *)param_1[8];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
LAB_001004cd:
    uVar7 = 0xffffffff;
  }
  else {
    if (puVar6 != (undefined8 *)0x0) {
      pauVar10 = (undefined1 (*) [16])local_538;
      lVar4 = 0;
      do {
        lVar11 = lVar4;
        if (((ulong)puVar6[3] < (ulong)param_1[2]) &&
           (puVar6 = (undefined8 *)demux_resize_urxe(param_1,puVar6), puVar6 == (undefined8 *)0x0))
        goto LAB_00100515;
        *(undefined8 *)pauVar10[2] = 0;
        *pauVar10 = (undefined1  [16])0x0;
        pauVar10[1] = (undefined1  [16])0x0;
        *(undefined8 **)*pauVar10 = puVar6 + 0x25;
        uVar7 = puVar6[3];
        *(undefined8 **)pauVar10[1] = puVar6 + 7;
        *(undefined8 *)(*pauVar10 + 8) = uVar7;
        BIO_ADDR_clear();
        if ((char)param_1[0xe] == '\0') {
          BIO_ADDR_clear(puVar6 + 0x15);
          puVar6 = (undefined8 *)*puVar6;
        }
        else {
          puVar1 = puVar6 + 0x15;
          puVar6 = (undefined8 *)*puVar6;
          *(undefined8 **)(pauVar10[1] + 8) = puVar1;
        }
        if (lVar11 == 0x1f) break;
        pauVar10 = (undefined1 (*) [16])(pauVar10[2] + 8);
        lVar4 = lVar11 + 1;
      } while (puVar6 != (undefined8 *)0x0);
      ERR_set_mark();
      iVar5 = BIO_recvmmsg(*param_1,(undefined1 (*) [16])local_538,0x28,lVar11 + 1,0,&local_540);
      if (iVar5 != 0) {
        ERR_clear_last_mark();
        uVar7 = 0;
        if ((code *)param_1[4] != (code *)0x0) {
          uVar7 = (*(code *)param_1[4])(param_1[5]);
        }
        pauVar10 = (undefined1 (*) [16])param_1[8];
        uVar8 = 0;
        pauVar9 = pauVar10;
        if (local_540 != 0) {
          while( true ) {
            pauVar2 = *(undefined1 (**) [16])*pauVar9;
            uVar3 = auStack_530[uVar8 * 5];
            *(undefined8 *)(pauVar9[0x11] + 8) = uVar7;
            *(undefined8 *)pauVar9[1] = uVar3;
            lVar4 = param_1[3];
            param_1[3] = lVar4 + 1;
            *(long *)pauVar9[3] = lVar4;
            if (pauVar10 == pauVar9) {
              param_1[8] = (long)pauVar2;
              puVar6 = *(undefined8 **)(*pauVar9 + 8);
              pauVar10 = (undefined1 (*) [16])param_1[9];
            }
            else {
              puVar6 = *(undefined8 **)(*pauVar9 + 8);
              pauVar10 = (undefined1 (*) [16])param_1[9];
            }
            if (pauVar10 == pauVar9) {
              param_1[9] = (long)puVar6;
            }
            pauVar10 = pauVar2;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pauVar2;
              pauVar10 = *(undefined1 (**) [16])*pauVar9;
            }
            if (pauVar10 != (undefined1 (*) [16])0x0) {
              *(undefined8 **)(*pauVar10 + 8) = puVar6;
            }
            param_1[10] = param_1[10] + -1;
            *pauVar9 = (undefined1  [16])0x0;
            puVar6 = (undefined8 *)param_1[0xc];
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pauVar9;
            }
            lVar4 = param_1[0xb];
            *(undefined8 **)(*pauVar9 + 8) = puVar6;
            *(undefined8 *)*pauVar9 = 0;
            param_1[0xc] = (long)pauVar9;
            if (lVar4 == 0) {
              param_1[0xb] = (long)pauVar9;
            }
            param_1[0xd] = param_1[0xd] + 1;
            uVar8 = uVar8 + 1;
            pauVar9[0x12][1] = 1;
            if (local_540 <= uVar8) break;
            pauVar10 = (undefined1 (*) [16])param_1[8];
            pauVar9 = pauVar2;
          }
        }
        uVar7 = 1;
        goto LAB_001004d2;
      }
      uVar8 = ERR_peek_last_error();
      iVar5 = BIO_err_is_non_fatal(uVar8 & 0xffffffff);
      if (iVar5 != 0) {
        ERR_pop_to_mark();
        goto LAB_001004cd;
      }
      ERR_clear_last_mark();
    }
LAB_00100515:
    uVar7 = 0xfffffffe;
  }
LAB_001004d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 *
ossl_quic_demux_new(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x78,"ssl/quic/quic_demux.c",0x4e);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = 0x5dc;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    if (param_1 != (BIO *)0x0) {
      lVar2 = BIO_ctrl(param_1,0x52,0,(void *)0x0);
      if ((int)lVar2 != 0) {
        lVar2 = BIO_ctrl(param_1,0x54,1,(void *)0x0);
        if ((int)lVar2 != 0) {
          *(undefined1 *)(puVar1 + 0xe) = 1;
        }
      }
    }
  }
  return puVar1;
}



void ossl_quic_demux_free(void *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  
  if (param_1 == (void *)0x0) {
    return;
  }
  pauVar3 = *(undefined1 (**) [16])((long)param_1 + 0x40);
  pauVar4 = pauVar3;
  if (pauVar3 != (undefined1 (*) [16])0x0) {
    while( true ) {
      pauVar1 = *(undefined1 (**) [16])*pauVar4;
      if (pauVar3 == pauVar4) {
        *(undefined1 (**) [16])((long)param_1 + 0x40) = pauVar1;
      }
      puVar2 = *(undefined8 **)(*pauVar4 + 8);
      if (*(undefined1 (**) [16])((long)param_1 + 0x48) == pauVar4) {
        *(undefined8 **)((long)param_1 + 0x48) = puVar2;
      }
      pauVar3 = pauVar1;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
        pauVar3 = *(undefined1 (**) [16])*pauVar4;
      }
      if (pauVar3 == (undefined1 (*) [16])0x0) {
        *(long *)((long)param_1 + 0x50) = *(long *)((long)param_1 + 0x50) + -1;
        *pauVar4 = (undefined1  [16])0x0;
      }
      else {
        *(undefined8 **)(*pauVar3 + 8) = puVar2;
        *(long *)((long)param_1 + 0x50) = *(long *)((long)param_1 + 0x50) + -1;
        *pauVar4 = (undefined1  [16])0x0;
      }
      CRYPTO_free(pauVar4);
      if (pauVar1 == (undefined1 (*) [16])0x0) break;
      pauVar3 = *(undefined1 (**) [16])((long)param_1 + 0x40);
      pauVar4 = pauVar1;
    }
  }
  pauVar3 = *(undefined1 (**) [16])((long)param_1 + 0x58);
  pauVar4 = pauVar3;
  if (pauVar3 != (undefined1 (*) [16])0x0) {
    while( true ) {
      pauVar1 = *(undefined1 (**) [16])*pauVar4;
      if (pauVar4 == pauVar3) {
        *(undefined1 (**) [16])((long)param_1 + 0x58) = pauVar1;
        puVar2 = *(undefined8 **)(*pauVar4 + 8);
        pauVar3 = *(undefined1 (**) [16])((long)param_1 + 0x60);
      }
      else {
        puVar2 = *(undefined8 **)(*pauVar4 + 8);
        pauVar3 = *(undefined1 (**) [16])((long)param_1 + 0x60);
      }
      if (pauVar3 == pauVar4) {
        *(undefined8 **)((long)param_1 + 0x60) = puVar2;
      }
      pauVar3 = pauVar1;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
        pauVar3 = *(undefined1 (**) [16])*pauVar4;
      }
      if (pauVar3 == (undefined1 (*) [16])0x0) {
        *(long *)((long)param_1 + 0x68) = *(long *)((long)param_1 + 0x68) + -1;
        *pauVar4 = (undefined1  [16])0x0;
      }
      else {
        *(undefined8 **)(*pauVar3 + 8) = puVar2;
        *(long *)((long)param_1 + 0x68) = *(long *)((long)param_1 + 0x68) + -1;
        *pauVar4 = (undefined1  [16])0x0;
      }
      CRYPTO_free(pauVar4);
      if (pauVar1 == (undefined1 (*) [16])0x0) break;
      pauVar3 = *(undefined1 (**) [16])((long)param_1 + 0x58);
      pauVar4 = pauVar1;
    }
  }
  CRYPTO_free(param_1);
  return;
}



bool ossl_quic_demux_set_mtu(long param_1,uint param_2)

{
  if (0x4af < param_2) {
    *(ulong *)(param_1 + 0x10) = (ulong)param_2;
  }
  return 0x4af < param_2;
}



void ossl_quic_demux_set_bio(undefined8 *param_1,BIO *param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  if (param_2 != (BIO *)0x0) {
    uVar1 = BIO_ctrl(param_2,0x29,0,(void *)0x0);
    if (0x4af < (uint)uVar1) {
      ossl_quic_demux_set_mtu(param_1,uVar1 & 0xffffffff);
      return;
    }
  }
  return;
}



void ossl_quic_demux_set_default_handler(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



undefined8 ossl_quic_demux_pump(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 (*pauVar9) [16];
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  pauVar9 = *(undefined1 (**) [16])(param_1 + 0x58);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (pauVar9 == (undefined1 (*) [16])0x0) {
    iVar5 = demux_ensure_free_urxe(param_1,0x20);
    if (iVar5 == 1) {
      uVar6 = demux_recv(param_1);
      if ((int)uVar6 == 1) {
        pauVar9 = *(undefined1 (**) [16])(param_1 + 0x58);
        goto joined_r0x001008e3;
      }
    }
    else {
      uVar6 = 0xfffffffe;
    }
  }
  else {
    do {
      while( true ) {
        iVar5 = ossl_quic_wire_get_pkt_hdr_dst_conn_id
                          (pauVar9[0x12] + 8,*(undefined8 *)pauVar9[1],*(undefined8 *)(param_1 + 8),
                           auStack_38);
        lVar7 = *(long *)*pauVar9;
        if (pauVar9 == *(undefined1 (**) [16])(param_1 + 0x58)) {
          *(long *)(param_1 + 0x58) = lVar7;
          plVar2 = *(long **)(*pauVar9 + 8);
          pauVar3 = *(undefined1 (**) [16])(param_1 + 0x60);
        }
        else {
          plVar2 = *(long **)(*pauVar9 + 8);
          pauVar3 = *(undefined1 (**) [16])(param_1 + 0x60);
        }
        if (pauVar9 == pauVar3) {
          *(long **)(param_1 + 0x60) = plVar2;
        }
        if (plVar2 != (long *)0x0) {
          *plVar2 = lVar7;
          lVar7 = *(long *)*pauVar9;
        }
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar2;
        }
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
        *pauVar9 = (undefined1  [16])0x0;
        pcVar1 = *(code **)(param_1 + 0x30);
        if (pcVar1 != (code *)0x0) break;
        puVar4 = *(undefined8 **)(param_1 + 0x48);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = pauVar9;
        }
        lVar7 = *(long *)(param_1 + 0x40);
        *(undefined8 **)(*pauVar9 + 8) = puVar4;
        *(undefined8 *)*pauVar9 = 0;
        *(undefined1 (**) [16])(param_1 + 0x48) = pauVar9;
        if (lVar7 == 0) {
          *(undefined1 (**) [16])(param_1 + 0x40) = pauVar9;
        }
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        pauVar9[0x12][1] = 0;
        pauVar9 = *(undefined1 (**) [16])(param_1 + 0x58);
        if (pauVar9 == (undefined1 (*) [16])0x0) goto LAB_00100897;
      }
      pauVar9[0x12][1] = 2;
      puVar8 = (undefined1 *)0x0;
      if (iVar5 != 0) {
        puVar8 = auStack_38;
      }
      (*pcVar1)(pauVar9,*(undefined8 *)(param_1 + 0x38),puVar8);
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x58);
joined_r0x001008e3:
    } while (pauVar9 != (undefined1 (*) [16])0x0);
LAB_00100897:
    uVar6 = 1;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8
ossl_quic_demux_inject
          (long param_1,void *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = demux_ensure_free_urxe(param_1,1);
  if (iVar4 == 1) {
    pauVar7 = *(undefined1 (**) [16])(param_1 + 0x40);
    uVar10 = 1;
    if ((param_3 <= *(ulong *)(pauVar7[1] + 8)) ||
       (pauVar7 = (undefined1 (*) [16])demux_resize_urxe(param_1,pauVar7,param_3),
       pauVar7 != (undefined1 (*) [16])0x0)) {
      memcpy(pauVar7[0x12] + 8,param_2,param_3);
      *(ulong *)pauVar7[1] = param_3;
      if (param_4 == (undefined8 *)0x0) {
        BIO_ADDR_clear(pauVar7[3] + 8);
      }
      else {
        uVar5 = param_4[1];
        *(undefined8 *)(pauVar7[3] + 8) = *param_4;
        *(undefined8 *)pauVar7[4] = uVar5;
        uVar5 = param_4[3];
        *(undefined8 *)(pauVar7[4] + 8) = param_4[2];
        *(undefined8 *)pauVar7[5] = uVar5;
        uVar5 = param_4[5];
        *(undefined8 *)(pauVar7[5] + 8) = param_4[4];
        *(undefined8 *)pauVar7[6] = uVar5;
        uVar5 = param_4[7];
        *(undefined8 *)(pauVar7[6] + 8) = param_4[6];
        *(undefined8 *)pauVar7[7] = uVar5;
        uVar5 = param_4[9];
        *(undefined8 *)(pauVar7[7] + 8) = param_4[8];
        *(undefined8 *)pauVar7[8] = uVar5;
        uVar5 = param_4[0xb];
        *(undefined8 *)(pauVar7[8] + 8) = param_4[10];
        *(undefined8 *)pauVar7[9] = uVar5;
        uVar5 = param_4[0xd];
        *(undefined8 *)(pauVar7[9] + 8) = param_4[0xc];
        *(undefined8 *)pauVar7[10] = uVar5;
      }
      if (param_5 == (undefined8 *)0x0) {
        BIO_ADDR_clear(pauVar7[10] + 8);
      }
      else {
        uVar5 = param_5[1];
        *(undefined8 *)(pauVar7[10] + 8) = *param_5;
        *(undefined8 *)pauVar7[0xb] = uVar5;
        uVar5 = param_5[3];
        *(undefined8 *)(pauVar7[0xb] + 8) = param_5[2];
        *(undefined8 *)pauVar7[0xc] = uVar5;
        uVar5 = param_5[5];
        *(undefined8 *)(pauVar7[0xc] + 8) = param_5[4];
        *(undefined8 *)pauVar7[0xd] = uVar5;
        uVar5 = param_5[7];
        *(undefined8 *)(pauVar7[0xd] + 8) = param_5[6];
        *(undefined8 *)pauVar7[0xe] = uVar5;
        uVar5 = param_5[9];
        *(undefined8 *)(pauVar7[0xe] + 8) = param_5[8];
        *(undefined8 *)pauVar7[0xf] = uVar5;
        uVar5 = param_5[0xb];
        *(undefined8 *)(pauVar7[0xf] + 8) = param_5[10];
        *(undefined8 *)pauVar7[0x10] = uVar5;
        uVar5 = param_5[0xd];
        *(undefined8 *)(pauVar7[0x10] + 8) = param_5[0xc];
        *(undefined8 *)pauVar7[0x11] = uVar5;
      }
      if (*(code **)(param_1 + 0x20) == (code *)0x0) {
        *(undefined8 *)(pauVar7[0x11] + 8) = 0;
      }
      else {
        uVar5 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
        *(undefined8 *)(pauVar7[0x11] + 8) = uVar5;
      }
      lVar6 = *(long *)*pauVar7;
      if (pauVar7 == *(undefined1 (**) [16])(param_1 + 0x40)) {
        *(long *)(param_1 + 0x40) = lVar6;
      }
      plVar1 = *(long **)(*pauVar7 + 8);
      if (pauVar7 == *(undefined1 (**) [16])(param_1 + 0x48)) {
        *(long **)(param_1 + 0x48) = plVar1;
      }
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar6;
        lVar6 = *(long *)*pauVar7;
      }
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar1;
      }
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
      *pauVar7 = (undefined1  [16])0x0;
      lVar6 = *(long *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar6 + 1;
      *(long *)pauVar7[3] = lVar6;
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar7;
      }
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x58);
      *(undefined8 **)(*pauVar7 + 8) = puVar2;
      *(undefined8 *)*pauVar7 = 0;
      *(undefined1 (**) [16])(param_1 + 0x60) = pauVar7;
      if (pauVar9 == (undefined1 (*) [16])0x0) {
        lVar6 = *(long *)(param_1 + 0x68);
        *(undefined1 (**) [16])(param_1 + 0x58) = pauVar7;
        pauVar9 = pauVar7;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x68);
      }
      *(long *)(param_1 + 0x68) = lVar6 + 1;
      pauVar7[0x12][1] = 1;
      do {
        iVar4 = ossl_quic_wire_get_pkt_hdr_dst_conn_id
                          (pauVar9[0x12] + 8,*(undefined8 *)pauVar9[1],*(undefined8 *)(param_1 + 8),
                           local_58);
        lVar6 = *(long *)*pauVar9;
        if (pauVar9 == *(undefined1 (**) [16])(param_1 + 0x58)) {
          *(long *)(param_1 + 0x58) = lVar6;
          plVar1 = *(long **)(*pauVar9 + 8);
          pauVar7 = *(undefined1 (**) [16])(param_1 + 0x60);
        }
        else {
          plVar1 = *(long **)(*pauVar9 + 8);
          pauVar7 = *(undefined1 (**) [16])(param_1 + 0x60);
        }
        if (pauVar9 == pauVar7) {
          *(long **)(param_1 + 0x60) = plVar1;
        }
        if (plVar1 != (long *)0x0) {
          *plVar1 = lVar6;
          lVar6 = *(long *)*pauVar9;
        }
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar1;
        }
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
        *pauVar9 = (undefined1  [16])0x0;
        pcVar3 = *(code **)(param_1 + 0x30);
        if (pcVar3 == (code *)0x0) {
          puVar2 = *(undefined8 **)(param_1 + 0x48);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = pauVar9;
          }
          lVar6 = *(long *)(param_1 + 0x40);
          *(undefined8 **)(*pauVar9 + 8) = puVar2;
          *(undefined8 *)*pauVar9 = 0;
          *(undefined1 (**) [16])(param_1 + 0x48) = pauVar9;
          if (lVar6 == 0) {
            *(undefined1 (**) [16])(param_1 + 0x40) = pauVar9;
          }
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          pauVar9[0x12][1] = 0;
        }
        else {
          pauVar9[0x12][1] = 2;
          puVar8 = (undefined1 *)0x0;
          if (iVar4 != 0) {
            puVar8 = local_58;
          }
          (*pcVar3)(pauVar9,*(undefined8 *)(param_1 + 0x38),puVar8);
        }
        pauVar9 = *(undefined1 (**) [16])(param_1 + 0x58);
      } while (pauVar9 != (undefined1 (*) [16])0x0);
      goto LAB_00100945;
    }
  }
  uVar10 = 0;
LAB_00100945:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_demux_release_urxe(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  param_2[1] = puVar1;
  *param_2 = 0;
  *(undefined8 **)(param_1 + 0x48) = param_2;
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    *(undefined1 *)((long)param_2 + 0x121) = 0;
    return;
  }
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  *(undefined8 **)(param_1 + 0x40) = param_2;
  *(undefined1 *)((long)param_2 + 0x121) = 0;
  return;
}



void ossl_quic_demux_reinject_urxe(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = param_2;
  }
  lVar2 = *(long *)(param_1 + 0x60);
  *param_2 = lVar1;
  param_2[1] = 0;
  *(long **)(param_1 + 0x58) = param_2;
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    *(undefined1 *)((long)param_2 + 0x121) = 1;
    return;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  *(long **)(param_1 + 0x60) = param_2;
  *(undefined1 *)((long)param_2 + 0x121) = 1;
  return;
}



bool ossl_quic_demux_has_pending(long param_1)

{
  return *(long *)(param_1 + 0x58) != 0;
}


