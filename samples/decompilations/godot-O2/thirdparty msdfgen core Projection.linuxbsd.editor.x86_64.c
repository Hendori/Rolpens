
/* msdfgen::Projection::Projection() */

void __thiscall msdfgen::Projection::Projection(Projection *this)

{
  undefined8 uVar1;
  
  uVar1 = _LC1;
  *(undefined8 *)this = _LC1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return;
}



/* msdfgen::Projection::Projection(msdfgen::Vector2 const&, msdfgen::Vector2 const&) */

void __thiscall msdfgen::Projection::Projection(Projection *this,Vector2 *param_1,Vector2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar3;
  return;
}



/* msdfgen::Projection::project(msdfgen::Vector2 const&) const */

undefined1  [16] __thiscall msdfgen::Projection::project(Projection *this,Vector2 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (*(double *)(param_1 + 8) + *(double *)(this + 0x18)) * *(double *)(this + 8);
  auVar1._0_8_ = (*(double *)param_1 + *(double *)(this + 0x10)) * *(double *)this;
  return auVar1;
}



/* msdfgen::Projection::unproject(msdfgen::Vector2 const&) const */

undefined1  [16] __thiscall msdfgen::Projection::unproject(Projection *this,Vector2 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = divpd(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])this);
  auVar1._8_8_ = auVar2._8_8_ - *(double *)(this + 0x18);
  auVar1._0_8_ = auVar2._0_8_ - *(double *)(this + 0x10);
  return auVar1;
}



/* msdfgen::Projection::projectVector(msdfgen::Vector2 const&) const */

undefined1  [16] __thiscall msdfgen::Projection::projectVector(Projection *this,Vector2 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(double *)(this + 8) * *(double *)(param_1 + 8);
  auVar1._0_8_ = *(double *)this * *(double *)param_1;
  return auVar1;
}



/* msdfgen::Projection::unprojectVector(msdfgen::Vector2 const&) const */

undefined1  [16] __thiscall msdfgen::Projection::unprojectVector(Projection *this,Vector2 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = divpd(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])this);
  return auVar1;
}



/* msdfgen::Projection::projectX(double) const */

double __thiscall msdfgen::Projection::projectX(Projection *this,double param_1)

{
  return (param_1 + *(double *)(this + 0x10)) * *(double *)this;
}



/* msdfgen::Projection::projectY(double) const */

double __thiscall msdfgen::Projection::projectY(Projection *this,double param_1)

{
  return (param_1 + *(double *)(this + 0x18)) * *(double *)(this + 8);
}



/* msdfgen::Projection::unprojectX(double) const */

double __thiscall msdfgen::Projection::unprojectX(Projection *this,double param_1)

{
  return param_1 / *(double *)this - *(double *)(this + 0x10);
}



/* msdfgen::Projection::unprojectY(double) const */

double __thiscall msdfgen::Projection::unprojectY(Projection *this,double param_1)

{
  return param_1 / *(double *)(this + 8) - *(double *)(this + 0x18);
}


