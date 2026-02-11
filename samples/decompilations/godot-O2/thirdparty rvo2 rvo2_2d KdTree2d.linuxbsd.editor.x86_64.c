
/* RVO2D::KdTree2D::deleteObstacleTree(RVO2D::KdTree2D::ObstacleTreeNode*) [clone .part.0] */

void __thiscall RVO2D::KdTree2D::deleteObstacleTree(KdTree2D *this,ObstacleTreeNode *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    puVar2 = (undefined8 *)puVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    operator_delete(puVar1,0x18);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    puVar2 = (undefined8 *)puVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    operator_delete(puVar1,0x18);
  }
  operator_delete(param_1,0x18);
  return;
}



/* RVO2D::KdTree2D::KdTree2D(RVO2D::RVOSimulator2D*) */

void __thiscall RVO2D::KdTree2D::KdTree2D(KdTree2D *this,RVOSimulator2D *param_1)

{
  *(undefined8 *)(this + 0x30) = 0;
  *(RVOSimulator2D **)(this + 0x38) = param_1;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return;
}



/* RVO2D::KdTree2D::~KdTree2D() */

void __thiscall RVO2D::KdTree2D::~KdTree2D(KdTree2D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    puVar2 = (undefined8 *)puVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    operator_delete(puVar1,0x18);
  }
  pvVar4 = *(void **)(this + 0x18);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x28) - (long)pvVar4);
  }
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x10) - (long)pvVar4);
    return;
  }
  return;
}



/* RVO2D::KdTree2D::buildAgentTreeRecursive(unsigned long, unsigned long, unsigned long) */

void __thiscall
RVO2D::KdTree2D::buildAgentTreeRecursive(KdTree2D *this,ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar3 = *(long *)this;
  lVar4 = *(long *)(this + 0x18);
  do {
    lVar5 = *(long *)(lVar3 + param_1 * 8);
    fVar16 = *(float *)(lVar5 + 0x60);
    fVar17 = *(float *)(lVar5 + 100);
    fVar18 = *(float *)(lVar5 + 0x60);
    uVar7 = *(undefined4 *)(lVar5 + 100);
    puVar13 = (ulong *)(param_3 * 0x30 + lVar4);
    *puVar13 = param_1;
    puVar13[1] = param_2;
    *(float *)(puVar13 + 3) = fVar18;
    *(undefined4 *)((long)puVar13 + 0x1c) = uVar7;
    *(float *)(puVar13 + 4) = fVar16;
    *(float *)((long)puVar13 + 0x24) = fVar17;
    if (param_1 + 1 < param_2) {
      plVar8 = (long *)(lVar3 + 8 + param_1 * 8);
      fVar18 = fVar16;
      fVar19 = fVar17;
      do {
        lVar5 = *plVar8;
        plVar8 = plVar8 + 1;
        fVar15 = *(float *)(lVar5 + 0x60);
        fVar14 = fVar15;
        if (fVar18 <= fVar15) {
          fVar14 = fVar18;
        }
        if (fVar15 <= fVar16) {
          fVar15 = fVar16;
        }
        fVar16 = fVar15;
        fVar18 = *(float *)(lVar5 + 100);
        fVar15 = fVar18;
        if (fVar19 <= fVar18) {
          fVar15 = fVar19;
        }
        if (fVar18 <= fVar17) {
          fVar18 = fVar17;
        }
        fVar17 = fVar18;
        fVar18 = fVar14;
        fVar19 = fVar15;
      } while (plVar8 != (long *)(lVar3 + param_2 * 8));
      *(float *)(puVar13 + 3) = fVar16;
      *(float *)(puVar13 + 4) = fVar14;
      *(float *)((long)puVar13 + 0x1c) = fVar17;
      *(float *)((long)puVar13 + 0x24) = fVar15;
    }
    if (param_2 - param_1 < 0xb) {
      return;
    }
    fVar16 = *(float *)(puVar13 + 3) - *(float *)(puVar13 + 4);
    fVar17 = *(float *)((long)puVar13 + 0x1c) - *(float *)((long)puVar13 + 0x24);
    if (fVar16 <= fVar17) {
      fVar18 = *(float *)((long)puVar13 + 0x1c) + *(float *)((long)puVar13 + 0x24);
    }
    else {
      fVar18 = *(float *)(puVar13 + 3) + *(float *)(puVar13 + 4);
    }
    fVar18 = _LC0 * fVar18;
    uVar9 = param_2;
    uVar11 = param_1;
LAB_00100538:
    uVar12 = uVar11;
    if (uVar11 < uVar9) {
      do {
        while( true ) {
          lVar5 = *(long *)(lVar3 + uVar12 * 8);
          if (fVar17 < fVar16) {
            fVar19 = *(float *)(lVar5 + 0x60);
          }
          else {
            fVar19 = *(float *)(lVar5 + 100);
          }
          uVar11 = uVar12 + 1;
          uVar10 = uVar9;
          if (fVar19 < fVar18) break;
          do {
            while( true ) {
              uVar9 = uVar10;
              if (uVar9 <= uVar12) goto LAB_001005b0;
              uVar10 = uVar9 - 1;
              lVar5 = *(long *)(lVar3 + uVar10 * 8);
              if (fVar17 < fVar16) break;
              if (*(float *)(lVar5 + 100) < fVar18) goto LAB_0010059a;
            }
          } while (fVar18 <= *(float *)(lVar5 + 0x60));
LAB_0010059a:
          if (uVar12 < uVar9) {
            uVar9 = uVar9 - 1;
            puVar1 = (undefined8 *)(lVar3 + uVar12 * 8);
            puVar2 = (undefined8 *)(lVar3 + uVar9 * 8);
            uVar6 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar6;
            goto LAB_00100538;
          }
          if (uVar9 <= uVar12) goto LAB_001005b0;
        }
        uVar12 = uVar11;
      } while (uVar11 < uVar9);
      goto LAB_00100538;
    }
LAB_001005b0:
    puVar13[2] = param_3 + 1;
    uVar12 = uVar12 + (uVar12 == param_1);
    puVar13[5] = param_3 + (uVar12 - param_1) * 2;
    buildAgentTreeRecursive(this,param_1,uVar12,param_3 + 1);
    param_3 = puVar13[5];
    param_1 = uVar12;
  } while( true );
}



/* RVO2D::KdTree2D::deleteObstacleTree(RVO2D::KdTree2D::ObstacleTreeNode*) */

void __thiscall RVO2D::KdTree2D::deleteObstacleTree(KdTree2D *this,ObstacleTreeNode *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (ObstacleTreeNode *)0x0) {
    puVar1 = *(undefined8 **)param_1;
    if (puVar1 != (undefined8 *)0x0) {
      if ((ObstacleTreeNode *)*puVar1 != (ObstacleTreeNode *)0x0) {
        deleteObstacleTree(this,(ObstacleTreeNode *)*puVar1);
      }
      puVar2 = (undefined8 *)puVar1[2];
      if (puVar2 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar2 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar2);
        }
        if ((ObstacleTreeNode *)puVar2[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar2[2]);
        }
        operator_delete(puVar2,0x18);
      }
      operator_delete(puVar1,0x18);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      if ((ObstacleTreeNode *)*puVar1 != (ObstacleTreeNode *)0x0) {
        deleteObstacleTree(this,(ObstacleTreeNode *)*puVar1);
      }
      puVar2 = (undefined8 *)puVar1[2];
      if (puVar2 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar2 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar2);
        }
        if ((ObstacleTreeNode *)puVar2[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar2[2]);
        }
        operator_delete(puVar2,0x18);
      }
      operator_delete(puVar1,0x18);
    }
    operator_delete(param_1,0x18);
    return;
  }
  return;
}



/* RVO2D::KdTree2D::queryAgentTreeRecursive(RVO2D::Agent2D*, float&, unsigned long) const */

void __thiscall
RVO2D::KdTree2D::queryAgentTreeRecursive
          (KdTree2D *this,Agent2D *param_1,float *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
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
  
  lVar5 = param_3 * 0x30;
  lVar2 = *(long *)(this + 0x18);
  puVar4 = (ulong *)(lVar2 + lVar5);
  uVar3 = puVar4[1];
  uVar6 = *puVar4;
  if (10 < uVar3 - uVar6) {
    fVar13 = *param_2;
    do {
      fVar12 = *(float *)(param_1 + 0x60);
      fVar10 = 0.0;
      lVar1 = puVar4[2] * 0x30 + lVar2;
      fVar7 = *(float *)(lVar1 + 0x20) - fVar12;
      if (0.0 < fVar7) {
        fVar10 = fVar7 * fVar7;
      }
      fVar7 = fVar12 - *(float *)(lVar1 + 0x18);
      if (0.0 < fVar7) {
        fVar7 = fVar7 * fVar7;
      }
      else {
        fVar7 = 0.0;
      }
      fVar11 = *(float *)(param_1 + 100);
      fVar8 = *(float *)(lVar1 + 0x24) - fVar11;
      if (0.0 < fVar8) {
        fVar8 = fVar8 * fVar8;
      }
      else {
        fVar8 = 0.0;
      }
      fVar9 = fVar11 - *(float *)(lVar1 + 0x1c);
      if (0.0 < fVar9) {
        fVar9 = fVar9 * fVar9;
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = fVar10 + fVar7 + fVar8 + fVar9;
      lVar2 = puVar4[5] * 0x30 + lVar2;
      fVar7 = *(float *)(lVar2 + 0x20) - fVar12;
      if (0.0 < fVar7) {
        fVar7 = fVar7 * fVar7;
      }
      else {
        fVar7 = 0.0;
      }
      fVar12 = fVar12 - *(float *)(lVar2 + 0x18);
      if (0.0 < fVar12) {
        fVar12 = fVar12 * fVar12;
      }
      else {
        fVar12 = 0.0;
      }
      fVar10 = *(float *)(lVar2 + 0x24) - fVar11;
      if (0.0 < fVar10) {
        fVar10 = fVar10 * fVar10;
      }
      else {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 - *(float *)(lVar2 + 0x1c);
      if (0.0 < fVar11) {
        fVar11 = fVar11 * fVar11;
      }
      else {
        fVar11 = 0.0;
      }
      fVar11 = fVar7 + fVar12 + fVar10 + fVar11;
      if (fVar9 < fVar11) {
        if (fVar13 <= fVar9) {
          return;
        }
        queryAgentTreeRecursive(this,param_1,param_2,puVar4[2]);
        fVar13 = *param_2;
        if (fVar13 <= fVar11) {
          return;
        }
        lVar2 = *(long *)(this + 0x18);
        lVar5 = *(long *)(lVar2 + 0x28 + lVar5);
      }
      else {
        if (fVar13 <= fVar11) {
          return;
        }
        queryAgentTreeRecursive(this,param_1,param_2,puVar4[5]);
        fVar13 = *param_2;
        if (fVar13 <= fVar9) {
          return;
        }
        lVar2 = *(long *)(this + 0x18);
        lVar5 = *(long *)(lVar2 + 0x10 + lVar5);
      }
      lVar5 = lVar5 * 0x30;
      puVar4 = (ulong *)(lVar2 + lVar5);
      uVar3 = puVar4[1];
      uVar6 = *puVar4;
    } while (10 < uVar3 - uVar6);
  }
  if (uVar6 < uVar3) {
    do {
      lVar2 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      RVO2D::Agent2D::insertAgentNeighbor(param_1,*(float **)(*(long *)this + lVar2));
    } while (uVar6 < *(ulong *)(*(long *)(this + 0x18) + 8 + lVar5));
  }
  return;
}



/* RVO2D::KdTree2D::computeAgentNeighbors(RVO2D::Agent2D*, float&) const */

void __thiscall
RVO2D::KdTree2D::computeAgentNeighbors(KdTree2D *this,Agent2D *param_1,float *param_2)

{
  queryAgentTreeRecursive(this,param_1,param_2,0);
  return;
}



/* RVO2D::KdTree2D::queryObstacleTreeRecursive(RVO2D::Agent2D*, float,
   RVO2D::KdTree2D::ObstacleTreeNode const*) const */

void __thiscall
RVO2D::KdTree2D::queryObstacleTreeRecursive
          (KdTree2D *this,Agent2D *param_1,float param_2,ObstacleTreeNode *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 == (ObstacleTreeNode *)0x0) {
    return;
  }
  do {
    while( true ) {
      lVar1 = *(long *)(param_3 + 8);
      lVar2 = *(long *)(lVar1 + 8);
      fVar4 = (*(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14)) *
              (*(float *)(lVar1 + 0x10) - *(float *)(param_1 + 0x60)) -
              (*(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10)) *
              (*(float *)(lVar1 + 0x14) - *(float *)(param_1 + 100));
      if (0.0 <= fVar4) break;
      queryObstacleTreeRecursive(this,param_1,param_2,*(ObstacleTreeNode **)(param_3 + 0x10));
      fVar5 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar3 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
      if (param_2 <= (fVar4 * fVar4) / (fVar3 * fVar3 + fVar5 * fVar5)) {
        return;
      }
      RVO2D::Agent2D::insertObstacleNeighbor((Obstacle2D *)param_1,param_2);
      param_3 = *(ObstacleTreeNode **)param_3;
      if (param_3 == (ObstacleTreeNode *)0x0) {
        return;
      }
    }
    queryObstacleTreeRecursive(this,param_1,param_2,*(ObstacleTreeNode **)param_3);
    fVar5 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
    fVar3 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
    if (param_2 <= (fVar4 * fVar4) / (fVar3 * fVar3 + fVar5 * fVar5)) {
      return;
    }
    param_3 = *(ObstacleTreeNode **)(param_3 + 0x10);
  } while (param_3 != (ObstacleTreeNode *)0x0);
  return;
}



/* RVO2D::KdTree2D::computeObstacleNeighbors(RVO2D::Agent2D*, float) const */

void __thiscall
RVO2D::KdTree2D::computeObstacleNeighbors(KdTree2D *this,Agent2D *param_1,float param_2)

{
  queryObstacleTreeRecursive(this,param_1,param_2,*(ObstacleTreeNode **)(this + 0x30));
  return;
}



/* RVO2D::KdTree2D::queryVisibilityRecursive(RVO2D::Vector2 const&, RVO2D::Vector2 const&, float,
   RVO2D::KdTree2D::ObstacleTreeNode const*) const */

undefined8 __thiscall
RVO2D::KdTree2D::queryVisibilityRecursive
          (KdTree2D *this,Vector2 *param_1,Vector2 *param_2,float param_3,ObstacleTreeNode *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_4 == (ObstacleTreeNode *)0x0) {
    return 1;
  }
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)param_2;
  do {
    lVar6 = *(long *)(param_4 + 8);
    fVar9 = *(float *)(lVar6 + 0x14);
    fVar11 = *(float *)(lVar6 + 0x10);
    fVar14 = *(float *)(*(long *)(lVar6 + 8) + 0x14);
    fVar5 = *(float *)(*(long *)(lVar6 + 8) + 0x10);
    fVar8 = fVar14 - fVar9;
    fVar12 = fVar5 - fVar11;
    fVar10 = (fVar11 - fVar2) * fVar8 - (fVar9 - fVar1) * fVar12;
    fVar13 = (fVar11 - fVar4) * fVar8 - (fVar9 - fVar3) * fVar12;
    fVar8 = _LC2 / (fVar8 * fVar8 + fVar12 * fVar12);
    if (fVar10 < 0.0) {
      if (0.0 < fVar10) {
LAB_00100da3:
        fVar10 = fVar3 - fVar1;
        fVar8 = fVar4 - fVar2;
        fVar9 = (fVar2 - fVar11) * fVar10 - (fVar1 - fVar9) * fVar8;
        fVar11 = (fVar2 - fVar5) * fVar10 - (fVar1 - fVar14) * fVar8;
        if (fVar11 * fVar9 < 0.0) {
          return 0;
        }
        fVar14 = _LC2 / (fVar8 * fVar8 + fVar10 * fVar10);
        if (fVar9 * fVar9 * fVar14 <= param_3 * param_3) {
          return 0;
        }
        if (fVar11 * fVar11 * fVar14 <= param_3 * param_3) {
          return 0;
        }
        goto LAB_00100c5d;
      }
LAB_00100d96:
      if (0.0 < fVar13) goto LAB_00100da3;
      uVar7 = queryVisibilityRecursive
                        (this,param_1,param_2,param_3,*(ObstacleTreeNode **)(param_4 + 0x10));
      if ((char)uVar7 == '\0') {
        return uVar7;
      }
      if ((param_3 * param_3 <= fVar10 * fVar10 * fVar8) &&
         (param_3 * param_3 <= fVar13 * fVar13 * fVar8)) {
        return uVar7;
      }
      param_4 = *(ObstacleTreeNode **)param_4;
    }
    else {
      if (0.0 <= fVar13) {
        uVar7 = queryVisibilityRecursive(this,param_1,param_2,param_3,*(ObstacleTreeNode **)param_4)
        ;
        if ((char)uVar7 == '\0') {
          return uVar7;
        }
        if ((param_3 * param_3 <= fVar10 * fVar10 * fVar8) &&
           (param_3 * param_3 <= fVar13 * fVar13 * fVar8)) {
          return uVar7;
        }
      }
      else {
        if (fVar10 == 0.0) goto LAB_00100d96;
        if (0.0 < fVar13) goto LAB_00100da3;
LAB_00100c5d:
        uVar7 = queryVisibilityRecursive(this,param_1,param_2,param_3,*(ObstacleTreeNode **)param_4)
        ;
        if ((char)uVar7 == '\0') {
          return uVar7;
        }
      }
      param_4 = *(ObstacleTreeNode **)(param_4 + 0x10);
    }
    if (param_4 == (ObstacleTreeNode *)0x0) {
      return 1;
    }
  } while( true );
}



/* RVO2D::KdTree2D::queryVisibility(RVO2D::Vector2 const&, RVO2D::Vector2 const&, float) const */

void __thiscall
RVO2D::KdTree2D::queryVisibility(KdTree2D *this,Vector2 *param_1,Vector2 *param_2,float param_3)

{
  queryVisibilityRecursive(this,param_1,param_2,param_3,*(ObstacleTreeNode **)(this + 0x30));
  return;
}



/* RVO2D::KdTree2D::buildAgentTree(std::vector<RVO2D::Agent2D*, std::allocator<RVO2D::Agent2D*> >)
    */

void __thiscall RVO2D::KdTree2D::buildAgentTree(KdTree2D *this,undefined8 *param_2)

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
  lVar6 = *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 4;
  uVar7 = lVar6 * -0x5555555555555555;
  if (uVar1 <= uVar7) {
    if ((uVar1 < uVar7) &&
       (lVar6 = *(long *)(this + 0x18) + uVar1 * 0x30, *(long *)(this + 0x20) != lVar6)) {
      *(long *)(this + 0x20) = lVar6;
    }
    buildAgentTreeRecursive(this,0,uVar8,0);
    return;
  }
  std::vector<RVO2D::KdTree2D::AgentTreeNode,std::allocator<RVO2D::KdTree2D::AgentTreeNode>>::
  _M_default_append((vector<RVO2D::KdTree2D::AgentTreeNode,std::allocator<RVO2D::KdTree2D::AgentTreeNode>>
                     *)(this + 0x18),uVar1 + lVar6 * 0x5555555555555555);
  buildAgentTreeRecursive(this,0,*(long *)(this + 8) - *(long *)this >> 3,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RVO2D::KdTree2D::buildObstacleTreeRecursive(std::vector<RVO2D::Obstacle2D*,
   std::allocator<RVO2D::Obstacle2D*> > const&) */

undefined8 * __thiscall RVO2D::KdTree2D::buildObstacleTreeRecursive(KdTree2D *this,vector *param_1)

{
  float fVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  vector *pvVar6;
  vector *pvVar7;
  undefined8 *puVar8;
  Obstacle2D *this_00;
  undefined8 uVar9;
  undefined8 *puVar10;
  vector *pvVar11;
  vector *pvVar12;
  long lVar13;
  vector *pvVar14;
  long lVar15;
  vector *pvVar16;
  ulong uVar17;
  vector *pvVar18;
  vector *pvVar19;
  ulong uVar20;
  vector *pvVar21;
  long lVar22;
  vector *pvVar23;
  char *this_01;
  vector *pvVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  vector *pvVar28;
  vector *pvVar29;
  long in_FS_OFFSET;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 *local_f0;
  vector *local_e8;
  undefined8 *local_a0;
  Obstacle2D *local_80;
  undefined8 *local_78;
  undefined1 local_70 [8];
  undefined8 *puStack_68;
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined8 *puStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == *(long *)param_1) {
    local_a0 = (undefined8 *)0x0;
LAB_00101636:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_a0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pvVar21 = param_1;
  local_a0 = (undefined8 *)operator_new(0x18);
  plVar2 = *(long **)param_1;
  lVar13 = (long)*(long **)(param_1 + 8) - (long)plVar2;
  pvVar28 = (vector *)(lVar13 >> 3);
  pvVar29 = pvVar28;
  pvVar19 = pvVar28;
  if (plVar2 != *(long **)(param_1 + 8)) {
    lVar26 = *plVar2;
    lVar15 = *(long *)(lVar26 + 8);
    if (lVar13 == 0) {
      local_e8 = (vector *)0x0;
      pvVar14 = (vector *)0x0;
      pvVar7 = (vector *)0x0;
      pvVar11 = (vector *)0x0;
      pvVar19 = (vector *)0x0;
      pvVar21 = (vector *)0x0;
      pvVar24 = (vector *)0x0;
      pvVar29 = (vector *)0x0;
      pvVar12 = (vector *)0x0;
      pvVar23 = (vector *)0x0;
      goto LAB_001011e8;
    }
    local_e8 = (vector *)0x0;
    pvVar23 = (vector *)0x0;
    do {
      pvVar21 = pvVar29;
      if (pvVar29 <= pvVar19) {
        pvVar21 = pvVar19;
      }
      pvVar24 = pvVar29;
      if (pvVar19 <= pvVar29) {
        pvVar24 = pvVar19;
      }
      pvVar12 = pvVar21;
      if (pvVar29 > pvVar19) {
        pvVar12 = pvVar29;
      }
      pvVar14 = (vector *)0x0;
      pvVar7 = (vector *)0x0;
      pvVar11 = (vector *)0x0;
      do {
        if (pvVar23 != pvVar11) {
          lVar13 = plVar2[(long)pvVar11];
          fVar30 = *(float *)(lVar26 + 0x14);
          fVar1 = *(float *)(lVar26 + 0x10);
          fVar35 = *(float *)(lVar15 + 0x14) - fVar30;
          fVar33 = *(float *)(lVar15 + 0x10) - fVar1;
          fVar31 = (fVar1 - *(float *)(lVar13 + 0x10)) * fVar35 -
                   (fVar30 - *(float *)(lVar13 + 0x14)) * fVar33;
          fVar30 = (fVar1 - *(float *)(*(long *)(lVar13 + 8) + 0x10)) * fVar35 -
                   (fVar30 - *(float *)(*(long *)(lVar13 + 8) + 0x14)) * fVar33;
          if ((((__LC5 <= fVar31) && (__LC5 <= fVar30)) || (pvVar14 = pvVar14 + 1, _LC6 < fVar31))
             || (_LC6 < fVar30)) {
            pvVar7 = pvVar7 + 1;
          }
          pvVar16 = pvVar7;
          pvVar18 = pvVar14;
          if ((pvVar7 <= pvVar14) && (pvVar18 = pvVar7, pvVar7 <= pvVar14)) {
            pvVar16 = pvVar14;
          }
          if ((pvVar12 <= pvVar16) && ((pvVar24 <= pvVar18 || (pvVar16 != pvVar12)))) break;
        }
        pvVar11 = pvVar11 + 1;
      } while (pvVar11 < pvVar28);
      pvVar24 = pvVar29;
      if (pvVar19 < pvVar29) {
        pvVar21 = pvVar29;
        pvVar24 = pvVar19;
      }
      pvVar12 = pvVar7;
      pvVar11 = pvVar14;
      if ((pvVar7 <= pvVar14) && (pvVar11 = pvVar7, pvVar7 <= pvVar14)) {
        pvVar12 = pvVar14;
      }
      pvVar16 = pvVar7;
      pvVar18 = pvVar14;
      pvVar6 = pvVar23;
      if (pvVar12 < pvVar21) {
LAB_001010c8:
        local_e8 = pvVar6;
        pvVar29 = pvVar16;
        pvVar19 = pvVar18;
      }
      else {
LAB_001011e8:
        pvVar16 = pvVar29;
        pvVar18 = pvVar19;
        pvVar6 = local_e8;
        if ((pvVar24 <= pvVar11) ||
           (pvVar16 = pvVar7, pvVar18 = pvVar14, pvVar6 = pvVar23, pvVar12 == pvVar21))
        goto LAB_001010c8;
      }
      pvVar23 = pvVar23 + 1;
      if (pvVar28 <= pvVar23) goto LAB_00101210;
      lVar26 = plVar2[(long)pvVar23];
      lVar15 = *(long *)(lVar26 + 8);
    } while( true );
  }
  local_e8 = (vector *)0x0;
LAB_00101210:
  if ((ulong)pvVar29 >> 0x3c == 0) {
    _local_70 = (undefined1  [16])0x0;
    if (pvVar29 == (vector *)0x0) {
      local_78 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0x0;
      local_f0 = (undefined8 *)0x0;
      uVar17 = 0;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar17 = (long)pvVar29 * 8;
      local_f0 = (undefined8 *)operator_new(uVar17);
      puVar10 = local_f0 + (long)pvVar29;
      puVar8 = local_f0 + 1;
      *local_f0 = 0;
      local_78 = local_f0;
      puStack_68 = puVar10;
      if (pvVar29 == (vector *)0x1) {
        uVar17 = 8;
        puVar10 = puVar8;
      }
      else if (puVar8 != puVar10) {
        pvVar21 = (vector *)0x0;
        memset(puVar8,0,uVar17 - 8);
      }
    }
    local_70 = (undefined1  [8])puVar10;
    if ((ulong)pvVar19 >> 0x3c == 0) {
      _local_50 = (undefined1  [16])0x0;
      if (pvVar19 == (vector *)0x0) {
        local_58 = (undefined8 *)0x0;
        puVar8 = (undefined8 *)0x0;
        puStack_48 = (undefined8 *)0x0;
        uVar20 = 0;
        puVar10 = (undefined8 *)0x0;
      }
      else {
        uVar20 = (long)pvVar19 * 8;
        puVar8 = (undefined8 *)operator_new(uVar20);
        puVar10 = puVar8 + (long)pvVar19;
        puVar5 = puVar8 + 1;
        *puVar8 = 0;
        local_58 = puVar8;
        puStack_48 = puVar10;
        if (pvVar19 == (vector *)0x1) {
          uVar20 = 8;
          puVar10 = puVar5;
        }
        else if (puVar5 != puVar10) {
          memset(puVar5,0,uVar20 - 8);
        }
      }
      lVar15 = *(long *)param_1;
      pvVar29 = (vector *)0x0;
      lVar22 = 0;
      local_50 = (undefined1  [8])puVar10;
      lVar25 = 0;
      lVar13 = *(long *)(lVar15 + (long)local_e8 * 8);
      lVar26 = *(long *)(lVar13 + 8);
      if (lVar15 != *(long *)(param_1 + 8)) {
        do {
          lVar27 = lVar25;
          if (local_e8 != pvVar29) {
            lVar3 = *(long *)(lVar15 + (long)pvVar29 * 8);
            fVar30 = *(float *)(lVar13 + 0x14);
            fVar1 = *(float *)(lVar13 + 0x10);
            lVar4 = *(long *)(lVar3 + 8);
            fVar31 = *(float *)(lVar3 + 0x14);
            fVar32 = *(float *)(lVar26 + 0x14) - fVar30;
            fVar37 = (float)*(undefined8 *)(lVar3 + 0x10);
            uVar9 = *(undefined8 *)(lVar4 + 0x10);
            fVar34 = *(float *)(lVar26 + 0x10) - fVar1;
            fVar36 = (float)uVar9;
            fVar33 = (fVar1 - fVar37) * fVar32 - (fVar30 - fVar31) * fVar34;
            fVar35 = (fVar1 - fVar36) * fVar32 - (fVar30 - *(float *)(lVar4 + 0x14)) * fVar34;
            if ((fVar33 < __LC5) || (fVar35 < __LC5)) {
              plVar2 = puVar8 + lVar22;
              if ((_LC6 < fVar33) || (_LC6 < fVar35)) {
                fVar35 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
                fVar30 = ((fVar31 - fVar30) * fVar34 - (fVar37 - fVar1) * fVar32) /
                         ((fVar31 - *(float *)(lVar4 + 0x14)) * fVar34 - (fVar37 - fVar36) * fVar32)
                ;
                this_00 = (Obstacle2D *)operator_new(0x40);
                RVO2D::Obstacle2D::Obstacle2D(this_00);
                lVar15 = *(long *)(this + 0x38);
                *(ulong *)(this_00 + 0x10) =
                     CONCAT44(fVar35 + ((float)((ulong)uVar9 >> 0x20) - fVar35) * fVar30,
                              fVar37 + (fVar36 - fVar37) * fVar30);
                uVar9 = *(undefined8 *)(lVar3 + 0x20);
                puVar10 = *(undefined8 **)(lVar15 + 0x38);
                *(long *)(this_00 + 0x18) = lVar3;
                *(undefined8 *)(this_00 + 0x20) = uVar9;
                lVar27 = *(long *)(lVar15 + 0x30);
                *(long *)(this_00 + 8) = lVar4;
                puVar5 = *(undefined8 **)(lVar15 + 0x40);
                *this_00 = (Obstacle2D)0x1;
                *(long *)(this_00 + 0x38) = (long)puVar10 - lVar27 >> 3;
                local_80 = this_00;
                if (puVar10 == puVar5) {
                  std::vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>>::
                  _M_realloc_insert<RVO2D::Obstacle2D*const&>
                            ((vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *)
                             (lVar15 + 0x30),puVar10,&local_80);
                }
                else {
                  *puVar10 = this_00;
                  *(undefined8 **)(lVar15 + 0x38) = puVar10 + 1;
                }
                *(Obstacle2D **)(lVar3 + 8) = this_00;
                lVar27 = lVar25 + 1;
                *(Obstacle2D **)(lVar4 + 0x18) = this_00;
                if (fVar33 <= 0.0) {
                  *plVar2 = lVar3;
                  local_f0[lVar25] = this_00;
                }
                else {
                  local_f0[lVar25] = lVar3;
                  *plVar2 = (long)this_00;
                }
                lVar15 = *(long *)param_1;
                lVar22 = lVar22 + 1;
              }
              else {
                *plVar2 = lVar3;
                lVar22 = lVar22 + 1;
              }
            }
            else {
              local_f0[lVar25] = lVar3;
              lVar27 = lVar25 + 1;
            }
          }
          pvVar29 = pvVar29 + 1;
          lVar25 = lVar27;
        } while (pvVar29 < (vector *)(*(long *)(param_1 + 8) - lVar15 >> 3));
      }
      local_a0[1] = lVar13;
      uVar9 = buildObstacleTreeRecursive(this,(vector *)&local_78);
      *local_a0 = uVar9;
      uVar9 = buildObstacleTreeRecursive(this,(vector *)&local_58);
      local_a0[2] = uVar9;
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(puVar8,uVar20);
      }
      if (local_f0 != (undefined8 *)0x0) {
        operator_delete(local_f0,uVar17);
      }
      goto LAB_00101636;
    }
  }
  this_01 = "cannot create std::vector larger than max_size()";
  std::__throw_length_error("cannot create std::vector larger than max_size()");
  puVar10 = *(undefined8 **)((KdTree2D *)this_01 + 0x30);
  if (puVar10 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar8;
      if (puVar5 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar5 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)*puVar5);
        }
        if ((ObstacleTreeNode *)puVar5[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)puVar5[2]);
        }
        operator_delete(puVar5,0x18);
      }
      puVar5 = (undefined8 *)puVar8[2];
      if (puVar5 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar5 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)*puVar5);
        }
        if ((ObstacleTreeNode *)puVar5[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)puVar5[2]);
        }
        operator_delete(puVar5,0x18);
      }
      operator_delete(puVar8,0x18);
    }
    puVar8 = (undefined8 *)puVar10[2];
    if (puVar8 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar8;
      if (puVar5 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar5 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)*puVar5);
        }
        if ((ObstacleTreeNode *)puVar5[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)puVar5[2]);
        }
        operator_delete(puVar5,0x18);
      }
      puVar5 = (undefined8 *)puVar8[2];
      if (puVar5 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar5 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)*puVar5);
        }
        if ((ObstacleTreeNode *)puVar5[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree((KdTree2D *)this_01,(ObstacleTreeNode *)puVar5[2]);
        }
        operator_delete(puVar5,0x18);
      }
      operator_delete(puVar8,0x18);
    }
    operator_delete(puVar10,0x18);
  }
  puVar10 = (undefined8 *)buildObstacleTreeRecursive((KdTree2D *)this_01,pvVar21);
  *(undefined8 **)((KdTree2D *)this_01 + 0x30) = puVar10;
  return puVar10;
}



/* RVO2D::KdTree2D::buildObstacleTree(std::vector<RVO2D::Obstacle2D*,
   std::allocator<RVO2D::Obstacle2D*> >) */

void __thiscall RVO2D::KdTree2D::buildObstacleTree(KdTree2D *this,vector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    puVar2 = (undefined8 *)puVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      puVar3 = (undefined8 *)puVar2[2];
      if (puVar3 != (undefined8 *)0x0) {
        if ((ObstacleTreeNode *)*puVar3 != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)*puVar3);
        }
        if ((ObstacleTreeNode *)puVar3[2] != (ObstacleTreeNode *)0x0) {
          deleteObstacleTree(this,(ObstacleTreeNode *)puVar3[2]);
        }
        operator_delete(puVar3,0x18);
      }
      operator_delete(puVar2,0x18);
    }
    operator_delete(puVar1,0x18);
  }
  uVar4 = buildObstacleTreeRecursive(this,param_2);
  *(undefined8 *)(this + 0x30) = uVar4;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<RVO2D::KdTree2D::AgentTreeNode, std::allocator<RVO2D::KdTree2D::AgentTreeNode>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<RVO2D::KdTree2D::AgentTreeNode,std::allocator<RVO2D::KdTree2D::AgentTreeNode>>::
_M_default_append(vector<RVO2D::KdTree2D::AgentTreeNode,std::allocator<RVO2D::KdTree2D::AgentTreeNode>>
                  *this,ulong param_1)

{
  char *pcVar1;
  byte *__dest;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  byte *__n;
  size_t sVar12;
  undefined8 *puVar13;
  ulong uVar14;
  void *unaff_R13;
  void *unaff_R14;
  undefined8 *__src;
  bool bVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  
  if (param_1 == 0) {
    return;
  }
  uVar9 = 0xaaaaaaaaaaaaaaab;
  puVar13 = (undefined8 *)local_48;
  pauVar11 = *(undefined1 (**) [16])(this + 8);
  __src = *(undefined8 **)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pauVar11 >> 4) * -0x5555555555555555)) {
    pauVar6 = pauVar11 + 3;
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11[1] = (undefined1  [16])0x0;
    pauVar11[2] = (undefined1  [16])0x0;
    if (param_1 - 1 != 0) {
      pauVar7 = pauVar6;
      do {
        uVar3 = *(undefined8 *)(*pauVar11 + 8);
        pauVar8 = pauVar7 + 3;
        *(undefined8 *)*pauVar7 = *(undefined8 *)*pauVar11;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = *(undefined8 *)(pauVar11[1] + 8);
        *(undefined8 *)pauVar7[1] = *(undefined8 *)pauVar11[1];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = *(undefined8 *)(pauVar11[2] + 8);
        *(undefined8 *)pauVar7[2] = *(undefined8 *)pauVar11[2];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        pauVar7 = pauVar8;
      } while (pauVar6 + (param_1 - 1) * 3 != pauVar8);
      pauVar6 = pauVar6 + (((ulong)((long)(pauVar6 + (param_1 - 1) * 3) + (-0x60 - (long)pauVar11))
                           >> 4) * 0xaaaaaaaaaaaaaab & 0xfffffffffffffff) * 3 + 3;
    }
    *(undefined1 (**) [16])(this + 8) = pauVar6;
    return;
  }
  sVar12 = (long)pauVar11 - (long)__src;
  lVar4 = (long)sVar12 >> 4;
  uVar10 = lVar4 * 0x5555555555555555 + 0x2aaaaaaaaaaaaaa;
  bVar15 = uVar10 < param_1;
  bVar16 = uVar10 == param_1;
  if (bVar15) {
    auVar17 = std::__throw_length_error("vector::_M_default_append");
    __n = auVar17._8_8_;
    if (bVar15 || bVar16) {
      pcVar1 = (char *)(auVar17._0_8_ - 0x73);
      *pcVar1 = *pcVar1 + (char)uVar9;
      if (auVar17._0_8_ <= uVar9) {
        bVar15 = uVar9 == 0;
        goto code_r0x00101b8a;
      }
      uVar9 = 0x7ffffffffffffff8;
      puVar13 = (undefined8 *)local_48;
LAB_00101bfa:
      *puVar13 = __n;
      puVar13[-1] = 0x101c06;
      pvVar5 = operator_new(uVar9);
      __n = (byte *)*puVar13;
      lVar4 = uVar9 + (long)pvVar5;
    }
    else {
      puVar13 = (undefined8 *)auStack_38;
      if (*__n <= (byte)(sVar12 >> 8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar15 = (int)uVar9 == 0;
      __src = local_40;
code_r0x00101b8a:
      if (!bVar15) {
        if (0xfffffffffffffff < uVar9) {
          uVar9 = 0xfffffffffffffff;
        }
        uVar9 = uVar9 * 8;
        goto LAB_00101bfa;
      }
      lVar4 = 0;
      pvVar5 = (void *)0x0;
    }
    __dest = __n + (long)pvVar5 + 8;
    sVar12 = (long)this - (long)unaff_R14;
    *(undefined8 *)((long)pvVar5 + (long)__n) = *__src;
    if ((long)__n < 1) {
      if (0 < (long)sVar12) {
        *puVar13 = pvVar5;
        puVar13[-1] = 0x101bc3;
        memcpy(__dest,unaff_R14,sVar12);
        pvVar5 = (void *)*puVar13;
      }
      if (unaff_R13 == (void *)0x0) goto LAB_00101bcc;
    }
    else {
      *puVar13 = __dest;
      puVar13[-1] = 0x101c27;
      pvVar5 = memmove(pvVar5,unaff_R13,(size_t)__n);
      if (0 < (long)sVar12) {
        puVar13[1] = pvVar5;
        puVar13[-1] = 0x101c84;
        memcpy((void *)*puVar13,unaff_R14,sVar12);
        pvVar5 = (void *)puVar13[1];
      }
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *puVar13 = pvVar5;
    puVar13[-1] = 0x101c42;
    operator_delete(unaff_R13,lVar2 - (long)unaff_R13);
    pvVar5 = (void *)*puVar13;
LAB_00101bcc:
    *(void **)param_1 = pvVar5;
    *(byte **)(param_1 + 8) = __dest + sVar12;
    *(long *)(param_1 + 0x10) = lVar4;
    return;
  }
  local_40 = (undefined8 *)(param_1 - 1);
  uVar9 = param_1 + lVar4 * -0x5555555555555555;
  if ((ulong)(lVar4 * -0x5555555555555555) < param_1) {
    uVar10 = 0x2aaaaaaaaaaaaaa;
    if (uVar9 < 0x2aaaaaaaaaaaaab) {
      uVar10 = uVar9;
    }
    uVar10 = uVar10 * 0x30;
    pvVar5 = operator_new(uVar10);
    pauVar11 = (undefined1 (*) [16])((long)pvVar5 + sVar12);
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11[1] = (undefined1  [16])0x0;
    pauVar11[2] = (undefined1  [16])0x0;
    if (local_40 != (undefined8 *)0x0) goto LAB_00101965;
LAB_00101993:
    if (sVar12 != 0) goto LAB_00101ad0;
    local_40 = (undefined8 *)pvVar5;
    if (__src == (undefined8 *)0x0) goto LAB_001019a5;
    uVar14 = *(long *)(this + 0x10) - (long)__src;
  }
  else {
    uVar10 = lVar4 * 0x5555555555555556;
    if (0x2aaaaaaaaaaaaaa < uVar10) {
      uVar10 = 0x2aaaaaaaaaaaaaa;
    }
    uVar10 = uVar10 * 0x30;
    pvVar5 = operator_new(uVar10);
    pauVar11 = (undefined1 (*) [16])((long)pvVar5 + sVar12);
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11[1] = (undefined1  [16])0x0;
    pauVar11[2] = (undefined1  [16])0x0;
    if (param_1 != 1) {
LAB_00101965:
      pauVar6 = pauVar11 + 3;
      do {
        uVar3 = *(undefined8 *)(*pauVar11 + 8);
        pauVar7 = pauVar6 + 3;
        *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar11;
        *(undefined8 *)(*pauVar6 + 8) = uVar3;
        uVar3 = *(undefined8 *)(pauVar11[1] + 8);
        *(undefined8 *)pauVar6[1] = *(undefined8 *)pauVar11[1];
        *(undefined8 *)(pauVar6[1] + 8) = uVar3;
        uVar3 = *(undefined8 *)(pauVar11[2] + 8);
        *(undefined8 *)pauVar6[2] = *(undefined8 *)pauVar11[2];
        *(undefined8 *)(pauVar6[2] + 8) = uVar3;
        pauVar6 = pauVar7;
      } while (pauVar11 + 3 + (long)local_40 * 3 != pauVar7);
      goto LAB_00101993;
    }
LAB_00101ad0:
    pvVar5 = memmove(pvVar5,__src,sVar12);
    uVar14 = *(long *)(this + 0x10) - (long)__src;
  }
  local_40 = (undefined8 *)pvVar5;
  operator_delete(__src,uVar14);
LAB_001019a5:
  *(undefined8 **)this = local_40;
  *(void **)(this + 8) = (void *)(uVar9 * 0x30 + (long)local_40);
  *(ulong *)(this + 0x10) = (long)local_40 + uVar10;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<RVO2D::Obstacle2D*, std::allocator<RVO2D::Obstacle2D*>
   >::_M_realloc_insert<RVO2D::Obstacle2D* const&>(__gnu_cxx::__normal_iterator<RVO2D::Obstacle2D**,
   std::vector<RVO2D::Obstacle2D*, std::allocator<RVO2D::Obstacle2D*> > >, RVO2D::Obstacle2D*
   const&) */

void __thiscall
std::vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>>::
_M_realloc_insert<RVO2D::Obstacle2D*const&>
          (vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *this,void *param_2,
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
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00101bf0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00101bfa:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00101bf0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00101bfa;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00101bfa;
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
    if (__src == (void *)0x0) goto LAB_00101bcc;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00101bcc:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}


