
/* RVO3D::KdTree3D::KdTree3D(RVO3D::RVOSimulator3D*) */

void __thiscall RVO3D::KdTree3D::KdTree3D(KdTree3D *this,RVOSimulator3D *param_1)

{
  *(RVOSimulator3D **)(this + 0x30) = param_1;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return;
}



/* RVO3D::KdTree3D::buildAgentTreeRecursive(unsigned long, unsigned long, unsigned long) */

void __thiscall
RVO3D::KdTree3D::buildAgentTreeRecursive(KdTree3D *this,ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar3 = *(long *)this;
  lVar4 = *(long *)(this + 0x18);
  do {
    fVar13 = _LC0;
    puVar1 = (ulong *)(lVar4 + param_3 * 0x38);
    lVar9 = *(long *)(lVar3 + param_1 * 8);
    *puVar1 = param_1;
    fVar17 = *(float *)(lVar9 + 0x10);
    fVar14 = *(float *)(lVar9 + 0x14);
    fVar18 = *(float *)(lVar9 + 0xc);
    uVar6 = *(ulong *)(lVar9 + 0xc);
    puVar1[1] = param_2;
    *(float *)(puVar1 + 6) = fVar17;
    *(float *)((long)puVar1 + 0x34) = fVar14;
    puVar1[4] = uVar6;
    puVar1[5] = CONCAT44(fVar18,fVar14);
    if (param_1 + 1 < param_2) {
      plVar7 = (long *)(lVar3 + 8 + param_1 * 8);
      fVar19 = fVar18;
      fVar15 = fVar17;
      fVar16 = fVar14;
      do {
        lVar9 = *plVar7;
        plVar7 = plVar7 + 1;
        fVar20 = *(float *)(lVar9 + 0xc);
        if (*(float *)(lVar9 + 0xc) <= fVar19) {
          fVar20 = fVar19;
        }
        *(float *)(puVar1 + 4) = fVar20;
        fVar19 = *(float *)(lVar9 + 0xc);
        if (fVar18 <= *(float *)(lVar9 + 0xc)) {
          fVar19 = fVar18;
        }
        fVar18 = fVar19;
        *(float *)((long)puVar1 + 0x2c) = fVar18;
        fVar21 = *(float *)(lVar9 + 0x10);
        if (*(float *)(lVar9 + 0x10) <= fVar15) {
          fVar21 = fVar15;
        }
        *(float *)((long)puVar1 + 0x24) = fVar21;
        fVar19 = *(float *)(lVar9 + 0x10);
        if (fVar17 <= *(float *)(lVar9 + 0x10)) {
          fVar19 = fVar17;
        }
        fVar17 = fVar19;
        *(float *)(puVar1 + 6) = fVar17;
        fVar19 = *(float *)(lVar9 + 0x14);
        if (*(float *)(lVar9 + 0x14) <= fVar14) {
          fVar19 = fVar14;
        }
        fVar14 = fVar19;
        *(float *)(puVar1 + 5) = fVar14;
        fVar22 = *(float *)(lVar9 + 0x14);
        if (fVar16 <= *(float *)(lVar9 + 0x14)) {
          fVar22 = fVar16;
        }
        *(float *)((long)puVar1 + 0x34) = fVar22;
        fVar19 = fVar20;
        fVar15 = fVar21;
        fVar16 = fVar22;
      } while ((long *)(lVar3 + param_2 * 8) != plVar7);
    }
    if (param_2 - param_1 < 0xb) {
      return;
    }
    fVar18 = *(float *)(puVar1 + 4);
    fVar17 = *(float *)((long)puVar1 + 0x2c);
    fVar19 = *(float *)((long)puVar1 + 0x24) - *(float *)(puVar1 + 6);
    fVar14 = *(float *)(puVar1 + 5) - *(float *)((long)puVar1 + 0x34);
    if ((fVar18 - fVar17 <= fVar19) || (fVar18 - fVar17 <= fVar14)) {
      uVar12 = -(uint)(fVar14 < fVar19);
      lVar9 = 1;
      if (fVar19 <= fVar14) {
        lVar9 = 2;
      }
      fVar17 = (float)(~uVar12 & (uint)*(float *)((long)puVar1 + 0x34) |
                      (uint)*(float *)(puVar1 + 6) & uVar12);
      fVar18 = (float)(~uVar12 & (uint)*(float *)(puVar1 + 5) |
                      (uint)*(float *)((long)puVar1 + 0x24) & uVar12);
    }
    else {
      lVar9 = 0;
    }
    fVar13 = (fVar18 + fVar17) * fVar13;
    uVar6 = param_2;
    for (uVar11 = param_1; uVar11 < uVar6; uVar11 = uVar11 + 1) {
      do {
        uVar10 = uVar11 + 1;
        pfVar2 = (float *)(*(long *)(lVar3 + uVar11 * 8) + 0xc + lVar9 * 4);
        if (fVar13 < *pfVar2 || fVar13 == *pfVar2) break;
        uVar11 = uVar10;
      } while (uVar10 < uVar6);
      plVar7 = (long *)(lVar3 + -8 + uVar6 * 8);
      do {
        plVar8 = plVar7;
        if (uVar6 <= uVar11) goto LAB_00100216;
        uVar6 = uVar6 - 1;
        plVar7 = plVar8 + -1;
      } while (fVar13 <= *(float *)(*plVar8 + 0xc + lVar9 * 4));
      plVar7 = (long *)(lVar3 + uVar11 * 8);
      lVar5 = *plVar7;
      *plVar7 = *plVar8;
      *plVar8 = lVar5;
    }
LAB_00100216:
    lVar9 = (uVar11 - param_1) * 2;
    if (uVar11 - param_1 == 0) {
      uVar11 = uVar11 + 1;
      lVar9 = 2;
    }
    puVar1[3] = lVar9 + param_3;
    puVar1[2] = param_3 + 1;
    buildAgentTreeRecursive(this,param_1,uVar11,param_3 + 1);
    param_3 = puVar1[3];
    param_1 = uVar11;
  } while( true );
}



/* RVO3D::KdTree3D::queryAgentTreeRecursive(RVO3D::Agent3D*, float&, unsigned long) const */

void __thiscall
RVO3D::KdTree3D::queryAgentTreeRecursive
          (KdTree3D *this,Agent3D *param_1,float *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = param_3 * 0x38;
  lVar3 = *(long *)(this + 0x18);
  puVar4 = (ulong *)(lVar3 + lVar5);
  uVar2 = puVar4[1];
  uVar6 = *puVar4;
  if (10 < uVar2 - uVar6) {
    fVar16 = *param_2;
    do {
      fVar15 = *(float *)(param_1 + 0xc);
      fVar12 = 0.0;
      lVar1 = lVar3 + puVar4[2] * 0x38;
      fVar7 = *(float *)(lVar1 + 0x2c) - fVar15;
      if (0.0 < fVar7) {
        fVar12 = fVar7 * fVar7;
      }
      fVar7 = fVar15 - *(float *)(lVar1 + 0x20);
      if (0.0 < fVar7) {
        fVar7 = fVar7 * fVar7;
      }
      else {
        fVar7 = 0.0;
      }
      fVar14 = *(float *)(param_1 + 0x10);
      fVar8 = *(float *)(lVar1 + 0x30) - fVar14;
      if (0.0 < fVar8) {
        fVar8 = fVar8 * fVar8;
      }
      else {
        fVar8 = 0.0;
      }
      fVar9 = fVar14 - *(float *)(lVar1 + 0x24);
      if (0.0 < fVar9) {
        fVar9 = fVar9 * fVar9;
      }
      else {
        fVar9 = 0.0;
      }
      fVar13 = *(float *)(param_1 + 0x14);
      fVar10 = *(float *)(lVar1 + 0x34) - fVar13;
      if (0.0 < fVar10) {
        fVar10 = fVar10 * fVar10;
      }
      else {
        fVar10 = 0.0;
      }
      fVar11 = fVar13 - *(float *)(lVar1 + 0x28);
      if (0.0 < fVar11) {
        fVar11 = fVar11 * fVar11;
      }
      else {
        fVar11 = 0.0;
      }
      fVar11 = fVar12 + fVar7 + fVar8 + fVar9 + fVar10 + fVar11;
      lVar3 = lVar3 + puVar4[3] * 0x38;
      fVar7 = *(float *)(lVar3 + 0x2c) - fVar15;
      if (0.0 < fVar7) {
        fVar7 = fVar7 * fVar7;
      }
      else {
        fVar7 = 0.0;
      }
      fVar15 = fVar15 - *(float *)(lVar3 + 0x20);
      if (0.0 < fVar15) {
        fVar15 = fVar15 * fVar15;
      }
      else {
        fVar15 = 0.0;
      }
      fVar12 = *(float *)(lVar3 + 0x30) - fVar14;
      if (0.0 < fVar12) {
        fVar12 = fVar12 * fVar12;
      }
      else {
        fVar12 = 0.0;
      }
      fVar14 = fVar14 - *(float *)(lVar3 + 0x24);
      if (0.0 < fVar14) {
        fVar14 = fVar14 * fVar14;
      }
      else {
        fVar14 = 0.0;
      }
      fVar8 = *(float *)(lVar3 + 0x34) - fVar13;
      if (0.0 < fVar8) {
        fVar8 = fVar8 * fVar8;
      }
      else {
        fVar8 = 0.0;
      }
      fVar13 = fVar13 - *(float *)(lVar3 + 0x28);
      if (0.0 < fVar13) {
        fVar13 = fVar13 * fVar13;
      }
      else {
        fVar13 = 0.0;
      }
      fVar13 = fVar7 + fVar15 + fVar12 + fVar14 + fVar8 + fVar13;
      if (fVar11 < fVar13) {
        if (fVar16 <= fVar11) {
          return;
        }
        queryAgentTreeRecursive(this,param_1,param_2,puVar4[2]);
        fVar16 = *param_2;
        if (fVar16 <= fVar13) {
          return;
        }
        lVar3 = *(long *)(this + 0x18);
        lVar5 = *(long *)(lVar3 + 0x18 + lVar5);
      }
      else {
        if (fVar16 <= fVar13) {
          return;
        }
        queryAgentTreeRecursive(this,param_1,param_2,puVar4[3]);
        fVar16 = *param_2;
        if (fVar16 <= fVar11) {
          return;
        }
        lVar3 = *(long *)(this + 0x18);
        lVar5 = *(long *)(lVar3 + 0x10 + lVar5);
      }
      lVar5 = lVar5 * 0x38;
      puVar4 = (ulong *)(lVar3 + lVar5);
      uVar2 = puVar4[1];
      uVar6 = *puVar4;
    } while (10 < uVar2 - uVar6);
  }
  if (uVar6 < uVar2) {
    do {
      lVar3 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      RVO3D::Agent3D::insertAgentNeighbor(param_1,*(float **)(*(long *)this + lVar3));
    } while (uVar6 < *(ulong *)(*(long *)(this + 0x18) + 8 + lVar5));
  }
  return;
}



/* RVO3D::KdTree3D::computeAgentNeighbors(RVO3D::Agent3D*, float) const */

void __thiscall
RVO3D::KdTree3D::computeAgentNeighbors(KdTree3D *this,Agent3D *param_1,float param_2)

{
  float local_c [3];
  
  local_c[0] = param_2;
  queryAgentTreeRecursive(this,param_1,local_c,0);
  return;
}



/* RVO3D::KdTree3D::buildAgentTree(std::vector<RVO3D::Agent3D*, std::allocator<RVO3D::Agent3D*> >)
    */

void __thiscall RVO3D::KdTree3D::buildAgentTree(KdTree3D *this,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = param_2[1];
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar4 = *(undefined8 *)this;
  uVar5 = *(undefined8 *)(this + 8);
  *(undefined8 *)this = *param_2;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = param_2[2];
  param_2[2] = uVar2;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  if (*(long *)this == *(long *)(this + 8)) {
    return;
  }
  uVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = uVar8 * 2 - 1;
  lVar6 = *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3;
  uVar7 = lVar6 * 0x6db6db6db6db6db7;
  if (uVar1 <= uVar7) {
    if ((uVar1 < uVar7) &&
       (lVar6 = *(long *)(this + 0x18) + uVar1 * 0x38, *(long *)(this + 0x20) != lVar6)) {
      *(long *)(this + 0x20) = lVar6;
    }
    buildAgentTreeRecursive(this,0,uVar8,0);
    return;
  }
  std::vector<RVO3D::KdTree3D::AgentTreeNode3D,std::allocator<RVO3D::KdTree3D::AgentTreeNode3D>>::
  _M_default_append((vector<RVO3D::KdTree3D::AgentTreeNode3D,std::allocator<RVO3D::KdTree3D::AgentTreeNode3D>>
                     *)(this + 0x18),uVar1 + lVar6 * -0x6db6db6db6db6db7);
  buildAgentTreeRecursive(this,0,*(long *)(this + 8) - *(long *)this >> 3,0);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<RVO3D::KdTree3D::AgentTreeNode3D, std::allocator<RVO3D::KdTree3D::AgentTreeNode3D>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<RVO3D::KdTree3D::AgentTreeNode3D,std::allocator<RVO3D::KdTree3D::AgentTreeNode3D>>::
_M_default_append(vector<RVO3D::KdTree3D::AgentTreeNode3D,std::allocator<RVO3D::KdTree3D::AgentTreeNode3D>>
                  *this,ulong param_1)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  long lVar16;
  
  if (param_1 == 0) {
    return;
  }
  pauVar2 = *(undefined1 (**) [16])(this + 8);
  pauVar3 = *(undefined1 (**) [16])this;
  pauVar11 = pauVar2;
  uVar15 = param_1;
  if ((ulong)((*(long *)(this + 0x10) - (long)pauVar2 >> 3) * 0x6db6db6db6db6db7) < param_1) {
    lVar16 = (long)pauVar2 - (long)pauVar3 >> 3;
    if (lVar16 * -0x6db6db6db6db6db7 + 0x249249249249249U < param_1) {
      std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar15 = param_1 + lVar16 * 0x6db6db6db6db6db7;
    uVar12 = 0x249249249249249;
    if (uVar15 < 0x24924924924924a) {
      uVar12 = uVar15;
    }
    if ((param_1 <= (ulong)(lVar16 * 0x6db6db6db6db6db7)) &&
       (uVar12 = lVar16 * -0x2492492492492492, 0x249249249249249 < uVar12)) {
      uVar12 = 0x249249249249249;
    }
    puVar13 = (undefined8 *)operator_new(uVar12 * 0x38);
    pauVar11 = (undefined1 (*) [16])((long)puVar13 + ((long)pauVar2 - (long)pauVar3));
    pauVar14 = pauVar11;
    do {
      *(undefined8 *)pauVar14[3] = 0;
      pauVar8 = pauVar14 + 3;
      *pauVar14 = (undefined1  [16])0x0;
      pauVar14[1] = (undefined1  [16])0x0;
      pauVar14[2] = (undefined1  [16])0x0;
      pauVar14 = (undefined1 (*) [16])(*pauVar8 + 8);
      pauVar9 = pauVar3;
      puVar10 = puVar13;
    } while ((undefined1 (*) [16])(*pauVar8 + 8) !=
             (undefined1 (*) [16])((long)pauVar11 + param_1 * 0x38));
    for (; pauVar9 != pauVar2; pauVar9 = (undefined1 (*) [16])(pauVar9[3] + 8)) {
      uVar4 = *(undefined8 *)*pauVar9;
      uVar5 = *(undefined8 *)(*pauVar9 + 8);
      uVar6 = *(undefined8 *)pauVar9[1];
      uVar7 = *(undefined8 *)(pauVar9[1] + 8);
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)pauVar9[2];
      uVar1 = *(undefined4 *)(pauVar9[2] + 4);
      *puVar10 = uVar4;
      puVar10[1] = uVar5;
      *(undefined4 *)((long)puVar10 + 0x24) = uVar1;
      uVar1 = *(undefined4 *)(pauVar9[2] + 8);
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      *(undefined4 *)(puVar10 + 5) = uVar1;
      uVar4 = *(undefined8 *)pauVar9[3];
      *(undefined4 *)((long)puVar10 + 0x2c) = *(undefined4 *)(pauVar9[2] + 0xc);
      puVar10[6] = uVar4;
      puVar10 = puVar10 + 7;
    }
    if (pauVar3 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar3,*(long *)(this + 0x10) - (long)pauVar3);
    }
    *(undefined8 **)this = puVar13;
    *(undefined8 **)(this + 8) = puVar13 + uVar15 * 7;
    *(undefined8 **)(this + 0x10) = puVar13 + uVar12 * 7;
    return;
  }
  do {
    *(undefined8 *)pauVar11[3] = 0;
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11[1] = (undefined1  [16])0x0;
    pauVar11[2] = (undefined1  [16])0x0;
    uVar15 = uVar15 - 1;
    pauVar11 = (undefined1 (*) [16])(pauVar11[3] + 8);
  } while (uVar15 != 0);
  *(ulong *)(this + 8) = (long)pauVar2 + param_1 * 0x38;
  return;
}


