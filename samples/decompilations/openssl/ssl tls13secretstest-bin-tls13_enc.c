
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



undefined8
derive_secret_key_and_iv
          (long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,long *param_12,undefined8 *param_13,
          ulong *param_14,ulong *param_15)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  iVar1 = EVP_MD_get_size(param_2);
  if (iVar1 < 1) {
    ERR_new();
    uVar5 = 0x16e;
    goto LAB_00100671;
  }
  iVar1 = tls13_hkdf_expand_ex
                    (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],param_2,
                     param_6,param_8,param_9,param_7,(long)iVar1,param_10,(long)iVar1,0);
  if (iVar1 != 0) {
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
          uVar5 = 0x197;
          goto LAB_00100671;
        }
        if ((*(uint *)(lVar3 + 0x24) & 0x30000) == 0) {
          *param_15 = 0x10;
          uVar6 = *param_14;
        }
        else {
          *param_15 = 8;
          uVar6 = *param_14;
        }
      }
      else {
        *param_15 = 0x10;
        iVar1 = EVP_CIPHER_get_iv_length(param_3);
        if (iVar1 < 0) {
          ERR_new();
          uVar5 = 0x1a9;
LAB_00100671:
          ERR_set_debug("ssl/tls13_enc.c",uVar5,"derive_secret_key_and_iv");
          ossl_statem_fatal(param_1,0x50,0x80006,0);
          return 0;
        }
        uVar6 = (ulong)iVar1;
        *param_14 = uVar6;
      }
    }
    else {
      iVar1 = EVP_MD_get_size(param_5);
      if (iVar1 < 1) {
        ERR_new();
        pcVar4 = "derive_secret_key_and_iv";
        uVar5 = 0x180;
        goto LAB_001005e1;
      }
      *param_15 = (long)iVar1;
      *param_14 = (long)iVar1;
      *param_12 = *(long *)(param_1 + 0x388);
      uVar6 = *param_14;
    }
    if (0x10 < uVar6) {
      pvVar2 = CRYPTO_malloc((int)uVar6,"ssl/tls13_enc.c",0x1b1);
      *param_13 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x1b3,"derive_secret_key_and_iv");
        ossl_statem_fatal(param_1,0x50,0xc0100,0);
        return 0;
      }
    }
    iVar1 = tls13_hkdf_expand_ex
                      (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],param_2,
                       param_10,&keylabel_20,3,0,0,param_11,*param_12,0);
    if ((iVar1 != 0) &&
       (iVar1 = tls13_hkdf_expand_ex
                          (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],
                           param_2,param_10,&ivlabel_19,2,0,0,*param_13,*param_14,0), iVar1 != 0)) {
      return 1;
    }
  }
  ERR_new();
  pcVar4 = "tls13_hkdf_expand";
  uVar5 = 0x71;
LAB_001005e1:
  ERR_set_debug("ssl/tls13_enc.c",uVar5,pcVar4);
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
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
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
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
    goto LAB_00100fc0;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1[0x8e] == 0) {
    puVar7 = &local_118;
  }
  else {
    puVar7 = local_f0;
    OSSL_PARAM_construct_utf8_string(&local_158,"properties",puVar1[0x8e],0);
    local_f8 = local_138;
    local_118 = local_158;
    uStack_110 = uStack_150;
    local_108 = local_148;
    uStack_100 = uStack_140;
  }
  OSSL_PARAM_construct_end(&local_158);
  *puVar7 = local_158;
  puVar7[1] = uStack_150;
  puVar7[2] = local_148;
  puVar7[3] = uStack_140;
  puVar7[4] = local_138;
  iVar2 = ssl_handshake_hash(param_1,local_c8,0x40,&local_120);
  if (iVar2 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x30) == param_2) {
      puVar6 = (undefined1 *)(param_1 + 0x6bc);
LAB_00100f6c:
      lVar3 = EVP_Q_mac(*puVar1,&_LC11,puVar1[0x8e],uVar4,&local_118,puVar6,local_120,local_c8,
                        local_120,param_4,0x80,&local_128);
      if (lVar3 != 0) goto LAB_00100fae;
      ERR_new();
      pcVar5 = "tls13_final_finish_mac";
      uVar4 = 0x136;
    }
    else {
      if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
        puVar6 = (undefined1 *)(param_1 + 0x67c);
        goto LAB_00100f6c;
      }
      puVar6 = local_88;
      iVar2 = tls13_hkdf_expand_ex
                        (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],lVar3,
                         param_1 + 0x77c,"finished",8,0,0,puVar6,local_120,0);
      if (iVar2 != 0) goto LAB_00100f6c;
      ERR_new();
      pcVar5 = "tls13_hkdf_expand";
      uVar4 = 0x71;
    }
    ERR_set_debug("ssl/tls13_enc.c",uVar4,pcVar5);
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
  }
LAB_00100fae:
  OPENSSL_cleanse(local_88,0x40);
LAB_00100fc0:
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
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  size_t cnt;
  EVP_MD_CTX *ctx;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  undefined1 *local_1a0;
  undefined1 *local_198;
  EVP_MD *local_190;
  long local_188;
  uchar *local_180;
  char *local_178;
  long local_170;
  uint local_168;
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
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = 0;
  local_154 = 0;
  local_140 = 0;
  local_138 = 0;
  local_128 = 0x10;
  local_150 = local_118;
  if (((~param_2 & 0x12) == 0) || ((~param_2 & 0x21) == 0)) {
    if ((param_2 & 0x40) == 0) {
      local_168 = param_2 & 0x80;
      if ((param_2 & 0x80) == 0) {
        local_188 = param_1 + 0x5fc;
        pcVar10 = "c ap traffic";
        local_170 = 0;
        local_180 = (uchar *)(param_1 + 0x6fc);
        local_178 = "CLIENT_TRAFFIC_SECRET_0";
        goto LAB_001014bb;
      }
      local_188 = param_1 + 0x5bc;
      pcVar10 = "c hs traffic";
      local_170 = param_1 + 0x67c;
      uVar9 = ssl_handshake_md(param_1);
      local_168 = EVP_MD_get_size(uVar9);
      local_180 = (uchar *)(param_1 + 0x73c);
      local_178 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      if (0 < (int)local_168) goto LAB_001014bb;
      ERR_new();
      ERR_set_debug("ssl/tls13_enc.c",0x24d,"tls13_change_cipher_state");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_00101500:
      uVar4 = 0;
      OPENSSL_cleanse(local_108,0x40);
      OPENSSL_cleanse(local_c8,0x40);
      goto LAB_00101526;
    }
    lVar5 = SSL_SESSION_get0_cipher(*(undefined8 *)(param_1 + 0x900));
    cnt = BIO_ctrl(*(BIO **)(param_1 + 0x1a8),3,0,&local_120);
    if (0 < (long)cnt) {
      if (((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1540) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x900) + 0x344) == 0)) {
        if ((*(long *)(param_1 + 0x908) != 0) &&
           (*(int *)(param_1 + 0x1540) == *(int *)(*(long *)(param_1 + 0x908) + 0x344))) {
          lVar5 = SSL_SESSION_get0_cipher();
          goto LAB_001015f4;
        }
        ERR_new();
        uVar9 = 0x208;
LAB_00101ac6:
        ERR_set_debug("ssl/tls13_enc.c",uVar9,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        goto LAB_001016a9;
      }
LAB_001015f4:
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x20e,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0xdb,0);
        goto LAB_001016a9;
      }
      iVar3 = ssl_cipher_get_evp_cipher(uVar9,lVar5,&local_138);
      if ((iVar3 == 0) ||
         ((uVar6 = EVP_CIPHER_get_flags(local_138), (uVar6 & 0x200000) == 0 &&
          (iVar3 = ssl_cipher_get_evp_md_mac(uVar9,lVar5,&local_140,&local_154,0), iVar3 == 0)))) {
        ossl_statem_send_fatal(param_1,0x50);
        goto LAB_001016a9;
      }
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x22a,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0x80006,0);
        goto LAB_001016a9;
      }
      local_190 = (EVP_MD *)ssl_md(uVar9,*(undefined4 *)(lVar5 + 0x40));
      if (((local_190 == (EVP_MD *)0x0) ||
          (iVar3 = EVP_DigestInit_ex(ctx,local_190,(ENGINE *)0x0), iVar3 == 0)) ||
         (iVar3 = EVP_DigestUpdate(ctx,local_120,cnt), iVar3 == 0)) {
LAB_0010166c:
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x232,"tls13_change_cipher_state");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        EVP_MD_CTX_free(ctx);
        goto LAB_001016a9;
      }
      local_180 = local_88;
      iVar3 = EVP_DigestFinal_ex(ctx,local_180,&local_130);
      if (iVar3 == 0) goto LAB_0010166c;
      local_148 = (ulong)local_130;
      local_188 = param_1 + 0x57c;
      EVP_MD_CTX_free(ctx);
      iVar3 = tls13_hkdf_expand_ex
                        (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],
                         local_190,local_188,"e exp master",0xc,local_180,local_148,param_1 + 0x83c,
                         local_148,0);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("ssl/tls13_enc.c",0x71,"tls13_hkdf_expand");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        ERR_new();
        uVar9 = 0x23f;
        goto LAB_00101ac6;
      }
      iVar3 = ssl_log_secret(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x83c,local_148);
      if (iVar3 == 0) goto LAB_001016a9;
      pcVar10 = "c e traffic";
      uVar9 = 0xb;
      local_168 = 0;
      local_178 = "CLIENT_EARLY_TRAFFIC_SECRET";
      bVar2 = true;
      local_170 = 0;
LAB_001012f5:
      uVar6 = local_148;
      if (pcVar10 == "c ap traffic") {
        uVar7 = ssl_handshake_md(param_1);
        iVar3 = tls13_hkdf_expand_ex
                          (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],
                           uVar7,local_188,"res master",10,local_88,uVar6,param_1 + 0x63c,uVar6,0);
        if (iVar3 == 0) {
          ERR_new();
          pcVar10 = "tls13_hkdf_expand";
          uVar9 = 0x71;
          goto LAB_00101906;
        }
      }
      goto LAB_00101305;
    }
    ERR_new();
    ERR_set_debug("ssl/tls13_enc.c",0x1f9,"tls13_change_cipher_state");
    ossl_statem_fatal(param_1,0x50,0x14c,0);
LAB_001016a9:
    uVar4 = 0;
    local_198 = local_118;
LAB_001016c5:
    uVar6 = EVP_CIPHER_get_flags(local_138);
    if ((uVar6 & 0x200000) == 0) {
      ssl_evp_md_free(local_140);
    }
    ssl_evp_cipher_free(local_138);
  }
  else {
    local_168 = param_2 & 0x80;
    if ((param_2 & 0x80) != 0) {
      local_188 = param_1 + 0x5bc;
      pcVar10 = "s hs traffic";
      local_170 = param_1 + 0x6bc;
      uVar9 = ssl_handshake_md();
      local_168 = EVP_MD_get_size(uVar9);
      local_178 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
      if (0 < (int)local_168) goto LAB_001012a7;
      ERR_new();
      pcVar10 = "tls13_change_cipher_state";
      uVar9 = 0x271;
LAB_00101906:
      ERR_set_debug("ssl/tls13_enc.c",uVar9,pcVar10);
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_00101928:
      if ((param_2 & 0x40) == 0) goto LAB_00101500;
      goto LAB_001016a9;
    }
    local_188 = param_1 + 0x5fc;
    pcVar10 = "s ap traffic";
    local_170 = 0;
    local_178 = "SERVER_TRAFFIC_SECRET_0";
LAB_001012a7:
    if ((param_2 & 0x40) == 0) {
      local_180 = local_88;
LAB_001014bb:
      local_190 = (EVP_MD *)ssl_handshake_md(param_1);
      local_138 = *(long *)(param_1 + 0x370);
      local_140 = *(undefined8 *)(param_1 + 0x378);
      local_154 = *(undefined4 *)(param_1 + 0x380);
      iVar3 = ssl3_digest_cached_records(param_1,1);
      if ((iVar3 == 0) || (iVar3 = ssl_handshake_hash(param_1,local_88,0x40,&local_148), iVar3 == 0)
         ) goto LAB_00101500;
    }
    else {
      local_180 = local_88;
      local_190 = (EVP_MD *)0x0;
    }
    if (pcVar10 == "s ap traffic") {
      uVar9 = 0xc;
      memcpy((void *)(param_1 + 0x6fc),local_88,local_148);
      bVar2 = false;
    }
    else {
      bVar2 = false;
      uVar9 = 0xc;
      if (pcVar10 != "s hs traffic") goto LAB_001012f5;
      memcpy((void *)(param_1 + 0x73c),local_88,local_148);
    }
LAB_00101305:
    if (local_138 == 0) goto LAB_00101928;
    iVar3 = derive_secret_key_and_iv
                      (param_1,local_190,local_138,local_154,local_140,local_188,local_180,pcVar10,
                       uVar9,local_c8,local_108,&local_130,&local_150,&local_128,&local_120);
    uVar6 = local_148;
    local_198 = local_150;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else if (pcVar10 == "s ap traffic") {
      memcpy((void *)(param_1 + 0x7bc),local_c8,local_148);
      uVar9 = ssl_handshake_md(param_1);
      iVar3 = tls13_hkdf_expand_ex
                        (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],uVar9,
                         local_188,"exp master",10,local_180,uVar6,param_1 + 0x7fc,uVar6,0);
      if (iVar3 != 0) {
        iVar3 = ssl_log_secret(param_1,"EXPORTER_SECRET",param_1 + 0x7fc,local_148);
        uVar6 = local_148;
        if (iVar3 == 0) {
          uVar4 = 0;
          goto LAB_00101562;
        }
        goto LAB_001013b5;
      }
LAB_00101a30:
      ERR_new();
      uVar4 = 0;
      ERR_set_debug("ssl/tls13_enc.c",0x71,"tls13_hkdf_expand");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
    else {
      if (pcVar10 == "c ap traffic") {
        memcpy((void *)(param_1 + 0x77c),local_c8,local_148);
      }
LAB_001013b5:
      uVar4 = ssl_log_secret(param_1,local_178,local_c8,uVar6);
      if (uVar4 != 0) {
        if (local_170 != 0) {
          uVar9 = ssl_handshake_md(param_1);
          iVar3 = tls13_hkdf_expand_ex
                            (**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8e],
                             uVar9,local_c8,"finished",8,0,0,local_170,(long)(int)local_168,0);
          if (iVar3 == 0) goto LAB_00101a30;
        }
        if ((param_2 & 2) != 0) {
          pcVar1 = *(code **)(*(long *)(param_1 + 0xc78) + 0x68);
          if ((*(int *)(param_1 + 0x78) == 0) && (bVar2)) {
            (*pcVar1)(*(undefined8 *)(param_1 + 0xc88),1);
          }
          else {
            (*pcVar1)(*(undefined8 *)(param_1 + 0xc88),0);
          }
        }
        cVar8 = '\x01';
        if ((param_2 & 0x40) == 0) {
          cVar8 = ((param_2 & 0x80) == 0) + '\x02';
        }
        iVar3 = ssl_set_new_record_layer
                          (param_1,*(undefined4 *)(param_1 + 0x48),~param_2 & 1,cVar8,local_c8,
                           local_148,local_108,CONCAT44(uStack_12c,local_130),local_198,local_128,0,
                           0,local_138,local_120,local_154,local_140,0,local_190);
        uVar4 = (uint)(iVar3 != 0);
      }
    }
LAB_00101562:
    if ((param_2 & 0x40) != 0) goto LAB_001016c5;
  }
  local_1a0 = local_108;
  OPENSSL_cleanse(local_1a0,0x40);
  OPENSSL_cleanse(local_c8,0x40);
  if (local_198 != local_118) {
    CRYPTO_free(local_198);
  }
LAB_00101526:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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
                iVar1 = tls13_hkdf_expand_ex
                                  (**(undefined8 **)(param_1 + 8),
                                   (*(undefined8 **)(param_1 + 8))[0x8e],type,param_1 + 0x7fc,
                                   param_4,param_5,local_88,local_10c,local_108,local_110,1);
                if (iVar1 != 0) {
                  iVar1 = tls13_hkdf_expand_ex
                                    (**(undefined8 **)(param_1 + 8),
                                     (*(undefined8 **)(param_1 + 8))[0x8e],type,local_108,"exporter"
                                     ,8,local_c8,local_110,param_2,param_3,1);
                  bVar2 = iVar1 != 0;
                  goto LAB_00102192;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00102192:
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
                  iVar1 = tls13_hkdf_expand_ex
                                    (**(undefined8 **)(param_1 + 8),
                                     (*(undefined8 **)(param_1 + 8))[0x8e],type,param_1 + 0x83c,
                                     param_4,param_5,local_88,local_10c,local_108,local_110,1);
                  if (iVar1 != 0) {
                    iVar1 = tls13_hkdf_expand_ex
                                      (**(undefined8 **)(param_1 + 8),
                                       (*(undefined8 **)(param_1 + 8))[0x8e],type,local_108,
                                       "exporter",8,local_c8,local_110,param_2,param_3,1);
                    bVar3 = iVar1 != 0;
                    goto LAB_00102392;
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
LAB_00102392:
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


