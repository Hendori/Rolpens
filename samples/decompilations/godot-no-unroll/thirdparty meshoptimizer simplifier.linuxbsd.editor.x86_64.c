
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt::rescalePositions(meshopt::Vector3*, float const*, unsigned long, unsigned long, unsigned
   int const*) */

void meshopt::rescalePositions
               (Vector3 *param_1,float *param_2,ulong param_3,ulong param_4,uint *param_5)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  Vector3 *pVVar4;
  Vector3 *pVVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = _LC0;
  local_40 = CONCAT44(_UNK_001051f4,_LC0);
  local_28 = (float)_LC1;
  local_30 = CONCAT44(_LC1._4_4_,(float)_LC1);
  if (param_3 == 0) {
    fVar8 = (float)_LC1;
    fVar7 = (float)_LC1 - _LC0;
    fVar9 = _LC0;
    fVar10 = _LC0;
    if (0.0 <= (float)_LC1 - _LC0) goto LAB_0010011a;
LAB_001001e8:
    fVar7 = 0.0;
  }
  else {
    uVar6 = 0;
    pVVar5 = param_1;
    do {
      uVar2 = uVar6 & 0xffffffff;
      if (param_5 != (uint *)0x0) {
        uVar2 = (ulong)param_5[uVar6];
      }
      pfVar1 = param_2 + uVar2 * (param_4 >> 2);
      if (param_1 != (Vector3 *)0x0) {
        *(float *)pVVar5 = *pfVar1;
        *(float *)(pVVar5 + 4) = pfVar1[1];
        *(float *)(pVVar5 + 8) = pfVar1[2];
      }
      lVar3 = 0;
      do {
        fVar8 = *(float *)((long)pfVar1 + lVar3);
        fVar7 = fVar8;
        if (fVar8 <= *(float *)((long)&local_30 + lVar3)) {
          fVar7 = *(float *)((long)&local_30 + lVar3);
        }
        if (*(float *)((long)&local_40 + lVar3) <= fVar8) {
          fVar8 = *(float *)((long)&local_40 + lVar3);
        }
        *(float *)((long)&local_30 + lVar3) = fVar7;
        *(float *)((long)&local_40 + lVar3) = fVar8;
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      uVar6 = uVar6 + 1;
      pVVar5 = pVVar5 + 0xc;
    } while (param_3 != uVar6);
    fVar7 = (float)local_30 - (float)local_40;
    fVar8 = local_30._4_4_;
    fVar9 = (float)local_40;
    fVar10 = local_40._4_4_;
    if (fVar7 < 0.0) goto LAB_001001e8;
  }
  if (fVar7 <= fVar8 - fVar10) {
    fVar7 = fVar8 - fVar10;
  }
LAB_0010011a:
  if (fVar7 <= local_28 - local_38) {
    fVar7 = local_28 - local_38;
  }
  if (param_1 != (Vector3 *)0x0) {
    fVar8 = 0.0;
    if (fVar7 != 0.0) {
      fVar8 = _LC5 / fVar7;
    }
    if (param_3 != 0) {
      pVVar5 = param_1;
      do {
        pVVar4 = pVVar5 + 0xc;
        *(float *)pVVar5 = (*(float *)pVVar5 - fVar9) * fVar8;
        *(float *)(pVVar5 + 4) = (*(float *)(pVVar5 + 4) - fVar10) * fVar8;
        *(float *)(pVVar5 + 8) = (*(float *)(pVVar5 + 8) - local_38) * fVar8;
        pVVar5 = pVVar4;
      } while (pVVar4 != param_1 + param_3 * 0xc);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* meshopt::quadricAdd(meshopt::Quadric&, meshopt::Quadric const&) */

void meshopt::quadricAdd(Quadric *param_1,Quadric *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8);
  fVar7 = *(float *)(param_2 + 0xc);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar2;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + fVar3;
  *(float *)param_1 = *(float *)param_1 + fVar4;
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + fVar5;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar6;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + fVar7;
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x20) + (float)*(undefined8 *)(param_2 + 0x20));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_2 + 0x28);
  return;
}



/* meshopt::quadricAdd(meshopt::QuadricGrad*, meshopt::QuadricGrad const*, unsigned long) */

void meshopt::quadricAdd(QuadricGrad *param_1,QuadricGrad *param_2,ulong param_3)

{
  QuadricGrad *pQVar1;
  QuadricGrad *pQVar2;
  QuadricGrad *pQVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      pQVar1 = param_2 + lVar10;
      fVar4 = *(float *)(pQVar1 + 4);
      fVar5 = *(float *)(pQVar1 + 8);
      fVar6 = *(float *)(pQVar1 + 0xc);
      pQVar2 = param_1 + lVar10;
      fVar7 = *(float *)(pQVar2 + 4);
      fVar8 = *(float *)(pQVar2 + 8);
      fVar9 = *(float *)(pQVar2 + 0xc);
      pQVar3 = param_1 + lVar10;
      *(float *)pQVar3 = *(float *)pQVar1 + *(float *)pQVar2;
      *(float *)(pQVar3 + 4) = fVar4 + fVar7;
      *(float *)(pQVar3 + 8) = fVar5 + fVar8;
      *(float *)(pQVar3 + 0xc) = fVar6 + fVar9;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != param_3 * 0x10);
  }
  return;
}



/* meshopt::remapEdgeLoops(unsigned int*, unsigned long, unsigned int const*) */

void meshopt::remapEdgeLoops(uint *param_1,ulong param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      while (uVar2 = param_1[uVar1], uVar2 != 0xffffffff) {
        if (param_3[uVar2] != uVar1) {
          param_1[uVar1] = param_3[uVar2];
          break;
        }
        uVar2 = param_1[uVar2];
        if (uVar2 != 0xffffffff) {
          uVar2 = param_3[uVar2];
        }
        param_1[uVar1] = uVar2;
        uVar1 = uVar1 + 1;
        if (param_2 == uVar1) {
          return;
        }
      }
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  return;
}



/* meshopt::pruneComponents(unsigned int*, unsigned long, unsigned int const*, float const*,
   unsigned long, float, float&) */

long meshopt::pruneComponents
               (uint *param_1,ulong param_2,uint *param_3,float *param_4,ulong param_5,float param_6
               ,float *param_7)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  if (param_2 != 0) {
    uVar2 = 0;
    lVar3 = 0;
    do {
      lVar4 = lVar3;
      if (param_6 < param_4[param_3[param_1[uVar2]]]) {
        param_1[lVar3] = param_1[uVar2];
        lVar4 = lVar3 + 3;
        param_1[lVar3 + 1] = param_1[uVar2 + 1];
        param_1[lVar3 + 2] = param_1[uVar2 + 2];
      }
      uVar2 = uVar2 + 3;
      lVar3 = lVar4;
    } while (uVar2 < param_2);
    *param_7 = 3.4028235e+38;
    if (param_5 != 0) {
      pfVar1 = param_4 + param_5;
      do {
        fVar5 = *param_4;
        if (param_6 < fVar5) {
          if (*param_7 <= fVar5) {
            fVar5 = *param_7;
          }
          *param_7 = fVar5;
        }
        param_4 = param_4 + 1;
      } while (pfVar1 != param_4);
    }
    return lVar4;
  }
  *param_7 = 3.4028235e+38;
  if (param_5 != 0) {
    pfVar1 = param_4 + param_5;
    do {
      fVar5 = *param_4;
      if (param_6 < fVar5) {
        if (*param_7 <= fVar5) {
          fVar5 = *param_7;
        }
        *param_7 = fVar5;
      }
      param_4 = param_4 + 1;
    } while (pfVar1 != param_4);
  }
  return 0;
}



/* meshopt::computeVertexIds(unsigned int*, meshopt::Vector3 const*, unsigned long, int) */

void meshopt::computeVertexIds(uint *param_1,Vector3 *param_2,ulong param_3,int param_4)

{
  float fVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  
  fVar1 = _LC6;
  fVar4 = (float)(param_4 + -1);
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = (int)(*(float *)param_2 * fVar4 + fVar1) << 0x14 |
                (int)(*(float *)(param_2 + 4) * fVar4 + fVar1) << 10 |
                (int)(*(float *)(param_2 + 8) * fVar4 + fVar1);
      param_2 = param_2 + 0xc;
      puVar2 = puVar3;
    } while (param_1 + param_3 != puVar3);
  }
  return;
}



/* meshopt::countTriangles(unsigned int const*, unsigned int const*, unsigned long) */

long __thiscall meshopt::countTriangles(meshopt *this,uint *param_1,uint *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  
  if (param_2 != (uint *)0x0) {
    puVar4 = (uint *)0x0;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(this + (ulong)param_1[(long)puVar4] * 4);
      lVar2 = (long)puVar4 + 1;
      lVar3 = (long)puVar4 + 2;
      param_3 = (ulong)((uint)CONCAT71((int7)(param_3 >> 8),
                                       iVar1 != *(int *)(this + (ulong)param_1[lVar2] * 4)) &
                       CONCAT31((int3)((uint)iVar1 >> 8),
                                iVar1 != *(int *)(this + (ulong)param_1[lVar3] * 4)));
      puVar4 = (uint *)((long)puVar4 + 3);
      lVar5 = lVar5 + (*(int *)(this + (ulong)param_1[lVar2] * 4) !=
                       *(int *)(this + (ulong)param_1[lVar3] * 4) & param_3);
    } while (puVar4 < param_2);
    return lVar5;
  }
  return 0;
}



/* meshopt::updateEdgeAdjacency(meshopt::EdgeAdjacency&, unsigned int const*, unsigned long,
   unsigned long, unsigned int const*) */

void meshopt::updateEdgeAdjacency
               (EdgeAdjacency *param_1,uint *param_2,ulong param_3,ulong param_4,uint *param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  
  lVar4 = *(long *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  pvVar6 = memset((void *)(lVar4 + 4),0,param_4 * 4);
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_00100589;
LAB_001004ed:
    uVar8 = 0;
    iVar11 = 0;
    do {
      iVar3 = *(int *)(lVar4 + 4 + uVar8 * 4);
      *(int *)(lVar4 + 4 + uVar8 * 4) = iVar11;
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + iVar3;
    } while (uVar8 < param_4);
  }
  else {
    puVar7 = param_2;
    do {
      uVar8 = (ulong)*puVar7;
      if (param_5 != (uint *)0x0) {
        uVar8 = (ulong)param_5[uVar8];
      }
      puVar7 = puVar7 + 1;
      piVar1 = (int *)((long)pvVar6 + uVar8 * 4);
      *piVar1 = *piVar1 + 1;
    } while (puVar7 != param_2 + param_3);
    if (param_4 != 0) goto LAB_001004ed;
  }
  uVar8 = 0;
  if (2 < param_3) {
    do {
      uVar10 = (ulong)*param_2;
      uVar12 = param_2[1];
      uVar9 = (ulong)param_2[2];
      if (param_5 != (uint *)0x0) {
        uVar10 = (ulong)param_5[uVar10];
        uVar12 = param_5[uVar12];
        uVar9 = (ulong)param_5[uVar9];
      }
      uVar8 = uVar8 + 1;
      param_2 = param_2 + 3;
      puVar7 = (uint *)((long)pvVar6 + uVar10 * 4);
      *(uint *)(lVar5 + (ulong)*puVar7 * 8) = uVar12;
      *(int *)(lVar5 + 4 + (ulong)*puVar7 * 8) = (int)uVar9;
      *puVar7 = *puVar7 + 1;
      puVar7 = (uint *)((long)pvVar6 + (ulong)uVar12 * 4);
      *(int *)(lVar5 + (ulong)*puVar7 * 8) = (int)uVar9;
      puVar2 = (uint *)((long)pvVar6 + uVar9 * 4);
      *(int *)(lVar5 + 4 + (ulong)*puVar7 * 8) = (int)uVar10;
      *puVar7 = *puVar7 + 1;
      *(int *)(lVar5 + (ulong)*puVar2 * 8) = (int)uVar10;
      *(uint *)(lVar5 + 4 + (ulong)*puVar2 * 8) = uVar12;
      *puVar2 = *puVar2 + 1;
    } while (uVar8 < param_3 / 3);
  }
LAB_00100589:
  **(undefined4 **)param_1 = 0;
  return;
}



/* meshopt::sortEdgeCollapses(unsigned int*, meshopt::Collapse const*, unsigned long) */

void meshopt::sortEdgeCollapses(uint *param_1,Collapse *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  Collapse *pCVar7;
  Collapse *pCVar8;
  long in_FS_OFFSET;
  uint auStack_2828 [2560];
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = (int *)memset(auStack_2828,0,0x2800);
  if (param_3 != 0) {
    pCVar7 = param_2 + 8;
    pCVar8 = pCVar7 + param_3 * 0xc;
    do {
      uVar2 = (uint)(*(int *)pCVar7 * 2) >> 0x14;
      uVar4 = (ulong)uVar2;
      if (0x9ff < uVar2) {
        uVar4 = 0x9ff;
      }
      pCVar7 = pCVar7 + 0xc;
      auStack_2828[uVar4] = auStack_2828[uVar4] + 1;
    } while (pCVar8 != pCVar7);
  }
  iVar6 = 0;
  do {
    iVar1 = *piVar3;
    *piVar3 = iVar6;
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + iVar1;
  } while (local_28 != piVar3);
  if (param_3 != 0) {
    pCVar8 = param_2 + 8;
    uVar4 = 0;
    do {
      uVar2 = (uint)(*(int *)pCVar8 * 2) >> 0x14;
      uVar5 = (ulong)uVar2;
      if (0x9ff < uVar2) {
        uVar5 = 0x9ff;
      }
      pCVar8 = pCVar8 + 0xc;
      uVar2 = auStack_2828[uVar5];
      param_1[uVar2] = (uint)uVar4;
      uVar4 = uVar4 + 1;
      auStack_2828[uVar5] = uVar2 + 1;
    } while (param_3 != uVar4);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* meshopt::fillVertexCells(unsigned int*, unsigned long, unsigned int*, unsigned int const*,
   unsigned long) */

long meshopt::fillVertexCells(uint *param_1,ulong param_2,uint *param_3,uint *param_4,ulong param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  
  puVar4 = (uint *)memset(param_1,-1,param_2 * 4);
  if (param_5 == 0) {
    return 0;
  }
  puVar1 = (uint *)(param_2 - 1);
  uVar7 = 0;
  lVar8 = 0;
  do {
    puVar9 = (uint *)0x0;
    uVar3 = param_4[uVar7 & 0xffffffff];
    uVar2 = (uVar3 >> 0xd ^ uVar3) * 0x5bd1e995;
    uVar5 = (ulong)(uVar2 ^ uVar2 >> 0xf);
    while( true ) {
      uVar2 = puVar4[uVar5 & (ulong)puVar1];
      puVar6 = (uint *)(ulong)uVar2;
      if (uVar2 == 0xffffffff) break;
      if (uVar3 == param_4[(long)puVar6]) {
        uVar3 = param_3[(long)puVar6];
        goto LAB_00100774;
      }
      uVar5 = (uVar5 & (ulong)puVar1) + 1 + (long)puVar9;
      puVar9 = (uint *)((long)puVar9 + 1);
      if (puVar1 < puVar9) {
        lVar8 = fillVertexCells(puVar4,(ulong)uVar3,puVar6,puVar1,uVar7);
        return lVar8;
      }
    }
    puVar4[uVar5 & (ulong)puVar1] = (uint)uVar7;
    uVar3 = (uint)lVar8;
    lVar8 = lVar8 + 1;
LAB_00100774:
    param_3[uVar7] = uVar3;
    uVar7 = uVar7 + 1;
    if (param_5 == uVar7) {
      return lVar8;
    }
  } while( true );
}



/* meshopt::quadricFromTriangle(meshopt::Quadric&, meshopt::Vector3 const&, meshopt::Vector3 const&,
   meshopt::Vector3 const&, float) [clone .isra.0] */

void meshopt::quadricFromTriangle
               (Quadric *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,float param_5)

{
  float fVar1;
  float in_XMM1_Da;
  float fVar2;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float fVar3;
  float in_XMM4_Da;
  float fVar4;
  float in_XMM5_Da;
  float fVar5;
  float in_XMM6_Da;
  float in_XMM7_Da;
  float fVar6;
  float fVar7;
  float in_stack_00000008;
  float in_stack_00000010;
  
  fVar4 = (in_XMM4_Da - in_XMM1_Da) * (in_stack_00000008 - in_XMM2_Da) -
          (in_XMM5_Da - in_XMM2_Da) * (in_XMM7_Da - in_XMM1_Da);
  fVar5 = (in_XMM5_Da - in_XMM2_Da) * (in_XMM6_Da - param_5) -
          (in_stack_00000008 - in_XMM2_Da) * (in_XMM3_Da - param_5);
  fVar3 = (in_XMM3_Da - param_5) * (in_XMM7_Da - in_XMM1_Da) -
          (in_XMM4_Da - in_XMM1_Da) * (in_XMM6_Da - param_5);
  fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
  if (fVar1 <= 0.0) {
    fVar2 = param_5 * fVar4 + in_XMM1_Da * fVar5 + in_XMM2_Da * fVar3;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
      goto LAB_0010085a;
    }
  }
  else {
    fVar4 = fVar4 / fVar1;
    fVar5 = fVar5 / fVar1;
    fVar3 = fVar3 / fVar1;
    fVar2 = in_XMM1_Da * fVar5 + param_5 * fVar4 + in_XMM2_Da * fVar3;
  }
  fVar1 = SQRT(fVar1);
LAB_0010085a:
  fVar1 = fVar1 * in_stack_00000010;
  fVar2 = (float)((uint)fVar2 ^ _LC8);
  *(float *)(param_1 + 0x28) = fVar1;
  fVar7 = fVar1 * fVar3;
  fVar6 = fVar1 * fVar2;
  *(ulong *)param_1 = CONCAT44(fVar1 * fVar5 * fVar5,fVar1 * fVar4 * fVar4);
  *(ulong *)(param_1 + 8) = CONCAT44(fVar1 * fVar5 * fVar4,fVar7 * fVar3);
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar2 * fVar6,fVar3 * fVar6);
  *(float *)(param_1 + 0x10) = fVar4 * fVar7;
  *(float *)(param_1 + 0x14) = fVar7 * fVar5;
  *(float *)(param_1 + 0x18) = fVar4 * fVar6;
  *(float *)(param_1 + 0x1c) = fVar5 * fVar6;
  return;
}



/* meshopt::quadricEval(meshopt::Quadric const&, meshopt::Vector3 const&) [clone .isra.0] */

float meshopt::quadricEval(Quadric *param_1,Vector3 *param_2)

{
  float in_XMM0_Da;
  float fVar1;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x14) * in_XMM2_Da + *(float *)(param_1 + 0x1c);
  fVar3 = *(float *)(param_1 + 0xc) * in_XMM1_Da + *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_1 + 0x10) * in_XMM0_Da + *(float *)(param_1 + 0x20);
  return in_XMM2_Da * (*(float *)(param_1 + 8) * in_XMM2_Da + fVar1 + fVar1) +
         (*(float *)(param_1 + 4) * in_XMM1_Da + fVar2 + fVar2) * in_XMM1_Da +
         (*(float *)param_1 * in_XMM0_Da + fVar3 + fVar3) * in_XMM0_Da + *(float *)(param_1 + 0x24);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt::quadricError(meshopt::Quadric const&, meshopt::QuadricGrad const*, unsigned long,
   meshopt::Vector3 const&, float const*) [clone .isra.0] */

undefined8
meshopt::quadricError
          (Quadric *param_1,QuadricGrad *param_2,ulong param_3,Vector3 *param_4,float *param_5)

{
  float fVar1;
  QuadricGrad *pQVar2;
  QuadricGrad *pQVar3;
  long extraout_RDX;
  float in_XMM0_Da;
  float fVar4;
  undefined8 uVar5;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar6;
  
  uVar5 = quadricEval(param_1,(Vector3 *)param_2);
  fVar4 = (float)uVar5;
  if (extraout_RDX != 0) {
    pQVar2 = param_2;
    do {
      fVar1 = *(float *)param_4;
      pQVar3 = pQVar2 + 0x10;
      param_4 = param_4 + 4;
      fVar6 = *(float *)pQVar2 * in_XMM0_Da + *(float *)(pQVar2 + 4) * in_XMM1_Da +
              *(float *)(pQVar2 + 8) * in_XMM2_Da + *(float *)(pQVar2 + 0xc);
      fVar4 = fVar4 + (fVar1 * *(float *)(param_1 + 0x28) - (fVar6 + fVar6)) * fVar1;
      pQVar2 = pQVar3;
    } while (param_2 + extraout_RDX * 0x10 != pQVar3);
  }
  return CONCAT44((uint)((ulong)uVar5 >> 0x20) & _UNK_00105234,(uint)fVar4 & _LC9);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt_simplifyEdge(unsigned int*, unsigned int const*, unsigned long, float const*, unsigned
   long, unsigned long, float const*, unsigned long, float const*, unsigned long, unsigned char
   const*, unsigned long, float, unsigned int, float*) */

uint * meshopt_simplifyEdge
                 (uint *param_1,uint *param_2,ulong param_3,float *param_4,ulong param_5,
                 ulong param_6,float *param_7,ulong param_8,float *param_9,ulong param_10,
                 uchar *param_11,ulong param_12,float param_13,uint param_14,float *param_15)

{
  undefined4 *puVar1;
  Vector3 *pVVar2;
  Vector3 *pVVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  void *pvVar11;
  float *pfVar12;
  ulong uVar13;
  char *pcVar14;
  uint *puVar15;
  uint *__s;
  char *pcVar16;
  int *piVar17;
  Collapse *pCVar18;
  uint *puVar19;
  void *pvVar20;
  long lVar21;
  float *pfVar22;
  uint *puVar23;
  float *pfVar24;
  byte *pbVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  Vector3 *pVVar30;
  float *pfVar31;
  Quadric *pQVar32;
  QuadricGrad *pQVar33;
  char cVar34;
  ulong uVar35;
  Vector3 *pVVar36;
  long extraout_RDX;
  ulong uVar37;
  uint *puVar38;
  uint *extraout_RDX_00;
  long extraout_RDX_01;
  ulong extraout_RDX_02;
  uint *puVar39;
  ulong uVar40;
  size_t sVar41;
  uint uVar42;
  long lVar43;
  size_t sVar44;
  QuadricGrad *pQVar45;
  long *plVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  long in_FS_OFFSET;
  bool bVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  uint extraout_XMM0_Da;
  float fVar56;
  float extraout_XMM0_Da_00;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  ulong local_4f8;
  float *in_stack_fffffffffffffb10;
  uint *puVar74;
  Collapse *pCVar75;
  uchar *in_stack_fffffffffffffb30;
  Collapse *pCVar76;
  byte bVar77;
  uint in_stack_fffffffffffffb40;
  ulong uVar78;
  float *in_stack_fffffffffffffb48;
  uint *local_4a8;
  void *local_468;
  void *local_460;
  ulong local_458;
  long local_450;
  long local_430;
  Vector3 *local_408;
  float local_3fc;
  uint *local_3d8;
  ulong local_3c8;
  float local_3a0;
  float local_35c;
  long local_358;
  long local_350;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined8 local_328;
  float local_320;
  long local_318 [24];
  long local_258;
  QuadricGrad local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = 0;
  plVar46 = local_318;
  for (lVar28 = 0x18; lVar28 != 0; lVar28 = lVar28 + -1) {
    *plVar46 = 0;
    plVar46 = plVar46 + 1;
  }
  if (param_1 != param_2) {
    memcpy(param_1,param_2,param_3 * 4);
  }
  if ((param_14 & 2) == 0) {
    local_3d8 = (uint *)0x0;
    uVar51 = (param_5 >> 2) + param_5;
    local_458 = param_5;
  }
  else {
    uVar51 = param_5 + 7 >> 3;
    pvVar11 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(uVar51);
    local_318[local_258] = (long)pvVar11;
    local_258 = local_258 + 1;
    pvVar11 = memset(pvVar11,0,uVar51);
    if (param_3 == 0) {
      uVar51 = 0;
      local_3d8 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0);
      local_458 = 0;
      local_318[local_258] = (long)local_3d8;
      local_258 = local_258 + 1;
LAB_0010390b:
      uVar13 = 1;
      sVar44 = 4;
LAB_0010391d:
      sVar41 = sVar44;
      sVar44 = sVar41;
    }
    else {
      local_458 = 0;
      pfVar24 = (float *)param_1;
      do {
        uVar42 = (uint)*pfVar24 & 7;
        pbVar25 = (byte *)((ulong)((uint)*pfVar24 >> 3) + (long)pvVar11);
        bVar77 = *pbVar25;
        pfVar24 = pfVar24 + 1;
        local_458 = local_458 + ((bVar77 >> uVar42 & 1) == 0);
        *pbVar25 = bVar77 | (byte)(1 << (sbyte)uVar42);
      } while ((float *)param_1 + param_3 != pfVar24);
      lVar28 = local_458 * 4;
      uVar51 = (local_458 >> 2) + local_458;
      if (0x3fffffffffffffff < local_458) {
        lVar28 = -1;
      }
      local_3d8 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
      lVar28 = local_258 + 1;
      local_318[local_258] = (long)local_3d8;
      local_258 = lVar28;
      if (uVar51 < 2) goto LAB_0010390b;
      uVar13 = 1;
      do {
        uVar50 = uVar13;
        uVar13 = uVar50 * 2;
      } while (uVar13 < uVar51);
      sVar44 = uVar50 * 8;
      sVar41 = 0xffffffffffffffff;
      if (uVar13 >> 0x3e == 0) goto LAB_0010391d;
    }
    pvVar11 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar41);
    local_318[local_258] = (long)pvVar11;
    local_258 = local_258 + 1;
    puVar9 = (uint *)memset(pvVar11,-1,sVar44);
    lVar28 = 0;
    uVar50 = 0;
    if (param_3 != 0) {
      do {
        fVar68 = ((float *)param_1)[uVar50];
        uVar37 = 0;
        uVar35 = (ulong)(uint)((int)fVar68 * 0x5bd1e995);
        while( true ) {
          uVar35 = uVar35 & uVar13 - 1;
          fVar56 = (float)puVar9[uVar35];
          puVar15 = (uint *)(ulong)(uint)fVar56;
          if (fVar56 == -NAN) break;
          if (fVar68 == (float)local_3d8[(long)puVar15]) goto LAB_001031a0;
          uVar35 = uVar37 + 1 + uVar35;
          uVar37 = uVar37 + 1;
          if (uVar37 == uVar13) {
            puVar9 = (uint *)meshopt_simplifyEdge
                                       (puVar9,puVar15,uVar37,(float *)puVar15,(ulong)(uint)fVar68,
                                        uVar13 - 1,in_stack_fffffffffffffb10,param_6,
                                        (float *)param_11,(ulong)param_1,in_stack_fffffffffffffb30,
                                        (ulong)param_7,extraout_XMM0_Da_00,in_stack_fffffffffffffb40
                                        ,in_stack_fffffffffffffb48);
            return puVar9;
          }
        }
        local_3d8[lVar28] = (uint)fVar68;
        fVar56 = (float)lVar28;
        puVar9[uVar35] = (uint)fVar56;
        lVar28 = lVar28 + 1;
LAB_001031a0:
        ((float *)param_1)[uVar50] = fVar56;
        uVar50 = uVar50 + 1;
      } while (param_3 != uVar50);
    }
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)();
    local_258 = local_258 + -1;
  }
  lVar28 = (local_458 + 1) * 4;
  if (0x3fffffffffffffff < local_458 + 1) {
    lVar28 = -1;
  }
  local_358 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  lVar28 = param_3 * 8;
  local_318[local_258] = local_358;
  local_258 = local_258 + 1;
  if (0x1fffffffffffffff < param_3) {
    lVar28 = -1;
  }
  local_350 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  local_318[local_258] = local_350;
  local_258 = local_258 + 1;
  meshopt::updateEdgeAdjacency((EdgeAdjacency *)&local_358,param_1,param_3,local_458,(uint *)0x0);
  lVar28 = -1;
  if (local_458 < 0x4000000000000000) {
    lVar28 = local_458 * 4;
  }
  puVar9 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  local_318[local_258] = (long)puVar9;
  local_258 = local_258 + 1;
  lVar10 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  local_318[local_258] = lVar10;
  if (uVar51 < 2) {
    sVar44 = 4;
    uVar13 = 1;
LAB_00102023:
    sVar41 = sVar44;
  }
  else {
    uVar13 = 1;
    do {
      uVar50 = uVar13;
      uVar13 = uVar50 * 2;
    } while (uVar13 < uVar51);
    sVar44 = uVar50 * 8;
    sVar41 = 0xffffffffffffffff;
    if (uVar13 >> 0x3e == 0) goto LAB_00102023;
  }
  uVar51 = param_6;
  local_258 = local_258 + 1;
  pvVar11 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar41);
  local_318[local_258] = (long)pvVar11;
  local_258 = local_258 + 1;
  pvVar11 = memset(pvVar11,-1,sVar44);
  uVar50 = 0;
  if (local_458 != 0) {
    do {
      uVar37 = uVar50 & 0xffffffff;
      uVar35 = uVar50 & 0xffffffff;
      if (local_3d8 != (uint *)0x0) {
        uVar35 = (ulong)local_3d8[uVar37];
      }
      pfVar24 = (float *)((long)param_4 + uVar35 * (param_6 & 0xfffffffffffffffc));
      uVar29 = 0;
      uVar35 = (ulong)(((uint)pfVar24[1] >> 0x11 ^ (uint)pfVar24[1]) * 0x127409f ^
                       ((uint)*pfVar24 >> 0x11 ^ (uint)*pfVar24) * 0x466f45d ^
                      ((uint)pfVar24[2] >> 0x11 ^ (uint)pfVar24[2]) * 0x4f9ffb7);
      while( true ) {
        uVar35 = uVar35 & uVar13 - 1;
        puVar15 = (uint *)((long)pvVar11 + uVar35 * 4);
        uVar42 = *puVar15;
        if (uVar42 == 0xffffffff) break;
        uVar54 = uVar42;
        if (local_3d8 != (uint *)0x0) {
          uVar54 = local_3d8[uVar42];
        }
        pfVar12 = (float *)((ulong)uVar54 * (param_6 & 0xfffffffffffffffc) + (long)param_4);
        if ((*(long *)pfVar12 == *(long *)pfVar24) && (pfVar12[2] == pfVar24[2])) goto LAB_00100e1a;
        uVar35 = uVar29 + 1 + uVar35;
        uVar29 = uVar29 + 1;
        if (uVar29 == uVar13) {
          puVar9 = (uint *)FUN_00105149();
          return puVar9;
        }
      }
      *puVar15 = (uint)uVar50;
      uVar42 = (uint)uVar50;
LAB_00100e1a:
      uVar50 = uVar50 + 1;
      puVar9[uVar37] = uVar42;
    } while (uVar50 != local_458);
    uVar13 = 0;
    do {
      *(int *)(lVar10 + uVar13 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_458);
    uVar13 = 0;
    do {
      if (uVar13 != puVar9[uVar13]) {
        puVar1 = (undefined4 *)(lVar10 + (ulong)puVar9[uVar13] * 4);
        *(undefined4 *)(lVar10 + uVar13 * 4) = *puVar1;
        *puVar1 = (int)uVar13;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_458);
  }
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(pvVar11);
  local_258 = local_258 + -1;
  pcVar14 = (char *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_458);
  local_318[local_258] = (long)pcVar14;
  local_258 = local_258 + 1;
  puVar15 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  local_318[local_258] = (long)puVar15;
  local_258 = local_258 + 1;
  __s = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  local_318[local_258] = (long)__s;
  local_258 = local_258 + 1;
  memset(puVar15,-1,local_458 * 4);
  memset(__s,-1,local_458 * 4);
  if (local_458 == 0) {
LAB_00101393:
    local_408 = (Vector3 *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_458 * 0xc);
    local_318[local_258] = (long)local_408;
    local_258 = local_258 + 1;
    local_3a0 = (float)meshopt::rescalePositions(local_408,param_4,local_458,uVar51,local_3d8);
    if (param_10 == 0) {
      local_450 = 0;
      uVar51 = 0;
LAB_00101506:
      if (0x5d1745d1745d174 < local_458) goto LAB_001012ba;
    }
    else {
LAB_001013fc:
      uVar13 = 0;
      uVar51 = 0;
      do {
        if (0.0 < param_9[uVar13]) {
          *(int *)(local_248 + uVar51 * 4) = (int)uVar13;
          uVar51 = uVar51 + 1;
        }
        uVar13 = uVar13 + 1;
      } while (param_10 != uVar13);
      lVar43 = local_458 * uVar51 * 4;
      if (0x3fffffffffffffff < local_458 * uVar51) {
        lVar43 = -1;
      }
      local_450 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar43);
      local_318[local_258] = local_450;
      local_258 = local_258 + 1;
      if (local_458 != 0) {
        uVar13 = 0;
        lVar43 = local_450;
        do {
          uVar42 = (uint)uVar13;
          if (local_3d8 != (uint *)0x0) {
            uVar42 = local_3d8[uVar13];
          }
          if (uVar51 != 0) {
            uVar50 = 0;
            do {
              *(float *)(lVar43 + uVar50 * 4) =
                   param_7[(ulong)uVar42 * (param_8 >> 2) + (ulong)*(uint *)(local_248 + uVar50 * 4)
                          ] * param_9[*(uint *)(local_248 + uVar50 * 4)];
              uVar50 = uVar50 + 1;
            } while (uVar51 != uVar50);
          }
          uVar13 = uVar13 + 1;
          lVar43 = lVar43 + uVar51 * 4;
        } while (uVar13 != local_458);
        goto LAB_00101506;
      }
    }
    lVar43 = local_458 * 0x2c;
  }
  else {
    uVar13 = 0;
    do {
      uVar50 = uVar13 & 0xffffffff;
      uVar54 = (uint)uVar13;
      uVar42 = *(uint *)(local_358 + uVar50 * 4);
      uVar49 = *(int *)(local_358 + (ulong)(uVar54 + 1) * 4) - uVar42;
      if (uVar49 != 0) {
        puVar23 = (uint *)(local_350 + (ulong)uVar42 * 8);
        puVar39 = (uint *)(local_350 + ((ulong)uVar42 + (ulong)uVar49) * 8);
        do {
          while (uVar42 = *puVar23, uVar42 == uVar54) {
            puVar15[uVar50] = uVar54;
            __s[uVar50] = uVar54;
joined_r0x001012f7:
            puVar23 = puVar23 + 2;
            if (puVar39 == puVar23) goto LAB_0010106f;
          }
          uVar49 = *(uint *)(local_358 + (ulong)uVar42 * 4);
          uVar8 = *(int *)(local_358 + (ulong)(uVar42 + 1) * 4) - uVar49;
          if (uVar8 != 0) {
            uVar35 = 0;
            do {
              if (*(uint *)(local_350 + (ulong)uVar49 * 8 + uVar35 * 8) == uVar54)
              goto joined_r0x001012f7;
              uVar35 = uVar35 + 1;
            } while (uVar35 != uVar8);
          }
          uVar49 = uVar54;
          if (__s[uVar42] != 0xffffffff) {
            uVar49 = uVar42;
          }
          __s[uVar42] = uVar49;
          if (puVar15[uVar50] != 0xffffffff) {
            uVar42 = uVar54;
          }
          puVar23 = puVar23 + 2;
          puVar15[uVar50] = uVar42;
        } while (puVar39 != puVar23);
      }
LAB_0010106f:
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_458);
    uVar13 = 0;
LAB_001010c7:
    do {
      if (puVar9[uVar13] == uVar13) {
        uVar42 = *(uint *)(lVar10 + uVar13 * 4);
        uVar50 = (ulong)uVar42;
        if (uVar50 == uVar13) {
          cVar34 = '\0';
          if (((__s[uVar13] & puVar15[uVar13]) != 0xffffffff) &&
             (cVar34 = '\x04', __s[uVar13] != uVar13)) {
            cVar34 = (puVar15[uVar13] == uVar13) * '\x03' + '\x01';
          }
        }
        else {
          cVar34 = '\x04';
          if ((*(uint *)(lVar10 + uVar50 * 4) == uVar13) &&
             (uVar54 = __s[uVar13], uVar54 != 0xffffffff)) {
            uVar49 = puVar15[uVar13];
            if ((uVar54 != uVar13) && (uVar49 != 0xffffffff)) {
              if (uVar49 == uVar13) goto LAB_001010b7;
              uVar8 = __s[uVar50];
              if ((((uVar8 != 0xffffffff) && (uVar42 != uVar8)) &&
                  (uVar6 = puVar15[uVar50], uVar6 != 0xffffffff)) && (uVar42 != uVar6)) {
                cVar34 = '\x04';
                if ((puVar9[uVar54] != puVar9[uVar6]) ||
                   ((puVar9[uVar8] == puVar9[uVar49] &&
                    (cVar34 = '\x02', puVar9[uVar54] != puVar9[uVar49])))) goto LAB_001010b7;
              }
            }
            pcVar14[uVar13] = '\x04';
            uVar13 = uVar13 + 1;
            if (uVar13 == local_458) break;
            goto LAB_001010c7;
          }
        }
      }
      else {
        cVar34 = pcVar14[puVar9[uVar13]];
      }
LAB_001010b7:
      pcVar14[uVar13] = cVar34;
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_458);
    uVar13 = 0;
    if ((float *)param_11 != (float *)0x0) {
      do {
        uVar50 = uVar13;
        if (local_3d8 != (uint *)0x0) {
          uVar50 = (ulong)local_3d8[uVar13];
        }
        if (*(uchar *)((long)param_11 + uVar50) != '\0') {
          pcVar14[puVar9[uVar13]] = '\x04';
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_458);
      uVar13 = 0;
      do {
        if (pcVar14[puVar9[uVar13]] == '\x04') {
          pcVar14[uVar13] = '\x04';
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_458);
    }
    if ((param_14 & 1) != 0) {
      pcVar16 = pcVar14;
      do {
        if (*pcVar16 == '\x01') {
          *pcVar16 = '\x04';
        }
        pcVar16 = pcVar16 + 1;
      } while (pcVar14 + local_458 != pcVar16);
    }
    if (local_458 < 0x1555555555555556) goto LAB_00101393;
    local_408 = (Vector3 *)
                (*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_318[local_258] = (long)local_408;
    local_258 = local_258 + 1;
    local_3a0 = (float)meshopt::rescalePositions(local_408,param_4,local_458,uVar51,local_3d8);
    if (param_10 != 0) goto LAB_001013fc;
    local_450 = 0;
    uVar51 = 0;
LAB_001012ba:
    lVar43 = -1;
  }
  pvVar11 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar43);
  local_318[local_258] = (long)pvVar11;
  local_258 = local_258 + 1;
  memset(pvVar11,0,local_458 * 0x2c);
  if (uVar51 == 0) {
    local_460 = (void *)0x0;
    local_468 = (void *)0x0;
    fVar68 = _LC5;
  }
  else {
    local_468 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar43);
    local_318[local_258] = (long)local_468;
    local_258 = local_258 + 1;
    memset(local_468,0,local_458 * 0x2c);
    sVar41 = local_458 * uVar51 * 0x10;
    sVar44 = 0xffffffffffffffff;
    if (local_458 * uVar51 < 0x1000000000000000) {
      sVar44 = sVar41;
    }
    local_460 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar44);
    local_318[local_258] = (long)local_460;
    local_258 = local_258 + 1;
    memset(local_460,0,sVar41);
    fVar68 = _LC5;
  }
  _LC5 = fVar68;
  if (param_3 != 0) {
    puVar39 = (uint *)0x0;
    puVar23 = puVar9;
    pfVar24 = (float *)param_1;
    pcVar16 = pcVar14;
    do {
      uVar13 = (ulong)(uint)((float *)param_1)[(long)puVar39 + 2];
      pVVar36 = (Vector3 *)(ulong)(uint)((float *)param_1)[(long)puVar39 + 1];
      pVVar30 = (Vector3 *)(ulong)(uint)((float *)param_1)[(long)puVar39];
      puVar39 = (uint *)((long)puVar39 + 3);
      meshopt::quadricFromTriangle
                ((Quadric *)&local_348,local_408 + uVar13 * 0xc,pVVar36,pVVar30,
                 *(float *)(local_408 + (long)pVVar30 * 0xc));
      pQVar32 = (Quadric *)&local_348;
      meshopt::quadricAdd((Quadric *)((long)pvVar11 + (ulong)puVar9[(long)pVVar30] * 0x2c),
                          (Quadric *)&local_348);
      meshopt::quadricAdd((Quadric *)((long)pvVar11 + (ulong)puVar9[(long)pVVar36] * 0x2c),pQVar32);
      meshopt::quadricAdd((Quadric *)((long)pvVar11 + (ulong)puVar9[uVar13] * 0x2c),pQVar32);
    } while (puVar39 < param_3);
    puVar39 = (uint *)0x0;
    uVar42 = _LC8;
    puVar9 = puVar23;
    param_1 = (uint *)pfVar24;
    pcVar14 = pcVar16;
    do {
      pfVar12 = pfVar24 + (long)puVar39;
      iVar27 = 1;
      fVar56 = 0.0;
      piVar17 = &meshopt::
                 buildComponents(unsigned_int*,unsigned_long,unsigned_int_const*,unsigned_long,unsigned_int_const*)
                 ::next;
      do {
        uVar50 = (ulong)(uint)pfVar24[(long)*piVar17 + (long)puVar39];
        uVar13 = (ulong)(uint)*pfVar12;
        bVar77 = pcVar16[uVar13];
        bVar4 = pcVar16[uVar50];
        if ((byte)(bVar77 - 1) < 2) {
          if (pfVar24[(long)*piVar17 + (long)puVar39] == (float)puVar15[uVar13]) {
            if ((byte)(bVar4 - 1) < 2) goto LAB_00101753;
LAB_0010176d:
            puVar23 = puVar9 + uVar50;
            if ((meshopt::kHasOpposite[(ulong)bVar4 + (ulong)bVar77 * 5] == '\0') ||
               (*puVar23 <= puVar9[uVar13])) {
              if ((bVar77 == 1) || (local_320 = fVar68, bVar4 == 1)) {
                local_320 = _LC10;
              }
              pVVar30 = local_408 + uVar50 * 0xc;
              pVVar36 = local_408 + uVar13 * 0xc;
              fVar58 = *(float *)pVVar36;
              fVar65 = *(float *)(pVVar36 + 4);
              pVVar3 = local_408 + (ulong)(uint)pfVar24[(long)piVar17[1] + (long)puVar39] * 0xc;
              fVar55 = *(float *)(pVVar36 + 8);
              fVar69 = *(float *)pVVar30 - fVar58;
              fVar62 = *(float *)(pVVar30 + 4) - fVar65;
              fVar70 = *(float *)(pVVar30 + 8) - fVar55;
              fVar53 = fVar69 * fVar69 + fVar62 * fVar62 + fVar70 * fVar70;
              fVar71 = fVar69 * (*(float *)pVVar3 - fVar58) +
                       fVar62 * (*(float *)(pVVar3 + 4) - fVar65) +
                       fVar70 * (*(float *)(pVVar3 + 8) - fVar55);
              fStack_32c = (*(float *)(pVVar3 + 4) - fVar65) * fVar53 - fVar62 * fVar71;
              fStack_330 = (*(float *)pVVar3 - fVar58) * fVar53 - fVar69 * fVar71;
              fVar62 = fVar53 * (*(float *)(pVVar3 + 8) - fVar55) - fVar70 * fVar71;
              fVar69 = SQRT(fStack_330 * fStack_330 + fStack_32c * fStack_32c + fVar62 * fVar62);
              if (fVar56 < fVar69) {
                fStack_330 = fStack_330 / fVar69;
                fStack_32c = fStack_32c / fVar69;
                fVar62 = fVar62 / fVar69;
              }
              local_320 = local_320 * SQRT(fVar53);
              local_338 = local_320 * fVar62;
              fVar58 = (float)((uint)(fVar58 * fStack_330 + fVar65 * fStack_32c + fVar55 * fVar62) ^
                              uVar42);
              local_348 = local_320 * fStack_330 * fStack_330;
              fVar65 = local_320 * fVar58;
              fStack_344 = local_320 * fStack_32c * fStack_32c;
              fStack_33c = local_320 * fStack_32c * fStack_330;
              fStack_340 = local_338 * fVar62;
              fStack_334 = local_338 * fStack_32c;
              local_338 = local_338 * fStack_330;
              fStack_32c = fStack_32c * fVar65;
              fStack_330 = fStack_330 * fVar65;
              local_328 = CONCAT44(fVar58 * fVar65,fVar62 * fVar65);
              pQVar32 = (Quadric *)&local_348;
              meshopt::quadricAdd((Quadric *)((long)pvVar11 + (ulong)puVar9[uVar13] * 0x2c),
                                  (Quadric *)&local_348);
              piVar17 = (int *)meshopt::quadricAdd((Quadric *)
                                                   ((long)pvVar11 + (ulong)*puVar23 * 0x2c),pQVar32)
              ;
            }
          }
        }
        else if ((byte)(bVar4 - 1) < 2) {
LAB_00101753:
          if (*pfVar12 == (float)__s[uVar50]) goto LAB_0010176d;
        }
        iVar27 = iVar27 + 1;
        pfVar12 = pfVar12 + 1;
        piVar17 = piVar17 + 1;
      } while (iVar27 != 4);
      puVar39 = (uint *)((long)puVar39 + 3);
    } while (puVar39 < param_3);
    if (uVar51 != 0) {
      lVar43 = uVar51 * 4;
      puVar23 = (uint *)0x0;
      pQVar33 = local_248;
      do {
        uVar50 = (ulong)(uint)((float *)param_1)[(long)puVar23 + 2];
        uVar13 = (ulong)(uint)((float *)param_1)[(long)puVar23 + 1];
        uVar35 = (ulong)(uint)((float *)param_1)[(long)puVar23];
        lVar21 = uVar50 * uVar51;
        pVVar30 = local_408 + uVar50 * 0xc;
        pVVar36 = local_408 + uVar13 * 0xc;
        pVVar3 = local_408 + uVar35 * 0xc;
        fVar65 = *(float *)pVVar30 - *(float *)pVVar3;
        fVar59 = *(float *)pVVar36 - *(float *)pVVar3;
        fVar71 = *(float *)(pVVar36 + 4) - *(float *)(pVVar3 + 4);
        fVar62 = *(float *)(pVVar36 + 8) - *(float *)(pVVar3 + 8);
        fVar58 = *(float *)(pVVar30 + 4) - *(float *)(pVVar3 + 4);
        fVar56 = *(float *)(pVVar30 + 8) - *(float *)(pVVar3 + 8);
        fVar55 = fVar71 * fVar56 - fVar62 * fVar58;
        fVar69 = fVar62 * fVar65 - fVar59 * fVar56;
        fVar53 = fVar59 * fVar58 - fVar71 * fVar65;
        local_320 = SQRT(fVar53 * fVar53 + fVar55 * fVar55 + fVar69 * fVar69) * _LC6;
        fVar53 = fVar59 * fVar59 + fVar71 * fVar71 + fVar62 * fVar62;
        fVar55 = fVar59 * fVar65 + fVar71 * fVar58 + fVar62 * fVar56;
        fVar70 = fVar65 * fVar65 + fVar58 * fVar58 + fVar56 * fVar56;
        fVar63 = fVar53 * fVar70 - fVar55 * fVar55;
        fVar69 = 0.0;
        if (fVar63 != 0.0) {
          fVar69 = fVar68 / fVar63;
        }
        local_4f8 = 0;
        fStack_32c = 0.0;
        fStack_330 = 0.0;
        local_338 = 0.0;
        local_348 = 0.0;
        fStack_340 = 0.0;
        fVar63 = *(float *)pVVar3;
        fVar64 = *(float *)(pVVar3 + 4);
        fVar66 = *(float *)(pVVar3 + 8);
        lVar26 = 0;
        fStack_344 = local_348;
        fStack_33c = local_348;
        fStack_334 = local_348;
        do {
          fVar67 = *(float *)(uVar35 * uVar51 * 4 + local_450 + lVar26);
          fVar72 = *(float *)(uVar13 * uVar51 * 4 + local_450 + lVar26) - fVar67;
          fVar57 = *(float *)(lVar21 * 4 + local_450 + lVar26) - fVar67;
          fVar60 = (fVar59 * fVar70 - fVar65 * fVar55) * fVar69 * fVar72 +
                   (fVar65 * fVar53 - fVar59 * fVar55) * fVar69 * fVar57;
          fVar61 = (fVar58 * fVar53 - fVar71 * fVar55) * fVar69 * fVar57 +
                   (fVar71 * fVar70 - fVar58 * fVar55) * fVar69 * fVar72;
          fVar57 = fVar57 * (fVar56 * fVar53 - fVar62 * fVar55) * fVar69 +
                   fVar72 * (fVar70 * fVar62 - fVar56 * fVar55) * fVar69;
          fVar67 = ((fVar67 - fVar63 * fVar60) - fVar64 * fVar61) - fVar66 * fVar57;
          local_4f8 = CONCAT44((float)(local_4f8 >> 0x20) + fVar67 * fVar67 * local_320,
                               (float)local_4f8 + fVar67 * fVar57 * local_320);
          local_348 = local_348 + fVar60 * fVar60 * local_320;
          fStack_344 = fStack_344 + fVar61 * fVar61 * local_320;
          fStack_340 = fStack_340 + fVar57 * fVar57 * local_320;
          fStack_33c = fStack_33c + fVar60 * fVar61 * local_320;
          local_338 = local_338 + fVar60 * fVar57 * local_320;
          fStack_334 = fStack_334 + fVar57 * fVar61 * local_320;
          pQVar45 = pQVar33 + lVar26 * 4;
          *(float *)pQVar45 = fVar60 * local_320;
          *(float *)(pQVar45 + 4) = fVar61 * local_320;
          *(float *)(pQVar45 + 8) = fVar57 * local_320;
          *(float *)(pQVar45 + 0xc) = fVar67 * local_320;
          lVar26 = lVar26 + 4;
          fStack_330 = fStack_330 + fVar60 * fVar67 * local_320;
          fStack_32c = fStack_32c + fVar67 * fVar61 * local_320;
        } while (lVar43 != lVar26);
        puVar23 = (uint *)((long)puVar23 + 3);
        pQVar32 = (Quadric *)&local_348;
        local_328 = local_4f8;
        auVar73 = meshopt::quadricAdd((Quadric *)((long)local_468 + uVar35 * 0x2c),
                                      (Quadric *)&local_348);
        auVar73 = meshopt::quadricAdd((Quadric *)(auVar73._8_8_ + (uVar13 + auVar73._0_8_ * 2) * 4),
                                      pQVar32);
        meshopt::quadricAdd((Quadric *)(auVar73._8_8_ + (uVar50 + auVar73._0_8_ * 2) * 4),pQVar32);
        pQVar45 = pQVar33;
        meshopt::quadricAdd((QuadricGrad *)((long)local_460 + uVar35 * uVar51 * 0x10),pQVar33,
                            extraout_RDX_02);
        meshopt::quadricAdd((QuadricGrad *)(uVar13 * uVar51 * 0x10 + (long)local_460),pQVar45,uVar51
                           );
        meshopt::quadricAdd((QuadricGrad *)(lVar21 * 0x10 + (long)local_460),pQVar45,uVar51);
      } while (puVar23 < param_3);
    }
  }
  local_35c = 0.0;
  uVar42 = param_14 & 8;
  if (uVar42 == 0) {
    local_3c8 = 0;
    if (local_458 == 0) {
      uVar13 = 0;
      pfVar24 = (float *)0x0;
      puVar23 = (uint *)0x0;
    }
    else {
      pfVar24 = (float *)0x0;
      puVar23 = (uint *)0x0;
LAB_00101a64:
      uVar13 = 0;
      uVar50 = 0;
      do {
        pbVar25 = (byte *)(pcVar14 + uVar50);
        uVar50 = uVar50 + 1;
        if ((*pbVar25 & 0xfd) == 0) {
          uVar13 = uVar13 + (uint)(*(int *)(local_358 + uVar50 * 4) -
                                  *(int *)(local_358 + -4 + uVar50 * 4));
        }
      } while (uVar50 != local_458);
      uVar13 = uVar13 >> 1;
    }
  }
  else {
    puVar23 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
    local_318[local_258] = (long)puVar23;
    if (local_458 != 0) {
      uVar13 = 0;
      do {
        puVar23[uVar13] = (uint)uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_458);
      if ((uint *)param_3 != (uint *)0x0) goto LAB_00102c6d;
LAB_00102d2e:
      uVar13 = 0;
      do {
        while (uVar13 == puVar9[uVar13]) {
          uVar54 = puVar23[uVar13];
          puVar39 = puVar23 + uVar13;
          uVar49 = uVar54;
          if (uVar54 != (uint)uVar13) {
            do {
              uVar54 = puVar23[uVar49];
              *puVar39 = uVar54;
              bVar52 = uVar49 != uVar54;
              puVar39 = puVar23 + uVar49;
              uVar49 = uVar54;
            } while (bVar52);
          }
          puVar23[uVar13] = uVar54;
          uVar13 = uVar13 + 1;
          if (uVar13 == local_458) goto LAB_00102d7b;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_458);
LAB_00102d7b:
      local_3c8 = 0;
      uVar13 = 0;
      do {
        while ((uVar50 = (ulong)puVar9[uVar13], uVar13 == uVar50 &&
               (uVar50 = (ulong)puVar23[uVar13], uVar13 == uVar50))) {
          uVar54 = (uint)local_3c8;
          local_3c8 = (ulong)(uVar54 + 1);
          puVar23[uVar13] = uVar54;
          uVar13 = uVar13 + 1;
          if (uVar13 == local_458) goto LAB_00102dc2;
        }
        puVar23[uVar13] = puVar23[uVar50];
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_458);
LAB_00102dc2:
      local_258 = local_258 + 1;
      pvVar20 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_3c8 * 0x10);
      local_318[local_258] = (long)pvVar20;
      local_258 = local_258 + 1;
      pfVar24 = (float *)memset(pvVar20,0,local_3c8 * 0x10);
      fVar68 = _LC5;
      pVVar30 = local_408;
      puVar39 = puVar23;
      do {
        uVar54 = *puVar39;
        puVar39 = puVar39 + 1;
        uVar54 = uVar54 * 4;
        pfVar12 = pfVar24 + uVar54;
        fVar56 = *(float *)(pVVar30 + 8);
        *(ulong *)pfVar12 =
             CONCAT44(pfVar24[uVar54 + 1] + *(float *)(pVVar30 + 4),*(float *)pVVar30 + *pfVar12);
        *(ulong *)(pfVar12 + 2) =
             CONCAT44(pfVar24[uVar54 + 3] + fVar68,pfVar24[uVar54 + 2] + fVar56);
        pVVar30 = pVVar30 + 0xc;
      } while (puVar39 != puVar23 + local_458);
      puVar39 = puVar23;
      pVVar30 = local_408;
      if (local_3c8 != 0) {
        pfVar12 = pfVar24;
        do {
          fVar56 = 0.0;
          if (pfVar12[3] != 0.0) {
            fVar56 = fVar68 / pfVar12[3];
          }
          pfVar12[3] = 0.0;
          pfVar31 = pfVar12 + 4;
          pfVar12[2] = fVar56 * pfVar12[2];
          *(ulong *)pfVar12 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar56,
                        (float)*(undefined8 *)pfVar12 * fVar56);
          pfVar12 = pfVar31;
        } while (pfVar31 != pfVar24 + local_3c8 * 4);
      }
      do {
        uVar54 = *puVar39;
        puVar39 = puVar39 + 1;
        uVar54 = uVar54 * 4;
        fVar56 = (*(float *)(pVVar30 + 4) - pfVar24[uVar54 + 1]) *
                 (*(float *)(pVVar30 + 4) - pfVar24[uVar54 + 1]) +
                 (*(float *)pVVar30 - pfVar24[uVar54]) * (*(float *)pVVar30 - pfVar24[uVar54]) +
                 (*(float *)(pVVar30 + 8) - pfVar24[uVar54 + 2]) *
                 (*(float *)(pVVar30 + 8) - pfVar24[uVar54 + 2]);
        fVar68 = pfVar24[uVar54 + 3];
        if (fVar56 <= fVar68) {
          fVar56 = fVar68;
        }
        pfVar24[uVar54 + 3] = fVar56;
        pVVar30 = pVVar30 + 0xc;
      } while (puVar39 != puVar23 + local_458);
      if (local_3c8 == 0) {
        local_35c = 3.4028235e+38;
      }
      else {
        pfVar12 = pfVar24;
        do {
          pfVar22 = pfVar12 + 1;
          *pfVar12 = *(float *)((long)pfVar24 * -3 + 0xc + (long)pfVar12 * 4);
          pfVar12 = pfVar22;
          pfVar31 = pfVar24;
          fVar68 = _LC0;
        } while (pfVar24 + local_3c8 != pfVar22);
        do {
          pfVar12 = pfVar31 + 1;
          local_35c = *pfVar31;
          if (fVar68 <= *pfVar31) {
            local_35c = fVar68;
          }
          pfVar31 = pfVar12;
          fVar68 = local_35c;
        } while (pfVar24 + local_3c8 != pfVar12);
      }
      goto LAB_00101a64;
    }
    if ((uint *)param_3 != (uint *)0x0) {
LAB_00102c6d:
      puVar39 = (uint *)0x0;
      pfVar24 = (float *)param_1;
      do {
        lVar43 = 0;
        do {
          uVar54 = puVar9[(uint)((float *)param_1)
                                [(long)*(int *)((long)&meshopt::
                                                  buildComponents(unsigned_int*,unsigned_long,unsigned_int_const*,unsigned_long,unsigned_int_const*)
                                                  ::next + lVar43) + (long)puVar39]];
          puVar19 = puVar23 + puVar9[*(uint *)((long)pfVar24 + lVar43)];
          uVar13 = (ulong)*puVar19;
          uVar50 = uVar13;
          if (puVar9[*(uint *)((long)pfVar24 + lVar43)] != *puVar19) {
            do {
              uVar49 = puVar23[uVar50];
              uVar13 = (ulong)uVar49;
              *puVar19 = uVar49;
              uVar8 = (uint)uVar50;
              puVar19 = puVar23 + uVar50;
              uVar50 = uVar13;
            } while (uVar8 != uVar49);
          }
          puVar19 = puVar23 + uVar54;
          uVar35 = (ulong)*puVar19;
          uVar50 = uVar35;
          if (*puVar19 != uVar54) {
            do {
              puVar74 = puVar23 + uVar50;
              uVar54 = *puVar74;
              uVar35 = (ulong)uVar54;
              *puVar19 = uVar54;
              uVar49 = (uint)uVar50;
              uVar50 = uVar35;
              puVar19 = puVar74;
            } while (uVar49 != uVar54);
          }
          uVar54 = (uint)uVar35;
          uVar49 = (uint)uVar13;
          if (uVar54 != uVar49) {
            if (uVar49 <= uVar54) {
              uVar13 = uVar35;
            }
            if (uVar49 < uVar54) {
              uVar54 = uVar49;
            }
            puVar23[uVar13] = uVar54;
          }
          lVar43 = lVar43 + 4;
        } while (lVar43 != 0xc);
        puVar39 = (uint *)((long)puVar39 + 3);
        pfVar24 = pfVar24 + 3;
      } while (puVar39 < param_3);
      if (local_458 != 0) goto LAB_00102d2e;
    }
    local_258 = local_258 + 1;
    pfVar24 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0);
    uVar13 = 0;
    local_35c = 3.4028235e+38;
    local_3c8 = 0;
    local_318[local_258] = (long)pfVar24;
    local_258 = local_258 + 1;
  }
  uVar13 = param_3 + (3 - uVar13);
  if (uVar13 < 0x1555555555555556) {
    pCVar18 = (Collapse *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(uVar13 * 0xc);
    local_318[local_258] = (long)pCVar18;
    local_258 = local_258 + 1;
LAB_00101b03:
    lVar43 = uVar13 * 4;
  }
  else {
    pCVar18 = (Collapse *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff)
    ;
    lVar43 = local_258 + 1;
    local_318[local_258] = (long)pCVar18;
    local_258 = lVar43;
    if (uVar13 >> 0x3e == 0) goto LAB_00101b03;
    lVar43 = -1;
  }
  puVar39 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar43);
  local_318[local_258] = (long)puVar39;
  local_258 = local_258 + 1;
  puVar19 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar28);
  local_318[local_258] = (long)puVar19;
  local_258 = local_258 + 1;
  pvVar20 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_458);
  lVar28 = local_258 + 1;
  local_318[local_258] = (long)pvVar20;
  if ((param_14 & 4) == 0) {
    local_3a0 = _LC5;
    fVar68 = _LC5;
  }
  else {
    fVar68 = local_3a0 * local_3a0;
  }
  fVar68 = (param_13 * param_13) / fVar68;
  local_258 = lVar28;
  if (param_12 < param_3) {
    fVar56 = 0.0;
    local_3fc = 0.0;
    local_4a8 = (uint *)param_3;
LAB_00101c38:
    do {
      pfVar12 = (float *)param_1;
      meshopt::updateEdgeAdjacency
                ((EdgeAdjacency *)&local_358,param_1,(ulong)local_4a8,local_458,puVar9);
      if (uVar13 < 3) {
LAB_00102935:
        lVar28 = local_258;
        auVar73 = ZEXT416((uint)local_3fc);
        if ((param_12 < local_4a8) && (uVar42 != 0)) {
          pfVar31 = pfVar24 + local_3c8;
          fVar56 = _LC11;
          param_1 = (uint *)pfVar12;
          if (fVar68 < local_35c) goto LAB_00102a47;
          goto LAB_001029c0;
        }
        param_3 = (ulong)local_3d8;
        if ((param_14 & 0x40000000) == 0) goto joined_r0x00103a8f;
        if (local_3d8 != (uint *)0x0) goto LAB_00102a73;
        goto LAB_0010380b;
      }
      puVar74 = (uint *)0x0;
      uVar50 = 0;
      do {
        piVar17 = &meshopt::
                   pickEdgeCollapses(meshopt::Collapse*,unsigned_long,unsigned_int_const*,unsigned_long,unsigned_int_const*,unsigned_char_const*,unsigned_int_const*,unsigned_int_const*)
                   ::next;
        pfVar31 = (float *)param_1;
        do {
          fVar58 = *pfVar31;
          fVar65 = pfVar12[(long)*piVar17 + (long)puVar74];
          if (puVar9[(uint)fVar58] != puVar9[(uint)fVar65]) {
            bVar77 = pcVar14[(uint)fVar58];
            bVar4 = pcVar14[(uint)fVar65];
            uVar35 = (ulong)bVar4;
            lVar28 = (ulong)bVar77 * 5;
            bVar5 = meshopt::kCanCollapse[uVar35 + lVar28];
            if ((bVar5 != 0 || meshopt::kCanCollapse[(ulong)bVar77 + uVar35 * 5] != 0) &&
               ((meshopt::kHasOpposite[uVar35 + lVar28] == '\0' ||
                (puVar9[(uint)fVar65] <= puVar9[(uint)fVar58])))) {
              if (bVar77 == bVar4) {
                if ((1 < (byte)(bVar77 - 1)) || (fVar65 == (float)puVar15[(uint)fVar58]))
                goto LAB_00101d52;
              }
              else if (((bVar77 != 4) && (bVar4 != 4)) ||
                      (((1 < (byte)(bVar77 - 1) || (fVar65 == (float)puVar15[(uint)fVar58])) &&
                       ((1 < (byte)(bVar4 - 1) || (fVar58 == (float)__s[(uint)fVar65])))))) {
LAB_00101d52:
                pCVar75 = pCVar18 + uVar50 * 0xc;
                if ((bVar5 & meshopt::kCanCollapse[(ulong)bVar77 + uVar35 * 5]) == 0) {
                  local_348 = fVar58;
                  fStack_344 = fVar65;
                  if (bVar5 == 0) {
                    local_348 = fVar65;
                    fStack_344 = fVar58;
                  }
                  fStack_340 = 0.0;
                  *(ulong *)pCVar75 = CONCAT44(fStack_344,local_348);
                  *(undefined4 *)(pCVar75 + 8) = 0;
                }
                else {
                  *(undefined4 *)(pCVar75 + 8) = 1;
                  *(ulong *)pCVar75 = CONCAT44(fVar65,fVar58);
                }
                uVar50 = uVar50 + 1;
              }
            }
          }
          piVar17 = piVar17 + 1;
          pfVar31 = pfVar31 + 1;
        } while (piVar17 != (int *)&DAT_0010519c);
        puVar74 = (uint *)((long)puVar74 + 3);
        if (local_4a8 <= puVar74) {
          if (uVar50 == 0) goto LAB_00102935;
          break;
        }
        param_1 = (uint *)((float *)param_1 + 3);
      } while (uVar50 + 3 <= uVar13);
      lVar43 = uVar51 << 4;
      fVar58 = 0.0;
      pCVar75 = pCVar18 + uVar50 * 0xc;
      lVar28 = uVar51 * 4;
      param_1 = (uint *)pfVar12;
      pCVar76 = pCVar18;
      do {
        fVar65 = *(float *)pCVar18;
        uVar37 = (ulong)(uint)fVar65;
        fVar55 = *(float *)(pCVar18 + 4);
        uVar35 = (ulong)(uint)fVar55;
        if (*(float *)(pCVar18 + 8) != 0.0) {
          uVar35 = (ulong)(uint)fVar65;
          fVar65 = fVar55;
        }
        pQVar32 = (Quadric *)((long)pvVar11 + (ulong)puVar9[uVar37] * 0x2c);
        uVar54 = meshopt::quadricEval(pQVar32,local_408 + (ulong)(uint)fVar55 * 0xc);
        fVar53 = (float)uVar35;
        fVar55 = 0.0;
        if (*(float *)(pQVar32 + 0x28) != fVar58) {
          fVar55 = _LC5 / *(float *)(pQVar32 + 0x28);
        }
        uVar35 = uVar35 & 0xffffffff;
        uVar37 = (ulong)(uint)fVar65;
        fVar55 = (float)(uVar54 & _LC9) * fVar55;
        pQVar32 = (Quadric *)((long)pvVar11 + (ulong)puVar9[uVar37] * 0x2c);
        lVar21 = meshopt::quadricEval(pQVar32,local_408 + uVar35 * 0xc);
        fVar62 = 0.0;
        if (*(float *)(pQVar32 + 0x28) != fVar58) {
          fVar62 = _LC5 / *(float *)(pQVar32 + 0x28);
        }
        fVar62 = (float)(extraout_XMM0_Da & _LC9) * fVar62;
        if (uVar51 != 0) {
          fVar69 = (float)meshopt::quadricError
                                    ((Quadric *)((long)local_468 + extraout_RDX * 0x2c),
                                     (QuadricGrad *)(lVar43 * extraout_RDX + (long)local_460),uVar51
                                     ,(Vector3 *)(local_450 + lVar21 * lVar28),(float *)pCVar18);
          fVar55 = fVar55 + fVar69;
          fVar69 = (float)meshopt::quadricError
                                    ((Quadric *)((long)local_468 + uVar37 * 0x2c),
                                     (QuadricGrad *)(lVar43 * uVar37 + (long)local_460),uVar51,
                                     (Vector3 *)(local_450 + uVar35 * lVar28),(float *)pCVar18);
          fVar62 = fVar62 + fVar69;
        }
        if (fVar62 < fVar55) {
          *(float *)pCVar18 = fVar65;
          *(float *)(pCVar18 + 4) = fVar53;
          fVar55 = fVar62;
        }
        *(float *)(pCVar18 + 8) = fVar55;
        pCVar18 = pCVar18 + 0xc;
      } while (pCVar75 != pCVar18);
      meshopt::sortEdgeCollapses(puVar39,pCVar76,uVar50);
      uVar35 = 0;
      uVar37 = ((long)local_4a8 - param_12) / 3;
      if (local_458 != 0) {
        do {
          puVar19[uVar35] = (uint)uVar35;
          uVar35 = uVar35 + 1;
        } while (uVar35 != local_458);
      }
      memset(pvVar20,0,local_458);
      local_430 = 0;
      local_4f8 = 0;
      uVar35 = uVar37 >> 1;
      puVar74 = puVar39 + uVar50;
      puVar38 = puVar39;
      fVar58 = fVar56;
      fVar65 = _LC11;
      fVar55 = _LC0;
      do {
        pCVar75 = pCVar76 + (ulong)*puVar38 * 0xc;
        fVar53 = *(float *)(pCVar75 + 8);
        fVar56 = fVar58;
        pCVar18 = pCVar76;
        if ((fVar68 < fVar53) || (uVar37 <= local_4f8)) break;
        fVar62 = fVar55;
        if (uVar35 < uVar50) {
          fVar62 = *(float *)(pCVar76 + (ulong)puVar39[uVar35] * 0xc + 8) * fVar65;
        }
        if (((fVar62 < fVar53) && (fVar58 < fVar53)) &&
           (((long)local_4a8 - param_12) / 0x12 < local_4f8)) break;
        uVar54 = *(uint *)pCVar75;
        uVar48 = (ulong)uVar54;
        uVar49 = *(uint *)(pCVar75 + 4);
        lVar28 = uVar48 * 4;
        uVar8 = puVar9[uVar49];
        uVar29 = (ulong)puVar9[uVar48];
        pcVar16 = (char *)((long)pvVar20 + (ulong)uVar8);
        if (*(char *)((long)pvVar20 + uVar29) == '\0' && *pcVar16 == '\0') {
          pVVar30 = local_408 + (ulong)uVar8 * 0xc;
          uVar6 = *(uint *)(local_358 + uVar29 * 4);
          pVVar36 = local_408 + uVar29 * 0xc;
          bVar77 = pcVar14[uVar48];
          uVar47 = (ulong)(*(int *)(local_358 + (ulong)(puVar9[uVar48] + 1) * 4) - uVar6);
          uVar78 = (ulong)bVar77;
          if (uVar47 != 0) {
            lVar43 = local_350 + (ulong)uVar6 * 8;
            uVar40 = 0;
            do {
              uVar6 = puVar19[*(uint *)(lVar43 + uVar40 * 8)];
              uVar7 = puVar19[*(uint *)(lVar43 + 4 + uVar40 * 8)];
              if ((uVar8 != uVar7 && uVar8 != uVar6) && (uVar6 != uVar7)) {
                pVVar3 = local_408 + (ulong)uVar7 * 0xc;
                pVVar2 = local_408 + (ulong)uVar6 * 0xc;
                fVar53 = *(float *)(pVVar2 + 4);
                fVar62 = *(float *)(pVVar2 + 8);
                fVar69 = *(float *)pVVar2;
                fVar59 = *(float *)(pVVar3 + 4) - fVar53;
                fVar66 = *(float *)(pVVar3 + 8) - fVar62;
                fVar63 = *(float *)pVVar3 - fVar69;
                fVar70 = fVar59 * (*(float *)(pVVar36 + 8) - fVar62) -
                         fVar66 * (*(float *)(pVVar36 + 4) - fVar53);
                fVar67 = fVar66 * (*(float *)pVVar36 - fVar69) -
                         (*(float *)(pVVar36 + 8) - fVar62) * fVar63;
                fVar64 = (*(float *)(pVVar36 + 4) - fVar53) * fVar63 -
                         (*(float *)pVVar36 - fVar69) * fVar59;
                fVar71 = fVar59 * (*(float *)(pVVar30 + 8) - fVar62) -
                         fVar66 * (*(float *)(pVVar30 + 4) - fVar53);
                fVar66 = fVar66 * (*(float *)pVVar30 - fVar69) -
                         (*(float *)(pVVar30 + 8) - fVar62) * fVar63;
                fVar62 = fVar63 * (*(float *)(pVVar30 + 4) - fVar53) -
                         fVar59 * (*(float *)pVVar30 - fVar69);
                fVar53 = (fVar70 * fVar70 + fVar67 * fVar67 + fVar64 * fVar64) *
                         (fVar71 * fVar71 + fVar66 * fVar66 + fVar62 * fVar62);
                if (fVar53 < 0.0) {
                  fVar53 = sqrtf(fVar53);
                  fVar65 = _LC11;
                  fVar55 = _LC0;
                }
                else {
                  fVar53 = SQRT(fVar53);
                }
                if (fVar70 * fVar71 + fVar67 * fVar66 + fVar64 * fVar62 <= fVar53 * __LC12) {
                  uVar35 = uVar35 + 1;
                  goto LAB_00102569;
                }
              }
              bVar77 = (byte)uVar78;
              uVar40 = uVar40 + 1;
            } while (uVar47 != uVar40);
          }
          uVar8 = uVar54;
          if (bVar77 == 3) {
            do {
              puVar19[uVar8] = uVar49;
              uVar8 = *(uint *)(lVar10 + (ulong)uVar8 * 4);
            } while (uVar54 != uVar8);
            lVar28 = 2;
          }
          else {
            if (bVar77 == 2) {
              uVar54 = *(uint *)(lVar10 + uVar48 * 4);
              if (uVar49 == puVar15[uVar48]) {
                uVar8 = __s[uVar54];
              }
              else {
                uVar8 = puVar15[uVar54];
              }
              if (uVar8 == 0xffffffff) {
                uVar8 = *(uint *)(lVar10 + (ulong)uVar49 * 4);
              }
              *(uint *)(lVar28 + (long)puVar19) = uVar49;
              puVar19[uVar54] = uVar8;
            }
            else {
              *(uint *)(lVar28 + (long)puVar19) = uVar49;
              if (bVar77 == 1) {
                lVar28 = 1;
                goto LAB_00102542;
              }
            }
            lVar28 = 2;
          }
LAB_00102542:
          *(char *)((long)pvVar20 + uVar29) = '\x01';
          local_4f8 = local_4f8 + lVar28;
          *pcVar16 = '\x01';
          local_430 = local_430 + 1;
          fVar56 = *(float *)(pCVar75 + 8);
          if (*(float *)(pCVar75 + 8) <= fVar58) {
            fVar56 = fVar58;
          }
        }
LAB_00102569:
        puVar38 = puVar38 + 1;
        fVar58 = fVar56;
        pCVar18 = pCVar76;
      } while (puVar74 != puVar38);
      pfVar12 = (float *)param_1;
      if (local_430 == 0) goto LAB_00102935;
      if (local_458 != 0) {
        uVar35 = 0;
        uVar50 = local_458;
LAB_001025e9:
        do {
          uVar37 = (ulong)puVar19[uVar35];
          fVar58 = local_3fc;
          if (uVar37 != uVar35) {
            uVar29 = uVar35 & 0xffffffff;
            uVar48 = (ulong)puVar9[uVar37];
            if (puVar9[uVar29] == (uint)uVar35) {
              pQVar32 = (Quadric *)((long)pvVar11 + (ulong)puVar9[uVar29] * 0x2c);
              auVar73 = meshopt::quadricAdd((Quadric *)((long)pvVar11 + uVar48 * 0x2c),pQVar32);
              if (uVar51 != 0) {
                auVar73 = meshopt::quadricAdd((Quadric *)((long)local_468 + auVar73._0_8_ * 0x2c),
                                              (Quadric *)((long)local_468 + auVar73._8_8_ * 0x2c));
                meshopt::quadricAdd((QuadricGrad *)((long)local_460 + auVar73._0_8_ * uVar51 * 0x10)
                                    ,(QuadricGrad *)
                                     ((long)local_460 + auVar73._8_8_ * uVar51 * 0x10),uVar51);
                pVVar30 = local_408 + uVar48 * 0xc;
                fVar65 = *(float *)(pVVar30 + 4);
                fVar55 = *(float *)pVVar30;
                fVar53 = *(float *)(pVVar30 + 8);
                fVar69 = *(float *)(pQVar32 + 0xc) * fVar65 + *(float *)(pQVar32 + 0x18);
                fVar62 = *(float *)(pQVar32 + 0x14) * fVar53 + *(float *)(pQVar32 + 0x1c);
                fVar70 = *(float *)(pQVar32 + 0x10) * fVar55 + *(float *)(pQVar32 + 0x20);
                fVar58 = 0.0;
                if (*(float *)(pQVar32 + 0x28) != 0.0) {
                  fVar58 = _LC5 / *(float *)(pQVar32 + 0x28);
                }
                fVar58 = (float)((uint)((*(float *)(pQVar32 + 8) * fVar53 + fVar70 + fVar70) *
                                        fVar53 + (*(float *)(pQVar32 + 4) * fVar65 + fVar62 + fVar62
                                                 ) * fVar65 +
                                                 (*(float *)pQVar32 * fVar55 + fVar69 + fVar69) *
                                                 fVar55 + *(float *)(pQVar32 + 0x24)) & _LC9) *
                         fVar58;
                if (fVar58 <= local_3fc) {
                  fVar58 = local_3fc;
                }
              }
            }
            else if (uVar51 != 0) {
              uVar35 = uVar35 + 1;
              auVar73 = meshopt::quadricAdd((Quadric *)((long)local_468 + uVar37 * 0x2c),
                                            (Quadric *)((long)local_468 + uVar29 * 0x2c));
              meshopt::quadricAdd((QuadricGrad *)((long)local_460 + auVar73._0_8_),
                                  (QuadricGrad *)((long)local_460 + auVar73._8_8_),uVar51);
              if (uVar35 == uVar50) break;
              goto LAB_001025e9;
            }
          }
          local_3fc = fVar58;
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar50);
      }
      if (uVar51 == 0) {
        local_3fc = fVar56;
      }
      param_3 = 0;
      uVar50 = local_458;
      meshopt::remapEdgeLoops(puVar15,local_458,puVar19);
      meshopt::remapEdgeLoops(__s,uVar50,extraout_RDX_00);
      puVar74 = (uint *)0x0;
      do {
        fVar58 = *(float *)(extraout_RDX_01 + (ulong)(uint)((float *)param_1)[(long)puVar74 + 1] * 4
                           );
        fVar65 = *(float *)(extraout_RDX_01 + (ulong)(uint)((float *)param_1)[(long)puVar74] * 4);
        fVar55 = *(float *)(extraout_RDX_01 + (ulong)(uint)((float *)param_1)[(long)puVar74 + 2] * 4
                           );
        if ((fVar65 != fVar58 && fVar65 != fVar55) && (fVar58 != fVar55)) {
          ((float *)param_1)[param_3 + 2] = fVar55;
          *(ulong *)((float *)param_1 + param_3) = CONCAT44(fVar58,fVar65);
          param_3 = param_3 + 3;
        }
        puVar74 = (uint *)((long)puVar74 + 3);
      } while (puVar74 < local_4a8);
      lVar28 = local_258;
      if (param_3 <= param_12) break;
      if (uVar42 != 0) {
        local_4a8 = (uint *)param_3;
        if (local_3fc < local_35c) goto LAB_00101c38;
        param_3 = meshopt::pruneComponents
                            (param_1,param_3,puVar23,pfVar24,local_3c8,local_3fc,&local_35c);
      }
      lVar28 = local_258;
      local_4a8 = (uint *)param_3;
    } while (param_12 < param_3);
  }
  else {
    local_3fc = 0.0;
  }
LAB_00102b06:
  if ((param_14 & 0x40000000) == 0) goto LAB_00102b17;
LAB_00102a5b:
  pfVar12 = (float *)param_1;
  local_4a8 = (uint *)param_3;
  if (local_3d8 == (uint *)0x0) {
    if ((uint *)param_3 != (uint *)0x0) {
LAB_0010380b:
      puVar9 = (uint *)0x0;
      do {
        fVar68 = *pfVar12;
        fVar56 = pfVar12[1];
        uVar42 = 0x80000000;
        fVar58 = pfVar12[2];
        if ((float)puVar15[(uint)fVar68] != fVar56) {
          uVar42 = (uint)((float)__s[(uint)fVar56] == fVar68) << 0x1f;
        }
        uVar54 = 0x80000000;
        *pfVar12 = (float)((uint)(byte)pcVar14[(uint)fVar68] << 0x1c | (uint)fVar68 | uVar42);
        if ((float)puVar15[(uint)fVar56] != fVar58) {
          uVar54 = (uint)((float)__s[(uint)fVar58] == fVar56) << 0x1f;
        }
        uVar42 = 0x80000000;
        pfVar12[1] = (float)((uint)(byte)pcVar14[(uint)fVar56] << 0x1c | (uint)fVar56 | uVar54);
        if ((float)puVar15[(uint)fVar58] != fVar68) {
          uVar42 = (uint)((float)__s[(uint)fVar68] == fVar58) << 0x1f;
        }
        puVar9 = (uint *)((long)puVar9 + 3);
        pfVar12[2] = (float)((uint)(byte)pcVar14[(uint)fVar58] << 0x1c | (uint)fVar58 | uVar42);
        pfVar12 = pfVar12 + 3;
      } while (puVar9 < local_4a8);
    }
    goto LAB_00102b26;
  }
  goto joined_r0x00103a8f;
  while( true ) {
    if (auVar73._0_4_ <= local_3fc) {
      auVar73._0_4_ = local_3fc;
    }
    local_3fc = auVar73._0_4_;
    if (param_3 <= param_12) goto LAB_00102b06;
    local_4a8 = (uint *)param_3;
    if (fVar68 < local_35c) break;
LAB_001029c0:
    local_3fc = auVar73._0_4_;
    fVar58 = local_35c * fVar56;
    if (fVar68 <= local_35c * fVar56) {
      fVar58 = fVar68;
    }
    if (local_3c8 == 0) {
      auVar73 = (undefined1  [16])0x0;
    }
    else {
      auVar73 = (undefined1  [16])0x0;
      pfVar22 = pfVar24;
      do {
        fVar65 = *pfVar22;
        if (auVar73._0_4_ < fVar65) {
          auVar73 = ZEXT416((uint)auVar73._0_4_ & -(uint)(fVar58 < fVar65) |
                            ~-(uint)(fVar58 < fVar65) & (uint)fVar65);
        }
        pfVar22 = pfVar22 + 1;
      } while (pfVar22 != pfVar31);
    }
    param_3 = meshopt::pruneComponents
                        ((uint *)pfVar12,(ulong)local_4a8,puVar23,pfVar24,local_3c8,fVar58,
                         &local_35c);
    if ((uint *)param_3 == local_4a8) break;
  }
LAB_00102a47:
  param_3 = (ulong)local_4a8;
  if ((param_14 & 0x40000000) != 0) goto LAB_00102a5b;
LAB_00102b17:
  local_4a8 = (uint *)param_3;
  pfVar12 = (float *)param_1;
  if (local_3d8 == (uint *)0x0) goto LAB_00102b26;
joined_r0x00103a8f:
  if ((uint *)param_3 != (uint *)0x0) {
LAB_00102a73:
    pfVar24 = pfVar12;
    do {
      pfVar31 = pfVar24 + 1;
      *pfVar24 = (float)local_3d8[(uint)*pfVar24];
      pfVar24 = pfVar31;
    } while (pfVar31 != pfVar12 + (long)local_4a8);
  }
LAB_00102b26:
  if (param_15 != (float *)0x0) {
    if (local_3fc < 0.0) {
      local_3fc = sqrtf(local_3fc);
    }
    else {
      local_3fc = SQRT(local_3fc);
    }
    *param_15 = local_3fc * local_3a0;
  }
  while (lVar28 != 0) {
    lVar28 = lVar28 + -1;
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_318[lVar28]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_4a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_simplify(float param_1,uint *param_2,uint *param_3,ulong param_4,float *param_5,
                     ulong param_6,ulong param_7,ulong param_8,uint param_9,float *param_10)

{
  meshopt_simplifyEdge
            (param_2,param_3,param_4,param_5,param_6,param_7,(float *)0x0,0,(float *)0x0,0,
             (uchar *)0x0,param_8,param_1,param_9,param_10);
  return;
}



void meshopt_simplifyWithAttributes
               (uint *param_1,uint *param_2,ulong param_3,float *param_4,ulong param_5,ulong param_6
               ,float *param_7,ulong param_8,float *param_9,ulong param_10,uchar *param_11,
               ulong param_12,float param_13,uint param_14,float *param_15)

{
  meshopt_simplifyEdge
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,param_15);
  return;
}



long meshopt_simplifySloppy
               (float param_1,long param_2,uint *param_3,uint *param_4,float *param_5,
               Vector3 *param_6,ulong param_7,ulong param_8,float *param_9)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  Vector3 *pVVar5;
  meshopt *pmVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  void *pvVar10;
  void *__s;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  Vector3 *extraout_RDX;
  Vector3 *extraout_RDX_00;
  long extraout_RDX_01;
  uint uVar19;
  Vector3 *pVVar20;
  uint uVar21;
  size_t sVar22;
  uint uVar23;
  ulong uVar24;
  Quadric *pQVar25;
  undefined8 *puVar26;
  Quadric *pQVar27;
  size_t sVar28;
  Vector3 *pVVar29;
  uint uVar30;
  meshopt *pmVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  long in_FS_OFFSET;
  float fVar36;
  uint extraout_XMM0_Da;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  ulong local_190;
  long local_168;
  Quadric local_138 [48];
  undefined8 local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar26 = local_108;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar26 = 0;
    puVar26 = puVar26 + 1;
  }
  if (param_6 < (Vector3 *)0x1555555555555556) {
    pVVar5 = (Vector3 *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)((long)param_6 * 0xc);
    local_108[local_48] = pVVar5;
    local_48 = local_48 + 1;
    meshopt::rescalePositions(pVVar5,param_5,(ulong)param_6,param_7,(uint *)0x0);
LAB_00103c01:
    local_168 = (long)param_6 << 2;
  }
  else {
    pVVar5 = (Vector3 *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_108[local_48] = pVVar5;
    local_48 = local_48 + 1;
    meshopt::rescalePositions(pVVar5,param_5,(ulong)param_6,param_7,(uint *)0x0);
    if ((ulong)param_6 >> 0x3e == 0) goto LAB_00103c01;
    local_168 = -1;
  }
  pmVar6 = (meshopt *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_168);
  local_108[local_48] = pmVar6;
  lVar16 = local_48 + 1;
  uVar18 = (ulong)param_4 / 3;
  local_48 = lVar16;
  if (_LC16 <= param_1) {
    uVar34 = (ulong)(uint)(int)(_LC5 / param_1);
    if (1 < (int)(_LC5 / param_1)) goto LAB_00103c6e;
    local_190 = 0;
  }
  else {
    uVar34 = 999;
LAB_00103c6e:
    uVar7 = uVar34;
    pmVar31 = pmVar6;
    meshopt::computeVertexIds((uint *)pmVar6,pVVar5,(ulong)param_6,(int)uVar34);
    local_190 = meshopt::countTriangles(pmVar31,param_3,param_4,uVar7);
  }
  iVar14 = (int)uVar34;
  fVar36 = (float)(param_8 / 6);
  if (fVar36 < 0.0) {
    fVar36 = sqrtf(fVar36);
  }
  else {
    fVar36 = SQRT(fVar36);
  }
  param_8 = param_8 / 3;
  uVar19 = (uint)(fVar36 + _LC6);
  if ((local_190 < param_8) && (1 < 0x401 - iVar14)) {
    uVar35 = 0;
    uVar30 = 0x401;
    fVar36 = _LC6;
    do {
      iVar33 = (int)uVar34;
      if (iVar33 < (int)uVar19) {
        if ((int)uVar30 <= (int)uVar19) {
          uVar19 = uVar30 - 1;
        }
      }
      else {
        uVar19 = iVar33 + 1;
      }
      uVar17 = (ulong)uVar19;
      uVar7 = uVar17;
      pmVar31 = pmVar6;
      meshopt::computeVertexIds((uint *)pmVar6,pVVar5,(ulong)param_6,uVar19);
      uVar7 = meshopt::countTriangles(pmVar31,param_3,param_4,uVar7);
      if (param_8 < uVar7) {
        uVar17 = uVar34;
        uVar24 = uVar7;
        uVar34 = local_190;
        uVar32 = local_190;
        uVar21 = uVar19;
        if (uVar35 < 5) goto LAB_00103dca;
LAB_00103d35:
        iVar14 = (int)uVar17;
        uVar19 = (int)(iVar14 + uVar21) / 2;
        local_190 = uVar34;
        uVar34 = uVar17;
        uVar18 = uVar24;
        uVar30 = uVar21;
        if (uVar35 == 0xe) break;
      }
      else {
        uVar24 = uVar18;
        uVar34 = uVar7;
        uVar32 = uVar7;
        uVar21 = uVar30;
        if (4 < uVar35) goto LAB_00103d35;
LAB_00103dca:
        iVar14 = (int)uVar17;
        fVar41 = (float)uVar18;
        fVar38 = (float)uVar7;
        fVar39 = (float)(int)uVar19;
        fVar40 = (float)param_8;
        fVar37 = (float)(long)local_190;
        uVar19 = (uint)(((fVar41 - fVar37) *
                        (fVar38 - fVar40) * (fVar39 - (float)(int)uVar30) * (fVar39 - (float)iVar33)
                        ) / ((fVar41 - fVar40) * (fVar39 - (float)(int)uVar30) * (fVar37 - fVar38) +
                            (fVar37 - fVar40) * (fVar39 - (float)iVar33) * (fVar38 - fVar41)) +
                        fVar39 + fVar36);
        uVar34 = uVar17;
        uVar18 = uVar24;
        local_190 = uVar32;
        uVar30 = uVar21;
      }
      if (param_8 <= local_190) goto LAB_00103e9c;
      uVar35 = uVar35 + 1;
      iVar14 = (int)uVar34;
    } while (1 < (int)(uVar30 - iVar14));
  }
  if (local_190 == 0) {
    lVar13 = 0;
    if (param_9 != (float *)0x0) {
      *param_9 = 1.0;
    }
    goto joined_r0x00104543;
  }
LAB_00103e9c:
  pVVar20 = (Vector3 *)0x1;
  lVar16 = 4;
  if ((Vector3 *)0x1 < param_6 + ((ulong)param_6 >> 2)) {
    do {
      pVVar29 = pVVar20;
      pVVar20 = (Vector3 *)((long)pVVar29 * 2);
    } while (pVVar20 < param_6 + ((ulong)param_6 >> 2));
    lVar16 = -1;
    if (pVVar20 < (Vector3 *)0x4000000000000000) {
      lVar16 = (long)pVVar29 << 3;
    }
  }
  puVar8 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar16);
  local_108[local_48] = puVar8;
  local_48 = local_48 + 1;
  puVar9 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_168);
  local_108[local_48] = puVar9;
  pVVar29 = param_6;
  local_48 = local_48 + 1;
  meshopt::computeVertexIds((uint *)pmVar6,pVVar5,(ulong)param_6,iVar14);
  uVar18 = meshopt::fillVertexCells(puVar8,(ulong)pVVar20,puVar9,(uint *)pmVar6,(ulong)pVVar29);
  sVar22 = uVar18 * 4;
  if (uVar18 < 0x5d1745d1745d175) {
    lVar16 = uVar18 * 0x2c;
  }
  else {
    lVar16 = -1;
  }
  puVar8 = (uint *)0x0;
  pvVar10 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar16);
  local_108[local_48] = pvVar10;
  local_48 = local_48 + 1;
  pvVar10 = memset(pvVar10,0,uVar18 * 0x2c);
  pVVar20 = extraout_RDX;
  if (param_4 != (uint *)0x0) {
    do {
      uVar19 = puVar9[param_3[(long)puVar8]];
      uVar30 = puVar9[param_3[(long)puVar8 + 1]];
      uVar35 = puVar9[param_3[(long)puVar8 + 2]];
      meshopt::quadricFromTriangle
                (local_138,pVVar5 + (ulong)param_3[(long)puVar8] * 0xc,pVVar20,
                 pVVar5 + (ulong)param_3[(long)puVar8 + 2] * 0xc,
                 *(float *)(pVVar5 + (ulong)param_3[(long)puVar8] * 0xc));
      pQVar27 = (Quadric *)((long)pvVar10 + (ulong)uVar19 * 0x2c);
      pQVar25 = local_138;
      if (uVar19 != uVar30 || uVar19 != uVar35) {
        meshopt::quadricAdd(pQVar27,local_138);
        auVar42 = meshopt::quadricAdd((Quadric *)((long)pvVar10 + (ulong)uVar30 * 0x2c),pQVar25);
        pQVar27 = (Quadric *)(auVar42._8_8_ + ((ulong)uVar35 + auVar42._0_8_ * 2) * 4);
      }
      meshopt::quadricAdd(pQVar27,pQVar25);
      puVar8 = (uint *)((long)puVar8 + 3);
      pVVar20 = extraout_RDX_00;
    } while (puVar8 < param_4);
  }
  uVar34 = uVar18;
  if (uVar18 >> 0x3e == 0) {
    __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar22);
    local_108[local_48] = __s;
    local_48 = local_48 + 1;
    pfVar11 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar22);
    local_108[local_48] = pfVar11;
    local_48 = local_48 + 1;
    memset(__s,-1,sVar22);
    if (param_6 != (Vector3 *)0x0) {
LAB_001041e7:
      pVVar5 = (Vector3 *)0x0;
      fVar37 = 0.0;
      uVar19 = _LC9;
      fVar36 = _LC5;
      do {
        pQVar27 = (Quadric *)((long)pvVar10 + (ulong)puVar9[(long)pVVar5] * 0x2c);
        lVar16 = meshopt::quadricEval(pQVar27,param_6);
        fVar38 = 0.0;
        if (*(float *)(pQVar27 + 0x28) != fVar37) {
          fVar38 = fVar36 / *(float *)(pQVar27 + 0x28);
        }
        fVar38 = (float)(extraout_XMM0_Da & uVar19) * fVar38;
        if ((*(int *)((long)__s + lVar16) == -1) || (fVar38 < *(float *)(lVar16 + (long)pfVar11))) {
          *(int *)((long)__s + lVar16) = (int)extraout_RDX_01;
          *(float *)(lVar16 + (long)pfVar11) = fVar38;
        }
        pVVar5 = (Vector3 *)(extraout_RDX_01 + 1);
      } while (param_6 != pVVar5);
    }
    fVar36 = 0.0;
    if (uVar34 != 0) goto LAB_00104286;
  }
  else {
    __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_108[local_48] = __s;
    local_48 = local_48 + 1;
    pfVar11 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_108[local_48] = pfVar11;
    local_48 = local_48 + 1;
    memset(__s,-1,sVar22);
    if (param_6 != (Vector3 *)0x0) goto LAB_001041e7;
LAB_00104286:
    pfVar12 = pfVar11 + uVar18;
    fVar37 = 0.0;
    do {
      fVar36 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      if (fVar36 <= fVar37) {
        fVar36 = fVar37;
      }
      fVar37 = fVar36;
    } while (pfVar11 != pfVar12);
  }
  local_190 = (local_190 >> 2) + local_190;
  if (local_190 < 2) {
    sVar22 = 4;
    uVar18 = 1;
LAB_00104717:
    sVar28 = sVar22;
  }
  else {
    uVar18 = 1;
    do {
      uVar34 = uVar18;
      uVar18 = uVar34 * 2;
    } while (uVar18 < local_190);
    sVar22 = uVar34 << 3;
    sVar28 = 0xffffffffffffffff;
    if (uVar18 >> 0x3e == 0) goto LAB_00104717;
  }
  pvVar10 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar28);
  local_108[local_48] = pvVar10;
  local_48 = local_48 + 1;
  pvVar10 = memset(pvVar10,-1,sVar22);
  lVar16 = local_48;
  lVar13 = 0;
  if (param_4 != (uint *)0x0) {
    puVar8 = (uint *)0x0;
    local_190 = 0;
    do {
      uVar19 = puVar9[param_3[(long)puVar8 + 1]];
      uVar30 = puVar9[param_3[(long)puVar8]];
      uVar35 = puVar9[param_3[(long)puVar8 + 2]];
      if ((uVar30 != uVar19 && uVar30 != uVar35) && (uVar19 != uVar35)) {
        uVar30 = *(uint *)((long)__s + (ulong)uVar30 * 4);
        uVar35 = *(uint *)((long)__s + (ulong)uVar35 * 4);
        uVar19 = *(uint *)((long)__s + (ulong)uVar19 * 4);
        uVar21 = uVar35;
        if (uVar30 <= uVar35) {
          uVar21 = uVar30;
        }
        uVar4 = uVar30;
        uVar15 = uVar35;
        uVar23 = uVar19;
        if (uVar21 <= uVar19) {
          uVar21 = uVar19;
          if (uVar30 <= uVar19) {
            uVar21 = uVar30;
          }
          uVar4 = uVar19;
          uVar15 = uVar30;
          uVar23 = uVar35;
          if (uVar21 <= uVar35) {
            uVar4 = uVar35;
            uVar15 = uVar19;
            uVar23 = uVar30;
          }
        }
        iVar14 = (int)lVar13;
        lVar3 = (local_190 + lVar13) * 4;
        *(uint *)(param_2 + (local_190 + lVar13) * 4) = uVar23;
        *(uint *)(param_2 + 8 + lVar3) = uVar4;
        piVar1 = (int *)(param_2 + (ulong)(uint)(iVar14 * 3) * 4);
        *(uint *)(param_2 + 4 + lVar3) = uVar15;
        uVar34 = (ulong)(uint)(piVar1[1] * 0x127409f ^ *piVar1 * 0x466f45d ^ piVar1[2] * 0x4f9ffb7);
        uVar7 = 0;
        while( true ) {
          uVar34 = uVar34 & uVar18 - 1;
          piVar2 = (int *)((long)pvVar10 + uVar34 * 4);
          iVar33 = *piVar2;
          if (iVar33 == -1) break;
          piVar2 = (int *)(param_2 + (ulong)(uint)(iVar33 * 3) * 4);
          if (((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) && (piVar1[2] == piVar2[2]))
          goto LAB_00104468;
          uVar34 = uVar34 + 1 + uVar7;
          uVar7 = uVar7 + 1;
          if (uVar7 == uVar18) {
            lVar16 = meshopt_simplifySloppy_cold();
            return lVar16;
          }
        }
        lVar13 = lVar13 + 1;
        *piVar2 = iVar14;
        local_190 = lVar13 * 2;
      }
LAB_00104468:
      puVar8 = (uint *)((long)puVar8 + 3);
    } while (puVar8 < param_4);
    lVar13 = local_190 + lVar13;
  }
  if (param_9 != (float *)0x0) {
    if (fVar36 < 0.0) {
      fVar36 = sqrtf(fVar36);
    }
    else {
      fVar36 = SQRT(fVar36);
    }
    *param_9 = fVar36;
  }
joined_r0x00104543:
  while (lVar16 != 0) {
    lVar16 = lVar16 + -1;
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar16]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong meshopt_simplifyPoints
                (float param_1,void *param_2,float *param_3,ulong param_4,ulong param_5,
                float *param_6,ulong param_7,ulong param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *__s;
  ulong uVar9;
  uint *puVar10;
  float *__s_00;
  float *pfVar11;
  float *pfVar12;
  void *__s_01;
  long lVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  Vector3 *pVVar17;
  ulong uVar18;
  long *plVar19;
  size_t sVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong local_158;
  ulong local_150;
  Vector3 *local_148;
  size_t local_140;
  float local_138;
  long local_130;
  long local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == 0) {
    uVar8 = 0;
LAB_00104b47:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar8;
  }
  plVar19 = local_108;
  for (lVar15 = 0x18; lVar15 != 0; lVar15 = lVar15 + -1) {
    *plVar19 = 0;
    plVar19 = plVar19 + 1;
  }
  local_48 = 0;
  if (param_4 < 0x1555555555555556) {
    local_148 = (Vector3 *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_4 * 0xc);
    local_108[local_48] = (long)local_148;
    local_48 = local_48 + 1;
    meshopt::rescalePositions(local_148,param_3,param_4,param_5,(uint *)0x0);
LAB_00104ad6:
    local_130 = param_4 * 4;
  }
  else {
    local_148 = (Vector3 *)
                (*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_108[local_48] = (long)local_148;
    local_48 = local_48 + 1;
    meshopt::rescalePositions(local_148,param_3,param_4,param_5,(uint *)0x0);
    if (param_4 >> 0x3e == 0) goto LAB_00104ad6;
    local_130 = -1;
  }
  puVar7 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_130);
  local_108[local_48] = (long)puVar7;
  uVar8 = (param_4 >> 2) + param_4;
  if (uVar8 < 2) {
    local_140 = 4;
    uVar18 = 1;
  }
  else {
    uVar18 = 1;
    do {
      uVar21 = uVar18;
      uVar18 = uVar21 * 2;
    } while (uVar18 < uVar8);
    local_140 = uVar21 * 8;
    sVar20 = 0xffffffffffffffff;
    if (uVar18 >> 0x3e != 0) goto LAB_001048bb;
  }
  sVar20 = local_140;
LAB_001048bb:
  local_48 = local_48 + 1;
  __s = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar20);
  local_108[local_48] = (long)__s;
  fVar26 = (float)param_8;
  if (fVar26 < 0.0) {
    local_48 = local_48 + 1;
    fVar25 = sqrtf(fVar26);
  }
  else {
    fVar25 = SQRT(fVar26);
    local_48 = local_48 + 1;
  }
  iVar2 = 0;
  local_158 = 0;
  iVar22 = (int)(fVar25 + _LC6);
  iVar23 = 0;
  local_150 = param_4;
  iVar5 = 0x401;
  if (0 < iVar22) goto LAB_00104a7f;
  do {
    iVar24 = iVar23;
    iVar22 = iVar23 + 1;
LAB_00104959:
    meshopt::computeVertexIds(puVar7,local_148,param_4,iVar22);
    memset(__s,-1,local_140);
    if (param_4 != 0) {
      uVar8 = 0;
      uVar21 = 0;
      do {
        uVar3 = puVar7[uVar21];
        uVar6 = (uVar3 >> 0xd ^ uVar3) * 0x5bd1e995;
        uVar9 = (ulong)(uVar6 ^ uVar6 >> 0xf);
        uVar16 = 0;
        while( true ) {
          uVar9 = uVar9 & uVar18 - 1;
          uVar6 = __s[uVar9];
          if ((uVar3 == uVar6) || (uVar6 == 0xffffffff)) break;
          uVar9 = uVar9 + 1 + uVar16;
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar18) {
            uVar8 = meshopt_simplifyPoints_cold();
            return uVar8;
          }
        }
        uVar21 = uVar21 + 1;
        __s[uVar9] = uVar3;
        uVar8 = uVar8 + (uVar6 == 0xffffffff);
      } while (param_4 != uVar21);
      fVar25 = (float)uVar8;
      uVar21 = local_158;
      uVar9 = uVar8;
      iVar23 = iVar24;
      iVar4 = iVar22;
      if (param_8 < uVar8) goto LAB_00104a2b;
      if (param_8 != uVar8) {
        uVar9 = local_150;
        iVar23 = iVar22;
        iVar4 = iVar5;
        if (1 < iVar5 - iVar22) goto LAB_00104a38;
        goto LAB_00104b0a;
      }
LAB_00104cce:
      puVar10 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_130);
      local_108[local_48] = (long)puVar10;
      uVar8 = param_4;
      local_48 = local_48 + 1;
      meshopt::computeVertexIds(puVar7,local_148,param_4,iVar22);
      uVar8 = meshopt::fillVertexCells(__s,uVar18,puVar10,puVar7,uVar8);
      if (uVar8 < 0x924924924924925) {
        lVar15 = uVar8 * 0x1c;
      }
      else {
        lVar15 = -1;
      }
      __s_00 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar15);
      local_108[local_48] = (long)__s_00;
      local_48 = local_48 + 1;
      memset(__s_00,0,uVar8 * 0x1c);
      fVar26 = _LC5;
      if (param_4 != 0) {
        pVVar17 = local_148;
        puVar7 = puVar10;
        pfVar11 = param_6;
        do {
          pfVar12 = __s_00 + (ulong)*puVar7 * 7;
          pfVar14 = (float *)meshopt::
                             fillCellReservoirs(meshopt::Reservoir*,unsigned_long,meshopt::Vector3_const*,float_const*,unsigned_long,unsigned_long,unsigned_int_const*)
                             ::dummy_color;
          if (param_6 != (float *)0x0) {
            pfVar14 = pfVar11;
          }
          puVar7 = puVar7 + 1;
          pfVar11 = pfVar11 + (param_7 >> 2);
          *pfVar12 = *pfVar12 + *(float *)pVVar17;
          pfVar12[1] = pfVar12[1] + *(float *)(pVVar17 + 4);
          pfVar12[2] = pfVar12[2] + *(float *)(pVVar17 + 8);
          pfVar12[3] = pfVar12[3] + *pfVar14;
          pfVar12[4] = pfVar12[4] + pfVar14[1];
          pfVar12[5] = pfVar12[5] + pfVar14[2];
          pfVar12[6] = pfVar12[6] + fVar26;
          pVVar17 = pVVar17 + 0xc;
        } while (puVar7 != puVar10 + param_4);
      }
      fVar26 = _LC5;
      pfVar11 = __s_00;
      if (uVar8 != 0) {
        do {
          fVar25 = 0.0;
          if (pfVar11[6] != 0.0) {
            fVar25 = fVar26 / pfVar11[6];
          }
          pfVar12 = pfVar11 + 7;
          *pfVar11 = fVar25 * *pfVar11;
          pfVar11[1] = fVar25 * pfVar11[1];
          pfVar11[2] = fVar25 * pfVar11[2];
          pfVar11[3] = fVar25 * pfVar11[3];
          *(ulong *)(pfVar11 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20) * fVar25,
                        (float)*(undefined8 *)(pfVar11 + 4) * fVar25);
          pfVar11 = pfVar12;
        } while (pfVar12 != __s_00 + uVar8 * 7);
      }
      sVar20 = uVar8 * 4;
      __s_01 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar20);
      local_108[local_48] = (long)__s_01;
      local_48 = local_48 + 1;
      lVar15 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar20);
      local_108[local_48] = lVar15;
      local_138 = param_1;
      if (iVar22 != 1) {
        local_138 = (_LC5 / (float)(iVar22 + -1)) * param_1;
      }
      local_48 = local_48 + 1;
      memset(__s_01,-1,sVar20);
      if (param_4 != 0) {
        uVar18 = 0;
        pfVar11 = param_6;
        do {
          pfVar12 = __s_00 + (ulong)puVar10[uVar18] * 7;
          if (param_6 == (float *)0x0) {
            fVar27 = 0.0;
            fVar25 = 0.0;
            fVar26 = 0.0;
          }
          else {
            fVar26 = *pfVar11;
            fVar25 = pfVar11[1];
            fVar27 = pfVar11[2];
          }
          lVar13 = (ulong)puVar10[uVar18] * 4;
          piVar1 = (int *)((long)__s_01 + lVar13);
          pfVar14 = (float *)(lVar13 + lVar15);
          fVar26 = ((fVar26 - pfVar12[3]) * (fVar26 - pfVar12[3]) +
                    (fVar25 - pfVar12[4]) * (fVar25 - pfVar12[4]) +
                   (fVar27 - pfVar12[5]) * (fVar27 - pfVar12[5])) * local_138 * local_138 +
                   (*(float *)local_148 - *pfVar12) * (*(float *)local_148 - *pfVar12) +
                   (*(float *)(local_148 + 4) - pfVar12[1]) *
                   (*(float *)(local_148 + 4) - pfVar12[1]) +
                   (*(float *)(local_148 + 8) - pfVar12[2]) *
                   (*(float *)(local_148 + 8) - pfVar12[2]);
          if ((*piVar1 == -1) || (fVar26 < *pfVar14)) {
            *piVar1 = (int)uVar18;
            *pfVar14 = fVar26;
          }
          uVar18 = uVar18 + 1;
          local_148 = local_148 + 0xc;
          pfVar11 = pfVar11 + (param_7 >> 2);
        } while (param_4 != uVar18);
      }
      memcpy(param_2,__s_01,sVar20);
      lVar15 = local_48;
joined_r0x00104b21:
      while (lVar15 != 0) {
        (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar15 + -1]);
        lVar15 = lVar15 + -1;
      }
      goto LAB_00104b47;
    }
    fVar25 = 0.0;
    uVar21 = 0;
    uVar9 = local_150;
    iVar23 = iVar22;
    iVar4 = iVar5;
LAB_00104a2b:
    uVar8 = uVar21;
    if (iVar4 - iVar23 < 2) {
LAB_00104b0a:
      iVar22 = iVar23;
      lVar15 = local_48;
      if (uVar8 != 0) goto LAB_00104cce;
      goto joined_r0x00104b21;
    }
LAB_00104a38:
    if (iVar2 < 5) {
      fVar29 = (float)local_150;
      fVar27 = (float)local_158;
      fVar28 = (float)iVar22;
      iVar22 = (int)(((fVar29 - fVar27) *
                     (fVar25 - fVar26) * (fVar28 - (float)iVar5) * (fVar28 - (float)iVar24)) /
                     ((fVar29 - fVar26) * (fVar28 - (float)iVar5) * (fVar27 - fVar25) +
                     (fVar25 - fVar29) * (fVar27 - fVar26) * (fVar28 - (float)iVar24)) + fVar28 +
                    _LC6);
    }
    else {
      iVar22 = (iVar4 + iVar23) / 2;
      if (iVar2 == 0xe) goto LAB_00104b0a;
    }
    iVar2 = iVar2 + 1;
    local_158 = uVar8;
    local_150 = uVar9;
    iVar5 = iVar4;
  } while (iVar22 <= iVar23);
LAB_00104a7f:
  iVar24 = iVar23;
  if (iVar5 <= iVar22) {
    iVar22 = iVar5 + -1;
  }
  goto LAB_00104959;
}



void meshopt_simplifyScale(float *param_1,ulong param_2,ulong param_3)

{
  meshopt::rescalePositions((Vector3 *)0x0,param_1,param_2,param_3,(uint *)0x0);
  return;
}



/* meshopt::fillVertexCells(unsigned int*, unsigned long, unsigned int*, unsigned int const*,
   unsigned long) [clone .cold] */

void meshopt::fillVertexCells(uint *param_1,ulong param_2,uint *param_3,uint *param_4,ulong param_5)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* meshopt_simplifyEdge(unsigned int*, unsigned int const*, unsigned long, float const*, unsigned
   long, unsigned long, float const*, unsigned long, float const*, unsigned long, unsigned char
   const*, unsigned long, float, unsigned int, float*) [clone .cold] */

void meshopt_simplifyEdge
               (uint *param_1,uint *param_2,ulong param_3,float *param_4,ulong param_5,ulong param_6
               ,float *param_7,ulong param_8,float *param_9,ulong param_10,uchar *param_11,
               ulong param_12,float param_13,uint param_14,float *param_15)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00105149(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void meshopt_simplifySloppy_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void meshopt_simplifyPoints_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


