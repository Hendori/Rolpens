
void lh_PROPERTY_STRING_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_PROPERTY_STRING_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_PROPERTY_STRING_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_PROPERTY_STRING_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void property_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void property_cmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void property_hash(undefined8 *param_1)

{
  OPENSSL_LH_strhash(*param_1);
  return;
}



undefined4 ossl_property_string(undefined8 param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *ptr;
  size_t sVar4;
  void *pvVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  char *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)ossl_lib_ctx_get_data(param_1,3);
  if (puVar3 != (undefined8 *)0x0) {
    uVar8 = puVar3[2];
    if (param_2 != 0) {
      uVar8 = puVar3[1];
    }
    local_58[0] = param_4;
    iVar1 = CRYPTO_THREAD_read_lock(*puVar3);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/property/property_string.c",0x9d,"ossl_property_string");
      ERR_set_error(0xf,0xc010f,0);
    }
    else {
      ptr = (undefined8 *)OPENSSL_LH_retrieve(uVar8);
      if ((ptr == (undefined8 *)0x0) && (param_3 != 0)) {
        CRYPTO_THREAD_unlock(*puVar3);
        iVar1 = CRYPTO_THREAD_write_lock(*puVar3);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/property/property_string.c",0xa4,"ossl_property_string");
          ERR_set_error(0xf,0xc0110,0);
        }
        else {
          piVar7 = (int *)((long)puVar3 + 0x1c);
          if (param_2 != 0) {
            piVar7 = (int *)(puVar3 + 3);
          }
          ptr = (undefined8 *)OPENSSL_LH_retrieve(uVar8,local_58);
          if (ptr != (undefined8 *)0x0) {
LAB_0010013a:
            CRYPTO_THREAD_unlock(*puVar3);
            goto LAB_00100142;
          }
          sVar4 = strlen(param_4);
          ptr = (undefined8 *)
                CRYPTO_malloc((int)sVar4 + 0x10,"crypto/property/property_string.c",0x80);
          if (ptr != (undefined8 *)0x0) {
            pvVar5 = memcpy((void *)((long)ptr + 0xc),param_4,sVar4 + 1);
            *ptr = pvVar5;
            iVar1 = *piVar7 + 1;
            *piVar7 = iVar1;
            *(int *)(ptr + 1) = iVar1;
            if (iVar1 != 0) {
              uVar6 = puVar3[5];
              if (param_2 != 0) {
                uVar6 = puVar3[4];
              }
              iVar1 = OPENSSL_sk_push(uVar6,pvVar5);
              if (iVar1 < 1) {
                CRYPTO_free(ptr);
                CRYPTO_THREAD_unlock(*puVar3);
              }
              else {
                OPENSSL_LH_insert(uVar8,ptr);
                iVar1 = OPENSSL_LH_error(uVar8);
                if (iVar1 == 0) goto LAB_0010013a;
                OPENSSL_sk_pop(uVar6);
                CRYPTO_free(ptr);
                *piVar7 = *piVar7 + -1;
                CRYPTO_THREAD_unlock(*puVar3);
              }
              goto LAB_0010015a;
            }
            CRYPTO_free(ptr);
          }
          CRYPTO_THREAD_unlock(*puVar3);
        }
      }
      else {
        CRYPTO_THREAD_unlock(*puVar3);
        if (ptr != (undefined8 *)0x0) {
LAB_00100142:
          uVar2 = *(undefined4 *)(ptr + 1);
          goto LAB_0010015c;
        }
      }
    }
  }
LAB_0010015a:
  uVar2 = 0;
LAB_0010015c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_property_str(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)ossl_lib_ctx_get_data(param_2,3);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = CRYPTO_THREAD_read_lock(*puVar2);
    if (iVar1 != 0) {
      uVar3 = puVar2[5];
      if (param_1 != 0) {
        uVar3 = puVar2[4];
      }
      uVar3 = OPENSSL_sk_value(uVar3,param_3 + -1);
      CRYPTO_THREAD_unlock(*puVar2);
      return uVar3;
    }
    ERR_new();
    ERR_set_debug("crypto/property/property_string.c",0xe3,"ossl_property_str");
    ERR_set_error(0xf,0xc010f,0);
  }
  return 0;
}



void ossl_property_string_data_free(undefined8 *param_1)

{
  long lVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_THREAD_lock_free(*param_1);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      OPENSSL_LH_doall(lVar1,property_free);
      OPENSSL_LH_free(lVar1);
      param_1[1] = 0;
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      OPENSSL_LH_doall(lVar1,property_free);
      OPENSSL_LH_free(lVar1);
      param_1[2] = 0;
    }
    OPENSSL_sk_free(param_1[4]);
    OPENSSL_sk_free(param_1[5]);
    param_1[3] = 0;
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * ossl_property_string_data_new(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)CRYPTO_zalloc(0x30,"crypto/property/property_string.c",0x61);
  if (plVar1 != (long *)0x0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    *plVar1 = lVar2;
    uVar3 = OPENSSL_LH_new(property_hash,property_cmp);
    lVar2 = OPENSSL_LH_set_thunks
                      (uVar3,0x100000,lh_PROPERTY_STRING_cfn_thunk,lh_PROPERTY_STRING_doall_thunk,
                       lh_PROPERTY_STRING_doall_arg_thunk);
    plVar1[1] = lVar2;
    uVar3 = OPENSSL_LH_new(property_hash,property_cmp);
    lVar2 = OPENSSL_LH_set_thunks
                      (uVar3,0x100000,lh_PROPERTY_STRING_cfn_thunk,lh_PROPERTY_STRING_doall_thunk,
                       lh_PROPERTY_STRING_doall_arg_thunk);
    plVar1[2] = lVar2;
    lVar2 = OPENSSL_sk_new_null();
    plVar1[4] = lVar2;
    lVar2 = OPENSSL_sk_new_null();
    plVar1[5] = lVar2;
    if ((((*plVar1 != 0) && (plVar1[4] != 0)) && (lVar2 != 0)) &&
       ((plVar1[1] != 0 && (plVar1[2] != 0)))) {
      return plVar1;
    }
    ossl_property_string_data_free(plVar1);
  }
  return (long *)0x0;
}



void ossl_property_name(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ossl_property_string(param_1,1,param_3,param_2);
  return;
}



void ossl_property_name_str(undefined8 param_1,undefined4 param_2)

{
  ossl_property_str(1,param_1,param_2);
  return;
}



void ossl_property_value(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ossl_property_string(param_1,0,param_3,param_2);
  return;
}



void ossl_property_value_str(undefined8 param_1,undefined4 param_2)

{
  ossl_property_str(0,param_1,param_2);
  return;
}


