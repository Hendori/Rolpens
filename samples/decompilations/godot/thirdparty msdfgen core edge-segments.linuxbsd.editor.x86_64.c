
/* msdfgen::LinearSegment::type() const */

undefined8 msdfgen::LinearSegment::type(void)

{
  return 1;
}



/* msdfgen::QuadraticSegment::type() const */

undefined8 msdfgen::QuadraticSegment::type(void)

{
  return 2;
}



/* msdfgen::CubicSegment::type() const */

undefined8 msdfgen::CubicSegment::type(void)

{
  return 3;
}



/* msdfgen::QuadraticSegment::controlPoints() const */

QuadraticSegment * __thiscall msdfgen::QuadraticSegment::controlPoints(QuadraticSegment *this)

{
  return this + 0x10;
}



/* msdfgen::LinearSegment::point(double) const */

undefined1  [16] __thiscall msdfgen::LinearSegment::point(LinearSegment *this,double param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(double *)(this + 0x28) * param_1 + (_LC0 - param_1) * *(double *)(this + 0x18);
  auVar1._0_8_ = *(double *)(this + 0x20) * param_1 + (_LC0 - param_1) * *(double *)(this + 0x10);
  return auVar1;
}



/* msdfgen::QuadraticSegment::point(double) const */

undefined1  [16] __thiscall msdfgen::QuadraticSegment::point(QuadraticSegment *this,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  
  dVar2 = _LC0 - param_1;
  auVar1._8_8_ = (*(double *)(this + 0x38) * param_1 + *(double *)(this + 0x28) * dVar2) * param_1 +
                 (*(double *)(this + 0x18) * dVar2 + *(double *)(this + 0x28) * param_1) * dVar2;
  auVar1._0_8_ = (*(double *)(this + 0x30) * param_1 + *(double *)(this + 0x20) * dVar2) * param_1 +
                 (*(double *)(this + 0x10) * dVar2 + *(double *)(this + 0x20) * param_1) * dVar2;
  return auVar1;
}



/* msdfgen::CubicSegment::point(double) const */

undefined1  [16] __thiscall msdfgen::CubicSegment::point(CubicSegment *this,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = _LC0 - param_1;
  dVar3 = *(double *)(this + 0x30) * param_1 + *(double *)(this + 0x20) * dVar2;
  dVar4 = *(double *)(this + 0x38) * param_1 + *(double *)(this + 0x28) * dVar2;
  auVar1._8_8_ = ((*(double *)(this + 0x48) * param_1 + *(double *)(this + 0x38) * dVar2) * param_1
                 + dVar4 * dVar2) * param_1 +
                 ((*(double *)(this + 0x18) * dVar2 + *(double *)(this + 0x28) * param_1) * dVar2 +
                 dVar4 * param_1) * dVar2;
  auVar1._0_8_ = ((*(double *)(this + 0x40) * param_1 + *(double *)(this + 0x30) * dVar2) * param_1
                 + dVar3 * dVar2) * param_1 +
                 ((*(double *)(this + 0x10) * dVar2 + *(double *)(this + 0x20) * param_1) * dVar2 +
                 dVar3 * param_1) * dVar2;
  return auVar1;
}



/* msdfgen::LinearSegment::direction(double) const */

undefined1  [16] msdfgen::LinearSegment::direction(double param_1)

{
  undefined1 auVar1 [16];
  long in_RDI;
  
  auVar1._8_8_ = *(double *)(in_RDI + 0x28) - *(double *)(in_RDI + 0x18);
  auVar1._0_8_ = *(double *)(in_RDI + 0x20) - *(double *)(in_RDI + 0x10);
  return auVar1;
}



/* msdfgen::QuadraticSegment::direction(double) const */

undefined1  [16] __thiscall
msdfgen::QuadraticSegment::direction(QuadraticSegment *this,double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = (*(double *)(this + 0x38) - *(double *)(this + 0x28)) * param_1 +
                 (*(double *)(this + 0x28) - *(double *)(this + 0x18)) * (_LC0 - param_1);
  auVar1._0_8_ = (*(double *)(this + 0x30) - *(double *)(this + 0x20)) * param_1 +
                 (*(double *)(this + 0x20) - *(double *)(this + 0x10)) * (_LC0 - param_1);
  if ((auVar1._0_8_ == 0.0) && (auVar1._8_8_ == 0.0)) {
    auVar2._8_8_ = *(double *)(this + 0x38) - *(double *)(this + 0x18);
    auVar2._0_8_ = *(double *)(this + 0x30) - *(double *)(this + 0x10);
    return auVar2;
  }
  return auVar1;
}



/* msdfgen::CubicSegment::direction(double) const */

undefined1  [16] __thiscall msdfgen::CubicSegment::direction(CubicSegment *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  dVar1 = *(double *)(this + 0x38);
  dVar2 = *(double *)(this + 0x28);
  dVar3 = *(double *)(this + 0x30);
  dVar4 = *(double *)(this + 0x20);
  dVar5 = _LC0 - param_1;
  auVar6._8_8_ = (dVar5 * (dVar1 - dVar2) + (*(double *)(this + 0x48) - dVar1) * param_1) * param_1
                 + ((dVar2 - *(double *)(this + 0x18)) * dVar5 + (dVar1 - dVar2) * param_1) * dVar5;
  auVar6._0_8_ = ((*(double *)(this + 0x40) - dVar3) * param_1 + dVar5 * (dVar3 - dVar4)) * param_1
                 + ((dVar4 - *(double *)(this + 0x10)) * dVar5 + (dVar3 - dVar4) * param_1) * dVar5;
  if ((auVar6._8_8_ == 0.0) && (auVar6._0_8_ == 0.0)) {
    if (param_1 == 0.0) {
      auVar7._8_8_ = dVar1 - *(double *)(this + 0x18);
      auVar7._0_8_ = dVar3 - *(double *)(this + 0x10);
      return auVar7;
    }
    if (param_1 == _LC0) {
      auVar8._8_8_ = *(double *)(this + 0x48) - dVar2;
      auVar8._0_8_ = *(double *)(this + 0x40) - dVar4;
      return auVar8;
    }
  }
  return auVar6;
}



/* msdfgen::LinearSegment::directionChange(double) const */

void msdfgen::LinearSegment::directionChange(double param_1)

{
  return;
}



/* msdfgen::QuadraticSegment::directionChange(double) const */

undefined1  [16] msdfgen::QuadraticSegment::directionChange(double param_1)

{
  undefined1 auVar1 [16];
  long in_RDI;
  
  auVar1._8_8_ = (*(double *)(in_RDI + 0x38) - *(double *)(in_RDI + 0x28)) -
                 (*(double *)(in_RDI + 0x28) - *(double *)(in_RDI + 0x18));
  auVar1._0_8_ = (*(double *)(in_RDI + 0x30) - *(double *)(in_RDI + 0x20)) -
                 (*(double *)(in_RDI + 0x20) - *(double *)(in_RDI + 0x10));
  return auVar1;
}



/* msdfgen::CubicSegment::directionChange(double) const */

undefined1  [16] __thiscall
msdfgen::CubicSegment::directionChange(CubicSegment *this,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(this + 0x30) - *(double *)(this + 0x20);
  dVar3 = *(double *)(this + 0x38) - *(double *)(this + 0x28);
  auVar1._8_8_ = ((*(double *)(this + 0x48) - *(double *)(this + 0x38)) - dVar3) * param_1 +
                 (dVar3 - (*(double *)(this + 0x28) - *(double *)(this + 0x18))) * (_LC0 - param_1);
  auVar1._0_8_ = ((*(double *)(this + 0x40) - *(double *)(this + 0x30)) - dVar2) * param_1 +
                 (dVar2 - (*(double *)(this + 0x20) - *(double *)(this + 0x10))) * (_LC0 - param_1);
  return auVar1;
}



/* msdfgen::LinearSegment::scanlineIntersections(double*, int*, double) const */

undefined8 __thiscall
msdfgen::LinearSegment::scanlineIntersections
          (LinearSegment *this,double *param_1,int *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(this + 0x18);
  dVar1 = *(double *)(this + 0x28);
  dVar2 = dVar1;
  if (((dVar3 <= param_3) || (dVar2 = dVar3, dVar1 <= param_3)) && (param_3 < dVar2)) {
    dVar3 = (param_3 - dVar3) / (dVar1 - dVar3);
    *param_1 = (_LC0 - dVar3) * *(double *)(this + 0x10) + dVar3 * *(double *)(this + 0x20);
    *param_2 = (uint)(0.0 < *(double *)(this + 0x28) - *(double *)(this + 0x18)) -
               (uint)(*(double *)(this + 0x28) - *(double *)(this + 0x18) < 0.0);
    return 1;
  }
  return 0;
}



/* msdfgen::LinearSegment::bound(double&, double&, double&, double&) const */

void __thiscall
msdfgen::LinearSegment::bound
          (LinearSegment *this,double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(this + 0x10);
  dVar2 = *(double *)(this + 0x18);
  if (dVar1 < *param_1) {
    *param_1 = dVar1;
  }
  if (dVar2 < *param_2) {
    *param_2 = dVar2;
  }
  if (*param_3 <= dVar1 && dVar1 != *param_3) {
    *param_3 = dVar1;
  }
  if (*param_4 <= dVar2 && dVar2 != *param_4) {
    *param_4 = dVar2;
  }
  dVar1 = *(double *)(this + 0x20);
  dVar2 = *(double *)(this + 0x28);
  if (dVar1 < *param_1) {
    *param_1 = dVar1;
  }
  if (dVar2 < *param_2) {
    *param_2 = dVar2;
  }
  if (*param_3 <= dVar1 && dVar1 != *param_3) {
    *param_3 = dVar1;
  }
  if (*param_4 <= dVar2 && dVar2 != *param_4) {
    *param_4 = dVar2;
  }
  return;
}



/* msdfgen::QuadraticSegment::bound(double&, double&, double&, double&) const */

void __thiscall
msdfgen::QuadraticSegment::bound
          (QuadraticSegment *this,double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar3 = *(double *)(this + 0x10);
  dVar1 = *(double *)(this + 0x18);
  if (dVar3 < *param_1) {
    *param_1 = dVar3;
  }
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  if (*param_3 <= dVar3 && dVar3 != *param_3) {
    *param_3 = dVar3;
  }
  if (*param_4 <= dVar1 && dVar1 != *param_4) {
    *param_4 = dVar1;
  }
  dVar3 = *(double *)(this + 0x30);
  dVar1 = *(double *)(this + 0x38);
  if (dVar3 < *param_1) {
    *param_1 = dVar3;
  }
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  if (*param_3 <= dVar3 && dVar3 != *param_3) {
    *param_3 = dVar3;
  }
  if (*param_4 <= dVar1 && dVar1 != *param_4) {
    *param_4 = dVar1;
  }
  dVar1 = *(double *)(this + 0x20) - *(double *)(this + 0x10);
  dVar3 = (*(double *)(this + 0x28) - *(double *)(this + 0x18)) -
          (*(double *)(this + 0x38) - *(double *)(this + 0x28));
  dVar2 = dVar1 - (*(double *)(this + 0x30) - *(double *)(this + 0x20));
  if (((dVar2 != 0.0) && (dVar1 = dVar1 / dVar2, 0.0 < dVar1)) && (dVar1 < _LC0)) {
    if (*(code **)(*(long *)this + 0x28) == point) {
      auVar4 = point(this,dVar1);
    }
    else {
      auVar4 = (**(code **)(*(long *)this + 0x28))();
    }
    dVar2 = auVar4._8_8_;
    dVar1 = auVar4._0_8_;
    if (dVar1 < *param_1) {
      *param_1 = dVar1;
    }
    if (dVar2 < *param_2) {
      *param_2 = dVar2;
    }
    if (*param_3 <= dVar1 && dVar1 != *param_3) {
      *param_3 = dVar1;
    }
    if (*param_4 <= dVar2 && dVar2 != *param_4) {
      *param_4 = dVar2;
    }
  }
  if (((dVar3 != 0.0) &&
      (dVar3 = (*(double *)(this + 0x28) - *(double *)(this + 0x18)) / dVar3, 0.0 < dVar3)) &&
     (dVar3 < _LC0)) {
    if (*(code **)(*(long *)this + 0x28) == point) {
      auVar4 = point(this,dVar3);
    }
    else {
      auVar4 = (**(code **)(*(long *)this + 0x28))();
    }
    dVar1 = auVar4._8_8_;
    dVar3 = auVar4._0_8_;
    if (dVar3 < *param_1) {
      *param_1 = dVar3;
    }
    if (dVar1 < *param_2) {
      *param_2 = dVar1;
    }
    if (*param_3 <= dVar3 && dVar3 != *param_3) {
      *param_3 = dVar3;
    }
    if (*param_4 <= dVar1 && dVar1 != *param_4) {
      *param_4 = dVar1;
    }
  }
  return;
}



/* msdfgen::LinearSegment::reverse() */

void __thiscall msdfgen::LinearSegment::reverse(LinearSegment *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(this + 0x20);
  uVar2 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}



/* msdfgen::QuadraticSegment::reverse() */

void __thiscall msdfgen::QuadraticSegment::reverse(QuadraticSegment *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(this + 0x30);
  uVar2 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}



/* msdfgen::CubicSegment::reverse() */

void __thiscall msdfgen::CubicSegment::reverse(CubicSegment *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(this + 0x40);
  uVar2 = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x18);
  uVar3 = *(undefined8 *)(this + 0x20);
  uVar4 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar4;
  return;
}



/* msdfgen::LinearSegment::moveStartPoint(msdfgen::Vector2) */

void msdfgen::LinearSegment::moveStartPoint(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* msdfgen::QuadraticSegment::moveStartPoint(msdfgen::Vector2) */

void msdfgen::QuadraticSegment::moveStartPoint(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *(double *)(param_3 + 0x20);
  dVar2 = *(double *)(param_3 + 0x28);
  dVar3 = *(double *)(param_3 + 0x18);
  *(double *)(param_3 + 0x18) = param_2;
  dVar4 = *(double *)(param_3 + 0x10);
  *(double *)(param_3 + 0x10) = param_1;
  dVar5 = *(double *)(param_3 + 0x30) - dVar1;
  dVar6 = *(double *)(param_3 + 0x38) - dVar2;
  dVar8 = dVar4 - dVar1;
  dVar7 = dVar3 - dVar2;
  dVar3 = ((param_2 - dVar3) * dVar8 - (param_1 - dVar4) * dVar7) / (dVar6 * dVar8 - dVar5 * dVar7);
  dVar4 = dVar3 * dVar5 + dVar1;
  dVar3 = dVar3 * dVar6 + dVar2;
  *(double *)(param_3 + 0x20) = dVar4;
  *(double *)(param_3 + 0x28) = dVar3;
  if (0.0 <= (param_1 - dVar4) * dVar8 + (param_2 - dVar3) * dVar7) {
    return;
  }
  *(double *)(param_3 + 0x20) = dVar1;
  *(double *)(param_3 + 0x28) = dVar2;
  return;
}



/* msdfgen::CubicSegment::moveStartPoint(msdfgen::Vector2) */

void msdfgen::CubicSegment::moveStartPoint(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_3 + 0x10);
  dVar2 = *(double *)(param_3 + 0x18);
  *(double *)(param_3 + 0x10) = param_1;
  *(double *)(param_3 + 0x18) = param_2;
  *(double *)(param_3 + 0x20) = (param_1 - dVar1) + *(double *)(param_3 + 0x20);
  *(double *)(param_3 + 0x28) = (param_2 - dVar2) + *(double *)(param_3 + 0x28);
  return;
}



/* msdfgen::LinearSegment::moveEndPoint(msdfgen::Vector2) */

void msdfgen::LinearSegment::moveEndPoint(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x20) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  return;
}



/* msdfgen::QuadraticSegment::moveEndPoint(msdfgen::Vector2) */

void msdfgen::QuadraticSegment::moveEndPoint(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *(double *)(param_3 + 0x20);
  dVar2 = *(double *)(param_3 + 0x28);
  dVar3 = *(double *)(param_3 + 0x38);
  *(double *)(param_3 + 0x38) = param_2;
  dVar4 = *(double *)(param_3 + 0x30);
  *(double *)(param_3 + 0x30) = param_1;
  dVar5 = *(double *)(param_3 + 0x10) - dVar1;
  dVar6 = *(double *)(param_3 + 0x18) - dVar2;
  dVar8 = dVar4 - dVar1;
  dVar7 = dVar3 - dVar2;
  dVar3 = ((param_2 - dVar3) * dVar8 - (param_1 - dVar4) * dVar7) / (dVar6 * dVar8 - dVar5 * dVar7);
  dVar4 = dVar3 * dVar5 + dVar1;
  dVar3 = dVar3 * dVar6 + dVar2;
  *(double *)(param_3 + 0x20) = dVar4;
  *(double *)(param_3 + 0x28) = dVar3;
  if (0.0 <= (param_1 - dVar4) * dVar8 + (param_2 - dVar3) * dVar7) {
    return;
  }
  *(double *)(param_3 + 0x20) = dVar1;
  *(double *)(param_3 + 0x28) = dVar2;
  return;
}



/* msdfgen::CubicSegment::moveEndPoint(msdfgen::Vector2) */

void msdfgen::CubicSegment::moveEndPoint(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_3 + 0x40);
  dVar2 = *(double *)(param_3 + 0x48);
  *(double *)(param_3 + 0x40) = param_1;
  *(double *)(param_3 + 0x48) = param_2;
  *(double *)(param_3 + 0x30) = (param_1 - dVar1) + *(double *)(param_3 + 0x30);
  *(double *)(param_3 + 0x38) = (param_2 - dVar2) + *(double *)(param_3 + 0x38);
  return;
}



/* msdfgen::LinearSegment::clone() const */

void __thiscall msdfgen::LinearSegment::clone(LinearSegment *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)operator_new(0x30);
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined8 *)(this + 0x18);
  uVar1 = *(undefined4 *)(this + 8);
  uVar4 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined8 *)(this + 0x28);
  *puVar6 = &PTR__LinearSegment_00103e88;
  *(undefined4 *)(puVar6 + 1) = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[5] = uVar5;
  return;
}



/* msdfgen::QuadraticSegment::clone() const */

void __thiscall msdfgen::QuadraticSegment::clone(QuadraticSegment *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)operator_new(0x40);
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined8 *)(this + 0x18);
  uVar4 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined8 *)(this + 0x28);
  uVar6 = *(undefined8 *)(this + 0x30);
  uVar7 = *(undefined8 *)(this + 0x38);
  uVar1 = *(undefined4 *)(this + 8);
  *puVar8 = &PTR__QuadraticSegment_00103f18;
  puVar8[2] = uVar2;
  puVar8[3] = uVar3;
  *(undefined4 *)(puVar8 + 1) = uVar1;
  puVar8[4] = uVar4;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[7] = uVar7;
  return;
}



/* msdfgen::CubicSegment::clone() const */

void __thiscall msdfgen::CubicSegment::clone(CubicSegment *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  
  puVar10 = (undefined8 *)operator_new(0x50);
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined8 *)(this + 0x18);
  *puVar10 = &PTR__CubicSegment_00103fa8;
  uVar4 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined8 *)(this + 0x28);
  uVar6 = *(undefined8 *)(this + 0x30);
  uVar7 = *(undefined8 *)(this + 0x38);
  uVar8 = *(undefined8 *)(this + 0x40);
  uVar9 = *(undefined8 *)(this + 0x48);
  *(undefined4 *)(puVar10 + 1) = uVar1;
  pauVar11 = (undefined1 (*) [16])(puVar10 + 2);
  do {
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11 = pauVar11 + 1;
  } while ((undefined1 (*) [16])(puVar10 + 10) != pauVar11);
  puVar10[2] = uVar2;
  puVar10[3] = uVar3;
  puVar10[4] = uVar4;
  puVar10[5] = uVar5;
  puVar10[6] = uVar6;
  puVar10[7] = uVar7;
  puVar10[8] = uVar8;
  puVar10[9] = uVar9;
  return;
}



/* msdfgen::QuadraticSegment::splitInThirds(msdfgen::EdgeSegment*&, msdfgen::EdgeSegment*&,
   msdfgen::EdgeSegment*&) const */

void msdfgen::QuadraticSegment::splitInThirds
               (EdgeSegment **param_1,EdgeSegment **param_2,EdgeSegment **param_3)

{
  undefined4 uVar1;
  EdgeSegment *pEVar2;
  EdgeSegment *pEVar3;
  EdgeSegment *pEVar4;
  double dVar5;
  EdgeSegment *pEVar6;
  undefined8 *puVar7;
  undefined8 *in_RCX;
  code *extraout_RDX;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 in_XMM1_Qa;
  double dVar12;
  double dVar13;
  EdgeSegment *pEVar14;
  undefined8 local_88;
  double dStack_80;
  undefined8 local_78;
  double dStack_70;
  
  pEVar6 = (EdgeSegment *)operator_new(0x40);
  dVar10 = _LC2;
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (*(code **)(*param_1 + 0x28) == point) {
    local_88 = point((QuadraticSegment *)param_1,_LC2);
    dStack_80 = (double)in_XMM1_Qa;
  }
  else {
    local_88 = (**(code **)(*param_1 + 0x28))(_LC2,param_1);
    dStack_80 = (double)in_XMM1_Qa;
  }
  dVar5 = _LC2;
  pEVar14 = param_1[4];
  pEVar2 = param_1[5];
  *(undefined4 *)(pEVar6 + 8) = uVar1;
  *(undefined ***)pEVar6 = &PTR__QuadraticSegment_00103f18;
  dVar9 = _LC5;
  pEVar3 = param_1[2];
  pEVar4 = param_1[3];
  *param_2 = pEVar6;
  *(undefined8 *)(pEVar6 + 0x30) = local_88;
  *(double *)(pEVar6 + 0x38) = dStack_80;
  dStack_70 = dVar9 * (double)pEVar3;
  *(EdgeSegment **)(pEVar6 + 0x10) = pEVar3;
  *(EdgeSegment **)(pEVar6 + 0x18) = pEVar4;
  *(double *)(pEVar6 + 0x20) = dVar5 * (double)pEVar14 + dStack_70;
  *(double *)(pEVar6 + 0x28) = dVar5 * (double)pEVar2 + dVar9 * (double)pEVar4;
  pEVar6 = (EdgeSegment *)operator_new(0x40);
  dVar5 = _LC6;
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (*(code **)(*param_1 + 0x28) == point) {
    local_78 = point((QuadraticSegment *)param_1,_LC6);
    pcVar8 = extraout_RDX;
  }
  else {
    local_78 = (**(code **)(*param_1 + 0x28))(_LC6,param_1);
    pcVar8 = *(code **)(*param_1 + 0x28);
  }
  dStack_80 = (double)param_1[4] * _LC8;
  dVar12 = ((double)param_1[2] * _LC10 + dStack_80) * _LC12;
  dVar13 = ((double)param_1[3] * _LC10 + (double)param_1[5] * _LC8) * _LC12;
  dVar9 = (_LC10 * (double)param_1[6] + dStack_80) * _LC12;
  dVar11 = (_LC10 * (double)param_1[7] + (double)param_1[5] * _LC8) * _LC12;
  if (pcVar8 == point) {
    local_88 = point((QuadraticSegment *)param_1,dVar10);
  }
  else {
    local_88 = (*pcVar8)();
  }
  *(undefined4 *)(pEVar6 + 8) = uVar1;
  *param_3 = pEVar6;
  *(undefined ***)pEVar6 = &PTR__QuadraticSegment_00103f18;
  *(double *)(pEVar6 + 0x20) = dVar12 + dVar9;
  *(double *)(pEVar6 + 0x28) = dVar13 + dVar11;
  *(undefined8 *)(pEVar6 + 0x30) = local_78;
  *(double *)(pEVar6 + 0x38) = dStack_70;
  *(undefined8 *)(pEVar6 + 0x10) = local_88;
  *(double *)(pEVar6 + 0x18) = dStack_80;
  puVar7 = (undefined8 *)operator_new(0x40);
  uVar1 = *(undefined4 *)(param_1 + 1);
  pEVar6 = param_1[6];
  pEVar14 = param_1[7];
  dVar11 = (double)param_1[4] * _LC14;
  dVar12 = (double)param_1[5] * _LC14;
  dVar10 = _LC6 * (double)pEVar6;
  dVar9 = _LC6 * (double)pEVar14;
  if (*(code **)(*param_1 + 0x28) == point) {
    local_88 = point((QuadraticSegment *)param_1,dVar5);
  }
  else {
    local_88 = (**(code **)(*param_1 + 0x28))();
    pEVar6 = param_1[6];
    pEVar14 = param_1[7];
  }
  *(undefined4 *)(puVar7 + 1) = uVar1;
  *puVar7 = &PTR__QuadraticSegment_00103f18;
  *in_RCX = puVar7;
  puVar7[2] = local_88;
  puVar7[3] = dStack_80;
  puVar7[4] = dVar11 + dVar10;
  puVar7[5] = dVar12 + dVar9;
  puVar7[6] = pEVar6;
  puVar7[7] = pEVar14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::CubicSegment::splitInThirds(msdfgen::EdgeSegment*&, msdfgen::EdgeSegment*&,
   msdfgen::EdgeSegment*&) const */

void __thiscall
msdfgen::CubicSegment::splitInThirds
          (CubicSegment *this,EdgeSegment **param_1,EdgeSegment **param_2,EdgeSegment **param_3)

{
  undefined4 uVar1;
  double dVar2;
  EdgeSegment *pEVar3;
  EdgeSegment *pEVar4;
  code *pcVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qa;
  double dVar7;
  double dVar8;
  undefined8 extraout_XMM1_Qa;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  pEVar3 = (EdgeSegment *)operator_new(0x50);
  dVar19 = _LC2;
  uVar1 = *(undefined4 *)(this + 8);
  if (*(code **)(*(long *)this + 0x28) == point) {
    auVar23 = point(this,_LC2);
  }
  else {
    auVar23 = (**(code **)(*(long *)this + 0x28))();
  }
  dVar2 = *(double *)(this + 0x10);
  dVar20 = *(double *)(this + 0x18);
  dVar12 = dVar2 * _LC5 + *(double *)(this + 0x20) * _LC2;
  dVar14 = dVar20 * _LC5 + *(double *)(this + 0x28) * _LC2;
  dVar8 = dVar12 * _LC5;
  dVar9 = dVar14 * _LC5;
  dVar6 = (*(double *)(this + 0x30) * _LC2 + *(double *)(this + 0x20) * _LC5) * _LC2;
  dVar7 = (*(double *)(this + 0x38) * _LC2 + *(double *)(this + 0x28) * _LC5) * _LC2;
  if ((*(double *)(this + 0x28) == *(double *)(this + 0x18)) &&
     (*(double *)(this + 0x20) == *(double *)(this + 0x10))) {
    dVar12 = dVar2;
    dVar14 = dVar20;
  }
  *(undefined4 *)(pEVar3 + 8) = uVar1;
  pEVar4 = pEVar3 + 0x10;
  *(undefined ***)pEVar3 = &PTR__CubicSegment_00103fa8;
  do {
    *(undefined1 (*) [16])pEVar4 = (undefined1  [16])0x0;
    pEVar4 = pEVar4 + 0x10;
  } while (pEVar4 != pEVar3 + 0x50);
  *param_1 = pEVar3;
  *(double *)(pEVar3 + 0x10) = dVar2;
  *(double *)(pEVar3 + 0x18) = dVar20;
  *(double *)(pEVar3 + 0x20) = dVar12;
  *(double *)(pEVar3 + 0x28) = dVar14;
  *(double *)(pEVar3 + 0x30) = dVar6 + dVar8;
  *(double *)(pEVar3 + 0x38) = dVar7 + dVar9;
  *(undefined1 (*) [16])(pEVar3 + 0x40) = auVar23;
  pEVar3 = (EdgeSegment *)operator_new(0x50);
  dVar2 = _LC6;
  uVar1 = *(undefined4 *)(this + 8);
  if (*(code **)(*(long *)this + 0x28) == point) {
    dVar20 = _LC5;
    dVar12 = _UNK_00104088;
    dVar14 = _LC2;
    dVar6 = _UNK_00104078;
    pcVar5 = (code *)point(this,_LC6);
    auVar23._8_8_ = extraout_XMM1_Qa;
    auVar23._0_8_ = extraout_XMM0_Qa;
  }
  else {
    auVar23 = (**(code **)(*(long *)this + 0x28))(_LC6,this);
    pcVar5 = *(code **)(*(long *)this + 0x28);
    dVar20 = _LC5;
    dVar12 = _UNK_00104088;
    dVar14 = _LC2;
    dVar6 = _UNK_00104078;
  }
  dVar7 = *(double *)(this + 0x30);
  dVar8 = *(double *)(this + 0x38);
  dVar9 = *(double *)(this + 0x20);
  dVar16 = *(double *)(this + 0x28);
  dVar13 = dVar9 * dVar20 + dVar7 * dVar14;
  dVar15 = dVar16 * dVar12 + dVar8 * dVar6;
  dVar21 = dVar9 * _LC14 + dVar7 * _LC6;
  dVar22 = dVar16 * _LC14 + dVar8 * _LC6;
  dVar17 = ((*(double *)(this + 0x10) * dVar20 + dVar9 * dVar14) * dVar20 + dVar13 * dVar14) * _LC14
  ;
  dVar18 = ((*(double *)(this + 0x18) * dVar12 + dVar16 * dVar6) * dVar12 + dVar15 * dVar6) * _LC14;
  dVar13 = ((dVar7 * dVar20 + *(double *)(this + 0x40) * dVar14) * dVar14 + dVar13 * dVar20) * _LC6;
  dVar10 = ((dVar8 * dVar12 + *(double *)(this + 0x48) * dVar6) * dVar6 + dVar15 * dVar12) * _LC6;
  dVar15 = dVar21 * _LC6;
  dVar11 = dVar22 * _LC6;
  dVar9 = (*(double *)(this + 0x10) * _LC14 + dVar9 * _LC6) * _LC14;
  dVar16 = (*(double *)(this + 0x18) * _LC14 + dVar16 * _LC6) * _LC14;
  dVar21 = dVar21 * _LC14;
  dVar22 = dVar22 * _LC14;
  dVar7 = (dVar7 * _LC14 + *(double *)(this + 0x40) * _LC6) * _LC6;
  dVar8 = (dVar8 * _LC14 + *(double *)(this + 0x48) * _LC6) * _LC6;
  if (pcVar5 == point) {
    auVar24 = point(this,dVar19);
  }
  else {
    auVar24 = (*pcVar5)();
  }
  *(undefined4 *)(pEVar3 + 8) = uVar1;
  pEVar4 = pEVar3 + 0x10;
  *(undefined ***)pEVar3 = &PTR__CubicSegment_00103fa8;
  do {
    *(undefined1 (*) [16])pEVar4 = (undefined1  [16])0x0;
    pEVar4 = pEVar4 + 0x10;
  } while (pEVar4 != pEVar3 + 0x50);
  *param_2 = pEVar3;
  *(undefined1 (*) [16])(pEVar3 + 0x10) = auVar24;
  *(double *)(pEVar3 + 0x30) = (dVar9 + dVar15) * dVar20 + (dVar7 + dVar21) * dVar14;
  *(double *)(pEVar3 + 0x38) = (dVar16 + dVar11) * dVar12 + (dVar8 + dVar22) * dVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x40) = auVar23;
  *(double *)(pEVar3 + 0x20) = dVar17 + dVar13;
  *(double *)(pEVar3 + 0x28) = dVar18 + dVar10;
  pEVar3 = (EdgeSegment *)operator_new(0x50);
  dVar19 = *(double *)(this + 0x40);
  dVar20 = *(double *)(this + 0x48);
  uVar1 = *(undefined4 *)(this + 8);
  dVar12 = *(double *)(this + 0x30);
  dVar14 = *(double *)(this + 0x38);
  if ((*(double *)(this + 0x38) == *(double *)(this + 0x48)) &&
     (*(double *)(this + 0x30) == *(double *)(this + 0x40))) {
    dVar8 = dVar12 * _LC14 + dVar19 * _LC6;
    dVar9 = dVar14 * _UNK_00104098 + dVar20 * _UNK_001040a8;
    dVar6 = dVar19;
    dVar7 = dVar20;
  }
  else {
    dVar8 = dVar12 * _LC14 + dVar19 * _LC6;
    dVar9 = dVar14 * _UNK_00104098 + dVar20 * _UNK_001040a8;
    dVar6 = dVar8;
    dVar7 = dVar9;
  }
  dVar8 = dVar8 * _LC6;
  dVar9 = dVar9 * _UNK_001040a8;
  dVar12 = (*(double *)(this + 0x20) * _LC14 + dVar12 * _LC6) * _LC14;
  dVar14 = (*(double *)(this + 0x28) * _UNK_00104098 + dVar14 * _UNK_001040a8) * _UNK_00104098;
  if (*(code **)(*(long *)this + 0x28) == point) {
    auVar23 = point(this,dVar2);
  }
  else {
    auVar23 = (**(code **)(*(long *)this + 0x28))();
    dVar19 = *(double *)(this + 0x40);
    dVar20 = *(double *)(this + 0x48);
  }
  *(undefined4 *)(pEVar3 + 8) = uVar1;
  pEVar4 = pEVar3 + 0x10;
  *(undefined ***)pEVar3 = &PTR__CubicSegment_00103fa8;
  do {
    *(undefined1 (*) [16])pEVar4 = (undefined1  [16])0x0;
    pEVar4 = pEVar4 + 0x10;
  } while (pEVar3 + 0x50 != pEVar4);
  *(undefined1 (*) [16])(pEVar3 + 0x10) = auVar23;
  *(double *)(pEVar3 + 0x20) = dVar12 + dVar8;
  *(double *)(pEVar3 + 0x28) = dVar14 + dVar9;
  *param_3 = pEVar3;
  *(double *)(pEVar3 + 0x30) = dVar6;
  *(double *)(pEVar3 + 0x38) = dVar7;
  *(double *)(pEVar3 + 0x40) = dVar19;
  *(double *)(pEVar3 + 0x48) = dVar20;
  return;
}



/* msdfgen::CubicSegment::scanlineIntersections(double*, int*, double) const */

int __thiscall
msdfgen::CubicSegment::scanlineIntersections
          (CubicSegment *this,double *param_1,int *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_60 [4];
  long local_40;
  
  dVar16 = *(double *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar10 = *(double *)(this + 0x18);
  dVar11 = *(double *)(this + 0x18);
  *param_1 = dVar16;
  dVar1 = *(double *)(this + 0x18);
  dVar12 = *(double *)(this + 0x38);
  dVar2 = *(double *)(this + 0x48);
  bVar3 = dVar11 <= param_3 && param_3 != dVar10;
  dVar10 = *(double *)(this + 0x28);
  iVar9 = (bVar3 - 1) + (uint)bVar3;
  if (dVar1 == param_3) {
    if ((dVar10 <= dVar1) &&
       ((dVar1 != dVar10 || ((dVar12 <= dVar1 && ((dVar1 != dVar12 || (dVar2 <= dVar1)))))))) {
      iVar9 = 1;
      goto LAB_001013e6;
    }
    *param_2 = 1;
    iVar8 = 1;
    iVar7 = 1;
  }
  else {
LAB_001013e6:
    iVar8 = 0;
    iVar7 = 0;
  }
  dVar14 = dVar10 - dVar1;
  dVar16 = *(double *)(this + 0x20) - dVar16;
  dVar11 = *(double *)(this + 0x30) - *(double *)(this + 0x20);
  dVar13 = (dVar12 - dVar10) - dVar14;
  dVar15 = dVar11 - dVar16;
  dVar12 = ((dVar2 - dVar12) - (dVar12 - dVar10)) - dVar13;
  local_60[0] = ((*(double *)(this + 0x40) - *(double *)(this + 0x30)) - dVar11) - dVar15;
  iVar4 = msdfgen::solveCubic(local_60 + 1,dVar12,_LC17 * dVar13,_LC17 * dVar14,dVar1 - param_3);
  dVar1 = local_60[3];
  dVar11 = local_60[1];
  dVar10 = _LC0;
  if (iVar4 < 2) {
    if (iVar4 == 1) goto LAB_0010151a;
  }
  else {
    if (local_60[2] < local_60[1]) {
      local_60[1] = local_60[2];
      local_60[2] = dVar11;
    }
    dVar2 = local_60[2];
    dVar11 = local_60[1];
    if ((iVar4 != 2) && (local_60[3] < local_60[2])) {
      local_60[2] = local_60[3];
      local_60[3] = dVar2;
      if (dVar1 < local_60[1]) {
        local_60[1] = dVar1;
        local_60[2] = dVar11;
      }
    }
LAB_0010151a:
    lVar6 = 1;
    do {
      dVar11 = local_60[lVar6];
      if ((0.0 <= dVar11) && (dVar11 <= dVar10)) {
        param_1[iVar7] =
             _LC17 * dVar11 * dVar16 + *(double *)(this + 0x10) + _LC17 * dVar11 * dVar11 * dVar15 +
             dVar11 * dVar11 * dVar11 * local_60[0];
        if (0.0 <= ((dVar11 + dVar11) * dVar13 + dVar14 + dVar11 * dVar11 * dVar12) * (double)iVar9)
        {
          param_2[iVar7] = iVar9;
          iVar7 = iVar7 + 1;
          iVar9 = -iVar9;
          iVar8 = iVar7;
        }
      }
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 < iVar4 && iVar7 < 3);
  }
  dVar16 = *(double *)(this + 0x48);
  if (NAN(dVar16) || NAN(param_3)) {
LAB_00101678:
    iVar4 = -1;
LAB_00101577:
    iVar8 = iVar7;
    if (iVar4 == iVar9) goto LAB_001015b5;
  }
  else {
    if (dVar16 != param_3) {
      if (param_3 < dVar16) goto LAB_00101678;
LAB_00101572:
      iVar4 = 1;
      goto LAB_00101577;
    }
    dVar10 = *(double *)(this + 0x38);
    if ((iVar9 < 1) || (iVar7 < 1)) {
      if (dVar10 <= dVar16) {
        if (dVar16 != dVar10) goto LAB_00101572;
        dVar10 = *(double *)(this + 0x28);
        if (dVar10 <= dVar16) goto LAB_0010179e;
      }
LAB_00101780:
      if (iVar7 == 3) {
        if (iVar9 != 1) {
          iVar8 = 2;
        }
        goto LAB_001015b5;
      }
      lVar6 = (long)iVar7;
      param_1[lVar6] = *(double *)(this + 0x40);
      if (iVar9 < 0) {
LAB_0010172d:
        dVar16 = *(double *)(this + 0x48);
        iVar8 = iVar7 + 1;
        param_2[lVar6] = -1;
        iVar9 = 1;
        iVar7 = iVar8;
        if (dVar16 <= param_3) goto LAB_001015b5;
      }
      else {
        dVar16 = *(double *)(this + 0x48);
        if (dVar16 <= param_3) goto LAB_00101572;
      }
    }
    else {
      iVar4 = iVar7 + -1;
      if (dVar16 < dVar10) {
        param_1[iVar4] = *(double *)(this + 0x40);
        dVar16 = *(double *)(this + 0x48);
        param_2[iVar4] = -1;
        iVar8 = iVar7;
        if (param_3 < dVar16) {
          iVar8 = iVar4;
        }
        goto LAB_001015b5;
      }
      iVar7 = iVar4;
      if (dVar16 == dVar10) {
        dVar10 = *(double *)(this + 0x28);
        if (dVar10 <= dVar16) {
          iVar9 = -1;
          iVar8 = iVar4;
LAB_0010179e:
          if ((dVar16 != dVar10) || (*(double *)(this + 0x18) <= dVar16)) goto LAB_00101572;
          goto LAB_00101780;
        }
        lVar6 = (long)iVar4;
        param_1[lVar6] = *(double *)(this + 0x40);
        goto LAB_0010172d;
      }
      iVar9 = -1;
    }
  }
  if (iVar7 < 1) {
    if ((double)((ulong)(dVar16 - param_3) & _LC18) <
        (double)((ulong)(*(double *)(this + 0x18) - param_3) & _LC18)) {
      param_1[iVar7] = *(double *)(this + 0x40);
    }
    param_2[iVar7] = iVar9;
    iVar8 = iVar7 + 1;
  }
  else {
    iVar8 = iVar7 + -1;
  }
LAB_001015b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::QuadraticSegment::scanlineIntersections(double*, int*, double) const */

int __thiscall
msdfgen::QuadraticSegment::scanlineIntersections
          (QuadraticSegment *this,double *param_1,int *param_2,double param_3)

{
  double dVar1;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_60 [4];
  long local_40;
  double dVar2;
  
  dVar12 = *(double *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = *(double *)(this + 0x18);
  dVar2 = *(double *)(this + 0x18);
  *param_1 = dVar12;
  dVar3 = *(double *)(this + 0x18);
  dVar10 = *(double *)(this + 0x38);
  bVar4 = dVar2 <= param_3 && param_3 != dVar1;
  dVar1 = *(double *)(this + 0x28);
  iVar9 = (bVar4 - 1) + (uint)bVar4;
  if (dVar3 == param_3) {
    if ((dVar1 <= dVar3) && ((dVar3 != dVar1 || (dVar10 <= dVar3)))) {
      iVar9 = 1;
      goto LAB_001018b2;
    }
    *param_2 = 1;
    iVar8 = 1;
  }
  else {
LAB_001018b2:
    iVar8 = 0;
  }
  dVar2 = *(double *)(this + 0x20);
  local_60[0] = *(double *)(this + 0x30);
  dVar11 = dVar1 - dVar3;
  dVar10 = (dVar10 - dVar1) - dVar11;
  iVar5 = msdfgen::solveQuadratic(local_60 + 1,dVar10,dVar11 + dVar11,dVar3 - param_3);
  dVar3 = local_60[1];
  dVar1 = _LC0;
  if (iVar5 < 2) {
    if (iVar5 == 1) goto LAB_00101951;
  }
  else {
    if (local_60[2] < local_60[1]) {
      local_60[1] = local_60[2];
      local_60[2] = dVar3;
    }
LAB_00101951:
    lVar7 = 1;
    dVar12 = dVar2 - dVar12;
    do {
      dVar3 = local_60[lVar7];
      if ((0.0 <= dVar3) && (dVar3 <= dVar1)) {
        param_1[iVar8] =
             (dVar3 + dVar3) * dVar12 + *(double *)(this + 0x10) +
             dVar3 * dVar3 * ((local_60[0] - dVar2) - dVar12);
        if (0.0 <= (dVar3 * dVar10 + dVar11) * (double)iVar9) {
          param_2[iVar8] = iVar9;
          iVar8 = iVar8 + 1;
          iVar9 = -iVar9;
        }
      }
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (iVar6 < iVar5 && iVar8 < 2);
  }
  dVar12 = *(double *)(this + 0x38);
  if (NAN(dVar12) || NAN(param_3)) {
LAB_00101a30:
    iVar5 = -1;
LAB_001019c0:
    if (iVar5 == iVar9) goto LAB_00101a06;
  }
  else {
    if (dVar12 != param_3) {
      if (param_3 < dVar12) goto LAB_00101a30;
LAB_001019bb:
      iVar5 = 1;
      goto LAB_001019c0;
    }
    dVar1 = *(double *)(this + 0x28);
    if ((iVar9 < 1) || (iVar8 < 1)) {
      if ((dVar12 < dVar1) || ((dVar12 == dVar1 && (dVar12 < *(double *)(this + 0x18))))) {
        if (iVar8 == 2) {
          if (iVar9 != 1) {
            iVar8 = 1;
          }
          goto LAB_00101a06;
        }
        lVar7 = (long)iVar8;
        param_1[lVar7] = *(double *)(this + 0x30);
        if (iVar9 < 0) goto LAB_00101b1d;
        dVar12 = *(double *)(this + 0x38);
        if (param_3 < dVar12) goto LAB_001019c5;
      }
      goto LAB_001019bb;
    }
    iVar5 = iVar8 + -1;
    if (dVar12 < dVar1) {
      param_1[iVar5] = *(double *)(this + 0x30);
      dVar12 = *(double *)(this + 0x38);
      param_2[iVar5] = -1;
      if (param_3 < dVar12) {
        iVar8 = iVar5;
      }
      goto LAB_00101a06;
    }
    if ((dVar12 != dVar1) || (*(double *)(this + 0x18) <= dVar12)) {
      iVar9 = -1;
      iVar8 = iVar5;
    }
    else {
      lVar7 = (long)iVar5;
      param_1[lVar7] = *(double *)(this + 0x30);
      iVar8 = iVar5;
LAB_00101b1d:
      dVar12 = *(double *)(this + 0x38);
      iVar8 = iVar8 + 1;
      param_2[lVar7] = -1;
      iVar9 = 1;
      if (dVar12 <= param_3) goto LAB_00101a06;
    }
  }
LAB_001019c5:
  if (iVar8 < 1) {
    if ((double)((ulong)(dVar12 - param_3) & _LC18) <
        (double)((ulong)(*(double *)(this + 0x18) - param_3) & _LC18)) {
      param_1[iVar8] = *(double *)(this + 0x30);
    }
    param_2[iVar8] = iVar9;
    iVar8 = iVar8 + 1;
  }
  else {
    iVar8 = iVar8 + -1;
  }
LAB_00101a06:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::CubicSegment::bound(double&, double&, double&, double&) const */

void __thiscall
msdfgen::CubicSegment::bound
          (CubicSegment *this,double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 extraout_XMM1_Qa;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double local_58 [3];
  long local_40;
  
  dVar7 = *(double *)(this + 0x10);
  dVar9 = *(double *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dVar7 < *param_1) {
    *param_1 = dVar7;
  }
  if (dVar9 < *param_2) {
    *param_2 = dVar9;
  }
  if (*param_3 <= dVar7 && dVar7 != *param_3) {
    *param_3 = dVar7;
  }
  if (*param_4 <= dVar9 && dVar9 != *param_4) {
    *param_4 = dVar9;
  }
  dVar7 = *(double *)(this + 0x40);
  dVar9 = *(double *)(this + 0x48);
  if (dVar7 < *param_1) {
    *param_1 = dVar7;
  }
  if (dVar9 < *param_2) {
    *param_2 = dVar9;
  }
  if (*param_3 <= dVar7 && dVar7 != *param_3) {
    *param_3 = dVar7;
  }
  if (*param_4 <= dVar9 && dVar9 != *param_4) {
    *param_4 = dVar9;
  }
  dVar7 = *(double *)(this + 0x28);
  pdVar4 = local_58;
  dVar9 = *(double *)(this + 0x18);
  dVar6 = *(double *)(this + 0x20);
  dVar12 = dVar7 - dVar9;
  dVar10 = dVar6 - *(double *)(this + 0x10);
  dVar11 = (*(double *)(this + 0x38) - dVar7) - dVar12;
  dVar1 = *(double *)(this + 0x48);
  dVar13 = *(double *)(this + 0x38) * _LC17;
  dVar7 = dVar7 * _LC17;
  dVar8 = (*(double *)(this + 0x30) - dVar6) - dVar10;
  iVar2 = msdfgen::solveQuadratic
                    (pdVar4,((*(double *)(this + 0x40) - *(double *)(this + 0x30) * _LC17) +
                            dVar6 * _LC17) - *(double *)(this + 0x10),dVar8 + dVar8,dVar10);
  if (0 < iVar2) {
    pdVar3 = pdVar4 + iVar2;
    pdVar5 = pdVar4;
    do {
      dVar6 = *pdVar5;
      if ((0.0 < dVar6) && (dVar6 < _LC0)) {
        if (*(code **)(*(long *)this + 0x28) == point) {
          pdVar3 = (double *)point(this,dVar6);
          auVar14._8_8_ = extraout_XMM1_Qa;
          auVar14._0_8_ = extraout_XMM0_Qa;
        }
        else {
          auVar14 = (**(code **)(*(long *)this + 0x28))(this);
        }
        dVar8 = auVar14._8_8_;
        dVar6 = auVar14._0_8_;
        if (dVar6 < *param_1) {
          *param_1 = dVar6;
        }
        if (dVar8 < *param_2) {
          *param_2 = dVar8;
        }
        if (*param_3 <= dVar6 && dVar6 != *param_3) {
          *param_3 = dVar6;
        }
        if (*param_4 <= dVar8 && dVar8 != *param_4) {
          *param_4 = dVar8;
        }
      }
      pdVar5 = pdVar5 + 1;
    } while (pdVar3 != pdVar5);
  }
  iVar2 = msdfgen::solveQuadratic(pdVar4,((dVar1 - dVar13) + dVar7) - dVar9,dVar11 + dVar11,dVar12);
  if (0 < iVar2) {
    pdVar3 = pdVar4 + iVar2;
    do {
      dVar7 = *pdVar4;
      if ((0.0 < dVar7) && (dVar7 < _LC0)) {
        if (*(code **)(*(long *)this + 0x28) == point) {
          auVar14 = point(this,dVar7);
        }
        else {
          auVar14 = (**(code **)(*(long *)this + 0x28))();
        }
        dVar9 = auVar14._8_8_;
        dVar7 = auVar14._0_8_;
        if (dVar7 < *param_1) {
          *param_1 = dVar7;
        }
        if (dVar9 < *param_2) {
          *param_2 = dVar9;
        }
        if (*param_3 <= dVar7 && dVar7 != *param_3) {
          *param_3 = dVar7;
        }
        if (*param_4 <= dVar9 && dVar9 != *param_4) {
          *param_4 = dVar9;
        }
      }
      pdVar4 = pdVar4 + 1;
    } while (pdVar3 != pdVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::LinearSegment::splitInThirds(msdfgen::EdgeSegment*&, msdfgen::EdgeSegment*&,
   msdfgen::EdgeSegment*&) const */

void msdfgen::LinearSegment::splitInThirds
               (EdgeSegment **param_1,EdgeSegment **param_2,EdgeSegment **param_3)

{
  undefined4 uVar1;
  EdgeSegment *pEVar2;
  undefined8 *puVar3;
  undefined8 *in_RCX;
  double dVar4;
  EdgeSegment *pEVar5;
  double dVar6;
  EdgeSegment *pEVar7;
  double dVar8;
  double dVar9;
  double in_XMM1_Qa;
  EdgeSegment *pEVar10;
  EdgeSegment *pEVar11;
  double dVar12;
  
  pEVar2 = (EdgeSegment *)operator_new(0x30);
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (*(code **)(*param_1 + 0x28) == point) {
    pEVar5 = param_1[2];
    pEVar7 = param_1[3];
    dVar4 = _LC2 * (double)param_1[4] + _LC5 * (double)pEVar5;
    in_XMM1_Qa = _LC2 * (double)param_1[5] + _LC5 * (double)pEVar7;
    dVar12 = _LC5 * (double)pEVar5;
  }
  else {
    dVar4 = (double)(**(code **)(*param_1 + 0x28))(_LC2,param_1);
    pEVar5 = param_1[2];
    pEVar7 = param_1[3];
    dVar12 = in_XMM1_Qa;
  }
  *(undefined4 *)(pEVar2 + 8) = uVar1;
  *param_2 = pEVar2;
  *(undefined ***)pEVar2 = &PTR__LinearSegment_00103e88;
  *(EdgeSegment **)(pEVar2 + 0x10) = pEVar5;
  *(EdgeSegment **)(pEVar2 + 0x18) = pEVar7;
  *(double *)(pEVar2 + 0x20) = dVar4;
  *(double *)(pEVar2 + 0x28) = in_XMM1_Qa;
  pEVar2 = (EdgeSegment *)operator_new(0x30);
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (*(code **)(*param_1 + 0x28) == point) {
    pEVar5 = param_1[2];
    pEVar7 = param_1[3];
    pEVar10 = param_1[4];
    pEVar11 = param_1[5];
    dVar4 = _LC6 * (double)pEVar10 + _LC14 * (double)pEVar5;
    dVar12 = _LC6 * (double)pEVar11 + _LC14 * (double)pEVar7;
  }
  else {
    dVar4 = (double)(**(code **)(*param_1 + 0x28))(_LC6,param_1);
    if (*(code **)(*param_1 + 0x28) != point) {
      dVar8 = dVar12;
      dVar6 = (double)(**(code **)(*param_1 + 0x28))(_LC2,param_1);
      dVar9 = dVar8;
      goto LAB_0010201d;
    }
    pEVar5 = param_1[2];
    pEVar7 = param_1[3];
    pEVar10 = param_1[4];
    pEVar11 = param_1[5];
  }
  dVar6 = (double)pEVar5 * _LC5 + (double)pEVar10 * _LC2;
  dVar8 = (double)pEVar7 * _LC5 + (double)pEVar11 * _LC2;
  dVar9 = (double)pEVar10 * _LC2;
LAB_0010201d:
  *param_3 = pEVar2;
  *(undefined4 *)(pEVar2 + 8) = uVar1;
  *(undefined ***)pEVar2 = &PTR__LinearSegment_00103e88;
  *(double *)(pEVar2 + 0x10) = dVar6;
  *(double *)(pEVar2 + 0x18) = dVar8;
  *(double *)(pEVar2 + 0x20) = dVar4;
  *(double *)(pEVar2 + 0x28) = dVar12;
  puVar3 = (undefined8 *)operator_new(0x30);
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (*(code **)(*param_1 + 0x28) == point) {
    pEVar2 = param_1[4];
    pEVar5 = param_1[5];
    dVar12 = (double)param_1[2] * _LC14 + _LC6 * (double)pEVar2;
    dVar9 = (double)param_1[3] * _LC14 + _LC6 * (double)pEVar5;
  }
  else {
    dVar12 = (double)(**(code **)(*param_1 + 0x28))(_LC6,param_1);
    pEVar2 = param_1[4];
    pEVar5 = param_1[5];
  }
  *(undefined4 *)(puVar3 + 1) = uVar1;
  *puVar3 = &PTR__LinearSegment_00103e88;
  *in_RCX = puVar3;
  puVar3[2] = dVar12;
  puVar3[3] = dVar9;
  puVar3[4] = pEVar2;
  puVar3[5] = pEVar5;
  return;
}



/* msdfgen::LinearSegment::signedDistance(msdfgen::Vector2, double&) const */

undefined1  [16]
msdfgen::LinearSegment::signedDistance(double param_1,double param_2,long param_3,double *param_4)

{
  bool bVar1;
  double dVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  dVar8 = param_2 - *(double *)(param_3 + 0x18);
  dVar2 = *(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x18);
  dVar9 = param_1 - *(double *)(param_3 + 0x10);
  dVar5 = *(double *)(param_3 + 0x20) - *(double *)(param_3 + 0x10);
  dVar10 = dVar5 * dVar5 + dVar2 * dVar2;
  dVar7 = (dVar5 * dVar9 + dVar2 * dVar8) / dVar10;
  dVar10 = SQRT(dVar10);
  bVar1 = _LC12 < dVar7;
  *param_4 = dVar7;
  param_3 = param_3 + (ulong)bVar1 * 0x10;
  param_2 = *(double *)(param_3 + 0x18) - param_2;
  param_1 = *(double *)(param_3 + 0x10) - param_1;
  dVar6 = SQRT(param_1 * param_1 + param_2 * param_2);
  if ((0.0 < dVar7) && (dVar7 < _LC0)) {
    if (dVar10 == 0.0) {
      dVar4 = 0.0;
      dVar7 = _LC19;
    }
    else {
      dVar4 = dVar2 / dVar10;
      dVar7 = (double)((ulong)dVar5 ^ _LC20) / dVar10;
    }
    dVar7 = dVar4 * dVar9 + dVar7 * dVar8;
    if ((double)((ulong)dVar7 & _LC18) < dVar6) {
      uVar3 = 0;
      goto LAB_001022ce;
    }
  }
  if (dVar6 == 0.0) {
    param_1 = 0.0;
    param_2 = _LC0;
  }
  else {
    param_1 = param_1 / dVar6;
    param_2 = param_2 / dVar6;
  }
  dVar7 = 0.0;
  if (dVar10 != 0.0) {
    dVar7 = dVar5 / dVar10;
    param_2 = param_2 * (dVar2 / dVar10);
  }
  uVar3 = (ulong)(param_2 + dVar7 * param_1) & _LC18;
  dVar7 = dVar6;
  if (dVar2 * dVar9 - dVar5 * dVar8 <= 0.0) {
    dVar7 = (double)((ulong)dVar6 ^ _LC20);
  }
LAB_001022ce:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = dVar7;
  return auVar11;
}



/* msdfgen::EdgeSegment::distanceToPerpendicularDistance(msdfgen::SignedDistance&, msdfgen::Vector2,
   double) const */

void msdfgen::EdgeSegment::distanceToPerpendicularDistance
               (double param_1_00,double param_2,double param_3,long *param_1,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  if (param_3 < 0.0) {
    auVar4 = (**(code **)(*param_1 + 0x30))(0);
    dVar3 = auVar4._8_8_;
    dVar2 = auVar4._0_8_;
    dVar1 = SQRT(dVar2 * dVar2 + dVar3 * dVar3);
    if (dVar1 == 0.0) {
      dVar2 = 0.0;
      dVar3 = _LC0;
    }
    else {
      dVar2 = dVar2 / dVar1;
      dVar3 = dVar3 / dVar1;
    }
    auVar4 = (**(code **)(*param_1 + 0x28))(0,param_1);
    param_2 = param_2 - auVar4._8_8_;
    param_1_00 = param_1_00 - auVar4._0_8_;
    if ((param_1_00 * dVar2 + param_2 * dVar3 < 0.0) &&
       (dVar2 = param_1_00 * dVar3 - param_2 * dVar2,
       (double)((ulong)dVar2 & _LC18) <= (double)((ulong)*param_5 & _LC18))) {
      *param_5 = dVar2;
      param_5[1] = 0.0;
    }
  }
  else if (_LC0 < param_3) {
    auVar4 = (**(code **)(*param_1 + 0x30))(_LC0);
    dVar2 = auVar4._8_8_;
    dVar3 = auVar4._0_8_;
    dVar1 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
    if (dVar1 == 0.0) {
      dVar3 = 0.0;
      dVar2 = _LC0;
    }
    else {
      dVar2 = dVar2 / dVar1;
      dVar3 = dVar3 / dVar1;
    }
    auVar4 = (**(code **)(*param_1 + 0x28))(_LC0,param_1);
    param_2 = param_2 - auVar4._8_8_;
    param_1_00 = param_1_00 - auVar4._0_8_;
    if ((0.0 < param_1_00 * dVar3 + param_2 * dVar2) &&
       (dVar2 = param_1_00 * dVar2 - param_2 * dVar3,
       (double)((ulong)dVar2 & _LC18) <= (double)((ulong)*param_5 & _LC18))) {
      param_5[1] = 0.0;
      *param_5 = dVar2;
    }
  }
  return;
}



/* msdfgen::QuadraticSegment::signedDistance(msdfgen::Vector2, double&) const */

undefined1  [16]
msdfgen::QuadraticSegment::signedDistance
          (double param_1,double param_2,QuadraticSegment *param_3,double *param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  double dVar5;
  double dVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double local_a8;
  double local_48 [3];
  long local_30;
  
  pdVar3 = local_48;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  dVar14 = *(double *)(param_3 + 0x18) - param_2;
  dVar19 = *(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x18);
  local_a8 = *(double *)(param_3 + 0x10) - param_1;
  dVar20 = *(double *)(param_3 + 0x20) - *(double *)(param_3 + 0x10);
  dVar5 = (*(double *)(param_3 + 0x38) - *(double *)(param_3 + 0x28)) - dVar19;
  dVar12 = (*(double *)(param_3 + 0x30) - *(double *)(param_3 + 0x20)) - dVar20;
  dVar9 = dVar20 * dVar20 + dVar19 * dVar19;
  iVar2 = msdfgen::solveCubic(pdVar3,dVar12 * dVar12 + dVar5 * dVar5,
                              (dVar12 * dVar20 + dVar5 * dVar19) * _LC17,
                              dVar9 + dVar9 + dVar12 * local_a8 + dVar5 * dVar14,
                              dVar19 * dVar14 + dVar20 * local_a8);
  pcVar4 = *(code **)(*(long *)param_3 + 0x30);
  if (pcVar4 == direction) {
    auVar21 = direction(param_3,0.0);
  }
  else {
    auVar21 = (*pcVar4)(0,param_3);
    pcVar4 = *(code **)(*(long *)param_3 + 0x30);
  }
  dVar9 = _LC0;
  dVar8 = auVar21._8_8_;
  dVar6 = auVar21._0_8_;
  dVar10 = _LC19;
  if (0.0 < dVar14 * dVar6 - dVar8 * local_a8) {
    dVar10 = _LC0;
  }
  dVar13 = SQRT(local_a8 * local_a8 + dVar14 * dVar14);
  *param_4 = (double)((ulong)(local_a8 * dVar6 + dVar8 * dVar14) ^ _LC20) /
             (dVar8 * dVar8 + dVar6 * dVar6);
  if (pcVar4 == direction) {
    auVar21 = direction(param_3,dVar9);
  }
  else {
    auVar21 = (*pcVar4)();
  }
  uVar7 = _LC20;
  uVar16 = _LC18;
  dVar11 = auVar21._8_8_;
  dVar18 = auVar21._0_8_;
  dVar6 = *(double *)(param_3 + 0x38) - param_2;
  dVar15 = *(double *)(param_3 + 0x30) - param_1;
  dVar17 = SQRT(dVar15 * dVar15 + dVar6 * dVar6);
  dVar8 = dVar10 * dVar13;
  if (dVar17 < (double)((ulong)(dVar10 * dVar13) & _LC18)) {
    if (dVar6 * dVar18 - dVar15 * dVar11 <= 0.0) {
      dVar17 = (double)((ulong)dVar17 ^ _LC20);
    }
    *param_4 = ((param_1 - *(double *)(param_3 + 0x20)) * dVar18 +
               (param_2 - *(double *)(param_3 + 0x28)) * dVar11) /
               (dVar18 * dVar18 + dVar11 * dVar11);
    dVar8 = dVar17;
  }
  if (0 < iVar2) {
    pdVar1 = pdVar3 + iVar2;
    do {
      dVar10 = *pdVar3;
      if ((0.0 < dVar10) && (dVar10 < dVar9)) {
        dVar18 = dVar19 * (dVar10 + dVar10) + dVar14 + dVar5 * dVar10 * dVar10;
        dVar6 = (dVar10 + dVar10) * dVar20 + local_a8 + dVar10 * dVar10 * dVar12;
        dVar11 = SQRT(dVar18 * dVar18 + dVar6 * dVar6);
        if (dVar11 <= (double)((ulong)dVar8 & uVar16)) {
          if ((dVar12 * dVar10 + dVar20) * dVar18 - (dVar5 * dVar10 + dVar19) * dVar6 <= 0.0) {
            dVar11 = (double)((ulong)dVar11 ^ uVar7);
          }
          *param_4 = dVar10;
          dVar8 = dVar11;
        }
      }
      pdVar3 = pdVar3 + 1;
    } while (pdVar3 != pdVar1);
  }
  dVar5 = *param_4;
  uVar7 = 0;
  if (dVar5 < 0.0) {
    if (_LC12 <= dVar5) goto LAB_001028f0;
    if (dVar13 == 0.0) {
      local_a8 = 0.0;
    }
    else {
      local_a8 = local_a8 / dVar13;
      dVar9 = dVar14 / dVar13;
    }
    if (*(code **)(*(long *)param_3 + 0x30) == direction) {
      auVar21 = direction(param_3,0.0);
    }
    else {
      auVar21 = (**(code **)(*(long *)param_3 + 0x30))();
      uVar16 = _LC18;
    }
    dVar12 = auVar21._8_8_;
    dVar5 = auVar21._0_8_;
    dVar19 = 0.0;
    dVar14 = SQRT(dVar5 * dVar5 + dVar12 * dVar12);
    if (dVar14 != 0.0) {
      dVar19 = dVar5 / dVar14;
      dVar9 = dVar9 * (dVar12 / dVar14);
    }
    param_2 = local_a8 * dVar19 + dVar9;
  }
  else {
    if (dVar5 <= dVar9) goto LAB_001029c4;
LAB_001028f0:
    param_2 = *(double *)(param_3 + 0x38) - param_2;
    param_1 = *(double *)(param_3 + 0x30) - param_1;
    dVar5 = SQRT(param_1 * param_1 + param_2 * param_2);
    if (dVar5 == 0.0) {
      local_a8 = 0.0;
      param_2 = dVar9;
    }
    else {
      local_a8 = param_1 / dVar5;
      param_2 = param_2 / dVar5;
    }
    if (*(code **)(*(long *)param_3 + 0x30) == direction) {
      auVar21 = direction(param_3,dVar9);
    }
    else {
      auVar21 = (**(code **)(*(long *)param_3 + 0x30))();
      uVar16 = _LC18;
    }
    dVar9 = auVar21._8_8_;
    dVar5 = auVar21._0_8_;
    dVar14 = 0.0;
    dVar12 = SQRT(dVar5 * dVar5 + dVar9 * dVar9);
    if (dVar12 != 0.0) {
      dVar14 = dVar5 / dVar12;
      param_2 = param_2 * (dVar9 / dVar12);
    }
    param_2 = local_a8 * dVar14 + param_2;
  }
  uVar7 = (ulong)param_2 & uVar16;
LAB_001029c4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar21._8_8_ = uVar7;
    auVar21._0_8_ = dVar8;
    return auVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::CubicSegment::signedDistance(msdfgen::Vector2, double&) const */

undefined1  [16]
msdfgen::CubicSegment::signedDistance
          (double param_1,double param_2,CubicSegment *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double local_88;
  
  dVar25 = *(double *)(param_3 + 0x18) - param_2;
  local_88 = *(double *)(param_3 + 0x10) - param_1;
  dVar18 = *(double *)(param_3 + 0x20) - *(double *)(param_3 + 0x10);
  pcVar3 = *(code **)(*(long *)param_3 + 0x30);
  dVar20 = *(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x18);
  dVar8 = *(double *)(param_3 + 0x38) - *(double *)(param_3 + 0x28);
  dVar5 = *(double *)(param_3 + 0x30) - *(double *)(param_3 + 0x20);
  dVar23 = dVar8 - dVar20;
  dVar22 = dVar5 - dVar18;
  dVar21 = ((*(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x30)) - dVar5) - dVar22;
  dVar5 = ((*(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x38)) - dVar8) - dVar23;
  if (pcVar3 == direction) {
    auVar26 = direction(param_3,0.0);
  }
  else {
    auVar26 = (*pcVar3)();
    pcVar3 = *(code **)(*(long *)param_3 + 0x30);
  }
  dVar8 = _LC0;
  dVar7 = auVar26._8_8_;
  dVar14 = auVar26._0_8_;
  dVar24 = _LC19;
  if (0.0 < dVar25 * dVar14 - local_88 * dVar7) {
    dVar24 = _LC0;
  }
  dVar6 = SQRT(dVar25 * dVar25 + local_88 * local_88);
  dVar24 = dVar24 * dVar6;
  *param_4 = (double)((ulong)(local_88 * dVar14 + dVar7 * dVar25) ^ _LC20) /
             (dVar7 * dVar7 + dVar14 * dVar14);
  if (pcVar3 == direction) {
    auVar26 = direction(param_3,dVar8);
  }
  else {
    auVar26 = (*pcVar3)(dVar8,param_3);
  }
  dVar7 = auVar26._8_8_;
  dVar14 = auVar26._0_8_;
  dVar13 = *(double *)(param_3 + 0x48) - param_2;
  dVar16 = *(double *)(param_3 + 0x40) - param_1;
  dVar10 = SQRT(dVar16 * dVar16 + dVar13 * dVar13);
  if (dVar10 < (double)((ulong)dVar24 & _LC18)) {
    dVar24 = dVar10;
    if (dVar13 * dVar14 - dVar7 * dVar16 <= 0.0) {
      dVar24 = (double)((ulong)dVar10 ^ _LC20);
    }
    *param_4 = ((dVar14 - dVar16) * dVar14 + (dVar7 - dVar13) * dVar7) /
               (dVar14 * dVar14 + dVar7 * dVar7);
  }
  dVar7 = _LC17;
  iVar4 = 0;
  dVar14 = dVar20 * _LC17;
  dVar10 = dVar18 * _LC17;
  dVar13 = _LC21 * dVar23;
  dVar16 = _LC21 * dVar22;
  do {
    iVar2 = 4;
    dVar15 = (double)iVar4 * __LC22;
    dVar11 = dVar15 * dVar7;
    dVar17 = dVar15 * dVar15 * dVar15;
    dVar9 = dVar20 * dVar11 + dVar25 + dVar11 * dVar15 * dVar23 + dVar17 * dVar5;
    dVar11 = local_88 + dVar11 * dVar18 + dVar11 * dVar15 * dVar22 + dVar17 * dVar21;
    do {
      dVar12 = _LC21 * dVar15;
      dVar17 = dVar15 * dVar7 * dVar15;
      dVar19 = dVar12 * dVar23 + dVar14 + dVar17 * dVar5;
      dVar17 = dVar12 * dVar22 + dVar10 + dVar17 * dVar21;
      dVar15 = dVar15 - (dVar11 * dVar17 + dVar9 * dVar19) /
                        ((dVar12 * dVar21 + dVar16) * dVar11 + (dVar12 * dVar5 + dVar13) * dVar9 +
                        dVar17 * dVar17 + dVar19 * dVar19);
      if ((dVar15 <= 0.0) || (dVar8 <= dVar15)) break;
      dVar12 = dVar15 * dVar7;
      dVar11 = dVar15 * dVar15 * dVar15;
      dVar9 = dVar12 * dVar15 * dVar23 + dVar20 * dVar12 + dVar25 + dVar11 * dVar5;
      dVar11 = dVar12 * dVar18 + local_88 + dVar12 * dVar15 * dVar22 + dVar11 * dVar21;
      dVar12 = SQRT(dVar11 * dVar11 + dVar9 * dVar9);
      if (dVar12 < (double)((ulong)dVar24 & _LC18)) {
        dVar24 = dVar12;
        if (dVar17 * dVar9 - dVar19 * dVar11 <= 0.0) {
          dVar24 = (double)((ulong)dVar12 ^ _LC20);
        }
        *param_4 = dVar15;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar4 = iVar4 + 1;
    if (iVar4 == 5) {
      dVar5 = *param_4;
      if (dVar5 < 0.0) {
        if (dVar5 < _LC12) {
          if (dVar6 == 0.0) {
            local_88 = 0.0;
          }
          else {
            dVar8 = dVar25 / dVar6;
            local_88 = local_88 / dVar6;
          }
          if (*(code **)(*(long *)param_3 + 0x30) == direction) {
            auVar26 = direction(param_3,0.0);
          }
          else {
            auVar26 = (**(code **)(*(long *)param_3 + 0x30))();
          }
          dVar18 = auVar26._8_8_;
          dVar5 = auVar26._0_8_;
          dVar20 = 0.0;
          dVar21 = SQRT(dVar5 * dVar5 + dVar18 * dVar18);
          if (dVar21 != 0.0) {
            dVar20 = dVar5 / dVar21;
            dVar8 = dVar8 * (dVar18 / dVar21);
          }
          auVar26._8_8_ = (ulong)(dVar20 * local_88 + dVar8) & _LC18;
          auVar26._0_8_ = dVar24;
          return auVar26;
        }
      }
      else if (dVar5 <= dVar8) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar24;
        return auVar27;
      }
      param_2 = *(double *)(param_3 + 0x48) - param_2;
      param_1 = *(double *)(param_3 + 0x40) - param_1;
      dVar5 = SQRT(param_1 * param_1 + param_2 * param_2);
      if (dVar5 == 0.0) {
        local_88 = 0.0;
        param_2 = dVar8;
      }
      else {
        local_88 = param_1 / dVar5;
        param_2 = param_2 / dVar5;
      }
      if (*(code **)(*(long *)param_3 + 0x30) == direction) {
        auVar26 = direction(param_3,dVar8);
      }
      else {
        auVar26 = (**(code **)(*(long *)param_3 + 0x30))();
      }
      dVar8 = auVar26._8_8_;
      dVar5 = auVar26._0_8_;
      dVar20 = 0.0;
      dVar18 = SQRT(dVar5 * dVar5 + dVar8 * dVar8);
      if (dVar18 != 0.0) {
        dVar20 = dVar5 / dVar18;
        param_2 = param_2 * (dVar8 / dVar18);
      }
      auVar1._8_8_ = (ulong)(local_88 * dVar20 + param_2) & _LC18;
      auVar1._0_8_ = dVar24;
      return auVar1;
    }
  } while( true );
}



/* msdfgen::EdgeSegment::create(msdfgen::Vector2, msdfgen::Vector2, msdfgen::EdgeColor) */

void msdfgen::EdgeSegment::create
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *(undefined4 *)(puVar1 + 1) = param_5;
  *puVar1 = &PTR__LinearSegment_00103e88;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  return;
}



/* msdfgen::EdgeSegment::create(msdfgen::Vector2, msdfgen::Vector2, msdfgen::Vector2,
   msdfgen::EdgeColor) */

void msdfgen::EdgeSegment::create
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  
  if ((param_3 - param_1) * (param_6 - param_4) - (param_4 - param_2) * (param_5 - param_3) != 0.0)
  {
    puVar1 = (undefined8 *)operator_new(0x40);
    *(undefined4 *)(puVar1 + 1) = param_7;
    *puVar1 = &PTR__QuadraticSegment_00103f18;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    puVar1[6] = param_5;
    puVar1[7] = param_6;
    return;
  }
  puVar1 = (undefined8 *)operator_new(0x30);
  *(undefined4 *)(puVar1 + 1) = param_7;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *puVar1 = &PTR__LinearSegment_00103e88;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  return;
}



/* msdfgen::EdgeSegment::create(msdfgen::Vector2, msdfgen::Vector2, msdfgen::Vector2,
   msdfgen::Vector2, msdfgen::EdgeColor) */

void msdfgen::EdgeSegment::create
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,undefined4 param_9)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  
  if (((param_3 - param_1) * (param_6 - param_4) - (param_4 - param_2) * (param_5 - param_3) == 0.0)
     && ((param_8 - param_6) * (param_5 - param_3) - (param_6 - param_4) * (param_7 - param_5) ==
         0.0)) {
    puVar1 = (undefined8 *)operator_new(0x30);
    *(undefined4 *)(puVar1 + 1) = param_9;
    *puVar1 = &PTR__LinearSegment_00103e88;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = param_7;
    puVar1[5] = param_8;
    return;
  }
  dVar4 = param_4 * _LC23 - param_2 * _LC12;
  dVar3 = param_3 * _LC23 - param_1 * _LC12;
  if ((param_5 * _LC23 - param_7 * _LC12 == dVar3) && (param_6 * _LC23 - param_8 * _LC12 == dVar4))
  {
    puVar1 = (undefined8 *)operator_new(0x40);
    *(undefined4 *)(puVar1 + 1) = param_9;
    *puVar1 = &PTR__QuadraticSegment_00103f18;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = dVar3;
    puVar1[5] = dVar4;
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    return;
  }
  puVar1 = (undefined8 *)operator_new(0x50);
  *(undefined4 *)(puVar1 + 1) = param_9;
  pauVar2 = (undefined1 (*) [16])(puVar1 + 2);
  *puVar1 = &PTR__CubicSegment_00103fa8;
  do {
    *pauVar2 = (undefined1  [16])0x0;
    pauVar2 = pauVar2 + 1;
  } while (pauVar2 != (undefined1 (*) [16])(puVar1 + 10));
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  puVar1[6] = param_5;
  puVar1[7] = param_6;
  puVar1[8] = param_7;
  puVar1[9] = param_8;
  return;
}



/* msdfgen::LinearSegment::LinearSegment(msdfgen::Vector2, msdfgen::Vector2, msdfgen::EdgeColor) */

void __thiscall
msdfgen::LinearSegment::LinearSegment
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          LinearSegment *this,undefined4 param_6)

{
  *(undefined4 *)(this + 8) = param_6;
  *(undefined ***)this = &PTR__LinearSegment_00103e88;
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = param_4;
  return;
}



/* msdfgen::QuadraticSegment::QuadraticSegment(msdfgen::Vector2, msdfgen::Vector2, msdfgen::Vector2,
   msdfgen::EdgeColor) */

void __thiscall
msdfgen::QuadraticSegment::QuadraticSegment
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,QuadraticSegment *this,undefined4 param_8)

{
  *(undefined4 *)(this + 8) = param_8;
  *(undefined ***)this = &PTR__QuadraticSegment_00103f18;
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = param_4;
  *(undefined8 *)(this + 0x30) = param_5;
  *(undefined8 *)(this + 0x38) = param_6;
  return;
}



/* msdfgen::CubicSegment::CubicSegment(msdfgen::Vector2, msdfgen::Vector2, msdfgen::Vector2,
   msdfgen::Vector2, msdfgen::EdgeColor) */

void __thiscall
msdfgen::CubicSegment::CubicSegment
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          CubicSegment *this,undefined4 param_10)

{
  CubicSegment *pCVar1;
  
  *(undefined4 *)(this + 8) = param_10;
  *(undefined ***)this = &PTR__CubicSegment_00103fa8;
  pCVar1 = this + 0x10;
  do {
    *(undefined1 (*) [16])pCVar1 = (undefined1  [16])0x0;
    pCVar1 = pCVar1 + 0x10;
  } while (pCVar1 != this + 0x50);
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = param_4;
  *(undefined8 *)(this + 0x30) = param_5;
  *(undefined8 *)(this + 0x38) = param_6;
  *(undefined8 *)(this + 0x40) = param_7;
  *(undefined8 *)(this + 0x48) = param_8;
  return;
}



/* msdfgen::LinearSegment::length() const */

double __thiscall msdfgen::LinearSegment::length(LinearSegment *this)

{
  return SQRT((*(double *)(this + 0x20) - *(double *)(this + 0x10)) *
              (*(double *)(this + 0x20) - *(double *)(this + 0x10)) +
              (*(double *)(this + 0x28) - *(double *)(this + 0x18)) *
              (*(double *)(this + 0x28) - *(double *)(this + 0x18)));
}



/* msdfgen::QuadraticSegment::length() const */

double __thiscall msdfgen::QuadraticSegment::length(QuadraticSegment *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = *(double *)(this + 0x28) - *(double *)(this + 0x18);
  dVar8 = *(double *)(this + 0x20) - *(double *)(this + 0x10);
  dVar2 = (*(double *)(this + 0x38) - *(double *)(this + 0x28)) - dVar7;
  dVar1 = (*(double *)(this + 0x30) - *(double *)(this + 0x20)) - dVar8;
  dVar3 = dVar8 * dVar8 + dVar7 * dVar7;
  dVar6 = SQRT(dVar3);
  dVar5 = dVar1 * dVar8 + dVar2 * dVar7;
  dVar4 = dVar1 * dVar1 + dVar2 * dVar2;
  dVar2 = dVar2 * dVar8 - dVar1 * dVar7;
  dVar1 = dVar3 + dVar5 + dVar5 + dVar4;
  dVar3 = SQRT(dVar4);
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  dVar7 = log((dVar3 * dVar1 + dVar5 + dVar4) / (dVar6 * dVar3 + dVar5));
  return (((dVar4 + dVar5) * dVar1 - dVar6 * dVar5) * dVar3 + dVar2 * dVar2 * dVar7) /
         (dVar3 * dVar4);
}



/* msdfgen::QuadraticSegment::convertToCubic() const */

void __thiscall msdfgen::QuadraticSegment::convertToCubic(QuadraticSegment *this)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  double dVar13;
  double dVar14;
  
  puVar11 = (undefined8 *)operator_new(0x50);
  dVar10 = _LC6;
  dVar2 = *(double *)(this + 0x20);
  dVar3 = *(double *)(this + 0x28);
  dVar4 = *(double *)(this + 0x10);
  dVar5 = *(double *)(this + 0x18);
  uVar1 = *(undefined4 *)(this + 8);
  *puVar11 = &PTR__CubicSegment_00103fa8;
  dVar9 = _LC14;
  dVar8 = _LC5;
  dVar6 = *(double *)(this + 0x30);
  dVar7 = *(double *)(this + 0x38);
  *(undefined4 *)(puVar11 + 1) = uVar1;
  pauVar12 = (undefined1 (*) [16])(puVar11 + 2);
  dVar13 = _LC2 * dVar6;
  dVar14 = _LC2 * dVar7;
  do {
    *pauVar12 = (undefined1  [16])0x0;
    pauVar12 = pauVar12 + 1;
  } while ((undefined1 (*) [16])(puVar11 + 10) != pauVar12);
  puVar11[2] = dVar4;
  puVar11[3] = dVar5;
  puVar11[4] = dVar10 * dVar2 + dVar9 * dVar4;
  puVar11[5] = dVar10 * dVar3 + dVar9 * dVar5;
  puVar11[6] = dVar13 + dVar8 * dVar2;
  puVar11[7] = dVar14 + dVar8 * dVar3;
  puVar11[8] = dVar6;
  puVar11[9] = dVar7;
  return;
}



/* msdfgen::CubicSegment::~CubicSegment() */

void __thiscall msdfgen::CubicSegment::~CubicSegment(CubicSegment *this)

{
  return;
}



/* msdfgen::QuadraticSegment::~QuadraticSegment() */

void __thiscall msdfgen::QuadraticSegment::~QuadraticSegment(QuadraticSegment *this)

{
  return;
}



/* msdfgen::LinearSegment::~LinearSegment() */

void __thiscall msdfgen::LinearSegment::~LinearSegment(LinearSegment *this)

{
  return;
}



/* msdfgen::CubicSegment::~CubicSegment() */

void __thiscall msdfgen::CubicSegment::~CubicSegment(CubicSegment *this)

{
  operator_delete(this,0x50);
  return;
}



/* msdfgen::QuadraticSegment::~QuadraticSegment() */

void __thiscall msdfgen::QuadraticSegment::~QuadraticSegment(QuadraticSegment *this)

{
  operator_delete(this,0x40);
  return;
}



/* msdfgen::LinearSegment::~LinearSegment() */

void __thiscall msdfgen::LinearSegment::~LinearSegment(LinearSegment *this)

{
  operator_delete(this,0x30);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::LinearSegment::~LinearSegment() */

void __thiscall msdfgen::LinearSegment::~LinearSegment(LinearSegment *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::QuadraticSegment::~QuadraticSegment() */

void __thiscall msdfgen::QuadraticSegment::~QuadraticSegment(QuadraticSegment *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::CubicSegment::~CubicSegment() */

void __thiscall msdfgen::CubicSegment::~CubicSegment(CubicSegment *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


