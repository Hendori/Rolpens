
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SkeletonPose::SetSkeleton(JPH::Skeleton const*) */

void __thiscall JPH::SkeletonPose::SetSkeleton(SkeletonPose *this,Skeleton *param_1)

{
  long *plVar1;
  Skeleton *pSVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  
  pSVar2 = *(Skeleton **)this;
  if (param_1 == pSVar2) goto LAB_0010003b;
  if (pSVar2 == (Skeleton *)0x0) {
LAB_0010002b:
    *(Skeleton **)this = param_1;
  }
  else {
    LOCK();
    *(int *)pSVar2 = *(int *)pSVar2 + -1;
    UNLOCK();
    if (*(int *)pSVar2 != 0) goto LAB_0010002b;
    plVar9 = *(long **)(pSVar2 + 0x18);
    if (plVar9 != (long *)0x0) {
      if ((*(long *)(pSVar2 + 8) != 0) &&
         (plVar1 = plVar9 + *(long *)(pSVar2 + 8) * 9, plVar9 < plVar1)) {
        do {
          if ((long *)plVar9[4] != plVar9 + 6) {
            (*Free)();
          }
          if ((long *)*plVar9 != plVar9 + 2) {
            (*Free)();
          }
          plVar9 = plVar9 + 9;
        } while (plVar9 < plVar1);
        plVar9 = *(long **)(pSVar2 + 0x18);
      }
      *(undefined8 *)(pSVar2 + 8) = 0;
      (*Free)(plVar9);
    }
    (*Free)(pSVar2);
    *(Skeleton **)this = param_1;
  }
  if (param_1 != (Skeleton *)0x0) {
    LOCK();
    *(int *)param_1 = *(int *)param_1 + 1;
    UNLOCK();
    param_1 = *(Skeleton **)this;
  }
LAB_0010003b:
  uVar6 = (ulong)*(int *)(param_1 + 8);
  lVar4 = *(long *)(this + 0x30);
  uVar8 = uVar6;
  if (*(ulong *)(this + 0x28) < uVar6) {
    lVar4 = (*Reallocate)(lVar4,*(ulong *)(this + 0x28) << 5,uVar6 * 0x20);
    *(ulong *)(this + 0x28) = uVar6;
    *(long *)(this + 0x30) = lVar4;
    uVar8 = (ulong)*(int *)(*(long *)this + 8);
  }
  puVar5 = (undefined8 *)(*(long *)(this + 0x20) * 0x20 + lVar4);
  puVar7 = (undefined8 *)(lVar4 + uVar6 * 0x20);
  if (puVar5 < puVar7) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_0010008a;
    do {
      uVar3 = _UNK_00100ed8;
      *puVar5 = __LC0;
      puVar5[1] = uVar3;
      *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
LAB_0010008a:
      puVar5 = puVar5 + 4;
    } while (puVar5 < puVar7);
  }
  *(ulong *)(this + 0x20) = uVar6;
  if (uVar8 <= *(ulong *)(this + 0x40)) {
    *(ulong *)(this + 0x38) = uVar8;
    return;
  }
  uVar3 = (*Reallocate)(*(undefined8 *)(this + 0x48),*(ulong *)(this + 0x40) << 6,uVar8 << 6);
  *(ulong *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(ulong *)(this + 0x38) = uVar8;
  return;
}



/* JPH::SkeletonPose::CalculateJointMatrices() */

void __thiscall JPH::SkeletonPose::CalculateJointMatrices(SkeletonPose *this)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  float fVar21;
  float fVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  undefined1 (*pauVar28) [16];
  long lVar29;
  int *piVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  long in_FS_OFFSET;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar22 = _LC2;
  uVar5 = *(undefined8 *)(this + 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < (int)uVar5) {
    pauVar6 = *(undefined1 (**) [16])(this + 0x48);
    puVar1 = *(undefined8 **)(this + 0x30) + 4;
    piVar30 = (int *)(*(long *)(*(long *)this + 0x18) + 0x40);
    pauVar24 = pauVar6;
    puVar23 = puVar1;
    puVar31 = *(undefined8 **)(this + 0x30);
    while( true ) {
      puVar25 = puVar23;
      uVar7 = *puVar31;
      uVar8 = puVar31[1];
      uVar9 = puVar31[2];
      uVar3 = *(undefined4 *)(puVar31 + 3);
      *(float *)(pauVar24[3] + 0xc) = fVar22;
      fVar26 = (float)uVar7;
      fVar32 = (float)uVar8;
      fVar27 = (float)((ulong)uVar7 >> 0x20);
      fVar37 = fVar26 + fVar26;
      iVar4 = *piVar30;
      fVar38 = fVar27 + fVar27;
      *(undefined8 *)pauVar24[3] = uVar9;
      fVar33 = (float)((ulong)uVar8 >> 0x20);
      *(undefined4 *)(pauVar24[3] + 8) = uVar3;
      fVar39 = fVar32 * (fVar32 + fVar32);
      fVar36 = (fVar32 + fVar32) * fVar33;
      auVar35._0_4_ = (fVar22 - fVar27 * fVar38) - fVar39;
      auVar35._4_4_ = fVar27 * fVar37 + fVar36;
      auVar35._8_4_ = fVar32 * fVar37 - fVar38 * fVar33;
      auVar35._12_4_ = 0;
      *pauVar24 = auVar35;
      *(ulong *)pauVar24[1] = CONCAT44((fVar22 - fVar39) - fVar26 * fVar37,fVar27 * fVar37 - fVar36)
      ;
      *(ulong *)(pauVar24[1] + 8) = (ulong)(uint)(fVar37 * fVar33 + fVar32 * fVar38);
      auVar34._4_4_ = fVar32 * fVar38 - fVar37 * fVar33;
      auVar34._0_4_ = fVar32 * fVar37 + fVar38 * fVar33;
      auVar34._8_4_ = (fVar22 - fVar26 * fVar37) - fVar27 * fVar38;
      auVar34._12_4_ = 0;
      pauVar24[2] = auVar34;
      if (-1 < iVar4) {
        pauVar28 = pauVar6 + (long)iVar4 * 4;
        fVar26 = *(float *)*pauVar28;
        fVar27 = *(float *)(*pauVar28 + 4);
        fVar32 = *(float *)(*pauVar28 + 8);
        fVar33 = *(float *)(*pauVar28 + 0xc);
        fVar36 = *(float *)pauVar28[1];
        fVar37 = *(float *)(pauVar28[1] + 4);
        fVar38 = *(float *)(pauVar28[1] + 8);
        fVar39 = *(float *)(pauVar28[1] + 0xc);
        fVar10 = *(float *)pauVar28[2];
        fVar11 = *(float *)(pauVar28[2] + 4);
        fVar12 = *(float *)(pauVar28[2] + 8);
        fVar13 = *(float *)(pauVar28[2] + 0xc);
        fVar14 = *(float *)pauVar28[3];
        fVar15 = *(float *)(pauVar28[3] + 4);
        fVar16 = *(float *)(pauVar28[3] + 8);
        fVar17 = *(float *)(pauVar28[3] + 0xc);
        lVar29 = 0;
        do {
          pfVar2 = (float *)(*pauVar24 + lVar29);
          fVar18 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          *(float *)((long)&local_58 + lVar29) =
               fVar21 * fVar14 + fVar19 * fVar36 + fVar18 * fVar26 + fVar20 * fVar10;
          *(float *)((long)&local_58 + lVar29 + 4) =
               fVar21 * fVar15 + fVar19 * fVar37 + fVar18 * fVar27 + fVar20 * fVar11;
          *(float *)((long)&uStack_50 + lVar29) =
               fVar21 * fVar16 + fVar19 * fVar38 + fVar18 * fVar32 + fVar20 * fVar12;
          *(float *)((long)&uStack_50 + lVar29 + 4) =
               fVar21 * fVar17 + fVar19 * fVar39 + fVar18 * fVar33 + fVar20 * fVar13;
          lVar29 = lVar29 + 0x10;
        } while (lVar29 != 0x40);
        *(undefined8 *)*pauVar24 = local_58;
        *(undefined8 *)(*pauVar24 + 8) = uStack_50;
        *(undefined8 *)pauVar24[1] = local_48;
        *(undefined8 *)(pauVar24[1] + 8) = uStack_40;
        *(undefined8 *)pauVar24[2] = local_38;
        *(undefined8 *)(pauVar24[2] + 8) = uStack_30;
        *(undefined8 *)pauVar24[3] = local_28;
        *(undefined8 *)(pauVar24[3] + 8) = uStack_20;
      }
      if (puVar25 == puVar1 + (ulong)((int)uVar5 - 1) * 4) break;
      piVar30 = piVar30 + 0x12;
      pauVar24 = pauVar24 + 4;
      puVar23 = puVar25 + 4;
      puVar31 = puVar25;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SkeletonPose::CalculateJointStates() */

void __thiscall JPH::SkeletonPose::CalculateJointStates(SkeletonPose *this)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar17;
  float *pfVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  int *piVar22;
  long in_FS_OFFSET;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float local_78 [12];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined8 *)(this + 0x20);
  if (0 < (int)uVar3) {
    lVar21 = 0;
    puVar20 = (undefined8 *)(*(long *)(this + 0x30) + 0x10);
    piVar22 = (int *)(*(long *)(*(long *)this + 0x18) + 0x40);
    fVar64 = _LC5;
    do {
      pfVar1 = (float *)(*(long *)(this + 0x48) + lVar21);
      if (*piVar22 < 0) {
        fVar29 = *pfVar1;
        fVar34 = pfVar1[8];
        fVar39 = pfVar1[1];
        fVar40 = pfVar1[9];
        fVar42 = pfVar1[2];
        fVar43 = pfVar1[10];
        fVar44 = pfVar1[6];
        fVar55 = pfVar1[4];
        fVar2 = pfVar1[5];
        uVar27 = *(undefined8 *)(pfVar1 + 0xc);
        uVar24 = *(undefined8 *)(pfVar1 + 0xe);
      }
      else {
        pfVar18 = (float *)(*(long *)(this + 0x48) + (long)*piVar22 * 0x40);
        fVar49 = pfVar18[4];
        fVar50 = pfVar18[5];
        fVar4 = pfVar18[6];
        fVar5 = pfVar18[7];
        fVar6 = *pfVar18;
        fVar7 = pfVar18[1];
        fVar8 = pfVar18[2];
        fVar9 = pfVar18[3];
        fVar10 = pfVar18[8];
        fVar11 = pfVar18[9];
        fVar12 = pfVar18[10];
        fVar13 = pfVar18[0xb];
        fVar14 = pfVar18[0xc];
        fVar15 = pfVar18[0xd];
        fVar16 = pfVar18[0xe];
        fVar17 = pfVar18[0xf];
        lVar19 = 0;
        fVar30 = fVar8 * fVar13;
        fVar31 = fVar4 * fVar17;
        fVar32 = fVar12 * fVar9;
        fVar33 = fVar16 * fVar5;
        fVar51 = fVar8 * fVar11;
        fVar52 = fVar4 * fVar15;
        fVar53 = fVar12 * fVar7;
        fVar54 = fVar16 * fVar50;
        fVar23 = fVar7 * fVar13;
        fVar25 = fVar50 * fVar17;
        fVar26 = fVar11 * fVar9;
        fVar28 = fVar15 * fVar5;
        fVar60 = fVar6 * fVar11;
        fVar61 = fVar49 * fVar15;
        fVar62 = fVar10 * fVar7;
        fVar63 = fVar14 * fVar50;
        fVar56 = fVar6 * fVar12;
        fVar57 = fVar49 * fVar16;
        fVar58 = fVar10 * fVar8;
        fVar59 = fVar14 * fVar4;
        fVar35 = ((((fVar33 * fVar11 - fVar31 * fVar11) + fVar52 * fVar13) - fVar54 * fVar13) +
                 fVar25 * fVar12) - fVar12 * fVar28;
        fVar36 = ((((fVar32 * fVar15 - fVar30 * fVar15) + fVar51 * fVar17) - fVar53 * fVar17) +
                 fVar23 * fVar16) - fVar16 * fVar26;
        fVar37 = ((((fVar31 * fVar7 - fVar33 * fVar7) + fVar54 * fVar9) - fVar52 * fVar9) +
                 fVar28 * fVar8) - fVar8 * fVar25;
        fVar38 = ((((fVar30 * fVar50 - fVar32 * fVar50) + fVar53 * fVar5) - fVar51 * fVar5) +
                 fVar26 * fVar4) - fVar4 * fVar23;
        fVar45 = fVar6 * fVar13;
        fVar46 = fVar49 * fVar17;
        fVar47 = fVar10 * fVar9;
        fVar48 = fVar14 * fVar5;
        fVar41 = _LC4 / (fVar10 * fVar37 + fVar14 * fVar38 + fVar6 * fVar35 + fVar49 * fVar36);
        do {
          pfVar18 = (float *)((long)pfVar1 + lVar19);
          fVar2 = *pfVar18;
          fVar29 = pfVar18[1];
          fVar34 = pfVar18[2];
          fVar39 = pfVar18[3];
          *(float *)((long)local_78 + lVar19) =
               fVar39 * ((((fVar61 * fVar12 - (fVar10 * fVar52 - fVar10 * fVar54)) - fVar12 * fVar63
                          ) - fVar57 * fVar11) + fVar11 * fVar59) * fVar41 +
               fVar2 * fVar35 * fVar41 +
               fVar29 * ((((fVar10 * fVar31 - fVar10 * fVar33) - fVar12 * fVar46) + fVar12 * fVar48
                         + fVar13 * fVar57) - fVar13 * fVar59) * fVar41 +
               fVar34 * (((fVar13 * fVar63 - ((fVar25 * fVar10 - fVar28 * fVar10) + fVar13 * fVar61)
                          ) + fVar46 * fVar11) - fVar48 * fVar11) * fVar41;
          *(float *)((long)local_78 + lVar19 + 4) =
               fVar39 * ((((fVar60 * fVar16 - (fVar14 * fVar51 - fVar14 * fVar53)) - fVar16 * fVar62
                          ) - fVar56 * fVar15) + fVar15 * fVar58) * fVar41 +
               fVar2 * fVar36 * fVar41 +
               fVar29 * ((((fVar14 * fVar30 - fVar14 * fVar32) - fVar16 * fVar45) + fVar16 * fVar47
                         + fVar17 * fVar56) - fVar17 * fVar58) * fVar41 +
               fVar34 * (((fVar17 * fVar62 - ((fVar23 * fVar14 - fVar26 * fVar14) + fVar17 * fVar60)
                          ) + fVar45 * fVar15) - fVar47 * fVar15) * fVar41;
          *(float *)((long)local_78 + lVar19 + 8) =
               fVar39 * ((((fVar63 * fVar8 - (fVar6 * fVar54 - fVar6 * fVar52)) - fVar8 * fVar61) -
                         fVar59 * fVar7) + fVar7 * fVar57) * fVar41 +
               fVar2 * fVar37 * fVar41 +
               fVar29 * ((((fVar6 * fVar33 - fVar6 * fVar31) - fVar8 * fVar48) + fVar8 * fVar46 +
                         fVar9 * fVar59) - fVar9 * fVar57) * fVar41 +
               fVar34 * (((fVar9 * fVar61 - ((fVar28 * fVar6 - fVar25 * fVar6) + fVar9 * fVar63)) +
                         fVar48 * fVar7) - fVar46 * fVar7) * fVar41;
          *(float *)((long)local_78 + lVar19 + 0xc) =
               fVar39 * ((((fVar62 * fVar4 - (fVar49 * fVar53 - fVar49 * fVar51)) - fVar4 * fVar60)
                         - fVar58 * fVar50) + fVar50 * fVar56) * fVar41 +
               fVar2 * fVar38 * fVar41 +
               fVar29 * ((((fVar49 * fVar32 - fVar49 * fVar30) - fVar4 * fVar47) + fVar4 * fVar45 +
                         fVar5 * fVar58) - fVar5 * fVar56) * fVar41 +
               fVar34 * (((fVar5 * fVar60 - ((fVar26 * fVar49 - fVar23 * fVar49) + fVar5 * fVar62))
                         + fVar47 * fVar50) - fVar45 * fVar50) * fVar41;
          lVar19 = lVar19 + 0x10;
          fVar29 = local_78[0];
          fVar34 = local_78[8];
          fVar39 = local_78[1];
          fVar40 = local_78[9];
          fVar42 = local_78[2];
          fVar43 = local_78[10];
          fVar44 = local_78[6];
          fVar55 = local_78[4];
          fVar2 = local_78[5];
          uVar27 = local_48;
          uVar24 = uStack_40;
        } while (lVar19 != 0x40);
      }
      *puVar20 = uVar27;
      puVar20[1] = uVar24;
      fVar49 = fVar43 + fVar29 + fVar2;
      if (fVar49 < 0.0) {
        if (fVar29 < fVar2) {
          if (fVar2 < fVar43) goto LAB_001007e8;
          fVar49 = (fVar2 - (fVar43 + fVar29)) + _LC2;
          if (fVar49 < 0.0) {
            fVar49 = sqrtf(fVar49);
            fVar64 = _LC5;
          }
          else {
            fVar49 = SQRT(fVar49);
          }
          fVar50 = fVar64 / fVar49;
          uVar24 = CONCAT44(fVar49 * fVar64,(fVar39 + fVar55) * fVar50);
          uVar27 = CONCAT44((fVar34 - fVar42) * fVar50,(fVar40 + fVar44) * fVar50);
        }
        else if (fVar29 < fVar43) {
LAB_001007e8:
          fVar49 = (fVar43 - (fVar29 + fVar2)) + _LC2;
          if (fVar49 < 0.0) {
            fVar49 = sqrtf(fVar49);
            fVar64 = _LC5;
          }
          else {
            fVar49 = SQRT(fVar49);
          }
          fVar50 = fVar64 / fVar49;
          uVar24 = CONCAT44((fVar40 + fVar44) * fVar50,(fVar34 + fVar42) * fVar50);
          uVar27 = CONCAT44((fVar39 - fVar55) * fVar50,fVar49 * fVar64);
        }
        else {
          fVar49 = _LC2 + (fVar29 - (fVar43 + fVar2));
          if (fVar49 < 0.0) {
            fVar49 = sqrtf(fVar49);
            fVar64 = _LC5;
          }
          else {
            fVar49 = SQRT(fVar49);
          }
          fVar50 = fVar64 / fVar49;
          uVar24 = CONCAT44((fVar39 + fVar55) * fVar50,fVar49 * fVar64);
          uVar27 = CONCAT44((fVar44 - fVar40) * fVar50,(fVar42 + fVar34) * fVar50);
        }
      }
      else {
        fVar50 = SQRT(fVar49 + _LC2);
        fVar49 = fVar64 / fVar50;
        uVar24 = CONCAT44((fVar34 - fVar42) * fVar49,(fVar44 - fVar40) * fVar49);
        uVar27 = CONCAT44(fVar50 * fVar64,(fVar39 - fVar55) * fVar49);
      }
      lVar21 = lVar21 + 0x40;
      puVar20[-2] = uVar24;
      puVar20[-1] = uVar27;
      piVar22 = piVar22 + 0x12;
      puVar20 = puVar20 + 4;
    } while (((ulong)((int)uVar3 - 1) + 1) * 0x40 != lVar21);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::SkeletonPose::CalculateLocalSpaceJointMatrices(JPH::Mat44*) const */

void __thiscall
JPH::SkeletonPose::CalculateLocalSpaceJointMatrices(SkeletonPose *this,Mat44 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  Mat44 *pMVar10;
  Mat44 *pMVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = _LC2;
  uVar2 = *(undefined8 *)(this + 0x20);
  if (0 < (int)uVar2) {
    puVar9 = *(undefined8 **)(this + 0x30);
    pMVar10 = param_1;
    do {
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      pMVar11 = pMVar10 + 0x40;
      uVar5 = puVar9[2];
      uVar1 = *(undefined4 *)(puVar9 + 3);
      *(float *)(pMVar10 + 0x3c) = fVar6;
      puVar9 = puVar9 + 4;
      fVar7 = (float)uVar3;
      fVar12 = (float)uVar4;
      fVar8 = (float)((ulong)uVar3 >> 0x20);
      fVar17 = fVar7 + fVar7;
      *(undefined8 *)(pMVar10 + 0x30) = uVar5;
      fVar18 = fVar8 + fVar8;
      *(undefined4 *)(pMVar10 + 0x38) = uVar1;
      fVar13 = (float)((ulong)uVar4 >> 0x20);
      fVar19 = fVar12 * (fVar12 + fVar12);
      fVar16 = (fVar12 + fVar12) * fVar13;
      auVar15._0_4_ = (fVar6 - fVar8 * fVar18) - fVar19;
      auVar15._4_4_ = fVar8 * fVar17 + fVar16;
      auVar15._8_4_ = fVar12 * fVar17 - fVar18 * fVar13;
      auVar15._12_4_ = 0;
      *(undefined1 (*) [16])pMVar10 = auVar15;
      *(ulong *)(pMVar10 + 0x10) =
           CONCAT44((fVar6 - fVar19) - fVar7 * fVar17,fVar8 * fVar17 - fVar16);
      *(ulong *)(pMVar10 + 0x18) = (ulong)(uint)(fVar17 * fVar13 + fVar12 * fVar18);
      auVar14._4_4_ = fVar12 * fVar18 - fVar17 * fVar13;
      auVar14._0_4_ = fVar12 * fVar17 + fVar18 * fVar13;
      auVar14._8_4_ = (fVar6 - fVar7 * fVar17) - fVar8 * fVar18;
      auVar14._12_4_ = 0;
      *(undefined1 (*) [16])(pMVar10 + 0x20) = auVar14;
      pMVar10 = pMVar11;
    } while (param_1 + (ulong)((int)uVar2 - 1) * 0x40 + 0x40 != pMVar11);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SkeletonPose::Draw(JPH::SkeletonPose::DrawSettings const&, JPH::DebugRenderer*, JPH::Mat44
   const&) const */

void __thiscall
JPH::SkeletonPose::Draw
          (SkeletonPose *this,DrawSettings *param_1,DebugRenderer *param_2,Mat44 *param_3)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8 [16];
  undefined1 local_88 [4];
  float afStack_84 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_40;
  
  fVar4 = *(float *)param_3;
  fVar5 = *(float *)(param_3 + 4);
  fVar6 = *(float *)(param_3 + 8);
  fVar7 = *(float *)(param_3 + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = *(float *)(param_3 + 0x10);
  fVar9 = *(float *)(param_3 + 0x14);
  fVar10 = *(float *)(param_3 + 0x18);
  fVar11 = *(float *)(param_3 + 0x1c);
  fVar12 = *(float *)(param_3 + 0x20);
  fVar13 = *(float *)(param_3 + 0x24);
  fVar14 = *(float *)(param_3 + 0x28);
  fVar15 = *(float *)(param_3 + 0x2c);
  fVar16 = *(float *)(param_3 + 0x30);
  fVar17 = *(float *)(param_3 + 0x34);
  fVar18 = *(float *)(param_3 + 0x38);
  fVar19 = *(float *)(param_3 + 0x3c);
  uStack_4c = 0x3f800000;
  _local_88 = ZEXT416(_LC4);
  local_58 = *(undefined8 *)(this + 0x10);
  lVar24 = 0;
  local_78 = __LC6;
  uStack_70 = _UNK_00100ef8;
  local_50 = *(undefined4 *)(this + 0x18);
  local_68 = __LC7;
  uStack_60 = _UNK_00100f08;
  do {
    fVar20 = *(float *)(local_88 + lVar24);
    fVar21 = *(float *)(local_88 + lVar24 + 4);
    fVar22 = *(float *)(local_88 + lVar24 + 8);
    fVar23 = *(float *)(local_88 + lVar24 + 0xc);
    *(float *)((long)local_c8 + lVar24) =
         fVar23 * fVar16 + fVar21 * fVar8 + fVar20 * fVar4 + fVar22 * fVar12;
    *(float *)((long)local_c8 + lVar24 + 4) =
         fVar23 * fVar17 + fVar21 * fVar9 + fVar20 * fVar5 + fVar22 * fVar13;
    *(float *)((long)local_c8 + lVar24 + 8) =
         fVar23 * fVar18 + fVar21 * fVar10 + fVar20 * fVar6 + fVar22 * fVar14;
    *(float *)((long)local_c8 + lVar24 + 0xc) =
         fVar23 * fVar19 + fVar21 * fVar11 + fVar20 * fVar7 + fVar22 * fVar15;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  lVar24 = *(long *)this;
  if (0 < *(int *)(lVar24 + 8)) {
    lVar28 = 0;
    lVar27 = 0;
    do {
      lVar3 = *(long *)(this + 0x48);
      lVar25 = 0;
      do {
        pfVar1 = (float *)(lVar27 * 0x40 + lVar3 + lVar25);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        *(float *)(local_88 + lVar25) =
             fVar7 * local_c8[0xc] + fVar4 * local_c8[0] + fVar5 * local_c8[4] + fVar6 * local_c8[8]
        ;
        *(float *)(local_88 + lVar25 + 4) =
             fVar7 * local_c8[0xd] + fVar4 * local_c8[1] + fVar5 * local_c8[5] + fVar6 * local_c8[9]
        ;
        *(float *)(local_88 + lVar25 + 8) =
             fVar7 * local_c8[0xe] +
             fVar4 * local_c8[2] + fVar5 * local_c8[6] + fVar6 * local_c8[10];
        *(float *)(local_88 + lVar25 + 0xc) =
             fVar7 * local_c8[0xf] +
             fVar4 * local_c8[3] + fVar5 * local_c8[7] + fVar6 * local_c8[0xb];
        lVar25 = lVar25 + 0x10;
      } while (lVar25 != 0x40);
      if ((*param_1 != (DrawSettings)0x0) &&
         (iVar2 = *(int *)(*(long *)(lVar24 + 0x18) + 0x40 + lVar28), -1 < iVar2)) {
        pfVar1 = (float *)(lVar3 + 0x30 + (long)iVar2 * 0x40);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        (**(code **)(*(long *)param_2 + 0x10))
                  (CONCAT44(fVar6 * local_c8[9] + fVar4 * local_c8[1] + fVar5 * local_c8[5] +
                            local_c8[0xd],
                            fVar6 * local_c8[8] + fVar4 * local_c8[0] + fVar5 * local_c8[4] +
                            local_c8[0xc]),
                   CONCAT44(fVar6 * local_c8[0xb] + fVar4 * local_c8[3] + fVar5 * local_c8[7] +
                            local_c8[0xf],
                            fVar6 * local_c8[10] + fVar4 * local_c8[2] + fVar5 * local_c8[6] +
                            local_c8[0xe]),local_58,CONCAT44(uStack_4c,local_50),param_2,
                   (undefined4)Color::sGreen);
      }
      if (param_1[1] != (DrawSettings)0x0) {
        JPH::DebugRenderer::DrawCoordinateSystem((Mat44 *)param_2,_LC8);
      }
      if (param_1[2] != (DrawSettings)0x0) {
        puVar26 = (undefined8 *)(*(long *)(lVar24 + 0x18) + lVar28);
        local_d0 = *puVar26;
        local_d8 = puVar26[1];
        (**(code **)(*(long *)param_2 + 0x38))
                  (local_58,CONCAT44(uStack_4c,local_50),param_2,&local_d8,(undefined4)Color::sWhite
                  );
      }
      lVar27 = lVar27 + 1;
      lVar28 = lVar28 + 0x48;
    } while ((int)lVar27 < *(int *)(*(long *)this + 8));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SkeletonPose::SetSkeleton(JPH::Skeleton const*) */

void JPH::SkeletonPose::_GLOBAL__sub_I_SetSkeleton(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC9;
  }
  return;
}


