
long ossl_qrl_enc_level_set_get(long param_1,uint param_2,int param_3)

{
  if (param_2 < 4) {
    param_1 = (ulong)param_2 * 0xd0 + param_1;
    if (param_3 != 0) {
      if (2 < *(byte *)(param_1 + 0x68) - 1) {
        param_1 = 0;
      }
      return param_1;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int ossl_qrl_enc_level_set_have_el(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  iVar1 = 0;
  if (*(char *)(lVar2 + 0x68) != '\0') {
    iVar1 = (-(uint)((byte)(*(char *)(lVar2 + 0x68) - 1U) < 3) & 2) - 1;
  }
  return iVar1;
}



uint ossl_qrl_enc_level_set_has_keyslot(undefined8 param_1,int param_2,byte param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  if ((lVar1 != 0) && (param_4 < 2)) {
    if (param_3 < 3) {
      if (param_3 != 0) {
        return ((uint)param_4 ^ 1) & 1 | (uint)(param_2 == 3);
      }
    }
    else if (param_3 == 3) {
      return (uint)(((uint)*(undefined8 *)(lVar1 + 0x50) & 1) == param_4);
    }
  }
  return 0;
}



void el_teardown_keyslot(undefined8 param_1,ulong param_2,long param_3)

{
  EVP_CIPHER_CTX *a;
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  iVar1 = ossl_qrl_enc_level_set_has_keyslot
                    (param_1,param_2 & 0xffffffff,*(undefined1 *)(lVar2 + 0x68),param_3);
  if (iVar1 != 0) {
    a = *(EVP_CIPHER_CTX **)(lVar2 + (param_3 + 6) * 8);
    if (a != (EVP_CIPHER_CTX *)0x0) {
      EVP_CIPHER_CTX_free(a);
      *(undefined8 *)(lVar2 + (param_3 + 6) * 8) = 0;
    }
    OPENSSL_cleanse((void *)(lVar2 + 0x6a + param_3 * 0x10),0x10);
    return;
  }
  return;
}



undefined8
el_setup_keyslot_constprop_0
          (undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,ulong param_5)

{
  uchar *iv;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar7;
  long in_FS_OFFSET;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  if (lVar5 == 0) {
LAB_001002b8:
    ERR_new();
    ERR_set_debug("ssl/quic/quic_record_shared.c",0x76,"el_setup_keyslot");
    ERR_set_error(0x14,0x80106,0);
  }
  else {
    iVar1 = ossl_qrl_enc_level_set_has_keyslot(param_1,param_2 & 0xffffffff,1,param_3);
    if (iVar1 == 0) goto LAB_001002b8;
    lVar6 = ossl_qrl_get_suite_cipher_name(*(undefined4 *)(lVar5 + 0x60));
    uVar2 = ossl_qrl_get_suite_cipher_iv_len(*(undefined4 *)(lVar5 + 0x60));
    uVar3 = ossl_qrl_get_suite_cipher_key_len(*(undefined4 *)(lVar5 + 0x60));
    if (lVar6 == 0) {
      ERR_new();
      uVar7 = 0x7e;
LAB_00100301:
      ERR_set_debug("ssl/quic/quic_record_shared.c",uVar7,"el_setup_keyslot");
      ERR_set_error(0x14,0xc0103,0);
    }
    else {
      uVar4 = ossl_qrl_get_suite_secret_len(*(undefined4 *)(lVar5 + 0x60));
      if ((uVar4 != param_5) || (0x40 < param_5)) {
        ERR_new();
        uVar7 = 0x84;
        goto LAB_00100301;
      }
      iv = (uchar *)(lVar5 + 0x6a + param_3 * 0x10);
      iVar1 = tls13_hkdf_expand_ex
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x48),
                         *(undefined8 *)(lVar5 + 0x28),param_4,&quic_v1_iv_label,7,0,0,iv,
                         (ulong)uVar2,1);
      if (iVar1 == 0) {
LAB_0010025a:
        ctx = (EVP_CIPHER_CTX *)0x0;
        cipher = (EVP_CIPHER *)0x0;
      }
      else {
        iVar1 = tls13_hkdf_expand_ex
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x48),
                           *(undefined8 *)(lVar5 + 0x28),param_4,&quic_v1_key_label,8,0,0,local_88,
                           (ulong)uVar3,1);
        if (iVar1 == 0) goto LAB_0010025a;
        cipher = (EVP_CIPHER *)
                 EVP_CIPHER_fetch(*(undefined8 *)(lVar5 + 0x40),lVar6,*(undefined8 *)(lVar5 + 0x48))
        ;
        if (cipher == (EVP_CIPHER *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/quic/quic_record_shared.c",0xa0,"el_setup_keyslot");
          ERR_set_error(0x14,0x80006,0);
          goto LAB_0010025a;
        }
        ctx = EVP_CIPHER_CTX_new();
        if (ctx == (EVP_CIPHER_CTX *)0x0) {
          ERR_new();
          uVar7 = 0xa5;
LAB_00100469:
          ERR_set_debug("ssl/quic/quic_record_shared.c",uVar7,"el_setup_keyslot");
          ERR_set_error(0x14,0x80006,0);
        }
        else {
          iVar1 = EVP_CIPHER_get_iv_length(cipher);
          if ((ulong)uVar2 == (long)iVar1) {
            iVar1 = EVP_CIPHER_get_key_length(cipher);
            if ((ulong)uVar3 == (long)iVar1) {
              iVar1 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,local_88,iv,0);
              if (iVar1 != 0) {
                *(EVP_CIPHER_CTX **)(lVar5 + 0x30 + param_3 * 8) = ctx;
                OPENSSL_cleanse(local_88,0x40);
                EVP_CIPHER_free(cipher);
                uVar7 = 1;
                goto LAB_00100292;
              }
              ERR_new();
              uVar7 = 0xb1;
              goto LAB_00100469;
            }
          }
          ERR_new();
          ERR_set_debug("ssl/quic/quic_record_shared.c",0xab,"el_setup_keyslot");
          ERR_set_error(0x14,0xc0103,0);
        }
      }
      EVP_CIPHER_CTX_free(ctx);
      EVP_CIPHER_free(cipher);
      OPENSSL_cleanse(iv,0x10);
      OPENSSL_cleanse(local_88,0x40);
    }
  }
  uVar7 = 0;
LAB_00100292:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_qrl_enc_level_set_key_update(undefined8 param_1,undefined8 param_2)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong __n;
  long in_FS_OFFSET;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  if (((int)param_2 == 3) && (lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x68) == '\x01') {
      if (*(char *)(lVar3 + 0x69) == '\0') {
        *(long *)(lVar3 + 0x50) = *(long *)(lVar3 + 0x50) + 1;
        *(undefined1 *)(lVar3 + 0x68) = 2;
LAB_0010053a:
        uVar4 = 1;
        goto LAB_00100595;
      }
      __dest = (void *)(lVar3 + 0x8a);
      uVar1 = ossl_qrl_get_suite_secret_len(*(undefined4 *)(lVar3 + 0x60));
      __n = (ulong)uVar1;
      iVar2 = tls13_hkdf_expand_ex
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48),
                         *(undefined8 *)(lVar3 + 0x28),__dest,"quic kuquic hp",7,0,0,local_78,__n,1)
      ;
      if (iVar2 != 0) {
        el_teardown_keyslot(param_1,3,0);
        iVar2 = el_setup_keyslot_constprop_0(param_1,3,0,__dest,__n);
        if (iVar2 != 0) {
          *(long *)(lVar3 + 0x50) = *(long *)(lVar3 + 0x50) + 1;
          *(undefined8 *)(lVar3 + 0x58) = 0;
          memcpy(__dest,local_78,__n);
          goto LAB_0010053a;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/quic/quic_record_shared.c",0x166,"ossl_qrl_enc_level_set_key_update");
      ERR_set_error(0x14,0xc0103,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_record_shared.c",0x161,"ossl_qrl_enc_level_set_key_update");
    ERR_set_error(0x14,0x80106,0);
  }
  uVar4 = 0;
LAB_00100595:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_qrl_enc_level_set_key_update_done(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  if (((int)param_2 == 3) && (lVar1 != 0)) {
    el_teardown_keyslot(param_1,3,~(uint)*(undefined8 *)(lVar1 + 0x50) & 1);
    *(undefined1 *)(lVar1 + 0x68) = 3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_record_shared.c",0x197,"ossl_qrl_enc_level_set_key_update_done");
  ERR_set_error(0x14,0x80106,0);
  return 0;
}



undefined8 ossl_qrl_enc_level_set_key_cooldown_done(undefined8 param_1,undefined8 param_2)

{
  void *__dest;
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong __n;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  if (((int)param_2 != 3) || (lVar4 == 0)) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_record_shared.c",0x1ad,"ossl_qrl_enc_level_set_key_cooldown_done");
    ERR_set_error(0x14,0x80106,0);
    uVar5 = 0;
    goto LAB_00100837;
  }
  cVar1 = *(char *)(lVar4 + 0x68);
  if (cVar1 == '\x02') {
    iVar3 = ossl_qrl_enc_level_set_key_update_done(param_1,3);
    if (iVar3 != 0) {
      cVar1 = *(char *)(lVar4 + 0x68);
      goto LAB_0010076d;
    }
    ERR_new();
    uVar5 = 0x1b3;
LAB_00100782:
    ERR_set_debug("ssl/quic/quic_record_shared.c",uVar5,"ossl_qrl_enc_level_set_key_cooldown_done");
    ERR_set_error(0x14,0xc0103,0);
  }
  else {
LAB_0010076d:
    if (cVar1 != '\x03') {
      ERR_new();
      uVar5 = 0x1b8;
      goto LAB_00100782;
    }
    __dest = (void *)(lVar4 + 0x8a);
    uVar2 = ossl_qrl_get_suite_secret_len(*(undefined4 *)(lVar4 + 0x60));
    __n = (ulong)uVar2;
    iVar3 = el_setup_keyslot_constprop_0
                      (param_1,3,~(uint)*(undefined8 *)(lVar4 + 0x50) & 1,__dest,__n);
    if (iVar3 != 0) {
      iVar3 = tls13_hkdf_expand_ex
                        (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48),
                         *(undefined8 *)(lVar4 + 0x28),__dest,"quic kuquic hp",7,0,0,local_78,__n,1)
      ;
      if (iVar3 == 0) {
        el_teardown_keyslot(param_1,3,~(uint)*(undefined8 *)(lVar4 + 0x50) & 1);
        uVar5 = 0;
      }
      else {
        memcpy(__dest,local_78,__n);
        *(undefined1 *)(lVar4 + 0x68) = 1;
        uVar5 = 1;
      }
      goto LAB_00100837;
    }
  }
  uVar5 = 0;
LAB_00100837:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_qrl_enc_level_set_discard(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_qrl_enc_level_set_get(param_1,param_2,0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x68) != '\x04')) {
    iVar1 = ossl_qrl_enc_level_set_have_el(param_1,param_2 & 0xffffffff);
    if (iVar1 == 1) {
      ossl_quic_hdr_protector_cleanup(lVar2);
      el_teardown_keyslot(param_1,param_2 & 0xffffffff,0);
      el_teardown_keyslot(param_1,param_2 & 0xffffffff,1);
    }
    EVP_MD_free(*(undefined8 *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined1 *)(lVar2 + 0x68) = 4;
  }
  return;
}



undefined8
ossl_qrl_enc_level_set_provide_secret
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5,
          long param_6,undefined8 param_7,undefined8 param_8,byte param_9,uint param_10)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  byte local_d1;
  void *local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = ossl_qrl_enc_level_set_get(param_1,param_4,0);
  lVar6 = ossl_qrl_get_suite_md_name(param_5);
  if (((((lVar5 == 0) || (lVar6 == 0)) || (local_d1 = param_9, 1 < param_9)) || (1 < param_10)) ||
     ((param_4 != 3 && ((param_9 & 1) != 0)))) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_record_shared.c",0xd9,"ossl_qrl_enc_level_set_provide_secret");
    ERR_set_error(0x14,0x80106,0);
  }
  else {
    if ((param_4 == 0) && (*(char *)(lVar5 + 0x68) == '\x01')) {
      ossl_qrl_enc_level_set_discard(param_1,0);
      *(undefined1 *)(lVar5 + 0x68) = 0;
LAB_00100a89:
      if (param_10 != 0) {
        local_d1 = 0;
      }
      iVar2 = ossl_qrl_get_suite_hdr_prot_key_len(param_5);
      if (iVar2 != 0) {
        bVar1 = false;
        if (param_6 == 0) {
          param_6 = EVP_MD_fetch(param_2,lVar6,param_3);
          bVar1 = true;
          if (param_6 == 0) {
            ERR_new();
            ERR_set_debug("ssl/quic/quic_record_shared.c",0xf8,
                          "ossl_qrl_enc_level_set_provide_secret");
            ERR_set_error(0x14,0x80006,0);
            goto LAB_00100a40;
          }
        }
        *(long *)(lVar5 + 0x28) = param_6;
        *(undefined4 *)(lVar5 + 0x60) = param_5;
        *(undefined8 *)(lVar5 + 0x48) = param_3;
        *(undefined8 *)(lVar5 + 0x40) = param_2;
        uVar3 = ossl_qrl_get_suite_cipher_tag_len(param_5);
        *(ulong *)(lVar5 + 0x50) = (ulong)param_9;
        *(undefined4 *)(lVar5 + 100) = uVar3;
        *(undefined1 *)(lVar5 + 0x69) = (undefined1)param_10;
        *(undefined8 *)(lVar5 + 0x58) = 0;
        iVar4 = tls13_hkdf_expand_ex
                          (param_2,param_3,param_6,param_7,"quic hp",7,0,0,local_88,iVar2,1);
        if ((iVar4 != 0) &&
           (iVar4 = el_setup_keyslot_constprop_0(param_1,param_4,local_d1,param_7,param_8),
           iVar4 != 0)) {
          if (param_4 == 3) {
            if (param_10 != 0) {
              iVar4 = tls13_hkdf_expand_ex
                                (param_2,param_3,param_6,param_7,"quic kuquic hp",7,0,0,lVar5 + 0x8a
                                 ,param_8,1);
              if (iVar4 == 0) goto LAB_00100d92;
              goto LAB_00100b89;
            }
            iVar4 = tls13_hkdf_expand_ex
                              (param_2,param_3,param_6,param_7,"quic kuquic hp",7,0,0,local_c8,
                               param_8,1);
            if ((iVar4 == 0) ||
               (iVar4 = el_setup_keyslot_constprop_0(param_1,3,local_d1 ^ 1,local_c8,param_8),
               iVar4 == 0)) {
LAB_00100d92:
              local_d0 = (void *)(lVar5 + 0x8a);
              *(undefined4 *)(lVar5 + 0x60) = 0;
              *(undefined8 *)(lVar5 + 0x28) = 0;
              OPENSSL_cleanse(local_88,0x40);
              OPENSSL_cleanse(local_c8,0x40);
              OPENSSL_cleanse(local_d0,0x40);
              el_teardown_keyslot(param_1,3,local_d1);
              goto LAB_00100c25;
            }
            iVar4 = tls13_hkdf_expand_ex
                              (param_2,param_3,param_6,local_c8,"quic kuquic hp",7,0,0,
                               (void *)(lVar5 + 0x8a),param_8,1);
            if (iVar4 == 0) {
LAB_00100ec9:
              *(undefined4 *)(lVar5 + 0x60) = 0;
              *(undefined8 *)(lVar5 + 0x28) = 0;
              OPENSSL_cleanse(local_88,0x40);
              OPENSSL_cleanse(local_c8,0x40);
              OPENSSL_cleanse((void *)(lVar5 + 0x8a),0x40);
              el_teardown_keyslot(param_1,3,local_d1);
              el_teardown_keyslot(param_1,3,local_d1 ^ 1);
              goto LAB_00100c25;
            }
            uVar3 = ossl_qrl_get_suite_hdr_prot_cipher_id(param_5);
            iVar2 = ossl_quic_hdr_protector_init(lVar5,param_2,param_3,uVar3,local_88,iVar2);
            if (iVar2 == 0) goto LAB_00100ec9;
          }
          else {
LAB_00100b89:
            uVar3 = ossl_qrl_get_suite_hdr_prot_cipher_id(param_5);
            iVar2 = ossl_quic_hdr_protector_init(lVar5,param_2,param_3,uVar3,local_88,iVar2);
            if (iVar2 == 0) {
              *(undefined4 *)(lVar5 + 0x60) = 0;
              *(undefined8 *)(lVar5 + 0x28) = 0;
              OPENSSL_cleanse(local_88,0x40);
              OPENSSL_cleanse(local_c8,0x40);
              OPENSSL_cleanse((void *)(lVar5 + 0x8a),0x40);
              el_teardown_keyslot(param_1,param_4,local_d1);
              goto LAB_00100c25;
            }
          }
          OPENSSL_cleanse(local_88,0x40);
          OPENSSL_cleanse(local_c8,0x40);
          *(undefined1 *)(lVar5 + 0x68) = 1;
          uVar7 = 1;
          goto LAB_00100a42;
        }
        *(undefined4 *)(lVar5 + 0x60) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        OPENSSL_cleanse(local_88,0x40);
        OPENSSL_cleanse(local_c8,0x40);
        OPENSSL_cleanse((void *)(lVar5 + 0x8a),0x40);
LAB_00100c25:
        if (bVar1) {
          EVP_MD_free(param_6);
        }
        goto LAB_00100a40;
      }
      ERR_new();
      uVar7 = 0xf1;
    }
    else {
      if (*(char *)(lVar5 + 0x68) == '\0') goto LAB_00100a89;
      ERR_new();
      uVar7 = 0xea;
    }
    ERR_set_debug("ssl/quic/quic_record_shared.c",uVar7,"ossl_qrl_enc_level_set_provide_secret");
    ERR_set_error(0x14,0xc0103,0);
  }
LAB_00100a40:
  uVar7 = 0;
LAB_00100a42:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


