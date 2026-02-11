
undefined1 * core_gettable_params(void)

{
  return param_types;
}



undefined8 core_get_libctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



void infopair_free(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  CRYPTO_free(param_1);
  return;
}



void ossl_provider_child_cb_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void ossl_provider_cmp(long *param_1,long *param_2)

{
  strcmp(*(char **)(*param_1 + 0x28),*(char **)(*param_2 + 0x28));
  return;
}



void core_new_error(void)

{
  ERR_new();
  return;
}



void core_set_error_debug
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ERR_set_debug(param_2,param_3,param_4);
  return;
}



undefined8 * infopair_copy(undefined8 *param_1)

{
  undefined8 *ptr;
  char *pcVar1;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"crypto/provider_core.c",0x103);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup((char *)*param_1,"crypto/provider_core.c",0x108);
    *ptr = pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_00100151;
  }
  if ((char *)param_1[1] == (char *)0x0) {
    return ptr;
  }
  pcVar1 = CRYPTO_strdup((char *)param_1[1],"crypto/provider_core.c",0x10d);
  ptr[1] = pcVar1;
  if (pcVar1 != (char *)0x0) {
    return ptr;
  }
LAB_00100151:
  CRYPTO_free((void *)*ptr);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



undefined8 infopair_add(long *param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  long lVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"crypto/provider_core.c",800);
  if (ptr == (undefined8 *)0x0) {
    return 0;
  }
  pcVar2 = CRYPTO_strdup(param_2,"crypto/provider_core.c",0x321);
  *ptr = pcVar2;
  if (pcVar2 == (char *)0x0) goto LAB_00100254;
  pcVar2 = CRYPTO_strdup(param_3,"crypto/provider_core.c",0x322);
  ptr[1] = pcVar2;
  if (pcVar2 == (char *)0x0) goto LAB_00100254;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *param_1 = lVar3;
    if (lVar3 != 0) goto LAB_001001f4;
  }
  else {
LAB_001001f4:
    iVar1 = OPENSSL_sk_push(lVar3,ptr);
    if (0 < iVar1) {
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/provider_core.c",0x328,"infopair_add");
  ERR_set_error(0xf,0x8000f,0);
LAB_00100254:
  CRYPTO_free((void *)*ptr);
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
  return 0;
}



uint create_provider_children(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  lVar1 = *(long *)(param_1 + 0x58);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10));
  if (0 < iVar2) {
    uVar7 = 1;
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x10),iVar5);
      uVar3 = (**(code **)(lVar4 + 8))(param_1,*(undefined8 *)(lVar4 + 0x20));
      uVar7 = uVar7 & uVar3;
      iVar5 = iVar6;
    } while (iVar6 != iVar2);
    return uVar7;
  }
  return 1;
}



bool core_obj_create(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
  iVar1 = OBJ_txt2nid(param_2);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = OBJ_create(param_2,param_3,param_4);
  return iVar1 != 0;
}



int core_obj_add_sigid(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  int signid;
  int pkey_id;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  signid = OBJ_txt2nid(param_2);
  pkey_id = OBJ_txt2nid(param_4);
  if ((((param_3 == (char *)0x0) || (*param_3 == '\0')) ||
      (iVar2 = OBJ_txt2nid(param_3), iVar2 != 0)) && (signid != 0)) {
    iVar1 = OBJ_find_sigid_algs(signid,(int *)0x0,(int *)0x0);
    if (iVar1 != 0) {
      return 1;
    }
    if (pkey_id != 0) {
      iVar2 = OBJ_add_sigid(signid,iVar2,pkey_id);
      return iVar2;
    }
  }
  return 0;
}



void core_provider_get0_dispatch(void)

{
  OSSL_PROVIDER_get0_dispatch();
  return;
}



void core_provider_get0_provider_ctx(void)

{
  OSSL_PROVIDER_get0_provider_ctx();
  return;
}



void core_provider_get0_name(void)

{
  OSSL_PROVIDER_get0_name();
  return;
}



void rand_cleanup_user_nonce(long param_1)

{
  ossl_rand_cleanup_user_nonce(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_cleanup_nonce(long param_1)

{
  ossl_rand_cleanup_nonce(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_get_user_nonce(long param_1)

{
  ossl_rand_get_user_nonce(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_get_nonce(long param_1)

{
  ossl_rand_get_nonce(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_cleanup_user_entropy(long param_1)

{
  ossl_rand_cleanup_user_entropy(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_cleanup_entropy(long param_1)

{
  ossl_rand_cleanup_entropy(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_get_user_entropy(long param_1)

{
  ossl_rand_get_user_entropy(*(undefined8 *)(param_1 + 0x50));
  return;
}



void rand_get_entropy(long param_1)

{
  ossl_rand_get_entropy(*(undefined8 *)(param_1 + 0x50));
  return;
}



void core_indicator_get_callback(void)

{
  OSSL_INDICATOR_get_callback();
  return;
}



void core_self_test_get_callback(void)

{
  OSSL_SELF_TEST_get_callback();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_pop_error_to_mark(void)

{
  int iVar1;
  
  iVar1 = ERR_pop_to_mark();
  return iVar1;
}



void core_clear_last_error_mark(void)

{
  ERR_clear_last_mark();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_set_error_mark(void)

{
  int iVar1;
  
  iVar1 = ERR_set_mark();
  return iVar1;
}



void core_vset_error(long param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    ERR_vset_error(2,param_2 & 0x7fffffff);
    return;
  }
  if (param_2 >> 0x17 != 0) {
    ERR_vset_error(param_2 >> 0x17,param_2 & 0x7fffff);
    return;
  }
  ERR_vset_error(*(undefined4 *)(param_1 + 0x60));
  return;
}



void core_thread_start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ossl_init_thread_start(param_1,param_3,param_2);
  return;
}



int provider_activate(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ERR_STRING_DATA *str;
  DSO_FUNC_TYPE pDVar7;
  DSO *pDVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  char *ptr;
  long in_FS_OFFSET;
  char *local_68;
  int local_54;
  int *local_50;
  undefined8 local_48;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  if (lVar2 == 0) {
    local_50 = (int *)0x0;
    local_48 = 0;
    if ((*param_1 & 1) != 0) {
      ERR_new();
      pcVar9 = "provider_init";
      uVar11 = 0x3b7;
LAB_00100a91:
      ERR_set_debug("crypto/provider_core.c",uVar11,pcVar9);
      ERR_set_error(0xf,0xc0103,0);
      goto LAB_00100960;
    }
    pDVar7 = *(DSO_FUNC_TYPE *)(param_1 + 0x40);
    if (pDVar7 == (DSO_FUNC_TYPE)0x0) {
      pDVar8 = *(DSO **)(param_1 + 0x38);
      if (pDVar8 == (DSO *)0x0) {
        pDVar8 = DSO_new();
        *(DSO **)(param_1 + 0x38) = pDVar8;
        if (pDVar8 != (DSO *)0x0) {
          lVar12 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1);
          if (lVar12 == 0) {
            ERR_new();
            pcVar9 = "get_provider_store";
            uVar11 = 0x14f;
            goto LAB_00100a91;
          }
          iVar4 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar12 + 0x18));
          if (iVar4 == 0) goto LAB_00100960;
          if (*(char **)(lVar12 + 0x28) == (char *)0x0) {
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar12 + 0x18));
            local_68 = (char *)ossl_safe_getenv("OPENSSL_MODULES");
            pcVar9 = (char *)0x0;
            if (local_68 == (char *)0x0) {
              local_68 = (char *)ossl_get_modulesdir();
            }
          }
          else {
            pcVar9 = CRYPTO_strdup(*(char **)(lVar12 + 0x28),"crypto/provider_core.c",0x3d5);
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar12 + 0x18));
            local_68 = pcVar9;
            if (pcVar9 == (char *)0x0) goto LAB_00100960;
          }
          DSO_ctrl(*(DSO **)(param_1 + 0x38),2,2,(void *)0x0);
          pcVar10 = *(char **)(param_1 + 0x30);
          ptr = (char *)0x0;
          if ((pcVar10 == (char *)0x0) &&
             (pcVar10 = DSO_convert_filename(*(DSO **)(param_1 + 0x38),*(char **)(param_1 + 0x28)),
             ptr = pcVar10, pcVar10 == (char *)0x0)) {
            ptr = (char *)0x0;
            pcVar10 = (char *)0x0;
LAB_00100c56:
            DSO_free(*(DSO **)(param_1 + 0x38));
            param_1[0x38] = 0;
            param_1[0x39] = 0;
            param_1[0x3a] = 0;
            param_1[0x3b] = 0;
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
          }
          else {
            pcVar10 = DSO_merge(*(DSO **)(param_1 + 0x38),pcVar10,local_68);
            if ((pcVar10 == (char *)0x0) ||
               (pDVar8 = DSO_load(*(DSO **)(param_1 + 0x38),pcVar10,(DSO_METHOD *)0x0,0),
               pDVar8 == (DSO *)0x0)) goto LAB_00100c56;
          }
          CRYPTO_free(pcVar10);
          CRYPTO_free(ptr);
          CRYPTO_free(pcVar9);
          pDVar8 = *(DSO **)(param_1 + 0x38);
          if (pDVar8 != (DSO *)0x0) goto LAB_001009dd;
          ERR_new();
          ERR_set_debug("crypto/provider_core.c",0x3fb,"provider_init");
          ERR_set_error(0xf,0x80025,"name=%s",*(undefined8 *)(param_1 + 0x28));
        }
      }
      else {
LAB_001009dd:
        pDVar7 = DSO_bind_func(pDVar8,"OSSL_provider_init");
        *(DSO_FUNC_TYPE *)(param_1 + 0x40) = pDVar7;
        if (pDVar7 != (DSO_FUNC_TYPE)0x0) goto LAB_00100808;
        ERR_new();
        ERR_set_debug("crypto/provider_core.c",0x407,"provider_init");
        ERR_set_error(0xf,0x8010c,"name=%s, provider has no provider init function",
                      *(undefined8 *)(param_1 + 0x28));
      }
    }
    else {
LAB_00100808:
      iVar4 = (*pDVar7)(param_1,core_dispatch_,&local_50,&local_48);
      if (iVar4 == 0) {
        ERR_new();
        ERR_set_debug("crypto/provider_core.c",0x415,"provider_init");
        ERR_set_error(0xf,0xc0105,"name=%s",*(undefined8 *)(param_1 + 0x28));
      }
      else {
        *(undefined8 *)(param_1 + 0xd8) = local_48;
        *(int **)(param_1 + 0xe0) = local_50;
        if ((local_50 != (int *)0x0) && (iVar4 = *local_50, iVar4 != 0)) {
          pcVar13 = (code *)0x0;
          piVar3 = local_50;
          do {
            local_50 = piVar3 + 4;
            switch(iVar4) {
            case 0x400:
              *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x401:
              *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x402:
              *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x403:
              *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x404:
              *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x405:
              pcVar13 = *(code **)(piVar3 + 2);
              break;
            case 0x406:
              *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x407:
              *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(piVar3 + 2);
              break;
            case 0x408:
              *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar3 + 2);
            }
            iVar4 = *local_50;
            piVar3 = local_50;
          } while (iVar4 != 0);
          if (pcVar13 != (code *)0x0) {
            puVar6 = (uint *)(*pcVar13)(local_48);
            uVar1 = *puVar6;
            if (uVar1 == 0) {
              lVar12 = 0x20;
              lVar14 = 1;
            }
            else {
              lVar12 = 0;
              do {
                lVar14 = lVar12;
                if (((int)uVar1 < 0) || (uVar1 >> 0x17 != 0)) goto LAB_00100960;
                lVar12 = lVar14 + 1;
                uVar1 = puVar6[lVar12 * 4];
              } while (uVar1 != 0);
              lVar14 = lVar14 + 2;
              lVar12 = lVar12 * 0x10 + 0x20;
            }
            str = (ERR_STRING_DATA *)CRYPTO_zalloc(lVar12,"crypto/provider_core.c",0x462);
            *(ERR_STRING_DATA **)(param_1 + 0x68) = str;
            if (str == (ERR_STRING_DATA *)0x0) goto LAB_00100960;
            uVar1 = *(uint *)(param_1 + 0x60);
            lVar12 = 0;
            str->error = (ulong)((uVar1 & 0xff) << 0x17);
            str->string = *(char **)(param_1 + 0x28);
            do {
              *(long *)((long)&str[1].error + lVar12) = (long)*(int *)((long)puVar6 + lVar12);
              *(undefined8 *)((long)&str[1].string + lVar12) =
                   *(undefined8 *)((long)puVar6 + lVar12 + 8);
              lVar12 = lVar12 + 0x10;
            } while (lVar12 != lVar14 << 4);
            ERR_load_strings(uVar1,str);
          }
        }
        *param_1 = *param_1 | 1;
        param_2 = 0;
        if (*(long *)(param_1 + 0x98) != 0) goto LAB_001005c5;
        if ((((param_1[0xd0] & 1) == 0) || (param_3 == 0)) ||
           (iVar4 = ossl_provider_up_ref_parent(param_1,1), iVar4 != 0)) goto LAB_00100750;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x98) != 0) {
LAB_001005c5:
      iVar4 = ossl_rand_check_random_provider_on_load(*(undefined8 *)(param_1 + 0x50),param_1);
      if (iVar4 == 0) goto LAB_00100960;
    }
    if (((param_1[0xd0] & 1) == 0) || (param_3 == 0)) {
      if (param_2 != 0) goto LAB_001005f3;
LAB_00100750:
      iVar5 = CRYPTO_atomic_add(param_1 + 0x20,1,&local_54,*(undefined8 *)(param_1 + 0x18));
      iVar4 = local_54;
      if (((iVar5 == 0) || (*param_1 = *param_1 | 2, local_54 != 1)) || (lVar2 == 0))
      goto LAB_0010065f;
      iVar5 = create_provider_children(param_1);
LAB_00100958:
      iVar4 = local_54;
      if (iVar5 != 0) goto LAB_0010065f;
    }
    else {
      iVar4 = ossl_provider_up_ref_parent(param_1,1);
      if (iVar4 != 0) {
        if (param_2 == 0) goto LAB_00100750;
LAB_001005f3:
        iVar4 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar2 + 0x20));
        if (iVar4 != 0) {
          iVar4 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 8));
          if (iVar4 != 0) {
            iVar4 = CRYPTO_atomic_add(param_1 + 0x20,1,&local_54,*(undefined8 *)(param_1 + 0x18));
            if ((iVar4 == 0) || (*param_1 = *param_1 | 2, local_54 != 1)) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
              iVar4 = local_54;
              if (local_54 == 1) {
                ossl_decoder_cache_flush(*(undefined8 *)(param_1 + 0x50));
                iVar4 = local_54;
              }
              goto LAB_0010065f;
            }
            iVar5 = create_provider_children(param_1);
            CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
            if (local_54 == 1) {
              ossl_decoder_cache_flush(*(undefined8 *)(param_1 + 0x50));
            }
            goto LAB_00100958;
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
        }
        if ((param_3 != 0) && ((param_1[0xd0] & 1) != 0)) {
          ossl_provider_free_parent(param_1,1);
        }
      }
    }
  }
LAB_00100960:
  iVar4 = -1;
LAB_0010065f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void ossl_provider_deregister_child_cb(long param_1)

{
  int iVar1;
  long lVar2;
  long *ptr;
  int iVar3;
  
  lVar2 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return;
  }
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x20));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      ptr = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar2 + 0x10),iVar3);
      if (*ptr == param_1) {
        OPENSSL_sk_delete(*(undefined8 *)(lVar2 + 0x10),iVar3);
        CRYPTO_free(ptr);
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
  return;
}



bool provider_remove_store_methods(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar6 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar6 + 0x20));
    if (iVar2 != 0) {
      bVar1 = *(byte *)(lVar6 + 0x48);
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
      if ((bVar1 >> 1 & 1) != 0) {
        return true;
      }
      iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xc0));
      if (iVar2 != 0) {
        CRYPTO_free(*(void **)(param_1 + 0xb0));
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xc0));
        iVar2 = evp_method_store_remove_all_provided(param_1);
        iVar3 = ossl_encoder_store_remove_all_provided(param_1);
        iVar4 = ossl_decoder_store_remove_all_provided(param_1);
        iVar5 = ossl_store_loader_store_remove_all_provided(param_1);
        return iVar2 + iVar3 + iVar4 + iVar5 == 4;
      }
    }
  }
  return false;
}



int ossl_provider_register_child_cb
              (long param_1,code *param_2,code *param_3,code *param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *ptr;
  void *ptr_00;
  byte *pbVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  lVar5 = ossl_lib_ctx_get_data(uVar7,1);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return 0;
  }
  ptr = (long *)CRYPTO_malloc(0x28,"crypto/provider_core.c",0x847);
  if (ptr == (long *)0x0) {
    return 0;
  }
  *ptr = param_1;
  ptr[3] = (long)param_4;
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  ptr[1] = (long)param_2;
  ptr[2] = (long)param_3;
  ptr[4] = param_5;
  iVar3 = CRYPTO_THREAD_write_lock(uVar2);
  if (iVar3 == 0) {
    CRYPTO_free(ptr);
    return 0;
  }
  ptr_00 = (void *)evp_get_global_properties_str(uVar7,0);
  if (ptr_00 != (void *)0x0) {
    (*param_4)(ptr_00,param_5);
    CRYPTO_free(ptr_00);
  }
  iVar3 = 0;
  iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 8));
  if (iVar4 < 1) {
LAB_0010104b:
    if (iVar3 == iVar4) goto LAB_00101108;
  }
  else {
    do {
      pbVar6 = (byte *)OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar3);
      iVar8 = CRYPTO_THREAD_read_lock(*(undefined8 *)(pbVar6 + 8));
      if ((iVar8 == 0) ||
         ((bVar1 = *pbVar6, CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar6 + 8)), (bVar1 >> 1 & 1) != 0
          && (iVar8 = (*param_2)(pbVar6,param_5), iVar8 == 0)))) goto LAB_0010104b;
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar4);
LAB_00101108:
    iVar8 = OPENSSL_sk_push(*(undefined8 *)(lVar5 + 0x10),ptr);
    iVar3 = iVar4;
    if (0 < iVar8) goto LAB_0010108d;
  }
  do {
    uVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar3);
    (*param_3)(uVar7,param_5);
    bVar9 = iVar3 != 0;
    iVar3 = iVar3 + -1;
  } while (bVar9);
  iVar8 = 0;
  CRYPTO_free(ptr);
LAB_0010108d:
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
  return iVar8;
}



int provider_deactivate(byte *param_1,byte param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (byte *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar1 = ossl_rand_check_random_provider_on_unload(uVar7,param_1);
      if (iVar1 == 0) goto LAB_00101360;
      uVar7 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar2 = ossl_lib_ctx_get_data(uVar7,1);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
      ERR_set_error(0xf,0xc0103,0);
      iVar1 = CRYPTO_atomic_add(param_1 + 0x20,0xffffffff,&local_34,*(undefined8 *)(param_1 + 0x18))
      ;
      if (iVar1 != 0) {
        if (local_34 < 1) {
          *param_1 = *param_1 & 0xfd;
          goto LAB_0010121e;
        }
        bVar4 = param_2 & 1 & param_1[0xd0];
LAB_00101209:
        if (bVar4 != 0) {
          ossl_provider_free_parent(param_1,1);
        }
        goto LAB_0010121e;
      }
    }
    else {
      iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar2 + 0x20));
      if (iVar1 != 0) {
        iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 8));
        if (iVar1 == 0) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
        }
        else {
          iVar1 = CRYPTO_atomic_add(param_1 + 0x20,0xffffffff,&local_34,
                                    *(undefined8 *)(param_1 + 0x18));
          if (iVar1 != 0) {
            if (local_34 < 1) {
              *param_1 = *param_1 & 0xfd;
              if ((param_3 == 0) ||
                 (iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10)), iVar1 < 1)) {
                CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
                CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
                if (local_34 < 1) {
                  ossl_decoder_cache_flush(*(undefined8 *)(param_1 + 0x50));
                }
                goto LAB_0010121e;
              }
              iVar5 = 0;
              do {
                iVar6 = iVar5 + 1;
                lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 0x10),iVar5);
                (**(code **)(lVar3 + 0x10))(param_1,*(undefined8 *)(lVar3 + 0x20));
                iVar5 = iVar6;
              } while (iVar6 != iVar1);
              bVar4 = 0;
            }
            else {
              bVar4 = param_2 & 1 & param_1[0xd0];
            }
            CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
            if (local_34 < 1) {
              ossl_decoder_cache_flush(*(undefined8 *)(param_1 + 0x50));
            }
            goto LAB_00101209;
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
        }
      }
    }
  }
LAB_00101360:
  local_34 = -1;
LAB_0010121e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_34;
}



void ossl_provider_info_clear(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  OPENSSL_sk_pop_free(param_1[3],infopair_free);
  return;
}



void ossl_provider_store_free(void *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != (void *)0x0) {
    *(byte *)((long)param_1 + 0x48) = *(byte *)((long)param_1 + 0x48) | 2;
    CRYPTO_free(*(void **)((long)param_1 + 0x28));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 8),provider_deactivate_free);
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x10),ossl_provider_child_cb_free);
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x20));
    if (*(long *)((long)param_1 + 0x38) != 0) {
      uVar1 = 0;
      do {
        uVar2 = uVar1 + 1;
        ossl_provider_info_clear(*(long *)((long)param_1 + 0x30) + uVar1 * 0x28);
        uVar1 = uVar2;
      } while (uVar2 < *(ulong *)((long)param_1 + 0x38));
    }
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * ossl_provider_store_new(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x50,"crypto/provider_core.c",0x137);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = OPENSSL_sk_new(ossl_provider_cmp);
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = CRYPTO_THREAD_lock_new();
      puVar1[3] = lVar2;
      if (lVar2 != 0) {
        lVar2 = OPENSSL_sk_new_null();
        puVar1[2] = lVar2;
        if (lVar2 != 0) {
          lVar2 = CRYPTO_THREAD_lock_new();
          puVar1[4] = lVar2;
          if (lVar2 != 0) {
            *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 1;
            *puVar1 = param_1;
            return puVar1;
          }
        }
      }
    }
  }
  ossl_provider_store_free(puVar1);
  return (undefined8 *)0x0;
}



undefined8 ossl_provider_disable_fallback_loading(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 != 0) {
      *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) & 0xfe;
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_provider_info_add_to_store(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  void *addr;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    if (*param_2 != 0) {
      ERR_new();
      ERR_set_debug("crypto/provider_core.c",0x16f,"ossl_provider_info_add_to_store");
      ERR_set_error(0xf,0xc0103,0);
      return 0;
    }
LAB_00101707:
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x16a,"ossl_provider_info_add_to_store");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  if (*param_2 == 0) goto LAB_00101707;
  iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar4 + 0x20));
  if (iVar3 == 0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x40) == 0) {
    addr = (void *)CRYPTO_zalloc(400,"crypto/provider_core.c",0x176);
    *(void **)(lVar4 + 0x30) = addr;
    if (addr == (void *)0x0) {
LAB_00101780:
      uVar6 = 0;
      goto LAB_0010163d;
    }
    *(undefined8 *)(lVar4 + 0x40) = 10;
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x38);
    addr = *(void **)(lVar4 + 0x30);
    if (*(long *)(lVar4 + 0x40) == lVar5) {
      lVar1 = lVar5 + 10;
      addr = CRYPTO_realloc(addr,(int)lVar1 * 0x28,"crypto/provider_core.c",0x17f);
      if (addr == (void *)0x0) goto LAB_00101780;
      *(void **)(lVar4 + 0x30) = addr;
      lVar5 = *(long *)(lVar4 + 0x38);
      *(long *)(lVar4 + 0x40) = lVar1;
    }
  }
  lVar1 = param_2[1];
  uVar6 = 1;
  plVar2 = (long *)((long)addr + lVar5 * 0x28);
  *plVar2 = *param_2;
  plVar2[1] = lVar1;
  lVar1 = param_2[3];
  plVar2[2] = param_2[2];
  plVar2[3] = lVar1;
  plVar2[4] = param_2[4];
  *(long *)(lVar4 + 0x38) = lVar5 + 1;
LAB_0010163d:
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
  return uVar6;
}



bool ossl_provider_set_module_path(long param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  bVar2 = true;
  if (param_2 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(param_2,"crypto/provider_core.c",0x316);
    bVar2 = pcVar1 != (char *)0x0;
    *(char **)(param_1 + 0x30) = pcVar1;
  }
  return bVar2;
}



void OSSL_PROVIDER_add_conf_parameter(long param_1)

{
  infopair_add(param_1 + 0x48);
  return;
}



undefined8 OSSL_PROVIDER_get_conf_parameters(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    for (; iVar1 = OPENSSL_sk_num(lVar3), iVar5 < iVar1; iVar5 = iVar5 + 1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x48),iVar5);
      lVar3 = OSSL_PARAM_locate(param_2,*puVar2);
      if ((lVar3 != 0) && (uVar4 = OSSL_PARAM_set_utf8_ptr(lVar3,puVar2[1]), (int)uVar4 == 0)) {
        return uVar4;
      }
      lVar3 = *(long *)(param_1 + 0x48);
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 OSSL_PROVIDER_conf_get_bool(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  char **ppcStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  ppcStack_68 = &local_80;
  uStack_50 = 0;
  local_4c = (undefined1  [16])0x0;
  local_3c = (undefined1  [16])0x0;
  local_80 = (char *)0x0;
  local_2c = 0;
  local_70 = 6;
  uStack_60 = (undefined4)__LC5;
  local_5c = (undefined4)((ulong)__LC5 >> 0x20);
  uStack_58 = _UNK_001037e8;
  local_78 = param_2;
  iVar1 = OSSL_PROVIDER_get_conf_parameters(param_1,&local_78);
  if (((iVar1 != 0) && (iVar1 = OSSL_PARAM_modified(&local_78), iVar1 != 0)) &&
     (local_80 != (char *)0x0)) {
    if (((*local_80 == '1') && (local_80[1] == '\0')) ||
       ((iVar1 = OPENSSL_strcasecmp(local_80,&_LC6), iVar1 == 0 ||
        ((iVar1 = OPENSSL_strcasecmp(local_80,&_LC7), iVar1 == 0 ||
         (iVar1 = OPENSSL_strcasecmp(local_80,&_LC8), iVar1 == 0)))))) {
      param_3 = 1;
    }
    else if (((*local_80 == '0') && (local_80[1] == '\0')) ||
            ((iVar1 = OPENSSL_strcasecmp(local_80,&_LC9), iVar1 == 0 ||
             (iVar1 = OPENSSL_strcasecmp(local_80,"false"), iVar1 == 0)))) {
      param_3 = 0;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(local_80,&_LC11);
      if (iVar1 == 0) {
        param_3 = 0;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



void ossl_provider_info_add_parameter(long param_1)

{
  infopair_add(param_1 + 0x18);
  return;
}



undefined8 OSSL_PROVIDER_set_default_search_path(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != (char *)0x0) &&
     (param_2 = CRYPTO_strdup(param_2,"crypto/provider_core.c",0x38a), param_2 == (char *)0x0)) {
    return 0;
  }
  lVar2 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x18));
    if (iVar1 != 0) {
      CRYPTO_free(*(void **)(lVar2 + 0x28));
      *(char **)(lVar2 + 0x28) = param_2;
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x18));
      return 1;
    }
  }
  CRYPTO_free(param_2);
  return 0;
}



undefined8 OSSL_PROVIDER_get0_default_search_path(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar3 + 0x18));
    if (iVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x28);
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar3 + 0x18));
      return uVar1;
    }
  }
  return 0;
}



bool ossl_provider_activate(long param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0xd0) & 1) == 0)) {
    return true;
  }
  iVar2 = provider_activate(param_1,1,param_2);
  if (0 < iVar2) {
    if (iVar2 != 1) {
      return true;
    }
    lVar6 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1);
    if (lVar6 == 0) {
      ERR_new();
      ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
      ERR_set_error(0xf,0xc0103,0);
    }
    else {
      iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar6 + 0x20));
      if (iVar2 != 0) {
        bVar1 = *(byte *)(lVar6 + 0x48);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
        if ((bVar1 >> 1 & 1) == 0) {
          iVar2 = evp_method_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          iVar3 = ossl_encoder_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          iVar4 = ossl_decoder_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          iVar5 = ossl_store_loader_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          return iVar2 + iVar3 + iVar4 + iVar5 == 4;
        }
        return true;
      }
    }
  }
  return false;
}



undefined8 ossl_provider_deactivate(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = provider_deactivate(param_1,1,param_2);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = provider_remove_store_methods(param_1);
    return uVar2;
  }
  return 0;
}



undefined8 ossl_provider_ctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0xd8);
  }
  return 0;
}



undefined8 ossl_provider_name(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 ossl_provider_dso(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



void ossl_provider_module_name(long param_1)

{
  DSO_get_filename(*(DSO **)(param_1 + 0x38));
  return;
}



void ossl_provider_module_path(long param_1)

{
  DSO_get_filename(*(DSO **)(param_1 + 0x38));
  return;
}



void core_get_params(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_2,"openssl-version");
  if (lVar1 != 0) {
    OSSL_PARAM_set_utf8_ptr(lVar1,"3.5.0");
  }
  lVar1 = OSSL_PARAM_locate(param_2,"provider-name");
  if (lVar1 != 0) {
    OSSL_PARAM_set_utf8_ptr(lVar1,*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = OSSL_PARAM_locate(param_2,"module-filename");
  if (lVar1 != 0) {
    uVar2 = ossl_provider_module_path(param_1);
    OSSL_PARAM_set_utf8_ptr(lVar1,uVar2);
  }
  OSSL_PROVIDER_get_conf_parameters(param_1,param_2);
  return;
}



undefined8 ossl_provider_get0_dispatch(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
  }
  return uVar1;
}



undefined8 ossl_provider_libctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x50);
  }
  return 0;
}



void ossl_provider_teardown(long param_1)

{
  if ((*(code **)(param_1 + 0x70) != (code *)0x0) && ((*(byte *)(param_1 + 0xd0) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00101e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0xd8));
    return;
  }
  return;
}



void ossl_provider_free(byte *param_1)

{
  byte *pbVar1;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  LOCK();
  pbVar1 = param_1 + 0x10;
  *(int *)pbVar1 = *(int *)pbVar1 + -1;
  UNLOCK();
  if (*(int *)pbVar1 != 0) {
    if ((param_1[0xd0] & 1) == 0) {
      return;
    }
    ossl_provider_free_parent(param_1,0);
    return;
  }
  if ((*param_1 & 1) != 0) {
    ossl_provider_teardown();
    if (*(ERR_STRING_DATA **)(param_1 + 0x68) != (ERR_STRING_DATA *)0x0) {
      ERR_unload_strings(*(int *)(param_1 + 0x60),*(ERR_STRING_DATA **)(param_1 + 0x68));
      CRYPTO_free(*(void **)(param_1 + 0x68));
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
    }
    CRYPTO_free(*(void **)(param_1 + 0xb0));
    *param_1 = *param_1 & 0xfe;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    param_1[0xbc] = 0;
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    param_1[0xbf] = 0;
  }
  ossl_init_thread_deregister(param_1);
  DSO_free(*(DSO **)(param_1 + 0x38));
  CRYPTO_free(*(void **)(param_1 + 0x28));
  CRYPTO_free(*(void **)(param_1 + 0x30));
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x48),infopair_free);
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0xc0));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 8));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x18));
  CRYPTO_free(param_1);
  return;
}



void provider_deactivate_free(byte *param_1)

{
  if ((*param_1 & 2) == 0) {
    ossl_provider_free();
    return;
  }
  ossl_provider_deactivate(param_1,1);
  ossl_provider_free(param_1);
  return;
}



int ossl_provider_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  iVar3 = iVar3 + 1;
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    iVar2 = ossl_provider_up_ref_parent(param_1,0);
    if (iVar2 == 0) {
      iVar3 = 0;
      ossl_provider_free(param_1);
    }
  }
  return iVar3;
}



long ossl_provider_find(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 auStack_118 [5];
  undefined8 local_f0;
  long local_30;
  
  bVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    puVar4 = auStack_118;
    for (lVar3 = 0x1d; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    if ((param_3 == 0) && (iVar1 = ossl_lib_ctx_is_default(param_1), iVar1 != 0)) {
      OPENSSL_init_crypto(0x40,0);
    }
    local_f0 = param_2;
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 != 0) {
      OPENSSL_sk_sort(*(undefined8 *)(lVar2 + 8));
      iVar1 = OPENSSL_sk_find(*(undefined8 *)(lVar2 + 8),auStack_118);
      if (iVar1 == -1) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
      }
      else {
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8),iVar1);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
        if ((lVar3 != 0) && (iVar1 = ossl_provider_up_ref(lVar3), iVar1 != 0)) goto LAB_00102085;
      }
    }
  }
  lVar3 = 0;
LAB_00102085:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



void core_provider_up_ref_intern(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    ossl_provider_up_ref();
    return;
  }
  ossl_provider_activate(param_1,1,0);
  return;
}



long provider_new(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar1 = CRYPTO_zalloc(0xe8,"crypto/provider_core.c",0x1bd);
  if (lVar1 != 0) {
    LOCK();
    *(undefined4 *)(lVar1 + 0x10) = 1;
    UNLOCK();
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(lVar1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      ossl_provider_free(lVar1);
      ERR_new();
      uVar4 = 0x1c5;
    }
    else {
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long *)(lVar1 + 0xc0) = lVar2;
      if (lVar2 != 0) {
        lVar2 = CRYPTO_THREAD_lock_new();
        *(long *)(lVar1 + 8) = lVar2;
        if (lVar2 != 0) {
          lVar2 = OPENSSL_sk_deep_copy(param_3,infopair_copy,infopair_free);
          *(long *)(lVar1 + 0x48) = lVar2;
          if (lVar2 != 0) {
            pcVar3 = CRYPTO_strdup(param_1,"crypto/provider_core.c",0x1d2);
            *(char **)(lVar1 + 0x28) = pcVar3;
            if (pcVar3 != (char *)0x0) {
              *(undefined8 *)(lVar1 + 0x40) = param_2;
              return lVar1;
            }
            ossl_provider_free(lVar1);
            return 0;
          }
        }
      }
      ossl_provider_free(lVar1);
      ERR_new();
      uVar4 = 0x1cf;
    }
    ERR_set_debug("crypto/provider_core.c",uVar4,"provider_new");
    ERR_set_error(0xf,0x8000f,0);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ossl_provider_new(undefined8 param_1,char *param_2,ulong param_3,long *param_4)

{
  char *__s1;
  bool bVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  long in_FS_OFFSET;
  long local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar4 == 0) {
    ERR_new();
    lVar4 = 0;
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    goto LAB_001023c4;
  }
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 == 0) {
    pauVar7 = (undefined1 (*) [16])&ossl_predefined_providers;
    __s1 = _ossl_predefined_providers;
    while (__s1 != (char *)0x0) {
      iVar3 = strcmp(__s1,param_2);
      if (iVar3 == 0) {
        local_48 = *(undefined8 *)pauVar7[2];
        local_68 = *pauVar7;
        bVar1 = true;
        local_58 = pauVar7[1];
        goto LAB_0010243e;
      }
      pauVar2 = pauVar7 + 2;
      pauVar7 = (undefined1 (*) [16])(pauVar7[2] + 8);
      __s1 = *(char **)(*pauVar2 + 8);
    }
    bVar1 = false;
LAB_0010243e:
    iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar4 + 0x20));
    if (iVar3 != 0) {
      lVar5 = *(long *)(lVar4 + 0x38);
      pauVar7 = *(undefined1 (**) [16])(lVar4 + 0x30);
      if (lVar5 != 0) {
        local_78 = 0;
        do {
          iVar3 = strcmp(*(char **)*pauVar7,param_2);
          if (iVar3 == 0) {
            if (!bVar1) {
              local_68 = *pauVar7;
              local_58 = pauVar7[1];
              local_48 = *(undefined8 *)pauVar7[2];
            }
            if (param_4 != (long *)0x0) {
              local_58._8_8_ = 0;
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
              goto LAB_001024c1;
            }
            if (*(long *)(pauVar7[1] + 8) == 0) {
              local_58._8_8_ = 0;
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
              plVar6 = (long *)local_58._8_8_;
            }
            else {
              lVar5 = OPENSSL_sk_deep_copy(*(long *)(pauVar7[1] + 8),infopair_copy,infopair_free);
              local_58._8_8_ = lVar5;
              if (lVar5 == 0) goto LAB_00102363;
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
              plVar6 = (long *)local_58._8_8_;
            }
            goto LAB_00102375;
          }
          local_78 = local_78 + 1;
          pauVar7 = (undefined1 (*) [16])(pauVar7[2] + 8);
        } while (local_78 != lVar5);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
      plVar6 = (long *)local_58._8_8_;
      if (param_4 != (long *)0x0) {
LAB_001024c1:
        if ((long *)local_58._8_8_ == (long *)0x0) goto LAB_0010230b;
        goto LAB_0010231a;
      }
      goto LAB_00102375;
    }
  }
  else {
    local_58._8_8_ = 0;
    local_58._0_8_ = param_3;
    plVar6 = param_4;
    if (param_4 != (long *)0x0) {
LAB_0010230b:
      lVar4 = OPENSSL_sk_new_null();
      local_58._8_8_ = lVar4;
      if (lVar4 == 0) goto LAB_00102363;
LAB_0010231a:
      lVar4 = *param_4;
      plVar6 = param_4 + 5;
      while (lVar4 != 0) {
        if (((int)plVar6[-4] == 4) &&
           (iVar3 = ossl_provider_info_add_parameter(local_68,lVar4,plVar6[-3]), iVar3 < 1)) {
          OPENSSL_sk_pop_free(local_58._8_8_,infopair_free);
          goto LAB_00102363;
        }
        lVar4 = *plVar6;
        plVar6 = plVar6 + 5;
      }
      plVar6 = (long *)local_58._8_8_;
    }
LAB_00102375:
    lVar5 = provider_new(param_2,local_58._0_8_,plVar6);
    if (local_58._8_8_ != 0) {
      OPENSSL_sk_pop_free(local_58._8_8_,infopair_free);
    }
    if (lVar5 != 0) {
      iVar3 = ossl_provider_set_module_path(lVar5,local_68._8_8_);
      if (iVar3 == 0) {
        lVar4 = 0;
        ossl_provider_free(lVar5);
      }
      else {
        *(undefined8 *)(lVar5 + 0x50) = param_1;
        iVar3 = ERR_get_next_error_library();
        *(int *)(lVar5 + 0x60) = iVar3;
        lVar4 = lVar5;
      }
      goto LAB_001023c4;
    }
  }
LAB_00102363:
  lVar4 = 0;
LAB_001023c4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



undefined8 ossl_provider_add_to_store(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 auStack_118 [5];
  undefined8 local_f0;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = auStack_118;
  for (lVar5 = 0x1d; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  lVar5 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar5 + 0x20));
    if (iVar1 != 0) {
      local_f0 = *(undefined8 *)(param_1 + 0x28);
      iVar1 = OPENSSL_sk_find(*(undefined8 *)(lVar5 + 8),auStack_118);
      if (iVar1 != -1) {
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar1);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
        if (param_2 != (long *)0x0) {
          iVar2 = ossl_provider_up_ref(lVar3);
          if (iVar2 == 0) {
LAB_001027b0:
            ERR_new();
            ERR_set_debug("crypto/provider_core.c",0x2ae,"ossl_provider_add_to_store");
            ERR_set_error(0xf,0x8000f,0);
            goto LAB_00102651;
          }
          *param_2 = lVar3;
        }
        if (iVar1 < 0) {
LAB_00102780:
          ossl_decoder_cache_flush(*(undefined8 *)(param_1 + 0x50));
        }
        else {
          ossl_provider_deactivate(param_1,0);
          ossl_provider_free(param_1);
        }
        uVar4 = 1;
        goto LAB_00102653;
      }
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(lVar5 + 8),param_1);
      if (iVar1 != 0) {
        *(long *)(param_1 + 0x58) = lVar5;
        iVar1 = create_provider_children(param_1);
        if (iVar1 != 0) {
          if (param_3 == 0) {
            *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) & 0xfe;
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
          }
          else {
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
          }
          if (param_2 != (long *)0x0) {
            iVar1 = ossl_provider_up_ref(param_1);
            if (iVar1 == 0) goto LAB_001027b0;
            *param_2 = param_1;
          }
          goto LAB_00102780;
        }
        OPENSSL_sk_delete_ptr(*(undefined8 *)(lVar5 + 8),param_1);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
    }
  }
LAB_00102651:
  uVar4 = 0;
LAB_00102653:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 core_provider_free_intern(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    ossl_provider_free();
    return 1;
  }
  uVar1 = ossl_provider_deactivate(param_1,1);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 provider_activate_fallbacks(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *__s2;
  undefined8 *puVar6;
  long lVar7;
  int local_3c;
  
  iVar2 = CRYPTO_THREAD_read_lock(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 9);
  CRYPTO_THREAD_unlock(param_1[4]);
  if ((bVar1 & 1) == 0) {
    return 1;
  }
  iVar2 = CRYPTO_THREAD_write_lock(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    CRYPTO_THREAD_unlock(param_1[4]);
    return 1;
  }
  puVar4 = &ossl_predefined_providers;
  local_3c = 0;
  __s2 = _ossl_predefined_providers;
  if (_ossl_predefined_providers != (char *)0x0) {
    do {
      puVar6 = (undefined8 *)param_1[6];
      if ((puVar4[0x20] & 1) != 0) {
        lVar3 = param_1[7];
        lVar7 = 0;
        if (lVar3 != 0) {
          do {
            iVar2 = strcmp((char *)*puVar6,__s2);
            if (iVar2 == 0) {
              uVar5 = puVar6[3];
              goto LAB_0010290b;
            }
            lVar7 = lVar7 + 1;
            puVar6 = puVar6 + 5;
          } while (lVar3 != lVar7);
        }
        uVar5 = 0;
LAB_0010290b:
        lVar3 = provider_new(__s2,*(undefined8 *)(puVar4 + 0x10),uVar5);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x50) = *param_1;
          iVar2 = ERR_get_next_error_library();
          *(int *)(lVar3 + 0x60) = iVar2;
          iVar2 = provider_activate(lVar3,0,0);
          if (-1 < iVar2) {
            *(undefined8 **)(lVar3 + 0x58) = param_1;
            iVar2 = OPENSSL_sk_push(param_1[1],lVar3);
            if (iVar2 != 0) {
              local_3c = local_3c + 1;
              goto LAB_001028d0;
            }
          }
          ossl_provider_free(lVar3);
        }
        goto LAB_001029a8;
      }
LAB_001028d0:
      __s2 = *(char **)(puVar4 + 0x28);
      puVar4 = puVar4 + 0x28;
    } while (__s2 != (char *)0x0);
    if (0 < local_3c) {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
      uVar5 = 1;
      goto LAB_00102991;
    }
  }
LAB_001029a8:
  uVar5 = 0;
LAB_00102991:
  CRYPTO_THREAD_unlock(param_1[4]);
  return uVar5;
}



int ossl_provider_doall_activated(undefined8 param_1,code *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  lVar6 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar6 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    iVar3 = ossl_lib_ctx_is_default(param_1);
    if (iVar3 != 0) {
      OPENSSL_init_crypto(0x40,0);
    }
    iVar3 = 1;
    goto LAB_00102a29;
  }
  iVar3 = ossl_lib_ctx_is_default(param_1);
  if (iVar3 != 0) {
    OPENSSL_init_crypto(0x40,0);
  }
  iVar3 = provider_activate_fallbacks(lVar6);
  if ((iVar3 != 0) && (iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar6 + 0x20)), iVar3 != 0))
  {
    lVar7 = OPENSSL_sk_dup(*(undefined8 *)(lVar6 + 8));
    if (lVar7 != 0) {
      iVar4 = OPENSSL_sk_num(lVar7);
      iVar10 = iVar4 + -1;
      if (iVar10 < 0) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
LAB_00102cdc:
        iVar3 = 1;
      }
      else {
        do {
          pbVar8 = (byte *)OPENSSL_sk_value(lVar7,iVar10);
          iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(pbVar8 + 8));
          if (iVar3 == 0) {
LAB_00102ba8:
            iVar10 = iVar10 + 1;
            iVar3 = 0;
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
            if (iVar10 < iVar4) goto LAB_00102bbc;
            goto LAB_00102c24;
          }
          if ((*pbVar8 & 2) == 0) {
            iVar4 = iVar4 + -1;
            OPENSSL_sk_delete(lVar7,iVar10);
          }
          else {
            pbVar1 = pbVar8 + 0x10;
            LOCK();
            local_44 = *(int *)pbVar1;
            *(int *)pbVar1 = *(int *)pbVar1 + 1;
            UNLOCK();
            local_44 = local_44 + 1;
            iVar3 = CRYPTO_atomic_add(pbVar8 + 0x20,1,&local_44,*(undefined8 *)(pbVar8 + 0x18));
            if (iVar3 == 0) {
              LOCK();
              local_44 = *(int *)pbVar1;
              *(int *)pbVar1 = *(int *)pbVar1 + -1;
              UNLOCK();
              local_44 = local_44 + -1;
              CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar8 + 8));
              goto LAB_00102ba8;
            }
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar8 + 8));
          bVar11 = iVar10 != 0;
          iVar10 = iVar10 + -1;
        } while (bVar11);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
        if (iVar4 < 1) goto LAB_00102cdc;
        iVar10 = 0;
        do {
          uVar9 = OPENSSL_sk_value(lVar7,iVar10);
          iVar3 = (*param_2)(uVar9,param_3);
          if (iVar3 == 0) goto LAB_00102ccb;
          iVar10 = iVar10 + 1;
        } while (iVar4 != iVar10);
        iVar3 = 1;
LAB_00102ccb:
        iVar10 = 0;
LAB_00102bbc:
        do {
          lVar6 = OPENSSL_sk_value(lVar7,iVar10);
          iVar5 = CRYPTO_atomic_add(lVar6 + 0x20,0xffffffff,&local_44,*(undefined8 *)(lVar6 + 0x18))
          ;
          if (iVar5 == 0) {
            iVar3 = 0;
          }
          else {
            iVar5 = iVar3;
            if ((local_44 < 1) &&
               (iVar5 = CRYPTO_atomic_add(lVar6 + 0x20,1,&local_44,*(undefined8 *)(lVar6 + 0x18)),
               iVar5 != 0)) {
              provider_deactivate(lVar6,0,1);
              iVar5 = iVar3;
            }
            LOCK();
            piVar2 = (int *)(lVar6 + 0x10);
            local_44 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_44 = local_44 + -1;
            iVar3 = iVar5;
          }
          iVar10 = iVar10 + 1;
        } while (iVar4 != iVar10);
      }
LAB_00102c24:
      OPENSSL_sk_free(lVar7);
      goto LAB_00102a29;
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
  }
  iVar3 = 0;
LAB_00102a29:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



byte OSSL_PROVIDER_available(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar2 = provider_activate_fallbacks(lVar3);
    if (((iVar2 != 0) &&
        (pbVar4 = (byte *)ossl_provider_find(param_1,param_2,0), pbVar4 != (byte *)0x0)) &&
       (iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(pbVar4 + 8)), iVar2 != 0)) {
      bVar1 = *pbVar4;
      CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar4 + 8));
      ossl_provider_free(pbVar4);
      return bVar1 >> 1 & 1;
    }
  }
  return 0;
}



undefined8 ossl_provider_gettable_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0xd8));
    return uVar1;
  }
  return 0;
}



undefined8 ossl_provider_get_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0xd8));
    return uVar1;
  }
  return 0;
}



int ossl_provider_self_test(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0xd8));
    if (iVar1 == 0) {
      provider_remove_store_methods(param_1);
      return 0;
    }
  }
  return iVar1;
}



undefined8 ossl_provider_random_bytes(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xd8));
    return uVar1;
  }
  return 0;
}



undefined8 ossl_provider_get_capabilities(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0xd8));
    return uVar1;
  }
  return 1;
}



undefined8 ossl_provider_query_operation(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xd8));
    return uVar1;
  }
  return 0;
}



void ossl_provider_unquery_operation(long param_1)

{
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xd8));
    return;
  }
  return;
}



undefined8 ossl_provider_set_operation_bit(long param_1,ulong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xc0));
  if (iVar1 == 0) {
LAB_00103030:
    uVar3 = 0;
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xb0);
    uVar4 = param_2 >> 3;
    if (*(ulong *)(param_1 + 0xb8) <= uVar4) {
      pvVar2 = CRYPTO_realloc(pvVar2,(int)(uVar4 + 1),"crypto/provider_core.c",0x7dc);
      if (pvVar2 == (void *)0x0) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xc0));
        goto LAB_00103030;
      }
      *(void **)(param_1 + 0xb0) = pvVar2;
      memset((void *)((long)pvVar2 + *(long *)(param_1 + 0xb8)),0,
             (uVar4 - *(long *)(param_1 + 0xb8)) + 1);
      *(ulong *)(param_1 + 0xb8) = uVar4 + 1;
      pvVar2 = *(void **)(param_1 + 0xb0);
    }
    *(byte *)((long)pvVar2 + uVar4) =
         *(byte *)((long)pvVar2 + uVar4) | (byte)(1 << ((byte)param_2 & 7));
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xc0));
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 ossl_provider_test_operation_bit(long param_1,ulong param_2,uint *param_3)

{
  int iVar1;
  
  if (param_3 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x7f4,"ossl_provider_test_operation_bit");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    *param_3 = 0;
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0xc0));
    if (iVar1 != 0) {
      if (param_2 >> 3 < *(ulong *)(param_1 + 0xb8)) {
        *param_3 = (uint)((*(byte *)(*(long *)(param_1 + 0xb0) + (param_2 >> 3)) &
                          (byte)(1 << ((byte)param_2 & 7))) != 0);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xc0));
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_provider_get_parent(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



byte ossl_provider_is_child(long param_1)

{
  return *(byte *)(param_1 + 0xd0) & 1;
}



undefined8 ossl_provider_set_child(long param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
  *(undefined8 *)(param_1 + 200) = param_2;
  return 1;
}



undefined8 ossl_provider_default_props_update(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = ossl_lib_ctx_get_data(param_1,1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/provider_core.c",0x14f,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10));
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          iVar5 = iVar4 + 1;
          lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 0x10),iVar4);
          (**(code **)(lVar3 + 0x18))(param_2,*(undefined8 *)(lVar3 + 0x20));
          iVar4 = iVar5;
        } while (iVar5 != iVar1);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
      return 1;
    }
  }
  return 0;
}


