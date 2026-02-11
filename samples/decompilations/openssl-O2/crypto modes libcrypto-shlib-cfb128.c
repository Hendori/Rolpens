
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cfbr_encrypt_block_part_0
               (byte *param_1,byte *param_2,uint param_3,undefined8 param_4,
               undefined1 (*param_5) [16],int param_6,code *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char local_58;
  undefined1 auStack_57 [2];
  undefined2 uStack_55;
  undefined2 uStack_53;
  undefined2 uStack_51;
  undefined1 auStack_4f [2];
  undefined2 uStack_4d;
  undefined2 uStack_4b;
  undefined2 uStack_49;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (char)*(undefined8 *)*param_5;
  _auStack_57 = (undefined7)((ulong)*(undefined8 *)*param_5 >> 8);
  uStack_51._1_1_ = (undefined1)*(undefined8 *)(*param_5 + 8);
  _auStack_4f = (undefined7)((ulong)*(undefined8 *)(*param_5 + 8) >> 8);
  (*param_7)(param_5,param_5,param_4);
  uStack_49._1_1_ = *param_1;
  if (param_6 == 0) {
    *param_2 = (*param_5)[0] ^ uStack_49._1_1_;
  }
  else {
    uStack_49._1_1_ = uStack_49._1_1_ ^ (*param_5)[0];
    *param_2 = uStack_49._1_1_;
  }
  if ((param_3 & 7) == 0) {
    *(ulong *)*param_5 = CONCAT17(uStack_51._1_1_,_auStack_57);
    *(ulong *)(*param_5 + 8) = CONCAT17(uStack_49._1_1_,_auStack_4f);
  }
  else {
    lVar1 = (long)((int)param_3 >> 3);
    auVar2._0_2_ = *(ushort *)(auStack_57 + lVar1) >> 7;
    auVar2._2_2_ = *(ushort *)((long)&uStack_55 + lVar1) >> 7;
    auVar2._4_2_ = *(ushort *)((long)&uStack_53 + lVar1) >> 7;
    auVar2._6_2_ = *(ushort *)(auStack_4f + lVar1 + -2) >> 7;
    auVar2._8_2_ = *(ushort *)(auStack_4f + lVar1) >> 7;
    auVar2._10_2_ = *(ushort *)((long)&uStack_4d + lVar1) >> 7;
    auVar2._12_2_ = *(ushort *)((long)&uStack_4b + lVar1) >> 7;
    auVar2._14_2_ = *(ushort *)((long)&uStack_49 + lVar1) >> 7;
    auVar3[1] = auStack_57[lVar1] * '\x02';
    auVar3[0] = auStack_57[lVar1 + -1] * '\x02';
    auVar3[2] = auStack_57[lVar1 + 1] * '\x02';
    auVar3[3] = *(char *)((long)&uStack_55 + lVar1) * '\x02';
    auVar3[4] = *(char *)((long)&uStack_55 + lVar1 + 1) * '\x02';
    auVar3[5] = *(char *)((long)&uStack_53 + lVar1) * '\x02';
    auVar3[6] = *(char *)((long)&uStack_53 + lVar1 + 1) * '\x02';
    auVar3[7] = auStack_4f[lVar1 + -2] * '\x02';
    auVar3[8] = auStack_4f[lVar1 + -1] * '\x02';
    auVar3[9] = auStack_4f[lVar1] * '\x02';
    auVar3[10] = auStack_4f[lVar1 + 1] * '\x02';
    auVar3[0xb] = *(char *)((long)&uStack_4d + lVar1) * '\x02';
    auVar3[0xc] = *(char *)((long)&uStack_4d + lVar1 + 1) * '\x02';
    auVar3[0xd] = *(char *)((long)&uStack_4b + lVar1) * '\x02';
    auVar3[0xe] = *(char *)((long)&uStack_4b + lVar1 + 1) * '\x02';
    auVar3[0xf] = *(char *)((long)&uStack_49 + lVar1) * '\x02';
    *param_5 = auVar2 & __LC0 | auVar3;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void CRYPTO_cfb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,int param_7,code *param_8)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *local_50;
  
  uVar7 = *param_6;
  uVar9 = 0xffffffff;
  if (-1 < (int)uVar7) {
    uVar5 = (ulong)uVar7;
    bVar3 = uVar7 != 0 && param_3 != 0;
    if (param_7 == 0) {
      pbVar8 = param_2;
      if (bVar3) {
        do {
          bVar4 = *param_1;
          param_1 = param_1 + 1;
          pbVar6 = (byte *)(uVar5 + param_5);
          param_2 = pbVar8 + 1;
          param_3 = param_3 - 1;
          uVar7 = (int)uVar5 + 1U & 0xf;
          *pbVar8 = *pbVar6 ^ bVar4;
          uVar5 = (ulong)uVar7;
          *pbVar6 = bVar4;
          if (uVar7 == 0) break;
          pbVar8 = param_2;
        } while (param_3 != 0);
      }
      local_50 = param_1;
      if (0xf < param_3) {
        lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_50 = param_1 + lVar1;
        pbVar8 = param_2;
        do {
          (*param_8)(param_5,param_5,param_4);
          uVar7 = (uint)uVar5;
          while (uVar7 < 0x10) {
            uVar2 = *(ulong *)(param_1 + uVar5);
            *(ulong *)(pbVar8 + uVar5) = *(ulong *)(param_5 + uVar5) ^ uVar2;
            *(ulong *)(param_5 + uVar5) = uVar2;
            uVar5 = uVar5 + 8;
            uVar7 = (uint)uVar5;
          }
          pbVar8 = pbVar8 + 0x10;
          param_1 = param_1 + 0x10;
          uVar5 = 0;
        } while (local_50 != param_1);
        param_3 = (ulong)((uint)param_3 & 0xf);
        param_2 = param_2 + lVar1;
      }
      uVar9 = (uint)uVar5;
      if (param_3 != 0) {
        (*param_8)(param_5,param_5,param_4);
        do {
          uVar7 = (int)uVar5 + 1;
          bVar4 = local_50[uVar5];
          param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
          *(byte *)(param_5 + uVar5) = bVar4;
          uVar5 = (ulong)uVar7;
        } while (uVar9 + (int)param_3 != uVar7);
        uVar9 = uVar9 + (int)param_3;
      }
    }
    else {
      pbVar8 = param_1;
      pbVar6 = param_2;
      if (bVar3) {
        do {
          param_1 = pbVar8 + 1;
          param_2 = pbVar6 + 1;
          param_3 = param_3 - 1;
          bVar4 = *(byte *)(uVar5 + param_5) ^ *pbVar8;
          uVar7 = (int)uVar5 + 1U & 0xf;
          *(byte *)(uVar5 + param_5) = bVar4;
          uVar5 = (ulong)uVar7;
          *pbVar6 = bVar4;
          if (uVar7 == 0) break;
          pbVar8 = param_1;
          pbVar6 = param_2;
        } while (param_3 != 0);
      }
      local_50 = param_1;
      if (0xf < param_3) {
        lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_50 = param_1 + lVar1;
        pbVar8 = param_2;
        do {
          (*param_8)(param_5,param_5,param_4);
          uVar7 = (uint)uVar5;
          while (uVar7 < 0x10) {
            uVar2 = *(ulong *)(param_5 + uVar5) ^ *(ulong *)(param_1 + uVar5);
            *(ulong *)(param_5 + uVar5) = uVar2;
            *(ulong *)(pbVar8 + uVar5) = uVar2;
            uVar5 = uVar5 + 8;
            uVar7 = (uint)uVar5;
          }
          pbVar8 = pbVar8 + 0x10;
          param_1 = param_1 + 0x10;
          uVar5 = 0;
        } while (local_50 != param_1);
        param_3 = (ulong)((uint)param_3 & 0xf);
        param_2 = param_2 + lVar1;
      }
      uVar9 = (uint)uVar5;
      if (param_3 != 0) {
        (*param_8)(param_5,param_5,param_4);
        do {
          uVar7 = (int)uVar5 + 1;
          bVar4 = local_50[uVar5] ^ *(byte *)(param_5 + uVar5);
          *(byte *)(param_5 + uVar5) = bVar4;
          param_2[uVar5] = bVar4;
          uVar5 = (ulong)uVar7;
        } while (uVar9 + (int)param_3 != uVar7);
        uVar9 = uVar9 + (int)param_3;
      }
    }
  }
  *param_6 = uVar9;
  return;
}



void CRYPTO_cfb128_1_encrypt
               (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar2 = (byte)uVar4;
      bVar3 = ~bVar2 & 7;
      local_42 = (undefined1)(((int)(uint)*(byte *)(param_1 + (uVar4 >> 3)) >> bVar3) << 7);
      cfbr_encrypt_block_part_0(&local_42,&local_41,1,param_4,param_5,param_7,param_8);
      pbVar1 = (byte *)(param_2 + (uVar4 >> 3));
      uVar4 = uVar4 + 1;
      *pbVar1 = ~(byte)(1 << bVar3) & *pbVar1 | (byte)((int)(local_41 & 0x80) >> (bVar2 & 7));
    } while (param_3 != uVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void CRYPTO_cfb128_8_encrypt
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    do {
      lVar2 = lVar1 + 1;
      cfbr_encrypt_block_part_0(lVar1,param_2,8,param_4,param_5,param_7,param_8);
      lVar1 = lVar2;
      param_2 = param_2 + 1;
    } while (lVar2 != param_1 + param_3);
  }
  return;
}


