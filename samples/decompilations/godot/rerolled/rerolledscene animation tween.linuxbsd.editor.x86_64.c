/* linear::in(float, float, float, float) */

float linear::in(float param_1,float param_2,float param_3,float param_4)

{
  return (param_3 * param_1) / param_4 + param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quad::out(float, float, float, float) */

float quad::out(float param_1,float param_2,float param_3,float param_4)

{
  return (param_1 / param_4 - _LC24._4_4_) * (float)((uint)param_3 ^ __LC0) * (param_1 / param_4) +
         param_2;
}



/* cubic::in(float, float, float, float) */

float cubic::in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4;
  return fVar1 * param_3 * fVar1 * fVar1 + param_2;
}



/* cubic::out(float, float, float, float) */

float cubic::out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 - _LC2;
  return (fVar1 * fVar1 * fVar1 + _LC2) * param_3 + param_2;
}



/* cubic::in_out(float, float, float, float) */

float cubic::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / (param_4 * _LC3);
  if (_LC2 <= fVar1) {
    fVar1 = fVar1 - _LC24._4_4_;
    return (fVar1 * fVar1 * fVar1 + _LC24._4_4_) * param_3 * _LC3 + param_2;
  }
  return param_3 * _LC3 * fVar1 * fVar1 * fVar1 + param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bounce::out(float, float, float, float) */

ulong bounce::out(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_XMM2_Db;
  float fVar1;
  
  fVar1 = param_1 / param_4;
  if (fVar1 < _LC4) {
    return CONCAT44(in_XMM2_Db,param_3 * _LC5 * fVar1 * fVar1 + param_2);
  }
  if (_LC6 <= fVar1) {
    if (_LC9 <= (double)fVar1) {
      return CONCAT44(in_XMM2_Db,
                      param_3 * (_LC5 * (fVar1 - __LC12) * (fVar1 - __LC12) + __LC13) + param_2);
    }
    return (ulong)(uint)((_LC5 * (fVar1 - __LC10) * (fVar1 - __LC10) + __LC11) * param_3 + param_2);
  }
  return (ulong)(uint)((_LC5 * (fVar1 - __LC7) * (fVar1 - __LC7) + __LC8) * param_3 + param_2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* back::in(float, float, float, float) */

float back::in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4;
  return (fVar1 * _LC14 - __LC15) * param_3 * fVar1 * fVar1 + param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* back::out(float, float, float, float) */

float back::out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 - _LC2;
  return ((_LC14 * fVar1 + __LC15) * fVar1 * fVar1 + _LC2) * param_3 + param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* back::in_out(float, float, float, float) */

ulong back::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 in_XMM0_Db;
  
  fVar1 = param_1 / (param_4 * _LC3);
  if (_LC2 <= fVar1) {
    fVar1 = fVar1 - _LC24._4_4_;
    return (ulong)(uint)(((_LC16 * fVar1 + __LC17) * fVar1 * fVar1 + _LC24._4_4_) * param_3 * _LC3 +
                        param_2);
  }
  return CONCAT44(in_XMM0_Db,fVar1 * fVar1 * (_LC16 * fVar1 - __LC17) * param_3 * _LC3 + param_2);
}



/* Tweener::set_tween(Ref<Tween> const&) */

void __thiscall Tweener::set_tween(Tweener *this,Ref *param_1)

{
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(*(long *)param_1 + 0x60);
  return;
}



/* Tweener::start() */

void __thiscall Tweener::start(Tweener *this)

{
  *(undefined8 *)(this + 0x188) = 0;
  this[400] = (Tweener)0x0;
  return;
}



/* Tween::pause() */

void __thiscall Tween::pause(Tween *this)

{
  this[0x1cb] = (Tween)0x0;
  return;
}



/* Tween::kill() */

void __thiscall Tween::kill(Tween *this)

{
  *(undefined2 *)(this + 0x1cb) = 0x100;
  return;
}



/* Tween::is_running() */

Tween __thiscall Tween::is_running(Tween *this)

{
  return this[0x1cb];
}



/* Tween::is_valid() */

Tween __thiscall Tween::is_valid(Tween *this)

{
  return this[0x1cd];
}



/* Tween::get_loops_left() const */

int __thiscall Tween::get_loops_left(Tween *this)

{
  if (0 < *(int *)(this + 0x1bc)) {
    return *(int *)(this + 0x1bc) - *(int *)(this + 0x1c0);
  }
  return -1;
}



/* Tween::get_total_time() const */

undefined8 __thiscall Tween::get_total_time(Tween *this)

{
  return *(undefined8 *)(this + 0x1b0);
}



/* PropertyTweener::set_tween(Ref<Tween> const&) */

void __thiscall PropertyTweener::set_tween(PropertyTweener *this,Ref *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(lVar1 + 0x60);
  if (*(int *)(this + 0x220) == 0xc) {
    *(undefined4 *)(this + 0x220) = *(undefined4 *)(lVar1 + 0x184);
  }
  if (*(int *)(this + 0x224) != 4) {
    return;
  }
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(lVar1 + 0x188);
  return;
}



/* MethodTweener::set_tween(Ref<Tween> const&) */

void __thiscall MethodTweener::set_tween(MethodTweener *this,Ref *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(lVar1 + 0x60);
  if (*(int *)(this + 0x1a8) == 0xc) {
    *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(lVar1 + 0x184);
  }
  if (*(int *)(this + 0x1ac) != 4) {
    return;
  }
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(lVar1 + 0x188);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sine::out(float, float, float, float) */

undefined8 sine::out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = sin((double)(param_1 / param_4) * __LC20);
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)((double)param_3 * dVar1 + (double)param_2);
  return auVar2._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* quad::in_out(float, float, float, float) */

undefined8 quad::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  fVar1 = param_1 / param_4 + param_1 / param_4;
  if (_LC2 <= fVar1) {
    auVar2._0_4_ = ((fVar1 - __LC21) * (fVar1 - _LC2) - _LC2) * param_3 * __LC22 + param_2;
    auVar2._4_12_ = in_register_00001204;
    return auVar2._0_8_;
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = param_3 * _LC3 * fVar1 * fVar1 + param_2;
  return auVar3._0_8_;
}



/* quad::in(float, float, float, float) */

undefined8 quad::in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  
  dVar1 = (double)(param_1 / param_4) * (double)(param_1 / param_4) * (double)param_3 +
          (double)param_2;
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quart::in_out(float, float, float, float) */

undefined8 quart::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  fVar1 = param_1 / param_4 + param_1 / param_4;
  if (fVar1 < _LC2) {
    dVar2 = pow((double)fVar1,_LC23);
    fVar1 = _LC3;
  }
  else {
    dVar2 = pow((double)(fVar1 - _LC24._4_4_),_LC23);
    dVar2 = dVar2 - (double)CONCAT44(_LC24._4_4_,(undefined4)_LC24);
    fVar1 = __LC22;
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)((double)(param_3 * fVar1) * dVar2 + (double)param_2);
  return auVar3._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quart::out(float, float, float, float) */

undefined8 quart::out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = pow((double)(param_1 / param_4 - _LC2),_LC23);
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)((double)(float)((uint)param_3 ^ __LC0) * (dVar1 - _LC25) + (double)param_2)
  ;
  return auVar2._0_8_;
}



/* quart::in(float, float, float, float) */

undefined8 quart::in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = pow((double)(param_1 / param_4),_LC23);
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)((double)param_3 * dVar1 + (double)param_2);
  return auVar2._0_8_;
}



/* quint::in_out(float, float, float, float) */

undefined8 quint::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar3 = param_3 * _LC3;
  fVar1 = param_1 / param_4 + param_1 / param_4;
  if (fVar1 < _LC2) {
    dVar2 = pow((double)fVar1,_LC26);
  }
  else {
    dVar2 = pow((double)(fVar1 - _LC24._4_4_),_LC26);
    dVar2 = dVar2 + (double)CONCAT44(_LC24._4_4_,(undefined4)_LC24);
  }
  dVar2 = dVar2 * (double)fVar3 + (double)param_2;
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}



/* quint::out(float, float, float, float) */

undefined8 quint::out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  
  dVar1 = pow((double)(param_1 / param_4 - _LC2),_LC26);
  dVar1 = (dVar1 + _LC25) * (double)param_3 + (double)param_2;
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* quint::in(float, float, float, float) */

undefined8 quint::in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = pow((double)(param_1 / param_4),_LC26);
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)((double)param_3 * dVar1 + (double)param_2);
  return auVar2._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* spring::out(float, float, float, float) */

undefined8 spring::out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double __x;
  double dVar3;
  
  dVar3 = (double)(param_1 / param_4);
  dVar1 = sin((_LC27 * dVar3 * dVar3 * dVar3 + __LC28) * dVar3 * __LC29);
  __x = (double)(_LC2 - param_1 / param_4);
  dVar2 = pow(__x,_LC30);
  dVar1 = (dVar2 * dVar1 + dVar3) * (__x * __LC31 + _LC25);
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1 * param_3 + param_2);
}



/* spring::in(float, float, float, float) */

float spring::in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (float)out(param_4 - param_1,0.0,param_3,param_4);
  return param_2 + (param_3 - fVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* circ::in_out(float, float, float, float) */

undefined8 circ::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar3 [12];
  undefined1 auVar2 [16];
  undefined1 extraout_var [12];
  float fVar4;
  undefined4 uVar5;
  
  fVar1 = param_1 / (param_4 * _LC3);
  if (_LC2 <= fVar1) {
    fVar4 = param_3 * _LC3;
    fVar1 = _LC2 - (fVar1 - _LC24._4_4_) * (fVar1 - _LC24._4_4_);
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
      auVar3 = extraout_var;
    }
    else {
      fVar1 = SQRT(fVar1);
      auVar3 = (undefined1  [12])0x0;
    }
    auVar2._0_4_ = (fVar1 + _LC2) * fVar4 + param_2;
    auVar2._4_12_ = auVar3;
    return auVar2._0_8_;
  }
  uVar5 = 0;
  fVar4 = (float)((uint)param_3 ^ __LC0) * _LC3;
  fVar1 = _LC2 - fVar1 * fVar1;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
    uVar5 = extraout_XMM0_Db;
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  return CONCAT44(uVar5,(fVar1 - _LC2) * fVar4 + param_2);
}



/* circ::out(float, float, float, float) */

ulong circ::out(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_XMM2_Db;
  float fVar1;
  
  fVar1 = param_1 / param_4 - _LC2;
  fVar1 = _LC2 - fVar1 * fVar1;
  if (0.0 <= fVar1) {
    return CONCAT44(in_XMM2_Db,param_3 * SQRT(fVar1) + param_2);
  }
  fVar1 = sqrtf(fVar1);
  return (ulong)(uint)(param_3 * fVar1 + param_2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* circ::in(float, float, float, float) */

float circ::in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((uint)param_3 ^ __LC0);
  fVar1 = _LC2 - (param_1 / param_4) * (param_1 / param_4);
  if (0.0 <= fVar1) {
    return (SQRT(fVar1) - _LC2) * fVar2 + param_2;
  }
  fVar1 = sqrtf(fVar1);
  return (fVar1 - _LC2) * fVar2 + param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sine::in_out(float, float, float, float) */

undefined8 sine::in_out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = cos(((double)param_1 * __LC29) / (double)param_4);
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)((double)(param_3 * __LC22) * (dVar1 - _LC25) + (double)param_2);
  return auVar2._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sine::in(float, float, float, float) */

undefined8 sine::in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  
  dVar1 = cos((double)(param_1 / param_4) * __LC20);
  dVar1 = (double)(float)((uint)param_3 ^ __LC0) * dVar1 + (double)param_3 + (double)param_2;
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* cubic::out_in(float, float, float, float) */

float cubic::out_in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    fVar2 = (param_1 + param_1) / param_4 - _LC2;
    return (fVar2 * fVar2 * fVar2 + _LC2) * fVar1 + param_2;
  }
  fVar2 = ((param_1 + param_1) - param_4) / param_4;
  return fVar1 * fVar2 * fVar2 * fVar2 + fVar1 + param_2;
}



/* bounce::in_out(float, float, float, float) */

undefined8 bounce::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 in_XMM2_Db;
  float fVar3;
  
  fVar3 = param_3 * _LC3;
  if (_LC3 * param_4 <= param_1) {
    uVar2 = out((param_1 + param_1) - param_4,fVar3 + param_2,fVar3,param_4);
    return uVar2;
  }
  fVar1 = (float)out(param_4 - (param_1 + param_1),0.0,fVar3,param_4);
  return CONCAT44(in_XMM2_Db,(fVar3 - fVar1) + param_2);
}



/* bounce::out_in(float, float, float, float) */

ulong bounce::out_in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    uVar2 = out(param_1 + param_1,param_2,fVar3,param_4);
    return uVar2;
  }
  fVar4 = param_2 + fVar3;
  fVar1 = (float)out(param_4 - ((param_1 + param_1) - param_4),0.0,fVar3,param_4);
  return (ulong)(uint)((fVar3 - fVar1) + fVar4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* back::out_in(float, float, float, float) */

ulong back::out_in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 in_XMM2_Db;
  float fVar2;
  
  fVar1 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    fVar2 = (param_1 + param_1) / param_4 - _LC2;
    return (ulong)(uint)(((_LC14 * fVar2 + __LC15) * fVar2 * fVar2 + _LC2) * fVar1 + param_2);
  }
  fVar2 = ((param_1 + param_1) - param_4) / param_4;
  return CONCAT44(in_XMM2_Db,fVar1 * fVar2 * fVar2 * (fVar2 * _LC14 - __LC15) + fVar1 + param_2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sine::out_in(float, float, float, float) */

undefined8 sine::out_in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar7 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    dVar1 = sin((double)((param_1 + param_1) / param_4) * __LC20);
    auVar2._0_8_ = dVar1 * (double)fVar7 + (double)param_2;
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar3._4_12_ = auVar2._4_12_;
    auVar3._0_4_ = (float)auVar2._0_8_;
    return auVar3._0_8_;
  }
  dVar1 = cos((double)(((param_1 + param_1) - param_4) / param_4) * __LC20);
  auVar4._0_4_ = (float)((uint)fVar7 ^ __LC0);
  auVar4._4_4_ = _UNK_0012c8b4;
  auVar4._8_4_ = _UNK_0012c8b8;
  auVar4._12_4_ = _UNK_0012c8bc;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = (double)auVar4._0_4_ * dVar1 + (double)fVar7 + (double)(fVar7 + param_2);
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = (float)auVar5._0_8_;
  return auVar6._0_8_;
}



/* Tween::play() */

void __thiscall Tween::play(Tween *this)

{
  if (this[0x1cd] != (Tween)0x0) {
    if (this[0x1cc] == (Tween)0x0) {
      this[0x1cb] = (Tween)0x1;
    }
    else {
      _err_print_error(&_LC36,"scene/animation/tween.cpp",0xd1,"Condition \"dead\" is true.",
                       "Can\'t play finished Tween, use stop() first to reset its state.",0,0);
    }
    return;
  }
  _err_print_error(&_LC36,"scene/animation/tween.cpp",0xd0,"Condition \"!valid\" is true.",
                   "Tween invalid. Either finished or created outside scene tree.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quad::out_in(float, float, float, float) */

undefined8 quad::out_in(float param_1,float param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  uint in_XMM2_Db;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  float fVar5;
  
  fVar4 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    fVar5 = (param_1 + param_1) / param_4;
    auVar1._4_4_ = in_XMM2_Db ^ _UNK_0012c8b4;
    auVar1._0_4_ = (uint)fVar4 ^ __LC0;
    auVar1._8_4_ = in_XMM2_Dc ^ _UNK_0012c8b8;
    auVar1._12_4_ = in_XMM2_Dd ^ _UNK_0012c8bc;
    auVar2._4_12_ = auVar1._4_12_;
    auVar2._0_4_ = (float)((uint)fVar4 ^ __LC0) * fVar5 * (fVar5 - _LC24._4_4_) + param_2;
    return auVar2._0_8_;
  }
  fVar5 = ((param_1 + param_1) - param_4) / param_4;
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = fVar5 * fVar5 * fVar4 + param_2 + fVar4;
  return auVar3._0_8_;
}



/* quint::out_in(float, float, float, float) */

undefined8 quint::out_in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  double dVar7;
  
  fVar6 = param_3 * _LC3;
  dVar7 = (double)fVar6;
  if (param_1 < _LC3 * param_4) {
    dVar1 = pow((double)((param_1 + param_1) / param_4 - _LC2),_LC26);
    auVar2._0_8_ = (dVar1 + _LC25) * dVar7 + (double)param_2;
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar3._4_12_ = auVar2._4_12_;
    auVar3._0_4_ = (float)auVar2._0_8_;
    return auVar3._0_8_;
  }
  dVar1 = pow((double)(((param_1 + param_1) - param_4) / param_4),_LC26);
  auVar4._0_8_ = dVar1 * dVar7 + (double)(fVar6 + param_2);
  auVar4._8_8_ = extraout_XMM0_Qb_00;
  auVar5._4_12_ = auVar4._4_12_;
  auVar5._0_4_ = (float)auVar4._0_8_;
  return auVar5._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* elastic::in_out(float, float, float, float) */

ulong elastic::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM2_Db;
  undefined8 in_XMM2_Qb;
  float fVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  uVar5 = CONCAT44(in_XMM1_Db,param_2);
  if (param_1 != 0.0) {
    fVar1 = param_1 / (_LC3 * param_4);
    if (fVar1 != _LC24._4_4_) {
      fVar9 = _LC39 * param_4;
      fVar4 = fVar1 - _LC2;
      fVar8 = _LC40 * fVar9;
      if (fVar1 < _LC2) {
        dVar2 = pow((double)CONCAT44(_LC24._4_4_,(undefined4)_LC24),(double)(fVar4 * __LC41));
        dVar3 = sin(((double)(param_4 * fVar4 - fVar8) * __LC42) / (double)fVar9);
        return (ulong)(uint)(float)((double)(float)((double)param_3 * dVar2) * dVar3 * __LC43 +
                                   (double)param_2);
      }
      dVar2 = pow((double)CONCAT44(_LC24._4_4_,(undefined4)_LC24),(double)(fVar4 * __LC44));
      dVar3 = sin(((double)(param_4 * fVar4 - fVar8) * __LC42) / (double)fVar9);
      return (ulong)(uint)(float)((double)param_3 +
                                  (double)(float)(dVar2 * (double)param_3) * dVar3 * __LC45 +
                                 (double)param_2);
    }
    auVar6._4_4_ = in_XMM2_Db;
    auVar6._0_4_ = param_3;
    auVar6._8_4_ = (int)in_XMM2_Qb;
    auVar6._12_4_ = (int)((ulong)in_XMM2_Qb >> 0x20);
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = param_3 + param_2;
    uVar5 = auVar7._0_8_;
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* elastic::out(float, float, float, float) [clone .part.0] */

undefined8 elastic::out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined4 in_XMM2_Db;
  float fVar4;
  float fVar5;
  
  fVar4 = param_1 / param_4;
  if (fVar4 != _LC2) {
    fVar5 = param_4 * __LC46;
    dVar1 = pow(_LC24,(double)(fVar4 * __LC44));
    dVar2 = sin(((double)(param_4 * fVar4 - _LC40 * fVar5) * __LC42) / (double)fVar5);
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)((double)param_3 + dVar1 * (double)param_3 * dVar2 + (double)param_2);
    return auVar3._0_8_;
  }
  return CONCAT44(in_XMM2_Db,param_3 + param_2);
}



/* elastic::out(float, float, float, float) */

void elastic::out(float param_1,float param_2,float param_3,float param_4)

{
  if (param_1 != 0.0) {
    out(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* elastic::in(float, float, float, float) [clone .part.0] */

undefined8 elastic::in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined4 in_XMM2_Db;
  float fVar4;
  float fVar5;
  
  if (param_1 / param_4 != _LC2) {
    fVar4 = param_1 / param_4 - _LC2;
    fVar5 = param_4 * __LC46;
    dVar1 = pow(_LC24,(double)(fVar4 * __LC41));
    dVar2 = sin(((double)(param_4 * fVar4 - _LC40 * fVar5) * __LC42) / (double)fVar5);
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)((double)param_2 - (double)(float)((double)param_3 * dVar1) * dVar2);
    return auVar3._0_8_;
  }
  return CONCAT44(in_XMM2_Db,param_3 + param_2);
}



/* elastic::in(float, float, float, float) */

void elastic::in(float param_1,float param_2,float param_3,float param_4)

{
  if (param_1 != 0.0) {
    in(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* elastic::out_in(float, float, float, float) */

float elastic::out_in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 + param_1;
  fVar2 = param_3 * _LC3;
  if (_LC3 * param_4 <= param_1) {
    param_2 = param_2 + fVar2;
    if (fVar1 - param_4 != 0.0) {
      fVar1 = (float)in(fVar1 - param_4,param_2,fVar2,param_4);
      return fVar1;
    }
  }
  else if (fVar1 != 0.0) {
    fVar1 = (float)out(fVar1,param_2,fVar2,param_4);
    return fVar1;
  }
  return param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expo::in_out(float, float, float, float) */

ulong expo::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined4 in_XMM1_Db;
  ulong uVar5;
  undefined4 in_XMM2_Db;
  
  uVar5 = CONCAT44(in_XMM1_Db,param_2);
  if (param_1 != 0.0) {
    if (param_1 != param_4) {
      fVar3 = param_3 * _LC3;
      fVar1 = param_1 / param_4 + param_1 / param_4;
      fVar4 = fVar1 - _LC2;
      if (fVar1 < _LC2) {
        dVar2 = pow(_LC24,(double)(fVar4 * __LC41));
        return (ulong)(uint)(float)((dVar2 * (double)fVar3 + (double)param_2) -
                                   (double)param_3 * __LC47);
      }
      dVar2 = pow(_LC24,(double)(fVar4 * __LC44));
      dVar2 = (double)fVar3 * __LC48 * (_LC24 - dVar2) + (double)param_2;
      return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
    }
    uVar5 = CONCAT44(in_XMM2_Db,param_3 + param_2);
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expo::out_in(float, float, float, float) */

void expo::out_in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (_LC3 * param_4 <= param_1) {
    if (fVar1 - param_4 != 0.0) {
      pow(_LC24,(double)(((fVar1 - param_4) / param_4 - _LC2) * __LC41));
    }
    return;
  }
  if (param_4 != fVar1) {
    pow(_LC24,(double)((fVar1 * __LC44) / param_4));
    return;
  }
  return;
}



/* spring::out_in(float, float, float, float) */

ulong spring::out_in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    uVar2 = out(param_1 + param_1,param_2,fVar3,param_4);
    return uVar2;
  }
  fVar1 = (float)out(param_4 - ((param_1 + param_1) - param_4),0.0,fVar3,param_4);
  return (ulong)(uint)(param_2 + fVar3 + (fVar3 - fVar1));
}



/* spring::in_out(float, float, float, float) */

ulong spring::in_out(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = param_3 * _LC3;
  if (_LC3 * param_4 <= param_1) {
    uVar2 = out((param_1 + param_1) - param_4,param_2 + fVar3,fVar3,param_4);
    return uVar2;
  }
  fVar1 = (float)out(param_4 - (param_1 + param_1),0.0,fVar3,param_4);
  return (ulong)(uint)((fVar3 - fVar1) + param_2);
}



/* Error Object::emit_signal<>(StringName const&) [clone .isra.0] */

void __thiscall Object::emit_signal<>(Object *this,StringName *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0xd0))(this,param_1,0,0);
  if (Variant::needs_deinit != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::stop() */

void __thiscall Tween::stop(Tween *this)

{
  this[0x1cc] = (Tween)0x0;
  *(undefined2 *)(this + 0x1ca) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expo::out(float, float, float, float) */

undefined8 expo::out(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined4 in_XMM2_Db;
  
  if (param_1 != param_4) {
    dVar1 = pow(_LC24,(double)((param_1 * __LC44) / param_4));
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)((double)param_3 * __LC49 * (_LC25 - dVar1) + (double)param_2);
    return auVar2._0_8_;
  }
  return CONCAT44(in_XMM2_Db,param_3 + param_2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expo::in(float, float, float, float) */

ulong expo::in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  undefined4 in_XMM1_Db;
  
  if (param_1 != 0.0) {
    dVar1 = pow(_LC24,(double)((param_1 / param_4 - _LC2) * __LC41));
    return (ulong)(uint)(float)((dVar1 * (double)param_3 + (double)param_2) -
                               (double)param_3 * __LC50);
  }
  return CONCAT44(in_XMM1_Db,param_2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quart::out_in(float, float, float, float) */

undefined8 quart::out_in(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  float fVar2;
  
  fVar2 = param_3 * _LC3;
  if (param_1 < _LC3 * param_4) {
    dVar1 = pow((double)((param_1 + param_1) / param_4 - _LC2),_LC23);
    dVar1 = (double)param_2 + (double)(float)((uint)fVar2 ^ __LC0) * (dVar1 - _LC25);
    return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
  }
  dVar1 = pow((double)(((param_1 + param_1) - param_4) / param_4),_LC23);
  dVar1 = (double)fVar2 * dVar1 + (double)(fVar2 + param_2);
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* circ::out_in(float, float, float, float) */

ulong circ::out_in(float param_1,float param_2,float param_3,float param_4)

{
  undefined1 auVar2 [12];
  undefined1 auVar1 [16];
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  float fVar3;
  float fVar4;
  
  fVar3 = param_3 * _LC3;
  if (_LC3 * param_4 <= param_1) {
    param_2 = param_2 + fVar3;
    fVar3 = (float)((uint)fVar3 ^ __LC0);
    fVar4 = ((param_1 + param_1) - param_4) / param_4;
    fVar4 = _LC2 - fVar4 * fVar4;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      auVar2 = extraout_var_00;
    }
    else {
      fVar4 = SQRT(fVar4);
      auVar2 = (undefined1  [12])0x0;
    }
    fVar4 = fVar4 - _LC2;
  }
  else {
    fVar4 = (param_1 + param_1) / param_4 - _LC2;
    fVar4 = _LC2 - fVar4 * fVar4;
    if (0.0 <= fVar4) {
      return (ulong)(uint)(SQRT(fVar4) * fVar3 + param_2);
    }
    fVar4 = sqrtf(fVar4);
    auVar2 = extraout_var;
  }
  auVar1._0_4_ = fVar4 * fVar3 + param_2;
  auVar1._4_12_ = auVar2;
  return auVar1._0_8_;
}



/* SubtweenTweener::start() */

void __thiscall SubtweenTweener::start(SubtweenTweener *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x198);
  this[400] = (SubtweenTweener)0x0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined2 *)(lVar1 + 0x1ca) = 0;
  *(undefined1 *)(lVar1 + 0x1cc) = 0;
  *(undefined8 *)(lVar1 + 0x1b0) = 0;
  if (*(char *)(lVar1 + 0x1cd) != '\0') {
    *(undefined1 *)(lVar1 + 0x1cb) = 1;
    return;
  }
  _err_print_error(&_LC36,"scene/animation/tween.cpp",0xd0,"Condition \"!valid\" is true.",
                   "Tween invalid. Either finished or created outside scene tree.",0,0);
  return;
}



/* SubtweenTweener::set_delay(double) */

void SubtweenTweener::set_delay(double param_1)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(double *)(in_RSI + 0x1a0) = param_1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* CallbackTweener::set_delay(double) */

void CallbackTweener::set_delay(double param_1)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(double *)(in_RSI + 0x1a8) = param_1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* MethodTweener::set_ease(Tween::EaseType) */

long * MethodTweener::set_ease(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x1ac) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* MethodTweener::set_delay(double) */

void MethodTweener::set_delay(double param_1)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(double *)(in_RSI + 0x1a0) = param_1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* MethodTweener::set_trans(Tween::TransitionType) */

long * MethodTweener::set_trans(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x1a8) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* PropertyTweener::set_ease(Tween::EaseType) */

long * PropertyTweener::set_ease(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x224) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* PropertyTweener::set_delay(double) */

void PropertyTweener::set_delay(double param_1)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(double *)(in_RSI + 0x238) = param_1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* PropertyTweener::set_trans(Tween::TransitionType) */

long * PropertyTweener::set_trans(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x220) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* PropertyTweener::from_current() */

void PropertyTweener::from_current(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(undefined1 *)(in_RSI + 0x240) = 0;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* PropertyTweener::as_relative() */

void PropertyTweener::as_relative(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(undefined1 *)(in_RSI + 0x242) = 1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* PropertyTweener::set_custom_interpolator(Callable const&) */

Callable * PropertyTweener::set_custom_interpolator(Callable *param_1)

{
  char cVar1;
  Callable *in_RDX;
  long in_RSI;
  
  Callable::operator=((Callable *)(in_RSI + 0x228),in_RDX);
  *(long *)param_1 = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}



/* Tween::set_speed_scale(float) */

void Tween::set_speed_scale(float param_1)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(float *)(in_RSI + 0x1c4) = param_1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* Tween::parallel() */

void Tween::parallel(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(undefined1 *)(in_RSI + 0x1cf) = 1;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* Tween::set_pause_mode(Tween::TweenPauseMode) */

long * Tween::set_pause_mode(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x180) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* Tween::set_ignore_time_scale(bool) */

long * Tween::set_ignore_time_scale(bool param_1)

{
  char cVar1;
  undefined1 in_DL;
  long in_RSI;
  undefined7 in_register_00000039;
  long *plVar2;
  
  plVar2 = (long *)CONCAT71(in_register_00000039,param_1);
  *(undefined1 *)(in_RSI + 0x1c8) = in_DL;
  *plVar2 = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *plVar2 = 0;
  }
  return plVar2;
}



/* Tween::set_loops(int) */

long * Tween::set_loops(int param_1)

{
  char cVar1;
  undefined4 in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar2;
  
  plVar2 = (long *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)(in_RSI + 0x1bc) = in_EDX;
  *plVar2 = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *plVar2 = 0;
  }
  return plVar2;
}



/* Tween::set_trans(Tween::TransitionType) */

long * Tween::set_trans(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x184) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* Tween::chain() */

void Tween::chain(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *(undefined1 *)(in_RSI + 0x1cf) = 0;
  *in_RDI = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* Tween::set_ease(Tween::EaseType) */

long * Tween::set_ease(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x188) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* Tween::set_process_mode(Tween::TweenProcessMode) */

long * Tween::set_process_mode(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x17c) = param_3;
  *param_1 = param_2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return param_1;
}



/* Tween::set_parallel(bool) */

long * Tween::set_parallel(bool param_1)

{
  char cVar1;
  undefined1 in_DL;
  long in_RSI;
  undefined7 in_register_00000039;
  long *plVar2;
  
  plVar2 = (long *)CONCAT71(in_register_00000039,param_1);
  *(ushort *)(in_RSI + 0x1ce) = CONCAT11(in_DL,in_DL);
  *plVar2 = in_RSI;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *plVar2 = 0;
  }
  return plVar2;
}



/* Tween::bind_node(Node const*) */

Node * Tween::bind_node(Node *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long in_RDX;
  long in_RSI;
  
  if (in_RDX == 0) {
    _err_print_error("bind_node","scene/animation/tween.cpp",0xe8,"Parameter \"p_node\" is null.",0,
                     0);
  }
  else {
    uVar1 = *(undefined8 *)(in_RDX + 0x60);
    *(undefined1 *)(in_RSI + 0x1c9) = 1;
    *(undefined8 *)(in_RSI + 400) = uVar1;
  }
  *(long *)param_1 = in_RSI;
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}



/* Tween::interpolate_variant(Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType) */

Tween * __thiscall
Tween::interpolate_variant
          (double param_3,double param_4,Tween *this,Variant *param_1,undefined8 param_5,
          uint param_6,uint param_7)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined1 auVar6 [16];
  char *pcVar7;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 < 0xc) {
    if (param_7 < 4) {
      Animation::add_variant((Variant *)local_78,param_1);
      fVar5 = _LC2;
      if ((float)param_4 != 0.0) {
        auVar6._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar6._0_4_ = (float)param_3;
        fVar5 = (float)(**(code **)(interpolaters +
                                   ((long)(int)param_7 + (long)(int)param_6 * 4) * 8))
                                 (auVar6._0_8_,0,_LC2);
      }
      Animation::interpolate_variant((Variant *)local_58,param_1,fVar5,SUB81((Variant *)local_78,0))
      ;
      if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)this = local_58[0];
      local_70 = local_50;
      uStack_68 = uStack_48;
      *(undefined8 *)(this + 8) = local_50;
      *(undefined8 *)(this + 0x10) = uStack_48;
      goto LAB_00102294;
    }
    uVar1 = (ulong)param_7;
    pcVar4 = "p_ease";
    lVar3 = 4;
    iVar2 = 0x1c9;
    pcVar7 = "EaseType::EASE_MAX";
  }
  else {
    uVar1 = (ulong)param_6;
    iVar2 = 0x1c8;
    pcVar4 = "p_trans";
    lVar3 = 0xc;
    pcVar7 = "TransitionType::TRANS_MAX";
  }
  _err_print_index_error
            ("interpolate_variant","scene/animation/tween.cpp",iVar2,uVar1,lVar3,pcVar4,pcVar7,"",
             false,false);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_00102294:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bounce::in(float, float, float, float) */

void bounce::in(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (param_4 - param_1) / param_4;
  if (fVar1 < _LC4) {
    return;
  }
  if (_LC6 <= fVar1) {
    if (_LC9 <= (double)fVar1) {
      return;
    }
    return;
  }
  return;
}



/* IntervalTweener::step(double&) */

undefined8 __thiscall IntervalTweener::step(IntervalTweener *this,double *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  double dVar4;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[400] == (IntervalTweener)0x0) {
    dVar4 = *(double *)(this + 0x188) + *param_1;
    *(double *)(this + 0x188) = dVar4;
    lVar2 = SceneStringNames::singleton;
    if (dVar4 < *(double *)(this + 0x198)) {
      *param_1 = 0.0;
      uVar3 = 1;
      goto LAB_001024f3;
    }
    *param_1 = dVar4 - *(double *)(this + 0x198);
    this[400] = (IntervalTweener)0x1;
    (**(code **)(*(long *)this + 0xd0))(this,lVar2 + 0xf8,0,0);
    if (Variant::needs_deinit != '\0') {
      Variant::_clear_internal();
      uVar3 = 0;
      goto LAB_001024f3;
    }
  }
  uVar3 = 0;
LAB_001024f3:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* PropertyTweener::start() */

void __thiscall PropertyTweener::start(PropertyTweener *this)

{
  bool *pbVar1;
  uint uVar2;
  ulong *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[400] = (PropertyTweener)0x0;
  *(undefined8 *)(this + 0x188) = 0;
  uVar2 = (uint)*(ulong *)(this + 0x198) & 0xffffff;
  if (uVar2 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar4 = (char)ObjectDB::spin_lock == '\0';
      if (bVar4) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar4) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar3 = (ulong *)((ulong)uVar2 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x198) >> 0x18 & 0x7fffffffff) == (*puVar3 & 0x7fffffffff)) {
      pbVar1 = (bool *)puVar3[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (pbVar1 != (bool *)0x0) {
        if (this[0x240] != (PropertyTweener)0x0) {
          if (_LC83 <= ABS(*(double *)(this + 0x238))) {
            this[0x241] = (PropertyTweener)0x1;
          }
          else {
            Object::get_indexed((Vector *)local_48,pbVar1);
            Variant::operator=((Variant *)(this + 0x1b0),(Variant *)local_48);
            if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        if (this[0x242] != (PropertyTweener)0x0) {
          Animation::add_variant((Variant *)local_48,(Variant *)(this + 0x1b0));
          if ((&Variant::needs_deinit)[*(int *)(this + 0x1e0)] != '\0') {
            Variant::_clear_internal();
          }
          *(int *)(this + 0x1e0) = local_48[0];
          *(undefined8 *)(this + 0x1e8) = local_40;
          *(undefined8 *)(this + 0x1f0) = uStack_38;
        }
        Animation::subtract_variant((Variant *)local_48,(Variant *)(this + 0x1e0));
        if ((&Variant::needs_deinit)[*(int *)(this + 0x1f8)] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)(this + 0x1f8) = local_48[0];
        *(undefined8 *)(this + 0x200) = local_40;
        *(undefined8 *)(this + 0x208) = uStack_38;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001029b5;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("start","scene/animation/tween.cpp",0x252,
                     "Target object freed before starting, aborting Tweener.",0,1);
    return;
  }
LAB_001029b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tweener::_get_tween() */

void Tweener::_get_tween(void)

{
  char cVar1;
  Object *pOVar2;
  uint uVar3;
  ulong *puVar4;
  long in_RSI;
  Object *pOVar5;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  bool bVar6;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(in_RSI + 0x180) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(in_RSI + 0x180) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
      pOVar5 = (Object *)puVar4[1];
      ObjectDB::spin_lock._0_1_ = '\0';
    }
    else {
      pOVar5 = (Object *)0x0;
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    pOVar5 = (Object *)0x0;
  }
  Variant::Variant((Variant *)local_38,pOVar5);
  *in_RDI = 0;
  pOVar2 = (Object *)Variant::get_validated_object();
  pOVar5 = (Object *)*in_RDI;
  if (pOVar2 == pOVar5) goto LAB_00102aba;
  if (pOVar2 == (Object *)0x0) {
    if (pOVar5 == (Object *)0x0) goto LAB_00102aba;
    *in_RDI = 0;
  }
  else {
    pOVar2 = (Object *)__dynamic_cast(pOVar2,&Object::typeinfo,&Tween::typeinfo,0);
    if (pOVar5 == pOVar2) goto LAB_00102aba;
    *in_RDI = pOVar2;
    if ((pOVar2 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      *in_RDI = 0;
    }
    if (pOVar5 == (Object *)0x0) goto LAB_00102aba;
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00102aba:
  if ((&Variant::needs_deinit)[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Tweener::_finish() */

void __thiscall Tweener::_finish(Tweener *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar2 = SceneStringNames::singleton;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this[400] = (Tweener)0x1;
  (**(code **)(*(long *)this + 0xd0))(this,lVar2 + 0xf8,0,0);
  if (Variant::needs_deinit != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::_stop_internal(bool) */

void __thiscall Tween::_stop_internal(Tween *this,bool param_1)

{
  this[0x1cb] = (Tween)0x0;
  if (param_1) {
    this[0x1ca] = (Tween)0x0;
    this[0x1cc] = (Tween)0x0;
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  return;
}



/* Tween::get_process_mode() const */

undefined4 __thiscall Tween::get_process_mode(Tween *this)

{
  return *(undefined4 *)(this + 0x17c);
}



/* Tween::get_pause_mode() const */

undefined4 __thiscall Tween::get_pause_mode(Tween *this)

{
  return *(undefined4 *)(this + 0x180);
}



/* Tween::is_ignoring_time_scale() const */

Tween __thiscall Tween::is_ignoring_time_scale(Tween *this)

{
  return this[0x1c8];
}



/* Tween::get_trans() const */

undefined4 __thiscall Tween::get_trans(Tween *this)

{
  return *(undefined4 *)(this + 0x184);
}



/* Tween::get_ease() const */

undefined4 __thiscall Tween::get_ease(Tween *this)

{
  return *(undefined4 *)(this + 0x188);
}



/* Tween::get_bound_node() const */

undefined8 __thiscall Tween::get_bound_node(Tween *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x1c9] != (Tween)0x0) {
    uVar4 = (uint)*(ulong *)(this + 400) & 0xffffff;
    if (uVar4 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar6 = (char)ObjectDB::spin_lock == '\0';
        if (bVar6) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
      if ((*(ulong *)(this + 400) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
        uVar2 = puVar5[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (uVar2 != 0) {
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&Node::typeinfo,0);
            return uVar3;
          }
          goto LAB_00102dd7;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102dd7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::can_process(bool) const */

ulong __thiscall Tween::can_process(Tween *this,bool param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  if (((this[0x1c9] != (Tween)0x0) && (*(int *)(this + 0x180) == 0)) &&
     (lVar2 = get_bound_node(this), lVar2 != 0)) {
    bVar1 = *(byte *)(lVar2 + 0x2fa) >> 6;
    if ((bVar1 & 1) == 0) {
      return (ulong)(bVar1 & 1);
    }
    uVar3 = Node::can_process();
    return uVar3;
  }
  if (!param_1) {
    return 1;
  }
  return (ulong)(*(int *)(this + 0x180) == 2);
}



/* Tween::run_equation(Tween::TransitionType, Tween::EaseType, float, float, float, float) */

float Tween::run_equation(undefined8 param_1,float param_2,float param_3,float param_4,int param_5,
                         int param_6)

{
  float fVar1;
  
  if (param_4 != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00102e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(interpolaters + ((long)param_6 + (long)param_5 * 4) * 8))();
    return fVar1;
  }
  return param_2 + param_3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Tween::Tween() */

undefined1  [16] __thiscall Tween::Tween(Tween *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  RefCounted::RefCounted((RefCounted *)this);
  uVar2 = _LC139;
  uVar1 = __LC84;
  *(undefined ***)this = &PTR__initialize_classv_0012b1d0;
  uVar3 = _LC85;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1b8) = uVar3;
  *(undefined8 *)(this + 0x1c0) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0x1000000;
  this[0x1d0] = (Tween)0x0;
  *(undefined8 *)(this + 0x17c) = uVar1;
  *(undefined8 *)(this + 0x184) = uVar2;
  _err_print_error("Tween","scene/animation/tween.cpp",0x219,"Method/function failed.",
                   "Tween can\'t be created directly. Use create_tween() method.",0);
  return ZEXT816(0x102e8d) << 0x40;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Tween::Tween(SceneTree*) */

void __thiscall Tween::Tween(Tween *this,SceneTree *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  RefCounted::RefCounted((RefCounted *)this);
  uVar2 = _LC139;
  uVar1 = __LC84;
  *(undefined8 *)(this + 400) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012b1d0;
  uVar3 = _LC85;
  *(SceneTree **)(this + 0x198) = param_1;
  *(undefined8 *)(this + 0x1b8) = uVar3;
  *(undefined8 *)(this + 0x1c0) = 0x3f80000000000000;
  uVar3 = _LC89;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = uVar3;
  this[0x1d0] = (Tween)0x0;
  *(undefined8 *)(this + 0x17c) = uVar1;
  *(undefined8 *)(this + 0x184) = uVar2;
  return;
}



/* PropertyTweener::PropertyTweener() */

void __thiscall PropertyTweener::PropertyTweener(PropertyTweener *this)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  this[400] = (PropertyTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b330;
  uVar1 = _LC90;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x220) = uVar1;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined2 *)(this + 0x240) = 1;
  this[0x242] = (PropertyTweener)0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  _err_print_error("PropertyTweener","scene/animation/tween.cpp",700,"Method/function failed.",
                   "PropertyTweener can\'t be created directly. Use the tween_property() method in Tween."
                   ,0,0);
  return;
}



/* IntervalTweener::IntervalTweener(double) */

void __thiscall IntervalTweener::IntervalTweener(IntervalTweener *this,double param_1)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  this[400] = (IntervalTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b4a8;
  *(double *)(this + 0x198) = param_1;
  return;
}



/* IntervalTweener::IntervalTweener() */

undefined1  [16] __thiscall IntervalTweener::IntervalTweener(IntervalTweener *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  this[400] = (IntervalTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b4a8;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  _err_print_error("IntervalTweener","scene/animation/tween.cpp",0x2d5,"Method/function failed.",
                   "IntervalTweener can\'t be created directly. Use the tween_interval() method in Tween."
                   ,0);
  return ZEXT816(0x10316d) << 0x40;
}



/* CallbackTweener::CallbackTweener(Callable const&) */

void __thiscall CallbackTweener::CallbackTweener(CallbackTweener *this,Callable *param_1)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  this[400] = (CallbackTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b620;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  Callable::operator=((Callable *)(this + 0x198),param_1);
  pOVar2 = (Object *)Callable::get_object();
  if ((pOVar2 == (Object *)0x0) || (pOVar2[0x120] == (Object)0x0)) goto LAB_0010327f;
  Variant::Variant((Variant *)local_38,pOVar2);
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar2 = *(Object **)(this + 0x1b0);
  if (pOVar3 != pOVar2) {
    if (pOVar3 == (Object *)0x0) {
      if (pOVar2 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1b0) = 0;
LAB_00103305:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&RefCounted::typeinfo,0);
      if (pOVar2 != pOVar3) {
        *(Object **)(this + 0x1b0) = pOVar3;
        if (pOVar3 != (Object *)0x0) {
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *(undefined8 *)(this + 0x1b0) = 0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00103305;
      }
    }
  }
  if ((&Variant::needs_deinit)[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010327f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::CallbackTweener() */

undefined1  [16] __thiscall CallbackTweener::CallbackTweener(CallbackTweener *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  this[400] = (CallbackTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b620;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  _err_print_error("CallbackTweener","scene/animation/tween.cpp",0x307,"Method/function failed.",
                   "CallbackTweener can\'t be created directly. Use the tween_callback() method in Tween."
                   ,0);
  return ZEXT816(0x10339d) << 0x40;
}



/* MethodTweener::MethodTweener(Callable const&, Variant const&, Variant const&, double) */

void __thiscall
MethodTweener::MethodTweener
          (MethodTweener *this,Callable *param_1,Variant *param_2,Variant *param_3,double param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012b798;
  uVar1 = _LC90;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  this[400] = (MethodTweener)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  Callable::operator=((Callable *)(this + 0x1f8),param_1);
  Variant::operator=((Variant *)(this + 0x1b0),param_2);
  Animation::subtract_variant((Variant *)local_58,param_3);
  lVar4 = (long)local_58[0];
  if (this + 0x1c8 != (MethodTweener *)local_58) {
    if ((&Variant::needs_deinit)[*(int *)(this + 0x1c8)] != '\0') {
      Variant::_clear_internal();
    }
    iVar2 = local_58[0];
    local_58[0] = 0;
    *(int *)(this + 0x1c8) = iVar2;
    lVar4 = 0;
    *(undefined8 *)(this + 0x1d0) = local_50;
    *(undefined8 *)(this + 0x1d8) = uStack_48;
  }
  if ((&Variant::needs_deinit)[lVar4] != '\0') {
    Variant::_clear_internal();
  }
  Variant::operator=((Variant *)(this + 0x1e0),param_3);
  *(double *)(this + 0x198) = param_4;
  pOVar5 = (Object *)Callable::get_object();
  if ((pOVar5 == (Object *)0x0) || (pOVar5[0x120] == (Object)0x0)) goto LAB_001035b7;
  Variant::Variant((Variant *)local_58,pOVar5);
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar5 = *(Object **)(this + 0x208);
  if (pOVar6 != pOVar5) {
    if (pOVar6 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) {
        *(undefined8 *)(this + 0x208) = 0;
LAB_00103642:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar5);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&RefCounted::typeinfo,0);
      if (pOVar5 != pOVar6) {
        *(Object **)(this + 0x208) = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this + 0x208) = 0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00103642;
      }
    }
  }
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001035b7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodTweener::MethodTweener() */

undefined1  [16] __thiscall MethodTweener::MethodTweener(MethodTweener *this)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b798;
  uVar1 = _LC90;
  this[400] = (MethodTweener)0x0;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  _err_print_error("MethodTweener","scene/animation/tween.cpp",0x365,"Method/function failed.",
                   "MethodTweener can\'t be created directly. Use the tween_method() method in Tween."
                   ,0);
  return ZEXT816(0x1036fd) << 0x40;
}



/* SubtweenTweener::SubtweenTweener(Ref<Tween> const&) */

void __thiscall SubtweenTweener::SubtweenTweener(SubtweenTweener *this,Ref *param_1)

{
  long lVar1;
  char cVar2;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x198) = 0;
  lVar1 = *(long *)param_1;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  this[400] = (SubtweenTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b910;
  *(undefined8 *)(this + 0x1a0) = 0;
  if (lVar1 != 0) {
    *(long *)(this + 0x198) = lVar1;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(this + 0x198) = 0;
    }
  }
  return;
}



/* SubtweenTweener::SubtweenTweener() */

undefined1  [16] __thiscall SubtweenTweener::SubtweenTweener(SubtweenTweener *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  this[400] = (SubtweenTweener)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012b910;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  _err_print_error("SubtweenTweener","scene/animation/tween.cpp",0x394,"Method/function failed.",
                   "SubtweenTweener can\'t be created directly. Use the tween_subtween() method in Tween."
                   ,0);
  return ZEXT816(0x10385d) << 0x40;
}



/* Tween::_validate_type_match(Variant const&, Variant&) */

undefined8 __thiscall Tween::_validate_type_match(Tween *this,Variant *param_1,Variant *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  double dVar4;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)param_1;
  iVar1 = *(int *)param_2;
  if (iVar2 == iVar1) {
LAB_00103a70:
    uVar3 = 1;
  }
  else {
    if (iVar2 == 3) {
      if (iVar1 == 2) {
        dVar4 = Variant::operator_cast_to_double(param_2);
        Variant::Variant((Variant *)local_58,dVar4);
        Variant::operator=(param_2,(Variant *)local_58);
        if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00103a70;
      }
    }
    else if ((iVar1 == 3) && (iVar2 == 2)) {
      iVar2 = Variant::operator_cast_to_int(param_2);
      Variant::Variant((Variant *)local_58,iVar2);
      if ((&Variant::needs_deinit)[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_58[0];
      uVar3 = 1;
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
      goto LAB_00103a00;
    }
    Variant::get_type_name(local_70);
    local_80 = 0;
    local_68 = " and ";
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_80);
    Variant::get_type_name(local_90,*(undefined4 *)param_1);
    operator+((char *)local_88,(String *)"Type mismatch between initial and final value: ");
    String::operator+(local_78,(String *)local_88);
    String::operator+((String *)&local_68,local_78);
    _err_print_error("_validate_type_match","scene/animation/tween.cpp",0x56,
                     "Method/function failed. Returning: false",(String *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref(local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref(local_70);
    uVar3 = 0;
  }
LAB_00103a00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::step(double&) */

undefined8 __thiscall CallbackTweener::step(CallbackTweener *this,double *param_1)

{
  double dVar1;
  double dVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Callable local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  int local_78;
  undefined8 local_74;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[400] == (CallbackTweener)0x0) {
    uVar4 = Callable::is_valid();
    lVar3 = SceneStringNames::singleton;
    if ((char)uVar4 == '\0') {
      this[400] = (CallbackTweener)0x1;
      Object::emit_signal<>((Object *)this,(StringName *)(lVar3 + 0xf8));
      uVar4 = 0;
      goto LAB_00103b44;
    }
    dVar1 = *(double *)(this + 0x188);
    dVar2 = *param_1;
    *(double *)(this + 0x188) = dVar1 + dVar2;
    if (dVar1 + dVar2 < *(double *)(this + 0x1a8)) {
      *param_1 = 0.0;
      goto LAB_00103b44;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_78 = 0;
    local_74 = 0;
    local_50 = (undefined1  [16])0x0;
    Callable::callp((Variant **)(this + 0x198),0,(Variant *)0x0,(CallError *)local_58);
    lVar3 = SceneStringNames::singleton;
    if (local_78 == 0) {
      *param_1 = *(double *)(this + 0x188) - *(double *)(this + 0x1a8);
      this[400] = (CallbackTweener)0x1;
      Object::emit_signal<>((Object *)this,(StringName *)(lVar3 + 0xf8));
    }
    else {
      local_80 = 0;
      local_68 = &_LC102;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_80);
      Variant::get_callable_error_text(local_90,(Variant **)(this + 0x198),0,(CallError *)0x0);
      operator+((char *)local_88,(String *)"Error calling method from CallbackTweener: ");
      String::operator+((String *)&local_68,(String *)local_88);
      _err_print_error(&_LC104,"scene/animation/tween.cpp",0x2ed,
                       "Method/function failed. Returning: false",(String *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
      uVar4 = 0;
      goto LAB_00103b44;
    }
  }
  uVar4 = 0;
LAB_00103b44:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::to_string() */

void Tween::to_string(void)

{
  long lVar1;
  Tween *in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::to_string();
  lVar1 = get_bound_node(in_RSI);
  if (lVar1 != 0) {
    Node::get_name();
    local_48 = " (bound to %s)";
    local_50 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_50);
    vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
    String::operator+=(in_RDI,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* Tweener::_bind_methods() */

void Tweener::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  local_b0 = 8;
  local_b8 = "finished";
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 7;
  local_c8 = "Tweener";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if ((&Variant::needs_deinit)[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tweener::initialize_class() [clone .part.0] */

void Tweener::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "Tweener";
  local_60 = 0;
  local_40 = 7;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  _bind_methods();
  initialize_class()::initialized = 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyTweener::step(double&) */

ulong __thiscall PropertyTweener::step(PropertyTweener *this,double *param_1)

{
  StringName *pSVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vector *pVVar7;
  uint uVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  ulong *puVar12;
  CowData<char32_t> *this_00;
  String *this_01;
  CowData<char32_t> *this_02;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar13;
  float fVar14;
  Tween *pTVar15;
  Ref<Tween> local_d8 [8];
  int *local_d0;
  Callable local_c8 [8];
  CowData<char32_t> local_c0 [8];
  undefined8 local_b8;
  CowData<char32_t> local_b0 [8];
  uint local_a8;
  undefined8 local_a4;
  int local_98 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[400] == (PropertyTweener)0x0) {
    uVar11 = (uint)*(ulong *)(this + 0x198) & 0xffffff;
    if (uVar11 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar8 = local_a8 >> 8;
        local_a8 = uVar8 << 8;
        LOCK();
        bVar13 = (char)ObjectDB::spin_lock == '\0';
        if (bVar13) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),bVar13);
        if (bVar13) break;
        local_a8 = uVar8 << 8;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
      if ((*(ulong *)(this + 0x198) >> 0x18 & 0x7fffffffff) == (*puVar12 & 0x7fffffffff)) {
        pVVar7 = (Vector *)puVar12[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (pVVar7 != (Vector *)0x0) {
          dVar2 = *(double *)(this + 0x188);
          dVar3 = *param_1;
          *(double *)(this + 0x188) = dVar2 + dVar3;
          if (dVar2 + dVar3 < *(double *)(this + 0x238)) {
            *param_1 = 0.0;
            goto LAB_00104870;
          }
          if ((this[0x241] != (PropertyTweener)0x0) && (_LC83 <= ABS(*(double *)(this + 0x238)))) {
            Object::get_indexed((Vector *)local_58,(bool *)pVVar7);
            Variant::operator=((Variant *)(this + 0x1b0),(Variant *)local_58);
            if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Animation::subtract_variant((Variant *)local_58,(Variant *)(this + 0x1e0));
            Variant::operator=((Variant *)(this + 0x1f8),(Variant *)local_58);
            if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            this[0x241] = (PropertyTweener)0x0;
          }
          Tweener::_get_tween();
          pTVar15 = (Tween *)(*(double *)(this + 0x188) - *(double *)(this + 0x238));
          if (*(double *)(this + 0x218) <= (double)pTVar15) {
            Object::set_indexed(pVVar7,(Variant *)(this + 0x1a0),(bool *)(this + 0x1e0));
            pSVar1 = (StringName *)(SceneStringNames::singleton + 0xf8);
            *param_1 = (*(double *)(this + 0x188) - *(double *)(this + 0x238)) -
                       *(double *)(this + 0x218);
            this[400] = (PropertyTweener)0x1;
            Object::emit_signal<>((Object *)this,pSVar1);
LAB_001047ff:
            unaff_R15 = 0;
          }
          else {
            cVar10 = Callable::is_valid();
            if (cVar10 != '\0') {
              uVar5 = *(undefined4 *)(this + 0x220);
              uVar4 = *(undefined8 *)(this + 0x218);
              uVar6 = *(undefined4 *)(this + 0x224);
              Variant::Variant((Variant *)local_58,_LC25);
              Variant::Variant((Variant *)local_78,0.0);
              Tween::interpolate_variant
                        (pTVar15,uVar4,local_98,(Variant *)local_78,(Variant *)local_58,uVar5,uVar6)
              ;
              if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_78[0] = 0;
              local_78[1] = 0;
              local_a8 = 0;
              local_a4 = 0;
              local_70 = (undefined1  [16])0x0;
              local_d0 = local_98;
              Callable::callp((Variant **)(this + 0x228),(int)&local_d0,(Variant *)0x1,
                              (CallError *)local_78);
              if (local_a8 == 0) {
                if (local_78[0] == 3) {
                  fVar14 = Variant::operator_cast_to_float((Variant *)local_78);
                  Animation::interpolate_variant
                            ((Variant *)local_58,(Variant *)(this + 0x1b0),fVar14,
                             (bool)((char)this + -0x20));
                  Object::set_indexed(pVVar7,(Variant *)(this + 0x1a0),(bool *)local_58);
                  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((&Variant::needs_deinit)[local_98[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  goto LAB_00104968;
                }
                this_00 = local_c0;
                this_01 = (String *)&local_b8;
                this_02 = local_b0;
                Variant::get_type_name(this_00);
                local_b8 = 0;
                String::parse_latin1
                          (this_01,
                           "Wrong return type in PropertyTweener custom method. Expected float, got %s."
                          );
                vformat<String>(this_02,this_01,this_00);
                _err_print_error(&_LC104,"scene/animation/tween.cpp",0x289,
                                 "Method/function failed. Returning: false",this_02,0,0);
              }
              else {
                this_00 = (CowData<char32_t> *)&local_b8;
                local_b8 = 0;
                this_01 = (String *)local_c8;
                this_02 = local_c0;
                String::parse_latin1((String *)this_00,".");
                Variant::get_callable_error_text
                          ((Callable *)this_01,(Variant **)(this + 0x228),(int)&local_d0,
                           (CallError *)0x1);
                operator+((char *)this_02,
                          (String *)"Error calling custom method from PropertyTweener: ");
                String::operator+((String *)local_b0,(String *)this_02);
                _err_print_error(&_LC104,"scene/animation/tween.cpp",0x287,
                                 "Method/function failed. Returning: false",(String *)local_b0,0,0);
                CowData<char32_t>::_unref(local_b0);
              }
              CowData<char32_t>::_unref(this_02);
              CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
              CowData<char32_t>::_unref(this_00);
              if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((&Variant::needs_deinit)[local_98[0]] != '\0') {
                Variant::_clear_internal();
              }
              goto LAB_001047ff;
            }
            Tween::interpolate_variant
                      (pTVar15,*(undefined8 *)(this + 0x218),local_58,this + 0x1b0,this + 0x1f8,
                       *(undefined4 *)(this + 0x220),*(undefined4 *)(this + 0x224));
            Object::set_indexed(pVVar7,(Variant *)(this + 0x1a0),(bool *)local_58);
            if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
LAB_00104968:
            *param_1 = 0.0;
          }
          Ref<Tween>::unref(local_d8);
          goto LAB_00104870;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    lVar9 = SceneStringNames::singleton;
    this[400] = (PropertyTweener)0x1;
    Object::emit_signal<>((Object *)this,(StringName *)(lVar9 + 0xf8));
  }
  unaff_R15 = 0;
LAB_00104870:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_R15 & 0xffffffff;
}



/* WARNING: Removing unreachable block (ram,0x00104d32) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* MethodTweener::step(double&) */

undefined4 __thiscall MethodTweener::step(MethodTweener *this,double *param_1)

{
  StringName *pSVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  undefined4 uVar5;
  int **ppiVar6;
  long in_FS_OFFSET;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  int *local_e8;
  undefined8 *local_e0;
  double local_d8;
  Tween *local_d0;
  Variant *local_c8;
  Ref<Tween> *local_c0;
  Ref<Tween> local_b0 [8];
  Callable local_a8 [8];
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  String local_90 [8];
  int local_88 [4];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  ppiVar6 = &local_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[400] == (MethodTweener)0x0) {
    local_f0 = 0x104c35;
    uVar5 = Callable::is_valid();
    lVar4 = SceneStringNames::singleton;
    if ((char)uVar5 != '\0') {
      dVar2 = *(double *)(this + 0x188);
      dVar3 = *param_1;
      *(double *)(this + 0x188) = dVar2 + dVar3;
      if (dVar2 + dVar3 < *(double *)(this + 0x1a0)) {
        *param_1 = 0.0;
        goto LAB_00104bf3;
      }
      local_c0 = local_b0;
      local_f0 = 0x104c89;
      Tweener::_get_tween();
      local_d0 = *(Tween **)(this + 0x198);
      local_78[0] = 0;
      local_78[1] = 0;
      local_70 = (undefined1  [16])0x0;
      local_d8 = *(double *)(this + 0x188) - *(double *)(this + 0x1a0);
      if ((double)local_d0 <= local_d8) {
        local_c8 = (Variant *)local_78;
        local_f0 = 0x104e69;
        Variant::operator=(local_c8,(Variant *)(this + 0x1e0));
        local_d8 = (double)local_d0;
        local_d0 = (Tween *)local_58;
      }
      else {
        local_d0 = (Tween *)local_58;
        local_f0 = 0x104cf9;
        Tween::interpolate_variant
                  (local_d0,this + 0x1b0,this + 0x1c8,*(undefined4 *)(this + 0x1a8),
                   *(undefined4 *)(this + 0x1ac));
        local_c8 = (Variant *)local_78;
        if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
          local_f0 = 0x104fd1;
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70 = local_50;
      }
      local_58[0] = 0;
      local_58[1] = 0;
      local_e0 = &local_f0;
      local_88[0] = 0;
      local_e8 = local_88;
      local_88[1] = 0;
      local_88[2] = 0;
      local_50 = (undefined1  [16])0x0;
      Callable::callp((Variant **)(this + 0x1f8),(int)local_e0,(Variant *)0x1,(CallError *)local_d0)
      ;
      if (local_88[0] == 0) {
        if (*(double *)(this + 0x198) <= local_d8) {
          pSVar1 = (StringName *)(SceneStringNames::singleton + 0xf8);
          *param_1 = (*(double *)(this + 0x188) - *(double *)(this + 0x1a0)) -
                     *(double *)(this + 0x198);
          this[400] = (MethodTweener)0x1;
          Object::emit_signal<>((Object *)this,pSVar1);
          goto LAB_00104ec0;
        }
        *param_1 = 0.0;
      }
      else {
        local_98 = 0;
        String::parse_latin1((String *)&local_98,".");
        Variant::get_callable_error_text
                  (local_a8,(Variant **)(this + 0x1f8),(int)local_e0,(CallError *)0x1);
        operator+((char *)local_a0,(String *)"Error calling method from MethodTweener: ");
        String::operator+(local_90,(String *)local_a0);
        _err_print_error(&_LC104,"scene/animation/tween.cpp",0x33a,
                         "Method/function failed. Returning: false",local_90,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        CowData<char32_t>::_unref(local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_00104ec0:
        uVar5 = 0;
      }
      ppiVar6 = (int **)auStack_f8;
      if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Ref<Tween>::unref(local_c0);
      goto LAB_00104bf3;
    }
    this[400] = (MethodTweener)0x1;
    local_f0 = 0x104e36;
    Object::emit_signal<>((Object *)this,(StringName *)(lVar4 + 0xf8));
  }
  uVar5 = 0;
  ppiVar6 = &local_e8;
LAB_00104bf3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppiVar6 + -8) = &UNK_00104fe3;
    __stack_chk_fail();
  }
  return uVar5;
}



/* PropertyTweener::from(Variant const&) */

Variant * PropertyTweener::from(Variant *param_1)

{
  char cVar1;
  Variant *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  Tween *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Tweener::_get_tween();
  if (local_50 == (Tween *)0x0) {
    _err_print_error(&_LC142,"scene/animation/tween.cpp",0x223,
                     "Condition \"tween.is_null()\" is true. Returning: nullptr",0,0);
    *(undefined8 *)param_1 = 0;
    goto LAB_00105081;
  }
  Variant::Variant((Variant *)local_48,in_RDX);
  cVar1 = Tween::_validate_type_match(local_50,(Variant *)(in_RSI + 0x1e0),(Variant *)local_48);
  if (cVar1 == '\0') {
LAB_00105057:
    *(undefined8 *)param_1 = 0;
  }
  else {
    Variant::operator=((Variant *)(in_RSI + 0x1b0),(Variant *)local_48);
    *(undefined1 *)(in_RSI + 0x240) = 0;
    *(long *)param_1 = in_RSI;
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') goto LAB_00105057;
  }
  if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)local_50), cVar1 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
LAB_00105081:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Tween::_bind_methods() */

void Tween::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int *piVar14;
  MethodBind *pMVar15;
  uint uVar16;
  int *piVar17;
  long lVar18;
  long in_FS_OFFSET;
  undefined8 local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long local_1b8 [6];
  char *local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148 [2];
  int *local_138;
  undefined8 local_130;
  long local_120;
  char *local_118;
  undefined *puStack_110;
  undefined *local_108;
  char *pcStack_100;
  undefined8 local_f8;
  Variant *local_e8;
  char *pcStack_e0;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  char *pcStack_b0;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  local_e8 = (Variant *)0x10cc5f;
  pcStack_e0 = "property";
  local_d8 = "final_val";
  pcStack_d0 = "duration";
  ppcStack_60 = &pcStack_d0;
  auStack_70._8_8_ = &local_d8;
  auStack_70._0_8_ = &pcStack_e0;
  uVar16 = (uint)(Variant *)&local_78;
  local_78 = &local_e8;
  D_METHODP((char *)&local_188,(char ***)"tween_property",uVar16);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>
                      (tween_property);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"tween_interval");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<IntervalTweener>,double>(tween_interval);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"tween_callback");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<CallbackTweener>,Callable_const&>(tween_callback);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  local_108 = &_LC150;
  pcStack_100 = "duration";
  auStack_70._8_8_ = &local_108;
  auStack_70._0_8_ = &puStack_110;
  local_118 = "method";
  puStack_110 = &_LC142;
  local_f8 = 0;
  local_78 = (Variant **)&local_118;
  ppcStack_60 = &pcStack_100;
  D_METHODP((char *)&local_188,(char ***)"tween_method",uVar16);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<MethodTweener>,Callable_const&,Variant,Variant,double>
                      (tween_method);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"tween_subtween");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<SubtweenTweener>,Ref<Tween>const&>(tween_subtween);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"custom_step");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,bool,double>(custom_step);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)&_LC164,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween>(stop);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"pause",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween>(pause);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)&_LC36,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween>(play);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)&_LC166,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween>(kill);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"get_total_elapsed_time",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,double>(get_total_time);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"is_running",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,bool>(is_running);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"is_valid",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,bool>(is_valid);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"bind_node");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,Node_const*>(bind_node);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_process_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,Tween::TweenProcessMode>(set_process_mode);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_pause_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,Tween::TweenPauseMode>(set_pause_mode);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_ignore_time_scale");
  Variant::Variant((Variant *)&local_78,true);
  local_58._0_16_ = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_e8 = (Variant *)&local_78;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,bool>(set_ignore_time_scale);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,&local_e8,1);
  if ((&Variant::needs_deinit)[(int)ppcStack_60] == '\0') {
    cVar2 = (&Variant::needs_deinit)[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_parallel");
  Variant::Variant((Variant *)&local_78,true);
  local_58._0_16_ = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_e8 = (Variant *)&local_78;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,bool>(set_parallel);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,&local_e8,1);
  if ((&Variant::needs_deinit)[(int)ppcStack_60] == '\0') {
    cVar2 = (&Variant::needs_deinit)[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_loops");
  Variant::Variant((Variant *)&local_78,0);
  local_58._0_16_ = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_e8 = (Variant *)&local_78;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,int>(set_loops);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,&local_e8,1);
  if ((&Variant::needs_deinit)[(int)ppcStack_60] == '\0') {
    cVar2 = (&Variant::needs_deinit)[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"get_loops_left",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,int>(get_loops_left);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_speed_scale");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,float>(set_speed_scale);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_trans");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,Tween::TransitionType>(set_trans);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHOD<char_const*>((char *)&local_188,"set_ease");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>,Tween::EaseType>(set_ease);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"parallel",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>>(parallel);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  D_METHODP((char *)&local_188,(char ***)"chain",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<Tween,Ref<Tween>>(chain);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  local_a8 = "elapsed_time";
  pcStack_a0 = "duration";
  local_b8 = "initial_value";
  pcStack_b0 = "delta_value";
  auStack_70._8_8_ = &local_a8;
  auStack_70._0_8_ = &pcStack_b0;
  local_58._8_8_ = &pcStack_90;
  local_58._0_8_ = &local_98;
  local_98 = "trans_type";
  pcStack_90 = "ease_type";
  local_88 = 0;
  local_78 = (Variant **)&local_b8;
  ppcStack_60 = &pcStack_a0;
  D_METHODP((char *)&local_188,(char ***)"interpolate_value",uVar16);
  StringName::StringName((StringName *)local_1b8,"Tween",false);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar15);
  *(undefined ***)pMVar15 = &PTR__gen_argument_type_0012c1a8;
  *(code **)(pMVar15 + 0x58) = interpolate_variant;
  MethodBind::_generate_argument_types((int)pMVar15);
  *(undefined4 *)(pMVar15 + 0x34) = 6;
  MethodBind::_set_static(SUB81(pMVar15,0));
  MethodBind::_set_returns(SUB81(pMVar15,0));
  StringName::operator=((StringName *)(pMVar15 + 0x18),(StringName *)local_1b8);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_188,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_188);
  local_1d0 = 0;
  local_1d8 = 0;
  String::parse_latin1((String *)&local_1d8,"");
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"idx");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1b8,2,(String *)&local_1e0,0,(String *)&local_1d8,6,
             (String *)&local_1d0);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"step_finished");
  local_178 = (undefined1  [16])0x0;
  local_188 = (char *)0x0;
  local_180 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 6;
  local_150 = 1;
  local_148[0] = 0;
  local_138 = (int *)0x0;
  local_130 = 0;
  local_120 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_148,(PropertyInfo *)local_1b8);
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"Tween");
  StringName::StringName((StringName *)&local_1c0,(String *)&local_1e8,false);
  ClassDB::add_signal((StringName *)&local_1c0,(MethodInfo *)&local_188);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  lVar3 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar14 = local_138;
  if (local_138 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_138 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_138 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_138 + -2);
      local_138 = (int *)0x0;
      if (lVar3 != 0) {
        lVar18 = 0;
        piVar17 = piVar14;
        do {
          if ((&Variant::needs_deinit)[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar18 = lVar18 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar3 != lVar18);
      }
      Memory::free_static(piVar14 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_178._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  if ((StringName::configured != '\0') && (local_1d0 != 0)) {
    StringName::unref();
  }
  local_1d0 = 0;
  local_1d8 = 0;
  String::parse_latin1((String *)&local_1d8,"");
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"loop_count");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1b8,2,(String *)&local_1e0,0,(String *)&local_1d8,6,
             (String *)&local_1d0);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"loop_finished");
  local_178 = (undefined1  [16])0x0;
  local_188 = (char *)0x0;
  local_180 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 6;
  local_150 = 1;
  local_148[0] = 0;
  local_138 = (int *)0x0;
  local_130 = 0;
  local_120 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_148,(PropertyInfo *)local_1b8);
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"Tween");
  StringName::StringName((StringName *)&local_1c0,(String *)&local_1e8,false);
  ClassDB::add_signal((StringName *)&local_1c0,(MethodInfo *)&local_188);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  lVar3 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar14 = local_138;
  if (local_138 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_138 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_138 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_138 + -2);
      local_138 = (int *)0x0;
      if (lVar3 != 0) {
        lVar18 = 0;
        piVar17 = piVar14;
        do {
          if ((&Variant::needs_deinit)[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar18 = lVar18 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar3 != lVar18);
      }
      Memory::free_static(piVar14 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_178._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  if ((StringName::configured != '\0') && (local_1d0 != 0)) {
    StringName::unref();
  }
  local_1c0 = 0;
  String::parse_latin1((String *)&local_1c0,"finished");
  local_178 = (undefined1  [16])0x0;
  local_188 = (char *)0x0;
  local_180 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 6;
  local_150 = 1;
  local_148[0] = 0;
  local_138 = (int *)0x0;
  local_130 = 0;
  local_120 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1c0);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1c8,false);
  ClassDB::add_signal((StringName *)local_1b8,(MethodInfo *)&local_188);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  lVar3 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar14 = local_138;
  if (local_138 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_138 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_138 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_138 + -2);
      local_138 = (int *)0x0;
      if (lVar3 != 0) {
        lVar18 = 0;
        piVar17 = piVar14;
        do {
          if ((&Variant::needs_deinit)[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar18 = lVar18 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar3 != lVar18);
      }
      Memory::free_static(piVar14 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_178._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  StringName::StringName((StringName *)local_1b8,"TWEEN_PROCESS_PHYSICS",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TWEEN_PROCESS_PHYSICS");
  GetTypeInfo<Tween::TweenProcessMode,void>::get_class_info
            ((GetTypeInfo<Tween::TweenProcessMode,void> *)&local_188);
  local_1c0 = local_178._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_178._8_8_;
  local_178 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,0,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e0,"TWEEN_PROCESS_IDLE",false);
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"TWEEN_PROCESS_IDLE");
  local_188 = "Tween::TweenProcessMode";
  local_1c8 = 0;
  local_180 = 0x17;
  String::parse_latin1((StrRange *)&local_1c8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_1d0,(String *)&local_1c8)
  ;
  StringName::StringName((StringName *)&local_1d8,(String *)&local_1d0,false);
  local_1c0 = 0;
  local_1b8[0] = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_188,2,(StringName *)local_1b8,0,(StringName *)&local_1c0,0x10006
             ,(String *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_1b8[0] = local_178._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_178._8_8_;
  local_178 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1c0 = 0;
  String::parse_latin1((String *)&local_1c0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)local_1b8,(StringName *)&local_1e0,1,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"TWEEN_PAUSE_BOUND",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TWEEN_PAUSE_BOUND");
  GetTypeInfo<Tween::TweenPauseMode,void>::get_class_info
            ((GetTypeInfo<Tween::TweenPauseMode,void> *)&local_188);
  local_1c0 = local_178._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_178._8_8_;
  local_178 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,0,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"TWEEN_PAUSE_STOP",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TWEEN_PAUSE_STOP");
  GetTypeInfo<Tween::TweenPauseMode,void>::get_class_info
            ((GetTypeInfo<Tween::TweenPauseMode,void> *)&local_188);
  local_1c0 = local_178._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_178._8_8_;
  local_178 = auVar8 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,1,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"TWEEN_PAUSE_PROCESS",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TWEEN_PAUSE_PROCESS");
  GetTypeInfo<Tween::TweenPauseMode,void>::get_class_info
            ((GetTypeInfo<Tween::TweenPauseMode,void> *)&local_188);
  local_1c0 = local_178._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_178._8_8_;
  local_178 = auVar9 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,2,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_LINEAR",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_LINEAR");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,0,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_SINE",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_SINE");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,1,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_QUINT",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_QUINT");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,2,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_QUART",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_QUART");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,3,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_QUAD",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_QUAD");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,4,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_EXPO",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_EXPO");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,5,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_ELASTIC",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_ELASTIC");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,6,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_CUBIC",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_CUBIC");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,7,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_CIRC",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_CIRC");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,8,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_BOUNCE",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_BOUNCE");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,9,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_BACK",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_BACK");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,10,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"TRANS_SPRING",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"TRANS_SPRING");
  __constant_get_enum_name<Tween::TransitionType>((StringName *)&local_1c0);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)local_1b8,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1b8,(StringName *)&local_1c0,(StringName *)&local_188,0xb,false);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"EASE_IN",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"EASE_IN");
  GetTypeInfo<Tween::EaseType,void>::get_class_info((GetTypeInfo<Tween::EaseType,void> *)&local_188)
  ;
  local_1c0 = local_178._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_178._8_8_;
  local_178 = auVar10 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,0,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"EASE_OUT",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"EASE_OUT");
  GetTypeInfo<Tween::EaseType,void>::get_class_info((GetTypeInfo<Tween::EaseType,void> *)&local_188)
  ;
  local_1c0 = local_178._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_178._8_8_;
  local_178 = auVar11 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,1,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"EASE_IN_OUT",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"EASE_IN_OUT");
  GetTypeInfo<Tween::EaseType,void>::get_class_info((GetTypeInfo<Tween::EaseType,void> *)&local_188)
  ;
  local_1c0 = local_178._0_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_178._8_8_;
  local_178 = auVar12 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,2,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_1b8,"EASE_OUT_IN",false);
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"EASE_OUT_IN");
  GetTypeInfo<Tween::EaseType,void>::get_class_info((GetTypeInfo<Tween::EaseType,void> *)&local_188)
  ;
  local_1c0 = local_178._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_178._8_8_;
  local_178 = auVar13 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_1d0 = 0;
  String::parse_latin1((String *)&local_1d0,"Tween");
  StringName::StringName((StringName *)&local_188,(String *)&local_1d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_188,(StringName *)&local_1c0,(StringName *)local_1b8,3,false);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1b8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_ref(CowData<StringName> const&) [clone .part.0] */

void __thiscall CowData<StringName>::_ref(CowData<StringName> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* PropertyTweener::PropertyTweener(Object const*, Vector<StringName> const&, Variant const&,
   double) */

void __thiscall
PropertyTweener::PropertyTweener
          (PropertyTweener *this,Object *param_1,Vector *param_2,Variant *param_3,double param_4)

{
  Object OVar1;
  undefined8 uVar2;
  Object *pOVar3;
  int iVar4;
  char cVar5;
  Object *pOVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012b330;
  uVar2 = _LC90;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x220) = uVar2;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined2 *)(this + 0x240) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x1a8) = 0;
  lVar7 = *(long *)(param_2 + 8);
  *(undefined8 *)(this + 0x188) = 0;
  this[400] = (PropertyTweener)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  this[0x242] = (PropertyTweener)0x0;
  *(undefined8 *)(this + 0x198) = uVar2;
  if (lVar7 != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)(this + 0x1a8),(CowData *)(param_2 + 8));
  }
  Object::get_indexed((Vector *)local_58,(bool *)param_1);
  if ((Vector *)(this + 0x1b0) == (Vector *)local_58) {
    lVar7 = (long)local_58[0];
  }
  else {
    if ((&Variant::needs_deinit)[*(int *)(this + 0x1b0)] != '\0') {
      Variant::_clear_internal();
    }
    iVar4 = local_58[0];
    local_58[0] = 0;
    *(int *)(this + 0x1b0) = iVar4;
    lVar7 = 0;
    *(undefined8 *)(this + 0x1b8) = local_50;
    *(undefined8 *)(this + 0x1c0) = uStack_48;
  }
  if ((&Variant::needs_deinit)[lVar7] != '\0') {
    Variant::_clear_internal();
  }
  Variant::operator=((Variant *)(this + 0x1c8),param_3);
  Variant::operator=((Variant *)(this + 0x1e0),(Variant *)(this + 0x1c8));
  OVar1 = param_1[0x120];
  *(double *)(this + 0x218) = param_4;
  if (OVar1 == (Object)0x0) goto LAB_001080d0;
  Variant::Variant((Variant *)local_58,param_1);
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar3 = *(Object **)(this + 0x210);
  if (pOVar6 != pOVar3) {
    if (pOVar6 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) {
        *(undefined8 *)(this + 0x210) = 0;
LAB_00108165:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&RefCounted::typeinfo,0);
      if (pOVar3 != pOVar6) {
        *(Object **)(this + 0x210) = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *(undefined8 *)(this + 0x210) = 0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00108165;
      }
    }
  }
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001080d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::_bind_methods() */

void CallbackTweener::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_68 [2];
  CowData<StringName> local_58 [16];
  char *local_48;
  undefined8 local_40;
  char **local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "delay";
  local_38 = &local_48;
  local_40 = 0;
  D_METHODP((char *)local_68,(char ***)"set_delay",(uint)&local_38);
  local_30 = (undefined1  [16])0x0;
  local_38 = (char **)0x0;
  pMVar1 = create_method_bind<CallbackTweener,Ref<CallbackTweener>,double>(set_delay);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SubtweenTweener::_bind_methods() */

void SubtweenTweener::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_68 [2];
  CowData<StringName> local_58 [16];
  char *local_48;
  undefined8 local_40;
  char **local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "delay";
  local_38 = &local_48;
  local_40 = 0;
  D_METHODP((char *)local_68,(char ***)"set_delay",(uint)&local_38);
  local_30 = (undefined1  [16])0x0;
  local_38 = (char **)0x0;
  pMVar1 = create_method_bind<SubtweenTweener,Ref<SubtweenTweener>,double>(set_delay);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodTweener::_bind_methods() */

void MethodTweener::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long local_78 [2];
  CowData<StringName> local_68 [16];
  char *local_58;
  undefined8 local_50;
  char **local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = "delay";
  uVar2 = (uint)&local_48;
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_delay",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<MethodTweener,Ref<MethodTweener>,double>(set_delay);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  local_50 = 0;
  local_58 = "trans";
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_trans",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<MethodTweener,Ref<MethodTweener>,Tween::TransitionType>(set_trans);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  local_50 = 0;
  local_58 = "ease";
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_ease",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<MethodTweener,Ref<MethodTweener>,Tween::EaseType>(set_ease);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyTweener::_bind_methods() */

void PropertyTweener::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long local_78 [2];
  CowData<StringName> local_68 [16];
  char *local_58;
  undefined8 local_50;
  char **local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = "value";
  uVar2 = (uint)&local_48;
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)&_LC142,uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>,Variant_const&>(from);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"from_current",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>>(from_current);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"as_relative",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>>(as_relative);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  local_50 = 0;
  local_58 = "trans";
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_trans",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>,Tween::TransitionType>(set_trans)
  ;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  local_50 = 0;
  local_58 = "ease";
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_ease",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>,Tween::EaseType>(set_ease);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  local_50 = 0;
  local_58 = "interpolator_method";
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_custom_interpolator",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>,Callable_const&>
                     (set_custom_interpolator);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  local_50 = 0;
  local_58 = "delay";
  local_48 = &local_58;
  D_METHODP((char *)local_78,(char ***)"set_delay",uVar2);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<PropertyTweener,Ref<PropertyTweener>,double>(set_delay);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<List<Ref<Tweener>, DefaultAllocator> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write
          (CowData<List<Ref<Tweener>,DefaultAllocator>> *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar9 = lVar1 * 8 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar10 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar1;
  puVar8 = puVar6 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *puVar8 = 0;
      plVar11 = *(long **)(lVar2 + lVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *puVar8 = pauVar7;
        *(undefined4 *)pauVar7[1] = 0;
        *pauVar7 = (undefined1  [16])0x0;
        do {
          while( true ) {
            pauVar7 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
            *pauVar7 = (undefined1  [16])0x0;
            pauVar7[1] = (undefined1  [16])0x0;
            if (*plVar11 != 0) {
              *(long *)*pauVar7 = *plVar11;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                *(undefined8 *)*pauVar7 = 0;
              }
            }
            plVar3 = (long *)*puVar8;
            lVar2 = plVar3[1];
            *(undefined8 *)(*pauVar7 + 8) = 0;
            *(long **)(pauVar7[1] + 8) = plVar3;
            *(long *)pauVar7[1] = lVar2;
            if (lVar2 != 0) {
              *(undefined1 (**) [16])(lVar2 + 8) = pauVar7;
            }
            plVar3[1] = (long)pauVar7;
            if (*plVar3 != 0) break;
            plVar11 = (long *)plVar11[1];
            *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
            *plVar3 = (long)pauVar7;
            if (plVar11 == (long *)0x0) goto LAB_00108cb5;
          }
          plVar11 = (long *)plVar11[1];
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        } while (plVar11 != (long *)0x0);
      }
LAB_00108cb5:
      lVar10 = lVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar1 != lVar10);
  }
  _unref(this);
  *(undefined8 **)this = puVar6 + 2;
  return;
}



/* Tween::_start_tweeners() */

undefined8 * __thiscall Tween::_start_tweeners(Tween *this)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(long *)(this + 0x1a8) == 0) {
    this[0x1cc] = (Tween)0x1;
    puVar4 = (undefined8 *)0x0;
    _err_print_error("_start_tweeners","scene/animation/tween.cpp",0x5f,"Method/function failed.",
                     "Tween without commands, aborting.",0);
  }
  else {
    lVar5 = (long)*(int *)(this + 0x1b8);
    lVar1 = *(long *)(*(long *)(this + 0x1a8) + -8);
    if ((lVar5 < 0) || (lVar1 <= lVar5)) {
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar1,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write
              ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
    puVar4 = *(undefined8 **)(*(long *)(this + 0x1a8) + lVar5 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (puVar2 = (undefined8 *)*puVar4; puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)puVar2[1]) {
        puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x158))();
      }
    }
  }
  return puVar4;
}



/* Tween::step(double) */

undefined8 __thiscall Tween::step(Tween *this,double param_1)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  Tween TVar10;
  byte bVar11;
  undefined8 *puVar12;
  char cVar13;
  long in_FS_OFFSET;
  bool bVar14;
  double dVar15;
  double dVar16;
  double local_d0;
  Tween local_b9;
  double local_b8;
  NodePath local_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x1cc] == (Tween)0x0) {
    if (this[0x1c9] == (Tween)0x0) {
LAB_00108e75:
      TVar10 = this[0x1cb];
      if (TVar10 != (Tween)0x0) {
        if (this[0x1ca] == (Tween)0x0) {
          if (*(long *)(this + 0x1a8) == 0) {
            local_b8 = 0.0;
            lVar8 = get_bound_node(this);
            if (lVar8 == 0) {
              (**(code **)(*(long *)this + 0x78))((CowData<char32_t> *)&local_90,this);
              if (local_b8 != local_90) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                local_b8 = local_90;
                local_90 = 0.0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            }
            else {
              bVar11 = *(byte *)(lVar8 + 0x2fa) >> 6;
              if ((bVar11 & 1) == 0) {
                Node::get_name();
                if (local_a8 == 0) {
                  local_a0 = 0;
                }
                else {
                  local_a0 = 0;
                  if (*(char **)(local_a8 + 8) == (char *)0x0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_a0,(CowData *)(local_a8 + 0x10));
                  }
                  else {
                    String::parse_latin1((String *)&local_a0,*(char **)(local_a8 + 8));
                  }
                }
              }
              else {
                Node::get_path();
                NodePath::operator_cast_to_String((NodePath *)&local_a0);
                TVar10 = (Tween)0x0;
              }
              local_98 = 0;
              String::parse_latin1((String *)&local_98,"Tween (bound to %s)");
              vformat<String>((CowData<char32_t> *)&local_90,(String *)&local_98,
                              (CowData<char32_t> *)&local_a0);
              dVar16 = local_90;
              if (local_b8 != local_90) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                local_90 = 0.0;
                local_b8 = dVar16;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              if (((TVar10 != (Tween)0x0) && (StringName::configured != '\0')) && (local_a8 != 0)) {
                StringName::unref();
              }
              if ((bVar11 & 1) != 0) {
                NodePath::~NodePath(local_b0);
              }
            }
            local_98 = 0;
            String::parse_latin1((String *)&local_98,": started with no Tweeners.");
            String::operator+((String *)&local_90,(String *)&local_b8);
            _err_print_error(&_LC104,"scene/animation/tween.cpp",0x163,
                             "Method/function failed. Returning: false",(String *)&local_90,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            goto LAB_001094e3;
          }
          *(undefined4 *)(this + 0x1b8) = 0;
          *(undefined4 *)(this + 0x1c0) = 0;
          *(undefined8 *)(this + 0x1b0) = 0;
          _start_tweeners(this);
          this[0x1ca] = (Tween)0x1;
        }
        dVar16 = (double)*(float *)(this + 0x1c4) * param_1;
        *(double *)(this + 0x1b0) = *(double *)(this + 0x1b0) + dVar16;
        if (0.0 < dVar16) {
          local_b9 = (Tween)0x0;
          local_d0 = dVar16;
LAB_00108ee6:
          do {
            TVar10 = this[0x1cb];
            if (TVar10 == (Tween)0x0) goto LAB_00108fe8;
            lVar9 = (long)*(int *)(this + 0x1b8);
            lVar8 = *(long *)(this + 0x1a8);
            if (lVar9 < 0) {
              if (lVar8 != 0) {
LAB_001091a1:
                lVar8 = *(long *)(lVar8 + -8);
                goto LAB_001091a5;
              }
LAB_00109250:
              lVar8 = 0;
LAB_001091a5:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar8,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (lVar8 == 0) goto LAB_00109250;
            if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_001091a1;
            CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write
                      ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
            plVar2 = *(long **)(*(long *)(this + 0x1a8) + lVar9 * 8);
            if ((plVar2 != (long *)0x0) &&
               (puVar12 = (undefined8 *)*plVar2, puVar12 != (undefined8 *)0x0)) {
              cVar13 = '\0';
              dVar15 = local_d0;
              do {
                local_90 = local_d0;
                cVar5 = (**(code **)(*(long *)*puVar12 + 0x160))((long *)*puVar12,&local_90);
                puVar12 = (undefined8 *)puVar12[1];
                dVar4 = local_90;
                if (dVar15 <= local_90) {
                  dVar4 = dVar15;
                }
                dVar15 = dVar4;
                if (cVar5 != '\0') {
                  cVar13 = cVar5;
                }
              } while (puVar12 != (undefined8 *)0x0);
              local_d0 = dVar15;
              if (cVar13 == '\0') goto LAB_00109026;
LAB_00108fa7:
              if (local_d0 <= 0.0) goto LAB_00108fe8;
              goto LAB_00108ee6;
            }
LAB_00109026:
            iVar1 = *(int *)(this + 0x1b8);
            if ((step(double)::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar6 = __cxa_guard_acquire(&step(double)::{lambda()#1}::operator()()::sname),
               iVar6 != 0)) {
              _scs_create((char *)&step(double)::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&step(double)::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&step(double)::{lambda()#1}::operator()()::sname);
            }
            Variant::Variant((Variant *)local_78,iVar1);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_88[0] = (Variant *)local_78;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&step(double)::{lambda()#1}::operator()()::sname,local_88,1);
            if ((&Variant::needs_deinit)[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            iVar1 = *(int *)(this + 0x1b8);
            *(int *)(this + 0x1b8) = iVar1 + 1;
            if (*(long *)(this + 0x1a8) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(long *)(*(long *)(this + 0x1a8) + -8);
            }
            if (iVar1 + 1 != lVar8) {
              _start_tweeners(this);
              goto LAB_00108fa7;
            }
            iVar1 = *(int *)(this + 0x1c0) + 1;
            *(int *)(this + 0x1c0) = iVar1;
            lVar8 = SceneStringNames::singleton;
            if (iVar1 == *(int *)(this + 0x1bc)) {
              *(undefined2 *)(this + 0x1cb) = 0x100;
              Object::emit_signal<>((Object *)this,(StringName *)(lVar8 + 0xf8));
              goto LAB_00108fe8;
            }
            if ((step(double)::{lambda()#2}::operator()()::sname == '\0') &&
               (iVar6 = __cxa_guard_acquire(&step(double)::{lambda()#2}::operator()()::sname),
               iVar6 != 0)) {
              _scs_create((char *)&step(double)::{lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&step(double)::{lambda()#2}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&step(double)::{lambda()#2}::operator()()::sname);
            }
            Variant::Variant((Variant *)local_78,iVar1);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_88[0] = (Variant *)local_78;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&step(double)::{lambda()#2}::operator()()::sname,local_88,1);
            if ((&Variant::needs_deinit)[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)(this + 0x1b8) = 0;
            _start_tweeners(this);
            if (0 < *(int *)(this + 0x1bc)) goto LAB_00108fa7;
            if (dVar16 != local_d0) {
              dVar15 = _LC83;
              if (_LC83 <= ABS(local_d0) * _LC83) {
                dVar15 = ABS(local_d0) * _LC83;
              }
              if ((dVar15 <= ABS(local_d0 - dVar16)) ||
                 (bVar14 = local_b9 == (Tween)0x0, local_b9 = TVar10, bVar14)) goto LAB_00108fa7;
              break;
            }
            bVar14 = local_b9 == (Tween)0x0;
            local_b9 = TVar10;
          } while (bVar14);
          _err_print_error(&_LC104,"scene/animation/tween.cpp",0x198,
                           "Method/function failed. Returning: false",
                           "Infinite loop detected. Check set_loops() description for more info.",0,
                           0);
          uVar7 = 0;
          goto LAB_00108fed;
        }
      }
    }
    else {
      lVar8 = get_bound_node(this);
      if (lVar8 == 0) goto LAB_001094e3;
      if ((*(byte *)(lVar8 + 0x2fa) & 0x40) != 0) goto LAB_00108e75;
    }
LAB_00108fe8:
    uVar7 = 1;
  }
  else {
LAB_001094e3:
    uVar7 = 0;
  }
LAB_00108fed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::custom_step(double) */

void __thiscall Tween::custom_step(Tween *this,double param_1)

{
  Tween TVar1;
  Tween TVar2;
  
  TVar1 = this[0x1cb];
  this[0x1cb] = (Tween)0x1;
  step(this,param_1);
  TVar2 = this[0x1cb];
  if (this[0x1cb] != (Tween)0x0) {
    TVar2 = TVar1;
  }
  this[0x1cb] = TVar2;
  return;
}



/* SubtweenTweener::step(double&) */

undefined8 __thiscall SubtweenTweener::step(SubtweenTweener *this,double *param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[400] == (SubtweenTweener)0x0) {
    dVar2 = *(double *)(this + 0x188);
    dVar3 = *param_1;
    *(double *)(this + 0x188) = dVar2 + dVar3;
    if (*(double *)(this + 0x1a0) <= dVar2 + dVar3) {
      cVar6 = Tween::step(*(Tween **)(this + 0x198),*param_1);
      if (cVar6 == '\0') {
        lVar1 = SceneStringNames::singleton + 0xf8;
        lVar5 = *(long *)this;
        *param_1 = (*(double *)(this + 0x188) - *(double *)(this + 0x1a0)) -
                   *(double *)(*(long *)(this + 0x198) + 0x1b0);
        this[400] = (SubtweenTweener)0x1;
        (**(code **)(lVar5 + 0xd0))(this,lVar1,0,0);
        if (Variant::needs_deinit != '\0') {
          Variant::_clear_internal();
          uVar7 = 0;
          goto LAB_0010971c;
        }
        goto LAB_001097c0;
      }
    }
    *param_1 = 0.0;
    uVar7 = 1;
  }
  else {
LAB_001097c0:
    uVar7 = 0;
  }
LAB_0010971c:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::clear() */

void __thiscall Tween::clear(Tween *this)

{
  this[0x1cd] = (Tween)0x0;
  if ((*(long *)(this + 0x1a8) != 0) && (*(long *)(*(long *)(this + 0x1a8) + -8) != 0)) {
    CowData<List<Ref<Tweener>,DefaultAllocator>>::_unref
              ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
    return;
  }
  return;
}



/* Tween::append(Ref<Tweener>) */

void __thiscall Tween::append(Tween *this,long *param_2)

{
  List<Ref<Tweener>,DefaultAllocator> *this_00;
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  long local_58;
  Object *local_48;
  
  plVar1 = (long *)*param_2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(*plVar1 + 0x150);
  cVar4 = RefCounted::init_ref();
  local_48 = (Object *)this;
  if (cVar4 == '\0') {
    local_48 = (Object *)0x0;
  }
  (*pcVar3)(plVar1);
  if (((local_48 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  iVar5 = *(int *)(this + 0x1b8);
  if (this[0x1cf] == (Tween)0x0) {
    iVar10 = iVar5 + 1;
    *(int *)(this + 0x1b8) = iVar10;
    this[0x1cf] = this[0x1ce];
    iVar5 = iVar5 + 2;
    uVar14 = (ulong)iVar5;
    if (iVar5 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      puVar9 = *(undefined8 **)(this + 0x1a8);
    }
    else {
      puVar9 = *(undefined8 **)(this + 0x1a8);
      if (puVar9 == (undefined8 *)0x0) {
        if (iVar5 == 0) {
          lVar12 = (long)iVar10;
          uVar13 = 0;
          goto LAB_001099f9;
        }
        goto LAB_00109c60;
      }
      uVar13 = puVar9[-1];
      if (uVar14 == uVar13) goto LAB_00109cc8;
      if (iVar5 != 0) goto LAB_001098e9;
      CowData<List<Ref<Tweener>,DefaultAllocator>>::_unref
                ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
      puVar9 = *(undefined8 **)(this + 0x1a8);
    }
    goto LAB_00109aa2;
  }
  puVar9 = *(undefined8 **)(this + 0x1a8);
  iVar10 = 0;
  if (-1 < iVar5) {
    iVar10 = iVar5;
  }
  *(int *)(this + 0x1b8) = iVar10;
  this[0x1cf] = this[0x1ce];
  uVar14 = (ulong)(iVar10 + 1);
  if (puVar9 != (undefined8 *)0x0) {
    uVar13 = puVar9[-1];
    if (uVar13 != uVar14) {
LAB_001098e9:
      CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write
                ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
      uVar8 = uVar14 * 8 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = uVar8 >> 0x10 | uVar8;
      uVar8 = uVar8 >> 0x20 | uVar8;
      lVar12 = uVar8 + 1;
      if (uVar13 * 8 == 0) goto LAB_00109c6b;
      uVar11 = uVar13 * 8 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = uVar11 | uVar11 >> 0x20;
      if ((long)uVar13 < (long)uVar14) {
        if (uVar11 != uVar8) goto LAB_00109d10;
        goto LAB_001099a8;
      }
      local_58 = uVar11 + 1;
      goto LAB_00109bc8;
    }
LAB_00109cc8:
    lVar12 = (long)iVar10;
    if (lVar12 == -1) goto LAB_001099f9;
LAB_00109abe:
    uVar13 = puVar9[-1];
    if (lVar12 < (long)uVar13) {
      CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write
                ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
      plVar1 = (long *)(*(long *)(this + 0x1a8) + lVar12 * 8);
      if (*plVar1 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *plVar1 = (long)pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      pauVar6 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
      *pauVar6 = (undefined1  [16])0x0;
      pauVar6[1] = (undefined1  [16])0x0;
      if (*param_2 != 0) {
        *(long *)*pauVar6 = *param_2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)*pauVar6 = 0;
        }
      }
      plVar1 = (long *)*plVar1;
      lVar12 = plVar1[1];
      *(undefined8 *)(*pauVar6 + 8) = 0;
      *(long **)(pauVar6[1] + 8) = plVar1;
      *(long *)pauVar6[1] = lVar12;
      if (lVar12 != 0) {
        *(undefined1 (**) [16])(lVar12 + 8) = pauVar6;
      }
      plVar1[1] = (long)pauVar6;
      if (*plVar1 == 0) {
        *plVar1 = (long)pauVar6;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    goto LAB_001099f9;
  }
LAB_00109c60:
  CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write
            ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
  uVar13 = 0;
LAB_00109c6b:
  uVar8 = uVar14 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  lVar12 = (uVar8 >> 0x20 | uVar8) + 1;
  if ((long)uVar14 <= (long)uVar13) {
    local_58 = 0;
LAB_00109bc8:
    uVar13 = uVar14;
    while (puVar9 = *(undefined8 **)(this + 0x1a8), puVar9 != (undefined8 *)0x0) {
      if ((ulong)puVar9[-1] <= uVar13) {
        if (local_58 == lVar12) goto LAB_001099de;
        iVar5 = CowData<List<Ref<Tweener>,DefaultAllocator>>::_realloc
                          ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8),lVar12);
        puVar9 = *(undefined8 **)(this + 0x1a8);
        if (iVar5 != 0) goto LAB_00109aa2;
        if (puVar9 == (undefined8 *)0x0) {
          append();
          return;
        }
        goto LAB_001099de;
      }
      this_00 = (List<Ref<Tweener>,DefaultAllocator> *)(puVar9 + uVar13);
      uVar13 = uVar13 + 1;
      List<Ref<Tweener>,DefaultAllocator>::~List(this_00);
    }
LAB_0011e69e:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_00109d10:
  if (uVar13 == 0) {
    puVar7 = (undefined8 *)Memory::alloc_static(lVar12 + 0x10,false);
    if (puVar7 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      puVar9 = *(undefined8 **)(this + 0x1a8);
      goto LAB_00109aa2;
    }
    puVar9 = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 0;
    *(undefined8 **)(this + 0x1a8) = puVar9;
    lVar12 = 0;
LAB_001099bc:
    if (lVar12 < (long)uVar14) {
      memset(puVar9 + lVar12,0,(uVar14 - lVar12) * 8);
    }
LAB_001099de:
    lVar12 = (long)*(int *)(this + 0x1b8);
    puVar9[-1] = uVar14;
    if (-1 < lVar12) goto LAB_00109abe;
LAB_001099f5:
    uVar13 = puVar9[-1];
  }
  else {
    iVar5 = CowData<List<Ref<Tweener>,DefaultAllocator>>::_realloc
                      ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8),lVar12);
    if (iVar5 == 0) {
LAB_001099a8:
      puVar9 = *(undefined8 **)(this + 0x1a8);
      if (puVar9 == (undefined8 *)0x0) goto LAB_0011e69e;
      lVar12 = puVar9[-1];
      goto LAB_001099bc;
    }
    puVar9 = *(undefined8 **)(this + 0x1a8);
LAB_00109aa2:
    lVar12 = (long)*(int *)(this + 0x1b8);
    if (lVar12 < 0) {
      if (puVar9 != (undefined8 *)0x0) goto LAB_001099f5;
    }
    else if (puVar9 != (undefined8 *)0x0) goto LAB_00109abe;
    uVar13 = 0;
  }
LAB_001099f9:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar12,uVar13,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* Tween::tween_property(Object const*, NodePath const&, Variant, double) */

undefined8 *
Tween::tween_property
          (double param_1_00,undefined8 *param_1,Tween *param_2,Object *param_4,NodePath *param_5,
          Variant *param_6)

{
  char cVar1;
  PropertyTweener *this;
  Object *pOVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  CowData<StringName> *local_d8;
  CowData<StringName> *local_c0;
  char local_b1;
  PropertyTweener *local_b0;
  undefined8 local_a8;
  PropertyTweener *local_a0 [2];
  long local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (Object *)0x0) {
    _err_print_error("tween_property","scene/animation/tween.cpp",0x71,
                     "Parameter \"p_target\" is null.",0,0);
    *param_1 = 0;
    goto LAB_00109eda;
  }
  if (param_2[0x1cd] == (Tween)0x0) {
    pcVar4 = "Tween invalid. Either finished or created outside scene tree.";
    pcVar3 = "Condition \"!valid\" is true. Returning: nullptr";
  }
  else {
    if (param_2[0x1ca] == (Tween)0x0) {
      NodePath::get_as_property_path();
      NodePath::get_subnames();
      NodePath::~NodePath((NodePath *)&local_88);
      Object::get_indexed((Vector *)local_78,(bool *)param_4);
      if (local_b1 == '\0') {
        NodePath::NodePath((NodePath *)local_a0,param_5);
        local_a8 = 0;
        String::parse_latin1
                  ((String *)&local_a8,
                   "The tweened property \"%s\" does not exist in object \"%s\".");
        vformat<NodePath,Object_const*>
                  ((NodePath *)&local_88,(String *)&local_a8,(NodePath *)local_a0,param_4);
        _err_print_error("tween_property","scene/animation/tween.cpp",0x78,
                         "Condition \"!prop_valid\" is true. Returning: nullptr",
                         (NodePath *)&local_88,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        NodePath::~NodePath((NodePath *)local_a0);
        *param_1 = 0;
      }
      else {
        cVar1 = _validate_type_match(param_2,(Variant *)local_78,param_6);
        if (cVar1 == '\0') {
          *param_1 = 0;
        }
        else {
          local_b0 = (PropertyTweener *)0x0;
          Variant::Variant((Variant *)local_58,param_6);
          local_80 = 0;
          if (local_90 != 0) {
            CowData<StringName>::_ref((CowData<StringName> *)&local_80,(CowData *)&local_90);
          }
          local_c0 = (CowData<StringName> *)&local_80;
          this = (PropertyTweener *)operator_new(0x248,"");
          PropertyTweener::PropertyTweener
                    (this,param_4,(Vector *)&local_88,(Variant *)local_58,param_1_00);
          postinitialize_handler((Object *)this);
          local_a0[0] = this;
          cVar1 = RefCounted::init_ref();
          if (cVar1 == '\0') {
            local_a0[0] = (PropertyTweener *)0x0;
            this = (PropertyTweener *)0x0;
          }
          else {
            local_a8 = 0;
            local_b0 = this;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              local_b0 = (PropertyTweener *)0x0;
              this = (PropertyTweener *)0x0;
            }
            Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_a8);
          }
          Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)local_a0);
          CowData<StringName>::_unref(local_c0);
          if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_88 = (Object *)0x0;
          if (this == (PropertyTweener *)0x0) {
            append(param_2,(NodePath *)&local_88);
            *param_1 = 0;
          }
          else {
            pOVar2 = (Object *)__dynamic_cast(this,&Object::typeinfo,&Tweener::typeinfo,0);
            if (pOVar2 == (Object *)0x0) {
LAB_0010a061:
              append(param_2,(NodePath *)&local_88);
            }
            else {
              local_88 = pOVar2;
              cVar1 = RefCounted::reference();
              if (cVar1 == '\0') {
                local_88 = (Object *)0x0;
                goto LAB_0010a061;
              }
              append(param_2);
              cVar1 = RefCounted::unreference();
              if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            *param_1 = this;
            local_88 = (Object *)0x0;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              *param_1 = 0;
            }
            Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_88);
          }
          Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_b0);
        }
      }
      local_d8 = (CowData<StringName> *)&local_90;
      if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<StringName>::_unref(local_d8);
      goto LAB_00109eda;
    }
    pcVar4 = "Can\'t append to a Tween that has started. Use stop() first.";
    pcVar3 = "Condition \"started\" is true. Returning: nullptr";
  }
  _err_print_error("tween_property","scene/animation/tween.cpp",0x72,pcVar3,pcVar4,0,0);
  *param_1 = 0;
LAB_00109eda:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010a594) */
/* Tween::tween_interval(double) */

void Tween::tween_interval(double param_1)

{
  long lVar1;
  char cVar2;
  RefCounted *this;
  Object *pOVar3;
  char *pcVar4;
  long in_RSI;
  undefined8 *in_RDI;
  char *pcVar5;
  RefCounted *pRVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x1cd) == '\0') {
    pcVar5 = "Tween invalid. Either finished or created outside scene tree.";
    pcVar4 = "Condition \"!valid\" is true. Returning: nullptr";
  }
  else {
    if (*(char *)(in_RSI + 0x1ca) == '\0') {
      this = (RefCounted *)operator_new(0x1a0,"");
      RefCounted::RefCounted(this);
      *(undefined8 *)(this + 0x180) = 0;
      *(undefined8 *)(this + 0x188) = 0;
      this[400] = (RefCounted)0x0;
      *(undefined ***)this = &PTR__initialize_classv_0012b4a8;
      *(double *)(this + 0x198) = param_1;
      postinitialize_handler((Object *)this);
      cVar2 = RefCounted::init_ref();
      if (cVar2 != '\0') {
        cVar2 = RefCounted::reference();
        if (cVar2 != '\0') {
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') &&
             (cVar2 = predelete_handler((Object *)this), pRVar6 = this, cVar2 != '\0')) {
LAB_0010a478:
            (**(code **)(*(long *)this + 0x140))(this);
            Memory::free_static(this,false);
            this = pRVar6;
            if (pRVar6 == (RefCounted *)0x0) goto LAB_0010a372;
          }
          pOVar3 = (Object *)__dynamic_cast(this,&Object::typeinfo,&Tweener::typeinfo,0);
          if (pOVar3 == (Object *)0x0) {
            append();
          }
          else {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              append();
            }
            else {
              append();
              cVar2 = RefCounted::unreference();
              if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          *in_RDI = this;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            *in_RDI = 0;
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
            (**(code **)(*(long *)this + 0x140))(this);
            Memory::free_static(this,false);
          }
          goto LAB_0010a433;
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler((Object *)this);
          pRVar6 = (RefCounted *)0x0;
          if (cVar2 != '\0') goto LAB_0010a478;
        }
      }
LAB_0010a372:
      append();
      *in_RDI = 0;
      goto LAB_0010a433;
    }
    pcVar5 = "Can\'t append to a Tween that has started. Use stop() first.";
    pcVar4 = "Condition \"started\" is true. Returning: nullptr";
  }
  _err_print_error("tween_interval","scene/animation/tween.cpp",0x88,pcVar4,pcVar5,0,0);
  *in_RDI = 0;
LAB_0010a433:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::tween_callback(Callable const&) */

Callable * Tween::tween_callback(Callable *param_1)

{
  char cVar1;
  CallbackTweener *this;
  Object *pOVar2;
  char *pcVar3;
  Callable *in_RDX;
  Object *pOVar4;
  long in_RSI;
  char *pcVar5;
  CallbackTweener *pCVar6;
  long in_FS_OFFSET;
  Object *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x1cd) == '\0') {
    pcVar5 = "Tween invalid. Either finished or created outside scene tree.";
    pcVar3 = "Condition \"!valid\" is true. Returning: nullptr";
  }
  else {
    if (*(char *)(in_RSI + 0x1ca) == '\0') {
      Callable::Callable((Callable *)local_48,in_RDX);
      this = (CallbackTweener *)operator_new(0x1b8,"");
      CallbackTweener::CallbackTweener(this,(Callable *)local_48);
      postinitialize_handler((Object *)this);
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
LAB_0010a641:
        Callable::~Callable((Callable *)local_48);
      }
      else {
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this), cVar1 != '\0')) {
            pCVar6 = (CallbackTweener *)0x0;
            goto LAB_0010a760;
          }
          goto LAB_0010a641;
        }
        cVar1 = RefCounted::unreference();
        pCVar6 = this;
        if ((cVar1 == '\0') || (cVar1 = predelete_handler((Object *)this), cVar1 == '\0')) {
          Callable::~Callable((Callable *)local_48);
LAB_0010a6a3:
          local_48[0] = (Object *)0x0;
          pOVar2 = (Object *)__dynamic_cast(pCVar6,&Object::typeinfo,&Tweener::typeinfo,0);
          pOVar4 = local_48[0];
          if (pOVar2 == (Object *)0x0) {
            append();
            if (pOVar4 != (Object *)0x0) goto LAB_0010a7a3;
          }
          else {
            local_48[0] = pOVar2;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              local_48[0] = (Object *)0x0;
              append();
            }
            else {
              append();
              pOVar4 = pOVar2;
LAB_0010a7a3:
              cVar1 = RefCounted::unreference();
              if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          *(CallbackTweener **)param_1 = pCVar6;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *(undefined8 *)param_1 = 0;
          }
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pCVar6), cVar1 != '\0')) {
            (**(code **)(*(long *)pCVar6 + 0x140))(pCVar6);
            Memory::free_static(pCVar6,false);
          }
          goto LAB_0010a716;
        }
LAB_0010a760:
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
        Callable::~Callable((Callable *)local_48);
        if (pCVar6 != (CallbackTweener *)0x0) goto LAB_0010a6a3;
      }
      local_48[0] = (Object *)0x0;
      append();
      *(undefined8 *)param_1 = 0;
      goto LAB_0010a716;
    }
    pcVar5 = "Can\'t append to a Tween that has started. Use stop() first.";
    pcVar3 = "Condition \"started\" is true. Returning: nullptr";
  }
  _err_print_error("tween_callback","scene/animation/tween.cpp",0x91,pcVar3,pcVar5,0,0);
  *(undefined8 *)param_1 = 0;
LAB_0010a716:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Tween::tween_method(Callable const&, Variant, Variant, double) */

undefined8 *
Tween::tween_method(double param_1_00,undefined8 *param_1,Tween *param_3,Callable *param_4,
                   Variant *param_5,Variant *param_6)

{
  char cVar1;
  MethodTweener *this;
  Object *pOVar2;
  char *pcVar3;
  char *pcVar4;
  MethodTweener *pMVar5;
  long in_FS_OFFSET;
  Object *local_88 [2];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3[0x1cd] == (Tween)0x0) {
    pcVar4 = "Tween invalid. Either finished or created outside scene tree.";
    pcVar3 = "Condition \"!valid\" is true. Returning: nullptr";
  }
  else {
    if (param_3[0x1ca] == (Tween)0x0) {
      cVar1 = _validate_type_match(param_3,param_5,param_6);
      if (cVar1 != '\0') {
        Variant::Variant((Variant *)local_58,param_6);
        pMVar5 = (MethodTweener *)0x0;
        Variant::Variant((Variant *)local_78,param_5);
        Callable::Callable((Callable *)local_88,param_4);
        this = (MethodTweener *)operator_new(0x210,"");
        MethodTweener::MethodTweener
                  (this,(Callable *)local_88,(Variant *)local_78,(Variant *)local_58,param_1_00);
        postinitialize_handler((Object *)this);
        cVar1 = RefCounted::init_ref();
        if (cVar1 != '\0') {
          cVar1 = RefCounted::reference();
          if (cVar1 != '\0') {
            pMVar5 = this;
          }
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            cVar1 = predelete_handler((Object *)this);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)this + 0x140))(this);
              Memory::free_static(this,false);
            }
          }
        }
        Callable::~Callable((Callable *)local_88);
        if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_88[0] = (Object *)0x0;
        if (pMVar5 != (MethodTweener *)0x0) {
          pOVar2 = (Object *)__dynamic_cast(pMVar5,&Object::typeinfo,&Tweener::typeinfo,0);
          if (pOVar2 == (Object *)0x0) {
            append(param_3);
          }
          else {
            local_88[0] = pOVar2;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              local_88[0] = (Object *)0x0;
              append(param_3);
            }
            else {
              append(param_3);
              cVar1 = RefCounted::unreference();
              if (cVar1 != '\0') {
                cVar1 = predelete_handler(pOVar2);
                if (cVar1 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
          }
          *param_1 = pMVar5;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *param_1 = 0;
          }
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            cVar1 = predelete_handler((Object *)pMVar5);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pMVar5 + 0x140))(pMVar5);
              Memory::free_static(pMVar5,false);
            }
          }
          goto LAB_0010aaa0;
        }
        append(param_3,(Callable *)local_88);
      }
      *param_1 = 0;
      goto LAB_0010aaa0;
    }
    pcVar4 = "Can\'t append to a Tween that has started. Use stop() first.";
    pcVar3 = "Condition \"started\" is true. Returning: nullptr";
  }
  _err_print_error("tween_method","scene/animation/tween.cpp",0x9a,pcVar3,pcVar4,0,0);
  *param_1 = 0;
LAB_0010aaa0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::tween_subtween(Ref<Tween> const&) */

Ref * Tween::tween_subtween(Ref *param_1)

{
  char cVar1;
  SubtweenTweener *this;
  Object *pOVar2;
  char *pcVar3;
  long *in_RDX;
  Object *pOVar4;
  long in_RSI;
  char *pcVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x1cd) == '\0') {
    pcVar5 = "Tween invalid. Either finished or created outside scene tree.";
    pcVar3 = "Condition \"!valid\" is true. Returning: nullptr";
  }
  else {
    if (*(char *)(in_RSI + 0x1ca) == '\0') {
      pOVar6 = (Object *)*in_RDX;
      if (pOVar6 == (Object *)0x0) {
        _err_print_error("tween_subtween","scene/animation/tween.cpp",0xaa,
                         "Condition \"p_subtween.is_null()\" is true. Returning: nullptr",0,0);
        *(undefined8 *)param_1 = 0;
        goto LAB_0010ad76;
      }
      local_48 = (Object *)0x0;
      local_50 = pOVar6;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_50 = (Object *)0x0;
        pOVar4 = (Object *)0x0;
        Ref<Tween>::unref((Ref<Tween> *)&local_48);
        this = (SubtweenTweener *)operator_new(0x1a8,"");
        SubtweenTweener::SubtweenTweener(this,(Ref *)&local_50);
        postinitialize_handler((Object *)this);
        cVar1 = RefCounted::init_ref();
        if (cVar1 != '\0') {
          pOVar6 = (Object *)0x0;
LAB_0010acac:
          cVar1 = RefCounted::reference();
          pOVar4 = (Object *)0x0;
          if (cVar1 != '\0') {
            pOVar4 = (Object *)this;
          }
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this), cVar1 != '\0')) {
            (**(code **)(*(long *)this + 0x140))(this);
            Memory::free_static(this,false);
          }
          if (pOVar6 != (Object *)0x0) goto LAB_0010ade8;
        }
      }
      else {
        pOVar4 = (Object *)0x0;
        Ref<Tween>::unref((Ref<Tween> *)&local_48);
        this = (SubtweenTweener *)operator_new(0x1a8,"");
        SubtweenTweener::SubtweenTweener(this,(Ref *)&local_50);
        postinitialize_handler((Object *)this);
        cVar1 = RefCounted::init_ref();
        if (cVar1 != '\0') goto LAB_0010acac;
LAB_0010ade8:
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      if (*(Ref **)(*(long *)(pOVar4 + 0x198) + 0x198) != (Ref *)0x0) {
        SceneTree::remove_tween(*(Ref **)(*(long *)(pOVar4 + 0x198) + 0x198));
      }
      local_48 = (Object *)0x0;
      pOVar2 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Tweener::typeinfo,0);
      pOVar6 = local_48;
      if (pOVar2 == (Object *)0x0) {
        append();
        if (pOVar6 != (Object *)0x0) goto LAB_0010ae4b;
      }
      else {
        local_48 = pOVar2;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_48 = (Object *)0x0;
          append();
        }
        else {
          append();
          pOVar6 = pOVar2;
LAB_0010ae4b:
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      *(Object **)param_1 = pOVar4;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_1 = 0;
      }
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_0010ad76;
    }
    pcVar5 = "Can\'t append to a Tween that has started. Use stop() first.";
    pcVar3 = "Condition \"started\" is true. Returning: nullptr";
  }
  _err_print_error("tween_subtween","scene/animation/tween.cpp",0xa7,pcVar3,pcVar5,0,0);
  *(undefined8 *)param_1 = 0;
LAB_0010ad76:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Tweener::is_class_ptr(void*) const */

uint __thiscall Tweener::is_class_ptr(Tweener *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Tweener::_getv(StringName const&, Variant&) const */

undefined8 Tweener::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Tweener::_setv(StringName const&, Variant const&) */

undefined8 Tweener::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Tweener::_validate_propertyv(PropertyInfo&) const */

void Tweener::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Tweener::_property_can_revertv(StringName const&) const */

undefined8 Tweener::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Tweener::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Tweener::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Tweener::_notificationv(int, bool) */

void Tweener::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Tween::is_class_ptr(void*) const */

uint __thiscall Tween::is_class_ptr(Tween *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Tween::_getv(StringName const&, Variant&) const */

undefined8 Tween::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Tween::_setv(StringName const&, Variant const&) */

undefined8 Tween::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Tween::_validate_propertyv(PropertyInfo&) const */

void Tween::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Tween::_property_can_revertv(StringName const&) const */

undefined8 Tween::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Tween::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Tween::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Tween::_notificationv(int, bool) */

void Tween::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PropertyTweener::is_class_ptr(void*) const */

uint __thiscall PropertyTweener::is_class_ptr(PropertyTweener *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Tweener::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PropertyTweener::_getv(StringName const&, Variant&) const */

undefined8 PropertyTweener::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PropertyTweener::_setv(StringName const&, Variant const&) */

undefined8 PropertyTweener::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PropertyTweener::_validate_propertyv(PropertyInfo&) const */

void PropertyTweener::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PropertyTweener::_property_can_revertv(StringName const&) const */

undefined8 PropertyTweener::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PropertyTweener::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PropertyTweener::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PropertyTweener::_notificationv(int, bool) */

void PropertyTweener::_notificationv(int param_1,bool param_2)

{
  return;
}



/* IntervalTweener::is_class_ptr(void*) const */

uint __thiscall IntervalTweener::is_class_ptr(IntervalTweener *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Tweener::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* IntervalTweener::_getv(StringName const&, Variant&) const */

undefined8 IntervalTweener::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IntervalTweener::_setv(StringName const&, Variant const&) */

undefined8 IntervalTweener::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IntervalTweener::_validate_propertyv(PropertyInfo&) const */

void IntervalTweener::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* IntervalTweener::_property_can_revertv(StringName const&) const */

undefined8 IntervalTweener::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* IntervalTweener::_property_get_revertv(StringName const&, Variant&) const */

undefined8 IntervalTweener::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IntervalTweener::_notificationv(int, bool) */

void IntervalTweener::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallbackTweener::is_class_ptr(void*) const */

uint __thiscall CallbackTweener::is_class_ptr(CallbackTweener *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Tweener::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallbackTweener::_getv(StringName const&, Variant&) const */

undefined8 CallbackTweener::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallbackTweener::_setv(StringName const&, Variant const&) */

undefined8 CallbackTweener::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallbackTweener::_validate_propertyv(PropertyInfo&) const */

void CallbackTweener::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CallbackTweener::_property_can_revertv(StringName const&) const */

undefined8 CallbackTweener::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CallbackTweener::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CallbackTweener::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallbackTweener::_notificationv(int, bool) */

void CallbackTweener::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodTweener::is_class_ptr(void*) const */

uint __thiscall MethodTweener::is_class_ptr(MethodTweener *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Tweener::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MethodTweener::_getv(StringName const&, Variant&) const */

undefined8 MethodTweener::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MethodTweener::_setv(StringName const&, Variant const&) */

undefined8 MethodTweener::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MethodTweener::_validate_propertyv(PropertyInfo&) const */

void MethodTweener::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MethodTweener::_property_can_revertv(StringName const&) const */

undefined8 MethodTweener::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MethodTweener::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MethodTweener::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MethodTweener::_notificationv(int, bool) */

void MethodTweener::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SubtweenTweener::is_class_ptr(void*) const */

uint __thiscall SubtweenTweener::is_class_ptr(SubtweenTweener *this,void *param_1)

{
  return (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Tweener::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12c8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SubtweenTweener::_getv(StringName const&, Variant&) const */

undefined8 SubtweenTweener::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SubtweenTweener::_setv(StringName const&, Variant const&) */

undefined8 SubtweenTweener::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SubtweenTweener::_validate_propertyv(PropertyInfo&) const */

void SubtweenTweener::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SubtweenTweener::_property_can_revertv(StringName const&) const */

undefined8 SubtweenTweener::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SubtweenTweener::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SubtweenTweener::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SubtweenTweener::_notificationv(int, bool) */

void SubtweenTweener::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::_gen_argument_type
          (MethodBindTR<Ref<SubtweenTweener>,double> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x18;
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::get_argument_meta
          (MethodBindTR<Ref<SubtweenTweener>,double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::_gen_argument_type
          (MethodBindTR<Ref<MethodTweener>,Tween::EaseType> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::_gen_argument_type
          (MethodBindTR<Ref<MethodTweener>,Tween::TransitionType> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<MethodTweener>, double>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<MethodTweener>,double>::_gen_argument_type
          (MethodBindTR<Ref<MethodTweener>,double> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x18;
}



/* MethodBindTR<Ref<MethodTweener>, double>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<MethodTweener>,double>::get_argument_meta
          (MethodBindTR<Ref<MethodTweener>,double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTR<Ref<CallbackTweener>, double>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::_gen_argument_type
          (MethodBindTR<Ref<CallbackTweener>,double> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x18;
}



/* MethodBindTR<Ref<CallbackTweener>, double>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::get_argument_meta
          (MethodBindTR<Ref<CallbackTweener>,double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTR<Ref<PropertyTweener>, double>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::_gen_argument_type
          (MethodBindTR<Ref<PropertyTweener>,double> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x18;
}



/* MethodBindTR<Ref<PropertyTweener>, double>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::get_argument_meta
          (MethodBindTR<Ref<PropertyTweener>,double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::_gen_argument_type
          (MethodBindTR<Ref<PropertyTweener>,Callable_const&> *this,int param_1)

{
  return (param_1 == 0) + '\x18';
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<PropertyTweener>,Callable_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::_gen_argument_type
          (MethodBindTR<Ref<PropertyTweener>,Tween::EaseType> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::_gen_argument_type
          (MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<PropertyTweener>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<PropertyTweener>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<PropertyTweener>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<PropertyTweener>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTR<Ref<PropertyTweener>,Variant_const&>::_gen_argument_type
          (MethodBindTR<Ref<PropertyTweener>,Variant_const&> *this,int param_1)

{
  return -(param_1 != 0) & 0x18;
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<PropertyTweener>,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::get_argument_meta(MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
                    *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (-1 < param_1) {
    bVar1 = -(param_1 - 2U < 2) & 10;
  }
  return bVar1;
}



/* MethodBindTR<Ref<Tween>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<Tween>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<Tween>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,Tween::EaseType>::_gen_argument_type
          (MethodBindTR<Ref<Tween>,Tween::EaseType> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>,Tween::EaseType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,Tween::TransitionType>::_gen_argument_type
          (MethodBindTR<Ref<Tween>,Tween::TransitionType> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>,Tween::TransitionType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Tween>, float>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,float>::_gen_argument_type(MethodBindTR<Ref<Tween>,float> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x18;
}



/* MethodBindTR<Ref<Tween>, float>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<Tween>,float>::get_argument_meta(MethodBindTR<Ref<Tween>,float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTR<Ref<Tween>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,int>::_gen_argument_type(MethodBindTR<Ref<Tween>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<Tween>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<Tween>,int>::get_argument_meta(MethodBindTR<Ref<Tween>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Ref<Tween>, bool>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,bool>::_gen_argument_type(MethodBindTR<Ref<Tween>,bool> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe9) + 0x18;
}



/* MethodBindTR<Ref<Tween>, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::_gen_argument_type
          (MethodBindTR<Ref<Tween>,Tween::TweenPauseMode> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::_gen_argument_type
          (MethodBindTR<Ref<Tween>,Tween::TweenProcessMode> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Tween>, Node const*>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<Tween>,Node_const*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<Tween>, Node const*>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Tween>,Node_const*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool, double>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<bool,double>::_gen_argument_type(MethodBindTR<bool,double> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 1;
}



/* MethodBindTR<bool, double>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<bool,double>::get_argument_meta(MethodBindTR<bool,double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant,
   double>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::_gen_argument_type
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this,int param_1
          )

{
  if (3 < (uint)param_1) {
    return '\x18';
  }
  if (param_1 != 0) {
    return (param_1 == 3) * '\x03';
  }
  return '\x19';
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant,
   double>::get_argument_meta(int) const */

undefined8 __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::get_argument_meta
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this,int param_1
          )

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 3) {
    uVar1 = 10;
  }
  return uVar1;
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::_gen_argument_type
          (MethodBindTR<Ref<CallbackTweener>,Callable_const&> *this,int param_1)

{
  return (param_1 == 0) + '\x18';
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<CallbackTweener>,Callable_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<IntervalTweener>, double>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::_gen_argument_type
          (MethodBindTR<Ref<IntervalTweener>,double> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x18;
}



/* MethodBindTR<Ref<IntervalTweener>, double>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::get_argument_meta
          (MethodBindTR<Ref<IntervalTweener>,double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::_gen_argument_type
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this,
          int param_1)

{
  char cVar1;
  
  cVar1 = '\x18';
  if ((param_1 - 1U < 3) && (cVar1 = '\x16', param_1 != 1)) {
    cVar1 = (param_1 != 2) * '\x03';
  }
  return cVar1;
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::get_argument_meta(int) const */

undefined8 __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::get_argument_meta
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this,
          int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 3) {
    uVar1 = 10;
  }
  return uVar1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* IntervalTweener::~IntervalTweener() */

void __thiscall IntervalTweener::~IntervalTweener(IntervalTweener *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* IntervalTweener::~IntervalTweener() */

void __thiscall IntervalTweener::~IntervalTweener(IntervalTweener *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a0);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ba88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ba88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<IntervalTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<IntervalTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bae8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<IntervalTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<IntervalTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bae8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::~MethodBindTR
          (MethodBindTR<Ref<CallbackTweener>,Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bb48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::~MethodBindTR
          (MethodBindTR<Ref<CallbackTweener>,Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bb48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bba8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bba8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::~MethodBindTR
          (MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bc08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::~MethodBindTR
          (MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bc08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, double>::~MethodBindTR() */

void __thiscall MethodBindTR<bool,double>::~MethodBindTR(MethodBindTR<bool,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bc68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, double>::~MethodBindTR() */

void __thiscall MethodBindTR<bool,double>::~MethodBindTR(MethodBindTR<bool,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bc68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bcc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bcc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bd28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bd28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bd88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bd88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, Node const*>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Node_const*>::~MethodBindTR(MethodBindTR<Ref<Tween>,Node_const*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bde8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, Node const*>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Node_const*>::~MethodBindTR(MethodBindTR<Ref<Tween>,Node_const*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bde8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TweenProcessMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012be48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TweenProcessMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012be48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TweenPauseMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bea8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TweenPauseMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bea8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,bool>::~MethodBindTR(MethodBindTR<Ref<Tween>,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bf08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,bool>::~MethodBindTR(MethodBindTR<Ref<Tween>,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bf08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,int>::~MethodBindTR(MethodBindTR<Ref<Tween>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bf68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,int>::~MethodBindTR(MethodBindTR<Ref<Tween>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bf68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bfc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012bfc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, float>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,float>::~MethodBindTR(MethodBindTR<Ref<Tween>,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c028;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, float>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,float>::~MethodBindTR(MethodBindTR<Ref<Tween>,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c028;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TransitionType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c088;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TransitionType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c088;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::EaseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c0e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::EaseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c0e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Tween>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>>::~MethodBindTR(MethodBindTR<Ref<Tween>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c148;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Tween>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>>::~MethodBindTR(MethodBindTR<Ref<Tween>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c148;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::~MethodBindTRS(MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
                 *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::~MethodBindTRS(MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
                 *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Variant_const&>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c208;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Variant_const&>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c208;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>>::~MethodBindTR(MethodBindTR<Ref<PropertyTweener>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c268;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>>::~MethodBindTR(MethodBindTR<Ref<PropertyTweener>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c268;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Tween::EaseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c328;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Tween::EaseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c328;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<CallbackTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<CallbackTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c448;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<CallbackTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<CallbackTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c448;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c4a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c4a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Tween::TransitionType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c508;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Tween::TransitionType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c508;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Tween::EaseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c568;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Tween::EaseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c568;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<SubtweenTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c5c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<SubtweenTweener>,double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012c5c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::_gen_argument_type
          (MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
           *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 6) && (cVar1 = '\x03', 1 < param_1 - 2U)) {
    cVar1 = (param_1 - 4U < 2) * '\x02';
  }
  return cVar1;
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::ptrcall(MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
          *this,Object *param_1,void **param_2,void *param_3)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (**(code **)(this + 0x58))
            (*param_2[2],*param_2[3],local_38,*param_2,param_2[1],*param_2[4],*param_2[5]);
  Variant::operator=((Variant *)param_3,(Variant *)local_38);
  if ((&Variant::needs_deinit)[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::validated_call(MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
                 *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))
            (*(undefined8 *)(param_2[2] + 8),*(undefined8 *)(param_2[3] + 8),local_38,*param_2,
             param_2[1],*(undefined4 *)(param_2[4] + 8),*(undefined4 *)(param_2[5] + 8));
  Variant::operator=(param_3,(Variant *)local_38);
  if ((&Variant::needs_deinit)[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::~CallbackTweener() */

void __thiscall CallbackTweener::~CallbackTweener(CallbackTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b620;
  if (*(long *)(this + 0x1b0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1b0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Callable::~Callable((Callable *)(this + 0x198));
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* CallbackTweener::~CallbackTweener() */

void __thiscall CallbackTweener::~CallbackTweener(CallbackTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b620;
  if (*(long *)(this + 0x1b0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1b0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Callable::~Callable((Callable *)(this + 0x198));
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b8);
  return;
}



/* MethodTweener::~MethodTweener() */

void __thiscall MethodTweener::~MethodTweener(MethodTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b798;
  if ((*(long *)(this + 0x208) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x208);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  Callable::~Callable((Callable *)(this + 0x1f8));
  if ((&Variant::needs_deinit)[*(int *)(this + 0x1e0)] == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  if (cVar2 == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* MethodTweener::~MethodTweener() */

void __thiscall MethodTweener::~MethodTweener(MethodTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b798;
  if ((*(long *)(this + 0x208) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x208);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  Callable::~Callable((Callable *)(this + 0x1f8));
  if ((&Variant::needs_deinit)[*(int *)(this + 0x1e0)] == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  if (cVar2 == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x210);
  return;
}



/* SubtweenTweener::~SubtweenTweener() */

void __thiscall SubtweenTweener::~SubtweenTweener(SubtweenTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b910;
  if (*(long *)(this + 0x198) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x198);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* SubtweenTweener::~SubtweenTweener() */

void __thiscall SubtweenTweener::~SubtweenTweener(SubtweenTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b910;
  if (*(long *)(this + 0x198) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x198);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a8);
  return;
}



/* MethodTweener::_get_class_namev() const */

undefined8 * MethodTweener::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010d673:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d673;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MethodTweener");
      goto LAB_0010d6de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MethodTweener");
LAB_0010d6de:
  return &_get_class_namev()::_class_name_static;
}



/* Tweener::_get_class_namev() const */

undefined8 * Tweener::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010d753:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d753;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Tweener");
      goto LAB_0010d7be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Tweener");
LAB_0010d7be:
  return &_get_class_namev()::_class_name_static;
}



/* Tween::_get_class_namev() const */

undefined8 * Tween::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010d833:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d833;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Tween");
      goto LAB_0010d89e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Tween");
LAB_0010d89e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010d913:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d913;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010d97e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010d97e:
  return &_get_class_namev()::_class_name_static;
}



/* PropertyTweener::_get_class_namev() const */

undefined8 * PropertyTweener::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010da03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010da03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PropertyTweener");
      goto LAB_0010da6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PropertyTweener");
LAB_0010da6e:
  return &_get_class_namev()::_class_name_static;
}



/* IntervalTweener::_get_class_namev() const */

undefined8 * IntervalTweener::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010daf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010daf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"IntervalTweener");
      goto LAB_0010db5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"IntervalTweener");
LAB_0010db5e:
  return &_get_class_namev()::_class_name_static;
}



/* SubtweenTweener::_get_class_namev() const */

undefined8 * SubtweenTweener::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010dbe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010dbe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SubtweenTweener");
      goto LAB_0010dc4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SubtweenTweener");
LAB_0010dc4e:
  return &_get_class_namev()::_class_name_static;
}



/* CallbackTweener::_get_class_namev() const */

undefined8 * CallbackTweener::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010dcd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010dcd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CallbackTweener");
      goto LAB_0010dd3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CallbackTweener");
LAB_0010dd3e:
  return &_get_class_namev()::_class_name_static;
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  Variant *pVVar12;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar13;
  long in_FS_OFFSET;
  double dVar14;
  double dVar15;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_b8 [8];
  int local_98 [8];
  Variant *local_78 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 7) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar13;
    }
    if ((int)(6 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar11 + -6 + (int)lVar7;
          if (lVar13 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_78[lVar7] = pVVar12;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[5],2);
      uVar4 = _LC72;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar8 = Variant::operator_cast_to_long(local_78[5]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[4],2);
      uVar4 = _LC73;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar9 = Variant::operator_cast_to_long(local_78[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[3],3);
      uVar4 = _LC74;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      dVar14 = Variant::operator_cast_to_double(local_78[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],3);
      uVar4 = _LC75;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      dVar15 = Variant::operator_cast_to_double(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 1;
      }
      Variant::Variant((Variant *)local_b8,local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 0;
      }
      Variant::Variant((Variant *)local_98,local_78[0]);
      (*(code *)pVVar1)(dVar15,dVar14,local_d8,(Variant *)local_98,(Variant *)local_b8,
                        uVar9 & 0xffffffff,uVar8 & 0xffffffff);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_d8[0];
      *(undefined8 *)(param_1 + 8) = local_d0;
      *(undefined8 *)(param_1 + 0x10) = uStack_c8;
      if ((&Variant::needs_deinit)[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((&Variant::needs_deinit)[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010de80;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 3;
  }
  *in_R9 = uVar6;
  in_R9[2] = 6;
LAB_0010de80:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Tweener::get_class() const */

void Tweener::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodTweener::get_class() const */

void MethodTweener::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::get_class() const */

void Tween::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SubtweenTweener::get_class() const */

void SubtweenTweener::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyTweener::get_class() const */

void PropertyTweener::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::get_class() const */

void CallbackTweener::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IntervalTweener::get_class() const */

void IntervalTweener::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010e84f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010e84f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010e903;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010e9b3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010e9b3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010e903;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010e903:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tweener::is_class(String const&) const */

undefined8 __thiscall Tweener::is_class(Tweener *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010eadf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010eadf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010eb93;
  }
  cVar5 = String::operator==(param_1,"Tweener");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010eb93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SubtweenTweener::is_class(String const&) const */

undefined8 __thiscall SubtweenTweener::is_class(SubtweenTweener *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010ec5f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010ec5f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010ed13;
  }
  cVar5 = String::operator==(param_1,"SubtweenTweener");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Tweener::is_class((Tweener *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ed13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodTweener::is_class(String const&) const */

undefined8 __thiscall MethodTweener::is_class(MethodTweener *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010eddf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010eddf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010ee93;
  }
  cVar5 = String::operator==(param_1,"MethodTweener");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Tweener::is_class((Tweener *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ee93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::is_class(String const&) const */

undefined8 __thiscall CallbackTweener::is_class(CallbackTweener *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010ef5f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010ef5f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010f013;
  }
  cVar5 = String::operator==(param_1,"CallbackTweener");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Tweener::is_class((Tweener *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f013:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IntervalTweener::is_class(String const&) const */

undefined8 __thiscall IntervalTweener::is_class(IntervalTweener *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010f0df;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010f0df:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010f193;
  }
  cVar5 = String::operator==(param_1,"IntervalTweener");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Tweener::is_class((Tweener *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f193:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyTweener::is_class(String const&) const */

undefined8 __thiscall PropertyTweener::is_class(PropertyTweener *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010f25f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010f25f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010f313;
  }
  cVar5 = String::operator==(param_1,"PropertyTweener");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Tweener::is_class((Tweener *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f313:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::is_class(String const&) const */

undefined8 __thiscall Tween::is_class(Tween *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010f3df;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010f3df:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010f493;
  }
  cVar5 = String::operator==(param_1,"Tween");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f493:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if ((&needs_deinit)[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010fa00) */
/* String vformat<NodePath, Object const*>(String const&, NodePath const, Object const* const) */

undefined8 *
vformat<NodePath,Object_const*>(undefined8 *param_1,bool *param_2,NodePath *param_3,Object *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010fcb8) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  Array::~Array(local_c8);
  if ((&Variant::needs_deinit)[(int)local_60] == '\0') {
    cVar1 = (&Variant::needs_deinit)[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = (&Variant::needs_deinit)[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010ffb8) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  Array::~Array(local_c8);
  if ((&Variant::needs_deinit)[(int)local_60] == '\0') {
    cVar1 = (&Variant::needs_deinit)[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = (&Variant::needs_deinit)[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x110182);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC102;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0011022a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC102;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011022a:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Tween::TweenProcessMode, void>::get_class_info() */

GetTypeInfo<Tween::TweenProcessMode,void> * __thiscall
GetTypeInfo<Tween::TweenProcessMode,void>::get_class_info
          (GetTypeInfo<Tween::TweenProcessMode,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Tween::TweenProcessMode";
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Tween::TweenPauseMode, void>::get_class_info() */

GetTypeInfo<Tween::TweenPauseMode,void> * __thiscall
GetTypeInfo<Tween::TweenPauseMode,void>::get_class_info
          (GetTypeInfo<Tween::TweenPauseMode,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Tween::TweenPauseMode";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Tween::EaseType, void>::get_class_info() */

GetTypeInfo<Tween::EaseType,void> * __thiscall
GetTypeInfo<Tween::EaseType,void>::get_class_info(GetTypeInfo<Tween::EaseType,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Tween::EaseType";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001108d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_001108d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110b74;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00110b74:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110d33;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00110d33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110f60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00110f60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111172;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00111172:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111321;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00111321:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  double dVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111550;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      dVar5 = (double)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,dVar5);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00111550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111764;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00111764:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111913;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_00111913:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111ba0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00111ba0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00111f1f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111f1f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001120df;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001120df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool,double>::validated_call
          (MethodBindTR<bool,double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011213a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(*(undefined8 *)(*param_2 + 8),param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0011213a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool,double>::ptrcall
          (MethodBindTR<bool,double> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112319;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(**param_2,param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00112319:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::ptrcall
          (MethodBindTR<Ref<SubtweenTweener>,double> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011256b;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(**param_2,(StringName *)&local_48);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011256b;
    *(undefined8 *)param_3 = 0;
    goto LAB_001125b1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001125b1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001125b1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011256b;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011256b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant, double>::ptrcall(Object*,
   void const**, void*) const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::ptrcall
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this,
          Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  Object *pOVar5;
  long *plVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_88 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (Object *)0x110720;
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_001128b9;
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[3];
  Variant::Variant((Variant *)local_78,(Variant *)param_2[2]);
  Variant::Variant((Variant *)local_58,(Variant *)param_2[1]);
  (*pcVar4)(uVar1,(StringName *)&local_88,param_1 + lVar2,*param_2,(Variant *)local_58,
            (Variant *)local_78);
  if (local_88 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar7 = *param_3;
    if (pOVar7 != (Object *)0x0) {
      *(undefined8 *)param_3 = 0;
      goto LAB_00112901;
    }
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
    pOVar7 = *param_3;
    if (pOVar7 != pOVar5) {
      *(Object **)param_3 = pOVar5;
      if (pOVar5 == (Object *)0x0) {
        if (pOVar7 != (Object *)0x0) goto LAB_00112901;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)param_3 = 0;
        }
        if (pOVar7 != (Object *)0x0) {
LAB_00112901:
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar7);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        if (local_88 == (Object *)0x0) goto LAB_00112894;
      }
    }
    cVar3 = RefCounted::unreference();
    pOVar7 = local_88;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_88);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
LAB_00112894:
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001128b9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,double>::ptrcall
          (MethodBindTR<Ref<MethodTweener>,double> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112bab;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(**param_2,(StringName *)&local_48);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00112bab;
    *(undefined8 *)param_3 = 0;
    goto LAB_00112bf1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00112bf1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00112bf1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00112bab;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00112bab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::ptrcall
          (MethodBindTR<Ref<MethodTweener>,Tween::TransitionType> *this,Object *param_1,
          void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112e89;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00112e89;
    *(undefined8 *)param_3 = 0;
    goto LAB_00112ed1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00112ed1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00112ed1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00112e89;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00112e89:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::ptrcall
          (MethodBindTR<Ref<MethodTweener>,Tween::EaseType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113169;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00113169;
    *(undefined8 *)param_3 = 0;
    goto LAB_001131b1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001131b1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001131b1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00113169;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00113169:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::ptrcall
          (MethodBindTR<Ref<CallbackTweener>,Callable_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113447;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00113447;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113491;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113491;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113491:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00113447;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00113447:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::ptrcall
          (MethodBindTR<Ref<CallbackTweener>,double> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011372b;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(**param_2,(StringName *)&local_48);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011372b;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113771;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113771;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113771:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011372b;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011372b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Variant_const&>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>,Variant_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113a07;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00113a07;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113a51;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113a51;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113a51:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00113a07;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00113a07:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113ce6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00113ce6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113d29;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113d29;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113d29:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00113ce6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00113ce6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType> *this,Object *param_1,
          void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113fa9;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00113fa9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113ff1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113ff1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113ff1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00113fa9;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00113fa9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>,Tween::EaseType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114289;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00114289;
    *(undefined8 *)param_3 = 0;
    goto LAB_001142d1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001142d1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001142d1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00114289;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00114289:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>,Callable_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114567;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00114567;
    *(undefined8 *)param_3 = 0;
    goto LAB_001145b1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001145b1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001145b1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00114567;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00114567:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>,double> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011484b;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(**param_2,(StringName *)&local_48);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011484b;
    *(undefined8 *)param_3 = 0;
    goto LAB_00114891;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00114891;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00114891:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011484b;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011484b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::ptrcall
          (MethodBindTR<Ref<Tween>,Tween::TweenProcessMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114b29;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00114b29;
    *(undefined8 *)param_3 = 0;
    goto LAB_00114b71;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00114b71;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00114b71:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00114b29;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00114b29:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::ptrcall
          (MethodBindTR<Ref<Tween>,Tween::TweenPauseMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114e09;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00114e09;
    *(undefined8 *)param_3 = 0;
    goto LAB_00114e51;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00114e51;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00114e51:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00114e09;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00114e09:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,bool>::ptrcall
          (MethodBindTR<Ref<Tween>,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001150f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2 != '\0');
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001150f0;
    *(undefined8 *)param_3 = 0;
    goto LAB_00115131;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00115131;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00115131:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001150f0;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001150f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,int>::ptrcall
          (MethodBindTR<Ref<Tween>,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001153c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001153c9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00115411;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00115411;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00115411:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001153c9;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001153c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,float>::ptrcall
          (MethodBindTR<Ref<Tween>,float> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001156af;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar6._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar6._0_4_ = (float)**param_2;
  (*pcVar2)(auVar6._0_8_,(StringName *)&local_48);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001156af;
    *(undefined8 *)param_3 = 0;
    goto LAB_001156f1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001156f1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001156f1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001156af;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001156af:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TransitionType>::ptrcall
          (MethodBindTR<Ref<Tween>,Tween::TransitionType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115989;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00115989;
    *(undefined8 *)param_3 = 0;
    goto LAB_001159d1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001159d1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001159d1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00115989;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00115989:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::EaseType>::ptrcall
          (MethodBindTR<Ref<Tween>,Tween::EaseType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115c69;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00115c69;
    *(undefined8 *)param_3 = 0;
    goto LAB_00115cb1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00115cb1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00115cb1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00115c69;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00115c69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>>::ptrcall
          (MethodBindTR<Ref<Tween>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115f46;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00115f46;
    *(undefined8 *)param_3 = 0;
    goto LAB_00115f89;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00115f89;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00115f89:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00115f46;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00115f46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Node const*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Node_const*>::ptrcall
          (MethodBindTR<Ref<Tween>,Node_const*> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011620f;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  plVar4 = (long *)*param_2;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),plVar4);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011620f;
    *(undefined8 *)param_3 = 0;
    goto LAB_00116251;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00116251;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00116251:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011620f;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011620f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::ptrcall
          (MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = (Object *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116532;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_48 = **param_2, local_48 == (Object *)0x0)) {
LAB_0011649d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_0011649d;
  }
  (*pcVar6)(&local_50,param_1 + lVar1,(StringName *)&local_48);
  if (local_50 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 != (Object *)0x0) {
      *(undefined8 *)param_3 = 0;
      goto LAB_00116569;
    }
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 != pOVar3) {
      *(Object **)param_3 = pOVar3;
      if (pOVar3 == (Object *)0x0) {
        if (pOVar5 != (Object *)0x0) goto LAB_00116569;
      }
      else {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)param_3 = 0;
        }
        if (pOVar5 != (Object *)0x0) {
LAB_00116569:
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
        if (local_50 == (Object *)0x0) goto LAB_0011651b;
      }
    }
    cVar2 = RefCounted::unreference();
    pOVar5 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0011651b:
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00116532:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<IntervalTweener>, double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::ptrcall
          (MethodBindTR<Ref<IntervalTweener>,double> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110720;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011683b;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(**param_2,(StringName *)&local_48);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011683b;
    *(undefined8 *)param_3 = 0;
    goto LAB_00116881;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00116881;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00116881:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011683b;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011683b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::ptrcall
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this,
          Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  Object *pOVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00116b6d;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[3];
  Variant::Variant((Variant *)local_58,(Variant *)param_2[2]);
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
  }
  (*pcVar7)(uVar1,(StringName *)&local_68,param_1 + lVar2,plVar5,param_2[1],(Variant *)local_58);
  if (local_68 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)param_3 = 0;
      goto LAB_00116bb1;
    }
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != pOVar4) {
      *(Object **)param_3 = pOVar4;
      if (pOVar4 == (Object *)0x0) {
        if (pOVar6 != (Object *)0x0) goto LAB_00116bb1;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)param_3 = 0;
        }
        if (pOVar6 != (Object *)0x0) {
LAB_00116bb1:
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar6);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
        }
        if (local_68 == (Object *)0x0) goto LAB_00116b57;
      }
    }
    cVar3 = RefCounted::unreference();
    pOVar6 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_00116b57:
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00116b6d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<IntervalTweener>, double>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<IntervalTweener>,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110720;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116ee8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116f30;
LAB_00116f20:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116f30:
        uVar7 = 4;
        goto LAB_00116edd;
      }
      if (in_R8D == 1) goto LAB_00116f20;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,3);
    uVar4 = _LC123;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_double(pVVar11);
    (*(code *)pVVar12)(&local_58,(Variant *)((long)plVar10 + (long)pVVar1));
    Variant::Variant((Variant *)local_48,local_58);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  else {
    uVar7 = 3;
LAB_00116edd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00116ee8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<bool, double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117280;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001172c0;
LAB_001172b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001172c0:
        uVar7 = 4;
        goto LAB_00117275;
      }
      if (in_R8D == 1) goto LAB_001172b0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,3);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_double(pVVar11);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1));
    Variant::Variant((Variant *)local_48,bVar6);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_00117275:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00117280:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, double>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<CallbackTweener>,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110720;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001175f8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00117640;
LAB_00117630:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117640:
        uVar7 = 4;
        goto LAB_001175ed;
      }
      if (in_R8D == 1) goto LAB_00117630;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,3);
    uVar4 = _LC123;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_double(pVVar11);
    (*(code *)pVVar12)(&local_58,(Variant *)((long)plVar10 + (long)pVVar1));
    Variant::Variant((Variant *)local_48,local_58);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  else {
    uVar7 = 3;
LAB_001175ed:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001175f8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<SubtweenTweener>,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110720;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001179b8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00117a00;
LAB_001179f0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117a00:
        uVar7 = 4;
        goto LAB_001179ad;
      }
      if (in_R8D == 1) goto LAB_001179f0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,3);
    uVar4 = _LC123;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_double(pVVar11);
    (*(code *)pVVar12)(&local_58,(Variant *)((long)plVar10 + (long)pVVar1));
    Variant::Variant((Variant *)local_48,local_58);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  else {
    uVar7 = 3;
LAB_001179ad:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001179b8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<CallbackTweener>,Callable_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00117d90;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00117de0;
LAB_00117dd0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117de0:
        uVar7 = 4;
        goto LAB_00117d85;
      }
      if (in_R8D == 1) goto LAB_00117dd0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x19);
    uVar4 = _LC124;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Callable((Variant *)&local_68);
    (*(code *)pVVar12)(&local_70,(Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((local_70 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    Callable::~Callable((Callable *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00117d85:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00117d90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant, double>::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  double dVar15;
  Variant *local_100;
  long local_e8;
  Object *local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_a8 [8];
  int local_88 [8];
  Variant *local_68 [5];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_d8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_d8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_d8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_e0 = (Object *)0x0;
      local_d0 = 0x35;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<StringName>((StringName *)&local_d8,(StrRange *)&local_e0,&local_e8);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_d8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      if ((StringName::configured != '\0') && (local_e8 != 0)) {
        StringName::unref();
      }
      goto LAB_00118282;
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_100 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar11) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar11 + -4 + (int)lVar8;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_68[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)local_100 & 1) != 0) {
        local_100 = *(Variant **)(local_100 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],3);
      uVar4 = _LC74;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      dVar15 = Variant::operator_cast_to_double(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_a8,local_68[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 1;
      }
      Variant::Variant((Variant *)local_88,local_68[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x19);
      uVar4 = _LC124;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Callable((Variant *)&local_d8);
      (*(code *)local_100)
                (dVar15,&local_e0,(Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_d8,
                 (Variant *)local_88,(Variant *)local_a8);
      Variant::Variant((Variant *)local_c8,local_e0);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_c8[0];
      *(undefined8 *)(param_1 + 8) = local_c0;
      *(undefined8 *)(param_1 + 0x10) = uStack_b8;
      if (local_e0 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_e0;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_e0);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      Callable::~Callable((Callable *)&local_d8);
      if ((&Variant::needs_deinit)[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((&Variant::needs_deinit)[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00118282;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_00118282:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  int iVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  double dVar17;
  long local_c8;
  Object *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88 [8];
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_b8,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar9 = (long *)plVar14[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar14[1] + 0x20);
    }
    if (local_b8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_b8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_c0 = (Object *)0x0;
      local_b0 = 0x35;
      String::parse_latin1((StrRange *)&local_c0);
      vformat<StringName>((StringName *)&local_b8,(StrRange *)&local_c0,&local_c8);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_b8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      goto LAB_00118750;
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar12 = iVar11 + -4 + (int)lVar7;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar7] = pVVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],3);
      uVar4 = _LC74;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      dVar17 = Variant::operator_cast_to_double(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_88,local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0x16);
      uVar4 = _LC126;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_NodePath((Variant *)&local_b8);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x18);
      if (cVar5 == '\0') {
LAB_00118672:
        uVar4 = _LC127;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar8 = Variant::operator_cast_to_Object_(local_68[0]);
        pOVar10 = Variant::operator_cast_to_Object_(local_68[0]);
        if ((pOVar8 != (Object *)0x0) && (pOVar10 == (Object *)0x0)) goto LAB_00118672;
      }
      pOVar8 = Variant::operator_cast_to_Object_(local_68[0]);
      (*(code *)pVVar16)(dVar17,&local_c0,(Variant *)((long)plVar14 + (long)pVVar1),pOVar8,
                         (Variant *)&local_b8,(Variant *)local_88);
      Variant::Variant((Variant *)local_a8,local_c0);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_a8[0];
      *(undefined8 *)(param_1 + 8) = local_a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      if (((local_c0 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar8 = local_c0, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_c0), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      NodePath::~NodePath((NodePath *)&local_b8);
      if ((&Variant::needs_deinit)[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00118750;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 3;
  }
  *in_R9 = uVar6;
  in_R9[2] = 4;
LAB_00118750:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::validated_call
          (MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  Object *local_68;
  Object *local_60;
  char *local_58;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = (Object *)0x0;
      local_50 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_00118b2f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*param_2 + 0x10));
  local_60 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_60;
  if (pOVar4 != local_60) {
    if (pOVar4 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_00118ab8:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Tween::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_60 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00118ab8;
      }
    }
  }
  if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)(&local_68,param_1 + lVar1,&local_60);
  if (local_68 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_58 = *(char **)(local_68 + 0x60);
    local_50 = local_68;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_68 + 0x140))(local_68);
        Memory::free_static(local_68,false);
      }
    }
  }
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00118b2f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::validated_call
          (MethodBindTR<Ref<SubtweenTweener>,double> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118e3e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(*(undefined8 *)(*param_2 + 8),&local_50);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00118e3e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Node const*>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Ref<Tween>,Node_const*>::validated_call
          (MethodBindTR<Ref<Tween>,Node_const*> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011908d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011908d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::validated_call
          (MethodBindTR<Ref<Tween>,Tween::TweenProcessMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001192dc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_001192dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::validated_call
          (MethodBindTR<Ref<Tween>,Tween::TweenPauseMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011952c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011952c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>,bool>::validated_call
          (MethodBindTR<Ref<Tween>,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011977d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),(*param_2)[8]);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011977d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>,int>::validated_call
          (MethodBindTR<Ref<Tween>,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001199cc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_001199cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>,float>::validated_call
          (MethodBindTR<Ref<Tween>,float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119c22;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar5._0_4_ = (float)*(double *)(*param_2 + 8);
  (*pcVar3)(auVar5._0_8_,&local_50);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00119c22:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TransitionType>::validated_call
          (MethodBindTR<Ref<Tween>,Tween::TransitionType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119e7c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00119e7c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::EaseType>::validated_call
          (MethodBindTR<Ref<Tween>,Tween::EaseType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a0cc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011a0cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Tween>>::validated_call
          (MethodBindTR<Ref<Tween>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110720;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a316;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011a316:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant,
   double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::validated_call
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_98;
  Object *local_90;
  char *local_88;
  Object *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_88 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = (Object *)0x0;
      local_80 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a5b8;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined8 *)(param_2[3] + 8);
  Variant::Variant((Variant *)local_78,param_2[2]);
  Variant::Variant((Variant *)local_58,param_2[1]);
  (*pcVar6)(uVar1,&local_90,param_1 + lVar2,*param_2 + 8,(Variant *)local_58,(Variant *)local_78);
  if (local_90 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_88 = *(char **)(local_90 + 0x60);
    local_80 = local_90;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_90 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_90;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_90);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011a5b8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, double>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,double>::validated_call
          (MethodBindTR<Ref<MethodTweener>,double> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a81e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(*(undefined8 *)(*param_2 + 8),&local_50);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011a81e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::validated_call
          (MethodBindTR<Ref<MethodTweener>,Tween::TransitionType> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aa6c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011aa6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::validated_call
          (MethodBindTR<Ref<MethodTweener>,Tween::EaseType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011acbc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011acbc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::validated_call
          (MethodBindTR<Ref<CallbackTweener>,Callable_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011af0d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011af0d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, double>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::validated_call
          (MethodBindTR<Ref<CallbackTweener>,double> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b15e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(*(undefined8 *)(*param_2 + 8),&local_50);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011b15e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::validated_call
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  char *local_58;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = (Object *)0x0;
      local_50 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b3fc;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined8 *)(param_2[3] + 8);
  Variant::Variant((Variant *)local_48,param_2[2]);
  (*pcVar6)(uVar1,&local_60,param_1 + lVar2,*(undefined8 *)(*param_2 + 0x10),param_2[1] + 8,
            (Variant *)local_48);
  if (local_60 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_58 = *(char **)(local_60 + 0x60);
    local_50 = local_60;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_60 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_60;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_60);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011b3fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Variant_const&>::validated_call
          (MethodBindTR<Ref<PropertyTweener>,Variant_const&> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b649;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011b649:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>>::validated_call
          (MethodBindTR<Ref<PropertyTweener>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110720;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b896;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011b896:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::validated_call
          (MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bacc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011bacc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::validated_call
          (MethodBindTR<Ref<PropertyTweener>,Tween::EaseType> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bd1c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011bd1c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::validated_call
          (MethodBindTR<Ref<PropertyTweener>,Callable_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bf6d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011bf6d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, double>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::validated_call
          (MethodBindTR<Ref<PropertyTweener>,double> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c1be;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(*(undefined8 *)(*param_2 + 8),&local_50);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011c1be:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<IntervalTweener>, double>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::validated_call
          (MethodBindTR<Ref<IntervalTweener>,double> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c40e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(*(undefined8 *)(*param_2 + 8),&local_50);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011c40e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC63;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_0011c825;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_0011c825:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC63;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0011c9b5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0011c9b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC63;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0011cb05;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0011cb05:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<PropertyTweener>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "PropertyTweener";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_0011cc18;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_0011cc18:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<Tween>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Tween";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0011cd7d;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0011cd7d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0011cffd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011cffd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011d01f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011d01f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Tween::_get_property_listv(Tween *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Tween";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Tween";
  local_98 = 0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d351;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d351:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Tween",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tweener::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Tweener::_get_property_listv(Tweener *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Tweener";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Tweener";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d601;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d601:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Tweener",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SubtweenTweener::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SubtweenTweener::_get_property_listv(SubtweenTweener *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Tweener::_get_property_listv((Tweener *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SubtweenTweener";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SubtweenTweener";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d8b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d8b1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SubtweenTweener",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Tweener::_get_property_listv((Tweener *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodTweener::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MethodTweener::_get_property_listv(MethodTweener *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Tweener::_get_property_listv((Tweener *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MethodTweener";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MethodTweener";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011db61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011db61:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MethodTweener",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Tweener::_get_property_listv((Tweener *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IntervalTweener::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
IntervalTweener::_get_property_listv(IntervalTweener *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Tweener::_get_property_listv((Tweener *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "IntervalTweener";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "IntervalTweener";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011de11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011de11:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"IntervalTweener",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Tweener::_get_property_listv((Tweener *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallbackTweener::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CallbackTweener::_get_property_listv(CallbackTweener *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Tweener::_get_property_listv((Tweener *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CallbackTweener";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CallbackTweener";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011e0c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e0c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CallbackTweener",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Tweener::_get_property_listv((Tweener *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyTweener::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
PropertyTweener::_get_property_listv(PropertyTweener *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Tweener::_get_property_listv((Tweener *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PropertyTweener";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PropertyTweener";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011e371;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e371:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PropertyTweener",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Tweener::_get_property_listv((Tweener *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* Tweener::_bind_methods() [clone .cold] */

void Tweener::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Tween::_bind_methods() [clone .cold] */

void Tween::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<List<Ref<Tweener>, DefaultAllocator> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<List<Ref<Tweener>,DefaultAllocator>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Tween::append(Ref<Tweener>) [clone .cold] */

void Tween::append(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Tweener::_initialize_classv() */

void Tweener::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* IntervalTweener::_initialize_classv() */

void IntervalTweener::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Tweener::initialize_class()::initialized == '\0') {
      Tweener::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Tweener";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "IntervalTweener";
    local_60 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_88 = 0;
    local_78 = "Tween::EaseType";
    local_80 = 6;
    local_c0 = 0;
    local_70 = 0xf;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0011e982;
  }
  local_b0 = 0;
  local_70 = 0xf;
  local_78 = "PropertyTweener";
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0011ea7f:
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011ea7f;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0011e982:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = "Tween";
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_b0,0x11,
               (StrRange *)&local_a8,6,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    PropertyInfo::operator=((PropertyInfo *)&local_98,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar2 = local_90._0_8_;
    uVar3 = local_90._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0011ec2a;
  }
  local_a0 = 0;
  local_60 = 0xf;
  local_68 = "SubtweenTweener";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011ed27:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011ed27;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0011ec2a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_88 = 0;
    local_78 = "Tween::EaseType";
    local_80 = 6;
    local_c0 = 0;
    local_70 = 0xf;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0011ef02;
  }
  local_b0 = 0;
  local_70 = 0xd;
  local_78 = "MethodTweener";
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0011efff:
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011efff;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0011ef02:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_88 = 0;
    local_78 = "Tween::TransitionType";
    local_80 = 6;
    local_c0 = 0;
    local_70 = 0x15;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0)
    ;
    StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
    local_c8 = 0;
    local_d0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
               (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0011f1e2;
  }
  local_b0 = 0;
  local_70 = 0xd;
  local_78 = "MethodTweener";
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0011f2df:
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011f2df;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0011f1e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_88 = 0;
    local_78 = "Tween::TransitionType";
    local_80 = 6;
    local_c0 = 0;
    local_70 = 0x15;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0)
    ;
    StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
    local_c8 = 0;
    local_d0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
               (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0011f4c2;
  }
  local_b0 = 0;
  local_70 = 0xf;
  local_78 = "PropertyTweener";
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0011f5bf:
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011f5bf;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0011f4c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Tween>::unref() */

void __thiscall Ref<Tween>::unref(Ref<Tween> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f878;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011f86d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0011f878;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011f8c0;
LAB_0011f8b0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f8c0:
      uVar7 = 4;
      goto LAB_0011f86d;
    }
    if (in_R8D == 1) goto LAB_0011f8b0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC127;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_68 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_68;
  if (pOVar8 != local_68) {
    if (pOVar8 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0011f9dd:
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Tween::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_68 = pOVar8;
        if ((pOVar8 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_68 = (Object *)0x0;
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011f9dd;
      }
    }
  }
  (*(code *)pVVar13)(&local_70,(Variant *)((long)plVar11 + (long)pVVar1),(Ref<Tween> *)&local_68);
  Variant::Variant((Variant *)local_58,local_70);
  Variant::operator=((Variant *)param_1,(Variant *)local_58);
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  Ref<Tween>::unref((Ref<Tween> *)&local_68);
LAB_0011f878:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, Node const*>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Ref<Tween>,Node_const*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fcb2;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_0011fca5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_0011fcb2;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011fd00;
LAB_0011fcf0:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar13 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_0011fd00:
      uVar5 = 4;
      goto LAB_0011fca5;
    }
    if (in_R8D == 1) goto LAB_0011fcf0;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar13 = pVVar13 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar12 & 1) != 0) {
    pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  if (cVar4 == '\0') {
LAB_0011fc00:
    uVar3 = _LC127;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar13);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar13);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_0011fc00;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar13);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
  Variant::Variant((Variant *)local_58,local_68);
  Variant::operator=((Variant *)param_1,(Variant *)local_58);
  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Ref<Tween>::unref((Ref<Tween> *)&local_68);
LAB_0011fcb2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00120080;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001200d0;
LAB_001200c0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001200d0:
        uVar6 = 4;
        goto LAB_00120075;
      }
      if (in_R8D == 1) goto LAB_001200c0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00120075:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120080:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00120420;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00120470;
LAB_00120460:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120470:
        uVar6 = 4;
        goto LAB_00120415;
      }
      if (in_R8D == 1) goto LAB_00120460;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00120415:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120420:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Ref<Tween>,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001207c0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00120810;
LAB_00120800:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120810:
        uVar7 = 4;
        goto LAB_001207b5;
      }
      if (in_R8D == 1) goto LAB_00120800;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,1);
    uVar4 = _LC140;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar11);
    (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),bVar6);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_001207b5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001207c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<Tween>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00120b60;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00120bb0;
LAB_00120ba0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120bb0:
        uVar7 = 4;
        goto LAB_00120b55;
      }
      if (in_R8D == 1) goto LAB_00120ba0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00120b55:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00120b60:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, float>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Ref<Tween>,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00120ef8;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00120f40;
LAB_00120f30:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120f40:
        uVar6 = 4;
        goto LAB_00120eed;
      }
      if (in_R8D == 1) goto LAB_00120f30;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,3);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_float(pVVar10);
    (*(code *)pVVar11)((Ref<Tween> *)&local_68,(Variant *)((long)plVar9 + (long)pVVar1));
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00120eed:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120ef8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<Tween>,Tween::TransitionType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121290;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001212e0;
LAB_001212d0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001212e0:
        uVar6 = 4;
        goto LAB_00121285;
      }
      if (in_R8D == 1) goto LAB_001212d0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00121285:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00121290:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<Tween>,Tween::EaseType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121630;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00121680;
LAB_00121670:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121680:
        uVar6 = 4;
        goto LAB_00121625;
      }
      if (in_R8D == 1) goto LAB_00121670;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<Tween> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Tween>::unref((Ref<Tween> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00121625:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00121630:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Tween>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<Tween>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110720;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121960;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Ref<Tween> *)&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Ref<Tween>::unref((Ref<Tween> *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00121960:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<PropertyTweener>::unref() */

void __thiscall Ref<PropertyTweener>::unref(Ref<PropertyTweener> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<PropertyTweener>,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar6 = (long *)plVar8[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar6 = (long *)(plVar8[1] + 0x20);
    }
    if (local_88 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (Object *)0x110720;
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00121cf8;
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar10 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00121d40;
LAB_00121d30:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar9 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121d40:
        uVar5 = 4;
        goto LAB_00121ced;
      }
      if (in_R8D == 1) goto LAB_00121d30;
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar9 = pVVar9 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar10 & 1) != 0) {
      pVVar10 = *(Variant **)(pVVar10 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar9,0);
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    Variant::Variant((Variant *)local_58,pVVar9);
    (*(code *)pVVar10)((Ref<PropertyTweener> *)&local_88,(Variant *)((long)plVar8 + (long)pVVar1),
                       (Variant *)local_58);
    Variant::Variant((Variant *)local_78,local_88);
    Variant::operator=((Variant *)param_1,(Variant *)local_78);
    if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_88);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar5 = 3;
LAB_00121ced:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_00121cf8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<PropertyTweener>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Ref<PropertyTweener>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110720;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122010;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Ref<PropertyTweener> *)&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00122010:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122320;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122370;
LAB_00122360:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122370:
        uVar6 = 4;
        goto LAB_00122315;
      }
      if (in_R8D == 1) goto LAB_00122360;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<PropertyTweener> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00122315:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00122320:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001226c0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122710;
LAB_00122700:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122710:
        uVar6 = 4;
        goto LAB_001226b5;
      }
      if (in_R8D == 1) goto LAB_00122700;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<PropertyTweener> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_001226b5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001226c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<PropertyTweener>,Callable_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122a70;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122ac0;
LAB_00122ab0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122ac0:
        uVar6 = 4;
        goto LAB_00122a65;
      }
      if (in_R8D == 1) goto LAB_00122ab0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x19);
    uVar4 = _LC124;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Callable((Variant *)&local_68);
    (*(code *)pVVar11)((Ref<PropertyTweener> *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_70);
    Callable::~Callable((Callable *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00122a65:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00122a70:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<PropertyTweener>, double>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<PropertyTweener>,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122e08;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122e50;
LAB_00122e40:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122e50:
        uVar6 = 4;
        goto LAB_00122dfd;
      }
      if (in_R8D == 1) goto LAB_00122e40;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,3);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_double(pVVar10);
    (*(code *)pVVar11)((Ref<PropertyTweener> *)&local_68,(Variant *)((long)plVar9 + (long)pVVar1));
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<PropertyTweener>::unref((Ref<PropertyTweener> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00122dfd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00122e08:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Ref<MethodTweener>::unref() */

void __thiscall Ref<MethodTweener>::unref(Ref<MethodTweener> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBindTR<Ref<MethodTweener>, double>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<MethodTweener>,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00123208;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00123250;
LAB_00123240:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00123250:
        uVar6 = 4;
        goto LAB_001231fd;
      }
      if (in_R8D == 1) goto LAB_00123240;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,3);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_double(pVVar10);
    (*(code *)pVVar11)((Ref<MethodTweener> *)&local_68,(Variant *)((long)plVar9 + (long)pVVar1));
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<MethodTweener>::unref((Ref<MethodTweener> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_001231fd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00123208:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001235a0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001235f0;
LAB_001235e0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001235f0:
        uVar6 = 4;
        goto LAB_00123595;
      }
      if (in_R8D == 1) goto LAB_001235e0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<MethodTweener> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<MethodTweener>::unref((Ref<MethodTweener> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00123595:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001235a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x110720;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00123940;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00123990;
LAB_00123980:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00123990:
        uVar6 = 4;
        goto LAB_00123935;
      }
      if (in_R8D == 1) goto LAB_00123980;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)((Ref<MethodTweener> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<MethodTweener>::unref((Ref<MethodTweener> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00123935:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00123940:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Ref<SubtweenTweener>::unref() */

void __thiscall Ref<SubtweenTweener>::unref(Ref<SubtweenTweener> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<Tween, Ref<PropertyTweener>, Object const*, NodePath const&,
   Variant, double>(Ref<PropertyTweener> (Tween::*)(Object const*, NodePath const&, Variant,
   double)) */

MethodBind *
create_method_bind<Tween,Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>
          (_func_Ref_Object_ptr_NodePath_ptr_Variant_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Object_ptr_NodePath_ptr_Variant_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ba88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<IntervalTweener>, double>(Ref<IntervalTweener>
   (Tween::*)(double)) */

MethodBind * create_method_bind<Tween,Ref<IntervalTweener>,double>(_func_Ref_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bae8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<CallbackTweener>, Callable const&>(Ref<CallbackTweener>
   (Tween::*)(Callable const&)) */

MethodBind *
create_method_bind<Tween,Ref<CallbackTweener>,Callable_const&>(_func_Ref_Callable_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Callable_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bb48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<MethodTweener>, Callable const&, Variant, Variant,
   double>(Ref<MethodTweener> (Tween::*)(Callable const&, Variant, Variant, double)) */

MethodBind *
create_method_bind<Tween,Ref<MethodTweener>,Callable_const&,Variant,Variant,double>
          (_func_Ref_Callable_ptr_Variant_Variant_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Callable_ptr_Variant_Variant_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bba8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<SubtweenTweener>, Ref<Tween>
   const&>(Ref<SubtweenTweener> (Tween::*)(Ref<Tween> const&)) */

MethodBind *
create_method_bind<Tween,Ref<SubtweenTweener>,Ref<Tween>const&>(_func_Ref_Ref_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bc08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, bool, double>(bool (Tween::*)(double)) */

MethodBind * create_method_bind<Tween,bool,double>(_func_bool_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bc68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween>(void (Tween::*)()) */

MethodBind * create_method_bind<Tween>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0012bcc8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, double>(double (Tween::*)() const) */

MethodBind * create_method_bind<Tween,double>(_func_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bd28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, bool>(bool (Tween::*)()) */

MethodBind * create_method_bind<Tween,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bd88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, Node const*>(Ref<Tween> (Tween::*)(Node
   const*)) */

MethodBind * create_method_bind<Tween,Ref<Tween>,Node_const*>(_func_Ref_Node_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bde8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, Tween::TweenProcessMode>(Ref<Tween>
   (Tween::*)(Tween::TweenProcessMode)) */

MethodBind *
create_method_bind<Tween,Ref<Tween>,Tween::TweenProcessMode>(_func_Ref_TweenProcessMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_TweenProcessMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012be48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, Tween::TweenPauseMode>(Ref<Tween>
   (Tween::*)(Tween::TweenPauseMode)) */

MethodBind *
create_method_bind<Tween,Ref<Tween>,Tween::TweenPauseMode>(_func_Ref_TweenPauseMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_TweenPauseMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bea8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, bool>(Ref<Tween> (Tween::*)(bool)) */

MethodBind * create_method_bind<Tween,Ref<Tween>,bool>(_func_Ref_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bf08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, int>(Ref<Tween> (Tween::*)(int)) */

MethodBind * create_method_bind<Tween,Ref<Tween>,int>(_func_Ref_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bf68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, int>(int (Tween::*)() const) */

MethodBind * create_method_bind<Tween,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012bfc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, float>(Ref<Tween> (Tween::*)(float)) */

MethodBind * create_method_bind<Tween,Ref<Tween>,float>(_func_Ref_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c028;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, Tween::TransitionType>(Ref<Tween>
   (Tween::*)(Tween::TransitionType)) */

MethodBind *
create_method_bind<Tween,Ref<Tween>,Tween::TransitionType>(_func_Ref_TransitionType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_TransitionType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c088;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>, Tween::EaseType>(Ref<Tween>
   (Tween::*)(Tween::EaseType)) */

MethodBind * create_method_bind<Tween,Ref<Tween>,Tween::EaseType>(_func_Ref_EaseType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_EaseType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c0e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Tween, Ref<Tween>>(Ref<Tween> (Tween::*)()) */

MethodBind * create_method_bind<Tween,Ref<Tween>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c148;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Tween";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PropertyTweener, Ref<PropertyTweener>, Variant
   const&>(Ref<PropertyTweener> (PropertyTweener::*)(Variant const&)) */

MethodBind *
create_method_bind<PropertyTweener,Ref<PropertyTweener>,Variant_const&>
          (_func_Ref_Variant_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c208;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PropertyTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PropertyTweener, Ref<PropertyTweener>>(Ref<PropertyTweener>
   (PropertyTweener::*)()) */

MethodBind * create_method_bind<PropertyTweener,Ref<PropertyTweener>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c268;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PropertyTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PropertyTweener, Ref<PropertyTweener>,
   Tween::TransitionType>(Ref<PropertyTweener> (PropertyTweener::*)(Tween::TransitionType)) */

MethodBind *
create_method_bind<PropertyTweener,Ref<PropertyTweener>,Tween::TransitionType>
          (_func_Ref_TransitionType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_TransitionType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c2c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PropertyTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PropertyTweener, Ref<PropertyTweener>,
   Tween::EaseType>(Ref<PropertyTweener> (PropertyTweener::*)(Tween::EaseType)) */

MethodBind *
create_method_bind<PropertyTweener,Ref<PropertyTweener>,Tween::EaseType>
          (_func_Ref_EaseType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_EaseType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c328;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PropertyTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PropertyTweener, Ref<PropertyTweener>, Callable
   const&>(Ref<PropertyTweener> (PropertyTweener::*)(Callable const&)) */

MethodBind *
create_method_bind<PropertyTweener,Ref<PropertyTweener>,Callable_const&>
          (_func_Ref_Callable_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_Callable_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PropertyTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PropertyTweener, Ref<PropertyTweener>,
   double>(Ref<PropertyTweener> (PropertyTweener::*)(double)) */

MethodBind *
create_method_bind<PropertyTweener,Ref<PropertyTweener>,double>(_func_Ref_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c3e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PropertyTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<CallbackTweener, Ref<CallbackTweener>,
   double>(Ref<CallbackTweener> (CallbackTweener::*)(double)) */

MethodBind *
create_method_bind<CallbackTweener,Ref<CallbackTweener>,double>(_func_Ref_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c448;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CallbackTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MethodTweener, Ref<MethodTweener>, double>(Ref<MethodTweener>
   (MethodTweener::*)(double)) */

MethodBind * create_method_bind<MethodTweener,Ref<MethodTweener>,double>(_func_Ref_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c4a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MethodTweener";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MethodTweener, Ref<MethodTweener>,
   Tween::TransitionType>(Ref<MethodTweener> (MethodTweener::*)(Tween::TransitionType)) */

MethodBind *
create_method_bind<MethodTweener,Ref<MethodTweener>,Tween::TransitionType>
          (_func_Ref_TransitionType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_TransitionType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c508;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MethodTweener";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MethodTweener, Ref<MethodTweener>,
   Tween::EaseType>(Ref<MethodTweener> (MethodTweener::*)(Tween::EaseType)) */

MethodBind *
create_method_bind<MethodTweener,Ref<MethodTweener>,Tween::EaseType>(_func_Ref_EaseType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_EaseType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c568;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MethodTweener";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<SubtweenTweener, Ref<SubtweenTweener>,
   double>(Ref<SubtweenTweener> (SubtweenTweener::*)(double)) */

MethodBind *
create_method_bind<SubtweenTweener,Ref<SubtweenTweener>,double>(_func_Ref_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012c5c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SubtweenTweener";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x10));
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Tween::_initialize_classv() */

void Tween::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Tween";
    local_60 = 0;
    local_40 = 5;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyTweener::~PropertyTweener() */

void __thiscall PropertyTweener::~PropertyTweener(PropertyTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b330;
  Callable::~Callable((Callable *)(this + 0x228));
  if ((*(long *)(this + 0x210) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x210);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if ((&Variant::needs_deinit)[*(int *)(this + 0x1f8)] == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1e0)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1e0)];
  }
  if (cVar2 == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  if (cVar2 == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x1a8));
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* PropertyTweener::~PropertyTweener() */

void __thiscall PropertyTweener::~PropertyTweener(PropertyTweener *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012b330;
  Callable::~Callable((Callable *)(this + 0x228));
  if ((*(long *)(this + 0x210) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x210);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if ((&Variant::needs_deinit)[*(int *)(this + 0x1f8)] == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1e0)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1e0)];
  }
  if (cVar2 == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1c8)];
  }
  if (cVar2 == '\0') {
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  else {
    Variant::_clear_internal();
    cVar2 = (&Variant::needs_deinit)[*(int *)(this + 0x1b0)];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x1a8));
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x248);
  return;
}



/* CallbackTweener::_initialize_classv() */

void CallbackTweener::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Tweener::initialize_class()::initialized == '\0') {
      Tweener::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Tweener";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CallbackTweener";
    local_60 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SubtweenTweener::_initialize_classv() */

void SubtweenTweener::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Tweener::initialize_class()::initialized == '\0') {
      Tweener::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Tweener";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SubtweenTweener";
    local_60 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodTweener::_initialize_classv() */

void MethodTweener::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Tweener::initialize_class()::initialized == '\0') {
      Tweener::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Tweener";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "MethodTweener";
    local_60 = 0;
    local_40 = 0xd;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyTweener::_initialize_classv() */

void PropertyTweener::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Tweener::initialize_class()::initialized == '\0') {
      Tweener::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Tweener";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PropertyTweener";
    local_60 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<List<Ref<Tweener>, DefaultAllocator> >::_realloc(long) */

undefined8 __thiscall
CowData<List<Ref<Tweener>,DefaultAllocator>>::_realloc
          (CowData<List<Ref<Tweener>,DefaultAllocator>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* List<Ref<Tweener>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<Tweener>,DefaultAllocator>::~List(List<Ref<Tweener>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* CowData<List<Ref<Tweener>, DefaultAllocator> >::_unref() */

void __thiscall
CowData<List<Ref<Tweener>,DefaultAllocator>>::_unref
          (CowData<List<Ref<Tweener>,DefaultAllocator>> *this)

{
  long *plVar1;
  List<Ref<Tweener>,DefaultAllocator> *pLVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  List<Ref<Tweener>,DefaultAllocator> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pLVar2 = *(List<Ref<Tweener>,DefaultAllocator> **)this;
    if (pLVar2 != (List<Ref<Tweener>,DefaultAllocator> *)0x0) {
      lVar3 = *(long *)(pLVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pLVar2;
        do {
          lVar5 = lVar5 + 1;
          List<Ref<Tweener>,DefaultAllocator>::~List(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pLVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Tween::~Tween() */

void __thiscall Tween::~Tween(Tween *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012b1d0;
  CowData<List<Ref<Tweener>,DefaultAllocator>>::_unref
            ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  return;
}



/* Tween::~Tween() */

void __thiscall Tween::~Tween(Tween *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012b1d0;
  CowData<List<Ref<Tweener>,DefaultAllocator>>::_unref
            ((CowData<List<Ref<Tweener>,DefaultAllocator>> *)(this + 0x1a8));
  *(undefined ***)this = &PTR__initialize_classv_0012aef8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1d8);
  return;
}



/* GetTypeInfo<Ref<Tween>, void>::get_class_info() */

GetTypeInfo<Ref<Tween>,void> * __thiscall
GetTypeInfo<Ref<Tween>,void>::get_class_info(GetTypeInfo<Ref<Tween>,void> *this)

{
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Tween";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_00126e58;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_00126e58:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::EaseType>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> *
MethodBindTR<Ref<Tween>,Tween::EaseType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_80 = 6;
    local_78 = "Tween::EaseType";
    local_90 = 0;
    local_88 = 0;
    local_c0 = 0;
    local_70 = 0xf;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_a8;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_90;
    *(long *)(this + 0x20) = local_88;
    *(undefined4 *)(this + 0x28) = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> *
MethodBindTR<Ref<Tween>,Tween::TransitionType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  details local_b8 [8];
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_80 = 6;
    local_78 = "Tween::TransitionType";
    local_90 = 0;
    local_88 = 0;
    local_c0 = 0;
    local_70 = 0x15;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_b8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_b0,(String *)local_b8,false);
    local_c8 = 0;
    local_d0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
               (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_a8;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_90;
    *(long *)(this + 0x20) = local_88;
    *(undefined4 *)(this + 0x28) = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, float>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> * MethodBindTR<Ref<Tween>,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC63;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,3,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_98;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_80;
    *(long *)(this + 0x20) = local_78;
    *(undefined4 *)(this + 0x28) = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> * MethodBindTR<Ref<Tween>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC63;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_98;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_80;
    *(long *)(this + 0x20) = local_78;
    *(undefined4 *)(this + 0x28) = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, bool>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> * MethodBindTR<Ref<Tween>,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC63;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_98;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_80;
    *(long *)(this + 0x20) = local_78;
    *(undefined4 *)(this + 0x28) = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> *
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_80 = 6;
    local_78 = "Tween::TweenPauseMode";
    local_90 = 0;
    local_88 = 0;
    local_c0 = 0;
    local_70 = 0x15;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_a8;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_90;
    *(long *)(this + 0x20) = local_88;
    *(undefined4 *)(this + 0x28) = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> *
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_80 = 6;
    local_78 = "Tween::TweenProcessMode";
    local_90 = 0;
    local_88 = 0;
    local_c0 = 0;
    local_70 = 0x17;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_a8;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_90;
    *(long *)(this + 0x20) = local_88;
    *(undefined4 *)(this + 0x28) = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Tween>, Node const*>::_gen_argument_type_info(int) const */

GetTypeInfo<Ref<Tween>,void> *
MethodBindTR<Ref<Tween>,Node_const*>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Ref<Tween>,void> *this;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Ref<Tween>,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_68 = &_LC244;
    local_80 = 0;
    local_78 = 0;
    local_a8 = 0;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_a8);
    StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_a0);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_98;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_80;
    *(long *)(this + 0x20) = local_78;
    *(undefined4 *)(this + 0x28) = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    GetTypeInfo<Ref<Tween>,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<double>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<double>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC63;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,3,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<IntervalTweener>, double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<IntervalTweener>,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<double>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001282c8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "IntervalTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001283c7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_001283c7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001282c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<double>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001284c8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC63;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001285af:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001285af;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001284c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<PropertyTweener>,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<double>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001286c8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "PropertyTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001287c7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_001287c7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001286c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<CallbackTweener>,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<double>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001288c8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "CallbackTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001289c7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_001289c7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001288c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<MethodTweener>,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<double>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00128ac8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "MethodTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00128bc7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00128bc7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00128ac8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SubtweenTweener>, double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<SubtweenTweener>,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<double>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00128cc8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "SubtweenTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00128dc7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00128dc7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00128cc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Callable const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Callable_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC63;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x19,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Callable_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129068;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "CallbackTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00129167:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00129167;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129068:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Callable_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129268;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "PropertyTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00129367:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00129367;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129268:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,0,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_78,0x20006,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_68[0];
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::_gen_argument_type_info(int param_1)

{
  details *this;
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  uint local_d4;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (5 < in_EDX) {
    local_78 = (char *)0x0;
    local_a8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              (pPVar5,0,(CowData<char32_t> *)&local_b0,0,(CowData<char32_t> *)&local_a8,0x20006,
               &local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
    goto LAB_0012964d;
  }
  local_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 6;
  local_d4 = 0;
  call_get_argument_type_info_helper<Variant_const&>
            (in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
  call_get_argument_type_info_helper<Variant_const&>
            (in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
  call_get_argument_type_info_helper<double>(in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
  call_get_argument_type_info_helper<double>(in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
  if (in_EDX == local_d4) {
    local_c0 = 0;
    this = (details *)&local_b8;
    local_70 = 0x15;
    local_78 = "Tween::TransitionType";
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(this,(String *)&local_c0);
    StringName::StringName((StringName *)&local_b0,(String *)this,false);
    local_c8 = 0;
    local_d0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
               (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    lVar2 = local_b0;
joined_r0x001297b7:
    if ((StringName::configured != '\0') && (lVar2 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  else {
    local_d4 = local_d4 + 1;
    if (in_EDX == local_d4) {
      local_c0 = 0;
      this = (details *)&local_c8;
      local_70 = 0xf;
      local_78 = "Tween::EaseType";
      String::parse_latin1((StrRange *)&local_c0);
      godot::details::enum_qualified_name_to_class_info_name(this,(String *)&local_c0);
      StringName::StringName((StringName *)&local_d0,(String *)this,false);
      local_b8 = 0;
      local_b0 = 0;
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
                 (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      lVar2 = local_d0;
      goto joined_r0x001297b7;
    }
  }
  uVar3 = local_a0._0_8_;
  uVar4 = local_a0._8_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_a0._8_8_;
  local_a0 = auVar1 << 0x40;
  *(undefined4 *)pPVar5 = (undefined4)local_a8;
  *(undefined8 *)(pPVar5 + 8) = uVar3;
  *(undefined8 *)(pPVar5 + 0x10) = uVar4;
  *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_90;
  *(undefined8 *)(pPVar5 + 0x20) = local_88;
  *(undefined4 *)(pPVar5 + 0x28) = local_80;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
LAB_0012964d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<PropertyTweener>,Variant_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Variant_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129978;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "PropertyTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00129a77:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00129a77;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129978:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Variant>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,0,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_78,0x20006,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_68[0];
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant,
   double>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Callable_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Variant>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Variant>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<double>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129d38;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "MethodTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00129e37:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00129e37;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129d38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Object const*, NodePath const&, Variant, double>(int,
   PropertyInfo&) */

void call_get_argument_type_info<Object_const*,NodePath_const&,Variant,double>
               (int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  if (param_1 == 0) {
    local_88 = 0;
    local_78 = "Object";
    local_70 = 6;
    String::parse_latin1((StrRange *)&local_88);
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    StringName::StringName((StringName *)&local_68,(StringName *)&local_80);
    local_60 = 0;
    local_58 = 0;
    local_50 = 6;
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    local_94 = 1;
    if (param_1 != 1) goto LAB_00129ed5;
    local_80 = 0;
    local_88 = 0;
    local_78 = "";
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x16,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    lVar1 = local_70;
    local_70 = 0;
    *(long *)(param_2 + 8) = lVar1;
  }
  if (*(long *)(param_2 + 0x10) != local_68) {
    StringName::unref();
    lVar1 = local_68;
    local_68 = 0;
    *(long *)(param_2 + 0x10) = lVar1;
  }
  *(undefined4 *)(param_2 + 0x18) = local_60;
  if (*(long *)(param_2 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar1 = local_58;
    local_58 = 0;
    *(long *)(param_2 + 0x20) = lVar1;
  }
  *(undefined4 *)(param_2 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00129ed5:
  local_94 = 2;
  call_get_argument_type_info_helper<Variant>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<double>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::
_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<Object_const*,NodePath_const&,Variant,double>
              (in_EDX,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0012a1ac;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "PropertyTweener";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0012a2a7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0012a2a7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0012a1ac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tween::interpolaters */

void Tween::_GLOBAL__sub_I_interpolaters(void)

{
  if (Animation::PARAMETERS_BASE_PATH != '\0') {
    return;
  }
  Animation::PARAMETERS_BASE_PATH = 1;
  Animation::PARAMETERS_BASE_PATH = 0;
  String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
  __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Tween::~Tween() */

void __thiscall Tween::~Tween(Tween *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Ref<Tweener>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<Tweener>,DefaultAllocator>::~List(List<Ref<Tweener>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyTweener::~PropertyTweener() */

void __thiscall PropertyTweener::~PropertyTweener(PropertyTweener *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SubtweenTweener::~SubtweenTweener() */

void __thiscall SubtweenTweener::~SubtweenTweener(SubtweenTweener *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodTweener::~MethodTweener() */

void __thiscall MethodTweener::~MethodTweener(MethodTweener *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallbackTweener::~CallbackTweener() */

void __thiscall CallbackTweener::~CallbackTweener(CallbackTweener *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<SubtweenTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<SubtweenTweener>,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<MethodTweener>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Tween::EaseType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<MethodTweener>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Tween::TransitionType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<MethodTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<CallbackTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<CallbackTweener>,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>, Callable const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Callable_const&>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Callable_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Tween::EaseType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Tween::TransitionType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>>::~MethodBindTR(MethodBindTR<Ref<PropertyTweener>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Variant_const&>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Variant, Variant const&, Variant const&, double, double, Tween::TransitionType,
   Tween::EaseType>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
::~MethodBindTRS(MethodBindTRS<Variant,Variant_const&,Variant_const&,double,double,Tween::TransitionType,Tween::EaseType>
                 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>>::~MethodBindTR(MethodBindTR<Ref<Tween>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, Tween::EaseType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::EaseType>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::EaseType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, Tween::TransitionType>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TransitionType>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TransitionType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, float>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,float>::~MethodBindTR(MethodBindTR<Ref<Tween>,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,int>::~MethodBindTR(MethodBindTR<Ref<Tween>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Tween>,bool>::~MethodBindTR(MethodBindTR<Ref<Tween>,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, Tween::TweenPauseMode>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenPauseMode>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TweenPauseMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, Tween::TweenProcessMode>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Tween::TweenProcessMode>::~MethodBindTR
          (MethodBindTR<Ref<Tween>,Tween::TweenProcessMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Tween>, Node const*>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<Tween>,Node_const*>::~MethodBindTR(MethodBindTR<Ref<Tween>,Node_const*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool, double>::~MethodBindTR() */

void __thiscall MethodBindTR<bool,double>::~MethodBindTR(MethodBindTR<bool,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<SubtweenTweener>, Ref<Tween> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&>::~MethodBindTR
          (MethodBindTR<Ref<SubtweenTweener>,Ref<Tween>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<MethodTweener>, Callable const&, Variant, Variant, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double>::~MethodBindTR
          (MethodBindTR<Ref<MethodTweener>,Callable_const&,Variant,Variant,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<CallbackTweener>, Callable const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CallbackTweener>,Callable_const&>::~MethodBindTR
          (MethodBindTR<Ref<CallbackTweener>,Callable_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<IntervalTweener>, double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<IntervalTweener>,double>::~MethodBindTR
          (MethodBindTR<Ref<IntervalTweener>,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<PropertyTweener>, Object const*, NodePath const&, Variant,
   double>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double>::~MethodBindTR
          (MethodBindTR<Ref<PropertyTweener>,Object_const*,NodePath_const&,Variant,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* IntervalTweener::~IntervalTweener() */

void __thiscall IntervalTweener::~IntervalTweener(IntervalTweener *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



