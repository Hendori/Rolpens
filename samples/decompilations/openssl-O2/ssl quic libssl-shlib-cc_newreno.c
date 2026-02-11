
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



void newreno_update_diag(long param_1)

{
  undefined4 *puVar1;
  
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
    if (*(int *)(param_1 + 0x70) != 0) {
      *puVar1 = 0x52;
      return;
    }
    if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
      *puVar1 = 0x53;
      return;
    }
    *puVar1 = 0x41;
  }
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



undefined8 newreno_on_data_acked(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x38);
  uVar4 = param_2[1];
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar3 = lVar1 - uVar4;
  *(ulong *)(param_1 + 0x38) = uVar3;
  if (uVar3 < uVar2) {
    uVar3 = (uVar4 + uVar2) - lVar1;
    if ((*(ulong *)(param_1 + 0x48) <= uVar2) || (uVar2 >> 1 < uVar3)) {
      if ((ulong)(*(long *)(param_1 + 0x30) * 3) < uVar3) goto LAB_0010017e;
      goto LAB_0010019d;
    }
    if (*param_2 <= *(ulong *)(param_1 + 0x58)) goto LAB_0010017e;
  }
  else {
LAB_0010019d:
    if (*param_2 <= *(ulong *)(param_1 + 0x58)) goto LAB_0010017e;
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
      newreno_update_diag();
      return 1;
    }
  }
  *(ulong *)(param_1 + 0x40) = uVar4 + uVar2;
  *(undefined4 *)(param_1 + 0x70) = 0;
LAB_0010017e:
  newreno_update_diag();
  return 1;
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



undefined8 newreno_set_input_params(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar3 != 0) {
    uVar4 = OSSL_PARAM_get_size_t(lVar3,&local_18);
    if ((int)uVar4 == 0) goto LAB_001002fe;
    uVar4 = 0;
    if (local_18 < 0x4b0) goto LAB_001002fe;
    uVar2 = local_18 * 2;
    uVar1 = *(ulong *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = local_18;
    uVar5 = 0x3980;
    if (0x397f < uVar2) {
      uVar5 = uVar2;
    }
    *(ulong *)(param_1 + 0x18) = uVar2;
    if (local_18 * 10 < uVar5) {
      uVar5 = local_18 * 10;
    }
    *(ulong *)(param_1 + 0x10) = uVar5;
    if (local_18 < uVar1) {
      *(ulong *)(param_1 + 0x40) = uVar5;
    }
    newreno_update_diag(param_1);
  }
  uVar4 = 1;
LAB_001002fe:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void newreno_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void newreno_cong(undefined8 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_2 <= (ulong)param_1[0xb]) {
    return;
  }
  *(undefined4 *)(param_1 + 0xe) = 1;
  uVar7 = (*(code *)*param_1)(param_1[1]);
  uVar8 = CONCAT44(0,*(uint *)((long)param_1 + 0x24));
  uVar10 = CONCAT44(0,*(uint *)(param_1 + 4));
  param_1[0xb] = uVar7;
  uVar11 = param_1[8];
  if (uVar8 != 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    if (SUB168(auVar3 * auVar5,8) == 0) {
      uVar8 = SUB168(auVar3 * auVar5,0) / uVar8;
    }
    else {
      uVar9 = uVar10;
      if (uVar10 <= uVar11) {
        uVar9 = uVar11;
        uVar11 = uVar10;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar2 / auVar1,0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      uVar10 = SUB168(auVar4 * auVar6,0);
      if ((SUB168(auVar4 * auVar6,8) != 0) ||
         (uVar11 = ((uVar9 % uVar8) * uVar11) / uVar8, uVar8 = uVar11 + uVar10,
         CARRY8(uVar11,uVar10))) goto LAB_00100415;
    }
    param_1[9] = uVar8;
    uVar11 = param_1[3];
    if ((ulong)param_1[3] < uVar8) {
      uVar11 = uVar8;
    }
    param_1[8] = uVar11;
    return;
  }
LAB_00100415:
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  return;
}



undefined8 newreno_on_data_lost_finished(long param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x60) == 0) {
    return 1;
  }
  newreno_cong(param_1,*(undefined8 *)(param_1 + 0x68));
  if ((param_2 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  newreno_update_diag(param_1);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * newreno_new(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)CRYPTO_zalloc(0xa0,"ssl/quic/cc_newreno.c",0x34);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = param_1;
    uVar3 = _UNK_00100a88;
    uVar2 = __LC7;
    puVar4[1] = param_2;
    uVar1 = puVar4[6];
    puVar4[6] = 0x4b0;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    if (0x4b0 < uVar1) {
      puVar4[8] = 12000;
    }
    newreno_update_diag(puVar4);
    uVar2 = _LC0;
    *(undefined4 *)(puVar4 + 5) = 3;
    puVar4[7] = 0;
    puVar4[4] = uVar2;
    puVar4[10] = 0;
    puVar4[8] = puVar4[2];
    puVar4[9] = 0xffffffffffffffff;
    puVar4[0xb] = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    puVar4[0xd] = 0;
    *(undefined4 *)(puVar4 + 0xe) = 0;
  }
  return puVar4;
}



undefined8 newreno_bind_diagnostic(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar1 == 0) {
LAB_00100590:
    lVar2 = OSSL_PARAM_locate_const(param_2,"cur_cwnd_size");
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 8) != 2) || (*(long *)(lVar2 + 0x18) != 8)) goto LAB_001005b8;
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"min_cwnd_size");
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 8) != 2) || (*(long *)(lVar3 + 0x18) != 8)) goto LAB_001005b8;
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,"bytes_in_flight");
    if (lVar4 != 0) {
      if ((*(int *)(lVar4 + 8) != 2) || (*(long *)(lVar4 + 0x18) != 8)) goto LAB_001005b8;
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    lVar5 = OSSL_PARAM_locate_const(param_2,"cur_state");
    if (lVar5 != 0) {
      if ((*(int *)(lVar5 + 8) != 2) || (*(long *)(lVar5 + 0x18) != 4)) goto LAB_001005b8;
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x78) = lVar1;
    }
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x80) = lVar2;
    }
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x88) = lVar3;
    }
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x90) = lVar4;
    }
    if (lVar5 != 0) {
      *(long *)(param_1 + 0x98) = lVar5;
    }
    newreno_update_diag(param_1);
    uVar6 = 1;
  }
  else {
    if ((*(int *)(lVar1 + 8) == 2) && (*(long *)(lVar1 + 0x18) == 8)) {
      lVar1 = *(long *)(lVar1 + 0x10);
      goto LAB_00100590;
    }
LAB_001005b8:
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



undefined8 newreno_on_ecn(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  newreno_cong();
  *(undefined4 *)(param_1 + 0x60) = 0;
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
        return 1;
      }
      *puVar2 = 0x41;
      return 1;
    }
    *puVar2 = 0x52;
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
    if (uVar1 <= uVar3) goto LAB_001008da;
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  *(ulong *)(param_1 + 0x68) = uVar3;
LAB_001008da:
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


