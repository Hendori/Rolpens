
/* JPH::TriangleSplitterFixedLeafSize::TriangleSplitterFixedLeafSize(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
JPH::TriangleSplitterFixedLeafSize::TriangleSplitterFixedLeafSize
          (TriangleSplitterFixedLeafSize *this,Array *param_1,Array *param_2,uint param_3,
          uint param_4,uint param_5,uint param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::TriangleSplitter::TriangleSplitter((TriangleSplitter *)this,param_1,param_2);
  *(undefined ***)this = &PTR__TriangleSplitterFixedLeafSize_00100a80;
  *(ulong *)(this + 0x48) = CONCAT44(param_4,param_3);
  *(ulong *)(this + 0x50) = CONCAT44(param_6,param_5);
  local_38 = &Reallocate;
  JPH::TriangleGrouperClosestCentroid::Group
            ((Array *)&local_38,param_1,(int)param_2,(Array *)(ulong)param_3);
  lVar5 = *(long *)(this + 0x40);
  uVar7 = (uint)*(ulong *)param_2;
  uVar9 = (*(uint *)(this + 0x48) - 1) + uVar7;
  uVar2 = *(undefined4 *)(lVar5 + -4 + *(ulong *)(this + 0x30) * 4);
  uVar9 = uVar9 - uVar9 % *(uint *)(this + 0x48);
  if (uVar7 < uVar9) {
    uVar8 = *(ulong *)param_2 & 0xffffffff;
    uVar6 = *(ulong *)(this + 0x30);
    do {
      while( true ) {
        uVar4 = *(ulong *)(this + 0x38);
        uVar1 = uVar6 + 1;
        if (uVar4 < uVar1) break;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        *(ulong *)(this + 0x30) = uVar1;
        *(undefined4 *)(lVar5 + uVar6 * 4) = uVar2;
        uVar6 = uVar1;
        if (uVar9 <= uVar7) goto LAB_00100123;
      }
      uVar6 = uVar4 * 2;
      if (uVar4 * 2 < uVar1) {
        uVar6 = uVar1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar7;
      lVar5 = (*Reallocate)(lVar5,uVar4 << 2,uVar6 * 4);
      *(ulong *)(this + 0x38) = uVar6;
      *(long *)(this + 0x40) = lVar5;
      lVar3 = *(long *)(this + 0x30);
      uVar6 = lVar3 + 1;
      *(ulong *)(this + 0x30) = uVar6;
      *(undefined4 *)(lVar5 + lVar3 * 4) = uVar2;
    } while (uVar7 < uVar9);
  }
LAB_00100123:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleSplitterFixedLeafSize::GetCentroidForGroup(unsigned int) */

undefined1  [16] __thiscall
JPH::TriangleSplitterFixedLeafSize::GetCentroidForGroup
          (TriangleSplitterFixedLeafSize *this,uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_18 [8];
  float fStack_10;
  float fStack_c;
  
  if (*(int *)(this + 0x48) != 0) {
    uVar6 = *(int *)(this + 0x48) + param_1;
    auVar9._4_4_ = _LC2;
    auVar9._0_4_ = _LC2;
    auVar9._8_4_ = _LC2;
    auVar9._12_4_ = _LC2;
    auVar8._4_4_ = _LC4;
    auVar8._0_4_ = _LC4;
    auVar8._8_4_ = _LC4;
    auVar8._12_4_ = _LC4;
    lVar3 = *(long *)(*(long *)(this + 8) + 0x10);
    do {
      puVar4 = (uint *)(*(long *)(*(long *)(this + 0x10) + 0x10) +
                       (ulong)*(uint *)(*(long *)(this + 0x40) + (ulong)param_1 * 4) * 0x14);
      puVar1 = puVar4 + 3;
      do {
        uVar5 = (ulong)*puVar4;
        puVar4 = puVar4 + 1;
        uVar2 = *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc);
        auVar7._4_4_ = *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc);
        auVar7._0_4_ = *(undefined4 *)(lVar3 + uVar5 * 0xc);
        auVar7._8_4_ = uVar2;
        auVar7._12_4_ = uVar2;
        auVar8 = minps(auVar8,auVar7);
        auVar9 = maxps(auVar9,auVar7);
      } while (puVar1 != puVar4);
      param_1 = param_1 + 1;
    } while (uVar6 != param_1);
    local_18._4_4_ = (auVar8._4_4_ + auVar9._4_4_) * _LC6;
    local_18._0_4_ = (auVar8._0_4_ + auVar9._0_4_) * _LC6;
    fStack_10 = (auVar8._8_4_ + auVar9._8_4_) * _LC6;
    fStack_c = (auVar8._12_4_ + auVar9._12_4_) * _LC6;
    return _local_18;
  }
  return (undefined1  [16])0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleSplitterFixedLeafSize::Split(JPH::TriangleSplitter::Range const&,
   JPH::TriangleSplitter::Range&, JPH::TriangleSplitter::Range&) */

undefined8 __thiscall
JPH::TriangleSplitterFixedLeafSize::Split
          (TriangleSplitterFixedLeafSize *this,Range *param_1,Range *param_2,Range *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 local_d8 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  long local_40;
  
  uVar9 = *(uint *)param_1;
  uVar24 = *(uint *)(param_1 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68._4_4_ = _LC4;
  local_68._0_4_ = _LC4;
  fStack_60 = _LC4;
  fStack_5c = _LC4;
  local_58._4_4_ = _LC2;
  local_58._0_4_ = _LC2;
  local_58._8_4_ = _LC2;
  local_58._12_4_ = _LC2;
  uVar35 = _LC2;
  uVar36 = _LC2;
  uVar37 = _LC2;
  fVar42 = _LC4;
  fVar43 = _LC4;
  fVar44 = _LC4;
  fVar45 = _LC4;
  if (uVar9 < uVar24) {
    iVar17 = *(int *)(this + 0x48);
    uVar13 = (ulong)uVar9;
    auVar41._4_4_ = _LC2;
    auVar41._0_4_ = _LC2;
    auVar41._8_4_ = _LC2;
    auVar41._12_4_ = _LC2;
    auVar39._4_4_ = _LC4;
    auVar39._0_4_ = _LC4;
    auVar39._8_4_ = _LC4;
    auVar39._12_4_ = _LC4;
    do {
      uVar22 = (uint)uVar13;
      uVar13 = (ulong)(uVar22 + iVar17);
      local_d8 = GetCentroidForGroup(this,uVar22);
      auVar39 = minps(auVar39,local_d8);
      auVar41 = maxps(auVar41,local_d8);
      _local_68 = auVar39;
      local_58 = auVar41;
      uVar35 = _UNK_00100ab4;
      uVar36 = _UNK_00100ab8;
      uVar37 = _UNK_00100abc;
    } while ((uint)uVar13 < uVar24);
  }
  uVar9 = (uVar24 - uVar9) / *(uint *)(this + 0x54);
  if (uVar9 < *(uint *)(this + 0x4c)) {
    uVar9 = *(uint *)(this + 0x4c);
  }
  uVar24 = *(uint *)(this + 0x50);
  if (uVar9 <= *(uint *)(this + 0x50)) {
    uVar24 = uVar9;
  }
  uVar13 = (ulong)uVar24;
  pauVar12 = (undefined1 (*) [16])0x0;
  uVar34 = _LC2;
  if (uVar13 != 0) {
    pauVar12 = (undefined1 (*) [16])(*Reallocate)(0,0,uVar13 * 0x80);
    fVar45 = _UNK_00100acc;
    fVar44 = _UNK_00100ac8;
    fVar43 = _UNK_00100ac4;
    fVar42 = _LC4;
    uVar37 = _UNK_00100abc;
    uVar36 = _UNK_00100ab8;
    uVar35 = _UNK_00100ab4;
    uVar34 = _LC2;
    for (pauVar16 = pauVar12; pauVar16 < pauVar12 + uVar13 * 8; pauVar16 = pauVar16 + 8) {
      *(float *)*pauVar16 = fVar42;
      *(float *)(*pauVar16 + 4) = fVar43;
      *(float *)(*pauVar16 + 8) = fVar44;
      *(float *)(*pauVar16 + 0xc) = fVar45;
      *(undefined4 *)pauVar16[1] = uVar34;
      *(undefined4 *)(pauVar16[1] + 4) = uVar35;
      *(undefined4 *)(pauVar16[1] + 8) = uVar36;
      *(undefined4 *)(pauVar16[1] + 0xc) = uVar37;
      *(float *)pauVar16[3] = fVar42;
      *(float *)(pauVar16[3] + 4) = fVar43;
      *(float *)(pauVar16[3] + 8) = fVar44;
      *(float *)(pauVar16[3] + 0xc) = fVar45;
      *(undefined4 *)pauVar16[4] = uVar34;
      *(undefined4 *)(pauVar16[4] + 4) = uVar35;
      *(undefined4 *)(pauVar16[4] + 8) = uVar36;
      *(undefined4 *)(pauVar16[4] + 0xc) = uVar37;
      *(float *)pauVar16[5] = fVar42;
      *(float *)(pauVar16[5] + 4) = fVar43;
      *(float *)(pauVar16[5] + 8) = fVar44;
      *(float *)(pauVar16[5] + 0xc) = fVar45;
      *(undefined4 *)pauVar16[6] = uVar34;
      *(undefined4 *)(pauVar16[6] + 4) = uVar35;
      *(undefined4 *)(pauVar16[6] + 8) = uVar36;
      *(undefined4 *)(pauVar16[6] + 0xc) = uVar37;
    }
  }
  auVar49._8_8_ = local_78._8_8_;
  auVar49._0_8_ = local_78._0_8_;
  uVar22 = uVar24 - 1;
  lVar21 = 0;
  fVar38 = 0.0;
  uVar9 = 0xffffffff;
  fVar46 = _LC4;
  fVar40 = _LC8;
  do {
    fVar25 = *(float *)(local_68 + lVar21 * 4);
    fVar47 = *(float *)(local_58 + lVar21 * 4) - fVar25;
    if (fVar40 <= fVar47) {
      uVar23 = *(uint *)(param_1 + 4);
      uVar18 = *(uint *)param_1;
      uVar19 = (ulong)uVar18;
      if (uVar24 == 0) {
        fVar48 = 0.0;
        if (uVar18 < uVar23) goto LAB_001004ab;
      }
      else {
        uVar10 = 0;
        fVar48 = (float)uVar13;
        pauVar16 = pauVar12;
        do {
          uVar10 = uVar10 + 1;
          *(float *)*pauVar16 = fVar42;
          *(float *)(*pauVar16 + 4) = fVar43;
          *(float *)(*pauVar16 + 8) = fVar44;
          *(float *)(*pauVar16 + 0xc) = fVar45;
          *(undefined4 *)pauVar16[1] = uVar34;
          *(undefined4 *)(pauVar16[1] + 4) = uVar35;
          *(undefined4 *)(pauVar16[1] + 8) = uVar36;
          *(undefined4 *)(pauVar16[1] + 0xc) = uVar37;
          *(undefined4 *)(pauVar16[2] + 4) = 0;
          *(float *)pauVar16[2] = ((float)uVar10 * fVar47) / fVar48 + fVar25;
          pauVar16 = pauVar16 + 8;
        } while (uVar10 != uVar24);
        if (uVar18 < uVar23) {
LAB_001004ab:
          iVar17 = *(int *)(this + 0x48);
          do {
            local_78 = auVar49;
            auVar49 = GetCentroidForGroup(this,(uint)uVar19);
            uVar37 = _UNK_00100abc;
            uVar36 = _UNK_00100ab8;
            uVar35 = _UNK_00100ab4;
            uVar34 = _LC2;
            local_78 = auVar49;
            fVar29 = *(float *)(local_78 + lVar21 * 4);
            uVar18 = (uint)(long)(((fVar29 - fVar25) / fVar47) * fVar48);
            if (uVar22 <= uVar18) {
              uVar18 = uVar22;
            }
            pauVar16 = pauVar12 + (ulong)uVar18 * 8;
            if (iVar17 != 0) {
              lVar5 = *(long *)(this + 0x40);
              iVar8 = (int)uVar19;
              auVar39 = *pauVar16;
              auVar41 = pauVar16[1];
              lVar6 = *(long *)(*(long *)(this + 0x10) + 0x10);
              lVar7 = *(long *)(*(long *)(this + 8) + 0x10);
              do {
                puVar11 = (uint *)(lVar6 + (ulong)*(uint *)(lVar5 + (uVar19 & 0xffffffff) * 4) *
                                           0x14);
                puVar1 = puVar11 + 3;
                do {
                  uVar14 = (ulong)*puVar11;
                  puVar11 = puVar11 + 1;
                  uVar4 = *(undefined4 *)(lVar7 + 8 + uVar14 * 0xc);
                  auVar26._4_4_ = *(undefined4 *)(lVar7 + 4 + uVar14 * 0xc);
                  auVar26._0_4_ = *(undefined4 *)(lVar7 + uVar14 * 0xc);
                  auVar26._8_4_ = uVar4;
                  auVar26._12_4_ = uVar4;
                  auVar39 = minps(auVar39,auVar26);
                  auVar41 = maxps(auVar41,auVar26);
                  *pauVar16 = auVar39;
                  pauVar16[1] = auVar41;
                } while (puVar1 != puVar11);
                uVar18 = (int)uVar19 + 1;
                uVar19 = (ulong)uVar18;
              } while (iVar8 + iVar17 != uVar18);
            }
            if (*(float *)pauVar16[2] <= fVar29) {
              fVar29 = *(float *)pauVar16[2];
            }
            *(int *)(pauVar16[2] + 4) = *(int *)(pauVar16[2] + 4) + iVar17;
            *(float *)pauVar16[2] = fVar29;
          } while ((uint)uVar19 < uVar23);
          if (uVar24 == 0) goto LAB_0010037f;
        }
        auVar32._4_4_ = uVar35;
        auVar32._0_4_ = uVar34;
        auVar32._8_4_ = uVar36;
        auVar32._12_4_ = uVar37;
        auVar27._4_4_ = fVar43;
        auVar27._0_4_ = fVar42;
        auVar27._8_4_ = fVar44;
        auVar27._12_4_ = fVar45;
        iVar17 = 0;
        pauVar16 = pauVar12;
        do {
          *(int *)pauVar16[7] = iVar17;
          iVar17 = iVar17 + *(int *)(pauVar16[2] + 4);
          pauVar15 = pauVar16 + 8;
          pauVar16[3] = auVar27;
          auVar27 = minps(auVar27,*pauVar16);
          pauVar16[4] = auVar32;
          auVar32 = maxps(auVar32,pauVar16[1]);
          pauVar16 = pauVar15;
        } while (pauVar15 != pauVar12 + uVar13 * 8);
        if (-1 < (int)uVar22) {
          auVar33._4_4_ = fVar43;
          auVar33._0_4_ = fVar42;
          auVar33._8_4_ = fVar44;
          auVar33._12_4_ = fVar45;
          auVar28._4_4_ = uVar35;
          auVar28._0_4_ = uVar34;
          auVar28._8_4_ = uVar36;
          auVar28._12_4_ = uVar37;
          iVar17 = 0;
          pauVar16 = pauVar12 + (long)(int)uVar22 * 8;
          uVar23 = uVar22;
          do {
            auVar33 = minps(auVar33,*pauVar16);
            auVar28 = maxps(auVar28,pauVar16[1]);
            uVar23 = uVar23 - 1;
            iVar17 = iVar17 + *(int *)(pauVar16[2] + 4);
            *(int *)(pauVar16[7] + 4) = iVar17;
            pauVar16[5] = auVar33;
            pauVar16[6] = auVar28;
            pauVar16 = pauVar16 + -8;
          } while (uVar23 != 0xffffffff);
          if (uVar24 == 1) goto LAB_0010037f;
        }
        pauVar16 = pauVar12 + 10;
        do {
          fVar25 = *(float *)pauVar16[2] - *(float *)pauVar16[1];
          fVar48 = *(float *)(pauVar16[2] + 4) - *(float *)(pauVar16[1] + 4);
          fVar30 = *(float *)(pauVar16[2] + 8) - *(float *)(pauVar16[1] + 8);
          fVar47 = *(float *)pauVar16[4] - *(float *)pauVar16[3];
          fVar29 = *(float *)(pauVar16[4] + 4) - *(float *)(pauVar16[3] + 4);
          fVar31 = *(float *)(pauVar16[4] + 8) - *(float *)(pauVar16[3] + 8);
          fVar47 = fVar31 * fVar47 + fVar47 * fVar29 + fVar31 * fVar29;
          fVar25 = fVar30 * fVar25 + fVar25 * fVar48 + fVar30 * fVar48;
          fVar25 = (fVar47 + fVar47) * (float)*(uint *)(pauVar16[5] + 4) +
                   (fVar25 + fVar25) * (float)*(uint *)pauVar16[5];
          if (fVar25 < fVar46) {
            fVar38 = *(float *)*pauVar16;
            uVar9 = (uint)lVar21;
            fVar46 = fVar25;
          }
          pauVar16 = pauVar16 + 8;
        } while (pauVar16 != pauVar12 + (ulong)(uVar24 - 2) * 8 + 0x12);
      }
    }
LAB_0010037f:
    lVar21 = lVar21 + 1;
  } while (lVar21 != 3);
  uVar20 = 0;
  if (uVar9 != 0xffffffff) {
    uVar13 = (ulong)uVar9;
    uVar9 = *(uint *)param_1;
    uVar24 = *(uint *)(param_1 + 4);
    while (uVar9 < uVar24) {
      while( true ) {
        local_78 = auVar49;
        auVar49 = GetCentroidForGroup(this,uVar9);
        local_78 = auVar49;
        if (fVar38 < *(float *)(local_78 + uVar13 * 4) ||
            fVar38 == *(float *)(local_78 + uVar13 * 4)) break;
        uVar9 = uVar9 + *(int *)(this + 0x48);
        if (uVar24 <= uVar9) goto LAB_00100720;
      }
      if (uVar24 <= uVar9) break;
      uVar22 = *(uint *)(this + 0x48);
      while( true ) {
        uVar23 = uVar24 - uVar22;
        local_78 = auVar49;
        auVar49 = GetCentroidForGroup(this,uVar23);
        local_78 = auVar49;
        if (*(float *)(local_78 + uVar13 * 4) < fVar38) break;
        uVar24 = uVar23;
        if (uVar23 <= uVar9) goto LAB_00100720;
      }
      if ((uVar9 < uVar24) && (uVar22 != 0)) {
        lVar21 = *(long *)(this + 0x40);
        uVar23 = 0;
        do {
          iVar17 = uVar24 + uVar23;
          uVar18 = uVar9 + uVar23;
          uVar23 = uVar23 + 1;
          puVar2 = (undefined4 *)(lVar21 + (ulong)uVar18 * 4);
          puVar3 = (undefined4 *)(lVar21 + (ulong)(iVar17 - uVar22) * 4);
          uVar35 = *puVar2;
          *puVar2 = *puVar3;
          *puVar3 = uVar35;
          uVar22 = *(uint *)(this + 0x48);
        } while (uVar23 < uVar22);
        uVar9 = uVar9 + uVar22;
        uVar24 = uVar24 - uVar22;
      }
    }
LAB_00100720:
    uVar24 = *(uint *)param_1;
    if ((uVar24 == uVar9) || (uVar9 == *(uint *)(param_1 + 4))) {
      uVar9 = ((*(uint *)(param_1 + 4) - uVar24) / *(uint *)(this + 0x48) + 1 >> 1) *
              *(uint *)(this + 0x48) + uVar24;
    }
    uVar20 = 1;
    *(ulong *)param_2 = CONCAT44(uVar9,uVar24);
    *(ulong *)param_3 = CONCAT44(*(undefined4 *)(param_1 + 4),uVar9);
  }
  local_78 = auVar49;
  if (pauVar12 != (undefined1 (*) [16])0x0) {
    (*Free)(pauVar12);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleSplitterFixedLeafSize::GetStats(JPH::TriangleSplitter::Stats&) const */

void __thiscall
JPH::TriangleSplitterFixedLeafSize::GetStats(TriangleSplitterFixedLeafSize *this,Stats *param_1)

{
  *(char **)param_1 = "TriangleSplitterFixedLeafSize";
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x48);
  return;
}



/* JPH::TriangleSplitterFixedLeafSize::~TriangleSplitterFixedLeafSize() */

void __thiscall
JPH::TriangleSplitterFixedLeafSize::~TriangleSplitterFixedLeafSize
          (TriangleSplitterFixedLeafSize *this)

{
  *(undefined **)this = &DAT_00100a50;
  if (*(long *)(this + 0x40) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x001008fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TriangleSplitterFixedLeafSize::~TriangleSplitterFixedLeafSize() */

void __thiscall
JPH::TriangleSplitterFixedLeafSize::~TriangleSplitterFixedLeafSize
          (TriangleSplitterFixedLeafSize *this)

{
  *(undefined **)this = &DAT_00100a50;
  if (*(long *)(this + 0x40) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
    (*Free)();
  }
  operator_delete(this,0x58);
  return;
}



/* JPH::TriangleSplitterFixedLeafSize::TriangleSplitterFixedLeafSize(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void JPH::TriangleSplitterFixedLeafSize::_GLOBAL__sub_I_TriangleSplitterFixedLeafSize(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC9;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleSplitterFixedLeafSize::~TriangleSplitterFixedLeafSize() */

void __thiscall
JPH::TriangleSplitterFixedLeafSize::~TriangleSplitterFixedLeafSize
          (TriangleSplitterFixedLeafSize *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


