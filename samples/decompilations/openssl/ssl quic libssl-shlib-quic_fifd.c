
void on_discarded(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x68);
  while (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 8);
    ossl_quic_cfq_release(*puVar1,lVar3);
    lVar3 = lVar2;
  }
  ossl_quic_txpim_pkt_release(puVar1[2],param_1);
  return;
}



void on_acked(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  plVar4 = (long *)ossl_quic_txpim_pkt_get_chunks();
  lVar5 = ossl_quic_txpim_pkt_get_num_chunks(param_1);
  if (lVar5 != 0) {
    do {
      lVar6 = (*(code *)puVar1[3])(*plVar4,*(byte *)(param_1 + 0x20) & 3,puVar1[4]);
      if (lVar6 != 0) {
        if ((ulong)plVar4[1] <= (ulong)plVar4[2]) {
          ossl_quic_sstream_mark_acked(lVar6);
        }
        bVar2 = *(byte *)(plVar4 + 3);
        if (((bVar2 & 1) != 0) && (*plVar4 != -1)) {
          ossl_quic_sstream_mark_acked_fin(lVar6);
          bVar2 = *(byte *)(plVar4 + 3);
        }
        if ((bVar2 & 2) == 0) {
LAB_001000cd:
          if (((bVar2 & 4) != 0) && (*plVar4 != -1)) {
            (*(code *)puVar1[7])(4,*plVar4,param_1,puVar1[8]);
          }
        }
        else if (*plVar4 != -1) {
          (*(code *)puVar1[7])(5,*plVar4,param_1,puVar1[8]);
          bVar2 = *(byte *)(plVar4 + 3);
          goto LAB_001000cd;
        }
        iVar3 = ossl_quic_sstream_is_totally_acked(lVar6);
        if (iVar3 != 0) {
          (*(code *)puVar1[9])(*plVar4,puVar1[10]);
        }
      }
      lVar7 = lVar7 + 1;
      plVar4 = plVar4 + 4;
    } while (lVar5 != lVar7);
  }
  lVar5 = *(long *)(param_1 + 0x68);
  while (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 8);
    ossl_quic_cfq_release(*puVar1,lVar5);
    lVar5 = lVar7;
  }
  ossl_quic_txpim_pkt_release(puVar1[2],param_1);
  return;
}



void on_lost(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  plVar3 = (long *)ossl_quic_txpim_pkt_get_chunks();
  lVar4 = ossl_quic_txpim_pkt_get_num_chunks(param_1);
  if ((code *)puVar1[0xb] == (code *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)puVar1[0xb])(puVar1[0xc]);
  }
  lVar8 = 0;
  ossl_qlog_event_recovery_packet_lost(uVar5,param_1);
  if (lVar4 != 0) {
    do {
      lVar6 = (*(code *)puVar1[3])(*plVar3,*(byte *)(param_1 + 0x20) & 3,puVar1[4]);
      if (lVar6 != 0) {
        bVar9 = (ulong)plVar3[1] <= (ulong)plVar3[2];
        if (bVar9) {
          ossl_quic_sstream_mark_lost(lVar6);
        }
        bVar2 = *(byte *)(plVar3 + 3);
        lVar7 = *plVar3;
        if ((bVar2 & 1) == 0) {
LAB_00100213:
          if ((bVar2 & 2) != 0) {
            if (lVar7 == -1) goto LAB_0010024f;
            (*(code *)puVar1[5])(5,lVar7,param_1,puVar1[6]);
            bVar2 = *(byte *)(plVar3 + 3);
            lVar7 = *plVar3;
          }
          if (((bVar2 & 4) != 0) && (lVar7 != -1)) {
            (*(code *)puVar1[5])(4,lVar7,param_1,puVar1[6]);
            lVar7 = *plVar3;
          }
        }
        else if (lVar7 != -1) {
          ossl_quic_sstream_mark_lost_fin(lVar6);
          bVar2 = *(byte *)(plVar3 + 3);
          lVar7 = *plVar3;
          bVar9 = true;
          goto LAB_00100213;
        }
LAB_0010024f:
        (*(code *)puVar1[5])(0x11,lVar7,param_1,puVar1[6]);
        if ((bVar9) && (*plVar3 != -1)) {
          (*(code *)puVar1[9])(*plVar3,puVar1[10]);
        }
      }
      lVar8 = lVar8 + 1;
      plVar3 = plVar3 + 4;
    } while (lVar4 != lVar8);
  }
  lVar4 = *(long *)(param_1 + 0x68);
  while (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + 8);
    ossl_quic_cfq_mark_lost(*puVar1,lVar4,0xffffffff);
    lVar4 = lVar8;
  }
  bVar2 = *(byte *)(param_1 + 0x79);
  if ((bVar2 & 1) != 0) {
    (*(code *)puVar1[5])(0x1e,0xffffffffffffffff,param_1,puVar1[6]);
    bVar2 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar2 & 2) != 0) {
    (*(code *)puVar1[5])(0x10,0xffffffffffffffff,param_1,puVar1[6]);
    bVar2 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar2 & 4) != 0) {
    (*(code *)puVar1[5])(0x12,0xffffffffffffffff,param_1,puVar1[6]);
    bVar2 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar2 & 8) != 0) {
    (*(code *)puVar1[5])(0x13,0xffffffffffffffff,param_1,puVar1[6]);
    bVar2 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar2 & 0x10) != 0) {
    (*(code *)puVar1[5])(3,0xffffffffffffffff,param_1,puVar1[6]);
  }
  ossl_quic_txpim_pkt_release(puVar1[2],param_1);
  return;
}



undefined8
ossl_quic_fifd_init(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                   long param_7,long param_8,long param_9,long param_10,long param_11,long param_12,
                   long param_13,long param_14)

{
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0 && param_5 != 0)) && (param_7 != 0)) {
    param_1[1] = param_3;
    *param_1 = param_2;
    param_1[6] = param_8;
    param_1[2] = param_4;
    param_1[7] = param_9;
    param_1[3] = param_5;
    param_1[8] = param_10;
    param_1[4] = param_6;
    param_1[9] = param_11;
    param_1[5] = param_7;
    param_1[10] = param_12;
    param_1[0xb] = param_13;
    param_1[0xc] = param_14;
    return 1;
  }
  return 0;
}



void ossl_quic_fifd_cleanup(void)

{
  return;
}



undefined8 ossl_quic_fifd_pkt_commit(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(code **)(param_2 + 0x28) = on_lost;
  *(code **)(param_2 + 0x30) = on_acked;
  lVar3 = *(long *)(param_2 + 0x68);
  *(undefined1 (*) [16])(param_2 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 **)(param_2 + 0x70) = param_1;
  *(undefined8 *)(param_2 + 0x38) = 0x100000;
  *(long *)(param_2 + 0x40) = param_2;
  *(undefined1 (*) [16])(param_2 + 0x58) = (undefined1  [16])0x0;
  for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
    ossl_quic_cfq_mark_tx(*param_1,lVar3);
  }
  puVar2 = (undefined8 *)ossl_quic_txpim_pkt_get_chunks(param_2);
  lVar3 = ossl_quic_txpim_pkt_get_num_chunks(param_2);
  if (lVar3 != 0) {
    lVar6 = 0;
LAB_0010052b:
    do {
      lVar4 = (*(code *)param_1[3])(*puVar2,*(byte *)(param_2 + 0x20) & 3,param_1[4]);
      if (lVar4 != 0) {
        if (((ulong)puVar2[1] <= (ulong)puVar2[2]) &&
           (iVar1 = ossl_quic_sstream_mark_transmitted(lVar4), iVar1 == 0)) {
          return 0;
        }
        if ((*(byte *)(puVar2 + 3) & 1) != 0) {
          iVar1 = ossl_quic_sstream_mark_transmitted_fin(lVar4,puVar2[2] + 1);
          if (iVar1 == 0) {
            return 0;
          }
          lVar6 = lVar6 + 1;
          puVar2 = puVar2 + 4;
          if (lVar3 == lVar6) break;
          goto LAB_0010052b;
        }
      }
      lVar6 = lVar6 + 1;
      puVar2 = puVar2 + 4;
    } while (lVar3 != lVar6);
  }
  uVar5 = ossl_ackm_on_tx_packet(param_1[1],param_2);
  return uVar5;
}



void ossl_quic_fifd_set_qlog_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}


