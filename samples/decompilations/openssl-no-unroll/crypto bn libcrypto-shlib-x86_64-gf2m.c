
/* WARNING: Removing unreachable block (ram,0x00100321) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bn_GF2m_mul_2x2(undefined1 (*param_1) [16],ulong param_2,ulong param_3,ulong param_4,
                    ulong param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((_OPENSSL_ia32cap_P >> 0x21 & 1) == 0) {
    auVar10 = _mul_1x1();
    uVar7 = auVar10._8_8_;
    auVar11 = _mul_1x1();
    auVar12 = _mul_1x1();
    *(ulong *)*param_1 = auVar11._0_8_;
    *(ulong *)(param_1[1] + 8) = uVar7;
    uVar8 = auVar12._8_8_ ^ auVar11._8_8_ ^ auVar10._0_8_ ^ uVar7;
    *(ulong *)param_1[1] = uVar8;
    *(ulong *)(*param_1 + 8) = auVar12._0_8_ ^ auVar12._8_8_ ^ auVar11._0_8_ ^ uVar7 ^ uVar8;
    return;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_4;
  auVar10 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar11 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar10 = auVar10 ^ auVar12 << uVar1;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_5;
  auVar11 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar11 = auVar11 ^ auVar4 << uVar1;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2 ^ param_3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_4 ^ param_5;
  auVar12 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar12 = auVar12 ^ auVar5 << uVar1;
    }
  }
  auVar9._0_8_ = CONCAT44(auVar12._4_4_ ^ auVar10._4_4_ ^ auVar11._4_4_,
                          auVar12._0_4_ ^ auVar10._0_4_ ^ auVar11._0_4_);
  auVar9._8_4_ = auVar12._8_4_ ^ auVar10._8_4_ ^ auVar11._8_4_;
  auVar9._12_4_ = auVar12._12_4_ ^ auVar10._12_4_ ^ auVar11._12_4_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar9._0_8_;
  *param_1 = auVar11 ^ auVar6 << 0x40;
  param_1[1] = auVar10 ^ auVar9 >> 0x40;
  return;
}


