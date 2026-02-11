
void CRYPTO_cbc128_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (param_3 == 0) {
    return;
  }
  puVar4 = param_5;
  if (0xf < param_3) {
    lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
    puVar2 = (ulong *)((long)param_1 + lVar1);
    puVar4 = param_2;
    puVar6 = param_5;
    do {
      puVar5 = puVar4;
      puVar7 = param_1 + 2;
      *puVar5 = *param_1 ^ *puVar6;
      puVar5[1] = param_1[1] ^ puVar6[1];
      (*param_6)(puVar5,puVar5,param_4);
      puVar4 = puVar5 + 2;
      puVar6 = puVar5;
      param_1 = puVar7;
    } while (puVar7 != puVar2);
    puVar6 = (ulong *)((long)param_2 + (param_3 - 0x10 & 0xfffffffffffffff0));
    uVar3 = param_3 & 0xf;
    param_3 = (ulong)((uint)param_3 & 0xf);
    puVar4 = puVar6;
    param_2 = (ulong *)(lVar1 + (long)param_2);
    param_1 = puVar2;
    if (uVar3 == 0) goto LAB_001000ef;
  }
  puVar6 = param_2;
  uVar3 = 0;
  do {
    *(byte *)((long)puVar6 + uVar3) =
         *(byte *)((long)param_1 + uVar3) ^ *(byte *)((long)puVar4 + uVar3);
    uVar3 = uVar3 + 1;
  } while (uVar3 < param_3);
  do {
    *(undefined1 *)((long)puVar6 + param_3) = *(undefined1 *)((long)puVar4 + param_3);
    param_3 = param_3 + 1;
  } while (param_3 != 0x10);
  (*param_6)(puVar6,puVar6,param_4);
LAB_001000ef:
  if (puVar6 != param_5) {
    uVar3 = puVar6[1];
    *param_5 = *puVar6;
    param_5[1] = uVar3;
  }
  return;
}



void CRYPTO_cbc128_decrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  long lVar1;
  ulong *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  ulong local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (ulong *)0x0;
  if (param_3 == 0) goto LAB_0010026f;
  if (param_1 == param_2) {
    puVar7 = param_2;
    if (0xf < param_3) {
      lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
      puVar7 = (ulong *)((long)param_1 + lVar1);
      puVar6 = param_1;
      do {
        (*param_6)(param_1,local_58);
        uVar4 = *param_1;
        *puVar6 = local_58[0] ^ *param_5;
        puVar8 = param_1 + 2;
        puVar5 = puVar6 + 2;
        *param_5 = uVar4;
        uVar4 = param_1[1];
        puVar6[1] = local_58[1] ^ param_5[1];
        param_5[1] = uVar4;
        param_1 = puVar8;
        puVar6 = puVar5;
      } while (puVar7 != puVar8);
      goto LAB_00100225;
    }
  }
  else {
    puVar7 = param_1;
    if (0xf < param_3) {
      lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
      puVar7 = (ulong *)((long)param_1 + lVar1);
      puVar5 = param_2;
      puVar6 = param_5;
      puVar8 = param_1;
      do {
        (*param_6)(puVar8,puVar5);
        *puVar5 = *puVar5 ^ *puVar6;
        puVar5[1] = puVar5[1] ^ puVar6[1];
        puVar2 = puVar8 + 2;
        puVar5 = puVar5 + 2;
        puVar6 = puVar8;
        puVar8 = puVar2;
      } while (puVar7 != puVar2);
      param_1 = (ulong *)((long)param_1 + (param_3 - 0x10 & 0xfffffffffffffff0));
      if (param_1 != param_5) {
        uVar4 = param_1[1];
        *param_5 = *param_1;
        param_5[1] = uVar4;
      }
LAB_00100225:
      param_3 = (ulong)((uint)param_3 & 0xf);
      param_2 = (ulong *)((long)param_2 + lVar1);
      if (param_3 == 0) goto LAB_0010026f;
    }
  }
  (*param_6)(puVar7,local_58,param_4,puVar5);
  uVar4 = 0;
  do {
    uVar3 = *(undefined1 *)((long)puVar7 + uVar4);
    *(byte *)((long)param_2 + uVar4) =
         *(byte *)((long)local_58 + uVar4) ^ *(byte *)((long)param_5 + uVar4);
    *(undefined1 *)((long)param_5 + uVar4) = uVar3;
    uVar4 = uVar4 + 1;
  } while (uVar4 < param_3);
  do {
    *(undefined1 *)((long)param_5 + uVar4) = *(undefined1 *)((long)puVar7 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x10);
LAB_0010026f:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


