
/* AudioFilterSW::set_mode(AudioFilterSW::Mode) */

void __thiscall AudioFilterSW::set_mode(AudioFilterSW *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x14) = param_2;
  return;
}



/* AudioFilterSW::set_cutoff(float) */

void __thiscall AudioFilterSW::set_cutoff(AudioFilterSW *this,float param_1)

{
  *(float *)this = param_1;
  return;
}



/* AudioFilterSW::set_resonance(float) */

void __thiscall AudioFilterSW::set_resonance(AudioFilterSW *this,float param_1)

{
  *(float *)(this + 4) = param_1;
  return;
}



/* AudioFilterSW::set_gain(float) */

void __thiscall AudioFilterSW::set_gain(AudioFilterSW *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  return;
}



/* AudioFilterSW::set_sampling_rate(float) */

void __thiscall AudioFilterSW::set_sampling_rate(AudioFilterSW *this,float param_1)

{
  *(float *)(this + 0xc) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioFilterSW::prepare_coefficients(AudioFilterSW::Coeffs*) */

void __thiscall AudioFilterSW::prepare_coefficients(AudioFilterSW *this,Coeffs *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  double __x;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_48;
  double local_40 [2];
  
  dVar6 = _LC0;
  fVar1 = *(float *)this;
  fVar4 = (float)(int)(_LC5 * *(float *)(this + 0xc) + __LC6);
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  dVar7 = _LC0;
  if (_LC7 <= fVar4) {
    dVar7 = (double)fVar4 * _LC0;
  }
  dVar14 = (double)*(float *)(this + 0xc);
  sincos(dVar7 / dVar14,local_40,&local_48);
  dVar17 = local_40[0];
  dVar7 = local_48;
  fVar4 = *(float *)(this + 4);
  dVar11 = _LC1;
  if (0.0 < fVar4) {
    dVar11 = (double)fVar4;
  }
  iVar2 = *(int *)(this + 0x14);
  if (iVar2 == 0) {
    dVar11 = dVar11 + dVar11;
  }
  else if (iVar2 == 4) {
    dVar11 = dVar11 * __LC9;
  }
  iVar3 = *(int *)(this + 0x10);
  __x = _LC2;
  if (_LC2 <= (double)*(float *)(this + 8)) {
    __x = (double)*(float *)(this + 8);
  }
  if (1 < iVar3) {
    if (_LC4 < dVar11) {
      dVar11 = pow(dVar11,_LC4 / (double)iVar3);
    }
    __x = pow(__x,_LC4 / (double)(iVar3 + 1));
  }
  dVar9 = dVar17 / (dVar11 + dVar11);
  dVar16 = dVar9 + _LC4;
  switch(iVar2) {
  case 0:
    dVar11 = dVar11 + _LC4;
    dVar6 = (double)((ulong)dVar9 ^ __LC12);
    if (dVar11 < 0.0) {
      dVar17 = sqrt(dVar11);
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
      dVar17 = dVar11;
    }
    dVar17 = dVar9 * dVar17;
    dVar14 = _LC4 - dVar9;
    dVar11 = dVar11 * dVar6;
    dVar6 = 0.0;
    dVar7 = dVar7 * _LC11;
    break;
  case 1:
    dVar11 = dVar7 + _LC4;
    dVar6 = (double)((ulong)dVar11 ^ __LC12);
    goto LAB_00100420;
  case 2:
    dVar6 = _LC4 - dVar7;
    dVar11 = dVar6;
LAB_00100420:
    dVar11 = _LC10 * dVar11;
    dVar7 = dVar7 * _LC11;
    dVar14 = _LC4 - dVar9;
    dVar17 = dVar11;
    break;
  case 3:
    dVar6 = dVar7 * _LC11;
    dVar14 = _LC4 - dVar9;
    dVar11 = _LC4;
    dVar17 = _LC4;
    dVar7 = dVar6;
    break;
  case 4:
    dVar6 = dVar7 * _LC11;
    dVar14 = _LC4 - dVar9 / __x;
    dVar11 = _LC4 - __x * dVar9;
    dVar17 = __x * dVar9 + _LC4;
    dVar7 = dVar6;
    break;
  case 5:
    dVar11 = (double)(fVar4 + fVar1) * _LC10;
    dVar7 = log(dVar11);
    dVar17 = log((double)fVar4);
    dVar14 = (dVar11 * dVar6) / dVar14;
    sincos(dVar14,local_40,&local_48);
    dVar17 = sinh((((dVar7 - dVar17) / __LC13) * __LC14 * dVar14) / local_40[0]);
    dVar6 = 0.0;
    dVar17 = dVar17 * local_40[0];
    dVar16 = dVar17 + _LC4;
    dVar14 = _LC4 - dVar17;
    dVar11 = (double)((ulong)dVar17 ^ __LC12);
    dVar7 = local_48 * _LC11;
    break;
  case 6:
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    uVar5 = ~-(ulong)(0.0 < dVar11) & (ulong)_LC2;
    if (__x < 0.0) {
      dVar6 = sqrt(__x);
    }
    else {
      dVar6 = SQRT(__x);
    }
    dVar18 = __x - _LC4;
    dVar15 = __x + _LC4;
    dVar9 = dVar15 - dVar18 * dVar7;
    dVar14 = dVar15 + dVar18 * dVar7;
    dVar17 = (dVar6 / (double)((ulong)dVar11 & -(ulong)(0.0 < dVar11) | uVar5)) * dVar17;
    dVar6 = (__x + __x) * (dVar18 - dVar15 * dVar7);
    dVar16 = dVar14 + dVar17;
    dVar14 = dVar14 - dVar17;
    dVar11 = (dVar9 - dVar17) * __x;
    dVar17 = (dVar17 + dVar9) * __x;
    dVar7 = _LC11 * (dVar18 + dVar15 * dVar7);
    break;
  case 7:
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    uVar5 = ~-(ulong)(0.0 < dVar11) & (ulong)_LC2;
    if (__x < 0.0) {
      dVar6 = sqrt(__x);
    }
    else {
      dVar6 = SQRT(__x);
    }
    dVar9 = __x - _LC4;
    dVar18 = __x + _LC4;
    dVar14 = dVar18 - dVar9 * dVar7;
    dVar15 = dVar9 * dVar7 + dVar18;
    dVar17 = (dVar6 / (double)((ulong)dVar11 & -(ulong)(0.0 < dVar11) | uVar5)) * dVar17;
    dVar16 = dVar14 + dVar17;
    dVar14 = dVar14 - dVar17;
    dVar6 = _LC11 * __x * (dVar9 + dVar18 * dVar7);
    dVar9 = dVar9 - dVar18 * dVar7;
    dVar11 = (dVar15 - dVar17) * __x;
    dVar17 = (dVar17 + dVar15) * __x;
    dVar7 = dVar9 + dVar9;
    break;
  default:
    dVar6 = *(double *)(param_1 + 0x18);
    dVar14 = *(double *)(param_1 + 8);
    dVar11 = *(double *)(param_1 + 0x20);
    dVar17 = *(double *)(param_1 + 0x10);
    dVar7 = *(double *)param_1;
  }
  auVar12._8_8_ = dVar6;
  auVar12._0_8_ = dVar17;
  auVar8._8_8_ = dVar14;
  auVar8._0_8_ = dVar7;
  auVar13._8_8_ = dVar16;
  auVar13._0_8_ = dVar16;
  auVar13 = divpd(auVar12,auVar13);
  auVar10._0_8_ = 0.0 - dVar16;
  auVar10._8_8_ = auVar10._0_8_;
  *(double *)(param_1 + 0x20) = dVar11 / dVar16;
  auVar8 = divpd(auVar8,auVar10);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar13;
  *(undefined1 (*) [16])param_1 = auVar8;
  return;
}



/* AudioFilterSW::set_stages(int) */

void __thiscall AudioFilterSW::set_stages(AudioFilterSW *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}



/* AudioFilterSW::get_response(float, AudioFilterSW::Coeffs*) */

undefined8 __thiscall AudioFilterSW::get_response(AudioFilterSW *this,float param_1,Coeffs *param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float local_20;
  float local_1c;
  
  fVar2 = (float)((double)(param_1 / *(float *)(this + 0xc)) * _LC0);
  sincosf(fVar2,&local_1c,&local_20);
  dVar1 = *(double *)(param_2 + 0x18);
  dVar8 = (double)local_20;
  dVar3 = *(double *)(param_2 + 0x10);
  dVar5 = (double)local_1c;
  sincosf(fVar2 + fVar2,&local_1c,&local_20);
  dVar3 = (double)local_20 * *(double *)(param_2 + 0x20) +
          (double)(float)((double)(float)dVar3 + dVar8 * dVar1);
  fVar2 = (float)dVar3;
  fVar6 = (float)((double)(float)(0.0 - dVar1 * dVar5) -
                 *(double *)(param_2 + 0x20) * (double)local_1c);
  fVar4 = (float)((double)(float)(dVar5 * *(double *)param_2 + 0.0) +
                 (double)local_1c * *(double *)(param_2 + 8));
  fVar7 = (float)((double)(float)(_LC4 - dVar8 * *(double *)param_2) -
                 (double)local_20 * *(double *)(param_2 + 8));
  return CONCAT44((int)((ulong)dVar3 >> 0x20),
                  (fVar2 * fVar2 + fVar6 * fVar6) / (fVar7 * fVar7 + fVar4 * fVar4));
}



/* AudioFilterSW::Processor::Processor() */

void __thiscall AudioFilterSW::Processor::Processor(Processor *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  return;
}



/* AudioFilterSW::Processor::set_filter(AudioFilterSW*, bool) */

void __thiscall
AudioFilterSW::Processor::set_filter(Processor *this,AudioFilterSW *param_1,bool param_2)

{
  if (param_2) {
    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  }
  *(AudioFilterSW **)this = param_1;
  return;
}



/* AudioFilterSW::Processor::update_coeffs(int) */

void __thiscall AudioFilterSW::Processor::update_coeffs(Processor *this,int param_1)

{
  double dVar1;
  double dVar2;
  AudioFilterSW *this_00;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  
  this_00 = *(AudioFilterSW **)this;
  if (this_00 != (AudioFilterSW *)0x0) {
    if (param_1 == 0) {
      prepare_coefficients(this_00,(Coeffs *)(this + 8));
      return;
    }
    dVar2 = *(double *)(this + 8);
    dVar3 = *(double *)(this + 0x10);
    dVar4 = *(double *)(this + 0x18);
    dVar5 = *(double *)(this + 0x20);
    dVar1 = *(double *)(this + 0x28);
    prepare_coefficients(this_00,(Coeffs *)(this + 8));
    dVar10 = (double)param_1;
    auVar6._0_8_ = *(double *)(this + 0x18) - dVar4;
    auVar6._8_8_ = *(double *)(this + 0x20) - dVar5;
    *(double *)(this + 0x18) = dVar4;
    *(double *)(this + 0x20) = dVar5;
    auVar8._0_8_ = *(double *)(this + 8) - dVar2;
    auVar8._8_8_ = *(double *)(this + 0x10) - dVar3;
    *(double *)(this + 8) = dVar2;
    *(double *)(this + 0x10) = dVar3;
    auVar7._8_8_ = dVar10;
    auVar7._0_8_ = dVar10;
    auVar7 = divpd(auVar6,auVar7);
    auVar9._8_8_ = dVar10;
    auVar9._0_8_ = dVar10;
    auVar9 = divpd(auVar8,auVar9);
    *(undefined1 (*) [16])(this + 0x50) = auVar7;
    dVar2 = *(double *)(this + 0x28);
    *(double *)(this + 0x28) = dVar1;
    *(undefined1 (*) [16])(this + 0x40) = auVar9;
    *(double *)(this + 0x60) = (dVar2 - dVar1) / dVar10;
  }
  return;
}



/* AudioFilterSW::Processor::process(float*, int, int, bool) */

void __thiscall
AudioFilterSW::Processor::process
          (Processor *this,float *param_1,int param_2,int param_3,bool param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  
  if (*(long *)this != 0) {
    if (!param_4) {
      if (0 < param_2) {
        dVar18 = *(double *)(this + 0x18);
        dVar2 = *(double *)(this + 0x20);
        dVar3 = *(double *)(this + 0x28);
        dVar4 = *(double *)(this + 8);
        dVar5 = *(double *)(this + 0x10);
        fVar19 = *(float *)(this + 0x3c);
        fVar9 = *(float *)(this + 0x30);
        fVar8 = *(float *)(this + 0x34);
        iVar7 = 0;
        fVar21 = *(float *)(this + 0x38);
        do {
          fVar1 = *param_1;
          iVar7 = iVar7 + 1;
          *param_1 = (float)((double)fVar1 * dVar18 + (double)fVar21 * dVar2 +
                             (double)fVar19 * dVar3 + (double)fVar9 * dVar4 + (double)fVar8 * dVar5)
          ;
          fVar8 = *(float *)(this + 0x30);
          fVar19 = *(float *)(this + 0x38);
          *(float *)(this + 0x38) = fVar1;
          *(float *)(this + 0x34) = fVar8;
          *(float *)(this + 0x3c) = fVar19;
          fVar9 = *param_1;
          param_1 = param_1 + param_3;
          *(float *)(this + 0x30) = fVar9;
          fVar21 = fVar1;
        } while (param_2 != iVar7);
        return;
      }
      return;
    }
    if (0 < param_2) {
      fVar19 = *(float *)(this + 0x3c);
      fVar9 = *(float *)(this + 0x30);
      fVar8 = *(float *)(this + 0x34);
      dVar18 = *(double *)(this + 0x28);
      dVar3 = *(double *)(this + 0x40);
      dVar4 = *(double *)(this + 0x48);
      dVar5 = *(double *)(this + 0x50);
      dVar6 = *(double *)(this + 0x58);
      dVar2 = *(double *)(this + 0x60);
      iVar7 = 0;
      dVar10 = *(double *)(this + 0x18);
      dVar12 = *(double *)(this + 0x20);
      dVar14 = *(double *)(this + 8);
      dVar16 = *(double *)(this + 0x10);
      fVar21 = *(float *)(this + 0x38);
      do {
        fVar1 = *param_1;
        iVar7 = iVar7 + 1;
        dVar11 = dVar10 + dVar5;
        dVar13 = dVar12 + dVar6;
        dVar15 = dVar14 + dVar3;
        dVar17 = dVar16 + dVar4;
        dVar20 = (double)fVar19 * dVar18;
        dVar18 = dVar18 + dVar2;
        *param_1 = (float)((double)fVar1 * dVar10 + (double)fVar21 * dVar12 + dVar20 +
                           (double)fVar9 * dVar14 + (double)fVar8 * dVar16);
        fVar8 = *(float *)(this + 0x30);
        fVar19 = *(float *)(this + 0x38);
        *(float *)(this + 0x38) = fVar1;
        *(float *)(this + 0x34) = fVar8;
        *(float *)(this + 0x3c) = fVar19;
        fVar9 = *param_1;
        param_1 = param_1 + param_3;
        *(float *)(this + 0x30) = fVar9;
        dVar10 = dVar11;
        dVar12 = dVar13;
        dVar14 = dVar15;
        dVar16 = dVar17;
        fVar21 = fVar1;
      } while (param_2 != iVar7);
      *(double *)(this + 0x28) = dVar18;
      *(double *)(this + 8) = dVar15;
      *(double *)(this + 0x10) = dVar17;
      *(double *)(this + 0x18) = dVar11;
      *(double *)(this + 0x20) = dVar13;
    }
  }
  return;
}


