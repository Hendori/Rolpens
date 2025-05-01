
void lh_QUERY_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUERY_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUERY_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUERY_doall_arg_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void impl_cache_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    (**(code **)((long)param_1 + 0x20))(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void impl_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    (**(code **)((long)param_1 + 0x20))(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void query_hash(long param_1)

{
  OPENSSL_LH_strhash(*(undefined8 *)(param_1 + 8));
  return;
}



void impl_cache_flush_alg(undefined8 param_1,long param_2)

{
  OPENSSL_LH_doall(*(undefined8 *)(param_2 + 0x10),impl_cache_free);
  OPENSSL_LH_flush(*(undefined8 *)(param_2 + 0x10));
  return;
}



void alg_copy(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  OPENSSL_sk_push(param_3);
  return;
}



void impl_cache_flush_one_alg(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = OPENSSL_LH_get_down_load(*(undefined8 *)(param_2 + 0x10));
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *param_3 = uVar1;
  OPENSSL_LH_set_down_load(uVar1,0);
  OPENSSL_LH_doall_arg_thunk
            (*param_3,lh_QUERY_doall_IMPL_CACHE_FLUSH_thunk,impl_cache_flush_cache,param_3);
  OPENSSL_LH_set_down_load(*(undefined8 *)(param_2 + 0x10),uVar2);
  return;
}



void alg_cleanup(undefined8 param_1,void *param_2,long param_3)

{
  if (param_2 != (void *)0x0) {
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_2 + 8),impl_free);
    OPENSSL_LH_doall(*(undefined8 *)((long)param_2 + 0x10),impl_cache_free);
    OPENSSL_LH_free(*(undefined8 *)((long)param_2 + 0x10));
    CRYPTO_free(param_2);
  }
  if (param_3 != 0) {
    ossl_sa_set(*(undefined8 *)(param_3 + 8),param_1,0);
    return;
  }
  return;
}



int query_cmp(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = strcmp((char *)param_1[1],(char *)param_2[1]);
  if ((((iVar3 == 0) && (uVar1 = *param_1, uVar1 != 0)) && (uVar2 = *param_2, uVar2 != 0)) &&
     (iVar3 = 1, uVar2 <= uVar1)) {
    iVar3 = -(uint)(uVar2 < uVar1);
  }
  return iVar3;
}



void lh_QUERY_doall_IMPL_CACHE_FLUSH_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void alg_cleanup_by_provider(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 8));
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    iVar4 = 0;
    do {
      while( true ) {
        ptr = (long *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 8),iVar2);
        if (*ptr != param_3[1]) break;
        iVar4 = iVar4 + 1;
        OPENSSL_sk_delete(*(undefined8 *)(param_2 + 8),iVar2);
        (*(code *)ptr[4])(ptr[2]);
        CRYPTO_free(ptr);
        bVar5 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar5) goto LAB_001002d0;
      }
      bVar5 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar5);
LAB_001002d0:
    if (0 < iVar4) {
      lVar1 = *param_3;
      lVar3 = OPENSSL_LH_num_items(*(undefined8 *)(param_2 + 0x10));
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) - lVar3;
      OPENSSL_LH_doall(*(undefined8 *)(param_2 + 0x10),impl_cache_free);
      OPENSSL_LH_flush(*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  return;
}



void impl_cache_flush_cache(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  void *ptr;
  
  uVar1 = *(uint *)(param_2 + 2) << 0xd ^ *(uint *)(param_2 + 2);
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  uVar1 = uVar1 << 5 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  if ((uVar1 & 1) == 0) {
    param_2[1] = param_2[1] + 1;
    return;
  }
  ptr = (void *)OPENSSL_LH_delete(*param_2,param_1);
  if (ptr != (void *)0x0) {
    (**(code **)((long)ptr + 0x20))(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
    return;
  }
  return;
}



void ossl_ctx_global_properties_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    ossl_property_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void ossl_ctx_global_properties_new(void)

{
  CRYPTO_zalloc(0x10,"crypto/property/property.c",0x7e);
  return;
}



undefined8 ossl_ctx_global_properties(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    iVar1 = OPENSSL_init_crypto(0x40,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = ossl_lib_ctx_get_data(param_1,0xe);
  return uVar2;
}



byte ossl_global_properties_no_mirrored(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = ossl_lib_ctx_get_data(param_1,0xe);
  bVar2 = 0;
  if (lVar1 != 0) {
    bVar2 = *(byte *)(lVar1 + 8) & 1;
  }
  return bVar2;
}



void ossl_global_properties_stop_mirroring(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_data(param_1,0xe);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 1;
  }
  return;
}



void ossl_method_store_free(void *param_1)

{
  long lVar1;
  
  if (param_1 != (void *)0x0) {
    lVar1 = *(long *)((long)param_1 + 8);
    if (lVar1 != 0) {
      ossl_sa_doall_arg(lVar1,alg_cleanup,param_1);
      lVar1 = *(long *)((long)param_1 + 8);
    }
    ossl_sa_free(lVar1);
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x18));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * ossl_method_store_new(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/property/property.c",0xf7);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    lVar2 = ossl_sa_new();
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = CRYPTO_THREAD_lock_new();
      puVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = CRYPTO_THREAD_lock_new();
        puVar1[3] = lVar2;
        if (lVar2 != 0) {
          return puVar1;
        }
      }
    }
    ossl_method_store_free(puVar1);
  }
  return (undefined8 *)0x0;
}



undefined8 ossl_method_lock_store(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x18));
    return uVar1;
  }
  return 0;
}



undefined8 ossl_method_unlock_store(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x18));
    return uVar1;
  }
  return 0;
}



undefined8
ossl_method_store_add
          (undefined8 *param_1,long param_2,int param_3,undefined *param_4,long param_5,
          code *param_6,long param_7)

{
  int iVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  long lVar4;
  int *ptr_00;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_5 == 0 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  if (param_4 == (undefined *)0x0) {
    param_4 = &_LC1;
  }
  if (param_2 == 0) {
    return 0;
  }
  ptr = (long *)CRYPTO_malloc(0x28,"crypto/property/property.c",0x151);
  if (ptr == (long *)0x0) {
    return 0;
  }
  ptr[2] = param_5;
  ptr[3] = (long)param_6;
  ptr[4] = param_7;
  iVar1 = (*param_6)(param_5);
  if (iVar1 == 0) {
    CRYPTO_free(ptr);
    return 0;
  }
  *ptr = param_2;
  iVar1 = CRYPTO_THREAD_write_lock(param_1[2]);
  if (iVar1 == 0) {
    CRYPTO_free(ptr);
    return 0;
  }
  lVar7 = (long)param_3;
  lVar3 = ossl_sa_get(param_1[1],lVar7);
  if (lVar3 != 0) {
    lVar4 = OPENSSL_LH_num_items(*(undefined8 *)(lVar3 + 0x10));
    param_1[4] = param_1[4] - lVar4;
    OPENSSL_LH_doall(*(undefined8 *)(lVar3 + 0x10),impl_cache_free);
    OPENSSL_LH_flush(*(undefined8 *)(lVar3 + 0x10));
  }
  lVar3 = ossl_prop_defn_get(*param_1,param_4);
  ptr[1] = lVar3;
  if (lVar3 == 0) {
    lVar3 = ossl_parse_property(*param_1,param_4);
    ptr[1] = lVar3;
    if (lVar3 != 0) {
      iVar1 = ossl_prop_defn_set(*param_1,param_4,ptr + 1);
      if (iVar1 == 0) {
        ossl_property_free(ptr[1]);
        ptr[1] = 0;
        CRYPTO_THREAD_unlock(param_1[2]);
        goto LAB_00100729;
      }
      goto LAB_001006bd;
    }
  }
  else {
LAB_001006bd:
    ptr_00 = (int *)ossl_sa_get(param_1[1],lVar7);
    if (ptr_00 == (int *)0x0) {
      ptr_00 = (int *)CRYPTO_zalloc(0x18,"crypto/property/property.c",0x186);
      if (ptr_00 != (int *)0x0) {
        lVar3 = OPENSSL_sk_new_null();
        *(long *)(ptr_00 + 2) = lVar3;
        if (lVar3 != 0) {
          uVar6 = OPENSSL_LH_new(query_hash,query_cmp);
          lVar3 = OPENSSL_LH_set_thunks
                            (uVar6,0x100000,lh_QUERY_cfn_thunk,lh_QUERY_doall_thunk,
                             lh_QUERY_doall_arg_thunk);
          *(long *)(ptr_00 + 4) = lVar3;
          if (lVar3 != 0) {
            *ptr_00 = param_3;
            iVar1 = ossl_sa_set(param_1[1],lVar7,ptr_00);
            if (iVar1 != 0) goto LAB_001006d6;
          }
        }
        CRYPTO_THREAD_unlock(param_1[2]);
        OPENSSL_sk_pop_free(*(undefined8 *)(ptr_00 + 2),impl_free);
        OPENSSL_LH_doall(*(undefined8 *)(ptr_00 + 4),impl_cache_free);
        OPENSSL_LH_free(*(undefined8 *)(ptr_00 + 4));
        CRYPTO_free(ptr_00);
        goto LAB_00100729;
      }
    }
    else {
LAB_001006d6:
      iVar1 = 0;
      while ((iVar2 = OPENSSL_sk_num(*(undefined8 *)(ptr_00 + 2)), iVar1 < iVar2 &&
             ((plVar5 = (long *)OPENSSL_sk_value(*(undefined8 *)(ptr_00 + 2),iVar1), *plVar5 != *ptr
              || (plVar5[1] != ptr[1]))))) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(ptr_00 + 2));
      if ((iVar1 == iVar2) && (iVar1 = OPENSSL_sk_push(*(undefined8 *)(ptr_00 + 2),ptr), iVar1 != 0)
         ) {
        CRYPTO_THREAD_unlock(param_1[2]);
        return 1;
      }
    }
  }
  CRYPTO_THREAD_unlock(param_1[2]);
LAB_00100729:
  (*(code *)ptr[4])(ptr[2]);
  CRYPTO_free(ptr);
  return 0;
}



undefined8 ossl_method_store_remove(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *ptr;
  
  if (((param_3 != 0 && param_1 != 0) && (0 < param_2)) &&
     (iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
    lVar3 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_2);
    if (lVar3 != 0) {
      lVar4 = OPENSSL_LH_num_items(*(undefined8 *)(lVar3 + 0x10));
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar4;
      OPENSSL_LH_doall(*(undefined8 *)(lVar3 + 0x10),impl_cache_free);
      OPENSSL_LH_flush(*(undefined8 *)(lVar3 + 0x10));
    }
    iVar1 = 0;
    lVar3 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_2);
    if (lVar3 != 0) {
      for (; iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar3 + 8)), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        ptr = (void *)OPENSSL_sk_value(*(undefined8 *)(lVar3 + 8),iVar1);
        if (*(long *)((long)ptr + 0x10) == param_3) {
          (**(code **)((long)ptr + 0x20))(param_3);
          CRYPTO_free(ptr);
          OPENSSL_sk_delete(*(undefined8 *)(lVar3 + 8),iVar1);
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
          return 1;
        }
      }
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
  }
  return 0;
}



undefined8 ossl_method_store_remove_all_provided(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      local_38 = param_1;
      local_30 = param_2;
      ossl_sa_doall_arg(*(undefined8 *)(param_1 + 8),alg_cleanup_by_provider,&local_38);
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
      uVar2 = 1;
      goto LAB_00100a34;
    }
  }
  uVar2 = 0;
LAB_00100a34:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_method_store_do_all(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = ossl_sa_num(*(undefined8 *)(param_1 + 8));
  lVar4 = OPENSSL_sk_new_reserve(0,uVar2);
  if (lVar4 != 0) {
    ossl_sa_doall_arg(*(undefined8 *)(param_1 + 8),alg_copy,lVar4);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
    iVar1 = OPENSSL_sk_num(lVar4);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        puVar5 = (undefined4 *)OPENSSL_sk_value(lVar4,iVar7);
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(puVar5 + 2));
        if (0 < iVar3) {
          iVar8 = 0;
          do {
            iVar9 = iVar8 + 1;
            lVar6 = OPENSSL_sk_value(*(undefined8 *)(puVar5 + 2),iVar8);
            (*param_2)(*puVar5,*(undefined8 *)(lVar6 + 0x10),param_3);
            iVar8 = iVar9;
          } while (iVar9 != iVar3);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar1);
    }
    OPENSSL_sk_free(lVar4);
    return;
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
  return;
}



undefined8
ossl_method_store_fetch(undefined8 *param_1,int param_2,long param_3,long *param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long local_60;
  long local_50;
  long *local_48;
  int local_40;
  
  lVar8 = 0;
  if (param_4 != (long *)0x0) {
    lVar8 = *param_4;
  }
  if ((((param_5 == (long *)0x0 || param_1 == (undefined8 *)0x0) || (param_2 < 1)) ||
      ((iVar2 = ossl_lib_ctx_is_default(*param_1), iVar2 != 0 &&
       (iVar2 = OPENSSL_init_crypto(0x40,0), iVar2 == 0)))) ||
     (iVar2 = CRYPTO_THREAD_read_lock(param_1[2]), iVar2 == 0)) {
    return 0;
  }
  lVar4 = ossl_sa_get(param_1[1],(long)param_2);
  if (lVar4 == 0) {
    CRYPTO_THREAD_unlock(param_1[2]);
    return 0;
  }
  if (param_3 == 0) {
    plVar6 = (long *)ossl_ctx_global_properties(*param_1,0);
    if (plVar6 != (long *)0x0) {
      local_50 = *plVar6;
      local_60 = 0;
      if (local_50 != 0) goto LAB_00100cb7;
    }
LAB_00100d75:
    for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8)), iVar2 < iVar3;
        iVar2 = iVar2 + 1) {
      local_48 = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar2);
      if ((local_48 != (long *)0x0) && ((lVar8 == 0 || (*local_48 == lVar8)))) {
        local_60 = 0;
        goto LAB_00100e54;
      }
    }
LAB_00100db7:
    local_60 = 0;
  }
  else {
    lVar5 = ossl_parse_query(*param_1,param_3,0);
    plVar6 = (long *)ossl_ctx_global_properties(*param_1,0);
    local_60 = lVar5;
    if ((plVar6 == (long *)0x0) || (*plVar6 == 0)) {
      local_50 = lVar5;
      if (lVar5 == 0) goto LAB_00100d75;
    }
    else {
      local_50 = *plVar6;
      if (lVar5 != 0) {
        local_60 = ossl_property_merge(lVar5);
        ossl_property_free(lVar5);
        local_50 = local_60;
        if (local_60 == 0) goto LAB_00100db7;
      }
    }
LAB_00100cb7:
    iVar2 = ossl_property_has_optional(local_50);
    if (iVar2 == 0) {
      for (; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8)), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        local_48 = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar2);
        if ((local_48 != (long *)0x0) &&
           (((lVar8 == 0 || (*local_48 == lVar8)) &&
            (iVar3 = ossl_property_match_count(local_50,local_48[1]), -1 < iVar3))))
        goto LAB_00100e54;
      }
    }
    else {
      local_40 = -1;
      bVar1 = false;
      local_48 = (long *)0x0;
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8)), iVar2 < iVar3;
          iVar2 = iVar2 + 1) {
        plVar6 = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar2);
        if (((plVar6 != (long *)0x0) && ((lVar8 == 0 || (lVar8 == *plVar6)))) &&
           (iVar3 = ossl_property_match_count(local_50,plVar6[1]), local_40 < iVar3)) {
          bVar1 = true;
          local_48 = plVar6;
          local_40 = iVar3;
        }
      }
      if (bVar1) {
LAB_00100e54:
        iVar2 = (*(code *)local_48[3])(local_48[2]);
        if (iVar2 != 0) {
          *param_5 = local_48[2];
          if (param_4 != (long *)0x0) {
            *param_4 = *local_48;
          }
          uVar7 = 1;
          goto LAB_00100dc2;
        }
      }
    }
  }
  uVar7 = 0;
LAB_00100dc2:
  CRYPTO_THREAD_unlock(param_1[2]);
  ossl_property_free(local_60);
  return uVar7;
}



undefined8 ossl_method_store_cache_flush_all(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  ossl_sa_doall(*(undefined8 *)(param_1 + 8),impl_cache_flush_alg);
  *(undefined8 *)(param_1 + 0x20) = 0;
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
  return 1;
}



undefined8
ossl_method_store_cache_get
          (long param_1,undefined8 param_2,int param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0 && param_4 != 0) && (0 < param_3)) {
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      lVar2 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_3);
      if (lVar2 == 0) {
LAB_00101000:
        uVar3 = 0;
      }
      else {
        local_68 = param_2;
        local_60 = param_4;
        lVar2 = OPENSSL_LH_retrieve(*(undefined8 *)(lVar2 + 0x10),&local_68);
        if (lVar2 == 0) goto LAB_00101000;
        iVar1 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
        if (iVar1 == 0) goto LAB_00101000;
        uVar3 = 1;
        *param_5 = *(undefined8 *)(lVar2 + 0x10);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
      goto LAB_00100fda;
    }
  }
  uVar3 = 0;
LAB_00100fda:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_method_store_cache_set
          (long param_1,long param_2,int param_3,char *param_4,long param_5,code *param_6,
          long param_7)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  long *ptr;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_98 [8];
  undefined8 local_90;
  int local_88;
  char local_84;
  long local_78;
  char *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == 0 || param_4 == (char *)0x0) || param_1 == 0) || (param_3 < 1)) ||
     (iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar6 = 0;
    goto LAB_00101182;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    local_90 = 0;
    local_84 = '\0';
    local_88 = OPENSSL_rdtsc();
    if (local_88 == 0) {
      local_84 = '\x01';
      local_88 = global_seed_0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    ossl_sa_doall_arg(*(undefined8 *)(param_1 + 8),impl_cache_flush_one_alg,local_98);
    *(undefined8 *)(param_1 + 0x20) = local_90;
    if (local_84 != '\0') {
      LOCK();
      global_seed_0 = global_seed_0 + local_88;
      UNLOCK();
    }
  }
  lVar2 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_3);
  if (lVar2 == 0) {
LAB_00101204:
    ptr = (long *)0x0;
LAB_00101206:
    uVar6 = 0;
    CRYPTO_free(ptr);
  }
  else {
    if (param_5 == 0) {
      local_78 = param_2;
      local_70 = param_4;
      pvVar4 = (void *)OPENSSL_LH_delete(*(undefined8 *)(lVar2 + 0x10),&local_78);
      if (pvVar4 != (void *)0x0) {
        (**(code **)((long)pvVar4 + 0x20))(*(undefined8 *)((long)pvVar4 + 0x10));
        CRYPTO_free(pvVar4);
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      }
      goto LAB_0010116e;
    }
    sVar3 = strlen(param_4);
    ptr = (long *)CRYPTO_malloc((int)sVar3 + 0x30,"crypto/property/property.c",0x38b);
    if (ptr == (long *)0x0) goto LAB_00101204;
    *ptr = param_2;
    ptr[1] = (long)(ptr + 5);
    ptr[4] = param_7;
    ptr[2] = param_5;
    ptr[3] = (long)param_6;
    iVar1 = (*param_6)(param_5);
    if (iVar1 == 0) goto LAB_00101206;
    memcpy((void *)ptr[1],param_4,sVar3 + 1);
    pvVar4 = (void *)OPENSSL_LH_insert(*(undefined8 *)(lVar2 + 0x10),ptr);
    if (pvVar4 == (void *)0x0) {
      iVar1 = OPENSSL_LH_error(*(undefined8 *)(lVar2 + 0x10));
      if (iVar1 != 0) {
        (*(code *)ptr[4])(ptr[2]);
        goto LAB_00101206;
      }
      uVar5 = *(long *)(param_1 + 0x20) + 1;
      *(ulong *)(param_1 + 0x20) = uVar5;
      if (499 < uVar5) {
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
    }
    else {
      (**(code **)((long)pvVar4 + 0x20))(*(undefined8 *)((long)pvVar4 + 0x10));
      CRYPTO_free(pvVar4);
    }
LAB_0010116e:
    uVar6 = 1;
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
LAB_00101182:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


