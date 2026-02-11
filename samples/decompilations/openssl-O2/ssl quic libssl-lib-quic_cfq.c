
ulong compare(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(uint *)(param_2 + 0x4c) <= *(uint *)(param_1 + 0x4c)) &&
     (uVar1 = 1, *(uint *)(param_1 + 0x4c) <= *(uint *)(param_2 + 0x4c))) {
    uVar1 = 0xffffffff;
    if (*(uint *)(param_1 + 0x48) <= *(uint *)(param_2 + 0x48)) {
      uVar1 = (ulong)(*(uint *)(param_1 + 0x48) < *(uint *)(param_2 + 0x48));
    }
  }
  return uVar1;
}



void list_insert_sorted_constprop_0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *param_1 = param_2;
    param_1[1] = param_2;
    *(undefined1 (*) [16])(param_2 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  lVar2 = lVar1;
  lVar4 = 0;
  while ((lVar3 = lVar2, *(uint *)(lVar3 + 0x4c) < *(uint *)(param_2 + 0x4c) ||
         ((*(uint *)(lVar3 + 0x4c) <= *(uint *)(param_2 + 0x4c) &&
          (*(uint *)(param_2 + 0x48) < *(uint *)(lVar3 + 0x48)))))) {
    lVar2 = *(long *)(lVar3 + 0x18);
    lVar4 = lVar3;
    if (*(long *)(lVar3 + 0x18) == 0) {
      lVar1 = param_1[1];
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(long *)(param_2 + 0x10) = lVar1;
      param_1[1] = param_2;
      if (lVar1 == 0) {
        return;
      }
      *(long *)(lVar1 + 0x18) = param_2;
      return;
    }
  }
  lVar2 = param_1[1];
  if (lVar4 == 0) {
    *(long *)(param_2 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *param_1 = param_2;
    *(long *)(lVar1 + 0x10) = param_2;
    if (lVar2 == 0) goto LAB_001000f8;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x18);
    *(long *)(param_2 + 0x10) = lVar4;
    *(long *)(param_2 + 0x18) = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = param_2;
    }
    *(long *)(lVar4 + 0x18) = param_2;
    if (lVar2 == lVar4) {
LAB_001000f8:
      param_1[1] = param_2;
      return;
    }
  }
  return;
}



void free_list_items_isra_0(void *param_1)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  do {
    pvVar1 = *(void **)((long)param_1 + 0x18);
    if (*(code **)((long)param_1 + 0x28) != (code *)0x0) {
      (**(code **)((long)param_1 + 0x28))
                (*(undefined8 *)((long)param_1 + 0x20),*(undefined8 *)((long)param_1 + 0x40),
                 *(undefined8 *)((long)param_1 + 0x30));
      *(undefined8 *)((long)param_1 + 0x28) = 0;
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      *(undefined8 *)((long)param_1 + 0x40) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
    CRYPTO_free(param_1);
    param_1 = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}



undefined8 ossl_quic_cfq_item_get_frame_type(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 ossl_quic_cfq_item_get_encoded(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 ossl_quic_cfq_item_get_encoded_len(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined4 ossl_quic_cfq_item_get_state(long param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



undefined4 ossl_quic_cfq_item_get_pn_space(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



uint ossl_quic_cfq_item_is_unreliable(long param_1)

{
  return *(uint *)(param_1 + 0x50) & 1;
}



void ossl_quic_cfq_new(void)

{
  CRYPTO_zalloc(0x30,"ssl/quic/quic_cfq.c",0xab);
  return;
}



void ossl_quic_cfq_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    free_list_items_isra_0(*param_1);
    free_list_items_isra_0(param_1[2]);
    free_list_items_isra_0(param_1[4]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long ossl_quic_cfq_add_frame
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar2 = CRYPTO_zalloc(0x58,"ssl/quic/quic_cfq.c",0xdd);
    if (lVar2 == 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(long *)(lVar2 + 0x10) = lVar4;
    *(long *)(param_1 + 0x28) = lVar2;
    lVar3 = 0;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x18) = lVar2;
      lVar3 = *(long *)(lVar2 + 0x18);
    }
    lVar1 = *(long *)(param_1 + 0x20);
    lVar5 = lVar2;
    if (lVar1 == 0) goto LAB_001002ad;
    *(undefined4 *)(lVar2 + 0x48) = param_2;
    *(undefined8 *)(lVar2 + 0x38) = param_4;
    *(undefined8 *)(lVar2 + 0x40) = param_7;
    *(undefined4 *)(lVar2 + 0x4c) = param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_8;
    *(undefined8 *)(lVar2 + 0x20) = param_6;
    *(undefined8 *)(lVar2 + 0x30) = param_9;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined4 *)(lVar2 + 0x50) = param_5;
    if (lVar2 == lVar1) {
      *(long *)(param_1 + 0x20) = lVar3;
    }
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x18);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(lVar5 + 0x10);
LAB_001002ad:
    *(undefined4 *)(lVar5 + 0x48) = param_2;
    *(undefined8 *)(lVar5 + 0x38) = param_4;
    *(undefined8 *)(lVar5 + 0x40) = param_7;
    *(undefined4 *)(lVar5 + 0x4c) = param_3;
    *(undefined8 *)(lVar5 + 0x28) = param_8;
    *(undefined8 *)(lVar5 + 0x20) = param_6;
    *(undefined8 *)(lVar5 + 0x30) = param_9;
    *(undefined4 *)(lVar5 + 0x54) = 0;
    *(undefined4 *)(lVar5 + 0x50) = param_5;
    *(long *)(param_1 + 0x20) = lVar3;
    bVar6 = lVar2 != lVar5;
    lVar2 = lVar5;
    if (bVar6) goto LAB_001002ef;
  }
  *(long *)(param_1 + 0x28) = lVar4;
LAB_001002ef:
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = lVar3;
    lVar3 = *(long *)(lVar2 + 0x18);
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = lVar4;
  }
  *(undefined1 (*) [16])(lVar2 + 0x10) = (undefined1  [16])0x0;
  list_insert_sorted_constprop_0(param_1);
  return lVar2;
}



void ossl_quic_cfq_mark_tx(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x54) != 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  if (param_2 == *param_1) {
    *param_1 = lVar2;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  if (param_2 == param_1[1]) {
    param_1[1] = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = lVar2;
    lVar2 = *(long *)(param_2 + 0x18);
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  lVar2 = param_1[3];
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(long *)(param_2 + 0x10) = lVar2;
  param_1[3] = param_2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_2;
  }
  if (param_1[2] == 0) {
    param_1[2] = param_2;
  }
  *(undefined4 *)(param_2 + 0x54) = 1;
  return;
}



void ossl_quic_cfq_release(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x54) == 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    if (param_2 == *param_1) {
      *param_1 = lVar1;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (param_2 == param_1[1]) {
      param_1[1] = lVar2;
    }
  }
  else {
    if (*(int *)(param_2 + 0x54) != 1) {
      return;
    }
    lVar1 = *(long *)(param_2 + 0x18);
    if (param_2 == param_1[2]) {
      param_1[2] = lVar1;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (param_2 == param_1[3]) {
      param_1[3] = lVar2;
    }
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = lVar1;
    lVar1 = *(long *)(param_2 + 0x18);
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = lVar2;
  }
  lVar1 = param_1[5];
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(long *)(param_2 + 0x10) = lVar1;
  param_1[5] = param_2;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_2;
  }
  if (param_1[4] == 0) {
    param_1[4] = param_2;
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))
              (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x40),
               *(undefined8 *)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
  return;
}



void ossl_quic_cfq_mark_lost(long *param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = ossl_quic_cfq_item_is_unreliable(param_2);
  if (iVar2 != 0) {
    ossl_quic_cfq_release(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x54) == 0) {
    if ((param_3 != -1) && (*(int *)(param_2 + 0x48) != param_3)) {
      lVar3 = *(long *)(param_2 + 0x18);
      if (param_2 == *param_1) {
        *param_1 = lVar3;
      }
      lVar1 = *(long *)(param_2 + 0x10);
      if (param_2 == param_1[1]) {
        param_1[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar3;
        lVar3 = *(long *)(param_2 + 0x18);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar1;
      }
      *(int *)(param_2 + 0x48) = param_3;
      *(undefined1 (*) [16])(param_2 + 0x10) = (undefined1  [16])0x0;
      list_insert_sorted_constprop_0(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_2 + 0x54) == 1) {
    if (param_3 != -1) {
      *(int *)(param_2 + 0x48) = param_3;
    }
    lVar3 = *(long *)(param_2 + 0x18);
    if (param_2 == param_1[2]) {
      param_1[2] = lVar3;
    }
    lVar1 = *(long *)(param_2 + 0x10);
    if (param_2 == param_1[3]) {
      param_1[3] = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x18) = lVar3;
      lVar3 = *(long *)(param_2 + 0x18);
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar1;
    }
    *(undefined1 (*) [16])(param_2 + 0x10) = (undefined1  [16])0x0;
    list_insert_sorted_constprop_0(param_1,param_2);
    *(undefined4 *)(param_2 + 0x54) = 0;
    return;
  }
  return;
}



void ossl_quic_cfq_get_priority_head(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  do {
    if (*(int *)(lVar1 + 0x4c) == param_2) {
      return;
    }
    lVar1 = *(long *)(lVar1 + 0x18);
  } while (lVar1 != 0);
  return;
}



long ossl_quic_cfq_item_get_priority_next(long param_1,int param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
      return lVar1;
    }
    do {
      if (*(int *)(lVar1 + 0x4c) == param_2) {
        return lVar1;
      }
      lVar1 = *(long *)(lVar1 + 0x18);
    } while (lVar1 != 0);
  }
  return lVar1;
}


