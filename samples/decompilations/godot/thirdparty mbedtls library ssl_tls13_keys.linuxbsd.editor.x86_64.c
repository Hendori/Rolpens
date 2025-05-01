
void ssl_tls13_get_cipher_key_info_constprop_0_isra_0
               (undefined1 param_1,uint param_2,ulong *param_3,undefined8 *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_2e [2];
  undefined1 local_2c [4];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_ssl_cipher_to_psa
                    (param_1,(-((param_2 & 2) == 0) & 8U) + 8,local_2c,local_2e,&local_28);
  if (iVar1 == 0) {
    *param_3 = local_28 + 7U >> 3;
    *param_4 = 0xc;
  }
  else {
    psa_status_to_mbedtls(iVar1,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ssl_tls13_hkdf_expand_label
          (uint param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
          void *param_6,ulong param_7,undefined8 param_8,ulong param_9)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_2f8 [72];
  undefined1 local_b8;
  undefined1 local_b7;
  char local_b6;
  undefined4 local_b5;
  undefined2 local_b1;
  undefined1 local_af [111];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = local_2f8;
  for (lVar5 = 0x47; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if ((param_9 < 0x100 && param_7 < 0x41) && (param_5 < 0x22)) {
    if ((param_1 & 0x7f000000) == 0x2000000) {
      local_b6 = (char)param_5 + '\x06';
      lVar5 = param_5 + 10 + param_7;
      local_b8 = 0;
      local_b5 = tls13_label_prefix;
      local_b1 = DAT_00102e2c;
      local_b7 = (undefined1)param_9;
      pvVar3 = memcpy(local_af,param_4,param_5);
      *(undefined1 *)((long)pvVar3 + param_5) = (char)param_7;
      if (param_7 != 0) {
        memcpy((undefined1 *)((long)pvVar3 + param_5) + 1,param_6,param_7);
      }
      iVar1 = psa_key_derivation_setup(local_2f8,param_1 & 0xff | 0x8000500);
      if ((iVar1 == 0) &&
         (iVar1 = psa_key_derivation_input_bytes(local_2f8,0x101,param_2,param_3), iVar1 == 0)) {
        iVar1 = psa_key_derivation_input_bytes(local_2f8,0x203,&local_b8,lVar5);
        if (iVar1 == 0) {
          iVar1 = psa_key_derivation_output_bytes(local_2f8,param_8,param_9);
          iVar2 = psa_key_derivation_abort(local_2f8);
          if (iVar1 == 0) {
            iVar1 = iVar2;
          }
        }
        else {
          psa_key_derivation_abort(local_2f8);
        }
      }
      else {
        psa_key_derivation_abort(local_2f8);
      }
      mbedtls_platform_zeroize(&local_b8,lVar5);
      uVar4 = psa_status_to_mbedtls(iVar1,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
    }
    else {
      uVar4 = 0xffff8f00;
    }
  }
  else {
    uVar4 = 0xffff9400;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int ssl_tls13_calc_finished_core
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_88 [72];
  long local_40;
  
  uVar5 = (uint)param_1 & 0xff;
  uVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  uVar1 = (uVar5 | 0x2000000) + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar4 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  if (((uint)param_1 & 0x7f000000) == 0x2000000) {
    iVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                      (param_1,param_2,uVar4,mbedtls_ssl_tls13_labels,8,0,0,local_88,uVar4);
    if (iVar2 == 0) {
      uVar5 = uVar5 | 0x3800000;
      local_a8._0_2_ = 0x1100;
      local_a8._8_4_ = 0x400;
      local_a8._12_4_ = uVar5;
      iVar2 = psa_import_key(local_a8,local_88,uVar4,&local_ac);
      if (iVar2 == 0) {
        uVar3 = psa_mac_compute(local_ac,uVar5,param_3,uVar4,param_4,uVar4,param_5);
        iVar2 = psa_status_to_mbedtls(uVar3,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
      }
      else {
        iVar2 = psa_status_to_mbedtls(iVar2,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
      }
      uVar3 = psa_destroy_key(local_ac);
      if (iVar2 == 0) {
        iVar2 = psa_status_to_mbedtls(uVar3,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
      }
    }
    else {
      psa_destroy_key(local_ac);
    }
    mbedtls_platform_zeroize(local_88,0x40);
  }
  else {
    iVar2 = -0x6c00;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ssl_tls13_make_traffic_keys
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = mbedtls_ssl_tls13_hkdf_expand_label
                    (param_1,param_2,param_4,0x102e65,3,0,0,param_7,param_5);
  if (iVar1 == 0) {
    iVar1 = mbedtls_ssl_tls13_hkdf_expand_label
                      (param_1 & 0xffffffff,param_2,param_4,0x102e68,2,0,0,param_7 + 0x40,param_6);
    if (iVar1 == 0) {
      iVar1 = mbedtls_ssl_tls13_hkdf_expand_label
                        (param_1 & 0xffffffff,param_3,param_4,0x102e65,3,0,0,param_7 + 0x20,param_5)
      ;
      if (iVar1 == 0) {
        iVar1 = mbedtls_ssl_tls13_hkdf_expand_label
                          (param_1 & 0xffffffff,param_3,param_4,0x102e68,2,0,0,param_7 + 0x50,
                           param_6);
        if (iVar1 == 0) {
          *(undefined8 *)(param_7 + 0x60) = param_5;
          *(undefined8 *)(param_7 + 0x68) = param_6;
          return;
        }
      }
    }
  }
  return;
}



undefined8
mbedtls_ssl_tls13_derive_secret
          (uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          void *param_6,ulong param_7,int param_8,undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  uVar3 = param_9;
  uVar4 = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == 0) {
    uVar5 = 0;
    uVar1 = (param_1 & 0xff | 0x2000000) + 0xfdfffffd;
    if (uVar1 < 0x11) {
      uVar5 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
    }
    iVar2 = psa_hash_compute(param_1,param_6,param_7,local_88,uVar5,&param_7);
    uVar4 = param_7;
    if (iVar2 != 0) {
      uVar3 = psa_status_to_mbedtls(iVar2,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
      goto LAB_001006c3;
    }
  }
  else {
    if (0x40 < param_7) {
      uVar3 = 0xffff9400;
      goto LAB_001006c3;
    }
    memcpy(local_88,param_6,param_7);
  }
  uVar3 = mbedtls_ssl_tls13_hkdf_expand_label
                    (param_1,param_2,param_3,param_4,param_5,local_88,uVar4,uVar3,param_10);
LAB_001006c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int mbedtls_ssl_tls13_evolve_secret
              (uint param_1,long param_2,undefined1 *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_308 [72];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  puVar5 = local_308;
  for (lVar4 = 0x47; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if ((param_1 & 0x7f000000) == 0x2000000) {
    lVar4 = 0;
    uVar1 = (param_1 & 0xff | 0x2000000) + 0xfdfffffd;
    if (uVar1 < 0x11) {
      lVar4 = *(long *)(CSWTCH_284 + (ulong)uVar1 * 8);
    }
    if ((param_2 == 0) ||
       (iVar2 = mbedtls_ssl_tls13_derive_secret
                          (param_1,param_2,lVar4,0x102ee4,7,0,0,0,local_c8,lVar4), iVar2 == 0)) {
      if ((param_3 == (undefined1 *)0x0) || (param_4 == 0)) {
        param_3 = local_88;
        param_4 = lVar4;
      }
      iVar2 = psa_key_derivation_setup(local_308,param_1 & 0xff | 0x8000400);
      if (((iVar2 == 0) &&
          (iVar2 = psa_key_derivation_input_bytes(local_308,0x202,local_c8,lVar4), iVar2 == 0)) &&
         (iVar2 = psa_key_derivation_input_bytes(local_308,0x101,param_3,param_4), iVar2 == 0)) {
        iVar2 = psa_key_derivation_output_bytes(local_308,param_5,lVar4);
        iVar3 = psa_key_derivation_abort(local_308);
        if (iVar2 == 0) {
          iVar2 = iVar3;
        }
      }
      else {
        psa_key_derivation_abort(local_308);
      }
      iVar2 = psa_status_to_mbedtls(iVar2,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
    }
    else {
      psa_key_derivation_abort(local_308);
    }
    mbedtls_platform_zeroize(local_c8,0x40);
  }
  else {
    iVar2 = -0x7100;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8
mbedtls_ssl_tls13_derive_early_secrets
          (uint param_1,undefined8 param_2,void *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  uVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (param_1 & 0xff | 0x2000000) + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  if (((param_1 & 0x7f000000) == 0x2000000) && (param_4 < 0x41)) {
    memcpy(local_88,param_3,param_4);
    uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                      (param_1,param_2,uVar3,0x102e82,0xb,local_88,param_4,param_5 + 0x40,uVar3);
    if ((int)uVar2 == 0) {
      memcpy(local_88,param_3,param_4);
      uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                        (param_1,param_2,uVar3,0x102eb0,0xc,local_88,param_4,param_5 + 0x80,uVar3);
    }
  }
  else {
    uVar2 = 0xffff9400;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ssl_tls13_derive_handshake_secrets
          (uint param_1,undefined8 param_2,void *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  uVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (param_1 & 0xff | 0x2000000) + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  if (((param_1 & 0x7f000000) == 0x2000000) && (param_4 < 0x41)) {
    memcpy(local_88,param_3,param_4);
    uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                      (param_1,param_2,uVar3,0x102e6a,0xc,local_88,param_4,param_5,uVar3);
    if ((int)uVar2 == 0) {
      memcpy(local_88,param_3,param_4);
      uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                        (param_1,param_2,uVar3,0x102e8d,0xc,local_88,param_4,param_5 + 0x40,uVar3);
    }
  }
  else {
    uVar2 = 0xffff9400;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ssl_tls13_derive_application_secrets
          (uint param_1,undefined8 param_2,void *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  uVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (param_1 & 0xff | 0x2000000) + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  if (((param_1 & 0x7f000000) == 0x2000000) && (param_4 < 0x41)) {
    memcpy(local_88,param_3,param_4);
    uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                      (param_1,param_2,uVar3,0x102e76,0xc,local_88,param_4,param_5,uVar3);
    if ((int)uVar2 == 0) {
      memcpy(local_88,param_3,param_4);
      uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                        (param_1,param_2,uVar3,0x102e99,0xc,local_88,param_4,param_5 + 0x40,uVar3);
      if ((int)uVar2 == 0) {
        memcpy(local_88,param_3,param_4);
        uVar2 = mbedtls_ssl_tls13_hkdf_expand_label
                          (param_1,param_2,uVar3,0x102ec6,10,local_88,param_4,param_5 + 0x80,uVar3);
      }
    }
  }
  else {
    uVar2 = 0xffff9400;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ssl_tls13_derive_resumption_master_secret
          (uint param_1,undefined8 param_2,void *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (param_1 & 0xff | 0x2000000) + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  if (((param_1 & 0x7f000000) == 0x2000000) && (param_4 < 0x41)) {
    pvVar2 = memcpy(auStack_78,param_3,param_4);
    uVar3 = mbedtls_ssl_tls13_hkdf_expand_label
                      (param_1,param_2,uVar3,0x102ebc,10,pvVar2,param_4,param_5 + 0xc0,uVar3);
  }
  else {
    uVar3 = 0xffff9400;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ssl_tls13_calculate_verify_data
              (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  undefined8 extraout_RDX_01;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 uStack_d0;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  uVar7 = 0;
  lVar2 = *(long *)(param_1 + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(byte *)(*(long *)(lVar2 + 0x10) + 0x11);
  uVar8 = uVar6 | 0x2000000;
  uVar1 = uVar8 + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar7 = *(ulong *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x31a,
             "=> mbedtls_ssl_tls13_calculate_verify_data");
  lVar4 = lVar2 + 0x6c8;
  if (param_5 != 0) {
    lVar4 = lVar2 + 0x708;
  }
  if (param_3 < uVar7) {
    iVar3 = -0x6a00;
    uVar5 = extraout_RDX;
  }
  else {
    uStack_d0 = 0x100efb;
    iVar3 = mbedtls_ssl_get_handshake_transcript(param_1,uVar6,local_88,0x40,&local_90);
    if (iVar3 == 0) {
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x330,"handshake hash",
                 local_88,local_90);
      iVar3 = ssl_tls13_calc_finished_core(uVar8,lVar4,local_88,param_2,param_4);
      uVar5 = extraout_RDX_00;
      if (iVar3 == 0) {
        mbedtls_debug_print_buf
                  (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x338,
                   "verify_data for finished message",param_2,uVar7);
        mbedtls_debug_print_msg
                  (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x339,
                   "<= mbedtls_ssl_tls13_calculate_verify_data");
        uVar5 = uStack_d0;
      }
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x32d,
                 "mbedtls_ssl_get_handshake_transcript",iVar3);
      uVar5 = extraout_RDX_01;
    }
  }
  mbedtls_platform_zeroize(lVar4,0x40,uVar5);
  mbedtls_platform_zeroize(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ssl_tls13_create_psk_binder
              (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
              undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  uVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (param_2 & 0xff | 0x2000000) + 0xfdfffffd;
  if (uVar1 < 0x11) {
    uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar1 * 8);
  }
  if ((param_2 & 0x7f000000) == 0x2000000) {
    iVar2 = mbedtls_ssl_tls13_evolve_secret(param_2,0,param_3,param_4,local_88);
    if (iVar2 == 0) {
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x36e,
                 "mbedtls_ssl_tls13_create_psk_binder",local_88,uVar3);
      if (param_5 == 1) {
        iVar2 = mbedtls_ssl_tls13_derive_secret
                          (param_2,local_88,uVar3,0x102eda,10,0,0,0,local_c8,uVar3);
        uVar3 = 0x378;
        pcVar4 = "Derive Early Secret with \'res binder\'";
      }
      else {
        iVar2 = mbedtls_ssl_tls13_derive_secret
                          (param_2,local_88,uVar3,0x102ed0,10,0,0,0,local_c8,uVar3);
        uVar3 = 0x380;
        pcVar4 = "Derive Early Secret with \'ext binder\'";
      }
      mbedtls_debug_print_msg(param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",uVar3,pcVar4);
      if (iVar2 == 0) {
        uVar5 = 0x10116c;
        iVar2 = ssl_tls13_calc_finished_core(param_2,local_c8,param_6,param_7,&local_d0);
        uVar3 = extraout_RDX;
        if (iVar2 == 0) {
          uVar3 = uVar5;
          mbedtls_debug_print_buf
                    (param_1,3,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x393,"psk binder",
                     param_7,local_d0);
        }
      }
      else {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",900,
                   "mbedtls_ssl_tls13_derive_secret",iVar2);
        uVar3 = extraout_RDX_01;
      }
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x36a,
                 "mbedtls_ssl_tls13_evolve_secret",iVar2);
      uVar3 = extraout_RDX_00;
    }
    mbedtls_platform_zeroize(local_88,0x40,uVar3);
    mbedtls_platform_zeroize(local_c8,0x40);
  }
  else {
    iVar2 = -0x6c00;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_ssl_tls13_populate_transform
                (long *param_1,int param_2,uint param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  void *__src;
  char *pcVar7;
  void *__src_00;
  ulong local_50;
  long local_40;
  
  lVar2 = mbedtls_ssl_ciphersuite_from_id(param_3);
  if (lVar2 == 0) {
    pcVar7 = "ciphersuite info for %d not found";
    uVar6 = 0x3bb;
  }
  else {
    lVar3 = mbedtls_cipher_info_from_type(*(undefined1 *)(lVar2 + 0x10));
    if (lVar3 != 0) {
      uVar1 = mbedtls_cipher_setup(param_1 + 0x10,lVar3);
      if (uVar1 == 0) {
        uVar1 = mbedtls_cipher_setup(param_1 + 0x1c,lVar3);
        if (uVar1 == 0) {
          if (param_2 == 1) {
            local_50 = param_4 + 0x20;
            __src = (void *)(param_4 + 0x50);
            __src_00 = (void *)(param_4 + 0x40);
            local_40 = param_4;
          }
          else {
            if (param_2 != 0) {
              return 0xffff9400;
            }
            local_40 = param_4 + 0x20;
            __src = (void *)(param_4 + 0x40);
            __src_00 = (void *)(param_4 + 0x50);
            local_50 = param_4;
          }
          memcpy(param_1 + 5,__src,*(size_t *)(param_4 + 0x68));
          memcpy(param_1 + 7,__src_00,*(size_t *)(param_4 + 0x68));
          uVar1 = mbedtls_cipher_setkey(param_1 + 0x10,local_50,(*(byte *)(lVar3 + 9) & 0xf) << 6,1)
          ;
          if (uVar1 == 0) {
            uVar4 = mbedtls_cipher_setkey
                              (param_1 + 0x1c,local_40,(*(byte *)(lVar3 + 9) & 0xf) << 6,0);
            if ((int)uVar4 == 0) {
              bVar5 = *(byte *)(lVar2 + 0x13);
              lVar2 = *(long *)(param_4 + 0x68);
              param_1[3] = 0;
              *(undefined4 *)((long)param_1 + 0x7c) = 0x304;
              bVar5 = bVar5 & 2;
              param_1[2] = lVar2;
              *param_1 = (ulong)(-(uint)(bVar5 == 0) & 8) + 0x18;
              param_1[1] = lVar2;
              param_1[4] = (ulong)(-(uint)(bVar5 == 0) & 8) + 8;
              return uVar4;
            }
            local_50 = uVar4 & 0xffffffff;
            uVar4 = uVar4 & 0xffffffff;
            uVar6 = 0x3fb;
            pcVar7 = "mbedtls_cipher_setkey";
          }
          else {
            local_50 = (ulong)uVar1;
            uVar4 = (ulong)uVar1;
            uVar6 = 0x3f4;
            pcVar7 = "mbedtls_cipher_setkey";
          }
        }
        else {
          local_50 = (ulong)uVar1;
          uVar4 = (ulong)uVar1;
          uVar6 = 0x3d3;
          pcVar7 = "mbedtls_cipher_setup";
        }
      }
      else {
        local_50 = (ulong)uVar1;
        uVar4 = (ulong)uVar1;
        uVar6 = 0x3cd;
        pcVar7 = "mbedtls_cipher_setup";
      }
      mbedtls_debug_print_ret
                (param_5,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",uVar6,pcVar7,uVar4);
      return local_50;
    }
    param_3 = (uint)*(byte *)(lVar2 + 0x10);
    pcVar7 = "cipher info for %u not found";
    uVar6 = 0x3c3;
  }
  mbedtls_debug_print_msg
            (param_5,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",uVar6,pcVar7,param_3);
  return 0xffff8f00;
}



int mbedtls_ssl_tls13_key_schedule_stage_early(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (*(long *)(lVar1 + 0x10) == 0) {
    mbedtls_debug_print_msg
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x505,
               "cipher suite info not found");
LAB_00101634:
    iVar2 = -0x6c00;
  }
  else {
    uVar5 = *(byte *)(*(long *)(lVar1 + 0x10) + 0x11) | 0x2000000;
    if ((*(byte *)(lVar1 + 0x38) & 5) == 0) {
      uVar3 = 0;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar1 + 0x3f0);
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      if (lVar4 == 0) {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x50e,
                   "mbedtls_ssl_tls13_export_handshake_psk",0xffff9400);
        goto LAB_00101634;
      }
    }
    iVar2 = mbedtls_ssl_tls13_evolve_secret(uVar5,0,lVar4,uVar3,lVar1 + 0x688);
    if (iVar2 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x51c,
                 "mbedtls_ssl_tls13_evolve_secret",iVar2);
      return iVar2;
    }
    uVar5 = uVar5 + 0xfdfffffd;
    uVar3 = 0;
    if (uVar5 < 0x11) {
      uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar5 * 8);
    }
    mbedtls_debug_print_buf
              (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x520,
               "mbedtls_ssl_tls13_key_schedule_stage_early",lVar1 + 0x688,uVar3);
    iVar2 = 0;
  }
  return iVar2;
}



int mbedtls_ssl_tls13_compute_handshake_transform(long *param_1)

{
  long lVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  void *pvVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  ulong *local_140;
  undefined1 *local_138;
  undefined8 local_128;
  ulong local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar4 = param_1[0xe];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  uVar11 = *(byte *)(*(long *)(lVar4 + 0x10) + 0x11) | 0x2000000;
  if ((*(byte *)(lVar4 + 0x38) & 6) == 0) {
    lVar1 = lVar4 + 0x688;
    iVar7 = mbedtls_ssl_tls13_evolve_secret(uVar11,lVar1,0,0,lVar1);
    if (iVar7 != 0) {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x604,
                 "mbedtls_ssl_tls13_evolve_secret",iVar7);
      goto LAB_00101cd9;
    }
    if (uVar11 + 0xfdfffffd < 0x11) {
      pvVar9 = (void *)0x0;
LAB_00101bce:
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x608,"Handshake secret",
                 lVar4 + 0x688,*(undefined8 *)(CSWTCH_284 + (ulong)(uVar11 + 0xfdfffffd) * 8));
      if (pvVar9 != (void *)0x0) {
LAB_00101810:
        mbedtls_zeroize_and_free(pvVar9,local_120);
      }
    }
    else {
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x608,"Handshake secret",
                 lVar1,0);
    }
LAB_0010181d:
    local_140 = &local_120;
    local_138 = local_118;
    lVar1 = param_1[0xe];
    local_120 = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_118._8_8_;
    local_118 = auVar6 << 0x40;
    lVar5 = *(long *)(lVar1 + 0x10);
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x549,
               "=> ssl_tls13_generate_handshake_keys");
    iVar7 = ssl_tls13_get_cipher_key_info_constprop_0_isra_0
                      (*(undefined1 *)(lVar5 + 0x10),*(undefined1 *)(lVar5 + 0x13),local_140,
                       local_138);
    pcVar10 = "ssl_tls13_get_cipher_key_info";
    uVar12 = 0x54d;
    if (iVar7 == 0) {
      uVar13 = 0;
      uVar11 = (uint)*(byte *)(lVar5 + 0x11);
      uVar8 = (uVar11 | 0x2000000) + 0xfdfffffd;
      if (uVar8 < 0x11) {
        uVar13 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar8 * 8);
      }
      iVar7 = mbedtls_ssl_get_handshake_transcript
                        (param_1,*(byte *)(lVar5 + 0x11),local_88,0x40,&local_128,0);
      uVar12 = 0x55b;
      pcVar10 = "mbedtls_ssl_get_handshake_transcript";
      if (iVar7 != 0) goto LAB_00101c27;
      lVar5 = lVar1 + 0x6c8;
      iVar7 = mbedtls_ssl_tls13_derive_handshake_secrets
                        (uVar11 | 0x2000000,lVar1 + 0x688,local_88,local_128,lVar5,0);
      if (iVar7 != 0) {
        pcVar10 = "mbedtls_ssl_tls13_derive_handshake_secrets";
        uVar12 = 0x565;
        goto LAB_00101c27;
      }
      lVar2 = lVar1 + 0x708;
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x56a,
                 "Client handshake traffic secret",lVar5,uVar13);
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x56d,
                 "Server handshake traffic secret",lVar2,uVar13);
      if ((code *)param_1[0x44] != (code *)0x0) {
        uVar14 = 0;
        (*(code *)param_1[0x44])(param_1[0x45],3,lVar5,uVar13,lVar1 + 0x5a8,lVar1 + 0x5c8,0);
        (*(code *)param_1[0x44])
                  (param_1[0x45],4,lVar2,uVar13,lVar1 + 0x5a8,lVar1 + 0x5c8,
                   uVar14 & 0xffffffff00000000);
      }
      iVar7 = mbedtls_ssl_tls13_make_traffic_keys
                        (uVar11 | 0x2000000,lVar5,lVar2,uVar13,local_120,local_118._0_8_,local_f8);
      if (iVar7 != 0) {
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x58e,
                   "mbedtls_ssl_tls13_make_traffic_keys",iVar7);
        goto LAB_00101c3c;
      }
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x592,
                 "client_handshake write_key",local_f8,local_98);
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x596,
                 "server_handshake write_key",local_d8,local_98);
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x59a,
                 "client_handshake write_iv",local_b8,local_90);
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x59e,
                 "server_handshake write_iv",local_a8,local_90);
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x5a2,
                 "<= ssl_tls13_generate_handshake_keys");
      pvVar9 = calloc(1,0x1c8);
      if (pvVar9 == (void *)0x0) {
        iVar7 = -0x7f00;
        mbedtls_platform_zeroize(local_f8,0x70);
      }
      else {
        iVar7 = mbedtls_ssl_tls13_populate_transform
                          (pvVar9,*(undefined1 *)(*param_1 + 8),**(undefined4 **)(lVar4 + 0x10),
                           local_f8,param_1);
        if (iVar7 == 0) {
          *(void **)(lVar4 + 0x680) = pvVar9;
          mbedtls_platform_zeroize(local_f8,0x70);
          goto LAB_00101b36;
        }
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x6c5,
                   "mbedtls_ssl_tls13_populate_transform",iVar7);
        mbedtls_platform_zeroize(local_f8,0x70);
      }
    }
    else {
LAB_00101c27:
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",uVar12,pcVar10,iVar7);
LAB_00101c3c:
      pvVar9 = (void *)0x0;
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x6b3,
                 "ssl_tls13_generate_handshake_keys",iVar7);
      mbedtls_platform_zeroize(local_f8,0x70);
    }
  }
  else {
    sVar3 = *(short *)(lVar4 + 0x550);
    if (((ushort)(sVar3 - 0x17U) < 3) || ((ushort)(sVar3 - 0x1dU) < 2)) {
      uVar12 = 0x9020000;
    }
    else {
      if (4 < (ushort)(sVar3 - 0x100U)) {
        iVar7 = -0x7080;
        mbedtls_debug_print_msg
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x5f6,
                   "Group not supported.");
        goto LAB_00101cd9;
      }
      uVar12 = 0x9010000;
    }
    local_108 = 0;
    local_118 = (undefined1  [16])0x0;
    iVar7 = psa_get_key_attributes(*(undefined4 *)(lVar4 + 0x1c8),local_118);
    if (iVar7 != 0) {
      psa_status_to_mbedtls(iVar7,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
    }
    uVar14 = (ulong)(ushort)local_118._2_2_ + 7 >> 3;
    local_120 = uVar14;
    pvVar9 = calloc(1,uVar14);
    if (pvVar9 == (void *)0x0) {
      iVar7 = -0x7f00;
    }
    else {
      iVar7 = psa_raw_key_agreement
                        (uVar12,*(undefined4 *)(lVar4 + 0x1c8),lVar4 + 0x1cd,
                         *(undefined8 *)(lVar4 + 0x3e0),pvVar9,uVar14);
      if (iVar7 == 0) {
        iVar7 = psa_destroy_key(*(undefined4 *)(lVar4 + 0x1c8));
        if (iVar7 == 0) {
          *(undefined4 *)(lVar4 + 0x1c8) = 0;
          lVar1 = lVar4 + 0x688;
          iVar7 = mbedtls_ssl_tls13_evolve_secret(uVar11,lVar1,pvVar9,local_120,lVar1);
          if (iVar7 == 0) {
            if (uVar11 + 0xfdfffffd < 0x11) goto LAB_00101bce;
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x608,
                       "Handshake secret",lVar1,0);
            goto LAB_00101810;
          }
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x604,
                     "mbedtls_ssl_tls13_evolve_secret",iVar7);
          mbedtls_zeroize_and_free(pvVar9,local_120);
          goto LAB_00101cd9;
        }
        iVar7 = psa_status_to_mbedtls(iVar7,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
        pcVar10 = "psa_destroy_key";
        uVar12 = 0x5ef;
      }
      else {
        iVar7 = psa_status_to_mbedtls(iVar7,&psa_to_ssl_errors,7,&psa_generic_status_to_mbedtls);
        pcVar10 = "psa_raw_key_agreement";
        uVar12 = 0x5e8;
      }
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",uVar12,pcVar10,iVar7);
      mbedtls_zeroize_and_free(pvVar9,local_120);
      if (iVar7 == 0) goto LAB_0010181d;
    }
LAB_00101cd9:
    pvVar9 = (void *)0x0;
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x6ab,
               "mbedtls_ssl_tls13_derive_master_secret",iVar7);
    mbedtls_platform_zeroize(local_f8,0x70);
  }
  free(pvVar9);
LAB_00101b36:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



int mbedtls_ssl_tls13_compute_resumption_master_secret(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar5 = *(long *)(param_1 + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_debug_print_msg
            (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x6db,
             "=> mbedtls_ssl_tls13_compute_resumption_master_secret");
  bVar1 = *(byte *)(*(long *)(lVar5 + 0x10) + 0x11);
  iVar2 = mbedtls_ssl_get_handshake_transcript(param_1,bVar1,local_88,0x40,&local_90);
  if (iVar2 == 0) {
    lVar5 = lVar5 + 0x688;
    uVar4 = bVar1 | 0x2000000;
    iVar2 = mbedtls_ssl_tls13_derive_resumption_master_secret
                      (uVar4,lVar5,local_88,local_90,*(long *)(param_1 + 0x68) + 0xec);
    if (iVar2 == 0) {
      uVar4 = uVar4 + 0xfdfffffd;
      mbedtls_platform_zeroize(lVar5,0x40);
      uVar3 = 0;
      if (uVar4 < 0x11) {
        uVar3 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar4 * 8);
      }
      mbedtls_debug_print_buf
                (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x6f4,
                 "Resumption master secret",*(long *)(param_1 + 0x68) + 0x1ac,uVar3);
      mbedtls_debug_print_msg
                (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x6f9,
                 "<= mbedtls_ssl_tls13_compute_resumption_master_secret");
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ssl_tls13_compute_application_transform(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  void *__ptr;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong uVar9;
  undefined8 local_148;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_1[0xe] + 0x688;
  uVar7 = *(byte *)(*(long *)(param_1[0xe] + 0x10) + 0x11) | 0x2000000;
  iVar5 = mbedtls_ssl_tls13_evolve_secret(uVar7,lVar8,0,0,lVar8);
  if (iVar5 == 0) {
    uVar7 = uVar7 + 0xfdfffffd;
    uVar6 = 0;
    if (uVar7 < 0x11) {
      uVar6 = *(undefined8 *)(CSWTCH_284 + (ulong)uVar7 * 8);
    }
    mbedtls_debug_print_buf
              (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x2b3,"Master secret",lVar8,
               uVar6);
    lVar3 = param_1[0xe];
    lVar8 = param_1[0xd];
    local_108 = 0;
    local_100 = 0;
    mbedtls_debug_print_msg
              (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x63d,
               "=> derive application traffic keys");
    iVar5 = ssl_tls13_get_cipher_key_info_constprop_0_isra_0
                      (*(undefined1 *)(*(long *)(lVar3 + 0x10) + 0x10),
                       *(undefined1 *)(*(long *)(lVar3 + 0x10) + 0x13),&local_108,&local_100);
    if (iVar5 == 0) {
      local_148 = 0;
      bVar2 = *(byte *)(*(long *)(lVar3 + 0x10) + 0x11);
      uVar7 = bVar2 | 0x2000000;
      if (uVar7 + 0xfdfffffd < 0x11) {
        local_148 = *(undefined8 *)(CSWTCH_284 + (ulong)(uVar7 + 0xfdfffffd) * 8);
      }
      iVar5 = mbedtls_ssl_get_handshake_transcript(param_1,bVar2,local_88,0x40,&local_110);
      if (iVar5 == 0) {
        lVar1 = lVar8 + 0xec;
        iVar5 = mbedtls_ssl_tls13_derive_application_secrets
                          (uVar7,lVar3 + 0x688,local_88,local_110,lVar1);
        uVar4 = local_100;
        uVar6 = local_108;
        if (iVar5 == 0) {
          lVar8 = lVar8 + 300;
          iVar5 = mbedtls_ssl_tls13_make_traffic_keys
                            (uVar7,lVar1,lVar8,local_148,local_108,local_100,local_f8);
          if (iVar5 == 0) {
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x66e,
                       "Client application traffic secret",lVar1,local_148);
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x672,
                       "Server application traffic secret",lVar8,local_148);
            if ((code *)param_1[0x44] != (code *)0x0) {
              uVar9 = 0;
              (*(code *)param_1[0x44])
                        (param_1[0x45],5,lVar1,local_148,lVar3 + 0x5a8,lVar3 + 0x5c8,0);
              (*(code *)param_1[0x44])
                        (param_1[0x45],6,lVar8,local_148,lVar3 + 0x5a8,lVar3 + 0x5c8,
                         uVar9 & 0xffffffff00000000);
            }
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x68d,
                       "client application_write_key:",local_f8,uVar6);
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x68f,
                       "server application write key",local_d8,uVar6);
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x691,
                       "client application write IV",local_b8,uVar4);
            mbedtls_debug_print_buf
                      (param_1,4,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x693,
                       "server application write IV",local_a8,uVar4);
            mbedtls_debug_print_msg
                      (param_1,2,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x696,
                       "<= derive application traffic keys");
            mbedtls_platform_zeroize(param_1[0xe] + 0x5a8,0x40);
            mbedtls_platform_zeroize(local_88,0x40);
            __ptr = calloc(1,0x1c8);
            if (__ptr == (void *)0x0) {
              iVar5 = -0x7f00;
              mbedtls_platform_zeroize(local_f8,0x70,0x102270);
            }
            else {
              iVar5 = mbedtls_ssl_tls13_populate_transform
                                (__ptr,*(undefined1 *)(*param_1 + 8),
                                 **(undefined4 **)(param_1[0xe] + 0x10),local_f8,param_1);
              if (iVar5 == 0) {
                param_1[0x13] = (long)__ptr;
                mbedtls_platform_zeroize(local_f8,0x70);
                goto LAB_001021ed;
              }
              mbedtls_debug_print_ret
                        (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x720,
                         "mbedtls_ssl_tls13_populate_transform",iVar5);
              mbedtls_platform_zeroize(local_f8,0x70);
            }
            goto LAB_001021e5;
          }
          mbedtls_debug_print_ret
                    (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x66a,
                     "mbedtls_ssl_tls13_make_traffic_keys",iVar5);
          mbedtls_platform_zeroize(param_1[0xe] + 0x5a8,0x40);
          mbedtls_platform_zeroize(local_88,0x40);
          goto LAB_001021b6;
        }
        mbedtls_debug_print_ret
                  (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x65d,
                   "mbedtls_ssl_tls13_derive_application_secrets",iVar5);
      }
      mbedtls_platform_zeroize(param_1[0xe] + 0x5a8,0x40);
      mbedtls_platform_zeroize(local_88,0x40);
    }
    else {
      mbedtls_debug_print_ret
                (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x644,
                 "ssl_tls13_get_cipher_key_info",iVar5);
      mbedtls_platform_zeroize(param_1[0xe] + 0x5a8,0x40);
      mbedtls_platform_zeroize(local_88,0x40);
    }
LAB_001021b6:
    __ptr = (void *)0x0;
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x70d,
               "ssl_tls13_generate_application_keys",iVar5);
    mbedtls_platform_zeroize(local_f8,0x70);
  }
  else {
    __ptr = (void *)0x0;
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x2af,
               "mbedtls_ssl_tls13_evolve_secret",iVar5);
    mbedtls_debug_print_ret
              (param_1,1,"thirdparty/mbedtls/library/ssl_tls13_keys.c",0x706,
               "ssl_tls13_key_schedule_stage_application",iVar5);
    mbedtls_platform_zeroize(local_f8,0x70);
  }
LAB_001021e5:
  free(__ptr);
LAB_001021ed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint mbedtls_ssl_tls13_export_handshake_psk(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x3f0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x3f8);
  *param_2 = lVar1;
  *param_3 = uVar2;
  return -(uint)(lVar1 == 0) & 0xffff9400;
}


