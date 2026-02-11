
/* msdfgen::edgeBetweenTexelsChannel(float const*, float const*, int) */

bool msdfgen::edgeBetweenTexelsChannel(float *param_1,float *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  long in_FS_OFFSET;
  double dVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  lVar2 = (long)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar3 = ((double)param_1[lVar2] - _LC0) / (double)(param_1[lVar2] - param_2[lVar2]);
  if ((dVar3 <= 0.0) || (_LC2 <= dVar3)) {
    bVar1 = false;
    goto LAB_00100053;
  }
  dVar6 = _LC2 - dVar3;
  fVar4 = (float)((double)(float)*(undefined8 *)param_1 * dVar6 +
                 (double)(float)*(undefined8 *)param_2 * dVar3);
  fVar5 = (float)((double)(float)((ulong)*(undefined8 *)param_1 >> 0x20) * dVar6 +
                 (double)(float)((ulong)*(undefined8 *)param_2 >> 0x20) * dVar3);
  local_20 = CONCAT44(fVar5,fVar4);
  local_18 = (float)(dVar3 * (double)param_2[2] + (double)param_1[2] * dVar6);
  if (fVar5 <= fVar4) {
    fVar7 = fVar4;
    if ((local_18 < fVar4) && (fVar5 < fVar4)) goto LAB_0010010d;
  }
  else {
    bVar1 = local_18 < fVar5;
    fVar7 = fVar5;
    fVar5 = fVar4;
    if (bVar1) {
LAB_0010010d:
      fVar7 = local_18;
      if (local_18 <= fVar5) {
        fVar7 = fVar5;
      }
    }
  }
  bVar1 = fVar7 == *(float *)((long)&local_20 + lVar2 * 4);
LAB_00100053:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::edgeBetweenTexels(float const*, float const*) */

int msdfgen::edgeBetweenTexels(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = edgeBetweenTexelsChannel(param_1,param_2,0);
  bVar2 = edgeBetweenTexelsChannel(param_1,param_2,1);
  bVar3 = edgeBetweenTexelsChannel(param_1,param_2,2);
  return (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4;
}



/* msdfgen::interpolatedMedian(float const*, float const*, double) */

void msdfgen::interpolatedMedian(float *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = _LC2 - param_3;
  fVar3 = (float)((double)param_1[2] * dVar4 + (double)param_2[2] * param_3);
  fVar2 = (float)((double)param_1[1] * dVar4 + (double)param_2[1] * param_3);
  fVar1 = (float)((double)*param_1 * dVar4 + param_3 * (double)*param_2);
  if (fVar1 < fVar2) {
    if (fVar3 < fVar2) {
      return;
    }
    return;
  }
  if (fVar1 <= fVar3) {
    return;
  }
  if (fVar2 < fVar1) {
    return;
  }
  return;
}



/* msdfgen::interpolatedMedian(float const*, float const*, float const*, double) */

undefined8 msdfgen::interpolatedMedian(float *param_1,float *param_2,float *param_3,double param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar4 = ((double)param_3[2] * param_4 + (double)param_2[2]) * param_4 + (double)param_1[2];
  dVar3 = ((double)param_3[1] * param_4 + (double)param_2[1]) * param_4 + (double)param_1[1];
  auVar1._0_8_ = ((double)*param_3 * param_4 + (double)*param_2) * param_4 + (double)*param_1;
  auVar1._8_8_ = 0;
  if (dVar3 <= auVar1._0_8_) {
    if ((dVar4 < auVar1._0_8_) && (dVar3 < auVar1._0_8_)) {
      if (dVar4 <= dVar3) {
        dVar4 = dVar3;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar4;
    }
  }
  else {
    if (dVar3 <= dVar4) {
      return CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3);
    }
    if (dVar4 <= auVar1._0_8_) {
      dVar4 = auVar1._0_8_;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar4;
  }
  auVar2._4_12_ = auVar1._4_12_;
  auVar2._0_4_ = (float)auVar1._0_8_;
  return auVar2._0_8_;
}



/* void msdfgen::interpolate<float, 4>(float*, msdfgen::BitmapConstRef<float, 4> const&,
   msdfgen::Vector2) [clone .isra.0] */

void msdfgen::interpolate<float,4>
               (double param_1_00,double param_2_00,long param_1,long param_2,int param_5,
               int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  param_1_00 = param_1_00 - _LC0;
  param_2_00 = param_2_00 - _LC0;
  dVar9 = param_1_00;
  if ((double)((ulong)param_1_00 & _LC4) < _LC3) {
    dVar9 = (double)((ulong)((double)(long)param_1_00 -
                            (double)(-(ulong)(param_1_00 < (double)(long)param_1_00) & (ulong)_LC2))
                    | ~_LC4 & (ulong)param_1_00);
  }
  iVar2 = (int)dVar9;
  dVar9 = param_2_00;
  if ((double)((ulong)param_2_00 & _LC4) < _LC3) {
    dVar9 = (double)((ulong)((double)(long)param_2_00 -
                            (double)(-(ulong)(param_2_00 < (double)(long)param_2_00) & (ulong)_LC2))
                    | ~_LC4 & (ulong)param_2_00);
  }
  iVar5 = (int)dVar9;
  iVar6 = iVar2 + 1;
  iVar7 = param_5 + -1;
  iVar1 = iVar5 + 1;
  param_1_00 = param_1_00 - (double)iVar2;
  if (((iVar2 < 0) || (iVar3 = iVar2, iVar7 < iVar2)) && (iVar3 = 0, 0 < iVar2)) {
    iVar3 = iVar7;
  }
  if (((iVar6 < 0) || (iVar2 = iVar6, iVar7 < iVar6)) && (iVar2 = 0, 0 < iVar6)) {
    iVar2 = iVar7;
  }
  param_6 = param_6 + -1;
  if (((iVar5 < 0) || (iVar6 = iVar5, param_6 < iVar5)) && (iVar6 = 0, 0 < iVar5)) {
    iVar6 = param_6;
  }
  if (((iVar1 < 0) || (iVar7 = iVar1, param_6 < iVar1)) && (iVar7 = 0, 0 < iVar1)) {
    iVar7 = param_6;
  }
  dVar8 = _LC2 - param_1_00;
  dVar9 = _LC2 - (param_2_00 - (double)iVar5);
  lVar4 = 0;
  do {
    *(float *)(param_1 + lVar4) =
         (float)((double)(float)((double)*(float *)(param_2 + (long)(iVar3 + iVar6 * param_5) * 0x10
                                                   + lVar4) * dVar8 +
                                (double)*(float *)((long)(iVar2 + iVar6 * param_5) * 0x10 + param_2
                                                  + lVar4) * param_1_00) * dVar9 +
                (double)(float)((double)*(float *)((long)(iVar7 * param_5 + iVar3) * 0x10 + param_2
                                                  + lVar4) * dVar8 +
                               (double)*(float *)((long)(iVar7 * param_5 + iVar2) * 0x10 + param_2 +
                                                 lVar4) * param_1_00) * (param_2_00 - (double)iVar5)
                );
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  return;
}



/* void msdfgen::interpolate<float, 3>(float*, msdfgen::BitmapConstRef<float, 3> const&,
   msdfgen::Vector2) [clone .isra.0] */

void msdfgen::interpolate<float,3>
               (double param_1_00,double param_2_00,long param_1,long param_2,int param_5,
               int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  param_1_00 = param_1_00 - _LC0;
  param_2_00 = param_2_00 - _LC0;
  dVar9 = param_1_00;
  if ((double)((ulong)param_1_00 & _LC4) < _LC3) {
    dVar9 = (double)((ulong)((double)(long)param_1_00 -
                            (double)(-(ulong)(param_1_00 < (double)(long)param_1_00) & (ulong)_LC2))
                    | ~_LC4 & (ulong)param_1_00);
  }
  iVar2 = (int)dVar9;
  dVar9 = param_2_00;
  if ((double)((ulong)param_2_00 & _LC4) < _LC3) {
    dVar9 = (double)((ulong)((double)(long)param_2_00 -
                            (double)(-(ulong)(param_2_00 < (double)(long)param_2_00) & (ulong)_LC2))
                    | ~_LC4 & (ulong)param_2_00);
  }
  iVar5 = (int)dVar9;
  iVar6 = iVar2 + 1;
  iVar7 = param_5 + -1;
  iVar1 = iVar5 + 1;
  param_1_00 = param_1_00 - (double)iVar2;
  if (((iVar2 < 0) || (iVar3 = iVar2, iVar7 < iVar2)) && (iVar3 = 0, 0 < iVar2)) {
    iVar3 = iVar7;
  }
  if (((iVar6 < 0) || (iVar2 = iVar6, iVar7 < iVar6)) && (iVar2 = 0, 0 < iVar6)) {
    iVar2 = iVar7;
  }
  param_6 = param_6 + -1;
  if (((iVar5 < 0) || (iVar6 = iVar5, param_6 < iVar5)) && (iVar6 = 0, 0 < iVar5)) {
    iVar6 = param_6;
  }
  if (((iVar1 < 0) || (iVar7 = iVar1, param_6 < iVar1)) && (iVar7 = 0, 0 < iVar1)) {
    iVar7 = param_6;
  }
  dVar9 = _LC2 - (param_2_00 - (double)iVar5);
  dVar8 = _LC2 - param_1_00;
  lVar4 = 0;
  do {
    *(float *)(param_1 + lVar4) =
         (float)((double)(float)((double)*(float *)(param_2 + (long)(iVar3 + param_5 * iVar6) * 0xc
                                                   + lVar4) * dVar8 +
                                (double)*(float *)(param_2 + (long)(iVar2 + param_5 * iVar6) * 0xc +
                                                  lVar4) * param_1_00) * dVar9 +
                (double)(float)((double)*(float *)(param_2 + (long)(iVar7 * param_5 + iVar3) * 0xc +
                                                  lVar4) * dVar8 +
                               (double)*(float *)(param_2 + (long)(iVar7 * param_5 + iVar2) * 0xc +
                                                 lVar4) * param_1_00) * (param_2_00 - (double)iVar5)
                );
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifactInner<msdfgen::BaseArtifactClassifier>(msdfgen::BaseArtifactClassifier
   const&, float, float, float const*, float const*, float const*, float, float, float, double,
   double) */

bool msdfgen::hasDiagonalArtifactInner<msdfgen::BaseArtifactClassifier>
               (BaseArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float *param_6,float param_7,float param_8,float param_9,
               double param_10,double param_11)

{
  undefined8 uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  double *pdVar5;
  BaseArtifactClassifier BVar6;
  ulong uVar7;
  double *pdVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
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
  undefined8 local_70;
  double local_68 [5];
  long local_40;
  
  pdVar8 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = CONCAT44(param_3,param_2);
  iVar4 = msdfgen::solveQuadratic
                    (pdVar8,(double)((param_9 - param_8) + param_7),
                     (double)((param_8 - param_7) - param_7),(double)param_7);
  if (0 < iVar4) {
    dVar19 = 0.0;
    pdVar5 = pdVar8 + iVar4;
    dVar17 = _LC6;
    dVar18 = _LC7;
    do {
      dVar15 = *pdVar8;
      if ((dVar17 < dVar15) && (dVar15 < dVar18)) {
        fVar9 = (float)interpolatedMedian(param_4,param_5,param_6,dVar15);
        BVar6 = param_1[8];
        dVar14 = *(double *)param_1;
        fVar10 = param_2;
        if (param_2 <= _LC8) {
          if (_LC8 <= param_2) goto LAB_001009b5;
          if (_LC8 <= param_3) {
            bVar3 = 0;
            if (BVar6 != (BaseArtifactClassifier)0x0) goto LAB_00100870;
            if (param_2 < param_3) goto LAB_001009ca;
            if (fVar9 < param_2) goto LAB_00100911;
            goto LAB_00100900;
          }
          if (fVar9 < _LC8) goto LAB_001009b5;
LAB_00100911:
          dVar12 = (double)fVar9;
          if (((double)param_2 - dVar15 * dVar14 <= dVar12) &&
             (dVar12 <= (double)param_2 + dVar15 * dVar14)) {
            dVar13 = (_LC2 - dVar15) * dVar14;
            if ((double)param_3 - dVar13 <= dVar12) {
              bVar3 = (-(dVar13 + (double)param_3 < dVar12) & 2U) + 1;
              goto LAB_00100870;
            }
          }
          bVar3 = 3;
        }
        else if (_LC8 < param_3) {
          if (fVar9 <= _LC8) goto LAB_00100911;
LAB_001009b5:
          bVar3 = 0;
          if (BVar6 == (BaseArtifactClassifier)0x0) {
            if (param_3 <= param_2) goto LAB_001008e0;
LAB_001009ca:
            fVar10 = param_3;
            if ((param_3 <= fVar9) || (bVar3 = 0, fVar10 = param_2, fVar9 <= param_2))
            goto LAB_00100900;
          }
        }
        else {
          bVar3 = 0;
          if (BVar6 == (BaseArtifactClassifier)0x0) {
LAB_001008e0:
            if (fVar9 < param_2) {
              if (param_2 <= param_3) goto LAB_00100911;
              bVar3 = 0;
              fVar10 = param_3;
              if (param_3 < fVar9) goto LAB_00100870;
            }
LAB_00100900:
            bVar3 = 0;
            if (fVar9 != fVar10) goto LAB_00100911;
          }
        }
LAB_00100870:
        if ((param_10 <= dVar19) || (_LC2 <= param_10)) goto LAB_00100889;
        uVar7 = (ulong)(dVar15 < param_10);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar7 + 2] = param_10;
        dVar16 = __LC9;
        dVar20 = _LC2;
        local_70 = uVar1;
        bVar3 = interpolatedMedian(param_4,param_5,param_6,param_10);
        dVar13 = local_68[3];
        dVar12 = local_68[2];
        *(undefined4 *)((long)local_68 + uVar7 * 4 + -8) = extraout_XMM0_Da;
        fVar10 = (float)local_70;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00100bbe;
          if (_LC8 <= local_70._4_4_) {
            if (BVar6 != (BaseArtifactClassifier)0x0) goto LAB_00100889;
            if ((float)local_70 < local_70._4_4_) goto LAB_00100b98;
            if (fVar9 < (float)local_70) goto LAB_00100bf0;
            goto LAB_00100be4;
          }
          if (fVar9 < _LC8) goto LAB_00100bbe;
LAB_00100bf0:
          dVar11 = (double)fVar9;
          dVar12 = (dVar15 - dVar12) * dVar14;
          if (((double)(float)local_70 - dVar12 <= dVar11) &&
             (dVar11 <= dVar12 + (double)(float)local_70)) {
            dVar12 = (dVar13 - dVar15) * dVar14;
            if (((double)local_70._4_4_ - dVar12 <= dVar11) &&
               (dVar11 <= dVar12 + (double)local_70._4_4_)) goto LAB_00100889;
          }
          if ((0.0 < param_11) && (param_11 < _LC2)) goto LAB_00100a99;
          goto LAB_00100c69;
        }
        if (_LC8 < local_70._4_4_) {
          if (fVar9 <= _LC8) goto LAB_00100bf0;
LAB_00100bbe:
          if (BVar6 == (BaseArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00100bcc;
LAB_00100b98:
            fVar10 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar9) || (fVar10 = (float)local_70, fVar9 <= (float)local_70))
            goto LAB_00100be4;
          }
        }
        else {
          if (BVar6 != (BaseArtifactClassifier)0x0) goto LAB_00100889;
LAB_00100bcc:
          if (fVar9 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_00100bf0;
            fVar10 = local_70._4_4_;
            if (local_70._4_4_ < fVar9) goto LAB_00100889;
          }
LAB_00100be4:
          if (fVar9 != fVar10) goto LAB_00100bf0;
        }
LAB_00100889:
        if ((param_11 <= dVar19) || (dVar16 = __LC9, dVar20 = _LC2, _LC2 <= param_11))
        goto LAB_001008a2;
LAB_00100a99:
        uVar7 = (ulong)(dVar15 < param_11);
        local_68[2] = dVar16;
        local_68[3] = dVar20;
        local_68[uVar7 + 2] = param_11;
        local_70 = uVar1;
        bVar3 = interpolatedMedian(param_4,param_5,param_6,param_11);
        dVar12 = local_68[3];
        *(undefined4 *)((long)local_68 + uVar7 * 4 + -8) = extraout_XMM0_Da_00;
        fVar10 = (float)local_70;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00100c86;
          if (_LC8 <= local_70._4_4_) {
            if (BVar6 != (BaseArtifactClassifier)0x0) goto LAB_001008a2;
            if ((float)local_70 < local_70._4_4_) goto LAB_00100b4c;
            if (fVar9 < (float)local_70) goto LAB_00100cc0;
            goto LAB_00100cb4;
          }
          if (fVar9 < _LC8) goto LAB_00100c86;
LAB_00100cc0:
          dVar16 = (double)fVar9;
          dVar13 = (dVar15 - local_68[2]) * dVar14;
          if (((double)(float)local_70 - dVar13 <= dVar16) &&
             (dVar16 <= dVar13 + (double)(float)local_70)) {
            dVar14 = (dVar12 - dVar15) * dVar14;
            if (((double)local_70._4_4_ - dVar14 <= dVar16) &&
               (dVar16 <= dVar14 + (double)local_70._4_4_)) goto LAB_001008a2;
          }
        }
        else {
          if (_LC8 < local_70._4_4_) {
            if (fVar9 <= _LC8) goto LAB_00100cc0;
LAB_00100c86:
            if (BVar6 == (BaseArtifactClassifier)0x0) {
              if (local_70._4_4_ <= (float)local_70) goto LAB_00100c98;
LAB_00100b4c:
              fVar10 = local_70._4_4_;
              if ((local_70._4_4_ <= fVar9) || (fVar10 = (float)local_70, fVar9 <= (float)local_70))
              goto LAB_00100cb4;
            }
          }
          else {
            if (BVar6 != (BaseArtifactClassifier)0x0) goto LAB_001008a2;
LAB_00100c98:
            if (fVar9 < (float)local_70) {
              if ((float)local_70 <= local_70._4_4_) goto LAB_00100cc0;
              fVar10 = local_70._4_4_;
              if (local_70._4_4_ < fVar9) goto LAB_001008a2;
            }
LAB_00100cb4:
            if (fVar9 != fVar10) goto LAB_00100cc0;
          }
LAB_001008a2:
          if ((bVar3 & 2) == 0) goto LAB_001008aa;
        }
LAB_00100c69:
        bVar2 = true;
        goto LAB_001008b9;
      }
LAB_001008aa:
      pdVar8 = pdVar8 + 1;
    } while (pdVar5 != pdVar8);
  }
  bVar2 = false;
LAB_001008b9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>(msdfgen::BaseArtifactClassifier
   const&, float, float const*, float const*, float const*, float const*) */

bool msdfgen::hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
               (BaseArtifactClassifier *param_1,float param_2,float *param_3,float *param_4,
               float *param_5,float *param_6)

{
  bool bVar1;
  long in_FS_OFFSET;
  double dVar2;
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
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  fVar15 = param_6[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  if (fVar8 <= fVar6) {
    fVar3 = fVar6;
    if ((fVar15 < fVar6) && (fVar16 = fVar8, fVar8 < fVar6)) goto LAB_00100e8b;
  }
  else {
    fVar3 = fVar8;
    fVar16 = fVar6;
    if (fVar15 < fVar8) {
LAB_00100e8b:
      fVar3 = fVar15;
      if (fVar15 <= fVar16) {
        fVar3 = fVar16;
      }
    }
  }
  bVar1 = false;
  if ((float)((uint)(fVar3 - _LC8) & _LC10) <= (float)((uint)(param_2 - _LC8) & _LC10)) {
    fVar10 = (float)*(undefined8 *)param_3;
    fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar12 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar4 = (float)*(undefined8 *)param_5;
    fVar16 = (fVar10 - fVar12) - fVar4;
    fVar5 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar18 = (fVar11 - fVar14) - fVar5;
    fVar7 = fVar6 + fVar16;
    fVar9 = fVar8 + fVar18;
    local_50 = CONCAT44(fVar9,fVar7);
    fVar16 = (float)((uint)_LC11 ^ (uint)fVar10) - fVar16;
    fVar18 = (float)(_LC11._4_4_ ^ (uint)fVar11) - fVar18;
    local_60 = CONCAT44(fVar18,fVar16);
    fVar19 = (param_3[2] - param_4[2]) - param_5[2];
    fVar17 = (float)((uint)param_3[2] ^ __LC12) - fVar19;
    fVar15 = fVar15 + fVar19;
    dVar2 = ((double)fVar18 * __LC13) / (double)fVar9;
    dVar20 = ((double)fVar16 * __LC13) / (double)fVar7;
    local_58 = fVar17;
    local_48 = fVar15;
    bVar1 = hasDiagonalArtifactInner<msdfgen::BaseArtifactClassifier>
                      (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                       fVar11 - fVar10,((fVar14 - fVar12) + fVar5) - fVar4,fVar8 - fVar6,dVar20,
                       dVar2);
    if (!bVar1) {
      dVar13 = ((double)fVar17 * __LC13) / (double)fVar15;
      bVar1 = hasDiagonalArtifactInner<msdfgen::BaseArtifactClassifier>
                        (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                         param_3[2] - param_3[1],
                         ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1],
                         param_6[2] - param_6[1],dVar2,dVar13);
      if (!bVar1) {
        bVar1 = hasDiagonalArtifactInner<msdfgen::BaseArtifactClassifier>
                          (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                           *param_3 - param_3[2],((*param_4 - param_4[2]) + *param_5) - param_5[2],
                           *param_6 - param_6[2],dVar13,dVar20);
        goto LAB_00100e4c;
      }
    }
    bVar1 = true;
  }
LAB_00100e4c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



/* bool msdfgen::hasLinearArtifact<msdfgen::BaseArtifactClassifier>(msdfgen::BaseArtifactClassifier
   const&, float, float const*, float const*) [clone .isra.0] */

bool __thiscall
msdfgen::hasLinearArtifact<msdfgen::BaseArtifactClassifier>
          (msdfgen *this,BaseArtifactClassifier *param_1,float param_2,float *param_3,float *param_4
          )

{
  char cVar1;
  float *extraout_RDX;
  float *extraout_RDX_00;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  double dVar2;
  double dVar3;
  undefined1 in_register_00001204 [12];
  undefined1 auVar4 [16];
  float in_XMM1_Da;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  auVar4._4_12_ = in_register_00001204;
  auVar4._0_4_ = param_2;
  fVar7 = param_3[1];
  fVar6 = *param_3;
  dVar5 = auVar4._0_8_;
  fVar10 = param_3[2];
  if (fVar7 <= fVar6) {
    fVar8 = fVar6;
    if ((fVar10 < fVar6) && (fVar14 = fVar7, fVar7 < fVar6)) goto LAB_001012a3;
  }
  else {
    fVar8 = fVar7;
    fVar14 = fVar6;
    if (fVar10 < fVar7) {
LAB_001012a3:
      fVar8 = fVar10;
      if (fVar10 <= fVar14) {
        fVar8 = fVar14;
      }
    }
  }
  if ((float)((uint)(in_XMM1_Da - _LC8) & _LC10) < (float)((uint)(fVar8 - _LC8) & _LC10)) {
    return false;
  }
  fVar14 = *(float *)(param_1 + 4);
  fVar13 = *(float *)param_1;
  dVar12 = (double)(fVar14 - fVar13) / (double)((fVar14 - fVar13) - (fVar7 - fVar6));
  fVar9 = _LC8;
  dVar3 = _LC6;
  if ((_LC6 < dVar12) && (dVar12 < _LC7)) {
    cVar1 = interpolatedMedian((float *)param_1,param_3,dVar12);
    param_3 = extraout_RDX;
    fVar11 = in_XMM1_Da;
    if (in_XMM1_Da <= fVar9) {
      if (in_XMM1_Da < fVar9) {
        if (fVar8 < fVar9) {
          if (_LC8 <= extraout_XMM0_Da) goto LAB_001013d4;
          goto LAB_001011fa;
        }
        if (cVar1 != '\0') goto LAB_00101208;
      }
      else {
LAB_001011fa:
        if (cVar1 != '\0') goto LAB_00101208;
        if (fVar8 <= in_XMM1_Da) {
          if (in_XMM1_Da <= extraout_XMM0_Da) goto LAB_001013c9;
          if (fVar8 < in_XMM1_Da) goto LAB_001011e0;
          goto LAB_001013d4;
        }
      }
      fVar11 = fVar8;
      if ((fVar8 <= extraout_XMM0_Da) || (fVar11 = in_XMM1_Da, extraout_XMM0_Da <= in_XMM1_Da)) {
LAB_001013c9:
        if (extraout_XMM0_Da != fVar11) goto LAB_001013d4;
      }
    }
    else {
      if (fVar8 <= fVar9) {
        if (cVar1 != '\0') goto LAB_00101208;
        if (extraout_XMM0_Da < in_XMM1_Da) {
LAB_001011e0:
          fVar11 = fVar8;
          if (fVar8 < extraout_XMM0_Da) goto LAB_00101208;
        }
        goto LAB_001013c9;
      }
      if (fVar9 < extraout_XMM0_Da) goto LAB_001011fa;
LAB_001013d4:
      dVar2 = (double)extraout_XMM0_Da;
      if (dVar2 < (double)in_XMM1_Da - dVar5 * dVar12) {
        return true;
      }
      if (dVar5 * dVar12 + (double)in_XMM1_Da < dVar2) {
        return true;
      }
      dVar12 = (_LC2 - dVar12) * dVar5;
      if (dVar2 < (double)fVar8 - dVar12) {
        return true;
      }
      if (dVar12 + (double)fVar8 < dVar2) {
        return true;
      }
    }
  }
LAB_00101208:
  fVar11 = *(float *)(param_1 + 8);
  dVar12 = (double)(fVar11 - fVar14) / (double)((fVar11 - fVar14) - (fVar10 - fVar7));
  if ((dVar3 < dVar12) && (dVar12 < _LC7)) {
    cVar1 = interpolatedMedian((float *)param_1,param_3,dVar12);
    param_3 = extraout_RDX_00;
    fVar7 = in_XMM1_Da;
    if (in_XMM1_Da <= _LC8) {
      if (fVar9 <= in_XMM1_Da) {
LAB_001015aa:
        if (cVar1 != '\0') goto LAB_0010123e;
        if (fVar8 <= in_XMM1_Da) {
          if (in_XMM1_Da <= extraout_XMM0_Da_00) goto LAB_00101317;
          if (fVar8 < in_XMM1_Da) goto LAB_0010146f;
          goto LAB_00101322;
        }
      }
      else {
        if (fVar8 < fVar9) {
          if (_LC8 <= extraout_XMM0_Da_00) goto LAB_00101322;
          goto LAB_001015aa;
        }
        if (cVar1 != '\0') goto LAB_0010123e;
      }
      fVar7 = fVar8;
      if ((fVar8 <= extraout_XMM0_Da_00) || (fVar7 = in_XMM1_Da, extraout_XMM0_Da_00 <= in_XMM1_Da))
      {
LAB_00101317:
        if (extraout_XMM0_Da_00 != fVar7) goto LAB_00101322;
      }
    }
    else {
      if (fVar8 <= _LC8) {
        if (cVar1 != '\0') goto LAB_0010123e;
        if (extraout_XMM0_Da_00 < in_XMM1_Da) {
LAB_0010146f:
          fVar7 = fVar8;
          if (fVar8 < extraout_XMM0_Da_00) goto LAB_0010123e;
        }
        goto LAB_00101317;
      }
      if (fVar9 < extraout_XMM0_Da_00) goto LAB_001015aa;
LAB_00101322:
      dVar2 = (double)extraout_XMM0_Da_00;
      if (dVar2 < (double)in_XMM1_Da - dVar5 * dVar12) {
        return true;
      }
      if (dVar5 * dVar12 + (double)in_XMM1_Da < dVar2) {
        return true;
      }
      dVar12 = (_LC2 - dVar12) * dVar5;
      if (dVar2 < (double)fVar8 - dVar12) {
        return true;
      }
      if (dVar12 + (double)fVar8 < dVar2) {
        return true;
      }
    }
  }
LAB_0010123e:
  dVar12 = (double)(fVar13 - fVar11) / (double)((fVar13 - fVar11) - (fVar6 - fVar10));
  if ((dVar12 <= dVar3) || (_LC7 <= dVar12)) {
    return false;
  }
  cVar1 = interpolatedMedian((float *)param_1,param_3,dVar12);
  if (in_XMM1_Da <= _LC8) {
    if (in_XMM1_Da < fVar9) {
      fVar7 = in_XMM1_Da;
      fVar6 = fVar8;
      if (fVar9 <= fVar8) goto joined_r0x001015e8;
      if (_LC8 <= extraout_XMM0_Da_01) goto LAB_001014d9;
    }
LAB_00101629:
    if (cVar1 != '\0') {
      return false;
    }
    fVar6 = fVar8;
    fVar7 = in_XMM1_Da;
    if (in_XMM1_Da < fVar8) goto joined_r0x001014b5;
    fVar6 = in_XMM1_Da;
    if (extraout_XMM0_Da_01 < in_XMM1_Da) {
      fVar7 = fVar8;
      if (in_XMM1_Da <= fVar8) goto LAB_001014d9;
      goto joined_r0x001014c0;
    }
  }
  else {
    fVar7 = fVar8;
    fVar6 = in_XMM1_Da;
    if (_LC8 < fVar8) {
      if (extraout_XMM0_Da_01 <= fVar9) goto LAB_001014d9;
      goto LAB_00101629;
    }
joined_r0x001015e8:
    if (cVar1 != '\0') {
      return false;
    }
joined_r0x001014b5:
    if (extraout_XMM0_Da_01 < fVar6) {
joined_r0x001014c0:
      fVar6 = fVar7;
      if (fVar7 < extraout_XMM0_Da_01) {
        return false;
      }
    }
  }
  if (extraout_XMM0_Da_01 == fVar6) {
    return false;
  }
LAB_001014d9:
  dVar3 = (double)extraout_XMM0_Da_01;
  if (((double)in_XMM1_Da - dVar5 * dVar12 <= dVar3) &&
     (dVar3 <= dVar5 * dVar12 + (double)in_XMM1_Da)) {
    dVar5 = (_LC2 - dVar12) * dVar5;
    if ((double)fVar8 - dVar5 <= dVar3) {
      return dVar5 + (double)fVar8 < dVar3;
    }
  }
  return true;
}



/* msdfgen::MSDFErrorCorrection::MSDFErrorCorrection() */

void __thiscall msdfgen::MSDFErrorCorrection::MSDFErrorCorrection(MSDFErrorCorrection *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  msdfgen::Projection::Projection((Projection *)(this + 0x10));
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)(this + 0x30));
  return;
}



/* msdfgen::MSDFErrorCorrection::MSDFErrorCorrection(msdfgen::BitmapRef<unsigned char, 1> const&,
   msdfgen::SDFTransformation const&) */

void __thiscall
msdfgen::MSDFErrorCorrection::MSDFErrorCorrection
          (MSDFErrorCorrection *this,BitmapRef *param_1,SDFTransformation *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = _LC15;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x18) = uVar3;
  uVar3 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar7;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar8;
  *(undefined8 *)(this + 0x40) = uVar9;
  *(undefined8 *)(this + 0x48) = uVar9;
  memset(*(void **)param_1,0,(long)iVar2 * (long)iVar1);
  return;
}



/* msdfgen::MSDFErrorCorrection::setMinDeviationRatio(double) */

void __thiscall
msdfgen::MSDFErrorCorrection::setMinDeviationRatio(MSDFErrorCorrection *this,double param_1)

{
  *(double *)(this + 0x40) = param_1;
  return;
}



/* msdfgen::MSDFErrorCorrection::setMinImproveRatio(double) */

void __thiscall
msdfgen::MSDFErrorCorrection::setMinImproveRatio(MSDFErrorCorrection *this,double param_1)

{
  *(double *)(this + 0x48) = param_1;
  return;
}



/* msdfgen::MSDFErrorCorrection::protectCorners(msdfgen::Shape const&) */

void __thiscall
msdfgen::MSDFErrorCorrection::protectCorners(MSDFErrorCorrection *this,Shape *param_1)

{
  int iVar1;
  long lVar2;
  EdgeSegment *pEVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  EdgeHolder *pEVar9;
  EdgeHolder *this_00;
  uint uVar10;
  int iVar11;
  long *plVar12;
  long in_FS_OFFSET;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  
  plVar12 = *(long **)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar12 != *(long **)(param_1 + 8)) {
    do {
      if (*plVar12 != plVar12[1]) {
        pEVar3 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar12[1] + -8))
        ;
        this_00 = (EdgeHolder *)*plVar12;
        if ((EdgeHolder *)*plVar12 != (EdgeHolder *)plVar12[1]) {
          do {
            uVar10 = *(uint *)(pEVar3 + 8);
            lVar4 = msdfgen::EdgeHolder::operator->(this_00);
            uVar10 = uVar10 & *(uint *)(lVar4 + 8);
            if ((uVar10 - 1 & uVar10) == 0) {
              plVar5 = (long *)msdfgen::EdgeHolder::operator->(this_00);
              (**(code **)(*plVar5 + 0x28))(0,plVar5);
              auVar15 = msdfgen::Projection::project(this + 0x10);
              dVar14 = auVar15._8_8_;
              if (param_1[0x18] != (Shape)0x0) {
                dVar14 = (double)*(int *)(this + 0xc) - dVar14;
              }
              dVar13 = auVar15._0_8_ - _LC0;
              if ((double)((ulong)dVar13 & _LC4) < _LC3) {
                dVar13 = (double)((ulong)((double)(long)dVar13 -
                                         (double)(-(ulong)(dVar13 < (double)(long)dVar13) & _LC2)) |
                                 ~_LC4 & (ulong)dVar13);
              }
              uVar10 = (uint)dVar13;
              iVar7 = *(int *)(this + 8);
              if ((int)uVar10 < iVar7) {
                dVar14 = dVar14 - _LC0;
                if ((double)((ulong)dVar14 & _LC4) < _LC3) {
                  dVar14 = (double)((ulong)((double)(long)dVar14 -
                                           (double)(-(ulong)(dVar14 < (double)(long)dVar14) & _LC2))
                                   | ~_LC4 & (ulong)dVar14);
                }
                uVar6 = (uint)dVar14;
                if ((int)uVar6 < *(int *)(this + 0xc)) {
                  iVar1 = uVar6 + 1;
                  iVar11 = uVar10 + 1;
                  if ((-1 < iVar11) && (-1 < iVar1)) {
                    if ((int)(uVar10 | uVar6) < 0) {
                      if ((-1 < (int)uVar6) && (iVar11 < iVar7)) goto LAB_001018e6;
LAB_001018f6:
                      if (uVar10 != 0xffffffff) goto LAB_001018fb;
                    }
                    else {
                      pbVar8 = (byte *)((long)(int)(iVar7 * uVar6 + uVar10) + *(long *)this);
                      *pbVar8 = *pbVar8 | 2;
                      iVar7 = *(int *)(this + 8);
                      if (iVar11 < iVar7) {
LAB_001018e6:
                        pbVar8 = (byte *)((long)(int)(uVar6 * iVar7 + iVar11) + *(long *)this);
                        *pbVar8 = *pbVar8 | 2;
                        goto LAB_001018f6;
                      }
LAB_001018fb:
                      if (*(int *)(this + 0xc) <= iVar1) goto LAB_00101770;
                      pbVar8 = (byte *)((long)(int)(uVar10 + *(int *)(this + 8) * iVar1) +
                                       *(long *)this);
                      *pbVar8 = *pbVar8 | 2;
                    }
                    if ((iVar11 < *(int *)(this + 8)) && (iVar1 < *(int *)(this + 0xc))) {
                      pbVar8 = (byte *)((long)(*(int *)(this + 8) * iVar1 + iVar11) + *(long *)this)
                      ;
                      *pbVar8 = *pbVar8 | 2;
                    }
                  }
                }
              }
            }
LAB_00101770:
            pEVar9 = this_00 + 8;
            pEVar3 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(this_00);
            this_00 = pEVar9;
          } while ((EdgeHolder *)plVar12[1] != pEVar9);
        }
      }
      plVar12 = plVar12 + 3;
    } while (*(long **)(param_1 + 8) != plVar12);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::MSDFErrorCorrection::protectAll() */

void __thiscall msdfgen::MSDFErrorCorrection::protectAll(MSDFErrorCorrection *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)this;
  pbVar2 = pbVar1 + *(int *)(this + 8) * *(int *)(this + 0xc);
  if (pbVar1 < pbVar2) {
    if (((int)pbVar2 - (int)pbVar1 & 1U) != 0) {
      *pbVar1 = *pbVar1 | 2;
      pbVar1 = pbVar1 + 1;
      if (pbVar2 == pbVar1) {
        return;
      }
    }
    do {
      *pbVar1 = *pbVar1 | 2;
      pbVar1[1] = pbVar1[1] | 2;
      pbVar1 = pbVar1 + 2;
    } while (pbVar2 != pbVar1);
  }
  return;
}



/* msdfgen::MSDFErrorCorrection::getStencil() const */

undefined1  [16] __thiscall msdfgen::MSDFErrorCorrection::getStencil(MSDFErrorCorrection *this)

{
  return *(undefined1 (*) [16])this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::MSDFErrorCorrection::protectEdges<3>(msdfgen::BitmapConstRef<float, 3> const&) */

void msdfgen::MSDFErrorCorrection::protectEdges<3>(BitmapConstRef *param_1)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  long *in_RSI;
  long lVar16;
  long lVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double in_XMM1_Qa;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  pBVar1 = param_1 + 0x10;
  pBVar2 = param_1 + 0x30;
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar2);
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar23 = SQRT(dVar23 * dVar23 + in_XMM1_Qa) * __LC16;
  if (0 < *(int *)((long)in_RSI + 0xc)) {
    iVar13 = 0;
    iVar8 = (int)in_RSI[1];
    fVar31 = _LC8;
    uVar29 = _LC10;
    do {
      iVar14 = 0;
      lVar10 = (long)(iVar13 * iVar8 * 3) * 4;
      pfVar19 = (float *)(*in_RSI + lVar10);
      pfVar12 = (float *)(*in_RSI + 0xc + lVar10);
      if (1 < iVar8) {
        do {
          fVar30 = pfVar19[1];
          fVar4 = *pfVar19;
          fVar5 = pfVar19[2];
          if (fVar4 < fVar30) {
            fVar25 = fVar30;
            fVar24 = fVar4;
            if (fVar5 < fVar30) goto LAB_00101ae3;
          }
          else {
            fVar25 = fVar4;
            if ((fVar5 < fVar4) && (fVar24 = fVar30, fVar30 < fVar4)) {
LAB_00101ae3:
              fVar25 = fVar5;
              if (fVar5 <= fVar24) {
                fVar25 = fVar24;
              }
            }
          }
          fVar24 = pfVar12[1];
          fVar32 = *pfVar12;
          in_XMM1_Qa = (double)(ulong)(uint)fVar32;
          fVar27 = pfVar12[2];
          if (fVar24 <= fVar32) {
            if ((fVar27 < fVar32) && (fVar21 = fVar24, fVar24 < fVar32)) goto LAB_00101b8d;
          }
          else {
            fVar21 = fVar32;
            if (fVar27 < fVar24) {
LAB_00101b8d:
              if (fVar27 <= fVar21) {
                fVar27 = fVar21;
              }
              in_XMM1_Qa = (double)(ulong)(uint)fVar27;
            }
            else {
              in_XMM1_Qa = (double)(ulong)(uint)fVar24;
            }
          }
          fVar24 = SUB84(in_XMM1_Qa,0);
          iVar11 = iVar14 + 1;
          if ((float)((uint)(fVar25 - fVar31) & uVar29) + (float)((uint)(fVar24 - fVar31) & uVar29)
              < (float)dVar23) {
            uVar9 = edgeBetweenTexels(pfVar19,pfVar12);
            fVar31 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar8 = *(int *)(param_1 + 8) * iVar13;
            if ((((fVar4 != fVar25) && ((uVar9 & 1) != 0)) ||
                (((uVar9 & 2) != 0 && (fVar30 != fVar25)))) ||
               (((uVar9 & 4) != 0 && (fVar5 != fVar25)))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 + iVar14));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar8 = *(int *)(param_1 + 8) * iVar13;
            }
            if (((((uVar9 & 1) != 0) && (fVar24 != *pfVar12)) ||
                (((uVar9 & 2) != 0 && (fVar24 != pfVar12[1])))) ||
               (((uVar9 & 4) != 0 && (fVar24 != pfVar12[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 + iVar11));
              *pbVar3 = *pbVar3 | 2;
            }
            iVar8 = (int)in_RSI[1];
          }
          if (iVar8 + -1 <= iVar11) break;
          pfVar19 = pfVar19 + 3;
          pfVar12 = pfVar12 + 3;
          iVar14 = iVar11;
        } while( true );
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)((long)in_RSI + 0xc));
  }
  msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar2);
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar23 = SQRT(dVar23 * dVar23 + in_XMM1_Qa) * __LC16;
  if (1 < *(int *)((long)in_RSI + 0xc)) {
    fVar31 = _LC8;
    iVar8 = 0;
    uVar29 = _LC10;
    do {
      iVar13 = (int)in_RSI[1];
      iVar11 = 0;
      pfVar19 = (float *)(*in_RSI + (long)(iVar13 * iVar8 * 3) * 4);
      iVar14 = iVar8 + 1;
      pfVar12 = (float *)(*in_RSI + (long)((iVar13 * iVar8 + iVar13) * 3) * 4);
      if (0 < iVar13) {
        do {
          fVar30 = pfVar19[1];
          fVar4 = *pfVar19;
          fVar5 = pfVar19[2];
          if (fVar4 < fVar30) {
            fVar25 = fVar4;
            fVar24 = fVar30;
            if (fVar5 < fVar30) goto LAB_00101dbb;
          }
          else {
            fVar24 = fVar4;
            if ((fVar5 < fVar4) && (fVar25 = fVar30, fVar30 < fVar4)) {
LAB_00101dbb:
              fVar24 = fVar5;
              if (fVar5 <= fVar25) {
                fVar24 = fVar25;
              }
            }
          }
          fVar25 = pfVar12[1];
          fVar32 = *pfVar12;
          in_XMM1_Qa = (double)(ulong)(uint)fVar32;
          fVar27 = pfVar12[2];
          if (fVar25 <= fVar32) {
            if ((fVar27 < fVar32) && (fVar21 = fVar25, fVar25 < fVar32)) goto LAB_00101ed5;
          }
          else {
            fVar21 = fVar32;
            if (fVar27 < fVar25) {
LAB_00101ed5:
              if (fVar27 <= fVar21) {
                fVar27 = fVar21;
              }
              in_XMM1_Qa = (double)(ulong)(uint)fVar27;
            }
            else {
              in_XMM1_Qa = (double)(ulong)(uint)fVar25;
            }
          }
          fVar25 = SUB84(in_XMM1_Qa,0);
          if ((float)((uint)(fVar24 - fVar31) & uVar29) + (float)((uint)(fVar25 - fVar31) & uVar29)
              < (float)dVar23) {
            uVar9 = edgeBetweenTexels(pfVar19,pfVar12);
            fVar31 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar13 = *(int *)(param_1 + 8);
            if ((((fVar4 != fVar24) && ((uVar9 & 1) != 0)) ||
                (((uVar9 & 2) != 0 && (fVar30 != fVar24)))) ||
               (((uVar9 & 4) != 0 && (fVar5 != fVar24)))) {
              pbVar3 = (byte *)(lVar10 + (iVar13 * iVar8 + iVar11));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar13 = *(int *)(param_1 + 8);
            }
            if (((((uVar9 & 1) != 0) && (fVar25 != *pfVar12)) ||
                (((uVar9 & 2) != 0 && (fVar25 != pfVar12[1])))) ||
               (((uVar9 & 4) != 0 && (fVar25 != pfVar12[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar13 * iVar14 + iVar11));
              *pbVar3 = *pbVar3 | 2;
            }
          }
          pfVar19 = pfVar19 + 3;
          pfVar12 = pfVar12 + 3;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)in_RSI[1]);
      }
      iVar8 = iVar14;
    } while (iVar14 < *(int *)((long)in_RSI + 0xc) + -1);
  }
  msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar2);
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  fVar31 = (float)(SQRT(dVar23 * dVar23 + in_XMM1_Qa * in_XMM1_Qa) * __LC16);
  if (1 < *(int *)((long)in_RSI + 0xc)) {
    iVar8 = (int)in_RSI[1];
    uVar29 = _LC10;
    fVar30 = _LC8;
    iVar13 = 0;
    do {
      lVar10 = *in_RSI;
      lVar17 = (long)(iVar8 * iVar13 * 3) * 4;
      lVar16 = (long)((iVar8 * iVar13 + iVar8) * 3) * 4;
      pfVar19 = (float *)(lVar10 + lVar17);
      pfVar20 = (float *)(lVar10 + 0xc + lVar17);
      pfVar12 = (float *)(lVar10 + lVar16);
      iVar11 = iVar13 + 1;
      pfVar15 = (float *)(lVar10 + 0xc + lVar16);
      iVar14 = 0;
      if (1 < iVar8) {
        do {
          fVar4 = pfVar19[1];
          fVar5 = *pfVar19;
          fVar25 = pfVar19[2];
          if (fVar5 < fVar4) {
            fVar24 = fVar5;
            fVar32 = fVar4;
            if (fVar25 < fVar4) goto LAB_0010211e;
          }
          else {
            fVar32 = fVar5;
            if ((fVar25 < fVar5) && (fVar24 = fVar4, fVar4 < fVar5)) {
LAB_0010211e:
              fVar32 = fVar25;
              if (fVar25 <= fVar24) {
                fVar32 = fVar24;
              }
            }
          }
          fVar24 = pfVar20[1];
          fVar27 = *pfVar20;
          fVar21 = pfVar20[2];
          if (fVar24 <= fVar27) {
            if ((fVar21 < fVar27) && (fVar28 = fVar24, fVar24 < fVar27)) goto LAB_00102295;
          }
          else {
            fVar28 = fVar27;
            fVar27 = fVar24;
            if (fVar21 < fVar24) {
LAB_00102295:
              fVar27 = fVar21;
              if (fVar21 <= fVar28) {
                fVar27 = fVar28;
              }
            }
          }
          fVar24 = pfVar12[1];
          fVar21 = *pfVar12;
          fVar28 = pfVar12[2];
          if (fVar24 <= fVar21) {
            if (fVar21 <= fVar28) {
              fVar28 = fVar21;
            }
            bVar7 = fVar24 < fVar21;
            fVar22 = fVar21;
            fVar21 = fVar24;
            if (bVar7) goto LAB_00102177;
          }
          else {
            fVar22 = fVar24;
            if (fVar28 < fVar24) {
LAB_00102177:
              fVar22 = fVar28;
              if (fVar28 <= fVar21) {
                fVar22 = fVar21;
              }
            }
          }
          fVar24 = pfVar15[1];
          fVar21 = *pfVar15;
          fVar28 = pfVar15[2];
          if (fVar24 <= fVar21) {
            if (fVar21 <= fVar28) {
              fVar28 = fVar21;
            }
            fVar26 = fVar24;
            if (fVar24 < fVar21) goto LAB_0010219e;
          }
          else {
            fVar26 = fVar21;
            fVar21 = fVar24;
            if (fVar28 < fVar24) {
LAB_0010219e:
              fVar21 = fVar28;
              if (fVar28 <= fVar26) {
                fVar21 = fVar26;
              }
            }
          }
          iVar18 = iVar14 + 1;
          if ((float)((uint)(fVar32 - fVar30) & uVar29) + (float)((uint)(fVar21 - fVar30) & uVar29)
              < fVar31) {
            uVar9 = edgeBetweenTexels(pfVar19,pfVar15);
            fVar30 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar8 = *(int *)(param_1 + 8);
            if ((((fVar5 != fVar32) && ((uVar9 & 1) != 0)) ||
                (((uVar9 & 2) != 0 && (fVar4 != fVar32)))) ||
               (((uVar9 & 4) != 0 && (fVar25 != fVar32)))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar13 + iVar14));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar8 = *(int *)(param_1 + 8);
            }
            if (((((uVar9 & 1) != 0) && (fVar21 != *pfVar15)) ||
                (((uVar9 & 2) != 0 && (fVar21 != pfVar15[1])))) ||
               (((uVar9 & 4) != 0 && (fVar21 != pfVar15[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar11 + iVar18));
              *pbVar3 = *pbVar3 | 2;
            }
          }
          if ((float)((uint)(fVar27 - fVar30) & uVar29) + (float)((uint)(fVar22 - fVar30) & uVar29)
              < fVar31) {
            uVar9 = edgeBetweenTexels(pfVar20,pfVar12);
            fVar30 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar8 = *(int *)(param_1 + 8);
            if (((((uVar9 & 1) != 0) && (fVar27 != *pfVar20)) ||
                (((uVar9 & 2) != 0 && (fVar27 != pfVar20[1])))) ||
               (((uVar9 & 4) != 0 && (fVar27 != pfVar20[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar13 + iVar18));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar8 = *(int *)(param_1 + 8);
            }
            if (((((uVar9 & 1) != 0) && (fVar22 != *pfVar12)) ||
                (((uVar9 & 2) != 0 && (fVar22 != pfVar12[1])))) ||
               (((uVar9 & 4) != 0 && (fVar22 != pfVar12[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar11 + iVar14));
              *pbVar3 = *pbVar3 | 2;
            }
          }
          pfVar19 = pfVar19 + 3;
          pfVar20 = pfVar20 + 3;
          pfVar12 = pfVar12 + 3;
          pfVar15 = pfVar15 + 3;
          iVar8 = (int)in_RSI[1];
          iVar14 = iVar18;
        } while (iVar18 < iVar8 + -1);
      }
      iVar13 = iVar11;
    } while (iVar11 < *(int *)((long)in_RSI + 0xc) + -1);
  }
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::MSDFErrorCorrection::protectEdges<4>(msdfgen::BitmapConstRef<float, 4> const&) */

void msdfgen::MSDFErrorCorrection::protectEdges<4>(BitmapConstRef *param_1)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  long *in_RSI;
  long lVar16;
  long lVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double in_XMM1_Qa;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  pBVar1 = param_1 + 0x10;
  pBVar2 = param_1 + 0x30;
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar2);
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar23 = SQRT(dVar23 * dVar23 + in_XMM1_Qa) * __LC16;
  if (0 < *(int *)((long)in_RSI + 0xc)) {
    iVar13 = 0;
    iVar8 = (int)in_RSI[1];
    fVar31 = _LC8;
    uVar29 = _LC10;
    do {
      iVar14 = 0;
      lVar10 = (long)(iVar13 * iVar8 * 4) * 4;
      pfVar19 = (float *)(*in_RSI + lVar10);
      pfVar12 = (float *)(*in_RSI + 0x10 + lVar10);
      if (1 < iVar8) {
        do {
          fVar30 = pfVar19[1];
          fVar4 = *pfVar19;
          fVar5 = pfVar19[2];
          if (fVar4 < fVar30) {
            fVar25 = fVar30;
            fVar24 = fVar4;
            if (fVar5 < fVar30) goto LAB_001026a3;
          }
          else {
            fVar25 = fVar4;
            if ((fVar5 < fVar4) && (fVar24 = fVar30, fVar30 < fVar4)) {
LAB_001026a3:
              fVar25 = fVar5;
              if (fVar5 <= fVar24) {
                fVar25 = fVar24;
              }
            }
          }
          fVar24 = pfVar12[1];
          fVar32 = *pfVar12;
          in_XMM1_Qa = (double)(ulong)(uint)fVar32;
          fVar27 = pfVar12[2];
          if (fVar24 <= fVar32) {
            if ((fVar27 < fVar32) && (fVar21 = fVar24, fVar24 < fVar32)) goto LAB_0010274d;
          }
          else {
            fVar21 = fVar32;
            if (fVar27 < fVar24) {
LAB_0010274d:
              if (fVar27 <= fVar21) {
                fVar27 = fVar21;
              }
              in_XMM1_Qa = (double)(ulong)(uint)fVar27;
            }
            else {
              in_XMM1_Qa = (double)(ulong)(uint)fVar24;
            }
          }
          fVar24 = SUB84(in_XMM1_Qa,0);
          iVar11 = iVar14 + 1;
          if ((float)((uint)(fVar25 - fVar31) & uVar29) + (float)((uint)(fVar24 - fVar31) & uVar29)
              < (float)dVar23) {
            uVar9 = edgeBetweenTexels(pfVar19,pfVar12);
            fVar31 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar8 = *(int *)(param_1 + 8) * iVar13;
            if ((((fVar4 != fVar25) && ((uVar9 & 1) != 0)) ||
                (((uVar9 & 2) != 0 && (fVar30 != fVar25)))) ||
               (((uVar9 & 4) != 0 && (fVar5 != fVar25)))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 + iVar14));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar8 = *(int *)(param_1 + 8) * iVar13;
            }
            if (((((uVar9 & 1) != 0) && (fVar24 != *pfVar12)) ||
                (((uVar9 & 2) != 0 && (fVar24 != pfVar12[1])))) ||
               (((uVar9 & 4) != 0 && (fVar24 != pfVar12[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 + iVar11));
              *pbVar3 = *pbVar3 | 2;
            }
            iVar8 = (int)in_RSI[1];
          }
          if (iVar8 + -1 <= iVar11) break;
          pfVar19 = pfVar19 + 4;
          pfVar12 = pfVar12 + 4;
          iVar14 = iVar11;
        } while( true );
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)((long)in_RSI + 0xc));
  }
  msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar2);
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar23 = SQRT(dVar23 * dVar23 + in_XMM1_Qa) * __LC16;
  if (1 < *(int *)((long)in_RSI + 0xc)) {
    fVar31 = _LC8;
    iVar8 = 0;
    uVar29 = _LC10;
    do {
      iVar13 = (int)in_RSI[1];
      iVar11 = 0;
      pfVar19 = (float *)(*in_RSI + (long)(iVar13 * iVar8 * 4) * 4);
      iVar14 = iVar8 + 1;
      pfVar12 = (float *)(*in_RSI + (long)((iVar13 * iVar8 + iVar13) * 4) * 4);
      if (0 < iVar13) {
        do {
          fVar30 = pfVar19[1];
          fVar4 = *pfVar19;
          fVar5 = pfVar19[2];
          if (fVar4 < fVar30) {
            fVar25 = fVar4;
            fVar24 = fVar30;
            if (fVar5 < fVar30) goto LAB_0010297b;
          }
          else {
            fVar24 = fVar4;
            if ((fVar5 < fVar4) && (fVar25 = fVar30, fVar30 < fVar4)) {
LAB_0010297b:
              fVar24 = fVar5;
              if (fVar5 <= fVar25) {
                fVar24 = fVar25;
              }
            }
          }
          fVar25 = pfVar12[1];
          fVar32 = *pfVar12;
          in_XMM1_Qa = (double)(ulong)(uint)fVar32;
          fVar27 = pfVar12[2];
          if (fVar25 <= fVar32) {
            if ((fVar27 < fVar32) && (fVar21 = fVar25, fVar25 < fVar32)) goto LAB_00102a95;
          }
          else {
            fVar21 = fVar32;
            if (fVar27 < fVar25) {
LAB_00102a95:
              if (fVar27 <= fVar21) {
                fVar27 = fVar21;
              }
              in_XMM1_Qa = (double)(ulong)(uint)fVar27;
            }
            else {
              in_XMM1_Qa = (double)(ulong)(uint)fVar25;
            }
          }
          fVar25 = SUB84(in_XMM1_Qa,0);
          if ((float)((uint)(fVar24 - fVar31) & uVar29) + (float)((uint)(fVar25 - fVar31) & uVar29)
              < (float)dVar23) {
            uVar9 = edgeBetweenTexels(pfVar19,pfVar12);
            fVar31 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar13 = *(int *)(param_1 + 8);
            if ((((fVar4 != fVar24) && ((uVar9 & 1) != 0)) ||
                (((uVar9 & 2) != 0 && (fVar30 != fVar24)))) ||
               (((uVar9 & 4) != 0 && (fVar5 != fVar24)))) {
              pbVar3 = (byte *)(lVar10 + (iVar13 * iVar8 + iVar11));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar13 = *(int *)(param_1 + 8);
            }
            if (((((uVar9 & 1) != 0) && (fVar25 != *pfVar12)) ||
                (((uVar9 & 2) != 0 && (fVar25 != pfVar12[1])))) ||
               (((uVar9 & 4) != 0 && (fVar25 != pfVar12[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar13 * iVar14 + iVar11));
              *pbVar3 = *pbVar3 | 2;
            }
          }
          pfVar19 = pfVar19 + 4;
          pfVar12 = pfVar12 + 4;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)in_RSI[1]);
      }
      iVar8 = iVar14;
    } while (iVar14 < *(int *)((long)in_RSI + 0xc) + -1);
  }
  msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar2);
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  fVar31 = (float)(SQRT(dVar23 * dVar23 + in_XMM1_Qa * in_XMM1_Qa) * __LC16);
  if (1 < *(int *)((long)in_RSI + 0xc)) {
    iVar8 = (int)in_RSI[1];
    uVar29 = _LC10;
    fVar30 = _LC8;
    iVar13 = 0;
    do {
      lVar10 = *in_RSI;
      lVar17 = (long)(iVar8 * iVar13 * 4) * 4;
      lVar16 = (long)((iVar8 * iVar13 + iVar8) * 4) * 4;
      pfVar19 = (float *)(lVar10 + lVar17);
      pfVar20 = (float *)(lVar10 + 0x10 + lVar17);
      pfVar12 = (float *)(lVar10 + lVar16);
      iVar11 = iVar13 + 1;
      pfVar15 = (float *)(lVar10 + 0x10 + lVar16);
      iVar14 = 0;
      if (1 < iVar8) {
        do {
          fVar4 = pfVar19[1];
          fVar5 = *pfVar19;
          fVar25 = pfVar19[2];
          if (fVar5 < fVar4) {
            fVar24 = fVar5;
            fVar32 = fVar4;
            if (fVar25 < fVar4) goto LAB_00102cde;
          }
          else {
            fVar32 = fVar5;
            if ((fVar25 < fVar5) && (fVar24 = fVar4, fVar4 < fVar5)) {
LAB_00102cde:
              fVar32 = fVar25;
              if (fVar25 <= fVar24) {
                fVar32 = fVar24;
              }
            }
          }
          fVar24 = pfVar20[1];
          fVar27 = *pfVar20;
          fVar21 = pfVar20[2];
          if (fVar24 <= fVar27) {
            if ((fVar21 < fVar27) && (fVar28 = fVar24, fVar24 < fVar27)) goto LAB_00102e55;
          }
          else {
            fVar28 = fVar27;
            fVar27 = fVar24;
            if (fVar21 < fVar24) {
LAB_00102e55:
              fVar27 = fVar21;
              if (fVar21 <= fVar28) {
                fVar27 = fVar28;
              }
            }
          }
          fVar24 = pfVar12[1];
          fVar21 = *pfVar12;
          fVar28 = pfVar12[2];
          if (fVar24 <= fVar21) {
            if (fVar21 <= fVar28) {
              fVar28 = fVar21;
            }
            bVar7 = fVar24 < fVar21;
            fVar22 = fVar21;
            fVar21 = fVar24;
            if (bVar7) goto LAB_00102d37;
          }
          else {
            fVar22 = fVar24;
            if (fVar28 < fVar24) {
LAB_00102d37:
              fVar22 = fVar28;
              if (fVar28 <= fVar21) {
                fVar22 = fVar21;
              }
            }
          }
          fVar24 = pfVar15[1];
          fVar21 = *pfVar15;
          fVar28 = pfVar15[2];
          if (fVar24 <= fVar21) {
            if (fVar21 <= fVar28) {
              fVar28 = fVar21;
            }
            fVar26 = fVar24;
            if (fVar24 < fVar21) goto LAB_00102d5e;
          }
          else {
            fVar26 = fVar21;
            fVar21 = fVar24;
            if (fVar28 < fVar24) {
LAB_00102d5e:
              fVar21 = fVar28;
              if (fVar28 <= fVar26) {
                fVar21 = fVar26;
              }
            }
          }
          iVar18 = iVar14 + 1;
          if ((float)((uint)(fVar32 - fVar30) & uVar29) + (float)((uint)(fVar21 - fVar30) & uVar29)
              < fVar31) {
            uVar9 = edgeBetweenTexels(pfVar19,pfVar15);
            fVar30 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar8 = *(int *)(param_1 + 8);
            if ((((fVar5 != fVar32) && ((uVar9 & 1) != 0)) ||
                (((uVar9 & 2) != 0 && (fVar4 != fVar32)))) ||
               (((uVar9 & 4) != 0 && (fVar25 != fVar32)))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar13 + iVar14));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar8 = *(int *)(param_1 + 8);
            }
            if (((((uVar9 & 1) != 0) && (fVar21 != *pfVar15)) ||
                (((uVar9 & 2) != 0 && (fVar21 != pfVar15[1])))) ||
               (((uVar9 & 4) != 0 && (fVar21 != pfVar15[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar11 + iVar18));
              *pbVar3 = *pbVar3 | 2;
            }
          }
          if ((float)((uint)(fVar27 - fVar30) & uVar29) + (float)((uint)(fVar22 - fVar30) & uVar29)
              < fVar31) {
            uVar9 = edgeBetweenTexels(pfVar20,pfVar12);
            fVar30 = _LC8;
            uVar29 = _LC10;
            lVar10 = *(long *)param_1;
            iVar8 = *(int *)(param_1 + 8);
            if (((((uVar9 & 1) != 0) && (fVar27 != *pfVar20)) ||
                (((uVar9 & 2) != 0 && (fVar27 != pfVar20[1])))) ||
               (((uVar9 & 4) != 0 && (fVar27 != pfVar20[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar13 + iVar18));
              *pbVar3 = *pbVar3 | 2;
              lVar10 = *(long *)param_1;
              iVar8 = *(int *)(param_1 + 8);
            }
            if (((((uVar9 & 1) != 0) && (fVar22 != *pfVar12)) ||
                (((uVar9 & 2) != 0 && (fVar22 != pfVar12[1])))) ||
               (((uVar9 & 4) != 0 && (fVar22 != pfVar12[2])))) {
              pbVar3 = (byte *)(lVar10 + (iVar8 * iVar11 + iVar14));
              *pbVar3 = *pbVar3 | 2;
            }
          }
          pfVar19 = pfVar19 + 4;
          pfVar20 = pfVar20 + 4;
          pfVar12 = pfVar12 + 4;
          pfVar15 = pfVar15 + 4;
          iVar8 = (int)in_RSI[1];
          iVar14 = iVar18;
        } while (iVar18 < iVar8 + -1);
      }
      iVar13 = iVar11;
    } while (iVar11 < *(int *)((long)in_RSI + 0xc) + -1);
  }
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void msdfgen::MSDFErrorCorrection::findErrors<3>(msdfgen::BitmapConstRef<float, 3> const&) */

void msdfgen::MSDFErrorCorrection::findErrors<3>(BitmapConstRef *param_1)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  BaseArtifactClassifier *pBVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float *pfVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  long *in_RSI;
  int iVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  long in_FS_OFFSET;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double in_XMM1_Qa;
  float *local_e0;
  float *local_d8;
  float *local_c8;
  int local_bc;
  float *local_b0;
  double local_88;
  undefined1 local_80;
  double local_78;
  undefined1 local_70;
  double local_68;
  undefined1 local_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  pBVar1 = param_1 + 0x30;
  pBVar2 = param_1 + 0x10;
  dVar5 = *(double *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar1);
  dStack_50 = 0.0;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar2);
  dVar6 = *(double *)(param_1 + 0x40);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar7 = dVar22 * dVar22 + in_XMM1_Qa;
  dStack_50 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar1);
  local_58 = 0.0;
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar2);
  dVar22 = *(double *)(param_1 + 0x40);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar23 = dVar23 * dVar23 + in_XMM1_Qa;
  local_58 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar1);
  dStack_50 = local_58;
  dVar24 = (double)msdfgen::Projection::unprojectVector(pBVar2);
  dVar22 = dVar22 * SQRT(dVar24 * dVar24 + in_XMM1_Qa * in_XMM1_Qa);
  if (0 < *(int *)((long)in_RSI + 0xc)) {
    iVar16 = (int)in_RSI[1];
    local_bc = -1;
    iVar11 = 0;
    do {
      iVar12 = iVar11 + 1;
      iVar20 = 0;
      if (0 < iVar16) {
LAB_00103387:
        do {
          lVar19 = *in_RSI;
          iVar18 = iVar16 * iVar11;
          pBVar3 = (BaseArtifactClassifier *)(lVar19 + (long)((iVar18 + iVar20) * 3) * 4);
          fVar26 = *(float *)(pBVar3 + 4);
          fVar21 = *(float *)pBVar3;
          fVar4 = *(float *)(pBVar3 + 8);
          if (fVar21 < fVar26) {
            bVar8 = fVar4 < fVar26;
            fVar25 = fVar26;
            fVar26 = fVar21;
            if (bVar8) goto LAB_001033ce;
          }
          else {
            fVar25 = fVar21;
            if ((fVar4 < fVar21) && (fVar26 < fVar21)) {
LAB_001033ce:
              fVar25 = fVar4;
              if (fVar4 <= fVar26) {
                fVar25 = fVar26;
              }
            }
          }
          iVar15 = iVar20 + 1;
          pfVar9 = (float *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) + *(long *)param_1);
          bVar17 = *(byte *)pfVar9;
          uVar14 = bVar17 >> 1 & 1;
          fVar26 = SUB84(SQRT(dVar7) * dVar5,0);
          if (iVar20 == 0) {
            local_e0 = (float *)0x0;
LAB_001033e9:
            uVar13 = (undefined1)uVar14;
            fVar21 = SUB84(SQRT(dVar23) * dVar6,0);
            if (iVar11 == 0) {
              local_d8 = (float *)0x0;
            }
            else {
              local_d8 = (float *)(lVar19 + (long)((local_bc * iVar16 + iVar20) * 3) * 4);
              bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                                ((msdfgen *)(ulong)uVar14,pBVar3,fVar21,local_d8,pfVar9);
              if (bVar8) goto LAB_00103370;
            }
            if (iVar20 < iVar16 + -1) {
              local_c8 = (float *)(lVar19 + (long)((iVar18 + iVar15) * 3) * 4);
              bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                                ((msdfgen *)(ulong)uVar14,pBVar3,fVar26,local_c8,pfVar9);
              if (bVar8) goto LAB_00103370;
              iVar18 = *(int *)((long)in_RSI + 0xc);
            }
            else {
              local_c8 = (float *)0x0;
              iVar18 = *(int *)((long)in_RSI + 0xc);
            }
            if (iVar11 < iVar18 + -1) {
              local_b0 = (float *)(lVar19 + (long)((iVar12 * iVar16 + iVar20) * 3) * 4);
              bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                                ((msdfgen *)(ulong)uVar14,pBVar3,fVar21,local_b0,pfVar9);
              if (bVar8) goto LAB_00103370;
            }
            else {
              local_b0 = (float *)0x0;
            }
            if ((0 < iVar20) && (0 < iVar11)) {
              local_88 = dVar22;
              local_80 = uVar13;
              bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                ((BaseArtifactClassifier *)&local_88,fVar25,(float *)pBVar3,local_e0
                                 ,local_d8,
                                 (float *)(lVar19 + (long)((iVar20 + -1 + iVar16 * local_bc) * 3) *
                                                    4));
              if (!bVar8) {
                iVar16 = (int)in_RSI[1];
                if (iVar20 < iVar16 + -1) {
                  lVar19 = *in_RSI;
                  goto LAB_00103546;
                }
                goto LAB_001036e0;
              }
LAB_00103778:
              pfVar9 = (float *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) + *(long *)param_1)
              ;
              bVar17 = *(byte *)pfVar9;
              goto LAB_00103370;
            }
            if ((iVar20 < iVar16 + -1) && (iVar11 != 0)) {
LAB_00103546:
              local_78 = dVar22;
              local_70 = uVar13;
              bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                ((BaseArtifactClassifier *)&local_78,fVar25,(float *)pBVar3,local_c8
                                 ,local_d8,
                                 (float *)(lVar19 + (long)((iVar16 * local_bc + iVar15) * 3) * 4));
              if (bVar8) goto LAB_00103778;
              iVar16 = (int)in_RSI[1];
            }
            if (iVar20 == 0) {
LAB_001035a9:
              if ((iVar20 < iVar16 + -1) && (iVar11 < *(int *)((long)in_RSI + 0xc) + -1)) {
                dStack_50 = (double)CONCAT71(dStack_50._1_7_,uVar13);
                local_58 = dVar22;
                bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                  ((BaseArtifactClassifier *)&local_58,fVar25,(float *)pBVar3,
                                   local_c8,local_b0,
                                   (float *)(*in_RSI + (long)((iVar16 * iVar12 + iVar15) * 3) * 4));
                pbVar10 = (byte *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) +
                                  *(long *)param_1);
                *pbVar10 = bVar8 | *pbVar10;
                iVar16 = (int)in_RSI[1];
                iVar20 = iVar15;
                if (iVar16 <= iVar15) break;
                goto LAB_00103387;
              }
            }
            else {
LAB_001036e0:
              if (iVar11 < *(int *)((long)in_RSI + 0xc) + -1) {
                local_68 = dVar22;
                local_60 = uVar13;
                bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                  ((BaseArtifactClassifier *)&local_68,fVar25,(float *)pBVar3,
                                   local_e0,local_b0,
                                   (float *)(*in_RSI +
                                            (long)((iVar20 + -1 + iVar16 * iVar12) * 3) * 4));
                if (bVar8) goto LAB_00103778;
                iVar16 = (int)in_RSI[1];
                goto LAB_001035a9;
              }
            }
            pfVar9 = (float *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) + *(long *)param_1);
            bVar17 = *(byte *)pfVar9;
          }
          else {
            local_e0 = (float *)(lVar19 + (long)((iVar18 + -1 + iVar20) * 3) * 4);
            bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                              ((msdfgen *)(ulong)uVar14,pBVar3,fVar26,local_e0,pfVar9);
            if (!bVar8) goto LAB_001033e9;
LAB_00103370:
            bVar17 = bVar17 | 1;
          }
          *(byte *)pfVar9 = bVar17;
          iVar16 = (int)in_RSI[1];
          iVar20 = iVar15;
        } while (iVar15 < iVar16);
      }
      local_bc = local_bc + 1;
      iVar11 = iVar12;
    } while (iVar12 < *(int *)((long)in_RSI + 0xc));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void msdfgen::MSDFErrorCorrection::findErrors<4>(msdfgen::BitmapConstRef<float, 4> const&) */

void msdfgen::MSDFErrorCorrection::findErrors<4>(BitmapConstRef *param_1)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  BaseArtifactClassifier *pBVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float *pfVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  long *in_RSI;
  int iVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  long in_FS_OFFSET;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double in_XMM1_Qa;
  float *local_e0;
  float *local_d8;
  float *local_c8;
  int local_bc;
  float *local_b0;
  double local_88;
  undefined1 local_80;
  double local_78;
  undefined1 local_70;
  double local_68;
  undefined1 local_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  pBVar1 = param_1 + 0x30;
  pBVar2 = param_1 + 0x10;
  dVar5 = *(double *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar1);
  dStack_50 = 0.0;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar2);
  dVar6 = *(double *)(param_1 + 0x40);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar7 = dVar22 * dVar22 + in_XMM1_Qa;
  dStack_50 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar1);
  local_58 = 0.0;
  dVar23 = (double)msdfgen::Projection::unprojectVector(pBVar2);
  dVar22 = *(double *)(param_1 + 0x40);
  in_XMM1_Qa = in_XMM1_Qa * in_XMM1_Qa;
  dVar23 = dVar23 * dVar23 + in_XMM1_Qa;
  local_58 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)_LC2,pBVar1);
  dStack_50 = local_58;
  dVar24 = (double)msdfgen::Projection::unprojectVector(pBVar2);
  dVar22 = dVar22 * SQRT(dVar24 * dVar24 + in_XMM1_Qa * in_XMM1_Qa);
  if (0 < *(int *)((long)in_RSI + 0xc)) {
    iVar16 = (int)in_RSI[1];
    local_bc = -1;
    iVar11 = 0;
    do {
      iVar12 = iVar11 + 1;
      iVar20 = 0;
      if (0 < iVar16) {
LAB_001039c7:
        do {
          lVar19 = *in_RSI;
          iVar18 = iVar16 * iVar11;
          pBVar3 = (BaseArtifactClassifier *)(lVar19 + (long)((iVar18 + iVar20) * 4) * 4);
          fVar26 = *(float *)(pBVar3 + 4);
          fVar21 = *(float *)pBVar3;
          fVar4 = *(float *)(pBVar3 + 8);
          if (fVar21 < fVar26) {
            bVar8 = fVar4 < fVar26;
            fVar25 = fVar26;
            fVar26 = fVar21;
            if (bVar8) goto LAB_00103a0e;
          }
          else {
            fVar25 = fVar21;
            if ((fVar4 < fVar21) && (fVar26 < fVar21)) {
LAB_00103a0e:
              fVar25 = fVar4;
              if (fVar4 <= fVar26) {
                fVar25 = fVar26;
              }
            }
          }
          iVar15 = iVar20 + 1;
          pfVar9 = (float *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) + *(long *)param_1);
          bVar17 = *(byte *)pfVar9;
          uVar14 = bVar17 >> 1 & 1;
          fVar26 = SUB84(SQRT(dVar7) * dVar5,0);
          if (iVar20 == 0) {
            local_e0 = (float *)0x0;
LAB_00103a29:
            uVar13 = (undefined1)uVar14;
            fVar21 = SUB84(SQRT(dVar23) * dVar6,0);
            if (iVar11 == 0) {
              local_d8 = (float *)0x0;
            }
            else {
              local_d8 = (float *)(lVar19 + (long)((local_bc * iVar16 + iVar20) * 4) * 4);
              bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                                ((msdfgen *)(ulong)uVar14,pBVar3,fVar21,local_d8,pfVar9);
              if (bVar8) goto LAB_001039b0;
            }
            if (iVar20 < iVar16 + -1) {
              local_c8 = (float *)(lVar19 + (long)((iVar18 + iVar15) * 4) * 4);
              bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                                ((msdfgen *)(ulong)uVar14,pBVar3,fVar26,local_c8,pfVar9);
              if (bVar8) goto LAB_001039b0;
              iVar18 = *(int *)((long)in_RSI + 0xc);
            }
            else {
              local_c8 = (float *)0x0;
              iVar18 = *(int *)((long)in_RSI + 0xc);
            }
            if (iVar11 < iVar18 + -1) {
              local_b0 = (float *)(lVar19 + (long)((iVar12 * iVar16 + iVar20) * 4) * 4);
              bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                                ((msdfgen *)(ulong)uVar14,pBVar3,fVar21,local_b0,pfVar9);
              if (bVar8) goto LAB_001039b0;
            }
            else {
              local_b0 = (float *)0x0;
            }
            if ((0 < iVar20) && (0 < iVar11)) {
              local_88 = dVar22;
              local_80 = uVar13;
              bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                ((BaseArtifactClassifier *)&local_88,fVar25,(float *)pBVar3,local_e0
                                 ,local_d8,
                                 (float *)(lVar19 + (long)((iVar20 + -1 + iVar16 * local_bc) * 4) *
                                                    4));
              if (!bVar8) {
                iVar16 = (int)in_RSI[1];
                if (iVar20 < iVar16 + -1) {
                  lVar19 = *in_RSI;
                  goto LAB_00103b87;
                }
                goto LAB_00103d20;
              }
LAB_00103db8:
              pfVar9 = (float *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) + *(long *)param_1)
              ;
              bVar17 = *(byte *)pfVar9;
              goto LAB_001039b0;
            }
            if ((iVar20 < iVar16 + -1) && (iVar11 != 0)) {
LAB_00103b87:
              local_78 = dVar22;
              local_70 = uVar13;
              bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                ((BaseArtifactClassifier *)&local_78,fVar25,(float *)pBVar3,local_c8
                                 ,local_d8,
                                 (float *)(lVar19 + (long)((iVar16 * local_bc + iVar15) * 4) * 4));
              if (bVar8) goto LAB_00103db8;
              iVar16 = (int)in_RSI[1];
            }
            if (iVar20 == 0) {
LAB_00103be9:
              if ((iVar20 < iVar16 + -1) && (iVar11 < *(int *)((long)in_RSI + 0xc) + -1)) {
                dStack_50 = (double)CONCAT71(dStack_50._1_7_,uVar13);
                local_58 = dVar22;
                bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                  ((BaseArtifactClassifier *)&local_58,fVar25,(float *)pBVar3,
                                   local_c8,local_b0,
                                   (float *)(*in_RSI + (long)((iVar16 * iVar12 + iVar15) * 4) * 4));
                pbVar10 = (byte *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) +
                                  *(long *)param_1);
                *pbVar10 = bVar8 | *pbVar10;
                iVar16 = (int)in_RSI[1];
                iVar20 = iVar15;
                if (iVar16 <= iVar15) break;
                goto LAB_001039c7;
              }
            }
            else {
LAB_00103d20:
              if (iVar11 < *(int *)((long)in_RSI + 0xc) + -1) {
                local_68 = dVar22;
                local_60 = uVar13;
                bVar8 = hasDiagonalArtifact<msdfgen::BaseArtifactClassifier>
                                  ((BaseArtifactClassifier *)&local_68,fVar25,(float *)pBVar3,
                                   local_e0,local_b0,
                                   (float *)(*in_RSI +
                                            (long)((iVar20 + -1 + iVar16 * iVar12) * 4) * 4));
                if (bVar8) goto LAB_00103db8;
                iVar16 = (int)in_RSI[1];
                goto LAB_00103be9;
              }
            }
            pfVar9 = (float *)((long)(*(int *)(param_1 + 8) * iVar11 + iVar20) + *(long *)param_1);
            bVar17 = *(byte *)pfVar9;
          }
          else {
            local_e0 = (float *)(lVar19 + (long)((iVar18 + -1 + iVar20) * 4) * 4);
            bVar8 = hasLinearArtifact<msdfgen::BaseArtifactClassifier>
                              ((msdfgen *)(ulong)uVar14,pBVar3,fVar26,local_e0,pfVar9);
            if (!bVar8) goto LAB_00103a29;
LAB_001039b0:
            bVar17 = bVar17 | 1;
          }
          *(byte *)pfVar9 = bVar17;
          iVar16 = (int)in_RSI[1];
          iVar20 = iVar15;
        } while (iVar15 < iVar16);
      }
      local_bc = local_bc + 1;
      iVar11 = iVar12;
    } while (iVar12 < *(int *)((long)in_RSI + 0xc));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void msdfgen::MSDFErrorCorrection::apply<3>(msdfgen::BitmapRef<float, 3> const&) const */

void __thiscall msdfgen::MSDFErrorCorrection::apply<3>(MSDFErrorCorrection *this,BitmapRef *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte *pbVar4;
  byte *pbVar5;
  float fVar6;
  float fVar7;
  
  pbVar5 = *(byte **)this;
  pfVar3 = *(float **)param_1;
  if (*(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) < 1) {
    return;
  }
  pbVar4 = pbVar5 + *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
  do {
    if ((*pbVar5 & 1) != 0) {
      fVar1 = pfVar3[1];
      fVar6 = *pfVar3;
      fVar2 = pfVar3[2];
      if (fVar6 < fVar1) {
        fVar7 = fVar6;
        fVar6 = fVar1;
        if (fVar2 < fVar1) goto LAB_00103e49;
      }
      else if ((fVar2 < fVar6) && (fVar7 = fVar1, fVar1 < fVar6)) {
LAB_00103e49:
        fVar6 = fVar2;
        if (fVar2 <= fVar7) {
          fVar6 = fVar7;
        }
      }
      pfVar3[2] = fVar6;
      *(ulong *)pfVar3 = CONCAT44(fVar6,fVar6);
    }
    pbVar5 = pbVar5 + 1;
    pfVar3 = pfVar3 + 3;
    if (pbVar4 == pbVar5) {
      return;
    }
  } while( true );
}



/* void msdfgen::MSDFErrorCorrection::apply<4>(msdfgen::BitmapRef<float, 4> const&) const */

void __thiscall msdfgen::MSDFErrorCorrection::apply<4>(MSDFErrorCorrection *this,BitmapRef *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte *pbVar4;
  byte *pbVar5;
  float fVar6;
  float fVar7;
  
  pbVar5 = *(byte **)this;
  pfVar3 = *(float **)param_1;
  if (*(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) < 1) {
    return;
  }
  pbVar4 = pbVar5 + *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
  do {
    if ((*pbVar5 & 1) != 0) {
      fVar1 = pfVar3[1];
      fVar6 = *pfVar3;
      fVar2 = pfVar3[2];
      if (fVar6 < fVar1) {
        fVar7 = fVar6;
        fVar6 = fVar1;
        if (fVar2 < fVar1) goto LAB_00103ed9;
      }
      else if ((fVar2 < fVar6) && (fVar7 = fVar1, fVar1 < fVar6)) {
LAB_00103ed9:
        fVar6 = fVar2;
        if (fVar2 <= fVar7) {
          fVar6 = fVar7;
        }
      }
      pfVar3[2] = fVar6;
      *(ulong *)pfVar3 = CONCAT44(fVar6,fVar6);
    }
    pbVar5 = pbVar5 + 1;
    pfVar3 = pfVar3 + 4;
    if (pbVar4 == pbVar5) {
      return;
    }
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >::ShapeDistanceFinder(msdfgen::Shape const&) */

void __thiscall
msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
::ShapeDistanceFinder
          (ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
           *this,Shape *param_1)

{
  int iVar1;
  EdgeCache *pEVar2;
  ulong uVar3;
  EdgeCache *this_00;
  ulong uVar4;
  
  *(Shape **)this = param_1;
  msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::SimpleContourCombiner
            ((Shape *)(this + 8));
  iVar1 = msdfgen::Shape::edgeCount();
  uVar3 = (ulong)iVar1;
  if (0x249249249249249 < uVar3) {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  if (uVar3 != 0) {
    uVar4 = uVar3 * 0x38;
    pEVar2 = (EdgeCache *)operator_new(uVar4);
    *(EdgeCache **)(this + 0x58) = pEVar2 + uVar4;
    *(EdgeCache **)(this + 0x48) = pEVar2;
    *(EdgeCache **)(this + 0x50) = pEVar2;
    this_00 = pEVar2;
    do {
      msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this_00);
      uVar3 = uVar3 - 1;
      this_00 = this_00 + 0x38;
    } while (uVar3 != 0);
    *(EdgeCache **)(this + 0x50) = pEVar2 + uVar4;
    return;
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >::ShapeDistanceFinder(msdfgen::Shape const&) */

void __thiscall
msdfgen::
ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
ShapeDistanceFinder(ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                    *this,Shape *param_1)

{
  int iVar1;
  EdgeCache *pEVar2;
  ulong uVar3;
  EdgeCache *this_00;
  ulong uVar4;
  
  *(Shape **)this = param_1;
  msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::
  OverlappingContourCombiner((Shape *)(this + 8));
  iVar1 = msdfgen::Shape::edgeCount();
  uVar3 = (ulong)iVar1;
  if (0x249249249249249 < uVar3) {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  if (uVar3 != 0) {
    uVar4 = uVar3 * 0x38;
    pEVar2 = (EdgeCache *)operator_new(uVar4);
    *(EdgeCache **)(this + 0x58) = pEVar2 + uVar4;
    *(EdgeCache **)(this + 0x48) = pEVar2;
    *(EdgeCache **)(this + 0x50) = pEVar2;
    this_00 = pEVar2;
    do {
      msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this_00);
      uVar3 = uVar3 - 1;
      this_00 = this_00 + 0x38;
    } while (uVar3 != 0);
    *(EdgeCache **)(this + 0x50) = pEVar2 + uVar4;
    return;
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}



/* msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

void msdfgen::
     ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
     distance(Vector2 *param_1)

{
  long *plVar1;
  EdgeCache *pEVar2;
  EdgeSegment *pEVar3;
  EdgeSegment *pEVar4;
  EdgeSegment *pEVar5;
  EdgeSegment *pEVar6;
  EdgeSegment *pEVar7;
  EdgeHolder *pEVar8;
  EdgeHolder *pEVar9;
  long *plVar10;
  
  msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::reset(param_1 + 8);
  pEVar7 = *(EdgeSegment **)(param_1 + 0x48);
  if (*(EdgeSegment **)(param_1 + 0x50) == pEVar7) {
    pEVar7 = (EdgeSegment *)0x0;
  }
  plVar1 = *(long **)param_1;
  plVar10 = (long *)*plVar1;
  if (plVar10 != (long *)plVar1[1]) {
    do {
      while (*plVar10 == plVar10[1]) {
        plVar10 = plVar10 + 3;
        if ((long *)plVar1[1] == plVar10) goto LAB_0010422b;
      }
      pEVar2 = (EdgeCache *)
               msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::edgeSelector
                         ((int)(param_1 + 8));
      pEVar8 = (EdgeHolder *)*plVar10;
      if (8 < (ulong)(plVar10[1] - *plVar10)) {
        pEVar8 = (EdgeHolder *)(plVar10[1] + -0x10);
      }
      pEVar3 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar8);
      pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar10[1] + -8));
      pEVar6 = pEVar7;
      pEVar8 = (EdgeHolder *)*plVar10;
      if ((EdgeHolder *)*plVar10 != (EdgeHolder *)plVar10[1]) {
        do {
          pEVar5 = pEVar4;
          pEVar9 = pEVar8 + 8;
          pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar8);
          pEVar7 = pEVar6 + 0x38;
          msdfgen::PerpendicularDistanceSelector::addEdge(pEVar2,pEVar6,pEVar3,pEVar5);
          pEVar6 = pEVar7;
          pEVar3 = pEVar5;
          pEVar8 = pEVar9;
        } while ((EdgeHolder *)plVar10[1] != pEVar9);
      }
      plVar10 = plVar10 + 3;
      plVar1 = *(long **)param_1;
    } while ((long *)plVar1[1] != plVar10);
  }
LAB_0010422b:
  msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance();
  return;
}



/* msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier::evaluate(double, float, int) const [clone .isra.0] */

undefined8
msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier::evaluate
          (double param_1,float param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  ulong in_RSI;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_60;
  float local_38;
  float local_34;
  float local_30;
  long local_20;
  
  lVar6 = CONCAT44(in_register_0000003c,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  if (((in_RSI & 1) == 0) || (uVar5 = 1, (in_RSI & 2) != 0)) goto LAB_00104276;
  lVar1 = *(long *)(lVar6 + 0x10);
  dVar13 = *(double *)(lVar6 + 0x18) * param_1;
  dVar14 = *(double *)(lVar6 + 0x20) * param_1;
  dVar12 = *(double *)(lVar1 + 0x10) + dVar13;
  dVar4 = *(double *)(lVar1 + 0x18) + dVar14;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar12;
  auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
  uStack_60 = auVar3._8_8_;
  interpolate<float,4>
            (SUB84(dVar12,0),uStack_60,&local_38,*(undefined8 *)(lVar1 + 0x90),
             *(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c));
  pfVar2 = *(float **)(lVar1 + 0x20);
  fVar8 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = *pfVar2;
  dVar12 = (_LC2 - (double)((ulong)dVar13 & _LC4)) * (_LC2 - (double)((ulong)dVar14 & _LC4));
  if (fVar8 <= fVar11) {
    fVar7 = fVar11;
    if ((fVar10 < fVar11) && (fVar9 = fVar8, fVar8 < fVar11)) goto LAB_001044ad;
  }
  else {
    fVar9 = fVar11;
    fVar7 = fVar8;
    if (fVar10 < fVar8) {
LAB_001044ad:
      fVar7 = fVar10;
      if (fVar10 <= fVar9) {
        fVar7 = fVar9;
      }
    }
  }
  fVar11 = (float)((double)(fVar7 - fVar11) * dVar12 + (double)local_38);
  fVar9 = (float)((double)(fVar7 - fVar8) * dVar12 + (double)local_34);
  fVar8 = (float)((double)(fVar7 - fVar10) * dVar12 + (double)local_30);
  if (local_34 <= local_38) {
    fVar10 = local_38;
    if ((local_30 < local_38) && (fVar7 = local_34, local_34 < local_38)) goto LAB_001043c3;
  }
  else {
    fVar7 = local_38;
    fVar10 = local_34;
    if (local_30 < local_34) {
LAB_001043c3:
      fVar10 = local_30;
      if (local_30 <= fVar7) {
        fVar10 = fVar7;
      }
    }
  }
  if (fVar9 <= fVar11) {
    if (fVar11 <= fVar8) {
      fVar8 = fVar11;
    }
    fVar7 = fVar9;
    if (fVar9 < fVar11) goto LAB_001043ed;
  }
  else {
    fVar7 = fVar11;
    fVar11 = fVar9;
    if (fVar8 < fVar9) {
LAB_001043ed:
      fVar11 = fVar8;
      if (fVar8 <= fVar7) {
        fVar11 = fVar7;
      }
    }
  }
  dVar12 = (double)ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                   ::distance((Vector2 *)(lVar1 + 0x30));
  dVar12 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)(lVar1 + 0xa0),dVar12);
  uVar5 = CONCAT71((int7)((ulong)*(long *)(lVar6 + 0x10) >> 8),
                   (double)(float)((uint)(fVar11 - (float)dVar12) & _LC10) *
                   *(double *)(*(long *)(lVar6 + 0x10) + 0xc0) <
                   (double)(float)((uint)(fVar10 - (float)dVar12) & _LC10));
LAB_00104276:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier const&, float, float, float const*, float const*, float const*, float,
   float, float, double, double) */

bool msdfgen::
     hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float *param_6,float param_7,float param_8,float param_9,
               double param_10,double param_11)

{
  double *pdVar1;
  char cVar2;
  int iVar3;
  ArtifactClassifier AVar4;
  ulong uVar5;
  double *pdVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float extraout_XMM1_Da;
  float fVar10;
  float extraout_XMM1_Da_00;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 local_70;
  double local_68 [5];
  long local_40;
  
  pdVar6 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = msdfgen::solveQuadratic
                    (pdVar6,(double)((param_9 - param_8) + param_7),
                     (double)((param_8 - param_7) - param_7),(double)param_7);
  if (0 < iVar3) {
    pdVar1 = pdVar6 + iVar3;
    do {
      dVar13 = *pdVar6;
      if ((_LC6 < dVar13) && (dVar13 < _LC7)) {
        fVar7 = (float)interpolatedMedian(param_4,param_5,param_6,dVar13);
        AVar4 = param_1[8];
        dVar11 = *(double *)param_1;
        fVar8 = param_2;
        if (param_2 <= _LC8) {
          fVar10 = _LC8;
          if (_LC8 <= param_2) goto LAB_00104776;
          if (_LC8 <= param_3) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_00104608;
            if (param_2 < param_3) goto LAB_00104790;
            if (fVar7 < param_2) goto LAB_001046d0;
            goto LAB_001046c0;
          }
          if (fVar7 < _LC8) goto LAB_00104776;
LAB_001046d0:
          fVar10 = SUB84((double)fVar7,0);
        }
        else {
          fVar10 = extraout_XMM1_Da;
          if (_LC8 < param_3) {
            if (fVar7 <= _LC8) goto LAB_001046d0;
LAB_00104776:
            if (AVar4 == (ArtifactClassifier)0x0) {
              if (param_3 <= param_2) goto LAB_00104690;
LAB_00104790:
              fVar8 = param_3;
              if ((param_3 <= fVar7) || (fVar8 = param_2, fVar7 <= param_2)) goto LAB_001046c0;
            }
          }
          else if (AVar4 == (ArtifactClassifier)0x0) {
LAB_00104690:
            if (fVar7 < param_2) {
              if (param_2 <= param_3) goto LAB_001046d0;
              fVar8 = param_3;
              fVar10 = param_3;
              if (param_3 < fVar7) goto LAB_00104608;
            }
LAB_001046c0:
            if (fVar7 != fVar8) goto LAB_001046d0;
          }
        }
LAB_00104608:
        if ((param_10 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_10)) goto LAB_0010462a;
        uVar5 = (ulong)(dVar13 < param_10);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_10;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_10);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar10 = local_70._4_4_;
        fVar8 = (float)local_70;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00104a79;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010462a;
            if ((float)local_70 < local_70._4_4_) goto LAB_00104903;
            if (fVar7 < (float)local_70) goto LAB_00104923;
            goto LAB_00104918;
          }
          if (fVar7 < _LC8) goto LAB_00104a79;
LAB_00104923:
          dVar12 = (dVar13 - local_68[2]) * dVar11;
          if (((double)(float)local_70 - dVar12 <= (double)fVar7) &&
             ((double)fVar7 <= dVar12 + (double)(float)local_70)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_00104923;
LAB_00104a79:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00104a8a;
LAB_00104903:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_00104918;
          }
        }
        else {
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010462a;
LAB_00104a8a:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_00104923;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_0010462a;
          }
LAB_00104918:
          if (fVar7 != fVar8) goto LAB_00104923;
        }
LAB_0010462a:
        if ((param_11 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_11)) goto LAB_0010464c;
        uVar5 = (ulong)(dVar13 < param_11);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_11;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_11);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar8 = (float)local_70;
        fVar10 = _LC8;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00104ac1;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010464c;
            if ((float)local_70 < local_70._4_4_) goto LAB_001049cb;
            if (fVar7 < (float)local_70) goto LAB_001049eb;
            goto LAB_001049e0;
          }
          if (fVar7 < _LC8) goto LAB_00104ac1;
LAB_001049eb:
          dVar11 = (dVar13 - local_68[2]) * dVar11;
          fVar10 = SUB84(dVar11,0);
          if (((double)(float)local_70 - dVar11 <= (double)fVar7) &&
             (dVar11 = dVar11 + (double)(float)local_70, fVar10 = SUB84(dVar11,0),
             (double)fVar7 <= dVar11)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_001049eb;
LAB_00104ac1:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00104ad2;
LAB_001049cb:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_001049e0;
          }
        }
        else {
          fVar10 = extraout_XMM1_Da_00;
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010464c;
LAB_00104ad2:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_001049eb;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_0010464c;
          }
LAB_001049e0:
          fVar10 = fVar8;
          if (fVar7 != fVar8) goto LAB_001049eb;
        }
LAB_0010464c:
        cVar2 = ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier::evaluate
                          (dVar13,fVar10,(int)param_1);
        if (cVar2 != '\0') goto LAB_0010466d;
      }
      pdVar6 = pdVar6 + 1;
    } while (pdVar1 != pdVar6);
  }
  cVar2 = '\0';
LAB_0010466d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool msdfgen::hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier const&, float, float const*, float const*, float const*, float const*) */

bool msdfgen::
     hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4,
               float *param_5,float *param_6)

{
  bool bVar1;
  long in_FS_OFFSET;
  double dVar2;
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
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  fVar15 = param_6[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  if (fVar8 <= fVar6) {
    fVar3 = fVar6;
    if ((fVar15 < fVar6) && (fVar16 = fVar8, fVar8 < fVar6)) goto LAB_00104c5b;
  }
  else {
    fVar3 = fVar8;
    fVar16 = fVar6;
    if (fVar15 < fVar8) {
LAB_00104c5b:
      fVar3 = fVar15;
      if (fVar15 <= fVar16) {
        fVar3 = fVar16;
      }
    }
  }
  bVar1 = false;
  if ((float)((uint)(fVar3 - _LC8) & _LC10) <= (float)((uint)(param_2 - _LC8) & _LC10)) {
    fVar10 = (float)*(undefined8 *)param_3;
    fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar12 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar4 = (float)*(undefined8 *)param_5;
    fVar16 = (fVar10 - fVar12) - fVar4;
    fVar5 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar18 = (fVar11 - fVar14) - fVar5;
    fVar7 = fVar6 + fVar16;
    fVar9 = fVar8 + fVar18;
    local_50 = CONCAT44(fVar9,fVar7);
    fVar16 = (float)((uint)_LC11 ^ (uint)fVar10) - fVar16;
    fVar18 = (float)(_LC11._4_4_ ^ (uint)fVar11) - fVar18;
    local_60 = CONCAT44(fVar18,fVar16);
    fVar19 = (param_3[2] - param_4[2]) - param_5[2];
    fVar17 = (float)((uint)param_3[2] ^ __LC12) - fVar19;
    fVar15 = fVar15 + fVar19;
    dVar2 = ((double)fVar18 * __LC13) / (double)fVar9;
    dVar20 = ((double)fVar16 * __LC13) / (double)fVar7;
    local_58 = fVar17;
    local_48 = fVar15;
    bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                      (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                       fVar11 - fVar10,((fVar14 - fVar12) + fVar5) - fVar4,fVar8 - fVar6,dVar20,
                       dVar2);
    if (!bVar1) {
      dVar13 = ((double)fVar17 * __LC13) / (double)fVar15;
      bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                        (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                         param_3[2] - param_3[1],
                         ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1],
                         param_6[2] - param_6[1],dVar2,dVar13);
      if (!bVar1) {
        bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                          (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                           *param_3 - param_3[2],((*param_4 - param_4[2]) + *param_5) - param_5[2],
                           *param_6 - param_6[2],dVar13,dVar20);
        goto LAB_00104c1c;
      }
    }
    bVar1 = true;
  }
LAB_00104c1c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



/* bool 
   msdfgen::hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier const&, float, float, float const*, float const*, float, float) */

bool msdfgen::
     hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float param_6,float param_7)

{
  char cVar1;
  undefined1 uVar2;
  double *pdVar3;
  float extraout_XMM0_Da;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)param_6 / (double)(param_6 - param_7);
  if ((dVar5 <= _LC6) || (_LC7 <= dVar5)) {
    return false;
  }
  pdVar3 = (double *)interpolatedMedian(param_4,param_5,dVar5);
  cVar1 = *(char *)(pdVar3 + 1);
  fVar4 = param_2;
  if (param_2 <= _LC8) {
    if (_LC8 <= param_2) goto LAB_0010500f;
    if (param_3 < _LC8) {
      if (extraout_XMM0_Da < _LC8) goto LAB_0010500f;
      goto LAB_00104f7a;
    }
    if (cVar1 != '\0') goto LAB_00104fe0;
    if (param_2 < param_3) goto LAB_0010501e;
    if (extraout_XMM0_Da < param_2) goto LAB_00104f7a;
LAB_00104f6e:
    if (extraout_XMM0_Da == fVar4) goto LAB_00104fe0;
  }
  else {
    if (_LC8 < param_3) {
      if (extraout_XMM0_Da <= _LC8) goto LAB_00104f7a;
LAB_0010500f:
      if (cVar1 != '\0') goto LAB_00104fe0;
      if (param_2 < param_3) {
LAB_0010501e:
        fVar4 = param_3;
        if ((extraout_XMM0_Da < param_3) && (fVar4 = param_2, param_2 < extraout_XMM0_Da))
        goto LAB_00104fe0;
        goto LAB_00104f6e;
      }
    }
    else if (cVar1 != '\0') goto LAB_00104fe0;
    if (param_2 <= extraout_XMM0_Da) goto LAB_00104f6e;
    if (param_3 < param_2) {
      fVar4 = param_3;
      if (param_3 < extraout_XMM0_Da) goto LAB_00104fe0;
      goto LAB_00104f6e;
    }
  }
LAB_00104f7a:
  if (((double)param_2 - dVar5 * *pdVar3 <= (double)extraout_XMM0_Da) &&
     ((double)extraout_XMM0_Da <= dVar5 * *pdVar3 + (double)param_2)) {
    param_3 = SUB84((double)param_3,0);
  }
LAB_00104fe0:
  uVar2 = ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier::evaluate
                    (dVar5,param_3,(int)pdVar3);
  return (bool)uVar2;
}



/* bool msdfgen::hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   4>::ArtifactClassifier const&, float, float const*, float const*) */

bool msdfgen::
     hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_4[1];
  fVar2 = *param_4;
  fVar3 = param_4[2];
  if (fVar1 <= fVar2) {
    fVar5 = fVar2;
    if ((fVar2 <= fVar3) || (fVar6 = fVar1, fVar2 <= fVar1)) goto LAB_001050bc;
  }
  else {
    fVar5 = fVar1;
    fVar6 = fVar2;
    if (fVar1 <= fVar3) goto LAB_001050bc;
  }
  fVar5 = fVar3;
  if (fVar3 <= fVar6) {
    fVar5 = fVar6;
  }
LAB_001050bc:
  if ((float)((uint)(param_2 - _LC8) & _LC10) < (float)((uint)(fVar5 - _LC8) & _LC10)) {
    return false;
  }
  bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                    (param_1,param_2,fVar5,param_3,param_4,param_3[1] - *param_3,fVar1 - fVar2);
  if ((!bVar4) &&
     (bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                        (param_1,param_2,fVar5,param_3,param_4,param_3[2] - param_3[1],
                         param_4[2] - param_4[1]), !bVar4)) {
    bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                      (param_1,param_2,fVar5,param_3,param_4,*param_3 - param_3[2],
                       *param_4 - param_4[2]);
    return bVar4;
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::SimpleContourCombiner,
   4>(msdfgen::BitmapConstRef<float, 4> const&, msdfgen::Shape const&) */

void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::SimpleContourCombiner,4>
               (BitmapConstRef *param_1,Shape *param_2)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  Shape *in_RDX;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double dVar24;
  float local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float *local_2f8;
  bool local_2ed;
  float *local_2e0;
  float *local_2d0;
  double local_288;
  byte local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_258;
  byte local_250;
  undefined1 *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_228;
  byte local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_1f8;
  byte local_1f0;
  undefined1 *local_1e8;
  float local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1c8;
  byte local_1c0;
  undefined1 *local_1b8;
  float local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  double local_198;
  byte local_190;
  undefined1 *local_188;
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_168;
  byte local_160;
  undefined1 *local_158;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_138;
  double dStack_130;
  undefined1 *local_128;
  double local_120;
  double dStack_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float *local_e8;
  byte local_e0;
  ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
  local_d8 [72];
  void *local_90;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pBVar1 = param_1 + 0x10;
  pBVar2 = param_1 + 0x30;
  dVar21 = *(double *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108._0_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._8_8_ = 0;
  dVar20 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar23 = *(double *)(param_1 + 0x40);
  dVar24 = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da) * (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  dVar21 = SQRT(dVar20 * dVar20 + dVar24) * dVar21;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = 0;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar20 = *(double *)(param_1 + 0x40);
  dVar24 = dVar24 * dVar24;
  dVar23 = SQRT(dVar22 * dVar22 + dVar24) * dVar23;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = local_108._8_8_;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  dVar20 = SQRT(dVar22 * dVar22 + dVar24 * dVar24) * dVar20;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
  ShapeDistanceFinder(local_d8,in_RDX);
  local_308 = (float)uVar7;
  uStack_304 = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_300 = (undefined4)uVar8;
  uStack_2fc = (undefined4)((ulong)uVar8 >> 0x20);
  local_78 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_68 = local_308;
  uStack_64 = uStack_304;
  uStack_60 = uStack_300;
  uStack_5c = uStack_2fc;
  local_58 = (undefined1  [16])0x0;
  local_138 = __LC18;
  dStack_130 = _UNK_0010a7a8;
  local_48 = uVar6;
  msdfgen::Projection::unprojectVector(pBVar1);
  iVar17 = *(int *)(param_2 + 0xc);
  local_58._4_4_ = extraout_XMM0_Db;
  local_58._0_4_ = extraout_XMM0_Da;
  local_58._12_4_ = uStack_304;
  local_58._8_4_ = local_308;
  if (0 < iVar17) {
    iVar11 = *(int *)(param_2 + 8);
    iVar13 = 0;
    do {
      iVar15 = iVar13;
      if (in_RDX[0x18] != (Shape)0x0) {
        iVar15 = (iVar17 - iVar13) + -1;
      }
      iVar16 = 0;
      if (0 < iVar11) {
        do {
          iVar17 = iVar16 + 1;
          bVar5 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16));
          local_2ed = (bool)(bVar5 & 1);
          if ((bVar5 & 1) == 0) {
            dStack_130 = (double)iVar13 + _LC0;
            dVar24 = (double)iVar16 + _LC0;
            pfVar3 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar16) * 4) * 4);
            local_138 = dVar24;
            local_108._0_8_ = msdfgen::Projection::unproject(pBVar1);
            local_108._12_4_ = uStack_304;
            local_108._8_4_ = local_308;
            local_308 = pfVar3[1];
            uStack_304 = 0;
            fVar4 = pfVar3[2];
            local_f8._8_8_ = (double)iVar15 + _LC0;
            local_f8._0_8_ = dVar24;
            fVar18 = *pfVar3;
            local_e0 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16))
                       >> 1 & 1;
            if (fVar18 < local_308) {
              fVar19 = fVar18;
              fVar18 = local_308;
              if (fVar4 < local_308) goto LAB_00105777;
            }
            else if ((fVar4 < fVar18) && (fVar19 = local_308, local_308 < fVar18)) {
LAB_00105777:
              fVar18 = fVar4;
              if (fVar4 <= fVar19) {
                fVar18 = fVar19;
              }
            }
            iVar11 = *(int *)(param_2 + 8);
            local_2f8 = (float *)0x0;
            bVar5 = local_250;
            local_e8 = pfVar3;
            bVar9 = local_e0;
            if (iVar16 == 0) {
joined_r0x0010581b:
              local_250 = bVar9;
              if (iVar15 == 0) {
                local_2e0 = (float *)0x0;
                bVar9 = local_220;
                local_220 = local_250;
              }
              else {
                local_2e0 = (float *)(*(long *)param_2 +
                                     (long)((iVar11 * (iVar15 + -1) + iVar16) * 4) * 4);
                local_258 = dVar23;
                local_248 = local_108;
                local_240 = __LC20;
                uStack_238 = _UNK_0010a7c8;
                local_e0 = local_250;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_258,fVar18,pfVar3,local_2e0);
                if (bVar10) goto LAB_00105788;
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_220;
                local_220 = local_e0;
              }
              local_250 = bVar5;
              local_e0 = local_220;
              if (iVar11 + -1 <= iVar16) {
                local_2d0 = (float *)0x0;
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_0010545d;
LAB_00105950:
                local_220 = bVar9;
                local_1e0 = __LC9;
                uStack_1dc = _UNK_0010a774;
                uStack_1d8 = (undefined4)_LC2;
                uStack_1d4 = _LC2._4_4_;
                pfVar14 = (float *)(*(long *)param_2 +
                                   (long)((iVar11 * (iVar15 + 1) + iVar16) * 4) * 4);
                local_1f0 = local_e0;
                local_308 = __LC9;
                uStack_304 = _UNK_0010a774;
                local_1f8 = dVar23;
                local_1e8 = local_108;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1f8,fVar18,pfVar3,pfVar14);
                if (bVar10) goto LAB_00105788;
                iVar11 = *(int *)(param_2 + 8);
                if (0 < iVar16) goto LAB_00105465;
                goto LAB_001059e0;
              }
              uStack_208 = 0;
              local_2d0 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar17) * 4) * 4);
              local_228 = dVar21;
              local_218 = local_108;
              local_210 = _LC21;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_228,fVar18,pfVar3,local_2d0);
              if (bVar10) goto LAB_00105788;
              iVar11 = *(int *)(param_2 + 8);
              bVar9 = local_220;
              if (iVar15 < *(int *)(param_2 + 0xc) + -1) goto LAB_00105950;
LAB_0010545d:
              local_220 = bVar9;
              pfVar14 = (float *)0x0;
              if (iVar16 < 1) {
LAB_001059e0:
                if ((iVar16 < iVar11 + -1) && (iVar15 != 0)) {
LAB_0010551b:
                  local_190 = local_e0;
                  local_180 = __LC24;
                  uStack_17c = _UNK_0010a7e4;
                  uStack_178 = _UNK_0010a7e8;
                  uStack_174 = _UNK_0010a7ec;
                  local_308 = __LC24;
                  uStack_304 = _UNK_0010a7e4;
                  local_198 = dVar20;
                  local_188 = local_108;
                  bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                     ((ArtifactClassifier *)&local_198,fVar18,pfVar3,local_2d0,
                                      local_2e0,
                                      (float *)(*(long *)param_2 +
                                               (long)(((iVar15 + -1) * iVar11 + iVar17) * 4) * 4));
                  if (bVar10) goto LAB_00105788;
                  iVar11 = *(int *)(param_2 + 8);
                }
                if (iVar16 != 0) goto LAB_00105a60;
              }
              else {
LAB_00105465:
                if (iVar15 < 1) goto LAB_001059e0;
                local_1c0 = local_e0;
                local_1b0 = (float)_LC23;
                uStack_1ac = _LC23._4_4_;
                fStack_1a8 = (float)_LC23;
                uStack_1a4 = _LC23._4_4_;
                local_308 = (float)_LC23;
                uStack_304 = _LC23._4_4_;
                local_1c8 = dVar20;
                local_1b8 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1c8,fVar18,pfVar3,local_2f8,
                                    local_2e0,
                                    (float *)(*(long *)param_2 +
                                             (long)((iVar16 + -1 + iVar11 * (iVar15 + -1)) * 4) * 4)
                                   );
                if (bVar10) goto LAB_00105788;
                iVar11 = *(int *)(param_2 + 8);
                if (iVar16 < iVar11 + -1) goto LAB_0010551b;
LAB_00105a60:
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_00105640;
                local_160 = local_e0;
                local_150 = __LC25;
                uStack_14c = _UNK_0010a7f4;
                uStack_148 = _UNK_0010a7f8;
                uStack_144 = _UNK_0010a7fc;
                local_308 = __LC25;
                uStack_304 = _UNK_0010a7f4;
                local_168 = dVar20;
                local_158 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_168,fVar18,pfVar3,local_2f8,pfVar14
                                    ,(float *)(*(long *)param_2 +
                                              (long)((iVar16 + -1 + iVar11 * (iVar15 + 1)) * 4) * 4)
                                   );
                if (bVar10) goto LAB_00105788;
                iVar11 = *(int *)(param_2 + 8);
              }
              if ((iVar16 < iVar11 + -1) && (iVar15 < *(int *)(param_2 + 0xc) + -1)) {
                dStack_130 = (double)CONCAT71(dStack_130._1_7_,local_e0);
                local_120 = __LC18;
                dStack_118 = _UNK_0010a7a8;
                local_138 = dVar20;
                local_128 = local_108;
                local_2ed = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                      ((ArtifactClassifier *)&local_138,fVar18,pfVar3,local_2d0,
                                       pfVar14,(float *)(*(long *)param_2 +
                                                        (long)((iVar11 * (iVar15 + 1) + iVar17) * 4)
                                                        * 4));
              }
            }
            else {
              local_270 = CONCAT44(_LC23._4_4_,(float)_LC23);
              uStack_268 = 0;
              local_2f8 = (float *)(*(long *)param_2 +
                                   (long)((iVar16 + -1 + iVar11 * iVar15) * 4) * 4);
              local_288 = dVar21;
              local_280 = local_e0;
              local_278 = local_108;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,4>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_288,fVar18,pfVar3,local_2f8);
              if (!bVar10) {
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_e0;
                goto joined_r0x0010581b;
              }
LAB_00105788:
              local_2ed = true;
            }
LAB_00105640:
            pbVar12 = (byte *)((long)(*(int *)(param_1 + 8) * iVar15 + iVar16) + *(long *)param_1);
            *pbVar12 = *pbVar12 | local_2ed;
            iVar11 = *(int *)(param_2 + 8);
          }
          iVar16 = iVar17;
        } while (iVar17 < iVar11);
        iVar17 = *(int *)(param_2 + 0xc);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  if (local_90 != (void *)0x0) {
    operator_delete(local_90,local_80 - (long)local_90);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier::evaluate(double, float, int) const [clone .isra.0] */

undefined8
msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier::evaluate
          (double param_1,float param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  ulong in_RSI;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_60;
  float local_2c;
  float local_28;
  float local_24;
  long local_20;
  
  lVar6 = CONCAT44(in_register_0000003c,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  if (((in_RSI & 1) == 0) || (uVar5 = 1, (in_RSI & 2) != 0)) goto LAB_00105b36;
  lVar1 = *(long *)(lVar6 + 0x10);
  dVar13 = *(double *)(lVar6 + 0x18) * param_1;
  dVar14 = *(double *)(lVar6 + 0x20) * param_1;
  dVar12 = *(double *)(lVar1 + 0x10) + dVar13;
  dVar4 = *(double *)(lVar1 + 0x18) + dVar14;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar12;
  auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
  uStack_60 = auVar3._8_8_;
  interpolate<float,3>
            (SUB84(dVar12,0),uStack_60,&local_2c,*(undefined8 *)(lVar1 + 0x90),
             *(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c));
  pfVar2 = *(float **)(lVar1 + 0x20);
  fVar8 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = *pfVar2;
  dVar12 = (_LC2 - (double)((ulong)dVar13 & _LC4)) * (_LC2 - (double)((ulong)dVar14 & _LC4));
  if (fVar8 <= fVar11) {
    fVar7 = fVar11;
    if ((fVar10 < fVar11) && (fVar9 = fVar8, fVar8 < fVar11)) goto LAB_00105d6d;
  }
  else {
    fVar9 = fVar11;
    fVar7 = fVar8;
    if (fVar10 < fVar8) {
LAB_00105d6d:
      fVar7 = fVar10;
      if (fVar10 <= fVar9) {
        fVar7 = fVar9;
      }
    }
  }
  fVar11 = (float)((double)(fVar7 - fVar11) * dVar12 + (double)local_2c);
  fVar9 = (float)((double)(fVar7 - fVar8) * dVar12 + (double)local_28);
  fVar8 = (float)((double)(fVar7 - fVar10) * dVar12 + (double)local_24);
  if (local_28 <= local_2c) {
    fVar10 = local_2c;
    if ((local_24 < local_2c) && (fVar7 = local_28, local_28 < local_2c)) goto LAB_00105c83;
  }
  else {
    fVar7 = local_2c;
    fVar10 = local_28;
    if (local_24 < local_28) {
LAB_00105c83:
      fVar10 = local_24;
      if (local_24 <= fVar7) {
        fVar10 = fVar7;
      }
    }
  }
  if (fVar9 <= fVar11) {
    if (fVar11 <= fVar8) {
      fVar8 = fVar11;
    }
    fVar7 = fVar9;
    if (fVar9 < fVar11) goto LAB_00105cad;
  }
  else {
    fVar7 = fVar11;
    fVar11 = fVar9;
    if (fVar8 < fVar9) {
LAB_00105cad:
      fVar11 = fVar8;
      if (fVar8 <= fVar7) {
        fVar11 = fVar7;
      }
    }
  }
  dVar12 = (double)ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                   ::distance((Vector2 *)(lVar1 + 0x30));
  dVar12 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)(lVar1 + 0xa0),dVar12);
  uVar5 = CONCAT71((int7)((ulong)*(long *)(lVar6 + 0x10) >> 8),
                   (double)(float)((uint)(fVar11 - (float)dVar12) & _LC10) *
                   *(double *)(*(long *)(lVar6 + 0x10) + 0xc0) <
                   (double)(float)((uint)(fVar10 - (float)dVar12) & _LC10));
LAB_00105b36:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier const&, float, float, float const*, float const*, float const*, float,
   float, float, double, double) */

bool msdfgen::
     hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float *param_6,float param_7,float param_8,float param_9,
               double param_10,double param_11)

{
  double *pdVar1;
  char cVar2;
  int iVar3;
  ArtifactClassifier AVar4;
  ulong uVar5;
  double *pdVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float extraout_XMM1_Da;
  float fVar10;
  float extraout_XMM1_Da_00;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 local_70;
  double local_68 [5];
  long local_40;
  
  pdVar6 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = msdfgen::solveQuadratic
                    (pdVar6,(double)((param_9 - param_8) + param_7),
                     (double)((param_8 - param_7) - param_7),(double)param_7);
  if (0 < iVar3) {
    pdVar1 = pdVar6 + iVar3;
    do {
      dVar13 = *pdVar6;
      if ((_LC6 < dVar13) && (dVar13 < _LC7)) {
        fVar7 = (float)interpolatedMedian(param_4,param_5,param_6,dVar13);
        AVar4 = param_1[8];
        dVar11 = *(double *)param_1;
        fVar8 = param_2;
        if (param_2 <= _LC8) {
          fVar10 = _LC8;
          if (_LC8 <= param_2) goto LAB_00106036;
          if (_LC8 <= param_3) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_00105ec8;
            if (param_2 < param_3) goto LAB_00106050;
            if (fVar7 < param_2) goto LAB_00105f90;
            goto LAB_00105f80;
          }
          if (fVar7 < _LC8) goto LAB_00106036;
LAB_00105f90:
          fVar10 = SUB84((double)fVar7,0);
        }
        else {
          fVar10 = extraout_XMM1_Da;
          if (_LC8 < param_3) {
            if (fVar7 <= _LC8) goto LAB_00105f90;
LAB_00106036:
            if (AVar4 == (ArtifactClassifier)0x0) {
              if (param_3 <= param_2) goto LAB_00105f50;
LAB_00106050:
              fVar8 = param_3;
              if ((param_3 <= fVar7) || (fVar8 = param_2, fVar7 <= param_2)) goto LAB_00105f80;
            }
          }
          else if (AVar4 == (ArtifactClassifier)0x0) {
LAB_00105f50:
            if (fVar7 < param_2) {
              if (param_2 <= param_3) goto LAB_00105f90;
              fVar8 = param_3;
              fVar10 = param_3;
              if (param_3 < fVar7) goto LAB_00105ec8;
            }
LAB_00105f80:
            if (fVar7 != fVar8) goto LAB_00105f90;
          }
        }
LAB_00105ec8:
        if ((param_10 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_10)) goto LAB_00105eea;
        uVar5 = (ulong)(dVar13 < param_10);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_10;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_10);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar10 = local_70._4_4_;
        fVar8 = (float)local_70;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00106339;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_00105eea;
            if ((float)local_70 < local_70._4_4_) goto LAB_001061c3;
            if (fVar7 < (float)local_70) goto LAB_001061e3;
            goto LAB_001061d8;
          }
          if (fVar7 < _LC8) goto LAB_00106339;
LAB_001061e3:
          dVar12 = (dVar13 - local_68[2]) * dVar11;
          if (((double)(float)local_70 - dVar12 <= (double)fVar7) &&
             ((double)fVar7 <= dVar12 + (double)(float)local_70)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_001061e3;
LAB_00106339:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_0010634a;
LAB_001061c3:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_001061d8;
          }
        }
        else {
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_00105eea;
LAB_0010634a:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_001061e3;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_00105eea;
          }
LAB_001061d8:
          if (fVar7 != fVar8) goto LAB_001061e3;
        }
LAB_00105eea:
        if ((param_11 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_11)) goto LAB_00105f0c;
        uVar5 = (ulong)(dVar13 < param_11);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_11;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_11);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar8 = (float)local_70;
        fVar10 = _LC8;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00106381;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_00105f0c;
            if ((float)local_70 < local_70._4_4_) goto LAB_0010628b;
            if (fVar7 < (float)local_70) goto LAB_001062ab;
            goto LAB_001062a0;
          }
          if (fVar7 < _LC8) goto LAB_00106381;
LAB_001062ab:
          dVar11 = (dVar13 - local_68[2]) * dVar11;
          fVar10 = SUB84(dVar11,0);
          if (((double)(float)local_70 - dVar11 <= (double)fVar7) &&
             (dVar11 = dVar11 + (double)(float)local_70, fVar10 = SUB84(dVar11,0),
             (double)fVar7 <= dVar11)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_001062ab;
LAB_00106381:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00106392;
LAB_0010628b:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_001062a0;
          }
        }
        else {
          fVar10 = extraout_XMM1_Da_00;
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_00105f0c;
LAB_00106392:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_001062ab;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_00105f0c;
          }
LAB_001062a0:
          fVar10 = fVar8;
          if (fVar7 != fVar8) goto LAB_001062ab;
        }
LAB_00105f0c:
        cVar2 = ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier::evaluate
                          (dVar13,fVar10,(int)param_1);
        if (cVar2 != '\0') goto LAB_00105f2d;
      }
      pdVar6 = pdVar6 + 1;
    } while (pdVar1 != pdVar6);
  }
  cVar2 = '\0';
LAB_00105f2d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool msdfgen::hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier const&, float, float const*, float const*, float const*, float const*) */

bool msdfgen::
     hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4,
               float *param_5,float *param_6)

{
  bool bVar1;
  long in_FS_OFFSET;
  double dVar2;
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
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  fVar15 = param_6[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  if (fVar8 <= fVar6) {
    fVar3 = fVar6;
    if ((fVar15 < fVar6) && (fVar16 = fVar8, fVar8 < fVar6)) goto LAB_0010651b;
  }
  else {
    fVar3 = fVar8;
    fVar16 = fVar6;
    if (fVar15 < fVar8) {
LAB_0010651b:
      fVar3 = fVar15;
      if (fVar15 <= fVar16) {
        fVar3 = fVar16;
      }
    }
  }
  bVar1 = false;
  if ((float)((uint)(fVar3 - _LC8) & _LC10) <= (float)((uint)(param_2 - _LC8) & _LC10)) {
    fVar10 = (float)*(undefined8 *)param_3;
    fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar12 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar4 = (float)*(undefined8 *)param_5;
    fVar16 = (fVar10 - fVar12) - fVar4;
    fVar5 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar18 = (fVar11 - fVar14) - fVar5;
    fVar7 = fVar6 + fVar16;
    fVar9 = fVar8 + fVar18;
    local_50 = CONCAT44(fVar9,fVar7);
    fVar16 = (float)((uint)_LC11 ^ (uint)fVar10) - fVar16;
    fVar18 = (float)(_LC11._4_4_ ^ (uint)fVar11) - fVar18;
    local_60 = CONCAT44(fVar18,fVar16);
    fVar19 = (param_3[2] - param_4[2]) - param_5[2];
    fVar17 = (float)((uint)param_3[2] ^ __LC12) - fVar19;
    fVar15 = fVar15 + fVar19;
    dVar2 = ((double)fVar18 * __LC13) / (double)fVar9;
    dVar20 = ((double)fVar16 * __LC13) / (double)fVar7;
    local_58 = fVar17;
    local_48 = fVar15;
    bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                      (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                       fVar11 - fVar10,((fVar14 - fVar12) + fVar5) - fVar4,fVar8 - fVar6,dVar20,
                       dVar2);
    if (!bVar1) {
      dVar13 = ((double)fVar17 * __LC13) / (double)fVar15;
      bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                        (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                         param_3[2] - param_3[1],
                         ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1],
                         param_6[2] - param_6[1],dVar2,dVar13);
      if (!bVar1) {
        bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                          (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                           *param_3 - param_3[2],((*param_4 - param_4[2]) + *param_5) - param_5[2],
                           *param_6 - param_6[2],dVar13,dVar20);
        goto LAB_001064dc;
      }
    }
    bVar1 = true;
  }
LAB_001064dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



/* bool 
   msdfgen::hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier const&, float, float, float const*, float const*, float, float) */

bool msdfgen::
     hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float param_6,float param_7)

{
  char cVar1;
  undefined1 uVar2;
  double *pdVar3;
  float extraout_XMM0_Da;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)param_6 / (double)(param_6 - param_7);
  if ((dVar5 <= _LC6) || (_LC7 <= dVar5)) {
    return false;
  }
  pdVar3 = (double *)interpolatedMedian(param_4,param_5,dVar5);
  cVar1 = *(char *)(pdVar3 + 1);
  fVar4 = param_2;
  if (param_2 <= _LC8) {
    if (_LC8 <= param_2) goto LAB_001068cf;
    if (param_3 < _LC8) {
      if (extraout_XMM0_Da < _LC8) goto LAB_001068cf;
      goto LAB_0010683a;
    }
    if (cVar1 != '\0') goto LAB_001068a0;
    if (param_2 < param_3) goto LAB_001068de;
    if (extraout_XMM0_Da < param_2) goto LAB_0010683a;
LAB_0010682e:
    if (extraout_XMM0_Da == fVar4) goto LAB_001068a0;
  }
  else {
    if (_LC8 < param_3) {
      if (extraout_XMM0_Da <= _LC8) goto LAB_0010683a;
LAB_001068cf:
      if (cVar1 != '\0') goto LAB_001068a0;
      if (param_2 < param_3) {
LAB_001068de:
        fVar4 = param_3;
        if ((extraout_XMM0_Da < param_3) && (fVar4 = param_2, param_2 < extraout_XMM0_Da))
        goto LAB_001068a0;
        goto LAB_0010682e;
      }
    }
    else if (cVar1 != '\0') goto LAB_001068a0;
    if (param_2 <= extraout_XMM0_Da) goto LAB_0010682e;
    if (param_3 < param_2) {
      fVar4 = param_3;
      if (param_3 < extraout_XMM0_Da) goto LAB_001068a0;
      goto LAB_0010682e;
    }
  }
LAB_0010683a:
  if (((double)param_2 - dVar5 * *pdVar3 <= (double)extraout_XMM0_Da) &&
     ((double)extraout_XMM0_Da <= dVar5 * *pdVar3 + (double)param_2)) {
    param_3 = SUB84((double)param_3,0);
  }
LAB_001068a0:
  uVar2 = ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier::evaluate
                    (dVar5,param_3,(int)pdVar3);
  return (bool)uVar2;
}



/* bool msdfgen::hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,
   3>::ArtifactClassifier const&, float, float const*, float const*) */

bool msdfgen::
     hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_4[1];
  fVar2 = *param_4;
  fVar3 = param_4[2];
  if (fVar1 <= fVar2) {
    fVar5 = fVar2;
    if ((fVar2 <= fVar3) || (fVar6 = fVar1, fVar2 <= fVar1)) goto LAB_0010697c;
  }
  else {
    fVar5 = fVar1;
    fVar6 = fVar2;
    if (fVar1 <= fVar3) goto LAB_0010697c;
  }
  fVar5 = fVar3;
  if (fVar3 <= fVar6) {
    fVar5 = fVar6;
  }
LAB_0010697c:
  if ((float)((uint)(param_2 - _LC8) & _LC10) < (float)((uint)(fVar5 - _LC8) & _LC10)) {
    return false;
  }
  bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                    (param_1,param_2,fVar5,param_3,param_4,param_3[1] - *param_3,fVar1 - fVar2);
  if ((!bVar4) &&
     (bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                        (param_1,param_2,fVar5,param_3,param_4,param_3[2] - param_3[1],
                         param_4[2] - param_4[1]), !bVar4)) {
    bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                      (param_1,param_2,fVar5,param_3,param_4,*param_3 - param_3[2],
                       *param_4 - param_4[2]);
    return bVar4;
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::SimpleContourCombiner,
   3>(msdfgen::BitmapConstRef<float, 3> const&, msdfgen::Shape const&) */

void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::SimpleContourCombiner,3>
               (BitmapConstRef *param_1,Shape *param_2)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  Shape *in_RDX;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double dVar24;
  float local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float *local_2f8;
  bool local_2ed;
  float *local_2e0;
  float *local_2d0;
  double local_288;
  byte local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_258;
  byte local_250;
  undefined1 *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_228;
  byte local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_1f8;
  byte local_1f0;
  undefined1 *local_1e8;
  float local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1c8;
  byte local_1c0;
  undefined1 *local_1b8;
  float local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  double local_198;
  byte local_190;
  undefined1 *local_188;
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_168;
  byte local_160;
  undefined1 *local_158;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_138;
  double dStack_130;
  undefined1 *local_128;
  double local_120;
  double dStack_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float *local_e8;
  byte local_e0;
  ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
  local_d8 [72];
  void *local_90;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pBVar1 = param_1 + 0x10;
  pBVar2 = param_1 + 0x30;
  dVar21 = *(double *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108._0_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._8_8_ = 0;
  dVar20 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar23 = *(double *)(param_1 + 0x40);
  dVar24 = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da) * (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  dVar21 = SQRT(dVar20 * dVar20 + dVar24) * dVar21;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = 0;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar20 = *(double *)(param_1 + 0x40);
  dVar24 = dVar24 * dVar24;
  dVar23 = SQRT(dVar22 * dVar22 + dVar24) * dVar23;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = local_108._8_8_;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  dVar20 = SQRT(dVar22 * dVar22 + dVar24 * dVar24) * dVar20;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
  ShapeDistanceFinder(local_d8,in_RDX);
  local_308 = (float)uVar7;
  uStack_304 = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_300 = (undefined4)uVar8;
  uStack_2fc = (undefined4)((ulong)uVar8 >> 0x20);
  local_78 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_68 = local_308;
  uStack_64 = uStack_304;
  uStack_60 = uStack_300;
  uStack_5c = uStack_2fc;
  local_58 = (undefined1  [16])0x0;
  local_138 = __LC18;
  dStack_130 = _UNK_0010a7a8;
  local_48 = uVar6;
  msdfgen::Projection::unprojectVector(pBVar1);
  iVar17 = *(int *)(param_2 + 0xc);
  local_58._4_4_ = extraout_XMM0_Db;
  local_58._0_4_ = extraout_XMM0_Da;
  local_58._12_4_ = uStack_304;
  local_58._8_4_ = local_308;
  if (0 < iVar17) {
    iVar11 = *(int *)(param_2 + 8);
    iVar13 = 0;
    do {
      iVar15 = iVar13;
      if (in_RDX[0x18] != (Shape)0x0) {
        iVar15 = (iVar17 - iVar13) + -1;
      }
      iVar16 = 0;
      if (0 < iVar11) {
        do {
          iVar17 = iVar16 + 1;
          bVar5 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16));
          local_2ed = (bool)(bVar5 & 1);
          if ((bVar5 & 1) == 0) {
            dStack_130 = (double)iVar13 + _LC0;
            dVar24 = (double)iVar16 + _LC0;
            pfVar3 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar16) * 3) * 4);
            local_138 = dVar24;
            local_108._0_8_ = msdfgen::Projection::unproject(pBVar1);
            local_108._12_4_ = uStack_304;
            local_108._8_4_ = local_308;
            local_308 = pfVar3[1];
            uStack_304 = 0;
            fVar4 = pfVar3[2];
            local_f8._8_8_ = (double)iVar15 + _LC0;
            local_f8._0_8_ = dVar24;
            fVar18 = *pfVar3;
            local_e0 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16))
                       >> 1 & 1;
            if (fVar18 < local_308) {
              fVar19 = fVar18;
              fVar18 = local_308;
              if (fVar4 < local_308) goto LAB_00107037;
            }
            else if ((fVar4 < fVar18) && (fVar19 = local_308, local_308 < fVar18)) {
LAB_00107037:
              fVar18 = fVar4;
              if (fVar4 <= fVar19) {
                fVar18 = fVar19;
              }
            }
            iVar11 = *(int *)(param_2 + 8);
            local_2f8 = (float *)0x0;
            bVar5 = local_250;
            local_e8 = pfVar3;
            bVar9 = local_e0;
            if (iVar16 == 0) {
joined_r0x001070db:
              local_250 = bVar9;
              if (iVar15 == 0) {
                local_2e0 = (float *)0x0;
                bVar9 = local_220;
                local_220 = local_250;
              }
              else {
                local_2e0 = (float *)(*(long *)param_2 +
                                     (long)((iVar11 * (iVar15 + -1) + iVar16) * 3) * 4);
                local_258 = dVar23;
                local_248 = local_108;
                local_240 = __LC20;
                uStack_238 = _UNK_0010a7c8;
                local_e0 = local_250;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_258,fVar18,pfVar3,local_2e0);
                if (bVar10) goto LAB_00107048;
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_220;
                local_220 = local_e0;
              }
              local_250 = bVar5;
              local_e0 = local_220;
              if (iVar11 + -1 <= iVar16) {
                local_2d0 = (float *)0x0;
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_00106d1d;
LAB_00107210:
                local_220 = bVar9;
                local_1e0 = __LC9;
                uStack_1dc = _UNK_0010a774;
                uStack_1d8 = (undefined4)_LC2;
                uStack_1d4 = _LC2._4_4_;
                pfVar14 = (float *)(*(long *)param_2 +
                                   (long)((iVar11 * (iVar15 + 1) + iVar16) * 3) * 4);
                local_1f0 = local_e0;
                local_308 = __LC9;
                uStack_304 = _UNK_0010a774;
                local_1f8 = dVar23;
                local_1e8 = local_108;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1f8,fVar18,pfVar3,pfVar14);
                if (bVar10) goto LAB_00107048;
                iVar11 = *(int *)(param_2 + 8);
                if (0 < iVar16) goto LAB_00106d25;
                goto LAB_001072a0;
              }
              uStack_208 = 0;
              local_2d0 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar17) * 3) * 4);
              local_228 = dVar21;
              local_218 = local_108;
              local_210 = _LC21;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_228,fVar18,pfVar3,local_2d0);
              if (bVar10) goto LAB_00107048;
              iVar11 = *(int *)(param_2 + 8);
              bVar9 = local_220;
              if (iVar15 < *(int *)(param_2 + 0xc) + -1) goto LAB_00107210;
LAB_00106d1d:
              local_220 = bVar9;
              pfVar14 = (float *)0x0;
              if (iVar16 < 1) {
LAB_001072a0:
                if ((iVar16 < iVar11 + -1) && (iVar15 != 0)) {
LAB_00106ddb:
                  local_190 = local_e0;
                  local_180 = __LC24;
                  uStack_17c = _UNK_0010a7e4;
                  uStack_178 = _UNK_0010a7e8;
                  uStack_174 = _UNK_0010a7ec;
                  local_308 = __LC24;
                  uStack_304 = _UNK_0010a7e4;
                  local_198 = dVar20;
                  local_188 = local_108;
                  bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                     ((ArtifactClassifier *)&local_198,fVar18,pfVar3,local_2d0,
                                      local_2e0,
                                      (float *)(*(long *)param_2 +
                                               (long)(((iVar15 + -1) * iVar11 + iVar17) * 3) * 4));
                  if (bVar10) goto LAB_00107048;
                  iVar11 = *(int *)(param_2 + 8);
                }
                if (iVar16 != 0) goto LAB_00107320;
              }
              else {
LAB_00106d25:
                if (iVar15 < 1) goto LAB_001072a0;
                local_1c0 = local_e0;
                local_1b0 = (float)_LC23;
                uStack_1ac = _LC23._4_4_;
                fStack_1a8 = (float)_LC23;
                uStack_1a4 = _LC23._4_4_;
                local_308 = (float)_LC23;
                uStack_304 = _LC23._4_4_;
                local_1c8 = dVar20;
                local_1b8 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1c8,fVar18,pfVar3,local_2f8,
                                    local_2e0,
                                    (float *)(*(long *)param_2 +
                                             (long)((iVar16 + -1 + iVar11 * (iVar15 + -1)) * 3) * 4)
                                   );
                if (bVar10) goto LAB_00107048;
                iVar11 = *(int *)(param_2 + 8);
                if (iVar16 < iVar11 + -1) goto LAB_00106ddb;
LAB_00107320:
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_00106f00;
                local_160 = local_e0;
                local_150 = __LC25;
                uStack_14c = _UNK_0010a7f4;
                uStack_148 = _UNK_0010a7f8;
                uStack_144 = _UNK_0010a7fc;
                local_308 = __LC25;
                uStack_304 = _UNK_0010a7f4;
                local_168 = dVar20;
                local_158 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_168,fVar18,pfVar3,local_2f8,pfVar14
                                    ,(float *)(*(long *)param_2 +
                                              (long)((iVar16 + -1 + iVar11 * (iVar15 + 1)) * 3) * 4)
                                   );
                if (bVar10) goto LAB_00107048;
                iVar11 = *(int *)(param_2 + 8);
              }
              if ((iVar16 < iVar11 + -1) && (iVar15 < *(int *)(param_2 + 0xc) + -1)) {
                dStack_130 = (double)CONCAT71(dStack_130._1_7_,local_e0);
                local_120 = __LC18;
                dStack_118 = _UNK_0010a7a8;
                local_138 = dVar20;
                local_128 = local_108;
                local_2ed = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                      ((ArtifactClassifier *)&local_138,fVar18,pfVar3,local_2d0,
                                       pfVar14,(float *)(*(long *)param_2 +
                                                        (long)((iVar11 * (iVar15 + 1) + iVar17) * 3)
                                                        * 4));
              }
            }
            else {
              local_270 = CONCAT44(_LC23._4_4_,(float)_LC23);
              uStack_268 = 0;
              local_2f8 = (float *)(*(long *)param_2 +
                                   (long)((iVar16 + -1 + iVar11 * iVar15) * 3) * 4);
              local_288 = dVar21;
              local_280 = local_e0;
              local_278 = local_108;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::SimpleContourCombiner,3>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_288,fVar18,pfVar3,local_2f8);
              if (!bVar10) {
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_e0;
                goto joined_r0x001070db;
              }
LAB_00107048:
              local_2ed = true;
            }
LAB_00106f00:
            pbVar12 = (byte *)((long)(*(int *)(param_1 + 8) * iVar15 + iVar16) + *(long *)param_1);
            *pbVar12 = *pbVar12 | local_2ed;
            iVar11 = *(int *)(param_2 + 8);
          }
          iVar16 = iVar17;
        } while (iVar17 < iVar11);
        iVar17 = *(int *)(param_2 + 0xc);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  if (local_90 != (void *)0x0) {
    operator_delete(local_90,local_80 - (long)local_90);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

void msdfgen::
     ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
     ::distance(Vector2 *param_1)

{
  long *plVar1;
  EdgeCache *pEVar2;
  EdgeSegment *pEVar3;
  EdgeSegment *pEVar4;
  EdgeSegment *pEVar5;
  EdgeSegment *pEVar6;
  EdgeSegment *pEVar7;
  EdgeHolder *pEVar8;
  EdgeHolder *pEVar9;
  long *plVar10;
  
  msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::reset(param_1 + 8);
  pEVar7 = *(EdgeSegment **)(param_1 + 0x48);
  if (*(EdgeSegment **)(param_1 + 0x50) == pEVar7) {
    pEVar7 = (EdgeSegment *)0x0;
  }
  plVar1 = *(long **)param_1;
  plVar10 = (long *)*plVar1;
  if (plVar10 != (long *)plVar1[1]) {
    do {
      while (*plVar10 == plVar10[1]) {
        plVar10 = plVar10 + 3;
        if ((long *)plVar1[1] == plVar10) goto LAB_001074eb;
      }
      pEVar2 = (EdgeCache *)
               msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::
               edgeSelector((int)(param_1 + 8));
      pEVar8 = (EdgeHolder *)*plVar10;
      if (8 < (ulong)(plVar10[1] - *plVar10)) {
        pEVar8 = (EdgeHolder *)(plVar10[1] + -0x10);
      }
      pEVar3 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar8);
      pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar10[1] + -8));
      pEVar6 = pEVar7;
      pEVar8 = (EdgeHolder *)*plVar10;
      if ((EdgeHolder *)*plVar10 != (EdgeHolder *)plVar10[1]) {
        do {
          pEVar5 = pEVar4;
          pEVar9 = pEVar8 + 8;
          pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar8);
          pEVar7 = pEVar6 + 0x38;
          msdfgen::PerpendicularDistanceSelector::addEdge(pEVar2,pEVar6,pEVar3,pEVar5);
          pEVar6 = pEVar7;
          pEVar3 = pEVar5;
          pEVar8 = pEVar9;
        } while ((EdgeHolder *)plVar10[1] != pEVar9);
      }
      plVar10 = plVar10 + 3;
      plVar1 = *(long **)param_1;
    } while ((long *)plVar1[1] != plVar10);
  }
LAB_001074eb:
  msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance();
  return;
}



/* msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier::evaluate(double, float, int) const [clone .isra.0] */

undefined8
msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier::evaluate
          (double param_1,float param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  ulong in_RSI;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_60;
  float local_38;
  float local_34;
  float local_30;
  long local_20;
  
  lVar6 = CONCAT44(in_register_0000003c,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  if (((in_RSI & 1) == 0) || (uVar5 = 1, (in_RSI & 2) != 0)) goto LAB_00107536;
  lVar1 = *(long *)(lVar6 + 0x10);
  dVar13 = *(double *)(lVar6 + 0x18) * param_1;
  dVar14 = *(double *)(lVar6 + 0x20) * param_1;
  dVar12 = *(double *)(lVar1 + 0x10) + dVar13;
  dVar4 = *(double *)(lVar1 + 0x18) + dVar14;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar12;
  auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
  uStack_60 = auVar3._8_8_;
  interpolate<float,4>
            (SUB84(dVar12,0),uStack_60,&local_38,*(undefined8 *)(lVar1 + 0x90),
             *(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c));
  pfVar2 = *(float **)(lVar1 + 0x20);
  fVar8 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = *pfVar2;
  dVar12 = (_LC2 - (double)((ulong)dVar13 & _LC4)) * (_LC2 - (double)((ulong)dVar14 & _LC4));
  if (fVar8 <= fVar11) {
    fVar7 = fVar11;
    if ((fVar10 < fVar11) && (fVar9 = fVar8, fVar8 < fVar11)) goto LAB_0010776d;
  }
  else {
    fVar9 = fVar11;
    fVar7 = fVar8;
    if (fVar10 < fVar8) {
LAB_0010776d:
      fVar7 = fVar10;
      if (fVar10 <= fVar9) {
        fVar7 = fVar9;
      }
    }
  }
  fVar11 = (float)((double)(fVar7 - fVar11) * dVar12 + (double)local_38);
  fVar9 = (float)((double)(fVar7 - fVar8) * dVar12 + (double)local_34);
  fVar8 = (float)((double)(fVar7 - fVar10) * dVar12 + (double)local_30);
  if (local_34 <= local_38) {
    fVar10 = local_38;
    if ((local_30 < local_38) && (fVar7 = local_34, local_34 < local_38)) goto LAB_00107683;
  }
  else {
    fVar7 = local_38;
    fVar10 = local_34;
    if (local_30 < local_34) {
LAB_00107683:
      fVar10 = local_30;
      if (local_30 <= fVar7) {
        fVar10 = fVar7;
      }
    }
  }
  if (fVar9 <= fVar11) {
    if (fVar11 <= fVar8) {
      fVar8 = fVar11;
    }
    fVar7 = fVar9;
    if (fVar9 < fVar11) goto LAB_001076ad;
  }
  else {
    fVar7 = fVar11;
    fVar11 = fVar9;
    if (fVar8 < fVar9) {
LAB_001076ad:
      fVar11 = fVar8;
      if (fVar8 <= fVar7) {
        fVar11 = fVar7;
      }
    }
  }
  dVar12 = (double)ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                   ::distance((Vector2 *)(lVar1 + 0x30));
  dVar12 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)(lVar1 + 0xa0),dVar12);
  uVar5 = CONCAT71((int7)((ulong)*(long *)(lVar6 + 0x10) >> 8),
                   (double)(float)((uint)(fVar11 - (float)dVar12) & _LC10) *
                   *(double *)(*(long *)(lVar6 + 0x10) + 0xc0) <
                   (double)(float)((uint)(fVar10 - (float)dVar12) & _LC10));
LAB_00107536:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier const&, float, float, float const*, float const*, float const*, float,
   float, float, double, double) */

bool msdfgen::
     hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float *param_6,float param_7,float param_8,float param_9,
               double param_10,double param_11)

{
  double *pdVar1;
  char cVar2;
  int iVar3;
  ArtifactClassifier AVar4;
  ulong uVar5;
  double *pdVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float extraout_XMM1_Da;
  float fVar10;
  float extraout_XMM1_Da_00;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 local_70;
  double local_68 [5];
  long local_40;
  
  pdVar6 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = msdfgen::solveQuadratic
                    (pdVar6,(double)((param_9 - param_8) + param_7),
                     (double)((param_8 - param_7) - param_7),(double)param_7);
  if (0 < iVar3) {
    pdVar1 = pdVar6 + iVar3;
    do {
      dVar13 = *pdVar6;
      if ((_LC6 < dVar13) && (dVar13 < _LC7)) {
        fVar7 = (float)interpolatedMedian(param_4,param_5,param_6,dVar13);
        AVar4 = param_1[8];
        dVar11 = *(double *)param_1;
        fVar8 = param_2;
        if (param_2 <= _LC8) {
          fVar10 = _LC8;
          if (_LC8 <= param_2) goto LAB_00107a36;
          if (_LC8 <= param_3) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_001078c8;
            if (param_2 < param_3) goto LAB_00107a50;
            if (fVar7 < param_2) goto LAB_00107990;
            goto LAB_00107980;
          }
          if (fVar7 < _LC8) goto LAB_00107a36;
LAB_00107990:
          fVar10 = SUB84((double)fVar7,0);
        }
        else {
          fVar10 = extraout_XMM1_Da;
          if (_LC8 < param_3) {
            if (fVar7 <= _LC8) goto LAB_00107990;
LAB_00107a36:
            if (AVar4 == (ArtifactClassifier)0x0) {
              if (param_3 <= param_2) goto LAB_00107950;
LAB_00107a50:
              fVar8 = param_3;
              if ((param_3 <= fVar7) || (fVar8 = param_2, fVar7 <= param_2)) goto LAB_00107980;
            }
          }
          else if (AVar4 == (ArtifactClassifier)0x0) {
LAB_00107950:
            if (fVar7 < param_2) {
              if (param_2 <= param_3) goto LAB_00107990;
              fVar8 = param_3;
              fVar10 = param_3;
              if (param_3 < fVar7) goto LAB_001078c8;
            }
LAB_00107980:
            if (fVar7 != fVar8) goto LAB_00107990;
          }
        }
LAB_001078c8:
        if ((param_10 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_10)) goto LAB_001078ea;
        uVar5 = (ulong)(dVar13 < param_10);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_10;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_10);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar10 = local_70._4_4_;
        fVar8 = (float)local_70;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00107d39;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_001078ea;
            if ((float)local_70 < local_70._4_4_) goto LAB_00107bc3;
            if (fVar7 < (float)local_70) goto LAB_00107be3;
            goto LAB_00107bd8;
          }
          if (fVar7 < _LC8) goto LAB_00107d39;
LAB_00107be3:
          dVar12 = (dVar13 - local_68[2]) * dVar11;
          if (((double)(float)local_70 - dVar12 <= (double)fVar7) &&
             ((double)fVar7 <= dVar12 + (double)(float)local_70)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_00107be3;
LAB_00107d39:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00107d4a;
LAB_00107bc3:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_00107bd8;
          }
        }
        else {
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_001078ea;
LAB_00107d4a:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_00107be3;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_001078ea;
          }
LAB_00107bd8:
          if (fVar7 != fVar8) goto LAB_00107be3;
        }
LAB_001078ea:
        if ((param_11 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_11)) goto LAB_0010790c;
        uVar5 = (ulong)(dVar13 < param_11);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_11;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_11);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar8 = (float)local_70;
        fVar10 = _LC8;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00107d81;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010790c;
            if ((float)local_70 < local_70._4_4_) goto LAB_00107c8b;
            if (fVar7 < (float)local_70) goto LAB_00107cab;
            goto LAB_00107ca0;
          }
          if (fVar7 < _LC8) goto LAB_00107d81;
LAB_00107cab:
          dVar11 = (dVar13 - local_68[2]) * dVar11;
          fVar10 = SUB84(dVar11,0);
          if (((double)(float)local_70 - dVar11 <= (double)fVar7) &&
             (dVar11 = dVar11 + (double)(float)local_70, fVar10 = SUB84(dVar11,0),
             (double)fVar7 <= dVar11)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_00107cab;
LAB_00107d81:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00107d92;
LAB_00107c8b:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_00107ca0;
          }
        }
        else {
          fVar10 = extraout_XMM1_Da_00;
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010790c;
LAB_00107d92:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_00107cab;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_0010790c;
          }
LAB_00107ca0:
          fVar10 = fVar8;
          if (fVar7 != fVar8) goto LAB_00107cab;
        }
LAB_0010790c:
        cVar2 = ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier::
                evaluate(dVar13,fVar10,(int)param_1);
        if (cVar2 != '\0') goto LAB_0010792d;
      }
      pdVar6 = pdVar6 + 1;
    } while (pdVar1 != pdVar6);
  }
  cVar2 = '\0';
LAB_0010792d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier const&, float, float const*, float const*, float const*, float const*) */

bool msdfgen::
     hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4,
               float *param_5,float *param_6)

{
  bool bVar1;
  long in_FS_OFFSET;
  double dVar2;
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
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  fVar15 = param_6[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  if (fVar8 <= fVar6) {
    fVar3 = fVar6;
    if ((fVar15 < fVar6) && (fVar16 = fVar8, fVar8 < fVar6)) goto LAB_00107f1b;
  }
  else {
    fVar3 = fVar8;
    fVar16 = fVar6;
    if (fVar15 < fVar8) {
LAB_00107f1b:
      fVar3 = fVar15;
      if (fVar15 <= fVar16) {
        fVar3 = fVar16;
      }
    }
  }
  bVar1 = false;
  if ((float)((uint)(fVar3 - _LC8) & _LC10) <= (float)((uint)(param_2 - _LC8) & _LC10)) {
    fVar10 = (float)*(undefined8 *)param_3;
    fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar12 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar4 = (float)*(undefined8 *)param_5;
    fVar16 = (fVar10 - fVar12) - fVar4;
    fVar5 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar18 = (fVar11 - fVar14) - fVar5;
    fVar7 = fVar6 + fVar16;
    fVar9 = fVar8 + fVar18;
    local_50 = CONCAT44(fVar9,fVar7);
    fVar16 = (float)((uint)_LC11 ^ (uint)fVar10) - fVar16;
    fVar18 = (float)(_LC11._4_4_ ^ (uint)fVar11) - fVar18;
    local_60 = CONCAT44(fVar18,fVar16);
    fVar19 = (param_3[2] - param_4[2]) - param_5[2];
    fVar17 = (float)((uint)param_3[2] ^ __LC12) - fVar19;
    fVar15 = fVar15 + fVar19;
    dVar2 = ((double)fVar18 * __LC13) / (double)fVar9;
    dVar20 = ((double)fVar16 * __LC13) / (double)fVar7;
    local_58 = fVar17;
    local_48 = fVar15;
    bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                      (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                       fVar11 - fVar10,((fVar14 - fVar12) + fVar5) - fVar4,fVar8 - fVar6,dVar20,
                       dVar2);
    if (!bVar1) {
      dVar13 = ((double)fVar17 * __LC13) / (double)fVar15;
      bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                        (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                         param_3[2] - param_3[1],
                         ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1],
                         param_6[2] - param_6[1],dVar2,dVar13);
      if (!bVar1) {
        bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                          (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                           *param_3 - param_3[2],((*param_4 - param_4[2]) + *param_5) - param_5[2],
                           *param_6 - param_6[2],dVar13,dVar20);
        goto LAB_00107edc;
      }
    }
    bVar1 = true;
  }
LAB_00107edc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



/* bool 
   msdfgen::hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier const&, float, float, float const*, float const*, float, float) */

bool msdfgen::
     hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float param_6,float param_7)

{
  char cVar1;
  undefined1 uVar2;
  double *pdVar3;
  float extraout_XMM0_Da;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)param_6 / (double)(param_6 - param_7);
  if ((dVar5 <= _LC6) || (_LC7 <= dVar5)) {
    return false;
  }
  pdVar3 = (double *)interpolatedMedian(param_4,param_5,dVar5);
  cVar1 = *(char *)(pdVar3 + 1);
  fVar4 = param_2;
  if (param_2 <= _LC8) {
    if (_LC8 <= param_2) goto LAB_001082cf;
    if (param_3 < _LC8) {
      if (extraout_XMM0_Da < _LC8) goto LAB_001082cf;
      goto LAB_0010823a;
    }
    if (cVar1 != '\0') goto LAB_001082a0;
    if (param_2 < param_3) goto LAB_001082de;
    if (extraout_XMM0_Da < param_2) goto LAB_0010823a;
LAB_0010822e:
    if (extraout_XMM0_Da == fVar4) goto LAB_001082a0;
  }
  else {
    if (_LC8 < param_3) {
      if (extraout_XMM0_Da <= _LC8) goto LAB_0010823a;
LAB_001082cf:
      if (cVar1 != '\0') goto LAB_001082a0;
      if (param_2 < param_3) {
LAB_001082de:
        fVar4 = param_3;
        if ((extraout_XMM0_Da < param_3) && (fVar4 = param_2, param_2 < extraout_XMM0_Da))
        goto LAB_001082a0;
        goto LAB_0010822e;
      }
    }
    else if (cVar1 != '\0') goto LAB_001082a0;
    if (param_2 <= extraout_XMM0_Da) goto LAB_0010822e;
    if (param_3 < param_2) {
      fVar4 = param_3;
      if (param_3 < extraout_XMM0_Da) goto LAB_001082a0;
      goto LAB_0010822e;
    }
  }
LAB_0010823a:
  if (((double)param_2 - dVar5 * *pdVar3 <= (double)extraout_XMM0_Da) &&
     ((double)extraout_XMM0_Da <= dVar5 * *pdVar3 + (double)param_2)) {
    param_3 = SUB84((double)param_3,0);
  }
LAB_001082a0:
  uVar2 = ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier::evaluate
                    (dVar5,param_3,(int)pdVar3);
  return (bool)uVar2;
}



/* bool 
   msdfgen::hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   4>::ArtifactClassifier const&, float, float const*, float const*) */

bool msdfgen::
     hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_4[1];
  fVar2 = *param_4;
  fVar3 = param_4[2];
  if (fVar1 <= fVar2) {
    fVar5 = fVar2;
    if ((fVar2 <= fVar3) || (fVar6 = fVar1, fVar2 <= fVar1)) goto LAB_0010837c;
  }
  else {
    fVar5 = fVar1;
    fVar6 = fVar2;
    if (fVar1 <= fVar3) goto LAB_0010837c;
  }
  fVar5 = fVar3;
  if (fVar3 <= fVar6) {
    fVar5 = fVar6;
  }
LAB_0010837c:
  if ((float)((uint)(param_2 - _LC8) & _LC10) < (float)((uint)(fVar5 - _LC8) & _LC10)) {
    return false;
  }
  bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                    (param_1,param_2,fVar5,param_3,param_4,param_3[1] - *param_3,fVar1 - fVar2);
  if ((!bVar4) &&
     (bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                        (param_1,param_2,fVar5,param_3,param_4,param_3[2] - param_3[1],
                         param_4[2] - param_4[1]), !bVar4)) {
    bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                      (param_1,param_2,fVar5,param_3,param_4,*param_3 - param_3[2],
                       *param_4 - param_4[2]);
    return bVar4;
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::OverlappingContourCombiner,
   4>(msdfgen::BitmapConstRef<float, 4> const&, msdfgen::Shape const&) */

void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::OverlappingContourCombiner,4>
               (BitmapConstRef *param_1,Shape *param_2)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  Shape *in_RDX;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double dVar24;
  float local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float *local_2f8;
  bool local_2ed;
  float *local_2e0;
  float *local_2d0;
  double local_288;
  byte local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_258;
  byte local_250;
  undefined1 *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_228;
  byte local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_1f8;
  byte local_1f0;
  undefined1 *local_1e8;
  float local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1c8;
  byte local_1c0;
  undefined1 *local_1b8;
  float local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  double local_198;
  byte local_190;
  undefined1 *local_188;
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_168;
  byte local_160;
  undefined1 *local_158;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_138;
  double dStack_130;
  undefined1 *local_128;
  double local_120;
  double dStack_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float *local_e8;
  byte local_e0;
  ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
  local_d8 [24];
  void *local_c0;
  long local_b0;
  void *local_a8;
  long local_98;
  void *local_90;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pBVar1 = param_1 + 0x10;
  pBVar2 = param_1 + 0x30;
  dVar21 = *(double *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108._0_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._8_8_ = 0;
  dVar20 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar23 = *(double *)(param_1 + 0x40);
  dVar24 = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da) * (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  dVar21 = SQRT(dVar20 * dVar20 + dVar24) * dVar21;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = 0;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar20 = *(double *)(param_1 + 0x40);
  dVar24 = dVar24 * dVar24;
  dVar23 = SQRT(dVar22 * dVar22 + dVar24) * dVar23;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = local_108._8_8_;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  dVar20 = SQRT(dVar22 * dVar22 + dVar24 * dVar24) * dVar20;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
  ShapeDistanceFinder(local_d8,in_RDX);
  local_308 = (float)uVar7;
  uStack_304 = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_300 = (undefined4)uVar8;
  uStack_2fc = (undefined4)((ulong)uVar8 >> 0x20);
  local_78 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_68 = local_308;
  uStack_64 = uStack_304;
  uStack_60 = uStack_300;
  uStack_5c = uStack_2fc;
  local_58 = (undefined1  [16])0x0;
  local_138 = __LC18;
  dStack_130 = _UNK_0010a7a8;
  local_48 = uVar6;
  msdfgen::Projection::unprojectVector(pBVar1);
  iVar17 = *(int *)(param_2 + 0xc);
  local_58._4_4_ = extraout_XMM0_Db;
  local_58._0_4_ = extraout_XMM0_Da;
  local_58._12_4_ = uStack_304;
  local_58._8_4_ = local_308;
  if (0 < iVar17) {
    iVar11 = *(int *)(param_2 + 8);
    iVar13 = 0;
    do {
      iVar15 = iVar13;
      if (in_RDX[0x18] != (Shape)0x0) {
        iVar15 = (iVar17 - iVar13) + -1;
      }
      iVar16 = 0;
      if (0 < iVar11) {
        do {
          iVar17 = iVar16 + 1;
          bVar5 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16));
          local_2ed = (bool)(bVar5 & 1);
          if ((bVar5 & 1) == 0) {
            dStack_130 = (double)iVar13 + _LC0;
            dVar24 = (double)iVar16 + _LC0;
            pfVar3 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar16) * 4) * 4);
            local_138 = dVar24;
            local_108._0_8_ = msdfgen::Projection::unproject(pBVar1);
            local_108._12_4_ = uStack_304;
            local_108._8_4_ = local_308;
            local_308 = pfVar3[1];
            uStack_304 = 0;
            fVar4 = pfVar3[2];
            local_f8._8_8_ = (double)iVar15 + _LC0;
            local_f8._0_8_ = dVar24;
            fVar18 = *pfVar3;
            local_e0 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16))
                       >> 1 & 1;
            if (fVar18 < local_308) {
              fVar19 = fVar18;
              fVar18 = local_308;
              if (fVar4 < local_308) goto LAB_00108a37;
            }
            else if ((fVar4 < fVar18) && (fVar19 = local_308, local_308 < fVar18)) {
LAB_00108a37:
              fVar18 = fVar4;
              if (fVar4 <= fVar19) {
                fVar18 = fVar19;
              }
            }
            iVar11 = *(int *)(param_2 + 8);
            local_2f8 = (float *)0x0;
            bVar5 = local_250;
            local_e8 = pfVar3;
            bVar9 = local_e0;
            if (iVar16 == 0) {
joined_r0x00108adb:
              local_250 = bVar9;
              if (iVar15 == 0) {
                local_2e0 = (float *)0x0;
                bVar9 = local_220;
                local_220 = local_250;
              }
              else {
                local_2e0 = (float *)(*(long *)param_2 +
                                     (long)((iVar11 * (iVar15 + -1) + iVar16) * 4) * 4);
                local_258 = dVar23;
                local_248 = local_108;
                local_240 = __LC20;
                uStack_238 = _UNK_0010a7c8;
                local_e0 = local_250;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_258,fVar18,pfVar3,local_2e0);
                if (bVar10) goto LAB_00108a48;
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_220;
                local_220 = local_e0;
              }
              local_250 = bVar5;
              local_e0 = local_220;
              if (iVar11 + -1 <= iVar16) {
                local_2d0 = (float *)0x0;
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_0010871d;
LAB_00108c10:
                local_220 = bVar9;
                local_1e0 = __LC9;
                uStack_1dc = _UNK_0010a774;
                uStack_1d8 = (undefined4)_LC2;
                uStack_1d4 = _LC2._4_4_;
                pfVar14 = (float *)(*(long *)param_2 +
                                   (long)((iVar11 * (iVar15 + 1) + iVar16) * 4) * 4);
                local_1f0 = local_e0;
                local_308 = __LC9;
                uStack_304 = _UNK_0010a774;
                local_1f8 = dVar23;
                local_1e8 = local_108;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1f8,fVar18,pfVar3,pfVar14);
                if (bVar10) goto LAB_00108a48;
                iVar11 = *(int *)(param_2 + 8);
                if (0 < iVar16) goto LAB_00108725;
                goto LAB_00108ca0;
              }
              uStack_208 = 0;
              local_2d0 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar17) * 4) * 4);
              local_228 = dVar21;
              local_218 = local_108;
              local_210 = _LC21;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_228,fVar18,pfVar3,local_2d0);
              if (bVar10) goto LAB_00108a48;
              iVar11 = *(int *)(param_2 + 8);
              bVar9 = local_220;
              if (iVar15 < *(int *)(param_2 + 0xc) + -1) goto LAB_00108c10;
LAB_0010871d:
              local_220 = bVar9;
              pfVar14 = (float *)0x0;
              if (iVar16 < 1) {
LAB_00108ca0:
                if ((iVar16 < iVar11 + -1) && (iVar15 != 0)) {
LAB_001087db:
                  local_190 = local_e0;
                  local_180 = __LC24;
                  uStack_17c = _UNK_0010a7e4;
                  uStack_178 = _UNK_0010a7e8;
                  uStack_174 = _UNK_0010a7ec;
                  local_308 = __LC24;
                  uStack_304 = _UNK_0010a7e4;
                  local_198 = dVar20;
                  local_188 = local_108;
                  bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                     ((ArtifactClassifier *)&local_198,fVar18,pfVar3,local_2d0,
                                      local_2e0,
                                      (float *)(*(long *)param_2 +
                                               (long)(((iVar15 + -1) * iVar11 + iVar17) * 4) * 4));
                  if (bVar10) goto LAB_00108a48;
                  iVar11 = *(int *)(param_2 + 8);
                }
                if (iVar16 != 0) goto LAB_00108d58;
              }
              else {
LAB_00108725:
                if (iVar15 < 1) goto LAB_00108ca0;
                local_1c0 = local_e0;
                local_1b0 = (float)_LC23;
                uStack_1ac = _LC23._4_4_;
                fStack_1a8 = (float)_LC23;
                uStack_1a4 = _LC23._4_4_;
                local_308 = (float)_LC23;
                uStack_304 = _LC23._4_4_;
                local_1c8 = dVar20;
                local_1b8 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1c8,fVar18,pfVar3,local_2f8,
                                    local_2e0,
                                    (float *)(*(long *)param_2 +
                                             (long)((iVar16 + -1 + iVar11 * (iVar15 + -1)) * 4) * 4)
                                   );
                if (bVar10) goto LAB_00108a48;
                iVar11 = *(int *)(param_2 + 8);
                if (iVar16 < iVar11 + -1) goto LAB_001087db;
LAB_00108d58:
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_00108900;
                local_160 = local_e0;
                local_150 = __LC25;
                uStack_14c = _UNK_0010a7f4;
                uStack_148 = _UNK_0010a7f8;
                uStack_144 = _UNK_0010a7fc;
                local_308 = __LC25;
                uStack_304 = _UNK_0010a7f4;
                local_168 = dVar20;
                local_158 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_168,fVar18,pfVar3,local_2f8,pfVar14
                                    ,(float *)(*(long *)param_2 +
                                              (long)((iVar16 + -1 + iVar11 * (iVar15 + 1)) * 4) * 4)
                                   );
                if (bVar10) goto LAB_00108a48;
                iVar11 = *(int *)(param_2 + 8);
              }
              if ((iVar16 < iVar11 + -1) && (iVar15 < *(int *)(param_2 + 0xc) + -1)) {
                dStack_130 = (double)CONCAT71(dStack_130._1_7_,local_e0);
                local_120 = __LC18;
                dStack_118 = _UNK_0010a7a8;
                local_138 = dVar20;
                local_128 = local_108;
                local_2ed = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                      ((ArtifactClassifier *)&local_138,fVar18,pfVar3,local_2d0,
                                       pfVar14,(float *)(*(long *)param_2 +
                                                        (long)((iVar11 * (iVar15 + 1) + iVar17) * 4)
                                                        * 4));
              }
            }
            else {
              local_270 = CONCAT44(_LC23._4_4_,(float)_LC23);
              uStack_268 = 0;
              local_2f8 = (float *)(*(long *)param_2 +
                                   (long)((iVar16 + -1 + iVar11 * iVar15) * 4) * 4);
              local_288 = dVar21;
              local_280 = local_e0;
              local_278 = local_108;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,4>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_288,fVar18,pfVar3,local_2f8);
              if (!bVar10) {
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_e0;
                goto joined_r0x00108adb;
              }
LAB_00108a48:
              local_2ed = true;
            }
LAB_00108900:
            pbVar12 = (byte *)((long)(*(int *)(param_1 + 8) * iVar15 + iVar16) + *(long *)param_1);
            *pbVar12 = *pbVar12 | local_2ed;
            iVar11 = *(int *)(param_2 + 8);
          }
          iVar16 = iVar17;
        } while (iVar17 < iVar11);
        iVar17 = *(int *)(param_2 + 0xc);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  if (local_90 != (void *)0x0) {
    operator_delete(local_90,local_80 - (long)local_90);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8,local_98 - (long)local_a8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete(local_c0,local_b0 - (long)local_c0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier::evaluate(double, float, int) const [clone .isra.0] */

undefined8
msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier::evaluate
          (double param_1,float param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  ulong in_RSI;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_60;
  float local_2c;
  float local_28;
  float local_24;
  long local_20;
  
  lVar6 = CONCAT44(in_register_0000003c,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  if (((in_RSI & 1) == 0) || (uVar5 = 1, (in_RSI & 2) != 0)) goto LAB_00108e36;
  lVar1 = *(long *)(lVar6 + 0x10);
  dVar13 = *(double *)(lVar6 + 0x18) * param_1;
  dVar14 = *(double *)(lVar6 + 0x20) * param_1;
  dVar12 = *(double *)(lVar1 + 0x10) + dVar13;
  dVar4 = *(double *)(lVar1 + 0x18) + dVar14;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar12;
  auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
  uStack_60 = auVar3._8_8_;
  interpolate<float,3>
            (SUB84(dVar12,0),uStack_60,&local_2c,*(undefined8 *)(lVar1 + 0x90),
             *(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c));
  pfVar2 = *(float **)(lVar1 + 0x20);
  fVar8 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = *pfVar2;
  dVar12 = (_LC2 - (double)((ulong)dVar13 & _LC4)) * (_LC2 - (double)((ulong)dVar14 & _LC4));
  if (fVar8 <= fVar11) {
    fVar7 = fVar11;
    if ((fVar10 < fVar11) && (fVar9 = fVar8, fVar8 < fVar11)) goto LAB_0010906d;
  }
  else {
    fVar9 = fVar11;
    fVar7 = fVar8;
    if (fVar10 < fVar8) {
LAB_0010906d:
      fVar7 = fVar10;
      if (fVar10 <= fVar9) {
        fVar7 = fVar9;
      }
    }
  }
  fVar11 = (float)((double)(fVar7 - fVar11) * dVar12 + (double)local_2c);
  fVar9 = (float)((double)(fVar7 - fVar8) * dVar12 + (double)local_28);
  fVar8 = (float)((double)(fVar7 - fVar10) * dVar12 + (double)local_24);
  if (local_28 <= local_2c) {
    fVar10 = local_2c;
    if ((local_24 < local_2c) && (fVar7 = local_28, local_28 < local_2c)) goto LAB_00108f83;
  }
  else {
    fVar7 = local_2c;
    fVar10 = local_28;
    if (local_24 < local_28) {
LAB_00108f83:
      fVar10 = local_24;
      if (local_24 <= fVar7) {
        fVar10 = fVar7;
      }
    }
  }
  if (fVar9 <= fVar11) {
    if (fVar11 <= fVar8) {
      fVar8 = fVar11;
    }
    fVar7 = fVar9;
    if (fVar9 < fVar11) goto LAB_00108fad;
  }
  else {
    fVar7 = fVar11;
    fVar11 = fVar9;
    if (fVar8 < fVar9) {
LAB_00108fad:
      fVar11 = fVar8;
      if (fVar8 <= fVar7) {
        fVar11 = fVar7;
      }
    }
  }
  dVar12 = (double)ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                   ::distance((Vector2 *)(lVar1 + 0x30));
  dVar12 = (double)msdfgen::DistanceMapping::operator()((DistanceMapping *)(lVar1 + 0xa0),dVar12);
  uVar5 = CONCAT71((int7)((ulong)*(long *)(lVar6 + 0x10) >> 8),
                   (double)(float)((uint)(fVar11 - (float)dVar12) & _LC10) *
                   *(double *)(*(long *)(lVar6 + 0x10) + 0xc0) <
                   (double)(float)((uint)(fVar10 - (float)dVar12) & _LC10));
LAB_00108e36:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier const&, float, float, float const*, float const*, float const*, float,
   float, float, double, double) */

bool msdfgen::
     hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float *param_6,float param_7,float param_8,float param_9,
               double param_10,double param_11)

{
  double *pdVar1;
  char cVar2;
  int iVar3;
  ArtifactClassifier AVar4;
  ulong uVar5;
  double *pdVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float extraout_XMM1_Da;
  float fVar10;
  float extraout_XMM1_Da_00;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 local_70;
  double local_68 [5];
  long local_40;
  
  pdVar6 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = msdfgen::solveQuadratic
                    (pdVar6,(double)((param_9 - param_8) + param_7),
                     (double)((param_8 - param_7) - param_7),(double)param_7);
  if (0 < iVar3) {
    pdVar1 = pdVar6 + iVar3;
    do {
      dVar13 = *pdVar6;
      if ((_LC6 < dVar13) && (dVar13 < _LC7)) {
        fVar7 = (float)interpolatedMedian(param_4,param_5,param_6,dVar13);
        AVar4 = param_1[8];
        dVar11 = *(double *)param_1;
        fVar8 = param_2;
        if (param_2 <= _LC8) {
          fVar10 = _LC8;
          if (_LC8 <= param_2) goto LAB_00109336;
          if (_LC8 <= param_3) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_001091c8;
            if (param_2 < param_3) goto LAB_00109350;
            if (fVar7 < param_2) goto LAB_00109290;
            goto LAB_00109280;
          }
          if (fVar7 < _LC8) goto LAB_00109336;
LAB_00109290:
          fVar10 = SUB84((double)fVar7,0);
        }
        else {
          fVar10 = extraout_XMM1_Da;
          if (_LC8 < param_3) {
            if (fVar7 <= _LC8) goto LAB_00109290;
LAB_00109336:
            if (AVar4 == (ArtifactClassifier)0x0) {
              if (param_3 <= param_2) goto LAB_00109250;
LAB_00109350:
              fVar8 = param_3;
              if ((param_3 <= fVar7) || (fVar8 = param_2, fVar7 <= param_2)) goto LAB_00109280;
            }
          }
          else if (AVar4 == (ArtifactClassifier)0x0) {
LAB_00109250:
            if (fVar7 < param_2) {
              if (param_2 <= param_3) goto LAB_00109290;
              fVar8 = param_3;
              fVar10 = param_3;
              if (param_3 < fVar7) goto LAB_001091c8;
            }
LAB_00109280:
            if (fVar7 != fVar8) goto LAB_00109290;
          }
        }
LAB_001091c8:
        if ((param_10 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_10)) goto LAB_001091ea;
        uVar5 = (ulong)(dVar13 < param_10);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_10;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_10);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar10 = local_70._4_4_;
        fVar8 = (float)local_70;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00109639;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_001091ea;
            if ((float)local_70 < local_70._4_4_) goto LAB_001094c3;
            if (fVar7 < (float)local_70) goto LAB_001094e3;
            goto LAB_001094d8;
          }
          if (fVar7 < _LC8) goto LAB_00109639;
LAB_001094e3:
          dVar12 = (dVar13 - local_68[2]) * dVar11;
          if (((double)(float)local_70 - dVar12 <= (double)fVar7) &&
             ((double)fVar7 <= dVar12 + (double)(float)local_70)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_001094e3;
LAB_00109639:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_0010964a;
LAB_001094c3:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_001094d8;
          }
        }
        else {
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_001091ea;
LAB_0010964a:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_001094e3;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_001091ea;
          }
LAB_001094d8:
          if (fVar7 != fVar8) goto LAB_001094e3;
        }
LAB_001091ea:
        if ((param_11 <= 0.0) || (fVar10 = SUB84(_LC2,0), _LC2 <= param_11)) goto LAB_0010920c;
        uVar5 = (ulong)(dVar13 < param_11);
        local_68[2] = __LC9;
        local_68[3] = _LC2;
        local_68[uVar5 + 2] = param_11;
        local_70 = CONCAT44(param_3,param_2);
        uVar9 = interpolatedMedian(param_4,param_5,param_6,param_11);
        *(undefined4 *)((long)local_68 + uVar5 * 4 + -8) = uVar9;
        fVar8 = (float)local_70;
        fVar10 = _LC8;
        if ((float)local_70 <= _LC8) {
          if (_LC8 <= (float)local_70) goto LAB_00109681;
          if (_LC8 <= local_70._4_4_) {
            if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010920c;
            if ((float)local_70 < local_70._4_4_) goto LAB_0010958b;
            if (fVar7 < (float)local_70) goto LAB_001095ab;
            goto LAB_001095a0;
          }
          if (fVar7 < _LC8) goto LAB_00109681;
LAB_001095ab:
          dVar11 = (dVar13 - local_68[2]) * dVar11;
          fVar10 = SUB84(dVar11,0);
          if (((double)(float)local_70 - dVar11 <= (double)fVar7) &&
             (dVar11 = dVar11 + (double)(float)local_70, fVar10 = SUB84(dVar11,0),
             (double)fVar7 <= dVar11)) {
            fVar10 = SUB84((double)local_70._4_4_,0);
          }
        }
        else if (_LC8 < local_70._4_4_) {
          if (fVar7 <= _LC8) goto LAB_001095ab;
LAB_00109681:
          if (AVar4 == (ArtifactClassifier)0x0) {
            if (local_70._4_4_ <= (float)local_70) goto LAB_00109692;
LAB_0010958b:
            fVar8 = local_70._4_4_;
            if ((local_70._4_4_ <= fVar7) || (fVar8 = (float)local_70, fVar7 <= (float)local_70))
            goto LAB_001095a0;
          }
        }
        else {
          fVar10 = extraout_XMM1_Da_00;
          if (AVar4 != (ArtifactClassifier)0x0) goto LAB_0010920c;
LAB_00109692:
          if (fVar7 < (float)local_70) {
            if ((float)local_70 <= local_70._4_4_) goto LAB_001095ab;
            fVar8 = local_70._4_4_;
            if (local_70._4_4_ < fVar7) goto LAB_0010920c;
          }
LAB_001095a0:
          fVar10 = fVar8;
          if (fVar7 != fVar8) goto LAB_001095ab;
        }
LAB_0010920c:
        cVar2 = ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier::
                evaluate(dVar13,fVar10,(int)param_1);
        if (cVar2 != '\0') goto LAB_0010922d;
      }
      pdVar6 = pdVar6 + 1;
    } while (pdVar1 != pdVar6);
  }
  cVar2 = '\0';
LAB_0010922d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   msdfgen::hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier const&, float, float const*, float const*, float const*, float const*) */

bool msdfgen::
     hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4,
               float *param_5,float *param_6)

{
  bool bVar1;
  long in_FS_OFFSET;
  double dVar2;
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
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  fVar15 = param_6[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  if (fVar8 <= fVar6) {
    fVar3 = fVar6;
    if ((fVar15 < fVar6) && (fVar16 = fVar8, fVar8 < fVar6)) goto LAB_0010981b;
  }
  else {
    fVar3 = fVar8;
    fVar16 = fVar6;
    if (fVar15 < fVar8) {
LAB_0010981b:
      fVar3 = fVar15;
      if (fVar15 <= fVar16) {
        fVar3 = fVar16;
      }
    }
  }
  bVar1 = false;
  if ((float)((uint)(fVar3 - _LC8) & _LC10) <= (float)((uint)(param_2 - _LC8) & _LC10)) {
    fVar10 = (float)*(undefined8 *)param_3;
    fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar12 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar4 = (float)*(undefined8 *)param_5;
    fVar16 = (fVar10 - fVar12) - fVar4;
    fVar5 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar18 = (fVar11 - fVar14) - fVar5;
    fVar7 = fVar6 + fVar16;
    fVar9 = fVar8 + fVar18;
    local_50 = CONCAT44(fVar9,fVar7);
    fVar16 = (float)((uint)_LC11 ^ (uint)fVar10) - fVar16;
    fVar18 = (float)(_LC11._4_4_ ^ (uint)fVar11) - fVar18;
    local_60 = CONCAT44(fVar18,fVar16);
    fVar19 = (param_3[2] - param_4[2]) - param_5[2];
    fVar17 = (float)((uint)param_3[2] ^ __LC12) - fVar19;
    fVar15 = fVar15 + fVar19;
    dVar2 = ((double)fVar18 * __LC13) / (double)fVar9;
    dVar20 = ((double)fVar16 * __LC13) / (double)fVar7;
    local_58 = fVar17;
    local_48 = fVar15;
    bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                      (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                       fVar11 - fVar10,((fVar14 - fVar12) + fVar5) - fVar4,fVar8 - fVar6,dVar20,
                       dVar2);
    if (!bVar1) {
      dVar13 = ((double)fVar17 * __LC13) / (double)fVar15;
      bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                        (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                         param_3[2] - param_3[1],
                         ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1],
                         param_6[2] - param_6[1],dVar2,dVar13);
      if (!bVar1) {
        bVar1 = hasDiagonalArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                          (param_1,param_2,fVar3,param_3,(float *)&local_60,(float *)&local_50,
                           *param_3 - param_3[2],((*param_4 - param_4[2]) + *param_5) - param_5[2],
                           *param_6 - param_6[2],dVar13,dVar20);
        goto LAB_001097dc;
      }
    }
    bVar1 = true;
  }
LAB_001097dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



/* bool 
   msdfgen::hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier const&, float, float, float const*, float const*, float, float) */

bool msdfgen::
     hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float param_3,float *param_4,
               float *param_5,float param_6,float param_7)

{
  char cVar1;
  undefined1 uVar2;
  double *pdVar3;
  float extraout_XMM0_Da;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)param_6 / (double)(param_6 - param_7);
  if ((dVar5 <= _LC6) || (_LC7 <= dVar5)) {
    return false;
  }
  pdVar3 = (double *)interpolatedMedian(param_4,param_5,dVar5);
  cVar1 = *(char *)(pdVar3 + 1);
  fVar4 = param_2;
  if (param_2 <= _LC8) {
    if (_LC8 <= param_2) goto LAB_00109bcf;
    if (param_3 < _LC8) {
      if (extraout_XMM0_Da < _LC8) goto LAB_00109bcf;
      goto LAB_00109b3a;
    }
    if (cVar1 != '\0') goto LAB_00109ba0;
    if (param_2 < param_3) goto LAB_00109bde;
    if (extraout_XMM0_Da < param_2) goto LAB_00109b3a;
LAB_00109b2e:
    if (extraout_XMM0_Da == fVar4) goto LAB_00109ba0;
  }
  else {
    if (_LC8 < param_3) {
      if (extraout_XMM0_Da <= _LC8) goto LAB_00109b3a;
LAB_00109bcf:
      if (cVar1 != '\0') goto LAB_00109ba0;
      if (param_2 < param_3) {
LAB_00109bde:
        fVar4 = param_3;
        if ((extraout_XMM0_Da < param_3) && (fVar4 = param_2, param_2 < extraout_XMM0_Da))
        goto LAB_00109ba0;
        goto LAB_00109b2e;
      }
    }
    else if (cVar1 != '\0') goto LAB_00109ba0;
    if (param_2 <= extraout_XMM0_Da) goto LAB_00109b2e;
    if (param_3 < param_2) {
      fVar4 = param_3;
      if (param_3 < extraout_XMM0_Da) goto LAB_00109ba0;
      goto LAB_00109b2e;
    }
  }
LAB_00109b3a:
  if (((double)param_2 - dVar5 * *pdVar3 <= (double)extraout_XMM0_Da) &&
     ((double)extraout_XMM0_Da <= dVar5 * *pdVar3 + (double)param_2)) {
    param_3 = SUB84((double)param_3,0);
  }
LAB_00109ba0:
  uVar2 = ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier::evaluate
                    (dVar5,param_3,(int)pdVar3);
  return (bool)uVar2;
}



/* bool 
   msdfgen::hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier>(msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,
   3>::ArtifactClassifier const&, float, float const*, float const*) */

bool msdfgen::
     hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
               (ArtifactClassifier *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_4[1];
  fVar2 = *param_4;
  fVar3 = param_4[2];
  if (fVar1 <= fVar2) {
    fVar5 = fVar2;
    if ((fVar2 <= fVar3) || (fVar6 = fVar1, fVar2 <= fVar1)) goto LAB_00109c7c;
  }
  else {
    fVar5 = fVar1;
    fVar6 = fVar2;
    if (fVar1 <= fVar3) goto LAB_00109c7c;
  }
  fVar5 = fVar3;
  if (fVar3 <= fVar6) {
    fVar5 = fVar6;
  }
LAB_00109c7c:
  if ((float)((uint)(param_2 - _LC8) & _LC10) < (float)((uint)(fVar5 - _LC8) & _LC10)) {
    return false;
  }
  bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                    (param_1,param_2,fVar5,param_3,param_4,param_3[1] - *param_3,fVar1 - fVar2);
  if ((!bVar4) &&
     (bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                        (param_1,param_2,fVar5,param_3,param_4,param_3[2] - param_3[1],
                         param_4[2] - param_4[1]), !bVar4)) {
    bVar4 = hasLinearArtifactInner<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                      (param_1,param_2,fVar5,param_3,param_4,*param_3 - param_3[2],
                       *param_4 - param_4[2]);
    return bVar4;
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::OverlappingContourCombiner,
   3>(msdfgen::BitmapConstRef<float, 3> const&, msdfgen::Shape const&) */

void msdfgen::MSDFErrorCorrection::findErrors<msdfgen::OverlappingContourCombiner,3>
               (BitmapConstRef *param_1,Shape *param_2)

{
  BitmapConstRef *pBVar1;
  BitmapConstRef *pBVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  Shape *in_RDX;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double dVar24;
  float local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float *local_2f8;
  bool local_2ed;
  float *local_2e0;
  float *local_2d0;
  double local_288;
  byte local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_258;
  byte local_250;
  undefined1 *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_228;
  byte local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_1f8;
  byte local_1f0;
  undefined1 *local_1e8;
  float local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1c8;
  byte local_1c0;
  undefined1 *local_1b8;
  float local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  double local_198;
  byte local_190;
  undefined1 *local_188;
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_168;
  byte local_160;
  undefined1 *local_158;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_138;
  double dStack_130;
  undefined1 *local_128;
  double local_120;
  double dStack_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float *local_e8;
  byte local_e0;
  ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
  local_d8 [24];
  void *local_c0;
  long local_b0;
  void *local_a8;
  long local_98;
  void *local_90;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pBVar1 = param_1 + 0x10;
  pBVar2 = param_1 + 0x30;
  dVar21 = *(double *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108._0_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._8_8_ = 0;
  dVar20 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar23 = *(double *)(param_1 + 0x40);
  dVar24 = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da) * (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  dVar21 = SQRT(dVar20 * dVar20 + dVar24) * dVar21;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = 0;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  dVar20 = *(double *)(param_1 + 0x40);
  dVar24 = dVar24 * dVar24;
  dVar23 = SQRT(dVar22 * dVar22 + dVar24) * dVar23;
  local_108._8_8_ =
       msdfgen::DistanceMapping::operator()
                 ((DistanceMapping *)CONCAT44(_LC2._4_4_,(undefined4)_LC2),pBVar2);
  local_108._0_8_ = local_108._8_8_;
  dVar22 = (double)msdfgen::Projection::unprojectVector(pBVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  dVar20 = SQRT(dVar22 * dVar22 + dVar24 * dVar24) * dVar20;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
  ShapeDistanceFinder(local_d8,in_RDX);
  local_308 = (float)uVar7;
  uStack_304 = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_300 = (undefined4)uVar8;
  uStack_2fc = (undefined4)((ulong)uVar8 >> 0x20);
  local_78 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_68 = local_308;
  uStack_64 = uStack_304;
  uStack_60 = uStack_300;
  uStack_5c = uStack_2fc;
  local_58 = (undefined1  [16])0x0;
  local_138 = __LC18;
  dStack_130 = _UNK_0010a7a8;
  local_48 = uVar6;
  msdfgen::Projection::unprojectVector(pBVar1);
  iVar17 = *(int *)(param_2 + 0xc);
  local_58._4_4_ = extraout_XMM0_Db;
  local_58._0_4_ = extraout_XMM0_Da;
  local_58._12_4_ = uStack_304;
  local_58._8_4_ = local_308;
  if (0 < iVar17) {
    iVar11 = *(int *)(param_2 + 8);
    iVar13 = 0;
    do {
      iVar15 = iVar13;
      if (in_RDX[0x18] != (Shape)0x0) {
        iVar15 = (iVar17 - iVar13) + -1;
      }
      iVar16 = 0;
      if (0 < iVar11) {
        do {
          iVar17 = iVar16 + 1;
          bVar5 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16));
          local_2ed = (bool)(bVar5 & 1);
          if ((bVar5 & 1) == 0) {
            dStack_130 = (double)iVar13 + _LC0;
            dVar24 = (double)iVar16 + _LC0;
            pfVar3 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar16) * 3) * 4);
            local_138 = dVar24;
            local_108._0_8_ = msdfgen::Projection::unproject(pBVar1);
            local_108._12_4_ = uStack_304;
            local_108._8_4_ = local_308;
            local_308 = pfVar3[1];
            uStack_304 = 0;
            fVar4 = pfVar3[2];
            local_f8._8_8_ = (double)iVar15 + _LC0;
            local_f8._0_8_ = dVar24;
            fVar18 = *pfVar3;
            local_e0 = *(byte *)(*(long *)param_1 + (long)(*(int *)(param_1 + 8) * iVar15 + iVar16))
                       >> 1 & 1;
            if (fVar18 < local_308) {
              fVar19 = fVar18;
              fVar18 = local_308;
              if (fVar4 < local_308) goto LAB_0010a337;
            }
            else if ((fVar4 < fVar18) && (fVar19 = local_308, local_308 < fVar18)) {
LAB_0010a337:
              fVar18 = fVar4;
              if (fVar4 <= fVar19) {
                fVar18 = fVar19;
              }
            }
            iVar11 = *(int *)(param_2 + 8);
            local_2f8 = (float *)0x0;
            bVar5 = local_250;
            local_e8 = pfVar3;
            bVar9 = local_e0;
            if (iVar16 == 0) {
joined_r0x0010a3db:
              local_250 = bVar9;
              if (iVar15 == 0) {
                local_2e0 = (float *)0x0;
                bVar9 = local_220;
                local_220 = local_250;
              }
              else {
                local_2e0 = (float *)(*(long *)param_2 +
                                     (long)((iVar11 * (iVar15 + -1) + iVar16) * 3) * 4);
                local_258 = dVar23;
                local_248 = local_108;
                local_240 = __LC20;
                uStack_238 = _UNK_0010a7c8;
                local_e0 = local_250;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_258,fVar18,pfVar3,local_2e0);
                if (bVar10) goto LAB_0010a348;
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_220;
                local_220 = local_e0;
              }
              local_250 = bVar5;
              local_e0 = local_220;
              if (iVar11 + -1 <= iVar16) {
                local_2d0 = (float *)0x0;
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_0010a01d;
LAB_0010a510:
                local_220 = bVar9;
                local_1e0 = __LC9;
                uStack_1dc = _UNK_0010a774;
                uStack_1d8 = (undefined4)_LC2;
                uStack_1d4 = _LC2._4_4_;
                pfVar14 = (float *)(*(long *)param_2 +
                                   (long)((iVar11 * (iVar15 + 1) + iVar16) * 3) * 4);
                local_1f0 = local_e0;
                local_308 = __LC9;
                uStack_304 = _UNK_0010a774;
                local_1f8 = dVar23;
                local_1e8 = local_108;
                bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1f8,fVar18,pfVar3,pfVar14);
                if (bVar10) goto LAB_0010a348;
                iVar11 = *(int *)(param_2 + 8);
                if (0 < iVar16) goto LAB_0010a025;
                goto LAB_0010a5a0;
              }
              uStack_208 = 0;
              local_2d0 = (float *)(*(long *)param_2 + (long)((iVar11 * iVar15 + iVar17) * 3) * 4);
              local_228 = dVar21;
              local_218 = local_108;
              local_210 = _LC21;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_228,fVar18,pfVar3,local_2d0);
              if (bVar10) goto LAB_0010a348;
              iVar11 = *(int *)(param_2 + 8);
              bVar9 = local_220;
              if (iVar15 < *(int *)(param_2 + 0xc) + -1) goto LAB_0010a510;
LAB_0010a01d:
              local_220 = bVar9;
              pfVar14 = (float *)0x0;
              if (iVar16 < 1) {
LAB_0010a5a0:
                if ((iVar16 < iVar11 + -1) && (iVar15 != 0)) {
LAB_0010a0db:
                  local_190 = local_e0;
                  local_180 = __LC24;
                  uStack_17c = _UNK_0010a7e4;
                  uStack_178 = _UNK_0010a7e8;
                  uStack_174 = _UNK_0010a7ec;
                  local_308 = __LC24;
                  uStack_304 = _UNK_0010a7e4;
                  local_198 = dVar20;
                  local_188 = local_108;
                  bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                     ((ArtifactClassifier *)&local_198,fVar18,pfVar3,local_2d0,
                                      local_2e0,
                                      (float *)(*(long *)param_2 +
                                               (long)(((iVar15 + -1) * iVar11 + iVar17) * 3) * 4));
                  if (bVar10) goto LAB_0010a348;
                  iVar11 = *(int *)(param_2 + 8);
                }
                if (iVar16 != 0) goto LAB_0010a658;
              }
              else {
LAB_0010a025:
                if (iVar15 < 1) goto LAB_0010a5a0;
                local_1c0 = local_e0;
                local_1b0 = (float)_LC23;
                uStack_1ac = _LC23._4_4_;
                fStack_1a8 = (float)_LC23;
                uStack_1a4 = _LC23._4_4_;
                local_308 = (float)_LC23;
                uStack_304 = _LC23._4_4_;
                local_1c8 = dVar20;
                local_1b8 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_1c8,fVar18,pfVar3,local_2f8,
                                    local_2e0,
                                    (float *)(*(long *)param_2 +
                                             (long)((iVar16 + -1 + iVar11 * (iVar15 + -1)) * 3) * 4)
                                   );
                if (bVar10) goto LAB_0010a348;
                iVar11 = *(int *)(param_2 + 8);
                if (iVar16 < iVar11 + -1) goto LAB_0010a0db;
LAB_0010a658:
                if (*(int *)(param_2 + 0xc) + -1 <= iVar15) goto LAB_0010a200;
                local_160 = local_e0;
                local_150 = __LC25;
                uStack_14c = _UNK_0010a7f4;
                uStack_148 = _UNK_0010a7f8;
                uStack_144 = _UNK_0010a7fc;
                local_308 = __LC25;
                uStack_304 = _UNK_0010a7f4;
                local_168 = dVar20;
                local_158 = local_108;
                bVar10 = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                   ((ArtifactClassifier *)&local_168,fVar18,pfVar3,local_2f8,pfVar14
                                    ,(float *)(*(long *)param_2 +
                                              (long)((iVar16 + -1 + iVar11 * (iVar15 + 1)) * 3) * 4)
                                   );
                if (bVar10) goto LAB_0010a348;
                iVar11 = *(int *)(param_2 + 8);
              }
              if ((iVar16 < iVar11 + -1) && (iVar15 < *(int *)(param_2 + 0xc) + -1)) {
                dStack_130 = (double)CONCAT71(dStack_130._1_7_,local_e0);
                local_120 = __LC18;
                dStack_118 = _UNK_0010a7a8;
                local_138 = dVar20;
                local_128 = local_108;
                local_2ed = hasDiagonalArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                      ((ArtifactClassifier *)&local_138,fVar18,pfVar3,local_2d0,
                                       pfVar14,(float *)(*(long *)param_2 +
                                                        (long)((iVar11 * (iVar15 + 1) + iVar17) * 3)
                                                        * 4));
              }
            }
            else {
              local_270 = CONCAT44(_LC23._4_4_,(float)_LC23);
              uStack_268 = 0;
              local_2f8 = (float *)(*(long *)param_2 +
                                   (long)((iVar16 + -1 + iVar11 * iVar15) * 3) * 4);
              local_288 = dVar21;
              local_280 = local_e0;
              local_278 = local_108;
              bVar10 = hasLinearArtifact<msdfgen::ShapeDistanceChecker<msdfgen::OverlappingContourCombiner,3>::ArtifactClassifier>
                                 ((ArtifactClassifier *)&local_288,fVar18,pfVar3,local_2f8);
              if (!bVar10) {
                iVar11 = *(int *)(param_2 + 8);
                bVar5 = local_250;
                bVar9 = local_e0;
                goto joined_r0x0010a3db;
              }
LAB_0010a348:
              local_2ed = true;
            }
LAB_0010a200:
            pbVar12 = (byte *)((long)(*(int *)(param_1 + 8) * iVar15 + iVar16) + *(long *)param_1);
            *pbVar12 = *pbVar12 | local_2ed;
            iVar11 = *(int *)(param_2 + 8);
          }
          iVar16 = iVar17;
        } while (iVar17 < iVar11);
        iVar17 = *(int *)(param_2 + 0xc);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  if (local_90 != (void *)0x0) {
    operator_delete(local_90,local_80 - (long)local_90);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8,local_98 - (long)local_a8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete(local_c0,local_b0 - (long)local_c0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >::ShapeDistanceFinder(msdfgen::Shape const&) */

void msdfgen::
     ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
     ::ShapeDistanceFinder(Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >::ShapeDistanceFinder(msdfgen::Shape const&) */

void msdfgen::
     ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>::
     ShapeDistanceFinder(Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


