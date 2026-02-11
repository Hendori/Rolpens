
void OSSL_ERR_STATE_new(void)

{
  CRYPTO_zalloc(0x388,0,0);
  return;
}



void OSSL_ERR_STATE_save(undefined8 *param_1)

{
  void *ptr;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (param_1 != (undefined8 *)0x0) {
    lVar3 = 0;
    do {
      if ((*(byte *)((long)param_1 + lVar3 * 4 + 0x200) & 1) != 0) {
        CRYPTO_free((void *)param_1[lVar3 + 0x20]);
      }
      ptr = (void *)param_1[lVar3 + 0x48];
      param_1[lVar3 + 0x20] = 0;
      param_1[lVar3 + 0x30] = 0;
      *(undefined4 *)((long)param_1 + lVar3 * 4 + 0x200) = 0;
      *(undefined4 *)((long)param_1 + lVar3 * 4 + 0x40) = 0;
      *(undefined4 *)((long)param_1 + lVar3 * 4) = 0;
      param_1[lVar3 + 0x10] = 0;
      *(undefined4 *)((long)param_1 + lVar3 * 4 + 0x2c0) = 0xffffffff;
      CRYPTO_free(ptr);
      param_1[lVar3 + 0x48] = 0;
      CRYPTO_free((void *)param_1[lVar3 + 0x60]);
      param_1[lVar3 + 0x60] = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
    puVar1 = (undefined8 *)ossl_err_get_state_int();
    if (puVar1 != (undefined8 *)0x0) {
      *param_1 = *puVar1;
      param_1[0x70] = puVar1[0x70];
      lVar3 = (long)param_1 - (long)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
      puVar4 = (undefined8 *)((long)puVar1 - lVar3);
      puVar5 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
      for (uVar2 = (ulong)((int)lVar3 + 0x388U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
        puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }
      *puVar1 = 0;
      puVar1[0x70] = 0;
      uVar2 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8))
                      + 0x388U >> 3);
      puVar1 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + (ulong)bVar6 * -2 + 1;
      }
    }
    return;
  }
  return;
}



void OSSL_ERR_STATE_save_to_mark(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  void *pvVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long local_50;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  lVar6 = ossl_err_get_state_int();
  if (lVar6 == 0) {
    lVar6 = 0;
    do {
      if ((*(byte *)(param_1 + lVar6 + 0x80) & 1) != 0) {
        CRYPTO_free(*(void **)(param_1 + lVar6 * 2 + 0x40));
      }
      pvVar4 = *(void **)(param_1 + lVar6 * 2 + 0x90);
      *(undefined8 *)(param_1 + lVar6 * 2 + 0x40) = 0;
      *(undefined8 *)(param_1 + lVar6 * 2 + 0x60) = 0;
      param_1[lVar6 + 0x80] = 0;
      param_1[lVar6 + 0x10] = 0;
      param_1[lVar6] = 0;
      *(undefined8 *)(param_1 + lVar6 * 2 + 0x20) = 0;
      param_1[lVar6 + 0xb0] = 0xffffffff;
      CRYPTO_free(pvVar4);
      *(undefined8 *)(param_1 + lVar6 * 2 + 0x90) = 0;
      CRYPTO_free(*(void **)(param_1 + lVar6 * 2 + 0xc0));
      *(undefined8 *)(param_1 + lVar6 * 2 + 0xc0) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return;
  }
  iVar9 = *(int *)(lVar6 + 0x380);
  lVar8 = 0;
  if (iVar9 != *(int *)(lVar6 + 900)) {
    do {
      uVar7 = (ulong)iVar9;
      if (*(int *)(lVar6 + 0x40 + uVar7 * 4) != 0) goto LAB_001001f5;
      bVar5 = iVar9 < 1;
      iVar9 = iVar9 + -1;
      if (bVar5) {
        iVar9 = 0xf;
      }
      lVar8 = lVar8 + 1;
    } while (iVar9 != *(int *)(lVar6 + 900));
    uVar7 = (ulong)iVar9;
LAB_001001f5:
    if (lVar8 != 0) {
      local_50 = 0;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      puVar11 = param_1;
      do {
        uVar7 = (ulong)((int)uVar7 + 1U & 0xf);
        if ((*(byte *)(puVar11 + 0x80) & 1) != 0) {
          CRYPTO_free((void *)puVar10[0x10]);
        }
        pvVar4 = (void *)puVar10[0x38];
        puVar10[0x10] = 0;
        puVar10[0x20] = 0;
        puVar11[0x80] = 0;
        puVar11[0x10] = 0;
        *puVar11 = 0;
        *puVar10 = 0;
        puVar11[0xb0] = 0xffffffff;
        CRYPTO_free(pvVar4);
        puVar10[0x38] = 0;
        CRYPTO_free((void *)puVar10[0x50]);
        local_50 = local_50 + 1;
        puVar10[0x50] = 0;
        puVar1 = (undefined4 *)(lVar6 + uVar7 * 4);
        uVar3 = *puVar1;
        puVar11[0x10] = 0;
        *puVar11 = uVar3;
        lVar2 = lVar6 + uVar7 * 8;
        *puVar10 = *(undefined8 *)(lVar2 + 0x80);
        puVar10[0x10] = *(undefined8 *)(lVar2 + 0x100);
        puVar10[0x20] = *(undefined8 *)(lVar2 + 0x180);
        puVar11[0x80] = puVar1[0x80];
        puVar10[0x38] = *(undefined8 *)(lVar2 + 0x240);
        puVar11[0xb0] = puVar1[0xb0];
        puVar10[0x50] = *(undefined8 *)(lVar6 + 0x300 + uVar7 * 8);
        *puVar1 = 0;
        *(undefined8 *)(lVar2 + 0x80) = 0;
        *(undefined8 *)(lVar2 + 0x100) = 0;
        *(undefined8 *)(lVar2 + 0x180) = 0;
        puVar1[0x80] = 0;
        *(undefined8 *)(lVar2 + 0x240) = 0;
        puVar1[0xb0] = 0;
        *(undefined8 *)(lVar2 + 0x300) = 0;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (local_50 != lVar8);
      *(int *)(lVar6 + 0x380) = iVar9;
      param_1[0xe0] = (int)lVar8 + -1;
      param_1[0xe1] = 0xf;
      if (lVar8 == 0x10) {
        return;
      }
      goto LAB_00100400;
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  lVar8 = 0;
LAB_00100400:
  do {
    if ((*(byte *)(param_1 + lVar8 + 0x80) & 1) != 0) {
      CRYPTO_free(*(void **)(param_1 + lVar8 * 2 + 0x40));
    }
    pvVar4 = *(void **)(param_1 + lVar8 * 2 + 0x90);
    *(undefined8 *)(param_1 + lVar8 * 2 + 0x40) = 0;
    *(undefined8 *)(param_1 + lVar8 * 2 + 0x60) = 0;
    param_1[lVar8 + 0x80] = 0;
    param_1[lVar8 + 0x10] = 0;
    param_1[lVar8] = 0;
    *(undefined8 *)(param_1 + lVar8 * 2 + 0x20) = 0;
    param_1[lVar8 + 0xb0] = 0xffffffff;
    CRYPTO_free(pvVar4);
    *(undefined8 *)(param_1 + lVar8 * 2 + 0x90) = 0;
    CRYPTO_free(*(void **)(param_1 + lVar8 * 2 + 0xc0));
    *(undefined8 *)(param_1 + lVar8 * 2 + 0xc0) = 0;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x10);
  return;
}



void OSSL_ERR_STATE_restore(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *__s;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  char *__dest;
  size_t sVar12;
  char *pcVar13;
  ulong uVar14;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 900) != *(int *)(param_1 + 0x380))) &&
     (lVar8 = ossl_err_get_state_int(), lVar8 != 0)) {
    uVar14 = (ulong)*(int *)(param_1 + 900);
    uVar9 = (ulong)*(int *)(param_1 + 0x380);
    if (uVar14 != uVar9) {
      do {
        uVar14 = (ulong)((int)uVar14 + 1U & 0xf);
        pbVar1 = (byte *)(param_1 + uVar14 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar7 = (*(int *)(lVar8 + 0x380) + 1) % 0x10;
          *(int *)(lVar8 + 0x380) = iVar7;
          if (iVar7 == *(int *)(lVar8 + 900)) {
            *(int *)(lVar8 + 900) = (iVar7 + 1) % 0x10;
          }
          lVar10 = (long)iVar7;
          puVar3 = (undefined4 *)(lVar8 + lVar10 * 4);
          if ((*(byte *)(puVar3 + 0x80) & 1) == 0) {
            *(undefined8 *)(lVar8 + 0x100 + lVar10 * 8) = 0;
            *(undefined8 *)(lVar8 + 0x180 + lVar10 * 8) = 0;
            puVar3[0x80] = 0;
          }
          else {
            puVar6 = *(undefined1 **)(lVar8 + 0x100 + lVar10 * 8);
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 0;
              puVar3[0x80] = 1;
            }
          }
          lVar2 = lVar8 + lVar10 * 8;
          puVar3[0x10] = 0;
          *puVar3 = 0;
          *(undefined8 *)(lVar2 + 0x80) = 0;
          puVar3[0xb0] = 0xffffffff;
          CRYPTO_free(*(void **)(lVar2 + 0x240));
          *(undefined8 *)(lVar2 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar2 + 0x300));
          *(undefined8 *)(lVar2 + 0x300) = 0;
          *puVar3 = *(undefined4 *)pbVar1;
          lVar10 = param_1 + uVar14 * 8;
          *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar10 + 0x80);
          __s = *(char **)(lVar10 + 0x300);
          pcVar13 = *(char **)(lVar10 + 0x240);
          uVar4 = *(undefined4 *)(pbVar1 + 0x2c0);
          CRYPTO_free(*(void **)(lVar2 + 0x240));
          if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
            *(undefined8 *)(lVar2 + 0x240) = 0;
          }
          else {
            sVar12 = strlen(pcVar13);
            __dest = (char *)CRYPTO_malloc((int)sVar12 + 1,(char *)0x0,0);
            *(char **)(lVar2 + 0x240) = __dest;
            if (__dest != (char *)0x0) {
              strcpy(__dest,pcVar13);
            }
          }
          puVar3[0xb0] = uVar4;
          CRYPTO_free(*(void **)(lVar2 + 0x300));
          if ((__s == (char *)0x0) || (*__s == '\0')) {
            *(undefined8 *)(lVar2 + 0x300) = 0;
          }
          else {
            sVar12 = strlen(__s);
            pcVar13 = (char *)CRYPTO_malloc((int)sVar12 + 1,(char *)0x0,0);
            *(char **)(lVar2 + 0x300) = pcVar13;
            if (pcVar13 != (char *)0x0) {
              strcpy(pcVar13,__s);
            }
          }
          if ((*(long *)(lVar10 + 0x100) == 0) ||
             (sVar12 = *(size_t *)(lVar10 + 0x180), sVar12 == 0)) {
            if ((*(byte *)(puVar3 + 0x80) & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x100) = 0;
              *(undefined8 *)(lVar2 + 0x180) = 0;
              puVar3[0x80] = 0;
            }
            else if (*(undefined1 **)(lVar2 + 0x100) != (undefined1 *)0x0) {
              **(undefined1 **)(lVar2 + 0x100) = 0;
              puVar3[0x80] = 1;
              uVar9 = (ulong)*(uint *)(param_1 + 0x380);
              goto LAB_001007f8;
            }
          }
          else {
            pvVar11 = CRYPTO_malloc((int)sVar12,(char *)0x0,0);
            if (pvVar11 != (void *)0x0) {
              pvVar11 = memcpy(pvVar11,*(void **)(lVar10 + 0x100),sVar12);
              uVar5 = *(uint *)(pbVar1 + 0x200);
              if ((*(byte *)(puVar3 + 0x80) & 1) != 0) {
                CRYPTO_free(*(void **)(lVar2 + 0x100));
              }
              *(void **)(lVar2 + 0x100) = pvVar11;
              *(size_t *)(lVar2 + 0x180) = sVar12;
              puVar3[0x80] = uVar5 | 1;
              uVar9 = (ulong)*(uint *)(param_1 + 0x380);
              goto LAB_001007f8;
            }
          }
          uVar9 = (ulong)*(uint *)(param_1 + 0x380);
        }
LAB_001007f8:
      } while ((long)(int)uVar9 != uVar14);
    }
  }
  return;
}


