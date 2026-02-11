
void newreno_reset(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _LC0;
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



long newreno_get_tx_allowance(long param_1)

{
  long lVar1;
  
  lVar1 = *(ulong *)(param_1 + 0x40) - *(ulong *)(param_1 + 0x38);
  if (*(ulong *)(param_1 + 0x40) <= *(ulong *)(param_1 + 0x38)) {
    lVar1 = 0;
  }
  return lVar1;
}



long newreno_get_wakeup_deadline(long param_1)

{
  return -(ulong)(*(ulong *)(param_1 + 0x40) <= *(ulong *)(param_1 + 0x38));
}



undefined8 newreno_unbind_diagnostic(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar1 = OSSL_PARAM_locate_const(param_2,"cur_cwnd_size");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar1 = OSSL_PARAM_locate_const(param_2,"min_cwnd_size");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = OSSL_PARAM_locate_const(param_2,"bytes_in_flight");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar1 = OSSL_PARAM_locate_const(param_2,"cur_state");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return 1;
}



void newreno_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 newreno_bind_diagnostic(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (puVar1 == (undefined8 *)0x0) {
LAB_001001c0:
    puVar2 = (undefined8 *)OSSL_PARAM_locate_const(param_2,"cur_cwnd_size");
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(int *)(puVar2 + 1) != 2) || (puVar2[3] != 8)) goto LAB_001001e8;
      puVar2 = (undefined8 *)puVar2[2];
    }
    puVar3 = (undefined8 *)OSSL_PARAM_locate_const(param_2,"min_cwnd_size");
    if (puVar3 != (undefined8 *)0x0) {
      if ((*(int *)(puVar3 + 1) != 2) || (puVar3[3] != 8)) goto LAB_001001e8;
      puVar3 = (undefined8 *)puVar3[2];
    }
    puVar4 = (undefined8 *)OSSL_PARAM_locate_const(param_2,"bytes_in_flight");
    if (puVar4 != (undefined8 *)0x0) {
      if ((*(int *)(puVar4 + 1) != 2) || (puVar4[3] != 8)) goto LAB_001001e8;
      puVar4 = (undefined8 *)puVar4[2];
    }
    puVar5 = (undefined4 *)OSSL_PARAM_locate_const(param_2,"cur_state");
    if (puVar5 != (undefined4 *)0x0) {
      if ((puVar5[2] != 2) || (*(long *)(puVar5 + 6) != 4)) goto LAB_001001e8;
      puVar5 = *(undefined4 **)(puVar5 + 4);
    }
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x78);
    }
    else {
      *(undefined8 **)(param_1 + 0x78) = puVar1;
    }
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x80);
    }
    else {
      *(undefined8 **)(param_1 + 0x80) = puVar2;
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x88);
    }
    else {
      *(undefined8 **)(param_1 + 0x88) = puVar3;
    }
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x90);
    }
    else {
      *(undefined8 **)(param_1 + 0x90) = puVar4;
    }
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(param_1 + 0x98);
    }
    else {
      *(undefined4 **)(param_1 + 0x98) = puVar5;
    }
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *(undefined8 *)(param_1 + 0x30);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *(undefined8 *)(param_1 + 0x40);
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *(undefined8 *)(param_1 + 0x38);
    }
    if (puVar5 != (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
          *puVar5 = 0x53;
        }
        else {
          *puVar5 = 0x41;
        }
      }
      else {
        *puVar5 = 0x52;
      }
    }
    uVar6 = 1;
  }
  else {
    if ((*(int *)(puVar1 + 1) == 2) && (puVar1[3] == 8)) {
      puVar1 = (undefined8 *)puVar1[2];
      goto LAB_001001c0;
    }
LAB_001001e8:
    uVar6 = 0;
  }
  return uVar6;
}



undefined8 newreno_on_data_invalidated(long param_1,long param_2)

{
  undefined4 *puVar1;
  
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - param_2;
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
        *puVar1 = 0x53;
        return 1;
      }
      *puVar1 = 0x41;
      return 1;
    }
    *puVar1 = 0x52;
  }
  return 1;
}



undefined8 newreno_on_data_sent(long param_1,long param_2)

{
  undefined4 *puVar1;
  
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + param_2;
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
        *puVar1 = 0x53;
        return 1;
      }
      *puVar1 = 0x41;
      return 1;
    }
    *puVar1 = 0x52;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newreno_new(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)CRYPTO_zalloc(0xa0,"ssl/quic/cc_newreno.c",0x34);
  uVar4 = _UNK_00100d88;
  uVar3 = __LC7;
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = puVar6[6];
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[6] = 0x4b0;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    if (0x4b0 < uVar1) {
      puVar6[8] = 12000;
    }
    if ((undefined8 *)puVar6[0xf] != (undefined8 *)0x0) {
      *(undefined8 *)puVar6[0xf] = 0x4b0;
    }
    if ((undefined8 *)puVar6[0x10] != (undefined8 *)0x0) {
      *(undefined8 *)puVar6[0x10] = puVar6[8];
    }
    if ((undefined8 *)puVar6[0x11] != (undefined8 *)0x0) {
      *(undefined8 *)puVar6[0x11] = 0x960;
    }
    if ((undefined8 *)puVar6[0x12] != (undefined8 *)0x0) {
      *(undefined8 *)puVar6[0x12] = puVar6[7];
    }
    puVar2 = (undefined4 *)puVar6[0x13];
    if (puVar2 != (undefined4 *)0x0) {
      if (*(int *)(puVar6 + 0xe) == 0) {
        if ((ulong)puVar6[8] < (ulong)puVar6[9]) {
          *puVar2 = 0x53;
        }
        else {
          *puVar2 = 0x41;
        }
      }
      else {
        *puVar2 = 0x52;
      }
    }
    uVar5 = _UNK_00100d98;
    uVar4 = __LC8;
    uVar3 = _LC0;
    *(undefined4 *)(puVar6 + 5) = 3;
    puVar6[0xb] = 0;
    puVar6[7] = uVar4;
    puVar6[8] = uVar5;
    uVar5 = _UNK_00100da8;
    uVar4 = __LC9;
    puVar6[4] = uVar3;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0;
    puVar6[9] = uVar4;
    puVar6[10] = uVar5;
  }
  return;
}



undefined8 newreno_on_data_acked(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  uVar4 = param_2[1];
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar5 = lVar1 - uVar4;
  *(ulong *)(param_1 + 0x38) = uVar5;
  if (uVar5 < uVar2) {
    uVar5 = (uVar4 + uVar2) - lVar1;
    if ((*(ulong *)(param_1 + 0x48) <= uVar2) || (uVar2 >> 1 < uVar5)) {
      if ((ulong)(*(long *)(param_1 + 0x30) * 3) < uVar5) goto LAB_00100680;
      goto LAB_001006fd;
    }
    if (*param_2 <= *(ulong *)(param_1 + 0x58)) goto LAB_00100680;
  }
  else {
LAB_001006fd:
    if (*param_2 <= *(ulong *)(param_1 + 0x58)) goto LAB_00100680;
    if (*(ulong *)(param_1 + 0x48) <= uVar2) {
      uVar4 = uVar4 + *(long *)(param_1 + 0x50);
      if (uVar4 < uVar2) {
        *(ulong *)(param_1 + 0x50) = uVar4;
      }
      else {
        *(ulong *)(param_1 + 0x50) = uVar4 - uVar2;
        *(ulong *)(param_1 + 0x40) = uVar2 + *(long *)(param_1 + 0x30);
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      goto LAB_00100680;
    }
  }
  *(ulong *)(param_1 + 0x40) = uVar4 + uVar2;
  *(undefined4 *)(param_1 + 0x70) = 0;
LAB_00100680:
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x98);
  if (puVar3 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      if (*(ulong *)(param_1 + 0x48) <= *(ulong *)(param_1 + 0x40)) {
        *puVar3 = 0x41;
        return 1;
      }
      *puVar3 = 0x53;
      return 1;
    }
    *puVar3 = 0x52;
  }
  return 1;
}



undefined8 newreno_on_data_lost(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  if (*(ulong *)(param_1 + 0x38) < param_2[1]) {
    return 0;
  }
  uVar1 = *param_2;
  *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) - param_2[1];
  uVar3 = *(ulong *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x60) == 0) {
    if (uVar1 <= uVar3) goto LAB_001007ca;
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  *(ulong *)(param_1 + 0x68) = uVar3;
LAB_001007ca:
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x98);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
        *puVar2 = 0x53;
      }
      else {
        *puVar2 = 0x41;
      }
    }
    else {
      *puVar2 = 0x52;
    }
  }
  return 1;
}



undefined8 newreno_on_ecn(undefined8 *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar12 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[10] = 0;
  param_1[0xd] = uVar12;
  if (uVar12 <= (ulong)param_1[0xb]) goto LAB_001008a8;
  *(undefined4 *)(param_1 + 0xe) = 1;
  uVar8 = (*(code *)*param_1)(param_1[1]);
  uVar9 = CONCAT44(0,*(uint *)((long)param_1 + 0x24));
  uVar11 = CONCAT44(0,*(uint *)(param_1 + 4));
  param_1[0xb] = uVar8;
  uVar12 = param_1[8];
  if (uVar9 == 0) {
LAB_001009c8:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    if (SUB168(auVar4 * auVar6,8) == 0) {
      uVar9 = SUB168(auVar4 * auVar6,0) / uVar9;
    }
    else {
      uVar10 = uVar11;
      if (uVar11 <= uVar12) {
        uVar10 = uVar12;
        uVar12 = uVar11;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SUB168(auVar3 / auVar2,0);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      uVar11 = SUB168(auVar5 * auVar7,0);
      if ((SUB168(auVar5 * auVar7,8) != 0) ||
         (uVar12 = ((uVar10 % uVar9) * uVar12) / uVar9, uVar9 = uVar12 + uVar11,
         CARRY8(uVar12,uVar11))) goto LAB_001009c8;
    }
    param_1[9] = uVar9;
    uVar12 = param_1[3];
    if ((ulong)param_1[3] < uVar9) {
      uVar12 = uVar9;
    }
    param_1[8] = uVar12;
  }
LAB_001008a8:
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = param_1[6];
  }
  if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x10] = param_1[8];
  }
  if ((undefined8 *)param_1[0x11] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x11] = param_1[3];
  }
  if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x12] = param_1[7];
  }
  puVar1 = (undefined4 *)param_1[0x13];
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xe) == 0) {
      if ((ulong)param_1[8] < (ulong)param_1[9]) {
        *puVar1 = 0x53;
        return 1;
      }
      *puVar1 = 0x41;
      return 1;
    }
    *puVar1 = 0x52;
  }
  return 1;
}



undefined8 newreno_on_data_lost_finished(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 1;
  }
  if ((ulong)param_1[0xd] <= (ulong)param_1[0xb]) goto LAB_00100a0e;
  *(undefined4 *)(param_1 + 0xe) = 1;
  uVar8 = (*(code *)*param_1)(param_1[1]);
  uVar9 = CONCAT44(0,*(uint *)((long)param_1 + 0x24));
  uVar11 = CONCAT44(0,*(uint *)(param_1 + 4));
  uVar12 = param_1[8];
  param_2 = param_2 & 0xffffffff;
  param_1[0xb] = uVar8;
  if (uVar9 == 0) {
LAB_00100b50:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    if (SUB168(auVar4 * auVar6,8) == 0) {
      uVar9 = SUB168(auVar4 * auVar6,0) / uVar9;
    }
    else {
      uVar10 = uVar11;
      if (uVar11 <= uVar12) {
        uVar10 = uVar12;
        uVar12 = uVar11;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SUB168(auVar3 / auVar2,0);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      uVar11 = SUB168(auVar5 * auVar7,0);
      if ((SUB168(auVar5 * auVar7,8) != 0) ||
         (uVar12 = ((uVar10 % uVar9) * uVar12) / uVar9, uVar9 = uVar12 + uVar11,
         CARRY8(uVar12,uVar11))) goto LAB_00100b50;
    }
    param_1[9] = uVar9;
    uVar12 = param_1[3];
    if ((ulong)param_1[3] < uVar9) {
      uVar12 = uVar9;
    }
    param_1[8] = uVar12;
  }
LAB_00100a0e:
  if ((param_2 & 1) != 0) {
    param_1[0xb] = 0;
    param_1[8] = param_1[3];
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = param_1[6];
  }
  if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x10] = param_1[8];
  }
  if ((undefined8 *)param_1[0x11] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x11] = param_1[3];
  }
  if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x12] = param_1[7];
  }
  puVar1 = (undefined4 *)param_1[0x13];
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xe) != 0) {
      *puVar1 = 0x52;
      return 1;
    }
    if ((ulong)param_1[8] < (ulong)param_1[9]) {
      *puVar1 = 0x53;
    }
    else {
      *puVar1 = 0x41;
    }
  }
  return 1;
}



undefined8 newreno_set_input_params(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar4 != 0) {
    uVar5 = OSSL_PARAM_get_size_t(lVar4,&local_18);
    if ((int)uVar5 == 0) goto LAB_00100bb2;
    uVar5 = 0;
    if (local_18 < 0x4b0) goto LAB_00100bb2;
    uVar3 = local_18 * 2;
    uVar1 = *(ulong *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = local_18;
    uVar6 = 0x3980;
    if (0x397f < uVar3) {
      uVar6 = uVar3;
    }
    *(ulong *)(param_1 + 0x18) = uVar3;
    if (local_18 * 10 < uVar6) {
      uVar6 = local_18 * 10;
    }
    *(ulong *)(param_1 + 0x10) = uVar6;
    if (local_18 < uVar1) {
      *(ulong *)(param_1 + 0x40) = uVar6;
    }
    if (*(ulong **)(param_1 + 0x78) != (ulong *)0x0) {
      **(ulong **)(param_1 + 0x78) = local_18;
    }
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
    }
    if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x98);
    if (puVar2 != (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
          *puVar2 = 0x53;
        }
        else {
          *puVar2 = 0x41;
        }
      }
      else {
        *puVar2 = 0x52;
      }
    }
  }
  uVar5 = 1;
LAB_00100bb2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


