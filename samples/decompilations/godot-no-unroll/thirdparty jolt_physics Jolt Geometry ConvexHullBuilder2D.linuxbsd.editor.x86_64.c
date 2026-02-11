
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullBuilder2D::Edge::CalculateNormalAndCenter(JPH::Vec3 const*) */

void __thiscall JPH::ConvexHullBuilder2D::Edge::CalculateNormalAndCenter(Edge *this,Vec3 *param_1)

{
  Vec3 *pVVar1;
  Vec3 *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pVVar1 = param_1 + (long)*(int *)(this + 0x48) * 0x10;
  fVar3 = *(float *)pVVar1;
  fVar4 = *(float *)(pVVar1 + 4);
  pVVar2 = param_1 + (long)*(int *)(*(long *)(this + 0x40) + 0x48) * 0x10;
  fVar5 = *(float *)pVVar2;
  fVar6 = *(float *)(pVVar2 + 4);
  fVar7 = (fVar4 + fVar6) * _LC1;
  fVar8 = (*(float *)(pVVar1 + 8) + *(float *)(pVVar2 + 8)) * _LC1;
  fVar9 = (*(float *)(pVVar1 + 0xc) + *(float *)(pVVar2 + 0xc)) * _LC1;
  *(float *)(this + 0x10) = (fVar3 + fVar5) * _LC1;
  *(float *)(this + 0x14) = fVar7;
  *(float *)(this + 0x18) = fVar8;
  *(float *)(this + 0x1c) = fVar9;
  *(ulong *)this = CONCAT44((uint)(fVar5 - fVar3) ^ __LC2,fVar6 - fVar4);
  *(undefined8 *)(this + 8) = 0;
  return;
}



/* JPH::ConvexHullBuilder2D::ConvexHullBuilder2D(JPH::Array<JPH::Vec3, JPH::STLAllocator<JPH::Vec3>
   > const&) */

void __thiscall
JPH::ConvexHullBuilder2D::ConvexHullBuilder2D(ConvexHullBuilder2D *this,Array *param_1)

{
  *(Array **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}



/* JPH::ConvexHullBuilder2D::FreeEdges() */

void __thiscall JPH::ConvexHullBuilder2D::FreeEdges(ConvexHullBuilder2D *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    do {
      lVar1 = *(long *)(lVar2 + 0x40);
      if (*(long *)(lVar2 + 0x30) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = 0;
        (*Free)();
      }
      (*Free)(lVar2);
      lVar2 = lVar1;
    } while (*(long *)(this + 8) != lVar1);
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}



/* JPH::ConvexHullBuilder2D::~ConvexHullBuilder2D() */

void __thiscall JPH::ConvexHullBuilder2D::~ConvexHullBuilder2D(ConvexHullBuilder2D *this)

{
  FreeEdges(this);
  return;
}



/* JPH::ConvexHullBuilder2D::AssignPointToEdge(int, JPH::Array<JPH::ConvexHullBuilder2D::Edge*,
   JPH::STLAllocator<JPH::ConvexHullBuilder2D::Edge*> > const&) const */

void __thiscall
JPH::ConvexHullBuilder2D::AssignPointToEdge(ConvexHullBuilder2D *this,int param_1,Array *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  ulong uVar14;
  int *__src;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar8 = (float *)((long)param_1 * 0x10 + *(long *)(*(long *)this + 0x10));
  puVar12 = *(undefined8 **)(param_2 + 0x10);
  puVar2 = puVar12 + *(long *)param_2;
  if (puVar2 != puVar12) {
    fVar17 = 0.0;
    pfVar13 = (float *)0x0;
    do {
      pfVar6 = (float *)*puVar12;
      fVar16 = *pfVar6;
      fVar4 = pfVar6[1];
      fVar5 = pfVar6[2];
      fVar15 = (pfVar8[2] - pfVar6[6]) * fVar5 +
               (pfVar8[1] - pfVar6[5]) * fVar4 + (*pfVar8 - pfVar6[4]) * fVar16 + 0.0;
      if ((0.0 < fVar15) &&
         (fVar16 = (fVar15 * fVar15) / (fVar5 * fVar5 + fVar4 * fVar4 + fVar16 * fVar16 + 0.0),
         fVar17 < fVar16)) {
        pfVar13 = pfVar6;
        fVar17 = fVar16;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2);
    if (pfVar13 != (float *)0x0) {
      lVar10 = *(long *)(pfVar13 + 8);
      lVar9 = *(long *)(pfVar13 + 0xc);
      uVar7 = *(ulong *)(pfVar13 + 10);
      uVar11 = lVar10 + 1;
      if (fVar17 < pfVar13[0x13] || fVar17 == pfVar13[0x13]) {
        lVar3 = lVar10 * 4;
        lVar1 = lVar3 + -4;
        if (uVar7 < uVar11) {
          uVar14 = uVar7 * 2;
          if (uVar7 * 2 < uVar11) {
            uVar14 = uVar11;
          }
          lVar9 = (*Reallocate)(lVar9,uVar7 * 4,uVar14 * 4);
          *(ulong *)(pfVar13 + 10) = uVar14;
          *(long *)(pfVar13 + 0xc) = lVar9;
          lVar10 = *(long *)(pfVar13 + 8);
        }
        __src = (int *)(lVar1 + lVar9);
        memmove((void *)(lVar9 + lVar3),__src,(lVar10 - (lVar1 >> 2)) * 4);
        *__src = param_1;
        *(long *)(pfVar13 + 8) = *(long *)(pfVar13 + 8) + 1;
        return;
      }
      pfVar13[0x13] = fVar17;
      if (uVar7 < uVar11) {
        uVar14 = uVar7 * 2;
        if (uVar7 * 2 < uVar11) {
          uVar14 = uVar11;
        }
        lVar9 = (*Reallocate)(lVar9,uVar7 * 4,uVar14 * 4);
        *(ulong *)(pfVar13 + 10) = uVar14;
        *(long *)(pfVar13 + 0xc) = lVar9;
        lVar10 = *(long *)(pfVar13 + 8);
        uVar11 = lVar10 + 1;
      }
      *(ulong *)(pfVar13 + 8) = uVar11;
      *(int *)(lVar9 + lVar10 * 4) = param_1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullBuilder2D::Initialize(int, int, int, int, float, JPH::Array<int,
   JPH::STLAllocator<int> >&) */

undefined8 __thiscall
JPH::ConvexHullBuilder2D::Initialize
          (ConvexHullBuilder2D *this,int param_1,int param_2,int param_3,int param_4,float param_5,
          Array *param_6)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  long lVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  float *pfVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  float *pfVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float *local_c8;
  float local_a8;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FreeEdges(this);
  plVar18 = *(long **)this;
  *(undefined8 *)param_6 = 0;
  pauVar2 = (undefined1 (*) [16])plVar18[2];
  if (pauVar2 + *plVar18 == pauVar2) {
    local_a8 = 0.0;
  }
  else {
    auVar30 = (undefined1  [16])0x0;
    pauVar8 = pauVar2;
    do {
      auVar29._0_4_ = 0.0 - *(float *)*pauVar8;
      auVar29._4_4_ = 0.0 - *(float *)(*pauVar8 + 4);
      auVar29._8_4_ = 0.0 - *(float *)(*pauVar8 + 8);
      auVar29._12_4_ = 0.0 - *(float *)(*pauVar8 + 0xc);
      auVar29 = maxps(auVar29,*pauVar8);
      pauVar8 = pauVar8 + 1;
      auVar30 = maxps(auVar30,auVar29);
    } while (pauVar2 + *plVar18 != pauVar8);
    local_a8 = (auVar30._4_4_ + auVar30._0_4_) * __LC4;
    local_a8 = local_a8 * local_a8;
  }
  fVar34 = param_5 * param_5;
  if (param_5 * param_5 <= local_a8) {
    fVar34 = local_a8;
  }
  fVar28 = *(float *)pauVar2[param_1];
  fVar5 = *(float *)(pauVar2[param_1] + 4);
  iVar24 = param_2;
  if (0.0 <= (*(float *)(pauVar2[param_3] + 4) - fVar5) * (*(float *)pauVar2[param_2] - fVar28) -
             (*(float *)(pauVar2[param_2] + 4) - fVar5) * (*(float *)pauVar2[param_3] - fVar28)) {
    iVar24 = param_1;
    param_1 = param_2;
  }
  lVar9 = (*Allocate)(0x50);
  *(undefined1 (*) [16])(lVar9 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(int *)(lVar9 + 0x48) = iVar24;
  *(undefined4 *)(lVar9 + 0x4c) = 0;
  lVar10 = (*Allocate)(0x50);
  *(undefined1 (*) [16])(lVar10 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(int *)(lVar10 + 0x48) = param_1;
  *(undefined4 *)(lVar10 + 0x4c) = 0;
  local_48 = (*Allocate)(0x50);
  *(undefined8 *)(local_48 + 0x30) = 0;
  *(int *)(local_48 + 0x48) = param_3;
  *(undefined4 *)(local_48 + 0x4c) = 0;
  *(undefined1 (*) [16])(local_48 + 0x20) = (undefined1  [16])0x0;
  *(long *)(lVar9 + 0x40) = lVar10;
  *(long *)(lVar9 + 0x38) = local_48;
  *(long *)(lVar10 + 0x40) = local_48;
  *(long *)(lVar10 + 0x38) = lVar9;
  *(long *)(local_48 + 0x40) = lVar9;
  *(long *)(local_48 + 0x38) = lVar10;
  *(long *)(this + 8) = lVar9;
  *(undefined4 *)(this + 0x10) = 3;
  local_58 = lVar9;
  lStack_50 = lVar10;
  plVar11 = (long *)(*Reallocate)(0,0,0x18);
  local_90 = 3;
  *plVar11 = local_58;
  plVar11[1] = lStack_50;
  local_98 = 3;
  plVar11[2] = local_48;
  piVar16 = *(int **)this;
  lVar9 = *(long *)(piVar16 + 4);
  plVar18 = plVar11;
  do {
    puVar3 = (undefined8 *)*plVar18;
    plVar18 = plVar18 + 1;
    pfVar13 = (float *)(lVar9 + (long)*(int *)(puVar3 + 9) * 0x10);
    fVar28 = *pfVar13;
    fVar5 = pfVar13[1];
    pfVar17 = (float *)(lVar9 + (long)*(int *)(puVar3[8] + 0x48) * 0x10);
    fVar6 = *pfVar17;
    fVar7 = pfVar17[1];
    fVar31 = (fVar5 + fVar7) * _UNK_001009b4;
    fVar32 = (pfVar13[2] + pfVar17[2]) * _UNK_001009b8;
    fVar33 = (pfVar13[3] + pfVar17[3]) * _UNK_001009bc;
    *(float *)(puVar3 + 2) = (fVar28 + fVar6) * _LC1;
    *(float *)((long)puVar3 + 0x14) = fVar31;
    *(float *)(puVar3 + 3) = fVar32;
    *(float *)((long)puVar3 + 0x1c) = fVar33;
    *puVar3 = CONCAT44((uint)(fVar6 - fVar28) ^ __LC2,fVar7 - fVar5);
    puVar3[1] = 0;
  } while (plVar11 + 3 != plVar18);
  iVar26 = 0;
  local_88 = plVar11;
  if (0 < *piVar16) {
    do {
      if ((iVar26 != param_1 && iVar26 != iVar24) && (iVar26 != param_3)) {
        AssignPointToEdge(this,iVar26,(Array *)&local_98);
        piVar16 = *(int **)this;
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 < *piVar16);
  }
  iVar24 = *(int *)(this + 0x10);
  if (iVar24 < param_4) {
    do {
      fVar28 = 0.0;
      pfVar17 = (float *)0x0;
      pfVar13 = *(float **)(this + 8);
      do {
        if (fVar28 < pfVar13[0x13]) {
          pfVar17 = pfVar13;
          fVar28 = pfVar13[0x13];
        }
        pfVar13 = *(float **)(pfVar13 + 0x10);
      } while (*(float **)(this + 8) != pfVar13);
      if ((pfVar17 == (float *)0x0) || (fVar28 < fVar34)) {
        uVar20 = 0;
        goto LAB_00100863;
      }
      iVar24 = *(int *)(*(long *)(pfVar17 + 0xc) + -4 + *(long *)(pfVar17 + 8) * 4);
      lVar9 = *(long *)this;
      *(long *)(pfVar17 + 8) = *(long *)(pfVar17 + 8) + -1;
      pfVar12 = (float *)((long)iVar24 * 0x10 + *(long *)(lVar9 + 0x10));
      pfVar13 = pfVar17;
      do {
        pfVar4 = *(float **)(pfVar13 + 0xe);
        local_c8 = pfVar17;
        pfVar25 = pfVar13;
        if ((pfVar12[2] - pfVar4[6]) * pfVar4[2] +
            (pfVar12[1] - pfVar4[5]) * pfVar4[1] + *pfVar4 * (*pfVar12 - pfVar4[4]) + 0.0 <= 0.0)
        break;
        pfVar13 = pfVar4;
        pfVar25 = pfVar17;
      } while (pfVar4 != pfVar17);
      do {
        pfVar13 = *(float **)(local_c8 + 0x10);
        if ((pfVar12[2] - pfVar13[6]) * pfVar13[2] +
            (pfVar12[1] - pfVar13[5]) * pfVar13[1] + *pfVar13 * (*pfVar12 - pfVar13[4]) + 0.0 <= 0.0
           ) break;
        local_c8 = pfVar13;
      } while (pfVar13 != pfVar17);
      lVar9 = (*Allocate)(0x50);
      fVar28 = pfVar25[0x12];
      *(undefined1 (*) [16])(lVar9 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(float *)(lVar9 + 0x48) = fVar28;
      *(undefined4 *)(lVar9 + 0x4c) = 0;
      lVar10 = (*Allocate)(0x50);
      *(undefined1 (*) [16])(lVar10 + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar10 + 0x20) = (undefined1  [16])0x0;
      uVar20 = *(undefined8 *)(pfVar25 + 0xe);
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(int *)(lVar10 + 0x48) = iVar24;
      *(undefined4 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar9 + 0x38) = uVar20;
      *(long *)(lVar9 + 0x40) = lVar10;
      uVar20 = *(undefined8 *)(local_c8 + 0x10);
      *(long *)(lVar10 + 0x38) = lVar9;
      *(undefined8 *)(lVar10 + 0x40) = uVar20;
      *(long *)(*(long *)(lVar9 + 0x38) + 0x40) = lVar9;
      *(long *)(*(long *)(lVar10 + 0x40) + 0x38) = lVar10;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
      *(long *)(this + 8) = lVar9;
      plVar14 = (long *)(*Reallocate)(0,0,0x10);
      uStack_70 = _UNK_001009d8;
      local_78 = __LC5;
      *plVar14 = lVar9;
      plVar14[1] = lVar10;
      lVar9 = *(long *)(*(long *)this + 0x10);
      plVar18 = plVar14;
      do {
        puVar3 = (undefined8 *)*plVar18;
        plVar18 = plVar18 + 1;
        pfVar13 = (float *)(lVar9 + (long)*(int *)(puVar3 + 9) * 0x10);
        fVar28 = *pfVar13;
        fVar5 = pfVar13[1];
        pfVar17 = (float *)(lVar9 + (long)*(int *)(puVar3[8] + 0x48) * 0x10);
        fVar6 = *pfVar17;
        fVar7 = pfVar17[1];
        fVar31 = (fVar5 + fVar7) * _UNK_001009b4;
        fVar32 = (pfVar13[2] + pfVar17[2]) * _UNK_001009b8;
        fVar33 = (pfVar13[3] + pfVar17[3]) * _UNK_001009bc;
        *(float *)(puVar3 + 2) = (fVar28 + fVar6) * _LC1;
        *(float *)((long)puVar3 + 0x14) = fVar31;
        *(float *)(puVar3 + 3) = fVar32;
        *(float *)((long)puVar3 + 0x1c) = fVar33;
        *puVar3 = CONCAT44((uint)(fVar6 - fVar28) ^ __LC2,fVar7 - fVar5);
        puVar3[1] = 0;
        local_68 = plVar14;
      } while (plVar14 + 2 != plVar18);
      do {
        pfVar13 = *(float **)(pfVar25 + 0x10);
        piVar21 = *(int **)(pfVar25 + 0xc);
        piVar16 = piVar21 + *(long *)(pfVar25 + 8);
        if (piVar16 != piVar21) {
          do {
            iVar24 = *piVar21;
            piVar21 = piVar21 + 1;
            AssignPointToEdge(this,iVar24,(Array *)&local_78);
          } while (piVar16 != piVar21);
          piVar21 = *(int **)(pfVar25 + 0xc);
        }
        if (piVar21 != (int *)0x0) {
          pfVar25[8] = 0.0;
          pfVar25[9] = 0.0;
          (*Free)();
        }
        (*Free)(pfVar25);
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
        bVar27 = pfVar25 != local_c8;
        pfVar25 = pfVar13;
      } while (bVar27);
      (*Free)(plVar14);
      iVar24 = *(int *)(this + 0x10);
    } while (iVar24 < param_4);
  }
  uVar20 = 1;
LAB_00100863:
  uVar22 = (ulong)iVar24;
  uVar19 = *(ulong *)(param_6 + 8);
  lVar9 = *(long *)(param_6 + 0x10);
  if (uVar19 < uVar22) {
    lVar9 = (*Reallocate)(lVar9,uVar19 * 4,uVar22 * 4);
    *(long *)(param_6 + 0x10) = lVar9;
    *(ulong *)(param_6 + 8) = uVar22;
    uVar19 = uVar22;
  }
  lVar10 = *(long *)(this + 8);
  uVar22 = *(ulong *)param_6;
  while( true ) {
    uVar15 = uVar22 + 1;
    if (uVar19 < uVar15) {
      uVar23 = uVar19 * 2;
      if (uVar19 * 2 < uVar15) {
        uVar23 = uVar15;
      }
      lVar9 = (*Reallocate)(lVar9,uVar19 * 4,uVar23 * 4);
      uVar22 = *(ulong *)param_6;
      *(long *)(param_6 + 0x10) = lVar9;
      *(ulong *)(param_6 + 8) = uVar23;
      uVar15 = uVar22 + 1;
    }
    uVar1 = *(undefined4 *)(lVar10 + 0x48);
    lVar10 = *(long *)(lVar10 + 0x40);
    *(ulong *)param_6 = uVar15;
    *(undefined4 *)(lVar9 + uVar22 * 4) = uVar1;
    if (*(long *)(this + 8) == lVar10) break;
    uVar19 = *(ulong *)(param_6 + 8);
    uVar22 = uVar15;
  }
  (*Free)(plVar11);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConvexHullBuilder2D::Edge::CalculateNormalAndCenter(JPH::Vec3 const*) */

void JPH::ConvexHullBuilder2D::Edge::_GLOBAL__sub_I_CalculateNormalAndCenter(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC7;
  }
  return;
}


