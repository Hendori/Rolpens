
undefined8 determine_len(ulong param_1,ulong param_2,long param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 local_68 [8];
  uint uStack_60;
  uint uStack_5c;
  ulong local_58 [4];
  ulong local_38 [5];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = param_3 + 1;
  local_68._0_4_ = 0;
  local_38[1] = param_3 + 2;
  if (param_2 == 0) {
    local_58[0] = 0;
    uVar2 = CONCAT31(0,local_38[0] <= param_1);
    stack0xffffffffffffff9c = SUB1612((undefined1  [16])0x0,4);
    local_68._0_4_ = uVar2;
    if (param_1 < local_38[1]) {
      local_58[1] = 0;
    }
    else {
      local_58[1] = 0;
      local_68._4_4_ = 1;
      uStack_60 = 0;
    }
    local_58[1] = 0;
    local_38[2] = param_3 + 4U;
    local_58[2] = 0;
    if (param_3 + 4U <= param_1) {
      uStack_60 = 1;
    }
    local_38[3] = param_3 + 8U;
    uStack_5c = 1;
    if (param_3 + 8U <= param_1) goto LAB_00100162;
  }
  else {
    local_58[0] = 0x3f;
    if (param_2 < 0x40) {
      local_58[0] = param_2;
    }
    if (param_1 < local_38[0] + local_58[0]) {
      if (param_1 < local_38[0]) {
        local_58[0] = 0;
      }
      else {
        local_58[0] = param_1 - local_38[0];
        local_68._0_4_ = ZEXT14(param_1 - local_38[0] != 0);
      }
    }
    else {
      local_68._0_4_ = 1;
    }
    local_68._4_4_ = 1;
    local_58[1] = 0x3fff;
    if (param_2 < 0x4000) {
      local_58[1] = param_2;
    }
    if (param_1 < local_38[1] + local_58[1]) {
      if (param_1 < local_38[1]) {
        local_68._4_4_ = 0;
        local_58[1] = 0;
      }
      else {
        local_58[1] = param_1 - local_38[1];
        local_68._4_4_ = ZEXT14(local_58[1] != 0);
      }
    }
    local_38[2] = param_3 + 4;
    local_58[2] = 0x3fffffff;
    if (param_2 < 0x40000000) {
      local_58[2] = param_2;
    }
    if (param_1 < local_58[2] + local_38[2]) {
      if (param_1 < local_38[2]) {
        uStack_60 = 0;
        local_58[2] = 0;
      }
      else {
        local_58[2] = param_1 - local_38[2];
        uStack_60 = (uint)(local_58[2] != 0);
      }
    }
    else {
      uStack_60 = 1;
    }
    local_38[3] = param_3 + 8;
    if (0x3fffffffffffffff < param_2) {
      param_2 = 0x3fffffffffffffff;
    }
    if (param_2 + local_38[3] <= param_1) {
      uStack_5c = 1;
      goto LAB_00100162;
    }
    if (local_38[3] <= param_1) {
      param_2 = param_1 - local_38[3];
      uStack_5c = (uint)(param_2 != 0);
      goto LAB_00100162;
    }
  }
  uStack_5c = 0;
  param_2 = 0;
LAB_00100162:
  local_58[3] = param_2;
  lVar1 = 3;
  uVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  do {
    if ((*(int *)(local_68 + lVar1 * 4) != 0) && (uVar3 <= local_58[lVar1])) {
      uVar4 = local_38[lVar1];
      uVar5 = 1;
      uVar3 = local_58[lVar1];
    }
    bVar6 = lVar1 != 0;
    lVar1 = lVar1 + -1;
  } while (bVar6);
  *param_4 = uVar4;
  *param_5 = uVar3;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void on_sstream_updated(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_2 + 0xc0),param_1);
  if (lVar1 != 0) {
    ossl_quic_stream_map_update_state(*(undefined8 *)(param_2 + 0xc0),lVar1);
    return;
  }
  return;
}



void on_regen_notify(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  switch(param_1) {
  case 3:
    *(byte *)(param_4 + 0x1e8) =
         *(byte *)(param_4 + 0x1e8) & 0x8f |
         (byte)((((uint)(*(byte *)(param_4 + 0x1e8) >> 4) |
                 (uint)(1L << (*(byte *)(param_3 + 0x20) & 3))) & 7) << 4);
    break;
  case 4:
    lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_4 + 0xc0));
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x104) = *(byte *)(lVar1 + 0x104) | 8;
      ossl_quic_stream_map_update_state(*(undefined8 *)(param_4 + 0xc0),lVar1);
      return;
    }
    break;
  case 5:
    lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_4 + 0xc0));
    if (lVar1 != 0) {
      ossl_quic_stream_map_schedule_stop_sending(*(undefined8 *)(param_4 + 0xc0),lVar1);
      return;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    break;
  case 0x10:
    *(byte *)(param_4 + 0x1e8) = *(byte *)(param_4 + 0x1e8) | 2;
    return;
  case 0x11:
    lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_4 + 0xc0));
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x104) = *(byte *)(lVar1 + 0x104) | 2;
      ossl_quic_stream_map_update_state(*(undefined8 *)(param_4 + 0xc0),lVar1);
      return;
    }
    break;
  case 0x12:
    *(byte *)(param_4 + 0x1e8) = *(byte *)(param_4 + 0x1e8) | 4;
    return;
  case 0x13:
    *(byte *)(param_4 + 0x1e8) = *(byte *)(param_4 + 0x1e8) | 8;
    return;
  case 0x1e:
    *(byte *)(param_4 + 0x1e8) = *(byte *)(param_4 + 0x1e8) | 1;
    return;
  default:
    return;
  }
  return;
}



long * tx_helper_begin(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) && ((*(byte *)((long)param_1 + 0x34) & 2) == 0)) {
    lVar3 = (ulong)*(uint *)(param_1 + 6) * 0x20 + *param_1;
    lVar4 = 0;
    lVar7 = *(long *)(lVar3 + 0x228) + param_1[3];
    uVar5 = *(long *)(lVar3 + 0x230) - param_1[3];
    if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
      lVar4 = param_1[4];
    }
    uVar6 = (param_1[1] - param_1[2]) - lVar4;
    if (uVar6 <= uVar5) {
      plVar1 = param_1 + 8;
      iVar2 = WPACKET_init_static_len(plVar1,lVar7,uVar5,0);
      if (iVar2 != 0) {
        iVar2 = WPACKET_set_max_size(plVar1,uVar6);
        if (iVar2 != 0) {
          *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 1;
          param_1[7] = lVar7;
          return plVar1;
        }
        WPACKET_cleanup(plVar1);
      }
    }
  }
  return (long *)0x0;
}



long get_sstream_by_id(long param_1,uint param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != -1) {
    lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_3 + 0xc0),param_1);
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x70);
    }
    return lVar1;
  }
  return *(long *)(param_3 + 0x120 + (ulong)param_2 * 8);
}



void on_confirm_notify(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_1 == 4) {
    lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_4 + 0xc0));
    if (lVar1 != 0) {
      ossl_quic_stream_map_notify_reset_stream_acked(*(undefined8 *)(param_4 + 0xc0),lVar1);
      ossl_quic_stream_map_update_state(*(undefined8 *)(param_4 + 0xc0),lVar1);
      return;
    }
  }
  else if (param_1 == 5) {
    lVar1 = ossl_quic_stream_map_get_by_id(*(undefined8 *)(param_4 + 0xc0));
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x104) = *(byte *)(lVar1 + 0x104) | 0x10;
      ossl_quic_stream_map_update_state(*(undefined8 *)(param_4 + 0xc0),lVar1);
      return;
    }
  }
  return;
}



undefined8
txp_plan_stream_chunk_isra_0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *(undefined8 *)(param_4 + 0x50) = 2;
  iVar2 = ossl_quic_sstream_get_stream_frame(param_1,param_3,param_4,param_4 + 0x30,param_4 + 0x50);
  *(int *)(param_4 + 0x58) = iVar2;
  if (iVar2 == 0) {
    return 1;
  }
  if ((*(long *)(param_4 + 0x10) == 0) && ((*(byte *)(param_4 + 0x20) & 2) == 0)) {
    return 0;
  }
  *(long *)(param_4 + 0x28) = *(long *)(param_4 + 0x10);
  lVar3 = ossl_quic_txfc_get_credit(param_2,param_5);
  lVar4 = ossl_quic_txfc_get_swm(param_2);
  if (*(long *)(param_4 + 0x10) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
    uVar5 = lVar4 + lVar3;
    if (*(long *)(param_4 + 0x10) + uVar1 <= uVar5) {
      return 1;
    }
    if (uVar1 < uVar5) {
      *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) & 0xfd;
      *(ulong *)(param_4 + 0x10) = uVar5 - uVar1;
      return 1;
    }
    *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) & 0xfd;
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  if ((*(byte *)(param_4 + 0x20) & 2) != 0) {
    return 1;
  }
  *(undefined4 *)(param_4 + 0x58) = 0;
  return 1;
}



undefined8 tx_helper_append_iovec(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int num;
  ulong uVar7;
  long local_40;
  
  if (param_3 == 0) {
    return 1;
  }
  lVar1 = *param_1;
  uVar7 = (ulong)*(uint *)(param_1 + 6);
  if ((*(byte *)((long)param_1 + 0x34) & 2) != 0) {
    return 0;
  }
  lVar4 = param_1[5];
  uVar2 = *(ulong *)(lVar1 + 0x240 + uVar7 * 0x20);
  uVar6 = lVar4 + 1;
  if (uVar2 < uVar6) {
    if (uVar2 == 0) {
      local_40 = 8;
      num = 0x80;
    }
    else {
      local_40 = uVar2 * 2;
      num = (int)(uVar2 << 5);
    }
    lVar4 = lVar1 + uVar7 * 0x20;
    pvVar3 = CRYPTO_realloc(*(void **)(lVar4 + 0x238),num,"ssl/quic/quic_txp.c",0xc5b);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    *(void **)(lVar4 + 0x238) = pvVar3;
    *(long *)(lVar4 + 0x240) = local_40;
    lVar4 = param_1[5];
    uVar6 = lVar4 + 1;
  }
  puVar5 = (undefined8 *)(lVar4 * 0x10 + *(long *)(lVar1 + 0x238 + uVar7 * 0x20));
  *puVar5 = param_2;
  puVar5[1] = param_3;
  param_1[2] = param_1[2] + param_3;
  param_1[5] = uVar6;
  return 1;
}



undefined8 tx_helper_commit(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_48;
  ulong local_40;
  long local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    uVar3 = 0;
    goto LAB_00100875;
  }
  plVar1 = param_1 + 8;
  iVar2 = WPACKET_get_total_written(plVar1,&local_48);
  if (iVar2 != 0) {
    iVar2 = tx_helper_append_iovec(param_1,param_1[7],local_48);
    if (iVar2 != 0) {
      if ((*(long *)(*param_1 + 0x2a8) == 0) || (local_48 == 0)) {
LAB_00100858:
        param_1[3] = param_1[3] + local_48;
        WPACKET_finish(plVar1);
        *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
        uVar3 = 1;
        param_1[7] = 0;
        goto LAB_00100875;
      }
      if (-1 < local_48) {
        local_30 = local_48;
        local_38 = param_1[7];
        iVar2 = ossl_quic_wire_peek_frame_header(&local_38,&local_40,0);
        if (iVar2 != 0) {
          iVar2 = 0x204;
          if (local_40 != 0) {
            iVar2 = ((local_40 & 0xfffffffffffffff8) == 8 || local_40 == 6) + 0x202;
          }
          (**(code **)(*param_1 + 0x2a8))
                    (1,1,iVar2,param_1[7],local_48,*(undefined8 *)(*param_1 + 0x2b8));
          goto LAB_00100858;
        }
      }
    }
  }
  WPACKET_cleanup(plVar1);
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  uVar3 = 0;
  param_1[7] = 0;
LAB_00100875:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 txp_generate_pre_token(long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  long local_b0;
  byte local_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  ulong local_48;
  long local_40;
  
  uVar7 = *(uint *)(param_2 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar7 != 0) {
    uVar7 = (uVar7 != 2) + 1;
  }
  uVar6 = (ulong)uVar7;
  lVar1 = *(long *)(param_2 + 0x88);
  *(undefined8 *)(lVar1 + 0x18) = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x114) & 1) == 0) {
LAB_00100a58:
    if ((((*(byte *)(param_2 + 0x115) & 4) != 0) && ((*(byte *)(param_1 + 0x1e9) & 4) != 0)) &&
       ((param_3 & 1) != 0)) {
      lVar4 = tx_helper_begin(param_2);
      pbVar8 = (byte *)(param_1 + 0x1f0);
      if (lVar4 == 0) goto LAB_00100bd0;
      if ((uVar7 != 2) && ((*(byte *)(param_1 + 0x1f0) & 1) != 0)) {
        local_a8[0] = local_a8[0] & 0xfe;
        pbVar8 = local_a8;
        local_90 = 0;
        local_88 = 0;
        local_a0 = __LC1;
        uStack_98 = _UNK_00104278;
      }
      iVar2 = ossl_quic_wire_encode_frame_conn_close(lVar4,pbVar8);
      if (iVar2 != 0) {
        iVar2 = WPACKET_get_total_written(lVar4,&local_b0);
        if (iVar2 != 0) {
          if (*(long *)(param_1 + 0x218) != 0) {
            uVar6 = local_b0 + *(long *)(param_1 + 0x220);
            if ((ulong)(*(long *)(param_1 + 0x218) * 3) < uVar6) goto LAB_00100b80;
            *(ulong *)(param_1 + 0x220) = uVar6;
          }
          iVar2 = tx_helper_commit(param_2);
          if (iVar2 != 0) {
            *(byte *)(lVar1 + 0x79) = *(byte *)(lVar1 + 0x79) | 0x20;
            *param_4 = 0;
            goto LAB_00100a61;
          }
          goto LAB_00100bd0;
        }
      }
LAB_00100b80:
      if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
        WPACKET_cleanup(param_2 + 0x40);
        *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfe;
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
    }
LAB_00100a61:
    uVar5 = 1;
  }
  else {
    lVar4 = 0;
    if ((*(byte *)(param_2 + 0x34) & 1) == 0) {
      lVar4 = *(long *)(param_2 + 0x20);
    }
    if ((ulong)((*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10)) - lVar4) < 5)
    goto LAB_00100a58;
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    if (((*(byte *)(param_1 + 0x1e8) >> 4 & 7) >> (uVar6 & 0x3f) & 1) == 0) {
      iVar2 = ossl_ackm_is_ack_desired(uVar5,uVar6);
      if (iVar2 == 0) goto LAB_00100a58;
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
    }
    plVar3 = (long *)ossl_ackm_get_ack_frame(uVar5,uVar6);
    if (plVar3 == (long *)0x0) goto LAB_00100a58;
    lVar4 = tx_helper_begin(param_2);
    if (lVar4 != 0) {
      local_78 = *plVar3;
      lStack_70 = plVar3[1];
      local_68 = plVar3[2];
      lStack_60 = plVar3[3];
      local_58 = plVar3[4];
      lStack_50 = plVar3[5];
      local_48 = plVar3[6] & 0xfffffffffffffffe;
      iVar2 = ossl_quic_wire_encode_frame_ack(lVar4,*(undefined4 *)(param_1 + 0x9c),&local_78);
      if (iVar2 == 0) {
        if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
          WPACKET_cleanup(param_2 + 0x40);
          *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfe;
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
      }
      else {
        iVar2 = tx_helper_commit(param_2);
        if (iVar2 == 0) goto LAB_00100bd0;
        *(byte *)(lVar1 + 0x79) = *(byte *)(lVar1 + 0x79) | 0x10;
        if (plVar3[1] != 0) {
          *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*plVar3 + 8);
        }
        if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
          (**(code **)(param_1 + 0x2c0))(&local_78,uVar6,*(undefined8 *)(param_1 + 0x2c8));
        }
      }
      goto LAB_00100a58;
    }
LAB_00100bd0:
    uVar5 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_tx_packetiser_set_validated(long param_1)

{
  *(undefined8 *)(param_1 + 0x1e0) = 0xffffffffffffffff;
  return;
}



void ossl_quic_tx_packetiser_add_unvalidated_credit(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x1e0);
  if (uVar1 != 0xffffffffffffffff) {
    lVar2 = uVar1 + param_2 * 3;
    if (~uVar1 <= (ulong)(param_2 * 3)) {
      lVar2 = -2;
    }
    *(long *)(param_1 + 0x1e0) = lVar2;
  }
  return;
}



void ossl_quic_tx_packetiser_consume_unvalidated_credit(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x1e0);
  if (uVar1 != 0xffffffffffffffff) {
    lVar2 = 0;
    if (param_2 <= uVar1) {
      lVar2 = uVar1 - param_2;
    }
    *(long *)(param_1 + 0x1e0) = lVar2;
  }
  return;
}



bool ossl_quic_tx_packetiser_check_unvalidated_credit(long param_1,ulong param_2)

{
  return param_2 < *(ulong *)(param_1 + 0x1e0);
}



undefined8 * ossl_quic_tx_packetiser_new(undefined8 *param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((((((param_1 == (undefined8 *)0x0) || (param_1[0x14] == 0)) || (param_1[0x15] == 0)) ||
       ((param_1[0x16] == 0 || (param_1[0x17] == 0)))) ||
      ((param_1[0x18] == 0 || ((param_1[0x19] == 0 || (param_1[0x1a] == 0)))))) ||
     ((param_1[0x1b] == 0 || ((param_1[0x1c] == 0 || (*(int *)(param_1 + 0x23) == 0)))))) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_txp.c",0x229,"ossl_quic_tx_packetiser_new");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    ptr = (undefined8 *)CRYPTO_zalloc(0x2d0,"ssl/quic/quic_txp.c",0x22d);
    if (ptr != (undefined8 *)0x0) {
      puVar3 = param_1;
      puVar4 = ptr;
      for (lVar2 = 0x27; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      ptr[0x3b] = 0;
      iVar1 = ossl_quic_fifd_init(ptr + 0x2b,ptr[0x16],ptr[0x17],ptr[0x15],get_sstream_by_id,ptr,
                                  on_regen_notify,ptr,on_confirm_notify,ptr,on_sstream_updated,ptr,
                                  param_1[0x21],param_1[0x22]);
      if (iVar1 != 0) {
        return ptr;
      }
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8
ossl_quic_tx_packetiser_set_initial_token
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = ossl_qtx_get_mdpl(*(undefined8 *)(param_1 + 0xa0));
  if (param_3 != 0) {
    uVar2 = 0xa0;
    if (0x9f < param_3) {
      uVar2 = param_3;
    }
    if ((uVar1 <= uVar2) || (uVar1 - 0xa0 < param_3)) {
      return 0;
    }
  }
  if ((*(long *)(param_1 + 0x138) != 0) && (*(code **)(param_1 + 0x148) != (code *)0x0)) {
    (**(code **)(param_1 + 0x148))
              (*(long *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
               *(undefined8 *)(param_1 + 0x150));
  }
  *(undefined8 *)(param_1 + 0x138) = param_2;
  *(ulong *)(param_1 + 0x140) = param_3;
  *(undefined8 *)(param_1 + 0x148) = param_4;
  *(undefined8 *)(param_1 + 0x150) = param_5;
  return 1;
}



void ossl_quic_tx_packetiser_free(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (void *)0x0) {
    ossl_quic_tx_packetiser_set_initial_token(param_1,0,0,0,0);
    ossl_quic_fifd_cleanup((long)param_1 + 0x158);
    CRYPTO_free(*(void **)((long)param_1 + 0x208));
    puVar1 = (undefined8 *)((long)param_1 + 0x228);
    do {
      puVar2 = puVar1 + 4;
      CRYPTO_free((void *)puVar1[2]);
      CRYPTO_free((void *)*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)((long)param_1 + 0x2a8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_quic_tx_packetiser_set_protocol_version(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x118) = param_2;
  return 1;
}



undefined8 ossl_quic_tx_packetiser_set_cur_dcid(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x15) = *param_2;
    *(undefined8 *)(param_1 + 0x1d) = uVar1;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)((long)param_2 + 0xd);
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_txp.c",0x2a7,"ossl_quic_tx_packetiser_set_cur_dcid");
  ERR_set_error(0x14,0xc0102,0);
  return 0;
}



undefined8 ossl_quic_tx_packetiser_set_cur_scid(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    *(undefined8 *)((long)param_1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_txp.c",0x2b3,"ossl_quic_tx_packetiser_set_cur_scid");
  ERR_set_error(0x14,0xc0102,0);
  return 0;
}



undefined8 ossl_quic_tx_packetiser_set_peer(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = BIO_ADDR_copy(param_1 + 0x2c);
    return uVar1;
  }
  BIO_ADDR_clear(param_1 + 0x2c);
  return 1;
}



void ossl_quic_tx_packetiser_set_ack_tx_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2c0) = param_2;
  *(undefined8 *)(param_1 + 0x2c8) = param_3;
  return;
}



void ossl_quic_tx_packetiser_set_qlog_cb(long param_1)

{
  ossl_quic_fifd_set_qlog_cb(param_1 + 0x158);
  return;
}



undefined8 ossl_quic_tx_packetiser_discard_enc_level(long param_1,uint param_2)

{
  if (param_2 < 4) {
    if (param_2 != 1) {
      if (param_2 != 0) {
        param_2 = (param_2 != 2) + 1;
      }
      *(undefined8 *)(param_1 + 0x120 + (ulong)param_2 * 8) = 0;
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_txp.c",0x2dd,"ossl_quic_tx_packetiser_discard_enc_level");
  ERR_set_error(0x14,0x80106,0);
  return 0;
}



void ossl_quic_tx_packetiser_notify_handshake_complete(long param_1)

{
  *(byte *)(param_1 + 0x1e9) = *(byte *)(param_1 + 0x1e9) | 8;
  return;
}



void ossl_quic_tx_packetiser_schedule_handshake_done(long param_1)

{
  *(byte *)(param_1 + 0x1e8) = *(byte *)(param_1 + 0x1e8) | 1;
  return;
}



void ossl_quic_tx_packetiser_schedule_ack_eliciting(long param_1,byte param_2)

{
  *(ushort *)(param_1 + 0x1e8) =
       *(ushort *)(param_1 + 0x1e8) & 0xfc7f |
       (ushort)((((uint)(*(ushort *)(param_1 + 0x1e8) >> 7) | (uint)(1L << (param_2 & 0x3f))) & 7)
               << 7);
  return;
}



void ossl_quic_tx_packetiser_schedule_ack(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1e8) =
       *(byte *)(param_1 + 0x1e8) & 0x8f |
       (byte)((((uint)(*(byte *)(param_1 + 0x1e8) >> 4) | (uint)(1L << (param_2 & 0x3f))) & 7) << 4)
  ;
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined4 ossl_quic_tx_packetiser_generate(undefined8 *param_1,undefined1 (*param_2) [16])

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  char cVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  undefined8 uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  long lVar31;
  ulong *puVar32;
  uint uVar33;
  uint uVar34;
  undefined1 *puVar35;
  uint uVar36;
  ulong uVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  long in_FS_OFFSET;
  bool bVar43;
  byte bVar44;
  long local_750;
  uint *local_748;
  ulong local_730;
  undefined4 *local_728;
  undefined8 *local_720;
  uint local_6f4;
  ulong local_6c8;
  long local_688;
  int local_624;
  long local_620;
  ulong local_618;
  undefined1 local_610 [8];
  undefined1 local_608 [16];
  undefined8 local_5f8;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  ulong local_588 [4];
  byte local_568 [8];
  ulong uStack_560;
  ulong auStack_558 [5];
  ulong local_530;
  ulong local_528 [12];
  undefined1 local_4c8 [16];
  long local_4b8;
  byte local_494 [4];
  undefined8 local_490;
  undefined1 local_488 [56];
  byte local_450 [8];
  int local_448 [2];
  long local_440 [2];
  uint local_430 [14];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3d8 [16];
  ulong local_3c8 [2];
  byte abStack_3b3 [139];
  undefined4 local_328;
  undefined1 local_288 [16];
  long local_278;
  uint local_208;
  undefined8 local_200;
  uint local_1f0 [22];
  undefined1 local_198 [176];
  undefined4 local_e8;
  long local_40;
  
  bVar44 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = (**(code **)(param_1[0x1d] + 0x30))(param_1[0x1e]);
  local_448[0] = 0;
  *param_2 = (undefined1  [16])0x0;
  local_328 = 0;
  local_208 = 0;
  local_e8 = 0;
  ossl_qtx_finish_dgram(param_1[0x14]);
  piVar15 = (int *)ossl_ackm_get0_probe_request(param_1[0x17]);
  uVar26 = 1;
  if ((((*piVar15 == 0) && (piVar15[1] == 0)) && (piVar15[2] == 0)) &&
     ((piVar15[3] == 0 && (piVar15[4] == 0)))) {
    uVar26 = (ulong)((uint)(lVar14 == 0) * 2);
  }
  uVar41 = 0;
  local_748 = (uint *)(archetypes + uVar26 * 4);
  puVar39 = local_488;
  local_720 = param_1 + 0x45;
  local_728 = &CSWTCH_52;
  local_3c8[0] = 0;
  local_6f4 = 4;
  bVar11 = false;
  uVar36 = 0;
  local_730 = 0;
  puVar35 = puVar39;
  do {
    iVar12 = ossl_qtx_is_enc_level_provisioned(param_1[0x14],uVar36);
    if ((iVar12 == 0) || (uVar34 = *local_748, (~(byte)(uVar34 >> 0x10) & lVar14 == 0) != 0))
    goto LAB_0010184e;
    if ((uVar36 < local_6f4) && (local_6f4 != 3)) {
      local_6f4 = uVar36;
    }
    if ((uVar34 & 0x2000) == 0) {
      if ((uVar34 & 4) == 0) {
        if ((uVar34 & 1) == 0) goto joined_r0x0010139d;
LAB_00101f9b:
        iVar12 = ossl_ackm_is_ack_desired(param_1[0x17],uVar41);
        if ((iVar12 == 0) && (((*(byte *)(param_1 + 0x3d) >> 4 & 7) >> uVar41 & 1) == 0))
        goto LAB_00101fd3;
LAB_001013b8:
        puVar38 = puVar35 + -0x40;
        if (uVar36 == 0) {
          uVar40 = 0;
          puVar20 = local_430;
          puVar16 = local_3d8;
        }
        else {
          if (uVar36 != 2) goto LAB_00102040;
LAB_001013d1:
          uVar40 = 1;
          puVar20 = local_1f0;
          puVar16 = local_198;
          puVar38 = local_288;
        }
        goto LAB_00101400;
      }
LAB_00101f50:
      local_5e8._0_8_ = 2;
      iVar12 = ossl_quic_sstream_get_stream_frame
                         (param_1[uVar41 + 0x24],0,local_5c8,local_588,local_5e8);
      if (iVar12 != 0) goto LAB_001013b8;
      if ((uVar34 & 1) != 0) goto LAB_00101f9b;
LAB_00101fd3:
      if ((uVar34 & 0x2000) != 0) {
LAB_00101fdc:
        if (((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> uVar41 & 1) != 0) goto LAB_001013b8;
      }
joined_r0x0010139d:
      if ((((uVar34 & 0x200) != 0) &&
          (((((*(byte *)(param_1 + 0x3d) & 2) != 0 ||
             (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1a],0), iVar12 != 0)) ||
            ((*(byte *)(param_1 + 0x3d) & 4) != 0)) ||
           (((iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1b],0), iVar12 != 0 ||
             ((*(byte *)(param_1 + 0x3d) & 8) != 0)) ||
            (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1c],0), iVar12 != 0)))))) ||
         ((((uVar34 & 8) != 0 && ((*(byte *)(param_1 + 0x3d) & 1) != 0)) ||
          (((uVar34 & 0x400) != 0 &&
           (((*(byte *)((long)param_1 + 0x1e9) & 4) != 0 && (uVar36 == local_6f4))))))))
      goto LAB_001013b8;
      if (uVar36 != 1) {
        lVar19 = ossl_quic_cfq_get_priority_head(param_1[0x16],uVar41);
        if (lVar19 != 0) {
          do {
            uVar40 = ossl_quic_cfq_item_get_frame_type(lVar19);
            if (uVar40 == 0x19) {
              if ((char)uVar34 < '\0') goto LAB_001013b8;
            }
            else {
              if (uVar40 < 0x1a) {
                if (uVar40 == 7) {
                  uVar13 = uVar34 & 0x1000;
                }
                else {
                  if (uVar40 != 0x18) goto LAB_00102f30;
                  uVar13 = uVar34 & 0x40;
                }
              }
              else {
                if (uVar40 != 0x1b) {
LAB_00102f30:
                  if ((uVar34 & 0x800) == 0) goto LAB_00102ee2;
                  goto LAB_001013b8;
                }
                uVar13 = uVar34 & 0x20;
              }
              if (uVar13 != 0) goto LAB_001013b8;
            }
LAB_00102ee2:
            lVar19 = ossl_quic_cfq_item_get_priority_next(lVar19,uVar41);
          } while (lVar19 != 0);
        }
        if ((uVar34 & 0x100) == 0) goto LAB_0010184e;
LAB_00101edc:
        if ((*(byte *)((long)param_1 + 0x1e9) & 8) != 0) {
          ossl_quic_stream_iter_init(local_5c8,param_1[0x18],0);
          if (local_5b8._0_8_ != 0) goto LAB_001013b8;
        }
        goto LAB_0010184e;
      }
      if ((uVar34 & 0x100) != 0) goto LAB_00101edc;
      uVar36 = 2;
    }
    else {
      puVar20 = (uint *)ossl_ackm_get0_probe_request(param_1[0x17]);
      if (uVar36 == 0) {
        uVar40 = (ulong)*puVar20;
        if (*puVar20 == 0) {
          if (puVar20[uVar41 + 2] == 0) goto LAB_001020c5;
        }
        else {
          uVar40 = 0;
        }
        puVar38 = local_4c8;
        puVar20 = local_430;
        puVar16 = local_3d8;
      }
      else {
        if (uVar36 == 2) {
          if ((puVar20[1] == 0) && (puVar20[uVar41 + 2] == 0)) goto LAB_001020c5;
          goto LAB_001013d1;
        }
        if (puVar20[uVar41 + 2] == 0) {
LAB_001020c5:
          if ((uVar34 & 4) != 0) goto LAB_00101f50;
          if ((uVar34 & 1) != 0) goto LAB_00101f9b;
          goto LAB_00101fdc;
        }
LAB_00102040:
        puVar38 = puVar35 + -0x40;
        puVar16 = puVar35 + 0xb0;
        puVar20 = (uint *)(puVar35 + 0x58);
        uVar40 = 2;
      }
LAB_00101400:
      uVar21 = *(undefined8 *)((long)param_1 + 0x15);
      uVar25 = *(undefined8 *)((long)param_1 + 0x1d);
      uVar4 = *param_1;
      uVar7 = param_1[1];
      *(uint *)(puVar16 + 0x24) = *local_748;
      uVar41 = (ulong)uVar36;
      *(char *)(local_430 + uVar41 * 0x48) = (char)*local_728;
      local_430[uVar41 * 0x48] = local_430[uVar41 * 0x48] & 0xffcf02ff | 0x9000;
      uVar29 = *(undefined4 *)(param_1 + 0x23);
      *(undefined8 *)(puVar35 + 0x60) = uVar21;
      *(undefined8 *)(puVar35 + 0x68) = uVar25;
      *(undefined4 *)(puVar35 + 0x5c) = uVar29;
      uVar21 = *(undefined8 *)((long)param_1 + 0x22);
      *(undefined8 *)(puVar35 + 0x75) = uVar4;
      *(undefined8 *)(puVar35 + 0x7d) = uVar7;
      *(undefined8 *)(puVar35 + 0x6d) = uVar21;
      uVar21 = *(undefined8 *)((long)param_1 + 0xd);
      *(undefined8 *)(puVar35 + 0xa0) = 0x3ffb;
      *(undefined8 *)(puVar35 + 0x82) = uVar21;
      if (uVar36 == 0) {
        local_3f8 = param_1[0x27];
        local_3f0 = param_1[0x28];
      }
      else {
        *(undefined8 *)(puVar35 + 0x90) = 0;
        *(undefined8 *)(puVar35 + 0x98) = 0;
      }
      iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len(puVar35[0x60],puVar20);
      uVar37 = (ulong)iVar12;
      if (((uVar37 == 0) || (uVar17 = ossl_qtx_get_mdpl(param_1[0x14]), uVar17 < local_730)) ||
         (uVar17 = uVar17 - local_730, uVar17 < uVar37)) break;
      local_5c8._0_8_ = uVar17 - uVar37;
      iVar12 = ossl_qtx_calculate_plaintext_payload_len
                         (param_1[0x14],uVar36,uVar17 - uVar37,local_5c8);
      if (iVar12 == 0) break;
      uVar21 = local_5c8._0_8_;
      *(int *)(puVar35 + 0xd0) = (int)uVar26;
      *(ulong *)(puVar35 + 200) = uVar17 - local_5c8._0_8_;
      *(ulong *)(puVar35 + 0xb0) = uVar17;
      *(undefined8 *)(puVar35 + 0xb8) = local_5c8._0_8_;
      if (((*(uint *)(puVar35 + 0xd4) & 2) == 0) ||
         ((-1 < (char)(*(uint *)(puVar35 + 0xd4) >> 8) &&
          (((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> (uVar40 & 0x3f) & 1) == 0)))) {
        uVar25 = 0;
      }
      else {
        if (local_5c8._0_8_ == 0) break;
        uVar25 = 1;
      }
      *(undefined8 *)(puVar35 + -0x20) = uVar25;
      *(undefined8 **)(puVar35 + -0x40) = param_1;
      *(undefined8 *)(puVar35 + -0x38) = local_5c8._0_8_;
      *(uint *)(puVar35 + -0x10) = uVar36;
      *(undefined8 *)(puVar35 + -0x18) = 0;
      *(undefined8 *)(puVar35 + -0x30) = 0;
      *(undefined8 *)(puVar35 + -0x28) = 0;
      local_494[uVar41 * 0x120] = local_494[uVar41 * 0x120] & 0xfc;
      *(undefined8 *)(puVar35 + -8) = 0;
      local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
      if ((ulong)local_720[1] < (ulong)local_5c8._0_8_) {
        pvVar23 = CRYPTO_realloc((void *)*local_720,local_5c8._0_4_,"ssl/quic/quic_txp.c",0xd2);
        if (pvVar23 == (void *)0x0) break;
        lVar19 = uVar41 * 0x20 + *(long *)(puVar35 + -0x40);
        *(void **)(lVar19 + 0x228) = pvVar23;
        *(undefined8 *)(lVar19 + 0x230) = uVar21;
      }
      uVar34 = *(uint *)(puVar35 + -0x10);
      *(undefined4 *)(puVar35 + 0x40) = 1;
      *(undefined4 *)(puVar35 + 0xd8) = 0;
      *(undefined1 (*) [16])(puVar35 + 0x48) = (undefined1  [16])0x0;
      if (uVar34 != 0) {
        uVar34 = (uVar34 != 2) + 1;
      }
      uVar13 = *(uint *)(puVar35 + 0xd4);
      local_624 = 1;
      if (0x3fffffffffffffff < (ulong)param_1[(ulong)uVar34 + 0x38]) goto LAB_00102320;
      puVar18 = (undefined8 *)ossl_quic_txpim_pkt_alloc(param_1[0x15]);
      *(undefined8 **)(puVar35 + 0x48) = puVar18;
      if (puVar18 == (undefined8 *)0x0) goto LAB_00102320;
      if (((uVar13 & 8) != 0) && ((*(byte *)(param_1 + 0x3d) & 1) != 0)) {
        lVar19 = *(long *)(puVar38 + 8);
        if ((puVar38[0x34] & 1) == 0) {
          lVar19 = lVar19 - *(long *)(puVar38 + 0x20);
        }
        if (*(long *)(puVar38 + 0x10) == lVar19) goto LAB_00102380;
        lVar19 = tx_helper_begin(puVar38);
        if (lVar19 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_handshake_done(lVar19);
          if (iVar12 == 0) {
            if ((local_450[uVar41 * 0x120] & 1) != 0) {
              WPACKET_cleanup(puVar35);
              local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
              *(undefined8 *)(puVar35 + -8) = 0;
            }
            goto LAB_00102380;
          }
          *(byte *)((long)puVar18 + 0x79) = *(byte *)((long)puVar18 + 0x79) | 1;
          iVar12 = tx_helper_commit(puVar38);
          if (iVar12 == 0) goto LAB_0010268d;
          puVar38[0x34] = puVar38[0x34] | 1;
          bVar10 = true;
          goto LAB_00102388;
        }
        goto LAB_0010268d;
      }
LAB_00102380:
      bVar10 = false;
LAB_00102388:
      uVar33 = uVar13 >> 8;
      if ((uVar13 & 0x200) == 0) goto LAB_0010242f;
      if (((*(byte *)(param_1 + 0x3d) & 2) != 0) ||
         (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1a],0), iVar12 != 0)) {
        lVar19 = 0;
        if ((puVar38[0x34] & 1) == 0) {
          lVar19 = *(long *)(puVar38 + 0x20);
        }
        if ((ulong)((*(long *)(puVar38 + 8) - *(long *)(puVar38 + 0x10)) - lVar19) < 2)
        goto LAB_001023cf;
        lVar19 = tx_helper_begin(puVar38);
        uVar21 = ossl_quic_rxfc_get_cwm(param_1[0x1a]);
        if (lVar19 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_max_data(lVar19,uVar21);
          if (iVar12 == 0) {
            if ((local_450[uVar41 * 0x120] & 1) != 0) {
              WPACKET_cleanup(puVar35);
              local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
              *(undefined8 *)(puVar35 + -8) = 0;
            }
          }
          else {
            *(byte *)((long)puVar18 + 0x79) = *(byte *)((long)puVar18 + 0x79) | 2;
            iVar12 = tx_helper_commit(puVar38);
            if (iVar12 == 0) goto LAB_0010268d;
            puVar38[0x34] = puVar38[0x34] | 1;
            bVar10 = true;
          }
          goto LAB_001023cf;
        }
        goto LAB_0010268d;
      }
LAB_001023cf:
      if (((*(byte *)(param_1 + 0x3d) & 4) != 0) ||
         (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1b],0), iVar12 != 0)) {
        lVar19 = 0;
        if ((puVar38[0x34] & 1) == 0) {
          lVar19 = *(long *)(puVar38 + 0x20);
        }
        if ((ulong)((*(long *)(puVar38 + 8) - *(long *)(puVar38 + 0x10)) - lVar19) < 2)
        goto LAB_001023ff;
        lVar19 = tx_helper_begin(puVar38);
        uVar21 = ossl_quic_rxfc_get_cwm(param_1[0x1b]);
        if (lVar19 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_max_streams(lVar19,0,uVar21);
          if (iVar12 == 0) {
            if ((local_450[uVar41 * 0x120] & 1) != 0) {
              WPACKET_cleanup(puVar35);
              local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
              *(undefined8 *)(puVar35 + -8) = 0;
            }
          }
          else {
            *(byte *)((long)puVar18 + 0x79) = *(byte *)((long)puVar18 + 0x79) | 4;
            iVar12 = tx_helper_commit(puVar38);
            if (iVar12 == 0) goto LAB_0010268d;
            puVar38[0x34] = puVar38[0x34] | 1;
            bVar10 = true;
          }
          goto LAB_001023ff;
        }
        goto LAB_0010268d;
      }
LAB_001023ff:
      if (((*(byte *)(param_1 + 0x3d) & 8) != 0) ||
         (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1c],0), iVar12 != 0)) {
        lVar19 = 0;
        if ((puVar38[0x34] & 1) == 0) {
          lVar19 = *(long *)(puVar38 + 0x20);
        }
        if ((ulong)((*(long *)(puVar38 + 8) - *(long *)(puVar38 + 0x10)) - lVar19) < 2)
        goto LAB_0010242f;
        lVar19 = tx_helper_begin(puVar38);
        uVar21 = ossl_quic_rxfc_get_cwm(param_1[0x1c]);
        if (lVar19 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_max_streams(lVar19,1,uVar21);
          if (iVar12 == 0) {
            if ((local_450[uVar41 * 0x120] & 1) != 0) {
              WPACKET_cleanup(puVar35);
              local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
              *(undefined8 *)(puVar35 + -8) = 0;
            }
          }
          else {
            *(byte *)((long)puVar18 + 0x79) = *(byte *)((long)puVar18 + 0x79) | 8;
            iVar12 = tx_helper_commit(puVar38);
            if (iVar12 == 0) goto LAB_0010268d;
            puVar38[0x34] = puVar38[0x34] | 1;
            bVar10 = true;
          }
          goto LAB_0010242f;
        }
LAB_0010268d:
        ossl_quic_txpim_pkt_release(param_1[0x15],puVar18);
        local_440[uVar41 * 0x24] = 0;
        goto LAB_00102320;
      }
LAB_0010242f:
      lVar19 = ossl_quic_cfq_get_priority_head(param_1[0x16]);
      if (lVar19 == 0) {
LAB_00102bc0:
        txp_generate_pre_token(param_1,puVar38,uVar36 == local_6f4,&local_624);
      }
      else {
        bVar43 = false;
        do {
          uVar40 = ossl_quic_cfq_item_get_frame_type(lVar19);
          uVar21 = ossl_quic_cfq_item_get_encoded(lVar19);
          uVar37 = ossl_quic_cfq_item_get_encoded_len(lVar19);
          if (uVar40 == 0x19) {
            if (-1 < (char)uVar13) goto LAB_0010251f;
LAB_001024ca:
            lVar42 = 0;
            if ((puVar38[0x34] & 1) == 0) {
              lVar42 = *(long *)(puVar38 + 0x20);
            }
            if ((ulong)((*(long *)(puVar38 + 8) - *(long *)(puVar38 + 0x10)) - lVar42) < uVar37)
            break;
            iVar12 = tx_helper_append_iovec(puVar38,uVar21,uVar37);
            if (iVar12 == 0) goto LAB_0010268d;
            ossl_quic_txpim_pkt_add_cfq_item(puVar18,lVar19);
            if ((0x1d < uVar40) || ((0x3000000dUL >> (uVar40 & 0x3f) & 1) == 0)) {
              puVar38[0x34] = puVar38[0x34] | 1;
              bVar10 = true;
            }
          }
          else if (uVar40 < 0x1a) {
            if (uVar40 != 7) {
              if (uVar40 != 0x18) goto LAB_001025b0;
              uVar30 = uVar13 & 0x40;
              goto joined_r0x001024c8;
            }
            if ((uVar33 & 0x10) != 0) {
              if (!bVar43) {
                iVar12 = txp_generate_pre_token(param_1,puVar38,uVar36 == local_6f4,&local_624);
                bVar43 = iVar12 != 0;
              }
              goto LAB_001024ca;
            }
          }
          else if (uVar40 == 0x1b) {
            if ((uVar13 & 0x20) != 0) {
              *(undefined4 *)(puVar35 + 0xd8) = 1;
              goto LAB_001024ca;
            }
          }
          else {
LAB_001025b0:
            uVar30 = uVar33 & 8;
joined_r0x001024c8:
            if (uVar30 != 0) goto LAB_001024ca;
          }
LAB_0010251f:
          lVar19 = ossl_quic_cfq_item_get_priority_next(lVar19,uVar34);
        } while (lVar19 != 0);
        if (!bVar43) goto LAB_00102bc0;
      }
      if ((uVar13 & 4) != 0) {
        uVar30 = *(uint *)(puVar35 + -0x10);
        uVar28 = 0;
        if (uVar30 != 0) {
          uVar28 = (uVar30 != 2) + 1;
        }
        uVar21 = *(undefined8 *)(puVar35 + 0x48);
        local_5a8 = 0;
        local_5f8 = 0;
        lVar19 = 0;
        local_5c8 = (undefined1  [16])0x0;
        local_5b8 = (undefined1  [16])0x0;
        local_608 = (undefined1  [16])0x0;
        local_5e8 = (undefined1  [16])0x0;
        local_5d8 = (undefined1  [16])0x0;
        while( true ) {
          lVar42 = 0;
          if ((puVar38[0x34] & 1) == 0) {
            lVar42 = *(long *)(puVar38 + 0x20);
          }
          uVar40 = (*(long *)(puVar38 + 8) - *(long *)(puVar38 + 0x10)) - lVar42;
          if (uVar40 < 4) goto LAB_00101765;
          local_618 = 2;
          iVar12 = ossl_quic_sstream_get_stream_frame
                             (param_1[(ulong)uVar28 + 0x24],lVar19,local_5c8,local_588,&local_618);
          if (iVar12 == 0) goto LAB_00101765;
          uVar25 = local_5b8._0_8_;
          local_608._0_8_ = local_5c8._8_8_;
          if (local_5b8._0_8_ == 0) goto LAB_00101765;
          local_608._8_8_ = 0;
          lVar19 = ossl_quic_wire_get_encoded_frame_len_crypto_hdr(local_608);
          if ((lVar19 == 0) ||
             (iVar12 = determine_len(uVar40,uVar25,lVar19 + -1,local_610,local_608 + 8), iVar12 == 0
             )) goto LAB_00101765;
          ossl_quic_sstream_adjust_iov(local_608._8_8_,local_588,local_618);
          uVar40 = param_1[(ulong)uVar30 * 4 + 0x48];
          if (uVar40 < *(long *)(puVar38 + 0x28) + 3U) {
            if (uVar40 == 0) {
              iVar12 = 0x80;
              lVar19 = 8;
            }
            else {
              lVar19 = uVar40 * 2;
              iVar12 = (int)(uVar40 << 5);
            }
            pvVar23 = CRYPTO_realloc((void *)param_1[(ulong)uVar30 * 4 + 0x47],iVar12,
                                     "ssl/quic/quic_txp.c",0xc5b);
            if (pvVar23 == (void *)0x0) goto LAB_0010268d;
            param_1[(ulong)uVar30 * 4 + 0x47] = pvVar23;
            param_1[(ulong)uVar30 * 4 + 0x48] = lVar19;
          }
          lVar19 = tx_helper_begin(puVar38);
          if (lVar19 == 0) goto LAB_0010268d;
          iVar12 = ossl_quic_wire_encode_frame_crypto_hdr(lVar19,local_608);
          if (iVar12 == 0) break;
          iVar12 = tx_helper_commit(puVar38);
          if (iVar12 == 0) goto LAB_0010268d;
          uVar40 = local_618;
          if (local_618 != 0) {
            uVar40 = 1;
            tx_helper_append_iovec(puVar38,local_588[0],local_588[1]);
            if (1 < local_618) {
              uVar40 = 2;
              tx_helper_append_iovec(puVar38,local_588[2],local_588[3]);
            }
          }
          puVar38[0x34] = puVar38[0x34] | 1;
          local_5d8[8] = local_5d8[8] & 0xfe;
          local_5e8._8_8_ = local_608._0_8_;
          local_5e8._0_8_ = 0xffffffffffffffff;
          local_5d8._0_8_ = local_608._0_8_ + local_608._8_8_ + -1;
          iVar12 = ossl_quic_txpim_pkt_append_chunk(uVar21,local_5e8);
          if (iVar12 == 0) goto LAB_0010268d;
          bVar10 = true;
          lVar19 = uVar40 + 1;
        }
        if ((local_450[uVar41 * 0x120] & 1) != 0) {
          WPACKET_cleanup(puVar35);
          local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
          *(undefined8 *)(puVar35 + -8) = 0;
        }
      }
LAB_00101765:
      if (((uVar33 & 1) != 0) && ((*(byte *)((long)param_1 + 0x1e9) & 8) != 0)) {
        ossl_quic_stream_iter_init(local_5e8,param_1[0x18],1);
        if (local_5d8._0_8_ != 0) {
          local_688 = 0;
          lVar19 = local_5d8._0_8_;
          do {
            ossl_quic_stream_iter_next(local_5e8);
            uVar21 = local_5d8._0_8_;
            uVar40 = *(ulong *)(lVar19 + 0x100) & 0xfffffffe8fffffff;
            *(ulong *)(lVar19 + 0x100) = uVar40;
            *(undefined8 *)(lVar19 + 0x60) = 0;
            uVar40 = uVar40 >> 0x20;
            if ((uVar40 & 4) != 0) {
              lVar42 = tx_helper_begin(puVar38);
              if (lVar42 == 0) goto LAB_0010268d;
              local_5c8 = *(undefined1 (*) [16])(lVar19 + 0x38);
              iVar12 = ossl_quic_wire_encode_frame_stop_sending(lVar42,local_5c8);
              if (iVar12 != 0) {
                iVar12 = tx_helper_commit(puVar38);
                if (iVar12 != 0) {
                  uVar40 = (ulong)*(byte *)(lVar19 + 0x104);
                  puVar38[0x34] = puVar38[0x34] | 1;
                  *(byte *)(lVar19 + 0x103) = *(byte *)(lVar19 + 0x103) | 0x20;
                  bVar10 = true;
                  goto LAB_00103012;
                }
                goto LAB_0010268d;
              }
LAB_00103e23:
              if ((local_450[uVar41 * 0x120] & 1) != 0) {
                WPACKET_cleanup(puVar35);
                local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
                *(undefined8 *)(puVar35 + -8) = 0;
              }
LAB_001036a8:
              *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(puVar35 + 0x50);
              *(long *)(puVar35 + 0x50) = lVar19;
              break;
            }
LAB_00103012:
            if ((uVar40 & 8) != 0) {
              if ((*(char *)(lVar19 + 0x101) == '\x05') &&
                 (lVar42 = tx_helper_begin(puVar38), lVar42 != 0)) {
                local_5c8._8_8_ = *(undefined8 *)(lVar19 + 0x48);
                local_5c8._0_8_ = *(undefined8 *)(lVar19 + 0x38);
                if (*(char *)(lVar19 + 0x101) == '\x02') {
                  iVar12 = ossl_quic_sstream_get_final_size
                                     (*(undefined8 *)(lVar19 + 0x70),local_5b8);
                  if (iVar12 == 0) goto LAB_0010268d;
                }
                else {
                  if (3 < (byte)(*(char *)(lVar19 + 0x101) - 3U)) goto LAB_0010268d;
                  local_5b8._0_8_ = *(undefined8 *)(lVar19 + 0x68);
                }
                iVar12 = ossl_quic_wire_encode_frame_reset_stream(lVar42,local_5c8);
                if (iVar12 == 0) {
                  if ((local_450[uVar41 * 0x120] & 1) != 0) {
                    WPACKET_cleanup(puVar35);
                    local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
                    *(undefined8 *)(puVar35 + -8) = 0;
                  }
                  goto LAB_001036a8;
                }
                iVar12 = tx_helper_commit(puVar38);
                if (iVar12 != 0) {
                  puVar38[0x34] = puVar38[0x34] | 1;
                  *(byte *)(lVar19 + 0x103) = *(byte *)(lVar19 + 0x103) | 0x40;
                  uVar25 = local_5b8._0_8_;
                  uVar40 = ossl_quic_txfc_get_swm(lVar19 + 0x80);
                  if ((ulong)uVar25 <= uVar40) {
                    uVar25 = local_5b8._0_8_;
                    lVar42 = ossl_quic_txfc_get_swm(lVar19 + 0x80);
                    bVar10 = true;
                    *(long *)(lVar19 + 0x60) = uVar25 - lVar42;
                    goto LAB_001030f2;
                  }
                }
              }
              goto LAB_0010268d;
            }
LAB_001030f2:
            if ((*(char *)(lVar19 + 0x102) == '\x01') &&
               (((*(byte *)(lVar19 + 0x104) & 2) != 0 ||
                (iVar12 = ossl_quic_rxfc_has_cwm_changed(lVar19 + 0xa0,0), iVar12 != 0)))) {
              lVar42 = tx_helper_begin(puVar38);
              if (lVar42 == 0) goto LAB_0010268d;
              uVar25 = ossl_quic_rxfc_get_cwm(lVar19 + 0xa0);
              iVar12 = ossl_quic_wire_encode_frame_max_stream_data
                                 (lVar42,*(undefined8 *)(lVar19 + 0x38),uVar25);
              if (iVar12 == 0) goto LAB_00103e23;
              iVar12 = tx_helper_commit(puVar38);
              if (iVar12 == 0) goto LAB_0010268d;
              puVar38[0x34] = puVar38[0x34] | 1;
              *(byte *)(lVar19 + 0x103) = *(byte *)(lVar19 + 0x103) | 0x10;
              bVar10 = true;
            }
            if (*(byte *)(lVar19 + 0x101) - 1 < 3) {
              if ((*(byte *)(lVar19 + 0x104) & 8) != 0) goto LAB_0010268d;
              uVar25 = *(undefined8 *)(lVar19 + 0x70);
              uVar40 = *(ulong *)(lVar19 + 0x38);
              lVar42 = lVar19 + 0x80;
              uVar4 = *(undefined8 *)(puVar35 + 0x48);
              uVar33 = *(uint *)(puVar35 + -0x10);
              puVar32 = local_588;
              for (lVar27 = 0x18; lVar27 != 0; lVar27 = lVar27 + -1) {
                *puVar32 = 0;
                puVar32 = puVar32 + (ulong)bVar44 * -2 + 1;
              }
              uVar37 = ossl_quic_txfc_get_swm(lVar42);
              iVar12 = txp_plan_stream_chunk_isra_0(uVar25,lVar42,0,local_588,local_688);
              if (iVar12 == 0) {
LAB_00103e0c:
                lVar14 = 0;
LAB_0010393f:
                *(long *)(lVar19 + 0x60) = lVar14;
                *(long *)(lVar19 + 0x30) = local_440[uVar41 * 0x24 + 1];
                local_440[uVar41 * 0x24 + 1] = lVar19;
                goto LAB_0010268d;
              }
              if ((int)local_530 == 0) {
                *(undefined8 *)(lVar19 + 0x60) = 0;
              }
              else {
                local_588[0] = uVar40;
                iVar12 = txp_plan_stream_chunk_isra_0(uVar25,lVar42,1,local_528);
                if (iVar12 == 0) goto LAB_00103e0c;
                local_528[0] = uVar40;
                bVar43 = false;
                lVar27 = 1;
                local_6c8 = uVar37;
                do {
                  lVar31 = 0;
                  if ((puVar38[0x34] & 1) == 0) {
                    lVar31 = *(long *)(puVar38 + 0x20);
                  }
                  uVar30 = (uint)(lVar27 + -1) & 1;
                  uVar40 = (ulong)uVar30;
                  uVar17 = (*(long *)(puVar38 + 8) - *(long *)(puVar38 + 0x10)) - lVar31;
                  if (*(int *)(&local_530 + uVar40 * 0xc) == 0) break;
                  if (uVar17 < 3) goto LAB_001037d3;
                  if ((puVar38[0x34] & 2) != 0) {
LAB_0010390a:
                    lVar14 = local_6c8 - uVar37;
                    goto LAB_0010393f;
                  }
                  uVar5 = (&uStack_560)[uVar40 * 0xc];
                  uVar24 = (ulong)(-uVar30 & 0x60);
                  lVar31 = (long)local_588 + uVar24;
                  uVar30 = (uint)lVar27;
                  if ((lVar27 + -1 != 0) &&
                     (iVar12 = txp_plan_stream_chunk_isra_0
                                         (uVar25,lVar42,lVar27,
                                          (ulong)(-(uVar30 & 1) & 0x60) + (long)local_588,local_688)
                     , iVar12 == 0)) goto LAB_0010390a;
                  uVar6 = local_588[uVar40 * 0xc + 2];
                  local_568[uVar40 * 0x60] = local_568[uVar40 * 0x60] & 0xfe;
                  local_588[uVar40 * 0xc + 2] = 0;
                  lVar22 = ossl_quic_wire_get_encoded_frame_len_stream_hdr(lVar31);
                  local_588[uVar40 * 0xc + 2] = uVar6;
                  if ((lVar22 == 0) ||
                     (iVar12 = determine_len(uVar17,uVar6,
                                             lVar22 + -1 +
                                             (ulong)((local_568[uVar40 * 0x60] & 1) == 0),&local_620
                                             ,&local_618), iVar12 == 0)) {
LAB_001037d3:
                    *(ulong *)(lVar19 + 0x60) = local_6c8 - uVar37;
                    goto LAB_001036a8;
                  }
                  if ((((uVar21 == 0) && (*(int *)(&local_530 + (ulong)(uVar30 & 1) * 0xc) == 0)) ||
                      (uVar17 <= local_620 + local_618)) && (*(int *)(puVar35 + 0xd8) == 0)) {
                    bVar43 = true;
                    local_568[uVar40 * 0x60] = local_568[uVar40 * 0x60] & 0xfe;
                    uVar17 = local_618;
                  }
                  else {
                    local_568[uVar40 * 0x60] = local_568[uVar40 * 0x60] | 1;
                    local_588[uVar40 * 0xc + 2] = 0;
                    lVar22 = ossl_quic_wire_get_encoded_frame_len_stream_hdr(lVar31);
                    local_588[uVar40 * 0xc + 2] = uVar6;
                    if ((lVar22 == 0) ||
                       (iVar12 = determine_len(uVar17,uVar6,
                                               lVar22 + -1 +
                                               (ulong)((local_568[uVar40 * 0x60] & 1) == 0),
                                               local_610,local_608), iVar12 == 0))
                    goto LAB_001037d3;
                    uVar17 = local_608._0_8_;
                  }
                  local_588[uVar40 * 0xc + 2] = uVar17;
                  if ((local_568[uVar40 * 0x60] & 2) != 0) {
                    *(undefined4 *)(&local_530 + (ulong)(uVar30 & 1) * 0xc) = 0;
                  }
                  if (uVar17 < uVar5) {
                    local_568[uVar40 * 0x60] = local_568[uVar40 * 0x60] & 0xfd;
                  }
                  ossl_quic_sstream_adjust_iov
                            (uVar17,(long)auStack_558 + uVar24,(&local_530)[uVar40 * 0xc + -1]);
                  uVar17 = param_1[(ulong)uVar33 * 4 + 0x48];
                  if (uVar17 < *(long *)(puVar38 + 0x28) + 3U) {
                    if (uVar17 == 0) {
                      iVar12 = 0x80;
                      lVar22 = 8;
                    }
                    else {
                      lVar22 = uVar17 * 2;
                      iVar12 = (int)(uVar17 << 5);
                    }
                    pvVar23 = CRYPTO_realloc((void *)param_1[(ulong)uVar33 * 4 + 0x47],iVar12,
                                             "ssl/quic/quic_txp.c",0xc5b);
                    if (pvVar23 == (void *)0x0) goto LAB_0010390a;
                    param_1[(ulong)uVar33 * 4 + 0x47] = pvVar23;
                    param_1[(ulong)uVar33 * 4 + 0x48] = lVar22;
                  }
                  lVar22 = tx_helper_begin(puVar38);
                  if (lVar22 == 0) goto LAB_0010390a;
                  iVar12 = ossl_quic_wire_encode_frame_stream_hdr(lVar22,lVar31);
                  if (iVar12 == 0) {
                    if ((local_450[uVar41 * 0x120] & 1) != 0) {
                      WPACKET_cleanup(puVar35);
                      local_450[uVar41 * 0x120] = local_450[uVar41 * 0x120] & 0xfe;
                      *(undefined8 *)(puVar35 + -8) = 0;
                    }
                    goto LAB_001037d3;
                  }
                  iVar12 = tx_helper_commit(puVar38);
                  if (iVar12 == 0) goto LAB_0010390a;
                  if ((&local_530)[uVar40 * 0xc + -1] != 0) {
                    tx_helper_append_iovec
                              (puVar38,auStack_558[uVar40 * 0xc],auStack_558[uVar40 * 0xc + 1]);
                    if (1 < (&local_530)[uVar40 * 0xc + -1]) {
                      tx_helper_append_iovec
                                (puVar38,auStack_558[uVar40 * 0xc + 2],
                                 (&local_530)[uVar40 * 0xc + -2]);
                    }
                  }
                  bVar3 = puVar38[0x34];
                  puVar38[0x34] = bVar3 | 1;
                  if ((local_568[uVar40 * 0x60] & 1) == 0) {
                    puVar38[0x34] = bVar3 | 3;
                  }
                  uVar24 = local_588[uVar40 * 0xc + 1] + local_588[uVar40 * 0xc + 2];
                  uVar17 = local_6c8;
                  if (local_6c8 < uVar24) {
                    uVar17 = uVar24;
                  }
                  local_5c8._8_8_ = local_588[uVar40 * 0xc + 1];
                  local_5c8._0_8_ = local_588[uVar40 * 0xc];
                  if (local_588[uVar40 * 0xc + 2] == 0) {
                    uVar17 = local_6c8;
                  }
                  local_5b8._0_8_ = uVar24 - 1;
                  local_5b8[8] = local_5b8[8] & 0xf8 | local_568[uVar40 * 0x60] >> 1 & 1;
                  iVar12 = ossl_quic_txpim_pkt_append_chunk(uVar4);
                  local_6c8 = uVar17;
                  if (iVar12 == 0) goto LAB_0010390a;
                  bVar10 = true;
                  lVar27 = lVar27 + 1;
                } while (uVar5 <= local_588[uVar40 * 0xc + 2]);
                local_688 = local_688 + (local_6c8 - uVar37);
                *(ulong *)(lVar19 + 0x60) = local_6c8 - uVar37;
                if (bVar43) goto LAB_001036a8;
              }
            }
            *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(puVar35 + 0x50);
            *(long *)(puVar35 + 0x50) = lVar19;
            lVar19 = local_5d8._0_8_;
          } while (local_5d8._0_8_ != 0);
        }
      }
      puVar38[0x34] = puVar38[0x34] | 1;
      if (bVar10) {
LAB_0010178b:
        cVar9 = '\x01';
        uVar13 = 1;
      }
      else {
        if (((uVar13 & 2) != 0) &&
           (((char)(uVar13 >> 8) < '\0' ||
            (((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> ((ulong)uVar34 & 0x3f) & 1) != 0)))) {
          lVar19 = tx_helper_begin(puVar38);
          if ((lVar19 == 0) ||
             ((iVar12 = ossl_quic_wire_encode_frame_ping(lVar19), iVar12 == 0 ||
              (iVar12 = tx_helper_commit(puVar38), iVar12 == 0)))) goto LAB_0010268d;
          goto LAB_0010178b;
        }
        uVar13 = (uint)(local_624 == 0);
        cVar9 = '\0';
      }
      lVar19 = *(long *)(puVar35 + 200);
      lVar42 = *(long *)(puVar38 + 0x10);
      uVar21 = param_1[0x20];
      *puVar18 = param_1[(ulong)uVar34 + 0x38];
      puVar18[1] = lVar19 + lVar42;
      *(byte *)(puVar18 + 4) =
           (byte)(uVar13 << 2) | (byte)uVar34 & 0x3f | cVar9 << 3 | *(byte *)(puVar18 + 4) & 0xc0;
      uVar21 = (*(code *)param_1[0x1f])(uVar21);
      puVar18[2] = uVar21;
      *(char *)(puVar18 + 0xf) = (char)local_430[uVar41 * 0x48];
      bVar10 = true;
      if (*(int *)(puVar35 + 0xd8) == 0) {
        bVar10 = bVar11;
      }
      bVar11 = bVar10;
      *(ulong *)(puVar35 + 0xc0) = *(long *)(puVar35 + 200) + *(long *)(puVar35 + -0x30) + local_730
      ;
LAB_0010184e:
      uVar36 = uVar36 + 1;
      if (uVar36 == 4) break;
    }
    local_720 = local_720 + 4;
    local_728 = local_728 + 1;
    local_748 = local_748 + 3;
    uVar41 = (ulong)((uVar36 != 2) + 1);
    local_730 = local_3c8[(ulong)(uVar36 - 1) * 0x24];
    *(ulong *)(puVar35 + 0x1e0) = local_730;
    puVar35 = puVar35 + 0x120;
  } while( true );
  if (((local_448[0] != 0) && (local_4b8 != 0)) || (bVar11)) {
    puVar20 = local_430;
    uVar40 = 0;
    uVar37 = 0;
    uVar41 = 4;
    do {
      if ((puVar20[-6] != 0) && (lVar14 = *(long *)(puVar20 + -0x22), lVar14 != 0)) {
        if (((int)uVar41 == 4) &&
           (((abStack_3b3[uVar37 * 0x120] & 0x40) != 0 && ((local_494[uVar37 * 0x120] & 2) == 0))))
        {
          uVar41 = uVar37;
        }
        if (puVar20[-0x1a] == 0) {
          lVar19 = *(long *)(puVar20 + 0x1c);
        }
        else {
          iVar12 = ossl_qtx_calculate_ciphertext_payload_len
                             (param_1[0x14],puVar20[-0x1a],lVar14,local_5c8);
          if (iVar12 == 0) {
            lVar19 = *(long *)(puVar20 + 0x1c);
            lVar14 = *(long *)(puVar20 + -0x22);
          }
          else {
            *(undefined8 *)(puVar20 + 0x12) = local_5c8._0_8_;
            iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len((char)puVar20[2],puVar20);
            lVar19 = (local_5c8._0_8_ - *(long *)(puVar20 + -0x22)) + (long)iVar12;
            lVar14 = *(long *)(puVar20 + -0x22);
            *(long *)(puVar20 + 0x1c) = lVar19;
          }
        }
        uVar40 = uVar40 + lVar19 + lVar14;
      }
      uVar36 = (int)uVar37 + 1;
      uVar37 = (ulong)uVar36;
      puVar20 = puVar20 + 0x48;
    } while (uVar36 != 4);
    if ((int)uVar41 == 4) {
      if (uVar40 < 0x4b0) {
        lVar14 = 0;
        uVar29 = 1;
        goto LAB_00101d48;
      }
    }
    else if (uVar40 < 0x4b0) {
      lVar14 = uVar41 * 0x120;
      if ((local_448[uVar41 * 0x48] != 0) && (local_440[uVar41 * 0x24] != 0)) {
        lVar19 = tx_helper_begin(local_4c8 + lVar14);
        if (lVar19 != 0) {
          iVar12 = ossl_quic_wire_encode_padding(lVar19,0x4b0 - uVar40);
          if (iVar12 == 0) {
            if ((local_450[lVar14] & 1) != 0) {
              WPACKET_cleanup(local_488 + lVar14);
              local_450[lVar14] = local_450[lVar14] & 0xfe;
              lVar14 = 0;
              (&local_490)[uVar41 * 0x24] = 0;
              uVar29 = 0;
              goto LAB_00101d48;
            }
          }
          else {
            iVar12 = tx_helper_commit(local_4c8 + lVar14);
            if (iVar12 != 0) {
              lVar14 = local_440[uVar41 * 0x24];
              plVar1 = (long *)(lVar14 + 8);
              *plVar1 = *plVar1 + (0x4b0 - uVar40);
              pbVar2 = (byte *)(lVar14 + 0x20);
              *pbVar2 = *pbVar2 | 4;
              goto LAB_00101a36;
            }
          }
        }
      }
LAB_00102320:
      lVar14 = 0;
      uVar29 = 0;
      goto LAB_00101d48;
    }
  }
LAB_00101a36:
  puVar20 = local_430;
  lVar14 = 0;
  uVar36 = 0;
LAB_00101a41:
  do {
    if ((puVar20[-6] != 0) && (*(long *)(puVar20 + -0x22) != 0)) {
      iVar12 = ossl_quic_tx_packetiser_check_unvalidated_credit(param_1);
      if (iVar12 == 0) {
        uVar29 = 2;
        goto LAB_00101d48;
      }
      ossl_quic_tx_packetiser_consume_unvalidated_credit(param_1,*(undefined8 *)(puVar20 + -0x22));
      uVar34 = puVar20[-0x1a];
      if (uVar34 == 0) {
        if (*(long *)(puVar20 + -0x22) != 0) {
          local_750 = 0;
          lVar19 = *(long *)(puVar20 + -4);
          goto LAB_00101ab2;
        }
      }
      else if (uVar34 == 2) {
        if (*(long *)(puVar20 + -0x22) != 0) {
          local_750 = 1;
          lVar19 = *(long *)(puVar20 + -4);
LAB_00101ab2:
          local_5a8 = 0;
          uVar13 = *(uint *)(archetypes + ((ulong)uVar34 * 3 + uVar26) * 4);
          lVar42 = (long)param_1 + 0x2c;
          local_5c8._8_8_ = param_1[(ulong)uVar34 * 4 + 0x47];
          local_5c8._0_8_ = puVar20;
          local_5b8._0_8_ = *(undefined8 *)(puVar20 + -0x1c);
          iVar12 = BIO_ADDR_family(lVar42);
          local_598 = 1;
          if (iVar12 == 0) {
            lVar42 = 0;
          }
          local_5b8._8_8_ = lVar42;
          local_5a0 = param_1[local_750 + 0x38];
          for (lVar42 = *(long *)(puVar20 + -2); lVar42 != 0; lVar42 = *(long *)(lVar42 + 0x30)) {
            if ((*(byte *)(lVar42 + 0x103) & 0x60) != 0) {
              local_5e8._8_8_ = 0xffffffffffffffff;
              local_5e8._0_8_ = *(undefined8 *)(lVar42 + 0x38);
              auVar8._1_7_ = local_5d8._9_7_;
              auVar8[0] = *(byte *)(lVar42 + 0x103) >> 4 & 6 | local_5d8[8] & 0xf8;
              auVar8._8_8_ = 0;
              local_5d8 = auVar8 << 0x40;
              iVar12 = ossl_quic_txpim_pkt_append_chunk(lVar19,local_5e8);
              if (iVar12 == 0) goto LAB_00101c00;
            }
          }
          iVar12 = ossl_quic_fifd_pkt_commit(param_1 + 0x2b,lVar19);
          if (iVar12 != 0) {
            param_1[local_750 + 0x38] = param_1[local_750 + 0x38] + 1;
            iVar12 = ossl_qtx_write_pkt(param_1[0x14],local_5c8);
            if (iVar12 != 0) {
              lVar42 = *(long *)(puVar20 + -2);
              uVar33 = 1;
              if (lVar42 != 0) {
                uVar33 = 1;
                do {
                  bVar44 = *(byte *)(lVar42 + 0x103);
                  if ((bVar44 & 0x10) != 0) {
                    *(byte *)(lVar42 + 0x104) = *(byte *)(lVar42 + 0x104) & 0xfd;
                    ossl_quic_rxfc_has_cwm_changed(lVar42 + 0xa0,1);
                    bVar44 = *(byte *)(lVar42 + 0x103);
                  }
                  if ((bVar44 & 0x20) != 0) {
                    *(byte *)(lVar42 + 0x104) = *(byte *)(lVar42 + 0x104) & 0xfb;
                  }
                  if ((bVar44 & 0x40) != 0) {
                    *(byte *)(lVar42 + 0x104) = *(byte *)(lVar42 + 0x104) & 0xf7;
                  }
                  if (*(long *)(lVar42 + 0x60) != 0) {
                    iVar12 = ossl_quic_txfc_consume_credit(lVar42 + 0x80);
                    *(undefined8 *)(lVar42 + 0x60) = 0;
                    if (iVar12 == 0) {
                      uVar33 = 0;
                    }
                  }
                  ossl_quic_stream_map_update_state(param_1[0x18],lVar42);
                  if (((*(byte *)(lVar42 + 0x101) - 1 < 3) &&
                      (iVar12 = ossl_quic_sstream_has_pending(*(undefined8 *)(lVar42 + 0x70)),
                      iVar12 == 0)) &&
                     (iVar12 = ossl_quic_sstream_get_final_size(*(undefined8 *)(lVar42 + 0x70),0),
                     iVar12 != 0)) {
                    ossl_quic_stream_map_notify_all_data_sent(param_1[0x18],lVar42);
                  }
                  lVar42 = *(long *)(lVar42 + 0x30);
                } while (lVar42 != 0);
              }
              if ((*(byte *)(lVar19 + 0x20) & 8) != 0) {
                *(ushort *)(param_1 + 0x3d) =
                     *(ushort *)(param_1 + 0x3d) & 0xfc7f |
                     (ushort)(((uint)(*(ushort *)(param_1 + 0x3d) >> 7) &
                               ~(uint)(1L << (sbyte)local_750) & 7) << 7);
              }
              bVar44 = *(byte *)(lVar19 + 0x79);
              if ((bVar44 & 1) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfe;
              }
              if ((bVar44 & 2) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfd;
                ossl_quic_rxfc_has_cwm_changed(param_1[0x1a],1);
                bVar44 = *(byte *)(lVar19 + 0x79);
              }
              if ((bVar44 & 4) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfb;
                ossl_quic_rxfc_has_cwm_changed(param_1[0x1b],1);
                bVar44 = *(byte *)(lVar19 + 0x79);
              }
              if ((bVar44 & 8) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xf7;
                ossl_quic_rxfc_has_cwm_changed(param_1[0x1c],1);
                bVar44 = *(byte *)(lVar19 + 0x79);
              }
              if ((bVar44 & 0x10) != 0) {
                *(byte *)(param_1 + 0x3d) =
                     *(byte *)(param_1 + 0x3d) & 0x8f |
                     (byte)((~(uint)(1L << (sbyte)local_750) & *(byte *)(param_1 + 0x3d) >> 4 & 7)
                           << 4);
              }
              if ((bVar44 & 0x20) != 0) {
                *(byte *)((long)param_1 + 0x1e9) = *(byte *)((long)param_1 + 0x1e9) & 0xfb;
              }
              if ((*(byte *)(lVar19 + 0x20) & 8) != 0) {
                piVar15 = (int *)ossl_ackm_get0_probe_request(param_1[0x17]);
                if (uVar34 == 0) {
                  if (*piVar15 != 0) {
                    *piVar15 = *piVar15 + -1;
                  }
                }
                else if ((uVar34 == 2) && (piVar15[1] != 0)) {
                  piVar15[1] = piVar15[1] + -1;
                }
                if (((uVar13 & 0x2000) != 0) && (piVar15[local_750 + 2] != 0)) {
                  piVar15[local_750 + 2] = piVar15[local_750 + 2] + -1;
                }
              }
              if (uVar33 != 0) {
                if (*(int *)*param_2 == 0) {
                  uVar33 = *(byte *)(*(long *)(puVar20 + -4) + 0x20) >> 3 & 1;
                }
                *(uint *)*param_2 = uVar33;
                if (uVar36 != 2) {
                  puVar20[-4] = 0;
                  puVar20[-3] = 0;
                  lVar14 = lVar14 + 1;
                  goto LAB_00101d2b;
                }
                uVar34 = local_208;
                if (local_208 != 0) {
                  uVar34 = (uint)(local_278 != 0);
                }
                lVar14 = lVar14 + 1;
                local_200 = 0;
                puVar20 = puVar20 + 0x48;
                uVar36 = 3;
                *(uint *)(*param_2 + 4) = uVar34;
                goto LAB_00101a41;
              }
            }
            uVar29 = 0;
            local_440[(ulong)uVar36 * 0x24] = 0;
            goto LAB_00101d48;
          }
        }
      }
      else if ((*(long *)(puVar20 + -0x22) != 0) && (lVar19 = *(long *)(puVar20 + -4), uVar34 < 4))
      {
        local_750 = 2;
        goto LAB_00101ab2;
      }
LAB_00101c00:
      uVar29 = 0;
      goto LAB_00101d48;
    }
LAB_00101d2b:
    uVar36 = uVar36 + 1;
    puVar20 = puVar20 + 0x48;
  } while (uVar36 != 4);
  uVar29 = 1;
LAB_00101d48:
  uVar26 = 0;
  ossl_qtx_finish_dgram(param_1[0x14]);
  do {
    if (*(int *)(puVar39 + 0x40) != 0) {
      if ((local_450[uVar26 * 0x120] & 1) != 0) {
        WPACKET_cleanup(puVar39);
        local_450[uVar26 * 0x120] = local_450[uVar26 * 0x120] & 0xfe;
        *(undefined8 *)(puVar39 + -8) = 0;
      }
      *(undefined8 *)(puVar39 + -0x40) = 0;
      *(undefined4 *)(puVar39 + 0x40) = 0;
      if (*(long *)(puVar39 + 0x48) != 0) {
        ossl_quic_txpim_pkt_release(param_1[0x15]);
        *(undefined8 *)(puVar39 + 0x48) = 0;
      }
    }
    uVar36 = (int)uVar26 + 1;
    uVar26 = (ulong)uVar36;
    puVar39 = puVar39 + 0x120;
  } while (uVar36 != 4);
  *(long *)(*param_2 + 8) = lVar14;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_tx_packetiser_record_received_closing_bytes(long param_1,long param_2)

{
  *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + param_2;
  return;
}



undefined8 ossl_quic_tx_packetiser_schedule_conn_close(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = param_2[4];
  uVar3 = ossl_qtx_get_mdpl(*(undefined8 *)(param_1 + 0xa0));
  if ((*(byte *)(param_1 + 0x1e9) & 4) != 0) {
    return 0;
  }
  if (uVar3 >> 1 <= uVar5) {
    uVar5 = uVar3 >> 1;
  }
  lVar4 = 0;
  if ((uVar5 != 0) &&
     (lVar4 = CRYPTO_memdup(param_2[3],uVar5,"ssl/quic/quic_txp.c",0xc76), lVar4 == 0)) {
    return 0;
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x1f0) = *param_2;
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(byte *)(param_1 + 0x1e9) = *(byte *)(param_1 + 0x1e9) | 4;
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  *(ulong *)(param_1 + 0x210) = uVar5;
  *(long *)(param_1 + 0x208) = lVar4;
  return 1;
}



void ossl_quic_tx_packetiser_set_msg_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2a8) = param_2;
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
  return;
}



void ossl_quic_tx_packetiser_set_msg_callback_arg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2b0) = param_2;
  return;
}



undefined8 ossl_quic_tx_packetiser_get_next_pn(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (param_2 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x1c0 + (ulong)param_2 * 8);
  }
  return uVar1;
}



ulong ossl_quic_tx_packetiser_get_deadline(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  
  uVar6 = 0xffffffffffffffff;
  iVar4 = 0;
  do {
    iVar1 = ossl_qtx_is_enc_level_provisioned(*(undefined8 *)(param_1 + 0xa0),iVar4);
    if (iVar1 != 0) {
      cVar5 = '\0';
      if (iVar4 != 0) {
        cVar5 = (iVar4 != 2) + '\x01';
      }
      uVar2 = ossl_ackm_get_ack_deadline(*(undefined8 *)(param_1 + 0xb8),cVar5);
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  lVar3 = (**(code **)(*(long *)(param_1 + 0xe8) + 0x30))(*(undefined8 *)(param_1 + 0xf0));
  if (lVar3 == 0) {
    uVar2 = (**(code **)(*(long *)(param_1 + 0xe8) + 0x38))(*(undefined8 *)(param_1 + 0xf0));
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
  }
  return uVar6;
}


