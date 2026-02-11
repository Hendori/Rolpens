
void KeccakF1600(long param_1)

{
  long lVar1;
  undefined1 local_94 [100];
  
  lVar1 = param_1 + 100;
  *(ulong *)(param_1 + 8) = ~*(ulong *)(param_1 + 8);
  *(ulong *)(param_1 + 0x10) = ~*(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x40) = ~*(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x60) = ~*(ulong *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x88) = ~*(ulong *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0xa0) = ~*(ulong *)(param_1 + 0xa0);
  __KeccakF1600(lVar1,local_94);
  *(ulong *)(lVar1 + -0x5c) = ~*(ulong *)(lVar1 + -0x5c);
  *(ulong *)(lVar1 + -0x54) = ~*(ulong *)(lVar1 + -0x54);
  *(ulong *)(lVar1 + -0x24) = ~*(ulong *)(lVar1 + -0x24);
  *(ulong *)(lVar1 + -4) = ~*(ulong *)(lVar1 + -4);
  *(ulong *)(lVar1 + 0x24) = ~*(ulong *)(lVar1 + 0x24);
  *(ulong *)(lVar1 + 0x3c) = ~*(ulong *)(lVar1 + 0x3c);
  return;
}



ulong SHA3_absorb(long param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 local_b4 [116];
  ulong local_40;
  
  lVar3 = param_1 + 100;
  puVar2 = local_b4;
  *(ulong *)(param_1 + 8) = ~*(ulong *)(param_1 + 8);
  *(ulong *)(param_1 + 0x10) = ~*(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x40) = ~*(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x60) = ~*(ulong *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x88) = ~*(ulong *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0xa0) = ~*(ulong *)(param_1 + 0xa0);
  local_40 = param_4;
  while (param_4 <= param_3) {
    param_4 = param_4 >> 3;
    puVar4 = (ulong *)(lVar3 + -100);
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 8;
      *puVar4 = uVar1 ^ *puVar4;
      param_4 = param_4 - 1;
      puVar4 = puVar4 + 1;
    } while (param_4 != 0);
    *(ulong **)(puVar2 + 100) = param_2;
    *(ulong *)(puVar2 + 0x6c) = param_3;
    __KeccakF1600();
    param_2 = *(ulong **)(puVar2 + 100);
    param_3 = *(ulong *)(puVar2 + 0x6c);
    param_4 = *(ulong *)(puVar2 + 0x74);
  }
  *(ulong *)(lVar3 + -0x5c) = ~*(ulong *)(lVar3 + -0x5c);
  *(ulong *)(lVar3 + -0x54) = ~*(ulong *)(lVar3 + -0x54);
  *(ulong *)(lVar3 + -0x24) = ~*(ulong *)(lVar3 + -0x24);
  *(ulong *)(lVar3 + -4) = ~*(ulong *)(lVar3 + -4);
  *(ulong *)(lVar3 + 0x24) = ~*(ulong *)(lVar3 + 0x24);
  *(ulong *)(lVar3 + 0x3c) = ~*(ulong *)(lVar3 + 0x3c);
  return param_3;
}



void SHA3_squeeze(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar1 = param_4 >> 3;
  puVar2 = param_1;
  if ((param_5 & 1) != 0) goto LAB_00100482;
  while( true ) {
    if (param_3 < 8) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar2;
        puVar2 = (undefined8 *)((long)puVar2 + (ulong)bVar3 * -2 + 1);
        param_2 = (undefined8 *)((long)param_2 + (ulong)bVar3 * -2 + 1);
      }
      return;
    }
    *param_2 = *puVar2;
    param_2 = param_2 + 1;
    param_3 = param_3 - 8;
    if (param_3 == 0) break;
    uVar1 = uVar1 - 1;
    puVar2 = puVar2 + 1;
    if (uVar1 == 0) {
LAB_00100482:
      KeccakF1600();
      uVar1 = param_4 >> 3;
      puVar2 = param_1;
    }
  }
  return;
}


