
undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  return 1;
}



undefined8 FuzzerTestOneInput(undefined1 *param_1,ulong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined1 local_c0;
  undefined8 uStack_bf;
  undefined1 local_b7 [31];
  undefined1 local_98 [32];
  ulong local_78;
  undefined1 local_70 [5];
  undefined4 uStack_6b;
  undefined1 local_67 [39];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((long)param_2 < 0) || (lVar4 = ossl_quic_rcidm_new(0), lVar4 == 0)) {
LAB_00100308:
    lVar4 = 0;
    uVar6 = 0;
  }
  else {
    if (param_2 != 0) {
LAB_001000a0:
      puVar8 = param_1 + 1;
      uVar9 = param_2 - 1;
      uVar2 = local_b7._4_4_;
      switch(*param_1) {
      case 0:
        if (uVar9 != 0) {
          bVar1 = param_1[1];
          puVar7 = (undefined8 *)(param_1 + 2);
          if (bVar1 < 0x15) {
            uVar9 = (ulong)bVar1;
            if (uVar9 <= param_2 - 2) {
              if (bVar1 < 8) {
                if ((bVar1 & 4) == 0) {
                  if ((bVar1 != 0) && (local_b7[0] = *(undefined1 *)puVar7, (bVar1 & 2) != 0)) {
                    *(undefined2 *)(local_b7 + (uVar9 - 2)) = *(undefined2 *)(param_1 + uVar9);
                  }
                }
                else {
                  local_b7._0_4_ = *(undefined4 *)puVar7;
                  local_b7._0_8_ = CONCAT44(uVar2,local_b7._0_4_);
                  *(undefined4 *)(local_b7 + (uVar9 - 4)) = *(undefined4 *)(param_1 + (uVar9 - 2));
                }
              }
              else {
                local_b7._0_8_ = *puVar7;
                *(undefined8 *)((long)&uStack_bf + uVar9) = *(undefined8 *)(param_1 + (uVar9 - 6));
                uVar3 = (int)(local_b7 + -(long)(local_b7 + 7)) + (uint)bVar1 & 0xfffffff8;
                if (7 < uVar3) {
                  uVar5 = 0;
                  do {
                    uVar10 = (ulong)uVar5;
                    uVar5 = uVar5 + 8;
                    *(undefined8 *)(local_b7 + 7 + uVar10) =
                         *(undefined8 *)
                          ((long)puVar7 + (uVar10 - (long)(local_b7 + -(long)(local_b7 + 7))));
                  } while (uVar5 < uVar3);
                }
              }
              puVar8 = (undefined1 *)((long)puVar7 + uVar9);
              uVar9 = (param_2 - 2) - uVar9;
              uStack_bf._7_1_ = bVar1;
              ossl_quic_rcidm_free(lVar4);
              lVar4 = ossl_quic_rcidm_new((long)&uStack_bf + 7);
              goto joined_r0x001002fd;
            }
          }
        }
        break;
      case 1:
        ossl_quic_rcidm_free(lVar4);
        lVar4 = ossl_quic_rcidm_new(0);
joined_r0x001002fd:
        if (lVar4 != 0) goto LAB_001000d3;
        goto LAB_00100308;
      case 2:
        if (uVar9 != 0) {
          bVar1 = param_1[1];
          puVar7 = (undefined8 *)(param_1 + 2);
          if (bVar1 < 0x15) {
            uVar9 = (ulong)bVar1;
            if (uVar9 <= param_2 - 2) {
              if (bVar1 < 8) {
                if ((bVar1 & 4) == 0) {
                  if ((bVar1 != 0) && (local_b7[0] = *(undefined1 *)puVar7, (bVar1 & 2) != 0)) {
                    *(undefined2 *)(local_b7 + (uVar9 - 2)) = *(undefined2 *)(param_1 + uVar9);
                  }
                }
                else {
                  local_b7._0_4_ = *(undefined4 *)puVar7;
                  local_b7._0_8_ = CONCAT44(uVar2,local_b7._0_4_);
                  *(undefined4 *)(local_b7 + (uVar9 - 4)) = *(undefined4 *)(param_1 + (uVar9 - 2));
                }
              }
              else {
                local_b7._0_8_ = *puVar7;
                *(undefined8 *)((long)&uStack_bf + uVar9) = *(undefined8 *)(param_1 + (uVar9 - 6));
                uVar3 = (int)(local_b7 + -(long)(local_b7 + 7)) + (uint)bVar1 & 0xfffffff8;
                if (7 < uVar3) {
                  uVar5 = 0;
                  do {
                    uVar10 = (ulong)uVar5;
                    uVar5 = uVar5 + 8;
                    *(undefined8 *)(local_b7 + 7 + uVar10) =
                         *(undefined8 *)
                          ((long)puVar7 + (uVar10 - (long)(local_b7 + -(long)(local_b7 + 7))));
                  } while (uVar5 < uVar3);
                }
              }
              puVar8 = (undefined1 *)((long)puVar7 + uVar9);
              uVar9 = (param_2 - 2) - uVar9;
              uStack_bf._7_1_ = bVar1;
              ossl_quic_rcidm_add_from_initial(lVar4,(long)&uStack_bf + 7);
              goto LAB_001000d3;
            }
          }
        }
        break;
      case 3:
        if (uVar9 != 0) {
          bVar1 = param_1[1];
          puVar7 = (undefined8 *)(param_1 + 2);
          if (bVar1 < 0x15) {
            uVar9 = (ulong)bVar1;
            if (uVar9 <= param_2 - 2) {
              if (bVar1 < 8) {
                if ((bVar1 & 4) == 0) {
                  if ((bVar1 != 0) && (local_b7[0] = *(undefined1 *)puVar7, (bVar1 & 2) != 0)) {
                    *(undefined2 *)(local_b7 + (uVar9 - 2)) = *(undefined2 *)(param_1 + uVar9);
                  }
                }
                else {
                  local_b7._0_4_ = *(undefined4 *)puVar7;
                  local_b7._0_8_ = CONCAT44(uVar2,local_b7._0_4_);
                  *(undefined4 *)(local_b7 + (uVar9 - 4)) = *(undefined4 *)(param_1 + (uVar9 - 2));
                }
              }
              else {
                local_b7._0_8_ = *puVar7;
                *(undefined8 *)((long)&uStack_bf + uVar9) = *(undefined8 *)(param_1 + (uVar9 - 6));
                uVar3 = (int)(local_b7 + -(long)(local_b7 + 7)) + (uint)bVar1 & 0xfffffff8;
                if (7 < uVar3) {
                  uVar5 = 0;
                  do {
                    uVar10 = (ulong)uVar5;
                    uVar5 = uVar5 + 8;
                    *(undefined8 *)(local_b7 + 7 + uVar10) =
                         *(undefined8 *)
                          ((long)puVar7 + (uVar10 - (long)(local_b7 + -(long)(local_b7 + 7))));
                  } while (uVar5 < uVar3);
                }
              }
              puVar8 = (undefined1 *)((long)puVar7 + uVar9);
              uVar9 = (param_2 - 2) - uVar9;
              uStack_bf._7_1_ = bVar1;
              ossl_quic_rcidm_add_from_server_retry(lVar4,(long)&uStack_bf + 7);
              goto LAB_001000d3;
            }
          }
        }
        break;
      case 4:
        if (7 < uVar9) {
          uVar9 = *(ulong *)(param_1 + 1);
          local_78 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                     (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                     (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                     (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
          if (7 < param_2 - 9) {
            uVar9 = *(ulong *)(param_1 + 9);
            _local_70 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                        (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                        (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                        (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
            if (param_2 != 0x11) {
              bVar1 = param_1[0x11];
              puVar7 = (undefined8 *)(param_1 + 0x12);
              if (bVar1 < 0x15) {
                uVar9 = (ulong)bVar1;
                if (uVar9 <= param_2 - 0x12) {
                  if (bVar1 < 8) {
                    if ((bVar1 & 4) == 0) {
                      if (bVar1 != 0) {
                        local_67[0] = *(undefined1 *)puVar7;
                        if ((bVar1 & 2) != 0) {
                          *(undefined2 *)(local_70 + uVar9 + 7) =
                               *(undefined2 *)(param_1 + uVar9 + 0x10);
                        }
                      }
                    }
                    else {
                      local_67._0_4_ = *(undefined4 *)puVar7;
                      *(undefined4 *)(local_70 + uVar9 + 5) = *(undefined4 *)(param_1 + uVar9 + 0xe)
                      ;
                    }
                  }
                  else {
                    local_67._0_8_ = *puVar7;
                    *(undefined8 *)(local_70 + uVar9 + 1) = *(undefined8 *)(param_1 + uVar9 + 10);
                    uVar3 = (int)(local_67 + -(long)(local_67 + 7)) + (uint)bVar1 & 0xfffffff8;
                    if (7 < uVar3) {
                      uVar5 = 0;
                      do {
                        uVar10 = (ulong)uVar5;
                        uVar5 = uVar5 + 8;
                        *(undefined8 *)(local_67 + 7 + uVar10) =
                             *(undefined8 *)
                              ((long)puVar7 + (uVar10 - (long)(local_67 + -(long)(local_67 + 7))));
                      } while (uVar5 < uVar3);
                    }
                  }
                  puVar8 = (undefined1 *)((long)puVar7 + uVar9);
                  uVar9 = (param_2 - 0x12) - uVar9;
                  uStack_6b._3_1_ = bVar1;
                  ossl_quic_rcidm_add_from_ncid(lVar4,&local_78);
                  goto LAB_001000d3;
                }
              }
            }
          }
        }
        break;
      case 5:
        ossl_quic_rcidm_on_handshake_complete(lVar4);
        goto LAB_001000d3;
      case 6:
        if (7 < uVar9) {
          uVar10 = *(ulong *)(param_1 + 1);
          puVar8 = param_1 + 9;
          uVar9 = param_2 - 9;
          ossl_quic_rcidm_on_packet_sent
                    (lVar4,uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                           (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                           (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                           (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38);
          goto LAB_001000d3;
        }
        break;
      case 7:
        ossl_quic_rcidm_request_roll(lVar4);
        goto LAB_001000d3;
      case 8:
        ossl_quic_rcidm_pop_retire_seq_num(lVar4,&local_c0);
        goto LAB_001000d3;
      case 9:
        ossl_quic_rcidm_peek_retire_seq_num(lVar4,&local_c0);
        goto LAB_001000d3;
      case 10:
        ossl_quic_rcidm_get_preferred_tx_dcid(lVar4,local_98);
LAB_001000d3:
        param_1 = puVar8;
        param_2 = uVar9;
        if (uVar9 == 0) goto LAB_001000d8;
        goto LAB_001000a0;
      case 0xb:
        if (uVar9 != 0) {
          puVar8 = param_1 + 2;
          uVar9 = param_2 - 2;
          ossl_quic_rcidm_get_preferred_tx_dcid_changed(lVar4,param_1[1]);
          goto LAB_001000d3;
        }
      }
      uVar6 = 0xffffffff;
      goto LAB_0010030d;
    }
LAB_001000d8:
    uVar6 = 0;
  }
LAB_0010030d:
  ossl_quic_rcidm_free(lVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


