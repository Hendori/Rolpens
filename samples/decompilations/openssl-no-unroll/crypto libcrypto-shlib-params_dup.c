
void compare_params(undefined8 *param_1,undefined8 *param_2)

{
  OPENSSL_strcasecmp(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}



ulong ossl_param_bytes_to_blocks(long param_1)

{
  return param_1 + 7U >> 3;
}



void ossl_param_set_secure_block(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[3] = param_3;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 1) = 0x7f;
  return;
}



long * OSSL_PARAM_dup(long *param_1)

{
  undefined8 *__dest;
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  size_t __n;
  long *plVar8;
  long in_FS_OFFSET;
  long *local_a0;
  long local_98;
  long local_90;
  long lStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/params_dup.c",0x6a,"OSSL_PARAM_dup");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    if (*param_1 == 0) {
      lVar5 = 0;
      lVar6 = 0x28;
    }
    else {
      iVar7 = 1;
      plVar8 = param_1;
      do {
        iVar4 = CRYPTO_secure_allocated(plVar8[2]);
        lVar5 = 8;
        if (1 < (int)plVar8[1] - 6U) {
          lVar5 = (ulong)((int)plVar8[1] == 4) + plVar8[3];
        }
        lVar5 = ossl_param_bytes_to_blocks(lVar5);
        plVar8 = plVar8 + 5;
        iVar7 = iVar7 + 1;
        *(long *)(local_78 + (long)iVar4 * 0x20) = *(long *)(local_78 + (long)iVar4 * 0x20) + lVar5;
      } while (*plVar8 != 0);
      lVar6 = (long)iVar7 * 0x28;
      lVar5 = local_78._0_8_;
    }
    lVar6 = ossl_param_bytes_to_blocks(lVar6);
    lVar5 = (lVar5 + lVar6) * 8;
    local_a0 = (long *)CRYPTO_zalloc(lVar5,"crypto/params_dup.c",0x27);
    if (local_a0 != (long *)0x0) {
      local_78._8_8_ = lVar5;
      local_98 = local_58._0_8_;
      if (local_58._0_8_ == 0) {
        local_90 = 0;
      }
      else {
        local_98 = local_58._0_8_ << 3;
        local_90 = CRYPTO_secure_zalloc(local_98,"crypto/params_dup.c",0x27);
        local_68._0_8_ = local_90;
        if (local_90 == 0) {
          CRYPTO_free(local_a0);
          goto LAB_001002dc;
        }
        local_58._8_8_ = local_98;
        local_68._8_8_ = local_90;
      }
      lVar5 = *param_1;
      plVar8 = local_a0;
      while (lVar5 != 0) {
        iVar7 = CRYPTO_secure_allocated(param_1[2]);
        lVar6 = *param_1;
        lVar1 = param_1[1];
        lVar2 = param_1[3];
        lVar3 = param_1[1];
        lVar5 = param_1[4];
        plVar8[2] = param_1[2];
        plVar8[3] = lVar2;
        plVar8[4] = lVar5;
        __dest = *(undefined8 **)(&stack0xffffffffffffff78 + (long)iVar7 * 0x20 + 8);
        *plVar8 = lVar6;
        plVar8[1] = lVar1;
        plVar8[2] = (long)__dest;
        if ((int)lVar3 - 6U < 2) {
          __n = 8;
          *__dest = *(undefined8 *)param_1[2];
        }
        else {
          __n = param_1[3];
          memcpy(__dest,(void *)param_1[2],__n);
          if ((int)param_1[1] == 4) {
            __n = __n + 1;
          }
        }
        param_1 = param_1 + 5;
        plVar8 = plVar8 + 5;
        lVar6 = ossl_param_bytes_to_blocks(__n);
        lVar5 = *param_1;
        *(undefined8 **)(&stack0xffffffffffffff78 + (long)iVar7 * 0x20 + 8) = __dest + lVar6;
      }
      ossl_param_set_secure_block(plVar8,local_90,local_98);
      goto LAB_00100272;
    }
  }
LAB_001002dc:
  local_a0 = (long *)0x0;
LAB_00100272:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0;
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
    goto LAB_0010061c;
  }
  if ((param_1 == (long *)0x0) || (sVar8 = 0, *param_1 == 0)) {
    local_848[0] = (undefined8 *)0x0;
    if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
      local_438[0] = (undefined8 *)0x0;
      ERR_new();
      ERR_set_debug("crypto/params_dup.c",0xaf,"OSSL_PARAM_merge");
      ERR_set_error(0xf,0x83,0);
      goto LAB_0010061c;
    }
    __nmemb = 0;
LAB_0010039b:
    sVar8 = 0;
    do {
      __nmemb_00 = sVar8 + 1;
      local_848[sVar8 + 0x82] = param_2;
      param_2 = param_2 + 5;
      if (*param_2 == 0) {
        local_848[sVar8 + 0x83] = (undefined8 *)0x0;
        goto LAB_001003dc;
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
        goto joined_r0x00100533;
      }
      sVar8 = __nmemb;
    } while (__nmemb != 0x80);
    local_848[0x80] = (undefined8 *)0x0;
joined_r0x00100533:
    if ((param_2 != (long *)0x0) && (*param_2 != 0)) goto LAB_0010039b;
    local_438[0] = (undefined8 *)0x0;
    __nmemb_00 = 0;
  }
LAB_001003dc:
  __base = local_848 + 0x82;
  qsort(local_848,__nmemb,8,compare_params);
  qsort(__base,__nmemb_00,8,compare_params);
  puVar4 = (undefined8 *)CRYPTO_zalloc((__nmemb + 1 + __nmemb_00) * 0x28,"crypto/params_dup.c",0xb8)
  ;
  puVar7 = puVar4;
  puVar5 = local_848[0];
  if (puVar4 != (undefined8 *)0x0) {
joined_r0x0010043d:
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
          goto LAB_001004fa;
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
          if (0 < iVar3) goto code_r0x001004a3;
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
    goto LAB_001004fa;
  }
LAB_0010061c:
  puVar4 = (undefined8 *)0x0;
LAB_001004fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001004a3:
  uVar2 = puVar1[1];
  puVar5 = *ppuVar9;
  __base = __base + 1;
  *puVar6 = *puVar1;
  puVar6[1] = uVar2;
  uVar2 = puVar1[3];
  puVar6[2] = puVar1[2];
  puVar6[3] = uVar2;
  puVar6[4] = puVar1[4];
  goto joined_r0x0010043d;
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


