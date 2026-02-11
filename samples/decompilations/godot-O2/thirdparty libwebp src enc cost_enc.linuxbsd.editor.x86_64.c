
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8CalculateLevelCosts(long param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  short *psVar6;
  long lVar7;
  uint uVar8;
  short *psVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  short sVar14;
  long lVar15;
  short sVar16;
  ushort *puVar17;
  long lVar18;
  long lVar19;
  int local_74;
  
  if (*(int *)(param_1 + 0x4da8) == 0) {
    return;
  }
  lVar15 = 0;
  lVar18 = param_1 + __LC0;
  lVar19 = param_1 + _UNK_001011b8;
  lVar7 = 0;
  lVar10 = param_1;
  do {
    lVar4 = 0;
    lVar12 = 0;
    do {
      psVar6 = (short *)(param_1 + 0x14a4 + lVar15 * 0xcc0 + lVar12);
      sVar16 = 0;
      local_74 = 0;
      pbVar13 = (byte *)(param_1 + 6 + lVar15 * 0x108 + lVar4);
      while( true ) {
        bVar1 = pbVar13[-1];
        *psVar6 = sVar16 + *(short *)(&VP8EntropyCost + (ulong)bVar1 * 2);
        puVar17 = &DAT_001010a2;
        sVar2 = *(short *)(&VP8EntropyCost + (long)(int)(0xff - (uint)bVar1) * 2);
        psVar9 = psVar6;
        do {
          psVar9 = psVar9 + 1;
          uVar8 = (uint)puVar17[-1];
          uVar5 = (uint)*puVar17;
          if (puVar17[-1] == 0) {
            sVar14 = 0;
          }
          else {
            sVar14 = 0;
            pbVar11 = pbVar13;
            do {
              if ((uVar8 & 1) != 0) {
                if ((uVar5 & 1) == 0) {
                  sVar3 = *(short *)(&VP8EntropyCost + (ulong)*pbVar11 * 2);
                }
                else {
                  sVar3 = *(short *)(&VP8EntropyCost + (long)(int)(0xff - (uint)*pbVar11) * 2);
                }
                sVar14 = sVar14 + sVar3;
              }
              uVar5 = (int)uVar5 >> 1;
              pbVar11 = pbVar11 + 1;
              uVar8 = (int)uVar8 >> 1;
            } while (uVar8 != 0);
          }
          puVar17 = puVar17 + 2;
          *psVar9 = sVar14 + sVar16 + sVar2;
        } while (puVar17 != (ushort *)0x1011ae);
        local_74 = local_74 + 1;
        psVar6 = psVar6 + 0x44;
        if (local_74 == 3) break;
        sVar16 = *(short *)(&VP8EntropyCost + (long)(int)(0xff - (uint)pbVar13[9]) * 2);
        pbVar13 = pbVar13 + 0xb;
      }
      lVar12 = lVar12 + 0x198;
      lVar4 = lVar4 + 0x21;
    } while (lVar12 != 0xcc0);
    pbVar13 = &VP8EncBands;
    lVar4 = lVar10;
    do {
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      lVar12 = (ulong)bVar1 * 0x198 + lVar7;
      *(long *)(lVar4 + 0x47b8) = param_1 + 0x15b4 + lVar12;
      *(long *)(lVar4 + 0x47a8) = lVar12 + lVar18;
      *(long *)(lVar4 + 0x47b0) = lVar12 + lVar19;
      lVar4 = lVar4 + 0x18;
    } while (pbVar13 != &VP8GetResidualCost);
    lVar15 = lVar15 + 1;
    lVar10 = lVar10 + 0x180;
    lVar7 = lVar7 + 0xcc0;
  } while (lVar15 != 4);
  *(undefined4 *)(param_1 + 0x4da8) = 0;
  return;
}



void VP8InitResidual(undefined4 param_1,int param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  
  param_4[4] = param_2;
  lVar1 = (long)param_2;
  *param_4 = param_1;
  *(long *)(param_4 + 6) = param_3 + 0xe24 + lVar1 * 0x108;
  *(long *)(param_4 + 8) = param_3 + 0x1244 + lVar1 * 0x420;
  *(long *)(param_4 + 10) = param_3 + 0x55c8 + lVar1 * 0x180;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8GetCostLuma4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [4];
  undefined4 local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_20;
  
  local_30 = *(long *)(param_1 + 0x28);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = 0;
  local_40 = local_30 + 0x113c;
  local_48 = 3;
  local_38 = local_30 + 0x1ea4;
  local_30 = local_30 + 0x5a48;
  iVar1 = *(int *)(param_1 + 0xa8 + (long)((int)*(uint *)(param_1 + 0x80) >> 2) * 4);
  iVar2 = *(int *)(param_1 + 0x84 + (ulong)(*(uint *)(param_1 + 0x80) & 3) * 4);
  (*_VP8SetResidualCoeffs)(param_2,local_58);
  (*_VP8GetResidualCost)(iVar1 + iVar2,local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int VP8GetCostLuma16(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_88;
  undefined4 local_78;
  uint local_74;
  undefined4 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  
  lVar7 = *(long *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VP8IteratorNzToBytes();
  local_60 = lVar7 + 0xf2c;
  local_68 = 1;
  local_58 = lVar7 + 0x1664;
  local_50 = lVar7 + 0x5748;
  local_78 = 0;
  (*_VP8SetResidualCoeffs)(param_2 + 0x28,&local_78);
  iVar2 = (*_VP8GetResidualCost)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xa4),&local_78);
  local_68 = 0;
  local_60 = lVar7 + 0xe24;
  local_78 = 1;
  local_58 = lVar7 + 0x1244;
  local_50 = lVar7 + 0x55c8;
  local_88 = param_2 + 0x48;
  lVar7 = 0;
  do {
    uVar4 = *(uint *)(param_1 + 0xa8 + lVar7);
    puVar5 = (uint *)(param_1 + 0x84);
    lVar8 = local_88;
    do {
      uVar1 = *puVar5;
      puVar6 = puVar5 + 1;
      (*_VP8SetResidualCoeffs)(lVar8,&local_78);
      lVar8 = lVar8 + 0x20;
      iVar3 = (*_VP8GetResidualCost)(uVar4 + uVar1,&local_78);
      iVar2 = iVar2 + iVar3;
      uVar4 = ~local_74 >> 0x1f;
      *(uint *)(param_1 + 0xa8 + lVar7) = uVar4;
      *puVar5 = uVar4;
      puVar5 = puVar6;
    } while (puVar6 != (uint *)(param_1 + 0x94));
    lVar7 = lVar7 + 4;
    local_88 = local_88 + 0x80;
  } while (lVar7 != 0x10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int VP8GetCostUV(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  int local_9c;
  long local_98;
  long local_90;
  long local_80;
  undefined4 local_78;
  uint local_74;
  undefined4 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  
  lVar5 = param_1 + 8;
  lVar2 = *(long *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VP8IteratorNzToBytes();
  local_60 = lVar2 + 0x1034;
  local_68 = 2;
  local_58 = lVar2 + 0x1a84;
  local_50 = lVar2 + 0x58c8;
  local_80 = param_2 + 0x248;
  iVar6 = 0;
  local_78 = 0;
  local_90 = 0;
  do {
    lVar2 = lVar5 + -8;
    local_9c = 0;
    local_98 = local_80;
    lVar3 = lVar2;
    lVar9 = local_80;
    lVar7 = lVar2;
    do {
      do {
        lVar8 = lVar3;
        iVar4 = *(int *)(lVar7 + 0xb8);
        iVar1 = *(int *)(lVar8 + 0x94);
        (*_VP8SetResidualCoeffs)(lVar9,&local_78);
        iVar4 = (*_VP8GetResidualCost)(iVar4 + iVar1,&local_78);
        iVar6 = iVar6 + iVar4;
        *(uint *)(lVar7 + 0xb8) = ~local_74 >> 0x1f;
        *(uint *)(lVar8 + 0x94) = ~local_74 >> 0x1f;
        lVar3 = lVar8 + 4;
        lVar9 = lVar9 + 0x20;
      } while (lVar8 + 4 != lVar5);
      local_9c = local_9c + 2;
      lVar7 = lVar7 + 4;
      lVar9 = local_98 + 0x40;
      lVar3 = lVar2;
      local_98 = lVar9;
    } while (local_9c != 4);
    local_90 = local_90 + 4;
    lVar5 = lVar8 + 0xc;
    local_80 = local_80 + 0x80;
  } while (local_90 != 8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



undefined8 VP8RecordCoeffs(int param_1,int *param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  iVar6 = *param_2;
  uVar11 = (ulong)iVar6;
  lVar4 = *(long *)(param_2 + 8);
  puVar10 = (uint *)((long)param_1 * 0x2c + uVar11 * 0x84 + lVar4);
  if (-1 < param_2[1]) {
    if (iVar6 <= param_2[1]) {
      lVar5 = *(long *)(param_2 + 2);
      uVar12 = uVar11;
      do {
        uVar8 = *puVar10;
        if (0xfffdffff < uVar8) {
          uVar8 = uVar8 + 1 >> 1 & 0x7fff7fff;
        }
        *puVar10 = uVar8 + 0x10001;
        uVar3 = *(ushort *)(lVar5 + uVar12 * 2);
        if (uVar3 == 0) {
          uVar12 = (long)((int)uVar11 + 2);
          do {
            uVar11 = uVar12;
            uVar8 = puVar10[1];
            if (0xfffdffff < uVar8) {
              uVar8 = uVar8 + 1 >> 1 & 0x7fff7fff;
            }
            puVar10[1] = uVar8 + 0x10000;
            uVar3 = *(ushort *)(lVar5 + -2 + uVar11 * 2);
            puVar10 = (uint *)(lVar4 + (ulong)(byte)(&DAT_00102007)[uVar11] * 0x84);
            uVar12 = uVar11 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar11 = (ulong)((int)uVar11 + 1);
        }
        iVar6 = (int)uVar11;
        uVar8 = puVar10[1];
        if (0xfffdffff < uVar8) {
          uVar8 = uVar8 + 1 >> 1 & 0x7fff7fff;
        }
        puVar10[1] = uVar8 + 0x10001;
        uVar8 = puVar10[2];
        if (0xfffdffff < uVar8) {
          uVar8 = uVar8 + 1 >> 1 & 0x7fff7fff;
        }
        uVar12 = (ulong)iVar6;
        bVar2 = (&VP8EncBands)[uVar12];
        puVar10[2] = uVar8 + 0x10000 + (uint)(2 < (int)(short)uVar3 + 1U);
        lVar1 = lVar4 + (ulong)bVar2 * 0x84;
        if ((int)(short)uVar3 + 1U < 3) {
          puVar10 = (uint *)(lVar1 + 0x2c);
        }
        else {
          uVar7 = -uVar3;
          if (0 < (short)uVar3) {
            uVar7 = uVar3;
          }
          if (0x43 < uVar7) {
            uVar7 = 0x43;
          }
          uVar3 = (&DAT_001010a2)[(long)(int)(uVar7 - 1) * 2];
          lVar9 = 0;
          uVar8 = (uint)(ushort)(&VP8LevelCodes)[(long)(int)(uVar7 - 1) * 2];
          while (uVar8 = (int)uVar8 >> 1, uVar8 != 0) {
            if ((uVar8 & 1) != 0) {
              uVar13 = puVar10[lVar9 + 3];
              if (0xfffdffff < uVar13) {
                uVar13 = uVar13 + 1 >> 1 & 0x7fff7fff;
              }
              puVar10[lVar9 + 3] =
                   uVar13 + 0x10000 + (uint)((2 << ((byte)lVar9 & 0x1f) & (uint)uVar3) != 0);
            }
            lVar9 = lVar9 + 1;
          }
          puVar10 = (uint *)(lVar1 + 0x58);
        }
      } while (iVar6 <= param_2[1]);
    }
    if (iVar6 < 0x10) {
      uVar8 = *puVar10;
      if (0xfffdffff < uVar8) {
        uVar8 = uVar8 + 1 >> 1 & 0x7fff7fff;
      }
      *puVar10 = uVar8 + 0x10000;
    }
    return 1;
  }
  uVar8 = *puVar10;
  if (0xfffdffff < uVar8) {
    uVar8 = uVar8 + 1 >> 1 & 0x7fff7fff;
  }
  *puVar10 = uVar8 + 0x10000;
  return 0;
}


