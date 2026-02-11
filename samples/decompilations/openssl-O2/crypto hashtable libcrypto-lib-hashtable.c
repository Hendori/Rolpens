
void internal_free_nop(void)

{
  return;
}



void free_old_entry(void *param_1)

{
  (**(code **)(*(long *)((long)param_1 + 0x20) + 8))();
  CRYPTO_free(param_1);
  return;
}



void free_old_neigh_table(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



void free_old_ht_value(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void * alloc_new_neighborhood_list(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  size_t __n;
  
  __n = param_1 << 6;
  pvVar1 = (void *)CRYPTO_aligned_alloc(__n,0x40,param_2,"crypto/hashtable/hashtable.c",0x9d);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = CRYPTO_malloc((int)__n,"crypto/hashtable/hashtable.c",0xa2);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  pvVar1 = memset(pvVar1,0,__n);
  return pvVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_ht_flush_internal(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (long *)0x0;
  plVar1 = (long *)CRYPTO_zalloc(0x18,"crypto/hashtable/hashtable.c",0x120);
  local_28 = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = alloc_new_neighborhood_list(0x10,plVar1 + 1);
    *plVar1 = lVar2;
    if (*local_28 != 0) {
      local_28[2] = 0xf;
      uVar3 = ossl_rcu_uptr_deref(param_1 + 0x38);
      ossl_rcu_assign_uptr(param_1 + 0x38,&local_28);
      uVar4 = _UNK_00101088;
      *(undefined8 *)(param_1 + 0x40) = __LC1;
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      ossl_rcu_call(*(undefined8 *)(param_1 + 0x28),free_oldmd,uVar3);
      *(undefined4 *)(param_1 + 0x50) = 1;
      uVar4 = 1;
      goto LAB_001001c4;
    }
    CRYPTO_free(local_28);
  }
  uVar4 = 0;
LAB_001001c4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void free_oldmd(long *param_1)

{
  long lVar1;
  void *ptr;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar1 = param_1[2];
  lVar3 = 0;
  if (lVar1 != -1) {
    do {
      lVar2 = *param_1;
      lVar4 = 0;
      while( true ) {
        ptr = *(void **)((lVar3 + 1) * 0x40 + -0x38 + lVar2 + lVar4 * 0x10);
        if (ptr != (void *)0x0) {
          (**(code **)(*(long *)((long)ptr + 0x20) + 8))(ptr);
          CRYPTO_free(ptr);
        }
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) break;
        lVar2 = *param_1;
      }
      bVar5 = lVar1 != lVar3;
      lVar3 = lVar3 + 1;
    } while (bVar5);
  }
  CRYPTO_free((void *)param_1[1]);
  CRYPTO_free(param_1);
  return;
}



undefined8 grow_hashtable(long param_1,long param_2)

{
  void *ptr;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)ossl_rcu_uptr_deref(param_1 + 0x38);
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar4 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/hashtable/hashtable.c",0x1b3);
    local_48 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      param_2 = param_2 * 2;
      uVar5 = alloc_new_neighborhood_list(param_2,puVar4 + 1);
      *puVar4 = uVar5;
      ptr = (void *)*local_48;
      if (ptr != (void *)0x0) {
        local_48[2] = param_2 - 1U;
        lVar1 = *(long *)(param_1 + 0x40);
        if (lVar1 != 0) {
          lVar6 = 0;
          puVar11 = (ulong *)*puVar3;
          do {
            puVar8 = puVar11 + 8;
            do {
              if (puVar11[1] != 0) {
                uVar2 = *puVar11;
                lVar7 = 0;
                uVar9 = param_2 - 1U & uVar2;
                while (*(long *)((long)ptr + lVar7 * 0x10 + uVar9 * 0x40 + 8) != 0) {
                  lVar7 = lVar7 + 1;
                  if (lVar7 == 4) {
                    CRYPTO_free(ptr);
                    CRYPTO_free(local_48);
                    uVar5 = grow_hashtable(param_1,param_2);
                    goto LAB_00100309;
                  }
                }
                puVar10 = (ulong *)((long)ptr + lVar7 * 0x10 + uVar9 * 0x40);
                puVar10[1] = puVar11[1];
                *puVar10 = uVar2;
              }
              puVar11 = puVar11 + 2;
            } while (puVar11 != puVar8);
            lVar6 = lVar6 + 1;
            puVar11 = puVar8;
          } while (lVar1 != lVar6);
        }
        *(long *)(param_1 + 0x40) = param_2;
        ossl_rcu_assign_uptr(param_1 + 0x38,&local_48);
        ossl_rcu_call(*(undefined8 *)(param_1 + 0x28),free_old_neigh_table,puVar3);
        *(undefined4 *)(param_1 + 0x50) = 1;
        uVar5 = 1;
        goto LAB_00100309;
      }
      CRYPTO_free((void *)0x0);
      CRYPTO_free(local_48);
    }
  }
  uVar5 = 0;
LAB_00100309:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * ossl_ht_new(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *ptr;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *ptr_00;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x58,"crypto/hashtable/hashtable.c",0xb1);
  if (ptr != (undefined8 *)0x0) {
    lVar5 = CRYPTO_THREAD_lock_new();
    ptr[6] = lVar5;
    if (lVar5 != 0) {
      uVar2 = param_1[3];
      uVar7 = param_1[4];
      uVar3 = *param_1;
      uVar4 = param_1[1];
      ptr[2] = param_1[2];
      ptr[3] = uVar2;
      ptr[4] = uVar7;
      *ptr = uVar3;
      ptr[1] = uVar4;
      if (ptr[3] == 0) {
        lVar5 = ptr[1];
        ptr[8] = 0x10;
      }
      else {
        uVar8 = ptr[3] - 1;
        uVar8 = uVar8 >> 1 | uVar8;
        uVar8 = uVar8 >> 2 | uVar8;
        uVar8 = uVar8 >> 4 | uVar8;
        uVar8 = uVar8 >> 8 | uVar8;
        lVar5 = ptr[1];
        ptr[8] = (uVar8 >> 0x10 | uVar8) + 1;
      }
      if (lVar5 == 0) {
        ptr[1] = 0x100000;
      }
      puVar6 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/hashtable/hashtable.c",0xcd);
      ptr[7] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        uVar7 = alloc_new_neighborhood_list(ptr[8],puVar6 + 1);
        plVar1 = (long *)ptr[7];
        *puVar6 = uVar7;
        if (*plVar1 != 0) {
          uVar7 = *param_1;
          plVar1[2] = ptr[8] + -1;
          lVar5 = ossl_rcu_lock_new(1,uVar7);
          ptr[5] = lVar5;
          if (lVar5 != 0) {
            if (ptr[2] == 0) {
              ptr[2] = &ossl_fnv1a_hash;
              return ptr;
            }
            return ptr;
          }
        }
      }
      lVar5 = ptr[6];
    }
    CRYPTO_THREAD_lock_free(lVar5);
    ossl_rcu_lock_free(ptr[5]);
    ptr_00 = (void *)ptr[7];
    if (ptr_00 != (void *)0x0) {
      CRYPTO_free(*(void **)((long)ptr_00 + 8));
      ptr_00 = (void *)ptr[7];
    }
    CRYPTO_free(ptr_00);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void ossl_ht_read_lock(long param_1)

{
  ossl_rcu_read_lock(*(undefined8 *)(param_1 + 0x28));
  return;
}



void ossl_ht_read_unlock(long param_1)

{
  ossl_rcu_read_unlock(*(undefined8 *)(param_1 + 0x28));
  return;
}



void ossl_ht_write_lock(long param_1)

{
  ossl_rcu_write_lock(*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



void ossl_ht_write_unlock(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  ossl_rcu_write_unlock(*(undefined8 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    return;
  }
  ossl_synchronize_rcu(*(undefined8 *)(param_1 + 0x28));
  return;
}



void ossl_ht_flush(void)

{
  ossl_ht_flush_internal();
  return;
}



void ossl_ht_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_ht_write_lock();
    ossl_ht_flush_internal(param_1);
    ossl_ht_write_unlock(param_1);
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x30));
    ossl_rcu_lock_free(*(undefined8 *)((long)param_1 + 0x28));
    CRYPTO_free(*(void **)(*(long *)((long)param_1 + 0x38) + 8));
    CRYPTO_free(*(void **)((long)param_1 + 0x38));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_ht_count(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



void ossl_ht_foreach_until(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = (long *)ossl_rcu_uptr_deref(param_1 + 0x38);
  if (plVar2[2] != -1) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      lVar3 = *plVar2;
      lVar5 = 0;
      while( true ) {
        lVar3 = *(long *)(uVar4 * 0x40 + -0x38 + lVar3 + lVar5 * 0x10);
        if ((lVar3 != 0) && (iVar1 = (*param_2)(lVar3,param_3), iVar1 == 0)) {
          return;
        }
        lVar5 = lVar5 + 1;
        if (lVar5 == 4) break;
        lVar3 = *plVar2;
      }
    } while (uVar4 < plVar2[2] + 1U);
  }
  return;
}



long * ossl_ht_filter(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  plVar4 = (long *)CRYPTO_zalloc(param_2 * 8 + 0x10,"crypto/hashtable/hashtable.c",0x171);
  if (plVar4 != (long *)0x0) {
    plVar4[1] = (long)(plVar4 + 2);
    plVar5 = (long *)ossl_rcu_uptr_deref(param_1 + 0x38);
    if (plVar5[2] != -1) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
        lVar6 = *plVar5;
        lVar8 = 0;
        while( true ) {
          lVar6 = *(long *)(uVar7 * 0x40 + -0x38 + lVar6 + lVar8 * 0x10);
          if ((lVar6 != 0) && (iVar3 = (*param_3)(lVar6,param_4), iVar3 != 0)) {
            lVar2 = *plVar4;
            lVar1 = lVar2 + 1;
            *plVar4 = lVar1;
            *(long *)(plVar4[1] + lVar2 * 8) = lVar6;
            if (lVar1 == param_2) {
              return plVar4;
            }
          }
          lVar8 = lVar8 + 1;
          if (lVar8 == 4) break;
          lVar6 = *plVar5;
        }
      } while (uVar7 < plVar5[2] + 1U);
    }
  }
  return plVar4;
}



void ossl_ht_value_list_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined4 ossl_ht_insert(long param_1,size_t *param_2,long *param_3,undefined8 *param_4)

{
  size_t __n;
  void *__src;
  long *plVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *ptr;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_70;
  long *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *param_3;
  if (lVar7 != 0) {
    iVar10 = 0x28;
    lVar11 = param_3[1];
    if (*(int *)(param_1 + 0x20) == 1) {
      iVar10 = (int)*param_2 + 0x28;
    }
    ptr = (long *)CRYPTO_malloc(iVar10,"crypto/hashtable/hashtable.c",0x25c);
    if (ptr != (long *)0x0) {
      iVar10 = *(int *)(param_1 + 0x20);
      ptr[4] = param_1;
      __n = *param_2;
      __src = (void *)param_2[1];
      ptr[3] = 0;
      *ptr = lVar7;
      ptr[1] = lVar11;
      if (iVar10 != 0) {
        ptr[2] = __n;
        ptr[3] = (long)(ptr + 5);
        memcpy(ptr + 5,__src,__n);
      }
      uVar6 = (**(code **)(param_1 + 0x10))(__src,__n);
      iVar10 = 5;
LAB_00100a36:
      plVar1 = *(long **)(param_1 + 0x38);
      local_70 = -1;
      uVar2 = plVar1[2];
      iVar4 = *(int *)(param_1 + 0x24);
      uVar8 = uVar6 & uVar2;
      local_50 = ptr;
LAB_00100a70:
      lVar7 = *plVar1;
      lVar9 = 0;
      lVar13 = uVar8 * 0x40;
      lVar11 = lVar13;
      do {
        lVar12 = lVar9 * 0x10;
        lVar7 = ossl_rcu_uptr_deref(lVar7 + lVar13 + lVar12 + 8);
        if (lVar7 == 0) {
          if (iVar4 != 0) goto LAB_00100b1b;
          local_70 = lVar9;
          if (lVar9 == 3) goto LAB_00100bad;
        }
        else {
          iVar3 = CRYPTO_atomic_load(*plVar1 + lVar11,&local_48,*(undefined8 *)(param_1 + 0x30));
          if (iVar3 == 0) goto LAB_00100cb8;
          if (uVar6 == local_48) {
            if (((((void *)local_50[3] == (void *)0x0) || (*(void **)(lVar7 + 0x18) == (void *)0x0))
                || (local_50[2] != *(size_t *)(lVar7 + 0x10))) ||
               (iVar3 = memcmp((void *)local_50[3],*(void **)(lVar7 + 0x18),local_50[2]), iVar3 == 0
               )) {
              if ((param_4 == (undefined8 *)0x0) ||
                 (iVar10 = CRYPTO_atomic_store(lVar12 + lVar13 + *plVar1,uVar6,
                                               *(undefined8 *)(param_1 + 0x30)), iVar10 == 0))
              goto LAB_00100cb8;
              lVar7 = *plVar1;
              *param_4 = *(undefined8 *)(lVar7 + lVar13 + 8 + lVar9 * 0x10);
              ossl_rcu_assign_uptr(lVar12 + 8 + lVar7 + lVar13,&local_50);
              ossl_rcu_call(*(undefined8 *)(param_1 + 0x28),free_old_ht_value,*param_4);
              *(undefined4 *)(param_1 + 0x50) = 1;
              goto LAB_00100b52;
            }
          }
          if (lVar9 == 3) goto LAB_00100b80;
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
        lVar7 = *plVar1;
      } while( true );
    }
  }
  uVar5 = 0;
LAB_00100b57:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
LAB_00100b80:
  if ((iVar4 == 0) || (uVar8 = uVar8 + 1 & plVar1[2], (uVar6 & uVar2) == uVar8)) goto LAB_00100bad;
  goto LAB_00100a70;
LAB_00100bad:
  if (local_70 != -1) {
    lVar13 = uVar8 << 6;
    lVar12 = local_70 << 4;
LAB_00100b1b:
    iVar10 = CRYPTO_atomic_store(lVar13 + lVar12 + *plVar1,uVar6,*(undefined8 *)(param_1 + 0x30));
    if (iVar10 == 0) {
LAB_00100cb8:
      uVar5 = 0;
      goto LAB_00100cba;
    }
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    ossl_rcu_assign_uptr(lVar13 + 8 + lVar12 + *plVar1,&local_50);
LAB_00100b52:
    uVar5 = 1;
    goto LAB_00100b57;
  }
  iVar10 = iVar10 + -1;
  if ((iVar10 == 0) || (iVar4 = grow_hashtable(param_1,*(undefined8 *)(param_1 + 0x40)), iVar4 == 0)
     ) goto LAB_00100bd0;
  goto LAB_00100a36;
LAB_00100bd0:
  uVar5 = 0xffffffff;
LAB_00100cba:
  CRYPTO_free(ptr);
  goto LAB_00100b57;
}



long ossl_ht_get(long param_1,size_t *param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(param_1 + 0x24);
  uVar4 = (**(code **)(param_1 + 0x10))(param_2[1],*param_2);
  plVar5 = (long *)ossl_rcu_uptr_deref(param_1 + 0x38);
  uVar2 = plVar5[2];
  uVar7 = uVar4 & uVar2;
LAB_00100de7:
  lVar6 = *plVar5;
  lVar8 = 8;
  do {
    lVar6 = ossl_rcu_uptr_deref(lVar6 + uVar7 * 0x40 + lVar8);
    if (lVar6 == 0) {
      if ((iVar1 != 0) || (lVar8 == 0x38)) goto LAB_00100e60;
    }
    else {
      iVar3 = CRYPTO_atomic_load(uVar7 * 0x40 + -8 + lVar8 + *plVar5,&local_48,
                                 *(undefined8 *)(param_1 + 0x30));
      if (iVar3 == 0) goto LAB_00100e60;
      if (local_48 == uVar4) {
        if (((((void *)param_2[1] == (void *)0x0) || (*(void **)(lVar6 + 0x18) == (void *)0x0)) ||
            (*(size_t *)(lVar6 + 0x10) != *param_2)) ||
           (iVar3 = memcmp(*(void **)(lVar6 + 0x18),(void *)param_2[1],*(size_t *)(lVar6 + 0x10)),
           iVar3 == 0)) goto LAB_00100e63;
      }
      if (lVar8 == 0x38) break;
    }
    lVar8 = lVar8 + 0x10;
    lVar6 = *plVar5;
  } while( true );
  if ((iVar1 == 0) || (uVar7 = uVar7 + 1 & plVar5[2], (uVar4 & uVar2) == uVar7)) {
LAB_00100e60:
    lVar6 = 0;
LAB_00100e63:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar6;
  }
  goto LAB_00100de7;
}



undefined8 ossl_ht_delete(long param_1,size_t *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    lVar6 = 0;
    uVar3 = (**(code **)(param_1 + 0x10))(param_2[1],*param_2);
    lVar7 = ((*(long **)(param_1 + 0x38))[2] & uVar3) * 0x40;
    puVar8 = (ulong *)(**(long **)(param_1 + 0x38) + lVar7);
    puVar5 = puVar8;
    do {
      uVar1 = puVar5[1];
      if ((uVar1 != 0) && (*puVar5 == uVar3)) {
        if ((*(void **)(uVar1 + 0x18) == (void *)0x0) ||
           ((((void *)param_2[1] == (void *)0x0 || (*param_2 != *(size_t *)(uVar1 + 0x10))) ||
            (iVar2 = memcmp((void *)param_2[1],*(void **)(uVar1 + 0x18),*param_2), iVar2 == 0)))) {
          iVar2 = CRYPTO_atomic_store(puVar8 + lVar6 * 2,0,*(undefined8 *)(param_1 + 0x30));
          if (iVar2 != 0) {
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
            ossl_rcu_assign_uptr(lVar7 + 8 + lVar6 * 0x10 + **(long **)(param_1 + 0x38),&local_48);
            ossl_rcu_call(*(undefined8 *)(param_1 + 0x28),free_old_entry,uVar1);
            uVar4 = 1;
            *(undefined4 *)(param_1 + 0x50) = 1;
            goto LAB_00100f79;
          }
          break;
        }
      }
      lVar6 = lVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (lVar6 != 4);
  }
  uVar4 = 0;
LAB_00100f79:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


