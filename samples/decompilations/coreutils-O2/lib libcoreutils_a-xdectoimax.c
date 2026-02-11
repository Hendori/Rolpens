
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



void xdectoimax(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  xnumtoimax(param_1,10,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


