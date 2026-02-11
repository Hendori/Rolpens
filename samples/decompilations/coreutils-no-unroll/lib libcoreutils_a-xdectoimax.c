
long xnumtoimax(undefined8 param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,int param_7,uint param_8)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  long extraout_RDX;
  int iVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(param_1,0,param_2,&local_48);
  if (uVar1 != 4) {
    if (local_48 < param_3) {
      uVar4 = param_8 & 4;
    }
    else {
      if (local_48 <= param_4) goto LAB_00100120;
      uVar4 = param_8 & 8;
      param_3 = param_4;
    }
    iVar5 = (-(uint)(uVar4 == 0) & 0x29) + 0x22;
    if (uVar1 < 2) goto LAB_0010006e;
  }
  iVar5 = 0;
  do {
    if (param_7 == 0) {
      param_7 = 1;
    }
    uVar3 = quote(param_1);
    uVar1 = error(param_7,iVar5,"%s: %s",param_6,uVar3);
    local_48 = extraout_RDX;
LAB_00100120:
    iVar5 = 0x4b;
    param_3 = local_48;
    if (uVar1 == 1) {
LAB_0010006e:
      uVar1 = param_8 & 1U - ((int)~(uint)((ulong)local_48 >> 0x20) >> 0x1f);
    }
    else {
      iVar5 = 0;
    }
  } while (uVar1 == 0);
  piVar2 = __errno_location();
  *piVar2 = iVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long xdectoimax(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  byte bVar4;
  long unaff_R15;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(param_1,0,10,&local_48,param_4);
  if (uVar1 == 4) goto LAB_00100220;
  unaff_R15 = local_48;
  if (param_2 <= local_48) goto LAB_001001e0;
  do {
    bVar4 = -(uVar1 < 2) & 0x4b;
    while( true ) {
      if (param_6 == 0) {
        param_6 = 1;
      }
      uVar2 = quote(param_1);
      uVar1 = error(param_6,bVar4,"%s: %s",param_5,uVar2);
LAB_001001e0:
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
LAB_00100220:
        bVar4 = 0;
      }
    }
  } while( true );
}


