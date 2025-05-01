
void rxfc_on_retire_isra_0(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_1[7] == 0) {
    uVar11 = (*(code *)param_1[8])(param_1[9]);
    param_1[7] = uVar11;
    uVar11 = param_1[2];
    param_1[3] = uVar11;
  }
  else {
    uVar11 = param_1[2];
  }
  uVar16 = param_1[5];
  uVar11 = param_2 + uVar11;
  param_1[2] = uVar11;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar16;
  if (SUB168(ZEXT816(3) * auVar7,8) == 0) {
    uVar12 = SUB168(ZEXT816(3) * auVar7,0) >> 2;
  }
  else {
    if (uVar16 < 3) {
      lVar15 = 0;
      uVar13 = 3;
      uVar12 = uVar16;
    }
    else {
      uVar13 = (ulong)((uint)uVar16 & 3);
      lVar15 = (uVar16 >> 2) * 3;
      uVar12 = 3;
    }
    uVar12 = (uVar13 * uVar12 >> 2) + lVar15;
  }
  if (*(char *)((long)param_1 + 0x5a) != '\0') {
    return;
  }
  if (uVar12 < *param_1 - uVar11) {
    return;
  }
  uVar11 = uVar11 - param_1[3];
  if (uVar11 == 0) goto LAB_001000c2;
  uVar13 = (*(code *)param_1[8])(param_1[9]);
  uVar12 = param_1[5];
  uVar14 = uVar13 - param_1[7];
  if (uVar13 < param_1[7]) {
    uVar14 = 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar12;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14;
  if (SUB168(auVar4 * auVar8,8) == 0) {
    uVar11 = SUB168(auVar4 * auVar8,0) / uVar11;
LAB_001000a7:
    uVar12 = param_4 * 4;
    if (param_4 >> 0x3e == 0) {
      if (uVar12 < uVar11) goto LAB_001000c2;
    }
    else {
      uVar12 = 0xffffffffffffffff;
    }
LAB_0010016c:
    if (uVar12 <= uVar11) goto LAB_001000c2;
  }
  else {
    uVar13 = uVar14;
    if (uVar12 <= uVar14) {
      uVar13 = uVar12;
      uVar12 = uVar14;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = SUB168(auVar3 % auVar2,0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar13;
    if (((SUB168(auVar5 * auVar9,8) == 0) &&
        (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13, auVar10._8_8_ = 0,
        auVar10._0_8_ = SUB168(auVar3 / auVar2,0), uVar12 = SUB168(auVar6 * auVar10,0),
        SUB168(auVar6 * auVar10,8) == 0)) &&
       (uVar13 = SUB168(auVar5 * auVar9,0) / uVar11, uVar11 = uVar13 + uVar12,
       !CARRY8(uVar13,uVar12))) goto LAB_001000a7;
    uVar12 = param_4 * 4;
    bVar1 = param_4 >> 0x3e != 0;
    uVar11 = (ulong)bVar1;
    if (!bVar1) goto LAB_0010016c;
  }
  uVar16 = uVar16 * 2;
LAB_001000c2:
  if (param_3 < uVar16) {
    param_3 = uVar16;
  }
  if (param_1[6] < param_3) {
    param_3 = param_1[6];
  }
  param_1[5] = param_3;
  uVar11 = (*(code *)param_1[8])(param_1[9]);
  param_1[7] = uVar11;
  param_1[3] = param_1[2];
  uVar11 = param_1[2] + param_1[5];
  if (uVar11 <= *param_1) {
    return;
  }
  *param_1 = uVar11;
  *(undefined1 *)((long)param_1 + 0x59) = 1;
  return;
}



undefined8 ossl_quic_txfc_init(undefined8 *param_1,long *param_2)

{
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    return 0;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  return 1;
}



undefined8 ossl_quic_txfc_get_parent(undefined8 *param_1)

{
  return *param_1;
}



bool ossl_quic_txfc_bump_cwm(long param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = *(ulong *)(param_1 + 0x10) < param_2;
  if (bVar1) {
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  return bVar1;
}



long ossl_quic_txfc_get_credit_local(long param_1,long param_2)

{
  return (*(long *)(param_1 + 0x10) - param_2) - *(long *)(param_1 + 8);
}



ulong ossl_quic_txfc_get_credit(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = ossl_quic_txfc_get_credit_local(param_1,0);
  if (*param_1 != 0) {
    uVar2 = ossl_quic_txfc_get_credit_local(*param_1,param_2);
    if (uVar2 < uVar1) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



bool ossl_quic_txfc_consume_credit_local(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = ossl_quic_txfc_get_credit_local(param_1,0);
  uVar2 = uVar1;
  if (param_2 <= uVar1) {
    uVar2 = param_2;
  }
  if ((uVar2 != 0) && (uVar1 <= param_2)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar2;
  return param_2 <= uVar1;
}



undefined4 ossl_quic_txfc_consume_credit(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_txfc_consume_credit_local();
  if (*param_1 != 0) {
    iVar2 = ossl_quic_txfc_consume_credit_local(*param_1,param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



int ossl_quic_txfc_has_become_blocked(long param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return (int)cVar1;
}



undefined8 ossl_quic_txfc_get_cwm(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 ossl_quic_txfc_get_swm(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8
ossl_quic_rxfc_init(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  if ((param_2 != 0) && (*(long *)(param_2 + 0x50) != 0)) {
    return 0;
  }
  param_1[1] = 0;
  *param_1 = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[10] = param_2;
  param_1[7] = 0;
  param_1[8] = param_5;
  param_1[9] = param_6;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return 1;
}



undefined8
ossl_quic_rxfc_init_standalone
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_rxfc_init(param_1,0,param_2,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    *(undefined1 *)(param_1 + 0x5b) = 1;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 ossl_quic_rxfc_get_parent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



void ossl_quic_rxfc_set_max_window_size(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



undefined8 ossl_quic_rxfc_on_rx_stream_frame(long *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(char *)((long)param_1 + 0x5b) == '\0') && (param_1[10] == 0)) {
    return 0;
  }
  uVar1 = param_1[4];
  if (*(char *)((long)param_1 + 0x5a) == '\0') {
    if (param_3 == 0) {
      if (param_2 <= uVar1) {
        return 1;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0x5a) = 1;
      if (param_2 <= uVar1) {
        if (uVar1 <= param_2) {
          return 1;
        }
        goto LAB_001004ad;
      }
    }
    param_1[4] = param_2;
    param_2 = param_2 - uVar1;
    lVar3 = *param_1;
    if ((ulong)(lVar3 - param_1[1]) < param_2) {
      *(undefined1 *)(param_1 + 0xb) = 3;
    }
    else {
      lVar3 = param_2 + param_1[1];
    }
    param_1[1] = lVar3;
    plVar2 = (long *)param_1[10];
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      if ((ulong)(lVar3 - plVar2[1]) < param_2) {
        *(undefined1 *)(plVar2 + 0xb) = 3;
      }
      else {
        lVar3 = param_2 + plVar2[1];
      }
      plVar2[1] = lVar3;
      return 1;
    }
  }
  else if (param_3 == 0) {
    if (uVar1 < param_2) {
LAB_001004ad:
      *(undefined1 *)(param_1 + 0xb) = 6;
      return 1;
    }
  }
  else {
    if (param_2 != uVar1) goto LAB_001004ad;
    *(undefined1 *)((long)param_1 + 0x5a) = 1;
  }
  return 1;
}



undefined8 ossl_quic_rxfc_on_retire(long param_1,long param_2,undefined8 param_3)

{
  if ((*(long *)(param_1 + 0x50) == 0) && (*(char *)(param_1 + 0x5b) == '\0')) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(ulong *)(param_1 + 8) < (ulong)(*(long *)(param_1 + 0x10) + param_2)) {
      return 0;
    }
    rxfc_on_retire_isra_0(param_1,param_2,0,param_3);
    if (*(char *)(param_1 + 0x5b) == '\0') {
      rxfc_on_retire_isra_0
                (*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x28),param_3);
    }
  }
  return 1;
}



undefined8 ossl_quic_rxfc_get_cwm(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ossl_quic_rxfc_get_swm(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 ossl_quic_rxfc_get_rwm(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



long ossl_quic_rxfc_get_credit(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ossl_quic_rxfc_get_cwm();
  lVar2 = ossl_quic_rxfc_get_swm(param_1);
  return lVar1 - lVar2;
}



undefined1 ossl_quic_rxfc_has_cwm_changed(long param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x59);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  return uVar1;
}



undefined1 ossl_quic_rxfc_get_error(long param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return uVar1;
}



undefined8 ossl_quic_rxfc_get_final_size(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x5a) != '\0') {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x20);
    }
    return 1;
  }
  return 0;
}


