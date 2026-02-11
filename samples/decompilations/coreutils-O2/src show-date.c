
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool show_date(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_88;
  ulong local_80;
  undefined1 local_78 [64];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_3;
  lVar1 = localtime_rz(param_4,&local_88,local_78);
  if (lVar1 == 0) {
    uVar2 = imaxtostr(local_88,local_38);
    uVar2 = quote(uVar2);
    uVar3 = dcgettext(0,"time %s is out of range",5);
    error(0,0,uVar3,uVar2);
  }
  else {
    fprintftime(_stdout,param_1,local_78,param_4,local_80 & 0xffffffff);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


