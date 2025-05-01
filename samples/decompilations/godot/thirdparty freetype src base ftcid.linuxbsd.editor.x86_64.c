
undefined8
FT_Get_CID_Registry_Ordering_Supplement
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_1 != 0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (pcVar1 != (code *)0x0) {
      puVar2 = (undefined8 *)(*pcVar1)(*(long **)(param_1 + 0xb0),&_LC0);
      if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
        uVar3 = (*(code *)*puVar2)(param_1,&local_40,&local_38,&local_44);
        goto LAB_00100095;
      }
    }
  }
  uVar3 = 6;
LAB_00100095:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = local_40;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = local_38;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_44;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Get_CID_Is_Internally_CID_Keyed(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_21 = 0;
  if (param_1 != 0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (pcVar1 != (code *)0x0) {
      lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),&_LC0);
      if ((lVar2 != 0) && (*(code **)(lVar2 + 8) != (code *)0x0)) {
        uVar3 = (**(code **)(lVar2 + 8))(param_1,&local_21);
        goto LAB_00100145;
      }
    }
  }
  uVar3 = 6;
LAB_00100145:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_21;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Get_CID_From_Glyph_Index(long param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if (param_1 != 0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (pcVar1 != (code *)0x0) {
      lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),&_LC0);
      if ((lVar2 != 0) && (*(code **)(lVar2 + 0x10) != (code *)0x0)) {
        uVar3 = (**(code **)(lVar2 + 0x10))(param_1,param_2,&local_24);
        goto LAB_001001e5;
      }
    }
  }
  uVar3 = 6;
LAB_001001e5:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_24;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


