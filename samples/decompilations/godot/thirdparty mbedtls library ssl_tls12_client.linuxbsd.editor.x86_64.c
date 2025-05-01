
undefined4 ssl_check_server_ecdh_params(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x6c);
  sVar1 = mbedtls_ssl_get_tls_id_from_ecp_group_id(uVar4);
  if (sVar1 == 0) {
    uVar4 = 0xffff9400;
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x709,"should never happen"
              );
  }
  else {
    uVar3 = mbedtls_ssl_get_curve_name_from_tls_id(sVar1);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x70d,"ECDH curve: %s",
               uVar3);
    iVar2 = mbedtls_ssl_check_curve(param_1,uVar4);
    if (iVar2 == 0) {
      mbedtls_debug_printf_ecdh
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x714,
                 *(long *)(param_1 + 0x70) + 0x68,1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



int ssl_write_encrypted_pms(long *param_1,long param_2,ushort *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = param_2 + 2;
  param_4 = param_1[0xe] + 0x5e8 + param_4;
  if (uVar1 < 0x4001) {
    mbedtls_ssl_write_version(param_4,*(undefined1 *)(*param_1 + 9),0x303);
    iVar3 = (**(code **)(*param_1 + 0x38))(*(undefined8 *)(*param_1 + 0x40),param_4 + 2,0x2e);
    if (iVar3 == 0) {
      *(undefined8 *)(param_1[0xe] + 0x660) = 0x30;
      if (*(long *)(param_1[0xd] + 0x70) == 0) {
        iVar3 = -0x6c00;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x79c,
                   "should never happen");
      }
      else {
        lVar2 = *(long *)(param_1[0xd] + 0x70) + 0x168;
        iVar3 = mbedtls_pk_can_do(lVar2,1);
        if (iVar3 == 0) {
          iVar3 = -0x6d00;
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x7a6,
                     "certificate key type mismatch");
        }
        else {
          iVar3 = mbedtls_pk_encrypt(lVar2,param_4,*(undefined8 *)(param_1[0xe] + 0x660),
                                     param_1[0x30] + uVar1,param_3,0x4000 - uVar1,
                                     *(undefined8 *)(*param_1 + 0x38),
                                     *(undefined8 *)(*param_1 + 0x40));
          if (iVar3 == 0) {
            *(ushort *)(param_1[0x30] + param_2) = *param_3 << 8 | *param_3 >> 8;
            *(long *)param_3 = *(long *)param_3 + 2;
          }
          else {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x7af,
                       "mbedtls_pk_encrypt",iVar3);
          }
        }
      }
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x791,"f_rng",iVar3);
    }
  }
  else {
    iVar3 = -0x6a00;
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x782,
               "buffer too small for encrypted pms");
  }
  return iVar3;
}



int ssl_parse_certificate_request(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  char cVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_198;
  long local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_1[0xe] + 0x10);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x9c2,
             "=> parse certificate request");
  bVar4 = *(byte *)(lVar6 + 0x12);
  if (bVar4 < 5) {
    if (bVar4 != 0) goto LAB_00100357;
LAB_001002fb:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x9c5,
               "<= skip parse certificate request");
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  else {
    if (1 < (byte)(bVar4 - 9)) goto LAB_001002fb;
LAB_00100357:
    iVar7 = mbedtls_ssl_read_record(param_1,1);
    if (iVar7 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x9cb,
                 "mbedtls_ssl_read_record",iVar7);
      goto LAB_0010031f;
    }
    if ((int)param_1[0x1f] != 0x16) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x9d0,
                 "bad certificate request message");
      mbedtls_ssl_send_alert_message(param_1,2,10);
      iVar7 = -0x7700;
      goto LAB_0010031f;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    puVar14 = &_LC8;
    cVar10 = *(char *)param_1[0x1d];
    *(bool *)(param_1[0xe] + 0x552) = cVar10 == '\r';
    if (cVar10 == '\r') {
      puVar14 = &_LC7;
    }
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x9dc,
               "got %s certificate request",puVar14);
    if (*(char *)(param_1[0xe] + 0x552) != '\0') {
      lVar6 = param_1[0x1d];
      uVar16 = param_1[0x26];
      cVar10 = *(char *)(*param_1 + 9);
      uVar12 = (ulong)(cVar10 == '\x01') * 8 + 4;
      if (uVar12 < uVar16) {
        bVar4 = *(byte *)(lVar6 + uVar12);
        lVar15 = uVar12 + bVar4;
        if (lVar15 + 2U < uVar16) {
          uVar5 = *(ushort *)(lVar6 + 1 + lVar15);
          uVar12 = (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
          if (uVar12 + lVar15 + 3 < uVar16) {
            lVar15 = lVar6 + lVar15 + 3;
            if (uVar12 != 0) {
              uVar16 = 0;
              do {
                puVar2 = (undefined1 *)(lVar15 + 1 + uVar16);
                puVar1 = (undefined1 *)(lVar15 + uVar16);
                uVar16 = uVar16 + 2;
                mbedtls_debug_print_msg
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xa35,
                           "Supported Signature Algorithm found: %02x %02x",*puVar1,*puVar2);
              } while (uVar16 < uVar12);
              uVar16 = param_1[0x26];
              cVar10 = *(char *)(*param_1 + 9);
            }
            lVar3 = (ulong)bVar4 + 2 + uVar12;
            lVar15 = (ulong)(cVar10 == '\x01') * 8;
            lVar9 = lVar3 + lVar15 + 4;
            uVar5 = *(ushort *)(lVar15 + 5 + lVar6 + lVar3);
            uVar12 = (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
            if (uVar12 + 3 + lVar9 == uVar16) {
              lVar9 = lVar6 + 3 + lVar9;
              uVar16 = 0;
              if (uVar12 != 0) {
                do {
                  local_198 = lVar9 + uVar16 + 2;
                  local_188 = (undefined1  [16])0x0;
                  local_178 = (undefined1  [16])0x0;
                  local_168 = (undefined1  [16])0x0;
                  local_158 = (undefined1  [16])0x0;
                  uVar5 = *(ushort *)(lVar9 + uVar16);
                  uVar13 = (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
                  if ((uVar12 - 2) - uVar16 < uVar13) {
LAB_0010060b:
                    uVar11 = 0xa55;
                    goto LAB_00100617;
                  }
                  iVar7 = mbedtls_asn1_get_tag(&local_198,local_198 + uVar13,&local_190,0x30);
                  if ((iVar7 != 0) ||
                     (iVar7 = mbedtls_x509_get_name(&local_198,local_190 + local_198,local_188),
                     iVar7 != 0)) goto LAB_0010060b;
                  uVar8 = mbedtls_x509_dn_gets(local_148,0x100,local_188);
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xa5c,
                             "DN hint: %.*s",uVar8,local_148);
                  mbedtls_asn1_free_named_data_list_shallow(local_158._0_8_);
                  uVar16 = uVar16 + 2 + uVar13;
                } while (uVar16 < uVar12);
              }
              goto LAB_00100652;
            }
            uVar11 = 0xa42;
          }
          else {
            uVar11 = 0xa2a;
          }
        }
        else {
          uVar11 = 0xa14;
        }
      }
      else {
        uVar11 = 0xa01;
      }
LAB_00100617:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar11,
                 "bad certificate request message");
      mbedtls_ssl_send_alert_message(param_1,2,0x32);
      iVar7 = -0x7300;
      goto LAB_0010031f;
    }
    *(undefined4 *)((long)param_1 + 0x13c) = 1;
LAB_00100652:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xa64,
               "<= parse certificate request");
  }
  iVar7 = 0;
LAB_0010031f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



undefined8
mbedtls_ssl_tls12_write_client_hello_exts
          (long *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,long *param_5)

{
  byte bVar1;
  int iVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar2 = *(int *)((long)param_1 + 0xc);
  *param_5 = 0;
  puVar8 = param_2;
  if (iVar2 == 1) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x43,
               "client hello, adding renegotiation extension");
    if ((param_3 < param_2) || ((ulong)((long)param_3 - (long)param_2) < param_1[0x3b] + 5U)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x217,
                 "ssl_write_renegotiation_ext",0xffff9600);
      return 0xffff9600;
    }
    *(undefined1 *)((long)param_2 + 2) = 0;
    *(undefined2 *)param_2 = 0x1ff;
    *(char *)((long)param_2 + 3) = (char)param_1[0x3b] + '\x01';
    *(char *)(param_2 + 1) = (char)param_1[0x3b];
    memcpy((void *)((long)param_2 + 5),param_1 + 0x3c,param_1[0x3b]);
    puVar8 = (undefined4 *)((long)param_2 + param_1[0x3b] + 5);
  }
  puVar7 = puVar8;
  if (param_4 != 0) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x69,
               "client hello, adding supported_point_formats extension");
    if ((param_3 < puVar8) || ((long)param_3 - (long)puVar8 < 6)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x223,
                 "ssl_write_supported_point_formats_ext",0xffff9600);
      return 0xffff9600;
    }
    puVar7 = (undefined4 *)((long)puVar8 + 6);
    *(undefined4 *)((long)puVar8 + 2) = 0x10200;
    *(undefined2 *)puVar8 = 0xb00;
  }
  lVar4 = *param_1;
  if ((*(char *)(lVar4 + 9) == '\x01') && (*(char *)((long)param_1 + 0x219) != '\0')) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xeb,
               "client hello, adding CID extension");
    if ((param_3 < puVar7) ||
       ((ulong)((long)param_3 - (long)puVar7) < (ulong)*(byte *)(param_1 + 0x43) + 5)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x234,"ssl_write_cid_ext"
                 ,0xffff9600);
      return 0xffff9600;
    }
    *(undefined2 *)puVar7 = 0x3600;
    puVar8 = (undefined4 *)((long)puVar7 + 5);
    *(ushort *)((long)puVar7 + 2) =
         (*(byte *)(param_1 + 0x43) + 1) * 0x100 | (ushort)(*(byte *)(param_1 + 0x43) + 1) >> 8;
    bVar1 = *(byte *)(param_1 + 0x43);
    uVar3 = (ulong)bVar1;
    *(byte *)(puVar7 + 1) = bVar1;
    if (bVar1 < 8) {
      if ((bVar1 & 4) == 0) {
        if ((bVar1 != 0) && (*(char *)puVar8 = (char)param_1[0x3f], (bVar1 & 2) != 0)) {
          *(undefined2 *)((long)puVar7 + uVar3 + 3) = *(undefined2 *)((long)param_1 + uVar3 + 0x1f6)
          ;
        }
      }
      else {
        *puVar8 = (int)param_1[0x3f];
        *(undefined4 *)((long)puVar7 + uVar3 + 1) = *(undefined4 *)((long)param_1 + uVar3 + 500);
      }
    }
    else {
      puVar6 = (undefined8 *)((long)puVar7 + 0xdU & 0xfffffffffffffff8);
      *(long *)((long)puVar7 + 5) = param_1[0x3f];
      *(undefined8 *)((long)puVar7 + (uVar3 - 3)) = *(undefined8 *)((long)param_1 + uVar3 + 0x1f0);
      lVar4 = (long)puVar8 - (long)puVar6;
      puVar5 = (undefined8 *)((long)param_1 + (0x1f8 - lVar4));
      for (uVar3 = (ulong)((uint)bVar1 + (int)lVar4 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (ulong)bVar9 * -2 + 1;
        puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
      }
    }
    puVar7 = (undefined4 *)((long)puVar7 + (ulong)*(byte *)(param_1 + 0x43) + 5);
    lVar4 = *param_1;
  }
  puVar8 = puVar7;
  if (*(char *)(lVar4 + 0xc) != '\0') {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x110,
               "client hello, adding max_fragment_length extension");
    if ((param_3 < puVar7) || ((long)param_3 - (long)puVar7 < 5)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x23d,
                 "ssl_write_max_fragment_length_ext",0xffff9600);
      return 0xffff9600;
    }
    *puVar7 = 0x1000100;
    puVar8 = (undefined4 *)((long)puVar7 + 5);
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(*param_1 + 0xc);
    lVar4 = *param_1;
  }
  if (*(char *)(lVar4 + 0xd) != '\0') {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x132,
               "client hello, adding encrypt_then_mac extension");
    if ((param_3 < puVar8) || ((long)param_3 - (long)puVar8 < 4)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x245,
                 "ssl_write_encrypt_then_mac_ext",0xffff9600);
      return 0xffff9600;
    }
    *puVar8 = 0x1600;
    puVar8 = puVar8 + 1;
    lVar4 = *param_1;
  }
  if (*(char *)(lVar4 + 0xe) != '\0') {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x152,
               "client hello, adding extended_master_secret extension");
    if ((param_3 < puVar8) || ((long)param_3 - (long)puVar8 < 4)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x24d,
                 "ssl_write_extended_ms_ext",0xffff9600);
      return 0xffff9600;
    }
    *puVar8 = 0x1700;
    puVar8 = puVar8 + 1;
    lVar4 = *param_1;
  }
  __n = *(size_t *)(param_1[0xd] + 0x88);
  puVar7 = puVar8;
  if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x174,
               "client hello, adding session ticket extension");
    if ((param_3 < puVar8) || ((ulong)((long)param_3 - (long)puVar8) < __n + 4)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x25d,
                 "ssl_write_session_ticket_ext",0xffff9600);
      return 0xffff9600;
    }
    puVar7 = puVar8 + 1;
    *(undefined2 *)puVar8 = 0x2300;
    *(ushort *)((long)puVar8 + 2) = (ushort)__n << 8 | (ushort)__n >> 8;
    if ((*(long *)(param_1[0xd] + 0x80) != 0) && (__n != 0)) {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x186,
                 "sending session ticket of length %zu");
      memcpy(puVar7,*(void **)(param_1[0xd] + 0x80),__n);
      puVar7 = (undefined4 *)((long)puVar8 + __n + 4);
    }
  }
  *param_5 = (long)puVar7 - (long)param_2;
  return 0;
}



ulong mbedtls_ssl_handshake_client_step(long *param_1)

{
  byte bVar1;
  char *pcVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined1 uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  undefined8 uVar13;
  long *plVar14;
  time_t tVar15;
  int *piVar16;
  ulong uVar17;
  byte *pbVar18;
  size_t sVar19;
  ushort *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 extraout_RDX;
  long lVar23;
  byte *pbVar24;
  ushort *puVar25;
  ulong uVar26;
  char *pcVar27;
  long lVar28;
  undefined8 *puVar29;
  char *pcVar30;
  ushort uVar31;
  undefined *puVar32;
  uint *puVar33;
  long lVar34;
  ushort uVar35;
  ulong uVar36;
  long in_FS_OFFSET;
  bool bVar37;
  byte bVar38;
  undefined8 uVar39;
  ushort *local_a8;
  long local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [72];
  long local_40;
  
  bVar38 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1[1] == 0xc) {
    if (*(char *)(param_1[0xe] + 4) == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar36 = mbedtls_ssl_parse_change_cipher_spec();
        return uVar36;
      }
      goto LAB_00102d55;
    }
    *(undefined4 *)(param_1 + 1) = 0x10;
switchD_00100d40_caseD_10:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xd39,
               "=> parse new session ticket");
    uVar8 = mbedtls_ssl_read_record(param_1,1);
    uVar36 = (ulong)uVar8;
    if (uVar8 == 0) {
      if ((int)param_1[0x1f] == 0x16) {
        if (*(char *)param_1[0x1d] == '\x04') {
          bVar37 = *(char *)(*param_1 + 9) == '\x01';
          uVar36 = (ulong)bVar37 * 8 + 10;
          if (uVar36 <= (ulong)param_1[0x26]) {
            puVar33 = (uint *)((char *)param_1[0x1d] + (ulong)bVar37 * 8 + 4);
            uVar8 = *puVar33;
            uVar17 = (ulong)(ushort)((ushort)puVar33[1] << 8 | (ushort)puVar33[1] >> 8);
            if (param_1[0x26] != uVar36 + uVar17) {
              pcVar30 = "bad new session ticket message";
              uVar13 = 0xd62;
              goto LAB_00101fa9;
            }
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xd68,
                       "ticket length: %zu",uVar17);
            *(undefined1 *)(param_1[0xe] + 4) = 0;
            *(undefined4 *)(param_1 + 1) = 0xc;
            if (uVar17 != 0) {
              lVar23 = param_1[0xc];
              if ((lVar23 != 0) && (*(long *)(lVar23 + 0x80) != 0)) {
                mbedtls_zeroize_and_free(*(long *)(lVar23 + 0x80),*(undefined8 *)(lVar23 + 0x88));
                lVar23 = param_1[0xc];
                *(undefined8 *)(lVar23 + 0x80) = 0;
                *(undefined8 *)(lVar23 + 0x88) = 0;
              }
              mbedtls_zeroize_and_free
                        (*(undefined8 *)(param_1[0xd] + 0x80),*(undefined8 *)(param_1[0xd] + 0x88));
              lVar23 = param_1[0xd];
              *(undefined8 *)(lVar23 + 0x80) = 0;
              *(undefined8 *)(lVar23 + 0x88) = 0;
              pvVar12 = calloc(1,uVar17);
              if (pvVar12 == (void *)0x0) {
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xd83,
                           "ticket alloc failed");
                mbedtls_ssl_send_alert_message(param_1,2,0x50);
                goto LAB_0010326e;
              }
              uVar13 = __memcpy_chk(pvVar12,(char *)((long)puVar33 + 6),uVar17,uVar17);
              *(undefined8 *)(lVar23 + 0x80) = uVar13;
              *(ulong *)(lVar23 + 0x88) = uVar17;
              *(uint *)(lVar23 + 0x90) =
                   uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xd94,
                         "ticket in use, discarding session id");
              uVar13 = 0xd97;
              pcVar30 = "<= parse new session ticket";
              *(undefined8 *)(param_1[0xd] + 0x18) = 0;
              goto LAB_0010123c;
            }
            goto LAB_00100f70;
          }
        }
        pcVar30 = "bad new session ticket message";
        uVar13 = 0xd55;
LAB_00101fa9:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
LAB_00101fae:
        mbedtls_ssl_send_alert_message(param_1,2,0x32);
        goto LAB_00101fc0;
      }
      pcVar30 = "bad new session ticket message";
      uVar13 = 0xd41;
LAB_00102d1b:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
      mbedtls_ssl_send_alert_message(param_1,2,10);
LAB_0010113c:
      uVar36 = 0xffff8900;
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xd3c,
                 "mbedtls_ssl_read_record",uVar8);
    }
    goto LAB_00100f73;
  }
  switch((int)param_1[1]) {
  case 0:
    *(undefined4 *)(param_1 + 1) = 1;
    goto LAB_00100f70;
  case 1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = mbedtls_ssl_write_client_hello();
      return uVar36;
    }
    break;
  case 2:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4ab,
               "=> parse server hello");
    uVar8 = mbedtls_ssl_read_record(param_1,1);
    uVar36 = (ulong)uVar8;
    if (uVar8 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4af,
                 "mbedtls_ssl_read_record",uVar8);
      goto LAB_00100f73;
    }
    pcVar30 = (char *)param_1[0x1d];
    if ((int)param_1[0x1f] != 0x16) {
      if (*(int *)((long)param_1 + 0xc) != 1) {
        pcVar30 = "bad server hello message";
        uVar13 = 0x4c9;
        goto LAB_00102d1b;
      }
      iVar9 = *(int *)(*param_1 + 300);
      iVar10 = (int)param_1[2] + 1;
      *(int *)(param_1 + 2) = iVar10;
      if (-1 < iVar9) {
        pcVar30 = "renegotiation requested, but not honored by server";
        uVar13 = 0x4bc;
        if (iVar9 < iVar10) goto LAB_0010112a;
      }
      uVar36 = 0xffff9500;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4c1,
                 "non-handshake message during renegotiation");
      *(undefined4 *)((long)param_1 + 0x13c) = 1;
      goto LAB_00100f73;
    }
    if (*(char *)(*param_1 + 9) != '\x01') {
      uVar17 = param_1[0x26];
      uVar36 = 0x2a;
      lVar23 = 4;
LAB_0010194e:
      if ((uVar17 < uVar36) || (*pcVar30 != '\x02')) {
        pcVar30 = "bad server hello message";
        uVar13 = 0x4e2;
        goto LAB_00101fa9;
      }
      pcVar30 = pcVar30 + lVar23;
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4f5,
                 "server hello, version",pcVar30,2);
      uVar7 = mbedtls_ssl_read_version(pcVar30,*(undefined1 *)(*param_1 + 9));
      puVar33 = (uint *)*param_1;
      lVar23 = param_1[0xd];
      *(uint *)((long)param_1 + 0x14) = (uint)uVar7;
      *(uint *)(lVar23 + 4) = (uint)uVar7;
      *(char *)(lVar23 + 2) = (char)puVar33[2];
      if (((uint)uVar7 < puVar33[1]) || (*puVar33 < (uint)uVar7)) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4fd,
                   "server version out of bounds -  min: [0x%x], server: [0x%x], max: [0x%x]",
                   puVar33[1],uVar7,*puVar33);
        mbedtls_ssl_send_alert_message(param_1,2,0x46);
LAB_00102e02:
        uVar36 = 0xffff9180;
        goto LAB_00100f73;
      }
      uVar8 = *(uint *)(pcVar30 + 2);
      uVar39 = 0x1019f4;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x50a,
                 "server hello, current time: %lu",
                 uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
      lVar23 = param_1[0xe];
      uVar13 = *(undefined8 *)(pcVar30 + 10);
      *(undefined8 *)(lVar23 + 0x5c8) = *(undefined8 *)(pcVar30 + 2);
      *(undefined8 *)(lVar23 + 0x5d0) = uVar13;
      uVar13 = *(undefined8 *)(pcVar30 + 0x1a);
      *(undefined8 *)(lVar23 + 0x5d8) = *(undefined8 *)(pcVar30 + 0x12);
      *(undefined8 *)(lVar23 + 0x5e0) = uVar13;
      bVar1 = pcVar30[0x22];
      uVar36 = (ulong)bVar1;
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x514,
                 "server hello, random bytes",pcVar30 + 2,0x20);
      if (uVar36 < 0x21) {
        uVar17 = param_1[0x26];
        lVar23 = uVar36 + 4 + (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8;
        if (lVar23 + 0x27U < uVar17) {
          uVar26 = (ulong)(ushort)(*(ushort *)(pcVar30 + uVar36 + 0x26) << 8 |
                                  *(ushort *)(pcVar30 + uVar36 + 0x26) >> 8);
          if ((2 < uVar26 - 1) && (uVar17 == lVar23 + 0x28 + uVar26)) {
LAB_00101a9b:
            uVar8 = (uint)(ushort)(*(ushort *)(pcVar30 + uVar36 + 0x23) << 8 |
                                  *(ushort *)(pcVar30 + uVar36 + 0x23) >> 8);
            uVar17 = (ulong)uVar8;
            if (pcVar30[uVar36 + 0x25] != '\0') {
              uVar36 = 0xffff8f80;
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x53b,
                         "server hello, bad compression: %d");
              mbedtls_ssl_send_alert_message(param_1,2,0x2f);
              goto LAB_00100f73;
            }
            lVar23 = param_1[0xe];
            uVar13 = mbedtls_ssl_ciphersuite_from_id(uVar8,uVar39);
            *(undefined8 *)(lVar23 + 0x10) = uVar13;
            if (*(long *)(param_1[0xe] + 0x10) == 0) {
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x549,
                         "ciphersuite info for %04x not found",uVar17 & 0xffffffff);
              mbedtls_ssl_send_alert_message(param_1,2,0x50);
              goto LAB_001014fb;
            }
            pcVar27 = pcVar30 + 0x23;
            mbedtls_ssl_optimize_checksum(param_1);
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x552,
                       "server hello, session id len.: %zu",uVar36);
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x553,
                       "server hello, session id",pcVar27,uVar36);
            pcVar2 = (char *)param_1[0xe];
            lVar23 = param_1[0xd];
            if ((((*pcVar2 == '\0') || (uVar36 == 0)) || (*(int *)((long)param_1 + 0xc) != 0)) ||
               ((((int)uVar17 != *(int *)(lVar23 + 0x10) || (uVar36 != *(ulong *)(lVar23 + 0x18)))
                || (iVar9 = memcmp((void *)(lVar23 + 0x20),pcVar27,uVar36), iVar9 != 0)))) {
              *(int *)(param_1 + 1) = (int)param_1[1] + 1;
              *pcVar2 = '\0';
              tVar15 = time((time_t *)0x0);
              lVar34 = param_1[0xd];
              *(time_t *)(lVar23 + 8) = tVar15;
              *(ulong *)(lVar34 + 0x18) = uVar36;
              *(int *)(lVar34 + 0x10) = (int)uVar17;
              if (bVar1 < 8) {
                if ((bVar1 & 4) == 0) {
                  if ((bVar1 != 0) && (*(char *)(lVar34 + 0x20) = pcVar30[0x23], (bVar1 & 2) != 0))
                  {
                    *(undefined2 *)(lVar34 + 0x1e + uVar36) =
                         *(undefined2 *)(pcVar30 + uVar36 + 0x21);
                  }
                }
                else {
                  *(undefined4 *)(lVar34 + 0x20) = *(undefined4 *)(pcVar30 + 0x23);
                  *(undefined4 *)(lVar34 + 0x1c + uVar36) = *(undefined4 *)(pcVar30 + uVar36 + 0x1f)
                  ;
                }
              }
              else {
                *(undefined8 *)(lVar34 + 0x20) = *(undefined8 *)(pcVar30 + 0x23);
                puVar29 = (undefined8 *)(lVar34 + 0x28U & 0xfffffffffffffff8);
                *(undefined8 *)(lVar34 + 0x18 + uVar36) = *(undefined8 *)(pcVar30 + uVar36 + 0x1b);
                lVar23 = (lVar34 + 0x20) - (long)puVar29;
                pcVar27 = pcVar27 + -lVar23;
                for (uVar21 = (ulong)((int)lVar23 + (uint)bVar1 >> 3); uVar21 != 0;
                    uVar21 = uVar21 - 1) {
                  *puVar29 = *(undefined8 *)pcVar27;
                  pcVar27 = pcVar27 + ((ulong)bVar38 * -2 + 1) * 8;
                  puVar29 = puVar29 + (ulong)bVar38 * -2 + 1;
                }
              }
              puVar32 = &_LC8;
              if (*(char *)param_1[0xe] != '\0') goto LAB_00101bcb;
            }
            else {
              *(undefined4 *)(param_1 + 1) = 0xc;
LAB_00101bcb:
              puVar32 = &_LC7;
            }
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x56b,
                       "%s session has been resumed",puVar32);
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x56e,
                       "server hello, chosen ciphersuite: %04x",uVar17 & 0xffffffff);
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x56f,
                       "server hello, compress alg.: %d",pcVar30[uVar36 + 0x25]);
            piVar16 = *(int **)(*param_1 + 0x18);
            do {
              iVar9 = *piVar16;
              if (iVar9 == 0) {
                pcVar30 = "bad server hello message";
                uVar13 = 0x578;
                goto LAB_00101c78;
              }
              piVar16 = piVar16 + 1;
            } while (iVar9 != *(int *)(param_1[0xd] + 0x10));
            lVar23 = mbedtls_ssl_ciphersuite_from_id();
            iVar9 = mbedtls_ssl_validate_ciphersuite
                              (param_1,lVar23,*(undefined4 *)((long)param_1 + 0x14),
                               *(undefined4 *)((long)param_1 + 0x14));
            if (iVar9 == 0) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x592,
                         "server hello, chosen ciphersuite: %s",*(undefined8 *)(lVar23 + 8));
              puVar25 = (ushort *)(pcVar30 + uVar36 + 0x28);
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5a7,
                         "server hello, total extension length: %zu",uVar26);
              bVar37 = false;
              do {
                if (uVar26 == 0) {
                  if (*(char *)param_1[0xe] != '\0') {
                    uVar8 = mbedtls_ssl_derive_keys(param_1);
                    uVar36 = (ulong)uVar8;
                    if (uVar8 != 0) {
                      mbedtls_debug_print_ret
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x64c,
                                 "mbedtls_ssl_derive_keys",uVar8);
                      mbedtls_ssl_send_alert_message(param_1,2,0x50);
                      goto LAB_00100f73;
                    }
                  }
                  if ((int)param_1[0x3a] == 0) {
                    pcVar30 = "legacy renegotiation, breaking off handshake";
                    uVar13 = 0x65b;
                    if (*(char *)(*param_1 + 0xb) == '\x02') goto LAB_00102602;
                    if (*(int *)((long)param_1 + 0xc) == 1) {
                      if (*(char *)(*param_1 + 0xb) == '\0') {
                        mbedtls_debug_print_msg
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x66a,
                                   "legacy renegotiation not allowed");
                        goto LAB_00102614;
                      }
                      pcVar30 = "renegotiation_info extension present (legacy)";
                      uVar13 = 0x66f;
                      if (bVar37) goto LAB_00102602;
                    }
                  }
                  else if (*(int *)((long)param_1 + 0xc) == 1 && (int)param_1[0x3a] == 1) {
                    pcVar30 = "renegotiation_info extension missing (secure)";
                    uVar13 = 0x663;
                    if (!bVar37) goto LAB_00102602;
                  }
                  pcVar30 = "<= parse server hello";
                  uVar13 = 0x67d;
                  goto LAB_0010123c;
                }
                uVar7 = puVar25[1];
                uVar3 = *puVar25;
                uVar35 = uVar7 << 8 | uVar7 >> 8;
                uVar31 = uVar3 << 8 | uVar3 >> 8;
                uVar36 = (ulong)uVar35 + 4;
                if (uVar26 < uVar36) {
                  pcVar30 = "bad server hello message";
                  uVar13 = 0x5b0;
                  goto LAB_00101fa9;
                }
                if (uVar31 < 0x37) {
                  if (uVar3 == 0) goto switchD_0010212f_caseD_0;
                  switch(uVar31) {
                  default:
                    goto switchD_0010212f_caseD_0;
                  case 1:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5c7,
                               "found max_fragment_length extension");
                    if (((uVar7 != 0x100) || (*(char *)(*param_1 + 0xc) == '\0')) ||
                       (*(char *)(*param_1 + 0xc) != (char)puVar25[2])) {
                      pcVar30 = "non-matching max fragment length extension";
                      uVar13 = 0x29d;
                      goto LAB_00101c78;
                    }
                    break;
                  case 0xb:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x608,
                               "found supported_point_formats extension");
                    if ((uVar35 == 0) || (bVar1 = (byte)puVar25[2], uVar35 != (ushort)(bVar1 + 1)))
                    {
                      pcVar30 = "bad server hello message";
                      uVar13 = 0x337;
                      goto LAB_00101fa9;
                    }
                    pbVar18 = (byte *)((long)puVar25 + 5);
                    if ((ulong)bVar1 == 0) {
LAB_00102833:
                      pcVar30 = "no point format in common";
                      uVar13 = 0x353;
                      goto LAB_00102602;
                    }
                    pbVar24 = pbVar18 + bVar1;
                    while (1 < *pbVar18) {
                      pbVar18 = pbVar18 + 1;
                      if (pbVar18 == pbVar24) goto LAB_00102833;
                    }
                    *(byte *)(param_1[0xe] + 0x68) = *pbVar18;
                    mbedtls_debug_print_msg
                              (param_1,4,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x34b,
                               "point format selected: %d");
                    break;
                  case 0x10:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x623,
                               "found alpn extension");
                    uVar17 = (ulong)uVar35;
                    plVar14 = *(long **)(*param_1 + 0x118);
                    if (plVar14 == (long *)0x0) {
                      pcVar30 = "non-matching ALPN extension";
                      uVar13 = 0x399;
LAB_00102fb0:
                      mbedtls_debug_print_msg
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,
                                 pcVar30);
                      mbedtls_ssl_send_alert_message(param_1,2,0x6e);
                      uVar36 = 0xffff8b00;
                      goto LAB_00100f73;
                    }
                    if (((uVar17 < 4) ||
                        ((ulong)(ushort)(puVar25[2] << 8 | puVar25[2] >> 8) != uVar17 - 2)) ||
                       (uVar21 = (ulong)(byte)puVar25[3], uVar21 != uVar17 - 3)) goto LAB_00101fae;
                    pcVar30 = (char *)*plVar14;
                    if (pcVar30 == (char *)0x0) {
LAB_001025f6:
                      pcVar30 = "ALPN extension: no matching protocol";
                      uVar13 = 0x3c9;
                      goto LAB_00102602;
                    }
                    while ((sVar19 = strlen(pcVar30), uVar21 != sVar19 ||
                           (iVar9 = memcmp((char *)((long)puVar25 + 7),pcVar30,uVar21), iVar9 != 0))
                          ) {
                      pcVar30 = (char *)plVar14[1];
                      plVar14 = plVar14 + 1;
                      if (pcVar30 == (char *)0x0) goto LAB_001025f6;
                    }
                    param_1[0x37] = (long)pcVar30;
                    break;
                  case 0x16:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5e1,
                               "found encrypt_then_mac extension");
                    if ((*(char *)(*param_1 + 0xd) == '\0') || (uVar7 != 0)) {
                      pcVar30 = "non-matching encrypt-then-MAC extension";
                      uVar13 = 0x2e7;
                      goto LAB_00102fb0;
                    }
                    *(undefined4 *)(param_1[0xd] + 0xe8) = 1;
                    break;
                  case 0x17:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5ed,
                               "found extended_master_secret extension");
                    if ((*(char *)(*param_1 + 0xe) == '\0') || (uVar7 != 0)) {
                      pcVar30 = "non-matching extended master secret extension";
                      uVar13 = 0x300;
                      goto LAB_00102fb0;
                    }
                    *(undefined1 *)(param_1[0xe] + 0xc) = 1;
                    break;
                  case 0x23:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5fa,
                               "found session_ticket extension");
                    if (((*(byte *)(*param_1 + 0x11) & 1) == 0) || (uVar7 != 0)) {
                      pcVar30 = "non-matching session ticket extension";
                      uVar13 = 0x31a;
                      goto LAB_00102fb0;
                    }
                    *(undefined1 *)(param_1[0xe] + 4) = 1;
                    break;
                  case 0x36:
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5d4,
                               "found CID extension");
                    if ((*(char *)(*param_1 + 9) != '\x01') ||
                       (*(char *)((long)param_1 + 0x219) == '\0')) {
                      pcVar30 = "CID extension unexpected";
                      uVar13 = 0x2b6;
                      goto LAB_00102fb0;
                    }
                    if ((ulong)uVar35 == 0) {
                      uVar13 = 0x2bd;
                      pcVar30 = "CID extension invalid";
                      goto LAB_00101fa9;
                    }
                    bVar1 = (byte)puVar25[2];
                    uVar17 = (ulong)bVar1;
                    pcVar30 = (char *)((long)puVar25 + 5);
                    if (0x20 < bVar1) {
                      pcVar30 = "CID extension invalid";
                      uVar13 = 0x2c7;
                      goto LAB_00101c78;
                    }
                    if (uVar17 != (ulong)uVar35 - 1) {
                      pcVar30 = "CID extension invalid";
                      uVar13 = 0x2ce;
                      goto LAB_00101fa9;
                    }
                    lVar23 = param_1[0xe];
                    *(undefined1 *)(lVar23 + 0x4f8) = 1;
                    *(byte *)(lVar23 + 0x519) = bVar1;
                    uVar8 = (uint)bVar1;
                    if (uVar8 < 8) {
                      if ((bVar1 & 4) == 0) {
                        if ((uVar8 != 0) && (*(char *)(lVar23 + 0x4f9) = *pcVar30, (bVar1 & 2) != 0)
                           ) {
                          *(undefined2 *)(lVar23 + 0x4f7 + uVar17) =
                               *(undefined2 *)((long)puVar25 + uVar17 + 3);
                        }
                      }
                      else {
                        *(undefined4 *)(lVar23 + 0x4f9) = *(undefined4 *)pcVar30;
                        *(undefined4 *)(lVar23 + 0x4f5 + uVar17) =
                             *(undefined4 *)((long)puVar25 + uVar17 + 1);
                      }
                    }
                    else {
                      *(undefined8 *)(lVar23 + 0x4f9) = *(undefined8 *)pcVar30;
                      puVar29 = (undefined8 *)(lVar23 + 0x501U & 0xfffffffffffffff8);
                      *(undefined8 *)(lVar23 + 0x4f1 + uVar17) =
                           *(undefined8 *)((long)puVar25 + (uVar17 - 3));
                      lVar23 = (lVar23 + 0x4f9) - (long)puVar29;
                      pcVar27 = pcVar30 + -lVar23;
                      for (uVar21 = (ulong)((int)lVar23 + uVar8 >> 3); uVar21 != 0;
                          uVar21 = uVar21 - 1) {
                        *puVar29 = *(undefined8 *)pcVar27;
                        pcVar27 = pcVar27 + ((ulong)bVar38 * -2 + 1) * 8;
                        puVar29 = puVar29 + (ulong)bVar38 * -2 + 1;
                      }
                    }
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x2d8,
                               "Use of CID extension negotiated",uVar17,uVar17);
                    mbedtls_debug_print_buf
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x2d9,
                               "Server CID",pcVar30,uVar17);
                  }
                }
                else {
                  if (uVar3 == 0x1ff) {
                    mbedtls_debug_print_msg
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x5b9,
                               "found renegotiation extension");
                    if (*(int *)((long)param_1 + 0xc) == 0) {
                      if (((ulong)uVar35 != 1) || ((char)puVar25[2] != '\0')) {
                        pcVar30 = "non-zero length renegotiation info";
                        uVar13 = 0x281;
                        goto LAB_00102602;
                      }
                      *(undefined4 *)(param_1 + 0x3a) = 1;
                    }
                    else if (((((ulong)uVar35 != param_1[0x3b] * 2 + 1U) ||
                              (param_1[0x3b] * 2 != (ulong)(byte)puVar25[2])) ||
                             (iVar9 = mbedtls_ct_memcmp((char *)((long)puVar25 + 5),param_1 + 0x3c),
                             iVar9 != 0)) ||
                            (iVar9 = mbedtls_ct_memcmp((char *)((long)puVar25 + param_1[0x3b] + 5),
                                                       (long)param_1 + 0x1ec), iVar9 != 0)) {
                      pcVar30 = "non-matching renegotiation info";
                      uVar13 = 0x276;
                      goto LAB_00102602;
                    }
                    bVar37 = true;
                    goto LAB_00102160;
                  }
switchD_0010212f_caseD_0:
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x638,
                             "unknown extension found: %u (ignoring)",uVar31);
                }
LAB_00102160:
                uVar26 = uVar26 - uVar36;
                puVar25 = (ushort *)((long)puVar25 + uVar36);
              } while (2 < uVar26 - 1);
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x640,
                         "bad server hello message");
              goto LAB_00101fc0;
            }
            pcVar30 = "bad server hello message";
            uVar13 = 0x58a;
LAB_00102602:
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
LAB_00102614:
            uVar36 = 0xffff9200;
            mbedtls_ssl_send_alert_message(param_1,2,0x28);
            goto LAB_00100f73;
          }
          pcVar30 = "bad server hello message";
          uVar13 = 0x522;
        }
        else {
          if (uVar17 == lVar23 + 0x26U) {
            uVar26 = 0;
            goto LAB_00101a9b;
          }
          pcVar30 = "bad server hello message";
          uVar13 = 0x52c;
        }
      }
      else {
        pcVar30 = "bad server hello message";
        uVar13 = 0x517;
      }
      goto LAB_00101fa9;
    }
    if (*pcVar30 != '\x03') {
      free(*(void **)(param_1[0xe] + 0x4b0));
      lVar23 = param_1[0xe];
      uVar17 = param_1[0x26];
      *(undefined8 *)(lVar23 + 0x4b0) = 0;
      *(undefined2 *)(lVar23 + 0x4b8) = 0;
      bVar37 = *(char *)(*param_1 + 9) == '\x01';
      uVar36 = (ulong)bVar37 * 8 + 0x2a;
      lVar23 = (ulong)bVar37 * 8 + 4;
      goto LAB_0010194e;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4d4,
               "received hello verify request");
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x4d5,
               "<= parse server hello");
    puVar25 = (ushort *)((ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4 + param_1[0x1d]);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x452,
               "=> parse hello verify request");
    if ((ulong)param_1[0x20] < (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 7) {
      pcVar30 = "incoming HelloVerifyRequest message is too short";
      uVar13 = 0x459;
      goto LAB_00101fa9;
    }
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x466,"server version",
               puVar25,2);
    if ((*puVar25 & 0xfdff) != 0xfdfe) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x470,
                 "bad server version");
      mbedtls_ssl_send_alert_message(param_1,2,0x46);
      goto LAB_00102e02;
    }
    bVar38 = (byte)puVar25[1];
    uVar36 = (ulong)bVar38;
    lVar23 = (long)puVar25 + 3;
    if ((param_1[0x20] + param_1[0x1d]) - lVar23 < (long)uVar36) {
      pcVar30 = "cookie length does not match incoming message size";
      uVar13 = 0x47a;
      goto LAB_00101fa9;
    }
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x480,"cookie",lVar23,
               uVar36);
    free(*(void **)(param_1[0xe] + 0x4b0));
    lVar34 = param_1[0xe];
    pvVar12 = calloc(1,uVar36);
    *(void **)(lVar34 + 0x4b0) = pvVar12;
    if (pvVar12 != (void *)0x0) {
      __memcpy_chk(pvVar12,lVar23,uVar36,uVar36);
      *(ushort *)(lVar34 + 0x4b8) = (ushort)bVar38;
      *(undefined4 *)(param_1 + 1) = 1;
      uVar8 = mbedtls_ssl_reset_checksum(param_1);
      uVar36 = (ulong)uVar8;
      if (uVar8 == 0) {
        mbedtls_ssl_recv_flight_completed(param_1);
        pcVar30 = "<= parse hello verify request";
        uVar13 = 0x497;
        goto LAB_0010123c;
      }
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x491,
                 "mbedtls_ssl_reset_checksum",uVar8);
      goto LAB_00100f73;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x486,
               "alloc failed (%d bytes)",bVar38);
LAB_0010326e:
    uVar36 = 0xffff8100;
    goto LAB_00100f73;
  case 3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = mbedtls_ssl_parse_certificate();
      return uVar36;
    }
    break;
  case 4:
    local_a8 = (ushort *)0x0;
    lVar23 = *(long *)(param_1[0xe] + 0x10);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x829,
               "=> parse server key exchange");
    uVar13 = 0x82d;
    if (*(char *)(lVar23 + 0x12) == '\x01') {
LAB_001016f9:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,
                 "<= skip parse server key exchange");
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      goto LAB_00100f70;
    }
    if ((byte)(*(char *)(lVar23 + 0x12) - 9U) < 2) {
      lVar23 = *(long *)(param_1[0xd] + 0x70);
      if (lVar23 == 0) {
        uVar36 = 0xffff9400;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x7ce,
                   "should never happen");
      }
      else {
        iVar9 = mbedtls_pk_can_do(lVar23 + 0x168,2,extraout_RDX,0x82d,
                                  "<= skip parse server key exchange");
        if (iVar9 == 0) {
          uVar36 = 0xffff9300;
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x7d7,
                     "server key not ECDH capable");
        }
        else {
          local_98 = *(ulong *)(lVar23 + 0x168);
          uStack_90 = *(undefined8 *)(lVar23 + 0x170);
          iVar9 = mbedtls_pk_get_type(&local_98);
          uVar13 = 0;
          if (iVar9 - 2U < 3) {
            uVar13 = uStack_90;
          }
          uVar8 = mbedtls_ecdh_get_params(param_1[0xe] + 0x68,uVar13,1);
          uVar36 = (ulong)uVar8;
          if (uVar8 == 0) {
            iVar9 = ssl_check_server_ecdh_params(param_1);
            if (iVar9 == 0) {
              uVar13 = 0x842;
              goto LAB_001016f9;
            }
            uVar36 = 0xffff8600;
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x811,
                       "bad server certificate (ECDH curve)");
          }
          else {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x80c,
                       "mbedtls_ecdh_get_params",uVar8);
          }
        }
      }
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x83a,
                 "ssl_get_ecdh_params_from_cert",uVar36);
      mbedtls_ssl_send_alert_message(param_1,2,0x28);
      goto LAB_00100f73;
    }
    uVar8 = mbedtls_ssl_read_record(param_1,1);
    uVar36 = (ulong)uVar8;
    if (uVar8 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x853,
                 "mbedtls_ssl_read_record",uVar8);
      goto LAB_00100f73;
    }
    if ((int)param_1[0x1f] != 0x16) {
      pcVar30 = "bad server key exchange message";
      uVar13 = 0x858;
      goto LAB_00102d1b;
    }
    pcVar30 = (char *)param_1[0x1d];
    if (*pcVar30 != '\f') {
      if ((*(byte *)(lVar23 + 0x12) & 0xfd) != 5) {
        pcVar30 = "server key exchange message must not be skipped";
        uVar13 = 0x86d;
        goto LAB_00102d1b;
      }
      *(undefined4 *)((long)param_1 + 0x13c) = 1;
LAB_0010122b:
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      pcVar30 = "<= parse server key exchange";
      uVar13 = 0x99b;
      goto LAB_0010123c;
    }
    bVar37 = *(char *)(*param_1 + 9) == '\x01';
    local_a8 = (ushort *)(pcVar30 + (ulong)bVar37 * 8 + 4);
    puVar25 = (ushort *)(pcVar30 + param_1[0x26]);
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x880,"server key exchange"
               ,local_a8,param_1[0x26] - ((ulong)bVar37 * 8 + 4));
    bVar38 = *(byte *)(lVar23 + 0x12);
    if (((bVar38 - 6 & 0xfd) == 0) || ((bVar38 & 0xfd) == 5)) {
      if ((long)puVar25 - (long)local_a8 < 2) {
        uVar13 = 0x759;
      }
      else {
        uVar7 = *local_a8;
        local_a8 = local_a8 + 1;
        uVar36 = (ulong)(ushort)(uVar7 << 8 | uVar7 >> 8);
        if ((long)uVar36 <= (long)puVar25 - (long)local_a8) {
          local_a8 = (ushort *)((long)local_a8 + uVar36);
          if ((bVar38 & 0xfd) == 5) goto LAB_0010122b;
          goto LAB_00101def;
        }
        uVar13 = 0x761;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,
                 "bad server key exchange message (psk_identity_hint length)");
      pcVar30 = "bad server key exchange message";
      uVar13 = 0x888;
      goto LAB_00101fa9;
    }
LAB_00101def:
    if ((1 < (byte)(bVar38 - 3)) && (bVar38 != 8)) {
      uVar13 = 0x8f1;
LAB_00102cf2:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,
                 "should never happen");
      goto LAB_00102d04;
    }
    iVar9 = mbedtls_ecdh_read_params(param_1[0xe] + 0x68,&local_a8,puVar25);
    if (iVar9 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x734,
                 "mbedtls_ecdh_read_params",iVar9);
LAB_0010297f:
      pcVar30 = "bad server key exchange message";
      uVar13 = 0x8b0;
LAB_00101c78:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
      mbedtls_ssl_send_alert_message(param_1,2,0x2f);
      uVar36 = 0xffff9a00;
      goto LAB_00100f73;
    }
    iVar9 = ssl_check_server_ecdh_params(param_1);
    puVar4 = local_a8;
    if (iVar9 != 0) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x73e,
                 "bad server key exchange message (ECDHE curve)");
      goto LAB_0010297f;
    }
    if (2 < *(byte *)(lVar23 + 0x12) - 2) goto LAB_0010122b;
    lVar22 = param_1[0x1d];
    lVar23 = *(long *)(param_1[0xd] + 0x70);
    lVar34 = (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4;
    if (lVar23 == 0) {
      uVar13 = 0x908;
      goto LAB_00102cf2;
    }
    if ((local_a8 <= puVar25) && (1 < (long)puVar25 - (long)local_a8)) {
      uVar7 = *local_a8;
      uVar3 = uVar7 << 8;
      uVar31 = uVar7 >> 8;
      bVar38 = (byte)(uVar7 >> 8);
      iVar9 = mbedtls_ssl_pk_alg_from_sig(bVar38);
      iVar10 = mbedtls_ssl_md_alg_from_hash();
      if ((iVar10 == 0) || (iVar9 == 0)) {
        if (uVar7 == 0x508) {
          iVar9 = 6;
          iVar10 = 10;
          goto LAB_00101f22;
        }
        if (uVar7 == 0x608) {
          iVar9 = 6;
          iVar10 = 0xb;
          goto LAB_00101f22;
        }
        if (uVar7 == 0x408) {
          iVar9 = 6;
          iVar10 = 9;
          goto LAB_00101f22;
        }
        puVar20 = *(ushort **)(*param_1 + 0xe8);
        if (puVar20 != (ushort *)0x0) {
          for (; *puVar20 != 0; puVar20 = puVar20 + 1) {
            if (*puVar20 == (uVar3 | uVar31)) goto LAB_00101f22;
          }
        }
        if (*(int *)((long)param_1 + 0x14) == 0x303) {
          if ((5 < (uVar7 & 0xff) - 1) || ((bVar38 & 0xfd) != 1)) goto LAB_00102c7f;
          goto LAB_00101f22;
        }
        if ((*(int *)((long)param_1 + 0x14) == 0x304) &&
           (((uVar7 = uVar3 & 0xfeff | uVar31, uVar7 == 0x401 ||
             ((uVar3 | uVar31 & 0xfffd) == 0x601)) ||
            (((uVar3 | uVar31) < 0x604 && (uVar7 == 0x403)))))) goto LAB_00101f22;
LAB_00102c7f:
        pcVar30 = "bad server key exchange message";
        uVar13 = 0x917;
        goto LAB_00101c78;
      }
LAB_00101f22:
      lVar23 = lVar23 + 0x168;
      local_a8 = local_a8 + 1;
      iVar11 = mbedtls_pk_can_do(lVar23,iVar9);
      if (iVar11 == 0) {
        uVar13 = 0x922;
        pcVar30 = "bad server key exchange message";
        goto LAB_00101c78;
      }
      uVar13 = 0x930;
      pcVar30 = "bad server key exchange message";
      if (local_a8 <= puVar25 + -1) {
        uVar7 = *local_a8;
        local_a8 = local_a8 + 1;
        uVar17 = (ulong)(ushort)(uVar7 << 8 | uVar7 >> 8);
        if (local_a8 == (ushort *)((long)puVar25 - uVar17)) {
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x943,"signature",
                     local_a8,uVar17,lVar34);
          if (iVar10 != 0) {
            lVar22 = lVar22 + lVar34;
            lVar34 = (long)puVar4 - lVar22;
            uVar8 = mbedtls_ssl_get_key_exchange_md_tls1_2
                              (param_1,local_88,&local_a0,lVar22,lVar34,iVar10);
            uVar36 = (ulong)uVar8;
            if (uVar8 == 0) {
              lVar22 = local_a0;
              mbedtls_debug_print_buf
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x954,
                         "parameters hash",local_88,local_a0,lVar34);
              uVar13 = mbedtls_pk_can_do(lVar23,iVar9);
              if ((int)uVar13 == 0) {
                uVar36 = 0xffff9300;
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x95a,
                           "bad server key exchange message",lVar22);
                mbedtls_ssl_send_alert_message(param_1,2,0x28);
              }
              else {
                if (iVar9 == 6) {
                  local_98 = CONCAT44(local_98._4_4_,iVar10);
                  uVar13 = mbedtls_md_info_from_type(iVar10);
                  cVar6 = mbedtls_md_get_size(uVar13);
                  local_98 = (ulong)CONCAT14(cVar6,(undefined4)local_98);
                  if (cVar6 == '\0') goto LAB_00102d04;
                  uVar8 = mbedtls_pk_verify_ext
                                    (6,&local_98,lVar23,iVar10,local_88,local_a0,local_a8,uVar17);
                }
                else {
                  uVar8 = mbedtls_pk_verify_restartable
                                    (lVar23,iVar10,local_88,local_a0,local_a8,uVar17,0,uVar13);
                }
                uVar36 = (ulong)uVar8;
                if (uVar8 == 0) goto LAB_0010122b;
                mbedtls_ssl_send_alert_message(param_1,2,0x33);
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x986,
                           "mbedtls_pk_verify",uVar36);
              }
            }
            goto LAB_00100f73;
          }
          uVar13 = 0x950;
          goto LAB_00102cf2;
        }
        pcVar30 = "bad server key exchange message";
        uVar13 = 0x93b;
      }
      goto LAB_00101fa9;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0x911,
               "missing input data in %s","ssl_parse_server_key_exchange",lVar22);
    mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
LAB_00101fc0:
    uVar36 = 0xffff8d00;
    goto LAB_00100f73;
  case 5:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = ssl_parse_certificate_request();
      return uVar36;
    }
    break;
  case 6:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xa6f,
               "=> parse server hello done");
    uVar8 = mbedtls_ssl_read_record(param_1,1);
    uVar36 = (ulong)uVar8;
    if (uVar8 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xa72,
                 "mbedtls_ssl_read_record",uVar8);
      goto LAB_00100f73;
    }
    if ((int)param_1[0x1f] != 0x16) {
      pcVar30 = "bad server hello done message";
      uVar13 = 0xa77;
LAB_0010112a:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
      goto LAB_0010113c;
    }
    cVar6 = *(char *)(*param_1 + 9);
    if ((param_1[0x26] != (ulong)(cVar6 == '\x01') * 8 + 4) || (*(char *)param_1[0x1d] != '\x0e')) {
      pcVar30 = "bad server hello done message";
      uVar13 = 0xa7d;
      goto LAB_00101fa9;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (cVar6 == '\x01') {
      mbedtls_ssl_recv_flight_completed(param_1);
    }
    pcVar30 = "<= parse server hello done";
    uVar13 = 0xa8b;
LAB_0010123c:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
    goto LAB_00100f70;
  case 7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = mbedtls_ssl_write_certificate();
      return uVar36;
    }
    break;
  case 8:
    lVar23 = *(long *)(param_1[0xe] + 0x10);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xa9a,
               "=> write client key exchange");
    if (((byte)(*(char *)(lVar23 + 0x12) - 3U) < 2) || ((byte)(*(char *)(lVar23 + 0x12) - 9U) < 2))
    {
      uVar8 = mbedtls_ecdh_make_public
                        (param_1[0xe] + 0x68,&local_98,param_1[0x30] + 4,1000,
                         *(undefined8 *)(*param_1 + 0x38),*(undefined8 *)(*param_1 + 0x40));
      uVar36 = (ulong)uVar8;
      if (uVar8 == 0) {
        mbedtls_debug_printf_ecdh
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xb2c,
                   param_1[0xe] + 0x68,0);
        lVar23 = param_1[0xe];
        uVar8 = mbedtls_ecdh_calc_secret
                          (lVar23 + 0x68,lVar23 + 0x660,lVar23 + 0x5e8,0x400,
                           *(undefined8 *)(*param_1 + 0x38),*(undefined8 *)(*param_1 + 0x40));
        uVar36 = (ulong)uVar8;
        if (uVar8 == 0) {
          mbedtls_debug_printf_ecdh
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xb48,
                     param_1[0xe] + 0x68,2);
LAB_001013d6:
          lVar34 = 4;
LAB_001013dc:
          *(undefined4 *)(param_1 + 0x31) = 0x16;
          param_1[0x32] = local_98 + lVar34;
          *(undefined1 *)param_1[0x30] = 0x10;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          uVar8 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
          pcVar30 = "<= write client key exchange";
          uVar13 = 0xc89;
          uVar36 = (ulong)uVar8;
          if (uVar8 == 0) {
LAB_0010142e:
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30);
          }
          else {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xc85,
                       "mbedtls_ssl_write_handshake_msg",uVar8);
          }
        }
        else {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xb3f,
                     "mbedtls_ecdh_calc_secret",uVar8);
        }
      }
      else {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xb23,
                   "mbedtls_ecdh_make_public",uVar8);
      }
      goto LAB_00100f73;
    }
    iVar9 = mbedtls_ssl_ciphersuite_uses_psk(lVar23);
    if (iVar9 == 0) {
      if (*(char *)(lVar23 + 0x12) == '\x01') {
        uVar8 = ssl_write_encrypted_pms(param_1,4,&local_98,0);
        uVar36 = (ulong)uVar8;
        if (uVar8 == 0) goto LAB_001013d6;
        goto LAB_00100f73;
      }
      uVar13 = 0xc7a;
      goto LAB_00102cf2;
    }
    iVar9 = mbedtls_ssl_conf_has_static_psk(*param_1);
    if (iVar9 != 0) {
      local_98 = *(ulong *)(*param_1 + 0x110);
      if (local_98 + 6 < 0x4001) {
        *(char *)(param_1[0x30] + 4) = (char)(local_98 >> 8);
        *(char *)(param_1[0x30] + 5) = (char)local_98;
        memcpy((void *)(param_1[0x30] + 6),*(void **)(*param_1 + 0x108),
               *(size_t *)(*param_1 + 0x110));
        lVar22 = *param_1;
        lVar34 = *(long *)(lVar22 + 0x110) + 6;
        cVar6 = *(char *)(lVar23 + 0x12);
        if (cVar6 == '\x05') {
          local_98 = 0;
          uVar5 = 5;
LAB_00102723:
          uVar8 = mbedtls_ssl_psk_derive_premaster(param_1,uVar5);
          uVar36 = (ulong)uVar8;
          if (uVar8 == 0) goto LAB_001013dc;
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xc42,
                     "mbedtls_ssl_psk_derive_premaster",uVar8);
        }
        else if (cVar6 == '\a') {
          uVar8 = ssl_write_encrypted_pms(param_1,lVar34,&local_98,2);
          uVar36 = (ulong)uVar8;
          if (uVar8 == 0) {
            uVar5 = *(undefined1 *)(lVar23 + 0x12);
            goto LAB_00102723;
          }
        }
        else {
          if (cVar6 != '\b') {
            uVar13 = 0xc3a;
            goto LAB_00102cf2;
          }
          uVar8 = mbedtls_ecdh_make_public
                            (param_1[0xe] + 0x68,&local_98,param_1[0x30] + lVar34,0x4000 - lVar34,
                             *(undefined8 *)(lVar22 + 0x38),*(undefined8 *)(lVar22 + 0x40));
          uVar36 = (ulong)uVar8;
          if (uVar8 == 0) {
            mbedtls_debug_printf_ecdh
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xc35,
                       param_1[0xe] + 0x68,0);
            uVar5 = *(undefined1 *)(lVar23 + 0x12);
            goto LAB_00102723;
          }
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xc31,
                     "mbedtls_ecdh_make_public",uVar8);
        }
      }
      else {
        uVar36 = 0xffff9600;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xbde,
                   "psk identity too long or SSL buffer too short");
      }
      goto LAB_00100f73;
    }
LAB_00102d04:
    uVar36 = 0xffff9400;
    goto LAB_00100f73;
  case 9:
    lVar23 = param_1[0x30];
    lVar34 = param_1[0x2a];
    lVar22 = *(long *)(param_1[0xe] + 0x10);
    local_a0 = 0;
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xcb9,
               "=> write certificate verify");
    uVar8 = mbedtls_ssl_derive_keys(param_1);
    uVar36 = (ulong)uVar8;
    if (uVar8 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xcc3,
                 "mbedtls_ssl_derive_keys",uVar8);
      goto LAB_00100f73;
    }
    bVar38 = *(byte *)(lVar22 + 0x12);
    if (bVar38 < 5) {
      if (bVar38 == 0) goto LAB_001014b1;
LAB_00101723:
      lVar22 = param_1[0xe];
      if (*(char *)(lVar22 + 0x552) != '\0') {
        plVar14 = *(long **)(lVar22 + 0x408);
        if (((plVar14 != (long *)0x0) ||
            (plVar14 = *(long **)(*param_1 + 0xd0), plVar14 != (long *)0x0)) && (*plVar14 != 0)) {
          if (plVar14[1] == 0) {
            uVar36 = 0xffff8a00;
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xcd5,
                       "got no private key for certificate");
          }
          else {
            uVar8 = (**(code **)(lVar22 + 0x20))(param_1,local_88,&local_98);
            if (uVar8 == 0) {
              cVar6 = *(char *)(*(long *)(param_1[0xe] + 0x10) + 0x11);
              *(char *)(param_1[0x30] + 4) =
                   (*(char *)(*(long *)(param_1[0xe] + 0x10) + 0x11) == '\n') + '\x04';
              if (((param_1[0xe] == 0) || (lVar22 = *(long *)(param_1[0xe] + 0x408), lVar22 == 0))
                 && (lVar22 = *(long *)(*param_1 + 0xd0), lVar22 == 0)) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(lVar22 + 8);
              }
              lVar22 = param_1[0x30];
              uVar5 = mbedtls_ssl_sig_from_pk(uVar13);
              *(undefined1 *)(lVar22 + 5) = uVar5;
              local_98 = 0;
              lVar22 = *param_1;
              if (((param_1[0xe] == 0) || (lVar28 = *(long *)(param_1[0xe] + 0x408), lVar28 == 0))
                 && (lVar28 = *(long *)(lVar22 + 0xd0), lVar28 == 0)) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(lVar28 + 8);
              }
              uVar8 = mbedtls_pk_sign_restartable
                                (uVar13,(cVar6 == '\n') + '\t',local_88,0,param_1[0x30] + 8,
                                 (lVar34 - lVar23) + 0x4175,&local_a0,*(undefined8 *)(lVar22 + 0x38)
                                 ,*(undefined8 *)(lVar22 + 0x40),0);
              uVar13 = 0xd13;
              pcVar30 = "mbedtls_pk_sign";
              if (uVar8 == 0) {
                *(ushort *)(param_1[0x30] + 6) = (ushort)local_a0 << 8 | (ushort)local_a0 >> 8;
                *(undefined4 *)(param_1 + 0x31) = 0x16;
                param_1[0x32] = local_a0 + 8;
                *(undefined1 *)param_1[0x30] = 0xf;
                *(int *)(param_1 + 1) = (int)param_1[1] + 1;
                uVar8 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1,0xd13,"mbedtls_pk_sign",0);
                pcVar30 = "<= write certificate verify";
                uVar13 = 0xd29;
                if (uVar8 == 0) goto LAB_0010142e;
                pcVar30 = "mbedtls_ssl_write_handshake_msg";
                uVar13 = 0xd25;
              }
              uVar36 = (ulong)uVar8;
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,pcVar30,
                         uVar8);
            }
            else {
              uVar36 = (ulong)uVar8;
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xce6,
                         "calc_verify",uVar8);
              uVar36 = uVar36 & 0xffffffff;
            }
          }
          goto LAB_00100f73;
        }
      }
      uVar13 = 0xccf;
    }
    else {
      if ((byte)(bVar38 - 9) < 2) goto LAB_00101723;
LAB_001014b1:
      uVar13 = 0xcc8;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",uVar13,
               "<= skip write certificate verify");
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    goto LAB_00100f73;
  case 10:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = mbedtls_ssl_write_change_cipher_spec();
      return uVar36;
    }
    break;
  case 0xb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = mbedtls_ssl_write_finished();
      return uVar36;
    }
    break;
  default:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xe0c,"invalid state %d");
LAB_001014fb:
    uVar36 = 0xffff8f00;
    goto LAB_00100f73;
  case 0xd:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = mbedtls_ssl_parse_finished();
      return uVar36;
    }
    break;
  case 0xe:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls12_client.c",0xe03,"handshake: done");
    *(undefined4 *)(param_1 + 1) = 0xf;
    goto LAB_00100f70;
  case 0xf:
    mbedtls_ssl_handshake_wrapup();
LAB_00100f70:
    uVar36 = 0;
LAB_00100f73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar36;
    }
    break;
  case 0x10:
    goto switchD_00100d40_caseD_10;
  }
LAB_00102d55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


