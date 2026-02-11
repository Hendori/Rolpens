
ulong oc_pack_refill(undefined8 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = 0x40 - *(int *)(param_1 + 3);
  uVar5 = param_1[2];
  for (pbVar2 = (byte *)param_1[1]; (7 < uVar3 && (pbVar2 < (byte *)*param_1)); pbVar2 = pbVar2 + 1)
  {
    uVar3 = uVar3 - 8;
    uVar5 = uVar5 | (ulong)*pbVar2 << ((byte)uVar3 & 0x3f);
  }
  param_1[1] = pbVar2;
  iVar4 = 0x40 - uVar3;
  if (iVar4 < param_2) {
    if (pbVar2 < (byte *)*param_1) {
      bVar1 = *pbVar2;
      *(int *)(param_1 + 3) = iVar4;
      return uVar5 | (long)((int)(uint)bVar1 >> (-(char)uVar3 & 7U));
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 1;
    iVar4 = 0x40000000;
  }
  *(int *)(param_1 + 3) = iVar4;
  return uVar5;
}



void oc_pack_readinit(long *param_1,long param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = param_2 + param_3;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  return;
}



ulong oc_pack_look1(long param_1)

{
  ulong uVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    return *(ulong *)(param_1 + 0x10) >> 0x3f;
  }
  uVar1 = oc_pack_refill(param_1,1);
  *(ulong *)(param_1 + 0x10) = uVar1;
  return uVar1 >> 0x3f;
}



void oc_pack_adv1(long param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) << 1;
  return;
}



ulong oc_pack_read_c(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (iVar2 < param_2) {
      uVar1 = oc_pack_refill(param_1);
      iVar2 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar2 - param_2;
    uVar3 = uVar1 >> (0x40U - (char)param_2 & 0x3f);
    *(ulong *)(param_1 + 0x10) = uVar1 * 2 << ((char)param_2 - 1U & 0x3f);
  }
  return uVar3;
}



ulong oc_pack_read1_c(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (iVar2 < 1) {
    uVar1 = oc_pack_refill(param_1,1);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x10) = uVar1 * 2;
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  return uVar1 >> 0x3f;
}



long oc_pack_bytes_left(long *param_1)

{
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    return (*param_1 - param_1[1]) + (long)((int)param_1[3] >> 3);
  }
  return -1;
}


