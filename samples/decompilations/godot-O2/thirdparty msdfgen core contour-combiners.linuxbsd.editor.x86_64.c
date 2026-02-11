
/* msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x10) = _LC0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::reset(msdfgen::Vector2 const&) */

void msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::reset(Vector2 *param_1)

{
  msdfgen::TrueDistanceSelector::reset(param_1);
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::edgeSelector(int) */

undefined8 msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::edgeSelector(int param_1)

{
  undefined4 in_register_0000003c;
  
  return CONCAT44(in_register_0000003c,param_1);
}



/* msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::distance() const */

void msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::distance(void)

{
  msdfgen::TrueDistanceSelector::distance();
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)param_1);
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::reset(msdfgen::Vector2
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::reset(Vector2 *param_1)

{
  msdfgen::PerpendicularDistanceSelector::reset(param_1);
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::edgeSelector(int) */

undefined8
msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::edgeSelector(int param_1)

{
  undefined4 in_register_0000003c;
  
  return CONCAT44(in_register_0000003c,param_1);
}



/* msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance() const */

void msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance(void)

{
  msdfgen::PerpendicularDistanceSelector::distance();
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)(param_1 + 0x10));
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)(param_1 + 0x40));
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)(param_1 + 0x70));
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::reset(msdfgen::Vector2 const&) */

void msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::reset(Vector2 *param_1)

{
  msdfgen::MultiDistanceSelector::reset(param_1);
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::edgeSelector(int) */

undefined8 msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::edgeSelector(int param_1)

{
  undefined4 in_register_0000003c;
  
  return CONCAT44(in_register_0000003c,param_1);
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::distance() const */

SimpleContourCombiner<msdfgen::MultiDistanceSelector> * __thiscall
msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::distance
          (SimpleContourCombiner<msdfgen::MultiDistanceSelector> *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::MultiDistanceSelector::distance();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)(param_1 + 0x10));
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)(param_1 + 0x40));
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
            ((PerpendicularDistanceSelectorBase *)(param_1 + 0x70));
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::reset(msdfgen::Vector2
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::reset(Vector2 *param_1)

{
  msdfgen::MultiDistanceSelector::reset(param_1);
  return;
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::edgeSelector(int) */

undefined8
msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::edgeSelector(int param_1)

{
  undefined4 in_register_0000003c;
  
  return CONCAT44(in_register_0000003c,param_1);
}



/* msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::distance() const */

SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector> * __thiscall
msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::distance
          (SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector> *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::MultiAndTrueDistanceSelector::distance();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::reset(msdfgen::Vector2
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::reset
          (OverlappingContourCombiner<msdfgen::TrueDistanceSelector> *this,Vector2 *param_1)

{
  undefined8 uVar1;
  Vector2 *pVVar2;
  Vector2 *pVVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pVVar2 = *(Vector2 **)(this + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  if (pVVar2 != *(Vector2 **)(this + 0x30)) {
    do {
      pVVar3 = pVVar2 + 0x20;
      msdfgen::TrueDistanceSelector::reset(pVVar2);
      pVVar2 = pVVar3;
    } while (*(Vector2 **)(this + 0x30) != pVVar3);
  }
  return;
}



/* msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::edgeSelector(int) */

long __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::edgeSelector
          (OverlappingContourCombiner<msdfgen::TrueDistanceSelector> *this,int param_1)

{
  return (long)param_1 * 0x20 + *(long *)(this + 0x28);
}



/* msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::distance() const */

double __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::distance
          (OverlappingContourCombiner<msdfgen::TrueDistanceSelector> *this)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vector2 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  Vector2 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  Vector2 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8[0] = (Vector2)0x0;
  local_a8[1] = (Vector2)0x0;
  local_a8[2] = (Vector2)0x0;
  local_a8[3] = (Vector2)0x0;
  local_a8[4] = (Vector2)0x0;
  local_a8[5] = (Vector2)0x0;
  local_a8[6] = (Vector2)0x0;
  local_a8[7] = (Vector2)0x0;
  local_a8[8] = (Vector2)0x0;
  local_a8[9] = (Vector2)0x0;
  local_a8[10] = (Vector2)0x0;
  local_a8[0xb] = (Vector2)0x0;
  local_a8[0xc] = (Vector2)0x0;
  local_a8[0xd] = (Vector2)0x0;
  local_a8[0xe] = (Vector2)0x0;
  local_a8[0xf] = (Vector2)0x0;
  local_98 = _LC0;
  uStack_90 = 0;
  local_88[0] = (Vector2)0x0;
  local_88[1] = (Vector2)0x0;
  local_88[2] = (Vector2)0x0;
  local_88[3] = (Vector2)0x0;
  local_88[4] = (Vector2)0x0;
  local_88[5] = (Vector2)0x0;
  local_88[6] = (Vector2)0x0;
  local_88[7] = (Vector2)0x0;
  local_88[8] = (Vector2)0x0;
  local_88[9] = (Vector2)0x0;
  local_88[10] = (Vector2)0x0;
  local_88[0xb] = (Vector2)0x0;
  local_88[0xc] = (Vector2)0x0;
  local_88[0xd] = (Vector2)0x0;
  local_88[0xe] = (Vector2)0x0;
  local_88[0xf] = (Vector2)0x0;
  local_78 = _LC0;
  uStack_70 = 0;
  local_68[0] = (Vector2)0x0;
  local_68[1] = (Vector2)0x0;
  local_68[2] = (Vector2)0x0;
  local_68[3] = (Vector2)0x0;
  local_68[4] = (Vector2)0x0;
  local_68[5] = (Vector2)0x0;
  local_68[6] = (Vector2)0x0;
  local_68[7] = (Vector2)0x0;
  local_68[8] = (Vector2)0x0;
  local_68[9] = (Vector2)0x0;
  local_68[10] = (Vector2)0x0;
  local_68[0xb] = (Vector2)0x0;
  local_68[0xc] = (Vector2)0x0;
  local_68[0xd] = (Vector2)0x0;
  local_68[0xe] = (Vector2)0x0;
  local_68[0xf] = (Vector2)0x0;
  local_58 = _LC0;
  uStack_50 = 0;
  iVar5 = (int)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 5);
  msdfgen::TrueDistanceSelector::reset(local_a8);
  msdfgen::TrueDistanceSelector::reset(local_88);
  msdfgen::TrueDistanceSelector::reset(local_68);
  if (0 < iVar5) {
    lVar6 = 0;
    lVar4 = (ulong)(iVar5 - 1) * 4 + 4;
    do {
      while( true ) {
        dVar8 = (double)msdfgen::TrueDistanceSelector::distance();
        msdfgen::TrueDistanceSelector::merge((TrueDistanceSelector *)local_a8);
        iVar2 = *(int *)(*(long *)(this + 0x10) + lVar6);
        if (iVar2 < 1) break;
        if (0.0 <= dVar8) {
          msdfgen::TrueDistanceSelector::merge((TrueDistanceSelector *)local_88);
          iVar2 = *(int *)(*(long *)(this + 0x10) + lVar6);
          break;
        }
LAB_001002e4:
        lVar6 = lVar6 + 4;
        if (lVar4 == lVar6) goto LAB_00100350;
      }
      if ((-1 < iVar2) || (0.0 < dVar8)) goto LAB_001002e4;
      lVar6 = lVar6 + 4;
      msdfgen::TrueDistanceSelector::merge((TrueDistanceSelector *)local_68);
    } while (lVar4 != lVar6);
  }
LAB_00100350:
  dVar9 = (double)msdfgen::TrueDistanceSelector::distance();
  dVar10 = (double)msdfgen::TrueDistanceSelector::distance();
  dVar8 = (double)msdfgen::TrueDistanceSelector::distance();
  uVar1 = _LC3;
  if ((dVar10 < 0.0) ||
     (dVar11 = (double)(_LC3 & (ulong)dVar8), dVar11 < (double)(_LC3 & (ulong)dVar10))) {
    if ((dVar8 <= 0.0) &&
       (dVar10 = (double)((ulong)dVar10 & _LC3), (double)(_LC3 & (ulong)dVar8) < dVar10)) {
      if (0 < iVar5) {
        lVar6 = *(long *)(this + 0x10);
        lVar3 = 0;
        lVar4 = (ulong)(iVar5 - 1) * 4 + 4;
        dVar11 = dVar8;
LAB_00100559:
        do {
          if (*(int *)(lVar6 + lVar3) < 0) {
            dVar8 = (double)msdfgen::TrueDistanceSelector::distance();
            lVar6 = *(long *)(this + 0x10);
            if ((double)(uVar1 & (ulong)dVar8) < dVar10) {
              if (dVar11 <= dVar8) {
                dVar8 = dVar11;
              }
              lVar3 = lVar3 + 4;
              dVar11 = dVar8;
              if (lVar3 == lVar4) break;
              goto LAB_00100559;
            }
          }
          lVar3 = lVar3 + 4;
          dVar8 = dVar11;
        } while (lVar3 != lVar4);
        iVar2 = -1;
        goto LAB_00100430;
      }
      goto LAB_001004a1;
    }
  }
  else {
    dVar8 = dVar10;
    if (0 < iVar5) {
      lVar6 = *(long *)(this + 0x10);
      lVar3 = 0;
      lVar4 = (ulong)(iVar5 - 1) * 4 + 4;
LAB_001003d9:
      do {
        if (0 < *(int *)(lVar6 + lVar3)) {
          dVar10 = (double)msdfgen::TrueDistanceSelector::distance();
          lVar6 = *(long *)(this + 0x10);
          if ((double)(uVar1 & (ulong)dVar10) < dVar11) {
            if (dVar10 <= dVar8) {
              dVar10 = dVar8;
            }
            lVar3 = lVar3 + 4;
            dVar8 = dVar10;
            if (lVar4 == lVar3) break;
            goto LAB_001003d9;
          }
        }
        lVar3 = lVar3 + 4;
      } while (lVar4 != lVar3);
      iVar2 = 1;
LAB_00100430:
      lVar4 = 0;
      while( true ) {
        if ((*(int *)(lVar6 + lVar4 * 4) != iVar2) &&
           (dVar10 = (double)msdfgen::TrueDistanceSelector::distance(), 0.0 <= dVar10 * dVar8)) {
          uVar7 = -(ulong)((double)(uVar1 & (ulong)dVar8) <= (double)(uVar1 & (ulong)dVar10));
          dVar8 = (double)((ulong)dVar8 & uVar7 | ~uVar7 & (ulong)dVar10);
        }
        lVar4 = lVar4 + 1;
        if (iVar5 <= (int)lVar4) break;
        lVar6 = *(long *)(this + 0x10);
      }
    }
LAB_001004a1:
    if (dVar9 != dVar8) goto LAB_001004b3;
  }
  dVar8 = dVar9;
LAB_001004b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::reset(msdfgen::Vector2
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::reset
          (OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector> *this,Vector2 *param_1
          )

{
  undefined8 uVar1;
  Vector2 *pVVar2;
  Vector2 *pVVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pVVar2 = *(Vector2 **)(this + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  if (pVVar2 != *(Vector2 **)(this + 0x30)) {
    do {
      pVVar3 = pVVar2 + 0x40;
      msdfgen::PerpendicularDistanceSelector::reset(pVVar2);
      pVVar2 = pVVar3;
    } while (*(Vector2 **)(this + 0x30) != pVVar3);
  }
  return;
}



/* msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::edgeSelector(int) */

long __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::edgeSelector
          (OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector> *this,int param_1)

{
  return (long)param_1 * 0x40 + *(long *)(this + 0x28);
}



/* msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance() const */

double __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::distance
          (OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector> *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  PerpendicularDistanceSelectorBase local_108 [48];
  undefined1 local_d8 [16];
  PerpendicularDistanceSelectorBase local_c8 [48];
  undefined1 local_98 [16];
  PerpendicularDistanceSelectorBase local_88 [48];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (int)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 6);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_108);
  local_d8 = (undefined1  [16])0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_c8);
  local_98 = (undefined1  [16])0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_88);
  local_58 = (undefined1  [16])0x0;
  msdfgen::PerpendicularDistanceSelector::reset((Vector2 *)local_108);
  msdfgen::PerpendicularDistanceSelector::reset((Vector2 *)local_c8);
  msdfgen::PerpendicularDistanceSelector::reset((Vector2 *)local_88);
  if (0 < iVar2) {
    lVar6 = 0;
    lVar5 = (ulong)(iVar2 - 1) * 4 + 4;
    do {
      while( true ) {
        dVar8 = (double)msdfgen::PerpendicularDistanceSelector::distance();
        msdfgen::PerpendicularDistanceSelectorBase::merge(local_108);
        iVar3 = *(int *)(*(long *)(this + 0x10) + lVar6);
        if (iVar3 < 1) break;
        if (0.0 <= dVar8) {
          msdfgen::PerpendicularDistanceSelectorBase::merge(local_c8);
          iVar3 = *(int *)(*(long *)(this + 0x10) + lVar6);
          break;
        }
LAB_00100704:
        lVar6 = lVar6 + 4;
        if (lVar6 == lVar5) goto LAB_00100770;
      }
      if ((-1 < iVar3) || (0.0 < dVar8)) goto LAB_00100704;
      lVar6 = lVar6 + 4;
      msdfgen::PerpendicularDistanceSelectorBase::merge(local_88);
    } while (lVar6 != lVar5);
  }
LAB_00100770:
  dVar9 = (double)msdfgen::PerpendicularDistanceSelector::distance();
  dVar10 = (double)msdfgen::PerpendicularDistanceSelector::distance();
  dVar8 = (double)msdfgen::PerpendicularDistanceSelector::distance();
  uVar1 = _LC3;
  if ((dVar10 < 0.0) ||
     (dVar11 = (double)(_LC3 & (ulong)dVar8), dVar11 < (double)(_LC3 & (ulong)dVar10))) {
    if ((dVar8 <= 0.0) &&
       (dVar10 = (double)((ulong)dVar10 & _LC3), (double)(_LC3 & (ulong)dVar8) < dVar10)) {
      if (0 < iVar2) {
        lVar6 = *(long *)(this + 0x10);
        lVar4 = 0;
        lVar5 = (ulong)(iVar2 - 1) * 4 + 4;
LAB_00100999:
        do {
          if (*(int *)(lVar6 + lVar4) < 0) {
            dVar11 = (double)msdfgen::PerpendicularDistanceSelector::distance();
            lVar6 = *(long *)(this + 0x10);
            if ((double)(uVar1 & (ulong)dVar11) < dVar10) {
              if (dVar8 <= dVar11) {
                dVar11 = dVar8;
              }
              lVar4 = lVar4 + 4;
              dVar8 = dVar11;
              if (lVar4 == lVar5) break;
              goto LAB_00100999;
            }
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != lVar5);
        iVar3 = -1;
        goto LAB_0010085c;
      }
      goto LAB_001008d2;
    }
  }
  else {
    dVar8 = dVar10;
    if (0 < iVar2) {
      lVar6 = *(long *)(this + 0x10);
      lVar4 = 0;
      lVar5 = (ulong)(iVar2 - 1) * 4 + 4;
LAB_00100801:
      do {
        if (0 < *(int *)(lVar6 + lVar4)) {
          dVar10 = (double)msdfgen::PerpendicularDistanceSelector::distance();
          lVar6 = *(long *)(this + 0x10);
          if ((double)(uVar1 & (ulong)dVar10) < dVar11) {
            if (dVar10 <= dVar8) {
              dVar10 = dVar8;
            }
            lVar4 = lVar4 + 4;
            dVar8 = dVar10;
            if (lVar5 == lVar4) break;
            goto LAB_00100801;
          }
        }
        lVar4 = lVar4 + 4;
      } while (lVar5 != lVar4);
      iVar3 = 1;
LAB_0010085c:
      lVar5 = 0;
      while( true ) {
        if ((*(int *)(lVar6 + lVar5 * 4) != iVar3) &&
           (dVar10 = (double)msdfgen::PerpendicularDistanceSelector::distance(),
           0.0 <= dVar10 * dVar8)) {
          uVar7 = -(ulong)((double)(uVar1 & (ulong)dVar8) <= (double)(uVar1 & (ulong)dVar10));
          dVar8 = (double)((ulong)dVar8 & uVar7 | ~uVar7 & (ulong)dVar10);
        }
        lVar5 = lVar5 + 1;
        if (iVar2 <= (int)lVar5) break;
        lVar6 = *(long *)(this + 0x10);
      }
    }
LAB_001008d2:
    if (dVar9 != dVar8) goto LAB_001008e4;
  }
  dVar8 = dVar9;
LAB_001008e4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::reset(msdfgen::Vector2
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::reset
          (OverlappingContourCombiner<msdfgen::MultiDistanceSelector> *this,Vector2 *param_1)

{
  undefined8 uVar1;
  Vector2 *pVVar2;
  Vector2 *pVVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pVVar2 = *(Vector2 **)(this + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  if (pVVar2 != *(Vector2 **)(this + 0x30)) {
    do {
      pVVar3 = pVVar2 + 0xa0;
      msdfgen::MultiDistanceSelector::reset(pVVar2);
      pVVar2 = pVVar3;
    } while (*(Vector2 **)(this + 0x30) != pVVar3);
  }
  return;
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::edgeSelector(int) */

long __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::edgeSelector
          (OverlappingContourCombiner<msdfgen::MultiDistanceSelector> *this,int param_1)

{
  return (long)param_1 * 0xa0 + *(long *)(this + 0x28);
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::distance() const */

double * msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::distance(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  double *in_RDI;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_378;
  double local_338;
  double dStack_330;
  double local_328;
  double local_318;
  double dStack_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  Vector2 local_228 [16];
  PerpendicularDistanceSelectorBase local_218 [48];
  PerpendicularDistanceSelectorBase local_1e8 [48];
  PerpendicularDistanceSelectorBase local_1b8 [48];
  Vector2 local_188 [16];
  PerpendicularDistanceSelectorBase local_178 [48];
  PerpendicularDistanceSelectorBase local_148 [48];
  PerpendicularDistanceSelectorBase local_118 [48];
  Vector2 local_e8 [16];
  PerpendicularDistanceSelectorBase local_d8 [48];
  PerpendicularDistanceSelectorBase local_a8 [48];
  PerpendicularDistanceSelectorBase local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_228[0] = (Vector2)0x0;
  local_228[1] = (Vector2)0x0;
  local_228[2] = (Vector2)0x0;
  local_228[3] = (Vector2)0x0;
  local_228[4] = (Vector2)0x0;
  local_228[5] = (Vector2)0x0;
  local_228[6] = (Vector2)0x0;
  local_228[7] = (Vector2)0x0;
  local_228[8] = (Vector2)0x0;
  local_228[9] = (Vector2)0x0;
  local_228[10] = (Vector2)0x0;
  local_228[0xb] = (Vector2)0x0;
  local_228[0xc] = (Vector2)0x0;
  local_228[0xd] = (Vector2)0x0;
  local_228[0xe] = (Vector2)0x0;
  local_228[0xf] = (Vector2)0x0;
  iVar5 = (int)(*(long *)(in_RSI + 0x30) - *(long *)(in_RSI + 0x28) >> 5) * -0x33333333;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_218);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_1e8);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_1b8);
  local_188[0] = (Vector2)0x0;
  local_188[1] = (Vector2)0x0;
  local_188[2] = (Vector2)0x0;
  local_188[3] = (Vector2)0x0;
  local_188[4] = (Vector2)0x0;
  local_188[5] = (Vector2)0x0;
  local_188[6] = (Vector2)0x0;
  local_188[7] = (Vector2)0x0;
  local_188[8] = (Vector2)0x0;
  local_188[9] = (Vector2)0x0;
  local_188[10] = (Vector2)0x0;
  local_188[0xb] = (Vector2)0x0;
  local_188[0xc] = (Vector2)0x0;
  local_188[0xd] = (Vector2)0x0;
  local_188[0xe] = (Vector2)0x0;
  local_188[0xf] = (Vector2)0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_178);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_148);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_118);
  local_e8[0] = (Vector2)0x0;
  local_e8[1] = (Vector2)0x0;
  local_e8[2] = (Vector2)0x0;
  local_e8[3] = (Vector2)0x0;
  local_e8[4] = (Vector2)0x0;
  local_e8[5] = (Vector2)0x0;
  local_e8[6] = (Vector2)0x0;
  local_e8[7] = (Vector2)0x0;
  local_e8[8] = (Vector2)0x0;
  local_e8[9] = (Vector2)0x0;
  local_e8[10] = (Vector2)0x0;
  local_e8[0xb] = (Vector2)0x0;
  local_e8[0xc] = (Vector2)0x0;
  local_e8[0xd] = (Vector2)0x0;
  local_e8[0xe] = (Vector2)0x0;
  local_e8[0xf] = (Vector2)0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_d8);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_a8);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_78);
  msdfgen::MultiDistanceSelector::reset(local_228);
  msdfgen::MultiDistanceSelector::reset(local_188);
  msdfgen::MultiDistanceSelector::reset(local_e8);
  if (0 < iVar5) {
    lVar6 = 0;
    lVar4 = (ulong)(iVar5 - 1) * 4 + 4;
    do {
      while( true ) {
        msdfgen::MultiDistanceSelector::distance();
        msdfgen::MultiDistanceSelector::merge((MultiDistanceSelector *)local_228);
        iVar2 = *(int *)(*(long *)(in_RSI + 0x10) + lVar6);
        if (iVar2 < 1) break;
        dVar11 = local_2f8;
        dVar9 = local_308;
        if (local_300 <= local_308) {
          if (local_308 <= local_2f8) {
            dVar8 = local_308;
            dVar11 = local_308;
            if (local_300 < local_308) goto LAB_00100bee;
LAB_00100be4:
            dVar8 = dVar11;
            dVar7 = dVar9;
            if (dVar9 < dVar8) goto LAB_00100bee;
          }
          else {
            dVar9 = local_300;
            dVar7 = local_308;
            if (local_300 < local_308) goto LAB_00100be4;
          }
          dVar8 = dVar7;
        }
        else {
          dVar8 = local_300;
          if (local_2f8 < local_300) goto LAB_00100be4;
        }
LAB_00100bee:
        if (0.0 <= dVar8) {
          msdfgen::MultiDistanceSelector::merge((MultiDistanceSelector *)local_188);
          iVar2 = *(int *)(*(long *)(in_RSI + 0x10) + lVar6);
          break;
        }
LAB_00100c0d:
        lVar6 = lVar6 + 4;
        if (lVar4 == lVar6) goto LAB_00100cd0;
      }
      if (-1 < iVar2) goto LAB_00100c0d;
      dVar9 = local_2f8;
      if (local_300 <= local_308) {
        if (local_308 <= local_2f8) {
          dVar9 = local_308;
        }
        dVar11 = local_308;
        dVar8 = local_300;
        if (local_300 < local_308) goto LAB_0010108e;
      }
      else {
        dVar11 = local_300;
        dVar8 = local_308;
        if (local_2f8 < local_300) {
LAB_0010108e:
          dVar11 = dVar9;
          if (dVar9 <= dVar8) {
            dVar11 = dVar8;
          }
        }
      }
      if (0.0 < dVar11) goto LAB_00100c0d;
      lVar6 = lVar6 + 4;
      msdfgen::MultiDistanceSelector::merge((MultiDistanceSelector *)local_e8);
    } while (lVar4 != lVar6);
  }
LAB_00100cd0:
  msdfgen::MultiDistanceSelector::distance();
  local_338 = local_2e8;
  dStack_330 = dStack_2e0;
  local_328 = local_2d8;
  msdfgen::MultiDistanceSelector::distance();
  local_318 = local_2c8;
  dStack_310 = dStack_2c0;
  local_378 = local_2b8;
  msdfgen::MultiDistanceSelector::distance();
  uVar1 = _LC3;
  if (dStack_2c0 <= local_2c8) {
    if (local_2c8 <= local_2b8) {
      local_2b8 = local_2c8;
    }
    dVar9 = local_2c8;
    dVar11 = dStack_2c0;
    if (dStack_2c0 < local_2c8) goto LAB_00101153;
  }
  else {
    dVar9 = dStack_2c0;
    dVar11 = local_2c8;
    if (local_2b8 < dStack_2c0) {
LAB_00101153:
      dVar9 = local_2b8;
      if (local_2b8 <= dVar11) {
        dVar9 = dVar11;
      }
    }
  }
  dVar11 = local_298;
  if (dStack_2a0 <= local_2a8) {
    if (local_2a8 <= local_298) {
      dVar11 = local_2a8;
    }
    dVar8 = local_2a8;
    dVar7 = dStack_2a0;
    if (dStack_2a0 < local_2a8) goto LAB_00101132;
  }
  else {
    dVar8 = dStack_2a0;
    dVar7 = local_2a8;
    if (local_298 < dStack_2a0) {
LAB_00101132:
      dVar8 = dVar11;
      if (dVar11 <= dVar7) {
        dVar8 = dVar7;
      }
    }
  }
  if ((dVar9 < 0.0) ||
     (dVar11 = (double)(_LC3 & (ulong)dVar8), dVar11 < (double)(_LC3 & (ulong)dVar9))) {
    if ((0.0 < dVar8) ||
       (dVar9 = (double)((ulong)dVar9 & _LC3), dVar9 <= (double)((ulong)dVar8 & _LC3)))
    goto LAB_001010c6;
    dStack_2c0 = dStack_2a0;
    if (0 < iVar5) {
      local_378 = local_298;
      lVar6 = *(long *)(in_RSI + 0x10);
      local_318 = local_2a8;
      dStack_310 = dStack_2a0;
      lVar3 = 0;
      lVar4 = (ulong)(iVar5 - 1) * 4 + 4;
      do {
        while (*(int *)(lVar6 + lVar3) < 0) {
          msdfgen::MultiDistanceSelector::distance();
          dVar11 = local_258;
          if (dStack_260 <= local_268) {
            if (local_268 <= local_258) {
              dVar11 = local_268;
            }
            dVar8 = dStack_260;
            dVar7 = local_268;
            if (dStack_260 < local_268) goto LAB_0010124f;
          }
          else {
            dVar8 = local_268;
            dVar7 = dStack_260;
            if (local_258 < dStack_260) {
LAB_0010124f:
              dVar7 = dVar11;
              if (dVar11 <= dVar8) {
                dVar7 = dVar8;
              }
            }
          }
          if ((double)(uVar1 & (ulong)dVar7) < dVar9) {
            dVar11 = local_378;
            if (dStack_2c0 <= local_2a8) {
              if (local_2a8 <= local_378) {
                dVar11 = local_2a8;
              }
              dVar8 = local_2a8;
              dVar10 = dStack_2c0;
              if (dStack_2c0 < local_2a8) goto LAB_0010149a;
            }
            else {
              dVar8 = dStack_2c0;
              dVar10 = local_2a8;
              if (local_378 < dStack_2c0) {
LAB_0010149a:
                dVar8 = dVar11;
                if (dVar11 <= dVar10) {
                  dVar8 = dVar10;
                }
              }
            }
            if (dVar7 < dVar8) {
              local_318 = local_268;
              dStack_310 = dStack_260;
              local_378 = local_258;
              local_2a8 = local_268;
              dStack_2c0 = dStack_260;
            }
          }
          lVar3 = lVar3 + 4;
          lVar6 = *(long *)(in_RSI + 0x10);
          if (lVar3 == lVar4) goto LAB_001012b1;
        }
        lVar3 = lVar3 + 4;
      } while (lVar3 != lVar4);
LAB_001012b1:
      iVar2 = -1;
      local_2c8 = local_2a8;
      goto LAB_00100efe;
    }
    local_378 = local_298;
    local_318 = local_2a8;
    dStack_310 = dStack_2a0;
    local_2c8 = local_2a8;
  }
  else if (0 < iVar5) {
    lVar6 = *(long *)(in_RSI + 0x10);
    lVar3 = 0;
    lVar4 = (ulong)(iVar5 - 1) * 4 + 4;
    do {
      while (0 < *(int *)(lVar6 + lVar3)) {
        msdfgen::MultiDistanceSelector::distance();
        dVar9 = local_278;
        if (dStack_280 <= local_288) {
          if (local_288 <= local_278) {
            dVar9 = local_288;
          }
          dVar8 = dStack_280;
          dVar7 = local_288;
          if (dStack_280 < local_288) goto LAB_00100e96;
        }
        else {
          dVar8 = local_288;
          dVar7 = dStack_280;
          if (local_278 < dStack_280) {
LAB_00100e96:
            dVar7 = dVar9;
            if (dVar9 <= dVar8) {
              dVar7 = dVar8;
            }
          }
        }
        if ((double)(uVar1 & (ulong)dVar7) < dVar11) {
          if (dStack_2c0 <= local_2c8) {
            dVar9 = local_378;
            if (local_2c8 <= local_378) {
              dVar9 = local_2c8;
            }
            dVar8 = local_2c8;
            if ((dStack_2c0 < local_2c8) && (dVar8 = dVar9, dVar9 <= dStack_2c0)) {
              dVar8 = dStack_2c0;
            }
          }
          else {
            dVar8 = dStack_2c0;
            if ((local_378 < dStack_2c0) && (dVar8 = local_378, local_378 <= local_2c8)) {
              dVar8 = local_2c8;
            }
          }
          if (dVar8 < dVar7) {
            local_378 = local_278;
            local_318 = local_288;
            dStack_310 = dStack_280;
            local_2c8 = local_288;
            dStack_2c0 = dStack_280;
          }
        }
        lVar3 = lVar3 + 4;
        lVar6 = *(long *)(in_RSI + 0x10);
        if (lVar3 == lVar4) goto LAB_00100ef8;
      }
      lVar3 = lVar3 + 4;
    } while (lVar3 != lVar4);
LAB_00100ef8:
    iVar2 = 1;
LAB_00100efe:
    lVar4 = 0;
    do {
      if (*(int *)(lVar6 + lVar4 * 4) != iVar2) {
        msdfgen::MultiDistanceSelector::distance();
        dVar9 = local_238;
        if (local_248 < dStack_240) {
          dVar11 = dStack_240;
          dVar8 = local_248;
          if (local_238 < dStack_240) goto LAB_00100f22;
        }
        else {
          if (local_248 <= local_238) {
            dVar9 = local_248;
          }
          dVar11 = local_248;
          dVar8 = dStack_240;
          if (dStack_240 < local_248) {
LAB_00100f22:
            dVar11 = dVar9;
            if (dVar9 <= dVar8) {
              dVar11 = dVar8;
            }
          }
        }
        dVar9 = local_378;
        if (dStack_2c0 <= local_2c8) {
          if (local_2c8 <= local_378) {
            dVar9 = local_2c8;
          }
          dVar8 = local_2c8;
          dVar7 = dStack_2c0;
          if (dStack_2c0 < local_2c8) goto LAB_00100f48;
        }
        else {
          dVar8 = dStack_2c0;
          dVar7 = local_2c8;
          if (local_378 < dStack_2c0) {
LAB_00100f48:
            dVar8 = dVar9;
            if (dVar9 <= dVar7) {
              dVar8 = dVar7;
            }
          }
        }
        if ((0.0 <= dVar8 * dVar11) &&
           ((double)((ulong)dVar11 & uVar1) < (double)((ulong)dVar8 & uVar1))) {
          local_378 = local_238;
          local_318 = local_248;
          dStack_310 = dStack_240;
          local_2c8 = local_248;
          dStack_2c0 = dStack_240;
        }
      }
      lVar4 = lVar4 + 1;
      if (iVar5 <= (int)lVar4) break;
      lVar6 = *(long *)(in_RSI + 0x10);
    } while( true );
  }
  if (dStack_2c0 <= local_2c8) {
    dVar9 = local_378;
    if (local_2c8 <= local_378) {
      dVar9 = local_2c8;
    }
    dVar11 = local_2c8;
    if ((dStack_2c0 < local_2c8) && (dVar11 = dVar9, dVar9 <= dStack_2c0)) {
      dVar11 = dStack_2c0;
    }
  }
  else {
    dVar11 = dStack_2c0;
    if ((local_378 < dStack_2c0) && (dVar11 = local_378, local_378 <= local_2c8)) {
      dVar11 = local_2c8;
    }
  }
  if (dStack_2e0 <= local_2e8) {
    if (local_2e8 <= local_2d8) {
      local_2d8 = local_2e8;
    }
    dVar9 = local_2e8;
    if ((dStack_2e0 < local_2e8) && (dVar9 = local_2d8, local_2d8 <= dStack_2e0)) {
      dVar9 = dStack_2e0;
    }
  }
  else {
    dVar9 = dStack_2e0;
    if ((local_2d8 < dStack_2e0) && (dVar9 = local_2d8, local_2d8 <= local_2e8)) {
      dVar9 = local_2e8;
    }
  }
  if (dVar9 != dVar11) {
    local_338 = local_318;
    dStack_330 = dStack_310;
    local_328 = local_378;
  }
LAB_001010c6:
  *in_RDI = local_338;
  in_RDI[1] = dStack_330;
  in_RDI[2] = local_328;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::reset(msdfgen::Vector2
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::reset
          (OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector> *this,Vector2 *param_1)

{
  undefined8 uVar1;
  Vector2 *pVVar2;
  Vector2 *pVVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pVVar2 = *(Vector2 **)(this + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  if (pVVar2 != *(Vector2 **)(this + 0x30)) {
    do {
      pVVar3 = pVVar2 + 0xa0;
      msdfgen::MultiDistanceSelector::reset(pVVar2);
      pVVar2 = pVVar3;
    } while (*(Vector2 **)(this + 0x30) != pVVar3);
  }
  return;
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::edgeSelector(int) */

long __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::edgeSelector
          (OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector> *this,int param_1)

{
  return (long)param_1 * 0xa0 + *(long *)(this + 0x28);
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::distance() const */

double * msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::distance(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long in_RSI;
  double *in_RDI;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_318;
  double local_2d8;
  double dStack_2d0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  double local_230;
  Vector2 local_228 [16];
  PerpendicularDistanceSelectorBase local_218 [48];
  PerpendicularDistanceSelectorBase local_1e8 [48];
  PerpendicularDistanceSelectorBase local_1b8 [48];
  Vector2 local_188 [16];
  PerpendicularDistanceSelectorBase local_178 [48];
  PerpendicularDistanceSelectorBase local_148 [48];
  PerpendicularDistanceSelectorBase local_118 [48];
  Vector2 local_e8 [16];
  PerpendicularDistanceSelectorBase local_d8 [48];
  PerpendicularDistanceSelectorBase local_a8 [48];
  PerpendicularDistanceSelectorBase local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_228[0] = (Vector2)0x0;
  local_228[1] = (Vector2)0x0;
  local_228[2] = (Vector2)0x0;
  local_228[3] = (Vector2)0x0;
  local_228[4] = (Vector2)0x0;
  local_228[5] = (Vector2)0x0;
  local_228[6] = (Vector2)0x0;
  local_228[7] = (Vector2)0x0;
  local_228[8] = (Vector2)0x0;
  local_228[9] = (Vector2)0x0;
  local_228[10] = (Vector2)0x0;
  local_228[0xb] = (Vector2)0x0;
  local_228[0xc] = (Vector2)0x0;
  local_228[0xd] = (Vector2)0x0;
  local_228[0xe] = (Vector2)0x0;
  local_228[0xf] = (Vector2)0x0;
  iVar4 = (int)(*(long *)(in_RSI + 0x30) - *(long *)(in_RSI + 0x28) >> 5) * -0x33333333;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_218);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_1e8);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_1b8);
  local_188[0] = (Vector2)0x0;
  local_188[1] = (Vector2)0x0;
  local_188[2] = (Vector2)0x0;
  local_188[3] = (Vector2)0x0;
  local_188[4] = (Vector2)0x0;
  local_188[5] = (Vector2)0x0;
  local_188[6] = (Vector2)0x0;
  local_188[7] = (Vector2)0x0;
  local_188[8] = (Vector2)0x0;
  local_188[9] = (Vector2)0x0;
  local_188[10] = (Vector2)0x0;
  local_188[0xb] = (Vector2)0x0;
  local_188[0xc] = (Vector2)0x0;
  local_188[0xd] = (Vector2)0x0;
  local_188[0xe] = (Vector2)0x0;
  local_188[0xf] = (Vector2)0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_178);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_148);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_118);
  local_e8[0] = (Vector2)0x0;
  local_e8[1] = (Vector2)0x0;
  local_e8[2] = (Vector2)0x0;
  local_e8[3] = (Vector2)0x0;
  local_e8[4] = (Vector2)0x0;
  local_e8[5] = (Vector2)0x0;
  local_e8[6] = (Vector2)0x0;
  local_e8[7] = (Vector2)0x0;
  local_e8[8] = (Vector2)0x0;
  local_e8[9] = (Vector2)0x0;
  local_e8[10] = (Vector2)0x0;
  local_e8[0xb] = (Vector2)0x0;
  local_e8[0xc] = (Vector2)0x0;
  local_e8[0xd] = (Vector2)0x0;
  local_e8[0xe] = (Vector2)0x0;
  local_e8[0xf] = (Vector2)0x0;
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_d8);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_a8);
  msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(local_78);
  msdfgen::MultiDistanceSelector::reset(local_228);
  msdfgen::MultiDistanceSelector::reset(local_188);
  msdfgen::MultiDistanceSelector::reset(local_e8);
  if (0 < iVar4) {
    lVar5 = 0;
    lVar3 = (ulong)(iVar4 - 1) * 4 + 4;
    do {
      while( true ) {
        msdfgen::MultiAndTrueDistanceSelector::distance();
        msdfgen::MultiDistanceSelector::merge((MultiDistanceSelector *)local_228);
        iVar2 = *(int *)(*(long *)(in_RSI + 0x10) + lVar5);
        if (iVar2 < 1) break;
        dVar11 = local_238;
        dVar9 = local_248;
        if (dStack_240 <= local_248) {
          if (local_248 <= local_238) {
            dVar7 = local_248;
            dVar11 = local_248;
            if (dStack_240 < local_248) goto LAB_001016d6;
LAB_001016cc:
            dVar7 = dVar11;
            dVar8 = dVar9;
            if (dVar9 < dVar7) goto LAB_001016d6;
          }
          else {
            dVar9 = dStack_240;
            dVar8 = local_248;
            if (dStack_240 < local_248) goto LAB_001016cc;
          }
          dVar7 = dVar8;
        }
        else {
          dVar7 = dStack_240;
          if (local_238 < dStack_240) goto LAB_001016cc;
        }
LAB_001016d6:
        if (0.0 <= dVar7) {
          msdfgen::MultiDistanceSelector::merge((MultiDistanceSelector *)local_188);
          iVar2 = *(int *)(*(long *)(in_RSI + 0x10) + lVar5);
          break;
        }
LAB_001016f5:
        lVar5 = lVar5 + 4;
        if (lVar3 == lVar5) goto LAB_001017c8;
      }
      if (-1 < iVar2) goto LAB_001016f5;
      dVar9 = local_238;
      if (dStack_240 <= local_248) {
        if (local_248 <= local_238) {
          dVar9 = local_248;
        }
        dVar11 = local_248;
        dVar7 = dStack_240;
        if (dStack_240 < local_248) goto LAB_00101b9e;
      }
      else {
        dVar11 = dStack_240;
        dVar7 = local_248;
        if (local_238 < dStack_240) {
LAB_00101b9e:
          dVar11 = dVar9;
          if (dVar9 <= dVar7) {
            dVar11 = dVar7;
          }
        }
      }
      if (0.0 < dVar11) goto LAB_001016f5;
      lVar5 = lVar5 + 4;
      msdfgen::MultiDistanceSelector::merge((MultiDistanceSelector *)local_e8);
    } while (lVar3 != lVar5);
  }
LAB_001017c8:
  msdfgen::MultiAndTrueDistanceSelector::distance();
  msdfgen::MultiAndTrueDistanceSelector::distance();
  local_2d8 = local_288;
  dStack_2d0 = dStack_280;
  local_318 = local_278;
  msdfgen::MultiAndTrueDistanceSelector::distance();
  uVar1 = _LC3;
  if (dStack_280 <= local_288) {
    if (local_288 <= local_278) {
      local_278 = local_288;
    }
    dVar9 = local_288;
    dVar11 = dStack_280;
    if (dStack_280 < local_288) goto LAB_00101c63;
  }
  else {
    dVar9 = dStack_280;
    dVar11 = local_288;
    if (local_278 < dStack_280) {
LAB_00101c63:
      dVar9 = local_278;
      if (local_278 <= dVar11) {
        dVar9 = dVar11;
      }
    }
  }
  dVar11 = local_258;
  if (dStack_260 <= local_268) {
    if (local_268 <= local_258) {
      dVar11 = local_268;
    }
    dVar7 = local_268;
    dVar8 = dStack_260;
    if (dStack_260 < local_268) goto LAB_00101c42;
  }
  else {
    dVar7 = dStack_260;
    dVar8 = local_268;
    if (local_258 < dStack_260) {
LAB_00101c42:
      dVar7 = dVar11;
      if (dVar11 <= dVar8) {
        dVar7 = dVar8;
      }
    }
  }
  if ((dVar9 < 0.0) ||
     (dVar11 = (double)(_LC3 & (ulong)dVar7), dVar11 < (double)(_LC3 & (ulong)dVar9))) {
    if ((0.0 < dVar7) ||
       (dVar9 = (double)((ulong)dVar9 & _LC3), dVar9 <= (double)((ulong)dVar7 & _LC3))) {
      *in_RDI = local_2a8;
      in_RDI[1] = dStack_2a0;
      in_RDI[2] = local_298;
      in_RDI[3] = dStack_290;
      goto LAB_00101bf1;
    }
    dStack_280 = dStack_260;
    if (0 < iVar4) {
      local_318 = local_258;
      lVar5 = *(long *)(in_RSI + 0x10);
      local_2d8 = local_268;
      dStack_2d0 = dStack_260;
      lVar6 = 0;
      lVar3 = (ulong)(iVar4 - 1) * 4 + 4;
      do {
        while (*(int *)(lVar5 + lVar6) < 0) {
          msdfgen::MultiAndTrueDistanceSelector::distance();
          dVar11 = local_238;
          if (dStack_240 <= local_248) {
            if (local_248 <= local_238) {
              dVar11 = local_248;
            }
            dVar7 = dStack_240;
            dVar8 = local_248;
            if (dStack_240 < local_248) goto LAB_00101d67;
          }
          else {
            dVar7 = local_248;
            dVar8 = dStack_240;
            if (local_238 < dStack_240) {
LAB_00101d67:
              dVar8 = dVar11;
              if (dVar11 <= dVar7) {
                dVar8 = dVar7;
              }
            }
          }
          if ((double)(uVar1 & (ulong)dVar8) < dVar9) {
            dVar11 = local_318;
            if (dStack_280 <= local_268) {
              if (local_268 <= local_318) {
                dVar11 = local_268;
              }
              dVar7 = local_268;
              dVar10 = dStack_280;
              if (dStack_280 < local_268) goto LAB_00101fda;
            }
            else {
              dVar7 = dStack_280;
              dVar10 = local_268;
              if (local_318 < dStack_280) {
LAB_00101fda:
                dVar7 = dVar11;
                if (dVar11 <= dVar10) {
                  dVar7 = dVar10;
                }
              }
            }
            if (dVar8 < dVar7) {
              local_2d8 = local_248;
              dStack_2d0 = dStack_240;
              local_318 = local_238;
              local_250 = local_230;
              local_268 = local_248;
              dStack_280 = dStack_240;
            }
          }
          lVar6 = lVar6 + 4;
          lVar5 = *(long *)(in_RSI + 0x10);
          if (lVar6 == lVar3) goto LAB_00101dd1;
        }
        lVar6 = lVar6 + 4;
      } while (lVar6 != lVar3);
LAB_00101dd1:
      iVar2 = -1;
      local_270 = local_250;
      local_288 = local_268;
      goto LAB_00101a07;
    }
    local_318 = local_258;
    local_2d8 = local_268;
    dStack_2d0 = dStack_260;
    local_270 = local_250;
    local_288 = local_268;
  }
  else if (0 < iVar4) {
    lVar5 = *(long *)(in_RSI + 0x10);
    lVar6 = 0;
    lVar3 = (ulong)(iVar4 - 1) * 4 + 4;
    do {
      while (0 < *(int *)(lVar5 + lVar6)) {
        msdfgen::MultiAndTrueDistanceSelector::distance();
        dVar9 = local_238;
        if (dStack_240 <= local_248) {
          if (local_248 <= local_238) {
            dVar9 = local_248;
          }
          dVar7 = dStack_240;
          dVar8 = local_248;
          if (dStack_240 < local_248) goto LAB_00101997;
        }
        else {
          dVar7 = local_248;
          dVar8 = dStack_240;
          if (local_238 < dStack_240) {
LAB_00101997:
            dVar8 = dVar9;
            if (dVar9 <= dVar7) {
              dVar8 = dVar7;
            }
          }
        }
        if ((double)(uVar1 & (ulong)dVar8) < dVar11) {
          if (dStack_280 <= local_288) {
            dVar9 = local_318;
            if (local_288 <= local_318) {
              dVar9 = local_288;
            }
            dVar7 = local_288;
            if ((dStack_280 < local_288) && (dVar7 = dVar9, dVar9 <= dStack_280)) {
              dVar7 = dStack_280;
            }
          }
          else {
            dVar7 = dStack_280;
            if ((local_318 < dStack_280) && (dVar7 = local_318, local_318 <= local_288)) {
              dVar7 = local_288;
            }
          }
          if (dVar7 < dVar8) {
            local_318 = local_238;
            local_2d8 = local_248;
            dStack_2d0 = dStack_240;
            local_270 = local_230;
            local_288 = local_248;
            dStack_280 = dStack_240;
          }
        }
        lVar6 = lVar6 + 4;
        lVar5 = *(long *)(in_RSI + 0x10);
        if (lVar6 == lVar3) goto LAB_00101a01;
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 != lVar3);
LAB_00101a01:
    iVar2 = 1;
LAB_00101a07:
    lVar3 = 0;
    do {
      if (*(int *)(lVar5 + lVar3 * 4) != iVar2) {
        msdfgen::MultiAndTrueDistanceSelector::distance();
        dVar9 = local_238;
        if (local_248 < dStack_240) {
          dVar11 = dStack_240;
          dVar7 = local_248;
          if (local_238 < dStack_240) goto LAB_00101a32;
        }
        else {
          if (local_248 <= local_238) {
            dVar9 = local_248;
          }
          dVar11 = local_248;
          dVar7 = dStack_240;
          if (dStack_240 < local_248) {
LAB_00101a32:
            dVar11 = dVar9;
            if (dVar9 <= dVar7) {
              dVar11 = dVar7;
            }
          }
        }
        dVar9 = local_318;
        if (dStack_280 <= local_288) {
          if (local_288 <= local_318) {
            dVar9 = local_288;
          }
          dVar7 = local_288;
          dVar8 = dStack_280;
          if (dStack_280 < local_288) goto LAB_00101a58;
        }
        else {
          dVar7 = dStack_280;
          dVar8 = local_288;
          if (local_318 < dStack_280) {
LAB_00101a58:
            dVar7 = dVar9;
            if (dVar9 <= dVar8) {
              dVar7 = dVar8;
            }
          }
        }
        if ((0.0 <= dVar7 * dVar11) &&
           ((double)((ulong)dVar11 & uVar1) < (double)((ulong)dVar7 & uVar1))) {
          local_318 = local_238;
          local_2d8 = local_248;
          dStack_2d0 = dStack_240;
          local_270 = local_230;
          local_288 = local_248;
          dStack_280 = dStack_240;
        }
      }
      lVar3 = lVar3 + 1;
      if (iVar4 <= (int)lVar3) break;
      lVar5 = *(long *)(in_RSI + 0x10);
    } while( true );
  }
  if (dStack_280 <= local_288) {
    dVar9 = local_318;
    if (local_288 <= local_318) {
      dVar9 = local_288;
    }
    dVar11 = local_288;
    if ((dStack_280 < local_288) && (dVar11 = dVar9, dVar9 <= dStack_280)) {
      dVar11 = dStack_280;
    }
  }
  else {
    dVar11 = dStack_280;
    if ((local_318 < dStack_280) && (dVar11 = local_318, local_318 <= local_288)) {
      dVar11 = local_288;
    }
  }
  if (dStack_2a0 <= local_2a8) {
    dVar9 = local_298;
    if (local_2a8 <= local_298) {
      dVar9 = local_2a8;
    }
    dVar7 = local_2a8;
    if ((dStack_2a0 < local_2a8) && (dVar7 = dVar9, dVar9 <= dStack_2a0)) {
      dVar7 = dStack_2a0;
    }
  }
  else {
    dVar7 = dStack_2a0;
    if ((local_298 < dStack_2a0) && (dVar7 = local_298, local_298 <= local_2a8)) {
      dVar7 = local_2a8;
    }
  }
  if (dVar7 == dVar11) {
    local_2d8 = local_2a8;
    dStack_2d0 = dStack_2a0;
    local_318 = local_298;
    local_270 = dStack_290;
  }
  *in_RDI = local_2d8;
  in_RDI[1] = dStack_2d0;
  in_RDI[3] = local_270;
  in_RDI[2] = local_318;
LAB_00101bf1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<int, std::allocator<int> >::reserve(unsigned long) */

void __thiscall
std::vector<int,std::allocator<int>>::reserve(vector<int,std::allocator<int>> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - lVar1 >> 2)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  __dest = operator_new(param_1 * 4);
  __src = *(void **)this;
  if (*(long *)(this + 8) - (long)__src < 1) {
    if (__src == (void *)0x0) goto LAB_001020ae;
    uVar3 = *(long *)(this + 0x10) - (long)__src;
  }
  else {
    memmove(__dest,__src,*(long *)(this + 8) - (long)__src);
    uVar3 = *(long *)(this + 0x10) - (long)__src;
  }
  operator_delete(__src,uVar3);
LAB_001020ae:
  *(void **)this = __dest;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)__dest;
  *(void **)(this + 0x10) = (void *)((long)__dest + param_1 * 4);
  return;
}



/* std::vector<msdfgen::TrueDistanceSelector, std::allocator<msdfgen::TrueDistanceSelector>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<msdfgen::TrueDistanceSelector,std::allocator<msdfgen::TrueDistanceSelector>>::
_M_default_append(vector<msdfgen::TrueDistanceSelector,std::allocator<msdfgen::TrueDistanceSelector>>
                  *this,ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  
  uVar3 = _LC0;
  if (param_1 == 0) {
    return;
  }
  pauVar2 = *(undefined1 (**) [16])(this + 8);
  pauVar12 = *(undefined1 (**) [16])this;
  if ((ulong)(*(long *)(this + 0x10) - (long)pauVar2 >> 5) < param_1) {
    uVar8 = (long)pauVar2 - (long)pauVar12 >> 5;
    if (0x3ffffffffffffff - uVar8 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar8;
    uVar14 = 0x3ffffffffffffff;
    if (uVar1 < 0x400000000000000) {
      uVar14 = uVar1;
    }
    if ((param_1 <= uVar8) && (uVar14 = uVar8 * 2, 0x3ffffffffffffff < uVar14)) {
      uVar14 = 0x3ffffffffffffff;
    }
    puVar9 = (undefined8 *)operator_new(uVar14 * 0x20);
    uVar3 = _LC0;
    pauVar13 = (undefined1 (*) [16])((long)puVar9 + ((long)pauVar2 - (long)pauVar12));
    pauVar10 = pauVar13;
    do {
      *pauVar10 = (undefined1  [16])0x0;
      pauVar11 = pauVar10 + 2;
      *(undefined8 *)pauVar10[1] = uVar3;
      *(undefined8 *)(pauVar10[1] + 8) = 0;
      pauVar10 = pauVar11;
      pauVar6 = pauVar12;
      puVar7 = puVar9;
    } while (pauVar11 != pauVar13 + param_1 * 2);
    for (; pauVar6 != pauVar2; pauVar6 = pauVar6 + 2) {
      uVar3 = *(undefined8 *)(*pauVar6 + 8);
      uVar4 = *(undefined8 *)pauVar6[1];
      uVar5 = *(undefined8 *)(pauVar6[1] + 8);
      *puVar7 = *(undefined8 *)*pauVar6;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7 = puVar7 + 4;
    }
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar12,*(long *)(this + 0x10) - (long)pauVar12);
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar9 + uVar1 * 4;
    *(undefined8 **)(this + 0x10) = puVar9 + uVar14 * 4;
    return;
  }
  pauVar12 = pauVar2;
  do {
    *pauVar12 = (undefined1  [16])0x0;
    pauVar13 = pauVar12 + 2;
    *(undefined8 *)pauVar12[1] = uVar3;
    *(undefined8 *)(pauVar12[1] + 8) = 0;
    pauVar12 = pauVar13;
  } while (pauVar2 + param_1 * 2 != pauVar13);
  *(undefined1 (**) [16])(this + 8) = pauVar2 + param_1 * 2;
  return;
}



/* std::vector<msdfgen::PerpendicularDistanceSelector,
   std::allocator<msdfgen::PerpendicularDistanceSelector> >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<msdfgen::PerpendicularDistanceSelector,std::allocator<msdfgen::PerpendicularDistanceSelector>>
::_M_default_append(vector<msdfgen::PerpendicularDistanceSelector,std::allocator<msdfgen::PerpendicularDistanceSelector>>
                    *this,ulong param_1)

{
  ulong uVar1;
  PerpendicularDistanceSelectorBase *pPVar2;
  PerpendicularDistanceSelectorBase *pPVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  PerpendicularDistanceSelectorBase *pPVar15;
  ulong uVar16;
  
  if (param_1 == 0) {
    return;
  }
  pPVar2 = *(PerpendicularDistanceSelectorBase **)(this + 8);
  pPVar3 = *(PerpendicularDistanceSelectorBase **)this;
  pPVar15 = pPVar2;
  uVar16 = param_1;
  if ((ulong)(*(long *)(this + 0x10) - (long)pPVar2 >> 6) < param_1) {
    uVar16 = (long)pPVar2 - (long)pPVar3 >> 6;
    if (0x1ffffffffffffff - uVar16 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar16;
    uVar11 = 0x1ffffffffffffff;
    if (uVar1 < 0x200000000000000) {
      uVar11 = uVar1;
    }
    if ((param_1 <= uVar16) && (uVar11 = uVar16 * 2, 0x1ffffffffffffff < uVar11)) {
      uVar11 = 0x1ffffffffffffff;
    }
    puVar12 = (undefined8 *)operator_new(uVar11 * 0x40);
    pPVar15 = (PerpendicularDistanceSelectorBase *)(((long)pPVar2 - (long)pPVar3) + (long)puVar12);
    do {
      *(undefined1 (*) [16])pPVar15 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar15 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar15 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar15 + 0x30) = (undefined1  [16])0x0;
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(pPVar15);
      *(undefined1 (*) [16])(pPVar15 + 0x30) = (undefined1  [16])0x0;
      param_1 = param_1 - 1;
      pPVar15 = pPVar15 + 0x40;
    } while (param_1 != 0);
    if (pPVar3 != pPVar2) {
      puVar13 = puVar12;
      pPVar15 = pPVar3;
      do {
        uVar4 = *(undefined8 *)(pPVar15 + 8);
        uVar5 = *(undefined8 *)(pPVar15 + 0x10);
        uVar6 = *(undefined8 *)(pPVar15 + 0x18);
        puVar14 = puVar13 + 8;
        uVar7 = *(undefined8 *)(pPVar15 + 0x20);
        uVar8 = *(undefined8 *)(pPVar15 + 0x28);
        uVar9 = *(undefined8 *)(pPVar15 + 0x30);
        uVar10 = *(undefined8 *)(pPVar15 + 0x38);
        *puVar13 = *(undefined8 *)pPVar15;
        puVar13[1] = uVar4;
        puVar13[2] = uVar5;
        puVar13[3] = uVar6;
        puVar13[4] = uVar7;
        puVar13[5] = uVar8;
        puVar13[6] = uVar9;
        puVar13[7] = uVar10;
        puVar13 = puVar14;
        pPVar15 = pPVar15 + 0x40;
      } while (puVar14 != (undefined8 *)(((long)pPVar2 - (long)pPVar3) + (long)puVar12));
    }
    if (pPVar3 != (PerpendicularDistanceSelectorBase *)0x0) {
      operator_delete(pPVar3,*(long *)(this + 0x10) - (long)pPVar3);
    }
    *(undefined8 **)this = puVar12;
    *(undefined8 **)(this + 8) = puVar12 + uVar1 * 8;
    *(undefined8 **)(this + 0x10) = puVar12 + uVar11 * 8;
    return;
  }
  do {
    *(undefined1 (*) [16])pPVar15 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pPVar15 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pPVar15 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pPVar15 + 0x30) = (undefined1  [16])0x0;
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(pPVar15);
    *(undefined1 (*) [16])(pPVar15 + 0x30) = (undefined1  [16])0x0;
    uVar16 = uVar16 - 1;
    pPVar15 = pPVar15 + 0x40;
  } while (uVar16 != 0);
  *(PerpendicularDistanceSelectorBase **)(this + 8) = pPVar2 + param_1 * 0x40;
  return;
}



/* std::vector<msdfgen::MultiDistanceSelector, std::allocator<msdfgen::MultiDistanceSelector>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<msdfgen::MultiDistanceSelector,std::allocator<msdfgen::MultiDistanceSelector>>::
_M_default_append(vector<msdfgen::MultiDistanceSelector,std::allocator<msdfgen::MultiDistanceSelector>>
                  *this,ulong param_1)

{
  PerpendicularDistanceSelectorBase *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte bVar26;
  
  bVar26 = 0;
  if (param_1 == 0) {
    return;
  }
  puVar1 = *(undefined8 **)(this + 8);
  puVar23 = *(undefined8 **)this;
  puVar20 = puVar1;
  uVar25 = param_1;
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar1 >> 5) * -0x3333333333333333) < param_1) {
    lVar21 = (long)puVar1 - (long)puVar23 >> 5;
    if (lVar21 * 0x3333333333333333 + 0xccccccccccccccU < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar25 = param_1 + lVar21 * -0x3333333333333333;
    uVar19 = 0xcccccccccccccc;
    if (uVar25 < 0xcccccccccccccd) {
      uVar19 = uVar25;
    }
    if ((param_1 <= (ulong)(lVar21 * -0x3333333333333333)) &&
       (uVar19 = lVar21 * -0x6666666666666666, 0xcccccccccccccc < uVar19)) {
      uVar19 = 0xcccccccccccccc;
    }
    puVar20 = (undefined8 *)operator_new(uVar19 * 0xa0);
    puVar22 = (undefined8 *)(((long)puVar1 - (long)puVar23) + (long)puVar20);
    do {
      puVar24 = puVar22;
      for (lVar21 = 0x14; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + (ulong)bVar26 * -2 + 1;
      }
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
                ((PerpendicularDistanceSelectorBase *)(puVar22 + 2));
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
                ((PerpendicularDistanceSelectorBase *)(puVar22 + 8));
      this_00 = (PerpendicularDistanceSelectorBase *)(puVar22 + 0xe);
      puVar22 = puVar22 + 0x14;
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(this_00);
      param_1 = param_1 - 1;
      puVar24 = puVar23;
      puVar18 = puVar20;
    } while (param_1 != 0);
    for (; puVar24 != puVar1; puVar24 = puVar24 + 0x14) {
      uVar2 = puVar24[1];
      uVar3 = puVar24[2];
      uVar4 = puVar24[3];
      uVar5 = puVar24[4];
      uVar6 = puVar24[5];
      uVar7 = puVar24[6];
      uVar8 = puVar24[7];
      *puVar18 = *puVar24;
      puVar18[1] = uVar2;
      uVar2 = puVar24[8];
      uVar9 = puVar24[9];
      uVar10 = puVar24[10];
      uVar11 = puVar24[0xb];
      uVar12 = puVar24[0xc];
      uVar13 = puVar24[0xd];
      uVar14 = puVar24[0xe];
      uVar15 = puVar24[0xf];
      puVar18[2] = uVar3;
      puVar18[3] = uVar4;
      uVar3 = puVar24[0x10];
      uVar4 = puVar24[0x11];
      uVar16 = puVar24[0x12];
      uVar17 = puVar24[0x13];
      puVar18[4] = uVar5;
      puVar18[5] = uVar6;
      puVar18[6] = uVar7;
      puVar18[7] = uVar8;
      puVar18[8] = uVar2;
      puVar18[9] = uVar9;
      puVar18[10] = uVar10;
      puVar18[0xb] = uVar11;
      puVar18[0xc] = uVar12;
      puVar18[0xd] = uVar13;
      puVar18[0xe] = uVar14;
      puVar18[0xf] = uVar15;
      puVar18[0x10] = uVar3;
      puVar18[0x11] = uVar4;
      puVar18[0x12] = uVar16;
      puVar18[0x13] = uVar17;
      puVar18 = puVar18 + 0x14;
    }
    if (puVar23 != (undefined8 *)0x0) {
      operator_delete(puVar23,*(long *)(this + 0x10) - (long)puVar23);
    }
    *(undefined8 **)this = puVar20;
    *(undefined8 **)(this + 8) = puVar20 + uVar25 * 0x14;
    *(undefined8 **)(this + 0x10) = puVar20 + uVar19 * 0x14;
    return;
  }
  do {
    puVar23 = puVar20;
    for (lVar21 = 0x14; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + (ulong)bVar26 * -2 + 1;
    }
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
              ((PerpendicularDistanceSelectorBase *)(puVar20 + 2));
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
              ((PerpendicularDistanceSelectorBase *)(puVar20 + 8));
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
              ((PerpendicularDistanceSelectorBase *)(puVar20 + 0xe));
    uVar25 = uVar25 - 1;
    puVar20 = puVar20 + 0x14;
  } while (uVar25 != 0);
  *(undefined8 **)(this + 8) = puVar1 + param_1 * 0x14;
  return;
}



/* std::vector<msdfgen::MultiAndTrueDistanceSelector,
   std::allocator<msdfgen::MultiAndTrueDistanceSelector> >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<msdfgen::MultiAndTrueDistanceSelector,std::allocator<msdfgen::MultiAndTrueDistanceSelector>>
::_M_default_append(vector<msdfgen::MultiAndTrueDistanceSelector,std::allocator<msdfgen::MultiAndTrueDistanceSelector>>
                    *this,ulong param_1)

{
  PerpendicularDistanceSelectorBase *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte bVar26;
  
  bVar26 = 0;
  if (param_1 == 0) {
    return;
  }
  puVar1 = *(undefined8 **)(this + 8);
  puVar23 = *(undefined8 **)this;
  puVar20 = puVar1;
  uVar25 = param_1;
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar1 >> 5) * -0x3333333333333333) < param_1) {
    lVar21 = (long)puVar1 - (long)puVar23 >> 5;
    if (lVar21 * 0x3333333333333333 + 0xccccccccccccccU < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar25 = param_1 + lVar21 * -0x3333333333333333;
    uVar19 = 0xcccccccccccccc;
    if (uVar25 < 0xcccccccccccccd) {
      uVar19 = uVar25;
    }
    if ((param_1 <= (ulong)(lVar21 * -0x3333333333333333)) &&
       (uVar19 = lVar21 * -0x6666666666666666, 0xcccccccccccccc < uVar19)) {
      uVar19 = 0xcccccccccccccc;
    }
    puVar20 = (undefined8 *)operator_new(uVar19 * 0xa0);
    puVar22 = (undefined8 *)(((long)puVar1 - (long)puVar23) + (long)puVar20);
    do {
      puVar24 = puVar22;
      for (lVar21 = 0x14; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + (ulong)bVar26 * -2 + 1;
      }
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
                ((PerpendicularDistanceSelectorBase *)(puVar22 + 2));
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
                ((PerpendicularDistanceSelectorBase *)(puVar22 + 8));
      this_00 = (PerpendicularDistanceSelectorBase *)(puVar22 + 0xe);
      puVar22 = puVar22 + 0x14;
      msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase(this_00);
      param_1 = param_1 - 1;
      puVar24 = puVar23;
      puVar18 = puVar20;
    } while (param_1 != 0);
    for (; puVar24 != puVar1; puVar24 = puVar24 + 0x14) {
      uVar2 = puVar24[1];
      uVar3 = puVar24[2];
      uVar4 = puVar24[3];
      uVar5 = puVar24[4];
      uVar6 = puVar24[5];
      uVar7 = puVar24[6];
      uVar8 = puVar24[7];
      *puVar18 = *puVar24;
      puVar18[1] = uVar2;
      uVar2 = puVar24[8];
      uVar9 = puVar24[9];
      uVar10 = puVar24[10];
      uVar11 = puVar24[0xb];
      uVar12 = puVar24[0xc];
      uVar13 = puVar24[0xd];
      uVar14 = puVar24[0xe];
      uVar15 = puVar24[0xf];
      puVar18[2] = uVar3;
      puVar18[3] = uVar4;
      uVar3 = puVar24[0x10];
      uVar4 = puVar24[0x11];
      uVar16 = puVar24[0x12];
      uVar17 = puVar24[0x13];
      puVar18[4] = uVar5;
      puVar18[5] = uVar6;
      puVar18[6] = uVar7;
      puVar18[7] = uVar8;
      puVar18[8] = uVar2;
      puVar18[9] = uVar9;
      puVar18[10] = uVar10;
      puVar18[0xb] = uVar11;
      puVar18[0xc] = uVar12;
      puVar18[0xd] = uVar13;
      puVar18[0xe] = uVar14;
      puVar18[0xf] = uVar15;
      puVar18[0x10] = uVar3;
      puVar18[0x11] = uVar4;
      puVar18[0x12] = uVar16;
      puVar18[0x13] = uVar17;
      puVar18 = puVar18 + 0x14;
    }
    if (puVar23 != (undefined8 *)0x0) {
      operator_delete(puVar23,*(long *)(this + 0x10) - (long)puVar23);
    }
    *(undefined8 **)this = puVar20;
    *(undefined8 **)(this + 8) = puVar20 + uVar25 * 0x14;
    *(undefined8 **)(this + 0x10) = puVar20 + uVar19 * 0x14;
    return;
  }
  do {
    puVar23 = puVar20;
    for (lVar21 = 0x14; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + (ulong)bVar26 * -2 + 1;
    }
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
              ((PerpendicularDistanceSelectorBase *)(puVar20 + 2));
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
              ((PerpendicularDistanceSelectorBase *)(puVar20 + 8));
    msdfgen::PerpendicularDistanceSelectorBase::PerpendicularDistanceSelectorBase
              ((PerpendicularDistanceSelectorBase *)(puVar20 + 0xe));
    uVar25 = uVar25 - 1;
    puVar20 = puVar20 + 0x14;
  } while (uVar25 != 0);
  *(undefined8 **)(this + 8) = puVar1 + param_1 * 0x14;
  return;
}



/* void std::vector<int, std::allocator<int>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int&&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

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
    if (0xfffffffffffffffe < uVar2) goto LAB_00102a10;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_00102a1a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00102a10:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_00102a1a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_00102a1a;
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
    if (__src == (void *)0x0) goto LAB_001029eb;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001029eb:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::OverlappingContourCombiner
          (OverlappingContourCombiner<msdfgen::MultiDistanceSelector> *this,Shape *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)(this + 0x10),
             (*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555);
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
    lVar6 = *(long *)(this + 0x30);
    lVar4 = *(long *)(this + 0x28);
    uVar5 = 0;
    uVar3 = (lVar6 - lVar4 >> 5) * -0x3333333333333333;
  }
  else {
    lVar6 = *(long *)param_1;
    do {
      while( true ) {
        lVar2 = lVar6;
        local_34 = msdfgen::Contour::winding();
        puVar1 = *(undefined4 **)(this + 0x18);
        if (puVar1 != *(undefined4 **)(this + 0x20)) break;
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                  ((vector<int,std::allocator<int>> *)(this + 0x10),puVar1,&local_34);
        lVar6 = lVar2 + 0x18;
        if (*(long *)(param_1 + 8) == lVar2 + 0x18) goto LAB_00102ba0;
      }
      *puVar1 = local_34;
      *(undefined4 **)(this + 0x18) = puVar1 + 1;
      lVar6 = lVar2 + 0x18;
    } while (*(long *)(param_1 + 8) != lVar2 + 0x18);
LAB_00102ba0:
    lVar6 = *(long *)(this + 0x30);
    lVar4 = *(long *)(this + 0x28);
    uVar5 = ((lVar2 + 0x18) - *(long *)param_1 >> 3) * -0x5555555555555555;
    lVar2 = lVar6 - lVar4 >> 5;
    uVar3 = lVar2 * -0x3333333333333333;
    if (uVar3 < uVar5) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::vector<msdfgen::MultiDistanceSelector,std::allocator<msdfgen::MultiDistanceSelector>>::
        _M_default_append((vector<msdfgen::MultiDistanceSelector,std::allocator<msdfgen::MultiDistanceSelector>>
                           *)(this + 0x28),uVar5 + lVar2 * 0x3333333333333333);
        return;
      }
      goto LAB_00102c87;
    }
  }
  if ((uVar5 < uVar3) && (lVar4 = lVar4 + uVar5 * 0xa0, lVar4 != lVar6)) {
    *(long *)(this + 0x30) = lVar4;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c87:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::
OverlappingContourCombiner
          (OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector> *this,Shape *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)(this + 0x10),
             (*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555);
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
    lVar6 = *(long *)(this + 0x30);
    lVar3 = *(long *)(this + 0x28);
    uVar5 = 0;
    uVar2 = lVar6 - lVar3 >> 6;
  }
  else {
    lVar6 = *(long *)param_1;
    do {
      while( true ) {
        lVar4 = lVar6;
        local_34 = msdfgen::Contour::winding();
        puVar1 = *(undefined4 **)(this + 0x18);
        if (puVar1 != *(undefined4 **)(this + 0x20)) break;
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                  ((vector<int,std::allocator<int>> *)(this + 0x10),puVar1,&local_34);
        lVar6 = lVar4 + 0x18;
        if (*(long *)(param_1 + 8) == lVar4 + 0x18) goto LAB_00102d50;
      }
      *puVar1 = local_34;
      *(undefined4 **)(this + 0x18) = puVar1 + 1;
      lVar6 = lVar4 + 0x18;
    } while (*(long *)(param_1 + 8) != lVar4 + 0x18);
LAB_00102d50:
    lVar6 = *(long *)(this + 0x30);
    lVar3 = *(long *)(this + 0x28);
    uVar5 = ((lVar4 + 0x18) - *(long *)param_1 >> 3) * -0x5555555555555555;
    uVar2 = lVar6 - lVar3 >> 6;
    if (uVar2 < uVar5) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        vector<msdfgen::PerpendicularDistanceSelector,std::allocator<msdfgen::PerpendicularDistanceSelector>>
        ::_M_default_append((vector<msdfgen::PerpendicularDistanceSelector,std::allocator<msdfgen::PerpendicularDistanceSelector>>
                             *)(this + 0x28),uVar5 - uVar2);
        return;
      }
      goto LAB_00102e09;
    }
  }
  if (uVar5 < uVar2) {
    lVar3 = lVar3 + uVar5 * 0x40;
    if (lVar3 != lVar6) {
      *(long *)(this + 0x30) = lVar3;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102e09:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::OverlappingContourCombiner
          (OverlappingContourCombiner<msdfgen::TrueDistanceSelector> *this,Shape *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)(this + 0x10),
             (*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555);
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
    lVar6 = *(long *)(this + 0x30);
    lVar3 = *(long *)(this + 0x28);
    uVar5 = 0;
    uVar2 = lVar6 - lVar3 >> 5;
  }
  else {
    lVar6 = *(long *)param_1;
    do {
      while( true ) {
        lVar4 = lVar6;
        local_34 = msdfgen::Contour::winding();
        puVar1 = *(undefined4 **)(this + 0x18);
        if (puVar1 != *(undefined4 **)(this + 0x20)) break;
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                  ((vector<int,std::allocator<int>> *)(this + 0x10),puVar1,&local_34);
        lVar6 = lVar4 + 0x18;
        if (*(long *)(param_1 + 8) == lVar4 + 0x18) goto LAB_00102ed0;
      }
      *puVar1 = local_34;
      *(undefined4 **)(this + 0x18) = puVar1 + 1;
      lVar6 = lVar4 + 0x18;
    } while (*(long *)(param_1 + 8) != lVar4 + 0x18);
LAB_00102ed0:
    lVar6 = *(long *)(this + 0x30);
    lVar3 = *(long *)(this + 0x28);
    uVar5 = ((lVar4 + 0x18) - *(long *)param_1 >> 3) * -0x5555555555555555;
    uVar2 = lVar6 - lVar3 >> 5;
    if (uVar2 < uVar5) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::vector<msdfgen::TrueDistanceSelector,std::allocator<msdfgen::TrueDistanceSelector>>::
        _M_default_append((vector<msdfgen::TrueDistanceSelector,std::allocator<msdfgen::TrueDistanceSelector>>
                           *)(this + 0x28),uVar5 - uVar2);
        return;
      }
      goto LAB_00102f89;
    }
  }
  if (uVar5 < uVar2) {
    lVar3 = lVar3 + uVar5 * 0x20;
    if (lVar3 != lVar6) {
      *(long *)(this + 0x30) = lVar3;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102f89:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void __thiscall
msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::
OverlappingContourCombiner
          (OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector> *this,Shape *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)(this + 0x10),
             (*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555);
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
    lVar6 = *(long *)(this + 0x30);
    lVar4 = *(long *)(this + 0x28);
    uVar5 = 0;
    uVar3 = (lVar6 - lVar4 >> 5) * -0x3333333333333333;
  }
  else {
    lVar6 = *(long *)param_1;
    do {
      while( true ) {
        lVar2 = lVar6;
        local_34 = msdfgen::Contour::winding();
        puVar1 = *(undefined4 **)(this + 0x18);
        if (puVar1 != *(undefined4 **)(this + 0x20)) break;
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                  ((vector<int,std::allocator<int>> *)(this + 0x10),puVar1,&local_34);
        lVar6 = lVar2 + 0x18;
        if (*(long *)(param_1 + 8) == lVar2 + 0x18) goto LAB_00103050;
      }
      *puVar1 = local_34;
      *(undefined4 **)(this + 0x18) = puVar1 + 1;
      lVar6 = lVar2 + 0x18;
    } while (*(long *)(param_1 + 8) != lVar2 + 0x18);
LAB_00103050:
    lVar6 = *(long *)(this + 0x30);
    lVar4 = *(long *)(this + 0x28);
    uVar5 = ((lVar2 + 0x18) - *(long *)param_1 >> 3) * -0x5555555555555555;
    lVar2 = lVar6 - lVar4 >> 5;
    uVar3 = lVar2 * -0x3333333333333333;
    if (uVar3 < uVar5) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        vector<msdfgen::MultiAndTrueDistanceSelector,std::allocator<msdfgen::MultiAndTrueDistanceSelector>>
        ::_M_default_append((vector<msdfgen::MultiAndTrueDistanceSelector,std::allocator<msdfgen::MultiAndTrueDistanceSelector>>
                             *)(this + 0x28),uVar5 + lVar2 * 0x3333333333333333);
        return;
      }
      goto LAB_00103137;
    }
  }
  if ((uVar5 < uVar3) && (lVar4 = lVar4 + uVar5 * 0xa0, lVar4 != lVar6)) {
    *(long *)(this + 0x30) = lVar4;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103137:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::OverlappingContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::
     OverlappingContourCombiner(Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::OverlappingContourCombiner<msdfgen::TrueDistanceSelector>::OverlappingContourCombiner
               (Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::MultiAndTrueDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::OverlappingContourCombiner<msdfgen::PerpendicularDistanceSelector>::
     OverlappingContourCombiner(Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::MultiDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::PerpendicularDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::SimpleContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::SimpleContourCombiner<msdfgen::TrueDistanceSelector>::SimpleContourCombiner
               (Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::OverlappingContourCombiner(msdfgen::Shape
   const&) */

void msdfgen::OverlappingContourCombiner<msdfgen::MultiDistanceSelector>::OverlappingContourCombiner
               (Shape *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


