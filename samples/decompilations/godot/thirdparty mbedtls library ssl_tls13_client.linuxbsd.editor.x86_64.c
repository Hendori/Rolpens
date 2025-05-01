
undefined1  [16]
ssl_tls13_write_identity
          (undefined8 param_1,ushort *param_2,ushort *param_3,void *param_4,size_t param_5,
          uint param_6,ulong *param_7)

{
  ushort *puVar1;
  undefined1 auVar2 [16];
  
  *param_7 = 0;
  if (param_2 <= param_3) {
    puVar1 = (ushort *)(param_5 + 6);
    param_3 = (ushort *)((long)param_3 - (long)param_2);
    if (puVar1 <= param_3) {
      *param_2 = (ushort)param_5 << 8 | (ushort)param_5 >> 8;
      memcpy(param_2 + 1,param_4,param_5);
      *(uint *)((long)param_2 + param_5 + 2) =
           param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 | param_6 << 0x18;
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x330,"write identity",
                 param_2,puVar1);
      *param_7 = (ulong)puVar1;
      return ZEXT816(0x100072) << 0x40;
    }
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = 0xffff9600;
  return auVar2;
}



ulong ssl_tls13_write_binder
                (undefined8 param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5,
                undefined8 param_6,undefined8 param_7,ulong *param_8)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  uVar1 = (param_5 & 0xff | 0x2000000) + 0xfdfffffd;
  *param_8 = 0;
  if (uVar1 < 0x11) {
    bVar3 = CSWTCH_217[uVar1];
    uVar4 = (ulong)(bVar3 + 1 & 0xff);
  }
  else {
    uVar4 = 1;
    bVar3 = 0;
  }
  uVar2 = 0xffff9600;
  if ((param_2 <= param_3) && (uVar4 <= (ulong)((long)param_3 - (long)param_2))) {
    *param_2 = bVar3;
    uVar2 = mbedtls_ssl_get_handshake_transcript(param_1,param_5 & 0xff,local_88,0x40,&local_90);
    if ((int)uVar2 == 0) {
      uVar1 = mbedtls_ssl_tls13_create_psk_binder
                        (param_1,param_5,param_6,param_7,param_4,local_88,param_2 + 1);
      if (uVar1 == 0) {
        mbedtls_debug_print_buf
                  (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x361,"write binder",
                   param_2,uVar4);
        *param_8 = uVar4;
        uVar2 = 0;
      }
      else {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x35e,
                   "mbedtls_ssl_tls13_create_psk_binder",uVar1);
        uVar2 = (ulong)uVar1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ssl_tls13_reset_key_share(long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(*(long *)(param_1 + 0x70) + 0x550);
  if ((sVar1 == 0) ||
     (((2 < (ushort)(sVar1 - 0x17U) && (1 < (ushort)(sVar1 - 0x1dU))) &&
      (4 < (ushort)(sVar1 - 0x100U))))) {
    uVar3 = 0xffff9400;
  }
  else {
    iVar2 = psa_destroy_key(*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x1c8));
    if (iVar2 != 0) {
      uVar3 = psa_status_to_mbedtls(iVar2,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xc1,"psa_destroy_key",
                 uVar3);
      return uVar3;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x1c8) = 0;
    uVar3 = 0;
  }
  return uVar3;
}



uint ssl_tls13_get_configured_psk_count(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = param_1[0xd];
  uVar3 = 0;
  if ((((*(char *)param_1[0xe] == '\0') || (uVar3 = 0, lVar1 == 0)) ||
      (*(long *)(lVar1 + 0x80) == 0)) ||
     (uVar3 = *(byte *)(lVar1 + 0xa4) & 5 & *(uint *)(*param_1 + 0x20), uVar3 == 0)) {
    iVar2 = mbedtls_ssl_conf_has_static_psk();
  }
  else {
    uVar3 = 1;
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x30e,
               "Ticket is configured");
    iVar2 = mbedtls_ssl_conf_has_static_psk(*param_1);
  }
  if (iVar2 == 0) {
    return uVar3;
  }
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x313,"PSK is configured");
  return uVar3 + 1;
}



undefined8
mbedtls_ssl_tls13_write_identities_of_pre_shared_key_ext
          (long *param_1,undefined2 *param_2,undefined2 *param_3,long *param_4,ulong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined2 *local_68;
  long local_60;
  uint local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  *param_5 = 0;
  iVar2 = ssl_tls13_get_configured_psk_count();
  if (iVar2 == 0) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x392,
               "skip pre_shared_key extensions");
    uVar3 = 0;
  }
  else {
    mbedtls_debug_print_msg
              (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x396,
               "Pre-configured PSK number = %d",iVar2);
    if ((param_2 <= param_3) && (5 < (long)param_3 - (long)param_2)) {
      local_68 = param_2 + 3;
      lVar5 = param_1[0xd];
      lVar4 = *param_1;
      if ((*(char *)param_1[0xe] == '\0') ||
         (((lVar5 == 0 || (*(long *)(lVar5 + 0x80) == 0)) ||
          ((*(byte *)(lVar5 + 0xa4) & 5 & *(uint *)(lVar4 + 0x20)) == 0)))) {
        local_60 = 0;
      }
      else {
        lVar4 = mbedtls_ssl_ciphersuite_from_id(*(undefined4 *)(lVar5 + 0x10));
        local_4c = 0;
        if (lVar4 != 0) {
          local_4c = (uint)*(byte *)(lVar4 + 0x11);
        }
        uVar3 = *(undefined8 *)(lVar5 + 0x80);
        uVar1 = *(undefined8 *)(lVar5 + 0x88);
        iVar2 = mbedtls_ms_time();
        uVar3 = ssl_tls13_write_identity
                          (param_1,local_68,param_3,uVar3,uVar1,
                           (*(int *)(param_1[0xd] + 0xa0) - *(int *)(param_1[0xd] + 0xe0)) + iVar2,
                           &local_48);
        if ((int)uVar3 != 0) goto LAB_0010045e;
        lVar4 = *param_1;
        local_68 = (undefined2 *)((long)local_68 + local_48);
        switch(local_4c | 0x2000000) {
        case 0x2000003:
          local_60 = 0x11;
          break;
        case 0x2000004:
        case 0x2000005:
          local_60 = 0x15;
          break;
        default:
          local_60 = 1;
          break;
        case 0x2000008:
        case 0x200000c:
        case 0x2000010:
          local_60 = 0x1d;
          break;
        case 0x2000009:
        case 0x200000d:
        case 0x2000011:
          local_60 = 0x21;
          break;
        case 0x200000a:
        case 0x2000012:
          local_60 = 0x31;
          break;
        case 0x200000b:
        case 0x2000013:
          local_60 = 0x41;
        }
      }
      iVar2 = mbedtls_ssl_conf_has_static_psk(lVar4);
      if (iVar2 != 0) {
        uVar3 = ssl_tls13_write_identity
                          (param_1,local_68,param_3,*(undefined8 *)(*param_1 + 0x108),
                           *(undefined8 *)(*param_1 + 0x110),0,&local_48);
        if ((int)uVar3 != 0) goto LAB_0010045e;
        local_60 = local_60 + 0x21;
        local_68 = (undefined2 *)((long)local_68 + local_48);
      }
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x3cd,
                 "client hello, adding pre_shared_key extension, omitting PSK binder list");
      if ((local_68 <= param_3) &&
         (uVar7 = local_60 + 2, uVar7 <= (ulong)((long)param_3 - (long)local_68))) {
        lVar5 = (long)local_68 - (long)param_2;
        *param_2 = 0x2900;
        uVar6 = (short)lVar5 + -4 + (short)uVar7;
        param_2[1] = uVar6 * 0x100 | uVar6 >> 8;
        uVar6 = (short)lVar5 - 6;
        param_2[2] = uVar6 * 0x100 | uVar6 >> 8;
        *param_4 = lVar5 + uVar7;
        *param_5 = uVar7;
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x3e2,
                   "pre_shared_key identities",param_2,lVar5);
        uVar3 = 0;
        goto LAB_0010045e;
      }
    }
    uVar3 = 0xffff9600;
  }
LAB_0010045e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ssl_tls13_write_binders_of_pre_shared_key_ext(long *param_1,ushort *param_2,ushort *param_3)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ushort *puVar7;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0xffff9600;
  if ((param_2 <= param_3) && (1 < (long)param_3 - (long)param_2)) {
    lVar1 = param_1[0xd];
    puVar7 = param_2 + 1;
    lVar5 = *param_1;
    if ((*(char *)param_1[0xe] != '\0') &&
       (((lVar1 != 0 && (*(long *)(lVar1 + 0x80) != 0)) &&
        ((*(byte *)(lVar1 + 0xa4) & 5 & *(uint *)(lVar5 + 0x20)) != 0)))) {
      lVar5 = mbedtls_ssl_ciphersuite_from_id(*(undefined4 *)(lVar1 + 0x10));
      uVar6 = 0;
      if (lVar5 != 0) {
        uVar6 = *(byte *)(lVar5 + 0x11) | 0x2000000;
      }
      uVar4 = ssl_tls13_write_binder
                        (param_1,puVar7,param_3,1,uVar6,lVar1 + 0xa6,*(undefined1 *)(lVar1 + 0xa5));
      if ((int)uVar4 != 0) goto LAB_00100777;
      lVar5 = *param_1;
      puVar7 = (ushort *)((long)puVar7 + local_38);
    }
    iVar3 = mbedtls_ssl_conf_has_static_psk(lVar5);
    if (iVar3 != 0) {
      uVar4 = ssl_tls13_write_binder
                        (param_1,puVar7,param_3,0,0x2000009,*(undefined8 *)(*param_1 + 0xf8),
                         *(undefined8 *)(*param_1 + 0x100),&local_38);
      if ((int)uVar4 != 0) goto LAB_00100777;
      puVar7 = (ushort *)((long)puVar7 + local_38);
    }
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x411,
               "client hello, adding PSK binder list.");
    uVar2 = (short)((long)puVar7 - (long)param_2) - 2;
    *param_2 = uVar2 * 0x100 | uVar2 >> 8;
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x418,
               "pre_shared_key binders",param_2,(long)puVar7 - (long)param_2);
    uVar6 = mbedtls_ssl_get_extension_mask(0x29);
    *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar6;
    uVar4 = 0;
  }
LAB_00100777:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ssl_tls13_write_client_hello_exts
              (long *param_1,undefined2 *param_2,undefined2 *param_3,long *param_4)

{
  undefined2 *puVar1;
  ushort *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  ulong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  byte bVar13;
  short sVar14;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  iVar6 = mbedtls_ssl_tls13_crypto_init();
  iVar8 = iVar6;
  if (iVar6 != 0) goto LAB_00100931;
  uVar10 = (ulong)(-(uint)(*(uint *)(param_1[0xe] + 8) < 0x304) & 2) + 7;
  uVar7 = *(uint *)(param_1[0xe] + 8);
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x39,
             "client hello, adding supported versions extension");
  bVar13 = -(uVar7 < 0x304) & 2;
  if ((param_2 <= param_3) && (uVar10 <= (ulong)((long)param_3 - (long)param_2))) {
    *(byte *)(param_2 + 2) = bVar13 + 2;
    *param_2 = 0x2b00;
    param_2[1] = (ushort)(byte)(bVar13 + 3) << 8;
    mbedtls_ssl_write_version((undefined1 *)((long)param_2 + 5),0,0x304);
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x50,
               "supported version: [3:4]");
    if (*(uint *)(param_1[0xe] + 8) < 0x304) {
      mbedtls_ssl_write_version((undefined1 *)((long)param_2 + 7),0,0x303);
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x56,
                 "supported version: [3:3]");
    }
    uVar7 = mbedtls_ssl_get_extension_mask(0x2b);
    lVar3 = param_1[0xe];
    puVar11 = (undefined2 *)(uVar10 + (long)param_2);
    *(uint *)(lVar3 + 0x668) = *(uint *)(lVar3 + 0x668) | uVar7;
    if (*(long *)(lVar3 + 0x4b0) == 0) {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x23d,
                 "no cookie to send; skip extension");
    }
    else {
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x241,
                 "client hello, cookie",*(long *)(lVar3 + 0x4b0),*(undefined2 *)(lVar3 + 0x4b8));
      if ((param_3 < puVar11) ||
         ((ulong)((long)param_3 - (long)puVar11) < (ulong)*(ushort *)(lVar3 + 0x4b8) + 6))
      goto LAB_00100dc0;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x247,
                 "client hello, adding cookie extension",0x100a46);
      *puVar11 = 0x2c00;
      uVar5 = *(short *)(lVar3 + 0x4b8) + 2;
      puVar11[1] = uVar5 * 0x100 | uVar5 >> 8;
      puVar11[2] = *(ushort *)(lVar3 + 0x4b8) << 8 | *(ushort *)(lVar3 + 0x4b8) >> 8;
      memcpy(puVar11 + 3,*(void **)(lVar3 + 0x4b0),(ulong)*(ushort *)(lVar3 + 0x4b8));
      uVar5 = *(ushort *)(lVar3 + 0x4b8);
      uVar7 = mbedtls_ssl_get_extension_mask(0x2c);
      puVar11 = (undefined2 *)((long)puVar11 + (ulong)uVar5 + 6);
      *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar7;
    }
    uVar7 = *(uint *)(*param_1 + 0x20);
    puVar12 = puVar11;
    if ((uVar7 & 6) == 0) {
LAB_00100d11:
      if ((uVar7 & 5) == 0) {
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x272,
                   "skip psk_key_exchange_modes extension");
      }
      else {
        if ((param_3 < puVar12) || ((long)param_3 - (long)puVar12 < 7)) goto LAB_00100dc0;
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x27a,
                   "client hello, adding psk_key_exchange_modes extension");
        *puVar12 = 0x2d00;
        puVar11 = (undefined2 *)((long)puVar12 + 5);
        uVar7 = *(uint *)(*param_1 + 0x20);
        sVar14 = (short)(uVar7 & 4);
        if ((uVar7 & 4) != 0) {
          *(undefined1 *)((long)puVar12 + 5) = 1;
          puVar11 = puVar12 + 3;
          sVar14 = 1;
          mbedtls_debug_print_msg
                    (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x288,
                     "Adding PSK-ECDHE key exchange mode");
          uVar7 = *(uint *)(*param_1 + 0x20);
        }
        if ((uVar7 & 1) != 0) {
          *(undefined1 *)puVar11 = 0;
          puVar11 = (undefined2 *)((long)puVar11 + 1);
          sVar14 = sVar14 + 1;
          mbedtls_debug_print_msg
                    (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x28f,
                     "Adding pure PSK key exchange mode");
        }
        *(char *)(puVar12 + 2) = (char)sVar14;
        puVar12[1] = (sVar14 + 1) * 0x100;
        uVar7 = mbedtls_ssl_get_extension_mask(0x2d);
        *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar7;
        puVar12 = puVar11;
      }
      *param_4 = (long)puVar12 - (long)param_2;
      iVar8 = iVar6;
      goto LAB_00100931;
    }
    if ((puVar11 <= param_3) && (5 < (long)param_3 - (long)puVar11)) {
      puVar1 = puVar11 + 3;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x11d,
                 "client hello: adding key share extension");
      uVar5 = *(ushort *)(param_1[0xe] + 0x550);
      if ((uVar5 != 0x1d) && ((uVar5 != 0x17 && (1 < (ushort)(uVar5 - 0x18))))) {
        if (uVar5 == 0x1e) {
LAB_00100f8a:
          uVar5 = 0x1e;
        }
        else if (4 < (ushort)(uVar5 - 0x100)) {
          puVar9 = *(ushort **)(*param_1 + 0xf0);
          if (puVar9 == (ushort *)0x0) {
            iVar8 = -0x5e80;
          }
          else {
            uVar5 = *puVar9;
            while (uVar5 != 0) {
              iVar8 = mbedtls_ssl_get_psa_curve_info_from_tls_id(uVar5,0,0);
              if ((iVar8 == 0) &&
                 (((uVar5 = *puVar9, (ushort)(uVar5 - 0x17) < 3 || (uVar5 == 0x1d)) ||
                  (uVar5 == 0x1e)))) {
                if (((ushort)(uVar5 - 0x17) < 3) || (uVar5 == 0x1d)) goto LAB_00100bff;
                goto LAB_00100f8a;
              }
              puVar2 = puVar9 + 1;
              puVar9 = puVar9 + 1;
              uVar5 = *puVar2;
            }
            iVar8 = -0x7080;
          }
          goto LAB_00100931;
        }
      }
LAB_00100bff:
      local_48 = 0;
      if ((puVar1 <= param_3) && (3 < (long)param_3 - (long)puVar1)) {
        iVar8 = mbedtls_ssl_tls13_generate_and_write_xxdh_key_exchange
                          (param_1,uVar5,puVar11 + 5,param_3,&local_48);
        if (iVar8 != 0) {
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x142,
                     "client hello: failed generating xxdh key exchange");
          goto LAB_00100931;
        }
        puVar12 = (undefined2 *)((long)(puVar11 + 5) + local_48);
        puVar11[4] = (ushort)local_48 << 8 | (ushort)local_48 >> 8;
        puVar11[3] = uVar5 << 8 | uVar5 >> 8;
        if ((long)puVar12 - (long)puVar1 == 0) {
          iVar8 = -0x6c00;
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x155,
                     "No key share defined.");
          goto LAB_00100931;
        }
        *puVar11 = 0x3300;
        uVar4 = (ushort)((long)puVar12 - (long)puVar1);
        puVar11[2] = uVar4 << 8 | uVar4 >> 8;
        puVar11[1] = (uVar4 + 2) * 0x100 | (ushort)(uVar4 + 2) >> 8;
        *(ushort *)(param_1[0xe] + 0x550) = uVar5;
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x165,
                   "client hello, key_share extension",puVar11,(long)puVar12 - (long)puVar11);
        uVar7 = mbedtls_ssl_get_extension_mask(0x33);
        *(uint *)(param_1[0xe] + 0x668) = *(uint *)(param_1[0xe] + 0x668) | uVar7;
        uVar7 = *(uint *)(*param_1 + 0x20);
        goto LAB_00100d11;
      }
    }
  }
LAB_00100dc0:
  iVar8 = -0x6a00;
LAB_00100931:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ssl_tls13_finalize_client_hello(void)

{
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong mbedtls_ssl_tls13_handshake_client_step(long *param_1)

{
  byte *__s1;
  uint *puVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  void *pvVar12;
  ushort *puVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  time_t tVar17;
  size_t sVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ushort uVar22;
  undefined8 extraout_RDX;
  ushort *puVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  byte bVar26;
  char *pcVar27;
  ushort uVar28;
  undefined8 in_R10;
  long lVar29;
  ushort uVar30;
  undefined8 in_R11;
  int iVar31;
  uint *puVar32;
  uint *puVar33;
  ushort *puVar34;
  long in_FS_OFFSET;
  ushort *local_a8;
  int local_90;
  ushort *local_60;
  ulong local_58;
  uint *local_50;
  ulong local_48;
  long local_40;
  
  iVar31 = (int)param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(iVar31) {
  case 0:
    uVar4 = 1;
    goto LAB_001013bc;
  case 1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = mbedtls_ssl_write_client_hello();
      return uVar9;
    }
    goto LAB_001026be;
  case 2:
    local_60 = (ushort *)0x0;
    local_58 = 0;
    pcVar27 = "ServerHello";
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x7d4,"=> %s",
               "ssl_tls13_process_server_hello");
    uVar6 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1,2,&local_60,&local_58);
    uVar9 = local_58;
    puVar23 = local_60;
    if (uVar6 != 0) goto LAB_00101154;
    lVar29 = param_1[0xe];
    if ((CARRY8((ulong)local_60,local_58)) || ((long)local_58 < 0x23)) {
      uVar20 = 0x547;
    }
    else {
      if ((local_60 + 0x11 <= (ushort *)((long)local_60 + local_58)) &&
         (uVar10 = (ulong)(byte)local_60[0x11] + 4, uVar10 <= local_58 - 0x22)) {
        uVar6 = mbedtls_ssl_tls13_is_supported_versions_ext_present_in_exts
                          (param_1,(long)(local_60 + 0x11) + uVar10,
                           (ushort *)((long)local_60 + local_58),&local_50,&local_48);
        if (-1 < (int)uVar6) {
          if (uVar6 != 0) {
            lVar14 = param_1[0xd];
            *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((long)param_1 + 0x14);
            *(undefined1 *)(lVar14 + 2) = *(undefined1 *)(*param_1 + 8);
            *(undefined4 *)(lVar29 + 0x66c) = 0;
            if ((*(long *)(puVar23 + 1) == _mbedtls_ssl_tls13_hello_retry_request_magic &&
                 *(long *)(puVar23 + 5) == _mbedtls_ssl_tls13_labels) &&
               (*(long *)(puVar23 + 9) == _mbedtls_ssl_tls13_hkdf_expand_label &&
                *(long *)(puVar23 + 0xd) == _mbedtls_ssl_print_ticket_flags)) {
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x5e2,
                         "received HelloRetryRequest message");
              if (*(char *)(lVar29 + 0x39) != '\0') {
                pcVar27 = "ServerHello";
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x5e9,
                           "Multiple HRRs received");
                mbedtls_ssl_pend_fatal_alert(param_1,10,0xffff8900);
                uVar6 = 0xffff8900;
                goto LAB_00101154;
              }
              if ((*(byte *)(*param_1 + 0x20) & 6) == 0) {
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x5f6,
                           "Unexpected HRR in pure PSK key exchange.");
                goto LAB_0010215b;
              }
              *(undefined1 *)(lVar29 + 0x39) = 1;
              uVar5 = 1;
              lVar29 = param_1[0xe];
              iVar31 = -2;
              local_a8 = (ushort *)((long)local_60 + local_58);
            }
            else {
              uVar5 = 0;
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x5df,
                         "received ServerHello message");
              lVar29 = param_1[0xe];
              local_a8 = (ushort *)((long)local_60 + local_58);
            }
LAB_00101682:
            uVar9 = local_58;
            puVar23 = local_60;
            if ((local_a8 < local_60) || ((long)local_58 < 0x26)) {
              pcVar27 = "ssl_tls13_parse_server_hello";
              uVar20 = 0x652;
LAB_00101f43:
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                         "missing input data in %s",pcVar27);
              mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
              goto LAB_00101f67;
            }
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x654,
                       "server hello",local_60,local_58);
            pcVar27 = "server hello, version";
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x655,
                       "server hello, version",puVar23,2);
            sVar3 = mbedtls_ssl_read_version(puVar23,*(undefined1 *)(*param_1 + 9));
            if (sVar3 != 0x303) {
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x65f,
                         "Unsupported version of TLS.");
              mbedtls_ssl_pend_fatal_alert(param_1,0x46,0xffff9180);
              uVar6 = 0xffff9180;
              goto LAB_00101772;
            }
            if (uVar5 != 1) {
              uVar20 = *(undefined8 *)(puVar23 + 5);
              pcVar27 = "server hello, random bytes";
              *(undefined8 *)(lVar29 + 0x5c8) = *(undefined8 *)(puVar23 + 1);
              *(undefined8 *)(lVar29 + 0x5d0) = uVar20;
              uVar20 = *(undefined8 *)(puVar23 + 0xd);
              *(undefined8 *)(lVar29 + 0x5d8) = *(undefined8 *)(puVar23 + 9);
              *(undefined8 *)(lVar29 + 0x5e0) = uVar20;
              mbedtls_debug_print_buf
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x670,
                         "server hello, random bytes",puVar23 + 1,0x20,in_R11);
            }
            if (puVar23 + 0x11 < local_a8) {
              puVar24 = (ushort *)((long)puVar23 + 0x23);
              uVar10 = (ulong)(byte)puVar23[0x11];
              if ((local_a8 < puVar24) || (uVar9 - 0x23 < uVar10)) {
                uVar20 = 0x613;
                goto LAB_00101735;
              }
              lVar14 = param_1[0xd];
              uVar9 = *(ulong *)(lVar14 + 0x18);
              if (uVar10 == uVar9) {
                iVar7 = memcmp((void *)(lVar14 + 0x20),puVar24,uVar10);
                if (iVar7 != 0) goto LAB_00102ac8;
                puVar24 = (ushort *)((long)puVar24 + uVar10);
                mbedtls_debug_print_buf
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x627,
                           "Session ID",(void *)(lVar14 + 0x20));
                if ((local_a8 < puVar24) || ((long)local_a8 - (long)puVar24 < 2)) {
                  pcVar27 = "ssl_tls13_parse_server_hello";
                  uVar20 = 0x684;
                  goto LAB_00101f43;
                }
                uVar28 = *puVar24 << 8 | *puVar24 >> 8;
                uVar9 = (ulong)uVar28;
                lVar14 = mbedtls_ssl_ciphersuite_from_id((uint)uVar28,uVar10);
                iVar7 = mbedtls_ssl_validate_ciphersuite
                                  (param_1,lVar14,*(undefined4 *)((long)param_1 + 0x14),
                                   *(undefined4 *)((long)param_1 + 0x14));
                if (iVar7 == 0) {
                  puVar16 = *(uint **)(*param_1 + 0x18);
                  uVar6 = *puVar16;
                  while (uVar6 != 0) {
                    puVar16 = puVar16 + 1;
                    if (uVar28 == uVar6) {
                      if (((uVar5 == 1) || (*(char *)(lVar29 + 0x39) == '\0')) ||
                         ((uint)uVar28 == *(uint *)(param_1[0xd] + 0x10))) {
                        uVar20 = mbedtls_ssl_optimize_checksum(param_1);
                        *(long *)(lVar29 + 0x10) = lVar14;
                        mbedtls_debug_print_msg
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x6a8,
                                   "server hello, chosen ciphersuite: ( %04x ) - %s",uVar9,
                                   *(undefined8 *)(lVar14 + 8),uVar20);
                        lVar14 = param_1[0xd];
                        tVar17 = time((time_t *)0x0);
                        *(time_t *)(lVar14 + 8) = tVar17;
                        if (local_a8 <= puVar24 + 1) {
                          pcVar27 = "ssl_tls13_parse_server_hello";
                          uVar20 = 0x6b3;
                          goto LAB_00101f43;
                        }
                        if ((char)puVar24[1] != '\0') {
                          mbedtls_debug_print_msg
                                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x6b5
                                     ,"bad legacy compression method");
                          goto LAB_00101759;
                        }
                        if ((local_a8 < (ushort *)((long)puVar24 + 3)) ||
                           ((long)local_a8 - ((long)puVar24 + 3) < 2)) {
                          pcVar27 = "ssl_tls13_parse_server_hello";
                          uVar20 = 0x6c3;
                          goto LAB_00101f43;
                        }
                        puVar23 = (ushort *)((long)puVar24 + 5);
                        if ((local_a8 < puVar23) ||
                           (uVar10 = (ulong)(ushort)(*(ushort *)((long)puVar24 + 3) << 8 |
                                                    *(ushort *)((long)puVar24 + 3) >> 8),
                           (ulong)((long)local_a8 - (long)puVar23) < uVar10)) {
                          pcVar27 = "ssl_tls13_parse_server_hello";
                          uVar20 = 0x6c8;
                          goto LAB_00101f43;
                        }
                        puVar24 = (ushort *)((long)puVar23 + uVar10);
                        mbedtls_debug_print_buf
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x6cb,
                                   "server hello extensions",puVar23,uVar10,uVar9);
                        *(undefined4 *)(lVar29 + 0x66c) = 0;
                        uVar8 = 0x418000;
                        if (uVar5 != 1) {
                          uVar8 = 0x40a000;
                        }
                        local_90 = -0x6e;
                        goto LAB_00102caa;
                      }
                      break;
                    }
                    uVar6 = *puVar16;
                  }
                }
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x69f,
                           "invalid ciphersuite(%04x) parameter",uVar9);
              }
              else {
LAB_00102ac8:
                mbedtls_debug_print_buf
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x618,
                           "Expected Session ID",lVar14 + 0x20,uVar9,pcVar27);
                mbedtls_debug_print_buf
                          (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x61b,
                           "Received Session ID",puVar24,uVar10);
                mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
              }
            }
            else {
              uVar20 = 0x610;
LAB_00101735:
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                         "missing input data in %s","ssl_tls13_check_server_hello_session_id_echo");
              mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
            }
LAB_00101759:
            mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
LAB_0010176b:
            uVar6 = 0xffff9a00;
            goto LAB_00101772;
          }
          if ((*(int *)(puVar23 + 0xd) != 0x4e574f44) ||
             (bVar2 = false, *(int *)((long)puVar23 + 0x1d) != 0x4452474e)) {
            bVar2 = true;
          }
          if (((bVar2) || (1 < *(byte *)((long)puVar23 + 0x21))) && (*(uint *)(lVar29 + 8) < 0x304))
          {
            *(undefined4 *)((long)param_1 + 0x14) = 0x303;
            *(undefined4 *)((long)param_1 + 0x13c) = 1;
            uVar5 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,2,puVar23,uVar9);
            if ((uVar5 != 0) ||
               (((*(byte *)(*param_1 + 0x20) & 6) != 0 &&
                (uVar5 = ssl_tls13_reset_key_share(param_1), uVar5 != 0)))) {
              uVar6 = uVar5;
              if ((int)uVar5 < 0) {
LAB_00102b30:
                pcVar27 = "ServerHello";
                goto LAB_00101154;
              }
              if (uVar5 != 2) {
                lVar29 = param_1[0xe];
                local_a8 = (ushort *)((long)local_60 + local_58);
                if (uVar5 == 1) {
                  iVar31 = -2;
                }
                goto LAB_00101682;
              }
            }
            uVar6 = 0;
            pcVar27 = "ServerHello";
          }
          else {
LAB_0010215b:
            mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
            pcVar27 = "ServerHello";
            uVar6 = 0xffff9a00;
          }
        }
        goto LAB_00101154;
      }
      uVar20 = 0x551;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
               "missing input data in %s","ssl_tls13_is_supported_versions_ext_present");
    mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
    pcVar27 = "ServerHello";
    uVar6 = 0xffff8d00;
    goto LAB_00101154;
  case 3:
    uVar6 = mbedtls_ssl_tls13_process_certificate();
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 1) = 9;
    }
    break;
  default:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xc6c,"invalid state %d",
               iVar31);
    uVar6 = 0xffff8f00;
    break;
  case 5:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9db,
               "=> parse certificate request");
    uVar6 = mbedtls_ssl_read_record(param_1,0);
    if (uVar6 == 0) {
      *(undefined4 *)((long)param_1 + 0x13c) = 1;
      if (((int)param_1[0x1f] == 0x16) && (*(char *)param_1[0x1d] == '\r')) {
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x94c,
                   "got a certificate request");
        plVar15 = param_1;
        uVar6 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1,0xd,&local_50,&local_48);
        if (uVar6 == 0) {
          lVar29 = param_1[0xe];
          uVar20 = 0x96d;
          puVar16 = (uint *)((long)local_50 + local_48);
          if (local_50 < puVar16) {
            uVar9 = (ulong)(byte)*local_50;
            puVar32 = (uint *)((long)local_50 + 1);
            if (uVar9 != 0) {
              if ((puVar16 < puVar32) || (local_48 - 1 < uVar9)) {
                uVar20 = 0x972;
                goto LAB_00101e09;
              }
              mbedtls_debug_print_buf
                        (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x973,
                         "Certificate Request Context",puVar32,uVar9);
              plVar15 = (long *)calloc(1,uVar9);
              *(long **)(lVar29 + 0x678) = plVar15;
              if (plVar15 == (long *)0x0) {
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x979,
                           "buffer too small");
                uVar6 = 0xffff8100;
                goto LAB_00101236;
              }
              __memcpy_chk(plVar15,puVar32,uVar9,uVar9);
              puVar32 = (uint *)((long)puVar32 + uVar9);
            }
            if ((puVar16 < puVar32) || ((long)puVar16 - (long)puVar32 < 2)) {
              uVar20 = 0x985;
            }
            else {
              puVar33 = (uint *)((long)puVar32 + 2);
              if ((puVar33 <= puVar16) &&
                 (uVar9 = (ulong)(ushort)((ushort)*puVar32 << 8 | (ushort)*puVar32 >> 8),
                 uVar9 <= (ulong)((long)puVar16 - (long)puVar33))) {
                puVar32 = (uint *)(uVar9 + (long)puVar33);
                *(undefined4 *)(lVar29 + 0x66c) = 0;
                do {
                  while( true ) {
                    if (puVar32 <= puVar33) {
                      uVar20 = 0;
                      mbedtls_ssl_print_extensions
                                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9b6,0xd
                                 ,*(undefined4 *)(lVar29 + 0x66c));
                      if (puVar16 == puVar33) {
                        if ((*(byte *)(lVar29 + 0x66c) & 0x20) != 0) {
                          *(undefined1 *)(param_1[0xe] + 0x552) = 1;
                          uVar6 = mbedtls_ssl_add_hs_msg_to_checksum
                                            (param_1,0xd,local_50,local_48,uVar20);
                          if (uVar6 == 0) goto LAB_00101228;
                          goto LAB_00101236;
                        }
                        mbedtls_debug_print_msg
                                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9c5,
                                   "no signature algorithms extension found",plVar15);
                      }
                      else {
                        mbedtls_debug_print_msg
                                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9bb,
                                   "CertificateRequest misaligned",plVar15);
                      }
                      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
                      goto LAB_00101e2d;
                    }
                    if ((long)puVar32 - (long)puVar33 < 4) {
                      uVar20 = 0x992;
                      goto LAB_00101e09;
                    }
                    puVar1 = puVar33 + 1;
                    if ((puVar32 < puVar1) ||
                       (uVar9 = (ulong)(ushort)(*(ushort *)((long)puVar33 + 2) << 8 |
                                               *(ushort *)((long)puVar33 + 2) >> 8),
                       (ulong)((long)puVar32 - (long)puVar1) < uVar9)) {
                      uVar20 = 0x997;
                      goto LAB_00101e09;
                    }
                    uVar28 = (ushort)*puVar33 << 8 | (ushort)*puVar33 >> 8;
                    uVar6 = mbedtls_ssl_tls13_check_received_extension(param_1,0xd,uVar28,0xfac0229)
                    ;
                    if (uVar6 != 0) goto LAB_00101236;
                    puVar33 = (uint *)(uVar9 + (long)puVar1);
                    if (uVar28 == 0xd) break;
                    plVar15 = param_1;
                    mbedtls_ssl_print_extension
                              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9ad,0xd,
                               uVar28,"( ignored )",0);
                  }
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9a2,
                             "found signature algorithms extension");
                  plVar15 = param_1;
                  uVar6 = mbedtls_ssl_parse_sig_alg_ext(param_1,puVar1,puVar33);
                } while (uVar6 == 0);
                goto LAB_00101236;
              }
              uVar20 = 0x989;
            }
          }
LAB_00101e09:
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                     "missing input data in %s","ssl_tls13_parse_certificate_request");
          mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
LAB_00101e2d:
          uVar6 = 0xffff8d00;
        }
      }
      else {
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x950,
                   "got no certificate request");
LAB_00101228:
        *(undefined4 *)(param_1 + 1) = 3;
        uVar6 = 0;
      }
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x945,
                 "mbedtls_ssl_read_record",uVar6);
      if (-1 < (int)uVar6) {
        if (uVar6 == 1) goto LAB_00101228;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x9f0,
                   "should never happen");
        uVar6 = 0xffff9400;
      }
    }
LAB_00101236:
    pcVar27 = "<= parse certificate request";
    uVar20 = 0x9f9;
    goto LAB_00101434;
  case 7:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xa4f,
               "Switch to handshake traffic keys for outbound traffic");
    mbedtls_ssl_set_outbound_transform(param_1,*(undefined8 *)(param_1[0xe] + 0x680));
    if (*(char *)(param_1[0xe] + 0x552) == '\0') {
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xa5e,
                 "skip write certificate");
    }
    else {
      uVar6 = mbedtls_ssl_tls13_write_certificate(param_1);
      if (uVar6 != 0) break;
      if ((((param_1[0xe] != 0) &&
           (plVar15 = *(long **)(param_1[0xe] + 0x408), plVar15 != (long *)0x0)) ||
          (plVar15 = *(long **)(*param_1 + 0xd0), plVar15 != (long *)0x0)) &&
         (uVar4 = 0x15, *plVar15 != 0)) goto LAB_001013bc;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xa66,
               "skip write certificate verify");
    uVar4 = 0xb;
    goto LAB_001013bc;
  case 9:
    uVar6 = mbedtls_ssl_tls13_process_certificate_verify();
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 1) = 0xd;
    }
    break;
  case 0xb:
    uVar6 = mbedtls_ssl_tls13_write_finished_message();
    if (uVar6 == 0) {
      uVar6 = mbedtls_ssl_tls13_compute_resumption_master_secret(param_1);
      uVar4 = 0xe;
      if (uVar6 == 0) goto LAB_001013bc;
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xa8d,
                 "mbedtls_ssl_tls13_compute_resumption_master_secret ",uVar6);
    }
    break;
  case 0xd:
    uVar6 = mbedtls_ssl_tls13_process_finished_message();
    if (uVar6 == 0) {
      uVar6 = mbedtls_ssl_tls13_compute_application_transform(param_1);
      uVar4 = 0x16;
      if (uVar6 == 0) goto LAB_001013bc;
      mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
    }
    break;
  case 0xe:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xa9c,"handshake: done");
    uVar4 = 0xf;
    goto LAB_001013bc;
  case 0xf:
    mbedtls_ssl_tls13_handshake_wrapup();
    uVar4 = 0x1b;
LAB_001013bc:
    *(undefined4 *)(param_1 + 1) = uVar4;
    uVar6 = 0;
    break;
  case 0x13:
    lVar29 = param_1[0xe];
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x895,
               "=> parse encrypted extensions");
    uVar6 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1,8,&local_50,&local_48);
    puVar16 = local_50;
    if (uVar6 == 0) {
      lVar14 = param_1[0xe];
      puVar23 = (ushort *)((long)local_50 + local_48);
      if ((CARRY8((ulong)local_50,local_48)) || ((long)local_48 < 2)) {
        pcVar27 = "ssl_tls13_parse_encrypted_extensions";
        uVar20 = 0x81f;
LAB_00101d23:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                   "missing input data in %s",pcVar27);
        mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
      }
      else {
        puVar24 = (ushort *)((long)local_50 + 2);
        if (puVar23 < puVar24) {
LAB_00102198:
          pcVar27 = "ssl_tls13_parse_encrypted_extensions";
          uVar20 = 0x823;
          goto LAB_00101d23;
        }
        uVar28 = (ushort)*local_50 << 8 | (ushort)*local_50 >> 8;
        uVar9 = (ulong)uVar28;
        if (local_48 - 2 < uVar9) goto LAB_00102198;
        puVar11 = (ushort *)((long)puVar24 + uVar9);
        puVar21 = (undefined8 *)0x826;
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x826,
                   "encrypted extensions",puVar24,uVar9);
        *(undefined4 *)(lVar14 + 0x66c) = 0;
        if (puVar24 < puVar11) {
          if (uVar28 < 4) {
LAB_001023fc:
            pcVar27 = "ssl_tls13_parse_encrypted_extensions";
            uVar20 = 0x834;
          }
          else {
            puVar13 = (ushort *)((long)puVar16 + 6);
            if (puVar13 <= puVar11) {
              uVar28 = (ushort)puVar16[1] << 8 | (ushort)puVar16[1] >> 8;
              uVar22 = *(ushort *)((long)puVar16 + 2) << 8 | *(ushort *)((long)puVar16 + 2) >> 8;
              puVar34 = puVar24;
              do {
                uVar9 = (ulong)uVar28;
                if ((ulong)((long)puVar11 - (long)puVar13) < uVar9) break;
                uVar6 = mbedtls_ssl_tls13_check_received_extension(param_1,8,uVar22,0x10004dd6);
                if (uVar6 != 0) goto LAB_00101428;
                puVar24 = (ushort *)((long)puVar13 + uVar9);
                if (uVar22 == 0x10) {
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x845,
                             "found alpn extension");
                  puVar21 = *(undefined8 **)(*param_1 + 0x118);
                  if (puVar21 == (undefined8 *)0x0) {
                    uVar6 = 0xffff8f00;
                    goto LAB_00101428;
                  }
                  if ((puVar24 < puVar13) || (uVar9 < 2)) {
                    pcVar27 = "ssl_tls13_parse_alpn_ext";
                    uVar20 = 0x96;
                    goto LAB_00101d23;
                  }
                  puVar13 = puVar34 + 3;
                  uVar28 = puVar34[2];
                  if ((puVar24 < puVar13) ||
                     (uVar10 = (ulong)(ushort)(uVar28 << 8 | uVar28 >> 8), uVar9 - 2 < uVar10)) {
                    pcVar27 = "ssl_tls13_parse_alpn_ext";
                    uVar20 = 0x9a;
                    goto LAB_00101d23;
                  }
                  if ((CARRY8((ulong)puVar13,uVar10)) || (uVar28 == 0)) {
                    pcVar27 = "ssl_tls13_parse_alpn_ext";
                    uVar20 = 0x9d;
                    goto LAB_00101d23;
                  }
                  __s1 = (byte *)((long)puVar34 + 7);
                  uVar9 = (ulong)(byte)puVar34[3];
                  if (((byte *)((long)puVar13 + uVar10) < __s1) ||
                     (puVar25 = puVar21,
                     (ulong)((long)((long)puVar13 + uVar10) - (long)__s1) < uVar9)) {
                    pcVar27 = "ssl_tls13_parse_alpn_ext";
                    uVar20 = 0xa1;
                    goto LAB_00101d23;
                  }
                  while( true ) {
                    pcVar27 = (char *)*puVar25;
                    if (pcVar27 == (char *)0x0) {
                      uVar6 = 0xffff8f00;
                      goto LAB_00101428;
                    }
                    sVar18 = strlen(pcVar27);
                    if ((uVar9 == sVar18) && (iVar31 = memcmp(__s1,pcVar27,uVar9), iVar31 == 0))
                    break;
                    puVar25 = puVar25 + 1;
                  }
                  param_1[0x37] = (long)pcVar27;
                }
                else {
                  puVar21 = (undefined8 *)0x86b;
                  mbedtls_ssl_print_extension
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x86b,8,
                             uVar22,"( ignored )",0);
                }
                if (puVar11 <= puVar24) {
                  uVar6 = *(uint *)(lVar14 + 0x66c);
                  if ((~uVar6 & 0x10000004) != 0) goto LAB_00102809;
                  mbedtls_debug_print_msg
                            (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x876,
                             "Record size limit extension cannot be used with max fragment length extension"
                            );
                  mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
                  uVar6 = 0xffff9a00;
                  goto LAB_00101428;
                }
                if ((long)puVar11 - (long)puVar24 < 4) goto LAB_001023fc;
                puVar13 = puVar24 + 2;
                uVar22 = *puVar24 << 8 | *puVar24 >> 8;
                uVar28 = puVar24[1] << 8 | puVar24[1] >> 8;
                puVar34 = puVar24;
              } while (puVar13 <= puVar11);
            }
            pcVar27 = "ssl_tls13_parse_encrypted_extensions";
            uVar20 = 0x839;
          }
          goto LAB_00101d23;
        }
        uVar6 = 0;
LAB_00102809:
        mbedtls_ssl_print_extensions
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x87f,8,uVar6,0,puVar21
                  );
        if (puVar23 == puVar24) {
          *(undefined4 *)(param_1[0xd] + 0x10) = **(undefined4 **)(lVar29 + 0x10);
          uVar6 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,8,local_50,local_48);
          if (uVar6 == 0) {
            *(uint *)(param_1 + 1) =
                 (-(uint)((*(byte *)(param_1[0xe] + 0x38) & 5) == 0) & 0xfffffff8) + 0xd;
          }
          goto LAB_00101428;
        }
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x884,
                   "EncryptedExtension lengths misaligned");
        mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
      }
      uVar6 = 0xffff8d00;
    }
LAB_00101428:
    pcVar27 = "<= parse encrypted extensions";
    uVar20 = 0x8eb;
    goto LAB_00101434;
  case 0x15:
    uVar6 = mbedtls_ssl_tls13_write_certificate_verify();
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 1) = 0xb;
    }
    break;
  case 0x16:
    uVar6 = mbedtls_ssl_tls13_write_change_cipher_spec();
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 1) = 7;
    }
    break;
  case 0x17:
    uVar6 = mbedtls_ssl_tls13_write_change_cipher_spec();
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    break;
  case 0x1c:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xbcf,
               "=> parse new session ticket");
    uVar5 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1,4,&local_50,&local_48);
    uVar6 = uVar5;
    if (uVar5 != 0) goto LAB_001014d4;
    lVar29 = param_1[0xc];
    *(undefined1 *)(lVar29 + 1) = 1;
    puVar23 = (ushort *)((long)local_50 + local_48);
    if ((CARRY8((ulong)local_50,local_48)) || ((long)local_48 < 9)) {
      uVar20 = 0xb2b;
      goto LAB_00101d6b;
    }
    uVar6 = *local_50;
    *(uint *)(lVar29 + 0x90) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb2e,"ticket_lifetime: %u"
              );
    if (0x93a80 < *(uint *)(lVar29 + 0x90)) {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb33,
                 "ticket_lifetime exceeds 7 days.");
      uVar6 = 0xffff9a00;
      goto LAB_001014d4;
    }
    uVar6 = local_50[1];
    *(uint *)(lVar29 + 0xa0) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb38,"ticket_age_add: %u")
    ;
    puVar24 = (ushort *)((long)local_50 + 9);
    uVar9 = (ulong)(byte)local_50[2];
    if ((puVar23 < puVar24) || (local_48 - 9 < uVar9)) {
      uVar20 = 0xb3f;
LAB_00101d6b:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                 "missing input data in %s","ssl_tls13_parse_new_session_ticket");
      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
      uVar6 = 0xffff8d00;
    }
    else {
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb41,"ticket_nonce:",
                 puVar24,uVar9);
      puVar11 = (ushort *)((long)puVar24 + uVar9);
      if ((puVar23 < puVar11) || ((long)puVar23 - (long)puVar11 < 2)) {
        uVar20 = 0xb45;
        goto LAB_00101d6b;
      }
      puVar13 = puVar11 + 1;
      if (puVar23 < puVar13) {
LAB_001026c3:
        uVar20 = 0xb48;
        goto LAB_00101d6b;
      }
      uVar10 = (ulong)(ushort)(*puVar11 << 8 | *puVar11 >> 8);
      if ((ulong)((long)puVar23 - (long)puVar13) < uVar10) goto LAB_001026c3;
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb49,"received ticket",
                 puVar13,uVar10,(long)puVar23 - (long)puVar13);
      if ((*(void **)(lVar29 + 0x80) != (void *)0x0) || (*(long *)(lVar29 + 0x88) != 0)) {
        free(*(void **)(lVar29 + 0x80));
        *(undefined8 *)(lVar29 + 0x80) = 0;
        *(undefined8 *)(lVar29 + 0x88) = 0;
      }
      pvVar12 = calloc(1,uVar10);
      if (pvVar12 == (void *)0x0) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb53,
                   "ticket alloc failed");
        uVar6 = 0xffff8100;
        goto LAB_001014d4;
      }
      uVar20 = __memcpy_chk(pvVar12,puVar13,uVar10,uVar10);
      *(byte *)(lVar29 + 0xa4) = *(byte *)(lVar29 + 0xa4) & 0xf2;
      *(ulong *)(lVar29 + 0x88) = uVar10;
      *(undefined8 *)(lVar29 + 0x80) = uVar20;
      puVar13 = (ushort *)((long)puVar13 + uVar10);
      if ((puVar23 < puVar13) || ((long)puVar23 - (long)puVar13 < 2)) {
        uVar20 = 0xb5f;
        goto LAB_00101d6b;
      }
      puVar11 = puVar13 + 1;
      if ((puVar23 < puVar11) ||
         (uVar10 = (ulong)(ushort)(*puVar13 << 8 | *puVar13 >> 8),
         (ulong)((long)puVar23 - (long)puVar11) < uVar10)) {
        uVar20 = 0xb62;
        goto LAB_00101d6b;
      }
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb64,"ticket extension",
                 puVar11,uVar10);
      lVar29 = param_1[0xe];
      *(undefined4 *)(lVar29 + 0x66c) = 0;
      puVar23 = (ushort *)((long)puVar11 + uVar10);
      while (puVar11 < puVar23) {
        if ((long)puVar23 - (long)puVar11 < 4) {
          uVar20 = 0xadf;
LAB_00102a28:
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                     "missing input data in %s","ssl_tls13_parse_new_session_ticket_exts");
          mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
          uVar6 = 0xffff8d00;
LAB_00102a52:
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb68,
                     "ssl_tls13_parse_new_session_ticket_exts",uVar6);
          goto LAB_001014d4;
        }
        puVar13 = puVar11 + 2;
        if ((puVar23 < puVar13) ||
           (uVar10 = (ulong)(ushort)(puVar11[1] << 8 | puVar11[1] >> 8),
           (ulong)((long)puVar23 - (long)puVar13) < uVar10)) {
          uVar20 = 0xae4;
          goto LAB_00102a28;
        }
        uVar28 = *puVar11 << 8 | *puVar11 >> 8;
        uVar6 = mbedtls_ssl_tls13_check_received_extension(param_1,4,uVar28,0xf804001);
        if (uVar6 != 0) goto LAB_00102a52;
        in_R10 = 0;
        mbedtls_ssl_print_extension
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xafb,4,uVar28,
                   "( ignored )");
        puVar11 = (ushort *)((long)puVar13 + uVar10);
      }
      uVar20 = 0;
      mbedtls_ssl_print_extensions
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb04,4,
                 *(undefined4 *)(lVar29 + 0x66c));
      lVar29 = param_1[0xc];
      if (*(int *)(lVar29 + 0x90) == 0) {
LAB_00101e82:
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xbee,
                   "Discard new session ticket");
        uVar6 = uVar5;
LAB_00101ea0:
        *(undefined4 *)(param_1 + 1) = 0x1b;
      }
      else {
        uVar20 = mbedtls_ms_time(*(int *)(lVar29 + 0x90),in_R10,extraout_RDX,uVar20);
        *(undefined8 *)(lVar29 + 0xe0) = uVar20;
        lVar14 = mbedtls_ssl_ciphersuite_from_id(*(undefined4 *)(lVar29 + 0x10));
        if (lVar14 != 0) {
          uVar6 = *(byte *)(lVar14 + 0x11) | 0x2000000;
          switch(uVar6) {
          case 0x2000003:
            iVar31 = 0x10;
            break;
          case 0x2000004:
          case 0x2000005:
            iVar31 = 0x14;
            break;
          default:
            iVar31 = 0;
            break;
          case 0x2000008:
          case 0x200000c:
          case 0x2000010:
            break;
          case 0x2000009:
          case 0x200000d:
          case 0x2000011:
            iVar31 = 0x20;
            break;
          case 0x200000a:
          case 0x2000012:
            iVar31 = 0x30;
            break;
          case 0x200000b:
          case 0x2000013:
            goto switchD_00101fe8_caseD_200000b;
          }
          lVar14 = (long)iVar31;
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb9b,
                     "resumption_master_secret",lVar29 + 0x1ac,lVar14);
          uVar6 = mbedtls_ssl_tls13_hkdf_expand_label
                            (uVar6,lVar29 + 0x1ac,lVar14,mbedtls_ssl_tls13_hkdf_expand_label,10,
                             puVar24,uVar9,lVar29 + 0xa6,lVar14);
          if (uVar6 == 0) {
            *(char *)(lVar29 + 0xa5) = (char)iVar31;
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",2999,
                       "Ticket-resumed PSK",lVar29 + 0xa6,lVar14);
            bVar26 = (byte)*(undefined4 *)(*param_1 + 0x20) & 0xd | *(byte *)(lVar29 + 0xa4);
            *(byte *)(lVar29 + 0xa4) = bVar26;
            mbedtls_ssl_print_ticket_flags
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xbbe,bVar26);
            *(undefined1 *)(param_1[0xc] + 1) = 0;
            uVar6 = 0xffff8500;
          }
          else {
            mbedtls_debug_print_ret
                      (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xbaf,
                       "Creating the ticket-resumed PSK failed",uVar6);
            if ((int)uVar6 < 0) goto LAB_001014d4;
            if (uVar6 == 1) goto LAB_00101e82;
            uVar6 = 0xffff9400;
          }
          goto LAB_00101ea0;
        }
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0xb8f,
                   "should never happen");
switchD_00101fe8_caseD_200000b:
        uVar6 = 0xffff9400;
      }
    }
LAB_001014d4:
    pcVar27 = "<= parse new session ticket";
    uVar20 = 0xbf9;
LAB_00101434:
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,pcVar27);
  }
LAB_00101098:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar6;
  }
LAB_001026be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102caa:
  if (puVar24 <= puVar23) {
    uVar20 = 0;
    mbedtls_ssl_print_extensions
              (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x726,iVar31,
               *(undefined4 *)(lVar29 + 0x66c));
    if (local_90 != 0) {
      uVar6 = 0xffffff92;
      goto LAB_00101772;
    }
    if (uVar5 != 1) {
      pcVar27 = "ServerHello";
      uVar6 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,2,local_60,local_58);
      if (uVar6 != 0) goto LAB_00101154;
      lVar29 = param_1[0xe];
      uVar6 = *(uint *)(lVar29 + 0x66c) & 0x402000;
      if (uVar6 == 0x400000) {
        *(undefined1 *)(lVar29 + 0x38) = 2;
        pcVar27 = "ephemeral";
        if ((*(byte *)(*param_1 + 0x20) & 2) == 0) goto LAB_00102db1;
LAB_00102e87:
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x77a,
                   "Selected key exchange mode: %s",pcVar27);
        uVar6 = mbedtls_ssl_tls13_key_schedule_stage_early(param_1);
        if (uVar6 == 0) {
          uVar6 = mbedtls_ssl_tls13_compute_handshake_transform(param_1);
          if (uVar6 == 0) {
            pcVar27 = "ServerHello";
            mbedtls_ssl_set_inbound_transform(param_1,*(undefined8 *)(lVar29 + 0x680));
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x79e,
                       "Switch to handshake keys for inbound traffic");
            *(undefined4 *)(param_1 + 1) = 0x13;
            param_1[10] = param_1[0xd];
            goto LAB_00101154;
          }
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x797,
                     "mbedtls_ssl_tls13_compute_handshake_transform",uVar6);
        }
        else {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x78f,
                     "mbedtls_ssl_tls13_key_schedule_stage_early",uVar6);
        }
      }
      else {
        if (uVar6 == 0x402000) {
          *(undefined1 *)(lVar29 + 0x38) = 4;
          pcVar27 = "psk_ephemeral";
          bVar26 = *(byte *)(*param_1 + 0x20) & 4;
joined_r0x00102e81:
          if (bVar26 != 0) goto LAB_00102e87;
LAB_00102db1:
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x774,
                     "Key exchange mode(%s) is not supported.",pcVar27);
        }
        else {
          if (uVar6 == 0x2000) {
            *(undefined1 *)(lVar29 + 0x38) = 1;
            pcVar27 = "psk";
            bVar26 = *(byte *)(*param_1 + 0x20) & 1;
            goto joined_r0x00102e81;
          }
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x76c,
                     "Unknown key exchange.");
        }
        uVar6 = 0xffff9200;
      }
      mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
      pcVar27 = "ServerHello";
      goto LAB_00101154;
    }
    pcVar27 = "HelloRetryRequest";
    uVar6 = mbedtls_ssl_reset_transcript_for_hrr(param_1,uVar20);
    if ((uVar6 != 0) ||
       (uVar6 = mbedtls_ssl_add_hs_msg_to_checksum(param_1,2,local_60,local_58), uVar6 != 0))
    goto LAB_00101154;
    mbedtls_ssl_session_reset_msg_layer(param_1,0);
    uVar6 = ssl_tls13_reset_key_share(param_1);
    if (uVar6 == 0) {
      *(undefined4 *)(param_1[0xd] + 0x10) = **(undefined4 **)(param_1[0xe] + 0x10);
      *(undefined4 *)(param_1 + 1) = 0x17;
    }
LAB_00102e61:
    pcVar27 = "HelloRetryRequest";
    goto LAB_00101154;
  }
  if ((long)puVar24 - (long)puVar23 < 4) {
    pcVar27 = "ssl_tls13_parse_server_hello";
    uVar20 = 0x6d7;
    goto LAB_00101f43;
  }
  puVar11 = puVar23 + 2;
  uVar28 = *puVar23;
  if (puVar24 < puVar11) {
LAB_0010398a:
    pcVar27 = "ssl_tls13_parse_server_hello";
    uVar20 = 0x6dc;
    goto LAB_00101f43;
  }
  uVar22 = puVar23[1] << 8 | puVar23[1] >> 8;
  uVar9 = (ulong)uVar22;
  if ((ulong)((long)puVar24 - (long)puVar11) < uVar9) goto LAB_0010398a;
  uVar10 = (ulong)uVar8;
  uVar30 = uVar28 << 8 | uVar28 >> 8;
  puVar13 = (ushort *)((long)puVar11 + uVar9);
  uVar6 = mbedtls_ssl_tls13_check_received_extension(param_1,iVar31,(uint)uVar30);
  if (uVar6 != 0) goto LAB_00101772;
  local_90 = 0;
  if (uVar28 == 0x2c00) {
    lVar14 = param_1[0xe];
    if ((puVar13 < puVar11) || (uVar22 < 2)) {
      uVar20 = 0x21b;
LAB_00103511:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,
                 "missing input data in %s","ssl_tls13_parse_cookie_ext");
      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
      uVar6 = 0xffff8d00;
    }
    else {
      puVar11 = puVar23 + 3;
      if (puVar13 < puVar11) {
LAB_00103b36:
        uVar20 = 0x21f;
        goto LAB_00103511;
      }
      uVar28 = puVar23[2] << 8 | puVar23[2] >> 8;
      uVar9 = (ulong)uVar28;
      if ((ulong)((long)puVar13 - (long)puVar11) < uVar9) goto LAB_00103b36;
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x220,"cookie extension",
                 puVar11,uVar9);
      free(*(void **)(lVar14 + 0x4b0));
      *(undefined2 *)(lVar14 + 0x4b8) = 0;
      pvVar12 = calloc(1,uVar9);
      *(void **)(lVar14 + 0x4b0) = pvVar12;
      if (pvVar12 != (void *)0x0) {
        __memcpy_chk(pvVar12,puVar11,uVar9,uVar9,uVar10);
        *(ushort *)(lVar14 + 0x4b8) = uVar28;
        puVar23 = puVar13;
        goto LAB_00102caa;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x226,
                 "alloc failed ( %ud bytes )",uVar9);
      uVar6 = 0xffff8100;
    }
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x6eb,
               "ssl_tls13_parse_cookie_ext",uVar6);
    goto LAB_00101772;
  }
  uVar10 = (ulong)(uint)uVar30;
  if (uVar30 < 0x2d) {
    if (uVar28 == 0x2900) {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x6fd,
                 "found pre_shared_key extension");
      if ((puVar13 < puVar11) || (uVar22 < 2)) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x43d,
                   "missing input data in %s","ssl_tls13_parse_server_pre_shared_key_ext");
        mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
        uVar6 = 0xffff8d00;
        goto LAB_0010331a;
      }
      uVar28 = puVar23[2] << 8 | puVar23[2] >> 8;
      *(ushort *)(param_1[0xe] + 0x400) = uVar28;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x441,
                 "selected_identity = %d",uVar28);
      iVar7 = ssl_tls13_get_configured_psk_count(param_1);
      if ((int)(uint)uVar28 < iVar7) {
        if ((((uVar28 == 0) && (lVar14 = param_1[0xd], *(char *)param_1[0xe] != '\0')) &&
            (lVar14 != 0)) &&
           ((*(long *)(lVar14 + 0x80) != 0 &&
            ((*(byte *)(lVar14 + 0xa4) & 5 & *(uint *)(*param_1 + 0x20)) != 0)))) {
          lVar19 = mbedtls_ssl_ciphersuite_from_id(*(undefined4 *)(lVar14 + 0x10));
          uVar6 = 0;
          if (lVar19 != 0) {
            uVar6 = *(byte *)(lVar19 + 0x11) | 0x2000000;
          }
          uVar9 = (ulong)*(byte *)(lVar14 + 0xa5);
          lVar14 = lVar14 + 0xa6;
LAB_00103613:
          if ((*(byte *)(*(long *)(param_1[0xe] + 0x10) + 0x11) | 0x2000000) != uVar6) {
            uVar20 = 0x45c;
            pcVar27 = "Invalid ciphersuite for external psk.";
            goto LAB_001036ba;
          }
          uVar6 = mbedtls_ssl_set_hs_psk(param_1,lVar14,uVar9);
          puVar23 = puVar13;
          if (uVar6 == 0) goto LAB_00102caa;
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x466,
                     "mbedtls_ssl_set_hs_psk",uVar6);
        }
        else {
          iVar7 = mbedtls_ssl_conf_has_static_psk();
          if (iVar7 == 0) {
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x453,
                       "should never happen");
            uVar6 = 0xffff9400;
          }
          else {
            iVar7 = mbedtls_ssl_conf_has_static_psk(*param_1);
            if (iVar7 != 0) {
              lVar14 = *(long *)(*param_1 + 0xf8);
              uVar9 = *(ulong *)(*param_1 + 0x100);
              uVar6 = 0x2000009;
              goto LAB_00103613;
            }
            uVar6 = 0xffffffff;
          }
        }
      }
      else {
        uVar20 = 0x444;
        pcVar27 = "Invalid PSK identity.";
LAB_001036ba:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",uVar20,pcVar27);
        mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
        uVar6 = 0xffff9a00;
      }
LAB_0010331a:
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x701,
                 "ssl_tls13_parse_server_pre_shared_key_ext",uVar6);
      goto LAB_00101772;
    }
    if (uVar28 != 0x2b00) goto LAB_0010328a;
    if ((puVar13 < puVar11) || (uVar22 < 2)) {
      pcVar27 = "ssl_tls13_parse_supported_versions_ext";
      uVar20 = 0x68;
      goto LAB_00101f43;
    }
    sVar3 = mbedtls_ssl_read_version(puVar11,*(undefined1 *)(*param_1 + 9));
    if (sVar3 != 0x304) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x6b,"unexpected version"
                );
      mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
      goto LAB_0010176b;
    }
    puVar23 = puVar23 + 3;
    if (puVar13 != puVar23) goto code_r0x001039d1;
    goto LAB_00102caa;
  }
  if (uVar28 != 0x3300) {
LAB_0010328a:
    uVar6 = 0xffff9400;
    goto LAB_00101772;
  }
  mbedtls_debug_print_msg(param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x709);
  if ((*(byte *)(*param_1 + 0x20) & 6) == 0) {
    mbedtls_ssl_pend_fatal_alert(param_1,0x6e,0xffff8b00);
    uVar6 = 0xffff8b00;
    goto LAB_00101772;
  }
  if (uVar5 == 1) {
    puVar34 = *(ushort **)(*param_1 + 0xf0);
    if (puVar34 != (ushort *)0x0) {
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x187,
                 "key_share extension",puVar11,uVar9,uVar10);
      if ((1 < uVar9) && (puVar11 <= puVar13)) {
        uVar28 = puVar23[2] << 8 | puVar23[2] >> 8;
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x18c,
                   "selected_group ( %d )",uVar28);
        while( true ) {
          uVar22 = *puVar34;
          if (uVar22 == 0) goto LAB_00103927;
          if ((((ushort)(uVar22 - 0x1d) < 2) || ((ushort)(uVar22 - 0x17) < 3)) &&
             ((iVar7 = mbedtls_ssl_get_psa_curve_info_from_tls_id(uVar22,0,0), iVar7 == -0x86 ||
              (uVar28 != *puVar34)))) break;
          puVar34 = puVar34 + 1;
        }
        if (uVar28 == *(ushort *)(param_1[0xe] + 0x550)) {
LAB_00103927:
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x1b2,
                     "Invalid key share in HRR");
          mbedtls_ssl_pend_fatal_alert(param_1,0x2f,0xffff9a00);
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x717,
                     "ssl_tls13_parse_key_share_ext",0xffff9a00);
          uVar6 = 0xffff9a00;
          goto LAB_00102e61;
        }
        *(ushort *)(param_1[0xe] + 0x550) = uVar28;
        puVar23 = puVar13;
        goto LAB_00102caa;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x18a,
                 "missing input data in %s","ssl_tls13_parse_hrr_key_share_ext");
      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x717,
                 "ssl_tls13_parse_key_share_ext",0xffff8d00);
      uVar6 = 0xffff8d00;
      goto LAB_00102e61;
    }
    uVar6 = 0xffffa180;
  }
  else {
    if ((uVar22 < 2) || (puVar13 < puVar11)) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x1de,
                 "missing input data in %s","ssl_tls13_parse_key_share_ext");
      mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x717,
                 "ssl_tls13_parse_key_share_ext",0xffff8d00);
      uVar6 = 0xffff8d00;
      goto LAB_00102b30;
    }
    uVar28 = puVar23[2];
    uVar22 = uVar28 << 8 | uVar28 >> 8;
    if (uVar22 != *(ushort *)(param_1[0xe] + 0x550)) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x1e5,
                 "Invalid server key share, our group %u, their group %u",
                 *(ushort *)(param_1[0xe] + 0x550),uVar22);
      mbedtls_ssl_pend_fatal_alert(param_1,0x28,0xffff9200);
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x717,
                 "ssl_tls13_parse_key_share_ext",0xffff9200);
      uVar6 = 0xffff9200;
      goto LAB_00102b30;
    }
    if (((((uVar28 + 0xe300 & 0xfeff) == 0) || (uVar28 == 0x1700)) || ((ushort)(uVar22 - 0x18) < 2))
       || ((ushort)(uVar22 - 0x100) < 5)) {
      uVar20 = mbedtls_ssl_named_group_to_str(uVar22);
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x1f0,
                 "DHE group name: %s",uVar20);
      uVar6 = mbedtls_ssl_tls13_read_public_xxdhe_share
                        (param_1,puVar23 + 3,(long)puVar13 - (long)(puVar23 + 3));
      puVar23 = puVar13;
      if (uVar6 == 0) goto LAB_00102caa;
    }
    else {
      uVar6 = 0xffff9400;
    }
  }
  mbedtls_debug_print_ret
            (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x717,
             "ssl_tls13_parse_key_share_ext",uVar6);
  goto LAB_00101772;
code_r0x001039d1:
  mbedtls_debug_print_msg
            (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x73,
             "supported_versions ext data length incorrect");
  mbedtls_ssl_pend_fatal_alert(param_1,0x32,0xffff8d00);
LAB_00101f67:
  uVar6 = 0xffff8d00;
LAB_00101772:
  pcVar27 = "ServerHello";
  if (uVar5 == 1) {
    pcVar27 = "HelloRetryRequest";
  }
LAB_00101154:
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_client.c",0x801,"<= %s ( %s )",
             "ssl_tls13_process_server_hello",pcVar27);
  goto LAB_00101098;
}


