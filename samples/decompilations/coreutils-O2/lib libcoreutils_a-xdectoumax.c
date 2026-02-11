
ulong xnumtoumax(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                undefined8 param_5,undefined8 param_6,int param_7,uint param_8)

{
  ulong uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong extraout_RDX;
  int iVar6;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = xstrtoumax(param_1,0,param_2,&local_48);
  if (uVar2 != 4) {
    if (local_48 < param_3) {
      uVar5 = param_8 & 4;
      local_48 = param_3;
    }
    else {
      if (local_48 <= param_4) goto LAB_00100110;
      uVar5 = param_8 & 8;
      local_48 = param_4;
    }
    iVar6 = (-(uint)(uVar5 == 0) & 0x29) + 0x22;
    if (uVar2 < 2) goto LAB_0010006e;
  }
  iVar6 = 0;
  do {
    if (param_7 == 0) {
      param_7 = 1;
    }
    uVar4 = quote(param_1);
    uVar2 = error(param_7,iVar6,"%s: %s",param_6,uVar4);
    local_48 = extraout_RDX;
LAB_00100110:
    iVar6 = 0x4b;
    if (uVar2 == 1) {
LAB_0010006e:
      uVar2 = param_8 & 2;
      uVar1 = local_48;
    }
    else {
      iVar6 = 0;
      uVar1 = local_48;
    }
  } while (uVar2 == 0);
  piVar3 = __errno_location();
  *piVar3 = iVar6;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void xdectoumax(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  xnumtoumax(param_1,10,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


