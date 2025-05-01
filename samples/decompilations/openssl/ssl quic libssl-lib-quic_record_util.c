
undefined4
ossl_quic_hkdf_extract
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_190 = 0;
  local_18c = 1;
  lVar2 = EVP_MD_get0_name(param_3);
  if (lVar2 != 0) {
    lVar3 = EVP_KDF_fetch(param_1,&_LC0,param_2);
    if (lVar3 != 0) {
      uVar1 = 0;
      lVar4 = EVP_KDF_CTX_new(lVar3);
      if (lVar4 != 0) {
        OSSL_PARAM_construct_int(&local_1c8,"key-check",&local_190);
        local_188 = local_1c8;
        uStack_180 = uStack_1c0;
        local_178 = local_1b8;
        uStack_170 = uStack_1b0;
        local_168 = local_1a8;
        OSSL_PARAM_construct_int(&local_1c8,&_LC2,&local_18c);
        local_160 = local_1c8;
        uStack_158 = uStack_1c0;
        local_150 = local_1b8;
        uStack_148 = uStack_1b0;
        local_140 = local_1a8;
        OSSL_PARAM_construct_utf8_string(&local_1c8,"digest",lVar2,0);
        local_118 = local_1a8;
        local_138 = local_1c8;
        uStack_130 = uStack_1c0;
        local_128 = local_1b8;
        uStack_120 = uStack_1b0;
        OSSL_PARAM_construct_octet_string(&local_1c8,&_LC4,param_4,param_5);
        local_110 = local_1c8;
        uStack_108 = uStack_1c0;
        local_100 = local_1b8;
        uStack_f8 = uStack_1b0;
        local_f0 = local_1a8;
        OSSL_PARAM_construct_octet_string(&local_1c8,&_LC5,param_6,param_7);
        local_c8 = local_1a8;
        local_e8 = local_1c8;
        uStack_e0 = uStack_1c0;
        local_d8 = local_1b8;
        uStack_d0 = uStack_1b0;
        OSSL_PARAM_construct_end(&local_1c8);
        local_c0 = local_1c8;
        uStack_b8 = uStack_1c0;
        local_a0 = local_1a8;
        local_b0 = local_1b8;
        uStack_a8 = uStack_1b0;
        uVar1 = EVP_KDF_derive(lVar4,param_8,param_9,&local_188);
      }
      goto LAB_00100228;
    }
  }
  lVar4 = 0;
  lVar3 = 0;
  uVar1 = 0;
LAB_00100228:
  EVP_KDF_CTX_free(lVar4);
  EVP_KDF_free(lVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_quic_provide_initial_secret
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,int param_4,long param_5,
          long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 0 && param_5 == 0) {
LAB_0010029e:
    uVar2 = 1;
  }
  else {
    lVar3 = EVP_MD_fetch(param_1,"SHA256",param_2);
    if (lVar3 != 0) {
      if (param_4 == 0) {
        local_d8 = local_88;
        local_d0 = local_68;
      }
      else {
        local_d8 = local_68;
        local_d0 = local_88;
      }
      iVar1 = ossl_quic_hkdf_extract
                        (param_1,param_2,lVar3,quic_v1_initial_salt,0x14,param_3 + 1,*param_3,
                         local_a8,0x20);
      if (iVar1 == 0) goto LAB_00100410;
      if (param_6 == 0) {
        if (param_5 == 0) goto LAB_0010029e;
        if (local_d0 == local_88) {
          pcVar4 = quic_client_in_label;
LAB_00100471:
          iVar1 = tls13_hkdf_expand_ex(param_1,param_2,lVar3,local_a8,pcVar4,9,0,0,local_d0,0x20,1);
          if (iVar1 == 0) goto LAB_00100410;
        }
        else {
LAB_001003a7:
          if (local_d0 == local_68) {
            pcVar4 = "server in";
            goto LAB_00100471;
          }
        }
        iVar1 = ossl_qrx_provide_secret(param_5,0,1,lVar3,local_d0,0x20);
        if (iVar1 != 0) {
          if (param_6 == 0) goto LAB_0010029e;
LAB_001003dc:
          iVar1 = EVP_MD_up_ref(lVar3);
          if (iVar1 != 0) goto LAB_001003ec;
          lVar3 = 0;
        }
      }
      else if (local_d8 == local_88) {
        iVar1 = tls13_hkdf_expand_ex
                          (param_1,param_2,lVar3,local_a8,quic_client_in_label,9,0,0,local_d8,0x20,1
                          );
        if (iVar1 == 0) goto LAB_00100410;
LAB_001003a2:
        if (param_5 != 0) goto LAB_001003a7;
LAB_001003ec:
        iVar1 = ossl_qtx_provide_secret(param_6,0,1,lVar3,local_d8,0x20);
        if (iVar1 != 0) goto LAB_0010029e;
      }
      else {
        if ((param_5 == 0) || (param_4 == 0)) {
          if (local_d8 != local_68) goto LAB_001003a2;
        }
        else {
          iVar1 = tls13_hkdf_expand_ex
                            (param_1,param_2,lVar3,local_a8,quic_client_in_label,9,0,0,local_88,0x20
                             ,1);
          if (iVar1 == 0) goto LAB_00100410;
          if (local_d8 != local_68) goto LAB_001003a7;
        }
        iVar1 = tls13_hkdf_expand_ex
                          (param_1,param_2,lVar3,local_a8,"server in",9,0,0,local_68,0x20,1);
        if (iVar1 != 0) {
          if (param_5 == 0) goto LAB_001003ec;
          iVar1 = ossl_qrx_provide_secret(param_5,0,1,lVar3,local_d0,0x20);
          if (iVar1 == 0) goto LAB_00100410;
          goto LAB_001003dc;
        }
      }
LAB_00100410:
      EVP_MD_free(lVar3);
    }
    uVar2 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



char * ossl_qrl_get_suite_cipher_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "AES-256-GCM";
  if (((param_1 != 2) && (pcVar1 = "ChaCha20-Poly1305", param_1 != 3)) &&
     (pcVar1 = "AES-128-GCM", param_1 != 1)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * ossl_qrl_get_suite_md_name(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "SHA384";
  if ((param_1 != 2) && (pcVar1 = "SHA256", (param_1 & 0xfffffffd) != 1)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



long ossl_qrl_get_suite_secret_len(uint param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  if (param_1 != 2) {
    lVar1 = (ulong)((param_1 & 0xfffffffd) == 1) << 5;
  }
  return lVar1;
}



long ossl_qrl_get_suite_cipher_key_len(int param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (param_1 != 1) {
    lVar1 = (ulong)(param_1 - 2U < 2) << 5;
  }
  return lVar1;
}



byte ossl_qrl_get_suite_cipher_iv_len(int param_1)

{
  return -(param_1 - 1U < 3) & 0xc;
}



long ossl_qrl_get_suite_cipher_tag_len(int param_1)

{
  return (ulong)(param_1 - 1U < 3) << 4;
}



int ossl_qrl_get_suite_hdr_prot_cipher_id(int param_1)

{
  if (((param_1 != 2) && (param_1 != 3)) && (param_1 != 1)) {
    return 0;
  }
  return param_1;
}



long ossl_qrl_get_suite_hdr_prot_key_len(int param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (param_1 != 1) {
    lVar1 = (ulong)(param_1 - 2U < 2) << 5;
  }
  return lVar1;
}



undefined8 ossl_qrl_get_suite_max_pkt(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x800000;
  if (((param_1 != 2) && (uVar1 = 0xfffffffffffffffe, param_1 != 3)) &&
     (uVar1 = 0xffffffffffffffff, param_1 == 1)) {
    uVar1 = 0x800000;
  }
  return uVar1;
}



undefined8 ossl_qrl_get_suite_max_forged_pkt(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10000000000000;
  if (((param_1 != 2) && (uVar1 = 0x1000000000, param_1 != 3)) &&
     (uVar1 = 0xffffffffffffffff, param_1 == 1)) {
    uVar1 = 0x10000000000000;
  }
  return uVar1;
}


