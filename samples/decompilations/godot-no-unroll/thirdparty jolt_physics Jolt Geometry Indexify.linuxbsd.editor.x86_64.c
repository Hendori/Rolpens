
/* JPH::sIndexifyVerticesBruteForce(JPH::Array<JPH::Triangle, JPH::STLAllocator<JPH::Triangle> >
   const&, unsigned int const*, unsigned int const*, JPH::Array<unsigned int,
   JPH::STLAllocator<unsigned int> >&, float) [clone .isra.0] */

void JPH::sIndexifyVerticesBruteForce
               (Array *param_1,uint *param_2,uint *param_3,Array *param_4,float param_5)

{
  Array *pAVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  
  if (param_3 <= param_2) {
    return;
  }
  uVar5 = *param_2;
  uVar8 = (ulong)uVar5;
  puVar7 = param_2 + 1;
  pAVar1 = param_1 + (ulong)(uVar5 / 3) * 0x2c + (ulong)(uVar5 % 3) * 0xc;
  fVar2 = *(float *)pAVar1;
  fVar3 = *(float *)(pAVar1 + 4);
  fVar4 = *(float *)(pAVar1 + 8);
  do {
    puVar6 = puVar7;
    if (param_3 <= puVar7) {
      return;
    }
    while( true ) {
      uVar5 = *puVar6;
      uVar9 = (ulong)uVar5;
      pAVar1 = param_1 + (ulong)(uVar5 / 3) * 0x2c + (ulong)(uVar5 % 3) * 0xc;
      if ((*(float *)(pAVar1 + 8) - fVar4) * (*(float *)(pAVar1 + 8) - fVar4) +
          (*(float *)(pAVar1 + 4) - fVar3) * (*(float *)(pAVar1 + 4) - fVar3) +
          (*(float *)pAVar1 - fVar2) * (*(float *)pAVar1 - fVar2) + 0.0 <= param_5 * param_5) break;
      puVar6 = puVar6 + 1;
      if (param_3 <= puVar6) goto LAB_0010013c;
    }
    uVar10 = *(uint *)(param_4 + uVar8 * 4);
    if ((uint)uVar8 <= uVar10) goto LAB_00100114;
    do {
      uVar8 = (ulong)uVar10;
      bVar11 = *(uint *)(param_4 + (ulong)uVar10 * 4) < uVar10;
      uVar10 = *(uint *)(param_4 + (ulong)uVar10 * 4);
    } while (bVar11);
    uVar10 = *(uint *)(param_4 + uVar9 * 4);
    if (uVar10 < uVar5) {
      do {
        uVar9 = (ulong)uVar10;
        uVar5 = uVar10;
LAB_00100114:
        uVar10 = *(uint *)(param_4 + uVar9 * 4);
      } while (uVar10 < uVar5);
    }
    uVar10 = (uint)uVar8;
    if (uVar10 <= uVar5) {
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      uVar8 = (ulong)uVar5;
      uVar5 = uVar10;
    }
    *(uint *)(param_4 + uVar8 * 4) = uVar5;
    *(uint *)(param_4 + (ulong)puVar7[-1] * 4) = uVar5;
    *(uint *)(param_4 + (ulong)*puVar6 * 4) = uVar5;
LAB_0010013c:
    uVar5 = *puVar7;
    uVar8 = (ulong)uVar5;
    puVar7 = puVar7 + 1;
    pAVar1 = param_1 + (ulong)(uVar5 % 3) * 0xc + (uVar8 / 3) * 0x2c;
    fVar2 = *(float *)pAVar1;
    fVar3 = *(float *)(pAVar1 + 4);
    fVar4 = *(float *)(pAVar1 + 8);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::sIndexifyVerticesRecursively(JPH::Array<JPH::Triangle, JPH::STLAllocator<JPH::Triangle> >
   const&, unsigned int*, unsigned int, unsigned int*, JPH::Array<unsigned int,
   JPH::STLAllocator<unsigned int> >&, float, unsigned int) */

void JPH::sIndexifyVerticesRecursively
               (Array *param_1,uint *param_2,uint param_3,uint *param_4,Array *param_5,float param_6
               ,uint param_7)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  Array *pAVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  Array *pAVar12;
  uint *puVar13;
  ulong uVar14;
  uint *__dest;
  uint *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [12];
  float fVar21;
  undefined1 auVar22 [12];
  float fVar24;
  uint local_84;
  float local_58 [6];
  long local_40;
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  
  uVar10 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((8 < param_3) && (param_7 != 0)) {
    local_84 = param_7 - 1;
    fVar24 = (float)((uint)param_6 ^ __LC7);
    puVar11 = param_2;
    fVar20 = _LC6;
    fVar21 = _LC6;
    fVar17 = _LC6;
    do {
      puVar8 = puVar11 + uVar10;
      if (puVar11 < puVar8) {
        puVar5 = puVar11;
        auVar19 = __LC3;
        auVar23 = __LC1;
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          auVar2 = *(undefined1 (*) [16])
                    (*(long *)(param_1 + 0x10) +
                    (ulong)(uVar9 / 3) * 0x2c + (ulong)(uVar9 % 3) * 0xc);
          auVar23 = minps(auVar23,auVar2);
          auVar22 = auVar23._0_12_;
          auVar19 = maxps(auVar19,auVar2);
          auVar18 = auVar19._0_12_;
        } while (puVar5 < puVar8);
        local_58[0] = (auVar23._0_4_ + auVar19._0_4_) * _LC6;
        local_58[1] = (auVar23._4_4_ + auVar19._4_4_) * fVar20;
        local_58[2] = (auVar23._8_4_ + auVar19._8_4_) * fVar21;
        local_58[3] = (auVar23._12_4_ + auVar19._12_4_) * fVar17;
      }
      else {
        auVar22 = SUB1612(__LC1,0);
        auVar18 = SUB1612(__LC3,0);
        local_58[0] = 0.0;
        local_58[1] = 0.0;
        local_58[2] = 0.0;
        local_58[3] = 0.0;
      }
      fVar17 = (auVar18._0_4_ - auVar22._0_4_) * _LC6;
      fVar20 = (auVar18._4_4_ - auVar22._4_4_) * fVar20;
      fVar21 = (auVar18._8_4_ - auVar22._8_4_) * fVar21;
      if (fVar17 <= fVar20) {
        uVar9 = (fVar20 < fVar21) + 1;
        fVar20 = local_58[(fVar20 < fVar21) + 1];
      }
      else {
        uVar9 = (uint)(fVar17 < fVar21) * 2;
        fVar20 = local_58[uVar9];
      }
      if (puVar8 <= puVar11) {
        sIndexifyVerticesRecursively(param_1,puVar11,0,param_4,param_5,param_6,local_84);
        puVar8 = puVar11;
        goto LAB_00100478;
      }
      pAVar12 = *(Array **)(param_1 + 0x10);
      puVar5 = puVar11;
      puVar13 = puVar8;
      __dest = puVar11;
      puVar15 = param_4;
      do {
        while( true ) {
          uVar3 = *puVar5;
          if (fVar24 <= *(float *)(pAVar12 +
                                  (long)(int)uVar9 * 4 +
                                  (ulong)(uVar3 / 3) * 0x2c + (ulong)(uVar3 % 3) * 0xc) - fVar20)
          break;
          *__dest = uVar3;
          __dest = __dest + 1;
LAB_001002d3:
          puVar5 = puVar5 + 1;
          if (puVar13 <= puVar5) goto LAB_0010032f;
        }
        if (*(float *)(pAVar12 +
                      (long)(int)uVar9 * 4 + (ulong)(uVar3 / 3) * 0x2c + (ulong)(uVar3 % 3) * 0xc) -
            fVar20 <= param_6) {
          *puVar15 = uVar3;
          puVar15 = puVar15 + 1;
          goto LAB_001002d3;
        }
        puVar1 = puVar13 + -1;
        puVar13 = puVar13 + -1;
        *puVar5 = *puVar1;
        *puVar13 = uVar3;
      } while (puVar5 < puVar13);
LAB_0010032f:
      uVar6 = (long)puVar15 - (long)param_4 >> 2;
      iVar4 = (int)uVar6;
      if (iVar4 == (int)uVar10) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001004f8;
        pAVar7 = *(Array **)(param_5 + 0x10);
        goto LAB_001004e5;
      }
      uVar9 = iVar4 + (int)((long)puVar8 - (long)puVar13 >> 2);
      uVar10 = (ulong)uVar9;
      bVar16 = local_84 != 0;
      uVar14 = (long)__dest - (long)puVar11 >> 2;
      param_2 = puVar11 + (uVar14 & 0xffffffff);
      memcpy(__dest,param_4,(uVar6 & 0xffffffff) << 2);
      sIndexifyVerticesRecursively
                (param_1,puVar11,iVar4 + (int)uVar14,param_4,param_5,param_6,local_84);
      local_84 = local_84 - 1;
      puVar11 = param_2;
      fVar20 = _UNK_00100c24;
      fVar21 = _UNK_00100c28;
      fVar17 = _UNK_00100c2c;
    } while (8 < uVar9 && bVar16);
  }
  puVar8 = param_2 + uVar10;
  puVar11 = param_2;
LAB_00100478:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001004f8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pAVar12 = *(Array **)(param_1 + 0x10);
  pAVar7 = *(Array **)(param_5 + 0x10);
LAB_001004e5:
  sIndexifyVerticesBruteForce(pAVar12,puVar11,puVar8,pAVar7,param_6);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Indexify(JPH::Array<JPH::Triangle, JPH::STLAllocator<JPH::Triangle> > const&,
   JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&, float) */

void JPH::Indexify(Array *param_1,Array *param_2,Array *param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  Array local_78 [8];
  ulong uStack_70;
  long local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  long local_40;
  
  uVar19 = *(ulong *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = (int)uVar19;
  uVar8 = iVar5 * 3;
  uVar18 = CONCAT44(0,uVar8);
  if (uVar18 == 0) {
    local_68 = 0;
    _local_78 = (undefined1  [16])0x0;
    if (iVar5 != 0) {
      *(undefined4 *)(long)(int)uVar8 = 0;
    }
    puVar16 = (uint *)0x0;
    sIndexifyVerticesRecursively(param_1,(uint *)0x0,0,(uint *)0x0,local_78,param_4,0x20);
  }
  else {
    puVar16 = (uint *)(*Reallocate)(0,0);
    lVar10 = 0;
    do {
      puVar16[lVar10] = (uint)lVar10;
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < uVar8);
    _local_78 = (undefined1  [16])0x0;
    local_68 = 0;
    local_68 = (*Reallocate)(0,0);
    uStack_70._0_4_ = uVar8;
    local_78 = (Array  [8])uVar18;
    uStack_70._4_4_ = 0;
    if (iVar5 != 0) {
      lVar10 = 0;
      do {
        *(int *)(local_68 + lVar10 * 4) = (int)lVar10;
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < uVar8);
    }
    puVar17 = (uint *)(*Reallocate)(0,0,uVar18 * 4);
    sIndexifyVerticesRecursively(param_1,puVar16,uVar8,puVar17,local_78,param_4,0x20);
    if (puVar17 != (uint *)0x0) {
      (*_Free)(puVar17);
    }
  }
  if (iVar5 == 0) {
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_3 = 0;
    lVar10 = local_68;
  }
  else {
    lVar10 = 0;
    uVar21 = 0;
    do {
      iVar3 = *(int *)(local_68 + (ulong)*(uint *)(local_68 + lVar10 * 4) * 4);
      iVar9 = (int)lVar10;
      *(int *)(local_68 + lVar10 * 4) = iVar3;
      lVar10 = lVar10 + 1;
      uVar21 = uVar21 + (iVar3 == iVar9);
    } while ((uint)lVar10 < uVar8);
    uVar18 = (ulong)uVar21;
    *(undefined8 *)param_2 = 0;
    if (*(ulong *)(param_2 + 8) < uVar18) {
      uVar11 = (*Reallocate)(*(undefined8 *)(param_2 + 0x10),*(ulong *)(param_2 + 8) * 0xc,
                             uVar18 * 0xc);
      *(undefined8 *)(param_2 + 0x10) = uVar11;
      *(ulong *)(param_2 + 8) = uVar18;
    }
    uVar18 = 0;
    while( true ) {
      puVar17 = (uint *)(local_68 + uVar18 * 4);
      if (*puVar17 == (uint)uVar18) {
        lVar10 = *(long *)param_2;
        lVar22 = *(long *)(param_1 + 0x10);
        lVar12 = *(long *)(param_2 + 0x10);
        *puVar17 = (uint)lVar10;
        uVar4 = *(ulong *)(param_2 + 8);
        uVar13 = lVar10 + 1;
        uVar6 = uVar18;
        if (uVar4 < uVar13) {
          if (uVar13 <= uVar4 * 2) {
            uVar13 = uVar4 * 2;
          }
          lVar12 = (*Reallocate)(lVar12,uVar4 * 0xc,uVar13 * 0xc);
          lVar10 = *(long *)param_2;
          uVar6 = uVar18 & 0xffffffff;
          *(long *)(param_2 + 0x10) = lVar12;
          *(ulong *)(param_2 + 8) = uVar13;
          uVar13 = lVar10 + 1;
        }
        *(ulong *)param_2 = uVar13;
        puVar1 = (undefined8 *)(lVar12 + lVar10 * 0xc);
        if (puVar1 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)
                   (lVar22 + ((uVar6 & 0xffffffff) / 3) * 0x2c +
                   (ulong)(uint)((int)uVar6 + (int)((uVar6 & 0xffffffff) / 3) * -3) * 0xc);
          *puVar1 = *puVar2;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
        }
      }
      else {
        *puVar17 = *(uint *)(local_68 + (ulong)*puVar17 * 4);
      }
      if (uVar8 <= (uint)uVar18 + 1) break;
      uVar18 = uVar18 + 1;
    }
    uVar19 = uVar19 & 0xffffffff;
    *(undefined8 *)param_3 = 0;
    if (*(ulong *)(param_3 + 8) < uVar19) {
      uVar11 = (*Reallocate)(*(undefined8 *)(param_3 + 0x10),*(ulong *)(param_3 + 8) * 0x14,
                             uVar19 * 0x14);
      *(undefined8 *)(param_3 + 0x10) = uVar11;
      *(ulong *)(param_3 + 8) = uVar19;
      lVar10 = local_68;
      if (iVar5 == 0) goto LAB_0010082f;
    }
    uVar21 = 0;
    lVar22 = 0;
    lVar10 = local_68;
    fVar30 = _LC8;
    do {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x24 + lVar22);
      puVar17 = &local_58;
      uVar20 = uVar21;
      do {
        uVar19 = (ulong)uVar20;
        puVar14 = puVar17 + 1;
        uVar20 = uVar20 + 1;
        *puVar17 = *(uint *)(lVar10 + uVar19 * 4);
        puVar17 = puVar14;
      } while (&uStack_4c != puVar14);
      uVar19 = (ulong)local_58;
      lVar12 = *(long *)(param_2 + 0x10);
      fVar28 = *(float *)(lVar12 + 4 + uVar19 * 0xc);
      fVar27 = *(float *)(lVar12 + uVar19 * 0xc);
      fVar29 = *(float *)(lVar12 + 8 + uVar19 * 0xc);
      uVar19 = (ulong)uStack_54;
      uVar18 = (ulong)uStack_50;
      fVar24 = *(float *)(lVar12 + uVar19 * 0xc) - fVar27;
      fVar25 = *(float *)(lVar12 + 4 + uVar19 * 0xc) - fVar28;
      fVar26 = *(float *)(lVar12 + 8 + uVar19 * 0xc) - fVar29;
      fVar27 = *(float *)(lVar12 + uVar18 * 0xc) - fVar27;
      fVar28 = *(float *)(lVar12 + 4 + uVar18 * 0xc) - fVar28;
      fVar29 = *(float *)(lVar12 + 8 + uVar18 * 0xc) - fVar29;
      fVar23 = fVar28 * fVar24 - fVar25 * fVar27;
      fVar28 = fVar29 * fVar25 - fVar26 * fVar28;
      fVar27 = fVar27 * fVar26 - fVar24 * fVar29;
      if (fVar30 < fVar23 * fVar23 + fVar27 * fVar27 + fVar28 * fVar28 + 0.0) {
        lVar12 = *(long *)param_3;
        uVar18 = *(ulong *)(param_3 + 8);
        lVar15 = *(long *)(param_3 + 0x10);
        uVar19 = lVar12 + 1;
        if (uVar18 < uVar19) {
          if (uVar19 <= uVar18 * 2) {
            uVar19 = uVar18 * 2;
          }
          lVar15 = (*Reallocate)(lVar15,uVar18 * 0x14,uVar19 * 0x14);
          lVar12 = *(long *)param_3;
          *(long *)(param_3 + 0x10) = lVar15;
          *(ulong *)(param_3 + 8) = uVar19;
          uVar19 = lVar12 + 1;
          lVar10 = local_68;
          fVar30 = _LC8;
        }
        *(ulong *)param_3 = uVar19;
        puVar1 = (undefined8 *)(lVar15 + lVar12 * 0x14);
        if (puVar1 != (undefined8 *)0x0) {
          uStack_4c = (uint)uVar11;
          uStack_48 = (undefined4)((ulong)uVar11 >> 0x20);
          *puVar1 = CONCAT44(uStack_54,local_58);
          puVar1[1] = CONCAT44(uStack_4c,uStack_50);
          *(undefined4 *)(puVar1 + 2) = uStack_48;
        }
      }
      uVar21 = uVar21 + 3;
      lVar22 = lVar22 + 0x2c;
    } while (uVar21 != uVar8);
  }
LAB_0010082f:
  if (lVar10 != 0) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uStack_70;
    _local_78 = auVar7 << 0x40;
    (*_Free)();
  }
  if (puVar16 == (uint *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_Free)(puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Deindexify(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> > const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> > const&,
   JPH::Array<JPH::Triangle, JPH::STLAllocator<JPH::Triangle> >&) */

void JPH::Deindexify(Array *param_1,Array *param_2,Array *param_3)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  
  uVar5 = *(ulong *)param_2;
  lVar10 = *(long *)(param_3 + 0x10);
  uVar11 = uVar5;
  if (*(ulong *)(param_3 + 8) < uVar5) {
    lVar10 = (*Reallocate)(lVar10,*(ulong *)(param_3 + 8) * 0x2c,uVar5 * 0x2c);
    *(ulong *)(param_3 + 8) = uVar5;
    uVar11 = *(ulong *)param_2;
    *(long *)(param_3 + 0x10) = lVar10;
  }
  uVar1 = lVar10 + uVar5 * 0x2c;
  uVar7 = lVar10 + *(long *)param_3 * 0x2c;
  if (uVar7 < uVar1) {
    if (uVar7 == 0) goto LAB_00100b18;
    do {
      *(undefined8 *)(uVar7 + 0x24) = 0;
LAB_00100b18:
      uVar7 = uVar7 + 0x2c;
    } while (uVar7 < uVar1);
  }
  *(ulong *)param_3 = uVar5;
  if (uVar11 != 0) {
    puVar14 = *(uint **)(param_2 + 0x10);
    lVar6 = *(long *)(param_1 + 0x10);
    puVar13 = (undefined8 *)(lVar10 + 0x24);
    puVar2 = puVar14 + uVar11 * 5;
    do {
      *puVar13 = *(undefined8 *)(puVar14 + 3);
      puVar8 = (undefined8 *)((long)puVar13 + -0x24);
      puVar12 = puVar14;
      do {
        uVar4 = *puVar12;
        puVar9 = (undefined8 *)((long)puVar8 + 0xc);
        puVar12 = puVar12 + 1;
        puVar3 = (undefined8 *)(lVar6 + (ulong)uVar4 * 0xc);
        *puVar8 = *puVar3;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar3 + 1);
        puVar8 = puVar9;
      } while (puVar13 != puVar9);
      puVar14 = puVar14 + 5;
      puVar13 = (undefined8 *)((long)puVar13 + 0x2c);
    } while (puVar14 != puVar2);
  }
  return;
}



/* JPH::Indexify(JPH::Array<JPH::Triangle, JPH::STLAllocator<JPH::Triangle> > const&,
   JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&, float) */

void JPH::_GLOBAL__sub_I_Indexify(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC10;
  }
  return;
}


