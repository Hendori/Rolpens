
ulong determine_len(ulong param_1,ulong param_2,long param_3,ulong *param_4,ulong *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_28;
  
  uVar1 = param_3 + 1;
  uVar3 = param_3 + 2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (param_2 == 0) {
    local_58 = 0;
    uVar5 = (ulong)(uVar1 <= param_1);
    if (uVar3 <= param_1) {
      uVar5 = uVar5 | 0x100000000;
    }
    local_50 = 0;
    local_28 = param_3 + 8;
    local_48 = 0;
    bVar7 = param_3 + 4U <= param_1;
    if (local_28 <= param_1) {
      if (bVar7) goto LAB_001001e5;
      if ((int)(uVar5 >> 0x20) != 0) goto LAB_001000a2;
      goto LAB_001001a2;
    }
LAB_00100085:
    if (bVar7) {
LAB_001001e5:
      local_28 = param_3 + 4;
      param_2 = local_48;
      goto LAB_00100189;
    }
    if ((int)(uVar5 >> 0x20) != 0) goto LAB_001000a2;
    uVar3 = uVar5 & 0xffffffff;
    if ((int)uVar5 == 0) {
      local_28 = 0;
      param_2 = 0;
      goto LAB_001001b4;
    }
  }
  else {
    local_58 = 0x3f;
    if (param_2 < 0x40) {
      local_58 = param_2;
    }
    if (param_1 < uVar1 + local_58) {
      if (param_1 < uVar1) {
        local_58 = 0;
      }
      else {
        local_58 = param_1 - uVar1;
        uVar4 = (uint)(local_58 != 0);
      }
    }
    else {
      uVar4 = 1;
    }
    uVar6 = 1;
    local_50 = 0x3fff;
    if (param_2 < 0x4000) {
      local_50 = param_2;
    }
    if (param_1 < local_50 + uVar3) {
      if (param_1 < uVar3) {
        uVar6 = 0;
        local_50 = 0;
      }
      else {
        local_50 = param_1 - uVar3;
        uVar6 = (ulong)(local_50 != 0);
      }
    }
    uVar5 = (ulong)uVar4 | uVar6 << 0x20;
    uVar6 = param_3 + 4;
    local_48 = 0x3fffffff;
    if (param_2 < 0x40000000) {
      local_48 = param_2;
    }
    if (param_1 < local_48 + uVar6) {
      if (param_1 < uVar6) {
        bVar7 = false;
        local_48 = 0;
      }
      else {
        local_48 = param_1 - uVar6;
        bVar7 = local_48 != 0;
      }
    }
    else {
      bVar7 = true;
    }
    local_28 = param_3 + 8;
    if (0x3fffffffffffffff < param_2) {
      param_2 = 0x3fffffffffffffff;
    }
    if ((param_1 < param_2 + local_28) &&
       ((param_1 < local_28 || (param_2 = param_1 - local_28, param_2 == 0)))) goto LAB_00100085;
    if ((bVar7) && (param_2 <= local_48)) goto LAB_001001e5;
LAB_00100189:
    if (((int)(uVar5 >> 0x20) != 0) && (param_2 <= local_50)) {
LAB_001000a2:
      local_28 = uVar3;
      param_2 = local_50;
    }
LAB_001001a2:
    uVar3 = 1;
    if (((int)uVar5 == 0) || (local_58 < param_2)) goto LAB_001001b4;
  }
  uVar3 = 1;
  local_28 = uVar1;
  param_2 = local_58;
LAB_001001b4:
  *param_4 = local_28;
  *param_5 = param_2;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
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
    goto LAB_00100905;
  }
  plVar1 = param_1 + 8;
  iVar2 = WPACKET_get_total_written(plVar1,&local_48);
  if (iVar2 != 0) {
    iVar2 = tx_helper_append_iovec(param_1,param_1[7],local_48);
    if (iVar2 != 0) {
      if ((*(long *)(*param_1 + 0x2a8) == 0) || (local_48 == 0)) {
LAB_001008e8:
        param_1[3] = param_1[3] + local_48;
        WPACKET_finish(plVar1);
        *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
        uVar3 = 1;
        param_1[7] = 0;
        goto LAB_00100905;
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
          goto LAB_001008e8;
        }
      }
    }
  }
  WPACKET_cleanup(plVar1);
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  uVar3 = 0;
  param_1[7] = 0;
LAB_00100905:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 txp_generate_pre_token(long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
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
  
  uVar9 = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar8 = (ulong)uVar1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      uVar9 = 1;
      uVar8 = 1;
    }
    else {
      uVar9 = 2;
      uVar8 = 2;
    }
  }
  lVar2 = *(long *)(param_2 + 0x88);
  *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x114) & 1) == 0) {
LAB_00100ac0:
    if ((((*(byte *)(param_2 + 0x115) & 4) != 0) && ((*(byte *)(param_1 + 0x1e9) & 4) != 0)) &&
       ((param_3 & 1) != 0)) {
      lVar5 = tx_helper_begin(param_2);
      pbVar6 = (byte *)(param_1 + 0x1f0);
      if (lVar5 == 0) goto LAB_00100c80;
      if (((int)uVar8 != 2) && ((*(byte *)(param_1 + 0x1f0) & 1) != 0)) {
        local_a8[0] = local_a8[0] & 0xfe;
        pbVar6 = local_a8;
        local_90 = 0;
        local_88 = 0;
        local_a0 = __LC1;
        uStack_98 = _UNK_001048d8;
      }
      iVar3 = ossl_quic_wire_encode_frame_conn_close(lVar5,pbVar6);
      if (iVar3 != 0) {
        iVar3 = WPACKET_get_total_written(lVar5,&local_b0);
        if (iVar3 != 0) {
          if (*(long *)(param_1 + 0x218) != 0) {
            uVar8 = local_b0 + *(long *)(param_1 + 0x220);
            if ((ulong)(*(long *)(param_1 + 0x218) * 3) < uVar8) goto LAB_00100b9f;
            *(ulong *)(param_1 + 0x220) = uVar8;
          }
          iVar3 = tx_helper_commit(param_2);
          if (iVar3 != 0) {
            *(byte *)(lVar2 + 0x79) = *(byte *)(lVar2 + 0x79) | 0x20;
            *param_4 = 0;
            goto LAB_00100ad8;
          }
          goto LAB_00100c80;
        }
      }
LAB_00100b9f:
      if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
        WPACKET_cleanup(param_2 + 0x40);
        *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfe;
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
    }
LAB_00100ad8:
    uVar9 = 1;
  }
  else {
    lVar5 = 0;
    if ((*(byte *)(param_2 + 0x34) & 1) == 0) {
      lVar5 = *(long *)(param_2 + 0x20);
    }
    if ((ulong)((*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10)) - lVar5) < 5)
    goto LAB_00100ac0;
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    if (((*(byte *)(param_1 + 0x1e8) >> 4 & 7) >> (uVar8 & 0x3f) & 1) == 0) {
      iVar3 = ossl_ackm_is_ack_desired(uVar7,uVar9);
      if (iVar3 == 0) goto LAB_00100ac0;
      uVar7 = *(undefined8 *)(param_1 + 0xb8);
    }
    plVar4 = (long *)ossl_ackm_get_ack_frame(uVar7,uVar9);
    if (plVar4 == (long *)0x0) goto LAB_00100ac0;
    lVar5 = tx_helper_begin(param_2);
    if (lVar5 != 0) {
      local_78 = *plVar4;
      lStack_70 = plVar4[1];
      local_68 = plVar4[2];
      lStack_60 = plVar4[3];
      local_58 = plVar4[4];
      lStack_50 = plVar4[5];
      local_48 = plVar4[6] & 0xfffffffffffffffe;
      iVar3 = ossl_quic_wire_encode_frame_ack(lVar5,*(undefined4 *)(param_1 + 0x9c),&local_78);
      if (iVar3 == 0) {
        if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
          WPACKET_cleanup(param_2 + 0x40);
          *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfe;
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
      }
      else {
        iVar3 = tx_helper_commit(param_2);
        if (iVar3 == 0) goto LAB_00100c80;
        *(byte *)(lVar2 + 0x79) = *(byte *)(lVar2 + 0x79) | 0x10;
        if (plVar4[1] != 0) {
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(*plVar4 + 8);
        }
        if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
          (**(code **)(param_1 + 0x2c0))(&local_78,uVar8,*(undefined8 *)(param_1 + 0x2c8));
        }
      }
      goto LAB_00100ac0;
    }
LAB_00100c80:
    uVar9 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
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
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char cVar8;
  bool bVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  void *pvVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined1 *puVar27;
  ulong uVar28;
  undefined4 uVar29;
  uint uVar30;
  long *plVar31;
  uint *puVar32;
  long lVar33;
  ulong *puVar34;
  uint uVar35;
  uint uVar36;
  sbyte sVar37;
  long lVar38;
  long *plVar39;
  ulong uVar40;
  uint uVar41;
  long in_FS_OFFSET;
  bool bVar42;
  bool bVar43;
  byte bVar44;
  undefined1 *local_750;
  uint *local_748;
  ulong local_738;
  undefined4 *local_730;
  undefined8 *local_728;
  uint local_6e0;
  ulong local_6c0;
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
  long local_4c8 [6];
  int local_498;
  byte local_494 [4];
  undefined8 local_490;
  undefined1 local_488 [56];
  byte local_450 [8];
  int local_448 [2];
  long local_440 [2];
  uint local_430 [2];
  undefined1 local_428;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 local_3d8 [16];
  ulong local_3c8 [2];
  byte bStack_3b3;
  long local_398;
  int local_378;
  byte local_374;
  int local_328;
  undefined1 local_310 [8];
  undefined1 local_308;
  undefined8 local_2c8;
  long local_2a0;
  byte local_293;
  long local_288 [2];
  ulong local_278;
  int local_258;
  byte local_254;
  uint local_208;
  undefined8 local_200;
  uint local_1f0 [2];
  undefined1 local_1e8;
  undefined8 local_1a8;
  undefined1 local_198 [24];
  long local_180;
  byte bStack_173;
  long local_158;
  int local_138;
  byte local_134;
  int local_e8;
  undefined1 local_d0 [8];
  undefined1 local_c8;
  undefined8 local_88;
  long local_60;
  byte local_53;
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
  uVar24 = 1;
  if ((((*piVar15 == 0) && (piVar15[1] == 0)) && (piVar15[2] == 0)) &&
     ((piVar15[3] == 0 && (piVar15[4] == 0)))) {
    uVar24 = (ulong)((uint)(lVar14 == 0) * 2);
  }
  uVar25 = 0;
  local_748 = (uint *)(archetypes + uVar24 * 4);
  uVar28 = 0;
  local_750 = local_488;
  local_728 = param_1 + 0x45;
  local_730 = &CSWTCH_52;
  plVar39 = local_4c8;
  local_3c8[0] = 0;
  local_6e0 = 4;
  bVar9 = false;
  local_738 = 0;
  do {
    puVar10 = local_750;
    uVar41 = (uint)uVar28;
    iVar12 = ossl_qtx_is_enc_level_provisioned(param_1[0x14],uVar28);
    if ((iVar12 == 0) || (uVar35 = *local_748, (~(byte)(uVar35 >> 0x10) & lVar14 == 0) != 0))
    goto LAB_00101afe;
    if ((uVar41 < local_6e0) && (local_6e0 != 3)) {
      local_6e0 = uVar41;
    }
    if ((uVar35 & 0x2000) == 0) {
      if ((uVar35 & 4) == 0) {
        if ((uVar35 & 1) == 0) goto joined_r0x00101438;
LAB_00102211:
        iVar12 = ossl_ackm_is_ack_desired(param_1[0x17],uVar25);
        if ((iVar12 == 0) && (((*(byte *)(param_1 + 0x3d) >> 4 & 7) >> uVar25 & 1) == 0))
        goto LAB_0010223f;
LAB_00101450:
        if (uVar41 == 0) {
          sVar37 = 0;
          puVar32 = local_430;
          puVar27 = local_3d8;
          plVar31 = (long *)(local_750 + -0x40);
        }
        else {
          if (uVar41 != 2) goto LAB_00102470;
LAB_0010146c:
          sVar37 = 1;
          puVar32 = local_1f0;
          puVar27 = local_198;
          plVar31 = local_288;
        }
        goto LAB_00101490;
      }
LAB_001021d0:
      local_5e8._0_8_ = 2;
      iVar12 = ossl_quic_sstream_get_stream_frame
                         (param_1[uVar25 + 0x24],0,local_5c8,local_588,local_5e8);
      if (iVar12 != 0) goto LAB_00101450;
      if ((uVar35 & 1) != 0) goto LAB_00102211;
LAB_0010223f:
      if ((uVar35 & 0x2000) != 0) {
LAB_00102248:
        if (((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> uVar25 & 1) != 0) goto LAB_00101450;
      }
joined_r0x00101438:
      if ((((uVar35 & 0x200) != 0) &&
          (((((*(byte *)(param_1 + 0x3d) & 2) != 0 ||
             (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1a],0), iVar12 != 0)) ||
            ((*(byte *)(param_1 + 0x3d) & 4) != 0)) ||
           (((iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1b],0), iVar12 != 0 ||
             ((*(byte *)(param_1 + 0x3d) & 8) != 0)) ||
            (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1c],0), iVar12 != 0)))))) ||
         ((((uVar35 & 8) != 0 && ((*(byte *)(param_1 + 0x3d) & 1) != 0)) ||
          (((uVar35 & 0x400) != 0 &&
           (((*(byte *)((long)param_1 + 0x1e9) & 4) != 0 && (local_6e0 == uVar41))))))))
      goto LAB_00101450;
      if (uVar41 != 1) {
        lVar18 = ossl_quic_cfq_get_priority_head(param_1[0x16],uVar25);
        if (lVar18 != 0) {
          if ((char)uVar35 < '\0') {
            do {
              uVar16 = ossl_quic_cfq_item_get_frame_type(lVar18);
              if (uVar16 == 0x19) goto LAB_00101450;
              if (uVar16 < 0x1a) {
                uVar13 = uVar35 & 0x1000;
                if ((uVar16 != 7) && (uVar13 = uVar35 & 0x40, uVar16 != 0x18)) goto LAB_00104550;
              }
              else {
                uVar13 = uVar35 & 0x20;
                if (uVar16 != 0x1b) {
LAB_00104550:
                  uVar13 = uVar35 & 0x800;
                }
              }
              if (uVar13 != 0) goto LAB_00101450;
              lVar18 = ossl_quic_cfq_item_get_priority_next(lVar18,uVar25);
            } while (lVar18 != 0);
          }
          else if ((uVar35 & 0x20) == 0) {
            do {
              uVar16 = ossl_quic_cfq_item_get_frame_type(lVar18);
              if (uVar16 != 0x19) {
                if (uVar16 < 0x1a) {
                  uVar13 = uVar35 & 0x1000;
                  if ((uVar16 != 7) && (uVar13 = uVar35 & 0x40, uVar16 != 0x18)) goto LAB_00103afc;
                }
                else {
                  if (uVar16 == 0x1b) goto LAB_00103ad0;
LAB_00103afc:
                  uVar13 = uVar35 & 0x800;
                }
                if (uVar13 != 0) goto LAB_00101450;
              }
LAB_00103ad0:
              lVar18 = ossl_quic_cfq_item_get_priority_next(lVar18,uVar25);
            } while (lVar18 != 0);
          }
          else {
            do {
              uVar16 = ossl_quic_cfq_item_get_frame_type(lVar18);
              if (uVar16 != 0x19) {
                if (uVar16 < 0x1a) {
                  uVar13 = uVar35 & 0x1000;
                  if ((uVar16 != 7) && (uVar13 = uVar35 & 0x800, uVar16 == 0x18)) {
                    if ((uVar35 & 0x40) == 0) goto LAB_00103e9b;
                    goto LAB_00101450;
                  }
                }
                else {
                  uVar13 = uVar35 & 0x800;
                  if (uVar16 == 0x1b) goto LAB_00101450;
                }
                if (uVar13 != 0) goto LAB_00101450;
              }
LAB_00103e9b:
              lVar18 = ossl_quic_cfq_item_get_priority_next(lVar18,uVar25);
            } while (lVar18 != 0);
          }
        }
        if ((uVar35 & 0x100) == 0) goto LAB_00101afe;
LAB_00102167:
        if ((*(byte *)((long)param_1 + 0x1e9) & 8) != 0) {
          ossl_quic_stream_iter_init(local_5c8,param_1[0x18],0);
          if (local_5b8._0_8_ != 0) goto LAB_00101450;
        }
        goto LAB_00101afe;
      }
      if ((uVar35 & 0x100) != 0) goto LAB_00102167;
      uVar28 = 2;
    }
    else {
      piVar15 = (int *)ossl_ackm_get0_probe_request(param_1[0x17]);
      if (uVar41 == 0) {
        if ((*piVar15 == 0) && (piVar15[uVar25 + 2] == 0)) goto LAB_0010257f;
        sVar37 = 0;
        puVar32 = local_430;
        puVar27 = local_3d8;
        plVar31 = plVar39;
      }
      else {
        if (uVar41 == 2) {
          if ((piVar15[1] == 0) && (piVar15[uVar25 + 2] == 0)) goto LAB_0010257f;
          goto LAB_0010146c;
        }
        if (piVar15[uVar25 + 2] == 0) {
LAB_0010257f:
          if ((uVar35 & 4) != 0) goto LAB_001021d0;
          if ((uVar35 & 1) != 0) goto LAB_00102211;
          goto LAB_00102248;
        }
LAB_00102470:
        sVar37 = 2;
        puVar27 = local_750 + 0xb0;
        puVar32 = (uint *)(local_750 + 0x58);
        plVar31 = (long *)(local_750 + -0x40);
      }
LAB_00101490:
      uVar19 = *(undefined8 *)((long)param_1 + 0x15);
      uVar23 = *(undefined8 *)((long)param_1 + 0x1d);
      uVar3 = *param_1;
      uVar6 = param_1[1];
      uVar29 = *local_730;
      *(uint *)(puVar27 + 0x24) = *local_748;
      *(char *)(local_430 + uVar28 * 0x48) = (char)uVar29;
      local_430[uVar28 * 0x48] = local_430[uVar28 * 0x48] & 0xffcf02ff | 0x9000;
      uVar29 = *(undefined4 *)(param_1 + 0x23);
      *(undefined8 *)(local_750 + 0x60) = uVar19;
      *(undefined8 *)(local_750 + 0x68) = uVar23;
      *(undefined4 *)(local_750 + 0x5c) = uVar29;
      uVar19 = *(undefined8 *)((long)param_1 + 0x22);
      *(undefined8 *)(local_750 + 0x75) = uVar3;
      *(undefined8 *)(local_750 + 0x7d) = uVar6;
      *(undefined8 *)(local_750 + 0x6d) = uVar19;
      uVar19 = *(undefined8 *)((long)param_1 + 0xd);
      *(undefined8 *)(local_750 + 0xa0) = 0x3ffb;
      *(undefined8 *)(local_750 + 0x82) = uVar19;
      if (uVar41 == 0) {
        local_3f8 = param_1[0x27];
        local_3f0 = param_1[0x28];
      }
      else {
        *(undefined8 *)(local_750 + 0x90) = 0;
        *(undefined8 *)(local_750 + 0x98) = 0;
      }
      iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len(local_750[0x60],puVar32);
      uVar25 = (ulong)iVar12;
      if (((uVar25 == 0) || (uVar16 = ossl_qtx_get_mdpl(param_1[0x14]), uVar16 < local_738)) ||
         (uVar16 = uVar16 - local_738, uVar16 < uVar25)) break;
      local_5c8._0_8_ = uVar16 - uVar25;
      iVar12 = ossl_qtx_calculate_plaintext_payload_len(param_1[0x14],uVar28);
      if (iVar12 == 0) break;
      *(undefined8 *)(puVar27 + 8) = local_5c8._0_8_;
      *(ulong *)(local_750 + 200) = uVar16 - local_5c8._0_8_;
      *(ulong *)(local_750 + 0xb0) = uVar16;
      *(int *)(local_750 + 0xd0) = (int)uVar24;
      if ((*(byte *)((long)plVar31 + 0x114) & 2) == 0) {
        uVar25 = *(ulong *)(local_750 + 0xb8);
        uVar16 = 0;
      }
      else {
        uVar25 = *(ulong *)(local_750 + 0xb8);
        if (((char)local_750[0xd5] < '\0') ||
           (uVar35 = (*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> sVar37 & 1, uVar16 = (ulong)uVar35,
           uVar35 != 0)) {
          if (uVar25 == 0) break;
          uVar16 = 1;
        }
      }
      *(ulong *)(local_750 + -0x20) = uVar16;
      *(undefined8 **)(local_750 + -0x40) = param_1;
      *(uint *)(local_750 + -0x10) = uVar41;
      *(ulong *)(local_750 + -0x38) = uVar25;
      *(undefined8 *)(local_750 + -0x18) = 0;
      *(undefined8 *)(local_750 + -0x30) = 0;
      *(undefined8 *)(local_750 + -0x28) = 0;
      local_494[uVar28 * 0x120] = local_494[uVar28 * 0x120] & 0xfc;
      *(undefined8 *)(local_750 + -8) = 0;
      local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
      if ((ulong)local_728[1] < uVar25) {
        pvVar21 = CRYPTO_realloc((void *)*local_728,(int)uVar25,"ssl/quic/quic_txp.c",0xd2);
        if (pvVar21 == (void *)0x0) break;
        lVar18 = uVar28 * 0x20 + *(long *)(local_750 + -0x40);
        *(void **)(lVar18 + 0x228) = pvVar21;
        *(ulong *)(lVar18 + 0x230) = uVar25;
      }
      uVar35 = *(uint *)(local_750 + -0x10);
      *(undefined4 *)(local_750 + 0x40) = 1;
      *(undefined4 *)(local_750 + 0xd8) = 0;
      *(undefined1 (*) [16])(local_750 + 0x48) = (undefined1  [16])0x0;
      if (uVar35 != 0) {
        uVar35 = (uVar35 != 2) + 1;
      }
      local_624 = 1;
      uVar13 = *(uint *)(local_750 + 0xd4);
      if (0x3fffffffffffffff < (ulong)param_1[(ulong)uVar35 + 0x38]) goto LAB_001032ed;
      puVar17 = (undefined8 *)ossl_quic_txpim_pkt_alloc(param_1[0x15]);
      *(undefined8 **)(local_750 + 0x48) = puVar17;
      if (puVar17 == (undefined8 *)0x0) goto LAB_001032ed;
      if (((uVar13 & 8) != 0) && ((*(byte *)(param_1 + 0x3d) & 1) != 0)) {
        lVar18 = plVar31[1];
        if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
          lVar18 = lVar18 - plVar31[4];
        }
        if (plVar31[2] == lVar18) goto LAB_00101720;
        lVar18 = tx_helper_begin(plVar31);
        if (lVar18 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_handshake_done(lVar18);
          if (iVar12 == 0) {
            if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
              WPACKET_cleanup(local_750);
              local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
              *(undefined8 *)(local_750 + -8) = 0;
            }
            goto LAB_00101720;
          }
          *(byte *)((long)puVar17 + 0x79) = *(byte *)((long)puVar17 + 0x79) | 1;
          iVar12 = tx_helper_commit(plVar31);
          if (iVar12 == 0) goto LAB_001032c0;
          *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
          bVar11 = true;
          goto LAB_00101728;
        }
        goto LAB_001032c0;
      }
LAB_00101720:
      bVar11 = false;
LAB_00101728:
      if ((uVar13 & 0x200) == 0) goto LAB_001017d0;
      if (((*(byte *)(param_1 + 0x3d) & 2) != 0) ||
         (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1a],0), iVar12 != 0)) {
        if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
          if (1 < (ulong)((plVar31[1] - plVar31[2]) - plVar31[4])) goto LAB_00102880;
          goto LAB_00101770;
        }
        if ((ulong)(plVar31[1] - plVar31[2]) < 2) goto LAB_00101770;
LAB_00102880:
        lVar18 = tx_helper_begin(plVar31);
        uVar19 = ossl_quic_rxfc_get_cwm(param_1[0x1a]);
        if (lVar18 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_max_data(lVar18,uVar19);
          if (iVar12 == 0) {
            if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
              WPACKET_cleanup(local_750);
              local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
              *(undefined8 *)(local_750 + -8) = 0;
            }
          }
          else {
            *(byte *)((long)puVar17 + 0x79) = *(byte *)((long)puVar17 + 0x79) | 2;
            iVar12 = tx_helper_commit(plVar31);
            if (iVar12 == 0) goto LAB_001032c0;
            *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
            bVar11 = true;
          }
          goto LAB_00101770;
        }
        goto LAB_001032c0;
      }
LAB_00101770:
      if (((*(byte *)(param_1 + 0x3d) & 4) != 0) ||
         (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1b],0), iVar12 != 0)) {
        if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
          if (1 < (ulong)((plVar31[1] - plVar31[2]) - plVar31[4])) goto LAB_00102938;
          goto LAB_0010179f;
        }
        if ((ulong)(plVar31[1] - plVar31[2]) < 2) goto LAB_0010179f;
LAB_00102938:
        lVar18 = tx_helper_begin(plVar31);
        uVar19 = ossl_quic_rxfc_get_cwm(param_1[0x1b]);
        if (lVar18 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_max_streams(lVar18,0,uVar19);
          if (iVar12 == 0) {
            if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
              WPACKET_cleanup(local_750);
              local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
              *(undefined8 *)(local_750 + -8) = 0;
            }
          }
          else {
            *(byte *)((long)puVar17 + 0x79) = *(byte *)((long)puVar17 + 0x79) | 4;
            iVar12 = tx_helper_commit(plVar31);
            if (iVar12 == 0) goto LAB_001032c0;
            *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
            bVar11 = true;
          }
          goto LAB_0010179f;
        }
        goto LAB_001032c0;
      }
LAB_0010179f:
      if (((*(byte *)(param_1 + 0x3d) & 8) != 0) ||
         (iVar12 = ossl_quic_rxfc_has_cwm_changed(param_1[0x1c],0), iVar12 != 0)) {
        if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
          if (1 < (ulong)((plVar31[1] - plVar31[2]) - plVar31[4])) goto LAB_0010276d;
          goto LAB_001017d0;
        }
        if ((ulong)(plVar31[1] - plVar31[2]) < 2) goto LAB_001017d0;
LAB_0010276d:
        lVar18 = tx_helper_begin(plVar31);
        uVar19 = ossl_quic_rxfc_get_cwm(param_1[0x1c]);
        if (lVar18 != 0) {
          iVar12 = ossl_quic_wire_encode_frame_max_streams(lVar18,1,uVar19);
          if (iVar12 == 0) {
            if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
              WPACKET_cleanup(local_750);
              local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
              *(undefined8 *)(local_750 + -8) = 0;
            }
          }
          else {
            *(byte *)((long)puVar17 + 0x79) = *(byte *)((long)puVar17 + 0x79) | 8;
            iVar12 = tx_helper_commit(plVar31);
            if (iVar12 == 0) goto LAB_001032c0;
            *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
            bVar11 = true;
          }
          goto LAB_001017d0;
        }
LAB_001032c0:
        ossl_quic_txpim_pkt_release(param_1[0x15],puVar17);
        local_440[uVar28 * 0x24] = 0;
        goto LAB_001032ed;
      }
LAB_001017d0:
      bVar42 = local_6e0 == uVar41;
      lVar18 = ossl_quic_cfq_get_priority_head(param_1[0x16],uVar35);
      if (lVar18 == 0) {
LAB_001034e0:
        txp_generate_pre_token(param_1,plVar31,bVar42,&local_624);
      }
      else {
        bVar43 = false;
        if ((uVar13 & 0x40) == 0) {
          do {
            uVar25 = ossl_quic_cfq_item_get_frame_type(lVar18);
            uVar19 = ossl_quic_cfq_item_get_encoded(lVar18);
            uVar16 = ossl_quic_cfq_item_get_encoded_len(lVar18);
            if (uVar25 == 0x19) {
              if ((char)uVar13 < '\0') {
LAB_0010230f:
                lVar38 = 0;
                if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
                  lVar38 = plVar31[4];
                }
                if ((ulong)((plVar31[1] - plVar31[2]) - lVar38) < uVar16) break;
                iVar12 = tx_helper_append_iovec(plVar31,uVar19,uVar16);
                if (iVar12 == 0) goto LAB_001032c0;
                ossl_quic_txpim_pkt_add_cfq_item(puVar17,lVar18);
                if ((0x1d < uVar25) || ((0x3000000dUL >> (uVar25 & 0x3f) & 1) == 0)) {
                  *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
                  bVar11 = true;
                }
              }
            }
            else if (uVar25 < 0x1a) {
              if (uVar25 == 7) {
                if ((uVar13 & 0x1000) != 0) {
                  if (!bVar43) {
                    iVar12 = txp_generate_pre_token(param_1,plVar31,bVar42,&local_624);
                    bVar43 = iVar12 != 0;
                  }
                  goto LAB_0010230f;
                }
              }
              else if (uVar25 != 0x18) goto LAB_001024c8;
            }
            else if (uVar25 == 0x1b) {
              if ((uVar13 & 0x20) != 0) {
                *(undefined4 *)(local_750 + 0xd8) = 1;
                goto LAB_0010230f;
              }
            }
            else {
LAB_001024c8:
              if ((uVar13 & 0x800) != 0) goto LAB_0010230f;
            }
            lVar18 = ossl_quic_cfq_item_get_priority_next(lVar18,uVar35);
          } while (lVar18 != 0);
        }
        else {
          do {
            uVar25 = ossl_quic_cfq_item_get_frame_type(lVar18);
            uVar19 = ossl_quic_cfq_item_get_encoded(lVar18);
            uVar16 = ossl_quic_cfq_item_get_encoded_len(lVar18);
            if (uVar25 == 0x19) {
              if ((char)uVar13 < '\0') goto LAB_0010192c;
            }
            else if (uVar25 < 0x1a) {
              if (uVar25 == 7) {
                if ((uVar13 & 0x1000) == 0) goto LAB_001018d4;
                if (!bVar43) {
                  iVar12 = txp_generate_pre_token(param_1,plVar31,bVar42,&local_624);
                  bVar43 = iVar12 != 0;
                }
              }
              else if (uVar25 != 0x18) goto LAB_001023d8;
LAB_0010192c:
              if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
                uVar40 = (plVar31[1] - plVar31[2]) - plVar31[4];
              }
              else {
                uVar40 = plVar31[1] - plVar31[2];
              }
              if (uVar40 < uVar16) break;
              iVar12 = tx_helper_append_iovec(plVar31,uVar19,uVar16);
              if (iVar12 == 0) goto LAB_001032c0;
              ossl_quic_txpim_pkt_add_cfq_item(puVar17,lVar18);
              if ((0x1d < uVar25) || ((0x3000000dUL >> (uVar25 & 0x3f) & 1) == 0)) {
                *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
                bVar11 = true;
              }
            }
            else if (uVar25 == 0x1b) {
              if ((uVar13 & 0x20) != 0) {
                *(undefined4 *)(local_750 + 0xd8) = 1;
                goto LAB_0010192c;
              }
            }
            else {
LAB_001023d8:
              if ((uVar13 & 0x800) != 0) goto LAB_0010192c;
            }
LAB_001018d4:
            lVar18 = ossl_quic_cfq_item_get_priority_next(lVar18,uVar35);
          } while (lVar18 != 0);
        }
        if (!bVar43) goto LAB_001034e0;
      }
      if ((uVar13 & 4) != 0) {
        uVar30 = 0;
        uVar36 = *(uint *)(local_750 + -0x10);
        if (uVar36 != 0) {
          uVar30 = (uVar36 != 2) + 1;
        }
        uVar19 = *(undefined8 *)(local_750 + 0x48);
        local_5a8 = 0;
        lVar18 = 0;
        local_5f8 = 0;
        local_5c8 = (undefined1  [16])0x0;
        local_5b8 = (undefined1  [16])0x0;
        local_608 = (undefined1  [16])0x0;
        local_5e8 = (undefined1  [16])0x0;
        local_5d8 = (undefined1  [16])0x0;
        while( true ) {
          lVar38 = 0;
          if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
            lVar38 = plVar31[4];
          }
          uVar25 = (plVar31[1] - plVar31[2]) - lVar38;
          if (uVar25 < 4) goto LAB_00101987;
          local_618 = 2;
          iVar12 = ossl_quic_sstream_get_stream_frame
                             (param_1[(ulong)uVar30 + 0x24],lVar18,local_5c8,local_588,&local_618);
          if (iVar12 == 0) goto LAB_00101987;
          uVar23 = local_5b8._0_8_;
          local_608._0_8_ = local_5c8._8_8_;
          if (local_5b8._0_8_ == 0) goto LAB_00101987;
          local_608._8_8_ = 0;
          lVar18 = ossl_quic_wire_get_encoded_frame_len_crypto_hdr(local_608);
          if ((lVar18 == 0) ||
             (iVar12 = determine_len(uVar25,uVar23,lVar18 + -1,local_610,local_608 + 8), iVar12 == 0
             )) goto LAB_00101987;
          ossl_quic_sstream_adjust_iov(local_608._8_8_,local_588,local_618);
          uVar25 = param_1[(ulong)uVar36 * 4 + 0x48];
          if (uVar25 < plVar31[5] + 3U) {
            if (uVar25 == 0) {
              iVar12 = 0x80;
              lVar18 = 8;
            }
            else {
              lVar18 = uVar25 * 2;
              iVar12 = (int)(uVar25 << 5);
            }
            pvVar21 = CRYPTO_realloc((void *)param_1[(ulong)uVar36 * 4 + 0x47],iVar12,
                                     "ssl/quic/quic_txp.c",0xc5b);
            if (pvVar21 == (void *)0x0) goto LAB_001032c0;
            param_1[(ulong)uVar36 * 4 + 0x47] = pvVar21;
            param_1[(ulong)uVar36 * 4 + 0x48] = lVar18;
          }
          lVar18 = tx_helper_begin(plVar31);
          if (lVar18 == 0) goto LAB_001032c0;
          iVar12 = ossl_quic_wire_encode_frame_crypto_hdr(lVar18,local_608);
          if (iVar12 == 0) break;
          iVar12 = tx_helper_commit(plVar31);
          if (iVar12 == 0) goto LAB_001032c0;
          uVar25 = local_618;
          if (local_618 != 0) {
            uVar25 = 1;
            tx_helper_append_iovec(plVar31,local_588[0],local_588[1]);
            if (1 < local_618) {
              uVar25 = 2;
              tx_helper_append_iovec(plVar31,local_588[2],local_588[3]);
            }
          }
          *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
          local_5d8[8] = local_5d8[8] & 0xfe;
          local_5e8._8_8_ = local_608._0_8_;
          local_5e8._0_8_ = 0xffffffffffffffff;
          local_5d8._0_8_ = local_608._0_8_ + local_608._8_8_ + -1;
          iVar12 = ossl_quic_txpim_pkt_append_chunk(uVar19,local_5e8);
          if (iVar12 == 0) goto LAB_001032c0;
          bVar11 = true;
          lVar18 = uVar25 + 1;
        }
        if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
          WPACKET_cleanup(local_750);
          local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
          *(undefined8 *)(local_750 + -8) = 0;
        }
      }
LAB_00101987:
      if (((uVar13 >> 8 & 1) != 0) && ((*(byte *)((long)param_1 + 0x1e9) & 8) != 0)) {
        ossl_quic_stream_iter_init(local_5e8,param_1[0x18],1);
        if (local_5d8._0_8_ != 0) {
          local_688 = 0;
          lVar18 = local_5d8._0_8_;
          do {
            ossl_quic_stream_iter_next(local_5e8);
            uVar19 = local_5d8._0_8_;
            uVar25 = *(ulong *)(lVar18 + 0x100) & 0xfffffffe8fffffff;
            *(ulong *)(lVar18 + 0x100) = uVar25;
            uVar25 = uVar25 >> 0x20;
            *(undefined8 *)(lVar18 + 0x60) = 0;
            if ((uVar25 & 4) != 0) {
              lVar38 = tx_helper_begin(plVar31);
              if (lVar38 == 0) goto LAB_001032c0;
              local_5c8 = *(undefined1 (*) [16])(lVar18 + 0x38);
              iVar12 = ossl_quic_wire_encode_frame_stop_sending(lVar38,local_5c8);
              if (iVar12 != 0) {
                iVar12 = tx_helper_commit(plVar31);
                if (iVar12 != 0) {
                  *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
                  uVar25 = (ulong)*(byte *)(lVar18 + 0x104);
                  *(byte *)(lVar18 + 0x103) = *(byte *)(lVar18 + 0x103) | 0x20;
                  bVar11 = true;
                  goto LAB_00102b89;
                }
                goto LAB_001032c0;
              }
LAB_001043fa:
              if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
                WPACKET_cleanup(local_750);
LAB_0010445b:
                local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
                *(undefined8 *)(local_750 + -8) = 0;
              }
LAB_0010327e:
              *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)(local_750 + 0x50);
              *(long *)(local_750 + 0x50) = lVar18;
              break;
            }
LAB_00102b89:
            if ((uVar25 & 8) != 0) {
              if ((*(char *)(lVar18 + 0x101) == '\x05') &&
                 (lVar38 = tx_helper_begin(plVar31), lVar38 != 0)) {
                local_5c8._8_8_ = *(undefined8 *)(lVar18 + 0x48);
                local_5c8._0_8_ = *(undefined8 *)(lVar18 + 0x38);
                if (*(char *)(lVar18 + 0x101) == '\x02') {
                  iVar12 = ossl_quic_sstream_get_final_size
                                     (*(undefined8 *)(lVar18 + 0x70),local_5b8);
                  if (iVar12 == 0) goto LAB_001032c0;
                }
                else {
                  if (3 < (byte)(*(char *)(lVar18 + 0x101) - 3U)) goto LAB_001032c0;
                  local_5b8._0_8_ = *(undefined8 *)(lVar18 + 0x68);
                }
                iVar12 = ossl_quic_wire_encode_frame_reset_stream(lVar38,local_5c8);
                if (iVar12 == 0) {
                  if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
                    WPACKET_cleanup(local_750);
                    goto LAB_0010445b;
                  }
                  goto LAB_0010327e;
                }
                iVar12 = tx_helper_commit(plVar31);
                if (iVar12 != 0) {
                  *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
                  *(byte *)(lVar18 + 0x103) = *(byte *)(lVar18 + 0x103) | 0x40;
                  uVar23 = local_5b8._0_8_;
                  uVar25 = ossl_quic_txfc_get_swm(lVar18 + 0x80);
                  if ((ulong)uVar23 <= uVar25) {
                    uVar23 = local_5b8._0_8_;
                    lVar38 = ossl_quic_txfc_get_swm(lVar18 + 0x80);
                    bVar11 = true;
                    *(long *)(lVar18 + 0x60) = uVar23 - lVar38;
                    goto LAB_00102c95;
                  }
                }
              }
              goto LAB_001032c0;
            }
LAB_00102c95:
            if ((*(char *)(lVar18 + 0x102) == '\x01') &&
               (((*(byte *)(lVar18 + 0x104) & 2) != 0 ||
                (iVar12 = ossl_quic_rxfc_has_cwm_changed(lVar18 + 0xa0,0), iVar12 != 0)))) {
              lVar38 = tx_helper_begin(plVar31);
              if (lVar38 == 0) goto LAB_001032c0;
              uVar23 = ossl_quic_rxfc_get_cwm(lVar18 + 0xa0);
              iVar12 = ossl_quic_wire_encode_frame_max_stream_data
                                 (lVar38,*(undefined8 *)(lVar18 + 0x38),uVar23);
              if (iVar12 == 0) goto LAB_001043fa;
              iVar12 = tx_helper_commit(plVar31);
              if (iVar12 == 0) goto LAB_001032c0;
              *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
              *(byte *)(lVar18 + 0x103) = *(byte *)(lVar18 + 0x103) | 0x10;
              bVar11 = true;
            }
            if (*(byte *)(lVar18 + 0x101) - 1 < 3) {
              if ((*(byte *)(lVar18 + 0x104) & 8) != 0) goto LAB_001032c0;
              uVar23 = *(undefined8 *)(lVar18 + 0x70);
              uVar25 = *(ulong *)(lVar18 + 0x38);
              lVar38 = lVar18 + 0x80;
              puVar34 = local_588;
              for (lVar26 = 0x18; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar34 = 0;
                puVar34 = puVar34 + (ulong)bVar44 * -2 + 1;
              }
              uVar36 = *(uint *)(local_750 + -0x10);
              uVar3 = *(undefined8 *)(local_750 + 0x48);
              uVar16 = ossl_quic_txfc_get_swm(lVar38);
              iVar12 = txp_plan_stream_chunk_isra_0(uVar23,lVar38,0,local_588,local_688);
              if (iVar12 == 0) {
LAB_001043e8:
                lVar14 = 0;
LAB_00103c2a:
                *(long *)(lVar18 + 0x60) = lVar14;
                *(long *)(lVar18 + 0x30) = local_440[uVar28 * 0x24 + 1];
                local_440[uVar28 * 0x24 + 1] = lVar18;
                goto LAB_001032c0;
              }
              if ((int)local_530 == 0) {
                *(undefined8 *)(lVar18 + 0x60) = 0;
              }
              else {
                local_588[0] = uVar25;
                iVar12 = txp_plan_stream_chunk_isra_0(uVar23,lVar38,1,local_528);
                if (iVar12 == 0) goto LAB_001043e8;
                local_528[0] = uVar25;
                lVar26 = 1;
                bVar42 = false;
                local_6c0 = uVar16;
                do {
                  lVar33 = 0;
                  if ((*(byte *)((long)plVar31 + 0x34) & 1) == 0) {
                    lVar33 = plVar31[4];
                  }
                  uVar30 = (uint)(lVar26 + -1) & 1;
                  uVar25 = (ulong)uVar30;
                  uVar40 = (plVar31[1] - plVar31[2]) - lVar33;
                  if (*(int *)(&local_530 + uVar25 * 0xc) == 0) break;
                  if (uVar40 < 3) goto LAB_001034bb;
                  if ((*(byte *)((long)plVar31 + 0x34) & 2) != 0) {
LAB_00103bfa:
                    lVar14 = local_6c0 - uVar16;
                    goto LAB_00103c2a;
                  }
                  uVar4 = (&uStack_560)[uVar25 * 0xc];
                  uVar22 = (ulong)(-uVar30 & 0x60);
                  lVar33 = (long)local_588 + uVar22;
                  uVar30 = (uint)lVar26;
                  if ((lVar26 + -1 != 0) &&
                     (iVar12 = txp_plan_stream_chunk_isra_0
                                         (uVar23,lVar38,lVar26,
                                          (ulong)(-(uVar30 & 1) & 0x60) + (long)local_588,local_688)
                     , iVar12 == 0)) goto LAB_00103bfa;
                  uVar5 = local_588[uVar25 * 0xc + 2];
                  local_568[uVar25 * 0x60] = local_568[uVar25 * 0x60] & 0xfe;
                  local_588[uVar25 * 0xc + 2] = 0;
                  lVar20 = ossl_quic_wire_get_encoded_frame_len_stream_hdr(lVar33);
                  local_588[uVar25 * 0xc + 2] = uVar5;
                  if ((lVar20 == 0) ||
                     (iVar12 = determine_len(uVar40,uVar5,
                                             lVar20 + -1 +
                                             (ulong)((local_568[uVar25 * 0x60] & 1) == 0),&local_620
                                             ,&local_618), iVar12 == 0)) {
LAB_001034bb:
                    *(ulong *)(lVar18 + 0x60) = local_6c0 - uVar16;
                    goto LAB_0010327e;
                  }
                  if ((((uVar19 == 0) && (*(int *)(&local_530 + (ulong)(uVar30 & 1) * 0xc) == 0)) ||
                      (uVar40 <= local_620 + local_618)) && (*(int *)(local_750 + 0xd8) == 0)) {
                    bVar42 = true;
                    local_568[uVar25 * 0x60] = local_568[uVar25 * 0x60] & 0xfe;
                    uVar40 = local_618;
                  }
                  else {
                    local_568[uVar25 * 0x60] = local_568[uVar25 * 0x60] | 1;
                    local_588[uVar25 * 0xc + 2] = 0;
                    lVar20 = ossl_quic_wire_get_encoded_frame_len_stream_hdr(lVar33);
                    local_588[uVar25 * 0xc + 2] = uVar5;
                    if ((lVar20 == 0) ||
                       (iVar12 = determine_len(uVar40,uVar5,
                                               lVar20 + -1 +
                                               (ulong)((local_568[uVar25 * 0x60] & 1) == 0),
                                               local_610,local_608), iVar12 == 0))
                    goto LAB_001034bb;
                    uVar40 = local_608._0_8_;
                  }
                  local_588[uVar25 * 0xc + 2] = uVar40;
                  if ((local_568[uVar25 * 0x60] & 2) != 0) {
                    *(undefined4 *)(&local_530 + (ulong)(uVar30 & 1) * 0xc) = 0;
                  }
                  if (uVar40 < uVar4) {
                    local_568[uVar25 * 0x60] = local_568[uVar25 * 0x60] & 0xfd;
                  }
                  ossl_quic_sstream_adjust_iov
                            (uVar40,(long)auStack_558 + uVar22,(&local_530)[uVar25 * 0xc + -1]);
                  uVar40 = param_1[(ulong)uVar36 * 4 + 0x48];
                  if (uVar40 < plVar31[5] + 3U) {
                    if (uVar40 == 0) {
                      iVar12 = 0x80;
                      lVar20 = 8;
                    }
                    else {
                      lVar20 = uVar40 * 2;
                      iVar12 = (int)(uVar40 << 5);
                    }
                    pvVar21 = CRYPTO_realloc((void *)param_1[(ulong)uVar36 * 4 + 0x47],iVar12,
                                             "ssl/quic/quic_txp.c",0xc5b);
                    if (pvVar21 == (void *)0x0) goto LAB_00103bfa;
                    param_1[(ulong)uVar36 * 4 + 0x47] = pvVar21;
                    param_1[(ulong)uVar36 * 4 + 0x48] = lVar20;
                  }
                  lVar20 = tx_helper_begin(plVar31);
                  if (lVar20 == 0) goto LAB_00103bfa;
                  iVar12 = ossl_quic_wire_encode_frame_stream_hdr(lVar20,lVar33);
                  if (iVar12 == 0) {
                    if ((*(byte *)(plVar31 + 0xf) & 1) != 0) {
                      WPACKET_cleanup(local_750);
                      local_450[uVar28 * 0x120] = local_450[uVar28 * 0x120] & 0xfe;
                      *(undefined8 *)(local_750 + -8) = 0;
                    }
                    goto LAB_001034bb;
                  }
                  iVar12 = tx_helper_commit(plVar31);
                  if (iVar12 == 0) goto LAB_00103bfa;
                  if ((&local_530)[uVar25 * 0xc + -1] != 0) {
                    tx_helper_append_iovec
                              (plVar31,auStack_558[uVar25 * 0xc],auStack_558[uVar25 * 0xc + 1]);
                    if (1 < (&local_530)[uVar25 * 0xc + -1]) {
                      tx_helper_append_iovec
                                (plVar31,auStack_558[uVar25 * 0xc + 2],
                                 (&local_530)[uVar25 * 0xc + -2]);
                    }
                  }
                  bVar2 = *(byte *)((long)plVar31 + 0x34);
                  *(byte *)((long)plVar31 + 0x34) = bVar2 | 1;
                  if ((local_568[uVar25 * 0x60] & 1) == 0) {
                    *(byte *)((long)plVar31 + 0x34) = bVar2 | 3;
                  }
                  uVar22 = local_588[uVar25 * 0xc + 1] + local_588[uVar25 * 0xc + 2];
                  uVar40 = local_6c0;
                  if (local_6c0 < uVar22) {
                    uVar40 = uVar22;
                  }
                  local_5c8._8_8_ = local_588[uVar25 * 0xc + 1];
                  local_5c8._0_8_ = local_588[uVar25 * 0xc];
                  if (local_588[uVar25 * 0xc + 2] == 0) {
                    uVar40 = local_6c0;
                  }
                  local_5b8._0_8_ = uVar22 - 1;
                  local_5b8[8] = local_5b8[8] & 0xf8 | local_568[uVar25 * 0x60] >> 1 & 1;
                  iVar12 = ossl_quic_txpim_pkt_append_chunk(uVar3,local_5c8);
                  local_6c0 = uVar40;
                  if (iVar12 == 0) goto LAB_00103bfa;
                  bVar11 = true;
                  lVar26 = lVar26 + 1;
                } while (uVar4 <= local_588[uVar25 * 0xc + 2]);
                local_688 = local_688 + (local_6c0 - uVar16);
                *(ulong *)(lVar18 + 0x60) = local_6c0 - uVar16;
                if (bVar42) goto LAB_0010327e;
              }
            }
            *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)(local_750 + 0x50);
            *(long *)(local_750 + 0x50) = lVar18;
            lVar18 = local_5d8._0_8_;
          } while (local_5d8._0_8_ != 0);
        }
      }
      *(byte *)((long)plVar31 + 0x34) = *(byte *)((long)plVar31 + 0x34) | 1;
      if (bVar11) {
LAB_00101a40:
        cVar8 = '\x01';
        uVar13 = 1;
      }
      else {
        if (((uVar13 & 2) != 0) &&
           (((char)(uVar13 >> 8) < '\0' ||
            (((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> ((ulong)uVar35 & 0x3f) & 1) != 0)))) {
          lVar18 = tx_helper_begin(plVar31);
          if ((lVar18 == 0) ||
             ((iVar12 = ossl_quic_wire_encode_frame_ping(lVar18), iVar12 == 0 ||
              (iVar12 = tx_helper_commit(plVar31), iVar12 == 0)))) goto LAB_001032c0;
          goto LAB_00101a40;
        }
        uVar13 = (uint)(local_624 == 0);
        cVar8 = '\0';
      }
      uVar19 = param_1[0x20];
      lVar18 = *(long *)(local_750 + 200);
      lVar38 = plVar31[2];
      *puVar17 = param_1[(ulong)uVar35 + 0x38];
      puVar17[1] = lVar18 + lVar38;
      *(byte *)(puVar17 + 4) =
           (byte)(uVar13 << 2) | (byte)uVar35 & 0x3f | cVar8 << 3 | *(byte *)(puVar17 + 4) & 0xc0;
      uVar19 = (*(code *)param_1[0x1f])(uVar19);
      puVar17[2] = uVar19;
      *(char *)(puVar17 + 0xf) = (char)local_430[uVar28 * 0x48];
      bVar11 = true;
      if (*(int *)(local_750 + 0xd8) == 0) {
        bVar11 = bVar9;
      }
      bVar9 = bVar11;
      *(ulong *)(local_750 + 0xc0) =
           *(long *)(local_750 + 200) + *(long *)(local_750 + -0x30) + local_738;
LAB_00101afe:
      uVar28 = (ulong)(uVar41 + 1);
      if (uVar41 + 1 == 4) break;
    }
    local_728 = local_728 + 4;
    local_730 = local_730 + 1;
    local_748 = local_748 + 3;
    local_750 = local_750 + 0x120;
    uVar25 = (ulong)(((int)uVar28 != 2) + 1);
    local_738 = local_3c8[(ulong)((int)uVar28 - 1) * 0x24];
    *(ulong *)(puVar10 + 0x1e0) = local_738;
  } while( true );
  if ((local_448[0] == 0) || (local_4c8[2] == 0)) {
    if (bVar9) {
      if (local_328 == 0) {
        if (local_208 == 0) {
          uVar28 = 4;
          uVar25 = 0;
          goto LAB_00101fe9;
        }
LAB_00103940:
        uVar25 = local_278;
        if (local_278 != 0) {
          uVar25 = 0;
          goto LAB_00103956;
        }
      }
      else {
        if (local_398 != 0) {
          uVar25 = 0;
          goto LAB_00103ca1;
        }
        if (local_208 != 0) goto LAB_00103940;
        uVar25 = 0;
      }
      uVar28 = 4;
      goto LAB_00101fe9;
    }
  }
  else {
    uVar28 = 4;
    if ((bStack_3b3 & 0x40) != 0) {
      uVar28 = (ulong)((local_494[0] & 2) != 0) << 2;
    }
    if ((local_498 != 0) &&
       (iVar12 = ossl_qtx_calculate_ciphertext_payload_len
                           (param_1[0x14],local_498,local_4c8[2],local_5c8), iVar12 != 0)) {
      local_3e8 = local_5c8._0_8_;
      iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len(local_428,local_430);
      local_3c8[1] = (local_5c8._0_8_ - local_4c8[2]) + (long)iVar12;
    }
    uVar25 = local_4c8[2] + local_3c8[1];
    if ((local_328 != 0) && (local_398 != 0)) {
      if ((int)uVar28 == 4) {
LAB_00103ca1:
        uVar28 = 4;
        if ((local_293 & 0x40) != 0) {
          uVar28 = (ulong)((-(uint)((local_374 >> 1 & 1) == 0) & 0xfffffffd) + 4);
        }
      }
      else {
        uVar28 = 0;
      }
      if ((local_378 != 0) &&
         (iVar12 = ossl_qtx_calculate_ciphertext_payload_len
                             (param_1[0x14],local_378,local_398,local_5c8), iVar12 != 0)) {
        local_2c8 = local_5c8._0_8_;
        iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len(local_308,local_310);
        local_2a0 = (local_5c8._0_8_ - local_398) + (long)iVar12;
      }
      uVar25 = uVar25 + local_2a0 + local_398;
    }
    if ((local_208 != 0) && (local_278 != 0)) {
      if ((int)uVar28 == 4) {
LAB_00103956:
        uVar28 = 4;
        if ((bStack_173 & 0x40) != 0) {
          uVar28 = (ulong)((-(uint)((local_254 >> 1 & 1) == 0) & 0xfffffffe) + 4);
        }
      }
      if ((local_258 != 0) &&
         (iVar12 = ossl_qtx_calculate_ciphertext_payload_len
                             (param_1[0x14],local_258,local_278,local_5c8), iVar12 != 0)) {
        local_1a8 = local_5c8._0_8_;
        iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len(local_1e8,local_1f0);
        local_180 = (local_5c8._0_8_ - local_278) + (long)iVar12;
      }
      uVar25 = uVar25 + local_180 + local_278;
    }
LAB_00101fe9:
    if ((local_e8 != 0) && (local_158 != 0)) {
      if (((int)uVar28 == 4) && ((local_53 & 0x40) != 0)) {
        uVar28 = (ulong)((local_134 >> 1 & 1) + 3);
      }
      if ((local_138 != 0) &&
         (iVar12 = ossl_qtx_calculate_ciphertext_payload_len
                             (param_1[0x14],local_138,local_158,local_5c8), iVar12 != 0)) {
        local_88 = local_5c8._0_8_;
        iVar12 = ossl_quic_wire_get_encoded_pkt_hdr_len(local_c8,local_d0);
        local_60 = (local_5c8._0_8_ - local_158) + (long)iVar12;
      }
      uVar25 = uVar25 + local_158 + local_60;
    }
    if ((int)uVar28 == 4) {
      if (uVar25 < 0x4b0) {
        lVar14 = 0;
        uVar29 = 1;
        goto LAB_00101e42;
      }
    }
    else if (uVar25 < 0x4b0) {
      lVar18 = uVar28 * 0x120;
      if ((local_448[uVar28 * 0x48] != 0) && (local_440[uVar28 * 0x24] != 0)) {
        lVar14 = tx_helper_begin(plVar39 + uVar28 * 0x24);
        if (lVar14 != 0) {
          iVar12 = ossl_quic_wire_encode_padding(lVar14,0x4b0 - uVar25);
          if (iVar12 == 0) {
            if ((local_450[lVar18] & 1) != 0) {
              lVar14 = 0;
              WPACKET_cleanup(local_488 + lVar18);
              local_450[lVar18] = local_450[lVar18] & 0xfe;
              (&local_490)[uVar28 * 0x24] = 0;
              uVar29 = 0;
              goto LAB_00101e42;
            }
          }
          else {
            iVar12 = tx_helper_commit(plVar39 + uVar28 * 0x24);
            if (iVar12 != 0) {
              lVar14 = local_440[uVar28 * 0x24];
              plVar31 = (long *)(lVar14 + 8);
              *plVar31 = *plVar31 + (0x4b0 - uVar25);
              pbVar1 = (byte *)(lVar14 + 0x20);
              *pbVar1 = *pbVar1 | 4;
              goto LAB_00101bbd;
            }
          }
        }
      }
LAB_001032ed:
      lVar14 = 0;
      uVar29 = 0;
      goto LAB_00101e42;
    }
  }
LAB_00101bbd:
  puVar32 = local_430;
  lVar14 = 0;
  uVar41 = 0;
LAB_00101bcd:
  do {
    if ((puVar32[-6] != 0) && (*(long *)(puVar32 + -0x22) != 0)) {
      iVar12 = ossl_quic_tx_packetiser_check_unvalidated_credit(param_1);
      if (iVar12 == 0) {
        uVar29 = 2;
        goto LAB_00101e42;
      }
      ossl_quic_tx_packetiser_consume_unvalidated_credit(param_1,*(undefined8 *)(puVar32 + -0x22));
      uVar35 = puVar32[-0x1a];
      if (uVar35 == 0) {
        if (*(long *)(puVar32 + -0x22) != 0) {
          local_750 = (undefined1 *)0x0;
          lVar18 = *(long *)(puVar32 + -4);
          goto LAB_00101c3e;
        }
      }
      else if (uVar35 == 2) {
        if (*(long *)(puVar32 + -0x22) != 0) {
          local_750 = (undefined1 *)0x1;
          lVar18 = *(long *)(puVar32 + -4);
LAB_00101c3e:
          local_5a8 = 0;
          uVar13 = *(uint *)(archetypes + ((ulong)uVar35 * 3 + uVar24) * 4);
          lVar38 = (long)param_1 + 0x2c;
          local_5c8._8_8_ = param_1[(ulong)uVar35 * 4 + 0x47];
          local_5c8._0_8_ = puVar32;
          local_5b8._0_8_ = *(undefined8 *)(puVar32 + -0x1c);
          iVar12 = BIO_ADDR_family(lVar38);
          local_598 = 1;
          if (iVar12 == 0) {
            lVar38 = 0;
          }
          local_5b8._8_8_ = lVar38;
          local_5a0 = param_1[(long)local_750 + 0x38];
          for (lVar38 = *(long *)(puVar32 + -2); lVar38 != 0; lVar38 = *(long *)(lVar38 + 0x30)) {
            if ((*(byte *)(lVar38 + 0x103) & 0x60) != 0) {
              local_5e8._8_8_ = 0xffffffffffffffff;
              local_5e8._0_8_ = *(undefined8 *)(lVar38 + 0x38);
              auVar7._1_7_ = local_5d8._9_7_;
              auVar7[0] = *(byte *)(lVar38 + 0x103) >> 4 & 6 | local_5d8[8] & 0xf8;
              auVar7._8_8_ = 0;
              local_5d8 = auVar7 << 0x40;
              iVar12 = ossl_quic_txpim_pkt_append_chunk(lVar18,local_5e8);
              if (iVar12 == 0) goto LAB_00101d80;
            }
          }
          iVar12 = ossl_quic_fifd_pkt_commit(param_1 + 0x2b,lVar18);
          if (iVar12 != 0) {
            param_1[(long)local_750 + 0x38] = param_1[(long)local_750 + 0x38] + 1;
            iVar12 = ossl_qtx_write_pkt(param_1[0x14],local_5c8);
            if (iVar12 != 0) {
              lVar38 = *(long *)(puVar32 + -2);
              uVar36 = 1;
              if (lVar38 != 0) {
                uVar30 = 1;
                do {
                  bVar44 = *(byte *)(lVar38 + 0x103);
                  if ((bVar44 & 0x10) != 0) {
                    *(byte *)(lVar38 + 0x104) = *(byte *)(lVar38 + 0x104) & 0xfd;
                    ossl_quic_rxfc_has_cwm_changed(lVar38 + 0xa0,1);
                    bVar44 = *(byte *)(lVar38 + 0x103);
                  }
                  if ((bVar44 & 0x20) != 0) {
                    *(byte *)(lVar38 + 0x104) = *(byte *)(lVar38 + 0x104) & 0xfb;
                  }
                  if ((bVar44 & 0x40) != 0) {
                    *(byte *)(lVar38 + 0x104) = *(byte *)(lVar38 + 0x104) & 0xf7;
                  }
                  if (*(long *)(lVar38 + 0x60) != 0) {
                    iVar12 = ossl_quic_txfc_consume_credit(lVar38 + 0x80);
                    *(undefined8 *)(lVar38 + 0x60) = 0;
                    uVar36 = uVar30;
                    if (iVar12 == 0) {
                      uVar36 = 0;
                      uVar30 = 0;
                    }
                  }
                  ossl_quic_stream_map_update_state(param_1[0x18],lVar38);
                  if (((*(byte *)(lVar38 + 0x101) - 1 < 3) &&
                      (iVar12 = ossl_quic_sstream_has_pending(*(undefined8 *)(lVar38 + 0x70)),
                      iVar12 == 0)) &&
                     (iVar12 = ossl_quic_sstream_get_final_size(*(undefined8 *)(lVar38 + 0x70),0),
                     iVar12 != 0)) {
                    ossl_quic_stream_map_notify_all_data_sent(param_1[0x18],lVar38);
                  }
                  lVar38 = *(long *)(lVar38 + 0x30);
                } while (lVar38 != 0);
              }
              if ((*(byte *)(lVar18 + 0x20) & 8) != 0) {
                *(ushort *)(param_1 + 0x3d) =
                     *(ushort *)(param_1 + 0x3d) & 0xfc7f |
                     (ushort)(((uint)(*(ushort *)(param_1 + 0x3d) >> 7) &
                               ~(uint)(1L << (sbyte)local_750) & 7) << 7);
              }
              bVar44 = *(byte *)(lVar18 + 0x79);
              if ((bVar44 & 1) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfe;
              }
              if ((bVar44 & 2) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfd;
                ossl_quic_rxfc_has_cwm_changed(param_1[0x1a],1);
                bVar44 = *(byte *)(lVar18 + 0x79);
              }
              if ((bVar44 & 4) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfb;
                ossl_quic_rxfc_has_cwm_changed(param_1[0x1b],1);
                bVar44 = *(byte *)(lVar18 + 0x79);
              }
              if ((bVar44 & 8) != 0) {
                *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xf7;
                ossl_quic_rxfc_has_cwm_changed(param_1[0x1c],1);
                bVar44 = *(byte *)(lVar18 + 0x79);
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
              if ((*(byte *)(lVar18 + 0x20) & 8) != 0) {
                piVar15 = (int *)ossl_ackm_get0_probe_request(param_1[0x17]);
                if (uVar35 == 0) {
                  if (*piVar15 != 0) {
                    *piVar15 = *piVar15 + -1;
                  }
                }
                else if ((uVar35 == 2) && (piVar15[1] != 0)) {
                  piVar15[1] = piVar15[1] + -1;
                }
                if (((uVar13 & 0x2000) != 0) && (piVar15[(long)local_750 + 2] != 0)) {
                  piVar15[(long)local_750 + 2] = piVar15[(long)local_750 + 2] + -1;
                }
              }
              if (uVar36 != 0) {
                if (*(int *)*param_2 == 0) {
                  uVar36 = *(byte *)(*(long *)(puVar32 + -4) + 0x20) >> 3 & 1;
                }
                *(uint *)*param_2 = uVar36;
                if (uVar41 != 2) {
                  puVar32[-4] = 0;
                  puVar32[-3] = 0;
                  lVar14 = lVar14 + 1;
                  goto LAB_00101e28;
                }
                uVar35 = local_208;
                if (local_208 != 0) {
                  uVar35 = (uint)(local_278 != 0);
                }
                lVar14 = lVar14 + 1;
                local_200 = 0;
                puVar32 = puVar32 + 0x48;
                uVar41 = 3;
                *(uint *)(*param_2 + 4) = uVar35;
                goto LAB_00101bcd;
              }
            }
            uVar29 = 0;
            local_440[(ulong)uVar41 * 0x24] = 0;
            goto LAB_00101e42;
          }
        }
      }
      else if ((*(long *)(puVar32 + -0x22) != 0) && (lVar18 = *(long *)(puVar32 + -4), uVar35 < 4))
      {
        local_750 = (undefined1 *)0x2;
        goto LAB_00101c3e;
      }
LAB_00101d80:
      uVar29 = 0;
      goto LAB_00101e42;
    }
LAB_00101e28:
    uVar41 = uVar41 + 1;
    puVar32 = puVar32 + 0x48;
  } while (uVar41 != 4);
  uVar29 = 1;
LAB_00101e42:
  uVar41 = 0;
  ossl_qtx_finish_dgram(param_1[0x14]);
  do {
    if ((int)plVar39[0x10] != 0) {
      if ((*(byte *)(plVar39 + 0xf) & 1) != 0) {
        WPACKET_cleanup(plVar39 + 8);
        local_450[(ulong)uVar41 * 0x120] = local_450[(ulong)uVar41 * 0x120] & 0xfe;
        plVar39[7] = 0;
      }
      *plVar39 = 0;
      *(undefined4 *)(plVar39 + 0x10) = 0;
      if (plVar39[0x11] != 0) {
        ossl_quic_txpim_pkt_release(param_1[0x15]);
        plVar39[0x11] = 0;
      }
    }
    uVar41 = uVar41 + 1;
    plVar39 = plVar39 + 0x24;
  } while (uVar41 != 4);
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


