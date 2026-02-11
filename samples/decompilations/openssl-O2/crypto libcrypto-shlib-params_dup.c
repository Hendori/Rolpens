
void compare_params(undefined8 *param_1,undefined8 *param_2)

{
  OPENSSL_strcasecmp(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}



ulong ossl_param_bytes_to_blocks(long param_1)

{
  return param_1 + 7U >> 3;
}



long * ossl_param_dup(long *param_1,long *param_2,long param_3,int *param_4)

{
  long *plVar1;
  undefined8 *__dest;
  size_t __n;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *param_1;
  plVar5 = param_2;
  do {
    if (lVar4 == 0) {
      return plVar5;
    }
    iVar2 = CRYPTO_secure_allocated(param_1[2]);
    if (param_2 == (long *)0x0) {
      if ((int)param_1[1] - 6U < 2) {
        lVar4 = 8;
LAB_00100155:
        lVar4 = ossl_param_bytes_to_blocks(lVar4);
      }
      else {
        lVar4 = param_1[3];
        if ((int)param_1[1] != 4) goto LAB_00100155;
        lVar4 = ossl_param_bytes_to_blocks(lVar4 + 1);
      }
      plVar1 = (long *)(param_3 + (long)iVar2 * 0x20 + 0x10);
      *plVar1 = *plVar1 + lVar4;
    }
    else {
      lVar4 = param_1[1];
      *plVar5 = *param_1;
      plVar5[1] = lVar4;
      lVar3 = param_1[3];
      lVar4 = param_3 + (long)iVar2 * 0x20;
      __dest = *(undefined8 **)(lVar4 + 8);
      plVar5[2] = param_1[2];
      plVar5[3] = lVar3;
      lVar3 = param_1[4];
      plVar5[2] = (long)__dest;
      plVar5[4] = lVar3;
      if ((int)param_1[1] - 6U < 2) {
        *__dest = *(undefined8 *)param_1[2];
        lVar3 = ossl_param_bytes_to_blocks(8);
      }
      else {
        __n = param_1[3];
        memcpy(__dest,(void *)param_1[2],__n);
        if ((int)param_1[1] == 4) {
          lVar3 = ossl_param_bytes_to_blocks(__n + 1);
        }
        else {
          lVar3 = ossl_param_bytes_to_blocks(__n);
        }
      }
      plVar1 = (long *)(lVar4 + 8);
      *plVar1 = *plVar1 + lVar3 * 8;
      plVar5 = plVar5 + 5;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 1;
    }
    param_1 = param_1 + 5;
    lVar4 = *param_1;
  } while( true );
}



void ossl_param_set_secure_block(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[3] = param_3;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 1) = 0x7f;
  return;
}



void * OSSL_PARAM_dup(long param_1)

{
  long lVar1;
  void *ptr;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 1;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params_dup.c",0x6a,"OSSL_PARAM_dup");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    ossl_param_dup(param_1,0,local_88,&local_8c);
    lVar1 = ossl_param_bytes_to_blocks((long)local_8c * 0x28);
    lVar4 = (local_78._0_8_ + lVar1) * 8;
    ptr = (void *)CRYPTO_zalloc(lVar4,"crypto/params_dup.c",0x27);
    local_88._0_8_ = ptr;
    if (ptr != (void *)0x0) {
      local_78._8_8_ = lVar4;
      local_88._8_8_ = (void *)((long)ptr + lVar1 * 8);
      if (local_58._0_8_ != 0) {
        lVar1 = local_58._0_8_ * 8;
        lVar4 = CRYPTO_secure_zalloc(lVar1,"crypto/params_dup.c",0x27);
        local_68._0_8_ = lVar4;
        if (lVar4 == 0) {
          pvVar3 = (void *)0x0;
          CRYPTO_free(ptr);
          goto LAB_00100295;
        }
        local_58._8_8_ = lVar1;
        local_68._8_8_ = lVar4;
      }
      uVar2 = ossl_param_dup(param_1,ptr,local_88,0);
      ossl_param_set_secure_block(uVar2,local_68._0_8_,local_58._8_8_);
      pvVar3 = ptr;
      goto LAB_00100295;
    }
  }
  pvVar3 = (void *)0x0;
LAB_00100295:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

undefined8 * OSSL_PARAM_merge(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  size_t __nmemb;
  undefined8 **__base;
  undefined8 **ppuVar9;
  size_t __nmemb_00;
  long in_FS_OFFSET;
  undefined8 *local_848 [130];
  undefined8 *local_438 [129];
  long local_30;
  size_t sVar8;
  
  ppuVar9 = local_848;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0 && param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/params_dup.c",0x9d,"OSSL_PARAM_merge");
    ERR_set_error(0xf,0xc0102,0);
    goto LAB_0010065c;
  }
  if ((param_1 == (long *)0x0) || (sVar8 = 0, *param_1 == 0)) {
    local_848[0] = (undefined8 *)0x0;
    if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
      local_438[0] = (undefined8 *)0x0;
      ERR_new();
      ERR_set_debug("crypto/params_dup.c",0xaf,"OSSL_PARAM_merge");
      ERR_set_error(0xf,0x83,0);
      goto LAB_0010065c;
    }
    __nmemb = 0;
LAB_001003db:
    sVar8 = 0;
    do {
      __nmemb_00 = sVar8 + 1;
      local_848[sVar8 + 0x82] = param_2;
      param_2 = param_2 + 5;
      if (*param_2 == 0) {
        local_848[sVar8 + 0x83] = (undefined8 *)0x0;
        goto LAB_0010041c;
      }
      sVar8 = __nmemb_00;
    } while (__nmemb_00 != 0x80);
    local_438[0x80] = (undefined8 *)0x0;
  }
  else {
    do {
      __nmemb = sVar8 + 1;
      local_848[sVar8] = param_1;
      param_1 = param_1 + 5;
      if (*param_1 == 0) {
        local_848[__nmemb] = (undefined8 *)0x0;
        goto joined_r0x00100573;
      }
      sVar8 = __nmemb;
    } while (__nmemb != 0x80);
    local_848[0x80] = (undefined8 *)0x0;
joined_r0x00100573:
    if ((param_2 != (long *)0x0) && (*param_2 != 0)) goto LAB_001003db;
    local_438[0] = (undefined8 *)0x0;
    __nmemb_00 = 0;
  }
LAB_0010041c:
  __base = local_848 + 0x82;
  qsort(local_848,__nmemb,8,compare_params);
  qsort(__base,__nmemb_00,8,compare_params);
  puVar4 = (undefined8 *)CRYPTO_zalloc((__nmemb + 1 + __nmemb_00) * 0x28,"crypto/params_dup.c",0xb8)
  ;
  puVar7 = puVar4;
  puVar5 = local_848[0];
  if (puVar4 != (undefined8 *)0x0) {
joined_r0x0010047d:
    puVar6 = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        puVar7 = puVar6 + 5;
        if (*__base == (undefined8 *)0x0) {
          puVar7 = *ppuVar9;
          do {
            uVar2 = puVar7[1];
            ppuVar9 = (undefined8 **)((long *)ppuVar9 + 1);
            *puVar6 = *puVar7;
            puVar6[1] = uVar2;
            uVar2 = puVar7[3];
            puVar6[2] = puVar7[2];
            puVar6[3] = uVar2;
            puVar6[4] = puVar7[4];
            puVar7 = *ppuVar9;
            puVar6 = puVar6 + 5;
          } while (puVar7 != (undefined8 *)0x0);
          goto LAB_0010053a;
        }
        iVar3 = OPENSSL_strcasecmp(*puVar5,**__base);
        puVar1 = *__base;
        if (iVar3 == 0) {
          uVar2 = puVar1[1];
          __base = __base + 1;
          *puVar6 = *puVar1;
          puVar6[1] = uVar2;
          uVar2 = puVar1[3];
          puVar6[2] = puVar1[2];
          puVar6[3] = uVar2;
          puVar6[4] = puVar1[4];
        }
        else {
          puVar5 = *ppuVar9;
          if (0 < iVar3) goto code_r0x001004e3;
          uVar2 = puVar5[1];
          *puVar6 = *puVar5;
          puVar6[1] = uVar2;
          uVar2 = puVar5[3];
          puVar6[2] = puVar5[2];
          puVar6[3] = uVar2;
          puVar6[4] = puVar5[4];
        }
        ppuVar9 = (undefined8 **)((long *)ppuVar9 + 1);
        puVar5 = *ppuVar9;
        puVar6 = puVar7;
        if (puVar5 == (undefined8 *)0x0) break;
      } while( true );
    }
    puVar5 = *__base;
    do {
      uVar2 = puVar5[1];
      __base = __base + 1;
      *puVar7 = *puVar5;
      puVar7[1] = uVar2;
      uVar2 = puVar5[3];
      puVar7[2] = puVar5[2];
      puVar7[3] = uVar2;
      puVar7[4] = puVar5[4];
      puVar5 = *__base;
      puVar7 = puVar7 + 5;
    } while (puVar5 != (undefined8 *)0x0);
    goto LAB_0010053a;
  }
LAB_0010065c:
  puVar4 = (undefined8 *)0x0;
LAB_0010053a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001004e3:
  uVar2 = puVar1[1];
  puVar5 = *ppuVar9;
  __base = __base + 1;
  *puVar6 = *puVar1;
  puVar6[1] = uVar2;
  uVar2 = puVar1[3];
  puVar6[2] = puVar1[2];
  puVar6[3] = uVar2;
  puVar6[4] = puVar1[4];
  goto joined_r0x0010047d;
}



void OSSL_PARAM_free(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    plVar2 = param_1;
    while (lVar1 != 0) {
      plVar2 = plVar2 + 5;
      lVar1 = *plVar2;
    }
    if ((int)plVar2[1] == 0x7f) {
      CRYPTO_secure_clear_free(plVar2[2],plVar2[3],"crypto/params_dup.c",0xe9);
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}


