
undefined8
tls1_PRF_constprop_0
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          int param_14)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ssl_prf_md();
  if (lVar2 == 0) {
    if (param_14 == 0) {
      ERR_new();
      ERR_set_debug("ssl/t1_enc.c",0x2e,__func___1);
      ERR_set_error(0x14,0xc0103,0);
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/t1_enc.c",0x2c,__func___1);
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
  }
  else {
    lVar3 = EVP_KDF_fetch(**(undefined8 **)(param_1 + 8),"TLS1-PRF",
                          (*(undefined8 **)(param_1 + 8))[0x8e]);
    if (lVar3 == 0) {
LAB_00100340:
      lVar4 = 0;
      if (param_14 != 0) goto LAB_001002d1;
LAB_0010034e:
      ERR_new();
      ERR_set_debug("ssl/t1_enc.c",0x54,__func___1);
      ERR_set_error(0x14,0xc0103,0);
    }
    else {
      lVar4 = EVP_KDF_CTX_new(lVar3);
      EVP_KDF_free(lVar3);
      if (lVar4 == 0) goto LAB_00100340;
      uVar5 = EVP_MD_get0_name(lVar2);
      OSSL_PARAM_construct_utf8_string(&local_1b8,"digest",uVar5,0);
      local_168 = local_198;
      local_188 = local_1b8;
      uStack_180 = uStack_1b0;
      local_178 = local_1a8;
      uStack_170 = uStack_1a0;
      OSSL_PARAM_construct_octet_string(&local_1b8,"secret",param_10,param_11);
      local_140 = local_198;
      local_160 = local_1b8;
      uStack_158 = uStack_1b0;
      local_150 = local_1a8;
      uStack_148 = uStack_1a0;
      OSSL_PARAM_construct_octet_string(&local_1b8,&_LC4,param_2,param_3);
      local_138 = local_1b8;
      uStack_130 = uStack_1b0;
      local_128 = local_1a8;
      uStack_120 = uStack_1a0;
      local_118 = local_198;
      OSSL_PARAM_construct_octet_string(&local_1b8,&_LC4,param_4,param_5);
      local_f0 = local_198;
      local_110 = local_1b8;
      uStack_108 = uStack_1b0;
      local_100 = local_1a8;
      uStack_f8 = uStack_1a0;
      OSSL_PARAM_construct_octet_string(&local_1b8,&_LC4,param_6,param_7);
      local_c8 = local_198;
      local_e8 = local_1b8;
      uStack_e0 = uStack_1b0;
      local_d8 = local_1a8;
      uStack_d0 = uStack_1a0;
      OSSL_PARAM_construct_octet_string(&local_1b8,&_LC4,param_8,param_9);
      local_c0 = local_1b8;
      uStack_b8 = uStack_1b0;
      local_a0 = local_198;
      local_b0 = local_1a8;
      uStack_a8 = uStack_1a0;
      OSSL_PARAM_construct_octet_string(&local_1b8,&_LC4,0,0);
      local_78 = local_198;
      local_98 = local_1b8;
      uStack_90 = uStack_1b0;
      local_88 = local_1a8;
      uStack_80 = uStack_1a0;
      OSSL_PARAM_construct_end(&local_1b8);
      local_70 = local_1b8;
      uStack_68 = uStack_1b0;
      local_50 = local_198;
      local_60 = local_1a8;
      uStack_58 = uStack_1a0;
      iVar1 = EVP_KDF_derive(lVar4,param_12,param_13,&local_188);
      if (iVar1 != 0) {
        EVP_KDF_CTX_free(lVar4);
        uVar5 = 1;
        goto LAB_0010030e;
      }
      if (param_14 == 0) goto LAB_0010034e;
LAB_001002d1:
      ERR_new();
      ERR_set_debug("ssl/t1_enc.c",0x52,__func___1);
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
    EVP_KDF_CTX_free(lVar4);
  }
  uVar5 = 0;
LAB_0010030e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool tls1_change_cipher_state(long param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long local_60;
  long local_58;
  
  uVar14 = *(undefined8 *)(param_1 + 0x378);
  uVar3 = *(undefined8 *)(param_1 + 0x370);
  local_60 = *(long *)(param_1 + 0x368);
  lVar4 = *(long *)(param_1 + 0x388);
  uVar1 = *(undefined4 *)(param_1 + 0x380);
  uVar5 = *(undefined8 *)(param_1 + 0x390);
  iVar7 = EVP_CIPHER_get_key_length(uVar3);
  lVar15 = (long)iVar7;
  iVar7 = EVP_CIPHER_get_mode(uVar3);
  if (iVar7 == 6) {
LAB_001004f0:
    lVar10 = 4;
  }
  else {
    iVar7 = EVP_CIPHER_get_mode(uVar3);
    if (iVar7 == 7) goto LAB_001004f0;
    iVar7 = EVP_CIPHER_get_iv_length(uVar3);
    lVar10 = (long)iVar7;
    if (iVar7 < 0) {
      ERR_new();
      uVar14 = 0x94;
      goto LAB_001004b3;
    }
  }
  lVar12 = lVar4 * 2;
  if ((param_2 == 0x12) || (param_2 == 0x21)) {
    local_58 = lVar12 + lVar15 * 2;
    lVar16 = local_60;
    if (*(ulong *)(param_1 + 0x360) < (ulong)(local_58 + lVar10 * 2)) goto LAB_001005a5;
  }
  else {
    lVar12 = lVar12 + lVar15;
    local_58 = lVar12 + lVar15 + lVar10;
    lVar16 = local_60 + lVar4;
    if (*(ulong *)(param_1 + 0x360) < (ulong)(local_58 + lVar10)) {
LAB_001005a5:
      ERR_new();
      uVar14 = 0xab;
LAB_001004b3:
      ERR_set_debug("ssl/t1_enc.c",uVar14,"tls1_change_cipher_state");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return false;
    }
  }
  local_58 = local_60 + local_58;
  local_60 = local_60 + lVar12;
  iVar7 = EVP_CIPHER_get_mode(uVar3);
  if (iVar7 != 6) {
    if (iVar7 == 7) {
      lVar13 = *(long *)(param_1 + 0x300);
      lVar12 = (ulong)(-(uint)((*(uint *)(lVar13 + 0x24) & 0x30000) == 0) & 8) + 8;
      goto LAB_001005cd;
    }
    iVar7 = EVP_CIPHER_is_a(uVar3,"CHACHA20-POLY1305");
    if (iVar7 == 0) {
      lVar12 = *(long *)(param_1 + 0x388);
      lVar13 = *(long *)(param_1 + 0x300);
      goto LAB_001005cd;
    }
  }
  lVar13 = *(long *)(param_1 + 0x300);
  lVar12 = 0x10;
LAB_001005cd:
  uVar6 = *(ulong *)(param_1 + 0x160);
  if ((param_2 & 1) == 0) {
    uVar2 = *(uint *)(lVar13 + 0x40);
    uVar9 = uVar6 & 0xfffffffffffffbff;
    if (*(int *)(param_1 + 0xb14) != 0) {
      uVar9 = uVar6 | 0x400;
    }
    *(ulong *)(param_1 + 0x160) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x578) & 0xfffffffd;
    if ((uVar2 & 0x10000) != 0) {
      uVar8 = *(uint *)(param_1 + 0x578) | 2;
    }
    if ((uVar2 & 0x20000) == 0) {
      uVar8 = uVar8 & 0xfffffff7;
      uVar11 = 1;
    }
    else {
      uVar8 = uVar8 | 8;
      uVar11 = 1;
    }
  }
  else {
    uVar2 = *(uint *)(lVar13 + 0x40);
    uVar9 = uVar6 & 0xfffffffffffffeff;
    if (*(int *)(param_1 + 0xb14) != 0) {
      uVar9 = uVar6 | 0x100;
    }
    *(ulong *)(param_1 + 0x160) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x578) & 0xfffffffe;
    if ((uVar2 & 0x10000) != 0) {
      uVar8 = *(uint *)(param_1 + 0x578) | 1;
    }
    if ((uVar2 & 0x20000) == 0) {
      uVar8 = uVar8 & 0xfffffffb;
      uVar11 = 0;
    }
    else {
      uVar8 = uVar8 | 4;
      uVar11 = 0;
    }
  }
  *(uint *)(param_1 + 0x578) = uVar8;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
    dtls1_increment_epoch(param_1,param_2);
  }
  iVar7 = ssl_set_new_record_layer
                    (param_1,*(undefined4 *)(param_1 + 0x48),uVar11,3,0,0,local_60,lVar15,local_58,
                     lVar10,lVar16,lVar4,uVar3,lVar12,uVar1,uVar14,uVar5,0);
  return iVar7 != 0;
}



bool tls1_setup_key_block(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 *puVar7;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  bVar6 = true;
  local_28 = 0;
  if (*(long *)(param_1 + 0x360) != 0) goto LAB_0010079c;
  uVar3 = (ulong)*(uint *)(param_1 + 0xb14);
  puVar7 = local_30;
  iVar2 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x900),&local_40
                             ,&local_38,&local_44,&local_28);
  if (iVar2 == 0) {
    ossl_statem_send_fatal(param_1,0x50,puVar7,uVar3);
    bVar6 = false;
    goto LAB_0010079c;
  }
  ssl_evp_cipher_free(*(undefined8 *)(param_1 + 0x370));
  *(undefined8 *)(param_1 + 0x370) = local_40;
  ssl_evp_md_free(*(undefined8 *)(param_1 + 0x378));
  uVar1 = local_40;
  *(undefined8 *)(param_1 + 0x378) = local_38;
  *(undefined4 *)(param_1 + 0x380) = local_44;
  *(long *)(param_1 + 0x388) = local_28;
  iVar2 = EVP_CIPHER_get_mode(local_40);
  if (iVar2 == 6) {
LAB_001008b0:
    lVar5 = 4;
  }
  else {
    iVar2 = EVP_CIPHER_get_mode(uVar1);
    if (iVar2 == 7) goto LAB_001008b0;
    iVar2 = EVP_CIPHER_get_iv_length(uVar1);
    lVar5 = (long)iVar2;
    if (iVar2 < 0) {
      ERR_new();
      ERR_set_debug("ssl/t1_enc.c",0x11e,"tls1_setup_key_block");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      bVar6 = false;
      goto LAB_0010079c;
    }
  }
  iVar2 = EVP_CIPHER_get_key_length(local_40);
  lVar5 = lVar5 + local_28;
  ssl3_cleanup_key_block(param_1);
  lVar5 = (lVar5 + iVar2) * 2;
  pvVar4 = CRYPTO_malloc((int)lVar5,"ssl/t1_enc.c",0x126);
  if (pvVar4 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/t1_enc.c",0x127,"tls1_setup_key_block");
    ossl_statem_fatal(param_1,0x50,0x8000f,0);
    bVar6 = false;
  }
  else {
    *(long *)(param_1 + 0x360) = lVar5;
    *(void **)(param_1 + 0x368) = pvVar4;
    iVar2 = tls1_PRF_constprop_0
                      (param_1,"key expansion",0xd,param_1 + 0x168,0x20,param_1 + 0x188,0x20,0,0,
                       *(long *)(param_1 + 0x900) + 0x50,
                       *(undefined8 *)(*(long *)(param_1 + 0x900) + 8),pvVar4,lVar5,1);
    bVar6 = iVar2 != 0;
  }
LAB_0010079c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long tls1_final_finish_mac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  size_t local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = (-(ulong)((*(uint *)(*(long *)(param_1 + 0x300) + 0x1c) & 0x200) == 0) &
          0xffffffffffffffec) + 0x20;
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if (iVar1 != 0) {
    iVar1 = ssl_handshake_hash(param_1,local_88,0x40,&local_90);
    if (iVar1 != 0) {
      iVar1 = tls1_PRF_constprop_0
                        (param_1,param_2,param_3,local_88,local_90,0,0,0,0,
                         *(long *)(param_1 + 0x900) + 0x50,
                         *(undefined8 *)(*(long *)(param_1 + 0x900) + 8),param_4,lVar2,1);
      if (iVar1 != 0) {
        OPENSSL_cleanse(local_88,local_90);
        goto LAB_001009f6;
      }
    }
  }
  lVar2 = 0;
LAB_001009f6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
tls1_generate_master_secret
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  size_t local_d0;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(*(long *)(param_1 + 0x900) + 0x378) & 1) == 0) {
    iVar1 = tls1_PRF_constprop_0
                      (param_1,"master secret",0xd,param_1 + 0x188,0x20,0,0,param_1 + 0x168,0x20,
                       param_3,param_4,param_2,0x30,1);
    if (iVar1 != 0) {
LAB_00100ba8:
      *param_5 = 0x30;
      uVar2 = 1;
      goto LAB_00100bb4;
    }
  }
  else {
    iVar1 = ssl3_digest_cached_records(param_1,1);
    if (iVar1 != 0) {
      iVar1 = ssl_handshake_hash(param_1,local_c8,0x80,&local_d0);
      if (iVar1 != 0) {
        iVar1 = tls1_PRF_constprop_0
                          (param_1,"extended master secret",0x16,local_c8,local_d0,0,0,0,0,param_3,
                           param_4,param_2,0x30,1);
        if (iVar1 != 0) {
          OPENSSL_cleanse(local_c8,local_d0);
          goto LAB_00100ba8;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00100bb4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
tls1_export_keying_material
          (long param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5,
          void *param_6,ulong param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long *__dest;
  long lVar11;
  
  if (0xffff < param_7) {
    ERR_new();
    ERR_set_debug("ssl/t1_enc.c",0x1b5,"tls1_export_keying_material");
    ERR_set_error(0x14,0x80106,0);
    return 0;
  }
  lVar11 = param_5 + 0x40;
  if (param_8 == 0) {
    __dest = (long *)CRYPTO_malloc((int)lVar11,"ssl/t1_enc.c",0x1c3);
    if (__dest != (long *)0x0) {
      memcpy(__dest,param_4,param_5);
      puVar1 = (undefined8 *)((long)__dest + param_5);
      uVar3 = *(undefined8 *)(param_1 + 400);
      uVar4 = *(undefined8 *)(param_1 + 0x198);
      uVar5 = *(undefined8 *)(param_1 + 0x1a0);
      uVar6 = *(undefined8 *)(param_1 + 0x168);
      uVar7 = *(undefined8 *)(param_1 + 0x170);
      uVar8 = *(undefined8 *)(param_1 + 0x178);
      uVar9 = *(undefined8 *)(param_1 + 0x180);
      *puVar1 = *(undefined8 *)(param_1 + 0x188);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = (undefined8 *)((long)__dest + param_5 + 0x20);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
LAB_00100c99:
      lVar2 = *__dest;
joined_r0x00100e12:
      if ((lVar2 != 0x6620746e65696c63) || (*(long *)((long)__dest + 7) != 0x64656873696e6966)) {
        if (*__dest == 0x6620726576726573) {
          if (*(long *)((long)__dest + 7) == 0x64656873696e6966) goto LAB_00100e34;
          lVar2 = *__dest;
        }
        else {
          lVar2 = *__dest;
        }
        if ((((lVar2 != 0x732072657473616d) || (*(long *)((long)__dest + 5) != 0x7465726365732072))
            && ((*__dest != 0x6465646e65747865 || __dest[1] != 0x2072657473616d20 ||
                (*(long *)((long)__dest + 0xe) != 0x7465726365732072)))) &&
           ((*__dest != 0x617078652079656b || (*(long *)((long)__dest + 5) != 0x6e6f69736e617078))))
        {
          uVar10 = tls1_PRF_constprop_0
                             (param_1,__dest,lVar11,0,0,0,0,0,0,*(long *)(param_1 + 0x900) + 0x50,
                              *(undefined8 *)(*(long *)(param_1 + 0x900) + 8),param_2,param_3,0);
          goto LAB_00100e62;
        }
      }
LAB_00100e34:
      ERR_new();
      uVar10 = 0;
      ERR_set_debug("ssl/t1_enc.c",0x1f8,"tls1_export_keying_material");
      ERR_set_error(0x14,0x16f,0);
      goto LAB_00100e62;
    }
  }
  else {
    lVar11 = param_5 + 0x42 + param_7;
    __dest = (long *)CRYPTO_malloc((int)lVar11,"ssl/t1_enc.c",0x1c3);
    if (__dest != (long *)0x0) {
      memcpy(__dest,param_4,param_5);
      puVar1 = (undefined8 *)((long)__dest + param_5);
      uVar3 = *(undefined8 *)(param_1 + 400);
      uVar4 = *(undefined8 *)(param_1 + 0x198);
      uVar5 = *(undefined8 *)(param_1 + 0x1a0);
      uVar6 = *(undefined8 *)(param_1 + 0x168);
      uVar7 = *(undefined8 *)(param_1 + 0x170);
      uVar8 = *(undefined8 *)(param_1 + 0x178);
      uVar9 = *(undefined8 *)(param_1 + 0x180);
      *puVar1 = *(undefined8 *)(param_1 + 0x188);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = (undefined8 *)((long)__dest + param_5 + 0x20);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(char *)((long)__dest + param_5 + 0x40) = (char)(param_7 >> 8);
      *(undefined1 *)((long)__dest + param_5 + 0x41) = (undefined1)param_7;
      if (param_6 == (void *)0x0 && param_7 == 0) goto LAB_00100c99;
      memcpy((void *)((long)__dest + param_5 + 0x42),param_6,param_7);
      lVar2 = *__dest;
      goto joined_r0x00100e12;
    }
  }
  uVar10 = 0;
LAB_00100e62:
  CRYPTO_clear_free(__dest,lVar11,"ssl/t1_enc.c",0x1fa);
  return uVar10;
}



int tls1_alert_code(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 0x79) {
    iVar1 = (int)(char)CSWTCH_29[param_1];
  }
  return iVar1;
}


