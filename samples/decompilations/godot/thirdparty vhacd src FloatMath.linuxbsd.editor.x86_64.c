
/* FLOAT_MATH::CTriangulator::~CTriangulator() */

void __thiscall FLOAT_MATH::CTriangulator::~CTriangulator(CTriangulator *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__CTriangulator_001114d8;
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x80) - (long)pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x68) - (long)pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x50) - (long)pvVar1);
    return;
  }
  return;
}



/* FLOAT_MATH::CTriangulator::~CTriangulator() */

void __thiscall FLOAT_MATH::CTriangulator::~CTriangulator(CTriangulator *this)

{
  ~CTriangulator(this);
  operator_delete(this,0x88);
  return;
}



/* FLOAT_MATH::fm_inverseRT(float const*, float const*, float*) */

void FLOAT_MATH::fm_inverseRT(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 - param_1[0xc];
  fVar3 = param_2[1] - param_1[0xd];
  fVar2 = param_2[2] - param_1[0xe];
  *param_3 = *param_1 * fVar1 + param_1[1] * fVar3 + param_1[2] * fVar2;
  param_3[1] = param_1[4] * fVar1 + param_1[5] * fVar3 + param_1[6] * fVar2;
  param_3[2] = fVar1 * param_1[8] + fVar3 * param_1[9] + fVar2 * param_1[10];
  return;
}



/* FLOAT_MATH::fm_getDeterminant(float const*) */

float FLOAT_MATH::fm_getDeterminant(float *param_1)

{
  return (param_1[5] * param_1[10] - param_1[6] * param_1[9]) * *param_1 +
         (param_1[6] * param_1[8] - param_1[10] * param_1[4]) * param_1[1] +
         (param_1[4] * param_1[9] - param_1[5] * param_1[8]) * param_1[2];
}



/* FLOAT_MATH::fm_squared(float) */

float FLOAT_MATH::fm_squared(float param_1)

{
  return param_1 * param_1;
}



/* FLOAT_MATH::fm_getSubMatrix(int, int, float*, float const*) */

void FLOAT_MATH::fm_getSubMatrix(int param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    if (param_2 != iVar5) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        if (param_1 != iVar2) {
          iVar1 = iVar3 * 4 + iVar4;
          iVar4 = iVar4 + 1;
          param_3[iVar1] = param_4[(uint)(iVar2 + iVar5 * 4)];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      iVar3 = iVar3 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_inverseTransform(float const*, float*) */

void FLOAT_MATH::fm_inverseTransform(float *param_1,float *param_2)

{
  uint uVar1;
  int extraout_EDX;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float extraout_XMM0_Da;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float local_50;
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)fm_getDeterminant(param_1);
  uVar6 = CONCAT44(_UNK_00111544,_LC3);
  fVar4 = _LC3 / fVar4;
  fVar5 = _LC3;
  uVar7 = _LC4;
  do {
    lVar2 = 0;
    do {
      local_70 = 0;
      local_58 = 0;
      local_60 = 0;
      local_78 = uVar6;
      local_68 = uVar7;
      local_50 = fVar5;
      fm_getSubMatrix(iVar3,(int)lVar2,(float *)&local_78,param_1);
      uVar1 = fm_getDeterminant((float *)&local_78);
      param_2[lVar2] = (float)(int)(extraout_EDX + (uVar1 & 1) * -2) * extraout_XMM0_Da * fVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 4;
  } while (iVar3 != 4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_identity(float*) */

void FLOAT_MATH::fm_identity(float *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 (*) [16])param_1 = ZEXT416(_LC3);
  uVar1 = _UNK_00111558;
  *(undefined8 *)(param_1 + 4) = _LC4;
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = _UNK_00111568;
  *(undefined8 *)(param_1 + 8) = __LC9;
  *(undefined8 *)(param_1 + 10) = uVar1;
  uVar1 = _UNK_00111578;
  *(undefined8 *)(param_1 + 0xc) = __LC10;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  return;
}



/* FLOAT_MATH::fm_quatToEuler(float const*, float&, float&, float&) */

void FLOAT_MATH::fm_quatToEuler(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  float __y;
  float fVar6;
  float fVar7;
  float __y_00;
  
  fVar3 = *param_1;
  fVar2 = param_1[1];
  fVar1 = param_1[2];
  fVar4 = param_1[3] + param_1[3];
  fVar5 = fVar3 + fVar3;
  __y_00 = fVar4 * fVar2 - fVar5 * fVar1;
  fVar7 = _LC3 - __y_00 * __y_00;
  if (_LC12 < (float)((uint)fVar7 & _LC11)) {
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (_LC12 < (float)(_LC11 & (uint)fVar7)) {
      fVar6 = (fVar2 + fVar2) * fVar2;
      fVar7 = _LC3 / fVar7;
      __y = (fVar5 * fVar2 + fVar4 * fVar1) * fVar7;
      __x = ((_LC3 - fVar6) - (fVar1 + fVar1) * fVar1) * fVar7;
      fVar2 = (fVar4 * fVar3 + fVar1 * (fVar2 + fVar2)) * fVar7;
      fVar3 = ((_LC3 - fVar3 * fVar5) - fVar6) * fVar7;
      goto LAB_00100408;
    }
  }
  else {
    fVar7 = 0.0;
  }
  __y = 0.0;
  fVar2 = fVar4 * fVar3 - (fVar2 + fVar2) * fVar1;
  fVar3 = (_LC3 - fVar3 * fVar5) - (fVar1 + fVar1) * fVar1;
  __x = _LC3;
LAB_00100408:
  fVar3 = atan2f(fVar2,fVar3);
  *param_2 = fVar3;
  fVar3 = atan2f(__y_00,fVar7);
  *param_3 = fVar3;
  fVar3 = atan2f(__y,__x);
  *param_4 = fVar3;
  return;
}



/* FLOAT_MATH::fm_getAABB(unsigned int, float const*, unsigned int, float*, float*) */

void FLOAT_MATH::fm_getAABB(uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = 1;
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  *param_5 = *param_2;
  param_5[1] = param_2[1];
  param_5[2] = param_2[2];
  if (1 < param_1) {
    do {
      param_2 = (float *)((long)param_2 + (ulong)param_3);
      if (*param_2 < *param_4) {
        *param_4 = *param_2;
      }
      if (param_2[1] < param_4[1]) {
        param_4[1] = param_2[1];
      }
      if (param_2[2] < param_4[2]) {
        param_4[2] = param_2[2];
      }
      fVar1 = *param_2;
      if (*param_5 <= fVar1 && fVar1 != *param_5) {
        *param_5 = fVar1;
      }
      fVar1 = param_2[1];
      if (param_5[1] <= fVar1 && fVar1 != param_5[1]) {
        param_5[1] = fVar1;
      }
      fVar1 = param_2[2];
      if (param_5[2] <= fVar1 && fVar1 != param_5[2]) {
        param_5[2] = fVar1;
      }
      uVar2 = uVar2 + 1;
    } while (param_1 != uVar2);
  }
  return;
}



/* FLOAT_MATH::fm_eulerToQuat(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToQuat(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_20;
  float local_1c;
  
  sincosf(param_1 * _LC13,&local_1c,&local_20);
  fVar2 = local_1c;
  fVar1 = local_20;
  sincosf(_LC13 * param_2,&local_1c,&local_20);
  fVar3 = local_1c;
  fVar4 = local_20;
  sincosf(_LC13 * param_3,&local_1c,&local_20);
  fVar6 = fVar4 * local_20;
  fVar5 = fVar3 * local_1c;
  local_20 = local_20 * fVar3;
  fVar4 = fVar4 * local_1c;
  *param_4 = fVar2 * fVar6 - fVar1 * fVar5;
  param_4[1] = fVar1 * local_20 + fVar2 * fVar4;
  param_4[2] = fVar4 * fVar1 - local_20 * fVar2;
  param_4[3] = fVar1 * fVar6 + fVar2 * fVar5;
  return;
}



/* FLOAT_MATH::fm_eulerToQuat(float const*, float*) */

void FLOAT_MATH::fm_eulerToQuat(float *param_1,float *param_2)

{
  fm_eulerToQuat(*param_1,param_1[1],param_1[2],param_2);
  return;
}



/* FLOAT_MATH::fm_quatToMatrix(float const*, float*) */

void FLOAT_MATH::fm_quatToMatrix(float *param_1,float *param_2)

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
  
  fVar5 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  fVar8 = fVar5 * fVar1 - fVar2 * fVar3;
  fVar6 = fVar5 * fVar1 + fVar2 * fVar3;
  param_2[4] = fVar8 + fVar8;
  fVar8 = fVar5 * fVar2 - fVar1 * fVar3;
  fVar9 = fVar5 * fVar2 + fVar1 * fVar3;
  param_2[2] = fVar8 + fVar8;
  param_2[8] = fVar9 + fVar9;
  fVar8 = _LC3;
  fVar10 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar4 = fVar2 * fVar2 + fVar5 * fVar5;
  fVar7 = fVar5 * fVar5 + fVar1 * fVar1;
  param_2[0xf] = _LC3;
  fVar9 = fVar1 * fVar2 + fVar5 * fVar3;
  *(ulong *)param_2 = CONCAT44(fVar6 + fVar6,fVar8 - (fVar10 + fVar10));
  fVar5 = fVar1 * fVar2 - fVar5 * fVar3;
  param_2[5] = fVar8 - (fVar4 + fVar4);
  param_2[6] = fVar9 + fVar9;
  param_2[9] = fVar5 + fVar5;
  param_2[10] = fVar8 - (fVar7 + fVar7);
  return;
}



/* FLOAT_MATH::fm_eulerToMatrix(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToMatrix(float param_1,float param_2,float param_3,float *param_4)

{
  long in_FS_OFFSET;
  float afStack_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_eulerToQuat(param_1,param_2,param_3,afStack_38);
  fm_quatToMatrix(afStack_38,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_quatRotate(float const*, float const*, float*) */

void FLOAT_MATH::fm_quatRotate(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_1[3];
  fVar2 = param_1[1];
  fVar8 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_2[1];
  fVar5 = param_1[2];
  fVar6 = *param_1;
  fVar10 = (fVar1 * fVar8 + fVar2 * fVar3) - fVar4 * fVar5;
  fVar9 = (fVar1 * fVar4 + fVar8 * fVar5) - fVar3 * fVar6;
  fVar7 = (fVar1 * fVar3 + fVar4 * fVar6) - fVar8 * fVar2;
  fVar8 = (fVar8 * (float)((uint)fVar6 ^ _LC14) - fVar4 * fVar2) - fVar3 * fVar5;
  *param_3 = (((float)((uint)fVar6 ^ _LC14) * fVar8 + fVar1 * fVar10) - fVar5 * fVar9) +
             fVar2 * fVar7;
  param_3[1] = ((param_1[3] * fVar9 - param_1[1] * fVar8) - *param_1 * fVar7) + param_1[2] * fVar10;
  param_3[2] = ((fVar7 * param_1[3] - fVar8 * param_1[2]) - fVar10 * param_1[1]) + fVar9 * *param_1;
  return;
}



/* FLOAT_MATH::fm_getTranslation(float const*, float*) */

void FLOAT_MATH::fm_getTranslation(float *param_1,float *param_2)

{
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  return;
}



/* FLOAT_MATH::fm_matrixToQuat(float const*, float*) */

void FLOAT_MATH::fm_matrixToQuat(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  float fStack_4c;
  long local_40;
  
  fVar17 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar15 = param_1[10];
  fVar16 = fVar17 + param_1[5] + fVar15;
  if (0.0 < fVar16) {
    fVar17 = SQRT(fVar16 + _LC3);
    fVar15 = _LC13 / fVar17;
    param_2[3] = fVar17 * _LC13;
    *param_2 = (param_1[6] - param_1[9]) * fVar15;
    param_2[1] = (param_1[8] - param_1[2]) * fVar15;
    param_2[2] = (param_1[1] - param_1[4]) * fVar15;
  }
  else {
    local_60 = 0;
    local_68 = _LC15;
    bVar3 = fVar17 < param_1[5];
    if (param_1[(uint)((long)((ulong)bVar3 << 0x3f) >> 0x3f) & 5] < fVar15) {
      lVar12 = 0x18;
      lVar14 = 0x24;
      lVar6 = 8;
      lVar7 = 0x20;
      lVar8 = 0x10;
      lVar9 = 4;
      lVar5 = 0;
      lVar10 = 0x14;
      lVar11 = 1;
      uVar13 = 2;
    }
    else {
      uVar13 = (ulong)bVar3;
      iVar1 = *(int *)((long)&local_68 + uVar13 * 4);
      uVar4 = (uint)bVar3;
      fVar17 = param_1[iVar1 * 5];
      lVar5 = (long)iVar1;
      iVar2 = *(int *)((long)&local_68 + lVar5 * 4);
      lVar11 = (long)iVar2;
      lVar10 = (long)(iVar2 * 5) << 2;
      lVar9 = (long)(iVar2 + iVar1 * 4) << 2;
      lVar8 = (long)(iVar1 + iVar2 * 4) << 2;
      lVar7 = (long)(int)(iVar1 + uVar4 * 4) << 2;
      lVar6 = (long)(int)(iVar1 * 4 + uVar4) << 2;
      lVar14 = (long)(int)(uVar4 * 4 + iVar2) << 2;
      lVar12 = (long)(int)(uVar4 + iVar2 * 4) << 2;
      fVar15 = param_1[(uint)((long)((ulong)bVar3 << 0x3f) >> 0x3f) & 5];
    }
    fVar15 = (fVar15 - (fVar17 + *(float *)((long)param_1 + lVar10))) + _LC3;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    *(float *)((long)&local_58 + uVar13 * 4) = fVar15 * _LC13;
    if (fVar15 != 0.0) {
      fVar15 = _LC13 / fVar15;
    }
    fStack_4c = (*(float *)((long)param_1 + lVar9) - *(float *)((long)param_1 + lVar8)) * fVar15;
    *(float *)((long)&local_58 + lVar5 * 4) =
         (*(float *)((long)param_1 + lVar7) + *(float *)((long)param_1 + lVar6)) * fVar15;
    *(float *)((long)&local_58 + lVar11 * 4) =
         (*(float *)((long)param_1 + lVar14) + *(float *)((long)param_1 + lVar12)) * fVar15;
    *(undefined8 *)param_2 = local_58;
    *(ulong *)(param_2 + 2) = CONCAT44(fStack_4c,uStack_50);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_decomposeTransform(float const*, float*, float*, float*) */

void FLOAT_MATH::fm_decomposeTransform(float *param_1,float *param_2,float *param_3,float *param_4)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  float fStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  float fStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  fVar3 = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
  *param_4 = fVar3;
  fVar2 = SQRT(param_1[5] * param_1[5] + param_1[4] * param_1[4] + param_1[6] * param_1[6]);
  param_4[1] = fVar2;
  fVar1 = SQRT(param_1[10] * param_1[10] + param_1[8] * param_1[8] + param_1[9] * param_1[9]);
  param_4[2] = fVar1;
  local_28 = *(undefined8 *)(param_1 + 0xc);
  uStack_20 = *(undefined8 *)(param_1 + 0xe);
  fVar3 = _LC3 / fVar3;
  fVar2 = _LC3 / fVar2;
  fVar1 = _LC3 / fVar1;
  fStack_50 = (float)*(undefined8 *)(param_1 + 2);
  local_58 = CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      fVar3 * (float)*(undefined8 *)param_1);
  _fStack_50 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20),fVar3 * fStack_50);
  fStack_40 = (float)*(undefined8 *)(param_1 + 6);
  local_48 = CONCAT44(fVar2 * (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20),
                      fVar2 * (float)*(undefined8 *)(param_1 + 4));
  _fStack_40 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20),fVar2 * fStack_40);
  fStack_30 = (float)*(undefined8 *)(param_1 + 10);
  _fStack_30 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20),fVar1 * fStack_30);
  local_38 = CONCAT44(fVar1 * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                      fVar1 * (float)*(undefined8 *)(param_1 + 8));
  fm_matrixToQuat((float *)&local_58,param_3);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_sphereVolume(float) */

float FLOAT_MATH::fm_sphereVolume(float param_1)

{
  return _LC16 * param_1 * param_1 * param_1;
}



/* FLOAT_MATH::fm_cylinderVolume(float, float) */

float FLOAT_MATH::fm_cylinderVolume(float param_1,float param_2)

{
  return _LC17 * param_1 * param_1 * param_2;
}



/* FLOAT_MATH::fm_capsuleVolume(float, float) */

float FLOAT_MATH::fm_capsuleVolume(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 - (param_1 + param_1);
  fVar1 = _LC16 * param_1 * param_1 * param_1;
  if (0.0 < fVar2) {
    fVar1 = fVar1 + fVar2 * param_1 * _LC17 * param_1;
  }
  return fVar1;
}



/* FLOAT_MATH::fm_transform(float const*, float const*, float*) */

void FLOAT_MATH::fm_transform(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  if (param_1 != (float *)0x0) {
    fVar6 = (float)*(undefined8 *)(param_2 + 1);
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0xc);
    param_3[2] = param_1[2] * fVar1 + param_1[6] * fVar6 + param_1[10] * fVar7 + param_1[0xe];
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar6 + (float)((ulong)uVar3 >> 0x20) * fVar1 +
                  (float)((ulong)uVar4 >> 0x20) * fVar7 + (float)((ulong)uVar5 >> 0x20),
                  (float)uVar2 * fVar6 + (float)uVar3 * fVar1 + (float)uVar4 * fVar7 + (float)uVar5)
    ;
    return;
  }
  *param_3 = fVar1;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}



/* FLOAT_MATH::fm_rotate(float const*, float const*, float*) */

void FLOAT_MATH::fm_rotate(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  if (param_1 != (float *)0x0) {
    fVar5 = (float)*(undefined8 *)(param_2 + 1);
    fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 8);
    param_3[2] = param_1[2] * fVar1 + param_1[6] * fVar5 + param_1[10] * fVar6;
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar5 + (float)((ulong)uVar3 >> 0x20) * fVar1 +
                  fVar6 * (float)((ulong)uVar4 >> 0x20),
                  (float)uVar2 * fVar5 + (float)uVar3 * fVar1 + fVar6 * (float)uVar4);
    return;
  }
  *param_3 = fVar1;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}



/* FLOAT_MATH::fm_distance(float const*, float const*) */

float FLOAT_MATH::fm_distance(float *param_1,float *param_2)

{
  return SQRT((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
              (*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
}



/* FLOAT_MATH::fm_distanceSquared(float const*, float const*) */

float FLOAT_MATH::fm_distanceSquared(float *param_1,float *param_2)

{
  return (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
}



/* FLOAT_MATH::fm_distanceSquaredXZ(float const*, float const*) */

float FLOAT_MATH::fm_distanceSquaredXZ(float *param_1,float *param_2)

{
  return (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
}



/* FLOAT_MATH::fm_computePlane(float const*, float const*, float const*, float*) */

undefined8 FLOAT_MATH::fm_computePlane(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = (float)*(undefined8 *)(param_2 + 1);
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar1 = *param_1;
  fVar9 = fVar10 - (float)*(undefined8 *)(param_3 + 1);
  fVar6 = *param_2 - *param_3;
  fVar2 = (float)*(undefined8 *)(param_1 + 1);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
  fVar10 = fVar2 - fVar10;
  fVar5 = fVar1 - *param_2;
  fVar7 = (fVar4 - param_2[2]) * fVar9 - (param_2[2] - param_3[2]) * fVar10;
  fVar8 = fVar5 * (fVar8 - (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20)) -
          fVar6 * (fVar4 - fVar8);
  fVar6 = fVar6 * fVar10 - fVar5 * fVar9;
  fVar10 = 0.0;
  fVar5 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
  if (_LC18 <= fVar5) {
    fVar10 = _LC3 / fVar5;
  }
  *(ulong *)param_4 = CONCAT44(fVar10 * fVar8,fVar10 * fVar7);
  param_4[2] = fVar10 * fVar6;
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = 0.0 - (fVar10 * fVar7 * fVar1 + fVar10 * fVar8 * fVar2 + fVar10 * fVar6 * fVar4);
  return auVar3._0_8_;
}



/* FLOAT_MATH::fm_distToPlane(float const*, float const*) */

float FLOAT_MATH::fm_distToPlane(float *param_1,float *param_2)

{
  return *param_2 * *param_1 + param_2[1] * param_1[1] + param_2[2] * param_1[2] + param_1[3];
}



/* FLOAT_MATH::fm_dot(float const*, float const*) */

float FLOAT_MATH::fm_dot(float *param_1,float *param_2)

{
  return *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
}



/* FLOAT_MATH::fm_cross(float*, float const*, float const*) */

void FLOAT_MATH::fm_cross(float *param_1,float *param_2,float *param_3)

{
  *param_1 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  param_1[1] = param_2[2] * *param_3 - *param_2 * param_3[2];
  param_1[2] = *param_2 * param_3[1] - param_2[1] * *param_3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_normalize(float*) */

void FLOAT_MATH::fm_normalize(float *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[2];
  fVar4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar3 = SQRT(*param_1 * *param_1 + fVar4 * fVar4 + fVar1 * fVar1);
  if (__LC19 < fVar3) {
    fVar3 = _LC3 / fVar3;
    param_1[2] = fVar1 * fVar3;
    *(ulong *)param_1 = CONCAT44(fVar3 * fVar4,fVar3 * (float)*(undefined8 *)param_1);
    return;
  }
  uVar2 = CONCAT44(_UNK_00111544,_LC3);
  param_1[2] = 0.0;
  *(undefined8 *)param_1 = uVar2;
  return;
}



/* FLOAT_MATH::fm_computeNormalVector(float*, float const*, float const*) */

void FLOAT_MATH::fm_computeNormalVector(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3 - *param_2;
  param_1[1] = param_3[1] - param_2[1];
  param_1[2] = param_3[2] - param_2[2];
  fm_normalize(param_1);
  return;
}



/* FLOAT_MATH::fm_computeWindingOrder(float const*, float const*, float const*) */

bool FLOAT_MATH::fm_computeWindingOrder(float *param_1,float *param_2,float *param_3)

{
  undefined8 *extraout_RDX;
  long in_FS_OFFSET;
  float fVar1;
  undefined8 uVar2;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  uVar2 = *(undefined8 *)param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = param_1[2];
  local_30 = (float)*(undefined8 *)param_2 - (float)uVar2;
  fStack_2c = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
  local_28 = param_2[2] - fVar1;
  fm_normalize(&local_30);
  local_20 = (float)*extraout_RDX - (float)uVar2;
  fStack_1c = (float)((ulong)*extraout_RDX >> 0x20) - (float)((ulong)uVar2 >> 0x20);
  local_18 = *(float *)(extraout_RDX + 1) - fVar1;
  fm_normalize(&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0.0 < (local_28 * local_20 - local_18 * local_30) * 0.0 +
                 (local_18 * fStack_2c - local_28 * fStack_1c) +
                 (fStack_1c * local_30 - fStack_2c * local_20) * 0.0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_eulerToQuatDX(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToQuatDX(float param_1,float param_2,float param_3,float *param_4)

{
  float *pfVar1;
  long in_FS_OFFSET;
  float afStack_78 [4];
  float local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_eulerToQuat(param_1,param_2,param_3,afStack_78);
  pfVar1 = (float *)fm_quatToMatrix(afStack_78,local_68);
  fm_matrixToQuat(pfVar1,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_eulerToMatrixDX(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToMatrixDX(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_30;
  float local_2c;
  
  sincosf(param_1,&local_2c,&local_30);
  fVar3 = local_2c;
  fVar1 = local_30;
  sincosf(param_2,&local_2c,&local_30);
  fVar4 = local_2c;
  fVar2 = local_30;
  sincosf(param_3,&local_2c,&local_30);
  param_4[3] = 0.0;
  param_4[7] = 0.0;
  param_4[0xb] = 0.0;
  param_4[0xc] = 0.0;
  param_4[0xd] = 0.0;
  param_4[0xe] = 0.0;
  param_4[0xf] = 1.0;
  *(ulong *)param_4 = CONCAT44(local_2c * fVar1,local_30 * fVar2 + local_2c * fVar3 * fVar4);
  param_4[2] = local_2c * fVar3 * fVar2 - fVar4 * local_30;
  param_4[9] = (float)((uint)fVar3 ^ _LC14);
  param_4[5] = local_30 * fVar1;
  param_4[8] = fVar4 * fVar1;
  param_4[4] = local_30 * fVar3 * fVar4 - local_2c * fVar2;
  param_4[6] = local_2c * fVar4 + local_30 * fVar3 * fVar2;
  param_4[10] = fVar2 * fVar1;
  return;
}



/* FLOAT_MATH::fm_scale(float, float, float, float*) */

void FLOAT_MATH::fm_scale(float param_1,float param_2,float param_3,float *param_4)

{
  *param_4 = param_1;
  param_4[5] = param_2;
  param_4[10] = param_3;
  return;
}



/* FLOAT_MATH::fm_setTranslation(float const*, float*) */

void FLOAT_MATH::fm_setTranslation(float *param_1,float *param_2)

{
  param_2[0xc] = *param_1;
  param_2[0xd] = param_1[1];
  param_2[0xe] = param_1[2];
  return;
}



/* FLOAT_MATH::fm_computeArea(float const*, float const*, float const*) */

float FLOAT_MATH::fm_computeArea(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_2 - *param_1;
  fVar5 = param_2[1] - param_1[1];
  fVar4 = param_2[2] - param_1[2];
  fVar1 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar1 != 0.0) {
    fVar3 = *param_3 - *param_1;
    fVar8 = param_3[1] - param_1[1];
    fVar7 = param_3[2] - param_1[2];
    fVar2 = (fVar6 * fVar3 + fVar5 * fVar8 + fVar4 * fVar7) / (fVar1 * fVar1);
    fVar8 = fVar8 - fVar5 * fVar2;
    fVar3 = fVar3 - fVar6 * fVar2;
    fVar7 = fVar7 - fVar4 * fVar2;
    return fVar1 * _LC13 * SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar8 * fVar8);
  }
  return fVar1 * _LC13 * 0.0;
}



/* FLOAT_MATH::fm_lerp(float const*, float const*, float*, float) */

void FLOAT_MATH::fm_lerp(float *param_1,float *param_2,float *param_3,float param_4)

{
  *param_3 = (*param_2 - *param_1) * param_4 + *param_1;
  param_3[1] = (param_2[1] - param_1[1]) * param_4 + param_1[1];
  param_3[2] = (param_2[2] - param_1[2]) * param_4 + param_1[2];
  return;
}



/* FLOAT_MATH::fm_pointTestXZ(float const*, float const*, float const*) */

bool FLOAT_MATH::fm_pointTestXZ(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_2[2];
  fVar1 = param_1[2];
  fVar2 = param_3[2];
  fVar3 = fVar2;
  if (((fVar4 <= fVar1) || (fVar3 = fVar4, fVar2 <= fVar1)) && (fVar1 < fVar3)) {
    fVar4 = ((fVar1 - fVar4) * (*param_3 - *param_2)) / (fVar2 - fVar4) + *param_2;
    return *param_1 <= fVar4 && fVar4 != *param_1;
  }
  return false;
}



/* FLOAT_MATH::fm_insideTriangleXZ(float const*, float const*, float const*, float const*) */

uint FLOAT_MATH::fm_insideTriangleXZ(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float *extraout_RDX;
  
  uVar1 = fm_pointTestXZ(param_1,param_2,param_3);
  uVar2 = fm_pointTestXZ(param_1,extraout_RDX,param_4);
  uVar1 = uVar1 ^ uVar2;
  uVar2 = fm_pointTestXZ(param_1,param_4,param_2);
  return uVar2 ^ uVar1;
}



/* FLOAT_MATH::fm_insideAABB(float const*, float const*, float const*) */

bool FLOAT_MATH::fm_insideAABB(float *param_1,float *param_2,float *param_3)

{
  if ((((*param_2 <= *param_1) && (*param_1 <= *param_3)) && (param_2[1] <= param_1[1])) &&
     ((param_1[1] <= param_3[1] && (param_2[2] <= param_1[2])))) {
    return param_1[2] <= param_3[2];
  }
  return false;
}



/* FLOAT_MATH::fm_clipTestPoint(float const*, float const*, float const*) */

byte FLOAT_MATH::fm_clipTestPoint(float *param_1,float *param_2,float *param_3)

{
  byte bVar1;
  float fVar2;
  
  fVar2 = *param_3;
  bVar1 = 1;
  if (*param_1 <= fVar2) {
    bVar1 = (*param_2 <= fVar2 && fVar2 != *param_2) * '\x02';
  }
  fVar2 = param_3[1];
  if (param_1[1] <= fVar2) {
    if (param_2[1] <= fVar2 && fVar2 != param_2[1]) {
      fVar2 = param_3[2];
      bVar1 = bVar1 | 8;
      if (param_1[2] <= fVar2) goto LAB_00101990;
      goto LAB_00101971;
    }
  }
  else {
    bVar1 = bVar1 | 4;
  }
  fVar2 = param_3[2];
  if (param_1[2] <= fVar2) {
LAB_00101990:
    if (param_2[2] <= fVar2 && fVar2 != param_2[2]) {
      bVar1 = bVar1 | 0x20;
    }
    return bVar1;
  }
LAB_00101971:
  return bVar1 | 0x10;
}



/* FLOAT_MATH::fm_clipTestPointXZ(float const*, float const*, float const*) */

byte FLOAT_MATH::fm_clipTestPointXZ(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = *param_3;
  bVar2 = 1;
  if (*param_1 <= fVar1) {
    bVar2 = (*param_2 <= fVar1 && fVar1 != *param_2) * '\x02';
  }
  fVar1 = param_3[2];
  if (fVar1 < param_1[2]) {
    return bVar2 | 0x10;
  }
  if (param_2[2] <= fVar1 && fVar1 != param_2[2]) {
    bVar2 = bVar2 | 0x20;
  }
  return bVar2;
}



/* FLOAT_MATH::fm_clipTestAABB(float const*, float const*, float const*, float const*, float const*,
   unsigned int&) */

uint FLOAT_MATH::fm_clipTestAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = fm_clipTestPoint(param_1,param_2,param_3);
  uVar2 = fm_clipTestPoint(param_1,param_2,param_4);
  uVar4 = uVar1 | uVar2;
  uVar3 = fm_clipTestPoint(param_1,param_2,param_5);
  *param_6 = uVar1 & uVar3 & uVar2 & 0x3f;
  return uVar3 | uVar4;
}



/* FLOAT_MATH::intersect(float const*, float const*, float const*, float const*, float*) */

undefined8
FLOAT_MATH::intersect(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = 0;
  fVar9 = _LC3;
  fVar8 = 0.0;
  do {
    fVar1 = *(float *)((long)param_1 + lVar5);
    fVar2 = *(float *)((long)param_2 + lVar5);
    fVar3 = *(float *)((long)param_4 + lVar5);
    fVar6 = _LC3;
    if (fVar2 <= fVar1) {
      if (fVar3 < fVar2) {
        return 0;
      }
      fVar4 = *(float *)((long)param_3 + lVar5);
      if (fVar1 < fVar4) {
        return 0;
      }
      fVar7 = 0.0;
      if (fVar3 < fVar1) {
        fVar7 = (fVar3 - fVar1) / (fVar2 - fVar1);
      }
      if (fVar2 < fVar4) {
        fVar6 = (fVar4 - fVar1) / (fVar2 - fVar1);
      }
    }
    else {
      if (fVar3 < fVar1) {
        return 0;
      }
      fVar4 = *(float *)((long)param_3 + lVar5);
      if (fVar2 < fVar4) {
        return 0;
      }
      if (fVar4 <= fVar1) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = (fVar4 - fVar1) / (fVar2 - fVar1);
      }
      if (fVar3 < fVar2) {
        fVar6 = (fVar3 - fVar1) / (fVar2 - fVar1);
      }
    }
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    if (fVar9 <= fVar6) {
      fVar6 = fVar9;
    }
    if (fVar6 < fVar7) {
      return 0;
    }
    lVar5 = lVar5 + 4;
    fVar9 = fVar6;
    fVar8 = fVar7;
    if (lVar5 == 0xc) {
      *param_5 = fVar7;
      return 1;
    }
  } while( true );
}



/* FLOAT_MATH::fm_lineTestAABB(float const*, float const*, float const*, float const*, float&) */

void FLOAT_MATH::fm_lineTestAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  intersect(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* FLOAT_MATH::fm_lineTestAABBXZ(float const*, float const*, float const*, float const*, float&) */

void FLOAT_MATH::fm_lineTestAABBXZ
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  long in_FS_OFFSET;
  float local_28 [3];
  float local_1c [3];
  long local_10;
  
  local_28[0] = *param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[1] = -1e+09;
  local_28[2] = param_3[2];
  local_1c[1] = 1e+09;
  local_1c[0] = *param_4;
  local_1c[2] = param_4[2];
  intersect(param_1,param_2,local_28,local_1c,param_5);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_minmax(float const*, float*, float*) */

void FLOAT_MATH::fm_minmax(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (*param_1 < *param_2) {
    *param_2 = *param_1;
  }
  if (param_1[1] < param_2[1]) {
    param_2[1] = param_1[1];
  }
  if (param_1[2] < param_2[2]) {
    param_2[2] = param_1[2];
  }
  fVar1 = *param_1;
  if (*param_3 <= fVar1 && fVar1 != *param_3) {
    *param_3 = fVar1;
  }
  fVar1 = param_1[1];
  if (param_3[1] <= fVar1 && fVar1 != param_3[1]) {
    param_3[1] = fVar1;
  }
  fVar1 = param_1[2];
  if (param_3[2] <= fVar1 && fVar1 != param_3[2]) {
    param_3[2] = fVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_solveX(float const*, float, float) */

undefined8 FLOAT_MATH::fm_solveX(float *param_1,float param_2,float param_3)

{
  uint in_XMM0_Db;
  
  return CONCAT44(in_XMM0_Db ^ _UNK_00111594,
                  (float)((uint)(param_2 * param_1[1] + param_3 * param_1[2] + param_1[3]) ^ _LC14)
                  / *param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_solveY(float const*, float, float) */

undefined8 FLOAT_MATH::fm_solveY(float *param_1,float param_2,float param_3)

{
  uint in_XMM0_Db;
  
  return CONCAT44(in_XMM0_Db ^ _UNK_00111594,
                  (float)((uint)(param_2 * *param_1 + param_3 * param_1[2] + param_1[3]) ^ _LC14) /
                  param_1[1]);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_solveZ(float const*, float, float) */

undefined8 FLOAT_MATH::fm_solveZ(float *param_1,float param_2,float param_3)

{
  uint in_XMM0_Db;
  
  return CONCAT44(in_XMM0_Db ^ _UNK_00111594,
                  (float)((uint)(param_2 * *param_1 + param_3 * param_1[1] + param_1[3]) ^ _LC14) /
                  param_1[2]);
}



/* FLOAT_MATH::fm_getAABBCenter(float const*, float const*, float*) */

void FLOAT_MATH::fm_getAABBCenter(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = _LC13;
  *param_3 = (*param_2 - *param_1) * _LC13 + *param_1;
  param_3[1] = (param_2[1] - param_1[1]) * fVar1 + param_1[1];
  param_3[2] = (param_2[2] - param_1[2]) * fVar1 + param_1[2];
  return;
}



/* FLOAT_MATH::fm_getDominantAxis(float const*) */

char FLOAT_MATH::fm_getDominantAxis(float *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((uint)param_1[1] & _LC11);
  fVar3 = (float)((uint)param_1[2] & _LC11);
  if ((fVar2 <= (float)((uint)*param_1 & _LC11)) || (cVar1 = '\x02', fVar2 <= fVar3)) {
    if ((float)((uint)*param_1 & _LC11) < fVar3) {
      return (fVar2 < fVar3) * '\x03' + '\x01';
    }
    cVar1 = '\x01';
  }
  return cVar1;
}



/* FLOAT_MATH::fm_raySphereIntersect(float const*, float, float const*, float const*, float, float*)
    */

bool FLOAT_MATH::fm_raySphereIntersect
               (float *param_1,float param_2,float *param_3,float *param_4,float param_5,
               float *param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_1[1] - param_3[1];
  fVar2 = *param_1 - *param_3;
  fVar4 = param_1[2] - param_3[2];
  fVar8 = *param_4;
  fVar7 = param_4[1];
  fVar6 = param_4[2];
  fVar3 = fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4;
  if (fVar3 < param_2 * param_2) {
    fVar8 = (float)((uint)fVar8 ^ _LC14);
    fVar7 = (float)((uint)fVar7 ^ _LC14);
    fVar6 = (float)((uint)fVar6 ^ _LC14);
  }
  fVar2 = fVar2 * fVar8 + fVar5 * fVar7 + fVar4 * fVar6;
  fVar3 = param_2 * param_2 - (fVar3 - fVar2 * fVar2);
  bVar1 = param_6 != (float *)0x0 && 0.0 < fVar3;
  if (param_6 == (float *)0x0 || 0.0 >= fVar3) {
    return bVar1;
  }
  fVar2 = fVar2 - SQRT(fVar3);
  if (fVar2 < param_5) {
    *param_6 = fVar8 * fVar2 + *param_3;
    param_6[1] = fVar7 * fVar2 + param_3[1];
    param_6[2] = fVar6 * fVar2 + param_3[2];
    return bVar1;
  }
  return false;
}



/* FLOAT_MATH::fm_lineSphereIntersect(float const*, float, float const*, float const*, float*) */

undefined8
FLOAT_MATH::fm_lineSphereIntersect
          (float *param_1,float param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)param_3;
  fVar6 = (float)*(undefined8 *)param_4 - fVar3;
  fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_4 + 1) - (float)*(undefined8 *)(param_3 + 1);
  local_18 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar4 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20) - local_18;
  fVar2 = SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar4 * fVar4);
  if (0.0 < fVar2) {
    fVar3 = _LC3 / fVar2;
    local_18 = fVar3 * fVar4;
    local_20 = CONCAT44(((float)((ulong)*(undefined8 *)param_4 >> 0x20) - fVar5) * fVar3,
                        fVar6 * fVar3);
    uVar1 = fm_raySphereIntersect(param_1,param_2,param_3,(float *)&local_20,fVar2,param_5);
  }
  else {
    uVar1 = 0;
    fVar2 = (float)*(undefined8 *)param_1 - fVar3;
    fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar5;
    local_20 = CONCAT44(fVar5,fVar2);
    local_18 = param_1[2] - local_18;
    if (fVar2 * fVar2 + fVar5 * fVar5 + local_18 * local_18 < param_2 * param_2) {
      if (param_5 != (float *)0x0) {
        *param_5 = fVar3;
        param_5[1] = param_3[1];
        param_5[2] = param_3[2];
      }
      uVar1 = 1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_catmullRom(float*, float const*, float const*, float const*, float const*, float)
    */

void FLOAT_MATH::fm_catmullRom
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = _LC13;
  fVar5 = param_6 * param_6;
  fVar3 = param_6 * fVar5;
  fVar4 = fVar3 - fVar5;
  fVar2 = ((fVar5 + fVar5) - fVar3) - param_6;
  fVar6 = (_LC22 * fVar3 - _LC23 * fVar5) + (float)_LC24;
  fVar3 = (_LC25 * fVar5 - _LC22 * fVar3) + param_6;
  *param_1 = (*param_2 * fVar2 + *param_3 * fVar6 + *param_4 * fVar3 + *param_5 * fVar4) * _LC13;
  param_1[1] = (param_2[1] * fVar2 + param_3[1] * fVar6 + param_4[1] * fVar3 + param_5[1] * fVar4) *
               fVar1;
  param_1[2] = (fVar2 * param_2[2] + fVar6 * param_3[2] + fVar3 * param_4[2] + fVar4 * param_5[2]) *
               fVar1;
  return;
}



/* FLOAT_MATH::fm_intersectAABB(float const*, float const*, float const*, float const*) */

bool FLOAT_MATH::fm_intersectAABB(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*param_1 < *param_4 || *param_1 == *param_4) &&
       (*param_3 < *param_2 || *param_3 == *param_2)) &&
      (param_1[1] < param_4[1] || param_1[1] == param_4[1])) &&
     ((bVar1 = false, param_3[1] < param_2[1] || param_3[1] == param_2[1] &&
      (param_1[2] < param_4[2] || param_1[2] == param_4[2])))) {
    bVar1 = param_3[2] < param_2[2] || param_3[2] == param_2[2];
  }
  return bVar1;
}



/* FLOAT_MATH::fm_insideAABB(float const*, float const*, float const*, float const*) */

bool FLOAT_MATH::fm_insideAABB(float *param_1,float *param_2,float *param_3,float *param_4)

{
  if ((((*param_4 <= *param_2) && (param_4[1] <= param_2[1])) && (param_4[2] <= param_2[2])) &&
     ((*param_1 <= *param_3 && (param_1[1] <= param_3[1])))) {
    return param_1[2] <= param_3[2];
  }
  return false;
}



/* FLOAT_MATH::fm_rotationArc(float const*, float const*, float*) */

void FLOAT_MATH::fm_rotationArc(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_1[1];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar7 = *param_1;
  fVar6 = param_2[2];
  fVar1 = param_1[2];
  fVar2 = fVar3 * fVar7 + fVar5 * fVar4 + fVar6 * fVar1;
  if (fVar2 <= _LC26) {
    if ((float)((uint)fVar7 & _LC11) < _LC27) {
      *param_3 = 0.0;
      fVar3 = param_1[2];
      fVar5 = 0.0;
      param_3[1] = fVar3;
      fVar4 = param_1[1];
      fVar6 = (float)((uint)fVar4 ^ _LC14);
      fVar4 = fVar4 * fVar4;
      fVar7 = fVar5;
    }
    else {
      *param_3 = fVar5;
      fVar4 = 0.0;
      fVar3 = (float)((uint)*param_1 ^ _LC14);
      fVar6 = 0.0;
      fVar7 = fVar5 * fVar5;
    }
    fVar4 = _LC3 / SQRT(fVar3 * fVar3 + fVar7 + fVar4 + 0.0);
    *param_3 = fVar4 * fVar5;
    param_3[1] = fVar4 * fVar3;
    param_3[2] = fVar4 * fVar6;
    param_3[3] = fVar4 * 0.0;
    return;
  }
  fVar2 = fVar2 + _LC3;
  fVar2 = SQRT(fVar2 + fVar2);
  fVar8 = _LC3 / fVar2;
  fVar2 = fVar2 * _LC13;
  *param_3 = (fVar5 * fVar6 - fVar1 * fVar4) * fVar8;
  param_3[1] = (fVar1 * fVar3 - fVar6 * fVar7) * fVar8;
  param_3[2] = (fVar4 * fVar7 - fVar5 * fVar3) * fVar8;
  param_3[3] = fVar2;
  return;
}



/* FLOAT_MATH::fm_distancePointLineSegment(float const*, float const*, float const*, float*,
   FLOAT_MATH::LineSegmentType&, float) */

float FLOAT_MATH::fm_distancePointLineSegment
                (float *param_1,float *param_2,float *param_3,float *param_4,
                LineSegmentType *param_5,float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_3;
  fVar8 = *param_2;
  fVar7 = fVar3 - fVar8;
  fVar4 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar2 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6);
  if (0.0 < fVar2) {
    fVar5 = *param_1 - fVar8;
    fVar10 = param_1[1] - param_2[1];
    fVar9 = param_1[2] - param_2[2];
    fVar2 = (fVar4 * fVar10 + fVar5 * fVar7 + fVar6 * fVar9) / (fVar2 * fVar2);
    if ((0.0 <= fVar2) && (fVar2 <= _LC3)) {
      fVar8 = fVar7 * fVar2 + fVar8;
      fVar6 = (param_6 + param_6) * (param_6 + param_6);
      *param_4 = fVar8;
      fVar4 = (param_3[1] - param_2[1]) * fVar2 + param_2[1];
      param_4[1] = fVar4;
      iVar1 = 0;
      fVar3 = (param_3[2] - param_2[2]) * fVar2 + param_2[2];
      param_4[2] = fVar3;
      fVar2 = SQRT((param_1[2] - fVar3) * (param_1[2] - fVar3) +
                   (*param_1 - fVar8) * (*param_1 - fVar8) +
                   (param_1[1] - fVar4) * (param_1[1] - fVar4));
      if (fVar6 <= (fVar8 - *param_2) * (fVar8 - *param_2) +
                   (fVar4 - param_2[1]) * (fVar4 - param_2[1]) +
                   (fVar3 - param_2[2]) * (fVar3 - param_2[2])) {
        iVar1 = ((fVar8 - *param_3) * (fVar8 - *param_3) +
                 (fVar4 - param_3[1]) * (fVar4 - param_3[1]) +
                 (fVar3 - param_3[2]) * (fVar3 - param_3[2]) < fVar6) + 1;
      }
      goto LAB_0010242c;
    }
    fVar4 = *param_1 - fVar3;
    fVar7 = param_1[2] - param_3[2];
    fVar2 = param_1[1] - param_3[1];
    fVar6 = fVar5 * fVar5 + fVar10 * fVar10 + fVar9 * fVar9;
    fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar7 * fVar7;
    if (fVar6 <= fVar2) {
      *param_4 = fVar8;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      *(undefined4 *)param_5 = 0;
      return SQRT(fVar6);
    }
    fVar2 = SQRT(fVar2);
  }
  *param_4 = fVar3;
  iVar1 = 2;
  param_4[1] = param_3[1];
  param_4[2] = param_3[2];
LAB_0010242c:
  *(int *)param_5 = iVar1;
  return fVar2;
}



/* FLOAT_MATH::fm_colinear(float const*, float const*, float const*, float const*, float) */

bool FLOAT_MATH::fm_colinear
               (float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = param_2[2];
  fVar2 = (float)*(undefined8 *)param_1;
  local_30 = (float)*(undefined8 *)param_2 - fVar2;
  fVar3 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fStack_2c = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar3;
  local_28 = fVar1 - param_1[2];
  local_20 = ((float)*(undefined8 *)param_4 - fVar2) - ((float)*(undefined8 *)param_3 - fVar2);
  fStack_1c = ((float)((ulong)*(undefined8 *)param_4 >> 0x20) - fVar3) -
              ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar3);
  local_18 = (param_4[2] - fVar1) - (param_3[2] - fVar1);
  fm_normalize(&local_30);
  fm_normalize(&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5 <= local_30 * local_20 + fStack_2c * fStack_1c + local_28 * local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_colinear(float const*, float const*, float const*, float) */

bool FLOAT_MATH::fm_colinear(float *param_1,float *param_2,float *param_3,float param_4)

{
  long in_FS_OFFSET;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (float)*(undefined8 *)param_2;
  fStack_1c = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  local_30 = local_20 - (float)*(undefined8 *)param_1;
  fStack_2c = fStack_1c - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_28 = param_2[2] - param_1[2];
  local_20 = (float)*(undefined8 *)param_3 - local_20;
  fStack_1c = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fStack_1c;
  local_18 = param_3[2] - param_2[2];
  fm_normalize(&local_30);
  fm_normalize(&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4 <= local_30 * local_20 + fStack_2c * fStack_1c + local_28 * local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_initMinMax(float const*, float*, float*) */

void FLOAT_MATH::fm_initMinMax(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_1;
  *param_2 = fVar1;
  *param_3 = fVar1;
  fVar1 = param_1[1];
  param_2[1] = fVar1;
  param_3[1] = fVar1;
  fVar1 = param_1[2];
  param_2[2] = fVar1;
  param_3[2] = fVar1;
  return;
}



/* FLOAT_MATH::fm_intersectLineSegments2d(float const*, float const*, float const*, float const*,
   float*) */

int FLOAT_MATH::fm_intersectLineSegments2d
              (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar5 = param_4[1] - param_3[1];
  fVar2 = *param_4 - *param_3;
  fVar4 = param_2[1] - param_1[1];
  fVar6 = *param_2 - fVar1;
  fVar3 = param_1[1] - param_3[1];
  fVar8 = fVar1 - *param_3;
  fVar7 = fVar5 * fVar6 - fVar2 * fVar4;
  fVar4 = fVar3 * fVar6 - fVar4 * fVar8;
  fVar2 = fVar2 * fVar3 - fVar5 * fVar8;
  if (fVar7 == 0.0) {
    return 3 - (uint)(fVar2 == 0.0 && fVar4 == 0.0);
  }
  fVar7 = _LC3 / fVar7;
  fVar2 = fVar2 * fVar7;
  if ((((0.0 <= fVar2) && (fVar2 <= _LC3)) && (fVar4 = fVar4 * fVar7, 0.0 <= fVar4)) &&
     (fVar4 <= _LC3)) {
    *param_5 = fVar6 * fVar2 + fVar1;
    param_5[1] = fVar2 * (param_2[1] - param_1[1]) + param_1[1];
    return 1;
  }
  return 0;
}



/* FLOAT_MATH::fm_intersectLineSegments2dTime(float const*, float const*, float const*, float
   const*, float&, float&) */

int FLOAT_MATH::fm_intersectLineSegments2dTime
              (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
              float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_4[1] - param_3[1];
  fVar1 = *param_4 - *param_3;
  fVar2 = *param_2 - *param_1;
  fVar3 = param_2[1] - param_1[1];
  fVar5 = *param_1 - *param_3;
  fVar6 = param_1[1] - param_3[1];
  fVar7 = fVar4 * fVar2 - fVar1 * fVar3;
  fVar2 = fVar2 * fVar6 - fVar3 * fVar5;
  fVar1 = fVar1 * fVar6 - fVar4 * fVar5;
  if (fVar7 == 0.0) {
    return 3 - (uint)(fVar1 == 0.0 && fVar2 == 0.0);
  }
  fVar7 = _LC3 / fVar7;
  fVar1 = fVar1 * fVar7;
  if ((((0.0 <= fVar1) && (fVar1 <= _LC3)) && (fVar2 = fVar2 * fVar7, 0.0 <= fVar2)) &&
     (fVar2 <= _LC3)) {
    *param_5 = fVar1;
    *param_6 = fVar2;
    return 1;
  }
  return 0;
}



/* FLOAT_MATH::fm_intersectPointPlane(float const*, float const*, float*, float const*) */

undefined8
FLOAT_MATH::fm_intersectPointPlane(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1;
  fVar7 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar6 = fVar1 * fVar7 + param_1[1] * fVar2 + param_1[2] * fVar3 + fVar4;
  fVar8 = *param_2 * fVar7 + param_2[1] * fVar2 + param_2[2] * fVar3 + fVar4;
  if ((fVar6 <= 0.0) && (fVar8 <= 0.0)) {
    return 0;
  }
  if ((fVar6 < 0.0) || (uVar5 = 0, fVar8 < 0.0)) {
    fVar10 = *param_2 - fVar1;
    fVar9 = param_2[1] - param_1[1];
    uVar5 = 1;
    fVar8 = param_2[2] - param_1[2];
    fVar7 = (float)((uint)((fVar6 - fVar4) + fVar4) ^ _LC14) /
            (fVar7 * fVar10 + fVar2 * fVar9 + fVar3 * fVar8);
    *param_3 = fVar10 * fVar7 + fVar1;
    param_3[1] = fVar9 * fVar7 + param_1[1];
    param_3[2] = fVar8 * fVar7 + param_1[2];
  }
  return uVar5;
}



/* FLOAT_MATH::fm_getSidePlane(float const*, float const*, float) */

char FLOAT_MATH::fm_getSidePlane(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2] + param_2[3];
  if (((float)((uint)param_3 ^ _LC14) <= fVar1) && (fVar1 <= param_3)) {
    return '\0';
  }
  return (fVar1 <= 0.0) + '\x01';
}



/* FLOAT_MATH::fm_planeTriIntersection(float const*, float const*, unsigned int, float, float*,
   unsigned int&, float*, unsigned int&) */

char FLOAT_MATH::fm_planeTriIntersection
               (float *param_1,float *param_2,uint param_3,float param_4,float *param_5,
               uint *param_6,float *param_7,uint *param_8)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  float *pfVar22;
  char cVar23;
  float *pfVar24;
  ulong uVar25;
  float *pfVar26;
  uint uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_3c9c;
  float local_3c94;
  undefined8 local_3c90;
  float local_3c88;
  undefined8 local_3c84;
  float local_3c7c;
  undefined8 local_3c78;
  undefined8 uStack_3c70;
  undefined8 local_3c68;
  float afStack_3c60 [766];
  undefined8 local_3068;
  float afStack_3060 [766];
  float local_2468;
  float local_2464;
  float fStack_2460;
  float fStack_245c;
  float fStack_2458;
  undefined8 local_2454;
  undefined8 uStack_244c;
  float local_2444 [763];
  uint local_1858;
  undefined8 local_1854 [385];
  uint local_c48;
  undefined1 local_c44 [3076];
  long local_40;
  
  fVar33 = *param_1;
  fVar34 = param_1[1];
  uVar7 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)(param_1 + 2);
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  uVar14 = (ulong)param_3;
  fVar31 = *param_2;
  fVar29 = param_2[1];
  fVar8 = *param_2;
  fVar9 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = param_2[2];
  uVar25 = (ulong)(param_3 * 2);
  pfVar2 = (float *)((long)param_2 + uVar14);
  pfVar22 = (float *)((long)param_2 + uVar25);
  fVar32 = (float)((uint)param_4 ^ _LC14);
  *param_6 = 0;
  *param_8 = 0;
  fVar29 = fVar31 * fVar33 + fVar29 * fVar34 + fVar6 * fVar4 + fVar5;
  if ((fVar29 < fVar32) || (cVar23 = '\0', param_4 < fVar29)) {
    cVar23 = (fVar29 <= 0.0) + '\x01';
  }
  fVar29 = *pfVar2 * fVar33 + pfVar2[1] * fVar34 + pfVar2[2] * fVar4 + fVar5;
  if ((fVar29 < fVar32) || (cVar15 = '\0', param_4 < fVar29)) {
    cVar15 = (fVar29 <= 0.0) + '\x01';
  }
  fVar29 = pfVar22[2];
  fVar30 = pfVar22[1] * fVar34 + *pfVar22 * fVar33 + fVar29 * fVar4 + fVar5;
  if ((fVar30 < fVar32) || (param_4 < fVar30)) {
    if (fVar30 <= 0.0) {
      if (cVar23 == '\0' || cVar15 == '\0') {
        if (cVar23 == '\0') {
          if (cVar15 == '\0') {
LAB_001031ac:
            cVar15 = '\x02';
            goto LAB_00102eca;
          }
          cVar16 = '\x02';
          cVar23 = cVar15;
        }
        else {
          if (cVar15 != '\0') {
            if ((cVar15 == cVar23) && (cVar23 == '\x02')) goto LAB_001031ac;
            goto LAB_00102cef;
          }
          cVar16 = '\x02';
        }
LAB_00102eaf:
        bVar28 = cVar23 == cVar16;
LAB_00102eb4:
        if (bVar28) goto LAB_00102ebc;
      }
      else if ((cVar23 == '\x02') && (bVar28 = cVar15 == '\x02', cVar15 = '\x02', bVar28))
      goto LAB_00102eca;
    }
    else {
      if (cVar23 == '\0' || cVar15 == '\0') {
        if (cVar23 == '\0') {
          if (cVar15 == '\0') goto LAB_00102c1f;
          cVar16 = '\x01';
          cVar23 = cVar15;
        }
        else {
          if (cVar15 != '\0') goto LAB_00102ce2;
          cVar16 = '\x01';
        }
        goto LAB_00102eaf;
      }
LAB_00102ce2:
      if ((cVar15 == cVar23) && (cVar23 == '\x01')) goto LAB_00102c1f;
    }
LAB_00102cef:
    uVar21 = 0;
    uVar27 = 0;
    local_2444[0] = fVar29;
    local_1858 = 0;
    pfVar24 = &local_2468;
    pfVar26 = local_2444;
    local_c48 = 0;
    local_2464 = fVar8;
    fStack_2460 = fVar9;
    fStack_245c = fVar6;
    fStack_2458 = *pfVar2;
    local_2454 = *(undefined8 *)(pfVar2 + 1);
    uStack_244c = *(undefined8 *)pfVar22;
    local_3c9c = *(undefined8 *)pfVar22;
    local_3c94 = fVar29;
    local_3c78 = uVar7;
    uStack_3c70 = uVar10;
    do {
      uVar7 = *(undefined8 *)(pfVar24 + 1);
      local_3c88 = pfVar24[3];
      local_3c90._0_4_ = (float)uVar7;
      local_3c90._4_4_ = (float)((ulong)uVar7 >> 0x20);
      fVar31 = (float)local_3c90 * fVar33 + local_3c90._4_4_ * fVar34 + local_3c88 * fVar4 + fVar5;
      local_3c90 = uVar7;
      if (0.0 < fVar31) {
        uVar18 = uVar21;
        if (fVar30 < 0.0) {
          fm_intersectPointPlane
                    ((float *)&local_3c90,(float *)&local_3c9c,(float *)&local_3c84,
                     (float *)&local_3c78);
          lVar13 = (long)(int)uVar27;
          uVar18 = uVar21 + 1;
          uVar27 = uVar27 + 1;
          *(undefined8 *)((long)&local_3068 + lVar13 * 0xc) = local_3c84;
          afStack_3060[lVar13 * 3] = local_3c7c;
          *(undefined8 *)((long)&local_3c68 + (long)(int)uVar21 * 0xc) = local_3c84;
          afStack_3c60[(long)(int)uVar21 * 3] = local_3c7c;
        }
        uVar21 = uVar18 + 1;
        *(undefined8 *)((long)&local_3c68 + (long)(int)uVar18 * 0xc) = local_3c90;
        afStack_3c60[(long)(int)uVar18 * 3] = local_3c88;
      }
      else {
        uVar18 = uVar27 + 1;
        if (fVar31 < 0.0) {
          uVar19 = uVar18;
          if (0.0 < fVar30) {
            fm_intersectPointPlane
                      ((float *)&local_3c90,(float *)&local_3c9c,(float *)&local_3c84,
                       (float *)&local_3c78);
            afStack_3060[(long)(int)uVar27 * 3] = local_3c7c;
            uVar19 = uVar27 + 2;
            *(undefined8 *)((long)&local_3068 + (long)(int)uVar27 * 0xc) = local_3c84;
            lVar13 = (long)(int)uVar21;
            uVar21 = uVar21 + 1;
            *(undefined8 *)((long)&local_3c68 + lVar13 * 0xc) = local_3c84;
            afStack_3c60[lVar13 * 3] = local_3c7c;
            uVar27 = uVar18;
          }
          *(undefined8 *)((long)&local_3068 + (long)(int)uVar27 * 0xc) = local_3c90;
          afStack_3060[(long)(int)uVar27 * 3] = local_3c88;
          uVar27 = uVar19;
        }
        else {
          *(undefined8 *)((long)&local_3068 + (long)(int)uVar27 * 0xc) = uVar7;
          afStack_3060[(long)(int)uVar27 * 3] = local_3c88;
          lVar13 = (long)(int)uVar21;
          uVar21 = uVar21 + 1;
          *(undefined8 *)((long)&local_3c68 + lVar13 * 0xc) = uVar7;
          afStack_3c60[lVar13 * 3] = local_3c88;
          uVar27 = uVar18;
        }
      }
      pfVar24 = pfVar24 + 3;
      fVar30 = fVar31;
      local_3c9c = local_3c90;
      local_3c94 = local_3c88;
    } while (pfVar24 != pfVar26);
    if ((int)uVar21 < 1) {
      local_1858 = uVar21;
      if (0 < (int)uVar27) {
        memcpy(local_c44,&local_3068,(ulong)uVar27 * 0xc);
        local_c48 = uVar27;
        goto LAB_00103124;
      }
    }
    else {
      memcpy(local_1854,&local_3c68,(ulong)uVar21 * 0xc);
      local_1858 = uVar21;
      if (0 < (int)uVar27) {
        memcpy(local_c44,&local_3068,(ulong)uVar27 * 0xc);
      }
      local_c48 = uVar27;
      uVar14 = 0;
      iVar17 = 0;
      puVar20 = local_1854;
      do {
        iVar17 = iVar17 + 1;
        puVar11 = (undefined8 *)(uVar14 + (long)param_5);
        uVar14 = (ulong)((int)uVar14 + param_3);
        *puVar11 = *puVar20;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar20 + 1);
        puVar20 = (undefined8 *)((long)puVar20 + 0xc);
      } while (iVar17 < (int)uVar21);
      *param_6 = uVar21;
      if (0 < (int)uVar27) {
LAB_00103124:
        uVar21 = *param_8;
        puVar12 = &local_c48;
        uVar18 = param_3 * uVar21;
        puVar3 = puVar12 + (long)(int)uVar27 * 3;
        do {
          uVar14 = (ulong)uVar18;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 3;
          uVar18 = uVar18 + param_3;
          *(undefined8 *)(uVar14 + (long)param_7) = *(undefined8 *)puVar1;
          *(uint *)((undefined8 *)(uVar14 + (long)param_7) + 1) = *puVar12;
        } while (puVar12 != puVar3);
        *param_8 = uVar21 + uVar27;
      }
    }
    local_c48 = uVar27;
    if (*param_6 < 3) {
      *param_6 = 0;
      cVar15 = '\x02';
      if (2 < *param_8) goto LAB_00102c90;
LAB_0010317c:
      *param_8 = 0;
      if (*param_6 != 0) goto LAB_00102c85;
    }
    else if (*param_8 < 3) goto LAB_0010317c;
    cVar15 = '\x03';
  }
  else {
    if (cVar15 != '\0' || cVar23 != '\0') {
      if (cVar23 == '\0') {
        cVar23 = cVar15;
        if (cVar15 != '\0') goto LAB_00102ebc;
      }
      else {
        if (cVar15 != '\0') {
          bVar28 = cVar15 == cVar23;
          goto LAB_00102eb4;
        }
LAB_00102ebc:
        cVar15 = '\x02';
        if (cVar23 == '\x01') goto LAB_00102c1f;
      }
LAB_00102eca:
      *param_7 = fVar31;
      pfVar24 = (float *)(uVar14 + (long)param_7);
      pfVar26 = (float *)(uVar25 + (long)param_7);
      param_7[1] = param_2[1];
      param_7[2] = param_2[2];
      *pfVar24 = *pfVar2;
      pfVar24[1] = pfVar2[1];
      pfVar24[2] = pfVar2[2];
      *pfVar26 = *pfVar22;
      pfVar26[1] = pfVar22[1];
      pfVar26[2] = pfVar22[2];
      *param_8 = 3;
      goto LAB_00102c90;
    }
LAB_00102c1f:
    *param_5 = fVar31;
    pfVar24 = (float *)(uVar14 + (long)param_5);
    pfVar26 = (float *)(uVar25 + (long)param_5);
    param_5[1] = param_2[1];
    param_5[2] = param_2[2];
    *pfVar24 = *pfVar2;
    pfVar24[1] = pfVar2[1];
    pfVar24[2] = pfVar2[2];
    *pfVar26 = *pfVar22;
    pfVar26[1] = pfVar22[1];
    pfVar26[2] = pfVar22[2];
    *param_6 = 3;
LAB_00102c85:
    cVar15 = '\x01';
  }
LAB_00102c90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::computeOBB(unsigned int, float const*, unsigned int, float*, float*) */

void FLOAT_MATH::computeOBB(uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  uint uVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_30;
  float local_28;
  float local_20 [2];
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar9 = CONCAT44(_UNK_0011166c,_LC29);
    local_30 = 0;
    local_28 = 0.0;
    fVar8 = _LC29;
  }
  else {
    uVar1 = 0;
    fVar7 = _LC20;
    fVar8 = _LC21;
    fVar10 = _LC20;
    fVar11 = _LC21;
    fVar12 = _LC21;
    fVar3 = _LC20;
    do {
      uVar1 = uVar1 + 1;
      fVar5 = *param_2 - param_5[0xc];
      fVar2 = param_2[1] - param_5[0xd];
      fVar4 = param_2[2] - param_5[0xe];
      param_2 = (float *)((long)param_2 + (ulong)param_3);
      fVar13 = param_5[1] * fVar2 + *param_5 * fVar5 + param_5[2] * fVar4;
      fVar6 = param_5[4] * fVar5 + param_5[5] * fVar2 + param_5[6] * fVar4;
      fVar14 = fVar13;
      if (fVar13 <= fVar3) {
        fVar14 = fVar3;
      }
      fVar3 = fVar4 * param_5[10] + fVar5 * param_5[8] + fVar2 * param_5[9];
      if (fVar8 <= fVar13) {
        fVar13 = fVar8;
      }
      fVar8 = fVar13;
      fVar13 = fVar6;
      if (fVar6 <= fVar10) {
        fVar13 = fVar10;
      }
      if (fVar12 <= fVar6) {
        fVar6 = fVar12;
      }
      fVar10 = fVar3;
      if (fVar3 <= fVar7) {
        fVar10 = fVar7;
      }
      fVar7 = fVar10;
      if (fVar11 <= fVar3) {
        fVar3 = fVar11;
      }
      fVar11 = fVar3;
      fVar10 = fVar13;
      fVar12 = fVar6;
      fVar3 = fVar14;
    } while (uVar1 != param_1);
    uVar9 = CONCAT44(fVar13 - fVar6,fVar14 - fVar8);
    local_30 = CONCAT44(_UNK_00111674 * (fVar13 - fVar6) + fVar6,_LC13 * (fVar14 - fVar8) + fVar8);
    local_28 = _LC13 * (fVar7 - fVar11) + fVar11;
    fVar8 = fVar7 - fVar11;
  }
  *(undefined8 *)param_4 = uVar9;
  param_4[2] = fVar8;
  fm_rotate(param_5,(float *)&local_30,local_20);
  *(ulong *)(param_5 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20) + local_20[1],
                (float)*(undefined8 *)(param_5 + 0xc) + local_20[0]);
  param_5[0xe] = param_5[0xe] + local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_computeBestFitABB(unsigned int, float const*, unsigned int, float*, float*) */

void FLOAT_MATH::fm_computeBestFitABB
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  uint uVar2;
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
  
  fVar1 = _LC13;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar9 = param_2[2];
  fVar6 = fVar9;
  fVar8 = fVar4;
  fVar7 = fVar5;
  if (param_1 != 0) {
    uVar2 = 0;
    fVar10 = fVar9;
    fVar11 = fVar5;
    fVar12 = fVar5;
    fVar3 = fVar4;
    do {
      fVar5 = *param_2;
      uVar2 = uVar2 + 1;
      fVar8 = fVar5;
      if (fVar5 <= fVar3) {
        fVar8 = fVar3;
      }
      if (fVar4 <= fVar5) {
        fVar5 = fVar4;
      }
      fVar4 = fVar5;
      fVar5 = param_2[1];
      fVar7 = fVar5;
      if (fVar5 <= fVar12) {
        fVar7 = fVar12;
      }
      if (fVar11 <= fVar5) {
        fVar5 = fVar11;
      }
      fVar11 = param_2[2];
      param_2 = (float *)((long)param_2 + (ulong)param_3);
      fVar6 = fVar11;
      if (fVar11 <= fVar10) {
        fVar6 = fVar10;
      }
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      fVar9 = fVar11;
      fVar10 = fVar6;
      fVar11 = fVar5;
      fVar12 = fVar7;
      fVar3 = fVar8;
    } while (param_1 != uVar2);
  }
  *(ulong *)param_4 = CONCAT44(fVar7 - fVar5,fVar8 - fVar4);
  param_4[2] = fVar6 - fVar9;
  *param_5 = (fVar8 - fVar4) * fVar1 + fVar4;
  param_5[1] = param_4[1] * fVar1 + fVar5;
  param_5[2] = fVar1 * param_4[2] + fVar9;
  return;
}



/* FLOAT_MATH::fm_planeToMatrix(float const*, float*) */

void FLOAT_MATH::fm_planeToMatrix(float *param_1,float *param_2)

{
  float *extraout_RDX;
  float *extraout_RDX_00;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  float local_38;
  long local_34;
  undefined4 local_2c;
  float local_28 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = _LC4;
  fm_rotationArc((float *)&local_50,param_1,local_28);
  fm_quatToMatrix(extraout_RDX,param_2);
  local_2c = 0;
  local_34 = (ulong)((uint)param_1[3] ^ _LC14) << 0x20;
  fm_transform(param_2,(float *)&local_34,extraout_RDX_00);
  *(undefined8 *)(param_2 + 0xc) = local_40;
  param_2[0xe] = local_38;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_planeToQuat(float const*, float*, float*) */

void FLOAT_MATH::fm_planeToQuat(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 local_68;
  undefined4 local_60;
  float local_58 [2];
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = 0.0;
  local_60 = 0;
  local_68 = _LC4;
  fm_rotationArc((float *)&local_68,param_1,param_2);
  fm_quatToMatrix(param_2,local_58);
  fVar1 = param_1[3];
  param_3[2] = local_20 + local_50 * fVar2 + local_40 * fVar1 + fVar2 * local_30;
  *(ulong *)param_3 =
       CONCAT44(local_58[1] * 0.0 + fVar1 * (float)((ulong)local_48 >> 0x20) +
                (float)((ulong)local_38 >> 0x20) * 0.0 + (float)((ulong)local_28 >> 0x20),
                local_58[0] * 0.0 + fVar1 * (float)local_48 + (float)local_38 * 0.0 +
                (float)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_eulerMatrix(float, float, float, float*) */

void FLOAT_MATH::fm_eulerMatrix(float param_1,float param_2,float param_3,float *param_4)

{
  long in_FS_OFFSET;
  float afStack_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_eulerToQuat(param_1,param_2,param_3,afStack_38);
  fm_quatToMatrix(afStack_38,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_createVertexIndex(double, bool) */

void FLOAT_MATH::fm_createVertexIndex(double param_1,bool param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  *puVar1 = &PTR_getIndex_00111448;
  puVar1[2] = param_1;
  puVar1[4] = &PTR_getPositionDouble_00111418;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(byte *)(puVar1 + 1) = param_2 * '\x02' + 1U & 3 | *(byte *)(puVar1 + 1) & 0xfc;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 (*) [16])(puVar1 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xb) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xd) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(float *)(puVar1 + 3) = (float)param_1;
  return;
}



/* FLOAT_MATH::fm_createVertexIndex(float, bool) */

void FLOAT_MATH::fm_createVertexIndex(float param_1,bool param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  *(undefined1 (*) [16])(puVar1 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xb) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xd) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *puVar1 = &PTR_getIndex_00111448;
  puVar1[4] = &PTR_getPositionDouble_00111418;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(byte *)(puVar1 + 1) = *(byte *)(puVar1 + 1) & 0xfc | param_2 * '\x02' & 3U;
  puVar1[2] = (double)param_1;
  *(float *)(puVar1 + 3) = param_1;
  return;
}



/* FLOAT_MATH::fm_releaseVertexIndex(FLOAT_MATH::fm_VertexIndex*) */

void FLOAT_MATH::fm_releaseVertexIndex(fm_VertexIndex *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  if (param_1 == (fm_VertexIndex *)0x0) {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x50) == MyVertexIndex::~MyVertexIndex) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined ***)param_1 = &PTR_getIndex_00111448;
    *(undefined ***)(param_1 + 0x20) = &PTR_getPositionDouble_00111418;
    if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x50)) {
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    }
    pvVar3 = *(void **)(param_1 + 0x60);
    if (pvVar3 != *(void **)(param_1 + 0x68)) {
      *(void **)(param_1 + 0x68) = pvVar3;
    }
    plVar2 = *(long **)(param_1 + 0x38);
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      do {
        plVar1 = (long *)*plVar2;
        operator_delete(plVar2,0x6010);
        plVar2 = plVar1;
      } while (plVar1 != (long *)0x0);
      pvVar3 = *(void **)(param_1 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3,*(long *)(param_1 + 0x70) - (long)pvVar3);
    }
    pvVar3 = *(void **)(param_1 + 0x48);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3,*(long *)(param_1 + 0x58) - (long)pvVar3);
    }
    operator_delete(param_1,0x78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001039e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x50))();
  return;
}



/* FLOAT_MATH::fm_computeBestFitAABB(unsigned int, float const*, unsigned int, float*, float*) */

float FLOAT_MATH::fm_computeBestFitAABB
                (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  fVar3 = *param_2;
  *param_5 = fVar3;
  fVar4 = param_2[1];
  param_5[1] = fVar4;
  fVar2 = param_2[2];
  param_5[2] = fVar2;
  if (1 < param_1) {
    uVar1 = 1;
    do {
      param_2 = (float *)((long)param_2 + (ulong)param_3);
      if (*param_2 < *param_4) {
        *param_4 = *param_2;
      }
      if (param_2[1] < param_4[1]) {
        param_4[1] = param_2[1];
      }
      if (param_2[2] < param_4[2]) {
        param_4[2] = param_2[2];
      }
      fVar3 = *param_2;
      if (*param_5 <= fVar3 && fVar3 != *param_5) {
        *param_5 = fVar3;
      }
      fVar3 = param_2[1];
      if (param_5[1] <= fVar3 && fVar3 != param_5[1]) {
        param_5[1] = fVar3;
      }
      fVar3 = param_2[2];
      if (param_5[2] <= fVar3 && fVar3 != param_5[2]) {
        param_5[2] = fVar3;
      }
      uVar1 = uVar1 + 1;
    } while (param_1 != uVar1);
    fVar3 = *param_5;
    fVar4 = param_5[1];
    fVar2 = param_5[2];
  }
  return SQRT((fVar2 - param_4[2]) * (fVar2 - param_4[2]) +
              (fVar3 - *param_4) * (fVar3 - *param_4) + (fVar4 - param_4[1]) * (fVar4 - param_4[1]))
  ;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_rayIntersectsTriangle(float const*, float const*, float const*, float const*,
   float const*, float&) */

bool FLOAT_MATH::fm_rayIntersectsTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
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
  double dVar18;
  
  fVar17 = param_3[1];
  fVar16 = param_3[2];
  fVar9 = *param_3;
  fVar14 = param_5[1] - fVar17;
  fVar13 = param_5[2] - fVar16;
  fVar1 = param_2[1];
  fVar12 = *param_5 - fVar9;
  fVar2 = param_2[2];
  fVar5 = *param_4 - fVar9;
  fVar15 = param_4[2] - fVar16;
  fVar6 = param_4[1] - fVar17;
  fVar11 = fVar13 * fVar1 - fVar14 * fVar2;
  fVar3 = *param_2;
  fVar7 = fVar12 * fVar2 - fVar13 * fVar3;
  fVar10 = fVar14 * fVar3 - fVar12 * fVar1;
  fVar8 = fVar6 * fVar7 + fVar5 * fVar11 + fVar15 * fVar10;
  dVar18 = (double)fVar8;
  if ((dVar18 <= __LC33) || (bVar4 = false, _LC34 <= dVar18)) {
    fVar8 = _LC3 / fVar8;
    fVar9 = *param_1 - fVar9;
    fVar17 = param_1[1] - fVar17;
    fVar16 = param_1[2] - fVar16;
    fVar7 = (fVar7 * fVar17 + fVar11 * fVar9 + fVar10 * fVar16) * fVar8;
    bVar4 = false;
    if ((0.0 <= fVar7) && (fVar7 <= _LC3)) {
      fVar10 = fVar15 * fVar17 - fVar6 * fVar16;
      fVar11 = fVar16 * fVar5 - fVar15 * fVar9;
      fVar17 = fVar9 * fVar6 - fVar5 * fVar17;
      fVar16 = (fVar3 * fVar10 + fVar1 * fVar11 + fVar2 * fVar17) * fVar8;
      bVar4 = false;
      if ((0.0 <= fVar16) && (fVar7 + fVar16 <= _LC3)) {
        fVar8 = (fVar12 * fVar10 + fVar14 * fVar11 + fVar13 * fVar17) * fVar8;
        *param_6 = fVar8;
        bVar4 = 0.0 < fVar8;
      }
    }
  }
  return bVar4;
}



/* FLOAT_MATH::fm_lineIntersectsTriangle(float const*, float const*, float const*, float const*,
   float const*, float*) */

undefined8
FLOAT_MATH::fm_lineIntersectsTriangle
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6
          )

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_24;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = param_2[2] - param_1[2];
  fVar7 = (float)*(undefined8 *)param_1;
  fVar4 = (float)*(undefined8 *)param_2 - fVar7;
  fVar5 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
          (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar6 = _LC3 / fVar2;
  local_20 = CONCAT44(fVar6 * fVar5,fVar6 * fVar4);
  local_18 = fVar3 * fVar6;
  uVar1 = fm_rayIntersectsTriangle(param_1,(float *)&local_20,param_3,param_4,param_5,&local_24);
  if ((char)uVar1 != '\0') {
    if (local_24 <= fVar2) {
      uVar1 = 0;
    }
    else {
      *param_6 = fVar6 * fVar4 * local_24 + fVar7;
      param_6[1] = fVar6 * fVar5 * local_24 + param_1[1];
      param_6[2] = fVar3 * fVar6 * local_24 + param_1[2];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_computeMeshVolume(float const*, unsigned int, unsigned int const*) */

ulong FLOAT_MATH::fm_computeMeshVolume(float *param_1,uint param_2,uint *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  float fVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  fVar6 = 0.0;
  puVar4 = param_3;
  do {
    puVar5 = puVar4 + 3;
    pfVar1 = param_1 + *puVar4 * 3;
    pfVar2 = param_1 + puVar4[2] * 3;
    pfVar3 = param_1 + puVar4[1] * 3;
    fVar6 = fVar6 + ((((*pfVar1 * pfVar3[1] * pfVar2[2] + *pfVar3 * pfVar2[1] * pfVar1[2] +
                       *pfVar2 * pfVar1[1] * pfVar3[2]) - *pfVar1 * pfVar2[1] * pfVar3[2]) -
                     *pfVar3 * pfVar1[1] * pfVar2[2]) - pfVar3[1] * *pfVar2 * pfVar1[2]);
    puVar4 = puVar5;
  } while (puVar5 != param_3 + (ulong)param_2 * 3);
  fVar6 = fVar6 * __LC35;
  if (0.0 <= fVar6) {
    return (ulong)(uint)fVar6;
  }
  return CONCAT44(_UNK_00111594,(uint)fVar6 ^ _LC14);
}



/* FLOAT_MATH::fm_getPoint(float const*, unsigned int, unsigned int) */

long FLOAT_MATH::fm_getPoint(float *param_1,uint param_2,uint param_3)

{
  return (long)param_1 + (ulong)(param_3 * param_2);
}



/* FLOAT_MATH::fm_insideTriangle(float, float, float, float, float, float, float, float) */

bool FLOAT_MATH::fm_insideTriangle
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  if ((0.0 <= (param_5 - param_3) * (param_8 - param_4) - (param_6 - param_4) * (param_7 - param_3))
     && (0.0 <= (param_1 - param_5) * (param_8 - param_6) -
                (param_2 - param_6) * (param_7 - param_5))) {
    return 0.0 <= (param_3 - param_1) * (param_8 - param_2) -
                  (param_4 - param_2) * (param_7 - param_1);
  }
  return false;
}



/* FLOAT_MATH::fm_areaPolygon2d(unsigned int, float const*, unsigned int) */

float FLOAT_MATH::fm_areaPolygon2d(uint param_1,float *param_2,uint param_3)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_1) {
    fVar5 = 0.0;
    uVar3 = 0;
    pfVar2 = (float *)((ulong)((param_1 - 1) * param_3) + (long)param_2);
    fVar7 = *pfVar2;
    uVar4 = 0;
    fVar6 = pfVar2[1];
    do {
      uVar3 = uVar3 + 1;
      fVar1 = ((float *)(uVar4 + (long)param_2))[1];
      fVar8 = fVar7 * fVar1;
      fVar7 = *(float *)(uVar4 + (long)param_2);
      fVar5 = fVar5 + (fVar8 - fVar6 * fVar7);
      uVar4 = (ulong)((int)uVar4 + param_3);
      fVar6 = fVar1;
    } while (param_1 != uVar3);
    return fVar5 * _LC13;
  }
  return 0.0;
}



/* FLOAT_MATH::fm_pointInsidePolygon2d(unsigned int, float const*, unsigned int, float const*,
   unsigned int, unsigned int) */

uint FLOAT_MATH::fm_pointInsidePolygon2d
               (uint param_1,float *param_2,uint param_3,float *param_4,uint param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  uVar9 = (ulong)param_5;
  uVar10 = (ulong)param_6;
  fVar1 = param_4[uVar10];
  if (param_1 != 0) {
    uVar5 = (param_1 - 1) * param_3;
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
    fVar11 = *(float *)((long)param_2 + uVar10 * 4 + (ulong)uVar5);
    fVar12 = *(float *)((long)param_2 + uVar9 * 4 + (ulong)uVar5);
    do {
      fVar2 = *(float *)((long)param_2 + uVar10 * 4 + (ulong)uVar8);
      fVar3 = *(float *)((long)param_2 + uVar9 * 4 + (ulong)uVar8);
      fVar4 = fVar11;
      if ((((fVar2 < fVar1) || (fVar4 = fVar2, fVar11 < fVar1)) && (fVar1 <= fVar4)) &&
         (((fVar1 - fVar2) / (fVar11 - fVar2)) * (fVar12 - fVar3) + fVar3 < param_4[uVar9])) {
        uVar6 = uVar6 ^ 1;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + param_3;
      fVar11 = fVar2;
      fVar12 = fVar3;
    } while (param_1 != uVar7);
    return uVar6;
  }
  return 0;
}



/* FLOAT_MATH::fm_consolidatePolygon(unsigned int, float const*, unsigned int, float*, float) */

int FLOAT_MATH::fm_consolidatePolygon
              (uint param_1,float *param_2,uint param_3,float *param_4,float param_5)

{
  float *pfVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  if (param_1 < 3) {
    return 0;
  }
  uVar7 = 0;
  pfVar4 = (float *)((long)param_2 + (ulong)param_3);
  pfVar1 = param_2;
  pfVar5 = (float *)((ulong)((param_1 - 1) * param_3) + (long)param_2);
  do {
    pfVar3 = pfVar1;
    uVar7 = uVar7 + 1;
    if (param_1 == uVar7) {
      cVar2 = fm_colinear(pfVar5,pfVar3,param_2,param_5);
      pfVar4 = param_2;
      if (cVar2 != '\0') {
        return iVar6;
      }
LAB_001041ac:
      iVar6 = iVar6 + 1;
      *param_4 = *pfVar3;
      param_4[1] = pfVar3[1];
      param_4[2] = pfVar3[2];
      param_4 = param_4 + 3;
      if (param_1 == uVar7) {
        return iVar6;
      }
    }
    else {
      cVar2 = fm_colinear(pfVar5,pfVar3,pfVar4,param_5);
      if (cVar2 == '\0') goto LAB_001041ac;
    }
    pfVar4 = pfVar4 + 3;
    pfVar1 = pfVar3 + 3;
    pfVar5 = pfVar3;
  } while( true );
}



/* FLOAT_MATH::splitRect(unsigned int, FLOAT_MATH::Rect3d<float> const&, FLOAT_MATH::Rect3d<float>&,
   FLOAT_MATH::Rect3d<float>&, float const*) */

void FLOAT_MATH::splitRect
               (uint param_1,Rect3d *param_2,Rect3d *param_3,Rect3d *param_4,float *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_1 == 1) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)param_3 = uVar1;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_3 + 8) = uVar4;
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *(ulong *)(param_3 + 0x10) = CONCAT44(uVar2,param_5[1]);
    *(undefined4 *)(param_3 + 0xc) = uVar5;
    fVar3 = param_5[1];
    *(undefined4 *)param_4 = uVar1;
    *(float *)(param_4 + 4) = fVar3;
    *(undefined4 *)(param_4 + 8) = uVar4;
  }
  else if (param_1 == 2) {
    uVar1 = *(undefined4 *)param_2;
    *(undefined4 *)param_3 = uVar1;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *(ulong *)(param_3 + 0x10) = CONCAT44(param_5[2],*(undefined4 *)(param_2 + 0x10));
    *(undefined4 *)(param_3 + 0xc) = uVar4;
    fVar3 = param_5[2];
    *(undefined4 *)param_4 = uVar1;
    *(undefined4 *)(param_4 + 4) = uVar2;
    *(float *)(param_4 + 8) = fVar3;
  }
  else {
    if (param_1 != 0) {
      return;
    }
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 4) = uVar1;
    uVar2 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_3 + 8) = uVar2;
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    *(float *)(param_3 + 0xc) = *param_5;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    fVar3 = *param_5;
    *(undefined4 *)(param_4 + 4) = uVar1;
    *(float *)param_4 = fVar3;
    *(undefined4 *)(param_4 + 8) = uVar2;
  }
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return;
}



/* FLOAT_MATH::fm_nearestPointInTriangle(float const*, float const*, float const*, float const*,
   float*) */

void FLOAT_MATH::fm_nearestPointInTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  return;
}



/* FLOAT_MATH::fm_areaTriangle(float const*, float const*, float const*) */

float FLOAT_MATH::fm_areaTriangle(float *param_1,float *param_2,float *param_3)

{
  return ((param_2[1] * *param_1 - *param_2 * param_1[1]) +
          (param_3[1] * *param_2 - *param_3 * param_2[1]) +
         (*param_3 * param_1[1] - param_3[1] * *param_1)) * _LC13;
}



/* FLOAT_MATH::fm_subtract(float const*, float const*, float*) */

void FLOAT_MATH::fm_subtract(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}



/* FLOAT_MATH::fm_multiplyTransform(float const*, float const*, float*) */

void FLOAT_MATH::fm_multiplyTransform(float *param_1,float *param_2,float *param_3)

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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[10];
  fVar16 = param_2[0xb];
  fVar17 = param_2[0xc];
  fVar18 = param_2[0xd];
  fVar19 = param_2[0xe];
  fVar20 = param_2[0xf];
  fVar21 = param_1[4];
  fVar22 = param_1[5];
  fVar23 = param_1[6];
  fVar24 = param_1[7];
  fVar25 = param_1[8];
  fVar26 = param_1[9];
  fVar27 = param_1[10];
  fVar28 = param_1[0xb];
  fVar29 = param_1[0xc];
  fVar30 = param_1[0xd];
  fVar31 = param_1[0xe];
  fVar32 = param_1[0xf];
  *param_3 = fVar4 * fVar17 + fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13;
  param_3[1] = fVar4 * fVar18 + fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14;
  param_3[2] = fVar4 * fVar19 + fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15;
  param_3[3] = fVar4 * fVar20 + fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16;
  param_3[4] = fVar24 * fVar17 + fVar21 * fVar5 + fVar22 * fVar9 + fVar23 * fVar13;
  param_3[5] = fVar24 * fVar18 + fVar21 * fVar6 + fVar22 * fVar10 + fVar23 * fVar14;
  param_3[6] = fVar24 * fVar19 + fVar21 * fVar7 + fVar22 * fVar11 + fVar23 * fVar15;
  param_3[7] = fVar24 * fVar20 + fVar21 * fVar8 + fVar22 * fVar12 + fVar23 * fVar16;
  param_3[8] = fVar28 * fVar17 + fVar25 * fVar5 + fVar26 * fVar9 + fVar27 * fVar13;
  param_3[9] = fVar28 * fVar18 + fVar25 * fVar6 + fVar26 * fVar10 + fVar27 * fVar14;
  param_3[10] = fVar28 * fVar19 + fVar25 * fVar7 + fVar26 * fVar11 + fVar27 * fVar15;
  param_3[0xb] = fVar28 * fVar20 + fVar25 * fVar8 + fVar26 * fVar12 + fVar27 * fVar16;
  param_3[0xc] = fVar32 * fVar17 + fVar29 * fVar5 + fVar30 * fVar9 + fVar31 * fVar13;
  param_3[0xd] = fVar32 * fVar18 + fVar29 * fVar6 + fVar30 * fVar10 + fVar31 * fVar14;
  param_3[0xe] = fVar32 * fVar19 + fVar29 * fVar7 + fVar30 * fVar11 + fVar31 * fVar15;
  param_3[0xf] = fVar32 * fVar20 + fVar29 * fVar8 + fVar30 * fVar12 + fVar31 * fVar16;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_composeTransform(float const*, float const*, float const*, float*) */

void FLOAT_MATH::fm_composeTransform(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [6];
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])param_4 = ZEXT416((uint)_LC3);
  uVar1 = _UNK_00111558;
  *(undefined8 *)(param_4 + 4) = _LC4;
  *(undefined8 *)(param_4 + 6) = uVar1;
  uVar1 = _UNK_00111568;
  *(undefined8 *)(param_4 + 8) = __LC9;
  *(undefined8 *)(param_4 + 10) = uVar1;
  uVar1 = _UNK_00111578;
  *(undefined8 *)(param_4 + 0xc) = __LC10;
  *(undefined8 *)(param_4 + 0xe) = uVar1;
  auVar4 = fm_quatToMatrix(param_2,param_4);
  pfVar3 = auVar4._8_8_;
  pfVar2 = auVar4._0_8_;
  if ((pfVar3 != (float *)0x0) &&
     (((*pfVar3 != _LC3 || (_LC3 != pfVar3[1])) || (_LC3 != pfVar3[2])))) {
    local_30 = pfVar3[2];
    local_58[5] = pfVar3[1];
    local_98 = *(undefined8 *)param_4;
    uStack_90 = *(undefined8 *)(param_4 + 2);
    local_88 = *(undefined8 *)(param_4 + 4);
    uStack_80 = *(undefined8 *)(param_4 + 6);
    local_58[1] = 0.0;
    local_58[2] = 0.0;
    local_78 = *(undefined8 *)(param_4 + 8);
    uStack_70 = *(undefined8 *)(param_4 + 10);
    local_68 = *(undefined8 *)(param_4 + 0xc);
    uStack_60 = *(undefined8 *)(param_4 + 0xe);
    local_20 = 0x3f80000000000000;
    local_58[3] = 0.0;
    local_58[4] = 0.0;
    local_40 = 0;
    local_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_58[0] = *pfVar3;
    pfVar2 = (float *)fm_multiplyTransform((float *)&local_98,local_58,param_4);
  }
  param_4[0xc] = *pfVar2;
  param_4[0xd] = pfVar2[1];
  param_4[0xe] = pfVar2[2];
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_matrixMultiply(float const*, float const*, float*) */

void FLOAT_MATH::fm_matrixMultiply(float *param_1,float *param_2,float *param_3)

{
  fm_multiplyTransform(param_1,param_2,param_3);
  return;
}



/* FLOAT_MATH::fm_multiply(float*, float) */

void FLOAT_MATH::fm_multiply(float *param_1,float param_2)

{
  param_1[2] = param_2 * param_1[2];
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * param_2,
                (float)*(undefined8 *)param_1 * param_2);
  return;
}



/* FLOAT_MATH::fm_add(float const*, float const*, float*) */

void FLOAT_MATH::fm_add(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}



/* FLOAT_MATH::fm_copy3(float const*, float*) */

void FLOAT_MATH::fm_copy3(float *param_1,float *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}



/* FLOAT_MATH::fm_copyUniqueVertices(unsigned int, float const*, float*, unsigned int, unsigned int
   const*, unsigned int*) */

uint FLOAT_MATH::fm_copyUniqueVertices
               (uint param_1,float *param_2,float *param_3,uint param_4,uint *param_5,uint *param_6)

{
  float *pfVar1;
  size_t __size;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *__ptr;
  void *__ptr_00;
  long lVar5;
  size_t __size_00;
  uint uVar6;
  
  __size_00 = (ulong)param_1 * 0xc;
  __ptr = malloc(__size_00);
  __size = (ulong)param_1 * 4;
  __memcpy_chk(__ptr,param_2,__size_00,__size_00);
  __ptr_00 = malloc(__size);
  __memset_chk(__ptr_00,0xff,__size,__size);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        uVar3 = param_5[lVar5];
        puVar2 = (uint *)((long)__ptr_00 + (ulong)uVar3 * 4);
        uVar4 = *puVar2;
        if (uVar4 != 0xffffffff) break;
        param_6[lVar5] = uVar6;
        lVar5 = lVar5 + 1;
        pfVar1 = (float *)((long)__ptr + (ulong)(uVar3 * 3) * 4);
        *puVar2 = uVar6;
        uVar6 = uVar6 + 1;
        *param_3 = *pfVar1;
        param_3[1] = pfVar1[1];
        param_3[2] = pfVar1[2];
        param_3 = param_3 + 3;
        if (param_4 * 3 <= (uint)lVar5) goto LAB_001047cc;
      }
      param_6[lVar5] = uVar4;
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < param_4 * 3);
  }
LAB_001047cc:
  free(__ptr);
  free(__ptr_00);
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_isMeshCoplanar(unsigned int, unsigned int const*, float const*, bool) */

undefined8 FLOAT_MATH::fm_isMeshCoplanar(uint param_1,uint *param_2,float *param_3,bool param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  long local_20;
  
  uVar2 = (ulong)param_4;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 1;
  if (param_1 != 0) {
    puVar3 = param_2 + 3;
    fVar6 = (float)fm_computePlane(param_3 + *param_2 * 3,param_3 + param_2[1] * 3,
                                   param_3 + param_2[2] * 3,&local_48);
    local_3c = fVar6;
    if (param_1 != 1) {
      puVar5 = param_2 + (ulong)(param_1 - 2) * 3 + 6;
      uVar8 = _LC11;
      fVar9 = _LC12;
      fVar10 = _LC37;
      do {
        puVar4 = puVar3 + 3;
        fVar7 = (float)fm_computePlane(param_3 + *puVar3 * 3,param_3 + puVar3[1] * 3,
                                       param_3 + puVar3[2] * 3,&local_38);
        if (fVar9 <= (float)((uint)(fVar6 - fVar7) & uVar8)) {
LAB_00104950:
          uVar1 = 0;
          goto LAB_00104828;
        }
        fVar7 = local_48 * local_38 + local_44 * local_34 + local_40 * local_30;
        if ((char)uVar2 != '\0') {
          fVar7 = (float)((uint)fVar7 & uVar8);
        }
        if ((fVar7 < __LC36) || (fVar10 < fVar7)) goto LAB_00104950;
        puVar3 = puVar4;
      } while (puVar4 != puVar5);
    }
    uVar1 = 1;
  }
LAB_00104828:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* FLOAT_MATH::fm_samePlane(float const*, float const*, float, float, bool) */

bool FLOAT_MATH::fm_samePlane
               (float *param_1,float *param_2,float param_3,float param_4,bool param_5)

{
  float fVar1;
  
  if ((float)((uint)(param_1[3] - param_2[3]) & _LC11) < param_4) {
    fVar1 = *param_2 * *param_1 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
    if (param_5) {
      fVar1 = (float)((uint)fVar1 & _LC11);
    }
    if (_LC3 - param_3 <= fVar1) {
      return fVar1 <= _LC3 + param_3;
    }
  }
  return false;
}



/* FLOAT_MATH::fm_initMinMax(float*, float*) */

void FLOAT_MATH::fm_initMinMax(float *param_1,float *param_2)

{
  undefined8 uVar1;
  
  uVar1 = _LC38;
  param_1[2] = 3.4028235e+38;
  *(undefined8 *)param_1 = uVar1;
  uVar1 = _LC40;
  param_2[2] = -3.4028235e+38;
  *(undefined8 *)param_2 = uVar1;
  return;
}



/* FLOAT_MATH::fm_inflateMinMax(float*, float*, float) */

void FLOAT_MATH::fm_inflateMinMax(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1[2] - param_2[2];
  fVar1 = SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
               (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) + fVar1 * fVar1) * _LC13 *
          param_3;
  param_1[2] = param_1[2] - fVar1;
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar1,
                (float)*(undefined8 *)param_1 - fVar1);
  param_2[2] = fVar1 + param_2[2];
  *(ulong *)param_2 =
       CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) + fVar1,
                (float)*(undefined8 *)param_2 + fVar1);
  return;
}



/* FLOAT_MATH::fm_createTesselate() */

void FLOAT_MATH::fm_createTesselate(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  *puVar1 = &PTR_tesselate_001114b0;
  puVar1[6] = 0;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  return;
}



/* FLOAT_MATH::fm_releaseTesselate(FLOAT_MATH::fm_Tesselate*) */

void FLOAT_MATH::fm_releaseTesselate(fm_Tesselate *param_1)

{
  void *pvVar1;
  
  if (param_1 == (fm_Tesselate *)0x0) {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x10) == Myfm_Tesselate::~Myfm_Tesselate) {
    *(undefined ***)param_1 = &PTR_tesselate_001114b0;
    pvVar1 = *(void **)(param_1 + 0x20);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(param_1 + 0x30) - (long)pvVar1);
    }
    operator_delete(param_1,0x40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00104b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))();
  return;
}



/* FLOAT_MATH::fm_intersectRayAABB(float const*, float const*, float const*, float const*, float*)
    */

undefined1
FLOAT_MATH::fm_intersectRayAABB
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  bVar5 = true;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = -1.0;
  local_20 = _LC43;
  lVar6 = 0;
  do {
    fVar2 = *(float *)((long)param_1 + lVar6);
    if (fVar2 <= *(float *)((long)param_3 + lVar6)) {
      fVar2 = *(float *)((long)param_2 + lVar6);
      if (fVar2 < *(float *)((long)param_3 + lVar6)) {
        fVar4 = *(float *)((long)param_4 + lVar6);
        *(float *)((long)param_5 + lVar6) = fVar2;
        if (fVar4 != 0.0) {
          *(float *)((long)&local_20 + lVar6) = (fVar2 - *(float *)((long)param_3 + lVar6)) / fVar4;
        }
        goto LAB_00104baa;
      }
    }
    else {
      iVar3 = *(int *)((long)param_4 + lVar6);
      *(float *)((long)param_5 + lVar6) = fVar2;
      if (iVar3 != 0) {
        *(float *)((long)&local_20 + lVar6) =
             (fVar2 - *(float *)((long)param_3 + lVar6)) / *(float *)((long)param_4 + lVar6);
      }
LAB_00104baa:
      bVar5 = false;
    }
    fVar2 = _LC44;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  if (bVar5) {
    *param_5 = *param_3;
    param_5[1] = param_3[1];
    param_5[2] = param_3[2];
  }
  else {
    uVar8 = (uint)((float)local_20 < local_20._4_4_);
    pfVar1 = (float *)((long)&local_20 + (ulong)((float)local_20 < local_20._4_4_) * 4);
    if (*pfVar1 <= local_18 && local_18 != *pfVar1) {
      lVar6 = 8;
      uVar8 = 2;
    }
    else {
      lVar6 = (ulong)((float)local_20 < local_20._4_4_) << 2;
    }
    fVar4 = *(float *)((long)&local_20 + lVar6);
    lVar6 = 0;
    uVar7 = 0;
    if ((int)fVar4 < 0) goto LAB_00104c51;
    do {
      if (uVar8 != (uint)lVar6) {
        fVar9 = param_4[lVar6] * fVar4 + param_3[lVar6];
        param_5[lVar6] = fVar9;
        if ((fVar9 < param_1[lVar6] - fVar2) || (param_2[lVar6] + fVar2 < fVar9)) goto LAB_00104c51;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
  }
  uVar7 = 1;
LAB_00104c51:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_intersectLineSegmentAABB(float const*, float const*, float const*, float const*,
   float*) */

bool FLOAT_MATH::fm_intersectLineSegmentAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) -
                      (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                      (float)*(undefined8 *)param_4 - (float)*(undefined8 *)param_3);
  local_28 = param_4[2] - param_3[2];
  pfVar4 = (float *)&local_30;
  pfVar3 = (float *)fm_normalize(pfVar4);
  if (_LC44 < extraout_XMM0_Da) {
    cVar2 = fm_intersectRayAABB(pfVar3,param_2,param_3,pfVar4,param_5);
    if (cVar2 != '\0') {
      bVar1 = (*param_3 - *param_5) * (*param_3 - *param_5) +
              (param_3[1] - param_5[1]) * (param_3[1] - param_5[1]) +
              (param_3[2] - param_5[2]) * (param_3[2] - param_5[2]) <=
              extraout_XMM0_Da * extraout_XMM0_Da;
      goto LAB_00104d48;
    }
  }
  bVar1 = false;
LAB_00104d48:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_OBBtoAABB(float const*, float const*, float const*, float*, float*) */

void FLOAT_MATH::fm_OBBtoAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  return;
}



/* FLOAT_MATH::computePos(unsigned int, float const*, unsigned int) */

long FLOAT_MATH::computePos(uint param_1,float *param_2,uint param_3)

{
  return (long)param_2 + (ulong)(param_1 * param_3);
}



/* FLOAT_MATH::computeNormal(unsigned int, float*, unsigned int, float const*) */

void FLOAT_MATH::computeNormal(uint param_1,float *param_2,uint param_3,float *param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)((long)param_2 + (ulong)(param_1 * param_3));
  *pfVar1 = *pfVar1 + *param_4;
  pfVar1[1] = pfVar1[1] + param_4[1];
  pfVar1[2] = pfVar1[2] + param_4[2];
  return;
}



/* FLOAT_MATH::fm_computeMeanNormals(unsigned int, float const*, unsigned int, float*, unsigned int,
   unsigned int, unsigned int const*) */

void FLOAT_MATH::fm_computeMeanNormals
               (uint param_1,float *param_2,uint param_3,float *param_4,uint param_5,uint param_6,
               uint *param_7)

{
  uint uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float local_50 [2];
  float local_48;
  long local_40;
  
  uVar4 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (param_6 == 0) goto LAB_00104f73;
LAB_00104e8a:
    uVar1 = 0;
    pfVar2 = local_50;
    uVar5 = (ulong)param_6;
    do {
      uVar1 = uVar1 + 1;
      iVar6 = (int)uVar4;
      puVar3 = (undefined8 *)((ulong)(*param_7 * param_5) + (long)param_4);
      uVar9 = (ulong)(param_7[1] * param_5);
      uVar7 = (ulong)(param_7[2] * param_5);
      fm_computePlane((float *)((ulong)(param_7[2] * iVar6) + (long)param_2),
                      (float *)((ulong)(param_7[1] * iVar6) + (long)param_2),
                      (float *)((ulong)(*param_7 * iVar6) + (long)param_2),pfVar2);
      puVar10 = (undefined8 *)(uVar9 + (long)param_4);
      puVar8 = (undefined8 *)(uVar7 + (long)param_4);
      fVar11 = local_50[0];
      fVar12 = local_50[1];
      *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + fVar12,(float)*puVar3 + fVar11);
      *(float *)(puVar3 + 1) = *(float *)(puVar3 + 1) + local_48;
      *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) + fVar12,(float)*puVar10 + fVar11);
      *(float *)(puVar10 + 1) = *(float *)(puVar10 + 1) + local_48;
      *(float *)(puVar8 + 1) = local_48 + *(float *)(puVar8 + 1);
      *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) + fVar12,(float)*puVar8 + fVar11);
      param_7 = param_7 + 3;
    } while (uVar1 < (uint)uVar5);
    if (param_1 == 0) goto LAB_00104f73;
  }
  else {
    uVar1 = 0;
    pfVar2 = param_4;
    do {
      uVar1 = uVar1 + 1;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      pfVar2[2] = 0.0;
      pfVar2 = (float *)((long)pfVar2 + (ulong)param_5);
    } while (param_1 != uVar1);
    if (param_6 != 0) goto LAB_00104e8a;
  }
  uVar4 = (ulong)param_5;
  do {
    pfVar2 = (float *)((long)param_4 + uVar4);
    uVar1 = fm_normalize(param_4);
    param_4 = pfVar2;
  } while (param_1 != uVar1);
LAB_00104f73:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_computeBestFitSphere(unsigned int, float const*, unsigned int, float*) */

ulong FLOAT_MATH::fm_computeBestFitSphere(uint param_1,float *param_2,uint param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = _LC13;
  fVar8 = (float)_LC48;
  fVar11 = _LC48._4_4_;
  fVar14 = (float)_LC48;
  fVar13 = _LC48._4_4_;
  if (param_1 == 0) {
    uVar5 = CONCAT44(_LC48._4_4_,(float)_LC48);
    fVar24 = _LC47;
    fVar19 = (float)_LC49;
    fVar25 = _LC49._4_4_;
    fVar10 = _LC47;
    uVar21 = uVar5;
    fVar9 = (float)_LC49;
    local_10 = _LC49._4_4_;
  }
  else {
    uVar6 = 0;
    local_c = _LC48._4_4_;
    local_10 = (float)_LC48;
    local_4 = (float)_LC48;
    local_8 = (float)_LC48;
    pfVar4 = param_2;
    fVar17 = (float)_LC48;
    fVar18 = _LC48._4_4_;
    fVar10 = (float)_LC48;
    fVar19 = _LC48._4_4_;
    fVar9 = _LC48._4_4_;
    fVar7 = _LC48._4_4_;
    fVar12 = _LC48._4_4_;
    fVar25 = (float)_LC48;
    fVar20 = (float)_LC48;
    fVar22 = _LC48._4_4_;
    do {
      fVar24 = *pfVar4;
      fVar23 = pfVar4[1];
      fVar1 = pfVar4[2];
      if (fVar24 < fVar17) {
        fVar17 = fVar24;
        local_8 = fVar1;
        local_4 = fVar23;
      }
      if (fVar18 < fVar24) {
        fVar18 = fVar24;
        fVar7 = fVar1;
        local_c = fVar23;
      }
      if (fVar23 < fVar25) {
        fVar14 = fVar1;
        fVar25 = fVar23;
        fVar20 = fVar24;
      }
      if (fVar12 < fVar23) {
        fVar19 = fVar24;
        fVar13 = fVar1;
        fVar12 = fVar23;
      }
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fVar10 = fVar24;
        local_10 = fVar23;
      }
      if (fVar11 < fVar1) {
        fVar11 = fVar1;
        fVar9 = fVar24;
        fVar22 = fVar23;
      }
      uVar6 = uVar6 + 1;
      pfVar4 = (float *)((long)pfVar4 + (ulong)param_3);
    } while (param_1 != uVar6);
    uVar5 = CONCAT44(fVar22,fVar10);
    fVar23 = (fVar7 - local_8) * (fVar7 - local_8) +
             (fVar18 - fVar17) * (fVar18 - fVar17) + (local_c - local_4) * (local_c - local_4);
    fVar24 = (fVar13 - fVar14) * (fVar13 - fVar14) +
             (fVar19 - fVar20) * (fVar19 - fVar20) + (fVar12 - fVar25) * (fVar12 - fVar25);
    fVar10 = (fVar9 - fVar10) * (fVar9 - fVar10) + (fVar22 - local_10) * (fVar22 - local_10) +
             (fVar11 - fVar8) * (fVar11 - fVar8);
    uVar21 = CONCAT44(fVar12,fVar20);
    if (fVar24 <= fVar23) {
      fVar24 = fVar23;
      fVar14 = local_8;
      fVar19 = fVar18;
      fVar25 = local_4;
      uVar21 = CONCAT44(local_c,fVar17);
      fVar13 = fVar7;
    }
  }
  if (fVar10 <= fVar24) {
    uVar5 = uVar21;
    fVar8 = fVar14;
    fVar11 = fVar13;
    fVar9 = fVar19;
    local_10 = fVar25;
  }
  fVar14 = (float)((ulong)uVar5 >> 0x20);
  fVar8 = (fVar8 + fVar11) * _LC13;
  fVar13 = ((float)uVar5 + fVar9) * _LC13;
  fVar24 = (fVar14 + local_10) * _UNK_00111674;
  uVar5 = CONCAT44(fVar24,fVar13);
  param_4[2] = fVar8;
  fVar9 = fVar9 - fVar13;
  *(undefined8 *)param_4 = uVar5;
  fVar13 = _LC3;
  fVar14 = fVar14 - fVar24;
  fVar11 = fVar9 * fVar9 + fVar14 * fVar14 + (fVar11 - fVar8) * (fVar11 - fVar8);
  uVar15 = CONCAT44(local_10,SQRT(fVar11));
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar15;
  if (param_1 != 0) {
    iVar3 = 0;
    while( true ) {
      uVar15 = auVar16._0_8_;
      uVar21 = *(undefined8 *)param_2;
      fVar25 = (float)((ulong)uVar21 >> 0x20);
      fVar19 = *param_2 - (float)uVar5;
      pfVar4 = param_2 + 2;
      fVar24 = fVar25 - fVar24;
      fVar14 = *pfVar4 - fVar8;
      fVar14 = fVar14 * fVar14 + fVar19 * fVar19 + fVar24 * fVar24;
      if (fVar11 < fVar14) {
        fVar14 = SQRT(fVar14);
        param_2 = (float *)((long)param_2 + (ulong)param_3);
        fVar24 = fVar13 / fVar14;
        auVar16._0_4_ = (auVar16._0_4_ + fVar14) * fVar2;
        uVar15 = auVar16._0_8_;
        fVar14 = fVar14 - auVar16._0_4_;
        fVar11 = auVar16._0_4_ * auVar16._0_4_;
        param_4[2] = (fVar8 * auVar16._0_4_ + *pfVar4 * fVar14) * fVar24;
        *(ulong *)param_4 =
             CONCAT44(((float)((ulong)uVar5 >> 0x20) * auVar16._0_4_ + fVar14 * fVar25) * fVar24,
                      ((float)uVar5 * auVar16._0_4_ + fVar14 * (float)uVar21) * fVar24);
      }
      if (param_1 == iVar3 + 1U) break;
      iVar3 = iVar3 + 1;
      uVar5 = *(undefined8 *)param_4;
      fVar8 = param_4[2];
      fVar24 = (float)((ulong)uVar5 >> 0x20);
    }
  }
  return uVar15;
}



/* FLOAT_MATH::CTriangulator::CTriangulator() */

void __thiscall FLOAT_MATH::CTriangulator::CTriangulator(CTriangulator *this)

{
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR__CTriangulator_001114d8;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  return;
}



/* FLOAT_MATH::CTriangulator::_area() */

double __thiscall FLOAT_MATH::CTriangulator::_area(CTriangulator *this)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pdVar2 = *(double **)(this + 0x58);
  iVar3 = (int)(*(long *)(this + 0x60) - (long)pdVar2 >> 3) * -0x55555555;
  uVar6 = iVar3 - 1;
  if (0 < iVar3) {
    dVar7 = 0.0;
    dVar9 = pdVar2[(long)(int)uVar6 * 3];
    pdVar4 = pdVar2;
    dVar8 = (pdVar2 + (long)(int)uVar6 * 3)[1];
    do {
      pdVar1 = pdVar4 + 1;
      pdVar5 = pdVar4 + 3;
      dVar10 = dVar9 * *pdVar1;
      dVar9 = *pdVar4;
      dVar7 = dVar7 + (dVar10 - dVar8 * dVar9);
      pdVar4 = pdVar5;
      dVar8 = *pdVar1;
    } while (pdVar5 != pdVar2 + (ulong)uVar6 * 3 + 3);
    return dVar7 * _LC50;
  }
  return 0.0;
}



/* FLOAT_MATH::CTriangulator::_snip(int, int, int, int, int*) */

ulong __thiscall
FLOAT_MATH::CTriangulator::_snip
          (CTriangulator *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined7 uVar14;
  double *pdVar13;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  
  lVar10 = *(long *)(this + 0x58);
  pdVar13 = (double *)(lVar10 + (long)param_5[param_1] * 0x18);
  dVar2 = *pdVar13;
  dVar3 = pdVar13[1];
  pdVar13 = (double *)(lVar10 + (long)param_5[param_2] * 0x18);
  dVar4 = *pdVar13;
  dVar5 = pdVar13[1];
  pdVar1 = (double *)(lVar10 + (long)param_5[param_3] * 0x18);
  dVar6 = pdVar1[1];
  dVar7 = *pdVar1;
  uVar17 = 0;
  if ((dVar6 - dVar3) * (dVar4 - dVar2) - (dVar7 - dVar2) * (dVar5 - dVar3) < *(double *)(this + 8))
  {
    return 0;
  }
  if (0 < param_4) {
    lVar12 = 0;
    do {
      iVar11 = (int)lVar12;
      uVar14 = (undefined7)((ulong)pdVar13 >> 8);
      uVar16 = (uint)CONCAT71((int7)(uVar17 >> 8),param_1 == iVar11) |
               (uint)CONCAT71(uVar14,param_2 == iVar11);
      pdVar13 = (double *)CONCAT71(uVar14,param_3 == iVar11);
      bVar15 = (byte)uVar16 | param_3 == iVar11;
      uVar17 = (ulong)CONCAT31((int3)(uVar16 >> 8),bVar15);
      if (bVar15 == 0) {
        pdVar13 = (double *)(lVar10 + (long)param_5[lVar12] * 0x18);
        dVar8 = pdVar13[1];
        dVar9 = *pdVar13;
        if (((0.0 <= (dVar7 - dVar4) * (dVar8 - dVar5) - (dVar6 - dVar5) * (dVar9 - dVar4)) &&
            (0.0 <= (dVar2 - dVar7) * (dVar8 - dVar6) - (dVar3 - dVar6) * (dVar9 - dVar7))) &&
           (0.0 <= (dVar8 - dVar3) * (dVar4 - dVar2) - (dVar9 - dVar2) * (dVar5 - dVar3))) {
          return uVar17;
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != param_4);
  }
  return 1;
}



/* FLOAT_MATH::CTriangulator::_insideTriangle(FLOAT_MATH::TVec const&, FLOAT_MATH::TVec const&,
   FLOAT_MATH::TVec const&, FLOAT_MATH::TVec const&) */

bool __thiscall
FLOAT_MATH::CTriangulator::_insideTriangle
          (CTriangulator *this,TVec *param_1,TVec *param_2,TVec *param_3,TVec *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *(double *)param_3;
  dVar2 = *(double *)(param_4 + 8);
  dVar3 = *(double *)param_2;
  dVar4 = *(double *)(param_2 + 8);
  dVar5 = *(double *)(param_3 + 8);
  dVar6 = *(double *)param_4;
  if (0.0 <= (dVar1 - dVar3) * (dVar2 - dVar4) - (dVar5 - dVar4) * (dVar6 - dVar3)) {
    dVar7 = *(double *)param_1;
    dVar8 = *(double *)(param_1 + 8);
    if (0.0 <= (dVar7 - dVar1) * (dVar2 - dVar5) - (dVar8 - dVar5) * (dVar6 - dVar1)) {
      return 0.0 <= (dVar3 - dVar7) * (dVar2 - dVar8) - (dVar4 - dVar8) * (dVar6 - dVar7);
    }
  }
  return false;
}



/* FLOAT_MATH::fm_createTriangulate() */

void FLOAT_MATH::fm_createTriangulate(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = &PTR_triangulate3d_00111518;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



/* FLOAT_MATH::fm_releaseTriangulate(FLOAT_MATH::fm_Triangulate*) */

void FLOAT_MATH::fm_releaseTriangulate(fm_Triangulate *param_1)

{
  if (param_1 == (fm_Triangulate *)0x0) {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x18) == Triangulate::~Triangulate) {
    free(*(void **)(param_1 + 8));
    free(*(void **)(param_1 + 0x10));
    operator_delete(param_1,0x18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00105759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))();
  return;
}



/* FLOAT_MATH::validDistance(float const*, float const*, float) */

bool FLOAT_MATH::validDistance(float *param_1,float *param_2,float param_3)

{
  return param_3 * param_3 <=
         (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
}



/* FLOAT_MATH::fm_isValidTriangle(float const*, float const*, float const*, float) */

undefined1
FLOAT_MATH::fm_isValidTriangle(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined1 uVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  float *pfVar12;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  undefined8 local_348 [97];
  long local_40;
  
  fVar13 = param_4 * param_4;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar16 = *param_2;
  fVar14 = param_2[1];
  fVar3 = param_1[2];
  fVar15 = param_2[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  if (fVar13 <= (fVar1 - fVar16) * (fVar1 - fVar16) + (fVar2 - fVar14) * (fVar2 - fVar14) +
                (fVar3 - fVar15) * (fVar3 - fVar15)) {
    fVar17 = *param_3;
    fVar19 = param_3[1];
    fVar18 = param_3[2];
    if (((fVar13 <= (fVar1 - fVar17) * (fVar1 - fVar17) + (fVar2 - fVar19) * (fVar2 - fVar19) +
                    (fVar3 - fVar18) * (fVar3 - fVar18)) &&
        (fVar13 <= (fVar16 - fVar17) * (fVar16 - fVar17) + (fVar14 - fVar19) * (fVar14 - fVar19) +
                   (fVar15 - fVar18) * (fVar15 - fVar18))) &&
       (uVar5 = fm_computeArea(param_1,param_2,param_3), param_4 < extraout_XMM0_Da)) {
      iVar11 = 0;
      iVar8 = 0;
      pfVar12 = &fStack_36c;
      puVar10 = local_348;
      fVar13 = _LC3 - param_4;
      pfVar4 = &local_378;
      pfVar9 = &fStack_360;
      local_378 = fVar1;
      fStack_374 = fVar2;
      fStack_370 = fVar3;
      fStack_36c = fVar16;
      local_368 = fVar14;
      fStack_364 = fVar15;
      fStack_360 = fVar17;
      fStack_35c = fVar19;
      local_358 = fVar18;
      do {
        pfVar7 = pfVar4;
        iVar8 = iVar8 + 1;
        if (iVar8 == 3) {
          cVar6 = fm_colinear(pfVar9,pfVar7,&local_378,fVar13);
          pfVar12 = &local_378;
          if (cVar6 != '\0') goto LAB_001059b0;
LAB_00105983:
          fVar1 = pfVar7[2];
          iVar11 = iVar11 + 1;
          *puVar10 = *(undefined8 *)pfVar7;
          *(float *)(puVar10 + 1) = fVar1;
          puVar10 = (undefined8 *)((long)puVar10 + 0xc);
          if (iVar8 == 3) goto LAB_001059b0;
        }
        else {
          cVar6 = fm_colinear(pfVar9,pfVar7,pfVar12,fVar13);
          if (cVar6 == '\0') goto LAB_00105983;
        }
        pfVar12 = pfVar12 + 3;
        pfVar4 = pfVar7 + 3;
        pfVar9 = pfVar7;
      } while( true );
    }
  }
LAB_00105879:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
LAB_001059b0:
  uVar5 = iVar11 == 3;
  goto LAB_00105879;
}



/* FLOAT_MATH::fm_multiplyQuat(float const*, float const*, float*) */

void FLOAT_MATH::fm_multiplyQuat(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *param_3 = (fVar4 * fVar5 + fVar8 * fVar1 + fVar2 * fVar7) - fVar6 * fVar3;
  param_3[1] = (fVar4 * fVar6 + fVar8 * fVar2 + fVar3 * fVar5) - fVar7 * fVar1;
  param_3[2] = (fVar4 * fVar7 + fVar8 * fVar3 + fVar1 * fVar6) - fVar5 * fVar2;
  param_3[3] = ((fVar4 * fVar8 - fVar5 * fVar1) - fVar2 * fVar6) - fVar7 * fVar3;
  return;
}



/* FLOAT_MATH::fm_computeCentroid(unsigned int, float const*, float*) */

undefined8 FLOAT_MATH::fm_computeCentroid(uint param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = 0;
  if (param_1 != 0) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    fVar4 = 0.0;
    param_3[2] = 0.0;
    fVar5 = 0.0;
    pfVar2 = param_2;
    fVar6 = fVar5;
    do {
      fVar6 = fVar6 + *pfVar2;
      pfVar3 = pfVar2 + 3;
      *param_3 = fVar6;
      fVar5 = fVar5 + pfVar2[1];
      param_3[1] = fVar5;
      fVar4 = fVar4 + pfVar2[2];
      param_3[2] = fVar4;
      pfVar2 = pfVar3;
    } while (param_2 + (ulong)param_1 * 3 != pfVar3);
    uVar1 = 1;
    fVar7 = _LC3 / (float)param_1;
    *param_3 = fVar6 * fVar7;
    param_3[1] = fVar5 * fVar7;
    param_3[2] = fVar4 * fVar7;
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_computeCentroid(unsigned int, float const*, unsigned int, unsigned int const*,
   float*) */

undefined8
FLOAT_MATH::fm_computeCentroid
          (uint param_1,float *param_2,uint param_3,uint *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar5 = 0;
  if (param_1 != 0) {
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    if (param_3 == 0) {
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar18 = 0.0;
      uVar6 = (ulong)(param_3 * 3);
      fVar19 = 0.0;
      fVar20 = 0.0;
      uVar4 = 0;
      fVar17 = 0.0;
      fVar12 = _LC22;
      uVar13 = _UNK_001115b4;
      uVar14 = _UNK_001115b8;
      uVar15 = _UNK_001115bc;
      fVar16 = _LC22;
      do {
        pfVar1 = param_2 + param_4[uVar4] * 3;
        pfVar2 = param_2 + param_4[uVar4 + 1] * 3;
        pfVar3 = param_2 + param_4[uVar4 + 2] * 3;
        auVar8._0_4_ = (float)*(undefined8 *)pfVar2 + (float)*(undefined8 *)pfVar1 +
                       (float)*(undefined8 *)pfVar3;
        auVar8._4_4_ = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) +
                       (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                       (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
        auVar8._8_8_ = 0;
        auVar9._4_4_ = uVar13;
        auVar9._0_4_ = fVar12;
        auVar9._8_4_ = uVar14;
        auVar9._12_4_ = uVar15;
        auVar9 = divps(auVar8,auVar9);
        fVar11 = (pfVar1[2] + pfVar2[2] + pfVar3[2]) / fVar16;
        fVar7 = auVar9._0_4_;
        fVar10 = auVar9._4_4_;
        uVar4 = fm_computeArea(pfVar1,pfVar2,pfVar3);
        fVar18 = fVar18 + extraout_XMM0_Da;
        fVar17 = fVar17 + fVar11 * extraout_XMM0_Da;
        fVar19 = fVar19 + extraout_XMM0_Da * fVar7;
        fVar20 = fVar20 + extraout_XMM0_Da * fVar10;
      } while (uVar4 != (uint)uVar6);
    }
    uVar5 = 1;
    fVar18 = _LC3 / fVar18;
    param_5[2] = fVar18 * fVar17;
    *(ulong *)param_5 = CONCAT44(fVar18 * fVar20,fVar18 * fVar19);
  }
  return uVar5;
}



/* FLOAT_MATH::fm_transformAABB(float const*, float const*, float const*, float*, float*) */

void FLOAT_MATH::fm_transformAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  pfVar6 = &local_78;
  local_78 = *param_1;
  fStack_70 = param_1[2];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fStack_74 = param_1[1];
  fStack_6c = *param_2;
  fStack_5c = param_2[1];
  local_28 = param_2[2];
  local_38 = CONCAT44(local_28,fStack_74);
  uStack_30 = *(undefined8 *)param_2;
  local_68 = fStack_74;
  fStack_64 = fStack_70;
  fStack_60 = fStack_6c;
  local_58 = CONCAT44(local_78,fStack_70);
  uStack_50 = CONCAT44(fStack_70,fStack_5c);
  fStack_24 = local_78;
  fStack_20 = fStack_5c;
  fStack_1c = local_28;
  local_48 = local_78;
  fStack_44 = fStack_74;
  fStack_40 = local_28;
  fStack_3c = fStack_6c;
  pfVar5 = &local_78;
  if (param_3 != (float *)0x0) {
    iVar7 = 0;
    while( true ) {
      fVar1 = *pfVar6;
      fVar8 = (float)*(undefined8 *)(pfVar6 + 1);
      fVar9 = (float)((ulong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
      fVar2 = *param_3;
      fVar3 = param_3[4];
      fVar4 = param_3[8];
      *(ulong *)(pfVar6 + 1) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 5) >> 0x20) * fVar8 +
                    (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20) * fVar1 +
                    (float)((ulong)*(undefined8 *)(param_3 + 9) >> 0x20) * fVar9 +
                    (float)((ulong)*(undefined8 *)(param_3 + 0xd) >> 0x20),
                    (float)*(undefined8 *)(param_3 + 5) * fVar8 +
                    (float)*(undefined8 *)(param_3 + 1) * fVar1 +
                    (float)*(undefined8 *)(param_3 + 9) * fVar9 +
                    (float)*(undefined8 *)(param_3 + 0xd));
      *pfVar6 = fVar1 * fVar2 + fVar3 * fVar8 + fVar9 * fVar4 + param_3[0xc];
      pfVar5 = pfVar6;
      if (iVar7 == 0) break;
      do {
        fVar1 = *pfVar6;
        if (fVar1 < *param_4) {
          *param_4 = fVar1;
        }
        fVar2 = pfVar6[1];
        if (fVar2 < param_4[1]) {
          param_4[1] = fVar2;
        }
        fVar3 = pfVar6[2];
        if (fVar3 < param_4[2]) {
          param_4[2] = fVar3;
        }
        if (*param_5 <= fVar1 && fVar1 != *param_5) {
          *param_5 = fVar1;
        }
        if (param_5[1] <= fVar2 && fVar2 != param_5[1]) {
          param_5[1] = fVar2;
        }
        if (param_5[2] <= fVar3 && fVar3 != param_5[2]) {
          param_5[2] = fVar3;
        }
        iVar7 = iVar7 + 1;
        pfVar5 = pfVar6;
        if (iVar7 == 8) {
          if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
LAB_00105ce9:
        pfVar6 = pfVar5 + 3;
      } while (param_3 == (float *)0x0);
    }
  }
  iVar7 = 1;
  *param_5 = local_78;
  *param_4 = local_78;
  param_5[1] = fStack_74;
  param_4[1] = fStack_74;
  param_5[2] = fStack_70;
  param_4[2] = fStack_70;
  goto LAB_00105ce9;
}



/* FLOAT_MATH::fm_normalizeQuat(float*) */

void FLOAT_MATH::fm_normalizeQuat(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_1 * *param_1;
  fVar1 = param_1[1] * param_1[1];
  fVar4 = param_1[2] * param_1[2];
  fVar3 = param_1[3] * param_1[3];
  fVar1 = _LC3 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  param_1[3] = fVar1 * param_1[3];
  return;
}



/* FLOAT_MATH::fm_inverseRT(double const*, double const*, double*) */

void FLOAT_MATH::fm_inverseRT(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_2 - param_1[0xc];
  dVar3 = param_2[1] - param_1[0xd];
  dVar2 = param_2[2] - param_1[0xe];
  *param_3 = *param_1 * dVar1 + param_1[1] * dVar3 + param_1[2] * dVar2;
  param_3[1] = param_1[4] * dVar1 + param_1[5] * dVar3 + param_1[6] * dVar2;
  param_3[2] = dVar1 * param_1[8] + dVar3 * param_1[9] + dVar2 * param_1[10];
  return;
}



/* FLOAT_MATH::fm_getDeterminant(double const*) */

double FLOAT_MATH::fm_getDeterminant(double *param_1)

{
  return (param_1[5] * param_1[10] - param_1[6] * param_1[9]) * *param_1 +
         (param_1[6] * param_1[8] - param_1[10] * param_1[4]) * param_1[1] +
         (param_1[4] * param_1[9] - param_1[5] * param_1[8]) * param_1[2];
}



/* FLOAT_MATH::fm_squared(double) */

double FLOAT_MATH::fm_squared(double param_1)

{
  return param_1 * param_1;
}



/* FLOAT_MATH::fm_getSubMatrix(int, int, double*, double const*) */

void FLOAT_MATH::fm_getSubMatrix(int param_1,int param_2,double *param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    if (param_2 != iVar5) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        if (param_1 != iVar2) {
          iVar1 = iVar3 * 4 + iVar4;
          iVar4 = iVar4 + 1;
          param_3[iVar1] = param_4[(uint)(iVar2 + iVar5 * 4)];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      iVar3 = iVar3 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_inverseTransform(double const*, double*) */

void FLOAT_MATH::fm_inverseTransform(double *param_1,double *param_2)

{
  uint uVar1;
  int extraout_EDX;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  double dVar4;
  double extraout_XMM0_Qa;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  long local_30;
  
  iVar3 = 0;
  uVar6 = 0;
  uVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = (double)fm_getDeterminant(param_1);
  uVar9 = 0;
  dVar4 = _LC54 / dVar4;
  dVar5 = _LC54;
  uVar10 = __LC55;
  dVar11 = _LC54;
  dVar8 = _LC56;
  do {
    lVar2 = 0;
    do {
      local_a8 = 0;
      local_88 = 0;
      local_b8 = dVar8;
      uStack_b0 = uVar9;
      local_98 = uVar10;
      dStack_90 = dVar11;
      local_78 = uVar6;
      uStack_70 = uVar7;
      local_68 = dVar5;
      fm_getSubMatrix(iVar3,(int)lVar2,&local_b8,param_1);
      uVar1 = fm_getDeterminant(&local_b8);
      param_2[lVar2] = (double)(int)(extraout_EDX + (uVar1 & 1) * -2) * extraout_XMM0_Qa * dVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 4;
  } while (iVar3 != 4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_identity(double*) */

void FLOAT_MATH::fm_identity(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = _LC56;
  dVar2 = _LC54;
  dVar1 = __LC55;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *param_1 = dVar3;
  param_1[1] = 0.0;
  param_1[4] = dVar1;
  param_1[5] = dVar2;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  param_1[10] = dVar3;
  param_1[0xb] = 0.0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  param_1[0xe] = dVar1;
  param_1[0xf] = dVar2;
  return;
}



/* FLOAT_MATH::fm_quatToEuler(double const*, double&, double&, double&) */

void FLOAT_MATH::fm_quatToEuler(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double __x;
  double dVar4;
  double dVar5;
  double __y;
  double dVar6;
  double __y_00;
  double dVar7;
  
  dVar3 = *param_1;
  dVar2 = param_1[1];
  dVar1 = param_1[2];
  dVar6 = param_1[3] + param_1[3];
  dVar5 = dVar3 + dVar3;
  __y_00 = dVar6 * dVar2 - dVar5 * dVar1;
  dVar4 = _LC54 - __y_00 * __y_00;
  if (_LC59 < (double)((ulong)dVar4 & _LC58)) {
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    if (_LC59 < (double)(_LC58 & (ulong)dVar4)) {
      dVar7 = (dVar2 + dVar2) * dVar2;
      dVar4 = _LC54 / dVar4;
      __y = (dVar5 * dVar2 + dVar6 * dVar1) * dVar4;
      __x = ((_LC54 - dVar7) - (dVar1 + dVar1) * dVar1) * dVar4;
      dVar2 = (dVar6 * dVar3 + dVar1 * (dVar2 + dVar2)) * dVar4;
      dVar3 = ((_LC54 - dVar3 * dVar5) - dVar7) * dVar4;
      goto LAB_001061f8;
    }
  }
  else {
    dVar4 = 0.0;
  }
  __y = 0.0;
  dVar2 = dVar6 * dVar3 - (dVar2 + dVar2) * dVar1;
  dVar3 = (_LC54 - dVar3 * dVar5) - (dVar1 + dVar1) * dVar1;
  __x = _LC54;
LAB_001061f8:
  dVar3 = atan2(dVar2,dVar3);
  *param_2 = dVar3;
  dVar3 = atan2(__y_00,dVar4);
  *param_3 = dVar3;
  dVar3 = atan2(__y,__x);
  *param_4 = dVar3;
  return;
}



/* FLOAT_MATH::fm_getAABB(unsigned int, double const*, unsigned int, double*, double*) */

void FLOAT_MATH::fm_getAABB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = 1;
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  *param_5 = *param_2;
  param_5[1] = param_2[1];
  param_5[2] = param_2[2];
  if (1 < param_1) {
    do {
      param_2 = (double *)((long)param_2 + (ulong)param_3);
      if (*param_2 < *param_4) {
        *param_4 = *param_2;
      }
      if (param_2[1] < param_4[1]) {
        param_4[1] = param_2[1];
      }
      if (param_2[2] < param_4[2]) {
        param_4[2] = param_2[2];
      }
      dVar1 = *param_2;
      if (*param_5 <= dVar1 && dVar1 != *param_5) {
        *param_5 = dVar1;
      }
      dVar1 = param_2[1];
      if (param_5[1] <= dVar1 && dVar1 != param_5[1]) {
        param_5[1] = dVar1;
      }
      dVar1 = param_2[2];
      if (param_5[2] <= dVar1 && dVar1 != param_5[2]) {
        param_5[2] = dVar1;
      }
      uVar2 = uVar2 + 1;
    } while (param_1 != uVar2);
  }
  return;
}



/* FLOAT_MATH::fm_eulerToQuat(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToQuat(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_28;
  double local_20;
  
  sincos(param_1 * _LC50,&local_20,&local_28);
  dVar2 = local_20;
  dVar1 = local_28;
  sincos(_LC50 * param_2,&local_20,&local_28);
  dVar3 = local_20;
  dVar4 = local_28;
  sincos(_LC50 * param_3,&local_20,&local_28);
  dVar6 = dVar4 * local_28;
  dVar5 = dVar3 * local_20;
  local_28 = local_28 * dVar3;
  dVar4 = dVar4 * local_20;
  *param_4 = dVar2 * dVar6 - dVar1 * dVar5;
  param_4[1] = dVar1 * local_28 + dVar2 * dVar4;
  param_4[2] = dVar4 * dVar1 - local_28 * dVar2;
  param_4[3] = dVar1 * dVar6 + dVar2 * dVar5;
  return;
}



/* FLOAT_MATH::fm_eulerToQuat(double const*, double*) */

void FLOAT_MATH::fm_eulerToQuat(double *param_1,double *param_2)

{
  fm_eulerToQuat(*param_1,param_1[1],param_1[2],param_2);
  return;
}



/* FLOAT_MATH::fm_quatToMatrix(double const*, double*) */

void FLOAT_MATH::fm_quatToMatrix(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar5 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  param_2[0xe] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xb] = 0.0;
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  dVar8 = dVar5 * dVar1 - dVar2 * dVar3;
  dVar6 = dVar5 * dVar1 + dVar2 * dVar3;
  param_2[4] = dVar8 + dVar8;
  dVar8 = dVar5 * dVar2 - dVar1 * dVar3;
  dVar9 = dVar5 * dVar2 + dVar1 * dVar3;
  param_2[2] = dVar8 + dVar8;
  param_2[8] = dVar9 + dVar9;
  dVar8 = _LC54;
  dVar10 = dVar1 * dVar1 + dVar2 * dVar2;
  dVar4 = dVar2 * dVar2 + dVar5 * dVar5;
  dVar7 = dVar5 * dVar5 + dVar1 * dVar1;
  param_2[0xf] = _LC54;
  dVar9 = dVar1 * dVar2 + dVar5 * dVar3;
  *param_2 = dVar8 - (dVar10 + dVar10);
  param_2[1] = dVar6 + dVar6;
  dVar5 = dVar1 * dVar2 - dVar5 * dVar3;
  param_2[5] = dVar8 - (dVar4 + dVar4);
  param_2[6] = dVar9 + dVar9;
  param_2[9] = dVar5 + dVar5;
  param_2[10] = dVar8 - (dVar7 + dVar7);
  return;
}



/* FLOAT_MATH::fm_eulerToMatrix(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToMatrix(double param_1,double param_2,double param_3,double *param_4)

{
  long in_FS_OFFSET;
  double adStack_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_eulerToQuat(param_1,param_2,param_3,adStack_48);
  fm_quatToMatrix(adStack_48,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_quatRotate(double const*, double const*, double*) */

void FLOAT_MATH::fm_quatRotate(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = param_1[3];
  dVar2 = param_1[1];
  dVar8 = *param_2;
  dVar3 = param_2[2];
  dVar4 = *param_1;
  dVar5 = param_2[1];
  dVar6 = param_1[2];
  dVar10 = (dVar1 * dVar8 + dVar2 * dVar3) - dVar5 * dVar6;
  dVar9 = (dVar1 * dVar5 + dVar8 * dVar6) - dVar3 * dVar4;
  dVar7 = (dVar1 * dVar3 + dVar5 * dVar4) - dVar8 * dVar2;
  dVar8 = (dVar8 * (double)((ulong)dVar4 ^ _LC95) - dVar5 * dVar2) - dVar3 * dVar6;
  *param_3 = (((double)((ulong)dVar4 ^ _LC95) * dVar8 + dVar1 * dVar10) - dVar6 * dVar9) +
             dVar2 * dVar7;
  param_3[1] = ((param_1[3] * dVar9 - param_1[1] * dVar8) - *param_1 * dVar7) + param_1[2] * dVar10;
  param_3[2] = ((dVar7 * param_1[3] - dVar8 * param_1[2]) - dVar10 * param_1[1]) + dVar9 * *param_1;
  return;
}



/* FLOAT_MATH::fm_getTranslation(double const*, double*) */

void FLOAT_MATH::fm_getTranslation(double *param_1,double *param_2)

{
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  return;
}



/* FLOAT_MATH::fm_matrixToQuat(double const*, double*) */

void FLOAT_MATH::fm_matrixToQuat(double *param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 local_78;
  undefined4 local_70;
  double local_68 [5];
  long local_40;
  
  dVar17 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar15 = param_1[10];
  dVar16 = dVar17 + param_1[5] + dVar15;
  if (0.0 < dVar16) {
    dVar17 = SQRT(dVar16 + _LC54);
    dVar15 = _LC50 / dVar17;
    param_2[3] = dVar17 * _LC50;
    *param_2 = (param_1[6] - param_1[9]) * dVar15;
    param_2[1] = (param_1[8] - param_1[2]) * dVar15;
    param_2[2] = (param_1[1] - param_1[4]) * dVar15;
  }
  else {
    local_70 = 0;
    local_78 = _LC15;
    bVar3 = dVar17 < param_1[5];
    if (param_1[(uint)((long)((ulong)bVar3 << 0x3f) >> 0x3f) & 5] < dVar15) {
      lVar12 = 0x30;
      lVar14 = 0x48;
      lVar6 = 0x10;
      lVar7 = 0x40;
      lVar8 = 0x20;
      lVar9 = 8;
      lVar5 = 0;
      lVar10 = 0x28;
      lVar11 = 1;
      uVar13 = 2;
    }
    else {
      uVar13 = (ulong)bVar3;
      iVar1 = *(int *)((long)&local_78 + uVar13 * 4);
      uVar4 = (uint)bVar3;
      dVar17 = param_1[iVar1 * 5];
      lVar5 = (long)iVar1;
      iVar2 = *(int *)((long)&local_78 + lVar5 * 4);
      lVar11 = (long)iVar2;
      lVar10 = (long)(iVar2 * 5) << 3;
      lVar9 = (long)(iVar2 + iVar1 * 4) << 3;
      lVar8 = (long)(iVar1 + iVar2 * 4) << 3;
      lVar7 = (long)(int)(iVar1 + uVar4 * 4) << 3;
      lVar6 = (long)(int)(iVar1 * 4 + uVar4) << 3;
      lVar14 = (long)(int)(uVar4 * 4 + iVar2) << 3;
      lVar12 = (long)(int)(uVar4 + iVar2 * 4) << 3;
      dVar15 = param_1[(uint)((long)((ulong)bVar3 << 0x3f) >> 0x3f) & 5];
    }
    dVar15 = (dVar15 - (dVar17 + *(double *)((long)param_1 + lVar10))) + _LC54;
    if (dVar15 < 0.0) {
      dVar15 = sqrt(dVar15);
    }
    else {
      dVar15 = SQRT(dVar15);
    }
    local_68[uVar13] = dVar15 * _LC50;
    if (dVar15 != 0.0) {
      dVar15 = _LC50 / dVar15;
    }
    local_68[3] = (*(double *)((long)param_1 + lVar9) - *(double *)((long)param_1 + lVar8)) * dVar15
    ;
    local_68[lVar5] =
         (*(double *)((long)param_1 + lVar7) + *(double *)((long)param_1 + lVar6)) * dVar15;
    local_68[lVar11] =
         (*(double *)((long)param_1 + lVar14) + *(double *)((long)param_1 + lVar12)) * dVar15;
    *param_2 = local_68[0];
    param_2[1] = local_68[1];
    param_2[2] = local_68[2];
    param_2[3] = local_68[3];
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_decomposeTransform(double const*, double*, double*, double*) */

void FLOAT_MATH::fm_decomposeTransform
               (double *param_1,double *param_2,double *param_3,double *param_4)

{
  long in_FS_OFFSET;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  dStack_90 = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
  *param_4 = dStack_90;
  dStack_70 = SQRT(param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6]);
  param_4[1] = dStack_70;
  dStack_50 = SQRT(param_1[10] * param_1[10] + param_1[8] * param_1[8] + param_1[9] * param_1[9]);
  param_4[2] = dStack_50;
  dStack_80 = param_1[3];
  dStack_40 = param_1[0xb];
  dStack_60 = param_1[7];
  local_38 = param_1[0xc];
  dStack_30 = param_1[0xd];
  local_28 = param_1[0xe];
  dStack_20 = param_1[0xf];
  dStack_90 = _LC54 / dStack_90;
  dStack_70 = _LC54 / dStack_70;
  dStack_50 = _LC54 / dStack_50;
  local_88 = dStack_90 * param_1[2];
  local_98 = dStack_90 * *param_1;
  dStack_90 = dStack_90 * param_1[1];
  local_68 = dStack_70 * param_1[6];
  local_78 = dStack_70 * param_1[4];
  dStack_70 = dStack_70 * param_1[5];
  local_48 = dStack_50 * param_1[10];
  local_58 = dStack_50 * param_1[8];
  dStack_50 = dStack_50 * param_1[9];
  fm_matrixToQuat(&local_98,param_3);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_sphereVolume(double) */

double FLOAT_MATH::fm_sphereVolume(double param_1)

{
  return _LC24 * param_1 * param_1 * param_1;
}



/* FLOAT_MATH::fm_cylinderVolume(double, double) */

double FLOAT_MATH::fm_cylinderVolume(double param_1,double param_2)

{
  return _LC61 * param_1 * param_1 * param_2;
}



/* FLOAT_MATH::fm_capsuleVolume(double, double) */

double FLOAT_MATH::fm_capsuleVolume(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_2 - (param_1 + param_1);
  dVar1 = _LC24 * param_1 * param_1 * param_1;
  if (0.0 < dVar2) {
    dVar1 = dVar1 + dVar2 * param_1 * _LC61 * param_1;
  }
  return dVar1;
}



/* FLOAT_MATH::fm_transform(double const*, double const*, double*) */

void FLOAT_MATH::fm_transform(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = *param_2;
  if (param_1 != (double *)0x0) {
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = param_1[4];
    dVar5 = param_1[5];
    dVar6 = *param_1;
    dVar7 = param_1[1];
    dVar8 = param_1[8];
    dVar9 = param_1[9];
    dVar10 = param_1[0xc];
    dVar11 = param_1[0xd];
    param_3[2] = param_1[2] * dVar1 + param_1[6] * dVar2 + param_1[10] * dVar3 + param_1[0xe];
    *param_3 = dVar2 * dVar4 + dVar1 * dVar6 + dVar3 * dVar8 + dVar10;
    param_3[1] = dVar2 * dVar5 + dVar1 * dVar7 + dVar3 * dVar9 + dVar11;
    return;
  }
  *param_3 = dVar1;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}



/* FLOAT_MATH::fm_rotate(double const*, double const*, double*) */

void FLOAT_MATH::fm_rotate(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = *param_2;
  if (param_1 != (double *)0x0) {
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = param_1[4];
    dVar5 = param_1[5];
    dVar6 = *param_1;
    dVar7 = param_1[1];
    dVar8 = param_1[8];
    dVar9 = param_1[9];
    param_3[2] = param_1[2] * dVar1 + param_1[6] * dVar2 + param_1[10] * dVar3;
    *param_3 = dVar3 * dVar8 + dVar2 * dVar4 + dVar1 * dVar6;
    param_3[1] = dVar3 * dVar9 + dVar2 * dVar5 + dVar1 * dVar7;
    return;
  }
  *param_3 = dVar1;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}



/* FLOAT_MATH::fm_distance(double const*, double const*) */

double FLOAT_MATH::fm_distance(double *param_1,double *param_2)

{
  return SQRT((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
              (*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
}



/* FLOAT_MATH::fm_distanceSquared(double const*, double const*) */

double FLOAT_MATH::fm_distanceSquared(double *param_1,double *param_2)

{
  return (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
}



/* FLOAT_MATH::fm_distanceSquaredXZ(double const*, double const*) */

double FLOAT_MATH::fm_distanceSquaredXZ(double *param_1,double *param_2)

{
  return (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
}



/* FLOAT_MATH::fm_computePlane(double const*, double const*, double const*, double*) */

double FLOAT_MATH::fm_computePlane(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = param_2[1] - param_3[1];
  dVar1 = *param_1;
  dVar5 = *param_2 - *param_3;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar9 = dVar2 - param_2[1];
  dVar4 = dVar1 - *param_2;
  dVar6 = (dVar3 - param_2[2]) * dVar8 - (param_2[2] - param_3[2]) * dVar9;
  dVar7 = dVar4 * (param_2[2] - param_3[2]) - dVar5 * (dVar3 - param_2[2]);
  dVar5 = dVar5 * dVar9 - dVar4 * dVar8;
  dVar8 = 0.0;
  dVar4 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5);
  if (_LC62 <= dVar4) {
    dVar8 = _LC54 / dVar4;
  }
  param_4[2] = dVar8 * dVar5;
  *param_4 = dVar8 * dVar6;
  param_4[1] = dVar8 * dVar7;
  return 0.0 - (dVar8 * dVar6 * dVar1 + dVar8 * dVar7 * dVar2 + dVar8 * dVar5 * dVar3);
}



/* FLOAT_MATH::fm_distToPlane(double const*, double const*) */

double FLOAT_MATH::fm_distToPlane(double *param_1,double *param_2)

{
  return *param_2 * *param_1 + param_2[1] * param_1[1] + param_2[2] * param_1[2] + param_1[3];
}



/* FLOAT_MATH::fm_dot(double const*, double const*) */

double FLOAT_MATH::fm_dot(double *param_1,double *param_2)

{
  return *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
}



/* FLOAT_MATH::fm_cross(double*, double const*, double const*) */

void FLOAT_MATH::fm_cross(double *param_1,double *param_2,double *param_3)

{
  *param_1 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  param_1[1] = param_2[2] * *param_3 - *param_2 * param_3[2];
  param_1[2] = *param_2 * param_3[1] - param_2[1] * *param_3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_normalize(double*) */

void FLOAT_MATH::fm_normalize(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = _LC56;
  dVar2 = param_1[1];
  dVar1 = param_1[2];
  dVar4 = SQRT(*param_1 * *param_1 + dVar2 * dVar2 + dVar1 * dVar1);
  if (__LC63 < dVar4) {
    dVar4 = _LC54 / dVar4;
    param_1[2] = dVar1 * dVar4;
    *param_1 = dVar4 * *param_1;
    param_1[1] = dVar4 * dVar2;
    return;
  }
  param_1[2] = 0.0;
  *param_1 = dVar3;
  param_1[1] = 0.0;
  return;
}



/* FLOAT_MATH::fm_computeNormalVector(double*, double const*, double const*) */

void FLOAT_MATH::fm_computeNormalVector(double *param_1,double *param_2,double *param_3)

{
  *param_1 = *param_3 - *param_2;
  param_1[1] = param_3[1] - param_2[1];
  param_1[2] = param_3[2] - param_2[2];
  fm_normalize(param_1);
  return;
}



/* FLOAT_MATH::fm_computeWindingOrder(double const*, double const*, double const*) */

bool FLOAT_MATH::fm_computeWindingOrder(double *param_1,double *param_2,double *param_3)

{
  double *extraout_RDX;
  long in_FS_OFFSET;
  double dVar1;
  double dVar2;
  double dVar3;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  dVar2 = *param_1;
  dVar3 = param_1[1];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = param_1[2];
  local_48 = *param_2 - dVar2;
  dStack_40 = param_2[1] - dVar3;
  local_38 = param_2[2] - dVar1;
  fm_normalize(&local_48);
  local_28 = *extraout_RDX - dVar2;
  dStack_20 = extraout_RDX[1] - dVar3;
  local_18 = extraout_RDX[2] - dVar1;
  fm_normalize(&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0.0 < (local_38 * local_28 - local_18 * local_48) * 0.0 +
                 (local_18 * dStack_40 - local_38 * dStack_20) +
                 (dStack_20 * local_48 - dStack_40 * local_28) * 0.0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_eulerToQuatDX(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToQuatDX(double param_1,double param_2,double param_3,double *param_4)

{
  double *pdVar1;
  long in_FS_OFFSET;
  double adStack_c8 [4];
  double local_a8 [17];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_eulerToQuat(param_1,param_2,param_3,adStack_c8);
  pdVar1 = (double *)fm_quatToMatrix(adStack_c8,local_a8);
  fm_matrixToQuat(pdVar1,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_eulerToMatrixDX(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToMatrixDX(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_38;
  double local_30;
  
  sincos(param_1,&local_30,&local_38);
  dVar3 = local_30;
  dVar1 = local_38;
  sincos(param_2,&local_30,&local_38);
  dVar4 = local_30;
  dVar2 = local_38;
  sincos(param_3,&local_30,&local_38);
  param_4[0xc] = 0.0;
  param_4[0xd] = 0.0;
  dVar5 = _LC54;
  param_4[0xe] = 0.0;
  param_4[3] = 0.0;
  param_4[0xf] = dVar5;
  param_4[7] = 0.0;
  param_4[0xb] = 0.0;
  *param_4 = local_38 * dVar2 + local_30 * dVar3 * dVar4;
  param_4[1] = local_30 * dVar1;
  param_4[2] = local_30 * dVar3 * dVar2 - dVar4 * local_38;
  dVar5 = (double)((ulong)dVar3 ^ _LC95);
  param_4[8] = dVar4 * dVar1;
  param_4[9] = dVar5;
  param_4[5] = local_38 * dVar1;
  param_4[10] = dVar2 * dVar1;
  param_4[4] = dVar4 * local_38 * dVar3 - local_30 * dVar2;
  param_4[6] = local_30 * dVar4 + local_38 * dVar3 * dVar2;
  return;
}



/* FLOAT_MATH::fm_scale(double, double, double, double*) */

void FLOAT_MATH::fm_scale(double param_1,double param_2,double param_3,double *param_4)

{
  *param_4 = param_1;
  param_4[5] = param_2;
  param_4[10] = param_3;
  return;
}



/* FLOAT_MATH::fm_setTranslation(double const*, double*) */

void FLOAT_MATH::fm_setTranslation(double *param_1,double *param_2)

{
  param_2[0xc] = *param_1;
  param_2[0xd] = param_1[1];
  param_2[0xe] = param_1[2];
  return;
}



/* FLOAT_MATH::fm_computeArea(double const*, double const*, double const*) */

double FLOAT_MATH::fm_computeArea(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *param_2 - *param_1;
  dVar5 = param_2[1] - param_1[1];
  dVar4 = param_2[2] - param_1[2];
  dVar1 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (dVar1 != 0.0) {
    dVar3 = *param_3 - *param_1;
    dVar8 = param_3[1] - param_1[1];
    dVar7 = param_3[2] - param_1[2];
    dVar2 = (dVar6 * dVar3 + dVar5 * dVar8 + dVar4 * dVar7) / (dVar1 * dVar1);
    dVar8 = dVar8 - dVar5 * dVar2;
    dVar3 = dVar3 - dVar6 * dVar2;
    dVar7 = dVar7 - dVar4 * dVar2;
    return dVar1 * _LC50 * SQRT(dVar7 * dVar7 + dVar3 * dVar3 + dVar8 * dVar8);
  }
  return dVar1 * _LC50 * 0.0;
}



/* FLOAT_MATH::fm_lerp(double const*, double const*, double*, double) */

void FLOAT_MATH::fm_lerp(double *param_1,double *param_2,double *param_3,double param_4)

{
  *param_3 = (*param_2 - *param_1) * param_4 + *param_1;
  param_3[1] = (param_2[1] - param_1[1]) * param_4 + param_1[1];
  param_3[2] = (param_2[2] - param_1[2]) * param_4 + param_1[2];
  return;
}



/* FLOAT_MATH::fm_pointTestXZ(double const*, double const*, double const*) */

bool FLOAT_MATH::fm_pointTestXZ(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_2[2];
  dVar1 = param_1[2];
  dVar2 = param_3[2];
  dVar3 = dVar2;
  if (((dVar4 <= dVar1) || (dVar3 = dVar4, dVar2 <= dVar1)) && (dVar1 < dVar3)) {
    dVar4 = ((dVar1 - dVar4) * (*param_3 - *param_2)) / (dVar2 - dVar4) + *param_2;
    return *param_1 <= dVar4 && dVar4 != *param_1;
  }
  return false;
}



/* FLOAT_MATH::fm_insideTriangleXZ(double const*, double const*, double const*, double const*) */

uint FLOAT_MATH::fm_insideTriangleXZ
               (double *param_1,double *param_2,double *param_3,double *param_4)

{
  uint uVar1;
  uint uVar2;
  double *extraout_RDX;
  
  uVar1 = fm_pointTestXZ(param_1,param_2,param_3);
  uVar2 = fm_pointTestXZ(param_1,extraout_RDX,param_4);
  uVar1 = uVar1 ^ uVar2;
  uVar2 = fm_pointTestXZ(param_1,param_4,param_2);
  return uVar2 ^ uVar1;
}



/* FLOAT_MATH::fm_insideAABB(double const*, double const*, double const*) */

bool FLOAT_MATH::fm_insideAABB(double *param_1,double *param_2,double *param_3)

{
  if ((((*param_2 <= *param_1) && (*param_1 <= *param_3)) && (param_2[1] <= param_1[1])) &&
     ((param_1[1] <= param_3[1] && (param_2[2] <= param_1[2])))) {
    return param_1[2] <= param_3[2];
  }
  return false;
}



/* FLOAT_MATH::fm_clipTestPoint(double const*, double const*, double const*) */

byte FLOAT_MATH::fm_clipTestPoint(double *param_1,double *param_2,double *param_3)

{
  byte bVar1;
  double dVar2;
  
  dVar2 = *param_3;
  bVar1 = 1;
  if (*param_1 <= dVar2) {
    bVar1 = (*param_2 <= dVar2 && dVar2 != *param_2) * '\x02';
  }
  dVar2 = param_3[1];
  if (param_1[1] <= dVar2) {
    if (param_2[1] <= dVar2 && dVar2 != param_2[1]) {
      dVar2 = param_3[2];
      bVar1 = bVar1 | 8;
      if (param_1[2] <= dVar2) goto LAB_0010787a;
      goto LAB_00107855;
    }
  }
  else {
    bVar1 = bVar1 | 4;
  }
  dVar2 = param_3[2];
  if (param_1[2] <= dVar2) {
LAB_0010787a:
    if (param_2[2] <= dVar2 && dVar2 != param_2[2]) {
      bVar1 = bVar1 | 0x20;
    }
    return bVar1;
  }
LAB_00107855:
  return bVar1 | 0x10;
}



/* FLOAT_MATH::fm_clipTestPointXZ(double const*, double const*, double const*) */

byte FLOAT_MATH::fm_clipTestPointXZ(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  byte bVar2;
  
  dVar1 = *param_3;
  bVar2 = 1;
  if (*param_1 <= dVar1) {
    bVar2 = (*param_2 <= dVar1 && dVar1 != *param_2) * '\x02';
  }
  dVar1 = param_3[2];
  if (dVar1 < param_1[2]) {
    return bVar2 | 0x10;
  }
  if (param_2[2] <= dVar1 && dVar1 != param_2[2]) {
    bVar2 = bVar2 | 0x20;
  }
  return bVar2;
}



/* FLOAT_MATH::fm_clipTestAABB(double const*, double const*, double const*, double const*, double
   const*, unsigned int&) */

uint FLOAT_MATH::fm_clipTestAABB
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = fm_clipTestPoint(param_1,param_2,param_3);
  uVar2 = fm_clipTestPoint(param_1,param_2,param_4);
  uVar4 = uVar1 | uVar2;
  uVar3 = fm_clipTestPoint(param_1,param_2,param_5);
  *param_6 = uVar1 & uVar3 & uVar2 & 0x3f;
  return uVar3 | uVar4;
}



/* FLOAT_MATH::intersect(double const*, double const*, double const*, double const*, double*) */

undefined8
FLOAT_MATH::intersect
          (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = 0;
  dVar8 = 0.0;
  dVar9 = _LC54;
  do {
    dVar1 = *(double *)((long)param_1 + lVar5);
    dVar2 = *(double *)((long)param_2 + lVar5);
    dVar3 = *(double *)((long)param_4 + lVar5);
    dVar6 = _LC54;
    if (dVar2 <= dVar1) {
      if (dVar3 < dVar2) {
        return 0;
      }
      dVar4 = *(double *)((long)param_3 + lVar5);
      if (dVar1 < dVar4) {
        return 0;
      }
      dVar7 = 0.0;
      if (dVar3 < dVar1) {
        dVar7 = (dVar3 - dVar1) / (dVar2 - dVar1);
      }
      if (dVar2 < dVar4) {
        dVar6 = (dVar4 - dVar1) / (dVar2 - dVar1);
      }
    }
    else {
      if (dVar3 < dVar1) {
        return 0;
      }
      dVar4 = *(double *)((long)param_3 + lVar5);
      if (dVar2 < dVar4) {
        return 0;
      }
      if (dVar4 <= dVar1) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (dVar4 - dVar1) / (dVar2 - dVar1);
      }
      if (dVar3 < dVar2) {
        dVar6 = (dVar3 - dVar1) / (dVar2 - dVar1);
      }
    }
    if (dVar7 <= dVar8) {
      dVar7 = dVar8;
    }
    dVar8 = dVar7;
    if (dVar9 <= dVar6) {
      dVar6 = dVar9;
    }
    if (dVar6 < dVar8) {
      return 0;
    }
    lVar5 = lVar5 + 8;
    dVar9 = dVar6;
    if (lVar5 == 0x18) {
      *param_5 = dVar8;
      return 1;
    }
  } while( true );
}



/* FLOAT_MATH::fm_lineTestAABB(double const*, double const*, double const*, double const*, double&)
    */

void FLOAT_MATH::fm_lineTestAABB
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  intersect(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* FLOAT_MATH::fm_lineTestAABBXZ(double const*, double const*, double const*, double const*,
   double&) */

void FLOAT_MATH::fm_lineTestAABBXZ
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  long in_FS_OFFSET;
  double local_48;
  undefined8 local_40;
  double local_38;
  double local_28;
  undefined8 local_20;
  double local_18;
  long local_10;
  
  local_48 = *param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_3[2];
  local_40 = _LC64;
  local_28 = *param_4;
  local_20 = _LC65;
  local_18 = param_4[2];
  intersect(param_1,param_2,&local_48,&local_28,param_5);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_minmax(double const*, double*, double*) */

void FLOAT_MATH::fm_minmax(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  if (*param_1 < *param_2) {
    *param_2 = *param_1;
  }
  if (param_1[1] < param_2[1]) {
    param_2[1] = param_1[1];
  }
  if (param_1[2] < param_2[2]) {
    param_2[2] = param_1[2];
  }
  dVar1 = *param_1;
  if (*param_3 <= dVar1 && dVar1 != *param_3) {
    *param_3 = dVar1;
  }
  dVar1 = param_1[1];
  if (param_3[1] <= dVar1 && dVar1 != param_3[1]) {
    param_3[1] = dVar1;
  }
  dVar1 = param_1[2];
  if (param_3[2] <= dVar1 && dVar1 != param_3[2]) {
    param_3[2] = dVar1;
  }
  return;
}



/* FLOAT_MATH::fm_solveX(double const*, double, double) */

double FLOAT_MATH::fm_solveX(double *param_1,double param_2,double param_3)

{
  return (double)((ulong)(param_2 * param_1[1] + param_3 * param_1[2] + param_1[3]) ^ _LC95) /
         *param_1;
}



/* FLOAT_MATH::fm_solveY(double const*, double, double) */

double FLOAT_MATH::fm_solveY(double *param_1,double param_2,double param_3)

{
  return (double)((ulong)(param_2 * *param_1 + param_3 * param_1[2] + param_1[3]) ^ _LC95) /
         param_1[1];
}



/* FLOAT_MATH::fm_solveZ(double const*, double, double) */

double FLOAT_MATH::fm_solveZ(double *param_1,double param_2,double param_3)

{
  return (double)((ulong)(param_2 * *param_1 + param_3 * param_1[1] + param_1[3]) ^ _LC95) /
         param_1[2];
}



/* FLOAT_MATH::fm_getAABBCenter(double const*, double const*, double*) */

void FLOAT_MATH::fm_getAABBCenter(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = _LC50;
  *param_3 = (*param_2 - *param_1) * _LC50 + *param_1;
  param_3[1] = (param_2[1] - param_1[1]) * dVar1 + param_1[1];
  param_3[2] = (param_2[2] - param_1[2]) * dVar1 + param_1[2];
  return;
}



/* FLOAT_MATH::fm_getDominantAxis(double const*) */

char FLOAT_MATH::fm_getDominantAxis(double *param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)((ulong)param_1[1] & _LC58);
  dVar3 = (double)((ulong)param_1[2] & _LC58);
  if ((dVar2 <= (double)((ulong)*param_1 & _LC58)) || (cVar1 = '\x02', dVar2 <= dVar3)) {
    if ((double)((ulong)*param_1 & _LC58) < dVar3) {
      return (dVar2 < dVar3) * '\x03' + '\x01';
    }
    cVar1 = '\x01';
  }
  return cVar1;
}



/* FLOAT_MATH::fm_raySphereIntersect(double const*, double, double const*, double const*, double,
   double*) */

bool FLOAT_MATH::fm_raySphereIntersect
               (double *param_1,double param_2,double *param_3,double *param_4,double param_5,
               double *param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_1[1] - param_3[1];
  dVar2 = *param_1 - *param_3;
  dVar4 = param_1[2] - param_3[2];
  dVar8 = *param_4;
  dVar7 = param_4[1];
  dVar6 = param_4[2];
  dVar3 = dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4;
  if (dVar3 < param_2 * param_2) {
    dVar8 = (double)((ulong)dVar8 ^ _LC95);
    dVar7 = (double)((ulong)dVar7 ^ _LC95);
    dVar6 = (double)((ulong)dVar6 ^ _LC95);
  }
  dVar2 = dVar2 * dVar8 + dVar5 * dVar7 + dVar4 * dVar6;
  dVar3 = param_2 * param_2 - (dVar3 - dVar2 * dVar2);
  bVar1 = param_6 != (double *)0x0 && 0.0 < dVar3;
  if (param_6 == (double *)0x0 || 0.0 >= dVar3) {
    return bVar1;
  }
  dVar2 = dVar2 - SQRT(dVar3);
  if (dVar2 < param_5) {
    *param_6 = dVar8 * dVar2 + *param_3;
    param_6[1] = dVar7 * dVar2 + param_3[1];
    param_6[2] = dVar6 * dVar2 + param_3[2];
    return bVar1;
  }
  return false;
}



/* FLOAT_MATH::fm_lineSphereIntersect(double const*, double, double const*, double const*, double*)
    */

undefined8
FLOAT_MATH::fm_lineSphereIntersect
          (double *param_1,double param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  double dVar3;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  dVar1 = *param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *param_4 - dVar1;
  local_18 = param_4[2] - param_3[2];
  dVar3 = SQRT(local_28 * local_28 + (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
               local_18 * local_18);
  if (0.0 < dVar3) {
    dStack_20 = _LC54 / dVar3;
    local_18 = dStack_20 * local_18;
    local_28 = dStack_20 * local_28;
    dStack_20 = dStack_20 * (param_4[1] - param_3[1]);
    uVar2 = fm_raySphereIntersect(param_1,param_2,param_3,&local_28,dVar3,param_5);
  }
  else {
    uVar2 = 0;
    local_28 = *param_1 - dVar1;
    dStack_20 = param_1[1] - param_3[1];
    local_18 = param_1[2] - param_3[2];
    if (local_28 * local_28 + dStack_20 * dStack_20 + local_18 * local_18 < param_2 * param_2) {
      if (param_5 != (double *)0x0) {
        *param_5 = dVar1;
        param_5[1] = param_3[1];
        param_5[2] = param_3[2];
      }
      uVar2 = 1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_catmullRom(double*, double const*, double const*, double const*, double const*,
   double) */

void FLOAT_MATH::fm_catmullRom
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = _LC50;
  dVar5 = param_6 * param_6;
  dVar3 = param_6 * dVar5;
  dVar4 = dVar3 - dVar5;
  dVar2 = ((dVar5 + dVar5) - dVar3) - param_6;
  dVar6 = (_LC66 * dVar3 - _LC67 * dVar5) + __LC68;
  dVar3 = (_LC69 * dVar5 - _LC66 * dVar3) + param_6;
  *param_1 = (*param_2 * dVar2 + *param_3 * dVar6 + *param_4 * dVar3 + *param_5 * dVar4) * _LC50;
  param_1[1] = (param_2[1] * dVar2 + param_3[1] * dVar6 + param_4[1] * dVar3 + param_5[1] * dVar4) *
               dVar1;
  param_1[2] = (dVar2 * param_2[2] + dVar6 * param_3[2] + dVar3 * param_4[2] + dVar4 * param_5[2]) *
               dVar1;
  return;
}



/* FLOAT_MATH::fm_intersectAABB(double const*, double const*, double const*, double const*) */

bool FLOAT_MATH::fm_intersectAABB(double *param_1,double *param_2,double *param_3,double *param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*param_1 < *param_4 || *param_1 == *param_4) &&
       (*param_3 < *param_2 || *param_3 == *param_2)) &&
      (param_1[1] < param_4[1] || param_1[1] == param_4[1])) &&
     ((bVar1 = false, param_3[1] < param_2[1] || param_3[1] == param_2[1] &&
      (param_1[2] < param_4[2] || param_1[2] == param_4[2])))) {
    bVar1 = param_3[2] < param_2[2] || param_3[2] == param_2[2];
  }
  return bVar1;
}



/* FLOAT_MATH::fm_insideAABB(double const*, double const*, double const*, double const*) */

bool FLOAT_MATH::fm_insideAABB(double *param_1,double *param_2,double *param_3,double *param_4)

{
  if ((((*param_4 <= *param_2) && (param_4[1] <= param_2[1])) && (param_4[2] <= param_2[2])) &&
     ((*param_1 <= *param_3 && (param_1[1] <= param_3[1])))) {
    return param_1[2] <= param_3[2];
  }
  return false;
}



/* FLOAT_MATH::fm_rotationArc(double const*, double const*, double*) */

void FLOAT_MATH::fm_rotationArc(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar8 = param_1[1];
  dVar7 = param_1[2];
  dVar5 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar6 = *param_1;
  dVar9 = param_1[2];
  dVar4 = dVar5 * dVar6 + dVar8 * dVar1 + dVar2 * dVar7;
  if (dVar4 <= _LC70) {
    if ((float)((uint)(float)dVar6 & _LC11) < _LC27) {
      *param_3 = 0.0;
      dVar5 = param_1[2];
      dVar8 = 0.0;
      param_3[1] = dVar5;
      dVar6 = param_1[1];
      dVar7 = (double)((ulong)dVar6 ^ _LC95);
      dVar6 = dVar6 * dVar6;
      dVar9 = dVar8;
    }
    else {
      *param_3 = dVar8;
      dVar6 = 0.0;
      dVar5 = (double)((ulong)*param_1 ^ _LC95);
      dVar7 = 0.0;
      dVar9 = dVar8 * dVar8;
    }
    fVar3 = (float)(dVar5 * dVar5 + dVar9 + dVar6 + 0.0);
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    dVar6 = _LC54 / (double)fVar3;
    param_3[2] = dVar7 * dVar6;
    *param_3 = dVar6 * dVar8;
    param_3[1] = dVar6 * dVar5;
    param_3[3] = dVar6 * 0.0;
    return;
  }
  dVar4 = dVar4 + _LC54;
  dVar4 = SQRT(dVar4 + dVar4);
  dVar10 = _LC54 / dVar4;
  param_3[3] = dVar4 * _LC50;
  param_3[2] = (dVar1 * dVar6 - dVar8 * dVar5) * dVar10;
  *param_3 = dVar10 * (dVar8 * dVar2 - dVar9 * dVar1);
  param_3[1] = dVar10 * (dVar7 * dVar5 - dVar6 * dVar2);
  return;
}



/* FLOAT_MATH::fm_distancePointLineSegment(double const*, double const*, double const*, double*,
   FLOAT_MATH::LineSegmentType&, double) */

double FLOAT_MATH::fm_distancePointLineSegment
                 (double *param_1,double *param_2,double *param_3,double *param_4,
                 LineSegmentType *param_5,double param_6)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = *param_3;
  dVar8 = *param_2;
  dVar7 = dVar3 - dVar8;
  dVar4 = param_3[1] - param_2[1];
  dVar6 = param_3[2] - param_2[2];
  dVar2 = SQRT(dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6);
  if (0.0 < dVar2) {
    dVar5 = *param_1 - dVar8;
    dVar10 = param_1[1] - param_2[1];
    dVar9 = param_1[2] - param_2[2];
    dVar2 = (dVar4 * dVar10 + dVar5 * dVar7 + dVar6 * dVar9) / (dVar2 * dVar2);
    if ((0.0 <= dVar2) && (dVar2 <= _LC54)) {
      dVar8 = dVar7 * dVar2 + dVar8;
      dVar6 = (param_6 + param_6) * (param_6 + param_6);
      *param_4 = dVar8;
      dVar4 = (param_3[1] - param_2[1]) * dVar2 + param_2[1];
      param_4[1] = dVar4;
      iVar1 = 0;
      dVar3 = (param_3[2] - param_2[2]) * dVar2 + param_2[2];
      param_4[2] = dVar3;
      dVar2 = SQRT((param_1[2] - dVar3) * (param_1[2] - dVar3) +
                   (*param_1 - dVar8) * (*param_1 - dVar8) +
                   (param_1[1] - dVar4) * (param_1[1] - dVar4));
      if (dVar6 <= (dVar8 - *param_2) * (dVar8 - *param_2) +
                   (dVar4 - param_2[1]) * (dVar4 - param_2[1]) +
                   (dVar3 - param_2[2]) * (dVar3 - param_2[2])) {
        iVar1 = ((dVar8 - *param_3) * (dVar8 - *param_3) +
                 (dVar4 - param_3[1]) * (dVar4 - param_3[1]) +
                 (dVar3 - param_3[2]) * (dVar3 - param_3[2]) < dVar6) + 1;
      }
      goto LAB_0010840d;
    }
    dVar4 = *param_1 - dVar3;
    dVar7 = param_1[2] - param_3[2];
    dVar2 = param_1[1] - param_3[1];
    dVar6 = dVar5 * dVar5 + dVar10 * dVar10 + dVar9 * dVar9;
    dVar2 = dVar4 * dVar4 + dVar2 * dVar2 + dVar7 * dVar7;
    if (dVar6 <= dVar2) {
      *param_4 = dVar8;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      *(undefined4 *)param_5 = 0;
      return SQRT(dVar6);
    }
    dVar2 = SQRT(dVar2);
  }
  *param_4 = dVar3;
  iVar1 = 2;
  param_4[1] = param_3[1];
  param_4[2] = param_3[2];
LAB_0010840d:
  *(int *)param_5 = iVar1;
  return dVar2;
}



/* FLOAT_MATH::fm_colinear(double const*, double const*, double const*, double const*, double) */

bool FLOAT_MATH::fm_colinear
               (double *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long in_FS_OFFSET;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  dVar2 = *param_1;
  dVar3 = param_1[1];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = param_2[2];
  local_48 = *param_2 - dVar2;
  dStack_40 = param_2[1] - dVar3;
  local_38 = dVar1 - param_1[2];
  local_28 = (*param_4 - dVar2) - (*param_3 - dVar2);
  dStack_20 = (param_4[1] - dVar3) - (param_3[1] - dVar3);
  local_18 = (param_4[2] - dVar1) - (param_3[2] - dVar1);
  fm_normalize(&local_48);
  fm_normalize(&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5 <= local_48 * local_28 + dStack_40 * dStack_20 + local_38 * local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_colinear(double const*, double const*, double const*, double) */

bool FLOAT_MATH::fm_colinear(double *param_1,double *param_2,double *param_3,double param_4)

{
  long in_FS_OFFSET;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_2 - *param_1;
  dStack_40 = param_2[1] - param_1[1];
  local_38 = param_2[2] - param_1[2];
  local_28 = *param_3 - *param_2;
  dStack_20 = param_3[1] - param_2[1];
  local_18 = param_3[2] - param_2[2];
  fm_normalize(&local_48);
  fm_normalize(&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4 <= local_48 * local_28 + dStack_40 * dStack_20 + local_38 * local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_consolidatePolygon(unsigned int, double const*, unsigned int, double*, double)
   [clone .part.0] */

int FLOAT_MATH::fm_consolidatePolygon
              (uint param_1,double *param_2,uint param_3,double *param_4,double param_5)

{
  double *pdVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  
  pdVar4 = (double *)((long)param_2 + (ulong)param_3);
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = 0;
  uVar7 = 0;
  pdVar1 = param_2;
  pdVar5 = (double *)((ulong)((param_1 - 1) * param_3) + (long)param_2);
  do {
    pdVar3 = pdVar1;
    uVar7 = uVar7 + 1;
    if (param_1 == uVar7) {
      cVar2 = fm_colinear(pdVar5,pdVar3,param_2,param_5);
      pdVar4 = param_2;
      if (cVar2 != '\0') {
        return iVar6;
      }
LAB_00108733:
      iVar6 = iVar6 + 1;
      *param_4 = *pdVar3;
      param_4[1] = pdVar3[1];
      param_4[2] = pdVar3[2];
      param_4 = param_4 + 3;
      if (param_1 == uVar7) {
        return iVar6;
      }
    }
    else {
      cVar2 = fm_colinear(pdVar5,pdVar3,pdVar4,param_5);
      if (cVar2 == '\0') goto LAB_00108733;
    }
    pdVar4 = pdVar4 + 3;
    pdVar1 = pdVar3 + 3;
    pdVar5 = pdVar3;
  } while( true );
}



/* FLOAT_MATH::fm_initMinMax(double const*, double*, double*) */

void FLOAT_MATH::fm_initMinMax(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = *param_1;
  *param_2 = dVar1;
  *param_3 = dVar1;
  dVar1 = param_1[1];
  param_2[1] = dVar1;
  param_3[1] = dVar1;
  dVar1 = param_1[2];
  param_2[2] = dVar1;
  param_3[2] = dVar1;
  return;
}



/* FLOAT_MATH::fm_intersectLineSegments2d(double const*, double const*, double const*, double
   const*, double*) */

int FLOAT_MATH::fm_intersectLineSegments2d
              (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_1;
  dVar5 = param_4[1] - param_3[1];
  dVar2 = *param_4 - *param_3;
  dVar4 = param_2[1] - param_1[1];
  dVar6 = *param_2 - dVar1;
  dVar3 = param_1[1] - param_3[1];
  dVar8 = dVar1 - *param_3;
  dVar7 = dVar5 * dVar6 - dVar2 * dVar4;
  dVar4 = dVar3 * dVar6 - dVar4 * dVar8;
  dVar2 = dVar2 * dVar3 - dVar5 * dVar8;
  if (dVar7 == 0.0) {
    return 3 - (uint)(dVar2 == 0.0 && dVar4 == 0.0);
  }
  dVar7 = _LC54 / dVar7;
  dVar2 = dVar2 * dVar7;
  if ((((0.0 <= dVar2) && (dVar2 <= _LC54)) && (dVar4 = dVar4 * dVar7, 0.0 <= dVar4)) &&
     (dVar4 <= _LC54)) {
    *param_5 = dVar6 * dVar2 + dVar1;
    param_5[1] = dVar2 * (param_2[1] - param_1[1]) + param_1[1];
    return 1;
  }
  return 0;
}



/* FLOAT_MATH::fm_intersectLineSegments2dTime(double const*, double const*, double const*, double
   const*, double&, double&) */

int FLOAT_MATH::fm_intersectLineSegments2dTime
              (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
              double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = param_4[1] - param_3[1];
  dVar1 = *param_4 - *param_3;
  dVar2 = *param_2 - *param_1;
  dVar3 = param_2[1] - param_1[1];
  dVar5 = *param_1 - *param_3;
  dVar6 = param_1[1] - param_3[1];
  dVar7 = dVar4 * dVar2 - dVar1 * dVar3;
  dVar2 = dVar2 * dVar6 - dVar3 * dVar5;
  dVar1 = dVar1 * dVar6 - dVar4 * dVar5;
  if (dVar7 == 0.0) {
    return 3 - (uint)(dVar1 == 0.0 && dVar2 == 0.0);
  }
  dVar7 = _LC54 / dVar7;
  dVar1 = dVar1 * dVar7;
  if ((((0.0 <= dVar1) && (dVar1 <= _LC54)) && (dVar2 = dVar2 * dVar7, 0.0 <= dVar2)) &&
     (dVar2 <= _LC54)) {
    *param_5 = dVar1;
    *param_6 = dVar2;
    return 1;
  }
  return 0;
}



/* FLOAT_MATH::fm_intersectPointPlane(double const*, double const*, double*, double const*) */

undefined8
FLOAT_MATH::fm_intersectPointPlane(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_1;
  dVar7 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar4 = param_4[3];
  dVar6 = dVar1 * dVar7 + param_1[1] * dVar2 + param_1[2] * dVar3 + dVar4;
  dVar8 = *param_2 * dVar7 + param_2[1] * dVar2 + param_2[2] * dVar3 + dVar4;
  if ((dVar6 <= 0.0) && (dVar8 <= 0.0)) {
    return 0;
  }
  if ((dVar6 < 0.0) || (uVar5 = 0, dVar8 < 0.0)) {
    dVar10 = *param_2 - dVar1;
    dVar9 = param_2[1] - param_1[1];
    uVar5 = 1;
    dVar8 = param_2[2] - param_1[2];
    dVar7 = (double)((ulong)((dVar6 - dVar4) + dVar4) ^ _LC95) /
            (dVar7 * dVar10 + dVar2 * dVar9 + dVar3 * dVar8);
    *param_3 = dVar10 * dVar7 + dVar1;
    param_3[1] = dVar9 * dVar7 + param_1[1];
    param_3[2] = dVar8 * dVar7 + param_1[2];
  }
  return uVar5;
}



/* FLOAT_MATH::fm_getSidePlane(double const*, double const*, double) */

char FLOAT_MATH::fm_getSidePlane(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2] + param_2[3];
  if (((double)((ulong)param_3 ^ _LC95) <= dVar1) && (dVar1 <= param_3)) {
    return '\0';
  }
  return (dVar1 <= 0.0) + '\x01';
}



/* FLOAT_MATH::fm_planeTriIntersection(double const*, double const*, unsigned int, double, double*,
   unsigned int&, double*, unsigned int&) */

char FLOAT_MATH::fm_planeTriIntersection
               (double *param_1,double *param_2,uint param_3,double param_4,double *param_5,
               uint *param_6,double *param_7,uint *param_8)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  double *pdVar24;
  undefined8 uVar25;
  char cVar26;
  undefined8 uVar27;
  uint *puVar28;
  double *pdVar29;
  undefined1 *puVar30;
  ulong uVar31;
  double *pdVar32;
  undefined1 *puVar33;
  uint uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 local_7030 [28672];
  
  puVar30 = &stack0xffffffffffffffd0;
  do {
    puVar22 = puVar30;
    *(undefined8 *)(puVar22 + -0x1000) = *(undefined8 *)(puVar22 + -0x1000);
    puVar30 = puVar22 + -0x1000;
  } while (puVar22 + -0x1000 != local_7030);
  dVar43 = *param_1;
  dVar44 = param_1[1];
  dVar38 = param_1[2];
  dVar39 = param_1[3];
  uVar14 = (ulong)param_3;
  dVar6 = *param_2;
  dVar7 = param_2[1];
  dVar42 = *param_2;
  dVar3 = param_2[2];
  uVar31 = (ulong)(param_3 * 2);
  pdVar2 = (double *)((long)param_2 + uVar14);
  *(undefined8 *)(puVar22 + 0x5ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pdVar24 = (double *)((long)param_2 + uVar31);
  dVar40 = (double)((ulong)param_4 ^ _LC95);
  puVar28 = *(uint **)(puVar22 + 0x6038);
  *param_6 = 0;
  *puVar28 = 0;
  dVar36 = dVar42 * dVar43 + dVar7 * dVar44 + dVar3 * dVar38 + dVar39;
  if ((dVar36 < dVar40) || (cVar26 = '\0', param_4 < dVar36)) {
    cVar26 = (dVar36 <= 0.0) + '\x01';
  }
  dVar8 = *pdVar2;
  dVar9 = pdVar2[1];
  dVar36 = pdVar2[2];
  dVar37 = *pdVar2 * dVar43 + dVar9 * dVar44 + dVar36 * dVar38 + dVar39;
  if ((dVar37 < dVar40) || (cVar15 = '\0', param_4 < dVar37)) {
    cVar15 = (dVar37 <= 0.0) + '\x01';
  }
  dVar37 = *pdVar24;
  dVar4 = pdVar24[1];
  dVar5 = pdVar24[2];
  dVar41 = dVar37 * dVar43 + dVar4 * dVar44 + dVar5 * dVar38 + dVar39;
  if ((dVar41 < dVar40) || (param_4 < dVar41)) {
    if (dVar41 <= 0.0) {
      if (cVar26 == '\0' || cVar15 == '\0') {
        if (cVar26 == '\0') {
          if (cVar15 == '\0') {
LAB_00109398:
            cVar15 = '\x02';
            goto LAB_001092e6;
          }
          cVar26 = cVar15;
          cVar15 = '\x02';
        }
        else {
          if (cVar15 != '\0') {
            if ((cVar15 == cVar26) && (cVar26 == '\x02')) goto LAB_00109398;
            goto LAB_00108e10;
          }
          cVar15 = '\x02';
        }
        goto LAB_00109027;
      }
      if ((cVar26 == '\x02') && (bVar35 = cVar15 == '\x02', cVar15 = '\x02', bVar35))
      goto LAB_001092e6;
    }
    else if (cVar26 == '\0' || cVar15 == '\0') {
      if (cVar26 == '\0') {
        if (cVar15 == '\0') goto LAB_00108d39;
        cVar26 = cVar15;
        cVar15 = '\x01';
      }
      else {
        if (cVar15 != '\0') {
          bVar35 = cVar15 == cVar26;
          cVar15 = cVar26;
          if (bVar35) goto joined_r0x0010945d;
          goto LAB_00108e10;
        }
        cVar15 = '\x01';
      }
LAB_00109027:
      if (cVar15 == cVar26) goto LAB_00109034;
    }
    else if (cVar26 == '\x01') {
joined_r0x0010945d:
      if (cVar15 == '\x01') goto LAB_00108d39;
    }
LAB_00108e10:
    *(double *)(puVar22 + 0x17d0) = dVar6;
    *(double *)(puVar22 + 0x17d8) = dVar7;
    uVar23 = 0;
    puVar30 = puVar22 + 0x17c8;
    puVar33 = puVar22 + 0x1810;
    *(double *)(puVar22 + 0x1800) = dVar37;
    uVar34 = 0;
    *(double *)(puVar22 + 0x1808) = dVar4;
    *(double *)(puVar22 + 0x1810) = dVar5;
    *(undefined4 *)(puVar22 + 0x2fd8) = 0;
    *(undefined4 *)(puVar22 + 0x47e8) = 0;
    *(undefined8 *)(puVar22 + -0x18a8) = *(undefined8 *)(puVar22 + 0x1810);
    *(double *)(puVar22 + 0x17e0) = dVar3;
    *(double *)(puVar22 + 0x17e8) = dVar8;
    *(double *)(puVar22 + 0x17f0) = dVar9;
    *(double *)(puVar22 + 0x17f8) = dVar36;
    *(double *)(puVar22 + -0x1858) = dVar43;
    *(double *)(puVar22 + -0x1850) = dVar44;
    *(double *)(puVar22 + -0x1848) = dVar38;
    *(double *)(puVar22 + -0x1840) = dVar39;
    *(undefined8 *)(puVar22 + -0x18b8) = *(undefined8 *)(puVar22 + 0x1800);
    *(undefined8 *)(puVar22 + -0x18b0) = *(undefined8 *)(puVar22 + 0x1808);
    do {
      uVar10 = *(undefined8 *)(puVar30 + 8);
      uVar11 = *(undefined8 *)(puVar30 + 0x10);
      uVar12 = *(undefined8 *)(puVar30 + 0x18);
      *(undefined8 *)(puVar22 + -0x1898) = uVar10;
      *(undefined8 *)(puVar22 + -0x1890) = uVar11;
      *(undefined8 *)(puVar22 + -0x1888) = uVar12;
      dVar42 = *(double *)(puVar22 + -0x1898) * dVar43 + *(double *)(puVar22 + -0x1890) * dVar44 +
               *(double *)(puVar22 + -0x1888) * dVar38 + dVar39;
      if (0.0 < dVar42) {
        uVar19 = uVar23;
        if (dVar41 < 0.0) {
          *(double *)(puVar22 + -0x18c8) = dVar38;
          *(double *)(puVar22 + -0x18c0) = dVar39;
          *(undefined8 *)(puVar22 + -0x18d0) = 0x109134;
          fm_intersectPointPlane
                    ((double *)(puVar22 + -0x1898),(double *)(puVar22 + -0x18b8),
                     (double *)(puVar22 + -0x1878),(double *)(puVar22 + -0x1858));
          lVar17 = (long)(int)uVar34;
          uVar12 = *(undefined8 *)(puVar22 + -0x1868);
          uVar19 = uVar23 + 1;
          dVar38 = *(double *)(puVar22 + -0x18c8);
          uVar34 = uVar34 + 1;
          uVar10 = *(undefined8 *)(puVar22 + -0x1878);
          uVar11 = *(undefined8 *)(puVar22 + -0x1870);
          dVar39 = *(double *)(puVar22 + -0x18c0);
          *(undefined8 *)(puVar22 + lVar17 * 0x18 + -0x28) = uVar12;
          *(undefined8 *)(puVar22 + lVar17 * 0x18 + -0x38) = uVar10;
          *(undefined8 *)((long)(puVar22 + lVar17 * 0x18 + -0x38) + 8) = uVar11;
          *(undefined8 *)(puVar22 + (long)(int)uVar23 * 0x18 + -0x1828) = uVar12;
          *(undefined8 *)(puVar22 + (long)(int)uVar23 * 0x18 + -0x1838) = uVar10;
          *(undefined8 *)((long)(puVar22 + (long)(int)uVar23 * 0x18 + -0x1838) + 8) = uVar11;
        }
        uVar25 = *(undefined8 *)(puVar22 + -0x1898);
        uVar27 = *(undefined8 *)(puVar22 + -0x1890);
        uVar23 = uVar19 + 1;
        uVar12 = *(undefined8 *)(puVar22 + -0x1888);
        lVar17 = (long)(int)uVar19 * 0x18;
        *(undefined8 *)(puVar22 + lVar17 + -0x1838) = uVar25;
        *(undefined8 *)(puVar22 + lVar17 + -0x1830) = uVar27;
        *(undefined8 *)(puVar22 + lVar17 + -0x1828) = uVar12;
      }
      else {
        uVar19 = uVar34 + 1;
        if (dVar42 < 0.0) {
          uVar20 = uVar19;
          if (0.0 < dVar41) {
            *(double *)(puVar22 + -0x18c0) = dVar39;
            *(double *)(puVar22 + -0x18c8) = dVar38;
            *(undefined8 *)(puVar22 + -0x18d0) = 0x10907d;
            fm_intersectPointPlane
                      ((double *)(puVar22 + -0x1898),(double *)(puVar22 + -0x18b8),
                       (double *)(puVar22 + -0x1878),(double *)(puVar22 + -0x1858));
            uVar10 = *(undefined8 *)(puVar22 + -0x1878);
            uVar11 = *(undefined8 *)(puVar22 + -0x1870);
            uVar12 = *(undefined8 *)(puVar22 + -0x1868);
            dVar38 = *(double *)(puVar22 + -0x18c8);
            *(undefined8 *)(puVar22 + (long)(int)uVar34 * 0x18 + -0x28) = uVar12;
            dVar39 = *(double *)(puVar22 + -0x18c0);
            uVar20 = uVar34 + 2;
            *(undefined8 *)(puVar22 + (long)(int)uVar34 * 0x18 + -0x38) = uVar10;
            *(undefined8 *)((long)(puVar22 + (long)(int)uVar34 * 0x18 + -0x38) + 8) = uVar11;
            lVar17 = (long)(int)uVar23;
            uVar23 = uVar23 + 1;
            *(undefined8 *)(puVar22 + lVar17 * 0x18 + -0x1828) = uVar12;
            *(undefined8 *)(puVar22 + lVar17 * 0x18 + -0x1838) = uVar10;
            *(undefined8 *)((long)(puVar22 + lVar17 * 0x18 + -0x1838) + 8) = uVar11;
            uVar34 = uVar19;
          }
          uVar25 = *(undefined8 *)(puVar22 + -0x1898);
          uVar27 = *(undefined8 *)(puVar22 + -0x1890);
          uVar12 = *(undefined8 *)(puVar22 + -0x1888);
          lVar17 = (long)(int)uVar34 * 0x18;
          *(undefined8 *)(puVar22 + lVar17 + -0x38) = uVar25;
          *(undefined8 *)(puVar22 + lVar17 + -0x30) = uVar27;
          *(undefined8 *)(puVar22 + lVar17 + -0x28) = uVar12;
          uVar34 = uVar20;
        }
        else {
          uVar25 = *(undefined8 *)(puVar22 + -0x1898);
          uVar27 = *(undefined8 *)(puVar22 + -0x1890);
          *(undefined8 *)(puVar22 + (long)(int)uVar34 * 0x18 + -0x28) = uVar12;
          *(undefined8 *)(puVar22 + (long)(int)uVar34 * 0x18 + -0x38) = uVar10;
          *(undefined8 *)((long)(puVar22 + (long)(int)uVar34 * 0x18 + -0x38) + 8) = uVar11;
          lVar17 = (long)(int)uVar23;
          uVar23 = uVar23 + 1;
          *(undefined8 *)(puVar22 + lVar17 * 0x18 + -0x1828) = uVar12;
          *(undefined8 *)(puVar22 + lVar17 * 0x18 + -0x1838) = uVar10;
          *(undefined8 *)((long)(puVar22 + lVar17 * 0x18 + -0x1838) + 8) = uVar11;
          uVar34 = uVar19;
        }
      }
      puVar30 = puVar30 + 0x18;
      *(undefined8 *)(puVar22 + -0x18b8) = uVar25;
      *(undefined8 *)(puVar22 + -0x18b0) = uVar27;
      *(undefined8 *)(puVar22 + -0x18a8) = uVar12;
      dVar41 = dVar42;
    } while (puVar33 != puVar30);
    if ((int)uVar23 < 1) {
      *(uint *)(puVar22 + 0x2fd8) = uVar23;
      if (0 < (int)uVar34) {
        *(uint **)(puVar22 + -0x18c0) = puVar28;
        *(uint **)(puVar22 + -0x18c8) = param_6;
        *(undefined8 *)(puVar22 + -0x18d0) = 0x109405;
        memcpy(puVar22 + 0x47f0,puVar22 + -0x38,(ulong)uVar34 * 0x18);
        param_6 = *(uint **)(puVar22 + -0x18c8);
        puVar28 = *(uint **)(puVar22 + -0x18c0);
        *(uint *)(puVar22 + 0x47e8) = uVar34;
        goto LAB_0010924c;
      }
      *(uint *)(puVar22 + 0x47e8) = uVar34;
    }
    else {
      *(uint **)(puVar22 + -0x18c0) = puVar28;
      *(uint **)(puVar22 + -0x18c8) = param_6;
      *(undefined8 *)(puVar22 + -0x18d0) = 0x1091cb;
      memcpy(puVar22 + 0x2fe0,puVar22 + -0x1838,(ulong)uVar23 * 0x18);
      param_6 = *(uint **)(puVar22 + -0x18c8);
      *(uint *)(puVar22 + 0x2fd8) = uVar23;
      puVar28 = *(uint **)(puVar22 + -0x18c0);
      if (0 < (int)uVar34) {
        *(uint **)(puVar22 + -0x18c0) = puVar28;
        *(uint **)(puVar22 + -0x18c8) = param_6;
        *(undefined8 *)(puVar22 + -0x18d0) = 0x109209;
        memcpy(puVar22 + 0x47f0,puVar22 + -0x38,(ulong)uVar34 * 0x18);
        param_6 = *(uint **)(puVar22 + -0x18c8);
        puVar28 = *(uint **)(puVar22 + -0x18c0);
      }
      *(uint *)(puVar22 + 0x47e8) = uVar34;
      iVar16 = 0;
      uVar14 = 0;
      puVar21 = (undefined8 *)(puVar22 + 0x2fe0);
      do {
        uVar12 = puVar21[1];
        iVar16 = iVar16 + 1;
        puVar13 = (undefined8 *)(uVar14 + (long)param_5);
        *puVar13 = *puVar21;
        puVar13[1] = uVar12;
        puVar13[2] = puVar21[2];
        uVar14 = (ulong)((int)uVar14 + param_3);
        puVar21 = puVar21 + 3;
      } while (iVar16 < (int)uVar23);
      *param_6 = uVar23;
      if (0 < (int)uVar34) {
LAB_0010924c:
        uVar23 = *puVar28;
        puVar13 = (undefined8 *)(puVar22 + 0x47e8);
        uVar19 = param_3 * uVar23;
        puVar21 = puVar13 + (long)(int)uVar34 * 3;
        do {
          puVar1 = puVar13 + 1;
          uVar12 = puVar13[2];
          uVar14 = (ulong)uVar19;
          puVar13 = puVar13 + 3;
          uVar19 = uVar19 + param_3;
          puVar18 = (undefined8 *)(uVar14 + (long)param_7);
          *puVar18 = *puVar1;
          puVar18[1] = uVar12;
          puVar18[2] = *puVar13;
        } while (puVar21 != puVar13);
        *puVar28 = uVar23 + uVar34;
      }
    }
    if (*param_6 < 3) {
      *param_6 = 0;
      cVar15 = '\x02';
      if (2 < *puVar28) goto LAB_00108da8;
LAB_001092a8:
      *puVar28 = 0;
      if (*param_6 != 0) goto LAB_00108d9f;
    }
    else if (*puVar28 < 3) goto LAB_001092a8;
    cVar15 = '\x03';
  }
  else {
    if (cVar15 != '\0' || cVar26 != '\0') {
      if (cVar26 == '\0') {
        cVar26 = cVar15;
        if (cVar15 != '\0') goto LAB_00109034;
      }
      else {
        if (cVar15 != '\0') goto LAB_00109027;
LAB_00109034:
        cVar15 = '\x02';
        if (cVar26 == '\x01') goto LAB_00108d39;
      }
LAB_001092e6:
      *param_7 = dVar42;
      pdVar29 = (double *)(uVar14 + (long)param_7);
      pdVar32 = (double *)(uVar31 + (long)param_7);
      param_7[1] = param_2[1];
      param_7[2] = param_2[2];
      *pdVar29 = *pdVar2;
      pdVar29[1] = pdVar2[1];
      pdVar29[2] = pdVar2[2];
      *pdVar32 = *pdVar24;
      pdVar32[1] = pdVar24[1];
      pdVar32[2] = pdVar24[2];
      *puVar28 = 3;
      goto LAB_00108da8;
    }
LAB_00108d39:
    *param_5 = dVar42;
    pdVar29 = (double *)(uVar14 + (long)param_5);
    pdVar32 = (double *)(uVar31 + (long)param_5);
    param_5[1] = param_2[1];
    param_5[2] = param_2[2];
    *pdVar29 = *pdVar2;
    pdVar29[1] = pdVar2[1];
    pdVar29[2] = pdVar2[2];
    *pdVar32 = *pdVar24;
    pdVar32[1] = pdVar24[1];
    pdVar32[2] = pdVar24[2];
    *param_6 = 3;
LAB_00108d9f:
    cVar15 = '\x01';
  }
LAB_00108da8:
  if (*(long *)(puVar22 + 0x5ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar22 + -0x18d0) = 0x109452;
    __stack_chk_fail();
  }
  return cVar15;
}



/* FLOAT_MATH::computeOBB(unsigned int, double const*, unsigned int, double*, double*) */

void FLOAT_MATH::computeOBB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  uint uVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_38 = 0.0;
    dVar7 = _LC72;
    dVar9 = _LC72;
    dVar10 = _LC72;
  }
  else {
    uVar1 = 0;
    dVar7 = _LC64;
    dVar8 = _LC64;
    dVar9 = _LC65;
    dVar11 = _LC64;
    dVar10 = _LC65;
    dVar12 = _LC65;
    do {
      uVar1 = uVar1 + 1;
      dVar5 = *param_2 - param_5[0xc];
      dVar2 = param_2[1] - param_5[0xd];
      dVar4 = param_2[2] - param_5[0xe];
      param_2 = (double *)((long)param_2 + (ulong)param_3);
      dVar13 = param_5[1] * dVar2 + *param_5 * dVar5 + param_5[2] * dVar4;
      dVar6 = param_5[4] * dVar5 + param_5[5] * dVar2 + param_5[6] * dVar4;
      dVar3 = dVar13;
      if (dVar13 <= dVar8) {
        dVar3 = dVar8;
      }
      dVar8 = dVar3;
      dVar3 = dVar4 * param_5[10] + dVar5 * param_5[8] + dVar2 * param_5[9];
      if (dVar9 <= dVar13) {
        dVar13 = dVar9;
      }
      dVar9 = dVar13;
      dVar13 = dVar6;
      if (dVar6 <= dVar11) {
        dVar13 = dVar11;
      }
      if (dVar12 <= dVar6) {
        dVar6 = dVar12;
      }
      dVar11 = dVar3;
      if (dVar3 <= dVar7) {
        dVar11 = dVar7;
      }
      dVar7 = dVar11;
      if (dVar10 <= dVar3) {
        dVar3 = dVar10;
      }
      dVar10 = dVar3;
      dVar11 = dVar13;
      dVar12 = dVar6;
    } while (uVar1 != param_1);
    local_48 = _LC50 * (dVar8 - dVar9) + dVar9;
    dStack_40 = _LC50 * (dVar13 - dVar6) + dVar6;
    local_38 = _LC50 * (dVar7 - dVar10) + dVar10;
    dVar7 = dVar7 - dVar10;
    dVar9 = dVar8 - dVar9;
    dVar10 = dVar13 - dVar6;
  }
  *param_4 = dVar9;
  param_4[1] = dVar10;
  param_4[2] = dVar7;
  fm_rotate(param_5,&local_48,&local_28);
  param_5[0xc] = param_5[0xc] + local_28;
  param_5[0xd] = param_5[0xd] + dStack_20;
  param_5[0xe] = param_5[0xe] + local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_computeBestFitABB(unsigned int, double const*, unsigned int, double*, double*) */

void FLOAT_MATH::fm_computeBestFitABB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = _LC50;
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar8 = param_2[2];
  dVar5 = dVar3;
  dVar6 = dVar4;
  dVar7 = dVar8;
  if (param_1 != 0) {
    uVar2 = 0;
    dVar9 = dVar8;
    dVar10 = dVar4;
    dVar11 = dVar4;
    do {
      dVar6 = *param_2;
      uVar2 = uVar2 + 1;
      dVar4 = dVar6;
      if (dVar6 <= dVar3) {
        dVar4 = dVar3;
      }
      dVar3 = dVar4;
      if (dVar5 <= dVar6) {
        dVar6 = dVar5;
      }
      dVar5 = dVar6;
      dVar6 = param_2[1];
      dVar4 = dVar6;
      if (dVar6 <= dVar11) {
        dVar4 = dVar11;
      }
      if (dVar10 <= dVar6) {
        dVar6 = dVar10;
      }
      dVar10 = param_2[2];
      param_2 = (double *)((long)param_2 + (ulong)param_3);
      dVar7 = dVar10;
      if (dVar10 <= dVar9) {
        dVar7 = dVar9;
      }
      if (dVar8 <= dVar10) {
        dVar10 = dVar8;
      }
      dVar8 = dVar10;
      dVar9 = dVar7;
      dVar10 = dVar6;
      dVar11 = dVar4;
    } while (param_1 != uVar2);
  }
  *param_4 = dVar3 - dVar5;
  param_4[1] = dVar4 - dVar6;
  param_4[2] = dVar7 - dVar8;
  *param_5 = (dVar3 - dVar5) * dVar1 + dVar5;
  param_5[1] = param_4[1] * dVar1 + dVar6;
  param_5[2] = dVar1 * param_4[2] + dVar8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_planeToMatrix(double const*, double*) */

void FLOAT_MATH::fm_planeToMatrix(double *param_1,double *param_2)

{
  double *extraout_RDX;
  long in_FS_OFFSET;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  local_a8 = __LC55;
  uStack_a0 = _LC54;
  fm_rotationArc(&local_a8,param_1,local_48);
  fm_quatToMatrix(local_48,param_2);
  local_78 = 0;
  local_88._8_8_ = 0;
  local_88._0_8_ = (ulong)param_1[3] ^ _LC95;
  local_88 = local_88 << 0x40;
  fm_transform(param_2,(double *)local_88,extraout_RDX);
  param_2[0xc] = local_68;
  param_2[0xd] = dStack_60;
  param_2[0xe] = local_58;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_planeToQuat(double const*, double*, double*) */

void FLOAT_MATH::fm_planeToQuat(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  long in_FS_OFFSET;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_c8 = __LC55;
  uStack_c0 = _LC54;
  fm_rotationArc(&local_c8,param_1,param_2);
  fm_quatToMatrix(param_2,&local_a8);
  dVar1 = param_1[3];
  param_3[2] = local_98 * 0.0 + local_78 * dVar1 + local_58 * 0.0 + local_38;
  *param_3 = local_a8 * 0.0 + dVar1 * local_88 + local_68 * 0.0 + local_48;
  param_3[1] = dStack_a0 * 0.0 + dVar1 * dStack_80 + dStack_60 * 0.0 + dStack_40;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_eulerMatrix(double, double, double, double*) */

void FLOAT_MATH::fm_eulerMatrix(double param_1,double param_2,double param_3,double *param_4)

{
  long in_FS_OFFSET;
  double adStack_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_eulerToQuat(param_1,param_2,param_3,adStack_48);
  fm_quatToMatrix(adStack_48,param_4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_computeBestFitAABB(unsigned int, double const*, unsigned int, double*, double*) */

double FLOAT_MATH::fm_computeBestFitAABB
                 (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  dVar3 = *param_2;
  *param_5 = dVar3;
  dVar4 = param_2[1];
  param_5[1] = dVar4;
  dVar2 = param_2[2];
  param_5[2] = dVar2;
  if (1 < param_1) {
    uVar1 = 1;
    do {
      param_2 = (double *)((long)param_2 + (ulong)param_3);
      if (*param_2 < *param_4) {
        *param_4 = *param_2;
      }
      if (param_2[1] < param_4[1]) {
        param_4[1] = param_2[1];
      }
      if (param_2[2] < param_4[2]) {
        param_4[2] = param_2[2];
      }
      dVar3 = *param_2;
      if (*param_5 <= dVar3 && dVar3 != *param_5) {
        *param_5 = dVar3;
      }
      dVar3 = param_2[1];
      if (param_5[1] <= dVar3 && dVar3 != param_5[1]) {
        param_5[1] = dVar3;
      }
      dVar3 = param_2[2];
      if (param_5[2] <= dVar3 && dVar3 != param_5[2]) {
        param_5[2] = dVar3;
      }
      uVar1 = uVar1 + 1;
    } while (param_1 != uVar1);
    dVar3 = *param_5;
    dVar4 = param_5[1];
    dVar2 = param_5[2];
  }
  return SQRT((dVar2 - param_4[2]) * (dVar2 - param_4[2]) +
              (dVar3 - *param_4) * (dVar3 - *param_4) + (dVar4 - param_4[1]) * (dVar4 - param_4[1]))
  ;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_rayIntersectsTriangle(double const*, double const*, double const*, double const*,
   double const*, double&) */

bool FLOAT_MATH::fm_rayIntersectsTriangle
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
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
  
  dVar17 = *param_3;
  dVar15 = param_3[1];
  dVar11 = param_3[2];
  dVar5 = *param_4 - dVar17;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar13 = param_5[1] - dVar15;
  dVar12 = param_5[2] - dVar11;
  dVar3 = *param_2;
  dVar9 = *param_5 - dVar17;
  dVar10 = param_4[1] - dVar15;
  dVar14 = param_4[2] - dVar11;
  dVar8 = dVar12 * dVar1 - dVar13 * dVar2;
  dVar6 = dVar9 * dVar2 - dVar12 * dVar3;
  dVar7 = dVar13 * dVar3 - dVar9 * dVar1;
  dVar16 = dVar10 * dVar6 + dVar5 * dVar8 + dVar14 * dVar7;
  if ((dVar16 <= __LC33) || (bVar4 = false, _LC34 <= dVar16)) {
    dVar16 = _LC54 / dVar16;
    dVar17 = *param_1 - dVar17;
    dVar15 = param_1[1] - dVar15;
    dVar11 = param_1[2] - dVar11;
    dVar6 = (dVar6 * dVar15 + dVar8 * dVar17 + dVar7 * dVar11) * dVar16;
    bVar4 = false;
    if ((0.0 <= dVar6) && (dVar6 <= _LC54)) {
      dVar7 = dVar14 * dVar15 - dVar10 * dVar11;
      dVar11 = dVar11 * dVar5 - dVar14 * dVar17;
      dVar15 = dVar10 * dVar17 - dVar5 * dVar15;
      dVar17 = (dVar3 * dVar7 + dVar1 * dVar11 + dVar2 * dVar15) * dVar16;
      bVar4 = false;
      if ((0.0 <= dVar17) && (dVar6 + dVar17 <= _LC54)) {
        dVar16 = (dVar9 * dVar7 + dVar13 * dVar11 + dVar12 * dVar15) * dVar16;
        *param_6 = dVar16;
        bVar4 = 0.0 < dVar16;
      }
    }
  }
  return bVar4;
}



/* FLOAT_MATH::fm_lineIntersectsTriangle(double const*, double const*, double const*, double const*,
   double const*, double*) */

undefined8
FLOAT_MATH::fm_lineIntersectsTriangle
          (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  dVar1 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = param_2[2] - param_1[2];
  dVar5 = *param_2 - dVar1;
  dVar6 = param_2[1] - param_1[1];
  dVar3 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
  dVar7 = _LC54 / dVar3;
  local_28 = dVar7 * dVar5;
  dStack_20 = dVar7 * dVar6;
  local_18 = dVar4 * dVar7;
  uVar2 = fm_rayIntersectsTriangle(param_1,&local_28,param_3,param_4,param_5,&local_30);
  if ((char)uVar2 != '\0') {
    if (local_30 <= dVar3) {
      uVar2 = 0;
    }
    else {
      *param_6 = dVar7 * dVar5 * local_30 + dVar1;
      param_6[1] = dVar7 * dVar6 * local_30 + param_1[1];
      param_6[2] = dVar4 * dVar7 * local_30 + param_1[2];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_computeMeshVolume(double const*, unsigned int, unsigned int const*) */

double FLOAT_MATH::fm_computeMeshVolume(double *param_1,uint param_2,uint *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint *puVar4;
  uint *puVar5;
  double dVar6;
  
  if (param_2 == 0) {
    return 0.0;
  }
  dVar6 = 0.0;
  puVar4 = param_3;
  do {
    puVar5 = puVar4 + 3;
    pdVar1 = param_1 + *puVar4 * 3;
    pdVar2 = param_1 + puVar4[2] * 3;
    pdVar3 = param_1 + puVar4[1] * 3;
    dVar6 = dVar6 + ((((*pdVar1 * pdVar3[1] * pdVar2[2] + *pdVar3 * pdVar2[1] * pdVar1[2] +
                       *pdVar2 * pdVar1[1] * pdVar3[2]) - *pdVar1 * pdVar2[1] * pdVar3[2]) -
                     *pdVar3 * pdVar1[1] * pdVar2[2]) - pdVar3[1] * *pdVar2 * pdVar1[2]);
    puVar4 = puVar5;
  } while (puVar5 != param_3 + (ulong)param_2 * 3);
  dVar6 = dVar6 * __LC75;
  if (0.0 <= dVar6) {
    return dVar6;
  }
  return (double)((ulong)dVar6 ^ _LC95);
}



/* FLOAT_MATH::fm_getPoint(double const*, unsigned int, unsigned int) */

long FLOAT_MATH::fm_getPoint(double *param_1,uint param_2,uint param_3)

{
  return (long)param_1 + (ulong)(param_2 * param_3);
}



/* FLOAT_MATH::fm_insideTriangle(double, double, double, double, double, double, double, double) */

bool FLOAT_MATH::fm_insideTriangle
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8)

{
  if ((0.0 <= (param_5 - param_3) * (param_8 - param_4) - (param_6 - param_4) * (param_7 - param_3))
     && (0.0 <= (param_1 - param_5) * (param_8 - param_6) -
                (param_2 - param_6) * (param_7 - param_5))) {
    return 0.0 <= (param_3 - param_1) * (param_8 - param_2) -
                  (param_4 - param_2) * (param_7 - param_1);
  }
  return false;
}



/* FLOAT_MATH::fm_areaPolygon2d(unsigned int, double const*, unsigned int) */

double FLOAT_MATH::fm_areaPolygon2d(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double *pdVar2;
  uint uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (0 < (int)param_1) {
    dVar5 = 0.0;
    uVar3 = 0;
    pdVar2 = (double *)((ulong)((param_1 - 1) * param_3) + (long)param_2);
    dVar7 = *pdVar2;
    uVar4 = 0;
    dVar6 = pdVar2[1];
    do {
      uVar3 = uVar3 + 1;
      dVar1 = ((double *)(uVar4 + (long)param_2))[1];
      dVar8 = dVar7 * dVar1;
      dVar7 = *(double *)(uVar4 + (long)param_2);
      dVar5 = dVar5 + (dVar8 - dVar6 * dVar7);
      uVar4 = (ulong)((int)uVar4 + param_3);
      dVar6 = dVar1;
    } while (param_1 != uVar3);
    return dVar5 * _LC50;
  }
  return 0.0;
}



/* FLOAT_MATH::fm_pointInsidePolygon2d(unsigned int, double const*, unsigned int, double const*,
   unsigned int, unsigned int) */

uint FLOAT_MATH::fm_pointInsidePolygon2d
               (uint param_1,double *param_2,uint param_3,double *param_4,uint param_5,uint param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  
  uVar9 = (ulong)param_5;
  uVar10 = (ulong)param_6;
  dVar1 = param_4[uVar10];
  if (param_1 != 0) {
    uVar5 = (param_1 - 1) * param_3;
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
    dVar11 = *(double *)((long)param_2 + uVar10 * 8 + (ulong)uVar5);
    dVar12 = *(double *)((long)param_2 + uVar9 * 8 + (ulong)uVar5);
    do {
      dVar2 = *(double *)((long)param_2 + uVar10 * 8 + (ulong)uVar8);
      dVar3 = *(double *)((long)param_2 + uVar9 * 8 + (ulong)uVar8);
      dVar4 = dVar11;
      if ((((dVar2 < dVar1) || (dVar4 = dVar2, dVar11 < dVar1)) && (dVar1 <= dVar4)) &&
         (((dVar1 - dVar2) / (dVar11 - dVar2)) * (dVar12 - dVar3) + dVar3 < param_4[uVar9])) {
        uVar6 = uVar6 ^ 1;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + param_3;
      dVar11 = dVar2;
      dVar12 = dVar3;
    } while (param_1 != uVar7);
    return uVar6;
  }
  return 0;
}



/* FLOAT_MATH::fm_consolidatePolygon(unsigned int, double const*, unsigned int, double*, double) */

undefined8
FLOAT_MATH::fm_consolidatePolygon
          (uint param_1,double *param_2,uint param_3,double *param_4,double param_5)

{
  undefined8 uVar1;
  
  if (2 < param_1) {
    uVar1 = fm_consolidatePolygon(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}



/* FLOAT_MATH::splitRect(unsigned int, FLOAT_MATH::Rect3d<double> const&,
   FLOAT_MATH::Rect3d<double>&, FLOAT_MATH::Rect3d<double>&, double const*) */

void FLOAT_MATH::splitRect
               (uint param_1,Rect3d *param_2,Rect3d *param_3,Rect3d *param_4,double *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  
  if (param_1 == 1) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    dVar4 = param_5[1];
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_3 + 0x18) = uVar2;
    *(double *)(param_3 + 0x20) = dVar4;
    *(undefined8 *)(param_3 + 0x28) = uVar5;
    dVar4 = param_5[1];
    *(undefined8 *)param_4 = uVar1;
    *(double *)(param_4 + 8) = dVar4;
    *(undefined8 *)(param_4 + 0x10) = uVar3;
  }
  else if (param_1 == 2) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)param_3 = uVar1;
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 8) = uVar5;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    dVar4 = param_5[2];
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    *(undefined8 *)(param_3 + 0x20) = uVar2;
    *(double *)(param_3 + 0x28) = dVar4;
    dVar4 = param_5[2];
    *(undefined8 *)param_4 = uVar1;
    *(undefined8 *)(param_4 + 8) = uVar5;
    *(double *)(param_4 + 0x10) = dVar4;
  }
  else {
    if (param_1 != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 8) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    dVar4 = *param_5;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_3 + 0x28) = uVar1;
    *(double *)(param_3 + 0x18) = dVar4;
    *(undefined8 *)(param_3 + 0x20) = uVar5;
    dVar4 = *param_5;
    *(undefined8 *)(param_4 + 8) = uVar2;
    *(double *)param_4 = dVar4;
    *(undefined8 *)(param_4 + 0x10) = uVar3;
  }
  *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* FLOAT_MATH::fm_nearestPointInTriangle(double const*, double const*, double const*, double const*,
   double*) */

void FLOAT_MATH::fm_nearestPointInTriangle
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  return;
}



/* FLOAT_MATH::fm_areaTriangle(double const*, double const*, double const*) */

double FLOAT_MATH::fm_areaTriangle(double *param_1,double *param_2,double *param_3)

{
  return ((param_2[1] * *param_1 - *param_2 * param_1[1]) +
          (param_3[1] * *param_2 - *param_3 * param_2[1]) +
         (*param_3 * param_1[1] - param_3[1] * *param_1)) * _LC50;
}



/* FLOAT_MATH::fm_subtract(double const*, double const*, double*) */

void FLOAT_MATH::fm_subtract(double *param_1,double *param_2,double *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}



/* FLOAT_MATH::fm_multiplyTransform(double const*, double const*, double*) */

void FLOAT_MATH::fm_multiplyTransform(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  dVar1 = param_1[9];
  dVar2 = param_1[8];
  dVar3 = param_1[6];
  dVar4 = param_1[7];
  dVar5 = param_1[10];
  dVar6 = param_1[0xb];
  dVar7 = param_1[1];
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar10 = param_1[2];
  dVar11 = param_1[3];
  dVar12 = param_1[0xc];
  dVar13 = *param_1;
  dVar14 = param_2[4];
  dVar15 = param_2[5];
  dVar16 = param_1[5];
  dVar17 = param_1[0xd];
  dVar18 = param_2[2];
  dVar19 = param_2[3];
  dVar20 = param_2[8];
  dVar21 = param_2[9];
  dVar22 = param_1[0xe];
  dVar23 = param_1[0xf];
  dVar24 = param_2[6];
  dVar25 = param_2[7];
  dVar26 = param_2[0xe];
  dVar27 = param_2[0xf];
  dVar28 = param_1[4];
  dVar29 = param_2[0xc];
  dVar30 = param_2[0xd];
  dVar31 = param_2[10];
  dVar32 = param_2[0xb];
  *param_3 = dVar10 * dVar20 + dVar7 * dVar14 + dVar13 * dVar8 + dVar11 * dVar29;
  param_3[1] = dVar10 * dVar21 + dVar7 * dVar15 + dVar13 * dVar9 + dVar11 * dVar30;
  param_3[2] = dVar10 * dVar31 + dVar7 * dVar24 + dVar13 * dVar18 + dVar11 * dVar26;
  param_3[3] = dVar10 * dVar32 + dVar7 * dVar25 + dVar13 * dVar19 + dVar11 * dVar27;
  param_3[4] = dVar3 * dVar20 + dVar16 * dVar14 + dVar28 * dVar8 + dVar4 * dVar29;
  param_3[5] = dVar3 * dVar21 + dVar16 * dVar15 + dVar28 * dVar9 + dVar4 * dVar30;
  param_3[6] = dVar3 * dVar31 + dVar16 * dVar24 + dVar28 * dVar18 + dVar4 * dVar26;
  param_3[7] = dVar3 * dVar32 + dVar16 * dVar25 + dVar28 * dVar19 + dVar4 * dVar27;
  param_3[8] = dVar5 * dVar20 + dVar1 * dVar14 + dVar2 * dVar8 + dVar6 * dVar29;
  param_3[9] = dVar5 * dVar21 + dVar1 * dVar15 + dVar2 * dVar9 + dVar6 * dVar30;
  param_3[10] = dVar2 * dVar18 + dVar1 * dVar24 + dVar5 * dVar31 + dVar6 * dVar26;
  param_3[0xb] = dVar2 * dVar19 + dVar1 * dVar25 + dVar5 * dVar32 + dVar6 * dVar27;
  param_3[0xc] = dVar29 * dVar23 + dVar8 * dVar12 + dVar14 * dVar17 + dVar20 * dVar22;
  param_3[0xd] = dVar30 * dVar23 + dVar9 * dVar12 + dVar15 * dVar17 + dVar21 * dVar22;
  param_3[0xe] = dVar12 * dVar18 + dVar17 * dVar24 + dVar22 * dVar31 + dVar23 * dVar26;
  param_3[0xf] = dVar12 * dVar19 + dVar17 * dVar25 + dVar22 * dVar32 + dVar23 * dVar27;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_composeTransform(double const*, double const*, double const*, double*) */

void FLOAT_MATH::fm_composeTransform
               (double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98 [6];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  long local_10;
  
  dVar3 = _LC56;
  dVar2 = _LC54;
  dVar1 = __LC55;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_4 + 2) = (undefined1  [16])0x0;
  *param_4 = dVar3;
  param_4[1] = 0.0;
  param_4[4] = dVar1;
  param_4[5] = dVar2;
  *(undefined1 (*) [16])(param_4 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_4 + 8) = (undefined1  [16])0x0;
  param_4[10] = dVar3;
  param_4[0xb] = 0.0;
  *(undefined1 (*) [16])(param_4 + 0xc) = (undefined1  [16])0x0;
  param_4[0xe] = dVar1;
  param_4[0xf] = dVar2;
  auVar6 = fm_quatToMatrix(param_2,param_4);
  pdVar5 = auVar6._8_8_;
  pdVar4 = auVar6._0_8_;
  if ((pdVar5 != (double *)0x0) &&
     (((*pdVar5 != _LC54 || (_LC54 != pdVar5[1])) || (_LC54 != pdVar5[2])))) {
    local_118 = *param_4;
    dStack_110 = param_4[1];
    local_108 = param_4[2];
    dStack_100 = param_4[3];
    local_20 = _LC54;
    local_f8 = param_4[4];
    dStack_f0 = param_4[5];
    local_48 = pdVar5[2];
    local_98[4] = 0.0;
    local_e8 = param_4[6];
    dStack_e0 = param_4[7];
    local_d8 = param_4[8];
    dStack_d0 = param_4[9];
    local_98[5] = pdVar5[1];
    local_c8 = param_4[10];
    dStack_c0 = param_4[0xb];
    local_b8 = param_4[0xc];
    dStack_b0 = param_4[0xd];
    local_a8 = param_4[0xe];
    dStack_a0 = param_4[0xf];
    local_58 = 0;
    local_38 = 0;
    local_98[1] = 0.0;
    local_50 = 0;
    local_30 = 0;
    local_98[2] = 0.0;
    local_68 = 0;
    local_28 = 0;
    local_98[3] = 0.0;
    local_60 = 0;
    local_40 = 0;
    local_98[0] = *pdVar5;
    pdVar4 = (double *)fm_multiplyTransform(&local_118,local_98,param_4);
  }
  param_4[0xc] = *pdVar4;
  param_4[0xd] = pdVar4[1];
  param_4[0xe] = pdVar4[2];
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_matrixMultiply(double const*, double const*, double*) */

void FLOAT_MATH::fm_matrixMultiply(double *param_1,double *param_2,double *param_3)

{
  fm_multiplyTransform(param_1,param_2,param_3);
  return;
}



/* FLOAT_MATH::fm_multiply(double*, double) */

void FLOAT_MATH::fm_multiply(double *param_1,double param_2)

{
  param_1[2] = param_2 * param_1[2];
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  return;
}



/* FLOAT_MATH::fm_add(double const*, double const*, double*) */

void FLOAT_MATH::fm_add(double *param_1,double *param_2,double *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}



/* FLOAT_MATH::fm_copy3(double const*, double*) */

void FLOAT_MATH::fm_copy3(double *param_1,double *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}



/* FLOAT_MATH::fm_copyUniqueVertices(unsigned int, double const*, double*, unsigned int, unsigned
   int const*, unsigned int*) */

uint FLOAT_MATH::fm_copyUniqueVertices
               (uint param_1,double *param_2,double *param_3,uint param_4,uint *param_5,
               uint *param_6)

{
  double *pdVar1;
  size_t __size;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *__ptr;
  void *__ptr_00;
  long lVar5;
  size_t __size_00;
  uint uVar6;
  
  __size_00 = (ulong)param_1 * 0x18;
  __ptr = malloc(__size_00);
  __size = (ulong)param_1 * 4;
  __memcpy_chk(__ptr,param_2,__size_00,__size_00);
  __ptr_00 = malloc(__size);
  __memset_chk(__ptr_00,0xff,__size,__size);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        uVar3 = param_5[lVar5];
        puVar2 = (uint *)((long)__ptr_00 + (ulong)uVar3 * 4);
        uVar4 = *puVar2;
        if (uVar4 != 0xffffffff) break;
        param_6[lVar5] = uVar6;
        lVar5 = lVar5 + 1;
        pdVar1 = (double *)((long)__ptr + (ulong)(uVar3 * 3) * 8);
        *puVar2 = uVar6;
        uVar6 = uVar6 + 1;
        *param_3 = *pdVar1;
        param_3[1] = pdVar1[1];
        param_3[2] = pdVar1[2];
        param_3 = param_3 + 3;
        if (param_4 * 3 <= (uint)lVar5) goto LAB_0010a99c;
      }
      param_6[lVar5] = uVar4;
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < param_4 * 3);
  }
LAB_0010a99c:
  free(__ptr);
  free(__ptr_00);
  return uVar6;
}



/* FLOAT_MATH::fm_isMeshCoplanar(unsigned int, unsigned int const*, double const*, bool) */

undefined8 FLOAT_MATH::fm_isMeshCoplanar(uint param_1,uint *param_2,double *param_3,bool param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  double *pdVar5;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  double dVar6;
  double extraout_XMM0_Qa_00;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  long local_10;
  
  uVar3 = (ulong)param_4;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 1;
  if (param_1 != 0) {
    puVar2 = (uint *)fm_computePlane(param_3 + *param_2 * 3,param_3 + param_2[1] * 3,
                                     param_3 + param_2[2] * 3,&local_58);
    local_40 = extraout_XMM0_Qa;
    if (param_1 != 1) {
      puVar4 = param_2 + (ulong)(param_1 - 2) * 3 + 6;
      pdVar5 = &local_38;
      dVar8 = _LC59;
      dVar9 = _LC76;
      dVar10 = _LC77;
      dVar11 = extraout_XMM0_Qa;
      uVar7 = _LC58;
      do {
        puVar2 = (uint *)fm_computePlane(param_3 + *puVar2 * 3,param_3 + puVar2[1] * 3,
                                         param_3 + puVar2[2] * 3,pdVar5);
        if (dVar8 <= (double)((ulong)(dVar11 - extraout_XMM0_Qa_00) & uVar7)) {
LAB_0010ab31:
          uVar1 = 0;
          goto LAB_0010a9f8;
        }
        dVar6 = local_58 * local_38 + local_50 * local_30 + local_48 * local_28;
        if ((char)uVar3 != '\0') {
          dVar6 = (double)((ulong)dVar6 & uVar7);
        }
        if ((dVar6 < dVar9) || (dVar10 < dVar6)) goto LAB_0010ab31;
      } while (puVar2 != puVar4);
    }
    uVar1 = 1;
  }
LAB_0010a9f8:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* FLOAT_MATH::fm_samePlane(double const*, double const*, double, double, bool) */

bool FLOAT_MATH::fm_samePlane
               (double *param_1,double *param_2,double param_3,double param_4,bool param_5)

{
  double dVar1;
  
  if ((double)((ulong)(param_1[3] - param_2[3]) & _LC58) < param_4) {
    dVar1 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
    if (param_5) {
      dVar1 = (double)((ulong)dVar1 & _LC58);
    }
    if (_LC54 - param_3 <= dVar1) {
      return dVar1 <= _LC54 + param_3;
    }
  }
  return false;
}



/* FLOAT_MATH::fm_initMinMax(double*, double*) */

void FLOAT_MATH::fm_initMinMax(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = _LC79;
  param_1[2] = _LC79;
  dVar2 = _LC81;
  *param_1 = dVar1;
  param_1[1] = dVar1;
  dVar1 = _LC81;
  param_2[2] = dVar2;
  *param_2 = dVar1;
  param_2[1] = dVar1;
  return;
}



/* FLOAT_MATH::fm_inflateMinMax(double*, double*, double) */

void FLOAT_MATH::fm_inflateMinMax(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = param_1[2] - param_2[2];
  dVar1 = SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
               (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) + dVar1 * dVar1) * _LC50 *
          param_3;
  param_1[2] = param_1[2] - dVar1;
  *param_1 = *param_1 - dVar1;
  param_1[1] = param_1[1] - dVar1;
  param_2[2] = dVar1 + param_2[2];
  *param_2 = *param_2 + dVar1;
  param_2[1] = param_2[1] + dVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_computeBestFitSphere(unsigned int, double const*, unsigned int, double*) */

double FLOAT_MATH::fm_computeBestFitSphere
                 (uint param_1,double *param_2,uint param_3,double *param_4)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
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
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  dVar1 = _LC50;
  dVar6 = _LC83;
  dVar8 = _LC82;
  local_40 = _UNK_001115f8;
  dVar13 = _LC82;
  dVar11 = _LC82;
  dVar10 = _UNK_001115f8;
  dVar15 = _LC83;
  dVar16 = _UNK_00111608;
  dVar7 = _LC83;
  dVar12 = _UNK_00111608;
  dVar18 = _LC84;
  dVar19 = _LC83;
  dVar21 = _LC84;
  dVar20 = _LC82;
  if (param_1 != 0) {
    uVar4 = 0;
    local_40 = _LC83;
    local_38 = _LC82;
    local_28 = _LC83;
    local_30 = _LC83;
    pdVar3 = param_2;
    dVar5 = _LC82;
    dVar9 = _LC83;
    dVar10 = _LC83;
    dVar12 = _LC82;
    dVar14 = _LC82;
    dVar16 = _LC82;
    do {
      dVar18 = *pdVar3;
      dVar21 = pdVar3[1];
      dVar17 = pdVar3[2];
      if (dVar18 < dVar9) {
        dVar9 = dVar18;
        local_30 = dVar17;
        local_28 = dVar21;
      }
      if (dVar14 < dVar18) {
        dVar5 = dVar17;
        dVar14 = dVar18;
        local_38 = dVar21;
      }
      if (dVar21 < dVar10) {
        dVar10 = dVar21;
        dVar7 = dVar18;
        dVar19 = dVar17;
      }
      if (dVar12 < dVar21) {
        dVar12 = dVar21;
        dVar11 = dVar18;
        dVar20 = dVar17;
      }
      if (dVar17 < dVar6) {
        dVar6 = dVar17;
        dVar15 = dVar18;
        local_40 = dVar21;
      }
      if (dVar13 < dVar17) {
        dVar13 = dVar17;
        dVar16 = dVar21;
        dVar8 = dVar18;
      }
      uVar4 = uVar4 + 1;
      pdVar3 = (double *)((long)pdVar3 + (ulong)param_3);
    } while (param_1 != uVar4);
    dVar17 = (dVar5 - local_30) * (dVar5 - local_30) +
             (dVar14 - dVar9) * (dVar14 - dVar9) + (local_38 - local_28) * (local_38 - local_28);
    dVar18 = (dVar20 - dVar19) * (dVar20 - dVar19) +
             (dVar11 - dVar7) * (dVar11 - dVar7) + (dVar12 - dVar10) * (dVar12 - dVar10);
    dVar21 = (dVar8 - dVar15) * (dVar8 - dVar15) + (dVar16 - local_40) * (dVar16 - local_40) +
             (dVar13 - dVar6) * (dVar13 - dVar6);
    if (dVar18 <= dVar17) {
      dVar11 = dVar14;
      dVar10 = local_28;
      dVar7 = dVar9;
      dVar12 = local_38;
      dVar18 = dVar17;
      dVar19 = local_30;
      dVar20 = dVar5;
    }
  }
  if (dVar21 <= dVar18) {
    dVar6 = dVar19;
    dVar8 = dVar11;
    local_40 = dVar10;
    dVar13 = dVar20;
    dVar15 = dVar7;
    dVar16 = dVar12;
  }
  dVar6 = (dVar6 + dVar13) * _LC50;
  dVar10 = (dVar15 + dVar8) * _LC50;
  dVar11 = (dVar16 + local_40) * _LC50;
  param_4[2] = dVar6;
  *param_4 = dVar10;
  param_4[1] = dVar11;
  dVar12 = _LC54;
  dVar8 = (dVar8 - dVar10) * (dVar8 - dVar10) + (dVar16 - dVar11) * (dVar16 - dVar11) +
          (dVar13 - dVar6) * (dVar13 - dVar6);
  dVar13 = SQRT(dVar8);
  if (param_1 != 0) {
    iVar2 = 0;
    while( true ) {
      dVar15 = *param_2;
      dVar16 = param_2[1];
      pdVar3 = param_2 + 2;
      dVar18 = dVar16 - dVar11;
      dVar7 = *pdVar3 - dVar6;
      dVar7 = dVar7 * dVar7 + (*param_2 - dVar10) * (*param_2 - dVar10) + dVar18 * dVar18;
      if (dVar8 < dVar7) {
        dVar7 = SQRT(dVar7);
        param_2 = (double *)((long)param_2 + (ulong)param_3);
        dVar18 = dVar12 / dVar7;
        dVar13 = (dVar13 + dVar7) * dVar1;
        dVar7 = dVar7 - dVar13;
        dVar8 = dVar13 * dVar13;
        param_4[2] = (dVar6 * dVar13 + *pdVar3 * dVar7) * dVar18;
        *param_4 = (dVar7 * dVar15 + dVar10 * dVar13) * dVar18;
        param_4[1] = (dVar7 * dVar16 + dVar11 * dVar13) * dVar18;
      }
      if (param_1 == iVar2 + 1U) break;
      iVar2 = iVar2 + 1;
      dVar10 = *param_4;
      dVar11 = param_4[1];
      dVar6 = param_4[2];
    }
  }
  return dVar13;
}



/* FLOAT_MATH::validDistance(double const*, double const*, double) */

bool FLOAT_MATH::validDistance(double *param_1,double *param_2,double param_3)

{
  return param_3 * param_3 <=
         (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
}



/* FLOAT_MATH::fm_isValidTriangle(double const*, double const*, double const*, double) */

undefined1
FLOAT_MATH::fm_isValidTriangle(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double *pdVar2;
  undefined1 uVar3;
  char cVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  long in_FS_OFFSET;
  double dVar11;
  double extraout_XMM0_Qa;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_698;
  double dStack_690;
  double local_688;
  double local_680;
  double dStack_678;
  double local_670;
  double local_668;
  double local_660;
  double local_658;
  double local_648 [193];
  long local_40;
  
  dVar17 = *param_1;
  dVar18 = param_1[1];
  dVar15 = *param_2;
  dVar16 = param_2[1];
  dVar1 = param_1[2];
  dVar14 = param_2[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  dVar11 = *param_1 - *param_2;
  dVar13 = param_4 * param_4;
  if (dVar13 <= dVar11 * dVar11 + (dVar18 - dVar16) * (dVar18 - dVar16) +
                (dVar1 - dVar14) * (dVar1 - dVar14)) {
    dVar11 = *param_3;
    dVar19 = param_3[1];
    dVar20 = param_3[2];
    dVar12 = *param_1 - dVar11;
    if (((dVar13 <= dVar12 * dVar12 + (dVar18 - dVar19) * (dVar18 - dVar19) +
                    (dVar1 - dVar20) * (dVar1 - dVar20)) &&
        (dVar12 = *param_2 - dVar11,
        dVar13 <= dVar12 * dVar12 + (dVar16 - dVar19) * (dVar16 - dVar19) +
                  (dVar14 - dVar20) * (dVar14 - dVar20))) &&
       (uVar3 = fm_computeArea(param_1,param_2,param_3), param_4 < extraout_XMM0_Qa)) {
      iVar9 = 0;
      iVar6 = 0;
      pdVar10 = &local_680;
      pdVar8 = local_648;
      dVar13 = _LC54 - param_4;
      pdVar2 = &local_698;
      pdVar7 = &local_668;
      local_698 = dVar17;
      dStack_690 = dVar18;
      local_688 = dVar1;
      local_680 = dVar15;
      dStack_678 = dVar16;
      local_670 = dVar14;
      local_668 = dVar11;
      local_660 = dVar19;
      local_658 = dVar20;
      do {
        pdVar5 = pdVar2;
        iVar6 = iVar6 + 1;
        if (iVar6 == 3) {
          cVar4 = fm_colinear(pdVar7,pdVar5,&local_698,dVar13);
          pdVar10 = &local_698;
          if (cVar4 != '\0') goto LAB_0010b330;
LAB_0010b303:
          dVar14 = pdVar5[1];
          iVar9 = iVar9 + 1;
          dVar1 = pdVar5[2];
          *pdVar8 = *pdVar5;
          pdVar8[1] = dVar14;
          pdVar8[2] = dVar1;
          pdVar8 = pdVar8 + 3;
          if (iVar6 == 3) goto LAB_0010b330;
        }
        else {
          cVar4 = fm_colinear(pdVar7,pdVar5,pdVar10,dVar13);
          if (cVar4 == '\0') goto LAB_0010b303;
        }
        pdVar10 = pdVar10 + 3;
        pdVar2 = pdVar5 + 3;
        pdVar7 = pdVar5;
      } while( true );
    }
  }
LAB_0010b205:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_0010b330:
  uVar3 = iVar9 == 3;
  goto LAB_0010b205;
}



/* FLOAT_MATH::fm_multiplyQuat(double const*, double const*, double*) */

void FLOAT_MATH::fm_multiplyQuat(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = param_1[2];
  dVar2 = param_1[3];
  dVar3 = param_2[2];
  dVar4 = param_2[3];
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar7 = *param_2;
  dVar8 = param_2[1];
  *param_3 = (dVar4 * dVar5 + dVar2 * dVar7 + dVar3 * dVar6) - dVar8 * dVar1;
  param_3[1] = (dVar4 * dVar6 + dVar2 * dVar8 + dVar7 * dVar1) - dVar3 * dVar5;
  param_3[2] = (dVar2 * dVar3 + dVar4 * dVar1 + dVar8 * dVar5) - dVar7 * dVar6;
  param_3[3] = ((dVar2 * dVar4 - dVar7 * dVar5) - dVar8 * dVar6) - dVar3 * dVar1;
  return;
}



/* FLOAT_MATH::fm_computeCentroid(unsigned int, double const*, double*) */

undefined8 FLOAT_MATH::fm_computeCentroid(uint param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = 0;
  if (param_1 != 0) {
    param_3[2] = 0.0;
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    pdVar2 = param_2;
    dVar6 = dVar5;
    do {
      dVar6 = dVar6 + *pdVar2;
      pdVar3 = pdVar2 + 3;
      *param_3 = dVar6;
      dVar5 = dVar5 + pdVar2[1];
      param_3[1] = dVar5;
      dVar4 = dVar4 + pdVar2[2];
      param_3[2] = dVar4;
      pdVar2 = pdVar3;
    } while (param_2 + (ulong)param_1 * 3 != pdVar3);
    uVar1 = 1;
    dVar7 = _LC54 / (double)param_1;
    *param_3 = dVar6 * dVar7;
    param_3[1] = dVar5 * dVar7;
    param_3[2] = dVar4 * dVar7;
  }
  return uVar1;
}



/* FLOAT_MATH::fm_computeCentroid(unsigned int, double const*, unsigned int, unsigned int const*,
   double*) */

undefined8
FLOAT_MATH::fm_computeCentroid
          (uint param_1,double *param_2,uint param_3,uint *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  ulong uVar5;
  double extraout_XMM0_Qa;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (param_1 != 0) {
    param_5[2] = 0.0;
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    if (param_3 == 0) {
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar12 = 0.0;
      dVar15 = dVar12;
    }
    else {
      dVar15 = 0.0;
      uVar5 = (ulong)(param_3 * 3);
      dVar13 = 0.0;
      dVar14 = 0.0;
      uVar4 = 0;
      dVar12 = 0.0;
      dVar7 = _LC66;
      dVar8 = _LC66;
      dVar9 = _LC66;
      do {
        pdVar1 = param_2 + param_4[uVar4] * 3;
        pdVar2 = param_2 + param_4[uVar4 + 1] * 3;
        pdVar3 = param_2 + param_4[uVar4 + 2] * 3;
        auVar10._0_8_ = *pdVar2 + *pdVar1 + *pdVar3;
        auVar10._8_8_ = pdVar2[1] + pdVar1[1] + pdVar3[1];
        dVar6 = (pdVar1[2] + pdVar2[2] + pdVar3[2]) / dVar7;
        auVar11._8_8_ = dVar9;
        auVar11._0_8_ = dVar8;
        auVar11 = divpd(auVar10,auVar11);
        uVar4 = fm_computeArea(pdVar1,pdVar2,pdVar3);
        dVar15 = dVar15 + extraout_XMM0_Qa;
        dVar12 = dVar12 + dVar6 * extraout_XMM0_Qa;
        dVar13 = dVar13 + extraout_XMM0_Qa * auVar11._0_8_;
        dVar14 = dVar14 + extraout_XMM0_Qa * auVar11._8_8_;
      } while (uVar4 != (uint)uVar5);
    }
    dVar15 = _LC54 / dVar15;
    param_5[2] = dVar15 * dVar12;
    *param_5 = dVar15 * dVar13;
    param_5[1] = dVar15 * dVar14;
    return 1;
  }
  return 0;
}



/* FLOAT_MATH::fm_transformAABB(double const*, double const*, double const*, double*, double*) */

void FLOAT_MATH::fm_transformAABB
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  long in_FS_OFFSET;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  double local_20;
  long local_10;
  
  pdVar13 = &local_d8;
  local_c8 = param_1[2];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_2[1];
  dStack_78 = *param_1;
  local_d8 = *param_1;
  dStack_d0 = param_1[1];
  dStack_a8 = *param_2;
  local_20 = param_2[2];
  dStack_b8 = param_1[1];
  local_b0 = local_c8;
  local_c0 = dStack_a8;
  local_80 = local_c8;
  dStack_98 = local_c8;
  local_90 = dStack_78;
  dStack_88 = local_a0;
  local_70 = dStack_b8;
  dStack_68 = local_20;
  local_60 = dStack_a8;
  dStack_58 = dStack_b8;
  local_50 = local_20;
  dStack_48 = dStack_a8;
  local_40 = local_a0;
  dStack_38 = local_20;
  local_30 = dStack_78;
  dStack_28 = local_a0;
  pdVar12 = &local_d8;
  if (param_3 != (double *)0x0) {
    iVar14 = 0;
    while( true ) {
      dVar7 = pdVar13[1];
      dVar1 = *pdVar13;
      dVar8 = param_3[6];
      dVar9 = param_3[2];
      dVar10 = param_3[10];
      dVar11 = param_3[0xe];
      dVar2 = *param_3;
      dVar3 = pdVar13[1];
      dVar4 = param_3[4];
      dVar5 = pdVar13[2];
      dVar6 = param_3[8];
      pdVar13[1] = param_3[5] * dVar7 + dVar1 * param_3[1] + pdVar13[2] * param_3[9] + param_3[0xd];
      pdVar13[2] = dVar8 * dVar7 + dVar1 * dVar9 + pdVar13[2] * dVar10 + dVar11;
      *pdVar13 = dVar1 * dVar2 + dVar3 * dVar4 + dVar5 * dVar6 + param_3[0xc];
      pdVar12 = pdVar13;
      if (iVar14 == 0) break;
      do {
        dVar1 = *pdVar13;
        if (dVar1 < *param_4) {
          *param_4 = dVar1;
        }
        dVar2 = pdVar13[1];
        if (dVar2 < param_4[1]) {
          param_4[1] = dVar2;
        }
        dVar3 = pdVar13[2];
        if (dVar3 < param_4[2]) {
          param_4[2] = dVar3;
        }
        if (*param_5 <= dVar1 && dVar1 != *param_5) {
          *param_5 = dVar1;
        }
        if (param_5[1] <= dVar2 && dVar2 != param_5[1]) {
          param_5[1] = dVar2;
        }
        if (param_5[2] <= dVar3 && dVar3 != param_5[2]) {
          param_5[2] = dVar3;
        }
        iVar14 = iVar14 + 1;
        pdVar12 = pdVar13;
        if (iVar14 == 8) {
          if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
LAB_0010b711:
        pdVar13 = pdVar12 + 3;
      } while (param_3 == (double *)0x0);
    }
  }
  iVar14 = 1;
  *param_5 = local_d8;
  *param_4 = local_d8;
  param_5[1] = dStack_d0;
  param_4[1] = dStack_d0;
  param_5[2] = local_c8;
  param_4[2] = local_c8;
  goto LAB_0010b711;
}



/* FLOAT_MATH::fm_normalizeQuat(double*) */

void FLOAT_MATH::fm_normalizeQuat(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *param_1 * *param_1;
  dVar1 = param_1[1] * param_1[1];
  dVar4 = param_1[2] * param_1[2];
  dVar3 = param_1[3] * param_1[3];
  dVar1 = _LC54 / SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3);
  *param_1 = *param_1 * dVar1;
  param_1[1] = param_1[1] * dVar1;
  param_1[2] = dVar1 * param_1[2];
  param_1[3] = dVar1 * param_1[3];
  return;
}



/* FLOAT_MATH::fm_computeBestFitPlane(unsigned int, float const*, unsigned int, float const*,
   unsigned int, float*, float*) */

undefined8
FLOAT_MATH::fm_computeBestFitPlane
          (uint param_1,float *param_2,uint param_3,float *param_4,uint param_5,float *param_6,
          float *param_7)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
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
  float fVar19;
  float fVar20;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  long local_20;
  
  fVar2 = _LC3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    fVar12 = (_LC3 / 0.0) * 0.0;
    param_7[2] = fVar12;
    *(ulong *)param_7 = CONCAT44(fVar12,fVar12);
    fVar13 = fVar12;
    local_64 = fVar12;
    local_60 = fVar12;
    local_54 = fVar12;
    local_68 = fVar12;
    local_58 = fVar12;
    local_48 = fVar12;
    fVar14 = fVar12;
  }
  else {
    fVar14 = 0.0;
    fVar12 = 0.0;
    fVar9 = 0.0;
    pfVar3 = param_2;
    pfVar4 = param_4;
    fVar13 = fVar12;
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      fVar16 = _LC3;
      if (pfVar4 != (float *)0x0) {
        fVar16 = *pfVar4;
        pfVar4 = (float *)((long)pfVar4 + (ulong)param_5);
      }
      uVar6 = uVar5 + 1;
      fVar9 = fVar9 + fVar16;
      fVar12 = fVar12 + *pfVar3 * fVar16;
      fVar13 = fVar13 + pfVar3[1] * fVar16;
      pfVar1 = pfVar3 + 2;
      pfVar3 = (float *)((long)pfVar3 + (ulong)param_3);
      fVar14 = fVar14 + *pfVar1 * fVar16;
    } while (param_1 != uVar6);
    fVar20 = 0.0;
    fVar9 = _LC3 / fVar9;
    fVar17 = 0.0;
    fVar15 = 0.0;
    fVar12 = fVar12 * fVar9;
    fVar13 = fVar13 * fVar9;
    fVar14 = fVar14 * fVar9;
    *param_7 = fVar12;
    param_7[1] = fVar13;
    param_7[2] = fVar14;
    fVar16 = fVar15;
    fVar18 = fVar15;
    fVar19 = fVar17;
    uVar6 = 0;
    do {
      fVar8 = fVar2;
      if (param_4 != (float *)0x0) {
        fVar8 = *param_4;
        param_4 = (float *)((long)param_4 + (ulong)param_5);
      }
      fVar10 = *param_2;
      pfVar3 = param_2 + 1;
      pfVar4 = param_2 + 2;
      param_2 = (float *)((long)param_2 + (ulong)param_3);
      fVar11 = (fVar10 - fVar12) * fVar8;
      fVar10 = (*pfVar3 - fVar13) * fVar8;
      fVar8 = (*pfVar4 - fVar14) * fVar8;
      fVar18 = fVar18 + fVar11 * fVar11;
      fVar16 = fVar16 + fVar11 * fVar8;
      fVar15 = fVar15 + fVar11 * fVar10;
      fVar19 = fVar19 + fVar10 * fVar10;
      fVar17 = fVar17 + fVar10 * fVar8;
      fVar20 = fVar20 + fVar8 * fVar8;
      bVar7 = uVar5 != uVar6;
      uVar6 = uVar6 + 1;
    } while (bVar7);
    local_64 = fVar15 * fVar9;
    local_60 = fVar16 * fVar9;
    local_54 = fVar17 * fVar9;
    local_68 = fVar18 * fVar9;
    local_58 = fVar19 * fVar9;
    local_48 = fVar9 * fVar20;
  }
  local_5c = local_64;
  local_50 = local_60;
  local_4c = local_54;
  Eigen<float>::DecrSortEigenStuff((Eigen<float> *)&local_68);
  *(ulong *)param_6 = CONCAT44(local_54,local_60);
  *(ulong *)(param_6 + 2) =
       CONCAT44(0.0 - (fVar14 * local_48 + fVar12 * local_60 + fVar13 * local_54),local_48);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, float const*, unsigned int, float*, float*, bool)
    */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,bool param_6)

{
  float *extraout_RDX;
  int iVar1;
  float *pfVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float local_16c;
  undefined8 local_140;
  float local_138;
  float local_134 [3];
  float local_128 [4];
  float local_118 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fm_computeBestFitPlane(param_1,param_2,param_3,(float *)0x0,0,local_128,local_134);
  fm_planeToMatrix(local_128,param_5);
  computeOBB(param_1,param_2,param_3,param_4,param_5);
  local_108 = *(undefined8 *)param_5;
  uStack_100 = *(undefined8 *)(param_5 + 2);
  local_f8 = *(undefined8 *)(param_5 + 4);
  uStack_f0 = *(undefined8 *)(param_5 + 6);
  local_e8 = *(undefined8 *)(param_5 + 8);
  uStack_e0 = *(undefined8 *)(param_5 + 10);
  local_d8 = *(undefined8 *)(param_5 + 0xc);
  uStack_d0 = *(undefined8 *)(param_5 + 0xe);
  if (param_6) {
    iVar1 = 0x11;
    fVar4 = _LC88;
    local_16c = *param_4 * param_4[1] * param_4[2];
    do {
      while( true ) {
        fm_eulerToQuat(0.0,_LC89 * fVar4,0.0,local_118);
        fm_quatToMatrix(local_118,local_c8);
        pfVar2 = (float *)&local_88;
        fm_multiplyTransform(local_c8,(float *)&local_108,extraout_RDX);
        computeOBB(param_1,param_2,param_3,(float *)&local_140,pfVar2);
        fVar3 = (float)((ulong)local_140 >> 0x20) * (float)local_140 * local_138;
        if (local_16c <= fVar3) break;
        fVar4 = fVar4 + _LC88;
        *(undefined8 *)param_5 = local_88;
        *(undefined8 *)(param_5 + 2) = uStack_80;
        *(undefined8 *)(param_5 + 4) = local_78;
        *(undefined8 *)(param_5 + 6) = uStack_70;
        *(undefined8 *)(param_5 + 8) = local_68;
        *(undefined8 *)(param_5 + 10) = uStack_60;
        *(undefined8 *)(param_5 + 0xc) = local_58;
        *(undefined8 *)(param_5 + 0xe) = uStack_50;
        *(undefined8 *)param_4 = local_140;
        param_4[2] = local_138;
        iVar1 = iVar1 + -1;
        local_16c = fVar3;
        if (iVar1 == 0) goto LAB_0010bd60;
      }
      fVar4 = fVar4 + _LC88;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_0010bd60:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, float const*, unsigned int, float*, float*,
   float*, bool) */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,
               float *param_6,bool param_7)

{
  long in_FS_OFFSET;
  float afStack_68 [12];
  undefined8 local_38;
  float local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_computeBestFitOBB(param_1,param_2,param_3,param_4,afStack_68,param_7);
  *(undefined8 *)param_5 = local_38;
  param_5[2] = local_30;
  fm_matrixToQuat(afStack_68,param_6);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::fm_computeSplitPlane(unsigned int, float const*, unsigned int, unsigned int const*,
   float*) */

undefined8
FLOAT_MATH::fm_computeSplitPlane
          (uint param_1,float *param_2,uint param_3,uint *param_4,float *param_5)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long in_FS_OFFSET;
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
  undefined1 auVar17 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec [3];
  float local_e0 [3];
  float local_d4 [3];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  Rect3d local_a8 [32];
  Rect3d local_88 [32];
  float local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar3 = local_68;
  fm_computeBestFitOBB(param_1,param_2,0xc,&local_128,pfVar3,true);
  fVar6 = local_128 * _LC13;
  fStack_104 = fStack_124 * _UNK_00111674;
  fVar7 = _UNK_00111674 * fStack_120;
  local_b8 = CONCAT44(fVar7,_LC13 * fStack_124);
  fVar9 = _LC13 * fStack_124;
  uVar2 = (uint)(local_128 < fStack_124);
  fVar11 = (float)((uint)fVar6 ^ (uint)_LC90);
  fVar12 = (float)((uint)fStack_104 ^ _LC90._4_4_);
  fVar13 = (float)((uint)_LC90 ^ (uint)(_LC13 * fStack_124));
  fVar14 = (float)(_LC90._4_4_ ^ (uint)fVar7);
  fVar10 = (float)((uint)fVar9 ^ _LC14);
  local_c8 = CONCAT44(fVar10,fVar11);
  uStack_c0 = CONCAT44(fVar6,fVar14);
  if ((local_128 < fStack_120) && (fStack_124 < fStack_120)) {
    uVar2 = 2;
  }
  local_108 = fVar6 - fVar6;
  fStack_104 = fStack_104 - fStack_104;
  pfVar4 = (float *)&local_118;
  local_118 = CONCAT44(fStack_104,local_108);
  local_110 = fVar7 - fVar7;
  fVar8 = local_128;
  fVar16 = fVar11;
  local_100 = local_110;
  local_f8 = local_108;
  fStack_f4 = fStack_104;
  local_f0 = local_110;
  fVar15 = fVar14;
  splitRect(uVar2,(Rect3d *)&local_c8,local_a8,local_88,pfVar4);
  if (uVar2 == 1) {
    local_108 = fVar16;
    local_100 = fVar14;
    local_f8 = fVar6;
    local_f0 = fVar14;
    if (local_128 <= fStack_120) {
      local_f8 = fVar16;
      local_f0 = fVar7;
    }
  }
  else {
    fStack_f4 = fVar10;
    if (uVar2 == 2) {
      local_f8 = fVar8 * _LC13;
      local_108 = fVar11;
      fStack_104 = fVar12;
      if (local_128 <= fStack_124) {
        local_f8 = (float)((uint)local_f8 ^ _LC14);
        fStack_f4 = fVar9;
      }
    }
    else {
      fStack_104 = fVar13;
      local_100 = fVar15;
      local_f0 = fVar7;
      if (fStack_124 < fStack_120) {
        fStack_f4 = fVar9;
        local_f0 = fVar14;
      }
    }
  }
  pfVar5 = local_e0;
  pfVar1 = param_5;
  fm_transform(pfVar3,pfVar4,local_ec);
  fm_transform(pfVar3,&local_108,pfVar5);
  auVar17 = fm_transform(pfVar3,&local_f8,local_d4);
  fVar6 = (float)fm_computePlane(auVar17._0_8_,pfVar5,auVar17._8_8_,pfVar1);
  param_5[3] = fVar6;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* FLOAT_MATH::fm_computeBestFitCapsule(unsigned int, float const*, unsigned int, float&, float&,
   float*, bool) */

void FLOAT_MATH::fm_computeBestFitCapsule
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,
               float *param_6,bool param_7)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8 [16];
  float local_88 [18];
  long local_40;
  
  uVar3 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fm_computeBestFitOBB(param_1,param_2,param_3,&local_e4,local_c8,param_7);
  if (local_e4 <= local_e0) {
    if ((local_e0 <= local_e4) || (local_e0 <= local_dc)) goto LAB_0010c0d8;
    fm_eulerToQuat(0.0,_LC91,0.0,&local_d8);
    pfVar2 = local_88;
    fm_quatToMatrix(&local_d8,pfVar2);
    fm_multiplyTransform(pfVar2,local_c8,param_6);
    if (param_1 != 0) {
      uVar1 = 0;
      fVar6 = 0.0;
      uVar7 = _LC11;
      fVar5 = 0.0;
      do {
        fm_inverseRT(local_c8,param_2,&local_d8);
        uVar1 = uVar1 + 1;
        param_2 = (float *)((long)param_2 + uVar3);
        fVar4 = local_d8 * local_d8 + local_d0 * local_d0;
        if (fVar4 <= fVar6) {
          fVar4 = fVar6;
        }
        fVar6 = fVar4;
        fVar4 = (float)((uint)local_d4 & uVar7);
        if ((float)((uint)local_d4 & uVar7) <= fVar5) {
          fVar4 = fVar5;
        }
        fVar5 = fVar4;
      } while (param_1 != uVar1);
      goto LAB_0010c181;
    }
LAB_0010c360:
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    if (local_dc < local_e4) {
      fm_eulerToQuat(0.0,0.0,_LC91,&local_d8);
      pfVar2 = local_88;
      fm_quatToMatrix(&local_d8,pfVar2);
      fm_multiplyTransform(pfVar2,local_c8,param_6);
      if (param_1 == 0) goto LAB_0010c360;
      uVar1 = 0;
      fVar6 = 0.0;
      uVar7 = _LC11;
      fVar5 = 0.0;
      do {
        fm_inverseRT(local_c8,param_2,&local_d8);
        uVar1 = uVar1 + 1;
        param_2 = (float *)((long)param_2 + uVar3);
        fVar4 = local_d4 * local_d4 + local_d0 * local_d0;
        if (fVar4 <= fVar6) {
          fVar4 = fVar6;
        }
        fVar6 = fVar4;
        fVar4 = (float)((uint)local_d8 & uVar7);
        if ((float)((uint)local_d8 & uVar7) <= fVar5) {
          fVar4 = fVar5;
        }
        fVar5 = fVar4;
      } while (param_1 != uVar1);
    }
    else {
LAB_0010c0d8:
      fm_eulerToQuat(_LC91,0.0,0.0,&local_d8);
      pfVar2 = local_88;
      fm_quatToMatrix(&local_d8,pfVar2);
      fm_multiplyTransform(pfVar2,local_c8,param_6);
      if (param_1 == 0) goto LAB_0010c360;
      uVar1 = 0;
      fVar6 = 0.0;
      uVar7 = _LC11;
      fVar5 = 0.0;
      do {
        fm_inverseRT(local_c8,param_2,&local_d8);
        uVar1 = uVar1 + 1;
        param_2 = (float *)((long)param_2 + uVar3);
        fVar4 = local_d8 * local_d8 + local_d4 * local_d4;
        if (fVar4 <= fVar6) {
          fVar4 = fVar6;
        }
        fVar6 = fVar4;
        fVar4 = (float)((uint)local_d0 & uVar7);
        if ((float)((uint)local_d0 & uVar7) <= fVar5) {
          fVar4 = fVar5;
        }
        fVar5 = fVar4;
      } while (param_1 != uVar1);
    }
LAB_0010c181:
    if (fVar6 < 0.0) {
      fVar6 = sqrtf(fVar6);
      fVar5 = (fVar4 + fVar4) - (fVar6 + fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
      fVar5 = (fVar4 + fVar4) - (fVar6 + fVar6);
    }
  }
  *param_4 = fVar6;
  *param_5 = fVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_computeBestFitPlane(unsigned int, double const*, unsigned int, double const*,
   unsigned int, double*, double*) */

undefined8
FLOAT_MATH::fm_computeBestFitPlane
          (uint param_1,double *param_2,uint param_3,double *param_4,uint param_5,double *param_6,
          double *param_7)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
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
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double local_68;
  long local_20;
  
  dVar2 = _LC54;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    dVar12 = (_LC54 / 0.0) * 0.0;
    param_7[2] = dVar12;
    *param_7 = dVar12;
    param_7[1] = dVar12;
    dVar13 = dVar12;
    local_a0 = dVar12;
    local_98 = dVar12;
    dStack_80 = dVar12;
    local_a8 = dVar12;
    local_88 = dVar12;
    local_68 = dVar12;
    dVar14 = dVar12;
  }
  else {
    dVar14 = 0.0;
    dVar12 = 0.0;
    dVar9 = 0.0;
    pdVar3 = param_2;
    pdVar4 = param_4;
    dVar13 = dVar12;
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      dVar16 = _LC54;
      if (pdVar4 != (double *)0x0) {
        dVar16 = *pdVar4;
        pdVar4 = (double *)((long)pdVar4 + (ulong)param_5);
      }
      uVar6 = uVar5 + 1;
      dVar9 = dVar9 + dVar16;
      dVar12 = dVar12 + *pdVar3 * dVar16;
      dVar13 = dVar13 + pdVar3[1] * dVar16;
      pdVar1 = pdVar3 + 2;
      pdVar3 = (double *)((long)pdVar3 + (ulong)param_3);
      dVar14 = dVar14 + *pdVar1 * dVar16;
    } while (param_1 != uVar6);
    dVar20 = 0.0;
    dVar9 = _LC54 / dVar9;
    dVar17 = 0.0;
    dVar15 = 0.0;
    dVar12 = dVar12 * dVar9;
    dVar13 = dVar13 * dVar9;
    dVar14 = dVar14 * dVar9;
    *param_7 = dVar12;
    param_7[1] = dVar13;
    param_7[2] = dVar14;
    dVar16 = dVar15;
    dVar18 = dVar15;
    dVar19 = dVar17;
    uVar6 = 0;
    do {
      dVar8 = dVar2;
      if (param_4 != (double *)0x0) {
        dVar8 = *param_4;
        param_4 = (double *)((long)param_4 + (ulong)param_5);
      }
      dVar10 = *param_2;
      pdVar3 = param_2 + 1;
      pdVar4 = param_2 + 2;
      param_2 = (double *)((long)param_2 + (ulong)param_3);
      dVar11 = (dVar10 - dVar12) * dVar8;
      dVar10 = (*pdVar3 - dVar13) * dVar8;
      dVar8 = (*pdVar4 - dVar14) * dVar8;
      dVar18 = dVar18 + dVar11 * dVar11;
      dVar16 = dVar16 + dVar11 * dVar8;
      dVar15 = dVar15 + dVar11 * dVar10;
      dVar19 = dVar19 + dVar10 * dVar10;
      dVar17 = dVar17 + dVar10 * dVar8;
      dVar20 = dVar20 + dVar8 * dVar8;
      bVar7 = uVar5 != uVar6;
      uVar6 = uVar6 + 1;
    } while (bVar7);
    local_a0 = dVar15 * dVar9;
    local_98 = dVar16 * dVar9;
    dStack_80 = dVar17 * dVar9;
    local_a8 = dVar18 * dVar9;
    local_88 = dVar19 * dVar9;
    local_68 = dVar9 * dVar20;
  }
  local_90 = local_a0;
  local_78 = local_98;
  local_70 = dStack_80;
  Eigen<double>::DecrSortEigenStuff((Eigen<double> *)&local_a8);
  param_6[2] = local_68;
  *param_6 = local_98;
  param_6[1] = dStack_80;
  param_6[3] = 0.0 - (local_98 * dVar12 + dStack_80 * dVar13 + local_68 * dVar14);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, double const*, unsigned int, double*, double*,
   bool) */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5,
               bool param_6)

{
  double *extraout_RDX;
  int iVar1;
  double *pdVar2;
  long in_FS_OFFSET;
  double dVar3;
  double dVar4;
  double local_278;
  double local_248 [4];
  double local_228;
  double dStack_220;
  double local_218;
  double local_208 [4];
  double local_1e8 [4];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148 [16];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fm_computeBestFitPlane(param_1,param_2,param_3,(double *)0x0,0,local_208,local_248);
  fm_planeToMatrix(local_208,param_5);
  computeOBB(param_1,param_2,param_3,param_4,param_5);
  local_1c8 = *param_5;
  dStack_1c0 = param_5[1];
  local_198 = param_5[6];
  dStack_190 = param_5[7];
  local_188 = param_5[8];
  dStack_180 = param_5[9];
  local_178 = param_5[10];
  dStack_170 = param_5[0xb];
  local_1b8 = param_5[2];
  dStack_1b0 = param_5[3];
  local_158 = param_5[0xe];
  dStack_150 = param_5[0xf];
  local_1a8 = param_5[4];
  dStack_1a0 = param_5[5];
  local_168 = param_5[0xc];
  dStack_160 = param_5[0xd];
  if (param_6) {
    iVar1 = 0x11;
    dVar4 = _LC92;
    local_278 = *param_4 * param_4[1] * param_4[2];
    do {
      while( true ) {
        fm_eulerToQuat(0.0,_LC93 * dVar4,0.0,local_1e8);
        fm_quatToMatrix(local_1e8,local_148);
        pdVar2 = &local_c8;
        fm_multiplyTransform(local_148,&local_1c8,extraout_RDX);
        computeOBB(param_1,param_2,param_3,&local_228,pdVar2);
        dVar3 = dStack_220 * local_228 * local_218;
        if (local_278 <= dVar3) break;
        *param_5 = local_c8;
        param_5[1] = dStack_c0;
        dVar4 = dVar4 + _LC92;
        param_5[8] = local_88;
        param_5[9] = dStack_80;
        param_5[2] = local_b8;
        param_5[3] = dStack_b0;
        param_5[10] = local_78;
        param_5[0xb] = dStack_70;
        param_5[4] = local_a8;
        param_5[5] = dStack_a0;
        param_5[0xe] = local_58;
        param_5[0xf] = dStack_50;
        param_5[6] = local_98;
        param_5[7] = dStack_90;
        param_5[0xc] = local_68;
        param_5[0xd] = dStack_60;
        *param_4 = local_228;
        param_4[1] = dStack_220;
        param_4[2] = local_218;
        iVar1 = iVar1 + -1;
        local_278 = dVar3;
        if (iVar1 == 0) goto LAB_0010c910;
      }
      dVar4 = dVar4 + _LC92;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_0010c910:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, double const*, unsigned int, double*, double*,
   double*, bool) */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5,
               double *param_6,bool param_7)

{
  long in_FS_OFFSET;
  double adStack_a8 [12];
  double local_48;
  double dStack_40;
  double local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fm_computeBestFitOBB(param_1,param_2,param_3,param_4,adStack_a8,param_7);
  *param_5 = local_48;
  param_5[1] = dStack_40;
  param_5[2] = local_38;
  fm_matrixToQuat(adStack_a8,param_6);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::fm_computeSplitPlane(unsigned int, double const*, unsigned int, unsigned int const*,
   double*) */

undefined8
FLOAT_MATH::fm_computeSplitPlane
          (uint param_1,double *param_2,uint param_3,uint *param_4,double *param_5)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long in_FS_OFFSET;
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
  undefined1 auVar16 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198 [4];
  double local_178 [4];
  double local_158 [4];
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  Rect3d local_108 [48];
  Rect3d local_d8 [48];
  double local_a8 [17];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pdVar3 = local_a8;
  fm_computeBestFitOBB(param_1,param_2,0x18,&local_218,pdVar3,true);
  dVar9 = local_218 * _LC50;
  dStack_118 = dStack_210 * _LC50;
  dVar8 = _LC50 * local_208;
  uVar2 = (uint)(local_218 < dStack_210);
  dVar12 = (double)((ulong)dVar9 ^ _LC95);
  dVar13 = (double)((ulong)dStack_118 ^ _LC95);
  dVar6 = (double)(_LC95 ^ (ulong)(_LC50 * dStack_210));
  dVar7 = (double)(_LC95 ^ (ulong)dVar8);
  if ((local_218 < local_208) && (dStack_210 < local_208)) {
    uVar2 = 2;
  }
  pdVar4 = &local_1f8;
  local_1f8 = dVar9 - dVar9;
  dStack_1f0 = dStack_118 - dStack_118;
  local_1e8 = dVar8 - dVar8;
  dVar10 = dVar8;
  dVar11 = local_218;
  dVar14 = dStack_210;
  dVar15 = dVar7;
  local_1d8 = local_1f8;
  dStack_1d0 = dStack_1f0;
  local_1c8 = local_1e8;
  local_1b8 = local_1f8;
  dStack_1b0 = dStack_1f0;
  local_1a8 = local_1e8;
  local_138 = dVar12;
  dStack_130 = dVar13;
  local_128 = dVar7;
  local_120 = dVar9;
  local_110 = dVar8;
  splitRect(uVar2,(Rect3d *)&local_138,local_108,local_d8,pdVar4);
  if (uVar2 == 1) {
    local_1d8 = dVar12;
    local_1c8 = dVar15;
    local_1b8 = dVar9;
    local_1a8 = dVar15;
    if (local_218 <= local_208) {
      local_1b8 = dVar12;
      local_1a8 = dVar10;
    }
  }
  else {
    dStack_210 = dStack_210 * _LC50;
    dStack_1b0 = (double)((ulong)dStack_210 ^ _LC95);
    if (uVar2 == 2) {
      local_1b8 = dVar11 * _LC50;
      local_1d8 = dVar12;
      dStack_1d0 = dVar13;
      if (local_218 <= dVar14) {
        local_1b8 = (double)((ulong)local_1b8 ^ _LC95);
        dStack_1b0 = dStack_210;
      }
    }
    else {
      dStack_1d0 = dVar6;
      local_1c8 = dVar7;
      local_1a8 = dVar8;
      if (dVar14 < local_208) {
        dStack_1b0 = dStack_210;
        local_1a8 = dVar7;
      }
    }
  }
  pdVar5 = local_178;
  pdVar1 = param_5;
  fm_transform(pdVar3,pdVar4,local_198);
  fm_transform(pdVar3,&local_1d8,pdVar5);
  auVar16 = fm_transform(pdVar3,&local_1b8,local_158);
  dVar6 = (double)fm_computePlane(auVar16._0_8_,pdVar5,auVar16._8_8_,pdVar1);
  param_5[3] = dVar6;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* FLOAT_MATH::fm_computeBestFitCapsule(unsigned int, double const*, unsigned int, double&, double&,
   double*, bool) */

void FLOAT_MATH::fm_computeBestFitCapsule
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5,
               double *param_6,bool param_7)

{
  uint uVar1;
  double *pdVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  double dVar4;
  double dVar5;
  double dVar6;
  ulong uVar7;
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_148 [16];
  double local_c8 [17];
  long local_40;
  
  uVar3 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fm_computeBestFitOBB(param_1,param_2,param_3,&local_188,local_148,param_7);
  if (local_188 <= local_180) {
    if ((local_180 <= local_188) || (local_180 <= local_178)) goto LAB_0010ccea;
    fm_eulerToQuat(0.0,_LC96,0.0,&local_168);
    pdVar2 = local_c8;
    fm_quatToMatrix(&local_168,pdVar2);
    fm_multiplyTransform(pdVar2,local_148,param_6);
    if (param_1 != 0) {
      uVar1 = 0;
      dVar6 = 0.0;
      dVar5 = 0.0;
      uVar7 = _LC58;
      do {
        fm_inverseRT(local_148,param_2,&local_168);
        uVar1 = uVar1 + 1;
        param_2 = (double *)((long)param_2 + uVar3);
        dVar4 = local_168 * local_168 + local_158 * local_158;
        if (dVar4 <= dVar6) {
          dVar4 = dVar6;
        }
        dVar6 = dVar4;
        dVar4 = (double)((ulong)local_160 & uVar7);
        if ((double)((ulong)local_160 & uVar7) <= dVar5) {
          dVar4 = dVar5;
        }
        dVar5 = dVar4;
      } while (param_1 != uVar1);
      goto LAB_0010cd9c;
    }
LAB_0010cf88:
    dVar6 = 0.0;
    dVar5 = dVar6;
  }
  else {
    if (local_178 < local_188) {
      fm_eulerToQuat(0.0,0.0,_LC96,&local_168);
      pdVar2 = local_c8;
      fm_quatToMatrix(&local_168,pdVar2);
      fm_multiplyTransform(pdVar2,local_148,param_6);
      if (param_1 == 0) goto LAB_0010cf88;
      uVar1 = 0;
      dVar6 = 0.0;
      dVar5 = 0.0;
      uVar7 = _LC58;
      do {
        fm_inverseRT(local_148,param_2,&local_168);
        uVar1 = uVar1 + 1;
        param_2 = (double *)((long)param_2 + uVar3);
        dVar4 = local_160 * local_160 + local_158 * local_158;
        if (dVar4 <= dVar6) {
          dVar4 = dVar6;
        }
        dVar6 = dVar4;
        dVar4 = (double)((ulong)local_168 & uVar7);
        if ((double)((ulong)local_168 & uVar7) <= dVar5) {
          dVar4 = dVar5;
        }
        dVar5 = dVar4;
      } while (param_1 != uVar1);
    }
    else {
LAB_0010ccea:
      fm_eulerToQuat(_LC96,0.0,0.0,&local_168);
      pdVar2 = local_c8;
      fm_quatToMatrix(&local_168,pdVar2);
      fm_multiplyTransform(pdVar2,local_148,param_6);
      if (param_1 == 0) goto LAB_0010cf88;
      uVar1 = 0;
      dVar6 = 0.0;
      dVar5 = 0.0;
      uVar7 = _LC58;
      do {
        fm_inverseRT(local_148,param_2,&local_168);
        uVar1 = uVar1 + 1;
        param_2 = (double *)((long)param_2 + uVar3);
        dVar4 = local_168 * local_168 + local_160 * local_160;
        if (dVar4 <= dVar6) {
          dVar4 = dVar6;
        }
        dVar6 = dVar4;
        dVar4 = (double)((ulong)local_158 & uVar7);
        if ((double)((ulong)local_158 & uVar7) <= dVar5) {
          dVar4 = dVar5;
        }
        dVar5 = dVar4;
      } while (param_1 != uVar1);
    }
LAB_0010cd9c:
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
      dVar5 = (dVar4 + dVar4) - (dVar6 + dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
      dVar5 = (dVar4 + dVar4) - (dVar6 + dVar6);
    }
  }
  *param_4 = dVar6;
  *param_5 = dVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::CTriangulator::_process(std::vector<unsigned int, std::allocator<unsigned int> >&) */

void __thiscall FLOAT_MATH::CTriangulator::_process(CTriangulator *this,vector *param_1)

{
  char cVar1;
  int *__ptr;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  double dVar18;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (*(long *)(this + 0x60) - *(long *)(this + 0x58) >> 3) * -0x5555555555555555;
  iVar13 = (int)uVar15;
  if (2 < iVar13) {
    uVar15 = uVar15 & 0xffffffff;
    __ptr = (int *)malloc((long)iVar13 << 2);
    dVar18 = (double)_area(this);
    uVar2 = 0;
    uVar6 = (ulong)(iVar13 - 1);
    uVar5 = uVar6;
    piVar4 = __ptr;
    if (dVar18 <= 0.0) {
      do {
        *piVar4 = (int)uVar5;
        uVar10 = (int)uVar5 - 1;
        uVar5 = (ulong)uVar10;
        piVar4 = piVar4 + 1;
      } while (uVar10 != 0xffffffff);
      bVar17 = true;
    }
    else {
      do {
        __ptr[uVar2] = (int)uVar2;
        bVar17 = uVar6 != uVar2;
        uVar2 = uVar2 + 1;
      } while (bVar17);
      bVar17 = false;
    }
    iVar13 = iVar13 * 2;
    do {
      iVar13 = iVar13 + -1;
      iVar11 = (int)uVar6;
      iVar8 = (int)uVar15;
      if (iVar11 < iVar8) {
        uVar10 = iVar11 + 1;
        if ((int)uVar10 < iVar8) {
          iVar16 = iVar11 + 2;
          iVar14 = 0;
          if (iVar16 < iVar8) {
            iVar14 = iVar16;
          }
        }
        else {
          iVar16 = 1;
          uVar10 = 0;
          iVar14 = 1;
        }
      }
      else {
        iVar16 = 2;
        iVar11 = 0;
        uVar10 = 1;
        iVar14 = 2;
      }
      cVar1 = _snip(this,iVar11,uVar10,iVar14,iVar8,__ptr);
      if (cVar1 == '\0') {
        if (iVar13 == 0) break;
      }
      else {
        iVar13 = __ptr[iVar11];
        iVar11 = __ptr[(int)uVar10];
        iVar14 = __ptr[iVar14];
        piVar3 = *(int **)(param_1 + 8);
        piVar4 = *(int **)(param_1 + 0x10);
        if (bVar17) {
          if (piVar3 == piVar4) {
            local_44 = iVar13;
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar4,&local_44
                      );
            piVar4 = *(int **)(param_1 + 0x10);
            piVar3 = *(int **)(param_1 + 8);
          }
          else {
            *piVar3 = iVar13;
            piVar3 = piVar3 + 1;
            *(int **)(param_1 + 8) = piVar3;
          }
          if (piVar4 == piVar3) {
            local_44 = iVar11;
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar4,&local_44
                      );
            piVar4 = *(int **)(param_1 + 0x10);
            piVar3 = *(int **)(param_1 + 8);
          }
          else {
            *piVar3 = iVar11;
            piVar3 = piVar3 + 1;
            *(int **)(param_1 + 8) = piVar3;
          }
          if (piVar4 == piVar3) {
            local_44 = iVar14;
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar4,&local_44
                      );
          }
          else {
            *piVar3 = iVar14;
            *(int **)(param_1 + 8) = piVar3 + 1;
            local_44 = iVar14;
          }
        }
        else {
          if (piVar3 == piVar4) {
            local_44 = iVar14;
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar4,&local_44
                      );
            piVar4 = *(int **)(param_1 + 0x10);
            piVar3 = *(int **)(param_1 + 8);
          }
          else {
            *piVar3 = iVar14;
            piVar3 = piVar3 + 1;
            *(int **)(param_1 + 8) = piVar3;
          }
          if (piVar3 == piVar4) {
            local_44 = iVar11;
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar4,&local_44
                      );
            piVar4 = *(int **)(param_1 + 0x10);
            piVar12 = *(int **)(param_1 + 8);
          }
          else {
            piVar12 = piVar3 + 1;
            *piVar3 = iVar11;
            *(int **)(param_1 + 8) = piVar12;
          }
          if (piVar12 == piVar4) {
            local_44 = iVar13;
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar12,
                       &local_44);
          }
          else {
            *piVar12 = iVar13;
            *(int **)(param_1 + 8) = piVar12 + 1;
            local_44 = iVar13;
          }
        }
        if (iVar16 < iVar8) {
          lVar7 = (long)iVar16;
          piVar4 = __ptr + lVar7;
          do {
            piVar4[(int)uVar10 - lVar7] = *piVar4;
            piVar4 = piVar4 + 1;
          } while (__ptr + (ulong)(uint)(iVar8 - iVar16) + lVar7 != piVar4);
        }
        uVar9 = iVar8 - 1;
        uVar15 = (ulong)uVar9;
        iVar13 = uVar9 * 2;
        if (uVar9 == 2) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            free(__ptr);
            return;
          }
          goto LAB_0010d375;
        }
      }
      uVar6 = (ulong)uVar10;
    } while( true );
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d375:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FLOAT_MATH::CTriangulator::triangulate(std::vector<unsigned int, std::allocator<unsigned int> >&)
    */

void __thiscall FLOAT_MATH::CTriangulator::triangulate(CTriangulator *this,vector *param_1)

{
  _process(this,param_1);
  return;
}



/* FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionDouble(unsigned int) const */

long __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionDouble(KdTree *this,uint param_1)

{
  return *(long *)(this + 0x28) + (ulong)(param_1 * 3) * 8;
}



/* FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionFloat(unsigned int) const */

long __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionFloat(KdTree *this,uint param_1)

{
  return *(long *)(this + 0x40) + (ulong)(param_1 * 3) * 4;
}



/* FLOAT_MATH::MyVertexIndex::getVerticesFloat() const */

long __thiscall FLOAT_MATH::MyVertexIndex::getVerticesFloat(MyVertexIndex *this)

{
  if (*(long *)(this + 0x68) != *(long *)(this + 0x60)) {
    return *(long *)(this + 0x60);
  }
  return 0;
}



/* FLOAT_MATH::MyVertexIndex::getVerticesDouble() const */

long __thiscall FLOAT_MATH::MyVertexIndex::getVerticesDouble(MyVertexIndex *this)

{
  if (*(long *)(this + 0x50) != *(long *)(this + 0x48)) {
    return *(long *)(this + 0x48);
  }
  return 0;
}



/* FLOAT_MATH::MyVertexIndex::getVertexFloat(unsigned int) const */

long __thiscall FLOAT_MATH::MyVertexIndex::getVertexFloat(MyVertexIndex *this,uint param_1)

{
  if (*(long *)(this + 0x68) != *(long *)(this + 0x60)) {
    return *(long *)(this + 0x60) + (ulong)(param_1 * 3) * 4;
  }
  return (ulong)(param_1 * 3) * 4;
}



/* FLOAT_MATH::MyVertexIndex::getVertexDouble(unsigned int) const */

long __thiscall FLOAT_MATH::MyVertexIndex::getVertexDouble(MyVertexIndex *this,uint param_1)

{
  if (*(long *)(this + 0x50) != *(long *)(this + 0x48)) {
    return *(long *)(this + 0x48) + (ulong)(param_1 * 3) * 8;
  }
  return (ulong)(param_1 * 3) * 8;
}



/* FLOAT_MATH::MyVertexIndex::getVcount() const */

undefined4 __thiscall FLOAT_MATH::MyVertexIndex::getVcount(MyVertexIndex *this)

{
  return *(undefined4 *)(this + 0x40);
}



/* FLOAT_MATH::MyVertexIndex::isDouble() const */

byte __thiscall FLOAT_MATH::MyVertexIndex::isDouble(MyVertexIndex *this)

{
  return (byte)this[8] & 1;
}



/* FLOAT_MATH::CTriangulator::getPoint(unsigned int) */

long __thiscall FLOAT_MATH::CTriangulator::getPoint(CTriangulator *this,uint param_1)

{
  return *(long *)(this + 0x40) + (ulong)param_1 * 0x18;
}



/* FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree() */

void __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree(KdTree *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_getPositionDouble_00111418;
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(this + 0x28) != *(long *)(this + 0x30)) {
    *(long *)(this + 0x30) = *(long *)(this + 0x28);
  }
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != *(void **)(this + 0x48)) {
    *(void **)(this + 0x48) = pvVar3;
  }
  plVar2 = *(long **)(this + 0x18);
  if (*(long **)(this + 0x18) != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      operator_delete(plVar2,0x6010);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    pvVar3 = *(void **)(this + 0x40);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x50) - (long)pvVar3);
  }
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x38) - (long)pvVar3);
    return;
  }
  return;
}



/* FLOAT_MATH::MyVertexIndex::saveAsObj(char const*, unsigned int, unsigned int*) */

undefined8 __thiscall
FLOAT_MATH::MyVertexIndex::saveAsObj(MyVertexIndex *this,char *param_1,uint param_2,uint *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float *pfVar3;
  float *pfVar4;
  double *pdVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  uint uVar9;
  FILE *__stream;
  long lVar10;
  undefined8 uVar11;
  double *pdVar12;
  float *pfVar13;
  uint *puVar14;
  uint *puVar15;
  
  __stream = fopen64(param_1,"wb");
  if (__stream == (FILE *)0x0) {
    uVar11 = 0;
  }
  else {
    lVar10 = *(long *)this;
    if (*(code **)(lVar10 + 0x30) == getVcount) {
      uVar9 = *(uint *)(this + 0x40);
    }
    else {
      uVar9 = (**(code **)(lVar10 + 0x30))(this);
      lVar10 = *(long *)this;
    }
    if (((byte)this[8] & 1) == 0) {
      if (*(code **)(lVar10 + 0x10) == getVerticesFloat) {
        pfVar13 = *(float **)(this + 0x60);
        if (*(float **)(this + 0x68) == pfVar13) {
          pfVar13 = (float *)0x0;
        }
      }
      else {
        pfVar13 = (float *)(**(code **)(lVar10 + 0x10))(this);
      }
      if (uVar9 != 0) {
        pfVar6 = pfVar13 + (ulong)uVar9 * 3;
        do {
          fVar7 = *pfVar13;
          pfVar3 = pfVar13 + 2;
          pfVar4 = pfVar13 + 1;
          pfVar13 = pfVar13 + 3;
          __fprintf_chk((double)fVar7,(double)*pfVar4,(double)*pfVar3,__stream,2,
                        "v %0.9f %0.9f %0.9f\r\n");
        } while (pfVar13 != pfVar6);
      }
    }
    else {
      if (*(code **)(lVar10 + 0x18) == getVerticesDouble) {
        pdVar12 = *(double **)(this + 0x48);
        if (*(double **)(this + 0x50) == pdVar12) {
          pdVar12 = (double *)0x0;
        }
      }
      else {
        pdVar12 = (double *)(**(code **)(lVar10 + 0x18))(this);
      }
      if (uVar9 != 0) {
        pdVar5 = pdVar12 + (ulong)uVar9 * 3;
        do {
          pdVar1 = pdVar12 + 2;
          pdVar2 = pdVar12 + 1;
          dVar8 = *pdVar12;
          pdVar12 = pdVar12 + 3;
          __fprintf_chk((double)(float)dVar8,(double)(float)*pdVar2,(double)(float)*pdVar1,__stream,
                        2,"v %0.9f %0.9f %0.9f\r\n");
        } while (pdVar12 != pdVar5);
      }
    }
    if (param_2 != 0) {
      puVar14 = param_3;
      do {
        puVar15 = puVar14 + 3;
        __fprintf_chk(__stream,2,"f %d %d %d\r\n",*puVar14 + 1,puVar14[1] + 1,puVar14[2] + 1);
        puVar14 = puVar15;
      } while (puVar15 != param_3 + (ulong)param_2 * 3);
    }
    fclose(__stream);
    uVar11 = 1;
  }
  return uVar11;
}



/* FLOAT_MATH::CTriangulator::reset() */

void __thiscall FLOAT_MATH::CTriangulator::reset(CTriangulator *this)

{
  if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) {
    *(long *)(this + 0x48) = *(long *)(this + 0x40);
  }
  if (*(long *)(this + 0x58) != *(long *)(this + 0x60)) {
    *(long *)(this + 0x60) = *(long *)(this + 0x58);
  }
  if (*(long *)(this + 0x70) != *(long *)(this + 0x78)) {
    *(long *)(this + 0x78) = *(long *)(this + 0x70);
  }
  return;
}



/* FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate() */

void __thiscall FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate(Myfm_Tesselate *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_tesselate_001114b0;
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x30) - (long)pvVar1);
    return;
  }
  return;
}



/* FLOAT_MATH::Triangulate::~Triangulate() */

void __thiscall FLOAT_MATH::Triangulate::~Triangulate(Triangulate *this)

{
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x10));
  return;
}



/* FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate() */

void __thiscall FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate(Myfm_Tesselate *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_tesselate_001114b0;
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x30) - (long)pvVar1);
  }
  operator_delete(this,0x40);
  return;
}



/* FLOAT_MATH::Triangulate::~Triangulate() */

void __thiscall FLOAT_MATH::Triangulate::~Triangulate(Triangulate *this)

{
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x10));
  operator_delete(this,0x18);
  return;
}



/* FLOAT_MATH::Triangulate::triangulate3d(unsigned int, float const*, unsigned int, unsigned int&,
   bool, float) */

undefined8 __thiscall
FLOAT_MATH::Triangulate::triangulate3d
          (Triangulate *this,uint param_1,float *param_2,uint param_3,uint *param_4,bool param_5,
          float param_6)

{
  undefined8 uVar1;
  double *__ptr;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x10));
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  __ptr = (double *)malloc((ulong)param_1 * 0x18);
  if (param_1 != 0) {
    uVar6 = 0;
    pdVar2 = __ptr;
    do {
      uVar7 = (ulong)uVar6;
      pdVar3 = pdVar2 + 3;
      uVar6 = uVar6 + param_3;
      uVar1 = *(undefined8 *)(uVar7 + (long)param_2);
      *pdVar2 = (double)(float)uVar1;
      pdVar2[1] = (double)(float)((ulong)uVar1 >> 0x20);
      pdVar2[2] = (double)*(float *)((undefined8 *)(uVar7 + (long)param_2) + 1);
      pdVar2 = pdVar3;
    } while (pdVar3 != __ptr + (ulong)param_1 * 3);
  }
  lVar4 = (*(code *)**(undefined8 **)this)((double)param_6,this,param_1,__ptr,0x18,param_4,param_5);
  if (lVar4 != 0) {
    uVar6 = *param_4;
    pvVar5 = malloc((ulong)uVar6 * 0x24);
    *(void **)(this + 8) = pvVar5;
    if (uVar6 != 0) {
      lVar8 = 0;
      do {
        *(float *)((long)pvVar5 + lVar8 * 4) = (float)*(double *)(lVar4 + lVar8 * 8);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < uVar6 * 9);
    }
    free(*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  free(__ptr);
  return *(undefined8 *)(this + 8);
}



/* FLOAT_MATH::MyVertexIndex::~MyVertexIndex() */

void __thiscall FLOAT_MATH::MyVertexIndex::~MyVertexIndex(MyVertexIndex *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_getIndex_00111448;
  *(undefined ***)(this + 0x20) = &PTR_getPositionDouble_00111418;
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(this + 0x48) != *(long *)(this + 0x50)) {
    *(long *)(this + 0x50) = *(long *)(this + 0x48);
  }
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != *(void **)(this + 0x68)) {
    *(void **)(this + 0x68) = pvVar3;
  }
  plVar2 = *(long **)(this + 0x38);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      operator_delete(plVar2,0x6010);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    pvVar3 = *(void **)(this + 0x60);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x70) - (long)pvVar3);
  }
  pvVar3 = *(void **)(this + 0x48);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x58) - (long)pvVar3);
    return;
  }
  return;
}



/* FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree() */

void __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree(KdTree *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_getPositionDouble_00111418;
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(this + 0x28) != *(long *)(this + 0x30)) {
    *(long *)(this + 0x30) = *(long *)(this + 0x28);
  }
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != *(void **)(this + 0x48)) {
    *(void **)(this + 0x48) = pvVar3;
  }
  plVar2 = *(long **)(this + 0x18);
  if (*(long **)(this + 0x18) != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      operator_delete(plVar2,0x6010);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    pvVar3 = *(void **)(this + 0x40);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x50) - (long)pvVar3);
  }
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x38) - (long)pvVar3);
  }
  operator_delete(this,0x58);
  return;
}



/* FLOAT_MATH::MyVertexIndex::~MyVertexIndex() */

void __thiscall FLOAT_MATH::MyVertexIndex::~MyVertexIndex(MyVertexIndex *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_getIndex_00111448;
  *(undefined ***)(this + 0x20) = &PTR_getPositionDouble_00111418;
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(this + 0x48) != *(long *)(this + 0x50)) {
    *(long *)(this + 0x50) = *(long *)(this + 0x48);
  }
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != *(void **)(this + 0x68)) {
    *(void **)(this + 0x68) = pvVar3;
  }
  plVar2 = *(long **)(this + 0x38);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      operator_delete(plVar2,0x6010);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    pvVar3 = *(void **)(this + 0x60);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x70) - (long)pvVar3);
  }
  pvVar3 = *(void **)(this + 0x48);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x58) - (long)pvVar3);
  }
  operator_delete(this,0x78);
  return;
}



/* FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search(FLOAT_MATH::VERTEX_INDEX::Axes, double const*,
   double, unsigned int&, unsigned int, FLOAT_MATH::VERTEX_INDEX::KdTreeFindNode*,
   FLOAT_MATH::VERTEX_INDEX::KdTreeInterface const*) */

undefined8 * __thiscall
FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search
          (double param_1,KdTreeNode *this,int param_3,double *param_4,uint *param_5,uint param_6,
          double *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  uint uVar9;
  KdTreeNode *pKVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double *pdStack_60;
  
  pdVar2 = param_4;
LAB_0010dc1b:
  if (*(code **)*param_8 == KdTree::getPositionDouble) {
    uVar4 = *(int *)this * 3;
    auVar14._8_4_ = uVar4;
    auVar14._0_8_ = param_8[5] + (ulong)uVar4 * 8;
    auVar14._12_4_ = 0;
  }
  else {
    pdStack_60 = (double *)0x10ddd6;
    auVar14 = (**(code **)*param_8)(param_8,*(int *)this,pdVar2);
  }
  pdVar2 = auVar14._0_8_;
  dVar11 = *param_4 - *pdVar2;
  dVar13 = param_4[1] - pdVar2[1];
  dVar12 = param_4[2] - pdVar2[2];
  if (param_3 == 1) {
    if (dVar13 <= 0.0) {
      lVar8 = *(long *)(this + 8);
      if (param_1 <= (double)((ulong)dVar13 ^ _LC95)) goto LAB_0010dec0;
      pKVar10 = *(KdTreeNode **)(this + 0x10);
      param_3 = 2;
    }
    else {
      lVar8 = *(long *)(this + 0x10);
      if (param_1 <= dVar13) {
LAB_0010dec0:
        pKVar10 = (KdTreeNode *)0x0;
        param_3 = 2;
      }
      else {
        pKVar10 = *(KdTreeNode **)(this + 8);
        param_3 = 2;
      }
    }
  }
  else if (param_3 == 2) {
    if (dVar12 <= 0.0) {
      lVar8 = *(long *)(this + 8);
      if (param_1 <= (double)((ulong)dVar12 ^ _LC95)) goto LAB_0010deb0;
      pKVar10 = *(KdTreeNode **)(this + 0x10);
      param_3 = 0;
    }
    else {
      lVar8 = *(long *)(this + 0x10);
      if (param_1 <= dVar12) {
LAB_0010deb0:
        pKVar10 = (KdTreeNode *)0x0;
        param_3 = 0;
      }
      else {
        pKVar10 = *(KdTreeNode **)(this + 8);
        param_3 = 0;
      }
    }
  }
  else if (param_3 == 0) {
    if (dVar11 <= 0.0) {
      lVar8 = *(long *)(this + 8);
      if (param_1 <= (double)((ulong)dVar11 ^ _LC95)) goto LAB_0010ded0;
      pKVar10 = *(KdTreeNode **)(this + 0x10);
      param_3 = 1;
    }
    else {
      lVar8 = *(long *)(this + 0x10);
      if (param_1 <= dVar11) {
LAB_0010ded0:
        pKVar10 = (KdTreeNode *)0x0;
        param_3 = 1;
      }
      else {
        pKVar10 = *(KdTreeNode **)(this + 8);
        param_3 = 1;
      }
    }
  }
  else {
    pKVar10 = (KdTreeNode *)0x0;
    lVar8 = 0;
  }
  dVar11 = dVar11 * dVar11 + dVar13 * dVar13 + dVar12 * dVar12;
  if (dVar11 < param_1 * param_1) {
    uVar4 = *param_5;
    uVar5 = (ulong)uVar4;
    auVar14._8_4_ = uVar4;
    auVar14._0_8_ = (ulong)pdVar2;
    auVar14._12_4_ = 0;
    if (uVar4 == 0) {
LAB_0010dd13:
      *param_7 = (double)this;
      param_7[1] = dVar11;
      goto LAB_0010dd1c;
    }
    if (uVar4 != 1) {
      uVar3 = 0;
      pdVar2 = param_7;
LAB_0010de0f:
      if (pdVar2[1] <= dVar11) goto LAB_0010de00;
      uVar9 = param_6 - 1;
      if (uVar4 < param_6) {
        uVar9 = uVar4;
      }
      if (uVar3 < uVar9) {
        uVar5 = (ulong)uVar9;
        pdVar6 = param_7 + uVar5 * 2;
        do {
          pdVar7 = pdVar6 + -2;
          dVar12 = (pdVar6 + uVar5 * -2 + (ulong)(uVar9 - 1) * 2)[1];
          *pdVar6 = pdVar6[uVar5 * -2 + (ulong)(uVar9 - 1) * 2];
          pdVar6[1] = dVar12;
          pdVar6 = pdVar7;
        } while (param_7 + uVar5 * 2 + (ulong)((uVar9 - uVar3) - 1) * -2 + -2 != pdVar7);
      }
      *pdVar2 = (double)this;
      pdVar2[1] = dVar11;
      goto LAB_0010dd1c;
    }
    if (param_7[1] <= dVar11) {
      if (1 < param_6) {
        param_7[2] = (double)this;
        param_7[3] = dVar11;
        *param_5 = 2;
        goto LAB_0010dd2d;
      }
    }
    else {
      if (param_6 != 1) {
        param_7[2] = *param_7;
        param_7[3] = param_7[1];
        goto LAB_0010dd13;
      }
      *param_7 = (double)this;
      param_7[1] = dVar11;
    }
    goto LAB_0010dd27;
  }
  goto LAB_0010dd2d;
LAB_0010de00:
  uVar3 = uVar3 + 1;
  pdVar2 = pdVar2 + 2;
  if (uVar4 <= uVar3) goto LAB_0010df58;
  goto LAB_0010de0f;
LAB_0010df58:
  pdVar2 = (double *)(ulong)param_6;
  if (uVar4 < param_6) {
    pdVar2 = param_7 + (ulong)uVar4 * 2;
    *pdVar2 = (double)this;
    pdVar2[1] = dVar11;
  }
LAB_0010dd1c:
  uVar4 = uVar4 + 1;
  uVar5 = (ulong)uVar4;
  auVar14._8_4_ = uVar4;
  auVar14._0_8_ = (ulong)pdVar2;
  auVar14._12_4_ = 0;
  *param_5 = uVar4;
  if (param_6 < uVar4) {
LAB_0010dd27:
    auVar14._4_4_ = 0;
    auVar14._0_4_ = param_6;
    auVar14._8_8_ = uVar5;
    *param_5 = param_6;
  }
LAB_0010dd2d:
  puVar1 = auVar14._0_8_;
  pdVar2 = auVar14._8_8_;
  if (lVar8 != 0) {
    search(param_1,lVar8,param_3,param_4,param_5,param_6,param_7);
    puVar1 = param_8;
    pdVar2 = pdStack_60;
  }
  this = pKVar10;
  if (pKVar10 == (KdTreeNode *)0x0) {
    return puVar1;
  }
  goto LAB_0010dc1b;
}



/* FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search(FLOAT_MATH::VERTEX_INDEX::Axes, float const*, float,
   unsigned int&, unsigned int, FLOAT_MATH::VERTEX_INDEX::KdTreeFindNode*,
   FLOAT_MATH::VERTEX_INDEX::KdTreeInterface const*) */

long * __thiscall
FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search
          (undefined8 param_1,KdTreeNode *this,int param_3,float *param_4,uint *param_5,uint param_6
          ,float *param_7,long *param_8)

{
  undefined8 uVar1;
  long *plVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  uint uVar10;
  KdTreeNode *pKVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  float *pfStack_60;
  
  fVar12 = (float)param_1;
  uVar17 = (undefined4)((ulong)param_1 >> 0x20);
  pfVar3 = param_4;
LAB_0010dfc9:
  if (*(code **)(*param_8 + 8) == KdTree::getPositionFloat) {
    uVar5 = *(int *)this * 3;
    auVar18._8_4_ = uVar5;
    auVar18._0_8_ = param_8[8] + (ulong)uVar5 * 4;
    auVar18._12_4_ = 0;
  }
  else {
    pfStack_60 = (float *)0x10e186;
    auVar18 = (**(code **)(*param_8 + 8))(param_8,*(int *)this,pfVar3);
    uVar17 = 0;
  }
  pfVar3 = auVar18._0_8_;
  fVar13 = *param_4 - *pfVar3;
  fVar16 = param_4[1] - pfVar3[1];
  fVar15 = param_4[2] - pfVar3[2];
  if (param_3 == 1) {
    if (fVar16 <= 0.0) {
      lVar9 = *(long *)(this + 8);
      if (fVar12 <= (float)((uint)fVar16 ^ _LC14)) goto LAB_0010e270;
      pKVar11 = *(KdTreeNode **)(this + 0x10);
      param_3 = 2;
    }
    else {
      lVar9 = *(long *)(this + 0x10);
      if (fVar12 <= fVar16) {
LAB_0010e270:
        pKVar11 = (KdTreeNode *)0x0;
        param_3 = 2;
      }
      else {
        pKVar11 = *(KdTreeNode **)(this + 8);
        param_3 = 2;
      }
    }
  }
  else if (param_3 == 2) {
    if (fVar15 <= 0.0) {
      lVar9 = *(long *)(this + 8);
      if (fVar12 <= (float)((uint)fVar15 ^ _LC14)) goto LAB_0010e260;
      pKVar11 = *(KdTreeNode **)(this + 0x10);
      param_3 = 0;
    }
    else {
      lVar9 = *(long *)(this + 0x10);
      if (fVar12 <= fVar15) {
LAB_0010e260:
        pKVar11 = (KdTreeNode *)0x0;
        param_3 = 0;
      }
      else {
        pKVar11 = *(KdTreeNode **)(this + 8);
        param_3 = 0;
      }
    }
  }
  else if (param_3 == 0) {
    if (fVar13 <= 0.0) {
      lVar9 = *(long *)(this + 8);
      if (fVar12 <= (float)((uint)fVar13 ^ _LC14)) goto LAB_0010e280;
      pKVar11 = *(KdTreeNode **)(this + 0x10);
      param_3 = 1;
    }
    else {
      lVar9 = *(long *)(this + 0x10);
      if (fVar12 <= fVar13) {
LAB_0010e280:
        pKVar11 = (KdTreeNode *)0x0;
        param_3 = 1;
      }
      else {
        pKVar11 = *(KdTreeNode **)(this + 8);
        param_3 = 1;
      }
    }
  }
  else {
    pKVar11 = (KdTreeNode *)0x0;
    lVar9 = 0;
  }
  fVar13 = fVar13 * fVar13 + fVar16 * fVar16 + fVar15 * fVar15;
  if (fVar13 < fVar12 * fVar12) {
    uVar5 = *param_5;
    uVar6 = (ulong)uVar5;
    auVar18._8_4_ = uVar5;
    auVar18._0_8_ = (ulong)pfVar3;
    auVar18._12_4_ = 0;
    dVar14 = (double)fVar13;
    if (uVar5 == 0) {
LAB_0010e0c6:
      *(KdTreeNode **)param_7 = this;
      *(double *)(param_7 + 2) = dVar14;
      goto LAB_0010e0cf;
    }
    if (uVar5 != 1) {
      uVar4 = 0;
      pfVar3 = param_7;
LAB_0010e1bf:
      if (*(double *)(pfVar3 + 2) <= dVar14) goto LAB_0010e1b0;
      uVar10 = param_6 - 1;
      if (uVar5 < param_6) {
        uVar10 = uVar5;
      }
      if (uVar4 < uVar10) {
        uVar6 = (ulong)uVar10;
        pfVar7 = param_7 + uVar6 * 4;
        do {
          pfVar8 = pfVar7 + -4;
          uVar1 = *(undefined8 *)(pfVar7 + uVar6 * -4 + (ulong)(uVar10 - 1) * 4 + 2);
          *(undefined8 *)pfVar7 = *(undefined8 *)(pfVar7 + uVar6 * -4 + (ulong)(uVar10 - 1) * 4);
          *(undefined8 *)(pfVar7 + 2) = uVar1;
          pfVar7 = pfVar8;
        } while (param_7 + uVar6 * 4 + (ulong)((uVar10 - uVar4) - 1) * -4 + -4 != pfVar8);
      }
      *(KdTreeNode **)pfVar3 = this;
      *(double *)(pfVar3 + 2) = dVar14;
      goto LAB_0010e0cf;
    }
    if (*(double *)(param_7 + 2) <= dVar14) {
      if (1 < param_6) {
        *(KdTreeNode **)(param_7 + 4) = this;
        *(double *)(param_7 + 6) = dVar14;
        *param_5 = 2;
        goto LAB_0010e0e0;
      }
    }
    else {
      if (param_6 != 1) {
        *(undefined8 *)(param_7 + 4) = *(undefined8 *)param_7;
        *(undefined8 *)(param_7 + 6) = *(undefined8 *)(param_7 + 2);
        goto LAB_0010e0c6;
      }
      *(KdTreeNode **)param_7 = this;
      *(double *)(param_7 + 2) = dVar14;
    }
    goto LAB_0010e0da;
  }
  goto LAB_0010e0e0;
LAB_0010e1b0:
  uVar4 = uVar4 + 1;
  pfVar3 = pfVar3 + 4;
  if (uVar5 <= uVar4) goto LAB_0010e300;
  goto LAB_0010e1bf;
LAB_0010e300:
  pfVar3 = (float *)(ulong)param_6;
  if (uVar5 < param_6) {
    pfVar3 = param_7 + (ulong)uVar5 * 4;
    *(KdTreeNode **)pfVar3 = this;
    *(double *)(pfVar3 + 2) = dVar14;
  }
LAB_0010e0cf:
  uVar5 = uVar5 + 1;
  uVar6 = (ulong)uVar5;
  auVar18._8_4_ = uVar5;
  auVar18._0_8_ = (ulong)pfVar3;
  auVar18._12_4_ = 0;
  *param_5 = uVar5;
  if (param_6 < uVar5) {
LAB_0010e0da:
    auVar18._4_4_ = 0;
    auVar18._0_4_ = param_6;
    auVar18._8_8_ = uVar6;
    *param_5 = param_6;
  }
LAB_0010e0e0:
  plVar2 = auVar18._0_8_;
  pfVar3 = auVar18._8_8_;
  if (lVar9 != 0) {
    search(CONCAT44(uVar17,fVar12),lVar9,param_3,param_4,param_5,param_6,param_7);
    uVar17 = 0;
    plVar2 = param_8;
    pfVar3 = pfStack_60;
  }
  this = pKVar11;
  if (pKVar11 == (KdTreeNode *)0x0) {
    return plVar2;
  }
  goto LAB_0010dfc9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::Eigen<float>::DecrSortEigenStuff() */

void __thiscall FLOAT_MATH::Eigen<float>::DecrSortEigenStuff(Eigen<float> *this)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  Eigen<float> EVar5;
  long lVar6;
  int iVar7;
  Eigen<float> *pEVar9;
  Eigen<float> *pEVar10;
  int iVar11;
  Eigen<float> *pEVar12;
  Eigen<float> *pEVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long lVar8;
  
  fVar3 = _LC3;
  fVar16 = *(float *)(this + 0x14);
  fVar24 = *(float *)(this + 0x20);
  fVar21 = (float)*(undefined8 *)(this + 4);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 4) >> 0x20);
  fVar18 = *(float *)(this + 0x10);
  if (fVar22 != 0.0) {
    fVar19 = SQRT(fVar21 * fVar21 + fVar22 * fVar22);
    fVar21 = (_LC3 / fVar19) * fVar21;
    fVar17 = (_LC3 / fVar19) * fVar22;
    fVar20 = (float)((uint)fVar21 ^ _LC14);
    fVar23 = (fVar21 + fVar21) * fVar16 + (fVar24 - fVar18) * fVar17;
    fVar25 = fVar23 * fVar17;
    fVar18 = fVar18 + fVar25;
    fVar24 = fVar24 - fVar25;
    fVar16 = fVar16 - fVar23 * fVar21;
    fVar23 = fVar17;
  }
  else {
    fVar19 = fVar21;
    fVar21 = _LC3;
    fVar17 = _UNK_00111544;
    fVar20 = _LC3;
    fVar23 = 0.0;
  }
  EVar5 = (Eigen<float>)(fVar22 == 0.0);
  this[0x3c] = EVar5;
  lVar6 = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 0x28) = fVar18;
  uVar4 = _LC11;
  *(float *)(this + 0x30) = fVar19;
  fVar18 = _LC3;
  *(float *)(this + 0x2c) = fVar24;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)this;
  *(float *)(this + 0x34) = fVar16;
  *(undefined1 (*) [16])this = ZEXT416((uint)fVar18);
  *(float *)(this + 0x10) = fVar21;
  *(float *)(this + 0x14) = fVar17;
  *(float *)(this + 0x1c) = fVar23;
  *(float *)(this + 0x20) = fVar20;
  pEVar10 = this + 0x24;
LAB_0010e3f9:
  iVar15 = 0x20;
  iVar14 = (int)lVar6;
  lVar8 = lVar6;
LAB_0010e441:
  iVar7 = (int)lVar8;
  if (iVar7 != 2) goto LAB_0010e410;
  goto LAB_0010e446;
LAB_0010e410:
  fVar16 = (float)(*(uint *)(this + lVar8 * 4 + 0x24) & uVar4) +
           (float)(*(uint *)(this + lVar8 * 4 + 0x28) & uVar4);
  lVar1 = lVar8 * 4;
  lVar8 = lVar8 + 1;
  if (fVar16 != (float)(*(uint *)(this + lVar1 + 0x30) & uVar4) + fVar16) goto LAB_0010e441;
LAB_0010e446:
  if (iVar7 != iVar14) {
    fVar16 = *(float *)(pEVar10 + 0xc);
    fVar24 = *(float *)pEVar10;
    fVar18 = (*(float *)(pEVar10 + 4) - fVar24) / (fVar16 + fVar16);
    fVar21 = SQRT(fVar18 * fVar18 + fVar3);
    if (fVar18 < 0.0) {
      fVar18 = fVar18 - fVar21;
    }
    else {
      fVar18 = fVar18 + fVar21;
    }
    fVar16 = (*(float *)(this + (long)iVar7 * 4 + 0x24) - fVar24) + fVar16 / fVar18;
    iVar11 = iVar7 + -1;
    if (iVar14 <= iVar11) {
      fVar24 = 0.0;
      pEVar9 = this + (long)(iVar7 + 8) * 4;
      fVar18 = fVar3;
      fVar21 = fVar3;
      do {
        fVar18 = fVar18 * *(float *)(pEVar9 + 0xc);
        fVar22 = *(float *)(pEVar9 + 0xc) * fVar21;
        if ((float)((uint)fVar18 & uVar4) < (float)((uint)fVar16 & uVar4)) {
          fVar18 = fVar18 / fVar16;
          fVar19 = SQRT(fVar18 * fVar18 + fVar3);
          fVar21 = fVar3 / fVar19;
          fVar19 = fVar16 * fVar19;
          fVar18 = fVar18 * fVar21;
        }
        else {
          fVar16 = fVar16 / fVar18;
          fVar21 = SQRT(fVar16 * fVar16 + fVar3);
          fVar19 = fVar18 * fVar21;
          fVar18 = fVar3 / fVar21;
          fVar21 = fVar16 * fVar18;
        }
        *(float *)(pEVar9 + 0x10) = fVar19;
        fVar19 = *(float *)(pEVar9 + 4) - fVar24;
        fVar16 = (*(float *)pEVar9 - fVar19) * fVar18 + (fVar22 + fVar22) * fVar21;
        fVar24 = fVar18 * fVar16;
        fVar16 = fVar16 * fVar21 - fVar22;
        *(float *)(pEVar9 + 4) = fVar19 + fVar24;
        pEVar12 = pEVar9 + -0x24;
        do {
          fVar22 = *(float *)pEVar12;
          pEVar13 = pEVar12 + 0xc;
          fVar19 = (float)((ulong)*(undefined8 *)pEVar12 >> 0x20);
          *(float *)pEVar12 = fVar21 * fVar22 - fVar19 * fVar18;
          *(float *)(pEVar12 + 4) = fVar22 * fVar18 + fVar19 * fVar21;
          pEVar12 = pEVar13;
        } while (pEVar9 != pEVar13);
        iVar11 = iVar11 + -1;
        pEVar9 = pEVar9 + -4;
      } while (iVar14 <= iVar11);
      fVar24 = *(float *)pEVar10 - fVar24;
    }
    *(float *)pEVar10 = fVar24;
    *(float *)(pEVar10 + 0xc) = fVar16;
    *(undefined4 *)(this + (long)iVar7 * 4 + 0x30) = 0;
    iVar15 = iVar15 + -1;
    lVar8 = lVar6;
    if (iVar15 == 0) {
      fVar16 = *(float *)(this + 0x24);
      fVar24 = *(float *)(this + 0x28);
      if (fVar24 <= fVar16) goto LAB_0010e5ed;
      goto LAB_0010e706;
    }
    goto LAB_0010e441;
  }
  lVar6 = lVar6 + 1;
  pEVar10 = pEVar10 + 4;
  if (lVar6 == 3) goto code_r0x0010e6f3;
  goto LAB_0010e3f9;
code_r0x0010e6f3:
  fVar16 = *(float *)(this + 0x24);
  fVar24 = *(float *)(this + 0x28);
  if (fVar24 <= fVar16) {
LAB_0010e5ed:
    fVar18 = *(float *)(this + 0x2c);
    if (fVar18 <= fVar16) goto LAB_0010e638;
LAB_0010e5fa:
    fVar24 = fVar18;
    lVar6 = 2;
  }
  else {
LAB_0010e706:
    fVar18 = *(float *)(this + 0x2c);
    if (fVar24 < *(float *)(this + 0x2c)) goto LAB_0010e5fa;
    lVar6 = 1;
  }
  *(float *)(this + lVar6 * 4 + 0x24) = fVar16;
  *(float *)(this + 0x24) = fVar24;
  pEVar10 = this;
  do {
    fVar16 = *(float *)pEVar10;
    EVar5 = (Eigen<float>)((byte)EVar5 ^ 1);
    *(float *)pEVar10 = *(float *)(pEVar10 + lVar6 * 4);
    *(float *)(pEVar10 + lVar6 * 4) = fVar16;
    pEVar10 = pEVar10 + 0xc;
  } while (this + 0x24 != pEVar10);
  fVar24 = *(float *)(this + 0x28);
  fVar18 = *(float *)(this + 0x2c);
  this[0x3c] = EVar5;
LAB_0010e638:
  if (fVar24 < fVar18) {
    *(float *)(this + 0x2c) = fVar24;
    *(float *)(this + 0x28) = fVar18;
    pEVar10 = this + 4;
    do {
      uVar2 = *(undefined4 *)pEVar10;
      pEVar9 = pEVar10 + 0xc;
      EVar5 = (Eigen<float>)((byte)EVar5 ^ 1);
      *(undefined4 *)pEVar10 = *(undefined4 *)(pEVar10 + 4);
      *(undefined4 *)(pEVar10 + 4) = uVar2;
      pEVar10 = pEVar9;
    } while (this + 0x28 != pEVar9);
    this[0x3c] = EVar5;
  }
  uVar4 = _LC14;
  if (EVar5 == (Eigen<float>)0x0) {
    *(uint *)this = *(uint *)this ^ _LC14;
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) ^ uVar4;
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) ^ uVar4;
  }
  return;
}



/* FLOAT_MATH::Eigen<double>::DecrSortEigenStuff() */

void __thiscall FLOAT_MATH::Eigen<double>::DecrSortEigenStuff(Eigen<double> *this)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  int iVar5;
  Eigen<double> *pEVar7;
  Eigen<double> *pEVar8;
  long lVar9;
  int iVar10;
  Eigen<double> *pEVar11;
  Eigen<double> *pEVar12;
  int iVar13;
  int iVar14;
  Eigen<double> EVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  long lVar6;
  
  dVar20 = _LC56;
  dVar4 = _LC54;
  dVar24 = *(double *)(this + 8);
  dVar25 = *(double *)(this + 0x10);
  dVar22 = *(double *)(this + 0x20);
  dVar27 = *(double *)(this + 0x28);
  dVar19 = *(double *)(this + 0x40);
  if (dVar25 != 0.0) {
    dVar21 = (double)(float)SQRT(dVar25 * dVar25 + dVar24 * dVar24);
    dVar24 = (_LC54 / dVar21) * dVar24;
    dVar18 = (_LC54 / dVar21) * dVar25;
    dVar23 = (double)((ulong)dVar24 ^ _LC95);
    dVar26 = (dVar24 + dVar24) * dVar27 + (dVar19 - dVar22) * dVar18;
    dVar28 = dVar26 * dVar18;
    dVar22 = dVar22 + dVar28;
    dVar19 = dVar19 - dVar28;
    dVar27 = dVar27 - dVar26 * dVar24;
  }
  else {
    dVar18 = 0.0;
    dVar23 = _LC54;
    dVar21 = dVar24;
    dVar24 = _LC56;
  }
  EVar15 = (Eigen<double>)(dVar25 == 0.0);
  this[0x78] = EVar15;
  lVar9 = 0;
  *(double *)(this + 0x58) = dVar19;
  uVar3 = _LC58;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(double *)(this + 0x60) = dVar21;
  *(double *)(this + 0x68) = dVar27;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)this;
  *(double *)(this + 0x50) = dVar22;
  *(double *)this = dVar20;
  *(undefined8 *)(this + 8) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(double *)(this + 0x20) = dVar24;
  *(double *)(this + 0x28) = dVar18;
  *(double *)(this + 0x38) = dVar18;
  *(double *)(this + 0x40) = dVar23;
  pEVar8 = this + 0x48;
LAB_0010e86c:
  iVar13 = 0x20;
  iVar14 = (int)lVar9;
  lVar6 = lVar9;
LAB_0010e8b5:
  iVar5 = (int)lVar6;
  if (iVar5 != 2) goto LAB_0010e880;
  goto LAB_0010e8ba;
LAB_0010e880:
  dVar22 = (double)(*(ulong *)(this + lVar6 * 8 + 0x48) & uVar3) +
           (double)(*(ulong *)(this + lVar6 * 8 + 0x50) & uVar3);
  lVar1 = lVar6 * 8;
  lVar6 = lVar6 + 1;
  if (dVar22 != (double)(*(ulong *)(this + lVar1 + 0x60) & uVar3) + dVar22) goto LAB_0010e8b5;
LAB_0010e8ba:
  if (iVar5 != iVar14) {
    dVar22 = *(double *)(pEVar8 + 0x18);
    dVar27 = *(double *)pEVar8;
    dVar19 = (*(double *)(pEVar8 + 8) - dVar27) / (dVar22 + dVar22);
    dVar24 = (double)(float)SQRT(dVar19 * dVar19 + dVar4);
    if (dVar19 < 0.0) {
      dVar19 = dVar19 - dVar24;
    }
    else {
      dVar19 = dVar19 + dVar24;
    }
    dVar22 = (*(double *)(this + (long)iVar5 * 8 + 0x48) - dVar27) + dVar22 / dVar19;
    iVar10 = iVar5 + -1;
    if (iVar14 <= iVar10) {
      dVar27 = 0.0;
      pEVar7 = this + (long)(iVar5 + 8) * 8;
      dVar19 = dVar4;
      dVar24 = dVar4;
      do {
        dVar24 = dVar24 * *(double *)(pEVar7 + 0x18);
        dVar25 = *(double *)(pEVar7 + 0x18) * dVar19;
        if ((double)((ulong)dVar24 & uVar3) < (double)((ulong)dVar22 & uVar3)) {
          dVar24 = dVar24 / dVar22;
          dVar20 = (double)(float)SQRT(dVar24 * dVar24 + dVar4);
          dVar19 = dVar4 / dVar20;
          dVar20 = dVar22 * dVar20;
          dVar24 = dVar24 * dVar19;
        }
        else {
          dVar22 = dVar22 / dVar24;
          dVar19 = (double)(float)SQRT(dVar22 * dVar22 + dVar4);
          dVar20 = dVar24 * dVar19;
          dVar24 = dVar4 / dVar19;
          dVar19 = dVar22 * dVar24;
        }
        *(double *)(pEVar7 + 0x20) = dVar20;
        dVar20 = *(double *)(pEVar7 + 8) - dVar27;
        dVar22 = (*(double *)pEVar7 - dVar20) * dVar24 + (dVar25 + dVar25) * dVar19;
        dVar27 = dVar24 * dVar22;
        dVar22 = dVar22 * dVar19 - dVar25;
        *(double *)(pEVar7 + 8) = dVar20 + dVar27;
        pEVar11 = pEVar7 + -0x48;
        do {
          dVar25 = *(double *)pEVar11;
          pEVar12 = pEVar11 + 0x18;
          *(double *)pEVar11 = dVar19 * dVar25 - *(double *)(pEVar11 + 8) * dVar24;
          *(double *)(pEVar11 + 8) = *(double *)(pEVar11 + 8) * dVar19 + dVar25 * dVar24;
          pEVar11 = pEVar12;
        } while (pEVar7 != pEVar12);
        iVar10 = iVar10 + -1;
        pEVar7 = pEVar7 + -8;
      } while (iVar14 <= iVar10);
      dVar27 = *(double *)pEVar8 - dVar27;
    }
    *(double *)pEVar8 = dVar27;
    *(double *)(pEVar8 + 0x18) = dVar22;
    *(undefined8 *)(this + (long)iVar5 * 8 + 0x60) = 0;
    iVar13 = iVar13 + -1;
    lVar6 = lVar9;
    if (iVar13 == 0) {
      dVar22 = *(double *)(this + 0x48);
      dVar27 = *(double *)(this + 0x50);
      uVar16 = SUB84(dVar27,0);
      uVar17 = (undefined4)((ulong)dVar27 >> 0x20);
      if (dVar27 <= dVar22) goto LAB_0010ea8d;
      goto LAB_0010ebbf;
    }
    goto LAB_0010e8b5;
  }
  lVar9 = lVar9 + 1;
  pEVar8 = pEVar8 + 8;
  if (lVar9 == 3) goto code_r0x0010ebab;
  goto LAB_0010e86c;
code_r0x0010ebab:
  dVar22 = *(double *)(this + 0x48);
  dVar27 = *(double *)(this + 0x50);
  uVar16 = SUB84(dVar27,0);
  uVar17 = (undefined4)((ulong)dVar27 >> 0x20);
  if (dVar27 <= dVar22) {
LAB_0010ea8d:
    dVar27 = *(double *)(this + 0x58);
    if (dVar27 <= dVar22) goto LAB_0010eadc;
LAB_0010ea9c:
    lVar9 = 2;
  }
  else {
LAB_0010ebbf:
    dVar27 = *(double *)(this + 0x58);
    if ((double)CONCAT44(uVar17,uVar16) <= dVar27 && dVar27 != (double)CONCAT44(uVar17,uVar16))
    goto LAB_0010ea9c;
    dVar27 = (double)CONCAT44(uVar17,uVar16);
    lVar9 = 1;
  }
  *(double *)(this + lVar9 * 8 + 0x48) = dVar22;
  *(double *)(this + 0x48) = dVar27;
  pEVar8 = this;
  do {
    dVar22 = *(double *)pEVar8;
    EVar15 = (Eigen<double>)((byte)EVar15 ^ 1);
    *(double *)pEVar8 = *(double *)(pEVar8 + lVar9 * 8);
    *(double *)(pEVar8 + lVar9 * 8) = dVar22;
    pEVar8 = pEVar8 + 0x18;
  } while (this + 0x48 != pEVar8);
  uVar16 = (undefined4)*(undefined8 *)(this + 0x50);
  uVar17 = (undefined4)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
  dVar27 = *(double *)(this + 0x58);
  this[0x78] = EVar15;
LAB_0010eadc:
  if ((double)CONCAT44(uVar17,uVar16) <= dVar27 && dVar27 != (double)CONCAT44(uVar17,uVar16)) {
    *(ulong *)(this + 0x58) = CONCAT44(uVar17,uVar16);
    *(double *)(this + 0x50) = dVar27;
    pEVar8 = this + 8;
    do {
      uVar2 = *(undefined8 *)pEVar8;
      pEVar7 = pEVar8 + 0x18;
      EVar15 = (Eigen<double>)((byte)EVar15 ^ 1);
      *(undefined8 *)pEVar8 = *(undefined8 *)(pEVar8 + 8);
      *(undefined8 *)(pEVar8 + 8) = uVar2;
      pEVar8 = pEVar7;
    } while (this + 0x50 != pEVar7);
    this[0x78] = EVar15;
  }
  uVar3 = _LC95;
  if (EVar15 == (Eigen<double>)0x0) {
    *(ulong *)this = *(ulong *)this ^ _LC95;
    *(ulong *)(this + 0x18) = *(ulong *)(this + 0x18) ^ uVar3;
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) ^ uVar3;
  }
  return;
}



/* void std::vector<double, std::allocator<double> >::_M_realloc_insert<double
   const&>(__gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >,
   double const&) */

void __thiscall
std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
          (vector<double,std::allocator<double>> *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010ed50;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010ed5a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010ed50:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010ed5a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010ed5a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010ed2f;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010ed2f:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* FLOAT_MATH::MyVertexIndex::getIndex(double const*, bool&) */

int __thiscall
FLOAT_MATH::MyVertexIndex::getIndex(MyVertexIndex *this,double *param_1,bool *param_2)

{
  vector<double,std::allocator<double>> *pvVar1;
  double dVar2;
  KdTreeNode *__y;
  uint uVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  int iVar7;
  double *pdVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double *pdVar16;
  undefined8 *puVar17;
  int *piVar18;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  double local_60;
  double local_58;
  double local_50;
  int *local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  double dStack_30;
  double local_28;
  long local_20;
  
  auVar6 = _local_38;
  dVar2 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[8] & 1) == 0) {
    local_38._4_4_ = (float)param_1[1];
    local_38._0_4_ = (float)dVar2;
    dStack_30._4_4_ = auVar6._12_4_;
    dStack_30._0_4_ = (float)param_1[2];
    iVar7 = (*(code *)**(undefined8 **)this)(this,local_38);
  }
  else {
    *param_2 = false;
    __y = *(KdTreeNode **)(this + 0x10);
    dVar5 = dVar2;
    if (((byte)this[8] & 2) == 0) {
      local_28 = param_1[2];
      dStack_30._0_4_ = SUB84(param_1[1],0);
      local_38 = (undefined1  [8])dVar2;
      dStack_30._4_4_ = (int)((ulong)param_1[1] >> 0x20);
    }
    else {
      do {
        dVar5 = dVar5 - (dVar5 / (double)__y) * (double)__y;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(dVar5)) {
        fmod(dVar2,(double)__y);
      }
      local_38 = (undefined1  [8])(dVar2 - dVar5);
      dVar2 = param_1[1];
      dVar5 = dVar2;
      do {
        dVar5 = dVar5 - (dVar5 / (double)__y) * (double)__y;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(dVar5)) {
        fmod(dVar2,(double)__y);
      }
      dStack_30 = dVar2 - dVar5;
      dVar2 = param_1[2];
      dVar5 = dVar2;
      do {
        dVar5 = dVar5 - (dVar5 / (double)__y) * (double)__y;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(dVar5)) {
        fmod(dVar2,(double)__y);
      }
      local_28 = dVar2 - dVar5;
    }
    local_48 = (int *)0x0;
    local_40 = 0;
    if (*(long *)(this + 0x30) != 0) {
      local_50 = (double)((ulong)local_50 & 0xffffffff00000000);
      VERTEX_INDEX::KdTreeNode::search
                (__y,*(long *)(this + 0x30),0,local_38,&local_50,1,&local_48,this + 0x20);
      if (local_50._0_4_ != 0) {
        iVar7 = *local_48;
        goto LAB_0010ee75;
      }
    }
    dVar5 = local_28;
    pdVar8 = *(double **)(this + 0x50);
    pdVar16 = *(double **)(this + 0x58);
    *param_2 = true;
    pvVar1 = (vector<double,std::allocator<double>> *)(this + 0x48);
    dVar2 = dStack_30;
    iVar7 = *(int *)(this + 0x40);
    local_58 = dStack_30;
    local_60 = (double)local_38;
    local_50 = local_28;
    if (pdVar8 == pdVar16) {
      std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                (pvVar1,pdVar16,&local_60);
      pdVar8 = *(double **)(this + 0x50);
      pdVar16 = *(double **)(this + 0x58);
    }
    else {
      *pdVar8 = (double)local_38;
      pdVar8 = pdVar8 + 1;
      *(double **)(this + 0x50) = pdVar8;
    }
    if (pdVar8 == pdVar16) {
      std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                (pvVar1,pdVar16,&local_58);
      pdVar8 = *(double **)(this + 0x50);
      pdVar16 = *(double **)(this + 0x58);
    }
    else {
      *pdVar8 = dVar2;
      pdVar8 = pdVar8 + 1;
      *(double **)(this + 0x50) = pdVar8;
    }
    if (pdVar16 == pdVar8) {
      std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                (pvVar1,pdVar16,&local_50);
    }
    else {
      *pdVar8 = dVar5;
      *(double **)(this + 0x50) = pdVar8 + 1;
    }
    puVar10 = *(undefined8 **)(this + 0x38);
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)operator_new(0x6010);
      puVar17 = puVar10 + 2;
      puVar14 = puVar17;
      do {
        *(undefined4 *)puVar14 = 0;
        puVar15 = puVar14 + 3;
        *(undefined1 (*) [16])(puVar14 + 1) = (undefined1  [16])0x0;
        puVar14 = puVar15;
      } while (puVar15 != puVar10 + 0xc02);
      *puVar10 = 0;
      iVar13 = 1;
      uVar11 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined8 **)(this + 0x38) = puVar10;
    }
    else {
      uVar3 = *(uint *)(puVar10 + 1);
      if (uVar3 == 0x400) {
        puVar10 = (undefined8 *)operator_new(0x6010);
        puVar17 = puVar10 + 2;
        puVar14 = puVar17;
        do {
          *(undefined4 *)puVar14 = 0;
          puVar15 = puVar14 + 3;
          *(undefined1 (*) [16])(puVar14 + 1) = (undefined1  [16])0x0;
          puVar14 = puVar15;
        } while (puVar10 + 0xc02 != puVar15);
        puVar14 = *(undefined8 **)(this + 0x38);
        *puVar10 = 0;
        uVar11 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar14 = puVar10;
        iVar13 = 1;
        *(undefined8 **)(this + 0x38) = puVar10;
      }
      else {
        uVar11 = (ulong)uVar3;
        iVar13 = uVar3 + 1;
        puVar17 = puVar10 + uVar11 * 3 + 2;
      }
    }
    *(int *)(puVar10 + 1) = iVar13;
    *(int *)(puVar10 + uVar11 * 3 + 2) = iVar7;
    *(undefined1 (*) [16])(puVar10 + uVar11 * 3 + 3) = (undefined1  [16])0x0;
    piVar9 = *(int **)(this + 0x30);
    if (piVar9 != (int *)0x0) {
      lVar4 = *(long *)(this + 0x48);
      pdVar8 = (double *)(lVar4 + (ulong)(uint)(iVar7 * 3) * 8);
      iVar13 = *piVar9;
      do {
        if (*pdVar8 <= *(double *)(lVar4 + (ulong)(uint)(iVar13 * 3) * 8)) {
          piVar18 = *(int **)(piVar9 + 2);
          if (piVar18 == (int *)0x0) {
            *(undefined8 **)(piVar9 + 2) = puVar17;
            goto LAB_0010ee75;
          }
        }
        else {
          piVar18 = *(int **)(piVar9 + 4);
          if (piVar18 == (int *)0x0) {
            *(undefined8 **)(piVar9 + 4) = puVar17;
            goto LAB_0010ee75;
          }
        }
        if (*(double *)(lVar4 + (ulong)(uint)(*piVar18 * 3) * 8 + 8) < pdVar8[1]) {
          piVar12 = *(int **)(piVar18 + 4);
          if (piVar12 == (int *)0x0) {
            *(undefined8 **)(piVar18 + 4) = puVar17;
            goto LAB_0010ee75;
          }
        }
        else {
          piVar12 = *(int **)(piVar18 + 2);
          if (piVar12 == (int *)0x0) {
            *(undefined8 **)(piVar18 + 2) = puVar17;
            goto LAB_0010ee75;
          }
        }
        if (*(double *)(lVar4 + (ulong)(uint)(*piVar12 * 3) * 8 + 0x10) < pdVar8[2]) {
          piVar9 = *(int **)(piVar12 + 4);
          if (piVar9 == (int *)0x0) {
            *(undefined8 **)(piVar12 + 4) = puVar17;
            goto LAB_0010ee75;
          }
        }
        else {
          piVar9 = *(int **)(piVar12 + 2);
          if (piVar9 == (int *)0x0) goto LAB_0010f2a0;
        }
        iVar13 = *piVar9;
      } while( true );
    }
    *(undefined8 **)(this + 0x30) = puVar17;
  }
  goto LAB_0010ee75;
LAB_0010f2a0:
  *(undefined8 **)(piVar12 + 2) = puVar17;
LAB_0010ee75:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* void std::vector<float, std::allocator<float> >::_M_realloc_insert<float
   const&>(__gnu_cxx::__normal_iterator<float*, std::vector<float, std::allocator<float> > >, float
   const&) */

void __thiscall
std::vector<float,std::allocator<float>>::_M_realloc_insert<float_const&>
          (vector<float,std::allocator<float>> *this,void *param_2,undefined4 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010f440;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010f44a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010f440:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010f44a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010f44a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010f41f;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010f41f:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* FLOAT_MATH::MyVertexIndex::getIndex(float const*, bool&) */

int __thiscall FLOAT_MATH::MyVertexIndex::getIndex(MyVertexIndex *this,float *param_1,bool *param_2)

{
  vector<float,std::allocator<float>> *pvVar1;
  float fVar2;
  float fVar3;
  float __x;
  uint uVar4;
  long lVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  int *piVar18;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [16];
  double local_28;
  long local_20;
  
  fVar2 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[8] & 1) == 0) {
    *param_2 = false;
    fVar3 = *(float *)(this + 0x18);
    fVar6 = fVar2;
    if (((byte)this[8] & 2) == 0) {
      local_40 = param_1[2];
      local_48 = CONCAT44(param_1[1],fVar2);
    }
    else {
      do {
        fVar6 = fVar6 - (fVar6 / fVar3) * fVar3;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar6)) {
        fmodf(fVar2,fVar3);
      }
      __x = param_1[1];
      local_48 = CONCAT44(local_48._4_4_,fVar2 - fVar6);
      fVar2 = __x;
      do {
        fVar2 = fVar2 - (fVar2 / fVar3) * fVar3;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar2)) {
        fmodf(__x,fVar3);
      }
      local_48 = CONCAT44(__x - fVar2,(float)local_48);
      fVar2 = param_1[2];
      fVar6 = fVar2;
      do {
        fVar6 = fVar6 - (fVar6 / fVar3) * fVar3;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar6)) {
        fmodf(fVar2,fVar3);
      }
      local_40 = fVar2 - fVar6;
    }
    local_38 = ZEXT816(0);
    if (*(KdTreeNode **)(this + 0x30) != (KdTreeNode *)0x0) {
      local_4c = 0.0;
      VERTEX_INDEX::KdTreeNode::search
                (*(KdTreeNode **)(this + 0x30),0,&local_48,&local_4c,1,local_38,this + 0x20);
      if (local_4c != 0.0) {
        iVar7 = *(int *)local_38._0_8_;
        goto LAB_0010f568;
      }
    }
    fVar3 = local_40;
    pfVar8 = *(float **)(this + 0x68);
    pfVar16 = *(float **)(this + 0x70);
    *param_2 = true;
    pvVar1 = (vector<float,std::allocator<float>> *)(this + 0x60);
    fVar2 = local_48._4_4_;
    iVar7 = *(int *)(this + 0x40);
    local_50 = local_48._4_4_;
    local_54 = (float)local_48;
    local_4c = local_40;
    if (pfVar8 == pfVar16) {
      std::vector<float,std::allocator<float>>::_M_realloc_insert<float_const&>
                (pvVar1,pfVar16,&local_54);
      pfVar8 = *(float **)(this + 0x68);
      pfVar16 = *(float **)(this + 0x70);
    }
    else {
      *pfVar8 = (float)local_48;
      pfVar8 = pfVar8 + 1;
      *(float **)(this + 0x68) = pfVar8;
    }
    if (pfVar8 == pfVar16) {
      std::vector<float,std::allocator<float>>::_M_realloc_insert<float_const&>
                (pvVar1,pfVar16,&local_50);
      pfVar8 = *(float **)(this + 0x68);
      pfVar16 = *(float **)(this + 0x70);
    }
    else {
      *pfVar8 = fVar2;
      pfVar8 = pfVar8 + 1;
      *(float **)(this + 0x68) = pfVar8;
    }
    if (pfVar16 == pfVar8) {
      std::vector<float,std::allocator<float>>::_M_realloc_insert<float_const&>
                (pvVar1,pfVar16,&local_4c);
    }
    else {
      *pfVar8 = fVar3;
      *(float **)(this + 0x68) = pfVar8 + 1;
    }
    puVar10 = *(undefined8 **)(this + 0x38);
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)operator_new(0x6010);
      puVar17 = puVar10 + 2;
      puVar14 = puVar17;
      do {
        *(undefined4 *)puVar14 = 0;
        puVar15 = puVar14 + 3;
        *(undefined1 (*) [16])(puVar14 + 1) = (undefined1  [16])0x0;
        puVar14 = puVar15;
      } while (puVar15 != puVar10 + 0xc02);
      *puVar10 = 0;
      iVar13 = 1;
      uVar11 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined8 **)(this + 0x38) = puVar10;
    }
    else {
      uVar4 = *(uint *)(puVar10 + 1);
      if (uVar4 == 0x400) {
        puVar10 = (undefined8 *)operator_new(0x6010);
        puVar17 = puVar10 + 2;
        puVar14 = puVar17;
        do {
          *(undefined4 *)puVar14 = 0;
          puVar15 = puVar14 + 3;
          *(undefined1 (*) [16])(puVar14 + 1) = (undefined1  [16])0x0;
          puVar14 = puVar15;
        } while (puVar10 + 0xc02 != puVar15);
        puVar14 = *(undefined8 **)(this + 0x38);
        *puVar10 = 0;
        uVar11 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar14 = puVar10;
        iVar13 = 1;
        *(undefined8 **)(this + 0x38) = puVar10;
      }
      else {
        uVar11 = (ulong)uVar4;
        iVar13 = uVar4 + 1;
        puVar17 = puVar10 + uVar11 * 3 + 2;
      }
    }
    *(int *)(puVar10 + 1) = iVar13;
    *(int *)(puVar10 + uVar11 * 3 + 2) = iVar7;
    *(undefined1 (*) [16])(puVar10 + uVar11 * 3 + 3) = (undefined1  [16])0x0;
    piVar9 = *(int **)(this + 0x30);
    if (piVar9 != (int *)0x0) {
      lVar5 = *(long *)(this + 0x60);
      pfVar8 = (float *)(lVar5 + (ulong)(uint)(iVar7 * 3) * 4);
      iVar13 = *piVar9;
      do {
        if (*pfVar8 <= *(float *)(lVar5 + (ulong)(uint)(iVar13 * 3) * 4)) {
          piVar18 = *(int **)(piVar9 + 2);
          if (piVar18 == (int *)0x0) {
            *(undefined8 **)(piVar9 + 2) = puVar17;
            goto LAB_0010f568;
          }
        }
        else {
          piVar18 = *(int **)(piVar9 + 4);
          if (piVar18 == (int *)0x0) {
            *(undefined8 **)(piVar9 + 4) = puVar17;
            goto LAB_0010f568;
          }
        }
        if (*(float *)(lVar5 + (ulong)(uint)(*piVar18 * 3) * 4 + 4) < pfVar8[1]) {
          piVar12 = *(int **)(piVar18 + 4);
          if (piVar12 == (int *)0x0) {
            *(undefined8 **)(piVar18 + 4) = puVar17;
            goto LAB_0010f568;
          }
        }
        else {
          piVar12 = *(int **)(piVar18 + 2);
          if (piVar12 == (int *)0x0) {
            *(undefined8 **)(piVar18 + 2) = puVar17;
            goto LAB_0010f568;
          }
        }
        if (*(float *)(lVar5 + (ulong)(uint)(*piVar12 * 3) * 4 + 8) < pfVar8[2]) {
          piVar9 = *(int **)(piVar12 + 4);
          if (piVar9 == (int *)0x0) {
            *(undefined8 **)(piVar12 + 4) = puVar17;
            goto LAB_0010f568;
          }
        }
        else {
          piVar9 = *(int **)(piVar12 + 2);
          if (piVar9 == (int *)0x0) goto LAB_0010f9aa;
        }
        iVar13 = *piVar9;
      } while( true );
    }
    *(undefined8 **)(this + 0x30) = puVar17;
  }
  else {
    local_28 = (double)param_1[2];
    local_38._8_4_ = SUB84((double)param_1[1],0);
    local_38._0_8_ = (double)fVar2;
    local_38._12_4_ = (int)((ulong)(double)param_1[1] >> 0x20);
    iVar7 = (**(code **)(*(long *)this + 8))(this,local_38);
  }
  goto LAB_0010f568;
LAB_0010f9aa:
  *(undefined8 **)(piVar12 + 2) = puVar17;
LAB_0010f568:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned int
   const&>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,void *param_2,undefined4 *param_3
          )

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010fb50;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010fb5a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010fb50:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010fb5a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010fb5a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010fb2b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010fb2b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FLOAT_MATH::Myfm_Tesselate::tesselate(float const*, float const*, float const*, unsigned int) */

void __thiscall
FLOAT_MATH::Myfm_Tesselate::tesselate
          (Myfm_Tesselate *this,float *param_1,float *param_2,float *param_3,uint param_4)

{
  vector<unsigned_int,std::allocator<unsigned_int>> *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  float local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x38) <= param_4) {
LAB_0010fde0:
    uVar5 = (**(code **)**(undefined8 **)(this + 0x18))
                      (*(undefined8 **)(this + 0x18),param_1,&local_4d);
    local_4c = uVar5;
    uVar6 = (**(code **)**(undefined8 **)(this + 0x18))
                      (*(undefined8 **)(this + 0x18),param_2,&local_4d);
    pvVar1 = (vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x20);
    local_48 = uVar6;
    uVar7 = (**(code **)**(undefined8 **)(this + 0x18))
                      (*(undefined8 **)(this + 0x18),param_3,&local_4d);
    puVar11 = *(undefined4 **)(this + 0x28);
    puVar8 = *(undefined4 **)(this + 0x30);
    local_44 = uVar7;
    if (puVar11 == puVar8) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                (pvVar1,puVar8,&local_4c);
      puVar11 = *(undefined4 **)(this + 0x28);
      puVar8 = *(undefined4 **)(this + 0x30);
    }
    else {
      *puVar11 = uVar5;
      puVar11 = puVar11 + 1;
      *(undefined4 **)(this + 0x28) = puVar11;
    }
    if (puVar11 == puVar8) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                (pvVar1,puVar8,&local_48);
      puVar11 = *(undefined4 **)(this + 0x28);
      puVar8 = *(undefined4 **)(this + 0x30);
    }
    else {
      *puVar11 = uVar6;
      puVar11 = puVar11 + 1;
      *(undefined4 **)(this + 0x28) = puVar11;
    }
    if (puVar11 == puVar8) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                (pvVar1,puVar11,&local_44);
    }
    else {
      *puVar11 = uVar7;
      *(undefined4 **)(this + 0x28) = puVar11 + 1;
    }
    goto LAB_0010fd9e;
  }
  fVar16 = (float)*(undefined8 *)param_1;
  fVar17 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar2 = param_1[2];
  fVar3 = param_3[2];
  fVar20 = (float)*(undefined8 *)param_2;
  fVar21 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar14 = *param_1 - *param_2;
  fVar4 = param_2[2];
  fVar18 = (float)*(undefined8 *)param_3;
  fVar19 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar15 = fVar14 * fVar14 + (fVar17 - fVar21) * (fVar17 - fVar21) +
           (fVar2 - fVar4) * (fVar2 - fVar4);
  fVar12 = *param_2 - *param_3;
  fVar13 = *param_3 - *param_1;
  fVar14 = *(float *)(this + 8);
  fVar13 = fVar13 * fVar13 + (fVar19 - fVar17) * (fVar19 - fVar17) +
           (fVar3 - fVar2) * (fVar3 - fVar2);
  fVar12 = fVar12 * fVar12 + (fVar21 - fVar19) * (fVar21 - fVar19) +
           (fVar4 - fVar3) * (fVar4 - fVar3);
  if ((fVar14 < fVar15) || (fVar14 < fVar12)) {
    if ((fVar15 < fVar12) || (fVar15 < fVar13)) {
LAB_0010fd38:
      if ((fVar15 <= fVar12) && (fVar13 <= fVar12)) {
        local_38 = (fVar3 - fVar4) * _LC13 + fVar4;
        local_40 = CONCAT44((fVar19 - fVar21) * _UNK_00111674 + fVar21,
                            (fVar18 - fVar20) * _LC13 + fVar20);
        tesselate(this,param_1,param_2,(float *)&local_40,param_4 + 1);
        tesselate(this,param_1,(float *)&local_40,param_3,param_4 + 1);
        goto LAB_0010fd9e;
      }
      goto LAB_0010fd46;
    }
    pfVar10 = (float *)&local_40;
    local_38 = (fVar4 - fVar2) * _LC13 + fVar2;
    local_40 = CONCAT44((fVar21 - fVar17) * _UNK_00111674 + fVar17,
                        (fVar20 - fVar16) * _LC13 + fVar16);
    pfVar9 = param_3;
  }
  else {
    if (fVar13 <= fVar14) goto LAB_0010fde0;
    if (fVar15 < fVar12) goto LAB_0010fd38;
LAB_0010fd46:
    local_38 = (fVar2 - fVar3) * _LC13 + fVar3;
    local_40 = CONCAT44((fVar17 - fVar19) * _UNK_00111674 + fVar19,
                        (fVar16 - fVar18) * _LC13 + fVar18);
    pfVar9 = (float *)&local_40;
    pfVar10 = param_2;
  }
  tesselate(this,param_1,pfVar10,pfVar9,param_4 + 1);
  tesselate(this,(float *)&local_40,param_2,param_3,param_4 + 1);
LAB_0010fd9e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::Myfm_Tesselate::tesselate(double const*, double const*, double const*, unsigned int)
    */

void __thiscall
FLOAT_MATH::Myfm_Tesselate::tesselate
          (Myfm_Tesselate *this,double *param_1,double *param_2,double *param_3,uint param_4)

{
  vector<unsigned_int,std::allocator<unsigned_int>> *pvVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  double *pdVar15;
  double *pdVar16;
  undefined4 *puVar17;
  long in_FS_OFFSET;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  double dStack_40;
  double local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x38) <= param_4) {
LAB_00110178:
    uVar11 = (**(code **)(**(long **)(this + 0x18) + 8))(*(long **)(this + 0x18),param_1,&local_55);
    local_54 = uVar11;
    uVar12 = (**(code **)(**(long **)(this + 0x18) + 8))(*(long **)(this + 0x18),param_2,&local_55);
    pvVar1 = (vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x20);
    local_50 = uVar12;
    uVar13 = (**(code **)(**(long **)(this + 0x18) + 8))(*(long **)(this + 0x18),param_3,&local_55);
    puVar17 = *(undefined4 **)(this + 0x28);
    puVar14 = *(undefined4 **)(this + 0x30);
    local_4c = uVar13;
    if (puVar17 == puVar14) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                (pvVar1,puVar14,&local_54);
      puVar17 = *(undefined4 **)(this + 0x28);
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    else {
      *puVar17 = uVar11;
      puVar17 = puVar17 + 1;
      *(undefined4 **)(this + 0x28) = puVar17;
    }
    if (puVar17 == puVar14) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                (pvVar1,puVar14,&local_50);
      puVar17 = *(undefined4 **)(this + 0x28);
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    else {
      *puVar17 = uVar12;
      puVar17 = puVar17 + 1;
      *(undefined4 **)(this + 0x28) = puVar17;
    }
    if (puVar17 == puVar14) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                (pvVar1,puVar17,&local_4c);
    }
    else {
      *puVar17 = uVar13;
      *(undefined4 **)(this + 0x28) = puVar17 + 1;
    }
    goto LAB_0011012a;
  }
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar2 = param_1[2];
  dVar20 = *param_1 - *param_2;
  dVar3 = param_2[2];
  dVar9 = *param_3;
  dVar10 = param_3[1];
  dVar4 = param_3[2];
  dVar21 = dVar20 * dVar20 + (dVar6 - dVar8) * (dVar6 - dVar8) + (dVar2 - dVar3) * (dVar2 - dVar3);
  dVar18 = *param_2 - *param_3;
  dVar19 = *param_3 - *param_1;
  dVar20 = *(double *)(this + 0x10);
  dVar19 = dVar19 * dVar19 + (dVar10 - dVar6) * (dVar10 - dVar6) + (dVar4 - dVar2) * (dVar4 - dVar2)
  ;
  dVar18 = dVar18 * dVar18 + (dVar8 - dVar10) * (dVar8 - dVar10) + (dVar3 - dVar4) * (dVar3 - dVar4)
  ;
  if ((dVar20 < dVar21) || (dVar20 < dVar18)) {
    if ((dVar21 < dVar18) || (dVar21 < dVar19)) {
LAB_001100bd:
      if ((dVar21 <= dVar18) && (dVar19 <= dVar18)) {
        local_38 = (dVar4 - dVar3) * _LC50 + dVar3;
        local_48 = (dVar9 - dVar7) * _LC50 + dVar7;
        dStack_40 = (dVar10 - dVar8) * _LC50 + dVar8;
        tesselate(this,param_1,param_2,&local_48,param_4 + 1);
        tesselate(this,param_1,&local_48,param_3,param_4 + 1);
        goto LAB_0011012a;
      }
      goto LAB_001100cd;
    }
    pdVar16 = &local_48;
    local_38 = (dVar3 - dVar2) * _LC50 + dVar2;
    local_48 = (dVar7 - dVar5) * _LC50 + dVar5;
    dStack_40 = (dVar8 - dVar6) * _LC50 + dVar6;
    pdVar15 = param_3;
  }
  else {
    if (dVar19 <= dVar20) goto LAB_00110178;
    if (dVar21 < dVar18) goto LAB_001100bd;
LAB_001100cd:
    local_38 = (dVar2 - dVar4) * _LC50 + dVar4;
    local_48 = (dVar5 - dVar9) * _LC50 + dVar9;
    dStack_40 = (dVar6 - dVar10) * _LC50 + dVar10;
    pdVar15 = &local_48;
    pdVar16 = param_2;
  }
  tesselate(this,param_1,pdVar16,pdVar15,param_4 + 1);
  tesselate(this,&local_48,param_2,param_3,param_4 + 1);
LAB_0011012a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FLOAT_MATH::Myfm_Tesselate::tesselate(FLOAT_MATH::fm_VertexIndex*, unsigned int, unsigned int
   const*, float, unsigned int, unsigned int&) */

long __thiscall
FLOAT_MATH::Myfm_Tesselate::tesselate
          (Myfm_Tesselate *this,fm_VertexIndex *param_1,uint param_2,uint *param_3,float param_4,
          uint param_5,uint *param_6)

{
  code *pcVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  void *__ptr;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  size_t sVar8;
  
  lVar5 = *(long *)param_1;
  *(float *)(this + 8) = param_4 * param_4;
  *(uint *)(this + 0x38) = param_5;
  pcVar1 = *(code **)(lVar5 + 0x38);
  *(fm_VertexIndex **)(this + 0x18) = param_1;
  *(double *)(this + 0x10) = (double)(param_4 * param_4);
  if (pcVar1 == MyVertexIndex::isDouble) {
    bVar3 = (byte)param_1[8] & 1;
  }
  else {
    bVar3 = (*pcVar1)(param_1);
    param_1 = *(fm_VertexIndex **)(this + 0x18);
    lVar5 = *(long *)param_1;
  }
  pcVar1 = *(code **)(lVar5 + 0x30);
  if (bVar3 == 0) {
    if (pcVar1 == MyVertexIndex::getVcount) {
      uVar4 = *(uint *)(param_1 + 0x40);
    }
    else {
      uVar4 = (*pcVar1)(param_1);
    }
    sVar8 = (ulong)uVar4 * 0xc;
    __ptr = malloc(sVar8);
    plVar2 = *(long **)(this + 0x18);
    if (*(code **)(*plVar2 + 0x10) == MyVertexIndex::getVerticesFloat) {
      lVar5 = plVar2[0xc];
      if (plVar2[0xd] == lVar5) {
        lVar5 = 0;
      }
    }
    else {
      lVar5 = (**(code **)(*plVar2 + 0x10))();
    }
    __memcpy_chk(__ptr,lVar5,sVar8,sVar8);
    if (param_2 != 0) {
      puVar7 = param_3;
      do {
        puVar6 = puVar7 + 3;
        tesselate(this,(float *)((long)__ptr + (ulong)(*puVar7 * 3) * 4),
                  (float *)((long)__ptr + (ulong)(puVar7[1] * 3) * 4),
                  (float *)((long)__ptr + (ulong)(puVar7[2] * 3) * 4),0);
        puVar7 = puVar6;
      } while (puVar6 != param_3 + (ulong)param_2 * 3);
    }
  }
  else {
    if (pcVar1 == MyVertexIndex::getVcount) {
      uVar4 = *(uint *)(param_1 + 0x40);
    }
    else {
      uVar4 = (*pcVar1)(param_1);
    }
    sVar8 = (ulong)uVar4 * 0x18;
    __ptr = malloc(sVar8);
    plVar2 = *(long **)(this + 0x18);
    if (*(code **)(*plVar2 + 0x18) == MyVertexIndex::getVerticesDouble) {
      lVar5 = plVar2[9];
      if (plVar2[10] == lVar5) {
        lVar5 = 0;
      }
    }
    else {
      lVar5 = (**(code **)(*plVar2 + 0x18))();
    }
    __memcpy_chk(__ptr,lVar5,sVar8,sVar8);
    if (param_2 != 0) {
      puVar7 = param_3;
      do {
        puVar6 = puVar7 + 3;
        tesselate(this,(double *)((long)__ptr + (ulong)(*puVar7 * 3) * 8),
                  (double *)((long)__ptr + (ulong)(puVar7[1] * 3) * 8),
                  (double *)((long)__ptr + (ulong)(puVar7[2] * 3) * 8),0);
        puVar7 = puVar6;
      } while (puVar6 != param_3 + (ulong)param_2 * 3);
    }
  }
  free(__ptr);
  lVar5 = *(long *)(this + 0x20);
  *param_6 = (uint)((ulong)(*(long *)(this + 0x28) - lVar5 >> 2) / 3);
  return lVar5;
}



/* void std::vector<FLOAT_MATH::TVec, std::allocator<FLOAT_MATH::TVec>
   >::_M_realloc_insert<FLOAT_MATH::TVec const&>(__gnu_cxx::__normal_iterator<FLOAT_MATH::TVec*,
   std::vector<FLOAT_MATH::TVec, std::allocator<FLOAT_MATH::TVec> > >, FLOAT_MATH::TVec const&) */

void __thiscall
std::vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>>::
_M_realloc_insert<FLOAT_MATH::TVec_const&>
          (vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    uVar9 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_001106c0;
    if (0x555555555555555 < uVar9) {
      uVar9 = 0x555555555555555;
    }
    uVar9 = uVar9 * 0x18;
LAB_001106ca:
    puVar7 = (undefined8 *)operator_new(uVar9);
    local_50 = (long)puVar7 + uVar9;
    uVar4 = param_3[1];
    puVar10 = puVar7 + 3;
    uVar3 = param_3[2];
    *(undefined8 *)((long)puVar7 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar7 + (long)puVar8))[1] = uVar4;
    *(undefined8 *)((long)(puVar7 + 2) + (long)puVar8) = uVar3;
    puVar8 = puVar2;
    puVar11 = puVar7;
    if (param_2 != puVar2) {
LAB_00110630:
      do {
        uVar4 = puVar8[1];
        uVar3 = puVar8[2];
        puVar10 = puVar8 + 3;
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar3;
        puVar8 = puVar10;
        puVar7 = puVar7 + 3;
      } while (puVar10 != param_2);
      puVar10 = (undefined8 *)
                ((long)puVar11 +
                ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x30);
      puVar7 = puVar11;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00110686;
  }
  else {
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar6) {
LAB_001106c0:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_001106ca;
    }
    if (uVar9 != 0) {
      if (0x555555555555555 < uVar9) {
        uVar9 = 0x555555555555555;
      }
      uVar9 = uVar9 * 0x18;
      goto LAB_001106ca;
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar7 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x18;
    local_50 = 0;
    puVar8[2] = param_3[2];
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    puVar8 = puVar2;
    puVar11 = puVar7;
    if (param_2 != puVar2) goto LAB_00110630;
  }
  __n = ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18;
  puVar8 = (undefined8 *)((long)puVar10 + __n);
  memcpy(puVar10,param_2,__n);
LAB_00110686:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* FLOAT_MATH::CTriangulator::addPoint(double, double, double) */

void __thiscall
FLOAT_MATH::CTriangulator::addPoint
          (CTriangulator *this,double param_1,double param_2,double param_3)

{
  double *pdVar1;
  double *pdVar2;
  long in_FS_OFFSET;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  pdVar1 = *(double **)(this + 0x48);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (pdVar1 == *(double **)(this + 0x40)) {
    *(double *)(this + 0x10) = param_1;
    *(double *)(this + 0x18) = param_2;
    *(double *)(this + 0x20) = param_3;
    *(double *)(this + 0x38) = param_3;
    *(double *)(this + 0x28) = param_1;
    *(double *)(this + 0x30) = param_2;
  }
  else {
    if (param_1 < *(double *)(this + 0x10)) {
      *(double *)(this + 0x10) = param_1;
    }
    if (param_2 < *(double *)(this + 0x18)) {
      *(double *)(this + 0x18) = param_2;
    }
    if (param_3 < *(double *)(this + 0x20)) {
      *(double *)(this + 0x20) = param_3;
    }
    if (*(double *)(this + 0x28) <= param_1 && param_1 != *(double *)(this + 0x28)) {
      *(double *)(this + 0x28) = param_1;
    }
    if (*(double *)(this + 0x30) <= param_2 && param_2 != *(double *)(this + 0x30)) {
      *(double *)(this + 0x30) = param_2;
    }
    if (*(double *)(this + 0x38) <= param_3 && param_3 != *(double *)(this + 0x38)) {
      *(double *)(this + 0x38) = param_3;
      pdVar2 = *(double **)(this + 0x50);
      goto joined_r0x00110839;
    }
  }
  pdVar2 = *(double **)(this + 0x50);
joined_r0x00110839:
  local_28 = param_1;
  dStack_20 = param_2;
  local_18 = param_3;
  if (pdVar1 == pdVar2) {
    std::vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>>::
    _M_realloc_insert<FLOAT_MATH::TVec_const&>
              ((vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>> *)(this + 0x40),pdVar1,
               &local_28);
  }
  else {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    *(double **)(this + 0x48) = pdVar1 + 3;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned
   int>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int&&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,void *param_2,undefined4 *param_3
          )

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00110940;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0011094a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00110940:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0011094a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0011094a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0011091b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0011091b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* FLOAT_MATH::CTriangulator::triangulate(unsigned int&, double) */

long __thiscall
FLOAT_MATH::CTriangulator::triangulate(CTriangulator *this,uint *param_1,double param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  lVar7 = *(long *)(this + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x48);
  *param_1 = 0;
  *(double *)(this + 8) = param_2;
  if (lVar7 != lVar2) {
    if (*(long *)(this + 0x58) != *(long *)(this + 0x60)) {
      *(long *)(this + 0x60) = *(long *)(this + 0x58);
    }
    dVar10 = *(double *)(this + 0x28) - *(double *)(this + 0x10);
    dVar11 = *(double *)(this + 0x30) - *(double *)(this + 0x18);
    dVar12 = *(double *)(this + 0x38) - *(double *)(this + 0x20);
    if (dVar11 < dVar10) {
      if (dVar12 < dVar10) {
        lVar6 = 1;
        uVar5 = (ulong)((dVar12 < dVar11) + 1);
        if (dVar11 <= dVar12) {
          lVar6 = 2;
        }
        lVar9 = 0;
      }
      else {
        uVar5 = 1;
        lVar6 = 0;
        lVar9 = 2;
      }
    }
    else if ((dVar11 <= dVar10) || (dVar11 <= dVar12)) {
      uVar5 = 0;
      lVar6 = 1;
      lVar9 = 2;
    }
    else {
      lVar9 = 1;
      lVar6 = 0;
      uVar5 = (ulong)((uint)(dVar12 < dVar10) * 2);
      if (dVar10 <= dVar12) {
        lVar6 = 2;
      }
    }
    iVar4 = (int)(lVar2 - lVar7 >> 3) * -0x55555555;
    if (iVar4 != 0) {
      puVar8 = (undefined8 *)(lVar7 + uVar5 * 8);
      puVar1 = (undefined8 *)(lVar7 + 0x18 + ((ulong)(iVar4 - 1) * 3 + uVar5) * 8);
      do {
        while( true ) {
          local_58 = puVar8[lVar9 - uVar5];
          local_48 = *puVar8;
          puVar3 = *(undefined8 **)(this + 0x60);
          uStack_50 = puVar8[lVar6 - uVar5];
          if (puVar3 != *(undefined8 **)(this + 0x68)) break;
          puVar8 = puVar8 + 3;
          std::vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>>::
          _M_realloc_insert<FLOAT_MATH::TVec_const&>
                    ((vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>> *)(this + 0x58),
                     puVar3,&local_58);
          if (puVar8 == puVar1) goto LAB_00110b90;
        }
        puVar8 = puVar8 + 3;
        *puVar3 = local_58;
        puVar3[1] = uStack_50;
        puVar3[2] = local_48;
        *(undefined8 **)(this + 0x60) = puVar3 + 3;
      } while (puVar8 != puVar1);
    }
LAB_00110b90:
    if (*(long *)(this + 0x70) != *(long *)(this + 0x78)) {
      *(long *)(this + 0x78) = *(long *)(this + 0x70);
    }
    _process(this,(vector *)(this + 0x70));
    lVar7 = *(long *)(this + 0x70);
    uVar5 = *(long *)(this + 0x78) - lVar7 >> 2;
    *param_1 = (uint)((uVar5 & 0xffffffff) / 3);
    if (2 < (uint)uVar5) goto LAB_00110bd3;
  }
  lVar7 = 0;
LAB_00110bd3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



/* FLOAT_MATH::Triangulate::triangulate3d(unsigned int, double const*, unsigned int, unsigned int&,
   bool, double) */

undefined8 __thiscall
FLOAT_MATH::Triangulate::triangulate3d
          (Triangulate *this,uint param_1,double *param_2,uint param_3,uint *param_4,bool param_5,
          double param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  double *__ptr;
  double *pdVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined **local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x10));
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  __ptr = (double *)malloc((ulong)param_1 * 0x18);
  if (param_5) {
    if (param_1 < 3) goto LAB_0011111f;
    param_1 = fm_consolidatePolygon(param_1,param_2,param_3,__ptr,_LC54 - param_6);
  }
  else {
    pdVar6 = __ptr;
    uVar7 = 0;
    if (param_1 == 0) goto LAB_0011111f;
    do {
      pdVar11 = pdVar6 + 3;
      pdVar10 = (double *)(uVar7 + (long)param_2);
      dVar18 = pdVar10[1];
      dVar17 = pdVar10[2];
      *pdVar6 = *pdVar10;
      pdVar6[1] = dVar18;
      pdVar6[2] = dVar17;
      pdVar6 = pdVar11;
      uVar7 = (ulong)((int)uVar7 + param_3);
    } while (__ptr + (ulong)param_1 * 3 != pdVar11);
    param_3 = 0x18;
  }
  if (2 < param_1) {
    uVar7 = 0;
    local_78._0_8_ = (double *)0x0;
    local_c8 = &PTR__CTriangulator_001114d8;
    pdVar11 = (double *)0x0;
    pdVar6 = (double *)0x0;
    iVar13 = 0;
    local_88 = (undefined1  [16])0x0;
    local_48 = 0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    do {
      pdVar10 = (double *)(uVar7 + (long)__ptr);
      local_d8 = pdVar10[2];
      local_e8 = *pdVar10;
      dStack_e0 = pdVar10[1];
      if (pdVar6 == pdVar11) {
        local_b8 = local_e8;
        dStack_b0 = dStack_e0;
        local_a8 = local_d8;
        local_a0 = local_e8;
        dStack_98 = dStack_e0;
        local_90 = local_d8;
        if (pdVar6 == (double *)local_78._0_8_) goto LAB_00110e43;
LAB_00110dc5:
        pdVar6[2] = local_d8;
        *pdVar6 = local_e8;
        pdVar6[1] = dStack_e0;
        local_88._8_8_ = pdVar6 + 3;
        pdVar6 = pdVar6 + 3;
      }
      else {
        if (local_e8 < local_b8) {
          local_b8 = local_e8;
        }
        if (dStack_e0 < dStack_b0) {
          dStack_b0 = dStack_e0;
        }
        if (local_d8 < local_a8) {
          local_a8 = local_d8;
        }
        if (local_a0 < local_e8) {
          local_a0 = local_e8;
        }
        if (dStack_98 < dStack_e0) {
          dStack_98 = dStack_e0;
        }
        if (local_90 < local_d8) {
          local_90 = local_d8;
        }
        if (pdVar6 != (double *)local_78._0_8_) goto LAB_00110dc5;
LAB_00110e43:
        std::vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>>::
        _M_realloc_insert<FLOAT_MATH::TVec_const&>
                  ((vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>> *)local_88,pdVar6,
                   &local_e8);
        pdVar6 = (double *)local_88._8_8_;
        pdVar11 = (double *)local_88._0_8_;
      }
      if (param_1 == iVar13 + 1U) goto LAB_00110e80;
      uVar7 = (ulong)((int)uVar7 + param_3);
      iVar13 = iVar13 + 1;
    } while( true );
  }
  goto LAB_0011111f;
LAB_00110e80:
  local_c0 = param_6;
  if (pdVar6 != pdVar11) {
    if (local_78._8_8_ != local_68._0_8_) {
      local_68._0_8_ = local_78._8_8_;
    }
    dVar17 = local_a0 - local_b8;
    dVar18 = dStack_98 - dStack_b0;
    dVar19 = local_90 - local_a8;
    if (dVar18 < dVar17) {
      if (dVar17 <= dVar19) {
        uVar7 = 1;
        lVar16 = 0;
        lVar9 = 2;
      }
      else {
        lVar16 = 1;
        uVar7 = (ulong)((dVar19 < dVar18) + 1);
        if (dVar18 <= dVar19) {
          lVar16 = 2;
        }
        lVar9 = 0;
      }
    }
    else if ((dVar18 <= dVar17) || (dVar18 <= dVar19)) {
      uVar7 = 0;
      lVar16 = 1;
      lVar9 = 2;
    }
    else {
      lVar9 = 1;
      lVar16 = 0;
      uVar7 = (ulong)((uint)(dVar19 < dVar17) * 2);
      if (dVar17 <= dVar19) {
        lVar16 = 2;
      }
    }
    iVar13 = (int)((long)pdVar6 - (long)pdVar11 >> 3) * -0x55555555;
    if (iVar13 != 0) {
      pdVar6 = pdVar11 + uVar7;
      do {
        while( true ) {
          local_e8 = pdVar6[lVar9 - uVar7];
          local_d8 = *pdVar6;
          dStack_e0 = pdVar6[lVar16 - uVar7];
          if (local_68._0_8_ != local_68._8_8_) break;
          pdVar6 = pdVar6 + 3;
          std::vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>>::
          _M_realloc_insert<FLOAT_MATH::TVec_const&>
                    ((vector<FLOAT_MATH::TVec,std::allocator<FLOAT_MATH::TVec>> *)(local_78 + 8),
                     local_68._0_8_,&local_e8);
          if (pdVar11 + (ulong)(iVar13 - 1) * 3 + uVar7 + 3 == pdVar6) goto LAB_00110fe0;
        }
        pdVar6 = pdVar6 + 3;
        *(double *)local_68._0_8_ = local_e8;
        *(double *)(local_68._0_8_ + 8) = dStack_e0;
        *(double *)(local_68._0_8_ + 0x10) = local_d8;
        local_68._0_8_ = (double *)(local_68._0_8_ + 0x18);
      } while (pdVar11 + (ulong)(iVar13 - 1) * 3 + uVar7 + 3 != pdVar6);
    }
LAB_00110fe0:
    if (local_58._0_8_ != local_58._8_8_) {
      local_58._8_8_ = local_58._0_8_;
    }
    CTriangulator::_process((CTriangulator *)&local_c8,(vector *)local_58);
    uVar5 = local_58._0_8_;
    uVar7 = (long)(local_58._8_8_ - local_58._0_8_) >> 2;
    if (((uint *)local_58._0_8_ != (uint *)0x0) && (2 < (uint)uVar7)) {
      uVar7 = uVar7 & 0xffffffff;
      uVar12 = uVar7 / 3;
      *param_4 = (uint)uVar12;
      puVar8 = (undefined8 *)malloc(uVar12 * 0x48);
      uVar12 = 1;
      uVar14 = 0;
      *(undefined8 **)(this + 0x10) = puVar8;
      puVar15 = (uint *)uVar5;
      do {
        uVar4 = *puVar15;
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 3;
        puVar1 = (undefined8 *)(local_88._0_8_ + (ulong)uVar4 * 0x18);
        iVar13 = (int)uVar12;
        puVar2 = (undefined8 *)(local_88._0_8_ + (ulong)*(uint *)(uVar5 + uVar12 * 4) * 0x18);
        uVar12 = (ulong)(iVar13 + 3);
        uVar4 = *(uint *)(uVar5 + (ulong)(iVar13 + 1) * 4);
        *puVar8 = *puVar1;
        puVar8[1] = puVar1[1];
        puVar3 = (undefined8 *)(local_88._0_8_ + (ulong)uVar4 * 0x18);
        puVar8[2] = puVar1[2];
        puVar8[3] = *puVar2;
        puVar8[4] = puVar2[1];
        puVar8[5] = puVar2[2];
        puVar8[6] = *puVar3;
        puVar8[7] = puVar3[1];
        puVar8[8] = puVar3[2];
        puVar8 = puVar8 + 9;
      } while (uVar14 < (uint)(uVar7 / 3));
    }
  }
  CTriangulator::~CTriangulator((CTriangulator *)&local_c8);
LAB_0011111f:
  free(__ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined8 *)(this + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* FLOAT_MATH::MyVertexIndex::~MyVertexIndex() */

void __thiscall FLOAT_MATH::MyVertexIndex::~MyVertexIndex(MyVertexIndex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FLOAT_MATH::Triangulate::~Triangulate() */

void __thiscall FLOAT_MATH::Triangulate::~Triangulate(Triangulate *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate() */

void __thiscall FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate(Myfm_Tesselate *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree() */

void __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree(KdTree *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


