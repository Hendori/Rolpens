
/* msdfgen::DistanceMapping::inverse(msdfgen::Range) */

void __thiscall msdfgen::DistanceMapping::inverse(double param_1,double param_2)

{
  if (param_2 - param_1 != 0.0) {
    return;
  }
  return;
}



/* msdfgen::DistanceMapping::DistanceMapping() */

void __thiscall msdfgen::DistanceMapping::DistanceMapping(DistanceMapping *this)

{
  *(undefined8 *)this = _LC2;
  *(undefined8 *)(this + 8) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::DistanceMapping::DistanceMapping(msdfgen::Range) */

void __thiscall
msdfgen::DistanceMapping::DistanceMapping(double param_1,double param_2,DistanceMapping *this)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1 ^ __LC3;
  *(double *)this = _LC2 / (param_2 - param_1);
  *(ulong *)(this + 8) = uVar1;
  return;
}



/* msdfgen::DistanceMapping::TEMPNAMEPLACEHOLDERVALUE(double) const */

double __thiscall msdfgen::DistanceMapping::operator()(DistanceMapping *this,double param_1)

{
  return (param_1 + *(double *)(this + 8)) * *(double *)this;
}



/* msdfgen::DistanceMapping::TEMPNAMEPLACEHOLDERVALUE(msdfgen::DistanceMapping::Delta) const */

double __thiscall msdfgen::DistanceMapping::operator()(double param_1,DistanceMapping *this)

{
  return param_1 * *(double *)this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::DistanceMapping::inverse() const */

undefined1  [16] __thiscall msdfgen::DistanceMapping::inverse(DistanceMapping *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = _LC2 / *(double *)this;
  auVar1._8_8_ = (double)((ulong)*(double *)this ^ __LC3) * *(double *)(this + 8);
  return auVar1;
}


