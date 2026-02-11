
/* JPH::TriangleSplitterMorton::Split(JPH::TriangleSplitter::Range const&,
   JPH::TriangleSplitter::Range&, JPH::TriangleSplitter::Range&) */

uint __thiscall
JPH::TriangleSplitterMorton::Split
          (TriangleSplitterMorton *this,Range *param_1,Range *param_2,Range *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar9 = 0x20;
  lVar6 = *(long *)(this + 0x40);
  uVar1 = *(uint *)param_1;
  uVar11 = (ulong)uVar1;
  lVar7 = *(long *)(this + 0x58);
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(lVar7 + (ulong)*(uint *)(lVar6 + uVar11 * 4) * 4);
  uVar10 = *(uint *)(lVar7 + (ulong)*(uint *)(lVar6 + (ulong)(uVar2 - 1) * 4) * 4);
  uVar8 = uVar3 ^ uVar10;
  if (uVar3 != uVar10) {
    uVar9 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    uVar9 = uVar9 ^ 0x1f;
  }
  uVar10 = uVar2 - uVar1;
  do {
    uVar10 = uVar10 + 1 >> 1;
    uVar8 = (int)uVar11 + uVar10;
    if (uVar8 < uVar2) {
      uVar4 = *(uint *)(lVar7 + (ulong)*(uint *)(lVar6 + (ulong)uVar8 * 4) * 4);
      uVar12 = 0x20;
      uVar14 = uVar3 ^ uVar4;
      if (uVar3 != uVar4) {
        uVar12 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar12 == 0; uVar12 = uVar12 - 1) {
          }
        }
        uVar12 = uVar12 ^ 0x1f;
      }
      if (uVar9 < uVar12) {
        uVar11 = (ulong)uVar8;
      }
    }
  } while (1 < uVar10);
  iVar13 = (int)uVar11 + 1;
  *(ulong *)param_2 = CONCAT44(iVar13,uVar1);
  iVar5 = *(int *)(param_1 + 4);
  *(ulong *)param_3 = CONCAT44(iVar5,iVar13);
  return CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)(param_2 + 4) != *(int *)param_2) &
         CONCAT31((int3)((uint)iVar13 >> 8),iVar13 != iVar5);
}



/* void JPH::QuickSort<unsigned int*,
   JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&)::{lambda(unsigned int, unsigned
   int)#1}>(unsigned int*, unsigned int*,
   JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&)::{lambda(unsigned int, unsigned int)#1}) */

void JPH::
     QuickSort<unsigned_int*,JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&)::_lambda(unsigned_int,unsigned_int)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (4 < lVar5) {
    if (0x80 < lVar5) {
      lVar6 = *(long *)(param_3 + 0x10);
      puVar11 = param_2;
      do {
        uVar4 = *param_1;
        puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
        puVar1 = (uint *)(((lVar5 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
        lVar5 = (long)puVar11 + (-4 - (long)param_1) >> 5;
        uVar12 = *puVar7;
        puVar2 = param_1 + lVar5;
        puVar10 = param_1 + lVar5 * 2;
        if (*(uint *)(lVar6 + (ulong)*puVar2 * 4) < uVar12) {
          *param_1 = *puVar2;
          *puVar2 = uVar4;
          uVar4 = *param_1;
          puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
          uVar12 = *puVar7;
        }
        uVar8 = *puVar10;
        uVar9 = *(uint *)(lVar6 + (ulong)uVar8 * 4);
        if (uVar9 < uVar12) {
          *param_1 = uVar8;
          *puVar10 = uVar4;
          uVar9 = *puVar7;
          uVar8 = uVar4;
        }
        uVar4 = *puVar2;
        if (uVar9 < *(uint *)(lVar6 + (ulong)uVar4 * 4)) {
          *puVar2 = uVar8;
          *puVar10 = uVar4;
        }
        puVar7 = puVar1 + lVar5;
        puVar13 = puVar1 + -lVar5;
        uVar4 = *puVar13;
        puVar10 = (uint *)(lVar6 + (ulong)uVar4 * 4);
        uVar12 = *puVar10;
        if (*(uint *)(lVar6 + (ulong)*puVar1 * 4) < uVar12) {
          *puVar13 = *puVar1;
          *puVar1 = uVar4;
          uVar4 = *puVar13;
          puVar10 = (uint *)(lVar6 + (ulong)uVar4 * 4);
          uVar12 = *puVar10;
        }
        uVar8 = *puVar7;
        uVar9 = *(uint *)(lVar6 + (ulong)uVar8 * 4);
        if (uVar9 < uVar12) {
          *puVar13 = uVar8;
          *puVar7 = uVar4;
          uVar9 = *puVar10;
          uVar8 = uVar4;
        }
        uVar4 = *puVar1;
        if (uVar9 < *(uint *)(lVar6 + (ulong)uVar4 * 4)) {
          *puVar1 = uVar8;
          *puVar7 = uVar4;
        }
        puVar10 = puVar11 + (-1 - lVar5);
        puVar13 = puVar11 + lVar5 * -2 + -1;
        uVar4 = *puVar13;
        puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
        uVar12 = *puVar7;
        if (*(uint *)(lVar6 + (ulong)*puVar10 * 4) < uVar12) {
          *puVar13 = *puVar10;
          *puVar10 = uVar4;
          uVar4 = *puVar13;
          puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
          uVar12 = *puVar7;
        }
        uVar8 = puVar11[-1];
        uVar9 = *(uint *)(lVar6 + (ulong)uVar8 * 4);
        if (uVar9 < uVar12) {
          *puVar13 = uVar8;
          puVar11[-1] = uVar4;
          uVar9 = *puVar7;
          uVar8 = uVar4;
        }
        uVar4 = *puVar10;
        if (uVar9 < *(uint *)(lVar6 + (ulong)uVar4 * 4)) {
          *puVar10 = uVar8;
          puVar11[-1] = uVar4;
        }
        uVar4 = *puVar2;
        puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
        uVar12 = *puVar7;
        if (*(uint *)(lVar6 + (ulong)*puVar1 * 4) < uVar12) {
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
          uVar4 = *puVar2;
          puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
          uVar12 = *puVar7;
        }
        uVar8 = *puVar10;
        uVar9 = *(uint *)(lVar6 + (ulong)uVar8 * 4);
        if (uVar9 < uVar12) {
          *puVar2 = uVar8;
          *puVar10 = uVar4;
          uVar9 = *puVar7;
          uVar8 = uVar4;
        }
        uVar4 = *puVar1;
        puVar7 = (uint *)(lVar6 + (ulong)uVar4 * 4);
        uVar12 = *puVar7;
        puVar2 = puVar11;
        puVar13 = param_1;
        if (uVar9 < uVar12) {
          *puVar1 = uVar8;
          *puVar10 = uVar4;
          puVar7 = (uint *)(lVar6 + (ulong)*puVar1 * 4);
          uVar12 = *puVar7;
        }
        while( true ) {
          do {
            puVar10 = puVar13;
            uVar4 = *puVar10;
            puVar13 = puVar10 + 1;
          } while (*(uint *)(lVar6 + (ulong)uVar4 * 4) < uVar12);
          do {
            param_2 = puVar2;
            puVar2 = param_2 + -1;
          } while (uVar12 < *(uint *)(lVar6 + (ulong)param_2[-1] * 4));
          if (puVar2 <= puVar10) break;
          *puVar10 = param_2[-1];
          *puVar2 = uVar4;
          uVar12 = *puVar7;
        }
        lVar5 = (long)param_2 - (long)param_1;
        lVar14 = (long)puVar11 - (long)param_2;
        if (lVar5 < lVar14) {
          QuickSort<unsigned_int*,JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&)::_lambda(unsigned_int,unsigned_int)_1_>
                    (param_1,param_2,param_3);
          param_1 = param_2;
          param_2 = puVar11;
          lVar5 = lVar14;
        }
        else {
          QuickSort<unsigned_int*,JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&)::_lambda(unsigned_int,unsigned_int)_1_>
                    (param_2,puVar11,param_3);
        }
        if (lVar5 < 5) {
          return;
        }
        puVar11 = param_2;
      } while (0x80 < lVar5);
    }
    if ((param_2 != param_1) && (puVar11 = param_1 + 1, param_2 != puVar11)) {
      lVar6 = 0;
      lVar5 = *(long *)(param_3 + 0x10);
      do {
        while( true ) {
          uVar4 = *puVar11;
          puVar7 = (uint *)(lVar5 + (ulong)uVar4 * 4);
          uVar12 = *puVar7;
          if (uVar12 < *(uint *)(lVar5 + (ulong)*param_1 * 4)) break;
          uVar3 = (ulong)puVar11[-1];
          puVar2 = puVar11;
          if (uVar12 < *(uint *)(lVar5 + uVar3 * 4)) {
            do {
              puVar10 = puVar2 + -1;
              *puVar2 = (uint)uVar3;
              uVar3 = (ulong)puVar2[-2];
              puVar2 = puVar10;
            } while (*puVar7 < *(uint *)(lVar5 + uVar3 * 4));
            *puVar10 = uVar4;
          }
          else {
            *puVar11 = uVar4;
          }
          puVar11 = puVar11 + 1;
          lVar6 = lVar6 + -4;
          if (param_2 == puVar11) {
            return;
          }
        }
        if (puVar11 != param_1) {
          memmove((void *)((long)puVar11 + lVar6),param_1,4 - lVar6);
        }
        puVar11 = puVar11 + 1;
        *param_1 = uVar4;
        lVar6 = lVar6 + -4;
      } while (param_2 != puVar11);
    }
  }
  return;
}



/* JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&) */

void __thiscall
JPH::TriangleSplitterMorton::TriangleSplitterMorton
          (TriangleSplitterMorton *this,Array *param_1,Array *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  JPH::TriangleSplitter::TriangleSplitter((TriangleSplitter *)this,param_1,param_2);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  uVar10 = *(ulong *)param_2;
  *(undefined ***)this = &PTR__TriangleSplitterMorton_001008d8;
  if (uVar10 == 0) {
    *(undefined8 *)(this + 0x48) = 0;
  }
  else {
    lVar9 = *(long *)(this + 0x28);
    uVar8 = 0;
    auVar13._4_4_ = _LC2;
    auVar13._0_4_ = _LC2;
    auVar13._8_4_ = _LC2;
    auVar13._12_4_ = _LC2;
    auVar15._4_4_ = _LC4;
    auVar15._0_4_ = _LC4;
    auVar15._8_4_ = _LC4;
    auVar15._12_4_ = _LC4;
    do {
      lVar2 = uVar8 * 0xc;
      lVar1 = uVar8 * 0xc;
      uVar3 = *(undefined4 *)(lVar9 + 8 + uVar8 * 0xc);
      uVar8 = (ulong)((int)uVar8 + 1);
      auVar11._4_4_ = *(undefined4 *)(lVar9 + 4 + lVar2);
      auVar11._0_4_ = *(undefined4 *)(lVar9 + lVar1);
      auVar11._8_4_ = uVar3;
      auVar11._12_4_ = uVar3;
      auVar15 = minps(auVar15,auVar11);
      auVar13 = maxps(auVar13,auVar11);
    } while (uVar8 < uVar10);
    fVar14 = auVar15._0_4_;
    fVar16 = auVar15._4_4_;
    fVar17 = auVar15._8_4_;
    fVar18 = auVar15._12_4_;
    uVar19 = (int)-(uint)(auVar13._0_4_ - fVar14 < _LC6) >> 0x1f;
    uVar20 = (int)-(uint)(auVar13._4_4_ - fVar16 < _LC6) >> 0x1f;
    uVar21 = (int)-(uint)(auVar13._8_4_ - fVar17 < _LC6) >> 0x1f;
    uVar22 = (int)-(uint)(auVar13._12_4_ - fVar18 < _LC6) >> 0x1f;
    auVar23._0_4_ = (uint)(_LC6 + fVar14) & uVar19;
    auVar23._4_4_ = (uint)(_LC6 + fVar16) & uVar20;
    auVar23._8_4_ = (uint)(_LC6 + fVar17) & uVar21;
    auVar23._12_4_ = (uint)(_LC6 + fVar18) & uVar22;
    auVar5._4_4_ = ~uVar20 & (uint)auVar13._4_4_;
    auVar5._0_4_ = ~uVar19 & (uint)auVar13._0_4_;
    auVar5._8_4_ = ~uVar21 & (uint)auVar13._8_4_;
    auVar5._12_4_ = ~uVar22 & (uint)auVar13._12_4_;
    auVar23 = auVar23 | auVar5;
    lVar9 = (*Reallocate)(0,0,uVar10 * 4);
    uVar8 = *(ulong *)param_2;
    *(ulong *)(this + 0x50) = uVar10;
    local_48 = auVar23._0_4_;
    fStack_44 = auVar23._4_4_;
    fStack_40 = auVar23._8_4_;
    fStack_3c = auVar23._12_4_;
    *(long *)(this + 0x58) = lVar9;
    *(ulong *)(this + 0x48) = uVar10;
    fVar7 = _LC8;
    fVar6 = _LC7;
    if (uVar8 != 0) {
      auVar24._0_4_ = local_48 - fVar14;
      auVar24._4_4_ = fStack_44 - fVar16;
      auVar24._8_4_ = fStack_40 - fVar17;
      auVar24._12_4_ = fStack_3c - fVar18;
      lVar1 = *(long *)(this + 0x28);
      uVar10 = 0;
      do {
        fVar4 = *(float *)(lVar1 + 8 + uVar10 * 0xc);
        auVar12._0_4_ = *(float *)(lVar1 + uVar10 * 0xc) - fVar14;
        auVar12._4_4_ = *(float *)(lVar1 + 4 + uVar10 * 0xc) - fVar16;
        auVar12._8_4_ = fVar4 - fVar17;
        auVar12._12_4_ = fVar4 - fVar18;
        auVar13 = divps(auVar12,auVar24);
        *(uint *)(lVar9 + uVar10 * 4) =
             ((((((int)(long)(auVar13._0_4_ * fVar6 + fVar7) * 0x10001 & 0xff0000ffU) * 0x101 &
                0xf00f00f) * 0x11 & 0xc30c30c3) * 5 & 0x9249249) << 2 |
             ((((int)(long)(auVar13._4_4_ * fVar6 + fVar7) * 0x10001 & 0xff0000ffU) * 0x101 &
              0xf00f00f) * 0x11 & 0xc30c30c3) * 10 & 0x92492492) +
             (((((int)(long)(auVar13._8_4_ * fVar6 + fVar7) * 0x10001 & 0xff0000ffU) * 0x101 &
               0xf00f00f) * 0x11 & 0xc30c30c3) * 5 & 0x49249249);
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (uVar10 < uVar8);
    }
  }
  QuickSort<unsigned_int*,JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&)::_lambda(unsigned_int,unsigned_int)_1_>
            (*(long *)(this + 0x40),*(long *)(this + 0x40) + *(long *)(this + 0x30) * 4,this + 0x48)
  ;
  return;
}



/* JPH::TriangleSplitterMorton::GetStats(JPH::TriangleSplitter::Stats&) const */

void __thiscall JPH::TriangleSplitterMorton::GetStats(TriangleSplitterMorton *this,Stats *param_1)

{
  *(char **)param_1 = "TriangleSplitterMorton";
  return;
}



/* JPH::TriangleSplitterMorton::~TriangleSplitterMorton() */

void __thiscall JPH::TriangleSplitterMorton::~TriangleSplitterMorton(TriangleSplitterMorton *this)

{
  *(undefined ***)this = &PTR__TriangleSplitterMorton_001008d8;
  if (*(long *)(this + 0x58) != 0) {
    *(undefined8 *)(this + 0x48) = 0;
    (*Free)();
  }
  *(undefined **)this = &DAT_001008a8;
  if (*(long *)(this + 0x40) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0010073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TriangleSplitterMorton::~TriangleSplitterMorton() */

void __thiscall JPH::TriangleSplitterMorton::~TriangleSplitterMorton(TriangleSplitterMorton *this)

{
  *(undefined ***)this = &PTR__TriangleSplitterMorton_001008d8;
  if (*(long *)(this + 0x58) != 0) {
    *(undefined8 *)(this + 0x48) = 0;
    (*Free)();
  }
  *(undefined **)this = &DAT_001008a8;
  if (*(long *)(this + 0x40) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
    (*Free)();
  }
  operator_delete(this,0x60);
  return;
}



/* JPH::TriangleSplitterMorton::TriangleSplitterMorton(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&) */

void JPH::TriangleSplitterMorton::_GLOBAL__sub_I_TriangleSplitterMorton(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC10;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleSplitterMorton::~TriangleSplitterMorton() */

void __thiscall JPH::TriangleSplitterMorton::~TriangleSplitterMorton(TriangleSplitterMorton *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


