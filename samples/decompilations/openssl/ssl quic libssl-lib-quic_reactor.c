
undefined8
ossl_quic_reactor_init
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0xc) = param_3;
  *param_1 = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 10) = param_2;
  *(undefined8 *)(param_1 + 0xe) = param_4;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(byte *)(param_1 + 0x16) = bVar1 & 0xf0;
  if ((param_6 & 1) == 0) {
    *(byte *)(param_1 + 0x16) = bVar1 & 0xe0;
  }
  else {
    iVar2 = ossl_rio_notifier_init(param_1 + 0x10);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = ossl_crypto_condvar_new();
    *(long *)(param_1 + 0x12) = lVar3;
    if (lVar3 == 0) {
      ossl_rio_notifier_cleanup(param_1 + 0x10);
      return 0;
    }
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 0x10;
  }
  return 1;
}



void ossl_quic_reactor_cleanup(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x58) & 0x10) == 0) {
    return;
  }
  ossl_rio_notifier_cleanup(param_1 + 0x40);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xef;
  ossl_crypto_condvar_free(param_1 + 0x48);
  return;
}



undefined8 ossl_quic_reactor_get_poll_r(undefined8 param_1)

{
  return param_1;
}



long ossl_quic_reactor_get_poll_w(long param_1)

{
  return param_1 + 0x10;
}



bool ossl_quic_reactor_can_support_poll_descriptor(undefined8 param_1,int *param_2)

{
  return *param_2 == 1;
}



void ossl_quic_reactor_set_poll_r(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    *(undefined4 *)param_1 = 0;
  }
  else {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  bVar2 = ossl_quic_reactor_can_support_poll_descriptor(param_1,param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb | (bVar2 & 1) * '\x04';
  return;
}



void ossl_quic_reactor_set_poll_w(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  bVar2 = ossl_quic_reactor_can_support_poll_descriptor(param_1,param_1 + 0x10);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xf7 | (bVar2 & 1) * '\b';
  return;
}



byte ossl_quic_reactor_can_poll_r(long param_1)

{
  return *(byte *)(param_1 + 0x58) >> 2 & 1;
}



byte ossl_quic_reactor_can_poll_w(long param_1)

{
  return *(byte *)(param_1 + 0x58) >> 3 & 1;
}



byte ossl_quic_reactor_net_read_desired(long param_1)

{
  return *(byte *)(param_1 + 0x58) & 1;
}



byte ossl_quic_reactor_net_write_desired(long param_1)

{
  return *(byte *)(param_1 + 0x58) >> 1 & 1;
}



undefined8 ossl_quic_reactor_get_tick_deadline(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 ossl_quic_reactor_tick(long param_1,undefined4 param_2)

{
  byte bVar1;
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined1  [16])0x0;
  (**(code **)(param_1 + 0x28))(local_28,*(undefined8 *)(param_1 + 0x30),param_2);
  bVar1 = *(byte *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x58) = local_28[9] * '\x02' & 2U | local_28[8] & 1 | bVar1 & 0xfc;
  *(undefined8 *)(param_1 + 0x20) = local_28._0_8_;
  if (((local_28[10] != '\0') && ((bVar1 & 0x10) != 0)) && (*(long *)(param_1 + 0x50) != 0)) {
    if ((bVar1 & 0x20) == 0) {
      ossl_rio_notifier_signal(param_1 + 0x40);
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x20;
    }
    do {
      ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
    } while ((*(byte *)(param_1 + 0x58) & 0x20) != 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



long ossl_quic_reactor_get0_notifier(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  if ((*(byte *)(param_1 + 0x58) & 0x10) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



void ossl_quic_reactor_enter_blocking_section(long param_1)

{
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  return;
}



void ossl_quic_reactor_leave_blocking_section(long param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x50) + -1;
  *(long *)(param_1 + 0x50) = lVar2;
  if ((~bVar1 & 0x30) != 0) {
    return;
  }
  if (lVar2 != 0) {
    while ((bVar1 & 0x20) != 0) {
      ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
      bVar1 = *(byte *)(param_1 + 0x58);
    }
    return;
  }
  ossl_rio_notifier_unsignal(param_1 + 0x40);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xdf;
  ossl_crypto_condvar_broadcast(*(undefined8 *)(param_1 + 0x48));
  return;
}



int ossl_quic_reactor_block_until_pred(long param_1,code *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  ulong __nfds;
  nfds_t nVar12;
  long in_FS_OFFSET;
  int local_6c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = -1;
  if ((*(byte *)(param_1 + 0x58) & 0x10) != 0) {
    local_6c = *(int *)(param_1 + 0x40);
  }
  if ((param_4 & 1) == 0) goto LAB_0010053e;
LAB_0010039a:
  iVar3 = (*param_2)(param_3);
  if (iVar3 == 0) {
    iVar4 = ossl_quic_reactor_net_read_desired(param_1);
    iVar5 = ossl_quic_reactor_net_write_desired(param_1);
    uVar7 = ossl_quic_reactor_get_tick_deadline(param_1);
    if ((iVar4 != 0 || iVar5 != 0) || (uVar7 != 0xffffffffffffffff)) {
      ossl_quic_reactor_enter_blocking_section(param_1);
      lVar2 = *(long *)(param_1 + 0x38);
      piVar8 = (int *)ossl_quic_reactor_get_poll_w(param_1);
      piVar9 = (int *)ossl_quic_reactor_get_poll_r(param_1);
      if (piVar9 == (int *)0x0) {
        if (piVar8 != (int *)0x0) {
          iVar6 = *piVar8;
          uVar11 = 0xffffffff;
          if (iVar6 != 0) goto LAB_00100588;
LAB_00100630:
          local_58._4_2_ = (ushort)(iVar4 != 0);
          if (iVar5 != 0) {
            local_58._4_2_ = iVar4 != 0 | 4;
          }
          local_58._6_10_ = SUB1610((undefined1  [16])0x0,6);
          local_58._0_4_ = -1;
          goto LAB_00100662;
        }
LAB_001006f0:
        local_58._6_10_ = SUB1610((undefined1  [16])0x0,6);
        if (iVar5 == 0) {
          local_58[4] = iVar4 != 0;
          local_58._0_4_ = 0xffffffff;
          local_58[5] = 0;
        }
        else {
          local_58._0_6_ = (uint6)CONCAT14(iVar4 != 0,0xffffffff) | 0x400000000;
        }
LAB_00100662:
        local_48 = 0;
        nVar12 = 1;
        __nfds = 0;
        if (-1 < local_6c) {
LAB_001004be:
          *(undefined2 *)(local_58 + __nfds * 8 + 4) = 1;
          *(int *)(local_58 + __nfds * 8) = local_6c;
          __nfds = nVar12;
          goto LAB_001004d0;
        }
LAB_00100678:
        if (uVar7 != 0xffffffffffffffff) {
          if (lVar2 != 0) {
            ossl_crypto_mutex_unlock(lVar2);
          }
          __nfds = 0;
          goto LAB_00100697;
        }
        goto LAB_00100560;
      }
      if (*piVar9 == 0) {
        if (piVar8 == (int *)0x0) goto LAB_001006f0;
        iVar6 = *piVar8;
        uVar11 = 0xffffffff;
        if (iVar6 == 0) goto LAB_00100630;
LAB_00100588:
        if ((iVar6 != 1) || (uVar1 = piVar8[2], uVar1 == 0xffffffff)) goto LAB_00100560;
        local_48 = 0;
        if (uVar1 != uVar11) {
          uVar10 = (ulong)((uint)(iVar4 != 0) & ~uVar11 >> 0x1f);
          local_58._6_10_ = SUB1610((undefined1  [16])0x0,6);
          local_58[4] = iVar4 != 0;
          local_58._0_4_ = uVar11;
          local_58[5] = 0;
          *(uint *)(local_58 + uVar10 * 8) = uVar1;
          if (iVar5 == 0) goto LAB_00100730;
          *(undefined2 *)(local_58 + uVar10 * 8 + 4) = 4;
          __nfds = uVar10;
          if ((int)uVar1 < 0) goto LAB_001004ae;
          __nfds = uVar10 + 1;
          if (-1 < local_6c) {
            nVar12 = uVar10 + 2;
            goto LAB_001004be;
          }
          goto LAB_001004d0;
        }
        local_58[4] = iVar4 != 0;
        local_58._6_10_ = SUB1610((undefined1  [16])0x0,6);
        if (iVar5 == 0) {
          local_58._0_4_ = uVar11;
          local_58[5] = 0;
          if ((-1 < (int)uVar11) && ((bool)local_58[4])) {
LAB_00100791:
            nVar12 = 2;
            __nfds = 1;
            if (local_6c < 0) goto LAB_00100749;
            goto LAB_001004be;
          }
        }
        else {
          local_58._0_6_ = (uint6)CONCAT14(local_58[4],uVar11) | 0x400000000;
          if (-1 < (int)uVar11) goto LAB_00100791;
        }
        goto LAB_00100662;
      }
      if ((*piVar9 != 1) || (uVar11 = piVar9[2], uVar11 == 0xffffffff)) goto LAB_00100560;
      if ((piVar8 != (int *)0x0) && (iVar6 = *piVar8, iVar6 != 0)) goto LAB_00100588;
      local_48 = 0;
      local_58._6_10_ = SUB1610((undefined1  [16])0x0,6);
      local_58[4] = iVar4 != 0;
      local_58._0_4_ = uVar11;
      local_58[5] = 0;
      uVar10 = (ulong)((uint)(iVar4 != 0) & ~uVar11 >> 0x1f);
      *(undefined4 *)(local_58 + uVar10 * 8) = 0xffffffff;
      if (iVar5 == 0) {
LAB_00100730:
        *(undefined2 *)(local_58 + uVar10 * 8 + 4) = 0;
        __nfds = uVar10;
      }
      else {
        *(undefined2 *)(local_58 + uVar10 * 8 + 4) = 4;
        __nfds = uVar10;
      }
LAB_001004ae:
      if (-1 < local_6c) {
        nVar12 = __nfds + 1;
        goto LAB_001004be;
      }
      if (__nfds == 0) goto LAB_00100678;
LAB_00100749:
      __nfds = 1;
LAB_001004d0:
      if (lVar2 != 0) {
        ossl_crypto_mutex_unlock(lVar2);
      }
      if (uVar7 == 0xffffffffffffffff) {
        while (iVar4 = poll((pollfd *)local_58,__nfds,-1), iVar4 == -1) {
          piVar8 = __errno_location();
          if (*piVar8 != 4) goto LAB_00100550;
        }
      }
      else {
LAB_00100697:
        while( true ) {
          uVar10 = ossl_time_now();
          iVar4 = 0;
          if (uVar10 <= uVar7) {
            iVar4 = (int)((uVar7 - uVar10) / 1000000);
          }
          iVar4 = poll((pollfd *)local_58,__nfds,iVar4);
          if (iVar4 != -1) break;
          piVar8 = __errno_location();
          if (*piVar8 != 4) goto LAB_00100550;
        }
      }
      if (lVar2 != 0) {
        ossl_crypto_mutex_lock();
      }
      ossl_quic_reactor_leave_blocking_section(param_1);
      if (-1 < iVar4) goto LAB_0010053e;
    }
  }
  goto LAB_001003d7;
LAB_0010053e:
  ossl_quic_reactor_tick(param_1,0);
  goto LAB_0010039a;
LAB_00100550:
  if (lVar2 != 0) {
    ossl_crypto_mutex_lock();
  }
LAB_00100560:
  ossl_quic_reactor_leave_blocking_section(param_1);
LAB_001003d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


