
undefined8 ossl_method_construct_reserve_store(int param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  if (((param_1 != 0) && (*(int *)(param_2 + 0x14) == 0)) && (lVar3 == 0)) {
    lVar3 = (*(code *)*puVar1)(uVar2);
    *(long *)(param_2 + 8) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0010002b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)puVar1[1])(lVar3,uVar2);
  return uVar2;
}



void ossl_method_construct_unreserve_store(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  return;
}



void ossl_method_construct_this(undefined8 param_1,undefined8 *param_2,int param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))
                    (param_2,param_1,*(undefined8 *)(param_4 + 0x20));
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_4 + 8);
    }
    (**(code **)(*(long *)(param_4 + 0x18) + 0x20))
              (uVar2,lVar1,param_1,*param_2,param_2[1],*(undefined8 *)(param_4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x001000f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x18) + 0x30))(lVar1,*(undefined8 *)(param_4 + 0x20));
    return;
  }
  return;
}



bool ossl_method_construct_postcondition
               (undefined8 param_1,int param_2,int param_3,long param_4,undefined4 *param_5)

{
  int iVar1;
  
  if (param_5 == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/core_fetch.c",0x5c,"ossl_method_construct_postcondition");
    ERR_set_error(0xf,0xc0102,0);
    return false;
  }
  *param_5 = 1;
  if (param_3 != 0) {
    if (*(int *)(param_4 + 0x14) == 0) {
      return true;
    }
  }
  iVar1 = ossl_provider_set_operation_bit(param_1,(long)param_2);
  return iVar1 != 0;
}



undefined8
ossl_method_construct_precondition
          (undefined8 param_1,int param_2,int param_3,long param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  
  if (param_5 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/core_fetch.c",0x41,"ossl_method_construct_precondition");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  *param_5 = 0;
  if ((param_3 == 0) || (*(int *)(param_4 + 0x14) != 0)) {
    iVar2 = ossl_provider_test_operation_bit(param_1,(long)param_2,param_5);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = (uint)(*param_5 == 0);
  }
  else {
    uVar1 = 1;
  }
  *param_5 = uVar1;
  return 1;
}



void ossl_method_construct
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  long local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  uVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = *param_3;
  }
  local_40 = 0;
  local_34 = param_4;
  local_30 = param_5;
  local_28 = param_6;
  ossl_algorithm_do_all
            (param_1,param_2,uVar2,ossl_method_construct_precondition,0x100000,
             ossl_method_construct_this,ossl_method_construct_unreserve_store,
             ossl_method_construct_postcondition,local_48);
  if (local_40 != 0) {
    lVar1 = (**(code **)(param_5 + 0x18))(local_40,param_3,param_6);
    if (lVar1 != 0) goto LAB_001002b6;
  }
  (**(code **)(param_5 + 0x18))(0,param_3,param_6);
LAB_001002b6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


