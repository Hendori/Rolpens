
/* TPPLPoly::TPPLPoly() */

void __thiscall TPPLPoly::TPPLPoly(TPPLPoly *this)

{
  this[0x10] = (TPPLPoly)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  return;
}



/* TPPLPoly::~TPPLPoly() */

void __thiscall TPPLPoly::~TPPLPoly(TPPLPoly *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}



/* TPPLPoly::Clear() */

void __thiscall TPPLPoly::Clear(TPPLPoly *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  this[0x10] = (TPPLPoly)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  return;
}



/* TPPLPoly::Init(long) */

void __thiscall TPPLPoly::Init(TPPLPoly *this,long param_1)

{
  void *__s;
  ulong uVar1;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  *(long *)(this + 8) = param_1;
  this[0x10] = (TPPLPoly)0x0;
  *(undefined8 *)this = 0;
  uVar1 = 0xffffffffffffffff;
  if ((ulong)param_1 < 0x1000000000000000) {
    uVar1 = param_1 * 8;
  }
  __s = operator_new__(uVar1);
  if (-1 < param_1 + -1) {
    __s = memset(__s,0,param_1 * 8);
  }
  *(void **)this = __s;
  return;
}



/* TPPLPoly::Triangle(Vector2&, Vector2&, Vector2&) */

void __thiscall
TPPLPoly::Triangle(TPPLPoly *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  this[0x10] = (TPPLPoly)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 3;
  puVar2 = (undefined8 *)operator_new__(0x18);
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 **)this = puVar2;
  *puVar2 = uVar1;
  puVar2[1] = *(undefined8 *)param_2;
  puVar2[2] = *(undefined8 *)param_3;
  return;
}



/* TPPLPoly::TPPLPoly(TPPLPoly const&) */

void __thiscall TPPLPoly::TPPLPoly(TPPLPoly *this,TPPLPoly *param_1)

{
  TPPLPoly TVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  
  this[0x10] = (TPPLPoly)0x0;
  TVar1 = param_1[0x10];
  *(undefined8 *)(this + 8) = 0;
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined8 *)this = 0;
  this[0x10] = TVar1;
  *(ulong *)(this + 8) = uVar2;
  if (0 < (long)uVar2) {
    if (uVar2 >> 0x3c == 0) {
      uVar5 = uVar2 * 8;
    }
    else {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5);
    pvVar4 = memset(pvVar4,0,uVar2 * 8);
    uVar3 = *(undefined8 *)param_1;
    *(void **)this = pvVar4;
    __memcpy_chk(pvVar4,uVar3,*(long *)(this + 8) << 3,uVar5);
    return;
  }
  return;
}



/* TPPLPoly::TEMPNAMEPLACEHOLDERVALUE(TPPLPoly const&) */

TPPLPoly * __thiscall TPPLPoly::operator=(TPPLPoly *this,TPPLPoly *param_1)

{
  TPPLPoly TVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  this[0x10] = (TPPLPoly)0x0;
  TVar1 = param_1[0x10];
  *(undefined8 *)(this + 8) = 0;
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined8 *)this = 0;
  this[0x10] = TVar1;
  *(ulong *)(this + 8) = uVar2;
  if (0 < (long)uVar2) {
    if (uVar2 >> 0x3c == 0) {
      uVar4 = uVar2 * 8;
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar4);
    pvVar3 = memset(pvVar3,0,uVar2 * 8);
    *(void **)this = pvVar3;
    __memcpy_chk(pvVar3,*(undefined8 *)param_1,*(long *)(this + 8) * 8,uVar4);
  }
  return this;
}



/* TPPLPoly::GetOrientation() const */

int __thiscall TPPLPoly::GetOrientation(TPPLPoly *this)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 < 1) {
    return 0;
  }
  pfVar2 = *(float **)this;
  fVar3 = 0.0;
  lVar6 = 1;
  pfVar5 = pfVar2 + 2;
  pfVar4 = pfVar5;
  if (lVar1 != 1) {
    do {
      lVar6 = lVar6 + 1;
      pfVar5 = pfVar4 + 2;
      fVar3 = fVar3 + (pfVar4[-2] * pfVar4[1] - pfVar4[-1] * *pfVar4);
      pfVar4 = pfVar5;
    } while (lVar1 != lVar6);
  }
  fVar3 = (pfVar2[1] * pfVar5[-2] - pfVar5[-1] * *pfVar2) + fVar3;
  if (0.0 < fVar3) {
    return 1;
  }
  return -(uint)(fVar3 < 0.0);
}



/* TPPLPoly::SetOrientation(TPPLOrientation) */

void __thiscall TPPLPoly::SetOrientation(TPPLPoly *this,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar2 = GetOrientation(this);
  if ((iVar2 != 0) && (iVar2 != param_2)) {
    puVar4 = *(undefined8 **)this;
    puVar3 = puVar4 + *(long *)(this + 8);
    if (puVar4 == puVar3) {
      return;
    }
    for (; puVar3 = puVar3 + -1, puVar4 < puVar3; puVar4 = puVar4 + 1) {
      uVar1 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar1;
    }
    return;
  }
  return;
}



/* TPPLPoly::Invert() */

void __thiscall TPPLPoly::Invert(TPPLPoly *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)this;
  puVar2 = puVar3 + *(long *)(this + 8);
  if (puVar3 == puVar2) {
    return;
  }
  for (; puVar2 = puVar2 + -1, puVar3 < puVar2; puVar3 = puVar3 + 1) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
  }
  return;
}



/* TPPLPartition::PartitionVertex::PartitionVertex() */

void __thiscall TPPLPartition::PartitionVertex::PartitionVertex(PartitionVertex *this)

{
  *(undefined8 *)(this + 4) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* TPPLPartition::Normalize(Vector2 const&) */

undefined8 __thiscall TPPLPartition::Normalize(TPPLPartition *this,Vector2 *param_1)

{
  float fVar3;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)param_1;
  fVar3 = (float)(*(ulong *)param_1 >> 0x20);
  auVar2._0_4_ = SQRT(*(float *)param_1 * *(float *)param_1 + fVar3 * fVar3);
  if (auVar2._0_4_ != 0.0) {
    auVar2._4_4_ = auVar2._0_4_;
    auVar2._8_8_ = _LC5;
    auVar2 = divps(auVar1,auVar2);
    return auVar2._0_8_;
  }
  return 0;
}



/* TPPLPartition::Distance(Vector2 const&, Vector2 const&) */

double __thiscall TPPLPartition::Distance(TPPLPartition *this,Vector2 *param_1,Vector2 *param_2)

{
  return SQRT((double)(*(float *)param_2 - *(float *)param_1) *
              (double)(*(float *)param_2 - *(float *)param_1) +
              (double)(*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
              (double)(*(float *)(param_2 + 4) - *(float *)(param_1 + 4)));
}



/* TPPLPartition::Intersects(Vector2&, Vector2&, Vector2&, Vector2&) */

bool __thiscall
TPPLPartition::Intersects
          (TPPLPartition *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)param_3;
  if (((fVar1 != fVar2) || (bVar9 = false, *(float *)(param_1 + 4) != *(float *)(param_3 + 4))) &&
     ((fVar3 = *(float *)param_4, fVar1 != fVar3 ||
      (bVar9 = false, *(float *)(param_1 + 4) != *(float *)(param_4 + 4))))) {
    fVar4 = *(float *)param_2;
    fVar5 = *(float *)(param_2 + 4);
    if (((fVar2 != fVar4) || (bVar9 = false, fVar5 != *(float *)(param_3 + 4))) &&
       ((fVar6 = *(float *)(param_4 + 4), fVar3 != fVar4 || (bVar9 = false, fVar6 != fVar5)))) {
      fVar7 = *(float *)(param_1 + 4);
      fVar8 = *(float *)(param_3 + 4);
      bVar9 = false;
      if (((fVar7 - fVar8) * (fVar2 - fVar3) + (fVar1 - fVar2) * (fVar6 - fVar8)) *
          ((fVar4 - fVar2) * (fVar6 - fVar8) + (fVar2 - fVar3) * (fVar5 - fVar8)) <= 0.0) {
        bVar9 = ((fVar2 - fVar1) * (fVar5 - fVar7) + (fVar8 - fVar7) * (fVar1 - fVar4)) *
                ((fVar3 - fVar1) * (fVar5 - fVar7) + (fVar6 - fVar7) * (fVar1 - fVar4)) <= 0.0;
      }
    }
  }
  return bVar9;
}



/* TPPLPartition::IsConvex(Vector2&, Vector2&, Vector2&) */

bool __thiscall
TPPLPartition::IsConvex(TPPLPartition *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  return 0.0 < (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) *
               (*(float *)param_2 - *(float *)param_1) -
               (*(float *)param_3 - *(float *)param_1) *
               (*(float *)(param_2 + 4) - *(float *)(param_1 + 4));
}



/* TPPLPartition::IsReflex(Vector2&, Vector2&, Vector2&) */

bool __thiscall
TPPLPartition::IsReflex(TPPLPartition *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  return (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) *
         (*(float *)param_2 - *(float *)param_1) -
         (*(float *)param_3 - *(float *)param_1) *
         (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) < 0.0;
}



/* TPPLPartition::IsInside(Vector2&, Vector2&, Vector2&, Vector2&) */

bool __thiscall
TPPLPartition::IsInside
          (TPPLPartition *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_4;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)param_1;
  fVar5 = *(float *)param_2;
  fVar6 = *(float *)(param_4 + 4);
  if ((fVar1 - fVar3) * (fVar2 - fVar4) - (fVar5 - fVar4) * (fVar6 - fVar3) <= 0.0) {
    fVar7 = *(float *)(param_3 + 4);
    fVar8 = *(float *)param_3;
    if ((fVar7 - fVar1) * (fVar2 - fVar5) - (fVar8 - fVar5) * (fVar6 - fVar1) <= 0.0) {
      return (fVar3 - fVar7) * (fVar2 - fVar8) - (fVar4 - fVar8) * (fVar6 - fVar7) <= 0.0;
    }
  }
  return false;
}



/* TPPLPartition::InCone(Vector2&, Vector2&, Vector2&, Vector2&) */

bool __thiscall
TPPLPartition::InCone
          (TPPLPartition *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)param_1;
  fVar5 = (*(float *)(param_4 + 4) - fVar3) * (fVar1 - fVar4) -
          (*(float *)param_4 - fVar4) * (fVar2 - fVar3);
  if ((*(float *)(param_3 + 4) - fVar3) * (fVar1 - fVar4) -
      (*(float *)param_3 - fVar4) * (fVar2 - fVar3) <= 0.0) {
    if (0.0 < fVar5) {
      return true;
    }
  }
  else if (fVar5 <= 0.0) {
    return false;
  }
  return 0.0 < (*(float *)(param_4 + 4) - fVar2) * (*(float *)param_3 - fVar1) -
               (*(float *)param_4 - fVar1) * (*(float *)(param_3 + 4) - fVar2);
}



/* TPPLPartition::InCone(TPPLPartition::PartitionVertex*, Vector2&) */

void __thiscall TPPLPartition::InCone(TPPLPartition *this,PartitionVertex *param_1,Vector2 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 4);
  local_20 = *(undefined8 *)(param_1 + 4);
  local_18 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 4);
  InCone(this,(Vector2 *)&local_28,(Vector2 *)&local_20,(Vector2 *)&local_18,param_2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::UpdateVertexReflexity(TPPLPartition::PartitionVertex*) */

void __thiscall TPPLPartition::UpdateVertexReflexity(TPPLPartition *this,PartitionVertex *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(long *)(param_1 + 0x18) + 4);
  fVar2 = *(float *)(*(long *)(param_1 + 0x18) + 8);
  param_1[1] = (PartitionVertex)
               (0.0 <= (*(float *)(*(long *)(param_1 + 0x20) + 8) - fVar2) *
                       (*(float *)(param_1 + 4) - fVar1) -
                       (*(float *)(*(long *)(param_1 + 0x20) + 4) - fVar1) *
                       (*(float *)(param_1 + 8) - fVar2));
  return;
}



/* TPPLPartition::UpdateVertex(TPPLPartition::PartitionVertex*, TPPLPartition::PartitionVertex*,
   long) */

void __thiscall
TPPLPartition::UpdateVertex
          (TPPLPartition *this,PartitionVertex *param_1,PartitionVertex *param_2,long param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  Vector2 *pVVar5;
  Vector2 *extraout_RDX;
  Vector2 *pVVar6;
  Vector2 *pVVar7;
  PartitionVertex *pPVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  fVar19 = *(float *)(param_1 + 4);
  fVar18 = *(float *)(lVar2 + 8);
  fVar20 = *(float *)(lVar2 + 4);
  fVar1 = *(float *)(lVar3 + 8);
  fVar16 = *(float *)(lVar3 + 4);
  fVar17 = *(float *)(param_1 + 8);
  fVar15 = fVar20 - fVar19;
  fVar14 = fVar18 - fVar17;
  fVar12 = (fVar1 - fVar18) * (fVar19 - fVar20) - (fVar16 - fVar20) * (fVar17 - fVar18);
  param_1[1] = (PartitionVertex)(0.0 < fVar12);
  fVar10 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
  if (fVar10 == 0.0) {
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar14 = fVar14 / fVar10;
    fVar15 = fVar15 / fVar10;
  }
  fVar11 = fVar1 - fVar17;
  fVar10 = fVar16 - fVar19;
  fVar13 = SQRT(fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar13 == 0.0) {
    fVar11 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar11 = fVar11 / fVar13;
    fVar10 = fVar10 / fVar13;
  }
  *(double *)(param_1 + 0x10) = (double)(fVar10 * fVar15 + fVar11 * fVar14);
  if (fVar12 <= 0.0) {
LAB_00100ab0:
    param_1[2] = (PartitionVertex)0x0;
    return;
  }
  param_1[2] = (PartitionVertex)0x1;
  if (0 < param_3) {
    pPVar8 = param_2 + 4;
    lVar9 = 0;
    pVVar5 = (Vector2 *)(lVar3 + 4);
    pVVar7 = (Vector2 *)(lVar2 + 4);
    pVVar6 = (Vector2 *)(param_1 + 4);
    do {
      fVar10 = *(float *)pPVar8;
      if ((((fVar10 != fVar19) || (fVar17 != *(float *)((Vector2 *)pPVar8 + 4))) &&
          ((fVar10 != fVar20 || (fVar18 != *(float *)((Vector2 *)pPVar8 + 4))))) &&
         (((fVar10 != fVar16 || (fVar1 != *(float *)((Vector2 *)pPVar8 + 4))) &&
          (cVar4 = IsInside(this,pVVar7,pVVar6,pVVar5,(Vector2 *)pPVar8), pVVar6 = extraout_RDX,
          cVar4 != '\0')))) goto LAB_00100ab0;
      lVar9 = lVar9 + 1;
      pPVar8 = (PartitionVertex *)((Vector2 *)pPVar8 + 0x28);
    } while (param_3 != lVar9);
  }
  return;
}



/* TPPLPartition::Triangulate_EC(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::Triangulate_EC(TPPLPartition *this,TPPLPoly *param_1,List *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  PartitionVertex *pPVar5;
  PartitionVertex *pPVar6;
  TPPLPoly *pTVar7;
  undefined1 (*pauVar8) [16];
  PartitionVertex PVar9;
  PartitionVertex *pPVar10;
  PartitionVertex *pPVar11;
  undefined8 uVar12;
  PartitionVertex *pPVar13;
  long lVar14;
  ulong uVar15;
  TPPLPartition *pTVar16;
  long in_FS_OFFSET;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  uVar12 = 0;
  uVar2 = *(ulong *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < (long)uVar2) {
    local_48 = 0;
    local_50 = 0;
    local_58 = (void *)0x0;
    if (uVar2 == 3) {
      if (*(long *)param_2 == 0) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_2 = pauVar8;
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
      pTVar7 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
      pTVar7[0x10] = (TPPLPoly)0x0;
      *(undefined8 *)(pTVar7 + 8) = 0;
      *(undefined8 *)pTVar7 = 0;
      *(undefined8 *)(pTVar7 + 0x28) = 0;
      *(undefined1 (*) [16])(pTVar7 + 0x18) = (undefined1  [16])0x0;
      TPPLPoly::operator=(pTVar7,param_1);
      plVar3 = *(long **)param_2;
      lVar14 = plVar3[1];
      *(undefined8 *)(pTVar7 + 0x18) = 0;
      *(long **)(pTVar7 + 0x28) = plVar3;
      *(long *)(pTVar7 + 0x20) = lVar14;
      if (lVar14 != 0) {
        *(TPPLPoly **)(lVar14 + 0x18) = pTVar7;
      }
      plVar3[1] = (long)pTVar7;
      if (*plVar3 == 0) {
        *plVar3 = (long)pTVar7;
      }
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      uVar12 = 1;
    }
    else {
      uVar1 = uVar2 * 0x28;
      uVar15 = 0xffffffffffffffff;
      if (uVar2 < 0x333333333333334) {
        uVar15 = uVar1;
      }
      pPVar5 = (PartitionVertex *)operator_new__(uVar15);
      lVar14 = uVar2 - 2;
      pPVar6 = pPVar5;
      do {
        lVar14 = lVar14 + -1;
        *(undefined8 *)(pPVar6 + 4) = 0;
        *(undefined1 (*) [16])(pPVar6 + 0x18) = (undefined1  [16])0x0;
        pPVar6 = pPVar6 + 0x28;
      } while (lVar14 != -2);
      lVar14 = *(long *)param_1;
      uVar15 = 0;
      pPVar6 = pPVar5 + -0x28;
LAB_00100bb0:
      do {
        uVar12 = *(undefined8 *)(lVar14 + uVar15 * 8);
        pPVar6[0x28] = (PartitionVertex)0x1;
        *(undefined8 *)(pPVar6 + 0x2c) = uVar12;
        if (uVar2 - 1 == uVar15) {
          *(PartitionVertex **)(pPVar6 + 0x48) = pPVar5;
        }
        else {
          *(PartitionVertex **)(pPVar6 + 0x48) = pPVar6 + 0x50;
          if (uVar15 == 0) {
            *(PartitionVertex **)(pPVar6 + 0x40) = pPVar5 + (uVar1 - 0x28);
            uVar15 = 1;
            pPVar6 = pPVar6 + 0x28;
            goto LAB_00100bb0;
          }
        }
        uVar15 = uVar15 + 1;
        *(PartitionVertex **)(pPVar6 + 0x40) = pPVar6;
        pPVar6 = pPVar6 + 0x28;
      } while (uVar2 != uVar15);
      pPVar13 = pPVar5 + uVar1;
      pPVar6 = pPVar5;
      pTVar16 = this;
      do {
        pPVar11 = pPVar6 + 0x28;
        UpdateVertex(pTVar16,pPVar6,pPVar5,uVar2);
        pPVar6 = pPVar11;
      } while (pPVar11 != pPVar13);
      pPVar6 = (PartitionVertex *)0x0;
      lVar14 = 0;
      do {
        PVar9 = (PartitionVertex)0x0;
        pPVar11 = pPVar5;
        do {
          if (((*pPVar11 != (PartitionVertex)0x0) && (pPVar11[2] != (PartitionVertex)0x0)) &&
             ((PVar9 == (PartitionVertex)0x0 ||
              (*(double *)(pPVar6 + 0x10) <= *(double *)(pPVar11 + 0x10) &&
               *(double *)(pPVar11 + 0x10) != *(double *)(pPVar6 + 0x10))))) {
            pPVar6 = pPVar11;
            PVar9 = pPVar11[2];
          }
          pPVar11 = pPVar11 + 0x28;
        } while (pPVar11 != pPVar13);
        if (PVar9 == (PartitionVertex)0x0) {
          uVar12 = 0;
          operator_delete__(pPVar5);
          goto LAB_00100e56;
        }
        TPPLPoly::Triangle((TPPLPoly *)&local_58,(Vector2 *)(*(long *)(pPVar6 + 0x18) + 4),
                           (Vector2 *)(pPVar6 + 4),(Vector2 *)(*(long *)(pPVar6 + 0x20) + 4));
        if (*(long *)param_2 == 0) {
          pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_2 = pauVar8;
          *(undefined4 *)pauVar8[1] = 0;
          *pauVar8 = (undefined1  [16])0x0;
        }
        pTVar7 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
        pTVar7[0x10] = (TPPLPoly)0x0;
        *(undefined8 *)(pTVar7 + 8) = 0;
        *(undefined8 *)pTVar7 = 0;
        *(undefined8 *)(pTVar7 + 0x28) = 0;
        *(undefined1 (*) [16])(pTVar7 + 0x18) = (undefined1  [16])0x0;
        TPPLPoly::operator=(pTVar7,(TPPLPoly *)&local_58);
        plVar3 = *(long **)param_2;
        lVar4 = plVar3[1];
        *(undefined8 *)(pTVar7 + 0x18) = 0;
        *(long **)(pTVar7 + 0x28) = plVar3;
        *(long *)(pTVar7 + 0x20) = lVar4;
        if (lVar4 != 0) {
          *(TPPLPoly **)(lVar4 + 0x18) = pTVar7;
        }
        plVar3[1] = (long)pTVar7;
        if (*plVar3 == 0) {
          *plVar3 = (long)pTVar7;
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        lVar4 = *(long *)(pPVar6 + 0x18);
        pPVar11 = *(PartitionVertex **)(pPVar6 + 0x20);
        *pPVar6 = (PartitionVertex)0x0;
        *(PartitionVertex **)(lVar4 + 0x20) = pPVar11;
        *(long *)(pPVar11 + 0x18) = lVar4;
        pPVar10 = pPVar5;
        if (uVar2 - 4 == lVar14) break;
        lVar14 = lVar14 + 1;
        pTVar16 = this;
        UpdateVertex(this,*(PartitionVertex **)(pPVar6 + 0x18),pPVar5,uVar2);
        UpdateVertex(pTVar16,pPVar11,pPVar5,uVar2);
      } while (lVar14 < (long)(uVar2 - 3));
      do {
        if (*pPVar10 != (PartitionVertex)0x0) {
          TPPLPoly::Triangle((TPPLPoly *)&local_58,(Vector2 *)(*(long *)(pPVar10 + 0x18) + 4),
                             (Vector2 *)(pPVar10 + 4),(Vector2 *)(*(long *)(pPVar10 + 0x20) + 4));
          if (*(long *)param_2 == 0) {
            pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_2 = pauVar8;
            *(undefined4 *)pauVar8[1] = 0;
            *pauVar8 = (undefined1  [16])0x0;
          }
          pTVar7 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
          pTVar7[0x10] = (TPPLPoly)0x0;
          *(undefined8 *)(pTVar7 + 8) = 0;
          *(undefined8 *)pTVar7 = 0;
          *(undefined8 *)(pTVar7 + 0x28) = 0;
          *(undefined1 (*) [16])(pTVar7 + 0x18) = (undefined1  [16])0x0;
          TPPLPoly::operator=(pTVar7,(TPPLPoly *)&local_58);
          plVar3 = *(long **)param_2;
          lVar14 = plVar3[1];
          *(undefined8 *)(pTVar7 + 0x18) = 0;
          *(long **)(pTVar7 + 0x28) = plVar3;
          *(long *)(pTVar7 + 0x20) = lVar14;
          if (lVar14 != 0) {
            *(TPPLPoly **)(lVar14 + 0x18) = pTVar7;
          }
          plVar3[1] = (long)pTVar7;
          if (*plVar3 == 0) {
            *plVar3 = (long)pTVar7;
          }
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          break;
        }
        pPVar10 = pPVar10 + 0x28;
      } while (pPVar10 != pPVar13);
      uVar12 = 1;
      operator_delete__(pPVar5);
LAB_00100e56:
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* TPPLPartition::Triangulate_OPT(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::Triangulate_OPT(TPPLPartition *this,TPPLPoly *param_1,List *param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  long lVar10;
  TPPLPoly *this_00;
  long lVar11;
  long *plVar12;
  undefined1 (*pauVar13) [16];
  Vector2 *pVVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  double *pdVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  char *pcVar31;
  long in_FS_OFFSET;
  double dVar32;
  double dVar33;
  double dVar34;
  double in_XMM12_Qa;
  void *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar27 = 0;
  uVar3 = *(ulong *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < (long)uVar3) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_70 = 0;
    local_78 = (void *)0x0;
    if (uVar3 >> 0x3c == 0) {
      pvVar6 = operator_new__(uVar3 * 8);
    }
    else {
      pvVar6 = operator_new__(0xffffffffffffffff);
    }
    uVar28 = 1;
    do {
      uVar20 = 0xffffffffffffffff;
      if ((long)uVar28 < 0x555555555555556) {
        uVar20 = uVar28 * 0x18;
      }
      pvVar7 = operator_new__(uVar20);
      *(void **)((long)pvVar6 + uVar28 * 8) = pvVar7;
      uVar28 = uVar28 + 1;
    } while (uVar3 != uVar28);
    uVar28 = uVar3 - 1;
    puVar9 = *(undefined8 **)param_1;
    lVar16 = 0;
    pVVar14 = (Vector2 *)&local_48;
    uVar20 = 0;
    do {
      local_60 = puVar9[uVar20];
      uVar17 = uVar20 + 1;
      if ((long)uVar17 < (long)uVar3) {
        uVar23 = uVar17;
        do {
          puVar25 = (undefined1 *)(lVar16 * 0x18 + *(long *)((long)pvVar6 + uVar23 * 8));
          *puVar25 = 1;
          *(undefined8 *)(puVar25 + 8) = 0;
          *(undefined8 *)(puVar25 + 0x10) = 0xffffffffffffffff;
          if (uVar17 != uVar23) {
            local_58 = puVar9[uVar23];
            if (lVar16 == 0) {
              local_50 = puVar9[uVar3 - 1];
            }
            else {
              local_50 = puVar9[uVar20 - 1];
            }
            local_48 = puVar9[uVar17];
            cVar4 = InCone(this,(Vector2 *)&local_50,(Vector2 *)&local_60,pVVar14,
                           (Vector2 *)&local_58);
            if (cVar4 != '\0') {
              local_50 = puVar9[uVar23 - 1];
              if (uVar28 == uVar23) {
                local_48 = *puVar9;
              }
              else {
                local_48 = puVar9[uVar23 + 1];
              }
              cVar4 = InCone(this,(Vector2 *)&local_50,(Vector2 *)&local_58,pVVar14,
                             (Vector2 *)&local_60);
              if (cVar4 != '\0') {
                uVar22 = 0;
                uVar24 = uVar28;
                do {
                  local_50 = puVar9[uVar22];
                  if (uVar22 == uVar24) {
                    local_48 = *puVar9;
                  }
                  else {
                    local_48 = puVar9[uVar22 + 1];
                  }
                  iVar5 = Intersects(this,(Vector2 *)&local_60,(Vector2 *)&local_58,
                                     (Vector2 *)&local_50,pVVar14);
                  if (iVar5 != 0) goto LAB_001011d8;
                  uVar22 = uVar22 + 1;
                } while (uVar3 != uVar22);
                goto LAB_001011dc;
              }
            }
LAB_001011d8:
            *puVar25 = 0;
          }
LAB_001011dc:
          uVar23 = uVar23 + 1;
        } while (uVar3 != uVar23);
      }
      lVar16 = lVar16 + 1;
      uVar20 = uVar17;
    } while (uVar17 != uVar28);
    lVar16 = uVar3 - 2;
    puVar25 = *(undefined1 **)((long)pvVar6 + (uVar3 * 8 - 8));
    *puVar25 = 1;
    *(undefined8 *)(puVar25 + 8) = 0;
    *(undefined8 *)(puVar25 + 0x10) = 0xffffffffffffffff;
    lVar11 = 2;
LAB_00101634:
    lVar26 = 0;
    lVar10 = 0;
    lVar21 = lVar11;
LAB_00101651:
    lVar15 = *(long *)((long)pvVar6 + lVar21 * 8);
    lVar18 = lVar10 + 1;
    pcVar2 = (char *)(lVar15 + lVar26);
    if (*pcVar2 != '\0') {
      pdVar19 = (double *)(lVar15 + 0x20 + lVar26);
      lVar15 = lVar18;
      lVar30 = -1;
      dVar33 = in_XMM12_Qa;
      do {
        lVar1 = lVar15 + 1;
        pcVar31 = (char *)(*(long *)((long)pvVar6 + lVar15 * 8) + lVar26);
        if ((*pcVar31 == '\0') || (*(char *)(pdVar19 + -1) == '\0')) {
LAB_001016b6:
          lVar15 = lVar30;
          lVar29 = lVar15;
          in_XMM12_Qa = dVar33;
          if (lVar21 <= lVar1) goto LAB_00101790;
        }
        else {
          dVar32 = 0.0;
          if (lVar18 < lVar15) {
            dVar32 = (double)(*(float *)((long)puVar9 + lVar1 * 8 + -4) -
                             *(float *)((long)puVar9 + lVar18 * 8 + -4));
            dVar32 = SQRT((double)(*(float *)(puVar9 + lVar15) - *(float *)(puVar9 + lVar10)) *
                          (double)(*(float *)(puVar9 + lVar15) - *(float *)(puVar9 + lVar10)) +
                          dVar32 * dVar32);
          }
          if (lVar21 <= lVar1) {
            in_XMM12_Qa = *pdVar19 + *(double *)(pcVar31 + 8) + dVar32 + 0.0;
            if (lVar30 != -1) {
LAB_001016a3:
              if (in_XMM12_Qa < dVar33) {
                lVar30 = lVar15;
                dVar33 = in_XMM12_Qa;
              }
              goto LAB_001016b6;
            }
            goto LAB_0010179e;
          }
          dVar34 = (double)(*(float *)((long)puVar9 + lVar21 * 8 + 4) -
                           *(float *)((long)puVar9 + lVar1 * 8 + -4));
          in_XMM12_Qa = *pdVar19 + *(double *)(pcVar31 + 8) + dVar32 +
                        SQRT((double)(*(float *)(puVar9 + lVar21) - *(float *)(puVar9 + lVar15)) *
                             (double)(*(float *)(puVar9 + lVar21) - *(float *)(puVar9 + lVar15)) +
                             dVar34 * dVar34);
          lVar29 = lVar15;
          if (lVar30 != -1) goto LAB_001016a3;
        }
        pdVar19 = pdVar19 + 3;
        lVar15 = lVar1;
        lVar30 = lVar29;
        dVar33 = in_XMM12_Qa;
      } while( true );
    }
    goto LAB_00101640;
  }
  goto LAB_00101523;
LAB_00101790:
  if (lVar15 != -1) {
LAB_0010179e:
    *(long *)(pcVar2 + 0x10) = lVar15;
    *(double *)(pcVar2 + 8) = in_XMM12_Qa;
LAB_00101640:
    lVar26 = lVar26 + 0x18;
    lVar21 = lVar21 + 1;
    lVar10 = lVar18;
    if (lVar16 == lVar18) goto LAB_00101240;
    goto LAB_00101651;
  }
  uVar28 = 1;
  do {
    pvVar7 = *(void **)((long)pvVar6 + uVar28 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
    }
    uVar28 = uVar28 + 1;
  } while (uVar28 != uVar3);
  uVar27 = 0;
  operator_delete__(pvVar6);
  goto LAB_00101523;
LAB_00101240:
  lVar11 = lVar11 + 1;
  lVar16 = lVar16 + -1;
  if (lVar16 == 0) goto code_r0x0010124e;
  goto LAB_00101634;
code_r0x0010124e:
  pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
  *(undefined4 *)pauVar8[1] = 0;
  *pauVar8 = (undefined1  [16])0x0;
  puVar9 = (undefined8 *)operator_new(0x28,DefaultAllocator::alloc);
  puVar9[2] = 0;
  lVar16 = *(long *)(*pauVar8 + 8);
  *puVar9 = 0;
  puVar9[1] = uVar28;
  puVar9[3] = lVar16;
  puVar9[4] = pauVar8;
  if (lVar16 != 0) {
    *(undefined8 **)(lVar16 + 0x10) = puVar9;
  }
  lVar16 = *(long *)*pauVar8;
  *(undefined8 **)(*pauVar8 + 8) = puVar9;
  if (lVar16 == 0) {
    *(undefined8 **)*pauVar8 = puVar9;
  }
  *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
  do {
    while( true ) {
      if (*(int *)pauVar8[1] == 0) goto LAB_00101443;
      plVar12 = *(long **)*pauVar8;
      lVar16 = *plVar12;
      lVar11 = plVar12[1];
      if (pauVar8 == (undefined1 (*) [16])plVar12[4]) {
        lVar10 = plVar12[2];
        lVar21 = plVar12[3];
        *(long *)*pauVar8 = lVar10;
        if (plVar12 == *(long **)(*pauVar8 + 8)) {
          *(long *)(*pauVar8 + 8) = lVar21;
        }
        if (lVar21 != 0) {
          *(long *)(lVar21 + 0x10) = lVar10;
          lVar10 = plVar12[2];
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x18) = lVar21;
        }
        Memory::free_static(plVar12,false);
        iVar5 = *(int *)pauVar8[1] + -1;
        *(int *)pauVar8[1] = iVar5;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        iVar5 = *(int *)pauVar8[1];
      }
      if (iVar5 == 0) {
        Memory::free_static(pauVar8,false);
        pauVar8 = (undefined1 (*) [16])0x0;
      }
      lVar10 = *(long *)(lVar16 * 0x18 + *(long *)((long)pvVar6 + lVar11 * 8) + 0x10);
      if (lVar10 == -1) {
        uVar27 = 0;
        goto LAB_00101456;
      }
      lVar21 = *(long *)param_1;
      TPPLPoly::Triangle((TPPLPoly *)&local_78,(Vector2 *)(lVar21 + lVar16 * 8),
                         (Vector2 *)(lVar21 + lVar10 * 8),(Vector2 *)(lVar11 * 8 + lVar21));
      if (*(long *)param_2 == 0) {
        pauVar13 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_2 = pauVar13;
        *(undefined4 *)pauVar13[1] = 0;
        *pauVar13 = (undefined1  [16])0x0;
      }
      this_00 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
      this_00[0x10] = (TPPLPoly)0x0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
      TPPLPoly::operator=(this_00,(TPPLPoly *)&local_78);
      plVar12 = *(long **)param_2;
      lVar21 = plVar12[1];
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(long **)(this_00 + 0x28) = plVar12;
      *(long *)(this_00 + 0x20) = lVar21;
      if (lVar21 != 0) {
        *(TPPLPoly **)(lVar21 + 0x18) = this_00;
      }
      plVar12[1] = (long)this_00;
      if (*plVar12 == 0) {
        *plVar12 = (long)this_00;
      }
      *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
      if (lVar10 <= lVar16 + 1) break;
      if (pauVar8 == (undefined1 (*) [16])0x0) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
      plVar12 = (long *)operator_new(0x28,DefaultAllocator::alloc);
      lVar21 = *(long *)(*pauVar8 + 8);
      plVar12[2] = 0;
      plVar12[3] = lVar21;
      plVar12[4] = (long)pauVar8;
      *plVar12 = lVar16;
      plVar12[1] = lVar10;
      if (lVar21 != 0) {
        *(long **)(lVar21 + 0x10) = plVar12;
      }
      lVar16 = *(long *)*pauVar8;
      *(long **)(*pauVar8 + 8) = plVar12;
      if (lVar16 == 0) {
        *(long **)*pauVar8 = plVar12;
      }
      *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
      if (lVar10 + 1 < lVar11) {
LAB_001018eb:
        plVar12 = (long *)operator_new(0x28,DefaultAllocator::alloc);
        lVar16 = *(long *)(*pauVar8 + 8);
        plVar12[2] = 0;
        *plVar12 = lVar10;
        plVar12[1] = lVar11;
        plVar12[3] = lVar16;
        plVar12[4] = (long)pauVar8;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 0x10) = plVar12;
        }
        lVar16 = *(long *)*pauVar8;
        *(long **)(*pauVar8 + 8) = plVar12;
        if (lVar16 == 0) {
          *(long **)*pauVar8 = plVar12;
        }
        *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
      }
    }
    if (lVar10 + 1 < lVar11) {
      if (pauVar8 == (undefined1 (*) [16])0x0) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
      goto LAB_001018eb;
    }
  } while (pauVar8 != (undefined1 (*) [16])0x0);
LAB_00101443:
  uVar27 = 1;
LAB_00101456:
  uVar28 = 1;
  do {
    pvVar7 = *(void **)((long)pvVar6 + uVar28 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
    }
    uVar28 = uVar28 + 1;
  } while (uVar28 != uVar3);
  operator_delete__(pvVar6);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar6 = *(void **)*pauVar8;
        if (pvVar6 == (void *)0x0) {
          if (*(int *)pauVar8[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00101523;
          }
          goto LAB_00101519;
        }
        if (pauVar8 != *(undefined1 (**) [16])((long)pvVar6 + 0x20)) break;
        lVar16 = *(long *)((long)pvVar6 + 0x10);
        lVar11 = *(long *)((long)pvVar6 + 0x18);
        *(long *)*pauVar8 = lVar16;
        if (pvVar6 == *(void **)(*pauVar8 + 8)) {
          *(long *)(*pauVar8 + 8) = lVar11;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x10) = lVar16;
          lVar16 = *(long *)((long)pvVar6 + 0x10);
        }
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x18) = lVar11;
        }
        Memory::free_static(pvVar6,false);
        pauVar13 = pauVar8 + 1;
        *(int *)*pauVar13 = *(int *)*pauVar13 + -1;
        if (*(int *)*pauVar13 == 0) goto LAB_00101519;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar8[1] != 0);
LAB_00101519:
    Memory::free_static(pauVar8,false);
  }
LAB_00101523:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::UpdateState(long, long, long, long, long, TPPLPartition::DPState2**) */

void __thiscall
TPPLPartition::UpdateState
          (TPPLPartition *this,long param_1,long param_2,long param_3,long param_4,long param_5,
          DPState2 **param_6)

{
  DPState2 *pDVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_2 * 0x18;
  pDVar1 = param_6[param_1];
  if (param_3 <= *(long *)(pDVar1 + lVar8 + 8)) {
    plVar7 = *(long **)(pDVar1 + lVar8 + 0x10);
    if (param_3 < *(long *)(pDVar1 + lVar8 + 8)) {
      if (plVar7 != (long *)0x0) {
        do {
          pvVar2 = (void *)*plVar7;
          if (pvVar2 == (void *)0x0) goto LAB_00101c21;
          if (*(long **)((long)pvVar2 + 0x20) == plVar7) {
            lVar4 = *(long *)((long)pvVar2 + 0x10);
            lVar3 = *(long *)((long)pvVar2 + 0x18);
            *plVar7 = lVar4;
            if (pvVar2 == (void *)plVar7[1]) {
              plVar7[1] = lVar3;
            }
            if (lVar3 != 0) {
              *(long *)(lVar3 + 0x10) = lVar4;
              lVar4 = *(long *)((long)pvVar2 + 0x10);
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x18) = lVar3;
            }
            Memory::free_static(pvVar2,false);
            *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar7 = *(long **)(pDVar1 + lVar8 + 0x10);
        } while ((int)plVar7[2] != 0);
        Memory::free_static(plVar7,false);
        *(undefined8 *)(pDVar1 + lVar8 + 0x10) = 0;
      }
      pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(pDVar1 + lVar8 + 0x10) = pauVar5;
      *(undefined4 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
LAB_00101c21:
      plVar6 = (long *)operator_new(0x28,DefaultAllocator::alloc);
      plVar7 = *(long **)(pDVar1 + lVar8 + 0x10);
      plVar6[3] = 0;
      lVar4 = *plVar7;
      *plVar6 = param_4;
      plVar6[1] = param_5;
      plVar6[2] = lVar4;
      plVar6[4] = (long)plVar7;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x18) = plVar6;
      }
      *plVar7 = (long)plVar6;
      if (plVar7[1] == 0) {
        plVar7[1] = (long)plVar6;
      }
      pDVar1 = param_6[param_1];
      *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
      *(long *)(pDVar1 + lVar8 + 8) = param_3;
      return;
    }
    if (plVar7 != (long *)0x0) {
      if (((int)plVar7[2] != 0) && (param_4 <= *(long *)*plVar7)) {
        return;
      }
      if (plVar7 != (long *)0x0) {
        do {
          if (((int)plVar7[2] == 0) ||
             (pvVar2 = (void *)*plVar7, *(long *)((long)pvVar2 + 8) < param_5)) goto LAB_00101b27;
          if (*(long **)((long)pvVar2 + 0x20) == plVar7) {
            lVar4 = *(long *)((long)pvVar2 + 0x10);
            lVar3 = *(long *)((long)pvVar2 + 0x18);
            *plVar7 = lVar4;
            if (pvVar2 == (void *)plVar7[1]) {
              plVar7[1] = lVar3;
            }
            if (lVar3 != 0) {
              *(long *)(lVar3 + 0x10) = lVar4;
              lVar4 = *(long *)((long)pvVar2 + 0x10);
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x18) = lVar3;
            }
            Memory::free_static(pvVar2,false);
            *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar7 = *(long **)(pDVar1 + lVar8 + 0x10);
        } while ((int)plVar7[2] != 0);
        Memory::free_static(plVar7,false);
        *(undefined8 *)(pDVar1 + lVar8 + 0x10) = 0;
      }
    }
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(pDVar1 + lVar8 + 0x10) = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
LAB_00101b27:
    plVar6 = (long *)operator_new(0x28,DefaultAllocator::alloc);
    plVar7 = *(long **)(pDVar1 + lVar8 + 0x10);
    plVar6[3] = 0;
    lVar8 = *plVar7;
    *plVar6 = param_4;
    plVar6[1] = param_5;
    plVar6[2] = lVar8;
    plVar6[4] = (long)plVar7;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 0x18) = plVar6;
    }
    *plVar7 = (long)plVar6;
    if (plVar7[1] == 0) {
      plVar7[1] = (long)plVar6;
    }
    *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  }
  return;
}



/* TPPLPartition::TypeA(long, long, long, TPPLPartition::PartitionVertex*,
   TPPLPartition::DPState2**) */

undefined1  [16] __thiscall
TPPLPartition::TypeA
          (TPPLPartition *this,long param_1,long param_2,long param_3,PartitionVertex *param_4,
          DPState2 **param_5)

{
  long *plVar1;
  DPState2 **ppDVar2;
  long *plVar3;
  long *plVar4;
  DPState2 *pDVar5;
  long lVar6;
  PartitionVertex *pPVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  DPState2 *pDStack_30;
  
  pDVar5 = param_5[param_1] + param_2 * 0x18;
  if (*pDVar5 == (DPState2)0x0) {
    auVar11._8_8_ = pDVar5;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
  lVar8 = *(long *)(pDVar5 + 8);
  if (1 < param_3 - param_2) {
    if (param_5[param_2][param_3 * 0x18] == (DPState2)0x0) goto LAB_00101ec6;
    lVar8 = lVar8 + 1 + *(long *)(param_5[param_2] + param_3 * 0x18 + 8);
  }
  lVar6 = param_2;
  if (1 < param_2 - param_1) {
    plVar1 = *(long **)(pDVar5 + 0x10);
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      plVar4 = (long *)0x0;
      pPVar7 = param_4 + param_3 * 0x28;
    }
    else {
      plVar9 = (long *)plVar1[1];
      pPVar7 = param_4 + param_3 * 0x28;
      plVar3 = plVar9;
      do {
        plVar4 = plVar3;
        if ((long *)*plVar1 == plVar4) break;
        plVar3 = plVar4 + -5;
      } while (0.0 <= (*(float *)(pPVar7 + 8) - *(float *)(param_4 + plVar4[-4] * 0x28 + 8)) *
                      (*(float *)(param_4 + param_2 * 0x28 + 4) -
                      *(float *)(param_4 + plVar4[-4] * 0x28 + 4)) -
                      (*(float *)(pPVar7 + 4) - *(float *)(param_4 + plVar4[-4] * 0x28 + 4)) *
                      (*(float *)(param_4 + param_2 * 0x28 + 8) -
                      *(float *)(param_4 + plVar4[-4] * 0x28 + 8)));
    }
    if ((plVar9 == plVar4) ||
       (lVar6 = *plVar4,
       (*(float *)(param_4 + lVar6 * 0x28 + 8) - *(float *)(pPVar7 + 8)) *
       (*(float *)(param_4 + param_1 * 0x28 + 4) - *(float *)(pPVar7 + 4)) -
       (*(float *)(param_4 + lVar6 * 0x28 + 4) - *(float *)(pPVar7 + 4)) *
       (*(float *)(param_4 + param_1 * 0x28 + 8) - *(float *)(pPVar7 + 8)) < 0.0)) {
      lVar8 = lVar8 + 1;
      lVar6 = param_2;
    }
  }
  ppDVar2 = param_5;
  UpdateState(this,param_1,param_3,lVar8,lVar6,param_2,param_5);
  param_2 = (long)ppDVar2;
  pDVar5 = pDStack_30;
LAB_00101ec6:
  auVar10._8_8_ = pDVar5;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* TPPLPartition::TypeB(long, long, long, TPPLPartition::PartitionVertex*,
   TPPLPartition::DPState2**) */

undefined1  [16] __thiscall
TPPLPartition::TypeB
          (TPPLPartition *this,long param_1,long param_2,long param_3,PartitionVertex *param_4,
          DPState2 **param_5)

{
  DPState2 *pDVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  long *plVar5;
  DPState2 **ppDVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_20;
  
  pDVar1 = param_5[param_2] + param_3 * 0x18;
  if (*pDVar1 == (DPState2)0x0) {
    auVar14._8_8_ = param_3;
    auVar14._0_8_ = param_2;
    return auVar14;
  }
  lVar9 = *(long *)(pDVar1 + 8);
  if (1 < param_2 - param_1) {
    if (param_5[param_1][param_2 * 0x18] == (DPState2)0x0) goto LAB_001020af;
    lVar9 = lVar9 + 1 + *(long *)(param_5[param_1] + param_2 * 0x18 + 8);
  }
  lVar10 = param_2;
  if (1 < param_3 - param_2) {
    puVar4 = *(undefined8 **)(pDVar1 + 0x10);
    if ((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) != 0)) {
      plVar8 = (long *)*puVar4;
      fVar2 = *(float *)(param_4 + param_1 * 0x28 + 8);
      fVar3 = *(float *)(param_4 + param_1 * 0x28 + 4);
      fVar11 = *(float *)(param_4 + *plVar8 * 0x28 + 8) - fVar2;
      fVar12 = *(float *)(param_4 + *plVar8 * 0x28 + 4) - fVar3;
      plVar5 = plVar8;
      if (0.0 <= fVar11 * (*(float *)(param_4 + param_2 * 0x28 + 4) - fVar3) -
                 fVar12 * (*(float *)(param_4 + param_2 * 0x28 + 8) - fVar2)) {
        while ((plVar7 = plVar5,
               0.0 <= fVar11 * (*(float *)(param_4 + param_2 * 0x28 + 4) - fVar3) -
                      fVar12 * (*(float *)(param_4 + param_2 * 0x28 + 8) - fVar2) &&
               (plVar5 = (long *)plVar7[2], plVar8 = plVar7, plVar5 != (long *)0x0))) {
          fVar11 = *(float *)(param_4 + *plVar5 * 0x28 + 8) - fVar2;
          fVar12 = *(float *)(param_4 + *plVar5 * 0x28 + 4) - fVar3;
        }
        lVar10 = plVar8[1];
        if (0.0 <= (*(float *)(param_4 + param_3 * 0x28 + 4) -
                   *(float *)(param_4 + lVar10 * 0x28 + 4)) *
                   (fVar2 - *(float *)(param_4 + lVar10 * 0x28 + 8)) -
                   (*(float *)(param_4 + param_3 * 0x28 + 8) -
                   *(float *)(param_4 + lVar10 * 0x28 + 8)) *
                   (fVar3 - *(float *)(param_4 + lVar10 * 0x28 + 4))) goto LAB_00102097;
      }
    }
    lVar9 = lVar9 + 1;
    lVar10 = param_2;
  }
LAB_00102097:
  ppDVar6 = param_5;
  UpdateState(this,param_1,param_3,lVar9,param_2,lVar10,param_5);
  param_2 = (long)ppDVar6;
  param_3 = lStack_20;
LAB_001020af:
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = param_2;
  return auVar13;
}



/* TPPLPartition::AddDiagonal(TPPLPartition::MonotoneVertex*, long*, long, long, TPPLVertexType*,
   RBSet<TPPLPartition::ScanLineEdge, Comparator<TPPLPartition::ScanLineEdge>,
   DefaultAllocator>::Element**, RBSet<TPPLPartition::ScanLineEdge,
   Comparator<TPPLPartition::ScanLineEdge>, DefaultAllocator>*, long*) */

void __thiscall
TPPLPartition::AddDiagonal
          (TPPLPartition *this,MonotoneVertex *param_1,long *param_2,long param_3,long param_4,
          TPPLVertexType *param_5,Element **param_6,RBSet *param_7,long *param_8)

{
  long lVar1;
  MonotoneVertex *pMVar2;
  MonotoneVertex *pMVar3;
  MonotoneVertex *pMVar4;
  MonotoneVertex *pMVar5;
  long lVar6;
  long lVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  lVar6 = *param_2;
  lVar1 = lVar6 + 1;
  *param_2 = lVar6 + 2;
  pMVar2 = param_1 + param_3 * 0x18;
  pMVar3 = param_1 + lVar6 * 0x18;
  pMVar5 = param_1 + lVar6 * 0x18 + 0x18;
  *(undefined8 *)pMVar3 = *(undefined8 *)pMVar2;
  pMVar4 = param_1 + param_4 * 0x18;
  *(undefined8 *)pMVar5 = *(undefined8 *)pMVar4;
  *(undefined8 *)(pMVar5 + 0x10) = *(undefined8 *)(pMVar4 + 0x10);
  lVar7 = *(long *)(pMVar2 + 0x10);
  *(long *)(pMVar3 + 0x10) = lVar7;
  *(long *)(param_1 + *(long *)(pMVar4 + 0x10) * 0x18 + 8) = lVar1;
  *(long *)(param_1 + lVar7 * 0x18 + 8) = lVar6;
  *(long *)(pMVar2 + 0x10) = lVar1;
  *(long *)(pMVar5 + 8) = param_3;
  *(long *)(pMVar4 + 0x10) = lVar6;
  *(long *)(pMVar3 + 8) = param_4;
  pEVar8 = param_6[param_3];
  lVar7 = param_8[param_3];
  *(undefined4 *)(param_5 + lVar6 * 4) = *(undefined4 *)(param_5 + param_3 * 4);
  param_6[lVar6] = pEVar8;
  pEVar10 = *(Element **)param_7;
  param_8[lVar6] = lVar7;
  if (pEVar10 != (Element *)0x0) {
    pEVar9 = *(Element **)(pEVar10 + 0x10);
    if (*(Element **)(param_7 + 8) == *(Element **)(pEVar10 + 0x10)) {
      pEVar10 = (Element *)0x0;
    }
    else {
      do {
        pEVar10 = pEVar9;
        pEVar9 = *(Element **)(pEVar10 + 8);
      } while (*(Element **)(param_7 + 8) != *(Element **)(pEVar10 + 8));
    }
  }
  if (pEVar8 != pEVar10) {
    *(long *)(pEVar8 + 0x30) = lVar6;
  }
  pEVar8 = param_6[param_4];
  *(undefined4 *)(param_5 + lVar6 * 4 + 4) = *(undefined4 *)(param_5 + param_4 * 4);
  lVar7 = param_8[param_4];
  param_6[lVar6 + 1] = pEVar8;
  pEVar10 = *(Element **)param_7;
  param_8[lVar6 + 1] = lVar7;
  if (pEVar10 != (Element *)0x0) {
    pEVar9 = *(Element **)(pEVar10 + 0x10);
    if (*(Element **)(pEVar10 + 0x10) == *(Element **)(param_7 + 8)) {
      pEVar10 = (Element *)0x0;
    }
    else {
      do {
        pEVar10 = pEVar9;
        pEVar9 = *(Element **)(pEVar10 + 8);
      } while (*(Element **)(param_7 + 8) != *(Element **)(pEVar10 + 8));
    }
  }
  if (pEVar8 != pEVar10) {
    *(long *)(pEVar8 + 0x30) = lVar1;
  }
  return;
}



/* TPPLPartition::Below(Vector2&, Vector2&) */

bool __thiscall TPPLPartition::Below(TPPLPartition *this,Vector2 *param_1,Vector2 *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
    if (*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) {
      return *(float *)param_1 <= *(float *)param_2 && *(float *)param_2 != *(float *)param_1;
    }
    bVar1 = false;
  }
  return bVar1;
}



/* TPPLPartition::VertexSorter::TEMPNAMEPLACEHOLDERVALUE(long, long) */

bool __thiscall
TPPLPartition::VertexSorter::operator()(VertexSorter *this,long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  bool bVar4;
  
  pfVar1 = (float *)(*(long *)this + param_1 * 0x18);
  pfVar2 = (float *)(*(long *)this + param_2 * 0x18);
  bVar4 = true;
  fVar3 = pfVar1[1];
  if (fVar3 <= pfVar2[1]) {
    if (fVar3 == pfVar2[1]) {
      fVar3 = *pfVar1;
      return *pfVar2 <= fVar3 && fVar3 != *pfVar2;
    }
    bVar4 = false;
  }
  return bVar4;
}



/* TPPLPartition::ScanLineEdge::IsConvex(Vector2 const&, Vector2 const&, Vector2 const&) const */

bool __thiscall
TPPLPartition::ScanLineEdge::IsConvex
          (ScanLineEdge *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  return 0.0 < (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) *
               (*(float *)param_2 - *(float *)param_1) -
               (*(float *)param_3 - *(float *)param_1) *
               (*(float *)(param_2 + 4) - *(float *)(param_1 + 4));
}



/* TPPLPartition::ScanLineEdge::TEMPNAMEPLACEHOLDERVALUE(TPPLPartition::ScanLineEdge const&) const
    */

bool __thiscall TPPLPartition::ScanLineEdge::operator<(ScanLineEdge *this,ScanLineEdge *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(this + 0xc);
  fVar3 = *(float *)(this + 0x14);
  if (fVar1 == *(float *)(param_1 + 0x14)) {
    if (fVar2 != fVar3) {
      return 0.0 < (*(float *)(this + 0x10) - *(float *)(this + 8)) * (fVar1 - fVar2) -
                   (fVar3 - fVar2) * (*(float *)(param_1 + 8) - *(float *)(this + 8));
    }
    return fVar2 < fVar1;
  }
  fVar4 = *(float *)(this + 8);
  fVar5 = *(float *)(param_1 + 8);
  if ((fVar2 != fVar3) && (fVar1 <= fVar2)) {
    return 0.0 < (*(float *)(this + 0x10) - fVar4) * (fVar1 - fVar2) -
                 (fVar5 - fVar4) * (fVar3 - fVar2);
  }
  return (*(float *)(param_1 + 0x10) - fVar5) * (fVar2 - fVar1) -
         (fVar4 - fVar5) * (*(float *)(param_1 + 0x14) - fVar1) <= 0.0;
}



/* TPPLPartition::TriangulateMonotone(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::TriangulateMonotone(TPPLPartition *this,TPPLPoly *param_1,List *param_2)

{
  Vector2 *pVVar1;
  Vector2 *pVVar2;
  Vector2 *pVVar3;
  char cVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  Vector2 *pVVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  undefined1 (*pauVar16) [16];
  TPPLPoly *pTVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  ulong *puVar20;
  float *pfVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long in_FS_OFFSET;
  bool bVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  uVar5 = *(ulong *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = 0;
  if ((long)uVar5 < 3) goto LAB_00102509;
  local_48 = 0;
  pfVar6 = *(float **)param_1;
  local_50 = 0;
  uVar24 = 0;
  local_58 = (void *)0x0;
  uVar27 = 1;
  uVar23 = 0;
  if (uVar5 == 3) {
    if (*(long *)param_2 == 0) {
      pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar19;
      *(undefined4 *)pauVar19[1] = 0;
      *pauVar19 = (undefined1  [16])0x0;
    }
    pTVar17 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
    pTVar17[0x10] = (TPPLPoly)0x0;
    *(undefined8 *)(pTVar17 + 8) = 0;
    *(undefined8 *)pTVar17 = 0;
    *(undefined8 *)(pTVar17 + 0x28) = 0;
    *(undefined1 (*) [16])(pTVar17 + 0x18) = (undefined1  [16])0x0;
    TPPLPoly::operator=(pTVar17,param_1);
    plVar8 = *(long **)param_2;
    lVar25 = plVar8[1];
    *(undefined8 *)(pTVar17 + 0x18) = 0;
    *(long **)(pTVar17 + 0x28) = plVar8;
    *(long *)(pTVar17 + 0x20) = lVar25;
    if (lVar25 != 0) {
      *(TPPLPoly **)(lVar25 + 0x18) = pTVar17;
    }
    plVar8[1] = (long)pTVar17;
    if (*plVar8 == 0) {
      *plVar8 = (long)pTVar17;
    }
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
    uVar18 = 1;
    goto LAB_00102509;
  }
  do {
    while( true ) {
      uVar11 = uVar27;
      fVar30 = pfVar6[uVar11 * 2 + 1];
      fVar32 = (pfVar6 + uVar24 * 2)[1];
      if (fVar30 < fVar32) break;
      if ((fVar32 == fVar30) &&
         (fVar32 = pfVar6[uVar24 * 2], pfVar6[uVar11 * 2] <= fVar32 && fVar32 != pfVar6[uVar11 * 2])
         ) {
        uVar24 = uVar11;
      }
      pfVar21 = pfVar6 + uVar23 * 2;
      fVar32 = pfVar21[1];
      if (fVar30 <= fVar32) goto LAB_00102469;
LAB_001024bb:
      uVar27 = uVar11 + 1;
      uVar23 = uVar11;
      if (uVar11 + 1 == uVar5) goto LAB_001024c7;
    }
    pfVar21 = pfVar6 + uVar23 * 2;
    fVar32 = pfVar21[1];
    uVar24 = uVar11;
    if (fVar32 < fVar30) goto LAB_001024bb;
LAB_00102469:
    if ((fVar32 == fVar30) && (*pfVar21 <= pfVar6[uVar11 * 2] && pfVar6[uVar11 * 2] != *pfVar21)) {
      uVar23 = uVar11;
    }
    uVar27 = uVar11 + 1;
  } while (uVar11 + 1 != uVar5);
LAB_001024c7:
  if (uVar23 != uVar24) {
    fVar30 = pfVar6[uVar23 * 2 + 1];
    uVar27 = uVar23 + 1;
    uVar11 = uVar23;
    if ((long)uVar5 <= (long)uVar27) goto LAB_00102554;
    do {
      uVar10 = uVar27;
      pfVar21 = pfVar6 + uVar27 * 2;
      fVar32 = fVar30;
      while( true ) {
        fVar30 = pfVar21[1];
        if ((fVar32 <= fVar30) &&
           ((fVar30 != fVar32 || (pfVar6[uVar11 * 2] < *pfVar21 || pfVar6[uVar11 * 2] == *pfVar21)))
           ) goto LAB_00102507;
        if (uVar10 == uVar24) {
          uVar27 = uVar24;
          fVar30 = pfVar6[uVar24 * 2 + 1];
          goto LAB_0010259e;
        }
        uVar27 = uVar10 + 1;
        uVar11 = uVar10;
        if ((long)uVar27 < (long)uVar5) break;
LAB_00102554:
        uVar10 = 0;
        pfVar21 = pfVar6;
        fVar32 = fVar30;
      }
    } while( true );
  }
  goto LAB_001025b0;
LAB_00102507:
  uVar18 = 0;
  goto LAB_00102509;
  while (uVar27 = uVar11, fVar30 = fVar32, uVar11 != uVar23) {
LAB_0010259e:
    uVar11 = uVar27 + 1;
    if ((long)uVar11 < (long)uVar5) {
      pfVar21 = pfVar6 + uVar11 * 2;
    }
    else {
      uVar11 = 0;
      pfVar21 = pfVar6;
    }
    fVar32 = pfVar21[1];
    if ((fVar32 <= fVar30) &&
       ((fVar32 != fVar30 || (*pfVar21 < pfVar6[uVar27 * 2] || *pfVar21 == pfVar6[uVar27 * 2]))))
    goto LAB_00102507;
  }
LAB_001025b0:
  pvVar12 = operator_new__(uVar5);
  if (uVar5 >> 0x3c == 0) {
    uVar27 = uVar5 * 8;
  }
  else {
    uVar27 = 0xffffffffffffffff;
  }
  pauVar19 = (undefined1 (*) [16])operator_new__(uVar27);
  uVar11 = uVar5 - 1;
  *(ulong *)*pauVar19 = uVar23;
  uVar10 = uVar23 + 1;
  *(undefined1 *)((long)pvVar12 + uVar23) = 0;
  uVar22 = uVar23 - 1;
  if ((long)uVar10 < (long)uVar5) {
    if ((long)uVar23 < 1) {
      uVar22 = uVar11;
    }
  }
  else {
    uVar10 = 0;
  }
  puVar20 = (ulong *)(*pauVar19 + 8);
  do {
    while (uVar24 == uVar10) {
      *puVar20 = uVar22;
      uVar23 = uVar22 - 1;
      if ((long)(uVar22 - 1) < 0) {
        uVar23 = uVar11;
      }
      puVar20 = puVar20 + 1;
      *(undefined1 *)((long)pvVar12 + uVar22) = 0xff;
      uVar22 = uVar23;
      if ((ulong *)(pauVar19[-1] + uVar5 * 8 + 8) == puVar20) goto LAB_001026b0;
    }
    if (uVar24 == uVar22) {
LAB_0010266e:
      *puVar20 = uVar10;
      uVar13 = uVar10 + 1;
      *(undefined1 *)((long)pvVar12 + uVar10) = 1;
      uVar10 = uVar13;
      uVar23 = uVar22;
      if ((long)uVar5 <= (long)uVar13) {
        uVar10 = 0;
      }
    }
    else {
      pfVar21 = pfVar6 + uVar10 * 2;
      fVar30 = (pfVar6 + uVar22 * 2)[1];
      if ((fVar30 <= pfVar21[1]) &&
         ((pfVar21[1] != fVar30 ||
          (fVar30 = pfVar6[uVar22 * 2], fVar30 < *pfVar21 || fVar30 == *pfVar21))))
      goto LAB_0010266e;
      *puVar20 = uVar22;
      uVar23 = uVar22 - 1;
      if ((long)(uVar22 - 1) < 0) {
        uVar23 = uVar11;
      }
      *(undefined1 *)((long)pvVar12 + uVar22) = 0xff;
    }
    puVar20 = puVar20 + 1;
    uVar22 = uVar23;
  } while ((ulong *)(pauVar19[-1] + uVar5 * 8 + 8) != puVar20);
LAB_001026b0:
  *(undefined1 *)((long)pvVar12 + uVar24) = 0;
  *(ulong *)(pauVar19[-1] + uVar5 * 8 + 8) = uVar24;
  lVar25 = 2;
  pauVar14 = (undefined1 (*) [16])operator_new__(uVar27);
  *pauVar14 = *pauVar19;
  lVar15 = 2;
  do {
    lVar26 = lVar25 * 8;
    lVar7 = *(long *)(*pauVar19 + lVar15 * 8);
    lVar28 = lVar25 + -1;
    cVar4 = *(char *)((long)pvVar12 + lVar7);
    if (cVar4 == *(char *)((long)pvVar12 + *(long *)(pauVar14[-1] + lVar26 + 8))) {
      if (1 < lVar25) {
        pVVar1 = (Vector2 *)(pfVar6 + lVar7 * 2);
        lVar28 = lVar25 + -2;
        do {
          pVVar2 = (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar28 * 8) * 2);
          pVVar3 = (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar28 * 8 + 8) * 2);
          fVar30 = (*(float *)(pVVar2 + 4) - *(float *)(pVVar1 + 4)) *
                   (*(float *)pVVar3 - *(float *)pVVar1);
          fVar32 = (*(float *)pVVar2 - *(float *)pVVar1) *
                   (*(float *)(pVVar3 + 4) - *(float *)(pVVar1 + 4));
          if (cVar4 == '\x01') {
            fVar30 = fVar32 - fVar30;
            pVVar9 = pVVar2;
            pVVar2 = pVVar3;
          }
          else {
            fVar30 = fVar30 - fVar32;
            pVVar9 = pVVar3;
          }
          if (fVar30 <= 0.0) {
            lVar25 = lVar28 + 3;
            *(long *)(pauVar14[1] + lVar28 * 8) = lVar7;
            goto LAB_001028bd;
          }
          TPPLPoly::Triangle((TPPLPoly *)&local_58,pVVar1,pVVar9,pVVar2);
          if (*(long *)param_2 == 0) {
            pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_2 = pauVar16;
            *(undefined4 *)pauVar16[1] = 0;
            *pauVar16 = (undefined1  [16])0x0;
          }
          pTVar17 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
          pTVar17[0x10] = (TPPLPoly)0x0;
          *(undefined8 *)(pTVar17 + 8) = 0;
          *(undefined8 *)pTVar17 = 0;
          *(undefined8 *)(pTVar17 + 0x28) = 0;
          *(undefined1 (*) [16])(pTVar17 + 0x18) = (undefined1  [16])0x0;
          TPPLPoly::operator=(pTVar17,(TPPLPoly *)&local_58);
          plVar8 = *(long **)param_2;
          lVar25 = plVar8[1];
          *(undefined8 *)(pTVar17 + 0x18) = 0;
          *(long **)(pTVar17 + 0x28) = plVar8;
          *(long *)(pTVar17 + 0x20) = lVar25;
          if (lVar25 != 0) {
            *(TPPLPoly **)(lVar25 + 0x18) = pTVar17;
          }
          plVar8[1] = (long)pTVar17;
          if (*plVar8 == 0) {
            *plVar8 = (long)pTVar17;
          }
          *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
          bVar29 = lVar28 != 0;
          lVar28 = lVar28 + -1;
        } while (bVar29);
        lVar26 = 8;
        lVar28 = 0;
      }
      *(long *)(*pauVar14 + lVar26) = lVar7;
      lVar25 = lVar28 + 2;
    }
    else {
      if (1 < lVar25) {
        lVar25 = 0;
        do {
          if (cVar4 == '\x01') {
            TPPLPoly::Triangle((TPPLPoly *)&local_58,
                               (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar25 * 8 + 8) * 2),
                               (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar25 * 8) * 2),
                               (Vector2 *)(pfVar6 + lVar7 * 2));
            lVar26 = *(long *)param_2;
          }
          else {
            TPPLPoly::Triangle((TPPLPoly *)&local_58,
                               (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar25 * 8) * 2),
                               (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar25 * 8 + 8) * 2),
                               (Vector2 *)(pfVar6 + lVar7 * 2));
            lVar26 = *(long *)param_2;
          }
          if (lVar26 == 0) {
            pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_2 = pauVar16;
            *(undefined4 *)pauVar16[1] = 0;
            *pauVar16 = (undefined1  [16])0x0;
          }
          pTVar17 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
          pTVar17[0x10] = (TPPLPoly)0x0;
          *(undefined8 *)(pTVar17 + 8) = 0;
          *(undefined8 *)pTVar17 = 0;
          *(undefined8 *)(pTVar17 + 0x28) = 0;
          *(undefined1 (*) [16])(pTVar17 + 0x18) = (undefined1  [16])0x0;
          TPPLPoly::operator=(pTVar17,(TPPLPoly *)&local_58);
          plVar8 = *(long **)param_2;
          lVar26 = plVar8[1];
          *(undefined8 *)(pTVar17 + 0x18) = 0;
          *(long **)(pTVar17 + 0x28) = plVar8;
          *(long *)(pTVar17 + 0x20) = lVar26;
          if (lVar26 != 0) {
            *(TPPLPoly **)(lVar26 + 0x18) = pTVar17;
          }
          plVar8[1] = (long)pTVar17;
          if (*plVar8 == 0) {
            *plVar8 = (long)pTVar17;
          }
          *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
          lVar25 = lVar25 + 1;
        } while (lVar25 != lVar28);
      }
      lVar25 = 2;
      auVar31._8_8_ = lVar7;
      auVar31._0_8_ = *(undefined8 *)(pauVar19[-1] + lVar15 * 8 + 8);
      *pauVar14 = auVar31;
    }
LAB_001028bd:
    lVar15 = lVar15 + 1;
  } while (lVar15 < (long)uVar11);
  lVar15 = *(long *)(pauVar19[-1] + uVar5 * 8 + 8);
  if (1 < lVar25) {
    lVar28 = 0;
    do {
      if (*(char *)((long)pvVar12 + *(long *)(*pauVar14 + lVar28 * 8 + 8)) == '\x01') {
        TPPLPoly::Triangle((TPPLPoly *)&local_58,
                           (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar28 * 8) * 2),
                           (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar28 * 8 + 8) * 2),
                           (Vector2 *)(pfVar6 + lVar15 * 2));
        lVar26 = *(long *)param_2;
      }
      else {
        TPPLPoly::Triangle((TPPLPoly *)&local_58,
                           (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar28 * 8 + 8) * 2),
                           (Vector2 *)(pfVar6 + *(long *)(*pauVar14 + lVar28 * 8) * 2),
                           (Vector2 *)(pfVar6 + lVar15 * 2));
        lVar26 = *(long *)param_2;
      }
      if (lVar26 == 0) {
        pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_2 = pauVar16;
        *(undefined4 *)pauVar16[1] = 0;
        *pauVar16 = (undefined1  [16])0x0;
      }
      pTVar17 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
      pTVar17[0x10] = (TPPLPoly)0x0;
      *(undefined8 *)(pTVar17 + 8) = 0;
      *(undefined8 *)pTVar17 = 0;
      *(undefined8 *)(pTVar17 + 0x28) = 0;
      *(undefined1 (*) [16])(pTVar17 + 0x18) = (undefined1  [16])0x0;
      TPPLPoly::operator=(pTVar17,(TPPLPoly *)&local_58);
      plVar8 = *(long **)param_2;
      lVar26 = plVar8[1];
      *(undefined8 *)(pTVar17 + 0x18) = 0;
      *(long **)(pTVar17 + 0x28) = plVar8;
      *(long *)(pTVar17 + 0x20) = lVar26;
      if (lVar26 != 0) {
        *(TPPLPoly **)(lVar26 + 0x18) = pTVar17;
      }
      plVar8[1] = (long)pTVar17;
      if (*plVar8 == 0) {
        *plVar8 = (long)pTVar17;
      }
      *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar25 + -1);
  }
  operator_delete__(pauVar19);
  operator_delete__(pvVar12);
  operator_delete__(pauVar14);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar18 = 1;
LAB_00102509:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::RemoveHoles(List<TPPLPoly, DefaultAllocator>*, List<TPPLPoly, DefaultAllocator>*)
    */

undefined8 __thiscall TPPLPartition::RemoveHoles(TPPLPartition *this,List *param_1,List *param_2)

{
  TPPLPoly *pTVar1;
  float *pfVar2;
  TPPLPoly TVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  TPPLPoly TVar7;
  char cVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  TPPLPoly *pTVar11;
  long lVar12;
  long lVar13;
  TPPLPoly *pTVar14;
  undefined8 uVar15;
  long lVar16;
  Vector2 *pVVar17;
  long lVar18;
  Vector2 *pVVar19;
  TPPLPoly *unaff_R12;
  void *pvVar20;
  long lVar21;
  TPPLPoly *pTVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_d8;
  float local_d4;
  TPPLPoly *local_c0;
  long local_b8;
  long local_a8;
  undefined1 (*local_80) [16];
  void *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_80 = (undefined1 (*) [16])0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  local_78 = (void *)0x0;
  if ((*(long **)param_1 != (long *)0x0) &&
     (pTVar14 = (TPPLPoly *)**(long **)param_1, pTVar11 = pTVar14, pTVar14 != (TPPLPoly *)0x0)) {
    while (pTVar11[0x10] == (TPPLPoly)0x0) {
      pTVar22 = pTVar11 + 0x18;
      pTVar11 = *(TPPLPoly **)pTVar22;
      if (*(TPPLPoly **)pTVar22 == (TPPLPoly *)0x0) goto LAB_0010343e;
    }
    pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar10[1] = 0;
    *pauVar10 = (undefined1  [16])0x0;
    local_80 = pauVar10;
    do {
      pTVar11 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
      pTVar11[0x10] = (TPPLPoly)0x0;
      *(undefined8 *)(pTVar11 + 8) = 0;
      *(undefined8 *)pTVar11 = 0;
      *(undefined8 *)(pTVar11 + 0x28) = 0;
      *(undefined1 (*) [16])(pTVar11 + 0x18) = (undefined1  [16])0x0;
      TPPLPoly::operator=(pTVar11,pTVar14);
      lVar12 = *(long *)(*pauVar10 + 8);
      *(undefined1 (**) [16])(pTVar11 + 0x28) = pauVar10;
      *(undefined8 *)(pTVar11 + 0x18) = 0;
      *(long *)(pTVar11 + 0x20) = lVar12;
      if (lVar12 != 0) {
        *(TPPLPoly **)(lVar12 + 0x18) = pTVar11;
      }
      lVar12 = *(long *)*pauVar10;
      *(TPPLPoly **)(*pauVar10 + 8) = pTVar11;
      if (lVar12 == 0) {
        pTVar14 = *(TPPLPoly **)(pTVar14 + 0x18);
        *(int *)pauVar10[1] = *(int *)pauVar10[1] + 1;
        *(TPPLPoly **)*pauVar10 = pTVar11;
      }
      else {
        pTVar14 = *(TPPLPoly **)(pTVar14 + 0x18);
        *(int *)pauVar10[1] = *(int *)pauVar10[1] + 1;
      }
    } while (pTVar14 != (TPPLPoly *)0x0);
    pVVar17 = (Vector2 *)&local_48;
    local_d4 = 0.0;
    pTVar14 = *(TPPLPoly **)*pauVar10;
    local_d8 = 0.0;
    pvVar20 = local_78;
    do {
      local_78 = pvVar20;
      if (pTVar14 == (TPPLPoly *)0x0) {
        uVar15 = 1;
LAB_001033f5:
        if (pvVar20 != (void *)0x0) {
          operator_delete__(pvVar20);
        }
        goto LAB_00103409;
      }
      pTVar11 = pTVar14;
      TVar7 = (TPPLPoly)0x0;
      do {
        while (TVar3 = pTVar11[0x10], TVar3 != (TPPLPoly)0x0) {
          if (TVar7 == (TPPLPoly)0x0) {
            local_a8 = 0;
            unaff_R12 = pTVar11;
          }
          if (0 < *(long *)(pTVar11 + 8)) {
            lVar12 = 0;
            do {
              fVar27 = *(float *)(*(long *)pTVar11 + lVar12 * 8);
              pfVar2 = (float *)(*(long *)unaff_R12 + local_a8 * 8);
              if (*pfVar2 <= fVar27 && fVar27 != *pfVar2) {
                local_a8 = lVar12;
                unaff_R12 = pTVar11;
              }
              lVar12 = lVar12 + 1;
            } while (*(long *)(pTVar11 + 8) != lVar12);
          }
          pTVar11 = *(TPPLPoly **)(pTVar11 + 0x18);
          TVar7 = TVar3;
          if (pTVar11 == (TPPLPoly *)0x0) goto LAB_00102f6b;
        }
        pTVar11 = *(TPPLPoly **)(pTVar11 + 0x18);
      } while (pTVar11 != (TPPLPoly *)0x0);
LAB_00102f6b:
      if (TVar7 == (TPPLPoly)0x0) {
        if (*(long *)param_2 == 0) {
          pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_2 = pauVar10;
          *(undefined4 *)pauVar10[1] = 0;
          *pauVar10 = (undefined1  [16])0x0;
        }
        do {
          pTVar11 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
          pTVar11[0x10] = (TPPLPoly)0x0;
          *(undefined8 *)(pTVar11 + 8) = 0;
          *(undefined8 *)pTVar11 = 0;
          *(undefined8 *)(pTVar11 + 0x28) = 0;
          *(undefined1 (*) [16])(pTVar11 + 0x18) = (undefined1  [16])0x0;
          TPPLPoly::operator=(pTVar11,pTVar14);
          plVar5 = *(long **)param_2;
          lVar12 = plVar5[1];
          *(undefined8 *)(pTVar11 + 0x18) = 0;
          *(long **)(pTVar11 + 0x28) = plVar5;
          *(long *)(pTVar11 + 0x20) = lVar12;
          if (lVar12 != 0) {
            *(TPPLPoly **)(lVar12 + 0x18) = pTVar11;
          }
          plVar5[1] = (long)pTVar11;
          if (*plVar5 == 0) {
            pTVar14 = *(TPPLPoly **)(pTVar14 + 0x18);
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            *plVar5 = (long)pTVar11;
          }
          else {
            pTVar14 = *(TPPLPoly **)(pTVar14 + 0x18);
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
          }
        } while (pTVar14 != (TPPLPoly *)0x0);
        uVar15 = 1;
        goto LAB_001033f5;
      }
      cVar6 = '\0';
      uVar15 = *(undefined8 *)(*(long *)unaff_R12 + local_a8 * 8);
      local_60._0_4_ = (float)uVar15;
      local_60._4_4_ = (float)((ulong)uVar15 >> 0x20);
      pTVar11 = pTVar14;
      fVar27 = (float)local_60;
      fVar28 = local_60._4_4_;
      local_60 = uVar15;
      do {
        while ((pTVar11[0x10] != (TPPLPoly)0x0 || (lVar12 = *(long *)(pTVar11 + 8), lVar12 < 1))) {
          pTVar11 = *(TPPLPoly **)(pTVar11 + 0x18);
          if (pTVar11 == (TPPLPoly *)0x0) goto LAB_0010318f;
        }
        lVar13 = *(long *)pTVar11;
        pVVar19 = (Vector2 *)&local_60;
        lVar16 = 0;
LAB_00103099:
        do {
          fVar29 = *(float *)(lVar13 + lVar16 * 8);
          lVar18 = lVar16 + 1;
          if ((fVar27 < fVar29) &&
             (cVar8 = InCone(this,(Vector2 *)(lVar13 + ((lVar16 + -1 + lVar12) % lVar12) * 8),
                             (Vector2 *)(lVar13 + lVar16 * 8),
                             (Vector2 *)(lVar13 + (lVar18 % lVar12) * 8),pVVar19), cVar8 != '\0')) {
            local_58 = *(undefined8 *)(lVar13 + -8 + lVar18 * 8);
            pTVar22 = pTVar14;
            if (cVar6 != '\0') {
              local_58._4_4_ = (float)((ulong)local_58 >> 0x20);
              fVar25 = fVar29 - fVar27;
              fVar26 = local_d8 - fVar27;
              fVar24 = SQRT(fVar25 * fVar25 + (local_58._4_4_ - fVar28) * (local_58._4_4_ - fVar28))
              ;
              fVar23 = SQRT((local_d4 - fVar28) * (local_d4 - fVar28) + fVar26 * fVar26);
              if (fVar24 == 0.0) {
                if (fVar23 == 0.0) goto LAB_0010311d;
                fVar25 = 0.0;
LAB_00103082:
                fVar24 = fVar26 / fVar23;
              }
              else {
                fVar25 = fVar25 / fVar24;
                fVar24 = 0.0;
                if (fVar23 != 0.0) goto LAB_00103082;
              }
              if (fVar25 < fVar24) goto LAB_00103090;
            }
LAB_0010311d:
            do {
              if (pTVar22[0x10] == (TPPLPoly)0x0) {
                lVar4 = *(long *)(pTVar22 + 8);
                lVar21 = 0;
                while (lVar21 < lVar4) {
                  local_50 = *(undefined8 *)(*(long *)pTVar22 + lVar21 * 8);
                  lVar21 = lVar21 + 1;
                  local_48 = *(undefined8 *)(*(long *)pTVar22 + (lVar21 % lVar4) * 8);
                  iVar9 = Intersects(this,pVVar19,(Vector2 *)&local_58,(Vector2 *)&local_50,pVVar17)
                  ;
                  if (iVar9 != 0) {
                    lVar16 = lVar18;
                    if (lVar18 != lVar12) goto LAB_00103099;
                    goto LAB_0010317a;
                  }
                }
              }
              pTVar1 = pTVar22 + 0x18;
              pTVar22 = *(TPPLPoly **)pTVar1;
            } while (*(TPPLPoly **)pTVar1 != (TPPLPoly *)0x0);
            local_d4 = local_58._4_4_;
            local_d8 = fVar29;
            local_c0 = pTVar11;
            local_b8 = lVar16;
            cVar6 = cVar8;
          }
LAB_00103090:
          lVar16 = lVar18;
        } while (lVar16 != lVar12);
LAB_0010317a:
        pTVar11 = *(TPPLPoly **)(pTVar11 + 0x18);
      } while (pTVar11 != (TPPLPoly *)0x0);
LAB_0010318f:
      if (cVar6 == '\0') {
        uVar15 = 0;
        pvVar20 = local_78;
        goto LAB_001033f5;
      }
      TPPLPoly::Init((TPPLPoly *)&local_78,*(long *)(local_c0 + 8) + *(long *)(unaff_R12 + 8) + 2);
      lVar12 = *(long *)local_c0;
      lVar13 = 0;
      do {
        lVar16 = lVar13 * 8;
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 1;
        *(undefined8 *)((long)local_78 + (long)iVar9 * 8) = *(undefined8 *)(lVar12 + lVar16);
      } while (lVar13 <= local_b8);
      lVar13 = *(long *)(unaff_R12 + 8);
      lVar16 = 0;
      if (-1 < local_b8) {
        lVar16 = local_b8;
      }
      lVar18 = lVar16 + 1;
      if (-1 < lVar13) {
        lVar4 = *(long *)unaff_R12;
        do {
          lVar21 = ((local_a8 + -1) - lVar16) + lVar18;
          iVar9 = (int)lVar18;
          lVar18 = lVar18 + 1;
          *(undefined8 *)((long)local_78 + (long)iVar9 * 8) =
               *(undefined8 *)(lVar4 + (lVar21 % lVar13) * 8);
        } while (lVar16 + 2 + lVar13 != lVar18);
        lVar18 = lVar16 + 2 + lVar13;
      }
      if (local_b8 < *(long *)(local_c0 + 8)) {
        lVar13 = local_b8 - lVar18;
        lVar16 = (*(long *)(local_c0 + 8) - local_b8) + lVar18;
        do {
          lVar4 = lVar18 * 8;
          iVar9 = (int)lVar18;
          lVar18 = lVar18 + 1;
          *(undefined8 *)((long)local_78 + (long)iVar9 * 8) =
               *(undefined8 *)(lVar12 + lVar13 * 8 + lVar4);
        } while (lVar18 != lVar16);
      }
      if (*(undefined1 (**) [16])(unaff_R12 + 0x28) == pauVar10) {
        lVar12 = *(long *)(unaff_R12 + 0x18);
        if (unaff_R12 == *(TPPLPoly **)*pauVar10) {
          *(long *)*pauVar10 = lVar12;
        }
        lVar13 = *(long *)(unaff_R12 + 0x20);
        if (unaff_R12 == *(TPPLPoly **)(*pauVar10 + 8)) {
          *(long *)(*pauVar10 + 8) = lVar13;
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x18) = lVar12;
          lVar12 = *(long *)(unaff_R12 + 0x18);
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x20) = lVar13;
        }
        if (*(void **)unaff_R12 != (void *)0x0) {
          operator_delete__(*(void **)unaff_R12);
        }
        Memory::free_static(unaff_R12,false);
        iVar9 = *(int *)pauVar10[1] + -1;
        *(int *)pauVar10[1] = iVar9;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false");
        iVar9 = *(int *)pauVar10[1];
      }
      if (iVar9 == 0) {
LAB_00103560:
        Memory::free_static(pauVar10,false);
        pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar10[1] = 0;
        *pauVar10 = (undefined1  [16])0x0;
        local_80 = pauVar10;
      }
      else {
        if (*(undefined1 (**) [16])(local_c0 + 0x28) == pauVar10) {
          lVar12 = *(long *)(local_c0 + 0x18);
          if (local_c0 == *(TPPLPoly **)*pauVar10) {
            *(long *)*pauVar10 = lVar12;
          }
          lVar13 = *(long *)(local_c0 + 0x20);
          if (local_c0 == *(TPPLPoly **)(*pauVar10 + 8)) {
            *(long *)(*pauVar10 + 8) = lVar13;
          }
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x18) = lVar12;
            lVar12 = *(long *)(local_c0 + 0x18);
          }
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x20) = lVar13;
          }
          if (*(void **)local_c0 != (void *)0x0) {
            operator_delete__(*(void **)local_c0);
          }
          Memory::free_static(local_c0,false);
          iVar9 = *(int *)pauVar10[1] + -1;
          *(int *)pauVar10[1] = iVar9;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false");
          iVar9 = *(int *)pauVar10[1];
        }
        if (iVar9 == 0) goto LAB_00103560;
      }
      pTVar14 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
      pTVar14[0x10] = (TPPLPoly)0x0;
      *(undefined8 *)(pTVar14 + 8) = 0;
      *(undefined8 *)pTVar14 = 0;
      *(undefined8 *)(pTVar14 + 0x28) = 0;
      *(undefined1 (*) [16])(pTVar14 + 0x18) = (undefined1  [16])0x0;
      TPPLPoly::operator=(pTVar14,(TPPLPoly *)&local_78);
      lVar12 = *(long *)(*pauVar10 + 8);
      *(undefined1 (**) [16])(pTVar14 + 0x28) = pauVar10;
      *(undefined8 *)(pTVar14 + 0x18) = 0;
      *(long *)(pTVar14 + 0x20) = lVar12;
      if (lVar12 != 0) {
        *(TPPLPoly **)(lVar12 + 0x18) = pTVar14;
      }
      lVar12 = *(long *)*pauVar10;
      *(TPPLPoly **)(*pauVar10 + 8) = pTVar14;
      if (lVar12 == 0) {
        *(TPPLPoly **)*pauVar10 = pTVar14;
      }
      pTVar14 = *(TPPLPoly **)*pauVar10;
      *(int *)pauVar10[1] = *(int *)pauVar10[1] + 1;
      pvVar20 = local_78;
    } while( true );
  }
LAB_00103404:
  uVar15 = 1;
LAB_00103409:
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
LAB_0010343e:
  if (*(long *)param_2 == 0) {
    pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_2 = pauVar10;
    *(undefined4 *)pauVar10[1] = 0;
    *pauVar10 = (undefined1  [16])0x0;
  }
  do {
    pTVar11 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
    pTVar11[0x10] = (TPPLPoly)0x0;
    *(undefined8 *)(pTVar11 + 8) = 0;
    *(undefined8 *)pTVar11 = 0;
    *(undefined8 *)(pTVar11 + 0x28) = 0;
    *(undefined1 (*) [16])(pTVar11 + 0x18) = (undefined1  [16])0x0;
    TPPLPoly::operator=(pTVar11,pTVar14);
    plVar5 = *(long **)param_2;
    lVar12 = plVar5[1];
    *(long **)(pTVar11 + 0x28) = plVar5;
    *(undefined8 *)(pTVar11 + 0x18) = 0;
    *(long *)(pTVar11 + 0x20) = lVar12;
    if (lVar12 != 0) {
      *(TPPLPoly **)(lVar12 + 0x18) = pTVar11;
    }
    plVar5[1] = (long)pTVar11;
    if (*plVar5 == 0) {
      *plVar5 = (long)pTVar11;
    }
    pTVar14 = *(TPPLPoly **)(pTVar14 + 0x18);
    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  } while (pTVar14 != (TPPLPoly *)0x0);
  goto LAB_00103404;
}



/* TPPLPartition::Triangulate_EC(List<TPPLPoly, DefaultAllocator>*, List<TPPLPoly,
   DefaultAllocator>*) */

undefined8 __thiscall TPPLPartition::Triangulate_EC(TPPLPartition *this,List *param_1,List *param_2)

{
  TPPLPoly *pTVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined8 *)0x0;
  iVar2 = RemoveHoles(this,param_1,(List *)&local_38);
  if (iVar2 == 0) {
LAB_0010376b:
    uVar3 = 0;
  }
  else {
    if (local_38 != (undefined8 *)0x0) {
      for (pTVar1 = (TPPLPoly *)*local_38; pTVar1 != (TPPLPoly *)0x0;
          pTVar1 = *(TPPLPoly **)(pTVar1 + 0x18)) {
        iVar2 = Triangulate_EC(this,pTVar1,param_2);
        if (iVar2 == 0) goto LAB_0010376b;
      }
    }
    uVar3 = 1;
  }
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::ConvexPartition_HM(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) */

int __thiscall
TPPLPartition::ConvexPartition_HM(TPPLPartition *this,TPPLPoly *param_1,List *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  int iVar11;
  float *pfVar12;
  TPPLPoly *pTVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  TPPLPoly *pTVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  long in_FS_OFFSET;
  long *local_90;
  long *local_60;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  iVar11 = 0;
  lVar18 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < lVar18) {
    pfVar7 = *(float **)param_1;
    local_48 = 0;
    lVar23 = lVar18 + -1;
    local_60 = (long *)0x0;
    local_50 = 0;
    pfVar12 = pfVar7 + 2;
    local_58 = (void *)0x0;
    lVar16 = 0;
    pfVar24 = pfVar12;
    lVar21 = lVar23;
    while (lVar15 = lVar16, fVar1 = (pfVar7 + lVar21 * 2)[1], fVar2 = pfVar7[lVar21 * 2],
          0.0 <= (pfVar12[-2] - fVar2) * (pfVar24[1] - fVar1) -
                 (pfVar12[-1] - fVar1) * (*pfVar24 - fVar2)) {
      lVar16 = lVar15 + 1;
      pfVar12 = pfVar12 + 2;
      if (lVar16 == lVar18) {
        if (*(long *)param_2 == 0) {
          pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_2 = pauVar19;
          *(undefined4 *)pauVar19[1] = 0;
          *pauVar19 = (undefined1  [16])0x0;
        }
        pTVar13 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
        pTVar13[0x10] = (TPPLPoly)0x0;
        *(undefined8 *)(pTVar13 + 8) = 0;
        *(undefined8 *)pTVar13 = 0;
        *(undefined8 *)(pTVar13 + 0x28) = 0;
        *(undefined1 (*) [16])(pTVar13 + 0x18) = (undefined1  [16])0x0;
        TPPLPoly::operator=(pTVar13,param_1);
        plVar8 = *(long **)param_2;
        lVar18 = plVar8[1];
        *(undefined8 *)(pTVar13 + 0x18) = 0;
        *(long **)(pTVar13 + 0x28) = plVar8;
        *(long *)(pTVar13 + 0x20) = lVar18;
        if (lVar18 != 0) {
          *(TPPLPoly **)(lVar18 + 0x18) = pTVar13;
        }
        plVar8[1] = (long)pTVar13;
        if (*plVar8 == 0) {
          *plVar8 = (long)pTVar13;
        }
        *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
        iVar11 = 1;
        goto LAB_00103917;
      }
      pfVar24 = pfVar12;
      lVar21 = lVar15;
      if (lVar23 == lVar16) {
        lVar16 = lVar23;
        pfVar24 = pfVar7;
      }
    }
    iVar11 = Triangulate_EC(this,param_1,(List *)&local_60);
    if (iVar11 != 0) {
      local_90 = local_60;
      if ((local_60 != (long *)0x0) && (pTVar13 = (TPPLPoly *)*local_60, pTVar13 != (TPPLPoly *)0x0)
         ) {
        do {
          lVar18 = *(long *)(pTVar13 + 8);
          if (0 < lVar18) {
            lVar23 = 0;
            do {
              pfVar12 = *(float **)pTVar13;
              lVar16 = lVar23 + 1;
              fVar1 = pfVar12[lVar23 * 2];
              fVar2 = (pfVar12 + lVar23 * 2)[1];
              lVar21 = lVar16 % lVar18;
              fVar3 = pfVar12[lVar21 * 2];
              fVar4 = (pfVar12 + lVar21 * 2)[1];
              pTVar17 = pTVar13;
              while (pTVar17 = *(TPPLPoly **)(pTVar17 + 0x18), pTVar17 != (TPPLPoly *)0x0) {
                if ((pTVar17 != pTVar13) && (lVar15 = *(long *)(pTVar17 + 8), 0 < lVar15)) {
                  lVar9 = *(long *)pTVar17;
                  lVar20 = 0;
                  do {
                    lVar14 = lVar20 + 1;
                    if ((*(float *)(lVar9 + lVar20 * 8) == fVar3) &&
                       (fVar4 == *(float *)(lVar9 + -4 + lVar14 * 8))) {
                      lVar22 = lVar14 % lVar15;
                      pfVar7 = (float *)(lVar9 + lVar22 * 8);
                      if ((fVar1 == *pfVar7) && (fVar2 == pfVar7[1])) {
                        lVar14 = lVar23 + -1;
                        if (lVar23 == 0) {
                          lVar14 = lVar18 + -1;
                        }
                        fVar5 = pfVar12[lVar14 * 2];
                        fVar6 = (pfVar12 + lVar14 * 2)[1];
                        lVar14 = lVar22 * 8 + 8;
                        if (lVar15 + -1 == lVar22) {
                          lVar14 = 0;
                        }
                        if (0.0 < (((float *)(lVar14 + lVar9))[1] - fVar6) * (fVar1 - fVar5) -
                                  (*(float *)(lVar14 + lVar9) - fVar5) * (fVar2 - fVar6)) {
                          if (lVar18 + -1 != lVar21) {
                            pfVar12 = pfVar12 + lVar21 * 2 + 2;
                          }
                          lVar14 = lVar20 + -1;
                          if (lVar20 == 0) {
                            lVar14 = lVar15 + -1;
                          }
                          pfVar7 = (float *)(lVar9 + lVar14 * 8);
                          fVar1 = *pfVar7;
                          fVar2 = pfVar7[1];
                          if (0.0 < (pfVar12[1] - fVar2) * (fVar3 - fVar1) -
                                    (fVar4 - fVar2) * (*pfVar12 - fVar1)) {
                            TPPLPoly::Init((TPPLPoly *)&local_58,lVar15 + -2 + lVar18);
                            if (lVar21 == lVar23) {
                              iVar11 = 0;
                            }
                            else {
                              lVar18 = *(long *)pTVar13;
                              iVar11 = 0;
                              lVar16 = *(long *)(pTVar13 + 8);
                              do {
                                lVar15 = (long)iVar11;
                                iVar11 = iVar11 + 1;
                                *(undefined8 *)((long)local_58 + lVar15 * 8) =
                                     *(undefined8 *)(lVar18 + lVar21 * 8);
                                lVar21 = (lVar21 + 1) % lVar16;
                              } while (lVar21 != lVar23);
                            }
                            if (lVar22 != lVar20) {
                              lVar18 = *(long *)pTVar17;
                              lVar23 = *(long *)(pTVar17 + 8);
                              do {
                                lVar16 = (long)iVar11;
                                iVar11 = iVar11 + 1;
                                *(undefined8 *)((long)local_58 + lVar16 * 8) =
                                     *(undefined8 *)(lVar18 + lVar22 * 8);
                                lVar22 = (lVar22 + 1) % lVar23;
                              } while (lVar22 != lVar20);
                            }
                            if (local_90 != (long *)0x0) {
                              if (*(long **)(pTVar17 + 0x28) == local_90) {
                                lVar18 = *(long *)(pTVar17 + 0x18);
                                if (pTVar17 == (TPPLPoly *)*local_90) {
                                  *local_90 = lVar18;
                                }
                                lVar23 = *(long *)(pTVar17 + 0x20);
                                if (pTVar17 == (TPPLPoly *)local_90[1]) {
                                  local_90[1] = lVar23;
                                }
                                if (lVar23 != 0) {
                                  *(long *)(lVar23 + 0x18) = lVar18;
                                  lVar18 = *(long *)(pTVar17 + 0x18);
                                }
                                if (lVar18 != 0) {
                                  *(long *)(lVar18 + 0x20) = lVar23;
                                }
                                if (*(void **)pTVar17 != (void *)0x0) {
                                  operator_delete__(*(void **)pTVar17);
                                }
                                Memory::free_static(pTVar17,false);
                                iVar11 = (int)local_90[2] + -1;
                                *(int *)(local_90 + 2) = iVar11;
                              }
                              else {
                                _err_print_error("erase","./core/templates/list.h",0xe7,
                                                 "Condition \"p_I->data != this\" is true. Returning: false"
                                                 ,0,0);
                                iVar11 = (int)local_90[2];
                              }
                              if (iVar11 == 0) {
                                Memory::free_static(local_90,false);
                                local_60 = (long *)0x0;
                                local_90 = (long *)0x0;
                              }
                            }
                            TPPLPoly::operator=(pTVar13,(TPPLPoly *)&local_58);
                            lVar18 = *(long *)(pTVar13 + 8);
                            lVar16 = 0;
                          }
                        }
                        goto LAB_00103be8;
                      }
                    }
                    lVar20 = lVar14;
                  } while (lVar15 != lVar14);
                }
              }
LAB_00103be8:
              lVar23 = lVar16;
            } while (lVar23 < lVar18);
          }
          pvVar10 = local_58;
          pTVar13 = *(TPPLPoly **)(pTVar13 + 0x18);
        } while (pTVar13 != (TPPLPoly *)0x0);
        if ((local_90 != (long *)0x0) &&
           (pTVar13 = (TPPLPoly *)*local_90, pTVar13 != (TPPLPoly *)0x0)) {
          if (*(long *)param_2 == 0) {
            pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_2 = pauVar19;
            *(undefined4 *)pauVar19[1] = 0;
            *pauVar19 = (undefined1  [16])0x0;
          }
          do {
            while( true ) {
              pTVar17 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
              pTVar17[0x10] = (TPPLPoly)0x0;
              *(undefined8 *)(pTVar17 + 8) = 0;
              *(undefined8 *)pTVar17 = 0;
              *(undefined8 *)(pTVar17 + 0x28) = 0;
              *(undefined1 (*) [16])(pTVar17 + 0x18) = (undefined1  [16])0x0;
              TPPLPoly::operator=(pTVar17,pTVar13);
              plVar8 = *(long **)param_2;
              lVar18 = plVar8[1];
              *(long **)(pTVar17 + 0x28) = plVar8;
              *(undefined8 *)(pTVar17 + 0x18) = 0;
              *(long *)(pTVar17 + 0x20) = lVar18;
              if (lVar18 != 0) {
                *(TPPLPoly **)(lVar18 + 0x18) = pTVar17;
              }
              plVar8[1] = (long)pTVar17;
              if (*plVar8 == 0) break;
              pTVar13 = *(TPPLPoly **)(pTVar13 + 0x18);
              *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
              if (pTVar13 == (TPPLPoly *)0x0) goto LAB_00103ce0;
            }
            pTVar13 = *(TPPLPoly **)(pTVar13 + 0x18);
            *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
            *plVar8 = (long)pTVar17;
          } while (pTVar13 != (TPPLPoly *)0x0);
        }
LAB_00103ce0:
        if (pvVar10 != (void *)0x0) {
          operator_delete__(pvVar10);
        }
      }
      iVar11 = 1;
    }
LAB_00103917:
    List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::ConvexPartition_HM(List<TPPLPoly, DefaultAllocator>*, List<TPPLPoly,
   DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::ConvexPartition_HM(TPPLPartition *this,List *param_1,List *param_2)

{
  TPPLPoly *pTVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined8 *)0x0;
  iVar2 = RemoveHoles(this,param_1,(List *)&local_38);
  if (iVar2 == 0) {
LAB_00103e8b:
    uVar3 = 0;
  }
  else {
    if (local_38 != (undefined8 *)0x0) {
      for (pTVar1 = (TPPLPoly *)*local_38; pTVar1 != (TPPLPoly *)0x0;
          pTVar1 = *(TPPLPoly **)(pTVar1 + 0x18)) {
        iVar2 = ConvexPartition_HM(this,pTVar1,param_2);
        if (iVar2 == 0) goto LAB_00103e8b;
      }
    }
    uVar3 = 1;
  }
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::ConvexPartition_OPT(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::ConvexPartition_OPT(TPPLPartition *this,TPPLPoly *param_1,List *param_2)

{
  DPState2 **ppDVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  void *pvVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  PartitionVertex *pPVar9;
  ulong *puVar10;
  PartitionVertex *pPVar11;
  long *plVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  long *plVar16;
  TPPLPoly *this_00;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  DPState2 *pDVar20;
  Vector2 *pVVar21;
  Vector2 *pVVar22;
  long lVar23;
  Vector2 *extraout_RDX;
  Vector2 *extraout_RDX_00;
  Vector2 *pVVar24;
  ulong uVar25;
  DPState2 *pDVar26;
  ulong uVar28;
  PartitionVertex *pPVar29;
  long lVar30;
  undefined8 uVar31;
  ulong uVar32;
  PartitionVertex *pPVar33;
  Vector2 *pVVar34;
  ulong uVar35;
  Vector2 *pVVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  long in_FS_OFFSET;
  bool bVar40;
  TPPLPoly *local_128;
  DPState2 **local_d0;
  undefined1 (*local_a0) [16];
  void *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  DPState2 *pDVar27;
  
  uVar4 = *(ulong *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < (long)uVar4) {
    uVar37 = uVar4 * 0x28;
    local_78 = 0;
    uVar35 = 0xffffffffffffffff;
    if (uVar4 < 0x333333333333334) {
      uVar35 = uVar37;
    }
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = (void *)0x0;
    local_a0 = (undefined1 (*) [16])0x0;
    pPVar9 = (PartitionVertex *)operator_new__(uVar35);
    uVar35 = uVar4 - 1;
    lVar13 = uVar4 - 2;
    pPVar11 = pPVar9;
    lVar23 = lVar13;
    do {
      lVar23 = lVar23 + -1;
      *(undefined8 *)(pPVar11 + 4) = 0;
      *(undefined1 (*) [16])(pPVar11 + 0x18) = (undefined1  [16])0x0;
      pPVar11 = pPVar11 + 0x28;
    } while (lVar23 != -2);
    if (uVar4 >> 0x3c == 0) {
      local_d0 = (DPState2 **)operator_new__(uVar4 * 8);
    }
    else {
      local_d0 = (DPState2 **)operator_new__(0xffffffffffffffff);
    }
    uVar28 = uVar4 * 0x18 + 8;
    if (0x555555555555555 < uVar4) {
      uVar28 = 0xffffffffffffffff;
    }
    uVar25 = 0;
    do {
      puVar10 = (ulong *)operator_new__(uVar28);
      *puVar10 = uVar4;
      pDVar20 = (DPState2 *)(puVar10 + 1);
      lVar23 = lVar13;
      do {
        lVar23 = lVar23 + -1;
        *(ulong *)(pDVar20 + 0x10) = 0;
        pDVar20 = pDVar20 + 0x18;
      } while (lVar23 != -2);
      local_d0[uVar25] = (DPState2 *)(puVar10 + 1);
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar4);
    puVar15 = *(undefined8 **)param_1;
    lVar23 = *(long *)(param_1 + 8);
    uVar31 = *puVar15;
    *pPVar9 = (PartitionVertex)0x1;
    *(undefined8 *)(pPVar9 + 4) = uVar31;
    uVar28 = 0;
    pPVar29 = pPVar9 + (uVar37 - 0x28);
    pPVar11 = pPVar9;
    while( true ) {
      pPVar33 = pPVar11 + 0x28;
      *(PartitionVertex **)(pPVar11 + 0x18) = pPVar29;
      pPVar29 = pPVar33;
      if (lVar23 - 1U == uVar28) {
        pPVar29 = pPVar9;
      }
      uVar28 = uVar28 + 1;
      *(PartitionVertex **)(pPVar11 + 0x20) = pPVar29;
      if (uVar28 == uVar4) break;
      uVar31 = puVar15[uVar28];
      *pPVar33 = (PartitionVertex)0x1;
      *(undefined8 *)(pPVar11 + 0x2c) = uVar31;
      pPVar29 = pPVar11;
      pPVar11 = pPVar33;
    }
    pPVar11 = pPVar9 + 0x29;
    do {
      fVar2 = *(float *)(*(long *)(pPVar11 + 0x17) + 4);
      fVar3 = *(float *)(*(long *)(pPVar11 + 0x17) + 8);
      *pPVar11 = (PartitionVertex)
                 (0.0 <= (*(float *)(*(long *)(pPVar11 + 0x1f) + 8) - fVar3) *
                         (*(float *)(pPVar11 + 3) - fVar2) -
                         (*(float *)(*(long *)(pPVar11 + 0x1f) + 4) - fVar2) *
                         (*(float *)(pPVar11 + 7) - fVar3));
      pPVar11 = pPVar11 + 0x28;
    } while (pPVar11 != pPVar9 + uVar37 + 1);
    pPVar11 = pPVar9 + 0x2c;
    pVVar21 = (Vector2 *)&local_48;
    pVVar24 = (Vector2 *)&local_50;
    pVVar34 = (Vector2 *)&local_58;
    uVar37 = 0;
    do {
      local_78 = puVar15[uVar37];
      uVar28 = uVar37 + 1;
      if ((long)uVar28 < (long)uVar4) {
        pDVar20 = local_d0[uVar37] + uVar28 * 0x18;
        pPVar29 = pPVar11;
        uVar37 = uVar28;
        do {
          *pDVar20 = (DPState2)0x1;
          if (uVar28 == uVar37) {
            *(undefined8 *)(pDVar20 + 8) = 0;
          }
          else {
            local_70 = puVar15[uVar37];
            *(undefined8 *)(pDVar20 + 8) = 0x7fffffff;
            local_58 = *(undefined8 *)(*(long *)(pPVar11 + -0x14) + 4);
            local_50 = *(undefined8 *)(pPVar11 + -0x28);
            local_48 = *(undefined8 *)(*(long *)(pPVar11 + -0xc) + 4);
            cVar7 = InCone(this,pVVar34,pVVar24,pVVar21,(Vector2 *)&local_70);
            pVVar24 = extraout_RDX;
            if (cVar7 != '\0') {
              local_58 = *(undefined8 *)(*(long *)(pPVar29 + 0x14) + 4);
              local_50 = *(undefined8 *)pPVar29;
              local_48 = *(undefined8 *)(*(long *)(pPVar29 + 0x1c) + 4);
              cVar7 = InCone(this,pVVar34,extraout_RDX,pVVar21,(Vector2 *)&local_78);
              pVVar24 = extraout_RDX_00;
              if (cVar7 != '\0') {
                uVar25 = 0;
                pVVar22 = (Vector2 *)&local_68;
                pVVar36 = (Vector2 *)&local_60;
                uVar32 = uVar35;
                do {
                  local_68 = puVar15[uVar25];
                  if (uVar32 == uVar25) {
                    local_60 = *puVar15;
                    iVar8 = Intersects(this,(Vector2 *)&local_78,(Vector2 *)&local_70,pVVar22,
                                       pVVar36);
                  }
                  else {
                    local_60 = puVar15[uVar25 + 1];
                    iVar8 = Intersects(this,(Vector2 *)&local_78,(Vector2 *)&local_70,pVVar22,
                                       pVVar36);
                  }
                  if (iVar8 != 0) goto LAB_0010426c;
                  uVar25 = uVar25 + 1;
                } while (uVar25 != uVar4);
                goto LAB_00104270;
              }
            }
LAB_0010426c:
            *pDVar20 = (DPState2)0x0;
          }
LAB_00104270:
          uVar37 = uVar37 + 1;
          pDVar20 = pDVar20 + 0x18;
          pPVar29 = pPVar29 + 0x28;
        } while (uVar37 != uVar4);
      }
      pPVar11 = pPVar11 + 0x28;
      uVar37 = uVar28;
    } while (uVar28 != uVar35);
    lVar30 = 0;
    lVar23 = 0x30;
    do {
      while( true ) {
        ppDVar1 = local_d0 + lVar30;
        lVar30 = lVar30 + 1;
        pDVar20 = *ppDVar1 + lVar23;
        if (*pDVar20 == (DPState2)0x0) break;
        *(undefined8 *)(pDVar20 + 8) = 0;
        if (*(long *)(pDVar20 + 0x10) == 0) {
          pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])(pDVar20 + 0x10) = pauVar14;
          *(undefined4 *)pauVar14[1] = 0;
          *pauVar14 = (undefined1  [16])0x0;
        }
        plVar12 = (long *)operator_new(0x28,DefaultAllocator::alloc);
        plVar16 = *(long **)(pDVar20 + 0x10);
        plVar12[2] = 0;
        lVar38 = plVar16[1];
        *plVar12 = lVar30;
        plVar12[1] = lVar30;
        plVar12[4] = (long)plVar16;
        plVar12[3] = lVar38;
        if (lVar38 != 0) {
          *(long **)(lVar38 + 0x10) = plVar12;
        }
        plVar16[1] = (long)plVar12;
        if (*plVar16 == 0) {
          *plVar16 = (long)plVar12;
        }
        *(int *)(plVar16 + 2) = (int)plVar16[2] + 1;
        lVar23 = lVar23 + 0x18;
        if (lVar13 == lVar30) goto LAB_00104437;
      }
      lVar23 = lVar23 + 0x18;
    } while (lVar13 != lVar30);
LAB_00104437:
    pPVar9[1] = (PartitionVertex)0x0;
    uVar37 = 3;
    (*local_d0)[uVar4 * 0x18 + -0x18] = (DPState2)0x1;
    lVar13 = uVar4 - 3;
    if (uVar4 != 3) {
      do {
        uVar28 = uVar37;
        lVar23 = 0;
        do {
          lVar30 = lVar23 + 1;
          if ((pPVar9[lVar23 * 0x28 + 1] == (PartitionVertex)0x0) &&
             (local_d0[lVar23][uVar28 * 0x18] != (DPState2)0x0)) {
            lVar38 = lVar30;
            if (pPVar9[uVar28 * 0x28 + 1] == (PartitionVertex)0x0) {
              do {
                lVar39 = lVar38 + 1;
                TypeA(this,lVar23,lVar38,uVar28,pPVar9,local_d0);
                lVar38 = lVar39;
              } while (lVar39 < (long)uVar28);
            }
            else {
              lVar38 = uVar28 - 1;
              lVar39 = lVar30;
              if (lVar30 < lVar38) {
                do {
                  if (pPVar9[lVar39 * 0x28 + 1] == (PartitionVertex)0x0) {
                    TypeA(this,lVar23,lVar39,uVar28,pPVar9,local_d0);
                  }
                  lVar39 = lVar39 + 1;
                } while (lVar39 != lVar38);
              }
              TypeA(this,lVar23,lVar38,uVar28,pPVar9,local_d0);
            }
          }
          uVar28 = uVar28 + 1;
          lVar23 = lVar30;
        } while (lVar30 != lVar13);
        uVar25 = 2;
        uVar28 = uVar37;
        if ((long)uVar37 < (long)uVar4) {
          do {
            if (((pPVar9[uVar28 * 0x28 + 1] == (PartitionVertex)0x0) &&
                (pPVar9[uVar25 * 0x28 + -0x4f] != (PartitionVertex)0x0)) &&
               (local_d0[uVar25 - 2][uVar28 * 0x18] != (DPState2)0x0)) {
              TypeB(this,uVar25 - 2,uVar25 - 1,uVar28,pPVar9,local_d0);
              uVar32 = uVar25;
              if ((long)uVar25 < (long)uVar28) {
                do {
                  if (pPVar9[uVar32 * 0x28 + 1] == (PartitionVertex)0x0) {
                    TypeB(this,uVar25 - 2,uVar32,uVar28,pPVar9,local_d0);
                  }
                  uVar32 = uVar32 + 1;
                } while (uVar32 != uVar28);
              }
            }
            uVar28 = uVar28 + 1;
            uVar25 = uVar25 + 1;
          } while (uVar28 != uVar4);
        }
        uVar37 = uVar37 + 1;
        lVar13 = lVar13 + -1;
      } while (uVar37 != uVar4);
    }
    pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar14[1] = 0;
    *pauVar14 = (undefined1  [16])0x0;
    puVar15 = (undefined8 *)operator_new(0x28,DefaultAllocator::alloc);
    lVar13 = *(long *)*pauVar14;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = uVar35;
    puVar15[2] = lVar13;
    puVar15[4] = pauVar14;
    if (lVar13 != 0) {
      *(undefined8 **)(lVar13 + 0x18) = puVar15;
    }
    lVar13 = *(long *)(*pauVar14 + 8);
    *(undefined8 **)*pauVar14 = puVar15;
    if (lVar13 == 0) {
      *(undefined8 **)(*pauVar14 + 8) = puVar15;
    }
    *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
LAB_00104612:
    do {
      if (*(int *)pauVar14[1] == 0) goto LAB_00104624;
      plVar16 = *(long **)*pauVar14;
      lVar13 = *plVar16;
      lVar23 = plVar16[1];
      if ((undefined1 (*) [16])plVar16[4] != pauVar14) {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        if (*(int *)pauVar14[1] != 0) goto LAB_00104c34;
LAB_00105a09:
        Memory::free_static(pauVar14,false);
        if (1 < lVar23 - lVar13) {
          pauVar14 = (undefined1 (*) [16])0x0;
          goto LAB_00104c44;
        }
        pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar14[1] = 0;
        *pauVar14 = (undefined1  [16])0x0;
        goto LAB_00104624;
      }
      lVar30 = plVar16[2];
      lVar38 = plVar16[3];
      *(long *)*pauVar14 = lVar30;
      if (plVar16 == *(long **)(*pauVar14 + 8)) {
        *(long *)(*pauVar14 + 8) = lVar38;
      }
      if (lVar38 != 0) {
        *(long *)(lVar38 + 0x10) = lVar30;
        lVar30 = plVar16[2];
      }
      if (lVar30 != 0) {
        *(long *)(lVar30 + 0x18) = lVar38;
      }
      Memory::free_static(plVar16,false);
      pauVar17 = pauVar14 + 1;
      *(int *)*pauVar17 = *(int *)*pauVar17 + -1;
      if (*(int *)*pauVar17 == 0) goto LAB_00105a09;
LAB_00104c34:
      if (1 < lVar23 - lVar13) {
LAB_00104c44:
        lVar30 = lVar23 * 0x18;
        pDVar20 = local_d0[lVar13];
        plVar16 = *(long **)(pDVar20 + lVar30 + 0x10);
        if ((plVar16 == (long *)0x0) || ((int)plVar16[2] == 0)) {
LAB_00105326:
          lVar13 = 0;
          goto LAB_00105355;
        }
        if (pPVar9[lVar13 * 0x28 + 1] == (PartitionVertex)0x0) {
          lVar30 = plVar16[1];
          lVar39 = *(long *)(lVar30 + -0x20);
          if (pauVar14 == (undefined1 (*) [16])0x0) {
            pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar14[1] = 0;
            *pauVar14 = (undefined1  [16])0x0;
          }
          plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
          lVar38 = *(long *)*pauVar14;
          plVar16[3] = 0;
          plVar16[2] = lVar38;
          plVar16[4] = (long)pauVar14;
          *plVar16 = lVar39;
          plVar16[1] = lVar23;
          if (lVar38 != 0) {
            *(long **)(lVar38 + 0x18) = plVar16;
          }
          lVar23 = *(long *)(*pauVar14 + 8);
          *(long **)*pauVar14 = plVar16;
          if (lVar23 == 0) {
            *(long **)(*pauVar14 + 8) = plVar16;
          }
          *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
          if (lVar39 - lVar13 < 2) goto LAB_00104612;
          if (*(long *)(lVar30 + -0x28) != *(long *)(lVar30 + -0x20)) {
            do {
              plVar16 = *(long **)(pDVar20 + lVar39 * 0x18 + 0x10);
              do {
                if ((plVar16 == (long *)0x0) || ((int)plVar16[2] == 0)) goto LAB_00105326;
                pvVar5 = (void *)plVar16[1];
                if (*(long *)(lVar30 + -0x28) == *(long *)((long)pvVar5 + -0x28)) goto LAB_00105704;
                if (plVar16 == *(long **)((long)pvVar5 + 0x20)) {
                  lVar23 = *(long *)((long)pvVar5 + 0x10);
                  if (pvVar5 == (void *)*plVar16) {
                    *plVar16 = lVar23;
                  }
                  lVar38 = *(long *)((long)pvVar5 + 0x18);
                  plVar16[1] = lVar38;
                  if (lVar38 != 0) {
                    *(long *)(lVar38 + 0x10) = lVar23;
                    lVar23 = *(long *)((long)pvVar5 + 0x10);
                  }
                  if (lVar23 != 0) {
                    *(long *)(lVar23 + 0x18) = lVar38;
                  }
                  Memory::free_static(pvVar5,false);
                  *(int *)(plVar16 + 2) = (int)plVar16[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                plVar16 = *(long **)(pDVar20 + lVar39 * 0x18 + 0x10);
              } while ((int)plVar16[2] != 0);
              Memory::free_static(plVar16,false);
              *(undefined8 *)(pDVar20 + lVar39 * 0x18 + 0x10) = 0;
            } while( true );
          }
LAB_00105704:
          plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
          plVar16[3] = 0;
          lVar38 = lVar13;
          lVar23 = lVar39;
        }
        else {
          plVar16 = (long *)*plVar16;
          lVar38 = *plVar16;
          if (pauVar14 == (undefined1 (*) [16])0x0) {
            pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar14[1] = 0;
            *pauVar14 = (undefined1  [16])0x0;
          }
          plVar12 = (long *)operator_new(0x28,DefaultAllocator::alloc);
          lVar39 = *(long *)*pauVar14;
          plVar12[3] = 0;
          plVar12[2] = lVar39;
          plVar12[4] = (long)pauVar14;
          *plVar12 = lVar13;
          plVar12[1] = lVar38;
          if (lVar39 != 0) {
            *(long **)(lVar39 + 0x18) = plVar12;
          }
          lVar13 = *(long *)(*pauVar14 + 8);
          *(long **)*pauVar14 = plVar12;
          if (lVar13 == 0) {
            *(long **)(*pauVar14 + 8) = plVar12;
          }
          *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
          if (lVar23 - lVar38 < 2) goto LAB_00104612;
          if (*plVar16 != plVar16[1]) {
            pDVar20 = local_d0[lVar38];
            do {
              plVar12 = *(long **)(pDVar20 + lVar30 + 0x10);
              do {
                if ((plVar12 == (long *)0x0) || ((int)plVar12[2] == 0)) goto LAB_00105326;
                pvVar5 = (void *)*plVar12;
                if (plVar16[1] == *(long *)((long)pvVar5 + 8)) goto LAB_001056a7;
                if (plVar12 == *(long **)((long)pvVar5 + 0x20)) {
                  lVar13 = *(long *)((long)pvVar5 + 0x10);
                  lVar39 = *(long *)((long)pvVar5 + 0x18);
                  *plVar12 = lVar13;
                  if (pvVar5 == (void *)plVar12[1]) {
                    plVar12[1] = lVar39;
                  }
                  if (lVar39 != 0) {
                    *(long *)(lVar39 + 0x10) = lVar13;
                    lVar13 = *(long *)((long)pvVar5 + 0x10);
                  }
                  if (lVar13 != 0) {
                    *(long *)(lVar13 + 0x18) = lVar39;
                  }
                  Memory::free_static(pvVar5,false);
                  *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                plVar12 = *(long **)(pDVar20 + lVar30 + 0x10);
              } while ((int)plVar12[2] != 0);
              Memory::free_static(plVar12,false);
              *(undefined8 *)(pDVar20 + lVar30 + 0x10) = 0;
            } while( true );
          }
LAB_001056a7:
          plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
          plVar16[3] = 0;
        }
        lVar13 = *(long *)*pauVar14;
        *plVar16 = lVar38;
        plVar16[1] = lVar23;
        plVar16[4] = (long)pauVar14;
        plVar16[2] = lVar13;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 0x18) = plVar16;
        }
        lVar13 = *(long *)(*pauVar14 + 8);
        *(long **)*pauVar14 = plVar16;
        if (lVar13 == 0) {
          *(long **)(*pauVar14 + 8) = plVar16;
        }
        *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
      }
    } while( true );
  }
  uVar31 = 0;
  goto LAB_00104ae7;
LAB_00104624:
  puVar15 = (undefined8 *)operator_new(0x28,DefaultAllocator::alloc);
  lVar13 = *(long *)*pauVar14;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = uVar35;
  puVar15[2] = lVar13;
  puVar15[4] = pauVar14;
  if (lVar13 != 0) {
    *(undefined8 **)(lVar13 + 0x18) = puVar15;
  }
  lVar13 = *(long *)(*pauVar14 + 8);
  *(undefined8 **)*pauVar14 = puVar15;
  if (lVar13 == 0) {
    *(undefined8 **)(*pauVar14 + 8) = puVar15;
  }
  *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
  pauVar19 = (undefined1 (*) [16])0x0;
  pauVar17 = (undefined1 (*) [16])0x0;
LAB_00104687:
  do {
    if (*(int *)pauVar14[1] == 0) break;
    plVar16 = *(long **)*pauVar14;
    lVar13 = *plVar16;
    lVar23 = plVar16[1];
    if ((undefined1 (*) [16])plVar16[4] == pauVar14) {
      lVar30 = plVar16[2];
      lVar38 = plVar16[3];
      *(long *)*pauVar14 = lVar30;
      if (plVar16 == *(long **)(*pauVar14 + 8)) {
        *(long *)(*pauVar14 + 8) = lVar38;
      }
      if (lVar38 != 0) {
        *(long *)(lVar38 + 0x10) = lVar30;
        lVar30 = plVar16[2];
      }
      if (lVar30 != 0) {
        *(long *)(lVar30 + 0x18) = lVar38;
      }
      Memory::free_static(plVar16,false);
      pauVar18 = pauVar14 + 1;
      *(int *)*pauVar18 = *(int *)*pauVar18 + -1;
      if (*(int *)*pauVar18 == 0) goto LAB_00105941;
LAB_00104e1b:
      if (lVar23 - lVar13 < 2) goto LAB_00104687;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      if (*(int *)pauVar14[1] != 0) goto LAB_00104e1b;
LAB_00105941:
      Memory::free_static(pauVar14,false);
      if (lVar23 - lVar13 < 2) {
        pauVar14 = (undefined1 (*) [16])0x0;
        break;
      }
      pauVar14 = (undefined1 (*) [16])0x0;
    }
    if (pauVar17 != (undefined1 (*) [16])0x0) {
      do {
        while( true ) {
          pvVar5 = *(void **)*pauVar17;
          if (pvVar5 == (void *)0x0) goto LAB_00104e95;
          if (pauVar17 != *(undefined1 (**) [16])((long)pvVar5 + 0x18)) break;
          lVar30 = *(long *)((long)pvVar5 + 8);
          lVar38 = *(long *)((long)pvVar5 + 0x10);
          *(long *)*pauVar17 = lVar30;
          if (pvVar5 == *(void **)(*pauVar17 + 8)) {
            *(long *)(*pauVar17 + 8) = lVar38;
          }
          if (lVar38 != 0) {
            *(long *)(lVar38 + 8) = lVar30;
            lVar30 = *(long *)((long)pvVar5 + 8);
          }
          if (lVar30 != 0) {
            *(long *)(lVar30 + 0x10) = lVar38;
          }
          Memory::free_static(pvVar5,false);
          pauVar18 = pauVar17 + 1;
          *(int *)*pauVar18 = *(int *)*pauVar18 + -1;
          if (*(int *)*pauVar18 == 0) goto LAB_00104e7c;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)pauVar17[1] != 0);
LAB_00104e7c:
      Memory::free_static(pauVar17,false);
      local_a0 = (undefined1 (*) [16])0x0;
    }
    pauVar17 = (undefined1 (*) [16])0x0;
LAB_00104e95:
    if (pauVar19 != (undefined1 (*) [16])0x0) {
      do {
        while( true ) {
          pvVar5 = *(void **)*pauVar19;
          if (pvVar5 == (void *)0x0) goto LAB_00104ef2;
          if (pauVar19 != *(undefined1 (**) [16])((long)pvVar5 + 0x20)) break;
          lVar30 = *(long *)((long)pvVar5 + 0x10);
          lVar38 = *(long *)((long)pvVar5 + 0x18);
          *(long *)*pauVar19 = lVar30;
          if (pvVar5 == *(void **)(*pauVar19 + 8)) {
            *(long *)(*pauVar19 + 8) = lVar38;
          }
          if (lVar38 != 0) {
            *(long *)(lVar38 + 0x10) = lVar30;
            lVar30 = *(long *)((long)pvVar5 + 0x10);
          }
          if (lVar30 != 0) {
            *(long *)(lVar30 + 0x18) = lVar38;
          }
          Memory::free_static(pvVar5,false);
          pauVar18 = pauVar19 + 1;
          *(int *)*pauVar18 = *(int *)*pauVar18 + -1;
          if (*(int *)*pauVar18 == 0) goto LAB_00104ee6;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)pauVar19[1] != 0);
LAB_00104ee6:
      Memory::free_static(pauVar19,false);
    }
    pauVar19 = (undefined1 (*) [16])0x0;
LAB_00104ef2:
    if (pauVar17 == (undefined1 (*) [16])0x0) {
      pauVar17 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar17[1] = 0;
      *pauVar17 = (undefined1  [16])0x0;
      local_a0 = pauVar17;
    }
    plVar16 = (long *)operator_new(0x20,DefaultAllocator::alloc);
    lVar30 = *(long *)(*pauVar17 + 8);
    plVar16[1] = 0;
    *plVar16 = lVar13;
    plVar16[2] = lVar30;
    plVar16[3] = (long)pauVar17;
    if (lVar30 != 0) {
      *(long **)(lVar30 + 8) = plVar16;
    }
    iVar8 = *(int *)pauVar17[1];
    lVar30 = *(long *)*pauVar17;
    *(long **)(*pauVar17 + 8) = plVar16;
    if (lVar30 == 0) {
      *(long **)*pauVar17 = plVar16;
    }
    *(int *)pauVar17[1] = iVar8 + 1;
    plVar16 = (long *)operator_new(0x20,DefaultAllocator::alloc);
    lVar30 = *(long *)(*pauVar17 + 8);
    plVar16[1] = 0;
    *plVar16 = lVar23;
    plVar16[2] = lVar30;
    plVar16[3] = (long)pauVar17;
    if (lVar30 != 0) {
      *(long **)(lVar30 + 8) = plVar16;
    }
    lVar30 = *(long *)*pauVar17;
    *(long **)(*pauVar17 + 8) = plVar16;
    if (lVar30 == 0) {
      *(long **)*pauVar17 = plVar16;
    }
    *(int *)pauVar17[1] = *(int *)pauVar17[1] + 1;
    if (pauVar19 == (undefined1 (*) [16])0x0) {
      pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar19[1] = 0;
      *pauVar19 = (undefined1  [16])0x0;
    }
    plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
    lVar30 = *(long *)*pauVar19;
    plVar16[3] = 0;
    plVar16[2] = lVar30;
    plVar16[4] = (long)pauVar19;
    *plVar16 = lVar13;
    plVar16[1] = lVar23;
    if (lVar30 != 0) {
      *(long **)(lVar30 + 0x18) = plVar16;
    }
    lVar13 = *(long *)(*pauVar19 + 8);
    *(long **)*pauVar19 = plVar16;
    if (lVar13 == 0) {
      *(long **)(*pauVar19 + 8) = plVar16;
    }
    *(int *)pauVar19[1] = *(int *)pauVar19[1] + 1;
LAB_00104fea:
    do {
      if (*(int *)pauVar19[1] == 0) break;
      plVar16 = *(long **)*pauVar19;
      lVar13 = *plVar16;
      lVar23 = plVar16[1];
      if (pauVar19 == (undefined1 (*) [16])plVar16[4]) {
        lVar30 = plVar16[2];
        lVar38 = plVar16[3];
        *(long *)*pauVar19 = lVar30;
        if (plVar16 == *(long **)(*pauVar19 + 8)) {
          *(long *)(*pauVar19 + 8) = lVar38;
        }
        if (lVar38 != 0) {
          *(long *)(lVar38 + 0x10) = lVar30;
          lVar30 = plVar16[2];
        }
        if (lVar30 != 0) {
          *(long *)(lVar30 + 0x18) = lVar38;
        }
        Memory::free_static(plVar16,false);
        pauVar17 = pauVar19 + 1;
        *(int *)*pauVar17 = *(int *)*pauVar17 + -1;
        if (*(int *)*pauVar17 == 0) goto LAB_00105b65;
LAB_0010504c:
        if (lVar23 - lVar13 < 2) goto LAB_00104fea;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        if (*(int *)pauVar19[1] != 0) goto LAB_0010504c;
LAB_00105b65:
        Memory::free_static(pauVar19,false);
        if (lVar23 - lVar13 < 2) {
          pauVar19 = (undefined1 (*) [16])0x0;
          break;
        }
        pauVar19 = (undefined1 (*) [16])0x0;
      }
      plVar16 = *(long **)(local_d0[lVar13] + lVar23 * 0x18 + 0x10);
      if (pPVar9[lVar13 * 0x28 + 1] == (PartitionVertex)0x0) {
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar30 = *(long *)(plVar16[1] + -0x20);
        if (lVar30 == *(long *)(plVar16[1] + -0x28)) {
          bVar40 = true;
          goto LAB_0010574a;
        }
        if (pauVar19 == (undefined1 (*) [16])0x0) {
          pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar19[1] = 0;
          *pauVar19 = (undefined1  [16])0x0;
        }
        plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
        lVar38 = *(long *)(*pauVar19 + 8);
        plVar16[2] = 0;
        plVar16[3] = lVar38;
        plVar16[4] = (long)pauVar19;
        *plVar16 = lVar13;
        plVar16[1] = lVar30;
        if (lVar38 != 0) {
          *(long **)(lVar38 + 0x10) = plVar16;
        }
        lVar13 = *(long *)*pauVar19;
        *(long **)(*pauVar19 + 8) = plVar16;
        if (lVar13 == 0) {
          *(long **)*pauVar19 = plVar16;
        }
        *(int *)pauVar19[1] = *(int *)pauVar19[1] + 1;
        if (pauVar14 == (undefined1 (*) [16])0x0) {
          pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar14[1] = 0;
          *pauVar14 = (undefined1  [16])0x0;
        }
LAB_0010510b:
        plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
        lVar13 = *(long *)(*pauVar14 + 8);
        plVar16[2] = 0;
        *plVar16 = lVar30;
        plVar16[1] = lVar23;
        plVar16[3] = lVar13;
        plVar16[4] = (long)pauVar14;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 0x10) = plVar16;
        }
        lVar13 = *(long *)*pauVar14;
        *(long **)(*pauVar14 + 8) = plVar16;
        if (lVar13 == 0) {
          *(long **)*pauVar14 = plVar16;
        }
        *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
      }
      else {
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar30 = *(long *)*plVar16;
        bVar40 = ((long *)*plVar16)[1] == lVar30;
LAB_0010574a:
        if (pauVar14 == (undefined1 (*) [16])0x0) {
          pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar14[1] = 0;
          *pauVar14 = (undefined1  [16])0x0;
        }
        plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
        lVar38 = *(long *)(*pauVar14 + 8);
        plVar16[2] = 0;
        *plVar16 = lVar13;
        plVar16[1] = lVar30;
        plVar16[3] = lVar38;
        plVar16[4] = (long)pauVar14;
        if (lVar38 != 0) {
          *(long **)(lVar38 + 0x10) = plVar16;
        }
        lVar13 = *(long *)*pauVar14;
        *(long **)(*pauVar14 + 8) = plVar16;
        if (lVar13 == 0) {
          *(long **)*pauVar14 = plVar16;
        }
        *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
        if (bVar40) goto LAB_0010510b;
        if (pauVar19 == (undefined1 (*) [16])0x0) {
          pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar19[1] = 0;
          *pauVar19 = (undefined1  [16])0x0;
        }
        plVar16 = (long *)operator_new(0x28,DefaultAllocator::alloc);
        lVar13 = *(long *)(*pauVar19 + 8);
        plVar16[2] = 0;
        *plVar16 = lVar30;
        plVar16[1] = lVar23;
        plVar16[3] = lVar13;
        plVar16[4] = (long)pauVar19;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 0x10) = plVar16;
        }
        lVar13 = *(long *)*pauVar19;
        *(long **)(*pauVar19 + 8) = plVar16;
        if (lVar13 == 0) {
          *(long **)*pauVar19 = plVar16;
        }
        *(int *)pauVar19[1] = *(int *)pauVar19[1] + 1;
      }
      if (local_a0 == (undefined1 (*) [16])0x0) {
        local_a0 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_a0[1] = 0;
        *local_a0 = (undefined1  [16])0x0;
      }
      pauVar17 = local_a0;
      plVar16 = (long *)operator_new(0x20,DefaultAllocator::alloc);
      lVar13 = *(long *)(*pauVar17 + 8);
      plVar16[1] = 0;
      *plVar16 = lVar30;
      plVar16[2] = lVar13;
      plVar16[3] = (long)pauVar17;
      if (lVar13 != 0) {
        *(long **)(lVar13 + 8) = plVar16;
      }
      lVar13 = *(long *)*pauVar17;
      *(long **)(*pauVar17 + 8) = plVar16;
      if (lVar13 == 0) {
        *(long **)*pauVar17 = plVar16;
      }
      *(int *)pauVar17[1] = *(int *)pauVar17[1] + 1;
    } while (pauVar19 != (undefined1 (*) [16])0x0);
    List<long,DefaultAllocator>::sort_custom<Comparator<long>>
              ((List<long,DefaultAllocator> *)&local_a0);
    pauVar17 = local_a0;
    if (local_a0 == (undefined1 (*) [16])0x0) {
      TPPLPoly::Init((TPPLPoly *)&local_98,0);
      plVar16 = (long *)0x0;
    }
    else {
      TPPLPoly::Init((TPPLPoly *)&local_98,(long)*(int *)local_a0[1]);
      plVar16 = *(long **)*pauVar17;
    }
    local_128 = (TPPLPoly *)&local_98;
    iVar8 = 0;
    while( true ) {
      if (pauVar17 == (undefined1 (*) [16])0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = *(long **)(*pauVar17 + 8);
      }
      if (plVar16 == plVar12) break;
      lVar13 = *plVar16;
      lVar23 = (long)iVar8;
      plVar16 = (long *)plVar16[1];
      iVar8 = iVar8 + 1;
      *(undefined8 *)((long)local_98 + lVar23 * 8) = *(undefined8 *)(pPVar9 + lVar13 * 0x28 + 4);
    }
    if (*(long *)param_2 == 0) {
      pauVar18 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar18;
      *(undefined4 *)pauVar18[1] = 0;
      *pauVar18 = (undefined1  [16])0x0;
    }
    this_00 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
    this_00[0x10] = (TPPLPoly)0x0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
    TPPLPoly::operator=(this_00,local_128);
    plVar16 = *(long **)param_2;
    lVar13 = plVar16[1];
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(long **)(this_00 + 0x28) = plVar16;
    *(long *)(this_00 + 0x20) = lVar13;
    if (lVar13 != 0) {
      *(TPPLPoly **)(lVar13 + 0x18) = this_00;
    }
    plVar16[1] = (long)this_00;
    if (*plVar16 == 0) {
      *plVar16 = (long)this_00;
    }
    *(int *)(plVar16 + 2) = (int)plVar16[2] + 1;
  } while (pauVar14 != (undefined1 (*) [16])0x0);
  lVar13 = 0;
  do {
    while (pDVar20 = local_d0[lVar13], pDVar20 == (DPState2 *)0x0) {
      lVar13 = lVar13 + 1;
      if ((long)uVar4 <= lVar13) goto LAB_001047d6;
    }
    pDVar27 = pDVar20 + *(long *)(pDVar20 + -8) * 0x18;
    if (pDVar20 != pDVar27) {
LAB_001046f0:
      pDVar26 = pDVar27 + -0x18;
      do {
        plVar16 = *(long **)(pDVar27 + -8);
        do {
          if (plVar16 == (long *)0x0) {
LAB_001047a7:
            pDVar27 = pDVar26;
            if (pDVar20 != pDVar26) goto LAB_001046f0;
LAB_001047b0:
            lVar23 = *(long *)(pDVar20 + -8) * 0x18;
            goto LAB_001047bc;
          }
          pvVar5 = (void *)*plVar16;
          if (pvVar5 == (void *)0x0) {
            if ((int)plVar16[2] == 0) {
              Memory::free_static(plVar16,false);
              goto LAB_001047a7;
            }
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            pDVar27 = pDVar26;
            if (pDVar20 == pDVar26) goto LAB_001047b0;
            goto LAB_001046f0;
          }
          if (plVar16 == *(long **)((long)pvVar5 + 0x20)) {
            lVar23 = *(long *)((long)pvVar5 + 0x10);
            lVar30 = *(long *)((long)pvVar5 + 0x18);
            *plVar16 = lVar23;
            if (pvVar5 == (void *)plVar16[1]) {
              plVar16[1] = lVar30;
            }
            if (lVar30 != 0) {
              *(long *)(lVar30 + 0x10) = lVar23;
              lVar23 = *(long *)((long)pvVar5 + 0x10);
            }
            if (lVar23 != 0) {
              *(long *)(lVar23 + 0x18) = lVar30;
            }
            Memory::free_static(pvVar5,false);
            *(int *)(plVar16 + 2) = (int)plVar16[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar16 = *(long **)(pDVar27 + -8);
        } while ((int)plVar16[2] != 0);
        Memory::free_static(plVar16,false);
        *(undefined8 *)(pDVar27 + -8) = 0;
      } while( true );
    }
    lVar23 = 0;
LAB_001047bc:
    lVar13 = lVar13 + 1;
    operator_delete__(pDVar20 + -8,lVar23 + 8);
  } while (lVar13 < (long)uVar4);
LAB_001047d6:
  operator_delete__(local_d0);
  operator_delete__(pPVar9);
  if (pauVar17 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar5 = *(void **)*pauVar17;
        if (pvVar5 == (void *)0x0) {
          if (*(int *)pauVar17[1] != 0) {
            uVar31 = 1;
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00104863;
          }
          goto LAB_00104854;
        }
        if (pauVar17 != *(undefined1 (**) [16])((long)pvVar5 + 0x18)) break;
        lVar13 = *(long *)((long)pvVar5 + 8);
        lVar23 = *(long *)((long)pvVar5 + 0x10);
        *(long *)*pauVar17 = lVar13;
        if (pvVar5 == *(void **)(*pauVar17 + 8)) {
          *(long *)(*pauVar17 + 8) = lVar23;
        }
        if (lVar23 != 0) {
          *(long *)(lVar23 + 8) = lVar13;
          lVar13 = *(long *)((long)pvVar5 + 8);
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x10) = lVar23;
        }
        Memory::free_static(pvVar5,false);
        pauVar18 = pauVar17 + 1;
        *(int *)*pauVar18 = *(int *)*pauVar18 + -1;
        if (*(int *)*pauVar18 == 0) goto LAB_00104854;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar17[1] != 0);
LAB_00104854:
    Memory::free_static(pauVar17,false);
  }
  uVar31 = 1;
  goto LAB_00104863;
LAB_00105355:
  do {
    pDVar20 = local_d0[lVar13];
    if (pDVar20 == (DPState2 *)0x0) {
      lVar13 = lVar13 + 1;
      if ((long)uVar4 <= lVar13) break;
      goto LAB_00105355;
    }
    pDVar27 = pDVar20 + *(long *)(pDVar20 + -8) * 0x18;
    if (pDVar20 != pDVar27) {
LAB_00105380:
      pDVar26 = pDVar27 + -0x18;
      do {
        plVar16 = *(long **)(pDVar27 + -8);
        do {
          if (plVar16 == (long *)0x0) {
LAB_00105416:
            pDVar27 = pDVar26;
            if (pDVar20 != pDVar26) goto LAB_00105380;
            lVar23 = *(long *)(pDVar20 + -8) * 0x18;
            goto LAB_0010542f;
          }
          pvVar5 = (void *)*plVar16;
          if (pvVar5 == (void *)0x0) {
            if ((int)plVar16[2] == 0) {
              Memory::free_static(plVar16,false);
            }
            else {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
            }
            goto LAB_00105416;
          }
          if (plVar16 == *(long **)((long)pvVar5 + 0x20)) {
            lVar23 = *(long *)((long)pvVar5 + 0x10);
            lVar30 = *(long *)((long)pvVar5 + 0x18);
            *plVar16 = lVar23;
            if (pvVar5 == (void *)plVar16[1]) {
              plVar16[1] = lVar30;
            }
            if (lVar30 != 0) {
              *(long *)(lVar30 + 0x10) = lVar23;
              lVar23 = *(long *)((long)pvVar5 + 0x10);
            }
            if (lVar23 != 0) {
              *(long *)(lVar23 + 0x18) = lVar30;
            }
            Memory::free_static(pvVar5,false);
            *(int *)(plVar16 + 2) = (int)plVar16[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar16 = *(long **)(pDVar27 + -8);
        } while ((int)plVar16[2] != 0);
        Memory::free_static(plVar16,false);
        *(undefined8 *)(pDVar27 + -8) = 0;
      } while( true );
    }
    lVar23 = 0;
LAB_0010542f:
    lVar13 = lVar13 + 1;
    operator_delete__(pDVar20 + -8,lVar23 + 8);
  } while (lVar13 < (long)uVar4);
  pauVar19 = (undefined1 (*) [16])0x0;
  uVar31 = 0;
  operator_delete__(local_d0);
  operator_delete__(pPVar9);
LAB_00104863:
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (pauVar19 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar5 = *(void **)*pauVar19;
        if (pvVar5 == (void *)0x0) {
          if (*(int *)pauVar19[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_001048d3;
          }
          goto LAB_001048c9;
        }
        if (*(undefined1 (**) [16])((long)pvVar5 + 0x20) != pauVar19) break;
        lVar13 = *(long *)((long)pvVar5 + 0x10);
        lVar23 = *(long *)((long)pvVar5 + 0x18);
        *(long *)*pauVar19 = lVar13;
        if (pvVar5 == *(void **)(*pauVar19 + 8)) {
          *(long *)(*pauVar19 + 8) = lVar23;
        }
        if (lVar23 != 0) {
          *(long *)(lVar23 + 0x10) = lVar13;
          lVar13 = *(long *)((long)pvVar5 + 0x10);
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x18) = lVar23;
        }
        Memory::free_static(pvVar5,false);
        pauVar17 = pauVar19 + 1;
        *(int *)*pauVar17 = *(int *)*pauVar17 + -1;
        if (*(int *)*pauVar17 == 0) goto LAB_001048c9;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar19[1] != 0);
LAB_001048c9:
    Memory::free_static(pauVar19,false);
  }
LAB_001048d3:
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar5 = *(void **)*pauVar14;
        if (pvVar5 == (void *)0x0) {
          if (*(int *)pauVar14[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00104ae7;
          }
          goto LAB_0010492a;
        }
        if (*(undefined1 (**) [16])((long)pvVar5 + 0x20) != pauVar14) break;
        lVar13 = *(long *)((long)pvVar5 + 0x10);
        lVar23 = *(long *)((long)pvVar5 + 0x18);
        *(long *)*pauVar14 = lVar13;
        if (pvVar5 == *(void **)(*pauVar14 + 8)) {
          *(long *)(*pauVar14 + 8) = lVar23;
        }
        if (lVar23 != 0) {
          *(long *)(lVar23 + 0x10) = lVar13;
          lVar13 = *(long *)((long)pvVar5 + 0x10);
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x18) = lVar23;
        }
        Memory::free_static(pvVar5,false);
        pauVar17 = pauVar14 + 1;
        *(int *)*pauVar17 = *(int *)*pauVar17 + -1;
        if (*(int *)*pauVar17 == 0) goto LAB_0010492a;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar14[1] != 0);
LAB_0010492a:
    Memory::free_static(pauVar14,false);
  }
LAB_00104ae7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar31;
}



/* TPPLPartition::MonotonePartition(List<TPPLPoly, DefaultAllocator>*, List<TPPLPoly,
   DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::MonotonePartition(TPPLPartition *this,List *param_1,List *param_2)

{
  long *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  float *pfVar10;
  undefined8 uVar11;
  char *pcVar12;
  TPPLPoly *this_00;
  undefined1 (*pauVar13) [16];
  long lVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  char *pcVar23;
  long lVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  void *local_f8;
  void *pvStack_e8;
  RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
  *local_e0;
  void *pvStack_98;
  undefined8 *puStack_90;
  undefined4 uStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  if ((*(long **)param_1 == (long *)0x0) || (lVar24 = **(long **)param_1, lVar24 == 0)) {
    uVar22 = 0;
    uVar17 = 0;
    pfVar6 = (float *)operator_new__(0);
    local_e0 = (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
                *)0x0;
  }
  else {
    local_e0 = (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
                *)0x0;
    do {
      local_e0 = (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
                  *)((long)local_e0 + *(long *)(lVar24 + 8));
      lVar24 = *(long *)(lVar24 + 0x18);
    } while (lVar24 != 0);
    uVar17 = (long)local_e0 * 3;
    uVar22 = (long)local_e0 * 8;
    lVar24 = uVar17 - 1;
    uVar20 = 0xffffffffffffffff;
    if (uVar17 < 0x555555555555556) {
      uVar20 = (long)local_e0 * 0x48;
    }
    pfVar6 = (float *)operator_new__(uVar20);
    pfVar10 = pfVar6;
    if (-1 < lVar24) {
      do {
        lVar24 = lVar24 + -1;
        pfVar10[0] = 0.0;
        pfVar10[1] = 0.0;
        pfVar10 = pfVar10 + 6;
      } while (lVar24 != -1);
    }
  }
  if ((*(long **)param_1 != (long *)0x0) &&
     (plVar8 = (long *)**(long **)param_1, plVar8 != (long *)0x0)) {
    lVar24 = 0;
    do {
      lVar19 = plVar8[1];
      if (0 < lVar19) {
        puVar5 = (undefined8 *)*plVar8;
        pfVar10 = pfVar6 + lVar24 * 6;
        uVar11 = *puVar5;
        *(long *)(pfVar10 + 2) = lVar24 + lVar19 + -1;
        *(undefined8 *)pfVar10 = uVar11;
        if (lVar19 != 1) {
          lVar7 = 0;
          do {
            lVar14 = lVar7 + lVar24 + 1;
            pfVar18 = pfVar10;
            do {
              lVar7 = lVar7 + 1;
              *(long *)(pfVar18 + 4) = lVar14;
              pfVar10 = pfVar18 + 6;
              if (lVar19 == lVar7) {
                plVar8 = (long *)plVar8[3];
                goto joined_r0x00105f5b;
              }
              *(undefined8 *)pfVar10 = puVar5[lVar7];
              *(long *)(pfVar18 + 8) = lVar24 + -1 + lVar7;
              lVar14 = lVar24;
              pfVar18 = pfVar10;
            } while (lVar7 == lVar19 + -1);
          } while( true );
        }
        *(long *)(pfVar10 + 4) = lVar24;
      }
      plVar8 = (long *)plVar8[3];
joined_r0x00105f5b:
      lVar24 = lVar24 + lVar19;
    } while (plVar8 != (long *)0x0);
  }
  uVar20 = 0xffffffffffffffff;
  if (local_e0 < 0x1000000000000000) {
    uVar20 = uVar22;
  }
  plVar8 = (long *)operator_new__(uVar20);
  uVar20 = 0;
  if (0 < (long)local_e0) {
    if (((ulong)local_e0 & 1) != 0) {
      *plVar8 = 0;
      uVar20 = 1;
      if (local_e0 ==
          (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
           *)0x1) goto LAB_00105e8b;
    }
    do {
      plVar8[uVar20] = uVar20;
      lVar24 = uVar20 + 1;
      uVar20 = uVar20 + 2;
      plVar8[lVar24] = lVar24;
    } while (local_e0 !=
             (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
              *)uVar20);
  }
LAB_00105e8b:
  plVar1 = (long *)((long)plVar8 + uVar22);
  if (plVar1 != plVar8) {
    lVar24 = -2;
    uVar20 = (long)uVar22 >> 3;
    if (uVar20 != 0) {
      lVar24 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      lVar24 = (long)(int)lVar24 * 2;
    }
    std::__introsort_loop<long*,long,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
              (plVar8,plVar1,lVar24,pfVar6);
    if ((long)uVar22 < 0x81) {
      std::__insertion_sort<long*,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
                (plVar8,plVar1,pfVar6);
    }
    else {
      plVar21 = plVar8 + 0x10;
      std::__insertion_sort<long*,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
                (plVar8,plVar21,pfVar6);
      for (; plVar1 != plVar21; plVar21 = plVar21 + 1) {
        lVar24 = *plVar21;
        fVar3 = (pfVar6 + lVar24 * 6)[1];
        plVar16 = plVar21;
        while( true ) {
          while( true ) {
            lVar19 = plVar16[-1];
            pfVar10 = pfVar6 + lVar19 * 6;
            if (fVar3 <= pfVar10[1]) break;
            *plVar16 = lVar19;
            plVar16 = plVar16 + -1;
          }
          if ((fVar3 != pfVar10[1]) ||
             (fVar4 = pfVar6[lVar24 * 6], fVar4 < *pfVar10 || fVar4 == *pfVar10)) break;
          *plVar16 = lVar19;
          plVar16 = plVar16 + -1;
        }
        *plVar16 = lVar24;
      }
    }
  }
  if (uVar17 < 0x1fffffffffffffff) {
    pvVar9 = operator_new__(uVar17 * 4);
    if (0 < (long)local_e0) goto LAB_00105fa1;
    if (uVar17 >> 0x3c != 0) goto LAB_00106cd7;
LAB_0010609d:
    local_f8 = operator_new__(uVar17 << 3);
    uStack_88 = 0;
    pvStack_98 = (void *)0x0;
    puStack_90 = &_GlobalNilClass::_nil;
    pvStack_e8 = operator_new__(uVar17 << 3);
    if ((long)local_e0 < 1) {
LAB_00106d1f:
      pcVar12 = (char *)operator_new__((ulong)local_e0);
      goto LAB_00106b88;
    }
  }
  else {
    pvVar9 = operator_new__(0xffffffffffffffff);
    if ((long)local_e0 < 1) {
LAB_00106cd7:
      local_f8 = operator_new__(0xffffffffffffffff);
      pvStack_98 = (void *)0x0;
      uStack_88 = 0;
      puStack_90 = &_GlobalNilClass::_nil;
      pvStack_e8 = operator_new__(0xffffffffffffffff);
      goto LAB_00106d1f;
    }
LAB_00105fa1:
    lVar24 = 0;
    pfVar10 = pfVar6;
    do {
      while( true ) {
        fVar3 = pfVar10[1];
        pfVar18 = pfVar6 + *(long *)(pfVar10 + 2) * 6;
        fVar4 = pfVar18[1];
        pfVar2 = pfVar6 + *(long *)(pfVar10 + 4) * 6;
        if (fVar4 < fVar3) break;
        if (!NAN(fVar3) && !NAN(fVar4)) {
          if (fVar3 == fVar4) {
            fVar27 = *pfVar18;
            fVar25 = *pfVar10;
            if (fVar27 < fVar25) {
              fVar26 = pfVar2[1];
              if (fVar26 < fVar3) {
                fVar28 = *pfVar2;
              }
              else if ((fVar26 != fVar3) || (fVar28 = *pfVar2, fVar25 <= fVar28)) goto LAB_00105fe0;
              goto LAB_00106048;
            }
            if (fVar25 < fVar27) goto LAB_00105fba;
          }
          else if (fVar3 <= fVar4) {
LAB_00105fba:
            fVar26 = pfVar2[1];
            if (fVar3 < fVar26) {
              fVar25 = *pfVar2;
              fVar28 = *pfVar10;
LAB_00106168:
              if ((fVar3 - fVar26) * (*pfVar18 - fVar25) - (fVar28 - fVar25) * (fVar4 - fVar26) <=
                  0.0) {
                *(undefined4 *)((long)pvVar9 + lVar24 * 4) = 4;
              }
              else {
                *(undefined4 *)((long)pvVar9 + lVar24 * 4) = 2;
              }
              goto LAB_00105fe8;
            }
            if (fVar3 == fVar26) {
              fVar28 = *pfVar10;
              fVar25 = *pfVar2;
              if (fVar28 < fVar25) goto LAB_00106168;
            }
          }
        }
LAB_00105fe0:
        *(undefined4 *)((long)pvVar9 + lVar24 * 4) = 0;
LAB_00105fe8:
        lVar24 = lVar24 + 1;
        pfVar10 = pfVar10 + 6;
        if ((long)local_e0 <= lVar24) goto LAB_00106090;
      }
      fVar26 = pfVar2[1];
      if (fVar3 <= fVar26) {
        if (fVar3 == fVar26) {
          fVar28 = *pfVar2;
          fVar25 = *pfVar10;
          if (fVar28 < fVar25) {
            fVar27 = *pfVar18;
            goto LAB_00106048;
          }
        }
        goto LAB_00105fe0;
      }
      fVar28 = *pfVar2;
      fVar27 = *pfVar18;
      fVar25 = *pfVar10;
LAB_00106048:
      if ((fVar3 - fVar26) * (fVar27 - fVar28) - (fVar25 - fVar28) * (fVar4 - fVar26) <= 0.0) {
        *(undefined4 *)((long)pvVar9 + lVar24 * 4) = 3;
        goto LAB_00105fe8;
      }
      *(undefined4 *)((long)pvVar9 + lVar24 * 4) = 1;
      lVar24 = lVar24 + 1;
      pfVar10 = pfVar10 + 6;
    } while (lVar24 < (long)local_e0);
LAB_00106090:
    if (uVar17 >> 0x3c == 0) goto LAB_0010609d;
    local_f8 = operator_new__(0xffffffffffffffff);
    pvStack_98 = (void *)0x0;
    uStack_88 = 0;
    puStack_90 = &_GlobalNilClass::_nil;
    pvStack_e8 = operator_new__(0xffffffffffffffff);
  }
  uVar22 = 0;
  memset(pvStack_e8,0,(long)local_e0 * 8);
  do {
    if (*(uint *)((long)pvVar9 + plVar8[uVar22] * 4) < 5) {
                    /* WARNING: Could not recover jumptable at 0x00106154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)(&DAT_001095b4 +
                         *(int *)(&DAT_001095b4 +
                                 (ulong)*(uint *)((long)pvVar9 + plVar8[uVar22] * 4) * 4)))();
      return uVar11;
    }
    uVar22 = uVar22 + 1;
  } while (local_e0 !=
           (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
            *)uVar22);
  pcVar12 = (char *)operator_new__((ulong)local_e0);
  __memset_chk(pcVar12,0,local_e0,local_e0);
  uStack_68 = 0;
  uStack_70 = 0;
  puStack_78 = (undefined8 *)0x0;
  if (0 < (long)local_e0) {
    pfVar10 = pfVar6;
    pcVar23 = pcVar12;
    do {
      while (*pcVar23 != '\0') {
        pcVar23 = pcVar23 + 1;
        pfVar10 = pfVar10 + 6;
        if (pcVar23 == pcVar12 + (long)local_e0) goto LAB_0010653c;
      }
      lVar19 = 1;
      for (lVar24 = *(long *)(pfVar10 + 4); pfVar6 + lVar24 * 6 != pfVar10;
          lVar24 = *(long *)(pfVar6 + lVar24 * 6 + 4)) {
        lVar19 = lVar19 + 1;
      }
      TPPLPoly::Init((TPPLPoly *)&puStack_78,lVar19);
      lVar24 = *(long *)(pfVar10 + 4);
      uVar11 = *(undefined8 *)pfVar10;
      *pcVar23 = '\x01';
      pcVar12[lVar24] = '\x01';
      *puStack_78 = uVar11;
      iVar15 = 1;
      while (pfVar18 = pfVar6 + lVar24 * 6, pfVar18 != pfVar10) {
        uVar11 = *(undefined8 *)pfVar18;
        lVar24 = *(long *)(pfVar18 + 4);
        lVar19 = (long)iVar15;
        iVar15 = iVar15 + 1;
        pcVar12[lVar24] = '\x01';
        puStack_78[lVar19] = uVar11;
      }
      if (*(long *)param_2 == 0) {
        pauVar13 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_2 = pauVar13;
        *(undefined4 *)pauVar13[1] = 0;
        *pauVar13 = (undefined1  [16])0x0;
      }
      this_00 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
      this_00[0x10] = (TPPLPoly)0x0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
      TPPLPoly::operator=(this_00,(TPPLPoly *)&puStack_78);
      plVar1 = *(long **)param_2;
      lVar24 = plVar1[1];
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(long **)(this_00 + 0x28) = plVar1;
      *(long *)(this_00 + 0x20) = lVar24;
      if (lVar24 != 0) {
        *(TPPLPoly **)(lVar24 + 0x18) = this_00;
      }
      plVar1[1] = (long)this_00;
      if (*plVar1 == 0) {
        *plVar1 = (long)this_00;
      }
      pcVar23 = pcVar23 + 1;
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      pfVar10 = pfVar10 + 6;
    } while (pcVar23 != pcVar12 + (long)local_e0);
LAB_0010653c:
    if (puStack_78 != (undefined8 *)0x0) {
      operator_delete__(puStack_78);
    }
  }
LAB_00106b88:
  local_e0 = (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
              *)&pvStack_98;
  operator_delete__(pfVar6);
  operator_delete__(plVar8);
  operator_delete__(pvVar9);
  operator_delete__(pvStack_e8);
  operator_delete__(local_f8);
  operator_delete__(pcVar12);
  RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>::clear
            (local_e0);
  if (pvStack_98 != (void *)0x0) {
    Memory::free_static(pvStack_98,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* TPPLPartition::Triangulate_MONO(List<TPPLPoly, DefaultAllocator>*, List<TPPLPoly,
   DefaultAllocator>*) */

undefined8 __thiscall
TPPLPartition::Triangulate_MONO(TPPLPartition *this,List *param_1,List *param_2)

{
  TPPLPoly *pTVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined8 *)0x0;
  iVar2 = MonotonePartition(this,param_1,(List *)&local_38);
  if (iVar2 == 0) {
LAB_00106f4b:
    uVar3 = 0;
  }
  else {
    if (local_38 != (undefined8 *)0x0) {
      for (pTVar1 = (TPPLPoly *)*local_38; pTVar1 != (TPPLPoly *)0x0;
          pTVar1 = *(TPPLPoly **)(pTVar1 + 0x18)) {
        iVar2 = TriangulateMonotone(this,pTVar1,param_2);
        if (iVar2 == 0) goto LAB_00106f4b;
      }
    }
    uVar3 = 1;
  }
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TPPLPartition::Triangulate_MONO(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) */

undefined4 __thiscall
TPPLPartition::Triangulate_MONO(TPPLPartition *this,TPPLPoly *param_1,List *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 (*pauVar3) [16];
  TPPLPoly *this_00;
  long in_FS_OFFSET;
  undefined1 (*local_38) [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
  *(undefined4 *)pauVar3[1] = 0;
  *pauVar3 = (undefined1  [16])0x0;
  local_38 = pauVar3;
  this_00 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
  this_00[0x10] = (TPPLPoly)0x0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
  TPPLPoly::operator=(this_00,param_1);
  lVar1 = *(long *)(*pauVar3 + 8);
  *(undefined1 (**) [16])(this_00 + 0x28) = pauVar3;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(long *)(this_00 + 0x20) = lVar1;
  if (lVar1 != 0) {
    *(TPPLPoly **)(lVar1 + 0x18) = this_00;
  }
  lVar1 = *(long *)*pauVar3;
  *(TPPLPoly **)(*pauVar3 + 8) = this_00;
  if (lVar1 == 0) {
    *(TPPLPoly **)*pauVar3 = this_00;
  }
  *(int *)pauVar3[1] = *(int *)pauVar3[1] + 1;
  uVar2 = Triangulate_MONO(this,(List *)&local_38,param_2);
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* RBSet<TPPLPartition::ScanLineEdge, Comparator<TPPLPartition::ScanLineEdge>,
   DefaultAllocator>::_cleanup_tree(RBSet<TPPLPartition::ScanLineEdge,
   Comparator<TPPLPartition::ScanLineEdge>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>::
_cleanup_tree(RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
              *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* SortArray<List<long, DefaultAllocator>::Element*, List<long,
   DefaultAllocator>::AuxiliaryComparator<Comparator<long> >, true>::introsort(long, long,
   List<long, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<long,DefaultAllocator>::Element*,List<long,DefaultAllocator>::AuxiliaryComparator<Comparator<long>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element *pEVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  Element **ppEVar12;
  long lVar13;
  long local_58;
  
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00107981:
    lVar8 = lVar13 + -2 >> 1;
    lVar9 = lVar8 * 2 + 2;
    ppEVar6 = param_3 + param_1 + lVar8;
    pEVar10 = *ppEVar6;
    lVar3 = lVar8;
    lVar7 = lVar9;
    if (lVar13 <= lVar9) goto LAB_00107a8d;
LAB_001079c3:
    do {
      pEVar1 = param_3[param_1 + lVar9];
      pEVar11 = param_3[param_1 + lVar9 + -1];
      lVar2 = lVar9 + -1;
      lVar4 = lVar9;
      ppEVar5 = param_3 + param_1 + lVar9 + -1;
      if (*(long *)pEVar11 <= *(long *)pEVar1) {
        lVar4 = lVar9 + 1;
        lVar2 = lVar9;
        pEVar11 = pEVar1;
        ppEVar5 = param_3 + param_1 + lVar9;
      }
      lVar9 = lVar4 * 2;
      param_3[lVar3 + param_1] = pEVar11;
      lVar3 = lVar2;
    } while (lVar13 != lVar9 && SBORROW8(lVar13,lVar9) == lVar13 + lVar4 * -2 < 0);
    ppEVar12 = ppEVar5;
    if (lVar13 == lVar9) goto LAB_00107a93;
    do {
      lVar9 = lVar7;
      lVar7 = lVar2 + -1;
      if (lVar2 <= lVar8) goto LAB_00107bd1;
      lVar3 = *(long *)pEVar10;
      do {
        lVar4 = lVar7 >> 1;
        pEVar1 = param_3[param_1 + lVar4];
        if (lVar3 <= *(long *)pEVar1) {
          param_3[lVar2 + param_1] = pEVar10;
          goto joined_r0x00107a6d;
        }
        param_3[lVar2 + param_1] = pEVar1;
        lVar7 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
        lVar2 = lVar4;
      } while (lVar8 < lVar4);
      param_3[param_1 + lVar4] = pEVar10;
joined_r0x00107a6d:
      if (lVar8 == 0) {
        ppEVar6 = param_3 + param_1;
        lVar13 = (param_2 + -1) - param_1;
        goto LAB_00107ac8;
      }
      while( true ) {
        ppEVar6 = ppEVar6 + -1;
        lVar9 = lVar9 + -2;
        lVar8 = lVar8 + -1;
        pEVar10 = *ppEVar6;
        lVar3 = lVar8;
        lVar7 = lVar9;
        if (lVar9 < lVar13) goto LAB_001079c3;
LAB_00107a8d:
        lVar7 = lVar9;
        ppEVar12 = ppEVar6;
        ppEVar5 = ppEVar6;
        if (lVar9 == lVar13) break;
LAB_00107bd1:
        *ppEVar5 = pEVar10;
      }
LAB_00107a93:
      lVar2 = lVar9 + -1;
      ppEVar5 = param_3 + param_1 + lVar2;
      *ppEVar12 = *ppEVar5;
    } while( true );
  }
  lVar9 = param_2;
  local_58 = param_4;
LAB_001077c1:
  pEVar10 = param_3[lVar9 + -1];
  local_58 = local_58 + -1;
  lVar8 = *(long *)pEVar10;
  lVar7 = *(long *)param_3[param_1];
  lVar3 = *(long *)param_3[(lVar13 >> 1) + param_1];
  if (lVar7 < lVar3) {
    if (lVar3 < lVar8) {
LAB_00107953:
      pEVar10 = param_3[(lVar13 >> 1) + param_1];
      lVar8 = lVar3;
      goto LAB_00107804;
    }
    if (lVar7 < lVar8) goto LAB_00107804;
  }
  else if (lVar8 <= lVar7) {
    if (lVar3 < lVar8) goto LAB_00107804;
    goto LAB_00107953;
  }
  pEVar10 = param_3[param_1];
  lVar8 = lVar7;
LAB_00107804:
  lVar13 = lVar9;
  param_2 = param_1;
  do {
    if (lVar7 < lVar8) {
      if (lVar9 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        lVar8 = *(long *)pEVar10;
        goto LAB_0010783f;
      }
    }
    else {
LAB_0010783f:
      lVar7 = lVar13 + -1;
      ppEVar6 = param_3 + lVar7;
      if (lVar8 < *(long *)*ppEVar6) {
        ppEVar5 = param_3 + lVar13 + -2;
        while (param_1 != lVar7) {
          lVar7 = lVar7 + -1;
          ppEVar6 = ppEVar5;
          if (*(long *)*ppEVar5 <= lVar8) goto LAB_001078a5;
          ppEVar5 = ppEVar5 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_001078a5:
      if (lVar7 <= param_2) break;
      pEVar1 = param_3[param_2];
      param_3[param_2] = *ppEVar6;
      lVar8 = *(long *)pEVar10;
      *ppEVar6 = pEVar1;
      lVar13 = lVar7;
    }
    lVar7 = param_2 + 1;
    param_2 = param_2 + 1;
    lVar7 = *(long *)param_3[lVar7];
  } while( true );
  introsort(param_2,lVar9,param_3,local_58);
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  lVar9 = param_2;
  if (local_58 == 0) goto LAB_00107981;
  goto LAB_001077c1;
LAB_00107ac8:
  pEVar10 = ppEVar6[lVar13];
  ppEVar6[lVar13] = *ppEVar6;
  if (lVar13 < 3) {
    if (lVar13 != 2) {
      *ppEVar6 = pEVar10;
      return;
    }
    lVar9 = param_1 + 1;
    lVar7 = 0;
    lVar13 = 1;
    *ppEVar6 = param_3[lVar9];
LAB_00107b58:
    lVar3 = *(long *)pEVar10;
    while( true ) {
      ppEVar5 = param_3 + lVar9;
      pEVar1 = param_3[param_1 + lVar7];
      if (lVar3 <= *(long *)pEVar1) break;
      *ppEVar5 = pEVar1;
      if (lVar7 == 0) {
        param_3[param_1 + lVar7] = pEVar10;
        goto LAB_00107ac8;
      }
      lVar9 = param_1 + lVar7;
      lVar7 = (lVar7 + -1) / 2;
    }
  }
  else {
    lVar9 = 2;
    lVar7 = 0;
    do {
      pEVar1 = param_3[param_1 + lVar9];
      pEVar11 = param_3[param_1 + lVar9 + -1];
      lVar3 = lVar9 + -1;
      ppEVar5 = param_3 + param_1 + lVar9 + -1;
      lVar8 = lVar9;
      if (*(long *)pEVar11 <= *(long *)pEVar1) {
        lVar8 = lVar9 + 1;
        lVar3 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9;
        pEVar11 = pEVar1;
      }
      lVar9 = lVar8 * 2;
      param_3[lVar7 + param_1] = pEVar11;
      lVar7 = lVar3;
    } while (lVar13 != lVar9 && SBORROW8(lVar13,lVar9) == lVar13 + lVar8 * -2 < 0);
    if (lVar13 == lVar9) {
      lVar9 = param_1 + lVar13 + -1;
      lVar7 = lVar13 + -2 >> 1;
      *ppEVar5 = param_3[lVar9];
      lVar13 = lVar13 + -1;
      goto LAB_00107b58;
    }
    lVar9 = param_1 + lVar3;
    lVar13 = lVar13 + -1;
    lVar7 = (lVar3 + -1) / 2;
    if (0 < lVar3) goto LAB_00107b58;
  }
  *ppEVar5 = pEVar10;
  goto LAB_00107ac8;
}



/* List<TPPLPoly, DefaultAllocator>::~List() */

void __thiscall List<TPPLPoly,DefaultAllocator>::~List(List<TPPLPoly,DefaultAllocator> *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    puVar1 = (undefined8 *)*plVar4;
    if (puVar1 == (undefined8 *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)puVar1[5] == plVar4) {
      lVar3 = puVar1[3];
      lVar2 = puVar1[4];
      *plVar4 = lVar3;
      if (puVar1 == (undefined8 *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
        lVar3 = puVar1[3];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete__((void *)*puVar1);
      }
      Memory::free_static(puVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* void List<long, DefaultAllocator>::sort_custom<Comparator<long> >() */

void __thiscall
List<long,DefaultAllocator>::sort_custom<Comparator<long>>(List<long,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  Element *pEVar4;
  Element **__src;
  long lVar5;
  Element *pEVar6;
  Element **ppEVar7;
  Element *pEVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  Element **ppEVar12;
  Element *pEVar13;
  long lVar14;
  Element **local_60;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
    local_60 = (Element **)0x8;
  }
  else {
    __src[-1] = pEVar4;
    local_60 = __src + 1;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar13 = (Element *)**(long **)this; pEVar13 != (Element *)0x0;
        pEVar13 = *(Element **)(pEVar13 + 8)) {
      *ppEVar7 = pEVar13;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar9 = 0;
  pEVar13 = pEVar4;
  do {
    pEVar13 = (Element *)((long)pEVar13 >> 1);
    lVar9 = lVar9 + 1;
  } while (pEVar13 != (Element *)0x1);
  SortArray<List<long,DefaultAllocator>::Element*,List<long,DefaultAllocator>::AuxiliaryComparator<Comparator<long>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar9 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar13 = (Element *)0x1;
    pEVar8 = *__src;
    do {
      while( true ) {
        pEVar6 = __src[(long)pEVar13];
        __n = (long)pEVar13 * 8;
        lVar9 = *(long *)pEVar6;
        if (lVar9 < *(long *)pEVar8) break;
        pEVar8 = __src[(long)(pEVar13 + -1)];
        ppEVar7 = __src + (long)pEVar13;
        pEVar10 = pEVar13 + -1;
        if (lVar9 < *(long *)pEVar8) {
          do {
            pEVar11 = pEVar10;
            if (pEVar11 == (Element *)0x0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar7 = local_60;
              goto LAB_0010818c;
            }
            __src[(long)(pEVar11 + 1)] = pEVar8;
            pEVar8 = __src[(long)(pEVar11 + -1)];
            pEVar10 = pEVar11 + -1;
          } while (lVar9 < *(long *)pEVar8);
          ppEVar7 = __src + (long)pEVar11;
        }
LAB_0010818c:
        pEVar13 = pEVar13 + 1;
        *ppEVar7 = pEVar6;
        pEVar6 = *__src;
        pEVar8 = pEVar6;
        if (pEVar4 == pEVar13) goto LAB_00108021;
      }
      pEVar13 = pEVar13 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar6;
      pEVar8 = pEVar6;
    } while (pEVar4 != pEVar13);
  }
  else {
    ppEVar7 = __src + 1;
    lVar9 = 1;
    do {
      while( true ) {
        lVar14 = lVar9;
        pEVar13 = *ppEVar7;
        lVar9 = *(long *)pEVar13;
        if (lVar9 < *(long *)*__src) break;
        pEVar8 = ppEVar7[-1];
        lVar3 = lVar14 + -1;
        ppEVar12 = ppEVar7;
        if (lVar9 < *(long *)pEVar8) {
          do {
            lVar5 = lVar3;
            if (lVar5 == 0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar12 = local_60;
              goto LAB_00107f68;
            }
            __src[lVar5 + 1] = pEVar8;
            pEVar8 = __src[lVar5 + -1];
            lVar3 = lVar5 + -1;
          } while (lVar9 < *(long *)pEVar8);
          ppEVar12 = __src + lVar5;
        }
LAB_00107f68:
        *ppEVar12 = pEVar13;
        ppEVar7 = ppEVar7 + 1;
        lVar9 = lVar14 + 1;
        if (lVar14 + 1 == 0x10) goto LAB_00107f7d;
      }
      memmove(__src + 1,__src,lVar14 * 8);
      ppEVar7 = ppEVar7 + 1;
      *__src = pEVar13;
      lVar9 = lVar14 + 1;
    } while (lVar14 + 1 != 0x10);
LAB_00107f7d:
    pEVar13 = (Element *)(lVar14 + 1);
    ppEVar7 = __src + 0x10;
    do {
      pEVar6 = *ppEVar7;
      pEVar10 = ppEVar7[-1];
      pEVar8 = pEVar13 + -1;
      lVar9 = *(long *)pEVar6;
      ppEVar12 = ppEVar7;
      if (lVar9 < *(long *)pEVar10) {
        do {
          __src[(long)(pEVar8 + 1)] = pEVar10;
          pEVar11 = pEVar8 + -1;
          pEVar10 = __src[(long)pEVar11];
          if (*(long *)pEVar10 <= lVar9) {
            ppEVar12 = __src + (long)pEVar8;
            goto LAB_00108004;
          }
          pEVar8 = pEVar11;
        } while (pEVar11 != (Element *)0x0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        ppEVar12 = local_60;
      }
LAB_00108004:
      pEVar13 = pEVar13 + 1;
      *ppEVar12 = pEVar6;
      ppEVar7 = ppEVar7 + 1;
    } while (pEVar4 != pEVar13);
    pEVar6 = *__src;
  }
LAB_00108021:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pEVar6;
  *(long *)(pEVar6 + 0x10) = 0;
  *(Element **)(*__src + 8) = __src[1];
  pEVar13 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar13;
  *(Element **)(pEVar13 + 0x10) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar12 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x10) = *ppEVar7;
      *(Element **)(*ppEVar12 + 8) = ppEVar7[2];
      ppEVar7 = ppEVar12;
    } while (ppEVar12 != __src + (iVar1 - 2));
  }
  Memory::free_static(__src,true);
  return;
}



/* TPPLPartition::ConvexPartition_OPT(TPPLPoly*, List<TPPLPoly, DefaultAllocator>*) [clone .cold] */

void TPPLPartition::ConvexPartition_OPT(TPPLPoly *param_1,List *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RBSet<TPPLPartition::ScanLineEdge, Comparator<TPPLPartition::ScanLineEdge>,
   DefaultAllocator>::clear() */

void __thiscall
RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>::clear
          (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
           *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          pEVar5 = *(Element **)(pEVar7 + 8);
          if (pEVar5 != pEVar3) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (pEVar3 != *(Element **)(pEVar5 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBSet<TPPLPartition::ScanLineEdge, Comparator<TPPLPartition::ScanLineEdge>,
   DefaultAllocator>::_insert(TPPLPartition::ScanLineEdge const&) */

int * __thiscall
RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>::_insert
          (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
           *this,ScanLineEdge *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  ScanLineEdge *this_00;
  int *extraout_RDX;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  
  piVar14 = *(int **)this;
  piVar10 = *(int **)(this + 8);
  piVar8 = *(int **)(piVar14 + 4);
  if (*(int **)(piVar14 + 4) != piVar10) {
    do {
      while (piVar14 = piVar8,
            cVar7 = TPPLPartition::ScanLineEdge::operator<(param_1,(ScanLineEdge *)(piVar14 + 0xc)),
            cVar7 == '\0') {
        cVar7 = TPPLPartition::ScanLineEdge::operator<(this_00,param_1);
        if (cVar7 == '\0') {
          return piVar14;
        }
        piVar8 = *(int **)(piVar14 + 2);
        if (*(int **)(piVar14 + 2) == piVar10) goto LAB_001084db;
      }
      piVar8 = *(int **)(piVar14 + 4);
    } while (*(int **)(piVar14 + 4) != piVar10);
  }
LAB_001084db:
  piVar8 = (int *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(piVar8 + 8) = (undefined1  [16])0x0;
  piVar10 = *(int **)(this + 8);
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *piVar8 = 0;
  *(int **)(piVar8 + 6) = piVar14;
  *(int **)(piVar8 + 2) = piVar10;
  *(int **)(piVar8 + 4) = piVar10;
  *(undefined8 *)(piVar8 + 0xc) = uVar5;
  *(undefined8 *)(piVar8 + 0xe) = uVar6;
  *(undefined8 *)(piVar8 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  if ((*(int **)this == piVar14) ||
     (cVar7 = TPPLPartition::ScanLineEdge::operator<(param_1,(ScanLineEdge *)(piVar14 + 0xc)),
     piVar10 = extraout_RDX, cVar7 != '\0')) {
    *(int **)(piVar14 + 4) = piVar8;
    piVar13 = *(int **)(this + 8);
    piVar9 = *(int **)(piVar8 + 4);
    piVar12 = *(int **)this;
    if (piVar10 == piVar13) {
      piVar11 = piVar14;
      piVar10 = piVar14;
      if (piVar8 == *(int **)(piVar14 + 2)) goto LAB_001086e8;
      goto LAB_001086f5;
    }
LAB_001086c0:
    do {
      piVar11 = piVar10;
      piVar10 = *(int **)(piVar11 + 4);
    } while (piVar13 != *(int **)(piVar11 + 4));
  }
  else {
    *(int **)(piVar14 + 2) = piVar8;
    piVar11 = *(int **)(piVar8 + 2);
    piVar13 = *(int **)(this + 8);
    piVar12 = *(int **)this;
    piVar10 = piVar14;
    piVar9 = extraout_RDX;
    if (piVar11 == piVar13) {
LAB_001086e8:
      do {
        piVar11 = *(int **)(piVar10 + 6);
        bVar15 = piVar10 == *(int **)(piVar11 + 2);
        piVar10 = piVar11;
      } while (bVar15);
LAB_001086f5:
      if (piVar12 == piVar11) {
        piVar11 = (int *)0x0;
      }
    }
    else {
      piVar10 = *(int **)(piVar11 + 4);
      if (piVar13 != *(int **)(piVar11 + 4)) goto LAB_001086c0;
    }
  }
  *(int **)(piVar8 + 8) = piVar11;
  piVar10 = *(int **)this;
  if (*(int **)(this + 8) == piVar9) {
    piVar9 = piVar8;
    piVar13 = piVar14;
    piVar12 = piVar14;
    if (piVar8 == *(int **)(piVar14 + 4)) {
      do {
        piVar13 = *(int **)(piVar12 + 6);
        bVar15 = piVar12 == *(int **)(piVar13 + 4);
        piVar9 = piVar12;
        piVar12 = piVar13;
      } while (bVar15);
    }
    if (piVar10 != piVar9) goto LAB_001085ac;
    piVar8[10] = 0;
    piVar8[0xb] = 0;
    if (piVar11 == (int *)0x0) goto LAB_001085c6;
LAB_001085b5:
    *(int **)(piVar11 + 10) = piVar8;
    piVar13 = *(int **)(piVar8 + 10);
    if (piVar13 == (int *)0x0) goto LAB_001085c6;
  }
  else {
    do {
      piVar13 = piVar9;
      piVar9 = *(int **)(piVar13 + 2);
    } while (*(int **)(this + 8) != *(int **)(piVar13 + 2));
LAB_001085ac:
    *(int **)(piVar8 + 10) = piVar13;
    if (piVar11 != (int *)0x0) goto LAB_001085b5;
  }
  *(int **)(piVar13 + 8) = piVar8;
LAB_001085c6:
  iVar1 = *piVar14;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  piVar13 = piVar8;
  if (iVar1 == 0) {
    do {
      while( true ) {
        piVar10 = *(int **)(piVar14 + 6);
        piVar9 = *(int **)(piVar10 + 4);
        if (piVar9 != piVar14) break;
        piVar9 = *(int **)(piVar10 + 2);
        if (*piVar9 == 0) goto LAB_0010865d;
        piVar12 = *(int **)(piVar14 + 2);
        piVar9 = piVar14;
        if (piVar13 == piVar12) {
          lVar2 = *(long *)(this + 8);
          lVar3 = *(long *)(piVar12 + 4);
          *(long *)(piVar14 + 2) = lVar3;
          if (lVar2 == lVar3) {
            *(int **)(piVar12 + 6) = piVar10;
            piVar13 = piVar10;
LAB_00108935:
            *(int **)(piVar13 + 4) = piVar12;
          }
          else {
            *(int **)(lVar3 + 0x18) = piVar14;
            piVar13 = *(int **)(piVar14 + 6);
            *(int **)(piVar12 + 6) = piVar13;
            if (piVar14 == *(int **)(piVar13 + 4)) goto LAB_00108935;
            *(int **)(piVar13 + 2) = piVar12;
          }
          *(int **)(piVar12 + 4) = piVar14;
          *(int **)(piVar14 + 6) = piVar12;
          piVar9 = piVar12;
          piVar13 = piVar14;
        }
        piVar14 = *(int **)(this + 8);
        *piVar9 = 1;
        if (piVar10 == piVar14) {
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        }
        else {
          *piVar10 = 0;
        }
        lVar2 = *(long *)(piVar10 + 4);
        lVar3 = *(long *)(this + 8);
        lVar4 = *(long *)(lVar2 + 8);
        *(long *)(piVar10 + 4) = lVar4;
        if (lVar3 != lVar4) {
          *(int **)(lVar4 + 0x18) = piVar10;
        }
        lVar3 = *(long *)(piVar10 + 6);
        *(long *)(lVar2 + 0x18) = lVar3;
        if (piVar10 == *(int **)(lVar3 + 8)) {
          *(long *)(lVar3 + 8) = lVar2;
        }
        else {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        *(int **)(lVar2 + 8) = piVar10;
        *(long *)(piVar10 + 6) = lVar2;
LAB_00108640:
        piVar14 = piVar9;
        if (*piVar9 != 0) goto LAB_0010868b;
      }
      if (*piVar9 != 0) {
        piVar9 = *(int **)(piVar14 + 4);
        if (piVar13 == piVar9) {
          lVar2 = *(long *)(this + 8);
          lVar3 = *(long *)(piVar9 + 2);
          *(long *)(piVar14 + 4) = lVar3;
          piVar13 = piVar10;
          if (lVar2 != lVar3) {
            *(int **)(lVar3 + 0x18) = piVar14;
            piVar13 = *(int **)(piVar14 + 6);
          }
          *(int **)(piVar9 + 6) = piVar13;
          if (piVar14 == *(int **)(piVar13 + 2)) {
            *(int **)(piVar13 + 2) = piVar9;
          }
          else {
            *(int **)(piVar13 + 4) = piVar9;
          }
          *(int **)(piVar9 + 2) = piVar14;
          *(int **)(piVar14 + 6) = piVar9;
          piVar13 = *(int **)(this + 8);
          *piVar9 = 1;
          if (piVar10 != piVar13) goto LAB_00108601;
LAB_001087e8:
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          piVar13 = piVar14;
        }
        else {
          piVar12 = *(int **)(this + 8);
          *piVar14 = 1;
          piVar9 = piVar14;
          piVar14 = piVar13;
          if (piVar10 == piVar12) goto LAB_001087e8;
LAB_00108601:
          *piVar10 = 0;
          piVar13 = piVar14;
        }
        lVar2 = *(long *)(piVar10 + 2);
        lVar3 = *(long *)(this + 8);
        lVar4 = *(long *)(lVar2 + 0x10);
        *(long *)(piVar10 + 2) = lVar4;
        if (lVar3 != lVar4) {
          *(int **)(lVar4 + 0x18) = piVar10;
        }
        lVar3 = *(long *)(piVar10 + 6);
        *(long *)(lVar2 + 0x18) = lVar3;
        if (piVar10 == *(int **)(lVar3 + 0x10)) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        else {
          *(long *)(lVar3 + 8) = lVar2;
        }
        *(int **)(lVar2 + 0x10) = piVar10;
        *(long *)(piVar10 + 6) = lVar2;
        goto LAB_00108640;
      }
LAB_0010865d:
      piVar13 = *(int **)(this + 8);
      *piVar14 = 1;
      *piVar9 = 1;
      if (piVar10 == piVar13) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      else {
        *piVar10 = 0;
      }
      piVar14 = *(int **)(piVar10 + 6);
      piVar13 = piVar10;
    } while (**(int **)(piVar10 + 6) == 0);
LAB_0010868b:
    piVar10 = *(int **)this;
  }
  **(undefined4 **)(piVar10 + 4) = 1;
  return piVar8;
}



/* RBSet<TPPLPartition::ScanLineEdge, Comparator<TPPLPartition::ScanLineEdge>,
   DefaultAllocator>::_erase_fix_rb(RBSet<TPPLPartition::ScanLineEdge,
   Comparator<TPPLPartition::ScanLineEdge>, DefaultAllocator>::Element*) */

void __thiscall
RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>::
_erase_fix_rb(RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
              *this,Element *param_1)

{
  int iVar1;
  Element *pEVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  pEVar8 = *(Element **)(this + 8);
  pEVar2 = *(Element **)(*(long *)this + 0x10);
  pEVar9 = *(Element **)(param_1 + 0x18);
  pEVar7 = pEVar8;
  do {
    pEVar6 = pEVar9;
    if (pEVar2 == pEVar7) {
LAB_00108a80:
      iVar1 = *(int *)pEVar8;
joined_r0x00108b43:
      if (iVar1 != 1) {
        _err_print_error("_erase_fix_rb","./core/templates/rb_set.h",0x1e3,
                         "Condition \"_data._nil->color != BLACK\" is true.",0,0);
        return;
      }
      return;
    }
    pEVar9 = param_1;
    if (*(int *)param_1 != 0) {
LAB_00108a29:
      pEVar7 = *(Element **)(pEVar9 + 0x10);
      if (*(int *)pEVar7 == 1) goto LAB_00108a36;
LAB_00108ae0:
      if (pEVar9 != *(Element **)(pEVar6 + 8)) {
        iVar1 = *(int *)pEVar6;
        pEVar7 = pEVar9;
        goto joined_r0x00108aef;
      }
      if (**(int **)(pEVar9 + 8) == 1) {
        *(int *)pEVar7 = 1;
        if (pEVar9 == pEVar8) {
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          pEVar8 = *(Element **)(this + 8);
          pEVar7 = *(Element **)(pEVar9 + 0x10);
        }
        else {
          *(int *)pEVar9 = 0;
        }
        pEVar2 = *(Element **)(pEVar7 + 8);
        *(Element **)(pEVar9 + 0x10) = pEVar2;
        if (pEVar2 != pEVar8) {
          *(Element **)(pEVar2 + 0x18) = pEVar9;
        }
        lVar3 = *(long *)(pEVar9 + 0x18);
        *(long *)(pEVar7 + 0x18) = lVar3;
        if (pEVar9 == *(Element **)(lVar3 + 8)) {
          *(Element **)(lVar3 + 8) = pEVar7;
        }
        else {
          *(Element **)(lVar3 + 0x10) = pEVar7;
        }
        *(Element **)(pEVar7 + 8) = pEVar9;
        *(Element **)(pEVar9 + 0x18) = pEVar7;
        pEVar9 = pEVar7;
      }
LAB_00108cd1:
      if ((pEVar9 == pEVar8) && (*(int *)pEVar6 == 0)) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar9 = *(int *)pEVar6;
      }
      puVar5 = *(undefined4 **)(pEVar9 + 8);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 8);
      pEVar2 = *(Element **)(lVar3 + 0x10);
      *(Element **)(pEVar6 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 0x10)) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      else {
        *(long *)(lVar4 + 8) = lVar3;
      }
      *(Element **)(lVar3 + 0x10) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_00108a80;
    }
    *(int *)param_1 = 1;
    if (pEVar6 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar6 = 0;
    }
    if (*(Element **)(pEVar6 + 8) != param_1) {
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar9 = *(Element **)(param_1 + 8);
      pEVar7 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar7;
      if (pEVar7 != pEVar8) {
        *(Element **)(pEVar7 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_00108a29;
    }
    pEVar9 = *(Element **)(param_1 + 0x10);
    *(Element **)(pEVar6 + 8) = pEVar9;
    if (pEVar9 != pEVar8) {
      *(Element **)(pEVar9 + 0x18) = pEVar6;
    }
    lVar3 = *(long *)(pEVar6 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    if (pEVar6 == *(Element **)(lVar3 + 0x10)) {
      *(Element **)(lVar3 + 0x10) = param_1;
    }
    else {
      *(Element **)(lVar3 + 8) = param_1;
    }
    *(Element **)(param_1 + 0x10) = pEVar6;
    *(Element **)(pEVar6 + 0x18) = param_1;
    pEVar7 = *(Element **)(pEVar9 + 0x10);
    if (*(int *)pEVar7 != 1) goto LAB_00108ae0;
LAB_00108a36:
    pEVar7 = *(Element **)(pEVar9 + 8);
    if (*(int *)pEVar7 != 1) {
      if (*(Element **)(pEVar6 + 8) == pEVar9) goto LAB_00108cd1;
      *(int *)pEVar7 = 1;
      if (pEVar9 == pEVar8) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
        pEVar7 = *(Element **)(pEVar9 + 8);
      }
      else {
        *(int *)pEVar9 = 0;
      }
      pEVar2 = *(Element **)(pEVar7 + 0x10);
      *(Element **)(pEVar9 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar9;
      }
      lVar3 = *(long *)(pEVar9 + 0x18);
      *(long *)(pEVar7 + 0x18) = lVar3;
      if (pEVar9 == *(Element **)(lVar3 + 0x10)) {
        *(Element **)(lVar3 + 0x10) = pEVar7;
      }
      else {
        *(Element **)(lVar3 + 8) = pEVar7;
      }
      *(Element **)(pEVar7 + 0x10) = pEVar9;
      *(Element **)(pEVar9 + 0x18) = pEVar7;
      iVar1 = *(int *)pEVar6;
joined_r0x00108aef:
      if ((iVar1 == 0) && (pEVar7 == pEVar8)) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar7 = iVar1;
      }
      puVar5 = *(undefined4 **)(pEVar7 + 0x10);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar2 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      iVar1 = *(int *)pEVar8;
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto joined_r0x00108b43;
    }
    if (pEVar9 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      iVar1 = *(int *)pEVar6;
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar9 = 0;
      iVar1 = *(int *)pEVar6;
    }
    if (iVar1 == 0) {
      *(int *)pEVar6 = 1;
      goto LAB_00108a80;
    }
    pEVar9 = *(Element **)(pEVar6 + 0x18);
    param_1 = *(Element **)(pEVar9 + 0x10);
    pEVar7 = pEVar6;
    if (param_1 == pEVar6) {
      param_1 = *(Element **)(pEVar9 + 8);
    }
  } while( true );
}



/* RBSet<TPPLPartition::ScanLineEdge, Comparator<TPPLPartition::ScanLineEdge>,
   DefaultAllocator>::_erase(RBSet<TPPLPartition::ScanLineEdge,
   Comparator<TPPLPartition::ScanLineEdge>, DefaultAllocator>::Element*) */

void __thiscall
RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>::_erase
          (RBSet<TPPLPartition::ScanLineEdge,Comparator<TPPLPartition::ScanLineEdge>,DefaultAllocator>
           *this,Element *param_1)

{
  int *piVar1;
  Element *pEVar2;
  Element *pEVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(this + 8);
  pEVar8 = param_1;
  if (piVar4 == piVar1) {
LAB_00108fa8:
    lVar6 = *(long *)(pEVar8 + 0x18);
    piVar4 = *(int **)(pEVar8 + 8);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 == pEVar8) goto LAB_00108fbd;
LAB_00108ecd:
    *(int **)(lVar6 + 8) = piVar4;
  }
  else {
    if (piVar1 != *(int **)(param_1 + 8)) {
      pEVar8 = *(Element **)(param_1 + 0x20);
      piVar4 = *(int **)(pEVar8 + 0x10);
      if (piVar1 == piVar4) goto LAB_00108fa8;
    }
    lVar6 = *(long *)(pEVar8 + 0x18);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 != pEVar8) goto LAB_00108ecd;
LAB_00108fbd:
    *(int **)(lVar6 + 0x10) = piVar4;
    pEVar9 = *(Element **)(lVar6 + 8);
  }
  if (*piVar4 == 0) {
    *(long *)(piVar4 + 6) = lVar6;
    *piVar4 = 1;
  }
  else if ((*(int *)pEVar8 == 1) && (lVar6 != *(long *)this)) {
    _erase_fix_rb(this,pEVar9);
  }
  if (pEVar8 != param_1) {
    pEVar9 = *(Element **)(this + 8);
    if (pEVar9 == pEVar8) {
      uVar7 = 0x1fb;
      pcVar5 = "Condition \"rp == _data._nil\" is true.";
      goto LAB_00108ff2;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pEVar2 = *(Element **)(param_1 + 0x10);
    pEVar3 = *(Element **)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 0x10) = uVar7;
    *(undefined8 *)(pEVar8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(int *)pEVar8 = *(int *)param_1;
    if (pEVar9 != pEVar2) {
      *(Element **)(pEVar2 + 0x18) = pEVar8;
    }
    if (pEVar9 != pEVar3) {
      *(Element **)(pEVar3 + 0x18) = pEVar8;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(Element **)(lVar6 + 0x10) == param_1) {
      *(Element **)(lVar6 + 0x10) = pEVar8;
    }
    else {
      *(Element **)(lVar6 + 8) = pEVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar6;
  }
  Memory::free_static(param_1,false);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  if (**(int **)(this + 8) != 0) {
    return;
  }
  uVar7 = 0x218;
  pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
LAB_00108ff2:
  _err_print_error("_erase","./core/templates/rb_set.h",uVar7,pcVar5,0,0);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<long*, __gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>
   >(long*, long*, __gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>) */

void std::__insertion_sort<long*,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
               (long *param_1,long *param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  size_t __n;
  long *plVar7;
  
  if (param_1 == param_2) {
    return;
  }
  plVar7 = param_1 + 1;
  do {
    if (param_2 == plVar7) {
      return;
    }
    while( true ) {
      lVar4 = *plVar7;
      pfVar1 = (float *)(param_3 + lVar4 * 0x18);
      pfVar2 = (float *)(param_3 + *param_1 * 0x18);
      fVar3 = pfVar1[1];
      if ((pfVar2[1] < fVar3) ||
         ((plVar6 = plVar7, fVar3 == pfVar2[1] && (*pfVar2 <= *pfVar1 && *pfVar1 != *pfVar2))))
      break;
      while( true ) {
        while( true ) {
          lVar5 = plVar6[-1];
          pfVar2 = (float *)(param_3 + lVar5 * 0x18);
          if (fVar3 <= pfVar2[1]) break;
          *plVar6 = lVar5;
          plVar6 = plVar6 + -1;
        }
        if ((fVar3 != pfVar2[1]) || (*pfVar1 < *pfVar2 || *pfVar1 == *pfVar2)) break;
        *plVar6 = lVar5;
        plVar6 = plVar6 + -1;
      }
      plVar7 = plVar7 + 1;
      *plVar6 = lVar4;
      if (param_2 == plVar7) {
        return;
      }
    }
    __n = (long)plVar7 - (long)param_1;
    if ((long)__n < 9) {
      if (__n == 8) {
        *plVar7 = *param_1;
      }
    }
    else {
      memmove((void *)((8 - __n) + (long)plVar7),param_1,__n);
    }
    *param_1 = lVar4;
    plVar7 = plVar7 + 1;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<long*, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter> >(long*, long, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>) */

void std::
     __adjust_heap<long*,long,long,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
               (long param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)(param_3 - 1) / 2;
  lVar6 = param_2;
  if (param_2 < lVar9) {
    do {
      lVar5 = (lVar6 + 1) * 2;
      lVar8 = (lVar6 + 1) * 0x10;
      plVar7 = (long *)(param_1 + lVar8);
      pfVar1 = (float *)(param_5 + *(long *)(param_1 + -8 + lVar8) * 0x18);
      pfVar2 = (float *)(param_5 + *plVar7 * 0x18);
      fVar3 = pfVar2[1];
      if ((pfVar1[1] < fVar3) ||
         ((fVar3 == pfVar1[1] && (fVar3 = *pfVar2, *pfVar1 <= fVar3 && fVar3 != *pfVar1)))) {
        lVar5 = lVar5 + -1;
        plVar7 = (long *)(param_1 + lVar5 * 8);
        *(long *)(param_1 + lVar6 * 8) = *plVar7;
        lVar6 = lVar5;
      }
      else {
        *(long *)(param_1 + lVar6 * 8) = *plVar7;
        lVar6 = lVar5;
      }
    } while (lVar6 < lVar9);
    if ((param_3 & 1) == 0) goto LAB_00109288;
  }
  else {
    plVar7 = (long *)(param_1 + param_2 * 8);
    if ((param_3 & 1) != 0) goto LAB_00109267;
LAB_00109288:
    if ((long)(param_3 - 2) / 2 == lVar6) {
      lVar9 = lVar6 * 2;
      lVar6 = lVar9 + 1;
      *plVar7 = *(long *)(param_1 + -8 + (lVar9 + 2) * 8);
      plVar7 = (long *)(param_1 + lVar6 * 8);
    }
  }
  if (param_2 < lVar6) {
    pfVar1 = (float *)(param_5 + param_4 * 0x18);
    fVar3 = pfVar1[1];
    do {
      lVar9 = (lVar6 + -1) / 2;
      plVar7 = (long *)(param_1 + lVar9 * 8);
      pfVar2 = (float *)(param_5 + *plVar7 * 0x18);
      fVar4 = pfVar2[1];
      if ((fVar4 <= fVar3) &&
         ((fVar4 != fVar3 || (fVar4 = *pfVar2, fVar4 < *pfVar1 || fVar4 == *pfVar1)))) {
        plVar7 = (long *)(param_1 + lVar6 * 8);
        break;
      }
      *(long *)(param_1 + lVar6 * 8) = *plVar7;
      lVar6 = lVar9;
    } while (param_2 < lVar9);
  }
LAB_00109267:
  *plVar7 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<long*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter> >(long*, long*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>) */

void std::
     __introsort_loop<long*,long,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
               (long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  
  lVar8 = (long)param_2 - (long)param_1;
  if (0x80 < lVar8) {
    plVar1 = param_1 + 1;
    plVar12 = param_2;
    if (param_3 != 0) {
      do {
        lVar11 = param_1[1];
        param_3 = param_3 + -1;
        lVar14 = param_1[lVar8 >> 4];
        lVar10 = lVar11 * 2;
        pfVar3 = (float *)(param_4 + lVar11 * 0x18);
        pfVar4 = (float *)(param_4 + lVar14 * 0x18);
        fVar15 = pfVar3[1];
        fVar6 = pfVar4[1];
        plVar9 = plVar12;
        param_2 = plVar1;
        if ((fVar6 < fVar15) || ((fVar15 == fVar6 && (*pfVar4 <= *pfVar3 && *pfVar3 != *pfVar4)))) {
          lVar13 = plVar12[-1];
          pfVar5 = (float *)(param_4 + lVar13 * 0x18);
          fVar7 = pfVar5[1];
          if ((fVar6 <= fVar7) && ((fVar6 != fVar7 || (*pfVar4 < *pfVar5 || *pfVar4 == *pfVar5)))) {
            if ((fVar7 < fVar15) ||
               ((fVar15 == fVar7 && (*pfVar5 <= *pfVar3 && *pfVar3 != *pfVar5)))) goto LAB_0010958e;
            goto LAB_001094b7;
          }
LAB_001093c7:
          lVar11 = *param_1;
          *param_1 = lVar14;
          param_1[lVar8 >> 4] = lVar11;
          lVar11 = *param_1;
          lVar10 = lVar11 * 2;
          fVar15 = *(float *)(param_4 + 4 + lVar11 * 0x18);
        }
        else {
          lVar13 = plVar12[-1];
          pfVar5 = (float *)(param_4 + lVar13 * 0x18);
          fVar7 = pfVar5[1];
          if ((fVar7 < fVar15) || ((fVar15 == fVar7 && (*pfVar5 <= *pfVar3 && *pfVar3 != *pfVar5))))
          {
LAB_001094b7:
            lVar8 = *param_1;
            *param_1 = lVar11;
            param_1[1] = lVar8;
          }
          else {
            if ((fVar6 <= fVar7) && ((fVar6 != fVar7 || (*pfVar4 < *pfVar5 || *pfVar4 == *pfVar5))))
            goto LAB_001093c7;
LAB_0010958e:
            lVar8 = *param_1;
            *param_1 = lVar13;
            plVar12[-1] = lVar8;
            lVar11 = *param_1;
            lVar10 = lVar11 * 2;
            fVar15 = *(float *)(param_4 + 4 + lVar11 * 0x18);
          }
        }
        while( true ) {
          pfVar3 = (float *)(param_4 + (lVar11 + lVar10) * 8);
          while( true ) {
            lVar8 = *param_2;
            pfVar4 = (float *)(param_4 + lVar8 * 0x18);
            fVar6 = pfVar4[1];
            if ((fVar6 <= fVar15) &&
               ((fVar6 != fVar15 || (fVar6 = *pfVar4, fVar6 < *pfVar3 || fVar6 == *pfVar3)))) break;
            param_2 = param_2 + 1;
          }
          do {
            do {
              plVar2 = plVar9 + -1;
              plVar9 = plVar9 + -1;
              pfVar4 = (float *)(param_4 + *plVar2 * 0x18);
            } while (pfVar4[1] < fVar15);
          } while ((pfVar4[1] == fVar15) && (*pfVar4 <= *pfVar3 && *pfVar3 != *pfVar4));
          if (plVar9 <= param_2) break;
          *param_2 = *plVar2;
          *plVar9 = lVar8;
          lVar11 = *param_1;
          lVar10 = lVar11 * 2;
          fVar15 = *(float *)(param_4 + 4 + lVar11 * 0x18);
          param_2 = param_2 + 1;
        }
        __introsort_loop<long*,long,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
                  (param_2,plVar12,param_3,param_4);
        lVar8 = (long)param_2 - (long)param_1;
        if (lVar8 < 0x81) {
          return;
        }
        plVar12 = param_2;
      } while (param_3 != 0);
    }
    for (lVar14 = (lVar8 >> 3) + -2 >> 1;
        __adjust_heap<long*,long,long,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
                  (param_1,lVar14,lVar8 >> 3,param_1[lVar14],param_4), lVar14 != 0;
        lVar14 = lVar14 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      lVar8 = *param_2;
      *param_2 = *param_1;
      __adjust_heap<long*,long,long,__gnu_cxx::__ops::_Iter_comp_iter<TPPLPartition::VertexSorter>>
                (param_1,0,(long)param_2 - (long)param_1 >> 3,lVar8,param_4);
    } while (8 < (long)param_2 - (long)param_1);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<TPPLPoly, DefaultAllocator>::~List() */

void __thiscall List<TPPLPoly,DefaultAllocator>::~List(List<TPPLPoly,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


