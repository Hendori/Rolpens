
undefined4 poll_block(int *param_1,ulong param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  ulong local_1d0;
  int local_1c0;
  int local_1b4;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  int local_198 [2];
  int local_190;
  int local_188 [2];
  int local_180;
  undefined1 local_178 [32];
  undefined1 local_158 [280];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_quic_reactor_wait_ctx_init(local_178);
  ossl_rio_poll_builder_init(local_158);
  local_1b4 = 0;
  if (param_2 != 0) {
    uVar12 = 0;
    local_1d0 = 0xffffffffffffffff;
    piVar11 = param_1;
    while( true ) {
      if (*piVar11 == 1) {
        ERR_new();
        ERR_set_debug("ssl/rio/poll_immediate.c",0x103,"poll_translate");
        ERR_set_error(0x14,0x1a2,"SSL_poll currently does not support polling sockets");
        uVar5 = uVar12 + 1;
        piVar11[6] = 1;
        piVar11[7] = 0;
        if (uVar5 < param_2) {
          puVar8 = (undefined8 *)((long)param_1 + param_3 * uVar5 + 0x18);
          do {
            uVar5 = uVar5 + 1;
            *puVar8 = 0;
            puVar8 = (undefined8 *)((long)puVar8 + param_3);
          } while (param_2 != uVar5);
        }
        goto joined_r0x00100116;
      }
      if (*piVar11 != 2) {
        ERR_new();
        ERR_set_debug("ssl/rio/poll_immediate.c",0x109,"poll_translate");
        ERR_set_error(0x14,0x1a2,"SSL_poll does not support unknown poll descriptor type %d",
                      *piVar11);
        uVar5 = uVar12 + 1;
        piVar11[6] = 1;
        piVar11[7] = 0;
        if (uVar5 < param_2) {
          puVar8 = (undefined8 *)((long)param_1 + param_3 * uVar5 + 0x18);
          do {
            uVar5 = uVar5 + 1;
            *puVar8 = 0;
            puVar8 = (undefined8 *)((long)puVar8 + param_3);
          } while (param_2 != uVar5);
        }
        goto joined_r0x00100116;
      }
      piVar1 = *(int **)(piVar11 + 2);
      uVar5 = local_1d0;
      if (piVar1 != (int *)0x0) break;
LAB_00100399:
      local_1d0 = uVar5;
      uVar12 = uVar12 + 1;
      piVar11 = (int *)((long)piVar11 + param_3);
      if (param_2 == uVar12) goto code_r0x001003a9;
    }
    if (2 < *piVar1 - 0x80U) {
      ERR_new();
      ERR_set_debug("ssl/rio/poll_immediate.c",0xfb,"poll_translate");
      ERR_set_error(0x14,0x1a2,"SSL_poll currently only supports QUIC SSL objects");
      uVar5 = uVar12 + 1;
      piVar11[6] = 1;
      piVar11[7] = 0;
      if (uVar5 < param_2) {
        puVar8 = (undefined8 *)((long)param_1 + param_3 * uVar5 + 0x18);
        do {
          uVar5 = uVar5 + 1;
          *puVar8 = 0;
          puVar8 = (undefined8 *)((long)puVar8 + param_3);
        } while (param_2 != uVar5);
      }
      goto joined_r0x00100116;
    }
    uVar9 = *(undefined8 *)(piVar11 + 4);
    iVar2 = SSL_net_read_desired(piVar1);
    if (iVar2 == 0) {
      iVar2 = SSL_net_write_desired(piVar1);
      if (iVar2 != 0) {
        local_1c0 = -1;
        uVar4 = 0;
LAB_001004c8:
        iVar3 = SSL_get_wpoll_descriptor(piVar1,local_188);
        iVar2 = local_180;
        if (iVar3 == 0) {
          ERR_new();
          uVar9 = 0x54;
          goto LAB_001005d1;
        }
        if (local_188[0] != 1) {
          ERR_new();
          uVar9 = 0x5b;
          goto LAB_0010054c;
        }
        if (local_180 == local_1c0) {
          if (local_1c0 != -1) {
            uVar7 = 1;
            goto LAB_00100254;
          }
        }
        else if (((local_1c0 != -1) &&
                 (iVar3 = ossl_rio_poll_builder_add_fd(local_158,local_1c0,uVar4,0), iVar3 == 0)) ||
                ((iVar2 != -1 &&
                 (iVar2 = ossl_rio_poll_builder_add_fd(local_158,iVar2,0,1), iVar2 == 0))))
        goto LAB_00100271;
      }
LAB_00100444:
      iVar2 = ossl_quic_get_notifier_fd(piVar1);
      if (iVar2 == -1) {
LAB_00100338:
        iVar2 = SSL_get_event_timeout(piVar1,&local_1a8,&local_1b4);
        if (iVar2 != 0) {
          if (local_1b4 == 0) {
            uVar10 = 0;
            if (-1 < local_1a8) {
              uVar10 = local_1a8 * 1000000000 + local_1a0 * 1000;
            }
            uVar6 = ossl_time_now();
            if ((!CARRY8(uVar6,uVar10)) && (uVar5 = uVar6 + uVar10, local_1d0 <= uVar6 + uVar10)) {
              uVar5 = local_1d0;
            }
          }
          goto LAB_00100399;
        }
        uVar12 = uVar12 + 1;
        piVar11[6] = 1;
        piVar11[7] = 0;
        if (param_2 <= uVar12) goto LAB_00100120;
        puVar8 = (undefined8 *)((long)param_1 + param_3 * uVar12 + 0x18);
        uVar5 = uVar12;
        do {
          uVar5 = uVar5 + 1;
          *puVar8 = 0;
          puVar8 = (undefined8 *)((long)puVar8 + param_3);
        } while (param_2 != uVar5);
joined_r0x00100116:
        if (uVar12 != 0) {
LAB_00100120:
          uVar5 = 0;
          do {
            while (((*param_1 != 2 || (piVar11 = *(int **)(param_1 + 2), piVar11 == (int *)0x0)) ||
                   ((2 < *piVar11 - 0x80U ||
                    (iVar2 = ossl_quic_get_notifier_fd(piVar11), iVar2 == -1))))) {
              uVar5 = uVar5 + 1;
              param_1 = (int *)((long)param_1 + param_3);
              if (uVar5 == uVar12) goto LAB_00100178;
            }
            uVar5 = uVar5 + 1;
            param_1 = (int *)((long)param_1 + param_3);
            ossl_quic_leave_blocking_section(piVar11,local_178);
          } while (uVar5 != uVar12);
        }
LAB_00100178:
        *param_5 = 1;
LAB_00100184:
        uVar4 = 0;
        goto LAB_00100187;
      }
      local_1b0 = 0;
      iVar2 = ossl_rio_poll_builder_add_fd(local_158,iVar2,1,0);
      if (iVar2 != 0) {
        ossl_quic_enter_blocking_section(piVar1,local_178);
        iVar2 = ossl_quic_conn_poll_events(piVar1,uVar9,0);
        if (iVar2 != 0) {
          if (local_1b0 == 0) goto LAB_00100338;
          ossl_quic_leave_blocking_section(piVar1,local_178);
          goto LAB_00100184;
        }
        ossl_quic_leave_blocking_section(piVar1,local_178);
      }
    }
    else {
      iVar3 = SSL_get_rpoll_descriptor(piVar1,local_198);
      iVar2 = local_190;
      if (iVar3 == 0) {
        ERR_new();
        uVar9 = 0x40;
LAB_001005d1:
        ERR_set_debug("ssl/rio/poll_immediate.c",uVar9,"poll_translate_ssl_quic");
        ERR_set_error(0x14,0x1a2,
                      "SSL_poll requires the network BIOs underlying a QUIC SSL object provide poll descriptors"
                     );
      }
      else if (local_198[0] == 1) {
        local_1c0 = local_190;
        iVar3 = SSL_net_write_desired(piVar1);
        if (iVar3 != 0) {
          uVar4 = 1;
          goto LAB_001004c8;
        }
        if (iVar2 == -1) goto LAB_00100444;
        uVar4 = 1;
        uVar7 = 0;
LAB_00100254:
        iVar2 = ossl_rio_poll_builder_add_fd(local_158,local_1c0,uVar4,uVar7);
        if (iVar2 != 0) goto LAB_00100444;
      }
      else {
        ERR_new();
        uVar9 = 0x47;
LAB_0010054c:
        ERR_set_debug("ssl/rio/poll_immediate.c",uVar9,"poll_translate_ssl_quic");
        ERR_set_error(0x14,0x1a2,
                      "SSL_poll requires the poll descriptors of the network BIOs underlying a QUIC SSL object be of socket type"
                     );
      }
    }
LAB_00100271:
    piVar11[6] = 1;
    piVar11[7] = 0;
    uVar5 = uVar12 + 1;
    if (uVar5 < param_2) {
      puVar8 = (undefined8 *)((long)param_1 + param_3 * uVar5 + 0x18);
      do {
        uVar5 = uVar5 + 1;
        *puVar8 = 0;
        puVar8 = (undefined8 *)((long)puVar8 + param_3);
      } while (param_2 != uVar5);
    }
    goto joined_r0x00100116;
  }
  *param_5 = 0;
  uVar4 = ossl_rio_poll_builder_poll(local_158,param_4);
LAB_00100187:
  ossl_rio_poll_builder_cleanup(local_158);
  ossl_quic_reactor_wait_ctx_cleanup(local_178);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
code_r0x001003a9:
  *param_5 = 0;
  if (local_1d0 < param_4) {
    param_4 = local_1d0;
  }
  uVar12 = 0;
  uVar4 = ossl_rio_poll_builder_poll(local_158,param_4);
  do {
    if ((((*param_1 == 2) && (piVar11 = *(int **)(param_1 + 2), piVar11 != (int *)0x0)) &&
        (*piVar11 - 0x80U < 3)) && (iVar2 = ossl_quic_get_notifier_fd(piVar11), iVar2 != -1)) {
      ossl_quic_leave_blocking_section(piVar11,local_178);
    }
    uVar12 = uVar12 + 1;
    param_1 = (int *)((long)param_1 + param_3);
  } while (param_2 != uVar12);
  goto LAB_00100187;
}



undefined8
SSL_poll(int *param_1,ulong param_2,long param_3,long *param_4,uint param_5,long *param_6)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (param_2 == 0) {
    if (param_4 != (long *)0x0) {
      uVar4 = 0;
      if (-1 < *param_4) {
        uVar4 = (ulong)(*param_4 * 1000000000 + param_4[1] * 1000) / 1000000;
      }
      OSSL_sleep(uVar4);
    }
LAB_001007b4:
    uVar5 = 1;
    goto LAB_001007b9;
  }
  if (param_4 != (long *)0x0) {
    lVar8 = *param_4;
    if (lVar8 == 0) {
      uVar9 = 0;
      if (param_4[1] == 0) goto LAB_0010084f;
LAB_00100812:
      uVar4 = lVar8 * 1000000000 + param_4[1] * 1000;
    }
    else {
      uVar4 = 0;
      if (-1 < lVar8) goto LAB_00100812;
    }
    uVar3 = ossl_time_now();
    uVar9 = uVar4 + uVar3;
    if (!CARRY8(uVar4,uVar3)) goto LAB_0010084f;
  }
  uVar9 = 0xffffffffffffffff;
LAB_0010084f:
  uVar7 = ~param_5 & 1;
LAB_00100859:
  lVar8 = 0;
  uVar4 = 0;
  piVar10 = param_1;
LAB_00100861:
  local_48 = 0;
  if (*piVar10 == 1) {
    ERR_new();
    ERR_set_debug("ssl/rio/poll_immediate.c",0x187,"poll_readout");
    ERR_set_error(0x14,0x1a2,"SSL_poll currently does not support polling sockets");
    uVar4 = uVar4 + 1;
    piVar10[6] = 1;
    piVar10[7] = 0;
    if (uVar4 < param_2) {
      puVar6 = (undefined8 *)((long)param_1 + param_3 * uVar4 + 0x18);
      do {
        uVar4 = uVar4 + 1;
        *puVar6 = 0;
        puVar6 = (undefined8 *)((long)puVar6 + param_3);
      } while (param_2 != uVar4);
    }
    goto LAB_001009d8;
  }
  if (*piVar10 != 2) {
    ERR_new();
    ERR_set_debug("ssl/rio/poll_immediate.c",0x18c,"poll_readout");
    ERR_set_error(0x14,0x1a2,"SSL_poll does not support unknown poll descriptor type %d",*piVar10);
    uVar4 = uVar4 + 1;
    piVar10[6] = 1;
    piVar10[7] = 0;
    if (uVar4 < param_2) {
      puVar6 = (undefined8 *)((long)param_1 + param_3 * uVar4 + 0x18);
      do {
        uVar4 = uVar4 + 1;
        *puVar6 = 0;
        puVar6 = (undefined8 *)((long)puVar6 + param_3);
      } while (param_2 != uVar4);
    }
    goto LAB_001009d8;
  }
  piVar1 = *(int **)(piVar10 + 2);
  if (piVar1 == (int *)0x0) {
LAB_001008de:
    uVar4 = uVar4 + 1;
    *(long *)(piVar10 + 6) = local_48;
    piVar10 = (int *)((long)piVar10 + param_3);
    if (param_2 == uVar4) goto code_r0x001008f2;
    goto LAB_00100861;
  }
  if (*piVar1 - 0x80U < 3) {
    iVar2 = ossl_quic_conn_poll_events(piVar1,*(undefined8 *)(piVar10 + 4),uVar7,&local_48);
    if (iVar2 == 0) {
      uVar4 = uVar4 + 1;
      piVar10[6] = 1;
      piVar10[7] = 0;
      if (uVar4 < param_2) {
        puVar6 = (undefined8 *)((long)param_1 + param_3 * uVar4 + 0x18);
        do {
          uVar4 = uVar4 + 1;
          *puVar6 = 0;
          puVar6 = (undefined8 *)((long)puVar6 + param_3);
        } while (param_2 != uVar4);
      }
      goto LAB_001009d8;
    }
    lVar8 = (lVar8 + 1) - (ulong)(local_48 == 0);
    goto LAB_001008de;
  }
  ERR_new(piVar1,*(undefined8 *)(piVar10 + 4));
  ERR_set_debug("ssl/rio/poll_immediate.c",0x180,"poll_readout");
  ERR_set_error(0x14,0x1a2,"SSL_poll currently only supports QUIC SSL objects");
  uVar4 = uVar4 + 1;
  piVar10[6] = 1;
  piVar10[7] = 0;
  if (uVar4 < param_2) {
    puVar6 = (undefined8 *)((long)param_1 + param_3 * uVar4 + 0x18);
    do {
      uVar4 = uVar4 + 1;
      *puVar6 = 0;
      puVar6 = (undefined8 *)((long)puVar6 + param_3);
    } while (param_2 != uVar4);
  }
LAB_001009d8:
  local_50 = lVar8 + 1;
  uVar5 = 0;
  goto LAB_001007b9;
code_r0x001008f2:
  local_50 = lVar8;
  if (((uVar9 == 0) || (lVar8 != 0)) || (uVar4 = ossl_time_now(), uVar9 <= uVar4))
  goto LAB_001007b4;
  iVar2 = poll_block(param_1,param_2,param_3,uVar9,&local_50);
  uVar7 = 1;
  if (iVar2 == 0) goto code_r0x0010094a;
  goto LAB_00100859;
code_r0x0010094a:
  uVar5 = 0;
LAB_001007b9:
  if (param_6 != (long *)0x0) {
    *param_6 = local_50;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


