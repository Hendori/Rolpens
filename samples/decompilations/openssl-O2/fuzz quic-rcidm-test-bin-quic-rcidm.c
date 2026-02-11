
undefined8 get_cid(long *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[1] != 0) {
    pbVar2 = (byte *)*param_1;
    uVar5 = param_1[1] - 1;
    bVar1 = *pbVar2;
    param_1[1] = uVar5;
    *param_1 = (long)(pbVar2 + 1);
    if ((bVar1 < 0x15) && (uVar6 = (ulong)bVar1, uVar6 <= uVar5)) {
      if (bVar1 < 8) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 != 0) && (param_2[1] = pbVar2[1], (bVar1 & 2) != 0)) {
            *(undefined2 *)(param_2 + (uVar6 - 1)) = *(undefined2 *)(pbVar2 + (uVar6 - 1));
          }
        }
        else {
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pbVar2 + 1);
          *(undefined4 *)(param_2 + (uVar6 - 3)) = *(undefined4 *)(pbVar2 + (uVar6 - 3));
        }
      }
      else {
        *(undefined8 *)(param_2 + 1) = *(undefined8 *)(pbVar2 + 1);
        *(undefined8 *)(param_2 + (uVar6 - 7)) = *(undefined8 *)(pbVar2 + (uVar6 - 7));
        uVar4 = (int)(param_2 + (1 - ((ulong)(param_2 + 9) & 0xfffffffffffffff8))) + (uint)bVar1 &
                0xfffffff8;
        if (7 < uVar4) {
          uVar3 = 0;
          do {
            uVar5 = (ulong)uVar3;
            uVar3 = uVar3 + 8;
            *(undefined8 *)(((ulong)(param_2 + 9) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)
                  (pbVar2 + 1 +
                  (uVar5 - (long)(param_2 + (1 - ((ulong)(param_2 + 9) & 0xfffffffffffffff8)))));
          } while (uVar3 < uVar4);
          *param_1 = *param_1 + uVar6;
          param_1[1] = param_1[1] - uVar6;
          *param_2 = bVar1;
          return 1;
        }
      }
      *param_1 = *param_1 + uVar6;
      param_1[1] = param_1[1] - uVar6;
      *param_2 = bVar1;
      return 1;
    }
  }
  return 0;
}



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
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulong local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((long)param_2 < 0) ||
     (local_b8 = param_1, local_b0 = param_2, lVar3 = ossl_quic_rcidm_new(0), lVar3 == 0)) {
LAB_00100428:
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
LAB_00100198:
      local_b8 = param_1 + 1;
      uVar1 = param_2 - 1;
      local_b0 = uVar1;
      switch(*param_1) {
      case 0:
        iVar2 = get_cid(&local_b8,local_a8);
        if (iVar2 != 0) {
          ossl_quic_rcidm_free(lVar3);
          lVar3 = ossl_quic_rcidm_new(local_a8);
          uVar1 = local_b0;
          goto joined_r0x0010041d;
        }
        break;
      case 1:
        ossl_quic_rcidm_free(lVar3);
        lVar3 = ossl_quic_rcidm_new(0);
joined_r0x0010041d:
        param_2 = uVar1;
        if (lVar3 != 0) goto LAB_001001d0;
        goto LAB_00100428;
      case 2:
        iVar2 = get_cid(&local_b8,local_a8);
        if (iVar2 != 0) {
          ossl_quic_rcidm_add_from_initial(lVar3);
          param_2 = local_b0;
          goto LAB_001001d0;
        }
        break;
      case 3:
        iVar2 = get_cid(&local_b8,local_a8);
        if (iVar2 != 0) {
          ossl_quic_rcidm_add_from_server_retry(lVar3);
          param_2 = local_b0;
          goto LAB_001001d0;
        }
        break;
      case 4:
        if (7 < uVar1) {
          local_68 = (ulong)CONCAT11(param_1[7],param_1[8]) |
                     (ulong)(byte)param_1[6] << 0x10 |
                     (ulong)(byte)param_1[5] << 0x18 |
                     (ulong)(byte)param_1[4] << 0x20 |
                     (ulong)(byte)param_1[3] << 0x28 |
                     (ulong)(byte)param_1[2] << 0x30 | (ulong)(byte)param_1[1] << 0x38;
          local_b8 = param_1 + 9;
          local_b0 = param_2 - 9;
          if (7 < local_b0) {
            local_b0 = param_2 - 0x11;
            local_b8 = param_1 + 0x11;
            local_60 = (ulong)CONCAT11(param_1[0xf],param_1[0x10]) |
                       (ulong)(byte)param_1[0xe] << 0x10 |
                       (ulong)(byte)param_1[0xd] << 0x18 |
                       (ulong)(byte)param_1[0xc] << 0x20 |
                       (ulong)(byte)param_1[0xb] << 0x28 |
                       (ulong)(byte)param_1[10] << 0x30 | (ulong)(byte)param_1[9] << 0x38;
            iVar2 = get_cid(&local_b8,local_58);
            if (iVar2 != 0) {
              ossl_quic_rcidm_add_from_ncid(lVar3,&local_68);
              param_2 = local_b0;
              goto LAB_001001d0;
            }
          }
        }
        break;
      case 5:
        ossl_quic_rcidm_on_handshake_complete(lVar3);
        param_2 = uVar1;
        goto LAB_001001d0;
      case 6:
        if (7 < uVar1) {
          uVar1 = *(ulong *)(param_1 + 1);
          local_b8 = param_1 + 9;
          local_b0 = param_2 - 9;
          ossl_quic_rcidm_on_packet_sent
                    (lVar3,uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                           (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                           (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
                           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38);
          param_2 = param_2 - 9;
          goto LAB_001001d0;
        }
        break;
      case 7:
        ossl_quic_rcidm_request_roll(lVar3);
        param_2 = uVar1;
        goto LAB_001001d0;
      case 8:
        ossl_quic_rcidm_pop_retire_seq_num(lVar3,local_c0);
        param_2 = uVar1;
        goto LAB_001001d0;
      case 9:
        ossl_quic_rcidm_peek_retire_seq_num(lVar3,local_c0);
        param_2 = uVar1;
        goto LAB_001001d0;
      case 10:
        ossl_quic_rcidm_get_preferred_tx_dcid(lVar3,local_88);
        param_2 = uVar1;
LAB_001001d0:
        param_1 = local_b8;
        if (param_2 == 0) goto LAB_001004c0;
        goto LAB_00100198;
      case 0xb:
        if (uVar1 != 0) {
          local_b8 = param_1 + 2;
          local_b0 = param_2 - 2;
          ossl_quic_rcidm_get_preferred_tx_dcid_changed(lVar3,param_1[1]);
          param_2 = param_2 - 2;
          goto LAB_001001d0;
        }
      }
      uVar4 = 0xffffffff;
      goto LAB_0010042d;
    }
LAB_001004c0:
    uVar4 = 0;
  }
LAB_0010042d:
  ossl_quic_rcidm_free(lVar3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


