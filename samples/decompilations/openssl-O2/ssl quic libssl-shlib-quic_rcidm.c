
ulong rcid_cmp(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
    uVar1 = (ulong)(*(ulong *)(param_2 + 0x28) < *(ulong *)(param_1 + 0x28));
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * rcidm_create_rcid(long param_1,ulong param_2,char *param_3,byte param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *ptr;
  byte bVar7;
  
  if (((((byte)(*param_3 - 1U) < 0x14) && (param_2 >> 0x3e == 0)) &&
      (lVar6 = ossl_pqueue_num(*(undefined8 *)(param_1 + 0x58)),
      -1 < lVar6 + *(long *)(param_1 + 0x80))) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x40,"ssl/quic/quic_rcidm.c",0x161),
     ptr != (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 8);
    ptr[5] = param_2;
    ptr[2] = uVar3;
    ptr[3] = uVar4;
    *(undefined8 *)((long)ptr + 0x1d) = *(undefined8 *)(param_3 + 0xd);
    bVar7 = (param_4 & 3) * '\x04';
    bVar1 = *(byte *)(ptr + 7);
    *(byte *)(ptr + 7) = bVar1 & 0xf3 | bVar7;
    bVar7 = bVar1 & 0xf0 | bVar7;
    if (param_2 < *(ulong *)(param_1 + 0x50)) {
      puVar2 = *(undefined8 **)(param_1 + 0x70);
      ptr[6] = 0xffffffffffffffff;
      *(byte *)(ptr + 7) = bVar7 | 2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = ptr;
      }
      lVar6 = *(long *)(param_1 + 0x68);
      ptr[1] = puVar2;
      *ptr = 0;
      *(undefined8 **)(param_1 + 0x70) = ptr;
      if (lVar6 == 0) {
        *(undefined8 **)(param_1 + 0x68) = ptr;
      }
      lVar6 = *(long *)(param_1 + 0x80) + _UNK_00100a88;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + __LC1;
      *(long *)(param_1 + 0x80) = lVar6;
      return ptr;
    }
    *(byte *)(ptr + 7) = bVar7;
    iVar5 = ossl_pqueue_push(*(undefined8 *)(param_1 + 0x58),ptr,ptr + 6);
    if (iVar5 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void rcidm_set_preferred_rcid(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_2 == (byte *)0x0) {
    param_1[0x88] = param_1[0x88] & 0xfc | 1;
    return;
  }
  bVar1 = *param_1;
  if ((*param_2 == bVar1) && (bVar1 < 0x15)) {
    iVar3 = memcmp(param_1 + 1,param_2 + 1,(ulong)bVar1);
    if (iVar3 == 0) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xd);
  param_1[0x88] = param_1[0x88] | 3;
  *(undefined8 *)(param_1 + 0xd) = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rcidm_transition_rcid(long param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_2 + 7);
  if ((bVar1 & 3) == param_3) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    bVar3 = (byte)param_3 & 3;
    if ((bVar1 & 3) == 0) {
      ossl_pqueue_remove(*(undefined8 *)(param_1 + 0x58),param_2[6]);
      param_2[6] = 0xffffffffffffffff;
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfc | bVar3;
      if (param_3 != 1) goto LAB_0010023e;
LAB_0010029a:
      *(undefined8 **)(param_1 + 0x60) = param_2;
      return;
    }
    *(byte *)(param_2 + 7) = bVar1 & 0xfc | bVar3;
    if (param_3 == 1) goto LAB_0010029a;
  }
  else {
    if (param_3 == 1) {
      rcidm_transition_rcid(param_1,*(long *)(param_1 + 0x60),2);
      if ((bVar1 & 3) == 0) {
        ossl_pqueue_remove(*(undefined8 *)(param_1 + 0x58),param_2[6]);
        param_2[6] = 0xffffffffffffffff;
      }
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfc | 1;
      goto LAB_0010029a;
    }
    if ((bVar1 & 3) == 0) {
      ossl_pqueue_remove(*(undefined8 *)(param_1 + 0x58),param_2[6]);
      param_2[6] = 0xffffffffffffffff;
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfc | 2;
      goto LAB_0010023e;
    }
    *(byte *)(param_2 + 7) = bVar1 & 0xfc | 2;
  }
  if ((bVar1 & 3) == 1) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
LAB_0010023e:
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  param_2[1] = puVar2;
  *param_2 = 0;
  *(undefined8 **)(param_1 + 0x70) = param_2;
  if (lVar4 == 0) {
    *(undefined8 **)(param_1 + 0x68) = param_2;
  }
  lVar4 = *(long *)(param_1 + 0x80) + _UNK_00100a88;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + __LC1;
  *(long *)(param_1 + 0x80) = lVar4;
  return;
}



void rcidm_update(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 == 0) {
    lVar2 = ossl_pqueue_peek(*(undefined8 *)(param_1 + 0x58));
    if ((lVar2 == 0) || (bVar1 = *(byte *)(lVar2 + 0x38), (bVar1 & 3) == 1)) {
      lVar2 = *(long *)(param_1 + 0x60);
      if (lVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 0x88);
        lVar2 = param_1 + 0x2a;
        if ((bVar1 & 0x14) != 0x10) {
          if ((bVar1 & 0xc) != 8) {
            *(byte *)(param_1 + 0x88) = bVar1 & 0xfc | 1;
            return;
          }
          lVar2 = param_1 + 0x15;
        }
        goto LAB_00100384;
      }
    }
    else {
      if (*(long *)(param_1 + 0x60) != 0) {
        rcidm_transition_rcid(param_1,*(long *)(param_1 + 0x60),2);
      }
      if ((bVar1 & 3) == 0) {
        ossl_pqueue_remove(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar2 + 0x30));
        *(undefined8 *)(lVar2 + 0x30) = 0xffffffffffffffff;
      }
      *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xfc | 1;
      *(long *)(param_1 + 0x60) = lVar2;
    }
  }
  lVar2 = lVar2 + 0x10;
LAB_00100384:
  rcidm_set_preferred_rcid(param_1,lVar2);
  return;
}



void rcidm_tick(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((((*(byte *)(param_1 + 0x88) & 4) != 0) &&
      (((*(long *)(param_1 + 0x48) == 0 || (9999 < *(ulong *)(param_1 + 0x40))) ||
       ((*(byte *)(param_1 + 0x88) & 0x40) != 0)))) &&
     (lVar2 = ossl_pqueue_peek(*(undefined8 *)(param_1 + 0x58)), lVar2 != 0)) {
    bVar1 = *(byte *)(lVar2 + 0x38);
    if ((bVar1 & 3) != 1) {
      if (*(long *)(param_1 + 0x60) != 0) {
        rcidm_transition_rcid(param_1,*(long *)(param_1 + 0x60),2);
      }
      if ((bVar1 & 3) == 0) {
        ossl_pqueue_remove(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar2 + 0x30));
        *(undefined8 *)(lVar2 + 0x30) = 0xffffffffffffffff;
      }
      *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xfc | 1;
      *(long *)(param_1 + 0x60) = lVar2;
    }
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xbf;
    if (*(ulong *)(param_1 + 0x40) < 10000) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      rcidm_update(param_1);
      return;
    }
    *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) % 10000;
  }
  rcidm_update(param_1);
  return;
}



void * ossl_quic_rcidm_new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *ptr;
  long lVar4;
  
  ptr = (void *)CRYPTO_zalloc(0x90,"ssl/quic/quic_rcidm.c",0x11d);
  if (ptr != (void *)0x0) {
    lVar4 = ossl_pqueue_new(0x100000);
    *(long *)((long)ptr + 0x58) = lVar4;
    if (lVar4 != 0) {
      if (param_1 != (undefined8 *)0x0) {
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar1 = *(undefined8 *)((long)param_1 + 0xd);
        *(byte *)((long)ptr + 0x88) = *(byte *)((long)ptr + 0x88) | 8;
        *(undefined8 *)((long)ptr + 0x15) = uVar2;
        *(undefined8 *)((long)ptr + 0x1d) = uVar3;
        *(undefined8 *)((long)ptr + 0x22) = uVar1;
      }
      rcidm_update(ptr);
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void ossl_quic_rcidm_free(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  void *ptr_00;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  CRYPTO_free(*(void **)((long)param_1 + 0x60));
  while (ptr_00 = (void *)ossl_pqueue_pop(*(undefined8 *)((long)param_1 + 0x58)),
        ptr_00 != (void *)0x0) {
    CRYPTO_free(ptr_00);
  }
  ptr = *(undefined8 **)((long)param_1 + 0x68);
  while (ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*ptr;
    CRYPTO_free(ptr);
    ptr = puVar1;
  }
  ossl_pqueue_free(*(undefined8 *)((long)param_1 + 0x58));
  CRYPTO_free(param_1);
  return;
}



void ossl_quic_rcidm_on_handshake_complete(long param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 4) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 4;
  rcidm_tick();
  return;
}



void ossl_quic_rcidm_on_packet_sent(long param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + param_2;
  rcidm_tick();
  return;
}



void ossl_quic_rcidm_request_roll(long param_1)

{
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x40;
  rcidm_tick();
  return;
}



undefined8 ossl_quic_rcidm_add_from_initial(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x88) & 0x24) != 0) {
    return 0;
  }
  lVar1 = rcidm_create_rcid(param_1,0,param_2,0);
  if (lVar1 != 0) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x20;
    rcidm_tick(param_1);
    return 1;
  }
  return 0;
}



undefined8 ossl_quic_rcidm_add_from_server_retry(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x88) & 0x14) != 0) {
    return 0;
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x2a) = *param_2;
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0xd);
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x10;
  *(undefined8 *)(param_1 + 0x37) = uVar1;
  rcidm_tick();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_quic_rcidm_add_from_ncid(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar4 = rcidm_create_rcid(param_1,*param_2,param_2 + 2,2);
  uVar6 = 0;
  if (lVar4 != 0) {
    uVar2 = param_2[1];
    if (*(ulong *)(param_1 + 0x50) < uVar2) {
      lVar4 = *(long *)(param_1 + 0x60);
      if ((lVar4 != 0) && (*(ulong *)(lVar4 + 0x28) < uVar2)) {
        rcidm_transition_rcid(param_1,lVar4,2);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      do {
        puVar5 = (undefined8 *)ossl_pqueue_peek(uVar6);
        while( true ) {
          if ((puVar5 == (undefined8 *)0x0) || (uVar2 <= (ulong)puVar5[5])) {
            *(ulong *)(param_1 + 0x50) = uVar2;
            goto LAB_00100865;
          }
          bVar1 = *(byte *)(puVar5 + 7);
          uVar6 = *(undefined8 *)(param_1 + 0x58);
          if ((bVar1 & 3) == 2) break;
          if ((bVar1 & 3) == 0) {
            ossl_pqueue_remove(uVar6,puVar5[6]);
            uVar6 = *(undefined8 *)(param_1 + 0x58);
            puVar5[6] = 0xffffffffffffffff;
            *(byte *)(puVar5 + 7) = *(byte *)(puVar5 + 7) & 0xfc | 2;
          }
          else {
            *(byte *)(puVar5 + 7) = bVar1 & 0xfc | 2;
            if ((bVar1 & 3) == 1) {
              *(undefined8 *)(param_1 + 0x60) = 0;
            }
          }
          puVar3 = *(undefined8 **)(param_1 + 0x70);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = puVar5;
          }
          lVar4 = *(long *)(param_1 + 0x68);
          puVar5[1] = puVar3;
          *puVar5 = 0;
          *(undefined8 **)(param_1 + 0x70) = puVar5;
          if (lVar4 == 0) {
            *(undefined8 **)(param_1 + 0x68) = puVar5;
          }
          lVar4 = *(long *)(param_1 + 0x80) + _UNK_00100a88;
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + __LC1;
          *(long *)(param_1 + 0x80) = lVar4;
          puVar5 = (undefined8 *)ossl_pqueue_peek(uVar6);
        }
      } while( true );
    }
LAB_00100865:
    rcidm_tick(param_1);
    uVar6 = 1;
  }
  return uVar6;
}



undefined8 ossl_quic_rcidm_pop_retire_seq_num(long param_1,undefined8 *param_2)

{
  undefined1 (*ptr) [16];
  long *plVar1;
  byte bVar2;
  long lVar3;
  
  ptr = *(undefined1 (**) [16])(param_1 + 0x68);
  if (ptr != (undefined1 (*) [16])0x0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(ptr[2] + 8);
    }
    bVar2 = ptr[3][8] & 3;
    if (bVar2 == 1) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else if (bVar2 == 2) {
      lVar3 = *(long *)*ptr;
      plVar1 = *(long **)(*ptr + 8);
      *(long *)(param_1 + 0x68) = lVar3;
      if (ptr == *(undefined1 (**) [16])(param_1 + 0x70)) {
        *(long **)(param_1 + 0x70) = plVar1;
      }
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar3;
        lVar3 = *(long *)*ptr;
      }
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar1;
      }
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
      *ptr = (undefined1  [16])0x0;
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
    }
    else if (bVar2 == 0) {
      ossl_pqueue_remove(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)ptr[3]);
    }
    CRYPTO_free(ptr);
    return 1;
  }
  return 0;
}



undefined8 ossl_quic_rcidm_peek_retire_seq_num(long param_1,undefined8 *param_2)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28);
    }
    return 1;
  }
  return 0;
}



bool ossl_quic_rcidm_get_preferred_tx_dcid(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = (*(byte *)(param_1 + 0x11) & 2) != 0;
  if (bVar2) {
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    *(undefined8 *)((long)param_2 + 0xd) = *(undefined8 *)((long)param_1 + 0xd);
  }
  return bVar2;
}



byte ossl_quic_rcidm_get_preferred_tx_dcid_changed(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x88);
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x88) = bVar1 & 0xfe;
  }
  return bVar1 & 1;
}



undefined8 ossl_quic_rcidm_get_num_retiring(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



long ossl_quic_rcidm_get_num_active(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ossl_pqueue_num(*(undefined8 *)(param_1 + 0x58));
  lVar1 = *(long *)(param_1 + 0x60);
  lVar3 = ossl_quic_rcidm_get_num_retiring(param_1);
  return lVar3 + lVar2 + (ulong)(lVar1 != 0);
}


