
void ssl_extract_add_data_from_record
               (undefined8 *param_1,long *param_2,undefined8 *param_3,int param_4,short param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar4 = (ushort)param_3[5];
  if (param_4 == 0x304) {
    uVar4 = uVar4 + param_5;
    puVar5 = param_1;
  }
  else if (*(char *)(param_3 + 6) == '\0') {
    *param_1 = *param_3;
    puVar5 = param_1 + 1;
  }
  else {
    *param_1 = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)(param_3 + 6);
    puVar5 = (undefined8 *)((long)param_1 + 10);
  }
  *(undefined1 *)puVar5 = *(undefined1 *)(param_3 + 1);
  *(undefined2 *)((long)puVar5 + 1) = *(undefined2 *)((long)param_3 + 9);
  if (*(char *)(param_3 + 6) == '\0') {
    *(ushort *)((long)puVar5 + 3) = uVar4 << 8 | uVar4 >> 8;
    *param_2 = (long)puVar5 + (5 - (long)param_1);
    return;
  }
  puVar1 = (undefined4 *)((long)puVar5 + 0xb);
  *(undefined8 *)((long)puVar5 + 3) = *param_3;
  bVar2 = *(byte *)(param_3 + 6);
  uVar3 = (ulong)bVar2;
  if (bVar2 < 8) {
    if ((bVar2 & 4) != 0) {
      *puVar1 = *(undefined4 *)((long)param_3 + 0x31);
      *(undefined4 *)((long)puVar5 + uVar3 + 7) = *(undefined4 *)((long)param_3 + uVar3 + 0x2d);
      uVar3 = (ulong)*(byte *)(param_3 + 6);
      goto LAB_0010006a;
    }
    if (bVar2 == 0) goto LAB_0010006a;
    *(undefined1 *)puVar1 = *(undefined1 *)((long)param_3 + 0x31);
    if ((bVar2 & 2) != 0) {
      *(undefined2 *)((long)puVar5 + uVar3 + 9) = *(undefined2 *)((long)param_3 + uVar3 + 0x2f);
      uVar3 = (ulong)*(byte *)(param_3 + 6);
      goto LAB_0010006a;
    }
  }
  else {
    *(undefined8 *)((long)puVar5 + 0xb) = *(undefined8 *)((long)param_3 + 0x31);
    puVar6 = (undefined8 *)((long)puVar5 + 0x13U & 0xfffffffffffffff8);
    *(undefined8 *)((long)puVar5 + uVar3 + 3) = *(undefined8 *)((long)param_3 + uVar3 + 0x29);
    lVar7 = (long)puVar1 - (long)puVar6;
    puVar5 = (undefined8 *)((long)param_3 + (0x31 - lVar7));
    for (uVar3 = (ulong)((uint)bVar2 + (int)lVar7 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  uVar3 = (ulong)*(byte *)(param_3 + 6);
LAB_0010006a:
  *(ushort *)((long)puVar1 + uVar3) = uVar4 << 8 | uVar4 >> 8;
  *param_2 = (long)((long)((long)puVar1 + uVar3) + (2 - (long)param_1));
  return;
}



undefined8 ssl_hs_is_proper_fragment(long param_1)

{
  long lVar1;
  
  if ((((*(ulong *)(param_1 + 0x130) <= *(ulong *)(param_1 + 0x100)) &&
       (lVar1 = *(long *)(param_1 + 0xe8), *(short *)(lVar1 + 6) == 0)) &&
      (*(char *)(lVar1 + 8) == '\0')) &&
     ((*(short *)(lVar1 + 9) == *(short *)(lVar1 + 1) &&
      (*(char *)(lVar1 + 0xb) == *(char *)(lVar1 + 3))))) {
    return 0;
  }
  return 1;
}



undefined8 ssl_check_ctr_renegotiate(long *param_1)

{
  void *__s2;
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  size_t __n;
  
  if ((int)param_1[1] < 0x1b) {
    return 0;
  }
  if ((*(int *)((long)param_1 + 0xc) != 3) && (lVar1 = *param_1, *(char *)(lVar1 + 0x10) != '\0')) {
    uVar6 = (ulong)(*(char *)(lVar1 + 9) == '\x01');
    lVar2 = uVar6 * 2;
    __n = uVar6 * -2 + 8;
    __s2 = (void *)(lVar1 + 0x130 + lVar2);
    iVar3 = memcmp((void *)(param_1[0x18] + lVar2),__s2,__n);
    iVar4 = memcmp((void *)((long)param_1 + lVar2 + 0x1a0),__s2,__n);
    if ((0 < iVar3) || (0 < iVar4)) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1647,
                 "record counter limit reached: renegotiate");
      uVar5 = mbedtls_ssl_renegotiate(param_1);
      return uVar5;
    }
  }
  return 0;
}



void ssl_build_record_nonce_constprop_0
               (undefined8 *param_1,void *param_2,size_t param_3,ulong *param_4)

{
  void *pvVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  pvVar1 = memcpy(param_1,param_2,param_3);
  *(ulong *)((long)pvVar1 + 4) = *(ulong *)((long)pvVar1 + 4) ^ *param_4;
  return;
}



void ssl_buffering_free_slot_isra_0(long param_1,byte param_2)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  
  lVar1 = param_1 + (ulong)param_2 * 0x18;
  if ((*(byte *)(lVar1 + 0x438) & 1) == 0) {
    return;
  }
  *(long *)(param_1 + 0x428) = *(long *)(param_1 + 0x428) - *(long *)(lVar1 + 0x448);
  mbedtls_zeroize_and_free(*(undefined8 *)(lVar1 + 0x440));
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x438 + (ulong)param_2 * 0x18);
  *(undefined8 *)pauVar2[1] = 0;
  *pauVar2 = (undefined1  [16])0x0;
  return;
}



void mbedtls_ssl_set_timer(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms",param_2);
                    /* WARNING: Could not recover jumptable at 0x00100356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xa0),param_2 >> 2,param_2);
    return;
  }
  return;
}



undefined8 mbedtls_ssl_check_timer(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0xb0) == (code *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 0xa0));
  if (iVar1 != 2) {
    return 0;
  }
  mbedtls_debug_print_msg(param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x132,"timer expired");
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong mbedtls_ssl_encrypt_buf
                (undefined8 param_1,long param_2,undefined8 *param_3,code *param_4,
                undefined8 param_5)

{
  void *__src;
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 extraout_RDX;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  byte bVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong local_d8;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8 [48];
  undefined1 local_78 [56];
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x3a8,"=> encrypt buf");
  if (param_2 == 0) {
    pcVar16 = "no transform provided to encrypt_buf";
    uVar9 = 0x3ab;
    goto LAB_00100e3c;
  }
  if ((param_3 == (undefined8 *)0x0) || (param_3[2] == 0)) {
LAB_00100e30:
    pcVar16 = "bad record structure provided to encrypt_buf";
    uVar9 = 0x3b6;
  }
  else {
    if (((ulong)param_3[3] < (ulong)param_3[4]) ||
       (((ulong)(param_3[3] - param_3[4]) < (ulong)param_3[5] || (*(char *)(param_3 + 6) != '\0'))))
    goto LAB_00100e30;
    uVar3 = mbedtls_ssl_get_mode_from_transform(param_2);
    lVar11 = param_3[2] + param_3[4];
    lVar12 = param_3[3] - (param_3[4] + param_3[5]);
    mbedtls_debug_print_buf
              (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x3be,
               "before encrypt: output payload",lVar11,param_3[5]);
    uVar13 = param_3[5];
    if (0x4000 < uVar13) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x3c2,
                 "Record content %zu too large, maximum %zu",uVar13,0x4000);
      local_d8 = 0xffff8f00;
      goto LAB_00100899;
    }
    if (*(int *)(param_2 + 0x7c) == 0x304) {
      uVar4 = ~(uint)uVar13;
      uVar10 = uVar4 & 0xf;
      uVar8 = (ulong)uVar10;
      if (lVar12 != 0) {
        *(undefined1 *)(lVar11 + uVar13) = *(undefined1 *)(param_3 + 1);
        if (uVar8 <= lVar12 - 1U) {
          puVar14 = (undefined8 *)(lVar11 + uVar13 + 1);
          if (uVar10 < 8) {
            if ((uVar4 & 4) == 0) {
              if ((uVar10 != 0) && (*(undefined1 *)puVar14 = 0, (uVar4 & 2) != 0)) {
                *(undefined2 *)((uVar8 - 2) + (long)puVar14) = 0;
              }
            }
            else {
              *(undefined4 *)puVar14 = 0;
              *(undefined4 *)((uVar8 - 4) + (long)puVar14) = 0;
            }
          }
          else {
            *puVar14 = 0;
            *(undefined8 *)((uVar8 - 8) + (long)puVar14) = 0;
            uVar4 = ((int)puVar14 - (int)((ulong)(puVar14 + 1) & 0xfffffffffffffff8)) + uVar10 &
                    0xfffffff8;
            if (7 < uVar4) {
              uVar10 = 0;
              do {
                uVar17 = (ulong)uVar10;
                uVar10 = uVar10 + 8;
                *(undefined8 *)(((ulong)(puVar14 + 1) & 0xfffffffffffffff8) + uVar17) = 0;
              } while (uVar10 < uVar4);
            }
          }
          *(undefined1 *)(param_3 + 1) = 0x17;
          param_3[5] = uVar8 + uVar13 + 1;
          bVar1 = *(byte *)(param_2 + 0x141);
          uVar13 = (ulong)bVar1;
          *(byte *)(param_3 + 6) = bVar1;
          if (bVar1 < 8) {
            if ((bVar1 & 4) == 0) {
              if ((bVar1 != 0) &&
                 (*(undefined1 *)((long)param_3 + 0x31) = *(undefined1 *)(param_2 + 0x162),
                 (bVar1 & 2) != 0)) {
                *(undefined2 *)((long)param_3 + uVar13 + 0x2f) =
                     *(undefined2 *)(param_2 + 0x160 + uVar13);
              }
            }
            else {
              *(undefined4 *)((long)param_3 + 0x31) = *(undefined4 *)(param_2 + 0x162);
              *(undefined4 *)((long)param_3 + uVar13 + 0x2d) =
                   *(undefined4 *)(param_2 + 0x15e + uVar13);
            }
          }
          else {
            puVar15 = (undefined8 *)((long)param_3 + 0x39U & 0xfffffffffffffff8);
            *(undefined8 *)((long)param_3 + 0x31) = *(undefined8 *)(param_2 + 0x162);
            *(undefined8 *)((long)param_3 + uVar13 + 0x29) =
                 *(undefined8 *)(param_2 + 0x15a + uVar13);
            lVar7 = ((long)param_3 + 0x31) - (long)puVar15;
            puVar14 = (undefined8 *)((param_2 + 0x162) - lVar7);
            for (uVar8 = (ulong)((uint)bVar1 + (int)lVar7 >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
              puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
            }
          }
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x3ec,&_LC10,
                     (long)param_3 + 0x31,uVar13);
          lVar7 = param_3[5];
          if (*(char *)(param_3 + 6) != '\0') {
            uVar6 = *(undefined1 *)(param_3 + 1);
            uVar4 = (uint)lVar7;
            goto LAB_00100c8b;
          }
          goto LAB_0010056a;
        }
      }
LAB_00100894:
      local_d8 = 0xffff9600;
      goto LAB_00100899;
    }
    bVar1 = *(byte *)(param_2 + 0x141);
    uVar13 = (ulong)bVar1;
    *(byte *)(param_3 + 6) = bVar1;
    uVar4 = (uint)bVar1;
    if (uVar4 < 8) {
      if ((bVar1 & 4) == 0) {
        if ((uVar4 != 0) &&
           (*(undefined1 *)((long)param_3 + 0x31) = *(undefined1 *)(param_2 + 0x162),
           (bVar1 & 2) != 0)) {
          *(undefined2 *)((long)param_3 + uVar13 + 0x2f) = *(undefined2 *)(param_2 + 0x160 + uVar13)
          ;
        }
      }
      else {
        *(undefined4 *)((long)param_3 + 0x31) = *(undefined4 *)(param_2 + 0x162);
        *(undefined4 *)((long)param_3 + uVar13 + 0x2d) = *(undefined4 *)(param_2 + 0x15e + uVar13);
      }
    }
    else {
      puVar15 = (undefined8 *)((long)param_3 + 0x39U & 0xfffffffffffffff8);
      *(undefined8 *)((long)param_3 + 0x31) = *(undefined8 *)(param_2 + 0x162);
      lVar7 = ((long)param_3 + 0x31) - (long)puVar15;
      *(undefined8 *)((long)param_3 + uVar13 + 0x29) = *(undefined8 *)(param_2 + 0x15a + uVar13);
      puVar14 = (undefined8 *)((param_2 + 0x162) - lVar7);
      for (uVar8 = (ulong)((int)lVar7 + uVar4 >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
        puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
      }
    }
    mbedtls_debug_print_buf
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x3ec,&_LC10,(long)param_3 + 0x31,
               uVar13);
    lVar7 = param_3[5];
    if (*(char *)(param_3 + 6) != '\0') {
      uVar6 = *(undefined1 *)(param_3 + 1);
      uVar4 = (uint)lVar7;
      if (lVar12 != 0) {
LAB_00100c8b:
        uVar4 = ~uVar4;
        uVar10 = uVar4 & 0xf;
        uVar13 = (ulong)uVar10;
        *(undefined1 *)(lVar11 + lVar7) = uVar6;
        if (uVar13 <= lVar12 - 1U) {
          puVar14 = (undefined8 *)(lVar11 + lVar7 + 1);
          if (uVar10 < 8) {
            if ((uVar4 & 4) == 0) {
              if ((uVar10 != 0) && (*(undefined1 *)puVar14 = 0, (uVar4 & 2) != 0)) {
                *(undefined2 *)((long)puVar14 + (uVar13 - 2)) = 0;
              }
            }
            else {
              *(undefined4 *)puVar14 = 0;
              *(undefined4 *)((long)puVar14 + (uVar13 - 4)) = 0;
            }
          }
          else {
            *puVar14 = 0;
            *(undefined8 *)((uVar13 - 8) + (long)puVar14) = 0;
            uVar4 = uVar10 + ((int)puVar14 - (int)((ulong)(puVar14 + 1) & 0xfffffffffffffff8)) &
                    0xfffffff8;
            if (7 < uVar4) {
              uVar10 = 0;
              do {
                uVar8 = (ulong)uVar10;
                uVar10 = uVar10 + 8;
                *(undefined8 *)(((ulong)(puVar14 + 1) & 0xfffffffffffffff8) + uVar8) = 0;
              } while (uVar10 < uVar4);
            }
          }
          lVar7 = lVar7 + 1 + uVar13;
          *(undefined1 *)(param_3 + 1) = 0x19;
          param_3[5] = lVar7;
          goto LAB_0010056a;
        }
      }
      goto LAB_00100894;
    }
LAB_0010056a:
    uVar13 = (param_3[3] - param_3[4]) - lVar7;
    if (uVar3 < 2) {
      uVar9 = 0x40e;
      if (uVar13 < *(ulong *)(param_2 + 0x18)) {
LAB_0010087c:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar9,
                   "Buffer provided for encrypted record not large enough");
        goto LAB_00100894;
      }
      lVar12 = param_2 + 0x48;
      ssl_extract_add_data_from_record
                (local_78,&local_b8,param_3,*(undefined4 *)(param_2 + 0x7c),
                 *(undefined8 *)(param_2 + 0x20));
      uVar4 = mbedtls_md_hmac_update(lVar12,local_78,local_b8);
      if ((uVar4 == 0) && (uVar4 = mbedtls_md_hmac_update(lVar12,lVar11,param_3[5]), uVar4 == 0)) {
        uVar4 = mbedtls_md_hmac_finish(lVar12,local_a8);
        if ((uVar4 == 0) && (uVar4 = mbedtls_md_hmac_reset(lVar12), uVar4 == 0)) {
          memcpy((void *)(param_3[5] + lVar11),local_a8,*(size_t *)(param_2 + 0x18));
          mbedtls_debug_print_buf
                    (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",1099,"computed mac",
                     param_3[5] + lVar11,*(undefined8 *)(param_2 + 0x18));
          lVar12 = *(long *)(param_2 + 0x18);
          param_3[5] = param_3[5] + lVar12;
          uVar13 = uVar13 - lVar12;
          mbedtls_platform_zeroize(local_a8);
          bVar2 = true;
          goto LAB_001009b8;
        }
        mbedtls_platform_zeroize(local_a8,*(undefined8 *)(param_2 + 0x18));
      }
      else {
        mbedtls_platform_zeroize(local_a8,*(undefined8 *)(param_2 + 0x18));
      }
      local_d8 = (ulong)uVar4;
      uVar9 = 0x45c;
      pcVar16 = "mbedtls_md_hmac_xxx";
LAB_0010084c:
      mbedtls_debug_print_ret(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar9,pcVar16,uVar4);
      goto LAB_00100899;
    }
    if (uVar3 == 3) {
      lVar12 = *(long *)(param_2 + 8);
      uVar8 = *(ulong *)(param_2 + 0x20);
      lVar7 = *(long *)(param_2 + 0x10);
      if (uVar13 < uVar8) {
        uVar9 = 0x47e;
        goto LAB_0010087c;
      }
      ssl_build_record_nonce_constprop_0(local_a8,param_2 + 0x28,lVar7,param_3);
      ssl_extract_add_data_from_record
                (local_78,&local_b8,param_3,*(undefined4 *)(param_2 + 0x7c),uVar8);
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x49f,"IV used (internal)",
                 local_a8,*(undefined8 *)(param_2 + 8));
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x4a1,"IV used (transmitted)",
                 param_3,(ulong)(lVar12 != lVar7) << 3);
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x4a4,
                 "additional data used for AEAD",local_78,local_b8);
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x4a6,
                 "before encrypt: msglen = %zu, including 0 bytes of padding",param_3[5]);
      uVar4 = mbedtls_cipher_auth_encrypt_ext
                        (param_2 + 0x80,local_a8,*(undefined8 *)(param_2 + 8),local_78,local_b8,
                         lVar11,param_3[5],lVar11,param_3[3] - (lVar11 - param_3[2]),param_3 + 5,
                         *(undefined8 *)(param_2 + 0x20));
      if (uVar4 != 0) {
        local_d8 = (ulong)uVar4;
        uVar9 = 0x4c3;
        pcVar16 = "mbedtls_cipher_auth_encrypt_ext";
        goto LAB_0010084c;
      }
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x4c8,"after encrypt: tag",
                 (lVar11 - *(long *)(param_2 + 0x20)) + param_3[5],*(long *)(param_2 + 0x20));
      if (lVar12 != lVar7) {
        uVar9 = 0x4d3;
        if ((ulong)param_3[4] < 8) goto LAB_0010087c;
        *(undefined8 *)(lVar11 + -8) = *param_3;
        lVar11 = param_3[5] + _UNK_00109f88;
        param_3[4] = param_3[4] + __LC20;
        param_3[5] = lVar11;
      }
      goto LAB_0010075e;
    }
    bVar2 = false;
LAB_001009b8:
    if (1 < uVar3 - 1) {
      pcVar16 = "should never happen";
      uVar9 = 0x5b9;
      goto LAB_00100e3c;
    }
    lVar12 = param_3[5];
    uVar8 = *(ulong *)(param_2 + 8);
    uVar17 = uVar8 - (lVar12 + 1U) % uVar8;
    if (uVar8 == uVar17) {
      if (uVar13 == 0) goto LAB_00100870;
      *(undefined1 *)(lVar11 + lVar12) = 0;
LAB_00100de5:
      uVar8 = 1;
      uVar17 = 0;
    }
    else {
      uVar8 = uVar17 + 1;
      if (uVar13 < uVar8) {
LAB_00100870:
        uVar9 = 0x4f4;
        goto LAB_0010087c;
      }
      *(char *)(lVar11 + lVar12) = (char)uVar17;
      if (uVar17 == 0) goto LAB_00100de5;
      uVar5 = 1;
      do {
        lVar12 = lVar11 + uVar5;
        uVar5 = uVar5 + 1;
        *(char *)(lVar12 + param_3[5]) = (char)uVar17;
      } while (uVar5 <= uVar17);
    }
    uVar9 = 0x505;
    pcVar16 = "No PRNG provided to encrypt_record routine";
    param_3[5] = uVar17 + 1 + param_3[5];
    if (param_4 != (code *)0x0) {
      uVar9 = 0x50a;
      if ((ulong)param_3[4] < *(ulong *)(param_2 + 8)) goto LAB_0010087c;
      __src = (void *)(param_2 + 0x28);
      local_d8 = (*param_4)(param_5,__src,*(ulong *)(param_2 + 8),param_4,
                            "Buffer provided for encrypted record not large enough");
      if ((int)local_d8 != 0) goto LAB_00100899;
      memcpy((void *)(lVar11 - *(size_t *)(param_2 + 8)),__src,*(size_t *)(param_2 + 8));
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x519,
                 "before encrypt: msglen = %zu, including %zu bytes of IV and %zu bytes of padding",
                 param_3[5],*(undefined8 *)(param_2 + 8),uVar8);
      plVar19 = &local_b0;
      uVar4 = mbedtls_cipher_crypt
                        (param_2 + 0x80,__src,*(undefined8 *)(param_2 + 8),lVar11,param_3[5],lVar11)
      ;
      if (uVar4 != 0) {
        local_d8 = (ulong)uVar4;
        uVar9 = 0x550;
        pcVar16 = "mbedtls_cipher_crypt";
        goto LAB_0010084c;
      }
      if (param_3[5] != local_b0) {
        pcVar16 = "should never happen";
        uVar9 = 0x556;
        goto LAB_00100e3c;
      }
      lVar12 = *(long *)(param_2 + 8);
      param_3[4] = param_3[4] - lVar12;
      param_3[5] = param_3[5] + lVar12;
      if (bVar2) {
LAB_0010075e:
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x5c3,"<= encrypt buf");
        local_d8 = 0;
        goto LAB_00100899;
      }
      if ((uVar13 - 1) - uVar17 < *(ulong *)(param_2 + 0x18)) {
        uVar9 = 0x56a;
        goto LAB_0010087c;
      }
      ssl_extract_add_data_from_record
                (local_78,&local_b8,param_3,*(undefined4 *)(param_2 + 0x7c),
                 *(undefined8 *)(param_2 + 0x20),plVar19);
      uVar20 = 0x100ba9;
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x572,"using encrypt then mac");
      lVar7 = param_2 + 0x48;
      uVar9 = local_b8;
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x573,"MAC\'d meta-data",local_78)
      ;
      uVar4 = mbedtls_md_hmac_update(lVar7,local_78,local_b8);
      if (uVar4 == 0) {
        uVar4 = mbedtls_md_hmac_update(lVar7,lVar11 - lVar12,param_3[5],uVar20);
        uVar9 = extraout_RDX;
        if (uVar4 != 0) goto LAB_00100f43;
        uVar4 = mbedtls_md_hmac_finish(lVar7,local_a8);
        if ((uVar4 == 0) && (uVar4 = mbedtls_md_hmac_reset(lVar7), uVar4 == 0)) {
          memcpy((void *)((lVar11 - lVar12) + param_3[5]),local_a8,*(size_t *)(param_2 + 0x18));
          param_3[5] = param_3[5] + *(long *)(param_2 + 0x18);
          mbedtls_platform_zeroize(local_a8);
          goto LAB_0010075e;
        }
        mbedtls_platform_zeroize(local_a8,*(undefined8 *)(param_2 + 0x18));
      }
      else {
LAB_00100f43:
        mbedtls_platform_zeroize(local_a8,*(undefined8 *)(param_2 + 0x18),uVar9);
      }
      local_d8 = (ulong)uVar4;
      uVar9 = 0x5b1;
      pcVar16 = "HMAC calculation failed";
      goto LAB_0010084c;
    }
  }
LAB_00100e3c:
  mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar9,pcVar16);
  local_d8 = 0xffff9400;
LAB_00100899:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_d8;
}



int mbedtls_ssl_decrypt_buf(undefined8 param_1,long param_2,void *param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  void *__src;
  ulong uVar18;
  long in_FS_OFFSET;
  long lVar19;
  ulong local_1b8;
  undefined1 *local_1b0;
  ulong local_158;
  undefined8 local_150;
  undefined1 local_148 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b8 = 0xffffffffffffffff;
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x5e7,"=> decrypt buf");
  if ((param_3 == (void *)0x0) || (*(long *)((long)param_3 + 0x10) == 0)) {
LAB_00101b32:
    pcVar13 = "bad record structure provided to decrypt_buf";
    uVar11 = 0x5ec;
  }
  else {
    uVar14 = *(ulong *)((long)param_3 + 0x20);
    if ((*(ulong *)((long)param_3 + 0x18) < uVar14) ||
       (*(ulong *)((long)param_3 + 0x18) - uVar14 < *(ulong *)((long)param_3 + 0x28)))
    goto LAB_00101b32;
    __src = (void *)(*(long *)((long)param_3 + 0x10) + uVar14);
    iVar8 = mbedtls_ssl_get_mode_from_transform(param_2);
    if ((*(byte *)((long)param_3 + 0x30) != *(byte *)(param_2 + 0x140)) ||
       (iVar9 = memcmp((void *)((long)param_3 + 0x31),(void *)(param_2 + 0x142),
                       (ulong)*(byte *)((long)param_3 + 0x30)), iVar9 != 0)) {
      iVar8 = -0x6000;
      goto LAB_0010137c;
    }
    if (iVar8 == 3) {
      lVar19 = *(long *)(param_2 + 0x10);
      uVar14 = *(ulong *)((long)param_3 + 0x28);
      pvVar17 = __src;
      pvVar10 = param_3;
      if (lVar19 == *(long *)(param_2 + 8)) {
LAB_001013dd:
        uVar12 = *(ulong *)(param_2 + 0x20);
        if (uVar14 < uVar12) {
          pcVar13 = "msglen (%zu) < taglen (%zu) ";
          uVar11 = 0x630;
          goto LAB_00101832;
        }
        *(ulong *)((long)param_3 + 0x28) = uVar14 - uVar12;
        ssl_build_record_nonce_constprop_0(local_88,param_2 + 0x38,lVar19,pvVar10);
        ssl_extract_add_data_from_record
                  (local_c8,&local_150,param_3,*(undefined4 *)(param_2 + 0x7c),uVar12);
        mbedtls_debug_print_buf
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x648,
                   "additional data used for AEAD",local_c8,local_150);
        mbedtls_debug_print_buf
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x651,"IV used",local_88,
                   *(undefined8 *)(param_2 + 8));
        mbedtls_debug_print_buf
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x652,"TAG used",
                   *(long *)((long)param_3 + 0x28) + (long)pvVar17,*(undefined8 *)(param_2 + 0x20));
        iVar8 = mbedtls_cipher_auth_decrypt_ext
                          (param_2 + 0xe0,local_88,*(undefined8 *)(param_2 + 8),local_c8,local_150,
                           pvVar17,*(long *)(param_2 + 0x20) + *(long *)((long)param_3 + 0x28),
                           pvVar17,*(long *)((long)param_3 + 0x18) -
                                   ((long)pvVar17 - *(long *)((long)param_3 + 0x10)),&local_158,
                           *(long *)(param_2 + 0x20));
        if (iVar8 == 0) {
          pcVar13 = "should never happen";
          uVar11 = 0x67c;
          if (*(ulong *)((long)param_3 + 0x28) == local_158) goto LAB_00101329;
          goto LAB_00101519;
        }
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x66e,
                   "mbedtls_cipher_auth_decrypt_ext",iVar8);
        if (iVar8 != -0x6300) goto LAB_0010137c;
      }
      else {
        if (7 < uVar14) {
          uVar14 = uVar14 - 8;
          *(long *)((long)param_3 + 0x20) = *(long *)((long)param_3 + 0x20) + 8;
          *(ulong *)((long)param_3 + 0x28) = uVar14;
          pvVar17 = (void *)((long)__src + 8);
          pvVar10 = __src;
          goto LAB_001013dd;
        }
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x61f,
                   "msglen (%zu ) < explicit_iv_len (%zu) ",uVar14,8);
      }
LAB_0010184c:
      iVar8 = -0x7180;
      goto LAB_0010137c;
    }
    if (iVar8 - 1U < 2) {
      uVar12 = *(ulong *)(param_2 + 8);
      uVar14 = *(ulong *)((long)param_3 + 0x28);
      if ((uVar14 < uVar12 * 2) || (uVar14 < uVar12 + 1 + *(long *)(param_2 + 0x18))) {
        pcVar13 = "msglen (%zu) < max( ivlen(%zu), maclen (%zu) + 1 ) ( + expl IV )";
        uVar11 = 0x6aa;
LAB_00101832:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar11,pcVar13,uVar14,uVar12);
      }
      else {
        bVar6 = false;
        if (iVar8 == 2) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x6bf,"using encrypt then mac"
                    );
          *(long *)((long)param_3 + 0x28) =
               *(long *)((long)param_3 + 0x28) - *(long *)(param_2 + 0x18);
          ssl_extract_add_data_from_record
                    (local_c8,&local_150,param_3,*(undefined4 *)(param_2 + 0x7c),
                     *(undefined8 *)(param_2 + 0x20));
          uVar11 = local_150;
          lVar19 = param_2 + 0x60;
          mbedtls_debug_print_buf
                    (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x6d1,"MAC\'d meta-data",
                     local_c8,local_150);
          iVar8 = mbedtls_md_hmac_update(lVar19,local_c8,uVar11);
          if ((iVar8 == 0) &&
             (iVar8 = mbedtls_md_hmac_update(lVar19,__src,*(undefined8 *)((long)param_3 + 0x28)),
             iVar8 == 0)) {
            iVar8 = mbedtls_md_hmac_finish(lVar19,local_88);
            if ((iVar8 == 0) && (iVar8 = mbedtls_md_hmac_reset(lVar19), iVar8 == 0)) {
              mbedtls_debug_print_buf
                        (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x6fe,"message  mac",
                         *(long *)((long)param_3 + 0x28) + (long)__src,
                         *(undefined8 *)(param_2 + 0x18));
              mbedtls_debug_print_buf
                        (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x700,"expected mac",
                         local_88);
              iVar8 = mbedtls_ct_memcmp(*(long *)((long)param_3 + 0x28) + (long)__src,local_88,
                                        *(undefined8 *)(param_2 + 0x18));
              if (iVar8 != 0) {
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x706,
                           "message mac does not match",0x101a57);
                mbedtls_platform_zeroize(local_88,*(undefined8 *)(param_2 + 0x18));
                goto LAB_0010184c;
              }
              mbedtls_platform_zeroize(local_88,*(undefined8 *)(param_2 + 0x18));
              uVar14 = *(ulong *)((long)param_3 + 0x28);
              uVar12 = *(size_t *)(param_2 + 8);
              bVar6 = true;
              goto LAB_00101185;
            }
            mbedtls_platform_zeroize(local_88,*(undefined8 *)(param_2 + 0x18));
          }
          else {
            mbedtls_platform_zeroize(local_88,*(undefined8 *)(param_2 + 0x18));
          }
          if (iVar8 != -0x7180) {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x719,"mbedtls_hmac_xxx",
                       iVar8);
          }
          goto LAB_0010137c;
        }
LAB_00101185:
        if (uVar14 % uVar12 != 0) {
          pcVar13 = "msglen (%zu) %% ivlen (%zu) != 0";
          uVar11 = 0x728;
          goto LAB_00101832;
        }
        pvVar10 = memcpy((void *)(param_2 + 0x38),__src,uVar12);
        lVar19 = *(long *)((long)param_3 + 0x28) - uVar12;
        pvVar17 = (void *)((long)__src + uVar12);
        *(ulong *)((long)param_3 + 0x20) = uVar12 + *(long *)((long)param_3 + 0x20);
        *(long *)((long)param_3 + 0x28) = lVar19;
        iVar8 = mbedtls_cipher_crypt
                          (param_2 + 0xe0,pvVar10,uVar12,pvVar17,lVar19,pvVar17,&local_158);
        if (iVar8 != 0) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x768,"mbedtls_cipher_crypt",
                     iVar8);
          goto LAB_0010137c;
        }
        uVar14 = *(ulong *)((long)param_3 + 0x28);
        if (uVar14 != local_158) {
          pcVar13 = "should never happen";
          uVar11 = 0x76f;
          goto LAB_00101519;
        }
        uVar18 = (ulong)*(byte *)((long)pvVar17 + (uVar14 - 1));
        uVar12 = uVar18 + 1;
        if (!bVar6) {
          uVar12 = uVar18 + 1 + *(long *)(param_2 + 0x18);
        }
        local_1b8 = ~((long)(uVar14 - uVar12 & ~(uVar14 ^ uVar12) | uVar12 & (uVar14 ^ uVar12)) >>
                     0x3f);
        uVar18 = uVar18 & local_1b8;
        uVar12 = uVar18 + 1;
        uVar15 = 0x100;
        if (uVar14 < 0x101) {
          uVar15 = uVar14;
        }
        uVar15 = uVar14 - uVar15;
        uVar16 = 0;
        if (uVar15 < uVar14) {
          uVar16 = 0;
          do {
            uVar5 = (uint)(uVar14 - uVar12 >> 0x20);
            uVar4 = (uint)(uVar15 >> 0x20) ^ uVar5;
            lVar19 = uVar15 - (uVar14 - uVar12);
            pbVar2 = (byte *)((long)pvVar17 + uVar15);
            uVar15 = uVar15 + 1;
            uVar16 = uVar16 + (~((int)((uint)(-(*pbVar2 ^ uVar18) >> 0x20) |
                                      (uint)((ulong)lVar19 >> 0x20) & ~uVar4 | uVar5 & uVar4) >>
                                0x1f) & 1);
          } while (uVar15 < uVar14);
        }
        local_1b8 = ~((long)(-(uVar16 ^ uVar12) | uVar16 ^ uVar12) >> 0x3f) & local_1b8;
        lVar19 = uVar14 - (uVar12 & local_1b8);
        *(long *)((long)param_3 + 0x28) = lVar19;
        if (!bVar6) {
          uVar11 = *(undefined8 *)(param_2 + 0x20);
          *(long *)((long)param_3 + 0x28) = lVar19 - *(long *)(param_2 + 0x18);
          local_128 = (undefined1  [16])0x0;
          local_118 = (undefined1  [16])0x0;
          local_108 = (undefined1  [16])0x0;
          local_f8 = (undefined1  [16])0x0;
          local_e8 = (undefined1  [16])0x0;
          local_d8 = (undefined1  [16])0x0;
          ssl_extract_add_data_from_record
                    (local_c8,&local_150,param_3,*(undefined4 *)(param_2 + 0x7c),uVar11);
          uVar14 = *(ulong *)((long)param_3 + 0x28);
          iVar8 = mbedtls_md_get_type(*(undefined8 *)(param_2 + 0x60));
          lVar19 = 0x80;
          if (iVar8 != 10) {
            lVar19 = 0x40;
          }
          lVar3 = *(long *)(param_2 + 0x70);
          uVar7 = mbedtls_md_get_size(*(undefined8 *)(param_2 + 0x60));
          mbedtls_md_init(local_148);
          iVar8 = mbedtls_md_setup(local_148,*(undefined8 *)(param_2 + 0x60),0);
          if (iVar8 == 0) {
            lVar1 = param_2 + 0x60;
            iVar8 = mbedtls_md_update(lVar1,local_c8,local_150);
            if (iVar8 != 0) goto LAB_0010177e;
            uVar12 = uVar14 + (uVar12 & local_1b8);
            uVar18 = 0x100;
            if (0xff < uVar12) {
              uVar18 = uVar12;
            }
            uVar18 = uVar18 - 0x100;
            iVar8 = mbedtls_md_update(lVar1,pvVar17,uVar18);
            if (iVar8 != 0) goto LAB_0010177e;
            __memset_chk(local_128,0x21,uVar7,0x30);
            for (uVar15 = uVar18; uVar15 <= uVar12; uVar15 = uVar15 + 1) {
              local_1b0 = local_128;
              iVar8 = mbedtls_md_clone(local_148,lVar1);
              if (((iVar8 != 0) || (iVar8 = mbedtls_md_finish(local_148,local_88), iVar8 != 0)) ||
                 ((uVar16 = uVar15 ^ uVar14,
                  mbedtls_ct_memcpy_if
                            (~((long)(-uVar16 | uVar16) >> 0x3f),local_1b0,local_88,0,uVar7),
                  uVar15 < uVar12 &&
                  (iVar8 = mbedtls_md_update(lVar1,(long)pvVar17 + uVar15,1), iVar8 != 0))))
              goto LAB_00101a14;
            }
            local_1b0 = local_128;
            iVar8 = mbedtls_md_finish(lVar1,local_88);
            if (iVar8 == 0) {
              iVar8 = mbedtls_md_starts(lVar1);
              if ((((iVar8 == 0) && (iVar8 = mbedtls_md_update(lVar1,lVar3 + lVar19), iVar8 == 0))
                  && (iVar8 = mbedtls_md_update(lVar1,local_1b0,uVar7), iVar8 == 0)) &&
                 (iVar8 = mbedtls_md_finish(lVar1,local_1b0), iVar8 == 0)) {
                iVar8 = mbedtls_md_hmac_reset(lVar1);
                mbedtls_md_free(local_148);
                if (iVar8 == 0) {
                  mbedtls_ct_memcpy_offset
                            (local_f8,pvVar17,*(undefined8 *)((long)param_3 + 0x28),uVar18,uVar12,
                             *(undefined8 *)(param_2 + 0x18));
                  iVar8 = mbedtls_ct_memcmp(local_f8,local_1b0,*(undefined8 *)(param_2 + 0x18));
                  if (iVar8 != 0) {
                    local_1b8 = 0;
                  }
                  mbedtls_platform_zeroize(local_f8,*(undefined8 *)(param_2 + 0x18));
                  mbedtls_platform_zeroize(local_1b0,*(undefined8 *)(param_2 + 0x18));
                  goto LAB_00101329;
                }
              }
              else {
                mbedtls_md_free(local_148);
              }
            }
            else {
LAB_00101a14:
              mbedtls_md_free(local_148);
            }
          }
          else {
LAB_0010177e:
            mbedtls_md_free(local_148);
          }
          local_1b0 = local_128;
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x806,"mbedtls_ct_hmac",iVar8)
          ;
          mbedtls_platform_zeroize(local_f8,*(undefined8 *)(param_2 + 0x18));
          mbedtls_platform_zeroize(local_1b0,*(undefined8 *)(param_2 + 0x18));
          goto LAB_0010137c;
        }
LAB_00101329:
        if (local_1b8 != 0) {
          if (*(int *)(param_2 + 0x7c) == 0x304) {
            lVar19 = *(long *)((long)param_3 + 0x28);
            do {
              if (lVar19 == 0) goto LAB_00101375;
              lVar19 = lVar19 + -1;
            } while (*(char *)((long)pvVar17 + lVar19) == '\0');
            *(long *)((long)param_3 + 0x28) = lVar19;
            *(undefined1 *)((long)param_3 + 8) = *(undefined1 *)((long)pvVar17 + lVar19);
          }
          if (*(char *)((long)param_3 + 0x30) != '\0') {
            lVar19 = *(long *)((long)param_3 + 0x28);
            do {
              if (lVar19 == 0) goto LAB_00101375;
              lVar19 = lVar19 + -1;
            } while (*(char *)((long)pvVar17 + lVar19) == '\0');
            *(long *)((long)param_3 + 0x28) = lVar19;
            *(undefined1 *)((long)param_3 + 8) = *(undefined1 *)((long)pvVar17 + lVar19);
          }
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x84a,"<= decrypt buf");
          iVar8 = 0;
          goto LAB_0010137c;
        }
      }
      goto LAB_0010184c;
    }
    pcVar13 = "should never happen";
    uVar11 = 0x7c4;
  }
LAB_00101519:
  mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar11,pcVar13);
  iVar8 = -0x6c00;
LAB_0010137c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101375:
  iVar8 = -0x7200;
  goto LAB_0010137c;
}



void mbedtls_ssl_flight_free(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  do {
    puVar1 = (undefined8 *)param_1[3];
    free((void *)*param_1);
    free(param_1);
    param_1 = puVar1;
  } while (puVar1 != (undefined8 *)0x0);
  return;
}



void mbedtls_ssl_recv_flight_completed(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *__ptr;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x70);
  __ptr = *(undefined8 **)(lVar5 + 0x4c8);
  if (__ptr != (undefined8 *)0x0) {
    do {
      puVar1 = (undefined8 *)__ptr[3];
      free((void *)*__ptr);
      free(__ptr);
      __ptr = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    lVar5 = *(long *)(param_1 + 0x70);
  }
  *(undefined1 *)(lVar5 + 0x430) = 0;
  *(undefined1 (*) [16])(lVar5 + 0x4c8) = (undefined1  [16])0x0;
  *(undefined4 *)(lVar5 + 0x4e0) = *(undefined4 *)(lVar5 + 0x4c0);
  if (*(void **)(lVar5 + 0x498) != (void *)0x0) {
    *(long *)(lVar5 + 0x428) = *(long *)(lVar5 + 0x428) - *(long *)(lVar5 + 0x4a0);
    free(*(void **)(lVar5 + 0x498));
    *(undefined8 *)(lVar5 + 0x498) = 0;
  }
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    ssl_buffering_free_slot_isra_0(*(undefined8 *)(param_1 + 0x70),iVar3);
    iVar3 = iVar4;
  } while (iVar4 != 4);
  if (*(long *)(param_1 + 0xa8) != 0) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms",0);
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xa0),0,0);
  }
  cVar2 = '\0';
  if (*(int *)(param_1 + 0xf8) == 0x16) {
    cVar2 = (**(char **)(param_1 + 0xe8) == '\x14') * '\x03';
  }
  *(char *)(*(long *)(param_1 + 0x70) + 0xd) = cVar2;
  return;
}



void mbedtls_ssl_send_flight_completed(long *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  
  *(undefined4 *)(param_1[0xe] + 0x4c4) = *(undefined4 *)(*param_1 + 0x124);
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x207,
             "update timeout value to %lu millisecs");
  lVar2 = param_1[0xe];
  if (param_1[0x15] != 0) {
    uVar1 = *(uint *)(lVar2 + 0x4c4);
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms",uVar1);
    (*(code *)param_1[0x15])(param_1[0x14],uVar1 >> 2,uVar1);
    lVar2 = param_1[0xe];
  }
  cVar3 = '\x02';
  if ((int)param_1[0x1f] == 0x16) {
    cVar3 = (*(char *)param_1[0x1d] == '\x14') + '\x02';
  }
  *(char *)(lVar2 + 0xd) = cVar3;
  return;
}



undefined8
mbedtls_ssl_start_handshake_msg(long param_1,undefined1 param_2,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  
  *param_3 = *(long *)(param_1 + 0x180) + 4;
  puVar1 = *(undefined1 **)(param_1 + 0x180);
  *param_4 = 0x3ffc;
  *(undefined4 *)(param_1 + 0x188) = 0x16;
  *puVar1 = param_2;
  return 0;
}



int mbedtls_ssl_update_handshake_status(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = param_1[0xe];
  if ((((int)param_1[1] < 0x1b) && (lVar1 != 0)) &&
     (iVar3 = (**(code **)(lVar1 + 0x18))(param_1,param_1[0x1d],param_1[0x26]), iVar3 != 0)) {
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xd5d,"update_checksum",iVar3);
    return iVar3;
  }
  if ((*(char *)(*param_1 + 9) == '\x01') && (lVar2 = param_1[0xe], lVar2 != 0)) {
    *(int *)(lVar1 + 0x4c0) = *(int *)(lVar1 + 0x4c0) + 1;
    ssl_buffering_free_slot_isra_0(lVar2,0);
    memmove((void *)(lVar1 + 0x438),(void *)(lVar1 + 0x450),0x48);
    *(undefined8 *)(lVar1 + 0x490) = 0;
    *(undefined1 (*) [16])(lVar1 + 0x480) = (undefined1  [16])0x0;
  }
  return 0;
}



void mbedtls_ssl_dtls_replay_reset(long param_1)

{
  *(undefined1 (*) [16])(param_1 + 0x120) = (undefined1  [16])0x0;
  return;
}



int mbedtls_ssl_dtls_replay_check(long *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(*param_1 + 0xf) != '\0') {
    lVar1 = param_1[0x18];
    uVar2 = (ulong)*(byte *)(lVar1 + 2) << 0x28 | (ulong)*(byte *)(lVar1 + 3) << 0x20 |
            (ulong)*(byte *)(lVar1 + 7) | (ulong)*(byte *)(lVar1 + 4) << 0x18 |
            (ulong)*(byte *)(lVar1 + 5) << 0x10 | (ulong)*(byte *)(lVar1 + 6) << 8;
    iVar3 = 0;
    if (uVar2 <= (ulong)param_1[0x24]) {
      uVar2 = param_1[0x24] - uVar2;
      if (uVar2 < 0x40) {
        iVar3 = -((uint)((ulong)param_1[0x25] >> ((byte)uVar2 & 0x3f)) & 1);
      }
      else {
        iVar3 = -1;
      }
    }
  }
  return iVar3;
}



undefined8 ssl_parse_record_header(long *param_1,char *param_2,ulong param_3,ushort *param_4)

{
  char cVar1;
  uint *puVar2;
  size_t __n;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ushort uVar6;
  char *pcVar7;
  ulong uVar8;
  ushort uVar9;
  long lVar10;
  
  puVar2 = (uint *)*param_1;
  if (*(char *)((long)puVar2 + 9) == '\x01') {
    if (param_3 < 0xd) goto LAB_00102424;
    cVar1 = *param_2;
    *(undefined1 *)(param_4 + 0x18) = 0;
    *(char *)(param_4 + 4) = cVar1;
    __n = *(size_t *)(puVar2 + 0x30);
    if ((__n == 0) || (cVar1 != '\x19')) {
      if (3 < (byte)(cVar1 - 0x14U)) goto LAB_001023f8;
      lVar10 = 0xb;
      *(char *)((long)param_4 + 9) = param_2[1];
      *(char *)(param_4 + 5) = param_2[2];
      uVar6 = *(ushort *)(param_2 + 1);
      uVar4 = *puVar2;
      uVar9 = uVar6 << 8 | uVar6 >> 8;
    }
    else {
      lVar10 = __n + 0xb;
      if (param_3 < __n + 0xd) {
        uVar4 = (int)lVar10 + 2;
        uVar8 = param_3 & 0xffffffff;
        uVar5 = 0xf40;
        pcVar7 = 
        "datagram of length %u too small to hold DTLS record header including CID, length %u";
        goto LAB_00102440;
      }
      *(char *)(param_4 + 0x18) = (char)__n;
      memcpy((void *)((long)param_4 + 0x31),param_2 + 0xb,__n);
      puVar2 = (uint *)*param_1;
      cVar1 = *(char *)((long)puVar2 + 9);
      *(char *)((long)param_4 + 9) = param_2[1];
      *(char *)(param_4 + 5) = param_2[2];
      uVar6 = *(ushort *)(param_2 + 1);
      uVar4 = *puVar2;
      uVar9 = uVar6 << 8 | uVar6 >> 8;
      if (cVar1 != '\x01') goto LAB_0010217a;
    }
    uVar6 = ((uVar6 == 0xfffe) - uVar9) + 0x200;
    uVar8 = (ulong)uVar6;
    if (uVar4 < uVar6) goto LAB_00102453;
    uVar5 = *(undefined8 *)(param_2 + 3);
  }
  else {
    if (param_3 < 5) {
LAB_00102424:
      uVar8 = param_3 & 0xffffffff;
      uVar5 = 0xf18;
      uVar4 = 4;
      pcVar7 = "datagram of length %u too small to hold DTLS record header of length %u";
      goto LAB_00102440;
    }
    cVar1 = *param_2;
    *(undefined1 *)(param_4 + 0x18) = 0;
    *(char *)(param_4 + 4) = cVar1;
    if (3 < (byte)(cVar1 - 0x14U)) {
LAB_001023f8:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xf50,"unknown record type %u");
      return 0xffff8e00;
    }
    lVar10 = 3;
    *(char *)((long)param_4 + 9) = param_2[1];
    *(char *)(param_4 + 5) = param_2[2];
    uVar4 = *puVar2;
    uVar9 = *(ushort *)(param_2 + 1) << 8 | *(ushort *)(param_2 + 1) >> 8;
LAB_0010217a:
    uVar8 = (ulong)uVar9;
    if (uVar4 < uVar9) {
LAB_00102453:
      uVar5 = 0xf60;
      pcVar7 = "TLS version mismatch: got %u, expected max %u";
      goto LAB_00102440;
    }
    uVar5 = *(undefined8 *)param_1[0x18];
  }
  *(undefined8 *)param_4 = uVar5;
  *(long *)(param_4 + 0x10) = lVar10 + 2;
  *(ulong *)(param_4 + 0x14) =
       (ulong)(ushort)(*(ushort *)(param_2 + lVar10) << 8 | *(ushort *)(param_2 + lVar10) >> 8);
  mbedtls_debug_print_buf
            (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xf7c,"input record header",param_2,
             lVar10 + 2);
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xf7e,
             "input record: msgtype = %u, version = [0x%x], msglen = %zu",(char)param_4[4],uVar8,
             *(undefined8 *)(param_4 + 0x14));
  lVar10 = *(long *)(param_4 + 0x14);
  *(char **)(param_4 + 8) = param_2;
  uVar8 = *(long *)(param_4 + 0x10) + lVar10;
  *(ulong *)(param_4 + 0xc) = uVar8;
  if (lVar10 == 0) {
    return 0xffff8e00;
  }
  if (*(char *)(*param_1 + 9) != '\x01') {
    return 0;
  }
  uVar6 = *param_4 << 8 | *param_4 >> 8;
  if (uVar8 <= param_3) {
    if (uVar6 == *(ushort *)(param_1 + 0x22)) {
      lVar10 = param_1[0x18];
      param_1[0x18] = (long)param_4;
      iVar3 = mbedtls_ssl_dtls_replay_check(param_1);
      param_1[0x18] = lVar10;
      if (iVar3 == 0) {
        return 0;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xfba,"replayed record");
    }
    else {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xfa8,
                 "record from another epoch: expected %u, received %lu",*(ushort *)(param_1 + 0x22),
                 uVar6);
      if (*(ushort *)(param_1 + 0x22) + 1 == (uint)uVar6) {
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xfaf,
                   "Consider record for buffering");
        return 0xffff9b80;
      }
    }
    return 0xffff9900;
  }
  uVar4 = (int)*(long *)(param_4 + 0x10) + (int)lVar10;
  uVar8 = param_3 & 0xffffffff;
  pcVar7 = "Datagram of length %u too small to contain record of advertised length %u.";
  uVar5 = 0xf9c;
LAB_00102440:
  mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar5,pcVar7,uVar8,uVar4)
  ;
  return 0xffff8e00;
}



int mbedtls_ssl_check_record(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg
            (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x144,"=> mbedtls_ssl_check_record");
  mbedtls_debug_print_buf
            (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x145,"record buffer",param_2);
  if (*(char *)(*param_1 + 9) == '\0') {
    iVar1 = -0x7080;
    mbedtls_platform_zeroize(param_2,param_3,param_3,0x1024eb);
    goto LAB_0010252c;
  }
  iVar1 = ssl_parse_record_header(param_1,param_2,param_3,auStack_98);
  if (iVar1 == 0) {
    if (param_1[0xf] != 0) {
      iVar2 = mbedtls_ssl_decrypt_buf(param_1,param_1[0xf],auStack_98);
      if (iVar2 != 0) {
        mbedtls_debug_print_ret
                  (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x15b,"mbedtls_ssl_decrypt_buf",
                   iVar2);
        iVar1 = iVar2;
        goto LAB_001025df;
      }
    }
    mbedtls_platform_zeroize(param_2,param_3);
  }
  else {
    mbedtls_debug_print_ret
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x154,"ssl_parse_record_header",
               iVar1);
LAB_001025df:
    mbedtls_platform_zeroize(param_2,param_3);
    if ((iVar1 == -0x6000) || (iVar1 == -0x6480)) {
      iVar1 = -0x6700;
    }
  }
LAB_0010252c:
  mbedtls_debug_print_msg
            (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x16e,"<= mbedtls_ssl_check_record");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ssl_dtls_replay_update(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(*param_1 + 0xf) != '\0') {
    lVar1 = param_1[0x18];
    uVar2 = param_1[0x24];
    uVar3 = (ulong)*(byte *)(lVar1 + 2) << 0x28 | (ulong)*(byte *)(lVar1 + 3) << 0x20 |
            (ulong)*(byte *)(lVar1 + 7) | (ulong)*(byte *)(lVar1 + 4) << 0x18 |
            (ulong)*(byte *)(lVar1 + 5) << 0x10 | (ulong)*(byte *)(lVar1 + 6) << 8;
    if (uVar2 < uVar3) {
      if (0x3f < uVar3 - uVar2) {
        param_1[0x25] = 1;
        param_1[0x24] = uVar3;
        return;
      }
      param_1[0x24] = uVar3;
      param_1[0x25] = param_1[0x25] << ((byte)(uVar3 - uVar2) & 0x3f) | 1;
      return;
    }
    if (uVar2 - uVar3 < 0x40) {
      param_1[0x25] = param_1[0x25] | 1L << ((byte)(uVar2 - uVar3) & 0x3f);
    }
  }
  return;
}



void mbedtls_ssl_update_out_pointers(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[0x2c];
  lVar2 = lVar1 + 3;
  if (*(char *)(*param_1 + 9) != '\x01') {
    lVar1 = lVar1 + 5;
    param_1[0x2e] = lVar2;
    param_1[0x2d] = lVar2;
    param_1[0x2f] = lVar1;
    param_1[0x30] = lVar1;
    if (param_2 != 0) {
      param_1[0x30] = (lVar1 + *(long *)(param_2 + 8)) - *(long *)(param_2 + 0x10);
    }
    return;
  }
  param_1[0x2b] = lVar2;
  lVar2 = lVar1 + 0xb;
  param_1[0x2d] = lVar2;
  param_1[0x2e] = lVar2;
  if (param_2 != 0) {
    lVar2 = lVar2 + (ulong)*(byte *)(param_2 + 0x141);
    lVar1 = lVar2 + 2;
    param_1[0x2e] = lVar2;
    param_1[0x2f] = lVar1;
    param_1[0x30] = (lVar1 + *(long *)(param_2 + 8)) - *(long *)(param_2 + 0x10);
    return;
  }
  param_1[0x2f] = lVar1 + 0xd;
  param_1[0x30] = lVar1 + 0xd;
  return;
}



int mbedtls_ssl_flush_output(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x932,"=> flush output");
  if (param_1[6] == 0) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x935,
               "Bad usage of mbedtls_ssl_set_bio() ");
    return -0x7100;
  }
  lVar3 = param_1[0x33];
  if (lVar3 == 0) {
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x93b,"<= flush output");
  }
  else {
    do {
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x940,
                 "message length: %zu, out_left: %zu",
                 (param_1[0x2f] - param_1[0x2c]) + param_1[0x32],lVar3);
      iVar2 = (*(code *)param_1[6])(param_1[9],param_1[0x2c] - param_1[0x33]);
      mbedtls_debug_print_ret
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x947,"ssl->f_send",iVar2);
      if (iVar2 < 1) {
        return iVar2;
      }
      uVar1 = param_1[0x33];
      uVar4 = (ulong)iVar2;
      if (uVar1 < uVar4) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x94e,
                   "f_send returned %d bytes but only %zu bytes were sent",iVar2,uVar1);
        return -0x6c00;
      }
      lVar3 = uVar1 - uVar4;
      param_1[0x33] = lVar3;
    } while (lVar3 != 0);
    lVar3 = param_1[0x2a];
    if (*(char *)(*param_1 + 9) != '\x01') {
      lVar3 = lVar3 + 8;
    }
    param_1[0x2c] = lVar3;
    mbedtls_ssl_update_out_pointers(param_1,param_1[0x10],*param_1,uVar4,"<= flush output");
    mbedtls_debug_print_msg();
  }
  return 0;
}



undefined8 ssl_swap_epochs(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x80) != *(long *)(*(long *)(param_1 + 0x70) + 0x4e8)) {
    mbedtls_debug_print_msg(param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x9b9,"swap epochs");
    lVar1 = *(long *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x4e8);
    *(undefined8 *)(lVar1 + 0x4e8) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar1 + 0x4f0);
    *(undefined8 *)(lVar1 + 0x4f0) = uVar2;
    mbedtls_ssl_update_out_pointers(param_1,*(undefined8 *)(param_1 + 0x80));
    return 0;
  }
  mbedtls_debug_print_msg(param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x9b5,"skip swap epochs")
  ;
  return 0;
}



void mbedtls_ssl_update_in_pointers(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1[0x19];
  if (*(char *)(*param_1 + 9) == '\x01') {
    lVar4 = lVar1 + 0xb;
    lVar2 = lVar1 + 0xd;
    lVar3 = lVar1 + 3;
  }
  else {
    lVar2 = lVar1 + 5;
    lVar3 = param_1[0x17];
    lVar4 = lVar1 + 3;
  }
  param_1[0x18] = lVar3;
  param_1[0x1c] = lVar2;
  param_1[0x1d] = lVar2;
  param_1[0x1a] = lVar4;
  param_1[0x1b] = lVar4;
  return;
}



void mbedtls_ssl_reset_in_pointers(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[0x17];
  lVar2 = lVar1;
  lVar3 = lVar1 + 8;
  if (*(char *)(*param_1 + 9) == '\x01') {
    lVar2 = lVar1 + 3;
    lVar3 = lVar1;
  }
  param_1[0x1c] = lVar1 + 0xd;
  param_1[0x1d] = lVar1 + 0xd;
  param_1[0x18] = lVar2;
  param_1[0x19] = lVar3;
  param_1[0x1a] = lVar1 + 0xb;
  param_1[0x1b] = lVar1 + 0xb;
  return;
}



void mbedtls_ssl_reset_out_pointers(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[0x2a];
  lVar2 = lVar1;
  lVar3 = lVar1 + 8;
  if (*(char *)(*param_1 + 9) == '\x01') {
    lVar2 = lVar1 + 3;
    lVar3 = lVar1;
  }
  param_1[0x2f] = lVar1 + 0xd;
  param_1[0x30] = lVar1 + 0xd;
  param_1[0x2b] = lVar2;
  param_1[0x2c] = lVar3;
  param_1[0x2d] = lVar1 + 0xb;
  param_1[0x2e] = lVar1 + 0xb;
  return;
}



undefined8 mbedtls_ssl_get_bytes_avail(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0xf0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x100);
  }
  return uVar1;
}



undefined8 mbedtls_ssl_check_pending(long *param_1)

{
  if (*(int *)((long)param_1 + 0x13c) == 1) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x15a1,
               "ssl_check_pending: record held back for processing");
  }
  else if ((*(char *)(*param_1 + 9) == '\x01') && ((ulong)param_1[0x23] < (ulong)param_1[0x21])) {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x15ac,
               "ssl_check_pending: more records within current datagram");
  }
  else if ((param_1[0x26] == 0) || ((ulong)param_1[0x20] <= (ulong)param_1[0x26])) {
    if (param_1[0x1e] == 0) {
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x15c9,
                 "ssl_check_pending: nothing pending");
      return 0;
    }
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x15bf,
               "ssl_check_pending: application data record is being processed");
  }
  else {
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x15b6,
               "ssl_check_pending: more handshake messages within current record");
  }
  return 1;
}



ulong mbedtls_ssl_get_record_expansion(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  uVar3 = *(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x160);
  if (puVar1 == (undefined8 *)0x0) {
    return uVar3;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 == 0) {
LAB_00102d9e:
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x161d,"should never happen");
    return 0xffff9400;
  }
  bVar5 = *(byte *)(lVar2 + 9) >> 4;
  if (*(byte *)(lVar2 + 9) < 0x90) {
    if (bVar5 < 6) {
      if (bVar5 != 2) goto LAB_00102d9e;
      iVar4 = (int)puVar1[3] + (*(byte *)(lVar2 + 8) & 0x1f) * 2;
      goto LAB_00102d76;
    }
  }
  else if (bVar5 != 0xb) goto LAB_00102d9e;
  iVar4 = (int)*puVar1;
LAB_00102d76:
  if (*(char *)((long)puVar1 + 0x141) != '\0') {
    iVar4 = iVar4 + 0x10;
  }
  return (ulong)(uint)((int)uVar3 + iVar4);
}



ulong ssl_get_remaining_payload_in_datagram(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = mbedtls_ssl_get_output_max_frag_len();
  uVar1 = *(ulong *)(param_1 + 0x198);
  uVar4 = 0x4000;
  if (uVar3 < 0x4001) {
    uVar4 = uVar3;
  }
  if (uVar1 < uVar4) {
    uVar3 = mbedtls_ssl_get_current_mtu(param_1);
    if (uVar3 - 1 < 0x417c) {
      if (uVar3 < uVar1) {
        return 0xffff9400;
      }
      uVar5 = (int)uVar3 - (int)uVar1;
      if ((int)uVar5 < 0) {
        return (ulong)uVar5;
      }
    }
    else {
      uVar5 = 0x417d - (int)uVar1;
    }
    uVar3 = mbedtls_ssl_get_record_expansion(param_1);
    iVar2 = (int)uVar3;
    if (iVar2 < 0) {
      return uVar3;
    }
    if ((ulong)(long)iVar2 < (ulong)uVar5) {
      uVar6 = (ulong)uVar5 - (long)iVar2;
      uVar3 = uVar4 - uVar1;
      if (uVar6 < uVar4 - uVar1) {
        uVar3 = uVar6;
      }
      return uVar3;
    }
  }
  return 0;
}



int mbedtls_ssl_write_record(long *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  int local_9c;
  undefined8 local_98;
  byte local_90;
  ushort local_8f;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_70 [5];
  undefined4 uStack_6b;
  undefined4 local_67;
  undefined4 uStack_63;
  long local_40;
  
  bVar14 = 0;
  lVar8 = param_1[0x32];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xb80,"=> write record");
  iVar1 = *(int *)((long)param_1 + 0x14);
  if (iVar1 == 0x304) {
    uVar6 = 0xfdfe;
    if (*(char *)(*param_1 + 9) != '\x01') {
      uVar6 = 0x303;
    }
    iVar1 = 0x303;
  }
  else {
    uVar5 = (ushort)iVar1;
    if (*(char *)(*param_1 + 9) == '\x01') {
      uVar6 = 0xfffe;
      if (iVar1 != 0x302) {
        uVar6 = uVar5 * -0x100 | (ushort)(0x200 - uVar5) >> 8;
      }
    }
    else {
      uVar6 = uVar5 << 8 | uVar5 >> 8;
    }
  }
  *(ushort *)(param_1[0x2c] + 1) = uVar6;
  *(long *)param_1[0x2b] = param_1[0x34];
  uVar6 = (ushort)lVar8;
  *(ushort *)param_1[0x2e] = uVar6 << 8 | uVar6 >> 8;
  if (param_1[0x10] == 0) {
LAB_00103059:
    puVar2 = (undefined1 *)param_1[0x2c];
    uVar12 = (param_1[0x2f] - (long)puVar2) + lVar8;
    if (*(char *)(*param_1 + 9) == '\x01') {
      uVar7 = param_1[0x33];
      uVar3 = mbedtls_ssl_get_current_mtu(param_1);
      if (uVar3 - 1 < 0x417c) {
        if (uVar7 <= uVar3) {
          local_9c = (int)uVar3 - (int)uVar7;
          if (local_9c < 0) goto LAB_0010317b;
          goto LAB_00103271;
        }
      }
      else if (uVar7 < 0x417e) {
        local_9c = 0x417d - (int)uVar7;
LAB_00103271:
        if (uVar12 <= (ulong)(long)local_9c) {
          puVar2 = (undefined1 *)param_1[0x2c];
          goto LAB_0010307a;
        }
      }
      local_9c = -0x6c00;
      goto LAB_0010317b;
    }
LAB_0010307a:
    *puVar2 = (char)(int)param_1[0x31];
    puVar2 = (undefined1 *)param_1[0x2c];
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xbd4,
               "output record: msgtype = %u, version = [%u:%u], msglen = %zu",*puVar2,puVar2[1],
               puVar2[2],lVar8);
    mbedtls_debug_print_buf
              (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xbd9,
               "output record sent to network",param_1[0x2c],uVar12);
    param_1[0x33] = param_1[0x33] + uVar12;
    param_1[0x2c] = param_1[0x2c] + uVar12;
    mbedtls_ssl_update_out_pointers(param_1,param_1[0x10]);
    uVar7 = 8;
    bVar13 = *(char *)(*param_1 + 9) == '\x01';
    uVar12 = (ulong)bVar13 * 2;
    do {
      if (uVar7 <= uVar12) {
        if (uVar12 == uVar7) {
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xbe8,
                     "outgoing message counter would wrap");
          local_9c = -0x6b80;
          goto LAB_0010317b;
        }
        break;
      }
      uVar7 = (ulong)((int)uVar7 - 1);
      pcVar11 = (char *)((long)param_1 + uVar7 + 0x1a0);
      *pcVar11 = *pcVar11 + '\x01';
    } while (*pcVar11 == '\0');
    if ((param_2 == 0) && (bVar13)) {
      local_9c = ssl_get_remaining_payload_in_datagram(param_1);
      if (local_9c < 0) {
        uVar4 = 0xbf3;
        pcVar11 = "ssl_get_remaining_payload_in_datagram";
        goto LAB_00103223;
      }
      if (local_9c == 0) goto LAB_00103200;
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xbfc,
                 "Still %u bytes available in current datagram",local_9c);
    }
    else if (param_2 == 1) {
LAB_00103200:
      local_9c = mbedtls_ssl_flush_output(param_1);
      if (local_9c != 0) {
        uVar4 = 0xc05;
        pcVar11 = "mbedtls_ssl_flush_output";
        goto LAB_00103223;
      }
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xc09,"<= write record");
    local_9c = 0;
  }
  else {
    local_88 = param_1[0x2f];
    local_80 = 0x417d - (local_88 - param_1[0x2a]);
    _local_70 = param_1[0x32];
    local_78 = param_1[0x30] - local_88;
    lVar8 = *param_1;
    local_98 = *(undefined8 *)param_1[0x2b];
    uVar6 = (ushort)iVar1;
    if (*(char *)(lVar8 + 9) == '\x01') {
      uVar6 = ((iVar1 == 0x302) - uVar6) + 0x200;
    }
    local_8f = uVar6 << 8 | uVar6 >> 8;
    uStack_6b._3_1_ = 0;
    local_90 = (byte)(int)param_1[0x31];
    local_9c = mbedtls_ssl_encrypt_buf
                         (param_1,param_1[0x10],&local_98,*(undefined8 *)(lVar8 + 0x38),
                          *(undefined8 *)(lVar8 + 0x40));
    if (local_9c == 0) {
      if (local_78 != 0) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xbb2,"should never happen");
        local_9c = -0x6c00;
        goto LAB_0010317b;
      }
      puVar10 = (undefined8 *)param_1[0x2d];
      *(uint *)(param_1 + 0x31) = (uint)local_90;
      uVar12 = (ulong)uStack_6b._3_1_;
      if (uStack_6b._3_1_ < 8) {
        if ((uStack_6b._3_1_ & 4) == 0) {
          if (uStack_6b._3_1_ != 0) {
            *(undefined1 *)puVar10 = (undefined1)local_67;
            if ((uStack_6b._3_1_ & 2) != 0) {
              *(undefined2 *)((long)puVar10 + (uVar12 - 2)) = *(undefined2 *)(local_70 + uVar12 + 7)
              ;
            }
          }
        }
        else {
          *(undefined4 *)puVar10 = local_67;
          *(undefined4 *)((long)puVar10 + (uVar12 - 4)) = *(undefined4 *)(local_70 + uVar12 + 5);
        }
      }
      else {
        *puVar10 = CONCAT44(uStack_63,local_67);
        *(undefined8 *)((long)puVar10 + (uVar12 - 8)) = *(undefined8 *)(local_70 + uVar12 + 1);
        lVar8 = (long)puVar10 - (long)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
        puVar9 = (undefined8 *)((long)&local_67 - lVar8);
        puVar10 = (undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
        for (uVar12 = (ulong)((uint)uStack_6b._3_1_ + (int)lVar8 >> 3); uVar12 != 0;
            uVar12 = uVar12 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
          puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
        }
      }
      param_1[0x32] = _local_70;
      *(ushort *)param_1[0x2e] = (ushort)_local_70 << 8 | (ushort)_local_70 >> 8;
      lVar8 = _local_70;
      goto LAB_00103059;
    }
    uVar4 = 0xbad;
    pcVar11 = "ssl_encrypt_buf";
LAB_00103223:
    mbedtls_debug_print_ret(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar4,pcVar11,local_9c)
    ;
  }
LAB_0010317b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_9c;
}



int mbedtls_ssl_write_handshake_msg_ext(long *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *__ptr;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  bool bVar12;
  
  lVar6 = param_1[0x32];
  cVar1 = *(char *)param_1[0x30];
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xae0,"=> write handshake message");
  uVar2 = *(uint *)(param_1 + 0x31);
  if ((uVar2 & 0xfffffffd) != 0x14) {
    uVar7 = 0xae7;
    goto LAB_001036c6;
  }
  bVar12 = cVar1 != '\0';
  if ((uVar2 != 0x16) || (bVar12)) {
    lVar8 = param_1[0xe];
    if (lVar8 == 0) {
      uVar7 = 0xaf0;
      goto LAB_001036c6;
    }
    lVar9 = *param_1;
    if (*(char *)(lVar9 + 9) == '\x01') goto LAB_001036b0;
LAB_00103457:
    uVar11 = param_1[0x32];
    if (0x4000 < uVar11) {
LAB_001037e0:
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xb06,
                 "Record too large: size %zu, maximum %zu",uVar11,0x4000);
      return -0x6c00;
    }
    if (uVar2 == 0x16) goto LAB_001035e1;
LAB_00103474:
    if ((*(char *)(lVar9 + 9) != '\x01') || (((int)param_1[0x31] == 0x16 && (!bVar12))))
    goto LAB_00103650;
  }
  else {
    lVar9 = *param_1;
    if ((*(char *)(lVar9 + 9) == '\x01') && (lVar8 = param_1[0xe], lVar8 != 0)) {
LAB_001036b0:
      if (*(char *)(lVar8 + 0xd) == '\x01') {
        uVar7 = 0xaf8;
LAB_001036c6:
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar7,"should never happen");
        return -0x6c00;
      }
      goto LAB_00103457;
    }
    uVar11 = param_1[0x32];
    if (0x4000 < uVar11) goto LAB_001037e0;
LAB_001035e1:
    sVar3 = lVar6 - 4;
    *(char *)(param_1[0x30] + 1) = (char)(sVar3 >> 0x10);
    *(char *)(param_1[0x30] + 2) = (char)(sVar3 >> 8);
    *(char *)(param_1[0x30] + 3) = (char)sVar3;
    if (*(char *)(*param_1 + 9) == '\x01') {
      if (0x4000U - param_1[0x32] < 8) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xb21,
                   "DTLS handshake message too large: size %zu, maximum %zu",sVar3,0x3ff4);
        return -0x7100;
      }
      memmove((void *)(param_1[0x30] + 0xc),(void *)(param_1[0x30] + 4),sVar3);
      param_1[0x32] = param_1[0x32] + 8;
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1[0x30] + 4) = 0;
        *(undefined1 *)(param_1[0x30] + 5) = 0;
        lVar6 = param_1[0x30];
        *(undefined2 *)(lVar6 + 6) = 0;
        *(undefined1 *)(lVar6 + 8) = 0;
        lVar6 = param_1[0x30];
        *(undefined2 *)(lVar6 + 9) = *(undefined2 *)(lVar6 + 1);
        *(undefined1 *)(lVar6 + 0xb) = *(undefined1 *)(lVar6 + 3);
        lVar9 = *param_1;
        goto LAB_00103474;
      }
      *(ushort *)(param_1[0x30] + 4) =
           *(ushort *)(param_1[0xe] + 0x4bc) << 8 | *(ushort *)(param_1[0xe] + 0x4bc) >> 8;
      *(int *)(param_1[0xe] + 0x4bc) = *(int *)(param_1[0xe] + 0x4bc) + 1;
      lVar6 = param_1[0x30];
      *(undefined2 *)(lVar6 + 6) = 0;
      *(undefined1 *)(lVar6 + 8) = 0;
      lVar6 = param_1[0x30];
      *(undefined2 *)(lVar6 + 9) = *(undefined2 *)(lVar6 + 1);
      *(undefined1 *)(lVar6 + 0xb) = *(undefined1 *)(lVar6 + 3);
      if (param_2 != 0) goto LAB_00103621;
    }
    else {
      if ((param_2 == 0) || (!bVar12)) goto LAB_00103650;
LAB_00103621:
      iVar4 = (**(code **)(param_1[0xe] + 0x18))(param_1,param_1[0x30],param_1[0x32]);
      if (iVar4 != 0) {
        uVar7 = 0xb41;
        pcVar10 = "update_checksum";
        goto LAB_00103676;
      }
    }
    if (*(char *)(*param_1 + 9) != '\x01') {
LAB_00103650:
      iVar4 = mbedtls_ssl_write_record(param_1,param_3);
      if (iVar4 != 0) {
        uVar7 = 0xb54;
        pcVar10 = "ssl_write_record";
LAB_00103676:
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar7,pcVar10,iVar4);
        return iVar4;
      }
      goto LAB_0010358e;
    }
  }
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x972,"=> ssl_flight_append");
  mbedtls_debug_print_buf
            (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x973,"message appended to flight",
             param_1[0x30],param_1[0x32]);
  __ptr = (undefined8 *)calloc(1,0x20);
  if (__ptr == (undefined8 *)0x0) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x978,"alloc %zu bytes failed",0x20)
    ;
  }
  else {
    sVar3 = param_1[0x32];
    pvVar5 = calloc(1,sVar3);
    *__ptr = pvVar5;
    if (pvVar5 != (void *)0x0) {
      __memcpy_chk(pvVar5,param_1[0x30],sVar3,sVar3);
      lVar8 = param_1[0x31];
      lVar6 = param_1[0xe];
      __ptr[1] = sVar3;
      __ptr[3] = 0;
      *(char *)(__ptr + 2) = (char)(int)lVar8;
      lVar8 = *(long *)(lVar6 + 0x4c8);
      if (lVar8 == 0) {
        *(undefined8 **)(lVar6 + 0x4c8) = __ptr;
      }
      else {
        do {
          lVar6 = lVar8;
          lVar8 = *(long *)(lVar6 + 0x18);
        } while (lVar8 != 0);
        *(undefined8 **)(lVar6 + 0x18) = __ptr;
      }
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x995,"<= ssl_flight_append");
LAB_0010358e:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xb59,"<= write handshake message"
                );
      return 0;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x97e,"alloc %zu bytes failed",sVar3
              );
    free(__ptr);
  }
  mbedtls_debug_print_ret
            (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xb4d,"ssl_flight_append",0xffff8100);
  return -0x7f00;
}



void mbedtls_ssl_finish_handshake_msg(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 400) = param_3 + 4;
  mbedtls_ssl_write_handshake_msg_ext(param_1,0,0);
  return;
}



int mbedtls_ssl_write_change_cipher_spec(long param_1)

{
  int iVar1;
  
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x14c3,"=> write change cipher spec");
  *(undefined4 *)(param_1 + 0x188) = 0x14;
  *(undefined8 *)(param_1 + 400) = 1;
  **(undefined1 **)(param_1 + 0x180) = 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = mbedtls_ssl_write_handshake_msg_ext(param_1,1,1);
  if (iVar1 == 0) {
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x14d0,"<= write change cipher spec"
              );
    return 0;
  }
  mbedtls_debug_print_ret
            (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x14cc,
             "mbedtls_ssl_write_handshake_msg",iVar1);
  return iVar1;
}



ulong mbedtls_ssl_send_alert_message(long *param_1,undefined1 param_2,undefined1 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    uVar2 = 0xffff8f00;
  }
  else {
    if (param_1[0x33] != 0) {
      uVar2 = mbedtls_ssl_flush_output();
      return uVar2;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x14ae,"=> send alert message");
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x14af,
               "send alert level=%u message=%u",param_2,param_3);
    *(undefined4 *)(param_1 + 0x31) = 0x15;
    param_1[0x32] = 2;
    *(undefined1 *)param_1[0x30] = param_2;
    *(undefined1 *)(param_1[0x30] + 1) = param_3;
    uVar1 = mbedtls_ssl_write_record(param_1,1);
    uVar2 = (ulong)uVar1;
    if (uVar1 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x14b7,"mbedtls_ssl_write_record",
                 uVar1);
      return (ulong)uVar1;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x14ba,"<= send alert message");
  }
  return uVar2;
}



void mbedtls_ssl_send_fatal_handshake_failure(undefined8 param_1)

{
  mbedtls_ssl_send_alert_message(param_1,2,0x28);
  return;
}



ulong mbedtls_ssl_flight_transmit(long param_1)

{
  char cVar1;
  long *plVar2;
  void *__src;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9e7,"=> mbedtls_ssl_flight_transmit"
            );
  lVar12 = *(long *)(param_1 + 0x70);
  if (*(char *)(lVar12 + 0xd) != '\x01') {
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9ea,
               "initialise flight transmission");
    lVar12 = *(long *)(param_1 + 0x70);
    lVar9 = **(long **)(lVar12 + 0x4c8);
    *(long **)(lVar12 + 0x4d0) = *(long **)(lVar12 + 0x4c8);
    *(long *)(lVar12 + 0x4d8) = lVar9 + 0xc;
    uVar6 = ssl_swap_epochs(param_1);
    uVar11 = (ulong)uVar6;
    if (uVar6 != 0) goto LAB_00103c29;
    lVar12 = *(long *)(param_1 + 0x70);
    *(undefined1 *)(lVar12 + 0xd) = 1;
  }
LAB_00103b95:
  plVar2 = *(long **)(lVar12 + 0x4d0);
  if (plVar2 == (long *)0x0) goto LAB_00103f38;
  bVar4 = false;
  cVar1 = *(char *)(param_1 + 0x148);
  if (((char)plVar2[2] == '\x16') && (*(char *)*plVar2 == '\x14')) {
    if (*(char **)(lVar12 + 0x4d8) == (char *)*plVar2 + 0xc) {
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xa05,
                 "swap epochs to send finished message");
      uVar6 = ssl_swap_epochs(param_1);
      uVar11 = (ulong)uVar6;
      if (uVar6 != 0) goto LAB_00103c29;
    }
    bVar4 = true;
  }
  iVar5 = ssl_get_remaining_payload_in_datagram(param_1);
  uVar11 = (ulong)iVar5;
  if (iVar5 < 0) goto LAB_00103c29;
  if ((char)plVar2[2] == '\x14') {
    if (uVar11 != 0) {
      memcpy(*(void **)(param_1 + 0x180),(void *)*plVar2,plVar2[1]);
      lVar9 = plVar2[1];
      lVar12 = *(long *)(param_1 + 0x70);
      *(long *)(param_1 + 400) = lVar9;
      *(uint *)(param_1 + 0x188) = (uint)*(byte *)(plVar2 + 2);
      uVar8 = *(long *)(lVar12 + 0x4d8) + lVar9;
      *(ulong *)(lVar12 + 0x4d8) = uVar8;
      goto LAB_00103c84;
    }
  }
  else {
    puVar10 = (undefined4 *)*plVar2;
    __src = *(void **)(*(long *)(param_1 + 0x70) + 0x4d8);
    if ((0xb < uVar11) && ((uVar7 = plVar2[1] - 0xc, uVar11 != 0xc || (uVar7 == 0)))) {
      lVar12 = (long)__src - (long)(puVar10 + 3);
      uVar11 = uVar11 - 0xc;
      uVar8 = uVar7 - lVar12;
      if (uVar11 < uVar7 - lVar12) {
        uVar8 = uVar11;
      }
      if ((lVar12 == 0) && (uVar7 != uVar8)) {
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xa3d,
                   "fragmenting handshake message (%u > %u)",uVar8 & 0xffffffff,uVar11);
        puVar10 = (undefined4 *)*plVar2;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x180);
      *puVar3 = *puVar10;
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar10 + 1);
      *(char *)(*(long *)(param_1 + 0x180) + 6) = (char)((ulong)lVar12 >> 0x10);
      *(char *)(*(long *)(param_1 + 0x180) + 7) = (char)((ulong)lVar12 >> 8);
      *(char *)(*(long *)(param_1 + 0x180) + 8) = (char)lVar12;
      *(char *)(*(long *)(param_1 + 0x180) + 9) = (char)(uVar8 >> 0x10);
      *(char *)(*(long *)(param_1 + 0x180) + 10) = (char)(uVar8 >> 8);
      *(char *)(*(long *)(param_1 + 0x180) + 0xb) = (char)uVar8;
      mbedtls_debug_print_buf
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xa4f,"handshake header",
                 *(undefined8 *)(param_1 + 0x180),0xc);
      memcpy((void *)(*(long *)(param_1 + 0x180) + 0xc),__src,uVar8);
      lVar12 = *(long *)(param_1 + 0x70);
      lVar9 = plVar2[1];
      *(ulong *)(param_1 + 400) = uVar8 + 0xc;
      *(uint *)(param_1 + 0x188) = (uint)*(byte *)(plVar2 + 2);
      uVar8 = *(long *)(lVar12 + 0x4d8) + uVar8;
      *(ulong *)(lVar12 + 0x4d8) = uVar8;
LAB_00103c84:
      if ((ulong)(lVar9 + *plVar2) <= uVar8) {
        plVar2 = (long *)plVar2[3];
        if (plVar2 == (long *)0x0) {
          *(undefined1 (*) [16])(lVar12 + 0x4d0) = (undefined1  [16])0x0;
        }
        else {
          lVar9 = *plVar2;
          *(long **)(lVar12 + 0x4d0) = plVar2;
          *(long *)(lVar12 + 0x4d8) = lVar9 + 0xc;
        }
      }
      uVar6 = mbedtls_ssl_write_record(param_1,cVar1 == '\x01');
      uVar11 = (ulong)uVar6;
      if (uVar6 != 0) {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xa67,"mbedtls_ssl_write_record"
                   ,uVar6);
        goto LAB_00103c29;
      }
      goto LAB_00103cd1;
    }
    if (!bVar4) goto LAB_00103c17;
    uVar6 = ssl_swap_epochs(param_1);
    uVar11 = (ulong)uVar6;
    if (uVar6 != 0) goto LAB_00103c29;
  }
LAB_00103c17:
  uVar6 = mbedtls_ssl_flush_output(param_1);
  uVar11 = (ulong)uVar6;
  if (uVar6 != 0) goto LAB_00103c29;
LAB_00103cd1:
  lVar12 = *(long *)(param_1 + 0x70);
  goto LAB_00103b95;
LAB_00103f38:
  uVar6 = mbedtls_ssl_flush_output(param_1);
  uVar11 = (ulong)uVar6;
  if (uVar6 == 0) {
    lVar12 = *(long *)(param_1 + 0x70);
    if (*(int *)(param_1 + 8) < 0x1b) {
      *(undefined1 *)(lVar12 + 0xd) = 2;
      if (*(long *)(param_1 + 0xa8) != 0) {
        uVar6 = *(uint *)(lVar12 + 0x4c4);
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms",uVar6
                  );
        (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xa0),uVar6 >> 2,uVar6);
      }
    }
    else {
      *(undefined1 *)(lVar12 + 0xd) = 3;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xa78,
               "<= mbedtls_ssl_flight_transmit");
  }
LAB_00103c29:
  return uVar11 & 0xffffffff;
}



undefined4 mbedtls_ssl_resend(undefined8 param_1)

{
  undefined4 uVar1;
  
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9d4,"=> mbedtls_ssl_resend");
  uVar1 = mbedtls_ssl_flight_transmit(param_1);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9d8,"<= mbedtls_ssl_resend");
  return uVar1;
}



int mbedtls_ssl_prepare_handshake_record(long *param_1)

{
  void *__dest;
  ulong uVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  char *pcVar13;
  long lVar15;
  ulong uVar14;
  
  if ((int)param_1[3] == 0) {
    uVar14 = (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4;
    if ((ulong)param_1[0x20] < uVar14) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xc9f,
                 "handshake message too short: %zu");
      return -0x7200;
    }
    puVar7 = (undefined1 *)param_1[0x1d];
    lVar3 = ((uint)(byte)puVar7[1] << 0x10 | (uint)(byte)puVar7[2] << 8 | (uint)(byte)puVar7[3]) +
            uVar14;
    param_1[0x26] = lVar3;
  }
  else {
    lVar3 = param_1[0x26];
    puVar7 = (undefined1 *)param_1[0x1d];
  }
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xca7,
             "handshake message: msglen = %zu, type = %u, hslen = %zu",param_1[0x20],*puVar7,lVar3);
  if (param_1[0xf] != 0) {
    lVar15 = param_1[0x17];
    lVar3 = param_1[0x1d] - lVar15;
    mbedtls_debug_print_msg
              (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xcad,
               "decrypted handshake message: iv-buf=%d hdr-buf=%d hdr-buf=%d",
               (int)param_1[0x1c] - (int)lVar15,param_1[0x19] - lVar15,lVar3);
  }
  if (*(char *)(*param_1 + 9) != '\x01') {
    uVar14 = param_1[0x26];
    uVar12 = *(uint *)(param_1 + 3);
    uVar10 = (ulong)uVar12;
    pcVar13 = "subsequent";
    uVar1 = param_1[0x20];
    lVar3 = param_1[0x17];
    __dest = (void *)(lVar3 + 0xd + uVar10);
    uVar4 = uVar14 - uVar10;
    if (uVar1 < uVar14 - uVar10) {
      uVar4 = uVar1;
    }
    if ((uVar12 == 0) && (pcVar13 = "initial", uVar14 == uVar4)) {
      pcVar13 = "sole";
    }
    mbedtls_debug_print_msg
              (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xd00,
               "%s handshake fragment: %zu, %u..%u of %zu",pcVar13,uVar1,uVar10,uVar12 + (int)uVar4,
               uVar14);
    __n = param_1[0x20];
    if (param_1[0x17] + 0x417dU < (long)__dest + __n) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xd1e,
                 "Shouldn\'t happen: no room to move handshake fragment %zu from %p to %p (buf=%p len=%zu)"
                 ,__n,param_1[0x1d],__dest,param_1[0x17],0x417d);
      return -0x6e;
    }
    memmove(__dest,(void *)param_1[0x1d],__n);
    uVar12 = (int)param_1[3] + (int)param_1[0x20];
    uVar14 = (ulong)uVar12;
    *(uint *)(param_1 + 3) = uVar12;
    if (uVar14 < (ulong)param_1[0x26]) {
      lVar3 = (long)__dest + param_1[0x20];
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xd2d,
                 "Prepare: waiting for more handshake fragments %u/%zu",uVar14,param_1[0x26]);
      param_1[0x19] = lVar3;
      param_1[0x20] = 0;
      if (*(char *)(*param_1 + 9) == '\x01') {
        lVar15 = lVar3 + 0xb;
        lVar8 = lVar3 + 0xd;
        lVar5 = lVar3 + 3;
      }
      else {
        lVar8 = lVar3 + 5;
        lVar5 = param_1[0x17];
        lVar15 = lVar3 + 3;
      }
      param_1[0x18] = lVar5;
      param_1[0x1c] = lVar8;
      param_1[0x1d] = lVar8;
      param_1[0x1a] = lVar15;
      param_1[0x1b] = lVar15;
      return -0x6580;
    }
    param_1[0x20] = uVar14;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[0x19] = lVar3 + 8;
    if (*(char *)(*param_1 + 9) == '\x01') {
      lVar15 = lVar3 + 0x13;
      lVar8 = lVar3 + 0x15;
      lVar5 = lVar3 + 0xb;
    }
    else {
      lVar8 = lVar3 + 0xd;
      lVar5 = param_1[0x17];
      lVar15 = lVar3 + 0xb;
    }
    param_1[0x18] = lVar5;
    param_1[0x1c] = lVar8;
    param_1[0x1d] = lVar8;
    param_1[0x1a] = lVar15;
    param_1[0x1b] = lVar15;
    if (uVar14 < 0x10000) {
      *(ushort *)param_1[0x1b] = (ushort)uVar12 << 8 | (ushort)uVar12 >> 8;
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xd46,"reassembled record",
                 param_1[0x19],param_1[0x20] + 5 + (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8);
      uVar14 = param_1[0x26];
      if ((ulong)param_1[0x20] <= uVar14) {
        return 0;
      }
      mbedtls_debug_print_msg
                (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0xd49,
                 "More handshake messages in the record: %zu + %zu",uVar14,param_1[0x20] - uVar14);
      return 0;
    }
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xd3c,
               "Shouldn\'t happen: in_msglen=%zu > 0xffff",uVar14);
    return -0x6e;
  }
  pcVar13 = (char *)param_1[0x1d];
  uVar6 = (uint)(byte)pcVar13[1] << 0x10 | (uint)(byte)pcVar13[2] << 8 | (uint)(byte)pcVar13[3];
  uVar9 = (uint)(byte)pcVar13[6] << 0x10 | (uint)(byte)pcVar13[7] << 8 | (uint)(byte)pcVar13[8];
  uVar12 = (uint)(byte)pcVar13[9] << 0x10 | (uint)(byte)pcVar13[10] << 8 | (uint)(byte)pcVar13[0xb];
  if (((uVar6 < uVar9) || (uVar6 - uVar9 < uVar12)) ||
     ((ulong)param_1[0x20] < (ulong)(uVar12 + 0xc))) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xcba,"invalid handshake header");
    return -0x7200;
  }
  lVar15 = param_1[0xe];
  if (lVar15 == 0) {
LAB_001044a0:
    iVar2 = ssl_hs_is_proper_fragment(param_1);
    if (iVar2 != 1) {
      return 0;
    }
    mbedtls_debug_print_msg();
  }
  else {
    uVar11 = *(ushort *)(pcVar13 + 4) << 8 | *(ushort *)(pcVar13 + 4) >> 8;
    uVar12 = (uint)uVar11;
    if ((int)param_1[1] < 0x1b) {
      uVar6 = *(uint *)(lVar15 + 0x4c0);
      if (uVar6 == uVar12) goto LAB_001044a0;
    }
    else {
      if (*pcVar13 == '\x01') goto LAB_001044a0;
      uVar6 = *(uint *)(lVar15 + 0x4c0);
    }
    if (uVar12 <= uVar6) {
      if ((*(int *)(lVar15 + 0x4e0) - 1U == uVar12) && (*pcVar13 != '\x03')) {
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xcd1,
                   "received message from last flight, message_seq = %u, start_of_flight = %u",
                   uVar11,*(int *)(lVar15 + 0x4e0),lVar3);
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9d4,"=> mbedtls_ssl_resend");
        iVar2 = mbedtls_ssl_flight_transmit(param_1);
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9d8,"<= mbedtls_ssl_resend");
        if (iVar2 != 0) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xcd7,"mbedtls_ssl_resend",
                     iVar2);
          return iVar2;
        }
      }
      else {
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xcdb,
                   "dropping out-of-sequence message: message_seq = %u, expected = %u",uVar11,uVar6,
                   lVar3);
      }
      return -0x6580;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xcc4,
               "received future handshake message of sequence number %u (next %u)",uVar11,uVar6);
  }
  return -0x6480;
}



undefined8 mbedtls_ssl_handle_message_type(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = (int)param_1[0x1f];
  if ((*(char *)(*param_1 + 9) == '\0') && ((int)param_1[3] != 0)) {
    if (iVar1 != 0x16) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1426,
                 "non-handshake message in the middle of a fragmented handshake message");
      return 0xffff8900;
    }
LAB_00104751:
    uVar2 = mbedtls_ssl_prepare_handshake_record(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = (int)param_1[0x1f];
    if (iVar1 == 0x14) goto LAB_00104770;
LAB_001046c9:
    if (iVar1 == 0x15) {
      if (param_1[0x20] == 2) {
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1462,
                   "got an alert message, type: [%u:%u]",*(undefined1 *)param_1[0x1d],
                   ((undefined1 *)param_1[0x1d])[1]);
        pcVar3 = (char *)param_1[0x1d];
        if (*pcVar3 == '\x02') {
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1469,
                     "is a fatal alert message (msg %d)",pcVar3[1]);
          return 0xffff8880;
        }
        if (*pcVar3 == '\x01') {
          if (pcVar3[1] == '\0') {
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1470,
                       "is a close notify message");
            return 0xffff8780;
          }
          if (pcVar3[1] == 'd') {
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1477,
                       "is a no renegotiation alert");
            return 0;
          }
        }
        return 0xffff9980;
      }
      pcVar3 = "invalid alert message, len: %zu";
      uVar2 = 0x145d;
      goto LAB_00104940;
    }
    if (*(char *)(*param_1 + 9) != '\x01') {
      return 0;
    }
    if (iVar1 == 0x17) {
      if ((int)param_1[1] < 0x1b) {
        if (param_1[1] == 0x100000002) {
          return 0;
        }
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x148b,
                   "dropping unexpected ApplicationData");
        return 0xffff9980;
      }
      if (param_1[0xe] == 0) {
        return 0;
      }
      goto LAB_0010488b;
    }
  }
  else {
    if (iVar1 == 0x16) goto LAB_00104751;
    if (iVar1 != 0x14) goto LAB_001046c9;
LAB_00104770:
    if (param_1[0x20] != 1) {
      pcVar3 = "invalid CCS message, len: %zu";
      uVar2 = 0x1436;
LAB_00104940:
      mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar2,pcVar3);
      return 0xffff8e00;
    }
    if (*(char *)param_1[0x1d] != '\x01') {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x143c,
                 "invalid CCS message, content: %02x");
      return 0xffff8e00;
    }
    if (*(char *)(*param_1 + 9) != '\x01') {
      if (*(int *)((long)param_1 + 0x14) != 0x304) {
        return 0;
      }
LAB_0010489a:
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1451,
                 "Ignore ChangeCipherSpec in TLS 1.3 compatibility mode");
      return 0xffff9a80;
    }
    if (((int)param_1[1] - 10U & 0xfffffffd) != 0) {
      if (param_1[0xe] == 0) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1446,
                   "dropping ChangeCipherSpec outside handshake");
        return 0xffff9900;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x144a,
                 "received out-of-order ChangeCipherSpec - remember");
      return 0xffff9b80;
    }
    if (*(int *)((long)param_1 + 0x14) == 0x304) goto LAB_0010489a;
  }
  if (param_1[0xe] == 0) {
    return 0;
  }
  if ((int)param_1[1] < 0x1b) {
    return 0;
  }
LAB_0010488b:
  mbedtls_ssl_handshake_wrapup_free_hs_transform(param_1);
  return 0;
}



ulong mbedtls_ssl_fetch_input(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x86c,"=> fetch input");
  if ((param_1[7] == 0) && (param_1[8] == 0)) {
    pcVar9 = "Bad usage of mbedtls_ssl_set_bio() ";
    uVar5 = 0x86f;
  }
  else {
    if (param_2 <= 0x417dU - (param_1[0x19] - param_1[0x17])) {
      uVar10 = param_1[0x21];
      if (*(char *)(*param_1 + 9) == '\x01') {
        uVar12 = param_1[0x23];
        if (uVar12 == 0) {
LAB_00104ac8:
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x89a,
                     "in_left: %zu, nb_want: %zu",uVar10,param_2);
          uVar5 = 0x8a2;
          if (param_2 <= (ulong)param_1[0x21]) goto LAB_00104bf0;
          if (param_1[0x21] == 0) {
            if (((code *)param_1[0x16] == (code *)0x0) ||
               (iVar2 = (*(code *)param_1[0x16])(param_1[0x14]), iVar2 != 2)) {
              if ((int)param_1[1] < 0x1b) {
                uVar11 = *(undefined4 *)(param_1[0xe] + 0x4c4);
              }
              else {
                uVar11 = *(undefined4 *)(*param_1 + 0x120);
              }
              lVar6 = 0x417d - (param_1[0x19] - param_1[0x17]);
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x8c1,
                         "f_recv_timeout: %lu ms",uVar11);
              if ((code *)param_1[8] == (code *)0x0) {
                iVar2 = (*(code *)param_1[7])(param_1[9],param_1[0x19],lVar6);
              }
              else {
                iVar2 = (*(code *)param_1[8])(param_1[9],param_1[0x19],lVar6,uVar11);
              }
              uVar12 = (ulong)iVar2;
              mbedtls_debug_print_ret
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x8ca,
                         "ssl->f_recv(_timeout)",iVar2);
              if (iVar2 == 0) {
LAB_00104f40:
                uVar12 = 0xffff8d80;
                goto LAB_00104c05;
              }
              if (iVar2 != -0x6800) {
                if (iVar2 < 0) goto LAB_00104c05;
                param_1[0x21] = uVar12;
                goto LAB_00104be4;
              }
            }
            else {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x132,"timer expired");
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x8b6,"timer has expired")
              ;
            }
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x8d2,"timeout");
            if (param_1[0x15] != 0) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms"
                         ,0);
              (*(code *)param_1[0x15])(param_1[0x14],0,0);
            }
            lVar6 = *param_1;
            if ((int)param_1[1] == 0x1b) {
              if ((*(char *)(lVar6 + 8) != '\x01') || (*(int *)((long)param_1 + 0xc) != 3))
              goto LAB_00104f8e;
              uVar4 = mbedtls_ssl_resend_hello_request(param_1);
              uVar12 = (ulong)uVar4;
              if (uVar4 != 0) {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x8e6,
                           "mbedtls_ssl_resend_hello_request",uVar4);
                goto LAB_00104c05;
              }
            }
            else {
              lVar7 = param_1[0xe];
              uVar4 = *(uint *)(lVar6 + 0x128);
              if (uVar4 <= *(uint *)(lVar7 + 0x4c4)) {
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x8d7,
                           "handshake timeout");
LAB_00104f8e:
                uVar12 = 0xffff9800;
                goto LAB_00104c05;
              }
              uVar3 = *(uint *)(lVar6 + 0x124);
              if (*(uint *)(lVar7 + 0x4c4) != uVar3) {
                *(undefined2 *)(lVar7 + 0x51a) = 0x1fc;
                mbedtls_debug_print_msg
                          (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1f2,
                           "mtu autoreduction to %d bytes",0x1fc);
                lVar7 = param_1[0xe];
                uVar3 = *(uint *)(lVar7 + 0x4c4);
                uVar4 = *(uint *)(*param_1 + 0x128);
              }
              uVar1 = uVar3 * 2;
              uVar8 = uVar1;
              if (uVar4 <= uVar1) {
                uVar8 = uVar4;
              }
              if (uVar3 <= uVar1) {
                uVar4 = uVar8;
              }
              *(uint *)(lVar7 + 0x4c4) = uVar4;
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1fe,
                         "update timeout value to %lu millisecs");
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9d4,
                         "=> mbedtls_ssl_resend");
              uVar4 = mbedtls_ssl_flight_transmit(param_1);
              uVar12 = (ulong)uVar4;
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x9d8,
                         "<= mbedtls_ssl_resend");
              if (uVar4 != 0) {
                mbedtls_debug_print_ret
                          (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x8dc,
                           "mbedtls_ssl_resend",uVar12);
                goto LAB_00104c05;
              }
            }
            uVar12 = 0xffff9700;
            goto LAB_00104c05;
          }
          uVar5 = 0x8ac;
        }
        else {
          if (uVar12 <= uVar10) {
            uVar10 = uVar10 - uVar12;
            param_1[0x21] = uVar10;
            if (uVar10 != 0) {
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x88f,
                         "next record in same datagram, offset: %zu",uVar12);
              memmove((void *)param_1[0x19],(void *)(param_1[0x23] + param_1[0x19]),param_1[0x21]);
              uVar10 = param_1[0x21];
            }
            param_1[0x23] = 0;
            goto LAB_00104ac8;
          }
          uVar5 = 0x888;
        }
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar5,"should never happen");
LAB_00104f79:
        uVar12 = 0xffff9400;
      }
      else {
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x8f8,
                   "in_left: %zu, nb_want: %zu",uVar10,param_2);
        uVar10 = param_1[0x21];
        while (uVar10 < param_2) {
          uVar10 = param_2 - uVar10;
          if (((code *)param_1[0x16] != (code *)0x0) &&
             (iVar2 = (*(code *)param_1[0x16])(param_1[0x14]), iVar2 == 2)) {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x132,"timer expired");
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x90c,
                       "in_left: %zu, nb_want: %zu",param_1[0x21],param_2);
            mbedtls_debug_print_ret
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x90f,
                       "ssl->f_recv(_timeout)",0xffff9800);
            goto LAB_00104f8e;
          }
          if ((code *)param_1[8] == (code *)0x0) {
            uVar4 = (*(code *)param_1[7])(param_1[9],param_1[0x21] + param_1[0x19],uVar10);
          }
          else {
            uVar4 = (*(code *)param_1[8])
                              (param_1[9],param_1[0x21] + param_1[0x19],uVar10,
                               *(undefined4 *)(*param_1 + 0x120));
          }
          uVar12 = (ulong)uVar4;
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x90c,
                     "in_left: %zu, nb_want: %zu",param_1[0x21],param_2);
          mbedtls_debug_print_ret
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x90f,"ssl->f_recv(_timeout)",
                     uVar12);
          if (uVar4 == 0) goto LAB_00104f40;
          if ((int)uVar4 < 0) goto LAB_00104c05;
          if (uVar10 < (ulong)(long)(int)uVar4) {
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x91a,
                       "f_recv returned %d bytes but only %zu were requested",uVar12,uVar10);
            goto LAB_00104f79;
          }
          uVar10 = (long)(int)uVar4 + param_1[0x21];
          param_1[0x21] = uVar10;
        }
LAB_00104be4:
        uVar5 = 0x925;
LAB_00104bf0:
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",uVar5,"<= fetch input");
        uVar12 = 0;
      }
      goto LAB_00104c05;
    }
    pcVar9 = "requesting more data than fits";
    uVar5 = 0x874;
  }
  mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar5,pcVar9);
  uVar12 = 0xffff8f00;
LAB_00104c05:
  return uVar12 & 0xffffffff;
}



ulong mbedtls_ssl_read_record(ulong *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  void *pvVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  byte bVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  byte *pbVar22;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  undefined8 uVar23;
  short *psVar24;
  ulong *puVar25;
  char *pcVar26;
  ushort uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  bool bVar31;
  undefined1 auVar32 [16];
  ulong local_d8;
  uint local_b0;
  long local_a0;
  undefined1 local_98 [8];
  byte local_90;
  long local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  byte local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x10ca,"=> read record");
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    uVar20 = extraout_RDX;
LAB_00105190:
    do {
      uVar12 = param_1[0x26];
      if (uVar12 != 0) {
        if (param_1[0x1e] == 0) {
          if ((int)param_1[3] == 0) {
            uVar20 = param_1[0x20];
            if (uVar20 <= uVar12) {
              param_1[0x20] = 0;
              param_1[0x26] = 0;
              goto LAB_001051e3;
            }
            param_1[0x20] = uVar20 - uVar12;
            memmove((void *)param_1[0x1d],(void *)(uVar12 + (long)param_1[0x1d]),uVar20 - uVar12);
            *(ushort *)param_1[0x1b] = (ushort)param_1[0x20] << 8 | (ushort)param_1[0x20] >> 8;
            uVar20 = param_1[0x20];
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x12b3,
                       "remaining content in record",param_1[0x1d]);
            uVar12 = param_1[0x20];
            param_1[0x26] = 0;
          }
          else {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1292,
                       "Consume: waiting for more handshake fragments %u/%zu",(int)param_1[3],uVar12
                      );
            uVar12 = param_1[0x20];
            uVar20 = extraout_RDX_03;
          }
          goto LAB_00105330;
        }
        uVar23 = 0x128c;
        goto LAB_001066e6;
      }
      if (param_1[0x1e] != 0) {
        uVar12 = param_1[0x20];
LAB_00105330:
        if (uVar12 == 0) goto LAB_001051e3;
        goto LAB_00105339;
      }
      param_1[0x20] = 0;
LAB_001051e3:
      if (*(char *)(*param_1 + 9) == '\x01') {
        uVar12 = param_1[0xe];
        if ((param_1[0x23] < param_1[0x21]) || (uVar12 == 0)) {
LAB_00105510:
          uVar23 = 0xd;
          goto LAB_001051f8;
        }
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x112d,
                   "=> ssl_load_buffered_message");
        if (((int)param_1[1] - 10U & 0xfffffffd) != 0) {
          uVar20 = 1;
          do {
            bVar18 = *(byte *)(uVar12 + 0x438 + uVar20 * 0x18);
            if ((bVar18 & 1) != 0) {
              pcVar26 = "fully";
              if ((bVar18 & 4) == 0) {
                pcVar26 = "partially";
              }
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x114d,
                         "Future message with sequence number %u %s buffered.",
                         *(int *)(uVar12 + 0x4c0) + (int)uVar20,pcVar26);
            }
            uVar8 = (int)uVar20 + 1;
            uVar20 = (ulong)uVar8;
          } while (uVar8 != 4);
          if ((~*(byte *)(uVar12 + 0x438) & 5) != 0) {
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x116f,
                       "Next handshake message %u not or only partially bufffered",
                       *(undefined4 *)(uVar12 + 0x4c0));
            goto LAB_0010542a;
          }
          lVar28 = *(long *)(uVar12 + 0x440);
          uVar8 = ((uint)*(byte *)(lVar28 + 1) << 0x10 | (uint)*(byte *)(lVar28 + 2) << 8 |
                  (uint)*(byte *)(lVar28 + 3)) + 0xc;
          uVar20 = (ulong)uVar8;
          if (uVar8 < 0x4001) {
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1163,
                       "Next handshake message has been buffered - load");
            mbedtls_debug_print_buf
                      (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1164,
                       "Buffered handshake message (incl. header)",*(undefined8 *)(uVar12 + 0x440),
                       uVar20);
            param_1[0x26] = uVar20;
            param_1[0x20] = uVar20;
            pvVar14 = *(void **)(uVar12 + 0x440);
            *(undefined4 *)(param_1 + 0x1f) = 0x16;
            memcpy((void *)param_1[0x1d],pvVar14,uVar20);
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1177,
                       "<= ssl_load_buffered_message");
            goto LAB_00105339;
          }
          mbedtls_debug_print_msg
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x115f,"should never happen");
LAB_00105448:
          uVar12 = param_1[0xe];
          bVar18 = *(byte *)(*param_1 + 9);
          uVar20 = (ulong)bVar18;
          if (uVar12 != 0) {
            if (bVar18 != 1) goto LAB_001051f0;
            pvVar14 = *(void **)(uVar12 + 0x498);
            uVar16 = *(ulong *)(uVar12 + 0x4a0);
            uVar8 = *(uint *)(uVar12 + 0x4a8);
            if ((pvVar14 == (void *)0x0) || (param_1[0x23] < param_1[0x21])) goto LAB_00105510;
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1305,
                       "=> ssl_load_buffered_record");
            if (uVar8 == (ushort)param_1[0x22]) {
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x130c,
                         "Found buffered record from current epoch - load");
              if (0x417d - ((long)param_1[0x19] - param_1[0x17]) < uVar16) {
                uVar12 = 0xffff9400;
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1310,
                           "should never happen");
                break;
              }
              memcpy((void *)param_1[0x19],pvVar14,uVar16);
              param_1[0x21] = uVar16;
              uVar20 = param_1[0xe];
              param_1[0x23] = 0;
              if ((uVar20 != 0) && (*(void **)(uVar20 + 0x498) != (void *)0x0)) {
                *(long *)(uVar20 + 0x428) = *(long *)(uVar20 + 0x428) - *(long *)(uVar20 + 0x4a0);
                free(*(void **)(uVar20 + 0x498));
                *(undefined8 *)(uVar20 + 0x498) = 0;
              }
            }
            else {
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1308,
                         "Buffered record not from current epoch.");
            }
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x131b,
                       "<= ssl_load_buffered_record");
            bVar18 = *(byte *)(*param_1 + 9);
          }
          uVar20 = (ulong)(byte)(bVar18 - 1);
          if ((byte)(bVar18 - 1) != 0) goto LAB_001051f0;
          goto LAB_00105510;
        }
        if (*(char *)(uVar12 + 0x430) == '\0') {
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1134,
                     "CCS not seen in the current flight");
LAB_0010542a:
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1177,
                     "<= ssl_load_buffered_message");
          goto LAB_00105448;
        }
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1139,
                   "Injecting buffered CCS message");
        *(undefined4 *)(param_1 + 0x1f) = 0x14;
        param_1[0x20] = 1;
        *(undefined1 *)param_1[0x1d] = 1;
        param_1[0x21] = 0;
        param_1[0x23] = 0;
        *(undefined1 *)(uVar12 + 0x430) = 0;
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1177,
                   "<= ssl_load_buffered_message");
LAB_00105339:
        auVar32 = mbedtls_ssl_handle_message_type(param_1);
        uVar20 = auVar32._8_8_;
        iVar9 = auVar32._0_4_;
        uVar12 = auVar32._0_8_ & 0xffffffff;
        if (iVar9 != -0x6480) {
          if ((iVar9 + 0x6680U & 0xfffffeff) != 0) {
            if (iVar9 != 0) {
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1101,
                         "mbedtls_ssl_handle_message_type",uVar12);
              goto LAB_001058b0;
            }
            if (((int)param_1[0x1f] != 0x16) || (param_2 != 1)) goto LAB_00105380;
            uVar8 = mbedtls_ssl_update_handshake_status(param_1);
            uVar12 = (ulong)uVar8;
            if (uVar8 == 0) goto LAB_00105380;
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1109,
                       "mbedtls_ssl_update_handshake_status",uVar8);
            goto LAB_001058b0;
          }
          goto LAB_00105190;
        }
        uVar16 = param_1[0xe];
        if (uVar16 != 0) {
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x11af,"=> ssl_buffer_message"
                    );
          if ((int)param_1[0x1f] == 0x14) {
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x11b3,
                       "Remember CCS message");
            *(undefined1 *)(uVar16 + 0x430) = 1;
          }
          else if ((int)param_1[0x1f] == 0x16) {
            uVar20 = param_1[0x26];
            uVar27 = *(ushort *)(param_1[0x1d] + 4) << 8 | *(ushort *)(param_1[0x1d] + 4) >> 8;
            uVar8 = *(uint *)(param_1[0xe] + 0x4c0);
            if (uVar27 < uVar8) {
              uVar23 = 0x11c2;
LAB_001066e6:
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar23,
                         "should never happen");
              uVar12 = 0xffff9400;
              goto LAB_001058b0;
            }
            uVar29 = uVar27 - uVar8;
            if (3 < uVar29) {
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x11c9,
                         "Ignore future HS message with sequence number %u, buffering window %u - %u"
                         ,uVar27,uVar8,uVar8 + 3);
LAB_00106583:
              mbedtls_debug_print_msg
                        (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1268,
                         "<= ssl_buffer_message");
              uVar20 = extraout_RDX_04;
              goto LAB_00105190;
            }
            uVar15 = uVar20 - 0xc;
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x11d3,
                       "Buffering HS message with sequence number %u, offset %u ",uVar27,uVar29);
            uVar12 = (ulong)uVar29;
            lVar1 = uVar16 + uVar12 * 0x18;
            bVar18 = *(byte *)(lVar1 + 0x438);
            lVar28 = lVar1 + 0x430;
            if ((bVar18 & 1) == 0) {
              iVar9 = ssl_hs_is_proper_fragment(param_1);
              *(byte *)(lVar28 + 8) = bVar18 & 0xfd | (iVar9 == 1) * '\x02';
              if (uVar20 < 0x4001) {
                uVar30 = *(ulong *)(uVar16 + 0x428);
                if (0x8000 < uVar30) {
                  uVar23 = 0x11ec;
                  goto LAB_001066e6;
                }
                local_d8 = uVar20;
                if (iVar9 == 1) {
                  local_d8 = ((uVar15 >> 3) + uVar20 + 1) - (ulong)((uVar15 & 7) == 0);
                }
                if (0x8000 - uVar30 < local_d8) {
                  if (uVar29 != 0) {
                    mbedtls_debug_print_msg
                              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x11f8,
                               "Buffering of future message of size %zu would exceed the compile-time limit %zu (already %zu bytes buffered) -- ignore\n"
                               ,uVar15,0x8000,uVar30);
                    goto LAB_00106583;
                  }
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1203,
                             "Buffering of future message of size %zu would exceed the compile-time limit %zu (already %zu bytes buffered) -- attempt to make space by freeing buffered future messages\n"
                             ,uVar15,0x8000,uVar30);
                  uVar30 = param_1[0xe];
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1181,
                             "Attempt to free buffered messages to have %u bytes available",
                             local_d8 & 0xffffffff);
                  uVar2 = param_1[0xe];
                  if ((uVar2 != 0) && (*(void **)(uVar2 + 0x498) != (void *)0x0)) {
                    *(long *)(uVar2 + 0x428) = *(long *)(uVar2 + 0x428) - *(long *)(uVar2 + 0x4a0);
                    free(*(void **)(uVar2 + 0x498));
                    *(undefined8 *)(uVar2 + 0x498) = 0;
                  }
                  if (0x8000U - *(long *)(uVar30 + 0x428) < local_d8) {
                    iVar9 = 3;
                    while( true ) {
                      mbedtls_debug_print_msg
                                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1193,
                                 "Free buffering slot %d to make space for reassembly of next handshake message"
                                 ,iVar9);
                      ssl_buffering_free_slot_isra_0(param_1[0xe],iVar9);
                      if (local_d8 <= 0x8000U - *(long *)(uVar30 + 0x428)) break;
                      bVar31 = iVar9 == 0;
                      iVar9 = iVar9 + -1;
                      if (bVar31) {
                        uVar12 = 0xffff9600;
                        mbedtls_debug_print_msg
                                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x120f,
                                   "Reassembly of next message of size %zu (%zu with bitmap) would exceed the compile-time limit %zu (already %zu bytes buffered) -- fail\n"
                                   ,uVar15,local_d8,0x8000,*(undefined8 *)(uVar16 + 0x428));
                        mbedtls_debug_print_msg
                                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1268,
                                   "<= ssl_buffer_message");
                        goto LAB_001058b0;
                      }
                    }
                    pcVar26 = "Enough space available after freeing buffered HS messages";
                    uVar23 = 0x119d;
                  }
                  else {
                    pcVar26 = "Enough space available after freeing future epoch record";
                    uVar23 = 0x118a;
                  }
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",uVar23,pcVar26);
                }
                mbedtls_debug_print_msg
                          (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1221,
                           "initialize reassembly, total length = %zu",uVar15);
                pvVar14 = calloc(1,local_d8);
                lVar28 = uVar16 + uVar12 * 0x18;
                *(void **)(lVar28 + 0x440) = pvVar14;
                if (pvVar14 == (void *)0x0) {
                  uVar12 = 0xffff8100;
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1268,
                             "<= ssl_buffer_message");
                  goto LAB_001058b0;
                }
                uVar30 = param_1[0x1d];
                *(ulong *)(lVar28 + 0x448) = local_d8;
                __memcpy_chk(pvVar14,uVar30,6);
                lVar1 = *(long *)(lVar28 + 0x440);
                *(undefined2 *)(lVar1 + 6) = 0;
                *(undefined1 *)(lVar1 + 8) = 0;
                lVar1 = *(long *)(lVar28 + 0x440);
                *(undefined2 *)(lVar1 + 9) = *(undefined2 *)(lVar1 + 1);
                *(undefined1 *)(lVar1 + 0xb) = *(undefined1 *)(lVar1 + 3);
                *(byte *)(lVar28 + 0x438) = *(byte *)(lVar28 + 0x438) | 1;
                *(long *)(uVar16 + 0x428) = *(long *)(uVar16 + 0x428) + local_d8;
                bVar18 = *(byte *)(lVar28 + 0x438);
LAB_00105fa8:
                if ((bVar18 & 4) == 0) {
                  lVar28 = uVar16 + uVar12 * 0x18;
                  lVar1 = *(long *)(lVar28 + 0x440);
                  uVar30 = param_1[0x1d];
                  bVar18 = *(byte *)(uVar30 + 8);
                  uVar8 = (uint)*(byte *)(uVar30 + 6) << 0x10 | (uint)*(byte *)(uVar30 + 7) << 8 |
                          (uint)bVar18;
                  local_d8 = (ulong)uVar8;
                  local_b0 = (uint)*(byte *)(uVar30 + 9) << 0x10 | (uint)*(byte *)(uVar30 + 10) << 8
                             | (uint)*(byte *)(uVar30 + 0xb);
                  uVar30 = (ulong)local_b0;
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x124c,
                             "adding fragment, offset = %zu, length = %zu",local_d8,uVar30);
                  memcpy((void *)(lVar1 + 0xc + local_d8),(void *)(param_1[0x1d] + 0xc),uVar30);
                  bVar31 = true;
                  if ((*(byte *)(lVar28 + 0x438) & 2) != 0) {
                    pcVar26 = (char *)(lVar1 + uVar20);
                    uVar29 = bVar18 & 7;
                    uVar11 = 8 - uVar29;
                    if (uVar11 == 8) {
LAB_001068f2:
                      local_b0 = local_b0 & 7;
                      if (local_b0 != 0) {
                        iVar9 = 8 - local_b0;
                        uVar20 = uVar30 + local_d8;
                        uVar30 = uVar30 - local_b0;
                        uVar8 = (uint)(byte)pcVar26[uVar20 >> 3];
                        do {
                          bVar18 = (byte)iVar9;
                          iVar9 = iVar9 + 1;
                          uVar8 = uVar8 | 1 << (bVar18 & 0x1f);
                        } while (iVar9 != 8);
                        pcVar26[uVar20 >> 3] = (byte)uVar8;
                      }
                      memset(pcVar26 + (local_d8 >> 3),0xff,uVar30 >> 3);
                    }
                    else {
                      uVar20 = (ulong)uVar11;
                      uVar8 = uVar8 >> 3;
                      if (uVar20 < uVar30) {
                        local_d8 = local_d8 + uVar20;
                        uVar30 = uVar30 - uVar20;
                        uVar21 = (uint)(byte)pcVar26[uVar8];
                        do {
                          uVar11 = uVar11 - 1;
                          uVar21 = uVar21 | 1 << ((byte)uVar11 & 0x1f);
                        } while (uVar11 != 0);
                        pcVar26[uVar8] = (byte)uVar21;
                        local_b0 = (local_b0 - 8) + uVar29;
                        goto LAB_001068f2;
                      }
                      if (local_b0 != 0) {
                        uVar29 = (uint)(byte)pcVar26[uVar8];
                        local_b0 = uVar11 - local_b0;
                        do {
                          bVar18 = (byte)local_b0;
                          local_b0 = local_b0 + 1;
                          uVar29 = uVar29 | 1 << (bVar18 & 0x1f);
                        } while (uVar11 != local_b0);
                        pcVar26[uVar8] = (byte)uVar29;
                      }
                    }
                    uVar20 = uVar15 >> 3;
                    if (uVar20 != 0) {
                      pcVar17 = pcVar26;
                      do {
                        if (*pcVar17 != -1) goto LAB_00106982;
                        pcVar17 = pcVar17 + 1;
                      } while (pcVar17 != pcVar26 + uVar20);
                    }
                    if ((uVar15 & 7) == 0) {
LAB_00106a6e:
                      bVar31 = true;
                    }
                    else {
                      if (pcVar26[uVar20] < '\0') {
                        iVar9 = 6;
                        do {
                          if (iVar9 == 7 - ((uint)uVar15 & 7)) goto LAB_00106a6e;
                          bVar18 = (byte)iVar9;
                          iVar9 = iVar9 + -1;
                        } while (((int)(uint)(byte)pcVar26[uVar20] >> (bVar18 & 0x1f) & 1U) != 0);
                      }
LAB_00106982:
                      bVar31 = false;
                    }
                  }
                  pcVar26 = "not yet ";
                  lVar28 = uVar16 + 0x430 + uVar12 * 0x18;
                  *(byte *)(lVar28 + 8) = *(byte *)(lVar28 + 8) & 0xfb;
                  if (bVar31) {
                    pcVar26 = "";
                  }
                  mbedtls_debug_print_msg
                            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x125a,
                             "message %scomplete",pcVar26);
                }
              }
            }
            else {
              if (*(int *)param_1[0x1d] == **(int **)(lVar1 + 0x440)) goto LAB_00105fa8;
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1239,
                         "Fragment header mismatch - ignore");
            }
          }
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1268,"<= ssl_buffer_message"
                    );
          uVar20 = extraout_RDX_01;
        }
        goto LAB_00105190;
      }
LAB_001051f0:
      uVar23 = 5;
LAB_001051f8:
      uVar8 = mbedtls_ssl_fetch_input(param_1,uVar23,uVar20);
      uVar23 = 0x1373;
      if (uVar8 != 0) {
LAB_00105870:
        uVar12 = (ulong)uVar8;
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar23,"mbedtls_ssl_fetch_input"
                   ,uVar8);
        uVar20 = extraout_RDX_02;
joined_r0x00105c47:
        if (uVar8 != 0xffff9a80) break;
        goto LAB_00105190;
      }
      uVar8 = ssl_parse_record_header
                        (param_1,param_1[0x19],param_1[0x21],local_98,"mbedtls_ssl_fetch_input",0);
      uVar12 = (ulong)uVar8;
      if (uVar8 == 0) {
        if (*(char *)(*param_1 + 9) == '\x01') {
          param_1[0x23] = local_80;
          if (local_80 < param_1[0x21]) {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x13b7,
                       "more than one record within datagram");
          }
        }
        else {
          uVar8 = mbedtls_ssl_fetch_input(param_1);
          if (uVar8 != 0) {
            uVar23 = 0x13c1;
            goto LAB_00105870;
          }
          param_1[0x21] = 0;
        }
        mbedtls_debug_print_buf
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xfe9,
                   "input record from network",local_88);
        bVar18 = local_90;
        uVar20 = param_1[0xf];
        if ((uVar20 == 0) || ((*(int *)(uVar20 + 0x7c) == 0x304 && (local_90 == 0x14)))) {
          cVar7 = *(char *)(*param_1 + 9);
LAB_00105df9:
          if (cVar7 == '\x01') {
LAB_001065b0:
            uVar20 = local_70;
            mbedtls_ssl_dtls_replay_update(param_1);
            if (0x4000 < uVar20) goto LAB_001065c8;
LAB_00105aab:
            pbVar22 = (byte *)param_1[0x19];
            pbVar19 = pbVar22 + 3;
            pbVar13 = pbVar22 + 0xb;
          }
          else {
            if (0x4000 < local_70) {
LAB_001065c8:
              pcVar26 = "bad message length";
              uVar23 = 0x10ae;
LAB_001065d4:
              mbedtls_debug_print_msg
                        (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar23,pcVar26);
              goto LAB_001065e6;
            }
            pbVar22 = (byte *)param_1[0x19];
            pbVar19 = (byte *)param_1[0x17];
            pbVar13 = pbVar22 + 3;
          }
          param_1[0x18] = (ulong)pbVar19;
          param_1[0x1a] = (ulong)pbVar13;
          param_1[0x1b] = (ulong)(pbVar13 + local_68);
          param_1[0x1c] = (ulong)(pbVar13 + local_68 + 2);
          *(uint *)(param_1 + 0x1f) = (uint)local_90;
          *pbVar22 = local_90;
          param_1[0x1d] = local_78 + local_88;
          param_1[0x20] = local_70;
          *(ushort *)param_1[0x1b] = (ushort)local_70 << 8 | (ushort)local_70 >> 8;
          goto LAB_00105339;
        }
        uVar8 = mbedtls_ssl_decrypt_buf(param_1,uVar20,local_98);
        uVar12 = (ulong)uVar8;
        if (uVar8 == 0) {
          if (local_90 != bVar18) {
            mbedtls_debug_print_msg
                      (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x103d,
                       "record type after decrypt (before %d): %d",bVar18,local_90);
          }
          uVar20 = local_70;
          mbedtls_debug_print_buf
                    (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0x1041,
                     "input payload after decrypt",local_78 + local_88);
          if (3 < (byte)(local_90 - 0x14)) {
            pcVar26 = "unknown record type";
            uVar23 = 0x104d;
            goto LAB_001065d4;
          }
          if (local_70 == 0) {
            if ((*(int *)((long)param_1 + 0x14) != 0x303) || (local_90 == 0x17)) {
              iVar9 = (int)param_1[0x27] + 1;
              *(int *)(param_1 + 0x27) = iVar9;
              if (3 < iVar9) {
                mbedtls_debug_print_msg
                          (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1063,
                           "received four consecutive empty messages, possible DoS attack");
                uVar16 = *param_1;
                if (*(char *)(uVar16 + 9) == '\x01') goto LAB_0010665a;
                goto LAB_001066bd;
              }
              cVar7 = *(char *)(*param_1 + 9);
              if (cVar7 != '\x01') goto LAB_00105edb;
              mbedtls_ssl_dtls_replay_update(param_1,1,local_90 - 0x14,uVar20);
              goto LAB_00105aab;
            }
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1057,
                       "invalid zero-length message type: %d",(int)param_1[0x1f]);
LAB_001065e6:
            uVar12 = 0xffff8e00;
          }
          else {
            *(undefined4 *)(param_1 + 0x27) = 0;
            cVar7 = *(char *)(*param_1 + 9);
            if (cVar7 == '\x01') goto LAB_001065b0;
LAB_00105edb:
            uVar20 = 8;
            do {
              uVar12 = uVar20;
              uVar20 = (ulong)(cVar7 == '\x01') * 2;
              if (uVar12 <= uVar20) goto joined_r0x00105f27;
              uVar20 = (ulong)((int)uVar12 - 1);
              pcVar26 = (char *)(param_1[0x18] + uVar20);
              *pcVar26 = *pcVar26 + '\x01';
              cVar7 = *(char *)(*param_1 + 9);
            } while (*pcVar26 == '\0');
            uVar20 = (ulong)(cVar7 == '\x01') * 2;
joined_r0x00105f27:
            if (uVar12 != uVar20) goto LAB_00105df9;
            uVar12 = 0xffff9480;
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x107e,
                       "incoming message counter would wrap");
          }
          break;
        }
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xfff,"ssl_decrypt_buf",uVar8);
        uVar16 = *param_1;
        if (uVar8 != 0xffffa000) {
          uVar20 = extraout_RDX_05;
          if (*(char *)(uVar16 + 9) == '\x01') {
            if (uVar8 != 0xffff8e80) {
LAB_00105c40:
              uVar8 = (uint)uVar12;
              goto joined_r0x00105c47;
            }
LAB_0010665a:
            if (((int)param_1[1] - 0xbU & 0xfffffffd) == 0) goto LAB_001066bd;
            uVar8 = *(uint *)(uVar16 + 0x138);
            if ((uVar8 == 0) ||
               (uVar29 = (int)param_1[3] + 1, *(uint *)(param_1 + 3) = uVar29, uVar29 < uVar8)) {
              param_1[0x23] = 0;
              pcVar26 = "discarding invalid record (mac)";
              uVar23 = 0x13ee;
              param_1[0x21] = 0;
              goto LAB_00105308;
            }
            mbedtls_debug_print_msg
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x13e3,
                       "too many records with bad MAC");
          }
          else {
            if (uVar8 != 0xffff8e80) goto LAB_00105c40;
LAB_001066bd:
            mbedtls_ssl_send_alert_message(param_1,2,0x14);
          }
          uVar12 = 0xffff8e80;
          break;
        }
        if (*(char *)(uVar16 + 0x16) != '\0') break;
        mbedtls_debug_print_msg
                  (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1022,"ignoring unexpected CID"
                  );
        uVar20 = extraout_RDX_06;
        goto LAB_00105190;
      }
      uVar20 = *param_1;
      if (*(char *)(uVar20 + 9) != '\x01') goto LAB_00105c40;
      if (uVar8 != 0xffff9b80) {
        if (uVar8 == 0xffff9900) goto LAB_00105268;
        param_1[0x23] = 0;
        pcVar26 = "discarding invalid record (header)";
        uVar23 = 0x13a5;
        param_1[0x21] = 0;
LAB_00105308:
        mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar23,pcVar26);
        uVar20 = extraout_RDX_00;
        goto LAB_00105190;
      }
      uVar12 = param_1[0xe];
      if (((uVar12 == 0) || (local_90 != 0x16)) || (*(long *)(uVar12 + 0x498) != 0)) {
LAB_00105268:
        uVar12 = param_1[0x19];
LAB_0010526f:
        psVar24 = (short *)(uVar12 + 3);
        uVar16 = uVar12 + 0xb;
      }
      else {
        if (0x8000U - *(long *)(uVar12 + 0x428) < local_80) {
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1338,
                     "Buffering of future epoch record of size %zu would exceed the compile-time limit %zu (already %zu bytes buffered) -- ignore\n"
                     ,local_80,0x8000,*(long *)(uVar12 + 0x428));
        }
        else {
          mbedtls_debug_print_msg
                    (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1342,
                     "Buffer record from epoch %u",(ushort)param_1[0x22] + 1);
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1344,"Buffered record",
                     local_88,local_80);
          uVar16 = local_80;
          uVar20 = param_1[0x22];
          *(ulong *)(uVar12 + 0x4a0) = local_80;
          *(uint *)(uVar12 + 0x4a8) = (ushort)uVar20 + 1;
          pvVar14 = calloc(1,local_80);
          *(void **)(uVar12 + 0x498) = pvVar14;
          if (pvVar14 != (void *)0x0) {
            __memcpy_chk(pvVar14,local_88,uVar16,uVar16);
            *(long *)(uVar12 + 0x428) = *(long *)(uVar12 + 0x428) + uVar16;
          }
        }
        uVar20 = *param_1;
        uVar12 = param_1[0x19];
        uVar16 = uVar12 + 3;
        if (*(char *)(uVar20 + 9) == '\x01') goto LAB_0010526f;
        psVar24 = (short *)param_1[0x17];
      }
      param_1[0x1a] = uVar16;
      param_1[0x18] = (ulong)psVar24;
      *(uint *)(param_1 + 0x1f) = (uint)local_90;
      param_1[0x1b] = uVar16 + local_68;
      uVar12 = uVar16 + local_68 + 2;
      param_1[0x1d] = uVar12;
      param_1[0x1c] = uVar12;
      param_1[0x20] = local_70;
      if ((((*psVar24 != 0) || (*(char *)(uVar20 + 8) != '\x01')) ||
          (((int)param_1[1] < 0x1b || ((local_90 != 0x16 || (param_1[0x21] < 0xe)))))) ||
         (*(char *)(param_1[0x17] + 0xd) != '\x01')) {
LAB_001052cb:
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1395,
                   "ssl_check_client_reconnect",0);
LAB_001052ea:
        pcVar26 = "discarding unexpected record (header)";
        uVar23 = 0x139e;
        param_1[0x23] = local_80;
        goto LAB_00105308;
      }
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xfd7,
                 "possible client reconnect from the same port");
      if ((*(long *)(*param_1 + 0x90) == 0) || (*(long *)(*param_1 + 0x98) == 0)) {
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xea1,
                   "no cookie callbacks, can\'t check reconnect validity");
        goto LAB_001052cb;
      }
      uVar20 = param_1[0x21];
      uVar12 = param_1[0x38];
      uVar16 = param_1[0x39];
      puVar3 = (ulong *)param_1[0x2a];
      puVar4 = (ulong *)param_1[0x17];
      uVar23 = mbedtls_debug_print_msg
                         (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe20,
                          "check cookie: in_len=%u",uVar20 & 0xffffffff);
      pcVar26 = "cli_id";
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe22,"cli_id",uVar12,uVar16,
                 uVar23);
      if (uVar20 < 0x3d) {
        mbedtls_debug_print_msg
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe24,
                   "check cookie: record too short");
LAB_00106d0c:
        uVar12 = 0xffff8d00;
LAB_00106bdd:
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xeac,
                   "mbedtls_ssl_check_dtls_clihlo_cookie",uVar12);
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1395,
                   "ssl_check_client_reconnect",uVar12);
        break;
      }
      uVar27 = *(ushort *)((long)puVar4 + 3) << 8 | *(ushort *)((long)puVar4 + 3) >> 8;
      puVar25 = (ulong *)(ulong)((uint)*(byte *)((long)puVar4 + 0x13) << 0x10 |
                                 (uint)*(byte *)((long)puVar4 + 0x14) << 8 |
                                (uint)*(byte *)((long)puVar4 + 0x15));
      if (((byte)*puVar4 != 0x16) || (puVar25 != (ulong *)0x0 || uVar27 != 0)) {
        mbedtls_debug_print_msg
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe2d,
                   "check cookie: not a good ClientHello");
        uVar15 = (ulong)(byte)*puVar4;
        pcVar26 = "    type=%u epoch=%u fragment_offset=%u";
        uVar23 = 0xe2e;
        uVar8 = (uint)uVar27;
LAB_00106cf6:
        mbedtls_debug_print_msg
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",uVar23,pcVar26,uVar15,uVar8,
                   puVar25);
        goto LAB_00106d0c;
      }
      bVar18 = *(byte *)((long)puVar4 + 0x3b);
      uVar15 = (ulong)bVar18;
      uVar30 = uVar15 + 0x3d;
      if (uVar20 < uVar30) {
        uVar8 = (int)uVar20 - 0x3d;
        uVar23 = 0xe36;
        pcVar26 = "check cookie: sid_len=%u > %u";
        puVar25 = puVar3;
        goto LAB_00106cf6;
      }
      puVar25 = param_1;
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe3b,"sid received from network",
                 (byte *)((long)puVar4 + 0x3c),uVar15,pcVar26);
      uVar15 = (ulong)*(byte *)((long)puVar4 + uVar15 + 0x3c);
      if (uVar20 < uVar30 + uVar15) {
        pcVar26 = "check cookie: cookie_len=%u > %u";
        uVar23 = 0xe40;
        uVar8 = ((int)uVar20 + -0x3d) - (uint)bVar18;
        goto LAB_00106cf6;
      }
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe46,
                 "cookie received from network",(byte *)(uVar30 + (long)puVar4),uVar15,
                 uVar30 + uVar15);
      iVar9 = (**(code **)(*param_1 + 0x98))
                        (*(undefined8 *)(*param_1 + 0xa0),(byte *)(uVar30 + (long)puVar4),uVar15,
                         uVar12,uVar16);
      if (iVar9 != 0) {
        uVar15 = puVar4[1];
        local_a0 = (long)puVar3 + 0x1c;
        *puVar3 = *puVar4;
        puVar3[1] = uVar15;
        uVar23 = *(undefined8 *)((long)puVar4 + 9);
        uVar5 = *(undefined8 *)((long)puVar4 + 0x11);
        *(undefined2 *)((long)puVar3 + 0x19) = 0xfffe;
        *(undefined8 *)((long)puVar3 + 9) = uVar23;
        *(undefined8 *)((long)puVar3 + 0x11) = uVar5;
        *(undefined1 *)((long)puVar3 + 0xd) = 3;
        iVar9 = (**(code **)(*param_1 + 0x90))
                          (*(undefined8 *)(*param_1 + 0xa0),&local_a0,puVar3 + 0x800,uVar12,uVar16);
        if (iVar9 != 0) {
          uVar12 = 0xffff9400;
          goto LAB_00106bdd;
        }
        lVar28 = local_a0 - (long)puVar3;
        *(char *)((long)puVar3 + 0x1b) = (char)lVar28 + -0x1c;
        uVar6 = (undefined1)((ulong)(lVar28 + -0x19) >> 8);
        *(undefined1 *)((long)puVar3 + 0x17) = uVar6;
        *(undefined1 *)((long)puVar3 + 0xf) = uVar6;
        cVar7 = (char)lVar28 + -0x19;
        *(char *)(puVar3 + 3) = cVar7;
        *(char *)(puVar3 + 2) = cVar7;
        uVar27 = (short)lVar28 - 0xd;
        uVar6 = (undefined1)((ulong)(lVar28 + -0x19) >> 0x10);
        *(undefined1 *)((long)puVar3 + 0x16) = uVar6;
        *(undefined1 *)((long)puVar3 + 0xe) = uVar6;
        *(ushort *)((long)puVar3 + 0xb) = uVar27 * 0x100 | uVar27 >> 8;
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xeac,
                   "mbedtls_ssl_check_dtls_clihlo_cookie",0xffff9580);
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xeb0,
                   "sending HelloVerifyRequest");
        mbedtls_debug_print_buf
                  (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xeb1,
                   "output record sent to network",param_1[0x2a],lVar28,uVar20);
        uVar10 = (*(code *)param_1[6])(param_1[9],param_1[0x2a],lVar28);
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xeb7,"ssl->f_send",uVar10);
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1395,
                   "ssl_check_client_reconnect",0);
        goto LAB_001052ea;
      }
      mbedtls_debug_print_msg
                (param_1,4,"thirdparty/mbedtls/library/ssl_msg.c",0xe4b,"check cookie: valid");
      mbedtls_debug_print_ret
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0xeac,
                 "mbedtls_ssl_check_dtls_clihlo_cookie",0);
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xebe,
                 "cookie is valid, resetting context");
      uVar8 = mbedtls_ssl_session_reset_int(param_1,1);
      uVar12 = (ulong)uVar8;
      if (uVar8 == 0) {
        uVar12 = 0xffff9880;
        mbedtls_debug_print_ret
                  (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1395,
                   "ssl_check_client_reconnect",0xffff9880);
        break;
      }
      mbedtls_debug_print_ret(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0xec0,"reset",uVar8);
      mbedtls_debug_print_ret
                (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1395,
                 "ssl_check_client_reconnect",uVar12);
      uVar20 = extraout_RDX_07;
    } while (uVar8 == 0xffff9a80);
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x10e9,"ssl_get_next_record",uVar12)
    ;
  }
  else {
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x110e,
               "reuse previously read message");
    *(undefined4 *)((long)param_1 + 0x13c) = 0;
LAB_00105380:
    uVar12 = 0;
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1112,"<= read record");
  }
LAB_001058b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



int mbedtls_ssl_parse_change_cipher_spec(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x14d9,"=> parse change cipher spec");
  iVar2 = mbedtls_ssl_read_record(param_1,1);
  if (iVar2 != 0) {
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x14dc,"mbedtls_ssl_read_record",
               iVar2);
    return iVar2;
  }
  if ((int)param_1[0x1f] != 0x14) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x14e1,
               "bad change cipher spec message");
    mbedtls_ssl_send_alert_message(param_1,2,10);
    return -0x7700;
  }
  mbedtls_debug_print_msg
            (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x14ee,
             "switching to new transform spec for inbound data");
  param_1[0xf] = param_1[0x12];
  param_1[10] = param_1[0xd];
  if (*(char *)(*param_1 + 9) == '\x01') {
    plVar1 = param_1 + 0x22;
    *(short *)plVar1 = (short)*plVar1 + 1;
    *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
    if ((short)*plVar1 == 0) {
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x14fc,"DTLS epoch would wrap");
      return -0x6b80;
    }
  }
  else {
    *(undefined8 *)param_1[0x18] = 0;
    if (*(char *)(*param_1 + 9) != '\x01') {
      param_1[0x18] = param_1[0x17];
      lVar4 = param_1[0x19] + 3;
      lVar3 = param_1[0x19] + 5;
      goto LAB_00106efd;
    }
  }
  lVar3 = param_1[0x19];
  param_1[0x18] = lVar3 + 3;
  lVar4 = lVar3 + 0xb;
  lVar3 = lVar3 + 0xd;
LAB_00106efd:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  param_1[0x1c] = lVar3;
  param_1[0x1d] = lVar3;
  param_1[0x1a] = lVar4;
  param_1[0x1b] = lVar4;
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1509,"<= parse change cipher spec");
  return 0;
}



ulong mbedtls_ssl_read(long *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong __n;
  void *__src;
  char *pcVar7;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    __n = 0xffff8f00;
  }
  else {
    mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1728,"=> read");
    if (*(char *)(*param_1 + 9) == '\x01') {
      uVar2 = mbedtls_ssl_flush_output(param_1);
      __n = (ulong)uVar2;
      if (uVar2 != 0) goto LAB_001070f9;
      if ((param_1[0xe] != 0) && (*(char *)(param_1[0xe] + 0xd) == '\x01')) {
        uVar2 = mbedtls_ssl_flight_transmit(param_1);
        __n = (ulong)uVar2;
        if (uVar2 != 0) goto LAB_001070f9;
      }
    }
    uVar2 = ssl_check_ctr_renegotiate(param_1);
    __n = (ulong)uVar2;
    if ((uVar2 == 0xffff9500) || (uVar2 == 0)) {
      if ((int)param_1[1] != 0x1b) {
        uVar2 = mbedtls_ssl_handshake(param_1);
        __n = (ulong)uVar2;
        if ((uVar2 != 0xffff9500) && (uVar2 != 0)) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1752,"mbedtls_ssl_handshake"
                     ,uVar2);
          goto LAB_001070f9;
        }
      }
      __src = (void *)param_1[0x1e];
      while (__src == (void *)0x0) {
        if ((((code *)param_1[0x16] != (code *)0x0) &&
            (iVar3 = (*(code *)param_1[0x16])(param_1[0x14]), iVar3 == -1)) &&
           (uVar2 = *(uint *)(*param_1 + 0x120), param_1[0x15] != 0)) {
          mbedtls_debug_print_msg
                    (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms",
                     uVar2);
          (*(code *)param_1[0x15])(param_1[0x14],uVar2 >> 2,uVar2);
        }
        uVar2 = mbedtls_ssl_read_record(param_1,1);
        __n = (ulong)uVar2;
        if (uVar2 != 0) {
          if (uVar2 == 0xffff8d80) {
LAB_00107617:
            __n = 0;
          }
          else {
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1764,
                       "mbedtls_ssl_read_record",uVar2);
          }
          goto LAB_001070f9;
        }
        iVar3 = (int)param_1[0x1f];
        if (param_1[0x20] == 0) {
          if (iVar3 == 0x17) {
            uVar2 = mbedtls_ssl_read_record(param_1,1);
            __n = (ulong)uVar2;
            if (uVar2 == 0) {
              iVar3 = (int)param_1[0x1f];
              goto LAB_00107130;
            }
            if (uVar2 == 0xffff8d80) goto LAB_00107617;
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1772,
                       "mbedtls_ssl_read_record",uVar2);
            goto LAB_001070f9;
          }
          if (iVar3 != 0x16) {
            if ((*(int *)((long)param_1 + 0xc) == 3) &&
               (iVar1 = *(int *)(*param_1 + 300), -1 < iVar1)) {
              iVar6 = (int)param_1[2] + 1;
              *(int *)(param_1 + 2) = iVar6;
              if (iVar6 <= iVar1) goto LAB_00107143;
              goto LAB_00107362;
            }
            if (iVar3 == 0x15) goto LAB_00107620;
LAB_001070d6:
            pcVar7 = "bad application data message";
            uVar5 = 0x17a9;
LAB_001070e2:
            mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar5,pcVar7);
            __n = 0xffff8900;
            goto LAB_001070f9;
          }
LAB_001072b0:
          if (*(uint *)((long)param_1 + 0x14) == 0x304) {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1660,
                       "received post-handshake message");
            if (((*(char *)(*param_1 + 8) == '\0') &&
                (param_1[0x26] != (ulong)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4)) &&
               (*(char *)param_1[0x1d] == '\x04')) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x1666,
                         "NewSessionTicket received");
              if ((*(byte *)(*param_1 + 0x11) & 2) != 0) {
                *(undefined4 *)((long)param_1 + 0x13c) = 1;
                __n = 0xffff9700;
                *(undefined4 *)(param_1 + 1) = 0x1c;
                goto LAB_00107534;
              }
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x166f,
                         "Ignoring NewSessionTicket, handling disabled.");
              goto LAB_001071a6;
            }
LAB_00107330:
            __n = 0xffff8900;
LAB_00107534:
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x177a,
                       "ssl_handle_hs_message_post_handshake",__n);
            goto LAB_001070f9;
          }
          if (0x303 < *(uint *)((long)param_1 + 0x14)) {
            __n = 0xffff9400;
            goto LAB_00107534;
          }
          lVar4 = *param_1;
          if (*(char *)(lVar4 + 8) == '\0') {
            if ((*(char *)param_1[0x1d] != '\0') ||
               (param_1[0x26] != (ulong)(*(char *)(lVar4 + 9) == '\x01') * 8 + 4)) {
              pcVar7 = "handshake received (not HelloRequest)";
              uVar5 = 0x1698;
              goto LAB_0010730e;
            }
LAB_00107381:
            if ((*(char *)(lVar4 + 0x10) == '\0') ||
               (((int)param_1[0x3a] == 0 && (*(char *)(lVar4 + 0xb) == '\0')))) {
              mbedtls_debug_print_msg
                        (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x16d2,
                         "refusing renegotiation, sending alert");
              uVar2 = mbedtls_ssl_send_alert_message(param_1,1,100);
              __n = (ulong)uVar2;
              if (uVar2 != 0) goto LAB_00107534;
              goto LAB_001071a6;
            }
            if (*(short *)(lVar4 + 8) == 0x100) {
              *(undefined4 *)((long)param_1 + 0xc) = 3;
            }
            uVar2 = mbedtls_ssl_start_renegotiation(param_1);
            __n = (ulong)uVar2;
            if ((uVar2 == 0xffff9500) || (uVar2 == 0)) goto LAB_001071a6;
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x16c7,
                       "mbedtls_ssl_start_renegotiation",uVar2);
            goto LAB_00107534;
          }
          if ((*(char *)(lVar4 + 8) != '\x01') || (*(char *)param_1[0x1d] == '\x01'))
          goto LAB_00107381;
          pcVar7 = "handshake received (not ClientHello)";
          uVar5 = 0x16a7;
LAB_0010730e:
          mbedtls_debug_print_msg(param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",uVar5,pcVar7);
          if (*(char *)(*param_1 + 9) != '\x01') goto LAB_00107330;
        }
        else {
LAB_00107130:
          if (iVar3 == 0x16) goto LAB_001072b0;
          if (((*(int *)((long)param_1 + 0xc) == 3) &&
              (iVar1 = *(int *)(*param_1 + 300), -1 < iVar1)) &&
             (iVar6 = (int)param_1[2] + 1, *(int *)(param_1 + 2) = iVar6, iVar1 < iVar6)) {
LAB_00107362:
            pcVar7 = "renegotiation requested, but not honored by client";
            uVar5 = 0x179a;
            goto LAB_001070e2;
          }
LAB_00107143:
          if (iVar3 == 0x15) {
LAB_00107620:
            __n = 0xffff9700;
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x17a4,
                       "ignoring non-fatal non-closure alert");
            goto LAB_001070f9;
          }
          if (iVar3 != 0x17) goto LAB_001070d6;
          param_1[0x1e] = param_1[0x1d];
          if ((0x1a < (int)param_1[1]) && (param_1[0x15] != 0)) {
            mbedtls_debug_print_msg
                      (param_1,3,"thirdparty/mbedtls/library/ssl_msg.c",0x124,"set_timer to %d ms",0
                      );
            (*(code *)param_1[0x15])(param_1[0x14],0,0);
          }
          if ((*(char *)(*param_1 + 8) == '\x01') && (*(int *)((long)param_1 + 0xc) == 3)) {
            uVar2 = mbedtls_ssl_resend_hello_request(param_1);
            __n = (ulong)uVar2;
            if (uVar2 == 0) goto LAB_001071a6;
            mbedtls_debug_print_ret
                      (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x17bd,
                       "mbedtls_ssl_resend_hello_request",uVar2);
            goto LAB_001070f9;
          }
        }
LAB_001071a6:
        __src = (void *)param_1[0x1e];
      }
      __n = param_1[0x20];
      if (param_3 <= (ulong)param_1[0x20]) {
        __n = param_3;
      }
      if (param_3 != 0) {
        memcpy(param_2,__src,__n);
        param_1[0x20] = param_1[0x20] - __n;
        __src = (void *)param_1[0x1e];
      }
      mbedtls_platform_zeroize(__src,__n);
      if (param_1[0x20] == 0) {
        *(undefined4 *)((long)param_1 + 0x13c) = 0;
        lVar4 = 0;
      }
      else {
        lVar4 = param_1[0x1e] + __n;
      }
      param_1[0x1e] = lVar4;
      mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x17c8,"<= read");
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1749,"ssl_check_ctr_renegotiate"
                 ,uVar2);
    }
  }
LAB_001070f9:
  return __n & 0xffffffff;
}



ulong mbedtls_ssl_write(long *param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong __n;
  
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x182e,"=> write");
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return 0xffff8f00;
  }
  uVar1 = ssl_check_ctr_renegotiate(param_1);
  if (uVar1 != 0) {
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x1836,"ssl_check_ctr_renegotiate",
               uVar1);
    return (ulong)uVar1;
  }
  if ((int)param_1[1] != 0x1b) {
    uVar1 = mbedtls_ssl_handshake(param_1);
    if (uVar1 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x183d,"mbedtls_ssl_handshake",
                 uVar1);
      return (ulong)uVar1;
    }
  }
  uVar1 = mbedtls_ssl_get_max_out_record_payload(param_1);
  uVar3 = (ulong)uVar1;
  uVar2 = (ulong)(int)uVar1;
  if ((int)uVar1 < 0) {
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x17f6,
               "mbedtls_ssl_get_max_out_record_payload",uVar1);
  }
  else {
    __n = param_3;
    if ((uVar2 < param_3) && (__n = uVar2, *(char *)(*param_1 + 9) == '\x01')) {
      uVar3 = 0xffff8f00;
      mbedtls_debug_print_msg
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x17fd,
                 "fragment larger than the (negotiated) maximum fragment length: %zu > %zu",param_3,
                 uVar2,*param_1);
    }
    else {
      if (param_1[0x33] == 0) {
        param_1[0x32] = __n;
        *(undefined4 *)(param_1 + 0x31) = 0x17;
        if (__n != 0) {
          memcpy((void *)param_1[0x30],param_2,__n);
        }
        uVar1 = mbedtls_ssl_write_record(param_1,1);
        uVar3 = (ulong)uVar1;
        if (uVar1 != 0) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x181f,
                     "mbedtls_ssl_write_record",uVar1);
          goto LAB_001077ec;
        }
      }
      else {
        uVar1 = mbedtls_ssl_flush_output(param_1);
        uVar3 = (ulong)uVar1;
        if (uVar1 != 0) {
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x180f,
                     "mbedtls_ssl_flush_output",uVar1);
          goto LAB_001077ec;
        }
      }
      uVar3 = __n & 0xffffffff;
    }
  }
LAB_001077ec:
  mbedtls_debug_print_msg(param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x1844,"<= write");
  return uVar3;
}



int mbedtls_ssl_close_notify(long *param_1)

{
  int iVar1;
  
  if (param_1 == (long *)0x0) {
    return -0x7100;
  }
  if (*param_1 == 0) {
    iVar1 = -0x7100;
  }
  else {
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x18bd,"=> write close notify");
    if ((0x1a < (int)param_1[1]) &&
       (iVar1 = mbedtls_ssl_send_alert_message(param_1,1,0), iVar1 != 0)) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_msg.c",0x18c3,
                 "mbedtls_ssl_send_alert_message",iVar1);
      return iVar1;
    }
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_msg.c",0x18c8,"<= write close notify");
    iVar1 = 0;
  }
  return iVar1;
}



void mbedtls_ssl_transform_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_cipher_free(param_1 + 0x80);
    mbedtls_cipher_free(param_1 + 0xe0);
    mbedtls_md_free(param_1 + 0x48);
    mbedtls_md_free(param_1 + 0x60);
    mbedtls_platform_zeroize(param_1,0x1c8);
    return;
  }
  return;
}



void mbedtls_ssl_set_inbound_transform(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  **(undefined8 **)(param_1 + 0xc0) = 0;
  return;
}



void mbedtls_ssl_set_outbound_transform(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



void mbedtls_ssl_buffering_free(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    if (*(void **)(lVar2 + 0x498) != (void *)0x0) {
      *(long *)(lVar2 + 0x428) = *(long *)(lVar2 + 0x428) - *(long *)(lVar2 + 0x4a0);
      free(*(void **)(lVar2 + 0x498));
      *(undefined8 *)(lVar2 + 0x498) = 0;
      lVar2 = *(long *)(param_1 + 0x70);
    }
    lVar4 = 0x438;
    iVar3 = 0;
    while( true ) {
      lVar1 = lVar2 + (long)iVar3 * 0x18;
      if ((*(byte *)(lVar1 + 0x438) & 1) != 0) {
        *(long *)(lVar2 + 0x428) = *(long *)(lVar2 + 0x428) - *(long *)(lVar1 + 0x448);
        mbedtls_zeroize_and_free(*(undefined8 *)(lVar1 + 0x440));
        *(undefined8 *)((undefined1 (*) [16])(lVar2 + lVar4))[1] = 0;
        *(undefined1 (*) [16])(lVar2 + lVar4) = (undefined1  [16])0x0;
      }
      if (iVar3 == 3) break;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
      lVar2 = *(long *)(param_1 + 0x70);
    }
  }
  return;
}



void mbedtls_ssl_write_version(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_3;
  if (param_2 == 1) {
    uVar1 = ((param_3 == 0x302) - uVar1) + 0x200;
  }
  *param_1 = uVar1 << 8 | uVar1 >> 8;
  return;
}



uint mbedtls_ssl_read_version(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 << 8 | uVar1 >> 8;
  if (param_2 != 1) {
    return (uint)uVar2;
  }
  return ((uint)(uVar1 == 0xfffe) - (uint)uVar2) + 0x200;
}



ulong mbedtls_ssl_handle_pending_alert(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x140) == '\0') {
    return 0;
  }
  uVar1 = mbedtls_ssl_send_alert_message(param_1,2,*(undefined1 *)(param_1 + 0x141));
  if (((int)uVar1 != -0x6880) && (*(undefined1 *)(param_1 + 0x140) = 0, (int)uVar1 == 0)) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x144);
  }
  return uVar1;
}



void mbedtls_ssl_pend_fatal_alert(long param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x140) = 1;
  *(undefined1 *)(param_1 + 0x141) = param_2;
  *(undefined4 *)(param_1 + 0x144) = param_3;
  return;
}


