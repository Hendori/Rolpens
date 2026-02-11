
int uncompress2(undefined1 *param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 *local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined1 *local_a0;
  uint local_98;
  ulong local_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_41;
  long local_40;
  
  uVar4 = *param_2;
  uVar5 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar4 == 0) {
    local_c0 = &local_41;
    uVar4 = 1;
  }
  else {
    *param_2 = 0;
    local_c0 = param_1;
  }
  local_b0 = 0;
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  local_b8 = param_3;
  iVar1 = inflateInit_(&local_b8,"1.3.1",0x70);
  if (iVar1 != 0) goto LAB_00100148;
  local_98 = 0;
  local_a0 = local_c0;
  do {
    if (local_98 == 0) {
      uVar3 = 0xffffffff;
      if (uVar4 < 0x100000000) {
        uVar3 = uVar4;
      }
      local_98 = (uint)uVar3;
      uVar4 = uVar4 - uVar3;
    }
    if (local_b0 == 0) {
      uVar3 = 0xffffffff;
      if (uVar5 < 0x100000000) {
        uVar3 = uVar5;
      }
      local_b0 = (uint)uVar3;
      uVar5 = uVar5 - uVar3;
    }
    iVar2 = inflate(&local_b8,0);
  } while (iVar2 == 0);
  *param_4 = (*param_4 - (ulong)local_b0) - uVar5;
  if (local_c0 == &local_41) {
    if (local_90 == 0) goto LAB_00100117;
    if (iVar2 == -5) {
      inflateEnd(&local_b8);
    }
    else {
      inflateEnd(&local_b8);
      if ((iVar2 == 1) || (iVar1 = iVar2, iVar2 != 2)) goto LAB_00100148;
    }
  }
  else {
    *param_2 = local_90;
LAB_00100117:
    inflateEnd(&local_b8);
    if (iVar2 == 1) goto LAB_00100148;
    if (iVar2 != 2) {
      iVar1 = iVar2;
      if (iVar2 != -5) goto LAB_00100148;
      if (local_98 + uVar4 == 0) {
        iVar1 = -5;
        goto LAB_00100148;
      }
    }
  }
  iVar1 = -3;
LAB_00100148:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void uncompress(void)

{
  uncompress2();
  return;
}


