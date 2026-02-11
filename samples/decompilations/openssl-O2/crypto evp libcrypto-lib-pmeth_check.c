
undefined8 try_provided_check(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_28 = *(long *)(param_1 + 0x20);
    lVar1 = evp_pkey_export_to_provider
                      (*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8),&local_28,
                       *(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      ERR_set_error(6,0x86,0);
      uVar2 = 0;
    }
    else {
      uVar2 = evp_keymgmt_validate(local_28,lVar1,param_2,param_3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 evp_pkey_public_check_combined(long param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/pmeth_check.c",0x35,"evp_pkey_public_check_combined");
    ERR_set_error(6,0x9a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = try_provided_check(param_1,2,param_2);
    if ((int)uVar2 == -1) {
      if ((*piVar1 != 0) &&
         ((UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xe8),
          UNRECOVERED_JUMPTABLE != (code *)0x0 ||
          ((*(long *)(piVar1 + 2) != 0 &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar1 + 2) + 0xe8),
           UNRECOVERED_JUMPTABLE != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x001000f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(piVar1);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c",0x4d,"evp_pkey_public_check_combined");
      ERR_set_error(6,0x96,0);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



undefined8 evp_pkey_param_check_combined(long param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/pmeth_check.c",0x61,"evp_pkey_param_check_combined");
    ERR_set_error(6,0x9a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = try_provided_check(param_1,0x84,param_2);
    if ((int)uVar2 == -1) {
      if ((*piVar1 != 0) &&
         ((UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xf0),
          UNRECOVERED_JUMPTABLE != (code *)0x0 ||
          ((*(long *)(piVar1 + 2) != 0 &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar1 + 2) + 0xf0),
           UNRECOVERED_JUMPTABLE != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x001001d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(piVar1);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c",0x7a,"evp_pkey_param_check_combined");
      ERR_set_error(6,0x96,0);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



void EVP_PKEY_public_check(undefined8 param_1)

{
  evp_pkey_public_check_combined(param_1,0);
  return;
}



void EVP_PKEY_public_check_quick(undefined8 param_1)

{
  evp_pkey_public_check_combined(param_1,1);
  return;
}



void EVP_PKEY_param_check(undefined8 param_1)

{
  evp_pkey_param_check_combined(param_1,0);
  return;
}



void EVP_PKEY_param_check_quick(undefined8 param_1)

{
  evp_pkey_param_check_combined(param_1,1);
  return;
}



undefined8 EVP_PKEY_private_check(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = try_provided_check(param_1,1,0);
    if ((int)uVar1 == -1) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c",0x97,"EVP_PKEY_private_check");
      ERR_set_error(6,0x96,0);
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/pmeth_check.c",0x8e,"EVP_PKEY_private_check");
  ERR_set_error(6,0x9a,0);
  return 0;
}



undefined8 EVP_PKEY_pairwise_check(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/pmeth_check.c",0xa6,"EVP_PKEY_pairwise_check");
    ERR_set_error(6,0x9a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = try_provided_check(param_1,3,0);
    if ((int)uVar2 == -1) {
      if ((*piVar1 != 0) &&
         ((UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xe0),
          UNRECOVERED_JUMPTABLE != (code *)0x0 ||
          ((*(long *)(piVar1 + 2) != 0 &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar1 + 2) + 0xe0),
           UNRECOVERED_JUMPTABLE != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x0010039a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(piVar1);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c",0xbe,"EVP_PKEY_pairwise_check");
      ERR_set_error(6,0x96,0);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



void EVP_PKEY_check(void)

{
  EVP_PKEY_pairwise_check();
  return;
}


