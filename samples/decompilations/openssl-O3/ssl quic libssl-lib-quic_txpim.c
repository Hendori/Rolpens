
ulong compare(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if ((*param_2 <= *param_1) && (uVar1 = 1, *param_1 <= *param_2)) {
    uVar1 = 0xffffffff;
    if (param_2[1] <= param_1[1]) {
      uVar1 = (ulong)(param_2[1] < param_1[1]);
    }
  }
  return uVar1;
}



void ossl_quic_txpim_new(void)

{
  CRYPTO_zalloc(0x18,"ssl/quic/quic_txpim.c",0x24);
  return;
}



void ossl_quic_txpim_free(undefined1 (*param_1) [16])

{
  void *pvVar1;
  void *ptr;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  ptr = *(void **)*param_1;
  while (ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)ptr + 0x88);
    CRYPTO_free(*(void **)((long)ptr + 0x90));
    CRYPTO_free(ptr);
    ptr = pvVar1;
  }
  *param_1 = (undefined1  [16])0x0;
  CRYPTO_free(param_1);
  return;
}



void ossl_quic_txpim_pkt_release(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  param_1[2] = param_1[2] + -1;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(long *)(param_2 + 0x80) = lVar1;
  param_1[1] = param_2;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x88) = param_2;
  }
  if (*param_1 != 0) {
    return;
  }
  *param_1 = param_2;
  return;
}



void ossl_quic_txpim_pkt_add_cfq_item(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *param_2 = 0;
  param_2[1] = uVar1;
  *(undefined8 **)(param_1 + 0x68) = param_2;
  return;
}



void ossl_quic_txpim_pkt_clear_chunks(long param_1)

{
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



undefined8 * ossl_quic_txpim_pkt_alloc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)CRYPTO_zalloc(0xb0,"ssl/quic/quic_txpim.c",99);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3[0x11] = 0;
    lVar2 = param_1[1];
    param_1[1] = (long)puVar3;
    puVar3[0x10] = lVar2;
    if (lVar2 != 0) {
      *(undefined8 **)(lVar2 + 0x88) = puVar3;
    }
    if (*param_1 == 0) {
      *param_1 = (long)puVar3;
    }
  }
  *puVar3 = 0;
  puVar3[0xc] = 0;
  puVar5 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)puVar3 - (int)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8))
                       + 0x68U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  ossl_quic_txpim_pkt_clear_chunks(puVar3);
  *(byte *)((long)puVar3 + 0x79) = *(byte *)((long)puVar3 + 0x79) & 0xc0;
  lVar2 = puVar3[0x11];
  *(undefined1 (*) [16])(puVar3 + 0xd) = (undefined1  [16])0x0;
  if ((undefined8 *)*param_1 == puVar3) {
    *param_1 = lVar2;
  }
  lVar1 = puVar3[0x10];
  if ((undefined8 *)param_1[1] == puVar3) {
    param_1[1] = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x88) = lVar2;
    lVar2 = puVar3[0x11];
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = lVar1;
  }
  *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
  param_1[2] = param_1[2] + 1;
  return puVar3;
}



undefined8 ossl_quic_txpim_pkt_append_chunk(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x98);
  if (uVar5 == *(ulong *)(param_1 + 0xa0)) {
    uVar6 = 4;
    if (uVar5 != 0) {
      uVar6 = (uVar5 * 8) / 5;
      if (0x200 < uVar6) {
        uVar6 = 0x200;
      }
      if (uVar5 == uVar6) {
        return 0;
      }
    }
    pvVar4 = CRYPTO_realloc(*(void **)(param_1 + 0x90),(int)(uVar6 << 5),"ssl/quic/quic_txpim.c",
                            0xac);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    *(void **)(param_1 + 0x90) = pvVar4;
    uVar5 = *(ulong *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0xa0) = uVar6;
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x90);
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)((long)pvVar4 + uVar5 * 0x20);
  *(ulong *)(param_1 + 0x98) = uVar5 + 1;
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  uVar1 = param_2[3];
  puVar3[2] = param_2[2];
  puVar3[3] = uVar1;
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | 1;
  return 1;
}



undefined8 ossl_quic_txpim_pkt_get_chunks(long param_1)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    return *(undefined8 *)(param_1 + 0x90);
  }
  qsort(*(void **)(param_1 + 0x90),*(size_t *)(param_1 + 0x98),0x20,compare);
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfe;
  return *(undefined8 *)(param_1 + 0x90);
}



undefined8 ossl_quic_txpim_pkt_get_num_chunks(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



undefined8 ossl_quic_txpim_get_in_use(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


