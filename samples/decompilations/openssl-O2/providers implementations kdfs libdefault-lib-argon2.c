
void load_block(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x400);
  return;
}



undefined1 * kdf_argon2_settable_ctx_params(void)

{
  return known_settable_ctx_params_5;
}



undefined1 * kdf_argon2_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_14;
}



undefined8 kdf_argon2_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar1 != 0) {
    uVar2 = OSSL_PARAM_set_size_t(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kdf_argon2_reset(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar1 = *(undefined4 *)((long)param_1 + 100);
  uVar2 = param_1[0x10];
  EVP_MD_free(param_1[0x11]);
  EVP_MAC_free(param_1[0x12]);
  CRYPTO_free((void *)param_1[0x13]);
  if (param_1[2] != 0) {
    CRYPTO_clear_free(param_1[2],*(undefined4 *)(param_1 + 3),
                      "providers/implementations/kdfs/argon2.c",0x46e);
  }
  if (param_1[4] != 0) {
    CRYPTO_clear_free(param_1[4],*(undefined4 *)(param_1 + 5),
                      "providers/implementations/kdfs/argon2.c",0x471);
  }
  if (param_1[6] != 0) {
    CRYPTO_clear_free(param_1[6],*(undefined4 *)(param_1 + 7),
                      "providers/implementations/kdfs/argon2.c",0x474);
  }
  if (param_1[8] != 0) {
    CRYPTO_clear_free(param_1[8],*(undefined4 *)(param_1 + 9),
                      "providers/implementations/kdfs/argon2.c",0x477);
  }
  *param_1 = 0;
  uVar4 = __LC22;
  uVar3 = __LC2;
  param_1[0x13] = 0;
  puVar6 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xa0U >> 3)
      ; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  param_1[0x10] = uVar2;
  *(undefined4 *)(param_1 + 1) = 0x40;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x13;
  *(undefined4 *)((long)param_1 + 100) = uVar1;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x54) = uVar4;
  return;
}



void kdf_argon2_free(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[2] != 0) {
      CRYPTO_clear_free(param_1[2],*(undefined4 *)(param_1 + 3),
                        "providers/implementations/kdfs/argon2.c",0x3e1);
    }
    if (param_1[4] != 0) {
      CRYPTO_clear_free(param_1[4],*(undefined4 *)(param_1 + 5),
                        "providers/implementations/kdfs/argon2.c",0x3e4);
    }
    if (param_1[6] != 0) {
      CRYPTO_clear_free(param_1[6],*(undefined4 *)(param_1 + 7),
                        "providers/implementations/kdfs/argon2.c",999);
    }
    if (param_1[8] != 0) {
      CRYPTO_clear_free(param_1[8],*(undefined4 *)(param_1 + 9),
                        "providers/implementations/kdfs/argon2.c",0x3ea);
    }
    EVP_MD_free(param_1[0x11]);
    EVP_MAC_free(param_1[0x12]);
    CRYPTO_free((void *)param_1[0x13]);
    *param_1 = 0;
    param_1[0x13] = 0;
    puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar1 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xa0U >>
                        3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 kdf_argon2_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_28;
  int iStack_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_001005b0:
    uVar4 = 1;
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 == 0) {
LAB_00100340:
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC5);
      if (lVar2 == 0) {
LAB_001003c5:
        lVar2 = OSSL_PARAM_locate_const(param_2,"secret");
        if (lVar2 == 0) {
LAB_00100440:
          lVar2 = OSSL_PARAM_locate_const(param_2,&_LC8);
          if (lVar2 == 0) {
LAB_001004b7:
            lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              if (local_28 < 4) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x4c7,
                              "kdf_argon2_ctx_set_out_length");
                ERR_set_error(0x39,0xd9,"min: %u",4);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 8) = local_28;
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,&_LC9);
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              if (local_28 == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x4a7,
                              "kdf_argon2_ctx_set_t_cost");
                ERR_set_error(0x39,0x7b,"min: %u",1);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 0x4c) = local_28;
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,"threads");
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              if (local_28 == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x481,
                              "kdf_argon2_ctx_set_threads");
                ERR_set_error(0x39,0xea,"min threads: %u",1);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              if (0xffffff < local_28) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x487,
                              "kdf_argon2_ctx_set_threads");
                ERR_set_error(0x39,0xea,"max threads: %u",0xffffff);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 0x58) = local_28;
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,"lanes");
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              if (0xffffff < local_28) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x493,
                              "kdf_argon2_ctx_set_lanes");
                ERR_set_error(0x39,0x68,"max lanes: %u",0xffffff);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              if (local_28 == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x499,
                              "kdf_argon2_ctx_set_lanes");
                ERR_set_error(0x39,0x68,"min lanes: %u",1);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 0x54) = local_28;
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,"memcost");
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              if (local_28 < 8) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x4b5,
                              "kdf_argon2_ctx_set_m_cost");
                ERR_set_error(0x39,0xeb,"min: %u",8);
                uVar4 = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 0x50) = local_28;
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,"early_clean");
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              *(uint *)(param_1 + 0x60) = (uint)(local_28 != 0);
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,"version");
            if (lVar2 != 0) {
              iVar1 = OSSL_PARAM_get_uint32(lVar2,&local_28);
              if (iVar1 == 0) goto LAB_00100514;
              if ((local_28 != 0x10) && (local_28 != 0x13)) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/argon2.c",0x559,
                              "kdf_argon2_ctx_set_version");
                ERR_set_error(0x39,0x7d,"invalid Argon2 version");
                uVar4 = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 0x5c) = local_28;
            }
            lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
            if (lVar2 == 0) goto LAB_001005b0;
            if (*(int *)(lVar2 + 8) == 4) {
              pcVar3 = *(char **)(lVar2 + 0x10);
              CRYPTO_free(*(void **)(param_1 + 0x98));
              *(undefined8 *)(param_1 + 0x98) = 0;
              if (pcVar3 != (char *)0x0) {
                pcVar3 = CRYPTO_strdup(pcVar3,"providers/implementations/kdfs/argon2.c",0x564);
                *(char **)(param_1 + 0x98) = pcVar3;
                if (pcVar3 == (char *)0x0) goto LAB_00100514;
              }
              EVP_MD_free(*(undefined8 *)(param_1 + 0x88));
              *(undefined8 *)(param_1 + 0x88) = 0;
              EVP_MAC_free(*(undefined8 *)(param_1 + 0x90));
              *(undefined8 *)(param_1 + 0x90) = 0;
              goto LAB_001005b0;
            }
          }
          else if (*(long *)(lVar2 + 0x10) != 0) {
            if (*(long *)(param_1 + 0x40) != 0) {
              CRYPTO_clear_free(*(long *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),
                                "providers/implementations/kdfs/argon2.c",0x539);
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x40,0,&local_28);
            if (iVar1 != 0) {
              if (iStack_24 != 0) {
                CRYPTO_free(*(void **)(param_1 + 0x40));
                *(undefined8 *)(param_1 + 0x40) = 0;
                uVar4 = 0;
                *(undefined4 *)(param_1 + 0x48) = 0;
                goto LAB_001005b5;
              }
              *(uint *)(param_1 + 0x48) = local_28;
              goto LAB_001004b7;
            }
          }
        }
        else if (*(long *)(lVar2 + 0x10) != 0) {
          if (*(long *)(param_1 + 0x30) != 0) {
            CRYPTO_clear_free(*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                              "providers/implementations/kdfs/argon2.c",0x4d8);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
          }
          iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x30,0,&local_28);
          if (iVar1 != 0) {
            if (iStack_24 != 0) {
              CRYPTO_free(*(void **)(param_1 + 0x30));
              *(undefined8 *)(param_1 + 0x30) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x38) = 0;
              goto LAB_001005b5;
            }
            *(uint *)(param_1 + 0x38) = local_28;
            goto LAB_00100440;
          }
        }
      }
      else if (*(long *)(lVar2 + 0x10) != 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          CRYPTO_clear_free(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                            "providers/implementations/kdfs/argon2.c",0x513);
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x20,0,&local_28);
        if (iVar1 != 0) {
          if (CONCAT44(iStack_24,local_28) < 8) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c",0x51c,"kdf_argon2_ctx_set_salt")
            ;
            ERR_set_error(0x39,0x70,"min: %u",8);
          }
          else {
            if (iStack_24 == 0) {
              *(uint *)(param_1 + 0x28) = local_28;
              goto LAB_001003c5;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c",0x522,"kdf_argon2_ctx_set_salt")
            ;
            ERR_set_error(0x39,0x70,"max: %u",0xffffffff);
          }
          CRYPTO_free(*(void **)(param_1 + 0x20));
          *(undefined8 *)(param_1 + 0x20) = 0;
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
          goto LAB_001005b5;
        }
      }
    }
    else if (*(long *)(lVar2 + 0x10) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        CRYPTO_clear_free(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                          "providers/implementations/kdfs/argon2.c",0x4f3);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x10,0,&local_28);
      if (iVar1 != 0) {
        if (iStack_24 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/argon2.c",0x4fc,"kdf_argon2_ctx_set_pwd");
          ERR_set_error(0x39,0x70,"max: %u",0xffffffff);
          CRYPTO_free(*(void **)(param_1 + 0x10));
          *(undefined8 *)(param_1 + 0x10) = 0;
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          goto LAB_001005b5;
        }
        *(uint *)(param_1 + 0x18) = local_28;
        goto LAB_00100340;
      }
    }
LAB_00100514:
    uVar4 = 0;
  }
LAB_001005b5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool blake2b_mac_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c0 [2];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0[0] = param_3;
  lVar2 = EVP_MAC_CTX_new();
  if (lVar2 != 0) {
    OSSL_PARAM_construct_octet_string(&local_f8,&_LC21,0,0);
    local_a8 = local_f8;
    uStack_a0 = uStack_f0;
    local_88 = local_d8;
    local_98 = local_e8;
    uStack_90 = uStack_e0;
    OSSL_PARAM_construct_size_t(&local_f8,&_LC0,local_c0);
    local_60 = local_d8;
    local_80 = local_f8;
    uStack_78 = uStack_f0;
    local_70 = local_e8;
    uStack_68 = uStack_e0;
    OSSL_PARAM_construct_end(&local_f8);
    local_58 = local_f8;
    uStack_50 = uStack_f0;
    local_38 = local_d8;
    local_48 = local_e8;
    uStack_40 = uStack_e0;
    iVar1 = EVP_MAC_CTX_set_params(lVar2,&local_a8);
    if (iVar1 == 1) {
      iVar1 = EVP_MAC_init(lVar2,0,0,0);
      if (iVar1 == 1) {
        iVar1 = EVP_MAC_update(lVar2,param_4,0x40);
        if (iVar1 == 1) {
          iVar1 = EVP_MAC_final(lVar2,param_2,local_b0,local_c0[0]);
          bVar3 = iVar1 == 1;
          goto LAB_00100b7e;
        }
      }
    }
  }
  bVar3 = false;
LAB_00100b7e:
  EVP_MAC_CTX_free(lVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool blake2b_md_constprop_0(undefined8 param_1,uchar *param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  bVar2 = false;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = param_3;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) goto LAB_00100cc4;
  OSSL_PARAM_construct_size_t(&local_c8,&_LC0,&local_90);
  local_68 = local_a8;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  OSSL_PARAM_construct_end(&local_c8);
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  local_40 = local_a8;
  local_50 = local_b8;
  uStack_48 = uStack_b0;
  iVar1 = EVP_DigestInit_ex2(ctx,param_1,&local_88);
  if (iVar1 == 1) {
    iVar1 = EVP_DigestUpdate(ctx,param_4,0x40);
    if (iVar1 != 1) goto LAB_00100cb9;
    iVar1 = EVP_DigestFinal_ex(ctx,param_2,(uint *)0x0);
    bVar2 = iVar1 == 1;
  }
  else {
LAB_00100cb9:
    bVar2 = false;
  }
  EVP_MD_CTX_free(ctx);
LAB_00100cc4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void blake2b_long_isra_0(undefined8 param_1,undefined8 param_2,uchar *param_3,ulong param_4,
                        void *param_5,size_t param_6)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  ulong uVar2;
  uint uVar3;
  uchar *md;
  uchar *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_88 [72];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != (uchar *)0x0) && (param_4 != 0)) {
    uVar3 = (uint)param_4;
    local_cc = uVar3;
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx != (EVP_MD_CTX *)0x0) {
      local_130 = 0x40;
      if (param_4 < 0x41) {
        local_130 = param_4;
      }
      OSSL_PARAM_construct_size_t(&local_168,&_LC0,&local_130);
      local_108 = local_148;
      local_128 = local_168;
      uStack_120 = uStack_160;
      local_118 = local_158;
      uStack_110 = uStack_150;
      OSSL_PARAM_construct_end(&local_168);
      local_e0 = local_148;
      local_100 = local_168;
      uStack_f8 = uStack_160;
      local_f0 = local_158;
      uStack_e8 = uStack_150;
      iVar1 = EVP_DigestInit_ex2(ctx,param_1,&local_128);
      if (((iVar1 == 1) && (iVar1 = EVP_DigestUpdate(ctx,&local_cc,4), iVar1 == 1)) &&
         (iVar1 = EVP_DigestUpdate(ctx,param_5,param_6), iVar1 == 1)) {
        if (param_4 < 0x41) {
          EVP_DigestFinal_ex(ctx,param_3,(uint *)0x0);
        }
        else {
          md = (uchar *)&local_c8;
          iVar1 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0);
          if (iVar1 == 1) {
            *(undefined8 *)param_3 = local_c8;
            *(undefined8 *)(param_3 + 8) = uStack_c0;
            *(undefined8 *)(param_3 + 0x10) = local_b8;
            *(undefined8 *)(param_3 + 0x18) = uStack_b0;
            puVar4 = param_3 + 0x20;
            while( true ) {
              uVar3 = uVar3 - 0x20;
              uVar2 = (ulong)uVar3;
              if (uVar3 < 0x41) break;
              iVar1 = blake2b_md_constprop_0(param_1,md,0x40,local_88);
              if (iVar1 != 1) goto LAB_00100e1e;
              *(undefined8 *)puVar4 = local_c8;
              *(undefined8 *)(puVar4 + 8) = uStack_c0;
              *(undefined8 *)(puVar4 + 0x10) = local_b8;
              *(undefined8 *)(puVar4 + 0x18) = uStack_b0;
              puVar4 = puVar4 + 0x20;
            }
            iVar1 = blake2b_md_constprop_0(param_1,md,uVar2,local_88);
            if (iVar1 == 1) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *md;
                md = md + (ulong)bVar5 * -2 + 1;
                puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
              }
            }
          }
        }
      }
LAB_00100e1e:
      EVP_MD_CTX_free(ctx);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void fill_first_blocks(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 extraout_RDX;
  uint uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  uVar1 = _LC22;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_2 + 0x54) != 0) {
    uVar3 = 0;
    do {
      *(uint *)(param_1 + 0x44) = uVar3;
      *(undefined4 *)(param_1 + 0x40) = 0;
      blake2b_long_isra_0(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x90),
                          auStack_438,0x400,param_1,0x48);
      load_block((ulong)(uVar3 * *(int *)(param_2 + 0x7c)) * 0x400 + *(long *)(param_2 + 0x68),
                 auStack_438,extraout_RDX,0x400,param_1,0x48);
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      blake2b_long_isra_0(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x90),
                          auStack_438);
      iVar2 = *(int *)(param_2 + 0x7c) * uVar3;
      uVar3 = uVar3 + 1;
      load_block((ulong)(iVar2 + 1) * 0x400 + *(long *)(param_2 + 0x68),auStack_438);
    } while (uVar3 < *(uint *)(param_2 + 0x54));
  }
  OPENSSL_cleanse(auStack_438,0x400);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void finalize(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  ushort uVar27;
  short sVar28;
  ushort uVar29;
  short sVar30;
  ushort uVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  ushort uVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  ushort uVar68;
  short sVar69;
  ushort uVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  ushort uVar74;
  short sVar75;
  ushort uVar76;
  short sVar77;
  ushort uVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  ushort uVar82;
  short sVar83;
  ushort uVar84;
  short sVar85;
  ushort uVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  ushort uVar90;
  short sVar91;
  ushort uVar92;
  short sVar93;
  ushort uVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  ushort uVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  short sVar115;
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  short sVar128;
  short sVar129;
  short sVar130;
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [15];
  ulong uVar151;
  ulong uVar152;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [12];
  undefined1 auVar167 [12];
  undefined1 auVar168 [12];
  undefined1 auVar169 [12];
  undefined1 auVar170 [12];
  undefined1 auVar171 [12];
  undefined1 auVar172 [12];
  undefined1 auVar173 [12];
  undefined1 auVar174 [12];
  undefined1 auVar175 [12];
  undefined1 auVar176 [12];
  undefined1 auVar177 [12];
  ulong *puVar178;
  ulong *puVar179;
  undefined1 (*pauVar180) [16];
  long lVar181;
  ulong *puVar182;
  uint uVar183;
  undefined8 *puVar184;
  uint uVar185;
  undefined1 (*pauVar186) [16];
  undefined1 (*ptr) [16];
  long in_FS_OFFSET;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar192 [16];
  undefined1 auVar195 [16];
  undefined1 auVar199 [16];
  undefined1 auVar201 [16];
  uint uVar202;
  undefined2 uVar229;
  undefined2 uVar230;
  undefined1 auVar204 [16];
  undefined2 uVar227;
  undefined1 auVar205 [16];
  undefined1 auVar207 [16];
  undefined1 auVar211 [16];
  undefined1 auVar214 [16];
  uint uVar203;
  undefined2 uVar228;
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar220 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar226 [16];
  undefined2 uVar254;
  uint uVar256;
  undefined1 auVar231 [16];
  undefined1 auVar233 [16];
  undefined1 auVar237 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar250 [16];
  undefined1 auVar253 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar263 [16];
  undefined1 auVar267 [16];
  undefined1 auVar270 [16];
  uint uVar271;
  ushort uVar275;
  ushort uVar276;
  ushort uVar277;
  undefined1 auVar272 [16];
  undefined1 auVar274 [16];
  undefined1 auVar278 [16];
  ushort uVar279;
  ushort uVar280;
  ushort uVar281;
  ulong local_828 [128];
  ulong local_428 [129];
  long local_20;
  undefined1 auVar196 [16];
  undefined1 auVar191 [16];
  undefined1 auVar193 [16];
  undefined1 auVar197 [16];
  undefined1 auVar194 [16];
  undefined1 auVar198 [16];
  ushort uVar200;
  undefined1 auVar208 [16];
  undefined1 auVar206 [16];
  undefined1 auVar209 [16];
  undefined1 auVar212 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar221 [16];
  undefined1 auVar210 [16];
  undefined1 auVar213 [16];
  undefined1 auVar219 [16];
  undefined1 auVar222 [16];
  undefined1 auVar225 [16];
  undefined1 auVar234 [16];
  undefined1 auVar238 [16];
  undefined1 auVar232 [16];
  undefined1 auVar235 [16];
  undefined1 auVar239 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar251 [16];
  undefined1 auVar236 [16];
  undefined1 auVar240 [16];
  undefined1 auVar243 [16];
  undefined1 auVar249 [16];
  undefined1 auVar252 [16];
  ushort uVar255;
  undefined1 auVar264 [16];
  undefined1 auVar262 [16];
  undefined1 auVar265 [16];
  undefined1 auVar268 [16];
  undefined1 auVar259 [16];
  undefined1 auVar266 [16];
  undefined1 auVar269 [16];
  undefined1 auVar273 [16];
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar202 = *(uint *)(param_1 + 0x7c);
    lVar10 = *(long *)(param_1 + 0x68);
    uVar203 = *(uint *)(param_1 + 0x54);
    puVar184 = (undefined8 *)(lVar10 + -0x400 + (ulong)uVar202 * 0x400);
    puVar178 = local_828;
    for (lVar181 = 0x80; lVar181 != 0; lVar181 = lVar181 + -1) {
      *puVar178 = *puVar184;
      puVar184 = puVar184 + 1;
      puVar178 = puVar178 + 1;
    }
    if (1 < uVar203) {
      uVar185 = uVar202 * 2 - 1;
      uVar183 = 1;
      do {
        uVar183 = uVar183 + 1;
        puVar182 = (ulong *)((ulong)uVar185 * 0x400 + lVar10);
        puVar178 = local_828;
        do {
          uVar151 = *puVar182;
          uVar152 = puVar182[1];
          puVar179 = puVar178 + 2;
          puVar182 = puVar182 + 2;
          *puVar178 = uVar151 ^ *puVar178;
          puVar178[1] = uVar152 ^ puVar178[1];
          puVar178 = puVar179;
        } while (local_428 != puVar179);
        uVar185 = uVar185 + uVar202;
      } while (uVar183 != uVar203);
    }
    pauVar180 = (undefined1 (*) [16])local_428;
    pauVar186 = (undefined1 (*) [16])local_828;
    do {
      auVar188 = *pauVar186;
      auVar201 = pauVar186[1];
      ptr = pauVar186 + 8;
      auVar4 = pauVar186[2];
      auVar5 = pauVar186[4];
      auVar6 = pauVar186[6];
      uVar151 = CONCAT44(auVar201._0_4_,auVar188._8_4_);
      auVar191._0_10_ = (unkuint10)uVar151 << 0x20;
      uVar1 = *(undefined4 *)pauVar186[3];
      uVar7 = *(undefined4 *)(pauVar186[3] + 8);
      auVar172._8_2_ = auVar188._10_2_;
      auVar172._0_8_ = uVar151;
      auVar172._10_2_ = auVar4._10_2_;
      auVar191._12_4_ = auVar172._8_4_;
      uVar279 = auVar4._8_2_;
      auVar191._10_2_ = uVar279;
      uVar200 = auVar188._8_2_;
      auVar166._4_2_ = uVar200;
      auVar166._0_4_ = auVar188._8_4_;
      auVar166._6_6_ = auVar191._10_6_;
      uVar229 = auVar4._2_2_;
      auVar257._2_8_ = auVar166._4_8_;
      auVar257._0_2_ = uVar229;
      auVar257._10_6_ = 0;
      auVar195._0_2_ = auVar188._0_2_;
      auVar190._12_4_ = 0;
      auVar190._0_12_ = SUB1612(auVar257 << 0x30,4);
      auVar190 = auVar190 << 0x20;
      uVar280 = (ushort)uVar1;
      uVar281 = (ushort)((uint)uVar1 >> 0x10);
      uVar2 = *(undefined4 *)pauVar186[5];
      uVar8 = *(undefined4 *)(pauVar186[5] + 8);
      uVar151 = CONCAT44(uVar2,auVar5._8_4_);
      auVar232._0_10_ = (unkuint10)uVar151 << 0x20;
      auVar194._0_12_ = auVar190._0_12_;
      auVar194._12_2_ = uVar229;
      auVar194._14_2_ = uVar281;
      auVar193._12_4_ = auVar194._12_4_;
      auVar193._0_10_ = auVar190._0_10_;
      auVar193._10_2_ = auVar201._2_2_;
      auVar192._10_6_ = auVar193._10_6_;
      auVar192._0_8_ = auVar190._0_8_;
      auVar192._8_2_ = auVar188._2_2_;
      auVar153._2_8_ = auVar192._8_8_;
      auVar153._0_2_ = uVar280;
      auVar153._10_6_ = 0;
      auVar278._12_4_ = 0;
      auVar278._0_12_ = SUB1612(auVar153 << 0x30,4);
      auVar278 = auVar278 << 0x20;
      uVar3 = *(undefined4 *)pauVar186[7];
      uVar9 = *(undefined4 *)(pauVar186[7] + 8);
      auVar198._0_12_ = auVar278._0_12_;
      auVar198._12_2_ = uVar280;
      auVar198._14_2_ = (ushort)uVar7;
      auVar197._12_4_ = auVar198._12_4_;
      auVar197._0_10_ = auVar278._0_10_;
      auVar197._10_2_ = uVar279;
      auVar196._10_6_ = auVar197._10_6_;
      auVar196._0_8_ = auVar278._0_8_;
      auVar196._8_2_ = auVar4._0_2_;
      auVar195._8_8_ = auVar196._8_8_;
      auVar195._6_2_ = auVar201._8_2_;
      auVar195._4_2_ = auVar201._0_2_;
      auVar195._2_2_ = uVar200;
      auVar173._8_2_ = auVar5._10_2_;
      auVar173._0_8_ = uVar151;
      auVar173._10_2_ = auVar6._10_2_;
      auVar232._12_4_ = auVar173._8_4_;
      uVar275 = auVar6._8_2_;
      auVar232._10_2_ = uVar275;
      uVar255 = auVar5._8_2_;
      auVar167._4_2_ = uVar255;
      auVar167._0_4_ = auVar5._8_4_;
      auVar167._6_6_ = auVar232._10_6_;
      uVar228 = auVar6._2_2_;
      auVar154._2_8_ = auVar167._4_8_;
      auVar154._0_2_ = uVar228;
      auVar154._10_6_ = 0;
      auVar237._0_2_ = auVar5._0_2_;
      auVar231._12_4_ = 0;
      auVar231._0_12_ = SUB1612(auVar154 << 0x30,4);
      auVar231 = auVar231 << 0x20;
      uVar276 = (ushort)uVar3;
      uVar227 = (undefined2)((uint)uVar2 >> 0x10);
      uVar277 = (ushort)((uint)uVar3 >> 0x10);
      auVar236._0_12_ = auVar231._0_12_;
      auVar236._12_2_ = uVar228;
      auVar236._14_2_ = uVar277;
      auVar235._12_4_ = auVar236._12_4_;
      auVar235._0_10_ = auVar231._0_10_;
      auVar235._10_2_ = uVar227;
      auVar234._10_6_ = auVar235._10_6_;
      auVar234._0_8_ = auVar231._0_8_;
      auVar234._8_2_ = auVar5._2_2_;
      auVar155._2_8_ = auVar234._8_8_;
      auVar155._0_2_ = uVar276;
      auVar155._10_6_ = 0;
      auVar233._12_4_ = 0;
      auVar233._0_12_ = SUB1612(auVar155 << 0x30,4);
      auVar233 = auVar233 << 0x20;
      auVar240._0_12_ = auVar233._0_12_;
      auVar240._12_2_ = uVar276;
      auVar240._14_2_ = (ushort)uVar9;
      auVar239._12_4_ = auVar240._12_4_;
      auVar239._0_10_ = auVar233._0_10_;
      auVar239._10_2_ = uVar275;
      auVar238._10_6_ = auVar239._10_6_;
      auVar238._0_8_ = auVar233._0_8_;
      auVar238._8_2_ = auVar6._0_2_;
      auVar237._8_8_ = auVar238._8_8_;
      auVar237._6_2_ = (ushort)uVar8;
      auVar237._4_2_ = (ushort)uVar2;
      auVar237._2_2_ = uVar255;
      auVar257 = __LC23 & auVar237;
      auVar241._0_2_ = auVar237._0_2_ >> 8;
      auVar241._2_2_ = uVar255 >> 8;
      auVar241._4_2_ = (ushort)uVar2 >> 8;
      auVar241._6_2_ = (ushort)uVar8 >> 8;
      auVar241._8_2_ = auVar6._0_2_ >> 8;
      auVar241._10_2_ = uVar275 >> 8;
      auVar241._12_2_ = uVar276 >> 8;
      auVar241._14_2_ = (ushort)uVar9 >> 8;
      auVar278 = __LC23 & auVar195;
      sVar12 = auVar278._0_2_;
      sVar17 = auVar278._2_2_;
      sVar22 = auVar278._4_2_;
      sVar28 = auVar278._6_2_;
      sVar36 = auVar278._8_2_;
      sVar43 = auVar278._10_2_;
      sVar51 = auVar278._12_2_;
      sVar59 = auVar278._14_2_;
      sVar67 = auVar257._0_2_;
      sVar75 = auVar257._2_2_;
      sVar83 = auVar257._4_2_;
      sVar91 = auVar257._6_2_;
      sVar99 = auVar257._8_2_;
      sVar107 = auVar257._10_2_;
      sVar115 = auVar257._12_2_;
      sVar123 = auVar257._14_2_;
      auVar199._0_2_ = auVar195._0_2_ >> 8;
      auVar199._2_2_ = uVar200 >> 8;
      auVar199._4_2_ = auVar201._0_2_ >> 8;
      auVar199._6_2_ = auVar201._8_2_ >> 8;
      auVar199._8_2_ = auVar4._0_2_ >> 8;
      auVar199._10_2_ = uVar279 >> 8;
      auVar199._12_2_ = uVar280 >> 8;
      auVar199._14_2_ = (ushort)uVar7 >> 8;
      auVar241 = auVar241 & __LC23;
      auVar199 = auVar199 & __LC23;
      uVar200 = auVar199._0_2_;
      uVar276 = auVar199._2_2_;
      uVar280 = auVar199._4_2_;
      uVar29 = auVar199._6_2_;
      sVar37 = auVar199._8_2_;
      sVar44 = auVar199._10_2_;
      sVar52 = auVar199._12_2_;
      sVar60 = auVar199._14_2_;
      uVar68 = auVar241._0_2_;
      uVar76 = auVar241._2_2_;
      uVar84 = auVar241._4_2_;
      uVar92 = auVar241._6_2_;
      sVar100 = auVar241._8_2_;
      sVar108 = auVar241._10_2_;
      sVar116 = auVar241._12_2_;
      sVar124 = auVar241._14_2_;
      auVar259._0_12_ = ZEXT212(uVar281) << 0x30;
      auVar259._12_2_ = uVar281;
      auVar259._14_2_ = (short)((uint)uVar7 >> 0x10);
      auVar258._12_4_ = auVar259._12_4_;
      auVar258._0_10_ = (unkuint10)uVar281 << 0x30;
      auVar258._10_2_ = auVar4._10_2_;
      auVar260._8_8_ = (undefined8)(CONCAT64(auVar258._10_6_,CONCAT22(uVar229,uVar281)) >> 0x10);
      auVar260._6_2_ = auVar201._10_2_;
      auVar260._4_2_ = auVar201._2_2_;
      auVar260._2_2_ = auVar188._10_2_;
      auVar260._0_2_ = auVar188._2_2_;
      auVar260 = auVar260 & __LC23;
      auVar243._0_12_ = ZEXT212(uVar277) << 0x30;
      auVar243._12_2_ = uVar277;
      auVar243._14_2_ = (short)((uint)uVar9 >> 0x10);
      auVar242._12_4_ = auVar243._12_4_;
      auVar242._0_10_ = (unkuint10)uVar277 << 0x30;
      auVar242._10_2_ = auVar6._10_2_;
      auVar244._8_8_ = (undefined8)(CONCAT64(auVar242._10_6_,CONCAT22(uVar228,uVar277)) >> 0x10);
      auVar244._6_2_ = (short)((uint)uVar8 >> 0x10);
      auVar244._4_2_ = uVar227;
      auVar244._2_2_ = auVar5._10_2_;
      auVar244._0_2_ = auVar5._2_2_;
      uVar275 = *(ushort *)(pauVar186[7] + 6);
      auVar244 = auVar244 & __LC23;
      sVar13 = auVar260._0_2_;
      sVar18 = auVar260._2_2_;
      sVar23 = auVar260._4_2_;
      sVar30 = auVar260._6_2_;
      sVar38 = auVar260._8_2_;
      sVar45 = auVar260._10_2_;
      sVar53 = auVar260._12_2_;
      sVar61 = auVar260._14_2_;
      sVar69 = auVar244._0_2_;
      sVar77 = auVar244._2_2_;
      sVar85 = auVar244._4_2_;
      sVar93 = auVar244._6_2_;
      sVar101 = auVar244._8_2_;
      sVar109 = auVar244._10_2_;
      sVar117 = auVar244._12_2_;
      sVar125 = auVar244._14_2_;
      auVar187[1] = 0;
      auVar187[0] = auVar188[3];
      auVar204[1] = 0;
      auVar204[0] = auVar5[3];
      auVar131[0xc] = (char)((uint)uVar1 >> 0x18);
      auVar131._0_12_ = ZEXT712(0);
      auVar131[0xd] = 0;
      auVar131[0xe] = (char)((uint)uVar7 >> 0x18);
      auVar133[10] = auVar4[0xb];
      auVar133._0_10_ = (unkuint10)0;
      auVar133[0xb] = 0;
      auVar133._12_3_ = auVar131._12_3_;
      auVar137._10_5_ = auVar133._10_5_;
      auVar137._0_10_ = (unkuint10)auVar4[3] << 0x40;
      auVar141._8_7_ = auVar137._8_7_;
      auVar141._0_8_ = (ulong)auVar201[0xb] << 0x30;
      auVar145._6_9_ = auVar141._6_9_;
      auVar145._0_6_ = (uint6)auVar201[3] << 0x20;
      auVar187[2] = auVar188[0xb];
      auVar187[3] = 0;
      auVar187._4_11_ = auVar145._4_11_;
      auVar187[0xf] = 0;
      auVar187 = auVar187 & __LC23;
      auVar132[0xc] = (char)((uint)uVar3 >> 0x18);
      auVar132._0_12_ = ZEXT712(0);
      auVar132[0xd] = 0;
      auVar132[0xe] = (char)((uint)uVar9 >> 0x18);
      auVar134[10] = auVar6[0xb];
      auVar134._0_10_ = (unkuint10)0;
      auVar134[0xb] = 0;
      auVar134._12_3_ = auVar132._12_3_;
      auVar138._10_5_ = auVar134._10_5_;
      auVar138._0_10_ = (unkuint10)auVar6[3] << 0x40;
      auVar142._8_7_ = auVar138._8_7_;
      auVar142._0_8_ = (ulong)(byte)((uint)uVar8 >> 0x18) << 0x30;
      auVar146._6_9_ = auVar142._6_9_;
      auVar146._0_6_ = (uint6)(byte)((uint)uVar2 >> 0x18) << 0x20;
      auVar204[2] = auVar5[0xb];
      auVar204[3] = 0;
      auVar204._4_11_ = auVar146._4_11_;
      auVar204[0xf] = 0;
      auVar204 = auVar204 & __LC23;
      uVar255 = auVar187._0_2_;
      uVar277 = auVar187._2_2_;
      uVar281 = auVar187._4_2_;
      uVar31 = auVar187._6_2_;
      sVar39 = auVar187._8_2_;
      sVar46 = auVar187._10_2_;
      sVar54 = auVar187._12_2_;
      sVar62 = auVar187._14_2_;
      uVar70 = auVar204._0_2_;
      uVar78 = auVar204._2_2_;
      uVar86 = auVar204._4_2_;
      uVar94 = auVar204._6_2_;
      sVar102 = auVar204._8_2_;
      sVar110 = auVar204._10_2_;
      sVar118 = auVar204._12_2_;
      sVar126 = auVar204._14_2_;
      uVar256 = auVar188._12_4_;
      uVar151 = CONCAT44(auVar201._4_4_,uVar256);
      auVar262._0_10_ = (unkuint10)uVar151 << 0x20;
      auVar174._8_2_ = auVar188._14_2_;
      auVar174._0_8_ = uVar151;
      auVar174._10_2_ = auVar4._14_2_;
      auVar262._12_4_ = auVar174._8_4_;
      auVar262._10_2_ = auVar4._12_2_;
      auVar168._4_2_ = auVar188._12_2_;
      auVar168._0_4_ = uVar256;
      auVar168._6_6_ = auVar262._10_6_;
      uVar227 = auVar4._6_2_;
      auVar156._2_8_ = auVar168._4_8_;
      auVar156._0_2_ = uVar227;
      auVar156._10_6_ = 0;
      auVar270._0_2_ = auVar188._4_2_;
      auVar261._12_4_ = 0;
      auVar261._0_12_ = SUB1612(auVar156 << 0x30,4);
      auVar261 = auVar261 << 0x20;
      auVar266._0_12_ = auVar261._0_12_;
      auVar266._12_2_ = uVar227;
      auVar266._14_2_ = *(undefined2 *)(pauVar186[3] + 6);
      auVar265._12_4_ = auVar266._12_4_;
      auVar265._0_10_ = auVar261._0_10_;
      auVar265._10_2_ = auVar201._6_2_;
      auVar264._10_6_ = auVar265._10_6_;
      auVar264._0_8_ = auVar261._0_8_;
      auVar264._8_2_ = auVar188._6_2_;
      auVar157._2_8_ = auVar264._8_8_;
      auVar157._0_2_ = *(undefined2 *)(pauVar186[3] + 4);
      auVar157._10_6_ = 0;
      auVar263._12_4_ = 0;
      auVar263._0_12_ = SUB1612(auVar157 << 0x30,4);
      auVar263 = auVar263 << 0x20;
      auVar190 = pauVar186[5];
      auVar269._0_12_ = auVar263._0_12_;
      auVar269._12_2_ = *(undefined2 *)(pauVar186[3] + 4);
      auVar269._14_2_ = *(undefined2 *)(pauVar186[3] + 0xc);
      auVar268._12_4_ = auVar269._12_4_;
      auVar268._0_10_ = auVar263._0_10_;
      auVar268._10_2_ = auVar4._12_2_;
      auVar267._10_6_ = auVar268._10_6_;
      auVar267._0_8_ = auVar263._0_8_;
      auVar267._8_2_ = auVar4._4_2_;
      auVar270._8_8_ = auVar267._8_8_;
      auVar270._6_2_ = auVar201._12_2_;
      auVar270._4_2_ = auVar201._4_2_;
      auVar270._2_2_ = auVar188._12_2_;
      auVar270 = auVar270 & __LC23;
      uVar183 = auVar5._12_4_;
      uVar151 = CONCAT44(auVar190._4_4_,uVar183);
      auVar206._0_10_ = (unkuint10)uVar151 << 0x20;
      auVar175._8_2_ = auVar5._14_2_;
      auVar175._0_8_ = uVar151;
      auVar175._10_2_ = auVar6._14_2_;
      auVar206._12_4_ = auVar175._8_4_;
      auVar206._10_2_ = auVar6._12_2_;
      auVar169._4_2_ = auVar5._12_2_;
      auVar169._0_4_ = uVar183;
      auVar169._6_6_ = auVar206._10_6_;
      uVar254 = auVar6._6_2_;
      auVar158._2_8_ = auVar169._4_8_;
      auVar158._0_2_ = uVar254;
      auVar158._10_6_ = 0;
      auVar214._0_2_ = auVar5._4_2_;
      auVar205._12_4_ = 0;
      auVar205._0_12_ = SUB1612(auVar158 << 0x30,4);
      auVar205 = auVar205 << 0x20;
      auVar210._0_12_ = auVar205._0_12_;
      auVar210._12_2_ = uVar254;
      auVar210._14_2_ = *(undefined2 *)(pauVar186[7] + 6);
      auVar209._12_4_ = auVar210._12_4_;
      auVar209._0_10_ = auVar205._0_10_;
      auVar209._10_2_ = auVar190._6_2_;
      auVar208._10_6_ = auVar209._10_6_;
      auVar208._0_8_ = auVar205._0_8_;
      auVar208._8_2_ = auVar5._6_2_;
      auVar159._2_8_ = auVar208._8_8_;
      auVar159._0_2_ = *(undefined2 *)(pauVar186[7] + 4);
      auVar159._10_6_ = 0;
      auVar207._12_4_ = 0;
      auVar207._0_12_ = SUB1612(auVar159 << 0x30,4);
      auVar207 = auVar207 << 0x20;
      auVar213._0_12_ = auVar207._0_12_;
      auVar213._12_2_ = *(undefined2 *)(pauVar186[7] + 4);
      auVar213._14_2_ = *(undefined2 *)(pauVar186[7] + 0xc);
      auVar212._12_4_ = auVar213._12_4_;
      auVar212._0_10_ = auVar207._0_10_;
      auVar212._10_2_ = auVar6._12_2_;
      auVar211._10_6_ = auVar212._10_6_;
      auVar211._0_8_ = auVar207._0_8_;
      auVar211._8_2_ = auVar6._4_2_;
      auVar214._8_8_ = auVar211._8_8_;
      auVar214._6_2_ = auVar190._12_2_;
      auVar214._4_2_ = auVar190._4_2_;
      auVar214._2_2_ = auVar5._12_2_;
      auVar214 = auVar214 & __LC23;
      sVar14 = auVar270._0_2_;
      sVar19 = auVar270._2_2_;
      sVar24 = auVar270._4_2_;
      sVar32 = auVar270._6_2_;
      sVar40 = auVar270._8_2_;
      sVar47 = auVar270._10_2_;
      sVar55 = auVar270._12_2_;
      sVar63 = auVar270._14_2_;
      sVar71 = auVar214._0_2_;
      sVar79 = auVar214._2_2_;
      sVar87 = auVar214._4_2_;
      sVar95 = auVar214._6_2_;
      sVar103 = auVar214._8_2_;
      sVar111 = auVar214._10_2_;
      sVar119 = auVar214._12_2_;
      sVar127 = auVar214._14_2_;
      uVar202 = auVar201._4_4_ >> 8;
      uVar256 = uVar256 >> 8;
      auVar245._0_10_ = (unkuint10)CONCAT44(uVar202,uVar256) << 0x20;
      uVar271 = *(uint *)(pauVar186[3] + 4) >> 8;
      uVar203 = auVar4._4_4_ >> 8;
      uVar185 = auVar4._12_4_ >> 8;
      auVar176._8_2_ = (short)(uVar256 >> 0x10);
      auVar176._0_8_ = CONCAT44(uVar202,uVar256);
      auVar176._10_2_ = (short)(uVar185 >> 0x10);
      uVar229 = (undefined2)uVar185;
      auVar245._12_4_ = auVar176._8_4_;
      auVar245._10_2_ = uVar229;
      auVar170._4_2_ = (short)uVar256;
      auVar170._0_4_ = uVar256;
      auVar170._6_6_ = auVar245._10_6_;
      uVar228 = (undefined2)(uVar203 >> 0x10);
      auVar161._2_8_ = auVar170._4_8_;
      auVar161._0_2_ = uVar228;
      auVar161._10_6_ = 0;
      auVar253._0_2_ = auVar188._5_2_;
      auVar160._12_4_ = 0;
      auVar160._0_12_ = SUB1612(auVar161 << 0x30,4);
      uVar230 = (undefined2)uVar271;
      auVar249._0_12_ = SUB1612(auVar160 << 0x20,0);
      auVar249._12_2_ = uVar228;
      auVar249._14_2_ = (short)(uVar271 >> 0x10);
      auVar248._12_4_ = auVar249._12_4_;
      auVar248._0_10_ = SUB1610(auVar160 << 0x20,0);
      auVar248._10_2_ = (short)(uVar202 >> 0x10);
      auVar247._10_6_ = auVar248._10_6_;
      auVar247._0_10_ = (unkuint10)auVar188[7] << 0x40;
      auVar162._2_8_ = auVar247._8_8_;
      auVar162._0_2_ = uVar230;
      auVar162._10_6_ = 0;
      auVar246._12_4_ = 0;
      auVar246._0_12_ = SUB1612(auVar162 << 0x30,4);
      auVar246 = auVar246 << 0x20;
      auVar252._0_12_ = auVar246._0_12_;
      auVar252._12_2_ = uVar230;
      auVar252._14_2_ = (short)(*(uint *)(pauVar186[3] + 0xc) >> 8);
      auVar251._12_4_ = auVar252._12_4_;
      auVar251._0_10_ = auVar246._0_10_;
      auVar251._10_2_ = uVar229;
      auVar250._10_6_ = auVar251._10_6_;
      auVar250._0_8_ = auVar246._0_8_;
      auVar250._8_2_ = (short)uVar203;
      auVar253._8_8_ = auVar250._8_8_;
      auVar253._6_2_ = (short)(auVar201._12_4_ >> 8);
      auVar253._4_2_ = (short)uVar202;
      auVar253._2_2_ = (short)uVar256;
      auVar253 = auVar253 & __LC23;
      uVar202 = *(uint *)(pauVar186[5] + 4) >> 8;
      uVar183 = uVar183 >> 8;
      auVar215._0_10_ = (unkuint10)CONCAT44(uVar202,uVar183) << 0x20;
      uVar256 = *(uint *)(pauVar186[7] + 4) >> 8;
      uVar203 = auVar6._4_4_ >> 8;
      uVar185 = auVar6._12_4_ >> 8;
      auVar177._8_2_ = (short)(uVar183 >> 0x10);
      auVar177._0_8_ = CONCAT44(uVar202,uVar183);
      auVar177._10_2_ = (short)(uVar185 >> 0x10);
      auVar215._12_4_ = auVar177._8_4_;
      uVar229 = (undefined2)uVar185;
      auVar215._10_2_ = uVar229;
      auVar171._4_2_ = (short)uVar183;
      auVar171._0_4_ = uVar183;
      auVar171._6_6_ = auVar215._10_6_;
      uVar228 = (undefined2)(uVar203 >> 0x10);
      auVar164._2_8_ = auVar171._4_8_;
      auVar164._0_2_ = uVar228;
      auVar164._10_6_ = 0;
      auVar223._0_2_ = auVar5._5_2_;
      auVar163._12_4_ = 0;
      auVar163._0_12_ = SUB1612(auVar164 << 0x30,4);
      uVar230 = (undefined2)uVar256;
      auVar219._0_12_ = SUB1612(auVar163 << 0x20,0);
      auVar219._12_2_ = uVar228;
      auVar219._14_2_ = (short)(uVar256 >> 0x10);
      auVar218._12_4_ = auVar219._12_4_;
      auVar218._0_10_ = SUB1610(auVar163 << 0x20,0);
      auVar218._10_2_ = (short)(uVar202 >> 0x10);
      auVar217._10_6_ = auVar218._10_6_;
      auVar217._0_10_ = (unkuint10)auVar5[7] << 0x40;
      auVar165._2_8_ = auVar217._8_8_;
      auVar165._0_2_ = uVar230;
      auVar165._10_6_ = 0;
      auVar216._12_4_ = 0;
      auVar216._0_12_ = SUB1612(auVar165 << 0x30,4);
      auVar216 = auVar216 << 0x20;
      uVar279 = *(ushort *)(pauVar186[3] + 6);
      auVar222._0_12_ = auVar216._0_12_;
      auVar222._12_2_ = uVar230;
      auVar222._14_2_ = (short)(*(uint *)(pauVar186[7] + 0xc) >> 8);
      auVar221._12_4_ = auVar222._12_4_;
      auVar221._0_10_ = auVar216._0_10_;
      auVar221._10_2_ = uVar229;
      auVar220._10_6_ = auVar221._10_6_;
      auVar220._0_8_ = auVar216._0_8_;
      auVar220._8_2_ = (short)uVar203;
      auVar223._8_8_ = auVar220._8_8_;
      auVar223._6_2_ = (short)(*(uint *)(pauVar186[5] + 0xc) >> 8);
      auVar223._4_2_ = (short)uVar202;
      auVar223._2_2_ = (short)uVar183;
      auVar223 = auVar223 & __LC23;
      sVar15 = auVar253._0_2_;
      sVar20 = auVar253._2_2_;
      sVar25 = auVar253._4_2_;
      sVar33 = auVar253._6_2_;
      sVar41 = auVar253._8_2_;
      sVar48 = auVar253._10_2_;
      sVar56 = auVar253._12_2_;
      sVar64 = auVar253._14_2_;
      sVar72 = auVar223._0_2_;
      sVar80 = auVar223._2_2_;
      sVar88 = auVar223._4_2_;
      sVar96 = auVar223._6_2_;
      sVar104 = auVar223._8_2_;
      sVar112 = auVar223._10_2_;
      sVar120 = auVar223._12_2_;
      sVar128 = auVar223._14_2_;
      auVar225._0_12_ = ZEXT212(uVar279) << 0x30;
      auVar225._12_2_ = uVar279;
      auVar225._14_2_ = *(undefined2 *)(pauVar186[3] + 0xe);
      auVar224._12_4_ = auVar225._12_4_;
      auVar224._0_10_ = (unkuint10)uVar279 << 0x30;
      auVar224._10_2_ = auVar4._14_2_;
      auVar226._8_8_ = (undefined8)(CONCAT64(auVar224._10_6_,CONCAT22(uVar227,uVar279)) >> 0x10);
      auVar226._6_2_ = auVar201._14_2_;
      auVar226._4_2_ = auVar201._6_2_;
      auVar226._2_2_ = auVar188._14_2_;
      auVar226._0_2_ = auVar188._6_2_;
      auVar226 = auVar226 & __LC23;
      auVar273._0_12_ = ZEXT212(uVar275) << 0x30;
      auVar273._12_2_ = uVar275;
      auVar273._14_2_ = *(undefined2 *)(pauVar186[7] + 0xe);
      auVar272._12_4_ = auVar273._12_4_;
      auVar272._0_10_ = (unkuint10)uVar275 << 0x30;
      auVar272._10_2_ = auVar6._14_2_;
      auVar274._8_8_ = (undefined8)(CONCAT64(auVar272._10_6_,CONCAT22(uVar254,uVar275)) >> 0x10);
      auVar274._6_2_ = *(undefined2 *)(pauVar186[5] + 0xe);
      auVar274._4_2_ = *(undefined2 *)(pauVar186[5] + 6);
      auVar274._2_2_ = auVar5._14_2_;
      auVar274._0_2_ = auVar5._6_2_;
      auVar274 = auVar274 & __LC23;
      sVar16 = auVar226._0_2_;
      sVar21 = auVar226._2_2_;
      sVar26 = auVar226._4_2_;
      sVar34 = auVar226._6_2_;
      sVar42 = auVar226._8_2_;
      sVar49 = auVar226._10_2_;
      sVar57 = auVar226._12_2_;
      sVar65 = auVar226._14_2_;
      sVar73 = auVar274._0_2_;
      sVar81 = auVar274._2_2_;
      sVar89 = auVar274._4_2_;
      sVar97 = auVar274._6_2_;
      sVar105 = auVar274._8_2_;
      sVar113 = auVar274._10_2_;
      cVar11 = (0 < sVar113) * (sVar113 < 0x100) * auVar274[10] - (0xff < sVar113);
      sVar121 = auVar274._12_2_;
      sVar129 = auVar274._14_2_;
      auVar189[1] = 0;
      auVar189[0] = auVar188[7];
      auVar135[0xc] = pauVar186[3][7];
      auVar135._0_12_ = ZEXT712(0);
      auVar135[0xd] = 0;
      auVar135[0xe] = pauVar186[3][0xf];
      auVar139[10] = auVar4[0xf];
      auVar139._0_10_ = (unkuint10)0;
      auVar139[0xb] = 0;
      auVar139._12_3_ = auVar135._12_3_;
      auVar143._10_5_ = auVar139._10_5_;
      auVar143._0_10_ = (unkuint10)auVar4[7] << 0x40;
      auVar147._8_7_ = auVar143._8_7_;
      auVar147._0_8_ = (ulong)auVar201[0xf] << 0x30;
      auVar149._6_9_ = auVar147._6_9_;
      auVar149._0_6_ = (uint6)auVar201[7] << 0x20;
      auVar189[2] = auVar188[0xf];
      auVar189[3] = 0;
      auVar189._4_11_ = auVar149._4_11_;
      auVar189[0xf] = 0;
      auVar189 = auVar189 & __LC23;
      auVar201[1] = 0;
      auVar201[0] = auVar5[7];
      auVar136[0xc] = pauVar186[7][7];
      auVar136._0_12_ = ZEXT712(0);
      auVar136[0xd] = 0;
      auVar136[0xe] = pauVar186[7][0xf];
      auVar140[10] = auVar6[0xf];
      auVar140._0_10_ = (unkuint10)0;
      auVar140[0xb] = 0;
      auVar140._12_3_ = auVar136._12_3_;
      auVar144._10_5_ = auVar140._10_5_;
      auVar144._0_10_ = (unkuint10)auVar6[7] << 0x40;
      auVar148._8_7_ = auVar144._8_7_;
      auVar148._0_8_ = (ulong)(byte)pauVar186[5][0xf] << 0x30;
      auVar150._6_9_ = auVar148._6_9_;
      auVar150._0_6_ = (uint6)(byte)pauVar186[5][7] << 0x20;
      auVar201[2] = auVar5[0xf];
      auVar201[3] = 0;
      auVar201._4_11_ = auVar150._4_11_;
      auVar201[0xf] = 0;
      auVar201 = auVar201 & __LC23;
      uVar275 = auVar189._0_2_;
      uVar279 = auVar189._2_2_;
      uVar27 = auVar189._4_2_;
      uVar35 = auVar189._6_2_;
      sVar113 = auVar189._8_2_;
      sVar50 = auVar189._10_2_;
      sVar58 = auVar189._12_2_;
      sVar66 = auVar189._14_2_;
      uVar74 = auVar201._0_2_;
      uVar82 = auVar201._2_2_;
      uVar90 = auVar201._4_2_;
      uVar98 = auVar201._6_2_;
      sVar106 = auVar201._8_2_;
      sVar114 = auVar201._10_2_;
      sVar122 = auVar201._12_2_;
      sVar130 = auVar201._14_2_;
      (*pauVar180)[0] = (0 < sVar12) * (sVar12 < 0x100) * auVar278[0] - (0xff < sVar12);
      (*pauVar180)[1] = (uVar200 != 0) * (uVar200 < 0x100) * auVar199[0] - (0xff < uVar200);
      (*pauVar180)[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar260[0] - (0xff < sVar13);
      (*pauVar180)[3] = (uVar255 != 0) * (uVar255 < 0x100) * auVar187[0] - (0xff < uVar255);
      (*pauVar180)[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar270[0] - (0xff < sVar14);
      (*pauVar180)[5] = (0 < sVar15) * (sVar15 < 0x100) * auVar253[0] - (0xff < sVar15);
      (*pauVar180)[6] = (0 < sVar16) * (sVar16 < 0x100) * auVar226[0] - (0xff < sVar16);
      (*pauVar180)[7] = (uVar275 != 0) * (uVar275 < 0x100) * auVar189[0] - (0xff < uVar275);
      (*pauVar180)[8] = (0 < sVar17) * (sVar17 < 0x100) * auVar278[2] - (0xff < sVar17);
      (*pauVar180)[9] = (uVar276 != 0) * (uVar276 < 0x100) * auVar199[2] - (0xff < uVar276);
      (*pauVar180)[10] = (0 < sVar18) * (sVar18 < 0x100) * auVar260[2] - (0xff < sVar18);
      (*pauVar180)[0xb] = (uVar277 != 0) * (uVar277 < 0x100) * auVar187[2] - (0xff < uVar277);
      (*pauVar180)[0xc] = (0 < sVar19) * (sVar19 < 0x100) * auVar270[2] - (0xff < sVar19);
      (*pauVar180)[0xd] = (0 < sVar20) * (sVar20 < 0x100) * auVar253[2] - (0xff < sVar20);
      (*pauVar180)[0xe] = (0 < sVar21) * (sVar21 < 0x100) * auVar226[2] - (0xff < sVar21);
      (*pauVar180)[0xf] = (uVar279 != 0) * (uVar279 < 0x100) * auVar189[2] - (0xff < uVar279);
      pauVar180[1][0] = (0 < sVar22) * (sVar22 < 0x100) * auVar278[4] - (0xff < sVar22);
      pauVar180[1][1] = (uVar280 != 0) * (uVar280 < 0x100) * auVar199[4] - (0xff < uVar280);
      pauVar180[1][2] = (0 < sVar23) * (sVar23 < 0x100) * auVar260[4] - (0xff < sVar23);
      pauVar180[1][3] = (uVar281 != 0) * (uVar281 < 0x100) * auVar187[4] - (0xff < uVar281);
      pauVar180[1][4] = (0 < sVar24) * (sVar24 < 0x100) * auVar270[4] - (0xff < sVar24);
      pauVar180[1][5] = (0 < sVar25) * (sVar25 < 0x100) * auVar253[4] - (0xff < sVar25);
      pauVar180[1][6] = (0 < sVar26) * (sVar26 < 0x100) * auVar226[4] - (0xff < sVar26);
      pauVar180[1][7] = (uVar27 != 0) * (uVar27 < 0x100) * auVar189[4] - (0xff < uVar27);
      pauVar180[1][8] = (0 < sVar28) * (sVar28 < 0x100) * auVar278[6] - (0xff < sVar28);
      pauVar180[1][9] = (uVar29 != 0) * (uVar29 < 0x100) * auVar199[6] - (0xff < uVar29);
      pauVar180[1][10] = (0 < sVar30) * (sVar30 < 0x100) * auVar260[6] - (0xff < sVar30);
      pauVar180[1][0xb] = (uVar31 != 0) * (uVar31 < 0x100) * auVar187[6] - (0xff < uVar31);
      pauVar180[1][0xc] = (0 < sVar32) * (sVar32 < 0x100) * auVar270[6] - (0xff < sVar32);
      pauVar180[1][0xd] = (0 < sVar33) * (sVar33 < 0x100) * auVar253[6] - (0xff < sVar33);
      pauVar180[1][0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar226[6] - (0xff < sVar34);
      pauVar180[1][0xf] = (uVar35 != 0) * (uVar35 < 0x100) * auVar189[6] - (0xff < uVar35);
      pauVar180[2][0] = (0 < sVar36) * (sVar36 < 0x100) * auVar278[8] - (0xff < sVar36);
      pauVar180[2][1] = (0 < sVar37) * (sVar37 < 0x100) * auVar199[8] - (0xff < sVar37);
      pauVar180[2][2] = (0 < sVar38) * (sVar38 < 0x100) * auVar260[8] - (0xff < sVar38);
      pauVar180[2][3] = (0 < sVar39) * (sVar39 < 0x100) * auVar187[8] - (0xff < sVar39);
      pauVar180[2][4] = (0 < sVar40) * (sVar40 < 0x100) * auVar270[8] - (0xff < sVar40);
      pauVar180[2][5] = (0 < sVar41) * (sVar41 < 0x100) * auVar253[8] - (0xff < sVar41);
      pauVar180[2][6] = (0 < sVar42) * (sVar42 < 0x100) * auVar226[8] - (0xff < sVar42);
      pauVar180[2][7] = (0 < sVar113) * (sVar113 < 0x100) * auVar189[8] - (0xff < sVar113);
      pauVar180[2][8] = (0 < sVar43) * (sVar43 < 0x100) * auVar278[10] - (0xff < sVar43);
      pauVar180[2][9] = (0 < sVar44) * (sVar44 < 0x100) * auVar199[10] - (0xff < sVar44);
      pauVar180[2][10] = (0 < sVar45) * (sVar45 < 0x100) * auVar260[10] - (0xff < sVar45);
      pauVar180[2][0xb] = (0 < sVar46) * (sVar46 < 0x100) * auVar187[10] - (0xff < sVar46);
      pauVar180[2][0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar270[10] - (0xff < sVar47);
      pauVar180[2][0xd] = (0 < sVar48) * (sVar48 < 0x100) * auVar253[10] - (0xff < sVar48);
      pauVar180[2][0xe] = (0 < sVar49) * (sVar49 < 0x100) * auVar226[10] - (0xff < sVar49);
      pauVar180[2][0xf] = (0 < sVar50) * (sVar50 < 0x100) * auVar189[10] - (0xff < sVar50);
      pauVar180[3][0] = (0 < sVar51) * (sVar51 < 0x100) * auVar278[0xc] - (0xff < sVar51);
      pauVar180[3][1] = (0 < sVar52) * (sVar52 < 0x100) * auVar199[0xc] - (0xff < sVar52);
      pauVar180[3][2] = (0 < sVar53) * (sVar53 < 0x100) * auVar260[0xc] - (0xff < sVar53);
      pauVar180[3][3] = (0 < sVar54) * (sVar54 < 0x100) * auVar187[0xc] - (0xff < sVar54);
      pauVar180[3][4] = (0 < sVar55) * (sVar55 < 0x100) * auVar270[0xc] - (0xff < sVar55);
      pauVar180[3][5] = (0 < sVar56) * (sVar56 < 0x100) * auVar253[0xc] - (0xff < sVar56);
      pauVar180[3][6] = (0 < sVar57) * (sVar57 < 0x100) * auVar226[0xc] - (0xff < sVar57);
      pauVar180[3][7] = (0 < sVar58) * (sVar58 < 0x100) * auVar189[0xc] - (0xff < sVar58);
      pauVar180[3][8] = (0 < sVar59) * (sVar59 < 0x100) * auVar278[0xe] - (0xff < sVar59);
      pauVar180[3][9] = (0 < sVar60) * (sVar60 < 0x100) * auVar199[0xe] - (0xff < sVar60);
      pauVar180[3][10] = (0 < sVar61) * (sVar61 < 0x100) * auVar260[0xe] - (0xff < sVar61);
      pauVar180[3][0xb] = (0 < sVar62) * (sVar62 < 0x100) * auVar187[0xe] - (0xff < sVar62);
      pauVar180[3][0xc] = (0 < sVar63) * (sVar63 < 0x100) * auVar270[0xe] - (0xff < sVar63);
      pauVar180[3][0xd] = (0 < sVar64) * (sVar64 < 0x100) * auVar253[0xe] - (0xff < sVar64);
      pauVar180[3][0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar226[0xe] - (0xff < sVar65);
      pauVar180[3][0xf] = (0 < sVar66) * (sVar66 < 0x100) * auVar189[0xe] - (0xff < sVar66);
      pauVar180[4][0] = (0 < sVar67) * (sVar67 < 0x100) * auVar257[0] - (0xff < sVar67);
      pauVar180[4][1] = (uVar68 != 0) * (uVar68 < 0x100) * auVar241[0] - (0xff < uVar68);
      pauVar180[4][2] = (0 < sVar69) * (sVar69 < 0x100) * auVar244[0] - (0xff < sVar69);
      pauVar180[4][3] = (uVar70 != 0) * (uVar70 < 0x100) * auVar204[0] - (0xff < uVar70);
      pauVar180[4][4] = (0 < sVar71) * (sVar71 < 0x100) * auVar214[0] - (0xff < sVar71);
      pauVar180[4][5] = (0 < sVar72) * (sVar72 < 0x100) * auVar223[0] - (0xff < sVar72);
      pauVar180[4][6] = (0 < sVar73) * (sVar73 < 0x100) * auVar274[0] - (0xff < sVar73);
      pauVar180[4][7] = (uVar74 != 0) * (uVar74 < 0x100) * auVar201[0] - (0xff < uVar74);
      pauVar180[4][8] = (0 < sVar75) * (sVar75 < 0x100) * auVar257[2] - (0xff < sVar75);
      pauVar180[4][9] = (uVar76 != 0) * (uVar76 < 0x100) * auVar241[2] - (0xff < uVar76);
      pauVar180[4][10] = (0 < sVar77) * (sVar77 < 0x100) * auVar244[2] - (0xff < sVar77);
      pauVar180[4][0xb] = (uVar78 != 0) * (uVar78 < 0x100) * auVar204[2] - (0xff < uVar78);
      pauVar180[4][0xc] = (0 < sVar79) * (sVar79 < 0x100) * auVar214[2] - (0xff < sVar79);
      pauVar180[4][0xd] = (0 < sVar80) * (sVar80 < 0x100) * auVar223[2] - (0xff < sVar80);
      pauVar180[4][0xe] = (0 < sVar81) * (sVar81 < 0x100) * auVar274[2] - (0xff < sVar81);
      pauVar180[4][0xf] = (uVar82 != 0) * (uVar82 < 0x100) * auVar201[2] - (0xff < uVar82);
      auVar188._8_8_ =
           (undefined8)
           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((0 < sVar114) *
                                                                           (sVar114 < 0x100) *
                                                                           auVar201[10] -
                                                                           (0xff < sVar114),cVar11),
                                                                  (0 < sVar112) * (sVar112 < 0x100)
                                                                  * auVar223[10] - (0xff < sVar112))
                                                         ,(0 < sVar111) * (sVar111 < 0x100) *
                                                          auVar214[10] - (0xff < sVar111)),
                                                (0 < sVar110) * (sVar110 < 0x100) * auVar204[10] -
                                                (0xff < sVar110)),
                                       (0 < sVar109) * (sVar109 < 0x100) * auVar244[10] -
                                       (0xff < sVar109)),
                              (0 < sVar108) * (sVar108 < 0x100) * auVar241[10] - (0xff < sVar108)),
                     CONCAT11((0 < sVar107) * (sVar107 < 0x100) * auVar257[10] - (0xff < sVar107),
                              cVar11)) >> 8);
      auVar188[7] = (0 < sVar106) * (sVar106 < 0x100) * auVar201[8] - (0xff < sVar106);
      auVar188[6] = (0 < sVar105) * (sVar105 < 0x100) * auVar274[8] - (0xff < sVar105);
      auVar188[5] = (0 < sVar104) * (sVar104 < 0x100) * auVar223[8] - (0xff < sVar104);
      auVar188[4] = (0 < sVar103) * (sVar103 < 0x100) * auVar214[8] - (0xff < sVar103);
      auVar188[3] = (0 < sVar102) * (sVar102 < 0x100) * auVar204[8] - (0xff < sVar102);
      auVar188[2] = (0 < sVar101) * (sVar101 < 0x100) * auVar244[8] - (0xff < sVar101);
      auVar188[1] = (0 < sVar100) * (sVar100 < 0x100) * auVar241[8] - (0xff < sVar100);
      auVar188[0] = (0 < sVar99) * (sVar99 < 0x100) * auVar257[8] - (0xff < sVar99);
      pauVar180[5][0] = (0 < sVar83) * (sVar83 < 0x100) * auVar257[4] - (0xff < sVar83);
      pauVar180[5][1] = (uVar84 != 0) * (uVar84 < 0x100) * auVar241[4] - (0xff < uVar84);
      pauVar180[5][2] = (0 < sVar85) * (sVar85 < 0x100) * auVar244[4] - (0xff < sVar85);
      pauVar180[5][3] = (uVar86 != 0) * (uVar86 < 0x100) * auVar204[4] - (0xff < uVar86);
      pauVar180[5][4] = (0 < sVar87) * (sVar87 < 0x100) * auVar214[4] - (0xff < sVar87);
      pauVar180[5][5] = (0 < sVar88) * (sVar88 < 0x100) * auVar223[4] - (0xff < sVar88);
      pauVar180[5][6] = (0 < sVar89) * (sVar89 < 0x100) * auVar274[4] - (0xff < sVar89);
      pauVar180[5][7] = (uVar90 != 0) * (uVar90 < 0x100) * auVar201[4] - (0xff < uVar90);
      pauVar180[5][8] = (0 < sVar91) * (sVar91 < 0x100) * auVar257[6] - (0xff < sVar91);
      pauVar180[5][9] = (uVar92 != 0) * (uVar92 < 0x100) * auVar241[6] - (0xff < uVar92);
      pauVar180[5][10] = (0 < sVar93) * (sVar93 < 0x100) * auVar244[6] - (0xff < sVar93);
      pauVar180[5][0xb] = (uVar94 != 0) * (uVar94 < 0x100) * auVar204[6] - (0xff < uVar94);
      pauVar180[5][0xc] = (0 < sVar95) * (sVar95 < 0x100) * auVar214[6] - (0xff < sVar95);
      pauVar180[5][0xd] = (0 < sVar96) * (sVar96 < 0x100) * auVar223[6] - (0xff < sVar96);
      pauVar180[5][0xe] = (0 < sVar97) * (sVar97 < 0x100) * auVar274[6] - (0xff < sVar97);
      pauVar180[5][0xf] = (uVar98 != 0) * (uVar98 < 0x100) * auVar201[6] - (0xff < uVar98);
      pauVar180[6] = auVar188;
      pauVar180[7][0] = (0 < sVar115) * (sVar115 < 0x100) * auVar257[0xc] - (0xff < sVar115);
      pauVar180[7][1] = (0 < sVar116) * (sVar116 < 0x100) * auVar241[0xc] - (0xff < sVar116);
      pauVar180[7][2] = (0 < sVar117) * (sVar117 < 0x100) * auVar244[0xc] - (0xff < sVar117);
      pauVar180[7][3] = (0 < sVar118) * (sVar118 < 0x100) * auVar204[0xc] - (0xff < sVar118);
      pauVar180[7][4] = (0 < sVar119) * (sVar119 < 0x100) * auVar214[0xc] - (0xff < sVar119);
      pauVar180[7][5] = (0 < sVar120) * (sVar120 < 0x100) * auVar223[0xc] - (0xff < sVar120);
      pauVar180[7][6] = (0 < sVar121) * (sVar121 < 0x100) * auVar274[0xc] - (0xff < sVar121);
      pauVar180[7][7] = (0 < sVar122) * (sVar122 < 0x100) * auVar201[0xc] - (0xff < sVar122);
      pauVar180[7][8] = (0 < sVar123) * (sVar123 < 0x100) * auVar257[0xe] - (0xff < sVar123);
      pauVar180[7][9] = (0 < sVar124) * (sVar124 < 0x100) * auVar241[0xe] - (0xff < sVar124);
      pauVar180[7][10] = (0 < sVar125) * (sVar125 < 0x100) * auVar244[0xe] - (0xff < sVar125);
      pauVar180[7][0xb] = (0 < sVar126) * (sVar126 < 0x100) * auVar204[0xe] - (0xff < sVar126);
      pauVar180[7][0xc] = (0 < sVar127) * (sVar127 < 0x100) * auVar214[0xe] - (0xff < sVar127);
      pauVar180[7][0xd] = (0 < sVar128) * (sVar128 < 0x100) * auVar223[0xe] - (0xff < sVar128);
      pauVar180[7][0xe] = (0 < sVar129) * (sVar129 < 0x100) * auVar274[0xe] - (0xff < sVar129);
      pauVar180[7][0xf] = (0 < sVar130) * (sVar130 < 0x100) * auVar201[0xe] - (0xff < sVar130);
      pauVar180 = pauVar180 + 8;
      pauVar186 = ptr;
    } while (ptr != (undefined1 (*) [16])local_428);
    blake2b_long_isra_0(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),param_2,
                        *(undefined4 *)(param_1 + 8),ptr,0x400);
    OPENSSL_cleanse(local_828,0x400);
    OPENSSL_cleanse(ptr,0x400);
    if (*(int *)(param_1 + 100) == 0) {
      CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x68),(ulong)*(uint *)(param_1 + 0x74) << 10,
                        "providers/implementations/kdfs/argon2.c",0x312);
    }
    else {
      CRYPTO_secure_clear_free
                (*(undefined8 *)(param_1 + 0x68),(ulong)*(uint *)(param_1 + 0x74) << 10,
                 "providers/implementations/kdfs/argon2.c",0x30f);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * kdf_argon2d_new(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/kdfs/argon2.c",0x3a7);
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar4 = 0;
      puVar4[0x13] = 0;
      uVar2 = __LC22;
      uVar1 = __LC2;
      puVar7 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(((int)puVar4 -
                           (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) + 0xa0U >>
                          3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }
      puVar4[0x10] = uVar5;
      *(undefined4 *)(puVar4 + 1) = 0x40;
      *(undefined4 *)((long)puVar4 + 0x5c) = 0x13;
      *(undefined8 *)((long)puVar4 + 0x4c) = uVar1;
      *(undefined8 *)((long)puVar4 + 0x54) = uVar2;
      return puVar4;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/argon2.c",0x3a9,"kdf_argon2d_new");
    ERR_set_error(0x39,0xc0100,0);
  }
  return (undefined8 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * kdf_argon2id_new(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/kdfs/argon2.c",0x3cd);
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar4 = 0;
      puVar4[0x13] = 0;
      uVar2 = __LC22;
      uVar1 = __LC2;
      puVar7 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(((int)puVar4 -
                           (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) + 0xa0U >>
                          3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }
      puVar4[0x10] = uVar5;
      *(undefined4 *)(puVar4 + 1) = 0x40;
      *(undefined4 *)((long)puVar4 + 0x5c) = 0x13;
      *(undefined4 *)((long)puVar4 + 100) = 2;
      *(undefined8 *)((long)puVar4 + 0x4c) = uVar1;
      *(undefined8 *)((long)puVar4 + 0x54) = uVar2;
      return puVar4;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/argon2.c",0x3cf,"kdf_argon2id_new");
    ERR_set_error(0x39,0xc0100,0);
  }
  return (undefined8 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * kdf_argon2i_new(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/kdfs/argon2.c",0x3ba);
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar4 = 0;
      puVar4[0x13] = 0;
      uVar2 = __LC22;
      uVar1 = __LC2;
      puVar7 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(((int)puVar4 -
                           (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) + 0xa0U >>
                          3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }
      puVar4[0x10] = uVar5;
      *(undefined4 *)(puVar4 + 1) = 0x40;
      *(undefined4 *)((long)puVar4 + 0x5c) = 0x13;
      *(undefined4 *)((long)puVar4 + 100) = 1;
      *(undefined8 *)((long)puVar4 + 0x4c) = uVar1;
      *(undefined8 *)((long)puVar4 + 0x54) = uVar2;
      return puVar4;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/argon2.c",0x3bc,"kdf_argon2i_new");
    ERR_set_error(0x39,0xc0100,0);
  }
  return (undefined8 *)0x0;
}



void fill_block(ulong *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  ulong local_848 [257];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar27 = local_848;
  for (lVar12 = 0x80; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar27 = *param_2;
    param_2 = param_2 + 1;
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_848 + 0x80;
  puVar10 = local_848;
  do {
    uVar33 = *param_1;
    uVar3 = param_1[1];
    puVar5 = puVar10 + 2;
    param_1 = param_1 + 2;
    *puVar10 = uVar33 ^ *puVar10;
    puVar10[1] = uVar3 ^ puVar10[1];
    puVar10 = puVar5;
  } while (puVar27 != puVar5);
  puVar10 = local_848;
  puVar5 = puVar27;
  for (lVar12 = 0x80; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar5 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar10 = local_848;
  if (param_4 != 0) {
    puVar5 = puVar27;
    puVar18 = param_3;
    do {
      uVar33 = *puVar18;
      uVar3 = puVar18[1];
      puVar6 = puVar5 + 2;
      puVar18 = puVar18 + 2;
      *puVar5 = uVar33 ^ *puVar5;
      puVar5[1] = uVar3 ^ puVar5[1];
      puVar5 = puVar6;
    } while (local_848 + 0x100 != puVar6);
  }
  do {
    uVar25 = puVar10[4];
    uVar33 = *puVar10 + uVar25 + (*puVar10 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    uVar3 = (puVar10[0xc] ^ uVar33) >> 0x20;
    uVar28 = (puVar10[0xc] ^ uVar33) << 0x20 | uVar3;
    uVar3 = puVar10[8] + uVar28 + (puVar10[8] & 0xffffffff) * uVar3 * 2;
    uVar16 = (uVar25 ^ uVar3) >> 0x18;
    uVar7 = uVar16 | (uVar25 ^ uVar3) << 0x28;
    uVar33 = uVar33 + uVar7 + (uVar33 & 0xffffffff) * (uVar16 & 0xffffffff) * 2;
    uVar28 = uVar28 ^ uVar33;
    uVar25 = uVar28 >> 0x10;
    uVar29 = uVar25 | uVar28 << 0x30;
    uVar3 = uVar3 + uVar29 + (uVar25 & 0xffffffff) * (uVar3 & 0xffffffff) * 2;
    uVar28 = puVar10[5];
    uVar7 = uVar7 ^ uVar3;
    uVar1 = uVar7 << 1;
    uVar17 = (ulong)((long)uVar7 < 0);
    uVar8 = uVar1 | uVar17;
    uVar25 = puVar10[1] + uVar28 + (uVar28 & 0xffffffff) * (puVar10[1] & 0xffffffff) * 2;
    uVar16 = (puVar10[0xd] ^ uVar25) >> 0x20;
    uVar19 = (puVar10[0xd] ^ uVar25) << 0x20 | uVar16;
    uVar16 = puVar10[9] + uVar19 + uVar16 * (puVar10[9] & 0xffffffff) * 2;
    uVar7 = (uVar28 ^ uVar16) >> 0x18;
    uVar13 = uVar7 | (uVar28 ^ uVar16) << 0x28;
    uVar25 = uVar25 + uVar13 + (uVar7 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    uVar19 = uVar19 ^ uVar25;
    uVar28 = uVar19 >> 0x10;
    uVar20 = uVar28 | uVar19 << 0x30;
    uVar16 = uVar16 + uVar20 + (uVar28 & 0xffffffff) * (uVar16 & 0xffffffff) * 2;
    uVar19 = puVar10[6];
    uVar13 = uVar13 ^ uVar16;
    uVar32 = uVar13 << 1;
    uVar15 = (ulong)((long)uVar13 < 0);
    uVar14 = uVar32 | uVar15;
    uVar28 = puVar10[2] + uVar19 + (puVar10[2] & 0xffffffff) * (uVar19 & 0xffffffff) * 2;
    uVar7 = (puVar10[0xe] ^ uVar28) >> 0x20;
    uVar23 = (puVar10[0xe] ^ uVar28) << 0x20 | uVar7;
    uVar7 = puVar10[10] + uVar23 + (puVar10[10] & 0xffffffff) * uVar7 * 2;
    uVar13 = (uVar19 ^ uVar7) >> 0x18;
    uVar21 = uVar13 | (uVar19 ^ uVar7) << 0x28;
    uVar28 = uVar28 + uVar21 + (uVar28 & 0xffffffff) * (uVar13 & 0xffffffff) * 2;
    uVar23 = uVar23 ^ uVar28;
    uVar19 = uVar23 >> 0x10;
    uVar24 = uVar19 | uVar23 << 0x30;
    uVar7 = uVar7 + uVar24 + (uVar7 & 0xffffffff) * (uVar19 & 0xffffffff) * 2;
    uVar23 = puVar10[7];
    uVar21 = uVar21 ^ uVar7;
    uVar2 = uVar21 << 1;
    uVar21 = (ulong)((long)uVar21 < 0);
    uVar22 = uVar2 | uVar21;
    uVar19 = puVar10[3] + uVar23 + (puVar10[3] & 0xffffffff) * (uVar23 & 0xffffffff) * 2;
    uVar13 = (puVar10[0xf] ^ uVar19) >> 0x20;
    uVar31 = (puVar10[0xf] ^ uVar19) << 0x20 | uVar13;
    uVar13 = puVar10[0xb] + uVar31 + (puVar10[0xb] & 0xffffffff) * uVar13 * 2;
    uVar4 = (uVar23 ^ uVar13) >> 0x18;
    uVar9 = uVar4 | (uVar23 ^ uVar13) << 0x28;
    uVar19 = uVar19 + uVar9 + (uVar19 & 0xffffffff) * (uVar4 & 0xffffffff) * 2;
    uVar31 = uVar31 ^ uVar19;
    uVar23 = uVar31 >> 0x10;
    uVar31 = uVar23 | uVar31 << 0x30;
    uVar13 = uVar13 + uVar31 + (uVar13 & 0xffffffff) * (uVar23 & 0xffffffff) * 2;
    uVar9 = uVar9 ^ uVar13;
    uVar23 = uVar9 << 1;
    uVar4 = (ulong)((long)uVar9 < 0);
    uVar9 = uVar23 | uVar4;
    uVar33 = uVar33 + uVar14 + (uVar33 & 0xffffffff) * (uVar32 & 0xffffffff | uVar15) * 2;
    uVar31 = uVar31 ^ uVar33;
    uVar32 = uVar31 >> 0x20;
    uVar31 = uVar31 << 0x20 | uVar32;
    uVar7 = uVar7 + uVar31 + (uVar7 & 0xffffffff) * uVar32 * 2;
    uVar14 = uVar14 ^ uVar7;
    uVar32 = uVar14 >> 0x18;
    uVar15 = uVar32 | uVar14 << 0x28;
    uVar33 = uVar33 + uVar15 + (uVar32 & 0xffffffff) * (uVar33 & 0xffffffff) * 2;
    uVar31 = uVar31 ^ uVar33;
    *puVar10 = uVar33;
    uVar33 = uVar31 >> 0x10;
    uVar32 = uVar33 | uVar31 << 0x30;
    puVar10[0xf] = uVar32;
    uVar33 = uVar7 + uVar32 + (uVar33 & 0xffffffff) * (uVar7 & 0xffffffff) * 2;
    puVar10[10] = uVar33;
    uVar33 = uVar33 ^ uVar15;
    puVar10[5] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    uVar33 = uVar25 + uVar22 + (uVar25 & 0xffffffff) * (uVar2 & 0xffffffff | uVar21) * 2;
    uVar29 = uVar29 ^ uVar33;
    uVar25 = uVar29 >> 0x20;
    uVar32 = uVar29 << 0x20 | uVar25;
    uVar25 = uVar13 + uVar32 + (uVar13 & 0xffffffff) * uVar25 * 2;
    uVar22 = uVar22 ^ uVar25;
    uVar7 = uVar22 >> 0x18;
    uVar13 = uVar7 | uVar22 << 0x28;
    uVar33 = uVar33 + uVar13 + (uVar33 & 0xffffffff) * (uVar7 & 0xffffffff) * 2;
    puVar10[1] = uVar33;
    uVar33 = uVar33 ^ uVar32;
    uVar7 = uVar33 >> 0x10;
    uVar33 = uVar7 | uVar33 << 0x30;
    puVar10[0xc] = uVar33;
    uVar33 = uVar25 + uVar33 + (uVar7 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    puVar10[0xb] = uVar33;
    uVar33 = uVar33 ^ uVar13;
    puVar10[6] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    puVar5 = puVar10 + 0x10;
    uVar33 = uVar28 + uVar9 + (uVar23 & 0xffffffff | uVar4) * (uVar28 & 0xffffffff) * 2;
    uVar20 = uVar20 ^ uVar33;
    uVar25 = uVar20 >> 0x20;
    uVar7 = uVar20 << 0x20 | uVar25;
    uVar3 = uVar3 + uVar7 + uVar25 * (uVar3 & 0xffffffff) * 2;
    uVar9 = uVar9 ^ uVar3;
    uVar25 = uVar9 >> 0x18;
    uVar28 = uVar25 | uVar9 << 0x28;
    uVar33 = uVar33 + uVar28 + (uVar25 & 0xffffffff) * (uVar33 & 0xffffffff) * 2;
    puVar10[2] = uVar33;
    uVar33 = uVar33 ^ uVar7;
    uVar25 = uVar33 >> 0x10;
    uVar33 = uVar25 | uVar33 << 0x30;
    puVar10[0xd] = uVar33;
    uVar33 = uVar3 + uVar33 + (uVar25 & 0xffffffff) * (uVar3 & 0xffffffff) * 2;
    puVar10[8] = uVar33;
    uVar33 = uVar33 ^ uVar28;
    puVar10[7] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    uVar33 = uVar19 + uVar8 + (uVar1 & 0xffffffff | uVar17) * (uVar19 & 0xffffffff) * 2;
    uVar24 = uVar24 ^ uVar33;
    uVar3 = uVar24 >> 0x20;
    uVar28 = uVar24 << 0x20 | uVar3;
    uVar3 = uVar16 + uVar28 + uVar3 * (uVar16 & 0xffffffff) * 2;
    uVar8 = uVar8 ^ uVar3;
    uVar25 = uVar8 >> 0x18;
    uVar16 = uVar25 | uVar8 << 0x28;
    uVar33 = uVar33 + uVar16 + (uVar25 & 0xffffffff) * (uVar33 & 0xffffffff) * 2;
    puVar10[3] = uVar33;
    uVar33 = uVar33 ^ uVar28;
    uVar25 = uVar33 >> 0x10;
    uVar33 = uVar25 | uVar33 << 0x30;
    puVar10[0xe] = uVar33;
    uVar33 = uVar33 + uVar3 + (uVar25 & 0xffffffff) * (uVar3 & 0xffffffff) * 2;
    puVar10[9] = uVar33;
    uVar33 = uVar33 ^ uVar16;
    puVar10[4] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    puVar10 = puVar5;
  } while (puVar27 != puVar5);
  puVar10 = local_848;
  do {
    uVar25 = puVar10[0x20];
    uVar33 = *puVar10 + uVar25 + (*puVar10 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    uVar3 = (puVar10[0x60] ^ uVar33) >> 0x20;
    uVar28 = (puVar10[0x60] ^ uVar33) << 0x20 | uVar3;
    uVar3 = puVar10[0x40] + uVar28 + (puVar10[0x40] & 0xffffffff) * uVar3 * 2;
    uVar16 = (uVar25 ^ uVar3) >> 0x18;
    uVar7 = uVar16 | (uVar25 ^ uVar3) << 0x28;
    uVar33 = uVar33 + uVar7 + (uVar33 & 0xffffffff) * (uVar16 & 0xffffffff) * 2;
    uVar28 = uVar28 ^ uVar33;
    uVar25 = uVar28 >> 0x10;
    uVar31 = uVar25 | uVar28 << 0x30;
    uVar3 = uVar3 + uVar31 + (uVar3 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    uVar28 = puVar10[0x21];
    uVar7 = uVar7 ^ uVar3;
    uVar1 = uVar7 << 1;
    uVar15 = (ulong)((long)uVar7 < 0);
    uVar20 = uVar1 | uVar15;
    uVar25 = puVar10[1] + uVar28 + (puVar10[1] & 0xffffffff) * (uVar28 & 0xffffffff) * 2;
    uVar16 = (puVar10[0x61] ^ uVar25) >> 0x20;
    uVar19 = (puVar10[0x61] ^ uVar25) << 0x20 | uVar16;
    uVar16 = puVar10[0x41] + uVar19 + (puVar10[0x41] & 0xffffffff) * uVar16 * 2;
    uVar7 = (uVar28 ^ uVar16) >> 0x18;
    uVar13 = uVar7 | (uVar28 ^ uVar16) << 0x28;
    uVar25 = uVar25 + uVar13 + (uVar25 & 0xffffffff) * (uVar7 & 0xffffffff) * 2;
    uVar19 = uVar19 ^ uVar25;
    uVar28 = uVar19 >> 0x10;
    uVar9 = uVar28 | uVar19 << 0x30;
    uVar16 = uVar16 + uVar9 + (uVar16 & 0xffffffff) * (uVar28 & 0xffffffff) * 2;
    uVar19 = puVar10[0x30];
    uVar13 = uVar13 ^ uVar16;
    uVar32 = uVar13 << 1;
    uVar21 = (ulong)((long)uVar13 < 0);
    uVar24 = uVar32 | uVar21;
    uVar28 = puVar10[0x10] + uVar19 + (uVar19 & 0xffffffff) * (puVar10[0x10] & 0xffffffff) * 2;
    uVar7 = (puVar10[0x70] ^ uVar28) >> 0x20;
    uVar23 = (puVar10[0x70] ^ uVar28) << 0x20 | uVar7;
    uVar7 = puVar10[0x50] + uVar23 + uVar7 * (puVar10[0x50] & 0xffffffff) * 2;
    uVar13 = (uVar19 ^ uVar7) >> 0x18;
    uVar17 = uVar13 | (uVar19 ^ uVar7) << 0x28;
    uVar28 = uVar28 + uVar17 + (uVar13 & 0xffffffff) * (uVar28 & 0xffffffff) * 2;
    uVar23 = uVar23 ^ uVar28;
    uVar19 = uVar23 >> 0x10;
    uVar29 = uVar19 | uVar23 << 0x30;
    uVar7 = uVar7 + uVar29 + (uVar19 & 0xffffffff) * (uVar7 & 0xffffffff) * 2;
    uVar23 = puVar10[0x31];
    uVar17 = uVar17 ^ uVar7;
    uVar2 = uVar17 << 1;
    uVar4 = (ulong)((long)uVar17 < 0);
    uVar14 = uVar2 | uVar4;
    uVar19 = puVar10[0x11] + uVar23 + (uVar23 & 0xffffffff) * (puVar10[0x11] & 0xffffffff) * 2;
    uVar13 = (puVar10[0x71] ^ uVar19) >> 0x20;
    uVar22 = (puVar10[0x71] ^ uVar19) << 0x20 | uVar13;
    uVar13 = puVar10[0x51] + uVar22 + uVar13 * (puVar10[0x51] & 0xffffffff) * 2;
    uVar17 = (uVar23 ^ uVar13) >> 0x18;
    uVar8 = uVar17 | (uVar23 ^ uVar13) << 0x28;
    uVar19 = uVar19 + uVar8 + (uVar17 & 0xffffffff) * (uVar19 & 0xffffffff) * 2;
    uVar22 = uVar22 ^ uVar19;
    uVar23 = uVar22 >> 0x10;
    uVar34 = uVar23 | uVar22 << 0x30;
    uVar13 = uVar13 + uVar34 + (uVar23 & 0xffffffff) * (uVar13 & 0xffffffff) * 2;
    uVar8 = uVar8 ^ uVar13;
    uVar17 = uVar8 << 1;
    uVar8 = (ulong)((long)uVar8 < 0);
    uVar22 = uVar17 | uVar8;
    uVar23 = uVar33 + uVar24 + (uVar32 & 0xffffffff | uVar21) * (uVar33 & 0xffffffff) * 2;
    uVar34 = uVar34 ^ uVar23;
    uVar33 = uVar34 >> 0x20;
    uVar21 = uVar34 << 0x20 | uVar33;
    uVar33 = uVar7 + uVar21 + uVar33 * (uVar7 & 0xffffffff) * 2;
    uVar24 = uVar24 ^ uVar33;
    uVar7 = uVar24 >> 0x18;
    uVar32 = uVar7 | uVar24 << 0x28;
    uVar7 = uVar23 + uVar32 + (uVar7 & 0xffffffff) * (uVar23 & 0xffffffff) * 2;
    uVar21 = uVar21 ^ uVar7;
    *puVar10 = uVar7;
    uVar7 = uVar21 >> 0x10;
    uVar23 = uVar7 | uVar21 << 0x30;
    puVar10[0x71] = uVar23;
    uVar33 = uVar33 + uVar23 + (uVar33 & 0xffffffff) * (uVar7 & 0xffffffff) * 2;
    puVar10[0x50] = uVar33;
    uVar33 = uVar33 ^ uVar32;
    puVar10[0x21] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    uVar25 = uVar25 + uVar14 + (uVar2 & 0xffffffff | uVar4) * (uVar25 & 0xffffffff) * 2;
    uVar31 = uVar31 ^ uVar25;
    uVar33 = uVar31 >> 0x20;
    uVar23 = uVar31 << 0x20 | uVar33;
    uVar33 = uVar13 + uVar23 + uVar33 * (uVar13 & 0xffffffff) * 2;
    uVar14 = uVar14 ^ uVar33;
    uVar7 = uVar14 >> 0x18;
    uVar13 = uVar7 | uVar14 << 0x28;
    uVar25 = uVar25 + uVar13 + (uVar7 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    puVar10[1] = uVar25;
    uVar25 = uVar25 ^ uVar23;
    uVar7 = uVar25 >> 0x10;
    uVar25 = uVar7 | uVar25 << 0x30;
    puVar10[0x60] = uVar25;
    uVar33 = uVar33 + uVar25 + (uVar33 & 0xffffffff) * (uVar7 & 0xffffffff) * 2;
    puVar10[0x51] = uVar33;
    uVar33 = uVar33 ^ uVar13;
    puVar10[0x30] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    puVar5 = puVar10 + 2;
    uVar33 = uVar28 + uVar22 + (uVar28 & 0xffffffff) * (uVar17 & 0xffffffff | uVar8) * 2;
    uVar9 = uVar9 ^ uVar33;
    uVar25 = uVar9 >> 0x20;
    uVar7 = uVar9 << 0x20 | uVar25;
    uVar3 = uVar3 + uVar7 + (uVar3 & 0xffffffff) * uVar25 * 2;
    uVar22 = uVar22 ^ uVar3;
    uVar25 = uVar22 >> 0x18;
    uVar28 = uVar25 | uVar22 << 0x28;
    uVar33 = uVar33 + uVar28 + (uVar33 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    puVar10[0x10] = uVar33;
    uVar33 = uVar33 ^ uVar7;
    uVar25 = uVar33 >> 0x10;
    uVar33 = uVar25 | uVar33 << 0x30;
    puVar10[0x61] = uVar33;
    uVar33 = uVar3 + uVar33 + (uVar3 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    puVar10[0x40] = uVar33;
    uVar33 = uVar33 ^ uVar28;
    puVar10[0x31] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    uVar33 = uVar19 + uVar20 + (uVar19 & 0xffffffff) * (uVar1 & 0xffffffff | uVar15) * 2;
    uVar29 = uVar29 ^ uVar33;
    uVar3 = uVar29 >> 0x20;
    uVar28 = uVar29 << 0x20 | uVar3;
    uVar3 = uVar16 + uVar28 + (uVar16 & 0xffffffff) * uVar3 * 2;
    uVar20 = uVar20 ^ uVar3;
    uVar25 = uVar20 >> 0x18;
    uVar16 = uVar25 | uVar20 << 0x28;
    uVar33 = uVar33 + uVar16 + (uVar33 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    puVar10[0x11] = uVar33;
    uVar33 = uVar33 ^ uVar28;
    uVar25 = uVar33 >> 0x10;
    uVar33 = uVar25 | uVar33 << 0x30;
    puVar10[0x70] = uVar33;
    uVar33 = uVar33 + uVar3 + (uVar3 & 0xffffffff) * (uVar25 & 0xffffffff) * 2;
    puVar10[0x41] = uVar33;
    uVar33 = uVar33 ^ uVar16;
    puVar10[0x20] = uVar33 << 1 | (ulong)((long)uVar33 < 0);
    puVar10 = puVar5;
  } while (puVar5 != local_848 + 0x10);
  *param_3 = local_848[0x80];
  param_3[0x7f] = local_848[0xff];
  lVar12 = (long)param_3 - (long)((ulong)(param_3 + 1) & 0xfffffffffffffff8);
  lVar11 = 0;
  puVar26 = (undefined8 *)((long)puVar27 - lVar12);
  puVar30 = (undefined8 *)((ulong)(param_3 + 1) & 0xfffffffffffffff8);
  for (uVar33 = (ulong)((int)lVar12 + 0x400U >> 3); uVar33 != 0; uVar33 = uVar33 - 1) {
    *puVar30 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar30 = puVar30 + 1;
  }
  do {
    uVar3 = ((ulong *)((long)param_3 + lVar11))[1];
    uVar33 = *(ulong *)((long)local_848 + lVar11 + 8);
    *(ulong *)((long)param_3 + lVar11) =
         *(ulong *)((long)param_3 + lVar11) ^ *(ulong *)((long)local_848 + lVar11);
    ((ulong *)((long)param_3 + lVar11))[1] = uVar3 ^ uVar33;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x400);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void fill_segment(long param_1,uint param_2,uint param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  ulong local_c48 [128];
  ulong local_848 [4];
  ulong local_828;
  ulong local_820;
  long local_818;
  undefined8 local_448 [129];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = local_848;
  for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  if (param_1 == 0) goto LAB_00102630;
  bVar19 = param_2 == 0;
  uVar13 = *(uint *)(param_1 + 100);
  uVar16 = (ulong)param_3;
  bVar20 = param_4 == 0;
  bVar5 = bVar20 && bVar19;
  if (uVar13 == 1) {
LAB_001023dc:
    puVar10 = local_448;
    for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    puVar11 = local_848;
    for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_848[0] = (ulong)param_2;
    local_848[1] = uVar16;
    local_848[2] = (ulong)param_4;
    local_848[3] = (ulong)*(uint *)(param_1 + 0x74);
    local_828 = (ulong)*(uint *)(param_1 + 0x70);
    local_820 = (ulong)uVar13;
    if (bVar5) {
LAB_00102773:
      local_818 = 1;
      fill_block(local_448,local_848,local_c48,0);
      fill_block(local_448,local_c48,local_c48,0);
      goto LAB_00102668;
    }
LAB_0010244f:
    bVar20 = false;
    uVar18 = 0;
  }
  else {
    if (uVar13 == 2) {
      if ((param_4 < 2) && (bVar19)) goto LAB_001023dc;
      if (!bVar20 || !bVar19) goto LAB_0010244f;
      goto LAB_00102773;
    }
    if (!bVar20 || !bVar19) goto LAB_0010244f;
LAB_00102668:
    bVar20 = true;
    bVar19 = true;
    uVar18 = 2;
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  uVar15 = *(uint *)(param_1 + 0x78);
  uVar17 = uVar2 * param_3 + param_4 * uVar15 + uVar18;
  uVar3 = uVar17 - 1;
  if (uVar17 % uVar2 == 0) {
    uVar3 = (uVar17 - 1) + uVar2;
  }
  if (uVar18 < uVar15) {
    do {
      uVar4 = uVar3 + 1;
      if (uVar17 % uVar2 == 1) {
        uVar3 = uVar17 - 1;
        uVar4 = uVar17;
      }
      if ((uVar13 == 1) || (((uVar13 == 2 && (param_4 < 2)) && (bVar19)))) {
        if ((uVar18 & 0x7f) == 0) {
          local_818 = local_818 + 1;
          fill_block(local_448,local_848,local_c48,0);
          fill_block(local_448,local_c48,local_c48,0);
        }
        lVar7 = *(long *)(param_1 + 0x68);
        uVar8 = local_848[(ulong)(uVar18 & 0x7f) - 0x80];
        puVar11 = (ulong *)(lVar7 + (ulong)uVar3 * 0x400);
      }
      else {
        lVar7 = *(long *)(param_1 + 0x68);
        puVar11 = (ulong *)(lVar7 + (ulong)uVar3 * 0x400);
        uVar8 = *puVar11;
      }
      if (bVar20) {
        uVar9 = uVar16;
        if (param_2 != 0) {
LAB_001024e9:
          uVar13 = ((uVar18 - 1) + uVar2) - uVar15;
          uVar9 = uVar16;
          goto LAB_001024f1;
        }
LAB_001026a0:
        uVar14 = (ulong)(uVar18 - 1);
        uVar6 = 0;
      }
      else {
        uVar9 = (uVar8 >> 0x20) % (ulong)*(uint *)(param_1 + 0x54);
        if (param_2 == 0) {
          if (bVar5) goto LAB_001026a0;
          iVar12 = param_4 * uVar15;
          if (uVar9 == uVar16) {
            uVar14 = (ulong)((uVar18 - 1) + iVar12);
            uVar6 = 0;
            uVar9 = uVar16;
          }
          else {
            uVar14 = (ulong)(iVar12 - (uint)(uVar18 == 0));
            uVar6 = 0;
          }
        }
        else {
          if (uVar9 == uVar16) goto LAB_001024e9;
          uVar13 = (uVar2 - uVar15) - (uint)(uVar18 == 0);
LAB_001024f1:
          uVar14 = (ulong)uVar13;
          uVar6 = 0;
          if (param_4 != 3) {
            uVar6 = (ulong)((param_4 + 1) * uVar15);
          }
        }
      }
      lVar1 = lVar7 + (((uVar6 + ((int)uVar14 - 1)) -
                       (((uVar8 & 0xffffffff) * (uVar8 & 0xffffffff) >> 0x20) * uVar14 >> 0x20)) %
                       (ulong)uVar2 + uVar2 * uVar9) * 0x400;
      lVar7 = (ulong)uVar17 * 0x400 + lVar7;
      if (*(int *)(param_1 + 0x5c) == 0x10) {
        fill_block(puVar11,lVar1,lVar7,0);
      }
      else {
        fill_block(puVar11,lVar1,lVar7,param_2 != 0);
      }
      uVar15 = *(uint *)(param_1 + 0x78);
      uVar18 = uVar18 + 1;
      uVar17 = uVar17 + 1;
      if (uVar15 <= uVar18) break;
      uVar2 = *(uint *)(param_1 + 0x7c);
      uVar13 = *(uint *)(param_1 + 100);
      uVar3 = uVar4;
    } while( true );
  }
LAB_00102630:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 fill_segment_thr(undefined4 *param_1)

{
  fill_segment(*(undefined8 *)(param_1 + 4),*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return 0;
}



undefined8 kdf_argon2_derive(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  long lVar5;
  EVP_MD_CTX *ctx;
  long *ptr;
  undefined8 *ptr_00;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined4 uVar11;
  undefined1 local_f8 [76];
  uint local_ac;
  undefined4 local_a8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uchar local_88 [64];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if ((iVar3 != 0) && (iVar3 = kdf_argon2_set_ctx_params(param_1,param_4), iVar3 != 0)) {
    if (*(long *)(param_1 + 0x90) == 0) {
      lVar5 = EVP_MAC_fetch(*(undefined8 *)(param_1 + 0x80),"blake2bmac",
                            *(undefined8 *)(param_1 + 0x98));
      *(long *)(param_1 + 0x90) = lVar5;
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/argon2.c",0x404,"kdf_argon2_derive");
        ERR_set_error(0x39,0x96,"cannot fetch blake2bmac");
        goto LAB_0010282d;
      }
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      lVar5 = EVP_MD_fetch(*(undefined8 *)(param_1 + 0x80),"blake2b512",
                           *(undefined8 *)(param_1 + 0x98));
      *(long *)(param_1 + 0x88) = lVar5;
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/argon2.c",0x40c,"kdf_argon2_derive");
        ERR_set_error(0x39,0x81,"cannot fetch blake2b512");
        goto LAB_0010282d;
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/argon2.c",0x412,"kdf_argon2_derive");
      ERR_set_error(0x39,0x83,0);
    }
    else if (*(uint *)(param_1 + 8) == param_3) {
LAB_001028d2:
      if (*(uint *)(param_1 + 100) < 3) {
        uVar8 = *(uint *)(param_1 + 0x58);
        if (uVar8 < 2) {
          uVar8 = *(uint *)(param_1 + 0x54);
LAB_001028ee:
          if (*(uint *)(param_1 + 0x50) < uVar8 * 8) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c",0x440,"kdf_argon2_derive");
            ERR_set_error(0x39,0xeb,
                          "m_cost must be greater or equal than 8 times the number of lanes");
          }
          else {
            uVar4 = *(uint *)(param_1 + 0x50) / (uVar8 * 4);
            *(undefined8 *)(param_1 + 0x68) = 0;
            uVar8 = uVar8 * 4 * uVar4;
            lVar5 = (ulong)uVar8 << 10;
            *(ulong *)(param_1 + 0x70) = CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x4c));
            *(ulong *)(param_1 + 0x78) = CONCAT44(uVar4 * 4,uVar4);
            if (*(int *)(param_1 + 100) == 0) {
              lVar5 = CRYPTO_zalloc(lVar5,"providers/implementations/kdfs/argon2.c",0x2e3);
            }
            else {
              lVar5 = CRYPTO_secure_zalloc(lVar5,"providers/implementations/kdfs/argon2.c",0x2e0);
            }
            *(long *)(param_1 + 0x68) = lVar5;
            if (lVar5 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/argon2.c",0x2e7,"initialize");
              ERR_set_error(0x39,0xeb,"cannot allocate required memory");
            }
            else {
              local_f8._0_16_ = *(undefined1 (*) [16])(param_1 + 0x48);
              local_a8[1] = *(undefined4 *)(param_1 + 8);
              local_90 = *(undefined4 *)(param_1 + 0x18);
              uVar11 = SUB164(local_f8._0_16_,4);
              local_a8[2] = SUB164(local_f8._0_16_,8);
              local_a8[0] = SUB164(local_f8._0_16_,0xc);
              local_98 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                                  (int)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20));
              local_a8[3] = uVar11;
              ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
              if ((ctx != (EVP_MD_CTX *)0x0) &&
                 (iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(param_1 + 0x88),(ENGINE *)0x0),
                 iVar3 == 1)) {
                local_ac = 0;
                while (local_8c = uVar11, iVar3 = EVP_DigestUpdate(ctx,&local_8c,4), iVar3 == 1) {
                  local_ac = local_ac + 1;
                  if (6 < local_ac) {
                    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
                      iVar3 = EVP_DigestUpdate(ctx,*(void **)(param_1 + 0x10),
                                               (ulong)*(uint *)(param_1 + 0x18));
                      if (iVar3 != 1) break;
                      if (*(int *)(param_1 + 0x60) != 0) {
                        OPENSSL_cleanse(*(void **)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x18))
                        ;
                        *(undefined4 *)(param_1 + 0x18) = 0;
                      }
                    }
                    local_8c = *(undefined4 *)(param_1 + 0x28);
                    iVar3 = EVP_DigestUpdate(ctx,&local_8c,4);
                    if ((iVar3 != 1) ||
                       ((*(void **)(param_1 + 0x20) != (void *)0x0 &&
                        (iVar3 = EVP_DigestUpdate(ctx,*(void **)(param_1 + 0x20),
                                                  (ulong)*(uint *)(param_1 + 0x28)), iVar3 != 1))))
                    break;
                    local_8c = *(undefined4 *)(param_1 + 0x38);
                    iVar3 = EVP_DigestUpdate(ctx,&local_8c,4);
                    if (iVar3 != 1) break;
                    if (*(void **)(param_1 + 0x30) != (void *)0x0) {
                      iVar3 = EVP_DigestUpdate(ctx,*(void **)(param_1 + 0x30),
                                               (ulong)*(uint *)(param_1 + 0x38));
                      if (iVar3 != 1) break;
                      if (*(int *)(param_1 + 0x60) != 0) {
                        OPENSSL_cleanse(*(void **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38))
                        ;
                        *(undefined4 *)(param_1 + 0x38) = 0;
                      }
                    }
                    local_8c = *(undefined4 *)(param_1 + 0x48);
                    iVar3 = EVP_DigestUpdate(ctx,&local_8c,4);
                    if ((iVar3 == 1) &&
                       ((*(void **)(param_1 + 0x40) == (void *)0x0 ||
                        (iVar3 = EVP_DigestUpdate(ctx,*(void **)(param_1 + 0x40),
                                                  (ulong)*(uint *)(param_1 + 0x48)), iVar3 == 1))))
                    {
                      local_ac = 0x40;
                      EVP_DigestFinal_ex(ctx,local_88,&local_ac);
                    }
                    break;
                  }
                  uVar11 = local_a8[local_ac];
                }
              }
              EVP_MD_CTX_free(ctx);
              OPENSSL_cleanse(local_48,8);
              fill_first_blocks(local_88,param_1);
              OPENSSL_cleanse(local_88,0x48);
              if (*(int *)(param_1 + 0x58) == 1) {
                uVar8 = 0;
                if (*(int *)(param_1 + 0x70) != 0) {
                  do {
                    iVar3 = 0;
                    do {
                      uVar4 = 0;
                      if (*(int *)(param_1 + 0x54) != 0) {
                        do {
                          fill_segment(param_1,uVar8,uVar4,iVar3);
                          uVar4 = uVar4 + 1;
                        } while (uVar4 < *(uint *)(param_1 + 0x54));
                      }
                      iVar3 = iVar3 + 1;
                    } while (iVar3 != 4);
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < *(uint *)(param_1 + 0x70));
                }
LAB_00102ecd:
                finalize(param_1,param_2);
                uVar7 = 1;
                goto LAB_0010282f;
              }
              ptr = (long *)CRYPTO_zalloc((ulong)*(uint *)(param_1 + 0x54) << 3,
                                          "providers/implementations/kdfs/argon2.c",0x237);
              ptr_00 = (undefined8 *)
                       CRYPTO_zalloc((ulong)*(uint *)(param_1 + 0x54) * 0x18,
                                     "providers/implementations/kdfs/argon2.c",0x238);
              if (ptr == (long *)0x0) {
                if (ptr_00 != (undefined8 *)0x0) {
                  CRYPTO_free(ptr_00);
                }
              }
              else if (ptr_00 != (undefined8 *)0x0) {
                if (*(int *)(param_1 + 0x70) != 0) {
                  uVar8 = 0;
                  do {
                    auVar2._12_4_ = 0;
                    auVar2._0_12_ = local_f8._4_12_;
                    local_f8._0_16_ = auVar2 << 0x20;
                    do {
                      if (*(int *)(param_1 + 0x54) != 0) {
                        uVar4 = 0;
                        plVar9 = ptr;
                        puVar10 = ptr_00;
                        do {
                          if (*(uint *)(param_1 + 0x58) <= uVar4) {
                            iVar3 = ossl_crypto_thread_join
                                              (ptr[uVar4 - *(uint *)(param_1 + 0x58)],0);
                            if ((iVar3 == 0) ||
                               (iVar3 = ossl_crypto_thread_clean
                                                  (ptr[uVar4 - *(int *)(param_1 + 0x58)]),
                               iVar3 == 0)) goto LAB_00102c18;
                            *plVar9 = 0;
                          }
                          puVar10[2] = param_1;
                          uVar7 = *(undefined8 *)(param_1 + 0x80);
                          *puVar10 = CONCAT44(uVar4,uVar8);
                          puVar10[1] = (ulong)local_f8[0];
                          lVar5 = ossl_crypto_thread_start(uVar7,fill_segment_thr,puVar10);
                          *plVar9 = lVar5;
                          if (lVar5 == 0) {
                            if (uVar4 == 0) goto LAB_00102c18;
                            plVar9 = ptr;
                            goto LAB_00102c06;
                          }
                          uVar1 = *(uint *)(param_1 + 0x54);
                          uVar4 = uVar4 + 1;
                          plVar9 = plVar9 + 1;
                          puVar10 = puVar10 + 3;
                        } while (uVar4 < uVar1);
                        uVar4 = uVar1 - *(int *)(param_1 + 0x58);
                        if (uVar4 < uVar1) {
                          plVar9 = ptr + uVar4;
                          do {
                            iVar3 = ossl_crypto_thread_join(*plVar9,0);
                            if ((iVar3 == 0) ||
                               (iVar3 = ossl_crypto_thread_clean(*plVar9), iVar3 == 0))
                            goto LAB_00102c18;
                            *plVar9 = 0;
                            uVar4 = uVar4 + 1;
                            plVar9 = plVar9 + 1;
                          } while (uVar4 < *(uint *)(param_1 + 0x54));
                        }
                      }
                      iVar3 = local_f8._0_4_ + 1;
                      local_f8._0_4_ = iVar3;
                    } while (iVar3 != 4);
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < *(uint *)(param_1 + 0x70));
                }
                CRYPTO_free(ptr_00);
                CRYPTO_free(ptr);
                goto LAB_00102ecd;
              }
              if (ptr != (long *)0x0) goto LAB_00102c25;
            }
          }
        }
        else {
          uVar6 = ossl_get_avail_threads(*(undefined8 *)(param_1 + 0x80));
          if (uVar6 < uVar8) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c",0x431,"kdf_argon2_derive");
            uVar7 = ossl_get_avail_threads(*(undefined8 *)(param_1 + 0x80));
            ERR_set_error(0x39,0xea,"requested %u threads, available: %u",
                          *(undefined4 *)(param_1 + 0x58),uVar7);
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x54);
            if (*(uint *)(param_1 + 0x58) <= uVar8) goto LAB_001028ee;
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c",0x438,"kdf_argon2_derive");
            ERR_set_error(0x39,0xea,"requested more threads (%u) than lanes (%u)",
                          *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x54));
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/argon2.c",0x425,"kdf_argon2_derive");
        ERR_set_error(0x39,0x7d,"invalid Argon2 type");
      }
    }
    else {
      lVar5 = OSSL_PARAM_locate(param_4,&_LC0);
      if (lVar5 == 0) {
        if (3 < (uint)param_3) {
          *(uint *)(param_1 + 8) = (uint)param_3;
          goto LAB_001028d2;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/argon2.c",0x4c7,
                      "kdf_argon2_ctx_set_out_length");
        ERR_set_error(0x39,0xd9,"min: %u",4);
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/argon2.c",0x418,"kdf_argon2_derive");
        ERR_set_error(0x39,0x6a,0);
      }
    }
  }
  goto LAB_0010282d;
  while( true ) {
    *plVar9 = 0;
    plVar9 = plVar9 + 1;
    if (plVar9 == ptr + uVar4) break;
LAB_00102c06:
    iVar3 = ossl_crypto_thread_join(*plVar9,0);
    if ((iVar3 == 0) || (iVar3 = ossl_crypto_thread_clean(*plVar9), iVar3 == 0)) break;
  }
LAB_00102c18:
  CRYPTO_free(ptr_00);
LAB_00102c25:
  CRYPTO_free(ptr);
LAB_0010282d:
  uVar7 = 0;
LAB_0010282f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


