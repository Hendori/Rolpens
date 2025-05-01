
/* tvg::atan2(float, float) */

void tvg::atan2(float param_1,float param_2)

{
  if (((param_1 != 0.0) || (param_2 != 0.0)) && (param_1 < 0.0)) {
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::inverse(tvg::Matrix const*, tvg::Matrix*) */

undefined8 tvg::inverse(Matrix *param_1,Matrix *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar3 = *(float *)(param_1 + 0x20);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 8);
  fVar9 = fVar1 * fVar3 - fVar2 * fVar4;
  fVar10 = fVar3 * *(float *)(param_1 + 0xc);
  fVar8 = _LC9 / ((*(float *)param_1 * fVar9 - (fVar10 - fVar4 * fVar5) * fVar6) +
                 (*(float *)(param_1 + 0xc) * fVar2 - fVar1 * fVar5) * fVar7);
  if ((float)((uint)fVar8 & _LC3) <= __LC10) {
    *(float *)param_2 = fVar9 * fVar8;
    *(float *)(param_2 + 4) = (fVar2 * fVar7 - fVar6 * fVar3) * fVar8;
    fVar6 = *(float *)(param_1 + 4);
    *(float *)(param_2 + 0xc) = (fVar4 * fVar5 - fVar10) * fVar8;
    *(float *)(param_2 + 8) = (fVar4 * fVar6 - fVar1 * fVar7) * fVar8;
    fVar1 = *(float *)param_1;
    fVar7 = *(float *)(param_1 + 8);
    fVar9 = *(float *)(param_1 + 0xc);
    *(float *)(param_2 + 0x10) = (fVar3 * fVar1 - fVar5 * fVar7) * fVar8;
    *(float *)(param_2 + 0x14) = (fVar7 * fVar9 - fVar4 * fVar1) * fVar8;
    fVar3 = *(float *)(param_1 + 0x10);
    *(float *)(param_2 + 0x18) = (fVar2 * fVar9 - fVar5 * fVar3) * fVar8;
    *(float *)(param_2 + 0x1c) = (*(float *)(param_1 + 0x18) * fVar6 - fVar2 * fVar1) * fVar8;
    *(float *)(param_2 + 0x20) = (fVar1 * fVar3 - fVar6 * fVar9) * fVar8;
    return 1;
  }
  return 0;
}



/* tvg::identity(tvg::Matrix const*) */

ulong tvg::identity(Matrix *param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  if (((((_LC9 == *(float *)param_1) && (*(float *)(param_1 + 4) == 0.0)) &&
       (*(float *)(param_1 + 8) == 0.0)) &&
      ((*(float *)(param_1 + 0xc) == 0.0 && (_LC9 == *(float *)(param_1 + 0x10))))) &&
     ((*(float *)(param_1 + 0x14) == 0.0 &&
      ((*(float *)(param_1 + 0x18) == 0.0 && (*(float *)(param_1 + 0x1c) == 0.0)))))) {
    uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),!NAN(_LC9) && !NAN(*(float *)(param_1 + 0x20))) &
            0xffffffff;
    if (_LC9 != *(float *)(param_1 + 0x20)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::rotate(tvg::Matrix*, float) */

void tvg::rotate(Matrix *param_1,float param_2)

{
  float local_10;
  float local_c;
  
  if (param_2 != 0.0) {
    sincosf((param_2 / __LC11) * _LC7,&local_c,&local_10);
    *(ulong *)param_1 =
         CONCAT44((float)*(undefined8 *)param_1 * (float)((uint)local_c ^ __LC1),
                  (float)*(undefined8 *)param_1 * local_10);
    *(ulong *)(param_1 + 0xc) =
         CONCAT44(*(float *)(param_1 + 0x10) * local_10,*(float *)(param_1 + 0x10) * local_c);
  }
  return;
}



/* tvg::TEMPNAMEPLACEHOLDERVALUE(tvg::Matrix const&, tvg::Matrix const&) */

tvg * __thiscall tvg::operator*(tvg *this,Matrix *param_1,Matrix *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float fVar18;
  
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)param_2;
  fVar11 = *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_2 + 8);
  fVar13 = *(float *)(param_2 + 0xc);
  fVar14 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(param_1 + 0x18);
  fVar16 = *(float *)(param_1 + 0x1c);
  fVar17 = *(float *)(param_2 + 0x10);
  fVar18 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar5 = *(float *)(param_2 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x20);
  *(float *)this = fVar1 * fVar3 + fVar7 * fVar10 + fVar8 * fVar13;
  *(float *)(this + 4) = fVar1 * fVar5 + fVar7 * fVar11 + fVar8 * fVar17;
  *(float *)(this + 8) = fVar1 * fVar4 + fVar7 * fVar12 + fVar8 * fVar18;
  *(float *)(this + 0xc) = fVar2 * fVar3 + fVar9 * fVar10 + fVar14 * fVar13;
  *(float *)(this + 0x10) = fVar9 * fVar11 + fVar17 * fVar14 + fVar2 * fVar5;
  *(float *)(this + 0x14) = fVar9 * fVar12 + fVar18 * fVar14 + fVar2 * fVar4;
  *(float *)(this + 0x18) = fVar15 * fVar10 + fVar13 * fVar16 + fVar6 * fVar3;
  *(float *)(this + 0x1c) = fVar15 * fVar11 + fVar17 * fVar16 + fVar6 * fVar5;
  *(float *)(this + 0x20) = fVar16 * fVar18 + fVar12 * fVar15 + fVar4 * fVar6;
  return this;
}



/* tvg::TEMPNAMEPLACEHOLDERVALUE(tvg::Matrix const&, tvg::Matrix const&) */

bool tvg::operator==(Matrix *param_1,Matrix *param_2)

{
  if ((((((float)((uint)(*(float *)param_1 - *(float *)param_2) & _LC3) <= _LC12) &&
        ((float)((uint)(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) & _LC3) <= _LC12)) &&
       ((float)((uint)(*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) & _LC3) <= _LC12)) &&
      (((float)((uint)(*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc)) & _LC3) <= _LC12 &&
       ((float)((uint)(*(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10)) & _LC3) <= _LC12))))
     && (((float)((uint)(*(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14)) & _LC3) <= _LC12
         && (((float)((uint)(*(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18)) & _LC3) <=
              _LC12 && ((float)((uint)(*(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c)) &
                               _LC3) <= _LC12)))))) {
    return (float)((uint)(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) & _LC3) <= _LC12;
  }
  return false;
}



/* tvg::TEMPNAMEPLACEHOLDERVALUE(tvg::Point&, tvg::Matrix const&) */

void tvg::operator*=(Point *param_1,Matrix *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar1 +
                fVar2 * *(float *)(param_2 + 0x10) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20),
                (float)*(undefined8 *)param_2 * fVar1 + fVar2 * *(float *)(param_2 + 4) +
                (float)*(undefined8 *)(param_2 + 8));
  return;
}



/* tvg::TEMPNAMEPLACEHOLDERVALUE(tvg::Point const&, tvg::Matrix const&) */

undefined8 tvg::operator*(Point *param_1,Matrix *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  return CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar1 +
                  fVar2 * *(float *)(param_2 + 0x10) +
                  (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20),
                  (float)*(undefined8 *)param_2 * fVar1 + fVar2 * *(float *)(param_2 + 4) +
                  (float)*(undefined8 *)(param_2 + 8));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::normal(tvg::Point const&, tvg::Point const&) */

undefined8 tvg::normal(Point *param_1,Point *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  fVar3 = *(float *)param_2 - *(float *)param_1;
  fVar1 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  uVar4 = 0;
  fVar2 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
  if (_LC12 < fVar2) {
    uVar4 = CONCAT44(fVar3 / fVar2,(uint)(fVar1 / fVar2) ^ __LC1);
  }
  return uVar4;
}



/* tvg::Line::length() const */

float __thiscall tvg::Line::length(Line *this)

{
  return SQRT((*(float *)(this + 8) - *(float *)this) * (*(float *)(this + 8) - *(float *)this) +
              (*(float *)(this + 0xc) - *(float *)(this + 4)) *
              (*(float *)(this + 0xc) - *(float *)(this + 4)));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::Line::split(float, tvg::Line&, tvg::Line&) const */

void __thiscall tvg::Line::split(Line *this,float param_1,Line *param_2,Line *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar5 = (float)*(undefined8 *)this;
  auVar3._0_4_ = (float)*(undefined8 *)(this + 8) - fVar5;
  fVar6 = (float)((ulong)*(undefined8 *)this >> 0x20);
  auVar3._4_4_ = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar6;
  auVar3._8_8_ = 0;
  *(undefined8 *)param_2 = *(undefined8 *)this;
  auVar4._0_4_ = SQRT(auVar3._0_4_ * auVar3._0_4_ + auVar3._4_4_ * auVar3._4_4_);
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_8_ = __LC9;
  auVar3 = divps(auVar3,auVar4);
  uVar2 = CONCAT44(auVar3._4_4_ * param_1 + fVar6,auVar3._0_4_ * param_1 + fVar5);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)param_3 = uVar2;
  *(undefined8 *)(param_3 + 8) = uVar1;
  return;
}



/* tvg::Bezier::split(tvg::Bezier&, tvg::Bezier&) const */

void __thiscall tvg::Bezier::split(Bezier *this,Bezier *param_1,Bezier *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = _LC14;
  fVar2 = *(float *)this;
  fVar5 = *(float *)(this + 0x18);
  fVar4 = (*(float *)(this + 8) + *(float *)(this + 0x10)) * _LC14;
  fVar1 = (*(float *)(this + 8) + fVar2) * _LC14;
  fVar6 = (*(float *)(this + 0x10) + fVar5) * _LC14;
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_2 + 0x10) = fVar6;
  fVar6 = *(float *)(this + 0x14);
  *(float *)param_1 = fVar2;
  fVar2 = *(float *)(this + 4);
  fVar1 = (fVar1 + fVar4) * fVar3;
  *(float *)(param_2 + 0x18) = fVar5;
  fVar5 = *(float *)(this + 0x1c);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar4 = (fVar4 + *(float *)(param_2 + 0x10)) * fVar3;
  *(float *)(param_2 + 8) = fVar4;
  fVar1 = (fVar1 + fVar4) * fVar3;
  *(float *)param_2 = fVar1;
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = (*(float *)(this + 0xc) + fVar2) * fVar3;
  fVar4 = (*(float *)(this + 0xc) + fVar6) * fVar3;
  *(float *)(param_1 + 0xc) = fVar1;
  *(float *)(param_2 + 0x14) = (fVar6 + fVar5) * fVar3;
  *(float *)(param_1 + 4) = fVar2;
  fVar2 = (fVar1 + fVar4) * fVar3;
  *(float *)(param_2 + 0x1c) = fVar5;
  *(float *)(param_1 + 0x14) = fVar2;
  fVar5 = (fVar4 + *(float *)(param_2 + 0x14)) * fVar3;
  *(float *)(param_2 + 0xc) = fVar5;
  fVar3 = (fVar2 + fVar5) * fVar3;
  *(float *)(param_2 + 4) = fVar3;
  *(float *)(param_1 + 0x1c) = fVar3;
  return;
}



/* tvg::Bezier::split(float, tvg::Bezier&) */

void __thiscall tvg::Bezier::split(Bezier *this,float param_1,Bezier *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 8);
  *(undefined8 *)param_2 = *(undefined8 *)this;
  fVar1 = *(float *)(this + 4);
  *(float *)(param_2 + 8) = (fVar5 - *(float *)this) * param_1 + *(float *)this;
  fVar5 = *(float *)(this + 8);
  *(float *)(param_2 + 0xc) = (*(float *)(this + 0xc) - fVar1) * param_1 + fVar1;
  fVar1 = *(float *)(this + 0xc);
  *(float *)(param_2 + 0x10) = (*(float *)(this + 0x10) - fVar5) * param_1 + fVar5;
  *(float *)(param_2 + 0x14) = (*(float *)(this + 0x14) - fVar1) * param_1 + fVar1;
  fVar2 = (float)*(undefined8 *)(this + 0x10);
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar2 = ((float)*(undefined8 *)(this + 0x18) - fVar2) * param_1 + fVar2;
  fVar3 = ((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) - fVar3) * param_1 + fVar3;
  *(ulong *)(this + 0x10) = CONCAT44(fVar3,fVar2);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x14);
  fVar4 = (fVar2 - fVar5) * param_1 + fVar5;
  fVar3 = (fVar3 - fVar1) * param_1 + fVar1;
  *(float *)(this + 8) = fVar4;
  fVar2 = *(float *)(param_2 + 8);
  *(float *)(this + 0xc) = fVar3;
  fVar2 = (fVar5 - fVar2) * param_1 + fVar2;
  *(float *)(param_2 + 0x10) = fVar2;
  fVar5 = (fVar1 - *(float *)(param_2 + 0xc)) * param_1 + *(float *)(param_2 + 0xc);
  fVar2 = (fVar4 - fVar2) * param_1 + fVar2;
  *(float *)(param_2 + 0x14) = fVar5;
  *(float *)this = fVar2;
  *(float *)(param_2 + 0x18) = fVar2;
  fVar5 = (fVar3 - fVar5) * param_1 + fVar5;
  *(float *)(this + 4) = fVar5;
  *(float *)(param_2 + 0x1c) = fVar5;
  return;
}



/* tvg::Bezier::at(float) const */

void tvg::Bezier::at(float param_1)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::Bezier::angle(float) const */

undefined8 __thiscall tvg::Bezier::angle(Bezier *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  
  if ((0.0 <= param_1) && (param_1 <= _LC9)) {
    fVar6 = param_1 * param_1;
    fVar4 = (float)((uint)(_LC9 - param_1) ^ __LC1) * (_LC9 - param_1);
    fVar5 = (_LC9 - _LC16 * param_1) + fVar6 * _LC15;
    fVar3 = (param_1 + param_1) - fVar6 * _LC15;
    auVar1._0_8_ = atan2((fVar4 * *(float *)(this + 4) + fVar5 * *(float *)(this + 0xc) +
                          fVar3 * *(float *)(this + 0x14) + fVar6 * *(float *)(this + 0x1c)) * _LC15
                         ,(*(float *)this * fVar4 + *(float *)(this + 8) * fVar5 +
                           *(float *)(this + 0x10) * fVar3 + *(float *)(this + 0x18) * fVar6) *
                          _LC15);
    auVar1._8_8_ = extraout_XMM0_Qb;
    auVar2._4_12_ = auVar1._4_12_;
    auVar2._0_4_ = (float)auVar1._0_8_ * __LC17;
    return auVar2._0_8_;
  }
  return 0;
}



/* tvg::lerp(unsigned char const&, unsigned char const&, float) */

int tvg::lerp(uchar *param_1,uchar *param_2,float param_3)

{
  int iVar1;
  
  iVar1 = (int)((float)(int)((uint)*param_2 - (uint)*param_1) * param_3 + (float)*param_1);
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* tvg::Bezier::length() const */

void __thiscall tvg::Bezier::length(Bezier *this)

{
  _bezLength<float(*)(tvg::Point_const&,tvg::Point_const&)>(this,_lineLength);
  return;
}



/* tvg::Bezier::lengthApprox() const */

void __thiscall tvg::Bezier::lengthApprox(Bezier *this)

{
  _bezLength<float(*)(tvg::Point_const&,tvg::Point_const&)>(this,_lineLengthApprox);
  return;
}



/* tvg::Bezier::at(float, float) const */

void __thiscall tvg::Bezier::at(Bezier *this,float param_1,float param_2)

{
  _bezAt<float(*)(tvg::Point_const&,tvg::Point_const&)>(this,param_1,param_2,_lineLength);
  return;
}



/* tvg::Bezier::split(float, tvg::Bezier&, tvg::Bezier&) const */

void __thiscall tvg::Bezier::split(Bezier *this,float param_1,Bezier *param_2,Bezier *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)param_3 = *(undefined8 *)this;
  *(undefined8 *)(param_3 + 8) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  fVar2 = _bezLength<float(*)(tvg::Point_const&,tvg::Point_const&)>(param_3,_lineLength);
  fVar2 = _bezAt<float(*)(tvg::Point_const&,tvg::Point_const&)>(param_3,param_1,fVar2,_lineLength);
  split(param_3,fVar2,param_2);
  return;
}



/* tvg::Bezier::atApprox(float, float) const */

void __thiscall tvg::Bezier::atApprox(Bezier *this,float param_1,float param_2)

{
  _bezAt<float(*)(tvg::Point_const&,tvg::Point_const&)>(this,param_1,param_2,_lineLengthApprox);
  return;
}


