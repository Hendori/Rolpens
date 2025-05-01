
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_rio_poll_builder_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00100328;
  uVar1 = __LC0;
  *param_1 = 0;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar2;
  return 1;
}



void ossl_rio_poll_builder_cleanup(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free((void *)*param_1);
    return;
  }
  return;
}



undefined8 ossl_rio_poll_builder_add_fd(long *param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)*param_1;
  plVar7 = param_1 + 1;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5;
  }
  if (param_2 < 0) {
    return 0;
  }
  uVar1 = param_1[0x22];
  uVar6 = 0;
  if (param_1[0x21] != 0) {
    do {
      if (((int)plVar7[uVar6] == -1) || ((int)plVar7[uVar6] == param_2)) break;
      uVar6 = uVar6 + 1;
    } while (param_1[0x21] != uVar6);
    if ((uVar1 <= uVar6) && (uVar2 = uVar1 * 2, uVar1 < uVar2)) {
      if (uVar2 >> 0x3d != 0) {
        return 0;
      }
      plVar5 = (long *)CRYPTO_realloc(plVar5,(int)(uVar1 << 4),"ssl/rio/poll_builder.c",0x38);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      if (*param_1 == 0) {
        lVar3 = param_1[2];
        *plVar5 = param_1[1];
        plVar5[1] = lVar3;
        lVar3 = param_1[4];
        plVar5[2] = param_1[3];
        plVar5[3] = lVar3;
        lVar3 = param_1[6];
        plVar5[4] = param_1[5];
        plVar5[5] = lVar3;
        lVar3 = param_1[8];
        plVar5[6] = param_1[7];
        plVar5[7] = lVar3;
        lVar3 = param_1[10];
        plVar5[8] = param_1[9];
        plVar5[9] = lVar3;
        lVar3 = param_1[0xc];
        plVar5[10] = param_1[0xb];
        plVar5[0xb] = lVar3;
        lVar3 = param_1[0xe];
        plVar5[0xc] = param_1[0xd];
        plVar5[0xd] = lVar3;
        lVar3 = param_1[0x10];
        plVar5[0xe] = param_1[0xf];
        plVar5[0xf] = lVar3;
        lVar3 = param_1[0x12];
        plVar5[0x10] = param_1[0x11];
        plVar5[0x11] = lVar3;
        lVar3 = param_1[0x14];
        plVar5[0x12] = param_1[0x13];
        plVar5[0x13] = lVar3;
        lVar3 = param_1[0x16];
        plVar5[0x14] = param_1[0x15];
        plVar5[0x15] = lVar3;
        lVar3 = param_1[0x18];
        plVar5[0x16] = param_1[0x17];
        plVar5[0x17] = lVar3;
        lVar3 = param_1[0x1a];
        plVar5[0x18] = param_1[0x19];
        plVar5[0x19] = lVar3;
        lVar3 = param_1[0x1c];
        plVar5[0x1a] = param_1[0x1b];
        plVar5[0x1b] = lVar3;
        lVar3 = param_1[0x1e];
        plVar5[0x1c] = param_1[0x1d];
        plVar5[0x1d] = lVar3;
        lVar3 = param_1[0x20];
        plVar5[0x1e] = param_1[0x1f];
        plVar5[0x1f] = lVar3;
      }
      *param_1 = (long)plVar5;
      param_1[0x22] = uVar2;
    }
    plVar7 = plVar7 + uVar6;
  }
  *(int *)plVar7 = param_2;
  uVar4 = (ushort)(param_3 != 0);
  if (param_4 != 0) {
    uVar4 = param_3 != 0 | 4;
  }
  *(ushort *)((long)plVar7 + 4) = uVar4;
  if (param_1[0x21] == uVar6) {
    param_1[0x21] = uVar6 + 1;
  }
  return 1;
}



uint ossl_rio_poll_builder_poll(long *param_1,ulong param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  int __timeout;
  pollfd *ppVar4;
  
  if (param_2 == 0xffffffffffffffff) {
    do {
      ppVar4 = (pollfd *)*param_1;
      if ((pollfd *)*param_1 == (pollfd *)0x0) {
        ppVar4 = (pollfd *)(param_1 + 1);
      }
      uVar1 = poll(ppVar4,param_1[0x21],-1);
      if (uVar1 != 0xffffffff) {
LAB_001002a2:
        return ~uVar1 >> 0x1f;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
  }
  else {
    do {
      uVar3 = ossl_time_now();
      __timeout = 0;
      if (uVar3 <= param_2) {
        __timeout = (int)((param_2 - uVar3) / 1000000);
      }
      ppVar4 = (pollfd *)*param_1;
      if ((pollfd *)*param_1 == (pollfd *)0x0) {
        ppVar4 = (pollfd *)(param_1 + 1);
      }
      uVar1 = poll(ppVar4,param_1[0x21],__timeout);
      if (uVar1 != 0xffffffff) goto LAB_001002a2;
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
  }
  return 0;
}


