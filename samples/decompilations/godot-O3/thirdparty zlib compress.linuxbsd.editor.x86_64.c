
int compress2(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a0;
  int local_98;
  ulong local_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  long local_40;
  
  uVar4 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  iVar1 = deflateInit_(&local_b8,param_5,"1.3.1",0x70);
  if (iVar1 == 0) {
    local_98 = 0;
    local_b0 = 0;
    local_b8 = param_3;
    local_a0 = param_1;
    do {
      if (local_98 == 0) {
        uVar3 = 0xffffffff;
        if (uVar4 < 0x100000000) {
          uVar3 = uVar4;
        }
        local_98 = (int)uVar3;
        uVar4 = uVar4 - uVar3;
      }
      if (local_b0 == 0) {
        uVar3 = 0xffffffff;
        if (param_4 < 0x100000000) {
          uVar3 = param_4;
        }
        local_b0 = (int)uVar3;
        param_4 = param_4 - uVar3;
      }
      iVar2 = deflate(&local_b8,(ulong)(param_4 == 0) << 2);
    } while (iVar2 == 0);
    *param_2 = local_90;
    deflateEnd(&local_b8);
    if (iVar2 != 1) {
      iVar1 = iVar2;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void compress(void)

{
  compress2();
  return;
}



long compressBound(ulong param_1)

{
  return param_1 + 0xd + (param_1 >> 0xc) + (param_1 >> 0xe) + (param_1 >> 0x19);
}


