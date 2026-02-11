
/* JPH::LargeIslandSplitter::Splits::FetchNextBatch(unsigned int&, unsigned int&, unsigned int&,
   unsigned int&, bool&) */

undefined8 __thiscall
JPH::LargeIslandSplitter::Splits::FetchNextBatch
          (Splits *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,bool *param_5)

{
  int iVar1;
  ulong uVar2;
  Splits *pSVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Splits *pSVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(ulong *)(this + 0x218);
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  if (*(int *)(this + 0x208) <= (int)(uint)(ushort)(uVar2 >> 0x30)) {
    return 2;
  }
  pSVar3 = this + 0x218;
  if ((short)(uVar2 >> 0x20) == 0x1f) {
    if ((uint)uVar2 != 0) {
      return 0;
    }
  }
  else {
    pSVar7 = this + (uVar2 >> 0x20 & 0xffff) * 0x10;
    if ((uint)(((*(int *)(pSVar7 + 0xc) + *(int *)(pSVar7 + 4)) - *(int *)pSVar7) -
              *(int *)(pSVar7 + 8)) <= (uint)uVar2) {
      return 0;
    }
  }
  LOCK();
  uVar2 = *(ulong *)pSVar3;
  *(ulong *)pSVar3 = *(ulong *)pSVar3 + 0x10;
  UNLOCK();
  uVar8 = (uint)(ushort)(uVar2 >> 0x30);
  if ((int)uVar8 < *(int *)(this + 0x208)) {
    uVar6 = (uint)uVar2;
    if ((short)(uVar2 >> 0x20) == 0x1f) {
      if (uVar6 == 0) {
        *param_1 = *(uint *)(this + 0x1f8);
        *param_2 = *(uint *)(this + 0x1fc);
        *param_3 = *(uint *)(this + 0x1f0);
        *param_4 = *(uint *)(this + 500);
        *param_5 = uVar8 == 0;
        return 1;
      }
    }
    else {
      pSVar3 = this + (uVar2 >> 0x20 & 0xffff) * 0x10;
      iVar1 = *(int *)(pSVar3 + 0xc);
      iVar5 = *(int *)(pSVar3 + 8);
      uVar10 = iVar1 - iVar5;
      uVar9 = (uVar10 - *(int *)pSVar3) + *(int *)(pSVar3 + 4);
      if (uVar6 < uVar9) {
        if (uVar6 + 0x10 <= uVar9) {
          uVar9 = uVar6 + 0x10;
        }
        if (uVar9 < uVar10) {
          *param_1 = iVar5 + uVar6;
          uVar6 = 0;
          *param_2 = uVar9 + *(int *)(pSVar3 + 8);
          *param_3 = 0;
        }
        else {
          if (uVar6 < uVar10) {
            *param_1 = uVar6 + iVar5;
            *param_2 = *(uint *)(pSVar3 + 0xc);
            iVar4 = *(int *)pSVar3;
          }
          else {
            *param_1 = 0;
            *param_2 = 0;
            iVar4 = *(int *)pSVar3;
            uVar10 = uVar6;
          }
          iVar5 = iVar5 - iVar1;
          *param_3 = uVar10 + iVar4 + iVar5;
          uVar6 = iVar5 + *(int *)pSVar3 + uVar9;
        }
        *param_4 = uVar6;
        *param_5 = uVar8 == 0;
        return 1;
      }
    }
    return 0;
  }
  return 2;
}



/* JPH::LargeIslandSplitter::Splits::MarkBatchProcessed(unsigned int, bool&, bool&) */

void __thiscall
JPH::LargeIslandSplitter::Splits::MarkBatchProcessed
          (Splits *this,uint param_1,bool *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  Splits *pSVar9;
  ulong uVar10;
  
  uVar6 = *(ulong *)(this + 0x218);
  uVar10 = uVar6 >> 0x30;
  uVar8 = uVar6 >> 0x20 & 0xffff;
  pSVar9 = this + uVar8 * 0x10;
  iVar2 = *(int *)(pSVar9 + 0xc);
  iVar3 = *(int *)(pSVar9 + 4);
  iVar4 = *(int *)pSVar9;
  iVar5 = *(int *)(pSVar9 + 8);
  uVar7 = (uint)(ushort)(uVar6 >> 0x30);
  *param_2 = *(int *)(this + 0x208) - 1U == uVar7;
  pSVar9 = this + 0x220;
  LOCK();
  iVar1 = *(int *)pSVar9;
  *(uint *)pSVar9 = *(int *)pSVar9 + param_1;
  UNLOCK();
  if (iVar1 + param_1 < (uint)(((iVar2 + iVar3) - iVar4) - iVar5)) {
    *param_3 = *(int *)(this + 0x208) <= (int)uVar7;
    return;
  }
  *(undefined4 *)(this + 0x220) = 0;
  do {
    if ((int)uVar8 == 0x1f) {
      uVar10 = (ulong)((int)uVar10 + 1);
      uVar7 = 0;
    }
    else {
      uVar7 = (int)uVar8 + 1;
    }
    uVar8 = (ulong)uVar7;
    if (*(uint *)(this + 0x204) <= uVar7) {
      uVar8 = 0x1f;
    }
  } while (((int)uVar10 < *(int *)(this + 0x208)) &&
          (pSVar9 = this + uVar8 * 0x10,
          *(int *)(pSVar9 + 8) == (*(int *)(pSVar9 + 0xc) + *(int *)(pSVar9 + 4)) - *(int *)pSVar9))
  ;
  *(ulong *)(this + 0x218) = uVar10 << 0x30 | uVar8 << 0x20;
  *param_3 = *(int *)(this + 0x208) <= (int)uVar10;
  return;
}



/* JPH::LargeIslandSplitter::~LargeIslandSplitter() */

void __thiscall JPH::LargeIslandSplitter::~LargeIslandSplitter(LargeIslandSplitter *this)

{
  return;
}



/* JPH::LargeIslandSplitter::Prepare(JPH::IslandBuilder const&, unsigned int, JPH::TempAllocator*)
    */

void __thiscall
JPH::LargeIslandSplitter::Prepare
          (LargeIslandSplitter *this,IslandBuilder *param_1,uint param_2,TempAllocator *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint *local_60;
  long local_58;
  uint *local_50;
  long local_48;
  long local_40;
  
  iVar4 = *(int *)(param_1 + 0x6c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x20) = 0;
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      JPH::IslandBuilder::GetContactsInIsland((uint)param_1,(uint **)(ulong)uVar3,&local_60);
      lVar6 = local_58 - (long)local_60;
      JPH::IslandBuilder::GetConstraintsInIsland((uint)param_1,(uint **)(ulong)uVar3,&local_50);
      uVar5 = (int)(lVar6 >> 2) + (int)(local_48 - (long)local_50 >> 2);
      if (uVar5 < 0x80) {
        iVar4 = *(int *)(this + 0x20);
        break;
      }
      iVar4 = uVar5 + *(int *)(this + 0x20);
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      uVar3 = uVar3 + 1;
      *(int *)(this + 0x20) = iVar4;
    } while (uVar3 < *(uint *)(param_1 + 0x6c));
    if (iVar4 != 0) {
      *(uint *)this = param_2;
      uVar1 = (**(code **)(*(long *)param_3 + 0x10))(param_3,param_2 * 4);
      *(undefined8 *)(this + 8) = uVar1;
      iVar4 = *(int *)(this + 0x20);
      uVar1 = (**(code **)(*(long *)param_3 + 0x10))(param_3,iVar4 * 4);
      *(undefined8 *)(this + 0x10) = uVar1;
      uVar1 = (**(code **)(*(long *)param_3 + 0x10))(param_3,iVar4 * 4);
      *(undefined8 *)(this + 0x18) = uVar1;
      lVar6 = (**(code **)(*(long *)param_3 + 0x10))(param_3,*(int *)(this + 0x28) * 0x228);
      *(long *)(this + 0x30) = lVar6;
      if (*(int *)(this + 0x28) != 0) {
        lVar2 = 0;
        uVar3 = 0;
        while( true ) {
          *(undefined8 *)(lVar6 + 0x218 + lVar2) = 0xffffffff;
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 0x228;
          if (*(uint *)(this + 0x28) <= uVar3) break;
          lVar6 = *(long *)(this + 0x30);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::LargeIslandSplitter::AssignSplit(JPH::Body const*, JPH::Body const*) */

int __thiscall
JPH::LargeIslandSplitter::AssignSplit(LargeIslandSplitter *this,Body *param_1,Body *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  
  lVar3 = *(long *)(this + 8);
  lVar6 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_1 + 0x48) == 0) {
    if (lVar6 != 0) {
      puVar7 = (uint *)((ulong)*(uint *)(lVar6 + 0x70) * 4 + lVar3);
      uVar2 = *puVar7;
      goto joined_r0x001004f6;
    }
LAB_0010051f:
    lVar6 = 0x3fffffffc;
  }
  else {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x48) + 0x70);
    if (lVar6 == 0) {
      if ((uVar2 != 0xffffffff) && (param_1[0x78] == (Body)0x2)) goto LAB_0010048e;
      goto LAB_0010051f;
    }
    uVar4 = *(uint *)(lVar6 + 0x70);
    if ((uVar2 != 0xffffffff) && (param_1[0x78] == (Body)0x2)) {
      if ((uVar4 != 0xffffffff) && (param_2[0x78] == (Body)0x2)) {
        puVar7 = (uint *)(lVar3 + (ulong)uVar2 * 4);
        puVar1 = (uint *)(lVar3 + (ulong)uVar4 * 4);
        uVar2 = *puVar7;
        uVar4 = (*puVar1 | uVar2) ^ 0xffffffff;
        if (uVar4 == 0) {
          uVar4 = 0x80000000;
          iVar5 = 0x1f;
        }
        else {
          iVar5 = 0;
          for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          uVar4 = 1 << ((byte)iVar5 & 0x1f);
        }
        *puVar7 = uVar2 | uVar4;
        *puVar1 = *puVar1 | uVar4;
        return iVar5;
      }
LAB_0010048e:
      puVar7 = (uint *)(lVar3 + (ulong)uVar2 * 4);
      uVar2 = *puVar7;
      uVar4 = uVar2 ^ 0xffffffff;
      if (uVar4 == 0) {
        uVar4 = 0x80000000;
        iVar5 = 0x1f;
      }
      else {
        iVar5 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar4 = 1 << ((byte)iVar5 & 0x1f);
      }
      *puVar7 = uVar2 | uVar4;
      return iVar5;
    }
    lVar6 = (ulong)uVar4 << 2;
  }
  puVar7 = (uint *)(lVar6 + lVar3);
  uVar2 = *puVar7;
joined_r0x001004f6:
  uVar4 = uVar2 ^ 0xffffffff;
  if (uVar4 != 0) {
    iVar5 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    *puVar7 = uVar2 | 1 << ((byte)iVar5 & 0x1f);
    return iVar5;
  }
  *puVar7 = uVar2 | 0x80000000;
  return 0x1f;
}



/* JPH::LargeIslandSplitter::AssignToNonParallelSplit(JPH::Body const*) */

undefined8 __thiscall
JPH::LargeIslandSplitter::AssignToNonParallelSplit(LargeIslandSplitter *this,Body *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (uVar2 = *(uint *)(*(long *)(param_1 + 0x48) + 0x70), uVar2 != 0xffffffff)) {
    puVar1 = (uint *)(*(long *)(this + 8) + (ulong)uVar2 * 4);
    *puVar1 = *puVar1 | 0x80000000;
  }
  return 0x1f;
}



/* JPH::LargeIslandSplitter::SplitIsland(unsigned int, JPH::IslandBuilder const&, JPH::BodyManager
   const&, JPH::ContactConstraintManager const&, JPH::Constraint**, JPH::CalculateSolverSteps&) */

undefined8 __thiscall
JPH::LargeIslandSplitter::SplitIsland
          (LargeIslandSplitter *this,uint param_1,IslandBuilder *param_2,BodyManager *param_3,
          ContactConstraintManager *param_4,Constraint **param_5,CalculateSolverSteps *param_6)

{
  LargeIslandSplitter *pLVar1;
  uint *puVar2;
  Constraint CVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  Body *pBVar7;
  Body *pBVar8;
  Constraint *pCVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint *puVar22;
  CalculateSolverSteps CVar23;
  undefined4 in_register_00000034;
  int *piVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  CalculateSolverSteps CVar28;
  uint *puVar29;
  long in_FS_OFFSET;
  byte bVar30;
  uint *local_3f8;
  uint *local_3f0;
  uint *local_3e8;
  uint *local_3e0;
  BodyID *local_3d8;
  BodyID *local_3d0;
  int local_3c8 [31];
  int local_34c;
  int local_348 [31];
  int local_2cc;
  uint local_2c8 [32];
  long alStack_248 [32];
  long alStack_148 [33];
  long local_40;
  int iVar21;
  
  bVar30 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = (uint)param_2;
  JPH::IslandBuilder::GetContactsInIsland
            (uVar17,(uint **)CONCAT44(in_register_00000034,param_1),&local_3f8);
  uVar12 = (long)local_3f0 - (long)local_3f8 >> 2;
  JPH::IslandBuilder::GetConstraintsInIsland(uVar17,(uint **)(ulong)param_1,&local_3e8);
  uVar13 = (long)local_3e0 - (long)local_3e8 >> 2;
  iVar10 = (int)uVar13;
  iVar21 = (int)uVar12;
  uVar20 = iVar21 + iVar10;
  uVar16 = 0;
  if (0x7f < uVar20) {
    JPH::IslandBuilder::GetBodiesInIsland(uVar17,(BodyID **)(ulong)param_1,&local_3d8);
    lVar18 = *(long *)(param_3 + 0x10);
    if (local_3d8 < local_3d0) {
      lVar6 = *(long *)(this + 8);
      do {
        lVar25 = *(long *)(*(long *)(lVar18 + (ulong)(*(uint *)local_3d8 & 0x7fffff) * 8) + 0x48);
        lVar14 = 0x3fffffffc;
        if (lVar25 != 0) {
          lVar14 = (ulong)*(uint *)(lVar25 + 0x70) << 2;
        }
        local_3d8 = local_3d8 + 4;
        *(undefined4 *)(lVar6 + lVar14) = 0;
      } while (local_3d8 < local_3d0);
    }
    piVar24 = local_3c8;
    for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
      piVar24[0] = 0;
      piVar24[1] = 0;
      piVar24 = piVar24 + ((ulong)bVar30 * -2 + 1) * 2;
    }
    piVar24 = local_348;
    for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
      piVar24[0] = 0;
      piVar24[1] = 0;
      piVar24 = piVar24 + ((ulong)bVar30 * -2 + 1) * 2;
    }
    LOCK();
    pLVar1 = this + 0x24;
    uVar17 = *(uint *)pLVar1;
    *(uint *)pLVar1 = *(uint *)pLVar1 + uVar20;
    UNLOCK();
    uVar12 = uVar12 & 0xffffffff;
    uVar19 = (ulong)uVar17;
    lVar18 = *(long *)(this + 0x10) + uVar19 * 4;
    puVar2 = (uint *)(lVar18 + uVar12 * 4);
    if (local_3f8 < local_3f0) {
      lVar6 = *(long *)(param_4 + 0xb0);
      puVar22 = local_3f8;
      lVar25 = lVar18;
      puVar29 = local_3f0;
      do {
        lVar25 = lVar25 + 4;
        puVar15 = (undefined8 *)((ulong)*puVar22 * 0x360 + lVar6);
        pBVar7 = (Body *)*puVar15;
        pBVar8 = (Body *)puVar15[1];
        uVar20 = AssignSplit(this,pBVar7,pBVar8);
        *(uint *)(lVar25 + -4) = uVar20;
        local_3c8[uVar20] = local_3c8[uVar20] + 1;
        if (pBVar7[0x78] == (Body)0x2) {
          lVar14 = *(long *)(pBVar7 + 0x48);
          bVar30 = *(byte *)(lVar14 + 0x7b);
          uVar20 = *(uint *)(param_6 + 8);
          if (*(uint *)(param_6 + 8) < (uint)bVar30) {
            uVar20 = (uint)bVar30;
          }
          *(uint *)(param_6 + 8) = uVar20;
          param_6[0x10] = (CalculateSolverSteps)((byte)param_6[0x10] | bVar30 == 0);
          bVar30 = *(byte *)(lVar14 + 0x7c);
          uVar20 = *(uint *)(param_6 + 0xc);
          if (*(uint *)(param_6 + 0xc) < (uint)bVar30) {
            uVar20 = (uint)bVar30;
          }
          *(uint *)(param_6 + 0xc) = uVar20;
          param_6[0x11] = (CalculateSolverSteps)((byte)param_6[0x11] | bVar30 == 0);
        }
        if (pBVar8[0x78] == (Body)0x2) {
          lVar14 = *(long *)(pBVar8 + 0x48);
          bVar30 = *(byte *)(lVar14 + 0x7b);
          uVar20 = *(uint *)(param_6 + 8);
          if (*(uint *)(param_6 + 8) < (uint)bVar30) {
            uVar20 = (uint)bVar30;
          }
          *(uint *)(param_6 + 8) = uVar20;
          param_6[0x10] = (CalculateSolverSteps)((byte)param_6[0x10] | bVar30 == 0);
          bVar30 = *(byte *)(lVar14 + 0x7c);
          uVar20 = *(uint *)(param_6 + 0xc);
          if (*(uint *)(param_6 + 0xc) < (uint)bVar30) {
            uVar20 = (uint)bVar30;
          }
          *(uint *)(param_6 + 0xc) = uVar20;
          param_6[0x11] = (CalculateSolverSteps)((byte)param_6[0x11] | bVar30 == 0);
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 < puVar29);
    }
    puVar22 = puVar2;
    puVar29 = local_3e8;
    if (local_3e8 < local_3e0) {
      do {
        pCVar9 = param_5[*puVar29];
        uVar11 = (**(code **)(*(long *)pCVar9 + 0x60))(pCVar9,this);
        *puVar22 = uVar11;
        uVar20 = *(uint *)(param_6 + 8);
        local_348[uVar11] = local_348[uVar11] + 1;
        CVar3 = pCVar9[0x18];
        if (uVar20 < (byte)CVar3) {
          uVar20 = (uint)(byte)CVar3;
        }
        CVar28 = (CalculateSolverSteps)(CVar3 == (Constraint)0x0 | (byte)param_6[0x10]);
        *(uint *)(param_6 + 8) = uVar20;
        param_6[0x10] = CVar28;
        CVar3 = pCVar9[0x19];
        uVar20 = *(uint *)(param_6 + 0xc);
        if (*(uint *)(param_6 + 0xc) < (uint)(byte)CVar3) {
          uVar20 = (uint)(byte)CVar3;
        }
        CVar23 = (CalculateSolverSteps)(CVar3 == (Constraint)0x0 | (byte)param_6[0x11]);
        puVar29 = puVar29 + 1;
        *(uint *)(param_6 + 0xc) = uVar20;
        param_6[0x11] = CVar23;
        puVar22 = puVar22 + 1;
      } while (puVar29 < local_3e0);
    }
    else {
      CVar28 = param_6[0x10];
      CVar23 = param_6[0x11];
    }
    if (CVar28 != (CalculateSolverSteps)0x0) {
      uVar20 = *(uint *)(param_6 + 8);
      if (*(uint *)(param_6 + 8) < *(uint *)(*(long *)param_6 + 0x38)) {
        uVar20 = *(uint *)(*(long *)param_6 + 0x38);
      }
      *(uint *)(param_6 + 8) = uVar20;
    }
    if (CVar23 != (CalculateSolverSteps)0x0) {
      uVar20 = *(uint *)(param_6 + 0xc);
      if (*(uint *)(param_6 + 0xc) < *(uint *)(*(long *)param_6 + 0x3c)) {
        uVar20 = *(uint *)(*(long *)param_6 + 0x3c);
      }
      *(uint *)(param_6 + 0xc) = uVar20;
    }
    LOCK();
    pLVar1 = this + 0x38;
    uVar20 = *(uint *)pLVar1;
    *(uint *)pLVar1 = *(uint *)pLVar1 + 1;
    UNLOCK();
    lVar25 = 0;
    iVar4 = *(int *)(param_6 + 8);
    lVar14 = (ulong)uVar20 * 0x228 + *(long *)(this + 0x30);
    *(uint *)(lVar14 + 0x200) = param_1;
    *(undefined4 *)(lVar14 + 0x204) = 0;
    *(ulong *)(lVar14 + 0x208) = CONCAT44(iVar4,iVar4 + 1);
    *(undefined4 *)(lVar14 + 0x210) = *(undefined4 *)(param_6 + 0xc);
    *(undefined4 *)(lVar14 + 0x220) = 0;
    lVar6 = *(long *)(this + 0x18);
    uVar26 = (ulong)uVar17;
LAB_001009d0:
    do {
      iVar4 = local_348[lVar25];
      iVar5 = local_3c8[lVar25];
      uVar20 = 0x1f;
      if ((uint)(iVar4 + iVar5) < 0x20) {
        if (lVar25 != 0x1f) {
          local_2c8[lVar25] = 0x1f;
          lVar25 = lVar25 + 1;
          local_34c = local_34c + iVar5;
          local_2cc = local_2cc + iVar4;
          goto LAB_001009d0;
        }
      }
      else if (lVar25 != 0x1f) {
        uVar20 = *(uint *)(lVar14 + 0x204);
        *(uint *)(lVar14 + 0x204) = uVar20 + 1;
      }
      uVar17 = iVar5 + (int)uVar26;
      uVar27 = (ulong)uVar20;
      local_2c8[lVar25] = uVar20;
      lVar25 = lVar25 + 1;
      alStack_148[uVar27] = lVar6 + uVar19 * 4;
      alStack_248[uVar27] = lVar6 + (ulong)uVar17 * 4;
      puVar15 = (undefined8 *)(lVar14 + uVar27 * 0x10);
      *puVar15 = CONCAT44(uVar17,(int)uVar26);
      puVar15[1] = CONCAT44(iVar4 + uVar17,uVar17);
      if (lVar25 == 0x20) goto LAB_00100a90;
      uVar19 = (ulong)(iVar4 + uVar17);
      uVar26 = uVar19;
    } while( true );
  }
  goto LAB_00100652;
LAB_00100a90:
  if (iVar21 == 0) {
LAB_00100ad6:
    uVar12 = 0;
    do {
      puVar22 = puVar2 + uVar12;
      puVar29 = local_3e8 + uVar12;
      uVar12 = uVar12 + 1;
      uVar20 = local_2c8[*puVar22];
      puVar22 = (uint *)alStack_248[uVar20];
      *puVar22 = *puVar29;
      alStack_248[uVar20] = (long)(puVar22 + 1);
    } while (uVar12 != (uVar13 & 0xffffffff));
  }
  else {
    uVar19 = 0;
    do {
      lVar6 = uVar19 * 4;
      puVar22 = local_3f8 + uVar19;
      uVar19 = uVar19 + 1;
      uVar20 = local_2c8[*(uint *)(lVar18 + lVar6)];
      puVar29 = (uint *)alStack_148[uVar20];
      *puVar29 = *puVar22;
      alStack_148[uVar20] = (long)(puVar29 + 1);
    } while (uVar19 != uVar12);
    if (iVar10 != 0) goto LAB_00100ad6;
  }
  uVar16 = 0x1f00000000;
  if (*(int *)(lVar14 + 0x204) != 0) {
    uVar16 = 0;
  }
  *(undefined8 *)(lVar14 + 0x218) = uVar16;
  uVar16 = 1;
LAB_00100652:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::LargeIslandSplitter::FetchNextBatch(unsigned int&, unsigned int*&, unsigned int*&, unsigned
   int*&, unsigned int*&, bool&) */

ulong __thiscall
JPH::LargeIslandSplitter::FetchNextBatch
          (LargeIslandSplitter *this,uint *param_1,uint **param_2,uint **param_3,uint **param_4,
          uint **param_5,bool *param_6)

{
  ulong uVar1;
  Splits *this_00;
  long lVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  bool local_81;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_81 = *(uint *)(this + 0x28) == *(uint *)(this + 0x38);
  this_00 = *(Splits **)(this + 0x30);
  lVar2 = (ulong)*(uint *)(this + 0x38) * 0x228;
  if (this_00 < this_00 + lVar2) {
    puVar3 = &local_44;
    do {
      uVar1 = Splits::FetchNextBatch(this_00,&local_50,&local_4c,&local_48,puVar3,param_6);
      if ((int)uVar1 == 0) {
        local_81 = false;
      }
      else if ((int)uVar1 == 1) {
        *param_1 = (int)((long)this_00 - *(long *)(this + 0x30) >> 3) * -0x5cc0ed73;
        *param_2 = (uint *)(*(long *)(this + 0x18) + (ulong)local_50 * 4);
        *param_3 = (uint *)(*(long *)(this + 0x18) + (ulong)local_4c * 4);
        *param_4 = (uint *)(*(long *)(this + 0x18) + (ulong)local_48 * 4);
        *param_5 = (uint *)(*(long *)(this + 0x18) + (ulong)local_44 * 4);
        goto LAB_00100ca5;
      }
      this_00 = this_00 + 0x228;
    } while (this_00 < (Splits *)(*(long *)(this + 0x30) + lVar2));
  }
  uVar1 = (ulong)((uint)local_81 * 2);
LAB_00100ca5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::LargeIslandSplitter::MarkBatchProcessed(unsigned int, unsigned int const*, unsigned int
   const*, unsigned int const*, unsigned int const*, bool&, bool&) */

void __thiscall
JPH::LargeIslandSplitter::MarkBatchProcessed
          (LargeIslandSplitter *this,uint param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,bool *param_6,bool *param_7)

{
  Splits::MarkBatchProcessed
            ((Splits *)((ulong)param_1 * 0x228 + *(long *)(this + 0x30)),
             (int)((long)param_5 - (long)param_4 >> 2) + (int)((long)param_3 - (long)param_2 >> 2),
             param_6,param_7);
  return;
}



/* JPH::LargeIslandSplitter::PrepareForSolvePositions() */

void __thiscall JPH::LargeIslandSplitter::PrepareForSolvePositions(LargeIslandSplitter *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(this + 0x30);
  uVar2 = (ulong)*(uint *)(this + 0x28) * 0x228 + uVar1;
  for (; uVar1 < uVar2; uVar1 = uVar1 + 0x228) {
    *(undefined4 *)(uVar1 + 0x208) = *(undefined4 *)(uVar1 + 0x210);
    uVar3 = 0;
    if (*(int *)(uVar1 + 0x204) == 0) {
      uVar3 = 0x1f00000000;
    }
    *(undefined8 *)(uVar1 + 0x218) = uVar3;
  }
  return;
}



/* JPH::LargeIslandSplitter::Reset(JPH::TempAllocator*) */

void __thiscall JPH::LargeIslandSplitter::Reset(LargeIslandSplitter *this,TempAllocator *param_1)

{
  if (*(int *)(this + 0x28) != 0) {
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x30),*(int *)(this + 0x28) * 0x228);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x18),*(int *)(this + 0x20) << 2);
    *(undefined8 *)(this + 0x18) = 0;
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x10),*(int *)(this + 0x20) * 4);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(long *)(this + 8) != 0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1,*(long *)(this + 8),*(int *)this * 4);
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)this = 0;
  }
  return;
}



/* JPH::LargeIslandSplitter::Splits::FetchNextBatch(unsigned int&, unsigned int&, unsigned int&,
   unsigned int&, bool&) */

void JPH::LargeIslandSplitter::Splits::_GLOBAL__sub_I_FetchNextBatch(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


