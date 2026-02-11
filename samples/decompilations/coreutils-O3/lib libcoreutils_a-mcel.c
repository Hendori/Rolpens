
ulong mcel_ch(uint param_1,byte param_2)

{
  return (ulong)param_1 | (ulong)param_2 << 0x28;
}



ulong mcel_err(byte param_1)

{
  return (ulong)param_1 << 0x20 | 0x10000000000;
}



int mcel_cmp(undefined8 param_1,undefined8 param_2)

{
  return (((uint)((ulong)param_1 >> 0x20) & 0xff) - ((uint)((ulong)param_2 >> 0x20) & 0xff)) *
         0x4000 + ((int)param_1 - (int)param_2);
}



int mcel_tocmp(code *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_2 >> 0x20) & 0xff) - ((uint)(param_3 >> 0x20) & 0xff);
  iVar1 = iVar2 * 0x4000 + ((int)param_2 - (int)param_3);
  if (iVar1 == 0 || iVar2 != 0) {
    return iVar1;
  }
  iVar1 = (*param_1)(param_2 & 0xffffffff);
  iVar2 = (*param_1)(param_3 & 0xffffffff);
  return iVar1 - iVar2;
}



undefined4 mcel_isbasic(uint param_1)

{
  return CONCAT31((int3)(~param_1 >> 8),(byte)~param_1 >> 7);
}



/* WARNING: Type propagation algorithm not settling */

ulong mcel_scan(byte *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_1c [3];
  long local_10;
  
  bVar1 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)bVar1 < '\0') {
    local_1c[1] = 0;
    uVar2 = mbrtoc32(local_1c,param_1,param_2 - (long)param_1,local_1c + 1);
    if ((long)uVar2 < 0) {
      uVar2 = (ulong)bVar1 << 0x20 | 0x10000000000;
    }
    else {
      uVar2 = (ulong)local_1c[0] | (uVar2 & 0xff) << 0x28;
    }
  }
  else {
    uVar2 = (ulong)(uint)(int)(char)bVar1 | 0x10000000000;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

ulong mcel_scant(byte *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_1c [3];
  long local_10;
  
  bVar2 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)bVar2 < '\0') {
    local_1c[1] = 0;
    pbVar1 = param_1 + (ulong)(param_1[1] != param_2) + 1;
    uVar3 = mbrtoc32(local_1c,param_1,
                     pbVar1 + (*pbVar1 != param_2) +
                     ((ulong)(pbVar1[*pbVar1 != param_2] != param_2) - (long)param_1),local_1c + 1);
    if ((long)uVar3 < 0) {
      uVar5 = (ulong)bVar2;
      uVar3 = 1;
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)local_1c[0];
      uVar3 = uVar3 & 0xff;
      uVar5 = 0;
    }
    uVar3 = uVar4 | uVar5 << 0x20 | uVar3 << 0x28;
  }
  else {
    uVar3 = (ulong)(uint)(int)(char)bVar2 | 0x10000000000;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

ulong mcel_scanz(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  uint local_1c [3];
  long local_10;
  
  bVar1 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)bVar1 < '\0') {
    pbVar5 = param_1 + (2 - (ulong)(param_1[1] == 0));
    local_1c[1] = 0;
    uVar4 = mbrtoc32(local_1c,param_1,
                     pbVar5 + (*pbVar5 != 0) + ((ulong)(pbVar5[*pbVar5 != 0] != 0) - (long)param_1),
                     local_1c + 1);
    if ((long)uVar4 < 0) {
      uVar3 = (ulong)bVar1;
      uVar4 = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)local_1c[0];
      uVar3 = 0;
    }
  }
  else {
    uVar2 = (ulong)(uint)(int)(char)bVar1;
    uVar4 = 1;
    uVar3 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2 | uVar3 << 0x20 | (uVar4 & 0xff) << 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


