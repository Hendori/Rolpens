
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Clipper2Lib::GetSegmentIntersection(Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long>
   const&, Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long> const&,
   Clipper2Lib::Point<long>&) */

bool Clipper2Lib::GetSegmentIntersection
               (Point *param_1,Point *param_2,Point *param_3,Point *param_4,Point *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar4 = *(long *)(param_3 + 8);
  lVar5 = *(long *)param_3;
  lVar3 = *(long *)param_1;
  lVar1 = *(long *)(param_1 + 8);
  dVar9 = (double)(*(long *)(param_4 + 8) - lVar4);
  dVar10 = (double)(*(long *)param_4 - lVar5);
  dVar7 = (double)(lVar5 - lVar3) * dVar9 - (double)(lVar4 - lVar1) * dVar10;
  dVar6 = (double)(lVar5 - *(long *)param_2) * dVar9 -
          (double)(lVar4 - *(long *)(param_2 + 8)) * dVar10;
  if (dVar7 == 0.0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)param_5 = *(undefined8 *)param_1;
    *(undefined8 *)(param_5 + 8) = uVar2;
    if (dVar6 == 0.0) {
      return false;
    }
    lVar4 = *(long *)param_1;
    if ((*(long *)param_3 != lVar4) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar5 = *(long *)(param_4 + 8);
      if ((*(long *)param_4 != lVar4) || (*(long *)(param_1 + 8) != lVar5)) {
        lVar3 = *(long *)(param_3 + 8);
        if (lVar3 == lVar5) {
          return *(long *)param_3 < lVar4 == lVar4 < *(long *)param_4;
        }
        lVar4 = *(long *)(param_1 + 8);
LAB_001000f2:
        return lVar3 < lVar4 == lVar4 < lVar5;
      }
    }
  }
  else if (dVar6 == 0.0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_5 = *(undefined8 *)param_2;
    *(undefined8 *)(param_5 + 8) = uVar2;
    lVar4 = *(long *)param_2;
    if ((*(long *)param_3 != lVar4) || (*(long *)(param_2 + 8) != *(long *)(param_3 + 8))) {
      lVar5 = *(long *)(param_4 + 8);
      if ((lVar4 != *(long *)param_4) || (*(long *)(param_2 + 8) != lVar5)) {
        lVar3 = *(long *)(param_3 + 8);
        if (lVar3 == lVar5) {
          return *(long *)param_3 < lVar4 == lVar4 < *(long *)param_4;
        }
        lVar4 = *(long *)(param_2 + 8);
        goto LAB_001000f2;
      }
    }
  }
  else {
    if (0.0 < dVar7 == 0.0 < dVar6) {
      return false;
    }
    dVar7 = (double)(*(long *)(param_2 + 8) - lVar1);
    dVar11 = (double)(*(long *)param_2 - lVar3);
    dVar6 = (double)(lVar3 - lVar5) * dVar7 - (double)(lVar1 - lVar4) * dVar11;
    if (dVar6 == 0.0) {
      uVar2 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_5 = *(undefined8 *)param_3;
      *(undefined8 *)(param_5 + 8) = uVar2;
      lVar4 = *(long *)param_3;
      if ((lVar4 != *(long *)param_1) || (*(long *)(param_3 + 8) != *(long *)(param_1 + 8))) {
        lVar5 = *(long *)(param_2 + 8);
        if ((lVar4 != *(long *)param_2) || (*(long *)(param_3 + 8) != lVar5)) {
          lVar3 = *(long *)(param_1 + 8);
          if (lVar3 == lVar5) {
            return *(long *)param_1 < lVar4 == lVar4 < *(long *)param_2;
          }
          lVar4 = *(long *)(param_3 + 8);
LAB_00100224:
          return lVar3 < lVar4 == lVar4 < lVar5;
        }
      }
    }
    else {
      dVar8 = (double)(lVar3 - *(long *)param_4) * dVar7 -
              (double)(lVar1 - *(long *)(param_4 + 8)) * dVar11;
      if (dVar8 == 0.0) {
        uVar2 = *(undefined8 *)(param_4 + 8);
        *(undefined8 *)param_5 = *(undefined8 *)param_4;
        *(undefined8 *)(param_5 + 8) = uVar2;
        lVar4 = *(long *)param_4;
        if ((lVar4 != *(long *)param_1) || (*(long *)(param_4 + 8) != *(long *)(param_1 + 8))) {
          lVar5 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)param_2) || (*(long *)(param_4 + 8) != lVar5)) {
            lVar3 = *(long *)(param_1 + 8);
            if (lVar3 == lVar5) {
              return *(long *)param_1 < lVar4 == lVar4 < *(long *)param_2;
            }
            lVar4 = *(long *)(param_4 + 8);
            goto LAB_00100224;
          }
        }
      }
      else {
        if (0.0 < dVar6 == 0.0 < dVar8) {
          return false;
        }
        dVar6 = dVar10 * dVar7 - dVar9 * dVar11;
        if (dVar6 == 0.0) {
          return false;
        }
        dVar6 = (dVar9 * (double)(lVar3 - lVar5) - dVar10 * (double)(lVar1 - lVar4)) / dVar6;
        if (dVar6 <= 0.0) {
          uVar2 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)param_5 = *(undefined8 *)param_1;
          *(undefined8 *)(param_5 + 8) = uVar2;
        }
        else if (dVar6 < __LC1) {
          *(long *)param_5 = (long)((double)lVar3 + dVar11 * dVar6);
          *(long *)(param_5 + 8) = (long)((double)lVar1 + dVar7 * dVar6);
        }
        else {
          uVar2 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)param_5 = *(undefined8 *)param_2;
          *(undefined8 *)(param_5 + 8) = uVar2;
        }
      }
    }
  }
  return true;
}



/* Clipper2Lib::GetIntersection(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, Clipper2Lib::Point<long> const&,
   Clipper2Lib::Point<long> const&, Clipper2Lib::Location&, Clipper2Lib::Point<long>&) [clone
   .isra.0] */

undefined8
Clipper2Lib::GetIntersection
          (vector *param_1,Point *param_2,Point *param_3,Location *param_4,Point *param_5)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)param_4;
  if (iVar1 == 2) {
    cVar2 = GetSegmentIntersection
                      (param_2,param_3,(Point *)(param_1 + 0x10),(Point *)(param_1 + 0x20),param_5);
    if (cVar2 != '\0') {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) <= *(long *)(param_2 + 8)) goto LAB_0010069a;
    cVar2 = GetSegmentIntersection
                      (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x10),param_5);
joined_r0x00100634:
    if (cVar2 == '\0') {
LAB_0010069a:
      cVar2 = GetSegmentIntersection
                        (param_2,param_3,(Point *)(param_1 + 0x20),(Point *)(param_1 + 0x30),param_5
                        );
      if (cVar2 != '\0') {
        *(undefined4 *)param_4 = 3;
        return 1;
      }
      return 0;
    }
LAB_001006e1:
    *(undefined4 *)param_4 = 1;
    return 1;
  }
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      cVar2 = GetSegmentIntersection
                        (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x30),param_5);
      if (cVar2 != '\0') {
        return 1;
      }
      if (*(long *)(param_1 + 8) <= *(long *)(param_2 + 8)) goto LAB_0010069a;
      cVar2 = GetSegmentIntersection
                        (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x10),param_5);
      goto joined_r0x00100634;
    }
    if (iVar1 != 1) goto LAB_001005b0;
    cVar2 = GetSegmentIntersection
                      (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x10),param_5);
    if (cVar2 != '\0') {
      return 1;
    }
    if ((*(long *)param_2 < *(long *)param_1) &&
       (cVar2 = GetSegmentIntersection
                          (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x30),param_5),
       cVar2 != '\0')) goto LAB_001005d0;
    cVar2 = GetSegmentIntersection
                      (param_2,param_3,(Point *)(param_1 + 0x10),(Point *)(param_1 + 0x20),param_5);
  }
  else {
    if (iVar1 != 3) {
LAB_001005b0:
      cVar2 = GetSegmentIntersection
                        (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x30),param_5);
      if (cVar2 != '\0') {
LAB_001005d0:
        *(undefined4 *)param_4 = 0;
        return 1;
      }
      cVar2 = GetSegmentIntersection
                        (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x10),param_5);
      if (cVar2 == '\0') {
        cVar2 = GetSegmentIntersection
                          (param_2,param_3,(Point *)(param_1 + 0x10),(Point *)(param_1 + 0x20),
                           param_5);
        if (cVar2 != '\0') goto LAB_00100526;
        goto LAB_0010069a;
      }
      goto LAB_001006e1;
    }
    cVar2 = GetSegmentIntersection
                      (param_2,param_3,(Point *)(param_1 + 0x20),(Point *)(param_1 + 0x30),param_5);
    if (cVar2 != '\0') {
      return 1;
    }
    if ((*(long *)param_2 < *(long *)(param_1 + 0x30)) &&
       (cVar2 = GetSegmentIntersection
                          (param_2,param_3,(Point *)param_1,(Point *)(param_1 + 0x30),param_5),
       cVar2 != '\0')) goto LAB_001005d0;
    cVar2 = GetSegmentIntersection
                      (param_2,param_3,(Point *)(param_1 + 0x10),(Point *)(param_1 + 0x20),param_5);
  }
  if (cVar2 == '\0') {
    return 0;
  }
LAB_00100526:
  *(undefined4 *)param_4 = 2;
  return 1;
}



/* Clipper2Lib::StartLocsAreClockwise(std::vector<Clipper2Lib::Location,
   std::allocator<Clipper2Lib::Location> > const&) */

undefined8 Clipper2Lib::StartLocsAreClockwise(vector *param_1)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)param_1;
  if ((ulong)(*(long *)(param_1 + 8) - (long)piVar1) < 5) {
    return 0;
  }
  iVar5 = 0;
  uVar2 = 1;
  iVar4 = *piVar1;
  do {
    uVar3 = uVar2;
    iVar4 = piVar1[uVar3] - iVar4;
    if (iVar4 == 1) {
LAB_00100790:
      iVar5 = iVar5 + 1;
    }
    else if (iVar4 < 2) {
      if (iVar4 == -3) goto LAB_00100790;
      if (iVar4 == -1) goto LAB_0010075a;
    }
    else if (iVar4 == 3) {
LAB_0010075a:
      iVar5 = iVar5 + -1;
    }
    uVar2 = uVar3 + 1;
    iVar4 = piVar1[uVar3];
    if ((ulong)(*(long *)(param_1 + 8) - (long)piVar1 >> 2) <= uVar3 + 1) {
      return CONCAT71((int7)(uVar3 + 1 >> 8),0 < iVar5);
    }
  } while( true );
}



/* Clipper2Lib::RectClip64::GetPath(Clipper2Lib::OutPt2*&) */

OutPt2 ** Clipper2Lib::RectClip64::GetPath(OutPt2 **param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  OutPt2 *pOVar6;
  ulong uVar7;
  long *in_RDX;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  OutPt2 *pOVar15;
  OutPt2 *pOVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  OutPt2 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *in_RDX;
  if ((lVar1 != 0) && (plVar24 = *(long **)(lVar1 + 0x20), plVar24 != *(long **)(lVar1 + 0x28))) {
    if (plVar24 != (long *)0x0) {
      while (plVar23 = plVar24, (long *)*in_RDX != plVar24) {
        while( true ) {
          plVar24 = (long *)plVar23[4];
          plVar2 = (long *)plVar23[5];
          uVar12 = *plVar23 - *plVar2;
          uVar20 = plVar24[1] - plVar23[1];
          uVar19 = *plVar24 - *plVar23;
          uVar18 = plVar23[1] - plVar2[1];
          uVar21 = -uVar12;
          if (0 < (long)uVar12) {
            uVar21 = uVar12;
          }
          uVar5 = -uVar20;
          if (0 < (long)uVar20) {
            uVar5 = uVar20;
          }
          uVar10 = -uVar18;
          if (0 < (long)uVar18) {
            uVar10 = uVar18;
          }
          uVar17 = -uVar19;
          if (0 < (long)uVar19) {
            uVar17 = uVar19;
          }
          uVar13 = (uVar21 & 0xffffffff) * (uVar5 & 0xffffffff);
          uVar8 = (uVar5 & 0xffffffff) * (uVar21 >> 0x20) + (uVar13 >> 0x20);
          uVar7 = (uVar21 & 0xffffffff) * (uVar5 >> 0x20) + (uVar8 & 0xffffffff);
          uVar22 = (uVar10 & 0xffffffff) * (uVar17 & 0xffffffff);
          uVar9 = (uVar17 & 0xffffffff) * (uVar10 >> 0x20) + (uVar22 >> 0x20);
          uVar14 = (uVar10 & 0xffffffff) * (uVar17 >> 0x20) + (uVar9 & 0xffffffff);
          if (((uVar9 >> 0x20) + (uVar17 >> 0x20) * (uVar10 >> 0x20) + (uVar14 >> 0x20) !=
               (uVar5 >> 0x20) * (uVar21 >> 0x20) + (uVar8 >> 0x20) + (uVar7 >> 0x20) ||
               (uVar14 << 0x20 | uVar22 & 0xffffffff) != (uVar7 << 0x20 | uVar13 & 0xffffffff)) ||
             (((uint)(0 < (long)uVar12) + (int)((long)uVar12 >> 0x3f)) *
              ((uint)(0 < (long)uVar20) + (int)((long)uVar20 >> 0x3f)) !=
              ((uint)(0 < (long)uVar18) + (int)((long)uVar18 >> 0x3f)) *
              ((uint)(0 < (long)uVar19) + (int)((long)uVar19 >> 0x3f)))) break;
          *in_RDX = (long)plVar2;
          plVar24 = (long *)plVar23[4];
          if (plVar24 == plVar23) goto LAB_00100a40;
          plVar2[4] = (long)plVar24;
          plVar24[5] = (long)plVar2;
          plVar23 = plVar24;
          if ((long *)*in_RDX == plVar24) goto LAB_00100998;
        }
      }
LAB_00100998:
      local_58 = (undefined1  [16])0x0;
      local_48 = (OutPt2 *)0x0;
      std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
      _M_realloc_insert<Clipper2Lib::Point<long>const&>
                ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                 local_58,0,plVar24);
      puVar11 = (undefined8 *)((undefined8 *)*in_RDX)[4];
      pOVar6 = local_48;
      pOVar16 = (OutPt2 *)local_58._8_8_;
      pOVar15 = (OutPt2 *)local_58._8_8_;
      if ((undefined8 *)*in_RDX != puVar11) {
        do {
          while (pOVar16 != pOVar6) {
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            pOVar15 = pOVar16 + 0x10;
            puVar11 = (undefined8 *)puVar11[4];
            *(undefined8 *)pOVar16 = uVar3;
            *(undefined8 *)(pOVar16 + 8) = uVar4;
            local_58._8_8_ = pOVar15;
            pOVar16 = pOVar15;
            if ((undefined8 *)*in_RDX == puVar11) goto LAB_00100a20;
          }
          std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
          _M_realloc_insert<Clipper2Lib::Point<long>const&>
                    ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                     local_58,pOVar16,puVar11);
          puVar11 = (undefined8 *)puVar11[4];
          pOVar6 = local_48;
          pOVar16 = (OutPt2 *)local_58._8_8_;
          pOVar15 = (OutPt2 *)local_58._8_8_;
        } while ((undefined8 *)*in_RDX != puVar11);
      }
LAB_00100a20:
      param_1[2] = pOVar6;
      *param_1 = (OutPt2 *)local_58._0_8_;
      param_1[1] = pOVar15;
      goto LAB_00100a5c;
    }
LAB_00100a40:
    *in_RDX = 0;
  }
  param_1[2] = (OutPt2 *)0x0;
  param_1[0] = (OutPt2 *)0x0;
  param_1[1] = (OutPt2 *)0x0;
LAB_00100a5c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Clipper2Lib::RectClipLines64::GetPath(Clipper2Lib::OutPt2*&) */

OutPt2 ** Clipper2Lib::RectClipLines64::GetPath(OutPt2 **param_1)

{
  long lVar1;
  OutPt2 *pOVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *in_RDX;
  undefined8 *puVar5;
  
  lVar1 = *in_RDX;
  param_1[2] = (OutPt2 *)0x0;
  param_1[0] = (OutPt2 *)0x0;
  param_1[1] = (OutPt2 *)0x0;
  if ((lVar1 != 0) && (lVar1 != *(long *)(lVar1 + 0x20))) {
    *in_RDX = *(long *)(lVar1 + 0x20);
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>const&>
              ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)param_1,
               0);
    puVar5 = (undefined8 *)((undefined8 *)*in_RDX)[4];
    if ((undefined8 *)*in_RDX != puVar5) {
      do {
        while (pOVar2 = param_1[1], pOVar2 != param_1[2]) {
          uVar3 = *puVar5;
          uVar4 = puVar5[1];
          puVar5 = (undefined8 *)puVar5[4];
          *(undefined8 *)pOVar2 = uVar3;
          *(undefined8 *)(pOVar2 + 8) = uVar4;
          param_1[1] = pOVar2 + 0x10;
          if ((undefined8 *)*in_RDX == puVar5) {
            return param_1;
          }
        }
        std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
        _M_realloc_insert<Clipper2Lib::Point<long>const&>
                  ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                   param_1,pOVar2,puVar5);
        puVar5 = (undefined8 *)puVar5[4];
      } while ((undefined8 *)*in_RDX != puVar5);
    }
  }
  return param_1;
}



/* Clipper2Lib::RectClip64::CheckEdges() */

void __thiscall Clipper2Lib::RectClip64::CheckEdges(RectClip64 *this)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *pvVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  long *local_80;
  long *local_48;
  long local_40;
  
  lVar18 = *(long *)(this + 0xb8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar18 == *(long *)(this + 0xc0)) {
LAB_00100d66:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar24 = 0;
LAB_00100b70:
  plVar11 = (long *)(lVar18 + uVar24 * 8);
  local_80 = (long *)*plVar11;
  plVar26 = local_80;
  if (local_80 != (long *)0x0) {
    do {
      while( true ) {
        plVar12 = (long *)plVar26[4];
        plVar1 = (long *)plVar26[5];
        uVar23 = *plVar26 - *plVar1;
        uVar10 = plVar12[1] - plVar26[1];
        uVar13 = *plVar12 - *plVar26;
        uVar21 = plVar26[1] - plVar1[1];
        uVar20 = -uVar23;
        if (0 < (long)uVar23) {
          uVar20 = uVar23;
        }
        uVar17 = -uVar10;
        if (0 < (long)uVar10) {
          uVar17 = uVar10;
        }
        uVar22 = -uVar21;
        if (0 < (long)uVar21) {
          uVar22 = uVar21;
        }
        uVar19 = -uVar13;
        if (0 < (long)uVar13) {
          uVar19 = uVar13;
        }
        uVar14 = (uVar20 & 0xffffffff) * (uVar17 & 0xffffffff);
        uVar5 = (uVar17 & 0xffffffff) * (uVar20 >> 0x20) + (uVar14 >> 0x20);
        uVar8 = (uVar20 & 0xffffffff) * (uVar17 >> 0x20) + (uVar5 & 0xffffffff);
        uVar28 = (uVar22 & 0xffffffff) * (uVar19 & 0xffffffff);
        uVar9 = (uVar19 & 0xffffffff) * (uVar22 >> 0x20) + (uVar28 >> 0x20);
        uVar15 = (uVar22 & 0xffffffff) * (uVar19 >> 0x20) + (uVar9 & 0xffffffff);
        if (((uVar9 >> 0x20) + (uVar19 >> 0x20) * (uVar22 >> 0x20) + (uVar15 >> 0x20) ==
             (uVar5 >> 0x20) + (uVar17 >> 0x20) * (uVar20 >> 0x20) + (uVar8 >> 0x20) &&
             (uVar28 & 0xffffffff | uVar15 << 0x20) == (uVar8 << 0x20 | uVar14 & 0xffffffff)) &&
           (((uint)(0 < (long)uVar23) + (int)((long)uVar23 >> 0x3f)) *
            ((uint)(0 < (long)uVar10) + (int)((long)uVar10 >> 0x3f)) ==
            ((uint)(0 < (long)uVar21) + (int)((long)uVar21 >> 0x3f)) *
            ((uint)(0 < (long)uVar13) + (int)((long)uVar13 >> 0x3f)))) break;
LAB_00100ba0:
        plVar26 = plVar12;
        if (local_80 == plVar12) goto LAB_00100dc0;
      }
      if (local_80 != plVar26) {
        if (plVar12 != plVar26) {
          plVar1[4] = (long)plVar12;
          plVar12[5] = (long)plVar1;
          plVar12 = (long *)plVar26[5];
          if (plVar12 != (long *)0x0) goto LAB_00100ba0;
        }
LAB_00100d30:
        *plVar11 = 0;
        goto LAB_00100d4b;
      }
      if (plVar12 == local_80) goto LAB_00100d30;
      plVar1[4] = (long)plVar12;
      plVar12[5] = (long)plVar1;
      plVar12 = (long *)local_80[5];
      if (plVar12 == (long *)0x0) goto LAB_00100d30;
      local_80 = (long *)plVar12[5];
      plVar26 = plVar12;
    } while (local_80 != plVar12);
LAB_00100dc0:
    uVar20 = 1;
    *plVar11 = (long)plVar12;
    lVar16 = *(long *)this;
    lVar18 = *(long *)plVar12[5];
    lVar2 = ((long *)plVar12[5])[1];
    if (lVar18 != lVar16) {
      uVar20 = (ulong)(*(long *)(this + 0x10) == lVar18) << 2;
    }
    lVar18 = *(long *)(this + 8);
    plVar11 = plVar12;
    if (lVar2 == lVar18) {
      uVar20 = (ulong)((int)uVar20 + 2);
    }
    else if (lVar2 == *(long *)(this + 0x18)) {
      uVar20 = (ulong)((int)uVar20 + 8);
    }
    do {
      lVar2 = plVar11[1];
      if (*plVar11 == lVar16) {
        uVar25 = 3;
        if (lVar2 != lVar18) {
          uVar25 = (uint)(*(long *)(this + 0x18) == lVar2) * 8 + 1;
        }
        goto LAB_00100e76;
      }
      if (*plVar11 == *(long *)(this + 0x10)) {
        uVar25 = 6;
        if (lVar2 == lVar18) goto LAB_00100e76;
        lVar18 = plVar11[3];
        uVar25 = (uint)(lVar2 == *(long *)(this + 0x18)) * 8 + 4;
joined_r0x00100ebb:
        if (lVar18 == 0) {
          pvVar27 = (vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
                    (this + 0xd0);
          iVar7 = 0;
LAB_00100ec9:
          bVar6 = (byte)iVar7;
          do {
            if ((1 << (bVar6 & 0x1f) & (uint)uVar20 & uVar25) == 0) goto LAB_00100f20;
            lVar18 = *(long *)plVar11[5];
            lVar2 = ((long *)plVar11[5])[1];
            local_48 = plVar11;
            if (iVar7 == 1) {
              bVar4 = lVar18 < *plVar11;
LAB_00100fb6:
              if (bVar4) {
                if (plVar11[3] != 0) goto LAB_00100fc6;
LAB_00100ff0:
                plVar11[3] = (long)pvVar27;
                puVar3 = *(undefined8 **)(pvVar27 + 8);
                if (puVar3 == *(undefined8 **)(pvVar27 + 0x10)) {
                  std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
                  _M_realloc_insert<Clipper2Lib::OutPt2*const&>(pvVar27,puVar3,&local_48);
                }
                else {
                  *puVar3 = plVar11;
                  *(undefined8 **)(pvVar27 + 8) = puVar3 + 1;
                }
              }
              else {
                if (plVar11[3] != 0) goto LAB_00100fc6;
LAB_00100f67:
                puVar3 = *(undefined8 **)(pvVar27 + 0x20);
                plVar11[3] = (long)(pvVar27 + 0x18);
                if (puVar3 == *(undefined8 **)(pvVar27 + 0x28)) {
                  std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
                  _M_realloc_insert<Clipper2Lib::OutPt2*const&>(pvVar27 + 0x18,puVar3,&local_48);
                }
                else {
                  *puVar3 = plVar11;
                  *(undefined8 **)(pvVar27 + 0x20) = puVar3 + 1;
                }
              }
            }
            else {
              if (iVar7 == 2) {
                bVar4 = lVar2 < plVar11[1];
                goto LAB_00100fb6;
              }
              if (iVar7 == 0) {
                bVar4 = plVar11[1] < lVar2;
              }
              else {
                bVar4 = *plVar11 < lVar18;
              }
              if (!bVar4) {
                if (plVar11[3] != 0) goto LAB_00100f20;
                goto LAB_00100f67;
              }
              if (plVar11[3] == 0) goto LAB_00100ff0;
            }
LAB_00100f20:
            iVar7 = iVar7 + 1;
            if (iVar7 == 4) break;
            pvVar27 = pvVar27 + 0x30;
            bVar6 = (byte)iVar7;
          } while( true );
        }
        plVar11 = (long *)plVar11[4];
        uVar20 = (ulong)uVar25;
      }
      else {
        if (lVar2 == lVar18) {
          uVar25 = 2;
LAB_00100e76:
          lVar18 = plVar11[3];
          goto joined_r0x00100ebb;
        }
        if (*(long *)(this + 0x18) == lVar2) {
          uVar25 = 8;
          goto LAB_00100e76;
        }
        plVar11 = (long *)plVar11[4];
        uVar20 = 0;
      }
      if (plVar12 == plVar11) goto LAB_00100e89;
      lVar16 = *(long *)this;
      lVar18 = *(long *)(this + 8);
    } while( true );
  }
  goto LAB_00100d4b;
LAB_00100fc6:
  iVar7 = iVar7 + 1;
  pvVar27 = pvVar27 + 0x30;
  goto LAB_00100ec9;
LAB_00100e89:
  lVar18 = *(long *)(this + 0xb8);
LAB_00100d4b:
  uVar24 = uVar24 + 1;
  if ((ulong)(*(long *)(this + 0xc0) - lVar18 >> 3) <= uVar24) goto LAB_00100d66;
  goto LAB_00100b70;
}



/* Clipper2Lib::RectClip64::TidyEdges(unsigned long, std::vector<Clipper2Lib::OutPt2*,
   std::allocator<Clipper2Lib::OutPt2*> >&, std::vector<Clipper2Lib::OutPt2*,
   std::allocator<Clipper2Lib::OutPt2*> >&) */

void __thiscall
Clipper2Lib::RectClip64::TidyEdges(RectClip64 *this,ulong param_1,vector *param_2,vector *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long in_FS_OFFSET;
  long *local_50;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) != *(long *)param_3) {
    uVar1 = param_1 - 1;
    bVar5 = uVar1 < 2;
    uVar12 = 0;
    uVar20 = 0;
    lVar11 = *(long *)param_2;
    if (*(long *)(param_2 + 8) != lVar11) {
      do {
        lVar16 = uVar20 * 8;
        plVar2 = *(long **)(lVar11 + lVar16);
        if ((plVar2 == (long *)0x0) || (plVar10 = (long *)plVar2[5], (long *)plVar2[4] == plVar10))
        {
          *(long *)(lVar11 + lVar16) = 0;
          puVar8 = *(undefined8 **)(param_2 + 8);
          uVar20 = uVar20 + 1;
          uVar12 = 0;
          goto LAB_00101130;
        }
        lVar3 = *(long *)param_3;
        uVar15 = *(long *)(param_3 + 8) - lVar3 >> 3;
        if (uVar12 < uVar15) {
          do {
            lVar18 = *(long *)(lVar3 + uVar12 * 8);
            if ((lVar18 != 0) && (*(long *)(lVar18 + 0x20) != *(long *)(lVar18 + 0x28)))
            goto LAB_00101178;
            uVar12 = uVar12 + 1;
          } while (uVar15 != uVar12);
LAB_00101124:
          puVar8 = *(undefined8 **)(param_2 + 8);
          uVar20 = uVar20 + 1;
          uVar12 = 0;
        }
        else {
LAB_00101178:
          if (uVar15 == uVar12) goto LAB_00101124;
          plVar4 = *(long **)(lVar3 + uVar12 * 8);
          lVar3 = uVar12 * 8;
          plVar21 = (long *)plVar4[5];
          plVar9 = plVar4;
          plVar13 = plVar10;
          plVar19 = plVar2;
          if (1 < uVar1) {
            plVar9 = plVar21;
            plVar13 = plVar2;
            plVar19 = plVar10;
            plVar21 = plVar4;
          }
          local_50 = plVar19;
          if ((param_1 & 0xfffffffffffffffd) == 1) {
            if ((*plVar21 <= *plVar13) || (*plVar19 <= *plVar9)) goto LAB_00101298;
          }
          else if ((plVar21[1] <= plVar13[1]) || (plVar19[1] <= plVar9[1])) {
LAB_00101298:
            puVar8 = *(undefined8 **)(param_2 + 8);
            uVar12 = uVar12 + 1;
            goto LAB_00101130;
          }
          lVar18 = *(long *)(this + 0xb8);
          if (plVar2[2] == plVar4[2]) {
            if (uVar1 < 2) {
              plVar13[4] = (long)plVar9;
              plVar9[5] = (long)plVar13;
              plVar19[5] = (long)plVar21;
              plVar21[4] = (long)plVar19;
            }
            else {
              plVar13[5] = (long)plVar9;
              plVar9[4] = (long)plVar13;
              plVar19[4] = (long)plVar21;
              plVar21[5] = (long)plVar19;
            }
            puVar8 = *(undefined8 **)(this + 0xc0);
            lVar6 = (long)puVar8 - lVar18 >> 3;
            if (puVar8 == *(undefined8 **)(this + 200)) {
              std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
              _M_realloc_insert<Clipper2Lib::OutPt2*const&>
                        ((vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
                         (this + 0xb8),puVar8,&local_50);
              lVar18 = *(long *)(this + 0xb8);
              lVar11 = *(long *)param_2;
            }
            else {
              *puVar8 = plVar19;
              *(undefined8 **)(this + 0xc0) = puVar8 + 1;
            }
            plVar2 = (long *)plVar19[4];
            plVar19[2] = lVar6;
            for (; plVar19 != plVar2; plVar2 = (long *)plVar2[4]) {
              plVar2[2] = lVar6;
            }
            if (uVar1 < 2) {
LAB_0010139f:
              plVar13 = plVar9;
              plVar21 = plVar19;
            }
          }
          else {
            lVar6 = plVar13[2];
            *(undefined8 *)(lVar18 + plVar9[2] * 8) = 0;
            plVar2 = (long *)plVar9[4];
            plVar9[2] = lVar6;
            for (; plVar9 != plVar2; plVar2 = (long *)plVar2[4]) {
              plVar2[2] = lVar6;
            }
            if (uVar1 < 2) {
              plVar13[4] = (long)plVar9;
              plVar9[5] = (long)plVar13;
              plVar19[5] = (long)plVar21;
              plVar21[4] = (long)plVar19;
              goto LAB_0010139f;
            }
            plVar13[5] = (long)plVar9;
            plVar9[4] = (long)plVar13;
            plVar19[4] = (long)plVar21;
            plVar21[5] = (long)plVar19;
          }
          *(long **)(lVar18 + plVar13[2] * 8) = plVar13;
          *(long **)(lVar18 + plVar21[2] * 8) = plVar21;
          plVar2 = (long *)plVar13[5];
          if ((param_1 & 0xfffffffffffffffd) == 1) {
            plVar10 = (long *)plVar21[5];
            bVar14 = *plVar2 < *plVar13;
            bVar17 = *plVar10 < *plVar21;
            if ((long *)plVar13[4] == plVar2) goto LAB_001013d0;
LAB_0010133a:
            if ((*plVar13 == *plVar2) && (plVar13[1] == plVar2[1])) goto LAB_001013d0;
            if (((long *)plVar21[4] == plVar10) ||
               ((*plVar21 == *plVar10 && (plVar21[1] == plVar10[1])))) {
              puVar8 = *(undefined8 **)(param_2 + 8);
              lVar18 = *(long *)param_3;
              if (bVar14 == bVar5) {
                *(undefined8 *)(lVar16 + lVar11) = plVar13;
                uVar12 = uVar12 + 1;
                *(undefined8 *)(lVar3 + lVar18) = 0;
              }
              else {
                *(undefined8 *)(lVar3 + lVar18) = plVar13;
                uVar20 = uVar20 + 1;
                *(undefined8 *)(lVar16 + lVar11) = 0;
              }
            }
            else if (bVar14 == bVar17) {
              if (bVar14 == bVar5) {
                puVar8 = (undefined8 *)plVar21[3];
                *(undefined8 *)(lVar16 + lVar11) = plVar13;
                if (puVar8 != (undefined8 *)0x0) {
                  puVar7 = (undefined8 *)*puVar8;
                  lVar16 = (long)puVar8[1] - (long)puVar7;
                  if (puVar7 != (undefined8 *)puVar8[1]) {
                    uVar15 = 0;
                    do {
                      if (plVar21 == (long *)*puVar7) {
                        *puVar7 = 0;
                        break;
                      }
                      uVar15 = uVar15 + 1;
                      puVar7 = puVar7 + 1;
                    } while (uVar15 < (ulong)(lVar16 >> 3));
                  }
                }
                puVar7 = *(undefined8 **)(param_2 + 8);
                plVar21[3] = (long)param_2;
                local_48 = plVar21;
                if (*(undefined8 **)(param_2 + 0x10) == puVar7) {
                  std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
                  _M_realloc_insert<Clipper2Lib::OutPt2*const&>
                            ((vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
                             param_2,puVar7,&local_48);
                  puVar8 = *(undefined8 **)(param_2 + 8);
                  lVar11 = *(long *)param_2;
                }
                else {
                  puVar8 = puVar7 + 1;
                  *puVar7 = plVar21;
                  *(undefined8 **)(param_2 + 8) = puVar8;
                }
                uVar12 = uVar12 + 1;
                *(undefined8 *)(*(long *)param_3 + lVar3) = 0;
              }
              else {
                lVar18 = *(long *)param_3;
                *(undefined8 *)(lVar16 + lVar11) = 0;
                uVar20 = uVar20 + 1;
                *(long **)(lVar18 + lVar3) = plVar21;
                puVar8 = (undefined8 *)plVar13[3];
                if (puVar8 != (undefined8 *)0x0) {
                  puVar7 = (undefined8 *)*puVar8;
                  lVar16 = (long)puVar8[1] - (long)puVar7;
                  if ((undefined8 *)puVar8[1] != puVar7) {
                    uVar12 = 0;
                    do {
                      if (plVar13 == (long *)*puVar7) {
                        *puVar7 = 0;
                        break;
                      }
                      uVar12 = uVar12 + 1;
                      puVar7 = puVar7 + 1;
                    } while (uVar12 < (ulong)(lVar16 >> 3));
                  }
                }
                puVar8 = *(undefined8 **)(param_3 + 8);
                plVar13[3] = (long)param_3;
                local_48 = plVar13;
                if (puVar8 == *(undefined8 **)(param_3 + 0x10)) {
                  std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
                  _M_realloc_insert<Clipper2Lib::OutPt2*const&>
                            ((vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
                             param_3,puVar8,&local_48);
                  lVar11 = *(long *)param_2;
                }
                else {
                  *puVar8 = plVar13;
                  *(undefined8 **)(param_3 + 8) = puVar8 + 1;
                }
                puVar8 = *(undefined8 **)(param_2 + 8);
                uVar12 = 0;
              }
            }
            else {
              puVar8 = *(undefined8 **)(param_2 + 8);
              lVar18 = *(long *)param_3;
              if (bVar14 == bVar5) {
                *(long **)(lVar11 + lVar16) = plVar13;
              }
              else {
                *(undefined8 *)(lVar3 + lVar18) = plVar13;
                if (bVar17 == bVar5) {
                  *(long **)(lVar11 + lVar16) = plVar21;
                  goto LAB_00101130;
                }
              }
              *(undefined8 *)(lVar3 + lVar18) = plVar21;
            }
          }
          else {
            plVar10 = (long *)plVar21[5];
            bVar14 = plVar2[1] < plVar13[1];
            bVar17 = plVar10[1] < plVar21[1];
            if ((long *)plVar13[4] != plVar2) goto LAB_0010133a;
LAB_001013d0:
            puVar8 = *(undefined8 **)(param_2 + 8);
            lVar18 = *(long *)param_3;
            if (bVar17 == bVar5) {
              *(undefined8 *)(lVar16 + lVar11) = plVar21;
              uVar12 = uVar12 + 1;
              *(undefined8 *)(lVar3 + lVar18) = 0;
            }
            else {
              *(undefined8 *)(lVar3 + lVar18) = plVar21;
              uVar20 = uVar20 + 1;
              *(undefined8 *)(lVar16 + lVar11) = 0;
            }
          }
        }
LAB_00101130:
      } while (uVar20 < (ulong)((long)puVar8 - lVar11 >> 3));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Clipper2Lib::RectClip64::Add(Clipper2Lib::Point<long>, bool) */

OutPt2 * Clipper2Lib::RectClip64::Add(long param_1,long param_2,long param_3,char param_4)

{
  long lVar1;
  undefined8 *puVar2;
  OutPt2 *pOVar3;
  OutPt2 *pOVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  OutPt2 *local_80;
  OutPt2 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8);
  lVar6 = lVar5 >> 3;
  if ((lVar6 == 0) || (param_4 != '\0')) {
    local_68 = 0;
    local_60 = (undefined1  [16])0x0;
    local_78[0] = (OutPt2)0x0;
    local_78[1] = (OutPt2)0x0;
    local_78[2] = (OutPt2)0x0;
    local_78[3] = (OutPt2)0x0;
    local_78[4] = (OutPt2)0x0;
    local_78[5] = (OutPt2)0x0;
    local_78[6] = (OutPt2)0x0;
    local_78[7] = (OutPt2)0x0;
    local_78[8] = (OutPt2)0x0;
    local_78[9] = (OutPt2)0x0;
    local_78[10] = (OutPt2)0x0;
    local_78[0xb] = (OutPt2)0x0;
    local_78[0xc] = (OutPt2)0x0;
    local_78[0xd] = (OutPt2)0x0;
    local_78[0xe] = (OutPt2)0x0;
    local_78[0xf] = (OutPt2)0x0;
    local_50 = 0;
    pOVar4 = std::deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::
             emplace_back<Clipper2Lib::OutPt2>
                       ((deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *)
                        (param_1 + 0x68),local_78);
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(long *)pOVar4 = param_2;
    *(long *)(pOVar4 + 8) = param_3;
    *(OutPt2 **)(pOVar4 + 0x20) = pOVar4;
    *(OutPt2 **)(pOVar4 + 0x28) = pOVar4;
    local_80 = pOVar4;
    if (puVar2 == *(undefined8 **)(param_1 + 200)) {
      std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
      _M_realloc_insert<Clipper2Lib::OutPt2*const&>
                ((vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
                 (param_1 + 0xb8),puVar2,&local_80);
    }
    else {
      *puVar2 = pOVar4;
      *(undefined8 **)(param_1 + 0xc0) = puVar2 + 1;
    }
  }
  else {
    pOVar4 = *(OutPt2 **)(*(long *)(param_1 + 0xc0) + -8);
    if ((*(long *)pOVar4 != param_2) || (*(long *)(pOVar4 + 8) != param_3)) {
      local_68 = 0;
      local_50 = 0;
      local_60 = (undefined1  [16])0x0;
      local_78[0] = (OutPt2)0x0;
      local_78[1] = (OutPt2)0x0;
      local_78[2] = (OutPt2)0x0;
      local_78[3] = (OutPt2)0x0;
      local_78[4] = (OutPt2)0x0;
      local_78[5] = (OutPt2)0x0;
      local_78[6] = (OutPt2)0x0;
      local_78[7] = (OutPt2)0x0;
      local_78[8] = (OutPt2)0x0;
      local_78[9] = (OutPt2)0x0;
      local_78[10] = (OutPt2)0x0;
      local_78[0xb] = (OutPt2)0x0;
      local_78[0xc] = (OutPt2)0x0;
      local_78[0xd] = (OutPt2)0x0;
      local_78[0xe] = (OutPt2)0x0;
      local_78[0xf] = (OutPt2)0x0;
      pOVar3 = std::deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::
               emplace_back<Clipper2Lib::OutPt2>
                         ((deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *)
                          (param_1 + 0x68),local_78);
      lVar1 = *(long *)(pOVar4 + 0x20);
      *(long *)(pOVar3 + 0x10) = lVar6 + -1;
      *(long *)(pOVar3 + 0x20) = lVar1;
      *(long *)pOVar3 = param_2;
      *(long *)(pOVar3 + 8) = param_3;
      *(OutPt2 **)(lVar1 + 0x28) = pOVar3;
      lVar6 = *(long *)(param_1 + 0xb8);
      *(OutPt2 **)(pOVar4 + 0x20) = pOVar3;
      *(OutPt2 **)(pOVar3 + 0x28) = pOVar4;
      *(OutPt2 **)(lVar6 + -8 + lVar5) = pOVar3;
      pOVar4 = pOVar3;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar4;
}



/* Clipper2Lib::RectClip64::AddCorner(Clipper2Lib::Location, Clipper2Lib::Location) */

void __thiscall Clipper2Lib::RectClip64::AddCorner(RectClip64 *this,int param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != (param_2 + 1) % 4) {
    puVar1 = (undefined8 *)(*(long *)(this + 0x20) + (long)param_3 * 0x10);
    Add(this,*puVar1,puVar1[1],0);
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(this + 0x20) + (long)param_2 * 0x10);
  Add(this,*puVar1,puVar1[1],0);
  return;
}



/* Clipper2Lib::RectClip64::AddCorner(Clipper2Lib::Location&, bool) */

void __thiscall Clipper2Lib::RectClip64::AddCorner(RectClip64 *this,Location *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(this + 0x20);
  if (param_2) {
    puVar3 = (undefined8 *)(lVar1 + (long)*(int *)param_1 * 0x10);
    Add(this,*puVar3,puVar3[1],0);
    *(int *)param_1 = (*(int *)param_1 + 1) % 4;
    return;
  }
  iVar2 = (*(int *)param_1 + 3) % 4;
  *(int *)param_1 = iVar2;
  puVar3 = (undefined8 *)(lVar1 + (long)iVar2 * 0x10);
  Add(this,*puVar3,puVar3[1],0);
  return;
}



/* Clipper2Lib::RectClip64::GetNextLocation(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, Clipper2Lib::Location&, unsigned long&,
   unsigned long) */

void __thiscall
Clipper2Lib::RectClip64::GetNextLocation
          (RectClip64 *this,vector *param_1,Location *param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    uVar3 = *param_3;
    if (param_4 < uVar3) {
      return;
    }
    lVar1 = *(long *)param_1;
    while (*(long *)(lVar1 + uVar3 * 0x10) <= *(long *)this) {
      uVar3 = uVar3 + 1;
      *param_3 = uVar3;
      if (param_4 < uVar3) {
        return;
      }
    }
    if (param_4 < uVar3) {
      return;
    }
    plVar2 = (long *)(lVar1 + uVar3 * 0x10);
    if (*(long *)(this + 0x10) <= *plVar2) {
LAB_001019ea:
      *(undefined4 *)param_2 = 2;
      return;
    }
LAB_00101ab0:
    if (plVar2[1] <= *(long *)(this + 8)) {
LAB_00101992:
      *(undefined4 *)param_2 = 1;
      return;
    }
    if (*(long *)(this + 0x18) <= plVar2[1]) goto LAB_00101a41;
    goto LAB_0010194b;
  case 1:
    uVar3 = *param_3;
    if (param_4 < uVar3) {
      return;
    }
    lVar1 = *(long *)param_1;
    while (*(long *)(lVar1 + 8 + uVar3 * 0x10) <= *(long *)(this + 8)) {
      uVar3 = uVar3 + 1;
      *param_3 = uVar3;
      if (param_4 < uVar3) {
        return;
      }
    }
    if (param_4 < uVar3) {
      return;
    }
    plVar2 = (long *)(lVar1 + uVar3 * 0x10);
    if (*(long *)(this + 0x18) <= plVar2[1]) {
LAB_00101a41:
      *(undefined4 *)param_2 = 3;
      return;
    }
LAB_00101935:
    if (*plVar2 <= *(long *)this) {
LAB_00101a9e:
      *(undefined4 *)param_2 = 0;
      return;
    }
    if (*(long *)(this + 0x10) <= *plVar2) goto LAB_001019ea;
LAB_0010194b:
    *(undefined4 *)param_2 = 4;
    break;
  case 2:
    uVar3 = *param_3;
    if (uVar3 <= param_4) {
      lVar1 = *(long *)param_1;
      do {
        if (*(long *)(lVar1 + uVar3 * 0x10) < *(long *)(this + 0x10)) {
          if (param_4 < uVar3) {
            return;
          }
          plVar2 = (long *)(lVar1 + uVar3 * 0x10);
          if (*(long *)this < *plVar2) goto LAB_00101ab0;
          goto LAB_00101a9e;
        }
        uVar3 = uVar3 + 1;
        *param_3 = uVar3;
      } while (uVar3 <= param_4);
    }
    break;
  case 3:
    uVar3 = *param_3;
    if (uVar3 <= param_4) {
      lVar1 = *(long *)param_1;
      do {
        if (*(long *)(lVar1 + 8 + uVar3 * 0x10) < *(long *)(this + 0x18)) {
          if (param_4 < uVar3) {
            return;
          }
          plVar2 = (long *)(lVar1 + uVar3 * 0x10);
          if (plVar2[1] <= *(long *)(this + 8)) goto LAB_00101992;
          goto LAB_00101935;
        }
        uVar3 = uVar3 + 1;
        *param_3 = uVar3;
      } while (uVar3 <= param_4);
    }
    break;
  case 4:
    uVar3 = *param_3;
    while (uVar3 <= param_4) {
      plVar2 = (long *)(uVar3 * 0x10 + *(long *)param_1);
      lVar1 = *plVar2;
      if (lVar1 < *(long *)this) goto LAB_00101a9e;
      if (*(long *)(this + 0x10) < lVar1) goto LAB_001019ea;
      lVar1 = plVar2[1];
      if (*(long *)(this + 0x18) < lVar1) goto LAB_00101a41;
      if (lVar1 < *(long *)(this + 8)) goto LAB_00101992;
      Add();
      uVar3 = *param_3 + 1;
      *param_3 = uVar3;
    }
    break;
  default:
    return;
  }
  return;
}



/* Clipper2Lib::RectClipLines64::ExecuteInternal(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */

void __thiscall Clipper2Lib::RectClipLines64::ExecuteInternal(RectClipLines64 *this,vector *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  vector *pvVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  char cVar18;
  void *pvVar19;
  void *pvVar20;
  Point *pPVar21;
  ulong uVar22;
  long lVar23;
  ulong unaff_RBP;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  int local_f8;
  int local_c8;
  int local_c4;
  ulong local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x18) <= *(long *)(this + 8)) || (*(long *)(this + 0x10) <= *(long *)this))
     || ((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) < 0x11)) goto LAB_00101b4c;
  if (*(long *)(this + 0xb8) != *(long *)(this + 0xc0)) {
    *(long *)(this + 0xc0) = *(long *)(this + 0xb8);
  }
  uStack_90 = 8;
  pvVar19 = operator_new(0x40);
  local_98 = pvVar19;
  pvVar20 = operator_new(0x1e0);
  puVar26 = (undefined8 *)((long)pvVar19 + 0x18);
  uVar2 = *(undefined8 *)(this + 0x68);
  uVar11 = *(undefined8 *)(this + 0x88);
  lVar5 = *(long *)(this + 0x90);
  *puVar26 = pvVar20;
  uVar3 = *(undefined8 *)(this + 0x70);
  uVar12 = *(undefined8 *)(this + 0x78);
  uVar13 = *(undefined8 *)(this + 0x80);
  local_68 = *(undefined8 *)(this + 0x98);
  uStack_60 = *(undefined8 *)(this + 0xa0);
  local_58 = *(undefined8 *)(this + 0xa8);
  lStack_50 = *(long *)(this + 0xb0);
  *(void **)(this + 0x68) = local_98;
  *(undefined8 *)(this + 0x70) = uStack_90;
  *(void **)(this + 0x78) = pvVar20;
  *(void **)(this + 0x80) = pvVar20;
  puVar27 = (undefined8 *)(lStack_50 + 8);
  *(long *)(this + 0x88) = (long)pvVar20 + 0x1e0;
  *(undefined8 **)(this + 0x90) = puVar26;
  *(void **)(this + 0x98) = pvVar20;
  *(void **)(this + 0xa0) = pvVar20;
  *(long *)(this + 0xa8) = (long)pvVar20 + 0x1e0;
  *(undefined8 **)(this + 0xb0) = puVar26;
  local_98 = (void *)uVar2;
  uStack_90 = uVar3;
  local_78 = uVar11;
  lStack_70 = lVar5;
  local_88 = uVar12;
  uStack_80 = uVar13;
  for (puVar26 = (undefined8 *)(lVar5 + 8); puVar26 < puVar27; puVar26 = puVar26 + 1) {
    operator_delete((void *)*puVar26,0x1e0);
  }
  local_68 = uVar12;
  uStack_60 = uVar13;
  local_58 = uVar11;
  lStack_50 = lVar5;
  std::_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::~_Deque_base
            ((_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *)&local_98);
  if (*(long *)(this + 400) != *(long *)(this + 0x198)) {
    *(long *)(this + 0x198) = *(long *)(this + 400);
  }
  plVar4 = *(long **)(param_1 + 8);
  plVar24 = *(long **)param_1;
  local_c0 = 1;
  lVar5 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  lVar7 = *plVar24;
  lVar8 = plVar24[1];
  uVar1 = ((long)plVar4 - (long)plVar24 >> 4) - 1;
  if (lVar7 == lVar5) {
    if (lVar6 <= lVar8) {
      lVar25 = *(long *)(this + 0x18);
      if (lVar25 < lVar8) {
        lVar23 = *(long *)(this + 0x10);
        if (lVar7 == lVar23) goto LAB_00101f3e;
        if (lVar8 != lVar6) goto LAB_00101eb0;
LAB_00102110:
        if (lVar23 < lVar7) goto LAB_00101f18;
        local_c8 = 1;
      }
      else {
        local_c8 = 0;
      }
LAB_00101f63:
      uVar17 = local_c0;
      if (uVar1 != 0) {
        bVar14 = false;
        uVar22 = 1;
        plVar10 = plVar24;
        do {
          lVar7 = plVar10[2];
          lVar8 = plVar10[3];
          if (lVar7 == lVar5) {
            if (lVar8 < lVar6) {
              lVar25 = *(long *)(this + 0x10);
              if (lVar25 == lVar5) {
                lVar23 = *(long *)(this + 0x18);
                if (lVar8 == lVar23) goto LAB_00101ff0;
              }
              else {
LAB_001020a0:
                lVar23 = *(long *)(this + 0x18);
                lVar15 = lVar23;
joined_r0x001020c9:
                if (lVar8 == lVar15) goto LAB_00101fa6;
              }
              if (bVar14) {
                local_c0 = unaff_RBP;
              }
              if ((((lVar7 < lVar5) || (lVar25 < lVar7)) || (lVar8 < lVar6)) || (lVar23 < lVar8)) {
LAB_00101fba:
                uVar17 = local_c0;
                if (uVar22 <= uVar1) {
                  local_c0 = 1;
                  goto LAB_00101d49;
                }
              }
              else {
                uVar17 = local_c0;
                if (uVar22 <= uVar1) {
                  local_c8 = 4;
                  local_c0 = 1;
                  RectClip64::Add(this,*plVar24,plVar24[1],0);
                  goto LAB_00101d49;
                }
              }
              break;
            }
            lVar23 = *(long *)(this + 0x18);
            if (lVar23 < lVar8) {
              lVar25 = *(long *)(this + 0x10);
              lVar15 = lVar6;
              if ((lVar5 == lVar25) || (lVar15 = lVar23, lVar8 != lVar6)) goto joined_r0x001020c9;
              goto LAB_00101fab;
            }
          }
          else {
            lVar25 = *(long *)(this + 0x10);
            if (lVar7 != lVar25) {
              if (lVar8 != lVar6) goto LAB_001020a0;
LAB_00101fa6:
              if (lVar5 <= lVar7) {
LAB_00101fab:
                if (lVar7 <= lVar25) goto LAB_00101ff0;
              }
              if (bVar14) {
                local_c0 = unaff_RBP;
              }
              goto LAB_00101fba;
            }
            lVar23 = *(long *)(this + 0x18);
            lVar15 = lVar23;
            if ((lVar8 < lVar6) || (lVar15 = lVar6, lVar23 < lVar8)) goto joined_r0x001020c9;
          }
LAB_00101ff0:
          uVar22 = uVar22 + 1;
          bVar14 = true;
          unaff_RBP = uVar22;
          plVar10 = plVar10 + 2;
          uVar17 = uVar22;
        } while (uVar22 <= uVar1);
      }
      for (; local_c0 = uVar17, plVar4 != plVar24; plVar24 = plVar24 + 2) {
        RectClip64::Add(this,*plVar24,plVar24[1],0);
        uVar17 = local_c0;
      }
      goto LAB_00101b4c;
    }
    lVar23 = *(long *)(this + 0x10);
LAB_00101f0c:
    lVar25 = *(long *)(this + 0x18);
LAB_00101eb0:
    if (lVar8 != lVar25) goto LAB_00101eb9;
    if (lVar5 <= lVar7) {
      if (lVar23 < lVar7) goto LAB_00101f18;
      local_c8 = 3;
      goto LAB_00101f63;
    }
LAB_00102123:
    local_c8 = 0;
  }
  else {
    lVar23 = *(long *)(this + 0x10);
    if (lVar7 == lVar23) {
      lVar25 = *(long *)(this + 0x18);
      if (lVar8 < lVar6) goto LAB_00101eb0;
      if (lVar8 <= lVar25) {
        local_c8 = 2;
        goto LAB_00101f63;
      }
LAB_00101f3e:
      if (lVar8 == lVar6) goto LAB_00101d31;
LAB_00101eb9:
      if (lVar7 < lVar5) goto LAB_00102123;
      if (lVar23 < lVar7) {
LAB_00101f18:
        local_c8 = 2;
      }
      else if (lVar8 < lVar6) {
        local_c8 = 1;
      }
      else if (lVar25 < lVar8) {
        local_c8 = 3;
      }
      else {
        local_c8 = 4;
        RectClip64::Add(this,*plVar24,plVar24[1],0);
      }
    }
    else {
      if (lVar8 != lVar6) goto LAB_00101f0c;
LAB_00101d31:
      local_c8 = 0;
      if (lVar5 <= lVar7) goto LAB_00102110;
    }
  }
  if (uVar1 != 0) {
LAB_00101d49:
    local_f8 = local_c8;
    while (RectClip64::GetNextLocation
                     ((RectClip64 *)this,param_1,(Location *)&local_c8,&local_c0,uVar1),
          uVar17 = local_c0, iVar16 = local_c8, local_c0 <= uVar1) {
      pvVar9 = *(vector **)(this + 0x20);
      puVar26 = (undefined8 *)(local_c0 * 0x10 + -0x10 + *(long *)param_1);
      local_98 = (void *)*puVar26;
      uStack_90 = puVar26[1];
      local_c4 = local_c8;
      pPVar21 = (Point *)(local_c0 * 0x10 + *(long *)param_1);
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      cVar18 = GetIntersection(pvVar9,pPVar21,(Point *)&local_98,(Location *)&local_c4,
                               (Point *)local_b8);
      if (cVar18 == '\0') {
        local_c0 = uVar17 + 1;
        if (uVar1 < local_c0) break;
      }
      else if (iVar16 == 4) {
        RectClip64::Add(this,local_b8._0_8_,local_b8._8_8_,1);
      }
      else {
        if (local_f8 != 4) {
          local_c4 = local_f8;
          GetIntersection(pvVar9,(Point *)&local_98,pPVar21,(Location *)&local_c4,(Point *)local_a8)
          ;
          RectClip64::Add(this,local_a8._0_8_,local_a8._8_8_,1);
        }
        RectClip64::Add(this,local_b8._0_8_,local_b8._8_8_,0);
      }
      local_f8 = iVar16;
    }
  }
LAB_00101b4c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::RectClip64::ExecuteInternal(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */

void __thiscall Clipper2Lib::RectClip64::ExecuteInternal(RectClip64 *this,vector *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  vector *pvVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  Point *pPVar27;
  undefined8 *puVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  int *piVar35;
  long *plVar36;
  long in_FS_OFFSET;
  bool bVar37;
  double dVar38;
  int local_ac;
  int local_8c;
  int local_88;
  int local_84;
  ulong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  long lStack_50;
  long local_40;
  
  puVar20 = *(undefined8 **)(param_1 + 8);
  puVar28 = *(undefined8 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar28 == puVar20) goto LAB_00102530;
  local_8c = 4;
  lVar19 = *(long *)this;
  local_84 = 4;
  lVar29 = ((long)puVar20 - (long)puVar28) + -0x10;
  lVar25 = *(long *)(this + 8);
  plVar18 = (long *)((long)puVar28 + lVar29);
  lVar3 = *plVar18;
  uVar24 = ((long)puVar20 - (long)puVar28 >> 4) - 1;
  lVar4 = plVar18[1];
  puVar2 = puVar20;
  uVar13 = uVar24;
  if (lVar3 == lVar19) {
    if (lVar25 <= lVar4) {
      lVar32 = *(long *)(this + 0x18);
      if (lVar32 < lVar4) {
        lVar34 = *(long *)(this + 0x10);
        if (lVar3 != lVar34) {
          if (lVar4 != lVar25) goto LAB_001025ae;
          goto LAB_00102589;
        }
        if (lVar4 != lVar25) goto LAB_001025b3;
LAB_001030a4:
        local_88 = 1;
      }
      else {
        local_88 = 0;
      }
joined_r0x0010260b:
      while (uVar13 != 0) {
        lVar3 = puVar2[-4];
        lVar4 = puVar2[-3];
        if (lVar3 == lVar19) {
          if (lVar4 < lVar25) {
            lVar32 = *(long *)(this + 0x10);
            if (lVar19 != lVar32) goto LAB_00102c20;
            lVar34 = *(long *)(this + 0x18);
            if (lVar34 == lVar4) goto LAB_00102648;
LAB_00102695:
            if ((((lVar3 < lVar19) || (lVar32 < lVar3)) || (lVar4 < lVar25)) || (lVar34 < lVar4))
            goto LAB_00102228;
            goto LAB_001026b9;
          }
          lVar34 = *(long *)(this + 0x18);
          if (lVar34 < lVar4) {
            lVar32 = *(long *)(this + 0x10);
            lVar14 = lVar25;
            if ((lVar19 == lVar32) || (lVar14 = lVar34, lVar4 != lVar25)) goto joined_r0x00102c49;
            goto LAB_0010263f;
          }
        }
        else {
          lVar32 = *(long *)(this + 0x10);
          if (lVar3 == lVar32) {
            lVar34 = *(long *)(this + 0x18);
            lVar14 = lVar34;
            if ((lVar25 <= lVar4) && (lVar14 = lVar25, lVar4 <= lVar34)) goto LAB_00102648;
joined_r0x00102c49:
            if (lVar4 != lVar14) goto LAB_00102695;
          }
          else if (lVar4 != lVar25) {
LAB_00102c20:
            lVar34 = *(long *)(this + 0x18);
            lVar14 = lVar34;
            goto joined_r0x00102c49;
          }
          if (lVar3 < lVar19) goto LAB_00102228;
LAB_0010263f:
          if (lVar32 < lVar3) goto LAB_00102228;
        }
LAB_00102648:
        puVar2 = puVar2 + -2;
        uVar13 = uVar13 - 1;
      }
      do {
        uVar10 = *puVar28;
        puVar2 = puVar28 + 1;
        puVar28 = puVar28 + 2;
        Add(this,uVar10,*puVar2,0);
      } while (puVar20 != puVar28);
      goto LAB_00102530;
    }
    lVar32 = *(long *)(this + 0x18);
    lVar34 = *(long *)(this + 0x10);
    if (lVar4 == lVar32) goto LAB_001025ef;
LAB_001025b3:
    if (lVar3 < lVar19) goto LAB_0010221a;
    if (lVar34 < lVar3) goto LAB_00102592;
    if (lVar4 < lVar25) {
      local_88 = 1;
    }
    else if (lVar32 < lVar4) {
      local_88 = 3;
    }
    else {
LAB_001026b9:
      local_88 = 4;
    }
  }
  else {
    lVar34 = *(long *)(this + 0x10);
    if (lVar3 == lVar34) {
      if (lVar4 < lVar25) goto LAB_001025aa;
      local_88 = 2;
      lVar32 = *(long *)(this + 0x18);
      if (lVar4 <= lVar32) goto joined_r0x0010260b;
      if (lVar4 != lVar25) goto LAB_001025b3;
LAB_00102211:
      if (lVar3 < lVar19) {
LAB_0010221a:
        local_88 = 0;
        goto LAB_00102228;
      }
LAB_00102589:
      if (lVar3 <= lVar34) goto LAB_001030a4;
    }
    else {
      if (lVar4 == lVar25) goto LAB_00102211;
LAB_001025aa:
      lVar32 = *(long *)(this + 0x18);
LAB_001025ae:
      if (lVar4 != lVar32) goto LAB_001025b3;
LAB_001025ef:
      if (lVar3 < lVar19) goto LAB_0010221a;
      if (lVar3 <= lVar34) {
        local_88 = 3;
        goto joined_r0x0010260b;
      }
    }
LAB_00102592:
    local_88 = 2;
  }
LAB_00102228:
  iVar17 = local_88;
  local_80 = 0;
  local_ac = 4;
LAB_0010237d:
  do {
    iVar22 = local_84;
    iVar26 = local_88;
    local_8c = local_88;
    GetNextLocation(this,param_1,(Location *)&local_88,&local_80,uVar24);
    uVar13 = local_80;
    iVar16 = local_88;
    if (uVar24 < local_80) break;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    lVar19 = lVar29;
    if (local_80 != 0) {
      lVar19 = (local_80 - 1) * 0x10;
    }
    plVar18 = (long *)(lVar19 + *(long *)param_1);
    local_58 = *plVar18;
    lStack_50 = plVar18[1];
    pvVar5 = *(vector **)(this + 0x20);
    lVar19 = local_80 * 0x10;
    pPVar27 = (Point *)(*(long *)param_1 + lVar19);
    local_84 = local_88;
    cVar15 = GetIntersection(pvVar5,pPVar27,(Point *)&local_58,(Location *)&local_84,
                             (Point *)local_78);
    iVar23 = local_84;
    if (cVar15 != '\0') {
      if (iVar16 == 4) {
        if (local_ac == 4) {
          piVar6 = *(int **)(this + 0x198);
          if (piVar6 == *(int **)(this + 0x1a0)) {
            std::vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>>::
            _M_realloc_insert<Clipper2Lib::Location_const&>
                      ((vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>> *)
                       (this + 400),piVar6,&local_8c);
          }
          else {
            *piVar6 = iVar26;
            *(int **)(this + 0x198) = piVar6 + 1;
          }
LAB_00102758:
          local_ac = iVar23;
        }
        else if (iVar26 != local_84) {
          iVar22 = iVar26 - local_84;
          iVar16 = -iVar22;
          if (0 < iVar22) {
            iVar16 = iVar22;
          }
          if (iVar16 == 2) {
            bVar37 = (double)(*(long *)(this + 0x38) - local_58) *
                     (double)(*(long *)(pPVar27 + 8) - *(long *)(this + 0x40)) -
                     (double)(*(long *)(this + 0x40) - lStack_50) *
                     (double)(*(long *)pPVar27 - *(long *)(this + 0x38)) < 0.0;
          }
          else {
            bVar37 = (iVar26 + 1) % 4 == local_84;
          }
          do {
            AddCorner(this,(Location *)&local_8c,bVar37);
          } while (local_8c != iVar23);
        }
      }
      else if (iVar26 == 4) {
        local_88 = local_84;
        if (local_ac == 4) goto LAB_00102758;
      }
      else {
        local_88 = iVar26;
        GetIntersection(pvVar5,(Point *)&local_58,pPVar27,(Location *)&local_88,(Point *)local_68);
        if ((iVar22 != 4) && (local_88 != iVar22)) {
          if (local_88 == (iVar22 + 1) % 4) {
            Add(this,*(undefined8 *)(pvVar5 + (long)iVar22 * 0x10),
                *(undefined8 *)(pvVar5 + (long)iVar22 * 0x10 + 8),0);
          }
          else {
            Add(this,*(undefined8 *)(pvVar5 + (long)local_88 * 0x10),
                *(undefined8 *)(pvVar5 + (long)local_88 * 0x10 + 8),0);
          }
        }
        if (local_ac == 4) {
          local_ac = local_88;
          piVar6 = *(int **)(this + 0x198);
          if (piVar6 == *(int **)(this + 0x1a0)) {
            std::vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>>::
            _M_realloc_insert<Clipper2Lib::Location_const&>
                      ((vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>> *)
                       (this + 400),piVar6,&local_8c);
          }
          else {
            *piVar6 = iVar26;
            *(int **)(this + 0x198) = piVar6 + 1;
          }
        }
        local_88 = iVar23;
        Add(this,local_68._0_8_,local_68._8_8_,0);
        if (local_78._0_8_ == local_68._0_8_) {
          if (local_78._8_8_ == local_68._8_8_) {
            lVar25 = *(long *)this;
            lVar3 = *(long *)(this + 8);
            plVar18 = (long *)(lVar19 + *(long *)param_1);
            lVar19 = *plVar18;
            lVar4 = plVar18[1];
            if (lVar19 == lVar25) {
              if (lVar4 < lVar3) {
                lVar32 = *(long *)(this + 0x10);
                goto LAB_0010286a;
              }
              lVar34 = *(long *)(this + 0x18);
              if (lVar34 < lVar4) {
                lVar32 = *(long *)(this + 0x10);
                if (lVar19 != lVar32) goto LAB_001030d2;
                if (lVar4 != lVar3) goto LAB_00102877;
LAB_00103182:
                iVar26 = 1;
              }
              else {
LAB_0010318c:
                iVar26 = 0;
              }
LAB_00102827:
              lVar19 = *(long *)(this + 0x20);
              lVar25 = (long)iVar26 << 4;
              local_88 = iVar26;
              if ((iVar23 + 1) % 4 == iVar26) {
                puVar20 = (undefined8 *)((long)iVar23 * 0x10 + lVar19);
                Add(this,*puVar20,puVar20[1],0);
                local_84 = iVar26;
                goto LAB_0010237d;
              }
            }
            else {
              lVar32 = *(long *)(this + 0x10);
              if (lVar19 == lVar32) {
                if (lVar4 < lVar3) goto LAB_0010286a;
                lVar34 = *(long *)(this + 0x18);
                if (lVar34 < lVar4) {
LAB_001030d2:
                  if (lVar4 == lVar3) goto LAB_00102814;
                  goto LAB_00102877;
                }
LAB_0010316f:
                iVar26 = 2;
                goto LAB_00102827;
              }
              if (lVar4 == lVar3) {
LAB_00102814:
                iVar26 = 0;
                if (lVar25 <= lVar19) {
                  iVar26 = (lVar32 < lVar19) + 1;
                }
                goto LAB_00102827;
              }
LAB_0010286a:
              lVar34 = *(long *)(this + 0x18);
              if (lVar4 == lVar34) {
                iVar26 = 0;
                if (lVar25 <= lVar19) {
                  iVar26 = (lVar19 <= lVar32) + 2;
                }
                goto LAB_00102827;
              }
LAB_00102877:
              if (lVar19 < lVar25) goto LAB_0010318c;
              if (lVar32 < lVar19) goto LAB_0010316f;
              if (lVar4 < lVar3) goto LAB_00103182;
              if (lVar34 < lVar4) {
                iVar26 = 3;
                goto LAB_00102827;
              }
              lVar19 = *(long *)(this + 0x20);
              lVar25 = 0x40;
              local_88 = 4;
            }
            iVar26 = local_88;
            Add(this,*(undefined8 *)(lVar19 + lVar25),*(undefined8 *)(lVar19 + 8 + lVar25),0);
            local_84 = iVar26;
            goto LAB_0010237d;
          }
        }
      }
      Add(this,local_78._0_8_,local_78._8_8_,0);
      goto LAB_0010237d;
    }
    if (iVar22 == 4) {
      iVar23 = iVar26 - iVar16;
      iVar22 = -iVar23;
      if (0 < iVar23) {
        iVar22 = iVar23;
      }
      if (iVar22 == 2) {
        bVar37 = (double)(*(long *)(this + 0x38) - local_58) *
                 (double)(*(long *)(pPVar27 + 8) - *(long *)(this + 0x40)) -
                 (double)(*(long *)(this + 0x40) - lStack_50) *
                 (double)(*(long *)pPVar27 - *(long *)(this + 0x38)) < 0.0;
      }
      else {
        bVar37 = (iVar26 + 1) % 4 == iVar16;
      }
      do {
        piVar6 = *(int **)(this + 0x198);
        if (piVar6 == *(int **)(this + 0x1a0)) {
          std::vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>>::
          _M_realloc_insert<Clipper2Lib::Location_const&>
                    ((vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>> *)
                     (this + 400),piVar6,&local_8c);
        }
        else {
          *piVar6 = iVar26;
          *(int **)(this + 0x198) = piVar6 + 1;
        }
        local_8c = (int)(iVar26 + (-(uint)!bVar37 & 2) + 1) % 4;
        iVar26 = local_8c;
      } while (iVar16 != local_8c);
      local_84 = 4;
    }
    else if ((iVar26 != 4) && (iVar16 != iVar26)) {
      iVar23 = iVar26 - iVar16;
      iVar22 = -iVar23;
      if (0 < iVar23) {
        iVar22 = iVar23;
      }
      if (iVar22 == 2) {
        bVar37 = (double)(*(long *)(this + 0x38) - local_58) *
                 (double)(*(long *)(pPVar27 + 8) - *(long *)(this + 0x40)) -
                 (double)(*(long *)(this + 0x40) - lStack_50) *
                 (double)(*(long *)pPVar27 - *(long *)(this + 0x38)) < 0.0;
      }
      else {
        bVar37 = (iVar26 + 1) % 4 == iVar16;
      }
      do {
        AddCorner(this,(Location *)&local_8c,bVar37);
      } while (iVar16 != local_8c);
    }
    local_80 = uVar13 + 1;
  } while (local_80 <= uVar24);
  if (local_ac == 4) {
    if ((((iVar17 != 4) && (*(long *)(this + 0x48) <= *(long *)this)) &&
        (*(long *)(this + 0x10) <= *(long *)(this + 0x58))) &&
       ((*(long *)(this + 0x50) <= *(long *)(this + 8) &&
        (*(long *)(this + 0x18) <= *(long *)(this + 0x60))))) {
      plVar18 = *(long **)(this + 0x20);
      plVar7 = *(long **)(this + 0x28);
      if (plVar18 != plVar7) {
        plVar8 = *(long **)(param_1 + 8);
        plVar9 = *(long **)param_1;
        plVar1 = plVar8 + -2;
        iVar17 = 0;
        plVar36 = plVar18;
        do {
          if (0x20 < (ulong)((long)plVar8 - (long)plVar9)) {
            while (plVar9 != plVar8) {
              lVar19 = plVar36[1];
              plVar31 = plVar9;
              while (plVar31[1] == lVar19) {
                plVar31 = plVar31 + 2;
                if (plVar8 == plVar31) goto LAB_00103077;
              }
              if (plVar8 == plVar31) break;
              plVar21 = plVar31 + 2;
              bVar37 = plVar31[1] < lVar19;
              bVar12 = false;
              plVar30 = plVar8;
              bVar11 = bVar37;
LAB_00102ab8:
              do {
                if (plVar21 == plVar30) goto LAB_00102af0;
                if (!bVar11) goto LAB_00102b2b;
LAB_00102ad6:
                if (plVar21[1] < lVar19) goto LAB_00102ac8;
                bVar11 = true;
                if (plVar30 == plVar21) goto LAB_00102af0;
LAB_00102b38:
                lVar3 = plVar21[1];
                lVar25 = *plVar36;
                plVar33 = plVar21 + -2;
                if (plVar9 == plVar21) {
                  plVar33 = plVar1;
                }
                lVar4 = *plVar21;
                if (lVar19 != lVar3) {
                  lVar29 = *plVar33;
                  if (lVar25 < lVar4) {
                    if (lVar29 <= lVar25) {
LAB_00102b73:
                      dVar38 = (double)(lVar4 - lVar29) * (double)(lVar19 - lVar3) -
                               (double)(lVar3 - plVar33[1]) * (double)(lVar25 - lVar4);
                      if (dVar38 == 0.0) goto joined_r0x00103056;
                      if (bVar11 == dVar38 < 0.0) {
                        bVar12 = (bool)(bVar12 ^ 1);
                      }
                    }
                  }
                  else {
                    lVar32 = lVar4;
                    if (lVar4 <= lVar29) {
                      lVar32 = lVar29;
                    }
                    if (lVar25 <= lVar32) goto LAB_00102b73;
                    bVar12 = (bool)(bVar12 ^ 1);
                  }
                  bVar11 = (bool)(bVar11 ^ 1);
                  plVar21 = plVar21 + 2;
                  goto LAB_00102ab8;
                }
                if ((lVar25 == lVar4) ||
                   ((lVar19 == plVar33[1] && (lVar25 < *plVar33 != lVar25 < lVar4))))
                goto joined_r0x00103056;
                plVar21 = plVar21 + 2;
              } while (plVar21 != plVar31);
              plVar30 = plVar31;
              if (bVar11 == bVar37) {
LAB_00102f1b:
                if (bVar12) {
                  iVar17 = iVar17 + -1;
                  goto LAB_00102f27;
                }
                break;
              }
LAB_00102e9f:
              plVar31 = plVar30 + -2;
              if (plVar30 == plVar9) {
                plVar31 = plVar1;
              }
LAB_00102eac:
              dVar38 = (double)(*plVar30 - *plVar31) * (double)(lVar19 - plVar30[1]) -
                       (double)(plVar30[1] - plVar31[1]) * (double)(lVar25 - *plVar30);
              if (dVar38 != 0.0) {
                if (dVar38 < 0.0 == bVar11) {
                  bVar12 = (bool)(bVar12 ^ 1);
                }
                goto LAB_00102f1b;
              }
joined_r0x00103056:
              plVar36 = plVar36 + 2;
              if (plVar7 == plVar36) goto LAB_00102f40;
            }
          }
LAB_00103077:
          iVar17 = iVar17 + 1;
LAB_00102f27:
          iVar26 = -iVar17;
          if (0 < iVar17) {
            iVar26 = iVar17;
          }
        } while ((iVar26 < 2) && (plVar36 = plVar36 + 2, plVar7 != plVar36));
LAB_00102f40:
        if (0 < iVar17) goto LAB_00102530;
      }
      lVar19 = 0;
      cVar15 = StartLocsAreClockwise((vector *)(this + 400));
      while( true ) {
        lVar25 = 3 - lVar19;
        if (cVar15 != '\0') {
          lVar25 = lVar19;
        }
        Add(this,plVar18[lVar25 * 2],(plVar18 + lVar25 * 2)[1],0);
        local_58 = **(long **)(this + 0xb8);
        if (*(long *)(local_58 + 0x18) == 0) {
          *(vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> **)(local_58 + 0x18) =
               (vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
               (this + lVar25 * 0x30 + 0xd0);
          plVar18 = *(long **)(this + lVar25 * 0x30 + 0xd8);
          if (plVar18 == *(long **)(this + lVar25 * 0x30 + 0xe0)) {
            std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
            _M_realloc_insert<Clipper2Lib::OutPt2*const&>
                      ((vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *)
                       (this + lVar25 * 0x30 + 0xd0),plVar18,&local_58);
          }
          else {
            *plVar18 = local_58;
            *(long **)(this + lVar25 * 0x30 + 0xd8) = plVar18 + 1;
          }
        }
        lVar19 = lVar19 + 1;
        if (lVar19 == 4) break;
        plVar18 = *(long **)(this + 0x20);
      }
    }
    goto LAB_00102530;
  }
  if (local_88 == 4) goto LAB_00102530;
  piVar6 = *(int **)(this + 0x198);
  piVar35 = *(int **)(this + 400);
  if (local_88 == local_ac) {
    if (((ulong)((long)piVar6 - (long)piVar35) < 9) || (piVar6 == piVar35)) goto LAB_00102530;
LAB_001024aa:
    local_8c = local_88;
    iVar17 = local_88;
    do {
      iVar26 = *piVar35;
      if (iVar26 != iVar17) {
        AddCorner(this,(Location *)&local_8c,(iVar17 + 1) % 4 == iVar26);
        iVar17 = iVar26;
        local_8c = iVar26;
      }
      piVar35 = piVar35 + 1;
    } while (piVar6 != piVar35);
    local_88 = iVar17;
    if (local_ac == iVar17) goto LAB_00102530;
  }
  else if (piVar6 != piVar35) goto LAB_001024aa;
  AddCorner(this,(Location *)&local_88,(local_88 + 1) % 4 == local_ac);
LAB_00102530:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102ac8:
  plVar21 = plVar21 + 2;
  bVar11 = true;
  if (plVar30 == plVar21) {
LAB_00102af0:
    if ((plVar30 == plVar31) || (plVar9 == plVar31)) {
      if (bVar37 == bVar11) goto LAB_00102f1b;
      if (plVar30 == plVar8) {
        lVar25 = *plVar36;
        plVar31 = plVar1;
        plVar30 = plVar9;
        goto LAB_00102eac;
      }
      lVar25 = *plVar36;
      goto LAB_00102e9f;
    }
    plVar21 = plVar9;
    plVar30 = plVar31;
    if (bVar11 == false) {
      lVar25 = plVar9[1];
      while (lVar19 < lVar25) {
        plVar21 = plVar21 + 2;
        bVar11 = false;
        if (plVar21 == plVar30) goto LAB_00102af0;
LAB_00102b2b:
        lVar25 = plVar21[1];
      }
      bVar11 = false;
      if (plVar30 != plVar21) goto LAB_00102b38;
      goto LAB_00102af0;
    }
  }
  goto LAB_00102ad6;
}



/* Clipper2Lib::RectClip64::Execute(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&) */

vector * Clipper2Lib::RectClip64::Execute(vector *param_1)

{
  vector *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  long *in_RDX;
  ulong uVar15;
  vector *pvVar16;
  RectClip64 *in_RSI;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  RectClip64 *pRVar27;
  long lVar28;
  long in_FS_OFFSET;
  void *local_98;
  void *pvStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(in_RSI + 8);
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  if ((lVar14 < *(long *)(in_RSI + 0x18)) && (*(long *)in_RSI < *(long *)(in_RSI + 0x10))) {
    pvVar1 = (vector *)in_RDX[1];
    pvVar16 = (vector *)*in_RDX;
joined_r0x00103227:
    if (pvVar16 != pvVar1) {
      do {
        plVar2 = *(long **)(pvVar16 + 8);
        plVar10 = *(long **)pvVar16;
        uVar23 = (long)plVar2 - (long)plVar10;
        if (0x20 < uVar23) {
          if (plVar10 == plVar2) {
            *(undefined8 *)(in_RSI + 0x48) = 0x7fffffffffffffff;
            *(undefined8 *)(in_RSI + 0x50) = 0x7fffffffffffffff;
            *(undefined8 *)(in_RSI + 0x58) = 0x8000000000000000;
            *(undefined8 *)(in_RSI + 0x60) = 0x8000000000000000;
          }
          else {
            lVar20 = -0x8000000000000000;
            lVar19 = 0x7fffffffffffffff;
            lVar14 = -0x8000000000000000;
            lVar17 = 0x7fffffffffffffff;
            do {
              lVar3 = *plVar10;
              if (lVar3 < lVar17) {
                lVar17 = lVar3;
              }
              if (lVar14 < lVar3) {
                lVar14 = lVar3;
              }
              lVar3 = plVar10[1];
              if (lVar3 < lVar19) {
                lVar19 = lVar3;
              }
              if (lVar20 < lVar3) {
                lVar20 = lVar3;
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 != plVar2);
            lVar3 = *(long *)in_RSI;
            lVar4 = *(long *)(in_RSI + 0x10);
            *(long *)(in_RSI + 0x48) = lVar17;
            *(long *)(in_RSI + 0x50) = lVar19;
            lVar22 = lVar17;
            if (lVar17 <= lVar3) {
              lVar22 = lVar3;
            }
            *(long *)(in_RSI + 0x58) = lVar14;
            lVar21 = lVar14;
            if (lVar4 <= lVar14) {
              lVar21 = lVar4;
            }
            *(long *)(in_RSI + 0x60) = lVar20;
            if (lVar22 <= lVar21) {
              lVar22 = *(long *)(in_RSI + 8);
              lVar21 = *(long *)(in_RSI + 0x18);
              lVar28 = lVar19;
              if (lVar19 <= lVar22) {
                lVar28 = lVar22;
              }
              lVar26 = lVar20;
              if (lVar21 <= lVar20) {
                lVar26 = lVar21;
              }
              if (lVar28 <= lVar26) {
                if ((((lVar4 < lVar14) || (lVar17 < lVar3)) || (lVar19 < lVar22)) ||
                   (lVar21 < lVar20)) {
                  pRVar27 = in_RSI + 0xd0;
                  uVar23 = 0;
                  ExecuteInternal(in_RSI,pvVar16);
                  CheckEdges(in_RSI);
                  do {
                    TidyEdges(in_RSI,uVar23,(vector *)pRVar27,(vector *)pRVar27 + 0x18);
                    uVar23 = uVar23 + 1;
                    pRVar27 = (RectClip64 *)((vector *)pRVar27 + 0x30);
                  } while (uVar23 != 4);
                  uVar5 = *(ulong *)(in_RSI + 0xc0);
                  for (uVar23 = *(ulong *)(in_RSI + 0xb8); uVar5 != uVar23; uVar23 = uVar23 + 8) {
                    GetPath((OutPt2 **)&local_98);
                    pvVar12 = local_98;
                    if (pvStack_90 == local_98) {
LAB_001036a6:
                      if (pvVar12 != (void *)0x0) goto LAB_0010340e;
                    }
                    else {
                      pauVar6 = *(undefined1 (**) [16])(param_1 + 8);
                      if (pauVar6 == *(undefined1 (**) [16])(param_1 + 0x10)) {
                        std::
                        vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                        ::
                        _M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>&>
                                  ((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                                    *)param_1,pauVar6,
                                   (_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>
                                    *)&local_98);
                        goto LAB_001036a6;
                      }
                      uVar18 = (long)pvStack_90 - (long)local_98;
                      *(undefined8 *)pauVar6[1] = 0;
                      *pauVar6 = (undefined1  [16])0x0;
                      if (0x7ffffffffffffff0 < uVar18) goto joined_r0x00103700;
                      pvVar11 = operator_new(uVar18);
                      *(void **)*pauVar6 = pvVar11;
                      *(ulong *)pauVar6[1] = (long)pvVar11 + uVar18;
                      uVar15 = 0;
                      do {
                        uVar7 = ((undefined8 *)((long)pvVar12 + uVar15))[1];
                        *(undefined8 *)((long)pvVar11 + uVar15) =
                             *(undefined8 *)((long)pvVar12 + uVar15);
                        ((undefined8 *)((long)pvVar11 + uVar15))[1] = uVar7;
                        uVar15 = uVar15 + 0x10;
                      } while (uVar15 != uVar18);
                      *(ulong *)(*pauVar6 + 8) = (long)pvVar11 + uVar15;
                      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x18;
LAB_0010340e:
                      operator_delete(pvVar12,local_88 - (long)pvVar12);
                    }
                  }
                  pvStack_90 = (void *)0x8;
                  pvVar12 = operator_new(0x40);
                  local_98 = pvVar12;
                  pvVar13 = operator_new(0x1e0);
                  puVar24 = (undefined8 *)((long)pvVar12 + 0x18);
                  lVar14 = *(long *)(in_RSI + 0x78);
                  uVar9 = *(undefined8 *)(in_RSI + 0x80);
                  uVar7 = *(undefined8 *)(in_RSI + 0x88);
                  puVar8 = *(undefined8 **)(in_RSI + 0x90);
                  *puVar24 = pvVar13;
                  pvVar12 = *(void **)(in_RSI + 0x68);
                  pvVar11 = *(void **)(in_RSI + 0x70);
                  local_68 = *(long *)(in_RSI + 0x98);
                  uStack_60 = *(undefined8 *)(in_RSI + 0xa0);
                  local_58 = *(undefined8 *)(in_RSI + 0xa8);
                  puStack_50 = *(undefined8 **)(in_RSI + 0xb0);
                  puVar25 = (undefined8 *)((long)puStack_50 + 8);
                  *(void **)(in_RSI + 0x68) = local_98;
                  *(void **)(in_RSI + 0x70) = pvStack_90;
                  *(void **)(in_RSI + 0x78) = pvVar13;
                  *(void **)(in_RSI + 0x80) = pvVar13;
                  *(long *)(in_RSI + 0x88) = (long)pvVar13 + 0x1e0;
                  *(undefined8 **)(in_RSI + 0x90) = puVar24;
                  *(void **)(in_RSI + 0x98) = pvVar13;
                  *(void **)(in_RSI + 0xa0) = pvVar13;
                  *(long *)(in_RSI + 0xa8) = (long)pvVar13 + 0x1e0;
                  *(undefined8 **)(in_RSI + 0xb0) = puVar24;
                  local_98 = pvVar12;
                  pvStack_90 = pvVar11;
                  local_78 = uVar7;
                  puStack_70 = puVar8;
                  local_88 = lVar14;
                  uStack_80 = uVar9;
                  puVar24 = puVar8;
                  while (puVar24 = puVar24 + 1, puVar24 < puVar25) {
                    operator_delete((void *)*puVar24,0x1e0);
                  }
                  local_68 = lVar14;
                  uStack_60 = uVar9;
                  local_58 = uVar7;
                  puStack_50 = puVar8;
                  std::_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::
                  ~_Deque_base((_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>
                                *)&local_98);
                  if (*(long *)(in_RSI + 0xb8) != *(long *)(in_RSI + 0xc0)) {
                    *(long *)(in_RSI + 0xc0) = *(long *)(in_RSI + 0xb8);
                  }
                  pRVar27 = in_RSI + 0xd8;
                  do {
                    if (*(long *)(pRVar27 + -8) != *(long *)pRVar27) {
                      *(long *)pRVar27 = *(long *)(pRVar27 + -8);
                    }
                    pRVar27 = pRVar27 + 0x18;
                  } while (pRVar27 != in_RSI + 0x198);
                  if (*(long *)(in_RSI + 400) != *(long *)(in_RSI + 0x198)) {
                    *(long *)(in_RSI + 0x198) = *(long *)(in_RSI + 400);
                  }
                }
                else {
                  pauVar6 = *(undefined1 (**) [16])(param_1 + 8);
                  if (pauVar6 != *(undefined1 (**) [16])(param_1 + 0x10)) goto code_r0x00103600;
                  std::
                  vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                  ::
                  _M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>
                            ((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                              *)param_1,pauVar6,pvVar16);
                }
              }
            }
          }
        }
        pvVar16 = pvVar16 + 0x18;
        if (pvVar1 == pvVar16) break;
      } while( true );
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00103707:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00103600:
  *(undefined8 *)pauVar6[1] = 0;
  *pauVar6 = (undefined1  [16])0x0;
  uVar18 = uVar23;
  if (0x7ffffffffffffff0 < uVar23) goto joined_r0x00103700;
  pvVar12 = operator_new(uVar23);
  *(ulong *)pauVar6[1] = uVar23 + (long)pvVar12;
  *(void **)*pauVar6 = pvVar12;
  *(void **)(*pauVar6 + 8) = pvVar12;
  lVar14 = *(long *)pvVar16;
  if (*(long *)(pvVar16 + 8) != lVar14) {
    lVar17 = *(long *)(pvVar16 + 8) - lVar14;
    lVar19 = 0;
    do {
      uVar7 = ((undefined8 *)(lVar14 + lVar19))[1];
      *(undefined8 *)((long)pvVar12 + lVar19) = *(undefined8 *)(lVar14 + lVar19);
      ((undefined8 *)((long)pvVar12 + lVar19))[1] = uVar7;
      lVar19 = lVar19 + 0x10;
    } while (lVar17 != lVar19);
    pvVar12 = (void *)((long)pvVar12 + lVar17);
  }
  *(void **)(*pauVar6 + 8) = pvVar12;
  pvVar16 = pvVar16 + 0x18;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x18;
  goto joined_r0x00103227;
joined_r0x00103700:
  while ((long)uVar18 < 0) {
    std::__throw_bad_array_new_length();
    uVar18 = uVar23;
  }
  std::__throw_bad_alloc();
  goto LAB_00103707;
}



/* Clipper2Lib::RectClipLines64::Execute(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&) */

vector * Clipper2Lib::RectClipLines64::Execute(vector *param_1)

{
  vector *pvVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  OutPt2 *pOVar4;
  OutPt2 *pOVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  void *pvVar9;
  OutPt2 *pOVar10;
  long *in_RDX;
  ulong uVar11;
  undefined8 *puVar12;
  RectClipLines64 *in_RSI;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  vector *pvVar18;
  undefined8 *puVar19;
  long in_FS_OFFSET;
  _Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *local_a0;
  OutPt2 *local_98;
  OutPt2 *pOStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(in_RSI + 8);
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  if ((lVar13 < *(long *)(in_RSI + 0x18)) && (*(long *)in_RSI < *(long *)(in_RSI + 0x10))) {
    pvVar1 = (vector *)in_RDX[1];
    pvVar18 = (vector *)*in_RDX;
    if (pvVar18 != pvVar1) {
      do {
        plVar8 = *(long **)pvVar18;
        if (plVar8 != *(long **)(pvVar18 + 8)) {
          lVar17 = -0x8000000000000000;
          lVar16 = 0x7fffffffffffffff;
          lVar13 = -0x8000000000000000;
          lVar15 = 0x7fffffffffffffff;
          do {
            lVar2 = *plVar8;
            if (lVar2 < lVar15) {
              lVar15 = lVar2;
            }
            if (lVar13 < lVar2) {
              lVar13 = lVar2;
            }
            lVar2 = plVar8[1];
            if (lVar2 < lVar16) {
              lVar16 = lVar2;
            }
            if (lVar17 < lVar2) {
              lVar17 = lVar2;
            }
            plVar8 = plVar8 + 2;
          } while (plVar8 != *(long **)(pvVar18 + 8));
          if (lVar15 < *(long *)in_RSI) {
            lVar15 = *(long *)in_RSI;
          }
          if (*(long *)(in_RSI + 0x10) < lVar13) {
            lVar13 = *(long *)(in_RSI + 0x10);
          }
          if (lVar15 <= lVar13) {
            if (*(long *)(in_RSI + 0x18) < lVar17) {
              lVar17 = *(long *)(in_RSI + 0x18);
            }
            if (lVar16 < *(long *)(in_RSI + 8)) {
              lVar16 = *(long *)(in_RSI + 8);
            }
            if (lVar16 <= lVar17) {
              ExecuteInternal(in_RSI,pvVar18);
              lVar13 = *(long *)(in_RSI + 0xc0);
              lVar15 = *(long *)(in_RSI + 0xb8);
              if (lVar13 != lVar15) {
                do {
                  GetPath(&local_98);
                  pOVar4 = local_98;
                  if (pOStack_90 == local_98) {
LAB_00103ab6:
                    if (pOVar4 != (OutPt2 *)0x0) goto LAB_001038ec;
                  }
                  else {
                    pauVar3 = *(undefined1 (**) [16])(param_1 + 8);
                    if (pauVar3 == *(undefined1 (**) [16])(param_1 + 0x10)) {
                      std::
                      vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                      ::
                      _M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>&>
                                ((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                                  *)param_1,pauVar3,&local_98);
                      goto LAB_00103ab6;
                    }
                    uVar14 = (long)pOStack_90 - (long)local_98;
                    *(undefined8 *)pauVar3[1] = 0;
                    *pauVar3 = (undefined1  [16])0x0;
                    if (0x7ffffffffffffff0 < uVar14) {
                      if ((long)uVar14 < 0) {
                        std::__throw_bad_array_new_length();
                        goto LAB_00103920;
                      }
                      std::__throw_bad_alloc();
                      goto LAB_00103ae2;
                    }
                    pvVar9 = operator_new(uVar14);
                    uVar11 = 0;
                    *(void **)*pauVar3 = pvVar9;
                    *(ulong *)pauVar3[1] = (long)pvVar9 + uVar14;
                    do {
                      uVar6 = *(undefined8 *)(pOVar4 + uVar11 + 8);
                      *(undefined8 *)((long)pvVar9 + uVar11) = *(undefined8 *)(pOVar4 + uVar11);
                      ((undefined8 *)((long)pvVar9 + uVar11))[1] = uVar6;
                      uVar11 = uVar11 + 0x10;
                    } while (uVar14 != uVar11);
                    *(ulong *)(*pauVar3 + 8) = (long)pvVar9 + uVar14;
                    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x18;
LAB_001038ec:
                    operator_delete(pOVar4,local_88 - (long)pOVar4);
                  }
                  lVar15 = lVar15 + 8;
                } while (lVar13 != lVar15);
                if (*(long *)(in_RSI + 0xb8) != *(long *)(in_RSI + 0xc0)) {
                  *(long *)(in_RSI + 0xc0) = *(long *)(in_RSI + 0xb8);
                }
              }
LAB_00103920:
              local_a0 = (_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *)
                         &local_98;
              pOStack_90 = (OutPt2 *)0x8;
              pOVar10 = (OutPt2 *)operator_new(0x40);
              local_98 = pOVar10;
              pvVar9 = operator_new(0x1e0);
              pOVar10 = pOVar10 + 0x18;
              pOVar4 = *(OutPt2 **)(in_RSI + 0x68);
              uVar6 = *(undefined8 *)(in_RSI + 0x88);
              lVar13 = *(long *)(in_RSI + 0x90);
              *(void **)pOVar10 = pvVar9;
              pOVar5 = *(OutPt2 **)(in_RSI + 0x70);
              lVar15 = *(long *)(in_RSI + 0x78);
              uVar7 = *(undefined8 *)(in_RSI + 0x80);
              local_68 = *(long *)(in_RSI + 0x98);
              uStack_60 = *(undefined8 *)(in_RSI + 0xa0);
              local_58 = *(undefined8 *)(in_RSI + 0xa8);
              lStack_50 = *(long *)(in_RSI + 0xb0);
              *(OutPt2 **)(in_RSI + 0x68) = local_98;
              *(OutPt2 **)(in_RSI + 0x70) = pOStack_90;
              puVar12 = (undefined8 *)(lStack_50 + 8);
              *(void **)(in_RSI + 0x78) = pvVar9;
              *(void **)(in_RSI + 0x80) = pvVar9;
              *(long *)(in_RSI + 0x88) = (long)pvVar9 + 0x1e0;
              *(OutPt2 **)(in_RSI + 0x90) = pOVar10;
              *(void **)(in_RSI + 0x98) = pvVar9;
              *(void **)(in_RSI + 0xa0) = pvVar9;
              *(long *)(in_RSI + 0xa8) = (long)pvVar9 + 0x1e0;
              *(OutPt2 **)(in_RSI + 0xb0) = pOVar10;
              local_98 = pOVar4;
              pOStack_90 = pOVar5;
              local_78 = uVar6;
              lStack_70 = lVar13;
              local_88 = lVar15;
              uStack_80 = uVar7;
              for (puVar19 = (undefined8 *)(lVar13 + 8); puVar19 < puVar12; puVar19 = puVar19 + 1) {
                operator_delete((void *)*puVar19,0x1e0);
              }
              local_68 = lVar15;
              uStack_60 = uVar7;
              local_58 = uVar6;
              lStack_50 = lVar13;
              std::_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::
              ~_Deque_base(local_a0);
              if (*(long *)(in_RSI + 400) != *(long *)(in_RSI + 0x198)) {
                *(long *)(in_RSI + 0x198) = *(long *)(in_RSI + 400);
              }
            }
          }
        }
        pvVar18 = pvVar18 + 0x18;
      } while (pvVar1 != pvVar18);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00103ae2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Deque_base<Clipper2Lib::OutPt2, std::allocator<Clipper2Lib::OutPt2> >::~_Deque_base() */

void __thiscall
std::_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::~_Deque_base
          (_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *this)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  lVar1 = *(long *)(this + 0x48);
  puVar2 = *(undefined8 **)(this + 0x28);
  if (puVar2 < (undefined8 *)(lVar1 + 8U)) {
    do {
      pvVar3 = (void *)*puVar2;
      puVar2 = puVar2 + 1;
      operator_delete(pvVar3,0x1e0);
    } while (puVar2 < (undefined8 *)(lVar1 + 8U));
    pvVar3 = *(void **)this;
  }
  operator_delete(pvVar3,*(long *)(this + 8) << 3);
  return;
}



/* void std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > >::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >
   const&>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >*, std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::
_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>
          (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
           *this,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *extraout_RDX;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  pauVar15 = (undefined1 (*) [16])((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar16 = 0x555555555555555;
      if (uVar6 + 1 < 0x555555555555556) {
        uVar16 = uVar6 + 1;
      }
      uVar6 = uVar16 * 0x18;
      goto LAB_00103d55;
    }
  }
  else {
    uVar16 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar16) {
      if (uVar16 != 0) goto LAB_00103dc5;
      puVar11 = (undefined8 *)0x0;
      goto LAB_00103be2;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar16 = 0x555555555555555;
LAB_00103d55:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_00103be2:
    lVar5 = param_3[1];
    lVar14 = *param_3;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + (long)puVar11);
    *(undefined8 *)pauVar15[1] = 0;
    *pauVar15 = (undefined1  [16])0x0;
    uVar6 = lVar5 - lVar14;
    if (uVar6 == 0) break;
    if (uVar6 < 0x7ffffffffffffff1) {
      pvVar7 = operator_new(uVar6);
      lVar5 = param_3[1];
      lVar14 = *param_3;
LAB_00103c45:
      *(void **)*pauVar15 = pvVar7;
      *(ulong *)pauVar15[1] = uVar6 + (long)pvVar7;
      if (lVar5 != lVar14) {
        lVar12 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar14 + lVar12))[1];
          *(undefined8 *)((long)pvVar7 + lVar12) = *(undefined8 *)(lVar14 + lVar12);
          ((undefined8 *)((long)pvVar7 + lVar12))[1] = uVar3;
          lVar12 = lVar12 + 0x10;
        } while (lVar5 - lVar14 != lVar12);
        pvVar7 = (void *)((long)pvVar7 + (lVar5 - lVar14));
      }
      *(void **)(*pauVar15 + 8) = pvVar7;
      puVar8 = puVar2;
      puVar13 = puVar11;
      if (param_2 != puVar2) {
        do {
          uVar4 = puVar8[1];
          uVar3 = puVar8[2];
          puVar9 = puVar8 + 3;
          *puVar13 = *puVar8;
          puVar13[1] = uVar4;
          puVar13[2] = uVar3;
          puVar8 = puVar9;
          puVar13 = puVar13 + 3;
        } while (param_2 != puVar9);
        puVar13 = (undefined8 *)
                  ((long)puVar11 +
                  ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
      }
      puVar8 = puVar13 + 3;
      puVar9 = param_2;
      if (param_2 != puVar1) {
        do {
          uVar4 = puVar9[1];
          uVar3 = puVar9[2];
          puVar10 = puVar9 + 3;
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar9 = puVar10;
          puVar8 = puVar8 + 3;
        } while (puVar1 != puVar10);
        puVar8 = (undefined8 *)
                 ((long)puVar13 +
                 ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30);
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
      }
      *(undefined8 **)this = puVar11;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar11 + uVar16 * 3;
      return;
    }
    std::__throw_bad_array_new_length();
    param_3 = extraout_RDX;
LAB_00103dc5:
    if (0x555555555555555 < uVar16) {
      uVar16 = 0x555555555555555;
    }
    uVar6 = uVar16 * 0x18;
  }
  pvVar7 = (void *)0x0;
  goto LAB_00103c45;
}



/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*,
   std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > > >,
   Clipper2Lib::Point<long> const&) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
_M_realloc_insert<Clipper2Lib::Point<long>const&>
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00103ef8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00103f02:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_00103e6a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00103ebc;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00103ef8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00103f02;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00103f02;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_00103e6a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_00103ebc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<Clipper2Lib::OutPt2*, std::allocator<Clipper2Lib::OutPt2*>
   >::_M_realloc_insert<Clipper2Lib::OutPt2*
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::OutPt2**, std::vector<Clipper2Lib::OutPt2*,
   std::allocator<Clipper2Lib::OutPt2*> > >, Clipper2Lib::OutPt2* const&) */

void __thiscall
std::vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>>::
_M_realloc_insert<Clipper2Lib::OutPt2*const&>
          (vector<Clipper2Lib::OutPt2*,std::allocator<Clipper2Lib::OutPt2*>> *this,void *param_2,
          undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar2) goto LAB_00104040;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010404a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00104040:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010404a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010404a;
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
    if (__src == (void *)0x0) goto LAB_0010401c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010401c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::deque<Clipper2Lib::OutPt2, std::allocator<Clipper2Lib::OutPt2>
   >::_M_push_back_aux<Clipper2Lib::OutPt2>(Clipper2Lib::OutPt2&&) */

void __thiscall
std::deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::
_M_push_back_aux<Clipper2Lib::OutPt2>
          (deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *this,OutPt2 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  long *__src;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *__dest;
  void *unaff_R15;
  undefined1 uVar10;
  
  plVar8 = *(long **)(this + 0x48);
  __src = *(long **)(this + 0x28);
  lVar7 = (long)plVar8 - (long)__src;
  if ((*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 4) * -0x5555555555555555 +
      (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 4) * -0x5555555555555555 +
      ((lVar7 >> 3) + -1 + (ulong)(plVar8 == (long *)0x0)) * 10 == 0x2aaaaaaaaaaaaaa) {
LAB_001043cc:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar6 = *(ulong *)(this + 8);
  if (1 < uVar6 - ((long)plVar8 - *(long *)this >> 3)) goto LAB_001041dd;
  __dest = (long *)((lVar7 >> 3) + 2);
  if ((ulong)((long)__dest * 2) < uVar6) {
    sVar5 = (long)plVar8 + (8 - (long)__src);
    __dest = (long *)(*(long *)this + (uVar6 - (long)__dest >> 1) * 8);
    if (__dest < __src) {
      if ((long)sVar5 < 9) {
        if (sVar5 == 8) {
          lVar4 = *__src;
          *__dest = lVar4;
          goto LAB_001042d7;
        }
        goto LAB_001042d4;
      }
      memmove(__dest,__src,sVar5);
      lVar4 = *__dest;
    }
    else if ((long)sVar5 < 9) {
      if (sVar5 != 8) goto LAB_001042d4;
      *(long *)((long)__dest + lVar7) = *__src;
      lVar4 = *__dest;
    }
    else {
      memmove((void *)((long)__dest + ((lVar7 + 8) - sVar5)),__src,sVar5);
      lVar4 = *__dest;
    }
  }
  else {
    if (uVar6 == 0) {
      uVar6 = 0x18;
      uVar9 = 3;
LAB_00104283:
      unaff_R15 = operator_new(uVar6);
      __src = *(long **)(this + 0x28);
      __dest = (long *)((long)unaff_R15 + (uVar9 - (long)__dest >> 1) * 8);
      sVar5 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar10 = sVar5 == 8;
      if ((long)sVar5 < 9) goto LAB_00104390;
      memmove(__dest,__src,sVar5);
    }
    else {
      uVar9 = (uVar6 + 1) * 2;
      if (uVar9 >> 0x3c == 0) {
        uVar6 = (uVar6 + 1) * 0x10;
        goto LAB_00104283;
      }
      uVar9 = uVar9 >> 0x3d;
      uVar10 = uVar9 == 0;
      if ((bool)uVar10) {
        std::__throw_bad_alloc();
        goto LAB_001043cc;
      }
      std::__throw_bad_array_new_length();
LAB_00104390:
      if ((bool)uVar10) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = unaff_R15;
    *(ulong *)(this + 8) = uVar9;
LAB_001042d4:
    lVar4 = *__dest;
  }
LAB_001042d7:
  *(long *)(this + 0x18) = lVar4;
  plVar8 = (long *)((long)__dest + lVar7);
  *(long *)(this + 0x20) = lVar4 + 0x1e0;
  lVar7 = *plVar8;
  *(long **)(this + 0x28) = __dest;
  *(long **)(this + 0x48) = plVar8;
  *(long *)(this + 0x38) = lVar7;
  *(long *)(this + 0x40) = lVar7 + 0x1e0;
LAB_001041dd:
  pvVar3 = operator_new(0x1e0);
  lVar7 = *(long *)(this + 0x48);
  plVar8[1] = (long)pvVar3;
  puVar1 = *(undefined8 **)(this + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  lVar4 = *(long *)(lVar7 + 8);
  *(long *)(this + 0x30) = lVar4;
  *(long *)(this + 0x38) = lVar4;
  *(long *)(this + 0x40) = lVar4 + 0x1e0;
  *(long **)(this + 0x48) = (long *)(lVar7 + 8);
  return;
}



/* Clipper2Lib::OutPt2& std::deque<Clipper2Lib::OutPt2, std::allocator<Clipper2Lib::OutPt2>
   >::emplace_back<Clipper2Lib::OutPt2>(Clipper2Lib::OutPt2&&) */

OutPt2 * __thiscall
std::deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::
emplace_back<Clipper2Lib::OutPt2>
          (deque<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *this,OutPt2 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar1 == (undefined8 *)(*(long *)(this + 0x40) + -0x30)) {
    _M_push_back_aux<Clipper2Lib::OutPt2>(this,param_1);
    puVar3 = *(undefined8 **)(this + 0x30);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar3 = puVar1 + 6;
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = uVar2;
    *(undefined8 **)(this + 0x30) = puVar3;
  }
  if (*(undefined8 **)(this + 0x38) != puVar3) {
    return (OutPt2 *)(puVar3 + -6);
  }
  return (OutPt2 *)(*(long *)(*(long *)(this + 0x48) + -8) + 0x1b0);
}



/* void std::vector<Clipper2Lib::Location, std::allocator<Clipper2Lib::Location>
   >::_M_realloc_insert<Clipper2Lib::Location
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Location*, std::vector<Clipper2Lib::Location,
   std::allocator<Clipper2Lib::Location> > >, Clipper2Lib::Location const&) */

void __thiscall
std::vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>>::
_M_realloc_insert<Clipper2Lib::Location_const&>
          (vector<Clipper2Lib::Location,std::allocator<Clipper2Lib::Location>> *this,void *param_2,
          undefined4 *param_3)

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
    if (0xfffffffffffffffe < uVar2) goto LAB_00104520;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010452a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00104520:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010452a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010452a;
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
    if (__src == (void *)0x0) goto LAB_001044fb;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001044fb:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > >::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> >
   >&>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >*, std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >&) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>&>
          (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
           *this,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *extraout_RDX;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  pauVar15 = (undefined1 (*) [16])((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar16 = 0x555555555555555;
      if (uVar6 + 1 < 0x555555555555556) {
        uVar16 = uVar6 + 1;
      }
      uVar6 = uVar16 * 0x18;
      goto LAB_001047d5;
    }
  }
  else {
    uVar16 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar16) {
      if (uVar16 != 0) goto LAB_00104845;
      puVar11 = (undefined8 *)0x0;
      goto LAB_00104662;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar16 = 0x555555555555555;
LAB_001047d5:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_00104662:
    lVar5 = param_3[1];
    lVar14 = *param_3;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + (long)puVar11);
    *(undefined8 *)pauVar15[1] = 0;
    *pauVar15 = (undefined1  [16])0x0;
    uVar6 = lVar5 - lVar14;
    if (uVar6 == 0) break;
    if (uVar6 < 0x7ffffffffffffff1) {
      pvVar7 = operator_new(uVar6);
      lVar5 = param_3[1];
      lVar14 = *param_3;
LAB_001046c5:
      *(void **)*pauVar15 = pvVar7;
      *(ulong *)pauVar15[1] = uVar6 + (long)pvVar7;
      if (lVar5 != lVar14) {
        lVar12 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar14 + lVar12))[1];
          *(undefined8 *)((long)pvVar7 + lVar12) = *(undefined8 *)(lVar14 + lVar12);
          ((undefined8 *)((long)pvVar7 + lVar12))[1] = uVar3;
          lVar12 = lVar12 + 0x10;
        } while (lVar5 - lVar14 != lVar12);
        pvVar7 = (void *)((long)pvVar7 + (lVar5 - lVar14));
      }
      *(void **)(*pauVar15 + 8) = pvVar7;
      puVar8 = puVar2;
      puVar13 = puVar11;
      if (param_2 != puVar2) {
        do {
          uVar4 = puVar8[1];
          uVar3 = puVar8[2];
          puVar9 = puVar8 + 3;
          *puVar13 = *puVar8;
          puVar13[1] = uVar4;
          puVar13[2] = uVar3;
          puVar8 = puVar9;
          puVar13 = puVar13 + 3;
        } while (param_2 != puVar9);
        puVar13 = (undefined8 *)
                  ((long)puVar11 +
                  ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
      }
      puVar8 = puVar13 + 3;
      puVar9 = param_2;
      if (param_2 != puVar1) {
        do {
          uVar4 = puVar9[1];
          uVar3 = puVar9[2];
          puVar10 = puVar9 + 3;
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar9 = puVar10;
          puVar8 = puVar8 + 3;
        } while (puVar1 != puVar10);
        puVar8 = (undefined8 *)
                 ((long)puVar13 +
                 ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30);
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
      }
      *(undefined8 **)this = puVar11;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar11 + uVar16 * 3;
      return;
    }
    std::__throw_bad_array_new_length();
    param_3 = extraout_RDX;
LAB_00104845:
    if (0x555555555555555 < uVar16) {
      uVar16 = 0x555555555555555;
    }
    uVar6 = uVar16 * 0x18;
  }
  pvVar7 = (void *)0x0;
  goto LAB_001046c5;
}



/* Clipper2Lib::GetSegmentIntersection(Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long>
   const&, Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long> const&,
   Clipper2Lib::Point<long>&) */

void Clipper2Lib::_GLOBAL__sub_I_GetSegmentIntersection(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Deque_base<Clipper2Lib::OutPt2, std::allocator<Clipper2Lib::OutPt2> >::~_Deque_base() */

void __thiscall
std::_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>>::~_Deque_base
          (_Deque_base<Clipper2Lib::OutPt2,std::allocator<Clipper2Lib::OutPt2>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


