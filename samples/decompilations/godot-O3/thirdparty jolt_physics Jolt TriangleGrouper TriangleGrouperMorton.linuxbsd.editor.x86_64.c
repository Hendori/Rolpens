
/* void JPH::QuickSort<unsigned int*, JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, int, JPH::Array<unsigned int,
   JPH::STLAllocator<unsigned int> >&)::{lambda(unsigned int, unsigned int)#1}>(unsigned int*,
   unsigned int*, JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, int, JPH::Array<unsigned int,
   JPH::STLAllocator<unsigned int> >&)::{lambda(unsigned int, unsigned int)#1}) */

void JPH::
     QuickSort<unsigned_int*,JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
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
          QuickSort<unsigned_int*,JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
                    (param_1,param_2,param_3);
          param_1 = param_2;
          param_2 = puVar11;
          lVar5 = lVar14;
        }
        else {
          QuickSort<unsigned_int*,JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
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



/* JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >
   const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&, int,
   JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&) */

void __thiscall
JPH::TriangleGrouperMorton::Group
          (TriangleGrouperMorton *this,Array *param_1,Array *param_2,int param_3,Array *param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  undefined4 in_register_0000000c;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  int *local_48;
  long local_40;
  
  uVar5 = _LC3;
  uVar1 = *(uint *)param_2;
  uVar18 = (ulong)uVar1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 == 0) {
    *(undefined8 *)param_4 = 0;
    pauVar9 = (undefined1 (*) [16])0x0;
    auVar23._0_8_ = CONCAT44(uVar5,uVar5);
    auVar23._8_4_ = (float)uVar5;
    auVar23._12_4_ = (float)uVar5;
    auVar26._8_4_ = uVar5;
    auVar26._0_8_ = auVar23._0_8_;
    auVar26._12_4_ = uVar5;
    auVar22._4_4_ = _LC1;
    auVar22._0_4_ = _LC1;
    auVar22._8_4_ = _LC1;
    auVar22._12_4_ = _LC1;
  }
  else {
    pauVar9 = (undefined1 (*) [16])
              (*Reallocate)(0,0,uVar18 << 4,CONCAT44(in_register_0000000c,param_3));
    if (*(ulong *)(param_4 + 8) < uVar18) {
      uVar10 = (*Reallocate)(*(undefined8 *)(param_4 + 0x10),*(ulong *)(param_4 + 8) << 2,uVar18 * 4
                            );
      *(ulong *)(param_4 + 8) = uVar18;
      *(undefined8 *)(param_4 + 0x10) = uVar10;
    }
    lVar17 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_4 + 0x10);
    *(ulong *)param_4 = uVar18;
    uVar5 = _LC5;
    uVar13 = 0;
    puVar12 = *(uint **)(param_2 + 0x10);
    do {
      uVar14 = (ulong)puVar12[2];
      uVar15 = (ulong)puVar12[1];
      uVar16 = (ulong)*puVar12;
      fVar25 = *(float *)(lVar17 + 8 + uVar15 * 0xc);
      fVar27 = *(float *)(lVar17 + 8 + uVar16 * 0xc);
      fVar28 = *(float *)(lVar17 + 8 + uVar14 * 0xc);
      auVar21._0_4_ =
           *(float *)(lVar17 + uVar15 * 0xc) + *(float *)(lVar17 + uVar16 * 0xc) +
           *(float *)(lVar17 + uVar14 * 0xc);
      auVar21._4_4_ =
           *(float *)(lVar17 + 4 + uVar15 * 0xc) + *(float *)(lVar17 + 4 + uVar16 * 0xc) +
           *(float *)(lVar17 + 4 + uVar14 * 0xc);
      auVar21._8_4_ = fVar25 + fVar27 + fVar28;
      auVar21._12_4_ = fVar25 + fVar27 + fVar28;
      auVar20._4_4_ = uVar5;
      auVar20._0_4_ = uVar5;
      auVar20._8_4_ = uVar5;
      auVar20._12_4_ = uVar5;
      auVar20 = divps(auVar21,auVar20);
      pauVar9[uVar13] = auVar20;
      *(int *)(lVar2 + uVar13 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 5;
    } while (uVar18 != uVar13);
    auVar22._4_4_ = _LC1;
    auVar22._0_4_ = _LC1;
    auVar22._8_4_ = _LC1;
    auVar22._12_4_ = _LC1;
    auVar26._4_4_ = _LC3;
    auVar26._0_4_ = _LC3;
    auVar26._8_4_ = _LC3;
    auVar26._12_4_ = _LC3;
    pauVar11 = pauVar9;
    do {
      auVar26 = minps(auVar26,*pauVar11);
      auVar22 = maxps(auVar22,*pauVar11);
      pauVar11 = pauVar11 + 1;
    } while (pauVar11 != pauVar9 + uVar18);
    auVar23._0_4_ = auVar26._0_4_ + _LC7;
    auVar23._4_4_ = auVar26._4_4_ + _LC7;
    auVar23._8_4_ = auVar26._8_4_ + _LC7;
    auVar23._12_4_ = auVar26._12_4_ + _LC7;
  }
  local_48 = (int *)0x0;
  fVar25 = auVar26._0_4_;
  fVar27 = auVar26._4_4_;
  fVar28 = auVar26._8_4_;
  fVar29 = auVar26._12_4_;
  uVar30 = (int)-(uint)(auVar22._0_4_ - fVar25 < _LC7) >> 0x1f;
  uVar31 = (int)-(uint)(auVar22._4_4_ - fVar27 < _LC7) >> 0x1f;
  uVar32 = (int)-(uint)(auVar22._8_4_ - fVar28 < _LC7) >> 0x1f;
  uVar33 = (int)-(uint)(auVar22._12_4_ - fVar29 < _LC7) >> 0x1f;
  auVar24._0_4_ = auVar23._0_4_ & uVar30;
  auVar24._4_4_ = auVar23._4_4_ & uVar31;
  auVar24._8_4_ = auVar23._8_4_ & uVar32;
  auVar24._12_4_ = auVar23._12_4_ & uVar33;
  auVar3._4_4_ = ~uVar31 & (uint)auVar22._4_4_;
  auVar3._0_4_ = ~uVar30 & (uint)auVar22._0_4_;
  auVar3._8_4_ = ~uVar32 & (uint)auVar22._8_4_;
  auVar3._12_4_ = ~uVar33 & (uint)auVar22._12_4_;
  auVar24 = auVar24 | auVar3;
  local_58 = (undefined1  [16])0x0;
  if (uVar18 == 0) {
    local_58._0_8_ = 0;
    local_58._8_8_ = 0;
    lVar17 = 0;
  }
  else {
    local_48 = (int *)(*Reallocate)(0,0,uVar18 * 4);
    fVar7 = _LC9;
    fVar6 = _LC8;
    local_68 = auVar24._0_4_;
    fStack_64 = auVar24._4_4_;
    fStack_60 = auVar24._8_4_;
    fStack_5c = auVar24._12_4_;
    lVar17 = *(long *)param_4 << 2;
    local_58._12_4_ = 0;
    local_58._8_4_ = uVar1;
    piVar8 = local_48;
    pauVar11 = pauVar9;
    do {
      auVar19._0_4_ = *(float *)*pauVar11 - fVar25;
      auVar19._4_4_ = *(float *)(*pauVar11 + 4) - fVar27;
      auVar19._8_4_ = *(float *)(*pauVar11 + 8) - fVar28;
      auVar19._12_4_ = *(float *)(*pauVar11 + 0xc) - fVar29;
      auVar4._4_4_ = fStack_64 - fVar27;
      auVar4._0_4_ = local_68 - fVar25;
      auVar4._8_4_ = fStack_60 - fVar28;
      auVar4._12_4_ = fStack_5c - fVar29;
      auVar20 = divps(auVar19,auVar4);
      pauVar11 = pauVar11 + 1;
      *piVar8 = ((((((int)(long)(auVar20._0_4_ * fVar6 + fVar7) * 0x10001 & 0xff0000ffU) * 0x101 &
                   0xf00f00f) * 0x11 & 0xc30c30c3) * 5 & 0x9249249) << 2 |
                ((((int)(long)(auVar20._4_4_ * fVar6 + fVar7) * 0x10001 & 0xff0000ffU) * 0x101 &
                 0xf00f00f) * 0x11 & 0xc30c30c3) * 10 & 0x92492492) +
                (((((int)(long)(auVar20._8_4_ * fVar6 + fVar7) * 0x10001 & 0xff0000ffU) * 0x101 &
                  0xf00f00f) * 0x11 & 0xc30c30c3) * 5 & 0x49249249);
      piVar8 = piVar8 + 1;
      local_58._0_8_ = uVar18;
    } while (pauVar11 != pauVar9 + uVar18);
  }
  QuickSort<unsigned_int*,JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
            (*(long *)(param_4 + 0x10),*(long *)(param_4 + 0x10) + lVar17,local_58);
  if (local_48 != (int *)0x0) {
    local_58._0_8_ = 0;
    (*Free)();
  }
  if (pauVar9 == (undefined1 (*) [16])0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(pauVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleGrouperMorton::~TriangleGrouperMorton() */

void __thiscall JPH::TriangleGrouperMorton::~TriangleGrouperMorton(TriangleGrouperMorton *this)

{
  return;
}



/* JPH::TriangleGrouperMorton::~TriangleGrouperMorton() */

void __thiscall JPH::TriangleGrouperMorton::~TriangleGrouperMorton(TriangleGrouperMorton *this)

{
  operator_delete(this,8);
  return;
}



/* JPH::TriangleGrouperMorton::Group(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >
   const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&, int,
   JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&) */

void JPH::TriangleGrouperMorton::_GLOBAL__sub_I_Group(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC11;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleGrouperMorton::~TriangleGrouperMorton() */

void __thiscall JPH::TriangleGrouperMorton::~TriangleGrouperMorton(TriangleGrouperMorton *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


