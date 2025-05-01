
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::solveQuadratic(double*, double, double, double) */

int msdfgen::solveQuadratic(double *param_1,double param_2,double param_3,double param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  
  if ((param_2 == 0.0) ||
     ((double)(_LC1 & (ulong)param_2) * __LC2 < (double)((ulong)param_3 & _LC1))) {
    if (param_3 != 0.0) {
      *param_1 = (double)((ulong)param_4 ^ _LC7) / param_3;
      return 1;
    }
    uVar1 = (uint)!NAN(param_4);
    if (param_4 != 0.0) {
      uVar1 = 0;
    }
    return -uVar1;
  }
  dVar4 = param_3 * param_3 - _LC4 * param_2 * param_4;
  if (0.0 < dVar4) {
    auVar3._0_8_ = param_2 + param_2;
    auVar3._8_8_ = auVar3._0_8_;
    auVar2._8_8_ = (double)((ulong)param_3 ^ _LC7) - SQRT(dVar4);
    auVar2._0_8_ = SQRT(dVar4) - param_3;
    auVar3 = divpd(auVar2,auVar3);
    *(undefined1 (*) [16])param_1 = auVar3;
    return 2;
  }
  if (dVar4 != 0.0) {
    return 0;
  }
  *param_1 = (double)((ulong)param_3 ^ _LC7) / (param_2 + param_2);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::solveCubic(double*, double, double, double, double) */

undefined8
msdfgen::solveCubic(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_2 == 0.0) || (dVar5 = param_3 / param_2, _LC8 <= (double)((ulong)dVar5 & _LC1))) {
    uVar2 = solveQuadratic(param_1,param_3,param_4,param_5);
    return uVar2;
  }
  dVar3 = dVar5 * dVar5;
  dVar7 = (dVar3 - _LC9 * (param_4 / param_2)) * __LC10;
  dVar6 = dVar5 * _LC14;
  dVar3 = _LC13 * (((dVar3 + dVar3) - (param_4 / param_2) * __LC11) * dVar5 +
                  _LC12 * (param_5 / param_2));
  dVar5 = dVar7 * dVar7 * dVar7;
  if (dVar3 * dVar3 < dVar5) {
    dVar3 = dVar3 / SQRT(dVar5);
    dVar5 = _LC5;
    if ((_LC5 <= dVar3) && (dVar5 = _LC6, dVar3 <= _LC6)) {
      dVar5 = dVar3;
    }
    dVar5 = acos(dVar5);
    if (dVar7 < 0.0) {
      dVar7 = sqrt(dVar7);
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    dVar7 = dVar7 * __LC15;
    dVar3 = cos(dVar5 * _LC14);
    dVar4 = cos((_LC16 + dVar5) * _LC14);
    dVar5 = (dVar5 - _LC16) * _LC14;
    *param_1 = dVar7 * dVar3 - dVar6;
    param_1[1] = dVar7 * dVar4 - dVar6;
    dVar5 = cos(dVar5);
    uVar2 = 3;
    param_1[2] = dVar5 * dVar7 - dVar6;
  }
  else {
    dVar4 = _LC6;
    if (0.0 <= dVar3) {
      dVar4 = _LC5;
    }
    dVar5 = dVar3 * dVar3 - dVar5;
    dVar3 = (double)((ulong)dVar3 & _LC1);
    if (dVar5 < 0.0) {
      dVar5 = sqrt(dVar5);
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    dVar5 = pow(dVar5 + dVar3,_LC14);
    uVar1 = _LC1;
    dVar5 = dVar5 * dVar4;
    if (dVar5 == 0.0) {
      *param_1 = 0.0 - dVar6;
      dVar3 = _LC7;
    }
    else {
      dVar7 = dVar7 / dVar5;
      dVar3 = dVar5 + dVar7;
      *param_1 = dVar3 - dVar6;
      if ((dVar5 != dVar7) &&
         ((double)(uVar1 & (ulong)dVar3) * __LC18 <= (double)((ulong)(dVar5 - dVar7) & uVar1))) {
        return 1;
      }
      dVar3 = dVar3 * __LC17;
    }
    uVar2 = 2;
    param_1[1] = dVar3 - dVar6;
  }
  return uVar2;
}


