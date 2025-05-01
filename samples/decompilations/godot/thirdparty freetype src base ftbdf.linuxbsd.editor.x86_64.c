
undefined8 FT_Get_BDF_Charset_ID(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if (param_1 == 0) {
    uVar3 = 0x23;
    goto LAB_001000a1;
  }
  pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
  if (pcVar1 == (code *)0x0) {
LAB_00100080:
    uVar3 = 6;
  }
  else {
    puVar2 = (undefined8 *)(*pcVar1)(*(long **)(param_1 + 0xb0),&_LC0);
    if ((puVar2 == (undefined8 *)0x0) || ((code *)*puVar2 == (code *)0x0)) goto LAB_00100080;
    uVar3 = (*(code *)*puVar2)(param_1,&local_30,&local_28);
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = local_30;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = local_28;
  }
LAB_001000a1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Get_BDF_Property(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_3 != (undefined4 *)0x0) {
    plVar1 = *(long **)(param_1 + 0xb0);
    *param_3 = 0;
    pcVar2 = *(code **)(*plVar1 + 0x40);
    if (pcVar2 != (code *)0x0) {
      lVar3 = (*pcVar2)(plVar1,&_LC0);
      if ((lVar3 != 0) && (*(code **)(lVar3 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(lVar3 + 8))(param_1,param_2,param_3);
        return uVar4;
      }
    }
  }
  return 6;
}


