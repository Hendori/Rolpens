
ulong raw_hasher(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}



bool raw_comparator(long param_1,long param_2)

{
  return param_2 == param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 check_tuning(long param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *(float **)(param_1 + 0x28);
  if (pfVar2 == (float *)default_tuning) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((__LC0 < fVar1) && (fVar1 < _LC1)) && (__LC2 < pfVar2[3])) && (0.0 <= *pfVar2)) {
    fVar3 = *pfVar2 + __LC0;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= _LC4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *(undefined1 **)(param_1 + 0x28) = default_tuning;
  return 0;
}



long hash_find_entry(long *param_1,long param_2,undefined8 *param_3,char param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = (*(code *)param_1[6])(param_2,param_1[2]);
  if ((ulong)param_1[2] <= uVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar6 = (long *)(uVar5 * 0x10 + *param_1);
  *param_3 = plVar6;
  if (*plVar6 == 0) {
    return 0;
  }
  if (*plVar6 != param_2) {
    cVar4 = (*(code *)param_1[7])(param_2);
    if (cVar4 == '\0') {
      while( true ) {
        if ((long *)plVar6[1] == (long *)0x0) {
          return 0;
        }
        if ((*(long *)plVar6[1] == param_2) ||
           (cVar4 = (*(code *)param_1[7])(param_2), cVar4 != '\0')) break;
        plVar6 = (long *)plVar6[1];
      }
      plVar2 = (long *)plVar6[1];
      lVar3 = *plVar2;
      if (param_4 != '\0') {
        plVar6[1] = plVar2[1];
        lVar1 = param_1[9];
        *plVar2 = 0;
        plVar2[1] = lVar1;
        param_1[9] = (long)plVar2;
        return lVar3;
      }
      return lVar3;
    }
    param_2 = *plVar6;
  }
  if (param_4 != '\0') {
    plVar2 = (long *)plVar6[1];
    if (plVar2 == (long *)0x0) {
      *plVar6 = 0;
    }
    else {
      lVar1 = plVar2[1];
      lVar3 = param_1[9];
      *plVar6 = *plVar2;
      plVar6[1] = lVar1;
      *plVar2 = 0;
      plVar2[1] = lVar3;
      param_1[9] = (long)plVar2;
    }
  }
  return param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong compute_bucket_size_isra_0(float param_1,ulong param_2,char param_3)

{
  undefined1 auVar1 [16];
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 == '\0') {
    param_1 = (float)param_2 / param_1;
    if (__LC6 <= param_1) goto LAB_0010030b;
    if (param_1 < __LC7) {
      param_2 = (ulong)param_1;
    }
    else {
      param_2 = (long)(param_1 - __LC7) ^ 0x8000000000000000;
    }
  }
  uVar4 = 10;
  if (9 < param_2) {
    uVar4 = param_2;
  }
  for (uVar4 = uVar4 | 1; uVar4 != 0xffffffffffffffff; uVar4 = uVar4 + 2) {
    for (; auVar1._8_8_ = 0, auVar1._0_8_ = uVar4,
        uVar3 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar4 / 3,
        uVar4 < 10; uVar4 = uVar4 + 2) {
      if (uVar4 != uVar3) goto LAB_001002c4;
    }
    if (uVar4 != uVar3) {
      lVar6 = 0x10;
      uVar5 = 9;
      uVar3 = 3;
      do {
        uVar3 = uVar3 + 2;
        uVar5 = uVar5 + lVar6;
        if (uVar4 <= uVar5) {
          if (uVar4 % uVar3 != 0) goto LAB_001002c4;
          break;
        }
        lVar6 = lVar6 + 8;
      } while (uVar4 % uVar3 != 0);
    }
  }
LAB_001002c4:
  if (((uVar4 >> 0x3c & 1) == 0) && (uVar4 >> 0x3d == 0)) {
    return uVar4;
  }
LAB_0010030b:
  piVar2 = __errno_location();
  *piVar2 = 0xc;
  return 0;
}



undefined8 transfer_entries(long *param_1,undefined8 *param_2,char param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)*param_2;
  if ((long *)param_2[1] <= plVar7) {
    return 1;
  }
  do {
    while (lVar6 = *plVar7, lVar6 == 0) {
LAB_00100368:
      plVar7 = plVar7 + 2;
      if ((long *)param_2[1] <= plVar7) {
        return 1;
      }
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      uVar4 = param_1[2];
      plVar8 = (long *)plVar7[1];
      do {
        lVar6 = *plVar8;
        uVar2 = (*(code *)param_1[6])(lVar6,uVar4);
        uVar4 = param_1[2];
        if (uVar4 <= uVar2) goto transfer_entries_cold;
        plVar3 = (long *)(uVar2 * 0x10 + *param_1);
        plVar5 = (long *)plVar8[1];
        if (*plVar3 == 0) {
          *plVar3 = lVar6;
          lVar6 = param_1[9];
          param_1[3] = param_1[3] + 1;
          *plVar8 = 0;
          plVar8[1] = lVar6;
          param_1[9] = (long)plVar8;
        }
        else {
          plVar8[1] = plVar3[1];
          plVar3[1] = (long)plVar8;
        }
        plVar8 = plVar5;
      } while (plVar5 != (long *)0x0);
      lVar6 = *plVar7;
    }
    plVar7[1] = 0;
    if (param_3 != '\0') goto LAB_00100368;
    uVar4 = (*(code *)param_1[6])(lVar6,param_1[2]);
    if ((ulong)param_1[2] <= uVar4) {
transfer_entries_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar8 = (long *)(uVar4 * 0x10 + *param_1);
    if (*plVar8 == 0) {
      *plVar8 = lVar6;
      param_1[3] = param_1[3] + 1;
    }
    else {
      plVar5 = (long *)param_1[9];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)malloc(0x10);
        if (plVar5 == (long *)0x0) {
          return 0;
        }
      }
      else {
        param_1[9] = plVar5[1];
      }
      lVar1 = plVar8[1];
      *plVar5 = lVar6;
      plVar5[1] = lVar1;
      plVar8[1] = (long)plVar5;
    }
    *plVar7 = 0;
    plVar7 = plVar7 + 2;
    param_2[3] = param_2[3] + -1;
    if ((long *)param_2[1] <= plVar7) {
      return 1;
    }
  } while( true );
}



undefined8 hash_get_n_buckets(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 hash_get_n_buckets_used(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 hash_get_n_entries(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



ulong hash_get_max_bucket_length(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  plVar2 = (long *)*param_1;
  uVar4 = 0;
  do {
    if ((long *)param_1[1] <= plVar2) {
      return uVar4;
    }
    while (*plVar2 != 0) {
      uVar3 = 1;
      for (lVar1 = plVar2[1]; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        uVar3 = uVar3 + 1;
      }
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
      plVar2 = plVar2 + 2;
      if ((long *)param_1[1] <= plVar2) {
        return uVar4;
      }
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



bool hash_table_ok(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  lVar3 = 0;
  lVar4 = 0;
  do {
    while( true ) {
      if ((long *)param_1[1] <= plVar2) {
        if (param_1[3] != lVar4) {
          return false;
        }
        return param_1[4] == lVar3;
      }
      if (*plVar2 != 0) break;
LAB_00100550:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 1;
    if (lVar1 == 0) goto LAB_00100550;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      lVar3 = lVar3 + 1;
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hash_print_statistics(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  for (plVar4 = (long *)*param_1; plVar4 < (long *)param_1[1]; plVar4 = plVar4 + 2) {
    while (*plVar4 == 0) {
      plVar4 = plVar4 + 2;
      if ((long *)param_1[1] <= plVar4) goto LAB_0010060d;
    }
    uVar5 = 1;
    for (lVar3 = plVar4[1]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      uVar5 = uVar5 + 1;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
  }
LAB_0010060d:
  __fprintf_chk(param_2,2,"# entries:         %lu\n",param_1[4]);
  __fprintf_chk(param_2,2,"# buckets:         %lu\n",uVar1);
  __fprintf_chk(((double)uVar2 * __LC11) / (double)uVar1,param_2,2,
                "# buckets used:    %lu (%.2f%%)\n",uVar2);
  __fprintf_chk(param_2,2,"max bucket length: %lu\n",uVar6);
  return;
}



long hash_lookup(long *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = (*(code *)param_1[6])(param_2,param_1[2]);
  if ((ulong)param_1[2] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = (long *)(uVar2 * 0x10 + *param_1);
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    while( true ) {
      if (lVar4 == param_2) {
        return param_2;
      }
      cVar1 = (*(code *)param_1[7])(param_2);
      if (cVar1 != '\0') break;
      plVar3 = (long *)plVar3[1];
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      lVar4 = *plVar3;
    }
    return *plVar3;
  }
  return 0;
}



long hash_get_first(ulong *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == 0) {
    return 0;
  }
  plVar2 = (long *)*param_1;
  if ((long *)param_1[1] <= plVar2) {
    lVar1 = hash_get_first_cold();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < (long *)param_1[1]);
  lVar1 = hash_get_first_cold();
  return lVar1;
}



long hash_get_next(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = (*(code *)param_1[6])(param_2,param_1[2]);
  if ((ulong)param_1[2] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = (long *)(uVar2 * 0x10 + *param_1);
  plVar4 = plVar3;
  do {
    lVar1 = *plVar4;
    plVar4 = (long *)plVar4[1];
    if (lVar1 == param_2) {
      if (plVar4 != (long *)0x0) {
        return *plVar4;
      }
      break;
    }
  } while (plVar4 != (long *)0x0);
  do {
    plVar3 = plVar3 + 2;
    if ((long *)param_1[1] <= plVar3) {
      return 0;
    }
  } while (*plVar3 == 0);
  return *plVar3;
}



ulong hash_get_entries(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  if ((long *)param_1[1] <= plVar2) {
    return 0;
  }
  uVar1 = 0;
  do {
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      plVar3 = plVar2;
      if (param_3 <= uVar1) {
        return uVar1;
      }
      while( true ) {
        uVar1 = uVar1 + 1;
        *(long *)(param_2 + -8 + uVar1 * 8) = lVar4;
        plVar3 = (long *)plVar3[1];
        if (plVar3 == (long *)0x0) break;
        if (param_3 == uVar1) {
          return param_3;
        }
        lVar4 = *plVar3;
      }
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < (long *)param_1[1]);
  return uVar1;
}



long hash_do_for_each(ulong *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 < (long *)param_1[1]) {
    lVar3 = 0;
    do {
      lVar4 = *plVar5;
      plVar2 = plVar5;
      if (lVar4 != 0) {
        while( true ) {
          cVar1 = (*param_2)(lVar4,param_3);
          if (cVar1 == '\0') {
            return lVar3;
          }
          plVar2 = (long *)plVar2[1];
          lVar3 = lVar3 + 1;
          if (plVar2 == (long *)0x0) break;
          lVar4 = *plVar2;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 < (long *)param_1[1]);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



ulong hash_string(byte *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = 0;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar2 = (uVar2 * 0x1f + (ulong)bVar1) % param_2;
    bVar1 = *param_1;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hash_reset_tuning(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001012c8;
  uVar1 = __LC17;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



undefined8 *
hash_initialize(undefined8 param_1,undefined1 *param_2,long param_3,code *param_4,undefined8 param_5
               )

{
  char cVar1;
  undefined8 *__ptr;
  size_t __nmemb;
  void *pvVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    param_3 = 0x100000;
  }
  if (param_4 == (code *)0x0) {
    param_4 = raw_comparator;
  }
  __ptr = (undefined8 *)malloc(0x50);
  if (__ptr != (undefined8 *)0x0) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = default_tuning;
    }
    __ptr[5] = param_2;
    cVar1 = check_tuning(__ptr);
    if (cVar1 == '\0') {
      piVar3 = __errno_location();
      *piVar3 = 0x16;
    }
    else {
      __nmemb = compute_bucket_size_isra_0(param_1,param_2[0x10]);
      __ptr[2] = __nmemb;
      if (__nmemb != 0) {
        pvVar2 = calloc(__nmemb,0x10);
        *__ptr = pvVar2;
        if (pvVar2 != (void *)0x0) {
          __ptr[6] = param_3;
          __ptr[7] = param_4;
          __ptr[1] = (void *)((long)pvVar2 + __nmemb * 0x10);
          __ptr[8] = param_5;
          __ptr[9] = 0;
          *(undefined1 (*) [16])(__ptr + 3) = (undefined1  [16])0x0;
          return __ptr;
        }
      }
    }
    free(__ptr);
  }
  return (undefined8 *)0x0;
}



void hash_clear(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  
  pauVar5 = (undefined1 (*) [16])*param_1;
  if ((undefined1 (*) [16])*param_1 < (undefined1 (*) [16])param_1[1]) {
    do {
      while (*(long *)*pauVar5 != 0) {
        pcVar4 = (code *)param_1[8];
        puVar3 = *(undefined8 **)(*pauVar5 + 8);
        while (puVar3 != (undefined8 *)0x0) {
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(*puVar3);
            pcVar4 = (code *)param_1[8];
          }
          puVar1 = (undefined8 *)puVar3[1];
          uVar2 = param_1[9];
          *puVar3 = 0;
          puVar3[1] = uVar2;
          param_1[9] = puVar3;
          puVar3 = puVar1;
        }
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(*(undefined8 *)*pauVar5);
        }
        pauVar6 = pauVar5 + 1;
        *pauVar5 = (undefined1  [16])0x0;
        pauVar5 = pauVar6;
        if ((undefined1 (*) [16])param_1[1] <= pauVar6) goto LAB_00100b34;
      }
      pauVar5 = pauVar5 + 1;
    } while (pauVar5 < (undefined1 (*) [16])param_1[1]);
  }
LAB_00100b34:
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  return;
}



void hash_free(ulong *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  piVar4 = __errno_location();
  plVar8 = (long *)*param_1;
  iVar1 = *piVar4;
  plVar5 = (long *)param_1[1];
  if ((param_1[8] != 0) && (param_1[4] != 0)) {
    if (plVar5 <= plVar8) goto LAB_00100c03;
    do {
      while (lVar7 = *plVar8, plVar6 = plVar8, lVar7 != 0) {
        while( true ) {
          (*(code *)param_1[8])(lVar7);
          plVar6 = (long *)plVar6[1];
          if (plVar6 == (long *)0x0) break;
          lVar7 = *plVar6;
        }
        plVar5 = (long *)param_1[1];
        plVar8 = plVar8 + 2;
        if (plVar5 <= plVar8) goto LAB_00100bcc;
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 < plVar5);
LAB_00100bcc:
    plVar8 = (long *)*param_1;
  }
  if (plVar8 < plVar5) {
    do {
      pvVar3 = (void *)plVar8[1];
      while (pvVar3 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar3 + 8);
        free(pvVar3);
        pvVar3 = pvVar2;
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 < (long *)param_1[1]);
  }
LAB_00100c03:
  pvVar3 = (void *)param_1[9];
  while (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar3 + 8);
    free(pvVar3);
    pvVar3 = pvVar2;
  }
  free((void *)*param_1);
  free(param_1);
  *piVar4 = iVar1;
  return;
}



undefined8 hash_rehash(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  size_t __nmemb;
  int *piVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  void *local_88;
  void *pvStack_80;
  size_t local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  lVar2 = param_1[5];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __nmemb = compute_bucket_size_isra_0
                      (*(undefined4 *)(lVar2 + 8),param_2,*(undefined1 *)(lVar2 + 0x10));
  if (__nmemb != 0) {
    if (param_1[2] == __nmemb) {
LAB_00100da3:
      uVar5 = 1;
      goto LAB_00100d62;
    }
    local_88 = calloc(__nmemb,0x10);
    if (local_88 != (void *)0x0) {
      local_58 = param_1[6];
      uStack_50 = param_1[7];
      pvStack_80 = (void *)((long)local_88 + __nmemb * 0x10);
      uStack_70 = 0;
      local_48 = param_1[8];
      local_68 = 0;
      local_40 = param_1[9];
      local_78 = __nmemb;
      local_60 = lVar2;
      cVar3 = transfer_entries(&local_88,param_1,0);
      if (cVar3 != '\0') {
        free((void *)*param_1);
        param_1[9] = local_40;
        *param_1 = local_88;
        param_1[1] = pvStack_80;
        param_1[2] = local_78;
        param_1[3] = uStack_70;
        goto LAB_00100da3;
      }
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      param_1[9] = local_40;
      cVar3 = transfer_entries(param_1,&local_88,1);
      if (cVar3 == '\0') {
hash_rehash_cold:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      cVar3 = transfer_entries(param_1,&local_88,0);
      if (cVar3 == '\0') goto hash_rehash_cold;
      free(local_88);
      *piVar4 = iVar1;
    }
  }
  uVar5 = 0;
LAB_00100d62:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 hash_insert_if_absent(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long lVar8;
  float fVar9;
  float fVar10;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = hash_find_entry(param_1,param_2,&local_38,0);
  if (lVar2 != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2;
    }
    uVar3 = 0;
    goto LAB_00100dfd;
  }
  uVar7 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar7 < 0) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    fVar10 = (float)uVar7;
    if (-1 < (long)uVar4) goto LAB_00100e3f;
LAB_00100ece:
    fVar9 = (float)uVar4;
  }
  else {
    fVar10 = (float)(long)uVar7;
    uVar4 = *(ulong *)(param_1 + 0x10);
    if ((long)uVar4 < 0) goto LAB_00100ece;
LAB_00100e3f:
    fVar9 = (float)(long)uVar4;
  }
  if (*(float *)(*(long *)(param_1 + 0x28) + 8) * fVar9 < fVar10) {
    check_tuning(param_1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (fVar10 <= fVar9 * *(float *)(lVar2 + 8)) goto LAB_00100e5e;
    fVar9 = fVar9 * *(float *)(lVar2 + 0xc);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      fVar9 = fVar9 * *(float *)(lVar2 + 8);
    }
    if (fVar9 < __LC6) {
      if (__LC7 <= fVar9) {
        uVar7 = (long)(fVar9 - __LC7) ^ 0x8000000000000000;
      }
      else {
        uVar7 = (ulong)fVar9;
      }
      cVar1 = hash_rehash(param_1,uVar7);
      if (cVar1 != '\0') {
        lVar2 = hash_find_entry(param_1,param_2,&local_38,0);
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          hash_insert_if_absent_cold();
        }
        goto LAB_00100e5e;
      }
    }
    else {
      piVar5 = __errno_location();
      *piVar5 = 0xc;
    }
LAB_00100f30:
    uVar3 = 0xffffffff;
  }
  else {
LAB_00100e5e:
    if (*local_38 == 0) {
      lVar2 = *(long *)(param_1 + 0x18) + __LC19;
      lVar8 = *(long *)(param_1 + 0x20) + _UNK_001012d8;
      *local_38 = param_2;
      *(long *)(param_1 + 0x18) = lVar2;
      *(long *)(param_1 + 0x20) = lVar8;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)malloc(0x10);
        if (plVar6 == (long *)0x0) goto LAB_00100f30;
      }
      else {
        *(long *)(param_1 + 0x48) = plVar6[1];
      }
      lVar2 = local_38[1];
      *plVar6 = param_2;
      plVar6[1] = lVar2;
      local_38[1] = (long)plVar6;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    }
    uVar3 = 1;
  }
LAB_00100dfd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 hash_insert(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = hash_insert_if_absent(param_1,param_2,&local_18);
  if (iVar1 == -1) {
    param_2 = 0;
  }
  else if (iVar1 == 0) {
    param_2 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long hash_remove(long param_1,undefined8 param_2)

{
  float *pfVar1;
  void *pvVar2;
  void *__ptr;
  char cVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = hash_find_entry(param_1,param_2,&local_28,1);
  if ((lVar4 == 0) || (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1, *local_28 != 0))
  goto LAB_001010a3;
  uVar5 = *(long *)(param_1 + 0x18) - 1;
  *(ulong *)(param_1 + 0x18) = uVar5;
  if ((long)uVar5 < 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    fVar8 = (float)uVar5;
    if (-1 < (long)uVar6) goto LAB_001010f0;
LAB_001011a6:
    fVar7 = (float)uVar6;
  }
  else {
    fVar8 = (float)(long)uVar5;
    uVar6 = *(ulong *)(param_1 + 0x10);
    if ((long)uVar6 < 0) goto LAB_001011a6;
LAB_001010f0:
    fVar7 = (float)(long)uVar6;
  }
  if (fVar8 < **(float **)(param_1 + 0x28) * fVar7) {
    check_tuning(param_1);
    pfVar1 = *(float **)(param_1 + 0x28);
    if (fVar8 < *pfVar1 * fVar7) {
      fVar7 = fVar7 * pfVar1[1];
      if (*(char *)(pfVar1 + 4) == '\0') {
        fVar7 = fVar7 * pfVar1[2];
      }
      if (__LC7 <= fVar7) {
        uVar5 = (long)(fVar7 - __LC7) ^ 0x8000000000000000;
      }
      else {
        uVar5 = (ulong)fVar7;
      }
      cVar3 = hash_rehash(param_1,uVar5);
      if (cVar3 == '\0') {
        __ptr = *(void **)(param_1 + 0x48);
        while (__ptr != (void *)0x0) {
          pvVar2 = *(void **)((long)__ptr + 8);
          free(__ptr);
          __ptr = pvVar2;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
  }
LAB_001010a3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



void hash_delete(void)

{
  hash_remove();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_find_entry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void transfer_entries_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_lookup_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void hash_get_first_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_get_next_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_rehash_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_insert_if_absent_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


