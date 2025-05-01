
undefined8 FT_TrueTypeGX_Validate(long param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_3 != 0) {
    puVar1 = (undefined8 *)
             ft_module_get_service(*(undefined8 *)(param_1 + 0xb0),"truetypegx-validate",1);
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010005a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar1)(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    return 7;
  }
  return 6;
}



void FT_TrueTypeGX_Free(long param_1)

{
  if (param_1 != 0) {
    ft_mem_free(*(undefined8 *)(param_1 + 0xb8));
    return;
  }
  return;
}



undefined8 FT_ClassicKern_Validate(long param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_3 != 0) {
    puVar1 = (undefined8 *)
             ft_module_get_service(*(undefined8 *)(param_1 + 0xb0),"classickern-validate",1);
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar1)(param_1,param_2,param_3);
      return uVar2;
    }
    return 7;
  }
  return 6;
}



void FT_ClassicKern_Free(long param_1)

{
  if (param_1 != 0) {
    ft_mem_free(*(undefined8 *)(param_1 + 0xb8));
    return;
  }
  return;
}


