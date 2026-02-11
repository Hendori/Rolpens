
/* JPH::TriangleSplitter::TriangleSplitter(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >
   const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&) */

void __thiscall
JPH::TriangleSplitter::TriangleSplitter(TriangleSplitter *this,Array *param_1,Array *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  lVar6 = *(long *)param_2;
  *(undefined **)this = &DAT_00100318;
  *(Array **)(this + 8) = param_1;
  *(Array **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (lVar6 == 0) {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    uVar11 = (*Reallocate)(0,0,lVar6 * 4);
    uVar12 = *(ulong *)param_2;
    *(long *)(this + 0x38) = lVar6;
    *(undefined8 *)(this + 0x40) = uVar11;
    *(long *)(this + 0x30) = lVar6;
    uVar16 = uVar12;
    if (*(ulong *)(this + 0x20) < uVar12) {
      uVar11 = (*Reallocate)(*(undefined8 *)(this + 0x28),*(ulong *)(this + 0x20) * 0xc,uVar12 * 0xc
                            );
      *(ulong *)(this + 0x20) = uVar12;
      uVar16 = *(ulong *)param_2;
      *(undefined8 *)(this + 0x28) = uVar11;
    }
    *(ulong *)(this + 0x18) = uVar12;
    uVar10 = _LC1;
    if (uVar16 != 0) {
      lVar6 = *(long *)(this + 0x40);
      uVar12 = 0;
      lVar7 = *(long *)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(this + 0x28);
      do {
        *(int *)(lVar6 + uVar12 * 4) = (int)uVar12;
        puVar1 = (uint *)(lVar7 + uVar12 * 0x14);
        puVar2 = (undefined8 *)(lVar9 + uVar12 * 0xc);
        uVar13 = (ulong)puVar1[2];
        uVar15 = (ulong)puVar1[1];
        uVar14 = (ulong)*puVar1;
        fVar3 = *(float *)(lVar8 + 8 + uVar15 * 0xc);
        fVar4 = *(float *)(lVar8 + 8 + uVar14 * 0xc);
        fVar5 = *(float *)(lVar8 + 8 + uVar13 * 0xc);
        auVar17._0_4_ =
             *(float *)(lVar8 + uVar15 * 0xc) + *(float *)(lVar8 + uVar14 * 0xc) +
             *(float *)(lVar8 + uVar13 * 0xc);
        auVar17._4_4_ =
             *(float *)(lVar8 + 4 + uVar15 * 0xc) + *(float *)(lVar8 + 4 + uVar14 * 0xc) +
             *(float *)(lVar8 + 4 + uVar13 * 0xc);
        auVar17._8_4_ = fVar3 + fVar4 + fVar5;
        auVar17._12_4_ = fVar3 + fVar4 + fVar5;
        auVar18._4_4_ = uVar10;
        auVar18._0_4_ = uVar10;
        auVar18._8_4_ = uVar10;
        auVar18._12_4_ = uVar10;
        auVar18 = divps(auVar17,auVar18);
        *puVar2 = auVar18._0_8_;
        *(int *)(puVar2 + 1) = auVar18._8_4_;
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < uVar16);
      return;
    }
  }
  return;
}



/* JPH::TriangleSplitter::SplitInternal(JPH::TriangleSplitter::Range const&, unsigned int, float,
   JPH::TriangleSplitter::Range&, JPH::TriangleSplitter::Range&) */

uint __thiscall
JPH::TriangleSplitter::SplitInternal
          (TriangleSplitter *this,Range *param_1,uint param_2,float param_3,Range *param_4,
          Range *param_5)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = (ulong)*(uint *)(param_1 + 4);
  uVar10 = (ulong)*(uint *)param_1;
LAB_001001b8:
  while (uVar11 = uVar10, (uint)uVar10 < (uint)uVar6) {
    lVar5 = *(long *)(this + 0x40);
    puVar7 = (uint *)(lVar5 + uVar10 * 4);
    do {
      pfVar1 = (float *)(*(long *)(this + 0x28) + (ulong)*puVar7 * 0xc + (long)(int)param_2 * 4);
      uVar8 = (uint)uVar11;
      if (param_3 < *pfVar1 || param_3 == *pfVar1) goto LAB_001001f0;
      uVar10 = (ulong)(uVar8 + 1);
      puVar7 = puVar7 + 1;
      uVar11 = uVar10;
    } while ((uint)uVar6 != uVar8 + 1);
  }
LAB_00100228:
  iVar9 = (int)uVar11;
  *(ulong *)param_4 = CONCAT44(iVar9,*(undefined4 *)param_1);
  iVar4 = *(int *)(param_1 + 4);
  *(ulong *)param_5 = CONCAT44(iVar4,iVar9);
  return CONCAT31((int3)((uint)*(int *)param_4 >> 8),*(int *)(param_4 + 4) != *(int *)param_4) &
         (uint)CONCAT71((int7)(uVar11 >> 8),iVar4 != iVar9);
  while( true ) {
    uVar6 = (ulong)((uint)uVar6 - 1);
    puVar7 = (uint *)(lVar5 + uVar6 * 4);
    uVar3 = *puVar7;
    if (*(float *)(*(long *)(this + 0x28) + (ulong)uVar3 * 0xc + (long)(int)param_2 * 4) < param_3)
    break;
LAB_001001f0:
    if ((uint)uVar6 <= uVar8) goto LAB_00100228;
  }
  uVar10 = (ulong)(uVar8 + 1);
  puVar2 = (uint *)(lVar5 + uVar11 * 4);
  uVar8 = *puVar2;
  *puVar2 = uVar3;
  *puVar7 = uVar8;
  goto LAB_001001b8;
}



/* JPH::TriangleSplitter::TriangleSplitter(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >
   const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&) */

void JPH::TriangleSplitter::_GLOBAL__sub_I_TriangleSplitter(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
  }
  return;
}


