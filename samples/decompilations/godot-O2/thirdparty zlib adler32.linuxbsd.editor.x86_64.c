
ulong adler32_z(ulong param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong local_50;
  byte *local_48;
  
  uVar22 = param_1 & 0xffff;
  local_50 = param_1 >> 0x10 & 0xffff;
  if (param_3 == 1) {
    uVar22 = *param_2 + uVar22;
    if (0xfff0 < uVar22) {
      uVar22 = uVar22 - 0xfff1;
    }
    local_50 = local_50 + uVar22;
    if (0xfff0 < local_50) {
      local_50 = local_50 - 0xfff1;
    }
    return local_50 << 0x10 | uVar22;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      pbVar14 = param_2 + param_3;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar22 = uVar22 + bVar1;
        local_50 = local_50 + uVar22;
      } while (pbVar14 != param_2);
    }
    if (0xfff0 < uVar22) {
      uVar22 = uVar22 - 0xfff1;
    }
    return (local_50 % 0xfff1) * 0x10000 | uVar22;
  }
  pbVar14 = param_2 + 0x15b0;
  if (param_3 < 0x15b0) {
LAB_001002cb:
    uVar5 = param_3 - 0x10 >> 4;
    pbVar15 = param_2 + (uVar5 + 1) * 0x10;
    do {
      lVar8 = *param_2 + uVar22;
      lVar21 = (ulong)param_2[1] + lVar8;
      lVar20 = (ulong)param_2[2] + lVar21;
      lVar19 = (ulong)param_2[3] + lVar20;
      lVar10 = (ulong)param_2[4] + lVar19;
      lVar7 = (ulong)param_2[5] + lVar10;
      lVar18 = (ulong)param_2[6] + lVar7;
      lVar17 = (ulong)param_2[7] + lVar18;
      lVar16 = (ulong)param_2[8] + lVar17;
      lVar13 = (ulong)param_2[9] + lVar16;
      lVar9 = (ulong)param_2[10] + lVar13;
      lVar4 = (ulong)param_2[0xb] + lVar9;
      lVar12 = (ulong)param_2[0xc] + lVar4;
      lVar11 = (ulong)param_2[0xd] + lVar12;
      lVar6 = (ulong)param_2[0xe] + lVar11;
      uVar22 = (ulong)param_2[0xf] + lVar6;
      local_50 = local_50 +
                 lVar8 + lVar21 + lVar20 + lVar19 + lVar10 + lVar7 + lVar18 + lVar17 + lVar16 +
                 lVar13 + lVar9 + lVar4 + lVar12 + lVar11 + lVar6 + uVar22;
      param_2 = param_2 + 0x10;
    } while (param_2 != pbVar15);
    lVar8 = (param_3 - 0x11) + uVar5 * -0x10;
    if ((param_3 & 0xf) != 0) goto LAB_001003e4;
  }
  else {
    do {
      local_48 = pbVar14;
      uVar5 = param_3;
      param_3 = uVar5 - 0x15b0;
      pbVar15 = local_48 + -0x15b0;
      do {
        pbVar14 = pbVar15;
        pbVar15 = pbVar14 + 0x10;
        lVar4 = *pbVar14 + uVar22;
        lVar21 = (ulong)pbVar14[1] + lVar4;
        lVar20 = (ulong)pbVar14[2] + lVar21;
        lVar19 = (ulong)pbVar14[3] + lVar20;
        lVar11 = (ulong)pbVar14[4] + lVar19;
        lVar10 = (ulong)pbVar14[5] + lVar11;
        lVar18 = (ulong)pbVar14[6] + lVar10;
        lVar8 = (ulong)pbVar14[7] + lVar18;
        lVar9 = (ulong)pbVar14[8] + lVar8;
        lVar17 = (ulong)pbVar14[9] + lVar9;
        lVar16 = (ulong)pbVar14[10] + lVar17;
        lVar13 = (ulong)pbVar14[0xb] + lVar16;
        lVar12 = (ulong)pbVar14[0xc] + lVar13;
        lVar6 = (ulong)pbVar14[0xd] + lVar12;
        lVar7 = (ulong)pbVar14[0xe] + lVar6;
        uVar22 = (ulong)pbVar14[0xf] + lVar7;
        local_50 = local_50 +
                   lVar4 + lVar21 + lVar20 + lVar19 + lVar11 + lVar10 + lVar18 + lVar8 + lVar9 +
                   lVar17 + lVar16 + lVar13 + lVar12 + lVar6 + lVar7 + uVar22;
      } while (pbVar15 != local_48);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar22;
      lVar8 = SUB168(ZEXT816(0xf00e10d2fc5cd) * auVar2,8);
      uVar22 = uVar22 + (lVar8 + (uVar22 - lVar8 >> 1) >> 0xf) * -0xfff1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50;
      lVar8 = SUB168(ZEXT816(0xf00e10d2fc5cd) * auVar3,8);
      local_50 = local_50 + (lVar8 + (local_50 - lVar8 >> 1) >> 0xf) * -0xfff1;
      pbVar14 = pbVar14 + 0x15c0;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_001001e0;
    lVar8 = uVar5 - 0x15b1;
    param_2 = local_48;
    if (0xf < param_3) goto LAB_001002cb;
LAB_001003e4:
    pbVar14 = pbVar15 + lVar8 + 1;
    do {
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar22 = uVar22 + bVar1;
      local_50 = local_50 + uVar22;
    } while (pbVar15 != pbVar14);
  }
  uVar22 = uVar22 % 0xfff1;
  local_50 = local_50 % 0xfff1;
LAB_001001e0:
  return local_50 << 0x10 | uVar22;
}



void adler32(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  adler32_z(param_1,param_2,param_3);
  return;
}



ulong adler32_combine(ulong param_1,ulong param_2,long param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = 0xffffffff;
  if (-1 < param_3) {
    param_3 = param_3 + ((SUB168(SEXT816(-0x7ff87f8f79681d19) * SEXT816(param_3),8) + param_3 >> 0xf
                         ) - (param_3 >> 0x3f)) * -0xfff1;
    uVar2 = (param_1 & 0xffff) * param_3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar4 = SUB168(ZEXT816(0xf00e10d2fc5cd) * auVar1,8);
    lVar4 = ((param_2 >> 0x10 & 0xffff) - param_3) + (param_1 >> 0x10 & 0xffff) +
            uVar2 + (lVar4 + (uVar2 - lVar4 >> 1) >> 0xf) * -0xfff1;
    uVar3 = lVar4 + 0xfff1;
    lVar5 = (param_2 & 0xffff) + (param_1 & 0xffff);
    uVar2 = 0xfff0;
    if (lVar5 != 0) {
      uVar2 = lVar5 - 1U;
      if (0xfff0 < lVar5 - 1U) {
        uVar2 = lVar5 - 0xfff2;
      }
    }
    if (0x1ffe1 < uVar3) {
      uVar3 = lVar4 - 0xfff1;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar2 = uVar3 << 0x10 | uVar2;
  }
  return uVar2;
}



ulong adler32_combine64(ulong param_1,ulong param_2,long param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = 0xffffffff;
  if (-1 < param_3) {
    param_3 = param_3 + ((SUB168(SEXT816(-0x7ff87f8f79681d19) * SEXT816(param_3),8) + param_3 >> 0xf
                         ) - (param_3 >> 0x3f)) * -0xfff1;
    uVar2 = (param_1 & 0xffff) * param_3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar4 = SUB168(ZEXT816(0xf00e10d2fc5cd) * auVar1,8);
    lVar4 = ((param_2 >> 0x10 & 0xffff) - param_3) + (param_1 >> 0x10 & 0xffff) +
            uVar2 + (lVar4 + (uVar2 - lVar4 >> 1) >> 0xf) * -0xfff1;
    uVar3 = lVar4 + 0xfff1;
    lVar5 = (param_2 & 0xffff) + (param_1 & 0xffff);
    uVar2 = 0xfff0;
    if (lVar5 != 0) {
      uVar2 = lVar5 - 1U;
      if (0xfff0 < lVar5 - 1U) {
        uVar2 = lVar5 - 0xfff2;
      }
    }
    if (0x1ffe1 < uVar3) {
      uVar3 = lVar4 - 0xfff1;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar2 = uVar3 << 0x10 | uVar2;
  }
  return uVar2;
}


