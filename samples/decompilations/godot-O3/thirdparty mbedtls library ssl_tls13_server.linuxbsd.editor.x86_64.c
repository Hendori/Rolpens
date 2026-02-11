
ulong ssl_tls13_select_ciphersuite
                (long *param_1,ushort *param_2,ushort *param_3,uint param_4,uint param_5,
                long *param_6)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  *param_6 = 0;
  if (((long)param_3 - (long)param_2 & 1U) != 0) {
    return (long)param_3 - (long)param_2;
  }
  if (param_2 < param_3) {
    do {
      puVar2 = *(uint **)(*param_1 + 0x18);
      uVar1 = *puVar2;
      while (uVar1 != 0) {
        puVar2 = puVar2 + 1;
        if (uVar1 == (ushort)(*param_2 << 8 | *param_2 >> 8)) {
          lVar3 = mbedtls_ssl_ciphersuite_from_id(uVar1);
          uVar4 = mbedtls_ssl_validate_ciphersuite
                            (param_1,lVar3,*(undefined4 *)((long)param_1 + 0x14),
                             *(undefined4 *)((long)param_1 + 0x14));
          if ((lVar3 == 0) || ((int)uVar4 != 0)) break;
          if (param_4 == 0) {
            if ((param_5 != 0) &&
               (uVar1 = *(byte *)(lVar3 + 0x11) | 0x2000000, uVar4 = (ulong)uVar1, param_5 != uVar1)
               ) break;
          }
          else if (param_4 != uVar1) break;
          *param_6 = lVar3;
          return uVar4;
        }
        uVar1 = *puVar2;
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  mbedtls_debug_print_msg
            (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x5f,
             "No matched ciphersuite, psk_ciphersuite_id=%x, psk_hash_alg=%lx",param_4);
  return (ulong)param_5;
}



int ssl_tls13_parse_pre_shared_key_ext_constprop_0
              (long *param_1,ushort *param_2,ushort *param_3,undefined8 param_4,undefined8 param_5,
              int *param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *__ptr;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  ulong uVar14;
  byte bVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  long *in_R10;
  ulong uVar20;
  long in_FS_OFFSET;
  byte bVar21;
  undefined2 local_320;
  int local_2fc;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [4];
  int local_2b4;
  undefined4 local_2a8;
  ulong local_220;
  int local_218;
  undefined2 local_214;
  undefined1 local_212 [330];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_buf
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x21a,
             "pre_shared_key extension",param_2,(long)param_3 - (long)param_2);
  if ((param_3 < param_2) || ((ulong)((long)param_3 - (long)param_2) < 9)) {
    uVar12 = 0x221;
LAB_001001a5:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar12,
               "missing input data in %s","ssl_tls13_parse_pre_shared_key_ext");
    mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
  }
  else {
    puVar16 = param_2 + 1;
    if ((param_3 < puVar16) ||
       (uVar20 = (ulong)(ushort)(*param_2 << 8 | *param_2 >> 8),
       (ulong)((long)param_3 - (long)puVar16) < uVar20)) {
      uVar12 = 0x224;
      goto LAB_001001a5;
    }
    puVar2 = (ushort *)((long)puVar16 + uVar20);
    if ((param_3 < puVar2) || ((long)param_3 - (long)puVar2 < 0x23)) {
      uVar12 = 0x22c;
      goto LAB_001001a5;
    }
    puVar13 = puVar2 + 1;
    if ((param_3 < puVar13) ||
       (uVar8 = (ulong)(ushort)(*puVar2 << 8 | *puVar2 >> 8),
       (ulong)((long)param_3 - (long)puVar13) < uVar8)) {
      uVar12 = 0x22f;
      goto LAB_001001a5;
    }
    puVar3 = (ushort *)((long)puVar13 + uVar8);
    iVar6 = (**(code **)(param_1[0xe] + 0x18))(param_1,param_2,(long)puVar2 - (long)param_2);
    if (iVar6 != 0) {
      uVar12 = 0x235;
LAB_001003ee:
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar12,"update_checksum",
                 iVar6);
      goto LAB_001001cf;
    }
    iVar5 = -1;
    if ((puVar16 < puVar2) && (puVar13 < puVar3)) {
      local_2fc = -1;
      do {
        mbedtls_ssl_session_init(local_2b8);
        if ((long)puVar2 - (long)puVar16 < 7) {
          uVar12 = 0x246;
          goto LAB_001001a5;
        }
        puVar1 = puVar16 + 1;
        if ((puVar2 < puVar1) ||
           (uVar8 = (ulong)(ushort)(*puVar16 << 8 | *puVar16 >> 8),
           (ulong)((long)puVar2 - (long)puVar1) < uVar8 + 4)) {
          uVar12 = 0x249;
          goto LAB_001001a5;
        }
        uVar7 = *(uint *)((long)puVar1 + uVar8);
        if ((long)puVar3 - (long)puVar13 < 0x21) {
          uVar12 = 0x24d;
          goto LAB_001001a5;
        }
        puVar4 = (ushort *)((long)puVar13 + 1);
        if ((puVar3 < puVar4) ||
           (uVar14 = (ulong)(byte)*puVar13, (ulong)((long)puVar3 - (long)puVar4) < uVar14)) {
          uVar12 = 0x250;
          goto LAB_001001a5;
        }
        local_2fc = local_2fc + 1;
        puVar13 = (ushort *)((long)puVar13 + uVar14 + 1);
        if (iVar5 == -1) {
          *param_6 = 0;
          mbedtls_debug_print_buf
                    (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x158,"identity",
                     puVar1,uVar8,0);
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc9,
                     "=> check_identity_match_ticket");
          lVar9 = *param_1;
          if ((*(long *)(lVar9 + 0xb0) != 0) && (uVar8 != 0)) {
            __ptr = calloc(1,uVar8);
            if (__ptr == (void *)0x0) {
LAB_00100679:
              lVar9 = *param_1;
              goto LAB_0010067c;
            }
            __memcpy_chk(__ptr,puVar1,uVar8,uVar8);
            iVar6 = (**(code **)(lVar9 + 0xb0))(*(undefined8 *)(lVar9 + 0xb8),local_2b8,__ptr,uVar8)
            ;
            if (iVar6 == -0x6d80) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xe4,
                         "ticket is expired",0xffff9280);
              iVar6 = 1;
LAB_00100633:
              free(__ptr);
              mbedtls_ssl_session_free(local_2b8);
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x144,
                         "<= check_identity_match_ticket");
              if (iVar6 == 1) goto LAB_0010045b;
              goto LAB_00100679;
            }
            if (iVar6 != 0) {
              if (iVar6 == -0x7180) {
                mbedtls_debug_print_msg
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xe9,
                           "ticket is not authentic",0xffff8e80);
              }
              else {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xee,
                           "ticket_parse");
              }
              iVar6 = 2;
              goto LAB_00100633;
            }
            free(__ptr);
            if (local_2b4 != 0x304) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x100,
                         "Ticket TLS version is not 1.3.");
LAB_00100b88:
              mbedtls_ssl_session_free(local_2b8);
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x144,
                         "<= check_identity_match_ticket");
              goto LAB_0010045b;
            }
            lVar9 = mbedtls_ms_time();
            if (lVar9 < (long)local_220) {
              uVar20 = local_220;
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x108,
                         "Invalid ticket creation time ( now = %ld, creation_time = %ld )",lVar9,
                         local_220,in_R10);
              goto LAB_00100b88;
            }
            pcVar19 = "Ticket age exceeds limitation ticket_age = %ld";
            uVar12 = 0x11c;
            if (0x240c8400 < (long)(lVar9 - local_220)) {
LAB_00100d40:
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar12,pcVar19);
              goto LAB_00100b88;
            }
            uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
            if (12000 < ((lVar9 - local_220) - (ulong)(uVar7 - local_218)) + 6000) {
              pcVar19 = "Ticket age outside tolerance window ( diff = %ld)";
              uVar12 = 0x132;
              goto LAB_00100d40;
            }
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x144,
                       "<= check_identity_match_ticket");
            *param_6 = 1;
            uVar10 = mbedtls_ssl_set_hs_psk(param_1,local_212,local_214._1_1_);
            if ((int)uVar10 != 0) {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x163,
                         "mbedtls_ssl_set_hs_psk",uVar10 & 0xffffffff);
              goto LAB_0010045b;
            }
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x167,
                       "Ticket-resumed PSK:",local_212,local_214._1_1_,uVar10);
            mbedtls_debug_print_msg
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x16a,
                       "ticket: obfuscated_ticket_age: %u",uVar7);
LAB_001006a8:
            mbedtls_debug_print_msg
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x25f,
                       "found matched identity");
            if (*param_6 == 0) {
              uVar12 = 0x2000009;
              bVar15 = 5;
              param_6[1] = 0;
              uVar11 = 0;
LAB_00100793:
              if ((((*(byte *)(*param_1 + 0x20) & 4) == 0) ||
                  ((*(byte *)(param_1[0xe] + 0x3b) & 4) == 0)) ||
                 ((~*(uint *)(param_1[0xe] + 0x66c) & 0x422010) != 0)) {
LAB_00100756:
                if ((((bVar15 & 1) == 0) || (uVar7 = *(uint *)(*param_1 + 0x20) & 1, uVar7 == 0)) ||
                   (((*(byte *)(param_1[0xe] + 0x3b) & 1) == 0 ||
                    ((~*(uint *)(param_1[0xe] + 0x66c) & 0x22000) != 0)))) {
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x283,
                             "No suitable PSK key exchange mode");
                  goto LAB_0010045b;
                }
              }
              else {
                uVar7 = 4;
              }
              param_6[1] = uVar7;
              ssl_tls13_select_ciphersuite(param_1,param_4,param_5,uVar11,uVar12,param_6 + 2);
              if (*(long *)(param_6 + 2) == 0) {
                mbedtls_ssl_session_free(local_2b8);
                mbedtls_ssl_pend_fatal_alert(param_1,0x33,0xffff9200);
                iVar6 = -0x6e00;
              }
              else {
                bVar15 = *(byte *)(*(long *)(param_6 + 2) + 0x11);
                iVar5 = *param_6;
                uVar10 = 0;
                uVar7 = (bVar15 | 0x2000000) + 0xfdfffffd;
                if (uVar7 < 0x11) {
                  uVar10 = *(ulong *)(CSWTCH_177 + (ulong)uVar7 * 8);
                }
                if (uVar14 == uVar10) {
                  iVar6 = mbedtls_ssl_get_handshake_transcript
                                    (param_1,bVar15,local_c8,0x40,&local_2d0);
                  if ((iVar6 == 0) &&
                     (iVar6 = mbedtls_ssl_tls13_export_handshake_psk(param_1,&local_2c8,&local_2c0),
                     iVar6 == 0)) {
                    in_R10 = param_1;
                    iVar6 = mbedtls_ssl_tls13_create_psk_binder
                                      (param_1,bVar15 | 0x2000000,local_2c8,local_2c0,iVar5,local_c8
                                       ,local_88,uVar20);
                    if (iVar6 == 0) {
                      mbedtls_debug_print_buf
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x1bf,
                                 "psk binder ( computed ): ",local_88,local_2d0);
                      mbedtls_debug_print_buf
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x1c1,
                                 "psk binder ( received ): ",puVar4);
                      iVar6 = mbedtls_ct_memcmp(local_88,puVar4,uVar14);
                      if (iVar6 == 0) {
                        iVar5 = local_2fc;
                        if (*param_6 == 1) {
                          lVar9 = param_1[0xd];
                          *(int *)(lVar9 + 0xa0) = local_218;
                          *(ushort *)(lVar9 + 0xa4) = local_214;
                          bVar15 = (byte)(local_214 >> 8);
                          if (bVar15 == 0) {
                            mbedtls_ssl_session_free(local_2b8);
                            goto LAB_001006d6;
                          }
                          puVar17 = local_212;
                          puVar18 = (undefined1 *)(lVar9 + 0xa6);
                          for (uVar14 = (ulong)bVar15; uVar14 != 0; uVar14 = uVar14 - 1) {
                            *puVar18 = *puVar17;
                            puVar17 = puVar17 + (ulong)bVar21 * -2 + 1;
                            puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
                          }
                          mbedtls_ssl_session_free(local_2b8);
                        }
                        goto LAB_0010045b;
                      }
                      mbedtls_platform_zeroize(local_88,0x40);
                      goto LAB_00100819;
                    }
                    mbedtls_debug_print_msg
                              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x1bb,
                               "PSK binder calculation failed.");
                    iVar6 = -0x6e00;
                  }
                }
                else {
LAB_00100819:
                  iVar6 = 1;
                }
                mbedtls_ssl_session_free(local_2b8);
                mbedtls_debug_print_msg
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x2a4,
                           "Invalid binder.");
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x2a5,
                           "ssl_tls13_offered_psks_check_binder_match",iVar6);
                mbedtls_ssl_pend_fatal_alert(param_1,0x33,0xffff9200);
              }
            }
            else {
              if (*param_6 == 1) {
                uVar12 = 0;
                *(byte *)(param_1[0xd] + 0xa4) = (byte)local_214;
                param_6[1] = 0;
                bVar15 = (byte)local_214 & 5;
                uVar11 = local_2a8;
                if ((local_214 & 4) != 0) goto LAB_00100793;
                goto LAB_00100756;
              }
LAB_001006d6:
              iVar6 = -0x6c00;
            }
            goto LAB_001001cf;
          }
LAB_0010067c:
          if (*(code **)(lVar9 + 0x80) == (code *)0x0) {
            mbedtls_debug_print_buf
                      (param_1,5,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x17b,"identity",
                       puVar1);
            lVar9 = *(long *)(*param_1 + 0x108);
            if (((lVar9 != 0) && (uVar8 == *(ulong *)(*param_1 + 0x110))) &&
               (iVar6 = mbedtls_ct_memcmp(lVar9,puVar1,uVar8), iVar6 == 0)) {
              iVar6 = mbedtls_ssl_set_hs_psk
                                (param_1,*(undefined8 *)(*param_1 + 0xf8),
                                 *(undefined8 *)(*param_1 + 0x100));
              if (iVar6 == 0) goto LAB_001006a8;
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x183,
                         "mbedtls_ssl_set_hs_psk",iVar6);
            }
          }
          else {
            iVar6 = (**(code **)(lVar9 + 0x80))(*(undefined8 *)(lVar9 + 0x88),param_1,puVar1,uVar8);
            if (iVar6 == 0) goto LAB_001006a8;
          }
        }
LAB_0010045b:
        puVar16 = (ushort *)((long)puVar16 + uVar8 + 6);
      } while ((puVar16 < puVar2) && (puVar13 < puVar3));
    }
    if ((puVar2 == puVar16) && (puVar3 == puVar13)) {
      iVar6 = (**(code **)(param_1[0xe] + 0x18))(param_1,puVar2,(long)puVar3 - (long)puVar2);
      if (iVar6 == 0) {
        if (iVar5 == -1) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x2ca,
                     "No usable PSK or ticket.");
          iVar6 = -0x6c80;
        }
        else {
          local_320 = (undefined2)iVar5;
          *(undefined2 *)(param_1[0xe] + 0x400) = local_320;
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x2cf,
                     "Pre shared key found");
          iVar6 = 0;
        }
        goto LAB_001001cf;
      }
      uVar12 = 0x2c6;
      goto LAB_001003ee;
    }
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",700,
               "pre_shared_key extension decode error");
    mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
  }
  iVar6 = -0x7300;
LAB_001001cf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ssl_tls13_write_server_hello_body
              (long *param_1,ushort *param_2,ushort *param_3,long *param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  size_t __n;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  ulong in_R10;
  ushort *puVar14;
  long in_FS_OFFSET;
  ushort *local_70;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = param_1[0xe];
  *param_4 = 0;
  *(undefined4 *)(lVar11 + 0x668) = 0;
  if ((param_2 <= param_3) && (1 < (long)param_3 - (long)param_2)) {
    *param_2 = 0x303;
    uVar4 = _mbedtls_ssl_get_extension_mask;
    uVar10 = _mbedtls_ssl_write_version;
    uVar8 = _memcpy;
    puVar14 = param_2 + 1;
    if ((puVar14 <= param_3) && (0x1f < (long)param_3 - (long)puVar14)) {
      if (param_5 == 0) {
        lVar11 = param_1[0xe];
        uVar8 = *(undefined8 *)(lVar11 + 0x5d0);
        *(undefined8 *)(param_2 + 1) = *(undefined8 *)(lVar11 + 0x5c8);
        *(undefined8 *)(param_2 + 5) = uVar8;
        uVar8 = *(undefined8 *)(lVar11 + 0x5e0);
        *(undefined8 *)(param_2 + 9) = *(undefined8 *)(lVar11 + 0x5d8);
        *(undefined8 *)(param_2 + 0xd) = uVar8;
      }
      else {
        *(undefined8 *)(param_2 + 1) = _mbedtls_ssl_tls13_hello_retry_request_magic;
        *(undefined8 *)(param_2 + 5) = uVar8;
        *(undefined8 *)(param_2 + 9) = uVar10;
        *(undefined8 *)(param_2 + 0xd) = uVar4;
      }
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x8fc,
                 "server hello, random bytes",puVar14,0x20);
      if ((param_2 + 0x11 <= param_3) &&
         (*(long *)(param_1[0xd] + 0x18) + 1U <= (ulong)((long)param_3 - (long)(param_2 + 0x11)))) {
        *(char *)(param_2 + 0x11) = (char)*(long *)(param_1[0xd] + 0x18);
        puVar14 = (ushort *)((long)param_2 + 0x23);
        __n = *(size_t *)(param_1[0xd] + 0x18);
        if (__n != 0) {
          pvVar9 = memcpy(puVar14,(void *)(param_1[0xd] + 0x20),__n);
          in_R10 = *(ulong *)(param_1[0xd] + 0x18);
          puVar14 = (ushort *)((long)pvVar9 + in_R10);
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x90b,"session id",
                     param_1[0xd] + 0x20,in_R10);
        }
        if ((puVar14 <= param_3) && (1 < (long)param_3 - (long)puVar14)) {
          *puVar14 = *(ushort *)(param_1[0xd] + 0x10) << 8 | *(ushort *)(param_1[0xd] + 0x10) >> 8;
          uVar3 = *(undefined4 *)(param_1[0xd] + 0x10);
          uVar8 = mbedtls_ssl_get_ciphersuite_name(uVar3);
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x918,
                     "server hello, chosen ciphersuite: %s ( id=%d )",uVar8,uVar3);
          if (puVar14 + 1 < param_3) {
            puVar1 = (ushort *)((long)puVar14 + 3);
            *(undefined1 *)(puVar14 + 1) = 0;
            if ((puVar1 <= param_3) && (1 < (long)param_3 - (long)puVar1)) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x804,
                         "server hello, write selected version");
              if (((ushort *)((long)puVar14 + 5) <= param_3) &&
                 (5 < (long)param_3 - ((long)puVar14 + 5))) {
                *(undefined4 *)((long)puVar14 + 5) = 0x2002b00;
                mbedtls_ssl_write_version
                          ((long)puVar14 + 9,*(undefined1 *)(*param_1 + 9),
                           *(undefined4 *)((long)param_1 + 0x14));
                uVar8 = 0x815;
                uVar12 = 3;
                mbedtls_debug_print_msg
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x815,
                           "supported version: [%04x]",*(undefined4 *)((long)param_1 + 0x14));
                uVar6 = mbedtls_ssl_get_extension_mask(0x2b);
                lVar11 = param_1[0xe];
                local_70 = (ushort *)((long)puVar14 + 0xb);
                *(uint *)(lVar11 + 0x668) = *(uint *)(lVar11 + 0x668) | uVar6;
                if ((*(byte *)(lVar11 + 0x38) & 6) == 0) {
LAB_00101178:
                  if (param_5 == 0) {
                    if ((*(byte *)(param_1[0xe] + 0x38) & 5) != 0) {
                      if (*(long *)(param_1[0xe] + 0x3f0) == 0) {
                        iVar7 = -0x6c00;
                      }
                      else {
                        mbedtls_debug_print_msg
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x2f2,
                                   "server hello, adding pre_shared_key extension");
                        if ((local_70 <= param_3) && (5 < (long)param_3 - (long)local_70)) {
                          local_70[0] = 0x2900;
                          local_70[1] = 0x200;
                          local_70[2] = *(ushort *)(param_1[0xe] + 0x400) << 8 |
                                        *(ushort *)(param_1[0xe] + 0x400) >> 8;
                          mbedtls_debug_print_msg
                                    (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x2fc
                                     ,"sent selected_identity: %u",
                                     *(undefined2 *)(param_1[0xe] + 0x400));
                          uVar6 = mbedtls_ssl_get_extension_mask(0x29);
                          local_70 = local_70 + 3;
                          *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar6;
                          goto LAB_00101190;
                        }
                        iVar7 = -0x6a00;
                      }
                      uVar8 = 0x949;
                      pcVar13 = "ssl_tls13_write_server_pre_shared_key_ext";
                      goto LAB_00101439;
                    }
LAB_00101190:
                    iVar7 = (int)((long)local_70 - (long)puVar1) + -2;
                    uVar5 = (ushort)iVar7;
                    uVar5 = uVar5 << 8 | uVar5 >> 8;
                    *(ushort *)((long)puVar14 + 3) = uVar5;
                    mbedtls_debug_print_buf
                              (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x953,
                               "server hello extensions",puVar1,(long)local_70 - (long)puVar1,
                               CONCAT22((short)((uint)iVar7 >> 0x10),uVar5));
                    *param_4 = (long)local_70 - (long)param_2;
                    mbedtls_debug_print_buf
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x958,
                               "server hello",param_2,(long)local_70 - (long)param_2);
                    uVar8 = 2;
                    uVar3 = *(undefined4 *)(param_1[0xe] + 0x668);
                  }
                  else {
                    uVar5 = (short)((long)local_70 - (long)puVar1) - 2;
                    *(ushort *)((long)puVar14 + 3) = uVar5 * 0x100 | uVar5 >> 8;
                    mbedtls_debug_print_buf
                              (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x953,
                               "server hello extensions",puVar1,(long)local_70 - (long)puVar1,uVar12
                              );
                    *param_4 = (long)local_70 - (long)param_2;
                    mbedtls_debug_print_buf
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x958,
                               "server hello",param_2,(long)local_70 - (long)param_2);
                    uVar8 = 0xfffffffe;
                    uVar3 = *(undefined4 *)(param_1[0xe] + 0x668);
                  }
                  mbedtls_ssl_print_extensions
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x95a,uVar8,
                             uVar3,0,in_R10);
                  iVar7 = 0;
                }
                else {
                  uVar5 = *(ushort *)(lVar11 + 0x550);
                  in_R10 = (ulong)uVar5;
                  if (param_5 != 0) {
                    uVar2 = *(ushort *)(lVar11 + 0x3c);
                    if (uVar5 == 0) {
                      if (uVar2 == 0) {
                        mbedtls_debug_print_msg
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x8ae,
                                   "no matching named group found");
                        iVar7 = -0x6e00;
                        goto LAB_00100dbd;
                      }
                      if ((param_3 < local_70) || ((long)param_3 - (long)local_70 < 6))
                      goto LAB_00100db8;
                      *(undefined4 *)((long)puVar14 + 0xb) = 0x2003300;
                      *(ushort *)((long)puVar14 + 0xf) = uVar2 << 8 | uVar2 >> 8;
                      uVar10 = mbedtls_ssl_named_group_to_str((uint)uVar2);
                      uVar12 = (ulong)(uint)uVar2;
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x8bd,
                                 "HRR selected_group: %s (%x)",uVar10,uVar12,uVar8);
                      uVar6 = mbedtls_ssl_get_extension_mask(0x33);
                      *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar6;
                      lVar11 = 6;
                    }
                    else {
                      uVar12 = 4;
                      mbedtls_debug_print_msg
                                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x8a9,
                                 "Skip key_share extension in HRR");
                      lVar11 = 0;
                    }
LAB_00101173:
                    local_70 = (ushort *)((long)local_70 + lVar11);
                    goto LAB_00101178;
                  }
                  uVar6 = (uint)uVar5;
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x863,
                             "server hello, adding key share extension");
                  uVar8 = mbedtls_ssl_named_group_to_str(uVar6);
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x865,
                             "server hello, write selected_group: %s (%04x)",uVar8,uVar6,uVar8);
                  if ((param_3 < local_70) || ((long)param_3 - (long)local_70 < 8))
                  goto LAB_00100db8;
                  in_R10 = (ulong)uVar6;
                  *(undefined2 *)((long)puVar14 + 0xb) = 0x3300;
                  *(ushort *)((long)puVar14 + 0xf) = uVar5 << 8 | uVar5 >> 8;
                  local_48 = 0;
                  if ((1 < (ushort)(uVar5 - 0x1d)) &&
                     ((2 < (ushort)(uVar5 - 0x17) && (4 < (ushort)(uVar5 - 0x100))))) {
                    iVar7 = -0x6c00;
                    goto LAB_00100dbd;
                  }
                  uVar12 = (ulong)uVar6;
                  iVar7 = mbedtls_ssl_tls13_generate_and_write_xxdh_key_exchange
                                    (param_1,uVar12,(long)puVar14 + 0x13,param_3,&local_48);
                  if (iVar7 == 0) {
                    lVar11 = local_48 + 8;
                    uVar5 = (ushort)local_48;
                    *(ushort *)((long)puVar14 + 0x11) = uVar5 << 8 | uVar5 >> 8;
                    *(ushort *)((long)puVar14 + 0xd) =
                         (uVar5 + 4) * 0x100 | (ushort)(uVar5 + 4) >> 8;
                    uVar6 = mbedtls_ssl_get_extension_mask(0x33);
                    *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar6;
                    goto LAB_00101173;
                  }
                  uVar8 = 0x835;
                  pcVar13 = "mbedtls_ssl_tls13_generate_and_write_xxdh_key_exchange";
LAB_00101439:
                  mbedtls_debug_print_ret
                            (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar8,pcVar13
                             ,iVar7);
                }
                goto LAB_00100dbd;
              }
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x933,
                         "ssl_tls13_write_server_hello_supported_versions_ext",0xffff9600);
            }
          }
        }
      }
    }
  }
LAB_00100db8:
  iVar7 = -0x6a00;
LAB_00100dbd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */

int mbedtls_ssl_tls13_handshake_server_step(long *param_1)

{
  ushort *puVar1;
  long *plVar2;
  ushort *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  time_t tVar14;
  long *plVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  byte *pbVar23;
  ushort uVar24;
  char *pcVar25;
  long lVar26;
  ushort *puVar27;
  uint *puVar28;
  byte *pbVar29;
  long *plVar30;
  long lVar31;
  ushort *puVar32;
  ushort *puVar33;
  ulong uVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  byte bVar36;
  undefined8 uVar37;
  ushort *local_e8;
  ushort *local_c0;
  ulong local_98;
  ulong local_90;
  uint *local_88;
  uint *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar36 = 0;
  iVar11 = (int)param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((iVar11 == 0x1b) || (param_1[0xe] == 0)) {
    iVar11 = -0x7100;
    goto LAB_00101630;
  }
  uVar13 = mbedtls_ssl_states_str(iVar11);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd87,
             "tls13 server state: %s(%d)",uVar13,iVar11);
  iVar12 = (int)param_1[1];
  switch(iVar12) {
  case 0:
    *(undefined4 *)(param_1 + 1) = 1;
    goto LAB_00101663;
  case 1:
    local_98 = 0;
    local_90 = 0;
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x7a5,
               "=> parse client hello");
    iVar11 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1,1,&local_98,&local_90);
    uVar35 = local_90;
    uVar34 = local_98;
    if (iVar11 != 0) goto LAB_001016c7;
    puVar7 = (undefined1 *)param_1[0xe];
    local_78 = 0;
    local_70 = (undefined4 *)0x0;
    puVar27 = (ushort *)(local_98 + local_90);
    if ((CARRY8(local_98,local_90)) || ((long)local_90 < 0x26)) {
      uVar13 = 0x50f;
      goto LAB_0010254a;
    }
    sVar9 = mbedtls_ssl_read_version(local_98,*(undefined1 *)(*param_1 + 9));
    if (sVar9 != 0x303) {
      iVar11 = -0x6e80;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x519,
                 "Unsupported version of TLS.");
      mbedtls_ssl_pend_fatal_alert(param_1,0x46,0xffff9180);
      goto LAB_001016c7;
    }
    puVar16 = (ushort *)(uVar34 + 0x23);
    uVar19 = (ulong)*(byte *)(uVar34 + 0x22);
    if ((puVar27 < puVar16) || (uVar35 - 0x23 < uVar19 + 2)) {
      uVar13 = 0x534;
      goto LAB_0010254a;
    }
    uVar10 = *(ushort *)((long)puVar16 + uVar19);
    puVar1 = (ushort *)((long)puVar16 + uVar19) + 1;
    if ((uVar10 & 0x100) == 0) {
      if ((puVar27 < puVar1) ||
         (uVar35 = (ulong)(ushort)(uVar10 << 8 | uVar10 >> 8),
         (ulong)((long)puVar27 - (long)puVar1) < uVar35 + 1)) {
        uVar13 = 0x550;
LAB_0010254a:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                   "missing input data in %s","ssl_tls13_parse_client_hello");
        goto LAB_0010255c;
      }
      pbVar29 = (byte *)((long)puVar1 + uVar35);
      if ((puVar27 < pbVar29 + 1) ||
         ((ulong)((long)puVar27 - (long)(pbVar29 + 1)) < (ulong)*pbVar29 + 2)) {
        uVar13 = 0x557;
        goto LAB_0010254a;
      }
      iVar11 = mbedtls_ssl_tls13_is_supported_versions_ext_present_in_exts
                         (param_1,pbVar29 + (ulong)*pbVar29 + 1,puVar27,&local_88,&local_80);
      if (iVar11 < 0) {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x561,
                   "mbedtls_ssl_tls13_is_supported_versions_ext_present_in_exts",iVar11);
        goto LAB_001016c7;
      }
      pcVar25 = "no supported_versions extension";
      uVar13 = 0x567;
      if (iVar11 != 0) {
        if (iVar11 != 1) {
LAB_001022d6:
          lVar26 = param_1[0xd];
          lVar31 = *param_1;
          *(undefined4 *)((long)param_1 + 0x14) = 0x304;
          *(undefined4 *)(lVar26 + 4) = 0x304;
          *(undefined1 *)(lVar26 + 2) = *(undefined1 *)(lVar31 + 8);
          iVar11 = mbedtls_ssl_tls13_crypto_init(param_1);
          if (iVar11 != 0) {
LAB_00103076:
            if (-1 < iVar11) {
              iVar12 = iVar11;
              if (iVar11 == 2) goto LAB_00103089;
LAB_00102f7f:
              if ((*(code **)(*param_1 + 0x148) == (code *)0x0) ||
                 (iVar11 = (**(code **)(*param_1 + 0x148))(param_1), iVar11 == 0)) {
                lVar26 = param_1[0xe];
                *(undefined8 *)(lVar26 + 0x748) = 0;
                *(undefined8 *)(lVar26 + 0x750) = 0;
                iVar11 = mbedtls_ssl_tls13_key_schedule_stage_early(param_1);
                if (iVar11 == 0) {
                  if (iVar12 == 0) {
                    *(undefined4 *)(param_1 + 1) = 2;
                    pcVar25 = "<= parse client hello";
                    uVar13 = 0x7d6;
                  }
                  else {
                    *(undefined4 *)(param_1 + 1) = 0x12;
                    pcVar25 = "<= parse client hello";
                    uVar13 = 0x7d6;
                  }
                  goto LAB_00101d06;
                }
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x779,
                           "mbedtls_ssl_tls1_3_key_schedule_stage_early",iVar11);
              }
              else {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x76f,
                           "f_cert_cb",iVar11);
              }
            }
            goto LAB_001016c7;
          }
          uVar18 = 0x594;
          uVar37 = 0x20;
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x594,
                     "client hello, random bytes",uVar34 + 2,0x20,pcVar25);
          uVar13 = *(undefined8 *)(uVar34 + 10);
          *(undefined8 *)(puVar7 + 0x5a8) = *(undefined8 *)(uVar34 + 2);
          *(undefined8 *)(puVar7 + 0x5b0) = uVar13;
          uVar13 = *(undefined8 *)(uVar34 + 0x1a);
          *(undefined8 *)(puVar7 + 0x5b8) = *(undefined8 *)(uVar34 + 0x12);
          *(undefined8 *)(puVar7 + 0x5c0) = uVar13;
          if (uVar19 < 0x21) {
            *(ulong *)(param_1[0xd] + 0x18) = uVar19;
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x59d,
                       "client hello, session id",puVar16,uVar19,uVar18);
            pbVar23 = (byte *)(param_1[0xd] + 0x20);
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pbVar23 = (byte)*puVar16;
              puVar16 = (ushort *)((long)puVar16 + (ulong)bVar36 * -2 + 1);
              pbVar23 = pbVar23 + (ulong)bVar36 * -2 + 1;
            }
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x5a5,
                       "client hello, list of cipher suites",puVar1,uVar35,uVar18);
            ssl_tls13_select_ciphersuite(param_1,puVar1,pbVar29,0,0,puVar7 + 0x10);
            puVar28 = *(uint **)(puVar7 + 0x10);
            if (puVar28 == (uint *)0x0) {
              iVar11 = -0x6e00;
              mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
            }
            else {
              uVar35 = (ulong)*puVar28;
              *(uint *)(param_1[0xd] + 0x10) = *puVar28;
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x5b2,
                         "selected ciphersuite: %04x - %s",uVar35,*(undefined8 *)(puVar28 + 2),
                         puVar1);
              if ((*pbVar29 == 1) && (pbVar29[1] == 0)) {
                puVar16 = (ushort *)(pbVar29 + 4);
                if ((puVar16 <= puVar27) &&
                   (uVar19 = (ulong)(ushort)(*(ushort *)(pbVar29 + 2) << 8 |
                                            *(ushort *)(pbVar29 + 2) >> 8),
                   uVar19 <= (ulong)((long)puVar27 - (long)puVar16))) {
                  puVar27 = (ushort *)((long)puVar16 + uVar19);
                  puVar33 = (ushort *)0x0;
                  mbedtls_debug_print_buf
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x5d0,
                             "client hello extensions",puVar16,uVar19,uVar35);
                  uVar22 = 0;
                  *(undefined4 *)(puVar7 + 0x66c) = 0;
                  local_c0 = (ushort *)0x0;
                  local_e8 = (ushort *)0x0;
                  iVar8 = 0;
LAB_001024f4:
                  if (puVar16 < puVar27) {
                    if ((uVar22 & 0x2000) != 0) {
                      pcVar25 = "pre_shared_key is not last extension.";
                      uVar13 = 0x5e6;
                      uVar18 = 3;
                      goto LAB_00102e2f;
                    }
                    if ((long)puVar27 - (long)puVar16 < 4) {
                      uVar13 = 0x5ee;
                      goto LAB_0010254a;
                    }
                    puVar32 = puVar16 + 2;
                    if (puVar27 < puVar32) {
LAB_00103bf8:
                      uVar13 = 0x5f3;
                      goto LAB_0010254a;
                    }
                    uVar10 = puVar16[1] << 8 | puVar16[1] >> 8;
                    puVar33 = (ushort *)(ulong)uVar10;
                    if ((ushort *)((long)puVar27 - (long)puVar32) < puVar33) goto LAB_00103bf8;
                    uVar24 = *puVar16 << 8 | *puVar16 >> 8;
                    puVar3 = (ushort *)((long)puVar32 + (long)puVar33);
                    iVar11 = mbedtls_ssl_tls13_check_received_extension
                                       (param_1,1,uVar24,
                                        (-(uint)(*(char *)(param_1[0xe] + 0x39) == '\0') & 0x4000) +
                                        0x1ff7bfff);
                    if (iVar11 != 0) goto LAB_00103076;
                    switch(uVar24) {
                    case 0:
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x600,
                                 "found ServerName extension");
                      iVar11 = mbedtls_ssl_parse_server_name_ext(param_1,puVar32,puVar3);
                      if (iVar11 != 0) {
                        pcVar25 = "mbedtls_ssl_parse_servername_ext";
                        uVar13 = 0x604;
                        goto LAB_0010319d;
                      }
                      break;
                    default:
                      mbedtls_ssl_print_extension
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x68c,1,
                                 uVar24,"( ignored )",0);
                      break;
                    case 10:
                      uVar13 = 3;
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x60d,
                                 "found supported group extension");
                      mbedtls_debug_print_buf
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x34f,
                                 "supported_groups extension",puVar32,puVar33,uVar13);
                      if ((puVar33 < (ushort *)0x2) || (puVar3 < puVar32)) {
                        uVar13 = 0x350;
                      }
                      else {
                        puVar32 = puVar16 + 3;
                        if ((puVar32 <= puVar3) &&
                           (uVar35 = (ulong)(ushort)(puVar16[2] << 8 | puVar16[2] >> 8),
                           uVar35 <= (ulong)((long)puVar3 - (long)puVar32))) {
                          puVar16 = (ushort *)(uVar35 + (long)puVar32);
                          *(undefined2 *)(param_1[0xe] + 0x3c) = 0;
LAB_00103c8d:
                          if (puVar32 < puVar16) {
                            if ((long)puVar16 - (long)puVar32 == 1) {
                              uVar13 = 0x359;
                              goto LAB_00103aa3;
                            }
                            uVar10 = *puVar32;
                            puVar32 = puVar32 + 1;
                            uVar24 = uVar10 << 8 | uVar10 >> 8;
                            puVar33 = (ushort *)(ulong)uVar24;
                            uVar13 = mbedtls_ssl_named_group_to_str(puVar33);
                            mbedtls_debug_print_msg
                                      (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",
                                       0x35d,"got named group: %s(%04x)",uVar13,puVar33,uVar13);
                            uVar35 = (ulong)(uint)uVar10;
                            puVar17 = *(ushort **)(*param_1 + 0xf0);
                            if (puVar17 != (ushort *)0x0) {
                              for (; *puVar17 != 0; puVar17 = puVar17 + 1) {
                                if (uVar24 == *puVar17) {
                                  if (((((uVar10 - 0x1d00 & 0xfeff) == 0) || (uVar10 == 0x1700)) ||
                                      ((ushort)(uVar24 - 0x18) < 2)) &&
                                     ((iVar11 = mbedtls_ssl_get_ecp_group_id_from_tls_id(puVar33),
                                      iVar11 != 0 && (*(short *)(param_1[0xe] + 0x3c) == 0)))) {
                                    uVar13 = mbedtls_ssl_named_group_to_str(puVar33);
                                    mbedtls_debug_print_msg
                                              (param_1,2,
                                               "thirdparty/mbedtls/library/ssl_tls13_server.c",0x368
                                               ,"add named group %s(%04x) into received list.",
                                               uVar13,puVar33,uVar35);
                                    *(ushort *)(param_1[0xe] + 0x3c) = uVar24;
                                  }
                                  break;
                                }
                              }
                            }
                            goto LAB_00103c8d;
                          }
                          break;
                        }
                        uVar13 = 0x353;
                      }
LAB_00103aa3:
                      mbedtls_debug_print_msg
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                                 "missing input data in %s","ssl_tls13_parse_supported_groups_ext");
                      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
                      mbedtls_debug_print_ret
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x618,
                                 "ssl_tls13_parse_supported_groups_ext",0xffff8d00);
                      goto LAB_0010256e;
                    case 0xd:
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x671,
                                 "found signature_algorithms extension");
                      iVar11 = mbedtls_ssl_parse_sig_alg_ext(param_1,puVar32,puVar3);
                      if (iVar11 != 0) {
                        pcVar25 = "mbedtls_ssl_parse_sig_alg_ext";
                        uVar13 = 0x676;
                        goto LAB_0010319d;
                      }
                      break;
                    case 0x10:
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x664,
                                 "found alpn extension");
                      iVar11 = mbedtls_ssl_parse_alpn_ext(param_1,puVar32,puVar3);
                      if (iVar11 != 0) {
                        pcVar25 = "mbedtls_ssl_parse_alpn_ext";
                        uVar13 = 0x668;
                        goto LAB_0010319d;
                      }
                      break;
                    case 0x29:
                      goto switchD_00102e18_caseD_29;
                    case 0x2b:
                      break;
                    case 0x2d:
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x641,
                                 "found psk key exchange modes extension");
                      if (puVar32 < puVar3) {
                        puVar32 = (ushort *)((long)puVar16 + 5);
                        uVar35 = (ulong)(byte)puVar16[2];
                        if (uVar35 < 3) {
                          if ((puVar3 < puVar32) || ((ulong)((long)puVar3 - (long)puVar32) < uVar35)
                             ) {
                            uVar13 = 0x80;
                            goto LAB_00103594;
                          }
                          uVar22 = 0;
                          for (; puVar33 = (ushort *)(ulong)uVar22, uVar35 != 0; uVar35 = uVar35 - 1
                              ) {
                            if ((byte)*puVar32 == 0) {
                              uVar22 = uVar22 | 1;
                              pcVar25 = "Found PSK KEX MODE";
                              uVar13 = 0x86;
                            }
                            else {
                              if ((byte)*puVar32 != 1) {
                                iVar11 = -0x6600;
                                mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
                                goto LAB_001035be;
                              }
                              uVar22 = uVar22 | 4;
                              pcVar25 = "Found PSK_EPHEMERAL KEX MODE";
                              uVar13 = 0x8a;
                            }
                            mbedtls_debug_print_msg
                                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",
                                       uVar13,pcVar25);
                            puVar32 = (ushort *)((long)puVar32 + 1);
                          }
                          *(char *)(param_1[0xe] + 0x3b) = (char)uVar22;
                          uVar22 = *(uint *)(puVar7 + 0x66c);
                          puVar16 = puVar3;
                          goto LAB_001024f4;
                        }
                        iVar11 = -0x6e00;
                        mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
                      }
                      else {
                        uVar13 = 0x76;
LAB_00103594:
                        mbedtls_debug_print_msg
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                                   "missing input data in %s",
                                   "ssl_tls13_parse_key_exchange_modes_ext");
                        mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
                        iVar11 = -0x7300;
                      }
LAB_001035be:
                      mbedtls_debug_print_ret
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x647,
                                 "ssl_tls13_parse_key_exchange_modes_ext",iVar11);
                      goto LAB_001016c7;
                    case 0x33:
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x622,
                                 "found key share extension");
                      if ((uVar10 < 2) || (puVar3 < puVar32)) {
                        uVar13 = 0x396;
                      }
                      else {
                        puVar32 = puVar16 + 3;
                        if ((puVar32 <= puVar3) &&
                           (uVar35 = (ulong)(ushort)(puVar16[2] << 8 | puVar16[2] >> 8),
                           uVar35 <= (ulong)((long)puVar3 - (long)puVar32))) {
                          puVar16 = (ushort *)(uVar35 + (long)puVar32);
                          *(undefined2 *)(param_1[0xe] + 0x550) = 0;
LAB_0010362a:
                          puVar33 = puVar32;
                          if (puVar33 < puVar16) {
                            if ((long)puVar16 - (long)puVar33 < 4) {
                              uVar13 = 0x3af;
                              goto LAB_001034cd;
                            }
                            puVar32 = puVar33 + 2;
                            uVar10 = *puVar33;
                            uVar35 = (ulong)(ushort)(puVar33[1] << 8 | puVar33[1] >> 8);
                            if ((puVar16 < puVar32) ||
                               ((ulong)((long)puVar16 - (long)puVar32) < uVar35)) {
                              uVar13 = 0x3b4;
                              goto LAB_001034cd;
                            }
                            puVar32 = (ushort *)((long)puVar32 + uVar35);
                            puVar17 = *(ushort **)(*param_1 + 0xf0);
                            if (puVar17 != (ushort *)0x0) {
                              uVar24 = uVar10 << 8 | uVar10 >> 8;
                              for (; *puVar17 != 0; puVar17 = puVar17 + 1) {
                                if (uVar24 == *puVar17) {
                                  if (((uVar10 == 0x1d00 || uVar10 == 0x1700) ||
                                      ((ushort)(uVar24 - 0x18) < 2)) || (uVar10 == 0x1e00)) {
                                    uVar22 = (uint)uVar24;
                                    iVar11 = mbedtls_ssl_get_ecp_group_id_from_tls_id(uVar22);
                                    uVar19 = (ulong)uVar22;
                                    if ((iVar11 != 0) && (*(short *)(param_1[0xe] + 0x550) == 0)) {
                                      if (((uVar10 == 0x1d00 || uVar10 == 0x1700) ||
                                          (((ushort)(uVar24 - 0x18) < 2 || (uVar10 == 0x1e00)))) ||
                                         ((ushort)(uVar24 - 0x100) < 5)) {
                                        uVar13 = mbedtls_ssl_named_group_to_str();
                                        mbedtls_debug_print_msg
                                                  (param_1,2,
                                                   "thirdparty/mbedtls/library/ssl_tls13_server.c",
                                                   0x3c5,"ECDH/FFDH group: %s (%04x)",uVar13,uVar22,
                                                   uVar19);
                                        iVar11 = mbedtls_ssl_tls13_read_public_xxdhe_share
                                                           (param_1,puVar33 + 1,uVar35 + 2);
                                        if (iVar11 != 0) {
                                          if (iVar11 == 1) goto LAB_00103a08;
                                          if (-1 < iVar11) goto switchD_00102e18_caseD_2b;
                                          goto LAB_001034f7;
                                        }
                                        *(ushort *)(param_1[0xe] + 0x550) = uVar24;
                                      }
                                      else {
                                        mbedtls_debug_print_msg
                                                  (param_1,4,
                                                   "thirdparty/mbedtls/library/ssl_tls13_server.c",
                                                   0x3cf,"Unrecognized NamedGroup %u",uVar19);
                                      }
                                    }
                                  }
                                  break;
                                }
                              }
                            }
                            goto LAB_0010362a;
                          }
                          if (*(short *)(param_1[0xe] + 0x550) != 0) break;
                          mbedtls_debug_print_msg
                                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x3d9
                                     ,"no matching key share");
LAB_00103a08:
                          mbedtls_debug_print_msg
                                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x62e
                                     ,"No usable share for key agreement.");
                          uVar22 = *(uint *)(puVar7 + 0x66c);
                          puVar16 = puVar3;
                          iVar8 = iVar12;
                          goto LAB_001024f4;
                        }
                        uVar13 = 0x399;
                      }
LAB_001034cd:
                      mbedtls_debug_print_msg
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                                 "missing input data in %s","ssl_tls13_parse_key_shares_ext");
                      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
                      iVar11 = -0x7300;
LAB_001034f7:
                      mbedtls_debug_print_ret
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x633,
                                 "ssl_tls13_parse_key_shares_ext",iVar11);
                      goto LAB_001016c7;
                    }
switchD_00102e18_caseD_2b:
                    uVar22 = *(uint *)(puVar7 + 0x66c);
                    puVar16 = puVar3;
                    goto LAB_001024f4;
                  }
                  mbedtls_ssl_print_extensions
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x695,1,
                             uVar22,0,puVar27);
                  iVar11 = mbedtls_ssl_add_hs_hdr_to_checksum(param_1,1,(long)puVar16 - uVar34);
                  if (iVar11 != 0) {
                    mbedtls_debug_print_ret
                              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x69c,
                               "mbedtls_ssl_add_hs_hdr_to_checksum",iVar11);
                    goto LAB_00103076;
                  }
                  if ((puVar7[0x66d] & 0x20) != 0) {
                    iVar11 = (**(code **)(puVar7 + 0x18))(param_1,uVar34,(long)local_e8 - uVar34);
                    if (iVar11 == 0) {
                      iVar11 = ssl_tls13_parse_pre_shared_key_ext_constprop_0
                                         (param_1,local_e8,local_c0,puVar1,pbVar29,&local_78);
                      if (iVar11 == 0) {
                        if (local_78._4_4_ == 4) {
                          pcVar25 = "key exchange mode: psk_ephemeral";
                          uVar13 = 0x6d9;
                          puVar7[0x38] = 4;
                        }
                        else {
                          if (((*(byte *)(*param_1 + 0x20) & 2) != 0) &&
                             ((~*(uint *)(param_1[0xe] + 0x66c) & 0x400030) == 0))
                          goto LAB_00102f2a;
                          if (local_78._4_4_ != 1) goto LAB_0010332b;
                          pcVar25 = "key exchange mode: psk";
                          uVar13 = 0x6e7;
                          puVar7[0x38] = 1;
                        }
                        goto LAB_00102f3e;
                      }
                      if (iVar11 == -0x6c80) goto LAB_00102f06;
                      pcVar25 = "ssl_tls13_parse_pre_shared_key_ext";
                      uVar13 = 0x6b8;
                    }
                    else {
                      pcVar25 = "update_checksum";
                      uVar13 = 0x6ac;
                    }
                    goto LAB_0010319d;
                  }
                  iVar11 = (**(code **)(puVar7 + 0x18))(param_1,uVar34,(long)puVar16 - uVar34);
                  if (iVar11 == 0) {
LAB_00102f06:
                    if (((*(byte *)(*param_1 + 0x20) & 2) == 0) ||
                       ((~*(uint *)(param_1[0xe] + 0x66c) & 0x400030) != 0)) {
LAB_0010332b:
                      mbedtls_debug_print_msg
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x6eb,
                                 "ClientHello message misses mandatory extensions.",iVar11);
                      mbedtls_ssl_pend_fatal_alert(param_1,0x6d,0xffff9a00);
                      goto LAB_00102e4b;
                    }
LAB_00102f2a:
                    pcVar25 = "key exchange mode: ephemeral";
                    uVar13 = 0x6e0;
                    puVar7[0x38] = 2;
LAB_00102f3e:
                    mbedtls_debug_print_msg
                              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                               pcVar25,iVar11);
                    if ((puVar7[0x38] & 5) != 0) {
                      lVar26 = param_1[0xd];
                      uVar5 = *local_70;
                      *(undefined4 **)(puVar7 + 0x10) = local_70;
                      *(undefined4 *)(lVar26 + 0x10) = uVar5;
                      mbedtls_debug_print_msg
                                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x6f9,
                                 "Select PSK ciphersuite: %04x - %s",uVar5,
                                 *(undefined8 *)(local_70 + 2),puVar33);
                      if ((int)local_78 == 1) {
                        *puVar7 = 1;
                      }
                    }
                    iVar12 = 0;
                    if (puVar7[0x38] != '\x01') {
                      iVar12 = iVar8;
                    }
                    mbedtls_ssl_optimize_checksum(param_1,*(undefined8 *)(puVar7 + 0x10));
                    goto LAB_00102f7f;
                  }
                  pcVar25 = "update_checksum";
                  uVar13 = 0x6c1;
LAB_0010319d:
                  mbedtls_debug_print_ret
                            (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                             pcVar25,iVar11);
                  goto LAB_00103076;
                }
                uVar13 = 0x5cd;
                goto LAB_0010254a;
              }
              pcVar25 = "bad legacy compression method";
              uVar13 = 0x5bb;
              uVar18 = 1;
LAB_00102e2f:
              mbedtls_debug_print_msg
                        (param_1,uVar18,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                         pcVar25);
LAB_00102e39:
              mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
LAB_00102e4b:
              iVar11 = -0x6600;
            }
            goto LAB_001016c7;
          }
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x599,
                     "bad client hello message",uVar37);
          goto LAB_0010256e;
        }
        uVar13 = 0x316;
        if (local_88 < local_80) {
          puVar28 = (uint *)((long)local_88 + 1);
          if ((puVar28 <= local_80) &&
             ((ulong)(byte)*local_88 <= (ulong)((long)local_80 - (long)puVar28))) {
            puVar20 = (uint *)((ulong)(byte)*local_88 + (long)puVar28);
            do {
              if (puVar20 <= puVar28) {
                iVar11 = -0x6e80;
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x32e,
                           "No supported version found.");
                mbedtls_ssl_pend_fatal_alert(param_1,0x46,0xffff9180);
                goto LAB_0010316a;
              }
              if ((long)puVar20 - (long)puVar28 == 1) {
                uVar13 = 0x31d;
                goto LAB_00103140;
              }
              puVar21 = (uint *)((long)puVar28 + 2);
              sVar9 = mbedtls_ssl_read_version(puVar28,*(undefined1 *)(*param_1 + 9));
            } while ((sVar9 != 0x304) &&
                    (((puVar28 = puVar21, sVar9 != 0x303 || (0x303 < ((uint *)*param_1)[1])) ||
                     (*(uint *)*param_1 < 0x303))));
            pcVar25 = "Negotiated version: [%04x]";
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x335,
                       "Negotiated version: [%04x]",sVar9);
            if (sVar9 == 0x303) {
              pcVar25 = "supported_versions without 1.3";
              uVar13 = 0x57d;
              goto LAB_001033fa;
            }
            goto LAB_001022d6;
          }
          uVar13 = 0x31a;
        }
LAB_00103140:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                   "missing input data in %s","ssl_tls13_parse_supported_versions_ext");
        mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
        iVar11 = -0x7300;
LAB_0010316a:
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x570,
                   "ssl_tls13_parse_supported_versions_ext",iVar11);
        goto LAB_001016c7;
      }
LAB_001033fa:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,pcVar25);
LAB_00103089:
      if ((((uint *)*param_1)[1] < 0x304) && (0x302 < *(uint *)*param_1)) {
        *(undefined4 *)((long)param_1 + 0x14) = 0x303;
        *(undefined4 *)((long)param_1 + 0x13c) = 1;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x7c6,
                   "non-1.3 ClientHello left for later processing");
        goto LAB_00101663;
      }
      iVar11 = -0x6e80;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x7bd,
                 "TLS 1.2 not supported.");
      mbedtls_ssl_pend_fatal_alert(param_1,0x46,0xffff9180);
    }
    else {
LAB_0010255c:
      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
LAB_0010256e:
      iVar11 = -0x7300;
LAB_001016c7:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x7d6,
                 "<= parse client hello");
    }
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd95,
               "ssl_tls13_process_client_hello",iVar11);
    break;
  case 2:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x978,
               "=> write server hello");
    lVar26 = param_1[0xe];
    iVar11 = (**(code **)(*param_1 + 0x38))(*(undefined8 *)(*param_1 + 0x40),lVar26 + 0x5c8,0x20);
    if (iVar11 == 0) {
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x7ea,
                 "server hello, random bytes",lVar26 + 0x5c8,0x20);
      lVar26 = param_1[0xd];
      tVar14 = time((time_t *)0x0);
      *(time_t *)(lVar26 + 8) = tVar14;
      iVar11 = mbedtls_ssl_start_handshake_msg(param_1,2,&local_88,&local_80);
      if (((iVar11 == 0) &&
          (iVar11 = ssl_tls13_write_server_hello_body
                              (param_1,local_88,(byte *)((long)local_80 + (long)local_88),&local_78,
                               0), lVar26 = local_78, iVar11 == 0)) &&
         ((iVar11 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,2,local_88,local_78), iVar11 == 0 &&
          (iVar11 = mbedtls_ssl_finish_handshake_msg(param_1,local_80,lVar26), iVar11 == 0)))) {
        iVar11 = mbedtls_ssl_tls13_compute_handshake_transform(param_1);
        if (iVar11 == 0) {
          *(undefined4 *)(param_1 + 1) = 0x18;
        }
        else {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x968,
                     "mbedtls_ssl_tls13_compute_handshake_transform",iVar11);
        }
      }
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x7e6,"f_rng",iVar11);
    }
    pcVar25 = "<= write server hello";
    uVar13 = 0x999;
    goto LAB_00101a9b;
  case 3:
    lVar26 = param_1[0xe];
    plVar15 = *(long **)(lVar26 + 0x410);
    puVar27 = (ushort *)(lVar26 + 0x40);
    if ((plVar15 == (long *)0x0) && (plVar15 = *(long **)(*param_1 + 0xd0), plVar15 == (long *)0x0))
    {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x468,
                 "server has no certificate");
    }
    else {
      uVar10 = *(ushort *)(lVar26 + 0x40);
      if (uVar10 != 0) {
LAB_00101880:
        puVar16 = *(ushort **)(*param_1 + 0xe8);
        if (puVar16 != (ushort *)0x0) {
          uVar24 = *puVar16;
          while (uVar24 != 0) {
            if (uVar24 == uVar10) {
              plVar30 = plVar15;
              if (uVar24 == 0x603) goto LAB_0010205a;
              if (uVar24 < 0x604) {
                if ((uVar24 & 0xfeff) == 0x403) goto LAB_0010205a;
              }
              else if ((ushort)(uVar24 - 0x804) < 3) goto LAB_0010205a;
              break;
            }
            puVar1 = puVar16 + 1;
            puVar16 = puVar16 + 1;
            uVar24 = *puVar1;
          }
        }
        goto LAB_001018d0;
      }
LAB_001018de:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x4ac,
                 "ssl_tls13_pick_key_cert:no suitable certificate found");
    }
LAB_001018fc:
    iVar11 = -0x6e00;
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xaed,
               "No certificate available.");
    mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
    break;
  default:
    iVar11 = -0x7080;
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xe14,"invalid state %d",
               iVar12);
    break;
  case 5:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xabd,
               "=> write certificate request");
    cVar4 = *(char *)(param_1[0xe] + 2);
    if (cVar4 == '\x03') {
      cVar4 = *(char *)(*param_1 + 10);
    }
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1[0xd] + 0x78) = 0x80;
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xad3,
                 "<= skip write certificate request");
LAB_00101a85:
      *(undefined4 *)(param_1 + 1) = 3;
      iVar11 = 0;
    }
    else {
      *(undefined1 *)(param_1[0xe] + 3) = 1;
      iVar11 = mbedtls_ssl_start_handshake_msg(param_1,0xd,&local_88,&local_80);
      puVar28 = local_88;
      if (iVar11 == 0) {
        local_78 = 0;
        if ((CARRY8((ulong)local_88,(ulong)local_80)) || ((long)local_80 < 3)) {
          iVar11 = -0x6a00;
        }
        else {
          *(byte *)local_88 = 0;
          pbVar29 = (byte *)((long)local_88 + 3);
          sVar9 = (short)local_88;
          iVar11 = mbedtls_ssl_write_sig_alg_ext
                             (param_1,pbVar29,(byte *)((long)local_88 + (long)local_80),&local_78);
          if (iVar11 == 0) {
            pbVar29 = pbVar29 + local_78;
            lVar26 = (long)pbVar29 - (long)puVar28;
            uVar10 = ((short)pbVar29 - (sVar9 + 1)) - 2;
            *(ushort *)((long)puVar28 + 1) = uVar10 * 0x100 | uVar10 >> 8;
            mbedtls_ssl_print_extensions
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xab2,0xd,
                       *(undefined4 *)(param_1[0xe] + 0x668));
            iVar11 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,0xd,local_88,lVar26);
            if ((iVar11 == 0) &&
               (iVar11 = mbedtls_ssl_finish_handshake_msg(param_1,local_80,lVar26), iVar11 == 0))
            goto LAB_00101a85;
          }
        }
      }
    }
    pcVar25 = "<= write certificate request";
    uVar13 = 0xade;
LAB_00101a9b:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,pcVar25);
    break;
  case 7:
    iVar11 = mbedtls_ssl_tls13_process_certificate(param_1);
    if (iVar11 != 0) break;
    if (*(long *)(param_1[0xd] + 0x70) == 0) {
      uVar13 = 0xde9;
LAB_00102bdb:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,
                 "skip parse certificate verify");
      *(undefined4 *)(param_1 + 1) = 0xb;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0x15;
    }
    goto LAB_00101663;
  case 9:
    iVar11 = mbedtls_ssl_tls13_write_certificate_verify(param_1);
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 1) = 0xd;
    }
    break;
  case 0xb:
    iVar11 = mbedtls_ssl_tls13_process_finished_message(param_1);
    if (iVar11 != 0) break;
    iVar11 = mbedtls_ssl_tls13_compute_resumption_master_secret(param_1);
    if (iVar11 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc10,
                 "mbedtls_ssl_tls13_compute_resumption_master_secret",iVar11);
    }
    *(undefined4 *)(param_1 + 1) = 0xf;
    goto LAB_00101663;
  case 0xd:
    iVar11 = mbedtls_ssl_tls13_write_finished_message(param_1);
    if (iVar11 != 0) break;
    iVar11 = mbedtls_ssl_tls13_compute_application_transform(param_1);
    if (iVar11 != 0) {
      mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
      break;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xb61,
               "Switch to handshake keys for inbound traffic ( K_recv = handshake )");
    mbedtls_ssl_set_inbound_transform(param_1,*(undefined8 *)(param_1[0xe] + 0x680));
    if (*(char *)(param_1[0xe] + 3) == '\0') {
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xb39,
                 "skip parse certificate");
      uVar13 = 0xb3a;
      goto LAB_00102bdb;
    }
    *(undefined4 *)(param_1 + 1) = 7;
    goto LAB_00101663;
  case 0xf:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc1e,"handshake: done");
    mbedtls_ssl_tls13_handshake_wrapup(param_1);
    if ((*(byte *)(param_1[0xe] + 0x3b) & 5) == 0) goto LAB_00101eff;
    goto LAB_00101bd3;
  case 0x12:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x9c1,
               "=> write hello retry request");
    if (*(char *)(param_1[0xe] + 0x39) == '\0') {
      mbedtls_debug_print_msg
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x9af,
                 "Reset transcript for HRR");
      iVar11 = mbedtls_ssl_reset_transcript_for_hrr(param_1);
      if (iVar11 == 0) {
        mbedtls_ssl_session_reset_msg_layer(param_1,0);
        iVar11 = mbedtls_ssl_start_handshake_msg(param_1,2,&local_88,&local_80);
        if ((((iVar11 == 0) &&
             (iVar11 = ssl_tls13_write_server_hello_body
                                 (param_1,local_88,(byte *)((long)local_80 + (long)local_88),
                                  &local_78,1), lVar26 = local_78, iVar11 == 0)) &&
            (iVar11 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,2,local_88,local_78), iVar11 == 0))
           && (iVar11 = mbedtls_ssl_finish_handshake_msg(param_1,local_80,lVar26), iVar11 == 0)) {
          pcVar25 = "<= write hello retry request";
          uVar13 = 0x9e2;
          *(undefined1 *)(param_1[0xe] + 0x39) = 1;
          *(undefined4 *)(param_1 + 1) = 0x1a;
LAB_00101d06:
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,pcVar25);
          goto LAB_00101663;
        }
      }
      else {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x9b2,
                   "mbedtls_ssl_reset_transcript_for_hrr",iVar11);
      }
    }
    else {
      iVar11 = -0x6e00;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x9a6,"Too many HRRs");
      mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x9e2,
               "<= write hello retry request");
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd9c,
               "ssl_tls13_write_hello_retry_request",iVar11);
    break;
  case 0x13:
    mbedtls_ssl_set_outbound_transform(param_1,*(undefined8 *)(param_1[0xe] + 0x680));
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xa3a,
               "switching to handshake transform for outbound data");
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xa3d,
               "=> write encrypted extensions");
    iVar11 = mbedtls_ssl_start_handshake_msg(param_1,8,&local_88,&local_80);
    puVar28 = local_88;
    if (iVar11 == 0) {
      if ((CARRY8((ulong)local_88,(ulong)local_80)) || ((long)local_80 < 2)) {
        iVar11 = -0x6a00;
      }
      else {
        puVar27 = (ushort *)((long)local_88 + 2);
        iVar11 = mbedtls_ssl_write_alpn_ext
                           (param_1,puVar27,(byte *)((long)local_88 + (long)local_80),&local_78);
        if (iVar11 == 0) {
          pbVar29 = (byte *)((long)puVar27 + (local_78 - (long)puVar28));
          uVar10 = (short)pbVar29 - 2;
          *(ushort *)puVar28 = uVar10 * 0x100 | uVar10 >> 8;
          mbedtls_debug_print_buf
                    (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xa29,
                     "encrypted extensions",puVar28,pbVar29);
          mbedtls_ssl_print_extensions
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xa2b,8,
                     *(undefined4 *)(param_1[0xe] + 0x668),0);
          iVar11 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,8,local_88,pbVar29);
          if ((iVar11 == 0) &&
             (iVar11 = mbedtls_ssl_finish_handshake_msg(param_1,local_80,pbVar29), iVar11 == 0)) {
            if ((*(byte *)(param_1[0xe] + 0x38) & 5) == 0) {
              *(undefined4 *)(param_1 + 1) = 5;
            }
            else {
              *(undefined4 *)(param_1 + 1) = 0xd;
            }
            pcVar25 = "<= write encrypted extensions";
            uVar13 = 0xa59;
            goto LAB_00101d06;
          }
        }
      }
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xa59,
               "<= write encrypted extensions");
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xda8,
               "ssl_tls13_write_encrypted_extensions",iVar11);
    break;
  case 0x15:
    iVar11 = mbedtls_ssl_tls13_process_certificate_verify(param_1);
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 1) = 0xb;
    }
    break;
  case 0x18:
    iVar11 = mbedtls_ssl_tls13_write_change_cipher_spec(param_1);
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 1) = 0x13;
    }
    break;
  case 0x1a:
    iVar11 = mbedtls_ssl_tls13_write_change_cipher_spec(param_1);
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    break;
  case 0x1c:
    pcVar25 = "NewSessionTicket: disabled, callback is not set";
    uVar13 = 0xc3f;
    if (*(long *)(*param_1 + 0xa8) != 0) {
      pcVar25 = "NewSessionTicket: disabled, configured count is zero";
      uVar13 = 0xc44;
      if (*(short *)(*param_1 + 0x12) != 0) {
        if (*(short *)(param_1[0xe] + 0x3e) != 0) {
          lVar26 = param_1[0xc];
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc5d,
                     "=> prepare NewSessionTicket msg");
          bVar36 = *(byte *)(param_1[0xe] + 0x3b) & 0xd | *(byte *)(lVar26 + 0xa4) & 0xf2;
          *(byte *)(lVar26 + 0xa4) = bVar36;
          mbedtls_ssl_print_ticket_flags
                    (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc70,bVar36);
          iVar11 = (**(code **)(*param_1 + 0x38))(*(undefined8 *)(*param_1 + 0x40),lVar26 + 0xa0,4);
          if (iVar11 == 0) {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc82,
                       "ticket_age_add: %u",*(undefined4 *)(lVar26 + 0xa0));
            iVar11 = (**(code **)(*param_1 + 0x38))(*(undefined8 *)(*param_1 + 0x40),&local_68,0x20)
            ;
            if (iVar11 == 0) {
              mbedtls_debug_print_buf
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc8b,
                         "ticket_nonce:",&local_68,0x20);
              puVar6 = *(undefined4 **)(param_1[0xe] + 0x10);
              uVar22 = *(byte *)((long)puVar6 + 0x11) | 0x2000000;
              iVar11 = 0;
              switch(uVar22) {
              case 0x2000003:
                iVar11 = 0x10;
                break;
              case 0x2000004:
              case 0x2000005:
                iVar11 = 0x14;
                break;
              case 0x2000008:
              case 0x200000c:
              case 0x2000010:
                iVar11 = iVar12;
                break;
              case 0x2000009:
              case 0x200000d:
              case 0x2000011:
                iVar11 = 0x20;
                break;
              case 0x200000a:
              case 0x2000012:
                iVar11 = 0x30;
                break;
              case 0x200000b:
              case 0x2000013:
                iVar11 = -0x6c00;
                goto LAB_00102b24;
              }
              *(char *)(lVar26 + 0xa5) = (char)iVar11;
              lVar31 = (long)iVar11;
              *(undefined4 *)(lVar26 + 0x10) = *puVar6;
              iVar11 = mbedtls_ssl_tls13_hkdf_expand_label
                                 (uVar22,lVar26 + 0x1ac,lVar31,mbedtls_ssl_tls13_hkdf_expand_label,
                                  10,&local_68,0x20,lVar26 + 0xa6,lVar31);
              if (iVar11 == 0) {
                mbedtls_debug_print_buf
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xcb0,
                           "Ticket-resumed PSK",lVar26 + 0xa6,*(undefined1 *)(lVar26 + 0xa5));
                mbedtls_debug_print_buf
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xcb4,
                           "resumption_master_secret",lVar26 + 0x1ac,lVar31);
                iVar11 = mbedtls_ssl_start_handshake_msg(param_1,4,&local_88,&local_80);
                puVar28 = local_80;
                if (iVar11 == 0) {
                  lVar26 = param_1[0xc];
                  puVar20 = (uint *)((long)local_88 + (long)local_80);
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xce4,
                             "=> write NewSessionTicket msg");
                  if ((puVar20 < local_88) || (puVar28 < (uint *)0x2b)) {
LAB_00102c87:
                    iVar11 = -0x6a00;
                  }
                  else {
                    uVar13 = mbedtls_ms_time();
                    pbVar29 = (byte *)((long)local_88 + 0x2b);
                    *(undefined8 *)(lVar26 + 0x98) = uVar13;
                    iVar11 = (**(code **)(*param_1 + 0xa8))
                                       (*(undefined8 *)(*param_1 + 0xb8),lVar26,pbVar29,puVar20,
                                        &local_78,&local_90);
                    if (iVar11 == 0) {
                      if ((uint)local_90 < 0x93a81) {
                        *local_88 = (uint)local_90 >> 0x18 | ((uint)local_90 & 0xff0000) >> 8 |
                                    ((uint)local_90 & 0xff00) << 8 | (uint)local_90 << 0x18;
                        mbedtls_debug_print_msg
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd0c,
                                   "ticket_lifetime: %u");
                        uVar22 = *(uint *)(lVar26 + 0xa0);
                        local_88[1] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
                        plVar15 = param_1;
                        mbedtls_debug_print_msg
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd11,
                                   "ticket_age_add: %u",*(undefined4 *)(lVar26 + 0xa0));
                        *(byte *)(local_88 + 2) = 0x20;
                        *(undefined8 *)((long)local_88 + 9) = local_68;
                        *(undefined8 *)((long)local_88 + 0x11) = uStack_60;
                        *(undefined8 *)((long)local_88 + 0x19) = local_58;
                        *(undefined8 *)((long)local_88 + 0x21) = uStack_50;
                        *(ushort *)((long)local_88 + 0x29) =
                             (ushort)local_78 << 8 | (ushort)local_78 >> 8;
                        mbedtls_debug_print_buf
                                  (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd1e,
                                   "ticket",pbVar29,local_78,plVar15);
                        puVar28 = (uint *)(pbVar29 + local_78);
                        *(undefined4 *)(param_1[0xe] + 0x668) = 0;
                        if ((puVar20 < puVar28) || ((long)puVar20 - (long)puVar28 < 2))
                        goto LAB_00102c87;
                        *(ushort *)puVar28 = 0;
                        pbVar29 = (byte *)((long)puVar28 + (2 - (long)local_88));
                        mbedtls_debug_print_buf
                                  (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd41,
                                   "ticket",local_88,pbVar29,(long)puVar20 - (long)puVar28);
                        mbedtls_debug_print_msg
                                  (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd42,
                                   "<= write new session ticket");
                        mbedtls_ssl_print_extensions
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd44,4
                                   ,*(undefined4 *)(param_1[0xe] + 0x668),0);
                        iVar11 = mbedtls_ssl_finish_handshake_msg(param_1,local_80,pbVar29);
                        if (iVar11 == 0) {
                          pcVar25 = (char *)param_1[0xe];
                          if (*pcVar25 == '\x01') {
                            sVar9 = 0;
                          }
                          else {
                            sVar9 = *(short *)(pcVar25 + 0x3e) + -1;
                          }
                          *(short *)(pcVar25 + 0x3e) = sVar9;
                          *(undefined4 *)(param_1 + 1) = 0x1d;
                          goto LAB_00101663;
                        }
                      }
                      else {
                        iVar11 = -0x7100;
                        mbedtls_debug_print_msg
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xd05,
                                   "Ticket lifetime (%u) is greater than 7 days.");
                      }
                    }
                    else {
                      mbedtls_debug_print_ret
                                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xcf9,
                                 "write_ticket",iVar11);
                    }
                  }
                }
              }
              else {
                mbedtls_debug_print_ret
                          (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xcab,
                           "Creating the ticket-resumed PSK failed",iVar11);
              }
            }
            else {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc88,
                         "generate_ticket_nonce",iVar11);
            }
          }
          else {
            iVar11 = 1;
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xc7f,
                       "generate_ticket_age_add",1);
          }
LAB_00102b24:
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_server.c",0xdfd,
                     "ssl_tls13_write_new_session_ticket ",iVar11);
          break;
        }
        pcVar25 = "NewSessionTicket: all tickets have been sent.";
        uVar13 = 0xc4a;
      }
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_server.c",uVar13,pcVar25);
LAB_00101eff:
    *(undefined4 *)(param_1 + 1) = 0x1b;
    goto LAB_00101663;
  case 0x1d:
    if (*(short *)(param_1[0xe] + 0x3e) == 0) goto LAB_00101eff;
LAB_00101bd3:
    *(undefined4 *)(param_1 + 1) = 0x1c;
LAB_00101663:
    iVar11 = 0;
  }
LAB_00101630:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010205a:
  do {
    mbedtls_debug_print_crt
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x47b,
               "certificate (chain) candidate",*plVar30);
    iVar11 = mbedtls_x509_crt_check_key_usage(*plVar30,0x80);
    if ((iVar11 == 0) &&
       (iVar11 = mbedtls_x509_crt_check_extended_key_usage(*plVar30,&_LC121,8), iVar11 == 0)) {
      uVar34 = (ulong)*puVar27;
      uVar13 = mbedtls_ssl_sig_alg_to_str(uVar34);
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x48c,
                 "ssl_tls13_pick_key_cert:check signature algorithm %s [%04x]",uVar13);
      iVar11 = mbedtls_ssl_tls13_check_sig_alg_cert_key_match(*puVar27,*plVar30 + 0x168);
      if (iVar11 != 0) {
        uVar10 = *puVar27;
        *(long **)(param_1[0xe] + 0x408) = plVar30;
        uVar13 = mbedtls_ssl_sig_alg_to_str(uVar10,uVar34);
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x49e,
                   "ssl_tls13_pick_key_cert:selected signature algorithm %s [%04x]",uVar13,uVar10);
        mbedtls_debug_print_crt
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x4a4,
                   "selected certificate (chain)",**(undefined8 **)(param_1[0xe] + 0x408));
        if ((((param_1[0xe] == 0) ||
             (plVar15 = *(long **)(param_1[0xe] + 0x408), plVar15 == (long *)0x0)) &&
            (plVar15 = *(long **)(*param_1 + 0xd0), plVar15 == (long *)0x0)) || (*plVar15 == 0))
        goto LAB_001018fc;
        iVar11 = mbedtls_ssl_tls13_write_certificate(param_1);
        if (iVar11 == 0) {
          *(undefined4 *)(param_1 + 1) = 9;
        }
        goto LAB_00101630;
      }
    }
    else {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x487,
                 "certificate mismatch: (extended) key usage extension");
    }
    plVar2 = plVar30 + 2;
    plVar30 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
LAB_001018d0:
  uVar10 = puVar27[1];
  puVar27 = puVar27 + 1;
  if (uVar10 == 0) goto LAB_001018de;
  goto LAB_00101880;
switchD_00102e18_caseD_29:
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_server.c",0x650,
             "found pre_shared_key extension");
  uVar22 = *(uint *)(puVar7 + 0x66c);
  puVar16 = puVar3;
  local_e8 = puVar32;
  local_c0 = puVar3;
  if ((uVar22 & 0x20000) == 0) goto LAB_00102e39;
  goto LAB_001024f4;
}


