
bool tls13_hkdf_expand_ex
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,int param_11)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = EVP_KDF_fetch(param_1,"TLS13-KDF",param_2);
  local_15c = 2;
  uVar4 = EVP_MD_get0_name(param_3);
  lVar5 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  if (lVar5 != 0) {
    if (param_6 < 0xfa) {
      iVar2 = EVP_MD_get_size(param_3);
      if (0 < iVar2) {
        OSSL_PARAM_construct_int(&local_198,&_LC2,&local_15c);
        local_158 = local_198;
        uStack_150 = uStack_190;
        local_148 = local_188;
        uStack_140 = uStack_180;
        local_138 = local_178;
        OSSL_PARAM_construct_utf8_string(&local_198,"digest",uVar4,0);
        puVar6 = &local_90;
        local_110 = local_178;
        local_130 = local_198;
        uStack_128 = uStack_190;
        local_120 = local_188;
        uStack_118 = uStack_180;
        OSSL_PARAM_construct_octet_string(&local_198,&_LC4,param_4,(long)iVar2);
        local_108 = local_198;
        uStack_100 = uStack_190;
        local_e8 = local_178;
        local_f8 = local_188;
        uStack_f0 = uStack_180;
        OSSL_PARAM_construct_octet_string(&local_198,"prefix","tls13 ",6);
        local_c0 = local_178;
        local_e0 = local_198;
        uStack_d8 = uStack_190;
        local_d0 = local_188;
        uStack_c8 = uStack_180;
        OSSL_PARAM_construct_octet_string(&local_198,"label",param_5,param_6);
        local_b8 = local_198;
        uStack_b0 = uStack_190;
        local_98 = local_178;
        local_a8 = local_188;
        uStack_a0 = uStack_180;
        if (param_7 != 0) {
          puVar6 = local_68;
          OSSL_PARAM_construct_octet_string(&local_198,&_LC7,param_7,param_8);
          local_70 = local_178;
          local_90 = local_198;
          uStack_88 = uStack_190;
          local_80 = local_188;
          uStack_78 = uStack_180;
        }
        OSSL_PARAM_construct_end(&local_198);
        *puVar6 = local_198;
        puVar6[1] = uStack_190;
        puVar6[2] = local_188;
        puVar6[3] = uStack_180;
        puVar6[4] = local_178;
        iVar2 = EVP_KDF_derive(lVar5,param_9,param_10,&local_158);
        EVP_KDF_CTX_free(lVar5);
        if ((iVar2 < 1) && (param_11 != 0)) {
          ERR_new();
          ERR_set_debug("ssl/tls13_enc.c",0x5e,"tls13_hkdf_expand_ex");
          ERR_set_error(0x14,0xc0103,0);
        }
        bVar1 = 0 < iVar2;
        goto LAB_001000aa;
      }
      EVP_KDF_CTX_free(lVar5);
      if (param_11 != 0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x44,"tls13_hkdf_expand_ex");
        ERR_set_error(0x14,0xc0103,0);
      }
    }
    else {
      if (param_11 != 0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x3b,"tls13_hkdf_expand_ex");
        ERR_set_error(0x14,0x16f,0);
      }
      EVP_KDF_CTX_free(lVar5);
    }
  }
  bVar1 = false;
LAB_001000aa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int tls13_hkdf_expand(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,int param_10)

{
  int iVar1;
  
  iVar1 = tls13_hkdf_expand_ex
                    (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],param_2,
                     param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10 == 0);
  if ((iVar1 == 0) && (param_10 != 0)) {
    ERR_new();
    ERR_set_debug("ssl/tls13_enc.c",0x71,"tls13_hkdf_expand");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    return 0;
  }
  return iVar1;
}



bool derive_secret_key_and_iv
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,long *param_12,undefined8 *param_13,
               ulong *param_14,ulong *param_15)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  iVar1 = EVP_MD_get_size(param_2);
  if (iVar1 < 1) {
    ERR_new();
    uVar4 = 0x16e;
    goto LAB_001006a9;
  }
  iVar1 = tls13_hkdf_expand(param_1,param_2,param_6,param_8,param_9,param_7,(long)iVar1,param_10,
                            (long)iVar1,1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = EVP_CIPHER_is_a(param_3,&_LC8);
  if (((iVar1 == 0) || (param_5 == 0)) || (param_4 != 0x357)) {
    iVar1 = EVP_CIPHER_get_key_length(param_3);
    *param_12 = (long)iVar1;
    iVar1 = EVP_CIPHER_get_mode(param_3);
    if (iVar1 == 7) {
      *param_14 = 0xc;
      lVar3 = *(long *)(param_1 + 0x300);
      if (((lVar3 == 0) && (lVar3 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8), lVar3 == 0)) &&
         ((*(long *)(param_1 + 0x908) == 0 ||
          (lVar3 = *(long *)(*(long *)(param_1 + 0x908) + 0x2f8), lVar3 == 0)))) {
        ERR_new();
        uVar4 = 0x197;
        goto LAB_001006a9;
      }
      if ((*(uint *)(lVar3 + 0x24) & 0x30000) == 0) {
        *param_15 = 0x10;
        uVar5 = *param_14;
      }
      else {
        *param_15 = 8;
        uVar5 = *param_14;
      }
    }
    else {
      *param_15 = 0x10;
      iVar1 = EVP_CIPHER_get_iv_length(param_3);
      if (iVar1 < 0) {
        ERR_new();
        uVar4 = 0x1a9;
LAB_001006a9:
        ERR_set_debug("ssl/tls13_enc.c",uVar4,"derive_secret_key_and_iv");
        ossl_statem_fatal(param_1,0x50,0x80006,0);
        return false;
      }
      uVar5 = (ulong)iVar1;
      *param_14 = uVar5;
    }
  }
  else {
    iVar1 = EVP_MD_get_size(param_5);
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0x180,"derive_secret_key_and_iv");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return false;
    }
    *param_15 = (long)iVar1;
    *param_14 = (long)iVar1;
    *param_12 = *(long *)(param_1 + 0x388);
    uVar5 = *param_14;
  }
  if (0x10 < uVar5) {
    pvVar2 = CRYPTO_malloc((int)uVar5,"ssl/tls13_enc.c",0x1b1);
    *param_13 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0x1b3,"derive_secret_key_and_iv");
      ossl_statem_fatal(param_1,0x50,0xc0100,0);
      return false;
    }
  }
  iVar1 = tls13_hkdf_expand(param_1,param_2,param_10,&keylabel_20,3,0,0,param_11,*param_12,1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = tls13_hkdf_expand(param_1,param_2,param_10,&ivlabel_19,2,0,0,*param_13,*param_14,1);
  return iVar1 != 0;
}



int tls13_derive_key(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  
  iVar1 = tls13_hkdf_expand_ex
                    (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],param_2,
                     param_3,&keylabel_20,3,0,0,param_4,param_5,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/tls13_enc.c",0x71,"tls13_hkdf_expand");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



int tls13_derive_iv(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  
  iVar1 = tls13_hkdf_expand_ex
                    (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],param_2,
                     param_3,&ivlabel_19,2,0,0,param_4,param_5,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/tls13_enc.c",0x71,"tls13_hkdf_expand");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



int tls13_derive_finishedkey
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  
  iVar1 = tls13_hkdf_expand_ex
                    (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],param_2,
                     param_3,"finished",8,0,0,param_4,param_5,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/tls13_enc.c",0x71,"tls13_hkdf_expand");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



bool tls13_generate_secret
               (long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_15c = 1;
  uVar3 = EVP_MD_get0_name(param_2);
  uVar4 = EVP_KDF_fetch(**(undefined8 **)(param_1 + 8),"TLS13-KDF",
                        (*(undefined8 **)(param_1 + 8))[0x8e]);
  lVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("ssl/tls13_enc.c",0xba,"tls13_generate_secret");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    bVar1 = false;
  }
  else {
    iVar2 = EVP_MD_get_size(param_2);
    if (iVar2 < 1) {
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0xc1,"tls13_generate_secret");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      EVP_KDF_CTX_free(lVar5);
      bVar1 = false;
    }
    else {
      puVar6 = &local_108;
      OSSL_PARAM_construct_int(&local_198,&_LC2,&local_15c);
      local_138 = local_178;
      local_158 = local_198;
      uStack_150 = uStack_190;
      local_148 = local_188;
      uStack_140 = uStack_180;
      OSSL_PARAM_construct_utf8_string(&local_198,"digest",uVar3,0);
      local_130 = local_198;
      uStack_128 = uStack_190;
      local_110 = local_178;
      local_120 = local_188;
      uStack_118 = uStack_180;
      if (param_4 != 0) {
        puVar6 = local_e0;
        OSSL_PARAM_construct_octet_string(&local_198,&_LC4,param_4,param_5);
        local_e8 = local_178;
        local_108 = local_198;
        uStack_100 = uStack_190;
        local_f8 = local_188;
        uStack_f0 = uStack_180;
      }
      puVar7 = puVar6;
      if (param_3 != 0) {
        puVar7 = puVar6 + 5;
        OSSL_PARAM_construct_octet_string(&local_198,&_LC9,param_3,(long)iVar2);
        *puVar6 = local_198;
        puVar6[1] = uStack_190;
        puVar6[2] = local_188;
        puVar6[3] = uStack_180;
        puVar6[4] = local_178;
      }
      OSSL_PARAM_construct_octet_string(&local_198,"prefix","tls13 ",6);
      *puVar7 = local_198;
      puVar7[1] = uStack_190;
      puVar7[2] = local_188;
      puVar7[3] = uStack_180;
      puVar7[4] = local_178;
      OSSL_PARAM_construct_octet_string(&local_198,"label","derived",7);
      puVar7[5] = local_198;
      puVar7[6] = uStack_190;
      puVar7[7] = local_188;
      puVar7[8] = uStack_180;
      puVar7[9] = local_178;
      OSSL_PARAM_construct_end(&local_198);
      puVar7[10] = local_198;
      puVar7[0xb] = uStack_190;
      puVar7[0xc] = local_188;
      puVar7[0xd] = uStack_180;
      puVar7[0xe] = local_178;
      iVar2 = EVP_KDF_derive(lVar5,param_6,(long)iVar2,&local_158);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0xdc,"tls13_generate_secret");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      EVP_KDF_CTX_free(lVar5);
      bVar1 = 0 < iVar2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void tls13_generate_handshake_secret(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = ssl_handshake_md();
  tls13_generate_secret(param_1,uVar1,param_1 + 0x57c,param_2,param_3,param_1 + 0x5bc);
  return;
}



undefined8
tls13_generate_master_secret
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ssl_handshake_md();
  iVar1 = EVP_MD_get_size(uVar2);
  if (0 < iVar1) {
    *param_5 = (long)iVar1;
    uVar2 = tls13_generate_secret(param_1,uVar2,param_3,0,0,param_2);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("ssl/tls13_enc.c",0xff,"tls13_generate_master_secret");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



undefined8 tls13_final_finish_mac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0 [5];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = ssl_handshake_md();
  uVar4 = EVP_MD_get0_name(lVar3);
  local_128 = 0;
  if (lVar3 == 0) {
    local_128 = 0;
    goto LAB_00100f60;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1[0x8e] == 0) {
    puVar6 = &local_118;
  }
  else {
    puVar6 = local_f0;
    OSSL_PARAM_construct_utf8_string(&local_158,"properties",puVar1[0x8e],0);
    local_f8 = local_138;
    local_118 = local_158;
    uStack_110 = uStack_150;
    local_108 = local_148;
    uStack_100 = uStack_140;
  }
  OSSL_PARAM_construct_end(&local_158);
  *puVar6 = local_158;
  puVar6[1] = uStack_150;
  puVar6[2] = local_148;
  puVar6[3] = uStack_140;
  puVar6[4] = local_138;
  iVar2 = ssl_handshake_hash(param_1,local_c8,0x40,&local_120);
  if (iVar2 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x30) == param_2) {
      puVar5 = (undefined1 *)(param_1 + 0x6bc);
    }
    else if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
      puVar5 = (undefined1 *)(param_1 + 0x67c);
    }
    else {
      puVar5 = local_88;
      iVar2 = tls13_hkdf_expand(param_1,lVar3,param_1 + 0x77c,"finished",8,0,0,puVar5,local_120,1);
      if (iVar2 == 0) goto LAB_00100f4e;
    }
    lVar3 = EVP_Q_mac(*puVar1,&_LC11,puVar1[0x8e],uVar4,&local_118,puVar5,local_120,local_c8,
                      local_120,param_4,0x80,&local_128);
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0x136,"tls13_final_finish_mac");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
  }
LAB_00100f4e:
  OPENSSL_cleanse(local_88,0x40);
LAB_00100f60:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_128;
}



bool tls13_setup_key_block(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x900);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x2f8) = *(undefined8 *)(param_1 + 0x300);
  iVar3 = ssl_cipher_get_evp(uVar2,lVar1,&local_38,&local_30,&local_3c,&local_28);
  if (iVar3 == 0) {
    ossl_statem_send_fatal(param_1,0x50,0,0);
  }
  else {
    ssl_evp_cipher_free(*(undefined8 *)(param_1 + 0x370));
    *(undefined8 *)(param_1 + 0x370) = local_38;
    ssl_evp_md_free(*(undefined8 *)(param_1 + 0x378));
    *(undefined8 *)(param_1 + 0x378) = local_30;
    *(undefined4 *)(param_1 + 0x380) = local_3c;
    *(undefined8 *)(param_1 + 0x388) = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint tls13_change_cipher_state(long param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  size_t cnt;
  EVP_MD_CTX *ctx;
  ulong uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  undefined1 *local_1a0;
  undefined1 *local_198;
  EVP_MD *local_190;
  long local_188;
  uchar *local_180;
  uint local_174;
  long local_170;
  char *local_168;
  undefined4 local_154;
  undefined1 *local_150;
  ulong local_148;
  undefined8 local_140;
  long local_138;
  uint local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  void *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = 0;
  local_154 = 0;
  local_140 = 0;
  local_138 = 0;
  local_128 = 0x10;
  local_150 = local_118;
  if (((~param_2 & 0x12) == 0) || ((~param_2 & 0x21) == 0)) {
    if ((param_2 & 0x40) == 0) {
      local_174 = param_2 & 0x80;
      if ((param_2 & 0x80) == 0) {
        local_188 = param_1 + 0x5fc;
        pcVar9 = "c ap traffic";
        local_170 = 0;
        local_180 = (uchar *)(param_1 + 0x6fc);
        local_168 = "CLIENT_TRAFFIC_SECRET_0";
        goto LAB_00101443;
      }
      local_188 = param_1 + 0x5bc;
      pcVar9 = "c hs traffic";
      local_170 = param_1 + 0x67c;
      uVar8 = ssl_handshake_md(param_1);
      local_174 = EVP_MD_get_size(uVar8);
      local_180 = (uchar *)(param_1 + 0x73c);
      local_168 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      if (0 < (int)local_174) goto LAB_00101443;
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0x24d,"tls13_change_cipher_state");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_00101488:
      uVar3 = 0;
      OPENSSL_cleanse(local_108,0x40);
      OPENSSL_cleanse(local_c8,0x40);
      goto LAB_001014ae;
    }
    lVar4 = SSL_SESSION_get0_cipher(*(undefined8 *)(param_1 + 0x900));
    cnt = BIO_ctrl(*(BIO **)(param_1 + 0x1a8),3,0,&local_120);
    if (0 < (long)cnt) {
      if (((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1540) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x900) + 0x344) == 0)) {
        if ((*(long *)(param_1 + 0x908) != 0) &&
           (*(int *)(param_1 + 0x1540) == *(int *)(*(long *)(param_1 + 0x908) + 0x344))) {
          lVar4 = SSL_SESSION_get0_cipher();
          goto LAB_0010157c;
        }
        ERR_new();
        uVar8 = 0x208;
LAB_001019bf:
        ERR_set_debug("ssl/tls13_enc.c",uVar8,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        goto LAB_00101634;
      }
LAB_0010157c:
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x20e,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0xdb,0);
        goto LAB_00101634;
      }
      iVar2 = ssl_cipher_get_evp_cipher(uVar8,lVar4,&local_138);
      if ((iVar2 == 0) ||
         ((uVar5 = EVP_CIPHER_get_flags(local_138), (uVar5 & 0x200000) == 0 &&
          (iVar2 = ssl_cipher_get_evp_md_mac(uVar8,lVar4,&local_140,&local_154,0), iVar2 == 0)))) {
        ossl_statem_send_fatal(param_1,0x50);
        goto LAB_00101634;
      }
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x22a,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0x80006,0);
        goto LAB_00101634;
      }
      local_190 = (EVP_MD *)ssl_md(uVar8,*(undefined4 *)(lVar4 + 0x40));
      if (((local_190 == (EVP_MD *)0x0) ||
          (iVar2 = EVP_DigestInit_ex(ctx,local_190,(ENGINE *)0x0), iVar2 == 0)) ||
         (iVar2 = EVP_DigestUpdate(ctx,local_120,cnt), iVar2 == 0)) {
LAB_001015f7:
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x232,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        EVP_MD_CTX_free(ctx);
        goto LAB_00101634;
      }
      local_180 = local_88;
      iVar2 = EVP_DigestFinal_ex(ctx,local_180,&local_130);
      if (iVar2 == 0) goto LAB_001015f7;
      local_148 = (ulong)local_130;
      local_188 = param_1 + 0x57c;
      EVP_MD_CTX_free(ctx);
      iVar2 = tls13_hkdf_expand(param_1,local_190,local_188,"e exp master",0xc,local_180,local_148,
                                param_1 + 0x83c,local_148,1);
      if (iVar2 == 0) {
        ERR_new();
        uVar8 = 0x23f;
        goto LAB_001019bf;
      }
      iVar2 = ssl_log_secret(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x83c,local_148);
      if (iVar2 == 0) goto LAB_00101634;
      uVar8 = 0xb;
      pcVar9 = "c e traffic";
      local_174 = 0;
      local_168 = "CLIENT_EARLY_TRAFFIC_SECRET";
      local_170 = 0;
LAB_00101280:
      uVar5 = local_148;
      if (pcVar9 == "c ap traffic") {
        uVar6 = ssl_handshake_md(param_1);
        iVar2 = tls13_hkdf_expand(param_1,uVar6,local_188,"res master",10,local_88,uVar5,
                                  param_1 + 0x63c,uVar5,1);
        if (iVar2 == 0) goto LAB_001017b0;
      }
      goto LAB_00101290;
    }
    ERR_new();
    ERR_set_debug("ssl/tls13_enc.c",0x1f9,"tls13_change_cipher_state");
    ossl_statem_fatal(param_1,0x50,0x14c,0);
LAB_00101634:
    uVar3 = 0;
    local_198 = local_118;
LAB_00101650:
    uVar5 = EVP_CIPHER_get_flags(local_138);
    if ((uVar5 & 0x200000) == 0) {
      ssl_evp_md_free(local_140);
    }
    ssl_evp_cipher_free(local_138);
  }
  else {
    local_174 = param_2 & 0x80;
    if ((param_2 & 0x80) != 0) {
      local_188 = param_1 + 0x5bc;
      pcVar9 = "s hs traffic";
      local_170 = param_1 + 0x6bc;
      uVar8 = ssl_handshake_md();
      local_174 = EVP_MD_get_size(uVar8);
      local_168 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
      if (0 < (int)local_174) goto LAB_00101237;
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0x271,"tls13_change_cipher_state");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_001017b0:
      if ((param_2 & 0x40) == 0) goto LAB_00101488;
      goto LAB_00101634;
    }
    local_188 = param_1 + 0x5fc;
    pcVar9 = "s ap traffic";
    local_170 = 0;
    local_168 = "SERVER_TRAFFIC_SECRET_0";
LAB_00101237:
    if ((param_2 & 0x40) == 0) {
      local_180 = local_88;
LAB_00101443:
      local_190 = (EVP_MD *)ssl_handshake_md(param_1);
      local_138 = *(long *)(param_1 + 0x370);
      local_140 = *(undefined8 *)(param_1 + 0x378);
      local_154 = *(undefined4 *)(param_1 + 0x380);
      iVar2 = ssl3_digest_cached_records(param_1,1);
      if ((iVar2 == 0) || (iVar2 = ssl_handshake_hash(param_1,local_88,0x40,&local_148), iVar2 == 0)
         ) goto LAB_00101488;
    }
    else {
      local_180 = local_88;
      local_190 = (EVP_MD *)0x0;
    }
    if (pcVar9 == "s ap traffic") {
      uVar8 = 0xc;
      memcpy((void *)(param_1 + 0x6fc),local_88,local_148);
    }
    else {
      uVar8 = 0xc;
      if (pcVar9 != "s hs traffic") goto LAB_00101280;
      memcpy((void *)(param_1 + 0x73c),local_88,local_148);
    }
LAB_00101290:
    if (local_138 == 0) goto LAB_001017b0;
    iVar2 = derive_secret_key_and_iv
                      (param_1,local_190,local_138,local_154,local_140,local_188,local_180,pcVar9,
                       uVar8,local_c8,local_108,&local_130,&local_150,&local_128,&local_120);
    uVar5 = local_148;
    local_198 = local_150;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else if (pcVar9 == "s ap traffic") {
      memcpy((void *)(param_1 + 0x7bc),local_c8,local_148);
      uVar8 = ssl_handshake_md(param_1);
      iVar2 = tls13_hkdf_expand(param_1,uVar8,local_188,"exp master",10,local_180,uVar5,
                                param_1 + 0x7fc,uVar5,1);
      if (iVar2 != 0) {
        iVar2 = ssl_log_secret(param_1,"EXPORTER_SECRET",param_1 + 0x7fc,local_148);
        uVar5 = local_148;
        if (iVar2 == 0) {
          uVar3 = 0;
          goto LAB_001014ea;
        }
        goto LAB_00101340;
      }
LAB_00101966:
      uVar3 = 0;
    }
    else {
      if (pcVar9 == "c ap traffic") {
        memcpy((void *)(param_1 + 0x77c),local_c8,local_148);
      }
LAB_00101340:
      uVar3 = ssl_log_secret(param_1,local_168,local_c8,uVar5);
      if (uVar3 != 0) {
        if (local_170 != 0) {
          uVar8 = ssl_handshake_md(param_1);
          iVar2 = tls13_hkdf_expand(param_1,uVar8,local_c8,"finished",8,0,0,local_170,
                                    (long)(int)local_174,1);
          if (iVar2 == 0) goto LAB_00101966;
        }
        if ((param_2 & 2) != 0) {
          pcVar1 = *(code **)(*(long *)(param_1 + 0xc78) + 0x68);
          if ((*(int *)(param_1 + 0x78) == 0) && (pcVar9 == "c e traffic")) {
            (*pcVar1)(*(undefined8 *)(param_1 + 0xc88),1);
          }
          else {
            (*pcVar1)(*(undefined8 *)(param_1 + 0xc88),0);
          }
        }
        cVar7 = '\x01';
        if ((param_2 & 0x40) == 0) {
          cVar7 = ((param_2 & 0x80) == 0) + '\x02';
        }
        iVar2 = ssl_set_new_record_layer
                          (param_1,*(undefined4 *)(param_1 + 0x48),~param_2 & 1,cVar7,local_c8,
                           local_148,local_108,CONCAT44(uStack_12c,local_130),local_198,local_128,0,
                           0,local_138,local_120,local_154,local_140,0,local_190);
        uVar3 = (uint)(iVar2 != 0);
      }
    }
LAB_001014ea:
    if ((param_2 & 0x40) != 0) goto LAB_00101650;
  }
  local_1a0 = local_108;
  OPENSSL_cleanse(local_1a0,0x40);
  OPENSSL_cleanse(local_c8,0x40);
  if (local_198 != local_118) {
    CRYPTO_free(local_198);
  }
LAB_001014ae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



uint tls13_update_key(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t __n;
  char *pcVar5;
  long in_FS_OFFSET;
  void *local_110;
  undefined1 *local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = ssl_handshake_md();
  local_e0 = local_d8;
  iVar1 = EVP_MD_get_size(uVar4);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("ssl/tls13_enc.c",0x306,"tls13_update_key");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    uVar3 = 0;
  }
  else {
    local_110 = (void *)(param_1 + 0x77c);
    if (*(int *)(param_1 + 0x78) == param_2) {
      local_110 = (void *)(param_1 + 0x7bc);
    }
    iVar2 = derive_secret_key_and_iv
                      (param_1,uVar4,*(undefined8 *)(param_1 + 0x370),
                       *(undefined4 *)(param_1 + 0x380),*(undefined8 *)(param_1 + 0x378),local_110,0
                       ,"traffic upd",0xb,local_88,local_c8,&local_f8,&local_e0,&local_f0,&local_e8)
    ;
    if (iVar2 == 0) {
      local_108 = local_e0;
      uVar3 = 0;
    }
    else {
      __n = (size_t)iVar1;
      memcpy(local_110,local_88,__n);
      local_108 = local_e0;
      uVar3 = ssl_set_new_record_layer
                        (param_1,*(undefined4 *)(param_1 + 0x48),param_2 != 0,3,local_110,__n,
                         local_c8,local_f8,local_e0,local_f0,0,0,*(undefined8 *)(param_1 + 0x370),
                         local_e8,0,0,0,uVar4);
      if (uVar3 != 0) {
        pcVar5 = "CLIENT_TRAFFIC_SECRET_N";
        if (*(int *)(param_1 + 0x78) == param_2) {
          pcVar5 = "SERVER_TRAFFIC_SECRET_N";
        }
        iVar1 = ssl_log_secret(param_1,pcVar5,local_88,__n);
        uVar3 = (uint)(iVar1 != 0);
      }
    }
    OPENSSL_cleanse(local_c8,0x40);
    OPENSSL_cleanse(local_88,0x40);
    if (local_108 != local_d8) {
      CRYPTO_free(local_108);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong tls13_alert_code(uint param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0x6d) && (param_1 != 0x74)) {
    uVar1 = tls1_alert_code();
    return uVar1;
  }
  return (ulong)param_1;
}



bool tls13_export_keying_material
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,void *param_6,size_t param_7,int param_8)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  size_t cnt;
  long in_FS_OFFSET;
  bool bVar2;
  uint local_110;
  uint local_10c;
  undefined1 local_108 [64];
  uchar local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)ssl_handshake_md();
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((ctx != (EVP_MD_CTX *)0x0) && (type != (EVP_MD *)0x0)) {
    iVar1 = ossl_statem_export_allowed(param_1);
    if (iVar1 != 0) {
      cnt = 0;
      if (param_8 != 0) {
        cnt = param_7;
      }
      iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if (0 < iVar1) {
        iVar1 = EVP_DigestUpdate(ctx,param_6,cnt);
        if (0 < iVar1) {
          iVar1 = EVP_DigestFinal_ex(ctx,local_c8,&local_110);
          if (0 < iVar1) {
            iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
            if (0 < iVar1) {
              iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_10c);
              if (0 < iVar1) {
                iVar1 = tls13_hkdf_expand(param_1,type,param_1 + 0x7fc,param_4,param_5,local_88,
                                          local_10c,local_108,local_110,0);
                if (iVar1 != 0) {
                  iVar1 = tls13_hkdf_expand(param_1,type,local_108,"exporter",8,local_c8,local_110,
                                            param_2,param_3,0);
                  bVar2 = iVar1 != 0;
                  goto LAB_00102052;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00102052:
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool tls13_export_keying_material_early
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,void *param_6,size_t param_7)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  long lVar2;
  EVP_MD *type;
  long in_FS_OFFSET;
  bool bVar3;
  uint local_110;
  uint local_10c;
  undefined1 local_108 [64];
  uchar local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    iVar1 = ossl_statem_export_early_allowed(param_1);
    if (iVar1 != 0) {
      if (((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x1540) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x900) + 0x344) == 0)) {
        lVar2 = SSL_SESSION_get0_cipher(*(undefined8 *)(param_1 + 0x908));
      }
      else {
        lVar2 = SSL_SESSION_get0_cipher();
      }
      type = (EVP_MD *)ssl_md(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar2 + 0x40));
      if (type != (EVP_MD *)0x0) {
        iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (0 < iVar1) {
          iVar1 = EVP_DigestUpdate(ctx,param_6,param_7);
          if (0 < iVar1) {
            iVar1 = EVP_DigestFinal_ex(ctx,local_c8,&local_110);
            if (0 < iVar1) {
              iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
              if (0 < iVar1) {
                iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_10c);
                if (0 < iVar1) {
                  iVar1 = tls13_hkdf_expand(param_1,type,param_1 + 0x83c,param_4,param_5,local_88,
                                            local_10c,local_108,local_110,0);
                  if (iVar1 != 0) {
                    iVar1 = tls13_hkdf_expand(param_1,type,local_108,"exporter",8,local_c8,local_110
                                              ,param_2,param_3,0);
                    bVar3 = iVar1 != 0;
                    goto LAB_0010222a;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0010222a:
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


