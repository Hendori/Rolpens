
void i_ring_init(undefined4 *param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[4] = param_2;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  return;
}



undefined1 i_ring_empty(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



undefined4 i_ring_push(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(byte *)(param_1 + 0x1c) ^ 1);
  uVar3 = *(int *)(param_1 + 0x14) + uVar2 & 3;
  uVar1 = *(undefined4 *)(param_1 + (ulong)uVar3 * 4);
  *(undefined4 *)(param_1 + (ulong)uVar3 * 4) = param_2;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (*(uint *)(param_1 + 0x18) == uVar3) {
    *(uint *)(param_1 + 0x18) = uVar2 + *(uint *)(param_1 + 0x18) & 3;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return uVar1;
}



undefined4 i_ring_pop(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + (ulong)uVar1 * 4);
  *(undefined4 *)(param_1 + (ulong)uVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
  if (uVar1 != *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar1 + 3 & 3;
    return uVar2;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return uVar2;
}



void i_ring_pop_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


