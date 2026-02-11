
/* VHACD::VoxelSet::ComputeBB() */

void __thiscall VHACD::VoxelSet::ComputeBB(VoxelSet *this)

{
  VoxelSet *pVVar1;
  double dVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  short sVar8;
  long lVar9;
  double *pdVar10;
  VoxelSet *pVVar11;
  VoxelSet *pVVar12;
  VoxelSet *pVVar13;
  long in_FS_OFFSET;
  double dVar14;
  undefined1 local_38 [16];
  double local_28;
  double local_20;
  
  uVar4 = *(ulong *)(this + 0xa00);
  local_20 = *(double *)(in_FS_OFFSET + 0x28);
  lVar9 = 0;
  if (uVar4 != 0) {
    lVar5 = *(long *)(this + 0xa08);
    do {
      pVVar12 = this + 0x9b8;
      if (lVar5 != 8) {
        pVVar12 = *(VoxelSet **)(this + 0x9f8);
      }
      uVar3 = *(undefined2 *)(pVVar12 + (long)(int)lVar9 * 2);
      *(undefined2 *)(this + lVar9 * 2 + 0xa48) = uVar3;
      *(undefined2 *)(this + lVar9 * 2 + 0xa4e) = uVar3;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
    pVVar1 = pVVar12 + uVar4 * 8;
    local_28 = 0.0;
    local_38 = (undefined1  [16])0x0;
    pdVar10 = (double *)local_38;
    pVVar11 = this + 0xa4e;
    pVVar13 = pVVar12;
    do {
      sVar8 = *(short *)pVVar12;
      *pdVar10 = (double)(int)sVar8 + *pdVar10;
      if (sVar8 < *(short *)(pVVar11 + -6)) {
        *(short *)(pVVar11 + -6) = sVar8;
        sVar8 = *(short *)pVVar12;
      }
      if (*(short *)pVVar11 < sVar8) {
        *(short *)pVVar11 = sVar8;
      }
      dVar7 = _LC1;
      pdVar10 = pdVar10 + 1;
      pVVar12 = pVVar12 + 2;
      pVVar11 = pVVar11 + 2;
    } while ((&local_20 != pdVar10) ||
            (pVVar12 = pVVar13 + 8, pdVar10 = (double *)local_38, pVVar11 = this + 0xa4e,
            pVVar13 = pVVar12, pVVar1 != pVVar12));
    dVar14 = (double)uVar4;
    lVar9 = 0;
    auVar6._8_8_ = dVar14;
    auVar6._0_8_ = dVar14;
    local_38 = divpd(local_38,auVar6);
    dVar2 = *(double *)(this + 0x9b0);
    local_28 = local_28 / dVar14;
    do {
      sVar8 = *(short *)(this + lVar9 + 0xa4e);
      *(double *)(this + lVar9 * 4 + 0xa18) =
           (double)(int)*(short *)(this + lVar9 + 0xa48) * dVar2 +
           *(double *)(this + lVar9 * 4 + 0x998);
      *(double *)(this + lVar9 * 4 + 0xa30) =
           (double)(int)sVar8 * dVar2 + *(double *)(this + lVar9 * 4 + 0x998);
      *(short *)(this + lVar9 + 0xa54) = (short)(int)(*(double *)(local_38 + lVar9 * 4) + dVar7);
      lVar9 = lVar9 + 2;
    } while (lVar9 != 6);
  }
  if (local_20 == *(double *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::TetrahedronSet::ComputeBB() */

void __thiscall VHACD::TetrahedronSet::ComputeBB(TetrahedronSet *this)

{
  undefined8 uVar1;
  long lVar2;
  TetrahedronSet *pTVar3;
  long lVar4;
  TetrahedronSet *pTVar5;
  TetrahedronSet *pTVar6;
  TetrahedronSet *pTVar7;
  TetrahedronSet *pTVar8;
  ulong uVar9;
  TetrahedronSet *pTVar10;
  long lVar11;
  TetrahedronSet *pTVar12;
  double dVar13;
  undefined1 auVar14 [16];
  
  lVar2 = *(long *)(this + 0xd30);
  if (lVar2 != 0) {
    lVar11 = *(long *)(this + 0xd38);
    lVar4 = 0;
    do {
      pTVar12 = this + 0x9e8;
      if (lVar11 != 8) {
        pTVar12 = *(TetrahedronSet **)(this + 0xd28);
      }
      uVar1 = *(undefined8 *)(pTVar12 + lVar4 * 8);
      *(undefined8 *)(this + lVar4 * 8 + 0x9d0) = 0;
      *(undefined8 *)(this + lVar4 * 8 + 0x9b8) = uVar1;
      *(undefined8 *)(this + lVar4 * 8 + 0x9a0) = uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    pTVar10 = pTVar12 + 0x60;
    lVar11 = 0;
    do {
      pTVar8 = pTVar12 + lVar11;
      pTVar5 = this + 0x9a0;
      pTVar3 = pTVar8;
      do {
        pTVar7 = pTVar3;
        dVar13 = *(double *)pTVar8;
        if (dVar13 < *(double *)pTVar5) {
          *(double *)pTVar5 = dVar13;
        }
        if (*(double *)(pTVar5 + 0x18) <= dVar13 && dVar13 != *(double *)(pTVar5 + 0x18)) {
          *(double *)(pTVar5 + 0x18) = dVar13;
          dVar13 = *(double *)pTVar8;
        }
        pTVar6 = pTVar5 + 8;
        pTVar8 = pTVar8 + 8;
        *(double *)(pTVar5 + 0x30) = dVar13 + *(double *)(pTVar5 + 0x30);
        pTVar5 = pTVar6;
        pTVar3 = pTVar7;
      } while ((pTVar6 != this + 0x9b8) ||
              (pTVar8 = pTVar7 + 0x18, pTVar5 = this + 0x9a0, pTVar3 = pTVar8, pTVar8 != pTVar10));
      lVar11 = lVar11 + 0x68;
      pTVar10 = pTVar7 + 0x80;
    } while (lVar11 != lVar2 * 0x68);
    uVar9 = lVar2 << 2;
    if ((long)uVar9 < 0) {
      dVar13 = (double)(uVar9 >> 1) + (double)(uVar9 >> 1);
    }
    else {
      dVar13 = (double)(long)uVar9;
    }
    auVar14._8_8_ = dVar13;
    auVar14._0_8_ = dVar13;
    auVar14 = divpd(*(undefined1 (*) [16])(this + 0x9d0),auVar14);
    *(undefined1 (*) [16])(this + 0x9d0) = auVar14;
    *(double *)(this + 0x9e0) = *(double *)(this + 0x9e0) / dVar13;
  }
  return;
}



/* VHACD::TetrahedronSet::Intersect(VHACD::Plane const&, VHACD::SArray<VHACD::Vec3<double>, 64ul>*,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>*, unsigned long) const */

void VHACD::TetrahedronSet::Intersect(Plane *param_1,SArray *param_2,SArray *param_3,ulong param_4)

{
  return;
}



/* VHACD::TetrahedronSet::ComputeClippedVolumes(VHACD::Plane const&, double&, double&) const */

void VHACD::TetrahedronSet::ComputeClippedVolumes(Plane *param_1,double *param_2,double *param_3)

{
  return;
}



/* VHACD::TetrahedronSet::RevertAlignToPrincipalAxes() */

void __thiscall VHACD::TetrahedronSet::RevertAlignToPrincipalAxes(TetrahedronSet *this)

{
  long lVar1;
  long lVar2;
  TetrahedronSet *pTVar3;
  TetrahedronSet *pTVar4;
  TetrahedronSet *pTVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(long *)(this + 0xd30);
  if (lVar1 != 0) {
    lVar2 = *(long *)(this + 0xd38);
    lVar7 = 0;
    lVar6 = 0;
    do {
      pTVar3 = this + 0x9e8;
      if (lVar2 != 8) {
        pTVar3 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar4 = pTVar3 + lVar7;
      do {
        pTVar5 = pTVar4 + 0x18;
        dVar10 = *(double *)(pTVar4 + 8) - *(double *)(this + 0x9d8);
        dVar8 = *(double *)pTVar4 - *(double *)(this + 0x9d0);
        dVar9 = *(double *)(pTVar4 + 0x10) - *(double *)(this + 0x9e0);
        *(double *)pTVar4 =
             *(double *)(this + 0xd40) * dVar8 + *(double *)(this + 0xd48) * dVar10 +
             *(double *)(this + 0xd50) * dVar9 + *(double *)(this + 0x9d0);
        *(double *)(pTVar4 + 8) =
             *(double *)(this + 0xd58) * dVar8 + *(double *)(this + 0xd60) * dVar10 +
             *(double *)(this + 0xd68) * dVar9 + *(double *)(this + 0x9d8);
        *(double *)(pTVar4 + 0x10) =
             dVar8 * *(double *)(this + 0xd70) + dVar10 * *(double *)(this + 0xd78) +
             dVar9 * *(double *)(this + 0xd80) + *(double *)(this + 0x9e0);
        pTVar4 = pTVar5;
      } while (pTVar3 + lVar7 + 0x60 != pTVar5);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x68;
    } while (lVar6 != lVar1);
                    /* WARNING: Could not recover jumptable at 0x0010047d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x78))();
    return;
  }
  return;
}



/* VHACD::TetrahedronSet::AlignToPrincipalAxes() */

void __thiscall VHACD::TetrahedronSet::AlignToPrincipalAxes(TetrahedronSet *this)

{
  long lVar1;
  long lVar2;
  TetrahedronSet *pTVar3;
  TetrahedronSet *pTVar4;
  TetrahedronSet *pTVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(long *)(this + 0xd30);
  if (lVar1 != 0) {
    lVar2 = *(long *)(this + 0xd38);
    lVar7 = 0;
    lVar6 = 0;
    do {
      pTVar3 = this + 0x9e8;
      if (lVar2 != 8) {
        pTVar3 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar4 = pTVar3 + lVar7;
      do {
        pTVar5 = pTVar4 + 0x18;
        dVar10 = *(double *)(pTVar4 + 8) - *(double *)(this + 0x9d8);
        dVar8 = *(double *)pTVar4 - *(double *)(this + 0x9d0);
        dVar9 = *(double *)(pTVar4 + 0x10) - *(double *)(this + 0x9e0);
        *(double *)pTVar4 =
             *(double *)(this + 0xd40) * dVar8 + *(double *)(this + 0xd58) * dVar10 +
             *(double *)(this + 0xd70) * dVar9 + *(double *)(this + 0x9d0);
        *(double *)(pTVar4 + 8) =
             *(double *)(this + 0xd48) * dVar8 + *(double *)(this + 0xd60) * dVar10 +
             *(double *)(this + 0xd78) * dVar9 + *(double *)(this + 0x9d8);
        *(double *)(pTVar4 + 0x10) =
             dVar8 * *(double *)(this + 0xd50) + dVar10 * *(double *)(this + 0xd68) +
             dVar9 * *(double *)(this + 0xd80) + *(double *)(this + 0x9e0);
        pTVar4 = pTVar5;
      } while (pTVar3 + lVar7 + 0x60 != pTVar5);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x68;
    } while (lVar6 != lVar1);
                    /* WARNING: Could not recover jumptable at 0x001005bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x78))();
    return;
  }
  return;
}



/* VHACD::VoxelSet::~VoxelSet() */

void __thiscall VHACD::VoxelSet::~VoxelSet(VoxelSet *this)

{
  *(undefined ***)this = &PTR__VoxelSet_0010d8b8;
  if (*(void **)(this + 0x9f8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x9f8));
  }
  *(undefined **)this = &DAT_0010d808;
  VHACD::Mesh::~Mesh((Mesh *)(this + 8));
  return;
}



/* VHACD::TetrahedronSet::~TetrahedronSet() */

void __thiscall VHACD::TetrahedronSet::~TetrahedronSet(TetrahedronSet *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__TetrahedronSet_0010d968;
  lVar1 = *(long *)(this + 0xd28);
  if (lVar1 != 0) {
    operator_delete__((void *)(lVar1 + -8),*(long *)(lVar1 + -8) * 0x68 + 8);
  }
  *(undefined **)this = &DAT_0010d808;
  VHACD::Mesh::~Mesh((Mesh *)(this + 8));
  return;
}



/* VHACD::VoxelSet::ComputeClippedVolumes(VHACD::Plane const&, double&, double&) const */

void __thiscall
VHACD::VoxelSet::ComputeClippedVolumes
          (VoxelSet *this,Plane *param_1,double *param_2,double *param_3)

{
  double dVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  VoxelSet *pVVar5;
  
  *param_3 = 0.0;
  lVar2 = *(long *)(this + 0xa00);
  *param_2 = 0.0;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = 0;
  dVar1 = *(double *)(this + 0x9b0);
  uVar4 = 0;
  do {
    pVVar5 = this + 0x9b8;
    if (*(long *)(this + 0xa08) != 8) {
      pVVar5 = *(VoxelSet **)(this + 0x9f8);
    }
    pVVar5 = pVVar5 + lVar3 * 8;
    uVar4 = (uVar4 + 1) -
            (ulong)(((double)(int)*(short *)pVVar5 * dVar1 + *(double *)(this + 0x998)) *
                    *(double *)param_1 +
                    ((double)(int)*(short *)(pVVar5 + 2) * dVar1 + *(double *)(this + 0x9a0)) *
                    *(double *)(param_1 + 8) +
                    ((double)(int)*(short *)(pVVar5 + 4) * dVar1 + *(double *)(this + 0x9a8)) *
                    *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18) < 0.0);
    lVar3 = lVar3 + 1;
  } while (lVar2 != lVar3);
  *param_2 = (double)uVar4 * *(double *)(this + 0xa10);
  uVar4 = lVar2 - uVar4;
  if (-1 < (long)uVar4) {
    *param_3 = (double)(long)uVar4 * *(double *)(this + 0xa10);
    return;
  }
  *param_3 = (double)uVar4 * *(double *)(this + 0xa10);
  return;
}



/* VHACD::TetrahedronSet::~TetrahedronSet() */

void __thiscall VHACD::TetrahedronSet::~TetrahedronSet(TetrahedronSet *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__TetrahedronSet_0010d968;
  lVar1 = *(long *)(this + 0xd28);
  if (lVar1 != 0) {
    operator_delete__((void *)(lVar1 + -8),*(long *)(lVar1 + -8) * 0x68 + 8);
  }
  *(undefined **)this = &DAT_0010d808;
  VHACD::Mesh::~Mesh((Mesh *)(this + 8));
  operator_delete(this,0xdd0);
  return;
}



/* VHACD::VoxelSet::~VoxelSet() */

void __thiscall VHACD::VoxelSet::~VoxelSet(VoxelSet *this)

{
  *(undefined ***)this = &PTR__VoxelSet_0010d8b8;
  if (*(void **)(this + 0x9f8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x9f8));
  }
  *(undefined **)this = &DAT_0010d808;
  VHACD::Mesh::~Mesh((Mesh *)(this + 8));
  operator_delete(this,0xb08);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::ComputeVolume() const */

double __thiscall VHACD::TetrahedronSet::ComputeVolume(TetrahedronSet *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TetrahedronSet *pTVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  dVar7 = 0.0;
  if (*(long *)(this + 0xd30) != 0) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      pTVar4 = this + 0x9e8;
      if (*(long *)(this + 0xd38) != 8) {
        pTVar4 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar4 = pTVar4 + lVar5;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x68;
      dVar1 = *(double *)(pTVar4 + 0x58);
      dVar2 = *(double *)(pTVar4 + 0x50);
      dVar3 = *(double *)(pTVar4 + 0x48);
      dVar7 = dVar7 + (double)((ulong)(((*(double *)(pTVar4 + 0x28) - dVar1) *
                                        (*(double *)(pTVar4 + 0x30) - dVar3) -
                                       (*(double *)(pTVar4 + 0x40) - dVar1) *
                                       (*(double *)(pTVar4 + 0x18) - dVar3)) *
                                       (*(double *)(pTVar4 + 8) - dVar2) +
                                       ((*(double *)(pTVar4 + 0x40) - dVar1) *
                                        (*(double *)(pTVar4 + 0x20) - dVar2) -
                                       (*(double *)(pTVar4 + 0x38) - dVar2) *
                                       (*(double *)(pTVar4 + 0x28) - dVar1)) *
                                       (*(double *)pTVar4 - dVar3) +
                                      ((*(double *)(pTVar4 + 0x38) - dVar2) *
                                       (*(double *)(pTVar4 + 0x18) - dVar3) -
                                      (*(double *)(pTVar4 + 0x30) - dVar3) *
                                      (*(double *)(pTVar4 + 0x20) - dVar2)) *
                                      (*(double *)(pTVar4 + 0x10) - dVar1)) & _LC3);
    } while (*(long *)(this + 0xd30) != lVar6);
    dVar7 = dVar7 / __LC4;
  }
  return dVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::ComputeMaxVolumeError() const */

double __thiscall VHACD::TetrahedronSet::ComputeMaxVolumeError(TetrahedronSet *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TetrahedronSet *pTVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  dVar7 = 0.0;
  if (*(long *)(this + 0xd30) != 0) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      pTVar4 = this + 0x9e8;
      if (*(long *)(this + 0xd38) != 8) {
        pTVar4 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar4 = pTVar4 + lVar5;
      if (pTVar4[0x60] == (TetrahedronSet)0x3) {
        dVar1 = *(double *)(pTVar4 + 0x58);
        dVar2 = *(double *)(pTVar4 + 0x50);
        dVar3 = *(double *)(pTVar4 + 0x48);
        dVar7 = dVar7 + (double)((ulong)(((*(double *)(pTVar4 + 0x28) - dVar1) *
                                          (*(double *)(pTVar4 + 0x30) - dVar3) -
                                         (*(double *)(pTVar4 + 0x40) - dVar1) *
                                         (*(double *)(pTVar4 + 0x18) - dVar3)) *
                                         (*(double *)(pTVar4 + 8) - dVar2) +
                                         ((*(double *)(pTVar4 + 0x40) - dVar1) *
                                          (*(double *)(pTVar4 + 0x20) - dVar2) -
                                         (*(double *)(pTVar4 + 0x38) - dVar2) *
                                         (*(double *)(pTVar4 + 0x28) - dVar1)) *
                                         (*(double *)pTVar4 - dVar3) +
                                        ((*(double *)(pTVar4 + 0x38) - dVar2) *
                                         (*(double *)(pTVar4 + 0x18) - dVar3) -
                                        (*(double *)(pTVar4 + 0x30) - dVar3) *
                                        (*(double *)(pTVar4 + 0x20) - dVar2)) *
                                        (*(double *)(pTVar4 + 0x10) - dVar1)) & _LC3);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x68;
    } while (*(long *)(this + 0xd30) != lVar6);
    dVar7 = dVar7 / __LC4;
  }
  return dVar7;
}



/* VHACD::VoxelSet::SelectOnSurface(VHACD::PrimitiveSet*) const */

void __thiscall VHACD::VoxelSet::SelectOnSurface(VoxelSet *this,PrimitiveSet *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  VoxelSet *pVVar5;
  ulong uVar6;
  void *pvVar7;
  PrimitiveSet *pPVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = *(long *)(this + 0xa00);
  if (lVar4 != 0) {
    lVar10 = 0;
    *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(this + 0x998);
    *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(this + 0x9a0);
    uVar1 = *(undefined8 *)(this + 0x9a8);
    *(undefined8 *)(param_1 + 0xa00) = 0;
    *(undefined8 *)(param_1 + 0x9a8) = uVar1;
    *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(this + 0x9b0);
    *(undefined8 *)(param_1 + 0xa10) = *(undefined8 *)(this + 0xa10);
    *(undefined1 (*) [16])(param_1 + 0x988) = (undefined1  [16])0x0;
    do {
      while( true ) {
        pVVar5 = this + 0x9b8;
        if (*(long *)(this + 0xa08) != 8) {
          pVVar5 = *(VoxelSet **)(this + 0x9f8);
        }
        pVVar5 = pVVar5 + lVar10 * 8;
        if (*(short *)(pVVar5 + 6) != 3) break;
        uVar3 = *(undefined4 *)pVVar5;
        uVar2 = *(undefined2 *)(pVVar5 + 4);
        uVar9 = *(ulong *)(param_1 + 0xa08);
        uVar6 = *(ulong *)(param_1 + 0xa00);
        uVar11 = uVar9;
        if (uVar6 == uVar9) {
          uVar11 = uVar9 * 2;
          uVar9 = uVar9 << 4;
          if (0xfffffffffffffff < uVar11) {
            uVar9 = 0xffffffffffffffff;
          }
          pvVar7 = operator_new__(uVar9);
          pPVar8 = param_1 + 0x9b8;
          if (*(long *)(param_1 + 0xa08) != 8) {
            pPVar8 = *(PrimitiveSet **)(param_1 + 0x9f8);
          }
          __memcpy_chk(pvVar7,pPVar8,*(long *)(param_1 + 0xa08) * 8,uVar9);
          if (*(void **)(param_1 + 0x9f8) != (void *)0x0) {
            operator_delete__(*(void **)(param_1 + 0x9f8));
          }
          *(ulong *)(param_1 + 0xa08) = uVar11;
          *(void **)(param_1 + 0x9f8) = pvVar7;
          uVar6 = *(ulong *)(param_1 + 0xa00);
        }
        pPVar8 = param_1 + 0x9b8;
        if (uVar11 != 8) {
          pPVar8 = *(PrimitiveSet **)(param_1 + 0x9f8);
        }
        lVar10 = lVar10 + 1;
        pPVar8 = pPVar8 + uVar6 * 8;
        *(ulong *)(param_1 + 0xa00) = uVar6 + 1;
        *(undefined4 *)pPVar8 = uVar3;
        *(undefined2 *)(pPVar8 + 4) = uVar2;
        *(undefined2 *)(pPVar8 + 6) = 3;
        *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
        if (lVar4 == lVar10) {
          return;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::ComputeConvexHull(VHACD::Mesh&, unsigned long) const */

void __thiscall
VHACD::TetrahedronSet::ComputeConvexHull(TetrahedronSet *this,Mesh *param_1,ulong param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  long lVar15;
  Mesh *pMVar16;
  TetrahedronSet *pTVar17;
  TetrahedronSet *pTVar18;
  TetrahedronSet *pTVar19;
  long lVar20;
  int *piVar21;
  undefined1 uVar22;
  ulong uVar23;
  long *plVar24;
  ulong *puVar25;
  ulong uVar26;
  void *pvVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  long in_FS_OFFSET;
  long local_700;
  undefined1 *local_6d8;
  undefined1 local_6b8 [4];
  undefined8 local_6b4;
  void *local_6a8;
  char local_6a0;
  undefined8 local_694;
  void *local_688;
  char local_680;
  undefined8 local_674;
  void *local_668;
  char local_660;
  ulong local_658 [192];
  ulong *local_58;
  ulong local_50;
  ulong uStack_48;
  long local_40;
  
  uVar26 = *(ulong *)(this + 0xd30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar26 != 0) {
    local_58 = (ulong *)0x0;
    local_50 = __LC5;
    uStack_48 = _UNK_0010da68;
    plVar10 = (long *)operator_new__(0x180008);
    *plVar10 = 0x10000;
    fVar3 = _LC6;
    uVar11 = 0;
    if (uVar26 == 0) goto LAB_00100eb0;
    do {
      lVar20 = *(long *)(this + 0xd38);
      uVar23 = 0;
      uVar28 = 0;
      lVar15 = uVar11 * 0x68;
      do {
        pTVar17 = this + 0x9e8;
        if (lVar20 != 8) {
          pTVar17 = *(TetrahedronSet **)(this + 0xd28);
        }
        pTVar17 = pTVar17 + lVar15;
        if ((pTVar17[0x60] == (TetrahedronSet)0x3) && (uVar23 = uVar23 + 1, uVar23 == param_2)) {
          pTVar18 = pTVar17;
          plVar24 = plVar10 + uVar28 * 3;
          do {
            pTVar19 = pTVar18 + 0x18;
            plVar24[1] = *(long *)pTVar18;
            plVar24[2] = *(long *)(pTVar18 + 8);
            plVar24[3] = *(long *)(pTVar18 + 0x10);
            pTVar18 = pTVar19;
            plVar24 = plVar24 + 3;
          } while (pTVar17 + 0x60 != pTVar19);
          uVar28 = uVar28 + 4;
          uVar23 = 0;
        }
        uVar11 = uVar11 + 1;
        lVar15 = lVar15 + 0x68;
      } while ((uVar28 < 0x10000) && (uVar11 < uVar26));
LAB_00100eb0:
      local_6d8 = local_6b8;
      local_6a0 = '\x01';
      local_6a8 = (void *)0x0;
      local_6b4 = 0;
      local_680 = '\x01';
      local_688 = (void *)0x0;
      local_694 = 0;
      local_660 = '\x01';
      local_668 = (void *)0x0;
      local_674 = 0;
      VHACD::btConvexHullComputer::compute(local_6d8,(bool)((char)plVar10 + '\b'),1,0x18,fVar3,_LC6)
      ;
      if (0 < (int)local_6b4) {
        lVar20 = 0;
        uVar23 = local_50;
        uVar28 = uStack_48;
        do {
          puVar13 = (undefined8 *)(lVar20 * 0x10 + (long)local_6a8);
          fVar2 = *(float *)(puVar13 + 1);
          uVar4 = *puVar13;
          uVar12 = uVar23;
          uVar29 = uVar28;
          puVar14 = local_58;
          uVar9 = uStack_48;
          if (uVar23 == uVar28) {
            uVar29 = uVar28 * 2;
            if (uVar29 < 0x555555555555556) {
              lVar15 = uVar28 * 0x30;
              uVar23 = lVar15 + 8;
            }
            else {
              lVar15 = -9;
              uVar23 = 0xffffffffffffffff;
            }
            puVar14 = (ulong *)operator_new__(uVar23);
            puVar7 = local_58;
            *puVar14 = uVar29;
            puVar14 = puVar14 + 1;
            puVar25 = local_658;
            if (uStack_48 != 0x40) {
              puVar25 = local_58;
            }
            __memcpy_chk(puVar14,puVar25,uStack_48 * 0x18,lVar15);
            uVar12 = local_50;
            uVar9 = uVar29;
            if (puVar7 != (ulong *)0x0) {
              operator_delete__(puVar7 + -1,puVar7[-1] * 0x18 + 8);
              uVar12 = local_50;
            }
          }
          uStack_48 = uVar9;
          local_58 = puVar14;
          puVar14 = local_658;
          if (uVar29 != 0x40) {
            puVar14 = local_58;
          }
          uVar23 = uVar12 + 1;
          lVar20 = lVar20 + 1;
          pdVar1 = (double *)(puVar14 + uVar12 * 3);
          local_50 = uVar23;
          *pdVar1 = (double)(float)uVar4;
          pdVar1[1] = (double)(float)((ulong)uVar4 >> 0x20);
          pdVar1[2] = (double)fVar2;
          uVar28 = uVar29;
        } while ((int)lVar20 < (int)local_6b4);
      }
      if ((local_668 != (void *)0x0) && (local_660 != '\0')) {
        VHACD::btAlignedFreeInternal(local_668);
      }
      if ((local_688 != (void *)0x0) && (local_680 != '\0')) {
        VHACD::btAlignedFreeInternal(local_688);
      }
      if ((local_6a8 != (void *)0x0) && (local_6a0 != '\0')) {
        VHACD::btAlignedFreeInternal(local_6a8);
      }
      local_6d8 = local_6b8;
    } while (uVar11 < uVar26);
    operator_delete__(plVar10,*plVar10 * 0x18 + 8);
    uVar22 = SUB81(local_658,0);
    if (uStack_48 != 0x40) {
      uVar22 = SUB81(local_58,0);
    }
    local_6a0 = '\x01';
    local_680 = '\x01';
    local_6a8 = (void *)0x0;
    local_6b4 = 0;
    local_688 = (void *)0x0;
    local_694 = 0;
    local_660 = '\x01';
    local_668 = (void *)0x0;
    local_674 = 0;
    VHACD::btConvexHullComputer::compute(local_6d8,(bool)uVar22,1,0x18,fVar3,_LC6);
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (0 < (int)local_6b4) {
      lVar20 = 0;
      uVar26 = 0;
      uVar11 = *(ulong *)(param_1 + 0x610);
      do {
        puVar13 = (undefined8 *)(lVar20 * 0x10 + (long)local_6a8);
        fVar3 = *(float *)(puVar13 + 1);
        uVar4 = *puVar13;
        uVar23 = uVar11;
        if (uVar26 == uVar11) {
          uVar23 = uVar11 * 2;
          if (uVar23 < 0x555555555555556) {
            lVar15 = uVar11 * 0x30;
            uVar26 = lVar15 + 8;
          }
          else {
            lVar15 = -9;
            uVar26 = 0xffffffffffffffff;
          }
          puVar14 = (ulong *)operator_new__(uVar26);
          *puVar14 = uVar23;
          pMVar16 = param_1;
          if (*(long *)(param_1 + 0x610) != 0x40) {
            pMVar16 = *(Mesh **)(param_1 + 0x600);
          }
          __memcpy_chk(puVar14 + 1,pMVar16,*(long *)(param_1 + 0x610) * 0x18,lVar15);
          lVar15 = *(long *)(param_1 + 0x600);
          if (lVar15 != 0) {
            operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0x18 + 8);
          }
          *(ulong **)(param_1 + 0x600) = puVar14 + 1;
          uVar26 = *(ulong *)(param_1 + 0x608);
          *(ulong *)(param_1 + 0x610) = uVar23;
        }
        pMVar16 = param_1;
        if (uVar23 != 0x40) {
          pMVar16 = *(Mesh **)(param_1 + 0x600);
        }
        lVar20 = lVar20 + 1;
        pMVar16 = pMVar16 + uVar26 * 0x18;
        *(ulong *)(param_1 + 0x608) = uVar26 + 1;
        *(double *)pMVar16 = (double)(float)uVar4;
        *(double *)(pMVar16 + 8) = (double)(float)((ulong)uVar4 >> 0x20);
        *(double *)(pMVar16 + 0x10) = (double)fVar3;
        uVar26 = uVar26 + 1;
        uVar11 = uVar23;
      } while ((int)lVar20 < (int)local_6b4);
    }
    lVar20 = (long)(int)local_674;
    pvVar27 = local_668;
    if (0 < (int)local_674) {
      local_700 = 0;
      do {
        iVar5 = *(int *)((long)pvVar27 + local_700);
        piVar21 = (int *)((long)local_688 +
                         (long)*(int *)((long)local_688 + (long)iVar5 * 0xc + 4) * 0xc +
                         (long)iVar5 * 0xc);
        iVar6 = piVar21[2];
        piVar21 = piVar21 + (long)*piVar21 * 3;
        if (piVar21[2] != iVar6) {
          uVar26 = *(ulong *)(param_1 + 0x920);
          uVar11 = *(ulong *)(param_1 + 0x928);
          iVar8 = piVar21[2];
          iVar5 = *(int *)((long)local_688 + (long)iVar5 * 0xc + 8);
          do {
            iVar30 = iVar8;
            uVar23 = uVar11;
            if (uVar26 == uVar11) {
              uVar23 = uVar11 * 2;
              if (uVar23 < 0xaaaaaaaaaaaaaab) {
                lVar15 = uVar11 * 0x18;
                uVar26 = lVar15 + 8;
              }
              else {
                lVar15 = -9;
                uVar26 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar26);
              pMVar16 = param_1 + 0x618;
              *puVar14 = uVar23;
              if (*(long *)(param_1 + 0x928) != 0x40) {
                pMVar16 = *(Mesh **)(param_1 + 0x918);
              }
              __memcpy_chk(puVar14 + 1,pMVar16,*(long *)(param_1 + 0x928) * 0xc,lVar15);
              lVar15 = *(long *)(param_1 + 0x918);
              if (lVar15 != 0) {
                operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0xc + 8);
              }
              *(ulong **)(param_1 + 0x918) = puVar14 + 1;
              uVar26 = *(ulong *)(param_1 + 0x920);
              *(ulong *)(param_1 + 0x928) = uVar23;
            }
            pMVar16 = param_1 + 0x618;
            if (uVar23 != 0x40) {
              pMVar16 = *(Mesh **)(param_1 + 0x918);
            }
            *(ulong *)(param_1 + 0x920) = uVar26 + 1;
            *(ulong *)(pMVar16 + uVar26 * 0xc) = CONCAT44(iVar5,iVar6);
            *(int *)(pMVar16 + uVar26 * 0xc + 8) = iVar30;
            piVar21 = piVar21 + (long)piVar21[1] * 3 + (long)piVar21[(long)piVar21[1] * 3] * 3;
            uVar26 = uVar26 + 1;
            pvVar27 = local_668;
            uVar11 = uVar23;
            iVar8 = piVar21[2];
            iVar5 = iVar30;
          } while (iVar6 != piVar21[2]);
        }
        local_700 = local_700 + 4;
      } while (local_700 != lVar20 * 4);
    }
    if ((pvVar27 != (void *)0x0) && (local_660 != '\0')) {
      VHACD::btAlignedFreeInternal(pvVar27);
    }
    if ((local_688 != (void *)0x0) && (local_680 != '\0')) {
      VHACD::btAlignedFreeInternal(local_688);
    }
    if ((local_6a8 != (void *)0x0) && (local_6a0 != '\0')) {
      VHACD::btAlignedFreeInternal(local_6a8);
    }
    if (local_58 != (ulong *)0x0) {
      operator_delete__(local_58 + -1,local_58[-1] * 0x18 + 8);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VoxelSet::ComputeConvexHull(VHACD::Mesh&, unsigned long) const */

void __thiscall VHACD::VoxelSet::ComputeConvexHull(VoxelSet *this,Mesh *param_1,ulong param_2)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  Mesh *pMVar19;
  VoxelSet *pVVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined1 uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  void *pvVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  long lVar32;
  long in_FS_OFFSET;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  long local_708;
  undefined1 *local_6d0;
  undefined1 local_6b8 [4];
  undefined8 local_6b4;
  void *local_6a8;
  char local_6a0;
  undefined8 local_694;
  void *local_688;
  char local_680;
  undefined8 local_674;
  void *local_668;
  char local_660;
  ulong local_658 [192];
  ulong *local_58;
  ulong local_50;
  ulong uStack_48;
  long local_40;
  
  uVar27 = *(ulong *)(this + 0xa00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar27 != 0) {
    local_58 = (ulong *)0x0;
    uVar22 = 0;
    local_50 = __LC5;
    uStack_48 = _UNK_0010da68;
    plVar14 = (long *)operator_new__(0x180008);
    *plVar14 = 0x10000;
    fVar4 = _LC6;
    uVar15 = 0;
    if (uVar27 == 0) goto LAB_00101910;
    do {
      dVar10 = _LC1;
      lVar21 = *(long *)(this + 0xa08);
      uVar26 = 0;
      uVar30 = uVar22;
      do {
        pVVar20 = this + 0x9b8;
        if (lVar21 != 8) {
          pVVar20 = *(VoxelSet **)(this + 0x9f8);
        }
        pVVar20 = pVVar20 + uVar30 * 8;
        if ((*(short *)(pVVar20 + 6) == 3) && (uVar15 = uVar15 + 1, uVar15 == param_2)) {
          dVar5 = *(double *)(this + 0x9b0);
          dVar36 = *(double *)(this + 0x998);
          sVar7 = *(short *)pVVar20;
          pdVar1 = (double *)(plVar14 + 1 + uVar26 * 3);
          dVar33 = ((double)(int)*(short *)(pVVar20 + 4) + dVar10) * dVar5 +
                   *(double *)(this + 0x9a8);
          dVar38 = ((double)(int)*(short *)(pVVar20 + 4) - dVar10) * dVar5 +
                   *(double *)(this + 0x9a8);
          dVar34 = ((double)(int)*(short *)(pVVar20 + 2) + dVar10) * dVar5 +
                   *(double *)(this + 0x9a0);
          dVar37 = ((double)(int)*(short *)(pVVar20 + 2) - dVar10) * dVar5 +
                   *(double *)(this + 0x9a0);
          dVar35 = ((double)(int)sVar7 + dVar10) * dVar5 + dVar36;
          pdVar1[2] = dVar38;
          dVar36 = ((double)(int)sVar7 - dVar10) * dVar5 + dVar36;
          pdVar1[1] = dVar37;
          *pdVar1 = dVar36;
          pdVar1 = (double *)(plVar14 + uVar26 * 3 + 4);
          *pdVar1 = dVar35;
          pdVar1[1] = dVar37;
          pdVar1[2] = dVar38;
          pdVar1 = (double *)(plVar14 + uVar26 * 3 + 7);
          *pdVar1 = dVar35;
          pdVar1[1] = dVar34;
          pdVar1[2] = dVar38;
          pdVar1 = (double *)(plVar14 + uVar26 * 3 + 10);
          *pdVar1 = dVar36;
          pdVar1[1] = dVar34;
          pdVar1[2] = dVar38;
          pdVar1 = (double *)(plVar14 + uVar26 * 3 + 0xd);
          *pdVar1 = dVar36;
          pdVar1[1] = dVar37;
          pdVar1[2] = dVar33;
          pdVar1 = (double *)(plVar14 + uVar26 * 3 + 0x10);
          *pdVar1 = dVar35;
          pdVar1[1] = dVar37;
          pdVar1[2] = dVar33;
          pdVar1 = (double *)(plVar14 + uVar26 * 3 + 0x13);
          pdVar2 = (double *)(plVar14 + uVar26 * 3 + 0x16);
          *pdVar1 = dVar35;
          pdVar1[1] = dVar34;
          pdVar1[2] = dVar33;
          *pdVar2 = dVar36;
          pdVar2[1] = dVar34;
          pdVar2[2] = dVar33;
          uVar15 = 0;
          uVar26 = uVar26 + 8;
        }
        uVar22 = uVar30 + 1;
      } while ((uVar26 < 0x10000) && (uVar22 = uVar30 + 1, uVar30 = uVar22, uVar22 < uVar27));
LAB_00101910:
      local_6d0 = local_6b8;
      local_6a0 = '\x01';
      local_6a8 = (void *)0x0;
      local_6b4 = 0;
      local_680 = '\x01';
      local_688 = (void *)0x0;
      local_694 = 0;
      local_660 = '\x01';
      local_668 = (void *)0x0;
      local_674 = 0;
      VHACD::btConvexHullComputer::compute(local_6d0,SUB81(plVar14 + 1,0),1,0x18,fVar4,_LC6);
      if (0 < (int)local_6b4) {
        lVar21 = 0;
        uVar26 = local_50;
        uVar30 = uStack_48;
        do {
          puVar17 = (undefined8 *)(lVar21 * 0x10 + (long)local_6a8);
          fVar3 = *(float *)(puVar17 + 1);
          uVar6 = *puVar17;
          uVar16 = uVar26;
          uVar29 = uVar30;
          puVar18 = local_58;
          uVar13 = uStack_48;
          if (uVar26 == uVar30) {
            uVar29 = uVar30 * 2;
            if (uVar29 < 0x555555555555556) {
              lVar32 = uVar30 * 0x30;
              uVar26 = lVar32 + 8;
            }
            else {
              lVar32 = -9;
              uVar26 = 0xffffffffffffffff;
            }
            puVar18 = (ulong *)operator_new__(uVar26);
            puVar11 = local_58;
            *puVar18 = uVar29;
            puVar18 = puVar18 + 1;
            puVar25 = local_658;
            if (uStack_48 != 0x40) {
              puVar25 = local_58;
            }
            __memcpy_chk(puVar18,puVar25,uStack_48 * 0x18,lVar32);
            uVar16 = local_50;
            uVar13 = uVar29;
            if (puVar11 != (ulong *)0x0) {
              operator_delete__(puVar11 + -1,puVar11[-1] * 0x18 + 8);
              uVar16 = local_50;
            }
          }
          uStack_48 = uVar13;
          local_58 = puVar18;
          puVar18 = local_658;
          if (uVar29 != 0x40) {
            puVar18 = local_58;
          }
          uVar26 = uVar16 + 1;
          lVar21 = lVar21 + 1;
          pdVar1 = (double *)(puVar18 + uVar16 * 3);
          local_50 = uVar26;
          *pdVar1 = (double)(float)uVar6;
          pdVar1[1] = (double)(float)((ulong)uVar6 >> 0x20);
          pdVar1[2] = (double)fVar3;
          uVar30 = uVar29;
        } while ((int)lVar21 < (int)local_6b4);
      }
      if ((local_668 != (void *)0x0) && (local_660 != '\0')) {
        VHACD::btAlignedFreeInternal(local_668);
      }
      if ((local_688 != (void *)0x0) && (local_680 != '\0')) {
        VHACD::btAlignedFreeInternal(local_688);
      }
      if ((local_6a8 != (void *)0x0) && (local_6a0 != '\0')) {
        VHACD::btAlignedFreeInternal(local_6a8);
      }
      local_6d0 = local_6b8;
    } while (uVar22 < uVar27);
    operator_delete__(plVar14,*plVar14 * 0x18 + 8);
    uVar24 = SUB81(local_658,0);
    if (uStack_48 != 0x40) {
      uVar24 = SUB81(local_58,0);
    }
    local_6a0 = '\x01';
    local_6a8 = (void *)0x0;
    local_6b4 = 0;
    local_680 = '\x01';
    local_688 = (void *)0x0;
    local_694 = 0;
    local_660 = '\x01';
    local_668 = (void *)0x0;
    local_674 = 0;
    VHACD::btConvexHullComputer::compute(local_6d0,(bool)uVar24,1,0x18,fVar4,_LC6);
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (0 < (int)local_6b4) {
      lVar21 = 0;
      uVar27 = 0;
      uVar22 = *(ulong *)(param_1 + 0x610);
      do {
        puVar17 = (undefined8 *)(lVar21 * 0x10 + (long)local_6a8);
        fVar4 = *(float *)(puVar17 + 1);
        uVar6 = *puVar17;
        uVar15 = uVar22;
        if (uVar27 == uVar22) {
          uVar15 = uVar22 * 2;
          if (uVar15 < 0x555555555555556) {
            lVar32 = uVar22 * 0x30;
            uVar27 = lVar32 + 8;
          }
          else {
            lVar32 = -9;
            uVar27 = 0xffffffffffffffff;
          }
          puVar18 = (ulong *)operator_new__(uVar27);
          *puVar18 = uVar15;
          pMVar19 = param_1;
          if (*(long *)(param_1 + 0x610) != 0x40) {
            pMVar19 = *(Mesh **)(param_1 + 0x600);
          }
          __memcpy_chk(puVar18 + 1,pMVar19,*(long *)(param_1 + 0x610) * 0x18,lVar32);
          lVar32 = *(long *)(param_1 + 0x600);
          if (lVar32 != 0) {
            operator_delete__((void *)(lVar32 + -8),*(long *)(lVar32 + -8) * 0x18 + 8);
          }
          *(ulong **)(param_1 + 0x600) = puVar18 + 1;
          uVar27 = *(ulong *)(param_1 + 0x608);
          *(ulong *)(param_1 + 0x610) = uVar15;
        }
        pMVar19 = param_1;
        if (uVar15 != 0x40) {
          pMVar19 = *(Mesh **)(param_1 + 0x600);
        }
        lVar21 = lVar21 + 1;
        pMVar19 = pMVar19 + uVar27 * 0x18;
        *(ulong *)(param_1 + 0x608) = uVar27 + 1;
        *(double *)pMVar19 = (double)(float)uVar6;
        *(double *)(pMVar19 + 8) = (double)(float)((ulong)uVar6 >> 0x20);
        *(double *)(pMVar19 + 0x10) = (double)fVar4;
        uVar27 = uVar27 + 1;
        uVar22 = uVar15;
      } while ((int)lVar21 < (int)local_6b4);
    }
    lVar21 = (long)(int)local_674;
    pvVar28 = local_668;
    if (0 < (int)local_674) {
      local_708 = 0;
      do {
        iVar8 = *(int *)((long)pvVar28 + local_708);
        piVar23 = (int *)((long)local_688 +
                         (long)*(int *)((long)local_688 + (long)iVar8 * 0xc + 4) * 0xc +
                         (long)iVar8 * 0xc);
        iVar9 = piVar23[2];
        piVar23 = piVar23 + (long)*piVar23 * 3;
        if (piVar23[2] != iVar9) {
          uVar27 = *(ulong *)(param_1 + 0x920);
          uVar22 = *(ulong *)(param_1 + 0x928);
          iVar12 = piVar23[2];
          iVar8 = *(int *)((long)local_688 + (long)iVar8 * 0xc + 8);
          do {
            iVar31 = iVar12;
            uVar15 = uVar22;
            if (uVar27 == uVar22) {
              uVar15 = uVar22 * 2;
              if (uVar15 < 0xaaaaaaaaaaaaaab) {
                lVar32 = uVar22 * 0x18;
                uVar27 = lVar32 + 8;
              }
              else {
                lVar32 = -9;
                uVar27 = 0xffffffffffffffff;
              }
              puVar18 = (ulong *)operator_new__(uVar27);
              pMVar19 = param_1 + 0x618;
              *puVar18 = uVar15;
              if (*(long *)(param_1 + 0x928) != 0x40) {
                pMVar19 = *(Mesh **)(param_1 + 0x918);
              }
              __memcpy_chk(puVar18 + 1,pMVar19,*(long *)(param_1 + 0x928) * 0xc,lVar32);
              lVar32 = *(long *)(param_1 + 0x918);
              if (lVar32 != 0) {
                operator_delete__((void *)(lVar32 + -8),*(long *)(lVar32 + -8) * 0xc + 8);
              }
              *(ulong **)(param_1 + 0x918) = puVar18 + 1;
              uVar27 = *(ulong *)(param_1 + 0x920);
              *(ulong *)(param_1 + 0x928) = uVar15;
            }
            pMVar19 = param_1 + 0x618;
            if (uVar15 != 0x40) {
              pMVar19 = *(Mesh **)(param_1 + 0x918);
            }
            *(ulong *)(param_1 + 0x920) = uVar27 + 1;
            *(ulong *)(pMVar19 + uVar27 * 0xc) = CONCAT44(iVar8,iVar9);
            *(int *)(pMVar19 + uVar27 * 0xc + 8) = iVar31;
            piVar23 = piVar23 + (long)piVar23[1] * 3 + (long)piVar23[(long)piVar23[1] * 3] * 3;
            uVar27 = uVar27 + 1;
            pvVar28 = local_668;
            uVar22 = uVar15;
            iVar12 = piVar23[2];
            iVar8 = iVar31;
          } while (iVar9 != piVar23[2]);
        }
        local_708 = local_708 + 4;
      } while (local_708 != lVar21 * 4);
    }
    if ((pvVar28 != (void *)0x0) && (local_660 != '\0')) {
      VHACD::btAlignedFreeInternal(pvVar28);
    }
    if ((local_688 != (void *)0x0) && (local_680 != '\0')) {
      VHACD::btAlignedFreeInternal(local_688);
    }
    if ((local_6a8 != (void *)0x0) && (local_6a0 != '\0')) {
      VHACD::btAlignedFreeInternal(local_6a8);
    }
    if (local_58 != (ulong *)0x0) {
      operator_delete__(local_58 + -1,local_58[-1] * 0x18 + 8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::VoxelSet::Clip(VHACD::Plane const&, VHACD::PrimitiveSet*, VHACD::PrimitiveSet*) const */

void __thiscall
VHACD::VoxelSet::Clip(VoxelSet *this,Plane *param_1,PrimitiveSet *param_2,PrimitiveSet *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  ulong uVar4;
  short sVar5;
  short sVar6;
  void *pvVar7;
  VoxelSet *pVVar8;
  PrimitiveSet *pPVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  
  uVar4 = *(ulong *)(this + 0xa00);
  if (uVar4 != 0) {
    uVar1 = *(undefined8 *)(this + 0x998);
    *(undefined8 *)(param_2 + 0x998) = uVar1;
    *(undefined8 *)(param_3 + 0x998) = uVar1;
    uVar1 = *(undefined8 *)(this + 0x9a0);
    *(undefined8 *)(param_2 + 0x9a0) = uVar1;
    *(undefined8 *)(param_3 + 0x9a0) = uVar1;
    uVar1 = *(undefined8 *)(this + 0x9a8);
    *(undefined8 *)(param_2 + 0x9a8) = uVar1;
    *(undefined8 *)(param_3 + 0x9a8) = uVar1;
    *(undefined8 *)(param_2 + 0xa00) = 0;
    *(undefined8 *)(param_3 + 0xa00) = 0;
    if (*(ulong *)(param_2 + 0xa08) < uVar4) {
      uVar10 = 0xffffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar10 = uVar4 * 8;
      }
      pvVar7 = operator_new__(uVar10);
      pPVar9 = param_2 + 0x9b8;
      if (*(long *)(param_2 + 0xa08) != 8) {
        pPVar9 = *(PrimitiveSet **)(param_2 + 0x9f8);
      }
      __memcpy_chk(pvVar7,pPVar9,*(long *)(param_2 + 0xa00) * 8,uVar10);
      if (*(void **)(param_2 + 0x9f8) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x9f8));
      }
      *(void **)(param_2 + 0x9f8) = pvVar7;
      *(ulong *)(param_2 + 0xa08) = uVar4;
    }
    if (*(ulong *)(param_3 + 0xa08) < uVar4) {
      uVar10 = 0xffffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar10 = uVar4 * 8;
      }
      pvVar7 = operator_new__(uVar10);
      pPVar9 = param_3 + 0x9b8;
      if (*(long *)(param_3 + 0xa08) != 8) {
        pPVar9 = *(PrimitiveSet **)(param_3 + 0x9f8);
      }
      __memcpy_chk(pvVar7,pPVar9,*(long *)(param_3 + 0xa00) * 8,uVar10);
      if (*(void **)(param_3 + 0x9f8) != (void *)0x0) {
        operator_delete__(*(void **)(param_3 + 0x9f8));
      }
      *(void **)(param_3 + 0x9f8) = pvVar7;
      *(ulong *)(param_3 + 0xa08) = uVar4;
    }
    uVar1 = *(undefined8 *)(this + 0x9b0);
    lVar13 = 0;
    *(undefined8 *)(param_2 + 0x9b0) = uVar1;
    *(undefined8 *)(param_3 + 0x9b0) = uVar1;
    uVar1 = *(undefined8 *)(this + 0xa10);
    dVar2 = *(double *)(this + 0x9b0);
    *(undefined8 *)(param_2 + 0xa10) = uVar1;
    *(undefined8 *)(param_3 + 0xa10) = uVar1;
    *(undefined8 *)(param_2 + 0x988) = 0;
    *(undefined8 *)(param_3 + 0x988) = 0;
    *(undefined8 *)(param_2 + 0x990) = 0;
    *(undefined8 *)(param_3 + 0x990) = 0;
    dVar14 = dVar2;
    while( true ) {
      pVVar8 = this + 0x9b8;
      if (*(long *)(this + 0xa08) != 8) {
        pVVar8 = *(VoxelSet **)(this + 0x9f8);
      }
      uVar1 = *(undefined8 *)(pVVar8 + lVar13 * 8);
      uVar3 = *(undefined4 *)(pVVar8 + lVar13 * 8);
      sVar5 = (short)((ulong)uVar1 >> 0x20);
      sVar6 = (short)((ulong)uVar1 >> 0x30);
      dVar14 = ((double)(int)(short)uVar1 * dVar14 + *(double *)(this + 0x998)) * *(double *)param_1
               + ((double)(int)(short)((ulong)uVar1 >> 0x10) * dVar14 + *(double *)(this + 0x9a0)) *
                 *(double *)(param_1 + 8) +
               (dVar14 * (double)(int)sVar5 + *(double *)(this + 0x9a8)) *
               *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18);
      if (0.0 <= dVar14) {
        uVar11 = *(ulong *)(param_2 + 0xa00);
        uVar10 = *(ulong *)(param_2 + 0xa08);
        if ((sVar6 == 3) || (dVar14 <= dVar2)) {
          uVar12 = uVar10;
          if (uVar11 == uVar10) {
            uVar12 = uVar10 * 2;
            uVar10 = uVar10 << 4;
            if (0xfffffffffffffff < uVar12) {
              uVar10 = 0xffffffffffffffff;
            }
            pvVar7 = operator_new__(uVar10);
            pPVar9 = param_2 + 0x9b8;
            if (*(long *)(param_2 + 0xa08) != 8) {
              pPVar9 = *(PrimitiveSet **)(param_2 + 0x9f8);
            }
            __memcpy_chk(pvVar7,pPVar9,*(long *)(param_2 + 0xa08) * 8,uVar10);
            if (*(void **)(param_2 + 0x9f8) != (void *)0x0) {
              operator_delete__(*(void **)(param_2 + 0x9f8));
            }
            *(ulong *)(param_2 + 0xa08) = uVar12;
            uVar11 = *(ulong *)(param_2 + 0xa00);
            *(void **)(param_2 + 0x9f8) = pvVar7;
          }
          pPVar9 = param_2 + 0x9b8;
          if (uVar12 != 8) {
            pPVar9 = *(PrimitiveSet **)(param_2 + 0x9f8);
          }
          pPVar9 = pPVar9 + uVar11 * 8;
          *(ulong *)(param_2 + 0xa00) = uVar11 + 1;
          *(undefined4 *)pPVar9 = uVar3;
          *(short *)(pPVar9 + 4) = sVar5;
          *(undefined2 *)(pPVar9 + 6) = 3;
          *(long *)(param_2 + 0x988) = *(long *)(param_2 + 0x988) + 1;
        }
        else {
          uVar12 = uVar10;
          if (uVar11 == uVar10) {
            uVar12 = uVar10 * 2;
            uVar10 = uVar10 << 4;
            if (0xfffffffffffffff < uVar12) {
              uVar10 = 0xffffffffffffffff;
            }
            pvVar7 = operator_new__(uVar10);
            pPVar9 = param_2 + 0x9b8;
            if (*(long *)(param_2 + 0xa08) != 8) {
              pPVar9 = *(PrimitiveSet **)(param_2 + 0x9f8);
            }
            __memcpy_chk(pvVar7,pPVar9,*(long *)(param_2 + 0xa08) * 8,uVar10);
            if (*(void **)(param_2 + 0x9f8) != (void *)0x0) {
              operator_delete__(*(void **)(param_2 + 0x9f8));
            }
            *(void **)(param_2 + 0x9f8) = pvVar7;
            uVar11 = *(ulong *)(param_2 + 0xa00);
            *(ulong *)(param_2 + 0xa08) = uVar12;
          }
          pPVar9 = param_2 + 0x9b8;
          if (uVar12 != 8) {
            pPVar9 = *(PrimitiveSet **)(param_2 + 0x9f8);
          }
          *(ulong *)(param_2 + 0xa00) = uVar11 + 1;
          *(undefined8 *)(pPVar9 + uVar11 * 8) = uVar1;
          *(long *)(param_2 + 0x990) = *(long *)(param_2 + 0x990) + 1;
        }
      }
      else {
        uVar11 = *(ulong *)(param_3 + 0xa00);
        uVar10 = *(ulong *)(param_3 + 0xa08);
        if ((sVar6 == 3) || ((double)((ulong)dVar14 ^ _LC7) <= dVar2)) {
          uVar12 = uVar10;
          if (uVar11 == uVar10) {
            uVar12 = uVar10 * 2;
            uVar10 = uVar10 << 4;
            if (0xfffffffffffffff < uVar12) {
              uVar10 = 0xffffffffffffffff;
            }
            pvVar7 = operator_new__(uVar10);
            pPVar9 = param_3 + 0x9b8;
            if (*(long *)(param_3 + 0xa08) != 8) {
              pPVar9 = *(PrimitiveSet **)(param_3 + 0x9f8);
            }
            __memcpy_chk(pvVar7,pPVar9,*(long *)(param_3 + 0xa08) * 8,uVar10);
            if (*(void **)(param_3 + 0x9f8) != (void *)0x0) {
              operator_delete__(*(void **)(param_3 + 0x9f8));
            }
            *(ulong *)(param_3 + 0xa08) = uVar12;
            uVar11 = *(ulong *)(param_3 + 0xa00);
            *(void **)(param_3 + 0x9f8) = pvVar7;
          }
          pPVar9 = param_3 + 0x9b8;
          if (uVar12 != 8) {
            pPVar9 = *(PrimitiveSet **)(param_3 + 0x9f8);
          }
          pPVar9 = pPVar9 + uVar11 * 8;
          *(ulong *)(param_3 + 0xa00) = uVar11 + 1;
          *(undefined4 *)pPVar9 = uVar3;
          *(short *)(pPVar9 + 4) = sVar5;
          *(undefined2 *)(pPVar9 + 6) = 3;
          *(long *)(param_3 + 0x988) = *(long *)(param_3 + 0x988) + 1;
        }
        else {
          if (uVar11 == uVar10) {
            uVar12 = uVar10 * 2;
            uVar10 = uVar10 << 4;
            if (0xfffffffffffffff < uVar12) {
              uVar10 = 0xffffffffffffffff;
            }
            pvVar7 = operator_new__(uVar10);
            pPVar9 = param_3 + 0x9b8;
            if (*(long *)(param_3 + 0xa08) != 8) {
              pPVar9 = *(PrimitiveSet **)(param_3 + 0x9f8);
            }
            __memcpy_chk(pvVar7,pPVar9,*(long *)(param_3 + 0xa08) * 8,uVar10);
            if (*(void **)(param_3 + 0x9f8) != (void *)0x0) {
              operator_delete__(*(void **)(param_3 + 0x9f8));
            }
            *(void **)(param_3 + 0x9f8) = pvVar7;
            uVar11 = *(ulong *)(param_3 + 0xa00);
            *(ulong *)(param_3 + 0xa08) = uVar12;
            uVar10 = uVar12;
          }
          pPVar9 = param_3 + 0x9b8;
          if (uVar10 != 8) {
            pPVar9 = *(PrimitiveSet **)(param_3 + 0x9f8);
          }
          *(ulong *)(param_3 + 0xa00) = uVar11 + 1;
          *(undefined8 *)(pPVar9 + uVar11 * 8) = uVar1;
          *(long *)(param_3 + 0x990) = *(long *)(param_3 + 0x990) + 1;
        }
      }
      if (uVar4 == lVar13 + 1U) break;
      lVar13 = lVar13 + 1;
      dVar14 = *(double *)(this + 0x9b0);
    }
  }
  return;
}



/* VHACD::TetrahedronSet::SelectOnSurface(VHACD::PrimitiveSet*) const */

void __thiscall VHACD::TetrahedronSet::SelectOnSurface(TetrahedronSet *this,PrimitiveSet *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TetrahedronSet *pTVar8;
  TetrahedronSet *pTVar9;
  PrimitiveSet *pPVar10;
  PrimitiveSet *pPVar11;
  ulong *puVar12;
  TetrahedronSet *pTVar13;
  PrimitiveSet *pPVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined8 local_a8 [12];
  TetrahedronSet local_48;
  long local_40;
  
  lVar2 = *(long *)(this + 0xd30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 != 0) {
    lVar20 = 0;
    uVar1 = *(undefined8 *)(this + 0x998);
    lVar19 = 0;
    *(undefined8 *)(param_1 + 0xd30) = 0;
    *(undefined8 *)(param_1 + 0x998) = uVar1;
    *(undefined1 (*) [16])(param_1 + 0x988) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x9d0) = *(undefined8 *)(this + 0x9d0);
    *(undefined8 *)(param_1 + 0x9d8) = *(undefined8 *)(this + 0x9d8);
    *(undefined8 *)(param_1 + 0x9e0) = *(undefined8 *)(this + 0x9e0);
    *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(this + 0x9a0);
    *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(this + 0x9a8);
    *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(this + 0x9b0);
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(this + 0x9b8);
    *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(this + 0x9c0);
    *(undefined8 *)(param_1 + 0x9c8) = *(undefined8 *)(this + 0x9c8);
    memmove(param_1 + 0xd40,this + 0xd40,0x48);
    memmove(param_1 + 0xd88,this + 0xd88,0x48);
    do {
      pTVar13 = this + 0x9e8;
      if (*(long *)(this + 0xd38) != 8) {
        pTVar13 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar13 = pTVar13 + lVar20;
      pTVar8 = pTVar13;
      puVar16 = local_a8;
      do {
        uVar1 = *(undefined8 *)(pTVar8 + 8);
        uVar4 = *(undefined8 *)(pTVar8 + 0x10);
        uVar5 = *(undefined8 *)(pTVar8 + 0x18);
        pTVar9 = pTVar8 + 0x30;
        uVar6 = *(undefined8 *)(pTVar8 + 0x20);
        uVar7 = *(undefined8 *)(pTVar8 + 0x28);
        *puVar16 = *(undefined8 *)pTVar8;
        puVar16[1] = uVar1;
        puVar16[2] = uVar4;
        puVar16[3] = uVar5;
        puVar16[4] = uVar6;
        puVar16[5] = uVar7;
        pTVar8 = pTVar9;
        puVar16 = puVar16 + 6;
      } while (pTVar9 != pTVar13 + 0x60);
      local_48 = pTVar13[0x60];
      if (pTVar13[0x60] == (TetrahedronSet)0x3) {
        uVar17 = *(ulong *)(param_1 + 0xd30);
        uVar3 = *(ulong *)(param_1 + 0xd38);
        uVar18 = uVar3;
        if (uVar17 == uVar3) {
          uVar18 = uVar3 * 2;
          if (uVar18 < 0x13b13b13b13b13c) {
            lVar15 = uVar3 * 0xd0;
            uVar17 = lVar15 + 8;
          }
          else {
            lVar15 = -9;
            uVar17 = 0xffffffffffffffff;
          }
          puVar12 = (ulong *)operator_new__(uVar17);
          pPVar14 = param_1 + 0x9e8;
          *puVar12 = uVar18;
          if (*(long *)(param_1 + 0xd38) != 8) {
            pPVar14 = *(PrimitiveSet **)(param_1 + 0xd28);
          }
          __memcpy_chk(puVar12 + 1,pPVar14,*(long *)(param_1 + 0xd38) * 0x68,lVar15);
          lVar15 = *(long *)(param_1 + 0xd28);
          if (lVar15 != 0) {
            operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0x68 + 8);
          }
          *(ulong *)(param_1 + 0xd38) = uVar18;
          *(ulong **)(param_1 + 0xd28) = puVar12 + 1;
          uVar17 = *(ulong *)(param_1 + 0xd30);
        }
        pPVar14 = param_1 + 0x9e8;
        if (uVar18 != 8) {
          pPVar14 = *(PrimitiveSet **)(param_1 + 0xd28);
        }
        *(ulong *)(param_1 + 0xd30) = uVar17 + 1;
        pPVar14 = pPVar14 + uVar17 * 0x68;
        pPVar10 = pPVar14;
        puVar16 = local_a8;
        do {
          uVar1 = puVar16[1];
          uVar4 = puVar16[2];
          uVar5 = puVar16[3];
          pPVar11 = pPVar10 + 0x30;
          uVar6 = puVar16[4];
          uVar7 = puVar16[5];
          *(undefined8 *)pPVar10 = *puVar16;
          *(undefined8 *)(pPVar10 + 8) = uVar1;
          *(undefined8 *)(pPVar10 + 0x10) = uVar4;
          *(undefined8 *)(pPVar10 + 0x18) = uVar5;
          *(undefined8 *)(pPVar10 + 0x20) = uVar6;
          *(undefined8 *)(pPVar10 + 0x28) = uVar7;
          pPVar10 = pPVar11;
          puVar16 = puVar16 + 6;
        } while (pPVar11 != pPVar14 + 0x60);
        pPVar14[0x60] = (PrimitiveSet)0x3;
        *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
      }
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x68;
    } while (lVar2 != lVar19);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::TetrahedronSet::Convert(VHACD::Mesh&, VHACD::VOXEL_VALUE) const */

void __thiscall VHACD::TetrahedronSet::Convert(TetrahedronSet *this,ulong *param_1,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  TetrahedronSet *pTVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  
  lVar2 = *(long *)(this + 0xd30);
  if (lVar2 == 0) {
    return;
  }
  lVar15 = 0;
  lVar14 = 0;
  do {
    while( true ) {
      pTVar16 = this + 0x9e8;
      if (*(long *)(this + 0xd38) != 8) {
        pTVar16 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar16 = pTVar16 + lVar15;
      if ((byte)pTVar16[0x60] == param_3) break;
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x68;
      if (lVar2 == lVar14) {
        return;
      }
    }
    uVar6 = param_1[0xc1];
    uVar7 = param_1[0xc2];
    iVar5 = (int)uVar6;
    iVar22 = (int)_LC8 + iVar5;
    uVar23 = CONCAT44(_LC8._4_4_ + iVar5,iVar22);
    iVar17 = iVar5 + (int)_LC9;
    uVar3 = CONCAT44(iVar5 + _LC9._4_4_,iVar17);
    uVar13 = uVar7;
    if (uVar6 == uVar7) {
      uVar13 = uVar7 * 2;
      if (uVar13 < 0x555555555555556) {
        lVar11 = uVar7 * 0x30;
        uVar6 = lVar11 + 8;
      }
      else {
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
      }
      puVar12 = (ulong *)operator_new__(uVar6);
      *puVar12 = uVar13;
      puVar10 = param_1;
      if (param_1[0xc2] != 0x40) {
        puVar10 = (ulong *)param_1[0xc0];
      }
      __memcpy_chk(puVar12 + 1,puVar10,param_1[0xc2] * 0x18,lVar11);
      uVar6 = param_1[0xc0];
      if (uVar6 != 0) {
        operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0x18 + 8);
      }
      param_1[0xc0] = (ulong)(puVar12 + 1);
      uVar6 = param_1[0xc1];
      param_1[0xc2] = uVar13;
    }
    uVar21 = *(ulong *)pTVar16;
    uVar4 = *(ulong *)(pTVar16 + 8);
    uVar20 = *(ulong *)(pTVar16 + 0x10);
    uVar7 = uVar6 + 1;
    if (uVar13 == 0x40) {
      puVar10 = param_1 + uVar6 * 3;
      param_1[0xc1] = uVar7;
      *puVar10 = uVar21;
      puVar10[1] = uVar4;
      puVar10[2] = uVar20;
      if (uVar7 == 0x40) {
        uVar13 = 0x80;
LAB_00103786:
        lVar11 = uVar13 * 0x18;
        uVar6 = lVar11 + 8;
        goto LAB_00102f9c;
      }
      lVar11 = uVar7 * 0x18;
      uVar20 = *(ulong *)(pTVar16 + 0x18);
      uVar21 = *(ulong *)(pTVar16 + 0x20);
      uVar18 = (undefined4)*(ulong *)(pTVar16 + 0x28);
      uVar19 = (undefined4)(*(ulong *)(pTVar16 + 0x28) >> 0x20);
      uVar6 = uVar6 + 2;
LAB_0010304e:
      puVar10 = (ulong *)(lVar11 + (long)param_1);
      param_1[0xc1] = uVar6;
      *puVar10 = uVar20;
      puVar10[1] = uVar21;
      puVar10[2] = CONCAT44(uVar19,uVar18);
      if (uVar6 == 0x40) {
        uVar13 = 0x80;
LAB_00103746:
        lVar11 = uVar13 * 0x18;
        uVar6 = lVar11 + 8;
        goto LAB_0010363c;
      }
      uVar7 = uVar6 + 1;
      uVar20 = *(ulong *)(pTVar16 + 0x30);
      uVar21 = *(ulong *)(pTVar16 + 0x38);
      uVar18 = (undefined4)*(ulong *)(pTVar16 + 0x40);
      uVar19 = (undefined4)(*(ulong *)(pTVar16 + 0x40) >> 0x20);
      lVar11 = uVar6 * 0x18;
LAB_00103080:
      puVar10 = (ulong *)(lVar11 + (long)param_1);
      param_1[0xc1] = uVar7;
      *puVar10 = uVar20;
      puVar10[1] = uVar21;
      puVar10[2] = CONCAT44(uVar19,uVar18);
      if (uVar7 == 0x40) {
        uVar13 = 0x80;
LAB_0010372e:
        lVar11 = uVar13 * 0x18;
        uVar6 = lVar11 + 8;
        goto LAB_00103574;
      }
LAB_0010309c:
      puVar10 = param_1;
    }
    else {
      puVar10 = (ulong *)param_1[0xc0];
      param_1[0xc1] = uVar7;
      puVar12 = puVar10 + uVar6 * 3;
      *puVar12 = uVar21;
      puVar12[1] = uVar4;
      puVar12[2] = uVar20;
      if (uVar13 == uVar7) {
        uVar13 = uVar13 * 2;
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
        if (uVar13 < 0x555555555555556) goto LAB_00103786;
LAB_00102f9c:
        puVar12 = (ulong *)operator_new__(uVar6);
        puVar10 = puVar12 + 1;
        *puVar12 = uVar13;
        puVar12 = param_1;
        if (param_1[0xc2] != 0x40) {
          puVar12 = (ulong *)param_1[0xc0];
        }
        __memcpy_chk(puVar10,puVar12,param_1[0xc2] * 0x18,lVar11);
        uVar6 = param_1[0xc0];
        if (uVar6 != 0) {
          operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0x18 + 8);
        }
        param_1[0xc0] = (ulong)puVar10;
        param_1[0xc2] = uVar13;
        uVar20 = *(ulong *)(pTVar16 + 0x18);
        uVar21 = *(ulong *)(pTVar16 + 0x20);
        uVar6 = param_1[0xc1] + 1;
        uVar18 = (undefined4)*(ulong *)(pTVar16 + 0x28);
        uVar19 = (undefined4)(*(ulong *)(pTVar16 + 0x28) >> 0x20);
        lVar11 = param_1[0xc1] * 0x18;
        if (uVar13 == 0x40) goto LAB_0010304e;
      }
      else {
        uVar20 = *(ulong *)(pTVar16 + 0x18);
        uVar21 = *(ulong *)(pTVar16 + 0x20);
        uVar18 = (undefined4)*(ulong *)(pTVar16 + 0x28);
        uVar19 = (undefined4)(*(ulong *)(pTVar16 + 0x28) >> 0x20);
        uVar6 = uVar6 + 2;
        lVar11 = uVar7 * 0x18;
      }
      puVar12 = (ulong *)(lVar11 + (long)puVar10);
      param_1[0xc1] = uVar6;
      *puVar12 = uVar20;
      puVar12[1] = uVar21;
      puVar12[2] = CONCAT44(uVar19,uVar18);
      if (uVar6 == uVar13) {
        uVar13 = uVar13 * 2;
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
        if (uVar13 < 0x555555555555556) goto LAB_00103746;
LAB_0010363c:
        puVar12 = (ulong *)operator_new__(uVar6);
        puVar10 = puVar12 + 1;
        *puVar12 = uVar13;
        puVar12 = param_1;
        if (param_1[0xc2] != 0x40) {
          puVar12 = (ulong *)param_1[0xc0];
        }
        __memcpy_chk(puVar10,puVar12,param_1[0xc2] * 0x18,lVar11);
        uVar6 = param_1[0xc0];
        if (uVar6 != 0) {
          operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0x18 + 8);
        }
        param_1[0xc0] = (ulong)puVar10;
        param_1[0xc2] = uVar13;
        uVar20 = *(ulong *)(pTVar16 + 0x30);
        uVar21 = *(ulong *)(pTVar16 + 0x38);
        uVar7 = param_1[0xc1] + 1;
        uVar18 = (undefined4)*(ulong *)(pTVar16 + 0x40);
        uVar19 = (undefined4)(*(ulong *)(pTVar16 + 0x40) >> 0x20);
        lVar11 = param_1[0xc1] * 0x18;
        if (uVar13 == 0x40) goto LAB_00103080;
      }
      else {
        uVar7 = uVar6 + 1;
        uVar20 = *(ulong *)(pTVar16 + 0x30);
        uVar21 = *(ulong *)(pTVar16 + 0x38);
        uVar18 = (undefined4)*(ulong *)(pTVar16 + 0x40);
        uVar19 = (undefined4)(*(ulong *)(pTVar16 + 0x40) >> 0x20);
        lVar11 = uVar6 * 0x18;
      }
      puVar12 = (ulong *)(lVar11 + (long)puVar10);
      param_1[0xc1] = uVar7;
      *puVar12 = uVar20;
      puVar12[1] = uVar21;
      puVar12[2] = CONCAT44(uVar19,uVar18);
      if (uVar13 == uVar7) {
        uVar13 = uVar13 * 2;
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
        if (uVar13 < 0x555555555555556) goto LAB_0010372e;
LAB_00103574:
        puVar12 = (ulong *)operator_new__(uVar6);
        puVar10 = puVar12 + 1;
        *puVar12 = uVar13;
        puVar12 = param_1;
        if (param_1[0xc2] != 0x40) {
          puVar12 = (ulong *)param_1[0xc0];
        }
        __memcpy_chk(puVar10,puVar12,param_1[0xc2] * 0x18,lVar11);
        uVar6 = param_1[0xc0];
        if (uVar6 != 0) {
          operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0x18 + 8);
        }
        param_1[0xc0] = (ulong)puVar10;
        uVar7 = param_1[0xc1];
        param_1[0xc2] = uVar13;
        if (uVar13 == 0x40) goto LAB_0010309c;
      }
    }
    uVar6 = *(ulong *)(pTVar16 + 0x48);
    uVar13 = *(ulong *)(pTVar16 + 0x50);
    param_1[0xc1] = uVar7 + 1;
    puVar10 = puVar10 + uVar7 * 3;
    *puVar10 = uVar6;
    puVar10[1] = uVar13;
    uVar6 = param_1[0x125];
    puVar10[2] = *(ulong *)(pTVar16 + 0x58);
    uVar7 = param_1[0x124];
    uVar13 = uVar6;
    if (uVar7 == uVar6) {
      uVar13 = uVar6 * 2;
      if (uVar13 < 0xaaaaaaaaaaaaaab) {
        lVar11 = uVar6 * 0x18;
        uVar6 = lVar11 + 8;
      }
      else {
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
      }
      puVar12 = (ulong *)operator_new__(uVar6);
      puVar10 = param_1 + 0xc3;
      *puVar12 = uVar13;
      if (param_1[0x125] != 0x40) {
        puVar10 = (ulong *)param_1[0x123];
      }
      __memcpy_chk(puVar12 + 1,puVar10,param_1[0x125] * 0xc,lVar11);
      uVar6 = param_1[0x123];
      if (uVar6 != 0) {
        operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0xc + 8);
      }
      param_1[0x123] = (ulong)(puVar12 + 1);
      uVar7 = param_1[0x124];
      param_1[0x125] = uVar13;
    }
    uVar6 = uVar7 + 1;
    if (uVar13 == 0x40) {
      param_1[0x124] = uVar6;
      piVar8 = (int *)((long)param_1 + uVar7 * 0xc + 0x618);
      *piVar8 = iVar5;
      piVar8[1] = iVar5 + 1;
      piVar8[2] = iVar17;
      if (uVar6 == 0x40) {
        uVar13 = 0x80;
LAB_00103766:
        lVar11 = uVar13 * 0xc;
        uVar6 = lVar11 + 8;
        goto LAB_001034bc;
      }
LAB_001031c8:
      uVar7 = uVar6 + 1;
      puVar1 = (undefined8 *)((long)param_1 + uVar6 * 0xc + 0x618);
      param_1[0x124] = uVar7;
      *puVar1 = uVar3;
      *(int *)(puVar1 + 1) = iVar22;
      if (uVar7 == 0x40) {
        uVar13 = 0x80;
LAB_001031fb:
        lVar11 = uVar13 * 0xc;
        uVar6 = lVar11 + 8;
        goto LAB_00103207;
      }
LAB_001032ac:
      puVar10 = param_1 + 0xc3;
      uVar6 = uVar7 + 1;
      puVar1 = (undefined8 *)((long)puVar10 + uVar7 * 0xc);
      param_1[0x124] = uVar6;
      *puVar1 = uVar23;
      *(int *)(puVar1 + 1) = iVar5;
      if (uVar6 == 0x40) {
        uVar13 = 0x80;
LAB_001032df:
        lVar11 = uVar13 * 0xc;
        uVar6 = lVar11 + 8;
        goto LAB_001032eb;
      }
    }
    else {
      puVar10 = (ulong *)param_1[0x123];
      param_1[0x124] = uVar6;
      piVar8 = (int *)(uVar7 * 0xc + (long)puVar10);
      *piVar8 = iVar5;
      piVar8[1] = iVar5 + 1;
      piVar8[2] = iVar17;
      if (uVar13 == uVar6) {
        uVar13 = uVar13 * 2;
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
        if (uVar13 < 0xaaaaaaaaaaaaaab) goto LAB_00103766;
LAB_001034bc:
        puVar10 = (ulong *)operator_new__(uVar6);
        puVar12 = param_1 + 0xc3;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 1;
        if (param_1[0x125] != 0x40) {
          puVar12 = (ulong *)param_1[0x123];
        }
        __memcpy_chk(puVar10,puVar12,param_1[0x125] * 0xc,lVar11);
        uVar6 = param_1[0x123];
        if (uVar6 != 0) {
          operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0xc + 8);
        }
        param_1[0x123] = (ulong)puVar10;
        uVar6 = param_1[0x124];
        param_1[0x125] = uVar13;
        if (uVar13 == 0x40) goto LAB_001031c8;
      }
      uVar7 = uVar6 + 1;
      puVar1 = (undefined8 *)((long)puVar10 + uVar6 * 0xc);
      param_1[0x124] = uVar7;
      *puVar1 = uVar3;
      *(int *)(puVar1 + 1) = iVar22;
      if (uVar7 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 0xaaaaaaaaaaaaaab) goto LAB_001031fb;
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
LAB_00103207:
        puVar9 = (ulong *)operator_new__(uVar6);
        puVar12 = param_1 + 0xc3;
        puVar10 = puVar9 + 1;
        *puVar9 = uVar13;
        if (param_1[0x125] != 0x40) {
          puVar12 = (ulong *)param_1[0x123];
        }
        __memcpy_chk(puVar10,puVar12,param_1[0x125] * 0xc,lVar11);
        uVar6 = param_1[0x123];
        if (uVar6 != 0) {
          operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0xc + 8);
        }
        param_1[0x123] = (ulong)puVar10;
        uVar7 = param_1[0x124];
        param_1[0x125] = uVar13;
        if (uVar13 == 0x40) goto LAB_001032ac;
      }
      else {
        uVar13 = param_1[0x125];
      }
      uVar6 = uVar7 + 1;
      puVar1 = (undefined8 *)((long)puVar10 + uVar7 * 0xc);
      param_1[0x124] = uVar6;
      *puVar1 = uVar23;
      *(int *)(puVar1 + 1) = iVar5;
      if (uVar6 == uVar13) {
        uVar13 = uVar13 * 2;
        lVar11 = -9;
        uVar6 = 0xffffffffffffffff;
        if (uVar13 < 0xaaaaaaaaaaaaaab) goto LAB_001032df;
LAB_001032eb:
        puVar10 = (ulong *)operator_new__(uVar6);
        puVar12 = param_1 + 0xc3;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 1;
        if (param_1[0x125] != 0x40) {
          puVar12 = (ulong *)param_1[0x123];
        }
        __memcpy_chk(puVar10,puVar12,param_1[0x125] * 0xc,lVar11);
        uVar6 = param_1[0x123];
        if (uVar6 != 0) {
          operator_delete__((void *)(uVar6 - 8),*(long *)(uVar6 - 8) * 0xc + 8);
        }
        param_1[0x123] = (ulong)puVar10;
        uVar6 = param_1[0x124];
        param_1[0x125] = uVar13;
        if (uVar13 == 0x40) {
          puVar10 = param_1 + 0xc3;
        }
      }
    }
    piVar8 = (int *)((long)puVar10 + uVar6 * 0xc);
    param_1[0x124] = uVar6 + 1;
    lVar14 = lVar14 + 1;
    lVar15 = lVar15 + 0x68;
    *piVar8 = iVar5 + 3;
    piVar8[1] = iVar5;
    piVar8[2] = iVar17;
    if (lVar2 == lVar14) {
      return;
    }
  } while( true );
}



/* VHACD::PlaneBoxOverlap(VHACD::Vec3<double> const&, VHACD::Vec3<double> const&,
   VHACD::Vec3<double> const&) */

bool VHACD::PlaneBoxOverlap(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  bool bVar1;
  long lVar2;
  long in_FS_OFFSET;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_48 [4];
  double local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  do {
    dVar5 = *(double *)(param_3 + lVar2) - *(double *)(param_2 + lVar2);
    dVar3 = (double)((ulong)*(double *)(param_3 + lVar2) ^ _LC7) - *(double *)(param_2 + lVar2);
    dVar4 = dVar3;
    if (0.0 < *(double *)(param_1 + lVar2)) {
      dVar4 = dVar5;
      dVar5 = dVar3;
    }
    *(double *)((long)local_28 + lVar2) = dVar4;
    *(double *)((long)local_48 + lVar2) = dVar5;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  bVar1 = false;
  if (local_48[0] * *(double *)param_1 + local_48[1] * *(double *)(param_1 + 8) +
      local_48[2] * *(double *)(param_1 + 0x10) <= 0.0) {
    bVar1 = 0.0 <= *(double *)param_1 * local_28[0] + *(double *)(param_1 + 8) * local_28[1] +
                   *(double *)(param_1 + 0x10) * local_28[2];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::TriBoxOverlap(VHACD::Vec3<double> const&, VHACD::Vec3<double> const&, VHACD::Vec3<double>
   const&, VHACD::Vec3<double> const&, VHACD::Vec3<double> const&) */

bool VHACD::TriBoxOverlap(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Vec3 *param_5)

{
  double dVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
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
  double local_a0;
  double local_98;
  double local_80;
  double local_78;
  double local_60;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  dVar15 = *(double *)(param_1 + 0x10);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar5 = *(double *)param_1;
  local_38 = *(double *)(param_3 + 0x10) - dVar15;
  dVar16 = *(double *)(param_4 + 8) - *(double *)(param_1 + 8);
  dVar18 = *(double *)(param_4 + 0x10) - dVar15;
  local_48 = *(double *)param_3 - dVar5;
  dStack_40 = *(double *)(param_3 + 8) - *(double *)(param_1 + 8);
  dVar20 = dVar16 - (*(double *)(param_3 + 8) - *(double *)(param_1 + 8));
  dVar21 = dVar18 - local_38;
  dVar7 = *(double *)(param_5 + 8) - *(double *)(param_1 + 8);
  dVar15 = *(double *)(param_5 + 0x10) - dVar15;
  dVar8 = dStack_40 * dVar21 - local_38 * dVar20;
  dVar23 = dVar7 * dVar21 - dVar15 * dVar20;
  dVar6 = dVar8;
  if (dVar8 < dVar23) {
    dVar6 = dVar23;
    dVar23 = dVar8;
  }
  dVar8 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_2 + 0x10);
  dVar4 = dVar1 * (double)((ulong)dVar20 & _LC3) + dVar8 * (double)((ulong)dVar21 & _LC3);
  bVar3 = false;
  if ((dVar23 <= dVar4) && ((double)((ulong)dVar4 ^ _LC7) <= dVar6)) {
    dVar10 = *(double *)param_4 - dVar5;
    dVar5 = *(double *)param_5 - dVar5;
    dVar14 = dVar10 - local_48;
    dVar23 = local_48 * (double)((ulong)dVar21 ^ _LC7) + dVar14 * local_38;
    dVar4 = (double)((ulong)dVar21 ^ _LC7) * dVar5 + dVar15 * dVar14;
    dVar6 = dVar4;
    if (dVar23 < dVar4) {
      dVar6 = dVar23;
      dVar23 = dVar4;
    }
    dVar4 = *(double *)param_2;
    dVar12 = (double)((ulong)dVar21 & _LC3) * dVar4 + dVar1 * (double)((ulong)dVar14 & _LC3);
    bVar3 = false;
    if ((dVar6 <= dVar12) && (bVar3 = false, (double)((ulong)dVar12 ^ _LC7) <= dVar23)) {
      dVar23 = dVar10 * dVar20 - dVar16 * dVar14;
      dVar12 = dVar5 * dVar20 - dVar7 * dVar14;
      dVar6 = dVar12;
      if (dVar12 < dVar23) {
        dVar6 = dVar23;
        dVar23 = dVar12;
      }
      bVar3 = false;
      dVar12 = (double)((ulong)dVar20 & _LC3) * dVar4 + (double)((ulong)dVar14 & _LC3) * dVar8;
      if ((dVar23 <= dVar12) && ((double)((ulong)dVar12 ^ _LC7) <= dVar6)) {
        dVar19 = dVar15 - dVar18;
        dVar17 = dVar7 - dVar16;
        dVar12 = dStack_40 * dVar19 - dVar17 * local_38;
        dVar23 = dVar7 * dVar19 - dVar15 * dVar17;
        dVar6 = dVar12;
        if (dVar12 < dVar23) {
          dVar6 = dVar23;
          dVar23 = dVar12;
        }
        bVar3 = false;
        dVar12 = dVar8 * (double)((ulong)dVar19 & _LC3) + (double)((ulong)dVar17 & _LC3) * dVar1;
        if ((dVar23 <= dVar12) && ((double)((ulong)dVar12 ^ _LC7) <= dVar6)) {
          dVar11 = dVar5 - dVar10;
          dVar23 = local_48 * (double)((ulong)dVar19 ^ _LC7) + dVar11 * local_38;
          dVar12 = (double)((ulong)dVar19 ^ _LC7) * dVar5 + dVar11 * dVar15;
          dVar6 = dVar12;
          if (dVar23 < dVar12) {
            dVar6 = dVar23;
            dVar23 = dVar12;
          }
          bVar3 = false;
          dVar12 = (double)((ulong)dVar11 & _LC3) * dVar1 + (double)((ulong)dVar19 & _LC3) * dVar4;
          if ((dVar6 <= dVar12) && ((double)((ulong)dVar12 ^ _LC7) <= dVar23)) {
            dVar12 = local_48 * dVar17 - dStack_40 * dVar11;
            dVar23 = dVar10 * dVar17 - dVar11 * dVar16;
            dVar6 = dVar12;
            if (dVar12 < dVar23) {
              dVar6 = dVar23;
              dVar23 = dVar12;
            }
            bVar3 = false;
            dVar12 = (double)((ulong)dVar17 & _LC3) * dVar4 + (double)((ulong)dVar11 & _LC3) * dVar8
            ;
            if ((dVar23 <= dVar12) && ((double)((ulong)dVar12 ^ _LC7) <= dVar6)) {
              dVar13 = local_38 - dVar15;
              dVar12 = dStack_40 - dVar7;
              dVar23 = dStack_40 * dVar13 - dVar12 * local_38;
              dVar9 = dVar16 * dVar13 - dVar18 * dVar12;
              dVar6 = dVar9;
              if (dVar23 < dVar9) {
                dVar6 = dVar23;
                dVar23 = dVar9;
              }
              bVar3 = false;
              dVar9 = dVar8 * (double)((ulong)dVar13 & _LC3) +
                      (double)((ulong)dVar12 & _LC3) * dVar1;
              if ((dVar6 <= dVar9) && ((double)((ulong)dVar9 ^ _LC7) <= dVar23)) {
                dVar22 = local_48 - dVar5;
                dVar23 = local_48 * (double)((ulong)dVar13 ^ _LC7) + dVar22 * local_38;
                dVar9 = (double)((ulong)dVar13 ^ _LC7) * dVar10 + dVar18 * dVar22;
                dVar6 = dVar9;
                if (dVar23 < dVar9) {
                  dVar6 = dVar23;
                  dVar23 = dVar9;
                }
                bVar3 = false;
                dVar9 = (double)((ulong)dVar13 & _LC3) * dVar4 +
                        dVar1 * (double)(_LC3 & (ulong)dVar22);
                if ((dVar6 <= dVar9) && ((double)((ulong)dVar9 ^ _LC7) <= dVar23)) {
                  dVar9 = dVar10 * dVar12 - dVar16 * dVar22;
                  dVar23 = dVar12 * dVar5 - dVar22 * dVar7;
                  dVar6 = dVar9;
                  if (dVar23 < dVar9) {
                    dVar6 = dVar23;
                    dVar23 = dVar9;
                  }
                  bVar3 = false;
                  dVar12 = dVar8 * (double)(_LC3 & (ulong)dVar22) +
                           (double)((ulong)dVar12 & _LC3) * dVar4;
                  if ((dVar6 <= dVar12) && ((double)((ulong)dVar12 ^ _LC7) <= dVar23)) {
                    local_98 = local_48;
                    local_80 = dVar10;
                    if ((local_48 <= dVar10) &&
                       (local_98 = dVar10, local_80 = local_48, dVar10 <= local_48)) {
                      local_98 = local_48;
                    }
                    dVar6 = dVar5;
                    if (local_80 <= dVar5) {
                      dVar6 = local_80;
                    }
                    if (dVar5 <= local_98) {
                      dVar5 = local_98;
                    }
                    if ((dVar6 <= dVar4) && ((double)((ulong)dVar4 ^ _LC7) <= dVar5)) {
                      local_a0 = dVar16;
                      local_78 = dStack_40;
                      if ((dStack_40 <= dVar16) &&
                         (local_a0 = dStack_40, local_78 = dVar16, dVar16 <= dStack_40)) {
                        local_78 = dStack_40;
                      }
                      dVar5 = dVar7;
                      if (local_a0 <= dVar7) {
                        dVar5 = local_a0;
                      }
                      if (dVar7 <= local_78) {
                        dVar7 = local_78;
                      }
                      if ((dVar5 <= dVar8) && ((double)((ulong)dVar8 ^ _LC7) <= dVar7)) {
                        dVar5 = dVar18;
                        local_60 = local_38;
                        if ((local_38 <= dVar18) &&
                           (dVar5 = local_38, local_60 = dVar18, dVar18 <= local_38)) {
                          local_60 = local_38;
                        }
                        dVar6 = dVar15;
                        if (dVar15 <= local_60) {
                          dVar6 = local_60;
                        }
                        if (dVar5 <= dVar15) {
                          dVar15 = dVar5;
                        }
                        if ((dVar15 <= dVar1) && ((double)((ulong)dVar1 ^ _LC7) <= dVar6)) {
                          local_28 = dVar19 * dVar20 - dVar21 * dVar17;
                          dStack_20 = dVar11 * dVar21 - dVar19 * dVar14;
                          local_18 = dVar14 * dVar17 - dVar11 * dVar20;
                          iVar2 = PlaneBoxOverlap((Vec3 *)&local_28,(Vec3 *)&local_48,param_2);
                          bVar3 = iVar2 != 0;
                          goto LAB_00104060;
                        }
                      }
                    }
                    bVar3 = false;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00104060:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



/* VHACD::Diagonalize(double const (&) [3][3], double (&) [3][3], double (&) [3][3]) */

void VHACD::Diagonalize(double *param_1,double *param_2,double *param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
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
  undefined1 local_48 [16];
  double local_38;
  long local_20;
  
  dVar20 = 0.0;
  dVar10 = 0.0;
  iVar3 = 0x18;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  dVar5 = _LC10;
  dVar14 = dVar10;
  do {
    dVar11 = dVar20 * dVar20;
    dVar9 = dVar10 * dVar10;
    dVar26 = dVar14 * dVar14;
    dVar6 = dVar5 * dVar5;
    dVar21 = ((dVar11 - dVar9) - dVar26) + dVar6;
    dVar24 = ((dVar9 - dVar11) - dVar26) + dVar6;
    dVar6 = ((double)((ulong)dVar9 ^ _LC7) - dVar11) + dVar26 + dVar6;
    param_2[8] = dVar6;
    dVar7 = dVar10 * dVar20 - dVar14 * dVar5;
    dVar17 = dVar10 * dVar20 + dVar14 * dVar5;
    dVar7 = dVar7 + dVar7;
    dVar17 = dVar17 + dVar17;
    dVar19 = dVar14 * dVar10 + dVar5 * dVar20;
    dVar8 = dVar14 * dVar10 - dVar5 * dVar20;
    *param_2 = dVar24;
    param_2[1] = dVar7;
    dVar19 = dVar19 + dVar19;
    dVar8 = dVar8 + dVar8;
    dVar27 = dVar14 * dVar20 - dVar5 * dVar10;
    dVar12 = dVar14 * dVar20 + dVar5 * dVar10;
    param_2[2] = dVar19;
    param_2[3] = dVar17;
    dVar27 = dVar27 + dVar27;
    dVar12 = dVar12 + dVar12;
    param_2[4] = dVar21;
    param_2[5] = dVar27;
    param_2[6] = dVar8;
    param_2[7] = dVar12;
    dVar9 = param_1[1];
    dVar11 = *param_1;
    dVar26 = param_1[2];
    dVar28 = dVar17 * dVar9 + dVar24 * dVar11 + dVar8 * dVar26;
    dVar13 = param_1[4];
    dVar15 = dVar21 * dVar9 + dVar7 * dVar11 + dVar12 * dVar26;
    dVar22 = dVar11 * dVar19 + dVar27 * dVar9 + dVar6 * dVar26;
    dVar11 = param_1[5];
    dVar29 = dVar17 * dVar13 + dVar24 * dVar9 + dVar8 * dVar11;
    dVar16 = dVar21 * dVar13 + dVar7 * dVar9 + dVar12 * dVar11;
    dVar18 = dVar13 * dVar27 + dVar9 * dVar19 + dVar6 * dVar11;
    dVar9 = param_1[8];
    dVar13 = dVar17 * dVar11 + dVar24 * dVar26 + dVar8 * dVar9;
    dVar25 = dVar21 * dVar11 + dVar7 * dVar26 + dVar12 * dVar9;
    dVar23 = dVar11 * dVar27 + dVar26 * dVar19 + dVar9 * dVar6;
    *param_3 = dVar17 * dVar29 + dVar24 * dVar28 + dVar8 * dVar13;
    dVar9 = *param_2;
    dVar8 = dVar21 * dVar29 + dVar7 * dVar28 + dVar12 * dVar13;
    dVar11 = param_2[3];
    param_3[1] = dVar8;
    dVar12 = dVar6 * dVar13 + dVar19 * dVar28 + dVar29 * dVar27;
    dVar26 = param_2[6];
    param_3[2] = dVar12;
    dVar13 = param_2[8];
    dVar6 = param_2[4];
    param_3[3] = dVar15 * dVar9 + dVar11 * dVar16 + dVar26 * dVar25;
    dVar9 = param_2[5];
    dVar11 = param_2[2];
    param_3[4] = dVar15 * param_2[1] + dVar6 * dVar16 + param_2[7] * dVar25;
    dVar9 = dVar13 * dVar25 + dVar15 * dVar11 + dVar16 * dVar9;
    param_3[5] = dVar9;
    dVar11 = param_2[4];
    dVar7 = (double)((ulong)dVar9 & _LC3);
    dVar26 = param_2[1];
    dVar13 = param_2[7];
    dVar6 = (double)((ulong)dVar8 & _LC3);
    param_3[6] = dVar18 * param_2[3] + dVar22 * *param_2 + dVar23 * param_2[6];
    param_3[7] = dVar18 * dVar11 + dVar22 * dVar26 + dVar23 * dVar13;
    dVar11 = (double)((ulong)dVar12 & _LC3);
    param_3[8] = dVar22 * param_2[2] + dVar18 * param_2[5] + dVar23 * param_2[8];
    if ((dVar7 <= dVar11) || (dVar7 <= dVar6)) {
      lVar4 = 1;
      uVar2 = (ulong)(dVar11 <= dVar6);
      iVar1 = (uint)(dVar6 < dVar11) * 2;
      if (dVar11 <= dVar6) {
        lVar4 = 2;
      }
      dVar9 = (double)(~-(ulong)(dVar6 < dVar11) & (ulong)dVar8 |
                      (ulong)dVar12 & -(ulong)(dVar6 < dVar11));
    }
    else {
      uVar2 = 2;
      iVar1 = 1;
      lVar4 = 0;
    }
    if (dVar9 == 0.0) break;
    dVar11 = (param_3[uVar2 * 4] - param_3[(long)iVar1 * 4]) / (dVar9 + dVar9);
    dVar9 = _LC10;
    if (dVar11 <= 0.0) {
      dVar11 = (double)((ulong)dVar11 ^ _LC7);
      dVar9 = _LC11;
    }
    if (dVar11 < _LC12) {
      dVar11 = dVar9 / (dVar11 + SQRT(dVar11 * dVar11 + _LC10));
      dVar11 = dVar11 * dVar11;
    }
    else {
      dVar11 = dVar9 / (dVar11 + dVar11);
      dVar11 = dVar11 * dVar11;
    }
    dVar11 = _LC10 / SQRT(dVar11 + _LC10);
    if (dVar11 == _LC10) break;
    local_38 = 0.0;
    local_48 = (undefined1  [16])0x0;
    dVar11 = (_LC10 - dVar11) * _LC1;
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    dVar11 = dVar11 * dVar9;
    *(ulong *)(local_48 + lVar4 * 8) = (ulong)dVar11 ^ _LC7;
    dVar9 = _LC10 - dVar11 * dVar11;
    if (dVar9 < 0.0) {
      dVar9 = sqrt(dVar9);
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    if (dVar9 == _LC10) break;
    dVar10 = ((double)local_48._0_8_ * dVar5 + dVar10 * dVar9 + local_38 * dVar20) -
             (double)local_48._8_8_ * dVar14;
    dVar20 = dVar20 * dVar9 + ((double)local_48._8_8_ * dVar5 - local_38 * dVar10) +
             (double)local_48._0_8_ * dVar14;
    dVar14 = ((local_38 * dVar5 + (double)local_48._8_8_ * dVar10) - (double)local_48._0_8_ * dVar20
             ) + dVar14 * dVar9;
    dVar5 = ((dVar9 * dVar5 - (double)local_48._0_8_ * dVar10) - (double)local_48._8_8_ * dVar20) -
            local_38 * dVar14;
    dVar9 = SQRT(dVar10 * dVar10 + dVar20 * dVar20 + dVar14 * dVar14 + dVar5 * dVar5);
    dVar14 = dVar14 / dVar9;
    dVar5 = dVar5 / dVar9;
    dVar10 = dVar10 / dVar9;
    dVar20 = dVar20 / dVar9;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::VoxelSet::ComputePrincipalAxes() */

void __thiscall VHACD::VoxelSet::ComputePrincipalAxes(VoxelSet *this)

{
  ulong uVar1;
  VoxelSet *pVVar2;
  VoxelSet *pVVar3;
  VoxelSet *pVVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double local_58;
  double local_50;
  double local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  double local_18;
  long local_10;
  
  uVar1 = *(ulong *)(this + 0xa00);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 != 0) {
    auVar11 = (undefined1  [16])0x0;
    uVar5 = 0;
    dVar8 = 0.0;
    do {
      pVVar2 = this + 0x9b8;
      if (*(long *)(this + 0xa08) != 8) {
        pVVar2 = *(VoxelSet **)(this + 0x9f8);
      }
      pVVar3 = pVVar2 + uVar5 * 8;
      uVar5 = uVar5 + 1;
      dVar12 = auVar11._8_8_;
      auVar11._0_8_ = auVar11._0_8_ + (double)(int)*(short *)pVVar3;
      auVar11._8_8_ = dVar12 + (double)(int)*(short *)(pVVar3 + 2);
      dVar8 = dVar8 + (double)(int)*(short *)(pVVar3 + 4);
    } while (uVar1 != uVar5);
    dVar13 = (double)uVar1;
    dVar12 = 0.0;
    local_20 = 0;
    auVar7._8_8_ = dVar13;
    auVar7._0_8_ = dVar13;
    local_48 = 0.0;
    auVar11 = divpd(auVar11,auVar7);
    local_18 = 0.0;
    *(undefined1 (*) [16])(this + 0xaf0) = auVar11;
    *(double *)(this + 0xb00) = dVar8 / dVar13;
    pVVar3 = pVVar2;
    local_50 = local_48;
    dVar8 = local_18;
    local_58 = local_18;
    do {
      pVVar4 = pVVar3 + 8;
      dVar9 = (double)((int)*(short *)pVVar3 - (int)*(short *)(this + 0xa54));
      dVar6 = (double)((int)*(short *)(pVVar3 + 2) - (int)*(short *)(this + 0xa56));
      dVar10 = (double)((int)*(short *)(pVVar3 + 4) - (int)*(short *)(this + 0xa58));
      local_58 = local_58 + dVar9 * dVar9;
      dVar8 = dVar8 + dVar6 * dVar6;
      local_18 = local_18 + dVar10 * dVar10;
      local_50 = local_50 + dVar9 * dVar6;
      local_48 = local_48 + dVar9 * dVar10;
      dVar12 = dVar12 + dVar6 * dVar10;
      pVVar3 = pVVar4;
    } while (pVVar4 != pVVar2 + uVar1 * 8);
    local_58 = local_58 / dVar13;
    local_18 = local_18 / dVar13;
    local_40._8_8_ = 0;
    local_40._0_8_ = dVar8 / dVar13;
    local_40 = local_40 << 0x40;
    local_50 = local_50 / dVar13;
    local_48 = local_48 / dVar13;
    local_30._8_8_ = 0;
    local_30._0_8_ = dVar12 / dVar13;
    Diagonalize(&local_58,(double *)(this + 0xa60),(double *)(this + 0xaa8));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::ComputePrincipalAxes() */

void __thiscall VHACD::TetrahedronSet::ComputePrincipalAxes(TetrahedronSet *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  TetrahedronSet *pTVar3;
  TetrahedronSet *pTVar4;
  TetrahedronSet *pTVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 local_58 [16];
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  double local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0xd30) != 0) {
    auVar10 = (undefined1  [16])0x0;
    uVar6 = 0;
    local_48 = 0.0;
    local_20 = 0;
    auVar11 = ZEXT816(0);
    local_40 = 0;
    local_18 = 0.0;
    uStack_28 = 0;
    lVar7 = 0;
    do {
      pTVar3 = this + 0x9e8;
      if (*(long *)(this + 0xd38) != 8) {
        pTVar3 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar4 = pTVar3 + lVar7;
      do {
        pTVar5 = pTVar4 + 0x18;
        dVar8 = *(double *)pTVar4 - *(double *)(this + 0x9d0);
        dVar9 = *(double *)(pTVar4 + 0x10) - *(double *)(this + 0x9e0);
        dVar12 = auVar11._8_8_;
        auVar11._0_8_ = auVar11._0_8_ + dVar8 * dVar8;
        auVar11._8_8_ = dVar12 + dVar8 * (*(double *)(pTVar4 + 8) - *(double *)(this + 0x9d8));
        local_48 = local_48 + dVar8 * dVar9;
        dVar8 = auVar10._8_8_;
        auVar10._0_8_ =
             auVar10._0_8_ +
             (*(double *)(pTVar4 + 8) - *(double *)(this + 0x9d8)) *
             (*(double *)(pTVar4 + 8) - *(double *)(this + 0x9d8));
        auVar10._8_8_ = dVar8 + (*(double *)(pTVar4 + 8) - *(double *)(this + 0x9d8)) * dVar9;
        local_18 = local_18 + dVar9 * dVar9;
        pTVar4 = pTVar5;
      } while (pTVar5 != pTVar3 + lVar7 + 0x60);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x68;
    } while (uVar6 != *(ulong *)(this + 0xd30));
    dVar8 = (double)uVar6 * __LC14;
    local_18 = local_18 / dVar8;
    auVar1._8_8_ = dVar8;
    auVar1._0_8_ = dVar8;
    local_58 = divpd(auVar11,auVar1);
    local_48 = local_48 / dVar8;
    auVar2._8_8_ = dVar8;
    auVar2._0_8_ = dVar8;
    auVar10 = divpd(auVar10,auVar2);
    uStack_38 = auVar10._0_8_;
    local_30 = auVar10._8_8_;
    Diagonalize((double *)local_58,(double *)(this + 0xd40),(double *)(this + 0xd88));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VoxelSet::VoxelSet() */

void __thiscall VHACD::VoxelSet::VoxelSet(VoxelSet *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined **)this = &DAT_0010d808;
  VHACD::Mesh::Mesh((Mesh *)(this + 8));
  uVar2 = _UNK_0010da88;
  uVar1 = __LC15;
  *(undefined ***)this = &PTR__VoxelSet_0010d8b8;
  uVar5 = _LC10;
  *(undefined8 *)(this + 0xa00) = uVar1;
  *(undefined8 *)(this + 0xa08) = uVar2;
  uVar4 = _UNK_0010daa8;
  uVar3 = __LC17;
  uVar2 = _UNK_0010da98;
  uVar1 = __LC16;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined8 *)(this + 0xa48) = uVar1;
  *(undefined8 *)(this + 0xa50) = uVar2;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x998) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x9a8) = uVar3;
  *(undefined8 *)(this + 0x9b0) = uVar4;
  uVar1 = _LC10;
  *(undefined8 *)(this + 0xa30) = uVar5;
  *(undefined8 *)(this + 0xa38) = uVar5;
  *(undefined1 (*) [16])(this + 0x988) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa40) = uVar5;
  *(undefined2 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined8 *)(this + 0xae8) = 0;
  *(undefined8 *)(this + 0xa10) = uVar1;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  return;
}



/* VHACD::VoxelSet::GetPoints(VHACD::Voxel const&, VHACD::Vec3<double>*) const */

void __thiscall VHACD::VoxelSet::GetPoints(VoxelSet *this,Voxel *param_1,Vec3 *param_2)

{
  short sVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = _LC1;
  sVar1 = *(short *)(param_1 + 4);
  sVar2 = *(short *)(param_1 + 2);
  dVar3 = (double)(int)*(short *)param_1 + _LC1;
  dVar4 = (double)(int)*(short *)param_1 - _LC1;
  *(double *)param_2 = *(double *)(this + 0x9b0) * dVar4 + *(double *)(this + 0x998);
  *(double *)(param_2 + 0x18) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x998);
  *(double *)(param_2 + 0x30) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x998);
  *(double *)(param_2 + 0x48) = *(double *)(this + 0x9b0) * dVar4 + *(double *)(this + 0x998);
  *(double *)(param_2 + 0x60) = *(double *)(this + 0x9b0) * dVar4 + *(double *)(this + 0x998);
  *(double *)(param_2 + 0x78) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x998);
  *(double *)(param_2 + 0x90) = dVar3 * *(double *)(this + 0x9b0) + *(double *)(this + 0x998);
  *(double *)(param_2 + 0xa8) = dVar4 * *(double *)(this + 0x9b0) + *(double *)(this + 0x998);
  dVar3 = (double)(int)sVar2 + dVar5;
  dVar4 = (double)(int)sVar2 - dVar5;
  *(double *)(param_2 + 8) = *(double *)(this + 0x9b0) * dVar4 + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0x20) = *(double *)(this + 0x9b0) * dVar4 + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0x38) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0x50) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0x68) = *(double *)(this + 0x9b0) * dVar4 + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0x80) = dVar4 * *(double *)(this + 0x9b0) + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0x98) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x9a0);
  *(double *)(param_2 + 0xb0) = dVar3 * *(double *)(this + 0x9b0) + *(double *)(this + 0x9a0);
  dVar3 = (double)(int)sVar1 + dVar5;
  dVar5 = (double)(int)sVar1 - dVar5;
  *(double *)(param_2 + 0x10) = *(double *)(this + 0x9b0) * dVar5 + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0x28) = *(double *)(this + 0x9b0) * dVar5 + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0x40) = *(double *)(this + 0x9b0) * dVar5 + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0x58) = dVar5 * *(double *)(this + 0x9b0) + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0x70) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0x88) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0xa0) = *(double *)(this + 0x9b0) * dVar3 + *(double *)(this + 0x9a8);
  *(double *)(param_2 + 0xb8) = dVar3 * *(double *)(this + 0x9b0) + *(double *)(this + 0x9a8);
  return;
}



/* VHACD::VoxelSet::Intersect(VHACD::Plane const&, VHACD::SArray<VHACD::Vec3<double>, 64ul>*,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>*, unsigned long) const */

void __thiscall
VHACD::VoxelSet::Intersect
          (VoxelSet *this,Plane *param_1,SArray *param_2,SArray *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  VoxelSet *pVVar5;
  SArray *pSVar6;
  ulong uVar7;
  ulong uVar8;
  Vec3 *pVVar9;
  ulong uVar10;
  ulong uVar11;
  Vec3 *pVVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  undefined8 local_110;
  Vec3 local_108 [192];
  Vec3 local_48 [8];
  long local_40;
  
  lVar1 = *(long *)(this + 0xa00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    lVar14 = 0;
    uVar7 = 0;
    uVar11 = 0;
    dVar17 = *(double *)(this + 0x9b0);
    dVar16 = dVar17;
    while( true ) {
      pVVar5 = this + 0x9b8;
      if (*(long *)(this + 0xa08) != 8) {
        pVVar5 = *(VoxelSet **)(this + 0x9f8);
      }
      local_110 = *(undefined8 *)(pVVar5 + lVar14 * 8);
      dVar16 = ((double)(int)(short)local_110 * dVar16 + *(double *)(this + 0x998)) *
               *(double *)param_1 +
               ((double)((int)local_110 >> 0x10) * dVar16 + *(double *)(this + 0x9a0)) *
               *(double *)(param_1 + 8) +
               (dVar16 * (double)(int)(short)((ulong)local_110 >> 0x20) + *(double *)(this + 0x9a8))
               * *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18);
      if (0.0 <= dVar16) {
        if (dVar16 <= dVar17) {
          GetPoints(this,(Voxel *)&local_110,local_108);
          pVVar9 = local_108;
          uVar10 = *(ulong *)(param_2 + 0x608);
          uVar8 = *(ulong *)(param_2 + 0x610);
          do {
            uVar13 = uVar8;
            if (uVar10 == uVar8) {
              uVar13 = uVar8 * 2;
              if (uVar13 < 0x555555555555556) {
                lVar15 = uVar8 * 0x30;
                uVar10 = lVar15 + 8;
              }
              else {
                lVar15 = -9;
                uVar10 = 0xffffffffffffffff;
              }
              puVar4 = (ulong *)operator_new__(uVar10);
              *puVar4 = uVar13;
              pSVar6 = param_2;
              if (*(long *)(param_2 + 0x610) != 0x40) {
                pSVar6 = *(SArray **)(param_2 + 0x600);
              }
              __memcpy_chk(puVar4 + 1,pSVar6,*(long *)(param_2 + 0x610) * 0x18,lVar15);
              lVar15 = *(long *)(param_2 + 0x600);
              if (lVar15 != 0) {
                operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_2 + 0x600) = puVar4 + 1;
              uVar10 = *(ulong *)(param_2 + 0x608);
              *(ulong *)(param_2 + 0x610) = uVar13;
            }
            pSVar6 = param_2;
            if (uVar13 != 0x40) {
              pSVar6 = *(SArray **)(param_2 + 0x600);
            }
            uVar2 = *(undefined8 *)pVVar9;
            uVar3 = *(undefined8 *)(pVVar9 + 8);
            pVVar12 = pVVar9 + 0x18;
            pSVar6 = pSVar6 + uVar10 * 0x18;
            *(ulong *)(param_2 + 0x608) = uVar10 + 1;
            *(undefined8 *)pSVar6 = uVar2;
            *(undefined8 *)(pSVar6 + 8) = uVar3;
            *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(pVVar9 + 0x10);
            pVVar9 = pVVar12;
            uVar10 = uVar10 + 1;
            uVar8 = uVar13;
          } while (local_48 != pVVar12);
        }
        else {
          uVar7 = uVar7 + 1;
          if (param_4 == uVar7) {
            GetPoints(this,(Voxel *)&local_110,local_108);
            pVVar9 = local_108;
            uVar7 = *(ulong *)(param_2 + 0x608);
            uVar10 = *(ulong *)(param_2 + 0x610);
            do {
              uVar8 = uVar10;
              if (uVar7 == uVar10) {
                uVar8 = uVar10 * 2;
                if (uVar8 < 0x555555555555556) {
                  lVar15 = uVar10 * 0x30;
                  uVar7 = lVar15 + 8;
                }
                else {
                  lVar15 = -9;
                  uVar7 = 0xffffffffffffffff;
                }
                puVar4 = (ulong *)operator_new__(uVar7);
                *puVar4 = uVar8;
                pSVar6 = param_2;
                if (*(long *)(param_2 + 0x610) != 0x40) {
                  pSVar6 = *(SArray **)(param_2 + 0x600);
                }
                __memcpy_chk(puVar4 + 1,pSVar6,*(long *)(param_2 + 0x610) * 0x18,lVar15);
                lVar15 = *(long *)(param_2 + 0x600);
                if (lVar15 != 0) {
                  operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0x18 + 8);
                }
                *(ulong **)(param_2 + 0x600) = puVar4 + 1;
                uVar7 = *(ulong *)(param_2 + 0x608);
                *(ulong *)(param_2 + 0x610) = uVar8;
              }
              pSVar6 = param_2;
              if (uVar8 != 0x40) {
                pSVar6 = *(SArray **)(param_2 + 0x600);
              }
              uVar2 = *(undefined8 *)pVVar9;
              uVar3 = *(undefined8 *)(pVVar9 + 8);
              pVVar12 = pVVar9 + 0x18;
              pSVar6 = pSVar6 + uVar7 * 0x18;
              *(ulong *)(param_2 + 0x608) = uVar7 + 1;
              *(undefined8 *)pSVar6 = uVar2;
              *(undefined8 *)(pSVar6 + 8) = uVar3;
              *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(pVVar9 + 0x10);
              pVVar9 = pVVar12;
              uVar7 = uVar7 + 1;
              uVar10 = uVar8;
            } while (local_48 != pVVar12);
            uVar7 = 0;
          }
        }
      }
      else if ((double)((ulong)dVar16 ^ _LC7) <= dVar17) {
        GetPoints(this,(Voxel *)&local_110,local_108);
        pVVar9 = local_108;
        uVar10 = *(ulong *)(param_3 + 0x608);
        uVar8 = *(ulong *)(param_3 + 0x610);
        do {
          uVar13 = uVar8;
          if (uVar10 == uVar8) {
            uVar13 = uVar8 * 2;
            if (uVar13 < 0x555555555555556) {
              lVar15 = uVar8 * 0x30;
              uVar10 = lVar15 + 8;
            }
            else {
              lVar15 = -9;
              uVar10 = 0xffffffffffffffff;
            }
            puVar4 = (ulong *)operator_new__(uVar10);
            *puVar4 = uVar13;
            pSVar6 = param_3;
            if (*(long *)(param_3 + 0x610) != 0x40) {
              pSVar6 = *(SArray **)(param_3 + 0x600);
            }
            __memcpy_chk(puVar4 + 1,pSVar6,*(long *)(param_3 + 0x610) * 0x18,lVar15);
            lVar15 = *(long *)(param_3 + 0x600);
            if (lVar15 != 0) {
              operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0x18 + 8);
            }
            *(ulong **)(param_3 + 0x600) = puVar4 + 1;
            uVar10 = *(ulong *)(param_3 + 0x608);
            *(ulong *)(param_3 + 0x610) = uVar13;
          }
          pSVar6 = param_3;
          if (uVar13 != 0x40) {
            pSVar6 = *(SArray **)(param_3 + 0x600);
          }
          uVar2 = *(undefined8 *)pVVar9;
          uVar3 = *(undefined8 *)(pVVar9 + 8);
          pVVar12 = pVVar9 + 0x18;
          pSVar6 = pSVar6 + uVar10 * 0x18;
          *(ulong *)(param_3 + 0x608) = uVar10 + 1;
          *(undefined8 *)pSVar6 = uVar2;
          *(undefined8 *)(pSVar6 + 8) = uVar3;
          *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(pVVar9 + 0x10);
          pVVar9 = pVVar12;
          uVar10 = uVar10 + 1;
          uVar8 = uVar13;
        } while (pVVar12 != local_48);
      }
      else {
        uVar11 = uVar11 + 1;
        if (uVar11 == param_4) {
          GetPoints(this,(Voxel *)&local_110,local_108);
          uVar10 = *(ulong *)(param_3 + 0x610);
          uVar11 = *(ulong *)(param_3 + 0x608);
          pVVar9 = local_108;
          do {
            uVar8 = uVar10;
            if (uVar11 == uVar10) {
              uVar8 = uVar10 * 2;
              if (uVar8 < 0x555555555555556) {
                lVar15 = uVar10 * 0x30;
                uVar11 = lVar15 + 8;
              }
              else {
                lVar15 = -9;
                uVar11 = 0xffffffffffffffff;
              }
              puVar4 = (ulong *)operator_new__(uVar11);
              *puVar4 = uVar8;
              pSVar6 = param_3;
              if (*(long *)(param_3 + 0x610) != 0x40) {
                pSVar6 = *(SArray **)(param_3 + 0x600);
              }
              __memcpy_chk(puVar4 + 1,pSVar6,*(long *)(param_3 + 0x610) * 0x18,lVar15);
              lVar15 = *(long *)(param_3 + 0x600);
              if (lVar15 != 0) {
                operator_delete__((void *)(lVar15 + -8),*(long *)(lVar15 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_3 + 0x600) = puVar4 + 1;
              uVar11 = *(ulong *)(param_3 + 0x608);
              *(ulong *)(param_3 + 0x610) = uVar8;
            }
            pSVar6 = param_3;
            if (uVar8 != 0x40) {
              pSVar6 = *(SArray **)(param_3 + 0x600);
            }
            uVar2 = *(undefined8 *)pVVar9;
            uVar3 = *(undefined8 *)(pVVar9 + 8);
            pVVar12 = pVVar9 + 0x18;
            pSVar6 = pSVar6 + uVar11 * 0x18;
            *(ulong *)(param_3 + 0x608) = uVar11 + 1;
            *(undefined8 *)pSVar6 = uVar2;
            *(undefined8 *)(pSVar6 + 8) = uVar3;
            *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(pVVar9 + 0x10);
            uVar10 = uVar8;
            uVar11 = uVar11 + 1;
            pVVar9 = pVVar12;
          } while (pVVar12 != local_48);
          uVar11 = 0;
        }
      }
      lVar14 = lVar14 + 1;
      if (lVar1 == lVar14) break;
      dVar16 = *(double *)(this + 0x9b0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::VoxelSet::ComputeExteriorPoints(VHACD::Plane const&, VHACD::Mesh const&,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>*) const */

void __thiscall
VHACD::VoxelSet::ComputeExteriorPoints(VoxelSet *this,Plane *param_1,Mesh *param_2,SArray *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  VoxelSet *pVVar5;
  ulong *puVar6;
  SArray *pSVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  Vec3 *pVVar12;
  Vec3 *pVVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  Vec3 local_108 [192];
  Vec3 local_48 [8];
  long local_40;
  
  lVar1 = *(long *)(this + 0xa00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    lVar11 = 0;
    do {
      pVVar5 = this + 0x9b8;
      if (*(long *)(this + 0xa08) != 8) {
        pVVar5 = *(VoxelSet **)(this + 0x9f8);
      }
      local_130 = *(undefined8 *)(pVVar5 + lVar11 * 8);
      local_118 = (double)(int)(short)((ulong)local_130 >> 0x20) * *(double *)(this + 0x9b0) +
                  *(double *)(this + 0x9a8);
      local_128 = (double)(int)(short)local_130 * *(double *)(this + 0x9b0) +
                  *(double *)(this + 0x998);
      dStack_120 = (double)((int)local_130 >> 0x10) * *(double *)(this + 0x9b0) +
                   *(double *)(this + 0x9a0);
      if ((0.0 <= dStack_120 * *(double *)(param_1 + 8) + *(double *)param_1 * local_128 +
                  local_118 * *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18)) &&
         (cVar4 = VHACD::Mesh::IsInside((Vec3 *)param_2), cVar4 == '\0')) {
        GetPoints(this,(Voxel *)&local_130,local_108);
        uVar10 = *(ulong *)(param_3 + 0x608);
        uVar9 = *(ulong *)(param_3 + 0x610);
        pVVar13 = local_108;
        do {
          uVar8 = uVar9;
          if (uVar10 == uVar9) {
            uVar8 = uVar9 * 2;
            if (uVar8 < 0x555555555555556) {
              lVar14 = uVar9 * 0x30;
              uVar10 = lVar14 + 8;
            }
            else {
              lVar14 = -9;
              uVar10 = 0xffffffffffffffff;
            }
            puVar6 = (ulong *)operator_new__(uVar10);
            *puVar6 = uVar8;
            pSVar7 = param_3;
            if (*(long *)(param_3 + 0x610) != 0x40) {
              pSVar7 = *(SArray **)(param_3 + 0x600);
            }
            __memcpy_chk(puVar6 + 1,pSVar7,*(long *)(param_3 + 0x610) * 0x18,lVar14);
            lVar14 = *(long *)(param_3 + 0x600);
            if (lVar14 != 0) {
              operator_delete__((void *)(lVar14 + -8),*(long *)(lVar14 + -8) * 0x18 + 8);
            }
            *(ulong **)(param_3 + 0x600) = puVar6 + 1;
            uVar10 = *(ulong *)(param_3 + 0x608);
            *(ulong *)(param_3 + 0x610) = uVar8;
          }
          pSVar7 = param_3;
          if (uVar8 != 0x40) {
            pSVar7 = *(SArray **)(param_3 + 0x600);
          }
          uVar2 = *(undefined8 *)pVVar13;
          uVar3 = *(undefined8 *)(pVVar13 + 8);
          pVVar12 = pVVar13 + 0x18;
          pSVar7 = pSVar7 + uVar10 * 0x18;
          *(ulong *)(param_3 + 0x608) = uVar10 + 1;
          *(undefined8 *)pSVar7 = uVar2;
          *(undefined8 *)(pSVar7 + 8) = uVar3;
          *(undefined8 *)(pSVar7 + 0x10) = *(undefined8 *)(pVVar13 + 0x10);
          uVar10 = uVar10 + 1;
          uVar9 = uVar8;
          pVVar13 = pVVar12;
        } while (pVVar12 != local_48);
      }
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::VoxelSet::Convert(VHACD::Mesh&, VHACD::VOXEL_VALUE) const */

void __thiscall VHACD::VoxelSet::Convert(VoxelSet *this,long param_1,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  VoxelSet *pVVar7;
  ulong *puVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  Vec3 *pVVar18;
  Vec3 *pVVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  int local_138;
  undefined8 local_110;
  Vec3 local_108 [192];
  Vec3 local_48 [8];
  long local_40;
  
  lVar3 = *(long *)(this + 0xa00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    lVar17 = 0;
    do {
      pVVar7 = this + 0x9b8;
      if (*(long *)(this + 0xa08) != 8) {
        pVVar7 = *(VoxelSet **)(this + 0x9f8);
      }
      local_110 = *(undefined8 *)(pVVar7 + lVar17 * 8);
      if ((short)((ulong)local_110 >> 0x30) == param_3) {
        GetPoints(this,(Voxel *)&local_110,local_108);
        iVar13 = (int)*(ulong *)(param_1 + 0x608);
        uVar16 = *(ulong *)(param_1 + 0x608);
        uVar11 = *(ulong *)(param_1 + 0x610);
        pVVar19 = local_108;
        do {
          uVar20 = uVar11;
          if (uVar11 == uVar16) {
            uVar20 = uVar11 * 2;
            if (uVar20 < 0x555555555555556) {
              lVar10 = uVar11 * 0x30;
              uVar16 = lVar10 + 8;
            }
            else {
              lVar10 = -9;
              uVar16 = 0xffffffffffffffff;
            }
            puVar8 = (ulong *)operator_new__(uVar16);
            *puVar8 = uVar20;
            lVar15 = param_1;
            if (*(long *)(param_1 + 0x610) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x600);
            }
            __memcpy_chk(puVar8 + 1,lVar15,*(long *)(param_1 + 0x610) * 0x18,lVar10);
            lVar10 = *(long *)(param_1 + 0x600);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0x18 + 8);
            }
            *(ulong **)(param_1 + 0x600) = puVar8 + 1;
            uVar16 = *(ulong *)(param_1 + 0x608);
            *(ulong *)(param_1 + 0x610) = uVar20;
          }
          lVar10 = param_1;
          if (uVar20 != 0x40) {
            lVar10 = *(long *)(param_1 + 0x600);
          }
          uVar4 = *(undefined8 *)pVVar19;
          uVar5 = *(undefined8 *)(pVVar19 + 8);
          pVVar18 = pVVar19 + 0x18;
          puVar2 = (undefined8 *)(lVar10 + uVar16 * 0x18);
          *(ulong *)(param_1 + 0x608) = uVar16 + 1;
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          puVar2[2] = *(undefined8 *)(pVVar19 + 0x10);
          uVar16 = uVar16 + 1;
          uVar11 = uVar20;
          pVVar19 = pVVar18;
        } while (pVVar18 != local_48);
        uVar16 = *(ulong *)(param_1 + 0x928);
        iVar1 = iVar13 + 1;
        iVar6 = iVar13 + 2;
        uVar11 = *(ulong *)(param_1 + 0x920);
        uVar20 = uVar16;
        if (uVar11 == uVar16) {
          uVar20 = uVar16 * 2;
          if (uVar20 < 0xaaaaaaaaaaaaaab) {
            lVar10 = uVar16 * 0x18;
            uVar16 = lVar10 + 8;
          }
          else {
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
          }
          puVar8 = (ulong *)operator_new__(uVar16);
          lVar15 = param_1 + 0x618;
          *puVar8 = uVar20;
          if (*(long *)(param_1 + 0x928) != 0x40) {
            lVar15 = *(long *)(param_1 + 0x918);
          }
          __memcpy_chk(puVar8 + 1,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
          lVar10 = *(long *)(param_1 + 0x918);
          if (lVar10 != 0) {
            operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
          }
          *(ulong **)(param_1 + 0x918) = puVar8 + 1;
          uVar11 = *(ulong *)(param_1 + 0x920);
          *(ulong *)(param_1 + 0x928) = uVar20;
        }
        uVar16 = uVar11 + 1;
        iVar14 = iVar13 + 3;
        if (uVar20 == 0x40) {
          *(ulong *)(param_1 + 0x920) = uVar16;
          piVar9 = (int *)(uVar11 * 0xc + param_1 + 0x618);
          *piVar9 = iVar13;
          piVar9[1] = iVar6;
          piVar9[2] = iVar1;
          if (uVar16 == 0x40) {
            uVar20 = 0x80;
LAB_0010677f:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_00106204;
          }
LAB_001062aa:
          piVar9 = (int *)(param_1 + 0x618 + uVar16 * 0xc);
          lVar10 = uVar16 + 1;
          *(long *)(param_1 + 0x920) = lVar10;
          *piVar9 = iVar13;
          piVar9[1] = iVar14;
          piVar9[2] = iVar6;
          if (lVar10 == 0x40) {
            uVar20 = 0x80;
LAB_00106f49:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_0010611d;
          }
          uVar16 = uVar16 + 2;
          lVar10 = lVar10 * 0xc;
LAB_00106309:
          local_138 = iVar13 + 4;
          piVar9 = (int *)(param_1 + 0x618 + lVar10);
          *(ulong *)(param_1 + 0x920) = uVar16;
          uVar20 = 0x80;
          piVar9[2] = iVar13 + 6;
          *piVar9 = local_138;
          piVar9[1] = iVar13 + 5;
          if (uVar16 == 0x40) {
LAB_00106336:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
LAB_00106342:
            puVar12 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            puVar8 = puVar12 + 1;
            *puVar12 = uVar20;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar16 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 != 0x40) goto LAB_00105f13;
          }
          local_138 = iVar13 + 4;
          uVar11 = uVar16 + 1;
          piVar9 = (int *)(param_1 + 0x618 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          *piVar9 = local_138;
          piVar9[1] = iVar13 + 6;
          piVar9[2] = iVar13 + 7;
          if (uVar11 == 0x40) {
            uVar20 = 0x80;
LAB_00106e58:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_00106d84;
          }
LAB_00106437:
          uVar16 = uVar11 + 1;
          piVar9 = (int *)(param_1 + 0x618 + uVar11 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          *piVar9 = iVar13 + 7;
          piVar9[1] = iVar13 + 6;
          piVar9[2] = iVar6;
          if (uVar16 == 0x40) {
            uVar20 = 0x80;
LAB_00106e6f:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_00106c8c;
          }
LAB_00106466:
          uVar11 = uVar16 + 1;
          piVar9 = (int *)(param_1 + 0x618 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          uVar20 = 0x80;
          *piVar9 = iVar13 + 7;
          piVar9[1] = iVar6;
          piVar9[2] = iVar14;
          if (uVar11 == 0x40) {
LAB_0010649e:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_001064aa;
          }
LAB_00106570:
          local_138 = iVar13 + 4;
          uVar16 = uVar11 + 1;
          piVar9 = (int *)(param_1 + 0x618 + uVar11 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          *piVar9 = local_138;
          piVar9[1] = iVar1;
          piVar9[2] = iVar13 + 5;
          if (uVar16 == 0x40) {
            uVar20 = 0x80;
LAB_00106eaf:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_00106b94;
          }
LAB_001065a2:
          local_138 = iVar13 + 4;
          uVar11 = uVar16 + 1;
          piVar9 = (int *)(param_1 + 0x618 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          *piVar9 = local_138;
          piVar9[1] = iVar13;
          piVar9[2] = iVar1;
          if (uVar11 == 0x40) {
            uVar20 = 0x80;
LAB_00106eef:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_00106a9c;
          }
LAB_001065d4:
          uVar16 = uVar11 + 1;
          piVar9 = (int *)(param_1 + 0x618 + uVar11 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          *piVar9 = iVar13 + 6;
          piVar9[1] = iVar13 + 5;
          piVar9[2] = iVar1;
          if (uVar16 == 0x40) {
            uVar20 = 0x80;
LAB_00106f06:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_001069a4;
          }
LAB_00106603:
          local_138 = iVar13 + 4;
          puVar8 = (ulong *)(param_1 + 0x618);
          lVar10 = uVar16 + 1;
          piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
          *(long *)(param_1 + 0x920) = lVar10;
          *piVar9 = iVar13 + 6;
          piVar9[1] = iVar1;
          piVar9[2] = iVar6;
          if (lVar10 == 0x40) {
            uVar20 = 0x80;
LAB_00106f1d:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
            goto LAB_00106885;
          }
          uVar16 = uVar16 + 2;
          piVar9 = (int *)((long)puVar8 + lVar10 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          uVar20 = *(ulong *)(param_1 + 0x928);
          *piVar9 = iVar13 + 7;
          piVar9[1] = iVar13;
          piVar9[2] = local_138;
          if (uVar20 == uVar16) goto LAB_0010666b;
        }
        else {
          *(ulong *)(param_1 + 0x920) = uVar16;
          puVar8 = *(ulong **)(param_1 + 0x918);
          piVar9 = (int *)(uVar11 * 0xc + (long)puVar8);
          *piVar9 = iVar13;
          piVar9[1] = iVar6;
          piVar9[2] = iVar1;
          if (uVar20 == uVar16) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_0010677f;
LAB_00106204:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar16 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_001062aa;
          }
          uVar11 = uVar16 + 1;
          piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          piVar9[1] = iVar14;
          *piVar9 = iVar13;
          piVar9[2] = iVar6;
          if (uVar11 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106f49;
LAB_0010611d:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8 + 1,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8 + 1;
            uVar11 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          local_138 = iVar13 + 4;
          uVar16 = uVar11 + 1;
          lVar10 = uVar11 * 0xc;
          if (uVar20 == 0x40) goto LAB_00106309;
          puVar8 = *(ulong **)(param_1 + 0x918);
          *(ulong *)(param_1 + 0x920) = uVar16;
          piVar9 = (int *)(lVar10 + (long)puVar8);
          *piVar9 = local_138;
          piVar9[2] = iVar13 + 6;
          piVar9[1] = iVar13 + 5;
          if (uVar20 == uVar16) {
            uVar20 = uVar20 * 2;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106336;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            goto LAB_00106342;
          }
LAB_00105f13:
          local_138 = iVar13 + 4;
          uVar11 = uVar16 + 1;
          piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          *piVar9 = local_138;
          piVar9[1] = iVar13 + 6;
          piVar9[2] = iVar13 + 7;
          if (uVar11 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106e58;
LAB_00106d84:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar11 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_00106437;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          uVar16 = uVar11 + 1;
          piVar9 = (int *)((long)puVar8 + uVar11 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          *piVar9 = iVar13 + 7;
          piVar9[1] = iVar13 + 6;
          piVar9[2] = iVar6;
          if (uVar16 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106e6f;
LAB_00106c8c:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar16 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_00106466;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          uVar11 = uVar16 + 1;
          piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          *piVar9 = iVar13 + 7;
          piVar9[1] = iVar6;
          piVar9[2] = iVar14;
          if (uVar11 == uVar20) {
            uVar20 = uVar20 * 2;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_0010649e;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
LAB_001064aa:
            puVar12 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            puVar8 = puVar12 + 1;
            *puVar12 = uVar20;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar11 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_00106570;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          local_138 = iVar13 + 4;
          uVar16 = uVar11 + 1;
          piVar9 = (int *)((long)puVar8 + uVar11 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          *piVar9 = local_138;
          piVar9[1] = iVar1;
          piVar9[2] = iVar13 + 5;
          if (uVar16 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106eaf;
LAB_00106b94:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar16 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_001065a2;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          local_138 = iVar13 + 4;
          uVar11 = uVar16 + 1;
          piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          *piVar9 = local_138;
          piVar9[1] = iVar13;
          piVar9[2] = iVar1;
          if (uVar11 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106eef;
LAB_00106a9c:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar11 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_001065d4;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          uVar16 = uVar11 + 1;
          piVar9 = (int *)((long)puVar8 + uVar11 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar16;
          piVar9[1] = iVar13 + 5;
          *piVar9 = iVar13 + 6;
          piVar9[2] = iVar1;
          if (uVar16 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106f06;
LAB_001069a4:
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar16 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 == 0x40) goto LAB_00106603;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
          }
          uVar11 = uVar16 + 1;
          piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
          *(ulong *)(param_1 + 0x920) = uVar11;
          *piVar9 = iVar13 + 6;
          piVar9[1] = iVar1;
          piVar9[2] = iVar6;
          if (uVar11 == uVar20) {
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_00106f1d;
LAB_00106885:
            local_138 = iVar13 + 4;
            puVar8 = (ulong *)operator_new__(uVar16);
            lVar15 = param_1 + 0x618;
            *puVar8 = uVar20;
            puVar8 = puVar8 + 1;
            if (*(long *)(param_1 + 0x928) != 0x40) {
              lVar15 = *(long *)(param_1 + 0x918);
            }
            __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
            lVar10 = *(long *)(param_1 + 0x918);
            if (lVar10 != 0) {
              operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
            }
            *(ulong **)(param_1 + 0x918) = puVar8;
            uVar11 = *(ulong *)(param_1 + 0x920);
            *(ulong *)(param_1 + 0x928) = uVar20;
            if (uVar20 != 0x40) goto LAB_00106096;
            uVar16 = uVar11 + 1;
            puVar8 = (ulong *)(param_1 + 0x618);
            *(ulong *)(param_1 + 0x920) = uVar16;
            piVar9 = (int *)((long)puVar8 + uVar11 * 0xc);
            *piVar9 = iVar13 + 7;
            piVar9[2] = local_138;
            piVar9[1] = iVar13;
            if (uVar16 != 0x40) goto LAB_001060c7;
            uVar20 = 0x80;
LAB_0010696d:
            lVar10 = uVar20 * 0xc;
            uVar16 = lVar10 + 8;
          }
          else {
            uVar20 = *(ulong *)(param_1 + 0x928);
LAB_00106096:
            local_138 = iVar13 + 4;
            uVar16 = uVar11 + 1;
            piVar9 = (int *)((long)puVar8 + uVar11 * 0xc);
            *(ulong *)(param_1 + 0x920) = uVar16;
            *piVar9 = iVar13 + 7;
            piVar9[1] = iVar13;
            piVar9[2] = local_138;
            if (uVar16 != uVar20) goto LAB_001060c7;
LAB_0010666b:
            uVar20 = uVar20 * 2;
            lVar10 = -9;
            uVar16 = 0xffffffffffffffff;
            if (uVar20 < 0xaaaaaaaaaaaaaab) goto LAB_0010696d;
          }
          puVar8 = (ulong *)operator_new__(uVar16);
          lVar15 = param_1 + 0x618;
          *puVar8 = uVar20;
          puVar8 = puVar8 + 1;
          if (*(long *)(param_1 + 0x928) != 0x40) {
            lVar15 = *(long *)(param_1 + 0x918);
          }
          __memcpy_chk(puVar8,lVar15,*(long *)(param_1 + 0x928) * 0xc,lVar10);
          lVar10 = *(long *)(param_1 + 0x918);
          if (lVar10 != 0) {
            operator_delete__((void *)(lVar10 + -8),*(long *)(lVar10 + -8) * 0xc + 8);
          }
          *(ulong **)(param_1 + 0x918) = puVar8;
          uVar16 = *(ulong *)(param_1 + 0x920);
          *(ulong *)(param_1 + 0x928) = uVar20;
          if (uVar20 == 0x40) {
            puVar8 = (ulong *)(param_1 + 0x618);
          }
        }
LAB_001060c7:
        piVar9 = (int *)((long)puVar8 + uVar16 * 0xc);
        *(ulong *)(param_1 + 0x920) = uVar16 + 1;
        *piVar9 = iVar13 + 7;
        piVar9[1] = iVar14;
        piVar9[2] = iVar13;
      }
      lVar17 = lVar17 + 1;
    } while (lVar3 != lVar17);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Volume::Volume() */

void __thiscall VHACD::Volume::Volume(Volume *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _LC10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar2 = _UNK_0010daa8;
  uVar1 = __LC17;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar1 = _LC10;
  *(undefined8 *)(this + 0x20) = _LC10;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  return;
}



/* VHACD::Volume::~Volume() */

void __thiscall VHACD::Volume::~Volume(Volume *this)

{
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
    return;
  }
  return;
}



/* VHACD::Volume::Allocate() */

void __thiscall VHACD::Volume::Allocate(Volume *this)

{
  void *pvVar1;
  ulong uVar2;
  
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  uVar2 = *(long *)(this + 0x38) * *(long *)(this + 0x40) * *(long *)(this + 0x48);
  pvVar1 = operator_new__(uVar2);
  *(void **)(this + 0x68) = pvVar1;
  __memset_chk(pvVar1,0,uVar2,uVar2);
  return;
}



/* VHACD::Volume::Free() */

void __thiscall VHACD::Volume::Free(Volume *this)

{
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  *(undefined8 *)(this + 0x68) = 0;
  return;
}



/* VHACD::Volume::FillInsideSurface() */

void __thiscall VHACD::Volume::FillInsideSurface(Volume *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x38);
  lVar2 = *(long *)(this + 0x40);
  lVar3 = *(long *)(this + 0x48);
  lVar7 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar2 != 0) {
    do {
      if (lVar3 == 0) {
        do {
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        return;
      }
      lVar6 = 0;
      do {
        lVar5 = 0;
        do {
          pcVar4 = (char *)((*(long *)(this + 0x40) * lVar5 + lVar6) * *(long *)(this + 0x38) +
                            lVar7 + *(long *)(this + 0x68));
          if (*pcVar4 == '\0') {
            *pcVar4 = '\x02';
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
          }
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    return;
  }
  do {
    lVar7 = lVar7 + 1;
  } while (lVar1 != lVar7);
  return;
}



/* VHACD::Volume::Convert(VHACD::Mesh&, VHACD::VOXEL_VALUE) const */

void __thiscall VHACD::Volume::Convert(Volume *this,long param_1,uint param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  double *pdVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  uVar6 = *(ulong *)(this + 0x48);
  uVar7 = *(ulong *)(this + 0x38);
  uVar8 = *(ulong *)(this + 0x40);
  if (uVar7 != 0) {
    uVar22 = 0;
    if (uVar8 == 0) {
      do {
        if (uVar7 == uVar22 + 1) {
          return;
        }
        uVar22 = uVar22 + 2;
      } while (uVar7 != uVar22);
    }
    else {
      puVar3 = (ulong *)(param_1 + 0x618);
      do {
        if (uVar6 == 0) {
          do {
            uVar22 = uVar22 + 1;
          } while (uVar7 != uVar22);
          return;
        }
        uVar21 = 0;
        do {
          uVar17 = 0;
          do {
            while (*(byte *)(uVar22 + *(long *)(this + 0x68) +
                            (*(long *)(this + 0x40) * uVar17 + uVar21) * *(long *)(this + 0x38)) !=
                   param_3) {
              uVar17 = uVar17 + 1;
              if (uVar6 == uVar17) goto LAB_00107811;
            }
            dVar5 = *(double *)(this + 0x30);
            dVar24 = ((double)uVar17 - _LC1) * dVar5;
            uVar19 = *(ulong *)(param_1 + 0x608);
            uVar20 = *(ulong *)(param_1 + 0x610);
            dVar27 = _LC1 + (double)uVar22;
            dVar29 = _LC1 + (double)uVar21;
            dVar25 = (double)uVar22 + _LC23;
            dVar26 = (double)uVar21 + _LC23;
            iVar11 = (int)uVar19;
            dVar30 = ((double)uVar17 + _LC1) * dVar5;
            dVar32 = dVar25 * dVar5;
            dVar33 = dVar26 * dVar5;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar28 = dVar27 * dVar5;
            dVar26 = dVar26 * dVar5;
            dVar25 = dVar25 * dVar5;
            dVar31 = dVar29 * dVar5;
            dVar27 = dVar27 * dVar5;
            dVar29 = dVar29 * dVar5;
            dVar5 = *(double *)(this + 0x10);
            uVar23 = uVar20;
            if (uVar19 == uVar20) {
              uVar23 = uVar20 * 2;
              if (uVar23 < 0x555555555555556) {
                lVar16 = uVar20 * 0x30;
                uVar19 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar19);
              *puVar14 = uVar23;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar19 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar23;
            }
            lVar16 = param_1;
            if (uVar23 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar20 = uVar19 + 1;
            pdVar4 = (double *)(lVar16 + uVar19 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar20;
            pdVar4[2] = dVar24 + dVar5;
            *pdVar4 = dVar9 + dVar32;
            pdVar4[1] = dVar10 + dVar33;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar19 = uVar23;
            if (uVar20 == uVar23) {
              uVar19 = uVar23 * 2;
              if (uVar19 < 0x555555555555556) {
                lVar16 = uVar23 * 0x30;
                uVar20 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar20 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar20);
              *puVar14 = uVar19;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar20 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar19;
            }
            lVar16 = param_1;
            if (uVar19 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar23 = uVar20 + 1;
            pdVar4 = (double *)(lVar16 + uVar20 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar23;
            pdVar4[2] = dVar24 + dVar5;
            *pdVar4 = dVar9 + dVar28;
            pdVar4[1] = dVar10 + dVar26;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar20 = uVar19;
            if (uVar23 == uVar19) {
              uVar20 = uVar19 * 2;
              if (uVar20 < 0x555555555555556) {
                lVar16 = uVar19 * 0x30;
                uVar19 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar19);
              *puVar14 = uVar20;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar23 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar20;
            }
            lVar16 = param_1;
            if (uVar20 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar19 = uVar23 + 1;
            pdVar4 = (double *)(lVar16 + uVar23 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar19;
            pdVar4[2] = dVar24 + dVar5;
            *pdVar4 = dVar9 + dVar27;
            pdVar4[1] = dVar10 + dVar29;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar23 = uVar20;
            if (uVar19 == uVar20) {
              uVar23 = uVar20 * 2;
              if (uVar23 < 0x555555555555556) {
                lVar16 = uVar20 * 0x30;
                uVar19 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar19);
              *puVar14 = uVar23;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar19 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar23;
            }
            lVar16 = param_1;
            if (uVar23 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar20 = uVar19 + 1;
            pdVar4 = (double *)(lVar16 + uVar19 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar20;
            pdVar4[2] = dVar24 + dVar5;
            *pdVar4 = dVar9 + dVar25;
            pdVar4[1] = dVar10 + dVar31;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar19 = uVar23;
            if (uVar20 == uVar23) {
              uVar19 = uVar23 * 2;
              if (uVar19 < 0x555555555555556) {
                lVar16 = uVar23 * 0x30;
                uVar20 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar20 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar20);
              *puVar14 = uVar19;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar20 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar19;
            }
            lVar16 = param_1;
            if (uVar19 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar23 = uVar20 + 1;
            pdVar4 = (double *)(lVar16 + uVar20 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar23;
            pdVar4[2] = dVar30 + dVar5;
            *pdVar4 = dVar9 + dVar32;
            pdVar4[1] = dVar10 + dVar33;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar20 = uVar19;
            if (uVar23 == uVar19) {
              uVar20 = uVar19 * 2;
              if (uVar20 < 0x555555555555556) {
                lVar16 = uVar19 * 0x30;
                uVar19 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar19);
              *puVar14 = uVar20;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar23 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar20;
            }
            lVar16 = param_1;
            if (uVar20 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar19 = uVar23 + 1;
            pdVar4 = (double *)(lVar16 + uVar23 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar19;
            pdVar4[2] = dVar30 + dVar5;
            *pdVar4 = dVar9 + dVar28;
            pdVar4[1] = dVar10 + dVar26;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar23 = uVar20;
            if (uVar19 == uVar20) {
              uVar23 = uVar20 * 2;
              if (uVar23 < 0x555555555555556) {
                lVar16 = uVar20 * 0x30;
                uVar19 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar19);
              *puVar14 = uVar23;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar19 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar23;
            }
            lVar16 = param_1;
            if (uVar23 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar20 = uVar19 + 1;
            pdVar4 = (double *)(lVar16 + uVar19 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar20;
            *pdVar4 = dVar9 + dVar27;
            pdVar4[1] = dVar10 + dVar29;
            pdVar4[2] = dVar30 + dVar5;
            dVar9 = *(double *)this;
            dVar10 = *(double *)(this + 8);
            dVar5 = *(double *)(this + 0x10);
            uVar19 = uVar23;
            if (uVar20 == uVar23) {
              uVar19 = uVar23 * 2;
              if (uVar19 < 0x555555555555556) {
                lVar16 = uVar23 * 0x30;
                uVar20 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar20 = 0xffffffffffffffff;
              }
              puVar14 = (ulong *)operator_new__(uVar20);
              *puVar14 = uVar19;
              lVar18 = param_1;
              if (*(long *)(param_1 + 0x610) != 0x40) {
                lVar18 = *(long *)(param_1 + 0x600);
              }
              __memcpy_chk(puVar14 + 1,lVar18,*(long *)(param_1 + 0x610) * 0x18,lVar16);
              lVar16 = *(long *)(param_1 + 0x600);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
              }
              *(ulong **)(param_1 + 0x600) = puVar14 + 1;
              uVar20 = *(ulong *)(param_1 + 0x608);
              *(ulong *)(param_1 + 0x610) = uVar19;
            }
            lVar16 = param_1;
            if (uVar19 != 0x40) {
              lVar16 = *(long *)(param_1 + 0x600);
            }
            uVar19 = *(ulong *)(param_1 + 0x928);
            pdVar4 = (double *)(lVar16 + uVar20 * 0x18);
            *(ulong *)(param_1 + 0x608) = uVar20 + 1;
            uVar20 = *(ulong *)(param_1 + 0x920);
            *pdVar4 = dVar9 + dVar25;
            pdVar4[1] = dVar10 + dVar31;
            pdVar4[2] = dVar30 + dVar5;
            iVar1 = iVar11 + 1;
            iVar2 = iVar11 + 2;
            uVar23 = uVar19;
            if (uVar20 == uVar19) {
              uVar23 = uVar19 * 2;
              if (uVar23 < 0xaaaaaaaaaaaaaab) {
                lVar16 = uVar19 * 0x18;
                uVar19 = lVar16 + 8;
              }
              else {
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
              }
              puVar13 = (ulong *)operator_new__(uVar19);
              *puVar13 = uVar23;
              puVar14 = puVar3;
              if (*(long *)(param_1 + 0x928) != 0x40) {
                puVar14 = *(ulong **)(param_1 + 0x918);
              }
              __memcpy_chk(puVar13 + 1,puVar14,*(long *)(param_1 + 0x928) * 0xc,lVar16);
              lVar16 = *(long *)(param_1 + 0x918);
              if (lVar16 != 0) {
                operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
              }
              *(ulong **)(param_1 + 0x918) = puVar13 + 1;
              uVar20 = *(ulong *)(param_1 + 0x920);
              *(ulong *)(param_1 + 0x928) = uVar23;
            }
            iVar12 = iVar11 + 3;
            uVar19 = uVar20 + 1;
            if (uVar23 == 0x40) {
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)(uVar20 * 0xc + (long)puVar3);
              *piVar15 = iVar11;
              piVar15[1] = iVar2;
              piVar15[2] = iVar1;
              if (uVar19 == 0x40) {
                uVar23 = 0x80;
LAB_00108c96:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_0010867c;
              }
LAB_0010806b:
              lVar16 = uVar19 + 1;
              *(long *)(param_1 + 0x920) = lVar16;
              piVar15 = (int *)((long)puVar3 + uVar19 * 0xc);
              *piVar15 = iVar11;
              piVar15[2] = iVar2;
              piVar15[1] = iVar12;
              if (lVar16 == 0x40) {
                uVar23 = 0x80;
LAB_00108c76:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_001085b4;
              }
              uVar19 = uVar19 + 2;
              lVar16 = lVar16 * 0xc;
LAB_001080cc:
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)((long)puVar3 + lVar16);
              piVar15[2] = iVar11 + 6;
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar11 + 5;
              if (uVar19 == 0x40) {
                uVar23 = 0x80;
LAB_001080fe:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
LAB_0010810a:
                puVar13 = (ulong *)operator_new__(uVar19);
                puVar14 = puVar13 + 1;
                *puVar13 = uVar23;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar19 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 != 0x40) goto LAB_00107626;
              }
              uVar20 = uVar19 + 1;
              *(ulong *)(param_1 + 0x920) = uVar20;
              piVar15 = (int *)((long)puVar3 + uVar19 * 0xc);
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar11 + 6;
              piVar15[2] = iVar11 + 7;
              if (uVar20 == 0x40) {
                uVar23 = 0x80;
LAB_00108c56:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_00108b9c;
              }
LAB_001081e6:
              uVar19 = uVar20 + 1;
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)((long)puVar3 + uVar20 * 0xc);
              *piVar15 = iVar11 + 7;
              piVar15[1] = iVar11 + 6;
              piVar15[2] = iVar2;
              if (uVar19 == 0x40) {
                uVar23 = 0x80;
LAB_00108d16:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_00108ac4;
              }
LAB_00108217:
              uVar20 = uVar19 + 1;
              *(ulong *)(param_1 + 0x920) = uVar20;
              piVar15 = (int *)((long)puVar3 + uVar19 * 0xc);
              *piVar15 = iVar11 + 7;
              piVar15[1] = iVar2;
              piVar15[2] = iVar12;
              if (uVar20 == 0x40) {
                uVar23 = 0x80;
LAB_00108251:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_0010825d;
              }
LAB_00108305:
              uVar19 = uVar20 + 1;
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)((long)puVar3 + uVar20 * 0xc);
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar1;
              piVar15[2] = iVar11 + 5;
              if (uVar19 == 0x40) {
                uVar23 = 0x80;
LAB_00108d36:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_001089ec;
              }
LAB_0010833c:
              uVar20 = uVar19 + 1;
              *(ulong *)(param_1 + 0x920) = uVar20;
              piVar15 = (int *)((long)puVar3 + uVar19 * 0xc);
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar11;
              piVar15[2] = iVar1;
              if (uVar20 == 0x40) {
                uVar23 = 0x80;
LAB_00108d9e:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_00108914;
              }
LAB_00108373:
              uVar19 = uVar20 + 1;
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)((long)puVar3 + uVar20 * 0xc);
              *piVar15 = iVar11 + 6;
              piVar15[1] = iVar11 + 5;
              piVar15[2] = iVar1;
              if (uVar19 == 0x40) {
                uVar23 = 0x80;
LAB_00108de6:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_00108844;
              }
LAB_001083a7:
              lVar16 = uVar19 + 1;
              *(long *)(param_1 + 0x920) = lVar16;
              piVar15 = (int *)((long)puVar3 + uVar19 * 0xc);
              *piVar15 = iVar11 + 6;
              piVar15[1] = iVar1;
              piVar15[2] = iVar2;
              if (lVar16 == 0x40) {
                uVar23 = 0x80;
LAB_00108e06:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
                goto LAB_00108745;
              }
              uVar19 = uVar19 + 2;
              uVar23 = *(ulong *)(param_1 + 0x928);
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)((long)puVar3 + lVar16 * 0xc);
              piVar15[1] = iVar11;
              *piVar15 = iVar11 + 7;
              piVar15[2] = iVar11 + 4;
              if (uVar19 == uVar23) goto LAB_001084e0;
LAB_00108416:
              puVar14 = puVar3;
            }
            else {
              puVar14 = *(ulong **)(param_1 + 0x918);
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)(uVar20 * 0xc + (long)puVar14);
              *piVar15 = iVar11;
              piVar15[1] = iVar2;
              piVar15[2] = iVar1;
              if (uVar23 == uVar19) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108c96;
LAB_0010867c:
                puVar13 = (ulong *)operator_new__(uVar19);
                puVar14 = puVar13 + 1;
                *puVar13 = uVar23;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar19 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_0010806b;
              }
              uVar20 = uVar19 + 1;
              piVar15 = (int *)((long)puVar14 + uVar19 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar20;
              *piVar15 = iVar11;
              piVar15[1] = iVar12;
              piVar15[2] = iVar2;
              if (uVar20 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108c76;
LAB_001085b4:
                puVar13 = (ulong *)operator_new__(uVar19);
                *puVar13 = uVar23;
                puVar14 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar14 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar13 + 1,puVar14,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar13 + 1;
                uVar20 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar19 = uVar20 + 1;
              lVar16 = uVar20 * 0xc;
              if (uVar23 == 0x40) goto LAB_001080cc;
              puVar14 = *(ulong **)(param_1 + 0x918);
              *(ulong *)(param_1 + 0x920) = uVar19;
              piVar15 = (int *)(lVar16 + (long)puVar14);
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar11 + 5;
              piVar15[2] = iVar11 + 6;
              if (uVar23 == uVar19) {
                uVar23 = uVar23 * 2;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_001080fe;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                goto LAB_0010810a;
              }
LAB_00107626:
              uVar20 = uVar19 + 1;
              piVar15 = (int *)((long)puVar14 + uVar19 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar20;
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar11 + 6;
              piVar15[2] = iVar11 + 7;
              if (uVar20 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108c56;
LAB_00108b9c:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar20 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_001081e6;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar19 = uVar20 + 1;
              piVar15 = (int *)((long)puVar14 + uVar20 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar19;
              *piVar15 = iVar11 + 7;
              piVar15[1] = iVar11 + 6;
              piVar15[2] = iVar2;
              if (uVar19 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108d16;
LAB_00108ac4:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar19 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_00108217;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar20 = uVar19 + 1;
              piVar15 = (int *)((long)puVar14 + uVar19 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar20;
              *piVar15 = iVar11 + 7;
              piVar15[1] = iVar2;
              piVar15[2] = iVar12;
              if (uVar20 == uVar23) {
                uVar23 = uVar23 * 2;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108251;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
LAB_0010825d:
                puVar13 = (ulong *)operator_new__(uVar19);
                puVar14 = puVar13 + 1;
                *puVar13 = uVar23;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar20 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_00108305;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar19 = uVar20 + 1;
              piVar15 = (int *)((long)puVar14 + uVar20 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar19;
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar1;
              piVar15[2] = iVar11 + 5;
              if (uVar19 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108d36;
LAB_001089ec:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar19 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_0010833c;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar20 = uVar19 + 1;
              piVar15 = (int *)((long)puVar14 + uVar19 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar20;
              *piVar15 = iVar11 + 4;
              piVar15[1] = iVar11;
              piVar15[2] = iVar1;
              if (uVar20 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108d9e;
LAB_00108914:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar20 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_00108373;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar19 = uVar20 + 1;
              piVar15 = (int *)((long)puVar14 + uVar20 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar19;
              *piVar15 = iVar11 + 6;
              piVar15[1] = iVar11 + 5;
              piVar15[2] = iVar1;
              if (uVar19 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108de6;
LAB_00108844:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar19 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_001083a7;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
              }
              uVar20 = uVar19 + 1;
              piVar15 = (int *)((long)puVar14 + uVar19 * 0xc);
              *(ulong *)(param_1 + 0x920) = uVar20;
              *piVar15 = iVar11 + 6;
              piVar15[1] = iVar1;
              piVar15[2] = iVar2;
              if (uVar20 == uVar23) {
                uVar23 = uVar23 * 2;
                lVar16 = -9;
                uVar19 = 0xffffffffffffffff;
                if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108e06;
LAB_00108745:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar20 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 != 0x40) goto LAB_001077a7;
                uVar19 = uVar20 + 1;
                *(ulong *)(param_1 + 0x920) = uVar19;
                piVar15 = (int *)((long)puVar3 + uVar20 * 0xc);
                *piVar15 = iVar11 + 7;
                piVar15[1] = iVar11;
                piVar15[2] = iVar11 + 4;
                if (uVar19 != 0x40) goto LAB_00108416;
                uVar23 = 0x80;
LAB_00108807:
                lVar16 = uVar23 * 0xc;
                uVar19 = lVar16 + 8;
LAB_00108504:
                puVar14 = (ulong *)operator_new__(uVar19);
                *puVar14 = uVar23;
                puVar14 = puVar14 + 1;
                puVar13 = puVar3;
                if (*(long *)(param_1 + 0x928) != 0x40) {
                  puVar13 = *(ulong **)(param_1 + 0x918);
                }
                __memcpy_chk(puVar14,puVar13,*(long *)(param_1 + 0x928) * 0xc,lVar16);
                lVar16 = *(long *)(param_1 + 0x918);
                if (lVar16 != 0) {
                  operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
                }
                *(ulong **)(param_1 + 0x918) = puVar14;
                uVar19 = *(ulong *)(param_1 + 0x920);
                *(ulong *)(param_1 + 0x928) = uVar23;
                if (uVar23 == 0x40) goto LAB_00108416;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x928);
LAB_001077a7:
                uVar19 = uVar20 + 1;
                piVar15 = (int *)((long)puVar14 + uVar20 * 0xc);
                *(ulong *)(param_1 + 0x920) = uVar19;
                *piVar15 = iVar11 + 7;
                piVar15[1] = iVar11;
                piVar15[2] = iVar11 + 4;
                if (uVar19 == uVar23) {
LAB_001084e0:
                  uVar23 = uVar23 * 2;
                  lVar16 = -9;
                  uVar19 = 0xffffffffffffffff;
                  if (uVar23 < 0xaaaaaaaaaaaaaab) goto LAB_00108807;
                  goto LAB_00108504;
                }
              }
            }
            piVar15 = (int *)((long)puVar14 + uVar19 * 0xc);
            *(ulong *)(param_1 + 0x920) = uVar19 + 1;
            uVar17 = uVar17 + 1;
            *piVar15 = iVar11 + 7;
            piVar15[1] = iVar12;
            piVar15[2] = iVar11;
          } while (uVar6 != uVar17);
LAB_00107811:
          uVar21 = uVar21 + 1;
        } while (uVar8 != uVar21);
        uVar22 = uVar22 + 1;
      } while (uVar7 != uVar22);
    }
  }
  return;
}



/* VHACD::Volume::Convert(VHACD::VoxelSet&) const */

void __thiscall VHACD::Volume::Convert(Volume *this,VoxelSet *param_1)

{
  double dVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  void *pvVar7;
  VoxelSet *pVVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  short local_40;
  short local_3e;
  
  uVar9 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
  *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)this;
  *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(this + 0x10);
  if (*(ulong *)(param_1 + 0xa08) < uVar9) {
    uVar13 = uVar9 * 8;
    if (0xfffffffffffffff < uVar9) {
      uVar13 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar13);
    pVVar8 = param_1 + 0x9b8;
    if (*(long *)(param_1 + 0xa08) != 8) {
      pVVar8 = *(VoxelSet **)(param_1 + 0x9f8);
    }
    __memcpy_chk(pvVar7,pVVar8,*(long *)(param_1 + 0xa00) * 8,uVar13);
    if (*(void **)(param_1 + 0x9f8) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x9f8));
    }
    *(void **)(param_1 + 0x9f8) = pvVar7;
    *(ulong *)(param_1 + 0xa08) = uVar9;
  }
  dVar1 = *(double *)(this + 0x30);
  lVar14 = 0;
  sVar3 = *(short *)(this + 0x40);
  sVar4 = *(short *)(this + 0x48);
  sVar6 = (short)*(undefined8 *)(this + 0x38);
  *(double *)(param_1 + 0x9b0) = dVar1;
  *(undefined1 (*) [16])(param_1 + 0x988) = (undefined1  [16])0x0;
  *(double *)(param_1 + 0xa10) = dVar1 * dVar1 * dVar1;
  if (sVar6 < 1) {
    return;
  }
LAB_00108fd8:
  local_3e = (short)lVar14;
  if (0 < sVar3) {
    do {
      lVar12 = 0;
      do {
        if (0 < sVar4) {
          local_40 = (short)lVar12;
          goto LAB_00109010;
        }
        lVar12 = lVar12 + 1;
      } while ((short)lVar12 < sVar3);
      lVar14 = lVar14 + 1;
      local_3e = (short)lVar14;
      if (sVar6 <= local_3e) {
        return;
      }
    } while( true );
  }
  goto LAB_00109306;
LAB_00109010:
  do {
    lVar10 = 0;
    do {
      while( true ) {
        uVar5 = (undefined2)lVar10;
        cVar2 = *(char *)(*(long *)(this + 0x68) + lVar14 +
                         (*(long *)(this + 0x40) * lVar10 + lVar12) * *(long *)(this + 0x38));
        if (cVar2 != '\x02') break;
        uVar13 = *(ulong *)(param_1 + 0xa00);
        uVar9 = *(ulong *)(param_1 + 0xa08);
        uVar11 = uVar9;
        if (uVar13 == uVar9) {
          uVar11 = uVar9 * 2;
          uVar9 = uVar9 << 4;
          if (0xfffffffffffffff < uVar11) {
            uVar9 = 0xffffffffffffffff;
          }
          pvVar7 = operator_new__(uVar9);
          pVVar8 = param_1 + 0x9b8;
          if (*(long *)(param_1 + 0xa08) != 8) {
            pVVar8 = *(VoxelSet **)(param_1 + 0x9f8);
          }
          __memcpy_chk(pvVar7,pVVar8,*(long *)(param_1 + 0xa08) * 8,uVar9);
          if (*(void **)(param_1 + 0x9f8) != (void *)0x0) {
            operator_delete__(*(void **)(param_1 + 0x9f8));
          }
          *(ulong *)(param_1 + 0xa08) = uVar11;
          *(void **)(param_1 + 0x9f8) = pvVar7;
          uVar13 = *(ulong *)(param_1 + 0xa00);
        }
        pVVar8 = param_1 + 0x9b8;
        if (uVar11 != 8) {
          pVVar8 = *(VoxelSet **)(param_1 + 0x9f8);
        }
        lVar10 = lVar10 + 1;
        pVVar8 = pVVar8 + uVar13 * 8;
        *(ulong *)(param_1 + 0xa00) = uVar13 + 1;
        *(short *)pVVar8 = local_3e;
        *(short *)(pVVar8 + 2) = local_40;
        *(undefined2 *)(pVVar8 + 4) = uVar5;
        *(undefined2 *)(pVVar8 + 6) = 2;
        *(long *)(param_1 + 0x990) = *(long *)(param_1 + 0x990) + 1;
        if (sVar4 <= (short)lVar10) goto LAB_001090cd;
      }
      if (cVar2 == '\x03') {
        uVar13 = *(ulong *)(param_1 + 0xa00);
        uVar9 = *(ulong *)(param_1 + 0xa08);
        uVar11 = uVar9;
        if (uVar13 == uVar9) {
          uVar11 = uVar9 * 2;
          uVar9 = uVar9 << 4;
          if (0xfffffffffffffff < uVar11) {
            uVar9 = 0xffffffffffffffff;
          }
          pvVar7 = operator_new__(uVar9);
          pVVar8 = param_1 + 0x9b8;
          if (*(long *)(param_1 + 0xa08) != 8) {
            pVVar8 = *(VoxelSet **)(param_1 + 0x9f8);
          }
          __memcpy_chk(pvVar7,pVVar8,*(long *)(param_1 + 0xa08) * 8,uVar9);
          if (*(void **)(param_1 + 0x9f8) != (void *)0x0) {
            operator_delete__(*(void **)(param_1 + 0x9f8));
          }
          *(ulong *)(param_1 + 0xa08) = uVar11;
          *(void **)(param_1 + 0x9f8) = pvVar7;
          uVar13 = *(ulong *)(param_1 + 0xa00);
        }
        pVVar8 = param_1 + 0x9b8;
        if (uVar11 != 8) {
          pVVar8 = *(VoxelSet **)(param_1 + 0x9f8);
        }
        pVVar8 = pVVar8 + uVar13 * 8;
        *(ulong *)(param_1 + 0xa00) = uVar13 + 1;
        *(short *)pVVar8 = local_3e;
        *(short *)(pVVar8 + 2) = local_40;
        *(undefined2 *)(pVVar8 + 4) = uVar5;
        *(undefined2 *)(pVVar8 + 6) = 3;
        *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
      }
      lVar10 = lVar10 + 1;
    } while ((short)lVar10 < sVar4);
LAB_001090cd:
    lVar12 = lVar12 + 1;
    local_40 = (short)lVar12;
  } while (local_40 < sVar3);
LAB_00109306:
  lVar14 = lVar14 + 1;
  if (sVar6 <= (short)lVar14) {
    return;
  }
  goto LAB_00108fd8;
}



/* VHACD::Volume::Convert(VHACD::TetrahedronSet&) const */

void __thiscall VHACD::Volume::Convert(Volume *this,TetrahedronSet *param_1)

{
  TetrahedronSet TVar1;
  short sVar2;
  short sVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong *puVar8;
  ulong uVar9;
  TetrahedronSet *pTVar10;
  TetrahedronSet *pTVar11;
  long lVar12;
  double *pdVar13;
  TetrahedronSet *pTVar14;
  TetrahedronSet *pTVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulong local_108;
  short local_fa;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  TetrahedronSet local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (*(long *)(this + 0x50) + *(long *)(this + 0x58)) * 5;
  if (*(ulong *)(param_1 + 0xd38) < uVar9) {
    if (uVar9 < 0x13b13b13b13b13c) {
      lVar19 = (*(long *)(this + 0x50) + *(long *)(this + 0x58)) * 0x208;
      uVar16 = lVar19 + 8;
    }
    else {
      lVar19 = -9;
      uVar16 = 0xffffffffffffffff;
    }
    puVar8 = (ulong *)operator_new__(uVar16);
    pTVar15 = param_1 + 0x9e8;
    *puVar8 = uVar9;
    if (*(long *)(param_1 + 0xd38) != 8) {
      pTVar15 = *(TetrahedronSet **)(param_1 + 0xd28);
    }
    __memcpy_chk(puVar8 + 1,pTVar15,*(long *)(param_1 + 0xd30) * 0x68,lVar19);
    lVar19 = *(long *)(param_1 + 0xd28);
    if (lVar19 != 0) {
      operator_delete__((void *)(lVar19 + -8),*(long *)(lVar19 + -8) * 0x68 + 8);
    }
    *(ulong **)(param_1 + 0xd28) = puVar8 + 1;
    *(ulong *)(param_1 + 0xd38) = uVar9;
  }
  uVar9 = *(ulong *)(this + 0x38);
  local_108 = 0;
  sVar2 = *(short *)(this + 0x48);
  sVar3 = *(short *)(this + 0x40);
  *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(this + 0x30);
  uVar16 = uVar9 & 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0x988) = (undefined1  [16])0x0;
  if ((short)uVar9 < 1) {
LAB_00109993:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00109478:
  uVar9 = local_108 & 0xffff;
  if (sVar3 < 1) goto LAB_0010997f;
  do {
    lVar19 = 0;
    do {
      if (0 < sVar2) {
        local_fa = (short)lVar19;
        goto LAB_001094b0;
      }
      lVar19 = lVar19 + 1;
    } while ((short)lVar19 < sVar3);
    uVar9 = local_108 + 1;
    local_108 = uVar9;
  } while ((short)uVar9 < (short)uVar16);
  goto LAB_00109993;
LAB_001094b0:
  do {
    lVar20 = 0;
    do {
      while( true ) {
        pTVar15 = (TetrahedronSet *)
                  ((*(long *)(this + 0x40) * lVar20 + lVar19) * *(long *)(this + 0x38) + local_108 +
                  *(long *)(this + 0x68));
        TVar1 = *pTVar15;
        if ((byte)((char)TVar1 - 2U) < 2) break;
LAB_001094c0:
        lVar20 = lVar20 + 1;
        if (sVar2 <= (short)lVar20) goto LAB_00109958;
      }
      dVar23 = *(double *)(this + 0x30);
      local_48 = TVar1;
      uVar17 = *(ulong *)(param_1 + 0xd30);
      uVar18 = *(ulong *)(param_1 + 0xd38);
      dVar25 = ((double)(int)(short)lVar20 - _LC1) * dVar23 + *(double *)(this + 0x10);
      dVar27 = ((double)(int)(short)uVar9 - _LC1) * dVar23 + *(double *)this;
      dVar26 = ((double)(int)local_fa - _LC1) * dVar23 + *(double *)(this + 8);
      local_98 = dVar25;
      dVar24 = ((double)(int)(short)uVar9 + _LC1) * dVar23 + *(double *)this;
      dStack_90 = dVar27;
      dVar22 = ((double)(int)local_fa + _LC1) * dVar23 + *(double *)(this + 8);
      dVar23 = ((double)(int)(short)lVar20 + _LC1) * dVar23 + *(double *)(this + 0x10);
      dStack_a0 = dVar26;
      local_a8 = dVar24;
      local_88 = dVar22;
      dStack_80 = dVar25;
      local_78 = dVar24;
      local_70 = dVar22;
      local_68 = dVar23;
      local_60 = dVar27;
      local_58 = dVar26;
      local_50 = dVar23;
      uVar21 = uVar18;
      if (uVar17 == uVar18) {
        uVar21 = uVar18 * 2;
        if (uVar21 < 0x13b13b13b13b13c) {
          lVar12 = uVar18 * 0xd0;
          uVar17 = lVar12 + 8;
        }
        else {
          lVar12 = -9;
          uVar17 = 0xffffffffffffffff;
        }
        puVar8 = (ulong *)operator_new__(uVar17);
        pTVar14 = param_1 + 0x9e8;
        *puVar8 = uVar21;
        if (*(long *)(param_1 + 0xd38) != 8) {
          pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
        }
        __memcpy_chk(puVar8 + 1,pTVar14,*(long *)(param_1 + 0xd38) * 0x68,lVar12);
        lVar12 = *(long *)(param_1 + 0xd28);
        if (lVar12 != 0) {
          operator_delete__((void *)(lVar12 + -8),*(long *)(lVar12 + -8) * 0x68 + 8);
        }
        *(ulong **)(param_1 + 0xd28) = puVar8 + 1;
        uVar17 = *(ulong *)(param_1 + 0xd30);
        *(ulong *)(param_1 + 0xd38) = uVar21;
      }
      pTVar14 = param_1 + 0x9e8;
      if (uVar21 != 8) {
        pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
      }
      uVar18 = uVar17 + 1;
      *(ulong *)(param_1 + 0xd30) = uVar18;
      pTVar14 = pTVar14 + uVar17 * 0x68;
      pTVar11 = pTVar14;
      pdVar13 = &local_a8;
      do {
        dVar4 = pdVar13[1];
        dVar5 = pdVar13[4];
        dVar6 = pdVar13[5];
        pTVar10 = pTVar11 + 0x30;
        *(double *)pTVar11 = *pdVar13;
        *(double *)(pTVar11 + 8) = dVar4;
        dVar4 = pdVar13[2];
        dVar7 = pdVar13[3];
        *(double *)(pTVar11 + 0x20) = dVar5;
        *(double *)(pTVar11 + 0x28) = dVar6;
        *(double *)(pTVar11 + 0x10) = dVar4;
        *(double *)(pTVar11 + 0x18) = dVar7;
        pTVar11 = pTVar10;
        pdVar13 = pdVar13 + 6;
      } while (pTVar10 != pTVar14 + 0x60);
      pTVar14[0x60] = TVar1;
      local_98 = dVar23;
      dStack_90 = dVar24;
      local_88 = dVar26;
      if (uVar18 == uVar21) {
        uVar17 = uVar18 * 2;
        if (uVar17 < 0x13b13b13b13b13c) {
          lVar12 = uVar18 * 0xd0;
          uVar18 = lVar12 + 8;
        }
        else {
          lVar12 = -9;
          uVar18 = 0xffffffffffffffff;
        }
        puVar8 = (ulong *)operator_new__(uVar18);
        pTVar14 = param_1 + 0x9e8;
        *puVar8 = uVar17;
        if (*(long *)(param_1 + 0xd38) != 8) {
          pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
        }
        __memcpy_chk(puVar8 + 1,pTVar14,*(long *)(param_1 + 0xd38) * 0x68,lVar12);
        lVar12 = *(long *)(param_1 + 0xd28);
        if (lVar12 != 0) {
          operator_delete__((void *)(lVar12 + -8),*(long *)(lVar12 + -8) * 0x68 + 8);
        }
        *(ulong **)(param_1 + 0xd28) = puVar8 + 1;
        *(ulong *)(param_1 + 0xd38) = uVar17;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0xd38);
      }
      pTVar14 = param_1 + 0x9e8;
      if (uVar17 != 8) {
        pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
      }
      lVar12 = *(long *)(param_1 + 0xd30);
      uVar18 = lVar12 + 1;
      *(ulong *)(param_1 + 0xd30) = uVar18;
      pTVar14 = pTVar14 + lVar12 * 0x68;
      pTVar11 = pTVar14;
      pdVar13 = &local_a8;
      do {
        dVar4 = pdVar13[1];
        dVar5 = pdVar13[2];
        dVar6 = pdVar13[3];
        pTVar10 = pTVar11 + 0x30;
        *(double *)pTVar11 = *pdVar13;
        *(double *)(pTVar11 + 8) = dVar4;
        dVar4 = pdVar13[4];
        dVar7 = pdVar13[5];
        *(double *)(pTVar11 + 0x10) = dVar5;
        *(double *)(pTVar11 + 0x18) = dVar6;
        *(double *)(pTVar11 + 0x20) = dVar4;
        *(double *)(pTVar11 + 0x28) = dVar7;
        pTVar11 = pTVar10;
        pdVar13 = pdVar13 + 6;
      } while (pTVar10 != pTVar14 + 0x60);
      pTVar14[0x60] = TVar1;
      dStack_a0 = dVar22;
      local_98 = dVar25;
      dStack_90 = dVar27;
      local_88 = dVar22;
      local_60 = dVar24;
      local_50 = dVar25;
      if (uVar18 == uVar17) {
        uVar17 = uVar18 * 2;
        if (uVar17 < 0x13b13b13b13b13c) {
          lVar12 = uVar18 * 0xd0;
          uVar18 = lVar12 + 8;
        }
        else {
          lVar12 = -9;
          uVar18 = 0xffffffffffffffff;
        }
        puVar8 = (ulong *)operator_new__(uVar18);
        pTVar14 = param_1 + 0x9e8;
        *puVar8 = uVar17;
        if (*(long *)(param_1 + 0xd38) != 8) {
          pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
        }
        __memcpy_chk(puVar8 + 1,pTVar14,*(long *)(param_1 + 0xd38) * 0x68,lVar12);
        lVar12 = *(long *)(param_1 + 0xd28);
        if (lVar12 != 0) {
          operator_delete__((void *)(lVar12 + -8),*(long *)(lVar12 + -8) * 0x68 + 8);
        }
        *(ulong **)(param_1 + 0xd28) = puVar8 + 1;
        *(ulong *)(param_1 + 0xd38) = uVar17;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0xd38);
      }
      pTVar14 = param_1 + 0x9e8;
      if (uVar17 != 8) {
        pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
      }
      lVar12 = *(long *)(param_1 + 0xd30);
      uVar18 = lVar12 + 1;
      *(ulong *)(param_1 + 0xd30) = uVar18;
      pTVar14 = pTVar14 + lVar12 * 0x68;
      pTVar11 = pTVar14;
      pdVar13 = &local_a8;
      do {
        dVar24 = pdVar13[1];
        dVar4 = pdVar13[2];
        dVar5 = pdVar13[3];
        pTVar10 = pTVar11 + 0x30;
        *(double *)pTVar11 = *pdVar13;
        *(double *)(pTVar11 + 8) = dVar24;
        dVar24 = pdVar13[4];
        dVar6 = pdVar13[5];
        *(double *)(pTVar11 + 0x10) = dVar4;
        *(double *)(pTVar11 + 0x18) = dVar5;
        *(double *)(pTVar11 + 0x20) = dVar24;
        *(double *)(pTVar11 + 0x28) = dVar6;
        pTVar11 = pTVar10;
        pdVar13 = pdVar13 + 6;
      } while (pTVar10 != pTVar14 + 0x60);
      pTVar14[0x60] = TVar1;
      local_a8 = dVar27;
      dStack_a0 = dVar26;
      local_70 = dVar26;
      local_68 = dVar25;
      local_60 = dVar27;
      local_50 = dVar23;
      if (uVar18 == uVar17) {
        uVar17 = uVar18 * 2;
        if (uVar17 < 0x13b13b13b13b13c) {
          lVar12 = uVar18 * 0xd0;
          uVar18 = lVar12 + 8;
        }
        else {
          lVar12 = -9;
          uVar18 = 0xffffffffffffffff;
        }
        puVar8 = (ulong *)operator_new__(uVar18);
        pTVar14 = param_1 + 0x9e8;
        *puVar8 = uVar17;
        if (*(long *)(param_1 + 0xd38) != 8) {
          pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
        }
        __memcpy_chk(puVar8 + 1,pTVar14,*(long *)(param_1 + 0xd38) * 0x68,lVar12);
        lVar12 = *(long *)(param_1 + 0xd28);
        if (lVar12 != 0) {
          operator_delete__((void *)(lVar12 + -8),*(long *)(lVar12 + -8) * 0x68 + 8);
        }
        *(ulong **)(param_1 + 0xd28) = puVar8 + 1;
        *(ulong *)(param_1 + 0xd38) = uVar17;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0xd38);
      }
      pTVar14 = param_1 + 0x9e8;
      if (uVar17 != 8) {
        pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
      }
      lVar12 = *(long *)(param_1 + 0xd30);
      uVar18 = lVar12 + 1;
      *(ulong *)(param_1 + 0xd30) = uVar18;
      pTVar14 = pTVar14 + lVar12 * 0x68;
      pTVar11 = pTVar14;
      pdVar13 = &local_a8;
      do {
        dVar24 = pdVar13[1];
        dVar27 = pdVar13[2];
        dVar4 = pdVar13[3];
        pTVar10 = pTVar11 + 0x30;
        dVar5 = pdVar13[4];
        dVar6 = pdVar13[5];
        *(double *)pTVar11 = *pdVar13;
        *(double *)(pTVar11 + 8) = dVar24;
        *(double *)(pTVar11 + 0x10) = dVar27;
        *(double *)(pTVar11 + 0x18) = dVar4;
        *(double *)(pTVar11 + 0x20) = dVar5;
        *(double *)(pTVar11 + 0x28) = dVar6;
        pTVar11 = pTVar10;
        pdVar13 = pdVar13 + 6;
      } while (pTVar10 != pTVar14 + 0x60);
      pTVar14[0x60] = TVar1;
      dStack_a0 = dVar22;
      local_98 = dVar23;
      local_88 = dVar26;
      dStack_80 = dVar23;
      local_70 = dVar22;
      local_68 = dVar23;
      local_58 = dVar22;
      local_50 = dVar25;
      if (uVar18 == uVar17) {
        uVar17 = uVar18 * 2;
        if (uVar17 < 0x13b13b13b13b13c) {
          lVar12 = uVar18 * 0xd0;
          uVar18 = lVar12 + 8;
        }
        else {
          lVar12 = -9;
          uVar18 = 0xffffffffffffffff;
        }
        puVar8 = (ulong *)operator_new__(uVar18);
        pTVar14 = param_1 + 0x9e8;
        *puVar8 = uVar17;
        if (*(long *)(param_1 + 0xd38) != 8) {
          pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
        }
        __memcpy_chk(puVar8 + 1,pTVar14,*(long *)(param_1 + 0xd38) * 0x68,lVar12);
        lVar12 = *(long *)(param_1 + 0xd28);
        if (lVar12 != 0) {
          operator_delete__((void *)(lVar12 + -8),*(long *)(lVar12 + -8) * 0x68 + 8);
        }
        *(ulong *)(param_1 + 0xd38) = uVar17;
        *(ulong **)(param_1 + 0xd28) = puVar8 + 1;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0xd38);
      }
      pTVar14 = param_1 + 0x9e8;
      if (uVar17 != 8) {
        pTVar14 = *(TetrahedronSet **)(param_1 + 0xd28);
      }
      lVar12 = *(long *)(param_1 + 0xd30);
      *(long *)(param_1 + 0xd30) = lVar12 + 1;
      pTVar14 = pTVar14 + lVar12 * 0x68;
      pTVar11 = pTVar14;
      pdVar13 = &local_a8;
      do {
        dVar23 = pdVar13[1];
        dVar22 = pdVar13[2];
        dVar24 = pdVar13[3];
        pTVar10 = pTVar11 + 0x30;
        dVar25 = pdVar13[4];
        dVar26 = pdVar13[5];
        *(double *)pTVar11 = *pdVar13;
        *(double *)(pTVar11 + 8) = dVar23;
        *(double *)(pTVar11 + 0x10) = dVar22;
        *(double *)(pTVar11 + 0x18) = dVar24;
        *(double *)(pTVar11 + 0x20) = dVar25;
        *(double *)(pTVar11 + 0x28) = dVar26;
        pTVar11 = pTVar10;
        pdVar13 = pdVar13 + 6;
      } while (pTVar10 != pTVar14 + 0x60);
      pTVar14[0x60] = TVar1;
      if (*pTVar15 == (TetrahedronSet)0x2) {
        *(long *)(param_1 + 0x990) = *(long *)(param_1 + 0x990) + 5;
        goto LAB_001094c0;
      }
      *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 5;
      lVar20 = lVar20 + 1;
    } while ((short)lVar20 < sVar2);
LAB_00109958:
    lVar19 = lVar19 + 1;
    local_fa = (short)lVar19;
  } while (local_fa < sVar3);
  uVar16 = uVar16 & 0xffff;
LAB_0010997f:
  local_108 = local_108 + 1;
  if ((short)uVar16 <= (short)local_108) goto LAB_00109993;
  goto LAB_00109478;
}



/* VHACD::Volume::AlignToPrincipalAxes(double (&) [3][3]) const */

void __thiscall VHACD::Volume::AlignToPrincipalAxes(Volume *this,double *param_1)

{
  short sVar1;
  long lVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  ulong uVar8;
  short sVar9;
  char *pcVar10;
  short sVar11;
  long lVar12;
  long in_FS_OFFSET;
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
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double local_88 [9];
  long local_40;
  
  lVar2 = *(long *)(this + 0x38);
  sVar1 = *(short *)(this + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar6 = (short)lVar2;
  if (sVar6 < 1) {
    local_98 = 0.0;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
  }
  else {
    sVar3 = (short)*(long *)(this + 0x40);
    lVar7 = *(long *)(this + 0x40) * lVar2;
    dVar13 = 0.0;
    lVar5 = 0;
    dVar15 = 0.0;
    dVar17 = 0.0;
    uVar8 = 0;
    do {
      sVar11 = 0;
      lVar12 = lVar5;
      if (0 < sVar3) {
        do {
          if (0 < sVar1) {
            sVar9 = 0;
            pcVar10 = (char *)(*(long *)(this + 0x68) + lVar12);
            do {
              if ((byte)(*pcVar10 - 2U) < 2) {
                uVar8 = uVar8 + 1;
                dVar17 = dVar17 + (double)(int)(short)lVar5;
                dVar15 = dVar15 + (double)(int)sVar11;
                dVar13 = dVar13 + (double)(int)sVar9;
              }
              sVar9 = sVar9 + 1;
              pcVar10 = pcVar10 + lVar7;
            } while (sVar1 != sVar9);
          }
          sVar11 = sVar11 + 1;
          lVar12 = lVar12 + lVar2;
        } while (sVar11 < sVar3);
      }
      lVar5 = lVar5 + 1;
    } while ((short)lVar5 < sVar6);
    dVar19 = (double)uVar8;
    lVar5 = 0;
    bVar4 = false;
    local_98 = 0.0;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    dVar20 = 0.0;
    dVar21 = 0.0;
    dVar23 = 0.0;
    dVar22 = dVar21;
    dVar24 = dVar23;
    dVar25 = dVar23;
    do {
      sVar11 = 0;
      lVar12 = lVar5;
      if (0 < sVar3) {
        do {
          if (0 < sVar1) {
            sVar9 = 0;
            pcVar10 = (char *)(*(long *)(this + 0x68) + lVar12);
            do {
              if ((byte)(*pcVar10 - 2U) < 2) {
                bVar4 = true;
                dVar16 = (double)(int)(short)lVar5 - dVar17 / dVar19;
                dVar14 = (double)(int)sVar11 - dVar15 / dVar19;
                dVar18 = (double)(int)sVar9 - dVar13 / dVar19;
                dVar25 = dVar25 + dVar16 * dVar16;
                dVar24 = dVar24 + dVar14 * dVar14;
                dVar23 = dVar23 + dVar18 * dVar18;
                dVar22 = dVar22 + dVar16 * dVar14;
                dVar21 = dVar21 + dVar16 * dVar18;
                dVar20 = dVar20 + dVar14 * dVar18;
              }
              sVar9 = sVar9 + 1;
              pcVar10 = pcVar10 + lVar7;
            } while (sVar1 != sVar9);
          }
          sVar11 = sVar11 + 1;
          lVar12 = lVar12 + lVar2;
        } while (sVar11 < sVar3);
      }
      lVar5 = lVar5 + 1;
    } while ((short)lVar5 < sVar6);
    if (bVar4) {
      local_d8._8_8_ = dVar22;
      local_d8._0_8_ = dVar25;
      local_c8._8_8_ = 0;
      local_c8._0_8_ = dVar21;
      local_b8._8_8_ = dVar20;
      local_b8._0_8_ = dVar24;
      local_98 = dVar23;
    }
  }
  local_a8 = (undefined1  [16])0x0;
  Diagonalize((double *)local_d8,param_1,local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::TetrahedronSet() */

void __thiscall VHACD::TetrahedronSet::TetrahedronSet(TetrahedronSet *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined **)this = &DAT_0010d808;
  VHACD::Mesh::Mesh((Mesh *)(this + 8));
  uVar3 = _LC10;
  uVar2 = _UNK_0010da88;
  uVar1 = __LC15;
  *(undefined ***)this = &PTR__TetrahedronSet_0010d968;
  *(undefined8 *)(this + 0xd30) = uVar1;
  *(undefined8 *)(this + 0xd38) = uVar2;
  *(undefined1 (*) [16])(this + 0x9a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x988) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xd28) = 0;
  *(undefined8 *)(this + 0xd80) = 0;
  *(undefined8 *)(this + 0xdc8) = 0;
  *(undefined8 *)(this + 0x998) = uVar3;
  *(undefined8 *)(this + 0x9a0) = 0;
  *(undefined8 *)(this + 0x9b8) = uVar3;
  *(undefined8 *)(this + 0x9c0) = uVar3;
  *(undefined8 *)(this + 0x9c8) = uVar3;
  *(undefined8 *)(this + 0x9d0) = 0;
  *(undefined1 (*) [16])(this + 0xd40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xda8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::AddClippedTetrahedra(VHACD::Vec3<double> const (&) [10], int) */

void VHACD::TetrahedronSet::AddClippedTetrahedra(Vec3<double> *param_1,int param_2)

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [8];
  double dVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int in_EDX;
  int iVar19;
  int *piVar20;
  long lVar21;
  undefined4 in_register_00000034;
  undefined8 *puVar22;
  double in_R8;
  double in_R9;
  double in_R10;
  long lVar23;
  double in_R11;
  double unaff_R14;
  double unaff_R15;
  long in_FS_OFFSET;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double local_4f8;
  double local_4f0;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [8];
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  double local_308 [4];
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined1 local_2a8;
  double local_298 [2];
  double local_288 [4];
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined1 local_238;
  double local_228 [4];
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined1 local_1c8;
  int aiStack_1c0 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
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
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_138 [7];
  undefined4 uStack_11c;
  undefined4 local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  iVar19 = local_138[6];
  iVar16 = local_138[5];
  uVar10 = local_4e8._0_8_;
  puVar22 = (undefined8 *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_338 = __LC25;
  uStack_330 = _UNK_0010dac8;
  local_328 = _LC26;
  uStack_320 = _LC8;
  local_318 = __LC27;
  uStack_310 = _UNK_0010dae8;
  local_138[5] = iVar16;
  local_138[6] = iVar19;
  if (in_EDX < 4) goto LAB_0010a5cc;
  if (in_EDX == 4) {
    local_d8 = CONCAT71(local_d8._1_7_,3);
    local_e8 = puVar22[10];
    uStack_e0 = puVar22[0xb];
    local_138[4] = (int)puVar22[2];
    local_138[5] = (int)((ulong)puVar22[2] >> 0x20);
    local_138[6] = (int)puVar22[3];
    uStack_11c = (undefined4)((ulong)puVar22[3] >> 0x20);
    local_118 = (undefined4)puVar22[4];
    iStack_114 = (int)((ulong)puVar22[4] >> 0x20);
    uStack_110 = (int)puVar22[5];
    uStack_10c = (undefined4)((ulong)puVar22[5] >> 0x20);
    local_138[0] = (int)*puVar22;
    local_138[1] = (int)((ulong)*puVar22 >> 0x20);
    local_138[2] = (int)puVar22[1];
    local_138[3] = (int)((ulong)puVar22[1] >> 0x20);
    local_108 = (undefined4)puVar22[6];
    uStack_104 = (undefined4)((ulong)puVar22[6] >> 0x20);
    uStack_100 = (undefined4)puVar22[7];
    uStack_fc = (undefined4)((ulong)puVar22[7] >> 0x20);
    local_f8 = (undefined4)puVar22[8];
    uStack_f4 = (int)((ulong)puVar22[8] >> 0x20);
    uStack_f0 = (int)puVar22[9];
    uStack_ec = (undefined4)((ulong)puVar22[9] >> 0x20);
    cVar12 = Add((TetrahedronSet *)param_1,(Tetrahedron *)local_138);
  }
  else {
    local_138[5] = (int)_LC29;
    iVar17 = local_138[5];
    local_138[6] = (int)((ulong)_LC29 >> 0x20);
    iVar18 = local_138[6];
    if (in_EDX == 5) {
      piVar14 = local_138;
      for (lVar21 = 0x1e; lVar21 != 0; lVar21 = lVar21 + -1) {
        piVar14[0] = 0;
        piVar14[1] = 0;
        piVar14 = piVar14 + 2;
      }
      uStack_11c = 4;
      local_138[1] = (int)_LC31;
      local_138[2] = (int)((ulong)_LC31 >> 0x20);
      local_138[3] = (int)_UNK_0010daf8;
      local_138[4] = (int)((ulong)_UNK_0010daf8 >> 0x20);
      lVar21 = -1;
      uStack_10c = 4;
      uStack_104 = (undefined4)_LC26;
      uStack_100 = (undefined4)((ulong)_LC26 >> 0x20);
      uStack_fc = 4;
      piVar14 = local_138;
      uStack_ec = 4;
      local_288[0] = (double)CONCAT44(local_288[0]._4_4_,3);
      local_1c8 = 3;
      local_4e8._0_8_ = 0.0;
      local_298[0] = __LC32;
      local_298[1] = _UNK_0010db08;
      iVar16 = 0;
      bVar11 = false;
      do {
        while( true ) {
          bVar8 = bVar11;
          pdVar1 = (double *)(puVar22 + (long)piVar14[2] * 3);
          dVar7 = pdVar1[1];
          dVar24 = pdVar1[2];
          dVar33 = *pdVar1;
          pdVar1 = (double *)(puVar22 + (long)piVar14[3] * 3);
          dVar4 = pdVar1[2];
          dVar5 = pdVar1[1];
          dVar26 = *pdVar1;
          pdVar1 = (double *)(puVar22 + (long)piVar14[1] * 3);
          dVar29 = *pdVar1;
          dVar31 = pdVar1[2];
          dVar25 = pdVar1[1];
          pdVar1 = (double *)(puVar22 + (long)*piVar14 * 3);
          dVar28 = pdVar1[1];
          dVar30 = *pdVar1;
          dVar32 = pdVar1[2];
          dVar27 = (dVar30 - dVar26) *
                   ((dVar24 - dVar4) * (dVar25 - dVar5) - (dVar31 - dVar4) * (dVar7 - dVar5)) +
                   ((dVar33 - dVar26) * (dVar31 - dVar4) - (dVar29 - dVar26) * (dVar24 - dVar4)) *
                   (dVar28 - dVar5) +
                   ((dVar29 - dVar26) * (dVar7 - dVar5) - (dVar25 - dVar5) * (dVar33 - dVar26)) *
                   (dVar32 - dVar4);
          if (dVar27 <= (double)local_4e8._0_8_) break;
          lVar21 = (long)iVar16;
          iVar16 = iVar16 + 1;
          bVar8 = true;
          piVar14 = piVar14 + 4;
          in_R8 = dVar30;
          local_470 = dVar4;
          local_468 = dVar5;
          local_460 = dVar26;
          local_458 = dVar24;
          local_450 = dVar7;
          local_448 = dVar33;
          local_440 = dVar31;
          local_438 = dVar25;
          local_430 = dVar29;
          local_428 = dVar32;
          local_420 = dVar28;
          bVar11 = true;
          local_4e8._0_8_ = dVar27;
          if (iVar16 == 5) goto LAB_0010a906;
        }
        if ((double)local_4e8._0_8_ < (double)((ulong)dVar27 ^ _LC7)) {
          lVar21 = (long)iVar16;
          bVar8 = true;
          in_R8 = dVar29;
          local_470 = dVar4;
          local_468 = dVar5;
          local_460 = dVar26;
          local_458 = dVar24;
          local_450 = dVar7;
          local_448 = dVar33;
          local_440 = dVar32;
          local_438 = dVar28;
          local_430 = dVar30;
          local_428 = dVar31;
          local_420 = dVar25;
          local_4e8._0_8_ = (ulong)dVar27 ^ _LC7;
        }
        iVar16 = iVar16 + 1;
        piVar14 = piVar14 + 4;
        bVar11 = bVar8;
      } while (iVar16 != 5);
LAB_0010a906:
      if (bVar8) {
        local_1d0 = local_470;
        local_1d8 = local_468;
        local_1e0 = local_460;
        local_1e8 = local_458;
        dStack_1f0 = local_450;
        local_1f8 = local_448;
        local_200 = local_440;
        dStack_208 = local_438;
        local_228[3] = local_430;
        local_228[2] = local_428;
        local_228[1] = local_420;
        local_228[0] = in_R8;
      }
      iStack_114 = local_138[5];
      uStack_110 = local_138[6];
      uStack_f4 = local_138[1];
      uStack_f0 = local_138[2];
      if ((int)lVar21 == -1) goto LAB_0010a5cc;
      cVar12 = Add((TetrahedronSet *)param_1,(Tetrahedron *)local_228);
      if (cVar12 == '\0') goto LAB_0010a5cc;
      lVar21 = (long)*(int *)((long)local_298 + lVar21 * 4);
      *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
      piVar14 = (int *)&local_338;
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
      cVar13 = '\0';
      iVar19 = 0;
      iVar16 = -1;
      local_4d8 = (undefined1  [8])0x0;
      dStack_4d0 = 0.0;
      local_4e8 = (undefined1  [16])0x0;
      pauVar2 = (undefined1 (*) [16])(puVar22 + lVar21 * 3);
      local_158 = CONCAT71(local_158._1_7_,3);
      local_4f8 = 0.0;
      do {
        lVar23 = (long)piVar14[1];
        lVar15 = (long)piVar14[2];
        dVar26 = *(double *)((Tetrahedron *)local_228 + lVar23 * 0x18);
        dVar33 = local_228[lVar15 * 3 + 2];
        dVar4 = local_228[lVar15 * 3 + 1];
        dVar5 = local_228[lVar15 * 3];
        lVar15 = (long)*piVar14;
        dVar25 = local_228[lVar23 * 3 + 2] - dVar33;
        dVar28 = dVar26 - dVar5;
        dVar29 = *(double *)((Tetrahedron *)local_228 + lVar15 * 0x18);
        dVar30 = local_228[lVar15 * 3 + 2] - dVar33;
        dVar31 = dVar29 - dVar5;
        dVar31 = (*(double *)((long)*pauVar2 + 8) - dVar4) * (dVar30 * dVar28 - dVar31 * dVar25) +
                 (dVar25 * (local_228[lVar15 * 3 + 1] - dVar4) -
                 dVar30 * (local_228[lVar23 * 3 + 1] - dVar4)) * (*(double *)*pauVar2 - dVar5) +
                 (dVar31 * (local_228[lVar23 * 3 + 1] - dVar4) -
                 (local_228[lVar15 * 3 + 1] - dVar4) * dVar28) *
                 ((double)puVar22[lVar21 * 3 + 2] - dVar33);
        if (local_4f8 < dVar31) {
          unaff_R14 = (double)puVar22[lVar21 * 3 + 2];
          unaff_R15 = local_228[lVar15 * 3 + 2];
          iVar16 = iVar19;
          local_4f8 = dVar31;
          local_4e8 = *pauVar2;
          local_418 = dVar33;
          local_410 = dVar4;
          local_408 = dVar5;
          local_400 = local_228[lVar23 * 3 + 2];
          local_4d8 = (undefined1  [8])dVar29;
          dStack_4d0 = local_228[lVar15 * 3 + 1];
          local_4c8 = dVar26;
          dStack_4c0 = local_228[lVar23 * 3 + 1];
          cVar13 = cVar12;
        }
        iVar19 = iVar19 + 1;
        piVar14 = piVar14 + 3;
      } while (iVar19 != 4);
      if (cVar13 != '\0') {
        local_1b8 = local_4e8._0_8_;
        uStack_1b0 = local_4e8._8_8_;
        dStack_1a0 = (double)local_4d8;
        local_198 = dStack_4d0;
        local_188 = local_4c8;
        dStack_180 = dStack_4c0;
        local_178 = local_400;
        dStack_170 = local_408;
        local_168 = local_410;
        dStack_160 = local_418;
        local_1a8 = unaff_R14;
        dStack_190 = unaff_R15;
      }
      if (iVar16 != -1) goto LAB_0010a5cc;
      cVar12 = Add((TetrahedronSet *)param_1,(Tetrahedron *)&local_1b8);
    }
    else {
      local_138[5] = iVar16;
      local_138[6] = iVar19;
      if (in_EDX != 6) goto LAB_0010a5cc;
      iVar16 = 0;
      lVar21 = -1;
      local_138[2] = (int)_LC55;
      local_138[3] = (int)((ulong)_LC55 >> 0x20);
      local_138[4] = (int)__LC34;
      local_138[5] = (int)((ulong)__LC34 >> 0x20);
      local_138[6] = (int)_UNK_0010db28;
      uStack_11c = (undefined4)((ulong)_UNK_0010db28 >> 0x20);
      local_118 = (undefined4)__LC35;
      iStack_114 = (int)((ulong)__LC35 >> 0x20);
      uStack_110 = (int)_UNK_0010db38;
      uStack_10c = (undefined4)((ulong)_UNK_0010db38 >> 0x20);
      local_108 = (undefined4)__LC36;
      uStack_104 = (undefined4)((ulong)__LC36 >> 0x20);
      uStack_100 = (undefined4)_UNK_0010db48;
      uStack_fc = (undefined4)((ulong)_UNK_0010db48 >> 0x20);
      local_f8 = (undefined4)__LC37;
      uStack_f4 = (int)((ulong)__LC37 >> 0x20);
      uStack_f0 = (int)_UNK_0010db58;
      uStack_ec = (undefined4)((ulong)_UNK_0010db58 >> 0x20);
      local_e8 = __LC38;
      uStack_e0 = _UNK_0010db68;
      local_d8 = __LC39;
      uStack_d0 = _UNK_0010db78;
      local_c8 = __LC40;
      uStack_c0 = _UNK_0010db88;
      local_b8 = __LC41;
      uStack_b0 = _UNK_0010db98;
      local_a8 = __LC42;
      uStack_a0 = _UNK_0010dba8;
      local_98 = __LC43;
      uStack_90 = _UNK_0010dbb8;
      local_88 = __LC44;
      uStack_80 = _UNK_0010dbc8;
      local_78 = __LC45;
      uStack_70 = _UNK_0010dbd8;
      local_68 = __LC46;
      uStack_60 = _UNK_0010dbe8;
      local_58 = __LC47;
      uStack_50 = _UNK_0010dbf8;
      local_1b8 = __LC48;
      uStack_1b0 = _UNK_0010dc08;
      local_2a8 = 3;
      local_1a8 = __LC49;
      dStack_1a0 = _UNK_0010dc18;
      local_148 = _LC55;
      piVar14 = local_138;
      local_198 = __LC50;
      dStack_190 = _UNK_0010dc28;
      local_4e8._0_8_ = 0.0;
      local_188 = __LC51;
      dStack_180 = _UNK_0010dc38;
      local_178 = __LC52;
      dStack_170 = _UNK_0010dc48;
      local_168 = __LC53;
      dStack_160 = _UNK_0010dc58;
      local_158 = __LC54;
      uStack_150 = _UNK_0010dc68;
      bVar11 = false;
      do {
        while( true ) {
          bVar8 = bVar11;
          pdVar1 = (double *)(puVar22 + (long)piVar14[2] * 3);
          pdVar3 = (double *)(puVar22 + (long)*piVar14 * 3);
          dVar32 = pdVar1[2];
          dVar7 = pdVar1[1];
          dVar33 = *pdVar1;
          dVar4 = pdVar3[1];
          pdVar1 = (double *)(puVar22 + (long)piVar14[3] * 3);
          dVar5 = pdVar1[2];
          auVar6 = (undefined1  [8])pdVar1[1];
          dVar26 = *pdVar1;
          pdVar1 = (double *)(puVar22 + (long)piVar14[1] * 3);
          dVar29 = pdVar1[2];
          dVar31 = pdVar1[1];
          dVar25 = *pdVar1;
          dVar28 = pdVar3[2];
          dVar30 = *pdVar3;
          dVar24 = (dVar4 - (double)auVar6) *
                   ((dVar29 - dVar5) * (dVar33 - dVar26) - (dVar32 - dVar5) * (dVar25 - dVar26)) +
                   ((dVar32 - dVar5) * (dVar31 - (double)auVar6) -
                   (dVar7 - (double)auVar6) * (dVar29 - dVar5)) * (dVar30 - dVar26) +
                   (dVar28 - dVar5) *
                   ((dVar7 - (double)auVar6) * (dVar25 - dVar26) -
                   (dVar31 - (double)auVar6) * (dVar33 - dVar26));
          if (dVar24 <= (double)local_4e8._0_8_) break;
          lVar21 = (long)iVar16;
          iVar16 = iVar16 + 1;
          local_4c8 = dVar5;
          local_4d8 = auVar6;
          bVar8 = true;
          piVar14 = piVar14 + 4;
          local_4b8 = dVar30;
          in_R9 = dVar33;
          in_R10 = dVar26;
          in_R11 = dVar32;
          local_4a8 = dVar4;
          local_498 = dVar28;
          local_490 = dVar25;
          local_488 = dVar31;
          local_480 = dVar29;
          local_478 = dVar7;
          bVar11 = true;
          local_4e8._0_8_ = dVar24;
          if (iVar16 == 0xf) goto LAB_0010b03b;
        }
        if ((double)local_4e8._0_8_ < (double)((ulong)dVar24 ^ _LC7)) {
          lVar21 = (long)iVar16;
          bVar8 = true;
          local_4c8 = dVar5;
          local_4d8 = auVar6;
          local_4b8 = dVar25;
          in_R9 = dVar33;
          in_R10 = dVar26;
          in_R11 = dVar32;
          local_4a8 = dVar31;
          local_498 = dVar29;
          local_490 = dVar30;
          local_488 = dVar4;
          local_480 = dVar28;
          local_478 = dVar7;
          local_4e8._0_8_ = (ulong)dVar24 ^ _LC7;
        }
        iVar16 = iVar16 + 1;
        piVar14 = piVar14 + 4;
        bVar11 = bVar8;
        dVar5 = local_4c8;
        auVar6 = local_4d8;
        dVar30 = local_4b8;
      } while (iVar16 != 0xf);
LAB_0010b03b:
      local_4b8 = dVar30;
      local_4d8 = auVar6;
      local_4c8 = dVar5;
      if (bVar8) {
        local_2b0 = local_4c8;
        local_2b8 = (double)local_4d8;
        local_2d0 = local_478;
        local_2e0 = local_480;
        local_2e8 = local_488;
        local_308[3] = local_490;
        local_308[2] = local_498;
        local_308[1] = local_4a8;
        local_308[0] = local_4b8;
        local_2d8 = in_R9;
        local_2c8 = in_R11;
        local_2c0 = in_R10;
      }
      local_138[0] = iVar17;
      local_138[1] = iVar18;
      if ((int)lVar21 == -1) goto LAB_0010a5cc;
      cVar12 = Add((TetrahedronSet *)param_1,(Tetrahedron *)local_308);
      if (cVar12 == '\0') goto LAB_0010a5cc;
      lVar23 = (long)*(int *)(&local_1b8 + lVar21);
      *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
      cVar13 = '\0';
      local_238 = 3;
      iVar16 = *(int *)((long)&local_1b8 + lVar21 * 8 + 4);
      iVar17 = 0;
      piVar14 = (int *)&local_338;
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
      iVar19 = -1;
      local_4b8 = 0.0;
      dStack_4b0 = 0.0;
      local_4f8 = (double)puVar22[lVar23 * 3];
      local_4f0 = (double)(puVar22 + lVar23 * 3)[1];
      dVar33 = (double)puVar22[lVar23 * 3 + 2];
      local_4d8 = (undefined1  [8])0x0;
      dStack_4d0 = 0.0;
      local_4e8._0_8_ = 0.0;
      piVar20 = piVar14;
      do {
        lVar21 = (long)piVar20[1];
        lVar15 = (long)piVar20[2];
        dVar29 = *(double *)((Tetrahedron *)local_308 + lVar21 * 0x18);
        dVar4 = local_308[lVar15 * 3 + 2];
        dVar5 = local_308[lVar15 * 3 + 1];
        dVar26 = local_308[lVar15 * 3];
        lVar15 = (long)*piVar20;
        dVar32 = local_308[lVar21 * 3 + 2] - dVar4;
        dVar30 = dVar29 - dVar26;
        dVar31 = *(double *)((Tetrahedron *)local_308 + lVar15 * 0x18);
        dVar28 = local_308[lVar15 * 3 + 2] - dVar4;
        dVar25 = dVar31 - dVar26;
        dVar25 = (local_4f8 - dVar26) *
                 ((local_308[lVar15 * 3 + 1] - dVar5) * dVar32 -
                 dVar28 * (local_308[lVar21 * 3 + 1] - dVar5)) +
                 (dVar28 * dVar30 - dVar32 * dVar25) * (local_4f0 - dVar5) +
                 (dVar25 * (local_308[lVar21 * 3 + 1] - dVar5) -
                 (local_308[lVar15 * 3 + 1] - dVar5) * dVar30) * (dVar33 - dVar4);
        if ((double)local_4e8._0_8_ < dVar25) {
          iVar19 = iVar17;
          local_3f8 = dVar4;
          local_3f0 = dVar5;
          local_3e8 = dVar26;
          local_3e0 = local_308[lVar21 * 3 + 2];
          local_3d8 = local_308[lVar15 * 3 + 2];
          local_3d0 = dVar33;
          local_4d8 = (undefined1  [8])local_4f8;
          dStack_4d0 = local_4f0;
          local_4b8 = dVar31;
          dStack_4b0 = local_308[lVar15 * 3 + 1];
          local_4c8 = dVar29;
          dStack_4c0 = local_308[lVar21 * 3 + 1];
          local_4e8._0_8_ = dVar25;
          cVar13 = cVar12;
        }
        iVar17 = iVar17 + 1;
        piVar20 = piVar20 + 3;
      } while (iVar17 != 4);
      if (cVar13 != '\0') {
        local_298[0] = (double)local_4d8;
        local_298[1] = dStack_4d0;
        local_288[0] = local_3d0;
        local_288[1] = local_4b8;
        local_288[2] = dStack_4b0;
        local_288[3] = local_3d8;
        local_268 = local_4c8;
        dStack_260 = dStack_4c0;
        local_258 = local_3e0;
        local_250 = local_3e8;
        local_248 = local_3f0;
        local_240 = local_3f8;
      }
      if (iVar19 != -1) {
        pdVar1 = (double *)(puVar22 + lVar23 * 3);
        cVar13 = Add((TetrahedronSet *)param_1,(Tetrahedron *)local_298);
        if (cVar13 == '\0') {
          local_4f0 = pdVar1[1];
          local_4f8 = *pdVar1;
          iVar19 = -1;
          dVar33 = pdVar1[2];
        }
        else {
          local_4f0 = pdVar1[1];
          local_4f8 = *pdVar1;
          *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
          dVar33 = pdVar1[2];
        }
      }
      local_1c8 = 3;
      iVar18 = 0;
      cVar13 = '\0';
      local_4b8 = 0.0;
      dStack_4b0 = 0.0;
      iVar17 = -1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar10;
      local_4e8 = auVar9 << 0x40;
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
      _local_4d8 = (undefined1  [16])0x0;
      piVar20 = piVar14;
      do {
        lVar21 = (long)piVar20[1];
        lVar23 = (long)piVar20[2];
        dVar29 = *(double *)((Tetrahedron *)local_308 + lVar21 * 0x18);
        dVar4 = local_308[lVar23 * 3 + 2];
        dVar5 = local_308[lVar23 * 3 + 1];
        dVar26 = local_308[lVar23 * 3];
        lVar23 = (long)*piVar20;
        dVar32 = local_308[lVar21 * 3 + 2] - dVar4;
        dVar25 = dVar29 - dVar26;
        dVar31 = *(double *)((Tetrahedron *)local_308 + lVar23 * 0x18);
        dVar28 = local_308[lVar23 * 3 + 2] - dVar4;
        dVar30 = dVar31 - dVar26;
        dVar25 = (dVar32 * (local_308[lVar23 * 3 + 1] - dVar5) -
                 (local_308[lVar21 * 3 + 1] - dVar5) * dVar28) * (local_4f8 - dVar26) +
                 (local_4f0 - dVar5) * (dVar28 * dVar25 - dVar32 * dVar30) +
                 ((local_308[lVar21 * 3 + 1] - dVar5) * dVar30 -
                 dVar25 * (local_308[lVar23 * 3 + 1] - dVar5)) * (dVar33 - dVar4);
        if ((iVar19 != iVar18) && ((double)local_4e8._0_8_ < dVar25)) {
          _local_4d8 = *(undefined1 (*) [16])(puVar22 + (long)iVar16 * 3);
          local_3a8 = (double)puVar22[(long)iVar16 * 3 + 2];
          local_4e8._0_8_ = dVar25;
          local_3c8 = dVar26;
          local_3c0 = dVar5;
          local_3b8 = local_308[lVar21 * 3 + 2];
          local_3b0 = local_308[lVar23 * 3 + 2];
          local_3a0 = dVar4;
          iVar17 = iVar18;
          local_4c8 = dVar31;
          dStack_4c0 = local_308[lVar23 * 3 + 1];
          local_4b8 = dVar29;
          dStack_4b0 = local_308[lVar21 * 3 + 1];
          cVar13 = cVar12;
        }
        iVar18 = iVar18 + 1;
        piVar20 = piVar20 + 3;
      } while (iVar18 != 4);
      if (cVar13 != '\0') {
        local_228[0] = (double)local_4d8;
        local_228[1] = dStack_4d0;
        local_228[2] = local_3a8;
        local_228[3] = local_4c8;
        dStack_208 = dStack_4c0;
        local_200 = local_3b0;
        local_1f8 = local_4b8;
        dStack_1f0 = dStack_4b0;
        local_1e8 = local_3b8;
        local_1e0 = local_3c8;
        local_1d8 = local_3c0;
        local_1d0 = local_3a0;
      }
      if (iVar19 != -1) {
        cVar13 = '\0';
        iVar19 = 0;
        pdVar1 = (double *)(puVar22 + (long)iVar16 * 3);
        do {
          lVar21 = (long)piVar14[1];
          lVar23 = (long)piVar14[2];
          dVar33 = local_288[lVar23 * 3];
          dVar4 = local_298[lVar23 * 3 + 1];
          dVar5 = local_298[lVar23 * 3];
          lVar23 = (long)*piVar14;
          dVar29 = local_288[lVar21 * 3] - dVar33;
          dVar30 = local_298[lVar21 * 3 + 1] - dVar4;
          dVar28 = local_298[lVar21 * 3] - dVar5;
          dVar31 = local_288[lVar23 * 3] - dVar33;
          dVar26 = local_298[lVar23 * 3] - dVar5;
          dVar25 = local_298[lVar23 * 3 + 1] - dVar4;
          dVar26 = (*pdVar1 - dVar5) * (dVar29 * dVar25 - dVar31 * dVar30) +
                   (dVar31 * dVar28 - dVar26 * dVar29) * (pdVar1[1] - dVar4) +
                   (dVar26 * dVar30 - dVar25 * dVar28) * (pdVar1[2] - dVar33);
          if ((iVar19 != 1) && ((double)local_4e8._0_8_ < dVar26)) {
            local_4e8._0_8_ = dVar26;
            local_398 = dVar33;
            local_390 = dVar4;
            local_388 = dVar5;
            local_380 = local_288[lVar21 * 3];
            local_378 = local_298[lVar21 * 3 + 1];
            local_370 = local_298[lVar21 * 3];
            local_368 = local_288[lVar23 * 3];
            local_360 = local_298[lVar23 * 3 + 1];
            local_358 = local_298[lVar23 * 3];
            local_350 = pdVar1[2];
            local_348 = pdVar1[1];
            local_340 = *pdVar1;
            iVar17 = iVar19;
            cVar13 = cVar12;
          }
          iVar19 = iVar19 + 1;
          piVar14 = piVar14 + 3;
        } while (iVar19 != 4);
        if (cVar13 != '\0') {
          local_1d0 = local_398;
          local_1d8 = local_390;
          local_1e0 = local_388;
          local_1e8 = local_380;
          dStack_1f0 = local_378;
          local_1f8 = local_370;
          local_200 = local_368;
          dStack_208 = local_360;
          local_228[3] = local_358;
          local_228[2] = local_350;
          local_228[1] = local_348;
          local_228[0] = local_340;
        }
      }
      if (iVar17 == -1) goto LAB_0010a5cc;
      cVar12 = Add((TetrahedronSet *)param_1,(Tetrahedron *)local_228);
    }
  }
  if (cVar12 != '\0') {
    *(long *)(param_1 + 0x988) = *(long *)(param_1 + 0x988) + 1;
  }
LAB_0010a5cc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::TetrahedronSet::Clip(VHACD::Plane const&, VHACD::PrimitiveSet*, VHACD::PrimitiveSet*)
   const */

void __thiscall
VHACD::TetrahedronSet::Clip
          (TetrahedronSet *this,Plane *param_1,PrimitiveSet *param_2,PrimitiveSet *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  PrimitiveSet PVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong *puVar14;
  long lVar15;
  TetrahedronSet *pTVar16;
  TetrahedronSet *pTVar17;
  TetrahedronSet *pTVar18;
  PrimitiveSet *pPVar19;
  PrimitiveSet *pPVar20;
  PrimitiveSet *pPVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  PrimitiveSet *pPVar30;
  long in_FS_OFFSET;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  int local_2d8 [4];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double adStack_290 [4];
  double dStack_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  PrimitiveSet local_238 [16];
  double local_228 [30];
  double local_138 [31];
  long local_40;
  
  uVar9 = *(ulong *)(this + 0xd30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar9 != 0) {
    *(undefined8 *)(param_2 + 0xd30) = 0;
    *(undefined8 *)(param_3 + 0xd30) = 0;
    if (*(ulong *)(param_2 + 0xd38) < uVar9) {
      if (uVar9 < 0x13b13b13b13b13c) {
        lVar29 = uVar9 * 0x68;
        uVar25 = lVar29 + 8;
      }
      else {
        lVar29 = -9;
        uVar25 = 0xffffffffffffffff;
      }
      puVar14 = (ulong *)operator_new__(uVar25);
      pPVar19 = param_2 + 0x9e8;
      *puVar14 = uVar9;
      if (*(long *)(param_2 + 0xd38) != 8) {
        pPVar19 = *(PrimitiveSet **)(param_2 + 0xd28);
      }
      __memcpy_chk(puVar14 + 1,pPVar19,*(long *)(param_2 + 0xd30) * 0x68,lVar29);
      lVar29 = *(long *)(param_2 + 0xd28);
      if (lVar29 != 0) {
        operator_delete__((void *)(lVar29 + -8),*(long *)(lVar29 + -8) * 0x68 + 8);
      }
      *(ulong **)(param_2 + 0xd28) = puVar14 + 1;
      *(ulong *)(param_2 + 0xd38) = uVar9;
    }
    if (*(ulong *)(param_3 + 0xd38) < uVar9) {
      if (uVar9 < 0x13b13b13b13b13c) {
        lVar29 = uVar9 * 0x68;
        uVar25 = lVar29 + 8;
      }
      else {
        lVar29 = -9;
        uVar25 = 0xffffffffffffffff;
      }
      puVar14 = (ulong *)operator_new__(uVar25);
      pPVar19 = param_3 + 0x9e8;
      *puVar14 = uVar9;
      if (*(long *)(param_3 + 0xd38) != 8) {
        pPVar19 = *(PrimitiveSet **)(param_3 + 0xd28);
      }
      __memcpy_chk(puVar14 + 1,pPVar19,*(long *)(param_3 + 0xd30) * 0x68,lVar29);
      lVar29 = *(long *)(param_3 + 0xd28);
      if (lVar29 != 0) {
        operator_delete__((void *)(lVar29 + -8),*(long *)(lVar29 + -8) * 0x68 + 8);
      }
      *(ulong **)(param_3 + 0xd28) = puVar14 + 1;
      *(ulong *)(param_3 + 0xd38) = uVar9;
    }
    uVar1 = *(undefined8 *)(this + 0x998);
    lVar29 = 0x18;
    uVar2 = *(undefined8 *)(this + 0x9d0);
    uVar3 = *(undefined8 *)(this + 0x9d8);
    *(undefined8 *)(param_2 + 0x998) = uVar1;
    *(undefined8 *)(param_3 + 0x998) = uVar1;
    uVar1 = *(undefined8 *)(this + 0x9e0);
    *(undefined8 *)(param_2 + 0x988) = 0;
    *(undefined8 *)(param_3 + 0x988) = 0;
    *(undefined8 *)(param_2 + 0x990) = 0;
    *(undefined8 *)(param_3 + 0x9d0) = uVar2;
    *(undefined8 *)(param_3 + 0x9d8) = uVar3;
    *(undefined8 *)(param_3 + 0x9e0) = uVar1;
    *(undefined8 *)(param_3 + 0x990) = 0;
    *(undefined8 *)(param_2 + 0x9d0) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x9a0);
    *(undefined8 *)(param_2 + 0x9d8) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x9a8);
    *(undefined8 *)(param_2 + 0x9e0) = uVar1;
    uVar1 = *(undefined8 *)(this + 0x9b0);
    *(undefined8 *)(param_3 + 0x9a0) = uVar2;
    *(undefined8 *)(param_3 + 0x9a8) = uVar3;
    *(undefined8 *)(param_3 + 0x9b0) = uVar1;
    *(undefined8 *)(param_2 + 0x9a0) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x9b8);
    *(undefined8 *)(param_2 + 0x9a8) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x9c0);
    *(undefined8 *)(param_2 + 0x9b0) = uVar1;
    uVar1 = *(undefined8 *)(this + 0x9c8);
    *(undefined8 *)(param_3 + 0x9b8) = uVar2;
    *(undefined8 *)(param_3 + 0x9c0) = uVar3;
    *(undefined8 *)(param_3 + 0x9c8) = uVar1;
    *(undefined8 *)(param_2 + 0x9b8) = uVar2;
    *(undefined8 *)(param_2 + 0x9c0) = uVar3;
    *(undefined8 *)(param_2 + 0x9c8) = uVar1;
    do {
      lVar15 = lVar29 + -0x18;
      do {
        uVar1 = *(undefined8 *)(this + lVar15 + 0xd40);
        *(undefined8 *)(param_2 + lVar15 + 0xd40) = uVar1;
        *(undefined8 *)(param_3 + lVar15 + 0xd40) = uVar1;
        uVar1 = *(undefined8 *)(this + lVar15 + 0xd88);
        *(undefined8 *)(param_2 + lVar15 + 0xd88) = uVar1;
        *(undefined8 *)(param_3 + lVar15 + 0xd88) = uVar1;
        lVar15 = lVar15 + 8;
      } while (lVar29 != lVar15);
      lVar29 = lVar29 + 0x18;
    } while (lVar29 != 0x60);
    dVar4 = *(double *)param_1;
    uVar25 = 0;
    dVar5 = *(double *)(param_1 + 0x10);
    dVar6 = *(double *)(param_1 + 8);
    local_2c8 = __LC48;
    uStack_2c0 = _UNK_0010dc08;
    local_2b8 = __LC56;
    uStack_2b0 = _UNK_0010dc78;
    local_2a8 = __LC57;
    uStack_2a0 = _UNK_0010dc88;
    dVar32 = dVar4;
    dVar33 = dVar6;
    dVar34 = dVar5;
    while( true ) {
      pTVar16 = this + 0x9e8;
      if (*(long *)(this + 0xd38) != 8) {
        pTVar16 = *(TetrahedronSet **)(this + 0xd28);
      }
      pTVar16 = pTVar16 + uVar25 * 0x68;
      pTVar17 = pTVar16;
      pPVar19 = (PrimitiveSet *)&local_298;
      do {
        dVar11 = *(double *)(pTVar17 + 8);
        dVar7 = *(double *)(pTVar17 + 0x20);
        dVar31 = *(double *)(pTVar17 + 0x28);
        pTVar18 = pTVar17 + 0x30;
        *(double *)pPVar19 = *(double *)pTVar17;
        dVar12 = local_298;
        *(double *)(pPVar19 + 8) = dVar11;
        dVar13 = adStack_290[0];
        dVar11 = *(double *)(pTVar17 + 0x10);
        dVar35 = *(double *)(pTVar17 + 0x18);
        *(double *)(pPVar19 + 0x20) = dVar7;
        *(double *)(pPVar19 + 0x28) = dVar31;
        *(double *)(pPVar19 + 0x10) = dVar11;
        dVar11 = adStack_290[1];
        *(double *)(pPVar19 + 0x18) = dVar35;
        pTVar17 = pTVar18;
        pPVar19 = pPVar19 + 0x30;
      } while (pTVar16 + 0x60 != pTVar18);
      PVar8 = *(PrimitiveSet *)(pTVar16 + 0x60);
      dVar7 = *(double *)(param_1 + 0x18);
      iVar22 = 0;
      iVar27 = 0;
      local_238[0] = PVar8;
      pPVar19 = (PrimitiveSet *)&local_298;
      piVar23 = local_2d8;
      do {
        dVar35 = *(double *)(pPVar19 + 8);
        dVar31 = *(double *)(pPVar19 + 0x10);
        if (*(double *)pPVar19 * dVar32 + dVar35 * dVar33 + dVar31 * dVar34 + dVar7 <= 0.0) {
          lVar29 = (long)iVar22;
          iVar22 = iVar22 + 1;
          local_138[lVar29 * 3] = *(double *)pPVar19;
          local_138[lVar29 * 3 + 1] = dVar35;
          local_138[lVar29 * 3 + 2] = dVar31;
          iVar24 = -1;
        }
        else {
          lVar29 = (long)iVar27;
          iVar27 = iVar27 + 1;
          local_228[lVar29 * 3] = *(double *)pPVar19;
          local_228[lVar29 * 3 + 1] = dVar35;
          local_228[lVar29 * 3 + 2] = dVar31;
          iVar24 = 1;
        }
        pPVar19 = pPVar19 + 0x18;
        *piVar23 = iVar24;
        piVar23 = piVar23 + 1;
      } while (pPVar19 != local_238);
      if (iVar27 == 4) {
        dVar32 = ((dStack_270 - local_240) * (local_268 - local_250) -
                 (local_258 - local_240) * (adStack_290[2] - local_250)) *
                 (adStack_290[0] - local_248) +
                 (local_298 - local_250) *
                 ((local_258 - local_240) * (adStack_290[3] - local_248) -
                 (local_260 - local_248) * (dStack_270 - local_240)) +
                 ((local_260 - local_248) * (adStack_290[2] - local_250) -
                 (local_268 - local_250) * (adStack_290[3] - local_248)) *
                 (adStack_290[1] - local_240);
        if (_LC24 <= (double)((ulong)dVar32 & _LC3)) {
          if (dVar32 < 0.0) {
            local_298 = adStack_290[2];
            adStack_290[0] = adStack_290[3];
            adStack_290[1] = dStack_270;
            adStack_290[2] = dVar12;
            adStack_290[3] = dVar13;
            dStack_270 = dVar11;
          }
          uVar26 = *(ulong *)(param_2 + 0xd30);
          uVar10 = *(ulong *)(param_2 + 0xd38);
          uVar28 = uVar10;
          if (uVar26 == uVar10) {
            uVar28 = uVar10 * 2;
            if (uVar28 < 0x13b13b13b13b13c) {
              lVar29 = uVar10 * 0xd0;
              uVar26 = lVar29 + 8;
            }
            else {
              lVar29 = -9;
              uVar26 = 0xffffffffffffffff;
            }
            puVar14 = (ulong *)operator_new__(uVar26);
            pPVar19 = param_2 + 0x9e8;
            *puVar14 = uVar28;
            if (*(long *)(param_2 + 0xd38) != 8) {
              pPVar19 = *(PrimitiveSet **)(param_2 + 0xd28);
            }
            __memcpy_chk(puVar14 + 1,pPVar19,*(long *)(param_2 + 0xd38) * 0x68,lVar29);
            lVar29 = *(long *)(param_2 + 0xd28);
            if (lVar29 != 0) {
              operator_delete__((void *)(lVar29 + -8),*(long *)(lVar29 + -8) * 0x68 + 8);
            }
            *(ulong *)(param_2 + 0xd38) = uVar28;
            *(ulong **)(param_2 + 0xd28) = puVar14 + 1;
            uVar26 = *(ulong *)(param_2 + 0xd30);
          }
          pPVar19 = param_2 + 0x9e8;
          if (uVar28 != 8) {
            pPVar19 = *(PrimitiveSet **)(param_2 + 0xd28);
          }
          *(ulong *)(param_2 + 0xd30) = uVar26 + 1;
          pPVar19 = pPVar19 + uVar26 * 0x68;
          pPVar20 = pPVar19;
          pPVar30 = (PrimitiveSet *)&local_298;
          do {
            dVar32 = *(double *)(pPVar30 + 8);
            pPVar21 = pPVar20 + 0x30;
            *(double *)pPVar20 = *(double *)pPVar30;
            *(double *)(pPVar20 + 8) = dVar32;
            dVar32 = *(double *)(pPVar30 + 0x18);
            *(double *)(pPVar20 + 0x10) = *(double *)(pPVar30 + 0x10);
            *(double *)(pPVar20 + 0x18) = dVar32;
            dVar32 = *(double *)(pPVar30 + 0x28);
            *(double *)(pPVar20 + 0x20) = *(double *)(pPVar30 + 0x20);
            *(double *)(pPVar20 + 0x28) = dVar32;
            pPVar20 = pPVar21;
            pPVar30 = pPVar30 + 0x30;
          } while (pPVar19 + 0x60 != pPVar21);
          pPVar19[0x60] = PVar8;
        }
        if (PVar8 == (PrimitiveSet)0x3) {
          *(long *)(param_2 + 0x988) = *(long *)(param_2 + 0x988) + 1;
        }
        else {
          *(long *)(param_2 + 0x990) = *(long *)(param_2 + 0x990) + 1;
        }
      }
      else if (iVar22 == 4) {
        dVar32 = ((dStack_270 - local_240) * (local_268 - local_250) -
                 (local_258 - local_240) * (adStack_290[2] - local_250)) *
                 (adStack_290[0] - local_248) +
                 (local_298 - local_250) *
                 ((local_258 - local_240) * (adStack_290[3] - local_248) -
                 (local_260 - local_248) * (dStack_270 - local_240)) +
                 ((local_260 - local_248) * (adStack_290[2] - local_250) -
                 (local_268 - local_250) * (adStack_290[3] - local_248)) *
                 (adStack_290[1] - local_240);
        if (_LC24 <= (double)((ulong)dVar32 & _LC3)) {
          if (dVar32 < 0.0) {
            local_298 = adStack_290[2];
            adStack_290[0] = adStack_290[3];
            adStack_290[1] = dStack_270;
            adStack_290[2] = dVar12;
            adStack_290[3] = dVar13;
            dStack_270 = dVar11;
          }
          uVar26 = *(ulong *)(param_3 + 0xd30);
          uVar10 = *(ulong *)(param_3 + 0xd38);
          uVar28 = uVar10;
          if (uVar26 == uVar10) {
            uVar28 = uVar10 * 2;
            if (uVar28 < 0x13b13b13b13b13c) {
              lVar29 = uVar10 * 0xd0;
              uVar26 = lVar29 + 8;
            }
            else {
              lVar29 = -9;
              uVar26 = 0xffffffffffffffff;
            }
            puVar14 = (ulong *)operator_new__(uVar26);
            *puVar14 = uVar28;
            pPVar19 = param_3 + 0x9e8;
            if (*(long *)(param_3 + 0xd38) != 8) {
              pPVar19 = *(PrimitiveSet **)(param_3 + 0xd28);
            }
            __memcpy_chk(puVar14 + 1,pPVar19,*(long *)(param_3 + 0xd38) * 0x68,lVar29);
            lVar29 = *(long *)(param_3 + 0xd28);
            if (lVar29 != 0) {
              operator_delete__((void *)(lVar29 + -8),*(long *)(lVar29 + -8) * 0x68 + 8);
            }
            *(ulong *)(param_3 + 0xd38) = uVar28;
            *(ulong **)(param_3 + 0xd28) = puVar14 + 1;
            uVar26 = *(ulong *)(param_3 + 0xd30);
          }
          pPVar19 = param_3 + 0x9e8;
          if (uVar28 != 8) {
            pPVar19 = *(PrimitiveSet **)(param_3 + 0xd28);
          }
          *(ulong *)(param_3 + 0xd30) = uVar26 + 1;
          pPVar19 = pPVar19 + uVar26 * 0x68;
          pPVar20 = pPVar19;
          pPVar30 = (PrimitiveSet *)&local_298;
          do {
            dVar32 = *(double *)(pPVar30 + 8);
            dVar33 = *(double *)(pPVar30 + 0x20);
            dVar34 = *(double *)(pPVar30 + 0x28);
            pPVar21 = pPVar20 + 0x30;
            *(double *)pPVar20 = *(double *)pPVar30;
            *(double *)(pPVar20 + 8) = dVar32;
            dVar32 = *(double *)(pPVar30 + 0x10);
            dVar11 = *(double *)(pPVar30 + 0x18);
            *(double *)(pPVar20 + 0x20) = dVar33;
            *(double *)(pPVar20 + 0x28) = dVar34;
            *(double *)(pPVar20 + 0x10) = dVar32;
            *(double *)(pPVar20 + 0x18) = dVar11;
            pPVar20 = pPVar21;
            pPVar30 = pPVar30 + 0x30;
          } while (pPVar21 != pPVar19 + 0x60);
          pPVar19[0x60] = PVar8;
        }
        if (PVar8 == (PrimitiveSet)0x3) {
          *(long *)(param_3 + 0x988) = *(long *)(param_3 + 0x988) + 1;
        }
        else {
          *(long *)(param_3 + 0x990) = *(long *)(param_3 + 0x990) + 1;
        }
      }
      else {
        pPVar19 = (PrimitiveSet *)&local_2c8;
        do {
          lVar15 = (long)*(int *)pPVar19;
          lVar29 = (long)*(int *)(pPVar19 + 4);
          if (local_2d8[lVar15] * local_2d8[lVar29] == -1) {
            dVar33 = *(double *)((PrimitiveSet *)&local_298 + lVar15 * 0x18);
            dVar34 = *(double *)((PrimitiveSet *)&local_298 + lVar29 * 0x18);
            dVar11 = adStack_290[lVar29 * 3];
            dVar32 = adStack_290[lVar29 * 3 + 1];
            lVar29 = (long)iVar27;
            iVar27 = iVar27 + 1;
            dVar31 = (double)((ulong)(dVar4 * dVar34 + dVar6 * dVar11 + dVar5 * dVar32 + dVar7) ^
                             _LC7) /
                     ((dVar33 - dVar34) * dVar4 + (adStack_290[lVar15 * 3] - dVar11) * dVar6 +
                     (adStack_290[lVar15 * 3 + 1] - dVar32) * dVar5);
            dVar35 = _LC10 - dVar31;
            dVar32 = dVar31 * adStack_290[lVar15 * 3 + 1] + dVar35 * dVar32;
            dVar33 = dVar31 * dVar33 + dVar34 * dVar35;
            dVar34 = dVar31 * adStack_290[lVar15 * 3] + dVar11 * dVar35;
            local_228[lVar29 * 3] = dVar33;
            local_228[lVar29 * 3 + 1] = dVar34;
            local_228[lVar29 * 3 + 2] = dVar32;
            lVar29 = (long)iVar22;
            iVar22 = iVar22 + 1;
            local_138[lVar29 * 3] = dVar33;
            local_138[lVar29 * 3 + 1] = dVar34;
            local_138[lVar29 * 3 + 2] = dVar32;
          }
          pPVar19 = pPVar19 + 8;
        } while ((PrimitiveSet *)&local_298 != pPVar19);
        AddClippedTetrahedra((Vec3<double> *)param_3,(int)local_138);
        AddClippedTetrahedra((Vec3<double> *)param_2,(int)local_228);
      }
      uVar25 = uVar25 + 1;
      if (uVar9 == uVar25) break;
      dVar32 = *(double *)param_1;
      dVar33 = *(double *)(param_1 + 8);
      dVar34 = *(double *)(param_1 + 0x10);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Volume::FillOutsideSurface(unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long) */

void __thiscall
VHACD::Volume::FillOutsideSurface
          (Volume *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  short *psVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  ushort uVar16;
  ulong uVar17;
  uint *puVar18;
  long in_FS_OFFSET;
  ushort uVar19;
  ushort uVar20;
  undefined8 *local_160;
  uint *local_158;
  ulong local_150;
  undefined8 *local_148;
  uint *local_140;
  undefined4 local_128;
  short local_118;
  short sStack_116;
  ulong local_f0;
  void *local_b8;
  long local_b0;
  uint *local_a8;
  uint *puStack_a0;
  short *local_98;
  undefined8 *puStack_90;
  uint *local_88;
  uint *puStack_80;
  short *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  short local_44 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = __LC58;
  uStack_60 = _UNK_0010dc98;
  local_48 = 0xffff0000;
  local_58 = __LC59;
  uStack_50 = _UNK_0010dca8;
  local_b0 = 8;
  pvVar6 = operator_new(0x40);
  local_160 = (undefined8 *)((long)pvVar6 + 0x18);
  local_b8 = pvVar6;
  local_a8 = (uint *)operator_new(0x1fe);
  local_98 = (short *)((long)local_a8 + 0x1fe);
  *(uint **)((long)pvVar6 + 0x18) = local_a8;
  local_148 = local_160;
  local_f0 = param_1;
  puStack_a0 = local_a8;
  puStack_90 = local_160;
  local_88 = local_a8;
  puStack_80 = local_a8;
  local_78 = local_98;
  puStack_70 = local_160;
  if (param_1 < param_4) {
    do {
      if (param_2 < param_5) {
        local_150 = param_2;
        do {
          uVar5 = (int)local_150 << 0x10;
          uVar17 = param_3;
          if (param_3 < param_6) {
            do {
              while( true ) {
                lVar14 = *(long *)(this + 0x40);
                lVar9 = *(long *)(this + 0x38);
                lVar7 = *(long *)(this + 0x68);
                if (*(char *)(lVar7 + local_f0 + (lVar14 * uVar17 + local_150) * lVar9) == '\0')
                break;
LAB_0010c960:
                uVar17 = uVar17 + 1;
                if (param_6 <= uVar17) goto LAB_0010cbe0;
              }
              sVar15 = (short)uVar17;
              lVar13 = ((long)local_98 - (long)local_a8 >> 1) * -0x5555555555555555;
              if (local_88 == (uint *)(local_78 + -3)) {
                if ((((long)local_148 - (long)local_160 >> 3) + -1 +
                    (ulong)(local_148 == (undefined8 *)0x0)) * 0x55 +
                    ((long)local_88 - (long)puStack_80 >> 1) * -0x5555555555555555 + lVar13 ==
                    0x1555555555555555) {
LAB_0010d0fe:
                  std::__throw_length_error("cannot create std::deque larger than max_size()");
                  goto LAB_0010d10a;
                }
                if ((ulong)(local_b0 - ((long)local_148 - (long)local_b8 >> 3)) < 2) {
                  std::deque<VHACD::Vec3<short>,std::allocator<VHACD::Vec3<short>>>::
                  _M_reallocate_map((deque<VHACD::Vec3<short>,std::allocator<VHACD::Vec3<short>>> *)
                                    &local_b8,1,false);
                  local_148 = puStack_70;
                  local_160 = puStack_90;
                  lVar13 = ((long)local_98 - (long)local_a8 >> 1) * -0x5555555555555555;
                }
                puVar4 = local_88;
                psVar12 = local_98;
                puVar18 = local_a8;
                local_88 = (uint *)operator_new(0x1fe);
                local_148[1] = local_88;
                local_148 = local_148 + 1;
                lVar14 = *(long *)(this + 0x40);
                local_78 = (short *)((long)local_88 + 0x1fe);
                *(ushort *)puVar4 = (ushort)local_f0;
                *(short *)((long)puVar4 + 2) = (short)local_150;
                *(short *)(puVar4 + 1) = sVar15;
                lVar10 = 0;
                lVar9 = *(long *)(this + 0x38);
                lVar7 = *(long *)(this + 0x68);
                puStack_80 = local_88;
                puStack_70 = local_148;
              }
              else {
                *(short *)(local_88 + 1) = sVar15;
                *local_88 = (ushort)local_f0 | uVar5;
                lVar10 = (((long)local_88 + 6) - (long)puStack_80 >> 1) * -0x5555555555555555;
                psVar12 = local_98;
                puVar18 = local_a8;
                local_88 = (uint *)((long)local_88 + 6);
              }
              *(undefined1 *)
               (lVar7 + (sVar15 * lVar14 + (long)(short)local_150) * lVar9 +
               (long)(short)(ushort)local_f0) = 1;
              *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
              if ((((long)local_148 - (long)local_160 >> 3) + -1 +
                  (ulong)(local_148 == (undefined8 *)0x0)) * 0x55 + lVar10 + lVar13 == 0)
              goto LAB_0010c960;
              local_158 = local_88;
              local_140 = puStack_80;
              do {
                local_118 = (short)*puVar18;
                sStack_116 = *(short *)((long)puVar18 + 2);
                uVar1 = *puVar18;
                uVar2 = *puVar18;
                uVar3 = puVar18[1];
                psVar11 = (short *)&local_68;
                if (puVar18 == (uint *)(psVar12 + -3)) {
                  operator_delete(puStack_a0,0x1fe);
                  local_118 = (short)uVar1;
                  sStack_116 = (short)(uVar1 >> 0x10);
                  puVar18 = (uint *)local_160[1];
                  local_160 = local_160 + 1;
                  psVar12 = (short *)((long)puVar18 + 0x1fe);
                  local_a8 = puVar18;
                  puStack_a0 = puVar18;
                  local_98 = psVar12;
                  puStack_90 = local_160;
                }
                else {
                  puVar18 = (uint *)((long)puVar18 + 6);
                  psVar12 = local_98;
                  local_160 = puStack_90;
                  local_a8 = puVar18;
                }
                do {
                  lVar14 = ((long)psVar12 - (long)puVar18 >> 1) * -0x5555555555555555;
                  if (-1 < (short)((short)uVar2 + *psVar11)) {
                    uVar19 = (short)*(undefined4 *)psVar11 + local_118;
                    uVar20 = (short)((uint)*(undefined4 *)psVar11 >> 0x10) + sStack_116;
                    if ((int)(uint)uVar19 < (int)*(long *)(this + 0x38)) {
                      if (-1 < (short)uVar20) {
                        uVar16 = psVar11[2] + (short)uVar3;
                        if (((((int)(uint)uVar20 < (int)*(long *)(this + 0x40)) &&
                             (-1 < (short)uVar16)) && ((int)(uint)uVar16 < *(int *)(this + 0x48)))
                           && (pcVar8 = (char *)(((ulong)uVar20 +
                                                 (ulong)uVar16 * *(long *)(this + 0x40)) *
                                                 *(long *)(this + 0x38) + (ulong)uVar19 +
                                                *(long *)(this + 0x68)), *pcVar8 == '\0')) {
                          *pcVar8 = '\x01';
                          *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
                          if (local_158 == (uint *)(local_78 + -3)) {
                            if ((((long)local_148 - (long)local_160 >> 3) + -1 +
                                (ulong)(local_148 == (undefined8 *)0x0)) * 0x55 +
                                ((long)local_158 - (long)local_140 >> 1) * -0x5555555555555555 +
                                lVar14 == 0x1555555555555555) goto LAB_0010d0fe;
                            if ((ulong)(local_b0 - ((long)local_148 - (long)local_b8 >> 3)) < 2) {
                              std::deque<VHACD::Vec3<short>,std::allocator<VHACD::Vec3<short>>>::
                              _M_reallocate_map((deque<VHACD::Vec3<short>,std::allocator<VHACD::Vec3<short>>>
                                                 *)&local_b8,1,false);
                              local_148 = puStack_70;
                              local_158 = local_88;
                              local_160 = puStack_90;
                              lVar14 = ((long)local_98 - (long)local_a8 >> 1) * -0x5555555555555555;
                              psVar12 = local_98;
                              puVar18 = local_a8;
                            }
                            local_128 = CONCAT22(uVar20,uVar19);
                            local_140 = (uint *)operator_new(0x1fe);
                            local_148[1] = local_140;
                            local_148 = local_148 + 1;
                            *local_158 = local_128;
                            *(ushort *)(local_158 + 1) = uVar16;
                            local_78 = (short *)((long)local_140 + 0x1fe);
                            local_158 = local_140;
                            puStack_80 = local_140;
                            puStack_70 = local_148;
                          }
                          else {
                            *(ushort *)(local_158 + 1) = uVar16;
                            *(ushort *)local_158 = uVar19;
                            *(ushort *)((long)local_158 + 2) = uVar20;
                            local_158 = (uint *)((long)local_158 + 6);
                          }
                          local_88 = local_158;
                        }
                      }
                    }
                  }
                  psVar11 = psVar11 + 3;
                } while (psVar11 != local_44);
              } while ((((long)local_148 - (long)local_160 >> 3) + -1 +
                       (ulong)(local_148 == (undefined8 *)0x0)) * 0x55 +
                       ((long)local_158 - (long)local_140 >> 1) * -0x5555555555555555 + lVar14 != 0)
              ;
              uVar17 = uVar17 + 1;
            } while (uVar17 < param_6);
          }
LAB_0010cbe0:
          local_150 = local_150 + 1;
        } while (local_150 < param_5);
      }
      local_f0 = local_f0 + 1;
    } while (local_f0 < param_4);
    if (local_b8 == (void *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d10a;
    }
    uVar17 = local_b0 * 8;
    local_148 = local_148 + 1;
    pvVar6 = local_b8;
  }
  else {
    local_148 = (undefined8 *)((long)pvVar6 + 0x20);
    uVar17 = 0x40;
  }
  for (; local_160 < local_148; local_160 = local_160 + 1) {
    operator_delete((void *)*local_160,0x1fe);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(pvVar6,uVar17);
    return;
  }
LAB_0010d10a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::VoxelSet::GetNPrimitives() const */

undefined8 __thiscall VHACD::VoxelSet::GetNPrimitives(VoxelSet *this)

{
  return *(undefined8 *)(this + 0xa00);
}



/* VHACD::VoxelSet::GetNPrimitivesOnSurf() const */

undefined8 __thiscall VHACD::VoxelSet::GetNPrimitivesOnSurf(VoxelSet *this)

{
  return *(undefined8 *)(this + 0x988);
}



/* VHACD::VoxelSet::GetNPrimitivesInsideSurf() const */

undefined8 __thiscall VHACD::VoxelSet::GetNPrimitivesInsideSurf(VoxelSet *this)

{
  return *(undefined8 *)(this + 0x990);
}



/* VHACD::VoxelSet::GetEigenValue(VHACD::AXIS) const */

undefined8 __thiscall VHACD::VoxelSet::GetEigenValue(VoxelSet *this,int param_2)

{
  return *(undefined8 *)(this + (long)param_2 * 0x20 + 0xaa8);
}



/* VHACD::VoxelSet::ComputeVolume() const */

double __thiscall VHACD::VoxelSet::ComputeVolume(VoxelSet *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0xa00);
  if (-1 < (long)uVar1) {
    return (double)(long)uVar1 * *(double *)(this + 0xa10);
  }
  return (double)uVar1 * *(double *)(this + 0xa10);
}



/* VHACD::VoxelSet::ComputeMaxVolumeError() const */

double __thiscall VHACD::VoxelSet::ComputeMaxVolumeError(VoxelSet *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x988);
  if (-1 < (long)uVar1) {
    return (double)(long)uVar1 * *(double *)(this + 0xa10);
  }
  return (double)uVar1 * *(double *)(this + 0xa10);
}



/* VHACD::VoxelSet::AlignToPrincipalAxes() */

void VHACD::VoxelSet::AlignToPrincipalAxes(void)

{
  return;
}



/* VHACD::VoxelSet::RevertAlignToPrincipalAxes() */

void VHACD::VoxelSet::RevertAlignToPrincipalAxes(void)

{
  return;
}



/* VHACD::TetrahedronSet::GetNPrimitives() const */

undefined8 __thiscall VHACD::TetrahedronSet::GetNPrimitives(TetrahedronSet *this)

{
  return *(undefined8 *)(this + 0xd30);
}



/* VHACD::TetrahedronSet::GetNPrimitivesOnSurf() const */

undefined8 __thiscall VHACD::TetrahedronSet::GetNPrimitivesOnSurf(TetrahedronSet *this)

{
  return *(undefined8 *)(this + 0x988);
}



/* VHACD::TetrahedronSet::GetNPrimitivesInsideSurf() const */

undefined8 __thiscall VHACD::TetrahedronSet::GetNPrimitivesInsideSurf(TetrahedronSet *this)

{
  return *(undefined8 *)(this + 0x990);
}



/* VHACD::TetrahedronSet::GetEigenValue(VHACD::AXIS) const */

undefined8 __thiscall VHACD::TetrahedronSet::GetEigenValue(TetrahedronSet *this,int param_2)

{
  return *(undefined8 *)(this + (long)param_2 * 0x20 + 0xd88);
}



/* VHACD::VoxelSet::Create() const */

VoxelSet * VHACD::VoxelSet::Create(void)

{
  VoxelSet *this;
  
  this = (VoxelSet *)operator_new(0xb08);
  VoxelSet(this);
  return this;
}



/* VHACD::TetrahedronSet::Create() const */

TetrahedronSet * VHACD::TetrahedronSet::Create(void)

{
  TetrahedronSet *this;
  
  this = (TetrahedronSet *)operator_new(0xdd0);
  TetrahedronSet(this);
  return this;
}



/* VHACD::TetrahedronSet::Add(VHACD::Tetrahedron&) */

undefined8 __thiscall VHACD::TetrahedronSet::Add(TetrahedronSet *this,Tetrahedron *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  TetrahedronSet *pTVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar13 = *(double *)(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)param_1;
  dVar14 = *(double *)(param_1 + 0x20) - dVar13;
  dVar15 = *(double *)(param_1 + 0x18) - dVar1;
  dVar3 = *(double *)(param_1 + 8);
  dVar12 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x58);
  dVar4 = *(double *)(param_1 + 0x10);
  dVar13 = (dVar12 * (*(double *)(param_1 + 0x30) - dVar1) -
           (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x58)) * dVar15) * (dVar3 - dVar13)
           + ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x58)) * dVar14 -
             (*(double *)(param_1 + 0x38) - dVar13) * dVar12) * (dVar2 - dVar1) +
           ((*(double *)(param_1 + 0x38) - dVar13) * dVar15 -
           (*(double *)(param_1 + 0x30) - dVar1) * dVar14) * (dVar4 - *(double *)(param_1 + 0x58));
  if ((double)((ulong)dVar13 & _LC3) < _LC24) {
    return 0;
  }
  if (dVar13 < 0.0) {
    *(double *)param_1 = *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 8) = *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x28);
    *(double *)(param_1 + 0x18) = dVar2;
    *(double *)(param_1 + 0x20) = dVar3;
    *(double *)(param_1 + 0x28) = dVar4;
  }
  uVar5 = *(ulong *)(this + 0xd30);
  uVar11 = *(ulong *)(this + 0xd38);
  if (uVar5 == uVar11) {
    uVar6 = uVar11 * 2;
    if (uVar6 < 0x13b13b13b13b13c) {
      lVar8 = uVar11 * 0xd0;
      uVar11 = lVar8 + 8;
    }
    else {
      lVar8 = -9;
      uVar11 = 0xffffffffffffffff;
    }
    puVar9 = (ulong *)operator_new__(uVar11);
    pTVar10 = this + 0x9e8;
    *puVar9 = uVar6;
    if (*(long *)(this + 0xd38) != 8) {
      pTVar10 = *(TetrahedronSet **)(this + 0xd28);
    }
    __memcpy_chk(puVar9 + 1,pTVar10,*(long *)(this + 0xd38) * 0x68,lVar8);
    lVar8 = *(long *)(this + 0xd28);
    if (lVar8 != 0) {
      operator_delete__((void *)(lVar8 + -8),*(long *)(lVar8 + -8) * 0x68 + 8);
    }
    *(ulong **)(this + 0xd28) = puVar9 + 1;
    uVar5 = *(ulong *)(this + 0xd30);
    *(ulong *)(this + 0xd38) = uVar6;
    uVar11 = uVar6;
  }
  pTVar10 = this + 0x9e8;
  if (uVar11 != 8) {
    pTVar10 = *(TetrahedronSet **)(this + 0xd28);
  }
  *(ulong *)(this + 0xd30) = uVar5 + 1;
  lVar8 = 0;
  do {
    uVar7 = *(undefined8 *)(param_1 + lVar8 + 8);
    *(undefined8 *)(pTVar10 + lVar8 + uVar5 * 0x68) = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(pTVar10 + lVar8 + uVar5 * 0x68 + 8) = uVar7;
    *(undefined8 *)(pTVar10 + lVar8 + uVar5 * 0x68 + 0x10) = *(undefined8 *)(param_1 + lVar8 + 0x10)
    ;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x60);
  *(Tetrahedron *)(pTVar10 + uVar5 * 0x68 + 0x60) = param_1[0x60];
  return 1;
}



/* std::deque<VHACD::Vec3<short>, std::allocator<VHACD::Vec3<short> > >::_M_reallocate_map(unsigned
   long, bool) */

void __thiscall
std::deque<VHACD::Vec3<short>,std::allocator<VHACD::Vec3<short>>>::_M_reallocate_map
          (deque<VHACD::Vec3<short>,std::allocator<VHACD::Vec3<short>>> *this,ulong param_1,
          bool param_2)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  long *__dest;
  long lVar4;
  long *__src;
  ulong uVar5;
  void *unaff_R14;
  undefined1 uVar6;
  
  __src = *(long **)(this + 0x28);
  __dest = *(long **)(this + 8);
  lVar4 = *(long *)(this + 0x48) - (long)__src;
  lVar3 = param_1 + 1 + (lVar4 >> 3);
  if ((long *)(lVar3 * 2) < __dest) {
    lVar3 = ((ulong)((long)__dest - lVar3) >> 1) * 8;
    if (param_2) {
      lVar3 = lVar3 + param_1 * 8;
    }
    __dest = (long *)(lVar3 + *(long *)this);
    sVar2 = (*(long *)(this + 0x48) + 8) - (long)__src;
    if (__dest < __src) {
      if (8 < (long)sVar2) {
        memmove(__dest,__src,sVar2);
        lVar3 = *__dest;
        goto LAB_0010d663;
      }
      if (sVar2 == 8) {
        lVar3 = *__src;
        *__dest = lVar3;
        goto LAB_0010d663;
      }
    }
    else {
      if (8 < (long)sVar2) {
        memmove((void *)((long)__dest + ((lVar4 + 8) - sVar2)),__src,sVar2);
        lVar3 = *__dest;
        goto LAB_0010d663;
      }
      if (sVar2 == 8) {
        *(long *)((long)__dest + lVar4) = *__src;
        lVar3 = *__dest;
        goto LAB_0010d663;
      }
    }
  }
  else {
    plVar1 = (long *)param_1;
    if (param_1 <= __dest) {
      plVar1 = __dest;
    }
    uVar5 = (long)__dest + 2U + (long)plVar1;
    if (uVar5 >> 0x3c == 0) {
      unaff_R14 = operator_new(uVar5 * 8);
      __src = *(long **)(this + 0x28);
      lVar3 = (uVar5 - lVar3 >> 1) * 8;
      if (param_2) {
        lVar3 = lVar3 + param_1 * 8;
      }
      __dest = (long *)(lVar3 + (long)unaff_R14);
      sVar2 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar6 = sVar2 == 8;
      if ((long)sVar2 < 9) goto LAB_0010d6e8;
      memmove(__dest,__src,sVar2);
    }
    else {
      uVar5 = uVar5 >> 0x3d;
      uVar6 = uVar5 == 0;
      if (!(bool)uVar6) {
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
LAB_0010d6e8:
      if ((bool)uVar6) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = unaff_R14;
    *(ulong *)(this + 8) = uVar5;
  }
  lVar3 = *__dest;
LAB_0010d663:
  *(long *)(this + 0x18) = lVar3;
  *(long **)(this + 0x28) = __dest;
  *(long *)(this + 0x20) = lVar3 + 0x1fe;
  lVar3 = *(long *)((long)__dest + lVar4);
  *(long **)(this + 0x48) = (long *)((long)__dest + lVar4);
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x1fe;
  return;
}


