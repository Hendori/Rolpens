
/* void JPH::QuickSort<unsigned int*,
   JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3>
   > const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&, int,
   JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&)::{lambda(unsigned int, unsigned
   int)#1}>(unsigned int*, unsigned int*,
   JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3>
   > const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&, int,
   JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&)::{lambda(unsigned int, unsigned
   int)#1}) */

void __thiscall
JPH::
QuickSort<unsigned_int*,JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
          (JPH *this,JPH *param_1,float *param_2,long param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  JPH *pJVar6;
  JPH *pJVar7;
  uint uVar8;
  JPH *pJVar9;
  ulong uVar10;
  long lVar11;
  JPH *pJVar12;
  long lVar13;
  uint uVar14;
  JPH *pJVar15;
  float fVar16;
  float fVar17;
  
  lVar11 = (long)param_1 - (long)this;
  if (4 < lVar11) {
    if (0x80 < lVar11) {
      lVar13 = *(long *)(param_4 + 0x10);
      fVar3 = *param_2;
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      pJVar12 = param_1;
      do {
        uVar14 = *(uint *)this;
        pJVar6 = this + ((lVar11 >> 2) * 2 - 2U & 0xfffffffffffffffc);
        lVar11 = (long)(pJVar12 + (-4 - (long)this)) >> 5;
        pJVar7 = this + lVar11 * 4;
        pJVar9 = this + lVar11 * 8;
        pfVar1 = (float *)(lVar13 + (ulong)*(uint *)pJVar7 * 0x10);
        pfVar2 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        fVar16 = (pfVar2[2] - fVar5) * (pfVar2[2] - fVar5) +
                 (*pfVar2 - fVar3) * (*pfVar2 - fVar3) + 0.0 +
                 (pfVar2[1] - fVar4) * (pfVar2[1] - fVar4);
        if ((pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
            (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) + (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0
            < fVar16) {
          *(uint *)this = *(uint *)pJVar7;
          *(uint *)pJVar7 = uVar14;
          uVar14 = *(uint *)this;
          pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
          fVar16 = (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        }
        uVar8 = *(uint *)pJVar9;
        pfVar1 = (float *)(lVar13 + (ulong)uVar8 * 0x10);
        fVar17 = (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                 (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                 (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        if (fVar17 < fVar16) {
          *(uint *)this = uVar8;
          *(uint *)pJVar9 = uVar14;
          fVar17 = fVar16;
          uVar8 = uVar14;
        }
        uVar14 = *(uint *)pJVar7;
        pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        if (fVar17 < (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                     (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                     (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4)) {
          *(uint *)pJVar7 = uVar8;
          *(uint *)pJVar9 = uVar14;
        }
        pJVar9 = pJVar6 + lVar11 * 4;
        pJVar15 = pJVar6 + lVar11 * -4;
        uVar14 = *(uint *)pJVar15;
        pfVar1 = (float *)(lVar13 + (ulong)*(uint *)pJVar6 * 0x10);
        pfVar2 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        fVar16 = (pfVar2[2] - fVar5) * (pfVar2[2] - fVar5) +
                 (*pfVar2 - fVar3) * (*pfVar2 - fVar3) + 0.0 +
                 (pfVar2[1] - fVar4) * (pfVar2[1] - fVar4);
        if ((pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
            (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) + (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0
            < fVar16) {
          *(uint *)pJVar15 = *(uint *)pJVar6;
          *(uint *)pJVar6 = uVar14;
          uVar14 = *(uint *)pJVar15;
          pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
          fVar16 = (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        }
        uVar8 = *(uint *)pJVar9;
        pfVar1 = (float *)(lVar13 + (ulong)uVar8 * 0x10);
        fVar17 = (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                 (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                 (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        if (fVar17 < fVar16) {
          *(uint *)pJVar15 = uVar8;
          *(uint *)pJVar9 = uVar14;
          fVar17 = fVar16;
          uVar8 = uVar14;
        }
        uVar14 = *(uint *)pJVar6;
        pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        if (fVar17 < (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                     (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                     (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4)) {
          *(uint *)pJVar6 = uVar8;
          *(uint *)pJVar9 = uVar14;
        }
        pJVar9 = pJVar12 + lVar11 * -4 + -4;
        pJVar15 = pJVar12 + lVar11 * -8 + -4;
        uVar14 = *(uint *)pJVar15;
        pfVar1 = (float *)(lVar13 + (ulong)*(uint *)pJVar9 * 0x10);
        pfVar2 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        fVar16 = (pfVar2[2] - fVar5) * (pfVar2[2] - fVar5) +
                 (*pfVar2 - fVar3) * (*pfVar2 - fVar3) + 0.0 +
                 (pfVar2[1] - fVar4) * (pfVar2[1] - fVar4);
        if ((pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
            (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) + (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0
            < fVar16) {
          *(uint *)pJVar15 = *(uint *)pJVar9;
          *(uint *)pJVar9 = uVar14;
          uVar14 = *(uint *)pJVar15;
          pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
          fVar16 = (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        }
        uVar8 = *(uint *)(pJVar12 + -4);
        pfVar1 = (float *)(lVar13 + (ulong)uVar8 * 0x10);
        fVar17 = (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                 (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                 (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        if (fVar17 < fVar16) {
          *(uint *)pJVar15 = uVar8;
          *(uint *)(pJVar12 + -4) = uVar14;
          fVar17 = fVar16;
          uVar8 = uVar14;
        }
        uVar14 = *(uint *)pJVar9;
        pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        if (fVar17 < (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                     (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                     (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4)) {
          *(uint *)pJVar9 = uVar8;
          *(uint *)(pJVar12 + -4) = uVar14;
        }
        uVar14 = *(uint *)pJVar7;
        pfVar1 = (float *)(lVar13 + (ulong)*(uint *)pJVar6 * 0x10);
        pfVar2 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        fVar16 = (pfVar2[2] - fVar5) * (pfVar2[2] - fVar5) +
                 (pfVar2[1] - fVar4) * (pfVar2[1] - fVar4) +
                 (*pfVar2 - fVar3) * (*pfVar2 - fVar3) + 0.0;
        if ((pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
            (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) + (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0
            < fVar16) {
          *(uint *)pJVar7 = *(uint *)pJVar6;
          *(uint *)pJVar6 = uVar14;
          uVar14 = *(uint *)pJVar7;
          pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
          fVar16 = (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        }
        uVar8 = *(uint *)pJVar9;
        pfVar1 = (float *)(lVar13 + (ulong)uVar8 * 0x10);
        fVar17 = (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                 (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                 (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0;
        if (fVar17 < fVar16) {
          *(uint *)pJVar7 = uVar8;
          *(uint *)pJVar9 = uVar14;
          fVar17 = fVar16;
          uVar8 = uVar14;
        }
        uVar14 = *(uint *)pJVar6;
        pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
        fVar16 = (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                 (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                 (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0;
        pJVar7 = pJVar12;
        pJVar15 = this;
        if (fVar17 < fVar16) {
          *(uint *)pJVar6 = uVar8;
          *(uint *)pJVar9 = uVar14;
          pfVar1 = (float *)(lVar13 + (ulong)*(uint *)pJVar6 * 0x10);
          fVar16 = (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5);
        }
        while( true ) {
          do {
            pJVar9 = pJVar15;
            uVar14 = *(uint *)pJVar9;
            pfVar1 = (float *)(lVar13 + (ulong)uVar14 * 0x10);
            pJVar15 = pJVar9 + 4;
          } while ((pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 < fVar16);
          do {
            param_1 = pJVar7;
            pJVar7 = param_1 + -4;
            pfVar1 = (float *)(lVar13 + (ulong)*(uint *)(param_1 + -4) * 0x10);
          } while (fVar16 < (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                            (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                            (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4));
          if (pJVar7 <= pJVar9) break;
          *(uint *)pJVar9 = *(uint *)(param_1 + -4);
          *(uint *)pJVar7 = uVar14;
        }
        lVar11 = (long)param_1 - (long)this;
        if (lVar11 < (long)pJVar12 - (long)param_1) {
          QuickSort<unsigned_int*,JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
                    (this,param_1,param_2,param_4);
          lVar11 = (long)pJVar12 - (long)param_1;
          this = param_1;
          param_1 = pJVar12;
        }
        else {
          QuickSort<unsigned_int*,JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
                    (param_1,pJVar12,param_2,param_4);
        }
        if (lVar11 < 5) {
          return;
        }
        pJVar12 = param_1;
      } while (0x80 < lVar11);
    }
    if ((param_1 != this) && (pJVar12 = this + 4, pJVar12 != param_1)) {
      fVar3 = *param_2;
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      lVar11 = *(long *)(param_4 + 0x10);
      lVar13 = 0;
      do {
        while( true ) {
          uVar14 = *(uint *)pJVar12;
          pfVar1 = (float *)(lVar11 + (ulong)uVar14 * 0x10);
          pfVar2 = (float *)(lVar11 + (ulong)*(uint *)this * 0x10);
          fVar16 = (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                   (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
                   (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0;
          if (fVar16 < (pfVar2[2] - fVar5) * (pfVar2[2] - fVar5) +
                       (*pfVar2 - fVar3) * (*pfVar2 - fVar3) + 0.0 +
                       (pfVar2[1] - fVar4) * (pfVar2[1] - fVar4)) break;
          uVar10 = (ulong)*(uint *)(pJVar12 + -4);
          pfVar1 = (float *)(lVar11 + uVar10 * 0x10);
          pJVar7 = pJVar12;
          if ((pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
              (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4) +
              (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 <= fVar16) {
            *(uint *)pJVar12 = uVar14;
          }
          else {
            do {
              pJVar9 = pJVar7 + -4;
              *(uint *)pJVar7 = (uint)uVar10;
              uVar10 = (ulong)*(uint *)(pJVar7 + -8);
              pfVar1 = (float *)(lVar11 + uVar10 * 0x10);
              pJVar7 = pJVar9;
            } while (fVar16 < (pfVar1[2] - fVar5) * (pfVar1[2] - fVar5) +
                              (*pfVar1 - fVar3) * (*pfVar1 - fVar3) + 0.0 +
                              (pfVar1[1] - fVar4) * (pfVar1[1] - fVar4));
            *(uint *)pJVar9 = uVar14;
          }
          pJVar12 = pJVar12 + 4;
          lVar13 = lVar13 + -4;
          if (pJVar12 == param_1) {
            return;
          }
        }
        if (pJVar12 != this) {
          memmove(pJVar12 + lVar13,this,4 - lVar13);
        }
        pJVar12 = pJVar12 + 4;
        *(uint *)this = uVar14;
        lVar13 = lVar13 + -4;
      } while (pJVar12 != param_1);
    }
  }
  return;
}



/* JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3>
   > const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&, int,
   JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&) */

void __thiscall
JPH::TriangleGrouperClosestCentroid::Group
          (TriangleGrouperClosestCentroid *this,Array *param_1,Array *param_2,int param_3,
          Array *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  size_t __n;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  JPH *__src;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  iVar19 = (int)*(ulong *)param_2;
  uVar12 = (uint)(param_3 + -1 + iVar19) / (uint)param_3;
  uVar20 = *(ulong *)param_2 & 0xffffffff;
  if (iVar19 == 0) {
    puVar8 = *(uint **)(param_4 + 0x10);
    *(undefined8 *)param_4 = 0;
    puVar14 = puVar8;
    if (uVar12 == 1) goto LAB_00100c22;
LAB_0010095d:
    uVar20 = 0;
    iVar19 = 0;
    lVar15 = local_68;
    do {
      puVar8 = puVar8 + uVar20;
      puVar1 = puVar8 + param_3;
      uVar4 = *puVar8;
      fVar24 = *(float *)(lVar15 + (ulong)uVar4 * 0x10);
      puVar6 = puVar8;
      puVar10 = puVar14;
      puVar9 = puVar8;
      fVar25 = fVar24;
      if (puVar8 != puVar14) {
        while( true ) {
          if (fVar25 < fVar24) {
            puVar9 = puVar6;
            fVar24 = fVar25;
          }
          puVar6 = puVar6 + 1;
          puVar10 = puVar9;
          if (puVar6 == puVar14) break;
          fVar25 = *(float *)(lVar15 + (ulong)*puVar6 * 0x10);
        }
      }
      *puVar8 = *puVar10;
      *puVar10 = uVar4;
      puVar2 = (undefined8 *)(lVar15 + (ulong)*puVar8 * 0x10);
      local_58 = *puVar2;
      uStack_50 = puVar2[1];
      QuickSort<unsigned_int*,JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3,JPH::STLAllocator<JPH::Float3>>const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>const&,int,JPH::Array<unsigned_int,JPH::STLAllocator<unsigned_int>>&)::_lambda(unsigned_int,unsigned_int)_1_>
                ((JPH *)(puVar8 + 1),puVar1,&local_58,&local_78);
      pfVar3 = (float *)(lVar15 + (ulong)puVar1[-1] * 0x10);
      fVar24 = (pfVar3[2] - (float)uStack_50) * (pfVar3[2] - (float)uStack_50) +
               (pfVar3[1] - local_58._4_4_) * (pfVar3[1] - local_58._4_4_) +
               (*pfVar3 - (float)local_58) * (*pfVar3 - (float)local_58) + 0.0;
      fVar25 = (float)local_58;
      fVar26 = local_58._4_4_;
      fVar27 = (float)uStack_50;
      lVar15 = local_68;
      for (puVar6 = puVar1; puVar6 != puVar14; puVar6 = puVar6 + 1) {
        while( true ) {
          uVar4 = *puVar6;
          pfVar3 = (float *)(lVar15 + (ulong)uVar4 * 0x10);
          fVar23 = (pfVar3[2] - fVar27) * (pfVar3[2] - fVar27) +
                   (pfVar3[1] - fVar26) * (pfVar3[1] - fVar26) +
                   (*pfVar3 - fVar25) * (*pfVar3 - fVar25) + 0.0;
          if (fVar24 <= fVar23) break;
          *puVar6 = puVar1[-1];
          lVar11 = (long)param_3 * 4 + -4 >> 2;
          __src = (JPH *)(puVar8 + 1);
          while (lVar7 = lVar11, 0 < lVar11) {
            while( true ) {
              lVar11 = lVar7 >> 1;
              pfVar3 = (float *)(lVar15 + (ulong)*(uint *)(__src + lVar11 * 4) * 0x10);
              if (fVar23 < (pfVar3[2] - fVar27) * (pfVar3[2] - fVar27) +
                           (*pfVar3 - fVar25) * (*pfVar3 - fVar25) + 0.0 +
                           (pfVar3[1] - fVar26) * (pfVar3[1] - fVar26)) break;
              __src = __src + lVar11 * 4 + 4;
              lVar7 = (lVar7 - lVar11) + -1;
              if (lVar7 < 1) goto LAB_00100b4f;
            }
          }
LAB_00100b4f:
          __n = (long)puVar1 + (-4 - (long)__src);
          if ((long)__n < 5) {
            if (__n == 4) {
              puVar1[-1] = *(uint *)__src;
            }
          }
          else {
            memmove((void *)((long)puVar1 - __n),__src,__n);
            lVar15 = local_68;
            fVar25 = (float)local_58;
            fVar26 = local_58._4_4_;
            fVar27 = (float)uStack_50;
          }
          *(uint *)__src = uVar4;
          puVar6 = puVar6 + 1;
          pfVar3 = (float *)(lVar15 + (ulong)puVar1[-1] * 0x10);
          fVar24 = (pfVar3[2] - fVar27) * (pfVar3[2] - fVar27) +
                   (pfVar3[1] - fVar26) * (pfVar3[1] - fVar26) +
                   (*pfVar3 - fVar25) * (*pfVar3 - fVar25) + 0.0;
          if (puVar6 == puVar14) goto LAB_00100bda;
        }
      }
LAB_00100bda:
      iVar19 = iVar19 + 1;
      uVar20 = (ulong)(uint)((int)uVar20 + param_3);
      if (iVar19 == uVar12 - 1) goto LAB_00100c08;
      puVar8 = *(uint **)(param_4 + 0x10);
    } while( true );
  }
  local_68 = (*Reallocate)(0,0,uVar20 << 4);
  local_78 = uVar20;
  uStack_70 = uVar20;
  if (*(ulong *)(param_4 + 8) < uVar20) {
    puVar8 = (uint *)(*Reallocate)(*(undefined8 *)(param_4 + 0x10),*(ulong *)(param_4 + 8) * 4,
                                   uVar20 * 4);
    *(uint **)(param_4 + 0x10) = puVar8;
    *(ulong *)(param_4 + 8) = uVar20;
  }
  else {
    puVar8 = *(uint **)(param_4 + 0x10);
  }
  lVar15 = *(long *)(param_1 + 0x10);
  puVar14 = *(uint **)(param_2 + 0x10);
  *(ulong *)param_4 = uVar20;
  uVar5 = _LC2;
  uVar13 = 0;
  do {
    uVar17 = (ulong)puVar14[1];
    uVar16 = (ulong)puVar14[2];
    uVar18 = (ulong)*puVar14;
    fVar24 = *(float *)(lVar15 + 8 + uVar17 * 0xc);
    fVar25 = *(float *)(lVar15 + 8 + uVar18 * 0xc);
    fVar26 = *(float *)(lVar15 + 8 + uVar16 * 0xc);
    auVar21._0_4_ =
         *(float *)(lVar15 + uVar17 * 0xc) + *(float *)(lVar15 + uVar18 * 0xc) +
         *(float *)(lVar15 + uVar16 * 0xc);
    auVar21._4_4_ =
         *(float *)(lVar15 + 4 + uVar17 * 0xc) + *(float *)(lVar15 + 4 + uVar18 * 0xc) +
         *(float *)(lVar15 + 4 + uVar16 * 0xc);
    auVar21._8_4_ = fVar24 + fVar25 + fVar26;
    auVar21._12_4_ = fVar24 + fVar25 + fVar26;
    auVar22._4_4_ = uVar5;
    auVar22._0_4_ = uVar5;
    auVar22._8_4_ = uVar5;
    auVar22._12_4_ = uVar5;
    auVar22 = divps(auVar21,auVar22);
    *(undefined1 (*) [16])(local_68 + uVar13 * 0x10) = auVar22;
    puVar8[uVar13] = (uint)uVar13;
    uVar13 = uVar13 + 1;
    puVar14 = puVar14 + 5;
  } while (uVar13 != uVar20);
  puVar14 = puVar8 + uVar20;
  lVar15 = local_68;
  if (uVar12 != 1) goto LAB_0010095d;
  goto LAB_00100c10;
LAB_00100c08:
  if (lVar15 == 0) goto LAB_00100c22;
LAB_00100c10:
  local_78 = 0;
  (*Free)(lVar15);
LAB_00100c22:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::TriangleGrouperClosestCentroid::~TriangleGrouperClosestCentroid() */

void __thiscall
JPH::TriangleGrouperClosestCentroid::~TriangleGrouperClosestCentroid
          (TriangleGrouperClosestCentroid *this)

{
  return;
}



/* JPH::TriangleGrouperClosestCentroid::~TriangleGrouperClosestCentroid() */

void __thiscall
JPH::TriangleGrouperClosestCentroid::~TriangleGrouperClosestCentroid
          (TriangleGrouperClosestCentroid *this)

{
  operator_delete(this,8);
  return;
}



/* JPH::TriangleGrouperClosestCentroid::Group(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3>
   > const&, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&, int,
   JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&) */

void JPH::TriangleGrouperClosestCentroid::_GLOBAL__sub_I_Group(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC4;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleGrouperClosestCentroid::~TriangleGrouperClosestCentroid() */

void __thiscall
JPH::TriangleGrouperClosestCentroid::~TriangleGrouperClosestCentroid
          (TriangleGrouperClosestCentroid *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


