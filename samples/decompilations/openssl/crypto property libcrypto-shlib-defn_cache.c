
void lh_PROPERTY_DEFN_ELEM_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_PROPERTY_DEFN_ELEM_cfn_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_PROPERTY_DEFN_ELEM_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_PROPERTY_DEFN_ELEM_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void property_defn_free(void *param_1)

{
  ossl_property_free(*(undefined8 *)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



void property_defn_cmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void property_defn_hash(undefined8 *param_1)

{
  OPENSSL_LH_strhash(*param_1);
  return;
}



void ossl_property_defns_free(long param_1)

{
  if (param_1 != 0) {
    OPENSSL_LH_doall(param_1,property_defn_free);
    OPENSSL_LH_free(param_1);
    return;
  }
  return;
}



void ossl_property_defns_new(void)

{
  undefined8 uVar1;
  
  uVar1 = OPENSSL_LH_new(property_defn_hash,property_defn_cmp);
  OPENSSL_LH_set_thunks
            (uVar1,0x100000,lh_PROPERTY_DEFN_ELEM_cfn_thunk,lh_PROPERTY_DEFN_ELEM_doall_thunk,
             lh_PROPERTY_DEFN_ELEM_doall_arg_thunk);
  return;
}



undefined8 ossl_prop_defn_get(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(param_1,2);
  if (lVar2 != 0) {
    iVar1 = ossl_lib_ctx_read_lock(param_1);
    if (iVar1 != 0) {
      local_38[0] = param_2;
      lVar2 = OPENSSL_LH_retrieve(lVar2,local_38);
      ossl_lib_ctx_unlock(param_1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 8);
        goto LAB_00100173;
      }
    }
  }
  uVar3 = 0;
LAB_00100173:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_prop_defn_set(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 *ptr;
  undefined8 uVar5;
  long in_FS_OFFSET;
  char *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(param_1,2);
  if (lVar2 == 0) {
LAB_00100260:
    uVar5 = 0;
    goto LAB_00100239;
  }
  uVar5 = 1;
  if (param_2 == (char *)0x0) goto LAB_00100239;
  iVar1 = ossl_lib_ctx_write_lock(param_1);
  if (iVar1 == 0) goto LAB_00100260;
  local_58[0] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    OPENSSL_LH_delete(lVar2,local_58);
LAB_0010022b:
    uVar5 = 1;
  }
  else {
    lVar3 = OPENSSL_LH_retrieve();
    if (lVar3 != 0) {
      ossl_property_free(*param_3);
      *param_3 = *(undefined8 *)(lVar3 + 8);
      goto LAB_0010022b;
    }
    sVar4 = strlen(param_2);
    ptr = (undefined8 *)CRYPTO_malloc((int)sVar4 + 0x18,"crypto/property/defn_cache.c",0x77);
    if (ptr != (undefined8 *)0x0) {
      uVar5 = *param_3;
      *ptr = ptr + 2;
      ptr[1] = uVar5;
      memcpy(ptr + 2,param_2,sVar4 + 1);
      lVar3 = OPENSSL_LH_insert(lVar2,ptr);
      if (lVar3 == 0) {
        iVar1 = OPENSSL_LH_error(lVar2);
        if (iVar1 != 0) goto LAB_001002da;
      }
      goto LAB_0010022b;
    }
LAB_001002da:
    uVar5 = 0;
    CRYPTO_free(ptr);
  }
  ossl_lib_ctx_unlock(param_1);
LAB_00100239:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


