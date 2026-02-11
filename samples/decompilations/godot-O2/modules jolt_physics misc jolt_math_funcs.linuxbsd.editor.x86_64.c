
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltMath::decompose(Basis&, Vector3&) */

void JoltMath::decompose(Basis *param_1,Vector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0xc);
  auVar5._0_4_ = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
  fVar11 = (*(float *)(param_1 + 4) * fVar1 + *(float *)(param_1 + 0x10) * fVar3 +
           *(float *)(param_1 + 0x1c) * fVar2) / auVar5._0_4_;
  fVar10 = *(float *)(param_1 + 4) - fVar11 * fVar1;
  fVar9 = *(float *)(param_1 + 0x10) - fVar11 * fVar3;
  fVar8 = *(float *)(param_1 + 0x1c) - fVar11 * fVar2;
  fVar11 = (*(float *)(param_1 + 8) * fVar1 + *(float *)(param_1 + 0x14) * fVar3 +
           *(float *)(param_1 + 0x20) * fVar2) / auVar5._0_4_;
  fVar7 = *(float *)(param_1 + 8) - fVar11 * fVar1;
  fVar6 = *(float *)(param_1 + 0x14) - fVar11 * fVar3;
  fVar11 = *(float *)(param_1 + 0x20) - fVar11 * fVar2;
  fVar12 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
  auVar5._4_4_ = fVar12;
  auVar5._8_8_ = 0;
  auVar5 = sqrtps(auVar5,auVar5);
  uVar4 = auVar5._0_8_;
  fVar12 = (fVar7 * fVar10 + fVar6 * fVar9 + fVar11 * fVar8) / fVar12;
  fVar7 = fVar7 - fVar12 * fVar10;
  fVar6 = fVar6 - fVar12 * fVar9;
  fVar11 = fVar11 - fVar12 * fVar8;
  fVar12 = (fVar8 * fVar3 - fVar9 * fVar2) * fVar7 + (fVar10 * fVar2 - fVar8 * fVar1) * fVar6 +
           (fVar9 * fVar1 - fVar10 * fVar3) * fVar11;
  fVar13 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar11 * fVar11);
  if (fVar12 <= 0.0) {
    if (fVar12 < 0.0) {
      fVar13 = (float)((uint)fVar13 ^ __LC2);
      uVar4 = CONCAT44((uint)auVar5._4_4_ ^ _LC1._4_4_,(uint)auVar5._0_4_ ^ (uint)_LC1);
    }
    else {
      fVar13 = fVar13 * 0.0;
      uVar4 = CONCAT44(auVar5._4_4_ * 0.0,auVar5._0_4_ * 0.0);
    }
  }
  fVar12 = (float)uVar4;
  *(undefined8 *)param_2 = uVar4;
  *(float *)(param_2 + 8) = fVar13;
  *(float *)param_1 = fVar1 / fVar12;
  *(float *)(param_1 + 0xc) = fVar3 / fVar12;
  *(float *)(param_1 + 0x18) = fVar2 / fVar12;
  fVar1 = *(float *)(param_2 + 4);
  *(float *)(param_1 + 4) = fVar10 / fVar1;
  *(float *)(param_1 + 0x10) = fVar9 / fVar1;
  *(float *)(param_1 + 0x1c) = fVar8 / fVar1;
  fVar1 = *(float *)(param_2 + 8);
  *(float *)(param_1 + 8) = fVar7 / fVar1;
  *(float *)(param_1 + 0x14) = fVar6 / fVar1;
  *(float *)(param_1 + 0x20) = fVar11 / fVar1;
  return;
}


