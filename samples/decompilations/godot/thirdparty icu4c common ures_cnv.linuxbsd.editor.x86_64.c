
undefined8 ures_openU_76_godot(undefined1 *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
LAB_001000a6:
    uVar3 = 0;
  }
  else {
    if (param_1 != (undefined1 *)0x0) {
      iVar2 = u_strlen_76_godot();
      if (0x3ff < iVar2) {
        *param_3 = 1;
        goto LAB_001000a6;
      }
      cVar1 = uprv_isInvariantUString_76_godot(param_1,iVar2);
      if (cVar1 == '\0') {
        *param_3 = 0x10;
        uVar3 = 0;
        goto LAB_0010007d;
      }
      u_UCharsToChars_76_godot(param_1,auStack_438,iVar2 + 1);
      param_1 = auStack_438;
    }
    uVar3 = ures_open_76_godot(param_1,param_2,param_3);
  }
LAB_0010007d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


