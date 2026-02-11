
void u_catopen_76_godot(void)

{
  ures_open_76_godot();
  return;
}



void u_catclose_76_godot(void)

{
  ures_close_76_godot();
  return;
}



undefined8
u_catgets_76_godot(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    iVar2 = T_CString_integerToString_76_godot(auStack_58,param_2,10);
    auStack_58[iVar2] = 0x25;
    T_CString_integerToString_76_godot(auStack_58 + (iVar2 + 1),param_3,10);
    uVar3 = ures_getStringByKey_76_godot(param_1,auStack_58,param_5,param_6);
    if (*param_6 < 1) goto LAB_0010006a;
  }
  uVar3 = param_4;
  if (param_5 != (undefined4 *)0x0) {
    uVar1 = u_strlen_76_godot(param_4);
    *param_5 = uVar1;
  }
LAB_0010006a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


