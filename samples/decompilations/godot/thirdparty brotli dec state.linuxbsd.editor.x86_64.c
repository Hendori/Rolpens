
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
BrotliDecoderStateInit(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = param_4;
  puVar4 = param_2;
  puVar5 = param_3;
  if (param_2 == (undefined *)0x0) {
    uVar2 = 0;
    puVar4 = &BrotliDefaultAllocFunc;
    puVar5 = &BrotliDefaultFreeFunc;
  }
  param_1[6] = puVar4;
  param_1[7] = puVar5;
  param_1[8] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  BrotliInitBitReader(param_1 + 1);
  *(undefined1 (*) [16])(param_1 + 0x5e) = (undefined1  [16])0x0;
  uVar1 = _UNK_001003b8;
  uVar2 = __LC0;
  param_1[10] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[0x33] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = param_1[0x60] & 0xfffff00000000000 | 0x1000000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 4;
  param_1[0x37] = 0x3f;
  param_1[0x65] = 0;
  *(undefined1 (*) [16])(param_1 + 0x35) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x62) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1d) = (undefined1  [16])0x0;
  *(undefined8 *)((long)param_1 + 0x6c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x74) = uVar1;
  lVar3 = BrotliSharedDictionaryCreateInstance(param_2,param_3,param_4);
  param_1[100] = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  param_1[0x5c] = 0;
  *(undefined1 (*) [16])(param_1 + 0x5a) = (undefined1  [16])0x0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BrotliDecoderStateMetablockBegin(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001003c8;
  uVar1 = __LC3;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x1000000;
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  uVar2 = _UNK_001003d8;
  uVar1 = __LC4;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  uVar2 = _UNK_001003e8;
  uVar1 = __LC5;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 (*) [16])(param_1 + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe8) = (undefined1  [16])0x0;
  return;
}



void BrotliDecoderStateCleanupAfterMetablock(long param_1)

{
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x318));
  *(undefined8 *)(param_1 + 0x318) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x310));
  *(undefined8 *)(param_1 + 0x310) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x198));
  *(undefined8 *)(param_1 + 0x198) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(param_1 + 0xd0) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



void BrotliDecoderStateCleanup(long param_1)

{
  BrotliDecoderStateCleanupAfterMetablock();
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x328));
  *(undefined8 *)(param_1 + 0x328) = 0;
  BrotliSharedDictionaryDestroyInstance(*(undefined8 *)(param_1 + 800));
  *(undefined8 *)(param_1 + 800) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}



bool BrotliDecoderHuffmanTreeGroupInit
               (long param_1,long *param_2,undefined2 param_3,long param_4,long param_5)

{
  long lVar1;
  
  lVar1 = (**(code **)(param_1 + 0x30))
                    (*(undefined8 *)(param_1 + 0x40),param_5 * 8 + (param_4 + 0x178) * param_5 * 4);
  *(undefined2 *)(param_2 + 2) = param_3;
  *param_2 = lVar1;
  *(short *)((long)param_2 + 0x12) = (short)param_4;
  *(short *)((long)param_2 + 0x14) = (short)param_5;
  param_2[1] = param_5 * 8 + lVar1;
  return lVar1 != 0;
}


