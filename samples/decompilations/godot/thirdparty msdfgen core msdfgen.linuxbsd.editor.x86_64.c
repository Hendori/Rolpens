
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::generateSDF_legacy(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&) */

void msdfgen::generateSDF_legacy
               (long *param_1,long *param_2,undefined1 (*param_3) [16],double *param_4)

{
  double dVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  EdgeHolder *this;
  int iVar6;
  long *plVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double local_a8;
  double local_98;
  int local_70;
  undefined1 local_60 [8];
  DistanceMapping local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping(local_58);
  iVar6 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar6) {
    iVar4 = 0;
    do {
      local_70 = iVar4;
      if ((char)param_2[3] != '\0') {
        local_70 = (iVar6 - iVar4) + -1;
      }
      if (0 < (int)param_1[1]) {
        iVar6 = 0;
        dVar8 = (double)iVar4 + __LC2;
        do {
          dVar10 = *param_4;
          dVar1 = param_4[1];
          auVar11._0_8_ = (double)iVar6 + __LC2;
          plVar7 = (long *)*param_2;
          auVar11._8_8_ = dVar8;
          auVar11 = divpd(auVar11,*param_3);
          if (plVar7 == (long *)param_2[1]) {
            local_a8 = _LC1;
          }
          else {
            local_98 = 0.0;
            local_a8 = _LC1;
            do {
              this = (EdgeHolder *)*plVar7;
              if (this != (EdgeHolder *)plVar7[1]) {
                do {
                  plVar5 = (long *)msdfgen::EdgeHolder::operator->(this);
                  dVar12 = auVar11._8_8_ - dVar1;
                  dVar9 = (double)(**(code **)(*plVar5 + 0x40))
                                            (auVar11._0_8_ - dVar10,plVar5,local_60);
                  if (((double)((ulong)dVar9 & __LC3) < (double)((ulong)local_a8 & __LC3)) ||
                     (((double)((ulong)dVar9 & __LC3) == (double)((ulong)local_a8 & __LC3) &&
                      (dVar12 < local_98)))) {
                    local_a8 = dVar9;
                    local_98 = dVar12;
                  }
                  this = this + 8;
                } while ((EdgeHolder *)plVar7[1] != this);
              }
              plVar7 = plVar7 + 3;
            } while ((long *)param_2[1] != plVar7);
          }
          dVar10 = (double)msdfgen::DistanceMapping::operator()(local_58,local_a8);
          lVar2 = param_1[1];
          iVar3 = local_70 * (int)lVar2 + iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(*param_1 + (long)iVar3 * 4) = (float)dVar10;
        } while (iVar6 < (int)lVar2);
        iVar6 = *(int *)((long)param_1 + 0xc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::generatePSDF_legacy(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&) */

void msdfgen::generatePSDF_legacy
               (long *param_1,long *param_2,undefined1 (*param_3) [16],double *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  EdgeHolder *this;
  EdgeHolder *this_00;
  int iVar6;
  long in_FS_OFFSET;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  int local_80;
  undefined1 local_70 [8];
  DistanceMapping local_68 [16];
  double local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping(local_68);
  iVar6 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar6) {
    iVar5 = 0;
    do {
      local_80 = iVar5;
      if ((char)param_2[3] != '\0') {
        local_80 = (iVar6 - iVar5) + -1;
      }
      if (0 < (int)param_1[1]) {
        iVar6 = 0;
        dVar7 = (double)iVar5 + __LC2;
        do {
          auVar10._0_8_ = (double)iVar6 + __LC2;
          plVar4 = (long *)*param_2;
          local_58 = _LC1;
          dStack_50 = 0.0;
          auVar10._8_8_ = dVar7;
          auVar10 = divpd(auVar10,*param_3);
          dVar8 = auVar10._0_8_ - *param_4;
          dVar11 = auVar10._8_8_ - param_4[1];
          if (plVar4 != (long *)param_2[1]) {
            this = (EdgeHolder *)0x0;
            do {
              this_00 = (EdgeHolder *)*plVar4;
              if (this_00 != (EdgeHolder *)plVar4[1]) {
                do {
                  plVar3 = (long *)msdfgen::EdgeHolder::operator->(this_00);
                  dVar12 = dVar11;
                  dVar9 = (double)(**(code **)(*plVar3 + 0x40))(dVar8,plVar3,local_70);
                  if (((double)((ulong)dVar9 & __LC3) < (double)((ulong)local_58 & __LC3)) ||
                     (((double)((ulong)dVar9 & __LC3) == (double)((ulong)local_58 & __LC3) &&
                      (dVar12 < dStack_50)))) {
                    this = this_00;
                    local_58 = dVar9;
                    dStack_50 = dVar12;
                  }
                  this_00 = this_00 + 8;
                } while ((EdgeHolder *)plVar4[1] != this_00);
              }
              plVar4 = plVar4 + 3;
            } while ((long *)param_2[1] != plVar4);
            if (this != (EdgeHolder *)0x0) {
              plVar4 = (long *)msdfgen::EdgeHolder::operator->(this);
              (**(code **)(*plVar4 + 0x48))(dVar8,dVar11,plVar4,&local_58);
            }
          }
          dVar8 = (double)msdfgen::DistanceMapping::operator()(local_68,local_58);
          lVar1 = param_1[1];
          iVar2 = local_80 * (int)lVar1 + iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(*param_1 + (long)iVar2 * 4) = (float)dVar8;
        } while (iVar6 < (int)lVar1);
        iVar6 = *(int *)((long)param_1 + 0xc);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generatePseudoSDF_legacy(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&) */

void msdfgen::generatePseudoSDF_legacy(void)

{
  generatePSDF_legacy();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::generateMSDF_legacy(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::ErrorCorrectionConfig)
    */

void msdfgen::generateMSDF_legacy
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,long *param_2,
               Vector2 *param_5,Vector2 *param_6,undefined8 param_7,undefined8 param_8,uint param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  EdgeHolder *this;
  int iVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined4 uStack000000000000000c;
  undefined8 local_c0;
  DistanceMapping local_b8 [16];
  double local_a8;
  double dStack_a0;
  EdgeHolder *local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  EdgeHolder *local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  EdgeHolder *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping();
  iVar6 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar6) {
    iVar2 = 0;
    do {
      iVar7 = iVar2;
      if ((char)param_2[3] != '\0') {
        iVar7 = (iVar6 - iVar2) + -1;
      }
      if (0 < (int)param_1[1]) {
        iVar6 = 0;
        dVar8 = (double)iVar2 + __LC2;
        do {
          plVar5 = (long *)*param_2;
          local_58 = (EdgeHolder *)0x0;
          auVar11._0_8_ = (double)iVar6 + __LC2;
          local_78 = (EdgeHolder *)0x0;
          local_98 = (EdgeHolder *)0x0;
          local_50 = 0;
          auVar11._8_8_ = dVar8;
          auVar11 = divpd(auVar11,*(undefined1 (*) [16])param_5);
          local_70 = 0;
          local_90 = 0;
          local_a8 = _LC1;
          dStack_a0 = 0.0;
          local_88 = _LC1;
          dStack_80 = 0.0;
          local_68 = _LC1;
          dStack_60 = 0.0;
          dVar9 = auVar11._0_8_ - *(double *)param_6;
          dVar12 = auVar11._8_8_ - *(double *)(param_6 + 8);
          if (plVar5 != (long *)param_2[1]) {
            do {
              this = (EdgeHolder *)*plVar5;
              if (this != (EdgeHolder *)plVar5[1]) {
                do {
                  plVar3 = (long *)msdfgen::EdgeHolder::operator->(this);
                  dVar13 = dVar12;
                  dVar10 = (double)(**(code **)(*plVar3 + 0x40))(dVar9,plVar3,&local_c0);
                  lVar4 = msdfgen::EdgeHolder::operator->(this);
                  if ((*(byte *)(lVar4 + 8) & 1) != 0) {
                    if (((double)((ulong)dVar10 & __LC3) < (double)((ulong)local_a8 & __LC3)) ||
                       (((double)((ulong)dVar10 & __LC3) == (double)((ulong)local_a8 & __LC3) &&
                        (dVar13 < dStack_a0)))) {
                      local_90 = local_c0;
                      local_a8 = dVar10;
                      dStack_a0 = dVar13;
                      local_98 = this;
                    }
                  }
                  lVar4 = msdfgen::EdgeHolder::operator->(this);
                  if ((*(byte *)(lVar4 + 8) & 2) != 0) {
                    if (((double)((ulong)dVar10 & __LC3) < (double)((ulong)local_88 & __LC3)) ||
                       (((double)((ulong)dVar10 & __LC3) == (double)((ulong)local_88 & __LC3) &&
                        (dVar13 < dStack_80)))) {
                      local_70 = local_c0;
                      local_88 = dVar10;
                      dStack_80 = dVar13;
                      local_78 = this;
                    }
                  }
                  lVar4 = msdfgen::EdgeHolder::operator->(this);
                  if ((*(byte *)(lVar4 + 8) & 4) != 0) {
                    if (((double)((ulong)dVar10 & __LC3) < (double)((ulong)local_68 & __LC3)) ||
                       (((double)((ulong)dVar10 & __LC3) == (double)((ulong)local_68 & __LC3) &&
                        (dVar13 < dStack_60)))) {
                      local_50 = local_c0;
                      local_68 = dVar10;
                      dStack_60 = dVar13;
                      local_58 = this;
                    }
                  }
                  this = this + 8;
                } while ((EdgeHolder *)plVar5[1] != this);
              }
              plVar5 = plVar5 + 3;
            } while ((long *)param_2[1] != plVar5);
            if (local_98 != (EdgeHolder *)0x0) {
              plVar5 = (long *)msdfgen::EdgeHolder::operator->(local_98);
              (**(code **)(*plVar5 + 0x48))(dVar9,dVar12,local_90,plVar5,&local_a8);
            }
            if (local_78 != (EdgeHolder *)0x0) {
              plVar5 = (long *)msdfgen::EdgeHolder::operator->(local_78);
              (**(code **)(*plVar5 + 0x48))(dVar9,dVar12,local_70,plVar5,(Projection *)&local_88);
            }
            if (local_58 != (EdgeHolder *)0x0) {
              plVar5 = (long *)msdfgen::EdgeHolder::operator->(local_58);
              (**(code **)(*plVar5 + 0x48))(dVar9,dVar12,local_50,plVar5,&local_68);
            }
          }
          dVar9 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_a8);
          *(float *)(*param_1 + (long)(((int)param_1[1] * iVar7 + iVar6) * 3) * 4) = (float)dVar9;
          dVar9 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_88);
          *(float *)(*param_1 + 4 + (long)(((int)param_1[1] * iVar7 + iVar6) * 3) * 4) =
               (float)dVar9;
          dVar9 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_68);
          lVar4 = param_1[1];
          iVar1 = iVar7 * (int)lVar4 + iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(*param_1 + 8 + (long)(iVar1 * 3) * 4) = (float)dVar9;
        } while (iVar6 < (int)lVar4);
        iVar6 = *(int *)((long)param_1 + 0xc);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6);
  }
  uStack000000000000000c = 0;
  dStack_60 = (double)(ulong)param_9;
  local_68 = (double)((ulong)local_68 & 0xffffffffffffff00);
  local_58 = (EdgeHolder *)param_10;
  local_50 = param_11;
  uStack_48 = param_12;
  msdfgen::Projection::Projection((Projection *)&local_88,param_5,param_6);
  msdfgen::msdfErrorCorrection
            (param_1_00,param_2_00,param_1,param_2,(Projection *)&local_88,&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::generateMTSDF_legacy(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::ErrorCorrectionConfig)
    */

void msdfgen::generateMTSDF_legacy
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,long *param_2,
               Vector2 *param_5,Vector2 *param_6,undefined8 param_7,undefined8 param_8,uint param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  EdgeHolder *this;
  int iVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack000000000000000c;
  double local_150;
  double local_138;
  undefined8 local_c0;
  DistanceMapping local_b8 [16];
  double local_a8;
  double dStack_a0;
  EdgeHolder *local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  EdgeHolder *local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  EdgeHolder *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping(local_b8);
  iVar9 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar9) {
    iVar5 = 0;
    do {
      iVar1 = iVar5;
      if ((char)param_2[3] != '\0') {
        iVar1 = (iVar9 - iVar5) + -1;
      }
      if (0 < (int)param_1[1]) {
        dVar10 = (double)iVar5 + __LC2;
        iVar9 = 0;
        do {
          plVar8 = (long *)*param_2;
          local_58 = (EdgeHolder *)0x0;
          auVar13._0_8_ = (double)iVar9 + __LC2;
          local_78 = (EdgeHolder *)0x0;
          local_98 = (EdgeHolder *)0x0;
          local_50 = 0;
          auVar13._8_8_ = dVar10;
          local_a8 = _LC1;
          dStack_a0 = 0.0;
          auVar13 = divpd(auVar13,*(undefined1 (*) [16])param_5);
          local_70 = 0;
          local_90 = 0;
          local_88 = _LC1;
          dStack_80 = 0.0;
          local_68 = _LC1;
          dStack_60 = 0.0;
          dVar11 = auVar13._0_8_ - *(double *)param_6;
          dVar14 = auVar13._8_8_ - *(double *)(param_6 + 8);
          if (plVar8 == (long *)param_2[1]) {
            local_150 = _LC1;
          }
          else {
            local_138 = 0.0;
            local_150 = _LC1;
            do {
              this = (EdgeHolder *)*plVar8;
              if (this != (EdgeHolder *)plVar8[1]) {
                do {
                  plVar7 = (long *)msdfgen::EdgeHolder::operator->(this);
                  dVar15 = dVar14;
                  dVar12 = (double)(**(code **)(*plVar7 + 0x40))(dVar11,plVar7,&local_c0);
                  dVar16 = (double)((ulong)dVar12 & __LC3);
                  dVar2 = dVar12;
                  dVar3 = dVar15;
                  if ((((double)((ulong)local_150 & __LC3) <= dVar16) &&
                      (dVar2 = local_150, dVar3 = local_138,
                      (double)((ulong)local_150 & __LC3) == dVar16)) && (dVar15 < local_138)) {
                    dVar2 = dVar12;
                    dVar3 = dVar15;
                  }
                  local_138 = dVar3;
                  local_150 = dVar2;
                  lVar6 = msdfgen::EdgeHolder::operator->(this);
                  if (((*(byte *)(lVar6 + 8) & 1) != 0) &&
                     ((dVar16 < (double)((ulong)local_a8 & __LC3) ||
                      ((dVar16 == (double)((ulong)local_a8 & __LC3) && (dVar15 < dStack_a0)))))) {
                    local_90 = local_c0;
                    local_a8 = dVar12;
                    dStack_a0 = dVar15;
                    local_98 = this;
                  }
                  lVar6 = msdfgen::EdgeHolder::operator->(this);
                  if (((*(byte *)(lVar6 + 8) & 2) != 0) &&
                     ((dVar16 < (double)((ulong)local_88 & __LC3) ||
                      ((dVar16 == (double)((ulong)local_88 & __LC3) && (dVar15 < dStack_80)))))) {
                    local_70 = local_c0;
                    local_88 = dVar12;
                    dStack_80 = dVar15;
                    local_78 = this;
                  }
                  lVar6 = msdfgen::EdgeHolder::operator->(this);
                  if (((*(byte *)(lVar6 + 8) & 4) != 0) &&
                     ((dVar16 < (double)((ulong)local_68 & __LC3) ||
                      ((dVar16 == (double)((ulong)local_68 & __LC3) && (dVar15 < dStack_60)))))) {
                    local_50 = local_c0;
                    local_68 = dVar12;
                    dStack_60 = dVar15;
                    local_58 = this;
                  }
                  this = this + 8;
                } while ((EdgeHolder *)plVar8[1] != this);
              }
              plVar8 = plVar8 + 3;
            } while ((long *)param_2[1] != plVar8);
            if (local_98 != (EdgeHolder *)0x0) {
              plVar8 = (long *)msdfgen::EdgeHolder::operator->(local_98);
              (**(code **)(*plVar8 + 0x48))(dVar11,dVar14,local_90,plVar8,&local_a8);
            }
            if (local_78 != (EdgeHolder *)0x0) {
              plVar8 = (long *)msdfgen::EdgeHolder::operator->(local_78);
              (**(code **)(*plVar8 + 0x48))(dVar11,dVar14,local_70,plVar8,(Projection *)&local_88);
            }
            if (local_58 != (EdgeHolder *)0x0) {
              plVar8 = (long *)msdfgen::EdgeHolder::operator->(local_58);
              (**(code **)(*plVar8 + 0x48))(dVar11,dVar14,local_50,plVar8,&local_68);
            }
          }
          dVar11 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_a8);
          *(float *)(*param_1 + (long)(((int)param_1[1] * iVar1 + iVar9) * 4) * 4) = (float)dVar11;
          dVar11 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_88);
          *(float *)(*param_1 + 4 + (long)(((int)param_1[1] * iVar1 + iVar9) * 4) * 4) =
               (float)dVar11;
          dVar11 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_68);
          *(float *)(*param_1 + 8 + (long)(((int)param_1[1] * iVar1 + iVar9) * 4) * 4) =
               (float)dVar11;
          dVar11 = (double)msdfgen::DistanceMapping::operator()(local_b8,local_150);
          lVar6 = param_1[1];
          iVar4 = iVar1 * (int)lVar6 + iVar9;
          iVar9 = iVar9 + 1;
          *(float *)(*param_1 + 0xc + (long)(iVar4 * 4) * 4) = (float)dVar11;
        } while (iVar9 < (int)lVar6);
        iVar9 = *(int *)((long)param_1 + 0xc);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar9);
  }
  uStack000000000000000c = 0;
  dStack_60 = (double)(ulong)param_9;
  local_68 = (double)((ulong)local_68 & 0xffffffffffffff00);
  local_58 = (EdgeHolder *)param_10;
  local_50 = param_11;
  uStack_48 = param_12;
  msdfgen::Projection::Projection((Projection *)&local_88,param_5,param_6);
  msdfgen::msdfErrorCorrection
            (param_1_00,param_2_00,param_1,param_2,(Projection *)&local_88,&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generateSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::SDFTransformation const&, msdfgen::GeneratorConfig const&) */

void msdfgen::generateSDF
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               GeneratorConfig *param_4)

{
  if (*param_4 != (GeneratorConfig)0x0) {
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,param_3);
    return;
  }
  generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>>
            ((BitmapRefType *)param_1,param_2,param_3);
  return;
}



/* msdfgen::generateSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::GeneratorConfig const&) */

void msdfgen::generateSDF(BitmapRefType *param_1,Shape *param_2,undefined8 *param_3,char *param_4)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 == '\0') {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    local_38 = local_68;
    uStack_30 = uStack_60;
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,(SDFTransformation *)&local_58);
  }
  else {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    local_38 = local_68;
    uStack_30 = uStack_60;
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>>
              (param_1,param_2,(SDFTransformation *)&local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generateSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&, msdfgen::Range,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, bool) */

void __thiscall
msdfgen::generateSDF
          (undefined8 param_1_00,undefined8 param_2_00,msdfgen *this,undefined8 param_1,
          Vector2 *param_2,Vector2 *param_6,undefined1 param_7)

{
  long in_FS_OFFSET;
  undefined1 local_49;
  Projection local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = param_7;
  msdfgen::Projection::Projection(local_48,param_2,param_6);
  generateSDF(param_1_00,param_2_00,this,param_1,local_48,&local_49);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generatePSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::SDFTransformation const&, msdfgen::GeneratorConfig const&) */

void msdfgen::generatePSDF
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               GeneratorConfig *param_4)

{
  if (*param_4 != (GeneratorConfig)0x0) {
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,param_3);
    return;
  }
  generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
            ((BitmapRefType *)param_1,param_2,param_3);
  return;
}



/* msdfgen::generatePSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::GeneratorConfig const&) */

void msdfgen::generatePSDF(BitmapRefType *param_1,Shape *param_2,undefined8 *param_3,char *param_4)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 == '\0') {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    local_38 = local_68;
    uStack_30 = uStack_60;
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,(SDFTransformation *)&local_58);
  }
  else {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    local_38 = local_68;
    uStack_30 = uStack_60;
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
              (param_1,param_2,(SDFTransformation *)&local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generatePSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&, msdfgen::Range,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, bool) */

void __thiscall
msdfgen::generatePSDF
          (undefined8 param_1_00,undefined8 param_2_00,msdfgen *this,undefined8 param_1,
          Vector2 *param_2,Vector2 *param_6,undefined1 param_7)

{
  long in_FS_OFFSET;
  undefined1 local_49;
  Projection local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = param_7;
  msdfgen::Projection::Projection(local_48,param_2,param_6);
  generatePSDF(param_1_00,param_2_00,this,param_1,local_48,&local_49);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generatePseudoSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&, bool) */

void __thiscall
msdfgen::generatePseudoSDF
          (undefined8 param_1_00,undefined8 param_2_00,msdfgen *this,undefined8 param_1,
          Vector2 *param_2,Vector2 *param_6,undefined1 param_7)

{
  long in_FS_OFFSET;
  undefined1 local_49;
  Projection local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = param_7;
  msdfgen::Projection::Projection(local_48,param_2,param_6);
  generatePSDF(param_1_00,param_2_00,this,param_1,local_48,&local_49);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generatePseudoSDF(msdfgen::BitmapRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::GeneratorConfig const&) */

void msdfgen::generatePseudoSDF
               (BitmapRefType *param_1,Shape *param_2,undefined8 *param_3,char *param_4)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_78);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  local_48 = local_78;
  uStack_40 = uStack_70;
  if (*param_4 == '\0') {
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,(SDFTransformation *)&local_68);
  }
  else {
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
              (param_1,param_2,(SDFTransformation *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generateMSDF(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::SDFTransformation const&, msdfgen::MSDFGeneratorConfig const&) */

void msdfgen::generateMSDF
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               MSDFGeneratorConfig *param_4)

{
  if (*param_4 == (MSDFGeneratorConfig)0x0) {
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,param_3);
  }
  else {
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,param_3);
  }
  msdfgen::msdfErrorCorrection(param_1,param_2,param_3,param_4);
  return;
}



/* msdfgen::generateMSDF(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::MSDFGeneratorConfig const&) */

void __thiscall
msdfgen::generateMSDF
          (DistanceMapping *param_1_00,undefined8 param_2_00,msdfgen *this,Shape *param_1,
          undefined8 *param_2,MSDFGeneratorConfig *param_3)

{
  long in_FS_OFFSET;
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
  if (*param_3 == (MSDFGeneratorConfig)0x0) {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_88);
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = local_88;
    uStack_50 = uStack_80;
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>>
              ((BitmapRefType *)this,param_1,(SDFTransformation *)&local_78);
  }
  else {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_88);
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = local_88;
    uStack_50 = uStack_80;
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>
              ((BitmapRefType *)this,param_1,(SDFTransformation *)&local_78);
  }
  msdfgen::DistanceMapping::DistanceMapping(param_1_00,param_2_00,(DistanceMapping *)&local_88);
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  local_58 = local_88;
  uStack_50 = uStack_80;
  msdfgen::msdfErrorCorrection((BitmapRef *)this,param_1,(SDFTransformation *)&local_78,param_3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generateMSDF(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&, msdfgen::Range,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::ErrorCorrectionConfig const&, bool) */

void __thiscall
msdfgen::generateMSDF
          (msdfgen *param_1_00,undefined8 param_2_00,msdfgen *this,undefined8 param_1,
          Vector2 *param_2,Vector2 *param_6,undefined8 *param_7,undefined1 param_8)

{
  long in_FS_OFFSET;
  Projection local_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_40 = *param_7;
  uStack_38 = param_7[1];
  local_30 = param_7[2];
  uStack_28 = param_7[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = param_8;
  msdfgen::Projection::Projection(local_68,param_2,param_6);
  generateMSDF(param_1_00,param_2_00,this,param_1,local_68,local_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generateMTSDF(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::SDFTransformation const&, msdfgen::MSDFGeneratorConfig const&) */

void msdfgen::generateMTSDF
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               MSDFGeneratorConfig *param_4)

{
  if (*param_4 == (MSDFGeneratorConfig)0x0) {
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,param_3);
  }
  else {
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
              ((BitmapRefType *)param_1,param_2,param_3);
  }
  msdfgen::msdfErrorCorrection(param_1,param_2,param_3,param_4);
  return;
}



/* msdfgen::generateMTSDF(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::MSDFGeneratorConfig const&) */

void __thiscall
msdfgen::generateMTSDF
          (DistanceMapping *param_1_00,undefined8 param_2_00,msdfgen *this,Shape *param_1,
          undefined8 *param_2,MSDFGeneratorConfig *param_3)

{
  long in_FS_OFFSET;
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
  if (*param_3 == (MSDFGeneratorConfig)0x0) {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_88);
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = local_88;
    uStack_50 = uStack_80;
    generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
              ((BitmapRefType *)this,param_1,(SDFTransformation *)&local_78);
  }
  else {
    msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_88);
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = local_88;
    uStack_50 = uStack_80;
    generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
              ((BitmapRefType *)this,param_1,(SDFTransformation *)&local_78);
  }
  msdfgen::DistanceMapping::DistanceMapping(param_1_00,param_2_00,(DistanceMapping *)&local_88);
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  local_58 = local_88;
  uStack_50 = uStack_80;
  msdfgen::msdfErrorCorrection((BitmapRef *)this,param_1,(SDFTransformation *)&local_78,param_3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::generateMTSDF(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Range, msdfgen::Vector2 const&, msdfgen::Vector2 const&, msdfgen::ErrorCorrectionConfig
   const&, bool) */

void __thiscall
msdfgen::generateMTSDF
          (msdfgen *param_1_00,undefined8 param_2_00,msdfgen *this,undefined8 param_1,
          Vector2 *param_2,Vector2 *param_6,undefined8 *param_7,undefined1 param_8)

{
  long in_FS_OFFSET;
  Projection local_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_40 = *param_7;
  uStack_38 = param_7[1];
  local_30 = param_7[2];
  uStack_28 = param_7[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = param_8;
  msdfgen::Projection::Projection(local_68,param_2,param_6);
  generateMTSDF(param_1_00,param_2_00,this,param_1,local_68,local_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

void msdfgen::
     ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>>::
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
  
  msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::reset(param_1 + 8);
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
        if ((long *)plVar1[1] == plVar10) goto LAB_00101adb;
      }
      pEVar2 = (EdgeCache *)
               msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::edgeSelector
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
          pEVar7 = pEVar6 + 0x18;
          msdfgen::TrueDistanceSelector::addEdge(pEVar2,pEVar6,pEVar3,pEVar5);
          pEVar6 = pEVar7;
          pEVar3 = pEVar5;
          pEVar8 = pEVar9;
        } while ((EdgeHolder *)plVar10[1] != pEVar9);
      }
      plVar10 = plVar10 + 3;
      plVar1 = *(long **)param_1;
    } while ((long *)plVar1[1] != plVar10);
  }
LAB_00101adb:
  msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::distance();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::
     generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  EdgeCache *this;
  EdgeCache *pEVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  int local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  Shape *local_a8;
  Shape local_a0 [16];
  void *local_90;
  long local_80;
  void *local_78;
  long local_68;
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_d8 = *(undefined8 *)(param_3 + 0x20);
  uStack_d0 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_2;
  msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::OverlappingContourCombiner
            (local_a0);
  iVar4 = msdfgen::Shape::edgeCount();
  uVar8 = (ulong)iVar4;
  if (uVar8 < 0x555555555555556) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar8 == 0) {
      local_60._0_8_ = 0;
      pEVar9 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar8 * 0x18);
      pEVar9 = (EdgeCache *)(local_60._8_8_ + uVar8 * 0x18);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar9;
      do {
        msdfgen::TrueDistanceSelector::EdgeCache::EdgeCache(this);
        uVar8 = uVar8 - 1;
        this = this + 0x18;
      } while (uVar8 != 0);
    }
    iVar4 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar9;
    if (0 < iVar4) {
      local_e4 = 0;
      iVar5 = *(int *)(param_1 + 8);
      bVar3 = false;
      do {
        iVar7 = local_e4;
        if (param_2[0x18] != (Shape)0x0) {
          iVar7 = (iVar4 - local_e4) + -1;
        }
        if (0 < iVar5) {
          iVar4 = 0;
          dVar10 = (double)local_e4 + __LC2;
          do {
            iVar6 = (iVar5 - iVar4) + -1;
            if (!bVar3) {
              iVar6 = iVar4;
            }
            iVar4 = iVar4 + 1;
            local_b8 = (double)iVar6 + __LC2;
            dStack_b0 = dVar10;
            local_c8 = msdfgen::Projection::unproject((Vector2 *)param_3);
            dVar11 = (double)ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>>
                             ::distance((Vector2 *)&local_a8);
            iVar1 = *(int *)(param_1 + 8);
            lVar2 = *(long *)param_1;
            dVar11 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_d8,dVar11);
            iVar5 = *(int *)(param_1 + 8);
            *(float *)(lVar2 + (long)(iVar1 * iVar7 + iVar6) * 4) = (float)dVar11;
          } while (iVar4 < iVar5);
          iVar4 = *(int *)(param_1 + 0xc);
        }
        local_e4 = local_e4 + 1;
        bVar3 = (bool)(bVar3 ^ 1);
      } while (local_e4 < iVar4);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_78 != (void *)0x0) {
      operator_delete(local_78,local_68 - (long)local_78);
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90,local_80 - (long)local_90);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

void msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>>::
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
  
  msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::reset(param_1 + 8);
  pEVar7 = *(EdgeSegment **)(param_1 + 0x28);
  if (*(EdgeSegment **)(param_1 + 0x30) == pEVar7) {
    pEVar7 = (EdgeSegment *)0x0;
  }
  plVar1 = *(long **)param_1;
  plVar10 = (long *)*plVar1;
  if (plVar10 != (long *)plVar1[1]) {
    do {
      while (*plVar10 == plVar10[1]) {
        plVar10 = plVar10 + 3;
        if ((long *)plVar1[1] == plVar10) goto LAB_00101f0b;
      }
      pEVar2 = (EdgeCache *)
               msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::edgeSelector
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
          pEVar7 = pEVar6 + 0x18;
          msdfgen::TrueDistanceSelector::addEdge(pEVar2,pEVar6,pEVar3,pEVar5);
          pEVar6 = pEVar7;
          pEVar3 = pEVar5;
          pEVar8 = pEVar9;
        } while ((EdgeHolder *)plVar10[1] != pEVar9);
      }
      plVar10 = plVar10 + 3;
      plVar1 = *(long **)param_1;
    } while ((long *)plVar1[1] != plVar10);
  }
LAB_00101f0b:
  msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::distance();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void msdfgen::generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  EdgeCache *this;
  EdgeCache *pEVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  int local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_98;
  double dStack_90;
  Shape *local_88;
  Shape local_80 [32];
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_b8 = *(undefined8 *)(param_3 + 0x20);
  uStack_b0 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::SimpleContourCombiner(local_80);
  iVar4 = msdfgen::Shape::edgeCount();
  uVar8 = (ulong)iVar4;
  if (uVar8 < 0x555555555555556) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar8 == 0) {
      local_60._0_8_ = 0;
      pEVar9 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar8 * 0x18);
      pEVar9 = (EdgeCache *)(local_60._8_8_ + uVar8 * 0x18);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar9;
      do {
        msdfgen::TrueDistanceSelector::EdgeCache::EdgeCache(this);
        uVar8 = uVar8 - 1;
        this = this + 0x18;
      } while (uVar8 != 0);
    }
    iVar4 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar9;
    if (0 < iVar4) {
      local_c4 = 0;
      iVar5 = *(int *)(param_1 + 8);
      bVar3 = false;
      do {
        iVar7 = local_c4;
        if (param_2[0x18] != (Shape)0x0) {
          iVar7 = (iVar4 - local_c4) + -1;
        }
        if (0 < iVar5) {
          iVar4 = 0;
          dVar10 = (double)local_c4 + __LC2;
          do {
            iVar6 = (iVar5 - iVar4) + -1;
            if (!bVar3) {
              iVar6 = iVar4;
            }
            iVar4 = iVar4 + 1;
            local_98 = (double)iVar6 + __LC2;
            dStack_90 = dVar10;
            local_a8 = msdfgen::Projection::unproject((Vector2 *)param_3);
            dVar11 = (double)ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>>
                             ::distance((Vector2 *)&local_88);
            iVar1 = *(int *)(param_1 + 8);
            lVar2 = *(long *)param_1;
            dVar11 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_b8,dVar11);
            iVar5 = *(int *)(param_1 + 8);
            *(float *)(lVar2 + (long)(iVar1 * iVar7 + iVar6) * 4) = (float)dVar11;
          } while (iVar4 < iVar5);
          iVar4 = *(int *)(param_1 + 0xc);
        }
        local_c4 = local_c4 + 1;
        bVar3 = (bool)(bVar3 ^ 1);
      } while (local_c4 < iVar4);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if ((long *)plVar1[1] == plVar10) goto LAB_001022cb;
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
LAB_001022cb:
  msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::
     generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  EdgeCache *this;
  EdgeCache *pEVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  int local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  Shape *local_a8;
  Shape local_a0 [16];
  void *local_90;
  long local_80;
  void *local_78;
  long local_68;
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_d8 = *(undefined8 *)(param_3 + 0x20);
  uStack_d0 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_2;
  msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::
  OverlappingContourCombiner(local_a0);
  iVar4 = msdfgen::Shape::edgeCount();
  uVar8 = (ulong)iVar4;
  if (uVar8 < 0x24924924924924a) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar8 == 0) {
      local_60._0_8_ = 0;
      pEVar9 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar8 * 0x38);
      pEVar9 = (EdgeCache *)(local_60._8_8_ + uVar8 * 0x38);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar9;
      do {
        msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this);
        uVar8 = uVar8 - 1;
        this = this + 0x38;
      } while (uVar8 != 0);
    }
    iVar4 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar9;
    if (0 < iVar4) {
      local_e4 = 0;
      iVar5 = *(int *)(param_1 + 8);
      bVar3 = false;
      do {
        iVar7 = local_e4;
        if (param_2[0x18] != (Shape)0x0) {
          iVar7 = (iVar4 - local_e4) + -1;
        }
        if (0 < iVar5) {
          iVar4 = 0;
          dVar10 = (double)local_e4 + __LC2;
          do {
            iVar6 = (iVar5 - iVar4) + -1;
            if (!bVar3) {
              iVar6 = iVar4;
            }
            iVar4 = iVar4 + 1;
            local_b8 = (double)iVar6 + __LC2;
            dStack_b0 = dVar10;
            local_c8 = msdfgen::Projection::unproject((Vector2 *)param_3);
            dVar11 = (double)ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                             ::distance((Vector2 *)&local_a8);
            iVar1 = *(int *)(param_1 + 8);
            lVar2 = *(long *)param_1;
            dVar11 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_d8,dVar11);
            iVar5 = *(int *)(param_1 + 8);
            *(float *)(lVar2 + (long)(iVar1 * iVar7 + iVar6) * 4) = (float)dVar11;
          } while (iVar4 < iVar5);
          iVar4 = *(int *)(param_1 + 0xc);
        }
        local_e4 = local_e4 + 1;
        bVar3 = (bool)(bVar3 ^ 1);
      } while (local_e4 < iVar4);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_78 != (void *)0x0) {
      operator_delete(local_78,local_68 - (long)local_78);
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90,local_80 - (long)local_90);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if ((long *)plVar1[1] == plVar10) goto LAB_001026cb;
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
LAB_001026cb:
  msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::
     generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  EdgeCache *this;
  EdgeCache *pEVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  int local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  Shape *local_a8;
  Shape local_a0 [64];
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_d8 = *(undefined8 *)(param_3 + 0x20);
  uStack_d0 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_2;
  msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::SimpleContourCombiner
            (local_a0);
  iVar4 = msdfgen::Shape::edgeCount();
  uVar8 = (ulong)iVar4;
  if (uVar8 < 0x24924924924924a) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar8 == 0) {
      local_60._0_8_ = 0;
      pEVar9 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar8 * 0x38);
      pEVar9 = (EdgeCache *)(local_60._8_8_ + uVar8 * 0x38);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar9;
      do {
        msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this);
        uVar8 = uVar8 - 1;
        this = this + 0x38;
      } while (uVar8 != 0);
    }
    iVar4 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar9;
    if (0 < iVar4) {
      local_e4 = 0;
      iVar5 = *(int *)(param_1 + 8);
      bVar3 = false;
      do {
        iVar7 = local_e4;
        if (param_2[0x18] != (Shape)0x0) {
          iVar7 = (iVar4 - local_e4) + -1;
        }
        if (0 < iVar5) {
          iVar4 = 0;
          dVar10 = (double)local_e4 + __LC2;
          do {
            iVar6 = (iVar5 - iVar4) + -1;
            if (!bVar3) {
              iVar6 = iVar4;
            }
            iVar4 = iVar4 + 1;
            local_b8 = (double)iVar6 + __LC2;
            dStack_b0 = dVar10;
            local_c8 = msdfgen::Projection::unproject((Vector2 *)param_3);
            dVar11 = (double)ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>>
                             ::distance((Vector2 *)&local_a8);
            iVar1 = *(int *)(param_1 + 8);
            lVar2 = *(long *)param_1;
            dVar11 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_d8,dVar11);
            iVar5 = *(int *)(param_1 + 8);
            *(float *)(lVar2 + (long)(iVar1 * iVar7 + iVar6) * 4) = (float)dVar11;
          } while (iVar4 < iVar5);
          iVar4 = *(int *)(param_1 + 0xc);
        }
        local_e4 = local_e4 + 1;
        bVar3 = (bool)(bVar3 ^ 1);
      } while (local_e4 < iVar4);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>> *
__thiscall
msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>::
distance(ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>
         *this,Vector2 *param_1)

{
  long lVar1;
  long *plVar2;
  EdgeCache *pEVar3;
  EdgeSegment *pEVar4;
  EdgeSegment *pEVar5;
  EdgeSegment *pEVar6;
  EdgeSegment *pEVar7;
  EdgeSegment *pEVar8;
  EdgeHolder *pEVar9;
  EdgeHolder *pEVar10;
  long *plVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::reset(param_1 + 8);
  pEVar8 = *(EdgeSegment **)(param_1 + 0x48);
  if (*(EdgeSegment **)(param_1 + 0x50) == pEVar8) {
    pEVar8 = (EdgeSegment *)0x0;
  }
  plVar2 = *(long **)param_1;
  plVar11 = (long *)*plVar2;
  if (plVar11 != (long *)plVar2[1]) {
    do {
      while (*plVar11 == plVar11[1]) {
        plVar11 = plVar11 + 3;
        if ((long *)plVar2[1] == plVar11) goto LAB_00102aa2;
      }
      pEVar3 = (EdgeCache *)
               msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::edgeSelector
                         ((int)(param_1 + 8));
      pEVar9 = (EdgeHolder *)*plVar11;
      if (8 < (ulong)(plVar11[1] - *plVar11)) {
        pEVar9 = (EdgeHolder *)(plVar11[1] + -0x10);
      }
      pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
      pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar11[1] + -8));
      pEVar7 = pEVar8;
      pEVar9 = (EdgeHolder *)*plVar11;
      if ((EdgeHolder *)*plVar11 != (EdgeHolder *)plVar11[1]) {
        do {
          pEVar6 = pEVar5;
          pEVar10 = pEVar9 + 8;
          pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
          pEVar8 = pEVar7 + 0x38;
          msdfgen::MultiDistanceSelector::addEdge(pEVar3,pEVar7,pEVar4,pEVar6);
          pEVar7 = pEVar8;
          pEVar4 = pEVar6;
          pEVar9 = pEVar10;
        } while ((EdgeHolder *)plVar11[1] != pEVar10);
      }
      plVar11 = plVar11 + 3;
      plVar2 = *(long **)param_1;
    } while ((long *)plVar2[1] != plVar11);
  }
LAB_00102aa2:
  msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::distance();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::
     generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  EdgeCache *this;
  EdgeCache *pEVar7;
  int iVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  Shape *local_a8;
  Shape local_a0 [16];
  void *local_90;
  long local_80;
  void *local_78;
  long local_68;
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_e8 = *(undefined8 *)(param_3 + 0x20);
  uStack_e0 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_2;
  msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::OverlappingContourCombiner
            (local_a0);
  iVar3 = msdfgen::Shape::edgeCount();
  uVar6 = (ulong)iVar3;
  if (uVar6 < 0x24924924924924a) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar6 == 0) {
      local_60._0_8_ = 0;
      pEVar7 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar6 * 0x38);
      pEVar7 = (EdgeCache *)(local_60._8_8_ + uVar6 * 0x38);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar7;
      do {
        msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this);
        uVar6 = uVar6 - 1;
        this = this + 0x38;
      } while (uVar6 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar7;
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = 0;
      bVar2 = false;
      do {
        iVar8 = iVar5;
        if (param_2[0x18] != (Shape)0x0) {
          iVar8 = (iVar3 - iVar5) + -1;
        }
        if (0 < iVar4) {
          dVar9 = (double)iVar5 + __LC2;
          iVar3 = 0;
          do {
            iVar4 = (iVar4 - iVar3) + -1;
            if (!bVar2) {
              iVar4 = iVar3;
            }
            iVar3 = iVar3 + 1;
            local_c8 = (double)iVar4 + __LC2;
            dStack_c0 = dVar9;
            local_d8 = msdfgen::Projection::unproject((Vector2 *)param_3);
            ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>
            ::distance((ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>>
                        *)&local_c8,(Vector2 *)&local_a8);
            pfVar1 = (float *)(*(long *)param_1 +
                              (long)((iVar8 * *(int *)(param_1 + 8) + iVar4) * 3) * 4);
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,local_c8);
            *pfVar1 = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,dStack_c0);
            pfVar1[1] = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,local_b8);
            iVar4 = *(int *)(param_1 + 8);
            pfVar1[2] = (float)dVar10;
          } while (iVar3 < iVar4);
          iVar3 = *(int *)(param_1 + 0xc);
        }
        iVar5 = iVar5 + 1;
        bVar2 = (bool)(bVar2 ^ 1);
      } while (iVar5 < iVar3);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_78 != (void *)0x0) {
      operator_delete(local_78,local_68 - (long)local_78);
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90,local_80 - (long)local_90);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>> * __thiscall
msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>>::
distance(ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>> *this,
        Vector2 *param_1)

{
  long lVar1;
  long *plVar2;
  EdgeCache *pEVar3;
  EdgeSegment *pEVar4;
  EdgeSegment *pEVar5;
  EdgeSegment *pEVar6;
  EdgeSegment *pEVar7;
  EdgeSegment *pEVar8;
  EdgeHolder *pEVar9;
  EdgeHolder *pEVar10;
  long *plVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::reset(param_1 + 8);
  pEVar8 = *(EdgeSegment **)(param_1 + 0xa8);
  if (*(EdgeSegment **)(param_1 + 0xb0) == pEVar8) {
    pEVar8 = (EdgeSegment *)0x0;
  }
  plVar2 = *(long **)param_1;
  plVar11 = (long *)*plVar2;
  if (plVar11 != (long *)plVar2[1]) {
    do {
      while (*plVar11 == plVar11[1]) {
        plVar11 = plVar11 + 3;
        if ((long *)plVar2[1] == plVar11) goto LAB_00102f3a;
      }
      pEVar3 = (EdgeCache *)
               msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::edgeSelector
                         ((int)(param_1 + 8));
      pEVar9 = (EdgeHolder *)*plVar11;
      if (8 < (ulong)(plVar11[1] - *plVar11)) {
        pEVar9 = (EdgeHolder *)(plVar11[1] + -0x10);
      }
      pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
      pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar11[1] + -8));
      pEVar7 = pEVar8;
      pEVar9 = (EdgeHolder *)*plVar11;
      if ((EdgeHolder *)*plVar11 != (EdgeHolder *)plVar11[1]) {
        do {
          pEVar6 = pEVar5;
          pEVar10 = pEVar9 + 8;
          pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
          pEVar8 = pEVar7 + 0x38;
          msdfgen::MultiDistanceSelector::addEdge(pEVar3,pEVar7,pEVar4,pEVar6);
          pEVar7 = pEVar8;
          pEVar4 = pEVar6;
          pEVar9 = pEVar10;
        } while ((EdgeHolder *)plVar11[1] != pEVar10);
      }
      plVar11 = plVar11 + 3;
      plVar2 = *(long **)param_1;
    } while ((long *)plVar2[1] != plVar11);
  }
LAB_00102f3a:
  msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::distance();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  EdgeCache *this;
  EdgeCache *pEVar7;
  int iVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  Shape *local_108;
  Shape local_100 [160];
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_148 = *(undefined8 *)(param_3 + 0x20);
  uStack_140 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = param_2;
  msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::SimpleContourCombiner(local_100);
  iVar3 = msdfgen::Shape::edgeCount();
  uVar6 = (ulong)iVar3;
  if (uVar6 < 0x24924924924924a) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar6 == 0) {
      local_60._0_8_ = 0;
      pEVar7 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar6 * 0x38);
      pEVar7 = (EdgeCache *)(local_60._8_8_ + uVar6 * 0x38);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar7;
      do {
        msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this);
        uVar6 = uVar6 - 1;
        this = this + 0x38;
      } while (uVar6 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar7;
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = 0;
      bVar2 = false;
      do {
        iVar8 = iVar5;
        if (param_2[0x18] != (Shape)0x0) {
          iVar8 = (iVar3 - iVar5) + -1;
        }
        if (0 < iVar4) {
          dVar9 = (double)iVar5 + __LC2;
          iVar3 = 0;
          do {
            iVar4 = (iVar4 - iVar3) + -1;
            if (!bVar2) {
              iVar4 = iVar3;
            }
            iVar3 = iVar3 + 1;
            local_128 = (double)iVar4 + __LC2;
            dStack_120 = dVar9;
            local_138 = msdfgen::Projection::unproject((Vector2 *)param_3);
            ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>>::
            distance((ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>>
                      *)&local_128,(Vector2 *)&local_108);
            pfVar1 = (float *)(*(long *)param_1 +
                              (long)((iVar8 * *(int *)(param_1 + 8) + iVar4) * 3) * 4);
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,local_128);
            *pfVar1 = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,dStack_120);
            pfVar1[1] = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,local_118);
            iVar4 = *(int *)(param_1 + 8);
            pfVar1[2] = (float)dVar10;
          } while (iVar3 < iVar4);
          iVar3 = *(int *)(param_1 + 0xc);
        }
        iVar5 = iVar5 + 1;
        bVar2 = (bool)(bVar2 ^ 1);
      } while (iVar5 < iVar3);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>> *
__thiscall
msdfgen::
ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>::
distance(ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
         *this,Vector2 *param_1)

{
  long lVar1;
  long *plVar2;
  EdgeCache *pEVar3;
  EdgeSegment *pEVar4;
  EdgeSegment *pEVar5;
  EdgeSegment *pEVar6;
  EdgeSegment *pEVar7;
  EdgeSegment *pEVar8;
  EdgeHolder *pEVar9;
  EdgeHolder *pEVar10;
  long *plVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::reset(param_1 + 8);
  pEVar8 = *(EdgeSegment **)(param_1 + 0x48);
  if (*(EdgeSegment **)(param_1 + 0x50) == pEVar8) {
    pEVar8 = (EdgeSegment *)0x0;
  }
  plVar2 = *(long **)param_1;
  plVar11 = (long *)*plVar2;
  if (plVar11 != (long *)plVar2[1]) {
    do {
      while (*plVar11 == plVar11[1]) {
        plVar11 = plVar11 + 3;
        if ((long *)plVar2[1] == plVar11) goto LAB_00103382;
      }
      pEVar3 = (EdgeCache *)
               msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::
               edgeSelector((int)(param_1 + 8));
      pEVar9 = (EdgeHolder *)*plVar11;
      if (8 < (ulong)(plVar11[1] - *plVar11)) {
        pEVar9 = (EdgeHolder *)(plVar11[1] + -0x10);
      }
      pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
      pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar11[1] + -8));
      pEVar7 = pEVar8;
      pEVar9 = (EdgeHolder *)*plVar11;
      if ((EdgeHolder *)*plVar11 != (EdgeHolder *)plVar11[1]) {
        do {
          pEVar6 = pEVar5;
          pEVar10 = pEVar9 + 8;
          pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
          pEVar8 = pEVar7 + 0x38;
          msdfgen::MultiDistanceSelector::addEdge(pEVar3,pEVar7,pEVar4,pEVar6);
          pEVar7 = pEVar8;
          pEVar4 = pEVar6;
          pEVar9 = pEVar10;
        } while ((EdgeHolder *)plVar11[1] != pEVar10);
      }
      plVar11 = plVar11 + 3;
      plVar2 = *(long **)param_1;
    } while ((long *)plVar2[1] != plVar11);
  }
LAB_00103382:
  msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::distance();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::
     generateDistanceField<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  EdgeCache *this;
  int iVar6;
  EdgeCache *pEVar7;
  int iVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  Shape *local_a8;
  Shape local_a0 [16];
  void *local_90;
  long local_80;
  void *local_78;
  long local_68;
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_e8 = *(undefined8 *)(param_3 + 0x20);
  uStack_e0 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_2;
  msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::
  OverlappingContourCombiner(local_a0);
  iVar3 = msdfgen::Shape::edgeCount();
  uVar5 = (ulong)iVar3;
  if (uVar5 < 0x24924924924924a) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar5 == 0) {
      local_60._0_8_ = 0;
      pEVar7 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar5 * 0x38);
      pEVar7 = (EdgeCache *)(local_60._8_8_ + uVar5 * 0x38);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar7;
      do {
        msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this);
        uVar5 = uVar5 - 1;
        this = this + 0x38;
      } while (uVar5 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar7;
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 8);
      iVar6 = 0;
      bVar2 = false;
      do {
        iVar8 = iVar6;
        if (param_2[0x18] != (Shape)0x0) {
          iVar8 = (iVar3 - iVar6) + -1;
        }
        if (0 < iVar4) {
          dVar9 = (double)iVar6 + __LC2;
          iVar3 = 0;
          do {
            iVar4 = (iVar4 - iVar3) + -1;
            if (!bVar2) {
              iVar4 = iVar3;
            }
            iVar3 = iVar3 + 1;
            local_c8 = (double)iVar4 + __LC2;
            dStack_c0 = dVar9;
            local_d8 = msdfgen::Projection::unproject((Vector2 *)param_3);
            ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
            ::distance((ShapeDistanceFinder<msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
                        *)&local_c8,(Vector2 *)&local_a8);
            pfVar1 = (float *)(*(long *)param_1 +
                              (long)((iVar8 * *(int *)(param_1 + 8) + iVar4) * 4) * 4);
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,local_c8);
            *pfVar1 = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,dStack_c0);
            pfVar1[1] = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,local_b8);
            pfVar1[2] = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_e8,local_b0);
            pfVar1[3] = (float)dVar10;
            iVar4 = *(int *)(param_1 + 8);
          } while (iVar3 < iVar4);
          iVar3 = *(int *)(param_1 + 0xc);
        }
        iVar6 = iVar6 + 1;
        bVar2 = (bool)(bVar2 ^ 1);
      } while (iVar6 < iVar3);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_78 != (void *)0x0) {
      operator_delete(local_78,local_68 - (long)local_78);
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90,local_80 - (long)local_90);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>
   >::distance(msdfgen::Vector2 const&) */

ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>> *
__thiscall
msdfgen::ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
::distance(ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
           *this,Vector2 *param_1)

{
  long lVar1;
  long *plVar2;
  EdgeCache *pEVar3;
  EdgeSegment *pEVar4;
  EdgeSegment *pEVar5;
  EdgeSegment *pEVar6;
  EdgeSegment *pEVar7;
  EdgeSegment *pEVar8;
  EdgeHolder *pEVar9;
  EdgeHolder *pEVar10;
  long *plVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::reset(param_1 + 8);
  pEVar8 = *(EdgeSegment **)(param_1 + 0xa8);
  if (*(EdgeSegment **)(param_1 + 0xb0) == pEVar8) {
    pEVar8 = (EdgeSegment *)0x0;
  }
  plVar2 = *(long **)param_1;
  plVar11 = (long *)*plVar2;
  if (plVar11 != (long *)plVar2[1]) {
    do {
      while (*plVar11 == plVar11[1]) {
        plVar11 = plVar11 + 3;
        if ((long *)plVar2[1] == plVar11) goto LAB_0010382a;
      }
      pEVar3 = (EdgeCache *)
               msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::edgeSelector
                         ((int)(param_1 + 8));
      pEVar9 = (EdgeHolder *)*plVar11;
      if (8 < (ulong)(plVar11[1] - *plVar11)) {
        pEVar9 = (EdgeHolder *)(plVar11[1] + -0x10);
      }
      pEVar4 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
      pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_((EdgeHolder *)(plVar11[1] + -8));
      pEVar7 = pEVar8;
      pEVar9 = (EdgeHolder *)*plVar11;
      if ((EdgeHolder *)*plVar11 != (EdgeHolder *)plVar11[1]) {
        do {
          pEVar6 = pEVar5;
          pEVar10 = pEVar9 + 8;
          pEVar5 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(pEVar9);
          pEVar8 = pEVar7 + 0x38;
          msdfgen::MultiDistanceSelector::addEdge(pEVar3,pEVar7,pEVar4,pEVar6);
          pEVar7 = pEVar8;
          pEVar4 = pEVar6;
          pEVar9 = pEVar10;
        } while ((EdgeHolder *)plVar11[1] != pEVar10);
      }
      plVar11 = plVar11 + 3;
      plVar2 = *(long **)param_1;
    } while ((long *)plVar2[1] != plVar11);
  }
LAB_0010382a:
  msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::distance();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   msdfgen::generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>
   >(msdfgen::DistancePixelConversion<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::DistanceType>::BitmapRefType
   const&, msdfgen::Shape const&, msdfgen::SDFTransformation const&) */

void msdfgen::
     generateDistanceField<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
               (BitmapRefType *param_1,Shape *param_2,SDFTransformation *param_3)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  EdgeCache *this;
  int iVar6;
  EdgeCache *pEVar7;
  int iVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  Shape *local_108;
  Shape local_100 [160];
  undefined1 local_60 [16];
  EdgeCache *local_50;
  long local_40;
  
  local_148 = *(undefined8 *)(param_3 + 0x20);
  uStack_140 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = param_2;
  msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::SimpleContourCombiner
            (local_100);
  iVar3 = msdfgen::Shape::edgeCount();
  uVar5 = (ulong)iVar3;
  if (uVar5 < 0x24924924924924a) {
    local_50 = (EdgeCache *)0x0;
    local_60 = (undefined1  [16])0x0;
    if (uVar5 == 0) {
      local_60._0_8_ = 0;
      pEVar7 = (EdgeCache *)0x0;
      local_50 = (EdgeCache *)0x0;
    }
    else {
      local_60._8_8_ = operator_new(uVar5 * 0x38);
      pEVar7 = (EdgeCache *)(local_60._8_8_ + uVar5 * 0x38);
      local_60._0_8_ = local_60._8_8_;
      this = (EdgeCache *)local_60._8_8_;
      local_50 = pEVar7;
      do {
        msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(this);
        uVar5 = uVar5 - 1;
        this = this + 0x38;
      } while (uVar5 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    local_60._8_8_ = pEVar7;
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 8);
      iVar6 = 0;
      bVar2 = false;
      do {
        iVar8 = iVar6;
        if (param_2[0x18] != (Shape)0x0) {
          iVar8 = (iVar3 - iVar6) + -1;
        }
        if (0 < iVar4) {
          dVar9 = (double)iVar6 + __LC2;
          iVar3 = 0;
          do {
            iVar4 = (iVar4 - iVar3) + -1;
            if (!bVar2) {
              iVar4 = iVar3;
            }
            iVar3 = iVar3 + 1;
            local_128 = (double)iVar4 + __LC2;
            dStack_120 = dVar9;
            local_138 = msdfgen::Projection::unproject((Vector2 *)param_3);
            ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
            ::distance((ShapeDistanceFinder<msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>>
                        *)&local_128,(Vector2 *)&local_108);
            pfVar1 = (float *)(*(long *)param_1 +
                              (long)((iVar8 * *(int *)(param_1 + 8) + iVar4) * 4) * 4);
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,local_128);
            *pfVar1 = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,dStack_120);
            pfVar1[1] = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,local_118);
            pfVar1[2] = (float)dVar10;
            dVar10 = (double)msdfgen::DistanceMapping::operator()
                                       ((DistanceMapping *)&local_148,local_110);
            pfVar1[3] = (float)dVar10;
            iVar4 = *(int *)(param_1 + 8);
          } while (iVar3 < iVar4);
          iVar3 = *(int *)(param_1 + 0xc);
        }
        iVar6 = iVar6 + 1;
        bVar2 = (bool)(bVar2 ^ 1);
      } while (iVar6 < iVar3);
    }
    if ((void *)local_60._0_8_ != (void *)0x0) {
      operator_delete((void *)local_60._0_8_,(long)local_50 - local_60._0_8_);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


