
ulong raw_hasher(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}



bool raw_comparator(long param_1,long param_2)

{
  return param_2 == param_1;
}



long hash_find_entry(long *param_1,long param_2,undefined8 *param_3,char param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  uVar4 = (*(code *)param_1[6])(param_2,param_1[2]);
  if ((ulong)param_1[2] <= uVar4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar6 = (long *)(uVar4 * 0x10 + *param_1);
  *param_3 = plVar6;
  if (*plVar6 == 0) {
    return 0;
  }
  if (*plVar6 != param_2) {
    cVar3 = (*(code *)param_1[7])(param_2);
    if (cVar3 == '\0') {
      while( true ) {
        plVar5 = (long *)plVar6[1];
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        if (*plVar5 == param_2) break;
        cVar3 = (*(code *)param_1[7])(param_2);
        if (cVar3 != '\0') {
          plVar5 = (long *)plVar6[1];
          break;
        }
        plVar6 = (long *)plVar6[1];
      }
      lVar2 = *plVar5;
      if (param_4 != '\0') {
        plVar6[1] = plVar5[1];
        lVar1 = param_1[9];
        *plVar5 = 0;
        plVar5[1] = lVar1;
        param_1[9] = (long)plVar5;
        return lVar2;
      }
      return lVar2;
    }
    param_2 = *plVar6;
  }
  if (param_4 != '\0') {
    plVar5 = (long *)plVar6[1];
    if (plVar5 == (long *)0x0) {
      *plVar6 = 0;
    }
    else {
      lVar1 = plVar5[1];
      lVar2 = param_1[9];
      *plVar6 = *plVar5;
      plVar6[1] = lVar1;
      *plVar5 = 0;
      plVar5[1] = lVar2;
      param_1[9] = (long)plVar5;
    }
  }
  return param_2;
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
  plVar8 = (long *)param_2[1];
  if (plVar7 < plVar8) {
    do {
      while (lVar6 = *plVar7, lVar6 != 0) {
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
        if (param_3 == '\0') {
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
          param_2[3] = param_2[3] + -1;
        }
        plVar8 = (long *)param_2[1];
        plVar7 = plVar7 + 2;
        if (plVar8 <= plVar7) {
          return 1;
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 < plVar8);
  }
  return 1;
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
LAB_00100360:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 1;
    if (lVar1 == 0) goto LAB_00100360;
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
      if ((long *)param_1[1] <= plVar4) goto LAB_0010041d;
    }
    uVar5 = 1;
    for (lVar3 = plVar4[1]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      uVar5 = uVar5 + 1;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
  }
LAB_0010041d:
  __fprintf_chk(param_2,2,"# entries:         %lu\n",param_1[4]);
  __fprintf_chk(param_2,2,"# buckets:         %lu\n",uVar1);
  __fprintf_chk(((double)uVar2 * __LC4) / (double)uVar1,param_2,2,
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
  
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)*param_1;
  if (plVar3 <= plVar2) {
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
      plVar3 = (long *)param_1[1];
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < plVar3);
  return uVar1;
}



long hash_do_for_each(ulong *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar6 < plVar2) {
    lVar4 = 0;
    do {
      lVar5 = *plVar6;
      plVar3 = plVar6;
      if (lVar5 != 0) {
        while( true ) {
          cVar1 = (*param_2)(lVar5,param_3);
          if (cVar1 == '\0') {
            return lVar4;
          }
          plVar3 = (long *)plVar3[1];
          lVar4 = lVar4 + 1;
          if (plVar3 == (long *)0x0) break;
          lVar5 = *plVar3;
        }
        plVar2 = (long *)param_1[1];
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 < plVar2);
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
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
  
  uVar2 = __LC11;
  uVar1 = __LC10;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
hash_initialize(ulong param_1,float *param_2,long param_3,code *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 *__ptr;
  int *piVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 == 0) {
    param_3 = 0x100000;
  }
  if (param_4 == (code *)0x0) {
    param_4 = raw_comparator;
  }
  __ptr = (undefined8 *)malloc(0x50);
  if (__ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_2 == (float *)0x0) {
    __ptr[5] = default_tuning;
LAB_0010090b:
    fVar9 = _LC11;
    if ((long)param_1 < 0) {
LAB_001008c9:
      fVar9 = (float)param_1 / fVar9;
      if (fVar9 < __LC17) {
LAB_0010092e:
        if (__LC18 <= fVar9) {
          param_1 = (long)(fVar9 - __LC18) ^ 0x8000000000000000;
        }
        else {
          param_1 = (ulong)fVar9;
        }
        goto LAB_00100940;
      }
    }
    else {
LAB_00100918:
      fVar9 = (float)(long)param_1 / fVar9;
      if (fVar9 < __LC17) goto LAB_0010092e;
    }
  }
  else {
    __ptr[5] = param_2;
    if (param_2 == (float *)default_tuning) goto LAB_0010090b;
    fVar9 = param_2[2];
    if ((((fVar9 <= __LC12) || (_LC13 <= fVar9)) || (param_2[3] <= __LC14)) || (*param_2 < 0.0)) {
LAB_0010084a:
      piVar2 = __errno_location();
      *piVar2 = 0x16;
      goto LAB_00100855;
    }
    fVar8 = *param_2 + __LC12;
    if (((param_2[1] <= fVar8) || (_LC16 < param_2[1])) || (fVar9 <= fVar8)) goto LAB_0010084a;
    if (*(char *)(param_2 + 4) == '\0') {
      if (-1 < (long)param_1) goto LAB_00100918;
      goto LAB_001008c9;
    }
LAB_00100940:
    uVar5 = 10;
    if (9 < param_1) {
      uVar5 = param_1;
    }
    for (uVar5 = uVar5 | 1; uVar5 != 0xffffffffffffffff; uVar5 = uVar5 + 2) {
      for (; auVar1._8_8_ = 0, auVar1._0_8_ = uVar5,
          uVar4 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar5 / 3,
          uVar5 < 10; uVar5 = uVar5 + 2) {
        if (uVar5 != uVar4) goto LAB_001009d4;
      }
      if (uVar5 != uVar4) {
        lVar7 = 0x10;
        uVar6 = 9;
        uVar4 = 3;
        do {
          uVar4 = uVar4 + 2;
          uVar6 = uVar6 + lVar7;
          if (uVar5 <= uVar6) {
            if (uVar5 % uVar4 != 0) goto LAB_001009d4;
            break;
          }
          lVar7 = lVar7 + 8;
        } while (uVar5 % uVar4 != 0);
      }
    }
LAB_001009d4:
    if (((uVar5 >> 0x3c & 1) == 0) && (uVar5 >> 0x3d == 0)) {
      __ptr[2] = uVar5;
      pvVar3 = calloc(uVar5,0x10);
      *__ptr = pvVar3;
      if (pvVar3 != (void *)0x0) {
        __ptr[6] = param_3;
        __ptr[7] = param_4;
        __ptr[1] = (void *)((long)pvVar3 + uVar5 * 0x10);
        __ptr[8] = param_5;
        __ptr[9] = 0;
        *(undefined1 (*) [16])(__ptr + 3) = (undefined1  [16])0x0;
        return __ptr;
      }
      goto LAB_00100855;
    }
  }
  piVar2 = __errno_location();
  *piVar2 = 0xc;
LAB_00100855:
  free(__ptr);
  return (undefined8 *)0x0;
}



void hash_clear(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  
  pauVar4 = (undefined1 (*) [16])param_1[1];
  pauVar7 = (undefined1 (*) [16])*param_1;
  if ((undefined1 (*) [16])*param_1 < pauVar4) {
    do {
      while (*(long *)*pauVar7 == 0) {
        pauVar7 = pauVar7 + 1;
        if (pauVar4 <= pauVar7) goto LAB_00100b46;
      }
      pcVar1 = (code *)param_1[8];
      puVar6 = *(undefined8 **)(*pauVar7 + 8);
      while (puVar6 != (undefined8 *)0x0) {
        if (pcVar1 == (code *)0x0) {
          uVar3 = param_1[9];
          *puVar6 = 0;
          puVar2 = (undefined8 *)puVar6[1];
          puVar6[1] = uVar3;
          param_1[9] = puVar6;
          if (puVar2 != (undefined8 *)0x0) {
            do {
              puVar5 = puVar2;
              puVar2 = (undefined8 *)puVar5[1];
              *puVar5 = 0;
              puVar5[1] = puVar6;
              puVar6 = puVar5;
            } while (puVar2 != (undefined8 *)0x0);
            param_1[9] = puVar5;
          }
          goto LAB_00100b2b;
        }
        (*pcVar1)(*puVar6);
        puVar2 = (undefined8 *)puVar6[1];
        uVar3 = param_1[9];
        pcVar1 = (code *)param_1[8];
        *puVar6 = 0;
        puVar6[1] = uVar3;
        param_1[9] = puVar6;
        puVar6 = puVar2;
      }
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*(undefined8 *)*pauVar7);
      }
LAB_00100b2b:
      pauVar8 = pauVar7 + 1;
      *pauVar7 = (undefined1  [16])0x0;
      pauVar4 = (undefined1 (*) [16])param_1[1];
      pauVar7 = pauVar8;
    } while (pauVar8 < pauVar4);
  }
LAB_00100b46:
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  return;
}



void hash_free(ulong *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  
  piVar3 = __errno_location();
  plVar8 = (long *)*param_1;
  iVar1 = *piVar3;
  plVar4 = (long *)param_1[1];
  if ((param_1[8] != 0) && (param_1[4] != 0)) {
    if (plVar4 <= plVar8) goto LAB_00100c16;
    do {
      while (lVar7 = *plVar8, plVar5 = plVar8, lVar7 != 0) {
        while( true ) {
          (*(code *)param_1[8])(lVar7);
          plVar5 = (long *)plVar5[1];
          if (plVar5 == (long *)0x0) break;
          lVar7 = *plVar5;
        }
        plVar4 = (long *)param_1[1];
        plVar8 = plVar8 + 2;
        if (plVar4 <= plVar8) goto LAB_00100bdc;
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 < plVar4);
LAB_00100bdc:
    plVar8 = (long *)*param_1;
  }
  if (plVar8 < plVar4) {
    do {
      pvVar6 = (void *)plVar8[1];
      if ((void *)plVar8[1] != (void *)0x0) {
        do {
          pvVar2 = *(void **)((long)pvVar6 + 8);
          free(pvVar6);
          pvVar6 = pvVar2;
        } while (pvVar2 != (void *)0x0);
        plVar4 = (long *)param_1[1];
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 < plVar4);
  }
LAB_00100c16:
  pvVar6 = (void *)param_1[9];
  while (pvVar6 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar6 + 8);
    free(pvVar6);
    pvVar6 = pvVar2;
  }
  free((void *)*param_1);
  free(param_1);
  *piVar3 = iVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 hash_rehash(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  char cVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  void *local_88;
  void *pvStack_80;
  ulong local_78;
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
  if (*(char *)(lVar2 + 0x10) == '\0') {
    fVar4 = (float)param_2 / *(float *)(lVar2 + 8);
    if (fVar4 < __LC17) {
      if (fVar4 < __LC18) {
        param_2 = (ulong)fVar4;
      }
      else {
        param_2 = (long)(fVar4 - __LC18) ^ 0x8000000000000000;
      }
      goto LAB_00100ce0;
    }
  }
  else {
LAB_00100ce0:
    uVar9 = 10;
    if (9 < param_2) {
      uVar9 = param_2;
    }
    for (uVar9 = uVar9 | 1; uVar9 != 0xffffffffffffffff; uVar9 = uVar9 + 2) {
      for (; auVar3._8_8_ = 0, auVar3._0_8_ = uVar9,
          uVar8 = (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar9 / 3,
          uVar9 < 10; uVar9 = uVar9 + 2) {
        if (uVar9 != uVar8) goto LAB_00100d74;
      }
      if (uVar9 != uVar8) {
        lVar11 = 0x10;
        uVar10 = 9;
        uVar8 = 3;
        do {
          uVar8 = uVar8 + 2;
          uVar10 = uVar10 + lVar11;
          if (uVar9 <= uVar10) {
            if (uVar9 % uVar8 != 0) goto LAB_00100d74;
            break;
          }
          lVar11 = lVar11 + 8;
        } while (uVar9 % uVar8 != 0);
      }
    }
LAB_00100d74:
    if (((uVar9 >> 0x3c & 1) == 0) && (uVar9 >> 0x3d == 0)) {
      if (param_1[2] == uVar9) {
LAB_00100ee0:
        uVar7 = 1;
      }
      else {
        local_88 = calloc(uVar9,0x10);
        if (local_88 != (void *)0x0) {
          local_58 = param_1[6];
          uStack_50 = param_1[7];
          pvStack_80 = (void *)((long)local_88 + uVar9 * 0x10);
          local_48 = param_1[8];
          uStack_70 = 0;
          local_40 = param_1[9];
          local_68 = 0;
          local_78 = uVar9;
          local_60 = lVar2;
          cVar5 = transfer_entries(&local_88,param_1,0);
          if (cVar5 != '\0') {
            free((void *)*param_1);
            param_1[9] = local_40;
            *param_1 = local_88;
            param_1[1] = pvStack_80;
            param_1[2] = local_78;
            param_1[3] = uStack_70;
            goto LAB_00100ee0;
          }
          piVar6 = __errno_location();
          iVar1 = *piVar6;
          param_1[9] = local_40;
          cVar5 = transfer_entries(param_1,&local_88,1);
          if ((cVar5 == '\0') || (cVar5 = transfer_entries(param_1,&local_88,0), cVar5 == '\0')) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          free(local_88);
          *piVar6 = iVar1;
        }
        uVar7 = 0;
      }
      goto LAB_00100ee5;
    }
  }
  piVar6 = __errno_location();
  *piVar6 = 0xc;
  uVar7 = 0;
LAB_00100ee5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 hash_insert_if_absent(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  float fVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = hash_find_entry(param_1,param_2,&local_38,0);
  fVar12 = _LC11;
  if (lVar2 != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2;
    }
    uVar3 = 0;
    goto LAB_00100f5d;
  }
  fVar10 = (float)*(ulong *)(param_1 + 0x18);
  puVar6 = *(undefined1 **)(param_1 + 0x28);
  uVar7 = *(ulong *)(param_1 + 0x10);
  fVar11 = *(float *)((long)puVar6 + 8);
  if ((long)uVar7 < 0) {
    fVar8 = (float)uVar7;
    if (fVar11 * fVar8 < fVar10) goto LAB_00101059;
LAB_00100fc5:
    if (*local_38 == 0) {
      lVar2 = *(long *)(param_1 + 0x18) + __LC21;
      lVar9 = *(long *)(param_1 + 0x20) + _UNK_001019c8;
      *local_38 = param_2;
      *(long *)(param_1 + 0x18) = lVar2;
      *(long *)(param_1 + 0x20) = lVar9;
    }
    else {
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)malloc(0x10);
        if (plVar5 == (long *)0x0) goto LAB_001010e0;
      }
      else {
        *(long *)(param_1 + 0x48) = plVar5[1];
      }
      lVar2 = local_38[1];
      *plVar5 = param_2;
      plVar5[1] = lVar2;
      local_38[1] = (long)plVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    }
    uVar3 = 1;
  }
  else {
    fVar8 = (float)(long)uVar7;
    if (fVar10 <= fVar11 * fVar8) goto LAB_00100fc5;
LAB_00101059:
    if (puVar6 == default_tuning) {
LAB_00101118:
      fVar12 = fVar8 * *(float *)((long)puVar6 + 0xc) * fVar11;
    }
    else {
      if ((((fVar11 <= __LC12) || (_LC13 <= fVar11)) || (*(float *)((long)puVar6 + 0xc) <= __LC14))
         || (*(float *)puVar6 < 0.0)) {
LAB_001010f0:
        *(undefined1 **)(param_1 + 0x28) = default_tuning;
        if (fVar10 <= fVar12 * fVar8) goto LAB_00100fc5;
        puVar6 = default_tuning;
        fVar11 = _LC11;
        goto LAB_00101118;
      }
      fVar13 = *(float *)puVar6 + __LC12;
      if (((*(float *)((long)puVar6 + 4) <= fVar13) || (_LC16 < *(float *)((long)puVar6 + 4))) ||
         (fVar11 <= fVar13)) goto LAB_001010f0;
      fVar12 = *(float *)((long)puVar6 + 0xc) * fVar8;
      if (*(char *)((long)puVar6 + 0x10) == '\0') goto LAB_00101118;
    }
    if (fVar12 < __LC17) {
      if (__LC18 <= fVar12) {
        uVar7 = (long)(fVar12 - __LC18) ^ 0x8000000000000000;
      }
      else {
        uVar7 = (ulong)fVar12;
      }
      cVar1 = hash_rehash(param_1,uVar7);
      if (cVar1 != '\0') {
        lVar2 = hash_find_entry(param_1,param_2,&local_38,0);
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          hash_insert_if_absent_cold();
        }
        goto LAB_00100fc5;
      }
    }
    else {
      piVar4 = __errno_location();
      *piVar4 = 0xc;
    }
LAB_001010e0:
    uVar3 = 0xffffffff;
  }
LAB_00100f5d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long hash_insert(long param_1,long param_2)

{
  float fVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = hash_find_entry(param_1,param_2,&local_38,0);
  fVar10 = _LC11;
  if (lVar3 != 0) goto LAB_00101212;
  puVar6 = *(undefined1 **)(param_1 + 0x28);
  fVar9 = *(float *)((long)puVar6 + 8);
  fVar1 = (float)*(ulong *)(param_1 + 0x10);
  if (fVar9 * fVar1 < (float)*(ulong *)(param_1 + 0x18)) {
    if (puVar6 == default_tuning) {
LAB_001013c0:
      fVar10 = fVar1 * *(float *)((long)puVar6 + 0xc) * fVar9;
    }
    else {
      if ((((fVar9 <= __LC12) || (_LC13 <= fVar9)) || (*(float *)((long)puVar6 + 0xc) <= __LC14)) ||
         (*(float *)puVar6 < 0.0)) {
LAB_00101398:
        *(undefined1 **)(param_1 + 0x28) = default_tuning;
        if ((float)*(ulong *)(param_1 + 0x18) <= fVar10 * fVar1) goto LAB_00101279;
        puVar6 = default_tuning;
        fVar9 = _LC11;
        goto LAB_001013c0;
      }
      fVar11 = *(float *)puVar6 + __LC12;
      if (((*(float *)((long)puVar6 + 4) <= fVar11) || (_LC16 < *(float *)((long)puVar6 + 4))) ||
         (fVar9 <= fVar11)) goto LAB_00101398;
      fVar10 = *(float *)((long)puVar6 + 0xc) * fVar1;
      if (*(char *)((long)puVar6 + 0x10) == '\0') goto LAB_001013c0;
    }
    if (__LC17 <= fVar10) {
      piVar4 = __errno_location();
      *piVar4 = 0xc;
      goto LAB_00101212;
    }
    if (__LC18 <= fVar10) {
      uVar7 = (long)(fVar10 - __LC18) ^ 0x8000000000000000;
    }
    else {
      uVar7 = (ulong)fVar10;
    }
    cVar2 = hash_rehash(param_1,uVar7);
    if (cVar2 == '\0') goto LAB_00101212;
    lVar8 = hash_find_entry(param_1,param_2,&local_38,0);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      hash_insert_cold();
    }
  }
LAB_00101279:
  if (*local_38 == 0) {
    lVar3 = *(long *)(param_1 + 0x18) + __LC21;
    lVar8 = *(long *)(param_1 + 0x20) + _UNK_001019c8;
    *local_38 = param_2;
    *(long *)(param_1 + 0x18) = lVar3;
    *(long *)(param_1 + 0x20) = lVar8;
    lVar3 = param_2;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)malloc(0x10);
      if (plVar5 == (long *)0x0) goto LAB_00101212;
    }
    else {
      *(long *)(param_1 + 0x48) = plVar5[1];
    }
    lVar3 = local_38[1];
    *plVar5 = param_2;
    plVar5[1] = lVar3;
    local_38[1] = (long)plVar5;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    lVar3 = param_2;
  }
LAB_00101212:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long hash_remove(long param_1,undefined8 param_2)

{
  float fVar1;
  void *pvVar2;
  void *__ptr;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = hash_find_entry(param_1,param_2,&local_28,1);
  if ((lVar4 == 0) || (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1, *local_28 != 0))
  goto LAB_001014b3;
  uVar5 = *(long *)(param_1 + 0x18) - 1;
  *(ulong *)(param_1 + 0x18) = uVar5;
  fVar9 = (float)uVar5;
  puVar6 = *(undefined1 **)(param_1 + 0x28);
  fVar8 = *(float *)puVar6;
  fVar7 = (float)*(ulong *)(param_1 + 0x10);
  if (fVar8 * fVar7 <= fVar9) goto LAB_001014b3;
  if (puVar6 == default_tuning) {
LAB_00101625:
    puVar6 = default_tuning;
LAB_0010162c:
    fVar8 = fVar7 * *(float *)((long)puVar6 + 4) * *(float *)((long)puVar6 + 8);
    if (__LC18 <= fVar8) {
      uVar5 = (long)(fVar8 - __LC18) ^ 0x8000000000000000;
    }
    else {
      uVar5 = (ulong)fVar8;
    }
  }
  else {
    fVar1 = *(float *)((long)puVar6 + 8);
    if ((((fVar1 <= __LC12) || (_LC13 <= fVar1)) || (*(float *)((long)puVar6 + 0xc) <= __LC14)) ||
       (fVar8 < 0.0)) {
LAB_00101610:
      *(undefined1 **)(param_1 + 0x28) = default_tuning;
      if (fVar7 * 0.0 <= fVar9) goto LAB_001014b3;
      goto LAB_00101625;
    }
    fVar10 = *(float *)((long)puVar6 + 4);
    if (((fVar10 <= fVar8 + __LC12) || (_LC16 < fVar10)) || (fVar1 <= fVar8 + __LC12))
    goto LAB_00101610;
    fVar10 = fVar10 * fVar7;
    if (*(char *)((long)puVar6 + 0x10) == '\0') goto LAB_0010162c;
    if (__LC18 <= fVar10) {
      uVar5 = (long)(fVar10 - __LC18) ^ 0x8000000000000000;
    }
    else {
      uVar5 = (ulong)fVar10;
    }
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
LAB_001014b3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long hash_delete(long param_1,undefined8 param_2)

{
  float fVar1;
  void *pvVar2;
  void *__ptr;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = hash_find_entry(param_1,param_2,&local_28,1);
  if ((lVar4 == 0) || (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1, *local_28 != 0))
  goto LAB_001016f3;
  uVar5 = *(long *)(param_1 + 0x18) - 1;
  *(ulong *)(param_1 + 0x18) = uVar5;
  fVar9 = (float)uVar5;
  puVar6 = *(undefined1 **)(param_1 + 0x28);
  fVar8 = *(float *)puVar6;
  fVar7 = (float)*(ulong *)(param_1 + 0x10);
  if (fVar8 * fVar7 <= fVar9) goto LAB_001016f3;
  if (puVar6 == default_tuning) {
LAB_00101865:
    puVar6 = default_tuning;
LAB_0010186c:
    fVar8 = fVar7 * *(float *)((long)puVar6 + 4) * *(float *)((long)puVar6 + 8);
    if (__LC18 <= fVar8) {
      uVar5 = (long)(fVar8 - __LC18) ^ 0x8000000000000000;
    }
    else {
      uVar5 = (ulong)fVar8;
    }
  }
  else {
    fVar1 = *(float *)((long)puVar6 + 8);
    if ((((fVar1 <= __LC12) || (_LC13 <= fVar1)) || (*(float *)((long)puVar6 + 0xc) <= __LC14)) ||
       (fVar8 < 0.0)) {
LAB_00101850:
      *(undefined1 **)(param_1 + 0x28) = default_tuning;
      if (fVar7 * 0.0 <= fVar9) goto LAB_001016f3;
      goto LAB_00101865;
    }
    fVar10 = *(float *)((long)puVar6 + 4);
    if (((fVar10 <= fVar8 + __LC12) || (_LC16 < fVar10)) || (fVar1 <= fVar8 + __LC12))
    goto LAB_00101850;
    fVar10 = fVar10 * fVar7;
    if (*(char *)((long)puVar6 + 0x10) == '\0') goto LAB_0010186c;
    if (__LC18 <= fVar10) {
      uVar5 = (long)(fVar10 - __LC18) ^ 0x8000000000000000;
    }
    else {
      uVar5 = (ulong)fVar10;
    }
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
LAB_001016f3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_insert_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


