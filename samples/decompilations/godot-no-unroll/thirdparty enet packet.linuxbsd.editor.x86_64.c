
undefined8 * enet_packet_create(void *param_1,size_t param_2,uint param_3)

{
  undefined8 *puVar1;
  void *__dest;
  
  puVar1 = (undefined8 *)enet_malloc(0x30);
  if (puVar1 == (undefined8 *)0x0) {
LAB_001000b0:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((param_3 & 4) == 0) {
      if (param_2 == 0) {
        puVar1[2] = 0;
      }
      else {
        __dest = (void *)enet_malloc(param_2);
        puVar1[2] = __dest;
        if (__dest == (void *)0x0) {
          enet_free(puVar1);
          goto LAB_001000b0;
        }
        if (param_1 != (void *)0x0) {
          memcpy(__dest,param_1,param_2);
        }
      }
    }
    else {
      puVar1[2] = param_1;
    }
    *puVar1 = 0;
    *(uint *)(puVar1 + 1) = param_3;
    puVar1[3] = param_2;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return puVar1;
}



void enet_packet_destroy(long param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))();
    }
    if (((*(byte *)(param_1 + 8) & 4) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
      enet_free();
    }
    enet_free(param_1);
    return;
  }
  return;
}



undefined8 enet_packet_resize(long param_1,ulong param_2)

{
  void *__dest;
  
  if ((*(ulong *)(param_1 + 0x18) < param_2) && ((*(byte *)(param_1 + 8) & 4) == 0)) {
    __dest = (void *)enet_malloc(param_2);
    if (__dest == (void *)0x0) {
      return 0xffffffff;
    }
    memcpy(__dest,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x18));
    enet_free(*(undefined8 *)(param_1 + 0x10));
    *(void **)(param_1 + 0x10) = __dest;
  }
  *(ulong *)(param_1 + 0x18) = param_2;
  return 0;
}



uint enet_crc32(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar5;
  bool bVar6;
  byte *pbVar4;
  
  lVar5 = param_2 + -1;
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    do {
      pbVar1 = (byte *)*param_1;
      pbVar4 = pbVar1;
      if (pbVar1 < pbVar1 + param_1[1]) {
        do {
          pbVar3 = pbVar4 + 1;
          uVar2 = uVar2 >> 8 ^ *(uint *)(crcTable + (ulong)(byte)((byte)uVar2 ^ *pbVar4) * 4);
          pbVar4 = pbVar3;
        } while (pbVar1 + param_1[1] != pbVar3);
      }
      param_1 = param_1 + 2;
      bVar6 = lVar5 != 0;
      lVar5 = lVar5 + -1;
    } while (bVar6);
    uVar2 = ~uVar2;
    return uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  return 0;
}


