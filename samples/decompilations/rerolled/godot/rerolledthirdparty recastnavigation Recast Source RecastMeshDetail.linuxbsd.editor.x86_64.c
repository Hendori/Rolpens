/* distancePtSeg2d(float const*, float const*, float const*) */

float distancePtSeg2d(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar4 = *param_3 - fVar1;
  fVar3 = param_3[2] - fVar2;
  fVar6 = fVar4 * fVar4 + fVar3 * fVar3;
  fVar5 = (*param_1 - fVar1) * fVar4 + (param_1[2] - fVar2) * fVar3;
  if (0.0 < fVar6) {
    fVar5 = fVar5 / fVar6;
  }
  if (fVar5 < 0.0) {
    fVar4 = fVar4 * 0.0;
    fVar3 = fVar3 * 0.0;
  }
  else if (fVar5 <= _LC1) {
    fVar4 = fVar4 * fVar5;
    fVar3 = fVar3 * fVar5;
  }
  fVar1 = (fVar1 + fVar4) - *param_1;
  fVar2 = (fVar2 + fVar3) - param_1[2];
  return fVar1 * fVar1 + fVar2 * fVar2;
}



/* overlapEdges(float const*, int const*, int, int, int) */

undefined8 overlapEdges(float *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < param_3) {
    piVar8 = param_2 + (long)param_3 * 4;
    do {
      iVar6 = *param_2;
      if ((((iVar6 != param_4) && (iVar6 != param_5)) && (iVar7 = param_2[1], iVar7 != param_4)) &&
         (iVar7 != param_5)) {
        fVar9 = param_1[param_5 * 3];
        fVar1 = param_1[param_4 * 3];
        fVar2 = (param_1 + param_5 * 3)[2];
        fVar3 = (param_1 + param_4 * 3)[2];
        fVar4 = param_1[iVar6 * 3];
        fVar5 = (param_1 + iVar6 * 3)[2];
        fVar11 = param_1[iVar7 * 3] - fVar4;
        fVar10 = (param_1 + iVar7 * 3)[2] - fVar5;
        fVar12 = (fVar2 - fVar5) * fVar11 - (fVar9 - fVar4) * fVar10;
        fVar10 = (fVar3 - fVar5) * fVar11 - fVar10 * (fVar1 - fVar4);
        if ((fVar12 * fVar10 < 0.0) &&
           (fVar9 = (fVar9 - fVar1) * (fVar5 - fVar3) - (fVar2 - fVar3) * (fVar4 - fVar1),
           ((fVar10 + fVar9) - fVar12) * fVar9 < 0.0)) {
          return 1;
        }
      }
      param_2 = param_2 + 4;
    } while (param_2 != piVar8);
  }
  return 0;
}



/* getEdgeFlags(float const*, float const*, float const*, int) */

undefined8 getEdgeFlags(float *param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *extraout_RDX;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  
  if (getEdgeFlags(float_const*,float_const*,float_const*,int)::thrSqr == '\0') {
    iVar1 = __cxa_guard_acquire(&getEdgeFlags(float_const*,float_const*,float_const*,int)::thrSqr);
    if (iVar1 != 0) {
      getEdgeFlags(float_const*,float_const*,float_const*,int)::thrSqr = 1.0000001e-06;
      __cxa_guard_release(&getEdgeFlags(float_const*,float_const*,float_const*,int)::thrSqr);
    }
  }
  if (param_4 != 0) {
    uVar3 = 0;
    uVar5 = (ulong)(param_4 - 1);
    fVar7 = getEdgeFlags(float_const*,float_const*,float_const*,int)::thrSqr;
    do {
      uVar6 = uVar3 & 0xffffffff;
      pfVar4 = param_3 + (int)uVar5 * 3;
      lVar2 = distancePtSeg2d(param_1,pfVar4,param_3 + uVar3 * 3);
      if (extraout_XMM0_Da < fVar7) {
        lVar2 = distancePtSeg2d(param_2,pfVar4,extraout_RDX);
        if (extraout_XMM0_Da_00 < fVar7) {
          return 1;
        }
      }
      uVar3 = lVar2 + 1;
      uVar5 = uVar6;
    } while ((long)param_4 != uVar3);
  }
  return 0;
}



/* getHeight(float, float, float, float, float, float, int, rcHeightPatch const&) [clone .isra.0] */

ushort getHeight(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,int param_7,rcHeightPatch *param_8)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ushort local_3e;
  
  fVar15 = param_1 * param_4 + _LC4;
  if ((float)((uint)fVar15 & _LC6) < _LC5) {
    fVar15 = (float)((uint)((float)(int)fVar15 -
                           (float)(-(uint)(fVar15 < (float)(int)fVar15) & _LC1)) |
                    ~_LC6 & (uint)fVar15);
  }
  fVar16 = param_4 * param_3 + _LC4;
  if ((float)((uint)fVar16 & _LC6) < _LC5) {
    fVar16 = (float)((uint)((float)(int)fVar16 -
                           (float)(-(uint)(fVar16 < (float)(int)fVar16) & _LC1)) |
                    ~_LC6 & (uint)fVar16);
  }
  iVar2 = *(int *)(param_8 + 0x10);
  iVar4 = (int)fVar15 - *(int *)(param_8 + 8);
  iVar10 = iVar2 + -1;
  if (iVar4 < iVar2 + -1) {
    iVar10 = iVar4;
  }
  if (iVar4 < 0) {
    iVar10 = 0;
  }
  iVar4 = (int)fVar16 - *(int *)(param_8 + 0xc);
  if (iVar4 < 0) {
    iVar13 = 0;
    iVar4 = iVar10;
  }
  else {
    iVar13 = *(int *)(param_8 + 0x14) + -1;
    if (iVar4 < iVar13) {
      iVar13 = iVar4;
    }
    iVar4 = iVar2 * iVar13 + iVar10;
  }
  local_3e = *(ushort *)(*(long *)param_8 + (long)iVar4 * 2);
  if (local_3e == 0xffff) {
    iVar4 = param_7 * 2 + 1;
    iVar7 = 0;
    iVar3 = 0;
    iVar11 = 0;
    iVar6 = 8;
    iVar5 = 1;
    iVar14 = 0x10;
    iVar12 = 1;
    fVar15 = _LC3;
    do {
      iVar9 = iVar10 + iVar5;
      iVar8 = iVar13 + iVar3;
      iVar7 = iVar7 + 1;
      if (((((iVar9 < iVar2 &
             (byte)~((byte)((uint)iVar9 >> 0x18) | (byte)((uint)iVar8 >> 0x18)) >> 7) == 0) ||
           (*(int *)(param_8 + 0x14) <= iVar8)) ||
          (uVar1 = *(ushort *)(*(long *)param_8 + (long)(iVar8 * iVar2 + iVar9) * 2),
          uVar1 == 0xffff)) ||
         (fVar16 = (float)((uint)((float)uVar1 * param_5 - param_2) & _LC6), fVar15 <= fVar16)) {
        if (iVar6 == iVar7) {
          if (local_3e != 0xffff) {
            return local_3e;
          }
          iVar6 = iVar6 + iVar14;
          iVar14 = iVar14 + 8;
        }
      }
      else {
        fVar15 = fVar16;
        local_3e = uVar1;
        if (iVar6 == iVar7) {
          return uVar1;
        }
      }
      if (iVar5 == iVar3) {
LAB_00100472:
        iVar8 = -iVar11;
        iVar11 = iVar12;
      }
      else {
        iVar8 = iVar12;
        if (iVar5 < 0) {
          if (iVar5 + iVar3 == 0) {
            iVar8 = -iVar11;
            iVar11 = iVar12;
          }
        }
        else if ((iVar5 != 0) && (1 - iVar3 == iVar5)) goto LAB_00100472;
      }
      iVar5 = iVar5 + iVar8;
      iVar3 = iVar3 + iVar11;
      iVar12 = iVar8;
    } while (iVar4 * iVar4 + -1 != iVar7);
  }
  return local_3e;
}



/* circumCircle(float const*, float const*, float const*, float*, float&) [clone .isra.0] */

void circumCircle(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_1;
  fVar5 = param_2[2] - param_1[2];
  fVar1 = *param_2 - fVar6;
  fVar2 = param_3[2] - param_1[2];
  fVar4 = *param_3 - fVar6;
  fVar3 = fVar1 * fVar2 - fVar5 * fVar4;
  if ((float)((uint)fVar3 & _LC6) <= _LC8) {
    *param_4 = fVar6;
    param_4[1] = param_1[1];
    param_4[2] = param_1[2];
    *param_5 = 0.0;
    return;
  }
  fVar7 = fVar1 * fVar1 + fVar5 * fVar5;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2;
  param_4[1] = 0.0;
  fVar2 = ((0.0 - fVar5) * fVar6 + fVar2 * fVar7 + (fVar5 - fVar2) * 0.0) / (fVar3 + fVar3);
  fVar6 = (fVar1 * fVar6 + (fVar4 - fVar1) * 0.0 + (0.0 - fVar4) * fVar7) / (fVar3 + fVar3);
  fVar1 = 0.0 - fVar2;
  *param_4 = fVar2;
  fVar2 = 0.0 - fVar6;
  param_4[2] = fVar6;
  *param_5 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *param_4 = *param_4 + *param_1;
  param_4[1] = param_4[1] + param_1[1];
  param_4[2] = param_4[2] + param_1[2];
  return;
}



/* addEdge(rcContext*, int*, int&, int, int, int, int, int) [clone .constprop.0] [clone .isra.0] */

void addEdge(rcContext *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_3;
  if (param_4 <= iVar1) {
    rcContext::log(param_1,3,"addEdge: Too many edges (%d/%d).",iVar1,param_4);
    return;
  }
  if (0 < iVar1) {
    piVar2 = param_2;
    do {
      if (param_5 == *piVar2) {
        if (param_6 == piVar2[1]) {
          return;
        }
      }
      else if ((param_6 == *piVar2) && (param_5 == piVar2[1])) {
        return;
      }
      piVar2 = piVar2 + 4;
    } while (param_2 + (long)iVar1 * 4 != piVar2);
  }
  piVar2 = param_2 + (iVar1 << 2);
  *piVar2 = param_5;
  piVar2[1] = param_6;
  piVar2[2] = param_7;
  piVar2[3] = -1;
  *param_3 = *param_3 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* completeFacet(rcContext*, float const*, int, int*, int&, int, int&, int) */

void completeFacet(rcContext *param_1,float *param_2,int param_3,int *param_4,int *param_5,
                  int param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_ffffffffffffff50;
  int local_8c;
  float local_54;
  float local_50 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = param_4 + param_8 * 4;
  iVar14 = piVar5[2];
  if (iVar14 == -1) {
    iVar8 = *piVar5;
    iVar6 = piVar5[1];
    iVar11 = iVar8;
    iVar7 = iVar6;
  }
  else {
    if (piVar5[3] != -1) goto LAB_00100a29;
    iVar6 = piVar5[1];
    iVar8 = *piVar5;
    iVar11 = iVar6;
    iVar7 = iVar8;
  }
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  local_50[2] = 0.0;
  local_54 = -1.0;
  if (0 < param_3) {
    iVar6 = 0;
    fVar17 = 0.0;
    pfVar1 = param_2 + iVar7 * 3;
    pfVar2 = param_2 + iVar11 * 3;
    uVar12 = (ulong)(uint)param_3;
    fVar18 = _LC12;
    fVar19 = _LC13;
    local_8c = param_3;
    do {
      uVar13 = uVar12;
      if ((iVar11 != iVar6) && (iVar7 != iVar6)) {
        pfVar3 = param_2 + iVar6 * 3;
        if (__LC11 < (*pfVar1 - *pfVar2) * (pfVar3[2] - pfVar2[2]) -
                     (pfVar1[2] - pfVar2[2]) * (*pfVar3 - *pfVar2)) {
          if (local_54 < fVar17) {
LAB_001008ef:
            in_stack_ffffffffffffff50 = 0x100907;
            circumCircle(pfVar2,pfVar1,pfVar3,local_50,&local_54);
            local_8c = iVar6;
          }
          else {
            fVar15 = *pfVar3 - local_50[0];
            fVar16 = pfVar3[2] - local_50[2];
            fVar15 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
            if (fVar15 <= local_54 * fVar18) {
              if (fVar15 < local_54 * fVar19) goto LAB_001008ef;
              iVar8 = *param_5;
              in_stack_ffffffffffffff50 = 0x1008c6;
              iVar9 = iVar6;
              cVar4 = overlapEdges(param_2,param_4,iVar8,iVar11,iVar6);
              uVar13 = uVar12 & 0xffffffff;
              if (cVar4 == '\0') {
                in_stack_ffffffffffffff50 = 0x1008e3;
                cVar4 = overlapEdges(param_2,param_4,iVar8,iVar7,iVar9);
                uVar13 = uVar12 & 0xffffffff;
                if (cVar4 == '\0') goto LAB_001008ef;
              }
            }
          }
        }
      }
      iVar9 = (int)in_stack_ffffffffffffff50;
      iVar6 = iVar6 + 1;
      uVar12 = uVar13;
    } while ((int)uVar13 != iVar6);
    iVar6 = piVar5[1];
    iVar8 = *piVar5;
    if (local_8c < (int)uVar13) {
      iVar10 = *param_7;
      if (((iVar11 == iVar8) && (iVar7 == iVar6)) && (iVar14 == -1)) {
        piVar5[2] = iVar10;
      }
      else if (((iVar11 == iVar6) && (iVar7 == iVar8)) && (piVar5[3] == -1)) {
        piVar5[3] = iVar10;
      }
      iVar14 = *param_5;
      if (0 < iVar14) {
        piVar5 = param_4 + 1;
        iVar6 = 0;
LAB_001009a1:
        do {
          if (local_8c == piVar5[-1]) {
            if (iVar11 != *piVar5) goto LAB_00100991;
LAB_001009ae:
            piVar5 = param_4 + (iVar6 << 2);
            if (((local_8c == *piVar5) && (iVar11 == piVar5[1])) && (piVar5[2] == -1)) {
              piVar5[2] = iVar10;
              iVar10 = *param_7;
              iVar14 = *param_5;
            }
            else {
              if (((local_8c != piVar5[1]) || (iVar11 != *piVar5)) || (piVar5[3] != -1))
              goto LAB_001009d8;
              piVar5[3] = iVar10;
              iVar10 = *param_7;
              iVar14 = *param_5;
            }
            goto LAB_00100adb;
          }
          if (iVar11 == piVar5[-1]) {
            if (local_8c == *piVar5) goto LAB_001009ae;
            iVar6 = iVar6 + 1;
            piVar5 = piVar5 + 4;
            if (iVar14 == iVar6) break;
            goto LAB_001009a1;
          }
LAB_00100991:
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 4;
        } while (iVar14 != iVar6);
      }
      addEdge(param_1,param_4,param_5,param_6,local_8c,iVar11,iVar10,iVar9);
      iVar14 = *param_5;
      iVar10 = *param_7;
LAB_00100adb:
      if (0 < iVar14) {
LAB_001009d8:
        piVar5 = param_4 + 1;
        iVar6 = 0;
LAB_001009f1:
        do {
          if (iVar7 == piVar5[-1]) {
            if (local_8c != *piVar5) goto LAB_001009e5;
LAB_001009fd:
            piVar5 = param_4 + (iVar6 << 2);
            if (((iVar7 == *piVar5) && (local_8c == piVar5[1])) && (piVar5[2] == -1)) {
              piVar5[2] = iVar10;
              iVar10 = *param_7;
            }
            else if (((iVar7 == piVar5[1]) && (local_8c == *piVar5)) && (piVar5[3] == -1)) {
              piVar5[3] = iVar10;
              iVar10 = *param_7;
            }
            *param_7 = iVar10 + 1;
            goto LAB_00100a29;
          }
          if (local_8c == piVar5[-1]) {
            if (iVar7 == *piVar5) goto LAB_001009fd;
            iVar6 = iVar6 + 1;
            piVar5 = piVar5 + 4;
            if (iVar6 == iVar14) break;
            goto LAB_001009f1;
          }
LAB_001009e5:
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 4;
        } while (iVar6 != iVar14);
      }
      addEdge(param_1,param_4,param_5,param_6,iVar7,local_8c,iVar10,iVar9);
      *param_7 = *param_7 + 1;
      goto LAB_00100a29;
    }
  }
  if (((iVar11 == iVar8) && (iVar7 == iVar6)) && (iVar14 == -1)) {
    piVar5[2] = -2;
  }
  else if (((iVar7 == iVar8) && (iVar11 == iVar6)) && (piVar5[3] == -1)) {
    piVar5[3] = -2;
  }
LAB_00100a29:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* rcMergePolyMeshDetails(rcContext*, rcPolyMeshDetail**, int, rcPolyMeshDetail&) */

undefined8
rcMergePolyMeshDetails
          (rcContext *param_1,rcPolyMeshDetail **param_2,int param_3,rcPolyMeshDetail *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  rcPolyMeshDetail *prVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  rcPolyMeshDetail **pprVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x1b);
  }
  if (param_3 < 1) {
    lVar9 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar10 = 0;
  }
  else {
    iVar11 = 0;
    iVar12 = 0;
    iVar10 = 0;
    pprVar8 = param_2;
    do {
      prVar3 = *pprVar8;
      if (prVar3 != (rcPolyMeshDetail *)0x0) {
        iVar10 = iVar10 + *(int *)(prVar3 + 0x1c);
        iVar12 = iVar12 + *(int *)(prVar3 + 0x20);
        iVar11 = iVar11 + *(int *)(prVar3 + 0x18);
      }
      pprVar8 = pprVar8 + 1;
    } while (pprVar8 != param_2 + param_3);
    lVar9 = (long)iVar11 << 4;
  }
  *(undefined4 *)(param_4 + 0x18) = 0;
  lVar9 = rcAlloc(lVar9,0);
  *(long *)param_4 = lVar9;
  if (lVar9 == 0) {
    rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'pmdtl.meshes\' (%d).",
                   iVar11 * 4);
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_4 + 0x20) = 0;
    lVar9 = rcAlloc((long)iVar12 << 2,0);
    *(long *)(param_4 + 0x10) = lVar9;
    if (lVar9 == 0) {
      rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'dmesh.tris\' (%d).",
                     iVar12 * 4);
      uVar5 = 0;
    }
    else {
      *(undefined4 *)(param_4 + 0x1c) = 0;
      lVar9 = rcAlloc((long)iVar10 * 0xc,0);
      *(long *)(param_4 + 8) = lVar9;
      if (lVar9 == 0) {
        rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'dmesh.verts\' (%d).",
                       iVar10 * 3);
        uVar5 = 0;
      }
      else {
        if (0 < param_3) {
          pprVar8 = param_2 + param_3;
          do {
            prVar3 = *param_2;
            if (prVar3 != (rcPolyMeshDetail *)0x0) {
              if (0 < *(int *)(prVar3 + 0x18)) {
                lVar9 = *(long *)param_4;
                iVar10 = *(int *)(param_4 + 0x18);
                iVar11 = 0;
                piVar6 = *(int **)prVar3;
                do {
                  iVar11 = iVar11 + 1;
                  piVar1 = (int *)(lVar9 + (long)(iVar10 << 2) * 4);
                  *piVar1 = *piVar6 + *(int *)(param_4 + 0x1c);
                  piVar1[1] = piVar6[1];
                  piVar1[2] = piVar6[2] + *(int *)(param_4 + 0x20);
                  piVar1[3] = piVar6[3];
                  iVar10 = *(int *)(param_4 + 0x18) + 1;
                  *(int *)(param_4 + 0x18) = iVar10;
                  piVar6 = piVar6 + 4;
                } while (iVar11 < *(int *)(prVar3 + 0x18));
              }
              if (0 < *(int *)(prVar3 + 0x1c)) {
                iVar10 = *(int *)(param_4 + 0x1c);
                iVar11 = 0;
                puVar4 = (undefined4 *)(*(long *)(param_4 + 8) + (long)(iVar10 * 3) * 4);
                puVar7 = *(undefined4 **)(prVar3 + 8);
                do {
                  iVar12 = iVar10 + 1 + iVar11;
                  iVar11 = iVar11 + 1;
                  *puVar4 = *puVar7;
                  puVar4[1] = puVar7[1];
                  puVar4[2] = puVar7[2];
                  *(int *)(param_4 + 0x1c) = iVar12;
                  puVar4 = puVar4 + 3;
                  puVar7 = puVar7 + 3;
                } while (iVar11 < *(int *)(prVar3 + 0x1c));
              }
              if (0 < *(int *)(prVar3 + 0x20)) {
                iVar10 = *(int *)(param_4 + 0x20);
                lVar9 = 0;
                iVar11 = 0;
                do {
                  iVar11 = iVar11 + 1;
                  *(undefined1 *)(*(long *)(param_4 + 0x10) + (long)(iVar10 << 2)) =
                       *(undefined1 *)(*(long *)(prVar3 + 0x10) + lVar9);
                  *(undefined1 *)
                   (*(long *)(param_4 + 0x10) + 1 + (long)(*(int *)(param_4 + 0x20) << 2)) =
                       *(undefined1 *)(*(long *)(prVar3 + 0x10) + 1 + lVar9);
                  *(undefined1 *)
                   (*(long *)(param_4 + 0x10) + 2 + (long)(*(int *)(param_4 + 0x20) << 2)) =
                       *(undefined1 *)(*(long *)(prVar3 + 0x10) + 2 + lVar9);
                  puVar2 = (undefined1 *)(*(long *)(prVar3 + 0x10) + 3 + lVar9);
                  lVar9 = lVar9 + 4;
                  *(undefined1 *)
                   (*(long *)(param_4 + 0x10) + 3 + (long)(*(int *)(param_4 + 0x20) << 2)) = *puVar2
                  ;
                  iVar10 = *(int *)(param_4 + 0x20) + 1;
                  *(int *)(param_4 + 0x20) = iVar10;
                } while (iVar11 < *(int *)(prVar3 + 0x20));
              }
            }
            param_2 = param_2 + 1;
          } while (param_2 != pprVar8);
        }
        uVar5 = 1;
      }
    }
  }
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x1b);
    return uVar5;
  }
  return uVar5;
}



/* triangulateHull(int, float const*, int, int const*, int, rcIntArray&) [clone .isra.0] */

void triangulateHull(int param_1,float *param_2,int param_3,int *param_4,int param_5,
                    rcIntArray *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_register_00000014;
  int *piVar9;
  undefined4 in_register_0000003c;
  long lVar10;
  undefined4 in_register_00000084;
  rcVectorBase<int,(rcAllocHint)1> *this;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_70;
  int local_68;
  int local_44;
  long local_40;
  
  this = (rcVectorBase<int,(rcAllocHint)1> *)CONCAT44(in_register_00000084,param_5);
  lVar10 = CONCAT44(in_register_0000003c,param_1);
  piVar9 = (int *)CONCAT44(in_register_00000014,param_3);
  iVar3 = (int)param_2;
  iVar11 = iVar3 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar12 = iVar11;
  if (iVar3 < 1) {
    local_70 = 1;
    lVar14 = 4;
    piVar8 = piVar9;
  }
  else {
    local_70 = 1;
    lVar13 = 0;
    fVar19 = _LC3;
    iVar6 = 0;
    piVar8 = piVar9;
    do {
      iVar7 = iVar6 + 1;
      if (*piVar8 < (int)param_4) {
        iVar15 = 0;
        iVar4 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar4 = iVar11;
        }
        pfVar1 = (float *)(lVar10 + (long)(*piVar8 * 3) * 4);
        piVar5 = piVar9;
        if (iVar7 < iVar3) {
          iVar15 = iVar7;
          piVar5 = piVar8 + 1;
        }
        fVar18 = *pfVar1;
        fVar21 = pfVar1[2];
        pfVar1 = (float *)(lVar10 + (long)(piVar9[iVar4] * 3) * 4);
        pfVar2 = (float *)(lVar10 + (long)(*piVar5 * 3) * 4);
        fVar20 = *pfVar1;
        fVar23 = pfVar1[2];
        fVar17 = *pfVar2;
        fVar24 = pfVar2[2];
        fVar16 = fVar18 - fVar20;
        fVar22 = fVar21 - fVar23;
        fVar23 = fVar23 - fVar24;
        fVar20 = fVar20 - fVar17;
        fVar17 = fVar17 - fVar18;
        fVar24 = fVar24 - fVar21;
        fVar18 = SQRT(fVar17 * fVar17 + fVar24 * fVar24) + SQRT(fVar22 * fVar22 + fVar16 * fVar16) +
                 SQRT(fVar20 * fVar20 + fVar23 * fVar23);
        if (fVar18 < fVar19) {
          lVar13 = (long)iVar6;
          fVar19 = fVar18;
          iVar12 = iVar4;
          local_70 = iVar15;
        }
      }
      iVar6 = iVar7;
      piVar8 = piVar8 + 1;
    } while (iVar3 != iVar7);
    lVar14 = (long)local_70 << 2;
    piVar8 = piVar9 + lVar13;
  }
  local_44 = *piVar8;
  rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
  local_44 = *(int *)((long)piVar9 + lVar14);
  rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
  local_44 = piVar9[iVar12];
  rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
  local_44 = 0;
  rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
  local_68 = local_70 + 1;
  while( true ) {
    iVar6 = 0;
    if (local_68 < iVar3) {
      iVar6 = local_68;
    }
    if (iVar12 == iVar6) break;
    iVar7 = iVar12 + -1;
    if (iVar12 < 1) {
      iVar7 = iVar11;
    }
    local_44 = piVar9[local_70];
    pfVar1 = (float *)(lVar10 + (long)(local_44 * 3) * 4);
    fVar19 = *pfVar1;
    fVar18 = pfVar1[2];
    pfVar1 = (float *)(lVar10 + (long)(piVar9[iVar6] * 3) * 4);
    fVar21 = *pfVar1;
    fVar20 = pfVar1[2];
    piVar8 = piVar9 + iVar12;
    fVar16 = fVar21 - fVar19;
    fVar22 = fVar20 - fVar18;
    pfVar1 = (float *)(lVar10 + (long)(*piVar8 * 3) * 4);
    fVar23 = *pfVar1;
    fVar17 = pfVar1[2];
    pfVar1 = (float *)(lVar10 + (long)(piVar9[iVar7] * 3) * 4);
    fVar21 = fVar23 - fVar21;
    fVar20 = fVar17 - fVar20;
    fVar24 = *pfVar1;
    fVar19 = fVar24 - fVar19;
    fVar24 = fVar24 - fVar23;
    fVar23 = pfVar1[2];
    fVar17 = fVar23 - fVar17;
    fVar23 = fVar23 - fVar18;
    if (SQRT(fVar19 * fVar19 + fVar23 * fVar23) + SQRT(fVar24 * fVar24 + fVar17 * fVar17) <=
        SQRT(fVar20 * fVar20 + fVar21 * fVar21) + SQRT(fVar16 * fVar16 + fVar22 * fVar22)) {
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_44 = piVar9[iVar7];
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_44 = *piVar8;
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_44 = 0;
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      iVar12 = iVar7;
    }
    else {
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_44 = piVar9[iVar6];
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_44 = *piVar8;
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_44 = 0;
      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_44);
      local_68 = iVar6 + 1;
      local_70 = iVar6;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rcBuildPolyMeshDetail(rcContext*, rcPolyMesh const&, rcCompactHeightfield const&, float, float,
   rcPolyMeshDetail&) */

rcContext rcBuildPolyMeshDetail
                    (rcContext *param_1,rcPolyMesh *param_2,rcCompactHeightfield *param_3,
                    float param_4,float param_5,rcPolyMeshDetail *param_6)

{
  ushort *puVar1;
  short *psVar2;
  int *piVar3;
  rcIntArray *prVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  float *pfVar26;
  long lVar27;
  float *pfVar28;
  rcIntArray *prVar29;
  float *pfVar30;
  float *pfVar31;
  ulong uVar32;
  rcIntArray *prVar33;
  void *pvVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  ushort *puVar38;
  ushort *puVar39;
  float *pfVar40;
  long lVar41;
  uint uVar42;
  float fVar43;
  int iVar44;
  undefined2 *puVar45;
  long lVar46;
  rcIntArray *extraout_RDX;
  rcContext rVar47;
  uint uVar48;
  uint *puVar49;
  int iVar50;
  int iVar51;
  uint uVar52;
  int *piVar53;
  int *piVar54;
  long lVar55;
  ulong uVar56;
  long lVar57;
  int iVar58;
  ushort uVar59;
  int iVar60;
  int iVar61;
  ulong uVar62;
  int iVar63;
  uint uVar64;
  long in_FS_OFFSET;
  byte bVar65;
  float extraout_XMM0_Da;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float extraout_XMM0_Da_00;
  int iVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  uint local_1248;
  uint local_1238;
  long local_1218;
  long local_1200;
  rcIntArray *local_11f8;
  long local_1180;
  int local_1174;
  int local_1170;
  long local_1168;
  long local_1150;
  float fStack_112c;
  int local_1100;
  uint local_10fc;
  rcVectorBase<int,(rcAllocHint)1> local_10f8 [8];
  ulong uStack_10f0;
  int *local_10e8;
  undefined1 local_10d8 [16];
  int *local_10c8;
  undefined1 local_10b8 [16];
  void *local_10a8;
  rcVectorBase<int,(rcAllocHint)1> local_1098 [8];
  ulong uStack_1090;
  int *local_1088;
  void *local_1078;
  undefined1 local_1070 [16];
  float local_1058 [32];
  rcIntArray local_fd8 [4];
  float local_fd4 [99];
  undefined1 local_e48 [16];
  uint local_e38 [124];
  rcIntArray local_c48 [4];
  float afStack_c44 [769];
  long local_40;
  
  bVar65 = 0;
  rVar47 = param_1[9];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (rVar47 == (rcContext)0x0) {
    rVar47 = (rcContext)0x1;
    if (*(int *)(param_2 + 0x28) == 0) goto LAB_0010143b;
    if (*(int *)(param_2 + 0x2c) == 0) goto LAB_00101411;
LAB_00101489:
    uVar6 = *(uint *)(param_2 + 0x34);
    fVar71 = *(float *)(param_2 + 0x5c);
    _local_10f8 = (undefined1  [16])0x0;
    uVar11 = *(undefined8 *)(param_2 + 0x50);
    iVar7 = *(int *)(param_2 + 0x58);
    local_1078 = (void *)((ulong)local_1078 & 0xffffffff00000000);
    local_10e8 = (int *)0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl(local_10f8,0x40,(int *)&local_1078);
    local_10d8 = (undefined1  [16])0x0;
    local_1078 = (void *)((ulong)local_1078 & 0xffffffff00000000);
    local_10c8 = (int *)0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl
              ((rcVectorBase<int,(rcAllocHint)1> *)local_10d8,0x200,(int *)&local_1078);
    local_10b8 = (undefined1  [16])0x0;
    local_1078 = (void *)((ulong)local_1078 & 0xffffffff00000000);
    local_10a8 = (void *)0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl
              ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,0x200,(int *)&local_1078);
    _local_1098 = (undefined1  [16])0x0;
    local_1078 = (void *)((ulong)local_1078 & 0xffffffff00000000);
    local_1088 = (int *)0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl(local_1098,0x200,(int *)&local_1078);
    local_1078 = (void *)0x0;
    local_1070 = (undefined1  [16])0x0;
    puVar25 = (uint *)rcAlloc((long)*(int *)(param_2 + 0x2c) << 4,1);
    if (puVar25 == (uint *)0x0) {
      rVar47 = (rcContext)0x0;
      rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'bounds\' (%d).",
                     *(int *)(param_2 + 0x2c) << 2);
    }
    else {
      pfVar26 = (float *)rcAlloc((long)(int)uVar6 * 0xc,1);
      if (pfVar26 == (float *)0x0) {
        rVar47 = (rcContext)0x0;
        rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'poly\' (%d).",uVar6 * 3);
      }
      else {
        if (*(int *)(param_2 + 0x2c) < 1) {
          lVar27 = 0;
          iVar50 = 0;
          iVar51 = 0;
          local_1174 = 0;
        }
        else {
          iVar60 = 0;
          iVar50 = 0;
          iVar51 = 0;
          local_1174 = 0;
          lVar27 = *(long *)(param_2 + 8);
          iVar58 = 0;
          puVar49 = puVar25;
          do {
            uVar23 = *(uint *)param_3;
            puVar49[1] = 0;
            *puVar49 = uVar23;
            uVar48 = *(uint *)(param_3 + 4);
            puVar49[3] = 0;
            puVar49[2] = uVar48;
            if (0 < (int)uVar6) {
              puVar38 = (ushort *)(lVar27 + (long)iVar60 * 2);
              iVar44 = local_1174 + uVar6;
              do {
                uVar23 = *puVar49;
                if (*puVar38 == 0xffff) goto LAB_00101713;
                puVar39 = (ushort *)(*(long *)param_2 + (long)(int)((uint)*puVar38 * 3) * 2);
                uVar22 = *puVar39;
                uVar59 = puVar39[2];
                if ((int)(uint)uVar22 <= (int)uVar23) {
                  uVar23 = (uint)uVar22;
                }
                uVar48 = puVar49[1];
                if ((int)puVar49[1] <= (int)(uint)uVar22) {
                  uVar48 = (uint)uVar22;
                }
                uVar35 = puVar49[2];
                if ((int)(uint)uVar59 <= (int)puVar49[2]) {
                  uVar35 = (uint)uVar59;
                }
                uVar42 = (uint)uVar59;
                if ((int)(uint)uVar59 < (int)puVar49[3]) {
                  uVar42 = puVar49[3];
                }
                local_1174 = local_1174 + 1;
                puVar38 = puVar38 + 1;
                *(ulong *)puVar49 = CONCAT44(uVar48,uVar23);
                *(ulong *)(puVar49 + 2) = CONCAT44(uVar42,uVar35);
              } while (local_1174 != iVar44);
              uVar23 = *puVar49;
            }
LAB_00101713:
            uVar23 = uVar23 - 1;
            if ((int)uVar23 < 0) {
              uVar23 = 0;
            }
            *puVar49 = uVar23;
            uVar48 = puVar49[1] + 1;
            if ((int)*(uint *)param_3 < (int)(puVar49[1] + 1)) {
              uVar48 = *(uint *)param_3;
            }
            uVar35 = puVar49[2] - 1;
            puVar49[1] = uVar48;
            if ((int)uVar35 < 0) {
              uVar35 = 0;
            }
            puVar49[2] = uVar35;
            uVar42 = *(uint *)(param_3 + 4);
            if ((int)(puVar49[3] + 1) <= (int)*(uint *)(param_3 + 4)) {
              uVar42 = puVar49[3] + 1;
            }
            puVar49[3] = uVar42;
            if (((int)uVar23 < (int)uVar48) && ((int)uVar35 < (int)uVar42)) {
              if (iVar51 < (int)(uVar48 - uVar23)) {
                iVar51 = uVar48 - uVar23;
              }
              if (iVar50 < (int)(uVar42 - uVar35)) {
                iVar50 = uVar42 - uVar35;
              }
            }
            iVar58 = iVar58 + 1;
            puVar49 = puVar49 + 4;
            iVar60 = iVar60 + uVar6 * 2;
          } while (iVar58 < *(int *)(param_2 + 0x2c));
          lVar27 = (long)iVar51 * (long)iVar50 * 2;
        }
        local_1078 = (void *)rcAlloc(lVar27,1);
        if (local_1078 == (void *)0x0) {
          rVar47 = (rcContext)0x0;
          rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'hp.data\' (%d).",
                         iVar51 * iVar50);
        }
        else {
          iVar51 = *(int *)(param_2 + 0x2c);
          *(undefined8 *)(param_6 + 0x1c) = 0;
          *(int *)(param_6 + 0x18) = iVar51;
          lVar27 = rcAlloc((long)iVar51 << 4,0);
          *(long *)param_6 = lVar27;
          if (lVar27 == 0) {
            rVar47 = (rcContext)0x0;
            rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'dmesh.meshes\' (%d).",
                           *(int *)(param_6 + 0x18) << 2);
          }
          else {
            local_1174 = local_1174 / 2 + local_1174;
            local_1170 = local_1174 * 2;
            *(undefined4 *)(param_6 + 0x1c) = 0;
            lVar27 = rcAlloc((long)local_1174 * 0xc,0);
            *(long *)(param_6 + 8) = lVar27;
            if (lVar27 == 0) {
              rVar47 = (rcContext)0x0;
              rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'dmesh.verts\' (%d).",
                             local_1174 * 3);
            }
            else {
              *(undefined4 *)(param_6 + 0x20) = 0;
              lVar27 = rcAlloc((long)local_1170 << 2,0);
              *(long *)(param_6 + 0x10) = lVar27;
              if (lVar27 == 0) {
                rVar47 = (rcContext)0x0;
                rcContext::log(param_1,3,"rcBuildPolyMeshDetail: Out of memory \'dmesh.tris\' (%d)."
                               ,local_1174 * 8);
              }
              else {
                if (0 < *(int *)(param_2 + 0x2c)) {
                  fVar78 = (float)uVar11;
                  if ((float)((uint)fVar71 & (uint)_LC6) < _LC5) {
                    fVar71 = (float)((uint)((float)(int)fVar71 +
                                           (float)(-(uint)((float)(int)fVar71 < fVar71) & (uint)_LC1
                                                  )) | ~(uint)_LC6 & (uint)fVar71);
                  }
                  local_1168 = 0;
                  local_1150 = 0;
                  local_1180 = 0;
                  iVar51 = 1;
                  if (0 < (int)fVar71) {
                    iVar51 = (int)fVar71;
                  }
                  do {
                    puVar38 = (ushort *)(local_1150 + *(long *)(param_2 + 8));
                    lVar27 = *(long *)param_2;
                    if ((int)uVar6 < 1) {
                      uVar23 = 0;
                    }
                    else {
                      uVar23 = 0;
                      fStack_112c = (float)((ulong)uVar11 >> 0x20);
                      pfVar30 = pfVar26;
                      puVar39 = puVar38;
                      do {
                        uVar22 = *puVar39;
                        if (uVar22 == 0xffff) break;
                        uVar23 = uVar23 + 1;
                        puVar39 = puVar39 + 1;
                        puVar1 = (ushort *)(lVar27 + (long)(int)((uint)uVar22 * 3) * 2);
                        uVar22 = puVar1[2];
                        *(ulong *)pfVar30 =
                             CONCAT44((float)puVar1[1] * fStack_112c,(float)*puVar1 * fVar78);
                        pfVar30[2] = (float)uVar22 * fVar78;
                        pfVar30 = pfVar30 + 3;
                      } while (uVar6 != uVar23);
                    }
                    local_1070._4_4_ = *(int *)((long)puVar25 + local_1168 + 8);
                    local_1070._0_4_ = *(int *)((long)puVar25 + local_1168);
                    local_1070._8_4_ =
                         *(int *)((long)puVar25 + local_1168 + 4) -
                         *(int *)((long)puVar25 + local_1168);
                    local_1070._12_4_ =
                         *(int *)((long)puVar25 + local_1168 + 0xc) - local_1070._4_4_;
                    sVar5 = *(short *)(*(long *)(param_2 + 0x10) + local_1180 * 2);
                    auVar81._8_8_ = 0;
                    auVar81._0_8_ = local_10b8._8_8_;
                    local_10b8 = auVar81 << 0x40;
                    memset(local_1078,0xff,
                           (long)(int)local_1070._8_4_ * (long)(int)local_1070._12_4_ * 2);
                    if ((sVar5 == 0) || ((int)local_1070._12_4_ < 1)) {
LAB_0010273c:
                      if (uVar23 == 0) {
                        iVar50 = 0;
                        iVar58 = 0;
                        local_1238 = 0;
                        local_1248 = 0;
                        uVar48 = 0xffffffff;
                      }
                      else {
                        uVar48 = 0xffffffff;
                        lVar46 = 1;
                        local_1238 = 0;
                        iVar50 = 0xffff;
                        local_1248 = 0;
                        do {
                          lVar41 = 1;
                          lVar55 = (long)(int)((uint)puVar38[lVar46 + -1] +
                                              (uint)puVar38[lVar46 + -1] * 2);
                          do {
                            while( true ) {
                              bVar12 = true;
                              uVar35 = *(int *)(lVar41 * 8 + 0x1047f8) +
                                       (uint)*(ushort *)(lVar27 + lVar55 * 2);
                              iVar58 = (int)lVar41;
                              if (((((int)local_1070._0_4_ <= (int)uVar35) &&
                                   ((int)uVar35 < (int)(local_1070._8_4_ + local_1070._0_4_))) &&
                                  (uVar42 = *(int *)(lVar41 * 8 + 0x1047fc) +
                                            (uint)*(ushort *)(lVar27 + 4 + lVar55 * 2),
                                  (int)local_1070._4_4_ <= (int)uVar42)) &&
                                 ((int)uVar42 < (int)(local_1070._4_4_ + local_1070._12_4_))) break;
LAB_001027e8:
                              lVar41 = lVar41 + 1;
                              if (8 < iVar58) goto LAB_001028d0;
                            }
                            puVar49 = (uint *)(*(long *)(param_3 + 0x40) +
                                              (long)(int)((iVar7 + uVar42) * *(int *)param_3 +
                                                         iVar7 + uVar35) * 4);
                            uVar64 = *puVar49 & 0xffffff;
                            uVar24 = *(byte *)((long)puVar49 + 3) + uVar64;
                            if (uVar24 <= uVar64) goto LAB_001027e8;
                            puVar39 = (ushort *)(*(long *)(param_3 + 0x48) + (ulong)uVar64 * 8);
                            do {
                              iVar44 = (uint)*(ushort *)(lVar27 + 2 + lVar55 * 2) - (uint)*puVar39;
                              iVar60 = -iVar44;
                              if (0 < iVar44) {
                                iVar60 = iVar44;
                              }
                              if (iVar60 < iVar50) {
                                iVar50 = iVar60;
                                local_1248 = uVar35;
                                local_1238 = uVar42;
                                uVar48 = uVar64;
                              }
                              uVar64 = uVar64 + 1;
                              bVar12 = 0 < iVar50;
                              puVar39 = puVar39 + 4;
                            } while (((int)uVar64 < (int)uVar24) && (bVar12));
                            lVar41 = lVar41 + 1;
                          } while (iVar58 < 9 && bVar12);
LAB_001028d0:
                          iVar58 = (int)lVar46;
                          lVar46 = lVar46 + 1;
                        } while ((bool)(iVar58 < (int)uVar23 & bVar12));
                        iVar50 = 0;
                        puVar39 = puVar38 + (int)uVar23;
                        iVar58 = 0;
                        do {
                          uVar22 = *puVar38;
                          puVar38 = puVar38 + 1;
                          lVar46 = (long)(int)((uint)uVar22 + (uint)uVar22 * 2);
                          iVar58 = iVar58 + (uint)*(ushort *)(lVar27 + lVar46 * 2);
                          iVar50 = iVar50 + (uint)*(ushort *)(lVar27 + 4 + lVar46 * 2);
                        } while (puVar39 != puVar38);
                        iVar58 = iVar58 / (int)uVar23;
                        iVar50 = iVar50 / (int)uVar23;
                      }
                      local_10fc = local_1248;
                      auVar82._8_8_ = 0;
                      auVar82._0_8_ = local_10b8._8_8_;
                      local_10b8 = auVar82 << 0x40;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(int *)&local_10fc);
                      local_10fc = local_1238;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(int *)&local_10fc);
                      local_10fc = uVar48;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(int *)&local_10fc);
                      local_e48 = __LC21;
                      memset(local_1078,0,
                             (long)(int)local_1070._8_4_ * (long)(int)local_1070._12_4_ * 2);
                      if (local_10b8._0_4_ < 3) {
                        local_1218 = -8;
                        iVar44 = -1;
                        iVar60 = -1;
                        uVar48 = 0xffffffff;
                      }
                      else {
                        do {
                          uVar48 = *(uint *)((long)local_10a8 + local_10b8._0_8_ * 4 + -4);
                          iVar60 = *(int *)((long)local_10a8 + local_10b8._0_8_ * 4 + -0xc);
                          iVar44 = *(int *)((long)local_10a8 + local_10b8._0_8_ * 4 + -8);
                          local_10b8._0_8_ = local_10b8._0_8_ + -3;
                          if ((iVar60 == iVar58) && (iVar44 == iVar50)) {
                            local_1218 = (long)(int)uVar48 << 3;
                            goto LAB_00102c7b;
                          }
                          if (iVar60 == iVar58) {
                            iVar63 = (iVar50 <= iVar44) + 1 + (uint)(iVar50 <= iVar44);
                          }
                          else {
                            iVar63 = (uint)(iVar60 < iVar58) * 2;
                          }
                          lVar46 = (long)iVar63;
                          uVar9 = *(undefined4 *)(local_e48 + lVar46 * 4);
                          *(undefined4 *)(local_e48 + lVar46 * 4) = local_e48._12_4_;
                          lVar27 = *(long *)(param_3 + 0x48);
                          local_e48._12_4_ = uVar9;
                          local_1218 = (long)(int)uVar48 * 8;
                          puVar49 = (uint *)local_e48;
                          do {
                            bVar21 = (char)*puVar49 * '\x06';
                            if ((~((int)(*(uint *)(lVar27 + local_1218 + 4) & 0xffffff) >>
                                  (bVar21 & 0x1f)) & 0x3fU) != 0) {
                              uVar35 = *puVar49 & 3;
                              uVar42 = (&rcGetDirOffsetX(int)::offset)[uVar35] + iVar60;
                              iVar63 = uVar42 - local_1070._0_4_;
                              if (-1 < iVar63) {
                                uVar35 = (&rcGetDirOffsetY(int)::offset)[uVar35] + iVar44;
                                iVar36 = uVar35 - local_1070._4_4_;
                                if ((((iVar63 < (int)local_1070._8_4_) && (-1 < iVar36)) &&
                                    (iVar36 < (int)local_1070._12_4_)) &&
                                   (psVar2 = (short *)((long)local_1078 +
                                                      (long)(iVar36 * local_1070._8_4_ + iVar63) * 2
                                                      ), *psVar2 == 0)) {
                                  *psVar2 = 1;
                                  local_10fc = uVar42;
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,
                                             (int *)&local_10fc);
                                  local_10fc = uVar35;
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,
                                             (int *)&local_10fc);
                                  local_10fc = (*(uint *)(*(long *)(param_3 + 0x40) +
                                                         (long)(int)((iVar7 + uVar35) *
                                                                     *(int *)param_3 +
                                                                    uVar42 + iVar7) * 4) & 0xffffff)
                                               + ((int)(*(uint *)(lVar27 + local_1218 + 4) &
                                                       0xffffff) >> (bVar21 & 0x1f) & 0x3fU);
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,
                                             (int *)&local_10fc);
                                }
                              }
                            }
                            puVar49 = puVar49 + 1;
                          } while (local_e38 != puVar49);
                          uVar10 = *(undefined4 *)(local_e48 + lVar46 * 4);
                          *(undefined4 *)(local_e48 + lVar46 * 4) = uVar9;
                          local_e48._12_4_ = uVar10;
                        } while (2 < local_10b8._0_4_);
                      }
                      rcContext::log(param_1,2,"Walk towards polygon center failed to reach center")
                      ;
LAB_00102c7b:
                      auVar20._8_8_ = 0;
                      auVar20._0_8_ = local_10b8._8_8_;
                      local_10b8 = auVar20 << 0x40;
                      local_10fc = iVar7 + iVar60;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(int *)&local_10fc);
                      local_10fc = iVar7 + iVar44;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(int *)&local_10fc);
                      local_10fc = uVar48;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(int *)&local_10fc);
                      memset(local_1078,0xff,
                             (long)(int)local_1070._8_4_ * (long)(int)local_1070._12_4_ * 2);
                      *(undefined2 *)
                       ((long)local_1078 +
                       (long)((iVar44 - local_1070._4_4_) * local_1070._8_4_ +
                             (iVar60 - local_1070._0_4_)) * 2) =
                           *(undefined2 *)(*(long *)(param_3 + 0x48) + local_1218);
                    }
                    else {
                      bVar12 = true;
                      local_1238 = 0;
                      iVar50 = local_1070._8_4_;
                      do {
                        iVar58 = local_1238 + local_1070._4_4_ + iVar7;
                        if (0 < iVar50) {
                          iVar60 = 0;
LAB_00101b08:
                          iVar44 = *(int *)param_3;
                          lVar46 = *(long *)(param_3 + 0x40);
                          iVar63 = local_1070._0_4_ + iVar60 + iVar7;
                          puVar49 = (uint *)(lVar46 + (long)(iVar58 * iVar44 + iVar63) * 4);
                          uVar48 = *puVar49 & 0xffffff;
                          uVar35 = *(byte *)((long)puVar49 + 3) + uVar48;
                          if (uVar48 < uVar35) {
                            lVar55 = *(long *)(param_3 + 0x48);
                            puVar45 = (undefined2 *)(lVar55 + (ulong)uVar48 * 8);
                            do {
                              if (sVar5 == puVar45[1]) {
                                *(undefined2 *)
                                 ((long)local_1078 + (long)(int)(local_1238 * iVar50 + iVar60) * 2)
                                     = *puVar45;
                                piVar54 = &rcGetDirOffsetX(int)::offset;
                                iVar36 = 0;
                                piVar53 = &rcGetDirOffsetY(int)::offset;
                                goto LAB_00101ba8;
                              }
                              uVar48 = uVar48 + 1;
                              puVar45 = puVar45 + 4;
                            } while (uVar35 != uVar48);
                          }
                          goto LAB_00101bfe;
                        }
LAB_00101c0b:
                        local_1238 = local_1238 + 1;
                      } while ((int)local_1238 < (int)local_1070._12_4_);
                      if (bVar12) goto LAB_0010273c;
                    }
                    iVar58 = 0;
                    iVar50 = 0;
                    uVar62 = local_10b8._0_8_ & 0xffffffff;
                    prVar33 = (rcIntArray *)local_10b8._0_8_;
                    if (0 < local_10b8._0_4_) {
                      do {
                        iVar58 = iVar58 + 1;
                        piVar53 = (int *)((long)local_10a8 + (long)iVar50 * 4);
                        iVar60 = *(int *)((long)local_10a8 + (long)iVar50 * 4 + 8);
                        iVar63 = *piVar53;
                        iVar36 = piVar53[1];
                        iVar44 = *piVar53;
                        if (iVar58 == 0x100) {
                          if (0x300 < (int)uVar62) {
                            memmove(local_10a8,(void *)((long)local_10a8 + 0xc00),
                                    (long)((int)uVar62 + -0x300) << 2);
                            prVar33 = (rcIntArray *)local_10b8._0_8_;
                          }
                          iVar58 = 0;
                          rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                    ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,
                                     (long)((int)prVar33 + -0x300),(int *)0x0);
                          iVar50 = 0;
                          prVar33 = (rcIntArray *)local_10b8._0_8_;
                        }
                        else {
                          iVar50 = iVar58 * 3;
                        }
                        piVar54 = &rcGetDirOffsetY(int)::offset;
                        iVar37 = 0;
                        lVar27 = *(long *)(param_3 + 0x48);
                        piVar53 = &rcGetDirOffsetX(int)::offset;
                        do {
                          uVar62 = (ulong)prVar33 & 0xffffffff;
                          uVar48 = (int)(*(uint *)(lVar27 + (long)iVar60 * 8 + 4) & 0xffffff) >>
                                   ((byte)iVar37 & 0x1f) & 0x3f;
                          if (uVar48 != 0x3f) {
                            iVar8 = *piVar53;
                            iVar61 = iVar44 + iVar8;
                            uVar35 = (iVar61 - local_1070._0_4_) - iVar7;
                            if (uVar35 < (uint)local_1070._8_4_) {
                              iVar70 = *piVar54 + iVar36;
                              uVar42 = (iVar70 - local_1070._4_4_) - iVar7;
                              if ((uVar42 < (uint)local_1070._12_4_) &&
                                 (psVar2 = (short *)((long)local_1078 +
                                                    (long)(int)(uVar42 * local_1070._8_4_ + uVar35)
                                                    * 2), *psVar2 == -1)) {
                                iVar61 = uVar48 + (*(uint *)(*(long *)(param_3 + 0x40) +
                                                            (long)(iVar70 * *(int *)param_3 + iVar61
                                                                  ) * 4) & 0xffffff);
                                *psVar2 = *(short *)(*(long *)(param_3 + 0x48) + (long)iVar61 * 8);
                                rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                          ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,
                                           (long)((int)prVar33 + 3),(int *)0x0);
                                uVar62 = local_10b8._0_8_ & 0xffffffff;
                                lVar46 = (long)(local_10b8._0_4_ + -3);
                                *(int *)((long)local_10a8 + lVar46 * 4 + 8) = iVar61;
                                piVar3 = (int *)((long)local_10a8 + lVar46 * 4);
                                *piVar3 = iVar8 + iVar63;
                                piVar3[1] = iVar70;
                                prVar33 = (rcIntArray *)local_10b8._0_8_;
                              }
                            }
                          }
                          iVar37 = iVar37 + 6;
                          piVar54 = piVar54 + 1;
                          piVar53 = piVar53 + 1;
                        } while (iVar37 != 0x18);
                      } while (iVar50 < (int)uVar62);
                    }
                    uVar62 = (ulong)uVar23;
                    fVar71 = *(float *)(param_3 + 0x34);
                    fVar77 = _LC1 / fVar71;
                    if (uVar23 == 0) {
                      auVar18._8_8_ = 0;
                      auVar18._0_8_ = uStack_10f0;
                      _local_10f8 = auVar18 << 0x40;
                      auVar19._8_8_ = 0;
                      auVar19._0_8_ = local_10d8._8_8_;
                      local_10d8 = auVar19 << 0x40;
                      fVar66 = (float)rcSqrt(_LC3);
                      uVar23 = 0;
                      uVar35 = 0;
                      uVar48 = 0;
                    }
                    else {
                      prVar33 = local_c48;
                      pfVar30 = pfVar26;
                      do {
                        prVar29 = prVar33 + 0xc;
                        *(float *)prVar33 = *pfVar30;
                        *(float *)(prVar33 + 4) = pfVar30[1];
                        *(float *)(prVar33 + 8) = pfVar30[2];
                        prVar33 = prVar29;
                        pfVar30 = pfVar30 + 3;
                      } while (local_c48 + (long)(int)uVar23 * 0xc != prVar29);
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = uStack_10f0;
                      _local_10f8 = auVar13 << 0x40;
                      lVar27 = 0;
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ = local_10d8._8_8_;
                      local_10d8 = auVar14 << 0x40;
                      fVar66 = _LC3;
                      do {
                        fVar80 = 0.0;
                        uVar32 = (long)((int)lVar27 + 1) % (long)(int)uVar62;
                        prVar33 = local_c48 + lVar27 * 0xc;
                        uVar56 = uVar32 & 0xffffffff;
                        prVar29 = local_c48 + (long)((int)uVar32 * 3) * 4;
                        uVar35 = 0;
                        do {
                          if (((uVar35 != (uint)lVar27) && ((uint)uVar56 != uVar35)) &&
                             (uVar35 = distancePtSeg2d((float *)(local_c48 + (ulong)(uVar35 * 3) * 4
                                                                ),(float *)prVar33,(float *)prVar29)
                             , prVar29 = extraout_RDX, fVar80 <= extraout_XMM0_Da)) {
                            fVar80 = extraout_XMM0_Da;
                          }
                          uVar35 = uVar35 + 1;
                          uVar48 = (uint)uVar62;
                        } while (uVar35 != uVar48);
                        lVar27 = lVar27 + 1;
                        if (fVar80 <= fVar66) {
                          fVar66 = fVar80;
                        }
                      } while (lVar27 != (int)uVar23);
                      fVar66 = (float)rcSqrt(fVar66);
                      uVar23 = uVar48;
                      if (0.0 < param_4) {
                        uVar35 = 0;
                        prVar33 = local_fd8;
                        pfVar30 = pfVar26;
                        uVar42 = uVar48 - 1;
                        uVar64 = 0;
                        do {
                          fVar80 = *pfVar30;
                          bVar12 = true;
                          fVar43 = pfVar30[2];
                          pfVar31 = pfVar26 + (int)(uVar42 * 3);
                          fVar79 = *pfVar31;
                          fVar67 = pfVar31[2];
                          fVar83 = fVar79 - fVar80;
                          pfVar28 = pfVar31;
                          pfVar40 = pfVar30;
                          fVar87 = fVar67;
                          if (_LC8 <= (float)((uint)fVar83 & (uint)_LC6)) {
                            if (fVar79 <= fVar80) goto LAB_00101fde;
                          }
                          else if (fVar67 <= fVar43) {
LAB_00101fde:
                            fVar83 = fVar80 - fVar79;
                            bVar12 = false;
                            pfVar28 = pfVar30;
                            pfVar40 = pfVar31;
                            fVar80 = fVar79;
                            fVar87 = fVar43;
                            fVar43 = fVar67;
                          }
                          fVar87 = fVar87 - fVar43;
                          fVar79 = pfVar40[1];
                          fVar85 = pfVar28[1] - fVar79;
                          fVar67 = SQRT(fVar83 * fVar83 + fVar87 * fVar87) / param_4;
                          if ((float)((uint)fVar67 & (uint)_LC6) < _LC5) {
                            fVar67 = (float)((uint)((float)(int)fVar67 -
                                                   (float)(-(uint)(fVar67 < (float)(int)fVar67) &
                                                          (uint)_LC1)) | ~(uint)_LC6 & (uint)fVar67)
                            ;
                          }
                          fVar75 = (float)((int)fVar67 + 1);
                          if (0x1f < (int)fVar67 + 1) {
                            fVar75 = 4.34403e-44;
                          }
                          if (0x7e < (int)((int)fVar75 + uVar23)) {
                            fVar75 = (float)(0x7e - uVar23);
                          }
                          if (-1 < (int)fVar75) {
                            iVar50 = 0;
                            fVar67 = *(float *)(param_3 + 0x38);
                            prVar29 = prVar33;
                            do {
                              fVar73 = (float)iVar50;
                              iVar50 = iVar50 + 1;
                              fVar73 = fVar73 / (float)(int)fVar75;
                              fVar72 = fVar85 * fVar73 + fVar79;
                              fVar74 = fVar73 * fVar87 + fVar43;
                              fVar73 = fVar73 * fVar83 + fVar80;
                              *(ulong *)(prVar29 + 4) = CONCAT44(fVar74,fVar72);
                              *(float *)prVar29 = fVar73;
                              uVar22 = getHeight(fVar73,fVar72,fVar74,fVar77,fVar67,0.0,iVar51,
                                                 (rcHeightPatch *)&local_1078);
                              *(float *)(prVar29 + 4) = (float)uVar22 * fVar67;
                              prVar29 = prVar29 + 0xc;
                            } while (iVar50 != (int)fVar75 + 1);
                          }
                          pfVar31 = local_1058;
                          for (lVar27 = 0x10; lVar27 != 0; lVar27 = lVar27 + -1) {
                            pfVar31[0] = 0.0;
                            pfVar31[1] = 0.0;
                            pfVar31 = pfVar31 + ((ulong)bVar65 * -2 + 1) * 2;
                          }
                          local_1058[1] = fVar75;
                          iVar58 = 0;
                          iVar60 = 1;
                          iVar50 = 2;
                          fVar80 = 0.0;
LAB_00102210:
                          fVar43 = (float)((int)fVar80 + 1);
                          lVar46 = (long)((int)fVar80 * 3);
                          lVar27 = (long)((int)fVar75 * 3);
                          prVar29 = prVar33 + lVar46 * 4;
                          if ((int)fVar75 <= (int)fVar43) {
LAB_001023ff:
                            iVar44 = iVar50 + -1;
                            iVar63 = iVar50;
                            iVar50 = iVar44;
                            iVar58 = iVar60;
                            if (iVar44 <= iVar60) goto LAB_0010250e;
LAB_0010240e:
                            iVar50 = iVar63;
                            iVar60 = iVar58 + 1;
                            fVar75 = local_1058[iVar60];
                            fVar80 = local_1058[iVar58];
                            goto LAB_00102210;
                          }
                          fVar80 = local_fd4[lVar46];
                          fVar87 = 0.0;
                          fVar83 = -NAN;
                          fVar79 = *(float *)(local_fd8 + lVar46 * 4);
                          fVar67 = local_fd4[lVar46 + 1];
                          fVar73 = local_fd4[lVar27] - fVar80;
                          fVar72 = *(float *)(local_fd8 + lVar27 * 4) - fVar79;
                          fVar85 = local_fd4[lVar27 + 1] - fVar67;
                          fVar74 = fVar72 * fVar72 + fVar73 * fVar73 + fVar85 * fVar85;
                          do {
                            fVar69 = (*(float *)(prVar29 + 0xc) - fVar79) * fVar72 +
                                     (*(float *)(prVar29 + 0x10) - fVar80) * fVar73 +
                                     (*(float *)(prVar29 + 0x14) - fVar67) * fVar85;
                            if (0.0 < fVar74) {
                              fVar69 = fVar69 / fVar74;
                            }
                            if (0.0 <= fVar69) {
                              fVar84 = fVar73;
                              fVar68 = fVar85;
                              fVar86 = fVar72;
                              if (fVar69 <= _LC1) {
                                fVar84 = fVar73 * fVar69;
                                fVar68 = fVar69 * fVar85;
                                fVar86 = fVar72 * fVar69;
                              }
                            }
                            else {
                              fVar84 = fVar73 * 0.0;
                              fVar68 = fVar85 * 0.0;
                              fVar86 = fVar72 * 0.0;
                            }
                            fVar86 = (fVar86 + fVar79) - *(float *)(prVar29 + 0xc);
                            fVar84 = (fVar84 + fVar80) - *(float *)(prVar29 + 0x10);
                            fVar69 = (fVar68 + fVar67) - *(float *)(prVar29 + 0x14);
                            fVar69 = fVar86 * fVar86 + fVar84 * fVar84 + fVar69 * fVar69;
                            if (fVar87 < fVar69) {
                              fVar83 = fVar43;
                              fVar87 = fVar69;
                            }
                            fVar43 = (float)((int)fVar43 + 1);
                            prVar29 = prVar29 + 0xc;
                          } while (fVar43 != fVar75);
                          if ((fVar83 == -NAN) || (fVar87 <= param_5 * param_5)) goto LAB_001023ff;
                          if (iVar58 < iVar50) {
                            uVar62 = (ulong)((iVar50 - iVar58) - 1);
                            memmove(local_1058 + ((long)iVar50 - uVar62),
                                    local_1058 + (long)iVar50 + (-1 - uVar62),uVar62 * 4 + 4);
                            local_1058[iVar60] = fVar83;
                            iVar63 = iVar50 + 1;
                            if (iVar50 <= iVar58) goto LAB_0010250e;
                            goto LAB_0010240e;
                          }
                          local_1058[iVar60] = fVar83;
                          iVar63 = iVar50 + 1;
LAB_0010250e:
                          lVar27 = (long)(int)uVar35;
                          *(uint *)(local_e48 + lVar27 * 4) = uVar42;
                          uVar42 = uVar35 + 1;
                          if (bVar12) {
                            if (2 < iVar63) {
                              lVar41 = (long)(int)uVar23;
                              uVar42 = iVar63 - 3;
                              pfVar31 = local_1058 + iVar63;
                              prVar29 = local_c48 + (long)(int)(uVar23 * 3) * 4;
                              lVar46 = lVar41 + 1;
                              lVar55 = lVar41;
                              while( true ) {
                                lVar57 = lVar46;
                                fVar80 = pfVar31[-2];
                                *(int *)(local_e48 + lVar55 * 4 + (lVar27 - lVar41) * 4 + 4) =
                                     (int)lVar55;
                                pfVar31 = pfVar31 + -1;
                                lVar46 = (long)((int)fVar80 * 3);
                                *(ulong *)prVar29 =
                                     CONCAT44(local_fd4[lVar46],
                                              *(undefined4 *)(local_fd8 + lVar46 * 4));
                                *(float *)(prVar29 + 8) = local_fd4[lVar46 + 1];
                                if (lVar57 == (ulong)uVar42 + lVar41 + 1) break;
                                prVar29 = prVar29 + 0xc;
                                lVar46 = lVar57 + 1;
                                lVar55 = lVar57;
                              }
                              uVar23 = uVar23 + 1 + uVar42;
                              uVar42 = uVar35 + 2 + uVar42;
                            }
                          }
                          else if (1 < iVar50) {
                            lVar41 = (long)(int)uVar23;
                            lVar46 = lVar41;
                            prVar29 = local_c48 + (long)(int)(uVar23 * 3) * 4;
                            lVar55 = lVar41 + 1;
                            while( true ) {
                              fVar80 = local_1058[(lVar46 - lVar41) + 1];
                              *(int *)(local_e48 + lVar46 * 4 + lVar41 * -4 + lVar27 * 4 + 4) =
                                   (int)lVar46;
                              lVar46 = (long)((int)fVar80 * 3);
                              *(ulong *)prVar29 =
                                   CONCAT44(local_fd4[lVar46],
                                            *(undefined4 *)(local_fd8 + lVar46 * 4));
                              *(float *)(prVar29 + 8) = local_fd4[lVar46 + 1];
                              if ((ulong)(iVar50 - 2) + lVar41 + 1 == lVar55) break;
                              lVar46 = lVar55;
                              prVar29 = prVar29 + 0xc;
                              lVar55 = lVar55 + 1;
                            }
                            uVar23 = (uVar23 - 1) + iVar50;
                            uVar42 = uVar35 + iVar50;
                          }
                          uVar35 = uVar42;
                          pfVar30 = pfVar30 + 3;
                          uVar24 = uVar64 + 1;
                          uVar42 = uVar64;
                          uVar64 = uVar24;
                        } while (uVar24 != uVar48);
                      }
                      else {
                        uVar35 = 0;
                      }
                    }
                    iVar50 = (int)local_e48;
                    iVar58 = (int)local_c48;
                    iVar60 = (int)(rcVectorBase<int,(rcAllocHint)1> *)local_10d8;
                    if (fVar66 < param_4 + param_4) {
                      triangulateHull(iVar58,(float *)(ulong)uVar35,iVar50,(int *)(ulong)uVar48,
                                      iVar60,prVar33);
LAB_00103d7c:
                      iVar50 = local_10d8._0_4_;
                      iVar58 = iVar50;
                      if (iVar50 < 0) {
                        iVar58 = iVar50 + 3;
                      }
                      uVar35 = iVar58 >> 2;
                    }
                    else {
                      triangulateHull(iVar58,(float *)(ulong)uVar35,iVar50,(int *)(ulong)uVar48,
                                      iVar60,prVar33);
                      iVar50 = local_10d8._0_4_;
                      if (iVar50 == 0) {
                        rcContext::log(param_1,2,
                                       "buildPolyDetail: Could not triangulate polygon (%d verts).",
                                       uVar23);
                        goto LAB_00103d7c;
                      }
                      if (0.0 < param_4) {
                        fVar66 = *pfVar26;
                        fVar80 = pfVar26[1];
                        fVar43 = pfVar26[2];
                        fVar79 = fVar80;
                        fVar67 = fVar43;
                        fVar87 = fVar66;
                        if (1 < (int)uVar48) {
                          auVar76 = ZEXT416((uint)fVar66);
                          pfVar30 = pfVar26 + 3;
                          do {
                            fVar87 = *pfVar30;
                            fVar83 = pfVar30[1];
                            pfVar31 = pfVar30 + 3;
                            fVar85 = pfVar30[2];
                            if (fVar87 <= fVar66) {
                              fVar66 = fVar87;
                            }
                            if (fVar83 <= fVar80) {
                              fVar80 = fVar83;
                            }
                            if (fVar85 <= fVar67) {
                              fVar67 = fVar85;
                            }
                            if (auVar76._0_4_ <= fVar87) {
                              auVar76._0_4_ = fVar87;
                            }
                            if (fVar79 <= fVar83) {
                              fVar79 = fVar83;
                            }
                            if (fVar43 <= fVar85) {
                              fVar43 = fVar85;
                            }
                            pfVar30 = pfVar31;
                            fVar87 = auVar76._0_4_;
                          } while (pfVar31 != pfVar26 + (ulong)(uVar48 - 2) * 3 + 6);
                        }
                        fVar66 = fVar66 / param_4;
                        if ((float)((uint)fVar66 & (uint)_LC6) < _LC5) {
                          fVar66 = (float)((uint)((float)(int)fVar66 -
                                                 (float)(-(uint)(fVar66 < (float)(int)fVar66) &
                                                        (uint)_LC1)) | ~(uint)_LC6 & (uint)fVar66);
                        }
                        fVar87 = fVar87 / param_4;
                        if ((float)((uint)fVar87 & (uint)_LC6) < _LC5) {
                          fVar87 = (float)((uint)((float)(int)fVar87 +
                                                 (float)(-(uint)((float)(int)fVar87 < fVar87) &
                                                        (uint)_LC1)) | ~(uint)_LC6 & (uint)fVar87);
                        }
                        fVar67 = fVar67 / param_4;
                        fVar83 = _LC6;
                        if ((float)((uint)fVar67 & (uint)_LC6) < _LC5) {
                          fVar83 = (float)(~(uint)_LC6 & (uint)fVar67);
                          fVar67 = (float)((uint)((float)(int)fVar67 -
                                                 (float)(-(uint)(fVar67 < (float)(int)fVar67) &
                                                        (uint)_LC1)) | (uint)fVar83);
                        }
                        fVar43 = fVar43 / param_4;
                        uVar42 = (uint)fVar67;
                        if ((float)((uint)fVar43 & (uint)_LC6) < _LC5) {
                          fVar83 = (float)(-(uint)((float)(int)fVar43 < fVar43) & (uint)_LC1);
                          fVar43 = (float)((uint)((float)(int)fVar43 + fVar83) |
                                          ~(uint)_LC6 & (uint)fVar43);
                        }
                        auVar15._8_8_ = 0;
                        auVar15._0_8_ = uStack_1090;
                        _local_1098 = auVar15 << 0x40;
                        if ((int)fVar43 <= (int)uVar42) goto LAB_00103e0e;
                        fVar67 = param_4;
                        do {
                          if ((int)fVar66 < (int)fVar87) {
                            fVar85 = (fVar80 + fVar79) * __LC24;
                            fVar75 = (float)(int)uVar42 * fVar67;
                            uVar64 = (int)fVar66;
                            do {
                              local_1058[2] = fVar75;
                              fVar73 = (float)(int)uVar64 * fVar67;
                              local_1058[0] = fVar73;
                              if (uVar48 != 0) {
                                uVar62 = 0;
                                uVar52 = 0;
                                pfVar30 = local_1058;
                                pfVar31 = pfVar26;
                                auVar81 = ZEXT416((uint)pfVar26[(long)(int)((uVar48 - 1) * 3) + 2]);
                                fVar72 = _LC3;
                                uVar24 = uVar48 - 1;
                                do {
                                  fVar74 = pfVar31[2];
                                  auVar82 = ZEXT416((uint)fVar74);
                                  iVar50 = uVar24 * 3;
                                  if (fVar75 < fVar74 != fVar75 < auVar81._0_4_) {
                                    uVar24 = (uint)uVar62;
                                    uVar62 = uVar62 & 0xffffffff;
                                    if (fVar73 < ((fVar75 - fVar74) * (pfVar26[iVar50] - *pfVar31))
                                                 / (auVar81._0_4_ - fVar74) + *pfVar31) {
                                      uVar62 = (ulong)(uVar24 ^ 1);
                                    }
                                  }
                                  uVar24 = uVar52;
                                  pfVar31 = (float *)distancePtSeg2d(pfVar30,pfVar26 + iVar50,
                                                                     pfVar31);
                                  uVar52 = uVar24 + 1;
                                  if (extraout_XMM0_Da_00 <= fVar72) {
                                    fVar72 = extraout_XMM0_Da_00;
                                  }
                                  auVar81 = auVar82;
                                } while (uVar52 != uVar48);
                                if ((int)uVar62 != 0) {
                                  fVar72 = (float)((uint)fVar72 ^ _LC25);
                                }
                                if (fVar72 <= (float)(_LC25 ^ (uint)fVar67) * __LC24) {
                                  local_10fc = uVar64;
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            (local_1098,(int *)&local_10fc);
                                  uVar22 = getHeight(fVar73,fVar85,fVar75,fVar77,
                                                     *(float *)(param_3 + 0x38),fVar83,iVar51,
                                                     (rcHeightPatch *)&local_1078);
                                  local_10fc = (uint)uVar22;
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            (local_1098,(int *)&local_10fc);
                                  local_10fc = uVar42;
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            (local_1098,(int *)&local_10fc);
                                  local_10fc = 0;
                                  rcVectorBase<int,(rcAllocHint)1>::push_back
                                            (local_1098,(int *)&local_10fc);
                                }
                              }
                              uVar64 = uVar64 + 1;
                            } while ((int)fVar87 != uVar64);
                          }
                          uVar42 = uVar42 + 1;
                        } while ((int)fVar43 != uVar42);
                        iVar60 = SUB164(_local_1098,0);
                        iVar58 = iVar60 + 3;
                        if (-1 < iVar60) {
                          iVar58 = iVar60;
                        }
                        iVar50 = local_10d8._0_4_;
                        if ((iVar60 < 4) || (0x7e < (int)uVar23)) {
                          uVar62 = (long)((ulong)(uint)(iVar50 >> 0x1f) << 0x20 |
                                         local_10d8._0_8_ & 0xffffffff) / 4 & 0xffffffff;
                        }
                        else {
                          iVar60 = 0;
                          local_1200 = (long)(int)(uVar23 + 1);
                          local_11f8 = local_c48 + (long)(int)(uVar23 * 3) * 4;
                          iVar44 = iVar50 + 3;
                          uVar32 = local_10d8._0_8_;
                          while( true ) {
                            iVar50 = (int)uVar32;
                            iVar63 = -1;
                            uVar42 = (uint)local_1200;
                            iVar36 = iVar50;
                            if (iVar50 < 0) {
                              iVar36 = iVar44;
                            }
                            uVar59 = 0;
                            uVar22 = 0;
                            local_1218 = 0;
                            iVar44 = 0;
                            uVar62 = (ulong)(uint)(iVar36 >> 2);
                            fVar77 = 0.0;
                            fVar66 = 0.0;
                            piVar53 = local_1088;
                            do {
                              if (piVar53[3] == 0) {
                                fVar43 = (((float)uVar22 / __LC26 + (float)uVar22 / __LC26) - _LC1)
                                         * fVar71 * _LC27 + (float)*piVar53 * param_4;
                                fVar80 = (((float)uVar59 / __LC26 + (float)uVar59 / __LC26) - _LC1)
                                         * fVar71 * _LC27 + (float)piVar53[2] * param_4;
                                if (3 < iVar50) {
                                  iVar37 = 0;
                                  piVar54 = local_10c8;
                                  fVar79 = _LC3;
                                  do {
                                    lVar27 = (long)(*piVar54 * 3);
                                    fVar67 = *(float *)(local_c48 + lVar27 * 4);
                                    fVar87 = afStack_c44[lVar27 + 1];
                                    lVar46 = (long)(piVar54[1] * 3);
                                    fVar74 = fVar43 - fVar67;
                                    fVar75 = fVar80 - fVar87;
                                    lVar55 = (long)(piVar54[2] * 3);
                                    fVar83 = *(float *)(local_c48 + lVar46 * 4) - fVar67;
                                    fVar85 = afStack_c44[lVar46 + 1] - fVar87;
                                    fVar67 = *(float *)(local_c48 + lVar55 * 4) - fVar67;
                                    fVar87 = afStack_c44[lVar55 + 1] - fVar87;
                                    fVar73 = fVar67 * fVar67 + fVar87 * fVar87;
                                    fVar72 = fVar87 * fVar85 + fVar67 * fVar83;
                                    fVar87 = fVar67 * fVar74 + fVar87 * fVar75;
                                    fVar67 = fVar83 * fVar83 + fVar85 * fVar85;
                                    fVar85 = fVar83 * fVar74 + fVar85 * fVar75;
                                    fVar75 = _LC1 / (fVar73 * fVar67 - fVar72 * fVar72);
                                    fVar83 = (fVar67 * fVar87 - fVar72 * fVar85) * fVar75;
                                    fVar67 = _LC3;
                                    if (((__LC28 <= fVar83) &&
                                        (fVar75 = (fVar73 * fVar85 - fVar72 * fVar87) * fVar75,
                                        __LC28 <= fVar75)) && (fVar83 + fVar75 <= _LC29)) {
                                      fVar67 = afStack_c44[lVar27];
                                      fVar67 = (float)((uint)(((afStack_c44[lVar55] - fVar67) *
                                                               fVar83 + fVar67 +
                                                              (afStack_c44[lVar46] - fVar67) *
                                                              fVar75) -
                                                             (float)piVar53[1] *
                                                             *(float *)(param_3 + 0x38)) &
                                                      (uint)_LC6);
                                    }
                                    if (fVar79 <= fVar67) {
                                      fVar67 = fVar79;
                                    }
                                    iVar37 = iVar37 + 1;
                                    piVar54 = piVar54 + 4;
                                    fVar79 = fVar67;
                                  } while (iVar37 < iVar36 >> 2);
                                  if (((fVar67 != _LC3) && (0.0 <= fVar67)) && (fVar77 < fVar67)) {
                                    local_1218 = CONCAT44((float)piVar53[1] *
                                                          *(float *)(param_3 + 0x38),fVar43);
                                    fVar77 = fVar67;
                                    iVar63 = iVar44;
                                    fVar66 = fVar80;
                                  }
                                }
                              }
                              iVar44 = iVar44 + 1;
                              piVar53 = piVar53 + 4;
                              uVar22 = uVar22 + 0xb343;
                              uVar59 = uVar59 + 0x3841;
                            } while (iVar44 < iVar58 >> 2);
                            uVar23 = uVar42 - 1;
                            if ((fVar77 <= param_5) || (iVar63 == -1)) break;
                            lVar27 = 0;
                            iVar50 = uVar42 * 10;
                            local_1088[iVar63 * 4 + 3] = 1;
                            auVar16._8_8_ = 0;
                            auVar16._0_8_ = uStack_10f0;
                            _local_10f8 = auVar16 << 0x40;
                            *(long *)local_11f8 = local_1218;
                            *(float *)(local_11f8 + 8) = fVar66;
                            auVar17._8_8_ = 0;
                            auVar17._0_8_ = local_10d8._8_8_;
                            local_10d8 = auVar17 << 0x40;
                            local_1100 = 0;
                            local_10fc = 0;
                            uVar88 = 0x1036b7;
                            rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                      (local_10f8,local_1200 * 0x28,(int *)0x0);
                            iVar44 = uVar35 - 1;
                            if (0 < (int)uVar35) {
                              do {
                                lVar46 = (long)iVar44;
                                iVar44 = (int)lVar27;
                                puVar49 = (uint *)((long)local_e48 + lVar27 * 4);
                                lVar27 = lVar27 + 1;
                                addEdge(param_1,local_10e8,(int *)&local_10fc,iVar50,
                                        *(int *)(local_e48 + lVar46 * 4),*puVar49,-2,(int)uVar88);
                              } while (lVar27 != (int)uVar35);
                            }
                            uVar23 = local_10fc;
                            lVar27 = 8;
                            iVar44 = 0;
                            if ((int)local_10fc < 1) {
                              uVar64 = local_1100 * 4;
                              rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                        ((rcVectorBase<int,(rcAllocHint)1> *)local_10d8,
                                         (long)(int)uVar64,(int *)0x0);
                              if (0 < (int)uVar64) {
LAB_00103835:
                                memset(local_10c8,0xff,(ulong)uVar64 << 2);
                                goto LAB_00103854;
                              }
                            }
                            else {
                              do {
                                if (*(int *)((long)local_10e8 + lVar27) == -1) {
                                  completeFacet(param_1,(float *)local_c48,uVar42,local_10e8,
                                                (int *)&local_10fc,iVar50,&local_1100,iVar44);
                                  iVar63 = *(int *)((long)local_10e8 + lVar27 + 4);
                                }
                                else {
                                  iVar63 = *(int *)((long)local_10e8 + lVar27 + 4);
                                }
                                if (iVar63 == -1) {
                                  completeFacet(param_1,(float *)local_c48,uVar42,local_10e8,
                                                (int *)&local_10fc,iVar50,&local_1100,iVar44);
                                }
                                uVar23 = local_10fc;
                                iVar44 = iVar44 + 1;
                                lVar27 = lVar27 + 0x10;
                              } while (iVar44 < (int)local_10fc);
                              uVar64 = local_1100 * 4;
                              rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                        ((rcVectorBase<int,(rcAllocHint)1> *)local_10d8,
                                         (long)(int)uVar64,(int *)0x0);
                              if (0 < (int)uVar64) goto LAB_00103835;
LAB_00103854:
                              if (0 < (int)uVar23) {
                                piVar53 = local_10e8;
                                do {
                                  while( true ) {
                                    if (-1 < piVar53[3]) {
                                      iVar50 = *piVar53;
                                      piVar54 = local_10c8 + (piVar53[3] << 2);
                                      if (*piVar54 == -1) {
                                        *piVar54 = iVar50;
                                        piVar54[1] = piVar53[1];
                                      }
                                      else if (*piVar54 == piVar53[1]) {
                                        piVar54[2] = iVar50;
                                      }
                                      else if (piVar54[1] == iVar50) {
                                        piVar54[2] = piVar53[1];
                                      }
                                    }
                                    if (-1 < piVar53[2]) break;
LAB_001038c8:
                                    piVar53 = piVar53 + 4;
                                    if (piVar53 == local_10e8 + (long)(int)uVar23 * 4)
                                    goto LAB_00103911;
                                  }
                                  iVar50 = piVar53[1];
                                  piVar54 = local_10c8 + (piVar53[2] << 2);
                                  if (*piVar54 != -1) {
                                    if (*piVar54 == *piVar53) {
                                      piVar54[2] = iVar50;
                                    }
                                    else if (piVar54[1] == iVar50) {
                                      piVar54[2] = *piVar53;
                                    }
                                    goto LAB_001038c8;
                                  }
                                  *piVar54 = iVar50;
                                  iVar50 = *piVar53;
                                  piVar53 = piVar53 + 4;
                                  piVar54[1] = iVar50;
                                } while (piVar53 != local_10e8 + (long)(int)uVar23 * 4);
                              }
                            }
LAB_00103911:
                            iVar50 = local_10d8._0_4_;
                            uVar32 = local_10d8._0_8_;
                            if (iVar50 < 4) {
                              iVar44 = iVar50 + 3;
                              iVar63 = iVar50;
                              if (iVar50 < 0) {
                                iVar63 = iVar44;
                              }
                              uVar23 = iVar63 >> 2;
                            }
                            else {
                              iVar63 = 0;
                              do {
                                piVar53 = local_10c8 + iVar63 * 4;
                                if (((*piVar53 == -1) || (piVar53[1] == -1)) || (piVar53[2] == -1))
                                {
                                  rcContext::log(param_1,2,
                                                 "delaunayHull: Removing dangling face %d [%d,%d,%d]."
                                                 ,iVar63,*piVar53,piVar53[1],piVar53[2]);
                                  lVar27 = (long)(local_10d8._0_4_ + -4);
                                  *piVar53 = local_10c8[lVar27];
                                  piVar53[1] = local_10c8[lVar27 + 1];
                                  piVar53[2] = local_10c8[lVar27 + 2];
                                  piVar53[3] = local_10c8[lVar27 + 3];
                                  rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                            ((rcVectorBase<int,(rcAllocHint)1> *)local_10d8,lVar27,
                                             (int *)0x0);
                                  uVar32 = local_10d8._0_8_;
                                }
                                else {
                                  iVar63 = iVar63 + 1;
                                }
                                iVar50 = (int)uVar32;
                                iVar44 = iVar50 + 3;
                                iVar36 = iVar50;
                                if (iVar50 < 0) {
                                  iVar36 = iVar44;
                                }
                                uVar23 = iVar36 >> 2;
                              } while (iVar63 < (int)uVar23);
                            }
                            uVar62 = (ulong)uVar23;
                            iVar60 = iVar60 + 1;
                            local_1200 = local_1200 + 1;
                            local_11f8 = local_11f8 + 0xc;
                            uVar23 = uVar42;
                            if ((iVar58 >> 2 <= iVar60) || (0x7e < (int)uVar42)) break;
                          }
                        }
                        uVar35 = (uint)uVar62;
                      }
                      else {
LAB_00103e0e:
                        iVar58 = iVar50 + 3;
                        if (-1 < iVar50) {
                          iVar58 = iVar50;
                        }
                        uVar35 = iVar58 >> 2;
                        uVar62 = (ulong)uVar35;
                      }
                      if (0x3ff < iVar50) {
                        rcVectorBase<int,(rcAllocHint)1>::resize_impl
                                  ((rcVectorBase<int,(rcAllocHint)1> *)local_10d8,0x3fc,(int *)0x0);
                        rcContext::log(param_1,3,
                                       "rcBuildPolyMeshDetail: Shrinking triangle count from %d to max %d."
                                       ,uVar62);
                        goto LAB_00103d7c;
                      }
                    }
                    if (0 < (int)uVar23) {
                      fVar71 = *(float *)(param_2 + 0x3c);
                      fVar77 = *(float *)(param_3 + 0x38);
                      fVar66 = *(float *)(param_2 + 0x38);
                      fVar80 = *(float *)(param_2 + 0x40);
                      prVar33 = local_c48;
                      do {
                        prVar29 = prVar33 + 0xc;
                        *(ulong *)prVar33 =
                             CONCAT44((float)((ulong)*(undefined8 *)prVar33 >> 0x20) +
                                      fVar71 + fVar77,(float)*(undefined8 *)prVar33 + fVar66);
                        *(float *)(prVar33 + 8) = *(float *)(prVar33 + 8) + fVar80;
                        prVar33 = prVar29;
                      } while (prVar29 != local_c48 + (long)(int)uVar23 * 0xc);
                    }
                    if (uVar48 != 0) {
                      pfVar30 = pfVar26;
                      do {
                        pfVar31 = pfVar30 + 3;
                        *pfVar30 = *pfVar30 + *(float *)(param_2 + 0x38);
                        pfVar30[1] = pfVar30[1] + *(float *)(param_2 + 0x3c);
                        pfVar30[2] = pfVar30[2] + *(float *)(param_2 + 0x40);
                        pfVar30 = pfVar31;
                      } while (pfVar31 != pfVar26 + (long)(int)uVar48 * 3);
                    }
                    lVar27 = *(long *)param_6;
                    *(undefined4 *)(lVar27 + local_1168) = *(undefined4 *)(param_6 + 0x1c);
                    *(uint *)(lVar27 + local_1168 + 4) = uVar23;
                    *(undefined4 *)(lVar27 + local_1168 + 8) = *(undefined4 *)(param_6 + 0x20);
                    *(uint *)(lVar27 + local_1168 + 0xc) = uVar35;
                    if (local_1174 < (int)(*(int *)(param_6 + 0x1c) + uVar23)) {
                      local_1174 = local_1174 + 0x100 +
                                   (((*(int *)(param_6 + 0x1c) + uVar23) - local_1174) - 1 &
                                   0xffffff00);
                      pvVar34 = (void *)rcAlloc((long)local_1174 * 0xc,0);
                      if (pvVar34 == (void *)0x0) {
                        rVar47 = (rcContext)0x0;
                        rcContext::log(param_1,3,
                                       "rcBuildPolyMeshDetail: Out of memory \'newv\' (%d).",
                                       local_1174 * 3);
                        goto LAB_00103d56;
                      }
                      if (*(int *)(param_6 + 0x1c) != 0) {
                        memcpy(pvVar34,*(void **)(param_6 + 8),(long)*(int *)(param_6 + 0x1c) * 0xc)
                        ;
                      }
                      rcFree(*(void **)(param_6 + 8));
                      *(void **)(param_6 + 8) = pvVar34;
                    }
                    if (0 < (int)uVar23) {
                      iVar58 = *(int *)(param_6 + 0x1c);
                      prVar33 = local_c48;
                      pfVar30 = (float *)(*(long *)(param_6 + 8) + (long)(iVar58 * 3) * 4);
                      do {
                        prVar29 = prVar33 + 0xc;
                        *pfVar30 = *(float *)prVar33;
                        pfVar30[1] = *(float *)(prVar33 + 4);
                        pfVar30[2] = *(float *)(prVar33 + 8);
                        prVar33 = prVar29;
                        pfVar30 = pfVar30 + 3;
                      } while (prVar29 != local_c48 + (long)(int)uVar23 * 0xc);
                      *(uint *)(param_6 + 0x1c) = uVar23 + iVar58;
                    }
                    if (local_1170 < (int)(*(int *)(param_6 + 0x20) + uVar35)) {
                      local_1170 = local_1170 + 0x100 +
                                   (((*(int *)(param_6 + 0x20) + uVar35) - local_1170) - 1 &
                                   0xffffff00);
                      pvVar34 = (void *)rcAlloc((long)local_1170 << 2,0);
                      if (pvVar34 == (void *)0x0) {
                        rVar47 = (rcContext)0x0;
                        rcContext::log(param_1,3,
                                       "rcBuildPolyMeshDetail: Out of memory \'newt\' (%d).",
                                       local_1170 * 4);
                        goto LAB_00103d56;
                      }
                      if (*(int *)(param_6 + 0x20) != 0) {
                        memcpy(pvVar34,*(void **)(param_6 + 0x10),(long)*(int *)(param_6 + 0x20) * 4
                              );
                      }
                      rcFree(*(void **)(param_6 + 0x10));
                      *(void **)(param_6 + 0x10) = pvVar34;
                    }
                    if (3 < iVar50) {
                      lVar27 = 0;
                      iVar50 = *(int *)(param_6 + 0x20);
                      do {
                        piVar53 = local_10c8 + lVar27 * 4;
                        lVar27 = lVar27 + 1;
                        *(char *)(*(long *)(param_6 + 0x10) + (long)(iVar50 << 2)) = (char)*piVar53;
                        *(char *)(*(long *)(param_6 + 0x10) + 1 +
                                 (long)(*(int *)(param_6 + 0x20) << 2)) = (char)piVar53[1];
                        *(char *)(*(long *)(param_6 + 0x10) + 2 +
                                 (long)(*(int *)(param_6 + 0x20) << 2)) = (char)piVar53[2];
                        prVar33 = local_c48 + (long)(piVar53[2] * 3) * 4;
                        prVar29 = local_c48 + (long)(piVar53[1] * 3) * 4;
                        lVar46 = *(long *)(param_6 + 0x10);
                        prVar4 = local_c48 + (long)(*piVar53 * 3) * 4;
                        iVar50 = *(int *)(param_6 + 0x20);
                        bVar21 = getEdgeFlags((float *)prVar4,(float *)prVar29,pfVar26,uVar48);
                        iVar58 = getEdgeFlags((float *)prVar29,(float *)prVar33,pfVar26,uVar48);
                        iVar60 = getEdgeFlags((float *)prVar33,(float *)prVar4,pfVar26,uVar48);
                        *(byte *)(lVar46 + 3 + (long)(iVar50 << 2)) =
                             (byte)(iVar58 << 2) | (byte)(iVar60 << 4) | bVar21;
                        iVar50 = *(int *)(param_6 + 0x20) + 1;
                        *(int *)(param_6 + 0x20) = iVar50;
                      } while ((int)lVar27 < (int)uVar35);
                    }
                    local_1180 = local_1180 + 1;
                    local_1150 = local_1150 + (long)(int)(uVar6 * 2) * 2;
                    local_1168 = local_1168 + 0x10;
                  } while ((int)local_1180 < *(int *)(param_2 + 0x2c));
                }
                rVar47 = (rcContext)0x1;
              }
            }
          }
        }
      }
LAB_00103d56:
      rcFree(pfVar26);
    }
    rcFree(puVar25);
    rcFree(local_1078);
    rcFree(local_1088);
    rcFree(local_10a8);
    rcFree(local_10c8);
    rcFree(local_10e8);
LAB_00101416:
    if (param_1[9] == (rcContext)0x0) goto LAB_0010143b;
    lVar27 = *(long *)param_1;
  }
  else {
    lVar27 = *(long *)param_1;
    if (*(code **)(lVar27 + 0x28) != rcContext::doStartTimer) {
      (**(code **)(lVar27 + 0x28))(param_1,0x1a);
      if (*(int *)(param_2 + 0x28) != 0) goto LAB_00101402;
LAB_00101411:
      rVar47 = (rcContext)0x1;
      goto LAB_00101416;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
LAB_00101402:
      if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00101489;
      goto LAB_00101411;
    }
  }
  if (*(code **)(lVar27 + 0x30) != rcContext::doStopTimer) {
    (**(code **)(lVar27 + 0x30))(param_1,0x1a);
  }
LAB_0010143b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar47;
  while( true ) {
    iVar36 = iVar36 + 6;
    piVar54 = piVar54 + 1;
    piVar53 = piVar53 + 1;
    if (iVar36 == 0x18) break;
LAB_00101ba8:
    uVar35 = (int)(*(uint *)(puVar45 + 2) & 0xffffff) >> ((byte)iVar36 & 0x1f) & 0x3f;
    if ((uVar35 != 0x3f) &&
       (sVar5 != *(short *)(lVar55 + 2 +
                           (long)(int)((*(uint *)(lVar46 + (long)((iVar58 + *piVar53) * iVar44 +
                                                                 *piVar54 + iVar63) * 4) & 0xffffff)
                                      + uVar35) * 8))) {
      rcVectorBase<int,(rcAllocHint)1>::resize_impl
                ((rcVectorBase<int,(rcAllocHint)1> *)local_10b8,(long)(local_10b8._0_4_ + 3),
                 (int *)0x0);
      lVar46 = (long)(local_10b8._0_4_ + -3) * 4;
      *(int *)((long)local_10a8 + (long)(local_10b8._0_4_ + -3) * 4) = iVar63;
      *(int *)((long)local_10a8 + lVar46 + 4) = iVar58;
      *(uint *)((long)local_10a8 + lVar46 + 8) = uVar48;
      iVar50 = local_1070._8_4_;
      break;
    }
  }
  bVar12 = false;
LAB_00101bfe:
  iVar60 = iVar60 + 1;
  if (iVar50 <= iVar60) goto LAB_00101c0b;
  goto LAB_00101b08;
}



/* rcContext::doStartTimer(rcTimerLabel) */

void rcContext::doStartTimer(void)

{
  return;
}



/* rcContext::doStopTimer(rcTimerLabel) */

void rcContext::doStopTimer(void)

{
  return;
}



/* rcVectorBase<int, (rcAllocHint)1>::push_back(int const&) */

void __thiscall
rcVectorBase<int,(rcAllocHint)1>::push_back(rcVectorBase<int,(rcAllocHint)1> *this,int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)this;
  lVar5 = *(long *)(this + 8);
  if (lVar1 < lVar5) {
    *(long *)this = lVar1 + 1;
    *(int *)(*(long *)(this + 0x10) + lVar1 * 4) = *param_1;
    return;
  }
  if (lVar5 < 0x3fffffffffffffff) {
    lVar6 = lVar5 + 1;
    if (lVar5 + 1 <= lVar5 * 2) {
      lVar6 = lVar5 * 2;
    }
    lVar1 = lVar6 * 4;
  }
  else {
    lVar1 = -4;
    lVar6 = 0x7fffffffffffffff;
  }
  lVar1 = rcAlloc(lVar1,1);
  if (lVar1 == 0) {
    lVar3 = *(long *)this;
    pvVar4 = *(void **)(this + 0x10);
    lVar5 = lVar3 * 4;
  }
  else {
    lVar3 = *(long *)this;
    pvVar4 = *(void **)(this + 0x10);
    lVar5 = lVar3 * 4;
    if (0 < lVar5) {
      lVar2 = 0;
      do {
        *(undefined4 *)(lVar1 + lVar2 * 4) = *(undefined4 *)((long)pvVar4 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 < lVar5 >> 2);
    }
  }
  *(int *)(lVar1 + lVar5) = *param_1;
  *(long *)(this + 8) = lVar6;
  *(long *)this = lVar3 + 1;
  rcFree(pvVar4);
  *(long *)(this + 0x10) = lVar1;
  return;
}



/* rcVectorBase<int, (rcAllocHint)1>::resize_impl(long, int const*) */

void __thiscall
rcVectorBase<int,(rcAllocHint)1>::resize_impl
          (rcVectorBase<int,(rcAllocHint)1> *this,long param_1,int *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  lVar3 = *(long *)this;
  if (lVar3 <= param_1) {
    if (param_1 <= lVar3) {
      return;
    }
    lVar1 = *(long *)(this + 8);
    if (lVar1 < param_1) {
      if (lVar1 < 0x3fffffffffffffff) {
        lVar6 = lVar1 * 2;
        if (lVar1 * 2 < param_1) {
          lVar6 = param_1;
        }
        lVar3 = lVar6 * 4;
      }
      else {
        lVar3 = -4;
        lVar6 = 0x7fffffffffffffff;
      }
      lVar3 = rcAlloc(lVar3,1);
      pvVar2 = *(void **)(this + 0x10);
      if ((lVar3 != 0) && (lVar1 = *(long *)this, 0 < lVar1 << 2)) {
        lVar4 = 0;
        do {
          *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)((long)pvVar2 + lVar4 * 4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (lVar1 << 2) >> 2);
      }
      if (param_2 != (int *)0x0) {
        for (piVar5 = (int *)(lVar3 + *(long *)this * 4); piVar5 < (int *)(lVar3 + param_1 * 4);
            piVar5 = piVar5 + 1) {
          *piVar5 = *param_2;
        }
      }
      rcFree(pvVar2);
      *(long *)(this + 0x10) = lVar3;
      *(long *)(this + 8) = lVar6;
    }
    else if (param_2 != (int *)0x0) {
      lVar1 = *(long *)(this + 0x10);
      for (piVar5 = (int *)(lVar1 + lVar3 * 4); piVar5 < (int *)(lVar1 + param_1 * 4);
          piVar5 = piVar5 + 1) {
        *piVar5 = *param_2;
      }
    }
  }
  *(long *)this = param_1;
  return;
}



