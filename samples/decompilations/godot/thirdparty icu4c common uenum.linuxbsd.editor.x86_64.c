
void uenum_close_76_godot(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (*param_1 != 0) {
      uprv_free_76_godot();
      UNRECOVERED_JUMPTABLE = (code *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0010009b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  uprv_free_76_godot();
  return;
}



undefined8 uenum_count_76_godot(long param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*param_2 < 1)) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x18))();
      return uVar1;
    }
    *param_2 = 0x10;
  }
  return 0xffffffff;
}



long uenum_unextDefault_76_godot(UEnumeration *param_1,int *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    *param_3 = 0x10;
    lVar2 = 0;
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x28))(param_1,&local_34);
    if (lVar1 != 0) {
      lVar2 = _getBuffer(param_1,local_34 * 2 + 2);
      if (lVar2 != 0) {
        u_charsToUChars_76_godot(lVar1,lVar2,local_34 + 1);
        goto LAB_00100151;
      }
      *param_3 = 7;
    }
    lVar2 = 0;
  }
LAB_00100151:
  if (param_2 != (int *)0x0) {
    *param_2 = local_34;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long uenum_nextDefault_76_godot(UEnumeration *param_1,int *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    *param_3 = 0x10;
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x20))();
    if (lVar1 != 0) {
      lVar2 = _getBuffer(param_1,*param_2 + 1);
      if (lVar2 != 0) {
        u_UCharsToChars_76_godot(lVar1,lVar2,*param_2 + 1);
        return lVar2;
      }
      *param_3 = 7;
    }
  }
  return 0;
}



undefined8 uenum_unext_76_godot(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*param_3 < 1)) {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x20))();
      return uVar1;
    }
    *param_3 = 0x10;
  }
  return 0;
}



undefined8 uenum_next_76_godot(long param_1,long param_2,int *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (0 < *param_3)) {
LAB_001002e0:
    uVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      *param_3 = 0x10;
      goto LAB_001002e0;
    }
    if (param_2 != 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001002a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      goto LAB_001002e4;
    }
    local_14 = 0;
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,&local_14);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_001002e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uenum_reset_76_godot(long param_1,int *param_2)

{
  if ((param_1 != 0) && (*param_2 < 1)) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x30))();
      return;
    }
    *param_2 = 0x10;
  }
  return;
}


