
/* JPH::TriangleSplitterMean::Split(JPH::TriangleSplitter::Range const&,
   JPH::TriangleSplitter::Range&, JPH::TriangleSplitter::Range&) */

void JPH::TriangleSplitterMean::Split(Range *param_1,Range *param_2,Range *param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_28 [6];
  long local_10;
  
  uVar6 = *(uint *)(param_2 + 4);
  uVar2 = *(uint *)param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar11 = _LC1 / (float)(uVar6 - uVar2);
  if (uVar2 < uVar6) {
    lVar3 = *(long *)(param_1 + 0x28);
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    fVar18 = 0.0;
    puVar7 = (uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar2 * 4);
    puVar1 = (uint *)(*(long *)(param_1 + 0x40) + 4 +
                     ((ulong)((uVar6 - 1) - uVar2) + (ulong)uVar2) * 4);
    puVar4 = puVar7;
    do {
      uVar5 = (ulong)*puVar4;
      puVar4 = puVar4 + 1;
      fVar13 = *(float *)(lVar3 + 8 + uVar5 * 0xc);
      fVar12 = fVar12 + *(float *)(lVar3 + uVar5 * 0xc);
      fVar14 = fVar14 + *(float *)(lVar3 + 4 + uVar5 * 0xc);
      fVar16 = fVar16 + fVar13;
      fVar18 = fVar18 + fVar13;
    } while (puVar1 != puVar4);
    local_28[0] = fVar12 * fVar11;
    local_28[1] = fVar14 * fVar11;
    local_28[2] = fVar16 * fVar11;
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar17 = 0.0;
    do {
      uVar5 = (ulong)*puVar7;
      puVar7 = puVar7 + 1;
      fVar8 = *(float *)(lVar3 + uVar5 * 0xc) - fVar12 * fVar11;
      fVar9 = *(float *)(lVar3 + 4 + uVar5 * 0xc) - fVar14 * fVar11;
      fVar10 = *(float *)(lVar3 + 8 + uVar5 * 0xc) - fVar16 * fVar11;
      fVar13 = fVar13 + fVar8 * fVar8;
      fVar15 = fVar15 + fVar9 * fVar9;
      fVar17 = fVar17 + fVar10 * fVar10;
    } while (puVar7 != puVar1);
    fVar13 = fVar13 * fVar11;
    fVar12 = fVar15 * fVar11;
    fVar14 = fVar17 * fVar11;
    local_28[3] = fVar18 * fVar11;
  }
  else {
    fVar13 = fVar11 * 0.0;
    local_28[0] = fVar13;
    local_28[1] = fVar13;
    local_28[2] = fVar13;
    fVar12 = fVar13;
    fVar14 = fVar13;
    local_28[3] = fVar13;
  }
  if (fVar13 <= fVar12) {
    uVar6 = (fVar12 < fVar14) + 1;
  }
  else {
    uVar6 = (uint)(fVar13 < fVar14) * 2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    JPH::TriangleSplitter::SplitInternal
              (param_1,(uint)param_2,local_28[(long)(ulong)uVar6],(Range *)(ulong)uVar6,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleSplitterMean::TriangleSplitterMean(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&) */

void __thiscall
JPH::TriangleSplitterMean::TriangleSplitterMean
          (TriangleSplitterMean *this,Array *param_1,Array *param_2)

{
  JPH::TriangleSplitter::TriangleSplitter((TriangleSplitter *)this,param_1,param_2);
  *(undefined ***)this = &PTR__TriangleSplitterMean_00100358;
  return;
}



/* JPH::TriangleSplitterMean::GetStats(JPH::TriangleSplitter::Stats&) const */

void __thiscall JPH::TriangleSplitterMean::GetStats(TriangleSplitterMean *this,Stats *param_1)

{
  *(char **)param_1 = "TriangleSplitterMean";
  return;
}



/* JPH::TriangleSplitterMean::~TriangleSplitterMean() */

void __thiscall JPH::TriangleSplitterMean::~TriangleSplitterMean(TriangleSplitterMean *this)

{
  *(undefined **)this = &DAT_00100328;
  if (*(long *)(this + 0x40) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x001001db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TriangleSplitterMean::~TriangleSplitterMean() */

void __thiscall JPH::TriangleSplitterMean::~TriangleSplitterMean(TriangleSplitterMean *this)

{
  *(undefined **)this = &DAT_00100328;
  if (*(long *)(this + 0x40) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
    (*Free)();
  }
  operator_delete(this,0x48);
  return;
}



/* JPH::TriangleSplitterMean::TriangleSplitterMean(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&) */

void JPH::TriangleSplitterMean::_GLOBAL__sub_I_TriangleSplitterMean(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleSplitterMean::~TriangleSplitterMean() */

void __thiscall JPH::TriangleSplitterMean::~TriangleSplitterMean(TriangleSplitterMean *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


