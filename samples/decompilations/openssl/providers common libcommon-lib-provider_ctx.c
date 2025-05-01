
void ossl_prov_ctx_new(void)

{
  CRYPTO_zalloc(0x20,"providers/common/provider_ctx.c",0x11);
  return;
}



void ossl_prov_ctx_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void ossl_prov_ctx_set0_libctx(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}



void ossl_prov_ctx_set0_handle(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
  }
  return;
}



void ossl_prov_ctx_set0_core_bio_method(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  return;
}



void ossl_prov_ctx_set0_core_get_params(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  return;
}



undefined8 ossl_prov_ctx_get0_libctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



undefined8 ossl_prov_ctx_get0_handle(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 ossl_prov_ctx_get0_core_bio_method(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



undefined8 ossl_prov_ctx_get0_core_get_params(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ossl_prov_ctx_get_param(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_80 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && ((code *)param_1[3] != (code *)0x0)) {
    local_78._8_4_ = 6;
    local_78._0_8_ = param_2;
    local_78._12_4_ = 0;
    local_68._8_8_ = __LC1;
    local_68._0_8_ = &local_80;
    local_58._8_8_ = 0;
    local_58._0_8_ = _UNK_001002e8;
    iVar1 = (*(code *)param_1[3])(*param_1,local_78);
    if (((iVar1 != 0) && (iVar1 = OSSL_PARAM_modified(local_78), iVar1 != 0)) &&
       (lVar2 = local_80, local_80 != 0)) goto LAB_00100191;
  }
  lVar2 = param_3;
LAB_00100191:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



undefined4 ossl_prov_ctx_get_bool_param(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)ossl_prov_ctx_get_param(param_1,param_2,0);
  if (pcVar2 == (char *)0x0) {
    return param_3;
  }
  if ((((*pcVar2 != '1') || (pcVar2[1] != '\0')) &&
      (iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC3), iVar1 != 0)) &&
     ((iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC4), iVar1 != 0 &&
      (iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC5), iVar1 != 0)))) {
    if (((*pcVar2 != '0') || (pcVar2[1] != '\0')) &&
       (((iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC6), iVar1 != 0 &&
         (iVar1 = OPENSSL_strcasecmp(pcVar2,"false"), iVar1 != 0)) &&
        (iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC8), iVar1 != 0)))) {
      return param_3;
    }
    return 0;
  }
  return 1;
}


