
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



ulong xdectoumax(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  byte bVar4;
  ulong unaff_R15;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoumax(param_1,0,10,&local_48,param_4);
  if (uVar1 == 4) goto LAB_00100218;
  unaff_R15 = local_48;
  if (param_2 <= local_48) goto LAB_001001d0;
  do {
    bVar4 = -(uVar1 < 2) & 0x4b;
    while( true ) {
      if (param_6 == 0) {
        param_6 = 1;
      }
      uVar2 = quote(param_1);
      uVar1 = error(param_6,bVar4,"%s: %s",param_5,uVar2);
LAB_001001d0:
      if (param_3 < unaff_R15) break;
      bVar4 = 0x4b;
      if (uVar1 != 1) {
        if (uVar1 == 0) {
          piVar3 = __errno_location();
          *piVar3 = 0;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return unaff_R15;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
LAB_00100218:
        bVar4 = 0;
      }
    }
  } while( true );
}


