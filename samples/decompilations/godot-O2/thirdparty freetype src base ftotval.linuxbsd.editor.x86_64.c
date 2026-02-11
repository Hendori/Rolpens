
undefined8
FT_OpenType_Validate
          (long param_1,undefined4 param_2,long param_3,long param_4,long param_5,long param_6,
          long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((((param_3 == 0) || (param_4 == 0)) || (param_5 == 0 || param_6 == 0)) || (param_7 == 0)) {
    uVar2 = 6;
  }
  else {
    puVar1 = (undefined8 *)
             ft_module_get_service(*(undefined8 *)(param_1 + 0xb0),"opentype-validate",1);
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar2;
    }
    uVar2 = 7;
  }
  return uVar2;
}



void FT_OpenType_Free(long param_1)

{
  if (param_1 != 0) {
    ft_mem_free(*(undefined8 *)(param_1 + 0xb8));
    return;
  }
  return;
}


