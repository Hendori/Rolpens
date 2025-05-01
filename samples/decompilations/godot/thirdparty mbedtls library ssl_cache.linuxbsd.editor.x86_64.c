
int ssl_cache_find_entry(undefined8 *param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  time_t tVar3;
  size_t __n;
  int *piVar4;
  
  tVar3 = time((time_t *)0x0);
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    do {
      if (iVar1 == 0) {
        __n = *(size_t *)(piVar4 + 10);
        if (__n == param_3) goto LAB_0010007c;
      }
      else {
        while ((iVar1 < (int)tVar3 - *piVar4 || (__n = *(size_t *)(piVar4 + 10), __n != param_3))) {
          piVar4 = *(int **)(piVar4 + 0x10);
          if (piVar4 == (int *)0x0) {
            return -0x7e80;
          }
        }
LAB_0010007c:
        iVar2 = memcmp(param_2,piVar4 + 2,__n);
        if (iVar2 == 0) {
          *param_4 = piVar4;
          return iVar2;
        }
      }
      piVar4 = *(int **)(piVar4 + 0x10);
    } while (piVar4 != (int *)0x0);
  }
  return -0x7e80;
}



void mbedtls_ssl_cache_init(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  
  uVar1 = _LC0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  return;
}



void mbedtls_ssl_cache_get(void)

{
  long lVar1;
  int iVar2;
  undefined8 in_RCX;
  long in_FS_OFFSET;
  undefined8 local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ssl_cache_find_entry();
  if (iVar2 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      mbedtls_ssl_session_load
                (in_RCX,*(undefined8 *)(local_18 + 0x30),*(undefined8 *)(local_18 + 0x38));
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ssl_cache_set(long *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  size_t sVar2;
  int iVar3;
  time_t tVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  tVar4 = time((time_t *)0x0);
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    if (*(int *)((long)param_1 + 0xc) < 1) {
LAB_00100365:
      iVar10 = -0x6c00;
      goto LAB_0010025f;
    }
    plVar6 = (long *)calloc(1,0x48);
    if (plVar6 != (long *)0x0) {
      *param_1 = (long)plVar6;
      goto LAB_00100216;
    }
  }
  else {
    iVar10 = 0;
    plVar8 = plVar9;
    do {
      plVar11 = plVar8;
      iVar10 = iVar10 + 1;
      if ((param_3 == plVar11[5]) &&
         (iVar3 = memcmp(param_2,plVar11 + 1,param_3), plVar6 = plVar11, iVar3 == 0))
      goto LAB_00100216;
      plVar8 = (long *)plVar11[8];
    } while (plVar8 != (long *)0x0);
    lVar7 = 0;
    do {
      lVar1 = *plVar9;
      if (((int)param_1[1] != 0) && (plVar6 = plVar9, (int)param_1[1] < (int)tVar4 - (int)lVar1))
      goto LAB_00100216;
      if ((lVar7 == 0) || (lVar1 < lVar7)) {
        lVar7 = lVar1;
        plVar8 = plVar9;
      }
      plVar9 = (long *)plVar9[8];
    } while (plVar9 != (long *)0x0);
    if (iVar10 < *(int *)((long)param_1 + 0xc)) {
      plVar6 = (long *)calloc(1,0x48);
      if (plVar6 == (long *)0x0) goto LAB_0010035b;
      plVar11[8] = (long)plVar6;
    }
    else {
      plVar6 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_00100365;
    }
LAB_00100216:
    if (plVar6[6] != 0) {
      lVar7 = plVar6[8];
      mbedtls_zeroize_and_free(plVar6[6],plVar6[7]);
      mbedtls_platform_zeroize(plVar6,0x48);
      plVar6[8] = lVar7;
    }
    *plVar6 = tVar4;
    iVar10 = mbedtls_ssl_session_save(param_4,0,0,&local_48);
    sVar2 = local_48;
    if (iVar10 != -0x6a00) goto LAB_0010025f;
    pvVar5 = calloc(1,local_48);
    if (pvVar5 != (void *)0x0) {
      iVar10 = mbedtls_ssl_session_save(param_4,pvVar5,sVar2,&local_48);
      sVar2 = local_48;
      if (iVar10 == 0) {
        if (param_3 < 0x21) {
          plVar6[5] = param_3;
          memcpy(plVar6 + 1,param_2,param_3);
          plVar6[6] = (long)pvVar5;
          plVar6[7] = sVar2;
          goto LAB_0010025f;
        }
        iVar10 = -0x7100;
      }
      mbedtls_zeroize_and_free(pvVar5,local_48);
      goto LAB_0010025f;
    }
  }
LAB_0010035b:
  iVar10 = -0x7f00;
LAB_0010025f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



undefined8 mbedtls_ssl_cache_remove(long *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ssl_cache_find_entry();
  if (iVar3 == 0) {
    pvVar2 = (void *)*param_1;
    if ((void *)*param_1 == local_28) {
      *param_1 = *(long *)((long)local_28 + 0x40);
    }
    else {
      do {
        pvVar4 = pvVar2;
        pvVar2 = *(void **)((long)pvVar4 + 0x40);
        if (pvVar2 == (void *)0x0) {
          if (local_28 != (void *)0x0) goto LAB_00100408;
          free((void *)0x0);
          goto LAB_001003e0;
        }
      } while (local_28 != pvVar2);
      *(undefined8 *)((long)pvVar4 + 0x40) = *(undefined8 *)((long)local_28 + 0x40);
    }
LAB_00100408:
    if (*(long *)((long)local_28 + 0x30) != 0) {
      mbedtls_zeroize_and_free
                (*(long *)((long)local_28 + 0x30),*(undefined8 *)((long)local_28 + 0x38));
    }
    mbedtls_platform_zeroize(local_28,0x48);
    free(local_28);
  }
LAB_001003e0:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ssl_cache_set_timeout(long param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}



void mbedtls_ssl_cache_set_max_entries(long param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



void mbedtls_ssl_cache_free(undefined8 *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)__ptr + 0x40);
    if (*(long *)((long)__ptr + 0x30) != 0) {
      mbedtls_zeroize_and_free(*(long *)((long)__ptr + 0x30),*(undefined8 *)((long)__ptr + 0x38));
    }
    mbedtls_platform_zeroize(__ptr,0x48);
    free(__ptr);
    __ptr = pvVar1;
  }
  *param_1 = 0;
  return;
}


