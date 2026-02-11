
bool ssl3_cbc_copy_mac(ulong *param_1,ulong param_2,long param_3,long *param_4,undefined4 *param_5,
                      long param_6,ulong param_7,long param_8,undefined8 param_9)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  byte local_108 [64];
  undefined1 local_c8 [136];
  long local_40;
  
  uVar8 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = 0x40;
  if (param_2 < 0x41) {
    uVar14 = param_2;
  }
  if (uVar14 < param_7) goto LAB_001002a0;
  if (param_7 == 0) {
    bVar15 = param_8 != 0;
    goto LAB_00100276;
  }
  uVar14 = uVar8 - param_7;
  *param_1 = uVar14;
  if (param_6 == 1) {
    if (param_4 != (long *)0x0) {
      *param_4 = param_3 + uVar14;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
      bVar15 = true;
      goto LAB_00100276;
    }
LAB_0010025c:
    bVar15 = true;
  }
  else {
    iVar3 = RAND_bytes_ex(param_9,local_108,param_7);
    if (((0 < iVar3) && (param_4 != (long *)0x0)) && (param_5 != (undefined4 *)0x0)) {
      pvVar4 = CRYPTO_malloc((int)param_7,"ssl/record/methods/tls_pad.c",0xf5);
      *param_4 = (long)pvVar4;
      if (pvVar4 != (void *)0x0) {
        *param_5 = 1;
        uVar11 = (param_2 - 0x100) - param_7;
        if (param_2 <= param_7 + 0x100) {
          uVar11 = 0;
        }
        pvVar5 = memset(local_c8 + (-(int)local_c8 & 0x3f),0,param_7);
        if (uVar11 < param_2) {
          uVar11 = uVar11 - uVar8;
          uVar6 = 0;
          uVar10 = 0;
          uVar7 = 0;
          do {
            uVar2 = uVar8 + uVar11;
            uVar13 = uVar8 ^ uVar11;
            uVar12 = (long)(~(uVar14 ^ uVar2) & (uVar14 ^ uVar2) - 1) >> 0x3f;
            uVar6 = uVar6 | uVar12 & uVar10;
            pbVar1 = (byte *)(param_3 + uVar8 + uVar11);
            uVar11 = uVar11 + 1;
            uVar7 = (uVar7 | uVar12) & (long)((uVar8 ^ uVar2 | uVar13) ^ uVar2) >> 0x3f;
            uVar2 = uVar10 + 1;
            *(byte *)((long)pvVar5 + uVar10) =
                 *(byte *)((long)pvVar5 + uVar10) | *pbVar1 & (byte)uVar7;
            uVar10 = (long)((uVar2 - param_7 ^ param_7 | param_7 ^ uVar2) ^ uVar2) >> 0x3f & uVar2;
          } while (uVar11 != param_2 - uVar8);
        }
        else {
          uVar6 = 0;
        }
        uVar8 = 0;
        do {
          uVar14 = uVar6 + 1;
          bVar9 = -((uVar6 & 0x20) == 0);
          uVar11 = uVar8 + 1;
          *(byte *)((long)pvVar4 + uVar8) =
               (*(byte *)((long)pvVar5 + (uVar6 | 0x20)) & ~bVar9 |
               *(byte *)((long)pvVar5 + (uVar6 & 0xffffffffffffffdf)) & bVar9) & (byte)param_8 |
               local_108[uVar8] & ~(byte)param_8;
          uVar6 = (long)((uVar14 - param_7 ^ param_7 | param_7 ^ uVar14) ^ uVar14) >> 0x3f & uVar14;
          uVar8 = uVar11;
        } while (param_7 != uVar11);
        goto LAB_0010025c;
      }
    }
LAB_001002a0:
    bVar15 = false;
  }
LAB_00100276:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar15;
}



undefined4
ssl3_cbc_remove_padding_and_mac
          (ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  if (uVar1 < param_7 + 1U) {
    return 0;
  }
  uVar4 = (ulong)*(byte *)(param_3 + -1 + uVar1);
  uVar3 = param_7 + 1U + uVar4;
  uVar4 = uVar4 + 1;
  uVar3 = ~((long)((uVar3 ^ uVar1 | uVar1 - uVar3 ^ uVar3) ^ uVar1 |
                  (param_6 - uVar4 ^ uVar4 | uVar4 ^ param_6) ^ param_6) >> 0x3f);
  *param_1 = uVar1 - (uVar4 & uVar3);
  uVar2 = ssl3_cbc_copy_mac(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,param_8);
  return uVar2;
}



undefined8
tls1_cbc_remove_padding_and_mac
          (ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          long param_6,long param_7,int param_8)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar3 = *param_1;
  uVar5 = (ulong)(param_6 != 1) + param_7;
  if (uVar3 < uVar5) {
    return 0;
  }
  if (param_6 != 1) {
    bVar2 = *(byte *)(param_3 + -1 + uVar3);
    uVar8 = (ulong)bVar2;
    if (param_8 != 0) {
      *param_1 = ((uVar3 - 1) - param_7) - uVar8;
      return 1;
    }
    uVar5 = uVar5 + uVar8;
    uVar6 = (long)((uVar3 - uVar5 ^ uVar5 | uVar5 ^ uVar3) ^ uVar3) >> 0x3f;
    uVar5 = 0x100;
    if (uVar3 < 0x101) {
      uVar5 = uVar3;
    }
    uVar9 = ~uVar6;
    if (uVar3 != 0) {
      uVar7 = 0;
      uVar6 = uVar8;
      do {
        pbVar1 = (byte *)((uVar3 - uVar8) + param_3 + -1 + uVar6);
        uVar10 = uVar8 ^ uVar7;
        uVar11 = uVar7 ^ uVar6;
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 - 1;
        uVar9 = uVar9 & (~(ulong)(*pbVar1 ^ bVar2) | (long)((uVar10 | uVar11) ^ uVar8) >> 0x3f);
      } while (uVar7 < uVar5);
      uVar6 = ~uVar9;
    }
    *param_1 = uVar3 - (uVar8 + 1 &
                       (long)((uVar9 | 0xffffffffffffff00) & (uVar6 & 0xff) - 1) >> 0x3f);
  }
  uVar4 = ssl3_cbc_copy_mac(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}


