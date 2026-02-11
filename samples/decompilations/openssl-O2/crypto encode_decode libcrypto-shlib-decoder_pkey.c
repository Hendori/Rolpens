
void lh_DECODER_CACHE_ENTRY_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_DECODER_CACHE_ENTRY_cfn_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_DECODER_CACHE_ENTRY_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_DECODER_CACHE_ENTRY_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



ulong decoder_cache_entry_hash(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0x2321;
  if (param_1[4] != 0) {
    lVar2 = ossl_lh_strcasehash();
    lVar2 = (lVar2 + 0x187) * 0x17;
  }
  if (param_1[1] != 0) {
    lVar1 = ossl_lh_strcasehash();
    lVar2 = lVar2 + lVar1;
  }
  lVar2 = lVar2 * 0x17;
  if (*param_1 != 0) {
    lVar1 = ossl_lh_strcasehash();
    lVar2 = lVar2 + lVar1;
  }
  uVar3 = lVar2 * 0x17;
  if (param_1[2] != 0) {
    lVar2 = ossl_lh_strcasehash();
    uVar3 = uVar3 + lVar2;
  }
  return (long)(int)param_1[3] ^ uVar3;
}



undefined8 keymgmt_dup(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_KEYMGMT_up_ref();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



bool decoder_construct_pkey(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_58;
  long local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = OSSL_DECODER_INSTANCE_get_decoder();
  uVar6 = OSSL_DECODER_INSTANCE_get_decoder_ctx(param_1);
  lVar7 = OSSL_DECODER_get0_provider(lVar5);
  lVar8 = OSSL_PARAM_locate_const(param_2,"data-type");
  if (lVar8 == 0) {
LAB_001001b6:
    lVar8 = OSSL_PARAM_locate_const(param_2,"reference");
    if ((lVar8 != 0) && (*(int *)(lVar8 + 8) == 5)) {
      uVar1 = *(undefined8 *)(lVar8 + 0x10);
      uVar2 = *(undefined8 *)(lVar8 + 0x18);
      iVar3 = OPENSSL_sk_num(param_3[3]);
      if (0 < iVar3) {
        iVar10 = 0;
        do {
          lVar8 = OPENSSL_sk_value(param_3[3],iVar10);
          lVar9 = EVP_KEYMGMT_get0_provider(lVar8);
          if (((lVar7 == lVar9) && (iVar4 = evp_keymgmt_has_load(lVar8), iVar4 != 0)) &&
             (iVar4 = EVP_KEYMGMT_is_a(lVar8,param_3[4]), iVar4 != 0)) {
            if (iVar10 < iVar3) {
              iVar3 = EVP_KEYMGMT_up_ref(lVar8);
              if (iVar3 == 0) goto LAB_0010016f;
              if (lVar8 != 0) goto LAB_0010029c;
              goto LAB_0010025e;
            }
            break;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar3);
      }
      lVar8 = EVP_KEYMGMT_fetch(*param_3,param_3[4],param_3[1]);
      if (lVar8 != 0) {
        lVar9 = EVP_KEYMGMT_get0_provider(lVar8);
LAB_0010029c:
        if (lVar7 == lVar9) {
          lVar5 = evp_keymgmt_load(lVar8,uVar1,uVar2);
        }
        else {
          local_48 = *(int *)(param_3 + 2);
          local_50 = 0;
          if (local_48 == 0) {
            local_48 = 0x87;
          }
          local_58 = lVar8;
          (**(code **)(lVar5 + 0x70))(uVar6,uVar1,uVar2,&evp_keymgmt_util_try_import,&local_58);
          lVar5 = local_50;
        }
        if (lVar5 == 0) {
          ossl_decoder_ctx_set_harderr(param_3[6]);
          lVar7 = 0;
        }
        else {
          lVar7 = evp_keymgmt_util_make_pkey(lVar8,lVar5);
          if (lVar7 == 0) {
            evp_keymgmt_freedata(lVar8,lVar5);
          }
        }
        *(long *)param_3[5] = lVar7;
        EVP_KEYMGMT_free(lVar8);
      }
LAB_0010025e:
      bVar11 = *(long *)param_3[5] != 0;
      goto LAB_00100171;
    }
  }
  else {
    local_58 = 0;
    iVar3 = OSSL_PARAM_get_utf8_string(lVar8,&local_58,0);
    if (iVar3 != 0) {
      CRYPTO_free((void *)param_3[4]);
      param_3[4] = local_58;
      goto LAB_001001b6;
    }
  }
LAB_0010016f:
  bVar11 = false;
LAB_00100171:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}



void decoder_cache_entry_free_part_0(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  CRYPTO_free((void *)param_1[2]);
  CRYPTO_free((void *)param_1[4]);
  OSSL_DECODER_CTX_free(param_1[5]);
  CRYPTO_free(param_1);
  return;
}



void decoder_cache_entry_free(long param_1)

{
  if (param_1 != 0) {
    decoder_cache_entry_free_part_0();
    return;
  }
  return;
}



void collect_keymgmt(long param_1,undefined8 *param_2)

{
  char *__s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2[2] == 0) goto LAB_00100430;
  if (*(char *)((long)param_2 + 0x25) == '\0') {
    uVar4 = ossl_namemap_stored(*param_2);
    iVar1 = ossl_namemap_name2num(uVar4,param_2[2]);
    *(int *)(param_2 + 3) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)((long)param_2 + 0x25) = 1;
      return;
    }
    __s1 = (char *)param_2[2];
    iVar2 = strcmp(__s1,"id-ecPublicKey");
    if ((iVar2 == 0) || (iVar2 = strcmp(__s1,"1.2.840.10045.2.1"), iVar2 == 0)) {
      uVar3 = ossl_namemap_name2num(uVar4,&_LC5);
      *(undefined1 *)((long)param_2 + 0x25) = 1;
      iVar1 = *(int *)(param_2 + 3);
      *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
      goto LAB_00100412;
    }
    *(undefined1 *)((long)param_2 + 0x25) = 1;
  }
  else {
    iVar1 = *(int *)(param_2 + 3);
LAB_00100412:
    if (iVar1 == 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 4) != iVar1) && (*(int *)(param_1 + 4) != *(int *)((long)param_2 + 0x1c)))
  {
    return;
  }
LAB_00100430:
  iVar1 = EVP_KEYMGMT_up_ref(param_1);
  if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(param_2[5],param_1), iVar1 < 1)) {
    EVP_KEYMGMT_free(param_1);
    *(undefined1 *)((long)param_2 + 0x24) = 1;
  }
  return;
}



void decoder_clean_pkey_construct_arg_part_0(void *param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x18),EVP_KEYMGMT_free);
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(*(void **)((long)param_1 + 0x20));
  CRYPTO_free(param_1);
  return;
}



void decoder_clean_pkey_construct_arg(long param_1)

{
  if (param_1 != 0) {
    decoder_clean_pkey_construct_arg_part_0();
    return;
  }
  return;
}



void collect_decoder(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  if (*(char *)(param_2 + 0x24) != '\0') {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = OSSL_DECODER_get0_provider();
  uVar4 = OSSL_PROVIDER_get0_provider_ctx(uVar4);
  if ((*(code **)(param_1 + 0x60) == (code *)0x0) ||
     (iVar2 = (**(code **)(param_1 + 0x60))(uVar4,*(undefined4 *)(*(long *)(param_2 + 8) + 0x10)),
     iVar2 != 0)) {
    iVar7 = 0;
    iVar2 = OPENSSL_sk_num(uVar1);
    if (0 < iVar2) {
      while (lVar6 = OPENSSL_sk_value(uVar1,iVar7), *(int *)(lVar6 + 4) != *(int *)(param_1 + 8)) {
LAB_0010063a:
        if (*(char *)(param_2 + 0x24) != '\0') {
          return;
        }
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar2) {
          return;
        }
      }
      lVar6 = (**(code **)(param_1 + 0x30))(uVar4);
      if (lVar6 != 0) {
        lVar5 = ossl_decoder_instance_new(param_1,lVar6);
        if (lVar5 == 0) {
          (**(code **)(param_1 + 0x38))(lVar6);
          *(undefined1 *)(param_2 + 0x24) = 1;
          return;
        }
        plVar8 = *(long **)(param_2 + 8);
        if ((*plVar8 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
          iVar3 = OPENSSL_strcasecmp(*(long *)(lVar5 + 0x10));
          if ((iVar3 != 0) &&
             ((iVar3 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 0x10),&_LC6), iVar3 != 0 ||
              (iVar3 = OPENSSL_strcasecmp(**(undefined8 **)(param_2 + 8),&_LC7), iVar3 != 0)))) {
            ossl_decoder_instance_free(lVar5);
            goto LAB_0010063a;
          }
          plVar8 = *(long **)(param_2 + 8);
        }
        iVar3 = ossl_decoder_ctx_add_decoder_inst(plVar8,lVar5);
        if (iVar3 != 0) {
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
          goto LAB_0010063a;
        }
        ossl_decoder_instance_free(lVar5);
      }
      *(undefined1 *)(param_2 + 0x24) = 1;
    }
  }
  return;
}



uint decoder_cache_entry_cmp(long *param_1,long *param_2)

{
  char *__s1;
  char *__s2;
  uint uVar1;
  
  if ((int)param_1[3] != (int)param_2[3]) {
    if ((int)param_1[3] < (int)param_2[3]) {
      return 0xffffffff;
    }
    return 1;
  }
  if (param_1[2] == 0) {
LAB_001007a5:
    if (param_2[2] == 0) goto LAB_00100747;
LAB_001007aa:
    uVar1 = 1;
  }
  else {
    if (param_2[2] == 0) {
      if (param_1[2] != 0) {
        return 0xffffffff;
      }
      goto LAB_001007a5;
    }
    uVar1 = OPENSSL_strcasecmp();
    if (uVar1 != 0) {
      return uVar1;
    }
LAB_00100747:
    if (*param_1 == 0) {
LAB_001007d8:
      if (*param_2 != 0) goto LAB_001007aa;
    }
    else {
      if (*param_2 == 0) {
        if (*param_1 != 0) {
          return 0xffffffff;
        }
        goto LAB_001007d8;
      }
      uVar1 = OPENSSL_strcasecmp();
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    if (param_1[1] == 0) {
LAB_001007e5:
      if (param_2[1] != 0) goto LAB_001007aa;
    }
    else {
      if (param_2[1] == 0) {
        if (param_1[1] != 0) {
          return 0xffffffff;
        }
        goto LAB_001007e5;
      }
      uVar1 = OPENSSL_strcasecmp();
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    __s1 = (char *)param_1[4];
    __s2 = (char *)param_2[4];
    if (__s1 != (char *)0x0) {
      if (__s2 != (char *)0x0) {
        uVar1 = strcmp(__s1,__s2);
        return uVar1;
      }
      if (__s1 != (char *)0x0) {
        return 0xffffffff;
      }
    }
    uVar1 = (uint)(__s2 != (char *)0x0);
  }
  return uVar1;
}



void OSSL_DECODER_CTX_set_passphrase(long param_1)

{
  ossl_pw_set_passphrase(param_1 + 0x38);
  return;
}



void OSSL_DECODER_CTX_set_passphrase_ui(long param_1)

{
  ossl_pw_set_ui_method(param_1 + 0x38);
  return;
}



void OSSL_DECODER_CTX_set_pem_password_cb(long param_1)

{
  ossl_pw_set_pem_password_cb(param_1 + 0x38);
  return;
}



void OSSL_DECODER_CTX_set_passphrase_cb(long param_1)

{
  ossl_pw_set_ossl_passphrase_cb(param_1 + 0x38);
  return;
}



long * ossl_decoder_cache_new(void)

{
  long *ptr;
  long lVar1;
  undefined8 uVar2;
  
  ptr = (long *)CRYPTO_malloc(0x10,"crypto/encode_decode/decoder_pkey.c",0x2c0);
  if (ptr != (long *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *ptr = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free(ptr);
    }
    else {
      uVar2 = OPENSSL_LH_new(decoder_cache_entry_hash,decoder_cache_entry_cmp);
      lVar1 = OPENSSL_LH_set_thunks
                        (uVar2,0x100000,lh_DECODER_CACHE_ENTRY_cfn_thunk,
                         lh_DECODER_CACHE_ENTRY_doall_thunk,lh_DECODER_CACHE_ENTRY_doall_arg_thunk);
      ptr[1] = lVar1;
      if (lVar1 != 0) {
        return ptr;
      }
      CRYPTO_THREAD_lock_free(*ptr);
      CRYPTO_free(ptr);
    }
  }
  return (long *)0x0;
}



void ossl_decoder_cache_free(undefined8 *param_1)

{
  OPENSSL_LH_doall(param_1[1],decoder_cache_entry_free);
  OPENSSL_LH_free(param_1[1]);
  CRYPTO_THREAD_lock_free(*param_1);
  CRYPTO_free(param_1);
  return;
}



undefined8 ossl_decoder_cache_flush(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x14);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = CRYPTO_THREAD_write_lock(*puVar2);
    if (iVar1 != 0) {
      OPENSSL_LH_doall(puVar2[1],decoder_cache_entry_free);
      OPENSSL_LH_flush(puVar2[1]);
      CRYPTO_THREAD_unlock(*puVar2);
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x2ed,"ossl_decoder_cache_flush");
    ERR_set_error(0x3c,0x8003c,0);
  }
  return 0;
}



long OSSL_DECODER_CTX_new_for_pkey
               (undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined4 param_5,
               undefined8 param_6,char *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  char *local_118;
  char *local_110;
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8 [15];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_b8;
  for (lVar11 = 0xf; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined8 *)ossl_lib_ctx_get_data(param_6,0x14);
  if (puVar3 == (undefined8 *)0x0) {
    ERR_new();
    uVar7 = 0x30b;
LAB_00101229:
    ERR_set_debug("crypto/encode_decode/decoder_pkey.c",uVar7,"OSSL_DECODER_CTX_new_for_pkey");
    ERR_set_error(0x3c,0x8003c,0);
  }
  else {
    if (param_3 != (char *)0x0) {
      OSSL_PARAM_construct_utf8_string(&local_148,"data-structure",param_3,0);
      local_b8[4] = local_128;
      local_b8[0] = local_148;
      local_b8[1] = uStack_140;
      local_b8[2] = local_138;
      local_b8[3] = uStack_130;
    }
    uVar4 = (ulong)(param_3 != (char *)0x0);
    if (param_7 != (char *)0x0) {
      OSSL_PARAM_construct_utf8_string(&local_148,"properties",param_7,0);
      local_b8[uVar4 * 5] = local_148;
      local_b8[uVar4 * 5 + 1] = uStack_140;
      local_b8[uVar4 * 5 + 2] = local_138;
      local_b8[uVar4 * 5 + 3] = uStack_130;
      local_b8[uVar4 * 5 + 4] = local_128;
    }
    local_f8 = param_7;
    local_118 = param_2;
    local_110 = param_3;
    local_108 = param_4;
    local_100 = param_5;
    iVar2 = CRYPTO_THREAD_read_lock(*puVar3);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_pkey.c",799,"OSSL_DECODER_CTX_new_for_pkey");
      ERR_set_error(0x3c,0x8000f,0);
    }
    else {
      lVar11 = OPENSSL_LH_retrieve(puVar3[1],&local_118);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x28);
LAB_00100b51:
        if (lVar11 == 0) {
LAB_00100d28:
          lVar5 = 0;
        }
        else {
LAB_00100b5a:
          lVar5 = OSSL_DECODER_CTX_new();
          if (lVar5 == 0) {
            ERR_new();
            ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x212,
                          "ossl_decoder_ctx_for_pkey_dup");
            ERR_set_error(0x3c,0x8003c,0);
            goto LAB_00100d28;
          }
          iVar2 = OSSL_DECODER_CTX_set_input_type(lVar5,param_2);
          if ((iVar2 == 0) ||
             (iVar2 = OSSL_DECODER_CTX_set_input_structure(lVar5,param_3), iVar2 == 0)) {
            ERR_new();
            uVar7 = 0x218;
LAB_00100d01:
            ERR_set_debug("crypto/encode_decode/decoder_pkey.c",uVar7,
                          "ossl_decoder_ctx_for_pkey_dup");
            ERR_set_error(0x3c,0x8003c,0);
LAB_00100d20:
            OSSL_DECODER_CTX_free(lVar5);
            goto LAB_00100d28;
          }
          lVar6 = *(long *)(lVar11 + 0x18);
          *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar11 + 0x10);
          if (lVar6 != 0) {
            lVar6 = OPENSSL_sk_deep_copy
                              (lVar6,&ossl_decoder_instance_dup,ossl_decoder_instance_free);
            *(long *)(lVar5 + 0x18) = lVar6;
            if (lVar6 == 0) {
              ERR_new();
              uVar7 = 0x223;
              goto LAB_00100d01;
            }
          }
          uVar7 = OSSL_DECODER_CTX_get_construct(lVar11);
          iVar2 = OSSL_DECODER_CTX_set_construct(lVar5,uVar7);
          if (iVar2 == 0) {
            ERR_new();
            uVar7 = 0x22a;
            goto LAB_00100d01;
          }
          puVar8 = (undefined8 *)OSSL_DECODER_CTX_get_construct_data(lVar11);
          if (puVar8 != (undefined8 *)0x0) {
            puVar9 = (undefined8 *)CRYPTO_zalloc(0x38,"crypto/encode_decode/decoder_pkey.c",0x230);
            if (puVar9 == (undefined8 *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x232,
                            "ossl_decoder_ctx_for_pkey_dup");
              ERR_set_error(0x3c,0x8000f,0);
            }
            else {
              if ((char *)puVar8[1] == (char *)0x0) {
LAB_00100c41:
                if (puVar8[3] != 0) {
                  lVar6 = OPENSSL_sk_deep_copy(puVar8[3],keymgmt_dup,EVP_KEYMGMT_free);
                  puVar9[3] = lVar6;
                  if (lVar6 == 0) {
                    ERR_new();
                    ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x243,
                                  "ossl_decoder_ctx_for_pkey_dup");
                    ERR_set_error(0x3c,0x80006,0);
                    goto LAB_0010118e;
                  }
                }
                puVar9[5] = param_1;
                *puVar9 = *puVar8;
                uVar1 = *(undefined4 *)(puVar8 + 2);
                puVar9[6] = lVar5;
                *(undefined4 *)(puVar9 + 2) = uVar1;
                iVar2 = OSSL_DECODER_CTX_set_construct_data(lVar5,puVar9);
                if (iVar2 != 0) goto LAB_00100c9b;
                ERR_new();
                ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x24d,
                              "ossl_decoder_ctx_for_pkey_dup");
                ERR_set_error(0x3c,0x8003c,0);
              }
              else {
                pcVar10 = CRYPTO_strdup((char *)puVar8[1],"crypto/encode_decode/decoder_pkey.c",
                                        0x236);
                puVar9[1] = pcVar10;
                if (pcVar10 != (char *)0x0) goto LAB_00100c41;
                ERR_new();
                ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x238,
                              "ossl_decoder_ctx_for_pkey_dup");
                ERR_set_error(0x3c,0x8000f,0);
              }
LAB_0010118e:
              decoder_clean_pkey_construct_arg_part_0(puVar9);
            }
            goto LAB_00100d20;
          }
LAB_00100c9b:
          uVar7 = OSSL_DECODER_CTX_get_cleanup(lVar11);
          iVar2 = OSSL_DECODER_CTX_set_cleanup(lVar5,uVar7);
          if (iVar2 == 0) {
            ERR_new();
            uVar7 = 0x255;
            goto LAB_00100d01;
          }
        }
        CRYPTO_THREAD_unlock(*puVar3);
        goto LAB_00100cbe;
      }
      CRYPTO_THREAD_unlock(*puVar3);
      lVar11 = OSSL_DECODER_CTX_new();
      if (lVar11 == 0) {
        ERR_new();
        uVar7 = 0x32f;
        goto LAB_00101229;
      }
      iVar2 = OSSL_DECODER_CTX_set_input_type(lVar11,param_2);
      if (((iVar2 != 0) &&
          (iVar2 = OSSL_DECODER_CTX_set_input_structure(lVar11,param_3), iVar2 != 0)) &&
         (iVar2 = OSSL_DECODER_CTX_set_selection(lVar11,param_5), iVar2 != 0)) {
        local_e8 = (undefined1  [16])0x0;
        local_d8 = (undefined1  [16])0x0;
        local_c8 = (undefined1  [16])0x0;
        puVar8 = (undefined8 *)CRYPTO_zalloc(0x38,"crypto/encode_decode/decoder_pkey.c",0x1ab);
        if (puVar8 != (undefined8 *)0x0) {
          if (param_7 != (char *)0x0) {
            pcVar10 = CRYPTO_strdup(param_7,"crypto/encode_decode/decoder_pkey.c",0x1ae);
            puVar8[1] = pcVar10;
            if (pcVar10 != (char *)0x0) goto LAB_00100eb8;
            goto LAB_00100e70;
          }
LAB_00100eb8:
          lVar5 = OPENSSL_sk_new_null();
          if (lVar5 == 0) {
            ERR_new();
            ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x1b4,
                          "ossl_decoder_ctx_setup_for_pkey");
            ERR_set_error(0x3c,0x8000f,0);
            decoder_clean_pkey_construct_arg_part_0(puVar8);
            goto LAB_00100e7a;
          }
          uVar1 = *(undefined4 *)(lVar11 + 0x10);
          local_e8._8_8_ = lVar11;
          local_e8._0_8_ = param_6;
          *puVar8 = param_6;
          *(undefined4 *)(puVar8 + 2) = uVar1;
          puVar8[5] = 0;
          puVar8[3] = lVar5;
          local_c8._8_8_ = lVar5;
          local_d8._0_8_ = param_4;
          EVP_KEYMGMT_do_all_provided(param_6,collect_keymgmt);
          if (local_c8[4] == '\0') {
            OSSL_DECODER_do_all_provided(param_6,collect_decoder,local_e8);
            if (local_c8[4] == '\0') {
              iVar2 = OSSL_DECODER_CTX_get_num_decoders(lVar11);
              if (iVar2 == 0) {
                decoder_clean_pkey_construct_arg_part_0(puVar8);
              }
              else {
                iVar2 = OSSL_DECODER_CTX_set_construct(lVar11,decoder_construct_pkey);
                if (((iVar2 == 0) ||
                    (iVar2 = OSSL_DECODER_CTX_set_construct_data(lVar11,puVar8), iVar2 == 0)) ||
                   (iVar2 = OSSL_DECODER_CTX_set_cleanup(lVar11,decoder_clean_pkey_construct_arg),
                   iVar2 == 0)) goto LAB_00100e70;
              }
              iVar2 = OSSL_DECODER_CTX_add_extra(lVar11,param_6,param_7);
              if ((iVar2 == 0) ||
                 ((param_7 != (char *)0x0 &&
                  (iVar2 = OSSL_DECODER_CTX_set_params(lVar11,local_b8), iVar2 == 0))))
              goto LAB_00100e7a;
              puVar8 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/encode_decode/decoder_pkey.c",0x34c)
              ;
              if (puVar8 == (undefined8 *)0x0) {
                OSSL_DECODER_CTX_free(lVar11);
                goto LAB_00100d60;
              }
              if (param_2 == (char *)0x0) {
LAB_00101033:
                if (param_3 != (char *)0x0) {
                  pcVar10 = CRYPTO_strdup(param_3,"crypto/encode_decode/decoder_pkey.c",0x358);
                  puVar8[1] = pcVar10;
                  if (pcVar10 == (char *)0x0) goto LAB_001012f0;
                }
                if (param_4 != (char *)0x0) {
                  pcVar10 = CRYPTO_strdup(param_4,"crypto/encode_decode/decoder_pkey.c",0x35d);
                  puVar8[2] = pcVar10;
                  if (pcVar10 == (char *)0x0) goto LAB_001012f0;
                }
                if (param_7 != (char *)0x0) {
                  pcVar10 = CRYPTO_strdup(param_7,"crypto/encode_decode/decoder_pkey.c",0x362);
                  puVar8[4] = pcVar10;
                  if (pcVar10 == (char *)0x0) goto LAB_001012f0;
                }
                uVar7 = *puVar3;
                *(undefined4 *)(puVar8 + 3) = param_5;
                puVar8[5] = lVar11;
                iVar2 = CRYPTO_THREAD_write_lock(uVar7);
                if (iVar2 == 0) {
                  ERR_new();
                  uVar7 = 0x36b;
                }
                else {
                  lVar5 = OPENSSL_LH_retrieve(puVar3[1],&local_118);
                  if (lVar5 != 0) {
                    decoder_cache_entry_free_part_0(puVar8);
                    lVar11 = *(long *)(lVar5 + 0x28);
                    goto LAB_00100b51;
                  }
                  OPENSSL_LH_insert(puVar3[1],puVar8);
                  iVar2 = OPENSSL_LH_error(puVar3[1]);
                  if (iVar2 == 0) goto LAB_00100b5a;
                  ERR_new();
                  uVar7 = 0x373;
                }
                ERR_set_debug("crypto/encode_decode/decoder_pkey.c",uVar7,
                              "OSSL_DECODER_CTX_new_for_pkey");
                ERR_set_error(0x3c,0x8000f,0);
                lVar11 = 0;
              }
              else {
                pcVar10 = CRYPTO_strdup(param_2,"crypto/encode_decode/decoder_pkey.c",0x353);
                *puVar8 = pcVar10;
                if (pcVar10 != (char *)0x0) goto LAB_00101033;
              }
LAB_001012f0:
              decoder_cache_entry_free_part_0(puVar8);
              OSSL_DECODER_CTX_free(lVar11);
              goto LAB_00100d60;
            }
          }
LAB_00100e70:
          decoder_clean_pkey_construct_arg_part_0(puVar8);
        }
      }
LAB_00100e7a:
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_pkey.c",0x347,"OSSL_DECODER_CTX_new_for_pkey");
      ERR_set_error(0x3c,0x8003c,0);
      OSSL_DECODER_CTX_free(lVar11);
    }
  }
LAB_00100d60:
  lVar5 = 0;
LAB_00100cbe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


