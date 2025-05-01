
undefined8 ssl_parse_session_ticket_ext(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined8 local_228 [4];
  undefined1 local_208 [456];
  undefined8 local_40;
  long local_30;
  
  bVar9 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_ssl_session_init(local_228);
  if ((*(long *)(*param_1 + 0xb0) != 0) && (*(long *)(*param_1 + 0xa8) != 0)) {
    *(undefined1 *)(param_1[0xe] + 4) = 1;
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1e7,"ticket length: %zu",
               param_3);
    if (param_3 != 0) {
      pcVar8 = "ticket rejected: renegotiating";
      uVar3 = 0x1ef;
      if (*(int *)((long)param_1 + 0xc) == 0) {
        iVar2 = (**(code **)(*param_1 + 0xb0))
                          (*(undefined8 *)(*param_1 + 0xb8),local_228,param_2,param_3,
                           "ticket rejected: renegotiating");
        if (iVar2 == 0) {
          lVar4 = param_1[0xd];
          local_228[3] = *(undefined8 *)(lVar4 + 0x18);
          __memcpy_chk(local_208,lVar4 + 0x20,local_228[3],0x1d0);
          mbedtls_ssl_session_free(lVar4);
          puVar7 = (undefined8 *)param_1[0xd];
          *puVar7 = local_228[0];
          puVar7[0x3d] = local_40;
          lVar4 = (long)puVar7 - (long)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
          puVar6 = (undefined8 *)((long)local_228 - lVar4);
          puVar7 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
          for (uVar5 = (ulong)((int)lVar4 + 0x1f0U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
            puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
          }
          mbedtls_platform_zeroize(local_228,0x1f0);
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x213,
                     "session successfully restored from ticket");
          puVar1 = (undefined1 *)param_1[0xe];
          *puVar1 = 1;
          puVar1[4] = 0;
          goto LAB_00100160;
        }
        mbedtls_ssl_session_free(local_228);
        pcVar8 = "ticket is not authentic";
        uVar3 = 0x1fc;
        if (iVar2 != -0x7180) {
          if (iVar2 != -0x6d80) {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x200,
                       "mbedtls_ssl_ticket_parse",iVar2);
            goto LAB_00100160;
          }
          pcVar8 = "ticket is expired";
          uVar3 = 0x1fe;
        }
      }
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar3,pcVar8);
    }
  }
LAB_00100160:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ssl_handle_id_based_session_resumption(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 auStack_218 [2];
  int local_208;
  long local_20;
  
  bVar5 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(char *)param_1[0xe] != '\x01') && (puVar4 = (undefined8 *)param_1[0xd], puVar4[3] != 0))
      && (*(long *)(*param_1 + 0x48) != 0)) && (*(int *)((long)param_1 + 0xc) == 0)) {
    mbedtls_ssl_session_init(auStack_218);
    iVar1 = (**(code **)(*param_1 + 0x48))
                      (*(undefined8 *)(*param_1 + 0x58),puVar4 + 4,puVar4[3],auStack_218);
    if ((iVar1 == 0) && (*(int *)(puVar4 + 2) == local_208)) {
      mbedtls_ssl_session_free(puVar4);
      puVar3 = auStack_218;
      for (lVar2 = 0x3e; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      puVar4 = auStack_218;
      for (lVar2 = 0x3e; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x853,
                 "session successfully restored from cache");
      *(undefined1 *)param_1[0xe] = 1;
    }
    mbedtls_ssl_session_free(auStack_218);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_ciphersuite_match(long *param_1,undefined4 param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  short *psVar13;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined8 local_58;
  int *piStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = mbedtls_ssl_ciphersuite_from_id(param_2);
  if (lVar9 == 0) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x328,"should never happen"
              );
    uVar10 = 0xffff9400;
    goto LAB_0010039e;
  }
  uVar10 = *(undefined8 *)(lVar9 + 8);
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x32c,
             "trying ciphersuite: %#04x (%s)",param_2);
  if ((*(uint *)((long)param_1 + 0x14) < (uint)*(ushort *)(lVar9 + 0x14)) ||
     ((uint)*(ushort *)(lVar9 + 0x16) < *(uint *)((long)param_1 + 0x14))) {
    pcVar11 = "ciphersuite mismatch: version";
    uVar10 = 0x331;
LAB_0010038a:
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar10,pcVar11);
  }
  else {
    iVar6 = mbedtls_ssl_ciphersuite_uses_ec(lVar9,0x10032e,*(ushort *)(lVar9 + 0x16),uVar10);
    if ((iVar6 != 0) &&
       ((*(short **)(param_1[0xe] + 1000) == (short *)0x0 ||
        (**(short **)(param_1[0xe] + 1000) == 0)))) {
      pcVar11 = "ciphersuite mismatch: no common elliptic curve";
      uVar10 = 0x344;
      goto LAB_0010038a;
    }
    iVar6 = mbedtls_ssl_ciphersuite_uses_psk(lVar9);
    if (((iVar6 != 0) && (lVar3 = *param_1, *(long *)(lVar3 + 0x80) == 0)) &&
       ((*(long *)(lVar3 + 0x110) == 0 ||
        (((*(long *)(lVar3 + 0x108) == 0 || (*(long *)(lVar3 + 0xf8) == 0)) ||
         (*(long *)(lVar3 + 0x100) == 0)))))) {
      pcVar11 = "ciphersuite mismatch: no pre-shared key";
      uVar10 = 0x34f;
      goto LAB_0010038a;
    }
    iVar6 = mbedtls_ssl_get_ciphersuite_sig_pk_alg(lVar9);
    plVar12 = *(long **)(param_1[0xe] + 0x410);
    if (plVar12 == (long *)0x0) {
      if (iVar6 != 0) {
        plVar12 = *(long **)(*param_1 + 0xd0);
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x2cf,
                   "ciphersuite requires certificate");
        if (plVar12 != (long *)0x0) goto LAB_00100492;
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x2d2,
                   "server has no certificate");
        goto LAB_00100638;
      }
    }
    else if (iVar6 != 0) {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x2cf,
                 "ciphersuite requires certificate");
LAB_00100492:
      do {
        local_5c = 0;
        mbedtls_debug_print_crt
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x2d8,
                   "candidate certificate chain, certificate",*plVar12);
        iVar7 = mbedtls_pk_can_do(*plVar12 + 0x168,iVar6);
        if (iVar7 == 0) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x2ea,
                     "certificate mismatch: key type");
        }
        else {
          iVar7 = mbedtls_ssl_check_cert_usage(*plVar12,lVar9,0,0x303,&local_5c);
          pcVar11 = "certificate mismatch: (extended) key usage extension";
          uVar10 = 0x2fa;
          if (iVar7 == 0) {
            if (iVar6 != 4) {
LAB_0010057c:
              lVar3 = *plVar12;
              *(long **)(param_1[0xe] + 0x408) = plVar12;
              mbedtls_debug_print_crt
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x30f,
                         "selected certificate chain, certificate",lVar3);
              goto LAB_001005a6;
            }
            psVar13 = *(short **)(param_1[0xe] + 1000);
            local_58 = *(undefined8 *)(*plVar12 + 0x168);
            piStack_50 = *(int **)(*plVar12 + 0x170);
            iVar7 = mbedtls_pk_get_type(&local_58);
            if (2 < iVar7 - 2U) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            iVar7 = *piStack_50;
            sVar2 = *psVar13;
            while (sVar2 != 0) {
              iVar8 = mbedtls_ssl_get_ecp_group_id_from_tls_id();
              if (iVar7 == iVar8) goto LAB_0010057c;
              psVar1 = psVar13 + 1;
              psVar13 = psVar13 + 1;
              sVar2 = *psVar1;
            }
            pcVar11 = "certificate mismatch: elliptic curve";
            uVar10 = 0x303;
          }
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar10,pcVar11);
        }
        plVar12 = (long *)plVar12[2];
      } while (plVar12 != (long *)0x0);
LAB_00100638:
      pcVar11 = "ciphersuite mismatch: no suitable certificate";
      uVar10 = 0x35d;
      goto LAB_0010038a;
    }
LAB_001005a6:
    iVar6 = mbedtls_ssl_get_ciphersuite_sig_alg(lVar9);
    if (iVar6 == 0) {
LAB_001005b9:
      *param_3 = lVar9;
    }
    else {
      uVar5 = mbedtls_ssl_sig_from_pk_alg(iVar6);
      iVar7 = mbedtls_ssl_tls12_get_preferred_hash_for_sig_alg(param_1,uVar5);
      if (iVar7 != 0) goto LAB_001005b9;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x36a,
                 "ciphersuite mismatch: no suitable hash algorithm for signature algorithm %u",iVar6
                );
    }
  }
  uVar10 = 0;
LAB_0010039e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ssl_parse_client_hello(long *param_1)

{
  ushort *puVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  ushort *puVar17;
  ulong uVar18;
  byte *pbVar19;
  ushort *puVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 *puVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  ushort *puVar28;
  ushort uVar29;
  ulong uVar30;
  size_t __nmemb;
  char *pcVar31;
  uint *puVar32;
  uint uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  byte bVar35;
  undefined8 uVar36;
  ulong local_98;
  int local_60;
  long local_50;
  undefined4 local_48;
  undefined2 local_44;
  long local_40;
  
  bVar35 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x391,"=> parse client hello"
            );
  while( true ) {
    if (((*(int *)((long)param_1 + 0xc) == 0) && (*(int *)((long)param_1 + 0x13c) == 0)) &&
       (local_60 = mbedtls_ssl_fetch_input(param_1,5), local_60 != 0)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3a7,
                 "mbedtls_ssl_fetch_input",local_60);
      goto LAB_00100918;
    }
    pcVar31 = (char *)param_1[0x19];
    mbedtls_debug_print_buf
              (param_1,4,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3ae,"record header",
               pcVar31,(*(char *)(*param_1 + 9) == '\x01') * '\b' + '\x05');
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3b9,
               "client hello, message type: %d",*pcVar31);
    if (*pcVar31 != '\x16') {
      uVar36 = 0x3bd;
      goto LAB_0010149c;
    }
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3c1,
               "client hello, message len.: %d",
               *(ushort *)param_1[0x1b] << 8 | *(ushort *)param_1[0x1b] >> 8);
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3c4,
               "client hello, protocol version: [%d:%d]",pcVar31[1]);
    if (*(char *)(*param_1 + 9) != '\x01') goto LAB_00100948;
    if (*(int *)((long)param_1 + 0xc) != 0) goto LAB_001009f8;
    pcVar31 = (char *)param_1[0x18];
    if ((*pcVar31 != '\0') || (pcVar31[1] != '\0')) {
      uVar36 = 0x3d1;
      goto LAB_001009d4;
    }
    *(undefined4 *)((long)param_1 + 0x1a2) = *(undefined4 *)(pcVar31 + 2);
    *(undefined2 *)((long)param_1 + 0x1a6) = *(undefined2 *)(pcVar31 + 6);
    iVar11 = mbedtls_ssl_dtls_replay_check(param_1);
    if (iVar11 == 0) break;
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3da,
               "replayed record, discarding");
    param_1[0x23] = 0;
    param_1[0x21] = 0;
  }
  mbedtls_ssl_dtls_replay_update(param_1);
LAB_00100948:
  if (*(int *)((long)param_1 + 0xc) == 0) {
    uVar30 = (ulong)(ushort)(*(ushort *)param_1[0x1b] << 8 | *(ushort *)param_1[0x1b] >> 8);
    if (*(int *)((long)param_1 + 0x13c) == 0) {
      if (0x4000 < uVar30) {
        uVar36 = 0x3f3;
LAB_001009d4:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,
                   "bad client hello message");
LAB_001009e6:
        local_60 = -0x6600;
        goto LAB_00100918;
      }
      local_60 = mbedtls_ssl_fetch_input
                           (param_1,uVar30 + 5 + (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8);
      if (local_60 != 0) {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x3f9,
                   "mbedtls_ssl_fetch_input",local_60);
        goto LAB_00100918;
      }
      if (*(char *)(*param_1 + 9) == '\x01') {
        param_1[0x23] = uVar30 + 0xd;
      }
      else {
        param_1[0x21] = 0;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + 0x13c) = 0;
    }
  }
  else {
LAB_001009f8:
    uVar30 = param_1[0x26];
  }
  pcVar31 = (char *)param_1[0x1d];
  mbedtls_debug_print_buf
            (param_1,4,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x409,"record contents",
             pcVar31,uVar30);
  iVar11 = (**(code **)(param_1[0xe] + 0x18))(param_1,pcVar31,uVar30);
  if (iVar11 != 0) {
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x40d,"update_checksum",
               iVar11);
    local_60 = iVar11;
    goto LAB_00100918;
  }
  if (uVar30 < (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4) {
    uVar36 = 0x41a;
LAB_00101cc8:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,
               "bad client hello message");
  }
  else {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x41e,
               "client hello v3, handshake type: %d",*pcVar31);
    if (*pcVar31 != '\x01') {
      uVar36 = 0x421;
LAB_0010149c:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,
                 "bad client hello message");
      local_60 = -0x7700;
      goto LAB_00100918;
    }
    if (*(char *)(*param_1 + 9) == '\x01') {
      lVar14 = param_1[0x1d];
      lVar3 = param_1[0xe];
      uVar9 = *(ushort *)(lVar14 + 4) << 8 | *(ushort *)(lVar14 + 4) >> 8;
      uVar25 = (uint)uVar9;
      if (*(int *)((long)param_1 + 0xc) != 1) {
        *(uint *)(lVar3 + 0x4bc) = uVar25;
        uVar26 = uVar25;
LAB_001014ee:
        *(uint *)(lVar3 + 0x4c0) = uVar26 + 1;
        uVar25 = (uint)*(byte *)(lVar14 + 6) << 0x10 | (uint)*(byte *)(lVar14 + 7) << 8 |
                 (uint)*(byte *)(lVar14 + 8);
        uVar33 = (uint)*(byte *)(lVar14 + 9) << 0x10 | (uint)*(byte *)(lVar14 + 10) << 8 |
                 (uint)*(byte *)(lVar14 + 0xb);
        uVar26 = (uint)*(byte *)(lVar14 + 1) << 0x10 | (uint)*(byte *)(lVar14 + 2) << 8 |
                 (uint)*(byte *)(lVar14 + 3);
        mbedtls_debug_print_msg
                  (param_1,4,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x447,
                   "fragment_offset=%u fragment_length=%u length=%u",uVar25,uVar33,uVar26);
        if ((uVar25 != 0) || (uVar33 != uVar26)) {
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x44c,
                     "ClientHello fragmentation not supported");
          local_60 = -0x7080;
          goto LAB_00100918;
        }
        lVar14 = 0xc;
        if (*(char *)(*param_1 + 9) != '\x01') goto LAB_00100aa0;
        goto LAB_00100aa5;
      }
      uVar26 = *(uint *)(lVar3 + 0x4c0);
      if (uVar26 == uVar25) goto LAB_001014ee;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x430,
                 "bad client hello message_seq: %u (expected %u)",uVar9,uVar26);
      goto LAB_00100df2;
    }
LAB_00100aa0:
    lVar14 = 4;
LAB_00100aa5:
    uVar30 = uVar30 - lVar14;
    pcVar31 = pcVar31 + lVar14;
    if (uVar30 < 0x26) {
      uVar36 = 0x46c;
      goto LAB_00101cc8;
    }
    uVar36 = 2;
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x473,
               "client hello, version",pcVar31);
    uVar9 = mbedtls_ssl_read_version(pcVar31,*(undefined1 *)(*param_1 + 9));
    lVar14 = param_1[0xd];
    lVar3 = *param_1;
    *(uint *)((long)param_1 + 0x14) = (uint)uVar9;
    *(uint *)(lVar14 + 4) = (uint)uVar9;
    *(undefined1 *)(lVar14 + 2) = *(undefined1 *)(lVar3 + 8);
    if (uVar9 != 0x303) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x47b,
                 "server only supports TLS 1.2",uVar36);
      mbedtls_ssl_send_alert_message(param_1,2,0x46);
      local_60 = -0x6e80;
      goto LAB_00100918;
    }
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x484,
               "client hello, random bytes",pcVar31 + 2,0x20);
    lVar14 = param_1[0xe];
    uVar36 = *(undefined8 *)(pcVar31 + 10);
    *(undefined8 *)(lVar14 + 0x5a8) = *(undefined8 *)(pcVar31 + 2);
    *(undefined8 *)(lVar14 + 0x5b0) = uVar36;
    uVar36 = *(undefined8 *)(pcVar31 + 0x1a);
    *(undefined8 *)(lVar14 + 0x5b8) = *(undefined8 *)(pcVar31 + 0x12);
    *(undefined8 *)(lVar14 + 0x5c0) = uVar36;
    uVar21 = (ulong)(byte)pcVar31[0x22];
    if ((0x20 < uVar21) || (uVar30 < uVar21 + 0x24)) {
      uVar36 = 0x48f;
      goto LAB_00100ddb;
    }
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x495,
               "client hello, session id",pcVar31 + 0x23,uVar21);
    lVar14 = param_1[0xd];
    *(ulong *)(lVar14 + 0x18) = uVar21;
    *(undefined1 (*) [16])(lVar14 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar14 + 0x30) = (undefined1  [16])0x0;
    memcpy((void *)(param_1[0xd] + 0x20),pcVar31 + 0x23,*(size_t *)(param_1[0xd] + 0x18));
    lVar14 = uVar21 + 0x23;
    if (*(char *)(*param_1 + 9) == '\x01') {
      uVar34 = (ulong)(byte)pcVar31[uVar21 + 0x23];
      if (uVar30 < uVar34 + lVar14 + 3) {
        uVar36 = 0x4a6;
        goto LAB_00100ddb;
      }
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x4ac,
                 "client hello, cookie",pcVar31 + uVar21 + 0x24,uVar34);
      pcVar4 = *(code **)(*param_1 + 0x98);
      if ((pcVar4 == (code *)0x0) || (*(int *)((long)param_1 + 0xc) != 0)) {
        if (uVar34 != 0) {
          uVar36 = 0x4c4;
          goto LAB_00101cc8;
        }
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x4c8,
                   "cookie verification skipped");
      }
      else {
        iVar12 = (*pcVar4)(*(undefined8 *)(*param_1 + 0xa0),pcVar31 + uVar21 + 0x24,uVar34,
                           param_1[0x38],param_1[0x39]);
        if (iVar12 == 0) {
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x4bb,
                     "cookie verification passed");
          *(undefined1 *)(param_1[0xe] + 0x4ba) = 0;
        }
        else {
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x4b8,
                     "cookie verification failed");
          *(undefined1 *)(param_1[0xe] + 0x4ba) = 1;
        }
      }
      lVar14 = uVar34 + lVar14 + 1;
    }
    uVar9 = *(ushort *)(pcVar31 + lVar14);
    uVar10 = uVar9 << 8 | uVar9 >> 8;
    uVar21 = (ulong)uVar10;
    if (uVar10 < 2) {
LAB_00101b71:
      uVar36 = 0x4d8;
    }
    else {
      lVar3 = lVar14 + uVar21;
      if ((uVar30 < lVar3 + 3U) || ((uVar9 & 0x100) != 0)) goto LAB_00101b71;
      puVar28 = (ushort *)(pcVar31 + lVar14 + 2);
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x4de,
                 "client hello, ciphersuitelist",puVar28,uVar21);
      uVar34 = (ulong)(byte)pcVar31[lVar3 + 2];
      if (uVar34 - 1 < 0x10) {
        lVar14 = lVar3 + 2 + uVar34;
        if (uVar30 < lVar14 + 1U) goto LAB_00101ba1;
        uVar15 = lVar14 + 3;
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x4f4,
                   "client hello, compression",pcVar31 + lVar3 + 3U,uVar34);
        if (uVar30 <= lVar14 + 1U) {
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x510,
                     "client hello extensions",pcVar31 + uVar15,0);
LAB_00101a08:
          bVar6 = false;
LAB_00101a10:
          lVar14 = param_1[0xe];
          local_48 = 0x2010203;
          local_44 = 0;
          *(undefined4 *)(lVar14 + 0x40) = 0x2010203;
          *(undefined2 *)(lVar14 + 0x44) = 0;
LAB_00101689:
          uVar30 = 0;
          do {
            if ((*(char *)((long)puVar28 + uVar30) == '\0') &&
               (*(char *)((long)puVar28 + uVar30 + 1) == -1)) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x5e6,
                         "received TLS_EMPTY_RENEGOTIATION_INFO ");
              if (*(int *)((long)param_1 + 0xc) != 1) {
                *(undefined4 *)(param_1 + 0x3a) = 1;
                goto LAB_00101761;
              }
              pcVar31 = "received RENEGOTIATION SCSV during renegotiation";
              uVar36 = 0x5e9;
              goto LAB_001016fe;
            }
            uVar30 = uVar30 + 2;
          } while (uVar30 < uVar21);
          if ((int)param_1[0x3a] == 1) {
            if ((*(int *)((long)param_1 + 0xc) != 1) || (bVar6)) {
LAB_00101761:
              lVar14 = *param_1;
              goto LAB_00101764;
            }
            pcVar31 = "renegotiation_info extension missing (secure)";
            uVar36 = 0x601;
          }
          else {
            lVar14 = *param_1;
            if (*(char *)(lVar14 + 0xb) == '\x02') {
              pcVar31 = "legacy renegotiation, breaking off handshake";
              uVar36 = 0x5fa;
            }
            else if ((*(int *)((long)param_1 + 0xc) == 1) && ((int)param_1[0x3a] == 0)) {
              if (*(char *)(lVar14 + 0xb) == '\0') {
                pcVar31 = "legacy renegotiation not allowed";
                uVar36 = 0x606;
              }
              else {
                if (!bVar6) goto LAB_00101764;
                pcVar31 = "renegotiation_info extension present (legacy)";
                uVar36 = 0x60b;
              }
            }
            else {
LAB_00101764:
              if (*(code **)(lVar14 + 0x148) != (code *)0x0) {
                local_60 = (**(code **)(lVar14 + 0x148))(param_1);
                if (local_60 != 0) {
                  mbedtls_debug_print_ret
                            (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x61a,
                             "f_cert_cb",local_60);
                  goto LAB_00100918;
                }
                lVar14 = *param_1;
              }
              lVar3 = param_1[0xe];
              puVar5 = *(uint **)(lVar14 + 0x18);
              local_50 = 0;
              *(undefined8 *)(lVar3 + 0x748) = 0;
              uVar25 = *puVar5;
              *(undefined8 *)(lVar3 + 0x750) = 0;
              if (*(char *)(lVar14 + 0x15) == '\x01') {
                bVar6 = false;
                local_98 = 0;
                while( true ) {
                  uVar30 = 0;
                  while (uVar25 != 0) {
                    if (uVar25 == (ushort)(*puVar28 << 8 | *puVar28 >> 8)) {
                      local_60 = ssl_ciphersuite_match(param_1,uVar25,&local_50);
                      if (local_60 != 0) goto LAB_00100918;
                      if (local_50 != 0) goto LAB_00101a65;
                      bVar6 = true;
                    }
                    uVar30 = uVar30 + 1;
                    uVar25 = puVar5[uVar30];
                  }
                  local_98 = local_98 + 2;
                  puVar28 = puVar28 + 1;
                  if (uVar21 <= local_98) break;
                  uVar25 = *puVar5;
                }
LAB_0010196e:
                if (bVar6) {
                  pcVar31 = "got ciphersuites in common, but none of them usable";
                  uVar36 = 0x655;
                  goto LAB_001016fe;
                }
              }
              else if (uVar25 != 0) {
                bVar6 = false;
                local_98 = 0;
                puVar27 = puVar28;
                puVar32 = puVar5;
                do {
                  while( true ) {
                    if ((ushort)(*puVar27 << 8 | *puVar27 >> 8) == uVar25) {
                      local_60 = ssl_ciphersuite_match(param_1,uVar25,&local_50);
                      if (local_60 != 0) goto LAB_00100918;
                      uVar30 = local_98;
                      if (local_50 != 0) goto LAB_00101a65;
                      bVar6 = true;
                    }
                    if (puVar27 == (ushort *)((long)puVar28 + (uVar21 - 1 & 0xfffffffffffffffe)))
                    break;
                    uVar25 = *puVar32;
                    puVar27 = puVar27 + 1;
                  }
                  uVar25 = puVar32[1];
                  puVar32 = puVar32 + 1;
                  local_98 = local_98 + 1;
                  puVar27 = puVar28;
                } while (uVar25 != 0);
                goto LAB_0010196e;
              }
              pcVar31 = "got no ciphersuites in common";
              uVar36 = 0x65b;
            }
          }
LAB_001016fe:
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,pcVar31);
          mbedtls_ssl_send_alert_message(param_1,2,0x28);
          local_60 = -0x6e00;
          goto LAB_00100918;
        }
        if (uVar30 < uVar15) {
          uVar36 = 0x4fd;
        }
        else {
          uVar34 = (ulong)(ushort)(*(ushort *)(pcVar31 + lVar14 + 1) << 8 |
                                  *(ushort *)(pcVar31 + lVar14 + 1) >> 8);
          if (uVar34 + uVar15 == uVar30) {
            puVar27 = (ushort *)(pcVar31 + uVar15);
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x510,
                       "client hello extensions",puVar27,uVar34);
            if (uVar34 == 0) goto LAB_00101a08;
            if (3 < uVar34) {
              bVar6 = false;
              bVar7 = false;
              do {
                uVar9 = puVar27[1];
                uVar10 = *puVar27;
                uVar29 = uVar9 << 8 | uVar9 >> 8;
                uVar24 = uVar10 << 8 | uVar10 >> 8;
                uVar30 = (ulong)uVar29 + 4;
                if (uVar34 < uVar30) {
                  uVar36 = 0x51f;
                  goto LAB_00100ddb;
                }
                switch(uVar24) {
                case 0:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x527,
                             "found ServerName extension");
                  local_60 = mbedtls_ssl_parse_server_name_ext
                                       (param_1,puVar27 + 2,
                                        (char *)((long)puVar27 + (ulong)uVar29 + 4));
                  goto joined_r0x00100f5b;
                case 1:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x56f,
                             "found max fragment length extension");
                  if ((uVar9 != 0x100) || (4 < (byte)puVar27[2])) {
                    uVar36 = 0x159;
LAB_00101bc1:
                    mbedtls_debug_print_msg
                              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,
                               "bad client hello message");
                    mbedtls_ssl_send_alert_message(param_1,2,0x2f);
                    goto LAB_001009e6;
                  }
                  *(byte *)param_1[0xd] = (byte)puVar27[2];
                  break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                case 0x2f:
                case 0x30:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
switchD_00100d71_caseD_2:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x5bc,
                             "unknown extension found: %u (ignoring)",uVar24);
                  break;
                case 10:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x54d,
                             "found supported elliptic curves extension");
                  if (uVar29 < 2) {
                    uVar36 = 0xbe;
                    goto LAB_00100ddb;
                  }
                  uVar9 = puVar27[2];
                  uVar10 = uVar9 << 8 | uVar9 >> 8;
                  uVar15 = (ulong)uVar10;
                  if (((ulong)uVar29 != uVar15 + 2) || ((uVar9 & 0x100) != 0)) {
                    uVar36 = 0xc6;
                    goto LAB_00100ddb;
                  }
                  lVar14 = param_1[0xe];
                  if (*(long *)(lVar14 + 1000) != 0) {
                    uVar36 = 0xce;
                    goto LAB_00101bc1;
                  }
                  uVar18 = (ulong)(uVar10 >> 1) + 1;
                  __nmemb = 0xe;
                  if (uVar18 < 0xf) {
                    __nmemb = uVar18;
                  }
                  puVar17 = (ushort *)calloc(__nmemb,2);
                  if (puVar17 == (ushort *)0x0) {
                    mbedtls_ssl_send_alert_message(param_1,2,0x50);
                    local_60 = -0x7f00;
                    goto LAB_00100918;
                  }
                  *(ushort **)(lVar14 + 1000) = puVar17;
                  puVar20 = puVar27 + 3;
                  if ((1 < uVar18) && (uVar15 != 0)) {
                    puVar1 = (ushort *)((long)puVar20 + uVar15);
                    do {
                      uVar9 = *puVar20 << 8 | *puVar20 >> 8;
                      iVar12 = mbedtls_ssl_get_ecp_group_id_from_tls_id(uVar9);
                      if (iVar12 != 0) {
                        *puVar17 = uVar9;
                        __nmemb = __nmemb - 1;
                        puVar17 = puVar17 + 1;
                      }
                      puVar20 = puVar20 + 1;
                    } while ((puVar20 != puVar1) && (1 < __nmemb));
                  }
                  break;
                case 0xb:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x556,
                             "found supported point formats extension");
                  lVar14 = param_1[0xe];
                  pbVar16 = (byte *)(lVar14 + 1);
                  *pbVar16 = *pbVar16 | 1;
                  if (((ulong)uVar29 == 0) ||
                     (uVar15 = (ulong)(byte)puVar27[2], (ulong)uVar29 != uVar15 + 1)) {
                    uVar36 = 0xfe;
                    goto LAB_00100ddb;
                  }
                  pbVar16 = (byte *)((long)puVar27 + 5);
                  if (uVar15 != 0) {
                    pbVar19 = pbVar16 + uVar15;
                    do {
                      if (*pbVar16 < 2) {
                        *(byte *)(lVar14 + 0x68) = *pbVar16;
                        mbedtls_debug_print_msg
                                  (param_1,4,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x112,
                                   "point format selected: %d");
                        break;
                      }
                      pbVar16 = pbVar16 + 1;
                    } while (pbVar16 != pbVar19);
                  }
                  break;
                case 0xd:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x53e,
                             "found signature_algorithms extension");
                  local_60 = mbedtls_ssl_parse_sig_alg_ext
                                       (param_1,puVar27 + 2,
                                        (char *)((long)puVar27 + (ulong)uVar29 + 4));
                  if (local_60 != 0) goto LAB_00100918;
                  bVar7 = true;
                  break;
                case 0x10:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x5a6,
                             "found alpn extension");
                  local_60 = mbedtls_ssl_parse_alpn_ext
                                       (param_1,puVar27 + 2,
                                        (char *)((long)puVar27 + (ulong)uVar29 + 4));
                  goto joined_r0x00100f5b;
                case 0x16:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x585,
                             "found encrypt then mac extension");
                  if (uVar9 != 0) {
                    uVar36 = 0x1ad;
                    goto LAB_00100ddb;
                  }
                  if (*(char *)(*param_1 + 0xd) == '\x01') {
                    *(undefined4 *)(param_1[0xd] + 0xe8) = 1;
                  }
                  break;
                case 0x17:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x590,
                             "found extended master secret extension");
                  if (uVar9 != 0) {
                    uVar36 = 0x1c4;
                    goto LAB_00100ddb;
                  }
                  if (*(char *)(*param_1 + 0xe) == '\x01') {
                    *(undefined1 *)(param_1[0xe] + 0xc) = 1;
                  }
                  break;
                case 0x23:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x59b,
                             "found session ticket extension");
                  local_60 = ssl_parse_session_ticket_ext(param_1,puVar27 + 2,uVar29);
joined_r0x00100f5b:
                  if (local_60 != 0) goto LAB_00100918;
                  break;
                case 0x36:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x57a,
                             "found CID extension");
                  if (*(char *)(*param_1 + 9) != '\x01') {
                    uVar36 = 0x16f;
                    goto LAB_00101bc1;
                  }
                  if ((ulong)uVar29 == 0) {
                    uVar36 = 0x17c;
                    goto LAB_00100ddb;
                  }
                  bVar2 = (byte)puVar27[2];
                  uVar15 = (ulong)bVar2;
                  pcVar31 = (char *)((long)puVar27 + 5);
                  if (uVar15 != (ulong)uVar29 - 1) {
                    uVar36 = 0x186;
                    goto LAB_00100ddb;
                  }
                  if (*(char *)((long)param_1 + 0x219) == '\0') {
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",400,
                               "Client sent CID extension, but CID disabled");
                  }
                  else {
                    if (0x20 < uVar15) {
                      uVar36 = 0x195;
                      goto LAB_00101bc1;
                    }
                    lVar14 = param_1[0xe];
                    *(undefined1 *)(lVar14 + 0x4f8) = 1;
                    *(byte *)(lVar14 + 0x519) = bVar2;
                    uVar25 = (uint)bVar2;
                    if (uVar25 < 8) {
                      if ((bVar2 & 4) == 0) {
                        if ((uVar25 != 0) &&
                           (*(char *)(lVar14 + 0x4f9) = *pcVar31, (bVar2 & 2) != 0)) {
                          *(undefined2 *)(lVar14 + 0x4f7 + uVar15) =
                               *(undefined2 *)((long)puVar27 + uVar15 + 3);
                        }
                      }
                      else {
                        *(undefined4 *)(lVar14 + 0x4f9) = *(undefined4 *)pcVar31;
                        *(undefined4 *)(lVar14 + 0x4f5 + uVar15) =
                             *(undefined4 *)((long)puVar27 + uVar15 + 1);
                      }
                    }
                    else {
                      *(undefined8 *)(lVar14 + 0x4f9) = *(undefined8 *)pcVar31;
                      puVar23 = (undefined8 *)(lVar14 + 0x501U & 0xfffffffffffffff8);
                      *(undefined8 *)(lVar14 + 0x4f1 + uVar15) =
                           *(undefined8 *)((long)puVar27 + (uVar15 - 3));
                      lVar14 = (lVar14 + 0x4f9) - (long)puVar23;
                      pcVar22 = pcVar31 + -lVar14;
                      for (uVar18 = (ulong)((int)lVar14 + uVar25 >> 3); uVar18 != 0;
                          uVar18 = uVar18 - 1) {
                        *puVar23 = *(undefined8 *)pcVar22;
                        pcVar22 = pcVar22 + ((ulong)bVar35 * -2 + 1) * 8;
                        puVar23 = puVar23 + (ulong)bVar35 * -2 + 1;
                      }
                    }
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x19f,
                               "Use of CID extension negotiated");
                    mbedtls_debug_print_buf
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1a0,
                               "Client CID",pcVar31,uVar15);
                  }
                  break;
                default:
                  if (uVar10 != 0x1ff) goto switchD_00100d71_caseD_2;
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x531,
                             "found renegotiation extension");
                  if (*(int *)((long)param_1 + 0xc) == 0) {
                    if (((ulong)uVar29 != 1) || ((char)puVar27[2] != '\0')) {
                      pcVar31 = "non-zero length renegotiation info";
                      uVar36 = 0x7f;
                      goto LAB_001016fe;
                    }
                    *(undefined4 *)(param_1 + 0x3a) = 1;
                  }
                  else if ((((ulong)uVar29 != param_1[0x3b] + 1U) ||
                           (param_1[0x3b] != (ulong)(byte)puVar27[2])) ||
                          (iVar12 = mbedtls_ct_memcmp((char *)((long)puVar27 + 5)), iVar12 != 0)) {
                    pcVar31 = "non-matching renegotiation info";
                    uVar36 = 0x76;
                    goto LAB_001016fe;
                  }
                  bVar6 = true;
                }
                puVar27 = (ushort *)((long)puVar27 + uVar30);
                uVar34 = uVar34 - uVar30;
                if (uVar34 == 0) {
                  if (bVar7) goto LAB_00101689;
                  goto LAB_00101a10;
                }
              } while (3 < uVar34);
            }
            uVar36 = 0x516;
          }
          else {
            uVar36 = 0x506;
          }
        }
      }
      else {
LAB_00101ba1:
        uVar36 = 0x4ee;
      }
    }
LAB_00100ddb:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,
               "bad client hello message");
    mbedtls_ssl_send_alert_message(param_1,2,0x32);
  }
LAB_00100df2:
  local_60 = -0x7300;
LAB_00100918:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101a65:
  lVar14 = local_50;
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x662,
             "selected ciphersuite: %s",*(undefined8 *)(local_50 + 8));
  *(uint *)(param_1[0xd] + 0x10) = puVar5[uVar30];
  *(long *)(param_1[0xe] + 0x10) = lVar14;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (*(char *)(*param_1 + 9) == '\x01') {
    mbedtls_ssl_recv_flight_completed(param_1);
  }
  iVar12 = mbedtls_ssl_get_ciphersuite_sig_alg(lVar14);
  if (iVar12 == 0) {
    uVar13 = 0;
    pcVar31 = "no hash algorithm for signature algorithm %u - should not happen";
    uVar36 = 0x679;
  }
  else {
    uVar8 = mbedtls_ssl_sig_from_pk_alg(iVar12);
    uVar13 = mbedtls_ssl_tls12_get_preferred_hash_for_sig_alg(param_1,uVar8);
    pcVar31 = "client hello v3, signature_algorithm ext: %u";
    uVar36 = 0x676;
  }
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar36,pcVar31,uVar13);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x67e,"<= parse client hello"
            );
  local_60 = iVar11;
  goto LAB_00100918;
}



undefined8 ssl_parse_client_psk_identity(long *param_1,long *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ushort *puVar7;
  
  lVar2 = *param_1;
  pcVar3 = *(code **)(lVar2 + 0x80);
  if ((pcVar3 == (code *)0x0) &&
     ((((*(long *)(lVar2 + 0x110) == 0 || (*(long *)(lVar2 + 0x108) == 0)) ||
       (*(long *)(lVar2 + 0xf8) == 0)) || (*(long *)(lVar2 + 0x100) == 0)))) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xe0b,
               "got no pre-shared key");
    return 0xffff8a00;
  }
  puVar7 = (ushort *)*param_2;
  if (param_3 - (long)puVar7 < 2) {
    uVar5 = 0xe13;
LAB_00102014:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar5,
               "bad client key exchange message");
    return 0xffff8d00;
  }
  uVar1 = *puVar7;
  puVar7 = puVar7 + 1;
  *param_2 = (long)puVar7;
  if ((uVar1 == 0) ||
     (uVar6 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8), param_3 - (long)puVar7 < (long)uVar6)) {
    uVar5 = 0xe1b;
    goto LAB_00102014;
  }
  if (pcVar3 == (code *)0x0) {
    if (uVar6 != *(ulong *)(lVar2 + 0x110)) goto LAB_00101fbb;
    iVar4 = mbedtls_ct_memcmp(*(undefined8 *)(lVar2 + 0x108),puVar7,uVar6);
  }
  else {
    iVar4 = (*pcVar3)(*(undefined8 *)(lVar2 + 0x88),param_1,puVar7,uVar6);
  }
  if (iVar4 == 0) {
    *param_2 = *param_2 + uVar6;
    return 0;
  }
  puVar7 = (ushort *)*param_2;
LAB_00101fbb:
  mbedtls_debug_print_buf
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xe2d,"Unknown PSK identity",
             puVar7,uVar6);
  mbedtls_ssl_send_alert_message(param_1,2,0x73);
  return 0xffff9380;
}



ulong ssl_parse_encrypted_pms(long *param_1,char *param_2,char *param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  ulong local_b8;
  byte local_aa;
  byte local_a9;
  undefined1 local_a8 [48];
  undefined2 local_78;
  long local_40;
  
  lVar2 = param_1[0xe];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0xffff;
  local_b8 = 0;
  if ((((lVar2 == 0) || (plVar7 = *(long **)(lVar2 + 0x408), plVar7 == (long *)0x0)) &&
      (plVar7 = *(long **)(*param_1 + 0xd0), plVar7 == (long *)0x0)) || (*plVar7 == 0)) {
    uVar12 = 0xffffffffffff8b80;
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xd65,
               "got no local certificate");
  }
  else {
    lVar3 = plVar7[1];
    pcVar1 = param_2 + 2;
    lVar8 = mbedtls_pk_get_bitlen(*plVar7 + 0x168);
    uVar12 = lVar8 + 7U >> 3;
    if (param_3 < pcVar1) {
      uVar10 = 0xd7a;
    }
    else if ((*param_2 == (char)(lVar8 + 7U >> 0xb)) && (param_2[1] == (char)uVar12)) {
      uVar10 = 0xd84;
      if (param_3 == pcVar1 + uVar12) {
        iVar6 = mbedtls_pk_can_do(lVar3,1);
        if (iVar6 == 0) {
          uVar12 = 0xffffffffffff8a00;
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xda5,
                     "got no RSA private key");
        }
        else {
          iVar6 = mbedtls_pk_decrypt(lVar3,pcVar1,uVar12,&local_78,&local_b8,0x30,
                                     *(undefined8 *)(*param_1 + 0x38),
                                     *(undefined8 *)(*param_1 + 0x40));
          uVar12 = (ulong)iVar6;
        }
        goto LAB_00102164;
      }
    }
    else {
      uVar10 = 0xd7f;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar10,
               "bad client key exchange message");
    uVar12 = 0xffffffffffff8d00;
  }
LAB_00102164:
  mbedtls_ssl_write_version
            (&local_aa,*(undefined1 *)(*param_1 + 9),*(undefined4 *)(param_1[0xd] + 4));
  uVar11 = local_b8 ^ 0x30;
  bVar4 = (byte)local_78 ^ local_aa;
  bVar5 = local_a9 ^ local_78._1_1_;
  uVar9 = (**(code **)(*param_1 + 0x38))(*(undefined8 *)(*param_1 + 0x40),local_a8,0x30);
  if ((int)uVar9 == 0) {
    *(undefined8 *)(param_1[0xe] + 0x660) = 0x30;
    mbedtls_ct_memcpy_if
              ((long)(-uVar11 | uVar11 | -uVar12 | uVar12 | -(ulong)bVar4 | (ulong)bVar4 |
                     -(ulong)bVar5 | (ulong)bVar5) >> 0x3f,lVar2 + 0x5e8 + param_4,local_a8,
               &local_78,0x30);
    uVar9 = uVar9 & 0xffffffff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ssl_set_client_transport_id(long *param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if (*(char *)(*param_1 + 8) == '\x01') {
    free((void *)param_1[0x38]);
    pvVar1 = calloc(1,param_3);
    param_1[0x38] = (long)pvVar1;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0xffff8100;
    }
    else {
      __memcpy_chk(pvVar1,param_2,param_3,param_3);
      param_1[0x39] = param_3;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffff8f00;
}



void mbedtls_ssl_conf_dtls_cookies
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = param_3;
  *(undefined8 *)(param_1 + 0xa0) = param_4;
  return;
}



ulong mbedtls_ssl_handshake_server_step(long *param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  byte bVar3;
  short sVar4;
  uint *puVar5;
  short *psVar6;
  code *pcVar7;
  undefined1 uVar8;
  char cVar9;
  ushort uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  time_t tVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  void *pvVar21;
  short *psVar22;
  short sVar23;
  char *pcVar24;
  long lVar25;
  ulong uVar26;
  ushort *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  char *pcVar30;
  undefined *puVar31;
  long lVar32;
  undefined8 uVar33;
  ushort *__dest;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  short *psVar37;
  short *psVar38;
  long in_FS_OFFSET;
  byte bVar39;
  char *local_c8;
  long local_a0;
  char *local_98;
  long lStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  long local_40;
  
  bVar39 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x10d0,"server state: %d",
             (int)param_1[1]);
  switch((int)param_1[1]) {
  case 0:
    *(undefined4 *)(param_1 + 1) = 1;
    goto LAB_00102480;
  case 1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar34 = ssl_parse_client_hello(param_1);
      return uVar34;
    }
    goto LAB_001045b2;
  case 2:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x865,
               "=> write server hello");
    if ((*(char *)(*param_1 + 9) == '\x01') && (*(char *)(param_1[0xe] + 0x4ba) != '\0')) {
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x86a,
                 "client hello was not authenticated");
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x86b,
                 "<= write server hello");
      local_98 = (char *)(param_1[0x30] + 4);
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x7ec,
                 "=> write hello verify request");
      mbedtls_ssl_write_version
                (local_98,*(undefined1 *)(*param_1 + 9),*(undefined4 *)((long)param_1 + 0x14));
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x7f8,"server version",
                 local_98,2);
      pcVar30 = local_98;
      pcVar7 = *(code **)(*param_1 + 0x90);
      if (pcVar7 == (code *)0x0) {
        uVar34 = 0xffff9400;
        local_98 = local_98 + 2;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x7fd,
                   "inconsistent cookie callbacks");
      }
      else {
        pcVar24 = local_98 + 3;
        local_98 = pcVar24;
        uVar14 = (*pcVar7)(*(undefined8 *)(*param_1 + 0xa0),&local_98,param_1[0x2a] + 0x417d,
                           param_1[0x38],param_1[0x39]);
        uVar34 = (ulong)uVar14;
        if (uVar14 == 0) {
          cVar9 = (char)local_98 - (char)pcVar24;
          pcVar30[2] = cVar9;
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x80d,"cookie sent",
                     pcVar24,cVar9);
          *(undefined4 *)(param_1 + 0x31) = 0x16;
          param_1[0x32] = (long)local_98 - param_1[0x30];
          *(undefined1 *)param_1[0x30] = 3;
          *(undefined4 *)(param_1 + 1) = 0x11;
          uVar14 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
          uVar34 = (ulong)uVar14;
          if (uVar14 == 0) {
            if ((*(char *)(*param_1 + 9) != '\x01') ||
               (uVar14 = mbedtls_ssl_flight_transmit(param_1), uVar14 == 0)) {
              pcVar30 = "<= write hello verify request";
              uVar20 = 0x822;
              goto LAB_0010315b;
            }
            uVar34 = (ulong)uVar14;
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x81d,
                       "mbedtls_ssl_flight_transmit",uVar14);
          }
          else {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x816,
                       "mbedtls_ssl_write_handshake_msg",uVar14);
          }
        }
        else {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x807,
                     "f_cookie_write",uVar14);
        }
      }
    }
    else {
      lVar18 = param_1[0x30];
      mbedtls_ssl_write_version
                (lVar18 + 4,*(char *)(*param_1 + 9),*(undefined4 *)((long)param_1 + 0x14));
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x87e,
                 "server hello, chosen version: [%d:%d]",*(undefined1 *)(lVar18 + 4));
      tVar16 = time((time_t *)0x0);
      uVar14 = (uint)tVar16;
      *(uint *)(lVar18 + 6) =
           uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x886,
                 "server hello, current time: %lld",tVar16);
      uVar14 = (**(code **)(*param_1 + 0x38))(*(undefined8 *)(*param_1 + 0x40),lVar18 + 10,0x14);
      uVar34 = (ulong)uVar14;
      if (uVar14 == 0) {
        puVar5 = (uint *)*param_1;
        if ((puVar5[1] < 0x305) && (0x303 < *puVar5)) {
          *(undefined8 *)(lVar18 + 0x1e) = 0x14452474e574f44;
        }
        else {
          uVar14 = (**(code **)(puVar5 + 0xe))(*(undefined8 *)(puVar5 + 0x10),lVar18 + 0x1e,8);
          uVar34 = (ulong)uVar14;
          if (uVar14 != 0) break;
        }
        lVar17 = param_1[0xe];
        uVar20 = *(undefined8 *)(lVar18 + 0xe);
        *(undefined8 *)(lVar17 + 0x5c8) = *(undefined8 *)(lVar18 + 6);
        *(undefined8 *)(lVar17 + 0x5d0) = uVar20;
        uVar20 = *(undefined8 *)(lVar18 + 0x1e);
        *(undefined8 *)(lVar17 + 0x5d8) = *(undefined8 *)(lVar18 + 0x16);
        *(undefined8 *)(lVar17 + 0x5e0) = uVar20;
        uVar20 = 0x20;
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8b2,
                   "server hello, random bytes");
        ssl_handle_id_based_session_resumption(param_1);
        if (*(char *)param_1[0xe] == '\0') {
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          lVar17 = param_1[0xd];
          tVar16 = time((time_t *)0x0);
          *(time_t *)(lVar17 + 8) = tVar16;
          lVar17 = param_1[0xd];
          if (*(char *)(param_1[0xe] + 4) == '\0') {
            lVar25 = *param_1;
            *(undefined8 *)(lVar17 + 0x18) = 0x20;
            uVar33 = 0x20;
            uVar14 = (**(code **)(lVar25 + 0x38))(*(undefined8 *)(lVar25 + 0x40),lVar17 + 0x20,0x20)
            ;
            uVar34 = (ulong)uVar14;
            if (uVar14 != 0) break;
          }
          else {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            uVar33 = 0;
            *(undefined1 (*) [16])(lVar17 + 0x20) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar17 + 0x30) = (undefined1  [16])0x0;
          }
        }
        else {
          uVar33 = *(undefined8 *)(param_1[0xd] + 0x18);
          *(undefined4 *)(param_1 + 1) = 0xc;
          uVar14 = mbedtls_ssl_derive_keys(param_1,uVar20);
          uVar34 = (ulong)uVar14;
          if (uVar14 != 0) {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8d6,
                       "mbedtls_ssl_derive_keys",uVar14);
            break;
          }
        }
        pvVar21 = (void *)(lVar18 + 0x27);
        *(char *)(lVar18 + 0x26) = (char)*(undefined8 *)(param_1[0xd] + 0x18);
        memcpy(pvVar21,(void *)(param_1[0xd] + 0x20),*(size_t *)(param_1[0xd] + 0x18));
        lVar17 = *(long *)(param_1[0xd] + 0x18);
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8e7,
                   "server hello, session id len.: %zu",uVar33);
        puVar27 = (ushort *)(lVar17 + (long)pvVar21);
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8e8,
                   "server hello, session id",pvVar21,uVar33);
        puVar31 = &_LC88;
        if (*(char *)param_1[0xe] != '\0') {
          puVar31 = &_LC87;
        }
        pcVar30 = (char *)0x0;
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8e9,
                   "%s session has been resumed",puVar31);
        uVar10 = *(ushort *)(param_1[0xd] + 0x10);
        *(undefined1 *)(puVar27 + 1) = 0;
        *puVar27 = uVar10 << 8 | uVar10 >> 8;
        local_c8 = (char *)((long)puVar27 + 3);
        uVar20 = mbedtls_ssl_get_ciphersuite_name(*(undefined4 *)(param_1[0xd] + 0x10));
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8f0,
                   "server hello, chosen ciphersuite: %s",uVar20);
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x8f2,
                   "server hello, compress alg.: 0x%02X",0);
        __dest = (ushort *)((long)puVar27 + 5);
        if ((int)param_1[0x3a] == 1) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x719,
                     "server hello, secure renegotiation extension");
          __dest = puVar27 + 5;
          *(undefined2 *)((long)puVar27 + 5) = 0x1ff;
          if (*(int *)((long)param_1 + 0xc) == 0) {
            *(undefined1 *)((long)puVar27 + 9) = 0;
            pcVar30 = (char *)0x5;
            *(undefined2 *)((long)puVar27 + 7) = 0x100;
          }
          else {
            *(undefined1 *)((long)puVar27 + 7) = 0;
            *(char *)(puVar27 + 4) = (char)param_1[0x3b] * '\x02' + '\x01';
            *(char *)((long)puVar27 + 9) = (char)param_1[0x3b] * '\x02';
            pvVar21 = memcpy(__dest,(void *)((long)param_1 + 0x1ec),param_1[0x3b]);
            pvVar21 = memcpy((void *)((long)pvVar21 + param_1[0x3b]),param_1 + 0x3c,param_1[0x3b]);
            pcVar30 = (char *)((long)pvVar21 + (param_1[0x3b] - ((long)puVar27 + 5)));
            __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 5));
          }
        }
        if (*(char *)param_1[0xd] != '\0') {
          local_98 = pcVar30;
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x73f,
                     "server hello, max_fragment_length extension");
          __dest[0] = 0x100;
          __dest[1] = 0x100;
          *(undefined1 *)(__dest + 2) = *(undefined1 *)param_1[0xd];
          __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 10));
          pcVar30 = pcVar30 + 5;
        }
        local_98 = (char *)0x0;
        if (*(char *)(param_1[0xe] + 0x4f8) != '\0') {
          if (((ushort *)(param_1[0x30] + 0x4000) < __dest) ||
             ((ulong)((param_1[0x30] + 0x4000) - (long)__dest) <
              (ulong)*(byte *)(param_1 + 0x43) + 5)) {
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x697,
                       "buffer too small");
            pcVar30 = pcVar30 + (long)local_98;
            __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 5));
          }
          else {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x69b,
                       "server hello, adding CID extension");
            puVar1 = (undefined4 *)((long)__dest + 5);
            *__dest = 0x3600;
            __dest[1] = (*(byte *)(param_1 + 0x43) + 1) * 0x100 |
                        (ushort)(*(byte *)(param_1 + 0x43) + 1) >> 8;
            bVar3 = *(byte *)(param_1 + 0x43);
            uVar34 = (ulong)bVar3;
            *(byte *)(__dest + 2) = bVar3;
            if (bVar3 < 8) {
              if ((bVar3 & 4) == 0) {
                if ((bVar3 != 0) && (*(char *)puVar1 = (char)param_1[0x3f], (bVar3 & 2) != 0)) {
                  *(undefined2 *)((long)__dest + uVar34 + 3) =
                       *(undefined2 *)((long)param_1 + uVar34 + 0x1f6);
                }
              }
              else {
                *puVar1 = (int)param_1[0x3f];
                *(undefined4 *)((long)__dest + uVar34 + 1) =
                     *(undefined4 *)((long)param_1 + uVar34 + 500);
              }
            }
            else {
              puVar29 = (undefined8 *)((long)__dest + 0xdU & 0xfffffffffffffff8);
              *(long *)((long)__dest + 5) = param_1[0x3f];
              *(undefined8 *)((long)__dest + (uVar34 - 3)) =
                   *(undefined8 *)((long)param_1 + uVar34 + 0x1f0);
              lVar17 = (long)puVar1 - (long)puVar29;
              puVar28 = (undefined8 *)((long)param_1 + (0x1f8 - lVar17));
              for (uVar34 = (ulong)((uint)bVar3 + (int)lVar17 >> 3); uVar34 != 0;
                  uVar34 = uVar34 - 1) {
                *puVar29 = *puVar28;
                puVar28 = puVar28 + (ulong)bVar39 * -2 + 1;
                puVar29 = puVar29 + (ulong)bVar39 * -2 + 1;
              }
            }
            local_98 = (char *)((ulong)*(byte *)(param_1 + 0x43) + 5);
            pcVar30 = pcVar30 + (long)local_98;
            __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 5));
          }
        }
        lVar17 = mbedtls_ssl_ciphersuite_from_id(*(undefined4 *)(param_1[0xd] + 0x10));
        if (lVar17 == 0) {
          *(undefined4 *)(param_1[0xd] + 0xe8) = 0;
LAB_001028fd:
          local_98 = (char *)0x0;
        }
        else {
          iVar13 = mbedtls_ssl_get_mode_from_ciphersuite
                             (*(undefined4 *)(param_1[0xd] + 0xe8),lVar17);
          if (iVar13 != 2) {
            *(undefined4 *)(param_1[0xd] + 0xe8) = 0;
            goto LAB_001028fd;
          }
          if (*(int *)(param_1[0xd] + 0xe8) == 0) goto LAB_001028fd;
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x6d1,
                     "server hello, adding encrypt then mac extension");
          __dest[0] = 0x1600;
          __dest[1] = 0;
          __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 9));
          pcVar30 = pcVar30 + 4;
          local_98 = (char *)0x4;
        }
        lVar17 = param_1[0xe];
        if (*(char *)(lVar17 + 0xc) == '\0') {
          local_98 = (char *)0x0;
        }
        else {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x6e9,
                     "server hello, adding extended master secret extension");
          __dest[0] = 0x1700;
          __dest[1] = 0;
          local_98 = (char *)0x4;
          __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 9));
          lVar17 = param_1[0xe];
          pcVar30 = pcVar30 + 4;
        }
        pcVar24 = (char *)0x0;
        if (*(char *)(lVar17 + 4) != '\0') {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x702,
                     "server hello, adding session ticket extension");
          pcVar24 = (char *)0x4;
          __dest[0] = 0x2300;
          __dest[1] = 0;
          __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 9));
          pcVar30 = pcVar30 + 4;
        }
        local_98 = pcVar24;
        lVar17 = mbedtls_ssl_ciphersuite_from_id(*(undefined4 *)(param_1[0xd] + 0x10));
        pcVar24 = local_98;
        if (((lVar17 != 0) &&
            (iVar13 = mbedtls_ssl_ciphersuite_uses_ec(lVar17), pcVar24 = local_98, iVar13 != 0)) &&
           (pcVar24 = (char *)0x0, (*(byte *)(param_1[0xe] + 1) & 1) != 0)) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x75d,
                     "server hello, supported_point_formats extension");
          __dest[1] = 0x200;
          __dest[2] = 1;
          *__dest = 0xb00;
          __dest = (ushort *)((long)puVar27 + (long)(pcVar30 + 0xb));
          pcVar30 = pcVar30 + 6;
          pcVar24 = (char *)0x6;
        }
        local_98 = pcVar24;
        uVar14 = mbedtls_ssl_write_alpn_ext(param_1,__dest,lVar18 + 0x3ffc,&local_98);
        uVar34 = (ulong)uVar14;
        if (uVar14 == 0) {
          pcVar30 = local_98 + (long)pcVar30;
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x933,
                     "server hello, total extension length: %zu",pcVar30);
          if (pcVar30 != (char *)0x0) {
            *(ushort *)((long)puVar27 + 3) = (ushort)pcVar30 << 8 | (ushort)pcVar30 >> 8;
            local_c8 = pcVar30 + (long)puVar27 + 5;
          }
          *(undefined4 *)(param_1 + 0x31) = 0x16;
          param_1[0x32] = (long)local_c8 - lVar18;
          *(undefined1 *)param_1[0x30] = 2;
          uVar14 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
          pcVar30 = "<= write server hello";
          uVar20 = 0x941;
          uVar34 = (ulong)uVar14;
          goto LAB_0010315b;
        }
      }
    }
    break;
  case 3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar34 = mbedtls_ssl_write_certificate(param_1);
      return uVar34;
    }
    goto LAB_001045b2;
  case 4:
    local_a0 = 0;
    lVar18 = *(long *)(param_1[0xe] + 0x10);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xca2,
               "=> write server key exchange");
    bVar39 = *(byte *)(lVar18 + 0x12);
    if ((bVar39 < 0xb) && ((0x6a2UL >> ((ulong)bVar39 & 0x3f) & 1) != 0)) {
      if (1 < bVar39 - 9) {
LAB_00102b48:
        pcVar30 = "<= skip write server key exchange";
        uVar20 = 0xcb6;
        goto LAB_00102b54;
      }
      if ((((param_1[0xe] == 0) || (lVar18 = *(long *)(param_1[0xe] + 0x408), lVar18 == 0)) &&
          (lVar18 = *(long *)(*param_1 + 0xd0), lVar18 == 0)) || (*(long *)(lVar18 + 8) == 0)) {
        uVar34 = 0xffff8a00;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xaa2,
                   "got no server private key");
      }
      else {
        iVar13 = mbedtls_pk_can_do(*(long *)(lVar18 + 8),2);
        if (iVar13 == 0) {
          uVar34 = 0xffff9300;
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xaa7,
                     "server key not ECDH capable");
        }
        else {
          if (((param_1[0xe] == 0) || (lVar18 = *(long *)(param_1[0xe] + 0x408), lVar18 == 0)) &&
             (lVar18 = *(long *)(*param_1 + 0xd0), lVar18 == 0)) {
            uVar34 = mbedtls_ssl_handshake_server_step_cold();
            return uVar34;
          }
          local_98 = (char *)**(long **)(lVar18 + 8);
          lStack_90 = (*(long **)(lVar18 + 8))[1];
          iVar13 = mbedtls_pk_get_type(&local_98);
          lVar18 = 0;
          if (iVar13 - 2U < 3) {
            lVar18 = lStack_90;
          }
          uVar14 = mbedtls_ecdh_get_params(param_1[0xe] + 0x68,lVar18,0);
          uVar34 = (ulong)uVar14;
          if (uVar14 == 0) goto LAB_00102b48;
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xaae,
                     "mbedtls_ecdh_get_params",uVar14);
        }
      }
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xcae,
                 "ssl_get_ecdh_params_from_cert",uVar34);
    }
    else {
      lVar18 = param_1[0x30];
      lVar17 = *(long *)(param_1[0xe] + 0x10);
      lVar25 = param_1[0x2a];
      param_1[0x32] = 4;
      bVar39 = *(byte *)(lVar17 + 0x12);
      if ((bVar39 - 6 & 0xfd) == 0) {
        param_1[0x32] = 5;
        *(undefined1 *)(lVar18 + 4) = 0;
        lVar32 = param_1[0x32];
        param_1[0x32] = lVar32 + 1;
        *(undefined1 *)(param_1[0x30] + lVar32) = 0;
        bVar39 = *(byte *)(lVar17 + 0x12);
      }
      if (bVar39 < 5) {
        if (bVar39 < 3) {
          if (2 < bVar39 - 2) goto LAB_00103bb5;
LAB_001033ec:
          uVar20 = 0xc18;
LAB_001033f8:
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,
                     "should never happen");
          uVar34 = 0xffff9400;
        }
        else {
LAB_001038c0:
          psVar6 = *(short **)(param_1[0xe] + 1000);
          psVar22 = *(short **)(*param_1 + 0xf0);
          local_98 = (char *)0x0;
          if ((psVar22 == (short *)0x0) || (psVar6 == (short *)0x0)) {
            uVar34 = 0xffffa180;
          }
          else {
            sVar23 = *psVar22;
            sVar4 = *psVar6;
            psVar38 = psVar6;
            if (sVar23 != 0) {
              psVar37 = psVar6;
              sVar11 = sVar4;
              if (sVar4 == 0) {
                do {
                  psVar22 = psVar22 + 1;
                } while (*psVar22 != 0);
              }
              else {
                do {
                  do {
                    psVar38 = psVar37;
                    if (sVar23 == sVar11) goto LAB_00103927;
                    psVar2 = psVar37 + 1;
                    psVar38 = psVar37 + 1;
                    psVar37 = psVar38;
                    sVar11 = *psVar2;
                  } while (*psVar2 != 0);
                  sVar23 = psVar22[1];
                  psVar22 = psVar22 + 1;
                  psVar37 = psVar6;
                  sVar11 = sVar4;
                } while (sVar23 != 0);
              }
            }
LAB_00103927:
            if (*psVar38 == 0) {
              uVar34 = 0xffff9200;
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xb97,
                         "no matching curve for ECDHE");
            }
            else {
              uVar20 = mbedtls_ssl_get_curve_name_from_tls_id(*psVar38);
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xb9b,
                         "ECDHE curve: %s",uVar20);
              uVar15 = mbedtls_ssl_get_ecp_group_id_from_tls_id(*psVar38);
              uVar14 = mbedtls_ecdh_setup(param_1[0xe] + 0x68,uVar15);
              uVar34 = (ulong)uVar14;
              if (uVar14 == 0) {
                uVar14 = mbedtls_ecdh_make_params
                                   (param_1[0xe] + 0x68,&local_98,param_1[0x32] + param_1[0x30],
                                    0x4000 - param_1[0x32],*(undefined8 *)(*param_1 + 0x38),
                                    *(undefined8 *)(*param_1 + 0x40));
                uVar34 = (ulong)uVar14;
                if (uVar14 == 0) {
                  mbedtls_debug_printf_ecdh
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xc03,
                             param_1[0xe] + 0x68,0);
                  pcVar30 = local_98;
                  lVar32 = param_1[0x32];
                  puVar19 = (undefined1 *)param_1[0x30];
                  param_1[0x32] = (long)(local_98 + lVar32);
                  if (2 < *(byte *)(lVar17 + 0x12) - 2) goto LAB_00103bbc;
                  if (puVar19 + lVar32 == (undefined1 *)0x0) goto LAB_001033ec;
                  local_98 = (char *)0x0;
                  iVar13 = mbedtls_ssl_get_ciphersuite_sig_pk_alg(lVar17);
                  uVar8 = mbedtls_ssl_sig_from_pk_alg(iVar13);
                  uVar8 = mbedtls_ssl_tls12_get_preferred_hash_for_sig_alg(param_1,uVar8);
                  iVar12 = mbedtls_ssl_md_alg_from_hash(uVar8);
                  if ((iVar13 == 0) || (iVar12 == 0)) {
                    uVar20 = 0xc34;
                    goto LAB_001033f8;
                  }
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xc3a,
                             "pick hash algorithm %u for signing",iVar12);
                  uVar14 = mbedtls_ssl_get_key_exchange_md_tls1_2
                                     (param_1,local_88,&local_98,puVar19 + lVar32,pcVar30,iVar12);
                  uVar34 = (ulong)uVar14;
                  if (uVar14 == 0) {
                    pcVar30 = local_98;
                    mbedtls_debug_print_buf
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xc4c,
                               "parameters hash",local_88);
                    lVar17 = param_1[0x32];
                    lVar32 = param_1[0x30];
                    param_1[0x32] = lVar17 + 1;
                    uVar8 = mbedtls_ssl_hash_from_md_alg(iVar12);
                    *(undefined1 *)(lVar17 + lVar32) = uVar8;
                    lVar17 = param_1[0x32];
                    lVar32 = param_1[0x30];
                    param_1[0x32] = lVar17 + 1;
                    uVar8 = mbedtls_ssl_sig_from_pk_alg(iVar13);
                    *(undefined1 *)(lVar17 + lVar32) = uVar8;
                    lVar17 = *param_1;
                    if ((((param_1[0xe] == 0) ||
                         (lVar32 = *(long *)(param_1[0xe] + 0x408), lVar32 == 0)) &&
                        (lVar32 = *(long *)(lVar17 + 0xd0), lVar32 == 0)) ||
                       (*(long *)(lVar32 + 8) == 0)) {
                      uVar34 = 0xffff8a00;
                      mbedtls_debug_print_msg
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xc7b,
                                 "got no private key",pcVar30);
                      goto LAB_00103410;
                    }
                    uVar14 = mbedtls_pk_sign(*(long *)(lVar32 + 8),iVar12,local_88,local_98,
                                             param_1[0x30] + 2 + param_1[0x32],
                                             (0x417b - param_1[0x32]) - (lVar18 - lVar25),&local_a0,
                                             *(undefined8 *)(lVar17 + 0x38),
                                             *(undefined8 *)(lVar17 + 0x40));
                    uVar34 = (ulong)uVar14;
                    if (uVar14 == 0) goto LAB_00103bb5;
                    mbedtls_debug_print_ret
                              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xc8b,
                               "mbedtls_pk_sign",uVar14);
                  }
                }
                else {
                  mbedtls_debug_print_ret
                            (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xbff,
                             "mbedtls_ecdh_make_params",uVar14);
                }
              }
              else {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xbf6,
                           "mbedtls_ecp_group_load",uVar14);
              }
              pcVar30 = "<= write server key exchange (pending)";
              uVar20 = 0xcd1;
              if ((int)uVar34 == -0x6500) goto LAB_0010315b;
            }
          }
        }
LAB_00103410:
        param_1[0x32] = 0;
      }
      else {
        if (bVar39 == 8) goto LAB_001038c0;
LAB_00103bb5:
        puVar19 = (undefined1 *)param_1[0x30];
LAB_00103bbc:
        if (local_a0 != 0) {
          lVar18 = param_1[0x32];
          param_1[0x32] = lVar18 + 1;
          puVar19[lVar18] = (char)((ulong)local_a0 >> 8);
          lVar18 = param_1[0x32];
          param_1[0x32] = lVar18 + 1;
          *(char *)(param_1[0x30] + lVar18) = (char)local_a0;
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xce0,"my signature",
                     param_1[0x32] + param_1[0x30],local_a0);
          param_1[0x32] = param_1[0x32] + local_a0;
          puVar19 = (undefined1 *)param_1[0x30];
        }
        *(undefined4 *)(param_1 + 0x31) = 0x16;
        *puVar19 = 0xc;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        uVar14 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
        pcVar30 = "<= write server key exchange";
        uVar20 = 0xcf4;
        uVar34 = (ulong)uVar14;
        if (uVar14 == 0) goto LAB_00102d0e;
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xcf0,
                   "mbedtls_ssl_write_handshake_msg",uVar14);
      }
    }
    break;
  case 5:
    lVar18 = *(long *)(param_1[0xe] + 0x10);
    lVar17 = param_1[0x30];
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x966,
               "=> write certificate request");
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    cVar9 = *(char *)(param_1[0xe] + 2);
    if (cVar9 == '\x03') {
      cVar9 = *(char *)(*param_1 + 10);
    }
    bVar39 = *(byte *)(lVar18 + 0x12);
    if (bVar39 < 5) {
      if (bVar39 != 0) goto LAB_00102bcf;
    }
    else if ((byte)(bVar39 - 9) < 2) {
LAB_00102bcf:
      if (cVar9 != '\0') {
        lVar18 = param_1[0x30];
        *(undefined1 *)(lVar18 + 6) = 0x40;
        *(undefined2 *)(lVar18 + 4) = 0x102;
        puVar27 = *(ushort **)(*param_1 + 0xe8);
        if (puVar27 != (ushort *)0x0) {
          uVar10 = *puVar27;
          if (uVar10 == 0) {
            lVar32 = 9;
            lVar25 = 4;
            uVar10 = 0;
          }
          else {
            lVar35 = 0;
            do {
              iVar13 = mbedtls_ssl_set_calc_verify_md(param_1,uVar10 >> 8);
              if (iVar13 == 0) {
                uVar10 = *puVar27;
                if (*(int *)((long)param_1 + 0x14) == 0x303) {
                  if (((byte)(uVar10 >> 8) - 1 < 6) && (((byte)uVar10 & 0xfd) == 1))
                  goto LAB_00102c74;
                }
                else if (*(int *)((long)param_1 + 0x14) == 0x304) {
                  if (((uVar10 & 0xfeff) == 0x401) || ((uVar10 & 0xfffd) == 0x601)) {
LAB_00102c74:
                    lVar35 = lVar35 + 2;
                    *(ushort *)(lVar18 + 7 + lVar35) = uVar10 << 8 | uVar10 >> 8;
                  }
                  else if (uVar10 < 0x604) {
                    if ((uVar10 & 0xfeff) == 0x403) goto LAB_00102c74;
                  }
                  else if ((ushort)(uVar10 - 0x804) < 3) goto LAB_00102c74;
                }
              }
              uVar10 = puVar27[1];
              puVar27 = puVar27 + 1;
            } while (uVar10 != 0);
            lVar25 = lVar35 + 4;
            lVar32 = lVar35 + 9;
            uVar10 = (ushort)lVar35 << 8 | (ushort)lVar35 >> 8;
          }
          *(ushort *)(lVar18 + 7) = uVar10;
          lVar35 = *param_1;
          puVar27 = (ushort *)(lVar18 + 7 + lVar25);
          uVar10 = 0;
          if (*(char *)(lVar35 + 0x14) == '\x01') {
            lVar25 = *(long *)(param_1[0xe] + 0x758);
            if ((((lVar25 != 0) || (lVar25 = *(long *)(lVar35 + 0x150), lVar25 != 0)) ||
                (lVar25 = *(long *)(param_1[0xe] + 0x418), lVar25 != 0)) ||
               (lVar25 = *(long *)(lVar35 + 0xd8), uVar10 = 0, lVar25 != 0)) {
              iVar13 = 0;
              do {
                uVar10 = (ushort)iVar13;
                if (*(int *)(lVar25 + 0x38) == 0) break;
                uVar34 = *(ulong *)(lVar25 + 0x90);
                if (((ushort *)(lVar17 + 0x4000) < puVar27) ||
                   (uVar26 = uVar34 & 0xffff,
                   (ulong)((lVar17 + 0x4000) - (long)puVar27) < uVar26 + 2)) {
                  mbedtls_debug_print_msg
                            (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x9e8,
                             "skipping CAs: buffer too short");
                  uVar10 = uVar10 << 8 | uVar10 >> 8;
                  goto LAB_001036f7;
                }
                iVar13 = iVar13 + 2 + (int)uVar34;
                uVar10 = (ushort)iVar13;
                *puVar27 = (ushort)uVar34 << 8 | (ushort)uVar34 >> 8;
                pvVar21 = memcpy(puVar27 + 1,*(void **)(lVar25 + 0x98),uVar26);
                puVar27 = (ushort *)((long)pvVar21 + uVar26);
                mbedtls_debug_print_buf
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x9f1,
                           "requested DN",pvVar21,uVar26);
                lVar25 = *(long *)(lVar25 + 0x2e0);
              } while (lVar25 != 0);
              uVar10 = uVar10 << 8 | uVar10 >> 8;
            }
          }
LAB_001036f7:
          param_1[0x32] = (long)puVar27 - lVar18;
          *(undefined4 *)(param_1 + 0x31) = 0x16;
          *(undefined1 *)param_1[0x30] = 0xd;
          *(ushort *)(param_1[0x30] + lVar32) = uVar10;
          uVar14 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
          pcVar30 = "<= write certificate request";
          uVar20 = 0x9ff;
          uVar34 = (ulong)uVar14;
          goto LAB_0010315b;
        }
        uVar34 = 0xffffa180;
        break;
      }
    }
    pcVar30 = "<= skip write certificate request";
    uVar20 = 0x973;
LAB_00102d0e:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,pcVar30);
    goto LAB_00102480;
  case 6:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xcfd,
               "=> write server hello done");
    param_1[0x32] = 4;
    *(undefined4 *)(param_1 + 0x31) = 0x16;
    *(undefined1 *)param_1[0x30] = 0xe;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*(char *)(*param_1 + 9) == '\x01') {
      mbedtls_ssl_send_flight_completed(param_1);
    }
    uVar14 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
    uVar34 = (ulong)uVar14;
    if (uVar14 == 0) {
      if (*(char *)(*param_1 + 9) == '\x01') {
        uVar14 = mbedtls_ssl_flight_transmit(param_1);
        uVar34 = (ulong)uVar14;
        if (uVar14 != 0) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xd13,
                     "mbedtls_ssl_flight_transmit",uVar14);
          break;
        }
      }
      pcVar30 = "<= write server hello done";
      uVar20 = 0xd18;
      goto LAB_00102d0e;
    }
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xd0c,
               "mbedtls_ssl_write_handshake_msg",uVar14);
    break;
  case 7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar34 = mbedtls_ssl_parse_certificate(param_1);
      return uVar34;
    }
    goto LAB_001045b2;
  case 8:
    lVar18 = *(long *)(param_1[0xe] + 0x10);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xe42,
               "=> parse client key exchange");
    uVar14 = mbedtls_ssl_read_record(param_1,1);
    uVar34 = (ulong)uVar14;
    if (uVar14 == 0) {
      pcVar30 = (char *)param_1[0x1d];
      pcVar24 = pcVar30 + param_1[0x26];
      lVar17 = (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4;
      local_98 = pcVar30 + lVar17;
      if ((int)param_1[0x1f] == 0x16) {
        if (*pcVar30 == '\x10') {
          switch(*(undefined1 *)(lVar18 + 0x12)) {
          default:
            uVar34 = 0xffff9400;
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xfce,
                       "should never happen");
            break;
          case 1:
            uVar14 = ssl_parse_encrypted_pms(param_1,local_98,pcVar24,0);
            uVar34 = (ulong)uVar14;
            if (uVar14 == 0) {
LAB_0010333a:
              uVar14 = mbedtls_ssl_derive_keys(param_1);
              uVar34 = (ulong)uVar14;
              if (uVar14 == 0) {
                *(int *)(param_1 + 1) = (int)param_1[1] + 1;
                pcVar30 = "<= parse client key exchange";
                uVar20 = 0xfd9;
                goto LAB_0010315b;
              }
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xfd3,
                         "mbedtls_ssl_derive_keys",uVar14);
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xfaa,
                         "ssl_parse_parse_encrypted_pms_secret",uVar14);
            }
            break;
          case 3:
          case 4:
          case 9:
          case 10:
            iVar13 = mbedtls_ecdh_read_public(param_1[0xe] + 0x68,local_98,param_1[0x26] - lVar17);
            if (iVar13 == 0) {
              mbedtls_debug_printf_ecdh
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xec6,
                         param_1[0xe] + 0x68,1);
              lVar18 = param_1[0xe];
              iVar13 = mbedtls_ecdh_calc_secret
                                 (lVar18 + 0x68,lVar18 + 0x660,lVar18 + 0x5e8,0x400,
                                  *(undefined8 *)(*param_1 + 0x38),*(undefined8 *)(*param_1 + 0x40))
              ;
              if (iVar13 == 0) {
                mbedtls_debug_printf_ecdh
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xed2,
                           param_1[0xe] + 0x68,2);
                goto LAB_0010333a;
              }
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xece,
                         "mbedtls_ecdh_calc_secret",iVar13);
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xec2,
                         "mbedtls_ecdh_read_public",iVar13);
            }
LAB_00104539:
            uVar34 = 0xffff8d00;
            break;
          case 5:
            uVar14 = ssl_parse_client_psk_identity(param_1,&local_98,pcVar24);
            uVar34 = (ulong)uVar14;
            if (uVar14 == 0) {
              pcVar30 = "bad client key exchange";
              uVar20 = 0xee2;
              if (pcVar24 != local_98) goto LAB_00104527;
              uVar14 = mbedtls_ssl_psk_derive_premaster(param_1,*(undefined1 *)(lVar18 + 0x12));
              uVar34 = (ulong)uVar14;
              if (uVar14 == 0) goto LAB_0010333a;
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xeea,
                         "mbedtls_ssl_psk_derive_premaster",uVar14);
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xedd,
                         "ssl_parse_client_psk_identity",uVar14);
            }
            break;
          case 7:
            uVar14 = ssl_parse_client_psk_identity(param_1,&local_98,pcVar24);
            uVar34 = (ulong)uVar14;
            if (uVar14 == 0) {
              uVar14 = ssl_parse_encrypted_pms(param_1,local_98,pcVar24,2);
              uVar34 = (ulong)uVar14;
              if (uVar14 == 0) {
                uVar14 = mbedtls_ssl_psk_derive_premaster(param_1,*(undefined1 *)(lVar18 + 0x12));
                uVar34 = (ulong)uVar14;
                if (uVar14 == 0) goto LAB_0010333a;
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xf0b,
                           "mbedtls_ssl_psk_derive_premaster",uVar14);
              }
              else {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xf03,
                           "ssl_parse_encrypted_pms",uVar14);
              }
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xefe,
                         "ssl_parse_client_psk_identity",uVar14);
            }
            break;
          case 8:
            uVar14 = ssl_parse_client_psk_identity(param_1,&local_98,pcVar24);
            uVar34 = (ulong)uVar14;
            if (uVar14 == 0) {
              iVar13 = mbedtls_ecdh_read_public
                                 (param_1[0xe] + 0x68,local_98,(long)pcVar24 - (long)local_98);
              if (iVar13 != 0) {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xf97,
                           "mbedtls_ecdh_read_public",iVar13);
                goto LAB_00104539;
              }
              mbedtls_debug_printf_ecdh
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xf9b,
                         param_1[0xe] + 0x68,1);
              uVar14 = mbedtls_ssl_psk_derive_premaster(param_1,*(undefined1 *)(lVar18 + 0x12));
              uVar34 = (ulong)uVar14;
              if (uVar14 == 0) goto LAB_0010333a;
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xfa1,
                         "mbedtls_ssl_psk_derive_premaster",uVar14);
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xf91,
                         "ssl_parse_client_psk_identity",uVar14);
            }
          }
          break;
        }
        pcVar30 = "bad client key exchange message";
        uVar20 = 0xe5e;
      }
      else {
        pcVar30 = "bad client key exchange message";
        uVar20 = 0xe59;
      }
LAB_00104550:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,pcVar30);
      uVar34 = 0xffff8900;
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xe51,
                 "mbedtls_ssl_read_record",uVar14);
    }
    break;
  case 9:
    lVar18 = *(long *)(param_1[0xe] + 0x10);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0xfff,
               "=> parse certificate verify");
    bVar39 = *(byte *)(lVar18 + 0x12);
    if (bVar39 < 5) {
      if (bVar39 == 0) goto LAB_00103278;
    }
    else if (1 < (byte)(bVar39 - 9)) {
LAB_00103278:
      pcVar30 = "<= skip parse certificate verify";
      uVar20 = 0x1002;
      goto LAB_00102b54;
    }
    if (*(long *)(param_1[0xd] + 0x70) == 0) {
      pcVar30 = "<= skip parse certificate verify";
      uVar20 = 0x1009;
LAB_00102b54:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,pcVar30);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      goto LAB_00102480;
    }
    uVar14 = mbedtls_ssl_read_record(param_1,0);
    uVar34 = (ulong)uVar14;
    if (uVar14 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1018,
                 "mbedtls_ssl_read_record",uVar14);
      break;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (((int)param_1[0x1f] != 0x16) || (*(char *)param_1[0x1d] != '\x0f')) {
      pcVar30 = "bad certificate verify message";
      uVar20 = 0x1021;
      goto LAB_00104550;
    }
    lVar18 = (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8;
    lVar17 = lVar18 + 4;
    if (*(long *)(param_1[0xd] + 0x70) == 0) {
      uVar34 = 0xffff9400;
      break;
    }
    lVar25 = *(long *)(param_1[0xd] + 0x70) + 0x168;
    if ((ulong)param_1[0x26] < lVar18 + 6U) {
      pcVar30 = "bad certificate verify message";
      uVar20 = 0x1038;
LAB_00104527:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,pcVar30);
      goto LAB_00104539;
    }
    iVar13 = mbedtls_ssl_md_alg_from_hash(((char *)param_1[0x1d])[lVar17]);
    if ((iVar13 == 0) ||
       (iVar12 = mbedtls_ssl_set_calc_verify_md(param_1,*(undefined1 *)(param_1[0x1d] + lVar17)),
       iVar12 != 0)) {
      uVar20 = 0x1042;
LAB_00104595:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,
                 "peer not adhering to requested sig_alg for verify message");
    }
    else {
      puVar19 = local_88;
      if (iVar13 == 5) {
        puVar19 = local_78;
      }
      iVar12 = mbedtls_ssl_pk_alg_from_sig(*(undefined1 *)(param_1[0x1d] + 1 + lVar17));
      if (iVar12 == 0) {
        uVar20 = 0x1057;
        goto LAB_00104595;
      }
      iVar12 = mbedtls_pk_can_do(lVar25,iVar12);
      if (iVar12 != 0) {
        uVar26 = lVar18 + 8;
        if ((ulong)param_1[0x26] < uVar26) {
          pcVar30 = "bad certificate verify message";
          uVar20 = 0x1067;
        }
        else {
          uVar10 = *(ushort *)(param_1[0x1d] + lVar18 + 6U);
          uVar36 = (ulong)(ushort)(uVar10 << 8 | uVar10 >> 8);
          if (param_1[0x26] == uVar26 + uVar36) {
            uVar14 = (**(code **)(param_1[0xe] + 0x20))(param_1,local_88,&local_98);
            uVar34 = (ulong)uVar14;
            if (uVar14 == 0) {
              uVar14 = mbedtls_pk_verify(lVar25,iVar13,puVar19,0,param_1[0x1d] + uVar26,uVar36);
              uVar34 = (ulong)uVar14;
              if (uVar14 == 0) {
                uVar14 = mbedtls_ssl_update_handshake_status(param_1);
                pcVar30 = "<= parse certificate verify";
                uVar20 = 0x108a;
                uVar34 = (ulong)uVar14;
                if (uVar14 == 0) goto LAB_00102d0e;
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1086,
                           "mbedtls_ssl_update_handshake_status",uVar14);
              }
              else {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1080,
                           "mbedtls_pk_verify",uVar14);
              }
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1078,
                         "calc_verify",uVar14);
            }
            break;
          }
          pcVar30 = "bad certificate verify message";
          uVar20 = 0x106f;
        }
        goto LAB_00104527;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1060,
                 "sig_alg doesn\'t match cert key");
    }
    uVar34 = 0xffff9a00;
    break;
  case 10:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar34 = mbedtls_ssl_parse_change_cipher_spec(param_1);
      return uVar34;
    }
    goto LAB_001045b2;
  case 0xb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar34 = mbedtls_ssl_parse_finished(param_1);
      return uVar34;
    }
    goto LAB_001045b2;
  case 0xc:
    if (*(char *)(param_1[0xe] + 4) == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar34 = mbedtls_ssl_write_change_cipher_spec(param_1);
        return uVar34;
      }
      goto LAB_001045b2;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1098,
               "=> write new session ticket");
    *(undefined4 *)(param_1 + 0x31) = 0x16;
    *(undefined1 *)param_1[0x30] = 4;
    lVar18 = param_1[0xd];
    uVar20 = mbedtls_ms_time();
    lVar17 = param_1[0x30];
    lVar25 = param_1[0xd];
    *(undefined8 *)(lVar18 + 0x98) = uVar20;
    iVar13 = (**(code **)(*param_1 + 0xa8))
                       (*(undefined8 *)(*param_1 + 0xb8),lVar25,lVar17 + 10,lVar17 + 0x4000,
                        &local_98,&local_a0);
    if (iVar13 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x10b0,
                 "mbedtls_ssl_ticket_write",iVar13);
      local_98 = (char *)0x0;
    }
    *(uint *)(param_1[0x30] + 4) =
         (uint)local_a0 >> 0x18 | ((uint)local_a0 & 0xff0000) >> 8 | ((uint)local_a0 & 0xff00) << 8
         | (uint)local_a0 << 0x18;
    *(ushort *)(param_1[0x30] + 8) = (ushort)local_98 << 8 | (ushort)local_98 >> 8;
    param_1[0x32] = (long)(local_98 + 10);
    *(undefined1 *)(param_1[0xe] + 4) = 0;
    uVar14 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
    pcVar30 = "<= write new session ticket";
    uVar20 = 0x10c3;
    uVar34 = (ulong)uVar14;
    if (uVar14 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x10bf,
                 "mbedtls_ssl_write_handshake_msg",uVar14);
      break;
    }
LAB_0010315b:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",uVar20,pcVar30);
    break;
  case 0xd:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar34 = mbedtls_ssl_write_finished(param_1);
      return uVar34;
    }
    goto LAB_001045b2;
  case 0xe:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x112c,"handshake: done");
    *(undefined4 *)(param_1 + 1) = 0xf;
    goto LAB_00102480;
  case 0xf:
    mbedtls_ssl_handshake_wrapup(param_1);
LAB_00102480:
    uVar34 = 0;
    break;
  default:
    uVar34 = 0xffff8f00;
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_server.c",0x1135,"invalid state %d");
    break;
  case 0x11:
    uVar34 = 0xffff9580;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar34;
  }
LAB_001045b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ssl_conf_preference_order(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15) = param_2;
  return;
}



void ssl_ciphersuite_match_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void mbedtls_ssl_handshake_server_step_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


