/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::CompoundShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])(*Allocate)(0x40);
  *(undefined4 *)pauVar1[3] = 0;
  *pauVar1 = (undefined1  [16])0x0;
  return;
}



/* JPH::CompoundShapeSettings::SubShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::CompoundShapeSettings::SubShapeSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::CompoundShape::MustBeStatic() const */

undefined8 __thiscall JPH::CompoundShape::MustBeStatic(CompoundShape *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x60);
  puVar1 = puVar3 + *(long *)(this + 0x50) * 5;
  while( true ) {
    if (puVar1 == puVar3) {
      return 0;
    }
    uVar2 = (**(code **)(*(long *)*puVar3 + 0x10))();
    if ((char)uVar2 != '\0') break;
    puVar3 = puVar3 + 5;
  }
  return uVar2;
}



/* JPH::CompoundShape::GetVolume() const */

float __thiscall JPH::CompoundShape::GetVolume(CompoundShape *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  puVar2 = *(undefined8 **)(this + 0x60);
  puVar1 = puVar2 + *(long *)(this + 0x50) * 5;
  for (; puVar1 != puVar2; puVar2 = puVar2 + 5) {
    fVar3 = (float)(**(code **)(*(long *)*puVar2 + 0x110))();
    fVar4 = fVar4 + fVar3;
  }
  return fVar4;
}



/* JPH::CompoundShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::CompoundShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CompoundShape::GetMassProperties() const */

void JPH::CompoundShape::GetMassProperties(void)

{
  Mat44 *pMVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  Mat44 *pMVar11;
  long in_RSI;
  float *in_RDI;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  float local_f8;
  float fStack_f4;
  float local_e4;
  float local_98 [4];
  undefined4 local_88 [12];
  Mat44 local_58 [24];
  long local_40;
  
  puVar12 = *(undefined8 **)(in_RSI + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(in_RSI + 0x50);
  *in_RDI = 0.0;
  *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  puVar2 = puVar12 + lVar3 * 5;
  *(undefined1 (*) [16])(in_RDI + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x10) = (undefined1  [16])0x0;
  fVar9 = _LC1;
  fVar8 = _UNK_00104778;
  uVar7 = __LC2;
  if (puVar2 != puVar12) {
    local_e4 = 0.0;
    do {
      (**(code **)(*(long *)*puVar12 + 0x40))((Mat44 *)local_98);
      JPH::MassProperties::Rotate((Mat44 *)local_98);
      JPH::MassProperties::Translate(puVar12[1],puVar12[2],(Mat44 *)local_98);
      local_e4 = local_e4 + local_98[0];
      *in_RDI = local_e4;
      pfVar10 = in_RDI + 4;
      pMVar11 = (Mat44 *)local_98;
      do {
        pMVar1 = pMVar11 + 0x10;
        fVar4 = *(float *)(pMVar11 + 0x14);
        fVar5 = *(float *)(pMVar11 + 0x18);
        fVar6 = *(float *)(pMVar11 + 0x1c);
        pMVar11 = pMVar11 + 0x10;
        *pfVar10 = *pfVar10 + *(float *)pMVar1;
        pfVar10[1] = pfVar10[1] + fVar4;
        pfVar10[2] = pfVar10[2] + fVar5;
        pfVar10[3] = pfVar10[3] + fVar6;
        pfVar10 = pfVar10 + 4;
      } while (local_58 != pMVar11);
      puVar12 = puVar12 + 5;
    } while (puVar2 != puVar12);
  }
  local_f8 = (float)uVar7;
  fStack_f4 = (float)((ulong)uVar7 >> 0x20);
  in_RDI[0x10] = local_f8;
  in_RDI[0x11] = fStack_f4;
  in_RDI[0x12] = fVar8;
  in_RDI[0x13] = fVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::CompoundShape::TransformShape(JPH::Mat44 const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&) const
    */

void __thiscall
JPH::CompoundShape::TransformShape(CompoundShape *this,Mat44 *param_1,CollisionCollector *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
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
  float fVar24;
  float fVar25;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  float local_8c;
  float local_88 [18];
  long local_40;
  
  puVar13 = *(undefined8 **)(this + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = puVar13 + *(long *)(this + 0x50) * 5;
  if (puVar1 != puVar13) {
    do {
      plVar2 = (long *)*puVar13;
      pcVar3 = *(code **)(*plVar2 + 0xc0);
      if (*(char *)((long)puVar13 + 0x24) == '\0') {
        fVar25 = *(float *)((long)puVar13 + 0x14);
        fVar21 = *(float *)(puVar13 + 3);
        fVar19 = 0.0;
        fVar24 = *(float *)((long)puVar13 + 0x1c);
        fVar17 = _LC1 - (fVar24 * fVar24 + fVar21 * fVar21 + fVar25 * fVar25 + 0.0);
        if (0.0 <= fVar17) {
          fVar19 = SQRT(fVar17);
        }
        fVar23 = fVar21 + fVar21;
        fVar14 = fVar25 + fVar25;
        fVar22 = fVar24 * (fVar24 + fVar24);
        fVar20 = fVar19 * (fVar24 + fVar24);
        fVar15 = fVar14 * fVar19 + fVar24 * fVar23;
        fVar16 = fVar21 * fVar14 - fVar20;
        uStack_c0 = (ulong)(uint)(fVar24 * fVar14 - fVar23 * fVar19);
        fVar20 = fVar20 + fVar21 * fVar14;
        fVar17 = (_LC1 - fVar21 * fVar23) - fVar22;
        fVar18 = fVar24 * fVar14 + fVar23 * fVar19;
        fVar21 = (_LC1 - fVar25 * fVar14) - fVar21 * fVar23;
        fVar24 = fVar24 * fVar23 - fVar14 * fVar19;
        fVar25 = (_LC1 - fVar22) - fVar25 * fVar14;
      }
      else {
        fVar20 = 0.0;
        fVar16 = 0.0;
        uStack_c0 = 0;
        fVar15 = 0.0;
        fVar17 = _LC1;
        fVar18 = fVar15;
        fVar21 = _LC1;
        fVar24 = fVar15;
        fVar25 = _LC1;
      }
      local_98 = puVar13[1];
      local_90 = *(undefined4 *)(puVar13 + 2);
      fVar19 = *(float *)(param_1 + 0x20);
      fVar14 = *(float *)(param_1 + 0x24);
      fVar22 = *(float *)(param_1 + 0x28);
      fVar23 = *(float *)(param_1 + 0x2c);
      lVar12 = 0;
      local_c8 = CONCAT44(fVar20,fVar17);
      fVar17 = *(float *)param_1;
      fVar20 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_1 + 8);
      fVar5 = *(float *)(param_1 + 0xc);
      fVar6 = *(float *)(param_1 + 0x30);
      fVar7 = *(float *)(param_1 + 0x34);
      fVar8 = *(float *)(param_1 + 0x38);
      fVar9 = *(float *)(param_1 + 0x3c);
      local_b8._4_4_ = fVar25;
      local_b8._0_4_ = fVar16;
      local_8c = _LC1;
      local_b8._8_4_ = fVar15;
      local_b8._12_4_ = 0;
      fVar25 = *(float *)(param_1 + 0x10);
      fVar15 = *(float *)(param_1 + 0x14);
      fVar16 = *(float *)(param_1 + 0x18);
      fVar10 = *(float *)(param_1 + 0x1c);
      local_a8._4_4_ = fVar24;
      local_a8._0_4_ = fVar18;
      local_a8._8_4_ = fVar21;
      local_a8._12_4_ = 0;
      do {
        fVar18 = *(float *)((long)&local_c8 + lVar12);
        fVar21 = *(float *)((long)&local_c8 + lVar12 + 4);
        fVar24 = *(float *)(local_b8 + lVar12 + -8);
        fVar11 = *(float *)(local_b8 + lVar12 + -4);
        *(float *)((long)local_88 + lVar12) =
             fVar11 * fVar6 + fVar18 * fVar17 + fVar21 * fVar25 + fVar24 * fVar19;
        *(float *)((long)local_88 + lVar12 + 4) =
             fVar11 * fVar7 + fVar18 * fVar20 + fVar21 * fVar15 + fVar24 * fVar14;
        *(float *)((long)local_88 + lVar12 + 8) =
             fVar11 * fVar8 + fVar18 * fVar4 + fVar21 * fVar16 + fVar24 * fVar22;
        *(float *)((long)local_88 + lVar12 + 0xc) =
             fVar11 * fVar9 + fVar18 * fVar5 + fVar21 * fVar10 + fVar24 * fVar23;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x40);
      puVar13 = puVar13 + 5;
      (*pcVar3)(plVar2,local_88,param_2);
    } while (puVar1 != puVar13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::GetSubShapeIDBitsRecursive() const */

uint __thiscall JPH::CompoundShape::GetSubShapeIDBitsRecursive(CompoundShape *this)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  lVar3 = *(long *)(this + 0x50);
  puVar6 = *(undefined8 **)(this + 0x60);
  puVar1 = puVar6 + lVar3 * 5;
  if (puVar6 == puVar1) {
    iVar5 = 0x20;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar2 = (**(code **)(*(long *)*puVar6 + 0x28))();
      if (uVar4 < uVar2) {
        uVar4 = uVar2;
      }
      puVar6 = puVar6 + 5;
    } while (puVar1 != puVar6);
    lVar3 = *(long *)(this + 0x50);
    iVar5 = uVar4 + 0x20;
  }
  uVar2 = (int)lVar3 - 1;
  if (uVar2 != 0) {
    uVar4 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    uVar4 = iVar5 - (uVar4 ^ 0x1f);
  }
  return uVar4;
}



/* JPH::CompoundShape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void __thiscall
JPH::CompoundShape::RestoreSubShapeState(CompoundShape *this,RefConst *param_1,uint param_2)

{
  RefConst *pRVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 != 0) {
    pRVar1 = param_1 + (ulong)param_2 * 8;
    lVar5 = 0;
    do {
      lVar2 = *(long *)(this + 0x60);
      plVar4 = *(long **)param_1;
      plVar3 = *(long **)(lVar2 + lVar5);
      if (plVar3 != plVar4) {
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
          plVar4 = *(long **)param_1;
        }
        *(long **)(lVar2 + lVar5) = plVar4;
        if (plVar4 != (long *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
      }
      param_1 = param_1 + 8;
      lVar5 = lVar5 + 0x28;
    } while (param_1 != pRVar1);
    return;
  }
  return;
}



/* JPH::CompoundShape::GetMaterial(JPH::SubShapeID const&) const */

void __thiscall JPH::CompoundShape::GetMaterial(CompoundShape *this,SubShapeID *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long in_FS_OFFSET;
  uint uStack_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(int *)(this + 0x50) - 1;
  if (uVar3 == 0) {
    uStack_14 = 0;
    lVar5 = 0;
    bVar4 = 0;
  }
  else {
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    bVar2 = (byte)iVar1 ^ 0x1f;
    bVar4 = 0x20 - bVar2;
    lVar5 = (ulong)((int)(1L << (bVar4 & 0x3f)) - 1U & *(uint *)param_1) * 0x28;
    uStack_14 = (uint)(0xffffffffL << (bVar2 & 0x3f));
  }
  uStack_14 = uStack_14 | *(uint *)param_1 >> (bVar4 & 0x3f);
  (**(code **)(**(long **)(*(long *)(this + 0x60) + lVar5) + 0x50))
            (*(long **)(*(long *)(this + 0x60) + lVar5),&uStack_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 __thiscall
JPH::CompoundShape::GetSubShapeUserData(CompoundShape *this,SubShapeID *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  uVar1 = *(uint *)param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (int)*(ulong *)(this + 0x50) - 1;
  if (uVar7 == 0) {
    lVar4 = 0;
    local_14 = uVar1;
  }
  else {
    iVar2 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    bVar3 = (byte)iVar2 ^ 0x1f;
    bVar6 = 0x20 - bVar3;
    local_14 = (uint)(0xffffffffL << (bVar3 & 0x3f)) | uVar1 >> (bVar6 & 0x3f);
    uVar5 = 0;
    uVar8 = (ulong)((int)(1L << (bVar6 & 0x3f)) - 1U & uVar1);
    if (*(ulong *)(this + 0x50) <= uVar8) goto LAB_001008a9;
    lVar4 = uVar8 * 0x28;
  }
  uVar5 = (**(code **)(**(long **)(*(long *)(this + 0x60) + lVar4) + 0x68))
                    (*(long **)(*(long *)(this + 0x60) + lVar4),&local_14);
LAB_001008a9:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */

undefined8 __thiscall
JPH::CompoundShape::GetLeafShape(CompoundShape *this,SubShapeID *param_1,SubShapeID *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  uVar1 = *(uint *)param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (int)*(ulong *)(this + 0x50) - 1;
  if (uVar8 == 0) {
    lVar5 = 0;
    local_14 = uVar1;
  }
  else {
    iVar2 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    bVar3 = (byte)iVar2 ^ 0x1f;
    bVar7 = 0x20 - bVar3;
    local_14 = (uint)(0xffffffffL << (bVar3 & 0x3f)) | uVar1 >> (bVar7 & 0x3f);
    uVar4 = (ulong)((int)(1L << (bVar7 & 0x3f)) - 1U & uVar1);
    if (*(ulong *)(this + 0x50) <= uVar4) {
      *(undefined4 *)param_2 = 0xffffffff;
      uVar6 = 0;
      goto LAB_00100949;
    }
    lVar5 = uVar4 * 0x28;
  }
  uVar6 = (**(code **)(**(long **)(*(long *)(this + 0x60) + lVar5) + 0x48))
                    (*(long **)(*(long *)(this + 0x60) + lVar5),&local_14);
LAB_00100949:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void __thiscall JPH::CompoundShape::SaveSubShapeState(CompoundShape *this,Array *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  
  if (*(long *)param_1 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = puVar9 + *(long *)param_1;
    for (; puVar9 < puVar6; puVar9 = puVar9 + 1) {
      plVar3 = (long *)*puVar9;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar11 = plVar3 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  uVar5 = *(ulong *)(this + 0x50);
  if (*(ulong *)(param_1 + 8) < uVar5) {
    puVar9 = (undefined8 *)(*Allocate)(uVar5 * 8);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (puVar6 != (undefined8 *)0x0) {
      lVar10 = *(long *)param_1;
      if (puVar9 < puVar6) {
        for (puVar7 = puVar9; puVar7 < puVar9 + lVar10; puVar7 = puVar7 + 1) {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar7 = uVar2;
        }
      }
      else {
        puVar6 = puVar6 + lVar10 + -1;
        puVar7 = puVar9 + lVar10 + -1;
        if (!CARRY8(lVar10 * 8 - 8,(ulong)puVar9)) {
          do {
            uVar2 = *puVar6;
            puVar8 = puVar7 + -1;
            puVar6 = puVar6 + -1;
            *puVar7 = uVar2;
            puVar7 = puVar8;
          } while (puVar9 <= puVar8);
        }
      }
      (*Free)();
    }
    *(ulong *)(param_1 + 8) = uVar5;
    uVar5 = *(ulong *)(this + 0x50);
    *(undefined8 **)(param_1 + 0x10) = puVar9;
  }
  plVar11 = *(long **)(this + 0x60);
  plVar3 = plVar11 + uVar5 * 5;
  do {
    if (plVar3 == plVar11) {
      return;
    }
    lVar10 = *(long *)param_1;
    uVar5 = lVar10 + 1;
    if (*(ulong *)(param_1 + 8) < uVar5) {
      uVar4 = *(ulong *)(param_1 + 8) * 2;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      puVar6 = (undefined8 *)(*Allocate)(uVar5 * 8);
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      if (puVar9 != (undefined8 *)0x0) {
        lVar10 = *(long *)param_1;
        if (puVar6 < puVar9) {
          for (puVar7 = puVar6; puVar7 < puVar6 + lVar10; puVar7 = puVar7 + 1) {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar7 = uVar2;
          }
        }
        else {
          puVar9 = puVar9 + lVar10 + -1;
          puVar7 = puVar6 + lVar10 + -1;
          if (!CARRY8(lVar10 * 8 - 8,(ulong)puVar6)) {
            do {
              uVar2 = *puVar9;
              puVar8 = puVar7 + -1;
              puVar9 = puVar9 + -1;
              *puVar7 = uVar2;
              puVar7 = puVar8;
            } while (puVar6 <= puVar8);
            (*Free)();
            goto LAB_00100a80;
          }
        }
        (*Free)();
      }
LAB_00100a80:
      lVar10 = *(long *)param_1;
      *(undefined8 **)(param_1 + 0x10) = puVar6;
      *(ulong *)(param_1 + 8) = uVar5;
      uVar5 = lVar10 + 1;
    }
    else {
      puVar6 = *(undefined8 **)(param_1 + 0x10);
    }
    *(ulong *)param_1 = uVar5;
    lVar1 = *plVar11;
    puVar6[lVar10] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    plVar11 = plVar11 + 5;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CompoundShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16]
JPH::CompoundShape::GetSurfaceNormal(undefined8 param_1_00,float param_2,long param_1,uint *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  uint uVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
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
  undefined1 auVar24 [12];
  float local_68;
  float fStack_64;
  uint uStack_14;
  long local_10;
  
  local_68 = (float)param_1_00;
  fStack_64 = (float)((ulong)param_1_00 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(int *)(param_1 + 0x50) - 1;
  if (uVar7 == 0) {
    uStack_14 = 0;
    lVar10 = 0;
    bVar8 = 0;
  }
  else {
    iVar1 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    bVar6 = (byte)iVar1 ^ 0x1f;
    bVar8 = 0x20 - bVar6;
    lVar10 = (ulong)((int)(1L << (bVar8 & 0x3f)) - 1U & *param_4) * 0x28;
    uStack_14 = (uint)(0xffffffffL << (bVar6 & 0x3f));
  }
  uStack_14 = uStack_14 | *param_4 >> (bVar8 & 0x3f);
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar10);
  fVar2 = *(float *)(puVar9 + 1);
  fVar3 = *(float *)((long)puVar9 + 0xc);
  fVar4 = *(float *)(puVar9 + 2);
  fVar11 = __LC2;
  uVar7 = _UNK_00104774;
  fVar13 = _UNK_00104778;
  fVar16 = _LC1;
  if (*(char *)((long)puVar9 + 0x24) == '\0') {
    fVar16 = *(float *)((long)puVar9 + 0x14);
    fVar11 = *(float *)((long)puVar9 + 0x14);
    uVar7 = *(uint *)(puVar9 + 3);
    fVar13 = *(float *)((long)puVar9 + 0x1c);
    fVar18 = _LC1 - (fVar13 * fVar13 +
                    *(float *)(puVar9 + 3) * *(float *)(puVar9 + 3) + fVar16 * fVar16 + 0.0);
    fVar16 = 0.0;
    if (0.0 <= fVar18) {
      fVar16 = SQRT(fVar18);
    }
  }
  fVar11 = (float)((uint)fVar11 ^ __LC4);
  fVar12 = (float)(uVar7 ^ _UNK_00104784);
  fVar13 = (float)((uint)fVar13 ^ _UNK_00104788);
  fVar16 = (float)((uint)fVar16 ^ _UNK_0010478c);
  fVar14 = fVar11 + fVar11;
  fVar23 = fVar12 + fVar12;
  fVar22 = (fVar13 + fVar13) * fVar13;
  fVar18 = fVar16 * (fVar13 + fVar13);
  fVar20 = fVar13 * fVar23 - fVar14 * fVar16;
  fVar15 = fVar14 * fVar16 + fVar13 * fVar23;
  fVar19 = (_LC1 - fVar11 * fVar14) - fVar23 * fVar12;
  fVar17 = fVar14 * fVar13 - fVar23 * fVar16;
  fVar21 = fVar14 * fVar13 + fVar23 * fVar16;
  fVar16 = (_LC1 - fVar23 * fVar12) - fVar22;
  fVar23 = fVar12 * fVar14 - fVar18;
  fVar11 = (_LC1 - fVar22) - fVar11 * fVar14;
  fVar18 = fVar12 * fVar14 + fVar18;
  auVar24 = (**(code **)(*(long *)*puVar9 + 0x58))
                      (CONCAT44(param_2 * fVar20 + fStack_64 * fVar11 + local_68 * fVar18 +
                                (0.0 - (fVar4 * fVar20 + fVar2 * fVar18 + fVar3 * fVar11)),
                                param_2 * fVar21 + fStack_64 * fVar23 + local_68 * fVar16 +
                                (0.0 - (fVar4 * fVar21 + fVar2 * fVar16 + fVar3 * fVar23))),
                       CONCAT44(param_2 * 0.0 + fStack_64 * 0.0 + local_68 * 0.0 + 1.0,
                                param_2 * fVar19 + fStack_64 * fVar15 + local_68 * fVar17 +
                                (0.0 - (fVar4 * fVar19 + fVar2 * fVar17 + fVar3 * fVar15))),
                       (long *)*puVar9,&uStack_14);
  fVar13 = auVar24._8_4_;
  local_68 = auVar24._0_4_;
  fStack_64 = auVar24._4_4_;
  auVar5._4_4_ = local_68 * fVar23 + fStack_64 * fVar11 + fVar13 * fVar15;
  auVar5._0_4_ = local_68 * fVar16 + fStack_64 * fVar18 + fVar13 * fVar17;
  auVar5._8_4_ = local_68 * fVar21 + fStack_64 * fVar20 + fVar13 * fVar19;
  auVar5._12_4_ = local_68 * 0.0 + fStack_64 * 0.0 + fVar13 * 0.0;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar5;
}



/* JPH::CompoundShapeSettings::GetRTTI() const */

undefined1 * JPH::CompoundShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti,
                      "CompoundShapeSettings",0x58,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::CompoundShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    plVar2 = *(long **)((long)param_1 + 8);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
                    /* WARNING: Load size is inaccurate */
    plVar2 = *param_1;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00101020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::CompoundShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::CompoundShape::GetSupportingFace
               (undefined8 param_1_00,float param_2,undefined8 param_3,undefined8 param_4,
               long param_1,uint *param_6,float *param_7,undefined8 param_8)

{
  float fVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
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
  byte bVar21;
  uint uVar22;
  byte bVar23;
  long lVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  float fVar26;
  float fVar27;
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
  undefined1 auVar38 [16];
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float local_100;
  uint uStack_bc;
  undefined1 auStack_b8 [4];
  float afStack_b4 [3];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [18];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(int *)(param_1 + 0x50) - 1;
  if (uVar22 == 0) {
    uStack_bc = 0;
    lVar24 = 0;
    bVar23 = 0;
  }
  else {
    iVar4 = 0x1f;
    if (uVar22 != 0) {
      for (; uVar22 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    bVar21 = (byte)iVar4 ^ 0x1f;
    bVar23 = 0x20 - bVar21;
    lVar24 = (ulong)((int)(1L << (bVar23 & 0x3f)) - 1U & *param_6) * 0x28;
    uStack_bc = (uint)(0xffffffffL << (bVar21 & 0x3f));
  }
  puVar25 = (undefined8 *)(lVar24 + *(long *)(param_1 + 0x60));
  local_108 = (float)param_3;
  fStack_104 = (float)((ulong)param_3 >> 0x20);
  local_100 = (float)param_4;
  uStack_bc = uStack_bc | *param_6 >> (bVar23 & 0x3f);
  if (*(char *)((long)puVar25 + 0x24) == '\0') {
    fVar1 = *(float *)((long)puVar25 + 0x14);
    fVar27 = *(float *)(puVar25 + 3);
    fVar33 = *(float *)((long)puVar25 + 0x1c);
    fVar28 = _LC1 - (fVar33 * fVar33 + fVar27 * fVar27 + fVar1 * fVar1 + 0.0);
    fVar29 = 0.0;
    if (0.0 <= fVar28) {
      fVar29 = SQRT(fVar28);
    }
    fVar34 = fVar1 + fVar1;
    fVar35 = fVar27 + fVar27;
    fVar37 = fVar33 * (fVar33 + fVar33);
    fVar36 = (fVar33 + fVar33) * fVar29;
    fVar32 = fVar33 * fVar34 - fVar29 * fVar35;
    fVar30 = fVar27 * fVar34 + fVar36;
    fVar31 = fVar33 * fVar35 + fVar29 * fVar34;
    fVar28 = (_LC1 - fVar27 * fVar35) - fVar37;
    fVar26 = fVar33 * fVar35 - fVar29 * fVar34;
    fVar33 = fVar33 * fVar34 + fVar29 * fVar35;
    fVar29 = (_LC1 - fVar37) - fVar1 * fVar34;
    fVar36 = fVar27 * fVar34 - fVar36;
    fVar1 = (_LC1 - fVar1 * fVar34) - fVar27 * fVar35;
  }
  else {
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar30 = 0.0;
    fVar28 = _LC1;
    fVar26 = fVar32;
    fVar33 = fVar30;
    fVar29 = _LC1;
    fVar36 = fVar30;
    fVar1 = _LC1;
  }
  plVar2 = (long *)*puVar25;
  register0x00001244 = fVar30;
  auStack_b8 = fVar28;
  fVar27 = *param_7;
  fVar34 = param_7[1];
  fVar35 = param_7[2];
  fVar37 = param_7[3];
  uStack_88 = CONCAT44(*(float *)((long)puVar25 + 0xc) * fStack_104,
                       *(float *)(puVar25 + 1) * local_108);
  register0x00001248 = fVar32;
  register0x0000124c = 0;
  fStack_7c = _LC1;
  fVar5 = param_7[4];
  fVar6 = param_7[5];
  fVar7 = param_7[6];
  fVar8 = param_7[7];
  fVar9 = param_7[0xc];
  fVar10 = param_7[0xd];
  fVar11 = param_7[0xe];
  fVar12 = param_7[0xf];
  pcVar3 = *(code **)(*plVar2 + 0x60);
  fStack_80 = *(float *)(puVar25 + 2) * local_100;
  auStack_a8._4_4_ = fVar29;
  auStack_a8._0_4_ = fVar36;
  lVar24 = 0;
  auStack_a8._8_4_ = fVar31;
  auStack_a8._12_4_ = 0;
  fVar13 = param_7[8];
  fVar14 = param_7[9];
  fVar15 = param_7[10];
  fVar16 = param_7[0xb];
  uStack_98 = CONCAT44(fVar26,fVar33);
  uStack_90 = (ulong)(uint)fVar1;
  do {
    fVar17 = *(float *)(auStack_b8 + lVar24);
    fVar18 = *(float *)(auStack_b8 + lVar24 + 4);
    fVar19 = *(float *)(auStack_b8 + lVar24 + 8);
    fVar20 = *(float *)(auStack_b8 + lVar24 + 0xc);
    *(float *)((long)afStack_78 + lVar24) =
         fVar17 * fVar27 + fVar18 * fVar5 + fVar19 * fVar13 + fVar20 * fVar9;
    *(float *)((long)afStack_78 + lVar24 + 4) =
         fVar17 * fVar34 + fVar18 * fVar6 + fVar19 * fVar14 + fVar20 * fVar10;
    *(float *)((long)afStack_78 + lVar24 + 8) =
         fVar17 * fVar35 + fVar18 * fVar7 + fVar19 * fVar15 + fVar20 * fVar11;
    *(float *)((long)afStack_78 + lVar24 + 0xc) =
         fVar17 * fVar37 + fVar18 * fVar8 + fVar19 * fVar16 + fVar20 * fVar12;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  auVar38 = SubShape::TransformScale(param_3,param_4);
  local_118._0_4_ = (float)param_1_00;
  local_118._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  fVar33 = fVar33 * (float)local_118;
  fVar34 = (float)local_118 * 0.0;
  fVar26 = local_118._4_4_ * fVar26;
  fVar27 = local_118._4_4_ * 0.0;
  local_118 = CONCAT44(fVar36 * (float)local_118 + local_118._4_4_ * fVar29 + fVar31 * param_2,
                       fVar28 * (float)local_118 + local_118._4_4_ * fVar30 + fVar32 * param_2);
  local_110 = CONCAT44(fVar34 + fVar27 + param_2 * 0.0,fVar33 + fVar26 + fVar1 * param_2);
  (*pcVar3)(local_118,local_110,auVar38._0_8_,auVar38._8_8_,plVar2,&uStack_bc,afStack_78,param_8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

undefined1 (*) [16]
JPH::CompoundShape::GetWorldSpaceBounds
          (undefined8 param_1_00,undefined8 param_2,undefined1 (*param_1) [16],long *param_4,
          float *param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  float local_c8 [16];
  undefined1 local_88 [4];
  float afStack_84 [3];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_4[10];
  local_108 = (float)param_1_00;
  fStack_104 = (float)((ulong)param_1_00 >> 0x20);
  fStack_100 = (float)param_2;
  if (uVar2 < 0xb) {
    puVar3 = (undefined8 *)param_4[0xc];
    local_f8._4_4_ = _LC13;
    local_f8._0_4_ = _LC13;
    local_f8._8_4_ = _LC13;
    local_f8._12_4_ = _LC13;
    auVar31._4_4_ = _LC15;
    auVar31._0_4_ = _LC15;
    auVar31._8_4_ = _LC15;
    auVar31._12_4_ = _LC15;
    if (puVar3 + uVar2 * 5 != puVar3) {
      puVar16 = puVar3;
      do {
        if (*(char *)((long)puVar16 + 0x24) == '\0') {
          fVar23 = *(float *)((long)puVar16 + 0x14);
          fVar25 = *(float *)(puVar16 + 3);
          fVar28 = 0.0;
          fVar26 = *(float *)((long)puVar16 + 0x1c);
          fVar27 = _LC1 - (fVar26 * fVar26 + fVar25 * fVar25 + fVar23 * fVar23 + 0.0);
          if (0.0 <= fVar27) {
            fVar28 = SQRT(fVar27);
          }
          fVar35 = fVar25 + fVar25;
          fVar18 = fVar23 + fVar23;
          fVar34 = fVar28 * (fVar26 + fVar26);
          fVar33 = fVar26 * (fVar26 + fVar26);
          local_78._8_8_ = ZEXT48((uint)(fVar18 * fVar28 + fVar26 * fVar35));
          fVar24 = fVar26 * fVar18 + fVar35 * fVar28;
          fVar32 = fVar26 * fVar18 - fVar35 * fVar28;
          local_78._0_4_ = fVar25 * fVar18 - fVar34;
          fVar34 = fVar34 + fVar25 * fVar18;
          fVar27 = (_LC1 - fVar23 * fVar18) - fVar25 * fVar35;
          fVar26 = fVar26 * fVar35 - fVar18 * fVar28;
          fVar25 = (_LC1 - fVar25 * fVar35) - fVar33;
          local_78._4_4_ = (_LC1 - fVar33) - fVar23 * fVar18;
        }
        else {
          fVar34 = 0.0;
          fVar32 = 0.0;
          local_78._0_4_ = 0.0;
          fVar24 = 0.0;
          local_78._8_8_ = 0;
          fVar27 = _LC1;
          fVar26 = fVar24;
          fVar25 = _LC1;
          local_78._4_4_ = _LC1;
        }
        register0x00001244 = fVar34;
        local_88 = fVar25;
        fVar25 = *param_5;
        fVar34 = param_5[1];
        fVar23 = param_5[2];
        fVar28 = param_5[3];
        local_58 = CONCAT44(*(float *)((long)puVar16 + 0xc) * fStack_104,
                            *(float *)(puVar16 + 1) * local_108);
        local_50 = *(float *)(puVar16 + 2) * fStack_100;
        register0x00001248 = fVar32;
        register0x0000124c = 0;
        lVar15 = 0;
        fVar32 = param_5[8];
        fVar18 = param_5[9];
        fVar33 = param_5[10];
        fVar35 = param_5[0xb];
        local_4c = _LC1;
        fVar6 = param_5[0xc];
        fVar7 = param_5[0xd];
        fVar8 = param_5[0xe];
        fVar9 = param_5[0xf];
        local_68._4_4_ = fVar26;
        local_68._0_4_ = fVar24;
        local_68._8_4_ = fVar27;
        local_68._12_4_ = 0;
        fVar27 = param_5[4];
        fVar26 = param_5[5];
        fVar24 = param_5[6];
        fVar10 = param_5[7];
        do {
          fVar11 = *(float *)(local_88 + lVar15);
          fVar12 = *(float *)(local_88 + lVar15 + 4);
          fVar13 = *(float *)(local_88 + lVar15 + 8);
          fVar14 = *(float *)(local_88 + lVar15 + 0xc);
          *(float *)((long)local_c8 + lVar15) =
               fVar14 * fVar6 + fVar11 * fVar25 + fVar12 * fVar27 + fVar13 * fVar32;
          *(float *)((long)local_c8 + lVar15 + 4) =
               fVar14 * fVar7 + fVar11 * fVar34 + fVar12 * fVar26 + fVar13 * fVar18;
          *(float *)((long)local_c8 + lVar15 + 8) =
               fVar14 * fVar8 + fVar11 * fVar23 + fVar12 * fVar24 + fVar13 * fVar33;
          *(float *)((long)local_c8 + lVar15 + 0xc) =
               fVar14 * fVar9 + fVar11 * fVar28 + fVar12 * fVar10 + fVar13 * fVar35;
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != 0x40);
        plVar4 = (long *)*puVar16;
        puVar17 = puVar16 + 5;
        pcVar5 = *(code **)(*plVar4 + 0x30);
        SubShape::TransformScale(param_1_00,param_2,puVar16);
        (*pcVar5)(local_88,plVar4,local_c8);
        local_f8 = maxps(local_f8,local_78);
        auVar31 = minps(auVar31,_local_88);
        puVar16 = puVar17;
      } while (puVar3 + uVar2 * 5 != puVar17);
    }
    *param_1 = auVar31;
    *(undefined8 *)param_1[1] = local_f8._0_8_;
    *(undefined8 *)(param_1[1] + 8) = local_f8._8_8_;
  }
  else {
    if (*(code **)(*param_4 + 0x20) == GetLocalBounds) {
      local_c8[0] = *(float *)(param_4 + 6);
      local_c8[1] = *(float *)((long)param_4 + 0x34);
      local_c8[2] = *(float *)(param_4 + 7);
      local_c8[3] = *(float *)((long)param_4 + 0x3c);
      local_c8[4] = *(float *)(param_4 + 8);
      local_c8[5] = *(float *)((long)param_4 + 0x44);
      local_c8[6] = *(float *)(param_4 + 9);
      local_c8[7] = *(float *)((long)param_4 + 0x4c);
    }
    else {
      (**(code **)(*param_4 + 0x20))(local_c8);
    }
    fStack_fc = (float)((ulong)param_2 >> 0x20);
    auVar20._0_8_ = CONCAT44(local_c8[1] * fStack_104,local_c8[0] * local_108);
    auVar20._8_4_ = local_c8[2] * fStack_100;
    auVar20._12_4_ = local_c8[3] * fStack_fc;
    lVar15 = 0;
    auVar30._0_4_ = local_c8[4] * local_108;
    auVar30._4_4_ = local_c8[5] * fStack_104;
    auVar30._8_4_ = local_c8[6] * fStack_100;
    auVar30._12_4_ = local_c8[7] * fStack_fc;
    auVar22._8_4_ = auVar20._8_4_;
    auVar22._0_8_ = auVar20._0_8_;
    auVar22._12_4_ = auVar20._12_4_;
    local_78 = maxps(auVar22,auVar30);
    _local_88 = minps(auVar20,auVar30);
    fVar25 = param_5[0xc];
    fVar27 = param_5[0xd];
    fVar26 = param_5[0xe];
    fVar24 = param_5[0xf];
    fVar32 = fVar25;
    fVar34 = fVar27;
    fVar23 = fVar26;
    fVar28 = fVar24;
    do {
      fVar18 = *(float *)(local_88 + lVar15);
      fVar33 = *(float *)(local_78 + lVar15);
      pfVar1 = param_5 + lVar15;
      auVar19._0_8_ = CONCAT44(fVar18 * pfVar1[1],fVar18 * *pfVar1);
      auVar19._8_4_ = fVar18 * pfVar1[2];
      auVar19._12_4_ = fVar18 * pfVar1[3];
      pfVar1 = param_5 + lVar15;
      auVar21._0_4_ = fVar33 * *pfVar1;
      auVar21._4_4_ = fVar33 * pfVar1[1];
      auVar21._8_4_ = fVar33 * pfVar1[2];
      auVar21._12_4_ = fVar33 * pfVar1[3];
      lVar15 = lVar15 + 4;
      auVar29._8_4_ = auVar19._8_4_;
      auVar29._0_8_ = auVar19._0_8_;
      auVar29._12_4_ = auVar19._12_4_;
      auVar30 = minps(auVar29,auVar21);
      auVar20 = maxps(auVar19,auVar21);
      fVar32 = fVar32 + auVar30._0_4_;
      fVar34 = fVar34 + auVar30._4_4_;
      fVar23 = fVar23 + auVar30._8_4_;
      fVar28 = fVar28 + auVar30._12_4_;
      fVar25 = fVar25 + auVar20._0_4_;
      fVar27 = fVar27 + auVar20._4_4_;
      fVar26 = fVar26 + auVar20._8_4_;
      fVar24 = fVar24 + auVar20._12_4_;
    } while (lVar15 != 0xc);
    *(float *)*param_1 = fVar32;
    *(float *)(*param_1 + 4) = fVar34;
    *(float *)(*param_1 + 8) = fVar23;
    *(float *)(*param_1 + 0xc) = fVar28;
    *(float *)param_1[1] = fVar25;
    *(float *)(param_1[1] + 4) = fVar27;
    *(float *)(param_1[1] + 8) = fVar26;
    *(float *)(param_1[1] + 0xc) = fVar24;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::CompoundShape::GetSubmergedVolume
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_1,float *param_6,undefined8 param_7,float *param_8,float *param_9,
               undefined1 (*param_10) [16])

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined8 local_158;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_d0;
  float local_cc;
  float local_c8 [16];
  undefined1 local_88 [4];
  float afStack_84 [3];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  float local_50;
  float local_4c;
  long local_40;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_1 + 0x50);
  *param_8 = 0.0;
  *param_9 = 0.0;
  *param_10 = (undefined1  [16])0x0;
  if (puVar3 + lVar4 * 5 != puVar3) {
    puVar13 = puVar3;
    fVar20 = _LC1;
    do {
      local_f8 = (float)param_1_00;
      fStack_f4 = (float)((ulong)param_1_00 >> 0x20);
      fStack_f0 = (float)param_2;
      if (*(char *)((long)puVar13 + 0x24) == '\0') {
        fVar1 = *(float *)((long)puVar13 + 0x14);
        fVar2 = *(float *)(puVar13 + 3);
        fVar18 = 0.0;
        fVar26 = *(float *)((long)puVar13 + 0x1c);
        fVar17 = fVar20 - (fVar26 * fVar26 + fVar2 * fVar2 + fVar1 * fVar1 + 0.0);
        if (0.0 <= fVar17) {
          fVar18 = SQRT(fVar17);
        }
        fVar27 = fVar2 + fVar2;
        fVar15 = fVar1 + fVar1;
        fVar25 = fVar26 * (fVar26 + fVar26);
        fVar23 = fVar18 * (fVar26 + fVar26);
        fVar16 = fVar15 * fVar18 + fVar26 * fVar27;
        fVar21 = fVar26 * fVar15 + fVar27 * fVar18;
        fVar19 = fVar26 * fVar15 - fVar27 * fVar18;
        fVar22 = fVar2 * fVar15 - fVar23;
        fVar23 = fVar2 * fVar15 + fVar23;
        fVar17 = (fVar20 - fVar1 * fVar15) - fVar2 * fVar27;
        fVar24 = (fVar20 - fVar25) - fVar1 * fVar15;
        fVar26 = fVar26 * fVar27 - fVar15 * fVar18;
        fVar1 = (fVar20 - fVar2 * fVar27) - fVar25;
      }
      else {
        fVar23 = 0.0;
        fVar22 = 0.0;
        fVar19 = 0.0;
        fVar21 = 0.0;
        fVar16 = 0.0;
        fVar17 = fVar20;
        fVar24 = fVar20;
        fVar26 = fVar21;
        fVar1 = fVar20;
      }
      afStack_84[0] = fVar23;
      local_88 = (undefined1  [4])fVar1;
      local_58 = CONCAT44(*(float *)((long)puVar13 + 0xc) * fStack_f4,
                          *(float *)(puVar13 + 1) * local_f8);
      lVar12 = 0;
      fVar1 = *param_6;
      fVar23 = param_6[1];
      fVar2 = param_6[2];
      fVar18 = param_6[3];
      local_78._4_4_ = fVar24;
      local_78._0_4_ = fVar22;
      local_78._8_4_ = fVar16;
      local_78._12_4_ = 0;
      fVar24 = param_6[4];
      fVar16 = param_6[5];
      fVar22 = param_6[6];
      fVar15 = param_6[7];
      afStack_84[1] = fVar19;
      afStack_84[2] = 0.0;
      fVar19 = param_6[0xc];
      fVar25 = param_6[0xd];
      fVar27 = param_6[0xe];
      fVar7 = param_6[0xf];
      local_68._4_4_ = fVar26;
      local_68._0_4_ = fVar21;
      local_68._8_4_ = fVar17;
      local_68._12_4_ = 0;
      fVar17 = param_6[8];
      fVar26 = param_6[9];
      fVar21 = param_6[10];
      fVar8 = param_6[0xb];
      local_50 = *(float *)(puVar13 + 2) * fStack_f0;
      local_4c = fVar20;
      do {
        fVar20 = *(float *)(local_88 + lVar12);
        fVar9 = *(float *)(local_88 + lVar12 + 4);
        fVar10 = *(float *)(local_88 + lVar12 + 8);
        fVar11 = *(float *)(local_88 + lVar12 + 0xc);
        *(float *)((long)local_c8 + lVar12) =
             fVar11 * fVar19 + fVar20 * fVar1 + fVar9 * fVar24 + fVar10 * fVar17;
        *(float *)((long)local_c8 + lVar12 + 4) =
             fVar11 * fVar25 + fVar20 * fVar23 + fVar9 * fVar16 + fVar10 * fVar26;
        *(float *)((long)local_c8 + lVar12 + 8) =
             fVar11 * fVar27 + fVar20 * fVar2 + fVar9 * fVar22 + fVar10 * fVar21;
        *(float *)((long)local_c8 + lVar12 + 0xc) =
             fVar11 * fVar7 + fVar20 * fVar18 + fVar9 * fVar15 + fVar10 * fVar8;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x40);
      plVar5 = (long *)*puVar13;
      puVar14 = puVar13 + 5;
      pcVar6 = *(code **)(*plVar5 + 0x78);
      auVar28 = SubShape::TransformScale(param_1_00,param_2,puVar13);
      (*pcVar6)(auVar28._0_8_,auVar28._8_8_,param_3,param_4,plVar5,local_c8,param_7,&local_d0,
                &local_cc,local_88);
      fVar20 = _LC1;
      *param_8 = *param_8 + local_d0;
      *param_9 = local_cc + *param_9;
      fVar1 = *(float *)(*param_10 + 4);
      fVar17 = *(float *)(*param_10 + 8);
      fVar24 = *(float *)(*param_10 + 0xc);
      *(float *)*param_10 = local_cc * (float)local_88 + *(float *)*param_10;
      *(float *)(*param_10 + 4) = local_cc * afStack_84[0] + fVar1;
      *(float *)(*param_10 + 8) = local_cc * afStack_84[1] + fVar17;
      *(float *)(*param_10 + 0xc) = local_cc * afStack_84[2] + fVar24;
      puVar13 = puVar14;
    } while (puVar3 + lVar4 * 5 != puVar14);
  }
  fVar20 = *param_9;
  if (0.0 < fVar20) {
    auVar28._4_4_ = fVar20;
    auVar28._0_4_ = fVar20;
    auVar28._8_4_ = fVar20;
    auVar28._12_4_ = fVar20;
    auVar28 = divps(*param_10,auVar28);
    *param_10 = auVar28;
  }
  if ((char)Shape::sDrawSubmergedVolumes == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    local_128 = (float)param_3;
    fStack_124 = (float)((ulong)param_3 >> 0x20);
    fStack_120 = (float)param_4;
    fStack_11c = (float)((ulong)param_4 >> 0x20);
    local_158 = CONCAT44(fStack_124 + *(float *)(*param_10 + 4),local_128 + *(float *)*param_10);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      JPH::DebugRenderer::DrawWireSphere
                (local_158,
                 CONCAT44(fStack_11c + *(float *)(*param_10 + 0xc),
                          fStack_120 + *(float *)(*param_10 + 8)),DebugRenderer::sInstance,
                 (undefined4)Color::sRed,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void JPH::CompoundShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88 [18];
  long local_40;
  
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = puVar13 + *(long *)(param_1 + 0x50) * 5;
  if (puVar1 != puVar13) {
    do {
      local_f8 = (float)param_1_00;
      fStack_f4 = (float)((ulong)param_1_00 >> 0x20);
      fStack_f0 = (float)param_2_00;
      local_98 = CONCAT44(*(float *)((long)puVar13 + 0xc) * fStack_f4,
                          *(float *)(puVar13 + 1) * local_f8);
      local_90 = *(float *)(puVar13 + 2) * fStack_f0;
      if (*(char *)((long)puVar13 + 0x24) == '\0') {
        fVar26 = *(float *)((long)puVar13 + 0x14);
        fVar21 = *(float *)(puVar13 + 3);
        fVar19 = 0.0;
        fVar24 = *(float *)((long)puVar13 + 0x1c);
        fVar18 = _LC1 - (fVar24 * fVar24 + fVar21 * fVar21 + fVar26 * fVar26 + 0.0);
        if (0.0 <= fVar18) {
          fVar19 = SQRT(fVar18);
        }
        fVar25 = fVar21 + fVar21;
        fVar14 = fVar26 + fVar26;
        fVar23 = fVar24 * (fVar24 + fVar24);
        fVar22 = fVar19 * (fVar24 + fVar24);
        fVar15 = fVar14 * fVar19 + fVar24 * fVar25;
        fVar20 = fVar24 * fVar14 + fVar25 * fVar19;
        fVar17 = fVar21 * fVar14 - fVar22;
        uStack_c0 = (ulong)(uint)(fVar24 * fVar14 - fVar25 * fVar19);
        fVar22 = fVar22 + fVar21 * fVar14;
        fVar18 = (_LC1 - fVar21 * fVar25) - fVar23;
        fVar21 = (_LC1 - fVar26 * fVar14) - fVar21 * fVar25;
        fVar24 = fVar24 * fVar25 - fVar14 * fVar19;
        fVar26 = (_LC1 - fVar23) - fVar26 * fVar14;
      }
      else {
        fVar22 = 0.0;
        fVar17 = 0.0;
        uStack_c0 = 0;
        fVar20 = 0.0;
        fVar15 = 0.0;
        fVar18 = _LC1;
        fVar21 = _LC1;
        fVar24 = fVar20;
        fVar26 = _LC1;
      }
      plVar2 = (long *)*puVar13;
      local_c8 = CONCAT44(fVar22,fVar18);
      local_b8._4_4_ = fVar26;
      local_b8._0_4_ = fVar17;
      pcVar3 = *(code **)(*plVar2 + 0x80);
      local_b8._8_4_ = fVar15;
      local_b8._12_4_ = 0;
      local_a8._4_4_ = fVar24;
      local_a8._0_4_ = fVar20;
      local_a8._8_4_ = fVar21;
      local_a8._12_4_ = 0;
      local_8c = _LC1;
      uVar16 = SubShape::TransformScale(param_1_00,param_2_00,puVar13);
      fVar18 = *param_5;
      fVar21 = param_5[1];
      fVar24 = param_5[2];
      fVar26 = param_5[3];
      fVar15 = param_5[4];
      fVar17 = param_5[5];
      fVar20 = param_5[6];
      fVar22 = param_5[7];
      lVar12 = 0;
      fVar19 = param_5[8];
      fVar14 = param_5[9];
      fVar23 = param_5[10];
      fVar25 = param_5[0xb];
      fVar4 = param_5[0xc];
      fVar5 = param_5[0xd];
      fVar6 = param_5[0xe];
      fVar7 = param_5[0xf];
      do {
        fVar8 = *(float *)((long)&local_c8 + lVar12);
        fVar9 = *(float *)((long)&local_c8 + lVar12 + 4);
        fVar10 = *(float *)(local_b8 + lVar12 + -8);
        fVar11 = *(float *)(local_b8 + lVar12 + -4);
        *(float *)((long)local_88 + lVar12) =
             fVar11 * fVar4 + fVar10 * fVar19 + fVar8 * fVar18 + fVar9 * fVar15;
        *(float *)((long)local_88 + lVar12 + 4) =
             fVar11 * fVar5 + fVar10 * fVar14 + fVar8 * fVar21 + fVar9 * fVar17;
        *(float *)((long)local_88 + lVar12 + 8) =
             fVar11 * fVar6 + fVar10 * fVar23 + fVar8 * fVar24 + fVar9 * fVar20;
        *(float *)((long)local_88 + lVar12 + 0xc) =
             fVar11 * fVar7 + fVar10 * fVar25 + fVar8 * fVar26 + fVar9 * fVar22;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x40);
      puVar13 = puVar13 + 5;
      (*pcVar3)(uVar16,plVar2,param_2,local_88,param_6,param_7,param_8);
    } while (puVar1 != puVar13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool) const */

void JPH::CompoundShape::DrawGetSupportFunction
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88 [18];
  long local_40;
  
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = puVar13 + *(long *)(param_1 + 0x50) * 5;
  if (puVar1 != puVar13) {
    do {
      local_f8 = (float)param_1_00;
      fStack_f4 = (float)((ulong)param_1_00 >> 0x20);
      fStack_f0 = (float)param_2_00;
      local_98 = CONCAT44(*(float *)((long)puVar13 + 0xc) * fStack_f4,
                          *(float *)(puVar13 + 1) * local_f8);
      local_90 = *(float *)(puVar13 + 2) * fStack_f0;
      if (*(char *)((long)puVar13 + 0x24) == '\0') {
        fVar26 = *(float *)((long)puVar13 + 0x14);
        fVar21 = *(float *)(puVar13 + 3);
        fVar19 = 0.0;
        fVar25 = *(float *)((long)puVar13 + 0x1c);
        fVar18 = _LC1 - (fVar25 * fVar25 + fVar21 * fVar21 + fVar26 * fVar26 + 0.0);
        if (0.0 <= fVar18) {
          fVar19 = SQRT(fVar18);
        }
        fVar24 = fVar21 + fVar21;
        fVar14 = fVar26 + fVar26;
        fVar23 = fVar25 * (fVar25 + fVar25);
        fVar22 = fVar19 * (fVar25 + fVar25);
        fVar15 = fVar14 * fVar19 + fVar25 * fVar24;
        fVar20 = fVar25 * fVar14 + fVar24 * fVar19;
        fVar17 = fVar21 * fVar14 - fVar22;
        uStack_c0 = (ulong)(uint)(fVar25 * fVar14 - fVar24 * fVar19);
        fVar22 = fVar22 + fVar21 * fVar14;
        fVar18 = (_LC1 - fVar21 * fVar24) - fVar23;
        fVar21 = (_LC1 - fVar26 * fVar14) - fVar21 * fVar24;
        fVar25 = fVar25 * fVar24 - fVar14 * fVar19;
        fVar26 = (_LC1 - fVar23) - fVar26 * fVar14;
      }
      else {
        fVar22 = 0.0;
        fVar17 = 0.0;
        uStack_c0 = 0;
        fVar20 = 0.0;
        fVar15 = 0.0;
        fVar18 = _LC1;
        fVar21 = _LC1;
        fVar25 = fVar20;
        fVar26 = _LC1;
      }
      plVar2 = (long *)*puVar13;
      local_c8 = CONCAT44(fVar22,fVar18);
      local_b8._4_4_ = fVar26;
      local_b8._0_4_ = fVar17;
      pcVar3 = *(code **)(*plVar2 + 0x88);
      local_b8._8_4_ = fVar15;
      local_b8._12_4_ = 0;
      local_a8._4_4_ = fVar25;
      local_a8._0_4_ = fVar20;
      local_a8._8_4_ = fVar21;
      local_a8._12_4_ = 0;
      local_8c = _LC1;
      uVar16 = SubShape::TransformScale(param_1_00,param_2_00,puVar13);
      fVar18 = *param_5;
      fVar21 = param_5[1];
      fVar25 = param_5[2];
      fVar26 = param_5[3];
      fVar15 = param_5[4];
      fVar17 = param_5[5];
      fVar20 = param_5[6];
      fVar22 = param_5[7];
      lVar12 = 0;
      fVar19 = param_5[8];
      fVar14 = param_5[9];
      fVar23 = param_5[10];
      fVar24 = param_5[0xb];
      fVar4 = param_5[0xc];
      fVar5 = param_5[0xd];
      fVar6 = param_5[0xe];
      fVar7 = param_5[0xf];
      do {
        fVar8 = *(float *)((long)&local_c8 + lVar12);
        fVar9 = *(float *)((long)&local_c8 + lVar12 + 4);
        fVar10 = *(float *)(local_b8 + lVar12 + -8);
        fVar11 = *(float *)(local_b8 + lVar12 + -4);
        *(float *)((long)local_88 + lVar12) =
             fVar11 * fVar4 + fVar10 * fVar19 + fVar8 * fVar18 + fVar9 * fVar15;
        *(float *)((long)local_88 + lVar12 + 4) =
             fVar11 * fVar5 + fVar10 * fVar14 + fVar8 * fVar21 + fVar9 * fVar17;
        *(float *)((long)local_88 + lVar12 + 8) =
             fVar11 * fVar6 + fVar10 * fVar23 + fVar8 * fVar25 + fVar9 * fVar20;
        *(float *)((long)local_88 + lVar12 + 0xc) =
             fVar11 * fVar7 + fVar10 * fVar24 + fVar8 * fVar26 + fVar9 * fVar22;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x40);
      puVar13 = puVar13 + 5;
      (*pcVar3)(uVar16,plVar2,param_2,local_88,param_6,param_7);
    } while (puVar1 != puVar13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3)
   const */

void JPH::CompoundShape::DrawGetSupportingFace
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 local_c8 [4];
  float afStack_c4 [3];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88 [18];
  long local_40;
  
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = puVar15 + *(long *)(param_1 + 0x50) * 5;
  if (puVar1 != puVar15) {
    do {
      local_d8 = (float)param_1_00;
      fStack_d4 = (float)((ulong)param_1_00 >> 0x20);
      fStack_d0 = (float)param_2_00;
      local_98 = CONCAT44(*(float *)((long)puVar15 + 0xc) * fStack_d4,
                          *(float *)(puVar15 + 1) * local_d8);
      local_90 = *(float *)(puVar15 + 2) * fStack_d0;
      if (*(char *)((long)puVar15 + 0x24) == '\0') {
        fVar2 = *(float *)((long)puVar15 + 0x14);
        fVar3 = *(float *)(puVar15 + 3);
        fVar18 = *(float *)((long)puVar15 + 0x1c);
        fVar21 = _LC1 - (fVar18 * fVar18 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0);
        fVar19 = 0.0;
        if (0.0 <= fVar21) {
          fVar19 = SQRT(fVar21);
        }
        fVar22 = fVar2 + fVar2;
        fVar24 = fVar3 + fVar3;
        fVar25 = fVar18 * (fVar18 + fVar18);
        fVar20 = fVar19 * (fVar18 + fVar18);
        fVar26 = fVar18 * fVar24 - fVar22 * fVar19;
        fVar23 = fVar22 * fVar19 + fVar18 * fVar24;
        fVar17 = fVar3 * fVar22 - fVar20;
        fVar20 = fVar3 * fVar22 + fVar20;
        fVar21 = fVar18 * fVar22 + fVar24 * fVar19;
        fVar18 = fVar18 * fVar22 - fVar24 * fVar19;
        fVar19 = (_LC1 - fVar2 * fVar22) - fVar3 * fVar24;
        fVar22 = (_LC1 - fVar25) - fVar2 * fVar22;
        fVar2 = (_LC1 - fVar3 * fVar24) - fVar25;
      }
      else {
        fVar20 = 0.0;
        fVar17 = 0.0;
        fVar26 = 0.0;
        fVar23 = 0.0;
        fVar21 = 0.0;
        fVar18 = fVar17;
        fVar19 = _LC1;
        fVar22 = _LC1;
        fVar2 = _LC1;
      }
      register0x00001244 = fVar20;
      local_c8 = fVar2;
      plVar4 = (long *)*puVar15;
      register0x00001248 = fVar18;
      register0x0000124c = 0;
      local_a8._4_4_ = fVar26;
      local_a8._0_4_ = fVar21;
      pcVar5 = *(code **)(*plVar4 + 0x90);
      local_a8._8_4_ = fVar19;
      local_a8._12_4_ = 0;
      local_b8._4_4_ = fVar22;
      local_b8._0_4_ = fVar17;
      local_b8._8_4_ = fVar23;
      local_b8._12_4_ = 0;
      local_8c = _LC1;
      uVar16 = SubShape::TransformScale(param_1_00,param_2_00,puVar15);
      fVar21 = *param_5;
      fVar2 = param_5[1];
      fVar18 = param_5[2];
      fVar19 = param_5[3];
      fVar22 = param_5[4];
      fVar17 = param_5[5];
      fVar20 = param_5[6];
      fVar23 = param_5[7];
      lVar14 = 0;
      fVar26 = param_5[8];
      fVar3 = param_5[9];
      fVar24 = param_5[10];
      fVar25 = param_5[0xb];
      fVar6 = param_5[0xc];
      fVar7 = param_5[0xd];
      fVar8 = param_5[0xe];
      fVar9 = param_5[0xf];
      do {
        fVar10 = *(float *)(local_c8 + lVar14);
        fVar11 = *(float *)(local_c8 + lVar14 + 4);
        fVar12 = *(float *)(local_c8 + lVar14 + 8);
        fVar13 = *(float *)(local_c8 + lVar14 + 0xc);
        *(float *)((long)local_88 + lVar14) =
             fVar13 * fVar6 + fVar10 * fVar21 + fVar11 * fVar22 + fVar12 * fVar26;
        *(float *)((long)local_88 + lVar14 + 4) =
             fVar13 * fVar7 + fVar10 * fVar2 + fVar11 * fVar17 + fVar12 * fVar3;
        *(float *)((long)local_88 + lVar14 + 8) =
             fVar13 * fVar8 + fVar10 * fVar18 + fVar11 * fVar20 + fVar12 * fVar24;
        *(float *)((long)local_88 + lVar14 + 0xc) =
             fVar13 * fVar9 + fVar10 * fVar19 + fVar11 * fVar23 + fVar12 * fVar25;
        lVar14 = lVar14 + 0x10;
      } while (lVar14 != 0x40);
      (*pcVar5)(uVar16,plVar4,param_2,local_88);
      puVar15 = puVar15 + 5;
    } while (puVar1 != puVar15);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::CompoundShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1,float *param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88 [18];
  long local_40;
  
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = puVar13 + *(long *)(param_1 + 0x50) * 5;
  if (puVar1 != puVar13) {
    do {
      local_f8 = (float)param_1_00;
      fStack_f4 = (float)((ulong)param_1_00 >> 0x20);
      fStack_f0 = (float)param_2;
      local_98 = CONCAT44(*(float *)((long)puVar13 + 0xc) * fStack_f4,
                          *(float *)(puVar13 + 1) * local_f8);
      local_90 = *(float *)(puVar13 + 2) * fStack_f0;
      if (*(char *)((long)puVar13 + 0x24) == '\0') {
        fVar26 = *(float *)((long)puVar13 + 0x14);
        fVar21 = *(float *)(puVar13 + 3);
        fVar19 = 0.0;
        fVar25 = *(float *)((long)puVar13 + 0x1c);
        fVar18 = _LC1 - (fVar25 * fVar25 + fVar21 * fVar21 + fVar26 * fVar26 + 0.0);
        if (0.0 <= fVar18) {
          fVar19 = SQRT(fVar18);
        }
        fVar24 = fVar21 + fVar21;
        fVar14 = fVar26 + fVar26;
        fVar23 = fVar25 * (fVar25 + fVar25);
        fVar22 = fVar19 * (fVar25 + fVar25);
        fVar15 = fVar14 * fVar19 + fVar25 * fVar24;
        fVar20 = fVar25 * fVar14 + fVar24 * fVar19;
        fVar17 = fVar21 * fVar14 - fVar22;
        uStack_c0 = (ulong)(uint)(fVar25 * fVar14 - fVar24 * fVar19);
        fVar22 = fVar22 + fVar21 * fVar14;
        fVar18 = (_LC1 - fVar21 * fVar24) - fVar23;
        fVar21 = (_LC1 - fVar26 * fVar14) - fVar21 * fVar24;
        fVar25 = fVar25 * fVar24 - fVar14 * fVar19;
        fVar26 = (_LC1 - fVar23) - fVar26 * fVar14;
      }
      else {
        fVar22 = 0.0;
        fVar17 = 0.0;
        uStack_c0 = 0;
        fVar20 = 0.0;
        fVar15 = 0.0;
        fVar18 = _LC1;
        fVar21 = _LC1;
        fVar25 = fVar20;
        fVar26 = _LC1;
      }
      plVar2 = (long *)*puVar13;
      local_c8 = CONCAT44(fVar22,fVar18);
      local_b8._4_4_ = fVar26;
      local_b8._0_4_ = fVar17;
      pcVar3 = *(code **)(*plVar2 + 0xb0);
      local_b8._8_4_ = fVar15;
      local_b8._12_4_ = 0;
      local_a8._4_4_ = fVar25;
      local_a8._0_4_ = fVar20;
      local_a8._8_4_ = fVar21;
      local_a8._12_4_ = 0;
      local_8c = _LC1;
      uVar16 = SubShape::TransformScale(param_1_00,param_2,puVar13);
      fVar18 = *param_4;
      fVar21 = param_4[1];
      fVar25 = param_4[2];
      fVar26 = param_4[3];
      fVar15 = param_4[4];
      fVar17 = param_4[5];
      fVar20 = param_4[6];
      fVar22 = param_4[7];
      lVar12 = 0;
      fVar19 = param_4[8];
      fVar14 = param_4[9];
      fVar23 = param_4[10];
      fVar24 = param_4[0xb];
      fVar4 = param_4[0xc];
      fVar5 = param_4[0xd];
      fVar6 = param_4[0xe];
      fVar7 = param_4[0xf];
      do {
        fVar8 = *(float *)((long)&local_c8 + lVar12);
        fVar9 = *(float *)((long)&local_c8 + lVar12 + 4);
        fVar10 = *(float *)(local_b8 + lVar12 + -8);
        fVar11 = *(float *)(local_b8 + lVar12 + -4);
        *(float *)((long)local_88 + lVar12) =
             fVar11 * fVar4 + fVar10 * fVar19 + fVar8 * fVar18 + fVar9 * fVar15;
        *(float *)((long)local_88 + lVar12 + 4) =
             fVar11 * fVar5 + fVar10 * fVar14 + fVar8 * fVar21 + fVar9 * fVar17;
        *(float *)((long)local_88 + lVar12 + 8) =
             fVar11 * fVar6 + fVar10 * fVar23 + fVar8 * fVar25 + fVar9 * fVar20;
        *(float *)((long)local_88 + lVar12 + 0xc) =
             fVar11 * fVar7 + fVar10 * fVar24 + fVar8 * fVar26 + fVar9 * fVar22;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x40);
      puVar13 = puVar13 + 5;
      (*pcVar3)(uVar16,plVar2,local_88,param_5,param_6,param_7);
    } while (puVar1 != puVar13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::sCastCompoundVsShape(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void __thiscall
JPH::CompoundShape::sCastCompoundVsShape
          (undefined8 param_1_00,undefined8 param_2_00,CompoundShape *this,undefined8 param_1,
          long param_2,long *param_3,undefined8 param_7,uint *param_8,undefined8 param_9,
          long param_10)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long *plVar5;
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
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  long lVar19;
  byte bVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  uint uStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float afStack_118 [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar4 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar21 = (int)*(undefined8 *)(lVar4 + 0x50);
  uVar24 = iVar21 - 1;
  if (uVar24 == 0) {
    iVar23 = 0;
  }
  else {
    iVar23 = 0x1f;
    if (uVar24 != 0) {
      for (; uVar24 >> iVar23 == 0; iVar23 = iVar23 + -1) {
      }
    }
    iVar23 = iVar23 + 1;
  }
  if (0 < iVar21) {
    uVar22 = 0;
    do {
      bVar20 = (byte)param_8[1];
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x60) + uVar22 * 0x28);
      uStack_140 = ~((int)(1L << ((byte)iVar23 & 0x3f)) + -1 << (bVar20 & 0x1f)) & *param_8 |
                   (int)uVar22 << (bVar20 & 0x1f);
      iStack_13c = param_8[1] + iVar23;
      if (*(char *)((long)puVar1 + 0x24) == '\0') {
        fVar2 = *(float *)((long)puVar1 + 0x14);
        fVar3 = *(float *)(puVar1 + 3);
        fVar31 = *(float *)((long)puVar1 + 0x1c);
        fVar27 = 0.0;
        fVar29 = _LC1 - (fVar31 * fVar31 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0);
        if (0.0 <= fVar29) {
          fVar27 = SQRT(fVar29);
        }
        fVar34 = fVar3 + fVar3;
        fVar26 = fVar2 + fVar2;
        fVar33 = fVar31 * (fVar31 + fVar31);
        fVar28 = fVar27 * (fVar31 + fVar31);
        fVar30 = fVar31 * fVar34 - fVar26 * fVar27;
        auStack_c8._8_8_ = ZEXT48((uint)(fVar26 * fVar27 + fVar31 * fVar34));
        fVar29 = fVar31 * fVar26 + fVar34 * fVar27;
        uStack_d0 = (ulong)(uint)(fVar31 * fVar26 - fVar34 * fVar27);
        fVar32 = fVar3 * fVar26 - fVar28;
        fVar28 = fVar28 + fVar3 * fVar26;
        fVar31 = (_LC1 - fVar2 * fVar26) - fVar3 * fVar34;
        fVar27 = (_LC1 - fVar33) - fVar2 * fVar26;
        fVar2 = (_LC1 - fVar3 * fVar34) - fVar33;
      }
      else {
        fVar28 = 0.0;
        fVar32 = 0.0;
        uStack_d0 = 0;
        fVar30 = 0.0;
        auStack_c8._8_8_ = 0;
        fVar29 = 0.0;
        fVar31 = _LC1;
        fVar27 = _LC1;
        fVar2 = _LC1;
      }
      fVar3 = *(float *)(this + 0x50);
      fVar26 = *(float *)(this + 0x54);
      fVar33 = *(float *)(this + 0x58);
      fVar34 = *(float *)(this + 0x5c);
      fVar6 = *(float *)(this + 0x40);
      fVar7 = *(float *)(this + 0x44);
      fVar8 = *(float *)(this + 0x48);
      fVar9 = *(float *)(this + 0x4c);
      fVar10 = *(float *)(this + 0x30);
      fVar11 = *(float *)(this + 0x34);
      fVar12 = *(float *)(this + 0x38);
      fVar13 = *(float *)(this + 0x3c);
      uStack_a8 = CONCAT44(*(float *)((long)puVar1 + 0xc) * *(float *)(this + 0x14),
                           *(float *)(puVar1 + 1) * *(float *)(this + 0x10));
      lVar19 = 0;
      uStack_d8 = (long *)CONCAT44(fVar28,fVar2);
      uStack_a0 = CONCAT44(_LC1,*(float *)(puVar1 + 2) * *(float *)(this + 0x18));
      fVar2 = *(float *)(this + 0x20);
      fVar28 = *(float *)(this + 0x24);
      fVar14 = *(float *)(this + 0x28);
      fVar15 = *(float *)(this + 0x2c);
      auStack_b8._4_4_ = fVar30;
      auStack_b8._0_4_ = fVar29;
      auStack_c8._0_8_ = CONCAT44(fVar27,fVar32);
      auStack_b8._8_4_ = fVar31;
      auStack_b8._12_4_ = 0;
      do {
        fVar29 = *(float *)((long)&uStack_d8 + lVar19);
        fVar31 = *(float *)((long)&uStack_d8 + lVar19 + 4);
        fVar27 = *(float *)((long)&uStack_d0 + lVar19);
        fVar32 = *(float *)((long)&uStack_d0 + lVar19 + 4);
        *(float *)((long)afStack_118 + lVar19) =
             fVar32 * fVar3 + fVar29 * fVar2 + fVar31 * fVar10 + fVar27 * fVar6;
        *(float *)((long)afStack_118 + lVar19 + 4) =
             fVar32 * fVar26 + fVar29 * fVar28 + fVar31 * fVar11 + fVar27 * fVar7;
        *(float *)((long)afStack_118 + lVar19 + 8) =
             fVar32 * fVar33 + fVar29 * fVar14 + fVar31 * fVar12 + fVar27 * fVar8;
        *(float *)((long)afStack_118 + lVar19 + 0xc) =
             fVar32 * fVar34 + fVar29 * fVar15 + fVar31 * fVar13 + fVar27 * fVar9;
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0x40);
      auVar35 = SubShape::TransformScale
                          (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),puVar1);
      uVar16 = *(undefined8 *)(this + 0x60);
      uVar17 = *(undefined8 *)(this + 0x68);
      plVar5 = (long *)*puVar1;
      (**(code **)(*plVar5 + 0x30))(&uStack_138,plVar5,afStack_118);
      uStack_a8 = uStack_108;
      uStack_a0 = uStack_100;
      uStack_98 = uStack_f8;
      uStack_90 = uStack_f0;
      uStack_68 = uStack_138;
      uStack_60 = uStack_130;
      uStack_88 = uStack_e8;
      uStack_80 = uStack_e0;
      uStack_58 = uStack_128;
      uStack_50 = uStack_120;
      uStack_d8 = plVar5;
      uStack_78 = uVar16;
      uStack_70 = uVar17;
      auStack_c8 = auVar35;
      cVar18 = (**(code **)(*param_3 + 0x18))(param_3,plVar5,&uStack_140,param_2,param_9);
      if (cVar18 != '\0') {
        (*(code *)(&CollisionDispatch::sCastShape)
                  [(ulong)*(byte *)(param_2 + 0x19) +
                   (ulong)*(byte *)((long)uStack_d8 + 0x19) * 0x22])
                  (param_1_00,param_2_00,&uStack_d8,param_1,param_2,param_3,param_7,&uStack_140,
                   param_9);
      }
    } while ((_LC13 < *(float *)(param_10 + 8)) &&
            (bVar25 = uVar22 != uVar24, uVar22 = uVar22 + 1, bVar25));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CompoundShape::GetSubShapeTransformedShape(JPH::SubShapeID const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeID&) const */

undefined8 *
JPH::CompoundShape::GetSubShapeTransformedShape
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_1,long param_8,uint *param_9,
          uint *param_10)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar6 = _UNK_0010478c;
  uVar5 = _UNK_00104788;
  uVar4 = _UNK_00104784;
  uVar3 = __LC4;
  fVar26 = (float)((ulong)param_3 >> 0x20);
  fVar28 = (float)param_3;
  uVar7 = *(int *)(param_8 + 0x50) - 1;
  if (uVar7 == 0) {
    uVar7 = 0;
    lVar9 = 0;
    bVar8 = 0;
  }
  else {
    iVar1 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    bVar2 = (byte)iVar1 ^ 0x1f;
    bVar8 = 0x20 - bVar2;
    lVar9 = (ulong)((int)(1L << (bVar8 & 0x3f)) - 1U & *param_9) * 0x28;
    uVar7 = (uint)(0xffffffffL << (bVar2 & 0x3f));
  }
  plVar10 = (long *)(lVar9 + *(long *)(param_8 + 0x60));
  uStack_50._0_4_ = (float)param_4;
  uStack_50._4_4_ = (float)((ulong)param_4 >> 0x20);
  *param_10 = uVar7 | *param_9 >> (bVar8 & 0x3f);
  fVar12 = (float)(uVar3 ^ (uint)fVar28);
  fVar13 = (float)(uVar4 ^ (uint)fVar26);
  fVar14 = (float)(uVar5 ^ (uint)(float)uStack_50);
  fVar15 = (float)(uVar6 ^ (uint)uStack_50._4_4_);
  local_48 = (float)param_5;
  fStack_44 = (float)((ulong)param_5 >> 0x20);
  local_48 = *(float *)(plVar10 + 1) * local_48;
  fStack_44 = *(float *)((long)plVar10 + 0xc) * fStack_44;
  fVar17 = *(float *)(plVar10 + 2) * (float)param_6;
  fVar31 = fVar28 * 0.0;
  fVar25 = fVar26 * 0.0;
  fVar22 = (float)uStack_50 * 0.0;
  fVar21 = (uStack_50._4_4_ * local_48 + fVar31 + fVar26 * fVar17) - (float)uStack_50 * fStack_44;
  fVar18 = (uStack_50._4_4_ * fStack_44 - fVar28 * fVar17) + fVar25 + (float)uStack_50 * local_48;
  fVar32 = uStack_50._4_4_ * 0.0;
  fVar11 = ((uStack_50._4_4_ * fVar17 + fVar28 * fStack_44) - fVar26 * local_48) + fVar22;
  fVar16 = ((fVar32 - fVar28 * local_48) - fVar26 * fStack_44) - (float)uStack_50 * fVar17;
  local_38._0_4_ = (float)param_1_00;
  local_38._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  local_30._0_4_ = (float)param_2;
  local_30._4_4_ = (float)((ulong)param_2 >> 0x20);
  fVar23 = fVar22;
  fVar19 = fVar25;
  fVar27 = fVar25;
  fVar29 = fVar31;
  fVar30 = fVar31;
  fVar24 = fVar22;
  fVar17 = fVar32;
  fVar33 = fVar32;
  if (*(char *)((long)plVar10 + 0x24) == '\0') {
    fVar23 = *(float *)((long)plVar10 + 0x14);
    fVar17 = *(float *)(plVar10 + 3);
    fVar33 = *(float *)((long)plVar10 + 0x1c);
    fVar20 = 0.0;
    fVar19 = _LC1 - (fVar33 * fVar33 + fVar17 * fVar17 + fVar23 * fVar23 + 0.0);
    if (0.0 <= fVar19) {
      fVar20 = SQRT(fVar19);
    }
    fVar22 = fVar17 * (float)uStack_50;
    fVar24 = fVar33 * (float)uStack_50;
    fVar31 = fVar28 * fVar33;
    fVar29 = fVar28 * fVar17;
    fVar30 = fVar28 * fVar23;
    fVar25 = fVar33 * fVar26;
    fVar19 = fVar23 * fVar26;
    fVar27 = fVar17 * fVar26;
    fVar32 = uStack_50._4_4_ * fVar23;
    fVar17 = uStack_50._4_4_ * fVar17;
    fVar33 = uStack_50._4_4_ * fVar33;
    uStack_50._4_4_ = uStack_50._4_4_ * fVar20;
    fVar23 = fVar23 * (float)uStack_50;
    fVar26 = fVar20 * fVar26;
    fVar28 = fVar28 * fVar20;
    uStack_50._0_4_ = fVar20 * (float)uStack_50;
  }
  local_38 = CONCAT44(fVar11 * fVar12 + fVar18 * fVar15 + (fVar13 * fVar16 - fVar21 * fVar14) +
                      local_38._4_4_,
                      ((fVar18 * fVar14 + fVar21 * fVar15 + fVar12 * fVar16) - fVar11 * fVar13) +
                      (float)local_38);
  local_30 = CONCAT44((((fVar15 * fVar16 - fVar21 * fVar12) - fVar18 * fVar13) - fVar11 * fVar14) +
                      local_30._4_4_,
                      fVar11 * fVar15 + ((fVar21 * fVar13 + fVar14 * fVar16) - fVar18 * fVar12) +
                      (float)local_30);
  local_58 = CONCAT44(fVar23 + fVar26 + (fVar17 - fVar31),(fVar25 + fVar28 + fVar32) - fVar22);
  uStack_50 = CONCAT44(((uStack_50._4_4_ - fVar30) - fVar27) - fVar24,
                       (float)uStack_50 + ((fVar29 + fVar33) - fVar19));
  auVar34 = SubShape::TransformScale(param_5,param_6,plVar10);
  lVar9 = *plVar10;
  param_1[4] = lVar9;
  *param_1 = local_38;
  param_1[1] = local_30;
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 6) = auVar34._8_4_;
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = auVar34._0_8_;
  return param_1;
}



/* JPH::GetRTTIOfType(JPH::CompoundShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(CompoundShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti,
                      "CompoundShapeSettings",0x58,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::CompoundShapeSettings*)::{lambda(void*)#1}::_FUN,
                      CompoundShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::CompoundShapeSettings*)::rtti;
}



/* JPH::CompoundShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::CompoundShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((CompoundShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(SubShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti)
    ;
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti,
                      "CompoundShapeSettings::SubShapeSettings",0x40,
                      GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::{lambda()#1}::
                      _FUN,GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::
                           {lambda(void*)#1}::_FUN,
                      CompoundShapeSettings::SubShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::CompoundShapeSettings::SubShapeSettings*)::rtti;
}



/* JPH::CompoundShape::sRegister() */

void JPH::CompoundShape::sRegister(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = &sAllSubShapeTypes;
  pbVar3 = &sAllSubShapeTypes;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    *(code **)((ulong)bVar1 * 8 + 0x1067f0) = sCastCompoundVsShape;
  } while (pbVar3 != (byte *)0x104762);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *(code **)((ulong)bVar1 * 8 + 0x106900) = sCastCompoundVsShape;
  } while (pbVar2 != (byte *)0x104762);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00103309) */
/* WARNING: Removing unreachable block (ram,0x00103380) */
/* JPH::CompoundShapeSettings::AddShape(JPH::Vec3, JPH::Quat, JPH::ShapeSettings const*, unsigned
   int) */

void JPH::CompoundShapeSettings::AddShape
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,ulong param_6,undefined4 param_7)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_7;
  if (param_6 == 0) {
    Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
    ::push_back((Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
                 *)(param_5 + 0x40),(SubShapeSettings *)local_58);
  }
  else {
    local_58._8_8_ = 0;
    local_58._0_8_ = param_6;
    LOCK();
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
    UNLOCK();
    Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
    ::push_back((Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
                 *)(param_5 + 0x40),(SubShapeSettings *)local_58);
  }
  if ((long *)local_58._0_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58._0_8_ + 8);
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)local_58._0_8_ + 0x18))();
        return;
      }
      goto LAB_0010338b;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010338b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShapeSettings::AddShape(JPH::Vec3, JPH::Quat, JPH::Shape const*, unsigned int) */

void JPH::CompoundShapeSettings::AddShape
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long *param_6,undefined4 param_7)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_7;
  if (param_6 == (long *)0x0) {
    Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
    ::push_back((Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
                 *)(param_5 + 0x40),(SubShapeSettings *)local_58);
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_6;
    local_58 = auVar2 << 0x40;
    LOCK();
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    UNLOCK();
    Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
    ::push_back((Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
                 *)(param_5 + 0x40),(SubShapeSettings *)local_58);
    if (param_6 != (long *)0x0) {
      LOCK();
      plVar1 = param_6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*param_6 + 8))(param_6);
      }
    }
  }
  if ((long *)local_58._0_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58._0_8_ + 8);
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)local_58._0_8_ + 0x18))();
        return;
      }
      goto LAB_0010347b;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010347b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::CompoundShape::SaveBinaryState(CompoundShape *this,StreamOut *param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::Shape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x68,4);
  local_34 = (uint)*(undefined8 *)(this + 0x50);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar2 == '\0') && (local_34 != 0)) {
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      lVar1 = *(long *)(this + 0x60) + uVar3 * 0x28;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar1 + 0x20,4);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar1 + 8,0xc);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar1 + 0x14,0xc);
      uVar3 = uVar4;
    } while (uVar4 < local_34);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CompoundShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::CompoundShape::RestoreBinaryState(CompoundShape *this,StreamIn *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x68,4);
  local_34 = (uint)*(undefined8 *)(this + 0x50);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar5 == '\0')) {
    uVar8 = 0;
    Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>>::resize
              ((Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>>
                *)(this + 0x50),(ulong)local_34);
    if (local_34 != 0) {
      do {
        lVar3 = *(long *)(this + 0x60) + uVar8 * 0x28;
        (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3 + 0x20,4);
        (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3 + 8,0xc);
        (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3 + 0x14,0xc);
        if ((*(float *)(lVar3 + 0x14) == 0.0) && (*(float *)(lVar3 + 0x18) == 0.0)) {
          bVar6 = !NAN(*(float *)(lVar3 + 0x1c));
          if (*(float *)(lVar3 + 0x1c) != 0.0) {
            bVar6 = false;
          }
        }
        else {
          bVar6 = false;
        }
        *(bool *)(lVar3 + 0x24) = bVar6;
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_34);
    }
  }
  else {
    if (*(long *)(this + 0x50) != 0) {
      plVar7 = *(long **)(this + 0x60);
      plVar2 = plVar7 + *(long *)(this + 0x50) * 5;
      for (; plVar7 < plVar2; plVar7 = plVar7 + 5) {
        while (plVar4 = (long *)*plVar7, plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) break;
          plVar7 = plVar7 + 5;
          (**(code **)(*plVar4 + 8))();
          if (plVar2 <= plVar7) goto LAB_00103690;
        }
      }
    }
LAB_00103690:
    *(undefined8 *)(this + 0x50) = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::CompoundShape::GetStatsRecursive(JPH::UnorderedSet<JPH::Shape const*, JPH::Hash<JPH::Shape
   const*>, std::equal_to<JPH::Shape const*> >&) const */

undefined1  [16] __thiscall
JPH::CompoundShape::GetStatsRecursive(CompoundShape *this,UnorderedSet *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  auVar5 = JPH::Shape::GetStatsRecursive((UnorderedSet *)this);
  lVar3 = auVar5._0_8_;
  puVar2 = *(undefined8 **)(this + 0x60);
  uVar4 = auVar5._8_8_ & 0xffffffff;
  puVar1 = puVar2 + *(long *)(this + 0x50) * 5;
  for (; puVar1 != puVar2; puVar2 = puVar2 + 5) {
    auVar6 = (**(code **)(*(long *)*puVar2 + 0x108))((long *)*puVar2,param_1);
    lVar3 = lVar3 + auVar6._0_8_;
    uVar4 = (ulong)(uint)((int)uVar4 + auVar6._8_4_);
  }
  auVar5._8_8_ = auVar5._8_8_ & 0xffffffff00000000 | uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* JPH::CompoundShape::IsValidScale(JPH::Vec3) const */

undefined4 JPH::CompoundShape::IsValidScale(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  float fStack_60;
  
  local_68 = (float)param_1;
  fStack_64 = (float)((ulong)param_1 >> 0x20);
  fStack_60 = (float)param_2;
  uVar5 = JPH::Shape::IsValidScale();
  if ((char)uVar5 == '\0') {
LAB_00103969:
    uVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(param_3 + 0x60);
    puVar1 = puVar6 + *(long *)(param_3 + 0x50) * 5;
    for (; puVar1 != puVar6; puVar6 = puVar6 + 5) {
      if ((*(char *)((long)puVar6 + 0x24) == '\0') &&
         (_LC11 < (fStack_60 - local_68) * (fStack_60 - local_68) +
                  (fStack_64 - fStack_60) * (fStack_64 - fStack_60) +
                  (local_68 - fStack_64) * (local_68 - fStack_64) + 0.0)) {
        fVar8 = *(float *)((long)puVar6 + 0x14);
        fVar7 = _LC1 - (*(float *)((long)puVar6 + 0x1c) * *(float *)((long)puVar6 + 0x1c) +
                       *(float *)(puVar6 + 3) * *(float *)(puVar6 + 3) + fVar8 * fVar8 + 0.0);
        fVar8 = 0.0;
        if (0.0 <= fVar7) {
          fVar8 = SQRT(fVar7);
        }
        cVar4 = ScaleHelpers::CanScaleBeRotated
                          (*(undefined8 *)((long)puVar6 + 0x14),
                           CONCAT44(fVar8,*(undefined4 *)((long)puVar6 + 0x1c)),param_1);
        if (cVar4 == '\0') goto LAB_00103969;
      }
      plVar2 = (long *)*puVar6;
      pcVar3 = *(code **)(*plVar2 + 0x118);
      SubShape::TransformScale(param_1,param_2,puVar6);
      cVar4 = (*pcVar3)(plVar2);
      if (cVar4 == '\0') goto LAB_00103969;
    }
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CompoundShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16]
JPH::CompoundShape::MakeScaleValid(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_38 = (float)param_1;
  fStack_34 = (float)((ulong)param_1 >> 0x20);
  fStack_30 = (float)param_2;
  fStack_2c = (float)((ulong)param_2 >> 0x20);
  auVar6._0_4_ = 0.0 - local_38;
  auVar6._4_4_ = 0.0 - fStack_34;
  auVar6._8_4_ = 0.0 - fStack_30;
  auVar6._12_4_ = 0.0 - fStack_2c;
  auVar7._8_4_ = fStack_30;
  auVar7._0_8_ = param_1;
  auVar7._12_4_ = fStack_2c;
  auVar7 = maxps(auVar6,auVar7);
  auVar4._4_4_ = _LC10;
  auVar4._0_4_ = _LC10;
  auVar4._8_4_ = _LC10;
  auVar4._12_4_ = _LC10;
  auVar7 = maxps(auVar7,auVar4);
  fVar5 = auVar7._0_4_ * (float)((uint)local_38 & (uint)_LC20 | (uint)_LC1);
  fStack_34 = auVar7._4_4_ * (float)((uint)fStack_34 & (uint)_LC20 | (uint)_LC1);
  fStack_30 = auVar7._8_4_ * (float)((uint)fStack_30 & (uint)_LC20 | (uint)_LC1);
  fStack_2c = auVar7._12_4_ * (float)((uint)fStack_2c & (uint)_LC20 | (uint)_LC1);
  cVar3 = IsValidScale(CONCAT44(fStack_34,fVar5),CONCAT44(fStack_2c,fStack_30));
  local_38 = fVar5;
  if (cVar3 == '\0') {
    auVar9._0_4_ = 0.0 - fVar5;
    auVar9._4_4_ = 0.0 - fStack_34;
    auVar9._8_4_ = 0.0 - fStack_30;
    auVar9._12_4_ = 0.0 - fStack_2c;
    auVar2._4_4_ = fStack_34;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fStack_30;
    auVar2._12_4_ = fStack_2c;
    auVar7 = maxps(auVar9,auVar2);
    auVar10._0_4_ = (uint)_LC20 & (uint)fVar5;
    auVar10._4_4_ = _UNK_001047c4 & (uint)fStack_34;
    auVar10._8_4_ = _UNK_001047c8 & (uint)fStack_30;
    auVar10._12_4_ = _UNK_001047cc & (uint)fStack_2c;
    auVar10 = auVar10 | __LC22;
    fVar8 = (auVar7._8_4_ + auVar7._4_4_ + auVar7._0_4_) / __LC23;
    local_38 = fVar8 * auVar10._0_4_;
    fStack_34 = fVar8 * auVar10._4_4_;
    fStack_30 = fVar8 * auVar10._8_4_;
    fStack_2c = fVar8 * auVar10._12_4_;
    cVar3 = IsValidScale(CONCAT44(fStack_34,local_38),CONCAT44(fStack_2c,fStack_30),param_3);
    if (cVar3 == '\0') {
      local_38 = _LC20;
      if (0.0 <= fVar5) {
        local_38 = _LC1;
      }
      local_38 = local_38 * fVar8;
      fStack_34 = local_38;
      fStack_30 = local_38;
      fStack_2c = local_38;
    }
  }
  auVar1._4_4_ = fStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = fStack_30;
  auVar1._12_4_ = fStack_2c;
  return auVar1;
}



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::CompoundShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::CompoundShape::GetCenterOfMass(CompoundShape *this)

{
  return *(undefined1 (*) [16])(this + 0x20);
}



/* JPH::CompoundShape::GetLocalBounds() const */

void JPH::CompoundShape::GetLocalBounds(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x38);
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar3 = *(undefined8 *)(in_RSI + 0x48);
  *in_RDI = *(undefined8 *)(in_RSI + 0x30);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  return;
}



/* JPH::CompoundShape::GetInnerRadius() const */

undefined4 __thiscall JPH::CompoundShape::GetInnerRadius(CompoundShape *this)

{
  return *(undefined4 *)(this + 0x68);
}



/* JPH::CompoundShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::CompoundShape::GetTrianglesStart(void)

{
  return;
}



/* JPH::CompoundShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JPH::CompoundShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  return 0;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ScaleHelpers::CanScaleBeRotated(JPH::Quat, JPH::Vec3) */

undefined8
JPH::ScaleHelpers::CanScaleBeRotated
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar5;
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fVar8 = (float)((ulong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fVar5 = (float)param_2;
  fVar18 = fVar7 + fVar7;
  fVar28 = fVar8 + fVar8;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar27 = fVar5 * (fVar5 + fVar5);
  fVar2 = (fVar5 + fVar5) * fVar6;
  fVar26 = fVar5 * fVar28 - fVar18 * fVar6;
  fVar19 = fVar18 * fVar6 + fVar5 * fVar28;
  fVar20 = fVar8 * fVar18 - fVar2;
  fVar16 = (_LC1 - fVar7 * fVar18) - fVar8 * fVar28;
  fVar24 = (_LC1 - fVar27) - fVar7 * fVar18;
  fVar27 = (_LC1 - fVar8 * fVar28) - fVar27;
  fVar25 = fVar5 * fVar18 - fVar28 * fVar6;
  fVar2 = fVar2 + fVar8 * fVar18;
  fVar23 = fVar5 * fVar18 + fVar28 * fVar6;
  local_28 = (float)param_3;
  uStack_24 = (float)((ulong)param_3 >> 0x20);
  fVar6 = fVar20 * local_28;
  fVar7 = fVar24 * uStack_24;
  fVar8 = fVar19 * param_4;
  fVar18 = fVar27 * local_28;
  fVar28 = fVar2 * uStack_24;
  fVar13 = fVar25 * param_4;
  local_28 = fVar23 * local_28;
  uStack_24 = fVar26 * uStack_24;
  fVar5 = fVar16 * param_4;
  fVar12 = fVar13 * fVar19 + fVar28 * fVar24 + fVar18 * fVar20;
  fVar14 = fVar13 * fVar16 + fVar28 * fVar26 + fVar18 * fVar23;
  fVar15 = fVar13 * 0.0 + fVar28 * 0.0 + fVar18 * 0.0;
  auVar22._0_4_ = (float)(~_LC6 & (uint)(fVar13 * fVar25 + fVar28 * fVar2 + fVar18 * fVar27));
  auVar22._4_4_ = fVar12;
  auVar22._8_4_ = fVar14;
  auVar22._12_4_ = fVar15;
  auVar17._0_4_ = 0.0 - auVar22._0_4_;
  auVar17._4_4_ = 0.0 - fVar12;
  auVar17._8_4_ = 0.0 - fVar14;
  auVar17._12_4_ = 0.0 - fVar15;
  auVar17 = maxps(auVar17,auVar22);
  fVar18 = (float)(~__LC7 & (uint)(fVar8 * fVar25 + fVar7 * fVar2 + fVar6 * fVar27));
  fVar28 = (float)(~_UNK_001047a4 & (uint)(fVar8 * fVar19 + fVar7 * fVar24 + fVar6 * fVar20));
  fVar12 = (float)(~_UNK_001047a8 & (uint)(fVar8 * fVar16 + fVar7 * fVar26 + fVar6 * fVar23));
  fVar6 = (float)(~_UNK_001047ac & (uint)(fVar8 * 0.0 + fVar7 * 0.0 + fVar6 * 0.0));
  auVar21._0_4_ = 0.0 - fVar18;
  auVar21._4_4_ = 0.0 - fVar28;
  auVar21._8_4_ = 0.0 - fVar12;
  auVar21._12_4_ = 0.0 - fVar6;
  auVar10._4_4_ = fVar28;
  auVar10._0_4_ = fVar18;
  auVar10._8_4_ = fVar12;
  auVar10._12_4_ = fVar6;
  auVar22 = maxps(auVar21,auVar10);
  auVar4._0_4_ = (float)(~__LC8 & (uint)(fVar2 * uStack_24 + fVar27 * local_28 + fVar5 * fVar25));
  auVar4._4_4_ = (float)(~_UNK_001047b4 &
                        (uint)(fVar24 * uStack_24 + fVar20 * local_28 + fVar5 * fVar19));
  auVar4._8_4_ = (float)(~_UNK_001047b8 &
                        (uint)(fVar26 * uStack_24 + fVar23 * local_28 + fVar5 * fVar16));
  auVar4._12_4_ = (float)(~_UNK_001047bc & (uint)(uStack_24 * 0.0 + local_28 * 0.0 + fVar5 * 0.0));
  auVar9._0_4_ = 0.0 - auVar4._0_4_;
  auVar9._4_4_ = 0.0 - auVar4._4_4_;
  auVar9._8_4_ = 0.0 - auVar4._8_4_;
  auVar9._12_4_ = 0.0 - auVar4._12_4_;
  auVar10 = maxps(auVar9,auVar4);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < _LC10);
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < _LC10);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < _LC10);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < _LC10);
  auVar3._0_4_ = -(uint)(auVar22._0_4_ < _LC10 && auVar17._0_4_ < _LC10);
  auVar3._4_4_ = -(uint)(auVar22._4_4_ < _LC10 && auVar17._4_4_ < _LC10);
  auVar3._8_4_ = -(uint)(auVar17._8_4_ < _LC10 && auVar22._8_4_ < _LC10);
  auVar3._12_4_ = -(uint)(auVar17._12_4_ < _LC10 && auVar22._12_4_ < _LC10);
  iVar1 = movmskps(param_4,auVar3 & auVar11);
  return CONCAT71((int7)(CONCAT44(0x3f800000,iVar1) >> 8),iVar1 == 0xf);
}



/* JPH::CompoundShape::SubShape::TransformScale(JPH::Vec3) const */

undefined1  [16]
JPH::CompoundShape::SubShape::TransformScale(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = (float)param_1;
  uStack_24 = (float)((ulong)param_1 >> 0x20);
  uStack_20 = (float)param_2;
  uStack_1c = (undefined4)((ulong)param_2 >> 0x20);
  if ((*(char *)(param_3 + 0x24) == '\0') &&
     (_LC11 < (uStack_20 - local_28) * (uStack_20 - local_28) +
              (uStack_24 - uStack_20) * (uStack_24 - uStack_20) +
              (local_28 - uStack_24) * (local_28 - uStack_24) + 0.0)) {
    fVar4 = *(float *)(param_3 + 0x14);
    fVar11 = *(float *)(param_3 + 0x18);
    fVar6 = 0.0;
    fVar1 = *(float *)(param_3 + 0x1c);
    fVar7 = _LC1 - (fVar1 * fVar1 + fVar11 * fVar11 + fVar4 * fVar4 + 0.0);
    if (0.0 <= fVar7) {
      fVar6 = SQRT(fVar7);
    }
    fVar8 = fVar4 + fVar4;
    fVar13 = fVar11 + fVar11;
    fVar7 = (fVar1 + fVar1) * fVar1;
    fVar5 = (fVar1 + fVar1) * fVar6;
    fVar10 = (_LC1 - fVar4 * fVar8) - fVar13 * fVar11;
    fVar14 = (_LC1 - fVar7) - fVar4 * fVar8;
    fVar15 = fVar11 * fVar8 - fVar5;
    fVar7 = (_LC1 - fVar13 * fVar11) - fVar7;
    fVar5 = fVar5 + fVar11 * fVar8;
    fVar12 = fVar8 * fVar1 + fVar13 * fVar6;
    fVar9 = fVar8 * fVar1 - fVar13 * fVar6;
    fVar4 = fVar1 * fVar13 + fVar8 * fVar6;
    fVar11 = fVar1 * fVar13 - fVar8 * fVar6;
    fVar11 = fVar11 * uStack_24 * fVar11 + fVar12 * local_28 * fVar12 + fVar10 * uStack_20 * fVar10;
    auVar3._4_4_ = fVar4 * uStack_20 * fVar4 +
                   fVar15 * fVar15 * local_28 + fVar14 * fVar14 * uStack_24;
    auVar3._0_4_ = fVar9 * uStack_20 * fVar9 + fVar5 * uStack_24 * fVar5 + fVar7 * local_28 * fVar7;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar11;
    return auVar3;
  }
  auVar2._8_4_ = uStack_20;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = uStack_1c;
  return auVar2;
}



/* JPH::Array<JPH::CompoundShapeSettings::SubShapeSettings,
   JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>
   >::push_back(JPH::CompoundShapeSettings::SubShapeSettings const&) */

void __thiscall
JPH::
Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
::push_back(Array<JPH::CompoundShapeSettings::SubShapeSettings,JPH::STLAllocator<JPH::CompoundShapeSettings::SubShapeSettings>>
            *this,SubShapeSettings *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  lVar6 = *(long *)this;
  uVar10 = lVar6 + 1;
  if (*(ulong *)(this + 8) < uVar10) {
    uVar1 = *(ulong *)(this + 8) * 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    plVar7 = (long *)(*Allocate)(uVar10 << 6);
    plVar12 = *(long **)(this + 0x10);
    if (plVar12 != (long *)0x0) {
      lVar6 = *(long *)this;
      if (plVar7 < plVar12) {
        if (plVar7 < plVar7 + lVar6 * 8) {
          plVar9 = plVar7;
          if (plVar7 == (long *)0x0) {
            plVar9 = (long *)plVar12[1];
            if (plVar9 != (long *)0x0) {
              LOCK();
              plVar11 = plVar9 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            plVar9 = (long *)*plVar12;
            if (plVar9 != (long *)0x0) {
              LOCK();
              plVar11 = plVar9 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)(*plVar9 + 0x18))();
                plVar9 = (long *)0x0;
                goto LAB_001042aa;
              }
            }
            plVar9 = (long *)0x0;
            goto LAB_001042aa;
          }
          do {
            lVar2 = *plVar12;
            lVar3 = plVar12[1];
            *plVar12 = 0;
            *plVar9 = lVar2;
            plVar9[1] = lVar3;
            lVar2 = plVar12[2];
            lVar3 = plVar12[3];
            lVar5 = plVar12[4];
            lVar4 = plVar12[5];
            *(int *)(plVar9 + 6) = (int)plVar12[6];
            plVar9[2] = lVar2;
            plVar9[3] = lVar3;
            plVar9[4] = lVar5;
            plVar9[5] = lVar4;
LAB_001042aa:
            plVar9 = plVar9 + 8;
            plVar12 = plVar12 + 8;
          } while (plVar9 < plVar7 + lVar6 * 8);
          plVar12 = *(long **)(this + 0x10);
        }
      }
      else {
        plVar9 = plVar7 + lVar6 * 8 + -8;
        plVar11 = plVar12 + lVar6 * 8 + -8;
        if (!CARRY8(lVar6 * 0x40 - 0x40,(ulong)plVar7)) {
          do {
            lVar6 = plVar11[1];
            plVar8 = plVar9 + -8;
            *plVar9 = *plVar11;
            plVar9[1] = lVar6;
            lVar6 = plVar11[3];
            lVar2 = plVar11[4];
            lVar3 = plVar11[5];
            lVar5 = plVar11[6];
            plVar9[2] = plVar11[2];
            plVar9[3] = lVar6;
            plVar9[4] = lVar2;
            plVar9[5] = lVar3;
            *(int *)(plVar9 + 6) = (int)lVar5;
            plVar9 = plVar8;
            plVar11 = plVar11 + -8;
          } while (plVar7 <= plVar8);
        }
      }
      (*Free)(plVar12);
    }
    lVar6 = *(long *)this;
    *(long **)(this + 0x10) = plVar7;
    *(ulong *)(this + 8) = uVar10;
    uVar10 = lVar6 + 1;
  }
  else {
    plVar7 = *(long **)(this + 0x10);
  }
  *(ulong *)this = uVar10;
  plVar7 = plVar7 + lVar6 * 8;
  if (plVar7 != (long *)0x0) {
    lVar6 = *(long *)param_1;
    *plVar7 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    lVar6 = *(long *)(param_1 + 8);
    plVar7[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(param_1 + 0x30);
    plVar7[2] = lVar6;
    plVar7[3] = lVar2;
    plVar7[4] = lVar3;
    plVar7[5] = lVar5;
  }
  return;
}



/* JPH::Array<JPH::CompoundShape::SubShape, JPH::STLAllocator<JPH::CompoundShape::SubShape>
   >::resize(unsigned long) */

void __thiscall
JPH::Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>>::resize
          (Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>> *this
          ,ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = *(ulong *)this;
  if (param_1 < uVar2) {
    lVar3 = *(long *)(this + 0x10);
    for (puVar8 = (undefined8 *)(lVar3 + param_1 * 0x28);
        puVar8 < (undefined8 *)(lVar3 + uVar2 * 0x28); puVar8 = puVar8 + 5) {
      plVar4 = (long *)*puVar8;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if (*(ulong *)(this + 8) < param_1) {
    puVar5 = (undefined8 *)(*Allocate)(param_1 * 0x28);
    puVar8 = *(undefined8 **)(this + 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      lVar3 = *(long *)this;
      if (puVar5 < puVar8) {
        for (puVar6 = puVar5; puVar6 < puVar5 + lVar3 * 5; puVar6 = puVar6 + 5) {
          *puVar6 = *puVar8;
          puVar6[1] = puVar8[1];
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 2);
          *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
          *(undefined4 *)((long)puVar6 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
          *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar8 + 4);
          *(undefined1 *)((long)puVar6 + 0x24) = *(undefined1 *)((long)puVar8 + 0x24);
          puVar8 = puVar8 + 5;
        }
      }
      else {
        puVar8 = puVar8 + lVar3 * 5 + -5;
        puVar6 = puVar5 + lVar3 * 5 + -5;
        if (!CARRY8(lVar3 * 0x28 - 0x28,(ulong)puVar5)) {
          do {
            puVar7 = puVar6 + -5;
            *puVar6 = *puVar8;
            puVar6[1] = puVar8[1];
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 2);
            *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
            *(undefined4 *)((long)puVar6 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
            *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar8 + 4);
            *(undefined1 *)((long)puVar6 + 0x24) = *(undefined1 *)((long)puVar8 + 0x24);
            puVar6 = puVar7;
            puVar8 = puVar8 + -5;
          } while (puVar5 <= puVar7);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x10) = puVar5;
    *(ulong *)(this + 8) = param_1;
  }
  else {
    puVar5 = *(undefined8 **)(this + 0x10);
  }
  for (puVar8 = puVar5 + *(long *)this * 5; puVar8 < puVar5 + param_1 * 5; puVar8 = puVar8 + 5) {
    *puVar8 = 0;
  }
  *(ulong *)this = param_1;
  return;
}



/* JPH::GetRTTIOfType(JPH::CompoundShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC19;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



