
/* Vector4::min_axis_index() const */

undefined1 __thiscall Vector4::min_axis_index(Vector4 *this)

{
  undefined1 uVar1;
  float fVar2;
  
  uVar1 = *(float *)(this + 4) <= *(float *)this;
  fVar2 = *(float *)(this + 4);
  if (!(bool)uVar1) {
    fVar2 = *(float *)this;
  }
  if (fVar2 < *(float *)(this + 8)) {
    if (*(float *)(this + 0xc) <= fVar2) {
      uVar1 = 3;
    }
    return uVar1;
  }
  uVar1 = 2;
  if (*(float *)(this + 0xc) <= *(float *)(this + 8)) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Vector4::max_axis_index() const */

undefined1 __thiscall Vector4::max_axis_index(Vector4 *this)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar4 = fVar2;
  if (fVar2 <= fVar1) {
    fVar4 = fVar1;
  }
  uVar3 = fVar1 < fVar2;
  if (fVar4 < *(float *)(this + 8)) {
    uVar3 = 2;
    fVar4 = *(float *)(this + 8);
  }
  if (fVar4 < *(float *)(this + 0xc)) {
    uVar3 = 3;
  }
  return uVar3;
}



/* Vector4::is_equal_approx(Vector4 const&) const */

undefined4 __thiscall Vector4::is_equal_approx(Vector4 *this,Vector4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  if (*(float *)param_1 == fVar1) {
LAB_001000ff:
    fVar1 = *(float *)(this + 4);
    if (*(float *)(param_1 + 4) != fVar1) {
      fVar4 = _LC0;
      if (_LC0 <= ABS(fVar1) * _LC0) {
        fVar4 = ABS(fVar1) * _LC0;
      }
      if (fVar4 <= ABS(fVar1 - *(float *)(param_1 + 4))) goto LAB_001001e0;
    }
    fVar1 = *(float *)(this + 8);
    if (*(float *)(param_1 + 8) != fVar1) {
      fVar4 = _LC0;
      if (_LC0 <= ABS(fVar1) * _LC0) {
        fVar4 = ABS(fVar1) * _LC0;
      }
      if (fVar4 <= ABS(fVar1 - *(float *)(param_1 + 8))) goto LAB_001001e0;
    }
    fVar1 = *(float *)(this + 0xc);
    uVar3 = 1;
    if (*(float *)(param_1 + 0xc) != fVar1) {
      fVar2 = ABS(fVar1 - *(float *)(param_1 + 0xc));
      fVar4 = _LC0;
      if (_LC0 <= ABS(fVar1) * _LC0) {
        fVar4 = ABS(fVar1) * _LC0;
      }
      return CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < fVar4);
    }
  }
  else {
    fVar4 = _LC0;
    if (_LC0 <= ABS(fVar1) * _LC0) {
      fVar4 = ABS(fVar1) * _LC0;
    }
    if (ABS(fVar1 - *(float *)param_1) < fVar4) goto LAB_001000ff;
LAB_001001e0:
    uVar3 = 0;
  }
  return uVar3;
}



/* Vector4::is_zero_approx() const */

undefined4 __thiscall Vector4::is_zero_approx(Vector4 *this)

{
  if (((ABS(*(float *)this) < _LC0) && (ABS(*(float *)(this + 4)) < _LC0)) &&
     (ABS(*(float *)(this + 8)) < _LC0)) {
    return CONCAT31((int3)((uint)ABS(*(float *)(this + 0xc)) >> 8),
                    ABS(*(float *)(this + 0xc)) < _LC0);
  }
  return 0;
}



/* Vector4::is_finite() const */

bool __thiscall Vector4::is_finite(Vector4 *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((float)(*(uint *)this & _LC7) <= _LC2) && ((float)(*(uint *)(this + 4) & _LC7) <= _LC2)) &&
     ((float)(*(uint *)(this + 8) & _LC7) <= _LC2)) {
    bVar1 = (float)(*(uint *)(this + 0xc) & _LC7) <= _LC2;
  }
  return bVar1;
}



/* Vector4::length() const */

float __thiscall Vector4::length(Vector4 *this)

{
  return SQRT(*(float *)(this + 0xc) * *(float *)(this + 0xc) +
              *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
              *(float *)(this + 8) * *(float *)(this + 8));
}



/* Vector4::normalize() */

void __thiscall Vector4::normalize(Vector4 *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
          *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)(this + 0xc) * *(float *)(this + 0xc);
  if (fVar1 != 0.0) {
    fVar1 = SQRT(fVar1);
    auVar2._4_4_ = fVar1;
    auVar2._0_4_ = fVar1;
    auVar2._8_4_ = fVar1;
    auVar2._12_4_ = fVar1;
    auVar2 = divps(*(undefined1 (*) [16])this,auVar2);
    *(undefined1 (*) [16])this = auVar2;
    return;
  }
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* Vector4::normalized() const */

undefined1  [16] __thiscall Vector4::normalized(Vector4 *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = SUB164(*(undefined1 (*) [16])this,0);
  fVar1 = fVar1 * fVar1 + *(float *)(this + 4) * *(float *)(this + 4) +
          *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)(this + 0xc) * *(float *)(this + 0xc);
  if (fVar1 != 0.0) {
    auVar2._0_4_ = SQRT(fVar1);
    auVar2._4_4_ = auVar2._0_4_;
    auVar2._8_4_ = auVar2._0_4_;
    auVar2._12_4_ = auVar2._0_4_;
    auVar2 = divps(*(undefined1 (*) [16])this,auVar2);
    return auVar2;
  }
  return (undefined1  [16])0x0;
}



/* Vector4::is_normalized() const */

undefined4 __thiscall Vector4::is_normalized(Vector4 *this)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
          *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)(this + 0xc) * *(float *)(this + 0xc);
  uVar1 = 1;
  if (fVar2 != _LC4) {
    fVar2 = ABS(fVar2 - _LC4);
    uVar1 = CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < _LC5);
  }
  return uVar1;
}



/* Vector4::distance_to(Vector4 const&) const */

float __thiscall Vector4::distance_to(Vector4 *this,Vector4 *param_1)

{
  return SQRT((*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) *
              (*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) +
              (*(float *)param_1 - *(float *)this) * (*(float *)param_1 - *(float *)this) +
              (*(float *)(param_1 + 4) - *(float *)(this + 4)) *
              (*(float *)(param_1 + 4) - *(float *)(this + 4)) +
              (*(float *)(param_1 + 8) - *(float *)(this + 8)) *
              (*(float *)(param_1 + 8) - *(float *)(this + 8)));
}



/* Vector4::distance_squared_to(Vector4 const&) const */

float __thiscall Vector4::distance_squared_to(Vector4 *this,Vector4 *param_1)

{
  return (*(float *)param_1 - *(float *)this) * (*(float *)param_1 - *(float *)this) +
         (*(float *)(param_1 + 4) - *(float *)(this + 4)) *
         (*(float *)(param_1 + 4) - *(float *)(this + 4)) +
         (*(float *)(param_1 + 8) - *(float *)(this + 8)) *
         (*(float *)(param_1 + 8) - *(float *)(this + 8)) +
         (*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) *
         (*(float *)(param_1 + 0xc) - *(float *)(this + 0xc));
}



/* Vector4::direction_to(Vector4 const&) const */

undefined1  [16] __thiscall Vector4::direction_to(Vector4 *this,Vector4 *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3._0_4_ = *(float *)param_1 - *(float *)this;
  auVar3._4_4_ = *(float *)(param_1 + 4) - *(float *)(this + 4);
  auVar3._8_4_ = *(float *)(param_1 + 8) - *(float *)(this + 8);
  auVar3._12_4_ = *(float *)(param_1 + 0xc) - *(float *)(this + 0xc);
  fVar1 = auVar3._0_4_ * auVar3._0_4_ + auVar3._4_4_ * auVar3._4_4_ + auVar3._8_4_ * auVar3._8_4_ +
          auVar3._12_4_ * auVar3._12_4_;
  if (fVar1 != 0.0) {
    auVar2._0_4_ = SQRT(fVar1);
    auVar2._4_4_ = auVar2._0_4_;
    auVar2._8_4_ = auVar2._0_4_;
    auVar2._12_4_ = auVar2._0_4_;
    auVar3 = divps(auVar3,auVar2);
    return auVar3;
  }
  return (undefined1  [16])0x0;
}



/* Vector4::abs() const */

undefined1  [16] __thiscall Vector4::abs(Vector4 *this)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = *(uint *)(this + 4) & _LC7;
  auVar1._0_4_ = *(uint *)this & _LC7;
  auVar1._8_4_ = *(uint *)(this + 8) & _LC7;
  auVar1._12_4_ = *(uint *)(this + 0xc) & _LC7;
  return auVar1;
}



/* Vector4::sign() const */

undefined1  [16] __thiscall Vector4::sign(Vector4 *this)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = _LC4;
  if (*(float *)(this + 0xc) <= 0.0) {
    uVar5 = _LC8 & -(uint)(*(float *)(this + 0xc) < 0.0);
  }
  uVar2 = _LC4;
  if (*(float *)(this + 8) <= 0.0) {
    uVar2 = _LC8 & -(uint)(*(float *)(this + 8) < 0.0);
  }
  uVar4 = _LC4;
  if (*(float *)(this + 4) <= 0.0) {
    uVar4 = _LC8 & -(uint)(*(float *)(this + 4) < 0.0);
  }
  uVar3 = _LC4;
  if (*(float *)this <= 0.0) {
    uVar3 = _LC8 & -(uint)(*(float *)this < 0.0);
  }
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar3;
  auVar1._8_4_ = uVar2;
  auVar1._12_4_ = uVar5;
  return auVar1;
}



/* Vector4::floor() const */

undefined1  [16] __thiscall Vector4::floor(Vector4 *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0xc);
  if ((float)((uint)fVar5 & _LC7) < _LC9) {
    fVar5 = (float)((uint)((float)(int)fVar5 - (float)(-(uint)(fVar5 < (float)(int)fVar5) & _LC4)) |
                   ~_LC7 & (uint)fVar5);
  }
  fVar2 = *(float *)(this + 8);
  if ((float)((uint)fVar2 & _LC7) < _LC9) {
    fVar2 = (float)((uint)((float)(int)fVar2 - (float)(-(uint)(fVar2 < (float)(int)fVar2) & _LC4)) |
                   ~_LC7 & (uint)fVar2);
  }
  fVar4 = *(float *)(this + 4);
  if ((float)((uint)fVar4 & _LC7) < _LC9) {
    fVar4 = (float)((uint)((float)(int)fVar4 - (float)(-(uint)(fVar4 < (float)(int)fVar4) & _LC4)) |
                   ~_LC7 & (uint)fVar4);
  }
  fVar3 = *(float *)this;
  if ((float)((uint)fVar3 & _LC7) < _LC9) {
    fVar3 = (float)((uint)((float)(int)fVar3 - (float)(-(uint)(fVar3 < (float)(int)fVar3) & _LC4)) |
                   ~_LC7 & (uint)fVar3);
  }
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar5;
  return auVar1;
}



/* Vector4::ceil() const */

undefined1  [16] __thiscall Vector4::ceil(Vector4 *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0xc);
  if ((float)((uint)fVar5 & _LC7) < _LC9) {
    fVar5 = (float)((uint)((float)(int)fVar5 + (float)(-(uint)((float)(int)fVar5 < fVar5) & _LC4)) |
                   ~_LC7 & (uint)fVar5);
  }
  fVar2 = *(float *)(this + 8);
  if ((float)((uint)fVar2 & _LC7) < _LC9) {
    fVar2 = (float)((uint)((float)(int)fVar2 + (float)(-(uint)((float)(int)fVar2 < fVar2) & _LC4)) |
                   ~_LC7 & (uint)fVar2);
  }
  fVar4 = *(float *)(this + 4);
  if ((float)((uint)fVar4 & _LC7) < _LC9) {
    fVar4 = (float)((uint)((float)(int)fVar4 + (float)(-(uint)((float)(int)fVar4 < fVar4) & _LC4)) |
                   ~_LC7 & (uint)fVar4);
  }
  fVar3 = *(float *)this;
  if ((float)((uint)fVar3 & _LC7) < _LC9) {
    fVar3 = (float)((uint)((float)(int)fVar3 + (float)(-(uint)((float)(int)fVar3 < fVar3) & _LC4)) |
                   ~_LC7 & (uint)fVar3);
  }
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar5;
  return auVar1;
}



/* Vector4::round() const */

undefined1  [16] __thiscall Vector4::round(Vector4 *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = roundf(*(float *)(this + 0xc));
  fVar3 = roundf(*(float *)(this + 8));
  fVar4 = roundf(*(float *)(this + 4));
  fVar5 = roundf(*(float *)this);
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = fVar2;
  return auVar1;
}



/* Vector4::lerp(Vector4 const&, float) const */

undefined1  [16] __thiscall Vector4::lerp(Vector4 *this,Vector4 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (*(float *)(param_1 + 4) - *(float *)(this + 4)) * param_2 + *(float *)(this + 4);
  auVar1._0_4_ = (*(float *)param_1 - *(float *)this) * param_2 + *(float *)this;
  auVar1._8_4_ = (*(float *)(param_1 + 8) - *(float *)(this + 8)) * param_2 + *(float *)(this + 8);
  auVar1._12_4_ =
       (*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) * param_2 + *(float *)(this + 0xc);
  return auVar1;
}



/* Vector4::cubic_interpolate(Vector4 const&, Vector4 const&, Vector4 const&, float) const */

undefined1  [16] __thiscall
Vector4::cubic_interpolate
          (Vector4 *this,Vector4 *param_1,Vector4 *param_2,Vector4 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc);
  fVar10 = param_4 * param_4;
  fVar5 = *(float *)param_2;
  fVar6 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_2 + 0xc);
  fVar11 = param_4 * fVar10;
  auVar9._4_4_ = ((*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) * param_4 + fVar2 + fVar2 +
                  ((((fVar6 + fVar6) - _LC11 * fVar2) + _LC13 * *(float *)(param_1 + 4)) -
                  *(float *)(param_3 + 4)) * fVar10 +
                 (((fVar2 * _LC15 - fVar6) - *(float *)(param_1 + 4) * _LC15) +
                 *(float *)(param_3 + 4)) * fVar11) * _LC17;
  auVar9._0_4_ = (fVar1 + fVar1 + (*(float *)param_1 - *(float *)param_2) * param_4 +
                  ((((fVar5 + fVar5) - _LC11 * fVar1) + _LC13 * *(float *)param_1) -
                  *(float *)param_3) * fVar10 +
                 (((fVar1 * _LC15 - fVar5) - *(float *)param_1 * _LC15) + *(float *)param_3) *
                 fVar11) * _LC17;
  auVar9._8_4_ = ((*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * param_4 + fVar3 + fVar3 +
                  ((((fVar7 + fVar7) - _LC11 * fVar3) + _LC13 * *(float *)(param_1 + 8)) -
                  *(float *)(param_3 + 8)) * fVar10 +
                 (((fVar3 * _LC15 - fVar7) - *(float *)(param_1 + 8) * _LC15) +
                 *(float *)(param_3 + 8)) * fVar11) * _LC17;
  auVar9._12_4_ =
       (param_4 * (*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc)) + fVar4 + fVar4 +
        ((((fVar8 + fVar8) - _LC11 * fVar4) + _LC13 * *(float *)(param_1 + 0xc)) -
        *(float *)(param_3 + 0xc)) * fVar10 +
       (((fVar4 * _LC15 - fVar8) - *(float *)(param_1 + 0xc) * _LC15) + *(float *)(param_3 + 0xc)) *
       fVar11) * _LC17;
  return auVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector4::cubic_interpolate_in_time(Vector4 const&, Vector4 const&, Vector4 const&, float, float,
   float, float) const */

undefined1  [16] __thiscall
Vector4::cubic_interpolate_in_time
          (Vector4 *this,Vector4 *param_1,Vector4 *param_2,Vector4 *param_3,float param_4,
          float param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar12 = *(float *)this;
  fVar9 = *(float *)(this + 4);
  fVar7 = *(float *)(this + 8);
  fVar13 = *(float *)(this + 0xc);
  fVar1 = *(float *)param_1;
  fVar17 = 0.0;
  fVar5 = param_4 * param_5 + 0.0;
  if (param_6 != 0.0) {
    fVar17 = (float)((uint)(fVar5 - param_6) ^ __LC18) / param_6;
  }
  fVar16 = (fVar12 - *(float *)param_2) * fVar17 + *(float *)param_2;
  fVar11 = _LC17;
  if (param_5 != 0.0) {
    fVar11 = fVar5 / param_5;
  }
  fVar12 = (fVar1 - fVar12) * fVar11 + fVar12;
  fVar14 = _LC4;
  if (param_7 - param_5 != 0.0) {
    fVar14 = (fVar5 - param_5) / (param_7 - param_5);
  }
  fVar15 = 0.0;
  if (param_5 - param_6 != 0.0) {
    fVar15 = (fVar5 - param_6) / (param_5 - param_6);
  }
  fVar16 = (fVar12 - fVar16) * fVar15 + fVar16;
  fVar8 = _LC4;
  if (param_7 != 0.0) {
    fVar8 = fVar5 / param_7;
  }
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = (fVar9 - *(float *)(param_2 + 4)) * fVar17 + *(float *)(param_2 + 4);
  fVar9 = (fVar5 - fVar9) * fVar11 + fVar9;
  fVar2 = *(float *)(param_1 + 8);
  fVar6 = (fVar9 - fVar6) * fVar15 + fVar6;
  fVar10 = (fVar7 - *(float *)(param_2 + 8)) * fVar17 + *(float *)(param_2 + 8);
  fVar7 = (fVar2 - fVar7) * fVar11 + fVar7;
  fVar10 = (fVar7 - fVar10) * fVar15 + fVar10;
  fVar3 = *(float *)(param_1 + 0xc);
  fVar17 = *(float *)(param_2 + 0xc) + (fVar13 - *(float *)(param_2 + 0xc)) * fVar17;
  fVar13 = (fVar3 - fVar13) * fVar11 + fVar13;
  fVar17 = (fVar13 - fVar17) * fVar15 + fVar17;
  auVar4._12_4_ =
       (((((*(float *)(param_3 + 0xc) - fVar3) * fVar14 + fVar3) - fVar13) * fVar8 + fVar13) -
       fVar17) * fVar11 + fVar17;
  auVar4._8_4_ = ((fVar7 + (((*(float *)(param_3 + 8) - fVar2) * fVar14 + fVar2) - fVar7) * fVar8) -
                 fVar10) * fVar11 + fVar10;
  auVar4._4_4_ = fVar6 + ((fVar9 + (((*(float *)(param_3 + 4) - fVar5) * fVar14 + fVar5) - fVar9) *
                                   fVar8) - fVar6) * fVar11;
  auVar4._0_4_ = ((fVar12 + (((*(float *)param_3 - fVar1) * fVar14 + fVar1) - fVar12) * fVar8) -
                 fVar16) * fVar11 + fVar16;
  return auVar4;
}



/* Vector4::posmod(float) const */

undefined1  [16] __thiscall Vector4::posmod(Vector4 *this,float param_1)

{
  undefined1 auVar1 [16];
  ushort in_FPUStatusWord;
  float fVar2;
  float local_58;
  float local_48;
  float local_44;
  float local_38;
  
  local_38 = *(float *)(this + 0xc);
  do {
    local_38 = local_38 - (local_38 / param_1) * param_1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(local_38)) {
    fmodf(*(float *)(this + 0xc),param_1);
    local_58 = *(float *)(this + 8);
LAB_00100e17:
    local_38 = local_38 + 0.0;
    fVar2 = local_58;
    do {
      fVar2 = fVar2 - (fVar2 / param_1) * param_1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (NAN(fVar2)) goto LAB_0010103a;
    if (0.0 <= fVar2) {
LAB_00100e4f:
      if ((0.0 < fVar2) && (param_1 < 0.0)) {
LAB_00100f5d:
        fVar2 = fVar2 + param_1;
      }
      goto LAB_00100e61;
    }
    if (0.0 < param_1) goto LAB_00100f5d;
LAB_00100fb4:
    local_48 = *(float *)(this + 4);
    fVar2 = fVar2 + 0.0;
    local_44 = local_48;
    do {
      local_44 = local_44 - (local_44 / param_1) * param_1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (!NAN(local_44)) {
      if (local_44 < 0.0) goto LAB_00100ff6;
      goto LAB_00100ea3;
    }
LAB_001010c2:
    fmodf(local_48,param_1);
LAB_00100eb5:
    local_48 = *(float *)this;
    local_44 = local_44 + 0.0;
    local_58 = local_48;
    do {
      local_58 = local_58 - (local_58 / param_1) * param_1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (!NAN(local_58)) {
      if (local_58 < 0.0) {
        if (param_1 <= 0.0) goto LAB_00100efe;
      }
      else {
LAB_00100ef0:
        if ((local_58 <= 0.0) || (0.0 <= param_1)) goto LAB_00100efe;
      }
      local_58 = local_58 + param_1;
      goto LAB_00100efe;
    }
  }
  else {
    local_58 = *(float *)(this + 8);
    if (0.0 <= local_38) {
      if ((0.0 < local_38) && (param_1 < 0.0)) goto LAB_00100f75;
      goto LAB_00100e17;
    }
    fVar2 = local_58;
    if (0.0 < param_1) {
LAB_00100f75:
      local_38 = local_38 + param_1;
      goto LAB_00100e17;
    }
    do {
      fVar2 = fVar2 - (fVar2 / param_1) * param_1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    local_38 = local_38 + 0.0;
    if (!NAN(fVar2)) {
      if (fVar2 < 0.0) goto LAB_00100fb4;
      goto LAB_00100e4f;
    }
LAB_0010103a:
    fmodf(local_58,param_1);
LAB_00100e61:
    local_48 = *(float *)(this + 4);
    fVar2 = fVar2 + 0.0;
    local_44 = local_48;
    do {
      local_44 = local_44 - (local_44 / param_1) * param_1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (NAN(local_44)) goto LAB_001010c2;
    if (0.0 <= local_44) {
LAB_00100ea3:
      if ((0.0 < local_44) && (param_1 < 0.0)) goto LAB_00100f49;
      goto LAB_00100eb5;
    }
    if (0.0 < param_1) {
LAB_00100f49:
      local_44 = local_44 + param_1;
      goto LAB_00100eb5;
    }
LAB_00100ff6:
    local_48 = *(float *)this;
    local_44 = local_44 + 0.0;
    local_58 = local_48;
    do {
      local_58 = local_58 - (local_58 / param_1) * param_1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (!NAN(local_58)) {
      if (local_58 < 0.0) goto LAB_00100efe;
      goto LAB_00100ef0;
    }
  }
  fmodf(local_48,param_1);
LAB_00100efe:
  auVar1._4_4_ = local_44;
  auVar1._0_4_ = local_58 + 0.0;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = local_38;
  return auVar1;
}



/* Vector4::posmodv(Vector4 const&) const */

undefined1  [16] __thiscall Vector4::posmodv(Vector4 *this,Vector4 *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  ushort in_FPUStatusWord;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(this + 0xc);
  do {
    fVar6 = fVar6 - (fVar6 / fVar1) * fVar1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar6)) {
    fmodf(*(float *)(this + 0xc),fVar1);
  }
  else if (fVar6 < 0.0) {
    if (0.0 < fVar1) goto LAB_00101311;
  }
  else if ((0.0 < fVar6) && (fVar1 < 0.0)) {
LAB_00101311:
    fVar6 = fVar6 + fVar1;
  }
  fVar1 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(this + 8);
  do {
    fVar3 = fVar3 - (fVar3 / fVar1) * fVar1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar3)) {
    fmodf(*(float *)(this + 8),fVar1);
  }
  else if (fVar3 < 0.0) {
    if (0.0 < fVar1) goto LAB_00101351;
  }
  else if ((0.0 < fVar3) && (fVar1 < 0.0)) {
LAB_00101351:
    fVar3 = fVar3 + fVar1;
  }
  fVar1 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(this + 4);
  do {
    fVar5 = fVar5 - (fVar5 / fVar1) * fVar1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar5)) {
    fmodf(*(float *)(this + 4),fVar1);
  }
  else if (fVar5 < 0.0) {
    if (0.0 < fVar1) goto LAB_00101339;
  }
  else if ((0.0 < fVar5) && (fVar1 < 0.0)) {
LAB_00101339:
    fVar5 = fVar5 + fVar1;
  }
  fVar1 = *(float *)param_1;
  fVar4 = *(float *)this;
  do {
    fVar4 = fVar4 - (fVar4 / fVar1) * fVar1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar4)) {
    fmodf(*(float *)this,fVar1);
  }
  else {
    if (fVar4 < 0.0) {
      if (fVar1 <= 0.0) goto LAB_001012da;
    }
    else if ((fVar4 <= 0.0) || (0.0 <= fVar1)) goto LAB_001012da;
    fVar4 = fVar4 + fVar1;
  }
LAB_001012da:
  auVar2._4_4_ = fVar5 + 0.0;
  auVar2._0_4_ = fVar4 + 0.0;
  auVar2._8_4_ = fVar3 + 0.0;
  auVar2._12_4_ = fVar6 + 0.0;
  return auVar2;
}



/* Vector4::snap(Vector4 const&) */

void __thiscall Vector4::snap(Vector4 *this,Vector4 *param_1)

{
  double dVar1;
  
  dVar1 = (double)Math::snapped((double)*(float *)this,(double)*(float *)param_1);
  *(float *)this = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 4),(double)*(float *)(param_1 + 4));
  *(float *)(this + 4) = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 8),(double)*(float *)(param_1 + 8));
  *(float *)(this + 8) = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 0xc),(double)*(float *)(param_1 + 0xc));
  *(float *)(this + 0xc) = (float)dVar1;
  return;
}



/* Vector4::snapf(float) */

void __thiscall Vector4::snapf(Vector4 *this,float param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)param_1;
  dVar1 = (double)Math::snapped((double)*(float *)this,dVar2);
  *(float *)this = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 4),dVar2);
  *(float *)(this + 4) = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 8),dVar2);
  *(float *)(this + 8) = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 0xc),dVar2);
  *(float *)(this + 0xc) = (float)dVar1;
  return;
}



/* Vector4::snapped(Vector4 const&) const */

undefined1  [16] __thiscall Vector4::snapped(Vector4 *this,Vector4 *param_1)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_28 = *(undefined8 *)this;
  uStack_20 = *(undefined8 *)(this + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  snap((Vector4 *)&local_28,param_1);
  auVar1._8_8_ = uStack_20;
  auVar1._0_8_ = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector4::snappedf(float) const */

undefined1  [16] __thiscall Vector4::snappedf(Vector4 *this,float param_1)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_28 = *(undefined8 *)this;
  uStack_20 = *(undefined8 *)(this + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  snapf((Vector4 *)&local_28,param_1);
  auVar1._8_8_ = uStack_20;
  auVar1._0_8_ = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector4::inverse() const */

undefined1  [16] __thiscall Vector4::inverse(Vector4 *this)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = _LC4;
  auVar1._0_4_ = _LC4;
  auVar1._8_4_ = _LC4;
  auVar1._12_4_ = _LC4;
  auVar1 = divps(auVar1,*(undefined1 (*) [16])this);
  return auVar1;
}



/* Vector4::clamp(Vector4 const&, Vector4 const&) const */

undefined1  [16] __thiscall Vector4::clamp(Vector4 *this,Vector4 *param_1,Vector4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(this + 0xc);
  fVar6 = *(float *)(param_1 + 0xc);
  if ((*(float *)(param_1 + 0xc) <= fVar1) &&
     (fVar6 = *(float *)(param_2 + 0xc), fVar1 <= *(float *)(param_2 + 0xc))) {
    fVar6 = fVar1;
  }
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(param_1 + 8);
  if ((*(float *)(param_1 + 8) <= fVar1) &&
     (fVar3 = *(float *)(param_2 + 8), fVar1 <= *(float *)(param_2 + 8))) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(this + 4);
  fVar5 = *(float *)(param_1 + 4);
  if ((*(float *)(param_1 + 4) <= fVar1) &&
     (fVar5 = *(float *)(param_2 + 4), fVar1 <= *(float *)(param_2 + 4))) {
    fVar5 = fVar1;
  }
  fVar1 = *(float *)this;
  fVar2 = *(float *)param_1;
  if ((*(float *)param_1 <= fVar1) && (fVar2 = *(float *)param_2, fVar1 <= *(float *)param_2)) {
    fVar2 = fVar1;
  }
  auVar4._4_4_ = fVar5;
  auVar4._0_4_ = fVar2;
  auVar4._8_4_ = fVar3;
  auVar4._12_4_ = fVar6;
  return auVar4;
}



/* Vector4::clampf(float, float) const */

undefined1  [16] __thiscall Vector4::clampf(Vector4 *this,float param_1,float param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(this + 0xc);
  fVar5 = param_1;
  if ((param_1 <= fVar1) && (fVar5 = param_2, fVar1 <= param_2)) {
    fVar5 = fVar1;
  }
  fVar1 = *(float *)(this + 8);
  fVar3 = param_1;
  if ((param_1 <= fVar1) && (fVar3 = param_2, fVar1 <= param_2)) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(this + 4);
  fVar4 = param_1;
  if ((param_1 <= fVar1) && (fVar4 = param_2, fVar1 <= param_2)) {
    fVar4 = fVar1;
  }
  fVar1 = *(float *)this;
  if ((param_1 <= fVar1) && (param_1 = param_2, fVar1 <= param_2)) {
    param_1 = fVar1;
  }
  auVar2._4_4_ = fVar4;
  auVar2._0_4_ = param_1;
  auVar2._8_4_ = fVar3;
  auVar2._12_4_ = fVar5;
  return auVar2;
}



/* Vector4::operator String() const */

Vector4 * __thiscall Vector4::operator_cast_to_String(Vector4 *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  float *in_RSI;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &_LC21;
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::num_real(in_RSI[3],SUB81(&local_68,0));
  local_58 = &_LC22;
  local_78 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_78);
  String::num_real(in_RSI[2],SUB81(&local_88,0));
  local_58 = &_LC22;
  local_98 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_98);
  String::num_real(in_RSI[1],SUB81(&local_a8,0));
  local_58 = &_LC22;
  local_b8 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_b8);
  String::num_real(*in_RSI,SUB81(&local_c8,0));
  operator+((char *)&local_c0,&_LC23);
  String::operator+((String *)&local_b0,(String *)&local_c0);
  String::operator+((String *)&local_a0,(String *)&local_b0);
  String::operator+((String *)&local_90,(String *)&local_a0);
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_70,(String *)&local_80);
  String::operator+((String *)&local_58,(String *)&local_70);
  String::operator+((String *)this,(String *)&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector4::operator Vector4i() const */

undefined1  [16] __thiscall Vector4::operator_cast_to_Vector4i(Vector4 *this)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (int)*(float *)(this + 4);
  auVar1._0_4_ = (int)*(float *)this;
  auVar1._8_4_ = (int)*(float *)(this + 8);
  auVar1._12_4_ = (int)*(float *)(this + 0xc);
  return auVar1;
}


