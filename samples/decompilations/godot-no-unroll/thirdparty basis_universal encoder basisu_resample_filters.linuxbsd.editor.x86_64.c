
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::box_filter(float) */

uint basisu::box_filter(float param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (__LC2 <= param_1) {
    uVar1 = _LC0 & -(uint)(param_1 < _LC3);
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::tent_filter(float) */

float basisu::tent_filter(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC0 <= param_1) {
    return 0.0;
  }
  return _LC0 - param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::bell_filter(float) */

float basisu::bell_filter(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC3 <= param_1) {
    if (_LC6 <= param_1) {
      return 0.0;
    }
    return _LC3 * (param_1 - _LC6) * (param_1 - _LC6);
  }
  return _LC5 - param_1 * param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::B_spline_filter(float) */

ulong basisu::B_spline_filter(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = (uint)param_1;
  if (param_1 < 0.0) {
    auVar1._0_4_ = (uint)param_1 ^ __LC4;
    auVar1._4_4_ = in_register_00001204._0_4_ ^ _UNK_00101164;
    auVar1._8_4_ = in_register_00001204._4_4_ ^ _UNK_00101168;
    auVar1._12_4_ = in_register_00001204._8_4_ ^ _UNK_0010116c;
  }
  fVar3 = auVar1._0_4_;
  auVar2._4_12_ = auVar1._4_12_;
  if (_LC0 <= fVar3) {
    if (_LC8 <= fVar3) {
      return 0;
    }
    fVar3 = _LC8 - fVar3;
    return (ulong)(uint)(fVar3 * fVar3 * fVar3 * __LC9);
  }
  auVar2._0_4_ = (fVar3 * _LC3 * fVar3 * fVar3 - fVar3 * fVar3) + __LC7;
  return auVar2._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::quadratic_approx_filter(float) */

ulong basisu::quadratic_approx_filter(float param_1)

{
  float fVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = (uint)param_1;
  if (param_1 < 0.0) {
    auVar2._0_4_ = (uint)param_1 ^ __LC4;
    auVar2._4_4_ = in_register_00001204._0_4_ ^ _UNK_00101164;
    auVar2._8_4_ = in_register_00001204._4_4_ ^ _UNK_00101168;
    auVar2._12_4_ = in_register_00001204._8_4_ ^ _UNK_0010116c;
  }
  fVar1 = auVar2._0_4_;
  if (fVar1 < _LC6) {
    if (fVar1 <= _LC3) {
      return (ulong)(uint)(_LC5 - fVar1 * fVar1);
    }
    auVar3._0_4_ = fVar1 * __LC10 + fVar1 * fVar1 * _LC3 + __LC11;
    auVar3._4_12_ = auVar2._4_12_;
    return auVar3._0_8_;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::catmull_rom_filter(float) */

undefined8 basisu::catmull_rom_filter(float param_1)

{
  float fVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = (uint)param_1;
  fVar4 = param_1 * param_1;
  if (param_1 < 0.0) {
    auVar2._0_4_ = (uint)param_1 ^ __LC4;
    auVar2._4_4_ = in_register_00001204._0_4_ ^ _UNK_00101164;
    auVar2._8_4_ = in_register_00001204._4_4_ ^ _UNK_00101168;
    auVar2._12_4_ = in_register_00001204._8_4_ ^ _UNK_0010116c;
  }
  fVar1 = auVar2._0_4_;
  auVar3._4_12_ = auVar2._4_12_;
  if (_LC0 <= fVar1) {
    if (_LC8 <= fVar1) {
      return 0;
    }
    return CONCAT44(in_register_00001204._0_4_,
                    (fVar4 * __LC16 + fVar4 * fVar1 * __LC15 + fVar1 * __LC17 + _LC18) / _LC14);
  }
  auVar3._0_4_ = (fVar1 * fVar4 * __LC12 + fVar4 * __LC13 + _LC14) / _LC14;
  return auVar3._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::gaussian_filter(float) */

undefined8 basisu::gaussian_filter(float param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC19 <= param_1) {
    return 0;
  }
  fVar1 = expf(_LC20 * param_1 * param_1);
  fVar4 = param_1 / _LC19;
  dVar2 = cos((double)fVar4 * _LC21);
  dVar3 = cos((double)fVar4 * __LC22);
  dVar2 = (_LC24 + dVar2 * __LC8 + dVar3 * (double)CONCAT44(_UNK_001011a4,_LC20)) *
          (double)fVar1 * __LC26;
  if (_LC28 <= (double)((ulong)dVar2 & __LC27)) {
    return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::kaiser_filter(float) */

undefined8 basisu::kaiser_filter(float param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC30 <= param_1) {
    return 0;
  }
  dVar6 = _LC21 * (double)param_1;
  dVar2 = (double)param_1 / __LC31;
  dVar2 = _LC29 - dVar2 * dVar2;
  if ((_LC32 <= dVar6) || (dVar6 <= __LC33)) {
    dVar3 = sin(dVar6);
    dVar3 = dVar3 / dVar6;
    if (dVar2 < 0.0) {
      dVar2 = sqrt(dVar2);
      goto LAB_00100457;
    }
  }
  else {
    dVar3 = ((dVar6 * dVar6) / __LC34 - __LC35) * dVar6 * dVar6 + _LC29;
  }
  dVar2 = SQRT(dVar2);
LAB_00100457:
  iVar1 = 0;
  dVar6 = _LC29;
  dVar5 = _LC29;
  do {
    iVar1 = iVar1 + 1;
    dVar6 = dVar6 * ((dVar2 * __LC37 * __LC38) / (double)iVar1);
    dVar5 = dVar5 + dVar6 * dVar6;
  } while (dVar5 * _LC39 < dVar6 * dVar6);
  iVar1 = 0;
  dVar2 = _LC29;
  dVar6 = _LC29;
  do {
    iVar1 = iVar1 + 1;
    dVar6 = dVar6 * (_LC40 / (double)iVar1);
    dVar2 = dVar2 + dVar6 * dVar6;
  } while (dVar2 * _LC39 < dVar6 * dVar6);
  dVar3 = (dVar5 / dVar2) * dVar3;
  if (_LC28 <= (double)((ulong)dVar3 & __LC27)) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)dVar3;
    return auVar4._0_8_;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::mitchell_filter(float) */

undefined8 basisu::mitchell_filter(float param_1)

{
  float fVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = (uint)param_1;
  fVar4 = param_1 * param_1;
  if (param_1 < 0.0) {
    auVar2._0_4_ = (uint)param_1 ^ __LC4;
    auVar2._4_4_ = in_register_00001204._0_4_ ^ _UNK_00101164;
    auVar2._8_4_ = in_register_00001204._4_4_ ^ _UNK_00101168;
    auVar2._12_4_ = in_register_00001204._8_4_ ^ _UNK_0010116c;
  }
  fVar1 = auVar2._0_4_;
  auVar3._4_12_ = auVar2._4_12_;
  if (_LC0 <= fVar1) {
    if (_LC8 <= fVar1) {
      return 0;
    }
    return CONCAT44(in_register_00001204._0_4_,
                    (fVar4 * _LC18 + fVar4 * fVar1 * __LC44 + fVar1 * __LC45 + __LC46) / _LC14);
  }
  auVar3._0_4_ = (fVar1 * fVar4 * __LC41 + fVar4 * __LC42 + __LC43) / _LC14;
  return auVar3._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::quadratic_mix_filter(float) */

undefined8 basisu::quadratic_mix_filter(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = in_register_00001204._0_4_;
  uVar5 = in_register_00001204._4_4_;
  uVar6 = in_register_00001204._8_4_;
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
    uVar4 = uVar4 ^ _UNK_00101164;
    uVar5 = uVar5 ^ _UNK_00101168;
    uVar6 = uVar6 ^ _UNK_0010116c;
  }
  if (param_1 < _LC6) {
    auVar1._4_4_ = uVar4;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = uVar5;
    auVar1._12_4_ = uVar6;
    auVar2._4_12_ = auVar1._4_12_;
    if (param_1 <= _LC3) {
      auVar2._0_4_ = param_1 * param_1 * __LC47 + __LC48;
      return auVar2._0_8_;
    }
    auVar3._0_4_ = param_1 * param_1 * __LC49 + param_1 * __LC50 + __LC51;
    auVar3._4_12_ = auVar2._4_12_;
    return auVar3._0_8_;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::quadratic_interp_filter(float) */

undefined8 basisu::quadratic_interp_filter(float param_1)

{
  float fVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = (uint)param_1;
  if (param_1 < 0.0) {
    auVar2._0_4_ = (uint)param_1 ^ __LC4;
    auVar2._4_4_ = in_register_00001204._0_4_ ^ _UNK_00101164;
    auVar2._8_4_ = in_register_00001204._4_4_ ^ _UNK_00101168;
    auVar2._12_4_ = in_register_00001204._8_4_ ^ _UNK_0010116c;
  }
  fVar1 = auVar2._0_4_;
  if (fVar1 < _LC6) {
    auVar3._4_12_ = auVar2._4_12_;
    if (fVar1 <= _LC3) {
      return CONCAT44(auVar2._4_4_,fVar1 * fVar1 * _LC20 + _LC0);
    }
    auVar3._0_4_ = fVar1 * __LC52 + fVar1 * fVar1 + _LC6;
    return auVar3._0_8_;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::blackman_filter(float) */

void basisu::blackman_filter(float param_1)

{
  float fVar1;
  double __x;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC30 <= param_1) {
    return;
  }
  __x = (double)param_1 * _LC21;
  if ((_LC32 <= __x) || (__x <= __LC33)) {
    sin(__x);
  }
  fVar1 = param_1 / _LC30;
  cos(_LC21 * (double)fVar1);
  cos((double)fVar1 * __LC22);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::lanczos6_filter(float) */

void basisu::lanczos6_filter(float param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC14 <= param_1) {
    return;
  }
  dVar1 = (double)param_1 * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  dVar1 = (double)(param_1 / _LC14) * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::lanczos12_filter(float) */

void basisu::lanczos12_filter(float param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC18 <= param_1) {
    return;
  }
  dVar1 = (double)param_1 * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  dVar1 = (double)(param_1 / _LC18) * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::lanczos3_filter(float) */

void basisu::lanczos3_filter(float param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC30 <= param_1) {
    return;
  }
  dVar1 = (double)param_1 * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  dVar1 = (double)(param_1 / _LC30) * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::lanczos4_filter(float) */

void basisu::lanczos4_filter(float param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ __LC4);
  }
  if (_LC53 <= param_1) {
    return;
  }
  dVar1 = (double)param_1 * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  dVar1 = (double)(param_1 * __LC54) * _LC21;
  if ((_LC32 <= dVar1) || (dVar1 <= __LC33)) {
    sin(dVar1);
  }
  return;
}



/* basisu::find_resample_filter(char const*) */

int basisu::find_resample_filter(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &g_resample_filters;
  iVar2 = 0;
  do {
    iVar1 = strcmp(param_1,*ppuVar3);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (iVar2 != 0x10);
  return -1;
}


