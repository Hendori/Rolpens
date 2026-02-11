
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
  if ((double)((ulong)param_1_00 & _LC2) < _LC1) {
    dVar9 = (double)((ulong)((double)(long)param_1_00 -
                            (double)(-(ulong)(param_1_00 < (double)(long)param_1_00) & (ulong)_LC3))
                    | ~_LC2 & (ulong)param_1_00);
  }
  iVar2 = (int)dVar9;
  dVar9 = param_2_00;
  if ((double)((ulong)param_2_00 & _LC2) < _LC1) {
    dVar9 = (double)((ulong)((double)(long)param_2_00 -
                            (double)(-(ulong)(param_2_00 < (double)(long)param_2_00) & (ulong)_LC3))
                    | ~_LC2 & (ulong)param_2_00);
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
  dVar8 = _LC3 - param_1_00;
  dVar9 = _LC3 - (param_2_00 - (double)iVar5);
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
  if ((double)((ulong)param_1_00 & _LC2) < _LC1) {
    dVar9 = (double)((ulong)((double)(long)param_1_00 -
                            (double)(-(ulong)(param_1_00 < (double)(long)param_1_00) & (ulong)_LC3))
                    | ~_LC2 & (ulong)param_1_00);
  }
  iVar2 = (int)dVar9;
  dVar9 = param_2_00;
  if ((double)((ulong)param_2_00 & _LC2) < _LC1) {
    dVar9 = (double)((ulong)((double)(long)param_2_00 -
                            (double)(-(ulong)(param_2_00 < (double)(long)param_2_00) & (ulong)_LC3))
                    | ~_LC2 & (ulong)param_2_00);
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
  dVar9 = _LC3 - (param_2_00 - (double)iVar5);
  dVar8 = _LC3 - param_1_00;
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



/* void msdfgen::interpolate<float, 1>(float*, msdfgen::BitmapConstRef<float, 1> const&,
   msdfgen::Vector2) [clone .isra.0] */

void msdfgen::interpolate<float,1>
               (double param_1_00,double param_2_00,float *param_1,long param_2,int param_5,
               int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  param_1_00 = param_1_00 - _LC0;
  param_2_00 = param_2_00 - _LC0;
  dVar7 = param_1_00;
  if ((double)((ulong)param_1_00 & _LC2) < _LC1) {
    dVar7 = (double)((ulong)((double)(long)param_1_00 -
                            (double)(-(ulong)(param_1_00 < (double)(long)param_1_00) & (ulong)_LC3))
                    | ~_LC2 & (ulong)param_1_00);
  }
  iVar4 = (int)dVar7;
  dVar7 = param_2_00;
  if ((double)((ulong)param_2_00 & _LC2) < _LC1) {
    dVar7 = (double)((ulong)((double)(long)param_2_00 -
                            (double)(-(ulong)(param_2_00 < (double)(long)param_2_00) & (ulong)_LC3))
                    | ~_LC2 & (ulong)param_2_00);
  }
  iVar2 = (int)dVar7;
  iVar3 = iVar4 + 1;
  iVar6 = param_5 + -1;
  iVar1 = iVar2 + 1;
  param_1_00 = param_1_00 - (double)iVar4;
  if (((iVar4 < 0) || (iVar5 = iVar4, iVar6 < iVar4)) && (iVar5 = 0, 0 < iVar4)) {
    iVar5 = iVar6;
  }
  if (((iVar3 < 0) || (iVar4 = iVar3, iVar6 < iVar3)) && (iVar4 = 0, 0 < iVar3)) {
    iVar4 = iVar6;
  }
  param_6 = param_6 + -1;
  if (((iVar2 < 0) || (iVar3 = iVar2, param_6 < iVar2)) && (iVar3 = 0, 0 < iVar2)) {
    iVar3 = param_6;
  }
  if (((iVar1 < 0) || (iVar6 = iVar1, param_6 < iVar1)) && (iVar6 = 0, 0 < iVar1)) {
    iVar6 = param_6;
  }
  *param_1 = (float)((double)(float)((double)*(float *)(param_2 +
                                                       (long)(iVar3 * param_5 + iVar4) * 4) *
                                     param_1_00 +
                                    (double)*(float *)(param_2 + (long)(iVar5 + iVar3 * param_5) * 4
                                                      ) * (_LC3 - param_1_00)) *
                     (_LC3 - (param_2_00 - (double)iVar2)) +
                    (double)(float)((double)*(float *)(param_2 + (long)(iVar6 * param_5 + iVar4) * 4
                                                      ) * param_1_00 +
                                   (double)*(float *)(param_2 + (long)(iVar6 * param_5 + iVar5) * 4)
                                   * (_LC3 - param_1_00)) * (param_2_00 - (double)iVar2));
  return;
}



/* msdfgen::renderSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::BitmapConstRef<float, 1> const&,
   msdfgen::Range, float) */

void __thiscall
msdfgen::renderSDF(double param_1_00,double param_2,float param_3,msdfgen *this,undefined8 *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  auVar12._8_8_ = local_58._8_8_;
  auVar12._0_8_ = local_58._0_8_;
  iVar7 = *(int *)(this + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(this + 8);
  dVar10 = (double)*(int *)(param_1 + 1) / (double)iVar1;
  if (param_2 == param_1_00) {
    if ((0 < iVar7) && (local_58 = auVar12, 0 < iVar1)) {
      iVar4 = 0;
      iVar3 = 0;
      dVar9 = _LC0;
      fVar11 = _LC5;
      do {
        lVar5 = (long)iVar4 * 4;
        iVar6 = 0;
        do {
          dVar8 = (double)iVar6;
          iVar6 = iVar6 + 1;
          interpolate<float,1>((dVar8 + dVar9) * dVar10);
          auVar2._8_8_ = local_58._8_8_;
          auVar2._0_8_ = local_58._0_8_;
          *(uint *)(*(long *)this + lVar5) =
               -(uint)(param_3 <= (float)local_58._0_4_) & (uint)fVar11;
          lVar5 = lVar5 + 4;
        } while (iVar1 != iVar6);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + iVar1;
        local_58 = auVar2;
      } while (iVar7 != iVar3);
    }
  }
  else {
    iVar3 = 0;
    dVar9 = (double)(iVar7 + iVar1) /
            (double)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 1));
    auVar12 = msdfgen::DistanceMapping::inverse(dVar9 * param_1_00,dVar9 * param_2);
    param_3 = _LC7 - param_3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 8)) {
          iVar7 = 0;
          do {
            interpolate<float,1>
                      (((double)iVar7 + _LC0) * dVar10,&local_5c,*param_1,
                       *(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc));
            local_58 = auVar12;
            dVar9 = (double)msdfgen::DistanceMapping::operator()
                                      ((DistanceMapping *)local_58,(double)(param_3 + local_5c));
            dVar9 = dVar9 + _LC0;
            if (0.0 <= dVar9) {
              fVar11 = _LC5;
              if (dVar9 <= _LC3) {
                fVar11 = (float)dVar9;
              }
            }
            else {
              fVar11 = 0.0;
            }
            iVar1 = *(int *)(this + 8);
            iVar4 = iVar1 * iVar3 + iVar7;
            iVar7 = iVar7 + 1;
            *(float *)(*(long *)this + (long)iVar4 * 4) = fVar11;
          } while (iVar7 < iVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0xc));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::renderSDF(msdfgen::BitmapRef<float, 3> const&, msdfgen::BitmapConstRef<float, 1> const&,
   msdfgen::Range, float) */

void __thiscall
msdfgen::renderSDF(double param_1_00,double param_2,float param_3,msdfgen *this,undefined8 *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  float local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  auVar16._8_8_ = local_58._8_8_;
  auVar16._0_8_ = local_58._0_8_;
  iVar8 = *(int *)(this + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(this + 8);
  dVar15 = (double)*(int *)((long)param_1 + 0xc) / (double)iVar8;
  dVar11 = (double)*(int *)(param_1 + 1) / (double)iVar1;
  if (param_2 == param_1_00) {
    if ((0 < iVar8) && (local_58 = auVar16, 0 < iVar1)) {
      iVar4 = 0;
      iVar3 = 0;
      dVar13 = _LC0;
      fVar14 = _LC5;
      do {
        iVar6 = 0;
        lVar7 = (long)(iVar4 * 3) * 4;
        dVar12 = ((double)iVar3 + dVar13) * dVar15;
        do {
          dVar10 = (double)iVar6;
          iVar6 = iVar6 + 1;
          interpolate<float,1>((dVar10 + dVar13) * dVar11,dVar12);
          auVar2._8_8_ = local_58._8_8_;
          auVar2._0_8_ = local_58._0_8_;
          puVar5 = (undefined8 *)(*(long *)this + lVar7);
          lVar7 = lVar7 + 0xc;
          uVar9 = -(uint)(param_3 <= (float)local_58._0_4_) & (uint)fVar14;
          *(uint *)(puVar5 + 1) = uVar9;
          *puVar5 = CONCAT44(uVar9,uVar9);
        } while (iVar1 != iVar6);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + iVar1;
        local_58 = auVar2;
      } while (iVar8 != iVar3);
    }
  }
  else {
    iVar3 = 0;
    dVar15 = (double)(iVar8 + iVar1) /
             (double)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 1));
    auVar16 = msdfgen::DistanceMapping::inverse(dVar15 * param_1_00,dVar15 * param_2);
    param_3 = _LC7 - param_3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 8)) {
          iVar8 = 0;
          do {
            interpolate<float,1>
                      (((double)iVar8 + _LC0) * dVar11,&local_5c,*param_1,
                       *(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc));
            local_58 = auVar16;
            dVar15 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_58,(double)(param_3 + local_5c));
            dVar15 = dVar15 + _LC0;
            if (0.0 <= dVar15) {
              fVar14 = _LC5;
              if (dVar15 <= _LC3) {
                fVar14 = (float)dVar15;
              }
            }
            else {
              fVar14 = 0.0;
            }
            iVar1 = *(int *)(this + 8);
            iVar4 = iVar1 * iVar3 + iVar8;
            iVar8 = iVar8 + 1;
            puVar5 = (undefined8 *)(*(long *)this + (long)(iVar4 * 3) * 4);
            *puVar5 = CONCAT44(fVar14,fVar14);
            *(float *)(puVar5 + 1) = fVar14;
          } while (iVar8 < iVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0xc));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::renderSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::BitmapConstRef<float, 3> const&,
   msdfgen::Range, float) */

void __thiscall
msdfgen::renderSDF(double param_1_00,double param_2,float param_3,msdfgen *this,undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 local_68 [16];
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  auVar14._8_8_ = local_68._8_8_;
  auVar14._0_8_ = local_68._0_8_;
  iVar5 = *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar13 = (double)*(int *)((long)param_1 + 0xc) / (double)iVar5;
  dVar10 = (double)*(int *)(param_1 + 1) / (double)iVar1;
  if (param_2 == param_1_00) {
    if ((0 < iVar5) && (local_68 = auVar14, 0 < iVar1)) {
      iVar3 = 0;
      iVar2 = 0;
      dVar9 = _LC0;
      fVar12 = _LC5;
      do {
        iVar4 = 0;
        lVar6 = (long)iVar2 * 4;
        dVar11 = ((double)iVar3 + dVar9) * dVar13;
        do {
          interpolate<float,3>(((double)iVar4 + dVar9) * dVar10,dVar11);
          if (local_4c < local_48) {
            fVar7 = local_48;
            fVar8 = local_4c;
            if (local_44 < local_48) goto LAB_00100eb6;
          }
          else {
            fVar7 = local_4c;
            if ((local_44 < local_4c) && (fVar8 = local_48, local_48 < local_4c)) {
LAB_00100eb6:
              fVar7 = local_44;
              if (local_44 <= fVar8) {
                fVar7 = fVar8;
              }
            }
          }
          iVar4 = iVar4 + 1;
          *(uint *)(*(long *)this + lVar6) = -(uint)(param_3 <= fVar7) & (uint)fVar12;
          lVar6 = lVar6 + 4;
        } while (iVar1 != iVar4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + iVar1;
      } while (iVar5 != iVar3);
    }
  }
  else {
    iVar2 = 0;
    dVar9 = (double)(iVar5 + iVar1) /
            (double)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 1));
    auVar14 = msdfgen::DistanceMapping::inverse(dVar9 * param_1_00,dVar9 * param_2);
    param_3 = _LC7 - param_3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 8)) {
          iVar5 = 0;
          dVar9 = (double)iVar2 + _LC0;
          do {
            interpolate<float,3>
                      (((double)iVar5 + _LC0) * dVar10,dVar9 * dVar13,&local_4c,*param_1,
                       *(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc));
            if (local_4c < local_48) {
              fVar12 = local_4c;
              fVar7 = local_48;
              if (local_44 < local_48) goto LAB_001010c4;
            }
            else {
              fVar7 = local_4c;
              if ((local_44 < local_4c) && (fVar12 = local_48, local_48 < local_4c)) {
LAB_001010c4:
                fVar7 = local_44;
                if (local_44 <= fVar12) {
                  fVar7 = fVar12;
                }
              }
            }
            local_68 = auVar14;
            dVar11 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(fVar7 + param_3));
            dVar11 = dVar11 + _LC0;
            if (dVar11 < 0.0) {
              fVar12 = 0.0;
            }
            else {
              fVar12 = _LC5;
              if (dVar11 <= _LC3) {
                fVar12 = (float)dVar11;
              }
            }
            iVar1 = *(int *)(this + 8);
            iVar3 = iVar1 * iVar2 + iVar5;
            iVar5 = iVar5 + 1;
            *(float *)(*(long *)this + (long)iVar3 * 4) = fVar12;
          } while (iVar5 < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xc));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::renderSDF(msdfgen::BitmapRef<float, 3> const&, msdfgen::BitmapConstRef<float, 3> const&,
   msdfgen::Range, float) */

void __thiscall
msdfgen::renderSDF(double param_1_00,double param_2,float param_3,msdfgen *this,undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 local_68 [16];
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  auVar14._8_8_ = local_68._8_8_;
  auVar14._0_8_ = local_68._0_8_;
  iVar5 = *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar13 = (double)*(int *)((long)param_1 + 0xc) / (double)iVar5;
  dVar11 = (double)*(int *)(param_1 + 1) / (double)iVar1;
  if (param_2 == param_1_00) {
    if ((0 < iVar5) && (local_68 = auVar14, 0 < iVar1)) {
      iVar6 = 0;
      iVar2 = 0;
      fVar10 = _LC5;
      dVar9 = _LC0;
      do {
        iVar7 = 0;
        lVar4 = (long)(iVar6 * 3) * 4;
        dVar12 = ((double)iVar2 + dVar9) * dVar13;
        do {
          dVar8 = (double)iVar7;
          iVar7 = iVar7 + 1;
          interpolate<float,3>((dVar8 + dVar9) * dVar11,dVar12);
          puVar3 = (uint *)(*(long *)this + lVar4);
          lVar4 = lVar4 + 0xc;
          *puVar3 = -(uint)(param_3 <= local_4c) & (uint)fVar10;
          puVar3[1] = -(uint)(param_3 <= local_48) & (uint)fVar10;
          puVar3[2] = (uint)_LC5 & -(uint)(param_3 <= local_44);
        } while (iVar1 != iVar7);
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + iVar1;
      } while (iVar5 != iVar2);
    }
  }
  else {
    iVar2 = 0;
    dVar9 = (double)(iVar5 + iVar1) /
            (double)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 1));
    auVar14 = msdfgen::DistanceMapping::inverse(dVar9 * param_1_00,dVar9 * param_2);
    param_3 = _LC7 - param_3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 8)) {
          iVar5 = 0;
          dVar9 = (double)iVar2 + _LC0;
          do {
            interpolate<float,3>
                      (((double)iVar5 + _LC0) * dVar11,dVar9 * dVar13,&local_4c,*param_1,
                       *(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc));
            local_68 = auVar14;
            dVar12 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_4c));
            dVar12 = dVar12 + _LC0;
            if (0.0 <= dVar12) {
              fVar10 = _LC5;
              if (dVar12 <= _LC3) {
                fVar10 = (float)dVar12;
              }
            }
            else {
              fVar10 = 0.0;
            }
            *(float *)(*(long *)this + (long)((*(int *)(this + 8) * iVar2 + iVar5) * 3) * 4) =
                 fVar10;
            local_68 = auVar14;
            dVar12 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_48));
            dVar12 = dVar12 + _LC0;
            if (dVar12 < 0.0) {
              fVar10 = 0.0;
            }
            else {
              fVar10 = _LC5;
              if (dVar12 <= _LC3) {
                fVar10 = (float)dVar12;
              }
            }
            *(float *)(*(long *)this + 4 + (long)((*(int *)(this + 8) * iVar2 + iVar5) * 3) * 4) =
                 fVar10;
            local_68 = auVar14;
            dVar12 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_44));
            dVar12 = dVar12 + _LC0;
            if (dVar12 < 0.0) {
              fVar10 = 0.0;
            }
            else {
              fVar10 = _LC5;
              if (dVar12 <= _LC3) {
                fVar10 = (float)dVar12;
              }
            }
            iVar1 = *(int *)(this + 8);
            iVar6 = iVar1 * iVar2 + iVar5;
            iVar5 = iVar5 + 1;
            *(float *)(*(long *)this + 8 + (long)(iVar6 * 3) * 4) = fVar10;
          } while (iVar5 < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xc));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::renderSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::BitmapConstRef<float, 4> const&,
   msdfgen::Range, float) */

void __thiscall
msdfgen::renderSDF(double param_1_00,double param_2,float param_3,msdfgen *this,undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 local_68 [16];
  float local_58;
  float local_54;
  float local_50;
  long local_40;
  
  auVar14._8_8_ = local_68._8_8_;
  auVar14._0_8_ = local_68._0_8_;
  iVar5 = *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar13 = (double)*(int *)((long)param_1 + 0xc) / (double)iVar5;
  dVar10 = (double)*(int *)(param_1 + 1) / (double)iVar1;
  if (param_2 == param_1_00) {
    if ((0 < iVar5) && (local_68 = auVar14, 0 < iVar1)) {
      iVar3 = 0;
      iVar2 = 0;
      dVar9 = _LC0;
      fVar12 = _LC5;
      do {
        iVar4 = 0;
        lVar6 = (long)iVar2 * 4;
        dVar11 = ((double)iVar3 + dVar9) * dVar13;
        do {
          interpolate<float,4>(((double)iVar4 + dVar9) * dVar10,dVar11);
          if (local_58 < local_54) {
            fVar7 = local_54;
            fVar8 = local_58;
            if (local_50 < local_54) goto LAB_00101756;
          }
          else {
            fVar7 = local_58;
            if ((local_50 < local_58) && (fVar8 = local_54, local_54 < local_58)) {
LAB_00101756:
              fVar7 = local_50;
              if (local_50 <= fVar8) {
                fVar7 = fVar8;
              }
            }
          }
          iVar4 = iVar4 + 1;
          *(uint *)(*(long *)this + lVar6) = -(uint)(param_3 <= fVar7) & (uint)fVar12;
          lVar6 = lVar6 + 4;
        } while (iVar1 != iVar4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + iVar1;
      } while (iVar5 != iVar3);
    }
  }
  else {
    iVar2 = 0;
    dVar9 = (double)(iVar5 + iVar1) /
            (double)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 1));
    auVar14 = msdfgen::DistanceMapping::inverse(dVar9 * param_1_00,dVar9 * param_2);
    param_3 = _LC7 - param_3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 8)) {
          iVar5 = 0;
          dVar9 = (double)iVar2 + _LC0;
          do {
            interpolate<float,4>
                      (((double)iVar5 + _LC0) * dVar10,dVar9 * dVar13,&local_58,*param_1,
                       *(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc));
            if (local_58 < local_54) {
              fVar12 = local_58;
              fVar7 = local_54;
              if (local_50 < local_54) goto LAB_00101964;
            }
            else {
              fVar7 = local_58;
              if ((local_50 < local_58) && (fVar12 = local_54, local_54 < local_58)) {
LAB_00101964:
                fVar7 = local_50;
                if (local_50 <= fVar12) {
                  fVar7 = fVar12;
                }
              }
            }
            local_68 = auVar14;
            dVar11 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(fVar7 + param_3));
            dVar11 = dVar11 + _LC0;
            if (dVar11 < 0.0) {
              fVar12 = 0.0;
            }
            else {
              fVar12 = _LC5;
              if (dVar11 <= _LC3) {
                fVar12 = (float)dVar11;
              }
            }
            iVar1 = *(int *)(this + 8);
            iVar3 = iVar1 * iVar2 + iVar5;
            iVar5 = iVar5 + 1;
            *(float *)(*(long *)this + (long)iVar3 * 4) = fVar12;
          } while (iVar5 < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xc));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::renderSDF(msdfgen::BitmapRef<float, 4> const&, msdfgen::BitmapConstRef<float, 4> const&,
   msdfgen::Range, float) */

void __thiscall
msdfgen::renderSDF(double param_1_00,double param_2,float param_3,msdfgen *this,undefined8 *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 local_68 [16];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  auVar15._8_8_ = local_68._8_8_;
  auVar15._0_8_ = local_68._0_8_;
  iVar5 = *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar14 = (double)*(int *)((long)param_1 + 0xc) / (double)iVar5;
  dVar12 = (double)*(int *)(param_1 + 1) / (double)iVar1;
  if (param_2 == param_1_00) {
    if ((0 < iVar5) && (local_68 = auVar15, 0 < iVar1)) {
      iVar7 = 0;
      iVar3 = 0;
      fVar11 = _LC5;
      dVar10 = _LC0;
      do {
        iVar8 = 0;
        lVar6 = (long)(iVar7 * 4) * 4;
        dVar13 = ((double)iVar3 + dVar10) * dVar14;
        do {
          dVar9 = (double)iVar8;
          iVar8 = iVar8 + 1;
          interpolate<float,4>((dVar9 + dVar10) * dVar12,dVar13);
          puVar4 = (uint *)(*(long *)this + lVar6);
          lVar6 = lVar6 + 0x10;
          *puVar4 = -(uint)(param_3 <= local_58) & (uint)fVar11;
          puVar4[1] = -(uint)(param_3 <= local_54) & (uint)fVar11;
          fVar2 = _LC5;
          puVar4[2] = -(uint)(param_3 <= local_50) & (uint)_LC5;
          puVar4[3] = (uint)fVar2 & -(uint)(param_3 <= local_4c);
        } while (iVar1 != iVar8);
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + iVar1;
      } while (iVar5 != iVar3);
    }
  }
  else {
    iVar3 = 0;
    dVar10 = (double)(iVar5 + iVar1) /
             (double)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 1));
    auVar15 = msdfgen::DistanceMapping::inverse(dVar10 * param_1_00,dVar10 * param_2);
    param_3 = _LC7 - param_3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 8)) {
          iVar5 = 0;
          dVar10 = (double)iVar3 + _LC0;
          do {
            interpolate<float,4>
                      (((double)iVar5 + _LC0) * dVar12,dVar10 * dVar14,&local_58,*param_1,
                       *(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc));
            local_68 = auVar15;
            dVar13 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_58));
            dVar13 = dVar13 + _LC0;
            if (0.0 <= dVar13) {
              fVar11 = _LC5;
              if (dVar13 <= _LC3) {
                fVar11 = (float)dVar13;
              }
            }
            else {
              fVar11 = 0.0;
            }
            *(float *)(*(long *)this + (long)((*(int *)(this + 8) * iVar3 + iVar5) * 4) * 4) =
                 fVar11;
            local_68 = auVar15;
            dVar13 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_54));
            dVar13 = dVar13 + _LC0;
            if (dVar13 < 0.0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = _LC5;
              if (dVar13 <= _LC3) {
                fVar11 = (float)dVar13;
              }
            }
            *(float *)(*(long *)this + 4 + (long)((*(int *)(this + 8) * iVar3 + iVar5) * 4) * 4) =
                 fVar11;
            local_68 = auVar15;
            dVar13 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_50));
            dVar13 = dVar13 + _LC0;
            if (dVar13 < 0.0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = _LC5;
              if (dVar13 <= _LC3) {
                fVar11 = (float)dVar13;
              }
            }
            *(float *)(*(long *)this + 8 + (long)((*(int *)(this + 8) * iVar3 + iVar5) * 4) * 4) =
                 fVar11;
            local_68 = auVar15;
            dVar13 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)local_68,(double)(param_3 + local_4c));
            dVar13 = dVar13 + _LC0;
            if (dVar13 < 0.0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = _LC5;
              if (dVar13 <= _LC3) {
                fVar11 = (float)dVar13;
              }
            }
            iVar1 = *(int *)(this + 8);
            iVar7 = iVar3 * iVar1 + iVar5;
            iVar5 = iVar5 + 1;
            *(float *)(*(long *)this + 0xc + (long)(iVar7 * 4) * 4) = fVar11;
          } while (iVar5 < iVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0xc));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::simulate8bit(msdfgen::BitmapRef<float, 1> const&) */

void msdfgen::simulate8bit(BitmapRef *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  
  fVar6 = _LC11;
  fVar5 = _LC10;
  fVar4 = _LC9;
  fVar3 = _LC5;
  pfVar1 = *(float **)param_1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
  pfVar7 = *(float **)param_1;
  do {
    if (pfVar1 <= pfVar7) {
      return;
    }
    while (fVar2 = *pfVar7, 0.0 <= fVar2) {
      fVar8 = fVar3;
      if (fVar2 <= fVar3) {
        fVar8 = (float)(~(int)(fVar5 - fVar2 * fVar4) & 0xff) * fVar6;
      }
      *pfVar7 = fVar8;
      pfVar7 = pfVar7 + 1;
      if (pfVar1 <= pfVar7) {
        return;
      }
    }
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 1;
  } while( true );
}



/* msdfgen::simulate8bit(msdfgen::BitmapRef<float, 3> const&) */

void msdfgen::simulate8bit(BitmapRef *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  
  fVar6 = _LC11;
  fVar5 = _LC10;
  fVar4 = _LC9;
  fVar3 = _LC5;
  pfVar1 = *(float **)param_1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) * 3;
  pfVar7 = *(float **)param_1;
  do {
    if (pfVar1 <= pfVar7) {
      return;
    }
    while (fVar2 = *pfVar7, 0.0 <= fVar2) {
      fVar8 = fVar3;
      if (fVar2 <= fVar3) {
        fVar8 = (float)(~(int)(fVar5 - fVar2 * fVar4) & 0xff) * fVar6;
      }
      *pfVar7 = fVar8;
      pfVar7 = pfVar7 + 1;
      if (pfVar1 <= pfVar7) {
        return;
      }
    }
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 1;
  } while( true );
}



/* msdfgen::simulate8bit(msdfgen::BitmapRef<float, 4> const&) */

void msdfgen::simulate8bit(BitmapRef *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  
  fVar6 = _LC11;
  fVar5 = _LC10;
  fVar4 = _LC9;
  fVar3 = _LC5;
  pfVar1 = *(float **)param_1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) * 4;
  pfVar7 = *(float **)param_1;
  do {
    if (pfVar1 <= pfVar7) {
      return;
    }
    while (fVar2 = *pfVar7, 0.0 <= fVar2) {
      fVar8 = fVar3;
      if (fVar2 <= fVar3) {
        fVar8 = (float)(~(int)(fVar5 - fVar2 * fVar4) & 0xff) * fVar6;
      }
      *pfVar7 = fVar8;
      pfVar7 = pfVar7 + 1;
      if (pfVar1 <= pfVar7) {
        return;
      }
    }
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 1;
  } while( true );
}


