
/* msdfgen::TrueDistanceSelector::EdgeCache::EdgeCache() */

void __thiscall msdfgen::TrueDistanceSelector::EdgeCache::EdgeCache(EdgeCache *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::TrueDistanceSelector::reset(msdfgen::Vector2 const&) */

void __thiscall msdfgen::TrueDistanceSelector::reset(TrueDistanceSelector *this,Vector2 *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = SQRT((*(double *)param_1 - *(double *)this) * (*(double *)param_1 - *(double *)this) +
               (*(double *)(param_1 + 8) - *(double *)(this + 8)) *
               (*(double *)(param_1 + 8) - *(double *)(this + 8))) * __LC2;
  if (*(double *)(this + 0x10) <= 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ _LC3);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(double *)(this + 0x10) = *(double *)(this + 0x10) + dVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::TrueDistanceSelector::addEdge(msdfgen::TrueDistanceSelector::EdgeCache&,
   msdfgen::EdgeSegment const*, msdfgen::EdgeSegment const*, msdfgen::EdgeSegment const*) */

void msdfgen::TrueDistanceSelector::addEdge
               (EdgeCache *param_1,EdgeSegment *param_2,EdgeSegment *param_3,EdgeSegment *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  double dVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auStack_28 [8];
  long local_20;
  
  dVar5 = *(double *)(param_1 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  dVar3 = *(double *)param_1 - *(double *)param_2;
  if (*(double *)(param_2 + 0x10) -
      SQRT(dVar3 * dVar3 + (dVar5 - *(double *)(param_2 + 8)) * (dVar5 - *(double *)(param_2 + 8)))
      * __LC2 <= (double)(*(ulong *)(param_1 + 0x10) & _LC4)) {
    uVar4 = (**(code **)(*(long *)param_4 + 0x40))(*(double *)param_1,param_4,auStack_28);
    dVar3 = (double)(uVar4 & _LC4);
    if ((dVar3 < (double)(*(ulong *)(param_1 + 0x10) & _LC4)) ||
       ((dVar3 == (double)(*(ulong *)(param_1 + 0x10) & _LC4) &&
        (dVar5 < *(double *)(param_1 + 0x18))))) {
      *(ulong *)(param_1 + 0x10) = uVar4;
      *(double *)(param_1 + 0x18) = dVar5;
    }
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(double *)(param_2 + 0x10) = dVar3;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::TrueDistanceSelector::merge(msdfgen::TrueDistanceSelector const&) */

void __thiscall
msdfgen::TrueDistanceSelector::merge(TrueDistanceSelector *this,TrueDistanceSelector *param_1)

{
  undefined8 uVar1;
  
  if (((double)(*(ulong *)(param_1 + 0x10) & _LC4) < (double)(*(ulong *)(this + 0x10) & _LC4)) ||
     (((double)(*(ulong *)(param_1 + 0x10) & _LC4) == (double)(*(ulong *)(this + 0x10) & _LC4) &&
      (*(double *)(param_1 + 0x18) < *(double *)(this + 0x18))))) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar1;
  }
  return;
}



/* msdfgen::TrueDistanceSelector::distance() const */

undefined8 __thiscall msdfgen::TrueDistanceSelector::distance(TrueDistanceSelector *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache() */

void __thiscall msdfgen::PerpendicularDistanceSelectorBase::EdgeCache::EdgeCache(EdgeCache *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return;
}



/* msdfgen::PerpendicularDistanceSelectorBase::getPerpendicularDistance(double&, msdfgen::Vector2
   const&, msdfgen::Vector2 const&) */

undefined8
msdfgen::PerpendicularDistanceSelectorBase::getPerpendicularDistance
          (double *param_1,Vector2 *param_2,Vector2 *param_3)

{
  double dVar1;
  
  if ((0.0 < *(double *)param_2 * *(double *)param_3 +
             *(double *)(param_2 + 8) * *(double *)(param_3 + 8)) &&
     (dVar1 = *(double *)(param_3 + 8) * *(double *)param_2 -
              *(double *)(param_2 + 8) * *(double *)param_3,
     (double)((ulong)dVar1 & _LC4) < (double)((ulong)*param_1 & _LC4))) {
    *param_1 = dVar1;
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase() */

void __thiscall
msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
          (PerpendicularDistanceSelectorBase *this)

{
  undefined8 uVar1;
  
  uVar1 = _LC5;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = _UNK_00101be8;
  *(undefined8 *)(this + 0x10) = __LC6;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}



/* msdfgen::PerpendicularDistanceSelectorBase::reset(double) */

void __thiscall
msdfgen::PerpendicularDistanceSelectorBase::reset
          (PerpendicularDistanceSelectorBase *this,double param_1)

{
  ulong uVar1;
  double dVar2;
  ulong uVar3;
  
  uVar1 = _LC3;
  if (*(double *)this <= 0.0) {
    param_1 = (double)((ulong)param_1 ^ _LC3);
  }
  dVar2 = *(double *)this + param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(double *)this = dVar2;
  uVar3 = (ulong)dVar2 & _LC4;
  *(ulong *)(this + 0x10) = uVar1 ^ uVar3;
  *(ulong *)(this + 0x18) = uVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::PerpendicularDistanceSelectorBase::isEdgeRelevant(msdfgen::PerpendicularDistanceSelectorBase::EdgeCache
   const&, msdfgen::EdgeSegment const*, msdfgen::Vector2 const&) const */

bool __thiscall
msdfgen::PerpendicularDistanceSelectorBase::isEdgeRelevant
          (PerpendicularDistanceSelectorBase *this,EdgeCache *param_1,EdgeSegment *param_2,
          Vector2 *param_3)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = SQRT((*(double *)param_3 - *(double *)param_1) * (*(double *)param_3 - *(double *)param_1)
               + (*(double *)(param_3 + 8) - *(double *)(param_1 + 8)) *
                 (*(double *)(param_3 + 8) - *(double *)(param_1 + 8))) * __LC2;
  if (*(double *)(param_1 + 0x10) - dVar3 <= (double)(*(ulong *)this & _LC4)) {
    return true;
  }
  if (dVar3 <= (double)((ulong)*(double *)(param_1 + 0x18) & _LC4)) {
    if ((double)(_LC4 & (ulong)*(double *)(param_1 + 0x20)) < dVar3) {
      return true;
    }
    if (0.0 < *(double *)(param_1 + 0x18)) {
      dVar1 = *(double *)(param_1 + 0x28);
      if (dVar1 < 0.0) {
        if (*(double *)(this + 0x10) <= dVar1 + dVar3) {
          return true;
        }
      }
      else if (dVar1 - dVar3 <= *(double *)(this + 0x18)) {
        return true;
      }
    }
    bVar2 = false;
    if (0.0 < *(double *)(param_1 + 0x20)) {
      dVar1 = *(double *)(param_1 + 0x30);
      if (dVar1 < 0.0) {
        bVar2 = *(double *)(this + 0x10) <= dVar1 + dVar3;
      }
      else {
        bVar2 = dVar1 - dVar3 <= *(double *)(this + 0x18);
      }
    }
    return bVar2;
  }
  return true;
}



/* msdfgen::PerpendicularDistanceSelectorBase::addEdgeTrueDistance(msdfgen::EdgeSegment const*,
   msdfgen::SignedDistance const&, double) */

void __thiscall
msdfgen::PerpendicularDistanceSelectorBase::addEdgeTrueDistance
          (PerpendicularDistanceSelectorBase *this,EdgeSegment *param_1,SignedDistance *param_2,
          double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((double)(*(ulong *)param_2 & _LC4) < (double)(*(ulong *)this & _LC4)) ||
     (((double)(*(ulong *)param_2 & _LC4) == (double)(*(ulong *)this & _LC4) &&
      (*(double *)(param_2 + 8) < *(double *)(this + 8))))) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(EdgeSegment **)(this + 0x20) = param_1;
    *(double *)(this + 0x28) = param_3;
    *(undefined8 *)this = uVar1;
    *(undefined8 *)(this + 8) = uVar2;
  }
  return;
}



/* msdfgen::PerpendicularDistanceSelectorBase::addEdgePerpendicularDistance(double) */

void __thiscall
msdfgen::PerpendicularDistanceSelectorBase::addEdgePerpendicularDistance
          (PerpendicularDistanceSelectorBase *this,double param_1)

{
  if ((param_1 <= 0.0) &&
     (*(double *)(this + 0x10) <= param_1 && param_1 != *(double *)(this + 0x10))) {
    *(double *)(this + 0x10) = param_1;
  }
  if ((0.0 <= param_1) && (param_1 < *(double *)(this + 0x18))) {
    *(double *)(this + 0x18) = param_1;
  }
  return;
}



/* msdfgen::PerpendicularDistanceSelectorBase::merge(msdfgen::PerpendicularDistanceSelectorBase
   const&) */

void __thiscall
msdfgen::PerpendicularDistanceSelectorBase::merge
          (PerpendicularDistanceSelectorBase *this,PerpendicularDistanceSelectorBase *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((double)(*(ulong *)param_1 & _LC4) < (double)(*(ulong *)this & _LC4)) ||
     (((double)(*(ulong *)param_1 & _LC4) == (double)(*(ulong *)this & _LC4) &&
      (*(double *)(param_1 + 8) < *(double *)(this + 8))))) {
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)this = uVar3;
    *(undefined8 *)(this + 8) = uVar4;
    *(undefined8 *)(this + 0x28) = uVar2;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  if (*(double *)(this + 0x10) <= dVar1 && dVar1 != *(double *)(this + 0x10)) {
    *(double *)(this + 0x10) = dVar1;
  }
  if (*(double *)(param_1 + 0x18) < *(double *)(this + 0x18)) {
    *(double *)(this + 0x18) = *(double *)(param_1 + 0x18);
  }
  return;
}



/* msdfgen::PerpendicularDistanceSelectorBase::computeDistance(msdfgen::Vector2 const&) const */

ulong __thiscall
msdfgen::PerpendicularDistanceSelectorBase::computeDistance
          (PerpendicularDistanceSelectorBase *this,Vector2 *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(double *)this <= 0.0 && *(double *)this != 0.0) {
    uVar3 = *(ulong *)(this + 0x10);
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
  }
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != (long *)0x0) {
    local_28 = *(ulong *)this;
    uStack_20 = *(undefined8 *)(this + 8);
    (**(code **)(*plVar1 + 0x48))
              (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(this + 0x28),
               plVar1,&local_28);
    uVar2 = -(ulong)((double)(local_28 & _LC4) < (double)(_LC4 & uVar3));
    uVar3 = local_28 & uVar2 | ~uVar2 & uVar3;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::PerpendicularDistanceSelectorBase::trueDistance() const */

undefined1  [16] __thiscall
msdfgen::PerpendicularDistanceSelectorBase::trueDistance(PerpendicularDistanceSelectorBase *this)

{
  return *(undefined1 (*) [16])this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::PerpendicularDistanceSelector::reset(msdfgen::Vector2 const&) */

void __thiscall
msdfgen::PerpendicularDistanceSelector::reset(PerpendicularDistanceSelector *this,Vector2 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  ulong uVar4;
  
  uVar2 = _LC3;
  dVar3 = SQRT((*(double *)param_1 - *(double *)(this + 0x30)) *
               (*(double *)param_1 - *(double *)(this + 0x30)) +
               (*(double *)(param_1 + 8) - *(double *)(this + 0x38)) *
               (*(double *)(param_1 + 8) - *(double *)(this + 0x38))) * __LC2;
  if (*(double *)this <= 0.0) {
    dVar3 = (double)((ulong)dVar3 ^ _LC3);
  }
  dVar3 = *(double *)this + dVar3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(double *)this = dVar3;
  uVar4 = (ulong)dVar3 & _LC4;
  *(ulong *)(this + 0x10) = uVar2 ^ uVar4;
  *(ulong *)(this + 0x18) = uVar4;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}



/* msdfgen::PerpendicularDistanceSelector::addEdge(msdfgen::PerpendicularDistanceSelectorBase::EdgeCache&,
   msdfgen::EdgeSegment const*, msdfgen::EdgeSegment const*, msdfgen::EdgeSegment const*) */

void __thiscall
msdfgen::PerpendicularDistanceSelector::addEdge
          (PerpendicularDistanceSelector *this,EdgeCache *param_1,EdgeSegment *param_2,
          EdgeSegment *param_3,EdgeSegment *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  PerpendicularDistanceSelector *pPVar4;
  long in_FS_OFFSET;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double local_98;
  double local_90;
  double local_70;
  double local_68;
  double local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pPVar4 = this;
  cVar3 = PerpendicularDistanceSelectorBase::isEdgeRelevant
                    ((PerpendicularDistanceSelectorBase *)this,param_1,param_3,
                     (Vector2 *)(this + 0x30));
  if (cVar3 == '\0') goto LAB_0010099c;
  auVar16 = (**(code **)(*(long *)param_3 + 0x40))
                      (*(undefined8 *)(pPVar4 + 0x30),*(undefined8 *)(pPVar4 + 0x38),param_3,
                       &local_48);
  local_50 = auVar16._0_8_;
  dVar15 = (double)((ulong)local_50 & _LC4);
  if ((dVar15 < (double)(*(ulong *)this & _LC4)) ||
     ((dVar15 == (double)(*(ulong *)this & _LC4) && (auVar16._8_8_ < *(double *)(this + 8))))) {
    *(EdgeSegment **)(this + 0x20) = param_3;
    *(undefined1 (*) [16])this = auVar16;
    *(undefined8 *)(this + 0x28) = local_48;
  }
  uVar2 = *(undefined8 *)(this + 0x38);
  lVar1 = *(long *)param_3;
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(double *)(param_1 + 0x10) = dVar15;
  auVar16 = (**(code **)(lVar1 + 0x28))(0,param_3);
  dVar8 = *(double *)(this + 0x38) - auVar16._8_8_;
  dVar5 = *(double *)(this + 0x30) - auVar16._0_8_;
  auVar16 = (**(code **)(*(long *)param_3 + 0x28))(_LC7,param_3);
  dVar9 = *(double *)(this + 0x38) - auVar16._8_8_;
  dVar6 = *(double *)(this + 0x30) - auVar16._0_8_;
  auVar16 = (**(code **)(*(long *)param_3 + 0x30))(0,param_3);
  local_98 = auVar16._8_8_;
  local_90 = auVar16._0_8_;
  dVar10 = SQRT(local_90 * local_90 + local_98 * local_98);
  if (dVar10 == 0.0) {
    local_98 = 0.0;
    local_90 = 0.0;
  }
  else {
    local_98 = local_98 / dVar10;
    local_90 = local_90 / dVar10;
  }
  auVar16 = (**(code **)(*(long *)param_3 + 0x30))(_LC7,param_3);
  local_70 = auVar16._8_8_;
  local_68 = auVar16._0_8_;
  dVar10 = SQRT(local_68 * local_68 + local_70 * local_70);
  if (dVar10 == 0.0) {
    local_70 = 0.0;
    local_68 = 0.0;
  }
  else {
    local_70 = local_70 / dVar10;
    local_68 = local_68 / dVar10;
  }
  auVar16 = (**(code **)(*(long *)param_2 + 0x30))(_LC7,param_2);
  dVar11 = auVar16._8_8_;
  dVar10 = auVar16._0_8_;
  dVar13 = SQRT(dVar10 * dVar10 + dVar11 * dVar11);
  if (dVar13 == 0.0) {
    dVar11 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar10 = dVar10 / dVar13;
    dVar11 = dVar11 / dVar13;
  }
  auVar16 = (**(code **)(*(long *)param_4 + 0x30))(0,param_4);
  dVar7 = auVar16._8_8_;
  dVar13 = auVar16._0_8_;
  dVar14 = SQRT(dVar13 * dVar13 + dVar7 * dVar7);
  if (dVar14 == 0.0) {
    dVar7 = 0.0;
    dVar13 = 0.0;
  }
  else {
    dVar7 = dVar7 / dVar14;
    dVar13 = dVar13 / dVar14;
  }
  dVar11 = dVar11 + local_98;
  dVar10 = dVar10 + local_90;
  dVar14 = SQRT(dVar10 * dVar10 + dVar11 * dVar11);
  if (dVar14 == 0.0) {
    dVar11 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar11 = dVar11 / dVar14;
    dVar10 = dVar10 / dVar14;
  }
  dVar7 = dVar7 + local_70;
  dVar13 = dVar13 + local_68;
  dVar10 = dVar10 * dVar5 + dVar11 * dVar8;
  dVar11 = SQRT(dVar13 * dVar13 + dVar7 * dVar7);
  if (dVar11 == 0.0) {
    dVar11 = dVar9 * 0.0 + dVar6 * 0.0;
    uVar12 = (ulong)dVar11 ^ _LC3;
    if (0.0 < dVar10) {
LAB_00100a1a:
      dVar13 = local_50;
      if ((0.0 < dVar5 * (double)((ulong)local_90 ^ _LC3) + dVar8 * (double)((ulong)local_98 ^ _LC3)
          ) && (dVar5 = (double)((ulong)local_98 ^ _LC3) * dVar5 -
                        (double)((ulong)local_90 ^ _LC3) * dVar8,
               (double)((ulong)dVar5 & _LC4) < dVar15)) {
        dVar13 = (double)(_LC3 ^ (ulong)dVar5);
        if (0.0 <= dVar5) {
          if (*(double *)(this + 0x10) <= dVar13 && dVar13 != *(double *)(this + 0x10)) {
            *(double *)(this + 0x10) = dVar13;
          }
          if (dVar5 != 0.0) goto LAB_00100a87;
        }
        if (dVar13 < *(double *)(this + 0x18)) {
          *(double *)(this + 0x18) = dVar13;
        }
      }
LAB_00100a87:
      *(double *)(param_1 + 0x28) = dVar13;
      if (dVar11 < 0.0) goto LAB_00100a9a;
    }
  }
  else {
    dVar11 = (dVar13 / dVar11) * dVar6 + (dVar7 / dVar11) * dVar9;
    uVar12 = (ulong)dVar11 ^ _LC3;
    if (0.0 < dVar10) goto LAB_00100a1a;
    if (0.0 <= dVar11) goto LAB_00100998;
LAB_00100a9a:
    if ((0.0 < dVar6 * local_68 + dVar9 * local_70) &&
       (dVar5 = dVar6 * local_70 - dVar9 * local_68, (double)((ulong)dVar5 & _LC4) < dVar15)) {
      local_50 = dVar5;
      if (dVar5 <= 0.0) {
        if (*(double *)(this + 0x10) <= dVar5 && dVar5 != *(double *)(this + 0x10)) {
          *(double *)(this + 0x10) = dVar5;
        }
        if (dVar5 != 0.0) goto LAB_00100af4;
      }
      if (dVar5 < *(double *)(this + 0x18)) {
        *(double *)(this + 0x18) = dVar5;
      }
    }
LAB_00100af4:
    *(double *)(param_1 + 0x30) = local_50;
  }
LAB_00100998:
  *(double *)(param_1 + 0x18) = dVar10;
  *(ulong *)(param_1 + 0x20) = uVar12;
LAB_0010099c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::PerpendicularDistanceSelector::distance() const */

ulong __thiscall
msdfgen::PerpendicularDistanceSelector::distance(PerpendicularDistanceSelector *this)

{
  long *plVar1;
  long in_FS_OFFSET;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(double *)this <= 0.0 && *(double *)this != 0.0) {
    uVar3 = *(ulong *)(this + 0x10);
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
  }
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != (long *)0x0) {
    local_28 = *(ulong *)this;
    uStack_20 = *(undefined8 *)(this + 8);
    (**(code **)(*plVar1 + 0x48))
              (*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38),
               *(undefined8 *)(this + 0x28),plVar1,&local_28);
    uVar2 = -(ulong)((double)(local_28 & _LC4) < (double)(_LC4 & uVar3));
    uVar3 = local_28 & uVar2 | ~uVar2 & uVar3;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::MultiDistanceSelector::reset(msdfgen::Vector2 const&) */

void __thiscall msdfgen::MultiDistanceSelector::reset(MultiDistanceSelector *this,Vector2 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = _LC4;
  uVar2 = _LC3;
  dVar3 = SQRT((*(double *)param_1 - *(double *)this) * (*(double *)param_1 - *(double *)this) +
               (*(double *)(param_1 + 8) - *(double *)(this + 8)) *
               (*(double *)(param_1 + 8) - *(double *)(this + 8))) * __LC2;
  dVar4 = dVar3;
  if (*(double *)(this + 0x10) <= 0.0) {
    dVar4 = (double)((ulong)dVar3 ^ _LC3);
  }
  dVar4 = dVar4 + *(double *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(double *)(this + 0x10) = dVar4;
  uVar5 = (ulong)dVar4 & uVar6;
  *(ulong *)(this + 0x20) = uVar5 ^ uVar2;
  *(ulong *)(this + 0x28) = uVar5;
  dVar4 = dVar3;
  if (*(double *)(this + 0x40) <= 0.0) {
    dVar4 = (double)((ulong)dVar3 ^ uVar2);
  }
  dVar4 = *(double *)(this + 0x40) + dVar4;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(double *)(this + 0x40) = dVar4;
  uVar5 = (ulong)dVar4 & uVar6;
  *(ulong *)(this + 0x50) = uVar5 ^ uVar2;
  *(ulong *)(this + 0x58) = uVar5;
  if (*(double *)(this + 0x70) <= 0.0) {
    dVar3 = (double)((ulong)dVar3 ^ uVar2);
  }
  *(undefined8 *)(this + 0x90) = 0;
  dVar3 = *(double *)(this + 0x70) + dVar3;
  *(undefined8 *)(this + 0x98) = 0;
  *(double *)(this + 0x70) = dVar3;
  uVar6 = (ulong)dVar3 & uVar6;
  *(ulong *)(this + 0x80) = uVar2 ^ uVar6;
  *(ulong *)(this + 0x88) = uVar6;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}



/* msdfgen::MultiDistanceSelector::addEdge(msdfgen::PerpendicularDistanceSelectorBase::EdgeCache&,
   msdfgen::EdgeSegment const*, msdfgen::EdgeSegment const*, msdfgen::EdgeSegment const*) */

void __thiscall
msdfgen::MultiDistanceSelector::addEdge
          (MultiDistanceSelector *this,EdgeCache *param_1,EdgeSegment *param_2,EdgeSegment *param_3,
          EdgeSegment *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  double local_b8;
  double local_90;
  double local_88;
  double local_70;
  double local_58;
  double local_50;
  undefined8 local_48;
  long local_40;
  
  uVar6 = (ulong)*(uint *)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((*(uint *)(param_3 + 8) & 1) == 0) ||
       (cVar3 = PerpendicularDistanceSelectorBase::isEdgeRelevant
                          ((PerpendicularDistanceSelectorBase *)(this + 0x10),param_1,param_3,
                           (Vector2 *)this), cVar3 == '\0')) &&
      ((uVar5 = (uint)uVar6, (uVar6 & 2) == 0 ||
       (cVar3 = PerpendicularDistanceSelectorBase::isEdgeRelevant
                          ((PerpendicularDistanceSelectorBase *)(this + 0x40),param_1,param_3,
                           (Vector2 *)this), cVar3 == '\0')))) &&
     (((uVar5 & 4) == 0 ||
      (cVar3 = PerpendicularDistanceSelectorBase::isEdgeRelevant
                         ((PerpendicularDistanceSelectorBase *)(this + 0x70),param_1,param_3,
                          (Vector2 *)this), cVar3 == '\0')))) goto LAB_00100e52;
  auVar17 = (**(code **)(*(long *)param_3 + 0x40))
                      (*(undefined8 *)this,*(undefined8 *)(this + 8),param_3,&local_48);
  uVar6 = _LC4;
  dVar8 = auVar17._8_8_;
  dVar7 = auVar17._0_8_;
  uVar5 = *(uint *)(param_3 + 8);
  if ((uVar5 & 1) != 0) {
    if (((double)((ulong)dVar7 & _LC4) < (double)(*(ulong *)(this + 0x10) & _LC4)) ||
       (((double)((ulong)dVar7 & _LC4) == (double)(*(ulong *)(this + 0x10) & _LC4) &&
        (dVar8 < *(double *)(this + 0x18))))) {
      *(EdgeSegment **)(this + 0x30) = param_3;
      *(undefined1 (*) [16])(this + 0x10) = auVar17;
      *(undefined8 *)(this + 0x38) = local_48;
    }
  }
  local_b8 = (double)((ulong)dVar7 & uVar6);
  if ((uVar5 & 2) != 0) {
    if ((local_b8 < (double)(*(ulong *)(this + 0x40) & uVar6)) ||
       ((local_b8 == (double)(*(ulong *)(this + 0x40) & uVar6) && (dVar8 < *(double *)(this + 0x48))
        ))) {
      *(EdgeSegment **)(this + 0x60) = param_3;
      *(undefined1 (*) [16])(this + 0x40) = auVar17;
      *(undefined8 *)(this + 0x68) = local_48;
    }
  }
  if ((uVar5 & 4) != 0) {
    if ((local_b8 < (double)(*(ulong *)(this + 0x70) & uVar6)) ||
       ((local_b8 == (double)(*(ulong *)(this + 0x70) & uVar6) && (dVar8 < *(double *)(this + 0x78))
        ))) {
      *(undefined1 (*) [16])(this + 0x70) = auVar17;
      *(EdgeSegment **)(this + 0x90) = param_3;
      *(undefined8 *)(this + 0x98) = local_48;
    }
  }
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = *(long *)param_3;
  *(undefined8 *)param_1 = *(undefined8 *)this;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(double *)(param_1 + 0x10) = local_b8;
  auVar17 = (**(code **)(lVar1 + 0x28))(0,param_3);
  dVar11 = *(double *)(this + 8) - auVar17._8_8_;
  dVar8 = *(double *)this - auVar17._0_8_;
  auVar17 = (**(code **)(*(long *)param_3 + 0x28))(_LC7,param_3);
  dVar12 = *(double *)(this + 8) - auVar17._8_8_;
  dVar9 = *(double *)this - auVar17._0_8_;
  auVar17 = (**(code **)(*(long *)param_3 + 0x30))(0,param_3);
  local_90 = auVar17._8_8_;
  local_88 = auVar17._0_8_;
  dVar13 = SQRT(local_88 * local_88 + local_90 * local_90);
  if (dVar13 == 0.0) {
    local_90 = 0.0;
    local_88 = 0.0;
  }
  else {
    local_90 = local_90 / dVar13;
    local_88 = local_88 / dVar13;
  }
  auVar17 = (**(code **)(*(long *)param_3 + 0x30))(_LC7,param_3);
  local_58 = auVar17._8_8_;
  local_70 = auVar17._0_8_;
  dVar13 = SQRT(local_70 * local_70 + local_58 * local_58);
  if (dVar13 == 0.0) {
    local_58 = 0.0;
    local_70 = 0.0;
  }
  else {
    local_58 = local_58 / dVar13;
    local_70 = local_70 / dVar13;
  }
  auVar17 = (**(code **)(*(long *)param_2 + 0x30))(_LC7,param_2);
  dVar13 = auVar17._8_8_;
  local_50 = auVar17._0_8_;
  dVar14 = SQRT(local_50 * local_50 + dVar13 * dVar13);
  if (dVar14 == 0.0) {
    local_50 = 0.0;
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar13 / dVar14;
    local_50 = local_50 / dVar14;
  }
  auVar17 = (**(code **)(*(long *)param_4 + 0x30))(0,param_4);
  dVar10 = auVar17._8_8_;
  dVar14 = auVar17._0_8_;
  dVar15 = SQRT(dVar14 * dVar14 + dVar10 * dVar10);
  if (dVar15 == 0.0) {
    dVar10 = 0.0;
    dVar14 = 0.0;
  }
  else {
    dVar10 = dVar10 / dVar15;
    dVar14 = dVar14 / dVar15;
  }
  local_50 = local_50 + local_88;
  dVar13 = dVar13 + local_90;
  dVar15 = SQRT(local_50 * local_50 + dVar13 * dVar13);
  if (dVar15 == 0.0) {
    dVar13 = 0.0;
    local_50 = 0.0;
  }
  else {
    dVar13 = dVar13 / dVar15;
    local_50 = local_50 / dVar15;
  }
  dVar10 = dVar10 + local_58;
  dVar14 = dVar14 + local_70;
  dVar13 = local_50 * dVar8 + dVar13 * dVar11;
  dVar15 = SQRT(dVar14 * dVar14 + dVar10 * dVar10);
  if (dVar15 == 0.0) {
    dVar14 = dVar12 * 0.0 + dVar9 * 0.0;
    uVar16 = (ulong)dVar14 ^ _LC3;
    if (0.0 < dVar13) goto LAB_0010121a;
  }
  else {
    dVar14 = (dVar14 / dVar15) * dVar9 + (dVar10 / dVar15) * dVar12;
    uVar16 = (ulong)dVar14 ^ _LC3;
    if (0.0 < dVar13) {
LAB_0010121a:
      dVar10 = dVar7;
      if ((0.0 < dVar8 * (double)((ulong)local_88 ^ _LC3) +
                 dVar11 * (double)((ulong)local_90 ^ _LC3)) &&
         (dVar8 = (double)((ulong)local_90 ^ _LC3) * dVar8 -
                  (double)((ulong)local_88 ^ _LC3) * dVar11,
         (double)(uVar6 & (ulong)dVar8) < local_b8)) {
        uVar5 = *(uint *)(param_3 + 8);
        dVar10 = (double)(_LC3 ^ (ulong)dVar8);
        uVar4 = uVar5 & 2;
        if ((uVar5 & 1) == 0) {
          if (uVar4 == 0) {
            if ((uVar5 & 4) != 0) {
              if (0.0 <= dVar8) {
LAB_001015e4:
                if (*(double *)(this + 0x80) <= dVar10 && dVar10 != *(double *)(this + 0x80)) {
                  *(double *)(this + 0x80) = dVar10;
                }
                if (0.0 < dVar8) goto LAB_00101289;
              }
LAB_001014da:
              if (dVar10 < *(double *)(this + 0x88)) {
                *(double *)(this + 0x88) = dVar10;
              }
            }
          }
          else {
            if (dVar8 < 0.0) {
              if (dVar10 < *(double *)(this + 0x58)) {
                *(double *)(this + 0x58) = dVar10;
              }
              goto joined_r0x00101881;
            }
            if (*(double *)(this + 0x50) <= dVar10 && dVar10 != *(double *)(this + 0x50)) {
              *(double *)(this + 0x50) = dVar10;
            }
            if (dVar8 <= 0.0) {
LAB_001017f1:
              if (dVar10 < *(double *)(this + 0x58)) {
                *(double *)(this + 0x58) = dVar10;
              }
              if ((uVar5 & 4) != 0) {
                if (dVar8 == 0.0) goto LAB_00101632;
                goto LAB_001014da;
              }
            }
            else {
LAB_001016fd:
              if (((uVar5 & 4) != 0) &&
                 (*(double *)(this + 0x80) <= dVar10 && dVar10 != *(double *)(this + 0x80))) {
                *(double *)(this + 0x80) = dVar10;
              }
            }
          }
        }
        else if (0.0 <= dVar8) {
          if (*(double *)(this + 0x20) <= dVar10 && dVar10 != *(double *)(this + 0x20)) {
            *(double *)(this + 0x20) = dVar10;
          }
          if (dVar8 == 0.0) {
            if (dVar10 < *(double *)(this + 0x28)) {
              *(double *)(this + 0x28) = dVar10;
            }
            if (uVar4 != 0) {
              if (*(double *)(this + 0x50) <= dVar10 && dVar10 != *(double *)(this + 0x50)) {
                *(double *)(this + 0x50) = dVar10;
                goto LAB_001017f1;
              }
              if (dVar10 < *(double *)(this + 0x58)) {
                *(double *)(this + 0x58) = dVar10;
              }
            }
            if ((uVar5 & 4) != 0) {
LAB_00101632:
              if (*(double *)(this + 0x80) <= dVar10 && dVar10 != *(double *)(this + 0x80)) {
                *(double *)(this + 0x80) = dVar10;
              }
              goto LAB_001014da;
            }
          }
          else {
            if (uVar4 != 0) {
              if (*(double *)(this + 0x50) <= dVar10 && dVar10 != *(double *)(this + 0x50)) {
                *(double *)(this + 0x50) = dVar10;
              }
              goto LAB_001016fd;
            }
            if ((uVar5 & 4) != 0) goto LAB_001015e4;
          }
        }
        else {
          if (dVar10 < *(double *)(this + 0x28)) {
            *(double *)(this + 0x28) = dVar10;
          }
          if ((uVar4 != 0) && (dVar10 < *(double *)(this + 0x58))) {
            *(double *)(this + 0x58) = dVar10;
          }
joined_r0x00101881:
          if ((uVar5 & 4) != 0) goto LAB_001014da;
        }
      }
LAB_00101289:
      *(double *)(param_1 + 0x28) = dVar10;
    }
    if (dVar14 < 0.0) {
      if ((0.0 < dVar9 * local_70 + dVar12 * local_58) &&
         (dVar8 = dVar9 * local_58 - dVar12 * local_70, (double)(uVar6 & (ulong)dVar8) < local_b8))
      {
        uVar5 = *(uint *)(param_3 + 8);
        uVar4 = uVar5 & 2;
        dVar7 = dVar8;
        if ((uVar5 & 1) == 0) {
          if (uVar4 == 0) {
            if ((uVar5 & 4) != 0) {
              if (dVar8 <= 0.0) {
LAB_00101659:
                if (*(double *)(this + 0x80) <= dVar8 && dVar8 != *(double *)(this + 0x80)) {
                  *(double *)(this + 0x80) = dVar8;
                }
                if (dVar8 < 0.0) goto LAB_00101353;
              }
LAB_00101560:
              if (dVar8 < *(double *)(this + 0x88)) {
                *(double *)(this + 0x88) = dVar8;
              }
            }
          }
          else {
            if (0.0 < dVar8) {
              if (dVar8 < *(double *)(this + 0x58)) {
                *(double *)(this + 0x58) = dVar8;
              }
              goto joined_r0x001018b6;
            }
            if (*(double *)(this + 0x50) <= dVar8 && dVar8 != *(double *)(this + 0x50)) {
              *(double *)(this + 0x50) = dVar8;
            }
            if (0.0 <= dVar8) {
LAB_00101857:
              if (dVar8 < *(double *)(this + 0x58)) {
                *(double *)(this + 0x58) = dVar8;
              }
              goto joined_r0x0010173e;
            }
LAB_0010178d:
            if (((uVar5 & 4) != 0) &&
               (*(double *)(this + 0x80) <= dVar8 && dVar8 != *(double *)(this + 0x80))) {
              *(double *)(this + 0x80) = dVar8;
            }
          }
        }
        else if (dVar8 <= 0.0) {
          if (*(double *)(this + 0x20) <= dVar8 && dVar8 != *(double *)(this + 0x20)) {
            *(double *)(this + 0x20) = dVar8;
          }
          if (dVar8 == 0.0) {
            if (dVar8 < *(double *)(this + 0x28)) {
              *(double *)(this + 0x28) = dVar8;
            }
            if (uVar4 != 0) {
              if (*(double *)(this + 0x50) <= dVar8 && dVar8 != *(double *)(this + 0x50)) {
                *(double *)(this + 0x50) = dVar8;
              }
              goto LAB_00101857;
            }
joined_r0x0010173e:
            if ((uVar5 & 4) != 0) {
              if (*(double *)(this + 0x80) <= dVar8 && dVar8 != *(double *)(this + 0x80)) {
                *(double *)(this + 0x80) = dVar8;
              }
              goto LAB_00101560;
            }
          }
          else {
            if (uVar4 != 0) {
              if (*(double *)(this + 0x50) <= dVar8 && dVar8 != *(double *)(this + 0x50)) {
                *(double *)(this + 0x50) = dVar8;
              }
              goto LAB_0010178d;
            }
            if ((uVar5 & 4) != 0) goto LAB_00101659;
          }
        }
        else {
          if (dVar8 < *(double *)(this + 0x28)) {
            *(double *)(this + 0x28) = dVar8;
          }
          if ((uVar4 != 0) && (dVar8 < *(double *)(this + 0x58))) {
            *(double *)(this + 0x58) = dVar8;
          }
joined_r0x001018b6:
          if ((uVar5 & 4) != 0) goto LAB_00101560;
        }
      }
LAB_00101353:
      *(double *)(param_1 + 0x30) = dVar7;
      *(double *)(param_1 + 0x18) = dVar13;
      *(ulong *)(param_1 + 0x20) = uVar16;
      goto LAB_00100e52;
    }
  }
  *(double *)(param_1 + 0x18) = dVar13;
  *(ulong *)(param_1 + 0x20) = uVar16;
LAB_00100e52:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::MultiDistanceSelector::merge(msdfgen::MultiDistanceSelector const&) */

void __thiscall
msdfgen::MultiDistanceSelector::merge(MultiDistanceSelector *this,MultiDistanceSelector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_RDX;
  double dVar4;
  ulong uVar5;
  
  uVar5 = _LC4;
  if (((double)(*(ulong *)(param_1 + 0x10) & _LC4) < (double)(*(ulong *)(this + 0x10) & _LC4)) ||
     (((double)(*(ulong *)(param_1 + 0x10) & _LC4) == (double)(*(ulong *)(this + 0x10) & _LC4) &&
      (*(double *)(param_1 + 0x18) < *(double *)(this + 0x18))))) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x10) = uVar2;
    *(undefined8 *)(this + 0x18) = uVar3;
    *(undefined8 *)(this + 0x38) = uVar1;
  }
  dVar4 = *(double *)(param_1 + 0x20);
  if (*(double *)(this + 0x20) <= dVar4 && dVar4 != *(double *)(this + 0x20)) {
    *(double *)(this + 0x20) = dVar4;
  }
  if (*(double *)(param_1 + 0x28) < *(double *)(this + 0x28)) {
    *(double *)(this + 0x28) = *(double *)(param_1 + 0x28);
  }
  PerpendicularDistanceSelectorBase::merge
            ((PerpendicularDistanceSelectorBase *)(this + 0x40),
             (PerpendicularDistanceSelectorBase *)(param_1 + 0x40));
  dVar4 = (double)(*(ulong *)(extraout_RDX + 0x70) & uVar5);
  if (((double)(*(ulong *)(param_1 + 0x70) & uVar5) < dVar4) ||
     (((double)(*(ulong *)(param_1 + 0x70) & uVar5) == dVar4 &&
      (*(double *)(param_1 + 0x78) < *(double *)(extraout_RDX + 0x78))))) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(extraout_RDX + 0x90) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(extraout_RDX + 0x70) = uVar2;
    *(undefined8 *)(extraout_RDX + 0x78) = uVar3;
    *(undefined8 *)(extraout_RDX + 0x98) = uVar1;
  }
  dVar4 = *(double *)(param_1 + 0x80);
  if (*(double *)(extraout_RDX + 0x80) <= dVar4 && dVar4 != *(double *)(extraout_RDX + 0x80)) {
    *(double *)(extraout_RDX + 0x80) = dVar4;
  }
  if (*(double *)(param_1 + 0x88) < *(double *)(extraout_RDX + 0x88)) {
    *(double *)(extraout_RDX + 0x88) = *(double *)(param_1 + 0x88);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* msdfgen::MultiDistanceSelector::distance() const */

void msdfgen::MultiDistanceSelector::distance(void)

{
  Vector2 *in_RSI;
  undefined8 *in_RDI;
  undefined8 uVar1;
  
  uVar1 = PerpendicularDistanceSelectorBase::computeDistance
                    ((PerpendicularDistanceSelectorBase *)(in_RSI + 0x10),in_RSI);
  *in_RDI = uVar1;
  uVar1 = PerpendicularDistanceSelectorBase::computeDistance
                    ((PerpendicularDistanceSelectorBase *)(in_RSI + 0x40),in_RSI);
  in_RDI[1] = uVar1;
  uVar1 = PerpendicularDistanceSelectorBase::computeDistance
                    ((PerpendicularDistanceSelectorBase *)(in_RSI + 0x70),in_RSI);
  in_RDI[2] = uVar1;
  return;
}



/* msdfgen::MultiDistanceSelector::trueDistance() const */

undefined1  [16] __thiscall
msdfgen::MultiDistanceSelector::trueDistance(MultiDistanceSelector *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  ulong uVar4;
  double dVar5;
  
  uVar4 = *(ulong *)(this + 0x40);
  dVar5 = *(double *)(this + 0x48);
  dVar2 = (double)(uVar4 & _LC4);
  dVar3 = (double)(*(ulong *)(this + 0x10) & _LC4);
  if ((dVar3 <= dVar2) && ((dVar2 != dVar3 || (*(double *)(this + 0x18) <= dVar5)))) {
    dVar2 = dVar3;
    uVar4 = *(ulong *)(this + 0x10);
    dVar5 = *(double *)(this + 0x18);
  }
  dVar3 = (double)(*(ulong *)(this + 0x70) & _LC4);
  if ((dVar2 <= dVar3) && ((dVar3 != dVar2 || (dVar5 <= *(double *)(this + 0x78))))) {
    auVar1._8_8_ = dVar5;
    auVar1._0_8_ = uVar4;
    return auVar1;
  }
  return *(undefined1 (*) [16])(this + 0x70);
}



/* msdfgen::MultiAndTrueDistanceSelector::distance() const */

void msdfgen::MultiAndTrueDistanceSelector::distance(void)

{
  Vector2 *in_RSI;
  undefined8 *in_RDI;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = PerpendicularDistanceSelectorBase::computeDistance
                    ((PerpendicularDistanceSelectorBase *)(in_RSI + 0x10),in_RSI);
  uVar2 = PerpendicularDistanceSelectorBase::computeDistance
                    ((PerpendicularDistanceSelectorBase *)(in_RSI + 0x40),in_RSI);
  uVar3 = PerpendicularDistanceSelectorBase::computeDistance
                    ((PerpendicularDistanceSelectorBase *)(in_RSI + 0x70),in_RSI);
  in_RDI[2] = uVar3;
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  uVar1 = MultiDistanceSelector::trueDistance((MultiDistanceSelector *)in_RSI);
  in_RDI[3] = uVar1;
  return;
}


