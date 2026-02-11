
undefined8 evp_kdf_up_ref(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return 1;
}



void evp_kdf_free(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_free((void *)param_1[2]);
  ossl_provider_free(*param_1);
  CRYPTO_free(param_1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

long * evp_kdf_from_algorithm(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_2 + 0x10);
  plVar2 = (long *)CRYPTO_zalloc(0x80,"crypto/evp/kdf_meth.c",0x32);
  if (plVar2 == (long *)0x0) {
    CRYPTO_free((void *)0x0);
    ERR_new();
    ERR_set_debug("crypto/evp/kdf_meth.c",0x43,"evp_kdf_from_algorithm");
    ERR_set_error(6,0x80006,0);
    return (long *)0x0;
  }
  LOCK();
  *(undefined4 *)(plVar2 + 4) = 1;
  UNLOCK();
  *(undefined4 *)(plVar2 + 1) = param_1;
  lVar3 = ossl_algorithm_get1_first_name(param_2);
  plVar2[2] = lVar3;
  if (lVar3 != 0) {
    plVar2[3] = *(long *)(param_2 + 0x18);
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        switch(iVar1) {
        case 1:
          if (plVar2[5] != 0) break;
          iVar4 = iVar4 + 1;
          plVar2[5] = *(long *)(piVar6 + 2);
          iVar1 = piVar6[4];
          goto joined_r0x001002be;
        case 2:
          if (plVar2[6] == 0) {
            plVar2[6] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 3:
          if (plVar2[7] == 0) {
            iVar4 = iVar4 + 1;
            plVar2[7] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 4:
          if (plVar2[8] == 0) {
            plVar2[8] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 5:
          if (plVar2[9] == 0) {
            iVar5 = iVar5 + 1;
            plVar2[9] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 6:
          if (plVar2[10] == 0) {
            plVar2[10] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 7:
          if (plVar2[0xb] == 0) {
            plVar2[0xb] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 8:
          if (plVar2[0xc] == 0) {
            plVar2[0xc] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 9:
          if (plVar2[0xd] == 0) {
            plVar2[0xd] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 10:
          if (plVar2[0xe] == 0) {
            plVar2[0xe] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
          break;
        case 0xb:
          if (plVar2[0xf] == 0) {
            plVar2[0xf] = *(long *)(piVar6 + 2);
            iVar1 = piVar6[4];
            goto joined_r0x001002be;
          }
        }
        iVar1 = piVar6[4];
joined_r0x001002be:
        piVar6 = piVar6 + 4;
      } while (iVar1 != 0);
      if ((iVar5 == 1) && (iVar4 == 2)) {
        if ((param_3 == 0) || (iVar1 = ossl_provider_up_ref(param_3), iVar1 != 0)) {
          *plVar2 = param_3;
          return plVar2;
        }
        goto LAB_0010038c;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/evp/kdf_meth.c",0x93,"evp_kdf_from_algorithm");
    ERR_set_error(6,0xc1,0);
  }
LAB_0010038c:
  evp_kdf_free(plVar2);
  return (long *)0x0;
}



void EVP_KDF_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,4,param_2,param_3,evp_kdf_from_algorithm,0x100000,evp_kdf_free);
  return;
}



undefined8 EVP_KDF_up_ref(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return 1;
}



void EVP_KDF_free(void)

{
  evp_kdf_free();
  return;
}



undefined8 EVP_KDF_gettable_params(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x50);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = EVP_KDF_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00100482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_KDF_gettable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = EVP_KDF_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001004b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x58))(0,uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_KDF_settable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = EVP_KDF_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001004f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x60))(0,uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_KDF_CTX_gettable_params(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x58) != 0) {
    uVar1 = EVP_KDF_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0010053e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_KDF_CTX_settable_params(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x60) != 0) {
    uVar1 = EVP_KDF_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0010057e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}



void EVP_KDF_do_all_provided(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_do_all(param_1,4,param_2,param_3,evp_kdf_from_algorithm,0x100000,evp_kdf_free);
  return;
}


