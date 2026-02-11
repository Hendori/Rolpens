
void SharpYuvComputeConversionMatrix(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
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
  
  uVar5 = _LC4;
  fVar4 = _LC3;
  fVar3 = _LC2;
  fVar10 = _LC1;
  fVar2 = _LC0;
  fVar9 = *param_1;
  fVar1 = param_1[1];
  bVar7 = SUB41(param_1[2],0) - 8;
  fVar17 = _LC0 - fVar9;
  fVar16 = _LC0 - fVar1;
  fVar18 = _LC1 / fVar16;
  fVar11 = fVar17 - fVar1;
  fVar12 = _LC1 / fVar17;
  if (param_1[3] == 1.4013e-45) {
    fVar15 = (float)((1 << (SUB41(param_1[2],0) & 0x1f)) + -1);
    fVar19 = (float)(0xdb << (bVar7 & 0x1f)) / fVar15;
    fVar15 = (float)(0xe0 << (bVar7 & 0x1f)) / fVar15;
    fVar14 = fVar19 * fVar1;
    fVar13 = fVar19 * fVar9;
    fVar19 = fVar19 * fVar11;
    fVar18 = fVar18 * fVar15;
    fVar12 = fVar12 * fVar15;
    fVar15 = (float)(0x10 << (bVar7 & 0x1f)) * _LC2 + _LC1;
    if ((float)(_LC4 & (uint)fVar15) < _LC3) {
      iVar8 = (int)(float)(~_LC4 & (uint)fVar15 |
                          (uint)((float)(int)fVar15 -
                                (float)(-(uint)(fVar15 < (float)(int)fVar15) & (uint)_LC0)));
    }
    else {
      iVar8 = (int)fVar15;
    }
  }
  else {
    iVar8 = 0;
    fVar14 = fVar1;
    fVar19 = fVar11;
    fVar13 = fVar9;
  }
  fVar13 = fVar13 * _LC2 + _LC1;
  if ((float)((uint)fVar13 & _LC4) < _LC3) {
    fVar13 = (float)((uint)((float)(int)fVar13 -
                           (float)(-(uint)(fVar13 < (float)(int)fVar13) & (uint)_LC0)) |
                    ~_LC4 & (uint)fVar13);
  }
  fVar19 = fVar19 * _LC2 + _LC1;
  if ((float)((uint)fVar19 & _LC4) < _LC3) {
    fVar19 = (float)((uint)((float)(int)fVar19 -
                           (float)(-(uint)(fVar19 < (float)(int)fVar19) & (uint)_LC0)) |
                    ~_LC4 & (uint)fVar19);
  }
  *param_2 = CONCAT44((int)fVar19,(int)fVar13);
  fVar14 = fVar14 * fVar3 + fVar10;
  if ((float)((uint)fVar14 & uVar5) < fVar4) {
    fVar14 = (float)((uint)((float)(int)fVar14 -
                           (float)(-(uint)(fVar14 < (float)(int)fVar14) & (uint)fVar2)) |
                    ~uVar5 & (uint)fVar14);
  }
  *(int *)((long)param_2 + 0xc) = iVar8;
  uVar6 = _LC5;
  fVar9 = (float)((uint)fVar9 ^ _LC5);
  *(int *)(param_2 + 1) = (int)fVar14;
  fVar9 = fVar9 * fVar18 * fVar3 + fVar10;
  if ((float)((uint)fVar9 & uVar5) < fVar4) {
    fVar9 = (float)((uint)((float)(int)fVar9 -
                          (float)(-(uint)(fVar9 < (float)(int)fVar9) & (uint)fVar2)) |
                   ~uVar5 & (uint)fVar9);
  }
  fVar11 = (float)((uint)fVar11 ^ uVar6);
  *(int *)(param_2 + 2) = (int)fVar9;
  fVar9 = fVar11 * fVar18 * fVar3 + fVar10;
  if ((float)((uint)fVar9 & uVar5) < fVar4) {
    fVar9 = (float)((uint)((float)(int)fVar9 -
                          (float)(-(uint)(fVar9 < (float)(int)fVar9) & (uint)fVar2)) |
                   ~uVar5 & (uint)fVar9);
  }
  *(int *)((long)param_2 + 0x14) = (int)fVar9;
  fVar9 = fVar16 * fVar18 * fVar3 + fVar10;
  if ((float)((uint)fVar9 & uVar5) < fVar4) {
    fVar9 = (float)((uint)((float)(int)fVar9 -
                          (float)(-(uint)(fVar9 < (float)(int)fVar9) & (uint)fVar2)) |
                   ~uVar5 & (uint)fVar9);
  }
  *(int *)(param_2 + 3) = (int)fVar9;
  fVar9 = (float)(0x80 << (bVar7 & 0x1f)) * fVar3 + fVar10;
  if ((float)((uint)fVar9 & uVar5) < fVar4) {
    fVar9 = (float)((uint)((float)(int)fVar9 -
                          (float)(-(uint)(fVar9 < (float)(int)fVar9) & (uint)fVar2)) |
                   ~uVar5 & (uint)fVar9);
  }
  *(int *)((long)param_2 + 0x1c) = (int)fVar9;
  fVar16 = fVar17 * fVar12 * fVar3 + fVar10;
  if ((float)((uint)fVar16 & uVar5) < fVar4) {
    fVar16 = (float)((uint)((float)(int)fVar16 -
                           (float)(-(uint)(fVar16 < (float)(int)fVar16) & (uint)fVar2)) |
                    ~uVar5 & (uint)fVar16);
  }
  *(int *)(param_2 + 4) = (int)fVar16;
  fVar11 = fVar11 * fVar12 * fVar3 + fVar10;
  if ((float)((uint)fVar11 & uVar5) < fVar4) {
    fVar11 = (float)((uint)((float)(int)fVar11 -
                           (float)(-(uint)(fVar11 < (float)(int)fVar11) & (uint)fVar2)) |
                    ~uVar5 & (uint)fVar11);
  }
  *(int *)((long)param_2 + 0x24) = (int)fVar11;
  fVar10 = (float)((uint)fVar1 ^ uVar6) * fVar12 * fVar3 + fVar10;
  if ((float)((uint)fVar10 & uVar5) < fVar4) {
    fVar10 = (float)((uint)((float)(int)fVar10 -
                           (float)(-(uint)(fVar10 < (float)(int)fVar10) & (uint)fVar2)) |
                    ~uVar5 & (uint)fVar10);
  }
  *(int *)((long)param_2 + 0x2c) = (int)fVar9;
  *(int *)(param_2 + 5) = (int)fVar10;
  return;
}



undefined1 * SharpYuvGetConversionMatrix(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return kWebpMatrix;
  case 1:
    return kRec601LimitedMatrix;
  case 2:
    return kRec601FullMatrix;
  case 3:
    return kRec709LimitedMatrix;
  case 4:
    return kRec709FullMatrix;
  default:
    return (undefined1 *)0x0;
  }
}


