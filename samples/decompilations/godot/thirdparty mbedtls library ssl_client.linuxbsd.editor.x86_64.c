
int mbedtls_ssl_write_client_hello(long *param_1)

{
  ushort *puVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  long lVar13;
  size_t sVar14;
  time_t tVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  char *pcVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ushort *puVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  ushort *puVar29;
  long in_FS_OFFSET;
  bool bVar30;
  uint *puVar31;
  uint uVar32;
  ulong *puVar33;
  ushort *local_60;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_client.c",0x399,"=> write client hello");
  lVar17 = param_1[0xd];
  if (lVar17 == 0) {
    iVar7 = -0x6c00;
  }
  else {
    pcVar11 = (char *)param_1[0xe];
    if (*pcVar11 == '\0') {
LAB_00100790:
      if (*(int *)((long)param_1 + 0xc) == 0) {
LAB_00100800:
        lVar13 = *param_1;
        *(undefined4 *)(pcVar11 + 8) = *(undefined4 *)(lVar13 + 4);
        iVar7 = *(int *)((long)param_1 + 0x14);
        goto LAB_00100089;
      }
LAB_00100797:
      iVar7 = *(int *)((long)param_1 + 0x14);
      lVar13 = *param_1;
      *(int *)(pcVar11 + 8) = iVar7;
      if (*(char *)(lVar13 + 9) == '\x01') goto LAB_001007ab;
LAB_00100093:
      if (pcVar11[0x39] == '\0') {
        pcVar20 = pcVar11 + 0x5a8;
        uVar16 = 0x20;
        if (iVar7 == 0x303) {
          tVar15 = time((time_t *)0x0);
          uVar10 = (uint)tVar15;
          *(uint *)(pcVar11 + 0x5a8) =
               uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x2d4,
                     "client hello, current time: %lld",tVar15);
          lVar13 = *param_1;
          uVar16 = 0x1c;
          pcVar20 = pcVar11 + 0x5ac;
        }
        iVar7 = (**(code **)(lVar13 + 0x38))(*(undefined8 *)(lVar13 + 0x40),pcVar20,uVar16);
        if (iVar7 != 0) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x322,
                     "Random bytes generation failed",iVar7);
          goto LAB_0010082e;
        }
        iVar7 = *(int *)((long)param_1 + 0x14);
      }
      lVar13 = *(long *)(lVar17 + 0x18);
      if (iVar7 != 0x303) goto LAB_001000ae;
LAB_001007c9:
      if (0x10 < lVar13 - 0x10U) {
        if (((*(int *)((long)param_1 + 0xc) != 0) || (*(long *)(lVar17 + 0x80) == 0)) ||
           (*(long *)(lVar17 + 0x88) == 0)) {
          if (lVar13 != 0) goto LAB_001007eb;
          goto LAB_001000e3;
        }
        goto LAB_001000bb;
      }
      if (*(int *)((long)param_1 + 0xc) == 0) {
        if (*(char *)param_1[0xe] == '\0') {
          if ((*(long *)(lVar17 + 0x80) == 0) || (*(long *)(lVar17 + 0x88) == 0)) goto LAB_001007eb;
        }
        else if ((*(long *)(lVar17 + 0x80) == 0) || (*(long *)(lVar17 + 0x88) == 0))
        goto LAB_001000e3;
        goto joined_r0x001009ba;
      }
LAB_001007eb:
      *(undefined8 *)(lVar17 + 0x18) = 0;
    }
    else {
      iVar7 = *(int *)(lVar17 + 4);
      if ((iVar7 == 0x304) && (*(long *)(lVar17 + 0x80) != 0)) {
        lVar13 = mbedtls_ms_time();
        lVar13 = lVar13 - *(long *)(lVar17 + 0xe0);
        if ((lVar13 < 0) || ((long)((ulong)*(uint *)(lVar17 + 0x90) * 1000) < lVar13)) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x2f8,
                     "Ticket expired, disable session resumption");
          pcVar11 = (char *)param_1[0xe];
          *pcVar11 = '\0';
          goto LAB_00100790;
        }
        pcVar11 = (char *)param_1[0xe];
        if (*(int *)((long)param_1 + 0xc) != 0) goto LAB_00100797;
        if (*pcVar11 != '\0') {
          iVar7 = *(int *)(lVar17 + 4);
          goto LAB_0010007f;
        }
        goto LAB_00100800;
      }
      if (*(int *)((long)param_1 + 0xc) != 0) goto LAB_00100797;
LAB_0010007f:
      *(int *)((long)param_1 + 0x14) = iVar7;
      lVar13 = *param_1;
      *(int *)(pcVar11 + 8) = iVar7;
LAB_00100089:
      if (*(char *)(lVar13 + 9) != '\x01') goto LAB_00100093;
LAB_001007ab:
      if (*(long *)(pcVar11 + 0x4b0) == 0) goto LAB_00100093;
      lVar13 = *(long *)(lVar17 + 0x18);
      if (iVar7 == 0x303) goto LAB_001007c9;
LAB_001000ae:
      if (iVar7 == 0x304) {
joined_r0x001009ba:
        if (lVar13 != 0x20) {
LAB_001000bb:
          lVar13 = *param_1;
          *(undefined8 *)(lVar17 + 0x18) = 0x20;
          iVar7 = (**(code **)(lVar13 + 0x38))(*(undefined8 *)(lVar13 + 0x40),lVar17 + 0x20,0x20);
          if (iVar7 != 0) {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x36c,
                       "creating session id failed",iVar7);
            goto LAB_0010082e;
          }
        }
      }
    }
LAB_001000e3:
    pcVar11 = (char *)mbedtls_ssl_get_hostname_pointer(param_1);
    if ((*(int *)((long)param_1 + 0x14) == 0x304) && (*(char *)param_1[0xe] != '\0')) {
      pcVar20 = *(char **)(lVar17 + 0xd8);
      if (pcVar11 == (char *)0x0) {
        if (pcVar20 == (char *)0x0) goto LAB_0010012f;
      }
      else if ((pcVar20 != (char *)0x0) && (iVar7 = strcmp(pcVar11,pcVar20), iVar7 == 0)) {
LAB_0010012f:
        iVar7 = mbedtls_ssl_start_handshake_msg(param_1,1,&local_60,&local_58);
        puVar5 = local_60;
        if (iVar7 != 0) goto LAB_0010082e;
        lVar17 = param_1[0xe];
        local_50 = 0;
        puVar1 = (ushort *)((long)local_60 + local_58);
        if (*(uint *)(lVar17 + 8) < 0x304) {
          uVar10 = *(uint *)((long)param_1 + 0x14);
          bVar2 = 0x302 < uVar10;
LAB_00100900:
          uVar10 = (uint)(0x303 < uVar10);
        }
        else {
          bVar2 = false;
          uVar10 = 0;
          if (*(uint *)(lVar17 + 8) == 0x304) {
            uVar10 = *(uint *)((long)param_1 + 0x14);
            goto LAB_00100900;
          }
        }
        if ((local_60 <= puVar1) && (1 < local_58)) {
          lVar13 = local_58;
          mbedtls_ssl_write_version(local_60,*(undefined1 *)(*param_1 + 9),0x303);
          if ((puVar5 + 1 <= puVar1) && (0x21 < lVar13)) {
            uVar16 = *(undefined8 *)(lVar17 + 0x5b0);
            *(undefined8 *)(puVar5 + 1) = *(undefined8 *)(lVar17 + 0x5a8);
            *(undefined8 *)(puVar5 + 5) = uVar16;
            uVar16 = *(undefined8 *)(lVar17 + 0x5c0);
            *(undefined8 *)(puVar5 + 9) = *(undefined8 *)(lVar17 + 0x5b8);
            *(undefined8 *)(puVar5 + 0xd) = uVar16;
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x1e7,
                       "client hello, random bytes",puVar5 + 1,0x20);
            if ((puVar5 + 0x11 <= puVar1) && (*(long *)(param_1[0xd] + 0x18) + 1U <= lVar13 - 0x22U)
               ) {
              *(char *)(puVar5 + 0x11) = (char)*(long *)(param_1[0xd] + 0x18);
              pvVar12 = memcpy((void *)((long)puVar5 + 0x23),(void *)(param_1[0xd] + 0x20),
                               *(size_t *)(param_1[0xd] + 0x18));
              lVar13 = *(long *)(param_1[0xd] + 0x18);
              uVar22 = param_1[0xd] + 0x20;
              puVar25 = (ushort *)((long)pvVar12 + lVar13);
              mbedtls_debug_print_buf
                        (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x200,"session id",
                         uVar22,lVar13);
              lVar13 = *param_1;
              if (*(char *)(lVar13 + 9) == '\x01') {
                uVar22 = *(ulong *)(lVar17 + 0x4b0);
                uVar6 = 0;
                if (uVar22 != 0) {
                  mbedtls_debug_print_buf
                            (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x211,
                             "client hello, cookie",uVar22,*(undefined2 *)(lVar17 + 0x4b8));
                  uVar6 = *(ushort *)(lVar17 + 0x4b8);
                }
                if ((puVar1 < puVar25) || ((ulong)((long)puVar1 - (long)puVar25) < (ulong)uVar6 + 1)
                   ) goto LAB_00100916;
                *(char *)puVar25 = (char)uVar6;
                puVar25 = (ushort *)((long)puVar25 + 1);
                if (uVar6 == 0) {
                  lVar13 = *param_1;
                }
                else {
                  uVar24 = (ulong)uVar6;
                  pvVar12 = memcpy(puVar25,*(void **)(lVar17 + 0x4b0),uVar24);
                  puVar25 = (ushort *)(uVar24 + (long)pvVar12);
                  lVar13 = *param_1;
                }
              }
              local_48 = 0;
              puVar31 = *(uint **)(lVar13 + 0x18);
              if ((puVar25 <= puVar1) && (1 < (long)puVar1 - (long)puVar25)) {
                uVar9 = *puVar31;
                puVar26 = puVar25 + 1;
                uVar24 = (ulong)uVar9;
                puVar29 = puVar26;
                if (uVar9 != 0) {
                  uVar24 = 0;
                  puVar19 = puVar26;
                  do {
                    puVar31 = puVar31 + 1;
                    lVar13 = mbedtls_ssl_ciphersuite_from_id(uVar9);
                    iVar7 = mbedtls_ssl_validate_ciphersuite
                                      (param_1,lVar13,*(undefined4 *)(param_1[0xe] + 8),
                                       *(undefined4 *)((long)param_1 + 0x14));
                    uVar32 = (uint)uVar24;
                    uVar23 = uVar22;
                    puVar26 = puVar19;
                    if (iVar7 == 0) {
                      uVar8 = mbedtls_ssl_ciphersuite_uses_ec(lVar13);
                      uVar23 = (ulong)uVar9;
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x172,
                                 "client hello, add ciphersuite: %04x, %s",uVar23,
                                 *(undefined8 *)(lVar13 + 8),uVar22);
                      if ((puVar1 < puVar19) || ((long)puVar1 - (long)puVar19 < 2))
                      goto LAB_00100916;
                      uVar24 = (ulong)(uVar32 | uVar8);
                      puVar26 = puVar19 + 1;
                      *puVar19 = (ushort)uVar9 << 8 | (ushort)uVar9 >> 8;
                    }
                    uVar9 = *puVar31;
                    uVar22 = uVar23;
                    puVar19 = puVar26;
                  } while (uVar9 != 0);
                }
                if (*(int *)((long)param_1 + 0xc) == 0) {
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x184,
                             "adding EMPTY_RENEGOTIATION_INFO_SCSV");
                  if ((puVar1 < puVar26) || ((long)puVar1 - (long)puVar26 < 2)) goto LAB_00100916;
                  *puVar26 = 0xff00;
                  puVar26 = puVar26 + 1;
                }
                uVar6 = (ushort)((long)puVar26 - (long)puVar29);
                *puVar25 = uVar6 << 8 | uVar6 >> 8;
                mbedtls_debug_print_msg
                          (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x18d,
                           "client hello, got %zu cipher suites",
                           (ulong)((long)puVar26 - (long)puVar29) >> 1,puVar26,uVar24,puVar25);
                local_48 = (long)puVar26 - (long)puVar25;
                if ((puVar26 <= puVar1) && (1 < (long)puVar1 - (long)puVar26)) {
                  puVar25 = puVar26 + 1;
                  *puVar26 = 1;
                  *(undefined4 *)(lVar17 + 0x668) = 0;
                  if ((puVar25 <= puVar1) && (1 < (long)puVar1 - (long)puVar25)) {
                    puVar29 = puVar26 + 2;
                    pcVar11 = (char *)mbedtls_ssl_get_hostname_pointer();
                    local_48 = 0;
                    if (pcVar11 != (char *)0x0) {
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x29,
                                 "client hello, adding server name extension: %s",pcVar11);
                      sVar14 = strlen(pcVar11);
                      if ((puVar1 < puVar29) ||
                         (uVar22 = sVar14 + 9, (ulong)((long)puVar1 - (long)puVar29) < uVar22))
                      goto LAB_00100916;
                      uVar6 = (ushort)sVar14;
                      puVar26[3] = (uVar6 + 5) * 0x100 | (ushort)(uVar6 + 5) >> 8;
                      puVar26[2] = 0;
                      puVar26[4] = (uVar6 + 3) * 0x100 | (ushort)(uVar6 + 3) >> 8;
                      *(undefined1 *)(puVar26 + 5) = 0;
                      *(ushort *)((long)puVar26 + 0xb) = uVar6 << 8 | uVar6 >> 8;
                      memcpy((void *)((long)puVar26 + 0xd),pcVar11,sVar14);
                      local_48 = uVar22;
                      uVar9 = mbedtls_ssl_get_extension_mask(0);
                      *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar9;
                    }
                    puVar29 = (ushort *)((long)puVar29 + local_48);
                    local_48 = 0;
                    if (*(long *)(*param_1 + 0x118) != 0) {
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x80,
                                 "client hello, adding alpn extension");
                      if ((puVar1 < puVar29) || ((long)puVar1 - (long)puVar29 < 6))
                      goto LAB_00100916;
                      *puVar29 = 0x1000;
                      puVar19 = puVar29 + 3;
                      for (puVar18 = *(undefined8 **)(*param_1 + 0x118);
                          (char *)*puVar18 != (char *)0x0; puVar18 = puVar18 + 1) {
                        sVar14 = strlen((char *)*puVar18);
                        if ((puVar1 < puVar19) ||
                           ((ulong)((long)puVar1 - (long)puVar19) < sVar14 + 1)) goto LAB_00100916;
                        *(char *)puVar19 = (char)sVar14;
                        pvVar12 = memcpy((void *)((long)puVar19 + 1),(void *)*puVar18,sVar14);
                        puVar19 = (ushort *)((long)pvVar12 + sVar14);
                      }
                      local_48 = (long)puVar19 - (long)puVar29;
                      uVar6 = (short)local_48 - 6;
                      puVar29[2] = uVar6 * 0x100 | uVar6 >> 8;
                      uVar6 = (short)local_48 - 4;
                      puVar29[1] = uVar6 * 0x100 | uVar6 >> 8;
                      uVar9 = mbedtls_ssl_get_extension_mask(0x10);
                      *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar9;
                    }
                    puVar29 = (ushort *)((long)puVar29 + local_48);
                    bVar4 = bVar2;
                    if (uVar10 == 0) {
                      if (((int)uVar24 != 0) && (bVar2)) {
                        lVar17 = *param_1;
                        uVar9 = 0;
LAB_00100b69:
                        uVar22 = (ulong)uVar9 | 1;
                        bVar4 = true;
LAB_00100b75:
                        puVar19 = *(ushort **)(lVar17 + 0xf0);
                        local_48 = 0;
                        mbedtls_debug_print_msg
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0xe7,
                                   "client hello, adding supported_groups extension");
                        if ((puVar29 <= puVar1) && (5 < (long)puVar1 - (long)puVar29)) {
                          if (puVar19 == (ushort *)0x0) {
                            iVar7 = -0x5e80;
                          }
                          else {
                            uVar23 = uVar22 & 1;
                            uVar3 = uVar22 & 1;
                            puVar27 = puVar29 + 3;
                            for (; *puVar19 != 0; puVar19 = puVar19 + 1) {
                              mbedtls_debug_print_msg
                                        (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0xfa,
                                         "got supported group(%04x)");
                              puVar28 = puVar27;
                              if (((uVar22 & 2) == 0) ||
                                 ((1 < (ushort)(*puVar19 - 0x1d) && (2 < (ushort)(*puVar19 - 0x17)))
                                 )) {
                                if (uVar23 != 0) {
                                  bVar30 = false;
                                  goto LAB_00100c5d;
                                }
                              }
                              else {
                                iVar7 = mbedtls_ssl_get_ecp_group_id_from_tls_id();
                                bVar30 = iVar7 != 0;
                                if (uVar3 == 0) {
LAB_00100c7e:
                                  if (!bVar30) goto LAB_00100ce6;
                                }
                                else {
LAB_00100c5d:
                                  if ((0xc < (ushort)(*puVar19 - 0x12)) ||
                                     (iVar7 = mbedtls_ssl_get_ecp_group_id_from_tls_id(), iVar7 == 0
                                     )) goto LAB_00100c7e;
                                }
                                if ((puVar1 < puVar27) || ((long)puVar1 - (long)puVar27 < 2))
                                goto LAB_00100916;
                                puVar28 = puVar27 + 1;
                                *puVar27 = *puVar19 << 8 | *puVar19 >> 8;
                                uVar6 = *puVar19;
                                uVar16 = mbedtls_ssl_named_group_to_str(uVar6);
                                mbedtls_debug_print_msg
                                          (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x11a
                                           ,"NamedGroup: %s ( %x )",uVar16,uVar6,uVar16);
                              }
LAB_00100ce6:
                              puVar27 = puVar28;
                            }
                            lVar17 = (long)puVar27 - (long)(puVar29 + 3);
                            if (lVar17 != 0) {
                              uVar6 = (ushort)lVar17;
                              puVar29[1] = (uVar6 + 2) * 0x100 | (ushort)(uVar6 + 2) >> 8;
                              *puVar29 = 0xa00;
                              puVar29[2] = uVar6 << 8 | uVar6 >> 8;
                              mbedtls_debug_print_buf
                                        (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x12e,
                                         "Supported groups extension",puVar29 + 2,lVar17 + 2,uVar10)
                              ;
                              local_48 = (long)puVar27 - (long)puVar29;
                              uVar9 = mbedtls_ssl_get_extension_mask(10);
                              puVar29 = (ushort *)((long)puVar29 + local_48);
                              *(uint *)(param_1[0xe] + 0x668) =
                                   *(uint *)(param_1[0xe] + 0x668) | uVar9;
                              if (uVar10 != 0) {
                                lVar17 = *param_1;
                                goto LAB_00100dae;
                              }
                              goto LAB_001010d1;
                            }
                            iVar7 = -0x6c00;
                            mbedtls_debug_print_msg
                                      (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x123,
                                       "No group available.");
                          }
                          goto LAB_0010082e;
                        }
                        goto LAB_00100916;
                      }
LAB_001010d1:
                      if (bVar2) goto LAB_001010da;
                    }
                    else {
                      iVar7 = mbedtls_ssl_tls13_write_client_hello_exts(param_1,puVar29,puVar1);
                      if (iVar7 != 0) goto LAB_0010082e;
                      lVar17 = *param_1;
                      puVar29 = (ushort *)((long)puVar29 + local_48);
                      uVar9 = *(uint *)(lVar17 + 0x20) & 6;
                      if (((int)uVar24 != 0) && (bVar2)) {
                        uVar9 = (uint)(uVar9 != 0) * 2;
                        goto LAB_00100b69;
                      }
                      if (uVar9 != 0) {
                        uVar22 = 2;
                        goto LAB_00100b75;
                      }
LAB_00100dae:
                      if ((*(uint *)(lVar17 + 0x20) >> 1 & 1) != 0 || bVar2) {
LAB_001010da:
                        puVar33 = &local_48;
                        iVar7 = mbedtls_ssl_write_sig_alg_ext(param_1,puVar29,puVar1,puVar33);
                        if (iVar7 != 0) goto LAB_0010082e;
                        puVar29 = (ushort *)((long)puVar29 + local_48);
                        if (bVar4) {
                          iVar7 = mbedtls_ssl_tls12_write_client_hello_exts
                                            (param_1,puVar29,puVar1,uVar24 & 0xffffffff,puVar33);
                          if (iVar7 != 0) goto LAB_0010082e;
                          puVar29 = (ushort *)((long)puVar29 + local_48);
                        }
                        if (uVar10 == 0) goto LAB_00100dc9;
                        lVar17 = *param_1;
                      }
                      if ((*(byte *)(lVar17 + 0x20) & 5) != 0) {
                        iVar7 = mbedtls_ssl_tls13_write_identities_of_pre_shared_key_ext
                                          (param_1,puVar29,puVar1,&local_48,&local_50);
                        if (iVar7 != 0) goto LAB_0010082e;
                        puVar29 = (ushort *)((long)puVar29 + local_48);
                      }
                    }
LAB_00100dc9:
                    lVar17 = (long)puVar29 + (-2 - (long)puVar25);
                    if (lVar17 != 0) {
                      puVar26[1] = (ushort)lVar17 << 8 | (ushort)lVar17 >> 8;
                      plVar21 = param_1;
                      mbedtls_debug_print_msg
                                (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x2b1,
                                 "client hello, total extension length: %zu",lVar17);
                      mbedtls_debug_print_buf
                                (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x2b3,
                                 "client hello extensions",puVar25,lVar17,plVar21);
                      puVar25 = puVar29;
                    }
                    lVar17 = (long)puVar25 - (long)puVar5;
                    if (*(char *)(*param_1 + 9) == '\x01') {
                      param_1[0x32] = lVar17 + 4;
                      mbedtls_ssl_send_flight_completed(param_1);
                      *(undefined4 *)(param_1 + 1) = 2;
                      iVar7 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
                      if (iVar7 != 0) {
                        mbedtls_debug_print_ret
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x3b7,
                                   "mbedtls_ssl_write_handshake_msg",iVar7);
                        goto LAB_0010084c;
                      }
                      iVar7 = mbedtls_ssl_flight_transmit(param_1);
                      if (iVar7 != 0) {
                        mbedtls_debug_print_ret
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x3bc,
                                   "mbedtls_ssl_flight_transmit",iVar7);
                        goto LAB_0010084c;
                      }
LAB_00100f36:
                      lVar17 = param_1[0xe];
                    }
                    else {
                      iVar7 = mbedtls_ssl_add_hs_hdr_to_checksum(param_1,1,lVar17);
                      if (iVar7 != 0) {
                        mbedtls_debug_print_ret
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x3c7,
                                   "mbedtls_ssl_add_hs_hdr_to_checksum",iVar7);
                        goto LAB_0010084c;
                      }
                      iVar7 = (**(code **)(param_1[0xe] + 0x18))(param_1,local_60,lVar17 - local_50)
                      ;
                      if (iVar7 != 0) {
                        mbedtls_debug_print_ret
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x3cc,
                                   "update_checksum",iVar7);
                        goto LAB_0010084c;
                      }
                      if (local_50 != 0) {
                        iVar7 = mbedtls_ssl_tls13_write_binders_of_pre_shared_key_ext
                                          (param_1,(long)local_60 + (lVar17 - local_50),
                                           (long)local_60 + lVar17);
                        if (iVar7 != 0) goto LAB_0010082e;
                        iVar7 = (**(code **)(param_1[0xe] + 0x18))
                                          (param_1,(lVar17 - local_50) + (long)local_60);
                        if (iVar7 != 0) {
                          mbedtls_debug_print_ret
                                    (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x3d7,
                                     "update_checksum",iVar7);
                          goto LAB_0010084c;
                        }
                      }
                      iVar7 = mbedtls_ssl_finish_handshake_msg(param_1,local_58,lVar17);
                      if (iVar7 != 0) goto LAB_0010082e;
                      lVar17 = param_1[0xe];
                      *(undefined4 *)(param_1 + 1) = 2;
                      if ((*(uint *)(lVar17 + 8) < 0x305) &&
                         (0x303 < *(uint *)((long)param_1 + 0x14))) {
                        iVar7 = mbedtls_ssl_tls13_finalize_client_hello(param_1);
                        goto LAB_00100f36;
                      }
                    }
                    mbedtls_ssl_print_extensions
                              (param_1,3,"thirdparty/mbedtls/library/ssl_client.c",0x3f0,1,
                               *(undefined4 *)(lVar17 + 0x668),0);
                    goto LAB_0010082e;
                  }
                }
              }
            }
          }
        }
LAB_00100916:
        iVar7 = -0x6a00;
        goto LAB_0010082e;
      }
      iVar7 = -0x7100;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_client.c",0x380,
                 "Hostname mismatch the session ticket, disable session resumption.");
    }
    else {
      iVar7 = mbedtls_ssl_session_set_hostname(lVar17,pcVar11);
      if (iVar7 == 0) goto LAB_0010012f;
    }
  }
LAB_0010082e:
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_client.c",0x3f6,"<= write client hello");
LAB_0010084c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


