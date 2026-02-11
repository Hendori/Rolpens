
undefined8
ossl_child_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    return 0;
  }
  pcVar4 = (code *)0x0;
  do {
    if (iVar1 == 4) {
      pcVar4 = *(code **)(param_2 + 2);
    }
    iVar1 = param_2[4];
    param_2 = param_2 + 4;
  } while (iVar1 != 0);
  if (pcVar4 != (code *)0x0) {
    uVar2 = (*pcVar4)();
    lVar3 = ossl_lib_ctx_get_data(uVar2,0x12);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(lVar3 + 0x38))(*(undefined8 *)(lVar3 + 8));
      *param_4 = uVar2;
      uVar2 = (**(code **)(lVar3 + 0x40))(*(undefined8 *)(lVar3 + 8));
      *param_3 = uVar2;
      return 1;
    }
  }
  return 0;
}



void provider_global_props_cb(undefined8 param_1,undefined8 param_2)

{
  evp_set_default_properties_int(param_2,param_1,0,1);
  return;
}



bool provider_remove_child_cb(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ossl_lib_ctx_get_data(param_2,0x12);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
    lVar2 = ossl_provider_find(param_2,uVar3,1);
    if (lVar2 != 0) {
      ossl_provider_free(lVar2);
      iVar1 = ossl_provider_is_child(lVar2);
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = ossl_provider_deactivate(lVar2,1);
      return iVar1 != 0;
    }
  }
  return false;
}



bool provider_create_child_cb(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar2 = ossl_lib_ctx_get_data(param_2,0x12);
  if (lVar2 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 != 0) {
      uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
      *(undefined8 *)(lVar2 + 8) = param_1;
      lVar4 = ossl_provider_find(param_2,uVar3,1);
      if (lVar4 == 0) {
        lVar4 = ossl_provider_new(param_2,uVar3,0x100000,0,1);
        if (lVar4 != 0) {
          iVar1 = ossl_provider_activate(lVar4,0,0);
          if (iVar1 != 0) {
            iVar1 = ossl_provider_set_child(lVar4,param_1);
            if (iVar1 != 0) {
              iVar1 = ossl_provider_add_to_store(lVar4,0,0);
              if (iVar1 != 0) {
                bVar5 = true;
                goto LAB_001001c8;
              }
            }
            ossl_provider_deactivate(lVar4,0);
          }
          ossl_provider_free(lVar4);
        }
        bVar5 = false;
      }
      else {
        ossl_provider_free(lVar4);
        iVar1 = ossl_provider_activate(lVar4,0,1);
        bVar5 = iVar1 != 0;
      }
LAB_001001c8:
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x10));
      return bVar5;
    }
  }
  return false;
}



void ossl_child_prov_ctx_new(void)

{
  CRYPTO_zalloc(0x58,"crypto/provider_child.c",0x27);
  return;
}



void ossl_child_prov_ctx_free(void *param_1)

{
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



bool ossl_provider_init_as_child(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return false;
  }
  puVar3 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x12);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_2;
    iVar2 = *param_3;
    while (iVar2 != 0) {
      if (iVar2 == 4) {
        puVar3[3] = *(undefined8 *)(param_3 + 2);
      }
      else if (iVar2 - 0x69U < 7) {
        switch(iVar2) {
        case 0x6a:
          puVar3[5] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6b:
          puVar3[6] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6c:
          puVar3[7] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6d:
          puVar3[8] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6e:
          puVar3[9] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6f:
          puVar3[10] = *(undefined8 *)(param_3 + 2);
          break;
        default:
          puVar3[4] = *(undefined8 *)(param_3 + 2);
        }
      }
      piVar1 = param_3 + 4;
      param_3 = param_3 + 4;
      iVar2 = *piVar1;
    }
    if ((((puVar3[3] != 0) && (puVar3[4] != 0)) && (puVar3[6] != 0)) &&
       (((puVar3[7] != 0 && (puVar3[8] != 0)) && ((puVar3[9] != 0 && (puVar3[10] != 0)))))) {
      lVar4 = CRYPTO_THREAD_lock_new();
      puVar3[2] = lVar4;
      if (lVar4 != 0) {
        iVar2 = (*(code *)puVar3[4])
                          (*puVar3,provider_create_child_cb,provider_remove_child_cb,
                           provider_global_props_cb,param_1);
        return iVar2 != 0;
      }
    }
  }
  return false;
}



void ossl_provider_deinit_child(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x12);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[5])(*puVar1);
    return;
  }
  return;
}



undefined8 ossl_provider_up_ref_parent(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = ossl_provider_libctx();
  plVar2 = (long *)ossl_lib_ctx_get_data(uVar1,0x12);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = ossl_provider_get_parent(param_1);
  if (*plVar2 != lVar3) {
                    /* WARNING: Could not recover jumptable at 0x001004e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)plVar2[9])(lVar3,param_2);
    return uVar1;
  }
  return 1;
}



undefined8 ossl_provider_free_parent(undefined8 param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = ossl_provider_libctx();
  plVar2 = (long *)ossl_lib_ctx_get_data(uVar1,0x12);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = ossl_provider_get_parent(param_1);
  if (*plVar2 != lVar3) {
    UNRECOVERED_JUMPTABLE = (code *)plVar2[10];
    uVar1 = ossl_provider_get_parent(param_1);
                    /* WARNING: Could not recover jumptable at 0x0010054f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return uVar1;
  }
  return 1;
}


